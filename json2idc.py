#!/usr/bin/env python3
import re
import jsonpickle
import sys
import argparse

image_size = 939072 - 0xa40  # 0x22b90 - 0x200  # .exe size - exe header
dosbox_load_seg = 0x1a2  # para
ida_load_seg = 0x1000
all_segs = set()


def addr_dbx2ida(addr: int) -> int:
    return addr + (ida_load_seg - dosbox_load_seg) * 0x10


def seg_dbx2ida(seg: int) -> int:
    return seg + ida_load_seg - dosbox_load_seg


def read_segments_map(file_name):
    """Reads a .map file and returns a dictionary of segments."""
    symbols = dict()
    with open(file_name) as f:
        lines = f.read().splitlines()
        for line in lines:
            m = re.match(
                r'^\s*MakeName\s*\(\s*(?P<address>[0-9A-Fa-fXx]+)\s*,\s*"(?P<name>\S+)"\s*\)\s*;', line)
            if not m:
                continue
            name = m["name"]
            if all(not name.startswith(x) for x in {"sub_", "loc_", "locret_", "byte_", "word_", "dword_"}):
                symbols[m["address"]] = name
    return symbols


def mark_code(daddr, instr, outfile, code_segs):
    """Processes individual code segments."""
    global all_segs

    addr = addr_dbx2ida(int(daddr, 16))
    for seg in ['cs', 'ds', 'es', 'gs', 'fs', 'ss']:
        all_segs |= set(instr[seg])

    if len(instr["cs"]) == 0:
        return

    outfile.write(f'MakeCode(0x{addr:x}); // {daddr}\n')
    cs = instr["cs"][0]
    cseg = seg_dbx2ida(cs)
    eip = addr - cseg * 0x10

    if instr['Video']:  # Identify instructions accessing video memory
        print(f'Video acc instr: {cseg:x}:{eip:x}')

    set_segment_registers_values(outfile, addr, daddr, instr)
    collect_code_segs_and_ip_ranges(code_segs, cs, eip)


def set_segment_registers_values(outfile, addr, daddr, instr):
    """Sets the default segment register values used for an instruction."""
    for seg in ['ds', 'es', 'gs', 'fs', 'ss']:
        if seg in instr and len(instr[seg]) == 1:
            outfile.write(
                f'split_sreg_range(0x{addr:x},"{seg}",0x{seg_dbx2ida(instr[seg][0]):x},2); // 0x{daddr} 0x{instr[seg][0]:x}\n')


def collect_code_segs_and_ip_ranges(code_segs, cs, eip):
    """Updates the minimum and maximum addresses for a code segment."""
    if cs not in code_segs:
        code_segs[cs] = [eip, eip]
    else:
        code_segs[cs][0] = min(code_segs[cs][0], eip)
        code_segs[cs][1] = max(code_segs[cs][1], eip)


def mark_data_access(j, outfile):
    """Processes the data segments, setting variable sizes."""
    for daddr, data in j['Data'].items():
        addr = addr_dbx2ida(int(daddr, 16))

        if data['Array'] or len(data['Sizes']) != 1:  # Don't know yet how to handle arrays
            continue

        size = data['Sizes'][0]  # Only set if it was single size
        text = {1: 'Byte', 2: 'Word', 4: 'Dword'}[size]
        outfile.write(f'Make{text}(0x{addr:x}); // 0x{daddr}\n')


def process_jumps(j, outfile):
    """Processes the jump addresses and adds function definitions."""
    for daddr in sorted(j['Jumps'], reverse=True):
        addr = addr_dbx2ida(daddr)
        outfile.write(f'add_func(0x{addr:x}); // 0x{daddr:x}\n')


def write_idc_header(outfile):
    """Writes the IDC script header."""
    outfile.write('''#include <idc.idc>
static main(){
set_inf_attr(INF_PROCNAME, "80386r");
set_target_assembler("Generic for intel 80x86");
''')


def write_idc_footer(outfile):
    """Writes the IDC script footer."""
    outfile.write("""
print("Applied addresses and types");

// produce a listing file
auto fpl = fopen(get_root_filename() + ".lst", "w");
gen_file(OFILE_LST, fpl, 0x10000, BADADDR, GENFLG_ASMTYPE);
fclose(fpl);
print("Generated lst");
}""")


def process_symbols(symbols, outfile):
    """Processes and applies symbols from the map file."""
    for symbol, addr in symbols.items():
        outfile.write(f'set_name(0x{addr:x},"_{symbol}",SN_FORCE);\n')


def main():
    parser = argparse.ArgumentParser(description="Process a libdosbox run-time info .json file and a .map file to generate IDA Pro IDC script.")
    parser.add_argument('json_file', help='Path to the .json file with run-time data')
    parser.add_argument('map_file', help='Path to the .map file with segment information')
    args = parser.parse_args()

    global all_segs
    json_fname = args.json_file
    map_fname = args.map_file

    if not json_fname.endswith('.json'):
        print('Error: Provide a .json file with run-time data')
        sys.exit(1)

    idc_fname = json_fname.replace('.json', '.idc')
    symbols = read_segments_map(map_fname)
    code_segs = dict()

    with open(idc_fname, 'w') as outfile:
        write_idc_header(outfile)

        with open(json_fname) as infile:
            j = jsonpickle.decode(infile.read())
            for daddr, instr in j['Code'].items():
                mark_code(daddr, instr, outfile, code_segs)

            if 'Data' in j:
                mark_data_access(j, outfile)

            process_jumps(j, outfile)

            print('Used segments: ')
            print(','.join([f'{seg_dbx2ida(seg):x}' for seg in sorted(all_segs)
                            if dosbox_load_seg <= seg < dosbox_load_seg + image_size // 0x10]))

        process_symbols(symbols, outfile)
        write_idc_footer(outfile)

        print("Used code segments and ip range:")
        for seg, minmax in sorted(code_segs.items()):
            print(f"{seg_dbx2ida(seg):x} {minmax[0]:x}:{minmax[1]:x}")


if __name__ == '__main__':
    main()

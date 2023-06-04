#!/usr/bin/env python3
import re

import jsonpickle
import sys

image_size = 39616 - 0x800  # 0x22b90 - 0x200  # .exe size - exe header
dosbox_load_seg = 0x1a2  # para
ida_load_seg = 0x1000

# zone? or sab2
# image_size = 262288+0x100 #0x22b90 - 0x200  # .exe size - exe header
# dosbox_load_seg = 0x192  # para
# ida_load_seg = 0xff0
all_segs = set()


def addr_dbx2ida(addr: int) -> int:
    return addr + (ida_load_seg - dosbox_load_seg) * 0x10


def seg_dbx2ida(seg: int) -> int:
    return seg + ida_load_seg - dosbox_load_seg


def read_segments_map(file_name):
    """It reads a .map file and returns a dictionary of segments.

    :param file_name: The name of the .map file
    :return: A dictionary of segments and their values.
    """
    symbols = dict()
    with open(file_name) as f:
        lines = f.read().splitlines()
        for line in lines:
            m = re.match(
                r"^\s+(?P<segment>[0-9A-F]{8}):(?P<offset>[0-9A-F]{8})\s+(?P<name>\S+)",
                line)
            if m:
                name = m["name"]
                if all(not name.startswith(x) for x in {"sub_", "loc_", "locret_", "byte_", "word_", "dword_", "start"}):
                    symbols[name] = (ida_load_seg + int(m["segment"], 16)) * 0x10 + int(m["offset"], 16)
    return symbols

json_fname = sys.argv[1]
map_fname = sys.argv[2]
if not json_fname.endswith('.json'):
    print('Provide json with Run-Time data')
    exit(1)
idc_fname = json_fname.replace('.json', '.idc')

symbols = read_segments_map(map_fname)

with open(idc_fname, 'w') as outfile:
    outfile.write('''#include <idc.idc>
static main(){
set_inf_attr(INF_PROCNAME, "80386r");
set_target_assembler("Generic for intel 80x86");
''')
    with open(json_fname) as infile:
        j = jsonpickle.decode(infile.read())
        for daddr, instr in j['Code'].items():
            addr = addr_dbx2ida(int(daddr, 16))
            for seg in ['cs', 'ds', 'es', 'gs', 'fs', 'ss']:
                all_segs |= set(instr[seg])
        all_segs = list(sorted(all_segs))

        for daddr, instr in j['Code'].items():
            addr = addr_dbx2ida(int(daddr, 16))

            outfile.write(f'MakeCode(0x{addr:x}); // {daddr}\n')

            if instr['Video']:  # Identify instructions accessing video memory
                cseg = seg_dbx2ida(instr["cs"][0])
                print(f'Video acc instr: {cseg:x}:{addr - cseg * 0x10:x}')

            for seg in ['ds', 'es', 'gs', 'fs', 'ss']:  # set default reg values used for instruction
                if seg in instr and len(instr[seg]) == 1:
                    outfile.write(
                        f'split_sreg_range(0x{addr:x},"{seg}",0x{seg_dbx2ida(instr[seg][0]):x},2); // 0x{daddr} 0x{instr[seg][0]:x}\n')

        if 'Data' in j:
            for daddr, data in j['Data'].items():  # Set variables sizes
                addr = addr_dbx2ida(int(daddr, 16))

                if not data['Array'] and len(data['Sizes']) == 1:  # Don't know yet how to handle arrays
                    size = data['Sizes'][0]  # Only set if it was single size
                    text = {1: 'Byte', 2: 'Word', 4: 'Dword'}[size]
                    outfile.write(
                        f'Make{text}(0x{addr:x}); // 0x{daddr}\n')

        for daddr in sorted(j['Jumps'], reverse=True):
            addr = addr_dbx2ida(daddr)
            outfile.write(f'add_func(0x{addr:x}); // 0x{daddr:x}\n')

        print('Used segs: ')
        print(','.join([f'{seg_dbx2ida(seg):x}' for seg in sorted(all_segs) if
                        dosbox_load_seg <= seg < dosbox_load_seg + image_size // 0x10]))

    for symbol, addr in symbols.items():
        outfile.write(f'set_name(0x{addr:x},"_{symbol}",SN_FORCE);\n')
    outfile.write("""
print("Applied addresses and types");
//print(get_root_filename());
// produce a listing file
auto fpl = fopen(get_root_filename() + ".lst", "w");
gen_file(OFILE_LST, fpl, 0x10000, BADADDR, GENFLG_ASMTYPE);
fclose(fpl);
print("Generated lst");

// produce a map file
//auto fpm = fopen(get_root_filename() + ".map", "w");
//gen_file(OFILE_MAP, fpm, 0x10000, BADADDR, GENFLG_MAPSEGS|GENFLG_MAPNAME|GENFLG_MAPDMNG|GENFLG_MAPLOC);
//fclose(fpm);
//print("Generated map");
}""")



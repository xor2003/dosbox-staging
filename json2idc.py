#!/usr/bin/env python3
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


inp = sys.argv[1]
if not inp.endswith('.json'):
    print('Provide json with Run-Time data')
    exit(1)
out = inp.replace('.json', '.idc')

with open(out, 'w') as outfile:
    outfile.write('''#include <idc.idc>
static main(){
set_inf_attr(INF_PROCNAME, "80386r");
set_target_assembler("Generic for intel 80x86");
''')
    with open(inp) as infile:
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

    outfile.write("""
print("Applied addresses and types");
//print(get_root_filename());
// produce a listing file
//gen_file(OFILE_LST, get_root_filename() + ".lst", 0, 0, GENFLG_ASMTYPE);
//print("Generated lst");

// produce a map file
//gen_file(OFILE_MAP, get_root_filename() + ".map", 0, 0, GENFLG_MAPSEGS|GENFLG_MAPNAME|GENFLG_MAPDMNG|GENFLG_MAPLOC);
//print("Generated map");
}""")

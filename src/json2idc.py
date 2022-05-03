import jsonpickle

dbx_img_offset = 0x1a2  # para
ida_load = 0x1000

with open("rt_data.idc", 'w') as outfile:
    outfile.write('''#include <idc.idc>
static main(){
''')
    with open("rt_data.json") as infile:
        j = jsonpickle.decode(infile.read())
        for daddr, instr in j['Code'].items():
            addr = int(daddr, 16) + (ida_load - dbx_img_offset) * 0x10

            if instr['Video']:
                cseg = instr["cs"][0] + ida_load - dbx_img_offset
                print(f'video {cseg:x}:{addr - cseg * 0x10:x}')

            for seg in ['ds', 'es', 'gs', 'fs', 'ss']:
                if seg in instr and len(instr[seg]) == 1:
                    outfile.write(
                        f'SetRegEx(0x{addr:x},"{seg.upper()}",0x{instr[seg][0] - dbx_img_offset + ida_load:x},SR_user);\n')

        for addr, data in j['Data'].items():
            addr = int(addr, 16) + (ida_load - dbx_img_offset) * 0x10

            if not data['Array'] and len(data['Sizes']) == 1:
                size = data['Sizes'][0]
                text = {1: 'Byte', 2: 'Word', 4: 'Dword'}[size]
                outfile.write(
                    f'Make{text}(0x{addr:x});\n')

    outfile.write('}')

import jsonpickle

image_size = 262288+0x100 #0x22b90 - 0x200  # .exe size - exe header
dbx_img_offset = 0x192  # para
ida_load = 0xff0

def addr_dbx2ida(addr):
    return addr + (ida_load - dbx_img_offset) * 0x10


with open("rt_data.idc", 'w') as outfile:
    outfile.write('''#include <idc.idc>
static main(){
''')
    with open("rt_data.json") as infile:
        j = jsonpickle.decode(infile.read())
        whole_segs = set()
        for daddr, instr in j['Code'].items():
            addr = addr_dbx2ida(int(daddr, 16))

            outfile.write(f'MakeCode(0x{addr:x});\n');

            if instr['Video']:  # Identify instructions accessing video memory
                cseg = addr_dbx2ida(instr["cs"][0] * 0x10) // 0x10
                print(f'video {cseg:x}:{addr - cseg * 0x10:x}')

            for seg in ['ds', 'es', 'gs', 'fs', 'ss']:  # set default reg values used for instruction
                if seg in instr and len(instr[seg]) == 1:
                    outfile.write(
                        f'split_sreg_range(0x{addr:x},"{seg }",0x{addr_dbx2ida(instr[seg][0] * 0x10) // 0x10:x},2);\n')
                    #    f'SetRegEx(0x{addr:x},"{seg.upper()}",0x{addr_dbx2ida(instr[seg][0] * 0x10) // 0x10:x},SR_user);\n')
                    #split_sreg_range(0X103C8,"ds",0X12E6,2);

            for seg in ['cs', 'ds', 'es', 'gs', 'fs', 'ss']:
                whole_segs |= set([addr_dbx2ida(a * 0x10) // 0x10 for a in instr[seg]])

        for addr, data in j['Data'].items():  # Set variables sizes
            addr = addr_dbx2ida(int(addr, 16))

            if not data['Array'] and len(data['Sizes']) == 1:  # Don't know yet how to handle arrays
                size = data['Sizes'][0]  # Only set if it was single size
                text = {1: 'Byte', 2: 'Word', 4: 'Dword'}[size]
                outfile.write(
                    f'Make{text}(0x{addr:x});\n')
        #  Used segs
        print(','.join([f'{seg:x}' for seg in sorted(whole_segs) if ida_load <= seg < ida_load + image_size//0x10]))

    outfile.write('}')

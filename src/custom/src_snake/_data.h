
#ifndef ___DATA_H__
#define ___DATA_H__
#include "../asm.h"


#pragma pack(push, 1)
namespace m2c{
struct Memory{
db dummyb_0[6688];
char msg[28]; // 01a2:0000
db instructions; // 01a2:001c
char dummyb_1a3d[41]; // 01a2:001c
char dummyb_1a66[24]; // 01a2:001c
char dummyb_1a7e[26]; // 01a2:001c
char athanksforplayi[37]; // 01a2:0078
char gameovermsg[28]; // 01a2:009d
char scoremsg[8]; // 01a2:00b9
char head[1]; // 01a2:00c1
db dummyb_1ae2; // 01a2:00c2
db dummyb_1ae3; // 01a2:00c3
char body[1]; // 01a2:00c4
db dummyb_1ae5; // 01a2:00c5
db dummyb_1ae6; // 01a2:00c6
db dummyb_1ae7; // 01a2:00c7
db dummyb_1ae8; // 01a2:00c8
db dummyb_1ae9; // 01a2:00c9
db dummyb_1aea; // 01a2:00ca
db dummyb_1aeb; // 01a2:00cb
db dummyb_1aec; // 01a2:00cc
db dummyb_1aed; // 01a2:00cd
db dummyb_1aee; // 01a2:00ce
db dummyb_1aef; // 01a2:00cf
db dummyb_1af0; // 01a2:00d0
db dummyb_1af1; // 01a2:00d1
db dummyb_1af2; // 01a2:00d2
db dummyb_1af3; // 01a2:00d3
db dummyb_1af4; // 01a2:00d4
db dummyb_1af5; // 01a2:00d5
db dummyb_1af6; // 01a2:00d6
db dummyb_1af7; // 01a2:00d7
db dummyb_1af8; // 01a2:00d8
db dummyb_1af9; // 01a2:00d9
db dummyb_1afa; // 01a2:00da
db dummyb_1afb; // 01a2:00db
db dummyb_1afc; // 01a2:00dc
db dummyb_1afd; // 01a2:00dd
db dummyb_1afe; // 01a2:00de
db dummyb_1aff; // 01a2:00df
db dummyb_1b00; // 01a2:00e0
db dummyb_1b01; // 01a2:00e1
db dummyb_1b02; // 01a2:00e2
db dummyb_1b03; // 01a2:00e3
db dummyb_1b04; // 01a2:00e4
db dummyb_1b05; // 01a2:00e5
db dummyb_1b06; // 01a2:00e6
db dummyb_1b07; // 01a2:00e7
db dummyb_1b08; // 01a2:00e8
db dummyb_1b09; // 01a2:00e9
db dummyb_1b0a; // 01a2:00ea
db dummyb_1b0b; // 01a2:00eb
db dummyb_1b0c; // 01a2:00ec
db dummyb_1b0d; // 01a2:00ed
db dummyb_1b0e; // 01a2:00ee
db dummyb_1b0f; // 01a2:00ef
db dummyb_1b10; // 01a2:00f0
db dummyb_1b11; // 01a2:00f1
db dummyb_1b12; // 01a2:00f2
db dummyb_1b13; // 01a2:00f3
db segmentcount; // 01a2:00f4
db fruitactive; // 01a2:00f5
db fruitx; // 01a2:00f6
db fruity; // 01a2:00f7
db gameover; // 01a2:00f8
db quit; // 01a2:00f9
db delaytime; // 01a2:00fa
db dummyb_1b1b; // 01a2:00fb
db dummyb_1b1c; // 01a2:00fc
db dummyb_1b1d; // 01a2:00fd
db dummyb_1b1e; // 01a2:00fe
db dummyb_1b1f; // 01a2:00ff

#ifdef DOSBOX_CUSTOM
    db filll[1024*1024*16];
#endif
                        db stack[STACK_SIZE];
                        db heap[HEAP_SIZE];
                };
}
#pragma pack(pop)

#endif

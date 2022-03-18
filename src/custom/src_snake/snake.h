#ifndef __M2C_SNAKE_STUBS_H__
#define __M2C_SNAKE_STUBS_H__

/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */
#include <algorithm>
#include <iterator>

#include "../asm.h"



extern db& default_seg;
extern db& data;
extern char (& msg)[28];
extern db& instructions;
extern char (& dummyb_1a3d)[41];
extern char (& dummyb_1a66)[24];
extern char (& dummyb_1a7e)[26];
extern char (& athanksforplayi)[37];
extern char (& gameovermsg)[28];
extern char (& scoremsg)[8];
extern char (& head)[1];
extern db& dummyb_1ae2;
extern db& dummyb_1ae3;
extern char (& body)[1];
extern db& dummyb_1ae5;
extern db& dummyb_1ae6;
extern db& dummyb_1ae7;
extern db& dummyb_1ae8;
extern db& dummyb_1ae9;
extern db& dummyb_1aea;
extern db& dummyb_1aeb;
extern db& dummyb_1aec;
extern db& dummyb_1aed;
extern db& dummyb_1aee;
extern db& dummyb_1aef;
extern db& dummyb_1af0;
extern db& dummyb_1af1;
extern db& dummyb_1af2;
extern db& dummyb_1af3;
extern db& dummyb_1af4;
extern db& dummyb_1af5;
extern db& dummyb_1af6;
extern db& dummyb_1af7;
extern db& dummyb_1af8;
extern db& dummyb_1af9;
extern db& dummyb_1afa;
extern db& dummyb_1afb;
extern db& dummyb_1afc;
extern db& dummyb_1afd;
extern db& dummyb_1afe;
extern db& dummyb_1aff;
extern db& dummyb_1b00;
extern db& dummyb_1b01;
extern db& dummyb_1b02;
extern db& dummyb_1b03;
extern db& dummyb_1b04;
extern db& dummyb_1b05;
extern db& dummyb_1b06;
extern db& dummyb_1b07;
extern db& dummyb_1b08;
extern db& dummyb_1b09;
extern db& dummyb_1b0a;
extern db& dummyb_1b0b;
extern db& dummyb_1b0c;
extern db& dummyb_1b0d;
extern db& dummyb_1b0e;
extern db& dummyb_1b0f;
extern db& dummyb_1b10;
extern db& dummyb_1b11;
extern db& dummyb_1b12;
extern db& dummyb_1b13;
extern db& segmentcount;
extern db& fruitactive;
extern db& fruitx;
extern db& fruity;
extern db& gameover;
extern db& quit;
extern db& delaytime;
extern db& dummyb_1b1b;
extern db& dummyb_1b1c;
extern db& dummyb_1b1d;
extern db& dummyb_1b1e;
extern db& dummyb_1b1f;
extern db& seg001;
namespace m2c{
void   Initializer();
static const dd kbegin = 0x1001;
static const dd kmainproc = 0x1002;
static const dd kmain = 0x1b20000;
static const dd kret_1b2_19 = 0x1b20019;
static const dd kloc_1012d = 0x1b2002d;
static const dd kret_1b2_30 = 0x1b20030;
static const dd kret_1b2_3a = 0x1b2003a;
static const dd kret_1b2_3d = 0x1b2003d;
static const dd kret_1b2_47 = 0x1b20047;
static const dd kret_1b2_51 = 0x1b20051;
static const dd kret_1b2_54 = 0x1b20054;
static const dd kloc_10156 = 0x1b20056;
static const dd kret_1b2_6a = 0x1b2006a;
static const dd kret_1b2_6d = 0x1b2006d;
static const dd kloc_1016f = 0x1b2006f;
static const dd kret_1b2_83 = 0x1b20083;
static const dd kret_1b2_86 = 0x1b20086;
static const dd kloc_10188 = 0x1b20088;
static const dd kdelay = 0x1b20092;
static const dd kloc_10198 = 0x1b20098;
static const dd kfruitgeneration = 0x1b200a3;
static const dd kloc_101ab = 0x1b200ab;
static const dd kloc_101ec = 0x1b200ec;
static const dd kret_1b2_108 = 0x1b20108;
static const dd klocret_10221 = 0x1b20121;
static const dd kdispdigit = 0x1b20122;
static const dd kdispnum = 0x1b2012a;
static const dd kret_1b2_139 = 0x1b20139;
static const dd kret_1b2_13d = 0x1b2013d;
static const dd kloc_1023e = 0x1b2013e;
static const dd ksetcursorpos = 0x1b20141;
static const dd kdraw = 0x1b2014a;
static const dd kret_1b2_154 = 0x1b20154;
static const dd kret_1b2_15a = 0x1b2015a;
static const dd kret_1b2_164 = 0x1b20164;
static const dd kloc_10268 = 0x1b20168;
static const dd kret_1b2_174 = 0x1b20174;
static const dd kloc_10279 = 0x1b20179;
static const dd kret_1b2_186 = 0x1b20186;
static const dd kreadchar = 0x1b2018c;
static const dd kloc_10295 = 0x1b20195;
static const dd kkeyboardfunctions = 0x1b2019c;
static const dd kret_1b2_19f = 0x1b2019f;
static const dd kloc_102b6 = 0x1b201b6;
static const dd kloc_102c8 = 0x1b201c8;
static const dd kloc_102da = 0x1b201da;
static const dd kloc_102eb = 0x1b201eb;
static const dd kloc_102f1 = 0x1b201f1;
static const dd kshiftsnake = 0x1b201f6;
static const dd kloc_10305 = 0x1b20205;
static const dd kloc_10317 = 0x1b20217;
static const dd kloc_1032a = 0x1b2022a;
static const dd kloc_10334 = 0x1b20234;
static const dd kloc_1033c = 0x1b2023c;
static const dd kloc_1033e = 0x1b2023e;
static const dd kret_1b2_243 = 0x1b20243;
static const dd kret_1b2_255 = 0x1b20255;
static const dd kloc_1036c = 0x1b2026c;
static const dd kloc_10371 = 0x1b20271;
static const dd kret_1b2_299 = 0x1b20299;
static const dd kprintbox = 0x1b2029f;
static const dd kloc_103a8 = 0x1b202a8;
static const dd kret_1b2_2ab = 0x1b202ab;
static const dd kloc_103b2 = 0x1b202b2;
static const dd kret_1b2_2b5 = 0x1b202b5;
static const dd kloc_103bc = 0x1b202bc;
static const dd kret_1b2_2bf = 0x1b202bf;
static const dd kloc_103c6 = 0x1b202c6;
static const dd kret_1b2_2c9 = 0x1b202c9;
static const dd kwritecharat = 0x1b202ce;
static const dd kreadcharat = 0x1b202f9;
static const dd kwritestringat = 0x1b20324;
static const dd kloc_1044a = 0x1b2034a;
static const dd kloc_10458 = 0x1b20358;
static const dd k_group1 = 0x1b20000;
}
bool _group1(m2c::_offsets, struct m2c::_STATE*);
bool delay(m2c::_offsets, struct m2c::_STATE*);
bool dispdigit(m2c::_offsets, struct m2c::_STATE*);
bool dispnum(m2c::_offsets, struct m2c::_STATE*);
bool draw(m2c::_offsets, struct m2c::_STATE*);
bool fruitgeneration(m2c::_offsets, struct m2c::_STATE*);
bool keyboardfunctions(m2c::_offsets, struct m2c::_STATE*);
bool asmmain(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
bool printbox(m2c::_offsets, struct m2c::_STATE*);
bool readchar(m2c::_offsets, struct m2c::_STATE*);
bool readcharat(m2c::_offsets, struct m2c::_STATE*);
bool setcursorpos(m2c::_offsets, struct m2c::_STATE*);
bool shiftsnake(m2c::_offsets, struct m2c::_STATE*);
bool writecharat(m2c::_offsets, struct m2c::_STATE*);
bool writestringat(m2c::_offsets, struct m2c::_STATE*);

#ifndef DOSBOX_CUSTOM
static
#endif
bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);


#endif

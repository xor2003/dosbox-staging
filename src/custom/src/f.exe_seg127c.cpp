/* THIS IS GENERATED FILE */

        
#include "f.exe.h"

                

 bool sub_12811(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12811:
    _begin:
cs=0x41e;eip=0x000051; 	T(CLI);	// 6226                  cli ;~ 041E:0051
cs=0x41e;eip=0x000052; 	T(dx = 0x3DA;);	// 6227                  mov     dx, 3DAh ;~ 041E:0052
loc_12815:
	// 4505 
cs=0x41e;eip=0x000055; 	S(IN(al, dx));	// 6230                  in      al, dx          ; Video status bits: ;~ 041E:0055
cs=0x41e;eip=0x000056; 	T(TEST(al, 8));	// 6235                  test    al, 8 ;~ 041E:0056
cs=0x41e;eip=0x000058; 	J(JZ(loc_12815));	// 6236                  jz      short loc_12815 ;~ 041E:0058
loc_1281a:
	// 4506 
cs=0x41e;eip=0x00005a; 	S(IN(al, dx));	// 6239                  in      al, dx          ; Video status bits: ;~ 041E:005A
cs=0x41e;eip=0x00005b; 	T(TEST(al, 8));	// 6244                  test    al, 8 ;~ 041E:005B
cs=0x41e;eip=0x00005d; 	J(JNZ(loc_1281a));	// 6245                  jnz     short loc_1281A ;~ 041E:005D
cs=0x41e;eip=0x00005f; 	T(bl = 1;);	// 6246                  mov     bl, 1 ;~ 041E:005F
cs=0x41e;eip=0x000061; 	T(XOR(cx, cx));	// 6247                  xor     cx, cx ;~ 041E:0061
loc_12823:
	// 4507 
cs=0x41e;eip=0x000063; 	S(IN(al, dx));	// 6251                  in      al, dx          ; Video status bits: ;~ 041E:0063
cs=0x41e;eip=0x000064; 	T(TEST(al, 8));	// 6256                  test    al, 8 ;~ 041E:0064
cs=0x41e;eip=0x000066; 	J(JNZ(loc_12833));	// 6257                  jnz     short loc_12833 ;~ 041E:0066
cs=0x41e;eip=0x000068; 	T(AND(al, 1));	// 6258                  and     al, 1 ;~ 041E:0068
cs=0x41e;eip=0x00006a; 	T(CMP(al, bl));	// 6259                  cmp     al, bl ;~ 041E:006A
cs=0x41e;eip=0x00006c; 	J(JZ(loc_12823));	// 6260                  jz      short loc_12823 ;~ 041E:006C
cs=0x41e;eip=0x00006e; 	T(XOR(bl, 1));	// 6261                  xor     bl, 1 ;~ 041E:006E
cs=0x41e;eip=0x000071; 	J(LOOP(loc_12823));	// 6262                  loop    loc_12823 ;~ 041E:0071
loc_12833:
	// 4508 
cs=0x41e;eip=0x000073; 	T(STI);	// 6265                  sti ;~ 041E:0073
cs=0x41e;eip=0x000074; 	T(NEG(cx));	// 6266                  neg     cx ;~ 041E:0074
cs=0x41e;eip=0x000076; 	T(XOR(al, al));	// 6267                  xor     al, al ;~ 041E:0076
cs=0x41e;eip=0x000078; 	T(CMP(cx, 0x258));	// 6268                  cmp     cx, 258h ;~ 041E:0078
cs=0x41e;eip=0x00007c; 	J(JC(loc_12840));	// 6269                  jb      short loc_12840 ;~ 041E:007C
cs=0x41e;eip=0x00007e; 	T(al = 0x0FF;);	// 6270                  mov     al, 0FFh ;~ 041E:007E
loc_12840:
	// 4509 
cs=0x41e;eip=0x000080; 	X(byte_11c6a = al;);	// 6273                  mov     byte_11C6A, al ;~ 041E:0080
cs=0x41e;eip=0x000083; 	J(RETN(0));	// 6274                  retn ;~ 041E:0083

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_12815: 	goto loc_12815;
        case m2c::kloc_1281a: 	goto loc_1281a;
        case m2c::kloc_12823: 	goto loc_12823;
        case m2c::kloc_12833: 	goto loc_12833;
        case m2c::kloc_12840: 	goto loc_12840;
        case m2c::ksub_12811: 	goto sub_12811;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12844(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12844:
    _begin:
cs=0x41e;eip=0x000084; 	X(PUSH(es));	// 6283                  push    es ;~ 041E:0084
cs=0x41e;eip=0x000085; 	X(PUSH(di));	// 6284                  push    di ;~ 041E:0085
cs=0x41e;eip=0x000086; 	T(ax = 0;);	// 6285                  mov     ax, 0 ;~ 041E:0086
cs=0x41e;eip=0x000089; 	T(es = ax;);	// 6286                  mov     es, ax ;~ 041E:0089
cs=0x41e;eip=0x00008b; 	T(di = 0x440;);	// 6287                  mov     di, 440h ;~ 041E:008B
cs=0x41e;eip=0x00008e; 	X(MOV(*(raddr(es,di)), 1));	// 6288                  mov     byte ptr es:[di], 1 ;~ 041E:008E
cs=0x41e;eip=0x000092; 	T(DEC(di));	// 6289                  dec     di ;~ 041E:0092
loc_12853:
	// 4510 
cs=0x41e;eip=0x000093; 	T(MOV(al, *(raddr(es,di))));	// 6292                  mov     al, es:[di] ;~ 041E:0093
cs=0x41e;eip=0x000096; 	T(AND(al, 0x0F));	// 6293                  and     al, 0Fh ;~ 041E:0096
cs=0x41e;eip=0x000098; 	J(JNZ(loc_12853));	// 6294                  jnz     short loc_12853 ;~ 041E:0098
cs=0x41e;eip=0x00009a; 	X(POP(di));	// 6295                  pop     di ;~ 041E:009A
cs=0x41e;eip=0x00009b; 	X(POP(es));	// 6296                  pop     es ;~ 041E:009B
cs=0x41e;eip=0x00009c; 	J(RETN(0));	// 6297                  retn ;~ 041E:009C

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_12853: 	goto loc_12853;
        case m2c::ksub_12844: 	goto sub_12844;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1285d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1285d:
    _begin:
cs=0x41e;eip=0x00009d; 	X(PUSH(cx));	// 6305                  push    cx ;~ 041E:009D
cs=0x41e;eip=0x00009e; 	T(CLI);	// 6306                  cli ;~ 041E:009E
cs=0x41e;eip=0x00009f; 	T(al = 0x80;);	// 6307                  mov     al, 80h ;~ 041E:009F
cs=0x41e;eip=0x0000a1; 	S(OUT(0x43, al));	// 6308                  out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:00A1
cs=0x41e;eip=0x0000a3; 	S(IN(al, 0x42));	// 6309                  in      al, 42h         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:00A3
cs=0x41e;eip=0x0000a5; 	T(bl = al;);	// 6310                  mov     bl, al ;~ 041E:00A5
cs=0x41e;eip=0x0000a7; 	S(IN(al, 0x42));	// 6311                  in      al, 42h         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:00A7
cs=0x41e;eip=0x0000a9; 	T(bh = al;);	// 6312                  mov     bh, al ;~ 041E:00A9
cs=0x41e;eip=0x0000ab; 	T(cx = 0x100;);	// 6313                  mov     cx, 100h ;~ 041E:00AB
loc_1286e:
	// 4511 
cs=0x41e;eip=0x0000ae; 	J(LOOP(loc_1286e));	// 6316                  loop    loc_1286E ;~ 041E:00AE
cs=0x41e;eip=0x0000b0; 	T(al = 0x80;);	// 6317                  mov     al, 80h ;~ 041E:00B0
cs=0x41e;eip=0x0000b2; 	S(OUT(0x43, al));	// 6318                  out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:00B2
cs=0x41e;eip=0x0000b4; 	S(IN(al, 0x42));	// 6319                  in      al, 42h         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:00B4
cs=0x41e;eip=0x0000b6; 	T(dl = al;);	// 6320                  mov     dl, al ;~ 041E:00B6
cs=0x41e;eip=0x0000b8; 	S(IN(al, 0x42));	// 6321                  in      al, 42h         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:00B8
cs=0x41e;eip=0x0000ba; 	T(dh = al;);	// 6322                  mov     dh, al ;~ 041E:00BA
cs=0x41e;eip=0x0000bc; 	T(STI);	// 6323                  sti ;~ 041E:00BC
cs=0x41e;eip=0x0000bd; 	T(SUB(bx, dx));	// 6324                  sub     bx, dx ;~ 041E:00BD
cs=0x41e;eip=0x0000bf; 	X(POP(cx));	// 6325                  pop     cx ;~ 041E:00BF
cs=0x41e;eip=0x0000c0; 	J(RETN(0));	// 6326                  retn ;~ 041E:00C0

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1286e: 	goto loc_1286e;
        case m2c::ksub_1285d: 	goto sub_1285d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12881(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12881:
    _begin:
cs=0x41e;eip=0x0000c1; 	S(IN(al, 0x61));	// 6334                  in      al, 61h         ; PC/XT PPI port B bits: ;~ 041E:00C1
cs=0x41e;eip=0x0000c3; 	X(byte_11c96 = al;);	// 6342                  mov     byte_11C96, al ;~ 041E:00C3
cs=0x41e;eip=0x0000c6; 	T(OR(al, 1));	// 6343                  or      al, 1 ;~ 041E:00C6
cs=0x41e;eip=0x0000c8; 	T(AND(al, 0x0FD));	// 6344                  and     al, 0FDh ;~ 041E:00C8
cs=0x41e;eip=0x0000ca; 	S(OUT(0x61, al));	// 6345                  out     61h, al         ; PC/XT PPI port B bits: ;~ 041E:00CA
cs=0x41e;eip=0x0000cc; 	T(al = 0x0B6;);	// 6353                  mov     al, 0B6h ;~ 041E:00CC
cs=0x41e;eip=0x0000ce; 	S(OUT(0x43, al));	// 6354                  out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:00CE
cs=0x41e;eip=0x0000d0; 	J({;});	// 6355                  jmp     short $+2 ;~ 041E:00D0
loc_12892:
	// 4512 
cs=0x41e;eip=0x0000d2; 	T(XOR(al, al));	// 6359                  xor     al, al ;~ 041E:00D2
cs=0x41e;eip=0x0000d4; 	S(OUT(0x42, al));	// 6360                  out     42h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:00D4
cs=0x41e;eip=0x0000d6; 	J({;});	// 6361                  jmp     short $+2 ;~ 041E:00D6
loc_12898:
	// 4513 
cs=0x41e;eip=0x0000d8; 	S(OUT(0x42, al));	// 6365                  out     42h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:00D8
cs=0x41e;eip=0x0000da; 	J({;});	// 6366                  jmp     short $+2 ;~ 041E:00DA
loc_1289c:
	// 4514 
cs=0x41e;eip=0x0000dc; 	X(word_11c93 = 0;);	// 6370                  mov     word_11C93, 0 ;~ 041E:00DC
cs=0x41e;eip=0x0000e2; 	T(cx = 0x10;);	// 6371                  mov     cx, 10h ;~ 041E:00E2
loc_128a5:
	// 4515 
cs=0x41e;eip=0x0000e5; 	J(CALL(sub_1285d,0));	// 6374                  call    sub_1285D ;~ 041E:00E5
cs=0x41e;eip=0x0000e8; 	X(ADD(word_11c93, bx));	// 6375                  add     word_11C93, bx ;~ 041E:00E8
cs=0x41e;eip=0x0000ec; 	J(LOOP(loc_128a5));	// 6376                  loop    loc_128A5 ;~ 041E:00EC
cs=0x41e;eip=0x0000ee; 	T(bx = word_11c93;);	// 6377                  mov     bx, word_11C93 ;~ 041E:00EE
cs=0x41e;eip=0x0000f2; 	T(SHR(bx, 1));	// 6378                  shr     bx, 1 ;~ 041E:00F2
cs=0x41e;eip=0x0000f4; 	T(SHR(bx, 1));	// 6379                  shr     bx, 1 ;~ 041E:00F4
cs=0x41e;eip=0x0000f6; 	T(SHR(bx, 1));	// 6380                  shr     bx, 1 ;~ 041E:00F6
cs=0x41e;eip=0x0000f8; 	T(SHR(bx, 1));	// 6381                  shr     bx, 1 ;~ 041E:00F8
cs=0x41e;eip=0x0000fa; 	T(CMP(bx, 0x0A28));	// 6382                  cmp     bx, 0A28h ;~ 041E:00FA
cs=0x41e;eip=0x0000fe; 	J(JLE(loc_128c3));	// 6383                  jle     short loc_128C3 ;~ 041E:00FE
cs=0x41e;eip=0x000100; 	T(bx = 0x0A28;);	// 6384                  mov     bx, 0A28h ;~ 041E:0100
loc_128c3:
	// 4516 
cs=0x41e;eip=0x000103; 	T(dx = 0;);	// 6387                  mov     dx, 0 ;~ 041E:0103
cs=0x41e;eip=0x000106; 	T(ax = 0x5140;);	// 6388                  mov     ax, 5140h ;~ 041E:0106
cs=0x41e;eip=0x000109; 	T(DIV2(bx));	// 6389                  div     bx ;~ 041E:0109
cs=0x41e;eip=0x00010b; 	T(INC(ax));	// 6390                  inc     ax ;~ 041E:010B
cs=0x41e;eip=0x00010c; 	T(ah = 0;);	// 6391                  mov     ah, 0 ;~ 041E:010C
cs=0x41e;eip=0x00010e; 	X(word_1280d = ax;);	// 6392                  mov     cs:word_1280D, ax ;~ 041E:010E
cs=0x41e;eip=0x000112; 	T(SHR(ax, 1));	// 6393                  shr     ax, 1 ;~ 041E:0112
cs=0x41e;eip=0x000114; 	T(SHR(ax, 1));	// 6394                  shr     ax, 1 ;~ 041E:0114
cs=0x41e;eip=0x000116; 	T(SHR(ax, 1));	// 6395                  shr     ax, 1 ;~ 041E:0116
cs=0x41e;eip=0x000118; 	T(INC(ax));	// 6396                  inc     ax ;~ 041E:0118
cs=0x41e;eip=0x000119; 	T(ah = 0;);	// 6397                  mov     ah, 0 ;~ 041E:0119
cs=0x41e;eip=0x00011b; 	X(word_1280f = ax;);	// 6398                  mov     cs:word_1280F, ax ;~ 041E:011B
cs=0x41e;eip=0x00011f; 	T(al = byte_11c96;);	// 6399                  mov     al, byte_11C96 ;~ 041E:011F
cs=0x41e;eip=0x000122; 	S(OUT(0x61, al));	// 6400                  out     61h, al         ; PC/XT PPI port B bits: ;~ 041E:0122
cs=0x41e;eip=0x000124; 	J(RETN(0));	// 6408                  retn ;~ 041E:0124

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_12892: 	goto loc_12892;
        case m2c::kloc_12898: 	goto loc_12898;
        case m2c::kloc_1289c: 	goto loc_1289c;
        case m2c::kloc_128a5: 	goto loc_128a5;
        case m2c::kloc_128c3: 	goto loc_128c3;
        case m2c::ksub_12881: 	goto sub_12881;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group3(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group3:
    _begin:
sub_128e5:
	// 6415 
cs=0x41e;eip=0x000125; 	T(al = 0x0B6;);	// 6416                  mov     al, 0B6h ;~ 041E:0125
cs=0x41e;eip=0x000127; 	S(OUT(0x43, al));	// 6417                  out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:0127
cs=0x41e;eip=0x000129; 	T(XOR(ax, ax));	// 6418                  xor     ax, ax ;~ 041E:0129
cs=0x41e;eip=0x00012b; 	S(OUT(0x42, al));	// 6419                  out     42h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:012B
cs=0x41e;eip=0x00012d; 	T(al = ah;);	// 6420                  mov     al, ah ;~ 041E:012D
cs=0x41e;eip=0x00012f; 	S(OUT(0x42, al));	// 6421                  out     42h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:012F
cs=0x41e;eip=0x000131; 	J(CALL(sub_12844,0));	// 6422                  call    sub_12844 ;~ 041E:0131
cs=0x41e;eip=0x000134; 	J(CALL(sub_12881,0));	// 6423                  call    sub_12881 ;~ 041E:0134
cs=0x41e;eip=0x000137; 	T(bl = 0x94;);	// 6424                  mov     bl, 94h ;~ 041E:0137
cs=0x41e;eip=0x000139; 	T(al = 0x0A5;);	// 6425                  mov     al, 0A5h ;~ 041E:0139
cs=0x41e;eip=0x00013b; 	X(word_11c99 = 0;);	// 6426                  mov     word_11C99, 0 ;~ 041E:013B
cs=0x41e;eip=0x000141; 	J(CALL(sub_12f38,0));	// 6427                  call    sub_12F38 ;~ 041E:0141
cs=0x41e;eip=0x000144; 	X(word_11c99 = 0;);	// 6428                  mov     word_11C99, 0 ;~ 041E:0144
cs=0x41e;eip=0x00014a; 	T(dx = 0x43;);	// 6429                  mov     dx, 43h ; 'C' ;~ 041E:014A
cs=0x41e;eip=0x00014d; 	T(al = 0x80;);	// 6430                  mov     al, 80h ;~ 041E:014D
cs=0x41e;eip=0x00014f; 	S(OUT(dx, al));	// 6431                  out     dx, al          ; Timer 8253-5 (AT: 8254.2). ;~ 041E:014F
cs=0x41e;eip=0x000150; 	J({;});	// 6432                  jmp     short $+2 ;~ 041E:0150
loc_12912:
	// 4517 
cs=0x41e;eip=0x000152; 	S(IN(al, 0x42));	// 6436                  in      al, 42h         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:0152
cs=0x41e;eip=0x000154; 	T(ah = al;);	// 6437                  mov     ah, al ;~ 041E:0154
cs=0x41e;eip=0x000156; 	J({;});	// 6438                  jmp     short $+2 ;~ 041E:0156
loc_12918:
	// 4518 
cs=0x41e;eip=0x000158; 	T(al = 0x80;);	// 6442                  mov     al, 80h ;~ 041E:0158
cs=0x41e;eip=0x00015a; 	S(OUT(dx, al));	// 6443                  out     dx, al          ; Timer 8253-5 (AT: 8254.2). ;~ 041E:015A
cs=0x41e;eip=0x00015b; 	J({;});	// 6444                  jmp     short $+2 ;~ 041E:015B
loc_1291d:
	// 4519 
cs=0x41e;eip=0x00015d; 	S(IN(al, 0x42));	// 6448                  in      al, 42h         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:015D
cs=0x41e;eip=0x00015f; 	T(CMP(ah, al));	// 6449                  cmp     ah, al ;~ 041E:015F
cs=0x41e;eip=0x000161; 	J(JNZ(loc_1292e));	// 6450                  jnz     short loc_1292E ;~ 041E:0161
cs=0x41e;eip=0x000163; 	T(ax = 0x9090;);	// 6451                  mov     ax, 9090h ;~ 041E:0163
cs=0x41e;eip=0x000166; 	X(MOV(*(dw*)(raddr(cs,m2c::kloc_12e33)), ax));	// 6452                  mov     word ptr cs:loc_12E33, ax ;~ 041E:0166
cs=0x41e;eip=0x00016a; 	X(MOV(*(dw*)(raddr(cs,m2c::kloc_12f13)), ax));	// 6453                  mov     word ptr cs:loc_12F13, ax ;~ 041E:016A
loc_1292e:
	// 4520 
cs=0x41e;eip=0x00016e; 	J(CALL(sub_12e41,0));	// 6456                  call    sub_12E41 ;~ 041E:016E
cs=0x41e;eip=0x000171; 	T(al = 4;);	// 6457                  mov     al, 4 ;~ 041E:0171
cs=0x41e;eip=0x000173; 	T(bl = 0x60;);	// 6458                  mov     bl, 60h ; '`' ;~ 041E:0173
cs=0x41e;eip=0x000175; 	J(CALL(sub_12a3b,0));	// 6459                  call    sub_12A3B ;~ 041E:0175
cs=0x41e;eip=0x000178; 	T(bl = 0x80;);	// 6460                  mov     bl, 80h ;~ 041E:0178
cs=0x41e;eip=0x00017a; 	J(CALL(sub_12a3b,0));	// 6461                  call    sub_12A3B ;~ 041E:017A
cs=0x41e;eip=0x00017d; 	T(dx = 0x388;);	// 6462                  mov     dx, 388h ;~ 041E:017D
cs=0x41e;eip=0x000180; 	S(IN(al, dx));	// 6463                  in      al, dx ;~ 041E:0180
cs=0x41e;eip=0x000181; 	X(PUSH(ax));	// 6464                  push    ax ;~ 041E:0181
cs=0x41e;eip=0x000182; 	T(al = 2;);	// 6465                  mov     al, 2 ;~ 041E:0182
cs=0x41e;eip=0x000184; 	T(bl = 0x0FF;);	// 6466                  mov     bl, 0FFh ;~ 041E:0184
cs=0x41e;eip=0x000186; 	J(CALL(sub_12a3b,0));	// 6467                  call    sub_12A3B ;~ 041E:0186
cs=0x41e;eip=0x000189; 	T(al = 4;);	// 6468                  mov     al, 4 ;~ 041E:0189
cs=0x41e;eip=0x00018b; 	T(bl = 0x21;);	// 6469                  mov     bl, 21h ; '!' ;~ 041E:018B
cs=0x41e;eip=0x00018d; 	J(CALL(sub_12a3b,0));	// 6470                  call    sub_12A3B ;~ 041E:018D
cs=0x41e;eip=0x000190; 	T(cx = 0x0C8;);	// 6471                  mov     cx, 0C8h ;~ 041E:0190
cs=0x41e;eip=0x000193; 	T(dx = 0x388;);	// 6472                  mov     dx, 388h ;~ 041E:0193
loc_12956:
	// 4521 
cs=0x41e;eip=0x000196; 	S(IN(al, dx));	// 6475                  in      al, dx ;~ 041E:0196
cs=0x41e;eip=0x000197; 	J(LOOP(loc_12956));	// 6476                  loop    loc_12956 ;~ 041E:0197
cs=0x41e;eip=0x000199; 	X(PUSH(ax));	// 6477                  push    ax ;~ 041E:0199
cs=0x41e;eip=0x00019a; 	T(al = 4;);	// 6478                  mov     al, 4 ;~ 041E:019A
cs=0x41e;eip=0x00019c; 	T(bl = 0x60;);	// 6479                  mov     bl, 60h ; '`' ;~ 041E:019C
cs=0x41e;eip=0x00019e; 	J(CALL(sub_12a3b,0));	// 6480                  call    sub_12A3B ;~ 041E:019E
cs=0x41e;eip=0x0001a1; 	T(bl = 0x80;);	// 6481                  mov     bl, 80h ;~ 041E:01A1
cs=0x41e;eip=0x0001a3; 	J(CALL(sub_12a3b,0));	// 6482                  call    sub_12A3B ;~ 041E:01A3
cs=0x41e;eip=0x0001a6; 	X(POP(ax));	// 6483                  pop     ax ;~ 041E:01A6
cs=0x41e;eip=0x0001a7; 	X(POP(bx));	// 6484                  pop     bx ;~ 041E:01A7
cs=0x41e;eip=0x0001a8; 	T(dx = 0;);	// 6485                  mov     dx, 0 ;~ 041E:01A8
cs=0x41e;eip=0x0001ab; 	T(AND(al, 0x0E0));	// 6486                  and     al, 0E0h ;~ 041E:01AB
cs=0x41e;eip=0x0001ad; 	T(CMP(al, 0x0C0));	// 6487                  cmp     al, 0C0h ;~ 041E:01AD
cs=0x41e;eip=0x0001af; 	J(JNZ(loc_1297d));	// 6488                  jnz     short loc_1297D ;~ 041E:01AF
cs=0x41e;eip=0x0001b1; 	T(AND(bl, 0x0E0));	// 6489                  and     bl, 0E0h ;~ 041E:01B1
cs=0x41e;eip=0x0001b4; 	T(CMP(bl, 0));	// 6490                  cmp     bl, 0 ;~ 041E:01B4
cs=0x41e;eip=0x0001b7; 	J(JNZ(loc_1297d));	// 6491                  jnz     short loc_1297D ;~ 041E:01B7
cs=0x41e;eip=0x0001b9; 	J(CALL(sub_1298e,0));	// 6492                  call    sub_1298E ;~ 041E:01B9
cs=0x41e;eip=0x0001bc; 	J(RETN(0));	// 6493                  retn ;~ 041E:01BC
loc_1297d:
	// 4522 
cs=0x41e;eip=0x0001bd; 	T(ax = 3;);	// 6498                  mov     ax, 3 ;~ 041E:01BD
cs=0x41e;eip=0x0001c0; 	S(_INT(0x10));	// 6499                  int     10h             ; - VIDEO - SET VIDEO MODE ;~ 041E:01C0
cs=0x41e;eip=0x0001c2; 	T(dx = 0x23C;);	// 6501                  mov     dx, 23Ch ;~ 041E:01C2
cs=0x41e;eip=0x0001c5; 	T(ah = 9;);	// 6502                  mov     ah, 9 ;~ 041E:01C5
cs=0x41e;eip=0x0001c7; 	S(_INT(0x21));	// 6503                  int     21h             ; DOS - PRINT STRING ;~ 041E:01C7
cs=0x41e;eip=0x0001c9; 	T(ax = 0x4C00;);	// 6505                  mov     ax, 4C00h ;~ 041E:01C9
cs=0x41e;eip=0x0001cc; 	S(_INT(0x21));	// 6506                  int     21h             ; DOS - 2+ - QUIT WITH EXIT CODE (EXIT) ;~ 041E:01CC
sub_1298e:
	// 6513 
cs=0x41e;eip=0x0001ce; 	T(ax = 0;);	// 6515                  mov     ax, 0 ;~ 041E:01CE
cs=0x41e;eip=0x0001d1; 	X(byte_125ca = al;);	// 6516                  mov     byte_125CA, al ;~ 041E:01D1
cs=0x41e;eip=0x0001d4; 	X(byte_12658 = al;);	// 6517                  mov     byte_12658, al ;~ 041E:01D4
cs=0x41e;eip=0x0001d7; 	X(byte_12659 = al;);	// 6518                  mov     byte_12659, al ;~ 041E:01D7
cs=0x41e;eip=0x0001da; 	X(word_125c6 = ax;);	// 6519                  mov     word_125C6, ax ;~ 041E:01DA
cs=0x41e;eip=0x0001dd; 	X(word_125c8 = ax;);	// 6520                  mov     word_125C8, ax ;~ 041E:01DD
cs=0x41e;eip=0x0001e0; 	T(bx = offset(seg11a3,byte_125cc));	// 6521                  lea     bx, byte_125CC ;~ 041E:01E0
cs=0x41e;eip=0x0001e4; 	X(MOV(*(raddr(ds,bx)), al));	// 6522                  mov     [bx], al ;~ 041E:01E4
cs=0x41e;eip=0x0001e6; 	X(MOV(*(raddr(ds,bx+1)), al));	// 6523                  mov     [bx+1], al ;~ 041E:01E6
cs=0x41e;eip=0x0001e9; 	X(MOV(*(raddr(ds,bx+2)), al));	// 6524                  mov     [bx+2], al ;~ 041E:01E9
cs=0x41e;eip=0x0001ec; 	T(bx = offset(seg11a3,byte_125e0));	// 6525                  lea     bx, byte_125E0 ;~ 041E:01EC
cs=0x41e;eip=0x0001f0; 	X(MOV(*(raddr(ds,bx)), al));	// 6526                  mov     [bx], al ;~ 041E:01F0
cs=0x41e;eip=0x0001f2; 	X(MOV(*(raddr(ds,bx+1)), al));	// 6527                  mov     [bx+1], al ;~ 041E:01F2
cs=0x41e;eip=0x0001f5; 	X(MOV(*(raddr(ds,bx+2)), al));	// 6528                  mov     [bx+2], al ;~ 041E:01F5
cs=0x41e;eip=0x0001f8; 	T(bx = offset(seg11a3,byte_125f4));	// 6529                  lea     bx, byte_125F4 ;~ 041E:01F8
cs=0x41e;eip=0x0001fc; 	X(MOV(*(raddr(ds,bx)), al));	// 6530                  mov     [bx], al ;~ 041E:01FC
cs=0x41e;eip=0x0001fe; 	X(MOV(*(raddr(ds,bx+1)), al));	// 6531                  mov     [bx+1], al ;~ 041E:01FE
cs=0x41e;eip=0x000201; 	X(MOV(*(raddr(ds,bx+2)), al));	// 6532                  mov     [bx+2], al ;~ 041E:0201
cs=0x41e;eip=0x000204; 	T(bx = offset(seg11a3,unk_12608));	// 6533                  lea     bx, unk_12608 ;~ 041E:0204
cs=0x41e;eip=0x000208; 	X(MOV(*(raddr(ds,bx)), al));	// 6534                  mov     [bx], al ;~ 041E:0208
cs=0x41e;eip=0x00020a; 	X(MOV(*(raddr(ds,bx+1)), al));	// 6535                  mov     [bx+1], al ;~ 041E:020A
cs=0x41e;eip=0x00020d; 	X(MOV(*(raddr(ds,bx+2)), al));	// 6536                  mov     [bx+2], al ;~ 041E:020D
cs=0x41e;eip=0x000210; 	T(bx = offset(seg11a3,byte_1261c));	// 6537                  lea     bx, byte_1261C ;~ 041E:0210
cs=0x41e;eip=0x000214; 	X(MOV(*(raddr(ds,bx)), al));	// 6538                  mov     [bx], al ;~ 041E:0214
cs=0x41e;eip=0x000216; 	X(MOV(*(raddr(ds,bx+1)), al));	// 6539                  mov     [bx+1], al ;~ 041E:0216
cs=0x41e;eip=0x000219; 	X(MOV(*(raddr(ds,bx+2)), al));	// 6540                  mov     [bx+2], al ;~ 041E:0219
cs=0x41e;eip=0x00021c; 	T(bx = offset(seg11a3,unk_12630));	// 6541                  lea     bx, unk_12630 ;~ 041E:021C
cs=0x41e;eip=0x000220; 	X(MOV(*(raddr(ds,bx)), al));	// 6542                  mov     [bx], al ;~ 041E:0220
cs=0x41e;eip=0x000222; 	X(MOV(*(raddr(ds,bx+1)), al));	// 6543                  mov     [bx+1], al ;~ 041E:0222
cs=0x41e;eip=0x000225; 	X(MOV(*(raddr(ds,bx+2)), al));	// 6544                  mov     [bx+2], al ;~ 041E:0225
cs=0x41e;eip=0x000228; 	X(word_11cae = ax;);	// 6545                  mov     word_11CAE, ax ;~ 041E:0228
cs=0x41e;eip=0x00022b; 	X(word_11cb0 = ax;);	// 6546                  mov     word_11CB0, ax ;~ 041E:022B
cs=0x41e;eip=0x00022e; 	X(byte_11cb6 = al;);	// 6547                  mov     byte_11CB6, al ;~ 041E:022E
cs=0x41e;eip=0x000231; 	X(byte_11cb7 = al;);	// 6548                  mov     byte_11CB7, al ;~ 041E:0231
cs=0x41e;eip=0x000234; 	X(byte_125ca = 0x0FF;);	// 6549                  mov     byte_125CA, 0FFh ;~ 041E:0234
cs=0x41e;eip=0x000239; 	T(al = 0x0B1;);	// 6550                  mov     al, 0B1h ;~ 041E:0239
cs=0x41e;eip=0x00023b; 	T(bl = 0;);	// 6551                  mov     bl, 0 ;~ 041E:023B
cs=0x41e;eip=0x00023d; 	J(CALL(sub_12a3b,0));	// 6552                  call    sub_12A3B ;~ 041E:023D
cs=0x41e;eip=0x000240; 	T(al = 0x0B2;);	// 6553                  mov     al, 0B2h ;~ 041E:0240
cs=0x41e;eip=0x000242; 	T(bl = 0;);	// 6554                  mov     bl, 0 ;~ 041E:0242
cs=0x41e;eip=0x000244; 	J(CALL(sub_12a3b,0));	// 6555                  call    sub_12A3B ;~ 041E:0244
cs=0x41e;eip=0x000247; 	T(al = 0x84;);	// 6556                  mov     al, 84h ;~ 041E:0247
cs=0x41e;eip=0x000249; 	T(bl = 0x0F;);	// 6557                  mov     bl, 0Fh ;~ 041E:0249
cs=0x41e;eip=0x00024b; 	J(CALL(sub_12a3b,0));	// 6558                  call    sub_12A3B ;~ 041E:024B
cs=0x41e;eip=0x00024e; 	T(al = 0x85;);	// 6559                  mov     al, 85h ;~ 041E:024E
cs=0x41e;eip=0x000250; 	T(bl = 0x0F;);	// 6560                  mov     bl, 0Fh ;~ 041E:0250
cs=0x41e;eip=0x000252; 	J(CALL(sub_12a3b,0));	// 6561                  call    sub_12A3B ;~ 041E:0252
cs=0x41e;eip=0x000255; 	J(RETN(0));	// 6562                  retn ;~ 041E:0255
sub_12e25:
	// 7190 
cs=0x41e;eip=0x000665; 	J(CALL(sub_12e67,0));	// 7191                  call    sub_12E67 ;~ 041E:0665
cs=0x41e;eip=0x000668; 	T(bl = 0x94;);	// 7192                  mov     bl, 94h ;~ 041E:0668
cs=0x41e;eip=0x00066a; 	T(al = 0x0A5;);	// 7193                  mov     al, 0A5h ;~ 041E:066A
cs=0x41e;eip=0x00066c; 	J(CALL(sub_12f38,0));	// 7194                  call    sub_12F38 ;~ 041E:066C
cs=0x41e;eip=0x00066f; 	T(ah = 0x0FF;);	// 7195                  mov     ah, 0FFh ;~ 041E:066F
loc_12e31:
	// 4559 
cs=0x41e;eip=0x000671; 	T(al = 0x80;);	// 7198                  mov     al, 80h ;~ 041E:0671
loc_12e33:
	// 4560 
cs=0x41e;eip=0x000673; 	S(OUT(0x43, al));	// 7201                  out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:0673
cs=0x41e;eip=0x000675; 	J({;});	// 7202                  jmp     short $+2 ;~ 041E:0675
loc_12e37:
	// 4561 
cs=0x41e;eip=0x000677; 	S(IN(al, 0x42));	// 7206                  in      al, 42h         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:0677
cs=0x41e;eip=0x000679; 	T(CMP(ah, al));	// 7207                  cmp     ah, al ;~ 041E:0679
cs=0x41e;eip=0x00067b; 	T(ah = al;);	// 7208                  mov     ah, al ;~ 041E:067B
cs=0x41e;eip=0x00067d; 	J(JNC(loc_12e31));	// 7209                  jnb     short loc_12E31 ;~ 041E:067D
cs=0x41e;eip=0x00067f; 	T(CLI);	// 7210                  cli ;~ 041E:067F
cs=0x41e;eip=0x000680; 	J(RETN(0));	// 7211                  retn ;~ 041E:0680
sub_12f09:
	// 7334 
cs=0x41e;eip=0x000749; 	X(PUSH(ds));	// 7335                  push    ds ;~ 041E:0749
cs=0x41e;eip=0x00074a; 	T(ax = word_11c97;);	// 7336                  mov     ax, word_11C97 ;~ 041E:074A
cs=0x41e;eip=0x00074d; 	T(ds = ax;);	// 7337                  mov     ds, ax ;~ 041E:074D
loc_12f0f:
	// 4563 
cs=0x41e;eip=0x00074f; 	T(ah = 0x0FF;);	// 7341                  mov     ah, 0FFh ;~ 041E:074F
loc_12f11:
	// 4564 
cs=0x41e;eip=0x000751; 	T(al = 0x80;);	// 7344                  mov     al, 80h ;~ 041E:0751
loc_12f13:
	// 4565 
cs=0x41e;eip=0x000753; 	S(OUT(0x43, al));	// 7347                  out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:0753
cs=0x41e;eip=0x000755; 	J({;});	// 7348                  jmp     short $+2 ;~ 041E:0755
loc_12f17:
	// 4566 
cs=0x41e;eip=0x000757; 	S(IN(al, 0x42));	// 7352                  in      al, 42h         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:0757
cs=0x41e;eip=0x000759; 	T(CMP(ah, al));	// 7353                  cmp     ah, al ;~ 041E:0759
cs=0x41e;eip=0x00075b; 	T(ah = al;);	// 7354                  mov     ah, al ;~ 041E:075B
cs=0x41e;eip=0x00075d; 	J(JNC(loc_12f11));	// 7355                  jnb     short loc_12F11 ;~ 041E:075D
cs=0x41e;eip=0x00075f; 	T(XOR(bh, bh));	// 7356                  xor     bh, bh ;~ 041E:075F
cs=0x41e;eip=0x000761; 	T(MOV(bl, *(raddr(ds,si))));	// 7357                  mov     bl, [si] ;~ 041E:0761
cs=0x41e;eip=0x000763; 	T(SHR(bx, 1));	// 7358                  shr     bx, 1 ;~ 041E:0763
cs=0x41e;eip=0x000765; 	T(SHR(bx, 1));	// 7359                  shr     bx, 1 ;~ 041E:0765
cs=0x41e;eip=0x000767; 	T(MOV(bl, *(raddr(cs,bx+0x0D))));	// 7360                  mov     bl, cs:[bx+0Dh] ;~ 041E:0767
cs=0x41e;eip=0x00076c; 	T(al = 0x43;);	// 7361                  mov     al, 43h ; 'C' ;~ 041E:076C
cs=0x41e;eip=0x00076e; 	J(CALL(sub_12a45,0));	// 7362                  call    sub_12A45 ;~ 041E:076E
cs=0x41e;eip=0x000771; 	T(INC(si));	// 7363                  inc     si ;~ 041E:0771
cs=0x41e;eip=0x000772; 	T(CMP(si, di));	// 7364                  cmp     si, di ;~ 041E:0772
cs=0x41e;eip=0x000774; 	J(JNZ(loc_12f0f));	// 7365                  jnz     short loc_12F0F ;~ 041E:0774
cs=0x41e;eip=0x000776; 	X(POP(ds));	// 7366                  pop     ds ;~ 041E:0776
cs=0x41e;eip=0x000777; 	J(RETN(0));	// 7367                  retn ;~ 041E:0777

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_12912: 	goto loc_12912;
        case m2c::kloc_12918: 	goto loc_12918;
        case m2c::kloc_1291d: 	goto loc_1291d;
        case m2c::kloc_1292e: 	goto loc_1292e;
        case m2c::kloc_12956: 	goto loc_12956;
        case m2c::kloc_1297d: 	goto loc_1297d;
        case m2c::kloc_12e31: 	goto loc_12e31;
        case m2c::kloc_12e33: 	goto loc_12e33;
        case m2c::kloc_12e37: 	goto loc_12e37;
        case m2c::kloc_12f0f: 	goto loc_12f0f;
        case m2c::kloc_12f11: 	goto loc_12f11;
        case m2c::kloc_12f13: 	goto loc_12f13;
        case m2c::kloc_12f17: 	goto loc_12f17;
        case m2c::ksub_128e5: 	goto sub_128e5;
        case m2c::ksub_1298e: 	goto sub_1298e;
        case m2c::ksub_12e25: 	goto sub_12e25;
        case m2c::ksub_12f09: 	goto sub_12f09;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12a16(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12a16:
    _begin:
cs=0x41e;eip=0x000256; 	T(bx = 0;);	// 6571                  mov     bx, 0 ;~ 041E:0256
cs=0x41e;eip=0x000259; 	T(ax = 0x0FF;);	// 6572                  mov     ax, 0FFh ;~ 041E:0259
loc_12a1c:
	// 4523 
cs=0x41e;eip=0x00025c; 	X(PUSH(ax));	// 6575                  push    ax ;~ 041E:025C
cs=0x41e;eip=0x00025d; 	J(CALL(sub_12a3b,0));	// 6576                  call    sub_12A3B ;~ 041E:025D
cs=0x41e;eip=0x000260; 	X(POP(ax));	// 6577                  pop     ax ;~ 041E:0260
cs=0x41e;eip=0x000261; 	T(DEC(ax));	// 6578                  dec     ax ;~ 041E:0261
cs=0x41e;eip=0x000262; 	J(JNZ(loc_12a1c));	// 6579                  jnz     short loc_12A1C ;~ 041E:0262
cs=0x41e;eip=0x000264; 	T(al = 1;);	// 6580                  mov     al, 1 ;~ 041E:0264
cs=0x41e;eip=0x000266; 	T(bl = 0x20;);	// 6581                  mov     bl, 20h ; ' ' ;~ 041E:0266
cs=0x41e;eip=0x000268; 	J(CALL(sub_12a3b,0));	// 6582                  call    sub_12A3B ;~ 041E:0268
cs=0x41e;eip=0x00026b; 	T(al = 0x0BD;);	// 6583                  mov     al, 0BDh ;~ 041E:026B
cs=0x41e;eip=0x00026d; 	J(CALL(sub_12a3b,0));	// 6584                  call    sub_12A3B ;~ 041E:026D
cs=0x41e;eip=0x000270; 	J(RETN(0));	// 6585                  retn ;~ 041E:0270

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_12a1c: 	goto loc_12a1c;
        case m2c::ksub_12a16: 	goto sub_12a16;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group4:
    _begin:
sub_12a31:
	// 6594 
#undef arg_0
#define arg_0 4
	// 6597 arg_0           = word ptr  4 ;~ 041E:0271
#undef arg_2
#define arg_2 6
	// 6598 arg_2           = byte ptr  6 ;~ 041E:0271
cs=0x41e;eip=0x000271; 	X(PUSH(bp));	// 6600                  push    bp ;~ 041E:0271
cs=0x41e;eip=0x000272; 	T(bp = sp;);	// 6601                  mov     bp, sp ;~ 041E:0272
cs=0x41e;eip=0x000274; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 6602                  mov     ax, [bp+arg_0] ;~ 041E:0274
cs=0x41e;eip=0x000277; 	T(MOV(bl, *(raddr(ss,bp+arg_2))));	// 6603                  mov     bl, [bp+arg_2] ;~ 041E:0277
cs=0x41e;eip=0x00027a; 	X(POP(bp));	// 6604                  pop     bp ;~ 041E:027A
sub_12a3b:
	// 6611 
cs=0x41e;eip=0x00027b; 	X(PUSH(di));	// 6613                  push    di ;~ 041E:027B
cs=0x41e;eip=0x00027c; 	T(ah = 0;);	// 6614                  mov     ah, 0 ;~ 041E:027C
cs=0x41e;eip=0x00027e; 	T(di = ax;);	// 6615                  mov     di, ax ;~ 041E:027E
cs=0x41e;eip=0x000280; 	X(MOV(*(raddr(ds,di+0x0C32)), bl));	// 6616                  mov     [di+0C32h], bl ;~ 041E:0280
cs=0x41e;eip=0x000284; 	X(POP(di));	// 6617                  pop     di ;~ 041E:0284
sub_12a45:
	// 6624 
cs=0x41e;eip=0x000285; 	T(dx = 0x388;);	// 6625                  mov     dx, 388h ;~ 041E:0285
cs=0x41e;eip=0x000288; 	T(cx = word_1280d;);	// 6626                  mov     cx, cs:word_1280D ;~ 041E:0288
loc_12a4d:
	// 4524 
cs=0x41e;eip=0x00028d; 	J(LOOP(loc_12a4d));	// 6629                  loop    loc_12A4D ;~ 041E:028D
cs=0x41e;eip=0x00028f; 	S(OUT(dx, al));	// 6630                  out     dx, al ;~ 041E:028F
cs=0x41e;eip=0x000290; 	T(al = bl;);	// 6631                  mov     al, bl ;~ 041E:0290
cs=0x41e;eip=0x000292; 	T(dx = 0x389;);	// 6632                  mov     dx, 389h ;~ 041E:0292
cs=0x41e;eip=0x000295; 	T(cx = word_1280f;);	// 6633                  mov     cx, cs:word_1280F ;~ 041E:0295
loc_12a5a:
	// 4525 
cs=0x41e;eip=0x00029a; 	J(LOOP(loc_12a5a));	// 6636                  loop    loc_12A5A ;~ 041E:029A
cs=0x41e;eip=0x00029c; 	S(OUT(dx, al));	// 6637                  out     dx, al ;~ 041E:029C
cs=0x41e;eip=0x00029d; 	J(RETN(0));	// 6638                  retn ;~ 041E:029D

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_12a4d: 	goto loc_12a4d;
        case m2c::kloc_12a5a: 	goto loc_12a5a;
        case m2c::ksub_12a31: 	goto sub_12a31;
        case m2c::ksub_12a3b: 	goto sub_12a3b;
        case m2c::ksub_12a45: 	goto sub_12a45;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12a5e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12a5e:
    _begin:
cs=0x41e;eip=0x00029e; 	X(PUSH(ax));	// 6648                  push    ax ;~ 041E:029E
cs=0x41e;eip=0x00029f; 	T(ADD(al, 0x0A0));	// 6649                  add     al, 0A0h ;~ 041E:029F
cs=0x41e;eip=0x0002a1; 	J(CALL(sub_12a3b,0));	// 6650                  call    sub_12A3B ;~ 041E:02A1
cs=0x41e;eip=0x0002a4; 	X(POP(ax));	// 6651                  pop     ax ;~ 041E:02A4
cs=0x41e;eip=0x0002a5; 	T(ADD(al, 0x0B0));	// 6652                  add     al, 0B0h ;~ 041E:02A5
cs=0x41e;eip=0x0002a7; 	T(bl = bh;);	// 6653                  mov     bl, bh ;~ 041E:02A7
cs=0x41e;eip=0x0002a9; 	T(OR(bl, 0x20));	// 6654                  or      bl, 20h ;~ 041E:02A9
cs=0x41e;eip=0x0002ac; 	J(CALL(sub_12a3b,0));	// 6655                  call    sub_12A3B ;~ 041E:02AC
cs=0x41e;eip=0x0002af; 	J(RETN(0));	// 6656                  retn ;~ 041E:02AF

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_12a5e: 	goto sub_12a5e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12a70(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12a70:
    _begin:
cs=0x41e;eip=0x0002b0; 	T(CMP(word_11cac, 0));	// 6664                  cmp     word_11CAC, 0 ;~ 041E:02B0
cs=0x41e;eip=0x0002b5; 	J(JZ(loc_12a7b));	// 6665                  jz      short loc_12A7B ;~ 041E:02B5
cs=0x41e;eip=0x0002b7; 	X(DEC(word_11cac));	// 6666                  dec     word_11CAC ;~ 041E:02B7
loc_12a7b:
	// 4526 
cs=0x41e;eip=0x0002bb; 	X(PUSH(es));	// 6669                  push    es ;~ 041E:02BB
cs=0x41e;eip=0x0002bc; 	X(PUSH(si));	// 6670                  push    si ;~ 041E:02BC
cs=0x41e;eip=0x0002bd; 	X(PUSH(di));	// 6671                  push    di ;~ 041E:02BD
cs=0x41e;eip=0x0002be; 	X(PUSH(bp));	// 6672                  push    bp ;~ 041E:02BE
cs=0x41e;eip=0x0002bf; 	X(seg_127c9 = ss;);	// 6673                  mov     cs:seg_127C9, ss ;~ 041E:02BF
cs=0x41e;eip=0x0002c4; 	X(word_127cb = sp;);	// 6674                  mov     cs:word_127CB, sp ;~ 041E:02C4
cs=0x41e;eip=0x0002c9; 	T(ax = seg_offset(seg11a3););	// 6675                  mov     ax, seg seg11a3 ;~ 041E:02C9
cs=0x41e;eip=0x0002cc; 	T(es = ax;);	// 6676                  mov     es, ax ;~ 041E:02CC
cs=0x41e;eip=0x0002ce; 	S(ss = ax;);	// 6677                  mov     ss, ax ;~ 041E:02CE
cs=0x41e;eip=0x0002d0; 	T(sp = 0x238;);	// 6679                  mov     sp, 238h ;~ 041E:02D0
cs=0x41e;eip=0x0002d3; 	J(CALLF(sub_13c8c,0));	// 6680                  call    far ptr sub_13C8C ;~ 041E:02D3
loc_12a98:
	// 4527 
cs=0x41e;eip=0x0002d8; 	T(bx = seg_127c9;);	// 6683                  mov     bx, cs:seg_127C9 ;~ 041E:02D8
cs=0x41e;eip=0x0002dd; 	S(ss = bx;);	// 6684                  mov     ss, bx ;~ 041E:02DD
cs=0x41e;eip=0x0002df; 	T(sp = word_127cb;);	// 6686                  mov     sp, cs:word_127CB ;~ 041E:02DF
cs=0x41e;eip=0x0002e4; 	X(POP(bp));	// 6687                  pop     bp ;~ 041E:02E4
cs=0x41e;eip=0x0002e5; 	X(POP(di));	// 6688                  pop     di ;~ 041E:02E5
cs=0x41e;eip=0x0002e6; 	X(POP(si));	// 6689                  pop     si ;~ 041E:02E6
cs=0x41e;eip=0x0002e7; 	X(POP(es));	// 6690                  pop     es ;~ 041E:02E7
cs=0x41e;eip=0x0002e8; 	T(al = byte_12659;);	// 6692                  mov     al, byte_12659 ;~ 041E:02E8
cs=0x41e;eip=0x0002eb; 	T(OR(al, byte_12658));	// 6693                  or      al, byte_12658 ;~ 041E:02EB
cs=0x41e;eip=0x0002ef; 	J(JZ(loc_12af4));	// 6694                  jz      short loc_12AF4 ;~ 041E:02EF
cs=0x41e;eip=0x0002f1; 	T(CMP(byte_12658, 0));	// 6695                  cmp     byte_12658, 0 ;~ 041E:02F1
cs=0x41e;eip=0x0002f6; 	J(JZ(loc_12ad2));	// 6696                  jz      short loc_12AD2 ;~ 041E:02F6
cs=0x41e;eip=0x0002f8; 	T(ax = word_125c2;);	// 6697                  mov     ax, word_125C2 ;~ 041E:02F8
cs=0x41e;eip=0x0002fb; 	T(ADD(ax, word_125c6));	// 6698                  add     ax, word_125C6 ;~ 041E:02FB
cs=0x41e;eip=0x0002ff; 	X(word_125c2 = ax;);	// 6699                  mov     word_125C2, ax ;~ 041E:02FF
cs=0x41e;eip=0x000302; 	X(DEC(byte_12658));	// 6700                  dec     byte_12658 ;~ 041E:0302
cs=0x41e;eip=0x000306; 	J(JNZ(loc_12ad2));	// 6701                  jnz     short loc_12AD2 ;~ 041E:0306
cs=0x41e;eip=0x000308; 	T(al = byte_1265f;);	// 6703                  mov     al, byte_1265F ;~ 041E:0308
cs=0x41e;eip=0x00030b; 	T(ADD(al, 0x0B0));	// 6704                  add     al, 0B0h ;~ 041E:030B
cs=0x41e;eip=0x00030d; 	T(bl = 0;);	// 6705                  mov     bl, 0 ;~ 041E:030D
cs=0x41e;eip=0x00030f; 	J(CALL(sub_12a3b,0));	// 6706                  call    sub_12A3B ;~ 041E:030F
loc_12ad2:
	// 4528 
cs=0x41e;eip=0x000312; 	T(CMP(byte_12659, 0));	// 6710                  cmp     byte_12659, 0 ;~ 041E:0312
cs=0x41e;eip=0x000317; 	J(JZ(locret_12af3));	// 6711                  jz      short locret_12AF3 ;~ 041E:0317
cs=0x41e;eip=0x000319; 	T(ax = word_125c4;);	// 6712                  mov     ax, word_125C4 ;~ 041E:0319
cs=0x41e;eip=0x00031c; 	T(ADD(ax, word_125c8));	// 6713                  add     ax, word_125C8 ;~ 041E:031C
cs=0x41e;eip=0x000320; 	X(word_125c4 = ax;);	// 6714                  mov     word_125C4, ax ;~ 041E:0320
cs=0x41e;eip=0x000323; 	X(DEC(byte_12659));	// 6715                  dec     byte_12659 ;~ 041E:0323
cs=0x41e;eip=0x000327; 	J(JNZ(locret_12af3));	// 6716                  jnz     short locret_12AF3 ;~ 041E:0327
cs=0x41e;eip=0x000329; 	T(al = byte_12660;);	// 6718                  mov     al, byte_12660 ;~ 041E:0329
cs=0x41e;eip=0x00032c; 	T(ADD(al, 0x0B0));	// 6719                  add     al, 0B0h ;~ 041E:032C
cs=0x41e;eip=0x00032e; 	T(bl = 0;);	// 6720                  mov     bl, 0 ;~ 041E:032E
cs=0x41e;eip=0x000330; 	J(CALL(sub_12a3b,0));	// 6721                  call    sub_12A3B ;~ 041E:0330
locret_12af3:
	// 4529 
cs=0x41e;eip=0x000333; 	J(RETN(0));	// 6725                  retn ;~ 041E:0333
loc_12af4:
	// 4530 
cs=0x41e;eip=0x000334; 	T(CMP(word_11c8f, 0x0FFFF));	// 6729                  cmp     word_11C8F, 0FFFFh ;~ 041E:0334
cs=0x41e;eip=0x000339; 	J(JZ(locret_12b07));	// 6730                  jz      short locret_12B07 ;~ 041E:0339
cs=0x41e;eip=0x00033b; 	X(word_11c8f = 0x0FFFF;);	// 6731                  mov     word_11C8F, 0FFFFh ;~ 041E:033B
cs=0x41e;eip=0x000341; 	X(word_11c8d = 0x0FFFF;);	// 6732                  mov     word_11C8D, 0FFFFh ;~ 041E:0341
locret_12b07:
	// 4531 
cs=0x41e;eip=0x000347; 	J(RETN(0));	// 6735                  retn ;~ 041E:0347

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_12a7b: 	goto loc_12a7b;
        case m2c::kloc_12a98: 	goto loc_12a98;
        case m2c::kloc_12ad2: 	goto loc_12ad2;
        case m2c::kloc_12af4: 	goto loc_12af4;
        case m2c::klocret_12af3: 	goto locret_12af3;
        case m2c::klocret_12b07: 	goto locret_12b07;
        case m2c::ksub_12a70: 	goto sub_12a70;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12b08(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12b08:
    _begin:
cs=0x41e;eip=0x000348; 	T(bx = 0x9248;);	// 6743                  mov     bx, 9248h ;~ 041E:0348
cs=0x41e;eip=0x00034b; 	T(ADD(bx, word_11cb8));	// 6744                  add     bx, word_11CB8 ;~ 041E:034B
cs=0x41e;eip=0x00034f; 	T(ROR(bx, 1));	// 6745                  ror     bx, 1 ;~ 041E:034F
cs=0x41e;eip=0x000351; 	T(ROR(bx, 1));	// 6746                  ror     bx, 1 ;~ 041E:0351
cs=0x41e;eip=0x000353; 	T(ROR(bx, 1));	// 6747                  ror     bx, 1 ;~ 041E:0353
cs=0x41e;eip=0x000355; 	X(word_11cb8 = bx;);	// 6748                  mov     word_11CB8, bx ;~ 041E:0355
cs=0x41e;eip=0x000359; 	T(CMP(byte_12658, 0));	// 6749                  cmp     byte_12658, 0 ;~ 041E:0359
cs=0x41e;eip=0x00035e; 	J(JZ(loc_12b31));	// 6750                  jz      short loc_12B31 ;~ 041E:035E
cs=0x41e;eip=0x000360; 	T(XOR(bx, 0x0FFFF));	// 6751                  xor     bx, 0FFFFh ;~ 041E:0360
cs=0x41e;eip=0x000363; 	T(AND(bx, word_1265a));	// 6752                  and     bx, word_1265A ;~ 041E:0363
cs=0x41e;eip=0x000367; 	T(ADD(bx, word_125c2));	// 6753                  add     bx, word_125C2 ;~ 041E:0367
cs=0x41e;eip=0x00036b; 	T(al = byte_1265f;);	// 6754                  mov     al, byte_1265F ;~ 041E:036B
cs=0x41e;eip=0x00036e; 	J(CALL(sub_12a5e,0));	// 6755                  call    sub_12A5E ;~ 041E:036E
loc_12b31:
	// 4532 
cs=0x41e;eip=0x000371; 	T(CMP(byte_12659, 0));	// 6758                  cmp     byte_12659, 0 ;~ 041E:0371
cs=0x41e;eip=0x000376; 	J(JZ(locret_12b4a));	// 6759                  jz      short locret_12B4A ;~ 041E:0376
cs=0x41e;eip=0x000378; 	T(bx = word_11cb8;);	// 6760                  mov     bx, word_11CB8 ;~ 041E:0378
cs=0x41e;eip=0x00037c; 	T(AND(bx, word_1265c));	// 6761                  and     bx, word_1265C ;~ 041E:037C
cs=0x41e;eip=0x000380; 	T(ADD(bx, word_125c4));	// 6762                  add     bx, word_125C4 ;~ 041E:0380
cs=0x41e;eip=0x000384; 	T(al = byte_12660;);	// 6763                  mov     al, byte_12660 ;~ 041E:0384
cs=0x41e;eip=0x000387; 	J(CALL(sub_12a5e,0));	// 6764                  call    sub_12A5E ;~ 041E:0387
locret_12b4a:
	// 4533 
cs=0x41e;eip=0x00038a; 	J(RETN(0));	// 6767                  retn ;~ 041E:038A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_12b31: 	goto loc_12b31;
        case m2c::klocret_12b4a: 	goto locret_12b4a;
        case m2c::ksub_12b08: 	goto sub_12b08;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12b4b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12b4b:
    _begin:
cs=0x41e;eip=0x00038b; 	T(CMP(word_11c8f, 1));	// 6777                  cmp     word_11C8F, 1 ;~ 041E:038B
cs=0x41e;eip=0x000390; 	J(JZ(locret_12b5e));	// 6778                  jz      short locret_12B5E ;~ 041E:0390
cs=0x41e;eip=0x000392; 	X(word_11c8f = 1;);	// 6779                  mov     word_11C8F, 1 ;~ 041E:0392
cs=0x41e;eip=0x000398; 	X(word_11c8d = 1;);	// 6780                  mov     word_11C8D, 1 ;~ 041E:0398
locret_12b5e:
	// 4534 
cs=0x41e;eip=0x00039e; 	J(RETN(0));	// 6783                  retn ;~ 041E:039E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::klocret_12b5e: 	goto locret_12b5e;
        case m2c::ksub_12b4b: 	goto sub_12b4b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg127c_39f_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg127c_39f_proc:
    _begin:
cs=0x41e;eip=0x00039f; 	X(PUSH(bp));	// 6787                  push    bp ;~ 041E:039F
cs=0x41e;eip=0x0003a0; 	T(bp = sp;);	// 6788                  mov     bp, sp ;~ 041E:03A0
cs=0x41e;eip=0x0003a2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 6789                  mov     ax, [bp+8] ;~ 041E:03A2
cs=0x41e;eip=0x0003a5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 6790                  mov     bx, [bp+6] ;~ 041E:03A5
cs=0x41e;eip=0x0003a8; 	T(MOV(cx, *(dw*)(raddr(ss,bp+4))));	// 6791                  mov     cx, [bp+4] ;~ 041E:03A8
cs=0x41e;eip=0x0003ab; 	X(POP(bp));	// 6792                  pop     bp ;~ 041E:03AB
cs=0x41e;eip=0x0003ac; 	J(CALL(sub_12b70,0));	// 6793                  call    sub_12B70 ;~ 041E:03AC
cs=0x41e;eip=0x0003af; 	J(RETN(0));	// 6794                  retn ;~ 041E:03AF

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg127c_39f_proc: 	goto seg127c_39f_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12b70(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12b70:
    _begin:
cs=0x41e;eip=0x0003b0; 	T(dl = byte_125ca;);	// 6802                  mov     dl, byte_125CA ;~ 041E:03B0
cs=0x41e;eip=0x0003b4; 	X(PUSH(dx));	// 6803                  push    dx ;~ 041E:03B4
cs=0x41e;eip=0x0003b5; 	X(byte_125ca = 0;);	// 6804                  mov     byte_125CA, 0 ;~ 041E:03B5
cs=0x41e;eip=0x0003ba; 	X(MOV(*(raddr(ds,bx+1)), 0));	// 6805                  mov     byte ptr [bx+1], 0 ;~ 041E:03BA
cs=0x41e;eip=0x0003be; 	X(MOV(*(raddr(ds,bx+9)), 0x0FF));	// 6806                  mov     byte ptr [bx+9], 0FFh ;~ 041E:03BE
cs=0x41e;eip=0x0003c2; 	X(MOV(*(raddr(ds,bx+2)), 0));	// 6807                  mov     byte ptr [bx+2], 0 ;~ 041E:03C2
cs=0x41e;eip=0x0003c6; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), cx));	// 6808                  mov     [bx+0Ah], cx ;~ 041E:03C6
cs=0x41e;eip=0x0003c9; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), 0));	// 6809                  mov     word ptr [bx+0Ch], 0 ;~ 041E:03C9
cs=0x41e;eip=0x0003ce; 	X(MOV(*(dw*)(raddr(ds,bx+0x0E)), 0));	// 6810                  mov     word ptr [bx+0Eh], 0 ;~ 041E:03CE
cs=0x41e;eip=0x0003d3; 	X(MOV(*(dw*)(raddr(ds,bx+0x10)), 0));	// 6811                  mov     word ptr [bx+10h], 0 ;~ 041E:03D3
cs=0x41e;eip=0x0003d8; 	X(MOV(*(raddr(ds,bx+6)), 0));	// 6812                  mov     byte ptr [bx+6], 0 ;~ 041E:03D8
cs=0x41e;eip=0x0003dc; 	X(MOV(*(dw*)(raddr(ds,bx+0x12)), ax));	// 6813                  mov     [bx+12h], ax ;~ 041E:03DC
cs=0x41e;eip=0x0003df; 	X(MOV(*(raddr(ds,bx)), 1));	// 6814                  mov     byte ptr [bx], 1 ;~ 041E:03DF
cs=0x41e;eip=0x0003e2; 	X(POP(dx));	// 6815                  pop     dx ;~ 041E:03E2
cs=0x41e;eip=0x0003e3; 	X(byte_125ca = dl;);	// 6816                  mov     byte_125CA, dl ;~ 041E:03E3
cs=0x41e;eip=0x0003e7; 	J(RETN(0));	// 6817                  retn ;~ 041E:03E7

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_12b70: 	goto sub_12b70;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12ba8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12ba8:
    _begin:
cs=0x41e;eip=0x0003e8; 	T(ax = 0;);	// 6825                  mov     ax, 0 ;~ 041E:03E8
cs=0x41e;eip=0x0003eb; 	T(bx = offset(seg11a3,byte_125cc));	// 6826                  lea     bx, byte_125CC ;~ 041E:03EB
cs=0x41e;eip=0x0003ef; 	T(cx = offset(seg11a3,unk_122bc));	// 6827                  lea     cx, unk_122BC ;~ 041E:03EF
cs=0x41e;eip=0x0003f3; 	J(CALL(sub_12b70,0));	// 6828                  call    sub_12B70 ;~ 041E:03F3
cs=0x41e;eip=0x0003f6; 	T(bx = offset(seg11a3,byte_125e0));	// 6829                  lea     bx, byte_125E0 ;~ 041E:03F6
cs=0x41e;eip=0x0003fa; 	T(cx = offset(seg11a3,unk_12336));	// 6830                  lea     cx, unk_12336 ;~ 041E:03FA
cs=0x41e;eip=0x0003fe; 	J(CALL(sub_12b70,0));	// 6831                  call    sub_12B70 ;~ 041E:03FE
cs=0x41e;eip=0x000401; 	T(bx = offset(seg11a3,byte_125f4));	// 6832                  lea     bx, byte_125F4 ;~ 041E:0401
cs=0x41e;eip=0x000405; 	T(cx = offset(seg11a3,unk_123b0));	// 6833                  lea     cx, unk_123B0 ;~ 041E:0405
cs=0x41e;eip=0x000409; 	J(CALL(sub_12b70,0));	// 6834                  call    sub_12B70 ;~ 041E:0409
cs=0x41e;eip=0x00040c; 	T(bx = offset(seg11a3,unk_12608));	// 6835                  lea     bx, unk_12608 ;~ 041E:040C
cs=0x41e;eip=0x000410; 	T(cx = offset(seg11a3,unk_12400));	// 6836                  lea     cx, unk_12400 ;~ 041E:0410
cs=0x41e;eip=0x000414; 	J(CALL(sub_12b70,0));	// 6837                  call    sub_12B70 ;~ 041E:0414
cs=0x41e;eip=0x000417; 	T(bx = offset(seg11a3,byte_1261c));	// 6838                  lea     bx, byte_1261C ;~ 041E:0417
cs=0x41e;eip=0x00041b; 	T(cx = offset(seg11a3,unk_12440));	// 6839                  lea     cx, unk_12440 ;~ 041E:041B
cs=0x41e;eip=0x00041f; 	J(CALL(sub_12b70,0));	// 6840                  call    sub_12B70 ;~ 041E:041F
cs=0x41e;eip=0x000422; 	T(bx = offset(seg11a3,unk_12630));	// 6841                  lea     bx, unk_12630 ;~ 041E:0422
cs=0x41e;eip=0x000426; 	T(cx = offset(seg11a3,unk_12494));	// 6842                  lea     cx, unk_12494 ;~ 041E:0426
cs=0x41e;eip=0x00042a; 	J(return sub_12b70(0, _state););	// 6843                  jmp     short sub_12B70 ;~ 041E:042A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_12ba8: 	goto sub_12ba8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12bec(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12bec:
    _begin:
cs=0x41e;eip=0x00042c; 	T(ax = 0;);	// 6851                  mov     ax, 0 ;~ 041E:042C
cs=0x41e;eip=0x00042f; 	T(bx = offset(seg11a3,byte_125cc));	// 6852                  lea     bx, byte_125CC ;~ 041E:042F
cs=0x41e;eip=0x000433; 	T(cx = offset(seg11a3,unk_12526));	// 6853                  lea     cx, unk_12526 ;~ 041E:0433
cs=0x41e;eip=0x000437; 	J(CALL(sub_12b70,0));	// 6854                  call    sub_12B70 ;~ 041E:0437
cs=0x41e;eip=0x00043a; 	T(bx = offset(seg11a3,byte_125e0));	// 6855                  lea     bx, byte_125E0 ;~ 041E:043A
cs=0x41e;eip=0x00043e; 	T(cx = offset(seg11a3,unk_12534));	// 6856                  lea     cx, unk_12534 ;~ 041E:043E
cs=0x41e;eip=0x000442; 	J(CALL(sub_12b70,0));	// 6857                  call    sub_12B70 ;~ 041E:0442
cs=0x41e;eip=0x000445; 	T(bx = offset(seg11a3,byte_125f4));	// 6858                  lea     bx, byte_125F4 ;~ 041E:0445
cs=0x41e;eip=0x000449; 	T(cx = offset(seg11a3,unk_12542));	// 6859                  lea     cx, unk_12542 ;~ 041E:0449
cs=0x41e;eip=0x00044d; 	J(CALL(sub_12b70,0));	// 6860                  call    sub_12B70 ;~ 041E:044D
cs=0x41e;eip=0x000450; 	T(bx = offset(seg11a3,unk_12608));	// 6861                  lea     bx, unk_12608 ;~ 041E:0450
cs=0x41e;eip=0x000454; 	T(cx = offset(seg11a3,unk_12550));	// 6862                  lea     cx, unk_12550 ;~ 041E:0454
cs=0x41e;eip=0x000458; 	J(CALL(sub_12b70,0));	// 6863                  call    sub_12B70 ;~ 041E:0458
cs=0x41e;eip=0x00045b; 	T(bx = offset(seg11a3,byte_1261c));	// 6864                  lea     bx, byte_1261C ;~ 041E:045B
cs=0x41e;eip=0x00045f; 	T(cx = offset(seg11a3,unk_1255e));	// 6865                  lea     cx, unk_1255E ;~ 041E:045F
cs=0x41e;eip=0x000463; 	J(CALL(sub_12b70,0));	// 6866                  call    sub_12B70 ;~ 041E:0463
cs=0x41e;eip=0x000466; 	T(bx = offset(seg11a3,unk_12630));	// 6867                  lea     bx, unk_12630 ;~ 041E:0466
cs=0x41e;eip=0x00046a; 	T(cx = offset(seg11a3,unk_1256c));	// 6868                  lea     cx, unk_1256C ;~ 041E:046A
cs=0x41e;eip=0x00046e; 	J(return sub_12b70(0, _state););	// 6869                  jmp     sub_12B70 ;~ 041E:046E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_12bec: 	goto sub_12bec;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12c31(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12c31:
    _begin:
cs=0x41e;eip=0x000471; 	J(CALL(sub_12811,0));	// 6877                  call    sub_12811 ;~ 041E:0471
cs=0x41e;eip=0x000474; 	J(CALL(sub_12a16,0));	// 6878                  call    sub_12A16 ;~ 041E:0474
cs=0x41e;eip=0x000477; 	J(CALL(sub_12ba8,0));	// 6879                  call    sub_12BA8 ;~ 041E:0477
loc_12c3a:
	// 4535 
cs=0x41e;eip=0x00047a; 	T(al = byte_125cc;);	// 6882                  mov     al, byte_125CC ;~ 041E:047A
cs=0x41e;eip=0x00047d; 	T(OR(al, byte_125e0));	// 6883                  or      al, byte_125E0 ;~ 041E:047D
cs=0x41e;eip=0x000481; 	T(OR(al, byte_125f4));	// 6884                  or      al, byte_125F4 ;~ 041E:0481
cs=0x41e;eip=0x000485; 	T(CMP(al, 0));	// 6885                  cmp     al, 0 ;~ 041E:0485
cs=0x41e;eip=0x000487; 	J(JZ(loc_12c51));	// 6886                  jz      short loc_12C51 ;~ 041E:0487
cs=0x41e;eip=0x000489; 	T(ah = 1;);	// 6887                  mov     ah, 1 ;~ 041E:0489
cs=0x41e;eip=0x00048b; 	S(_INT(0x16));	// 6888                  int     16h             ; KEYBOARD - CHECK BUFFER, DO NOT CLEAR ;~ 041E:048B
cs=0x41e;eip=0x00048d; 	J(JZ(loc_12c3a));	// 6892                  jz      short loc_12C3A ;~ 041E:048D
cs=0x41e;eip=0x00048f; 	T(al = 0x0FF;);	// 6893                  mov     al, 0FFh ;~ 041E:048F
loc_12c51:
	// 4536 
cs=0x41e;eip=0x000491; 	T(ah = 0;);	// 6896                  mov     ah, 0 ;~ 041E:0491
cs=0x41e;eip=0x000493; 	X(PUSH(ax));	// 6897                  push    ax ;~ 041E:0493
cs=0x41e;eip=0x000494; 	J(CALL(sub_12bec,0));	// 6898                  call    sub_12BEC ;~ 041E:0494
loc_12c57:
	// 4537 
cs=0x41e;eip=0x000497; 	T(al = byte_125cc;);	// 6901                  mov     al, byte_125CC ;~ 041E:0497
cs=0x41e;eip=0x00049a; 	T(OR(al, byte_125e0));	// 6902                  or      al, byte_125E0 ;~ 041E:049A
cs=0x41e;eip=0x00049e; 	T(OR(al, byte_125f4));	// 6903                  or      al, byte_125F4 ;~ 041E:049E
cs=0x41e;eip=0x0004a2; 	T(CMP(al, 0));	// 6904                  cmp     al, 0 ;~ 041E:04A2
cs=0x41e;eip=0x0004a4; 	J(JNZ(loc_12c57));	// 6905                  jnz     short loc_12C57 ;~ 041E:04A4
cs=0x41e;eip=0x0004a6; 	J(CALL(sub_1298e,0));	// 6906                  call    sub_1298E ;~ 041E:04A6
cs=0x41e;eip=0x0004a9; 	X(POP(ax));	// 6907                  pop     ax ;~ 041E:04A9
cs=0x41e;eip=0x0004aa; 	J(RETN(0));	// 6908                  retn ;~ 041E:04AA

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_12c3a: 	goto loc_12c3a;
        case m2c::kloc_12c51: 	goto loc_12c51;
        case m2c::kloc_12c57: 	goto loc_12c57;
        case m2c::ksub_12c31: 	goto sub_12c31;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12c73(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12c73:
    _begin:
cs=0x41e;eip=0x0004b3; 	T(bx = word_11cb8;);	// 6921                  mov     bx, word_11CB8 ;~ 041E:04B3
cs=0x41e;eip=0x0004b7; 	T(SHR(bx, 1));	// 6922                  shr     bx, 1 ;~ 041E:04B7
cs=0x41e;eip=0x0004b9; 	T(SHR(bx, 1));	// 6923                  shr     bx, 1 ;~ 041E:04B9
cs=0x41e;eip=0x0004bb; 	T(AND(bx, 6));	// 6924                  and     bx, 6 ;~ 041E:04BB
cs=0x41e;eip=0x0004be; 	T(MOV(cx, *(dw*)(raddr(cs,bx+0x4AB))));	// 6925                  mov     cx, cs:[bx+4ABh] ;~ 041E:04BE
cs=0x41e;eip=0x0004c3; 	T(ax = 0;);	// 6926                  mov     ax, 0 ;~ 041E:04C3
cs=0x41e;eip=0x0004c6; 	T(bx = offset(seg11a3,byte_125f4));	// 6927                  lea     bx, byte_125F4 ;~ 041E:04C6
cs=0x41e;eip=0x0004ca; 	J(return sub_12b70(0, _state););	// 6928                  jmp     sub_12B70 ;~ 041E:04CA

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_12c73: 	goto sub_12c73;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12cb1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12cb1:
    _begin:
cs=0x41e;eip=0x0004f1; 	T(ax = 0;);	// 6968                  mov     ax, 0 ;~ 041E:04F1
cs=0x41e;eip=0x0004f4; 	T(bx = offset(seg11a3,byte_125cc));	// 6969                  lea     bx, byte_125CC ;~ 041E:04F4
cs=0x41e;eip=0x0004f8; 	T(cx = offset(seg11a3,unk_12218));	// 6970                  lea     cx, unk_12218 ;~ 041E:04F8
cs=0x41e;eip=0x0004fc; 	J(return sub_12b70(0, _state););	// 6971                  jmp     sub_12B70 ;~ 041E:04FC

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_12cb1: 	goto sub_12cb1;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12cbf(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12cbf:
    _begin:
cs=0x41e;eip=0x0004ff; 	T(ax = 0;);	// 6980                  mov     ax, 0 ;~ 041E:04FF
cs=0x41e;eip=0x000502; 	T(bx = offset(seg11a3,byte_125cc));	// 6981                  lea     bx, byte_125CC ;~ 041E:0502
cs=0x41e;eip=0x000506; 	T(cx = offset(seg11a3,unk_12224));	// 6982                  lea     cx, unk_12224 ;~ 041E:0506
cs=0x41e;eip=0x00050a; 	J(return sub_12b70(0, _state););	// 6983                  jmp     sub_12B70 ;~ 041E:050A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_12cbf: 	goto sub_12cbf;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg127c_50d_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg127c_50d_proc:
    _begin:
loc_12ccd:
	// 4538 
cs=0x41e;eip=0x00050d; 	T(ax = 0;);	// 6989                  mov     ax, 0 ;~ 041E:050D
cs=0x41e;eip=0x000510; 	T(bx = offset(seg11a3,byte_125f4));	// 6990                  lea     bx, byte_125F4 ;~ 041E:0510
cs=0x41e;eip=0x000514; 	T(cx = offset(seg11a3,unk_1227e));	// 6991                  lea     cx, unk_1227E ;~ 041E:0514
cs=0x41e;eip=0x000518; 	J(return sub_12b70(0, _state););	// 6992                  jmp     sub_12B70 ;~ 041E:0518
loc_12cdb:
	// 4539 
cs=0x41e;eip=0x00051b; 	T(ax = 0;);	// 6996                  mov     ax, 0 ;~ 041E:051B
cs=0x41e;eip=0x00051e; 	T(bx = offset(seg11a3,unk_12608));	// 6997                  lea     bx, unk_12608 ;~ 041E:051E
cs=0x41e;eip=0x000522; 	T(cx = offset(seg11a3,unk_1222e));	// 6998                  lea     cx, unk_1222E ;~ 041E:0522
cs=0x41e;eip=0x000526; 	J(return sub_12b70(0, _state););	// 6999                  jmp     sub_12B70 ;~ 041E:0526
loc_12ce9:
	// 4540 
cs=0x41e;eip=0x000529; 	T(ax = 0;);	// 7003                  mov     ax, 0 ;~ 041E:0529
cs=0x41e;eip=0x00052c; 	T(bx = offset(seg11a3,unk_12608));	// 7004                  lea     bx, unk_12608 ;~ 041E:052C
cs=0x41e;eip=0x000530; 	T(cx = offset(seg11a3,unk_1223c));	// 7005                  lea     cx, unk_1223C ;~ 041E:0530
cs=0x41e;eip=0x000534; 	J(return sub_12b70(0, _state););	// 7006                  jmp     sub_12B70 ;~ 041E:0534
loc_12cf7:
	// 4541 
cs=0x41e;eip=0x000537; 	T(ax = 0;);	// 7010                  mov     ax, 0 ;~ 041E:0537
cs=0x41e;eip=0x00053a; 	T(bx = offset(seg11a3,unk_12608));	// 7011                  lea     bx, unk_12608 ;~ 041E:053A
cs=0x41e;eip=0x00053e; 	T(cx = offset(seg11a3,unk_12246));	// 7012                  lea     cx, unk_12246 ;~ 041E:053E
cs=0x41e;eip=0x000542; 	J(return sub_12b70(0, _state););	// 7013                  jmp     sub_12B70 ;~ 041E:0542
loc_12d05:
	// 4542 
cs=0x41e;eip=0x000545; 	T(ax = 0;);	// 7017                  mov     ax, 0 ;~ 041E:0545
cs=0x41e;eip=0x000548; 	T(bx = offset(seg11a3,byte_125cc));	// 7018                  lea     bx, byte_125CC ;~ 041E:0548
cs=0x41e;eip=0x00054c; 	T(cx = offset(seg11a3,unk_121d6));	// 7019                  lea     cx, unk_121D6 ;~ 041E:054C
cs=0x41e;eip=0x000550; 	J(return sub_12b70(0, _state););	// 7020                  jmp     sub_12B70 ;~ 041E:0550
loc_12d13:
	// 4543 
cs=0x41e;eip=0x000553; 	T(ax = 0;);	// 7024                  mov     ax, 0 ;~ 041E:0553
cs=0x41e;eip=0x000556; 	T(bx = offset(seg11a3,unk_12608));	// 7025                  lea     bx, unk_12608 ;~ 041E:0556
cs=0x41e;eip=0x00055a; 	T(cx = offset(seg11a3,unk_12250));	// 7026                  lea     cx, unk_12250 ;~ 041E:055A
cs=0x41e;eip=0x00055e; 	J(return sub_12b70(0, _state););	// 7027                  jmp     sub_12B70 ;~ 041E:055E
loc_12d21:
	// 4544 
cs=0x41e;eip=0x000561; 	T(ax = 0;);	// 7031                  mov     ax, 0 ;~ 041E:0561
cs=0x41e;eip=0x000564; 	T(bx = offset(seg11a3,byte_125cc));	// 7032                  lea     bx, byte_125CC ;~ 041E:0564
cs=0x41e;eip=0x000568; 	T(cx = offset(seg11a3,unk_12258));	// 7033                  lea     cx, unk_12258 ;~ 041E:0568
cs=0x41e;eip=0x00056c; 	J(return sub_12b70(0, _state););	// 7034                  jmp     sub_12B70 ;~ 041E:056C
loc_12d2f:
	// 4545 
cs=0x41e;eip=0x00056f; 	T(ax = 0;);	// 7038                  mov     ax, 0 ;~ 041E:056F
cs=0x41e;eip=0x000572; 	T(bx = offset(seg11a3,byte_125cc));	// 7039                  lea     bx, byte_125CC ;~ 041E:0572
cs=0x41e;eip=0x000576; 	T(cx = offset(seg11a3,unk_12268));	// 7040                  lea     cx, unk_12268 ;~ 041E:0576
cs=0x41e;eip=0x00057a; 	J(return sub_12b70(0, _state););	// 7041                  jmp     sub_12B70 ;~ 041E:057A
loc_12d3d:
	// 4546 
cs=0x41e;eip=0x00057d; 	T(ax = 0;);	// 7045                  mov     ax, 0 ;~ 041E:057D
cs=0x41e;eip=0x000580; 	T(bx = offset(seg11a3,byte_125cc));	// 7046                  lea     bx, byte_125CC ;~ 041E:0580
cs=0x41e;eip=0x000584; 	T(cx = offset(seg11a3,unk_12272));	// 7047                  lea     cx, unk_12272 ;~ 041E:0584
cs=0x41e;eip=0x000588; 	J(return sub_12b70(0, _state););	// 7048                  jmp     sub_12B70 ;~ 041E:0588
loc_12d4b:
	// 4547 
cs=0x41e;eip=0x00058b; 	T(CMP(byte_1261c, 0));	// 7052                  cmp     byte_1261C, 0 ;~ 041E:058B
cs=0x41e;eip=0x000590; 	J(JNZ(locret_12d60));	// 7053                  jnz     short locret_12D60 ;~ 041E:0590
cs=0x41e;eip=0x000592; 	T(ax = 0;);	// 7054                  mov     ax, 0 ;~ 041E:0592
cs=0x41e;eip=0x000595; 	T(bx = offset(seg11a3,byte_1261c));	// 7055                  lea     bx, byte_1261C ;~ 041E:0595
cs=0x41e;eip=0x000599; 	T(cx = offset(seg11a3,unk_12274));	// 7056                  lea     cx, unk_12274 ;~ 041E:0599
cs=0x41e;eip=0x00059d; 	J(CALL(sub_12b70,0));	// 7057                  call    sub_12B70 ;~ 041E:059D
locret_12d60:
	// 4548 
cs=0x41e;eip=0x0005a0; 	J(RETN(0));	// 7060                  retn ;~ 041E:05A0
loc_12d61:
	// 4549 
cs=0x41e;eip=0x0005a1; 	T(ax = 0;);	// 7064                  mov     ax, 0 ;~ 041E:05A1
cs=0x41e;eip=0x0005a4; 	T(bx = offset(seg11a3,byte_125cc));	// 7065                  lea     bx, byte_125CC ;~ 041E:05A4
cs=0x41e;eip=0x0005a8; 	T(cx = offset(seg11a3,unk_12260));	// 7066                  lea     cx, unk_12260 ;~ 041E:05A8
cs=0x41e;eip=0x0005ac; 	J(return sub_12b70(0, _state););	// 7067                  jmp     sub_12B70 ;~ 041E:05AC

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_12cdb: 	goto loc_12cdb;
        case m2c::kloc_12ce9: 	goto loc_12ce9;
        case m2c::kloc_12cf7: 	goto loc_12cf7;
        case m2c::kloc_12d05: 	goto loc_12d05;
        case m2c::kloc_12d13: 	goto loc_12d13;
        case m2c::kloc_12d21: 	goto loc_12d21;
        case m2c::kloc_12d2f: 	goto loc_12d2f;
        case m2c::kloc_12d3d: 	goto loc_12d3d;
        case m2c::kloc_12d4b: 	goto loc_12d4b;
        case m2c::kloc_12d61: 	goto loc_12d61;
        case m2c::klocret_12d60: 	goto locret_12d60;
        case m2c::kseg127c_50d_proc: 	goto seg127c_50d_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12d6f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12d6f:
    _begin:
cs=0x41e;eip=0x0005af; 	T(ax = 0;);	// 7073                  mov     ax, 0 ;~ 041E:05AF
cs=0x41e;eip=0x0005b2; 	T(bx = offset(seg11a3,byte_125e0));	// 7074                  lea     bx, byte_125E0 ;~ 041E:05B2
cs=0x41e;eip=0x0005b6; 	T(cx = offset(seg11a3,unk_12288));	// 7075                  lea     cx, unk_12288 ;~ 041E:05B6
cs=0x41e;eip=0x0005ba; 	J(return sub_12b70(0, _state););	// 7076                  jmp     sub_12B70 ;~ 041E:05BA

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_12d6f: 	goto sub_12d6f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg127c_5bd_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg127c_5bd_proc:
    _begin:
loc_12d7d:
	// 4550 
cs=0x41e;eip=0x0005bd; 	T(ax = 0;);	// 7082                  mov     ax, 0 ;~ 041E:05BD
cs=0x41e;eip=0x0005c0; 	T(bx = offset(seg11a3,byte_125f4));	// 7083                  lea     bx, byte_125F4 ;~ 041E:05C0
cs=0x41e;eip=0x0005c4; 	T(cx = offset(seg11a3,unk_1229a));	// 7084                  lea     cx, unk_1229A ;~ 041E:05C4
cs=0x41e;eip=0x0005c8; 	J(return sub_12b70(0, _state););	// 7085                  jmp     sub_12B70 ;~ 041E:05C8
loc_12d8b:
	// 4551 
cs=0x41e;eip=0x0005cb; 	T(ax = 0;);	// 7089                  mov     ax, 0 ;~ 041E:05CB
cs=0x41e;eip=0x0005ce; 	T(bx = offset(seg11a3,byte_125e0));	// 7090                  lea     bx, byte_125E0 ;~ 041E:05CE
cs=0x41e;eip=0x0005d2; 	T(cx = offset(seg11a3,unk_122ac));	// 7091                  lea     cx, unk_122AC ;~ 041E:05D2
cs=0x41e;eip=0x0005d6; 	J(CALL(sub_12b70,0));	// 7092                  call    sub_12B70 ;~ 041E:05D6
cs=0x41e;eip=0x0005d9; 	T(bx = offset(seg11a3,unk_12608));	// 7093                  lea     bx, unk_12608 ;~ 041E:05D9
cs=0x41e;eip=0x0005dd; 	T(cx = offset(seg11a3,unk_122b4));	// 7094                  lea     cx, unk_122B4 ;~ 041E:05DD
cs=0x41e;eip=0x0005e1; 	J(return sub_12b70(0, _state););	// 7095                  jmp     sub_12B70 ;~ 041E:05E1

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_12d7d: 	goto loc_12d7d;
        case m2c::kloc_12d8b: 	goto loc_12d8b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12dce(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12dce:
    _begin:
cs=0x41e;eip=0x00060e; 	T(CMP(word_11cae, 0));	// 7125                  cmp     word_11CAE, 0 ;~ 041E:060E
cs=0x41e;eip=0x000613; 	J(JNZ(locret_12dde));	// 7126                  jnz     short locret_12DDE ;~ 041E:0613
cs=0x41e;eip=0x000615; 	T(bx = 0;);	// 7127                  mov     bx, 0 ;~ 041E:0615
cs=0x41e;eip=0x000618; 	T(cx = 0x31F3;);	// 7128                  mov     cx, 31F3h ;~ 041E:0618
cs=0x41e;eip=0x00061b; 	J(JMP(loc_12e0b));	// 7129                  jmp     short loc_12E0B ;~ 041E:061B
locret_12dde:
	// 4552 
cs=0x41e;eip=0x00061e; 	J(RETN(0));	// 7135                  retn ;~ 041E:061E
loc_12ddf:
	// 4553 
cs=0x41e;eip=0x00061f; 	T(ax = word_11ca9;);	// 7140                  mov     ax, word_11CA9 ;~ 041E:061F
cs=0x41e;eip=0x000622; 	T(INC(ax));	// 7141                  inc     ax ;~ 041E:0622
cs=0x41e;eip=0x000623; 	T(CMP(al, byte_11cab));	// 7142                  cmp     al, byte_11CAB ;~ 041E:0623
cs=0x41e;eip=0x000627; 	J(JBE(loc_12deb));	// 7143                  jbe     short loc_12DEB ;~ 041E:0627
cs=0x41e;eip=0x000629; 	T(XOR(ax, ax));	// 7144                  xor     ax, ax ;~ 041E:0629
loc_12deb:
	// 4554 
cs=0x41e;eip=0x00062b; 	X(word_11ca9 = ax;);	// 7147                  mov     word_11CA9, ax ;~ 041E:062B
cs=0x41e;eip=0x00062e; 	T(SHL(ax, 1));	// 7148                  shl     ax, 1 ;~ 041E:062E
cs=0x41e;eip=0x000630; 	T(SHL(ax, 1));	// 7149                  shl     ax, 1 ;~ 041E:0630
cs=0x41e;eip=0x000632; 	T(bx = offset(seg11a3,unk_11c9d));	// 7150                  lea     bx, unk_11C9D ;~ 041E:0632
cs=0x41e;eip=0x000636; 	T(ADD(bx, ax));	// 7151                  add     bx, ax ;~ 041E:0636
cs=0x41e;eip=0x000638; 	T(MOV(cx, *(dw*)(raddr(ds,bx))));	// 7152                  mov     cx, [bx] ;~ 041E:0638
cs=0x41e;eip=0x00063a; 	T(ADD(bx, 2));	// 7153                  add     bx, 2 ;~ 041E:063A
cs=0x41e;eip=0x00063d; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 7154                  mov     bx, [bx] ;~ 041E:063D
cs=0x41e;eip=0x00063f; 	T(ax = 0x2D;);	// 7155                  mov     ax, 2Dh ; '-' ;~ 041E:063F
cs=0x41e;eip=0x000642; 	J(JMP(loc_12e0e));	// 7156                  jmp     short loc_12E0E ;~ 041E:0642
loc_12e05:
	// 4555 
cs=0x41e;eip=0x000645; 	T(bx = 0x31F4;);	// 7163                  mov     bx, 31F4h ;~ 041E:0645
cs=0x41e;eip=0x000648; 	T(cx = 0x4796;);	// 7164                  mov     cx, 4796h ;~ 041E:0648
loc_12e0b:
	// 4556 
cs=0x41e;eip=0x00064b; 	T(ax = 1;);	// 7167                  mov     ax, 1 ;~ 041E:064B
loc_12e0e:
	// 4557 
cs=0x41e;eip=0x00064e; 	X(word_11cac = ax;);	// 7170                  mov     word_11CAC, ax ;~ 041E:064E
loc_12e11:
	// 4558 
cs=0x41e;eip=0x000651; 	T(CMP(word_11cac, 0));	// 7173                  cmp     word_11CAC, 0 ;~ 041E:0651
cs=0x41e;eip=0x000656; 	J(JNZ(loc_12e11));	// 7174                  jnz     short loc_12E11 ;~ 041E:0656
cs=0x41e;eip=0x000658; 	X(PUSH(bx));	// 7175                  push    bx ;~ 041E:0658
cs=0x41e;eip=0x000659; 	X(PUSH(cx));	// 7176                  push    cx ;~ 041E:0659
cs=0x41e;eip=0x00065a; 	J(CALL(sub_12e25,0));	// 7177                  call    sub_12E25 ;~ 041E:065A
cs=0x41e;eip=0x00065d; 	X(POP(di));	// 7178                  pop     di ;~ 041E:065D
cs=0x41e;eip=0x00065e; 	X(POP(si));	// 7179                  pop     si ;~ 041E:065E
cs=0x41e;eip=0x00065f; 	J(CALL(sub_12f09,0));	// 7180                  call    sub_12F09 ;~ 041E:065F
cs=0x41e;eip=0x000662; 	J(return sub_12e41(0, _state););	// 7181                  jmp     short sub_12E41 ;~ 041E:0662

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_12ddf: 	goto loc_12ddf;
        case m2c::kloc_12deb: 	goto loc_12deb;
        case m2c::kloc_12e05: 	goto loc_12e05;
        case m2c::kloc_12e0b: 	goto loc_12e0b;
        case m2c::kloc_12e0e: 	goto loc_12e0e;
        case m2c::kloc_12e11: 	goto loc_12e11;
        case m2c::klocret_12dde: 	goto locret_12dde;
        case m2c::ksub_12dce: 	goto sub_12dce;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12e41(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12e41:
    _begin:
cs=0x41e;eip=0x000681; 	T(al = 0x0B0;);	// 7221                  mov     al, 0B0h ;~ 041E:0681
cs=0x41e;eip=0x000683; 	T(bl = 0;);	// 7222                  mov     bl, 0 ;~ 041E:0683
cs=0x41e;eip=0x000685; 	J(CALL(sub_12a3b,0));	// 7223                  call    sub_12A3B ;~ 041E:0685
cs=0x41e;eip=0x000688; 	T(al = 0x0B1;);	// 7224                  mov     al, 0B1h ;~ 041E:0688
cs=0x41e;eip=0x00068a; 	T(bl = 0;);	// 7225                  mov     bl, 0 ;~ 041E:068A
cs=0x41e;eip=0x00068c; 	J(CALL(sub_12a3b,0));	// 7226                  call    sub_12A3B ;~ 041E:068C
cs=0x41e;eip=0x00068f; 	T(al = byte_11c95;);	// 7227                  mov     al, byte_11C95 ;~ 041E:068F
cs=0x41e;eip=0x000692; 	S(OUT(0x21, al));	// 7228                  out     21h, al         ; Interrupt controller, 8259A. ;~ 041E:0692
cs=0x41e;eip=0x000694; 	T(al = byte_11c96;);	// 7229                  mov     al, byte_11C96 ;~ 041E:0694
cs=0x41e;eip=0x000697; 	S(OUT(0x61, al));	// 7230                  out     61h, al         ; PC/XT PPI port B bits: ;~ 041E:0697
cs=0x41e;eip=0x000699; 	T(al = 0x0B6;);	// 7238                  mov     al, 0B6h ;~ 041E:0699
cs=0x41e;eip=0x00069b; 	S(OUT(0x43, al));	// 7239                  out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:069B
cs=0x41e;eip=0x00069d; 	T(XOR(ax, ax));	// 7240                  xor     ax, ax ;~ 041E:069D
cs=0x41e;eip=0x00069f; 	S(OUT(0x42, al));	// 7241                  out     42h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:069F
cs=0x41e;eip=0x0006a1; 	T(al = ah;);	// 7242                  mov     al, ah ;~ 041E:06A1
cs=0x41e;eip=0x0006a3; 	S(OUT(0x42, al));	// 7243                  out     42h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:06A3
cs=0x41e;eip=0x0006a5; 	T(STI);	// 7244                  sti ;~ 041E:06A5
cs=0x41e;eip=0x0006a6; 	J(RETN(0));	// 7245                  retn ;~ 041E:06A6

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_12e41: 	goto sub_12e41;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12e67(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12e67:
    _begin:
cs=0x41e;eip=0x0006a7; 	T(al = 0x20;);	// 7253                  mov     al, 20h ; ' ' ;~ 041E:06A7
cs=0x41e;eip=0x0006a9; 	T(bl = 0x23;);	// 7254                  mov     bl, 23h ; '#' ;~ 041E:06A9
cs=0x41e;eip=0x0006ab; 	J(CALL(sub_12a3b,0));	// 7255                  call    sub_12A3B ;~ 041E:06AB
cs=0x41e;eip=0x0006ae; 	T(al = 0x23;);	// 7256                  mov     al, 23h ; '#' ;~ 041E:06AE
cs=0x41e;eip=0x0006b0; 	T(bl = 0x28;);	// 7257                  mov     bl, 28h ; '(' ;~ 041E:06B0
cs=0x41e;eip=0x0006b2; 	J(CALL(sub_12a3b,0));	// 7258                  call    sub_12A3B ;~ 041E:06B2
cs=0x41e;eip=0x0006b5; 	T(al = 0x40;);	// 7259                  mov     al, 40h ; '@' ;~ 041E:06B5
cs=0x41e;eip=0x0006b7; 	T(bl = 0x3F;);	// 7260                  mov     bl, 3Fh ; '?' ;~ 041E:06B7
cs=0x41e;eip=0x0006b9; 	J(CALL(sub_12a3b,0));	// 7261                  call    sub_12A3B ;~ 041E:06B9
cs=0x41e;eip=0x0006bc; 	T(al = 0x43;);	// 7262                  mov     al, 43h ; 'C' ;~ 041E:06BC
cs=0x41e;eip=0x0006be; 	T(bl = 0x3F;);	// 7263                  mov     bl, 3Fh ; '?' ;~ 041E:06BE
cs=0x41e;eip=0x0006c0; 	J(CALL(sub_12a3b,0));	// 7264                  call    sub_12A3B ;~ 041E:06C0
cs=0x41e;eip=0x0006c3; 	T(al = 0x60;);	// 7265                  mov     al, 60h ; '`' ;~ 041E:06C3
cs=0x41e;eip=0x0006c5; 	T(bl = 0x0AF;);	// 7266                  mov     bl, 0AFh ;~ 041E:06C5
cs=0x41e;eip=0x0006c7; 	J(CALL(sub_12a3b,0));	// 7267                  call    sub_12A3B ;~ 041E:06C7
cs=0x41e;eip=0x0006ca; 	T(al = 0x63;);	// 7268                  mov     al, 63h ; 'c' ;~ 041E:06CA
cs=0x41e;eip=0x0006cc; 	T(bl = 0x0AF;);	// 7269                  mov     bl, 0AFh ;~ 041E:06CC
cs=0x41e;eip=0x0006ce; 	J(CALL(sub_12a3b,0));	// 7270                  call    sub_12A3B ;~ 041E:06CE
cs=0x41e;eip=0x0006d1; 	T(al = 0x80;);	// 7271                  mov     al, 80h ;~ 041E:06D1
cs=0x41e;eip=0x0006d3; 	T(bl = 0x0D;);	// 7272                  mov     bl, 0Dh ;~ 041E:06D3
cs=0x41e;eip=0x0006d5; 	J(CALL(sub_12a3b,0));	// 7273                  call    sub_12A3B ;~ 041E:06D5
cs=0x41e;eip=0x0006d8; 	T(al = 0x83;);	// 7274                  mov     al, 83h ;~ 041E:06D8
cs=0x41e;eip=0x0006da; 	T(bl = 0x0F;);	// 7275                  mov     bl, 0Fh ;~ 041E:06DA
cs=0x41e;eip=0x0006dc; 	J(CALL(sub_12a3b,0));	// 7276                  call    sub_12A3B ;~ 041E:06DC
cs=0x41e;eip=0x0006df; 	T(al = 0x0C0;);	// 7277                  mov     al, 0C0h ;~ 041E:06DF
cs=0x41e;eip=0x0006e1; 	T(bl = 5;);	// 7278                  mov     bl, 5 ;~ 041E:06E1
cs=0x41e;eip=0x0006e3; 	J(CALL(sub_12a3b,0));	// 7279                  call    sub_12A3B ;~ 041E:06E3
cs=0x41e;eip=0x0006e6; 	T(al = 0x0E0;);	// 7280                  mov     al, 0E0h ;~ 041E:06E6
cs=0x41e;eip=0x0006e8; 	T(bl = 0;);	// 7281                  mov     bl, 0 ;~ 041E:06E8
cs=0x41e;eip=0x0006ea; 	J(CALL(sub_12a3b,0));	// 7282                  call    sub_12A3B ;~ 041E:06EA
cs=0x41e;eip=0x0006ed; 	T(al = 0x0E3;);	// 7283                  mov     al, 0E3h ;~ 041E:06ED
cs=0x41e;eip=0x0006ef; 	T(bl = 2;);	// 7284                  mov     bl, 2 ;~ 041E:06EF
cs=0x41e;eip=0x0006f1; 	J(CALL(sub_12a3b,0));	// 7285                  call    sub_12A3B ;~ 041E:06F1
cs=0x41e;eip=0x0006f4; 	T(al = 0x0B0;);	// 7286                  mov     al, 0B0h ;~ 041E:06F4
cs=0x41e;eip=0x0006f6; 	T(bl = 1;);	// 7287                  mov     bl, 1 ;~ 041E:06F6
cs=0x41e;eip=0x0006f8; 	J(CALL(sub_12a3b,0));	// 7288                  call    sub_12A3B ;~ 041E:06F8
cs=0x41e;eip=0x0006fb; 	T(al = 0x0A0;);	// 7289                  mov     al, 0A0h ;~ 041E:06FB
cs=0x41e;eip=0x0006fd; 	T(bl = 0x8F;);	// 7290                  mov     bl, 8Fh ;~ 041E:06FD
cs=0x41e;eip=0x0006ff; 	J(CALL(sub_12a3b,0));	// 7291                  call    sub_12A3B ;~ 041E:06FF
cs=0x41e;eip=0x000702; 	T(al = 0x0B0;);	// 7292                  mov     al, 0B0h ;~ 041E:0702
cs=0x41e;eip=0x000704; 	T(bl = 0x2E;);	// 7293                  mov     bl, 2Eh ; '.' ;~ 041E:0704
cs=0x41e;eip=0x000706; 	J(CALL(sub_12a3b,0));	// 7294                  call    sub_12A3B ;~ 041E:0706
cs=0x41e;eip=0x000709; 	T(CLI);	// 7295                  cli ;~ 041E:0709
cs=0x41e;eip=0x00070a; 	T(al = 0x36;);	// 7296                  mov     al, 36h ; '6' ;~ 041E:070A
cs=0x41e;eip=0x00070c; 	S(OUT(0x43, al));	// 7297                  out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:070C
cs=0x41e;eip=0x00070e; 	T(ax = 0x4C90;);	// 7298                  mov     ax, 4C90h ;~ 041E:070E
cs=0x41e;eip=0x000711; 	S(OUT(0x40, al));	// 7299                  out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:0711
cs=0x41e;eip=0x000713; 	T(al = ah;);	// 7300                  mov     al, ah ;~ 041E:0713
cs=0x41e;eip=0x000715; 	S(OUT(0x40, al));	// 7301                  out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:0715
cs=0x41e;eip=0x000717; 	T(al = 0;);	// 7302                  mov     al, 0 ;~ 041E:0717
cs=0x41e;eip=0x000719; 	S(OUT(0x43, al));	// 7303                  out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:0719
cs=0x41e;eip=0x00071b; 	S(IN(al, 0x40));	// 7304                  in      al, 40h         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:071B
cs=0x41e;eip=0x00071d; 	T(bl = al;);	// 7305                  mov     bl, al ;~ 041E:071D
cs=0x41e;eip=0x00071f; 	S(IN(al, 0x40));	// 7306                  in      al, 40h         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:071F
cs=0x41e;eip=0x000721; 	T(bh = al;);	// 7307                  mov     bh, al ;~ 041E:0721
loc_12ee3:
	// 4562 
cs=0x41e;eip=0x000723; 	T(al = 0;);	// 7310                  mov     al, 0 ;~ 041E:0723
cs=0x41e;eip=0x000725; 	S(OUT(0x43, al));	// 7311                  out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:0725
cs=0x41e;eip=0x000727; 	S(IN(al, 0x40));	// 7312                  in      al, 40h         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:0727
cs=0x41e;eip=0x000729; 	T(cl = al;);	// 7313                  mov     cl, al ;~ 041E:0729
cs=0x41e;eip=0x00072b; 	S(IN(al, 0x40));	// 7314                  in      al, 40h         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:072B
cs=0x41e;eip=0x00072d; 	T(ch = al;);	// 7315                  mov     ch, al ;~ 041E:072D
cs=0x41e;eip=0x00072f; 	T(NEG(cx));	// 7316                  neg     cx ;~ 041E:072F
cs=0x41e;eip=0x000731; 	T(ADD(cx, bx));	// 7317                  add     cx, bx ;~ 041E:0731
cs=0x41e;eip=0x000733; 	T(CMP(cx, 0x952));	// 7318                  cmp     cx, 952h ;~ 041E:0733
cs=0x41e;eip=0x000737; 	J(JC(loc_12ee3));	// 7319                  jb      short loc_12EE3 ;~ 041E:0737
cs=0x41e;eip=0x000739; 	T(al = 0x0B0;);	// 7320                  mov     al, 0B0h ;~ 041E:0739
cs=0x41e;eip=0x00073b; 	T(bl = 0x20;);	// 7321                  mov     bl, 20h ; ' ' ;~ 041E:073B
cs=0x41e;eip=0x00073d; 	J(CALL(sub_12a3b,0));	// 7322                  call    sub_12A3B ;~ 041E:073D
cs=0x41e;eip=0x000740; 	T(al = 0x0A0;);	// 7323                  mov     al, 0A0h ;~ 041E:0740
cs=0x41e;eip=0x000742; 	T(bl = 0;);	// 7324                  mov     bl, 0 ;~ 041E:0742
cs=0x41e;eip=0x000744; 	J(CALL(sub_12a3b,0));	// 7325                  call    sub_12A3B ;~ 041E:0744
cs=0x41e;eip=0x000747; 	T(STI);	// 7326                  sti ;~ 041E:0747
cs=0x41e;eip=0x000748; 	J(RETN(0));	// 7327                  retn ;~ 041E:0748

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_12ee3: 	goto loc_12ee3;
        case m2c::ksub_12e67: 	goto sub_12e67;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12f38(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12f38:
    _begin:
cs=0x41e;eip=0x000778; 	X(PUSH(ax));	// 7377                  push    ax ;~ 041E:0778
cs=0x41e;eip=0x000779; 	T(al = bl;);	// 7378                  mov     al, bl ;~ 041E:0779
cs=0x41e;eip=0x00077b; 	S(OUT(0x43, al));	// 7379                  out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:077B
cs=0x41e;eip=0x00077d; 	X(POP(ax));	// 7380                  pop     ax ;~ 041E:077D
cs=0x41e;eip=0x00077e; 	S(OUT(0x42, al));	// 7381                  out     42h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:077E
cs=0x41e;eip=0x000780; 	S(IN(al, 0x61));	// 7382                  in      al, 61h         ; PC/XT PPI port B bits: ;~ 041E:0780
cs=0x41e;eip=0x000782; 	X(byte_11c96 = al;);	// 7390                  mov     byte_11C96, al ;~ 041E:0782
cs=0x41e;eip=0x000785; 	T(OR(al, 1));	// 7391                  or      al, 1 ;~ 041E:0785
cs=0x41e;eip=0x000787; 	T(AND(al, 0x0FD));	// 7392                  and     al, 0FDh ;~ 041E:0787
cs=0x41e;eip=0x000789; 	S(OUT(0x61, al));	// 7393                  out     61h, al         ; PC/XT PPI port B bits: ;~ 041E:0789
cs=0x41e;eip=0x00078b; 	T(CLI);	// 7401                  cli ;~ 041E:078B
cs=0x41e;eip=0x00078c; 	S(IN(al, 0x21));	// 7402                  in      al, 21h         ; Interrupt controller, 8259A. ;~ 041E:078C
cs=0x41e;eip=0x00078e; 	X(byte_11c95 = al;);	// 7403                  mov     byte_11C95, al ;~ 041E:078E
cs=0x41e;eip=0x000791; 	T(OR(al, 1));	// 7404                  or      al, 1 ;~ 041E:0791
cs=0x41e;eip=0x000793; 	S(OUT(0x21, al));	// 7405                  out     21h, al         ; Interrupt controller, 8259A. ;~ 041E:0793
cs=0x41e;eip=0x000795; 	T(STI);	// 7406                  sti ;~ 041E:0795
cs=0x41e;eip=0x000796; 	J(RETN(0));	// 7407                  retn ;~ 041E:0796

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_12f38: 	goto sub_12f38;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg127c_797_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg127c_797_proc:
    _begin:
cs=0x41e;eip=0x000797; 	X(PUSH(bp));	// 7412                  push    bp ;~ 041E:0797
cs=0x41e;eip=0x000798; 	T(bp = sp;);	// 7413                  mov     bp, sp ;~ 041E:0798
cs=0x41e;eip=0x00079a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 7414                  mov     bx, [bp+6] ;~ 041E:079A
cs=0x41e;eip=0x00079d; 	T(MOV(cx, *(dw*)(raddr(ss,bp+8))));	// 7415                  mov     cx, [bp+8] ;~ 041E:079D
cs=0x41e;eip=0x0007a0; 	X(PUSH(di));	// 7416                  push    di ;~ 041E:07A0
cs=0x41e;eip=0x0007a1; 	X(PUSH(ds));	// 7417                  push    ds ;~ 041E:07A1
cs=0x41e;eip=0x0007a2; 	T(ax = seg_offset(seg11a3););	// 7418                  mov     ax, seg seg11a3 ;~ 041E:07A2
cs=0x41e;eip=0x0007a5; 	T(ds = ax;);	// 7419                  mov     ds, ax ;~ 041E:07A5
cs=0x41e;eip=0x0007a7; 	X(word_11c97 = bx;);	// 7421                  mov     word_11C97, bx ;~ 041E:07A7
cs=0x41e;eip=0x0007ab; 	J(CALL(sub_12f75,0));	// 7422                  call    sub_12F75 ;~ 041E:07AB
cs=0x41e;eip=0x0007ae; 	J(CALL(sub_128e5,0));	// 7423                  call    sub_128E5 ;~ 041E:07AE
cs=0x41e;eip=0x0007b1; 	X(POP(ds));	// 7424                  pop     ds ;~ 041E:07B1
cs=0x41e;eip=0x0007b2; 	X(POP(di));	// 7426                  pop     di ;~ 041E:07B2
cs=0x41e;eip=0x0007b3; 	X(POP(bp));	// 7427                  pop     bp ;~ 041E:07B3
cs=0x41e;eip=0x0007b4; 	J(RETF(0));	// 7428                  retf ;~ 041E:07B4

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg127c_797_proc: 	goto seg127c_797_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12f75(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12f75:
    _begin:
cs=0x41e;eip=0x0007b5; 	T(bl = 2;);	// 7435                  mov     bl, 2 ;~ 041E:07B5
cs=0x41e;eip=0x0007b7; 	T(CMP(cx, 0x7D9D));	// 7436                  cmp     cx, 7D9Dh ;~ 041E:07B7
cs=0x41e;eip=0x0007bb; 	J(JNC(loc_12f87));	// 7437                  jnb     short loc_12F87 ;~ 041E:07BB
cs=0x41e;eip=0x0007bd; 	T(DEC(bl));	// 7438                  dec     bl ;~ 041E:07BD
cs=0x41e;eip=0x0007bf; 	T(CMP(cx, 0x6A1A));	// 7439                  cmp     cx, 6A1Ah ;~ 041E:07BF
cs=0x41e;eip=0x0007c3; 	J(JNC(loc_12f87));	// 7440                  jnb     short loc_12F87 ;~ 041E:07C3
cs=0x41e;eip=0x0007c5; 	T(DEC(bl));	// 7441                  dec     bl ;~ 041E:07C5
loc_12f87:
	// 4567 
cs=0x41e;eip=0x0007c7; 	X(byte_11cab = bl;);	// 7445                  mov     byte_11CAB, bl ;~ 041E:07C7
cs=0x41e;eip=0x0007cb; 	J(RETN(0));	// 7446                  retn ;~ 041E:07CB

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_12f87: 	goto loc_12f87;
        case m2c::ksub_12f75: 	goto sub_12f75;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg127c_7cc_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg127c_7cc_proc:
    _begin:
cs=0x41e;eip=0x0007cc; 	X(PUSH(ds));	// 7451                  push    ds ;~ 041E:07CC
cs=0x41e;eip=0x0007cd; 	T(ax = seg_offset(seg11a3););	// 7452                  mov     ax, seg seg11a3 ;~ 041E:07CD
cs=0x41e;eip=0x0007d0; 	T(ds = ax;);	// 7453                  mov     ds, ax ;~ 041E:07D0
cs=0x41e;eip=0x0007d2; 	J(CALL(sub_1298e,0));	// 7455                  call    sub_1298E ;~ 041E:07D2
cs=0x41e;eip=0x0007d5; 	J(CALL(sub_12a16,0));	// 7456                  call    sub_12A16 ;~ 041E:07D5
cs=0x41e;eip=0x0007d8; 	X(POP(ds));	// 7457                  pop     ds ;~ 041E:07D8
cs=0x41e;eip=0x0007d9; 	J(RETF(0));	// 7459                  retf ;~ 041E:07D9
ret_41e_7da:
	// 4568 
cs=0x41e;eip=0x0007da; 	X(PUSH(bp));	// 7462                  push    bp ;~ 041E:07DA
cs=0x41e;eip=0x0007db; 	T(bp = sp;);	// 7463                  mov     bp, sp ;~ 041E:07DB
cs=0x41e;eip=0x0007dd; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 7464                  mov     bx, [bp+6] ;~ 041E:07DD
cs=0x41e;eip=0x0007e0; 	T(CMP(bx, 0x22));	// 7465                  cmp     bx, 22h ; '"' ;~ 041E:07E0
cs=0x41e;eip=0x0007e3; 	J(JA(loc_12fb1));	// 7466                  ja      short loc_12FB1 ;~ 041E:07E3
cs=0x41e;eip=0x0007e5; 	X(PUSH(ds));	// 7467                  push    ds ;~ 041E:07E5
cs=0x41e;eip=0x0007e6; 	T(ax = seg_offset(seg11a3););	// 7468                  mov     ax, seg seg11a3 ;~ 041E:07E6
cs=0x41e;eip=0x0007e9; 	T(ds = ax;);	// 7469                  mov     ds, ax ;~ 041E:07E9
cs=0x41e;eip=0x0007eb; 	J(CALL(__dispatch_call,*(dw*)(raddr(cs,bx+0x5E4))));	// 7471                  call    word ptr cs:[bx+5E4h] ;~ 041E:07EB
cs=0x41e;eip=0x0007f0; 	X(POP(ds));	// 7472                  pop     ds ;~ 041E:07F0
loc_12fb1:
	// 4569 
cs=0x41e;eip=0x0007f1; 	X(POP(bp));	// 7477                  pop     bp ;~ 041E:07F1
cs=0x41e;eip=0x0007f2; 	J(RETF(0));	// 7478                  retf ;~ 041E:07F2
ret_41e_7f3:
	// 4570 
cs=0x41e;eip=0x0007f3; 	X(PUSH(bp));	// 7481                  push    bp ;~ 041E:07F3
cs=0x41e;eip=0x0007f4; 	T(bp = sp;);	// 7482                  mov     bp, sp ;~ 041E:07F4
cs=0x41e;eip=0x0007f6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 7483                  mov     bx, [bp+6] ;~ 041E:07F6
cs=0x41e;eip=0x0007f9; 	T(CMP(bx, 4));	// 7484                  cmp     bx, 4 ;~ 041E:07F9
cs=0x41e;eip=0x0007fc; 	J(JA(loc_12fb1));	// 7485                  ja      short loc_12FB1 ;~ 041E:07FC
cs=0x41e;eip=0x0007fe; 	X(PUSH(ds));	// 7486                  push    ds ;~ 041E:07FE
cs=0x41e;eip=0x0007ff; 	T(ax = seg_offset(seg11a3););	// 7487                  mov     ax, seg seg11a3 ;~ 041E:07FF
cs=0x41e;eip=0x000802; 	T(ds = ax;);	// 7488                  mov     ds, ax ;~ 041E:0802
cs=0x41e;eip=0x000804; 	X(PUSH(di));	// 7490                  push    di ;~ 041E:0804
cs=0x41e;eip=0x000805; 	X(PUSH(si));	// 7491                  push    si ;~ 041E:0805
cs=0x41e;eip=0x000806; 	J(CALL(__dispatch_call,*(dw*)(((db*)&off_12dc8)+bx)));	// 7492                  call    cs:off_12DC8[bx] ;~ 041E:0806
cs=0x41e;eip=0x00080b; 	X(POP(si));	// 7493                  pop     si ;~ 041E:080B
cs=0x41e;eip=0x00080c; 	X(POP(di));	// 7494                  pop     di ;~ 041E:080C
cs=0x41e;eip=0x00080d; 	X(POP(ds));	// 7495                  pop     ds ;~ 041E:080D
cs=0x41e;eip=0x00080e; 	X(POP(bp));	// 7497                  pop     bp ;~ 041E:080E
cs=0x41e;eip=0x00080f; 	J(RETF(0));	// 7498                  retf ;~ 041E:080F
ret_41e_810:
	// 4571 
cs=0x41e;eip=0x000810; 	X(PUSH(bp));	// 7500                  push    bp ;~ 041E:0810
cs=0x41e;eip=0x000811; 	X(PUSH(es));	// 7501                  push    es ;~ 041E:0811
cs=0x41e;eip=0x000812; 	X(PUSH(si));	// 7502                  push    si ;~ 041E:0812
cs=0x41e;eip=0x000813; 	X(PUSH(di));	// 7503                  push    di ;~ 041E:0813
cs=0x41e;eip=0x000814; 	X(PUSH(ds));	// 7504                  push    ds ;~ 041E:0814
cs=0x41e;eip=0x000815; 	T(ax = seg_offset(seg11a3););	// 7505                  mov     ax, seg seg11a3 ;~ 041E:0815
cs=0x41e;eip=0x000818; 	T(ds = ax;);	// 7506                  mov     ds, ax ;~ 041E:0818
cs=0x41e;eip=0x00081a; 	T(CMP(byte_125ca, 0));	// 7508                  cmp     byte_125CA, 0 ;~ 041E:081A
cs=0x41e;eip=0x00081f; 	J(JZ(loc_12fe4));	// 7509                  jz      short loc_12FE4 ;~ 041E:081F
cs=0x41e;eip=0x000821; 	J(CALL(sub_12c31,0));	// 7510                  call    sub_12C31 ;~ 041E:0821
loc_12fe4:
	// 4572 
cs=0x41e;eip=0x000824; 	X(POP(ds));	// 7513                  pop     ds ;~ 041E:0824
cs=0x41e;eip=0x000825; 	X(POP(di));	// 7515                  pop     di ;~ 041E:0825
cs=0x41e;eip=0x000826; 	X(POP(si));	// 7516                  pop     si ;~ 041E:0826
cs=0x41e;eip=0x000827; 	X(POP(es));	// 7517                  pop     es ;~ 041E:0827
cs=0x41e;eip=0x000828; 	X(POP(bp));	// 7519                  pop     bp ;~ 041E:0828
cs=0x41e;eip=0x000829; 	J(RETF(0));	// 7520                  retf ;~ 041E:0829
ret_41e_82a:
	// 4573 
cs=0x41e;eip=0x00082a; 	X(PUSH(ds));	// 7522                  push    ds ;~ 041E:082A
cs=0x41e;eip=0x00082b; 	T(ax = seg_offset(seg11a3););	// 7523                  mov     ax, seg seg11a3 ;~ 041E:082B
cs=0x41e;eip=0x00082e; 	T(ds = ax;);	// 7524                  mov     ds, ax ;~ 041E:082E
cs=0x41e;eip=0x000830; 	X(DEC(byte_11c6b));	// 7526                  dec     byte_11C6B ;~ 041E:0830
cs=0x41e;eip=0x000834; 	J(JNZ(loc_13002));	// 7527                  jnz     short loc_13002 ;~ 041E:0834
cs=0x41e;eip=0x000836; 	X(byte_11c6b = 7;);	// 7528                  mov     byte_11C6B, 7 ;~ 041E:0836
cs=0x41e;eip=0x00083b; 	T(CMP(byte_11c6a, 0));	// 7529                  cmp     byte_11C6A, 0 ;~ 041E:083B
cs=0x41e;eip=0x000840; 	J(JNZ(loc_13005));	// 7530                  jnz     short loc_13005 ;~ 041E:0840
loc_13002:
	// 4574 
cs=0x41e;eip=0x000842; 	J(CALL(sub_12a70,0));	// 7533                  call    sub_12A70 ;~ 041E:0842
loc_13005:
	// 4575 
cs=0x41e;eip=0x000845; 	T(ax = word_11c8d;);	// 7536                  mov     ax, word_11C8D ;~ 041E:0845
cs=0x41e;eip=0x000848; 	X(word_11c8d = 0;);	// 7537                  mov     word_11C8D, 0 ;~ 041E:0848
cs=0x41e;eip=0x00084e; 	X(POP(ds));	// 7538                  pop     ds ;~ 041E:084E
cs=0x41e;eip=0x00084f; 	J(RETF(0));	// 7540                  retf ;~ 041E:084F
ret_41e_850:
	// 4576 
cs=0x41e;eip=0x000850; 	X(PUSH(ds));	// 7542                  push    ds ;~ 041E:0850
cs=0x41e;eip=0x000851; 	T(ax = seg_offset(seg11a3););	// 7543                  mov     ax, seg seg11a3 ;~ 041E:0851
cs=0x41e;eip=0x000854; 	T(ds = ax;);	// 7544                  mov     ds, ax ;~ 041E:0854
cs=0x41e;eip=0x000856; 	J(CALL(sub_12b08,0));	// 7546                  call    sub_12B08 ;~ 041E:0856
cs=0x41e;eip=0x000859; 	X(POP(ds));	// 7547                  pop     ds ;~ 041E:0859
cs=0x41e;eip=0x00085a; 	T(XOR(ax, ax));	// 7549                  xor     ax, ax ;~ 041E:085A
cs=0x41e;eip=0x00085c; 	J(RETF(0));	// 7550                  retf ;~ 041E:085C
ret_41e_85d:
	// 4577 
cs=0x41e;eip=0x00085d; 	X(PUSH(bp));	// 7552                  push    bp ;~ 041E:085D
cs=0x41e;eip=0x00085e; 	T(bp = sp;);	// 7553                  mov     bp, sp ;~ 041E:085E
cs=0x41e;eip=0x000860; 	X(PUSH(ds));	// 7554                  push    ds ;~ 041E:0860
cs=0x41e;eip=0x000861; 	T(ax = seg_offset(seg11a3););	// 7555                  mov     ax, seg seg11a3 ;~ 041E:0861
cs=0x41e;eip=0x000864; 	T(ds = ax;);	// 7556                  mov     ds, ax ;~ 041E:0864
cs=0x41e;eip=0x000866; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 7558                  mov     ax, [bp+6] ;~ 041E:0866
cs=0x41e;eip=0x000869; 	T(CMP(ax, word_11cb4));	// 7559                  cmp     ax, word_11CB4 ;~ 041E:0869
cs=0x41e;eip=0x00086d; 	J(JL(loc_13032));	// 7560                  jl      short loc_13032 ;~ 041E:086D
cs=0x41e;eip=0x00086f; 	T(ax = word_11cb4;);	// 7561                  mov     ax, word_11CB4 ;~ 041E:086F
loc_13032:
	// 4578 
cs=0x41e;eip=0x000872; 	X(word_11cae = ax;);	// 7564                  mov     word_11CAE, ax ;~ 041E:0872
cs=0x41e;eip=0x000875; 	X(POP(ds));	// 7565                  pop     ds ;~ 041E:0875
cs=0x41e;eip=0x000876; 	X(POP(bp));	// 7567                  pop     bp ;~ 041E:0876
cs=0x41e;eip=0x000877; 	J(RETF(0));	// 7568                  retf ;~ 041E:0877
ret_41e_878:
	// 4579 
cs=0x41e;eip=0x000878; 	X(PUSH(ds));	// 7570                  push    ds ;~ 041E:0878
cs=0x41e;eip=0x000879; 	T(ax = seg_offset(seg11a3););	// 7571                  mov     ax, seg seg11a3 ;~ 041E:0879
cs=0x41e;eip=0x00087c; 	T(ds = ax;);	// 7572                  mov     ds, ax ;~ 041E:087C
cs=0x41e;eip=0x00087e; 	X(byte_11cb6 = 1;);	// 7574                  mov     byte_11CB6, 1 ;~ 041E:087E
cs=0x41e;eip=0x000883; 	X(POP(ds));	// 7575                  pop     ds ;~ 041E:0883
cs=0x41e;eip=0x000884; 	J(RETF(0));	// 7577                  retf ;~ 041E:0884
ret_41e_885:
	// 4580 
cs=0x41e;eip=0x000885; 	X(PUSH(ds));	// 7579                  push    ds ;~ 041E:0885
cs=0x41e;eip=0x000886; 	T(ax = seg_offset(seg11a3););	// 7580                  mov     ax, seg seg11a3 ;~ 041E:0886
cs=0x41e;eip=0x000889; 	T(ds = ax;);	// 7581                  mov     ds, ax ;~ 041E:0889
cs=0x41e;eip=0x00088b; 	X(byte_11cb6 = 0;);	// 7583                  mov     byte_11CB6, 0 ;~ 041E:088B
cs=0x41e;eip=0x000890; 	X(POP(ds));	// 7584                  pop     ds ;~ 041E:0890
cs=0x41e;eip=0x000891; 	J(RETF(0));	// 7586                  retf ;~ 041E:0891

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_12fb1: 	goto loc_12fb1;
        case m2c::kloc_12fe4: 	goto loc_12fe4;
        case m2c::kloc_13002: 	goto loc_13002;
        case m2c::kloc_13005: 	goto loc_13005;
        case m2c::kloc_13032: 	goto loc_13032;
        case m2c::kret_41e_7da: 	goto ret_41e_7da;
        case m2c::kret_41e_7f3: 	goto ret_41e_7f3;
        case m2c::kret_41e_810: 	goto ret_41e_810;
        case m2c::kret_41e_82a: 	goto ret_41e_82a;
        case m2c::kret_41e_850: 	goto ret_41e_850;
        case m2c::kret_41e_85d: 	goto ret_41e_85d;
        case m2c::kret_41e_878: 	goto ret_41e_878;
        case m2c::kret_41e_885: 	goto ret_41e_885;
        case m2c::kseg127c_7cc_proc: 	goto seg127c_7cc_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13052(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13052:
    _begin:
#undef var_2
#define var_2 -2
	// 7596 var_2           = word ptr -2 ;~ 041E:0892
#undef arg_0
#define arg_0 4
	// 7597 arg_0           = word ptr  4 ;~ 041E:0892
cs=0x41e;eip=0x000892; 	X(PUSH(bp));	// 7599                  push    bp ;~ 041E:0892
cs=0x41e;eip=0x000893; 	T(bp = sp;);	// 7600                  mov     bp, sp ;~ 041E:0893
cs=0x41e;eip=0x000895; 	T(SUB(sp, 2));	// 7601                  sub     sp, 2 ;~ 041E:0895
cs=0x41e;eip=0x000899; 	X(PUSH(si));	// 7602                  push    si ;~ 041E:0899
cs=0x41e;eip=0x00089a; 	X(PUSH(di));	// 7603                  push    di ;~ 041E:089A
cs=0x41e;eip=0x00089b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 7604                  mov     ax, [bp+arg_0] ;~ 041E:089B
cs=0x41e;eip=0x00089e; 	T(bl = al;);	// 7605                  mov     bl, al ;~ 041E:089E
cs=0x41e;eip=0x0008a0; 	T(CMP(al, 6));	// 7606                  cmp     al, 6 ;~ 041E:08A0
cs=0x41e;eip=0x0008a2; 	J(JLE(loc_13070));	// 7607                  jle     short loc_13070 ;~ 041E:08A2
cs=0x41e;eip=0x0008a4; 	T(bl = 7;);	// 7608                  mov     bl, 7 ;~ 041E:08A4
cs=0x41e;eip=0x0008a6; 	T(CMP(al, 7));	// 7609                  cmp     al, 7 ;~ 041E:08A6
cs=0x41e;eip=0x0008a8; 	J(JZ(loc_13070));	// 7610                  jz      short loc_13070 ;~ 041E:08A8
cs=0x41e;eip=0x0008aa; 	T(CMP(al, 0x0A));	// 7611                  cmp     al, 0Ah ;~ 041E:08AA
cs=0x41e;eip=0x0008ac; 	J(JZ(loc_13070));	// 7612                  jz      short loc_13070 ;~ 041E:08AC
cs=0x41e;eip=0x0008ae; 	T(bl = 8;);	// 7613                  mov     bl, 8 ;~ 041E:08AE
loc_13070:
	// 4581 
cs=0x41e;eip=0x0008b0; 	T(bh = 0;);	// 7617                  mov     bh, 0 ;~ 041E:08B0
cs=0x41e;eip=0x0008b2; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), bx));	// 7618                  mov     [bp+var_2], bx ;~ 041E:08B2
cs=0x41e;eip=0x0008b5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 7619                  mov     ax, [bp+var_2] ;~ 041E:08B5
cs=0x41e;eip=0x0008b8; 	X(POP(di));	// 7620                  pop     di ;~ 041E:08B8
cs=0x41e;eip=0x0008b9; 	X(POP(si));	// 7621                  pop     si ;~ 041E:08B9
cs=0x41e;eip=0x0008ba; 	T(sp = bp;);	// 7622                  mov     sp, bp ;~ 041E:08BA
cs=0x41e;eip=0x0008bc; 	X(POP(bp));	// 7623                  pop     bp ;~ 041E:08BC
cs=0x41e;eip=0x0008bd; 	J(RETN(0));	// 7624                  retn ;~ 041E:08BD

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_13070: 	goto loc_13070;
        case m2c::ksub_13052: 	goto sub_13052;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1307e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1307e:
    _begin:
#undef var_4
#define var_4 -4
	// 7635 var_4           = word ptr -4 ;~ 041E:08BE
#undef var_2
#define var_2 -2
	// 7636 var_2           = word ptr -2 ;~ 041E:08BE
#undef arg_0
#define arg_0 4
	// 7637 arg_0           = word ptr  4 ;~ 041E:08BE
#undef arg_2
#define arg_2 6
	// 7638 arg_2           = word ptr  6 ;~ 041E:08BE
cs=0x41e;eip=0x0008be; 	X(PUSH(bp));	// 7640                  push    bp ;~ 041E:08BE
cs=0x41e;eip=0x0008bf; 	T(bp = sp;);	// 7641                  mov     bp, sp ;~ 041E:08BF
cs=0x41e;eip=0x0008c1; 	T(SUB(sp, 4));	// 7642                  sub     sp, 4 ;~ 041E:08C1
cs=0x41e;eip=0x0008c5; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 6));	// 7643                  cmp     [bp+arg_0], 6 ;~ 041E:08C5
cs=0x41e;eip=0x0008c9; 	J(JA(loc_130a8));	// 7644                  ja      short loc_130A8 ;~ 041E:08C9
cs=0x41e;eip=0x0008cb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 7645                  mov     ax, [bp+arg_0] ;~ 041E:08CB
cs=0x41e;eip=0x0008ce; 	T(SHL(ax, 1));	// 7646                  shl     ax, 1 ;~ 041E:08CE
cs=0x41e;eip=0x0008d0; 	T(bx = 0x2AE;);	// 7647                  mov     bx, 2AEh ;~ 041E:08D0
cs=0x41e;eip=0x0008d3; 	T(ADD(bx, ax));	// 7648                  add     bx, ax ;~ 041E:08D3
cs=0x41e;eip=0x0008d5; 	T(MOV(al, *(raddr(ds,bx+1))));	// 7649                  mov     al, [bx+1] ;~ 041E:08D5
cs=0x41e;eip=0x0008d8; 	T(CBW);	// 7650                  cbw ;~ 041E:08D8
cs=0x41e;eip=0x0008d9; 	T(bx = ax;);	// 7651                  mov     bx, ax ;~ 041E:08D9
cs=0x41e;eip=0x0008db; 	T(MOV(al, *(raddr(ds,bx+0x2C4))));	// 7652                  mov     al, [bx+2C4h] ;~ 041E:08DB
cs=0x41e;eip=0x0008df; 	T(CBW);	// 7653                  cbw ;~ 041E:08DF
cs=0x41e;eip=0x0008e0; 	T(ADD(ax, 0x40));	// 7654                  add     ax, 40h ; '@' ;~ 041E:08E0
cs=0x41e;eip=0x0008e3; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 7655                  mov     [bp+var_2], ax ;~ 041E:08E3
cs=0x41e;eip=0x0008e6; 	J(JMP(loc_130bf));	// 7656                  jmp     short loc_130BF ;~ 041E:08E6
loc_130a8:
	// 4582 
cs=0x41e;eip=0x0008e8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 7660                  mov     bx, [bp+arg_0] ;~ 041E:08E8
cs=0x41e;eip=0x0008eb; 	T(SHL(bx, 1));	// 7661                  shl     bx, 1 ;~ 041E:08EB
cs=0x41e;eip=0x0008ed; 	T(MOV(al, *(raddr(ds,bx+0x2AE))));	// 7662                  mov     al, [bx+2AEh] ;~ 041E:08ED
cs=0x41e;eip=0x0008f1; 	T(CBW);	// 7663                  cbw ;~ 041E:08F1
cs=0x41e;eip=0x0008f2; 	T(bx = ax;);	// 7664                  mov     bx, ax ;~ 041E:08F2
cs=0x41e;eip=0x0008f4; 	T(MOV(al, *(raddr(ds,bx+0x2C4))));	// 7665                  mov     al, [bx+2C4h] ;~ 041E:08F4
cs=0x41e;eip=0x0008f8; 	T(CBW);	// 7666                  cbw ;~ 041E:08F8
cs=0x41e;eip=0x0008f9; 	T(ADD(ax, 0x40));	// 7667                  add     ax, 40h ; '@' ;~ 041E:08F9
cs=0x41e;eip=0x0008fc; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 7668                  mov     [bp+var_2], ax ;~ 041E:08FC
loc_130bf:
	// 4583 
cs=0x41e;eip=0x0008ff; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 7671                  mov     bx, [bp+var_2] ;~ 041E:08FF
cs=0x41e;eip=0x000902; 	T(MOV(al, *(raddr(ds,bx+0x0C32))));	// 7672                  mov     al, [bx+0C32h] ;~ 041E:0902
cs=0x41e;eip=0x000906; 	T(AND(ax, 0x0C0));	// 7673                  and     ax, 0C0h ;~ 041E:0906
cs=0x41e;eip=0x000909; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 7674                  mov     [bp+var_4], ax ;~ 041E:0909
cs=0x41e;eip=0x00090c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 7675                  mov     ax, [bp+arg_2] ;~ 041E:090C
cs=0x41e;eip=0x00090f; 	T(AND(ax, 0x3F));	// 7676                  and     ax, 3Fh ;~ 041E:090F
cs=0x41e;eip=0x000912; 	T(cx = 0x3F;);	// 7677                  mov     cx, 3Fh ; '?' ;~ 041E:0912
cs=0x41e;eip=0x000915; 	T(SUB(cx, ax));	// 7678                  sub     cx, ax ;~ 041E:0915
cs=0x41e;eip=0x000917; 	X(OR(*(dw*)(raddr(ss,bp+var_4)), cx));	// 7679                  or      [bp+var_4], cx ;~ 041E:0917
cs=0x41e;eip=0x00091a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 7680                  push    [bp+var_4] ;~ 041E:091A
cs=0x41e;eip=0x00091d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 7681                  push    [bp+var_2] ;~ 041E:091D
cs=0x41e;eip=0x000920; 	J(CALL(sub_12a31,0));	// 7682                  call    sub_12A31 ;~ 041E:0920
cs=0x41e;eip=0x000923; 	T(ADD(sp, 4));	// 7683                  add     sp, 4 ;~ 041E:0923
cs=0x41e;eip=0x000926; 	T(sp = bp;);	// 7684                  mov     sp, bp ;~ 041E:0926
cs=0x41e;eip=0x000928; 	X(POP(bp));	// 7685                  pop     bp ;~ 041E:0928
cs=0x41e;eip=0x000929; 	J(RETN(0));	// 7686                  retn ;~ 041E:0929

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_130a8: 	goto loc_130a8;
        case m2c::kloc_130bf: 	goto loc_130bf;
        case m2c::ksub_1307e: 	goto sub_1307e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_130ea(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_130ea:
    _begin:
#undef var_4
#define var_4 -4
	// 7696 var_4           = word ptr -4 ;~ 041E:092A
#undef var_2
#define var_2 -2
	// 7697 var_2           = word ptr -2 ;~ 041E:092A
#undef arg_0
#define arg_0 4
	// 7698 arg_0           = word ptr  4 ;~ 041E:092A
#undef arg_2
#define arg_2 6
	// 7699 arg_2           = word ptr  6 ;~ 041E:092A
cs=0x41e;eip=0x00092a; 	X(PUSH(bp));	// 7701                  push    bp ;~ 041E:092A
cs=0x41e;eip=0x00092b; 	T(bp = sp;);	// 7702                  mov     bp, sp ;~ 041E:092B
cs=0x41e;eip=0x00092d; 	T(SUB(sp, 4));	// 7703                  sub     sp, 4 ;~ 041E:092D
cs=0x41e;eip=0x000931; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 7704                  mov     bx, [bp+arg_0] ;~ 041E:0931
cs=0x41e;eip=0x000934; 	T(SHL(bx, 1));	// 7705                  shl     bx, 1 ;~ 041E:0934
cs=0x41e;eip=0x000936; 	T(MOV(al, *(raddr(ds,bx+0x2AE))));	// 7706                  mov     al, [bx+2AEh] ;~ 041E:0936
cs=0x41e;eip=0x00093a; 	T(CBW);	// 7707                  cbw ;~ 041E:093A
cs=0x41e;eip=0x00093b; 	T(bx = ax;);	// 7708                  mov     bx, ax ;~ 041E:093B
cs=0x41e;eip=0x00093d; 	T(MOV(al, *(raddr(ds,bx+0x2C4))));	// 7709                  mov     al, [bx+2C4h] ;~ 041E:093D
cs=0x41e;eip=0x000941; 	T(CBW);	// 7710                  cbw ;~ 041E:0941
cs=0x41e;eip=0x000942; 	T(ADD(ax, 0x40));	// 7711                  add     ax, 40h ; '@' ;~ 041E:0942
cs=0x41e;eip=0x000945; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 7712                  mov     [bp+var_2], ax ;~ 041E:0945
cs=0x41e;eip=0x000948; 	T(bx = ax;);	// 7713                  mov     bx, ax ;~ 041E:0948
cs=0x41e;eip=0x00094a; 	T(MOV(al, *(raddr(ds,bx+0x0C32))));	// 7714                  mov     al, [bx+0C32h] ;~ 041E:094A
cs=0x41e;eip=0x00094e; 	T(AND(ax, 0x0C0));	// 7715                  and     ax, 0C0h ;~ 041E:094E
cs=0x41e;eip=0x000951; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 7716                  mov     [bp+var_4], ax ;~ 041E:0951
cs=0x41e;eip=0x000954; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 7717                  mov     ax, [bp+arg_2] ;~ 041E:0954
cs=0x41e;eip=0x000957; 	T(AND(ax, 0x3F));	// 7718                  and     ax, 3Fh ;~ 041E:0957
cs=0x41e;eip=0x00095a; 	T(cx = 0x3F;);	// 7719                  mov     cx, 3Fh ; '?' ;~ 041E:095A
cs=0x41e;eip=0x00095d; 	T(SUB(cx, ax));	// 7720                  sub     cx, ax ;~ 041E:095D
cs=0x41e;eip=0x00095f; 	X(OR(*(dw*)(raddr(ss,bp+var_4)), cx));	// 7721                  or      [bp+var_4], cx ;~ 041E:095F
cs=0x41e;eip=0x000962; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 7722                  push    [bp+var_4] ;~ 041E:0962
cs=0x41e;eip=0x000965; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 7723                  push    [bp+var_2] ;~ 041E:0965
cs=0x41e;eip=0x000968; 	J(CALL(sub_12a31,0));	// 7724                  call    sub_12A31 ;~ 041E:0968
cs=0x41e;eip=0x00096b; 	T(ADD(sp, 4));	// 7725                  add     sp, 4 ;~ 041E:096B
cs=0x41e;eip=0x00096e; 	T(sp = bp;);	// 7726                  mov     sp, bp ;~ 041E:096E
cs=0x41e;eip=0x000970; 	X(POP(bp));	// 7727                  pop     bp ;~ 041E:0970
cs=0x41e;eip=0x000971; 	J(RETN(0));	// 7728                  retn ;~ 041E:0971

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_130ea: 	goto sub_130ea;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13132(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13132:
    _begin:
#undef var_c
#define var_c -0x0C
	// 7738 var_C           = word ptr -0Ch ;~ 041E:0972
#undef var_a
#define var_a -0x0A
	// 7739 var_A           = byte ptr -0Ah ;~ 041E:0972
#undef var_8
#define var_8 -8
	// 7740 var_8           = byte ptr -8 ;~ 041E:0972
#undef var_6
#define var_6 -6
	// 7741 var_6           = byte ptr -6 ;~ 041E:0972
#undef var_4
#define var_4 -4
	// 7742 var_4           = word ptr -4 ;~ 041E:0972
#undef var_2
#define var_2 -2
	// 7743 var_2           = word ptr -2 ;~ 041E:0972
#undef arg_0
#define arg_0 4
	// 7744 arg_0           = word ptr  4 ;~ 041E:0972
#undef arg_2
#define arg_2 6
	// 7745 arg_2           = word ptr  6 ;~ 041E:0972
cs=0x41e;eip=0x000972; 	X(PUSH(bp));	// 7747                  push    bp ;~ 041E:0972
cs=0x41e;eip=0x000973; 	T(bp = sp;);	// 7748                  mov     bp, sp ;~ 041E:0973
cs=0x41e;eip=0x000975; 	T(SUB(sp, 0x0C));	// 7749                  sub     sp, 0Ch ;~ 041E:0975
cs=0x41e;eip=0x000979; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 7750                  push    [bp+arg_0] ;~ 041E:0979
cs=0x41e;eip=0x00097c; 	J(CALL(sub_13052,0));	// 7751                  call    sub_13052 ;~ 041E:097C
cs=0x41e;eip=0x00097f; 	T(ADD(sp, 2));	// 7752                  add     sp, 2 ;~ 041E:097F
cs=0x41e;eip=0x000982; 	T(ADD(ax, 0x0A0));	// 7753                  add     ax, 0A0h ;~ 041E:0982
cs=0x41e;eip=0x000985; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 7754                  mov     [bp+var_2], ax ;~ 041E:0985
cs=0x41e;eip=0x000988; 	T(cx = 0x0C;);	// 7755                  mov     cx, 0Ch ;~ 041E:0988
cs=0x41e;eip=0x00098b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 7756                  mov     ax, [bp+arg_2] ;~ 041E:098B
cs=0x41e;eip=0x00098e; 	T(SUB(dx, dx));	// 7757                  sub     dx, dx ;~ 041E:098E
cs=0x41e;eip=0x000990; 	T(DIV2(cx));	// 7758                  div     cx ;~ 041E:0990
cs=0x41e;eip=0x000992; 	X(MOV(*(raddr(ss,bp+var_8)), dl));	// 7759                  mov     [bp+var_8], dl ;~ 041E:0992
cs=0x41e;eip=0x000995; 	T(cx = 0x0C;);	// 7760                  mov     cx, 0Ch ;~ 041E:0995
cs=0x41e;eip=0x000998; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 7761                  mov     ax, [bp+arg_2] ;~ 041E:0998
cs=0x41e;eip=0x00099b; 	T(SUB(dx, dx));	// 7762                  sub     dx, dx ;~ 041E:099B
cs=0x41e;eip=0x00099d; 	T(DIV2(cx));	// 7763                  div     cx ;~ 041E:099D
cs=0x41e;eip=0x00099f; 	X(MOV(*(raddr(ss,bp+var_a)), al));	// 7764                  mov     [bp+var_A], al ;~ 041E:099F
cs=0x41e;eip=0x0009a2; 	T(MOV(al, *(raddr(ss,bp+var_8))));	// 7765                  mov     al, [bp+var_8] ;~ 041E:09A2
cs=0x41e;eip=0x0009a5; 	T(AND(ax, 0x0FF));	// 7766                  and     ax, 0FFh ;~ 041E:09A5
cs=0x41e;eip=0x0009a8; 	T(bx = ax;);	// 7767                  mov     bx, ax ;~ 041E:09A8
cs=0x41e;eip=0x0009aa; 	T(SHL(bx, 1));	// 7768                  shl     bx, 1 ;~ 041E:09AA
cs=0x41e;eip=0x0009ac; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x292))));	// 7769                  mov     ax, [bx+292h] ;~ 041E:09AC
cs=0x41e;eip=0x0009b0; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 7770                  mov     [bp+var_4], ax ;~ 041E:09B0
cs=0x41e;eip=0x0009b3; 	T(AND(ax, 0x0FF));	// 7771                  and     ax, 0FFh ;~ 041E:09B3
cs=0x41e;eip=0x0009b6; 	X(PUSH(ax));	// 7772                  push    ax ;~ 041E:09B6
cs=0x41e;eip=0x0009b7; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 7773                  push    [bp+var_2] ;~ 041E:09B7
cs=0x41e;eip=0x0009ba; 	J(CALL(sub_12a31,0));	// 7774                  call    sub_12A31 ;~ 041E:09BA
cs=0x41e;eip=0x0009bd; 	T(ADD(sp, 4));	// 7775                  add     sp, 4 ;~ 041E:09BD
cs=0x41e;eip=0x0009c0; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), 0x10));	// 7776                  add     [bp+var_2], 10h ;~ 041E:09C0
cs=0x41e;eip=0x0009c4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 7777                  mov     bx, [bp+var_2] ;~ 041E:09C4
cs=0x41e;eip=0x0009c7; 	T(MOV(al, *(raddr(ds,bx+0x0C32))));	// 7778                  mov     al, [bx+0C32h] ;~ 041E:09C7
cs=0x41e;eip=0x0009cb; 	T(AND(ax, 0x20));	// 7779                  and     ax, 20h ;~ 041E:09CB
cs=0x41e;eip=0x0009ce; 	X(MOV(*(raddr(ss,bp+var_6)), al));	// 7780                  mov     [bp+var_6], al ;~ 041E:09CE
cs=0x41e;eip=0x0009d1; 	T(cx = 8;);	// 7781                  mov     cx, 8 ;~ 041E:09D1
cs=0x41e;eip=0x0009d4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 7782                  mov     ax, [bp+var_4] ;~ 041E:09D4
cs=0x41e;eip=0x0009d7; 	T(SHR(ax, cl));	// 7783                  shr     ax, cl ;~ 041E:09D7
cs=0x41e;eip=0x0009d9; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 7784                  mov     [bp+var_C], ax ;~ 041E:09D9
cs=0x41e;eip=0x0009dc; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 7785                  mov     al, [bp+var_A] ;~ 041E:09DC
cs=0x41e;eip=0x0009df; 	T(AND(ax, 0x0FF));	// 7786                  and     ax, 0FFh ;~ 041E:09DF
cs=0x41e;eip=0x0009e2; 	T(SHL(ax, 1));	// 7787                  shl     ax, 1 ;~ 041E:09E2
cs=0x41e;eip=0x0009e4; 	T(SHL(ax, 1));	// 7788                  shl     ax, 1 ;~ 041E:09E4
cs=0x41e;eip=0x0009e6; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_c))));	// 7789                  mov     cx, [bp+var_C] ;~ 041E:09E6
cs=0x41e;eip=0x0009e9; 	T(OR(cx, ax));	// 7790                  or      cx, ax ;~ 041E:09E9
cs=0x41e;eip=0x0009eb; 	X(OR(*(raddr(ss,bp+var_6)), cl));	// 7791                  or      [bp+var_6], cl ;~ 041E:09EB
cs=0x41e;eip=0x0009ee; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 7792                  mov     al, [bp+var_6] ;~ 041E:09EE
cs=0x41e;eip=0x0009f1; 	T(AND(ax, 0x0FF));	// 7793                  and     ax, 0FFh ;~ 041E:09F1
cs=0x41e;eip=0x0009f4; 	X(PUSH(ax));	// 7794                  push    ax ;~ 041E:09F4
cs=0x41e;eip=0x0009f5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 7795                  push    [bp+var_2] ;~ 041E:09F5
cs=0x41e;eip=0x0009f8; 	J(CALL(sub_12a31,0));	// 7796                  call    sub_12A31 ;~ 041E:09F8
cs=0x41e;eip=0x0009fb; 	T(ADD(sp, 4));	// 7797                  add     sp, 4 ;~ 041E:09FB
cs=0x41e;eip=0x0009fe; 	T(sp = bp;);	// 7798                  mov     sp, bp ;~ 041E:09FE
cs=0x41e;eip=0x000a00; 	X(POP(bp));	// 7799                  pop     bp ;~ 041E:0A00
cs=0x41e;eip=0x000a01; 	J(RETN(0));	// 7800                  retn ;~ 041E:0A01

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_13132: 	goto sub_13132;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_131c2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_131c2:
    _begin:
#undef var_4
#define var_4 -4
	// 7810 var_4           = byte ptr -4 ;~ 041E:0A02
#undef var_2
#define var_2 -2
	// 7811 var_2           = word ptr -2 ;~ 041E:0A02
#undef arg_0
#define arg_0 4
	// 7812 arg_0           = byte ptr  4 ;~ 041E:0A02
#undef arg_2
#define arg_2 6
	// 7813 arg_2           = word ptr  6 ;~ 041E:0A02
cs=0x41e;eip=0x000a02; 	X(PUSH(bp));	// 7815                  push    bp ;~ 041E:0A02
cs=0x41e;eip=0x000a03; 	T(bp = sp;);	// 7816                  mov     bp, sp ;~ 041E:0A03
cs=0x41e;eip=0x000a05; 	T(SUB(sp, 4));	// 7817                  sub     sp, 4 ;~ 041E:0A05
cs=0x41e;eip=0x000a09; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 7818                  mov     al, [bp+arg_0] ;~ 041E:0A09
cs=0x41e;eip=0x000a0c; 	T(AND(ax, 0x0FF));	// 7819                  and     ax, 0FFh ;~ 041E:0A0C
cs=0x41e;eip=0x000a0f; 	X(PUSH(ax));	// 7820                  push    ax ;~ 041E:0A0F
cs=0x41e;eip=0x000a10; 	J(CALL(sub_13052,0));	// 7821                  call    sub_13052 ;~ 041E:0A10
cs=0x41e;eip=0x000a13; 	T(ADD(sp, 2));	// 7822                  add     sp, 2 ;~ 041E:0A13
cs=0x41e;eip=0x000a16; 	T(ADD(ax, 0x0A0));	// 7823                  add     ax, 0A0h ;~ 041E:0A16
cs=0x41e;eip=0x000a19; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 7824                  mov     [bp+var_2], ax ;~ 041E:0A19
cs=0x41e;eip=0x000a1c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 7825                  mov     ax, [bp+arg_2] ;~ 041E:0A1C
cs=0x41e;eip=0x000a1f; 	T(AND(ax, 0x0FF));	// 7826                  and     ax, 0FFh ;~ 041E:0A1F
cs=0x41e;eip=0x000a22; 	X(PUSH(ax));	// 7827                  push    ax ;~ 041E:0A22
cs=0x41e;eip=0x000a23; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 7828                  push    [bp+var_2] ;~ 041E:0A23
cs=0x41e;eip=0x000a26; 	J(CALL(sub_12a31,0));	// 7829                  call    sub_12A31 ;~ 041E:0A26
cs=0x41e;eip=0x000a29; 	T(ADD(sp, 4));	// 7830                  add     sp, 4 ;~ 041E:0A29
cs=0x41e;eip=0x000a2c; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), 0x10));	// 7831                  add     [bp+var_2], 10h ;~ 041E:0A2C
cs=0x41e;eip=0x000a30; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 7832                  mov     bx, [bp+var_2] ;~ 041E:0A30
cs=0x41e;eip=0x000a33; 	T(MOV(al, *(raddr(ds,bx+0x0C32))));	// 7833                  mov     al, [bx+0C32h] ;~ 041E:0A33
cs=0x41e;eip=0x000a37; 	T(AND(ax, 0x20));	// 7834                  and     ax, 20h ;~ 041E:0A37
cs=0x41e;eip=0x000a3a; 	X(MOV(*(raddr(ss,bp+var_4)), al));	// 7835                  mov     [bp+var_4], al ;~ 041E:0A3A
cs=0x41e;eip=0x000a3d; 	T(cx = 8;);	// 7836                  mov     cx, 8 ;~ 041E:0A3D
cs=0x41e;eip=0x000a40; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 7837                  mov     ax, [bp+arg_2] ;~ 041E:0A40
cs=0x41e;eip=0x000a43; 	T(SHR(ax, cl));	// 7838                  shr     ax, cl ;~ 041E:0A43
cs=0x41e;eip=0x000a45; 	X(OR(*(raddr(ss,bp+var_4)), al));	// 7839                  or      [bp+var_4], al ;~ 041E:0A45
cs=0x41e;eip=0x000a48; 	T(MOV(al, *(raddr(ss,bp+var_4))));	// 7840                  mov     al, [bp+var_4] ;~ 041E:0A48
cs=0x41e;eip=0x000a4b; 	T(AND(ax, 0x0FF));	// 7841                  and     ax, 0FFh ;~ 041E:0A4B
cs=0x41e;eip=0x000a4e; 	X(PUSH(ax));	// 7842                  push    ax ;~ 041E:0A4E
cs=0x41e;eip=0x000a4f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 7843                  push    [bp+var_2] ;~ 041E:0A4F
cs=0x41e;eip=0x000a52; 	J(CALL(sub_12a31,0));	// 7844                  call    sub_12A31 ;~ 041E:0A52
cs=0x41e;eip=0x000a55; 	T(ADD(sp, 4));	// 7845                  add     sp, 4 ;~ 041E:0A55
cs=0x41e;eip=0x000a58; 	T(sp = bp;);	// 7846                  mov     sp, bp ;~ 041E:0A58
cs=0x41e;eip=0x000a5a; 	X(POP(bp));	// 7847                  pop     bp ;~ 041E:0A5A
cs=0x41e;eip=0x000a5b; 	J(RETN(0));	// 7848                  retn ;~ 041E:0A5B

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_131c2: 	goto sub_131c2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1321c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1321c:
    _begin:
#undef var_a
#define var_a -0x0A
	// 7858 var_A           = word ptr -0Ah ;~ 041E:0A5C
#undef var_8
#define var_8 -8
	// 7859 var_8           = byte ptr -8 ;~ 041E:0A5C
#undef var_6
#define var_6 -6
	// 7860 var_6           = word ptr -6 ;~ 041E:0A5C
#undef var_4
#define var_4 -4
	// 7861 var_4           = word ptr -4 ;~ 041E:0A5C
#undef var_2
#define var_2 -2
	// 7862 var_2           = word ptr -2 ;~ 041E:0A5C
#undef arg_0
#define arg_0 4
	// 7863 arg_0           = byte ptr  4 ;~ 041E:0A5C
#undef arg_2
#define arg_2 6
	// 7864 arg_2           = byte ptr  6 ;~ 041E:0A5C
cs=0x41e;eip=0x000a5c; 	X(PUSH(bp));	// 7866                  push    bp ;~ 041E:0A5C
cs=0x41e;eip=0x000a5d; 	T(bp = sp;);	// 7867                  mov     bp, sp ;~ 041E:0A5D
cs=0x41e;eip=0x000a5f; 	T(SUB(sp, 0x0A));	// 7868                  sub     sp, 0Ah ;~ 041E:0A5F
cs=0x41e;eip=0x000a63; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 7869                  mov     al, [bp+arg_0] ;~ 041E:0A63
cs=0x41e;eip=0x000a66; 	T(AND(ax, 0x0FF));	// 7870                  and     ax, 0FFh ;~ 041E:0A66
cs=0x41e;eip=0x000a69; 	X(PUSH(ax));	// 7871                  push    ax ;~ 041E:0A69
cs=0x41e;eip=0x000a6a; 	J(CALL(sub_13052,0));	// 7872                  call    sub_13052 ;~ 041E:0A6A
cs=0x41e;eip=0x000a6d; 	T(ADD(sp, 2));	// 7873                  add     sp, 2 ;~ 041E:0A6D
cs=0x41e;eip=0x000a70; 	T(ADD(ax, 0x0A0));	// 7874                  add     ax, 0A0h ;~ 041E:0A70
cs=0x41e;eip=0x000a73; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 7875                  mov     [bp+var_2], ax ;~ 041E:0A73
cs=0x41e;eip=0x000a76; 	T(ADD(ax, 0x10));	// 7876                  add     ax, 10h ;~ 041E:0A76
cs=0x41e;eip=0x000a79; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 7877                  mov     [bp+var_4], ax ;~ 041E:0A79
cs=0x41e;eip=0x000a7c; 	T(bx = ax;);	// 7878                  mov     bx, ax ;~ 041E:0A7C
cs=0x41e;eip=0x000a7e; 	T(MOV(al, *(raddr(ds,bx+0x0C32))));	// 7879                  mov     al, [bx+0C32h] ;~ 041E:0A7E
cs=0x41e;eip=0x000a82; 	T(AND(ax, 0x1F));	// 7880                  and     ax, 1Fh ;~ 041E:0A82
cs=0x41e;eip=0x000a85; 	T(cx = 8;);	// 7881                  mov     cx, 8 ;~ 041E:0A85
cs=0x41e;eip=0x000a88; 	T(SHL(ax, cl));	// 7882                  shl     ax, cl ;~ 041E:0A88
cs=0x41e;eip=0x000a8a; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 7883                  mov     [bp+var_6], ax ;~ 041E:0A8A
cs=0x41e;eip=0x000a8d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 7884                  mov     bx, [bp+var_2] ;~ 041E:0A8D
cs=0x41e;eip=0x000a90; 	T(MOV(al, *(raddr(ds,bx+0x0C32))));	// 7885                  mov     al, [bx+0C32h] ;~ 041E:0A90
cs=0x41e;eip=0x000a94; 	T(AND(ax, 0x0FF));	// 7886                  and     ax, 0FFh ;~ 041E:0A94
cs=0x41e;eip=0x000a97; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 7887                  mov     [bp+var_A], ax ;~ 041E:0A97
cs=0x41e;eip=0x000a9a; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 7888                  mov     al, [bp+arg_2] ;~ 041E:0A9A
cs=0x41e;eip=0x000a9d; 	T(CBW);	// 7889                  cbw ;~ 041E:0A9D
cs=0x41e;eip=0x000a9e; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_a))));	// 7890                  mov     cx, [bp+var_A] ;~ 041E:0A9E
cs=0x41e;eip=0x000aa1; 	T(ADD(cx, ax));	// 7891                  add     cx, ax ;~ 041E:0AA1
cs=0x41e;eip=0x000aa3; 	X(ADD(*(dw*)(raddr(ss,bp+var_6)), cx));	// 7892                  add     [bp+var_6], cx ;~ 041E:0AA3
cs=0x41e;eip=0x000aa6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 7893                  mov     ax, [bp+var_6] ;~ 041E:0AA6
cs=0x41e;eip=0x000aa9; 	T(AND(ax, 0x0FF));	// 7894                  and     ax, 0FFh ;~ 041E:0AA9
cs=0x41e;eip=0x000aac; 	X(PUSH(ax));	// 7895                  push    ax ;~ 041E:0AAC
cs=0x41e;eip=0x000aad; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 7896                  push    [bp+var_2] ;~ 041E:0AAD
cs=0x41e;eip=0x000ab0; 	J(CALL(sub_12a31,0));	// 7897                  call    sub_12A31 ;~ 041E:0AB0
cs=0x41e;eip=0x000ab3; 	T(ADD(sp, 4));	// 7898                  add     sp, 4 ;~ 041E:0AB3
cs=0x41e;eip=0x000ab6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 7899                  mov     bx, [bp+var_4] ;~ 041E:0AB6
cs=0x41e;eip=0x000ab9; 	T(MOV(al, *(raddr(ds,bx+0x0C32))));	// 7900                  mov     al, [bx+0C32h] ;~ 041E:0AB9
cs=0x41e;eip=0x000abd; 	T(AND(ax, 0x20));	// 7901                  and     ax, 20h ;~ 041E:0ABD
cs=0x41e;eip=0x000ac0; 	X(MOV(*(raddr(ss,bp+var_8)), al));	// 7902                  mov     [bp+var_8], al ;~ 041E:0AC0
cs=0x41e;eip=0x000ac3; 	T(cx = 8;);	// 7903                  mov     cx, 8 ;~ 041E:0AC3
cs=0x41e;eip=0x000ac6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 7904                  mov     ax, [bp+var_6] ;~ 041E:0AC6
cs=0x41e;eip=0x000ac9; 	T(SHR(ax, cl));	// 7905                  shr     ax, cl ;~ 041E:0AC9
cs=0x41e;eip=0x000acb; 	X(OR(*(raddr(ss,bp+var_8)), al));	// 7906                  or      [bp+var_8], al ;~ 041E:0ACB
cs=0x41e;eip=0x000ace; 	T(MOV(al, *(raddr(ss,bp+var_8))));	// 7907                  mov     al, [bp+var_8] ;~ 041E:0ACE
cs=0x41e;eip=0x000ad1; 	T(AND(ax, 0x0FF));	// 7908                  and     ax, 0FFh ;~ 041E:0AD1
cs=0x41e;eip=0x000ad4; 	X(PUSH(ax));	// 7909                  push    ax ;~ 041E:0AD4
cs=0x41e;eip=0x000ad5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 7910                  push    [bp+var_4] ;~ 041E:0AD5
cs=0x41e;eip=0x000ad8; 	J(CALL(sub_12a31,0));	// 7911                  call    sub_12A31 ;~ 041E:0AD8
cs=0x41e;eip=0x000adb; 	T(ADD(sp, 4));	// 7912                  add     sp, 4 ;~ 041E:0ADB
cs=0x41e;eip=0x000ade; 	T(sp = bp;);	// 7913                  mov     sp, bp ;~ 041E:0ADE
cs=0x41e;eip=0x000ae0; 	X(POP(bp));	// 7914                  pop     bp ;~ 041E:0AE0
cs=0x41e;eip=0x000ae1; 	J(RETN(0));	// 7915                  retn ;~ 041E:0AE1

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_1321c: 	goto sub_1321c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_132a2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_132a2:
    _begin:
#undef var_8
#define var_8 -8
	// 7925 var_8           = word ptr -8 ;~ 041E:0AE2
#undef var_6
#define var_6 -6
	// 7926 var_6           = word ptr -6 ;~ 041E:0AE2
#undef var_4
#define var_4 -4
	// 7927 var_4           = word ptr -4 ;~ 041E:0AE2
#undef var_2
#define var_2 -2
	// 7928 var_2           = word ptr -2 ;~ 041E:0AE2
#undef arg_0
#define arg_0 4
	// 7929 arg_0           = word ptr  4 ;~ 041E:0AE2
#undef arg_2
#define arg_2 6
	// 7930 arg_2           = byte ptr  6 ;~ 041E:0AE2
cs=0x41e;eip=0x000ae2; 	X(PUSH(bp));	// 7932                  push    bp ;~ 041E:0AE2
cs=0x41e;eip=0x000ae3; 	T(bp = sp;);	// 7933                  mov     bp, sp ;~ 041E:0AE3
cs=0x41e;eip=0x000ae5; 	T(SUB(sp, 8));	// 7934                  sub     sp, 8 ;~ 041E:0AE5
cs=0x41e;eip=0x000ae9; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 6));	// 7935                  cmp     [bp+arg_0], 6 ;~ 041E:0AE9
cs=0x41e;eip=0x000aed; 	J(JA(loc_132cc));	// 7936                  ja      short loc_132CC ;~ 041E:0AED
cs=0x41e;eip=0x000aef; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 7937                  mov     ax, [bp+arg_0] ;~ 041E:0AEF
cs=0x41e;eip=0x000af2; 	T(SHL(ax, 1));	// 7938                  shl     ax, 1 ;~ 041E:0AF2
cs=0x41e;eip=0x000af4; 	T(bx = 0x2AE;);	// 7939                  mov     bx, 2AEh ;~ 041E:0AF4
cs=0x41e;eip=0x000af7; 	T(ADD(bx, ax));	// 7940                  add     bx, ax ;~ 041E:0AF7
cs=0x41e;eip=0x000af9; 	T(MOV(al, *(raddr(ds,bx+1))));	// 7941                  mov     al, [bx+1] ;~ 041E:0AF9
cs=0x41e;eip=0x000afc; 	T(CBW);	// 7942                  cbw ;~ 041E:0AFC
cs=0x41e;eip=0x000afd; 	T(bx = ax;);	// 7943                  mov     bx, ax ;~ 041E:0AFD
cs=0x41e;eip=0x000aff; 	T(MOV(al, *(raddr(ds,bx+0x2C4))));	// 7944                  mov     al, [bx+2C4h] ;~ 041E:0AFF
cs=0x41e;eip=0x000b03; 	T(CBW);	// 7945                  cbw ;~ 041E:0B03
cs=0x41e;eip=0x000b04; 	T(ADD(ax, 0x40));	// 7946                  add     ax, 40h ; '@' ;~ 041E:0B04
cs=0x41e;eip=0x000b07; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 7947                  mov     [bp+var_2], ax ;~ 041E:0B07
cs=0x41e;eip=0x000b0a; 	J(JMP(loc_132e3));	// 7948                  jmp     short loc_132E3 ;~ 041E:0B0A
loc_132cc:
	// 4584 
cs=0x41e;eip=0x000b0c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 7952                  mov     bx, [bp+arg_0] ;~ 041E:0B0C
cs=0x41e;eip=0x000b0f; 	T(SHL(bx, 1));	// 7953                  shl     bx, 1 ;~ 041E:0B0F
cs=0x41e;eip=0x000b11; 	T(MOV(al, *(raddr(ds,bx+0x2AE))));	// 7954                  mov     al, [bx+2AEh] ;~ 041E:0B11
cs=0x41e;eip=0x000b15; 	T(CBW);	// 7955                  cbw ;~ 041E:0B15
cs=0x41e;eip=0x000b16; 	T(bx = ax;);	// 7956                  mov     bx, ax ;~ 041E:0B16
cs=0x41e;eip=0x000b18; 	T(MOV(al, *(raddr(ds,bx+0x2C4))));	// 7957                  mov     al, [bx+2C4h] ;~ 041E:0B18
cs=0x41e;eip=0x000b1c; 	T(CBW);	// 7958                  cbw ;~ 041E:0B1C
cs=0x41e;eip=0x000b1d; 	T(ADD(ax, 0x40));	// 7959                  add     ax, 40h ; '@' ;~ 041E:0B1D
cs=0x41e;eip=0x000b20; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 7960                  mov     [bp+var_2], ax ;~ 041E:0B20
loc_132e3:
	// 4585 
cs=0x41e;eip=0x000b23; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 7963                  mov     bx, [bp+var_2] ;~ 041E:0B23
cs=0x41e;eip=0x000b26; 	T(MOV(al, *(raddr(ds,bx+0x0C32))));	// 7964                  mov     al, [bx+0C32h] ;~ 041E:0B26
cs=0x41e;eip=0x000b2a; 	T(AND(ax, 0x0FF));	// 7965                  and     ax, 0FFh ;~ 041E:0B2A
cs=0x41e;eip=0x000b2d; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 7966                  mov     [bp+var_6], ax ;~ 041E:0B2D
cs=0x41e;eip=0x000b30; 	T(AND(ax, 0x3F));	// 7967                  and     ax, 3Fh ;~ 041E:0B30
cs=0x41e;eip=0x000b33; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 7968                  mov     [bp+var_8], ax ;~ 041E:0B33
cs=0x41e;eip=0x000b36; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 7969                  mov     al, [bp+arg_2] ;~ 041E:0B36
cs=0x41e;eip=0x000b39; 	T(CBW);	// 7970                  cbw ;~ 041E:0B39
cs=0x41e;eip=0x000b3a; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_8))));	// 7971                  mov     cx, [bp+var_8] ;~ 041E:0B3A
cs=0x41e;eip=0x000b3d; 	T(SUB(cx, ax));	// 7972                  sub     cx, ax ;~ 041E:0B3D
cs=0x41e;eip=0x000b3f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), cx));	// 7973                  mov     [bp+var_4], cx ;~ 041E:0B3F
cs=0x41e;eip=0x000b42; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 7974                  mov     ax, [bp+var_6] ;~ 041E:0B42
cs=0x41e;eip=0x000b45; 	T(AND(ax, 0x0FFC0));	// 7975                  and     ax, 0FFC0h ;~ 041E:0B45
cs=0x41e;eip=0x000b48; 	X(OR(*(dw*)(raddr(ss,bp+var_4)), ax));	// 7976                  or      [bp+var_4], ax ;~ 041E:0B48
cs=0x41e;eip=0x000b4b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 7977                  push    [bp+var_4] ;~ 041E:0B4B
cs=0x41e;eip=0x000b4e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 7978                  push    [bp+var_2] ;~ 041E:0B4E
cs=0x41e;eip=0x000b51; 	J(CALL(sub_12a31,0));	// 7979                  call    sub_12A31 ;~ 041E:0B51
cs=0x41e;eip=0x000b54; 	T(ADD(sp, 4));	// 7980                  add     sp, 4 ;~ 041E:0B54
cs=0x41e;eip=0x000b57; 	T(sp = bp;);	// 7981                  mov     sp, bp ;~ 041E:0B57
cs=0x41e;eip=0x000b59; 	X(POP(bp));	// 7982                  pop     bp ;~ 041E:0B59
cs=0x41e;eip=0x000b5a; 	J(RETN(0));	// 7983                  retn ;~ 041E:0B5A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_132cc: 	goto loc_132cc;
        case m2c::kloc_132e3: 	goto loc_132e3;
        case m2c::ksub_132a2: 	goto sub_132a2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1331c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1331c:
    _begin:
#undef var_6
#define var_6 -6
	// 7996 var_6           = word ptr -6 ;~ 041E:0B5C
#undef var_4
#define var_4 -4
	// 7997 var_4           = word ptr -4 ;~ 041E:0B5C
#undef var_2
#define var_2 -2
	// 7998 var_2           = byte ptr -2 ;~ 041E:0B5C
#undef arg_0
#define arg_0 4
	// 7999 arg_0           = byte ptr  4 ;~ 041E:0B5C
cs=0x41e;eip=0x000b5c; 	X(PUSH(bp));	// 8001                  push    bp ;~ 041E:0B5C
cs=0x41e;eip=0x000b5d; 	T(bp = sp;);	// 8002                  mov     bp, sp ;~ 041E:0B5D
cs=0x41e;eip=0x000b5f; 	T(SUB(sp, 6));	// 8003                  sub     sp, 6 ;~ 041E:0B5F
cs=0x41e;eip=0x000b63; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8004                  mov     al, [bp+arg_0] ;~ 041E:0B63
cs=0x41e;eip=0x000b66; 	T(AND(ax, 0x0FF));	// 8005                  and     ax, 0FFh ;~ 041E:0B66
cs=0x41e;eip=0x000b69; 	T(CMP(ax, 6));	// 8006                  cmp     ax, 6 ;~ 041E:0B69
cs=0x41e;eip=0x000b6c; 	J(JGE(loc_13360));	// 8007                  jge     short loc_13360 ;~ 041E:0B6C
cs=0x41e;eip=0x000b6e; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8008                  mov     al, [bp+arg_0] ;~ 041E:0B6E
cs=0x41e;eip=0x000b71; 	T(AND(ax, 0x0FF));	// 8009                  and     ax, 0FFh ;~ 041E:0B71
cs=0x41e;eip=0x000b74; 	X(PUSH(ax));	// 8010                  push    ax ;~ 041E:0B74
cs=0x41e;eip=0x000b75; 	J(CALL(sub_13052,0));	// 8011                  call    sub_13052 ;~ 041E:0B75
cs=0x41e;eip=0x000b78; 	T(ADD(sp, 2));	// 8012                  add     sp, 2 ;~ 041E:0B78
cs=0x41e;eip=0x000b7b; 	T(ADD(ax, 0x0B0));	// 8013                  add     ax, 0B0h ;~ 041E:0B7B
cs=0x41e;eip=0x000b7e; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 8014                  mov     [bp+var_4], ax ;~ 041E:0B7E
cs=0x41e;eip=0x000b81; 	T(bx = ax;);	// 8015                  mov     bx, ax ;~ 041E:0B81
cs=0x41e;eip=0x000b83; 	T(MOV(al, *(raddr(ds,bx+0x0C32))));	// 8016                  mov     al, [bx+0C32h] ;~ 041E:0B83
cs=0x41e;eip=0x000b87; 	T(AND(ax, 0x0DF));	// 8017                  and     ax, 0DFh ;~ 041E:0B87
cs=0x41e;eip=0x000b8a; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 8018                  mov     [bp+var_2], al ;~ 041E:0B8A
cs=0x41e;eip=0x000b8d; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 8019                  mov     al, [bp+var_2] ;~ 041E:0B8D
cs=0x41e;eip=0x000b90; 	T(AND(ax, 0x0FF));	// 8020                  and     ax, 0FFh ;~ 041E:0B90
cs=0x41e;eip=0x000b93; 	X(PUSH(ax));	// 8021                  push    ax ;~ 041E:0B93
cs=0x41e;eip=0x000b94; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 8022                  push    [bp+var_4] ;~ 041E:0B94
cs=0x41e;eip=0x000b97; 	J(CALL(sub_12a31,0));	// 8023                  call    sub_12A31 ;~ 041E:0B97
cs=0x41e;eip=0x000b9a; 	T(ADD(sp, 4));	// 8024                  add     sp, 4 ;~ 041E:0B9A
cs=0x41e;eip=0x000b9d; 	J(JMP(loc_13394));	// 8025                  jmp     short loc_13394 ;~ 041E:0B9D
loc_13360:
	// 4586 
cs=0x41e;eip=0x000ba0; 	T(al = byte_1271f;);	// 8030                  mov     al, byte_1271F ;~ 041E:0BA0
cs=0x41e;eip=0x000ba3; 	T(AND(ax, 0x0FF));	// 8031                  and     ax, 0FFh ;~ 041E:0BA3
cs=0x41e;eip=0x000ba6; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 8032                  mov     [bp+var_6], ax ;~ 041E:0BA6
cs=0x41e;eip=0x000ba9; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8033                  mov     al, [bp+arg_0] ;~ 041E:0BA9
cs=0x41e;eip=0x000bac; 	T(AND(ax, 0x0FF));	// 8034                  and     ax, 0FFh ;~ 041E:0BAC
cs=0x41e;eip=0x000baf; 	T(bx = ax;);	// 8035                  mov     bx, ax ;~ 041E:0BAF
cs=0x41e;eip=0x000bb1; 	T(ADD(bx, 0x0FFFA));	// 8036                  add     bx, 0FFFAh ;~ 041E:0BB1
cs=0x41e;eip=0x000bb4; 	T(MOV(al, *(raddr(ds,bx+0x28C))));	// 8037                  mov     al, [bx+28Ch] ;~ 041E:0BB4
cs=0x41e;eip=0x000bb8; 	T(CBW);	// 8038                  cbw ;~ 041E:0BB8
cs=0x41e;eip=0x000bb9; 	T(NOT(ax));	// 8039                  not     ax ;~ 041E:0BB9
cs=0x41e;eip=0x000bbb; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_6))));	// 8040                  mov     cx, [bp+var_6] ;~ 041E:0BBB
cs=0x41e;eip=0x000bbe; 	T(AND(cx, ax));	// 8041                  and     cx, ax ;~ 041E:0BBE
cs=0x41e;eip=0x000bc0; 	X(MOV(*(raddr(ss,bp+var_2)), cl));	// 8042                  mov     [bp+var_2], cl ;~ 041E:0BC0
cs=0x41e;eip=0x000bc3; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 8043                  mov     al, [bp+var_2] ;~ 041E:0BC3
cs=0x41e;eip=0x000bc6; 	T(AND(ax, 0x0FF));	// 8044                  and     ax, 0FFh ;~ 041E:0BC6
cs=0x41e;eip=0x000bc9; 	X(PUSH(ax));	// 8045                  push    ax ;~ 041E:0BC9
cs=0x41e;eip=0x000bca; 	T(ax = 0x0BD;);	// 8046                  mov     ax, 0BDh ;~ 041E:0BCA
cs=0x41e;eip=0x000bcd; 	X(PUSH(ax));	// 8047                  push    ax ;~ 041E:0BCD
cs=0x41e;eip=0x000bce; 	J(CALL(sub_12a31,0));	// 8048                  call    sub_12A31 ;~ 041E:0BCE
cs=0x41e;eip=0x000bd1; 	T(ADD(sp, 4));	// 8049                  add     sp, 4 ;~ 041E:0BD1
loc_13394:
	// 4587 
cs=0x41e;eip=0x000bd4; 	T(sp = bp;);	// 8052                  mov     sp, bp ;~ 041E:0BD4
cs=0x41e;eip=0x000bd6; 	X(POP(bp));	// 8053                  pop     bp ;~ 041E:0BD6
cs=0x41e;eip=0x000bd7; 	J(RETN(0));	// 8054                  retn ;~ 041E:0BD7

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_13360: 	goto loc_13360;
        case m2c::kloc_13394: 	goto loc_13394;
        case m2c::ksub_1331c: 	goto sub_1331c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13398(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13398:
    _begin:
#undef var_6
#define var_6 -6
	// 8065 var_6           = word ptr -6 ;~ 041E:0BD8
#undef var_4
#define var_4 -4
	// 8066 var_4           = word ptr -4 ;~ 041E:0BD8
#undef var_2
#define var_2 -2
	// 8067 var_2           = byte ptr -2 ;~ 041E:0BD8
#undef arg_0
#define arg_0 4
	// 8068 arg_0           = byte ptr  4 ;~ 041E:0BD8
#undef arg_2
#define arg_2 6
	// 8069 arg_2           = byte ptr  6 ;~ 041E:0BD8
#undef arg_4
#define arg_4 8
	// 8070 arg_4           = byte ptr  8 ;~ 041E:0BD8
#undef arg_6
#define arg_6 0x0A
	// 8071 arg_6           = byte ptr  0Ah ;~ 041E:0BD8
cs=0x41e;eip=0x000bd8; 	X(PUSH(bp));	// 8073                  push    bp ;~ 041E:0BD8
cs=0x41e;eip=0x000bd9; 	T(bp = sp;);	// 8074                  mov     bp, sp ;~ 041E:0BD9
cs=0x41e;eip=0x000bdb; 	T(SUB(sp, 6));	// 8075                  sub     sp, 6 ;~ 041E:0BDB
cs=0x41e;eip=0x000bdf; 	X(PUSH(si));	// 8076                  push    si ;~ 041E:0BDF
cs=0x41e;eip=0x000be0; 	X(PUSH(di));	// 8077                  push    di ;~ 041E:0BE0
cs=0x41e;eip=0x000be1; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8078                  mov     al, [bp+arg_0] ;~ 041E:0BE1
cs=0x41e;eip=0x000be4; 	T(AND(ax, 0x0FF));	// 8079                  and     ax, 0FFh ;~ 041E:0BE4
cs=0x41e;eip=0x000be7; 	T(bx = ax;);	// 8080                  mov     bx, ax ;~ 041E:0BE7
cs=0x41e;eip=0x000be9; 	T(SHL(bx, 1));	// 8081                  shl     bx, 1 ;~ 041E:0BE9
cs=0x41e;eip=0x000beb; 	T(SHL(bx, 1));	// 8082                  shl     bx, 1 ;~ 041E:0BEB
cs=0x41e;eip=0x000bed; 	T(SHL(bx, 1));	// 8083                  shl     bx, 1 ;~ 041E:0BED
cs=0x41e;eip=0x000bef; 	T(MOV(al, *(raddr(ds,bx+0x0D32))));	// 8084                  mov     al, [bx+0D32h] ;~ 041E:0BEF
cs=0x41e;eip=0x000bf3; 	T(AND(ax, 0x0FF));	// 8085                  and     ax, 0FFh ;~ 041E:0BF3
cs=0x41e;eip=0x000bf6; 	J(JNZ(loc_133bb));	// 8086                  jnz     short loc_133BB ;~ 041E:0BF6
cs=0x41e;eip=0x000bf8; 	J(JMP(loc_13492));	// 8087                  jmp     loc_13492 ;~ 041E:0BF8
loc_133bb:
	// 4588 
cs=0x41e;eip=0x000bfb; 	T(al = byte_12658;);	// 8091                  mov     al, byte_12658 ;~ 041E:0BFB
cs=0x41e;eip=0x000bfe; 	T(AND(ax, 0x0FF));	// 8092                  and     ax, 0FFh ;~ 041E:0BFE
cs=0x41e;eip=0x000c01; 	J(JZ(loc_133c6));	// 8093                  jz      short loc_133C6 ;~ 041E:0C01
cs=0x41e;eip=0x000c03; 	J(JMP(loc_1342c));	// 8094                  jmp     loc_1342C ;~ 041E:0C03
loc_133c6:
	// 4589 
cs=0x41e;eip=0x000c06; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8098                  mov     al, [bp+arg_0] ;~ 041E:0C06
cs=0x41e;eip=0x000c09; 	X(byte_1265f = al;);	// 8099                  mov     byte_1265F, al ;~ 041E:0C09
cs=0x41e;eip=0x000c0c; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8100                  mov     al, [bp+arg_0] ;~ 041E:0C0C
cs=0x41e;eip=0x000c0f; 	T(AND(ax, 0x0FF));	// 8101                  and     ax, 0FFh ;~ 041E:0C0F
cs=0x41e;eip=0x000c12; 	T(bx = ax;);	// 8102                  mov     bx, ax ;~ 041E:0C12
cs=0x41e;eip=0x000c14; 	T(SHL(bx, 1));	// 8103                  shl     bx, 1 ;~ 041E:0C14
cs=0x41e;eip=0x000c16; 	T(SHL(bx, 1));	// 8104                  shl     bx, 1 ;~ 041E:0C16
cs=0x41e;eip=0x000c18; 	T(SHL(bx, 1));	// 8105                  shl     bx, 1 ;~ 041E:0C18
cs=0x41e;eip=0x000c1a; 	T(MOV(al, *(raddr(ds,bx+0x0D32))));	// 8106                  mov     al, [bx+0D32h] ;~ 041E:0C1A
cs=0x41e;eip=0x000c1e; 	X(byte_12658 = al;);	// 8107                  mov     byte_12658, al ;~ 041E:0C1E
cs=0x41e;eip=0x000c21; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8108                  mov     al, [bp+arg_0] ;~ 041E:0C21
cs=0x41e;eip=0x000c24; 	T(AND(ax, 0x0FF));	// 8109                  and     ax, 0FFh ;~ 041E:0C24
cs=0x41e;eip=0x000c27; 	T(SHL(ax, 1));	// 8110                  shl     ax, 1 ;~ 041E:0C27
cs=0x41e;eip=0x000c29; 	T(SHL(ax, 1));	// 8111                  shl     ax, 1 ;~ 041E:0C29
cs=0x41e;eip=0x000c2b; 	T(SHL(ax, 1));	// 8112                  shl     ax, 1 ;~ 041E:0C2B
cs=0x41e;eip=0x000c2d; 	T(bx = 0x0D32;);	// 8113                  mov     bx, 0D32h ;~ 041E:0C2D
cs=0x41e;eip=0x000c30; 	T(ADD(bx, ax));	// 8114                  add     bx, ax ;~ 041E:0C30
cs=0x41e;eip=0x000c32; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 8115                  mov     ax, [bx+2] ;~ 041E:0C32
cs=0x41e;eip=0x000c35; 	X(word_1265a = ax;);	// 8116                  mov     word_1265A, ax ;~ 041E:0C35
cs=0x41e;eip=0x000c38; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8117                  mov     al, [bp+arg_0] ;~ 041E:0C38
cs=0x41e;eip=0x000c3b; 	T(AND(ax, 0x0FF));	// 8118                  and     ax, 0FFh ;~ 041E:0C3B
cs=0x41e;eip=0x000c3e; 	T(SHL(ax, 1));	// 8119                  shl     ax, 1 ;~ 041E:0C3E
cs=0x41e;eip=0x000c40; 	T(SHL(ax, 1));	// 8120                  shl     ax, 1 ;~ 041E:0C40
cs=0x41e;eip=0x000c42; 	T(SHL(ax, 1));	// 8121                  shl     ax, 1 ;~ 041E:0C42
cs=0x41e;eip=0x000c44; 	T(bx = 0x0D32;);	// 8122                  mov     bx, 0D32h ;~ 041E:0C44
cs=0x41e;eip=0x000c47; 	T(ADD(bx, ax));	// 8123                  add     bx, ax ;~ 041E:0C47
cs=0x41e;eip=0x000c49; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 8124                  mov     ax, [bx+4] ;~ 041E:0C49
cs=0x41e;eip=0x000c4c; 	X(word_125c2 = ax;);	// 8125                  mov     word_125C2, ax ;~ 041E:0C4C
cs=0x41e;eip=0x000c4f; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8126                  mov     al, [bp+arg_0] ;~ 041E:0C4F
cs=0x41e;eip=0x000c52; 	T(AND(ax, 0x0FF));	// 8127                  and     ax, 0FFh ;~ 041E:0C52
cs=0x41e;eip=0x000c55; 	T(SHL(ax, 1));	// 8128                  shl     ax, 1 ;~ 041E:0C55
cs=0x41e;eip=0x000c57; 	T(SHL(ax, 1));	// 8129                  shl     ax, 1 ;~ 041E:0C57
cs=0x41e;eip=0x000c59; 	T(SHL(ax, 1));	// 8130                  shl     ax, 1 ;~ 041E:0C59
cs=0x41e;eip=0x000c5b; 	T(bx = 0x0D32;);	// 8131                  mov     bx, 0D32h ;~ 041E:0C5B
cs=0x41e;eip=0x000c5e; 	T(ADD(bx, ax));	// 8132                  add     bx, ax ;~ 041E:0C5E
cs=0x41e;eip=0x000c60; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 8133                  mov     ax, [bx+6] ;~ 041E:0C60
cs=0x41e;eip=0x000c63; 	X(word_125c6 = ax;);	// 8134                  mov     word_125C6, ax ;~ 041E:0C63
cs=0x41e;eip=0x000c66; 	J(CALL(sub_12b4b,0));	// 8135                  call    sub_12B4B ;~ 041E:0C66
cs=0x41e;eip=0x000c69; 	J(JMP(loc_1348f));	// 8136                  jmp     loc_1348F ;~ 041E:0C69
loc_1342c:
	// 4590 
cs=0x41e;eip=0x000c6c; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8140                  mov     al, [bp+arg_0] ;~ 041E:0C6C
cs=0x41e;eip=0x000c6f; 	X(byte_12660 = al;);	// 8141                  mov     byte_12660, al ;~ 041E:0C6F
cs=0x41e;eip=0x000c72; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8142                  mov     al, [bp+arg_0] ;~ 041E:0C72
cs=0x41e;eip=0x000c75; 	T(AND(ax, 0x0FF));	// 8143                  and     ax, 0FFh ;~ 041E:0C75
cs=0x41e;eip=0x000c78; 	T(bx = ax;);	// 8144                  mov     bx, ax ;~ 041E:0C78
cs=0x41e;eip=0x000c7a; 	T(SHL(bx, 1));	// 8145                  shl     bx, 1 ;~ 041E:0C7A
cs=0x41e;eip=0x000c7c; 	T(SHL(bx, 1));	// 8146                  shl     bx, 1 ;~ 041E:0C7C
cs=0x41e;eip=0x000c7e; 	T(SHL(bx, 1));	// 8147                  shl     bx, 1 ;~ 041E:0C7E
cs=0x41e;eip=0x000c80; 	T(MOV(al, *(raddr(ds,bx+0x0D32))));	// 8148                  mov     al, [bx+0D32h] ;~ 041E:0C80
cs=0x41e;eip=0x000c84; 	X(byte_12659 = al;);	// 8149                  mov     byte_12659, al ;~ 041E:0C84
cs=0x41e;eip=0x000c87; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8150                  mov     al, [bp+arg_0] ;~ 041E:0C87
cs=0x41e;eip=0x000c8a; 	T(AND(ax, 0x0FF));	// 8151                  and     ax, 0FFh ;~ 041E:0C8A
cs=0x41e;eip=0x000c8d; 	T(SHL(ax, 1));	// 8152                  shl     ax, 1 ;~ 041E:0C8D
cs=0x41e;eip=0x000c8f; 	T(SHL(ax, 1));	// 8153                  shl     ax, 1 ;~ 041E:0C8F
cs=0x41e;eip=0x000c91; 	T(SHL(ax, 1));	// 8154                  shl     ax, 1 ;~ 041E:0C91
cs=0x41e;eip=0x000c93; 	T(bx = 0x0D32;);	// 8155                  mov     bx, 0D32h ;~ 041E:0C93
cs=0x41e;eip=0x000c96; 	T(ADD(bx, ax));	// 8156                  add     bx, ax ;~ 041E:0C96
cs=0x41e;eip=0x000c98; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 8157                  mov     ax, [bx+2] ;~ 041E:0C98
cs=0x41e;eip=0x000c9b; 	X(word_1265c = ax;);	// 8158                  mov     word_1265C, ax ;~ 041E:0C9B
cs=0x41e;eip=0x000c9e; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8159                  mov     al, [bp+arg_0] ;~ 041E:0C9E
cs=0x41e;eip=0x000ca1; 	T(AND(ax, 0x0FF));	// 8160                  and     ax, 0FFh ;~ 041E:0CA1
cs=0x41e;eip=0x000ca4; 	T(SHL(ax, 1));	// 8161                  shl     ax, 1 ;~ 041E:0CA4
cs=0x41e;eip=0x000ca6; 	T(SHL(ax, 1));	// 8162                  shl     ax, 1 ;~ 041E:0CA6
cs=0x41e;eip=0x000ca8; 	T(SHL(ax, 1));	// 8163                  shl     ax, 1 ;~ 041E:0CA8
cs=0x41e;eip=0x000caa; 	T(bx = 0x0D32;);	// 8164                  mov     bx, 0D32h ;~ 041E:0CAA
cs=0x41e;eip=0x000cad; 	T(ADD(bx, ax));	// 8165                  add     bx, ax ;~ 041E:0CAD
cs=0x41e;eip=0x000caf; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 8166                  mov     ax, [bx+4] ;~ 041E:0CAF
cs=0x41e;eip=0x000cb2; 	X(word_125c4 = ax;);	// 8167                  mov     word_125C4, ax ;~ 041E:0CB2
cs=0x41e;eip=0x000cb5; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8168                  mov     al, [bp+arg_0] ;~ 041E:0CB5
cs=0x41e;eip=0x000cb8; 	T(AND(ax, 0x0FF));	// 8169                  and     ax, 0FFh ;~ 041E:0CB8
cs=0x41e;eip=0x000cbb; 	T(SHL(ax, 1));	// 8170                  shl     ax, 1 ;~ 041E:0CBB
cs=0x41e;eip=0x000cbd; 	T(SHL(ax, 1));	// 8171                  shl     ax, 1 ;~ 041E:0CBD
cs=0x41e;eip=0x000cbf; 	T(SHL(ax, 1));	// 8172                  shl     ax, 1 ;~ 041E:0CBF
cs=0x41e;eip=0x000cc1; 	T(bx = 0x0D32;);	// 8173                  mov     bx, 0D32h ;~ 041E:0CC1
cs=0x41e;eip=0x000cc4; 	T(ADD(bx, ax));	// 8174                  add     bx, ax ;~ 041E:0CC4
cs=0x41e;eip=0x000cc6; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 8175                  mov     ax, [bx+6] ;~ 041E:0CC6
cs=0x41e;eip=0x000cc9; 	X(word_125c8 = ax;);	// 8176                  mov     word_125C8, ax ;~ 041E:0CC9
cs=0x41e;eip=0x000ccc; 	J(CALL(sub_12b4b,0));	// 8177                  call    sub_12B4B ;~ 041E:0CCC
loc_1348f:
	// 4591 
cs=0x41e;eip=0x000ccf; 	J(JMP(loc_1353e));	// 8180                  jmp     loc_1353E ;~ 041E:0CCF
loc_13492:
	// 4592 
cs=0x41e;eip=0x000cd2; 	T(CMP(*(raddr(ss,bp+arg_6)), 0));	// 8184                  cmp     [bp+arg_6], 0 ;~ 041E:0CD2
cs=0x41e;eip=0x000cd6; 	J(JNZ(loc_134a5));	// 8185                  jnz     short loc_134A5 ;~ 041E:0CD6
cs=0x41e;eip=0x000cd8; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8186                  mov     al, [bp+arg_0] ;~ 041E:0CD8
cs=0x41e;eip=0x000cdb; 	T(AND(ax, 0x0FF));	// 8187                  and     ax, 0FFh ;~ 041E:0CDB
cs=0x41e;eip=0x000cde; 	X(PUSH(ax));	// 8188                  push    ax ;~ 041E:0CDE
cs=0x41e;eip=0x000cdf; 	J(CALL(sub_1331c,0));	// 8189                  call    sub_1331C ;~ 041E:0CDF
cs=0x41e;eip=0x000ce2; 	T(ADD(sp, 2));	// 8190                  add     sp, 2 ;~ 041E:0CE2
loc_134a5:
	// 4593 
cs=0x41e;eip=0x000ce5; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 8193                  mov     al, [bp+arg_2] ;~ 041E:0CE5
cs=0x41e;eip=0x000ce8; 	T(AND(ax, 0x0FF));	// 8194                  and     ax, 0FFh ;~ 041E:0CE8
cs=0x41e;eip=0x000ceb; 	X(PUSH(ax));	// 8195                  push    ax ;~ 041E:0CEB
cs=0x41e;eip=0x000cec; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8196                  mov     al, [bp+arg_0] ;~ 041E:0CEC
cs=0x41e;eip=0x000cef; 	T(AND(ax, 0x0FF));	// 8197                  and     ax, 0FFh ;~ 041E:0CEF
cs=0x41e;eip=0x000cf2; 	X(PUSH(ax));	// 8198                  push    ax ;~ 041E:0CF2
cs=0x41e;eip=0x000cf3; 	J(CALL(sub_13132,0));	// 8199                  call    sub_13132 ;~ 041E:0CF3
cs=0x41e;eip=0x000cf6; 	T(ADD(sp, 4));	// 8200                  add     sp, 4 ;~ 041E:0CF6
cs=0x41e;eip=0x000cf9; 	T(MOV(al, *(raddr(ss,bp+arg_4))));	// 8201                  mov     al, [bp+arg_4] ;~ 041E:0CF9
cs=0x41e;eip=0x000cfc; 	T(AND(ax, 0x0FF));	// 8202                  and     ax, 0FFh ;~ 041E:0CFC
cs=0x41e;eip=0x000cff; 	X(PUSH(ax));	// 8203                  push    ax ;~ 041E:0CFF
cs=0x41e;eip=0x000d00; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8204                  mov     al, [bp+arg_0] ;~ 041E:0D00
cs=0x41e;eip=0x000d03; 	T(AND(ax, 0x0FF));	// 8205                  and     ax, 0FFh ;~ 041E:0D03
cs=0x41e;eip=0x000d06; 	X(PUSH(ax));	// 8206                  push    ax ;~ 041E:0D06
cs=0x41e;eip=0x000d07; 	J(CALL(sub_1307e,0));	// 8207                  call    sub_1307E ;~ 041E:0D07
cs=0x41e;eip=0x000d0a; 	T(ADD(sp, 4));	// 8208                  add     sp, 4 ;~ 041E:0D0A
cs=0x41e;eip=0x000d0d; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8209                  mov     al, [bp+arg_0] ;~ 041E:0D0D
cs=0x41e;eip=0x000d10; 	T(AND(ax, 0x0FF));	// 8210                  and     ax, 0FFh ;~ 041E:0D10
cs=0x41e;eip=0x000d13; 	T(CMP(ax, 6));	// 8211                  cmp     ax, 6 ;~ 041E:0D13
cs=0x41e;eip=0x000d16; 	J(JGE(loc_1350c));	// 8212                  jge     short loc_1350C ;~ 041E:0D16
cs=0x41e;eip=0x000d18; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8213                  mov     al, [bp+arg_0] ;~ 041E:0D18
cs=0x41e;eip=0x000d1b; 	T(AND(ax, 0x0FF));	// 8214                  and     ax, 0FFh ;~ 041E:0D1B
cs=0x41e;eip=0x000d1e; 	X(PUSH(ax));	// 8215                  push    ax ;~ 041E:0D1E
cs=0x41e;eip=0x000d1f; 	J(CALL(sub_13052,0));	// 8216                  call    sub_13052 ;~ 041E:0D1F
cs=0x41e;eip=0x000d22; 	T(ADD(sp, 2));	// 8217                  add     sp, 2 ;~ 041E:0D22
cs=0x41e;eip=0x000d25; 	T(ADD(ax, 0x0B0));	// 8218                  add     ax, 0B0h ;~ 041E:0D25
cs=0x41e;eip=0x000d28; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 8219                  mov     [bp+var_4], ax ;~ 041E:0D28
cs=0x41e;eip=0x000d2b; 	T(bx = ax;);	// 8220                  mov     bx, ax ;~ 041E:0D2B
cs=0x41e;eip=0x000d2d; 	T(MOV(al, *(raddr(ds,bx+0x0C32))));	// 8221                  mov     al, [bx+0C32h] ;~ 041E:0D2D
cs=0x41e;eip=0x000d31; 	T(AND(ax, 0x0FF));	// 8222                  and     ax, 0FFh ;~ 041E:0D31
cs=0x41e;eip=0x000d34; 	T(OR(ax, 0x20));	// 8223                  or      ax, 20h ;~ 041E:0D34
cs=0x41e;eip=0x000d37; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 8224                  mov     [bp+var_2], al ;~ 041E:0D37
cs=0x41e;eip=0x000d3a; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 8225                  mov     al, [bp+var_2] ;~ 041E:0D3A
cs=0x41e;eip=0x000d3d; 	T(AND(ax, 0x0FF));	// 8226                  and     ax, 0FFh ;~ 041E:0D3D
cs=0x41e;eip=0x000d40; 	X(PUSH(ax));	// 8227                  push    ax ;~ 041E:0D40
cs=0x41e;eip=0x000d41; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 8228                  push    [bp+var_4] ;~ 041E:0D41
cs=0x41e;eip=0x000d44; 	J(CALL(sub_12a31,0));	// 8229                  call    sub_12A31 ;~ 041E:0D44
cs=0x41e;eip=0x000d47; 	T(ADD(sp, 4));	// 8230                  add     sp, 4 ;~ 041E:0D47
cs=0x41e;eip=0x000d4a; 	J(JMP(loc_1353e));	// 8231                  jmp     short loc_1353E ;~ 041E:0D4A
loc_1350c:
	// 4594 
cs=0x41e;eip=0x000d4c; 	T(al = byte_1271f;);	// 8235                  mov     al, byte_1271F ;~ 041E:0D4C
cs=0x41e;eip=0x000d4f; 	T(AND(ax, 0x0FF));	// 8236                  and     ax, 0FFh ;~ 041E:0D4F
cs=0x41e;eip=0x000d52; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 8237                  mov     [bp+var_6], ax ;~ 041E:0D52
cs=0x41e;eip=0x000d55; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8238                  mov     al, [bp+arg_0] ;~ 041E:0D55
cs=0x41e;eip=0x000d58; 	T(AND(ax, 0x0FF));	// 8239                  and     ax, 0FFh ;~ 041E:0D58
cs=0x41e;eip=0x000d5b; 	T(bx = ax;);	// 8240                  mov     bx, ax ;~ 041E:0D5B
cs=0x41e;eip=0x000d5d; 	T(ADD(bx, 0x0FFFA));	// 8241                  add     bx, 0FFFAh ;~ 041E:0D5D
cs=0x41e;eip=0x000d60; 	T(MOV(al, *(raddr(ds,bx+0x28C))));	// 8242                  mov     al, [bx+28Ch] ;~ 041E:0D60
cs=0x41e;eip=0x000d64; 	T(CBW);	// 8243                  cbw ;~ 041E:0D64
cs=0x41e;eip=0x000d65; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_6))));	// 8244                  mov     cx, [bp+var_6] ;~ 041E:0D65
cs=0x41e;eip=0x000d68; 	T(OR(cx, ax));	// 8245                  or      cx, ax ;~ 041E:0D68
cs=0x41e;eip=0x000d6a; 	X(MOV(*(raddr(ss,bp+var_2)), cl));	// 8246                  mov     [bp+var_2], cl ;~ 041E:0D6A
cs=0x41e;eip=0x000d6d; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 8247                  mov     al, [bp+var_2] ;~ 041E:0D6D
cs=0x41e;eip=0x000d70; 	T(AND(ax, 0x0FF));	// 8248                  and     ax, 0FFh ;~ 041E:0D70
cs=0x41e;eip=0x000d73; 	X(PUSH(ax));	// 8249                  push    ax ;~ 041E:0D73
cs=0x41e;eip=0x000d74; 	T(ax = 0x0BD;);	// 8250                  mov     ax, 0BDh ;~ 041E:0D74
cs=0x41e;eip=0x000d77; 	X(PUSH(ax));	// 8251                  push    ax ;~ 041E:0D77
cs=0x41e;eip=0x000d78; 	J(CALL(sub_12a31,0));	// 8252                  call    sub_12A31 ;~ 041E:0D78
cs=0x41e;eip=0x000d7b; 	T(ADD(sp, 4));	// 8253                  add     sp, 4 ;~ 041E:0D7B
loc_1353e:
	// 4595 
cs=0x41e;eip=0x000d7e; 	X(POP(di));	// 8257                  pop     di ;~ 041E:0D7E
cs=0x41e;eip=0x000d7f; 	X(POP(si));	// 8258                  pop     si ;~ 041E:0D7F
cs=0x41e;eip=0x000d80; 	T(sp = bp;);	// 8259                  mov     sp, bp ;~ 041E:0D80
cs=0x41e;eip=0x000d82; 	X(POP(bp));	// 8260                  pop     bp ;~ 041E:0D82
cs=0x41e;eip=0x000d83; 	J(RETN(0));	// 8261                  retn ;~ 041E:0D83

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_133bb: 	goto loc_133bb;
        case m2c::kloc_133c6: 	goto loc_133c6;
        case m2c::kloc_1342c: 	goto loc_1342c;
        case m2c::kloc_1348f: 	goto loc_1348f;
        case m2c::kloc_13492: 	goto loc_13492;
        case m2c::kloc_134a5: 	goto loc_134a5;
        case m2c::kloc_1350c: 	goto loc_1350c;
        case m2c::kloc_1353e: 	goto loc_1353e;
        case m2c::ksub_13398: 	goto sub_13398;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13544(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13544:
    _begin:
#undef var_2
#define var_2 -2
	// 8271 var_2           = byte ptr -2 ;~ 041E:0D84
cs=0x41e;eip=0x000d84; 	X(PUSH(bp));	// 8273                  push    bp ;~ 041E:0D84
cs=0x41e;eip=0x000d85; 	T(bp = sp;);	// 8274                  mov     bp, sp ;~ 041E:0D85
cs=0x41e;eip=0x000d87; 	T(SUB(sp, 2));	// 8275                  sub     sp, 2 ;~ 041E:0D87
cs=0x41e;eip=0x000d8b; 	T(al = byte_1271f;);	// 8276                  mov     al, byte_1271F ;~ 041E:0D8B
cs=0x41e;eip=0x000d8e; 	T(AND(ax, 0x3F));	// 8277                  and     ax, 3Fh ;~ 041E:0D8E
cs=0x41e;eip=0x000d91; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 8278                  mov     [bp+var_2], al ;~ 041E:0D91
cs=0x41e;eip=0x000d94; 	T(al = byte_11cda;);	// 8279                  mov     al, byte_11CDA ;~ 041E:0D94
cs=0x41e;eip=0x000d97; 	T(AND(ax, 0x0FF));	// 8280                  and     ax, 0FFh ;~ 041E:0D97
cs=0x41e;eip=0x000d9a; 	J(JZ(loc_13562));	// 8281                  jz      short loc_13562 ;~ 041E:0D9A
cs=0x41e;eip=0x000d9c; 	T(ax = 0x80;);	// 8282                  mov     ax, 80h ;~ 041E:0D9C
cs=0x41e;eip=0x000d9f; 	J(JMP(loc_13564));	// 8283                  jmp     short loc_13564 ;~ 041E:0D9F
loc_13562:
	// 4596 
cs=0x41e;eip=0x000da2; 	T(XOR(ax, ax));	// 8288                  xor     ax, ax ;~ 041E:0DA2
loc_13564:
	// 4597 
cs=0x41e;eip=0x000da4; 	X(OR(*(raddr(ss,bp+var_2)), al));	// 8291                  or      [bp+var_2], al ;~ 041E:0DA4
cs=0x41e;eip=0x000da7; 	T(al = byte_11cdb;);	// 8292                  mov     al, byte_11CDB ;~ 041E:0DA7
cs=0x41e;eip=0x000daa; 	T(AND(ax, 0x0FF));	// 8293                  and     ax, 0FFh ;~ 041E:0DAA
cs=0x41e;eip=0x000dad; 	J(JZ(loc_13574));	// 8294                  jz      short loc_13574 ;~ 041E:0DAD
cs=0x41e;eip=0x000daf; 	T(ax = 0x40;);	// 8295                  mov     ax, 40h ; '@' ;~ 041E:0DAF
cs=0x41e;eip=0x000db2; 	J(JMP(loc_13576));	// 8296                  jmp     short loc_13576 ;~ 041E:0DB2
loc_13574:
	// 4598 
cs=0x41e;eip=0x000db4; 	T(XOR(ax, ax));	// 8300                  xor     ax, ax ;~ 041E:0DB4
loc_13576:
	// 4599 
cs=0x41e;eip=0x000db6; 	X(OR(*(raddr(ss,bp+var_2)), al));	// 8303                  or      [bp+var_2], al ;~ 041E:0DB6
cs=0x41e;eip=0x000db9; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 8304                  mov     al, [bp+var_2] ;~ 041E:0DB9
cs=0x41e;eip=0x000dbc; 	T(AND(ax, 0x0FF));	// 8305                  and     ax, 0FFh ;~ 041E:0DBC
cs=0x41e;eip=0x000dbf; 	X(PUSH(ax));	// 8306                  push    ax ;~ 041E:0DBF
cs=0x41e;eip=0x000dc0; 	T(ax = 0x0BD;);	// 8307                  mov     ax, 0BDh ;~ 041E:0DC0
cs=0x41e;eip=0x000dc3; 	X(PUSH(ax));	// 8308                  push    ax ;~ 041E:0DC3
cs=0x41e;eip=0x000dc4; 	J(CALL(sub_12a31,0));	// 8309                  call    sub_12A31 ;~ 041E:0DC4
cs=0x41e;eip=0x000dc7; 	T(ADD(sp, 4));	// 8310                  add     sp, 4 ;~ 041E:0DC7
cs=0x41e;eip=0x000dca; 	T(sp = bp;);	// 8311                  mov     sp, bp ;~ 041E:0DCA
cs=0x41e;eip=0x000dcc; 	X(POP(bp));	// 8312                  pop     bp ;~ 041E:0DCC
cs=0x41e;eip=0x000dcd; 	J(RETN(0));	// 8313                  retn ;~ 041E:0DCD

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_13562: 	goto loc_13562;
        case m2c::kloc_13564: 	goto loc_13564;
        case m2c::kloc_13574: 	goto loc_13574;
        case m2c::kloc_13576: 	goto loc_13576;
        case m2c::ksub_13544: 	goto sub_13544;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1358e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1358e:
    _begin:
cs=0x41e;eip=0x000dce; 	T(al = byte_11cdc;);	// 8321                  mov     al, byte_11CDC ;~ 041E:0DCE
cs=0x41e;eip=0x000dd1; 	T(AND(ax, 0x0FF));	// 8322                  and     ax, 0FFh ;~ 041E:0DD1
cs=0x41e;eip=0x000dd4; 	J(JZ(loc_1359c));	// 8323                  jz      short loc_1359C ;~ 041E:0DD4
cs=0x41e;eip=0x000dd6; 	T(ax = 0x40;);	// 8324                  mov     ax, 40h ; '@' ;~ 041E:0DD6
cs=0x41e;eip=0x000dd9; 	J(JMP(loc_1359e));	// 8325                  jmp     short loc_1359E ;~ 041E:0DD9
loc_1359c:
	// 4600 
cs=0x41e;eip=0x000ddc; 	T(XOR(ax, ax));	// 8330                  xor     ax, ax ;~ 041E:0DDC
loc_1359e:
	// 4601 
cs=0x41e;eip=0x000dde; 	X(PUSH(ax));	// 8333                  push    ax ;~ 041E:0DDE
cs=0x41e;eip=0x000ddf; 	T(ax = 8;);	// 8334                  mov     ax, 8 ;~ 041E:0DDF
cs=0x41e;eip=0x000de2; 	X(PUSH(ax));	// 8335                  push    ax ;~ 041E:0DE2
cs=0x41e;eip=0x000de3; 	J(CALL(sub_12a31,0));	// 8336                  call    sub_12A31 ;~ 041E:0DE3
cs=0x41e;eip=0x000de6; 	T(ADD(sp, 4));	// 8337                  add     sp, 4 ;~ 041E:0DE6
cs=0x41e;eip=0x000de9; 	J(RETN(0));	// 8338                  retn ;~ 041E:0DE9

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1359c: 	goto loc_1359c;
        case m2c::kloc_1359e: 	goto loc_1359e;
        case m2c::ksub_1358e: 	goto sub_1358e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_135aa(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_135aa:
    _begin:
#undef var_4
#define var_4 -4
	// 8348 var_4           = word ptr -4 ;~ 041E:0DEA
#undef var_2
#define var_2 -2
	// 8349 var_2           = word ptr -2 ;~ 041E:0DEA
cs=0x41e;eip=0x000dea; 	X(PUSH(bp));	// 8351                  push    bp ;~ 041E:0DEA
cs=0x41e;eip=0x000deb; 	T(bp = sp;);	// 8352                  mov     bp, sp ;~ 041E:0DEB
cs=0x41e;eip=0x000ded; 	T(SUB(sp, 4));	// 8353                  sub     sp, 4 ;~ 041E:0DED
cs=0x41e;eip=0x000df1; 	T(ax = word_127bc;);	// 8354                  mov     ax, word_127BC ;~ 041E:0DF1
cs=0x41e;eip=0x000df4; 	T(ADD(ax, 0x40));	// 8355                  add     ax, 40h ; '@' ;~ 041E:0DF4
cs=0x41e;eip=0x000df7; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 8356                  mov     [bp+var_4], ax ;~ 041E:0DF7
cs=0x41e;eip=0x000dfa; 	T(bx = word_127be;);	// 8357                  mov     bx, word_127BE ;~ 041E:0DFA
cs=0x41e;eip=0x000dfe; 	T(MOV(al, *(raddr(ds,bx+6))));	// 8358                  mov     al, [bx+6] ;~ 041E:0DFE
cs=0x41e;eip=0x000e01; 	T(AND(ax, 0x3F));	// 8359                  and     ax, 3Fh ;~ 041E:0E01
cs=0x41e;eip=0x000e04; 	T(cx = 0x3F;);	// 8360                  mov     cx, 3Fh ; '?' ;~ 041E:0E04
cs=0x41e;eip=0x000e07; 	T(SUB(cx, ax));	// 8361                  sub     cx, ax ;~ 041E:0E07
cs=0x41e;eip=0x000e09; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), cx));	// 8362                  mov     [bp+var_2], cx ;~ 041E:0E09
cs=0x41e;eip=0x000e0c; 	T(bx = word_127be;);	// 8363                  mov     bx, word_127BE ;~ 041E:0E0C
cs=0x41e;eip=0x000e10; 	T(MOV(al, *(raddr(ds,bx+7))));	// 8364                  mov     al, [bx+7] ;~ 041E:0E10
cs=0x41e;eip=0x000e13; 	T(AND(ax, 0x0FF));	// 8365                  and     ax, 0FFh ;~ 041E:0E13
cs=0x41e;eip=0x000e16; 	T(cx = 6;);	// 8366                  mov     cx, 6 ;~ 041E:0E16
cs=0x41e;eip=0x000e19; 	T(SHL(ax, cl));	// 8367                  shl     ax, cl ;~ 041E:0E19
cs=0x41e;eip=0x000e1b; 	X(OR(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8368                  or      [bp+var_2], ax ;~ 041E:0E1B
cs=0x41e;eip=0x000e1e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 8369                  push    [bp+var_2] ;~ 041E:0E1E
cs=0x41e;eip=0x000e21; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 8370                  mov     ax, [bp+var_4] ;~ 041E:0E21
cs=0x41e;eip=0x000e24; 	X(PUSH(ax));	// 8371                  push    ax ;~ 041E:0E24
cs=0x41e;eip=0x000e25; 	J(CALL(sub_12a31,0));	// 8372                  call    sub_12A31 ;~ 041E:0E25
cs=0x41e;eip=0x000e28; 	T(ADD(sp, 4));	// 8373                  add     sp, 4 ;~ 041E:0E28
cs=0x41e;eip=0x000e2b; 	T(sp = bp;);	// 8374                  mov     sp, bp ;~ 041E:0E2B
cs=0x41e;eip=0x000e2d; 	X(POP(bp));	// 8375                  pop     bp ;~ 041E:0E2D
cs=0x41e;eip=0x000e2e; 	J(RETN(0));	// 8376                  retn ;~ 041E:0E2E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_135aa: 	goto sub_135aa;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_135f0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_135f0:
    _begin:
#undef var_4
#define var_4 -4
	// 8388 var_4           = word ptr -4 ;~ 041E:0E30
#undef var_2
#define var_2 -2
	// 8389 var_2           = word ptr -2 ;~ 041E:0E30
cs=0x41e;eip=0x000e30; 	X(PUSH(bp));	// 8391                  push    bp ;~ 041E:0E30
cs=0x41e;eip=0x000e31; 	T(bp = sp;);	// 8392                  mov     bp, sp ;~ 041E:0E31
cs=0x41e;eip=0x000e33; 	T(SUB(sp, 4));	// 8393                  sub     sp, 4 ;~ 041E:0E33
cs=0x41e;eip=0x000e37; 	T(ax = word_127ba;);	// 8394                  mov     ax, word_127BA ;~ 041E:0E37
cs=0x41e;eip=0x000e3a; 	T(ADD(ax, 0x0C0));	// 8395                  add     ax, 0C0h ;~ 041E:0E3A
cs=0x41e;eip=0x000e3d; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 8396                  mov     [bp+var_4], ax ;~ 041E:0E3D
cs=0x41e;eip=0x000e40; 	T(bx = word_127be;);	// 8397                  mov     bx, word_127BE ;~ 041E:0E40
cs=0x41e;eip=0x000e44; 	T(MOV(al, *(raddr(ds,bx+0x0A))));	// 8398                  mov     al, [bx+0Ah] ;~ 041E:0E44
cs=0x41e;eip=0x000e47; 	T(AND(ax, 0x0FF));	// 8399                  and     ax, 0FFh ;~ 041E:0E47
cs=0x41e;eip=0x000e4a; 	T(SHL(ax, 1));	// 8400                  shl     ax, 1 ;~ 041E:0E4A
cs=0x41e;eip=0x000e4c; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8401                  mov     [bp+var_2], ax ;~ 041E:0E4C
cs=0x41e;eip=0x000e4f; 	T(bx = word_127be;);	// 8402                  mov     bx, word_127BE ;~ 041E:0E4F
cs=0x41e;eip=0x000e53; 	T(MOV(al, *(raddr(ds,bx+0x0D))));	// 8403                  mov     al, [bx+0Dh] ;~ 041E:0E53
cs=0x41e;eip=0x000e56; 	T(AND(ax, 0x0FF));	// 8404                  and     ax, 0FFh ;~ 041E:0E56
cs=0x41e;eip=0x000e59; 	J(JZ(loc_13620));	// 8405                  jz      short loc_13620 ;~ 041E:0E59
cs=0x41e;eip=0x000e5b; 	T(XOR(ax, ax));	// 8406                  xor     ax, ax ;~ 041E:0E5B
cs=0x41e;eip=0x000e5d; 	J(JMP(loc_13623));	// 8407                  jmp     short loc_13623 ;~ 041E:0E5D
loc_13620:
	// 4602 
cs=0x41e;eip=0x000e60; 	T(ax = 1;);	// 8412                  mov     ax, 1 ;~ 041E:0E60
loc_13623:
	// 4603 
cs=0x41e;eip=0x000e63; 	X(OR(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8415                  or      [bp+var_2], ax ;~ 041E:0E63
cs=0x41e;eip=0x000e66; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 8416                  push    [bp+var_2] ;~ 041E:0E66
cs=0x41e;eip=0x000e69; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 8417                  mov     ax, [bp+var_4] ;~ 041E:0E69
cs=0x41e;eip=0x000e6c; 	X(PUSH(ax));	// 8418                  push    ax ;~ 041E:0E6C
cs=0x41e;eip=0x000e6d; 	J(CALL(sub_12a31,0));	// 8419                  call    sub_12A31 ;~ 041E:0E6D
cs=0x41e;eip=0x000e70; 	T(ADD(sp, 4));	// 8420                  add     sp, 4 ;~ 041E:0E70
cs=0x41e;eip=0x000e73; 	T(sp = bp;);	// 8421                  mov     sp, bp ;~ 041E:0E73
cs=0x41e;eip=0x000e75; 	X(POP(bp));	// 8422                  pop     bp ;~ 041E:0E75
cs=0x41e;eip=0x000e76; 	J(RETN(0));	// 8423                  retn ;~ 041E:0E76

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_13620: 	goto loc_13620;
        case m2c::kloc_13623: 	goto loc_13623;
        case m2c::ksub_135f0: 	goto sub_135f0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13638(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13638:
    _begin:
#undef var_4
#define var_4 -4
	// 8435 var_4           = word ptr -4 ;~ 041E:0E78
#undef var_2
#define var_2 -2
	// 8436 var_2           = word ptr -2 ;~ 041E:0E78
cs=0x41e;eip=0x000e78; 	X(PUSH(bp));	// 8438                  push    bp ;~ 041E:0E78
cs=0x41e;eip=0x000e79; 	T(bp = sp;);	// 8439                  mov     bp, sp ;~ 041E:0E79
cs=0x41e;eip=0x000e7b; 	T(SUB(sp, 4));	// 8440                  sub     sp, 4 ;~ 041E:0E7B
cs=0x41e;eip=0x000e7f; 	T(ax = word_127bc;);	// 8441                  mov     ax, word_127BC ;~ 041E:0E7F
cs=0x41e;eip=0x000e82; 	T(ADD(ax, 0x60));	// 8442                  add     ax, 60h ; '`' ;~ 041E:0E82
cs=0x41e;eip=0x000e85; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 8443                  mov     [bp+var_4], ax ;~ 041E:0E85
cs=0x41e;eip=0x000e88; 	T(bx = word_127be;);	// 8444                  mov     bx, word_127BE ;~ 041E:0E88
cs=0x41e;eip=0x000e8c; 	T(MOV(al, *(raddr(ds,bx))));	// 8445                  mov     al, [bx] ;~ 041E:0E8C
cs=0x41e;eip=0x000e8e; 	T(AND(ax, 0x0FF));	// 8446                  and     ax, 0FFh ;~ 041E:0E8E
cs=0x41e;eip=0x000e91; 	T(SHL(ax, 1));	// 8447                  shl     ax, 1 ;~ 041E:0E91
cs=0x41e;eip=0x000e93; 	T(SHL(ax, 1));	// 8448                  shl     ax, 1 ;~ 041E:0E93
cs=0x41e;eip=0x000e95; 	T(SHL(ax, 1));	// 8449                  shl     ax, 1 ;~ 041E:0E95
cs=0x41e;eip=0x000e97; 	T(SHL(ax, 1));	// 8450                  shl     ax, 1 ;~ 041E:0E97
cs=0x41e;eip=0x000e99; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8451                  mov     [bp+var_2], ax ;~ 041E:0E99
cs=0x41e;eip=0x000e9c; 	T(bx = word_127be;);	// 8452                  mov     bx, word_127BE ;~ 041E:0E9C
cs=0x41e;eip=0x000ea0; 	T(MOV(al, *(raddr(ds,bx+1))));	// 8453                  mov     al, [bx+1] ;~ 041E:0EA0
cs=0x41e;eip=0x000ea3; 	T(AND(ax, 0x0F));	// 8454                  and     ax, 0Fh ;~ 041E:0EA3
cs=0x41e;eip=0x000ea6; 	X(OR(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8455                  or      [bp+var_2], ax ;~ 041E:0EA6
cs=0x41e;eip=0x000ea9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 8456                  push    [bp+var_2] ;~ 041E:0EA9
cs=0x41e;eip=0x000eac; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 8457                  mov     ax, [bp+var_4] ;~ 041E:0EAC
cs=0x41e;eip=0x000eaf; 	X(PUSH(ax));	// 8458                  push    ax ;~ 041E:0EAF
cs=0x41e;eip=0x000eb0; 	J(CALL(sub_12a31,0));	// 8459                  call    sub_12A31 ;~ 041E:0EB0
cs=0x41e;eip=0x000eb3; 	T(ADD(sp, 4));	// 8460                  add     sp, 4 ;~ 041E:0EB3
cs=0x41e;eip=0x000eb6; 	T(sp = bp;);	// 8461                  mov     sp, bp ;~ 041E:0EB6
cs=0x41e;eip=0x000eb8; 	X(POP(bp));	// 8462                  pop     bp ;~ 041E:0EB8
cs=0x41e;eip=0x000eb9; 	J(RETN(0));	// 8463                  retn ;~ 041E:0EB9

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_13638: 	goto sub_13638;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1367a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1367a:
    _begin:
#undef var_4
#define var_4 -4
	// 8473 var_4           = word ptr -4 ;~ 041E:0EBA
#undef var_2
#define var_2 -2
	// 8474 var_2           = word ptr -2 ;~ 041E:0EBA
cs=0x41e;eip=0x000eba; 	X(PUSH(bp));	// 8476                  push    bp ;~ 041E:0EBA
cs=0x41e;eip=0x000ebb; 	T(bp = sp;);	// 8477                  mov     bp, sp ;~ 041E:0EBB
cs=0x41e;eip=0x000ebd; 	T(SUB(sp, 4));	// 8478                  sub     sp, 4 ;~ 041E:0EBD
cs=0x41e;eip=0x000ec1; 	T(ax = word_127bc;);	// 8479                  mov     ax, word_127BC ;~ 041E:0EC1
cs=0x41e;eip=0x000ec4; 	T(ADD(ax, 0x80));	// 8480                  add     ax, 80h ;~ 041E:0EC4
cs=0x41e;eip=0x000ec7; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 8481                  mov     [bp+var_4], ax ;~ 041E:0EC7
cs=0x41e;eip=0x000eca; 	T(bx = word_127be;);	// 8482                  mov     bx, word_127BE ;~ 041E:0ECA
cs=0x41e;eip=0x000ece; 	T(MOV(al, *(raddr(ds,bx+2))));	// 8483                  mov     al, [bx+2] ;~ 041E:0ECE
cs=0x41e;eip=0x000ed1; 	T(AND(ax, 0x0FF));	// 8484                  and     ax, 0FFh ;~ 041E:0ED1
cs=0x41e;eip=0x000ed4; 	T(SHL(ax, 1));	// 8485                  shl     ax, 1 ;~ 041E:0ED4
cs=0x41e;eip=0x000ed6; 	T(SHL(ax, 1));	// 8486                  shl     ax, 1 ;~ 041E:0ED6
cs=0x41e;eip=0x000ed8; 	T(SHL(ax, 1));	// 8487                  shl     ax, 1 ;~ 041E:0ED8
cs=0x41e;eip=0x000eda; 	T(SHL(ax, 1));	// 8488                  shl     ax, 1 ;~ 041E:0EDA
cs=0x41e;eip=0x000edc; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8489                  mov     [bp+var_2], ax ;~ 041E:0EDC
cs=0x41e;eip=0x000edf; 	T(bx = word_127be;);	// 8490                  mov     bx, word_127BE ;~ 041E:0EDF
cs=0x41e;eip=0x000ee3; 	T(MOV(al, *(raddr(ds,bx+3))));	// 8491                  mov     al, [bx+3] ;~ 041E:0EE3
cs=0x41e;eip=0x000ee6; 	T(AND(ax, 0x0F));	// 8492                  and     ax, 0Fh ;~ 041E:0EE6
cs=0x41e;eip=0x000ee9; 	X(OR(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8493                  or      [bp+var_2], ax ;~ 041E:0EE9
cs=0x41e;eip=0x000eec; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 8494                  push    [bp+var_2] ;~ 041E:0EEC
cs=0x41e;eip=0x000eef; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 8495                  mov     ax, [bp+var_4] ;~ 041E:0EEF
cs=0x41e;eip=0x000ef2; 	X(PUSH(ax));	// 8496                  push    ax ;~ 041E:0EF2
cs=0x41e;eip=0x000ef3; 	J(CALL(sub_12a31,0));	// 8497                  call    sub_12A31 ;~ 041E:0EF3
cs=0x41e;eip=0x000ef6; 	T(ADD(sp, 4));	// 8498                  add     sp, 4 ;~ 041E:0EF6
cs=0x41e;eip=0x000ef9; 	T(sp = bp;);	// 8499                  mov     sp, bp ;~ 041E:0EF9
cs=0x41e;eip=0x000efb; 	X(POP(bp));	// 8500                  pop     bp ;~ 041E:0EFB
cs=0x41e;eip=0x000efc; 	J(RETN(0));	// 8501                  retn ;~ 041E:0EFC

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_1367a: 	goto sub_1367a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_136be(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_136be:
    _begin:
#undef var_4
#define var_4 -4
	// 8513 var_4           = word ptr -4 ;~ 041E:0EFE
#undef var_2
#define var_2 -2
	// 8514 var_2           = word ptr -2 ;~ 041E:0EFE
cs=0x41e;eip=0x000efe; 	X(PUSH(bp));	// 8516                  push    bp ;~ 041E:0EFE
cs=0x41e;eip=0x000eff; 	T(bp = sp;);	// 8517                  mov     bp, sp ;~ 041E:0EFF
cs=0x41e;eip=0x000f01; 	T(SUB(sp, 4));	// 8518                  sub     sp, 4 ;~ 041E:0F01
cs=0x41e;eip=0x000f05; 	T(ax = word_127bc;);	// 8519                  mov     ax, word_127BC ;~ 041E:0F05
cs=0x41e;eip=0x000f08; 	T(ADD(ax, 0x20));	// 8520                  add     ax, 20h ; ' ' ;~ 041E:0F08
cs=0x41e;eip=0x000f0b; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 8521                  mov     [bp+var_4], ax ;~ 041E:0F0B
cs=0x41e;eip=0x000f0e; 	T(bx = word_127be;);	// 8522                  mov     bx, word_127BE ;~ 041E:0F0E
cs=0x41e;eip=0x000f12; 	T(MOV(al, *(raddr(ds,bx+0x0B))));	// 8523                  mov     al, [bx+0Bh] ;~ 041E:0F12
cs=0x41e;eip=0x000f15; 	T(AND(ax, 0x0FF));	// 8524                  and     ax, 0FFh ;~ 041E:0F15
cs=0x41e;eip=0x000f18; 	J(JZ(loc_136e0));	// 8525                  jz      short loc_136E0 ;~ 041E:0F18
cs=0x41e;eip=0x000f1a; 	T(ax = 0x80;);	// 8526                  mov     ax, 80h ;~ 041E:0F1A
cs=0x41e;eip=0x000f1d; 	J(JMP(loc_136e2));	// 8527                  jmp     short loc_136E2 ;~ 041E:0F1D
loc_136e0:
	// 4604 
cs=0x41e;eip=0x000f20; 	T(XOR(ax, ax));	// 8532                  xor     ax, ax ;~ 041E:0F20
loc_136e2:
	// 4605 
cs=0x41e;eip=0x000f22; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8535                  mov     [bp+var_2], ax ;~ 041E:0F22
cs=0x41e;eip=0x000f25; 	T(bx = word_127be;);	// 8536                  mov     bx, word_127BE ;~ 041E:0F25
cs=0x41e;eip=0x000f29; 	T(MOV(al, *(raddr(ds,bx+0x0C))));	// 8537                  mov     al, [bx+0Ch] ;~ 041E:0F29
cs=0x41e;eip=0x000f2c; 	T(AND(ax, 0x0FF));	// 8538                  and     ax, 0FFh ;~ 041E:0F2C
cs=0x41e;eip=0x000f2f; 	J(JZ(loc_136f6));	// 8539                  jz      short loc_136F6 ;~ 041E:0F2F
cs=0x41e;eip=0x000f31; 	T(ax = 0x40;);	// 8540                  mov     ax, 40h ; '@' ;~ 041E:0F31
cs=0x41e;eip=0x000f34; 	J(JMP(loc_136f8));	// 8541                  jmp     short loc_136F8 ;~ 041E:0F34
loc_136f6:
	// 4606 
cs=0x41e;eip=0x000f36; 	T(XOR(ax, ax));	// 8545                  xor     ax, ax ;~ 041E:0F36
loc_136f8:
	// 4607 
cs=0x41e;eip=0x000f38; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8548                  add     [bp+var_2], ax ;~ 041E:0F38
cs=0x41e;eip=0x000f3b; 	T(bx = word_127be;);	// 8549                  mov     bx, word_127BE ;~ 041E:0F3B
cs=0x41e;eip=0x000f3f; 	T(MOV(al, *(raddr(ds,bx+4))));	// 8550                  mov     al, [bx+4] ;~ 041E:0F3F
cs=0x41e;eip=0x000f42; 	T(AND(ax, 0x0FF));	// 8551                  and     ax, 0FFh ;~ 041E:0F42
cs=0x41e;eip=0x000f45; 	J(JZ(loc_1370c));	// 8552                  jz      short loc_1370C ;~ 041E:0F45
cs=0x41e;eip=0x000f47; 	T(ax = 0x20;);	// 8553                  mov     ax, 20h ; ' ' ;~ 041E:0F47
cs=0x41e;eip=0x000f4a; 	J(JMP(loc_1370e));	// 8554                  jmp     short loc_1370E ;~ 041E:0F4A
loc_1370c:
	// 4608 
cs=0x41e;eip=0x000f4c; 	T(XOR(ax, ax));	// 8558                  xor     ax, ax ;~ 041E:0F4C
loc_1370e:
	// 4609 
cs=0x41e;eip=0x000f4e; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8561                  add     [bp+var_2], ax ;~ 041E:0F4E
cs=0x41e;eip=0x000f51; 	T(bx = word_127be;);	// 8562                  mov     bx, word_127BE ;~ 041E:0F51
cs=0x41e;eip=0x000f55; 	T(MOV(al, *(raddr(ds,bx+5))));	// 8563                  mov     al, [bx+5] ;~ 041E:0F55
cs=0x41e;eip=0x000f58; 	T(AND(ax, 0x0FF));	// 8564                  and     ax, 0FFh ;~ 041E:0F58
cs=0x41e;eip=0x000f5b; 	J(JZ(loc_13722));	// 8565                  jz      short loc_13722 ;~ 041E:0F5B
cs=0x41e;eip=0x000f5d; 	T(ax = 0x10;);	// 8566                  mov     ax, 10h ;~ 041E:0F5D
cs=0x41e;eip=0x000f60; 	J(JMP(loc_13724));	// 8567                  jmp     short loc_13724 ;~ 041E:0F60
loc_13722:
	// 4610 
cs=0x41e;eip=0x000f62; 	T(XOR(ax, ax));	// 8571                  xor     ax, ax ;~ 041E:0F62
loc_13724:
	// 4611 
cs=0x41e;eip=0x000f64; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8574                  add     [bp+var_2], ax ;~ 041E:0F64
cs=0x41e;eip=0x000f67; 	T(bx = word_127be;);	// 8575                  mov     bx, word_127BE ;~ 041E:0F67
cs=0x41e;eip=0x000f6b; 	T(MOV(al, *(raddr(ds,bx+9))));	// 8576                  mov     al, [bx+9] ;~ 041E:0F6B
cs=0x41e;eip=0x000f6e; 	T(AND(ax, 0x0F));	// 8577                  and     ax, 0Fh ;~ 041E:0F6E
cs=0x41e;eip=0x000f71; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8578                  add     [bp+var_2], ax ;~ 041E:0F71
cs=0x41e;eip=0x000f74; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 8579                  push    [bp+var_2] ;~ 041E:0F74
cs=0x41e;eip=0x000f77; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 8580                  mov     ax, [bp+var_4] ;~ 041E:0F77
cs=0x41e;eip=0x000f7a; 	X(PUSH(ax));	// 8581                  push    ax ;~ 041E:0F7A
cs=0x41e;eip=0x000f7b; 	J(CALL(sub_12a31,0));	// 8582                  call    sub_12A31 ;~ 041E:0F7B
cs=0x41e;eip=0x000f7e; 	T(ADD(sp, 4));	// 8583                  add     sp, 4 ;~ 041E:0F7E
cs=0x41e;eip=0x000f81; 	T(sp = bp;);	// 8584                  mov     sp, bp ;~ 041E:0F81
cs=0x41e;eip=0x000f83; 	X(POP(bp));	// 8585                  pop     bp ;~ 041E:0F83
cs=0x41e;eip=0x000f84; 	J(RETN(0));	// 8586                  retn ;~ 041E:0F84

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_136e0: 	goto loc_136e0;
        case m2c::kloc_136e2: 	goto loc_136e2;
        case m2c::kloc_136f6: 	goto loc_136f6;
        case m2c::kloc_136f8: 	goto loc_136f8;
        case m2c::kloc_1370c: 	goto loc_1370c;
        case m2c::kloc_1370e: 	goto loc_1370e;
        case m2c::kloc_13722: 	goto loc_13722;
        case m2c::kloc_13724: 	goto loc_13724;
        case m2c::ksub_136be: 	goto sub_136be;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13746(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13746:
    _begin:
#undef var_2
#define var_2 -2
	// 8598 var_2           = word ptr -2 ;~ 041E:0F86
cs=0x41e;eip=0x000f86; 	X(PUSH(bp));	// 8600                  push    bp ;~ 041E:0F86
cs=0x41e;eip=0x000f87; 	T(bp = sp;);	// 8601                  mov     bp, sp ;~ 041E:0F87
cs=0x41e;eip=0x000f89; 	T(SUB(sp, 2));	// 8602                  sub     sp, 2 ;~ 041E:0F89
cs=0x41e;eip=0x000f8d; 	T(ax = word_127bc;);	// 8603                  mov     ax, word_127BC ;~ 041E:0F8D
cs=0x41e;eip=0x000f90; 	T(ADD(ax, 0x0E0));	// 8604                  add     ax, 0E0h ;~ 041E:0F90
cs=0x41e;eip=0x000f93; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8605                  mov     [bp+var_2], ax ;~ 041E:0F93
cs=0x41e;eip=0x000f96; 	T(bx = word_127be;);	// 8606                  mov     bx, word_127BE ;~ 041E:0F96
cs=0x41e;eip=0x000f9a; 	T(MOV(al, *(raddr(ds,bx+8))));	// 8607                  mov     al, [bx+8] ;~ 041E:0F9A
cs=0x41e;eip=0x000f9d; 	T(AND(ax, 3));	// 8608                  and     ax, 3 ;~ 041E:0F9D
cs=0x41e;eip=0x000fa0; 	X(PUSH(ax));	// 8609                  push    ax ;~ 041E:0FA0
cs=0x41e;eip=0x000fa1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 8610                  push    [bp+var_2] ;~ 041E:0FA1
cs=0x41e;eip=0x000fa4; 	J(CALL(sub_12a31,0));	// 8611                  call    sub_12A31 ;~ 041E:0FA4
cs=0x41e;eip=0x000fa7; 	T(ADD(sp, 4));	// 8612                  add     sp, 4 ;~ 041E:0FA7
cs=0x41e;eip=0x000faa; 	T(sp = bp;);	// 8613                  mov     sp, bp ;~ 041E:0FAA
cs=0x41e;eip=0x000fac; 	X(POP(bp));	// 8614                  pop     bp ;~ 041E:0FAC
cs=0x41e;eip=0x000fad; 	J(RETN(0));	// 8615                  retn ;~ 041E:0FAD

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_13746: 	goto sub_13746;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1376e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1376e:
    _begin:
cs=0x41e;eip=0x000fae; 	J(CALL(sub_13544,0));	// 8624                  call    sub_13544 ;~ 041E:0FAE
cs=0x41e;eip=0x000fb1; 	J(CALL(sub_1358e,0));	// 8625                  call    sub_1358E ;~ 041E:0FB1
cs=0x41e;eip=0x000fb4; 	J(CALL(sub_135aa,0));	// 8626                  call    sub_135AA ;~ 041E:0FB4
cs=0x41e;eip=0x000fb7; 	J(CALL(sub_135f0,0));	// 8627                  call    sub_135F0 ;~ 041E:0FB7
cs=0x41e;eip=0x000fba; 	J(CALL(sub_13638,0));	// 8628                  call    sub_13638 ;~ 041E:0FBA
cs=0x41e;eip=0x000fbd; 	J(CALL(sub_1367a,0));	// 8629                  call    sub_1367A ;~ 041E:0FBD
cs=0x41e;eip=0x000fc0; 	J(CALL(sub_136be,0));	// 8630                  call    sub_136BE ;~ 041E:0FC0
cs=0x41e;eip=0x000fc3; 	J(CALL(sub_13746,0));	// 8631                  call    sub_13746 ;~ 041E:0FC3
cs=0x41e;eip=0x000fc6; 	J(RETN(0));	// 8632                  retn ;~ 041E:0FC6

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_1376e: 	goto sub_1376e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13788(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13788:
    _begin:
#undef var_2
#define var_2 -2
	// 8645 var_2           = word ptr -2 ;~ 041E:0FC8
#undef arg_0
#define arg_0 4
	// 8646 arg_0           = byte ptr  4 ;~ 041E:0FC8
#undef arg_2
#define arg_2 6
	// 8647 arg_2           = byte ptr  6 ;~ 041E:0FC8
cs=0x41e;eip=0x000fc8; 	X(PUSH(bp));	// 8649                  push    bp ;~ 041E:0FC8
cs=0x41e;eip=0x000fc9; 	T(bp = sp;);	// 8650                  mov     bp, sp ;~ 041E:0FC9
cs=0x41e;eip=0x000fcb; 	T(SUB(sp, 2));	// 8651                  sub     sp, 2 ;~ 041E:0FCB
cs=0x41e;eip=0x000fcf; 	X(PUSH(si));	// 8652                  push    si ;~ 041E:0FCF
cs=0x41e;eip=0x000fd0; 	X(PUSH(di));	// 8653                  push    di ;~ 041E:0FD0
cs=0x41e;eip=0x000fd1; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8654                  mov     al, [bp+arg_0] ;~ 041E:0FD1
cs=0x41e;eip=0x000fd4; 	T(AND(ax, 0x0FF));	// 8655                  and     ax, 0FFh ;~ 041E:0FD4
cs=0x41e;eip=0x000fd7; 	X(PUSH(ax));	// 8656                  push    ax ;~ 041E:0FD7
cs=0x41e;eip=0x000fd8; 	J(CALL(sub_13052,0));	// 8657                  call    sub_13052 ;~ 041E:0FD8
cs=0x41e;eip=0x000fdb; 	T(ADD(sp, 2));	// 8658                  add     sp, 2 ;~ 041E:0FDB
cs=0x41e;eip=0x000fde; 	X(word_127ba = ax;);	// 8659                  mov     word_127BA, ax ;~ 041E:0FDE
cs=0x41e;eip=0x000fe1; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 8660                  mov     al, [bp+arg_2] ;~ 041E:0FE1
cs=0x41e;eip=0x000fe4; 	T(AND(ax, 0x0FF));	// 8661                  and     ax, 0FFh ;~ 041E:0FE4
cs=0x41e;eip=0x000fe7; 	T(cx = 0x2C;);	// 8662                  mov     cx, 2Ch ; ',' ;~ 041E:0FE7
cs=0x41e;eip=0x000fea; 	T(IMUL1_2(cx));	// 8663                  imul    cx ;~ 041E:0FEA
cs=0x41e;eip=0x000fec; 	T(cx = 0x2D6;);	// 8664                  mov     cx, 2D6h ;~ 041E:0FEC
cs=0x41e;eip=0x000fef; 	T(ADD(cx, ax));	// 8665                  add     cx, ax ;~ 041E:0FEF
cs=0x41e;eip=0x000ff1; 	X(word_127be = cx;);	// 8666                  mov     word_127BE, cx ;~ 041E:0FF1
cs=0x41e;eip=0x000ff5; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8667                  mov     al, [bp+arg_0] ;~ 041E:0FF5
cs=0x41e;eip=0x000ff8; 	T(AND(ax, 0x0FF));	// 8668                  and     ax, 0FFh ;~ 041E:0FF8
cs=0x41e;eip=0x000ffb; 	T(bx = ax;);	// 8669                  mov     bx, ax ;~ 041E:0FFB
cs=0x41e;eip=0x000ffd; 	T(SHL(bx, 1));	// 8670                  shl     bx, 1 ;~ 041E:0FFD
cs=0x41e;eip=0x000fff; 	T(MOV(al, *(raddr(ds,bx+0x2AE))));	// 8671                  mov     al, [bx+2AEh] ;~ 041E:0FFF
cs=0x41e;eip=0x001003; 	T(CBW);	// 8672                  cbw ;~ 041E:1003
cs=0x41e;eip=0x001004; 	T(bx = ax;);	// 8673                  mov     bx, ax ;~ 041E:1004
cs=0x41e;eip=0x001006; 	T(MOV(al, *(raddr(ds,bx+0x2C4))));	// 8674                  mov     al, [bx+2C4h] ;~ 041E:1006
cs=0x41e;eip=0x00100a; 	T(CBW);	// 8675                  cbw ;~ 041E:100A
cs=0x41e;eip=0x00100b; 	X(word_127bc = ax;);	// 8676                  mov     word_127BC, ax ;~ 041E:100B
cs=0x41e;eip=0x00100e; 	T(CMP(ax, 0x14));	// 8677                  cmp     ax, 14h ;~ 041E:100E
cs=0x41e;eip=0x001011; 	J(JC(loc_137d6));	// 8678                  jb      short loc_137D6 ;~ 041E:1011
cs=0x41e;eip=0x001013; 	J(JMP(loc_1385b));	// 8679                  jmp     loc_1385B ;~ 041E:1013
loc_137d6:
	// 4612 
cs=0x41e;eip=0x001016; 	J(CALL(sub_1376e,0));	// 8683                  call    sub_1376E ;~ 041E:1016
cs=0x41e;eip=0x001019; 	T(bx = word_127be;);	// 8684                  mov     bx, word_127BE ;~ 041E:1019
cs=0x41e;eip=0x00101d; 	T(MOV(al, *(raddr(ds,bx+0x0E))));	// 8685                  mov     al, [bx+0Eh] ;~ 041E:101D
cs=0x41e;eip=0x001020; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8686                  mov     [bp+var_2], ax ;~ 041E:1020
cs=0x41e;eip=0x001023; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8687                  mov     al, [bp+arg_0] ;~ 041E:1023
cs=0x41e;eip=0x001026; 	T(AND(ax, 0x0FF));	// 8688                  and     ax, 0FFh ;~ 041E:1026
cs=0x41e;eip=0x001029; 	T(bx = ax;);	// 8689                  mov     bx, ax ;~ 041E:1029
cs=0x41e;eip=0x00102b; 	T(SHL(bx, 1));	// 8690                  shl     bx, 1 ;~ 041E:102B
cs=0x41e;eip=0x00102d; 	T(SHL(bx, 1));	// 8691                  shl     bx, 1 ;~ 041E:102D
cs=0x41e;eip=0x00102f; 	T(SHL(bx, 1));	// 8692                  shl     bx, 1 ;~ 041E:102F
cs=0x41e;eip=0x001031; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 8693                  mov     ax, [bp+var_2] ;~ 041E:1031
cs=0x41e;eip=0x001034; 	X(MOV(*(raddr(ds,bx+0x0D32)), al));	// 8694                  mov     [bx+0D32h], al ;~ 041E:1034
cs=0x41e;eip=0x001038; 	T(bx = word_127be;);	// 8695                  mov     bx, word_127BE ;~ 041E:1038
cs=0x41e;eip=0x00103c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x10))));	// 8696                  mov     ax, [bx+10h] ;~ 041E:103C
cs=0x41e;eip=0x00103f; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8697                  mov     [bp+var_2], ax ;~ 041E:103F
cs=0x41e;eip=0x001042; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8698                  mov     al, [bp+arg_0] ;~ 041E:1042
cs=0x41e;eip=0x001045; 	T(AND(ax, 0x0FF));	// 8699                  and     ax, 0FFh ;~ 041E:1045
cs=0x41e;eip=0x001048; 	T(SHL(ax, 1));	// 8700                  shl     ax, 1 ;~ 041E:1048
cs=0x41e;eip=0x00104a; 	T(SHL(ax, 1));	// 8701                  shl     ax, 1 ;~ 041E:104A
cs=0x41e;eip=0x00104c; 	T(SHL(ax, 1));	// 8702                  shl     ax, 1 ;~ 041E:104C
cs=0x41e;eip=0x00104e; 	T(bx = 0x0D32;);	// 8703                  mov     bx, 0D32h ;~ 041E:104E
cs=0x41e;eip=0x001051; 	T(ADD(bx, ax));	// 8704                  add     bx, ax ;~ 041E:1051
cs=0x41e;eip=0x001053; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 8705                  mov     ax, [bp+var_2] ;~ 041E:1053
cs=0x41e;eip=0x001056; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 8706                  mov     [bx+2], ax ;~ 041E:1056
cs=0x41e;eip=0x001059; 	T(bx = word_127be;);	// 8707                  mov     bx, word_127BE ;~ 041E:1059
cs=0x41e;eip=0x00105d; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x12))));	// 8708                  mov     ax, [bx+12h] ;~ 041E:105D
cs=0x41e;eip=0x001060; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8709                  mov     [bp+var_2], ax ;~ 041E:1060
cs=0x41e;eip=0x001063; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8710                  mov     al, [bp+arg_0] ;~ 041E:1063
cs=0x41e;eip=0x001066; 	T(AND(ax, 0x0FF));	// 8711                  and     ax, 0FFh ;~ 041E:1066
cs=0x41e;eip=0x001069; 	T(SHL(ax, 1));	// 8712                  shl     ax, 1 ;~ 041E:1069
cs=0x41e;eip=0x00106b; 	T(SHL(ax, 1));	// 8713                  shl     ax, 1 ;~ 041E:106B
cs=0x41e;eip=0x00106d; 	T(SHL(ax, 1));	// 8714                  shl     ax, 1 ;~ 041E:106D
cs=0x41e;eip=0x00106f; 	T(bx = 0x0D32;);	// 8715                  mov     bx, 0D32h ;~ 041E:106F
cs=0x41e;eip=0x001072; 	T(ADD(bx, ax));	// 8716                  add     bx, ax ;~ 041E:1072
cs=0x41e;eip=0x001074; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 8717                  mov     ax, [bp+var_2] ;~ 041E:1074
cs=0x41e;eip=0x001077; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 8718                  mov     [bx+4], ax ;~ 041E:1077
cs=0x41e;eip=0x00107a; 	T(bx = word_127be;);	// 8719                  mov     bx, word_127BE ;~ 041E:107A
cs=0x41e;eip=0x00107e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x14))));	// 8720                  mov     ax, [bx+14h] ;~ 041E:107E
cs=0x41e;eip=0x001081; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8721                  mov     [bp+var_2], ax ;~ 041E:1081
cs=0x41e;eip=0x001084; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8722                  mov     al, [bp+arg_0] ;~ 041E:1084
cs=0x41e;eip=0x001087; 	T(AND(ax, 0x0FF));	// 8723                  and     ax, 0FFh ;~ 041E:1087
cs=0x41e;eip=0x00108a; 	T(SHL(ax, 1));	// 8724                  shl     ax, 1 ;~ 041E:108A
cs=0x41e;eip=0x00108c; 	T(SHL(ax, 1));	// 8725                  shl     ax, 1 ;~ 041E:108C
cs=0x41e;eip=0x00108e; 	T(SHL(ax, 1));	// 8726                  shl     ax, 1 ;~ 041E:108E
cs=0x41e;eip=0x001090; 	T(bx = 0x0D32;);	// 8727                  mov     bx, 0D32h ;~ 041E:1090
cs=0x41e;eip=0x001093; 	T(ADD(bx, ax));	// 8728                  add     bx, ax ;~ 041E:1093
cs=0x41e;eip=0x001095; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 8729                  mov     ax, [bp+var_2] ;~ 041E:1095
cs=0x41e;eip=0x001098; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 8730                  mov     [bx+6], ax ;~ 041E:1098
loc_1385b:
	// 4613 
cs=0x41e;eip=0x00109b; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 8733                  mov     al, [bp+arg_2] ;~ 041E:109B
cs=0x41e;eip=0x00109e; 	T(AND(ax, 0x0FF));	// 8734                  and     ax, 0FFh ;~ 041E:109E
cs=0x41e;eip=0x0010a1; 	T(cx = 0x2C;);	// 8735                  mov     cx, 2Ch ; ',' ;~ 041E:10A1
cs=0x41e;eip=0x0010a4; 	T(IMUL1_2(cx));	// 8736                  imul    cx ;~ 041E:10A4
cs=0x41e;eip=0x0010a6; 	T(cx = 0x2D6;);	// 8737                  mov     cx, 2D6h ;~ 041E:10A6
cs=0x41e;eip=0x0010a9; 	T(ADD(cx, ax));	// 8738                  add     cx, ax ;~ 041E:10A9
cs=0x41e;eip=0x0010ab; 	T(ax = 0x16;);	// 8739                  mov     ax, 16h ;~ 041E:10AB
cs=0x41e;eip=0x0010ae; 	T(ADD(cx, ax));	// 8740                  add     cx, ax ;~ 041E:10AE
cs=0x41e;eip=0x0010b0; 	X(word_127be = cx;);	// 8741                  mov     word_127BE, cx ;~ 041E:10B0
cs=0x41e;eip=0x0010b4; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8742                  mov     al, [bp+arg_0] ;~ 041E:10B4
cs=0x41e;eip=0x0010b7; 	T(AND(ax, 0x0FF));	// 8743                  and     ax, 0FFh ;~ 041E:10B7
cs=0x41e;eip=0x0010ba; 	T(SHL(ax, 1));	// 8744                  shl     ax, 1 ;~ 041E:10BA
cs=0x41e;eip=0x0010bc; 	T(bx = 0x2AE;);	// 8745                  mov     bx, 2AEh ;~ 041E:10BC
cs=0x41e;eip=0x0010bf; 	T(ADD(bx, ax));	// 8746                  add     bx, ax ;~ 041E:10BF
cs=0x41e;eip=0x0010c1; 	T(MOV(al, *(raddr(ds,bx+1))));	// 8747                  mov     al, [bx+1] ;~ 041E:10C1
cs=0x41e;eip=0x0010c4; 	T(CBW);	// 8748                  cbw ;~ 041E:10C4
cs=0x41e;eip=0x0010c5; 	T(bx = ax;);	// 8749                  mov     bx, ax ;~ 041E:10C5
cs=0x41e;eip=0x0010c7; 	T(MOV(al, *(raddr(ds,bx+0x2C4))));	// 8750                  mov     al, [bx+2C4h] ;~ 041E:10C7
cs=0x41e;eip=0x0010cb; 	T(CBW);	// 8751                  cbw ;~ 041E:10CB
cs=0x41e;eip=0x0010cc; 	X(word_127bc = ax;);	// 8752                  mov     word_127BC, ax ;~ 041E:10CC
cs=0x41e;eip=0x0010cf; 	T(CMP(ax, 0x14));	// 8753                  cmp     ax, 14h ;~ 041E:10CF
cs=0x41e;eip=0x0010d2; 	J(JNC(loc_13897));	// 8754                  jnb     short loc_13897 ;~ 041E:10D2
cs=0x41e;eip=0x0010d4; 	J(CALL(sub_1376e,0));	// 8755                  call    sub_1376E ;~ 041E:10D4
loc_13897:
	// 4614 
cs=0x41e;eip=0x0010d7; 	X(POP(di));	// 8758                  pop     di ;~ 041E:10D7
cs=0x41e;eip=0x0010d8; 	X(POP(si));	// 8759                  pop     si ;~ 041E:10D8
cs=0x41e;eip=0x0010d9; 	T(sp = bp;);	// 8760                  mov     sp, bp ;~ 041E:10D9
cs=0x41e;eip=0x0010db; 	X(POP(bp));	// 8761                  pop     bp ;~ 041E:10DB
cs=0x41e;eip=0x0010dc; 	J(RETN(0));	// 8762                  retn ;~ 041E:10DC

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_137d6: 	goto loc_137d6;
        case m2c::kloc_1385b: 	goto loc_1385b;
        case m2c::kloc_13897: 	goto loc_13897;
        case m2c::ksub_13788: 	goto sub_13788;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1389e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1389e:
    _begin:
#undef var_6
#define var_6 -6
	// 8775 var_6           = word ptr -6 ;~ 041E:10DE
#undef var_4
#define var_4 -4
	// 8776 var_4           = byte ptr -4 ;~ 041E:10DE
#undef var_2
#define var_2 -2
	// 8777 var_2           = word ptr -2 ;~ 041E:10DE
#undef arg_0
#define arg_0 4
	// 8778 arg_0           = word ptr  4 ;~ 041E:10DE
cs=0x41e;eip=0x0010de; 	X(PUSH(bp));	// 8780                  push    bp ;~ 041E:10DE
cs=0x41e;eip=0x0010df; 	T(bp = sp;);	// 8781                  mov     bp, sp ;~ 041E:10DF
cs=0x41e;eip=0x0010e1; 	T(SUB(sp, 6));	// 8782                  sub     sp, 6 ;~ 041E:10E1
cs=0x41e;eip=0x0010e5; 	X(PUSH(si));	// 8783                  push    si ;~ 041E:10E5
cs=0x41e;eip=0x0010e6; 	X(PUSH(di));	// 8784                  push    di ;~ 041E:10E6
cs=0x41e;eip=0x0010e7; 	X(MOV(*(raddr(ss,bp+var_4)), 0));	// 8785                  mov     [bp+var_4], 0 ;~ 041E:10E7
cs=0x41e;eip=0x0010eb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8786                  mov     bx, [bp+arg_0] ;~ 041E:10EB
cs=0x41e;eip=0x0010ee; 	T(MOV(al, *(raddr(ds,bx))));	// 8787                  mov     al, [bx] ;~ 041E:10EE
cs=0x41e;eip=0x0010f0; 	T(AND(ax, 0x0FF));	// 8788                  and     ax, 0FFh ;~ 041E:10F0
cs=0x41e;eip=0x0010f3; 	J(JNZ(loc_138b8));	// 8789                  jnz     short loc_138B8 ;~ 041E:10F3
cs=0x41e;eip=0x0010f5; 	J(JMP(loc_13b2c));	// 8790                  jmp     loc_13B2C ;~ 041E:10F5
loc_138b8:
	// 4615 
cs=0x41e;eip=0x0010f8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8794                  mov     bx, [bp+arg_0] ;~ 041E:10F8
cs=0x41e;eip=0x0010fb; 	T(MOV(al, *(raddr(ds,bx+7))));	// 8795                  mov     al, [bx+7] ;~ 041E:10FB
cs=0x41e;eip=0x0010fe; 	T(AND(ax, 0x0FF));	// 8796                  and     ax, 0FFh ;~ 041E:10FE
cs=0x41e;eip=0x001101; 	J(JZ(loc_138de));	// 8797                  jz      short loc_138DE ;~ 041E:1101
cs=0x41e;eip=0x001103; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8798                  mov     bx, [bp+arg_0] ;~ 041E:1103
cs=0x41e;eip=0x001106; 	X(DEC(*(raddr(ds,bx+7))));	// 8799                  dec     byte ptr [bx+7] ;~ 041E:1106
cs=0x41e;eip=0x001109; 	T(MOV(al, *(raddr(ds,bx+7))));	// 8800                  mov     al, [bx+7] ;~ 041E:1109
cs=0x41e;eip=0x00110c; 	T(AND(ax, 0x0FF));	// 8801                  and     ax, 0FFh ;~ 041E:110C
cs=0x41e;eip=0x00110f; 	J(JNZ(loc_138de));	// 8802                  jnz     short loc_138DE ;~ 041E:110F
cs=0x41e;eip=0x001111; 	T(al = byte_1265e;);	// 8803                  mov     al, byte_1265E ;~ 041E:1111
cs=0x41e;eip=0x001114; 	T(AND(ax, 0x0FF));	// 8804                  and     ax, 0FFh ;~ 041E:1114
cs=0x41e;eip=0x001117; 	X(PUSH(ax));	// 8805                  push    ax ;~ 041E:1117
cs=0x41e;eip=0x001118; 	J(CALL(sub_1331c,0));	// 8806                  call    sub_1331C ;~ 041E:1118
cs=0x41e;eip=0x00111b; 	T(ADD(sp, 2));	// 8807                  add     sp, 2 ;~ 041E:111B
loc_138de:
	// 4616 
cs=0x41e;eip=0x00111e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8811                  mov     bx, [bp+arg_0] ;~ 041E:111E
cs=0x41e;eip=0x001121; 	X(DEC(*(raddr(ds,bx))));	// 8812                  dec     byte ptr [bx] ;~ 041E:1121
cs=0x41e;eip=0x001123; 	T(MOV(al, *(raddr(ds,bx))));	// 8813                  mov     al, [bx] ;~ 041E:1123
cs=0x41e;eip=0x001125; 	T(AND(ax, 0x0FF));	// 8814                  and     ax, 0FFh ;~ 041E:1125
cs=0x41e;eip=0x001128; 	J(JLE(loc_138ed));	// 8815                  jle     short loc_138ED ;~ 041E:1128
cs=0x41e;eip=0x00112a; 	J(JMP(loc_13b2c));	// 8816                  jmp     loc_13B2C ;~ 041E:112A
loc_138ed:
	// 4617 
cs=0x41e;eip=0x00112d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8821                  mov     bx, [bp+arg_0] ;~ 041E:112D
cs=0x41e;eip=0x001130; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0C))));	// 8822                  mov     ax, [bx+0Ch] ;~ 041E:1130
cs=0x41e;eip=0x001133; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8823                  mov     bx, [bp+arg_0] ;~ 041E:1133
cs=0x41e;eip=0x001136; 	T(MOV(cx, *(dw*)(raddr(ds,bx+0x0A))));	// 8824                  mov     cx, [bx+0Ah] ;~ 041E:1136
cs=0x41e;eip=0x001139; 	T(ADD(cx, ax));	// 8825                  add     cx, ax ;~ 041E:1139
cs=0x41e;eip=0x00113b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), cx));	// 8826                  mov     [bp+var_2], cx ;~ 041E:113B
cs=0x41e;eip=0x00113e; 	T(bx = cx;);	// 8827                  mov     bx, cx ;~ 041E:113E
cs=0x41e;eip=0x001140; 	T(MOV(al, *(raddr(ds,bx))));	// 8828                  mov     al, [bx] ;~ 041E:1140
cs=0x41e;eip=0x001142; 	T(CBW);	// 8829                  cbw ;~ 041E:1142
cs=0x41e;eip=0x001143; 	T(AND(ax, 0x80));	// 8830                  and     ax, 80h ;~ 041E:1143
cs=0x41e;eip=0x001146; 	J(JNZ(loc_1390b));	// 8831                  jnz     short loc_1390B ;~ 041E:1146
cs=0x41e;eip=0x001148; 	J(JMP(loc_13a88));	// 8832                  jmp     loc_13A88 ;~ 041E:1148
loc_1390b:
	// 4618 
cs=0x41e;eip=0x00114b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 8836                  mov     bx, [bp+var_2] ;~ 041E:114B
cs=0x41e;eip=0x00114e; 	T(MOV(al, *(raddr(ds,bx))));	// 8837                  mov     al, [bx] ;~ 041E:114E
cs=0x41e;eip=0x001150; 	T(CBW);	// 8838                  cbw ;~ 041E:1150
cs=0x41e;eip=0x001151; 	J(JMP(loc_13a60));	// 8839                  jmp     loc_13A60 ;~ 041E:1151
ret_41e_1154:
	// 4619 
cs=0x41e;eip=0x001154; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8841                  mov     bx, [bp+arg_0] ;~ 041E:1154
cs=0x41e;eip=0x001157; 	T(CMP(*(dw*)(raddr(ds,bx+0x10)), 0));	// 8842                  cmp     word ptr [bx+10h], 0 ;~ 041E:1157
cs=0x41e;eip=0x00115b; 	J(JNZ(loc_1393a));	// 8843                  jnz     short loc_1393A ;~ 041E:115B
cs=0x41e;eip=0x00115d; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 8844                  inc     [bp+var_2] ;~ 041E:115D
cs=0x41e;eip=0x001160; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 8845                  mov     bx, [bp+var_2] ;~ 041E:1160
cs=0x41e;eip=0x001163; 	T(MOV(al, *(raddr(ds,bx))));	// 8846                  mov     al, [bx] ;~ 041E:1163
cs=0x41e;eip=0x001165; 	T(CBW);	// 8847                  cbw ;~ 041E:1165
cs=0x41e;eip=0x001166; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8848                  mov     bx, [bp+arg_0] ;~ 041E:1166
cs=0x41e;eip=0x001169; 	X(MOV(*(dw*)(raddr(ds,bx+0x10)), ax));	// 8849                  mov     [bx+10h], ax ;~ 041E:1169
cs=0x41e;eip=0x00116c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8850                  mov     bx, [bp+arg_0] ;~ 041E:116C
cs=0x41e;eip=0x00116f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0E))));	// 8851                  mov     ax, [bx+0Eh] ;~ 041E:116F
cs=0x41e;eip=0x001172; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8852                  mov     bx, [bp+arg_0] ;~ 041E:1172
cs=0x41e;eip=0x001175; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), ax));	// 8853                  mov     [bx+0Ch], ax ;~ 041E:1175
cs=0x41e;eip=0x001178; 	J(JMP(loc_1396a));	// 8854                  jmp     short loc_1396A ;~ 041E:1178
loc_1393a:
	// 4620 
cs=0x41e;eip=0x00117a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8858                  mov     bx, [bp+arg_0] ;~ 041E:117A
cs=0x41e;eip=0x00117d; 	X(DEC(*(dw*)(raddr(ds,bx+0x10))));	// 8859                  dec     word ptr [bx+10h] ;~ 041E:117D
cs=0x41e;eip=0x001180; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8860                  mov     bx, [bp+arg_0] ;~ 041E:1180
cs=0x41e;eip=0x001183; 	T(CMP(*(dw*)(raddr(ds,bx+0x10)), 0));	// 8861                  cmp     word ptr [bx+10h], 0 ;~ 041E:1183
cs=0x41e;eip=0x001187; 	J(JNZ(loc_1395e));	// 8862                  jnz     short loc_1395E ;~ 041E:1187
cs=0x41e;eip=0x001189; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8863                  mov     bx, [bp+arg_0] ;~ 041E:1189
cs=0x41e;eip=0x00118c; 	X(ADD(*(dw*)(raddr(ds,bx+0x0C)), 2));	// 8864                  add     word ptr [bx+0Ch], 2 ;~ 041E:118C
cs=0x41e;eip=0x001190; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8865                  mov     bx, [bp+arg_0] ;~ 041E:1190
cs=0x41e;eip=0x001193; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0C))));	// 8866                  mov     ax, [bx+0Ch] ;~ 041E:1193
cs=0x41e;eip=0x001196; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8867                  mov     bx, [bp+arg_0] ;~ 041E:1196
cs=0x41e;eip=0x001199; 	X(MOV(*(dw*)(raddr(ds,bx+0x0E)), ax));	// 8868                  mov     [bx+0Eh], ax ;~ 041E:1199
cs=0x41e;eip=0x00119c; 	J(JMP(loc_1396a));	// 8869                  jmp     short loc_1396A ;~ 041E:119C
loc_1395e:
	// 4621 
cs=0x41e;eip=0x00119e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8873                  mov     bx, [bp+arg_0] ;~ 041E:119E
cs=0x41e;eip=0x0011a1; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0E))));	// 8874                  mov     ax, [bx+0Eh] ;~ 041E:11A1
cs=0x41e;eip=0x0011a4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8875                  mov     bx, [bp+arg_0] ;~ 041E:11A4
cs=0x41e;eip=0x0011a7; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), ax));	// 8876                  mov     [bx+0Ch], ax ;~ 041E:11A7
loc_1396a:
	// 4622 
cs=0x41e;eip=0x0011aa; 	J(JMP(def_13a6f));	// 8880                  jmp     def_13A6F       ; jumptable 00013A6F default case ;~ 041E:11AA
loc_1396e:
	// 4623 
cs=0x41e;eip=0x0011ae; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8886                  mov     bx, [bp+arg_0]  ; jumptable 00013A6F case -2 ;~ 041E:11AE
cs=0x41e;eip=0x0011b1; 	X(INC(*(dw*)(raddr(ds,bx+0x0C))));	// 8887                  inc     word ptr [bx+0Ch] ;~ 041E:11B1
cs=0x41e;eip=0x0011b4; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0C))));	// 8888                  mov     ax, [bx+0Ch] ;~ 041E:11B4
cs=0x41e;eip=0x0011b7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8889                  mov     bx, [bp+arg_0] ;~ 041E:11B7
cs=0x41e;eip=0x0011ba; 	X(MOV(*(dw*)(raddr(ds,bx+0x0E)), ax));	// 8890                  mov     [bx+0Eh], ax ;~ 041E:11BA
cs=0x41e;eip=0x0011bd; 	J(JMP(def_13a6f));	// 8891                  jmp     def_13A6F       ; jumptable 00013A6F default case ;~ 041E:11BD
loc_13980:
	// 4624 
cs=0x41e;eip=0x0011c0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8896                  mov     bx, [bp+arg_0]  ; jumptable 00013A6F case -3 ;~ 041E:11C0
cs=0x41e;eip=0x0011c3; 	T(CMP(*(dw*)(raddr(ds,bx+0x12)), 0));	// 8897                  cmp     word ptr [bx+12h], 0 ;~ 041E:11C3
cs=0x41e;eip=0x0011c7; 	J(JNZ(loc_13994));	// 8898                  jnz     short loc_13994 ;~ 041E:11C7
cs=0x41e;eip=0x0011c9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8899                  mov     bx, [bp+arg_0] ;~ 041E:11C9
cs=0x41e;eip=0x0011cc; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), 0));	// 8900                  mov     word ptr [bx+0Ch], 0 ;~ 041E:11CC
cs=0x41e;eip=0x0011d1; 	J(JMP(loc_1399a));	// 8901                  jmp     short loc_1399A ;~ 041E:11D1
loc_13994:
	// 4625 
cs=0x41e;eip=0x0011d4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8906                  mov     bx, [bp+arg_0] ;~ 041E:11D4
cs=0x41e;eip=0x0011d7; 	J(CALL(__dispatch_call,*(dw*)(raddr(ds,bx+0x12))));	// 8907                  call    word ptr [bx+12h] ;~ 041E:11D7
loc_1399a:
	// 4626 
cs=0x41e;eip=0x0011da; 	J(JMP(def_13a6f));	// 8910                  jmp     def_13A6F       ; jumptable 00013A6F default case ;~ 041E:11DA
loc_1399e:
	// 4627 
cs=0x41e;eip=0x0011de; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 8916                  inc     [bp+var_2]      ; jumptable 00013A6F case -4 ;~ 041E:11DE
cs=0x41e;eip=0x0011e1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 8917                  mov     bx, [bp+var_2] ;~ 041E:11E1
cs=0x41e;eip=0x0011e4; 	T(MOV(al, *(raddr(ds,bx))));	// 8918                  mov     al, [bx] ;~ 041E:11E4
cs=0x41e;eip=0x0011e6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8919                  mov     bx, [bp+arg_0] ;~ 041E:11E6
cs=0x41e;eip=0x0011e9; 	X(MOV(*(raddr(ds,bx+4)), al));	// 8920                  mov     [bx+4], al ;~ 041E:11E9
cs=0x41e;eip=0x0011ec; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8921                  mov     bx, [bp+arg_0] ;~ 041E:11EC
cs=0x41e;eip=0x0011ef; 	X(ADD(*(dw*)(raddr(ds,bx+0x0C)), 2));	// 8922                  add     word ptr [bx+0Ch], 2 ;~ 041E:11EF
cs=0x41e;eip=0x0011f3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8923                  mov     bx, [bp+arg_0] ;~ 041E:11F3
cs=0x41e;eip=0x0011f6; 	T(MOV(al, *(raddr(ds,bx+4))));	// 8924                  mov     al, [bx+4] ;~ 041E:11F6
cs=0x41e;eip=0x0011f9; 	T(AND(ax, 0x0FF));	// 8925                  and     ax, 0FFh ;~ 041E:11F9
cs=0x41e;eip=0x0011fc; 	X(PUSH(ax));	// 8926                  push    ax ;~ 041E:11FC
cs=0x41e;eip=0x0011fd; 	T(al = byte_1265e;);	// 8927                  mov     al, byte_1265E ;~ 041E:11FD
cs=0x41e;eip=0x001200; 	T(AND(ax, 0x0FF));	// 8928                  and     ax, 0FFh ;~ 041E:1200
cs=0x41e;eip=0x001203; 	X(PUSH(ax));	// 8929                  push    ax ;~ 041E:1203
cs=0x41e;eip=0x001204; 	J(CALL(sub_13788,0));	// 8930                  call    sub_13788 ;~ 041E:1204
cs=0x41e;eip=0x001207; 	T(ADD(sp, 4));	// 8931                  add     sp, 4 ;~ 041E:1207
cs=0x41e;eip=0x00120a; 	J(JMP(def_13a6f));	// 8932                  jmp     def_13A6F       ; jumptable 00013A6F default case ;~ 041E:120A
loc_139ce:
	// 4628 
cs=0x41e;eip=0x00120e; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 8938                  inc     [bp+var_2]      ; jumptable 00013A6F case -5 ;~ 041E:120E
cs=0x41e;eip=0x001211; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 8939                  mov     bx, [bp+var_2] ;~ 041E:1211
cs=0x41e;eip=0x001214; 	T(MOV(al, *(raddr(ds,bx))));	// 8940                  mov     al, [bx] ;~ 041E:1214
cs=0x41e;eip=0x001216; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8941                  mov     bx, [bp+arg_0] ;~ 041E:1216
cs=0x41e;eip=0x001219; 	X(MOV(*(raddr(ds,bx+6)), al));	// 8942                  mov     [bx+6], al ;~ 041E:1219
cs=0x41e;eip=0x00121c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8943                  mov     bx, [bp+arg_0] ;~ 041E:121C
cs=0x41e;eip=0x00121f; 	X(ADD(*(dw*)(raddr(ds,bx+0x0C)), 2));	// 8944                  add     word ptr [bx+0Ch], 2 ;~ 041E:121F
cs=0x41e;eip=0x001223; 	J(JMP(def_13a6f));	// 8945                  jmp     def_13A6F       ; jumptable 00013A6F default case ;~ 041E:1223
loc_139e6:
	// 4629 
cs=0x41e;eip=0x001226; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 8950                  inc     [bp+var_2]      ; jumptable 00013A6F case -6 ;~ 041E:1226
cs=0x41e;eip=0x001229; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 8951                  mov     bx, [bp+var_2] ;~ 041E:1229
cs=0x41e;eip=0x00122c; 	T(MOV(al, *(raddr(ds,bx))));	// 8952                  mov     al, [bx] ;~ 041E:122C
cs=0x41e;eip=0x00122e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8953                  mov     bx, [bp+arg_0] ;~ 041E:122E
cs=0x41e;eip=0x001231; 	X(MOV(*(raddr(ds,bx+1)), al));	// 8954                  mov     [bx+1], al ;~ 041E:1231
cs=0x41e;eip=0x001234; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8955                  mov     bx, [bp+arg_0] ;~ 041E:1234
cs=0x41e;eip=0x001237; 	X(ADD(*(dw*)(raddr(ds,bx+0x0C)), 2));	// 8956                  add     word ptr [bx+0Ch], 2 ;~ 041E:1237
cs=0x41e;eip=0x00123b; 	J(JMP(def_13a6f));	// 8957                  jmp     def_13A6F       ; jumptable 00013A6F default case ;~ 041E:123B
loc_139fe:
	// 4630 
cs=0x41e;eip=0x00123e; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 8962                  inc     [bp+var_2]      ; jumptable 00013A6F case -7 ;~ 041E:123E
cs=0x41e;eip=0x001241; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 8963                  mov     bx, [bp+var_2] ;~ 041E:1241
cs=0x41e;eip=0x001244; 	T(MOV(al, *(raddr(ds,bx))));	// 8964                  mov     al, [bx] ;~ 041E:1244
cs=0x41e;eip=0x001246; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8965                  mov     bx, [bp+arg_0] ;~ 041E:1246
cs=0x41e;eip=0x001249; 	X(MOV(*(raddr(ds,bx+5)), al));	// 8966                  mov     [bx+5], al ;~ 041E:1249
cs=0x41e;eip=0x00124c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8967                  mov     bx, [bp+arg_0] ;~ 041E:124C
cs=0x41e;eip=0x00124f; 	X(ADD(*(dw*)(raddr(ds,bx+0x0C)), 2));	// 8968                  add     word ptr [bx+0Ch], 2 ;~ 041E:124F
cs=0x41e;eip=0x001253; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8969                  mov     bx, [bp+arg_0] ;~ 041E:1253
cs=0x41e;eip=0x001256; 	T(MOV(al, *(raddr(ds,bx+5))));	// 8970                  mov     al, [bx+5] ;~ 041E:1256
cs=0x41e;eip=0x001259; 	T(AND(ax, 0x0FF));	// 8971                  and     ax, 0FFh ;~ 041E:1259
cs=0x41e;eip=0x00125c; 	X(PUSH(ax));	// 8972                  push    ax ;~ 041E:125C
cs=0x41e;eip=0x00125d; 	T(al = byte_1265e;);	// 8973                  mov     al, byte_1265E ;~ 041E:125D
cs=0x41e;eip=0x001260; 	T(AND(ax, 0x0FF));	// 8974                  and     ax, 0FFh ;~ 041E:1260
cs=0x41e;eip=0x001263; 	X(PUSH(ax));	// 8975                  push    ax ;~ 041E:1263
cs=0x41e;eip=0x001264; 	J(CALL(sub_1307e,0));	// 8976                  call    sub_1307E ;~ 041E:1264
cs=0x41e;eip=0x001267; 	T(ADD(sp, 4));	// 8977                  add     sp, 4 ;~ 041E:1267
cs=0x41e;eip=0x00126a; 	J(JMP(def_13a6f));	// 8978                  jmp     def_13A6F       ; jumptable 00013A6F default case ;~ 041E:126A
loc_13a2e:
	// 4631 
cs=0x41e;eip=0x00126e; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 8984                  inc     [bp+var_2]      ; jumptable 00013A6F case -8 ;~ 041E:126E
cs=0x41e;eip=0x001271; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 8985                  mov     bx, [bp+var_2] ;~ 041E:1271
cs=0x41e;eip=0x001274; 	T(MOV(al, *(raddr(ds,bx))));	// 8986                  mov     al, [bx] ;~ 041E:1274
cs=0x41e;eip=0x001276; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8987                  mov     bx, [bp+arg_0] ;~ 041E:1276
cs=0x41e;eip=0x001279; 	X(MOV(*(raddr(ds,bx+9)), al));	// 8988                  mov     [bx+9], al ;~ 041E:1279
cs=0x41e;eip=0x00127c; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 8989                  inc     [bp+var_2] ;~ 041E:127C
cs=0x41e;eip=0x00127f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 8990                  mov     bx, [bp+var_2] ;~ 041E:127F
cs=0x41e;eip=0x001282; 	T(MOV(al, *(raddr(ds,bx))));	// 8991                  mov     al, [bx] ;~ 041E:1282
cs=0x41e;eip=0x001284; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8992                  mov     bx, [bp+arg_0] ;~ 041E:1284
cs=0x41e;eip=0x001287; 	X(MOV(*(raddr(ds,bx+2)), al));	// 8993                  mov     [bx+2], al ;~ 041E:1287
cs=0x41e;eip=0x00128a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8994                  mov     bx, [bp+arg_0] ;~ 041E:128A
cs=0x41e;eip=0x00128d; 	X(MOV(*(raddr(ds,bx+8)), 1));	// 8995                  mov     byte ptr [bx+8], 1 ;~ 041E:128D
cs=0x41e;eip=0x001291; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8996                  mov     bx, [bp+arg_0] ;~ 041E:1291
cs=0x41e;eip=0x001294; 	X(ADD(*(dw*)(raddr(ds,bx+0x0C)), 3));	// 8997                  add     word ptr [bx+0Ch], 3 ;~ 041E:1294
cs=0x41e;eip=0x001298; 	J(JMP(def_13a6f));	// 8998                  jmp     def_13A6F       ; jumptable 00013A6F default case ;~ 041E:1298
ret_41e_129c:
	// 4632 
cs=0x41e;eip=0x00129c; 	J(JMP(def_13a6f));	// 9001                  jmp     def_13A6F       ; jumptable 00013A6F default case ;~ 041E:129C
loc_13a60:
	// 4633 
cs=0x41e;eip=0x0012a0; 	T(SUB(ax, 0x0FFF8));	// 9006                  sub     ax, 0FFF8h      ; switch 7 cases ;~ 041E:12A0
cs=0x41e;eip=0x0012a3; 	T(CMP(ax, 7));	// 9007                  cmp     ax, 7 ;~ 041E:12A3
cs=0x41e;eip=0x0012a6; 	J(JBE(loc_13a6b));	// 9008                  jbe     short loc_13A6B ;~ 041E:12A6
cs=0x41e;eip=0x0012a8; 	J(JMP(def_13a6f));	// 9009                  jmp     def_13A6F       ; jumptable 00013A6F default case ;~ 041E:12A8
loc_13a6b:
	// 4634 
cs=0x41e;eip=0x0012ab; 	T(SHL(ax, 1));	// 9013                  shl     ax, 1 ;~ 041E:12AB
cs=0x41e;eip=0x0012ad; 	T(bx = ax;);	// 9014                  mov     bx, ax ;~ 041E:12AD
cs=0x41e;eip=0x0012af; __disp=*(dw*)(((db*)&jpt_13a6f)+bx);
	J(return __dispatch_call(__disp, _state););	// 9015                  jmp     cs:jpt_13A6F[bx] ; switch jump ;~ 041E:12AF
def_13a6f:
	// 4635 
cs=0x41e;eip=0x0012c4; 	J(JMP(loc_138ed));	// 9028                  jmp     loc_138ED       ; jumptable 00013A6F default case ;~ 041E:12C4
loc_13a88:
	// 4636 
cs=0x41e;eip=0x0012c8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9033                  mov     bx, [bp+arg_0] ;~ 041E:12C8
cs=0x41e;eip=0x0012cb; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0C))));	// 9034                  mov     ax, [bx+0Ch] ;~ 041E:12CB
cs=0x41e;eip=0x0012ce; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9035                  mov     bx, [bp+arg_0] ;~ 041E:12CE
cs=0x41e;eip=0x0012d1; 	T(MOV(cx, *(dw*)(raddr(ds,bx+0x0A))));	// 9036                  mov     cx, [bx+0Ah] ;~ 041E:12D1
cs=0x41e;eip=0x0012d4; 	T(ADD(cx, ax));	// 9037                  add     cx, ax ;~ 041E:12D4
cs=0x41e;eip=0x0012d6; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), cx));	// 9038                  mov     [bp+var_2], cx ;~ 041E:12D6
cs=0x41e;eip=0x0012d9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 9039                  mov     bx, [bp+var_2] ;~ 041E:12D9
cs=0x41e;eip=0x0012dc; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 9040                  inc     [bp+var_2] ;~ 041E:12DC
cs=0x41e;eip=0x0012df; 	T(MOV(al, *(raddr(ds,bx))));	// 9041                  mov     al, [bx] ;~ 041E:12DF
cs=0x41e;eip=0x0012e1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9042                  mov     bx, [bp+arg_0] ;~ 041E:12E1
cs=0x41e;eip=0x0012e4; 	X(MOV(*(raddr(ds,bx+3)), al));	// 9043                  mov     [bx+3], al ;~ 041E:12E4
cs=0x41e;eip=0x0012e7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 9044                  mov     bx, [bp+var_2] ;~ 041E:12E7
cs=0x41e;eip=0x0012ea; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 9045                  inc     [bp+var_2] ;~ 041E:12EA
cs=0x41e;eip=0x0012ed; 	T(MOV(al, *(raddr(ds,bx))));	// 9046                  mov     al, [bx] ;~ 041E:12ED
cs=0x41e;eip=0x0012ef; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9047                  mov     bx, [bp+arg_0] ;~ 041E:12EF
cs=0x41e;eip=0x0012f2; 	X(MOV(*(raddr(ds,bx)), al));	// 9048                  mov     [bx], al ;~ 041E:12F2
cs=0x41e;eip=0x0012f4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9049                  mov     bx, [bp+arg_0] ;~ 041E:12F4
cs=0x41e;eip=0x0012f7; 	X(ADD(*(dw*)(raddr(ds,bx+0x0C)), 2));	// 9050                  add     word ptr [bx+0Ch], 2 ;~ 041E:12F7
cs=0x41e;eip=0x0012fb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9051                  mov     bx, [bp+arg_0] ;~ 041E:12FB
cs=0x41e;eip=0x0012fe; 	T(MOV(al, *(raddr(ds,bx+3))));	// 9052                  mov     al, [bx+3] ;~ 041E:12FE
cs=0x41e;eip=0x001301; 	T(AND(ax, 0x0FF));	// 9053                  and     ax, 0FFh ;~ 041E:1301
cs=0x41e;eip=0x001304; 	J(JZ(loc_13ad0));	// 9054                  jz      short loc_13AD0 ;~ 041E:1304
cs=0x41e;eip=0x001306; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9055                  mov     bx, [bp+arg_0] ;~ 041E:1306
cs=0x41e;eip=0x001309; 	T(MOV(al, *(raddr(ds,bx))));	// 9056                  mov     al, [bx] ;~ 041E:1309
cs=0x41e;eip=0x00130b; 	T(AND(ax, 0x0FF));	// 9057                  and     ax, 0FFh ;~ 041E:130B
cs=0x41e;eip=0x00130e; 	J(JNZ(loc_13ae0));	// 9058                  jnz     short loc_13AE0 ;~ 041E:130E
loc_13ad0:
	// 4637 
cs=0x41e;eip=0x001310; 	T(al = byte_1265e;);	// 9061                  mov     al, byte_1265E ;~ 041E:1310
cs=0x41e;eip=0x001313; 	T(AND(ax, 0x0FF));	// 9062                  and     ax, 0FFh ;~ 041E:1313
cs=0x41e;eip=0x001316; 	X(PUSH(ax));	// 9063                  push    ax ;~ 041E:1316
cs=0x41e;eip=0x001317; 	J(CALL(sub_1331c,0));	// 9064                  call    sub_1331C ;~ 041E:1317
cs=0x41e;eip=0x00131a; 	T(ADD(sp, 2));	// 9065                  add     sp, 2 ;~ 041E:131A
cs=0x41e;eip=0x00131d; 	J(JMP(loc_13b2c));	// 9066                  jmp     loc_13B2C ;~ 041E:131D
loc_13ae0:
	// 4638 
cs=0x41e;eip=0x001320; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9070                  mov     bx, [bp+arg_0] ;~ 041E:1320
cs=0x41e;eip=0x001323; 	T(MOV(al, *(raddr(ds,bx+7))));	// 9071                  mov     al, [bx+7] ;~ 041E:1323
cs=0x41e;eip=0x001326; 	T(AND(ax, 0x0FF));	// 9072                  and     ax, 0FFh ;~ 041E:1326
cs=0x41e;eip=0x001329; 	X(PUSH(ax));	// 9073                  push    ax ;~ 041E:1329
cs=0x41e;eip=0x00132a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9074                  mov     bx, [bp+arg_0] ;~ 041E:132A
cs=0x41e;eip=0x00132d; 	T(MOV(al, *(raddr(ds,bx+5))));	// 9075                  mov     al, [bx+5] ;~ 041E:132D
cs=0x41e;eip=0x001330; 	T(AND(ax, 0x0FF));	// 9076                  and     ax, 0FFh ;~ 041E:1330
cs=0x41e;eip=0x001333; 	X(PUSH(ax));	// 9077                  push    ax ;~ 041E:1333
cs=0x41e;eip=0x001334; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9078                  mov     bx, [bp+arg_0] ;~ 041E:1334
cs=0x41e;eip=0x001337; 	T(MOV(al, *(raddr(ds,bx+3))));	// 9079                  mov     al, [bx+3] ;~ 041E:1337
cs=0x41e;eip=0x00133a; 	T(AND(ax, 0x0FF));	// 9080                  and     ax, 0FFh ;~ 041E:133A
cs=0x41e;eip=0x00133d; 	X(PUSH(ax));	// 9081                  push    ax ;~ 041E:133D
cs=0x41e;eip=0x00133e; 	T(al = byte_1265e;);	// 9082                  mov     al, byte_1265E ;~ 041E:133E
cs=0x41e;eip=0x001341; 	T(AND(ax, 0x0FF));	// 9083                  and     ax, 0FFh ;~ 041E:1341
cs=0x41e;eip=0x001344; 	X(PUSH(ax));	// 9084                  push    ax ;~ 041E:1344
cs=0x41e;eip=0x001345; 	J(CALL(sub_13398,0));	// 9085                  call    sub_13398 ;~ 041E:1345
cs=0x41e;eip=0x001348; 	T(ADD(sp, 8));	// 9086                  add     sp, 8 ;~ 041E:1348
cs=0x41e;eip=0x00134b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9087                  mov     bx, [bp+arg_0] ;~ 041E:134B
cs=0x41e;eip=0x00134e; 	T(MOV(al, *(raddr(ds,bx))));	// 9088                  mov     al, [bx] ;~ 041E:134E
cs=0x41e;eip=0x001350; 	T(AND(ax, 0x0FF));	// 9089                  and     ax, 0FFh ;~ 041E:1350
cs=0x41e;eip=0x001353; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9090                  mov     bx, [bp+arg_0] ;~ 041E:1353
cs=0x41e;eip=0x001356; 	T(MOV(cl, *(raddr(ds,bx+6))));	// 9091                  mov     cl, [bx+6] ;~ 041E:1356
cs=0x41e;eip=0x001359; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 9092                  mov     [bp+var_6], ax ;~ 041E:1359
cs=0x41e;eip=0x00135c; 	T(ax = cx;);	// 9093                  mov     ax, cx ;~ 041E:135C
cs=0x41e;eip=0x00135e; 	T(AND(ax, 0x0FF));	// 9094                  and     ax, 0FFh ;~ 041E:135E
cs=0x41e;eip=0x001361; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_6))));	// 9095                  mov     cx, [bp+var_6] ;~ 041E:1361
cs=0x41e;eip=0x001364; 	T(SUB(cx, ax));	// 9096                  sub     cx, ax ;~ 041E:1364
cs=0x41e;eip=0x001366; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9097                  mov     bx, [bp+arg_0] ;~ 041E:1366
cs=0x41e;eip=0x001369; 	X(MOV(*(raddr(ds,bx+7)), cl));	// 9098                  mov     [bx+7], cl ;~ 041E:1369
loc_13b2c:
	// 4639 
cs=0x41e;eip=0x00136c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9102                  mov     bx, [bp+arg_0] ;~ 041E:136C
cs=0x41e;eip=0x00136f; 	T(CMP(*(raddr(ds,bx+1)), 0));	// 9103                  cmp     byte ptr [bx+1], 0 ;~ 041E:136F
cs=0x41e;eip=0x001373; 	J(JZ(loc_13b4a));	// 9104                  jz      short loc_13B4A ;~ 041E:1373
cs=0x41e;eip=0x001375; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9105                  mov     bx, [bp+arg_0] ;~ 041E:1375
cs=0x41e;eip=0x001378; 	T(MOV(al, *(raddr(ds,bx+1))));	// 9106                  mov     al, [bx+1] ;~ 041E:1378
cs=0x41e;eip=0x00137b; 	T(CBW);	// 9107                  cbw ;~ 041E:137B
cs=0x41e;eip=0x00137c; 	X(PUSH(ax));	// 9108                  push    ax ;~ 041E:137C
cs=0x41e;eip=0x00137d; 	T(al = byte_1265e;);	// 9109                  mov     al, byte_1265E ;~ 041E:137D
cs=0x41e;eip=0x001380; 	T(AND(ax, 0x0FF));	// 9110                  and     ax, 0FFh ;~ 041E:1380
cs=0x41e;eip=0x001383; 	X(PUSH(ax));	// 9111                  push    ax ;~ 041E:1383
cs=0x41e;eip=0x001384; 	J(CALL(sub_1321c,0));	// 9112                  call    sub_1321C ;~ 041E:1384
cs=0x41e;eip=0x001387; 	T(ADD(sp, 4));	// 9113                  add     sp, 4 ;~ 041E:1387
loc_13b4a:
	// 4640 
cs=0x41e;eip=0x00138a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9116                  mov     bx, [bp+arg_0] ;~ 041E:138A
cs=0x41e;eip=0x00138d; 	X(DEC(*(raddr(ds,bx+8))));	// 9117                  dec     byte ptr [bx+8] ;~ 041E:138D
cs=0x41e;eip=0x001390; 	T(MOV(al, *(raddr(ds,bx+8))));	// 9118                  mov     al, [bx+8] ;~ 041E:1390
cs=0x41e;eip=0x001393; 	T(AND(ax, 0x0FF));	// 9119                  and     ax, 0FFh ;~ 041E:1393
cs=0x41e;eip=0x001396; 	J(JNZ(loc_13b82));	// 9120                  jnz     short loc_13B82 ;~ 041E:1396
cs=0x41e;eip=0x001398; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9121                  mov     bx, [bp+arg_0] ;~ 041E:1398
cs=0x41e;eip=0x00139b; 	T(MOV(al, *(raddr(ds,bx+9))));	// 9122                  mov     al, [bx+9] ;~ 041E:139B
cs=0x41e;eip=0x00139e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9123                  mov     bx, [bp+arg_0] ;~ 041E:139E
cs=0x41e;eip=0x0013a1; 	X(MOV(*(raddr(ds,bx+8)), al));	// 9124                  mov     [bx+8], al ;~ 041E:13A1
cs=0x41e;eip=0x0013a4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9125                  mov     bx, [bp+arg_0] ;~ 041E:13A4
cs=0x41e;eip=0x0013a7; 	T(CMP(*(raddr(ds,bx+2)), 0));	// 9126                  cmp     byte ptr [bx+2], 0 ;~ 041E:13A7
cs=0x41e;eip=0x0013ab; 	J(JZ(loc_13b82));	// 9127                  jz      short loc_13B82 ;~ 041E:13AB
cs=0x41e;eip=0x0013ad; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9128                  mov     bx, [bp+arg_0] ;~ 041E:13AD
cs=0x41e;eip=0x0013b0; 	T(MOV(al, *(raddr(ds,bx+2))));	// 9129                  mov     al, [bx+2] ;~ 041E:13B0
cs=0x41e;eip=0x0013b3; 	T(CBW);	// 9130                  cbw ;~ 041E:13B3
cs=0x41e;eip=0x0013b4; 	X(PUSH(ax));	// 9131                  push    ax ;~ 041E:13B4
cs=0x41e;eip=0x0013b5; 	T(al = byte_1265e;);	// 9132                  mov     al, byte_1265E ;~ 041E:13B5
cs=0x41e;eip=0x0013b8; 	T(AND(ax, 0x0FF));	// 9133                  and     ax, 0FFh ;~ 041E:13B8
cs=0x41e;eip=0x0013bb; 	X(PUSH(ax));	// 9134                  push    ax ;~ 041E:13BB
cs=0x41e;eip=0x0013bc; 	J(CALL(sub_132a2,0));	// 9135                  call    sub_132A2 ;~ 041E:13BC
cs=0x41e;eip=0x0013bf; 	T(ADD(sp, 4));	// 9136                  add     sp, 4 ;~ 041E:13BF
loc_13b82:
	// 4641 
cs=0x41e;eip=0x0013c2; 	X(INC(byte_1265e));	// 9140                  inc     byte_1265E ;~ 041E:13C2
cs=0x41e;eip=0x0013c6; 	X(POP(di));	// 9141                  pop     di ;~ 041E:13C6
cs=0x41e;eip=0x0013c7; 	X(POP(si));	// 9142                  pop     si ;~ 041E:13C7
cs=0x41e;eip=0x0013c8; 	T(sp = bp;);	// 9143                  mov     sp, bp ;~ 041E:13C8
cs=0x41e;eip=0x0013ca; 	X(POP(bp));	// 9144                  pop     bp ;~ 041E:13CA
cs=0x41e;eip=0x0013cb; 	J(RETN(0));	// 9145                  retn ;~ 041E:13CB

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kdef_13a6f: 	goto def_13a6f;
        case m2c::kloc_138b8: 	goto loc_138b8;
        case m2c::kloc_138de: 	goto loc_138de;
        case m2c::kloc_138ed: 	goto loc_138ed;
        case m2c::kloc_1390b: 	goto loc_1390b;
        case m2c::kloc_1393a: 	goto loc_1393a;
        case m2c::kloc_1395e: 	goto loc_1395e;
        case m2c::kloc_1396a: 	goto loc_1396a;
        case m2c::kloc_1396e: 	goto loc_1396e;
        case m2c::kloc_13980: 	goto loc_13980;
        case m2c::kloc_13994: 	goto loc_13994;
        case m2c::kloc_1399a: 	goto loc_1399a;
        case m2c::kloc_1399e: 	goto loc_1399e;
        case m2c::kloc_139ce: 	goto loc_139ce;
        case m2c::kloc_139e6: 	goto loc_139e6;
        case m2c::kloc_139fe: 	goto loc_139fe;
        case m2c::kloc_13a2e: 	goto loc_13a2e;
        case m2c::kloc_13a60: 	goto loc_13a60;
        case m2c::kloc_13a6b: 	goto loc_13a6b;
        case m2c::kloc_13a88: 	goto loc_13a88;
        case m2c::kloc_13ad0: 	goto loc_13ad0;
        case m2c::kloc_13ae0: 	goto loc_13ae0;
        case m2c::kloc_13b2c: 	goto loc_13b2c;
        case m2c::kloc_13b4a: 	goto loc_13b4a;
        case m2c::kloc_13b82: 	goto loc_13b82;
        case m2c::kret_41e_1154: 	goto ret_41e_1154;
        case m2c::kret_41e_129c: 	goto ret_41e_129c;
        case m2c::ksub_1389e: 	goto sub_1389e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13b8c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13b8c:
    _begin:
#undef var_2
#define var_2 -2
	// 9155 var_2           = word ptr -2 ;~ 041E:13CC
cs=0x41e;eip=0x0013cc; 	X(PUSH(bp));	// 9157                  push    bp ;~ 041E:13CC
cs=0x41e;eip=0x0013cd; 	T(bp = sp;);	// 9158                  mov     bp, sp ;~ 041E:13CD
cs=0x41e;eip=0x0013cf; 	T(SUB(sp, 2));	// 9159                  sub     sp, 2 ;~ 041E:13CF
cs=0x41e;eip=0x0013d3; 	X(PUSH(si));	// 9160                  push    si ;~ 041E:13D3
cs=0x41e;eip=0x0013d4; 	X(PUSH(di));	// 9161                  push    di ;~ 041E:13D4
cs=0x41e;eip=0x0013d5; 	T(al = byte_11cb6;);	// 9162                  mov     al, byte_11CB6 ;~ 041E:13D5
cs=0x41e;eip=0x0013d8; 	T(AND(ax, 0x0FF));	// 9163                  and     ax, 0FFh ;~ 041E:13D8
cs=0x41e;eip=0x0013db; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9164                  mov     [bp+var_2], ax ;~ 041E:13DB
cs=0x41e;eip=0x0013de; 	T(al = byte_11cb7;);	// 9165                  mov     al, byte_11CB7 ;~ 041E:13DE
cs=0x41e;eip=0x0013e1; 	T(AND(ax, 0x0FF));	// 9166                  and     ax, 0FFh ;~ 041E:13E1
cs=0x41e;eip=0x0013e4; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_2))));	// 9167                  mov     cx, [bp+var_2] ;~ 041E:13E4
cs=0x41e;eip=0x0013e7; 	T(CMP(cx, ax));	// 9168                  cmp     cx, ax ;~ 041E:13E7
cs=0x41e;eip=0x0013e9; 	J(JNZ(loc_13bae));	// 9169                  jnz     short loc_13BAE ;~ 041E:13E9
cs=0x41e;eip=0x0013eb; 	J(JMP(loc_13c2e));	// 9170                  jmp     loc_13C2E ;~ 041E:13EB
loc_13bae:
	// 4642 
cs=0x41e;eip=0x0013ee; 	T(al = byte_11cb6;);	// 9174                  mov     al, byte_11CB6 ;~ 041E:13EE
cs=0x41e;eip=0x0013f1; 	T(AND(ax, 0x0FF));	// 9175                  and     ax, 0FFh ;~ 041E:13F1
cs=0x41e;eip=0x0013f4; 	J(JNZ(loc_13bb9));	// 9176                  jnz     short loc_13BB9 ;~ 041E:13F4
cs=0x41e;eip=0x0013f6; 	J(JMP(loc_13c10));	// 9177                  jmp     loc_13C10 ;~ 041E:13F6
loc_13bb9:
	// 4643 
cs=0x41e;eip=0x0013f9; 	T(ax = 6;);	// 9181                  mov     ax, 6 ;~ 041E:13F9
cs=0x41e;eip=0x0013fc; 	X(PUSH(ax));	// 9182                  push    ax ;~ 041E:13FC
cs=0x41e;eip=0x0013fd; 	T(ax = 5;);	// 9183                  mov     ax, 5 ;~ 041E:13FD
cs=0x41e;eip=0x001400; 	X(PUSH(ax));	// 9184                  push    ax ;~ 041E:1400
cs=0x41e;eip=0x001401; 	J(CALL(sub_13788,0));	// 9185                  call    sub_13788 ;~ 041E:1401
cs=0x41e;eip=0x001404; 	T(ADD(sp, 4));	// 9186                  add     sp, 4 ;~ 041E:1404
cs=0x41e;eip=0x001407; 	T(ax = 1;);	// 9187                  mov     ax, 1 ;~ 041E:1407
cs=0x41e;eip=0x00140a; 	X(PUSH(ax));	// 9188                  push    ax ;~ 041E:140A
cs=0x41e;eip=0x00140b; 	T(ax = 6;);	// 9189                  mov     ax, 6 ;~ 041E:140B
cs=0x41e;eip=0x00140e; 	X(PUSH(ax));	// 9190                  push    ax ;~ 041E:140E
cs=0x41e;eip=0x00140f; 	J(CALL(sub_13788,0));	// 9191                  call    sub_13788 ;~ 041E:140F
cs=0x41e;eip=0x001412; 	T(ADD(sp, 4));	// 9192                  add     sp, 4 ;~ 041E:1412
cs=0x41e;eip=0x001415; 	T(ax = 0x0F;);	// 9193                  mov     ax, 0Fh ;~ 041E:1415
cs=0x41e;eip=0x001418; 	X(PUSH(ax));	// 9194                  push    ax ;~ 041E:1418
cs=0x41e;eip=0x001419; 	T(ax = 5;);	// 9195                  mov     ax, 5 ;~ 041E:1419
cs=0x41e;eip=0x00141c; 	X(PUSH(ax));	// 9196                  push    ax ;~ 041E:141C
cs=0x41e;eip=0x00141d; 	J(CALL(sub_130ea,0));	// 9197                  call    sub_130EA ;~ 041E:141D
cs=0x41e;eip=0x001420; 	T(ADD(sp, 4));	// 9198                  add     sp, 4 ;~ 041E:1420
cs=0x41e;eip=0x001423; 	T(XOR(ax, ax));	// 9199                  xor     ax, ax ;~ 041E:1423
cs=0x41e;eip=0x001425; 	X(PUSH(ax));	// 9200                  push    ax ;~ 041E:1425
cs=0x41e;eip=0x001426; 	T(ax = 0x0F;);	// 9201                  mov     ax, 0Fh ;~ 041E:1426
cs=0x41e;eip=0x001429; 	X(PUSH(ax));	// 9202                  push    ax ;~ 041E:1429
cs=0x41e;eip=0x00142a; 	T(ax = 0x0B;);	// 9203                  mov     ax, 0Bh ;~ 041E:142A
cs=0x41e;eip=0x00142d; 	X(PUSH(ax));	// 9204                  push    ax ;~ 041E:142D
cs=0x41e;eip=0x00142e; 	T(ax = 5;);	// 9205                  mov     ax, 5 ;~ 041E:142E
cs=0x41e;eip=0x001431; 	X(PUSH(ax));	// 9206                  push    ax ;~ 041E:1431
cs=0x41e;eip=0x001432; 	J(CALL(sub_13398,0));	// 9207                  call    sub_13398 ;~ 041E:1432
cs=0x41e;eip=0x001435; 	T(ADD(sp, 8));	// 9208                  add     sp, 8 ;~ 041E:1435
cs=0x41e;eip=0x001438; 	T(XOR(ax, ax));	// 9209                  xor     ax, ax ;~ 041E:1438
cs=0x41e;eip=0x00143a; 	X(PUSH(ax));	// 9210                  push    ax ;~ 041E:143A
cs=0x41e;eip=0x00143b; 	T(ax = 0x0F;);	// 9211                  mov     ax, 0Fh ;~ 041E:143B
cs=0x41e;eip=0x00143e; 	X(PUSH(ax));	// 9212                  push    ax ;~ 041E:143E
cs=0x41e;eip=0x00143f; 	T(ax = 0x37;);	// 9213                  mov     ax, 37h ; '7' ;~ 041E:143F
cs=0x41e;eip=0x001442; 	X(PUSH(ax));	// 9214                  push    ax ;~ 041E:1442
cs=0x41e;eip=0x001443; 	T(ax = 6;);	// 9215                  mov     ax, 6 ;~ 041E:1443
cs=0x41e;eip=0x001446; 	X(PUSH(ax));	// 9216                  push    ax ;~ 041E:1446
cs=0x41e;eip=0x001447; 	J(CALL(sub_13398,0));	// 9217                  call    sub_13398 ;~ 041E:1447
cs=0x41e;eip=0x00144a; 	T(ADD(sp, 8));	// 9218                  add     sp, 8 ;~ 041E:144A
cs=0x41e;eip=0x00144d; 	J(JMP(loc_13c24));	// 9219                  jmp     short loc_13C24 ;~ 041E:144D
loc_13c10:
	// 4644 
cs=0x41e;eip=0x001450; 	T(ax = 5;);	// 9224                  mov     ax, 5 ;~ 041E:1450
cs=0x41e;eip=0x001453; 	X(PUSH(ax));	// 9225                  push    ax ;~ 041E:1453
cs=0x41e;eip=0x001454; 	J(CALL(sub_1331c,0));	// 9226                  call    sub_1331C ;~ 041E:1454
cs=0x41e;eip=0x001457; 	T(ADD(sp, 2));	// 9227                  add     sp, 2 ;~ 041E:1457
cs=0x41e;eip=0x00145a; 	T(ax = 6;);	// 9228                  mov     ax, 6 ;~ 041E:145A
cs=0x41e;eip=0x00145d; 	X(PUSH(ax));	// 9229                  push    ax ;~ 041E:145D
cs=0x41e;eip=0x00145e; 	J(CALL(sub_1331c,0));	// 9230                  call    sub_1331C ;~ 041E:145E
cs=0x41e;eip=0x001461; 	T(ADD(sp, 2));	// 9231                  add     sp, 2 ;~ 041E:1461
loc_13c24:
	// 4645 
cs=0x41e;eip=0x001464; 	T(al = byte_11cb6;);	// 9234                  mov     al, byte_11CB6 ;~ 041E:1464
cs=0x41e;eip=0x001467; 	X(byte_11cb7 = al;);	// 9235                  mov     byte_11CB7, al ;~ 041E:1467
cs=0x41e;eip=0x00146a; 	J(JMP(loc_13c85));	// 9236                  jmp     loc_13C85 ;~ 041E:146A
loc_13c2e:
	// 4646 
cs=0x41e;eip=0x00146e; 	T(al = byte_11cb6;);	// 9241                  mov     al, byte_11CB6 ;~ 041E:146E
cs=0x41e;eip=0x001471; 	T(AND(ax, 0x0FF));	// 9242                  and     ax, 0FFh ;~ 041E:1471
cs=0x41e;eip=0x001474; 	J(JNZ(loc_13c39));	// 9243                  jnz     short loc_13C39 ;~ 041E:1474
cs=0x41e;eip=0x001476; 	J(JMP(loc_13c85));	// 9244                  jmp     loc_13C85 ;~ 041E:1476
loc_13c39:
	// 4647 
cs=0x41e;eip=0x001479; 	T(ax = word_11cb0;);	// 9248                  mov     ax, word_11CB0 ;~ 041E:1479
cs=0x41e;eip=0x00147c; 	T(CMP(word_11cae, ax));	// 9249                  cmp     word_11CAE, ax ;~ 041E:147C
cs=0x41e;eip=0x001480; 	J(JZ(loc_13c85));	// 9250                  jz      short loc_13C85 ;~ 041E:1480
cs=0x41e;eip=0x001482; 	T(ax = word_11cae;);	// 9251                  mov     ax, word_11CAE ;~ 041E:1482
cs=0x41e;eip=0x001485; 	T(ADD(ax, 0x8FC));	// 9252                  add     ax, 8FCh ;~ 041E:1485
cs=0x41e;eip=0x001488; 	X(PUSH(ax));	// 9253                  push    ax ;~ 041E:1488
cs=0x41e;eip=0x001489; 	T(ax = 5;);	// 9254                  mov     ax, 5 ;~ 041E:1489
cs=0x41e;eip=0x00148c; 	X(PUSH(ax));	// 9255                  push    ax ;~ 041E:148C
cs=0x41e;eip=0x00148d; 	J(CALL(sub_131c2,0));	// 9256                  call    sub_131C2 ;~ 041E:148D
cs=0x41e;eip=0x001490; 	T(ADD(sp, 4));	// 9257                  add     sp, 4 ;~ 041E:1490
cs=0x41e;eip=0x001493; 	T(cx = 6;);	// 9258                  mov     cx, 6 ;~ 041E:1493
cs=0x41e;eip=0x001496; 	T(ax = word_11cae;);	// 9259                  mov     ax, word_11CAE ;~ 041E:1496
cs=0x41e;eip=0x001499; 	T(SHR(ax, cl));	// 9260                  shr     ax, cl ;~ 041E:1499
cs=0x41e;eip=0x00149b; 	T(ADD(ax, 0x0F));	// 9261                  add     ax, 0Fh ;~ 041E:149B
cs=0x41e;eip=0x00149e; 	X(PUSH(ax));	// 9262                  push    ax ;~ 041E:149E
cs=0x41e;eip=0x00149f; 	T(ax = 6;);	// 9263                  mov     ax, 6 ;~ 041E:149F
cs=0x41e;eip=0x0014a2; 	X(PUSH(ax));	// 9264                  push    ax ;~ 041E:14A2
cs=0x41e;eip=0x0014a3; 	J(CALL(sub_1307e,0));	// 9265                  call    sub_1307E ;~ 041E:14A3
cs=0x41e;eip=0x0014a6; 	T(ADD(sp, 4));	// 9266                  add     sp, 4 ;~ 041E:14A6
cs=0x41e;eip=0x0014a9; 	T(cx = 7;);	// 9267                  mov     cx, 7 ;~ 041E:14A9
cs=0x41e;eip=0x0014ac; 	T(ax = word_11cae;);	// 9268                  mov     ax, word_11CAE ;~ 041E:14AC
cs=0x41e;eip=0x0014af; 	T(SHR(ax, cl));	// 9269                  shr     ax, cl ;~ 041E:14AF
cs=0x41e;eip=0x0014b1; 	T(ADD(ax, 0x0F));	// 9270                  add     ax, 0Fh ;~ 041E:14B1
cs=0x41e;eip=0x0014b4; 	X(PUSH(ax));	// 9271                  push    ax ;~ 041E:14B4
cs=0x41e;eip=0x0014b5; 	T(ax = 5;);	// 9272                  mov     ax, 5 ;~ 041E:14B5
cs=0x41e;eip=0x0014b8; 	X(PUSH(ax));	// 9273                  push    ax ;~ 041E:14B8
cs=0x41e;eip=0x0014b9; 	J(CALL(sub_1307e,0));	// 9274                  call    sub_1307E ;~ 041E:14B9
cs=0x41e;eip=0x0014bc; 	T(ADD(sp, 4));	// 9275                  add     sp, 4 ;~ 041E:14BC
cs=0x41e;eip=0x0014bf; 	T(ax = word_11cae;);	// 9276                  mov     ax, word_11CAE ;~ 041E:14BF
cs=0x41e;eip=0x0014c2; 	X(word_11cb0 = ax;);	// 9277                  mov     word_11CB0, ax ;~ 041E:14C2
loc_13c85:
	// 4648 
cs=0x41e;eip=0x0014c5; 	X(POP(di));	// 9281                  pop     di ;~ 041E:14C5
cs=0x41e;eip=0x0014c6; 	X(POP(si));	// 9282                  pop     si ;~ 041E:14C6
cs=0x41e;eip=0x0014c7; 	T(sp = bp;);	// 9283                  mov     sp, bp ;~ 041E:14C7
cs=0x41e;eip=0x0014c9; 	X(POP(bp));	// 9284                  pop     bp ;~ 041E:14C9
cs=0x41e;eip=0x0014ca; 	J(RETN(0));	// 9285                  retn ;~ 041E:14CA

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_13bae: 	goto loc_13bae;
        case m2c::kloc_13bb9: 	goto loc_13bb9;
        case m2c::kloc_13c10: 	goto loc_13c10;
        case m2c::kloc_13c24: 	goto loc_13c24;
        case m2c::kloc_13c2e: 	goto loc_13c2e;
        case m2c::kloc_13c39: 	goto loc_13c39;
        case m2c::kloc_13c85: 	goto loc_13c85;
        case m2c::ksub_13b8c: 	goto sub_13b8c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13c8c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13c8c:
    _begin:
cs=0x41e;eip=0x0014cc; 	T(CMP(byte_125ca, 0));	// 9295                  cmp     byte_125CA, 0 ;~ 041E:14CC
cs=0x41e;eip=0x0014d1; 	J(JNZ(loc_13c96));	// 9296                  jnz     short loc_13C96 ;~ 041E:14D1
cs=0x41e;eip=0x0014d3; 	J(JMP(locret_13cda));	// 9297                  jmp     locret_13CDA ;~ 041E:14D3
loc_13c96:
	// 4649 
cs=0x41e;eip=0x0014d6; 	X(byte_1265e = 0;);	// 9301                  mov     byte_1265E, 0 ;~ 041E:14D6
cs=0x41e;eip=0x0014db; 	T(ax = 0x0B9C;);	// 9302                  mov     ax, 0B9Ch ;~ 041E:14DB
cs=0x41e;eip=0x0014de; 	X(PUSH(ax));	// 9303                  push    ax ;~ 041E:14DE
cs=0x41e;eip=0x0014df; 	J(CALL(sub_1389e,0));	// 9304                  call    sub_1389E ;~ 041E:14DF
cs=0x41e;eip=0x0014e2; 	T(ADD(sp, 2));	// 9305                  add     sp, 2 ;~ 041E:14E2
cs=0x41e;eip=0x0014e5; 	T(ax = 0x0BB0;);	// 9306                  mov     ax, 0BB0h ;~ 041E:14E5
cs=0x41e;eip=0x0014e8; 	X(PUSH(ax));	// 9307                  push    ax ;~ 041E:14E8
cs=0x41e;eip=0x0014e9; 	J(CALL(sub_1389e,0));	// 9308                  call    sub_1389E ;~ 041E:14E9
cs=0x41e;eip=0x0014ec; 	T(ADD(sp, 2));	// 9309                  add     sp, 2 ;~ 041E:14EC
cs=0x41e;eip=0x0014ef; 	T(ax = 0x0BC4;);	// 9310                  mov     ax, 0BC4h ;~ 041E:14EF
cs=0x41e;eip=0x0014f2; 	X(PUSH(ax));	// 9311                  push    ax ;~ 041E:14F2
cs=0x41e;eip=0x0014f3; 	J(CALL(sub_1389e,0));	// 9312                  call    sub_1389E ;~ 041E:14F3
cs=0x41e;eip=0x0014f6; 	T(ADD(sp, 2));	// 9313                  add     sp, 2 ;~ 041E:14F6
cs=0x41e;eip=0x0014f9; 	T(ax = 0x0BD8;);	// 9314                  mov     ax, 0BD8h ;~ 041E:14F9
cs=0x41e;eip=0x0014fc; 	X(PUSH(ax));	// 9315                  push    ax ;~ 041E:14FC
cs=0x41e;eip=0x0014fd; 	J(CALL(sub_1389e,0));	// 9316                  call    sub_1389E ;~ 041E:14FD
cs=0x41e;eip=0x001500; 	T(ADD(sp, 2));	// 9317                  add     sp, 2 ;~ 041E:1500
cs=0x41e;eip=0x001503; 	T(ax = 0x0BEC;);	// 9318                  mov     ax, 0BECh ;~ 041E:1503
cs=0x41e;eip=0x001506; 	X(PUSH(ax));	// 9319                  push    ax ;~ 041E:1506
cs=0x41e;eip=0x001507; 	J(CALL(sub_1389e,0));	// 9320                  call    sub_1389E ;~ 041E:1507
cs=0x41e;eip=0x00150a; 	T(ADD(sp, 2));	// 9321                  add     sp, 2 ;~ 041E:150A
cs=0x41e;eip=0x00150d; 	T(ax = 0x0C00;);	// 9322                  mov     ax, 0C00h ;~ 041E:150D
cs=0x41e;eip=0x001510; 	X(PUSH(ax));	// 9323                  push    ax ;~ 041E:1510
cs=0x41e;eip=0x001511; 	J(CALL(sub_1389e,0));	// 9324                  call    sub_1389E ;~ 041E:1511
cs=0x41e;eip=0x001514; 	T(ADD(sp, 2));	// 9325                  add     sp, 2 ;~ 041E:1514
cs=0x41e;eip=0x001517; 	J(CALL(sub_13b8c,0));	// 9326                  call    sub_13B8C ;~ 041E:1517
locret_13cda:
	// 4650 
cs=0x41e;eip=0x00151a; 	J(RETN(0));	// 9329                  retn ;~ 041E:151A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_13c96: 	goto loc_13c96;
        case m2c::klocret_13cda: 	goto locret_13cda;
        case m2c::ksub_13c8c: 	goto sub_13c8c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg127c_151c_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg127c_151c_proc:
    _begin:
cs=0x41e;eip=0x00151c; 	X(RCL(*(dw*)(raddr(ds,bx+di)), cl));	// 9335                  rcl     word ptr [bx+di], cl ;~ 041E:151C
cs=0x41e;eip=0x00151e; 	J(JMP(loc_13ce3));	// 9336                  jmp     short loc_13CE3 ;~ 041E:151E
loc_13ce0:
	// 4651 
cs=0x41e;eip=0x001520; 	T(XOR(ax, ax));	// 9341                  xor     ax, ax ;~ 041E:1520
cs=0x41e;eip=0x001522; 	X(STOSB);	// 9342                  stosb ;~ 041E:1522
loc_13ce3:
	// 4652 
cs=0x41e;eip=0x001523; 	T(LODSB);	// 9346                  lodsb ;~ 041E:1523
cs=0x41e;eip=0x001524; 	T(CMP(al, 0x20));	// 9347                  cmp     al, 20h ; ' ' ;~ 041E:1524
cs=0x41e;eip=0x001526; 	J(JZ(loc_13ce3));	// 9348                  jz      short loc_13CE3 ;~ 041E:1526
cs=0x41e;eip=0x001528; 	T(CMP(al, 9));	// 9349                  cmp     al, 9 ;~ 041E:1528
cs=0x41e;eip=0x00152a; 	J(JZ(loc_13ce3));	// 9350                  jz      short loc_13CE3 ;~ 041E:152A
cs=0x41e;eip=0x00152c; 	T(CMP(al, 0x0D));	// 9351                  cmp     al, 0Dh ;~ 041E:152C
cs=0x41e;eip=0x00152e; 	J(JNZ(loc_13cf3));	// 9352                  jnz     short loc_13CF3 ;~ 041E:152E
cs=0x41e;eip=0x001530; __disp=unk_13d72;
	J(return __dispatch_call(__disp, _state););	// 9353                  jmp     near ptr unk_13D72 ;~ 041E:1530
loc_13cf3:
	// 4653 
cs=0x41e;eip=0x001533; 	T(OR(al, al));	// 9357                  or      al, al ;~ 041E:1533
cs=0x41e;eip=0x001535; 	J(JNZ(loc_13cfa));	// 9358                  jnz     short loc_13CFA ;~ 041E:1535
loc_13cfa:
	// 4654 
cs=0x41e;eip=0x00153a; 	X(MOV(*(dw*)(raddr(ss,bx)), di));	// 9366                  mov     ss:[bx], di ;~ 041E:153A
cs=0x41e;eip=0x00153d; 	T(INC(bx));	// 9367                  inc     bx ;~ 041E:153D
cs=0x41e;eip=0x00153e; 	T(INC(bx));	// 9368                  inc     bx ;~ 041E:153E
loc_13cff:
	// 4655 
cs=0x41e;eip=0x00153f; 	T(DEC(si));	// 9371                  dec     si ;~ 041E:153F
loc_13d00:
	// 4656 
cs=0x41e;eip=0x001540; 	T(LODSB);	// 9375                  lodsb ;~ 041E:1540
cs=0x41e;eip=0x001541; 	T(CMP(al, 0x20));	// 9376                  cmp     al, 20h ; ' ' ;~ 041E:1541
cs=0x41e;eip=0x001543; 	J(JZ(loc_13ce0));	// 9377                  jz      short loc_13CE0 ;~ 041E:1543
cs=0x41e;eip=0x001545; 	T(CMP(al, 9));	// 9378                  cmp     al, 9 ;~ 041E:1545
cs=0x41e;eip=0x001547; 	J(JZ(loc_13ce0));	// 9379                  jz      short loc_13CE0 ;~ 041E:1547
cs=0x41e;eip=0x001549; 	T(CMP(al, 0x0D));	// 9380                  cmp     al, 0Dh ;~ 041E:1549
cs=0x41e;eip=0x00154d; 	T(OR(al, al));	// 9385                  or      al, al ;~ 041E:154D
cs=0x41e;eip=0x001551; 	T(CMP(al, 0x22));	// 9390                  cmp     al, 22h ; '"' ;~ 041E:1551
cs=0x41e;eip=0x001553; 	J(JZ(loc_13d3c));	// 9391                  jz      short loc_13D3C ;~ 041E:1553
cs=0x41e;eip=0x001555; 	T(CMP(al, 0x5C));	// 9392                  cmp     al, 5Ch ; '\' ;~ 041E:1555
cs=0x41e;eip=0x001557; 	J(JZ(loc_13d1c));	// 9393                  jz      short loc_13D1C ;~ 041E:1557
cs=0x41e;eip=0x001559; 	X(STOSB);	// 9394                  stosb ;~ 041E:1559
cs=0x41e;eip=0x00155a; 	J(JMP(loc_13d00));	// 9395                  jmp     short loc_13D00 ;~ 041E:155A
loc_13d1c:
	// 4657 
cs=0x41e;eip=0x00155c; 	T(XOR(cx, cx));	// 9399                  xor     cx, cx ;~ 041E:155C
loc_13d1e:
	// 4658 
cs=0x41e;eip=0x00155e; 	T(INC(cx));	// 9402                  inc     cx ;~ 041E:155E
cs=0x41e;eip=0x00155f; 	T(LODSB);	// 9403                  lodsb ;~ 041E:155F
cs=0x41e;eip=0x001560; 	T(CMP(al, 0x5C));	// 9404                  cmp     al, 5Ch ; '\' ;~ 041E:1560
cs=0x41e;eip=0x001562; 	J(JZ(loc_13d1e));	// 9405                  jz      short loc_13D1E ;~ 041E:1562
cs=0x41e;eip=0x001564; 	T(CMP(al, 0x22));	// 9406                  cmp     al, 22h ; '"' ;~ 041E:1564
cs=0x41e;eip=0x001566; 	J(JZ(loc_13d2e));	// 9407                  jz      short loc_13D2E ;~ 041E:1566
cs=0x41e;eip=0x001568; 	T(al = 0x5C;);	// 9408                  mov     al, 5Ch ; '\' ;~ 041E:1568
	// 9409                  rep stosb ;~ 041E:156A
cs=0x41e;eip=0x00156a; 	X(	REP STOSB);	// 9409                  rep stosb ;~ 041E:156A
cs=0x41e;eip=0x00156c; 	J(JMP(loc_13cff));	// 9410                  jmp     short loc_13CFF ;~ 041E:156C
loc_13d2e:
	// 4659 
cs=0x41e;eip=0x00156e; 	T(al = 0x5C;);	// 9414                  mov     al, 5Ch ; '\' ;~ 041E:156E
cs=0x41e;eip=0x001570; 	T(SHR(cx, 1));	// 9415                  shr     cx, 1 ;~ 041E:1570
	// 9416                  rep stosb ;~ 041E:1572
cs=0x41e;eip=0x001572; 	X(	REP STOSB);	// 9416                  rep stosb ;~ 041E:1572
cs=0x41e;eip=0x001574; 	J(JNC(loc_13d3c));	// 9417                  jnb     short loc_13D3C ;~ 041E:1574
cs=0x41e;eip=0x001576; 	T(al = 0x22;);	// 9418                  mov     al, 22h ; '"' ;~ 041E:1576
cs=0x41e;eip=0x001578; 	X(STOSB);	// 9419                  stosb ;~ 041E:1578
cs=0x41e;eip=0x001579; 	J(JMP(loc_13d00));	// 9420                  jmp     short loc_13D00 ;~ 041E:1579
loc_13d3c:
	// 4660 
cs=0x41e;eip=0x00157c; 	T(LODSB);	// 9427                  lodsb ;~ 041E:157C
cs=0x41e;eip=0x00157d; 	T(CMP(al, 0x0D));	// 9428                  cmp     al, 0Dh ;~ 041E:157D
cs=0x41e;eip=0x001581; 	T(OR(al, al));	// 9433                  or      al, al ;~ 041E:1581
cs=0x41e;eip=0x001585; 	T(CMP(al, 0x22));	// 9438                  cmp     al, 22h ; '"' ;~ 041E:1585
cs=0x41e;eip=0x001587; 	J(JZ(loc_13d00));	// 9439                  jz      short loc_13D00 ;~ 041E:1587
cs=0x41e;eip=0x001589; 	T(CMP(al, 0x5C));	// 9440                  cmp     al, 5Ch ; '\' ;~ 041E:1589
cs=0x41e;eip=0x00158b; 	J(JZ(loc_13d50));	// 9441                  jz      short loc_13D50 ;~ 041E:158B
cs=0x41e;eip=0x00158d; 	X(STOSB);	// 9442                  stosb ;~ 041E:158D
cs=0x41e;eip=0x00158e; 	J(JMP(loc_13d3c));	// 9443                  jmp     short loc_13D3C ;~ 041E:158E
loc_13d50:
	// 4661 
cs=0x41e;eip=0x001590; 	T(DEC(bp));	// 9447                  dec     bp ;~ 041E:1590
cs=0x41e;eip=0x001594; 	X(ADD(*(raddr(ds,si+0x74)), bl));	// 9453                  add     [si+74h], bl ;~ 041E:1594
cs=0x41e;eip=0x001597; 	T(CLI);	// 9454                  cli ;~ 041E:1597
cs=0x41e;eip=0x001598; 	T(INC(si));	// 9455                  inc     si ;~ 041E:1598
cs=0x41e;eip=0x001599; 	X(XOR(*(dw*)(raddr(ds,di)), si));	// 9456                  xor     [di], si ;~ 041E:1599

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_13ce0: 	goto loc_13ce0;
        case m2c::kloc_13ce3: 	goto loc_13ce3;
        case m2c::kloc_13cf3: 	goto loc_13cf3;
        case m2c::kloc_13cfa: 	goto loc_13cfa;
        case m2c::kloc_13cff: 	goto loc_13cff;
        case m2c::kloc_13d00: 	goto loc_13d00;
        case m2c::kloc_13d1c: 	goto loc_13d1c;
        case m2c::kloc_13d1e: 	goto loc_13d1e;
        case m2c::kloc_13d2e: 	goto loc_13d2e;
        case m2c::kloc_13d3c: 	goto loc_13d3c;
        case m2c::kloc_13d50: 	goto loc_13d50;
        case m2c::kseg127c_151c_proc: 	goto seg127c_151c_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}


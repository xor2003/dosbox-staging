/* THIS IS GENERATED FILE */

        
#include "f.exe.h"

                

 bool _group82(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group82:
    _begin:
sub_37caa:
	// 121945 
cs=0x296c;eip=0x00000a; 	J(CALL(sub_37cb6,0));	// 121946                  call    sub_37CB6 ;~ 296C:000A
seg37ca_d_proc:
	// 121950 
cs=0x296c;eip=0x00000d; 	J(RETF(0));	// 121950                  retf ;~ 296C:000D

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg37ca_d_proc: 	goto seg37ca_d_proc;
        case m2c::ksub_37caa: 	goto sub_37caa;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group83(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group83:
    _begin:
sub_37cae:
	// 121957 
cs=0x296c;eip=0x00000e; 	J(CALL(sub_38641,0));	// 121958                  call    sub_38641 ;~ 296C:000E
seg37ca_11_proc:
	// 121962 
cs=0x296c;eip=0x000011; 	J(RETF(0));	// 121962                  retf ;~ 296C:0011
ret_296c_12:
	// 7227 
cs=0x296c;eip=0x000012; 	J(CALL(_group85,m2c::kloc_38655));	// 121964                  call    loc_38655 ;~ 296C:0012
cs=0x296c;eip=0x000015; 	J(RETF(0));	// 121966                  retf ;~ 296C:0015

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kret_296c_12: 	goto ret_296c_12;
        case m2c::kseg37ca_11_proc: 	goto seg37ca_11_proc;
        case m2c::ksub_37cae: 	goto sub_37cae;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group84(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group84:
    _begin:
sub_37cb6:
	// 121973 
cs=0x296c;eip=0x000016; 	J(CALLF(sub_49a7f,0));	// 121974                  call    far ptr sub_49A7F ;~ 296C:0016
cs=0x296c;eip=0x00001b; 	T(SUB(ah, ah));	// 121976                  sub     ah, ah ;~ 296C:001B
cs=0x296c;eip=0x00001d; 	X(word_4dd56 = ax;);	// 121977                  mov     ds:word_4DD56, ax ;~ 296C:001D
cs=0x296c;eip=0x000020; 	X(word_4dd6c = ax;);	// 121978                  mov     ds:word_4DD6C, ax ;~ 296C:0020
cs=0x296c;eip=0x000023; 	X(word_4dd82 = ax;);	// 121979                  mov     ds:word_4DD82, ax ;~ 296C:0023
cs=0x296c;eip=0x000026; 	X(word_4dd98 = ax;);	// 121980                  mov     ds:word_4DD98, ax ;~ 296C:0026
cs=0x296c;eip=0x000029; 	X(word_4ddd2 = ax;);	// 121981                  mov     ds:word_4DDD2, ax ;~ 296C:0029
cs=0x296c;eip=0x00002c; 	X(word_4ddb4 = ax;);	// 121982                  mov     ds:word_4DDB4, ax ;~ 296C:002C
cs=0x296c;eip=0x00002f; 	X(word_4de0e = ax;);	// 121983                  mov     ds:word_4DE0E, ax ;~ 296C:002F
cs=0x296c;eip=0x000032; 	X(word_4ddf0 = ax;);	// 121984                  mov     ds:word_4DDF0, ax ;~ 296C:0032
cs=0x296c;eip=0x000035; 	T(bp = 0x5276;);	// 121985                  mov     bp, 5276h ;~ 296C:0035
cs=0x296c;eip=0x000038; 	T(ax = word_50c8a;);	// 121986                  mov     ax, ds:word_50C8A ;~ 296C:0038
cs=0x296c;eip=0x00003b; 	T(dh = 0x32;);	// 121987                  mov     dh, 32h ; '2' ;~ 296C:003B
cs=0x296c;eip=0x00003d; 	T(DIV1(dh));	// 121988                  div     dh ;~ 296C:003D
cs=0x296c;eip=0x00003f; 	T(dl = al;);	// 121989                  mov     dl, al ;~ 296C:003F
cs=0x296c;eip=0x000041; 	T(DEC(dl));	// 121990                  dec     dl ;~ 296C:0041
cs=0x296c;eip=0x000043; 	T(cl = byte_4de2c;);	// 121991                  mov     cl, ds:byte_4DE2C ;~ 296C:0043
cs=0x296c;eip=0x000047; 	T(XCHG(al, ah));	// 121992                  xchg    al, ah ;~ 296C:0047
cs=0x296c;eip=0x000049; 	T(SUB(ah, ah));	// 121993                  sub     ah, ah ;~ 296C:0049
cs=0x296c;eip=0x00004b; 	T(SHL(ax, cl));	// 121994                  shl     ax, cl ;~ 296C:004B
cs=0x296c;eip=0x00004d; 	T(dh = 5;);	// 121995                  mov     dh, 5 ;~ 296C:004D
cs=0x296c;eip=0x00004f; 	T(DIV1(dh));	// 121996                  div     dh ;~ 296C:004F
cs=0x296c;eip=0x000051; 	T(ADD(al, *(db*)(&word_4de27)));	// 121997                  add     al, byte ptr ds:word_4DE27 ;~ 296C:0051
cs=0x296c;eip=0x000055; 	X(*(db*)(&word_4dd60) = al;);	// 121998                  mov     byte ptr ds:word_4DD60, al ;~ 296C:0055
cs=0x296c;eip=0x000058; 	X(byte_4de65 = dl;);	// 121999                  mov     ds:byte_4DE65, dl ;~ 296C:0058
cs=0x296c;eip=0x00005c; 	T(SUB(al, byte_4de29));	// 122000                  sub     al, ds:byte_4DE29 ;~ 296C:005C
cs=0x296c;eip=0x000060; 	X(*(db*)(&word_4de5b) = al;);	// 122001                  mov     byte ptr ds:word_4DE5B, al ;~ 296C:0060
cs=0x296c;eip=0x000063; 	T(SHL(dl, 1));	// 122002                  shl     dl, 1 ;~ 296C:0063
cs=0x296c;eip=0x000065; 	T(SUB(dh, dh));	// 122003                  sub     dh, dh ;~ 296C:0065
cs=0x296c;eip=0x000067; 	T(di = dx;);	// 122004                  mov     di, dx ;~ 296C:0067
cs=0x296c;eip=0x000069; 	X(byte_4de5e = 4;);	// 122005                  mov     ds:byte_4DE5E, 4 ;~ 296C:0069
loc_37d0e:
	// 7228 
cs=0x296c;eip=0x00006e; 	T(al = *(db*)(&word_4de2a););	// 122009                  mov     al, byte ptr ds:word_4DE2A ;~ 296C:006E
cs=0x296c;eip=0x000071; 	X(SUB(*(db*)(&word_4dd60), al));	// 122010                  sub     byte ptr ds:word_4DD60, al ;~ 296C:0071
cs=0x296c;eip=0x000075; 	T(ax = word_4de2d;);	// 122011                  mov     ax, ds:word_4DE2D ;~ 296C:0075
cs=0x296c;eip=0x000078; 	X(word_4dd5e = ax;);	// 122012                  mov     ds:word_4DD5E, ax ;~ 296C:0078
cs=0x296c;eip=0x00007b; 	T(CMP(di, 0x28));	// 122013                  cmp     di, 28h ; '(' ;~ 296C:007B
cs=0x296c;eip=0x00007e; 	J(JC(loc_37d2f));	// 122014                  jb      short loc_37D2F ;~ 296C:007E
cs=0x296c;eip=0x000080; 	T(SUB(di, di));	// 122015                  sub     di, di ;~ 296C:0080
cs=0x296c;eip=0x000082; 	X(DEC(byte_4de5e));	// 122016                  dec     ds:byte_4DE5E ;~ 296C:0082
cs=0x296c;eip=0x000086; 	T(ax = word_4de2a;);	// 122017                  mov     ax, ds:word_4DE2A ;~ 296C:0086
cs=0x296c;eip=0x000089; 	X(SUB(word_4de5b, ax));	// 122018                  sub     ds:word_4DE5B, ax ;~ 296C:0089
cs=0x296c;eip=0x00008d; 	J(JMP(loc_37d0e));	// 122019                  jmp     short loc_37D0E ;~ 296C:008D
loc_37d2f:
	// 7229 
cs=0x296c;eip=0x00008f; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x5392))));	// 122023                  mov     ax, [di+5392h] ;~ 296C:008F
cs=0x296c;eip=0x000093; 	X(word_4de60 = ax;);	// 122024                  mov     ds:word_4DE60, ax ;~ 296C:0093
cs=0x296c;eip=0x000096; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x53E2))));	// 122025                  mov     ax, [di+53E2h] ;~ 296C:0096
cs=0x296c;eip=0x00009a; 	X(word_4de62 = ax;);	// 122026                  mov     ds:word_4DE62, ax ;~ 296C:009A
cs=0x296c;eip=0x00009d; 	T(bx = 0x5380;);	// 122027                  mov     bx, 5380h ;~ 296C:009D
cs=0x296c;eip=0x0000a0; 	X(PUSH(di));	// 122028                  push    di ;~ 296C:00A0
cs=0x296c;eip=0x0000a1; 	J(CALLF(sub_499a3,0));	// 122029                  call    far ptr sub_499A3 ;~ 296C:00A1
cs=0x296c;eip=0x0000a6; 	X(POP(di));	// 122031                  pop     di ;~ 296C:00A6
cs=0x296c;eip=0x0000a7; 	T(INC(di));	// 122032                  inc     di ;~ 296C:00A7
cs=0x296c;eip=0x0000a8; 	T(INC(di));	// 122033                  inc     di ;~ 296C:00A8
cs=0x296c;eip=0x0000a9; 	X(DEC(byte_4de5e));	// 122034                  dec     ds:byte_4DE5E ;~ 296C:00A9
cs=0x296c;eip=0x0000ad; 	J(JNZ(loc_37d0e));	// 122035                  jnz     short loc_37D0E ;~ 296C:00AD
cs=0x296c;eip=0x0000af; 	T(si = 0;);	// 122036                  mov     si, 0 ;~ 296C:00AF
cs=0x296c;eip=0x0000b2; 	T(bx = word_4de5b;);	// 122037                  mov     bx, ds:word_4DE5B ;~ 296C:00B2
cs=0x296c;eip=0x0000b6; 	T(cl = byte_4de54;);	// 122038                  mov     cl, ds:byte_4DE54 ;~ 296C:00B6
cs=0x296c;eip=0x0000ba; 	T(dl = byte_4de65;);	// 122039                  mov     dl, ds:byte_4DE65 ;~ 296C:00BA
cs=0x296c;eip=0x0000be; 	J(CALLF(sub_499d5,0));	// 122040                  call    far ptr sub_499D5 ;~ 296C:00BE
cs=0x296c;eip=0x0000c3; 	T(ah = 0x0F;);	// 122042                  mov     ah, 0Fh ;~ 296C:00C3
cs=0x296c;eip=0x0000c5; 	J(CALLF(sub_49a3e,0));	// 122043                  call    far ptr sub_49A3E ;~ 296C:00C5
cs=0x296c;eip=0x0000ca; 	T(CMP(byte_4de54, 0));	// 122045                  cmp     ds:byte_4DE54, 0 ;~ 296C:00CA
loc_37d6f:
	// 7230 
cs=0x296c;eip=0x0000cf; 	J(JZ(loc_37da7));	// 122048                  jz      short loc_37DA7 ;~ 296C:00CF
cs=0x296c;eip=0x0000d1; 	T(ax = 0x7A;);	// 122049                  mov     ax, 7Ah ; 'z' ;~ 296C:00D1
cs=0x296c;eip=0x0000d4; 	T(cx = 0x7C;);	// 122050                  mov     cx, 7Ch ; '|' ;~ 296C:00D4
cs=0x296c;eip=0x0000d7; 	T(bx = 0x52;);	// 122051                  mov     bx, 52h ; 'R' ;~ 296C:00D7
cs=0x296c;eip=0x0000da; 	T(dx = 0x52;);	// 122052                  mov     dx, 52h ; 'R' ;~ 296C:00DA
cs=0x296c;eip=0x0000dd; 	J(CALLF(sub_49a39,0));	// 122053                  call    far ptr sub_49A39 ;~ 296C:00DD
cs=0x296c;eip=0x0000e2; 	T(ax = 0x0C4;);	// 122055                  mov     ax, 0C4h ;~ 296C:00E2
cs=0x296c;eip=0x0000e5; 	T(cx = 0x0C6;);	// 122056                  mov     cx, 0C6h ;~ 296C:00E5
cs=0x296c;eip=0x0000e8; 	T(bx = 0x52;);	// 122057                  mov     bx, 52h ; 'R' ;~ 296C:00E8
cs=0x296c;eip=0x0000eb; 	T(dx = 0x52;);	// 122058                  mov     dx, 52h ; 'R' ;~ 296C:00EB
cs=0x296c;eip=0x0000ee; 	J(CALLF(sub_49a39,0));	// 122059                  call    far ptr sub_49A39 ;~ 296C:00EE
cs=0x296c;eip=0x0000f3; 	T(ax = 0x9F;);	// 122061                  mov     ax, 9Fh ;~ 296C:00F3
cs=0x296c;eip=0x0000f6; 	T(cx = 0x9F;);	// 122062                  mov     cx, 9Fh ;~ 296C:00F6
cs=0x296c;eip=0x0000f9; 	T(bx = 0x43;);	// 122063                  mov     bx, 43h ; 'C' ;~ 296C:00F9
cs=0x296c;eip=0x0000fc; 	T(dx = 0x44;);	// 122064                  mov     dx, 44h ; 'D' ;~ 296C:00FC
cs=0x296c;eip=0x0000ff; 	J(CALLF(sub_49a39,0));	// 122065                  call    far ptr sub_49A39 ;~ 296C:00FF
cs=0x296c;eip=0x000104; 	J(JMP(loc_37dda));	// 122067                  jmp     short loc_37DDA ;~ 296C:0104
loc_37da7:
	// 7231 
cs=0x296c;eip=0x000107; 	T(ax = 0x49;);	// 122073                  mov     ax, 49h ; 'I' ;~ 296C:0107
cs=0x296c;eip=0x00010a; 	T(cx = 0x4C;);	// 122074                  mov     cx, 4Ch ; 'L' ;~ 296C:010A
cs=0x296c;eip=0x00010d; 	T(bx = 0x38;);	// 122075                  mov     bx, 38h ; '8' ;~ 296C:010D
cs=0x296c;eip=0x000110; 	T(dx = 0x38;);	// 122076                  mov     dx, 38h ; '8' ;~ 296C:0110
cs=0x296c;eip=0x000113; 	J(CALLF(sub_49a39,0));	// 122077                  call    far ptr sub_49A39 ;~ 296C:0113
cs=0x296c;eip=0x000118; 	T(ax = 0x0F3;);	// 122079                  mov     ax, 0F3h ;~ 296C:0118
cs=0x296c;eip=0x00011b; 	T(cx = 0x0F6;);	// 122080                  mov     cx, 0F6h ;~ 296C:011B
cs=0x296c;eip=0x00011e; 	T(bx = 0x38;);	// 122081                  mov     bx, 38h ; '8' ;~ 296C:011E
cs=0x296c;eip=0x000121; 	T(dx = 0x38;);	// 122082                  mov     dx, 38h ; '8' ;~ 296C:0121
cs=0x296c;eip=0x000124; 	J(CALLF(sub_49a39,0));	// 122083                  call    far ptr sub_49A39 ;~ 296C:0124
cs=0x296c;eip=0x000129; 	T(ax = 0x9F;);	// 122085                  mov     ax, 9Fh ;~ 296C:0129
cs=0x296c;eip=0x00012c; 	T(cx = 0x9F;);	// 122086                  mov     cx, 9Fh ;~ 296C:012C
cs=0x296c;eip=0x00012f; 	T(bx = 0x14;);	// 122087                  mov     bx, 14h ;~ 296C:012F
cs=0x296c;eip=0x000132; 	T(dx = 0x16;);	// 122088                  mov     dx, 16h ;~ 296C:0132
cs=0x296c;eip=0x000135; 	J(CALLF(sub_49a39,0));	// 122089                  call    far ptr sub_49A39 ;~ 296C:0135
loc_37dda:
	// 7232 
cs=0x296c;eip=0x00013a; 	J(CALLF(sub_49a48,0));	// 122093                  call    far ptr sub_49A48 ;~ 296C:013A
cs=0x296c;eip=0x00013f; 	T(ax = word_4e300;);	// 122095                  mov     ax, ds:word_4E300 ;~ 296C:013F
cs=0x296c;eip=0x000142; 	T(SUB(dx, dx));	// 122096                  sub     dx, dx ;~ 296C:0142
cs=0x296c;eip=0x000144; 	T(cx = 0x3E8;);	// 122097                  mov     cx, 3E8h ;~ 296C:0144
cs=0x296c;eip=0x000147; 	T(DIV2(cx));	// 122098                  div     cx ;~ 296C:0147
cs=0x296c;eip=0x000149; 	T(bx = ax;);	// 122099                  mov     bx, ax ;~ 296C:0149
cs=0x296c;eip=0x00014b; 	T(DEC(bx));	// 122100                  dec     bx ;~ 296C:014B
cs=0x296c;eip=0x00014c; 	T(ax = dx;);	// 122101                  mov     ax, dx ;~ 296C:014C
cs=0x296c;eip=0x00014e; 	X(word_4de55 = dx;);	// 122102                  mov     ds:word_4DE55, dx ;~ 296C:014E
cs=0x296c;eip=0x000152; 	T(SUB(dx, dx));	// 122103                  sub     dx, dx ;~ 296C:0152
cs=0x296c;eip=0x000154; 	T(cl = byte_4de2c;);	// 122104                  mov     cl, ds:byte_4DE2C ;~ 296C:0154
cs=0x296c;eip=0x000158; 	T(SHL(ax, cl));	// 122105                  shl     ax, cl ;~ 296C:0158
cs=0x296c;eip=0x00015a; 	T(cx = 0x64;);	// 122106                  mov     cx, 64h ; 'd' ;~ 296C:015A
cs=0x296c;eip=0x00015d; 	T(DIV2(cx));	// 122107                  div     cx ;~ 296C:015D
cs=0x296c;eip=0x00015f; 	T(SHL(bx, 1));	// 122108                  shl     bx, 1 ;~ 296C:015F
cs=0x296c;eip=0x000161; 	T(di = bx;);	// 122109                  mov     di, bx ;~ 296C:0161
cs=0x296c;eip=0x000163; 	T(bp = 0x5276;);	// 122110                  mov     bp, 5276h ;~ 296C:0163
cs=0x296c;eip=0x000166; 	X(byte_4de5e = 4;);	// 122111                  mov     ds:byte_4DE5E, 4 ;~ 296C:0166
cs=0x296c;eip=0x00016b; 	T(CMP(di, 0));	// 122112                  cmp     di, 0 ;~ 296C:016B
cs=0x296c;eip=0x00016e; 	J(JGE(loc_37e86));	// 122113                  jge     short loc_37E86 ;~ 296C:016E
cs=0x296c;eip=0x000170; 	T(ax = word_4de55;);	// 122114                  mov     ax, ds:word_4DE55 ;~ 296C:0170
cs=0x296c;eip=0x000173; 	T(dh = 0x64;);	// 122115                  mov     dh, 64h ; 'd' ;~ 296C:0173
cs=0x296c;eip=0x000175; 	T(DIV1(dh));	// 122116                  div     dh ;~ 296C:0175
cs=0x296c;eip=0x000177; 	T(dl = al;);	// 122117                  mov     dl, al ;~ 296C:0177
cs=0x296c;eip=0x000179; 	T(DEC(dl));	// 122118                  dec     dl ;~ 296C:0179
cs=0x296c;eip=0x00017b; 	T(cl = byte_4de2c;);	// 122119                  mov     cl, ds:byte_4DE2C ;~ 296C:017B
cs=0x296c;eip=0x00017f; 	T(XCHG(al, ah));	// 122120                  xchg    al, ah ;~ 296C:017F
cs=0x296c;eip=0x000181; 	T(SUB(ah, ah));	// 122121                  sub     ah, ah ;~ 296C:0181
cs=0x296c;eip=0x000183; 	T(SHL(ax, cl));	// 122122                  shl     ax, cl ;~ 296C:0183
cs=0x296c;eip=0x000185; 	T(dh = 0x0A;);	// 122123                  mov     dh, 0Ah ;~ 296C:0185
cs=0x296c;eip=0x000187; 	T(DIV1(dh));	// 122124                  div     dh ;~ 296C:0187
cs=0x296c;eip=0x000189; 	T(ADD(al, *(db*)(&word_4de27)));	// 122125                  add     al, byte ptr ds:word_4DE27 ;~ 296C:0189
cs=0x296c;eip=0x00018d; 	X(*(db*)(&word_4dd60) = al;);	// 122126                  mov     byte ptr ds:word_4DD60, al ;~ 296C:018D
cs=0x296c;eip=0x000190; 	X(byte_4de65 = dl;);	// 122127                  mov     ds:byte_4DE65, dl ;~ 296C:0190
cs=0x296c;eip=0x000194; 	T(SUB(al, byte_4de29));	// 122128                  sub     al, ds:byte_4DE29 ;~ 296C:0194
cs=0x296c;eip=0x000198; 	X(*(db*)(&word_4de5b) = al;);	// 122129                  mov     byte ptr ds:word_4DE5B, al ;~ 296C:0198
cs=0x296c;eip=0x00019b; 	T(SHL(dl, 1));	// 122130                  shl     dl, 1 ;~ 296C:019B
cs=0x296c;eip=0x00019d; 	T(SUB(dh, dh));	// 122131                  sub     dh, dh ;~ 296C:019D
cs=0x296c;eip=0x00019f; 	T(di = dx;);	// 122132                  mov     di, dx ;~ 296C:019F
loc_37e41:
	// 7233 
cs=0x296c;eip=0x0001a1; 	T(al = *(db*)(&word_4de2a););	// 122136                  mov     al, byte ptr ds:word_4DE2A ;~ 296C:01A1
cs=0x296c;eip=0x0001a4; 	X(SUB(*(db*)(&word_4dd60), al));	// 122137                  sub     byte ptr ds:word_4DD60, al ;~ 296C:01A4
cs=0x296c;eip=0x0001a8; 	T(ax = word_4de2f;);	// 122138                  mov     ax, ds:word_4DE2F ;~ 296C:01A8
cs=0x296c;eip=0x0001ab; 	X(word_4dd5e = ax;);	// 122139                  mov     ds:word_4DD5E, ax ;~ 296C:01AB
cs=0x296c;eip=0x0001ae; 	T(CMP(di, 0x28));	// 122140                  cmp     di, 28h ; '(' ;~ 296C:01AE
cs=0x296c;eip=0x0001b1; 	J(JC(loc_37e62));	// 122141                  jb      short loc_37E62 ;~ 296C:01B1
cs=0x296c;eip=0x0001b3; 	T(SUB(di, di));	// 122142                  sub     di, di ;~ 296C:01B3
cs=0x296c;eip=0x0001b5; 	X(DEC(byte_4de5e));	// 122143                  dec     ds:byte_4DE5E ;~ 296C:01B5
cs=0x296c;eip=0x0001b9; 	T(ax = word_4de2a;);	// 122144                  mov     ax, ds:word_4DE2A ;~ 296C:01B9
cs=0x296c;eip=0x0001bc; 	X(SUB(word_4de5b, ax));	// 122145                  sub     ds:word_4DE5B, ax ;~ 296C:01BC
cs=0x296c;eip=0x0001c0; 	J(JMP(loc_37e41));	// 122146                  jmp     short loc_37E41 ;~ 296C:01C0
loc_37e62:
	// 7234 
cs=0x296c;eip=0x0001c2; 	T(MOV(al, *(raddr(ds,di+0x5433))));	// 122150                  mov     al, [di+5433h] ;~ 296C:01C2
cs=0x296c;eip=0x0001c6; 	X(byte_4de6a = al;);	// 122151                  mov     ds:byte_4DE6A, al ;~ 296C:01C6
cs=0x296c;eip=0x0001c9; 	T(bx = 0x538A;);	// 122152                  mov     bx, 538Ah ;~ 296C:01C9
cs=0x296c;eip=0x0001cc; 	X(PUSH(di));	// 122153                  push    di ;~ 296C:01CC
cs=0x296c;eip=0x0001cd; 	J(CALLF(sub_499a3,0));	// 122154                  call    far ptr sub_499A3 ;~ 296C:01CD
cs=0x296c;eip=0x0001d2; 	X(POP(di));	// 122156                  pop     di ;~ 296C:01D2
cs=0x296c;eip=0x0001d3; 	T(INC(di));	// 122157                  inc     di ;~ 296C:01D3
cs=0x296c;eip=0x0001d4; 	T(INC(di));	// 122158                  inc     di ;~ 296C:01D4
cs=0x296c;eip=0x0001d5; 	X(DEC(byte_4de5e));	// 122159                  dec     ds:byte_4DE5E ;~ 296C:01D5
cs=0x296c;eip=0x0001d9; 	J(JZ(loc_37eca));	// 122160                  jz      short loc_37ECA ;~ 296C:01D9
cs=0x296c;eip=0x0001db; 	T(CMP(di, 0x14));	// 122161                  cmp     di, 14h ;~ 296C:01DB
cs=0x296c;eip=0x0001de; 	J(JC(loc_37e41));	// 122162                  jb      short loc_37E41 ;~ 296C:01DE
cs=0x296c;eip=0x0001e0; 	T(di = 2;);	// 122163                  mov     di, 2 ;~ 296C:01E0
cs=0x296c;eip=0x0001e3; 	J(JMP(loc_37e99));	// 122164                  jmp     short loc_37E99 ;~ 296C:01E3
loc_37e86:
	// 7235 
cs=0x296c;eip=0x0001e6; 	T(ADD(ax, word_4de27));	// 122170                  add     ax, ds:word_4DE27 ;~ 296C:01E6
cs=0x296c;eip=0x0001ea; 	X(word_4dd60 = ax;);	// 122171                  mov     ds:word_4DD60, ax ;~ 296C:01EA
cs=0x296c;eip=0x0001ed; 	X(byte_4de65 = 2;);	// 122172                  mov     ds:byte_4DE65, 2 ;~ 296C:01ED
cs=0x296c;eip=0x0001f2; 	T(SUB(al, byte_4de29));	// 122173                  sub     al, ds:byte_4DE29 ;~ 296C:01F2
cs=0x296c;eip=0x0001f6; 	X(*(db*)(&word_4de5b) = al;);	// 122174                  mov     byte ptr ds:word_4DE5B, al ;~ 296C:01F6
loc_37e99:
	// 7236 
cs=0x296c;eip=0x0001f9; 	T(al = *(db*)(&word_4de2a););	// 122178                  mov     al, byte ptr ds:word_4DE2A ;~ 296C:01F9
cs=0x296c;eip=0x0001fc; 	X(SUB(*(db*)(&word_4dd60), al));	// 122179                  sub     byte ptr ds:word_4DD60, al ;~ 296C:01FC
cs=0x296c;eip=0x000200; 	T(ax = word_4de2f;);	// 122180                  mov     ax, ds:word_4DE2F ;~ 296C:0200
cs=0x296c;eip=0x000203; 	X(word_4dd5e = ax;);	// 122181                  mov     ds:word_4DD5E, ax ;~ 296C:0203
cs=0x296c;eip=0x000206; 	T(CMP(di, 0));	// 122182                  cmp     di, 0 ;~ 296C:0206
cs=0x296c;eip=0x000209; 	J(JNZ(loc_37eb1));	// 122183                  jnz     short loc_37EB1 ;~ 296C:0209
cs=0x296c;eip=0x00020b; 	T(bx = 0x538E;);	// 122184                  mov     bx, 538Eh ;~ 296C:020B
cs=0x296c;eip=0x00020e; 	J(JMP(loc_37ebb));	// 122185                  jmp     short loc_37EBB ;~ 296C:020E
loc_37eb1:
	// 7237 
cs=0x296c;eip=0x000211; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x5432))));	// 122191                  mov     ax, [di+5432h] ;~ 296C:0211
cs=0x296c;eip=0x000215; 	X(word_4de66 = ax;);	// 122192                  mov     ds:word_4DE66, ax ;~ 296C:0215
cs=0x296c;eip=0x000218; 	T(bx = 0x5386;);	// 122193                  mov     bx, 5386h ;~ 296C:0218
loc_37ebb:
	// 7238 
cs=0x296c;eip=0x00021b; 	X(PUSH(di));	// 122196                  push    di ;~ 296C:021B
cs=0x296c;eip=0x00021c; 	J(CALLF(sub_499a3,0));	// 122197                  call    far ptr sub_499A3 ;~ 296C:021C
cs=0x296c;eip=0x000221; 	X(POP(di));	// 122199                  pop     di ;~ 296C:0221
cs=0x296c;eip=0x000222; 	T(INC(di));	// 122200                  inc     di ;~ 296C:0222
cs=0x296c;eip=0x000223; 	T(INC(di));	// 122201                  inc     di ;~ 296C:0223
cs=0x296c;eip=0x000224; 	X(DEC(byte_4de5e));	// 122202                  dec     ds:byte_4DE5E ;~ 296C:0224
cs=0x296c;eip=0x000228; 	J(JNZ(loc_37e99));	// 122203                  jnz     short loc_37E99 ;~ 296C:0228
loc_37eca:
	// 7239 
cs=0x296c;eip=0x00022a; 	T(si = 2;);	// 122206                  mov     si, 2 ;~ 296C:022A
cs=0x296c;eip=0x00022d; 	T(bx = word_4de5b;);	// 122207                  mov     bx, ds:word_4DE5B ;~ 296C:022D
cs=0x296c;eip=0x000231; 	T(cl = byte_4de54;);	// 122208                  mov     cl, ds:byte_4DE54 ;~ 296C:0231
cs=0x296c;eip=0x000235; 	T(dl = byte_4de65;);	// 122209                  mov     dl, ds:byte_4DE65 ;~ 296C:0235
cs=0x296c;eip=0x000239; 	J(CALLF(sub_499d5,0));	// 122210                  call    far ptr sub_499D5 ;~ 296C:0239
cs=0x296c;eip=0x00023e; 	T(ax = word_4e2f8;);	// 122212                  mov     ax, ds:word_4E2F8 ;~ 296C:023E
cs=0x296c;eip=0x000241; 	T(SUB(ax, 0x2000));	// 122213                  sub     ax, 2000h ;~ 296C:0241
cs=0x296c;eip=0x000244; 	T(dl = ah;);	// 122214                  mov     dl, ah ;~ 296C:0244
cs=0x296c;eip=0x000246; 	T(AND(ax, 0x1F80));	// 122215                  and     ax, 1F80h ;~ 296C:0246
cs=0x296c;eip=0x000249; 	T(SHL(ax, 1));	// 122216                  shl     ax, 1 ;~ 296C:0249
cs=0x296c;eip=0x00024b; 	T(XCHG(al, ah));	// 122217                  xchg    al, ah ;~ 296C:024B
cs=0x296c;eip=0x00024d; 	T(dh = *(db*)(&word_4de31););	// 122218                  mov     dh, byte ptr ds:word_4DE31 ;~ 296C:024D
cs=0x296c;eip=0x000251; 	T(MUL1_1(dh));	// 122219                  mul     dh ;~ 296C:0251
cs=0x296c;eip=0x000253; 	T(SHR(ax, 1));	// 122220                  shr     ax, 1 ;~ 296C:0253
cs=0x296c;eip=0x000255; 	T(SHR(ax, 1));	// 122221                  shr     ax, 1 ;~ 296C:0255
cs=0x296c;eip=0x000257; 	T(SHR(ax, 1));	// 122222                  shr     ax, 1 ;~ 296C:0257
cs=0x296c;eip=0x000259; 	T(SHR(ax, 1));	// 122223                  shr     ax, 1 ;~ 296C:0259
cs=0x296c;eip=0x00025b; 	T(SHR(ax, 1));	// 122224                  shr     ax, 1 ;~ 296C:025B
cs=0x296c;eip=0x00025d; 	T(SHR(ax, 1));	// 122225                  shr     ax, 1 ;~ 296C:025D
cs=0x296c;eip=0x00025f; 	X(byte_4de5d = al;);	// 122226                  mov     ds:byte_4DE5D, al ;~ 296C:025F
cs=0x296c;eip=0x000262; 	T(XCHG(al, ah));	// 122227                  xchg    al, ah ;~ 296C:0262
cs=0x296c;eip=0x000264; 	T(al = byte_4de26;);	// 122228                  mov     al, ds:byte_4DE26 ;~ 296C:0264
cs=0x296c;eip=0x000267; 	T(SUB(al, ah));	// 122229                  sub     al, ah ;~ 296C:0267
cs=0x296c;eip=0x000269; 	T(SUB(ah, ah));	// 122230                  sub     ah, ah ;~ 296C:0269
cs=0x296c;eip=0x00026b; 	X(word_4de59 = ax;);	// 122231                  mov     ds:word_4DE59, ax ;~ 296C:026B
cs=0x296c;eip=0x00026e; 	X(word_4dd74 = ax;);	// 122232                  mov     ds:word_4DD74, ax ;~ 296C:026E
cs=0x296c;eip=0x000271; 	T(SUB(dh, dh));	// 122233                  sub     dh, dh ;~ 296C:0271
cs=0x296c;eip=0x000273; 	T(SHR(dx, 1));	// 122234                  shr     dx, 1 ;~ 296C:0273
cs=0x296c;eip=0x000275; 	T(SHR(dx, 1));	// 122235                  shr     dx, 1 ;~ 296C:0275
cs=0x296c;eip=0x000277; 	T(AND(dx, 0x38));	// 122236                  and     dx, 38h ;~ 296C:0277
cs=0x296c;eip=0x00027a; 	X(word_4de57 = dx;);	// 122237                  mov     ds:word_4DE57, dx ;~ 296C:027A
cs=0x296c;eip=0x00027e; 	T(bx = 0x54BE;);	// 122238                  mov     bx, 54BEh ;~ 296C:027E
cs=0x296c;eip=0x000281; 	T(ADD(bx, dx));	// 122239                  add     bx, dx ;~ 296C:0281
cs=0x296c;eip=0x000283; 	T(bp = 0x528C;);	// 122240                  mov     bp, 528Ch ;~ 296C:0283
cs=0x296c;eip=0x000286; 	J(CALLF(sub_499a8,0));	// 122241                  call    far ptr sub_499A8 ;~ 296C:0286
cs=0x296c;eip=0x00028b; 	T(bx = 0x54BE;);	// 122243                  mov     bx, 54BEh ;~ 296C:028B
cs=0x296c;eip=0x00028e; 	X(ADD(word_4de57, 8));	// 122244                  add     ds:word_4DE57, 8 ;~ 296C:028E
cs=0x296c;eip=0x000293; 	X(AND(word_4de57, 0x3F));	// 122245                  and     ds:word_4DE57, 3Fh ;~ 296C:0293
cs=0x296c;eip=0x000298; 	T(ADD(bx, word_4de57));	// 122246                  add     bx, ds:word_4DE57 ;~ 296C:0298
cs=0x296c;eip=0x00029c; 	T(ax = word_4de59;);	// 122247                  mov     ax, ds:word_4DE59 ;~ 296C:029C
cs=0x296c;eip=0x00029f; 	T(ADD(ax, word_4de31));	// 122248                  add     ax, ds:word_4DE31 ;~ 296C:029F
cs=0x296c;eip=0x0002a3; 	X(word_4de59 = ax;);	// 122249                  mov     ds:word_4DE59, ax ;~ 296C:02A3
cs=0x296c;eip=0x0002a6; 	X(word_4dd74 = ax;);	// 122250                  mov     ds:word_4DD74, ax ;~ 296C:02A6
cs=0x296c;eip=0x0002a9; 	J(CALLF(sub_499b2,0));	// 122251                  call    far ptr sub_499B2 ;~ 296C:02A9
cs=0x296c;eip=0x0002ae; 	T(bx = 0x54BE;);	// 122253                  mov     bx, 54BEh ;~ 296C:02AE
cs=0x296c;eip=0x0002b1; 	X(ADD(word_4de57, 8));	// 122254                  add     ds:word_4DE57, 8 ;~ 296C:02B1
cs=0x296c;eip=0x0002b6; 	X(AND(word_4de57, 0x3F));	// 122255                  and     ds:word_4DE57, 3Fh ;~ 296C:02B6
cs=0x296c;eip=0x0002bb; 	T(ADD(bx, word_4de57));	// 122256                  add     bx, ds:word_4DE57 ;~ 296C:02BB
cs=0x296c;eip=0x0002bf; 	T(ax = word_4de59;);	// 122257                  mov     ax, ds:word_4DE59 ;~ 296C:02BF
cs=0x296c;eip=0x0002c2; 	T(ADD(ax, word_4de31));	// 122258                  add     ax, ds:word_4DE31 ;~ 296C:02C2
cs=0x296c;eip=0x0002c6; 	X(word_4de59 = ax;);	// 122259                  mov     ds:word_4DE59, ax ;~ 296C:02C6
cs=0x296c;eip=0x0002c9; 	X(word_4dd74 = ax;);	// 122260                  mov     ds:word_4DD74, ax ;~ 296C:02C9
cs=0x296c;eip=0x0002cc; 	J(CALLF(sub_499b2,0));	// 122261                  call    far ptr sub_499B2 ;~ 296C:02CC
cs=0x296c;eip=0x0002d1; 	T(ax = word_4de33;);	// 122263                  mov     ax, ds:word_4DE33 ;~ 296C:02D1
cs=0x296c;eip=0x0002d4; 	T(CMP(word_4de59, ax));	// 122264                  cmp     ds:word_4DE59, ax ;~ 296C:02D4
cs=0x296c;eip=0x0002d8; 	J(JNC(loc_37ff1));	// 122265                  jnb     short loc_37FF1 ;~ 296C:02D8
cs=0x296c;eip=0x0002da; 	T(bx = 0x54BE;);	// 122266                  mov     bx, 54BEh ;~ 296C:02DA
cs=0x296c;eip=0x0002dd; 	X(ADD(word_4de57, 8));	// 122267                  add     ds:word_4DE57, 8 ;~ 296C:02DD
cs=0x296c;eip=0x0002e2; 	X(AND(word_4de57, 0x3F));	// 122268                  and     ds:word_4DE57, 3Fh ;~ 296C:02E2
cs=0x296c;eip=0x0002e7; 	T(ADD(bx, word_4de57));	// 122269                  add     bx, ds:word_4DE57 ;~ 296C:02E7
cs=0x296c;eip=0x0002eb; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 122270                  mov     ax, [bx] ;~ 296C:02EB
cs=0x296c;eip=0x0002ed; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 122271                  mov     [bx+4], ax ;~ 296C:02ED
cs=0x296c;eip=0x0002f0; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 122272                  mov     ax, [bx+2] ;~ 296C:02F0
cs=0x296c;eip=0x0002f3; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 122273                  mov     [bx+6], ax ;~ 296C:02F3
cs=0x296c;eip=0x0002f6; 	T(ADD(bx, 4));	// 122274                  add     bx, 4 ;~ 296C:02F6
cs=0x296c;eip=0x0002f9; 	T(ax = word_4de59;);	// 122275                  mov     ax, ds:word_4DE59 ;~ 296C:02F9
cs=0x296c;eip=0x0002fc; 	T(ADD(ax, word_4de31));	// 122276                  add     ax, ds:word_4DE31 ;~ 296C:02FC
cs=0x296c;eip=0x000300; 	X(word_4de59 = ax;);	// 122277                  mov     ds:word_4DE59, ax ;~ 296C:0300
cs=0x296c;eip=0x000303; 	X(word_4dd74 = ax;);	// 122278                  mov     ds:word_4DD74, ax ;~ 296C:0303
cs=0x296c;eip=0x000306; 	J(CALLF(sub_499ad,0));	// 122279                  call    far ptr sub_499AD ;~ 296C:0306
cs=0x296c;eip=0x00030b; 	T(al = byte_4de5d;);	// 122281                  mov     al, ds:byte_4DE5D ;~ 296C:030B
cs=0x296c;eip=0x00030e; 	T(SUB(ah, ah));	// 122282                  sub     ah, ah ;~ 296C:030E
cs=0x296c;eip=0x000310; 	T(dl = *(db*)(&word_4de35););	// 122283                  mov     dl, byte ptr ds:word_4DE35 ;~ 296C:0310
cs=0x296c;eip=0x000314; 	T(DIV1(dl));	// 122284                  div     dl ;~ 296C:0314
cs=0x296c;eip=0x000316; 	T(XCHG(al, ah));	// 122285                  xchg    al, ah ;~ 296C:0316
cs=0x296c;eip=0x000318; 	T(SUB(ah, ah));	// 122286                  sub     ah, ah ;~ 296C:0318
cs=0x296c;eip=0x00031a; 	T(TEST(word_4e2f8, 0x2000));	// 122287                  test    ds:word_4E2F8, 2000h ;~ 296C:031A
cs=0x296c;eip=0x000320; 	J(JZ(loc_37fc6));	// 122288                  jz      short loc_37FC6 ;~ 296C:0320
cs=0x296c;eip=0x000322; 	T(ADD(ax, word_4de37));	// 122289                  add     ax, ds:word_4DE37 ;~ 296C:0322
loc_37fc6:
	// 7240 
cs=0x296c;eip=0x000326; 	T(CMP(ax, word_4de35));	// 122292                  cmp     ax, ds:word_4DE35 ;~ 296C:0326
cs=0x296c;eip=0x00032a; 	J(JL(loc_37fd0));	// 122293                  jl      short loc_37FD0 ;~ 296C:032A
cs=0x296c;eip=0x00032c; 	T(SUB(ax, word_4de35));	// 122294                  sub     ax, ds:word_4DE35 ;~ 296C:032C
loc_37fd0:
	// 7241 
cs=0x296c;eip=0x000330; 	T(di = ax;);	// 122297                  mov     di, ax ;~ 296C:0330
cs=0x296c;eip=0x000332; 	T(SHL(di, 1));	// 122298                  shl     di, 1 ;~ 296C:0332
cs=0x296c;eip=0x000334; 	T(CMP(byte_4de54, 1));	// 122299                  cmp     ds:byte_4DE54, 1 ;~ 296C:0334
cs=0x296c;eip=0x000339; 	J(JNZ(loc_37fe2));	// 122300                  jnz     short loc_37FE2 ;~ 296C:0339
cs=0x296c;eip=0x00033b; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x5512))));	// 122301                  mov     ax, [di+5512h] ;~ 296C:033B
cs=0x296c;eip=0x00033f; 	J(JMP(loc_37fe6));	// 122302                  jmp     short loc_37FE6 ;~ 296C:033F
loc_37fe2:
	// 7242 
cs=0x296c;eip=0x000342; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x54FE))));	// 122308                  mov     ax, [di+54FEh] ;~ 296C:0342
loc_37fe6:
	// 7243 
cs=0x296c;eip=0x000346; 	X(word_4ddb2 = ax;);	// 122311                  mov     ds:word_4DDB2, ax ;~ 296C:0346
cs=0x296c;eip=0x000349; 	T(bp = 0x52CE;);	// 122312                  mov     bp, 52CEh ;~ 296C:0349
cs=0x296c;eip=0x00034c; 	J(CALLF(sub_499f8,0));	// 122313                  call    far ptr sub_499F8 ;~ 296C:034C
loc_37ff1:
	// 7244 
cs=0x296c;eip=0x000351; 	T(CMP(byte_4de54, 0));	// 122317                  cmp     ds:byte_4DE54, 0 ;~ 296C:0351
cs=0x296c;eip=0x000356; 	J(JZ(loc_37ffb));	// 122318                  jz      short loc_37FFB ;~ 296C:0356
cs=0x296c;eip=0x000358; 	J(JMP(loc_3807c));	// 122319                  jmp     loc_3807C ;~ 296C:0358
loc_37ffb:
	// 7245 
cs=0x296c;eip=0x00035b; 	T(ax = 0x2E;);	// 122323                  mov     ax, 2Eh ; '.' ;~ 296C:035B
cs=0x296c;eip=0x00035e; 	T(cx = 0x2E;);	// 122324                  mov     cx, 2Eh ; '.' ;~ 296C:035E
cs=0x296c;eip=0x000361; 	T(bx = 0x60;);	// 122325                  mov     bx, 60h ; '`' ;~ 296C:0361
cs=0x296c;eip=0x000364; 	T(dx = 0x0F;);	// 122326                  mov     dx, 0Fh ;~ 296C:0364
cs=0x296c;eip=0x000367; 	J(CALLF(sub_49a39,0));	// 122327                  call    far ptr sub_49A39 ;~ 296C:0367
cs=0x296c;eip=0x00036c; 	T(ax = 0x112;);	// 122329                  mov     ax, 112h ;~ 296C:036C
cs=0x296c;eip=0x00036f; 	T(cx = 0x112;);	// 122330                  mov     cx, 112h ;~ 296C:036F
cs=0x296c;eip=0x000372; 	T(bx = 0x60;);	// 122331                  mov     bx, 60h ; '`' ;~ 296C:0372
cs=0x296c;eip=0x000375; 	T(dx = 0x0F;);	// 122332                  mov     dx, 0Fh ;~ 296C:0375
cs=0x296c;eip=0x000378; 	J(CALLF(sub_49a39,0));	// 122333                  call    far ptr sub_49A39 ;~ 296C:0378
cs=0x296c;eip=0x00037d; 	T(ah = 8;);	// 122335                  mov     ah, 8 ;~ 296C:037D
cs=0x296c;eip=0x00037f; 	J(CALLF(sub_49a3e,0));	// 122336                  call    far ptr sub_49A3E ;~ 296C:037F
cs=0x296c;eip=0x000384; 	T(ax = 0x2D;);	// 122338                  mov     ax, 2Dh ; '-' ;~ 296C:0384
cs=0x296c;eip=0x000387; 	T(cx = 0x2D;);	// 122339                  mov     cx, 2Dh ; '-' ;~ 296C:0387
cs=0x296c;eip=0x00038a; 	T(bx = 0x60;);	// 122340                  mov     bx, 60h ; '`' ;~ 296C:038A
cs=0x296c;eip=0x00038d; 	T(dx = 0x0F;);	// 122341                  mov     dx, 0Fh ;~ 296C:038D
cs=0x296c;eip=0x000390; 	J(CALLF(sub_49a39,0));	// 122342                  call    far ptr sub_49A39 ;~ 296C:0390
cs=0x296c;eip=0x000395; 	T(ax = 0x113;);	// 122344                  mov     ax, 113h ;~ 296C:0395
cs=0x296c;eip=0x000398; 	T(cx = 0x113;);	// 122345                  mov     cx, 113h ;~ 296C:0398
cs=0x296c;eip=0x00039b; 	T(bx = 0x60;);	// 122346                  mov     bx, 60h ; '`' ;~ 296C:039B
cs=0x296c;eip=0x00039e; 	T(dx = 0x0F;);	// 122347                  mov     dx, 0Fh ;~ 296C:039E
cs=0x296c;eip=0x0003a1; 	J(CALLF(sub_49a39,0));	// 122348                  call    far ptr sub_49A39 ;~ 296C:03A1
cs=0x296c;eip=0x0003a6; 	T(ax = 0x113;);	// 122350                  mov     ax, 113h ;~ 296C:03A6
cs=0x296c;eip=0x0003a9; 	T(cx = 0x0E8;);	// 122351                  mov     cx, 0E8h ;~ 296C:03A9
cs=0x296c;eip=0x0003ac; 	T(bx = 0x0F;);	// 122352                  mov     bx, 0Fh ;~ 296C:03AC
cs=0x296c;eip=0x0003af; 	T(dx = 3;);	// 122353                  mov     dx, 3 ;~ 296C:03AF
cs=0x296c;eip=0x0003b2; 	J(CALLF(sub_49a39,0));	// 122354                  call    far ptr sub_49A39 ;~ 296C:03B2
cs=0x296c;eip=0x0003b7; 	T(ax = 0x0E8;);	// 122356                  mov     ax, 0E8h ;~ 296C:03B7
cs=0x296c;eip=0x0003ba; 	T(cx = 0x5A;);	// 122357                  mov     cx, 5Ah ; 'Z' ;~ 296C:03BA
cs=0x296c;eip=0x0003bd; 	T(bx = 3;);	// 122358                  mov     bx, 3 ;~ 296C:03BD
cs=0x296c;eip=0x0003c0; 	T(dx = 3;);	// 122359                  mov     dx, 3 ;~ 296C:03C0
cs=0x296c;eip=0x0003c3; 	J(CALLF(sub_49a39,0));	// 122360                  call    far ptr sub_49A39 ;~ 296C:03C3
cs=0x296c;eip=0x0003c8; 	T(ax = 0x2D;);	// 122362                  mov     ax, 2Dh ; '-' ;~ 296C:03C8
cs=0x296c;eip=0x0003cb; 	T(cx = 0x59;);	// 122363                  mov     cx, 59h ; 'Y' ;~ 296C:03CB
cs=0x296c;eip=0x0003ce; 	T(bx = 0x0F;);	// 122364                  mov     bx, 0Fh ;~ 296C:03CE
cs=0x296c;eip=0x0003d1; 	T(dx = 3;);	// 122365                  mov     dx, 3 ;~ 296C:03D1
cs=0x296c;eip=0x0003d4; 	J(CALLF(sub_49a39,0));	// 122366                  call    far ptr sub_49A39 ;~ 296C:03D4
cs=0x296c;eip=0x0003d9; 	J(JMP(loc_380fa));	// 122368                  jmp     short loc_380FA ;~ 296C:03D9
loc_3807c:
	// 7246 
cs=0x296c;eip=0x0003dc; 	T(ax = 0x67;);	// 122374                  mov     ax, 67h ; 'g' ;~ 296C:03DC
cs=0x296c;eip=0x0003df; 	T(cx = 0x67;);	// 122375                  mov     cx, 67h ; 'g' ;~ 296C:03DF
cs=0x296c;eip=0x0003e2; 	T(bx = 0x60;);	// 122376                  mov     bx, 60h ; '`' ;~ 296C:03E2
cs=0x296c;eip=0x0003e5; 	T(dx = 0x3F;);	// 122377                  mov     dx, 3Fh ; '?' ;~ 296C:03E5
cs=0x296c;eip=0x0003e8; 	J(CALLF(sub_49a39,0));	// 122378                  call    far ptr sub_49A39 ;~ 296C:03E8
cs=0x296c;eip=0x0003ed; 	T(ax = 0x0D9;);	// 122380                  mov     ax, 0D9h ;~ 296C:03ED
cs=0x296c;eip=0x0003f0; 	T(cx = 0x0D9;);	// 122381                  mov     cx, 0D9h ;~ 296C:03F0
cs=0x296c;eip=0x0003f3; 	T(bx = 0x60;);	// 122382                  mov     bx, 60h ; '`' ;~ 296C:03F3
cs=0x296c;eip=0x0003f6; 	T(dx = 0x3F;);	// 122383                  mov     dx, 3Fh ; '?' ;~ 296C:03F6
cs=0x296c;eip=0x0003f9; 	J(CALLF(sub_49a39,0));	// 122384                  call    far ptr sub_49A39 ;~ 296C:03F9
cs=0x296c;eip=0x0003fe; 	T(ah = 8;);	// 122386                  mov     ah, 8 ;~ 296C:03FE
cs=0x296c;eip=0x000400; 	J(CALLF(sub_49a3e,0));	// 122387                  call    far ptr sub_49A3E ;~ 296C:0400
cs=0x296c;eip=0x000405; 	T(ax = 0x66;);	// 122389                  mov     ax, 66h ; 'f' ;~ 296C:0405
cs=0x296c;eip=0x000408; 	T(cx = 0x66;);	// 122390                  mov     cx, 66h ; 'f' ;~ 296C:0408
cs=0x296c;eip=0x00040b; 	T(bx = 0x60;);	// 122391                  mov     bx, 60h ; '`' ;~ 296C:040B
cs=0x296c;eip=0x00040e; 	T(dx = 0x3F;);	// 122392                  mov     dx, 3Fh ; '?' ;~ 296C:040E
cs=0x296c;eip=0x000411; 	J(CALLF(sub_49a39,0));	// 122393                  call    far ptr sub_49A39 ;~ 296C:0411
cs=0x296c;eip=0x000416; 	T(ax = 0x0DA;);	// 122395                  mov     ax, 0DAh ;~ 296C:0416
cs=0x296c;eip=0x000419; 	T(cx = 0x0DA;);	// 122396                  mov     cx, 0DAh ;~ 296C:0419
cs=0x296c;eip=0x00041c; 	T(bx = 0x60;);	// 122397                  mov     bx, 60h ; '`' ;~ 296C:041C
cs=0x296c;eip=0x00041f; 	T(dx = 0x3F;);	// 122398                  mov     dx, 3Fh ; '?' ;~ 296C:041F
cs=0x296c;eip=0x000422; 	J(CALLF(sub_49a39,0));	// 122399                  call    far ptr sub_49A39 ;~ 296C:0422
cs=0x296c;eip=0x000427; 	T(ax = 0x0D9;);	// 122401                  mov     ax, 0D9h ;~ 296C:0427
cs=0x296c;eip=0x00042a; 	T(cx = 0x0C4;);	// 122402                  mov     cx, 0C4h ;~ 296C:042A
cs=0x296c;eip=0x00042d; 	T(bx = 0x3F;);	// 122403                  mov     bx, 3Fh ; '?' ;~ 296C:042D
cs=0x296c;eip=0x000430; 	T(dx = 0x39;);	// 122404                  mov     dx, 39h ; '9' ;~ 296C:0430
cs=0x296c;eip=0x000433; 	J(CALLF(sub_49a39,0));	// 122405                  call    far ptr sub_49A39 ;~ 296C:0433
cs=0x296c;eip=0x000438; 	T(ax = 0x0C4;);	// 122407                  mov     ax, 0C4h ;~ 296C:0438
cs=0x296c;eip=0x00043b; 	T(cx = 0x7C;);	// 122408                  mov     cx, 7Ch ; '|' ;~ 296C:043B
cs=0x296c;eip=0x00043e; 	T(bx = 0x39;);	// 122409                  mov     bx, 39h ; '9' ;~ 296C:043E
cs=0x296c;eip=0x000441; 	T(dx = 0x39;);	// 122410                  mov     dx, 39h ; '9' ;~ 296C:0441
cs=0x296c;eip=0x000444; 	J(CALLF(sub_49a39,0));	// 122411                  call    far ptr sub_49A39 ;~ 296C:0444
cs=0x296c;eip=0x000449; 	T(ax = 0x7C;);	// 122413                  mov     ax, 7Ch ; '|' ;~ 296C:0449
cs=0x296c;eip=0x00044c; 	T(cx = 0x67;);	// 122414                  mov     cx, 67h ; 'g' ;~ 296C:044C
cs=0x296c;eip=0x00044f; 	T(bx = 0x39;);	// 122415                  mov     bx, 39h ; '9' ;~ 296C:044F
cs=0x296c;eip=0x000452; 	T(dx = 0x3F;);	// 122416                  mov     dx, 3Fh ; '?' ;~ 296C:0452
cs=0x296c;eip=0x000455; 	J(CALLF(sub_49a39,0));	// 122417                  call    far ptr sub_49A39 ;~ 296C:0455
loc_380fa:
	// 7247 
cs=0x296c;eip=0x00045a; 	J(CALLF(sub_49a48,0));	// 122421                  call    far ptr sub_49A48 ;~ 296C:045A
cs=0x296c;eip=0x00045f; 	T(CMP(byte_4de5f, 0));	// 122423                  cmp     ds:byte_4DE5F, 0 ;~ 296C:045F
cs=0x296c;eip=0x000464; 	J(JZ(loc_3810e));	// 122424                  jz      short loc_3810E ;~ 296C:0464
cs=0x296c;eip=0x000466; 	T(bp = 0x52EC;);	// 122425                  mov     bp, 52ECh ;~ 296C:0466
cs=0x296c;eip=0x000469; 	J(CALLF(sub_499f8,0));	// 122426                  call    far ptr sub_499F8 ;~ 296C:0469
loc_3810e:
	// 7248 
cs=0x296c;eip=0x00046e; 	T(bx = 0x6720;);	// 122430                  mov     bx, 6720h ;~ 296C:046E
cs=0x296c;eip=0x000471; 	T(bp = 0x52B8;);	// 122431                  mov     bp, 52B8h ;~ 296C:0471
cs=0x296c;eip=0x000474; 	T(ax = word_4de52;);	// 122432                  mov     ax, ds:word_4DE52 ;~ 296C:0474
cs=0x296c;eip=0x000477; 	X(word_4dda0 = ax;);	// 122433                  mov     ds:word_4DDA0, ax ;~ 296C:0477
cs=0x296c;eip=0x00047a; 	J(CALLF(sub_499b2,0));	// 122434                  call    far ptr sub_499B2 ;~ 296C:047A
cs=0x296c;eip=0x00047f; 	T(ax = word_4e2fa;);	// 122436                  mov     ax, ds:word_4E2FA ;~ 296C:047F
cs=0x296c;eip=0x000482; 	T(CMP(ax, 0));	// 122437                  cmp     ax, 0 ;~ 296C:0482
cs=0x296c;eip=0x000485; 	J(JGE(loc_38129));	// 122438                  jge     short loc_38129 ;~ 296C:0485
cs=0x296c;eip=0x000487; 	T(NEG(ax));	// 122439                  neg     ax ;~ 296C:0487
loc_38129:
	// 7249 
cs=0x296c;eip=0x000489; 	T(SHR(ax, 1));	// 122442                  shr     ax, 1 ;~ 296C:0489
cs=0x296c;eip=0x00048b; 	T(SHR(ax, 1));	// 122443                  shr     ax, 1 ;~ 296C:048B
cs=0x296c;eip=0x00048d; 	T(SHR(ax, 1));	// 122444                  shr     ax, 1 ;~ 296C:048D
cs=0x296c;eip=0x00048f; 	T(SHR(ax, 1));	// 122445                  shr     ax, 1 ;~ 296C:048F
cs=0x296c;eip=0x000491; 	T(SHR(ax, 1));	// 122446                  shr     ax, 1 ;~ 296C:0491
cs=0x296c;eip=0x000493; 	T(SHR(ax, 1));	// 122447                  shr     ax, 1 ;~ 296C:0493
cs=0x296c;eip=0x000495; 	T(bx = 0x168;);	// 122448                  mov     bx, 168h ;~ 296C:0495
cs=0x296c;eip=0x000498; 	T(MUL1_2(bx));	// 122449                  mul     bx ;~ 296C:0498
cs=0x296c;eip=0x00049a; 	T(al = ah;);	// 122450                  mov     al, ah ;~ 296C:049A
cs=0x296c;eip=0x00049c; 	T(ah = dl;);	// 122451                  mov     ah, dl ;~ 296C:049C
cs=0x296c;eip=0x00049e; 	T(bl = 0x28;);	// 122452                  mov     bl, 28h ; '(' ;~ 296C:049E
cs=0x296c;eip=0x0004a0; 	T(DIV1(bl));	// 122453                  div     bl ;~ 296C:04A0
cs=0x296c;eip=0x0004a2; 	T(ch = al;);	// 122454                  mov     ch, al ;~ 296C:04A2
cs=0x296c;eip=0x0004a4; 	T(al = ah;);	// 122455                  mov     al, ah ;~ 296C:04A4
cs=0x296c;eip=0x0004a6; 	T(SUB(ah, ah));	// 122456                  sub     ah, ah ;~ 296C:04A6
cs=0x296c;eip=0x0004a8; 	T(bh = *(db*)(&word_4de41););	// 122457                  mov     bh, byte ptr ds:word_4DE41 ;~ 296C:04A8
cs=0x296c;eip=0x0004ac; 	T(MUL1_1(bh));	// 122458                  mul     bh ;~ 296C:04AC
cs=0x296c;eip=0x0004ae; 	T(bx = 0x28;);	// 122459                  mov     bx, 28h ; '(' ;~ 296C:04AE
cs=0x296c;eip=0x0004b1; 	T(dx = 0;);	// 122460                  mov     dx, 0 ;~ 296C:04B1
cs=0x296c;eip=0x0004b4; 	T(DIV2(bx));	// 122461                  div     bx ;~ 296C:04B4
cs=0x296c;eip=0x0004b6; 	T(CMP(word_4e2fa, 0));	// 122462                  cmp     ds:word_4E2FA, 0 ;~ 296C:04B6
cs=0x296c;eip=0x0004bb; 	J(JGE(loc_38165));	// 122463                  jge     short loc_38165 ;~ 296C:04BB
cs=0x296c;eip=0x0004bd; 	T(ah = *(db*)(&word_4de41););	// 122464                  mov     ah, byte ptr ds:word_4DE41 ;~ 296C:04BD
cs=0x296c;eip=0x0004c1; 	T(SUB(ah, al));	// 122465                  sub     ah, al ;~ 296C:04C1
cs=0x296c;eip=0x0004c3; 	T(XCHG(ah, al));	// 122466                  xchg    ah, al ;~ 296C:04C3
loc_38165:
	// 7250 
cs=0x296c;eip=0x0004c5; 	T(ADD(al, byte_4de43));	// 122469                  add     al, ds:byte_4DE43 ;~ 296C:04C5
cs=0x296c;eip=0x0004c9; 	T(SUB(ah, ah));	// 122470                  sub     ah, ah ;~ 296C:04C9
cs=0x296c;eip=0x0004cb; 	T(bx = ax;);	// 122471                  mov     bx, ax ;~ 296C:04CB
cs=0x296c;eip=0x0004cd; 	T(CMP(word_4e2fa, 0));	// 122472                  cmp     ds:word_4E2FA, 0 ;~ 296C:04CD
cs=0x296c;eip=0x0004d2; 	J(JGE(loc_38178));	// 122473                  jge     short loc_38178 ;~ 296C:04D2
cs=0x296c;eip=0x0004d4; 	T(NEG(ch));	// 122474                  neg     ch ;~ 296C:04D4
cs=0x296c;eip=0x0004d6; 	T(DEC(ch));	// 122475                  dec     ch ;~ 296C:04D6
loc_38178:
	// 7251 
cs=0x296c;eip=0x0004d8; 	T(al = ch;);	// 122478                  mov     al, ch ;~ 296C:04D8
cs=0x296c;eip=0x0004da; 	T(CBW);	// 122479                  cbw ;~ 296C:04DA
cs=0x296c;eip=0x0004db; 	T(SUB(ax, 2));	// 122480                  sub     ax, 2 ;~ 296C:04DB
cs=0x296c;eip=0x0004de; 	X(word_4e120 = ax;);	// 122481                  mov     ds:word_4E120, ax ;~ 296C:04DE
cs=0x296c;eip=0x0004e1; 	T(dx = ax;);	// 122482                  mov     dx, ax ;~ 296C:04E1
cs=0x296c;eip=0x0004e3; 	T(cl = 5;);	// 122483                  mov     cl, 5 ;~ 296C:04E3
cs=0x296c;eip=0x0004e5; 	T(di = 0;);	// 122484                  mov     di, 0 ;~ 296C:04E5
cs=0x296c;eip=0x0004e8; 	T(si = di;);	// 122485                  mov     si, di ;~ 296C:04E8
cs=0x296c;eip=0x0004ea; 	T(ch = 0;);	// 122486                  mov     ch, 0 ;~ 296C:04EA
loc_3818c:
	// 7252 
cs=0x296c;eip=0x0004ec; 	T(CMP(dl, 9));	// 122490                  cmp     dl, 9 ;~ 296C:04EC
cs=0x296c;eip=0x0004ef; 	J(JZ(loc_381a4));	// 122491                  jz      short loc_381A4 ;~ 296C:04EF
cs=0x296c;eip=0x0004f1; 	J(JG(loc_381a7));	// 122492                  jg      short loc_381A7 ;~ 296C:04F1
cs=0x296c;eip=0x0004f3; 	T(CMP(dl, 0x0F7));	// 122493                  cmp     dl, 0F7h ;~ 296C:04F3
cs=0x296c;eip=0x0004f6; 	J(JZ(loc_381ad));	// 122494                  jz      short loc_381AD ;~ 296C:04F6
cs=0x296c;eip=0x0004f8; 	J(JL(loc_381aa));	// 122495                  jl      short loc_381AA ;~ 296C:04F8
cs=0x296c;eip=0x0004fa; 	T(CMP(dl, 0));	// 122496                  cmp     dl, 0 ;~ 296C:04FA
cs=0x296c;eip=0x0004fd; 	J(JZ(loc_381ad));	// 122497                  jz      short loc_381AD ;~ 296C:04FD
cs=0x296c;eip=0x0004ff; 	J(JG(loc_38204));	// 122498                  jg      short loc_38204 ;~ 296C:04FF
cs=0x296c;eip=0x000501; 	J(JMP(loc_38372));	// 122499                  jmp     loc_38372 ;~ 296C:0501
loc_381a4:
	// 7253 
cs=0x296c;eip=0x000504; 	J(JMP(loc_382bc));	// 122503                  jmp     loc_382BC ;~ 296C:0504
loc_381a7:
	// 7254 
cs=0x296c;eip=0x000507; 	J(JMP(loc_38260));	// 122507                  jmp     loc_38260 ;~ 296C:0507
loc_381aa:
	// 7255 
cs=0x296c;eip=0x00050a; 	J(JMP(loc_38300));	// 122511                  jmp     loc_38300 ;~ 296C:050A
loc_381ad:
	// 7256 
cs=0x296c;eip=0x00050d; 	T(ax = word_4de39;);	// 122516                  mov     ax, ds:word_4DE39 ;~ 296C:050D
cs=0x296c;eip=0x000510; 	X(MOV(*(dw*)(raddr(ds,di+0x5526)), ax));	// 122517                  mov     [di+5526h], ax ;~ 296C:0510
cs=0x296c;eip=0x000514; 	T(ax = word_4de3b;);	// 122518                  mov     ax, ds:word_4DE3B ;~ 296C:0514
cs=0x296c;eip=0x000517; 	X(MOV(*(dw*)(raddr(ds,di+0x5528)), ax));	// 122519                  mov     [di+5528h], ax ;~ 296C:0517
cs=0x296c;eip=0x00051b; 	T(ax = word_4de3d;);	// 122520                  mov     ax, ds:word_4DE3D ;~ 296C:051B
cs=0x296c;eip=0x00051e; 	X(MOV(*(dw*)(raddr(ds,di+0x552A)), ax));	// 122521                  mov     [di+552Ah], ax ;~ 296C:051E
cs=0x296c;eip=0x000522; 	T(ax = word_4de3f;);	// 122522                  mov     ax, ds:word_4DE3F ;~ 296C:0522
cs=0x296c;eip=0x000525; 	X(MOV(*(dw*)(raddr(ds,di+0x552C)), ax));	// 122523                  mov     [di+552Ch], ax ;~ 296C:0525
cs=0x296c;eip=0x000529; 	X(MOV(*(dw*)(raddr(ds,di+0x5596)), bx));	// 122524                  mov     [di+5596h], bx ;~ 296C:0529
cs=0x296c;eip=0x00052d; 	X(MOV(*(dw*)(raddr(ds,di+0x5598)), bx));	// 122525                  mov     [di+5598h], bx ;~ 296C:052D
cs=0x296c;eip=0x000531; 	X(MOV(*(dw*)(raddr(ds,di+0x559A)), bx));	// 122526                  mov     [di+559Ah], bx ;~ 296C:0531
cs=0x296c;eip=0x000535; 	X(MOV(*(dw*)(raddr(ds,di+0x559C)), bx));	// 122527                  mov     [di+559Ch], bx ;~ 296C:0535
cs=0x296c;eip=0x000539; 	X(MOV(*(raddr(ds,si+0x5606)), 1));	// 122528                  mov     byte ptr [si+5606h], 1 ;~ 296C:0539
cs=0x296c;eip=0x00053e; 	X(MOV(*(raddr(ds,si+0x5607)), 1));	// 122529                  mov     byte ptr [si+5607h], 1 ;~ 296C:053E
cs=0x296c;eip=0x000543; 	X(MOV(*(dw*)(raddr(ds,si+0x5622)), di));	// 122530                  mov     [si+5622h], di ;~ 296C:0543
cs=0x296c;eip=0x000547; 	T(ADD(di, 6));	// 122531                  add     di, 6 ;~ 296C:0547
cs=0x296c;eip=0x00054a; 	X(MOV(*(dw*)(raddr(ds,si+0x5623)), di));	// 122532                  mov     [si+5623h], di ;~ 296C:054A
cs=0x296c;eip=0x00054e; 	T(ADD(di, 2));	// 122533                  add     di, 2 ;~ 296C:054E
cs=0x296c;eip=0x000551; 	T(ADD(si, 2));	// 122534                  add     si, 2 ;~ 296C:0551
cs=0x296c;eip=0x000554; 	T(SUB(bx, word_4de41));	// 122535                  sub     bx, ds:word_4DE41 ;~ 296C:0554
cs=0x296c;eip=0x000558; 	T(ADD(ch, 2));	// 122536                  add     ch, 2 ;~ 296C:0558
cs=0x296c;eip=0x00055b; 	T(INC(dl));	// 122537                  inc     dl ;~ 296C:055B
cs=0x296c;eip=0x00055d; 	T(DEC(cl));	// 122538                  dec     cl ;~ 296C:055D
cs=0x296c;eip=0x00055f; 	J(JNZ(loc_3818c));	// 122539                  jnz     short loc_3818C ;~ 296C:055F
cs=0x296c;eip=0x000561; 	J(JMP(loc_383e1));	// 122540                  jmp     loc_383E1 ;~ 296C:0561
loc_38204:
	// 7257 
cs=0x296c;eip=0x000564; 	T(ax = word_4de39;);	// 122544                  mov     ax, ds:word_4DE39 ;~ 296C:0564
cs=0x296c;eip=0x000567; 	X(MOV(*(dw*)(raddr(ds,di+0x5526)), ax));	// 122545                  mov     [di+5526h], ax ;~ 296C:0567
cs=0x296c;eip=0x00056b; 	X(MOV(*(dw*)(raddr(ds,di+0x5528)), ax));	// 122546                  mov     [di+5528h], ax ;~ 296C:056B
cs=0x296c;eip=0x00056f; 	T(ax = word_4de3f;);	// 122547                  mov     ax, ds:word_4DE3F ;~ 296C:056F
cs=0x296c;eip=0x000572; 	X(MOV(*(dw*)(raddr(ds,di+0x552A)), ax));	// 122548                  mov     [di+552Ah], ax ;~ 296C:0572
cs=0x296c;eip=0x000576; 	X(MOV(*(dw*)(raddr(ds,di+0x552C)), ax));	// 122549                  mov     [di+552Ch], ax ;~ 296C:0576
cs=0x296c;eip=0x00057a; 	X(MOV(*(dw*)(raddr(ds,di+0x5598)), bx));	// 122550                  mov     [di+5598h], bx ;~ 296C:057A
cs=0x296c;eip=0x00057e; 	X(MOV(*(dw*)(raddr(ds,di+0x559A)), bx));	// 122551                  mov     [di+559Ah], bx ;~ 296C:057E
cs=0x296c;eip=0x000582; 	T(ax = bx;);	// 122552                  mov     ax, bx ;~ 296C:0582
cs=0x296c;eip=0x000584; 	T(ADD(ax, 5));	// 122553                  add     ax, 5 ;~ 296C:0584
cs=0x296c;eip=0x000587; 	X(MOV(*(dw*)(raddr(ds,di+0x5596)), ax));	// 122554                  mov     [di+5596h], ax ;~ 296C:0587
cs=0x296c;eip=0x00058b; 	X(MOV(*(dw*)(raddr(ds,di+0x559C)), ax));	// 122555                  mov     [di+559Ch], ax ;~ 296C:058B
cs=0x296c;eip=0x00058f; 	X(MOV(*(raddr(ds,si+0x5606)), 3));	// 122556                  mov     byte ptr [si+5606h], 3 ;~ 296C:058F
cs=0x296c;eip=0x000594; 	X(MOV(*(raddr(ds,si+0x5607)), 0));	// 122557                  mov     byte ptr [si+5607h], 0 ;~ 296C:0594
cs=0x296c;eip=0x000599; 	T(ADD(di, 2));	// 122558                  add     di, 2 ;~ 296C:0599
cs=0x296c;eip=0x00059c; 	X(MOV(*(dw*)(raddr(ds,si+0x5622)), di));	// 122559                  mov     [si+5622h], di ;~ 296C:059C
cs=0x296c;eip=0x0005a0; 	T(ADD(di, 2));	// 122560                  add     di, 2 ;~ 296C:05A0
cs=0x296c;eip=0x0005a3; 	X(MOV(*(dw*)(raddr(ds,si+0x5623)), di));	// 122561                  mov     [si+5623h], di ;~ 296C:05A3
cs=0x296c;eip=0x0005a7; 	T(ADD(di, 4));	// 122562                  add     di, 4 ;~ 296C:05A7
cs=0x296c;eip=0x0005aa; 	T(ADD(si, 2));	// 122563                  add     si, 2 ;~ 296C:05AA
cs=0x296c;eip=0x0005ad; 	T(SUB(bx, word_4de41));	// 122564                  sub     bx, ds:word_4DE41 ;~ 296C:05AD
cs=0x296c;eip=0x0005b1; 	T(ADD(ch, 3));	// 122565                  add     ch, 3 ;~ 296C:05B1
cs=0x296c;eip=0x0005b4; 	T(INC(dl));	// 122566                  inc     dl ;~ 296C:05B4
cs=0x296c;eip=0x0005b6; 	T(DEC(cl));	// 122567                  dec     cl ;~ 296C:05B6
cs=0x296c;eip=0x0005b8; 	J(JNZ(loc_3825d));	// 122568                  jnz     short loc_3825D ;~ 296C:05B8
cs=0x296c;eip=0x0005ba; 	J(JMP(loc_383e1));	// 122569                  jmp     loc_383E1 ;~ 296C:05BA
loc_3825d:
	// 7258 
cs=0x296c;eip=0x0005bd; 	J(JMP(loc_3818c));	// 122573                  jmp     loc_3818C ;~ 296C:05BD
loc_38260:
	// 7259 
cs=0x296c;eip=0x0005c0; 	T(ax = word_4de39;);	// 122577                  mov     ax, ds:word_4DE39 ;~ 296C:05C0
cs=0x296c;eip=0x0005c3; 	X(MOV(*(dw*)(raddr(ds,di+0x5526)), ax));	// 122578                  mov     [di+5526h], ax ;~ 296C:05C3
cs=0x296c;eip=0x0005c7; 	X(MOV(*(dw*)(raddr(ds,di+0x5528)), ax));	// 122579                  mov     [di+5528h], ax ;~ 296C:05C7
cs=0x296c;eip=0x0005cb; 	T(ax = word_4de3f;);	// 122580                  mov     ax, ds:word_4DE3F ;~ 296C:05CB
cs=0x296c;eip=0x0005ce; 	X(MOV(*(dw*)(raddr(ds,di+0x552A)), ax));	// 122581                  mov     [di+552Ah], ax ;~ 296C:05CE
cs=0x296c;eip=0x0005d2; 	X(MOV(*(dw*)(raddr(ds,di+0x552C)), ax));	// 122582                  mov     [di+552Ch], ax ;~ 296C:05D2
cs=0x296c;eip=0x0005d6; 	X(MOV(*(dw*)(raddr(ds,di+0x5598)), bx));	// 122583                  mov     [di+5598h], bx ;~ 296C:05D6
cs=0x296c;eip=0x0005da; 	X(MOV(*(dw*)(raddr(ds,di+0x559A)), bx));	// 122584                  mov     [di+559Ah], bx ;~ 296C:05DA
cs=0x296c;eip=0x0005de; 	T(ax = bx;);	// 122585                  mov     ax, bx ;~ 296C:05DE
cs=0x296c;eip=0x0005e0; 	T(SUB(ax, 5));	// 122586                  sub     ax, 5 ;~ 296C:05E0
cs=0x296c;eip=0x0005e3; 	X(MOV(*(dw*)(raddr(ds,di+0x5596)), ax));	// 122587                  mov     [di+5596h], ax ;~ 296C:05E3
cs=0x296c;eip=0x0005e7; 	X(MOV(*(dw*)(raddr(ds,di+0x559C)), ax));	// 122588                  mov     [di+559Ch], ax ;~ 296C:05E7
cs=0x296c;eip=0x0005eb; 	X(MOV(*(raddr(ds,si+0x5606)), 3));	// 122589                  mov     byte ptr [si+5606h], 3 ;~ 296C:05EB
cs=0x296c;eip=0x0005f0; 	X(MOV(*(raddr(ds,si+0x5607)), 0));	// 122590                  mov     byte ptr [si+5607h], 0 ;~ 296C:05F0
cs=0x296c;eip=0x0005f5; 	T(ADD(di, 2));	// 122591                  add     di, 2 ;~ 296C:05F5
cs=0x296c;eip=0x0005f8; 	X(MOV(*(dw*)(raddr(ds,si+0x5622)), di));	// 122592                  mov     [si+5622h], di ;~ 296C:05F8
cs=0x296c;eip=0x0005fc; 	T(ADD(di, 2));	// 122593                  add     di, 2 ;~ 296C:05FC
cs=0x296c;eip=0x0005ff; 	X(MOV(*(dw*)(raddr(ds,si+0x5623)), di));	// 122594                  mov     [si+5623h], di ;~ 296C:05FF
cs=0x296c;eip=0x000603; 	T(ADD(di, 4));	// 122595                  add     di, 4 ;~ 296C:0603
cs=0x296c;eip=0x000606; 	T(ADD(si, 2));	// 122596                  add     si, 2 ;~ 296C:0606
cs=0x296c;eip=0x000609; 	T(SUB(bx, word_4de41));	// 122597                  sub     bx, ds:word_4DE41 ;~ 296C:0609
cs=0x296c;eip=0x00060d; 	T(ADD(ch, 3));	// 122598                  add     ch, 3 ;~ 296C:060D
cs=0x296c;eip=0x000610; 	T(INC(dl));	// 122599                  inc     dl ;~ 296C:0610
cs=0x296c;eip=0x000612; 	T(DEC(cl));	// 122600                  dec     cl ;~ 296C:0612
cs=0x296c;eip=0x000614; 	J(JNZ(loc_382b9));	// 122601                  jnz     short loc_382B9 ;~ 296C:0614
cs=0x296c;eip=0x000616; 	J(JMP(loc_383e1));	// 122602                  jmp     loc_383E1 ;~ 296C:0616
loc_382b9:
	// 7260 
cs=0x296c;eip=0x000619; 	J(JMP(loc_3818c));	// 122606                  jmp     loc_3818C ;~ 296C:0619
loc_382bc:
	// 7261 
cs=0x296c;eip=0x00061c; 	T(ax = word_4de39;);	// 122610                  mov     ax, ds:word_4DE39 ;~ 296C:061C
cs=0x296c;eip=0x00061f; 	X(MOV(*(dw*)(raddr(ds,di+0x5526)), ax));	// 122611                  mov     [di+5526h], ax ;~ 296C:061F
cs=0x296c;eip=0x000623; 	T(ax = word_4de3f;);	// 122612                  mov     ax, ds:word_4DE3F ;~ 296C:0623
cs=0x296c;eip=0x000626; 	X(MOV(*(dw*)(raddr(ds,di+0x5528)), ax));	// 122613                  mov     [di+5528h], ax ;~ 296C:0626
cs=0x296c;eip=0x00062a; 	X(MOV(*(dw*)(raddr(ds,di+0x5596)), bx));	// 122614                  mov     [di+5596h], bx ;~ 296C:062A
cs=0x296c;eip=0x00062e; 	X(MOV(*(dw*)(raddr(ds,di+0x5598)), bx));	// 122615                  mov     [di+5598h], bx ;~ 296C:062E
cs=0x296c;eip=0x000632; 	X(MOV(*(raddr(ds,si+0x5606)), 1));	// 122616                  mov     byte ptr [si+5606h], 1 ;~ 296C:0632
cs=0x296c;eip=0x000637; 	X(MOV(*(raddr(ds,si+0x5607)), 0));	// 122617                  mov     byte ptr [si+5607h], 0 ;~ 296C:0637
cs=0x296c;eip=0x00063c; 	X(MOV(*(dw*)(raddr(ds,si+0x5622)), di));	// 122618                  mov     [si+5622h], di ;~ 296C:063C
cs=0x296c;eip=0x000640; 	T(ADD(di, 2));	// 122619                  add     di, 2 ;~ 296C:0640
cs=0x296c;eip=0x000643; 	X(MOV(*(dw*)(raddr(ds,si+0x5623)), di));	// 122620                  mov     [si+5623h], di ;~ 296C:0643
cs=0x296c;eip=0x000647; 	T(ADD(di, 2));	// 122621                  add     di, 2 ;~ 296C:0647
cs=0x296c;eip=0x00064a; 	T(ADD(si, 2));	// 122622                  add     si, 2 ;~ 296C:064A
cs=0x296c;eip=0x00064d; 	T(SUB(bx, word_4de41));	// 122623                  sub     bx, ds:word_4DE41 ;~ 296C:064D
cs=0x296c;eip=0x000651; 	T(ADD(ch, 1));	// 122624                  add     ch, 1 ;~ 296C:0651
cs=0x296c;eip=0x000654; 	T(INC(dl));	// 122625                  inc     dl ;~ 296C:0654
cs=0x296c;eip=0x000656; 	T(DEC(cl));	// 122626                  dec     cl ;~ 296C:0656
cs=0x296c;eip=0x000658; 	J(JNZ(loc_382fd));	// 122627                  jnz     short loc_382FD ;~ 296C:0658
cs=0x296c;eip=0x00065a; 	J(JMP(loc_383e1));	// 122628                  jmp     loc_383E1 ;~ 296C:065A
loc_382fd:
	// 7262 
cs=0x296c;eip=0x00065d; 	J(JMP(loc_3818c));	// 122632                  jmp     loc_3818C ;~ 296C:065D
loc_38300:
	// 7263 
cs=0x296c;eip=0x000660; 	T(ax = word_4de39;);	// 122636                  mov     ax, ds:word_4DE39 ;~ 296C:0660
cs=0x296c;eip=0x000663; 	X(MOV(*(dw*)(raddr(ds,di+0x5526)), ax));	// 122637                  mov     [di+5526h], ax ;~ 296C:0663
cs=0x296c;eip=0x000667; 	X(MOV(*(dw*)(raddr(ds,di+0x5528)), ax));	// 122638                  mov     [di+5528h], ax ;~ 296C:0667
cs=0x296c;eip=0x00066b; 	T(ax = word_4de3b;);	// 122639                  mov     ax, ds:word_4DE3B ;~ 296C:066B
cs=0x296c;eip=0x00066e; 	X(MOV(*(dw*)(raddr(ds,di+0x552A)), ax));	// 122640                  mov     [di+552Ah], ax ;~ 296C:066E
cs=0x296c;eip=0x000672; 	T(ax = word_4de3d;);	// 122641                  mov     ax, ds:word_4DE3D ;~ 296C:0672
cs=0x296c;eip=0x000675; 	X(MOV(*(dw*)(raddr(ds,di+0x552C)), ax));	// 122642                  mov     [di+552Ch], ax ;~ 296C:0675
cs=0x296c;eip=0x000679; 	T(ax = word_4de3f;);	// 122643                  mov     ax, ds:word_4DE3F ;~ 296C:0679
cs=0x296c;eip=0x00067c; 	X(MOV(*(dw*)(raddr(ds,di+0x552E)), ax));	// 122644                  mov     [di+552Eh], ax ;~ 296C:067C
cs=0x296c;eip=0x000680; 	X(MOV(*(dw*)(raddr(ds,di+0x5530)), ax));	// 122645                  mov     [di+5530h], ax ;~ 296C:0680
cs=0x296c;eip=0x000684; 	X(MOV(*(dw*)(raddr(ds,di+0x5598)), bx));	// 122646                  mov     [di+5598h], bx ;~ 296C:0684
cs=0x296c;eip=0x000688; 	X(MOV(*(dw*)(raddr(ds,di+0x559A)), bx));	// 122647                  mov     [di+559Ah], bx ;~ 296C:0688
cs=0x296c;eip=0x00068c; 	X(MOV(*(dw*)(raddr(ds,di+0x559C)), bx));	// 122648                  mov     [di+559Ch], bx ;~ 296C:068C
cs=0x296c;eip=0x000690; 	X(MOV(*(dw*)(raddr(ds,di+0x559E)), bx));	// 122649                  mov     [di+559Eh], bx ;~ 296C:0690
cs=0x296c;eip=0x000694; 	T(ax = bx;);	// 122650                  mov     ax, bx ;~ 296C:0694
cs=0x296c;eip=0x000696; 	T(ADD(ax, 5));	// 122651                  add     ax, 5 ;~ 296C:0696
cs=0x296c;eip=0x000699; 	X(MOV(*(dw*)(raddr(ds,di+0x5596)), ax));	// 122652                  mov     [di+5596h], ax ;~ 296C:0699
cs=0x296c;eip=0x00069d; 	X(MOV(*(dw*)(raddr(ds,di+0x55A0)), ax));	// 122653                  mov     [di+55A0h], ax ;~ 296C:069D
cs=0x296c;eip=0x0006a1; 	X(MOV(*(raddr(ds,si+0x5606)), 2));	// 122654                  mov     byte ptr [si+5606h], 2 ;~ 296C:06A1
cs=0x296c;eip=0x0006a6; 	X(MOV(*(raddr(ds,si+0x5607)), 2));	// 122655                  mov     byte ptr [si+5607h], 2 ;~ 296C:06A6
cs=0x296c;eip=0x0006ab; 	T(ADD(di, 2));	// 122656                  add     di, 2 ;~ 296C:06AB
cs=0x296c;eip=0x0006ae; 	X(MOV(*(dw*)(raddr(ds,si+0x5622)), di));	// 122657                  mov     [si+5622h], di ;~ 296C:06AE
cs=0x296c;eip=0x0006b2; 	T(ADD(di, 6));	// 122658                  add     di, 6 ;~ 296C:06B2
cs=0x296c;eip=0x0006b5; 	X(MOV(*(dw*)(raddr(ds,si+0x5623)), di));	// 122659                  mov     [si+5623h], di ;~ 296C:06B5
cs=0x296c;eip=0x0006b9; 	T(ADD(di, 4));	// 122660                  add     di, 4 ;~ 296C:06B9
cs=0x296c;eip=0x0006bc; 	T(ADD(si, 2));	// 122661                  add     si, 2 ;~ 296C:06BC
cs=0x296c;eip=0x0006bf; 	T(SUB(bx, word_4de41));	// 122662                  sub     bx, ds:word_4DE41 ;~ 296C:06BF
cs=0x296c;eip=0x0006c3; 	T(ADD(ch, 4));	// 122663                  add     ch, 4 ;~ 296C:06C3
cs=0x296c;eip=0x0006c6; 	T(INC(dl));	// 122664                  inc     dl ;~ 296C:06C6
cs=0x296c;eip=0x0006c8; 	T(DEC(cl));	// 122665                  dec     cl ;~ 296C:06C8
cs=0x296c;eip=0x0006ca; 	J(JNZ(loc_3836f));	// 122666                  jnz     short loc_3836F ;~ 296C:06CA
cs=0x296c;eip=0x0006cc; 	J(JMP(loc_383e1));	// 122667                  jmp     short loc_383E1 ;~ 296C:06CC
loc_3836f:
	// 7264 
cs=0x296c;eip=0x0006cf; 	J(JMP(loc_3818c));	// 122673                  jmp     loc_3818C ;~ 296C:06CF
loc_38372:
	// 7265 
cs=0x296c;eip=0x0006d2; 	T(ax = word_4de39;);	// 122677                  mov     ax, ds:word_4DE39 ;~ 296C:06D2
cs=0x296c;eip=0x0006d5; 	X(MOV(*(dw*)(raddr(ds,di+0x5526)), ax));	// 122678                  mov     [di+5526h], ax ;~ 296C:06D5
cs=0x296c;eip=0x0006d9; 	X(MOV(*(dw*)(raddr(ds,di+0x5528)), ax));	// 122679                  mov     [di+5528h], ax ;~ 296C:06D9
cs=0x296c;eip=0x0006dd; 	T(ax = word_4de3b;);	// 122680                  mov     ax, ds:word_4DE3B ;~ 296C:06DD
cs=0x296c;eip=0x0006e0; 	X(MOV(*(dw*)(raddr(ds,di+0x552A)), ax));	// 122681                  mov     [di+552Ah], ax ;~ 296C:06E0
cs=0x296c;eip=0x0006e4; 	T(ax = word_4de3d;);	// 122682                  mov     ax, ds:word_4DE3D ;~ 296C:06E4
cs=0x296c;eip=0x0006e7; 	X(MOV(*(dw*)(raddr(ds,di+0x552C)), ax));	// 122683                  mov     [di+552Ch], ax ;~ 296C:06E7
cs=0x296c;eip=0x0006eb; 	T(ax = word_4de3f;);	// 122684                  mov     ax, ds:word_4DE3F ;~ 296C:06EB
cs=0x296c;eip=0x0006ee; 	X(MOV(*(dw*)(raddr(ds,di+0x552E)), ax));	// 122685                  mov     [di+552Eh], ax ;~ 296C:06EE
cs=0x296c;eip=0x0006f2; 	X(MOV(*(dw*)(raddr(ds,di+0x5530)), ax));	// 122686                  mov     [di+5530h], ax ;~ 296C:06F2
cs=0x296c;eip=0x0006f6; 	X(MOV(*(dw*)(raddr(ds,di+0x5598)), bx));	// 122687                  mov     [di+5598h], bx ;~ 296C:06F6
cs=0x296c;eip=0x0006fa; 	X(MOV(*(dw*)(raddr(ds,di+0x559A)), bx));	// 122688                  mov     [di+559Ah], bx ;~ 296C:06FA
cs=0x296c;eip=0x0006fe; 	X(MOV(*(dw*)(raddr(ds,di+0x559C)), bx));	// 122689                  mov     [di+559Ch], bx ;~ 296C:06FE
cs=0x296c;eip=0x000702; 	X(MOV(*(dw*)(raddr(ds,di+0x559E)), bx));	// 122690                  mov     [di+559Eh], bx ;~ 296C:0702
cs=0x296c;eip=0x000706; 	T(ax = bx;);	// 122691                  mov     ax, bx ;~ 296C:0706
cs=0x296c;eip=0x000708; 	T(SUB(ax, 5));	// 122692                  sub     ax, 5 ;~ 296C:0708
cs=0x296c;eip=0x00070b; 	X(MOV(*(dw*)(raddr(ds,di+0x5596)), ax));	// 122693                  mov     [di+5596h], ax ;~ 296C:070B
cs=0x296c;eip=0x00070f; 	X(MOV(*(dw*)(raddr(ds,di+0x55A0)), ax));	// 122694                  mov     [di+55A0h], ax ;~ 296C:070F
cs=0x296c;eip=0x000713; 	X(MOV(*(raddr(ds,si+0x5606)), 2));	// 122695                  mov     byte ptr [si+5606h], 2 ;~ 296C:0713
cs=0x296c;eip=0x000718; 	X(MOV(*(raddr(ds,si+0x5607)), 2));	// 122696                  mov     byte ptr [si+5607h], 2 ;~ 296C:0718
cs=0x296c;eip=0x00071d; 	T(ADD(di, 2));	// 122697                  add     di, 2 ;~ 296C:071D
cs=0x296c;eip=0x000720; 	X(MOV(*(dw*)(raddr(ds,si+0x5622)), di));	// 122698                  mov     [si+5622h], di ;~ 296C:0720
cs=0x296c;eip=0x000724; 	T(ADD(di, 6));	// 122699                  add     di, 6 ;~ 296C:0724
cs=0x296c;eip=0x000727; 	X(MOV(*(dw*)(raddr(ds,si+0x5623)), di));	// 122700                  mov     [si+5623h], di ;~ 296C:0727
cs=0x296c;eip=0x00072b; 	T(ADD(di, 4));	// 122701                  add     di, 4 ;~ 296C:072B
cs=0x296c;eip=0x00072e; 	T(ADD(si, 2));	// 122702                  add     si, 2 ;~ 296C:072E
cs=0x296c;eip=0x000731; 	T(SUB(bx, word_4de41));	// 122703                  sub     bx, ds:word_4DE41 ;~ 296C:0731
cs=0x296c;eip=0x000735; 	T(ADD(ch, 4));	// 122704                  add     ch, 4 ;~ 296C:0735
cs=0x296c;eip=0x000738; 	T(INC(dl));	// 122705                  inc     dl ;~ 296C:0738
cs=0x296c;eip=0x00073a; 	T(DEC(cl));	// 122706                  dec     cl ;~ 296C:073A
cs=0x296c;eip=0x00073c; 	J(JZ(loc_383e1));	// 122707                  jz      short loc_383E1 ;~ 296C:073C
cs=0x296c;eip=0x00073e; 	J(JMP(loc_3818c));	// 122708                  jmp     loc_3818C ;~ 296C:073E
loc_383e1:
	// 7266 
cs=0x296c;eip=0x000741; 	X(byte_4e11f = ch;);	// 122713                  mov     ds:byte_4E11F, ch ;~ 296C:0741
cs=0x296c;eip=0x000745; 	T(SUB(di, 2));	// 122714                  sub     di, 2 ;~ 296C:0745
cs=0x296c;eip=0x000748; 	T(bx = word_4e2fc;);	// 122715                  mov     bx, ds:word_4E2FC ;~ 296C:0748
cs=0x296c;eip=0x00074c; 	T(NEG(bx));	// 122716                  neg     bx ;~ 296C:074C
cs=0x296c;eip=0x00074e; 	T(ADD(bx, 0x4000));	// 122717                  add     bx, 4000h ;~ 296C:074E
cs=0x296c;eip=0x000752; 	J(CALLF(sub_29df1,0));	// 122718                  call    sub_29DF1 ;~ 296C:0752
cs=0x296c;eip=0x000757; 	T(bp = bx;);	// 122719                  mov     bp, bx ;~ 296C:0757
cs=0x296c;eip=0x000759; 	T(bx = word_4e2fc;);	// 122720                  mov     bx, ds:word_4E2FC ;~ 296C:0759
cs=0x296c;eip=0x00075d; 	T(NEG(bx));	// 122721                  neg     bx ;~ 296C:075D
cs=0x296c;eip=0x00075f; 	J(CALLF(sub_29df1,0));	// 122722                  call    sub_29DF1 ;~ 296C:075F
loc_38404:
	// 7267 
cs=0x296c;eip=0x000764; 	T(ax = bp;);	// 122725                  mov     ax, bp ;~ 296C:0764
cs=0x296c;eip=0x000766; 	X(IMUL1_2(*(dw*)(raddr(ds,di+0x5526))));	// 122726                  imul    word ptr [di+5526h] ;~ 296C:0766
cs=0x296c;eip=0x00076a; 	T(SHL(ax, 1));	// 122727                  shl     ax, 1 ;~ 296C:076A
cs=0x296c;eip=0x00076c; 	T(RCL(dx, 1));	// 122728                  rcl     dx, 1 ;~ 296C:076C
cs=0x296c;eip=0x00076e; 	T(si = dx;);	// 122729                  mov     si, dx ;~ 296C:076E
cs=0x296c;eip=0x000770; 	T(ax = bp;);	// 122730                  mov     ax, bp ;~ 296C:0770
cs=0x296c;eip=0x000772; 	X(IMUL1_2(*(dw*)(raddr(ds,di+0x5596))));	// 122731                  imul    word ptr [di+5596h] ;~ 296C:0772
cs=0x296c;eip=0x000776; 	X(PUSH(bx));	// 122732                  push    bx ;~ 296C:0776
cs=0x296c;eip=0x000777; 	X(PUSH(cx));	// 122733                  push    cx ;~ 296C:0777
cs=0x296c;eip=0x000778; 	T(bx = ax;);	// 122734                  mov     bx, ax ;~ 296C:0778
cs=0x296c;eip=0x00077a; 	T(cx = dx;);	// 122735                  mov     cx, dx ;~ 296C:077A
cs=0x296c;eip=0x00077c; 	T(SHL(ax, 1));	// 122736                  shl     ax, 1 ;~ 296C:077C
cs=0x296c;eip=0x00077e; 	T(RCL(dx, 1));	// 122737                  rcl     dx, 1 ;~ 296C:077E
cs=0x296c;eip=0x000780; 	T(ADD(ax, bx));	// 122738                  add     ax, bx ;~ 296C:0780
cs=0x296c;eip=0x000782; 	T(ADC(dx, cx));	// 122739                  adc     dx, cx ;~ 296C:0782
cs=0x296c;eip=0x000784; 	T(SAR(dx, 1));	// 122740                  sar     dx, 1 ;~ 296C:0784
cs=0x296c;eip=0x000786; 	X(POP(cx));	// 122741                  pop     cx ;~ 296C:0786
cs=0x296c;eip=0x000787; 	X(POP(bx));	// 122742                  pop     bx ;~ 296C:0787
cs=0x296c;eip=0x000788; 	T(cx = dx;);	// 122743                  mov     cx, dx ;~ 296C:0788
cs=0x296c;eip=0x00078a; 	T(ax = bx;);	// 122744                  mov     ax, bx ;~ 296C:078A
cs=0x296c;eip=0x00078c; 	X(IMUL1_2(*(dw*)(raddr(ds,di+0x5596))));	// 122745                  imul    word ptr [di+5596h] ;~ 296C:078C
cs=0x296c;eip=0x000790; 	T(SHL(ax, 1));	// 122746                  shl     ax, 1 ;~ 296C:0790
cs=0x296c;eip=0x000792; 	T(RCL(dx, 1));	// 122747                  rcl     dx, 1 ;~ 296C:0792
cs=0x296c;eip=0x000794; 	T(SUB(si, dx));	// 122748                  sub     si, dx ;~ 296C:0794
cs=0x296c;eip=0x000796; 	T(ax = bx;);	// 122749                  mov     ax, bx ;~ 296C:0796
cs=0x296c;eip=0x000798; 	X(IMUL1_2(*(dw*)(raddr(ds,di+0x5526))));	// 122750                  imul    word ptr [di+5526h] ;~ 296C:0798
cs=0x296c;eip=0x00079c; 	X(PUSH(bx));	// 122751                  push    bx ;~ 296C:079C
cs=0x296c;eip=0x00079d; 	X(PUSH(cx));	// 122752                  push    cx ;~ 296C:079D
cs=0x296c;eip=0x00079e; 	T(bx = ax;);	// 122753                  mov     bx, ax ;~ 296C:079E
cs=0x296c;eip=0x0007a0; 	T(cx = dx;);	// 122754                  mov     cx, dx ;~ 296C:07A0
cs=0x296c;eip=0x0007a2; 	T(SHL(ax, 1));	// 122755                  shl     ax, 1 ;~ 296C:07A2
cs=0x296c;eip=0x0007a4; 	T(RCL(dx, 1));	// 122756                  rcl     dx, 1 ;~ 296C:07A4
cs=0x296c;eip=0x0007a6; 	T(ADD(ax, bx));	// 122757                  add     ax, bx ;~ 296C:07A6
cs=0x296c;eip=0x0007a8; 	T(ADC(dx, cx));	// 122758                  adc     dx, cx ;~ 296C:07A8
cs=0x296c;eip=0x0007aa; 	T(SAR(dx, 1));	// 122759                  sar     dx, 1 ;~ 296C:07AA
cs=0x296c;eip=0x0007ac; 	X(POP(cx));	// 122760                  pop     cx ;~ 296C:07AC
cs=0x296c;eip=0x0007ad; 	X(POP(bx));	// 122761                  pop     bx ;~ 296C:07AD
cs=0x296c;eip=0x0007ae; 	T(ADD(cx, dx));	// 122762                  add     cx, dx ;~ 296C:07AE
cs=0x296c;eip=0x0007b0; 	X(MOV(*(dw*)(raddr(ds,di+0x5526)), si));	// 122763                  mov     [di+5526h], si ;~ 296C:07B0
cs=0x296c;eip=0x0007b4; 	X(MOV(*(dw*)(raddr(ds,di+0x5596)), cx));	// 122764                  mov     [di+5596h], cx ;~ 296C:07B4
cs=0x296c;eip=0x0007b8; 	T(SUB(di, 2));	// 122765                  sub     di, 2 ;~ 296C:07B8
cs=0x296c;eip=0x0007bb; 	J(JNS(loc_38404));	// 122766                  jns     short loc_38404 ;~ 296C:07BB
cs=0x296c;eip=0x0007bd; 	X(PUSH(word_4d787));	// 122767                  push    ds:word_4D787 ;~ 296C:07BD
cs=0x296c;eip=0x0007c1; 	X(PUSH(word_4d789));	// 122768                  push    ds:word_4D789 ;~ 296C:07C1
cs=0x296c;eip=0x0007c5; 	T(CMP(byte_528d0, 0));	// 122769                  cmp     ds:byte_528D0, 0 ;~ 296C:07C5
cs=0x296c;eip=0x0007ca; 	J(JNZ(loc_3846f));	// 122770                  jnz     short loc_3846F ;~ 296C:07CA
cs=0x296c;eip=0x0007cc; 	J(JMP(loc_38633));	// 122771                  jmp     loc_38633 ;~ 296C:07CC
loc_3846f:
	// 7268 
cs=0x296c;eip=0x0007cf; 	T(ah = 7;);	// 122775                  mov     ah, 7 ;~ 296C:07CF
cs=0x296c;eip=0x0007d1; 	T(CMP(*(db*)(&word_48b66), 0));	// 122776                  cmp     byte ptr word_48B66, 0 ;~ 296C:07D1
cs=0x296c;eip=0x0007d6; 	J(JZ(loc_3847a));	// 122777                  jz      short loc_3847A ;~ 296C:07D6
cs=0x296c;eip=0x0007d8; 	T(ah = 0;);	// 122778                  mov     ah, 0 ;~ 296C:07D8
loc_3847a:
	// 7269 
cs=0x296c;eip=0x0007da; 	J(CALLF(sub_49a3e,0));	// 122781                  call    far ptr sub_49A3E ;~ 296C:07DA
cs=0x296c;eip=0x0007df; 	T(ax = word_4de4c;);	// 122783                  mov     ax, ds:word_4DE4C ;~ 296C:07DF
cs=0x296c;eip=0x0007e2; 	J(CALLF(sub_49a25,0));	// 122784                  call    far ptr sub_49A25 ;~ 296C:07E2
cs=0x296c;eip=0x0007e7; 	T(ax = word_4de4e;);	// 122786                  mov     ax, ds:word_4DE4E ;~ 296C:07E7
cs=0x296c;eip=0x0007ea; 	X(word_4d787 = ax;);	// 122787                  mov     ds:word_4D787, ax ;~ 296C:07EA
cs=0x296c;eip=0x0007ed; 	T(ax = word_4de50;);	// 122788                  mov     ax, ds:word_4DE50 ;~ 296C:07ED
cs=0x296c;eip=0x0007f0; 	X(word_4d789 = ax;);	// 122789                  mov     ds:word_4D789, ax ;~ 296C:07F0
cs=0x296c;eip=0x0007f3; 	T(di = 0;);	// 122790                  mov     di, 0 ;~ 296C:07F3
cs=0x296c;eip=0x0007f6; 	T(si = di;);	// 122791                  mov     si, di ;~ 296C:07F6
cs=0x296c;eip=0x0007f8; 	X(byte_4e11e = 0;);	// 122792                  mov     ds:byte_4E11E, 0 ;~ 296C:07F8
loc_3849d:
	// 7270 
cs=0x296c;eip=0x0007fd; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x5526))));	// 122796                  mov     ax, [di+5526h] ;~ 296C:07FD
cs=0x296c;eip=0x000801; 	T(ADD(ax, word_4de44));	// 122797                  add     ax, ds:word_4DE44 ;~ 296C:0801
cs=0x296c;eip=0x000805; 	X(word_4d78d = ax;);	// 122798                  mov     ds:word_4D78D, ax ;~ 296C:0805
cs=0x296c;eip=0x000808; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x5596))));	// 122799                  mov     ax, [di+5596h] ;~ 296C:0808
cs=0x296c;eip=0x00080c; 	T(ADD(ax, word_4de46));	// 122800                  add     ax, ds:word_4DE46 ;~ 296C:080C
cs=0x296c;eip=0x000810; 	X(word_4d791 = ax;);	// 122801                  mov     ds:word_4D791, ax ;~ 296C:0810
cs=0x296c;eip=0x000813; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x5528))));	// 122802                  mov     ax, [di+5528h] ;~ 296C:0813
cs=0x296c;eip=0x000817; 	T(ADD(ax, word_4de44));	// 122803                  add     ax, ds:word_4DE44 ;~ 296C:0817
cs=0x296c;eip=0x00081b; 	X(word_4d78f = ax;);	// 122804                  mov     ds:word_4D78F, ax ;~ 296C:081B
cs=0x296c;eip=0x00081e; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x5598))));	// 122805                  mov     ax, [di+5598h] ;~ 296C:081E
cs=0x296c;eip=0x000822; 	T(ADD(ax, word_4de46));	// 122806                  add     ax, ds:word_4DE46 ;~ 296C:0822
cs=0x296c;eip=0x000826; 	X(word_4d793 = ax;);	// 122807                  mov     ds:word_4D793, ax ;~ 296C:0826
cs=0x296c;eip=0x000829; 	X(PUSH(di));	// 122808                  push    di ;~ 296C:0829
cs=0x296c;eip=0x00082a; 	X(PUSH(si));	// 122809                  push    si ;~ 296C:082A
cs=0x296c;eip=0x00082b; 	J(CALLF(sub_37756,0));	// 122810                  call    sub_37756 ;~ 296C:082B
cs=0x296c;eip=0x000830; 	X(POP(si));	// 122811                  pop     si ;~ 296C:0830
cs=0x296c;eip=0x000831; 	X(POP(di));	// 122812                  pop     di ;~ 296C:0831
cs=0x296c;eip=0x000832; 	T(ADD(di, 2));	// 122813                  add     di, 2 ;~ 296C:0832
cs=0x296c;eip=0x000835; 	X(INC(byte_4e11e));	// 122814                  inc     ds:byte_4E11E ;~ 296C:0835
cs=0x296c;eip=0x000839; 	X(DEC(*(raddr(ds,si+0x5606))));	// 122815                  dec     byte ptr [si+5606h] ;~ 296C:0839
cs=0x296c;eip=0x00083d; 	J(JNZ(loc_3849d));	// 122816                  jnz     short loc_3849D ;~ 296C:083D
cs=0x296c;eip=0x00083f; 	T(ADD(di, 2));	// 122817                  add     di, 2 ;~ 296C:083F
cs=0x296c;eip=0x000842; 	T(INC(si));	// 122818                  inc     si ;~ 296C:0842
cs=0x296c;eip=0x000843; 	T(CMP(*(raddr(ds,si+0x5606)), 0));	// 122819                  cmp     byte ptr [si+5606h], 0 ;~ 296C:0843
cs=0x296c;eip=0x000848; 	J(JNZ(loc_384eb));	// 122820                  jnz     short loc_384EB ;~ 296C:0848
cs=0x296c;eip=0x00084a; 	T(INC(si));	// 122821                  inc     si ;~ 296C:084A
loc_384eb:
	// 7271 
cs=0x296c;eip=0x00084b; 	T(bl = byte_4e11f;);	// 122824                  mov     bl, ds:byte_4E11F ;~ 296C:084B
cs=0x296c;eip=0x00084f; 	T(CMP(byte_4e11e, bl));	// 122825                  cmp     ds:byte_4E11E, bl ;~ 296C:084F
cs=0x296c;eip=0x000853; 	J(JL(loc_3849d));	// 122826                  jl      short loc_3849D ;~ 296C:0853
cs=0x296c;eip=0x000855; 	J(CALLF(sub_49a48,0));	// 122827                  call    far ptr sub_49A48 ;~ 296C:0855
cs=0x296c;eip=0x00085a; 	X(ADD(word_4e120, 0x0B));	// 122829                  add     ds:word_4E120, 0Bh ;~ 296C:085A
cs=0x296c;eip=0x00085f; 	T(si = 0;);	// 122830                  mov     si, 0 ;~ 296C:085F
cs=0x296c;eip=0x000862; 	X(word_4e122 = 5;);	// 122831                  mov     ds:word_4E122, 5 ;~ 296C:0862
cs=0x296c;eip=0x000868; 	T(bp = 0x52A2;);	// 122832                  mov     bp, 52A2h ;~ 296C:0868
cs=0x296c;eip=0x00086b; 	T(ax = word_4e2fc;);	// 122833                  mov     ax, ds:word_4E2FC ;~ 296C:086B
cs=0x296c;eip=0x00086e; 	T(SHR(ah, 1));	// 122834                  shr     ah, 1 ;~ 296C:086E
cs=0x296c;eip=0x000870; 	T(SHR(ah, 1));	// 122835                  shr     ah, 1 ;~ 296C:0870
cs=0x296c;eip=0x000872; 	T(XCHG(ah, al));	// 122836                  xchg    ah, al ;~ 296C:0872
cs=0x296c;eip=0x000874; 	T(SUB(ah, ah));	// 122837                  sub     ah, ah ;~ 296C:0874
cs=0x296c;eip=0x000876; 	T(di = ax;);	// 122838                  mov     di, ax ;~ 296C:0876
cs=0x296c;eip=0x000878; 	T(SHL(di, 1));	// 122839                  shl     di, 1 ;~ 296C:0878
cs=0x296c;eip=0x00087a; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x5076))));	// 122840                  mov     ax, [di+5076h] ;~ 296C:087A
cs=0x296c;eip=0x00087e; 	X(word_4e18c = ax;);	// 122841                  mov     ds:word_4E18C, ax ;~ 296C:087E
cs=0x296c;eip=0x000881; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x50F6))));	// 122842                  mov     ax, [di+50F6h] ;~ 296C:0881
cs=0x296c;eip=0x000885; 	X(word_4e18e = ax;);	// 122843                  mov     ds:word_4E18E, ax ;~ 296C:0885
cs=0x296c;eip=0x000888; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x5176))));	// 122844                  mov     ax, [di+5176h] ;~ 296C:0888
cs=0x296c;eip=0x00088c; 	X(word_4e190 = ax;);	// 122845                  mov     ds:word_4E190, ax ;~ 296C:088C
cs=0x296c;eip=0x00088f; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x51F6))));	// 122846                  mov     ax, [di+51F6h] ;~ 296C:088F
cs=0x296c;eip=0x000893; 	X(word_4e192 = ax;);	// 122847                  mov     ds:word_4E192, ax ;~ 296C:0893
cs=0x296c;eip=0x000896; 	T(ax = word_4e2fc;);	// 122848                  mov     ax, ds:word_4E2FC ;~ 296C:0896
cs=0x296c;eip=0x000899; 	T(ADD(ah, 0x80));	// 122849                  add     ah, 80h ;~ 296C:0899
cs=0x296c;eip=0x00089c; 	T(SHR(ah, 1));	// 122850                  shr     ah, 1 ;~ 296C:089C
cs=0x296c;eip=0x00089e; 	T(SHR(ah, 1));	// 122851                  shr     ah, 1 ;~ 296C:089E
cs=0x296c;eip=0x0008a0; 	T(XCHG(ah, al));	// 122852                  xchg    ah, al ;~ 296C:08A0
cs=0x296c;eip=0x0008a2; 	T(SUB(ah, ah));	// 122853                  sub     ah, ah ;~ 296C:08A2
cs=0x296c;eip=0x0008a4; 	T(di = ax;);	// 122854                  mov     di, ax ;~ 296C:08A4
cs=0x296c;eip=0x0008a6; 	T(SHL(di, 1));	// 122855                  shl     di, 1 ;~ 296C:08A6
cs=0x296c;eip=0x0008a8; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x5076))));	// 122856                  mov     ax, [di+5076h] ;~ 296C:08A8
cs=0x296c;eip=0x0008ac; 	X(word_4e184 = ax;);	// 122857                  mov     ds:word_4E184, ax ;~ 296C:08AC
cs=0x296c;eip=0x0008af; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x50F6))));	// 122858                  mov     ax, [di+50F6h] ;~ 296C:08AF
cs=0x296c;eip=0x0008b3; 	X(word_4e186 = ax;);	// 122859                  mov     ds:word_4E186, ax ;~ 296C:08B3
cs=0x296c;eip=0x0008b6; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x5176))));	// 122860                  mov     ax, [di+5176h] ;~ 296C:08B6
cs=0x296c;eip=0x0008ba; 	X(word_4e188 = ax;);	// 122861                  mov     ds:word_4E188, ax ;~ 296C:08BA
cs=0x296c;eip=0x0008bd; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x51F6))));	// 122862                  mov     ax, [di+51F6h] ;~ 296C:08BD
cs=0x296c;eip=0x0008c1; 	X(word_4e18a = ax;);	// 122863                  mov     ds:word_4E18A, ax ;~ 296C:08C1
loc_38564:
	// 7272 
cs=0x296c;eip=0x0008c4; 	T(di = word_4e120;);	// 122866                  mov     di, ds:word_4E120 ;~ 296C:08C4
cs=0x296c;eip=0x0008c8; 	T(SHL(di, 1));	// 122867                  shl     di, 1 ;~ 296C:08C8
cs=0x296c;eip=0x0008ca; 	T(SHL(di, 1));	// 122868                  shl     di, 1 ;~ 296C:08CA
cs=0x296c;eip=0x0008cc; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x5644))));	// 122869                  mov     ax, [di+5644h] ;~ 296C:08CC
cs=0x296c;eip=0x0008d0; 	X(word_4e180 = ax;);	// 122870                  mov     ds:word_4E180, ax ;~ 296C:08D0
cs=0x296c;eip=0x0008d3; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x5646))));	// 122871                  mov     ax, [di+5646h] ;~ 296C:08D3
cs=0x296c;eip=0x0008d7; 	X(word_4e182 = ax;);	// 122872                  mov     ds:word_4E182, ax ;~ 296C:08D7
cs=0x296c;eip=0x0008da; 	T(bx = di;);	// 122873                  mov     bx, di ;~ 296C:08DA
cs=0x296c;eip=0x0008dc; 	T(MOV(di, *(dw*)(raddr(ds,si+0x5622))));	// 122874                  mov     di, [si+5622h] ;~ 296C:08DC
cs=0x296c;eip=0x0008e0; 	T(AND(di, 0x0FF));	// 122875                  and     di, 0FFh ;~ 296C:08E0
cs=0x296c;eip=0x0008e4; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x5526))));	// 122876                  mov     ax, [di+5526h] ;~ 296C:08E4
cs=0x296c;eip=0x0008e8; 	T(CMP(bx, 0x2C));	// 122877                  cmp     bx, 2Ch ; ',' ;~ 296C:08E8
cs=0x296c;eip=0x0008eb; 	J(JGE(loc_38594));	// 122878                  jge     short loc_38594 ;~ 296C:08EB
cs=0x296c;eip=0x0008ed; 	T(ADD(ax, word_4e188));	// 122879                  add     ax, ds:word_4E188 ;~ 296C:08ED
cs=0x296c;eip=0x0008f1; 	J(JMP(loc_38598));	// 122880                  jmp     short loc_38598 ;~ 296C:08F1
loc_38594:
	// 7273 
cs=0x296c;eip=0x0008f4; 	T(ADD(ax, word_4e184));	// 122886                  add     ax, ds:word_4E184 ;~ 296C:08F4
loc_38598:
	// 7274 
cs=0x296c;eip=0x0008f8; 	T(ADD(ax, word_4de4a));	// 122889                  add     ax, ds:word_4DE4A ;~ 296C:08F8
cs=0x296c;eip=0x0008fc; 	X(word_4dd8a = ax;);	// 122890                  mov     ds:word_4DD8A, ax ;~ 296C:08FC
cs=0x296c;eip=0x0008ff; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x5596))));	// 122891                  mov     ax, [di+5596h] ;~ 296C:08FF
cs=0x296c;eip=0x000903; 	T(CMP(di, 0x2C));	// 122892                  cmp     di, 2Ch ; ',' ;~ 296C:0903
cs=0x296c;eip=0x000906; 	J(JGE(loc_385af));	// 122893                  jge     short loc_385AF ;~ 296C:0906
cs=0x296c;eip=0x000908; 	T(ADD(ax, word_4e18a));	// 122894                  add     ax, ds:word_4E18A ;~ 296C:0908
cs=0x296c;eip=0x00090c; 	J(JMP(loc_385b3));	// 122895                  jmp     short loc_385B3 ;~ 296C:090C
loc_385af:
	// 7275 
cs=0x296c;eip=0x00090f; 	T(ADD(ax, word_4e186));	// 122901                  add     ax, ds:word_4E186 ;~ 296C:090F
loc_385b3:
	// 7276 
cs=0x296c;eip=0x000913; 	T(ADD(ax, word_4de48));	// 122904                  add     ax, ds:word_4DE48 ;~ 296C:0913
cs=0x296c;eip=0x000917; 	X(word_4dd8c = ax;);	// 122905                  mov     ds:word_4DD8C, ax ;~ 296C:0917
cs=0x296c;eip=0x00091a; 	T(bx = 0x56A0;);	// 122906                  mov     bx, 56A0h ;~ 296C:091A
cs=0x296c;eip=0x00091d; 	X(PUSH(si));	// 122907                  push    si ;~ 296C:091D
cs=0x296c;eip=0x00091e; 	J(CALLF(sub_499bc,0));	// 122908                  call    far ptr sub_499BC ;~ 296C:091E
cs=0x296c;eip=0x000923; 	X(POP(si));	// 122910                  pop     si ;~ 296C:0923
cs=0x296c;eip=0x000924; 	T(INC(si));	// 122911                  inc     si ;~ 296C:0924
cs=0x296c;eip=0x000925; 	T(di = word_4e120;);	// 122912                  mov     di, ds:word_4E120 ;~ 296C:0925
cs=0x296c;eip=0x000929; 	T(SHL(di, 1));	// 122913                  shl     di, 1 ;~ 296C:0929
cs=0x296c;eip=0x00092b; 	T(SHL(di, 1));	// 122914                  shl     di, 1 ;~ 296C:092B
cs=0x296c;eip=0x00092d; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x5644))));	// 122915                  mov     ax, [di+5644h] ;~ 296C:092D
cs=0x296c;eip=0x000931; 	X(word_4e180 = ax;);	// 122916                  mov     ds:word_4E180, ax ;~ 296C:0931
cs=0x296c;eip=0x000934; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x5646))));	// 122917                  mov     ax, [di+5646h] ;~ 296C:0934
cs=0x296c;eip=0x000938; 	X(word_4e182 = ax;);	// 122918                  mov     ds:word_4E182, ax ;~ 296C:0938
cs=0x296c;eip=0x00093b; 	T(bx = di;);	// 122919                  mov     bx, di ;~ 296C:093B
cs=0x296c;eip=0x00093d; 	T(MOV(di, *(dw*)(raddr(ds,si+0x5622))));	// 122920                  mov     di, [si+5622h] ;~ 296C:093D
cs=0x296c;eip=0x000941; 	T(AND(di, 0x0FF));	// 122921                  and     di, 0FFh ;~ 296C:0941
cs=0x296c;eip=0x000945; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x5526))));	// 122922                  mov     ax, [di+5526h] ;~ 296C:0945
cs=0x296c;eip=0x000949; 	T(CMP(bx, 0x2C));	// 122923                  cmp     bx, 2Ch ; ',' ;~ 296C:0949
cs=0x296c;eip=0x00094c; 	J(JGE(loc_385f5));	// 122924                  jge     short loc_385F5 ;~ 296C:094C
cs=0x296c;eip=0x00094e; 	T(ADD(ax, word_4e190));	// 122925                  add     ax, ds:word_4E190 ;~ 296C:094E
cs=0x296c;eip=0x000952; 	J(JMP(loc_385f9));	// 122926                  jmp     short loc_385F9 ;~ 296C:0952
loc_385f5:
	// 7277 
cs=0x296c;eip=0x000955; 	T(ADD(ax, word_4e18c));	// 122932                  add     ax, ds:word_4E18C ;~ 296C:0955
loc_385f9:
	// 7278 
cs=0x296c;eip=0x000959; 	T(ADD(ax, word_4de4a));	// 122935                  add     ax, ds:word_4DE4A ;~ 296C:0959
cs=0x296c;eip=0x00095d; 	X(word_4dd8a = ax;);	// 122936                  mov     ds:word_4DD8A, ax ;~ 296C:095D
cs=0x296c;eip=0x000960; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x5596))));	// 122937                  mov     ax, [di+5596h] ;~ 296C:0960
cs=0x296c;eip=0x000964; 	T(CMP(di, 0x2C));	// 122938                  cmp     di, 2Ch ; ',' ;~ 296C:0964
cs=0x296c;eip=0x000967; 	J(JGE(loc_38610));	// 122939                  jge     short loc_38610 ;~ 296C:0967
cs=0x296c;eip=0x000969; 	T(ADD(ax, word_4e192));	// 122940                  add     ax, ds:word_4E192 ;~ 296C:0969
cs=0x296c;eip=0x00096d; 	J(JMP(loc_38614));	// 122941                  jmp     short loc_38614 ;~ 296C:096D
loc_38610:
	// 7279 
cs=0x296c;eip=0x000970; 	T(ADD(ax, word_4e18e));	// 122947                  add     ax, ds:word_4E18E ;~ 296C:0970
loc_38614:
	// 7280 
cs=0x296c;eip=0x000974; 	T(ADD(ax, word_4de48));	// 122950                  add     ax, ds:word_4DE48 ;~ 296C:0974
cs=0x296c;eip=0x000978; 	X(word_4dd8c = ax;);	// 122951                  mov     ds:word_4DD8C, ax ;~ 296C:0978
cs=0x296c;eip=0x00097b; 	T(bx = 0x56A0;);	// 122952                  mov     bx, 56A0h ;~ 296C:097B
cs=0x296c;eip=0x00097e; 	X(PUSH(si));	// 122953                  push    si ;~ 296C:097E
cs=0x296c;eip=0x00097f; 	J(CALLF(sub_499bc,0));	// 122954                  call    far ptr sub_499BC ;~ 296C:097F
cs=0x296c;eip=0x000984; 	X(POP(si));	// 122956                  pop     si ;~ 296C:0984
cs=0x296c;eip=0x000985; 	T(INC(si));	// 122957                  inc     si ;~ 296C:0985
cs=0x296c;eip=0x000986; 	X(INC(word_4e120));	// 122958                  inc     ds:word_4E120 ;~ 296C:0986
cs=0x296c;eip=0x00098a; 	X(DEC(word_4e122));	// 122959                  dec     ds:word_4E122 ;~ 296C:098A
cs=0x296c;eip=0x00098e; 	J(JZ(loc_38633));	// 122960                  jz      short loc_38633 ;~ 296C:098E
cs=0x296c;eip=0x000990; 	J(JMP(loc_38564));	// 122961                  jmp     loc_38564 ;~ 296C:0990
loc_38633:
	// 7281 
cs=0x296c;eip=0x000993; 	X(POP(word_4d789));	// 122966                  pop     ds:word_4D789 ;~ 296C:0993
cs=0x296c;eip=0x000997; 	X(POP(word_4d787));	// 122967                  pop     ds:word_4D787 ;~ 296C:0997
cs=0x296c;eip=0x00099b; 	J(CALLF(sub_49a1b,0));	// 122968                  call    far ptr sub_49A1B ;~ 296C:099B
seg37ca_9a0_proc:
	// 122972 
cs=0x296c;eip=0x0009a0; 	J(RETN(0));	// 122972                  retn ;~ 296C:09A0

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_37d0e: 	goto loc_37d0e;
        case m2c::kloc_37d2f: 	goto loc_37d2f;
        case m2c::kloc_37d6f: 	goto loc_37d6f;
        case m2c::kloc_37da7: 	goto loc_37da7;
        case m2c::kloc_37dda: 	goto loc_37dda;
        case m2c::kloc_37e41: 	goto loc_37e41;
        case m2c::kloc_37e62: 	goto loc_37e62;
        case m2c::kloc_37e86: 	goto loc_37e86;
        case m2c::kloc_37e99: 	goto loc_37e99;
        case m2c::kloc_37eb1: 	goto loc_37eb1;
        case m2c::kloc_37ebb: 	goto loc_37ebb;
        case m2c::kloc_37eca: 	goto loc_37eca;
        case m2c::kloc_37fc6: 	goto loc_37fc6;
        case m2c::kloc_37fd0: 	goto loc_37fd0;
        case m2c::kloc_37fe2: 	goto loc_37fe2;
        case m2c::kloc_37fe6: 	goto loc_37fe6;
        case m2c::kloc_37ff1: 	goto loc_37ff1;
        case m2c::kloc_37ffb: 	goto loc_37ffb;
        case m2c::kloc_3807c: 	goto loc_3807c;
        case m2c::kloc_380fa: 	goto loc_380fa;
        case m2c::kloc_3810e: 	goto loc_3810e;
        case m2c::kloc_38129: 	goto loc_38129;
        case m2c::kloc_38165: 	goto loc_38165;
        case m2c::kloc_38178: 	goto loc_38178;
        case m2c::kloc_3818c: 	goto loc_3818c;
        case m2c::kloc_381a4: 	goto loc_381a4;
        case m2c::kloc_381a7: 	goto loc_381a7;
        case m2c::kloc_381aa: 	goto loc_381aa;
        case m2c::kloc_381ad: 	goto loc_381ad;
        case m2c::kloc_38204: 	goto loc_38204;
        case m2c::kloc_3825d: 	goto loc_3825d;
        case m2c::kloc_38260: 	goto loc_38260;
        case m2c::kloc_382b9: 	goto loc_382b9;
        case m2c::kloc_382bc: 	goto loc_382bc;
        case m2c::kloc_382fd: 	goto loc_382fd;
        case m2c::kloc_38300: 	goto loc_38300;
        case m2c::kloc_3836f: 	goto loc_3836f;
        case m2c::kloc_38372: 	goto loc_38372;
        case m2c::kloc_383e1: 	goto loc_383e1;
        case m2c::kloc_38404: 	goto loc_38404;
        case m2c::kloc_3846f: 	goto loc_3846f;
        case m2c::kloc_3847a: 	goto loc_3847a;
        case m2c::kloc_3849d: 	goto loc_3849d;
        case m2c::kloc_384eb: 	goto loc_384eb;
        case m2c::kloc_38564: 	goto loc_38564;
        case m2c::kloc_38594: 	goto loc_38594;
        case m2c::kloc_38598: 	goto loc_38598;
        case m2c::kloc_385af: 	goto loc_385af;
        case m2c::kloc_385b3: 	goto loc_385b3;
        case m2c::kloc_385f5: 	goto loc_385f5;
        case m2c::kloc_385f9: 	goto loc_385f9;
        case m2c::kloc_38610: 	goto loc_38610;
        case m2c::kloc_38614: 	goto loc_38614;
        case m2c::kloc_38633: 	goto loc_38633;
        case m2c::kseg37ca_9a0_proc: 	goto seg37ca_9a0_proc;
        case m2c::ksub_37cb6: 	goto sub_37cb6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group85(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group85:
    _begin:
sub_38641:
	// 122979 
cs=0x296c;eip=0x0009a1; 	T(ax = word_52ae4;);	// 122980                  mov     ax, ds:word_52AE4 ;~ 296C:09A1
cs=0x296c;eip=0x0009a4; 	X(word_4ddae = ax;);	// 122981                  mov     ds:word_4DDAE, ax ;~ 296C:09A4
cs=0x296c;eip=0x0009a7; 	X(word_4ddcc = ax;);	// 122982                  mov     ds:word_4DDCC, ax ;~ 296C:09A7
cs=0x296c;eip=0x0009aa; 	X(word_4ddea = ax;);	// 122983                  mov     ds:word_4DDEA, ax ;~ 296C:09AA
cs=0x296c;eip=0x0009ad; 	X(word_4de08 = ax;);	// 122984                  mov     ds:word_4DE08, ax ;~ 296C:09AD
cs=0x296c;eip=0x0009b0; 	X(byte_4de54 = 0;);	// 122985                  mov     ds:byte_4DE54, 0 ;~ 296C:09B0
loc_38655:
	// 7282 
cs=0x296c;eip=0x0009b5; 	T(CMP(byte_4de54, 1));	// 122988                  cmp     ds:byte_4DE54, 1 ;~ 296C:09B5
cs=0x296c;eip=0x0009ba; 	J(JZ(loc_3865f));	// 122989                  jz      short loc_3865F ;~ 296C:09BA
cs=0x296c;eip=0x0009bc; 	J(JMP(loc_38775));	// 122990                  jmp     loc_38775 ;~ 296C:09BC
loc_3865f:
	// 7283 
cs=0x296c;eip=0x0009bf; 	T(ax = 0x64;);	// 122994                  mov     ax, 64h ; 'd' ;~ 296C:09BF
cs=0x296c;eip=0x0009c2; 	X(word_4de27 = ax;);	// 122995                  mov     ds:word_4DE27, ax ;~ 296C:09C2
cs=0x296c;eip=0x0009c5; 	T(al = 8;);	// 122996                  mov     al, 8 ;~ 296C:09C5
cs=0x296c;eip=0x0009c7; 	X(byte_4de29 = al;);	// 122997                  mov     ds:byte_4DE29, al ;~ 296C:09C7
cs=0x296c;eip=0x0009ca; 	T(ax = 0x0A;);	// 122998                  mov     ax, 0Ah ;~ 296C:09CA
cs=0x296c;eip=0x0009cd; 	X(word_4de2a = ax;);	// 122999                  mov     ds:word_4DE2A, ax ;~ 296C:09CD
cs=0x296c;eip=0x0009d0; 	T(al = 0;);	// 123000                  mov     al, 0 ;~ 296C:09D0
cs=0x296c;eip=0x0009d2; 	X(byte_4de2c = al;);	// 123001                  mov     ds:byte_4DE2C, al ;~ 296C:09D2
cs=0x296c;eip=0x0009d5; 	T(ax = 0x66;);	// 123002                  mov     ax, 66h ; 'f' ;~ 296C:09D5
cs=0x296c;eip=0x0009d8; 	X(word_4de2d = ax;);	// 123003                  mov     ds:word_4DE2D, ax ;~ 296C:09D8
cs=0x296c;eip=0x0009db; 	T(ax = 0x0CC;);	// 123004                  mov     ax, 0CCh ;~ 296C:09DB
cs=0x296c;eip=0x0009de; 	X(word_4de2f = ax;);	// 123005                  mov     ds:word_4DE2F, ax ;~ 296C:09DE
cs=0x296c;eip=0x0009e1; 	T(al = 0x88;);	// 123006                  mov     al, 88h ;~ 296C:09E1
cs=0x296c;eip=0x0009e3; 	X(byte_4de26 = al;);	// 123007                  mov     ds:byte_4DE26, al ;~ 296C:09E3
cs=0x296c;eip=0x0009e6; 	T(ax = 0x12;);	// 123008                  mov     ax, 12h ;~ 296C:09E6
cs=0x296c;eip=0x0009e9; 	X(word_4de31 = ax;);	// 123009                  mov     ds:word_4DE31, ax ;~ 296C:09E9
cs=0x296c;eip=0x0009ec; 	T(ax = 0x0AF;);	// 123010                  mov     ax, 0AFh ;~ 296C:09EC
cs=0x296c;eip=0x0009ef; 	X(word_4de33 = ax;);	// 123011                  mov     ds:word_4DE33, ax ;~ 296C:09EF
cs=0x296c;eip=0x0009f2; 	T(ax = 4;);	// 123012                  mov     ax, 4 ;~ 296C:09F2
cs=0x296c;eip=0x0009f5; 	X(word_4de35 = ax;);	// 123013                  mov     ds:word_4DE35, ax ;~ 296C:09F5
cs=0x296c;eip=0x0009f8; 	T(ax = 2;);	// 123014                  mov     ax, 2 ;~ 296C:09F8
cs=0x296c;eip=0x0009fb; 	X(word_4de37 = ax;);	// 123015                  mov     ds:word_4DE37, ax ;~ 296C:09FB
cs=0x296c;eip=0x0009fe; 	T(ax = 0x0FFE9;);	// 123016                  mov     ax, 0FFE9h ;~ 296C:09FE
cs=0x296c;eip=0x000a01; 	X(word_4de39 = ax;);	// 123017                  mov     ds:word_4DE39, ax ;~ 296C:0A01
cs=0x296c;eip=0x000a04; 	T(ax = 0x0FFF8;);	// 123018                  mov     ax, 0FFF8h ;~ 296C:0A04
cs=0x296c;eip=0x000a07; 	X(word_4de3b = ax;);	// 123019                  mov     ds:word_4DE3B, ax ;~ 296C:0A07
cs=0x296c;eip=0x000a0a; 	T(ax = 9;);	// 123020                  mov     ax, 9 ;~ 296C:0A0A
cs=0x296c;eip=0x000a0d; 	X(word_4de3d = ax;);	// 123021                  mov     ds:word_4DE3D, ax ;~ 296C:0A0D
cs=0x296c;eip=0x000a10; 	T(ax = 0x17;);	// 123022                  mov     ax, 17h ;~ 296C:0A10
cs=0x296c;eip=0x000a13; 	X(word_4de3f = ax;);	// 123023                  mov     ds:word_4DE3F, ax ;~ 296C:0A13
cs=0x296c;eip=0x000a16; 	T(ax = 0x1A;);	// 123024                  mov     ax, 1Ah ;~ 296C:0A16
cs=0x296c;eip=0x000a19; 	X(word_4de41 = ax;);	// 123025                  mov     ds:word_4DE41, ax ;~ 296C:0A19
cs=0x296c;eip=0x000a1c; 	T(al = 0x34;);	// 123026                  mov     al, 34h ; '4' ;~ 296C:0A1C
cs=0x296c;eip=0x000a1e; 	X(byte_4de43 = al;);	// 123027                  mov     ds:byte_4DE43, al ;~ 296C:0A1E
cs=0x296c;eip=0x000a21; 	T(ax = 0x1F;);	// 123028                  mov     ax, 1Fh ;~ 296C:0A21
cs=0x296c;eip=0x000a24; 	X(word_4de44 = ax;);	// 123029                  mov     ds:word_4DE44, ax ;~ 296C:0A24
cs=0x296c;eip=0x000a27; 	T(ax = 0x0D;);	// 123030                  mov     ax, 0Dh ;~ 296C:0A27
cs=0x296c;eip=0x000a2a; 	X(word_4de46 = ax;);	// 123031                  mov     ds:word_4DE46, ax ;~ 296C:0A2A
cs=0x296c;eip=0x000a2d; 	T(ax = 0x50;);	// 123032                  mov     ax, 50h ; 'P' ;~ 296C:0A2D
cs=0x296c;eip=0x000a30; 	X(word_4de48 = ax;);	// 123033                  mov     ds:word_4DE48, ax ;~ 296C:0A30
cs=0x296c;eip=0x000a33; 	T(ax = 0x9F;);	// 123034                  mov     ax, 9Fh ;~ 296C:0A33
cs=0x296c;eip=0x000a36; 	X(word_4de4a = ax;);	// 123035                  mov     ds:word_4DE4A, ax ;~ 296C:0A36
cs=0x296c;eip=0x000a39; 	J(CALLF(sub_49a2a,0));	// 123036                  call    far ptr sub_49A2A ;~ 296C:0A39
cs=0x296c;eip=0x000a3e; 	X(word_4de4c = ax;);	// 123038                  mov     ds:word_4DE4C, ax ;~ 296C:0A3E
cs=0x296c;eip=0x000a41; 	T(ax = 0x42;);	// 123039                  mov     ax, 42h ; 'B' ;~ 296C:0A41
cs=0x296c;eip=0x000a44; 	X(word_4de4e = ax;);	// 123040                  mov     ds:word_4DE4E, ax ;~ 296C:0A44
cs=0x296c;eip=0x000a47; 	T(ax = 0x25;);	// 123041                  mov     ax, 25h ; '%' ;~ 296C:0A47
cs=0x296c;eip=0x000a4a; 	X(word_4de50 = ax;);	// 123042                  mov     ds:word_4DE50, ax ;~ 296C:0A4A
cs=0x296c;eip=0x000a4d; 	T(ax = 0x6C;);	// 123043                  mov     ax, 6Ch ; 'l' ;~ 296C:0A4D
cs=0x296c;eip=0x000a50; 	X(word_4de52 = ax;);	// 123044                  mov     ds:word_4DE52, ax ;~ 296C:0A50
cs=0x296c;eip=0x000a53; 	T(ax = 0x44;);	// 123045                  mov     ax, 44h ; 'D' ;~ 296C:0A53
cs=0x296c;eip=0x000a56; 	X(word_4dd64 = ax;);	// 123046                  mov     ds:word_4DD64, ax ;~ 296C:0A56
cs=0x296c;eip=0x000a59; 	T(ax = 0x60;);	// 123047                  mov     ax, 60h ; '`' ;~ 296C:0A59
cs=0x296c;eip=0x000a5c; 	X(word_4dd66 = ax;);	// 123048                  mov     ds:word_4DD66, ax ;~ 296C:0A5C
cs=0x296c;eip=0x000a5f; 	T(ax = 2;);	// 123049                  mov     ax, 2 ;~ 296C:0A5F
cs=0x296c;eip=0x000a62; 	X(word_4dd62 = ax;);	// 123050                  mov     ds:word_4DD62, ax ;~ 296C:0A62
cs=0x296c;eip=0x000a65; 	X(word_4dd78 = ax;);	// 123051                  mov     ds:word_4DD78, ax ;~ 296C:0A65
cs=0x296c;eip=0x000a68; 	X(word_4dd8e = ax;);	// 123052                  mov     ds:word_4DD8E, ax ;~ 296C:0A68
cs=0x296c;eip=0x000a6b; 	X(word_4dda4 = ax;);	// 123053                  mov     ds:word_4DDA4, ax ;~ 296C:0A6B
cs=0x296c;eip=0x000a6e; 	T(ax = 0x3B;);	// 123054                  mov     ax, 3Bh ; ';' ;~ 296C:0A6E
cs=0x296c;eip=0x000a71; 	X(word_4dd76 = ax;);	// 123055                  mov     ds:word_4DD76, ax ;~ 296C:0A71
cs=0x296c;eip=0x000a74; 	T(ax = 0x82;);	// 123056                  mov     ax, 82h ;~ 296C:0A74
cs=0x296c;eip=0x000a77; 	X(word_4dd7e = ax;);	// 123057                  mov     ds:word_4DD7E, ax ;~ 296C:0A77
cs=0x296c;eip=0x000a7a; 	T(ax = 0x0BC;);	// 123058                  mov     ax, 0BCh ;~ 296C:0A7A
cs=0x296c;eip=0x000a7d; 	X(word_4dd80 = ax;);	// 123059                  mov     ds:word_4DD80, ax ;~ 296C:0A7D
cs=0x296c;eip=0x000a80; 	T(ax = 0x93;);	// 123060                  mov     ax, 93h ;~ 296C:0A80
cs=0x296c;eip=0x000a83; 	X(word_4ddce = ax;);	// 123061                  mov     ds:word_4DDCE, ax ;~ 296C:0A83
cs=0x296c;eip=0x000a86; 	T(ax = 0x14;);	// 123062                  mov     ax, 14h ;~ 296C:0A86
cs=0x296c;eip=0x000a89; 	X(word_4ddd0 = ax;);	// 123063                  mov     ds:word_4DDD0, ax ;~ 296C:0A89
cs=0x296c;eip=0x000a8c; 	T(ax = 0x99;);	// 123064                  mov     ax, 99h ;~ 296C:0A8C
cs=0x296c;eip=0x000a8f; 	X(word_4ddd4 = ax;);	// 123065                  mov     ds:word_4DDD4, ax ;~ 296C:0A8F
cs=0x296c;eip=0x000a92; 	T(ax = 0x4C;);	// 123066                  mov     ax, 4Ch ; 'L' ;~ 296C:0A92
cs=0x296c;eip=0x000a95; 	X(word_4ddd6 = ax;);	// 123067                  mov     ds:word_4DDD6, ax ;~ 296C:0A95
cs=0x296c;eip=0x000a98; 	T(ax = 0x0D;);	// 123068                  mov     ax, 0Dh ;~ 296C:0A98
cs=0x296c;eip=0x000a9b; 	X(word_4ddd8 = ax;);	// 123069                  mov     ds:word_4DDD8, ax ;~ 296C:0A9B
cs=0x296c;eip=0x000a9e; 	T(ax = 9;);	// 123070                  mov     ax, 9 ;~ 296C:0A9E
cs=0x296c;eip=0x000aa1; 	X(word_4ddda = ax;);	// 123071                  mov     ds:word_4DDDA, ax ;~ 296C:0AA1
cs=0x296c;eip=0x000aa4; 	T(ax = 0x82;);	// 123072                  mov     ax, 82h ;~ 296C:0AA4
cs=0x296c;eip=0x000aa7; 	X(word_4ddb6 = ax;);	// 123073                  mov     ds:word_4DDB6, ax ;~ 296C:0AA7
cs=0x296c;eip=0x000aaa; 	T(ax = 0x40;);	// 123074                  mov     ax, 40h ; '@' ;~ 296C:0AAA
cs=0x296c;eip=0x000aad; 	X(word_4ddb8 = ax;);	// 123075                  mov     ds:word_4DDB8, ax ;~ 296C:0AAD
cs=0x296c;eip=0x000ab0; 	T(ax = 0x3B;);	// 123076                  mov     ax, 3Bh ; ';' ;~ 296C:0AB0
cs=0x296c;eip=0x000ab3; 	X(word_4ddba = ax;);	// 123077                  mov     ds:word_4DDBA, ax ;~ 296C:0AB3
cs=0x296c;eip=0x000ab6; 	T(ax = 2;);	// 123078                  mov     ax, 2 ;~ 296C:0AB6
cs=0x296c;eip=0x000ab9; 	X(word_4ddbc = ax;);	// 123079                  mov     ds:word_4DDBC, ax ;~ 296C:0AB9
cs=0x296c;eip=0x000abc; 	T(ax = 0x44;);	// 123080                  mov     ax, 44h ; 'D' ;~ 296C:0ABC
cs=0x296c;eip=0x000abf; 	X(word_4dd90 = ax;);	// 123081                  mov     ds:word_4DD90, ax ;~ 296C:0ABF
cs=0x296c;eip=0x000ac2; 	T(ax = 0x7F;);	// 123082                  mov     ax, 7Fh ;~ 296C:0AC2
cs=0x296c;eip=0x000ac5; 	X(word_4dd94 = ax;);	// 123083                  mov     ds:word_4DD94, ax ;~ 296C:0AC5
cs=0x296c;eip=0x000ac8; 	T(ax = 0x0C3;);	// 123084                  mov     ax, 0C3h ;~ 296C:0AC8
cs=0x296c;eip=0x000acb; 	X(word_4dd96 = ax;);	// 123085                  mov     ds:word_4DD96, ax ;~ 296C:0ACB
cs=0x296c;eip=0x000ace; 	T(ax = 0x3F;);	// 123086                  mov     ax, 3Fh ; '?' ;~ 296C:0ACE
cs=0x296c;eip=0x000ad1; 	X(word_4dda2 = ax;);	// 123087                  mov     ds:word_4DDA2, ax ;~ 296C:0AD1
cs=0x296c;eip=0x000ad4; 	J(RETN(0));	// 123088                  retn ;~ 296C:0AD4
loc_38775:
	// 7284 
cs=0x296c;eip=0x000ad5; 	T(ax = 0x5E;);	// 123092                  mov     ax, 5Eh ; '^' ;~ 296C:0AD5
cs=0x296c;eip=0x000ad8; 	X(word_4de27 = ax;);	// 123093                  mov     ds:word_4DE27, ax ;~ 296C:0AD8
cs=0x296c;eip=0x000adb; 	T(al = 0x11;);	// 123094                  mov     al, 11h ;~ 296C:0ADB
cs=0x296c;eip=0x000add; 	X(byte_4de29 = al;);	// 123095                  mov     ds:byte_4DE29, al ;~ 296C:0ADD
cs=0x296c;eip=0x000ae0; 	T(ax = 0x14;);	// 123096                  mov     ax, 14h ;~ 296C:0AE0
cs=0x296c;eip=0x000ae3; 	X(word_4de2a = ax;);	// 123097                  mov     ds:word_4DE2A, ax ;~ 296C:0AE3
cs=0x296c;eip=0x000ae6; 	T(al = 1;);	// 123098                  mov     al, 1 ;~ 296C:0AE6
cs=0x296c;eip=0x000ae8; 	X(byte_4de2c = al;);	// 123099                  mov     ds:byte_4DE2C, al ;~ 296C:0AE8
cs=0x296c;eip=0x000aeb; 	T(ax = 0x31;);	// 123100                  mov     ax, 31h ; '1' ;~ 296C:0AEB
cs=0x296c;eip=0x000aee; 	X(word_4de2d = ax;);	// 123101                  mov     ds:word_4DE2D, ax ;~ 296C:0AEE
cs=0x296c;eip=0x000af1; 	T(ax = 0x0FF;);	// 123102                  mov     ax, 0FFh ;~ 296C:0AF1
cs=0x296c;eip=0x000af4; 	X(word_4de2f = ax;);	// 123103                  mov     ds:word_4DE2F, ax ;~ 296C:0AF4
cs=0x296c;eip=0x000af7; 	T(al = 0x6D;);	// 123104                  mov     al, 6Dh ; 'm' ;~ 296C:0AF7
cs=0x296c;eip=0x000af9; 	X(byte_4de26 = al;);	// 123105                  mov     ds:byte_4DE26, al ;~ 296C:0AF9
cs=0x296c;eip=0x000afc; 	T(ax = 0x2D;);	// 123106                  mov     ax, 2Dh ; '-' ;~ 296C:0AFC
cs=0x296c;eip=0x000aff; 	X(word_4de31 = ax;);	// 123107                  mov     ds:word_4DE31, ax ;~ 296C:0AFF
cs=0x296c;eip=0x000b02; 	T(ax = 0x0F8;);	// 123108                  mov     ax, 0F8h ;~ 296C:0B02
cs=0x296c;eip=0x000b05; 	X(word_4de33 = ax;);	// 123109                  mov     ds:word_4DE33, ax ;~ 296C:0B05
cs=0x296c;eip=0x000b08; 	T(ax = 0x0A;);	// 123110                  mov     ax, 0Ah ;~ 296C:0B08
cs=0x296c;eip=0x000b0b; 	X(word_4de35 = ax;);	// 123111                  mov     ds:word_4DE35, ax ;~ 296C:0B0B
cs=0x296c;eip=0x000b0e; 	T(ax = 5;);	// 123112                  mov     ax, 5 ;~ 296C:0B0E
cs=0x296c;eip=0x000b11; 	X(word_4de37 = ax;);	// 123113                  mov     ds:word_4DE37, ax ;~ 296C:0B11
cs=0x296c;eip=0x000b14; 	T(ax = 0x0FFC4;);	// 123114                  mov     ax, 0FFC4h ;~ 296C:0B14
cs=0x296c;eip=0x000b17; 	X(word_4de39 = ax;);	// 123115                  mov     ds:word_4DE39, ax ;~ 296C:0B17
cs=0x296c;eip=0x000b1a; 	T(ax = 0x0FFF1;);	// 123116                  mov     ax, 0FFF1h ;~ 296C:0B1A
cs=0x296c;eip=0x000b1d; 	X(word_4de3b = ax;);	// 123117                  mov     ds:word_4DE3B, ax ;~ 296C:0B1D
cs=0x296c;eip=0x000b20; 	T(ax = 0x10;);	// 123118                  mov     ax, 10h ;~ 296C:0B20
cs=0x296c;eip=0x000b23; 	X(word_4de3d = ax;);	// 123119                  mov     ds:word_4DE3D, ax ;~ 296C:0B23
cs=0x296c;eip=0x000b26; 	T(ax = 0x3C;);	// 123120                  mov     ax, 3Ch ; '<' ;~ 296C:0B26
cs=0x296c;eip=0x000b29; 	X(word_4de3f = ax;);	// 123121                  mov     ds:word_4DE3F, ax ;~ 296C:0B29
cs=0x296c;eip=0x000b2c; 	T(ax = 0x34;);	// 123122                  mov     ax, 34h ; '4' ;~ 296C:0B2C
cs=0x296c;eip=0x000b2f; 	X(word_4de41 = ax;);	// 123123                  mov     ds:word_4DE41, ax ;~ 296C:0B2F
cs=0x296c;eip=0x000b32; 	T(al = 0x68;);	// 123124                  mov     al, 68h ; 'h' ;~ 296C:0B32
cs=0x296c;eip=0x000b34; 	X(byte_4de43 = al;);	// 123125                  mov     ds:byte_4DE43, al ;~ 296C:0B34
cs=0x296c;eip=0x000b37; 	T(ax = 0x4F;);	// 123126                  mov     ax, 4Fh ; 'O' ;~ 296C:0B37
cs=0x296c;eip=0x000b3a; 	X(word_4de44 = ax;);	// 123127                  mov     ds:word_4DE44, ax ;~ 296C:0B3A
cs=0x296c;eip=0x000b3d; 	T(ax = 0x24;);	// 123128                  mov     ax, 24h ; '$' ;~ 296C:0B3D
cs=0x296c;eip=0x000b40; 	X(word_4de46 = ax;);	// 123129                  mov     ds:word_4DE46, ax ;~ 296C:0B40
cs=0x296c;eip=0x000b43; 	T(ax = 0x38;);	// 123130                  mov     ax, 38h ; '8' ;~ 296C:0B43
cs=0x296c;eip=0x000b46; 	X(word_4de48 = ax;);	// 123131                  mov     ds:word_4DE48, ax ;~ 296C:0B46
cs=0x296c;eip=0x000b49; 	T(ax = 0x9F;);	// 123132                  mov     ax, 9Fh ;~ 296C:0B49
cs=0x296c;eip=0x000b4c; 	X(word_4de4a = ax;);	// 123133                  mov     ds:word_4DE4A, ax ;~ 296C:0B4C
cs=0x296c;eip=0x000b4f; 	J(CALLF(sub_49a2f,0));	// 123134                  call    far ptr sub_49A2F ;~ 296C:0B4F
seg37ca_b54_proc:
	// 123138 
cs=0x296c;eip=0x000b54; 	X(word_4de4c = ax;);	// 123138                  mov     ds:word_4DE4C, ax ;~ 296C:0B54
cs=0x296c;eip=0x000b57; 	T(ax = 0x0A0;);	// 123139                  mov     ax, 0A0h ;~ 296C:0B57
cs=0x296c;eip=0x000b5a; 	X(word_4de4e = ax;);	// 123140                  mov     ds:word_4DE4E, ax ;~ 296C:0B5A
cs=0x296c;eip=0x000b5d; 	T(ax = 0x4C;);	// 123141                  mov     ax, 4Ch ; 'L' ;~ 296C:0B5D
cs=0x296c;eip=0x000b60; 	X(word_4de50 = ax;);	// 123142                  mov     ds:word_4DE50, ax ;~ 296C:0B60
cs=0x296c;eip=0x000b63; 	T(ax = 0x3C;);	// 123143                  mov     ax, 3Ch ; '<' ;~ 296C:0B63
cs=0x296c;eip=0x000b66; 	X(word_4de52 = ax;);	// 123144                  mov     ds:word_4DE52, ax ;~ 296C:0B66
cs=0x296c;eip=0x000b69; 	T(ax = 0x1A;);	// 123145                  mov     ax, 1Ah ;~ 296C:0B69
cs=0x296c;eip=0x000b6c; 	X(word_4dd64 = ax;);	// 123146                  mov     ds:word_4DD64, ax ;~ 296C:0B6C
cs=0x296c;eip=0x000b6f; 	T(ax = 0x56;);	// 123147                  mov     ax, 56h ; 'V' ;~ 296C:0B6F
cs=0x296c;eip=0x000b72; 	X(word_4dd66 = ax;);	// 123148                  mov     ds:word_4DD66, ax ;~ 296C:0B72
cs=0x296c;eip=0x000b75; 	T(ax = 0;);	// 123149                  mov     ax, 0 ;~ 296C:0B75
cs=0x296c;eip=0x000b78; 	X(word_4dd62 = ax;);	// 123150                  mov     ds:word_4DD62, ax ;~ 296C:0B78
cs=0x296c;eip=0x000b7b; 	X(word_4dd78 = ax;);	// 123151                  mov     ds:word_4DD78, ax ;~ 296C:0B7B
cs=0x296c;eip=0x000b7e; 	X(word_4dd8e = ax;);	// 123152                  mov     ds:word_4DD8E, ax ;~ 296C:0B7E
cs=0x296c;eip=0x000b81; 	X(word_4dda4 = ax;);	// 123153                  mov     ds:word_4DDA4, ax ;~ 296C:0B81
cs=0x296c;eip=0x000b84; 	T(ax = 0x0A;);	// 123154                  mov     ax, 0Ah ;~ 296C:0B84
cs=0x296c;eip=0x000b87; 	X(word_4dd76 = ax;);	// 123155                  mov     ds:word_4DD76, ax ;~ 296C:0B87
cs=0x296c;eip=0x000b8a; 	T(ax = 0x5A;);	// 123156                  mov     ax, 5Ah ; 'Z' ;~ 296C:0B8A
cs=0x296c;eip=0x000b8d; 	X(word_4dd7e = ax;);	// 123157                  mov     ds:word_4DD7E, ax ;~ 296C:0B8D
cs=0x296c;eip=0x000b90; 	T(ax = 0x0E6;);	// 123158                  mov     ax, 0E6h ;~ 296C:0B90
cs=0x296c;eip=0x000b93; 	X(word_4dd80 = ax;);	// 123159                  mov     ds:word_4DD80, ax ;~ 296C:0B93
cs=0x296c;eip=0x000b96; 	T(ax = 0x82;);	// 123160                  mov     ax, 82h ;~ 296C:0B96
cs=0x296c;eip=0x000b99; 	X(word_4ddce = ax;);	// 123161                  mov     ds:word_4DDCE, ax ;~ 296C:0B99
cs=0x296c;eip=0x000b9c; 	T(ax = 0x26;);	// 123162                  mov     ax, 26h ; '&' ;~ 296C:0B9C
cs=0x296c;eip=0x000b9f; 	X(word_4ddd0 = ax;);	// 123163                  mov     ds:word_4DDD0, ax ;~ 296C:0B9F
cs=0x296c;eip=0x000ba2; 	T(ax = 0x93;);	// 123164                  mov     ax, 93h ;~ 296C:0BA2
cs=0x296c;eip=0x000ba5; 	X(word_4ddd4 = ax;);	// 123165                  mov     ds:word_4DDD4, ax ;~ 296C:0BA5
cs=0x296c;eip=0x000ba8; 	T(ax = 0x30;);	// 123166                  mov     ax, 30h ; '0' ;~ 296C:0BA8
cs=0x296c;eip=0x000bab; 	X(word_4ddd6 = ax;);	// 123167                  mov     ds:word_4DDD6, ax ;~ 296C:0BAB
cs=0x296c;eip=0x000bae; 	T(ax = 0x19;);	// 123168                  mov     ax, 19h ;~ 296C:0BAE
cs=0x296c;eip=0x000bb1; 	X(word_4ddd8 = ax;);	// 123169                  mov     ds:word_4DDD8, ax ;~ 296C:0BB1
cs=0x296c;eip=0x000bb4; 	T(ax = 0x0F;);	// 123170                  mov     ax, 0Fh ;~ 296C:0BB4
cs=0x296c;eip=0x000bb7; 	X(word_4ddda = ax;);	// 123171                  mov     ds:word_4DDDA, ax ;~ 296C:0BB7
cs=0x296c;eip=0x000bba; 	T(ax = 0x5A;);	// 123172                  mov     ax, 5Ah ; 'Z' ;~ 296C:0BBA
cs=0x296c;eip=0x000bbd; 	X(word_4ddb6 = ax;);	// 123173                  mov     ds:word_4DDB6, ax ;~ 296C:0BBD
cs=0x296c;eip=0x000bc0; 	T(ax = 0x10;);	// 123174                  mov     ax, 10h ;~ 296C:0BC0
cs=0x296c;eip=0x000bc3; 	X(word_4ddb8 = ax;);	// 123175                  mov     ds:word_4DDB8, ax ;~ 296C:0BC3
cs=0x296c;eip=0x000bc6; 	T(ax = 0x8D;);	// 123176                  mov     ax, 8Dh ;~ 296C:0BC6
cs=0x296c;eip=0x000bc9; 	X(word_4ddba = ax;);	// 123177                  mov     ds:word_4DDBA, ax ;~ 296C:0BC9
cs=0x296c;eip=0x000bcc; 	T(ax = 3;);	// 123178                  mov     ax, 3 ;~ 296C:0BCC
cs=0x296c;eip=0x000bcf; 	X(word_4ddbc = ax;);	// 123179                  mov     ds:word_4DDBC, ax ;~ 296C:0BCF
cs=0x296c;eip=0x000bd2; 	T(ax = 0x14;);	// 123180                  mov     ax, 14h ;~ 296C:0BD2
cs=0x296c;eip=0x000bd5; 	X(word_4dd90 = ax;);	// 123181                  mov     ds:word_4DD90, ax ;~ 296C:0BD5
cs=0x296c;eip=0x000bd8; 	T(ax = 0x4E;);	// 123182                  mov     ax, 4Eh ; 'N' ;~ 296C:0BD8
cs=0x296c;eip=0x000bdb; 	X(word_4dd94 = ax;);	// 123183                  mov     ds:word_4DD94, ax ;~ 296C:0BDB
cs=0x296c;eip=0x000bde; 	T(ax = 0x0F1;);	// 123184                  mov     ax, 0F1h ;~ 296C:0BDE
cs=0x296c;eip=0x000be1; 	X(word_4dd96 = ax;);	// 123185                  mov     ds:word_4DD96, ax ;~ 296C:0BE1
cs=0x296c;eip=0x000be4; 	T(ax = 0x10;);	// 123186                  mov     ax, 10h ;~ 296C:0BE4
cs=0x296c;eip=0x000be7; 	X(word_4dda2 = ax;);	// 123187                  mov     ds:word_4DDA2, ax ;~ 296C:0BE7
cs=0x296c;eip=0x000bea; 	J(RETN(0));	// 123188                  retn ;~ 296C:0BEA

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_38655: 	goto loc_38655;
        case m2c::kloc_3865f: 	goto loc_3865f;
        case m2c::kloc_38775: 	goto loc_38775;
        case m2c::kseg37ca_b54_proc: 	goto seg37ca_b54_proc;
        case m2c::ksub_38641: 	goto sub_38641;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3888b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3888b:
    _begin:
cs=0x296c;eip=0x000beb; 	J(CALL(sub_388c1,0));	// 123194                  call    sub_388C1 ;~ 296C:0BEB
cs=0x296c;eip=0x000bee; 	T(bx = 0;);	// 123195                  mov     bx, 0 ;~ 296C:0BEE
cs=0x296c;eip=0x000bf1; 	J(CALL(sub_3889b,0));	// 123196                  call    sub_3889B ;~ 296C:0BF1
cs=0x296c;eip=0x000bf4; 	T(bx = 1;);	// 123197                  mov     bx, 1 ;~ 296C:0BF4
cs=0x296c;eip=0x000bf7; 	J(CALL(sub_3889b,0));	// 123198                  call    sub_3889B ;~ 296C:0BF7
cs=0x296c;eip=0x000bfa; 	J(RETF(0));	// 123199                  retf ;~ 296C:0BFA

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_3888b: 	goto sub_3888b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3889b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3889b:
    _begin:
cs=0x296c;eip=0x000bfb; 	T(SHL(bx, 1));	// 123208                  shl     bx, 1 ;~ 296C:0BFB
cs=0x296c;eip=0x000bfd; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x56DC))));	// 123209                  mov     ax, [bx+56DCh] ;~ 296C:0BFD
cs=0x296c;eip=0x000c01; 	X(MOV(*(dw*)(raddr(ds,bx+0x56C4)), ax));	// 123210                  mov     [bx+56C4h], ax ;~ 296C:0C01
cs=0x296c;eip=0x000c05; 	X(MOV(*(dw*)(raddr(ds,bx+0x56B4)), ax));	// 123211                  mov     [bx+56B4h], ax ;~ 296C:0C05
cs=0x296c;eip=0x000c09; 	X(MOV(*(dw*)(raddr(ds,bx+0x56BC)), ax));	// 123212                  mov     [bx+56BCh], ax ;~ 296C:0C09
cs=0x296c;eip=0x000c0d; 	J(RETN(0));	// 123213                  retn ;~ 296C:0C0D

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_3889b: 	goto sub_3889b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_388ae(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_388ae:
    _begin:
cs=0x296c;eip=0x000c0e; 	J(CALL(sub_388c1,0));	// 123221                  call    sub_388C1 ;~ 296C:0C0E
cs=0x296c;eip=0x000c11; 	T(bx = 0;);	// 123222                  mov     bx, 0 ;~ 296C:0C11
cs=0x296c;eip=0x000c14; 	J(CALL(sub_388ee,0));	// 123223                  call    sub_388EE ;~ 296C:0C14
cs=0x296c;eip=0x000c17; 	T(bx = 1;);	// 123224                  mov     bx, 1 ;~ 296C:0C17
cs=0x296c;eip=0x000c1a; 	J(CALL(sub_388ee,0));	// 123225                  call    sub_388EE ;~ 296C:0C1A
cs=0x296c;eip=0x000c1d; 	T(ax = word_4e1c4;);	// 123226                  mov     ax, ds:word_4E1C4 ;~ 296C:0C1D
cs=0x296c;eip=0x000c20; 	J(RETF(0));	// 123227                  retf ;~ 296C:0C20

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_388ae: 	goto sub_388ae;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_388c1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_388c1:
    _begin:
cs=0x296c;eip=0x000c21; 	X(PUSH(bp));	// 123236                  push    bp ;~ 296C:0C21
cs=0x296c;eip=0x000c22; 	T(XOR(bx, bx));	// 123237                  xor     bx, bx ;~ 296C:0C22
cs=0x296c;eip=0x000c24; 	T(XOR(bp, bp));	// 123238                  xor     bp, bp ;~ 296C:0C24
cs=0x296c;eip=0x000c26; 	T(cx = 0x0FFFF;);	// 123239                  mov     cx, 0FFFFh ;~ 296C:0C26
cs=0x296c;eip=0x000c29; 	T(dx = 0x201;);	// 123240                  mov     dx, 201h ;~ 296C:0C29
cs=0x296c;eip=0x000c2c; 	T(CLI);	// 123241                  cli ;~ 296C:0C2C
cs=0x296c;eip=0x000c2d; 	S(OUT(dx, al));	// 123242                  out     dx, al          ; Game I/O port ;~ 296C:0C2D
cs=0x296c;eip=0x000c2e; 	J({;});	// 123245                  jmp     short $+2 ;~ 296C:0C2E
loc_388d0:
	// 7285 
cs=0x296c;eip=0x000c30; 	J({;});	// 123249                  jmp     short $+2 ;~ 296C:0C30
loc_388d2:
	// 7286 
cs=0x296c;eip=0x000c32; 	S(IN(al, dx));	// 123254                  in      al, dx          ; Game I/O port ;~ 296C:0C32
cs=0x296c;eip=0x000c33; 	T(AND(al, 3));	// 123257                  and     al, 3 ;~ 296C:0C33
cs=0x296c;eip=0x000c35; 	J(JZ(loc_388e3));	// 123258                  jz      short loc_388E3 ;~ 296C:0C35
cs=0x296c;eip=0x000c37; 	T(SHR(al, 1));	// 123259                  shr     al, 1 ;~ 296C:0C37
cs=0x296c;eip=0x000c39; 	T(ADC(bx, 0));	// 123260                  adc     bx, 0 ;~ 296C:0C39
cs=0x296c;eip=0x000c3c; 	T(SHR(al, 1));	// 123261                  shr     al, 1 ;~ 296C:0C3C
cs=0x296c;eip=0x000c3e; 	T(ADC(bp, 0));	// 123262                  adc     bp, 0 ;~ 296C:0C3E
cs=0x296c;eip=0x000c41; 	J(LOOP(loc_388d2));	// 123263                  loop    loc_388D2 ;~ 296C:0C41
loc_388e3:
	// 7287 
cs=0x296c;eip=0x000c43; 	T(STI);	// 123266                  sti ;~ 296C:0C43
cs=0x296c;eip=0x000c44; 	X(word_4e1bc = bx;);	// 123267                  mov     ds:word_4E1BC, bx ;~ 296C:0C44
cs=0x296c;eip=0x000c48; 	X(word_4e1be = bp;);	// 123268                  mov     ds:word_4E1BE, bp ;~ 296C:0C48
cs=0x296c;eip=0x000c4c; 	X(POP(bp));	// 123269                  pop     bp ;~ 296C:0C4C
cs=0x296c;eip=0x000c4d; 	J(RETN(0));	// 123270                  retn ;~ 296C:0C4D

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_388d0: 	goto loc_388d0;
        case m2c::kloc_388d2: 	goto loc_388d2;
        case m2c::kloc_388e3: 	goto loc_388e3;
        case m2c::ksub_388c1: 	goto sub_388c1;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_388ee(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_388ee:
    _begin:
cs=0x296c;eip=0x000c4e; 	T(SHL(bx, 1));	// 123279                  shl     bx, 1 ;~ 296C:0C4E
cs=0x296c;eip=0x000c50; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x56DC))));	// 123280                  mov     ax, [bx+56DCh] ;~ 296C:0C50
cs=0x296c;eip=0x000c54; 	T(dx = ax;);	// 123281                  mov     dx, ax ;~ 296C:0C54
cs=0x296c;eip=0x000c56; 	T(SUB(dx, *(dw*)(raddr(ds,bx+0x56C4))));	// 123282                  sub     dx, [bx+56C4h] ;~ 296C:0C56
cs=0x296c;eip=0x000c5a; 	J(JC(loc_38903));	// 123283                  jb      short loc_38903 ;~ 296C:0C5A
cs=0x296c;eip=0x000c5c; 	J(JA(loc_38925));	// 123284                  ja      short loc_38925 ;~ 296C:0C5C
cs=0x296c;eip=0x000c5e; 	T(ah = 0x80;);	// 123285                  mov     ah, 80h ;~ 296C:0C5E
cs=0x296c;eip=0x000c60; 	J(JMP(loc_38943));	// 123286                  jmp     short loc_38943 ;~ 296C:0C60
loc_38903:
	// 7288 
cs=0x296c;eip=0x000c63; 	T(NEG(dx));	// 123292                  neg     dx ;~ 296C:0C63
cs=0x296c;eip=0x000c65; 	T(CMP(ax, *(dw*)(raddr(ds,bx+0x56B4))));	// 123293                  cmp     ax, [bx+56B4h] ;~ 296C:0C65
cs=0x296c;eip=0x000c69; 	J(JA(loc_38918));	// 123294                  ja      short loc_38918 ;~ 296C:0C69
cs=0x296c;eip=0x000c6b; 	X(MOV(*(dw*)(raddr(ds,bx+0x56B4)), ax));	// 123295                  mov     [bx+56B4h], ax ;~ 296C:0C6B
cs=0x296c;eip=0x000c6f; 	X(MOV(*(dw*)(raddr(ds,bx+0x56CC)), dx));	// 123296                  mov     [bx+56CCh], dx ;~ 296C:0C6F
cs=0x296c;eip=0x000c73; 	T(ah = 0;);	// 123297                  mov     ah, 0 ;~ 296C:0C73
cs=0x296c;eip=0x000c75; 	J(JMP(loc_38943));	// 123298                  jmp     short loc_38943 ;~ 296C:0C75
loc_38918:
	// 7289 
cs=0x296c;eip=0x000c78; 	T(XOR(ax, ax));	// 123304                  xor     ax, ax ;~ 296C:0C78
cs=0x296c;eip=0x000c7a; 	X(DIV2(*(dw*)(raddr(ds,bx+0x56CC))));	// 123305                  div     word ptr [bx+56CCh] ;~ 296C:0C7A
cs=0x296c;eip=0x000c7e; 	T(NOT(ax));	// 123306                  not     ax ;~ 296C:0C7E
cs=0x296c;eip=0x000c80; 	T(SHR(ax, 1));	// 123307                  shr     ax, 1 ;~ 296C:0C80
cs=0x296c;eip=0x000c82; 	J(JMP(loc_38943));	// 123308                  jmp     short loc_38943 ;~ 296C:0C82
loc_38925:
	// 7290 
cs=0x296c;eip=0x000c85; 	T(CMP(ax, *(dw*)(raddr(ds,bx+0x56BC))));	// 123314                  cmp     ax, [bx+56BCh] ;~ 296C:0C85
cs=0x296c;eip=0x000c89; 	J(JC(loc_38938));	// 123315                  jb      short loc_38938 ;~ 296C:0C89
cs=0x296c;eip=0x000c8b; 	X(MOV(*(dw*)(raddr(ds,bx+0x56BC)), ax));	// 123316                  mov     [bx+56BCh], ax ;~ 296C:0C8B
cs=0x296c;eip=0x000c8f; 	X(MOV(*(dw*)(raddr(ds,bx+0x56D4)), dx));	// 123317                  mov     [bx+56D4h], dx ;~ 296C:0C8F
cs=0x296c;eip=0x000c93; 	T(ah = 0x0FF;);	// 123318                  mov     ah, 0FFh ;~ 296C:0C93
cs=0x296c;eip=0x000c95; 	J(JMP(loc_38943));	// 123319                  jmp     short loc_38943 ;~ 296C:0C95
loc_38938:
	// 7291 
cs=0x296c;eip=0x000c98; 	T(XOR(ax, ax));	// 123325                  xor     ax, ax ;~ 296C:0C98
cs=0x296c;eip=0x000c9a; 	X(DIV2(*(dw*)(raddr(ds,bx+0x56D4))));	// 123326                  div     word ptr [bx+56D4h] ;~ 296C:0C9A
cs=0x296c;eip=0x000c9e; 	T(SHR(ax, 1));	// 123327                  shr     ax, 1 ;~ 296C:0C9E
cs=0x296c;eip=0x000ca0; 	T(ADD(ah, 0x80));	// 123328                  add     ah, 80h ;~ 296C:0CA0
loc_38943:
	// 7292 
cs=0x296c;eip=0x000ca3; 	T(SHR(bx, 1));	// 123332                  shr     bx, 1 ;~ 296C:0CA3
cs=0x296c;eip=0x000ca5; 	X(MOV(*(raddr(ds,bx+0x56E4)), ah));	// 123333                  mov     [bx+56E4h], ah ;~ 296C:0CA5
cs=0x296c;eip=0x000ca9; 	J(RETN(0));	// 123334                  retn ;~ 296C:0CA9

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_38903: 	goto loc_38903;
        case m2c::kloc_38918: 	goto loc_38918;
        case m2c::kloc_38925: 	goto loc_38925;
        case m2c::kloc_38938: 	goto loc_38938;
        case m2c::kloc_38943: 	goto loc_38943;
        case m2c::ksub_388ee: 	goto sub_388ee;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3894a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3894a:
    _begin:
cs=0x296c;eip=0x000caa; 	T(bx = sp;);	// 123342                  mov     bx, sp ;~ 296C:0CAA
cs=0x296c;eip=0x000cac; 	X(PUSH(si));	// 123343                  push    si ;~ 296C:0CAC
cs=0x296c;eip=0x000cad; 	X(PUSH(di));	// 123344                  push    di ;~ 296C:0CAD
cs=0x296c;eip=0x000cae; 	X(PUSH(es));	// 123345                  push    es ;~ 296C:0CAE
cs=0x296c;eip=0x000caf; 	T(si = 0x56B4;);	// 123346                  mov     si, 56B4h ;~ 296C:0CAF
cs=0x296c;eip=0x000cb2; 	T(LES(di, *(dw*)(raddr(ds,bx+4))));	// 123347                  les     di, [bx+4] ;~ 296C:0CB2
cs=0x296c;eip=0x000cb5; 	T(cx = 0x14;);	// 123349                  mov     cx, 14h ;~ 296C:0CB5
	// 123350                  rep movsw ;~ 296C:0CB8
cs=0x296c;eip=0x000cb8; 	X(	REP MOVSW);	// 123350                  rep movsw ;~ 296C:0CB8
cs=0x296c;eip=0x000cba; 	X(POP(es));	// 123351                  pop     es ;~ 296C:0CBA
cs=0x296c;eip=0x000cbb; 	X(POP(di));	// 123352                  pop     di ;~ 296C:0CBB
cs=0x296c;eip=0x000cbc; 	X(POP(si));	// 123353                  pop     si ;~ 296C:0CBC
cs=0x296c;eip=0x000cbd; 	J(RETF(0));	// 123354                  retf ;~ 296C:0CBD

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_3894a: 	goto sub_3894a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group86(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group86:
    _begin:
sub_3895e:
	// 123361 
cs=0x296c;eip=0x000cbe; 	T(bx = sp;);	// 123362                  mov     bx, sp ;~ 296C:0CBE
cs=0x296c;eip=0x000cc0; 	X(PUSH(si));	// 123363                  push    si ;~ 296C:0CC0
cs=0x296c;eip=0x000cc1; 	X(PUSH(di));	// 123364                  push    di ;~ 296C:0CC1
cs=0x296c;eip=0x000cc2; 	X(PUSH(ds));	// 123365                  push    ds ;~ 296C:0CC2
cs=0x296c;eip=0x000cc3; 	X(PUSH(es));	// 123366                  push    es ;~ 296C:0CC3
cs=0x296c;eip=0x000cc4; 	T(LDS(si, *(dw*)(raddr(ds,bx+4))));	// 123367                  lds     si, [bx+4] ;~ 296C:0CC4
cs=0x296c;eip=0x000cc7; 	T(di = 0x56B4;);	// 123368                  mov     di, 56B4h ;~ 296C:0CC7
cs=0x296c;eip=0x000cca; 	X(PUSH(ss));	// 123369                  push    ss ;~ 296C:0CCA
cs=0x296c;eip=0x000ccb; 	X(POP(es));	// 123370                  pop     es ;~ 296C:0CCB
cs=0x296c;eip=0x000ccc; 	T(cx = 0x14;);	// 123372                  mov     cx, 14h ;~ 296C:0CCC
loc_3896f:
	// 7293 
	// 123375                  rep movsw ;~ 296C:0CCF
cs=0x296c;eip=0x000ccf; 	X(	REP MOVSW);	// 123375                  rep movsw ;~ 296C:0CCF
seg37ca_cd1_proc:
	// 123378 
cs=0x296c;eip=0x000cd1; 	X(POP(es));	// 123378                  pop     es ;~ 296C:0CD1
cs=0x296c;eip=0x000cd2; 	X(POP(ds));	// 123380                  pop     ds ;~ 296C:0CD2
cs=0x296c;eip=0x000cd3; 	X(POP(di));	// 123381                  pop     di ;~ 296C:0CD3
cs=0x296c;eip=0x000cd4; 	X(POP(si));	// 123382                  pop     si ;~ 296C:0CD4
cs=0x296c;eip=0x000cd5; 	J(RETF(0));	// 123383                  retf ;~ 296C:0CD5

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_3896f: 	goto loc_3896f;
        case m2c::kseg37ca_cd1_proc: 	goto seg37ca_cd1_proc;
        case m2c::ksub_3895e: 	goto sub_3895e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}


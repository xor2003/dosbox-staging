/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool _group14(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group14:
    _begin:
mouse_set_pixratio:
	// 79927 
#undef arg_0
#define arg_0 6
	// 79929 arg_0           = word ptr  6 ;~ 282C:000A
#undef arg_2
#define arg_2 8
	// 79930 arg_2           = word ptr  8 ;~ 282C:000A
ret_282c_a:
	// 9951 
cs=0x282c;eip=0x00000a; 	X(PUSH(bp));	// 79932 push    bp ;~ 282C:000A
cs=0x282c;eip=0x00000b; 	T(MOV(bp, sp));	// 79933 mov     bp, sp ;~ 282C:000B
cs=0x282c;eip=0x00000d; 	X(MOV(*(dw*)((&regs_x86)), 0x0F));	// 79934 mov     word ptr regs_x86, 0Fh ;~ 282C:000D
cs=0x282c;eip=0x000013; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 79935 mov     ax, [bp+arg_0] ;~ 282C:0013
cs=0x282c;eip=0x000016; 	X(MOV(*(dw*)((&unk_4498e)), ax));	// 79936 mov     word ptr unk_4498E, ax ;~ 282C:0016
cs=0x282c;eip=0x000019; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 79937 mov     ax, [bp+arg_2] ;~ 282C:0019
cs=0x282c;eip=0x00001c; 	X(MOV(*(dw*)((&unk_44990)), ax));	// 79938 mov     word ptr unk_44990, ax ;~ 282C:001C
cs=0x282c;eip=0x00001f; 	T(MOV(ax, offset(dseg,regs_x86)));	// 79939 mov     ax, offset regs_x86 ;~ 282C:001F
cs=0x282c;eip=0x000022; 	X(PUSH(ax));	// 79940 push    ax              ; union REGS * ;~ 282C:0022
cs=0x282c;eip=0x000023; 	X(PUSH(ax));	// 79941 push    ax              ; union REGS * ;~ 282C:0023
cs=0x282c;eip=0x000024; 	T(MOV(ax, 0x33));	// 79942 mov     ax, 33h         ; int 33,f = set mouse mickey pixel ratio ;~ 282C:0024
cs=0x282c;eip=0x000027; 	X(PUSH(ax));	// 79943 push    ax              ; int ;~ 282C:0027
cs=0x282c;eip=0x000028; 	R(CALLF(_int86,0));	// 79944 call    _int86 ;~ 282C:0028
cs=0x282c;eip=0x00002d; 	T(ADD(sp, 6));	// 79945 add     sp, 6 ;~ 282C:002D
cs=0x282c;eip=0x000030; 	X(POP(bp));	// 79946 pop     bp ;~ 282C:0030
cs=0x282c;eip=0x000031; 	R(RETF(0));	// 79947 retf ;~ 282C:0031
mouse_init:
	// 79955 
#undef var_2
#define var_2 -2
	// 79957 var_2           = word ptr -2 ;~ 282C:0032
#undef arg_0
#define arg_0 6
	// 79958 arg_0           = word ptr  6 ;~ 282C:0032
#undef arg_2
#define arg_2 8
	// 79959 arg_2           = word ptr  8 ;~ 282C:0032
ret_282c_32:
	// 9952 
cs=0x282c;eip=0x000032; 	X(PUSH(bp));	// 79961 push    bp              ; union REGS * ;~ 282C:0032
cs=0x282c;eip=0x000033; 	T(MOV(bp, sp));	// 79962 mov     bp, sp ;~ 282C:0033
cs=0x282c;eip=0x000035; 	T(SUB(sp, 2));	// 79963 sub     sp, 2 ;~ 282C:0035
cs=0x282c;eip=0x000038; 	X(MOV(*(dw*)((&regs_x86)), 0x0C201));	// 79964 mov     word ptr regs_x86, 0C201h ;~ 282C:0038
cs=0x282c;eip=0x00003e; 	T(MOV(ax, offset(dseg,regs_x86)));	// 79965 mov     ax, offset regs_x86 ;~ 282C:003E
cs=0x282c;eip=0x000041; 	X(PUSH(ax));	// 79966 push    ax              ; union REGS * ;~ 282C:0041
cs=0x282c;eip=0x000042; 	X(PUSH(ax));	// 79967 push    ax              ; union REGS * ;~ 282C:0042
cs=0x282c;eip=0x000043; 	T(MOV(ax, 0x15));	// 79968 mov     ax, 15h         ; int 15,c201 = enable ps2 pointing device ;~ 282C:0043
cs=0x282c;eip=0x000046; 	X(PUSH(ax));	// 79969 push    ax              ; int ;~ 282C:0046
cs=0x282c;eip=0x000047; 	R(CALLF(_int86,0));	// 79970 call    _int86 ;~ 282C:0047
cs=0x282c;eip=0x00004c; 	T(ADD(sp, 6));	// 79971 add     sp, 6 ;~ 282C:004C
cs=0x282c;eip=0x00004f; 	X(MOV(*(dw*)((&regs_x86)), 0));	// 79972 mov     word ptr regs_x86, 0 ;~ 282C:004F
cs=0x282c;eip=0x000055; 	T(MOV(ax, 0x921A));	// 79973 mov     ax, 921Ah ;~ 282C:0055
cs=0x282c;eip=0x000058; 	X(PUSH(ax));	// 79974 push    ax              ; union REGS * ;~ 282C:0058
cs=0x282c;eip=0x000059; 	X(PUSH(ax));	// 79975 push    ax              ; union REGS * ;~ 282C:0059
cs=0x282c;eip=0x00005a; 	T(MOV(ax, 0x33));	// 79976 mov     ax, 33h         ; int 33,0 = mouse reset/get mouse installed ;~ 282C:005A
cs=0x282c;eip=0x00005d; 	X(PUSH(ax));	// 79977 push    ax              ; int ;~ 282C:005D
cs=0x282c;eip=0x00005e; 	R(CALLF(_int86,0));	// 79978 call    _int86 ;~ 282C:005E
cs=0x282c;eip=0x000063; 	T(ADD(sp, 6));	// 79979 add     sp, 6 ;~ 282C:0063
cs=0x282c;eip=0x000066; 	T(MOV(ax, *(dw*)((&regs_x86))));	// 79980 mov     ax, word ptr regs_x86 ;~ 282C:0066
cs=0x282c;eip=0x000069; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 79981 mov     [bp+var_2], ax ;~ 282C:0069
cs=0x282c;eip=0x00006c; 	T(MOV(ax, *(dw*)((&unk_4498c))));	// 79982 mov     ax, word ptr unk_4498C ;~ 282C:006C
cs=0x282c;eip=0x00006f; 	X(MOV(word_45d7c, ax));	// 79983 mov     word_45D7C, ax ;~ 282C:006F
cs=0x282c;eip=0x000072; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0));	// 79984 cmp     [bp+var_2], 0 ;~ 282C:0072
cs=0x282c;eip=0x000076; 	R(JZ(loc_36955));	// 79985 jz      short loc_36955 ;~ 282C:0076
cs=0x282c;eip=0x000078; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x140));	// 79986 cmp     [bp+arg_0], 140h ;~ 282C:0078
cs=0x282c;eip=0x00007d; 	R(JNZ(loc_36928));	// 79987 jnz     short loc_36928 ;~ 282C:007D
cs=0x282c;eip=0x00007f; 	X(MOV(mousehorscale, 1));	// 79988 mov     mousehorscale, 1 ;~ 282C:007F
cs=0x282c;eip=0x000085; 	R(JMP(loc_3692e));	// 79989 jmp     short loc_3692E ;~ 282C:0085
loc_36928:
	// 9953 
cs=0x282c;eip=0x000088; 	X(MOV(mousehorscale, 0));	// 79994 mov     mousehorscale, 0 ;~ 282C:0088
loc_3692e:
	// 9954 
cs=0x282c;eip=0x00008e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 79997 mov     ax, [bp+arg_2] ;~ 282C:008E
cs=0x282c;eip=0x000091; 	T(DEC(ax));	// 79998 dec     ax ;~ 282C:0091
cs=0x282c;eip=0x000092; 	X(PUSH(ax));	// 79999 push    ax ;~ 282C:0092
cs=0x282c;eip=0x000093; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 80000 mov     ax, [bp+arg_0] ;~ 282C:0093
cs=0x282c;eip=0x000096; 	T(DEC(ax));	// 80001 dec     ax ;~ 282C:0096
cs=0x282c;eip=0x000097; 	X(PUSH(ax));	// 80002 push    ax ;~ 282C:0097
cs=0x282c;eip=0x000098; 	T(SUB(ax, ax));	// 80003 sub     ax, ax ;~ 282C:0098
cs=0x282c;eip=0x00009a; 	X(PUSH(ax));	// 80004 push    ax ;~ 282C:009A
cs=0x282c;eip=0x00009b; 	X(PUSH(ax));	// 80005 push    ax ;~ 282C:009B
cs=0x282c;eip=0x00009c; 	X(PUSH(cs));	// 80006 push    cs ;~ 282C:009C
cs=0x282c;eip=0x00009d; 	R(CALL(mouse_set_minmax,0));	// 80007 call    near ptr mouse_set_minmax ;~ 282C:009D
cs=0x282c;eip=0x0000a0; 	T(ADD(sp, 8));	// 80008 add     sp, 8 ;~ 282C:00A0
cs=0x282c;eip=0x0000a3; 	T(MOV(ax, 0x10));	// 80009 mov     ax, 10h ;~ 282C:00A3
cs=0x282c;eip=0x0000a6; 	X(PUSH(ax));	// 80010 push    ax ;~ 282C:00A6
cs=0x282c;eip=0x0000a7; 	X(PUSH(ax));	// 80011 push    ax ;~ 282C:00A7
cs=0x282c;eip=0x0000a8; 	X(PUSH(cs));	// 80012 push    cs ;~ 282C:00A8
cs=0x282c;eip=0x0000a9; 	R(CALL(mouse_set_pixratio,0));	// 80013 call    near ptr mouse_set_pixratio ;~ 282C:00A9
cs=0x282c;eip=0x0000ac; 	T(ADD(sp, 4));	// 80014 add     sp, 4 ;~ 282C:00AC
cs=0x282c;eip=0x0000af; 	X(MOV(word_40318, 0x0FFFF));	// 80015 mov     word_40318, 0FFFFh ;~ 282C:00AF
loc_36955:
	// 9955 
cs=0x282c;eip=0x0000b5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 80018 mov     ax, [bp+var_2] ;~ 282C:00B5
cs=0x282c;eip=0x0000b8; 	T(MOV(sp, bp));	// 80019 mov     sp, bp ;~ 282C:00B8
cs=0x282c;eip=0x0000ba; 	X(POP(bp));	// 80020 pop     bp ;~ 282C:00BA
cs=0x282c;eip=0x0000bb; 	R(RETF(0));	// 80021 retf ;~ 282C:00BB
mouse_set_minmax:
	// 80029 
#undef arg_0
#define arg_0 6
	// 80032 arg_0           = word ptr  6 ;~ 282C:00BC
#undef arg_2
#define arg_2 8
	// 80033 arg_2           = word ptr  8 ;~ 282C:00BC
#undef arg_4
#define arg_4 0x0A
	// 80034 arg_4           = word ptr  0Ah ;~ 282C:00BC
#undef arg_6
#define arg_6 0x0C
	// 80035 arg_6           = word ptr  0Ch ;~ 282C:00BC
ret_282c_bc:
	// 9956 
cs=0x282c;eip=0x0000bc; 	X(PUSH(bp));	// 80037 push    bp ;~ 282C:00BC
cs=0x282c;eip=0x0000bd; 	T(MOV(bp, sp));	// 80038 mov     bp, sp ;~ 282C:00BD
cs=0x282c;eip=0x0000bf; 	X(MOV(*(dw*)((&regs_x86)), 7));	// 80039 mov     word ptr regs_x86, 7 ;~ 282C:00BF
cs=0x282c;eip=0x0000c5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 80040 mov     ax, [bp+arg_0] ;~ 282C:00C5
cs=0x282c;eip=0x0000c8; 	T(MOV(cl, *(db*)(((db*)&mousehorscale))));	// 80041 mov     cl, byte ptr mousehorscale ;~ 282C:00C8
cs=0x282c;eip=0x0000cc; 	T(SHL(ax, cl));	// 80042 shl     ax, cl ;~ 282C:00CC
cs=0x282c;eip=0x0000ce; 	X(MOV(*(dw*)((&unk_4498e)), ax));	// 80043 mov     word ptr unk_4498E, ax ;~ 282C:00CE
cs=0x282c;eip=0x0000d1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 80044 mov     ax, [bp+arg_4] ;~ 282C:00D1
cs=0x282c;eip=0x0000d4; 	T(SHL(ax, cl));	// 80045 shl     ax, cl ;~ 282C:00D4
cs=0x282c;eip=0x0000d6; 	X(MOV(*(dw*)((&unk_44990)), ax));	// 80046 mov     word ptr unk_44990, ax ;~ 282C:00D6
cs=0x282c;eip=0x0000d9; 	T(MOV(ax, offset(dseg,regs_x86)));	// 80047 mov     ax, offset regs_x86 ;~ 282C:00D9
cs=0x282c;eip=0x0000dc; 	X(PUSH(ax));	// 80048 push    ax              ; union REGS * ;~ 282C:00DC
cs=0x282c;eip=0x0000dd; 	X(PUSH(ax));	// 80049 push    ax              ; union REGS * ;~ 282C:00DD
cs=0x282c;eip=0x0000de; 	T(MOV(ax, 0x33));	// 80050 mov     ax, 33h         ; int 33,0 = mouse reset/get mouse installed ;~ 282C:00DE
cs=0x282c;eip=0x0000e1; 	X(PUSH(ax));	// 80051 push    ax              ; int ;~ 282C:00E1
cs=0x282c;eip=0x0000e2; 	R(CALLF(_int86,0));	// 80052 call    _int86 ;~ 282C:00E2
cs=0x282c;eip=0x0000e7; 	T(ADD(sp, 6));	// 80053 add     sp, 6 ;~ 282C:00E7
cs=0x282c;eip=0x0000ea; 	X(MOV(*(dw*)((&regs_x86)), 8));	// 80054 mov     word ptr regs_x86, 8 ;~ 282C:00EA
cs=0x282c;eip=0x0000f0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 80055 mov     ax, [bp+arg_2] ;~ 282C:00F0
cs=0x282c;eip=0x0000f3; 	X(MOV(*(dw*)((&unk_4498e)), ax));	// 80056 mov     word ptr unk_4498E, ax ;~ 282C:00F3
cs=0x282c;eip=0x0000f6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 80057 mov     ax, [bp+arg_6] ;~ 282C:00F6
cs=0x282c;eip=0x0000f9; 	X(MOV(*(dw*)((&unk_44990)), ax));	// 80058 mov     word ptr unk_44990, ax ;~ 282C:00F9
cs=0x282c;eip=0x0000fc; 	T(MOV(ax, offset(dseg,regs_x86)));	// 80059 mov     ax, offset regs_x86 ;~ 282C:00FC
cs=0x282c;eip=0x0000ff; 	X(PUSH(ax));	// 80060 push    ax              ; union REGS * ;~ 282C:00FF
cs=0x282c;eip=0x000100; 	X(PUSH(ax));	// 80061 push    ax              ; union REGS * ;~ 282C:0100
cs=0x282c;eip=0x000101; 	T(MOV(ax, 0x33));	// 80062 mov     ax, 33h         ; int 33, 8 = set mouse vert min/max ;~ 282C:0101
cs=0x282c;eip=0x000104; 	X(PUSH(ax));	// 80063 push    ax              ; int ;~ 282C:0104
cs=0x282c;eip=0x000105; 	R(CALLF(_int86,0));	// 80064 call    _int86 ;~ 282C:0105
cs=0x282c;eip=0x00010a; 	T(ADD(sp, 6));	// 80065 add     sp, 6 ;~ 282C:010A
cs=0x282c;eip=0x00010d; 	X(POP(bp));	// 80066 pop     bp ;~ 282C:010D
cs=0x282c;eip=0x00010e; 	R(RETF(0));	// 80067 retf ;~ 282C:010E
seg017_110_proc:
	// 80072 
cs=0x282c;eip=0x000110; 	X(MOV(*(dw*)((&regs_x86)), 3));	// 80072 mov     word ptr regs_x86, 3 ;~ 282C:0110
ret_282c_116:
	// 9957 
cs=0x282c;eip=0x000116; 	T(MOV(ax, offset(dseg,regs_x86)));	// 80073 mov     ax, offset regs_x86 ;~ 282C:0116
cs=0x282c;eip=0x000119; 	X(PUSH(ax));	// 80074 push    ax ;~ 282C:0119
cs=0x282c;eip=0x00011a; 	X(PUSH(ax));	// 80075 push    ax ;~ 282C:011A
cs=0x282c;eip=0x00011b; 	T(MOV(ax, 0x33));	// 80076 mov     ax, 33h         ; int 33,3 = get mouse pos/but status ;~ 282C:011B
cs=0x282c;eip=0x00011e; 	X(PUSH(ax));	// 80077 push    ax ;~ 282C:011E
cs=0x282c;eip=0x00011f; 	R(CALLF(_int86,0));	// 80078 call    _int86 ;~ 282C:011F
cs=0x282c;eip=0x000124; 	T(ADD(sp, 6));	// 80079 add     sp, 6 ;~ 282C:0124
cs=0x282c;eip=0x000127; 	T(MOV(ax, *(dw*)((&unk_4498c))));	// 80080 mov     ax, word ptr unk_4498C ;~ 282C:0127
cs=0x282c;eip=0x00012a; 	X(MOV(word_45d7c, ax));	// 80081 mov     word_45D7C, ax ;~ 282C:012A
cs=0x282c;eip=0x00012d; 	T(MOV(ax, *(dw*)((&unk_4498e))));	// 80082 mov     ax, word ptr unk_4498E ;~ 282C:012D
cs=0x282c;eip=0x000130; 	T(MOV(cl, *(db*)(((db*)&mousehorscale))));	// 80083 mov     cl, byte ptr mousehorscale ;~ 282C:0130
cs=0x282c;eip=0x000134; 	T(SHR(ax, cl));	// 80084 shr     ax, cl ;~ 282C:0134
cs=0x282c;eip=0x000136; 	X(MOV(word_44d3c, ax));	// 80085 mov     word_44D3C, ax ;~ 282C:0136
cs=0x282c;eip=0x000139; 	T(MOV(ax, *(dw*)((&unk_44990))));	// 80086 mov     ax, word ptr unk_44990 ;~ 282C:0139
cs=0x282c;eip=0x00013c; 	X(MOV(word_44d62, ax));	// 80087 mov     word_44D62, ax ;~ 282C:013C
cs=0x282c;eip=0x00013f; 	T(MOV(ax, word_45d7c));	// 80088 mov     ax, word_45D7C ;~ 282C:013F
cs=0x282c;eip=0x000142; 	R(RETF(0));	// 80089 retf ;~ 282C:0142
ret_282c_144:
	// 9958 
cs=0x282c;eip=0x000144; 	X(INC(showmouse));	// 80092 inc     showmouse ;~ 282C:0144
cs=0x282c;eip=0x000148; 	T(CMP(showmouse, 1));	// 80093 cmp     showmouse, 1 ;~ 282C:0148
cs=0x282c;eip=0x00014d; 	R(JL(locret_36a0c));	// 80094 jl      short locret_36A0C ;~ 282C:014D
cs=0x282c;eip=0x00014f; 	X(MOV(showmouse, 1));	// 80095 mov     showmouse, 1 ;~ 282C:014F
cs=0x282c;eip=0x000155; 	X(MOV(*(dw*)((&regs_x86)), 1));	// 80096 mov     word ptr regs_x86, 1 ;~ 282C:0155
cs=0x282c;eip=0x00015b; 	T(MOV(ax, offset(dseg,regs_x86)));	// 80097 mov     ax, offset regs_x86 ;~ 282C:015B
cs=0x282c;eip=0x00015e; 	X(PUSH(ax));	// 80098 push    ax ;~ 282C:015E
cs=0x282c;eip=0x00015f; 	X(PUSH(ax));	// 80099 push    ax ;~ 282C:015F
cs=0x282c;eip=0x000160; 	T(MOV(ax, 0x33));	// 80100 mov     ax, 33h         ; int 33,1 = show mouse cursor ;~ 282C:0160
cs=0x282c;eip=0x000163; 	X(PUSH(ax));	// 80101 push    ax ;~ 282C:0163
cs=0x282c;eip=0x000164; 	R(CALLF(_int86,0));	// 80102 call    _int86 ;~ 282C:0164
cs=0x282c;eip=0x000169; 	T(ADD(sp, 6));	// 80103 add     sp, 6 ;~ 282C:0169
locret_36a0c:
	// 9959 
cs=0x282c;eip=0x00016c; 	R(RETF(0));	// 80106 retf ;~ 282C:016C
ret_282c_16e:
	// 9960 
cs=0x282c;eip=0x00016e; 	X(DEC(showmouse));	// 80109 dec     showmouse ;~ 282C:016E
cs=0x282c;eip=0x000172; 	R(JNZ(locret_36a2b));	// 80110 jnz     short locret_36A2B ;~ 282C:0172
cs=0x282c;eip=0x000174; 	X(MOV(*(dw*)((&regs_x86)), 2));	// 80111 mov     word ptr regs_x86, 2 ;~ 282C:0174
cs=0x282c;eip=0x00017a; 	T(MOV(ax, offset(dseg,regs_x86)));	// 80112 mov     ax, offset regs_x86 ;~ 282C:017A
cs=0x282c;eip=0x00017d; 	X(PUSH(ax));	// 80113 push    ax ;~ 282C:017D
cs=0x282c;eip=0x00017e; 	X(PUSH(ax));	// 80114 push    ax ;~ 282C:017E
cs=0x282c;eip=0x00017f; 	T(MOV(ax, 0x33));	// 80115 mov     ax, 33h         ; int 33,2 = hide mouse cursor ;~ 282C:017F
cs=0x282c;eip=0x000182; 	X(PUSH(ax));	// 80116 push    ax ;~ 282C:0182
cs=0x282c;eip=0x000183; 	R(CALLF(_int86,0));	// 80117 call    _int86 ;~ 282C:0183
cs=0x282c;eip=0x000188; 	T(ADD(sp, 6));	// 80118 add     sp, 6 ;~ 282C:0188
locret_36a2b:
	// 9961 
cs=0x282c;eip=0x00018b; 	R(RETF(0));	// 80121 retf ;~ 282C:018B
mouse_set_position:
	// 80127 
#undef arg_0
#define arg_0 6
	// 80129 arg_0           = word ptr  6 ;~ 282C:018C
#undef arg_2
#define arg_2 8
	// 80130 arg_2           = word ptr  8 ;~ 282C:018C
ret_282c_18c:
	// 9962 
cs=0x282c;eip=0x00018c; 	X(PUSH(bp));	// 80132 push    bp ;~ 282C:018C
cs=0x282c;eip=0x00018d; 	T(MOV(bp, sp));	// 80133 mov     bp, sp ;~ 282C:018D
cs=0x282c;eip=0x00018f; 	X(MOV(*(dw*)((&regs_x86)), 4));	// 80134 mov     word ptr regs_x86, 4 ;~ 282C:018F
cs=0x282c;eip=0x000195; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 80135 mov     ax, [bp+arg_0] ;~ 282C:0195
cs=0x282c;eip=0x000198; 	X(MOV(word_44d3c, ax));	// 80136 mov     word_44D3C, ax ;~ 282C:0198
cs=0x282c;eip=0x00019b; 	T(MOV(cl, *(db*)(((db*)&mousehorscale))));	// 80137 mov     cl, byte ptr mousehorscale ;~ 282C:019B
cs=0x282c;eip=0x00019f; 	T(SHL(ax, cl));	// 80138 shl     ax, cl ;~ 282C:019F
cs=0x282c;eip=0x0001a1; 	X(MOV(*(dw*)((&unk_4498e)), ax));	// 80139 mov     word ptr unk_4498E, ax ;~ 282C:01A1
cs=0x282c;eip=0x0001a4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 80140 mov     ax, [bp+arg_2] ;~ 282C:01A4
cs=0x282c;eip=0x0001a7; 	X(MOV(*(dw*)((&unk_44990)), ax));	// 80141 mov     word ptr unk_44990, ax ;~ 282C:01A7
cs=0x282c;eip=0x0001aa; 	X(MOV(word_44d62, ax));	// 80142 mov     word_44D62, ax ;~ 282C:01AA
cs=0x282c;eip=0x0001ad; 	T(MOV(ax, 0x921A));	// 80143 mov     ax, 921Ah ;~ 282C:01AD
cs=0x282c;eip=0x0001b0; 	X(PUSH(ax));	// 80144 push    ax              ; union REGS * ;~ 282C:01B0
cs=0x282c;eip=0x0001b1; 	X(PUSH(ax));	// 80145 push    ax              ; union REGS * ;~ 282C:01B1
cs=0x282c;eip=0x0001b2; 	T(MOV(ax, 0x33));	// 80146 mov     ax, 33h         ; int 33, 4 = set mouse cursor ;~ 282C:01B2
cs=0x282c;eip=0x0001b5; 	X(PUSH(ax));	// 80147 push    ax              ; int ;~ 282C:01B5
cs=0x282c;eip=0x0001b6; 	R(CALLF(_int86,0));	// 80148 call    _int86 ;~ 282C:01B6
cs=0x282c;eip=0x0001bb; 	T(ADD(sp, 6));	// 80149 add     sp, 6 ;~ 282C:01BB
cs=0x282c;eip=0x0001be; 	X(POP(bp));	// 80150 pop     bp ;~ 282C:01BE
cs=0x282c;eip=0x0001bf; 	R(RETF(0));	// 80151 retf ;~ 282C:01BF
mouse_get_state:
	// 80159 
#undef arg_0
#define arg_0 6
	// 80162 arg_0           = word ptr  6 ;~ 282C:01C0
#undef arg_2
#define arg_2 8
	// 80163 arg_2           = word ptr  8 ;~ 282C:01C0
#undef arg_4
#define arg_4 0x0A
	// 80164 arg_4           = word ptr  0Ah ;~ 282C:01C0
ret_282c_1c0:
	// 9963 
cs=0x282c;eip=0x0001c0; 	X(PUSH(bp));	// 80166 push    bp ;~ 282C:01C0
cs=0x282c;eip=0x0001c1; 	T(MOV(bp, sp));	// 80167 mov     bp, sp ;~ 282C:01C1
cs=0x282c;eip=0x0001c3; 	X(MOV(*(dw*)((&regs_x86)), 3));	// 80168 mov     word ptr regs_x86, 3 ;~ 282C:01C3
cs=0x282c;eip=0x0001c9; 	T(MOV(ax, 0x921A));	// 80169 mov     ax, 921Ah ;~ 282C:01C9
cs=0x282c;eip=0x0001cc; 	X(PUSH(ax));	// 80170 push    ax              ; union REGS * ;~ 282C:01CC
cs=0x282c;eip=0x0001cd; 	X(PUSH(ax));	// 80171 push    ax              ; union REGS * ;~ 282C:01CD
cs=0x282c;eip=0x0001ce; 	T(MOV(ax, 0x33));	// 80172 mov     ax, 33h         ; int 33, 3 = get mouse position and button ;~ 282C:01CE
cs=0x282c;eip=0x0001d1; 	X(PUSH(ax));	// 80173 push    ax              ; int ;~ 282C:01D1
cs=0x282c;eip=0x0001d2; 	R(CALLF(_int86,0));	// 80174 call    _int86 ;~ 282C:01D2
cs=0x282c;eip=0x0001d7; 	T(ADD(sp, 6));	// 80175 add     sp, 6 ;~ 282C:01D7
cs=0x282c;eip=0x0001da; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 80176 mov     bx, [bp+arg_0] ;~ 282C:01DA
cs=0x282c;eip=0x0001dd; 	T(MOV(ax, *(dw*)((&unk_4498c))));	// 80177 mov     ax, word ptr unk_4498C ;~ 282C:01DD
cs=0x282c;eip=0x0001e0; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 80178 mov     [bx], ax ;~ 282C:01E0
cs=0x282c;eip=0x0001e2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 80179 mov     bx, [bp+arg_2] ;~ 282C:01E2
cs=0x282c;eip=0x0001e5; 	T(MOV(ax, *(dw*)((&unk_4498e))));	// 80180 mov     ax, word ptr unk_4498E ;~ 282C:01E5
cs=0x282c;eip=0x0001e8; 	T(MOV(cl, *(db*)(((db*)&mousehorscale))));	// 80181 mov     cl, byte ptr mousehorscale ;~ 282C:01E8
cs=0x282c;eip=0x0001ec; 	T(SHR(ax, cl));	// 80182 shr     ax, cl ;~ 282C:01EC
cs=0x282c;eip=0x0001ee; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 80183 mov     [bx], ax ;~ 282C:01EE
cs=0x282c;eip=0x0001f0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 80184 mov     bx, [bp+arg_4] ;~ 282C:01F0
cs=0x282c;eip=0x0001f3; 	T(MOV(ax, *(dw*)((&unk_44990))));	// 80185 mov     ax, word ptr unk_44990 ;~ 282C:01F3
cs=0x282c;eip=0x0001f6; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 80186 mov     [bx], ax ;~ 282C:01F6
cs=0x282c;eip=0x0001f8; 	X(POP(bp));	// 80187 pop     bp ;~ 282C:01F8
cs=0x282c;eip=0x0001f9; 	R(RETF(0));	// 80188 retf ;~ 282C:01F9
nopsub_36a9a:
	// 80196 
#undef arg_0
#define arg_0 6
	// 80198 arg_0           = word ptr  6 ;~ 282C:01FA
#undef arg_2
#define arg_2 8
	// 80199 arg_2           = word ptr  8 ;~ 282C:01FA
ret_282c_1fa:
	// 9964 
cs=0x282c;eip=0x0001fa; 	X(PUSH(bp));	// 80201 push    bp ;~ 282C:01FA
cs=0x282c;eip=0x0001fb; 	T(MOV(bp, sp));	// 80202 mov     bp, sp ;~ 282C:01FB
cs=0x282c;eip=0x0001fd; 	X(MOV(*(dw*)((&regs_x86)), 7));	// 80203 mov     word ptr regs_x86, 7 ;~ 282C:01FD
cs=0x282c;eip=0x000203; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 80204 mov     ax, [bp+arg_0] ;~ 282C:0203
cs=0x282c;eip=0x000206; 	T(MOV(cl, *(db*)(((db*)&mousehorscale))));	// 80205 mov     cl, byte ptr mousehorscale ;~ 282C:0206
cs=0x282c;eip=0x00020a; 	T(SAR(ax, cl));	// 80206 sar     ax, cl ;~ 282C:020A
cs=0x282c;eip=0x00020c; 	X(MOV(*(dw*)((&unk_4498e)), ax));	// 80207 mov     word ptr unk_4498E, ax ;~ 282C:020C
cs=0x282c;eip=0x00020f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 80208 mov     ax, [bp+arg_2] ;~ 282C:020F
cs=0x282c;eip=0x000212; 	T(SAR(ax, cl));	// 80209 sar     ax, cl ;~ 282C:0212
cs=0x282c;eip=0x000214; 	X(MOV(*(dw*)((&unk_44990)), ax));	// 80210 mov     word ptr unk_44990, ax ;~ 282C:0214
cs=0x282c;eip=0x000217; 	T(MOV(ax, 0x921A));	// 80211 mov     ax, 921Ah ;~ 282C:0217
cs=0x282c;eip=0x00021a; 	X(PUSH(ax));	// 80212 push    ax              ; union REGS * ;~ 282C:021A
cs=0x282c;eip=0x00021b; 	X(PUSH(ax));	// 80213 push    ax              ; union REGS * ;~ 282C:021B
cs=0x282c;eip=0x00021c; 	T(MOV(ax, 0x33));	// 80214 mov     ax, 33h ; '3' ;~ 282C:021C
cs=0x282c;eip=0x00021f; 	X(PUSH(ax));	// 80215 push    ax              ; int ;~ 282C:021F
cs=0x282c;eip=0x000220; 	R(CALLF(_int86,0));	// 80216 call    _int86 ;~ 282C:0220
cs=0x282c;eip=0x000225; 	T(ADD(sp, 6));	// 80217 add     sp, 6 ;~ 282C:0225
cs=0x282c;eip=0x000228; 	X(POP(bp));	// 80218 pop     bp ;~ 282C:0228
cs=0x282c;eip=0x000229; 	R(RETF(0));	// 80219 retf ;~ 282C:0229
nopsub_36aca:
	// 80227 
#undef arg_0
#define arg_0 6
	// 80229 arg_0           = word ptr  6 ;~ 282C:022A
#undef arg_2
#define arg_2 8
	// 80230 arg_2           = word ptr  8 ;~ 282C:022A
ret_282c_22a:
	// 9965 
cs=0x282c;eip=0x00022a; 	X(PUSH(bp));	// 80232 push    bp ;~ 282C:022A
cs=0x282c;eip=0x00022b; 	T(MOV(bp, sp));	// 80233 mov     bp, sp ;~ 282C:022B
cs=0x282c;eip=0x00022d; 	X(MOV(*(dw*)((&regs_x86)), 8));	// 80234 mov     word ptr regs_x86, 8 ;~ 282C:022D
cs=0x282c;eip=0x000233; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 80235 mov     ax, [bp+arg_0] ;~ 282C:0233
cs=0x282c;eip=0x000236; 	X(MOV(*(dw*)((&unk_4498e)), ax));	// 80236 mov     word ptr unk_4498E, ax ;~ 282C:0236
cs=0x282c;eip=0x000239; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 80237 mov     ax, [bp+arg_2] ;~ 282C:0239
cs=0x282c;eip=0x00023c; 	X(MOV(*(dw*)((&unk_44990)), ax));	// 80238 mov     word ptr unk_44990, ax ;~ 282C:023C
cs=0x282c;eip=0x00023f; 	T(MOV(ax, 0x921A));	// 80239 mov     ax, 921Ah ;~ 282C:023F
cs=0x282c;eip=0x000242; 	X(PUSH(ax));	// 80240 push    ax              ; union REGS * ;~ 282C:0242
cs=0x282c;eip=0x000243; 	X(PUSH(ax));	// 80241 push    ax              ; union REGS * ;~ 282C:0243
cs=0x282c;eip=0x000244; 	T(MOV(ax, 0x33));	// 80242 mov     ax, 33h ; '3' ;~ 282C:0244
cs=0x282c;eip=0x000247; 	X(PUSH(ax));	// 80243 push    ax              ; int ;~ 282C:0247
cs=0x282c;eip=0x000248; 	R(CALLF(_int86,0));	// 80244 call    _int86 ;~ 282C:0248
cs=0x282c;eip=0x00024d; 	T(ADD(sp, 6));	// 80245 add     sp, 6 ;~ 282C:024D
cs=0x282c;eip=0x000250; 	X(POP(bp));	// 80246 pop     bp ;~ 282C:0250
cs=0x282c;eip=0x000251; 	R(RETF(0));	// 80247 retf ;~ 282C:0251

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return true;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_36928: 	goto loc_36928;
        case m2c::kloc_3692e: 	goto loc_3692e;
        case m2c::kloc_36955: 	goto loc_36955;
        case m2c::klocret_36a0c: 	goto locret_36a0c;
        case m2c::klocret_36a2b: 	goto locret_36a2b;
        case m2c::kmouse_get_state: 	goto mouse_get_state;
        case m2c::kmouse_init: 	goto mouse_init;
        case m2c::kret_282c_116: 	goto ret_282c_116;
        case m2c::kret_282c_144: 	goto ret_282c_144;
        case m2c::kret_282c_16e: 	goto ret_282c_16e;
        case m2c::kret_282c_18c: 	goto ret_282c_18c;
        case m2c::kret_282c_1fa: 	goto ret_282c_1fa;
        case m2c::kret_282c_22a: 	goto ret_282c_22a;
        case m2c::kret_282c_a: 	goto ret_282c_a;
        case m2c::kret_282c_bc: 	goto ret_282c_bc;
        case m2c::kseg017_110_proc: 	goto seg017_110_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}


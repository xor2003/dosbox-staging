/* THIS IS GENERATED FILE */

        
#include "f.exe.h"

                

 bool seg004_1a3_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg004_1a3_proc:
    _begin:
cs=0x75b;eip=0x0001a3; 	X(PUSH(bp));	// 17453                  push    bp ;~ 075B:01A3
cs=0x75b;eip=0x0001a4; 	T(bp = sp;);	// 17454                  mov     bp, sp ;~ 075B:01A4
cs=0x75b;eip=0x0001a6; 	X(PUSH(di));	// 17455                  push    di ;~ 075B:01A6
cs=0x75b;eip=0x0001a7; 	X(PUSH(ds));	// 17456                  push    ds ;~ 075B:01A7
cs=0x75b;eip=0x0001a8; 	T(ax = seg_offset(seg003););	// 17457                  mov     ax, seg seg003 ;~ 075B:01A8
cs=0x75b;eip=0x0001ab; 	T(ds = ax;);	// 17458                  mov     ds, ax ;~ 075B:01AB
cs=0x75b;eip=0x0001ad; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 17460                  mov     di, [bp+8] ;~ 075B:01AD
cs=0x75b;eip=0x0001b0; 	T(SHL(di, 1));	// 17461                  shl     di, 1 ;~ 075B:01B0
cs=0x75b;eip=0x0001b2; 	T(MOV(bx, *(dw*)(raddr(ds,di+0x0E2))));	// 17462                  mov     bx, [di+0E2h] ;~ 075B:01B2
cs=0x75b;eip=0x0001b6; 	T(MOV(di, *(dw*)(raddr(ss,bp+6))));	// 17463                  mov     di, [bp+6] ;~ 075B:01B6
cs=0x75b;eip=0x0001b9; 	T(CMP(di, 0x80));	// 17464                  cmp     di, 80h ;~ 075B:01B9
cs=0x75b;eip=0x0001bd; 	J(JC(loc_15d55));	// 17465                  jb      short loc_15D55 ;~ 075B:01BD
cs=0x75b;eip=0x0001bf; 	T(ax = 0;);	// 17466                  mov     ax, 0 ;~ 075B:01BF
cs=0x75b;eip=0x0001c2; 	J(JMP(loc_15d59));	// 17467                  jmp     short loc_15D59 ;~ 075B:01C2
loc_15d55:
	// 4629 
cs=0x75b;eip=0x0001c5; 	T(MOV(al, *(raddr(ds,bx+di))));	// 17473                  mov     al, [bx+di] ;~ 075B:01C5
cs=0x75b;eip=0x0001c7; 	T(SUB(ah, ah));	// 17474                  sub     ah, ah ;~ 075B:01C7
loc_15d59:
	// 4630 
cs=0x75b;eip=0x0001c9; 	X(POP(ds));	// 17477                  pop     ds ;~ 075B:01C9
cs=0x75b;eip=0x0001ca; 	X(POP(di));	// 17479                  pop     di ;~ 075B:01CA
cs=0x75b;eip=0x0001cb; 	T(sp = bp;);	// 17480                  mov     sp, bp ;~ 075B:01CB
cs=0x75b;eip=0x0001cd; 	X(POP(bp));	// 17481                  pop     bp ;~ 075B:01CD
cs=0x75b;eip=0x0001ce; 	J(RETF(0));	// 17482                  retf ;~ 075B:01CE
ret_75b_1cf:
	// 4631 
cs=0x75b;eip=0x0001cf; 	J(RETF(0));	// 17484                  retf ;~ 075B:01CF
ret_75b_1d0:
	// 4632 
cs=0x75b;eip=0x0001d0; 	J(RETF(0));	// 17486                  retf ;~ 075B:01D0
ret_75b_1d1:
	// 4633 
cs=0x75b;eip=0x0001d1; 	J(RETF(0));	// 17489                  retf ;~ 075B:01D1
ret_75b_1e0:
	// 4634 
cs=0x75b;eip=0x0001e0; 	T(ax = word_15d62;);	// 17502                  mov     ax, cs:word_15D62 ;~ 075B:01E0
cs=0x75b;eip=0x0001e4; 	J(RETF(0));	// 17503                  retf ;~ 075B:01E4
ret_75b_1e5:
	// 4635 
cs=0x75b;eip=0x0001e5; 	J(RETF(0));	// 17505                  retf ;~ 075B:01E5
ret_75b_1e6:
	// 4636 
cs=0x75b;eip=0x0001e6; 	T(ax = *(dw*)(&_unk_15d64););	// 17507                  mov     ax, word ptr cs:_unk_15D64 ;~ 075B:01E6
cs=0x75b;eip=0x0001ea; 	J(RETF(0));	// 17508                  retf ;~ 075B:01EA
ret_75b_1eb:
	// 4637 
cs=0x75b;eip=0x0001eb; 	T(ax = word_15d66;);	// 17510                  mov     ax, cs:word_15D66 ;~ 075B:01EB
cs=0x75b;eip=0x0001ef; 	J(RETF(0));	// 17511                  retf ;~ 075B:01EF
ret_75b_1f0:
	// 4638 
cs=0x75b;eip=0x0001f0; 	T(ax = word_15d68;);	// 17513                  mov     ax, cs:word_15D68 ;~ 075B:01F0
cs=0x75b;eip=0x0001f4; 	J(RETF(0));	// 17514                  retf ;~ 075B:01F4
ret_75b_1f5:
	// 4639 
cs=0x75b;eip=0x0001f5; 	T(ax = *(dw*)(&byte_15d6a););	// 17517                  mov     ax, word ptr cs:byte_15D6A ;~ 075B:01F5
cs=0x75b;eip=0x0001f9; 	J(RETF(0));	// 17518                  retf ;~ 075B:01F9
ret_75b_1fa:
	// 4640 
cs=0x75b;eip=0x0001fa; 	T(ax = word_15d6c;);	// 17520                  mov     ax, cs:word_15D6C ;~ 075B:01FA
cs=0x75b;eip=0x0001fe; 	J(RETF(0));	// 17521                  retf ;~ 075B:01FE
ret_75b_1ff:
	// 4641 
cs=0x75b;eip=0x0001ff; 	T(ax = word_15d6e;);	// 17523                  mov     ax, cs:word_15D6E ;~ 075B:01FF
cs=0x75b;eip=0x000203; 	J(RETF(0));	// 17524                  retf ;~ 075B:0203
ret_75b_204:
	// 4642 
cs=0x75b;eip=0x000204; 	T(ah = 0x48;);	// 17526                  mov     ah, 48h ; 'H' ;~ 075B:0204
cs=0x75b;eip=0x000206; 	T(bx = 0x0FFFF;);	// 17527                  mov     bx, 0FFFFh ;~ 075B:0206
cs=0x75b;eip=0x000209; 	S(_INT(0x21));	// 17528                  int     21h             ; DOS - 2+ - ALLOCATE MEMORY ;~ 075B:0209
cs=0x75b;eip=0x00020b; 	T(CMP(ax, 8));	// 17530                  cmp     ax, 8 ;~ 075B:020B
cs=0x75b;eip=0x00020e; 	J(JNZ(loc_15da3));	// 17531                  jnz     short loc_15DA3 ;~ 075B:020E
cs=0x75b;eip=0x000210; 	T(ax = bx;);	// 17532                  mov     ax, bx ;~ 075B:0210
cs=0x75b;eip=0x000212; 	J(RETF(0));	// 17533                  retf ;~ 075B:0212
loc_15da3:
	// 4643 
cs=0x75b;eip=0x000213; 	T(XOR(ax, ax));	// 17537                  xor     ax, ax ;~ 075B:0213
cs=0x75b;eip=0x000215; 	J(RETF(0));	// 17538                  retf ;~ 075B:0215
ret_75b_216:
	// 4644 
cs=0x75b;eip=0x000216; 	T(ax = 0x13;);	// 17540                  mov     ax, 13h ;~ 075B:0216
cs=0x75b;eip=0x000219; 	S(_INT(0x10));	// 17541                  int     10h             ; - VIDEO - SET VIDEO MODE ;~ 075B:0219
cs=0x75b;eip=0x00021b; 	T(ah = 0x0F;);	// 17543                  mov     ah, 0Fh ;~ 075B:021B
cs=0x75b;eip=0x00021d; 	S(_INT(0x10));	// 17544                  int     10h             ; - VIDEO - GET CURRENT VIDEO MODE ;~ 075B:021D
cs=0x75b;eip=0x00021f; 	T(CMP(al, 0x13));	// 17548                  cmp     al, 13h ;~ 075B:021F
cs=0x75b;eip=0x000221; 	J(JNZ(loc_15db4));	// 17549                  jnz     short loc_15DB4 ;~ 075B:0221
cs=0x75b;eip=0x000223; 	J(RETF(0));	// 17550                  retf ;~ 075B:0223
loc_15db4:
	// 4645 
cs=0x75b;eip=0x000224; 	T(dx = 0x1B48;);	// 17554                  mov     dx, 1B48h ;~ 075B:0224
cs=0x75b;eip=0x000227; 	J(return _group7(m2c::kloc_15e13, _state););	// 17555                  jmp     short loc_15E13 ;~ 075B:0227
ret_75b_22a:
	// 4646 
cs=0x75b;eip=0x00022a; 	T(dx = 0x3DA;);	// 17559                  mov     dx, 3DAh ;~ 075B:022A
loc_15dbd:
	// 4647 
cs=0x75b;eip=0x00022d; 	S(IN(al, dx));	// 17562                  in      al, dx          ; Video status bits: ;~ 075B:022D
cs=0x75b;eip=0x00022e; 	T(TEST(al, 8));	// 17567                  test    al, 8 ;~ 075B:022E
cs=0x75b;eip=0x000230; 	J(JZ(loc_15dbd));	// 17568                  jz      short loc_15DBD ;~ 075B:0230
cs=0x75b;eip=0x000232; 	T(dx = 0x3D8;);	// 17569                  mov     dx, 3D8h ;~ 075B:0232
cs=0x75b;eip=0x000235; 	T(al = 2;);	// 17570                  mov     al, 2 ;~ 075B:0235
cs=0x75b;eip=0x000237; 	S(OUT(dx, al));	// 17571                  out     dx, al ;~ 075B:0237
cs=0x75b;eip=0x000238; 	T(dx = 0x3C4;);	// 17572                  mov     dx, 3C4h ;~ 075B:0238
cs=0x75b;eip=0x00023b; 	T(al = 1;);	// 17573                  mov     al, 1 ;~ 075B:023B
cs=0x75b;eip=0x00023d; 	S(OUT(dx, al));	// 17574                  out     dx, al          ; EGA: sequencer address reg ;~ 075B:023D
cs=0x75b;eip=0x00023e; 	T(INC(dx));	// 17580                  inc     dx ;~ 075B:023E
cs=0x75b;eip=0x00023f; 	S(IN(al, dx));	// 17581                  in      al, dx          ; EGA port: sequencer data register ;~ 075B:023F
cs=0x75b;eip=0x000240; 	T(OR(al, 0x20));	// 17582                  or      al, 20h ;~ 075B:0240
cs=0x75b;eip=0x000242; 	S(OUT(dx, al));	// 17583                  out     dx, al          ; EGA port: sequencer data register ;~ 075B:0242
cs=0x75b;eip=0x000243; 	J(RETF(0));	// 17584                  retf ;~ 075B:0243

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_15d55: 	goto loc_15d55;
        case m2c::kloc_15d59: 	goto loc_15d59;
        case m2c::kloc_15da3: 	goto loc_15da3;
        case m2c::kloc_15db4: 	goto loc_15db4;
        case m2c::kloc_15dbd: 	goto loc_15dbd;
        case m2c::kret_75b_1cf: 	goto ret_75b_1cf;
        case m2c::kret_75b_1d0: 	goto ret_75b_1d0;
        case m2c::kret_75b_1d1: 	goto ret_75b_1d1;
        case m2c::kret_75b_1e0: 	goto ret_75b_1e0;
        case m2c::kret_75b_1e5: 	goto ret_75b_1e5;
        case m2c::kret_75b_1e6: 	goto ret_75b_1e6;
        case m2c::kret_75b_1eb: 	goto ret_75b_1eb;
        case m2c::kret_75b_1f0: 	goto ret_75b_1f0;
        case m2c::kret_75b_1f5: 	goto ret_75b_1f5;
        case m2c::kret_75b_1fa: 	goto ret_75b_1fa;
        case m2c::kret_75b_1ff: 	goto ret_75b_1ff;
        case m2c::kret_75b_204: 	goto ret_75b_204;
        case m2c::kret_75b_216: 	goto ret_75b_216;
        case m2c::kret_75b_22a: 	goto ret_75b_22a;
        case m2c::kseg004_1a3_proc: 	goto seg004_1a3_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_15dd4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_15dd4:
    _begin:
cs=0x75b;eip=0x000244; 	T(dx = 0x3DA;);	// 17590                  mov     dx, 3DAh ;~ 075B:0244
loc_15dd7:
	// 4648 
cs=0x75b;eip=0x000247; 	S(IN(al, dx));	// 17593                  in      al, dx          ; Video status bits: ;~ 075B:0247
cs=0x75b;eip=0x000248; 	T(TEST(al, 8));	// 17598                  test    al, 8 ;~ 075B:0248
cs=0x75b;eip=0x00024a; 	J(JZ(loc_15dd7));	// 17599                  jz      short loc_15DD7 ;~ 075B:024A
cs=0x75b;eip=0x00024c; 	T(dx = 0x3D8;);	// 17600                  mov     dx, 3D8h ;~ 075B:024C
cs=0x75b;eip=0x00024f; 	T(al = 0x0A;);	// 17601                  mov     al, 0Ah ;~ 075B:024F
cs=0x75b;eip=0x000251; 	S(OUT(dx, al));	// 17602                  out     dx, al ;~ 075B:0251
cs=0x75b;eip=0x000252; 	T(dx = 0x3C4;);	// 17603                  mov     dx, 3C4h ;~ 075B:0252
cs=0x75b;eip=0x000255; 	T(al = 1;);	// 17604                  mov     al, 1 ;~ 075B:0255
cs=0x75b;eip=0x000257; 	S(OUT(dx, al));	// 17605                  out     dx, al          ; EGA: sequencer address reg ;~ 075B:0257
cs=0x75b;eip=0x000258; 	T(INC(dx));	// 17611                  inc     dx ;~ 075B:0258
cs=0x75b;eip=0x000259; 	S(IN(al, dx));	// 17612                  in      al, dx          ; EGA port: sequencer data register ;~ 075B:0259
cs=0x75b;eip=0x00025a; 	T(AND(al, 0x0DF));	// 17613                  and     al, 0DFh ;~ 075B:025A
cs=0x75b;eip=0x00025c; 	S(OUT(dx, al));	// 17614                  out     dx, al          ; EGA port: sequencer data register ;~ 075B:025C
cs=0x75b;eip=0x00025d; 	J(RETF(0));	// 17615                  retf ;~ 075B:025D

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_15dd7: 	goto loc_15dd7;
        case m2c::ksub_15dd4: 	goto sub_15dd4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group7:
    _begin:
sub_15dee:
	// 17623 
cs=0x75b;eip=0x00025e; 	T(bx = sp;);	// 17624                  mov     bx, sp ;~ 075B:025E
cs=0x75b;eip=0x000260; 	T(CMP(*(dw*)(raddr(ss,bx+4)), 0));	// 17625                  cmp     word ptr ss:[bx+4], 0 ;~ 075B:0260
cs=0x75b;eip=0x000265; 	J(JNZ(loc_15dfc));	// 17626                  jnz     short loc_15DFC ;~ 075B:0265
cs=0x75b;eip=0x000267; 	T(ax = word_16211;);	// 17627                  mov     ax, cs:word_16211 ;~ 075B:0267
cs=0x75b;eip=0x00026b; 	J(RETF(0));	// 17628                  retf ;~ 075B:026B
loc_15dfc:
	// 4649 
cs=0x75b;eip=0x00026c; 	T(ah = 0x48;);	// 17632                  mov     ah, 48h ; 'H' ;~ 075B:026C
cs=0x75b;eip=0x00026e; 	T(bx = *(dw*)(&_unk_15d64););	// 17633                  mov     bx, word ptr cs:_unk_15D64 ;~ 075B:026E
cs=0x75b;eip=0x000273; 	T(SHR(bx, 1));	// 17634                  shr     bx, 1 ;~ 075B:0273
cs=0x75b;eip=0x000275; 	T(SHR(bx, 1));	// 17635                  shr     bx, 1 ;~ 075B:0275
cs=0x75b;eip=0x000277; 	T(SHR(bx, 1));	// 17636                  shr     bx, 1 ;~ 075B:0277
cs=0x75b;eip=0x000279; 	T(SHR(bx, 1));	// 17637                  shr     bx, 1 ;~ 075B:0279
cs=0x75b;eip=0x00027b; 	S(_INT(0x21));	// 17638                  int     21h             ; DOS - 2+ - ALLOCATE MEMORY ;~ 075B:027B
cs=0x75b;eip=0x00027d; 	J(JC(loc_15e10));	// 17640                  jb      short loc_15E10 ;~ 075B:027D
cs=0x75b;eip=0x00027f; 	J(RETF(0));	// 17641                  retf ;~ 075B:027F
loc_15e10:
	// 4650 
cs=0x75b;eip=0x000280; 	T(dx = 0x1B22;);	// 17645                  mov     dx, 1B22h ;~ 075B:0280
loc_15e13:
	// 4651 
cs=0x75b;eip=0x000283; 	T(ax = 3;);	// 17648                  mov     ax, 3 ;~ 075B:0283
cs=0x75b;eip=0x000286; 	S(_INT(0x10));	// 17649                  int     10h             ; - VIDEO - SET VIDEO MODE ;~ 075B:0286
cs=0x75b;eip=0x000288; 	T(ax = seg_offset(seg003););	// 17651                  mov     ax, seg seg003 ;~ 075B:0288
cs=0x75b;eip=0x00028b; 	T(ds = ax;);	// 17652                  mov     ds, ax ;~ 075B:028B
cs=0x75b;eip=0x00028d; 	T(ah = 9;);	// 17654                  mov     ah, 9 ;~ 075B:028D
cs=0x75b;eip=0x00028f; 	S(_INT(0x21));	// 17655                  int     21h             ; DOS - PRINT STRING ;~ 075B:028F
cs=0x75b;eip=0x000291; 	T(ax = 0x4C00;);	// 17657                  mov     ax, 4C00h ;~ 075B:0291
cs=0x75b;eip=0x000294; 	S(_INT(0x21));	// 17658                  int     21h             ; DOS - 2+ - QUIT WITH EXIT CODE (EXIT) ;~ 075B:0294
seg004_296_proc:
	// 17663 
cs=0x75b;eip=0x000296; 	T(bx = sp;);	// 17663                  mov     bx, sp ;~ 075B:0296
cs=0x75b;eip=0x000298; 	T(MOV(bx, *(dw*)(raddr(ss,bx+4))));	// 17664                  mov     bx, ss:[bx+4] ;~ 075B:0298
cs=0x75b;eip=0x00029c; 	X(PUSH(es));	// 17665                  push    es ;~ 075B:029C
cs=0x75b;eip=0x00029d; 	T(ax = seg_offset(seg003););	// 17666                  mov     ax, seg seg003 ;~ 075B:029D
cs=0x75b;eip=0x0002a0; 	T(es = ax;);	// 17667                  mov     es, ax ;~ 075B:02A0
cs=0x75b;eip=0x0002a2; 	T(SHL(bx, 1));	// 17669                  shl     bx, 1 ;~ 075B:02A2
cs=0x75b;eip=0x0002a4; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1B7B))));	// 17670                  mov     dx, es:[bx+1B7Bh] ;~ 075B:02A4
cs=0x75b;eip=0x0002a9; 	T(ax = 0x1012;);	// 17671                  mov     ax, 1012h ;~ 075B:02A9
cs=0x75b;eip=0x0002ac; 	T(bx = 0;);	// 17672                  mov     bx, 0 ;~ 075B:02AC
cs=0x75b;eip=0x0002af; 	T(cx = 0x10;);	// 17673                  mov     cx, 10h ;~ 075B:02AF
cs=0x75b;eip=0x0002b2; 	S(_INT(0x10));	// 17674                  int     10h             ; - VIDEO - SET BLOCK OF DAC REGISTERS (EGA, VGA/MCGA) ;~ 075B:02B2
cs=0x75b;eip=0x0002b4; 	X(POP(es));	// 17678                  pop     es ;~ 075B:02B4
cs=0x75b;eip=0x0002b5; 	J(CALLF(sub_15dd4,0));	// 17680                  call    sub_15DD4 ;~ 075B:02B5
cs=0x75b;eip=0x0002ba; 	J(RETF(0));	// 17681                  retf ;~ 075B:02BA
ret_75b_2bb:
	// 4652 
cs=0x75b;eip=0x0002bb; 	T(bx = sp;);	// 17683                  mov     bx, sp ;~ 075B:02BB
cs=0x75b;eip=0x0002bd; 	T(MOV(ah, *(raddr(ss,bx+4))));	// 17684                  mov     ah, ss:[bx+4] ;~ 075B:02BD
sub_15e51:
	// 17689 
cs=0x75b;eip=0x0002c1; 	X(PUSH(ds));	// 17691                  push    ds ;~ 075B:02C1
cs=0x75b;eip=0x0002c2; 	T(dx = seg_offset(seg003););	// 17692                  mov     dx, seg seg003 ;~ 075B:02C2
cs=0x75b;eip=0x0002c5; 	T(ds = dx;);	// 17693                  mov     ds, dx ;~ 075B:02C5
cs=0x75b;eip=0x0002c7; 	X(byte_15a0a = ah;);	// 17695                  mov     byte_15A0A, ah ;~ 075B:02C7
cs=0x75b;eip=0x0002cb; 	X(POP(ds));	// 17696                  pop     ds ;~ 075B:02CB
cs=0x75b;eip=0x0002cc; 	J(RETF(0));	// 17698                  retf ;~ 075B:02CC

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_15dfc: 	goto loc_15dfc;
        case m2c::kloc_15e10: 	goto loc_15e10;
        case m2c::kloc_15e13: 	goto loc_15e13;
        case m2c::kret_75b_2bb: 	goto ret_75b_2bb;
        case m2c::kseg004_296_proc: 	goto seg004_296_proc;
        case m2c::ksub_15dee: 	goto sub_15dee;
        case m2c::ksub_15e51: 	goto sub_15e51;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group8:
    _begin:
seg004_2cd_proc:
	// 17703 
cs=0x75b;eip=0x0002cd; 	J(RETF(0));	// 17703                  retf ;~ 075B:02CD
ret_75b_2ce:
	// 4653 
cs=0x75b;eip=0x0002ce; 	X(PUSH(ds));	// 17705                  push    ds ;~ 075B:02CE
cs=0x75b;eip=0x0002cf; 	X(PUSH(es));	// 17706                  push    es ;~ 075B:02CF
cs=0x75b;eip=0x0002d0; 	T(ax = seg_offset(seg003););	// 17707                  mov     ax, seg seg003 ;~ 075B:02D0
cs=0x75b;eip=0x0002d3; 	T(ds = ax;);	// 17708                  mov     ds, ax ;~ 075B:02D3
cs=0x75b;eip=0x0002d5; 	T(es = word_15d2e;);	// 17710                  mov     es, cs:word_15D2E ;~ 075B:02D5
loc_15e6a:
	// 4654 
cs=0x75b;eip=0x0002da; 	J(CALL(sub_15e71,0));	// 17714                  call    sub_15E71 ;~ 075B:02DA
cs=0x75b;eip=0x0002dd; 	X(STOSB);	// 17715                  stosb ;~ 075B:02DD
cs=0x75b;eip=0x0002de; 	X(POP(es));	// 17716                  pop     es ;~ 075B:02DE
cs=0x75b;eip=0x0002df; 	X(POP(ds));	// 17718                  pop     ds ;~ 075B:02DF
cs=0x75b;eip=0x0002e0; 	J(RETF(0));	// 17720                  retf ;~ 075B:02E0
seg004_2f9_proc:
	// 17739 
cs=0x75b;eip=0x0002f9; 	X(PUSH(ds));	// 17739                  push    ds ;~ 075B:02F9
cs=0x75b;eip=0x0002fa; 	X(PUSH(es));	// 17740                  push    es ;~ 075B:02FA
cs=0x75b;eip=0x0002fb; 	T(di = seg_offset(seg003););	// 17741                  mov     di, seg seg003 ;~ 075B:02FB
cs=0x75b;eip=0x0002fe; 	T(ds = di;);	// 17742                  mov     ds, di ;~ 075B:02FE
cs=0x75b;eip=0x000300; 	T(es = word_15d2e;);	// 17744                  mov     es, cs:word_15D2E ;~ 075B:0300
cs=0x75b;eip=0x000305; 	T(CMP(ax, cx));	// 17746                  cmp     ax, cx ;~ 075B:0305
cs=0x75b;eip=0x000307; 	J(JBE(loc_15e9c));	// 17747                  jbe     short loc_15E9C ;~ 075B:0307
cs=0x75b;eip=0x000309; 	T(XCHG(ax, cx));	// 17749                  xchg    ax, cx ;~ 075B:0309
cs=0x75b;eip=0x00030a; 	T(XCHG(bx, dx));	// 17750                  xchg    bx, dx ;~ 075B:030A
loc_15e9c:
	// 4655 
cs=0x75b;eip=0x00030c; 	X(word_159fe = ax;);	// 17753                  mov     word_159FE, ax ;~ 075B:030C
cs=0x75b;eip=0x00030f; 	X(word_15a00 = bx;);	// 17754                  mov     word_15A00, bx ;~ 075B:030F
cs=0x75b;eip=0x000313; 	X(word_15a02 = cx;);	// 17755                  mov     word_15A02, cx ;~ 075B:0313
cs=0x75b;eip=0x000317; 	X(word_15a04 = dx;);	// 17756                  mov     word_15A04, dx ;~ 075B:0317
cs=0x75b;eip=0x00031b; 	J(JNZ(loc_15eb1));	// 17757                  jnz     short loc_15EB1 ;~ 075B:031B
cs=0x75b;eip=0x00031d; 	T(CMP(bx, dx));	// 17758                  cmp     bx, dx ;~ 075B:031D
cs=0x75b;eip=0x00031f; 	J(JZ(loc_15e6a));	// 17759                  jz      short loc_15E6A ;~ 075B:031F
loc_15eb1:
	// 4656 
cs=0x75b;eip=0x000321; 	T(si = 1;);	// 17762                  mov     si, 1 ;~ 075B:0321
cs=0x75b;eip=0x000324; 	T(bp = 0x140;);	// 17763                  mov     bp, 140h ;~ 075B:0324
cs=0x75b;eip=0x000327; 	T(SUB(cx, ax));	// 17764                  sub     cx, ax ;~ 075B:0327
cs=0x75b;eip=0x000329; 	T(SUB(dx, bx));	// 17765                  sub     dx, bx ;~ 075B:0329
cs=0x75b;eip=0x00032b; 	J(JNS(loc_15ec1));	// 17766                  jns     short loc_15EC1 ;~ 075B:032B
cs=0x75b;eip=0x00032d; 	T(NEG(bp));	// 17767                  neg     bp ;~ 075B:032D
cs=0x75b;eip=0x00032f; 	T(NEG(dx));	// 17768                  neg     dx ;~ 075B:032F
loc_15ec1:
	// 4657 
cs=0x75b;eip=0x000331; 	T(CMP(cx, dx));	// 17771                  cmp     cx, dx ;~ 075B:0331
cs=0x75b;eip=0x000333; 	J(JNC(loc_15ec9));	// 17772                  jnb     short loc_15EC9 ;~ 075B:0333
cs=0x75b;eip=0x000335; 	T(XCHG(si, bp));	// 17773                  xchg    si, bp ;~ 075B:0335
cs=0x75b;eip=0x000337; 	T(XCHG(cx, dx));	// 17774                  xchg    cx, dx ;~ 075B:0337
loc_15ec9:
	// 4658 
cs=0x75b;eip=0x000339; 	X(word_15a06 = cx;);	// 17777                  mov     word_15A06, cx ;~ 075B:0339
cs=0x75b;eip=0x00033d; 	X(word_15a08 = dx;);	// 17778                  mov     word_15A08, dx ;~ 075B:033D
cs=0x75b;eip=0x000341; 	J(CALL(sub_15e71,0));	// 17779                  call    sub_15E71 ;~ 075B:0341
cs=0x75b;eip=0x000344; 	T(bx = word_15a08;);	// 17780                  mov     bx, word_15A08 ;~ 075B:0344
cs=0x75b;eip=0x000348; 	T(cx = word_15a06;);	// 17781                  mov     cx, word_15A06 ;~ 075B:0348
cs=0x75b;eip=0x00034c; 	T(dx = cx;);	// 17782                  mov     dx, cx ;~ 075B:034C
cs=0x75b;eip=0x00034e; 	T(INC(dx));	// 17783                  inc     dx ;~ 075B:034E
cs=0x75b;eip=0x00034f; 	T(SHR(dx, 1));	// 17784                  shr     dx, 1 ;~ 075B:034F
cs=0x75b;eip=0x000351; 	T(NEG(dx));	// 17785                  neg     dx ;~ 075B:0351
cs=0x75b;eip=0x000353; 	T(DEC(si));	// 17786                  dec     si ;~ 075B:0353
loc_15ee4:
	// 4659 
cs=0x75b;eip=0x000354; 	X(STOSB);	// 17790                  stosb ;~ 075B:0354
cs=0x75b;eip=0x000355; 	T(DEC(cx));	// 17791                  dec     cx ;~ 075B:0355
cs=0x75b;eip=0x000356; 	J(JS(loc_15ef6));	// 17792                  js      short loc_15EF6 ;~ 075B:0356
cs=0x75b;eip=0x000358; 	T(ADD(di, si));	// 17793                  add     di, si ;~ 075B:0358
cs=0x75b;eip=0x00035a; 	T(ADD(dx, bx));	// 17794                  add     dx, bx ;~ 075B:035A
cs=0x75b;eip=0x00035c; 	J(JS(loc_15ee4));	// 17795                  js      short loc_15EE4 ;~ 075B:035C
cs=0x75b;eip=0x00035e; 	T(SUB(dx, word_15a06));	// 17796                  sub     dx, word_15A06 ;~ 075B:035E
cs=0x75b;eip=0x000362; 	T(ADD(di, bp));	// 17797                  add     di, bp ;~ 075B:0362
cs=0x75b;eip=0x000364; 	J(JMP(loc_15ee4));	// 17798                  jmp     short loc_15EE4 ;~ 075B:0364
loc_15ef6:
	// 4660 
cs=0x75b;eip=0x000366; 	X(POP(es));	// 17802                  pop     es ;~ 075B:0366
cs=0x75b;eip=0x000367; 	X(POP(ds));	// 17804                  pop     ds ;~ 075B:0367
cs=0x75b;eip=0x000368; 	J(RETF(0));	// 17806                  retf ;~ 075B:0368
ret_75b_369:
	// 4661 
cs=0x75b;eip=0x000369; 	X(PUSH(bp));	// 17809                  push    bp ;~ 075B:0369
cs=0x75b;eip=0x00036a; 	T(bp = sp;);	// 17810                  mov     bp, sp ;~ 075B:036A
cs=0x75b;eip=0x00036c; 	X(PUSH(si));	// 17811                  push    si ;~ 075B:036C
cs=0x75b;eip=0x00036d; 	X(PUSH(di));	// 17812                  push    di ;~ 075B:036D
cs=0x75b;eip=0x00036e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+8))));	// 17813                  mov     bx, [bp+8] ;~ 075B:036E
cs=0x75b;eip=0x000371; 	T(MOV(bp, *(dw*)(raddr(ss,bp+6))));	// 17814                  mov     bp, [bp+6] ;~ 075B:0371
cs=0x75b;eip=0x000374; 	J(CALL(_group12,m2c::kloc_1603b));	// 17815                  call    loc_1603B ;~ 075B:0374
cs=0x75b;eip=0x000379; 	X(POP(di));	// 17816                  pop     di ;~ 075B:0379
cs=0x75b;eip=0x00037a; 	X(POP(si));	// 17817                  pop     si ;~ 075B:037A
cs=0x75b;eip=0x00037b; 	X(POP(bp));	// 17818                  pop     bp ;~ 075B:037B
cs=0x75b;eip=0x00037c; 	J(RETF(0));	// 17819                  retf ;~ 075B:037C
ret_75b_37d:
	// 4662 
cs=0x75b;eip=0x00037d; 	X(PUSH(bp));	// 17821                  push    bp ;~ 075B:037D
cs=0x75b;eip=0x00037e; 	T(bp = sp;);	// 17822                  mov     bp, sp ;~ 075B:037E
cs=0x75b;eip=0x000380; 	X(PUSH(si));	// 17823                  push    si ;~ 075B:0380
cs=0x75b;eip=0x000381; 	X(PUSH(di));	// 17824                  push    di ;~ 075B:0381
cs=0x75b;eip=0x000382; 	T(MOV(bx, *(dw*)(raddr(ss,bp+8))));	// 17825                  mov     bx, [bp+8] ;~ 075B:0382
cs=0x75b;eip=0x000385; 	T(MOV(bp, *(dw*)(raddr(ss,bp+6))));	// 17826                  mov     bp, [bp+6] ;~ 075B:0385
cs=0x75b;eip=0x000388; 	J(CALLF(sub_15f5d,0));	// 17827                  call    sub_15F5D ;~ 075B:0388
cs=0x75b;eip=0x00038d; 	X(POP(di));	// 17828                  pop     di ;~ 075B:038D
cs=0x75b;eip=0x00038e; 	X(POP(si));	// 17829                  pop     si ;~ 075B:038E
cs=0x75b;eip=0x00038f; 	X(POP(bp));	// 17830                  pop     bp ;~ 075B:038F
cs=0x75b;eip=0x000390; 	J(RETF(0));	// 17831                  retf ;~ 075B:0390
ret_75b_391:
	// 4663 
cs=0x75b;eip=0x000391; 	X(PUSH(bp));	// 17833                  push    bp ;~ 075B:0391
cs=0x75b;eip=0x000392; 	T(bp = sp;);	// 17834                  mov     bp, sp ;~ 075B:0392
cs=0x75b;eip=0x000394; 	X(PUSH(si));	// 17835                  push    si ;~ 075B:0394
cs=0x75b;eip=0x000395; 	X(PUSH(di));	// 17836                  push    di ;~ 075B:0395
cs=0x75b;eip=0x000396; 	T(MOV(bx, *(dw*)(raddr(ss,bp+8))));	// 17837                  mov     bx, [bp+8] ;~ 075B:0396
cs=0x75b;eip=0x000399; 	T(MOV(bp, *(dw*)(raddr(ss,bp+6))));	// 17838                  mov     bp, [bp+6] ;~ 075B:0399
cs=0x75b;eip=0x00039c; 	J(CALLF(sub_15ff1,0));	// 17839                  call    far ptr sub_15FF1 ;~ 075B:039C
cs=0x75b;eip=0x0003a1; 	X(POP(di));	// 17840                  pop     di ;~ 075B:03A1
cs=0x75b;eip=0x0003a2; 	X(POP(si));	// 17841                  pop     si ;~ 075B:03A2
cs=0x75b;eip=0x0003a3; 	X(POP(bp));	// 17842                  pop     bp ;~ 075B:03A3
cs=0x75b;eip=0x0003a4; 	J(RETF(0));	// 17843                  retf ;~ 075B:03A4
ret_75b_3a5:
	// 4664 
cs=0x75b;eip=0x0003a5; 	X(PUSH(bp));	// 17845                  push    bp ;~ 075B:03A5
cs=0x75b;eip=0x0003a6; 	T(bp = sp;);	// 17846                  mov     bp, sp ;~ 075B:03A6
cs=0x75b;eip=0x0003a8; 	X(PUSH(si));	// 17847                  push    si ;~ 075B:03A8
cs=0x75b;eip=0x0003a9; 	X(PUSH(di));	// 17848                  push    di ;~ 075B:03A9
cs=0x75b;eip=0x0003aa; 	T(MOV(bx, *(dw*)(raddr(ss,bp+8))));	// 17849                  mov     bx, [bp+8] ;~ 075B:03AA
cs=0x75b;eip=0x0003ad; 	T(MOV(bp, *(dw*)(raddr(ss,bp+6))));	// 17850                  mov     bp, [bp+6] ;~ 075B:03AD
cs=0x75b;eip=0x0003b0; 	J(CALLF(sub_15f6c,0));	// 17851                  call    far ptr sub_15F6C ;~ 075B:03B0
cs=0x75b;eip=0x0003b5; 	X(POP(di));	// 17852                  pop     di ;~ 075B:03B5
cs=0x75b;eip=0x0003b6; 	X(POP(si));	// 17853                  pop     si ;~ 075B:03B6
cs=0x75b;eip=0x0003b7; 	X(POP(bp));	// 17854                  pop     bp ;~ 075B:03B7
cs=0x75b;eip=0x0003b8; 	J(RETF(0));	// 17855                  retf ;~ 075B:03B8
ret_75b_3b9:
	// 4665 
cs=0x75b;eip=0x0003b9; 	X(PUSH(bp));	// 17857                  push    bp ;~ 075B:03B9
cs=0x75b;eip=0x0003ba; 	T(bp = sp;);	// 17858                  mov     bp, sp ;~ 075B:03BA
cs=0x75b;eip=0x0003bc; 	X(PUSH(si));	// 17859                  push    si ;~ 075B:03BC
cs=0x75b;eip=0x0003bd; 	X(PUSH(di));	// 17860                  push    di ;~ 075B:03BD
cs=0x75b;eip=0x0003be; 	T(MOV(bx, *(dw*)(raddr(ss,bp+8))));	// 17861                  mov     bx, [bp+8] ;~ 075B:03BE
cs=0x75b;eip=0x0003c1; 	T(MOV(bp, *(dw*)(raddr(ss,bp+6))));	// 17862                  mov     bp, [bp+6] ;~ 075B:03C1
cs=0x75b;eip=0x0003c4; 	J(CALLF(sub_15fa8,0));	// 17863                  call    far ptr sub_15FA8 ;~ 075B:03C4
cs=0x75b;eip=0x0003c9; 	X(POP(di));	// 17864                  pop     di ;~ 075B:03C9
cs=0x75b;eip=0x0003ca; 	X(POP(si));	// 17865                  pop     si ;~ 075B:03CA
cs=0x75b;eip=0x0003cb; 	X(POP(bp));	// 17866                  pop     bp ;~ 075B:03CB
cs=0x75b;eip=0x0003cc; 	J(RETF(0));	// 17867                  retf ;~ 075B:03CC

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_15e6a: 	goto loc_15e6a;
        case m2c::kloc_15e9c: 	goto loc_15e9c;
        case m2c::kloc_15eb1: 	goto loc_15eb1;
        case m2c::kloc_15ec1: 	goto loc_15ec1;
        case m2c::kloc_15ec9: 	goto loc_15ec9;
        case m2c::kloc_15ee4: 	goto loc_15ee4;
        case m2c::kloc_15ef6: 	goto loc_15ef6;
        case m2c::kret_75b_2ce: 	goto ret_75b_2ce;
        case m2c::kret_75b_369: 	goto ret_75b_369;
        case m2c::kret_75b_37d: 	goto ret_75b_37d;
        case m2c::kret_75b_391: 	goto ret_75b_391;
        case m2c::kret_75b_3a5: 	goto ret_75b_3a5;
        case m2c::kret_75b_3b9: 	goto ret_75b_3b9;
        case m2c::kseg004_2cd_proc: 	goto seg004_2cd_proc;
        case m2c::kseg004_2f9_proc: 	goto seg004_2f9_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_15e71(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_15e71:
    _begin:
cs=0x75b;eip=0x0002e1; 	T(al = byte_15a0a;);	// 17728                  mov     al, byte_15A0A ;~ 075B:02E1
cs=0x75b;eip=0x0002e4; 	T(di = word_15a00;);	// 17729                  mov     di, word_15A00 ;~ 075B:02E4
cs=0x75b;eip=0x0002e8; 	T(SHL(di, 1));	// 17730                  shl     di, 1 ;~ 075B:02E8
cs=0x75b;eip=0x0002ea; 	T(MOV(di, *(dw*)(raddr(cs,di+0x0E))));	// 17731                  mov     di, cs:[di+0Eh] ;~ 075B:02EA
cs=0x75b;eip=0x0002ef; 	T(ADD(di, word_15d30));	// 17732                  add     di, cs:word_15D30 ;~ 075B:02EF
cs=0x75b;eip=0x0002f4; 	T(ADD(di, word_159fe));	// 17733                  add     di, word_159FE ;~ 075B:02F4
cs=0x75b;eip=0x0002f8; 	J(RETN(0));	// 17734                  retn ;~ 075B:02F8

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_15e71: 	goto sub_15e71;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_15f5d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_15f5d:
    _begin:
cs=0x75b;eip=0x0003cd; 	J(CALL(sub_1614b,0));	// 17873                  call    sub_1614B ;~ 075B:03CD
cs=0x75b;eip=0x0003d0; 	J(CALL(sub_15f75,0));	// 17874                  call    near ptr sub_15F75 ;~ 075B:03D0
cs=0x75b;eip=0x0003d3; 	J(CALL(sub_15fb1,0));	// 17875                  call    near ptr sub_15FB1 ;~ 075B:03D3
cs=0x75b;eip=0x0003d6; 	J(CALL(sub_15ffa,0));	// 17876                  call    near ptr sub_15FFA ;~ 075B:03D6
cs=0x75b;eip=0x0003d9; 	J(return _group12(m2c::kloc_1603e, _state););	// 17877                  jmp     loc_1603E ;~ 075B:03D9

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_15f5d: 	goto sub_15f5d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group9(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group9:
    _begin:
sub_15f6c:
	// 17884 
cs=0x75b;eip=0x0003dc; 	J(CALL(sub_1614b,0));	// 17885                  call    sub_1614B ;~ 075B:03DC
sub_15f6f:
	// 17893 
cs=0x75b;eip=0x0003df; 	J(CALL(sub_15f75,0));	// 17894                  call    near ptr sub_15F75 ;~ 075B:03DF
cs=0x75b;eip=0x0003e2; 	J(return _group12(m2c::kloc_1603e, _state););	// 17895                  jmp     loc_1603E ;~ 075B:03E2

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_15f6c: 	goto sub_15f6c;
        case m2c::ksub_15f6f: 	goto sub_15f6f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_15f75(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_15f75:
    _begin:
cs=0x75b;eip=0x0003e5; 	T(CMP(byte_15b0c, 0x0FF));	// 17904                  cmp     byte_15B0C, 0FFh ;~ 075B:03E5
cs=0x75b;eip=0x0003ea; 	J(JZ(locret_15fa7));	// 17905                  jz      short locret_15FA7 ;~ 075B:03EA
cs=0x75b;eip=0x0003ec; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x12))));	// 17906                  mov     ax, [bp+12h] ;~ 075B:03EC
cs=0x75b;eip=0x0003ef; 	T(MOV(dx, *(dw*)(raddr(ss,bp+8))));	// 17907                  mov     dx, [bp+8] ;~ 075B:03EF
cs=0x75b;eip=0x0003f2; 	T(CMP(dx, ax));	// 17908                  cmp     dx, ax ;~ 075B:03F2
cs=0x75b;eip=0x0003f4; 	J(JNC(locret_15fa7));	// 17909                  jnb     short locret_15FA7 ;~ 075B:03F4
cs=0x75b;eip=0x0003f6; 	X(MOV(*(dw*)(raddr(ss,bp+8)), ax));	// 17910                  mov     [bp+8], ax ;~ 075B:03F6
cs=0x75b;eip=0x0003f9; 	T(SUB(ax, dx));	// 17911                  sub     ax, dx ;~ 075B:03F9
cs=0x75b;eip=0x0003fb; 	X(DIV1(byte_15b0c));	// 17912                  div     byte_15B0C ;~ 075B:03FB
cs=0x75b;eip=0x0003ff; 	X(byte_15b0d = ah;);	// 17913                  mov     byte_15B0D, ah ;~ 075B:03FF
cs=0x75b;eip=0x000403; 	X(SUB(byte_15b06, ah));	// 17914                  sub     byte_15B06, ah ;~ 075B:0403
cs=0x75b;eip=0x000407; 	T(INC(al));	// 17915                  inc     al ;~ 075B:0407
loc_15f99:
	// 4666 
cs=0x75b;eip=0x000409; 	T(DEC(al));	// 17918                  dec     al ;~ 075B:0409
cs=0x75b;eip=0x00040b; 	J(JZ(locret_15fa7));	// 17919                  jz      short locret_15FA7 ;~ 075B:040B
cs=0x75b;eip=0x00040d; 	T(INC(bx));	// 17920                  inc     bx ;~ 075B:040D
cs=0x75b;eip=0x00040e; 	T(CMP(*(raddr(ss,bx)), 0));	// 17921                  cmp     byte ptr ss:[bx], 0 ;~ 075B:040E
cs=0x75b;eip=0x000412; 	J(JNZ(loc_15f99));	// 17922                  jnz     short loc_15F99 ;~ 075B:0412
cs=0x75b;eip=0x000414; 	J(return _group12(m2c::kloc_16147, _state););	// 17923                  jmp     loc_16147 ;~ 075B:0414
locret_15fa7:
	// 4667 
cs=0x75b;eip=0x000417; 	J(RETN(0));	// 17928                  retn ;~ 075B:0417

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_15f99: 	goto loc_15f99;
        case m2c::klocret_15fa7: 	goto locret_15fa7;
        case m2c::ksub_15f75: 	goto sub_15f75;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group10(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group10:
    _begin:
sub_15fa8:
	// 17936 
cs=0x75b;eip=0x000418; 	J(CALL(sub_1614b,0));	// 17937                  call    sub_1614B ;~ 075B:0418
sub_15fab:
	// 17945 
cs=0x75b;eip=0x00041b; 	J(CALL(sub_15fb1,0));	// 17946                  call    near ptr sub_15FB1 ;~ 075B:041B
cs=0x75b;eip=0x00041e; 	J(return _group12(m2c::kloc_1603e, _state););	// 17947                  jmp     loc_1603E ;~ 075B:041E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_15fa8: 	goto sub_15fa8;
        case m2c::ksub_15fab: 	goto sub_15fab;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_15fb1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_15fb1:
    _begin:
cs=0x75b;eip=0x000421; 	T(CMP(byte_15b0c, 0x0FF));	// 17956                  cmp     byte_15B0C, 0FFh ;~ 075B:0421
cs=0x75b;eip=0x000426; 	J(JZ(locret_15fed));	// 17957                  jz      short locret_15FED ;~ 075B:0426
cs=0x75b;eip=0x000428; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x14))));	// 17958                  mov     cx, [bp+14h] ;~ 075B:0428
cs=0x75b;eip=0x00042b; 	T(MOV(dx, *(dw*)(raddr(ss,bp+8))));	// 17959                  mov     dx, [bp+8] ;~ 075B:042B
cs=0x75b;eip=0x00042e; 	T(CMP(dx, cx));	// 17960                  cmp     dx, cx ;~ 075B:042E
cs=0x75b;eip=0x000430; 	J(JNC(loc_15fee));	// 17961                  jnb     short loc_15FEE ;~ 075B:0430
cs=0x75b;eip=0x000432; 	T(di = 0x0FFFF;);	// 17962                  mov     di, 0FFFFh ;~ 075B:0432
loc_15fc5:
	// 4668 
cs=0x75b;eip=0x000435; 	T(INC(di));	// 17965                  inc     di ;~ 075B:0435
cs=0x75b;eip=0x000436; 	T(CMP(*(raddr(ss,bx+di)), 0));	// 17966                  cmp     byte ptr ss:[bx+di], 0 ;~ 075B:0436
cs=0x75b;eip=0x00043a; 	J(JNZ(loc_15fc5));	// 17967                  jnz     short loc_15FC5 ;~ 075B:043A
cs=0x75b;eip=0x00043c; 	T(ax = di;);	// 17968                  mov     ax, di ;~ 075B:043C
cs=0x75b;eip=0x00043e; 	X(MUL1_1(byte_15b0c));	// 17969                  mul     byte_15B0C ;~ 075B:043E
cs=0x75b;eip=0x000442; 	T(ADD(ax, dx));	// 17970                  add     ax, dx ;~ 075B:0442
cs=0x75b;eip=0x000444; 	T(DEC(ax));	// 17971                  dec     ax ;~ 075B:0444
cs=0x75b;eip=0x000445; 	T(SUB(ax, cx));	// 17972                  sub     ax, cx ;~ 075B:0445
cs=0x75b;eip=0x000447; 	J(JBE(locret_15fed));	// 17973                  jbe     short locret_15FED ;~ 075B:0447
cs=0x75b;eip=0x000449; 	T(cl = byte_15b0c;);	// 17974                  mov     cl, byte_15B0C ;~ 075B:0449
cs=0x75b;eip=0x00044d; 	T(DIV1(cl));	// 17975                  div     cl ;~ 075B:044D
cs=0x75b;eip=0x00044f; 	T(SUB(cl, ah));	// 17976                  sub     cl, ah ;~ 075B:044F
cs=0x75b;eip=0x000451; 	X(byte_15b0e = cl;);	// 17977                  mov     byte_15B0E, cl ;~ 075B:0451
cs=0x75b;eip=0x000455; 	T(dx = di;);	// 17978                  mov     dx, di ;~ 075B:0455
cs=0x75b;eip=0x000457; 	T(SUB(dl, al));	// 17979                  sub     dl, al ;~ 075B:0457
cs=0x75b;eip=0x000459; 	X(byte_15b07 = dl;);	// 17980                  mov     byte_15B07, dl ;~ 075B:0459
locret_15fed:
	// 4669 
cs=0x75b;eip=0x00045d; 	J(RETN(0));	// 17984                  retn ;~ 075B:045D
loc_15fee:
	// 4670 
cs=0x75b;eip=0x00045e; 	J(return _group12(m2c::kloc_16147, _state););	// 17988                  jmp     loc_16147 ;~ 075B:045E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_15fc5: 	goto loc_15fc5;
        case m2c::kloc_15fee: 	goto loc_15fee;
        case m2c::klocret_15fed: 	goto locret_15fed;
        case m2c::ksub_15fb1: 	goto sub_15fb1;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group11(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group11:
    _begin:
sub_15ff1:
	// 17996 
cs=0x75b;eip=0x000461; 	J(CALL(sub_1614b,0));	// 17997                  call    sub_1614B ;~ 075B:0461
sub_15ff4:
	// 18005 
cs=0x75b;eip=0x000464; 	J(CALL(sub_15ffa,0));	// 18006                  call    near ptr sub_15FFA ;~ 075B:0464
cs=0x75b;eip=0x000467; 	J(return _group12(m2c::kloc_1603e, _state););	// 18007                  jmp     short loc_1603E ;~ 075B:0467

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_15ff1: 	goto sub_15ff1;
        case m2c::ksub_15ff4: 	goto sub_15ff4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group12(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group12:
    _begin:
sub_15ffa:
	// 18016 
cs=0x75b;eip=0x00046a; 	T(MOV(cl, *(raddr(ss,bp+0x0E))));	// 18018                  mov     cl, [bp+0Eh] ;~ 075B:046A
cs=0x75b;eip=0x00046d; 	T(MOV(ch, *(raddr(ss,bp+0x10))));	// 18019                  mov     ch, [bp+10h] ;~ 075B:046D
cs=0x75b;eip=0x000470; 	T(dh = byte_15b0f;);	// 18020                  mov     dh, byte_15B0F ;~ 075B:0470
cs=0x75b;eip=0x000474; 	T(DEC(dh));	// 18021                  dec     dh ;~ 075B:0474
cs=0x75b;eip=0x000476; 	T(MOV(dl, *(raddr(ss,bp+0x0A))));	// 18022                  mov     dl, [bp+0Ah] ;~ 075B:0476
cs=0x75b;eip=0x000479; 	T(ADD(dh, dl));	// 18023                  add     dh, dl ;~ 075B:0479
cs=0x75b;eip=0x00047b; 	T(CMP(dl, ch));	// 18024                  cmp     dl, ch ;~ 075B:047B
cs=0x75b;eip=0x00047d; 	J(JA(loc_16038));	// 18025                  ja      short loc_16038 ;~ 075B:047D
cs=0x75b;eip=0x00047f; 	T(CMP(dh, cl));	// 18026                  cmp     dh, cl ;~ 075B:047F
cs=0x75b;eip=0x000481; 	J(JC(loc_16038));	// 18027                  jb      short loc_16038 ;~ 075B:0481
cs=0x75b;eip=0x000483; 	T(CMP(dl, cl));	// 18028                  cmp     dl, cl ;~ 075B:0483
cs=0x75b;eip=0x000485; 	J(JNC(loc_1602b));	// 18029                  jnb     short loc_1602B ;~ 075B:0485
cs=0x75b;eip=0x000487; 	T(al = dh;);	// 18030                  mov     al, dh ;~ 075B:0487
cs=0x75b;eip=0x000489; 	T(SUB(al, cl));	// 18031                  sub     al, cl ;~ 075B:0489
cs=0x75b;eip=0x00048b; 	T(INC(al));	// 18032                  inc     al ;~ 075B:048B
cs=0x75b;eip=0x00048d; 	X(byte_15b0f = al;);	// 18033                  mov     byte_15B0F, al ;~ 075B:048D
cs=0x75b;eip=0x000490; 	X(MOV(*(raddr(ss,bp+0x0A)), cl));	// 18034                  mov     [bp+0Ah], cl ;~ 075B:0490
cs=0x75b;eip=0x000493; 	T(SUB(cl, dl));	// 18035                  sub     cl, dl ;~ 075B:0493
cs=0x75b;eip=0x000495; 	T(SHL(cl, 1));	// 18036                  shl     cl, 1 ;~ 075B:0495
cs=0x75b;eip=0x000497; 	X(*(db*)(&word_15b10) = cl;);	// 18037                  mov     byte ptr word_15B10, cl ;~ 075B:0497
loc_1602b:
	// 4671 
cs=0x75b;eip=0x00049b; 	T(CMP(dh, ch));	// 18040                  cmp     dh, ch ;~ 075B:049B
cs=0x75b;eip=0x00049d; 	J(JBE(locret_16037));	// 18041                  jbe     short locret_16037 ;~ 075B:049D
cs=0x75b;eip=0x00049f; 	T(SUB(ch, dl));	// 18042                  sub     ch, dl ;~ 075B:049F
cs=0x75b;eip=0x0004a1; 	T(INC(ch));	// 18043                  inc     ch ;~ 075B:04A1
cs=0x75b;eip=0x0004a3; 	X(byte_15b0f = ch;);	// 18044                  mov     byte_15B0F, ch ;~ 075B:04A3
locret_16037:
	// 4672 
cs=0x75b;eip=0x0004a7; 	J(RETN(0));	// 18047                  retn ;~ 075B:04A7
loc_16038:
	// 4673 
cs=0x75b;eip=0x0004a8; 	J(JMP(loc_16147));	// 18052                  jmp     loc_16147 ;~ 075B:04A8
loc_1603b:
	// 4674 
cs=0x75b;eip=0x0004ab; 	J(CALL(sub_1614b,0));	// 18057                  call    sub_1614B ;~ 075B:04AB
loc_1603e:
	// 4675 
cs=0x75b;eip=0x0004ae; 	T(MOV(ah, *(raddr(ss,bp+4))));	// 18062                  mov     ah, [bp+4] ;~ 075B:04AE
cs=0x75b;eip=0x0004b1; 	J(CALLF(sub_15e51,0));	// 18063                  call    sub_15E51 ;~ 075B:04B1
cs=0x75b;eip=0x0004b6; 	T(di = word_15b10;);	// 18064                  mov     di, word_15B10 ;~ 075B:04B6
cs=0x75b;eip=0x0004ba; 	T(MOV(di, *(dw*)(raddr(ds,di+0x112))));	// 18065                  mov     di, [di+112h] ;~ 075B:04BA
cs=0x75b;eip=0x0004be; 	T(ADD(di, word_15b0a));	// 18066                  add     di, word_15B0A ;~ 075B:04BE
cs=0x75b;eip=0x0004c2; 	X(word_15b08 = di;);	// 18067                  mov     word_15B08, di ;~ 075B:04C2
cs=0x75b;eip=0x0004c6; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0A))));	// 18068                  mov     di, [bp+0Ah] ;~ 075B:04C6
cs=0x75b;eip=0x0004c9; 	T(SHL(di, 1));	// 18069                  shl     di, 1 ;~ 075B:04C9
cs=0x75b;eip=0x0004cb; 	T(si = bx;);	// 18070                  mov     si, bx ;~ 075B:04CB
loc_1605d:
	// 4676 
cs=0x75b;eip=0x0004cd; 	T(CMP(byte_15b07, 1));	// 18073                  cmp     byte_15B07, 1 ;~ 075B:04CD
cs=0x75b;eip=0x0004d2; 	J(JNZ(loc_1606a));	// 18074                  jnz     short loc_1606A ;~ 075B:04D2
cs=0x75b;eip=0x0004d4; 	T(al = byte_15b0e;);	// 18076                  mov     al, byte_15B0E ;~ 075B:04D4
cs=0x75b;eip=0x0004d7; 	X(byte_15b06 = al;);	// 18077                  mov     byte_15B06, al ;~ 075B:04D7
loc_1606a:
	// 4677 
cs=0x75b;eip=0x0004da; 	T(MOV(al, *(raddr(ss,si))));	// 18080                  mov     al, ss:[si] ;~ 075B:04DA
cs=0x75b;eip=0x0004dd; 	T(INC(si));	// 18081                  inc     si ;~ 075B:04DD
cs=0x75b;eip=0x0004de; 	T(OR(al, al));	// 18082                  or      al, al ;~ 075B:04DE
cs=0x75b;eip=0x0004e0; 	J(JNZ(loc_16075));	// 18083                  jnz     short loc_16075 ;~ 075B:04E0
cs=0x75b;eip=0x0004e2; 	J(JMP(loc_16148));	// 18084                  jmp     loc_16148 ;~ 075B:04E2
loc_16075:
	// 4678 
cs=0x75b;eip=0x0004e5; 	T(TEST(al, 0x80));	// 18088                  test    al, 80h ;~ 075B:04E5
cs=0x75b;eip=0x0004e7; 	J(JZ(loc_1608d));	// 18089                  jz      short loc_1608D ;~ 075B:04E7
cs=0x75b;eip=0x0004e9; 	T(AND(al, 0x7F));	// 18090                  and     al, 7Fh ;~ 075B:04E9
cs=0x75b;eip=0x0004eb; 	X(MOV(*(raddr(ss,bp+4)), al));	// 18091                  mov     [bp+4], al ;~ 075B:04EB
cs=0x75b;eip=0x0004ee; 	T(ah = al;);	// 18092                  mov     ah, al ;~ 075B:04EE
cs=0x75b;eip=0x0004f0; 	J(CALLF(sub_15e51,0));	// 18093                  call    sub_15E51 ;~ 075B:04F0
cs=0x75b;eip=0x0004f5; 	X(byte_15b06 = 0;);	// 18094                  mov     byte_15B06, 0 ;~ 075B:04F5
cs=0x75b;eip=0x0004fa; 	J(JMP(loc_1612b));	// 18095                  jmp     loc_1612B ;~ 075B:04FA
loc_1608d:
	// 4679 
cs=0x75b;eip=0x0004fd; 	X(PUSH(si));	// 18099                  push    si ;~ 075B:04FD
cs=0x75b;eip=0x0004fe; 	X(PUSH(di));	// 18100                  push    di ;~ 075B:04FE
cs=0x75b;eip=0x0004ff; 	T(XOR(ah, ah));	// 18101                  xor     ah, ah ;~ 075B:04FF
cs=0x75b;eip=0x000501; 	T(si = ax;);	// 18102                  mov     si, ax ;~ 075B:0501
cs=0x75b;eip=0x000503; 	T(MOV(dl, *(raddr(ss,bp+4))));	// 18103                  mov     dl, [bp+4] ;~ 075B:0503
cs=0x75b;eip=0x000506; 	T(MOV(dh, *(raddr(ss,bp+6))));	// 18104                  mov     dh, [bp+6] ;~ 075B:0506
cs=0x75b;eip=0x000509; 	T(CMP(byte_15b0c, 0x0FF));	// 18105                  cmp     byte_15B0C, 0FFh ;~ 075B:0509
cs=0x75b;eip=0x00050e; 	J(JNZ(loc_160a9));	// 18106                  jnz     short loc_160A9 ;~ 075B:050E
cs=0x75b;eip=0x000510; 	T(bx = word_15b12;);	// 18107                  mov     bx, word_15B12 ;~ 075B:0510
cs=0x75b;eip=0x000514; 	T(MOV(al, *(raddr(ds,bx+si))));	// 18108                  mov     al, [bx+si] ;~ 075B:0514
cs=0x75b;eip=0x000516; 	X(byte_15b06 = al;);	// 18109                  mov     byte_15B06, al ;~ 075B:0516
loc_160a9:
	// 4680 
cs=0x75b;eip=0x000519; 	T(CMP(*(raddr(ss,bp+2)), 1));	// 18112                  cmp     byte ptr [bp+2], 1 ;~ 075B:0519
cs=0x75b;eip=0x00051d; 	J(JZ(loc_160ed));	// 18113                  jz      short loc_160ED ;~ 075B:051D
cs=0x75b;eip=0x00051f; 	T(ch = byte_15b0f;);	// 18114                  mov     ch, byte_15B0F ;~ 075B:051F
loc_160b3:
	// 4681 
cs=0x75b;eip=0x000523; 	T(bx = word_15b08;);	// 18117                  mov     bx, word_15B08 ;~ 075B:0523
cs=0x75b;eip=0x000527; 	T(MOV(bx, *(dw*)(raddr(ds,bx+si))));	// 18118                  mov     bx, [bx+si] ;~ 075B:0527
cs=0x75b;eip=0x000529; 	T(XCHG(bh, bl));	// 18119                  xchg    bh, bl ;~ 075B:0529
cs=0x75b;eip=0x00052b; 	T(cl = byte_15b0d;);	// 18120                  mov     cl, byte_15B0D ;~ 075B:052B
cs=0x75b;eip=0x00052f; 	T(SHL(bx, cl));	// 18121                  shl     bx, cl ;~ 075B:052F
cs=0x75b;eip=0x000531; 	X(PUSH(di));	// 18122                  push    di ;~ 075B:0531
cs=0x75b;eip=0x000532; 	T(MOV(di, *(dw*)(raddr(cs,di+0x0E))));	// 18123                  mov     di, cs:[di+0Eh] ;~ 075B:0532
cs=0x75b;eip=0x000537; 	T(ADD(di, *(dw*)(raddr(ss,bp+8))));	// 18124                  add     di, [bp+8] ;~ 075B:0537
cs=0x75b;eip=0x00053a; 	T(cl = byte_15b06;);	// 18125                  mov     cl, byte_15B06 ;~ 075B:053A
cs=0x75b;eip=0x00053e; 	T(DEC(cl));	// 18126                  dec     cl ;~ 075B:053E
cs=0x75b;eip=0x000540; 	J(JZ(loc_160de));	// 18127                  jz      short loc_160DE ;~ 075B:0540
loc_160d2:
	// 4682 
cs=0x75b;eip=0x000542; 	T(SHL(bx, 1));	// 18130                  shl     bx, 1 ;~ 075B:0542
cs=0x75b;eip=0x000544; 	J(JNC(loc_160d9));	// 18131                  jnb     short loc_160D9 ;~ 075B:0544
cs=0x75b;eip=0x000546; 	X(MOV(*(raddr(es,di)), dl));	// 18132                  mov     es:[di], dl ;~ 075B:0546
loc_160d9:
	// 4683 
cs=0x75b;eip=0x000549; 	T(INC(di));	// 18135                  inc     di ;~ 075B:0549
cs=0x75b;eip=0x00054a; 	T(DEC(cl));	// 18136                  dec     cl ;~ 075B:054A
cs=0x75b;eip=0x00054c; 	J(JNZ(loc_160d2));	// 18137                  jnz     short loc_160D2 ;~ 075B:054C
loc_160de:
	// 4684 
cs=0x75b;eip=0x00054e; 	X(POP(di));	// 18140                  pop     di ;~ 075B:054E
cs=0x75b;eip=0x00054f; 	T(ADD(di, 2));	// 18141                  add     di, 2 ;~ 075B:054F
cs=0x75b;eip=0x000552; 	T(ADD(si, 0x100));	// 18142                  add     si, 100h ;~ 075B:0552
cs=0x75b;eip=0x000556; 	T(DEC(ch));	// 18143                  dec     ch ;~ 075B:0556
cs=0x75b;eip=0x000558; 	J(JNZ(loc_160b3));	// 18144                  jnz     short loc_160B3 ;~ 075B:0558
cs=0x75b;eip=0x00055a; 	J(JMP(loc_16129));	// 18145                  jmp     short loc_16129 ;~ 075B:055A
loc_160ed:
	// 4685 
cs=0x75b;eip=0x00055d; 	T(ch = byte_15b0f;);	// 18151                  mov     ch, byte_15B0F ;~ 075B:055D
loc_160f1:
	// 4686 
cs=0x75b;eip=0x000561; 	T(bx = word_15b08;);	// 18154                  mov     bx, word_15B08 ;~ 075B:0561
cs=0x75b;eip=0x000565; 	T(MOV(bx, *(dw*)(raddr(ds,bx+si))));	// 18155                  mov     bx, [bx+si] ;~ 075B:0565
cs=0x75b;eip=0x000567; 	T(XCHG(bh, bl));	// 18156                  xchg    bh, bl ;~ 075B:0567
cs=0x75b;eip=0x000569; 	T(cl = byte_15b0d;);	// 18157                  mov     cl, byte_15B0D ;~ 075B:0569
cs=0x75b;eip=0x00056d; 	T(SHL(bx, cl));	// 18158                  shl     bx, cl ;~ 075B:056D
cs=0x75b;eip=0x00056f; 	X(PUSH(di));	// 18159                  push    di ;~ 075B:056F
cs=0x75b;eip=0x000570; 	T(MOV(di, *(dw*)(raddr(cs,di+0x0E))));	// 18160                  mov     di, cs:[di+0Eh] ;~ 075B:0570
cs=0x75b;eip=0x000575; 	T(ADD(di, *(dw*)(raddr(ss,bp+8))));	// 18161                  add     di, [bp+8] ;~ 075B:0575
cs=0x75b;eip=0x000578; 	T(cl = byte_15b06;);	// 18162                  mov     cl, byte_15B06 ;~ 075B:0578
cs=0x75b;eip=0x00057c; 	T(OR(cl, cl));	// 18163                  or      cl, cl ;~ 075B:057C
cs=0x75b;eip=0x00057e; 	J(JZ(loc_1611d));	// 18164                  jz      short loc_1611D ;~ 075B:057E
loc_16110:
	// 4687 
cs=0x75b;eip=0x000580; 	T(ax = dx;);	// 18167                  mov     ax, dx ;~ 075B:0580
cs=0x75b;eip=0x000582; 	T(SHL(bx, 1));	// 18168                  shl     bx, 1 ;~ 075B:0582
cs=0x75b;eip=0x000584; 	J(JC(loc_16118));	// 18169                  jb      short loc_16118 ;~ 075B:0584
cs=0x75b;eip=0x000586; 	T(XCHG(ah, al));	// 18170                  xchg    ah, al ;~ 075B:0586
loc_16118:
	// 4688 
cs=0x75b;eip=0x000588; 	X(STOSB);	// 18173                  stosb ;~ 075B:0588
cs=0x75b;eip=0x000589; 	T(DEC(cl));	// 18174                  dec     cl ;~ 075B:0589
cs=0x75b;eip=0x00058b; 	J(JNZ(loc_16110));	// 18175                  jnz     short loc_16110 ;~ 075B:058B
loc_1611d:
	// 4689 
cs=0x75b;eip=0x00058d; 	X(POP(di));	// 18178                  pop     di ;~ 075B:058D
cs=0x75b;eip=0x00058e; 	T(ADD(di, 2));	// 18179                  add     di, 2 ;~ 075B:058E
cs=0x75b;eip=0x000591; 	T(ADD(si, 0x100));	// 18180                  add     si, 100h ;~ 075B:0591
cs=0x75b;eip=0x000595; 	T(DEC(ch));	// 18181                  dec     ch ;~ 075B:0595
cs=0x75b;eip=0x000597; 	J(JNZ(loc_160f1));	// 18182                  jnz     short loc_160F1 ;~ 075B:0597
loc_16129:
	// 4690 
cs=0x75b;eip=0x000599; 	X(POP(di));	// 18185                  pop     di ;~ 075B:0599
cs=0x75b;eip=0x00059a; 	X(POP(si));	// 18186                  pop     si ;~ 075B:059A
loc_1612b:
	// 4691 
cs=0x75b;eip=0x00059b; 	X(DEC(byte_15b07));	// 18189                  dec     byte_15B07 ;~ 075B:059B
cs=0x75b;eip=0x00059f; 	J(JZ(loc_16148));	// 18190                  jz      short loc_16148 ;~ 075B:059F
cs=0x75b;eip=0x0005a1; 	X(byte_15b0d = 0;);	// 18191                  mov     byte_15B0D, 0 ;~ 075B:05A1
cs=0x75b;eip=0x0005a6; 	T(XOR(ah, ah));	// 18192                  xor     ah, ah ;~ 075B:05A6
cs=0x75b;eip=0x0005a8; 	T(al = byte_15b06;);	// 18193                  mov     al, byte_15B06 ;~ 075B:05A8
cs=0x75b;eip=0x0005ab; 	X(ADD(*(dw*)(raddr(ss,bp+8)), ax));	// 18194                  add     [bp+8], ax ;~ 075B:05AB
cs=0x75b;eip=0x0005ae; 	T(al = byte_15b0c;);	// 18195                  mov     al, byte_15B0C ;~ 075B:05AE
cs=0x75b;eip=0x0005b1; 	X(byte_15b06 = al;);	// 18196                  mov     byte_15B06, al ;~ 075B:05B1
cs=0x75b;eip=0x0005b4; 	J(JMP(loc_1605d));	// 18197                  jmp     loc_1605D ;~ 075B:05B4
loc_16147:
	// 4692 
cs=0x75b;eip=0x0005b7; 	X(POP(ax));	// 18202                  pop     ax ;~ 075B:05B7
loc_16148:
	// 4693 
cs=0x75b;eip=0x0005b8; 	X(POP(es));	// 18206                  pop     es ;~ 075B:05B8
cs=0x75b;eip=0x0005b9; 	X(POP(ds));	// 18208                  pop     ds ;~ 075B:05B9
cs=0x75b;eip=0x0005ba; 	J(RETF(0));	// 18210                  retf ;~ 075B:05BA
sub_1614b:
	// 18217 
cs=0x75b;eip=0x0005bb; 	X(POP(cx));	// 18219                  pop     cx ;~ 075B:05BB
cs=0x75b;eip=0x0005bc; 	X(PUSH(ds));	// 18220                  push    ds ;~ 075B:05BC
cs=0x75b;eip=0x0005bd; 	X(PUSH(es));	// 18221                  push    es ;~ 075B:05BD
cs=0x75b;eip=0x0005be; 	T(CMP(*(raddr(ss,bx)), 0));	// 18222                  cmp     byte ptr ss:[bx], 0 ;~ 075B:05BE
cs=0x75b;eip=0x0005c2; 	J(JZ(loc_16148));	// 18223                  jz      short loc_16148 ;~ 075B:05C2
cs=0x75b;eip=0x0005c4; 	T(ax = seg_offset(seg003););	// 18224                  mov     ax, seg seg003 ;~ 075B:05C4
cs=0x75b;eip=0x0005c7; 	T(ds = ax;);	// 18225                  mov     ds, ax ;~ 075B:05C7
cs=0x75b;eip=0x0005c9; 	T(MOV(di, *(dw*)(raddr(ss,bp+0))));	// 18227                  mov     di, [bp+0] ;~ 075B:05C9
cs=0x75b;eip=0x0005cc; 	T(SHL(di, 1));	// 18228                  shl     di, 1 ;~ 075B:05CC
cs=0x75b;eip=0x0005ce; 	T(MOV(es, *(dw*)(raddr(cs,di+0x681))));	// 18229                  mov     es, word ptr cs:[di+681h] ;~ 075B:05CE
cs=0x75b;eip=0x0005d3; 	X(byte_15b07 = 0x0FF;);	// 18231                  mov     byte_15B07, 0FFh ;~ 075B:05D3
cs=0x75b;eip=0x0005d8; 	X(word_15b10 = 0;);	// 18232                  mov     word_15B10, 0 ;~ 075B:05D8
cs=0x75b;eip=0x0005de; 	X(byte_15b0d = 0;);	// 18233                  mov     byte_15B0D, 0 ;~ 075B:05DE
cs=0x75b;eip=0x0005e3; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0C))));	// 18234                  mov     di, [bp+0Ch] ;~ 075B:05E3
cs=0x75b;eip=0x0005e6; 	T(SHL(di, 1));	// 18235                  shl     di, 1 ;~ 075B:05E6
cs=0x75b;eip=0x0005e8; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x0EE))));	// 18236                  mov     ax, [di+0EEh] ;~ 075B:05E8
cs=0x75b;eip=0x0005ec; 	X(word_15b0a = ax;);	// 18237                  mov     word_15B0A, ax ;~ 075B:05EC
cs=0x75b;eip=0x0005ef; 	T(MOV(al, *(raddr(ds,di+0x106))));	// 18238                  mov     al, [di+106h] ;~ 075B:05EF
cs=0x75b;eip=0x0005f3; 	X(byte_15b0c = al;);	// 18239                  mov     byte_15B0C, al ;~ 075B:05F3
cs=0x75b;eip=0x0005f6; 	X(byte_15b06 = al;);	// 18240                  mov     byte_15B06, al ;~ 075B:05F6
cs=0x75b;eip=0x0005f9; 	X(byte_15b0e = al;);	// 18241                  mov     byte_15B0E, al ;~ 075B:05F9
cs=0x75b;eip=0x0005fc; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x0E2))));	// 18242                  mov     ax, [di+0E2h] ;~ 075B:05FC
cs=0x75b;eip=0x000600; 	X(word_15b12 = ax;);	// 18243                  mov     word_15B12, ax ;~ 075B:0600
cs=0x75b;eip=0x000603; 	T(MOV(ax, *(dw*)(raddr(ss,bp+2))));	// 18244                  mov     ax, [bp+2] ;~ 075B:0603
cs=0x75b;eip=0x000606; 	T(AND(ax, 1));	// 18245                  and     ax, 1 ;~ 075B:0606
cs=0x75b;eip=0x000609; 	T(ADD(di, ax));	// 18246                  add     di, ax ;~ 075B:0609
cs=0x75b;eip=0x00060b; 	T(MOV(ah, *(raddr(ds,di+0x0FA))));	// 18247                  mov     ah, [di+0FAh] ;~ 075B:060B
cs=0x75b;eip=0x00060f; 	X(byte_15b0f = ah;);	// 18248                  mov     byte_15B0F, ah ;~ 075B:060F
cs=0x75b;eip=0x000613; __disp=cx;
	J(return __dispatch_call(__disp, _state););	// 18249                  jmp     cx ;~ 075B:0613

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1602b: 	goto loc_1602b;
        case m2c::kloc_16038: 	goto loc_16038;
        case m2c::kloc_1603b: 	goto loc_1603b;
        case m2c::kloc_1603e: 	goto loc_1603e;
        case m2c::kloc_1605d: 	goto loc_1605d;
        case m2c::kloc_1606a: 	goto loc_1606a;
        case m2c::kloc_16075: 	goto loc_16075;
        case m2c::kloc_1608d: 	goto loc_1608d;
        case m2c::kloc_160a9: 	goto loc_160a9;
        case m2c::kloc_160b3: 	goto loc_160b3;
        case m2c::kloc_160d2: 	goto loc_160d2;
        case m2c::kloc_160d9: 	goto loc_160d9;
        case m2c::kloc_160de: 	goto loc_160de;
        case m2c::kloc_160ed: 	goto loc_160ed;
        case m2c::kloc_160f1: 	goto loc_160f1;
        case m2c::kloc_16110: 	goto loc_16110;
        case m2c::kloc_16118: 	goto loc_16118;
        case m2c::kloc_1611d: 	goto loc_1611d;
        case m2c::kloc_16129: 	goto loc_16129;
        case m2c::kloc_1612b: 	goto loc_1612b;
        case m2c::kloc_16147: 	goto loc_16147;
        case m2c::kloc_16148: 	goto loc_16148;
        case m2c::klocret_16037: 	goto locret_16037;
        case m2c::ksub_15ffa: 	goto sub_15ffa;
        case m2c::ksub_1614b: 	goto sub_1614b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg004_615_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg004_615_proc:
    _begin:
cs=0x75b;eip=0x000615; 	X(PUSH(ds));	// 18254                  push    ds ;~ 075B:0615
cs=0x75b;eip=0x000616; 	X(PUSH(es));	// 18255                  push    es ;~ 075B:0616
cs=0x75b;eip=0x000617; 	T(ax = seg_offset(seg003););	// 18256                  mov     ax, seg seg003 ;~ 075B:0617
cs=0x75b;eip=0x00061a; 	T(ds = ax;);	// 18257                  mov     ds, ax ;~ 075B:061A
cs=0x75b;eip=0x00061c; 	T(es = word_15d2e;);	// 18259                  mov     es, cs:word_15D2E ;~ 075B:061C
cs=0x75b;eip=0x000621; 	T(STD);	// 18261                  std ;~ 075B:0621
cs=0x75b;eip=0x000622; 	T(OR(si, si));	// 18262                  or      si, si ;~ 075B:0622
cs=0x75b;eip=0x000624; 	J(JZ(loc_161b7));	// 18263                  jz      short loc_161B7 ;~ 075B:0624
cs=0x75b;eip=0x000626; 	T(CLD);	// 18264                  cld ;~ 075B:0626
loc_161b7:
	// 4694 
cs=0x75b;eip=0x000627; 	T(DEC(bx));	// 18267                  dec     bx ;~ 075B:0627
cs=0x75b;eip=0x000628; 	T(CMP(dl, 1));	// 18268                  cmp     dl, 1 ;~ 075B:0628
cs=0x75b;eip=0x00062b; 	J(JL(loc_161c0));	// 18269                  jl      short loc_161C0 ;~ 075B:062B
cs=0x75b;eip=0x00062d; 	T(ADD(bx, 0x14));	// 18270                  add     bx, 14h ;~ 075B:062D
loc_161c0:
	// 4695 
cs=0x75b;eip=0x000630; 	T(OR(cl, cl));	// 18273                  or      cl, cl ;~ 075B:0630
cs=0x75b;eip=0x000632; 	J(JZ(loc_161c8));	// 18274                  jz      short loc_161C8 ;~ 075B:0632
cs=0x75b;eip=0x000634; 	T(ADD(si, 4));	// 18275                  add     si, 4 ;~ 075B:0634
cs=0x75b;eip=0x000637; 	T(INC(bx));	// 18276                  inc     bx ;~ 075B:0637
loc_161c8:
	// 4696 
cs=0x75b;eip=0x000638; 	T(al = 0x0F;);	// 18279                  mov     al, 0Fh ;~ 075B:0638
cs=0x75b;eip=0x00063a; 	T(ah = al;);	// 18280                  mov     ah, al ;~ 075B:063A
cs=0x75b;eip=0x00063c; 	T(MOV(dx, *(dw*)(raddr(ds,si+0x1C84))));	// 18281                  mov     dx, [si+1C84h] ;~ 075B:063C
cs=0x75b;eip=0x000640; 	T(ch = 0x0A;);	// 18282                  mov     ch, 0Ah ;~ 075B:0640
loc_161d2:
	// 4697 
cs=0x75b;eip=0x000642; 	T(CMP(bx, *(dw*)(raddr(ds,si+0x1C8C))));	// 18285                  cmp     bx, [si+1C8Ch] ;~ 075B:0642
cs=0x75b;eip=0x000646; 	J(JC(loc_1620d));	// 18286                  jb      short loc_1620D ;~ 075B:0646
cs=0x75b;eip=0x000648; 	T(CMP(bx, *(dw*)(raddr(ds,si+0x1C94))));	// 18287                  cmp     bx, [si+1C94h] ;~ 075B:0648
cs=0x75b;eip=0x00064c; 	J(JA(loc_161ff));	// 18288                  ja      short loc_161FF ;~ 075B:064C
cs=0x75b;eip=0x00064e; 	T(di = bx;);	// 18289                  mov     di, bx ;~ 075B:064E
cs=0x75b;eip=0x000650; 	T(SHL(di, 1));	// 18290                  shl     di, 1 ;~ 075B:0650
cs=0x75b;eip=0x000652; 	T(MOV(di, *(dw*)(raddr(cs,di+0x0E))));	// 18291                  mov     di, cs:[di+0Eh] ;~ 075B:0652
cs=0x75b;eip=0x000657; 	T(ADD(di, dx));	// 18292                  add     di, dx ;~ 075B:0657
cs=0x75b;eip=0x000659; 	T(CMP(ch, 5));	// 18293                  cmp     ch, 5 ;~ 075B:0659
cs=0x75b;eip=0x00065c; 	J(JNZ(loc_161f3));	// 18294                  jnz     short loc_161F3 ;~ 075B:065C
cs=0x75b;eip=0x00065e; 	X(STOSB);	// 18295                  stosb ;~ 075B:065E
cs=0x75b;eip=0x00065f; 	X(STOSB);	// 18296                  stosb ;~ 075B:065F
cs=0x75b;eip=0x000660; 	J(JMP(loc_161ff));	// 18297                  jmp     short loc_161FF ;~ 075B:0660
loc_161f3:
	// 4698 
cs=0x75b;eip=0x000663; 	T(CMP(ch, 0x0A));	// 18303                  cmp     ch, 0Ah ;~ 075B:0663
cs=0x75b;eip=0x000666; 	J(JNZ(loc_161fe));	// 18304                  jnz     short loc_161FE ;~ 075B:0666
cs=0x75b;eip=0x000668; 	X(STOSB);	// 18305                  stosb ;~ 075B:0668
cs=0x75b;eip=0x000669; 	X(STOSB);	// 18306                  stosb ;~ 075B:0669
cs=0x75b;eip=0x00066a; 	T(OR(cl, cl));	// 18307                  or      cl, cl ;~ 075B:066A
cs=0x75b;eip=0x00066c; 	J(JNZ(loc_161ff));	// 18308                  jnz     short loc_161FF ;~ 075B:066C
loc_161fe:
	// 4699 
cs=0x75b;eip=0x00066e; 	X(STOSB);	// 18311                  stosb ;~ 075B:066E
loc_161ff:
	// 4700 
cs=0x75b;eip=0x00066f; 	T(SUB(bx, 2));	// 18315                  sub     bx, 2 ;~ 075B:066F
cs=0x75b;eip=0x000672; 	T(CMP(ch, 0x0A));	// 18316                  cmp     ch, 0Ah ;~ 075B:0672
cs=0x75b;eip=0x000675; 	J(JNZ(loc_16209));	// 18317                  jnz     short loc_16209 ;~ 075B:0675
cs=0x75b;eip=0x000677; 	T(XOR(ch, ch));	// 18318                  xor     ch, ch ;~ 075B:0677
loc_16209:
	// 4701 
cs=0x75b;eip=0x000679; 	T(INC(ch));	// 18321                  inc     ch ;~ 075B:0679
cs=0x75b;eip=0x00067b; 	J(JMP(loc_161d2));	// 18322                  jmp     short loc_161D2 ;~ 075B:067B
loc_1620d:
	// 4702 
cs=0x75b;eip=0x00067d; 	T(CLD);	// 18326                  cld ;~ 075B:067D
cs=0x75b;eip=0x00067e; 	X(POP(es));	// 18327                  pop     es ;~ 075B:067E
cs=0x75b;eip=0x00067f; 	X(POP(ds));	// 18329                  pop     ds ;~ 075B:067F
cs=0x75b;eip=0x000680; 	J(RETF(0));	// 18331                  retf ;~ 075B:0680
ret_75b_725:
	// 4703 
cs=0x75b;eip=0x000725; 	X(PUSH(bp));	// 18352                  push    bp ;~ 075B:0725
cs=0x75b;eip=0x000726; 	T(bp = sp;);	// 18353                  mov     bp, sp ;~ 075B:0726
cs=0x75b;eip=0x000728; 	X(PUSH(si));	// 18354                  push    si ;~ 075B:0728
cs=0x75b;eip=0x000729; 	X(PUSH(di));	// 18355                  push    di ;~ 075B:0729
cs=0x75b;eip=0x00072a; 	T(MOV(bp, *(dw*)(raddr(ss,bp+6))));	// 18356                  mov     bp, [bp+6] ;~ 075B:072A
cs=0x75b;eip=0x00072d; 	J(CALLF(sub_162c6,0));	// 18357                  call    sub_162C6 ;~ 075B:072D
cs=0x75b;eip=0x000732; 	X(POP(di));	// 18358                  pop     di ;~ 075B:0732
cs=0x75b;eip=0x000733; 	X(POP(si));	// 18359                  pop     si ;~ 075B:0733
cs=0x75b;eip=0x000734; 	X(POP(bp));	// 18360                  pop     bp ;~ 075B:0734
cs=0x75b;eip=0x000735; 	J(RETF(0));	// 18361                  retf ;~ 075B:0735

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_161b7: 	goto loc_161b7;
        case m2c::kloc_161c0: 	goto loc_161c0;
        case m2c::kloc_161c8: 	goto loc_161c8;
        case m2c::kloc_161d2: 	goto loc_161d2;
        case m2c::kloc_161f3: 	goto loc_161f3;
        case m2c::kloc_161fe: 	goto loc_161fe;
        case m2c::kloc_161ff: 	goto loc_161ff;
        case m2c::kloc_16209: 	goto loc_16209;
        case m2c::kloc_1620d: 	goto loc_1620d;
        case m2c::kret_75b_725: 	goto ret_75b_725;
        case m2c::kseg004_615_proc: 	goto seg004_615_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_162c6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_162c6:
    _begin:
cs=0x75b;eip=0x000736; 	X(PUSH(ds));	// 18367                  push    ds ;~ 075B:0736
cs=0x75b;eip=0x000737; 	X(PUSH(es));	// 18368                  push    es ;~ 075B:0737
cs=0x75b;eip=0x000738; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0C))));	// 18369                  push    word ptr [bp+0Ch] ;~ 075B:0738
cs=0x75b;eip=0x00073b; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0E))));	// 18370                  push    word ptr [bp+0Eh] ;~ 075B:073B
cs=0x75b;eip=0x00073e; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x14))));	// 18371                  mov     cx, [bp+14h] ;~ 075B:073E
cs=0x75b;eip=0x000741; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 18372                  mov     ax, [bp+8] ;~ 075B:0741
cs=0x75b;eip=0x000744; 	T(CMP(ax, cx));	// 18373                  cmp     ax, cx ;~ 075B:0744
cs=0x75b;eip=0x000746; 	J(JGE(loc_162f3));	// 18374                  jge     short loc_162F3 ;~ 075B:0746
cs=0x75b;eip=0x000748; 	T(bx = ax;);	// 18375                  mov     bx, ax ;~ 075B:0748
cs=0x75b;eip=0x00074a; 	T(ADD(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 18376                  add     bx, [bp+0Ch] ;~ 075B:074A
cs=0x75b;eip=0x00074d; 	T(DEC(bx));	// 18377                  dec     bx ;~ 075B:074D
cs=0x75b;eip=0x00074e; 	T(CMP(bx, cx));	// 18378                  cmp     bx, cx ;~ 075B:074E
cs=0x75b;eip=0x000750; 	J(JGE(loc_162e5));	// 18379                  jge     short loc_162E5 ;~ 075B:0750
cs=0x75b;eip=0x000752; 	J(JMP(loc_16351));	// 18380                  jmp     short loc_16351 ;~ 075B:0752
loc_162e5:
	// 4704 
cs=0x75b;eip=0x000755; 	T(SUB(cx, ax));	// 18386                  sub     cx, ax ;~ 075B:0755
cs=0x75b;eip=0x000757; 	X(ADD(*(dw*)(raddr(ss,bp+8)), cx));	// 18387                  add     [bp+8], cx ;~ 075B:0757
cs=0x75b;eip=0x00075a; 	X(ADD(*(dw*)(raddr(ss,bp+2)), cx));	// 18388                  add     [bp+2], cx ;~ 075B:075A
cs=0x75b;eip=0x00075d; 	X(SUB(*(dw*)(raddr(ss,bp+0x0C)), cx));	// 18389                  sub     [bp+0Ch], cx ;~ 075B:075D
cs=0x75b;eip=0x000760; 	J(JMP(loc_162f9));	// 18390                  jmp     short loc_162F9 ;~ 075B:0760
loc_162f3:
	// 4705 
cs=0x75b;eip=0x000763; 	T(bx = ax;);	// 18396                  mov     bx, ax ;~ 075B:0763
cs=0x75b;eip=0x000765; 	T(ADD(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 18397                  add     bx, [bp+0Ch] ;~ 075B:0765
cs=0x75b;eip=0x000768; 	T(DEC(bx));	// 18398                  dec     bx ;~ 075B:0768
loc_162f9:
	// 4706 
cs=0x75b;eip=0x000769; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x16))));	// 18401                  mov     cx, [bp+16h] ;~ 075B:0769
cs=0x75b;eip=0x00076c; 	T(CMP(bx, cx));	// 18402                  cmp     bx, cx ;~ 075B:076C
cs=0x75b;eip=0x00076e; 	J(JLE(loc_1630c));	// 18403                  jle     short loc_1630C ;~ 075B:076E
cs=0x75b;eip=0x000770; 	T(CMP(ax, cx));	// 18404                  cmp     ax, cx ;~ 075B:0770
cs=0x75b;eip=0x000772; 	J(JLE(loc_16307));	// 18405                  jle     short loc_16307 ;~ 075B:0772
cs=0x75b;eip=0x000774; 	J(JMP(loc_16351));	// 18406                  jmp     short loc_16351 ;~ 075B:0774
loc_16307:
	// 4707 
cs=0x75b;eip=0x000777; 	T(SUB(bx, cx));	// 18412                  sub     bx, cx ;~ 075B:0777
cs=0x75b;eip=0x000779; 	X(SUB(*(dw*)(raddr(ss,bp+0x0C)), bx));	// 18413                  sub     [bp+0Ch], bx ;~ 075B:0779
loc_1630c:
	// 4708 
cs=0x75b;eip=0x00077c; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x10))));	// 18416                  mov     cx, [bp+10h] ;~ 075B:077C
cs=0x75b;eip=0x00077f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 18417                  mov     ax, [bp+0Ah] ;~ 075B:077F
cs=0x75b;eip=0x000782; 	T(CMP(ax, cx));	// 18418                  cmp     ax, cx ;~ 075B:0782
cs=0x75b;eip=0x000784; 	J(JGE(loc_16331));	// 18419                  jge     short loc_16331 ;~ 075B:0784
cs=0x75b;eip=0x000786; 	T(bx = ax;);	// 18420                  mov     bx, ax ;~ 075B:0786
cs=0x75b;eip=0x000788; 	T(ADD(bx, *(dw*)(raddr(ss,bp+0x0E))));	// 18421                  add     bx, [bp+0Eh] ;~ 075B:0788
cs=0x75b;eip=0x00078b; 	T(DEC(bx));	// 18422                  dec     bx ;~ 075B:078B
cs=0x75b;eip=0x00078c; 	T(CMP(bx, cx));	// 18423                  cmp     bx, cx ;~ 075B:078C
cs=0x75b;eip=0x00078e; 	J(JGE(loc_16323));	// 18424                  jge     short loc_16323 ;~ 075B:078E
cs=0x75b;eip=0x000790; 	J(JMP(loc_16351));	// 18425                  jmp     short loc_16351 ;~ 075B:0790
loc_16323:
	// 4709 
cs=0x75b;eip=0x000793; 	T(SUB(cx, ax));	// 18431                  sub     cx, ax ;~ 075B:0793
cs=0x75b;eip=0x000795; 	X(ADD(*(dw*)(raddr(ss,bp+0x0A)), cx));	// 18432                  add     [bp+0Ah], cx ;~ 075B:0795
cs=0x75b;eip=0x000798; 	X(ADD(*(dw*)(raddr(ss,bp+4)), cx));	// 18433                  add     [bp+4], cx ;~ 075B:0798
cs=0x75b;eip=0x00079b; 	X(SUB(*(dw*)(raddr(ss,bp+0x0E)), cx));	// 18434                  sub     [bp+0Eh], cx ;~ 075B:079B
cs=0x75b;eip=0x00079e; 	J(JMP(loc_16337));	// 18435                  jmp     short loc_16337 ;~ 075B:079E
loc_16331:
	// 4710 
cs=0x75b;eip=0x0007a1; 	T(bx = ax;);	// 18441                  mov     bx, ax ;~ 075B:07A1
cs=0x75b;eip=0x0007a3; 	T(ADD(bx, *(dw*)(raddr(ss,bp+0x0E))));	// 18442                  add     bx, [bp+0Eh] ;~ 075B:07A3
cs=0x75b;eip=0x0007a6; 	T(DEC(bx));	// 18443                  dec     bx ;~ 075B:07A6
loc_16337:
	// 4711 
cs=0x75b;eip=0x0007a7; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x12))));	// 18446                  mov     cx, [bp+12h] ;~ 075B:07A7
cs=0x75b;eip=0x0007aa; 	T(CMP(bx, cx));	// 18447                  cmp     bx, cx ;~ 075B:07AA
cs=0x75b;eip=0x0007ac; 	J(JLE(loc_1634a));	// 18448                  jle     short loc_1634A ;~ 075B:07AC
cs=0x75b;eip=0x0007ae; 	T(CMP(ax, cx));	// 18449                  cmp     ax, cx ;~ 075B:07AE
cs=0x75b;eip=0x0007b0; 	J(JLE(loc_16345));	// 18450                  jle     short loc_16345 ;~ 075B:07B0
cs=0x75b;eip=0x0007b2; 	J(JMP(loc_16351));	// 18451                  jmp     short loc_16351 ;~ 075B:07B2
loc_16345:
	// 4712 
cs=0x75b;eip=0x0007b5; 	T(SUB(bx, cx));	// 18457                  sub     bx, cx ;~ 075B:07B5
cs=0x75b;eip=0x0007b7; 	X(SUB(*(dw*)(raddr(ss,bp+0x0E)), bx));	// 18458                  sub     [bp+0Eh], bx ;~ 075B:07B7
loc_1634a:
	// 4713 
cs=0x75b;eip=0x0007ba; 	X(PUSH(bp));	// 18461                  push    bp ;~ 075B:07BA
cs=0x75b;eip=0x0007bb; 	J(CALLF(sub_1636b,0));	// 18462                  call    sub_1636B ;~ 075B:07BB
cs=0x75b;eip=0x0007c0; 	X(POP(bp));	// 18463                  pop     bp ;~ 075B:07C0
loc_16351:
	// 4714 
cs=0x75b;eip=0x0007c1; 	X(POP(*(dw*)(raddr(ss,bp+0x0E))));	// 18467                  pop     word ptr [bp+0Eh] ;~ 075B:07C1
cs=0x75b;eip=0x0007c4; 	X(POP(*(dw*)(raddr(ss,bp+0x0C))));	// 18468                  pop     word ptr [bp+0Ch] ;~ 075B:07C4
cs=0x75b;eip=0x0007c7; 	X(POP(es));	// 18469                  pop     es ;~ 075B:07C7
cs=0x75b;eip=0x0007c8; 	X(POP(ds));	// 18471                  pop     ds ;~ 075B:07C8
cs=0x75b;eip=0x0007c9; 	J(RETF(0));	// 18472                  retf ;~ 075B:07C9

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_162e5: 	goto loc_162e5;
        case m2c::kloc_162f3: 	goto loc_162f3;
        case m2c::kloc_162f9: 	goto loc_162f9;
        case m2c::kloc_16307: 	goto loc_16307;
        case m2c::kloc_1630c: 	goto loc_1630c;
        case m2c::kloc_16323: 	goto loc_16323;
        case m2c::kloc_16331: 	goto loc_16331;
        case m2c::kloc_16337: 	goto loc_16337;
        case m2c::kloc_16345: 	goto loc_16345;
        case m2c::kloc_1634a: 	goto loc_1634a;
        case m2c::kloc_16351: 	goto loc_16351;
        case m2c::ksub_162c6: 	goto sub_162c6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg004_7ca_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg004_7ca_proc:
    _begin:
cs=0x75b;eip=0x0007ca; 	X(PUSH(bp));	// 18476                  push    bp ;~ 075B:07CA
cs=0x75b;eip=0x0007cb; 	T(bp = sp;);	// 18477                  mov     bp, sp ;~ 075B:07CB
cs=0x75b;eip=0x0007cd; 	X(PUSH(si));	// 18478                  push    si ;~ 075B:07CD
cs=0x75b;eip=0x0007ce; 	X(PUSH(di));	// 18479                  push    di ;~ 075B:07CE
cs=0x75b;eip=0x0007cf; 	T(MOV(bp, *(dw*)(raddr(ss,bp+6))));	// 18480                  mov     bp, [bp+6] ;~ 075B:07CF
cs=0x75b;eip=0x0007d2; 	J(CALLF(sub_1636b,0));	// 18481                  call    sub_1636B ;~ 075B:07D2
cs=0x75b;eip=0x0007d7; 	X(POP(di));	// 18482                  pop     di ;~ 075B:07D7
cs=0x75b;eip=0x0007d8; 	X(POP(si));	// 18483                  pop     si ;~ 075B:07D8
cs=0x75b;eip=0x0007d9; 	X(POP(bp));	// 18484                  pop     bp ;~ 075B:07D9
cs=0x75b;eip=0x0007da; 	J(RETF(0));	// 18485                  retf ;~ 075B:07DA

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg004_7ca_proc: 	goto seg004_7ca_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1636b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1636b:
    _begin:
cs=0x75b;eip=0x0007db; 	X(PUSH(ds));	// 18492                  push    ds ;~ 075B:07DB
cs=0x75b;eip=0x0007dc; 	X(PUSH(es));	// 18493                  push    es ;~ 075B:07DC
cs=0x75b;eip=0x0007dd; 	X(PUSH(bp));	// 18494                  push    bp ;~ 075B:07DD
cs=0x75b;eip=0x0007de; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 18495                  mov     ax, [bp+0] ;~ 075B:07DE
cs=0x75b;eip=0x0007e1; 	T(ds = ax;);	// 18496                  mov     ds, ax ;~ 075B:07E1
cs=0x75b;eip=0x0007e3; 	T(MOV(di, *(dw*)(raddr(ss,bp+6))));	// 18498                  mov     di, [bp+6] ;~ 075B:07E3
cs=0x75b;eip=0x0007e6; 	T(SHL(di, 1));	// 18499                  shl     di, 1 ;~ 075B:07E6
cs=0x75b;eip=0x0007e8; 	T(MOV(es, *(dw*)(raddr(cs,di+0x681))));	// 18500                  mov     es, word ptr cs:[di+681h] ;~ 075B:07E8
cs=0x75b;eip=0x0007ed; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 18501                  mov     bx, [bp+0Ch] ;~ 075B:07ED
cs=0x75b;eip=0x0007f0; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0E))));	// 18502                  mov     cx, [bp+0Eh] ;~ 075B:07F0
cs=0x75b;eip=0x0007f3; 	T(MOV(dx, *(dw*)(raddr(ss,bp+8))));	// 18503                  mov     dx, [bp+8] ;~ 075B:07F3
cs=0x75b;eip=0x0007f6; 	T(MOV(si, *(dw*)(raddr(ss,bp+4))));	// 18504                  mov     si, [bp+4] ;~ 075B:07F6
cs=0x75b;eip=0x0007f9; 	T(SHL(si, 1));	// 18505                  shl     si, 1 ;~ 075B:07F9
cs=0x75b;eip=0x0007fb; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0A))));	// 18506                  mov     di, [bp+0Ah] ;~ 075B:07FB
cs=0x75b;eip=0x0007fe; 	T(SHL(di, 1));	// 18507                  shl     di, 1 ;~ 075B:07FE
cs=0x75b;eip=0x000800; 	T(MOV(bp, *(dw*)(raddr(ss,bp+2))));	// 18508                  mov     bp, [bp+2] ;~ 075B:0800
loc_16393:
	// 4715 
cs=0x75b;eip=0x000803; 	X(PUSH(si));	// 18511                  push    si ;~ 075B:0803
cs=0x75b;eip=0x000804; 	X(PUSH(di));	// 18512                  push    di ;~ 075B:0804
cs=0x75b;eip=0x000805; 	X(PUSH(cx));	// 18513                  push    cx ;~ 075B:0805
cs=0x75b;eip=0x000806; 	T(cx = bx;);	// 18514                  mov     cx, bx ;~ 075B:0806
cs=0x75b;eip=0x000808; 	T(MOV(si, *(dw*)(raddr(cs,si+0x0E))));	// 18515                  mov     si, cs:[si+0Eh] ;~ 075B:0808
cs=0x75b;eip=0x00080d; 	T(ADD(si, bp));	// 18516                  add     si, bp ;~ 075B:080D
cs=0x75b;eip=0x00080f; 	T(MOV(di, *(dw*)(raddr(cs,di+0x0E))));	// 18517                  mov     di, cs:[di+0Eh] ;~ 075B:080F
cs=0x75b;eip=0x000814; 	T(ADD(di, dx));	// 18518                  add     di, dx ;~ 075B:0814
loc_163a6:
	// 4716 
cs=0x75b;eip=0x000816; 	T(LODSB);	// 18521                  lodsb ;~ 075B:0816
cs=0x75b;eip=0x000817; 	T(OR(al, al));	// 18522                  or      al, al ;~ 075B:0817
cs=0x75b;eip=0x000819; 	J(JZ(loc_163ae));	// 18523                  jz      short loc_163AE ;~ 075B:0819
cs=0x75b;eip=0x00081b; 	X(MOV(*(raddr(es,di)), al));	// 18524                  mov     es:[di], al ;~ 075B:081B
loc_163ae:
	// 4717 
cs=0x75b;eip=0x00081e; 	T(INC(di));	// 18527                  inc     di ;~ 075B:081E
cs=0x75b;eip=0x00081f; 	J(LOOP(loc_163a6));	// 18528                  loop    loc_163A6 ;~ 075B:081F
cs=0x75b;eip=0x000821; 	X(POP(cx));	// 18529                  pop     cx ;~ 075B:0821
cs=0x75b;eip=0x000822; 	X(POP(di));	// 18530                  pop     di ;~ 075B:0822
cs=0x75b;eip=0x000823; 	X(POP(si));	// 18531                  pop     si ;~ 075B:0823
cs=0x75b;eip=0x000824; 	T(ADD(di, 2));	// 18532                  add     di, 2 ;~ 075B:0824
cs=0x75b;eip=0x000827; 	T(ADD(si, 2));	// 18533                  add     si, 2 ;~ 075B:0827
cs=0x75b;eip=0x00082a; 	J(LOOP(loc_16393));	// 18534                  loop    loc_16393 ;~ 075B:082A
cs=0x75b;eip=0x00082c; 	X(POP(bp));	// 18535                  pop     bp ;~ 075B:082C
cs=0x75b;eip=0x00082d; 	X(POP(es));	// 18536                  pop     es ;~ 075B:082D
cs=0x75b;eip=0x00082e; 	X(POP(ds));	// 18537                  pop     ds ;~ 075B:082E
cs=0x75b;eip=0x00082f; 	J(RETF(0));	// 18539                  retf ;~ 075B:082F

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_16393: 	goto loc_16393;
        case m2c::kloc_163a6: 	goto loc_163a6;
        case m2c::kloc_163ae: 	goto loc_163ae;
        case m2c::ksub_1636b: 	goto sub_1636b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg004_830_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg004_830_proc:
    _begin:
cs=0x75b;eip=0x000830; 	X(PUSH(ds));	// 18543                  push    ds ;~ 075B:0830
cs=0x75b;eip=0x000831; 	X(PUSH(es));	// 18544                  push    es ;~ 075B:0831
cs=0x75b;eip=0x000832; 	T(dx = seg_offset(seg003););	// 18545                  mov     dx, seg seg003 ;~ 075B:0832
cs=0x75b;eip=0x000835; 	T(ds = dx;);	// 18546                  mov     ds, dx ;~ 075B:0835
cs=0x75b;eip=0x000837; 	T(es = word_15d2e;);	// 18548                  mov     es, cs:word_15D2E ;~ 075B:0837
cs=0x75b;eip=0x00083c; 	T(OR(ax, ax));	// 18550                  or      ax, ax ;~ 075B:083C
cs=0x75b;eip=0x00083e; 	J(JS(loc_1641c));	// 18551                  js      short loc_1641C ;~ 075B:083E
cs=0x75b;eip=0x000840; 	T(dx = ax;);	// 18552                  mov     dx, ax ;~ 075B:0840
cs=0x75b;eip=0x000842; 	T(SHL(dx, 1));	// 18553                  shl     dx, 1 ;~ 075B:0842
cs=0x75b;eip=0x000844; 	T(si = cx;);	// 18554                  mov     si, cx ;~ 075B:0844
cs=0x75b;eip=0x000846; 	T(SHL(si, 1));	// 18555                  shl     si, 1 ;~ 075B:0846
cs=0x75b;eip=0x000848; 	T(al = byte_15a0a;);	// 18556                  mov     al, byte_15A0A ;~ 075B:0848
cs=0x75b;eip=0x00084b; 	T(ah = al;);	// 18557                  mov     ah, al ;~ 075B:084B
loc_163dd:
	// 4718 
cs=0x75b;eip=0x00084d; 	T(MOV(bp, *(dw*)(raddr(ss,bx+si))));	// 18560                  mov     bp, ss:[bx+si] ;~ 075B:084D
cs=0x75b;eip=0x000850; 	T(MOV(cx, *(dw*)(raddr(ss,bx+si+0x1B8))));	// 18561                  mov     cx, ss:[bx+si+1B8h] ;~ 075B:0850
cs=0x75b;eip=0x000855; 	T(CMP(cx, bp));	// 18562                  cmp     cx, bp ;~ 075B:0855
cs=0x75b;eip=0x000857; 	J(JC(loc_16415));	// 18563                  jb      short loc_16415 ;~ 075B:0857
cs=0x75b;eip=0x000859; 	J(JA(loc_163f5));	// 18564                  ja      short loc_163F5 ;~ 075B:0859
cs=0x75b;eip=0x00085b; 	T(OR(cx, cx));	// 18566                  or      cx, cx ;~ 075B:085B
cs=0x75b;eip=0x00085d; 	J(JZ(loc_16415));	// 18567                  jz      short loc_16415 ;~ 075B:085D
cs=0x75b;eip=0x00085f; 	T(CMP(cx, 0x13F));	// 18568                  cmp     cx, 13Fh ;~ 075B:085F
cs=0x75b;eip=0x000863; 	J(JZ(loc_16415));	// 18569                  jz      short loc_16415 ;~ 075B:0863
loc_163f5:
	// 4719 
cs=0x75b;eip=0x000865; 	T(SUB(cx, bp));	// 18572                  sub     cx, bp ;~ 075B:0865
cs=0x75b;eip=0x000867; 	T(INC(cx));	// 18573                  inc     cx ;~ 075B:0867
cs=0x75b;eip=0x000868; 	T(MOV(di, *(dw*)(raddr(cs,si+0x0E))));	// 18574                  mov     di, cs:[si+0Eh] ;~ 075B:0868
cs=0x75b;eip=0x00086d; 	T(ADD(di, word_15d30));	// 18575                  add     di, cs:word_15D30 ;~ 075B:086D
cs=0x75b;eip=0x000872; 	T(ADD(di, bp));	// 18576                  add     di, bp ;~ 075B:0872
cs=0x75b;eip=0x000874; 	T(TEST(di, 1));	// 18577                  test    di, 1 ;~ 075B:0874
cs=0x75b;eip=0x000878; 	J(JZ(loc_1640e));	// 18578                  jz      short loc_1640E ;~ 075B:0878
cs=0x75b;eip=0x00087a; 	X(STOSB);	// 18579                  stosb ;~ 075B:087A
cs=0x75b;eip=0x00087b; 	T(DEC(cx));	// 18580                  dec     cx ;~ 075B:087B
cs=0x75b;eip=0x00087c; 	J(JZ(loc_16415));	// 18581                  jz      short loc_16415 ;~ 075B:087C
loc_1640e:
	// 4720 
cs=0x75b;eip=0x00087e; 	T(SHR(cx, 1));	// 18584                  shr     cx, 1 ;~ 075B:087E
	// 18585                  rep stosw ;~ 075B:0880
cs=0x75b;eip=0x000880; 	X(	REP STOSW);	// 18585                  rep stosw ;~ 075B:0880
cs=0x75b;eip=0x000882; 	J(JNC(loc_16415));	// 18586                  jnb     short loc_16415 ;~ 075B:0882
cs=0x75b;eip=0x000884; 	X(STOSB);	// 18587                  stosb ;~ 075B:0884
loc_16415:
	// 4721 
cs=0x75b;eip=0x000885; 	T(SUB(si, 2));	// 18591                  sub     si, 2 ;~ 075B:0885
cs=0x75b;eip=0x000888; 	T(CMP(si, dx));	// 18592                  cmp     si, dx ;~ 075B:0888
cs=0x75b;eip=0x00088a; 	J(JGE(loc_163dd));	// 18593                  jge     short loc_163DD ;~ 075B:088A
loc_1641c:
	// 4722 
cs=0x75b;eip=0x00088c; 	X(POP(es));	// 18596                  pop     es ;~ 075B:088C
cs=0x75b;eip=0x00088d; 	X(POP(ds));	// 18598                  pop     ds ;~ 075B:088D
cs=0x75b;eip=0x00088e; 	J(RETF(0));	// 18600                  retf ;~ 075B:088E
ret_75b_88f:
	// 4723 
cs=0x75b;eip=0x00088f; 	T(cx = 0x7D00;);	// 18602                  mov     cx, 7D00h ;~ 075B:088F
cs=0x75b;eip=0x000892; 	T(XOR(ax, ax));	// 18603                  xor     ax, ax ;~ 075B:0892
cs=0x75b;eip=0x000894; 	T(XOR(di, di));	// 18604                  xor     di, di ;~ 075B:0894
	// 18605                  rep stosw ;~ 075B:0896
cs=0x75b;eip=0x000896; 	X(	REP STOSW);	// 18605                  rep stosw ;~ 075B:0896
cs=0x75b;eip=0x000898; 	J(RETF(0));	// 18606                  retf ;~ 075B:0898
ret_75b_8a8:
	// 4724 
cs=0x75b;eip=0x0008a8; 	X(PUSH(bp));	// 18624                  push    bp ;~ 075B:08A8
cs=0x75b;eip=0x0008a9; 	T(bp = sp;);	// 18625                  mov     bp, sp ;~ 075B:08A9
cs=0x75b;eip=0x0008ab; 	X(PUSH(ds));	// 18626                  push    ds ;~ 075B:08AB
cs=0x75b;eip=0x0008ac; 	X(PUSH(es));	// 18627                  push    es ;~ 075B:08AC
cs=0x75b;eip=0x0008ad; 	X(PUSH(si));	// 18628                  push    si ;~ 075B:08AD
cs=0x75b;eip=0x0008ae; 	X(PUSH(di));	// 18629                  push    di ;~ 075B:08AE
cs=0x75b;eip=0x0008af; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 18630                  mov     bx, [bp+6] ;~ 075B:08AF
cs=0x75b;eip=0x0008b2; 	T(SHL(bx, 1));	// 18631                  shl     bx, 1 ;~ 075B:08B2
cs=0x75b;eip=0x0008b4; 	T(MOV(ds, *(dw*)(raddr(cs,bx+0x681))));	// 18632                  mov     ds, word ptr cs:[bx+681h] ;~ 075B:08B4
cs=0x75b;eip=0x0008b9; 	T(MOV(si, *(dw*)(raddr(ss,bp+0x0A))));	// 18634                  mov     si, [bp+0Ah] ;~ 075B:08B9
cs=0x75b;eip=0x0008bc; 	T(SHL(si, 1));	// 18635                  shl     si, 1 ;~ 075B:08BC
cs=0x75b;eip=0x0008be; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 18636                  mov     bx, [bp+0Ch] ;~ 075B:08BE
cs=0x75b;eip=0x0008c1; 	T(SHL(bx, 1));	// 18637                  shl     bx, 1 ;~ 075B:08C1
cs=0x75b;eip=0x0008c3; 	T(MOV(es, *(dw*)(raddr(cs,bx+0x681))));	// 18638                  mov     es, word ptr cs:[bx+681h] ;~ 075B:08C3
cs=0x75b;eip=0x0008c8; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x0E))));	// 18639                  mov     dx, [bp+0Eh] ;~ 075B:08C8
cs=0x75b;eip=0x0008cb; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x10))));	// 18640                  mov     di, [bp+10h] ;~ 075B:08CB
cs=0x75b;eip=0x0008ce; 	T(SHL(di, 1));	// 18641                  shl     di, 1 ;~ 075B:08CE
cs=0x75b;eip=0x0008d0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x12))));	// 18642                  mov     bx, [bp+12h] ;~ 075B:08D0
cs=0x75b;eip=0x0008d3; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x14))));	// 18643                  mov     cx, [bp+14h] ;~ 075B:08D3
cs=0x75b;eip=0x0008d6; 	T(MOV(bp, *(dw*)(raddr(ss,bp+8))));	// 18644                  mov     bp, [bp+8] ;~ 075B:08D6
loc_16469:
	// 4725 
cs=0x75b;eip=0x0008d9; 	X(PUSH(si));	// 18647                  push    si ;~ 075B:08D9
cs=0x75b;eip=0x0008da; 	X(PUSH(di));	// 18648                  push    di ;~ 075B:08DA
cs=0x75b;eip=0x0008db; 	X(PUSH(cx));	// 18649                  push    cx ;~ 075B:08DB
cs=0x75b;eip=0x0008dc; 	T(MOV(si, *(dw*)(raddr(cs,si+0x0E))));	// 18650                  mov     si, cs:[si+0Eh] ;~ 075B:08DC
cs=0x75b;eip=0x0008e1; 	T(ADD(si, bp));	// 18651                  add     si, bp ;~ 075B:08E1
cs=0x75b;eip=0x0008e3; 	T(MOV(di, *(dw*)(raddr(cs,di+0x0E))));	// 18652                  mov     di, cs:[di+0Eh] ;~ 075B:08E3
cs=0x75b;eip=0x0008e8; 	T(ADD(di, dx));	// 18653                  add     di, dx ;~ 075B:08E8
cs=0x75b;eip=0x0008ea; 	T(cx = bx;);	// 18654                  mov     cx, bx ;~ 075B:08EA
	// 18655                  rep movsb ;~ 075B:08EC
cs=0x75b;eip=0x0008ec; 	X(	REP MOVSB);	// 18655                  rep movsb ;~ 075B:08EC
cs=0x75b;eip=0x0008ee; 	X(POP(cx));	// 18656                  pop     cx ;~ 075B:08EE
cs=0x75b;eip=0x0008ef; 	X(POP(di));	// 18657                  pop     di ;~ 075B:08EF
cs=0x75b;eip=0x0008f0; 	X(POP(si));	// 18658                  pop     si ;~ 075B:08F0
cs=0x75b;eip=0x0008f1; 	T(ADD(di, 2));	// 18659                  add     di, 2 ;~ 075B:08F1
cs=0x75b;eip=0x0008f4; 	T(ADD(si, 2));	// 18660                  add     si, 2 ;~ 075B:08F4
cs=0x75b;eip=0x0008f7; 	J(LOOP(loc_16469));	// 18661                  loop    loc_16469 ;~ 075B:08F7
cs=0x75b;eip=0x0008f9; 	X(POP(di));	// 18662                  pop     di ;~ 075B:08F9
cs=0x75b;eip=0x0008fa; 	X(POP(si));	// 18663                  pop     si ;~ 075B:08FA
cs=0x75b;eip=0x0008fb; 	X(POP(es));	// 18664                  pop     es ;~ 075B:08FB
cs=0x75b;eip=0x0008fc; 	X(POP(ds));	// 18665                  pop     ds ;~ 075B:08FC
cs=0x75b;eip=0x0008fd; 	X(POP(bp));	// 18667                  pop     bp ;~ 075B:08FD
cs=0x75b;eip=0x0008fe; 	J(RETF(0));	// 18668                  retf ;~ 075B:08FE
ret_75b_8ff:
	// 4726 
cs=0x75b;eip=0x0008ff; 	X(PUSH(bp));	// 18671                  push    bp ;~ 075B:08FF
cs=0x75b;eip=0x000900; 	T(bp = sp;);	// 18672                  mov     bp, sp ;~ 075B:0900
cs=0x75b;eip=0x000902; 	X(PUSH(ds));	// 18673                  push    ds ;~ 075B:0902
cs=0x75b;eip=0x000903; 	X(PUSH(es));	// 18674                  push    es ;~ 075B:0903
cs=0x75b;eip=0x000904; 	X(PUSH(si));	// 18675                  push    si ;~ 075B:0904
cs=0x75b;eip=0x000905; 	X(PUSH(di));	// 18676                  push    di ;~ 075B:0905
cs=0x75b;eip=0x000906; 	T(dx = seg_offset(seg003););	// 18677                  mov     dx, seg seg003 ;~ 075B:0906
cs=0x75b;eip=0x000909; 	T(ds = dx;);	// 18678                  mov     ds, dx ;~ 075B:0909
cs=0x75b;eip=0x00090b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 18680                  mov     bx, [bp+6] ;~ 075B:090B
cs=0x75b;eip=0x00090e; 	T(MOV(bx, *(dw*)(raddr(ss,bx))));	// 18681                  mov     bx, ss:[bx] ;~ 075B:090E
cs=0x75b;eip=0x000911; 	T(SHL(bx, 1));	// 18682                  shl     bx, 1 ;~ 075B:0911
cs=0x75b;eip=0x000913; 	T(MOV(es, *(dw*)(raddr(cs,bx+0x681))));	// 18683                  mov     es, word ptr cs:[bx+681h] ;~ 075B:0913
cs=0x75b;eip=0x000918; 	T(MOV(si, *(dw*)(raddr(ss,bp+0x0A))));	// 18685                  mov     si, [bp+0Ah] ;~ 075B:0918
cs=0x75b;eip=0x00091b; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0E))));	// 18686                  mov     cx, [bp+0Eh] ;~ 075B:091B
cs=0x75b;eip=0x00091e; 	T(SUB(cx, si));	// 18687                  sub     cx, si ;~ 075B:091E
cs=0x75b;eip=0x000920; 	T(INC(cx));	// 18688                  inc     cx ;~ 075B:0920
cs=0x75b;eip=0x000921; 	T(SHL(si, 1));	// 18689                  shl     si, 1 ;~ 075B:0921
cs=0x75b;eip=0x000923; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 18690                  mov     di, [bp+8] ;~ 075B:0923
cs=0x75b;eip=0x000926; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 18691                  mov     bx, [bp+0Ch] ;~ 075B:0926
cs=0x75b;eip=0x000929; 	T(SUB(bx, di));	// 18692                  sub     bx, di ;~ 075B:0929
cs=0x75b;eip=0x00092b; 	T(INC(bx));	// 18693                  inc     bx ;~ 075B:092B
cs=0x75b;eip=0x00092c; 	T(MOV(ah, *(raddr(ss,bp+0x10))));	// 18694                  mov     ah, [bp+10h] ;~ 075B:092C
cs=0x75b;eip=0x00092f; 	T(MOV(al, *(raddr(ss,bp+0x12))));	// 18695                  mov     al, [bp+12h] ;~ 075B:092F
loc_164c2:
	// 4727 
cs=0x75b;eip=0x000932; 	X(PUSH(cx));	// 18698                  push    cx ;~ 075B:0932
cs=0x75b;eip=0x000933; 	X(PUSH(di));	// 18699                  push    di ;~ 075B:0933
cs=0x75b;eip=0x000934; 	T(ADD(di, *(dw*)(raddr(cs,si+0x0E))));	// 18700                  add     di, cs:[si+0Eh] ;~ 075B:0934
cs=0x75b;eip=0x000939; 	T(cx = bx;);	// 18701                  mov     cx, bx ;~ 075B:0939
loc_164cb:
	// 4728 
cs=0x75b;eip=0x00093b; 	T(CMP(ah, *(raddr(es,di))));	// 18704                  cmp     ah, es:[di] ;~ 075B:093B
cs=0x75b;eip=0x00093e; 	J(JNZ(loc_164d3));	// 18705                  jnz     short loc_164D3 ;~ 075B:093E
cs=0x75b;eip=0x000940; 	X(MOV(*(raddr(es,di)), al));	// 18706                  mov     es:[di], al ;~ 075B:0940
loc_164d3:
	// 4729 
cs=0x75b;eip=0x000943; 	T(INC(di));	// 18709                  inc     di ;~ 075B:0943
cs=0x75b;eip=0x000944; 	J(LOOP(loc_164cb));	// 18710                  loop    loc_164CB ;~ 075B:0944
cs=0x75b;eip=0x000946; 	X(POP(di));	// 18711                  pop     di ;~ 075B:0946
cs=0x75b;eip=0x000947; 	X(POP(cx));	// 18712                  pop     cx ;~ 075B:0947
cs=0x75b;eip=0x000948; 	T(ADD(si, 2));	// 18713                  add     si, 2 ;~ 075B:0948
cs=0x75b;eip=0x00094b; 	J(LOOP(loc_164c2));	// 18714                  loop    loc_164C2 ;~ 075B:094B
cs=0x75b;eip=0x00094d; 	X(POP(di));	// 18715                  pop     di ;~ 075B:094D
cs=0x75b;eip=0x00094e; 	X(POP(si));	// 18716                  pop     si ;~ 075B:094E
cs=0x75b;eip=0x00094f; 	X(POP(es));	// 18717                  pop     es ;~ 075B:094F
cs=0x75b;eip=0x000950; 	X(POP(ds));	// 18719                  pop     ds ;~ 075B:0950
cs=0x75b;eip=0x000951; 	X(POP(bp));	// 18721                  pop     bp ;~ 075B:0951
cs=0x75b;eip=0x000952; 	J(RETF(0));	// 18722                  retf ;~ 075B:0952
ret_75b_953:
	// 4730 
cs=0x75b;eip=0x000953; 	T(bx = sp;);	// 18724                  mov     bx, sp ;~ 075B:0953
cs=0x75b;eip=0x000955; 	X(PUSH(ds));	// 18725                  push    ds ;~ 075B:0955
cs=0x75b;eip=0x000956; 	X(PUSH(es));	// 18726                  push    es ;~ 075B:0956
cs=0x75b;eip=0x000957; 	T(MOV(ds, *(dw*)(raddr(ss,bx+4))));	// 18727                  mov     ds, word ptr ss:[bx+4] ;~ 075B:0957
cs=0x75b;eip=0x00095b; 	T(es = word_15d2e;);	// 18729                  mov     es, cs:word_15D2E ;~ 075B:095B
cs=0x75b;eip=0x000960; 	J(JMP(loc_16505));	// 18731                  jmp     short loc_16505 ;~ 075B:0960
ret_75b_963:
	// 4731 
cs=0x75b;eip=0x000963; 	X(PUSH(ds));	// 18736                  push    ds ;~ 075B:0963
cs=0x75b;eip=0x000964; 	X(PUSH(es));	// 18737                  push    es ;~ 075B:0964
cs=0x75b;eip=0x000965; 	X(byte_15d32 = 1;);	// 18738                  mov     cs:byte_15D32, 1 ;~ 075B:0965
cs=0x75b;eip=0x00096b; 	T(ds = *(dw*)(seg_16213););	// 18739                  mov     ds, word ptr cs:seg_16213 ;~ 075B:096B
cs=0x75b;eip=0x000970; 	T(es = word_16211;);	// 18741                  mov     es, cs:word_16211 ;~ 075B:0970
loc_16505:
	// 4732 
cs=0x75b;eip=0x000975; 	X(PUSH(si));	// 18745                  push    si ;~ 075B:0975
cs=0x75b;eip=0x000976; 	X(PUSH(di));	// 18746                  push    di ;~ 075B:0976
cs=0x75b;eip=0x000977; 	T(XOR(si, si));	// 18747                  xor     si, si ;~ 075B:0977
cs=0x75b;eip=0x000979; 	T(XOR(di, di));	// 18748                  xor     di, di ;~ 075B:0979
cs=0x75b;eip=0x00097b; 	T(cx = 0x7D00;);	// 18749                  mov     cx, 7D00h ;~ 075B:097B
	// 18750                  rep movsw ;~ 075B:097E
cs=0x75b;eip=0x00097e; 	X(	REP MOVSW);	// 18750                  rep movsw ;~ 075B:097E
cs=0x75b;eip=0x000980; 	X(POP(di));	// 18751                  pop     di ;~ 075B:0980
cs=0x75b;eip=0x000981; 	X(POP(si));	// 18752                  pop     si ;~ 075B:0981
cs=0x75b;eip=0x000982; 	X(POP(es));	// 18753                  pop     es ;~ 075B:0982
cs=0x75b;eip=0x000983; 	X(POP(ds));	// 18755                  pop     ds ;~ 075B:0983
cs=0x75b;eip=0x000984; 	J(RETF(0));	// 18757                  retf ;~ 075B:0984
ret_75b_985:
	// 4733 
cs=0x75b;eip=0x000985; 	T(bx = sp;);	// 18759                  mov     bx, sp ;~ 075B:0985
cs=0x75b;eip=0x000987; 	X(PUSH(ds));	// 18760                  push    ds ;~ 075B:0987
cs=0x75b;eip=0x000988; 	X(PUSH(es));	// 18761                  push    es ;~ 075B:0988
cs=0x75b;eip=0x000989; 	T(MOV(ds, *(dw*)(raddr(ss,bx+4))));	// 18762                  mov     ds, word ptr ss:[bx+4] ;~ 075B:0989
cs=0x75b;eip=0x00098d; 	T(es = word_15d2e;);	// 18764                  mov     es, cs:word_15D2E ;~ 075B:098D
cs=0x75b;eip=0x000992; 	T(bx = 1;);	// 18766                  mov     bx, 1 ;~ 075B:0992
cs=0x75b;eip=0x000995; 	T(cx = 0x0FA00;);	// 18767                  mov     cx, 0FA00h ;~ 075B:0995
loc_16528:
	// 4734 
cs=0x75b;eip=0x000998; 	T(SHR(bx, 1));	// 18771                  shr     bx, 1 ;~ 075B:0998
cs=0x75b;eip=0x00099a; 	J(JNC(loc_16530));	// 18772                  jnb     short loc_16530 ;~ 075B:099A
cs=0x75b;eip=0x00099c; 	T(XOR(bx, 0x0B400));	// 18773                  xor     bx, 0B400h ;~ 075B:099C
loc_16530:
	// 4735 
cs=0x75b;eip=0x0009a0; 	T(CMP(bx, 0x0FA00));	// 18776                  cmp     bx, 0FA00h ;~ 075B:09A0
cs=0x75b;eip=0x0009a4; 	J(JA(loc_16528));	// 18777                  ja      short loc_16528 ;~ 075B:09A4
cs=0x75b;eip=0x0009a6; 	T(DEC(bx));	// 18778                  dec     bx ;~ 075B:09A6
cs=0x75b;eip=0x0009a7; 	T(MOV(al, *(raddr(ds,bx))));	// 18779                  mov     al, [bx] ;~ 075B:09A7
cs=0x75b;eip=0x0009a9; 	X(MOV(*(raddr(es,bx)), al));	// 18780                  mov     es:[bx], al ;~ 075B:09A9
cs=0x75b;eip=0x0009ac; 	T(INC(bx));	// 18781                  inc     bx ;~ 075B:09AC
cs=0x75b;eip=0x0009ad; 	J(LOOP(loc_16528));	// 18782                  loop    loc_16528 ;~ 075B:09AD
cs=0x75b;eip=0x0009af; 	X(POP(es));	// 18783                  pop     es ;~ 075B:09AF
cs=0x75b;eip=0x0009b0; 	X(POP(ds));	// 18785                  pop     ds ;~ 075B:09B0
cs=0x75b;eip=0x0009b1; 	J(RETF(0));	// 18786                  retf ;~ 075B:09B1

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_163dd: 	goto loc_163dd;
        case m2c::kloc_163f5: 	goto loc_163f5;
        case m2c::kloc_1640e: 	goto loc_1640e;
        case m2c::kloc_16415: 	goto loc_16415;
        case m2c::kloc_1641c: 	goto loc_1641c;
        case m2c::kloc_16469: 	goto loc_16469;
        case m2c::kloc_164c2: 	goto loc_164c2;
        case m2c::kloc_164cb: 	goto loc_164cb;
        case m2c::kloc_164d3: 	goto loc_164d3;
        case m2c::kloc_16505: 	goto loc_16505;
        case m2c::kloc_16528: 	goto loc_16528;
        case m2c::kloc_16530: 	goto loc_16530;
        case m2c::kret_75b_88f: 	goto ret_75b_88f;
        case m2c::kret_75b_8a8: 	goto ret_75b_8a8;
        case m2c::kret_75b_8ff: 	goto ret_75b_8ff;
        case m2c::kret_75b_953: 	goto ret_75b_953;
        case m2c::kret_75b_963: 	goto ret_75b_963;
        case m2c::kret_75b_985: 	goto ret_75b_985;
        case m2c::kseg004_830_proc: 	goto seg004_830_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}


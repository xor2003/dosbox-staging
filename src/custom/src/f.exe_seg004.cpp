/* THIS IS GENERATED FILE */

        
#include "f.exe.h"

                

 bool seg004_1a3_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg004_1a3_proc:
    _begin:
cs=0x75b;eip=0x0001a3; 	X(PUSH(bp));	// 16815                  push    bp ;~ 075B:01A3
cs=0x75b;eip=0x0001a4; 	T(bp = sp;);	// 16816                  mov     bp, sp ;~ 075B:01A4
cs=0x75b;eip=0x0001a6; 	X(PUSH(di));	// 16817                  push    di ;~ 075B:01A6
cs=0x75b;eip=0x0001a7; 	X(PUSH(ds));	// 16818                  push    ds ;~ 075B:01A7
cs=0x75b;eip=0x0001a8; 	T(ax = seg_offset(seg003););	// 16819                  mov     ax, seg seg003 ;~ 075B:01A8
cs=0x75b;eip=0x0001ab; 	T(ds = ax;);	// 16820                  mov     ds, ax ;~ 075B:01AB
cs=0x75b;eip=0x0001ad; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 16822                  mov     di, [bp+8] ;~ 075B:01AD
cs=0x75b;eip=0x0001b0; 	T(SHL(di, 1));	// 16823                  shl     di, 1 ;~ 075B:01B0
cs=0x75b;eip=0x0001b2; 	T(MOV(bx, *(dw*)(raddr(ds,di+0x0E2))));	// 16824                  mov     bx, [di+0E2h] ;~ 075B:01B2
cs=0x75b;eip=0x0001b6; 	T(MOV(di, *(dw*)(raddr(ss,bp+6))));	// 16825                  mov     di, [bp+6] ;~ 075B:01B6
cs=0x75b;eip=0x0001b9; 	T(CMP(di, 0x80));	// 16826                  cmp     di, 80h ;~ 075B:01B9
cs=0x75b;eip=0x0001bd; 	J(JC(loc_15d55));	// 16827                  jb      short loc_15D55 ;~ 075B:01BD
cs=0x75b;eip=0x0001bf; 	T(ax = 0;);	// 16828                  mov     ax, 0 ;~ 075B:01BF
cs=0x75b;eip=0x0001c2; 	J(JMP(loc_15d59));	// 16829                  jmp     short loc_15D59 ;~ 075B:01C2
loc_15d55:
	// 4675 
cs=0x75b;eip=0x0001c5; 	T(MOV(al, *(raddr(ds,bx+di))));	// 16835                  mov     al, [bx+di] ;~ 075B:01C5
cs=0x75b;eip=0x0001c7; 	T(SUB(ah, ah));	// 16836                  sub     ah, ah ;~ 075B:01C7
loc_15d59:
	// 4676 
cs=0x75b;eip=0x0001c9; 	X(POP(ds));	// 16839                  pop     ds ;~ 075B:01C9
cs=0x75b;eip=0x0001ca; 	X(POP(di));	// 16841                  pop     di ;~ 075B:01CA
cs=0x75b;eip=0x0001cb; 	T(sp = bp;);	// 16842                  mov     sp, bp ;~ 075B:01CB
cs=0x75b;eip=0x0001cd; 	X(POP(bp));	// 16843                  pop     bp ;~ 075B:01CD
cs=0x75b;eip=0x0001ce; 	J(RETF(0));	// 16844                  retf ;~ 075B:01CE
ret_75b_1cf:
	// 4677 
cs=0x75b;eip=0x0001cf; 	J(RETF(0));	// 16846                  retf ;~ 075B:01CF
ret_75b_1d0:
	// 4678 
cs=0x75b;eip=0x0001d0; 	J(RETF(0));	// 16848                  retf ;~ 075B:01D0
ret_75b_1d1:
	// 4679 
cs=0x75b;eip=0x0001d1; 	J(RETF(0));	// 16851                  retf ;~ 075B:01D1
ret_75b_1e0:
	// 4680 
cs=0x75b;eip=0x0001e0; 	T(ax = word_15d62;);	// 16862                  mov     ax, cs:word_15D62 ;~ 075B:01E0
cs=0x75b;eip=0x0001e4; 	J(RETF(0));	// 16863                  retf ;~ 075B:01E4
ret_75b_1e5:
	// 4681 
cs=0x75b;eip=0x0001e5; 	J(RETF(0));	// 16865                  retf ;~ 075B:01E5
ret_75b_1e6:
	// 4682 
cs=0x75b;eip=0x0001e6; 	T(ax = _unk_15d64;);	// 16867                  mov     ax, cs:_unk_15D64 ;~ 075B:01E6
cs=0x75b;eip=0x0001ea; 	J(RETF(0));	// 16868                  retf ;~ 075B:01EA
ret_75b_1eb:
	// 4683 
cs=0x75b;eip=0x0001eb; 	T(ax = word_15d66;);	// 16870                  mov     ax, cs:word_15D66 ;~ 075B:01EB
cs=0x75b;eip=0x0001ef; 	J(RETF(0));	// 16871                  retf ;~ 075B:01EF
ret_75b_1f0:
	// 4684 
cs=0x75b;eip=0x0001f0; 	T(ax = word_15d68;);	// 16873                  mov     ax, cs:word_15D68 ;~ 075B:01F0
cs=0x75b;eip=0x0001f4; 	J(RETF(0));	// 16874                  retf ;~ 075B:01F4
ret_75b_1f5:
	// 4685 
cs=0x75b;eip=0x0001f5; 	T(ax = word_15d6a;);	// 16877                  mov     ax, cs:word_15D6A ;~ 075B:01F5
cs=0x75b;eip=0x0001f9; 	J(RETF(0));	// 16878                  retf ;~ 075B:01F9
ret_75b_1fa:
	// 4686 
cs=0x75b;eip=0x0001fa; 	T(ax = word_15d6c;);	// 16880                  mov     ax, cs:word_15D6C ;~ 075B:01FA
cs=0x75b;eip=0x0001fe; 	J(RETF(0));	// 16881                  retf ;~ 075B:01FE
ret_75b_1ff:
	// 4687 
cs=0x75b;eip=0x0001ff; 	T(ax = word_15d6e;);	// 16883                  mov     ax, cs:word_15D6E ;~ 075B:01FF
cs=0x75b;eip=0x000203; 	J(RETF(0));	// 16884                  retf ;~ 075B:0203
ret_75b_204:
	// 4688 
cs=0x75b;eip=0x000204; 	T(ah = 0x48;);	// 16886                  mov     ah, 48h ; 'H' ;~ 075B:0204
cs=0x75b;eip=0x000206; 	T(bx = 0x0FFFF;);	// 16887                  mov     bx, 0FFFFh ;~ 075B:0206
cs=0x75b;eip=0x000209; 	S(_INT(0x21));	// 16888                  int     21h             ; DOS - 2+ - ALLOCATE MEMORY ;~ 075B:0209
cs=0x75b;eip=0x00020b; 	T(CMP(ax, 8));	// 16890                  cmp     ax, 8 ;~ 075B:020B
cs=0x75b;eip=0x00020e; 	J(JNZ(loc_15da3));	// 16891                  jnz     short loc_15DA3 ;~ 075B:020E
cs=0x75b;eip=0x000210; 	T(ax = bx;);	// 16892                  mov     ax, bx ;~ 075B:0210
cs=0x75b;eip=0x000212; 	J(RETF(0));	// 16893                  retf ;~ 075B:0212
loc_15da3:
	// 4689 
cs=0x75b;eip=0x000213; 	T(XOR(ax, ax));	// 16897                  xor     ax, ax ;~ 075B:0213
cs=0x75b;eip=0x000215; 	J(RETF(0));	// 16898                  retf ;~ 075B:0215
ret_75b_216:
	// 4690 
cs=0x75b;eip=0x000216; 	T(ax = 0x13;);	// 16900                  mov     ax, 13h ;~ 075B:0216
cs=0x75b;eip=0x000219; 	S(_INT(0x10));	// 16901                  int     10h             ; - VIDEO - SET VIDEO MODE ;~ 075B:0219
cs=0x75b;eip=0x00021b; 	T(ah = 0x0F;);	// 16903                  mov     ah, 0Fh ;~ 075B:021B
cs=0x75b;eip=0x00021d; 	S(_INT(0x10));	// 16904                  int     10h             ; - VIDEO - GET CURRENT VIDEO MODE ;~ 075B:021D
cs=0x75b;eip=0x00021f; 	T(CMP(al, 0x13));	// 16908                  cmp     al, 13h ;~ 075B:021F
cs=0x75b;eip=0x000221; 	J(JNZ(loc_15db4));	// 16909                  jnz     short loc_15DB4 ;~ 075B:0221
cs=0x75b;eip=0x000223; 	J(RETF(0));	// 16910                  retf ;~ 075B:0223
loc_15db4:
	// 4691 
cs=0x75b;eip=0x000224; 	T(dx = 0x1B48;);	// 16914                  mov     dx, 1B48h ;~ 075B:0224
cs=0x75b;eip=0x000227; 	J(return _group5(m2c::kloc_15e13, _state););	// 16915                  jmp     short loc_15E13 ;~ 075B:0227
ret_75b_22a:
	// 4692 
cs=0x75b;eip=0x00022a; 	T(dx = 0x3DA;);	// 16919                  mov     dx, 3DAh ;~ 075B:022A
loc_15dbd:
	// 4693 
cs=0x75b;eip=0x00022d; 	S(IN(al, dx));	// 16922                  in      al, dx          ; Video status bits: ;~ 075B:022D
cs=0x75b;eip=0x00022e; 	T(TEST(al, 8));	// 16927                  test    al, 8 ;~ 075B:022E
cs=0x75b;eip=0x000230; 	J(JZ(loc_15dbd));	// 16928                  jz      short loc_15DBD ;~ 075B:0230
cs=0x75b;eip=0x000232; 	T(dx = 0x3D8;);	// 16929                  mov     dx, 3D8h ;~ 075B:0232
cs=0x75b;eip=0x000235; 	T(al = 2;);	// 16930                  mov     al, 2 ;~ 075B:0235
cs=0x75b;eip=0x000237; 	S(OUT(dx, al));	// 16931                  out     dx, al ;~ 075B:0237
cs=0x75b;eip=0x000238; 	T(dx = 0x3C4;);	// 16932                  mov     dx, 3C4h ;~ 075B:0238
cs=0x75b;eip=0x00023b; 	T(al = 1;);	// 16933                  mov     al, 1 ;~ 075B:023B
cs=0x75b;eip=0x00023d; 	S(OUT(dx, al));	// 16934                  out     dx, al          ; EGA: sequencer address reg ;~ 075B:023D
cs=0x75b;eip=0x00023e; 	T(INC(dx));	// 16940                  inc     dx ;~ 075B:023E
cs=0x75b;eip=0x00023f; 	S(IN(al, dx));	// 16941                  in      al, dx          ; EGA port: sequencer data register ;~ 075B:023F
cs=0x75b;eip=0x000240; 	T(OR(al, 0x20));	// 16942                  or      al, 20h ;~ 075B:0240
cs=0x75b;eip=0x000242; 	S(OUT(dx, al));	// 16943                  out     dx, al          ; EGA port: sequencer data register ;~ 075B:0242
cs=0x75b;eip=0x000243; 	J(RETF(0));	// 16944                  retf ;~ 075B:0243

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
cs=0x75b;eip=0x000244; 	T(dx = 0x3DA;);	// 16950                  mov     dx, 3DAh ;~ 075B:0244
loc_15dd7:
	// 4694 
cs=0x75b;eip=0x000247; 	S(IN(al, dx));	// 16953                  in      al, dx          ; Video status bits: ;~ 075B:0247
cs=0x75b;eip=0x000248; 	T(TEST(al, 8));	// 16958                  test    al, 8 ;~ 075B:0248
cs=0x75b;eip=0x00024a; 	J(JZ(loc_15dd7));	// 16959                  jz      short loc_15DD7 ;~ 075B:024A
cs=0x75b;eip=0x00024c; 	T(dx = 0x3D8;);	// 16960                  mov     dx, 3D8h ;~ 075B:024C
cs=0x75b;eip=0x00024f; 	T(al = 0x0A;);	// 16961                  mov     al, 0Ah ;~ 075B:024F
cs=0x75b;eip=0x000251; 	S(OUT(dx, al));	// 16962                  out     dx, al ;~ 075B:0251
cs=0x75b;eip=0x000252; 	T(dx = 0x3C4;);	// 16963                  mov     dx, 3C4h ;~ 075B:0252
cs=0x75b;eip=0x000255; 	T(al = 1;);	// 16964                  mov     al, 1 ;~ 075B:0255
cs=0x75b;eip=0x000257; 	S(OUT(dx, al));	// 16965                  out     dx, al          ; EGA: sequencer address reg ;~ 075B:0257
cs=0x75b;eip=0x000258; 	T(INC(dx));	// 16971                  inc     dx ;~ 075B:0258
cs=0x75b;eip=0x000259; 	S(IN(al, dx));	// 16972                  in      al, dx          ; EGA port: sequencer data register ;~ 075B:0259
cs=0x75b;eip=0x00025a; 	T(AND(al, 0x0DF));	// 16973                  and     al, 0DFh ;~ 075B:025A
cs=0x75b;eip=0x00025c; 	S(OUT(dx, al));	// 16974                  out     dx, al          ; EGA port: sequencer data register ;~ 075B:025C
cs=0x75b;eip=0x00025d; 	J(RETF(0));	// 16975                  retf ;~ 075B:025D

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



 bool _group5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group5:
    _begin:
sub_15dee:
	// 16983 
cs=0x75b;eip=0x00025e; 	T(bx = sp;);	// 16984                  mov     bx, sp ;~ 075B:025E
cs=0x75b;eip=0x000260; 	T(CMP(*(dw*)(raddr(ss,bx+4)), 0));	// 16985                  cmp     word ptr ss:[bx+4], 0 ;~ 075B:0260
cs=0x75b;eip=0x000265; 	J(JNZ(loc_15dfc));	// 16986                  jnz     short loc_15DFC ;~ 075B:0265
cs=0x75b;eip=0x000267; 	T(ax = word_16211;);	// 16987                  mov     ax, cs:word_16211 ;~ 075B:0267
cs=0x75b;eip=0x00026b; 	J(RETF(0));	// 16988                  retf ;~ 075B:026B
loc_15dfc:
	// 4695 
cs=0x75b;eip=0x00026c; 	T(ah = 0x48;);	// 16992                  mov     ah, 48h ; 'H' ;~ 075B:026C
cs=0x75b;eip=0x00026e; 	T(bx = _unk_15d64;);	// 16993                  mov     bx, cs:_unk_15D64 ;~ 075B:026E
cs=0x75b;eip=0x000273; 	T(SHR(bx, 1));	// 16994                  shr     bx, 1 ;~ 075B:0273
cs=0x75b;eip=0x000275; 	T(SHR(bx, 1));	// 16995                  shr     bx, 1 ;~ 075B:0275
cs=0x75b;eip=0x000277; 	T(SHR(bx, 1));	// 16996                  shr     bx, 1 ;~ 075B:0277
cs=0x75b;eip=0x000279; 	T(SHR(bx, 1));	// 16997                  shr     bx, 1 ;~ 075B:0279
cs=0x75b;eip=0x00027b; 	S(_INT(0x21));	// 16998                  int     21h             ; DOS - 2+ - ALLOCATE MEMORY ;~ 075B:027B
cs=0x75b;eip=0x00027d; 	J(JC(loc_15e10));	// 17000                  jb      short loc_15E10 ;~ 075B:027D
cs=0x75b;eip=0x00027f; 	J(RETF(0));	// 17001                  retf ;~ 075B:027F
loc_15e10:
	// 4696 
cs=0x75b;eip=0x000280; 	T(dx = 0x1B22;);	// 17005                  mov     dx, 1B22h ;~ 075B:0280
loc_15e13:
	// 4697 
cs=0x75b;eip=0x000283; 	T(ax = 3;);	// 17008                  mov     ax, 3 ;~ 075B:0283
cs=0x75b;eip=0x000286; 	S(_INT(0x10));	// 17009                  int     10h             ; - VIDEO - SET VIDEO MODE ;~ 075B:0286
cs=0x75b;eip=0x000288; 	T(ax = seg_offset(seg003););	// 17011                  mov     ax, seg seg003 ;~ 075B:0288
cs=0x75b;eip=0x00028b; 	T(ds = ax;);	// 17012                  mov     ds, ax ;~ 075B:028B
cs=0x75b;eip=0x00028d; 	T(ah = 9;);	// 17014                  mov     ah, 9 ;~ 075B:028D
cs=0x75b;eip=0x00028f; 	S(_INT(0x21));	// 17015                  int     21h             ; DOS - PRINT STRING ;~ 075B:028F
cs=0x75b;eip=0x000291; 	T(ax = 0x4C00;);	// 17017                  mov     ax, 4C00h ;~ 075B:0291
cs=0x75b;eip=0x000294; 	S(_INT(0x21));	// 17018                  int     21h             ; DOS - 2+ - QUIT WITH EXIT CODE (EXIT) ;~ 075B:0294
seg004_296_proc:
	// 17023 
cs=0x75b;eip=0x000296; 	T(bx = sp;);	// 17023                  mov     bx, sp ;~ 075B:0296
cs=0x75b;eip=0x000298; 	T(MOV(bx, *(dw*)(raddr(ss,bx+4))));	// 17024                  mov     bx, ss:[bx+4] ;~ 075B:0298
cs=0x75b;eip=0x00029c; 	X(PUSH(es));	// 17025                  push    es ;~ 075B:029C
cs=0x75b;eip=0x00029d; 	T(ax = seg_offset(seg003););	// 17026                  mov     ax, seg seg003 ;~ 075B:029D
cs=0x75b;eip=0x0002a0; 	T(es = ax;);	// 17027                  mov     es, ax ;~ 075B:02A0
cs=0x75b;eip=0x0002a2; 	T(SHL(bx, 1));	// 17029                  shl     bx, 1 ;~ 075B:02A2
cs=0x75b;eip=0x0002a4; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1B7B))));	// 17030                  mov     dx, es:[bx+1B7Bh] ;~ 075B:02A4
cs=0x75b;eip=0x0002a9; 	T(ax = 0x1012;);	// 17031                  mov     ax, 1012h ;~ 075B:02A9
cs=0x75b;eip=0x0002ac; 	T(bx = 0;);	// 17032                  mov     bx, 0 ;~ 075B:02AC
cs=0x75b;eip=0x0002af; 	T(cx = 0x10;);	// 17033                  mov     cx, 10h ;~ 075B:02AF
cs=0x75b;eip=0x0002b2; 	S(_INT(0x10));	// 17034                  int     10h             ; - VIDEO - SET BLOCK OF DAC REGISTERS (EGA, VGA/MCGA) ;~ 075B:02B2
cs=0x75b;eip=0x0002b4; 	X(POP(es));	// 17038                  pop     es ;~ 075B:02B4
cs=0x75b;eip=0x0002b5; 	J(CALLF(sub_15dd4,0));	// 17040                  call    sub_15DD4 ;~ 075B:02B5
cs=0x75b;eip=0x0002ba; 	J(RETF(0));	// 17041                  retf ;~ 075B:02BA
ret_75b_2bb:
	// 4698 
cs=0x75b;eip=0x0002bb; 	T(bx = sp;);	// 17043                  mov     bx, sp ;~ 075B:02BB
cs=0x75b;eip=0x0002bd; 	T(MOV(ah, *(raddr(ss,bx+4))));	// 17044                  mov     ah, ss:[bx+4] ;~ 075B:02BD
sub_15e51:
	// 17049 
cs=0x75b;eip=0x0002c1; 	X(PUSH(ds));	// 17051                  push    ds ;~ 075B:02C1
cs=0x75b;eip=0x0002c2; 	T(dx = seg_offset(seg003););	// 17052                  mov     dx, seg seg003 ;~ 075B:02C2
cs=0x75b;eip=0x0002c5; 	T(ds = dx;);	// 17053                  mov     ds, dx ;~ 075B:02C5
cs=0x75b;eip=0x0002c7; 	X(byte_15a0a = ah;);	// 17055                  mov     byte_15A0A, ah ;~ 075B:02C7
cs=0x75b;eip=0x0002cb; 	X(POP(ds));	// 17056                  pop     ds ;~ 075B:02CB
cs=0x75b;eip=0x0002cc; 	J(RETF(0));	// 17058                  retf ;~ 075B:02CC

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



 bool _group6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group6:
    _begin:
seg004_2cd_proc:
	// 17062 
cs=0x75b;eip=0x0002cd; 	J(RETF(0));	// 17062                  retf ;~ 075B:02CD
ret_75b_2ce:
	// 4699 
cs=0x75b;eip=0x0002ce; 	X(PUSH(ds));	// 17064                  push    ds ;~ 075B:02CE
cs=0x75b;eip=0x0002cf; 	X(PUSH(es));	// 17065                  push    es ;~ 075B:02CF
cs=0x75b;eip=0x0002d0; 	T(ax = seg_offset(seg003););	// 17066                  mov     ax, seg seg003 ;~ 075B:02D0
cs=0x75b;eip=0x0002d3; 	T(ds = ax;);	// 17067                  mov     ds, ax ;~ 075B:02D3
cs=0x75b;eip=0x0002d5; 	T(es = word_15d2e;);	// 17069                  mov     es, cs:word_15D2E ;~ 075B:02D5
loc_15e6a:
	// 4700 
cs=0x75b;eip=0x0002da; 	J(CALL(sub_15e71,0));	// 17073                  call    sub_15E71 ;~ 075B:02DA
cs=0x75b;eip=0x0002dd; 	X(STOSB);	// 17074                  stosb ;~ 075B:02DD
cs=0x75b;eip=0x0002de; 	X(POP(es));	// 17075                  pop     es ;~ 075B:02DE
cs=0x75b;eip=0x0002df; 	X(POP(ds));	// 17076                  pop     ds ;~ 075B:02DF
cs=0x75b;eip=0x0002e0; 	J(RETF(0));	// 17078                  retf ;~ 075B:02E0
seg004_2f9_proc:
	// 17097 
cs=0x75b;eip=0x0002f9; 	X(PUSH(ds));	// 17097                  push    ds ;~ 075B:02F9
cs=0x75b;eip=0x0002fa; 	X(PUSH(es));	// 17098                  push    es ;~ 075B:02FA
cs=0x75b;eip=0x0002fb; 	T(di = seg_offset(seg003););	// 17099                  mov     di, seg seg003 ;~ 075B:02FB
cs=0x75b;eip=0x0002fe; 	T(ds = di;);	// 17100                  mov     ds, di ;~ 075B:02FE
cs=0x75b;eip=0x000300; 	T(es = word_15d2e;);	// 17102                  mov     es, cs:word_15D2E ;~ 075B:0300
cs=0x75b;eip=0x000305; 	T(CMP(ax, cx));	// 17103                  cmp     ax, cx ;~ 075B:0305
cs=0x75b;eip=0x000307; 	J(JBE(loc_15e9c));	// 17104                  jbe     short loc_15E9C ;~ 075B:0307
cs=0x75b;eip=0x000309; 	T(XCHG(ax, cx));	// 17106                  xchg    ax, cx ;~ 075B:0309
cs=0x75b;eip=0x00030a; 	T(XCHG(bx, dx));	// 17107                  xchg    bx, dx ;~ 075B:030A
loc_15e9c:
	// 4701 
cs=0x75b;eip=0x00030c; 	X(word_159fe = ax;);	// 17110                  mov     word_159FE, ax ;~ 075B:030C
cs=0x75b;eip=0x00030f; 	X(word_15a00 = bx;);	// 17111                  mov     word_15A00, bx ;~ 075B:030F
cs=0x75b;eip=0x000313; 	X(word_15a02 = cx;);	// 17112                  mov     word_15A02, cx ;~ 075B:0313
cs=0x75b;eip=0x000317; 	X(word_15a04 = dx;);	// 17113                  mov     word_15A04, dx ;~ 075B:0317
cs=0x75b;eip=0x00031b; 	J(JNZ(loc_15eb1));	// 17114                  jnz     short loc_15EB1 ;~ 075B:031B
cs=0x75b;eip=0x00031d; 	T(CMP(bx, dx));	// 17115                  cmp     bx, dx ;~ 075B:031D
cs=0x75b;eip=0x00031f; 	J(JZ(loc_15e6a));	// 17116                  jz      short loc_15E6A ;~ 075B:031F
loc_15eb1:
	// 4702 
cs=0x75b;eip=0x000321; 	T(si = 1;);	// 17119                  mov     si, 1 ;~ 075B:0321
cs=0x75b;eip=0x000324; 	T(bp = 0x140;);	// 17120                  mov     bp, 140h ;~ 075B:0324
cs=0x75b;eip=0x000327; 	T(SUB(cx, ax));	// 17121                  sub     cx, ax ;~ 075B:0327
cs=0x75b;eip=0x000329; 	T(SUB(dx, bx));	// 17122                  sub     dx, bx ;~ 075B:0329
cs=0x75b;eip=0x00032b; 	J(JNS(loc_15ec1));	// 17123                  jns     short loc_15EC1 ;~ 075B:032B
cs=0x75b;eip=0x00032d; 	T(NEG(bp));	// 17124                  neg     bp ;~ 075B:032D
cs=0x75b;eip=0x00032f; 	T(NEG(dx));	// 17125                  neg     dx ;~ 075B:032F
loc_15ec1:
	// 4703 
cs=0x75b;eip=0x000331; 	T(CMP(cx, dx));	// 17128                  cmp     cx, dx ;~ 075B:0331
cs=0x75b;eip=0x000333; 	J(JNC(loc_15ec9));	// 17129                  jnb     short loc_15EC9 ;~ 075B:0333
cs=0x75b;eip=0x000335; 	T(XCHG(si, bp));	// 17130                  xchg    si, bp ;~ 075B:0335
cs=0x75b;eip=0x000337; 	T(XCHG(cx, dx));	// 17131                  xchg    cx, dx ;~ 075B:0337
loc_15ec9:
	// 4704 
cs=0x75b;eip=0x000339; 	X(word_15a06 = cx;);	// 17134                  mov     word_15A06, cx ;~ 075B:0339
cs=0x75b;eip=0x00033d; 	X(word_15a08 = dx;);	// 17135                  mov     word_15A08, dx ;~ 075B:033D
cs=0x75b;eip=0x000341; 	J(CALL(sub_15e71,0));	// 17136                  call    sub_15E71 ;~ 075B:0341
cs=0x75b;eip=0x000344; 	T(bx = word_15a08;);	// 17137                  mov     bx, word_15A08 ;~ 075B:0344
cs=0x75b;eip=0x000348; 	T(cx = word_15a06;);	// 17138                  mov     cx, word_15A06 ;~ 075B:0348
cs=0x75b;eip=0x00034c; 	T(dx = cx;);	// 17139                  mov     dx, cx ;~ 075B:034C
cs=0x75b;eip=0x00034e; 	T(INC(dx));	// 17140                  inc     dx ;~ 075B:034E
cs=0x75b;eip=0x00034f; 	T(SHR(dx, 1));	// 17141                  shr     dx, 1 ;~ 075B:034F
cs=0x75b;eip=0x000351; 	T(NEG(dx));	// 17142                  neg     dx ;~ 075B:0351
cs=0x75b;eip=0x000353; 	T(DEC(si));	// 17143                  dec     si ;~ 075B:0353
loc_15ee4:
	// 4705 
cs=0x75b;eip=0x000354; 	X(STOSB);	// 17147                  stosb ;~ 075B:0354
cs=0x75b;eip=0x000355; 	T(DEC(cx));	// 17148                  dec     cx ;~ 075B:0355
cs=0x75b;eip=0x000356; 	J(JS(loc_15ef6));	// 17149                  js      short loc_15EF6 ;~ 075B:0356
cs=0x75b;eip=0x000358; 	T(ADD(di, si));	// 17150                  add     di, si ;~ 075B:0358
cs=0x75b;eip=0x00035a; 	T(ADD(dx, bx));	// 17151                  add     dx, bx ;~ 075B:035A
cs=0x75b;eip=0x00035c; 	J(JS(loc_15ee4));	// 17152                  js      short loc_15EE4 ;~ 075B:035C
cs=0x75b;eip=0x00035e; 	T(SUB(dx, word_15a06));	// 17153                  sub     dx, word_15A06 ;~ 075B:035E
cs=0x75b;eip=0x000362; 	T(ADD(di, bp));	// 17154                  add     di, bp ;~ 075B:0362
cs=0x75b;eip=0x000364; 	J(JMP(loc_15ee4));	// 17155                  jmp     short loc_15EE4 ;~ 075B:0364
loc_15ef6:
	// 4706 
cs=0x75b;eip=0x000366; 	X(POP(es));	// 17159                  pop     es ;~ 075B:0366
cs=0x75b;eip=0x000367; 	X(POP(ds));	// 17161                  pop     ds ;~ 075B:0367
cs=0x75b;eip=0x000368; 	J(RETF(0));	// 17163                  retf ;~ 075B:0368
ret_75b_369:
	// 4707 
cs=0x75b;eip=0x000369; 	X(PUSH(bp));	// 17166                  push    bp ;~ 075B:0369
cs=0x75b;eip=0x00036a; 	T(bp = sp;);	// 17167                  mov     bp, sp ;~ 075B:036A
cs=0x75b;eip=0x00036c; 	X(PUSH(si));	// 17168                  push    si ;~ 075B:036C
cs=0x75b;eip=0x00036d; 	X(PUSH(di));	// 17169                  push    di ;~ 075B:036D
cs=0x75b;eip=0x00036e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+8))));	// 17170                  mov     bx, [bp+8] ;~ 075B:036E
cs=0x75b;eip=0x000371; 	T(MOV(bp, *(dw*)(raddr(ss,bp+6))));	// 17171                  mov     bp, [bp+6] ;~ 075B:0371
cs=0x75b;eip=0x000374; 	J(CALL(_group9,m2c::kloc_1603b));	// 17172                  call    loc_1603B ;~ 075B:0374
cs=0x75b;eip=0x000379; 	X(POP(di));	// 17173                  pop     di ;~ 075B:0379
cs=0x75b;eip=0x00037a; 	X(POP(si));	// 17174                  pop     si ;~ 075B:037A
cs=0x75b;eip=0x00037b; 	X(POP(bp));	// 17175                  pop     bp ;~ 075B:037B
cs=0x75b;eip=0x00037c; 	J(RETF(0));	// 17176                  retf ;~ 075B:037C
ret_75b_37d:
	// 4708 
cs=0x75b;eip=0x00037d; 	X(PUSH(bp));	// 17178                  push    bp ;~ 075B:037D
cs=0x75b;eip=0x00037e; 	T(bp = sp;);	// 17179                  mov     bp, sp ;~ 075B:037E
cs=0x75b;eip=0x000380; 	X(PUSH(si));	// 17180                  push    si ;~ 075B:0380
cs=0x75b;eip=0x000381; 	X(PUSH(di));	// 17181                  push    di ;~ 075B:0381
cs=0x75b;eip=0x000382; 	T(MOV(bx, *(dw*)(raddr(ss,bp+8))));	// 17182                  mov     bx, [bp+8] ;~ 075B:0382
cs=0x75b;eip=0x000385; 	T(MOV(bp, *(dw*)(raddr(ss,bp+6))));	// 17183                  mov     bp, [bp+6] ;~ 075B:0385
cs=0x75b;eip=0x000388; 	J(CALLF(sub_15f5d,0));	// 17184                  call    sub_15F5D ;~ 075B:0388
cs=0x75b;eip=0x00038d; 	X(POP(di));	// 17185                  pop     di ;~ 075B:038D
cs=0x75b;eip=0x00038e; 	X(POP(si));	// 17186                  pop     si ;~ 075B:038E
cs=0x75b;eip=0x00038f; 	X(POP(bp));	// 17187                  pop     bp ;~ 075B:038F
cs=0x75b;eip=0x000390; 	J(RETF(0));	// 17188                  retf ;~ 075B:0390
ret_75b_391:
	// 4709 
cs=0x75b;eip=0x000391; 	X(PUSH(bp));	// 17190                  push    bp ;~ 075B:0391
cs=0x75b;eip=0x000392; 	T(bp = sp;);	// 17191                  mov     bp, sp ;~ 075B:0392
cs=0x75b;eip=0x000394; 	X(PUSH(si));	// 17192                  push    si ;~ 075B:0394
cs=0x75b;eip=0x000395; 	X(PUSH(di));	// 17193                  push    di ;~ 075B:0395
cs=0x75b;eip=0x000396; 	T(MOV(bx, *(dw*)(raddr(ss,bp+8))));	// 17194                  mov     bx, [bp+8] ;~ 075B:0396
cs=0x75b;eip=0x000399; 	T(MOV(bp, *(dw*)(raddr(ss,bp+6))));	// 17195                  mov     bp, [bp+6] ;~ 075B:0399
cs=0x75b;eip=0x00039c; 	J(CALLF(sub_15ff1,0));	// 17196                  call    far ptr sub_15FF1 ;~ 075B:039C
cs=0x75b;eip=0x0003a1; 	X(POP(di));	// 17197                  pop     di ;~ 075B:03A1
cs=0x75b;eip=0x0003a2; 	X(POP(si));	// 17198                  pop     si ;~ 075B:03A2
cs=0x75b;eip=0x0003a3; 	X(POP(bp));	// 17199                  pop     bp ;~ 075B:03A3
cs=0x75b;eip=0x0003a4; 	J(RETF(0));	// 17200                  retf ;~ 075B:03A4
ret_75b_3a5:
	// 4710 
cs=0x75b;eip=0x0003a5; 	X(PUSH(bp));	// 17202                  push    bp ;~ 075B:03A5
cs=0x75b;eip=0x0003a6; 	T(bp = sp;);	// 17203                  mov     bp, sp ;~ 075B:03A6
cs=0x75b;eip=0x0003a8; 	X(PUSH(si));	// 17204                  push    si ;~ 075B:03A8
cs=0x75b;eip=0x0003a9; 	X(PUSH(di));	// 17205                  push    di ;~ 075B:03A9
cs=0x75b;eip=0x0003aa; 	T(MOV(bx, *(dw*)(raddr(ss,bp+8))));	// 17206                  mov     bx, [bp+8] ;~ 075B:03AA
cs=0x75b;eip=0x0003ad; 	T(MOV(bp, *(dw*)(raddr(ss,bp+6))));	// 17207                  mov     bp, [bp+6] ;~ 075B:03AD
cs=0x75b;eip=0x0003b0; 	J(CALLF(sub_15f6c,0));	// 17208                  call    sub_15F6C ;~ 075B:03B0
cs=0x75b;eip=0x0003b5; 	X(POP(di));	// 17209                  pop     di ;~ 075B:03B5
cs=0x75b;eip=0x0003b6; 	X(POP(si));	// 17210                  pop     si ;~ 075B:03B6
cs=0x75b;eip=0x0003b7; 	X(POP(bp));	// 17211                  pop     bp ;~ 075B:03B7
cs=0x75b;eip=0x0003b8; 	J(RETF(0));	// 17212                  retf ;~ 075B:03B8
ret_75b_3b9:
	// 4711 
cs=0x75b;eip=0x0003b9; 	X(PUSH(bp));	// 17214                  push    bp ;~ 075B:03B9
cs=0x75b;eip=0x0003ba; 	T(bp = sp;);	// 17215                  mov     bp, sp ;~ 075B:03BA
cs=0x75b;eip=0x0003bc; 	X(PUSH(si));	// 17216                  push    si ;~ 075B:03BC
cs=0x75b;eip=0x0003bd; 	X(PUSH(di));	// 17217                  push    di ;~ 075B:03BD
cs=0x75b;eip=0x0003be; 	T(MOV(bx, *(dw*)(raddr(ss,bp+8))));	// 17218                  mov     bx, [bp+8] ;~ 075B:03BE
cs=0x75b;eip=0x0003c1; 	T(MOV(bp, *(dw*)(raddr(ss,bp+6))));	// 17219                  mov     bp, [bp+6] ;~ 075B:03C1
cs=0x75b;eip=0x0003c4; 	J(CALLF(sub_15fa8,0));	// 17220                  call    far ptr sub_15FA8 ;~ 075B:03C4
cs=0x75b;eip=0x0003c9; 	X(POP(di));	// 17221                  pop     di ;~ 075B:03C9
cs=0x75b;eip=0x0003ca; 	X(POP(si));	// 17222                  pop     si ;~ 075B:03CA
cs=0x75b;eip=0x0003cb; 	X(POP(bp));	// 17223                  pop     bp ;~ 075B:03CB
cs=0x75b;eip=0x0003cc; 	J(RETF(0));	// 17224                  retf ;~ 075B:03CC

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
cs=0x75b;eip=0x0002e1; 	T(al = byte_15a0a;);	// 17086                  mov     al, byte_15A0A ;~ 075B:02E1
cs=0x75b;eip=0x0002e4; 	T(di = word_15a00;);	// 17087                  mov     di, word_15A00 ;~ 075B:02E4
cs=0x75b;eip=0x0002e8; 	T(SHL(di, 1));	// 17088                  shl     di, 1 ;~ 075B:02E8
cs=0x75b;eip=0x0002ea; 	T(MOV(di, *(dw*)(raddr(cs,di+0x0E))));	// 17089                  mov     di, cs:[di+0Eh] ;~ 075B:02EA
cs=0x75b;eip=0x0002ef; 	T(ADD(di, word_15d30));	// 17090                  add     di, cs:word_15D30 ;~ 075B:02EF
cs=0x75b;eip=0x0002f4; 	T(ADD(di, word_159fe));	// 17091                  add     di, word_159FE ;~ 075B:02F4
cs=0x75b;eip=0x0002f8; 	J(RETN(0));	// 17092                  retn ;~ 075B:02F8

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
cs=0x75b;eip=0x0003cd; 	J(CALL(sub_1614b,0));	// 17230                  call    sub_1614B ;~ 075B:03CD
cs=0x75b;eip=0x0003d0; 	J(CALL(sub_15f75,0));	// 17231                  call    near ptr sub_15F75 ;~ 075B:03D0
cs=0x75b;eip=0x0003d3; 	J(CALL(sub_15fb1,0));	// 17232                  call    near ptr sub_15FB1 ;~ 075B:03D3
cs=0x75b;eip=0x0003d6; 	J(CALL(sub_15ffa,0));	// 17233                  call    near ptr sub_15FFA ;~ 075B:03D6
cs=0x75b;eip=0x0003d9; 	J(return _group9(m2c::kloc_1603e, _state););	// 17234                  jmp     loc_1603E ;~ 075B:03D9

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



 bool sub_15f6c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_15f6c:
    _begin:
cs=0x75b;eip=0x0003dc; 	J(CALL(sub_1614b,0));	// 17242                  call    sub_1614B ;~ 075B:03DC
loc_15f6f:
	// 4712 
cs=0x75b;eip=0x0003df; 	J(CALL(sub_15f75,0));	// 17246                  call    near ptr sub_15F75 ;~ 075B:03DF
cs=0x75b;eip=0x0003e2; 	J(return _group9(m2c::kloc_1603e, _state););	// 17247                  jmp     loc_1603E ;~ 075B:03E2

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_15f6f: 	goto loc_15f6f;
        case m2c::ksub_15f6c: 	goto sub_15f6c;
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
cs=0x75b;eip=0x0003e5; 	T(CMP(byte_15b0c, 0x0FF));	// 17256                  cmp     byte_15B0C, 0FFh ;~ 075B:03E5
cs=0x75b;eip=0x0003ea; 	J(JZ(locret_15fa7));	// 17257                  jz      short locret_15FA7 ;~ 075B:03EA
cs=0x75b;eip=0x0003ec; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x12))));	// 17258                  mov     ax, [bp+12h] ;~ 075B:03EC
cs=0x75b;eip=0x0003ef; 	T(MOV(dx, *(dw*)(raddr(ss,bp+8))));	// 17259                  mov     dx, [bp+8] ;~ 075B:03EF
cs=0x75b;eip=0x0003f2; 	T(CMP(dx, ax));	// 17260                  cmp     dx, ax ;~ 075B:03F2
cs=0x75b;eip=0x0003f4; 	J(JNC(locret_15fa7));	// 17261                  jnb     short locret_15FA7 ;~ 075B:03F4
cs=0x75b;eip=0x0003f6; 	X(MOV(*(dw*)(raddr(ss,bp+8)), ax));	// 17262                  mov     [bp+8], ax ;~ 075B:03F6
cs=0x75b;eip=0x0003f9; 	T(SUB(ax, dx));	// 17263                  sub     ax, dx ;~ 075B:03F9
cs=0x75b;eip=0x0003fb; 	X(DIV1(byte_15b0c));	// 17264                  div     byte_15B0C ;~ 075B:03FB
cs=0x75b;eip=0x0003ff; 	X(byte_15b0d = ah;);	// 17265                  mov     byte_15B0D, ah ;~ 075B:03FF
cs=0x75b;eip=0x000403; 	X(SUB(byte_15b06, ah));	// 17266                  sub     byte_15B06, ah ;~ 075B:0403
cs=0x75b;eip=0x000407; 	T(INC(al));	// 17267                  inc     al ;~ 075B:0407
loc_15f99:
	// 4713 
cs=0x75b;eip=0x000409; 	T(DEC(al));	// 17270                  dec     al ;~ 075B:0409
cs=0x75b;eip=0x00040b; 	J(JZ(locret_15fa7));	// 17271                  jz      short locret_15FA7 ;~ 075B:040B
cs=0x75b;eip=0x00040d; 	T(INC(bx));	// 17272                  inc     bx ;~ 075B:040D
cs=0x75b;eip=0x00040e; 	T(CMP(*(raddr(ss,bx)), 0));	// 17273                  cmp     byte ptr ss:[bx], 0 ;~ 075B:040E
cs=0x75b;eip=0x000412; 	J(JNZ(loc_15f99));	// 17274                  jnz     short loc_15F99 ;~ 075B:0412
cs=0x75b;eip=0x000414; 	J(return _group9(m2c::kloc_16147, _state););	// 17275                  jmp     loc_16147 ;~ 075B:0414
locret_15fa7:
	// 4714 
cs=0x75b;eip=0x000417; 	J(RETN(0));	// 17280                  retn ;~ 075B:0417

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



 bool _group7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group7:
    _begin:
sub_15fa8:
	// 17288 
cs=0x75b;eip=0x000418; 	J(CALL(sub_1614b,0));	// 17289                  call    sub_1614B ;~ 075B:0418
sub_15fab:
	// 17297 
cs=0x75b;eip=0x00041b; 	J(CALL(sub_15fb1,0));	// 17298                  call    near ptr sub_15FB1 ;~ 075B:041B
cs=0x75b;eip=0x00041e; 	J(return _group9(m2c::kloc_1603e, _state););	// 17299                  jmp     loc_1603E ;~ 075B:041E

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
cs=0x75b;eip=0x000421; 	T(CMP(byte_15b0c, 0x0FF));	// 17308                  cmp     byte_15B0C, 0FFh ;~ 075B:0421
cs=0x75b;eip=0x000426; 	J(JZ(locret_15fed));	// 17309                  jz      short locret_15FED ;~ 075B:0426
cs=0x75b;eip=0x000428; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x14))));	// 17310                  mov     cx, [bp+14h] ;~ 075B:0428
cs=0x75b;eip=0x00042b; 	T(MOV(dx, *(dw*)(raddr(ss,bp+8))));	// 17311                  mov     dx, [bp+8] ;~ 075B:042B
cs=0x75b;eip=0x00042e; 	T(CMP(dx, cx));	// 17312                  cmp     dx, cx ;~ 075B:042E
cs=0x75b;eip=0x000430; 	J(JNC(loc_15fee));	// 17313                  jnb     short loc_15FEE ;~ 075B:0430
cs=0x75b;eip=0x000432; 	T(di = 0x0FFFF;);	// 17314                  mov     di, 0FFFFh ;~ 075B:0432
loc_15fc5:
	// 4715 
cs=0x75b;eip=0x000435; 	T(INC(di));	// 17317                  inc     di ;~ 075B:0435
cs=0x75b;eip=0x000436; 	T(CMP(*(raddr(ss,bx+di)), 0));	// 17318                  cmp     byte ptr ss:[bx+di], 0 ;~ 075B:0436
cs=0x75b;eip=0x00043a; 	J(JNZ(loc_15fc5));	// 17319                  jnz     short loc_15FC5 ;~ 075B:043A
cs=0x75b;eip=0x00043c; 	T(ax = di;);	// 17320                  mov     ax, di ;~ 075B:043C
cs=0x75b;eip=0x00043e; 	X(MUL1_1(byte_15b0c));	// 17321                  mul     byte_15B0C ;~ 075B:043E
cs=0x75b;eip=0x000442; 	T(ADD(ax, dx));	// 17322                  add     ax, dx ;~ 075B:0442
cs=0x75b;eip=0x000444; 	T(DEC(ax));	// 17323                  dec     ax ;~ 075B:0444
cs=0x75b;eip=0x000445; 	T(SUB(ax, cx));	// 17324                  sub     ax, cx ;~ 075B:0445
cs=0x75b;eip=0x000447; 	J(JBE(locret_15fed));	// 17325                  jbe     short locret_15FED ;~ 075B:0447
cs=0x75b;eip=0x000449; 	T(cl = byte_15b0c;);	// 17326                  mov     cl, byte_15B0C ;~ 075B:0449
cs=0x75b;eip=0x00044d; 	T(DIV1(cl));	// 17327                  div     cl ;~ 075B:044D
cs=0x75b;eip=0x00044f; 	T(SUB(cl, ah));	// 17328                  sub     cl, ah ;~ 075B:044F
cs=0x75b;eip=0x000451; 	X(byte_15b0e = cl;);	// 17329                  mov     byte_15B0E, cl ;~ 075B:0451
cs=0x75b;eip=0x000455; 	T(dx = di;);	// 17330                  mov     dx, di ;~ 075B:0455
cs=0x75b;eip=0x000457; 	T(SUB(dl, al));	// 17331                  sub     dl, al ;~ 075B:0457
cs=0x75b;eip=0x000459; 	X(byte_15b07 = dl;);	// 17332                  mov     byte_15B07, dl ;~ 075B:0459
locret_15fed:
	// 4716 
cs=0x75b;eip=0x00045d; 	J(RETN(0));	// 17336                  retn ;~ 075B:045D
loc_15fee:
	// 4717 
cs=0x75b;eip=0x00045e; 	J(return _group9(m2c::kloc_16147, _state););	// 17340                  jmp     loc_16147 ;~ 075B:045E

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



 bool _group8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group8:
    _begin:
sub_15ff1:
	// 17348 
cs=0x75b;eip=0x000461; 	J(CALL(sub_1614b,0));	// 17349                  call    sub_1614B ;~ 075B:0461
sub_15ff4:
	// 17357 
cs=0x75b;eip=0x000464; 	J(CALL(sub_15ffa,0));	// 17358                  call    near ptr sub_15FFA ;~ 075B:0464
cs=0x75b;eip=0x000467; 	J(return _group9(m2c::kloc_1603e, _state););	// 17359                  jmp     short loc_1603E ;~ 075B:0467

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



 bool _group9(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group9:
    _begin:
sub_15ffa:
	// 17368 
cs=0x75b;eip=0x00046a; 	T(MOV(cl, *(raddr(ss,bp+0x0E))));	// 17370                  mov     cl, [bp+0Eh] ;~ 075B:046A
cs=0x75b;eip=0x00046d; 	T(MOV(ch, *(raddr(ss,bp+0x10))));	// 17371                  mov     ch, [bp+10h] ;~ 075B:046D
cs=0x75b;eip=0x000470; 	T(dh = byte_15b0f;);	// 17372                  mov     dh, byte_15B0F ;~ 075B:0470
cs=0x75b;eip=0x000474; 	T(DEC(dh));	// 17373                  dec     dh ;~ 075B:0474
cs=0x75b;eip=0x000476; 	T(MOV(dl, *(raddr(ss,bp+0x0A))));	// 17374                  mov     dl, [bp+0Ah] ;~ 075B:0476
cs=0x75b;eip=0x000479; 	T(ADD(dh, dl));	// 17375                  add     dh, dl ;~ 075B:0479
cs=0x75b;eip=0x00047b; 	T(CMP(dl, ch));	// 17376                  cmp     dl, ch ;~ 075B:047B
cs=0x75b;eip=0x00047d; 	J(JA(loc_16038));	// 17377                  ja      short loc_16038 ;~ 075B:047D
cs=0x75b;eip=0x00047f; 	T(CMP(dh, cl));	// 17378                  cmp     dh, cl ;~ 075B:047F
cs=0x75b;eip=0x000481; 	J(JC(loc_16038));	// 17379                  jb      short loc_16038 ;~ 075B:0481
cs=0x75b;eip=0x000483; 	T(CMP(dl, cl));	// 17380                  cmp     dl, cl ;~ 075B:0483
cs=0x75b;eip=0x000485; 	J(JNC(loc_1602b));	// 17381                  jnb     short loc_1602B ;~ 075B:0485
cs=0x75b;eip=0x000487; 	T(al = dh;);	// 17382                  mov     al, dh ;~ 075B:0487
cs=0x75b;eip=0x000489; 	T(SUB(al, cl));	// 17383                  sub     al, cl ;~ 075B:0489
cs=0x75b;eip=0x00048b; 	T(INC(al));	// 17384                  inc     al ;~ 075B:048B
cs=0x75b;eip=0x00048d; 	X(byte_15b0f = al;);	// 17385                  mov     byte_15B0F, al ;~ 075B:048D
cs=0x75b;eip=0x000490; 	X(MOV(*(raddr(ss,bp+0x0A)), cl));	// 17386                  mov     [bp+0Ah], cl ;~ 075B:0490
cs=0x75b;eip=0x000493; 	T(SUB(cl, dl));	// 17387                  sub     cl, dl ;~ 075B:0493
cs=0x75b;eip=0x000495; 	T(SHL(cl, 1));	// 17388                  shl     cl, 1 ;~ 075B:0495
cs=0x75b;eip=0x000497; 	X(*(db*)(&word_15b10) = cl;);	// 17389                  mov     byte ptr word_15B10, cl ;~ 075B:0497
loc_1602b:
	// 4718 
cs=0x75b;eip=0x00049b; 	T(CMP(dh, ch));	// 17392                  cmp     dh, ch ;~ 075B:049B
cs=0x75b;eip=0x00049d; 	J(JBE(locret_16037));	// 17393                  jbe     short locret_16037 ;~ 075B:049D
cs=0x75b;eip=0x00049f; 	T(SUB(ch, dl));	// 17394                  sub     ch, dl ;~ 075B:049F
cs=0x75b;eip=0x0004a1; 	T(INC(ch));	// 17395                  inc     ch ;~ 075B:04A1
cs=0x75b;eip=0x0004a3; 	X(byte_15b0f = ch;);	// 17396                  mov     byte_15B0F, ch ;~ 075B:04A3
locret_16037:
	// 4719 
cs=0x75b;eip=0x0004a7; 	J(RETN(0));	// 17399                  retn ;~ 075B:04A7
loc_16038:
	// 4720 
cs=0x75b;eip=0x0004a8; 	J(JMP(loc_16147));	// 17404                  jmp     loc_16147 ;~ 075B:04A8
loc_1603b:
	// 4721 
cs=0x75b;eip=0x0004ab; 	J(CALL(sub_1614b,0));	// 17409                  call    sub_1614B ;~ 075B:04AB
loc_1603e:
	// 4722 
cs=0x75b;eip=0x0004ae; 	T(MOV(ah, *(raddr(ss,bp+4))));	// 17414                  mov     ah, [bp+4] ;~ 075B:04AE
cs=0x75b;eip=0x0004b1; 	J(CALLF(sub_15e51,0));	// 17415                  call    sub_15E51 ;~ 075B:04B1
cs=0x75b;eip=0x0004b6; 	T(di = word_15b10;);	// 17416                  mov     di, word_15B10 ;~ 075B:04B6
cs=0x75b;eip=0x0004ba; 	T(MOV(di, *(dw*)(raddr(ds,di+0x112))));	// 17417                  mov     di, [di+112h] ;~ 075B:04BA
cs=0x75b;eip=0x0004be; 	T(ADD(di, word_15b0a));	// 17418                  add     di, word_15B0A ;~ 075B:04BE
cs=0x75b;eip=0x0004c2; 	X(word_15b08 = di;);	// 17419                  mov     word_15B08, di ;~ 075B:04C2
cs=0x75b;eip=0x0004c6; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0A))));	// 17420                  mov     di, [bp+0Ah] ;~ 075B:04C6
cs=0x75b;eip=0x0004c9; 	T(SHL(di, 1));	// 17421                  shl     di, 1 ;~ 075B:04C9
cs=0x75b;eip=0x0004cb; 	T(si = bx;);	// 17422                  mov     si, bx ;~ 075B:04CB
loc_1605d:
	// 4723 
cs=0x75b;eip=0x0004cd; 	T(CMP(byte_15b07, 1));	// 17425                  cmp     byte_15B07, 1 ;~ 075B:04CD
cs=0x75b;eip=0x0004d2; 	J(JNZ(loc_1606a));	// 17426                  jnz     short loc_1606A ;~ 075B:04D2
cs=0x75b;eip=0x0004d4; 	T(al = byte_15b0e;);	// 17428                  mov     al, byte_15B0E ;~ 075B:04D4
cs=0x75b;eip=0x0004d7; 	X(byte_15b06 = al;);	// 17429                  mov     byte_15B06, al ;~ 075B:04D7
loc_1606a:
	// 4724 
cs=0x75b;eip=0x0004da; 	T(MOV(al, *(raddr(ss,si))));	// 17432                  mov     al, ss:[si] ;~ 075B:04DA
cs=0x75b;eip=0x0004dd; 	T(INC(si));	// 17433                  inc     si ;~ 075B:04DD
cs=0x75b;eip=0x0004de; 	T(OR(al, al));	// 17434                  or      al, al ;~ 075B:04DE
cs=0x75b;eip=0x0004e0; 	J(JNZ(loc_16075));	// 17435                  jnz     short loc_16075 ;~ 075B:04E0
cs=0x75b;eip=0x0004e2; 	J(JMP(loc_16148));	// 17436                  jmp     loc_16148 ;~ 075B:04E2
loc_16075:
	// 4725 
cs=0x75b;eip=0x0004e5; 	T(TEST(al, 0x80));	// 17440                  test    al, 80h ;~ 075B:04E5
cs=0x75b;eip=0x0004e7; 	J(JZ(loc_1608d));	// 17441                  jz      short loc_1608D ;~ 075B:04E7
cs=0x75b;eip=0x0004e9; 	T(AND(al, 0x7F));	// 17442                  and     al, 7Fh ;~ 075B:04E9
cs=0x75b;eip=0x0004eb; 	X(MOV(*(raddr(ss,bp+4)), al));	// 17443                  mov     [bp+4], al ;~ 075B:04EB
cs=0x75b;eip=0x0004ee; 	T(ah = al;);	// 17444                  mov     ah, al ;~ 075B:04EE
cs=0x75b;eip=0x0004f0; 	J(CALLF(sub_15e51,0));	// 17445                  call    sub_15E51 ;~ 075B:04F0
cs=0x75b;eip=0x0004f5; 	X(byte_15b06 = 0;);	// 17446                  mov     byte_15B06, 0 ;~ 075B:04F5
cs=0x75b;eip=0x0004fa; 	J(JMP(loc_1612b));	// 17447                  jmp     loc_1612B ;~ 075B:04FA
loc_1608d:
	// 4726 
cs=0x75b;eip=0x0004fd; 	X(PUSH(si));	// 17451                  push    si ;~ 075B:04FD
cs=0x75b;eip=0x0004fe; 	X(PUSH(di));	// 17452                  push    di ;~ 075B:04FE
cs=0x75b;eip=0x0004ff; 	T(XOR(ah, ah));	// 17453                  xor     ah, ah ;~ 075B:04FF
cs=0x75b;eip=0x000501; 	T(si = ax;);	// 17454                  mov     si, ax ;~ 075B:0501
cs=0x75b;eip=0x000503; 	T(MOV(dl, *(raddr(ss,bp+4))));	// 17455                  mov     dl, [bp+4] ;~ 075B:0503
cs=0x75b;eip=0x000506; 	T(MOV(dh, *(raddr(ss,bp+6))));	// 17456                  mov     dh, [bp+6] ;~ 075B:0506
cs=0x75b;eip=0x000509; 	T(CMP(byte_15b0c, 0x0FF));	// 17457                  cmp     byte_15B0C, 0FFh ;~ 075B:0509
cs=0x75b;eip=0x00050e; 	J(JNZ(loc_160a9));	// 17458                  jnz     short loc_160A9 ;~ 075B:050E
cs=0x75b;eip=0x000510; 	T(bx = word_15b12;);	// 17459                  mov     bx, word_15B12 ;~ 075B:0510
cs=0x75b;eip=0x000514; 	T(MOV(al, *(raddr(ds,bx+si))));	// 17460                  mov     al, [bx+si] ;~ 075B:0514
cs=0x75b;eip=0x000516; 	X(byte_15b06 = al;);	// 17461                  mov     byte_15B06, al ;~ 075B:0516
loc_160a9:
	// 4727 
cs=0x75b;eip=0x000519; 	T(CMP(*(raddr(ss,bp+2)), 1));	// 17464                  cmp     byte ptr [bp+2], 1 ;~ 075B:0519
cs=0x75b;eip=0x00051d; 	J(JZ(loc_160ed));	// 17465                  jz      short loc_160ED ;~ 075B:051D
cs=0x75b;eip=0x00051f; 	T(ch = byte_15b0f;);	// 17466                  mov     ch, byte_15B0F ;~ 075B:051F
loc_160b3:
	// 4728 
cs=0x75b;eip=0x000523; 	T(bx = word_15b08;);	// 17469                  mov     bx, word_15B08 ;~ 075B:0523
cs=0x75b;eip=0x000527; 	T(MOV(bx, *(dw*)(raddr(ds,bx+si))));	// 17470                  mov     bx, [bx+si] ;~ 075B:0527
cs=0x75b;eip=0x000529; 	T(XCHG(bh, bl));	// 17471                  xchg    bh, bl ;~ 075B:0529
cs=0x75b;eip=0x00052b; 	T(cl = byte_15b0d;);	// 17472                  mov     cl, byte_15B0D ;~ 075B:052B
cs=0x75b;eip=0x00052f; 	T(SHL(bx, cl));	// 17473                  shl     bx, cl ;~ 075B:052F
cs=0x75b;eip=0x000531; 	X(PUSH(di));	// 17474                  push    di ;~ 075B:0531
cs=0x75b;eip=0x000532; 	T(MOV(di, *(dw*)(raddr(cs,di+0x0E))));	// 17475                  mov     di, cs:[di+0Eh] ;~ 075B:0532
cs=0x75b;eip=0x000537; 	T(ADD(di, *(dw*)(raddr(ss,bp+8))));	// 17476                  add     di, [bp+8] ;~ 075B:0537
cs=0x75b;eip=0x00053a; 	T(cl = byte_15b06;);	// 17477                  mov     cl, byte_15B06 ;~ 075B:053A
cs=0x75b;eip=0x00053e; 	T(DEC(cl));	// 17478                  dec     cl ;~ 075B:053E
cs=0x75b;eip=0x000540; 	J(JZ(loc_160de));	// 17479                  jz      short loc_160DE ;~ 075B:0540
loc_160d2:
	// 4729 
cs=0x75b;eip=0x000542; 	T(SHL(bx, 1));	// 17482                  shl     bx, 1 ;~ 075B:0542
cs=0x75b;eip=0x000544; 	J(JNC(loc_160d9));	// 17483                  jnb     short loc_160D9 ;~ 075B:0544
cs=0x75b;eip=0x000546; 	X(MOV(*(raddr(es,di)), dl));	// 17484                  mov     es:[di], dl ;~ 075B:0546
loc_160d9:
	// 4730 
cs=0x75b;eip=0x000549; 	T(INC(di));	// 17487                  inc     di ;~ 075B:0549
cs=0x75b;eip=0x00054a; 	T(DEC(cl));	// 17488                  dec     cl ;~ 075B:054A
cs=0x75b;eip=0x00054c; 	J(JNZ(loc_160d2));	// 17489                  jnz     short loc_160D2 ;~ 075B:054C
loc_160de:
	// 4731 
cs=0x75b;eip=0x00054e; 	X(POP(di));	// 17492                  pop     di ;~ 075B:054E
cs=0x75b;eip=0x00054f; 	T(ADD(di, 2));	// 17493                  add     di, 2 ;~ 075B:054F
cs=0x75b;eip=0x000552; 	T(ADD(si, 0x100));	// 17494                  add     si, 100h ;~ 075B:0552
cs=0x75b;eip=0x000556; 	T(DEC(ch));	// 17495                  dec     ch ;~ 075B:0556
cs=0x75b;eip=0x000558; 	J(JNZ(loc_160b3));	// 17496                  jnz     short loc_160B3 ;~ 075B:0558
cs=0x75b;eip=0x00055a; 	J(JMP(loc_16129));	// 17497                  jmp     short loc_16129 ;~ 075B:055A
loc_160ed:
	// 4732 
cs=0x75b;eip=0x00055d; 	T(ch = byte_15b0f;);	// 17503                  mov     ch, byte_15B0F ;~ 075B:055D
loc_160f1:
	// 4733 
cs=0x75b;eip=0x000561; 	T(bx = word_15b08;);	// 17506                  mov     bx, word_15B08 ;~ 075B:0561
cs=0x75b;eip=0x000565; 	T(MOV(bx, *(dw*)(raddr(ds,bx+si))));	// 17507                  mov     bx, [bx+si] ;~ 075B:0565
cs=0x75b;eip=0x000567; 	T(XCHG(bh, bl));	// 17508                  xchg    bh, bl ;~ 075B:0567
cs=0x75b;eip=0x000569; 	T(cl = byte_15b0d;);	// 17509                  mov     cl, byte_15B0D ;~ 075B:0569
cs=0x75b;eip=0x00056d; 	T(SHL(bx, cl));	// 17510                  shl     bx, cl ;~ 075B:056D
cs=0x75b;eip=0x00056f; 	X(PUSH(di));	// 17511                  push    di ;~ 075B:056F
cs=0x75b;eip=0x000570; 	T(MOV(di, *(dw*)(raddr(cs,di+0x0E))));	// 17512                  mov     di, cs:[di+0Eh] ;~ 075B:0570
cs=0x75b;eip=0x000575; 	T(ADD(di, *(dw*)(raddr(ss,bp+8))));	// 17513                  add     di, [bp+8] ;~ 075B:0575
cs=0x75b;eip=0x000578; 	T(cl = byte_15b06;);	// 17514                  mov     cl, byte_15B06 ;~ 075B:0578
cs=0x75b;eip=0x00057c; 	T(OR(cl, cl));	// 17515                  or      cl, cl ;~ 075B:057C
cs=0x75b;eip=0x00057e; 	J(JZ(loc_1611d));	// 17516                  jz      short loc_1611D ;~ 075B:057E
loc_16110:
	// 4734 
cs=0x75b;eip=0x000580; 	T(ax = dx;);	// 17519                  mov     ax, dx ;~ 075B:0580
cs=0x75b;eip=0x000582; 	T(SHL(bx, 1));	// 17520                  shl     bx, 1 ;~ 075B:0582
cs=0x75b;eip=0x000584; 	J(JC(loc_16118));	// 17521                  jb      short loc_16118 ;~ 075B:0584
cs=0x75b;eip=0x000586; 	T(XCHG(ah, al));	// 17522                  xchg    ah, al ;~ 075B:0586
loc_16118:
	// 4735 
cs=0x75b;eip=0x000588; 	X(STOSB);	// 17525                  stosb ;~ 075B:0588
cs=0x75b;eip=0x000589; 	T(DEC(cl));	// 17526                  dec     cl ;~ 075B:0589
cs=0x75b;eip=0x00058b; 	J(JNZ(loc_16110));	// 17527                  jnz     short loc_16110 ;~ 075B:058B
loc_1611d:
	// 4736 
cs=0x75b;eip=0x00058d; 	X(POP(di));	// 17530                  pop     di ;~ 075B:058D
cs=0x75b;eip=0x00058e; 	T(ADD(di, 2));	// 17531                  add     di, 2 ;~ 075B:058E
cs=0x75b;eip=0x000591; 	T(ADD(si, 0x100));	// 17532                  add     si, 100h ;~ 075B:0591
cs=0x75b;eip=0x000595; 	T(DEC(ch));	// 17533                  dec     ch ;~ 075B:0595
cs=0x75b;eip=0x000597; 	J(JNZ(loc_160f1));	// 17534                  jnz     short loc_160F1 ;~ 075B:0597
loc_16129:
	// 4737 
cs=0x75b;eip=0x000599; 	X(POP(di));	// 17537                  pop     di ;~ 075B:0599
cs=0x75b;eip=0x00059a; 	X(POP(si));	// 17538                  pop     si ;~ 075B:059A
loc_1612b:
	// 4738 
cs=0x75b;eip=0x00059b; 	X(DEC(byte_15b07));	// 17541                  dec     byte_15B07 ;~ 075B:059B
cs=0x75b;eip=0x00059f; 	J(JZ(loc_16148));	// 17542                  jz      short loc_16148 ;~ 075B:059F
cs=0x75b;eip=0x0005a1; 	X(byte_15b0d = 0;);	// 17543                  mov     byte_15B0D, 0 ;~ 075B:05A1
cs=0x75b;eip=0x0005a6; 	T(XOR(ah, ah));	// 17544                  xor     ah, ah ;~ 075B:05A6
cs=0x75b;eip=0x0005a8; 	T(al = byte_15b06;);	// 17545                  mov     al, byte_15B06 ;~ 075B:05A8
cs=0x75b;eip=0x0005ab; 	X(ADD(*(dw*)(raddr(ss,bp+8)), ax));	// 17546                  add     [bp+8], ax ;~ 075B:05AB
cs=0x75b;eip=0x0005ae; 	T(al = byte_15b0c;);	// 17547                  mov     al, byte_15B0C ;~ 075B:05AE
cs=0x75b;eip=0x0005b1; 	X(byte_15b06 = al;);	// 17548                  mov     byte_15B06, al ;~ 075B:05B1
cs=0x75b;eip=0x0005b4; 	J(JMP(loc_1605d));	// 17549                  jmp     loc_1605D ;~ 075B:05B4
loc_16147:
	// 4739 
cs=0x75b;eip=0x0005b7; 	X(POP(ax));	// 17554                  pop     ax ;~ 075B:05B7
loc_16148:
	// 4740 
cs=0x75b;eip=0x0005b8; 	X(POP(es));	// 17558                  pop     es ;~ 075B:05B8
cs=0x75b;eip=0x0005b9; 	X(POP(ds));	// 17560                  pop     ds ;~ 075B:05B9
cs=0x75b;eip=0x0005ba; 	J(RETF(0));	// 17562                  retf ;~ 075B:05BA
sub_1614b:
	// 17569 
cs=0x75b;eip=0x0005bb; 	R(cx=*(dw*)raddr(ss,sp));	// 17571                  pop     cx ;~ 075B:05BB
cs=0x75b;eip=0x0005bc; 	X(PUSH(ds));	// 17572                  push    ds ;~ 075B:05BC
cs=0x75b;eip=0x0005bd; 	X(PUSH(es));	// 17573                  push    es ;~ 075B:05BD
cs=0x75b;eip=0x0005be; 	T(CMP(*(raddr(ss,bx)), 0));	// 17574                  cmp     byte ptr ss:[bx], 0 ;~ 075B:05BE
cs=0x75b;eip=0x0005c2; 	J(JZ(loc_16148));	// 17575                  jz      short loc_16148 ;~ 075B:05C2
cs=0x75b;eip=0x0005c4; 	T(ax = seg_offset(seg003););	// 17576                  mov     ax, seg seg003 ;~ 075B:05C4
cs=0x75b;eip=0x0005c7; 	T(ds = ax;);	// 17577                  mov     ds, ax ;~ 075B:05C7
cs=0x75b;eip=0x0005c9; 	T(MOV(di, *(dw*)(raddr(ss,bp+0))));	// 17579                  mov     di, [bp+0] ;~ 075B:05C9
cs=0x75b;eip=0x0005cc; 	T(SHL(di, 1));	// 17580                  shl     di, 1 ;~ 075B:05CC
cs=0x75b;eip=0x0005ce; 	T(MOV(es, *(dw*)(raddr(cs,di+0x681))));	// 17581                  mov     es, word ptr cs:[di+681h] ;~ 075B:05CE
cs=0x75b;eip=0x0005d3; 	X(byte_15b07 = 0x0FF;);	// 17583                  mov     byte_15B07, 0FFh ;~ 075B:05D3
cs=0x75b;eip=0x0005d8; 	X(word_15b10 = 0;);	// 17584                  mov     word_15B10, 0 ;~ 075B:05D8
cs=0x75b;eip=0x0005de; 	X(byte_15b0d = 0;);	// 17585                  mov     byte_15B0D, 0 ;~ 075B:05DE
cs=0x75b;eip=0x0005e3; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0C))));	// 17586                  mov     di, [bp+0Ch] ;~ 075B:05E3
cs=0x75b;eip=0x0005e6; 	T(SHL(di, 1));	// 17587                  shl     di, 1 ;~ 075B:05E6
cs=0x75b;eip=0x0005e8; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x0EE))));	// 17588                  mov     ax, [di+0EEh] ;~ 075B:05E8
cs=0x75b;eip=0x0005ec; 	X(word_15b0a = ax;);	// 17589                  mov     word_15B0A, ax ;~ 075B:05EC
cs=0x75b;eip=0x0005ef; 	T(MOV(al, *(raddr(ds,di+0x106))));	// 17590                  mov     al, [di+106h] ;~ 075B:05EF
cs=0x75b;eip=0x0005f3; 	X(byte_15b0c = al;);	// 17591                  mov     byte_15B0C, al ;~ 075B:05F3
cs=0x75b;eip=0x0005f6; 	X(byte_15b06 = al;);	// 17592                  mov     byte_15B06, al ;~ 075B:05F6
cs=0x75b;eip=0x0005f9; 	X(byte_15b0e = al;);	// 17593                  mov     byte_15B0E, al ;~ 075B:05F9
cs=0x75b;eip=0x0005fc; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x0E2))));	// 17594                  mov     ax, [di+0E2h] ;~ 075B:05FC
cs=0x75b;eip=0x000600; 	X(word_15b12 = ax;);	// 17595                  mov     word_15B12, ax ;~ 075B:0600
cs=0x75b;eip=0x000603; 	T(MOV(ax, *(dw*)(raddr(ss,bp+2))));	// 17596                  mov     ax, [bp+2] ;~ 075B:0603
cs=0x75b;eip=0x000606; 	T(AND(ax, 1));	// 17597                  and     ax, 1 ;~ 075B:0606
cs=0x75b;eip=0x000609; 	T(ADD(di, ax));	// 17598                  add     di, ax ;~ 075B:0609
cs=0x75b;eip=0x00060b; 	T(MOV(ah, *(raddr(ds,di+0x0FA))));	// 17599                  mov     ah, [di+0FAh] ;~ 075B:060B
cs=0x75b;eip=0x00060f; 	X(byte_15b0f = ah;);	// 17600                  mov     byte_15B0F, ah ;~ 075B:060F
cs=0x75b;eip=0x000613; __disp=cx;
	R(RETN(0));	// 17601                  jmp     cx ;~ 075B:0613

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
cs=0x75b;eip=0x000615; 	X(PUSH(ds));	// 17606                  push    ds ;~ 075B:0615
cs=0x75b;eip=0x000616; 	X(PUSH(es));	// 17607                  push    es ;~ 075B:0616
cs=0x75b;eip=0x000617; 	T(ax = seg_offset(seg003););	// 17608                  mov     ax, seg seg003 ;~ 075B:0617
cs=0x75b;eip=0x00061a; 	T(ds = ax;);	// 17609                  mov     ds, ax ;~ 075B:061A
cs=0x75b;eip=0x00061c; 	T(es = word_15d2e;);	// 17611                  mov     es, cs:word_15D2E ;~ 075B:061C
cs=0x75b;eip=0x000621; 	T(STD);	// 17613                  std ;~ 075B:0621
cs=0x75b;eip=0x000622; 	T(OR(si, si));	// 17614                  or      si, si ;~ 075B:0622
cs=0x75b;eip=0x000624; 	J(JZ(loc_161b7));	// 17615                  jz      short loc_161B7 ;~ 075B:0624
cs=0x75b;eip=0x000626; 	T(CLD);	// 17616                  cld ;~ 075B:0626
loc_161b7:
	// 4741 
cs=0x75b;eip=0x000627; 	T(DEC(bx));	// 17619                  dec     bx ;~ 075B:0627
cs=0x75b;eip=0x000628; 	T(CMP(dl, 1));	// 17620                  cmp     dl, 1 ;~ 075B:0628
cs=0x75b;eip=0x00062b; 	J(JL(loc_161c0));	// 17621                  jl      short loc_161C0 ;~ 075B:062B
cs=0x75b;eip=0x00062d; 	T(ADD(bx, 0x14));	// 17622                  add     bx, 14h ;~ 075B:062D
loc_161c0:
	// 4742 
cs=0x75b;eip=0x000630; 	T(OR(cl, cl));	// 17625                  or      cl, cl ;~ 075B:0630
cs=0x75b;eip=0x000632; 	J(JZ(loc_161c8));	// 17626                  jz      short loc_161C8 ;~ 075B:0632
cs=0x75b;eip=0x000634; 	T(ADD(si, 4));	// 17627                  add     si, 4 ;~ 075B:0634
cs=0x75b;eip=0x000637; 	T(INC(bx));	// 17628                  inc     bx ;~ 075B:0637
loc_161c8:
	// 4743 
cs=0x75b;eip=0x000638; 	T(al = 0x0F;);	// 17631                  mov     al, 0Fh ;~ 075B:0638
cs=0x75b;eip=0x00063a; 	T(ah = al;);	// 17632                  mov     ah, al ;~ 075B:063A
cs=0x75b;eip=0x00063c; 	T(MOV(dx, *(dw*)(raddr(ds,si+0x1C84))));	// 17633                  mov     dx, [si+1C84h] ;~ 075B:063C
cs=0x75b;eip=0x000640; 	T(ch = 0x0A;);	// 17634                  mov     ch, 0Ah ;~ 075B:0640
loc_161d2:
	// 4744 
cs=0x75b;eip=0x000642; 	T(CMP(bx, *(dw*)(raddr(ds,si+0x1C8C))));	// 17637                  cmp     bx, [si+1C8Ch] ;~ 075B:0642
cs=0x75b;eip=0x000646; 	J(JC(loc_1620d));	// 17638                  jb      short loc_1620D ;~ 075B:0646
cs=0x75b;eip=0x000648; 	T(CMP(bx, *(dw*)(raddr(ds,si+0x1C94))));	// 17639                  cmp     bx, [si+1C94h] ;~ 075B:0648
cs=0x75b;eip=0x00064c; 	J(JA(loc_161ff));	// 17640                  ja      short loc_161FF ;~ 075B:064C
cs=0x75b;eip=0x00064e; 	T(di = bx;);	// 17641                  mov     di, bx ;~ 075B:064E
cs=0x75b;eip=0x000650; 	T(SHL(di, 1));	// 17642                  shl     di, 1 ;~ 075B:0650
cs=0x75b;eip=0x000652; 	T(MOV(di, *(dw*)(raddr(cs,di+0x0E))));	// 17643                  mov     di, cs:[di+0Eh] ;~ 075B:0652
cs=0x75b;eip=0x000657; 	T(ADD(di, dx));	// 17644                  add     di, dx ;~ 075B:0657
cs=0x75b;eip=0x000659; 	T(CMP(ch, 5));	// 17645                  cmp     ch, 5 ;~ 075B:0659
cs=0x75b;eip=0x00065c; 	J(JNZ(loc_161f3));	// 17646                  jnz     short loc_161F3 ;~ 075B:065C
cs=0x75b;eip=0x00065e; 	X(STOSB);	// 17647                  stosb ;~ 075B:065E
cs=0x75b;eip=0x00065f; 	X(STOSB);	// 17648                  stosb ;~ 075B:065F
cs=0x75b;eip=0x000660; 	J(JMP(loc_161ff));	// 17649                  jmp     short loc_161FF ;~ 075B:0660
loc_161f3:
	// 4745 
cs=0x75b;eip=0x000663; 	T(CMP(ch, 0x0A));	// 17655                  cmp     ch, 0Ah ;~ 075B:0663
cs=0x75b;eip=0x000666; 	J(JNZ(loc_161fe));	// 17656                  jnz     short loc_161FE ;~ 075B:0666
cs=0x75b;eip=0x000668; 	X(STOSB);	// 17657                  stosb ;~ 075B:0668
cs=0x75b;eip=0x000669; 	X(STOSB);	// 17658                  stosb ;~ 075B:0669
cs=0x75b;eip=0x00066a; 	T(OR(cl, cl));	// 17659                  or      cl, cl ;~ 075B:066A
cs=0x75b;eip=0x00066c; 	J(JNZ(loc_161ff));	// 17660                  jnz     short loc_161FF ;~ 075B:066C
loc_161fe:
	// 4746 
cs=0x75b;eip=0x00066e; 	X(STOSB);	// 17663                  stosb ;~ 075B:066E
loc_161ff:
	// 4747 
cs=0x75b;eip=0x00066f; 	T(SUB(bx, 2));	// 17667                  sub     bx, 2 ;~ 075B:066F
cs=0x75b;eip=0x000672; 	T(CMP(ch, 0x0A));	// 17668                  cmp     ch, 0Ah ;~ 075B:0672
cs=0x75b;eip=0x000675; 	J(JNZ(loc_16209));	// 17669                  jnz     short loc_16209 ;~ 075B:0675
cs=0x75b;eip=0x000677; 	T(XOR(ch, ch));	// 17670                  xor     ch, ch ;~ 075B:0677
loc_16209:
	// 4748 
cs=0x75b;eip=0x000679; 	T(INC(ch));	// 17673                  inc     ch ;~ 075B:0679
cs=0x75b;eip=0x00067b; 	J(JMP(loc_161d2));	// 17674                  jmp     short loc_161D2 ;~ 075B:067B
loc_1620d:
	// 4749 
cs=0x75b;eip=0x00067d; 	T(CLD);	// 17678                  cld ;~ 075B:067D
cs=0x75b;eip=0x00067e; 	X(POP(es));	// 17679                  pop     es ;~ 075B:067E
cs=0x75b;eip=0x00067f; 	X(POP(ds));	// 17681                  pop     ds ;~ 075B:067F
cs=0x75b;eip=0x000680; 	J(RETF(0));	// 17683                  retf ;~ 075B:0680

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
        case m2c::kseg004_615_proc: 	goto seg004_615_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1621b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1621b:
    _begin:
cs=0x75b;eip=0x00068b; 	T(bx = sp;);	// 17700                  mov     bx, sp ;~ 075B:068B
cs=0x75b;eip=0x00068d; 	T(MOV(ax, *(dw*)(raddr(ss,bx+4))));	// 17701                  mov     ax, ss:[bx+4] ;~ 075B:068D
cs=0x75b;eip=0x000691; 	T(MOV(bx, *(dw*)(raddr(ss,bx+6))));	// 17702                  mov     bx, ss:[bx+6] ;~ 075B:0691
cs=0x75b;eip=0x000695; 	T(SHL(bx, 1));	// 17703                  shl     bx, 1 ;~ 075B:0695
cs=0x75b;eip=0x000697; 	X(MOV(*(dw*)(raddr(cs,bx+0x681)), ax));	// 17704                  mov     cs:[bx+681h], ax ;~ 075B:0697
cs=0x75b;eip=0x00069c; 	J(RETF(0));	// 17705                  retf ;~ 075B:069C

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_1621b: 	goto sub_1621b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1622d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1622d:
    _begin:
cs=0x75b;eip=0x00069d; 	T(ax = seg_16213;);	// 17713                  mov     ax, cs:seg_16213 ;~ 075B:069D
cs=0x75b;eip=0x0006a1; 	X(word_15d2e = ax;);	// 17714                  mov     cs:word_15D2E, ax ;~ 075B:06A1
cs=0x75b;eip=0x0006a5; 	J(RETF(0));	// 17715                  retf ;~ 075B:06A5

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_1622d: 	goto sub_1622d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_16236(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_16236:
    _begin:
cs=0x75b;eip=0x0006a6; 	T(bx = sp;);	// 17724                  mov     bx, sp ;~ 075B:06A6
cs=0x75b;eip=0x0006a8; 	T(MOV(ax, *(dw*)(raddr(ss,bx+4))));	// 17725                  mov     ax, ss:[bx+4] ;~ 075B:06A8
cs=0x75b;eip=0x0006ac; 	X(PUSH(bx));	// 17726                  push    bx ;~ 075B:06AC
cs=0x75b;eip=0x0006ad; 	T(bx = ax;);	// 17727                  mov     bx, ax ;~ 075B:06AD
cs=0x75b;eip=0x0006af; 	T(SHL(bx, 1));	// 17728                  shl     bx, 1 ;~ 075B:06AF
cs=0x75b;eip=0x0006b1; 	T(MOV(ax, *(dw*)(raddr(cs,bx+0x681))));	// 17729                  mov     ax, cs:[bx+681h] ;~ 075B:06B1
cs=0x75b;eip=0x0006b6; 	X(word_15d2e = ax;);	// 17730                  mov     cs:word_15D2E, ax ;~ 075B:06B6
cs=0x75b;eip=0x0006ba; 	X(POP(bx));	// 17731                  pop     bx ;~ 075B:06BA
cs=0x75b;eip=0x0006bb; 	J(RETF(0));	// 17732                  retf ;~ 075B:06BB

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_16236: 	goto sub_16236;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg004_6bc_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg004_6bc_proc:
    _begin:
cs=0x75b;eip=0x0006bc; 	J(RETF(0));	// 17736                  retf ;~ 075B:06BC
ret_75b_6bd:
	// 4750 
cs=0x75b;eip=0x0006bd; 	X(word_15d2e = ax;);	// 17738                  mov     cs:word_15D2E, ax ;~ 075B:06BD
cs=0x75b;eip=0x0006c1; 	J(RETF(0));	// 17739                  retf ;~ 075B:06C1
ret_75b_6c2:
	// 4751 
cs=0x75b;eip=0x0006c2; 	T(ax = word_15d2e;);	// 17741                  mov     ax, cs:word_15D2E ;~ 075B:06C2
cs=0x75b;eip=0x0006c6; 	J(RETF(0));	// 17742                  retf ;~ 075B:06C6
ret_75b_6c7:
	// 4752 
cs=0x75b;eip=0x0006c7; 	X(word_15d30 = 0;);	// 17744                  mov     cs:word_15D30, 0 ;~ 075B:06C7
cs=0x75b;eip=0x0006ce; 	J(RETF(0));	// 17745                  retf ;~ 075B:06CE
ret_75b_6cf:
	// 4753 
cs=0x75b;eip=0x0006cf; 	T(bx = sp;);	// 17747                  mov     bx, sp ;~ 075B:06CF
cs=0x75b;eip=0x0006d1; 	T(MOV(ax, *(dw*)(raddr(ss,bx+4))));	// 17748                  mov     ax, ss:[bx+4] ;~ 075B:06D1
cs=0x75b;eip=0x0006d5; 	X(word_15d30 = ax;);	// 17749                  mov     cs:word_15D30, ax ;~ 075B:06D5
cs=0x75b;eip=0x0006d9; 	J(RETF(0));	// 17750                  retf ;~ 075B:06D9
ret_75b_6da:
	// 4754 
cs=0x75b;eip=0x0006da; 	T(ax = 0x5580;);	// 17752                  mov     ax, 5580h ;~ 075B:06DA
cs=0x75b;eip=0x0006dd; 	J(RETF(0));	// 17753                  retf ;~ 075B:06DD
ret_75b_6de:
	// 4755 
cs=0x75b;eip=0x0006de; 	T(ax = 0x1950;);	// 17756                  mov     ax, 1950h ;~ 075B:06DE
cs=0x75b;eip=0x0006e1; 	J(RETF(0));	// 17757                  retf ;~ 075B:06E1
ret_75b_6e2:
	// 4756 
cs=0x75b;eip=0x0006e2; 	T(ax = word_15d30;);	// 17759                  mov     ax, cs:word_15D30 ;~ 075B:06E2
cs=0x75b;eip=0x0006e6; 	J(RETF(0));	// 17760                  retf ;~ 075B:06E6
ret_75b_6e7:
	// 4757 
cs=0x75b;eip=0x0006e7; 	T(bx = sp;);	// 17762                  mov     bx, sp ;~ 075B:06E7
cs=0x75b;eip=0x0006e9; 	T(MOV(ax, *(dw*)(raddr(ss,bx+4))));	// 17763                  mov     ax, ss:[bx+4] ;~ 075B:06E9
cs=0x75b;eip=0x0006ed; 	X(PUSH(ds));	// 17764                  push    ds ;~ 075B:06ED
cs=0x75b;eip=0x0006ee; 	T(dx = seg_offset(seg003););	// 17765                  mov     dx, seg seg003 ;~ 075B:06EE
cs=0x75b;eip=0x0006f1; 	T(ds = dx;);	// 17766                  mov     ds, dx ;~ 075B:06F1
cs=0x75b;eip=0x0006f3; 	X(word_13f5c = ax;);	// 17768                  mov     word_13F5C, ax ;~ 075B:06F3
cs=0x75b;eip=0x0006f6; 	X(POP(ds));	// 17769                  pop     ds ;~ 075B:06F6
cs=0x75b;eip=0x0006f7; 	J(RETF(0));	// 17771                  retf ;~ 075B:06F7
ret_75b_6f8:
	// 4758 
cs=0x75b;eip=0x0006f8; 	T(bx = sp;);	// 17773                  mov     bx, sp ;~ 075B:06F8
cs=0x75b;eip=0x0006fa; 	T(MOV(ax, *(dw*)(raddr(ss,bx+4))));	// 17774                  mov     ax, ss:[bx+4] ;~ 075B:06FA
cs=0x75b;eip=0x0006fe; 	X(PUSH(ds));	// 17775                  push    ds ;~ 075B:06FE
cs=0x75b;eip=0x0006ff; 	T(dx = seg_offset(seg003););	// 17776                  mov     dx, seg seg003 ;~ 075B:06FF
cs=0x75b;eip=0x000702; 	T(ds = dx;);	// 17777                  mov     ds, dx ;~ 075B:0702
cs=0x75b;eip=0x000704; 	X(word_13f5e = ax;);	// 17779                  mov     word_13F5E, ax ;~ 075B:0704
cs=0x75b;eip=0x000707; 	X(POP(ds));	// 17780                  pop     ds ;~ 075B:0707
cs=0x75b;eip=0x000708; 	J(RETF(0));	// 17782                  retf ;~ 075B:0708
ret_75b_709:
	// 4759 
cs=0x75b;eip=0x000709; 	T(al = byte_15d32;);	// 17784                  mov     al, cs:byte_15D32 ;~ 075B:0709
cs=0x75b;eip=0x00070d; 	J(RETF(0));	// 17785                  retf ;~ 075B:070D
ret_75b_70e:
	// 4760 
cs=0x75b;eip=0x00070e; 	T(bx = sp;);	// 17787                  mov     bx, sp ;~ 075B:070E
cs=0x75b;eip=0x000710; 	T(MOV(ax, *(dw*)(raddr(ss,bx+4))));	// 17788                  mov     ax, ss:[bx+4] ;~ 075B:0710
cs=0x75b;eip=0x000714; 	T(MOV(bx, *(dw*)(raddr(ss,bx+6))));	// 17789                  mov     bx, ss:[bx+6] ;~ 075B:0714
cs=0x75b;eip=0x000718; 	T(SHL(bx, 1));	// 17790                  shl     bx, 1 ;~ 075B:0718
cs=0x75b;eip=0x00071a; 	T(ADD(ax, *(dw*)(raddr(cs,bx+0x0E))));	// 17791                  add     ax, cs:[bx+0Eh] ;~ 075B:071A
cs=0x75b;eip=0x00071f; 	J(RETF(0));	// 17792                  retf ;~ 075B:071F
ret_75b_720:
	// 4761 
cs=0x75b;eip=0x000720; 	T(ax = 3;);	// 17794                  mov     ax, 3 ;~ 075B:0720
cs=0x75b;eip=0x000723; 	J(RETF(0));	// 17795                  retf ;~ 075B:0723
ret_75b_724:
	// 4762 
cs=0x75b;eip=0x000724; 	J(RETF(0));	// 17797                  retf ;~ 075B:0724
ret_75b_725:
	// 4763 
cs=0x75b;eip=0x000725; 	X(PUSH(bp));	// 17799                  push    bp ;~ 075B:0725
cs=0x75b;eip=0x000726; 	T(bp = sp;);	// 17800                  mov     bp, sp ;~ 075B:0726
cs=0x75b;eip=0x000728; 	X(PUSH(si));	// 17801                  push    si ;~ 075B:0728
cs=0x75b;eip=0x000729; 	X(PUSH(di));	// 17802                  push    di ;~ 075B:0729
cs=0x75b;eip=0x00072a; 	T(MOV(bp, *(dw*)(raddr(ss,bp+6))));	// 17803                  mov     bp, [bp+6] ;~ 075B:072A
cs=0x75b;eip=0x00072d; 	J(CALLF(sub_162c6,0));	// 17804                  call    sub_162C6 ;~ 075B:072D
cs=0x75b;eip=0x000732; 	X(POP(di));	// 17805                  pop     di ;~ 075B:0732
cs=0x75b;eip=0x000733; 	X(POP(si));	// 17806                  pop     si ;~ 075B:0733
cs=0x75b;eip=0x000734; 	X(POP(bp));	// 17807                  pop     bp ;~ 075B:0734
cs=0x75b;eip=0x000735; 	J(RETF(0));	// 17808                  retf ;~ 075B:0735

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kret_75b_6bd: 	goto ret_75b_6bd;
        case m2c::kret_75b_6c2: 	goto ret_75b_6c2;
        case m2c::kret_75b_6c7: 	goto ret_75b_6c7;
        case m2c::kret_75b_6cf: 	goto ret_75b_6cf;
        case m2c::kret_75b_6da: 	goto ret_75b_6da;
        case m2c::kret_75b_6de: 	goto ret_75b_6de;
        case m2c::kret_75b_6e2: 	goto ret_75b_6e2;
        case m2c::kret_75b_6e7: 	goto ret_75b_6e7;
        case m2c::kret_75b_6f8: 	goto ret_75b_6f8;
        case m2c::kret_75b_709: 	goto ret_75b_709;
        case m2c::kret_75b_70e: 	goto ret_75b_70e;
        case m2c::kret_75b_720: 	goto ret_75b_720;
        case m2c::kret_75b_724: 	goto ret_75b_724;
        case m2c::kret_75b_725: 	goto ret_75b_725;
        case m2c::kseg004_6bc_proc: 	goto seg004_6bc_proc;
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
cs=0x75b;eip=0x000736; 	X(PUSH(ds));	// 17814                  push    ds ;~ 075B:0736
cs=0x75b;eip=0x000737; 	X(PUSH(es));	// 17815                  push    es ;~ 075B:0737
cs=0x75b;eip=0x000738; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0C))));	// 17816                  push    word ptr [bp+0Ch] ;~ 075B:0738
cs=0x75b;eip=0x00073b; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0E))));	// 17817                  push    word ptr [bp+0Eh] ;~ 075B:073B
cs=0x75b;eip=0x00073e; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x14))));	// 17818                  mov     cx, [bp+14h] ;~ 075B:073E
cs=0x75b;eip=0x000741; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 17819                  mov     ax, [bp+8] ;~ 075B:0741
cs=0x75b;eip=0x000744; 	T(CMP(ax, cx));	// 17820                  cmp     ax, cx ;~ 075B:0744
cs=0x75b;eip=0x000746; 	J(JGE(loc_162f3));	// 17821                  jge     short loc_162F3 ;~ 075B:0746
cs=0x75b;eip=0x000748; 	T(bx = ax;);	// 17822                  mov     bx, ax ;~ 075B:0748
cs=0x75b;eip=0x00074a; 	T(ADD(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 17823                  add     bx, [bp+0Ch] ;~ 075B:074A
cs=0x75b;eip=0x00074d; 	T(DEC(bx));	// 17824                  dec     bx ;~ 075B:074D
cs=0x75b;eip=0x00074e; 	T(CMP(bx, cx));	// 17825                  cmp     bx, cx ;~ 075B:074E
cs=0x75b;eip=0x000750; 	J(JGE(loc_162e5));	// 17826                  jge     short loc_162E5 ;~ 075B:0750
cs=0x75b;eip=0x000752; 	J(JMP(loc_16351));	// 17827                  jmp     short loc_16351 ;~ 075B:0752
loc_162e5:
	// 4764 
cs=0x75b;eip=0x000755; 	T(SUB(cx, ax));	// 17833                  sub     cx, ax ;~ 075B:0755
cs=0x75b;eip=0x000757; 	X(ADD(*(dw*)(raddr(ss,bp+8)), cx));	// 17834                  add     [bp+8], cx ;~ 075B:0757
cs=0x75b;eip=0x00075a; 	X(ADD(*(dw*)(raddr(ss,bp+2)), cx));	// 17835                  add     [bp+2], cx ;~ 075B:075A
cs=0x75b;eip=0x00075d; 	X(SUB(*(dw*)(raddr(ss,bp+0x0C)), cx));	// 17836                  sub     [bp+0Ch], cx ;~ 075B:075D
cs=0x75b;eip=0x000760; 	J(JMP(loc_162f9));	// 17837                  jmp     short loc_162F9 ;~ 075B:0760
loc_162f3:
	// 4765 
cs=0x75b;eip=0x000763; 	T(bx = ax;);	// 17843                  mov     bx, ax ;~ 075B:0763
cs=0x75b;eip=0x000765; 	T(ADD(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 17844                  add     bx, [bp+0Ch] ;~ 075B:0765
cs=0x75b;eip=0x000768; 	T(DEC(bx));	// 17845                  dec     bx ;~ 075B:0768
loc_162f9:
	// 4766 
cs=0x75b;eip=0x000769; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x16))));	// 17848                  mov     cx, [bp+16h] ;~ 075B:0769
cs=0x75b;eip=0x00076c; 	T(CMP(bx, cx));	// 17849                  cmp     bx, cx ;~ 075B:076C
cs=0x75b;eip=0x00076e; 	J(JLE(loc_1630c));	// 17850                  jle     short loc_1630C ;~ 075B:076E
cs=0x75b;eip=0x000770; 	T(CMP(ax, cx));	// 17851                  cmp     ax, cx ;~ 075B:0770
cs=0x75b;eip=0x000772; 	J(JLE(loc_16307));	// 17852                  jle     short loc_16307 ;~ 075B:0772
cs=0x75b;eip=0x000774; 	J(JMP(loc_16351));	// 17853                  jmp     short loc_16351 ;~ 075B:0774
loc_16307:
	// 4767 
cs=0x75b;eip=0x000777; 	T(SUB(bx, cx));	// 17859                  sub     bx, cx ;~ 075B:0777
cs=0x75b;eip=0x000779; 	X(SUB(*(dw*)(raddr(ss,bp+0x0C)), bx));	// 17860                  sub     [bp+0Ch], bx ;~ 075B:0779
loc_1630c:
	// 4768 
cs=0x75b;eip=0x00077c; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x10))));	// 17863                  mov     cx, [bp+10h] ;~ 075B:077C
cs=0x75b;eip=0x00077f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 17864                  mov     ax, [bp+0Ah] ;~ 075B:077F
cs=0x75b;eip=0x000782; 	T(CMP(ax, cx));	// 17865                  cmp     ax, cx ;~ 075B:0782
cs=0x75b;eip=0x000784; 	J(JGE(loc_16331));	// 17866                  jge     short loc_16331 ;~ 075B:0784
cs=0x75b;eip=0x000786; 	T(bx = ax;);	// 17867                  mov     bx, ax ;~ 075B:0786
cs=0x75b;eip=0x000788; 	T(ADD(bx, *(dw*)(raddr(ss,bp+0x0E))));	// 17868                  add     bx, [bp+0Eh] ;~ 075B:0788
cs=0x75b;eip=0x00078b; 	T(DEC(bx));	// 17869                  dec     bx ;~ 075B:078B
cs=0x75b;eip=0x00078c; 	T(CMP(bx, cx));	// 17870                  cmp     bx, cx ;~ 075B:078C
cs=0x75b;eip=0x00078e; 	J(JGE(loc_16323));	// 17871                  jge     short loc_16323 ;~ 075B:078E
cs=0x75b;eip=0x000790; 	J(JMP(loc_16351));	// 17872                  jmp     short loc_16351 ;~ 075B:0790
loc_16323:
	// 4769 
cs=0x75b;eip=0x000793; 	T(SUB(cx, ax));	// 17878                  sub     cx, ax ;~ 075B:0793
cs=0x75b;eip=0x000795; 	X(ADD(*(dw*)(raddr(ss,bp+0x0A)), cx));	// 17879                  add     [bp+0Ah], cx ;~ 075B:0795
cs=0x75b;eip=0x000798; 	X(ADD(*(dw*)(raddr(ss,bp+4)), cx));	// 17880                  add     [bp+4], cx ;~ 075B:0798
cs=0x75b;eip=0x00079b; 	X(SUB(*(dw*)(raddr(ss,bp+0x0E)), cx));	// 17881                  sub     [bp+0Eh], cx ;~ 075B:079B
cs=0x75b;eip=0x00079e; 	J(JMP(loc_16337));	// 17882                  jmp     short loc_16337 ;~ 075B:079E
loc_16331:
	// 4770 
cs=0x75b;eip=0x0007a1; 	T(bx = ax;);	// 17888                  mov     bx, ax ;~ 075B:07A1
cs=0x75b;eip=0x0007a3; 	T(ADD(bx, *(dw*)(raddr(ss,bp+0x0E))));	// 17889                  add     bx, [bp+0Eh] ;~ 075B:07A3
cs=0x75b;eip=0x0007a6; 	T(DEC(bx));	// 17890                  dec     bx ;~ 075B:07A6
loc_16337:
	// 4771 
cs=0x75b;eip=0x0007a7; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x12))));	// 17893                  mov     cx, [bp+12h] ;~ 075B:07A7
cs=0x75b;eip=0x0007aa; 	T(CMP(bx, cx));	// 17894                  cmp     bx, cx ;~ 075B:07AA
cs=0x75b;eip=0x0007ac; 	J(JLE(loc_1634a));	// 17895                  jle     short loc_1634A ;~ 075B:07AC
cs=0x75b;eip=0x0007ae; 	T(CMP(ax, cx));	// 17896                  cmp     ax, cx ;~ 075B:07AE
cs=0x75b;eip=0x0007b0; 	J(JLE(loc_16345));	// 17897                  jle     short loc_16345 ;~ 075B:07B0
cs=0x75b;eip=0x0007b2; 	J(JMP(loc_16351));	// 17898                  jmp     short loc_16351 ;~ 075B:07B2
loc_16345:
	// 4772 
cs=0x75b;eip=0x0007b5; 	T(SUB(bx, cx));	// 17904                  sub     bx, cx ;~ 075B:07B5
cs=0x75b;eip=0x0007b7; 	X(SUB(*(dw*)(raddr(ss,bp+0x0E)), bx));	// 17905                  sub     [bp+0Eh], bx ;~ 075B:07B7
loc_1634a:
	// 4773 
cs=0x75b;eip=0x0007ba; 	X(PUSH(bp));	// 17908                  push    bp ;~ 075B:07BA
cs=0x75b;eip=0x0007bb; 	J(CALLF(sub_1636b,0));	// 17909                  call    sub_1636B ;~ 075B:07BB
cs=0x75b;eip=0x0007c0; 	X(POP(bp));	// 17910                  pop     bp ;~ 075B:07C0
loc_16351:
	// 4774 
cs=0x75b;eip=0x0007c1; 	X(POP(*(dw*)(raddr(ss,bp+0x0E))));	// 17914                  pop     word ptr [bp+0Eh] ;~ 075B:07C1
cs=0x75b;eip=0x0007c4; 	X(POP(*(dw*)(raddr(ss,bp+0x0C))));	// 17915                  pop     word ptr [bp+0Ch] ;~ 075B:07C4
cs=0x75b;eip=0x0007c7; 	X(POP(es));	// 17916                  pop     es ;~ 075B:07C7
cs=0x75b;eip=0x0007c8; 	X(POP(ds));	// 17918                  pop     ds ;~ 075B:07C8
cs=0x75b;eip=0x0007c9; 	J(RETF(0));	// 17919                  retf ;~ 075B:07C9

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
cs=0x75b;eip=0x0007ca; 	X(PUSH(bp));	// 17923                  push    bp ;~ 075B:07CA
cs=0x75b;eip=0x0007cb; 	T(bp = sp;);	// 17924                  mov     bp, sp ;~ 075B:07CB
cs=0x75b;eip=0x0007cd; 	X(PUSH(si));	// 17925                  push    si ;~ 075B:07CD
cs=0x75b;eip=0x0007ce; 	X(PUSH(di));	// 17926                  push    di ;~ 075B:07CE
cs=0x75b;eip=0x0007cf; 	T(MOV(bp, *(dw*)(raddr(ss,bp+6))));	// 17927                  mov     bp, [bp+6] ;~ 075B:07CF
cs=0x75b;eip=0x0007d2; 	J(CALLF(sub_1636b,0));	// 17928                  call    sub_1636B ;~ 075B:07D2
cs=0x75b;eip=0x0007d7; 	X(POP(di));	// 17929                  pop     di ;~ 075B:07D7
cs=0x75b;eip=0x0007d8; 	X(POP(si));	// 17930                  pop     si ;~ 075B:07D8
cs=0x75b;eip=0x0007d9; 	X(POP(bp));	// 17931                  pop     bp ;~ 075B:07D9
cs=0x75b;eip=0x0007da; 	J(RETF(0));	// 17932                  retf ;~ 075B:07DA

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
cs=0x75b;eip=0x0007db; 	X(PUSH(ds));	// 17939                  push    ds ;~ 075B:07DB
cs=0x75b;eip=0x0007dc; 	X(PUSH(es));	// 17940                  push    es ;~ 075B:07DC
cs=0x75b;eip=0x0007dd; 	X(PUSH(bp));	// 17941                  push    bp ;~ 075B:07DD
cs=0x75b;eip=0x0007de; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 17942                  mov     ax, [bp+0] ;~ 075B:07DE
cs=0x75b;eip=0x0007e1; 	T(ds = ax;);	// 17943                  mov     ds, ax ;~ 075B:07E1
cs=0x75b;eip=0x0007e3; 	T(MOV(di, *(dw*)(raddr(ss,bp+6))));	// 17945                  mov     di, [bp+6] ;~ 075B:07E3
cs=0x75b;eip=0x0007e6; 	T(SHL(di, 1));	// 17946                  shl     di, 1 ;~ 075B:07E6
cs=0x75b;eip=0x0007e8; 	T(MOV(es, *(dw*)(raddr(cs,di+0x681))));	// 17947                  mov     es, word ptr cs:[di+681h] ;~ 075B:07E8
cs=0x75b;eip=0x0007ed; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 17948                  mov     bx, [bp+0Ch] ;~ 075B:07ED
cs=0x75b;eip=0x0007f0; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0E))));	// 17949                  mov     cx, [bp+0Eh] ;~ 075B:07F0
cs=0x75b;eip=0x0007f3; 	T(MOV(dx, *(dw*)(raddr(ss,bp+8))));	// 17950                  mov     dx, [bp+8] ;~ 075B:07F3
cs=0x75b;eip=0x0007f6; 	T(MOV(si, *(dw*)(raddr(ss,bp+4))));	// 17951                  mov     si, [bp+4] ;~ 075B:07F6
cs=0x75b;eip=0x0007f9; 	T(SHL(si, 1));	// 17952                  shl     si, 1 ;~ 075B:07F9
cs=0x75b;eip=0x0007fb; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0A))));	// 17953                  mov     di, [bp+0Ah] ;~ 075B:07FB
cs=0x75b;eip=0x0007fe; 	T(SHL(di, 1));	// 17954                  shl     di, 1 ;~ 075B:07FE
cs=0x75b;eip=0x000800; 	T(MOV(bp, *(dw*)(raddr(ss,bp+2))));	// 17955                  mov     bp, [bp+2] ;~ 075B:0800
loc_16393:
	// 4775 
cs=0x75b;eip=0x000803; 	X(PUSH(si));	// 17958                  push    si ;~ 075B:0803
cs=0x75b;eip=0x000804; 	X(PUSH(di));	// 17959                  push    di ;~ 075B:0804
cs=0x75b;eip=0x000805; 	X(PUSH(cx));	// 17960                  push    cx ;~ 075B:0805
cs=0x75b;eip=0x000806; 	T(cx = bx;);	// 17961                  mov     cx, bx ;~ 075B:0806
cs=0x75b;eip=0x000808; 	T(MOV(si, *(dw*)(raddr(cs,si+0x0E))));	// 17962                  mov     si, cs:[si+0Eh] ;~ 075B:0808
cs=0x75b;eip=0x00080d; 	T(ADD(si, bp));	// 17963                  add     si, bp ;~ 075B:080D
cs=0x75b;eip=0x00080f; 	T(MOV(di, *(dw*)(raddr(cs,di+0x0E))));	// 17964                  mov     di, cs:[di+0Eh] ;~ 075B:080F
cs=0x75b;eip=0x000814; 	T(ADD(di, dx));	// 17965                  add     di, dx ;~ 075B:0814
loc_163a6:
	// 4776 
cs=0x75b;eip=0x000816; 	T(LODSB);	// 17968                  lodsb ;~ 075B:0816
cs=0x75b;eip=0x000817; 	T(OR(al, al));	// 17969                  or      al, al ;~ 075B:0817
cs=0x75b;eip=0x000819; 	J(JZ(loc_163ae));	// 17970                  jz      short loc_163AE ;~ 075B:0819
cs=0x75b;eip=0x00081b; 	X(MOV(*(raddr(es,di)), al));	// 17971                  mov     es:[di], al ;~ 075B:081B
loc_163ae:
	// 4777 
cs=0x75b;eip=0x00081e; 	T(INC(di));	// 17974                  inc     di ;~ 075B:081E
cs=0x75b;eip=0x00081f; 	J(LOOP(loc_163a6));	// 17975                  loop    loc_163A6 ;~ 075B:081F
cs=0x75b;eip=0x000821; 	X(POP(cx));	// 17976                  pop     cx ;~ 075B:0821
cs=0x75b;eip=0x000822; 	X(POP(di));	// 17977                  pop     di ;~ 075B:0822
cs=0x75b;eip=0x000823; 	X(POP(si));	// 17978                  pop     si ;~ 075B:0823
cs=0x75b;eip=0x000824; 	T(ADD(di, 2));	// 17979                  add     di, 2 ;~ 075B:0824
cs=0x75b;eip=0x000827; 	T(ADD(si, 2));	// 17980                  add     si, 2 ;~ 075B:0827
cs=0x75b;eip=0x00082a; 	J(LOOP(loc_16393));	// 17981                  loop    loc_16393 ;~ 075B:082A
cs=0x75b;eip=0x00082c; 	X(POP(bp));	// 17982                  pop     bp ;~ 075B:082C
cs=0x75b;eip=0x00082d; 	X(POP(es));	// 17983                  pop     es ;~ 075B:082D
cs=0x75b;eip=0x00082e; 	X(POP(ds));	// 17984                  pop     ds ;~ 075B:082E
cs=0x75b;eip=0x00082f; 	J(RETF(0));	// 17986                  retf ;~ 075B:082F

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
cs=0x75b;eip=0x000830; 	X(PUSH(ds));	// 17990                  push    ds ;~ 075B:0830
cs=0x75b;eip=0x000831; 	X(PUSH(es));	// 17991                  push    es ;~ 075B:0831
cs=0x75b;eip=0x000832; 	T(dx = seg_offset(seg003););	// 17992                  mov     dx, seg seg003 ;~ 075B:0832
cs=0x75b;eip=0x000835; 	T(ds = dx;);	// 17993                  mov     ds, dx ;~ 075B:0835
cs=0x75b;eip=0x000837; 	T(es = word_15d2e;);	// 17995                  mov     es, cs:word_15D2E ;~ 075B:0837
cs=0x75b;eip=0x00083c; 	T(OR(ax, ax));	// 17996                  or      ax, ax ;~ 075B:083C
cs=0x75b;eip=0x00083e; 	J(JS(loc_1641c));	// 17997                  js      short loc_1641C ;~ 075B:083E
cs=0x75b;eip=0x000840; 	T(dx = ax;);	// 17998                  mov     dx, ax ;~ 075B:0840
cs=0x75b;eip=0x000842; 	T(SHL(dx, 1));	// 17999                  shl     dx, 1 ;~ 075B:0842
cs=0x75b;eip=0x000844; 	T(si = cx;);	// 18000                  mov     si, cx ;~ 075B:0844
cs=0x75b;eip=0x000846; 	T(SHL(si, 1));	// 18001                  shl     si, 1 ;~ 075B:0846
cs=0x75b;eip=0x000848; 	T(al = byte_15a0a;);	// 18002                  mov     al, byte_15A0A ;~ 075B:0848
cs=0x75b;eip=0x00084b; 	T(ah = al;);	// 18003                  mov     ah, al ;~ 075B:084B
loc_163dd:
	// 4778 
cs=0x75b;eip=0x00084d; 	T(MOV(bp, *(dw*)(raddr(ss,bx+si))));	// 18006                  mov     bp, ss:[bx+si] ;~ 075B:084D
cs=0x75b;eip=0x000850; 	T(MOV(cx, *(dw*)(raddr(ss,bx+si+0x1B8))));	// 18007                  mov     cx, ss:[bx+si+1B8h] ;~ 075B:0850
cs=0x75b;eip=0x000855; 	T(CMP(cx, bp));	// 18008                  cmp     cx, bp ;~ 075B:0855
cs=0x75b;eip=0x000857; 	J(JC(loc_16415));	// 18009                  jb      short loc_16415 ;~ 075B:0857
cs=0x75b;eip=0x000859; 	J(JA(loc_163f5));	// 18010                  ja      short loc_163F5 ;~ 075B:0859
cs=0x75b;eip=0x00085b; 	T(OR(cx, cx));	// 18012                  or      cx, cx ;~ 075B:085B
cs=0x75b;eip=0x00085d; 	J(JZ(loc_16415));	// 18013                  jz      short loc_16415 ;~ 075B:085D
cs=0x75b;eip=0x00085f; 	T(CMP(cx, 0x13F));	// 18014                  cmp     cx, 13Fh ;~ 075B:085F
cs=0x75b;eip=0x000863; 	J(JZ(loc_16415));	// 18015                  jz      short loc_16415 ;~ 075B:0863
loc_163f5:
	// 4779 
cs=0x75b;eip=0x000865; 	T(SUB(cx, bp));	// 18018                  sub     cx, bp ;~ 075B:0865
cs=0x75b;eip=0x000867; 	T(INC(cx));	// 18019                  inc     cx ;~ 075B:0867
cs=0x75b;eip=0x000868; 	T(MOV(di, *(dw*)(raddr(cs,si+0x0E))));	// 18020                  mov     di, cs:[si+0Eh] ;~ 075B:0868
cs=0x75b;eip=0x00086d; 	T(ADD(di, word_15d30));	// 18021                  add     di, cs:word_15D30 ;~ 075B:086D
cs=0x75b;eip=0x000872; 	T(ADD(di, bp));	// 18022                  add     di, bp ;~ 075B:0872
cs=0x75b;eip=0x000874; 	T(TEST(di, 1));	// 18023                  test    di, 1 ;~ 075B:0874
cs=0x75b;eip=0x000878; 	J(JZ(loc_1640e));	// 18024                  jz      short loc_1640E ;~ 075B:0878
cs=0x75b;eip=0x00087a; 	X(STOSB);	// 18025                  stosb ;~ 075B:087A
cs=0x75b;eip=0x00087b; 	T(DEC(cx));	// 18026                  dec     cx ;~ 075B:087B
cs=0x75b;eip=0x00087c; 	J(JZ(loc_16415));	// 18027                  jz      short loc_16415 ;~ 075B:087C
loc_1640e:
	// 4780 
cs=0x75b;eip=0x00087e; 	T(SHR(cx, 1));	// 18030                  shr     cx, 1 ;~ 075B:087E
	// 18031                  rep stosw ;~ 075B:0880
cs=0x75b;eip=0x000880; 	X(	REP STOSW);	// 18031                  rep stosw ;~ 075B:0880
cs=0x75b;eip=0x000882; 	J(JNC(loc_16415));	// 18032                  jnb     short loc_16415 ;~ 075B:0882
cs=0x75b;eip=0x000884; 	X(STOSB);	// 18033                  stosb ;~ 075B:0884
loc_16415:
	// 4781 
cs=0x75b;eip=0x000885; 	T(SUB(si, 2));	// 18037                  sub     si, 2 ;~ 075B:0885
cs=0x75b;eip=0x000888; 	T(CMP(si, dx));	// 18038                  cmp     si, dx ;~ 075B:0888
cs=0x75b;eip=0x00088a; 	J(JGE(loc_163dd));	// 18039                  jge     short loc_163DD ;~ 075B:088A
loc_1641c:
	// 4782 
cs=0x75b;eip=0x00088c; 	X(POP(es));	// 18042                  pop     es ;~ 075B:088C
cs=0x75b;eip=0x00088d; 	X(POP(ds));	// 18044                  pop     ds ;~ 075B:088D
cs=0x75b;eip=0x00088e; 	J(RETF(0));	// 18046                  retf ;~ 075B:088E

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
        case m2c::kseg004_830_proc: 	goto seg004_830_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1641f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1641f:
    _begin:
cs=0x75b;eip=0x00088f; 	T(cx = 0x7D00;);	// 18052                  mov     cx, 7D00h ;~ 075B:088F
cs=0x75b;eip=0x000892; 	T(XOR(ax, ax));	// 18053                  xor     ax, ax ;~ 075B:0892
cs=0x75b;eip=0x000894; 	T(XOR(di, di));	// 18054                  xor     di, di ;~ 075B:0894
	// 18055                  rep stosw ;~ 075B:0896
cs=0x75b;eip=0x000896; 	X(	REP STOSW);	// 18055                  rep stosw ;~ 075B:0896
cs=0x75b;eip=0x000898; 	J(RETF(0));	// 18056                  retf ;~ 075B:0898

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_1641f: 	goto sub_1641f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg004_899_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg004_899_proc:
    _begin:
cs=0x75b;eip=0x000899; 	X(PUSH(es));	// 18060                  push    es ;~ 075B:0899
cs=0x75b;eip=0x00089a; 	X(PUSH(di));	// 18061                  push    di ;~ 075B:089A
cs=0x75b;eip=0x00089b; 	T(ax = 0x0A000;);	// 18062                  mov     ax, 0A000h ;~ 075B:089B
cs=0x75b;eip=0x00089e; 	T(es = ax;);	// 18063                  mov     es, ax ;~ 075B:089E
cs=0x75b;eip=0x0008a0; 	J(CALLF(sub_1641f,0));	// 18065                  call    sub_1641F ;~ 075B:08A0
cs=0x75b;eip=0x0008a5; 	X(POP(di));	// 18066                  pop     di ;~ 075B:08A5
cs=0x75b;eip=0x0008a6; 	X(POP(es));	// 18067                  pop     es ;~ 075B:08A6
cs=0x75b;eip=0x0008a7; 	J(RETF(0));	// 18069                  retf ;~ 075B:08A7
ret_75b_8a8:
	// 4783 
cs=0x75b;eip=0x0008a8; 	X(PUSH(bp));	// 18071                  push    bp ;~ 075B:08A8
cs=0x75b;eip=0x0008a9; 	T(bp = sp;);	// 18072                  mov     bp, sp ;~ 075B:08A9
cs=0x75b;eip=0x0008ab; 	X(PUSH(ds));	// 18073                  push    ds ;~ 075B:08AB
cs=0x75b;eip=0x0008ac; 	X(PUSH(es));	// 18074                  push    es ;~ 075B:08AC
cs=0x75b;eip=0x0008ad; 	X(PUSH(si));	// 18075                  push    si ;~ 075B:08AD
cs=0x75b;eip=0x0008ae; 	X(PUSH(di));	// 18076                  push    di ;~ 075B:08AE
cs=0x75b;eip=0x0008af; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 18077                  mov     bx, [bp+6] ;~ 075B:08AF
cs=0x75b;eip=0x0008b2; 	T(SHL(bx, 1));	// 18078                  shl     bx, 1 ;~ 075B:08B2
cs=0x75b;eip=0x0008b4; 	T(MOV(ds, *(dw*)(raddr(cs,bx+0x681))));	// 18079                  mov     ds, word ptr cs:[bx+681h] ;~ 075B:08B4
cs=0x75b;eip=0x0008b9; 	T(MOV(si, *(dw*)(raddr(ss,bp+0x0A))));	// 18080                  mov     si, [bp+0Ah] ;~ 075B:08B9
cs=0x75b;eip=0x0008bc; 	T(SHL(si, 1));	// 18081                  shl     si, 1 ;~ 075B:08BC
cs=0x75b;eip=0x0008be; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 18082                  mov     bx, [bp+0Ch] ;~ 075B:08BE
cs=0x75b;eip=0x0008c1; 	T(SHL(bx, 1));	// 18083                  shl     bx, 1 ;~ 075B:08C1
cs=0x75b;eip=0x0008c3; 	T(MOV(es, *(dw*)(raddr(cs,bx+0x681))));	// 18084                  mov     es, word ptr cs:[bx+681h] ;~ 075B:08C3
cs=0x75b;eip=0x0008c8; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x0E))));	// 18085                  mov     dx, [bp+0Eh] ;~ 075B:08C8
cs=0x75b;eip=0x0008cb; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x10))));	// 18086                  mov     di, [bp+10h] ;~ 075B:08CB
cs=0x75b;eip=0x0008ce; 	T(SHL(di, 1));	// 18087                  shl     di, 1 ;~ 075B:08CE
cs=0x75b;eip=0x0008d0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x12))));	// 18088                  mov     bx, [bp+12h] ;~ 075B:08D0
cs=0x75b;eip=0x0008d3; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x14))));	// 18089                  mov     cx, [bp+14h] ;~ 075B:08D3
cs=0x75b;eip=0x0008d6; 	T(MOV(bp, *(dw*)(raddr(ss,bp+8))));	// 18090                  mov     bp, [bp+8] ;~ 075B:08D6
loc_16469:
	// 4784 
cs=0x75b;eip=0x0008d9; 	X(PUSH(si));	// 18093                  push    si ;~ 075B:08D9
cs=0x75b;eip=0x0008da; 	X(PUSH(di));	// 18094                  push    di ;~ 075B:08DA
cs=0x75b;eip=0x0008db; 	X(PUSH(cx));	// 18095                  push    cx ;~ 075B:08DB
cs=0x75b;eip=0x0008dc; 	T(MOV(si, *(dw*)(raddr(cs,si+0x0E))));	// 18096                  mov     si, cs:[si+0Eh] ;~ 075B:08DC
cs=0x75b;eip=0x0008e1; 	T(ADD(si, bp));	// 18097                  add     si, bp ;~ 075B:08E1
cs=0x75b;eip=0x0008e3; 	T(MOV(di, *(dw*)(raddr(cs,di+0x0E))));	// 18098                  mov     di, cs:[di+0Eh] ;~ 075B:08E3
cs=0x75b;eip=0x0008e8; 	T(ADD(di, dx));	// 18099                  add     di, dx ;~ 075B:08E8
cs=0x75b;eip=0x0008ea; 	T(cx = bx;);	// 18100                  mov     cx, bx ;~ 075B:08EA
	// 18101                  rep movsb ;~ 075B:08EC
cs=0x75b;eip=0x0008ec; 	X(	REP MOVSB);	// 18101                  rep movsb ;~ 075B:08EC
cs=0x75b;eip=0x0008ee; 	X(POP(cx));	// 18102                  pop     cx ;~ 075B:08EE
cs=0x75b;eip=0x0008ef; 	X(POP(di));	// 18103                  pop     di ;~ 075B:08EF
cs=0x75b;eip=0x0008f0; 	X(POP(si));	// 18104                  pop     si ;~ 075B:08F0
cs=0x75b;eip=0x0008f1; 	T(ADD(di, 2));	// 18105                  add     di, 2 ;~ 075B:08F1
cs=0x75b;eip=0x0008f4; 	T(ADD(si, 2));	// 18106                  add     si, 2 ;~ 075B:08F4
cs=0x75b;eip=0x0008f7; 	J(LOOP(loc_16469));	// 18107                  loop    loc_16469 ;~ 075B:08F7
cs=0x75b;eip=0x0008f9; 	X(POP(di));	// 18108                  pop     di ;~ 075B:08F9
cs=0x75b;eip=0x0008fa; 	X(POP(si));	// 18109                  pop     si ;~ 075B:08FA
cs=0x75b;eip=0x0008fb; 	X(POP(es));	// 18110                  pop     es ;~ 075B:08FB
cs=0x75b;eip=0x0008fc; 	X(POP(ds));	// 18111                  pop     ds ;~ 075B:08FC
cs=0x75b;eip=0x0008fd; 	X(POP(bp));	// 18112                  pop     bp ;~ 075B:08FD
cs=0x75b;eip=0x0008fe; 	J(RETF(0));	// 18113                  retf ;~ 075B:08FE
ret_75b_8ff:
	// 4785 
cs=0x75b;eip=0x0008ff; 	X(PUSH(bp));	// 18116                  push    bp ;~ 075B:08FF
cs=0x75b;eip=0x000900; 	T(bp = sp;);	// 18117                  mov     bp, sp ;~ 075B:0900
cs=0x75b;eip=0x000902; 	X(PUSH(ds));	// 18118                  push    ds ;~ 075B:0902
cs=0x75b;eip=0x000903; 	X(PUSH(es));	// 18119                  push    es ;~ 075B:0903
cs=0x75b;eip=0x000904; 	X(PUSH(si));	// 18120                  push    si ;~ 075B:0904
cs=0x75b;eip=0x000905; 	X(PUSH(di));	// 18121                  push    di ;~ 075B:0905
cs=0x75b;eip=0x000906; 	T(dx = seg_offset(seg003););	// 18122                  mov     dx, seg seg003 ;~ 075B:0906
cs=0x75b;eip=0x000909; 	T(ds = dx;);	// 18123                  mov     ds, dx ;~ 075B:0909
cs=0x75b;eip=0x00090b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 18125                  mov     bx, [bp+6] ;~ 075B:090B
cs=0x75b;eip=0x00090e; 	T(MOV(bx, *(dw*)(raddr(ss,bx))));	// 18126                  mov     bx, ss:[bx] ;~ 075B:090E
cs=0x75b;eip=0x000911; 	T(SHL(bx, 1));	// 18127                  shl     bx, 1 ;~ 075B:0911
cs=0x75b;eip=0x000913; 	T(MOV(es, *(dw*)(raddr(cs,bx+0x681))));	// 18128                  mov     es, word ptr cs:[bx+681h] ;~ 075B:0913
cs=0x75b;eip=0x000918; 	T(MOV(si, *(dw*)(raddr(ss,bp+0x0A))));	// 18130                  mov     si, [bp+0Ah] ;~ 075B:0918
cs=0x75b;eip=0x00091b; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0E))));	// 18131                  mov     cx, [bp+0Eh] ;~ 075B:091B
cs=0x75b;eip=0x00091e; 	T(SUB(cx, si));	// 18132                  sub     cx, si ;~ 075B:091E
cs=0x75b;eip=0x000920; 	T(INC(cx));	// 18133                  inc     cx ;~ 075B:0920
cs=0x75b;eip=0x000921; 	T(SHL(si, 1));	// 18134                  shl     si, 1 ;~ 075B:0921
cs=0x75b;eip=0x000923; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 18135                  mov     di, [bp+8] ;~ 075B:0923
cs=0x75b;eip=0x000926; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 18136                  mov     bx, [bp+0Ch] ;~ 075B:0926
cs=0x75b;eip=0x000929; 	T(SUB(bx, di));	// 18137                  sub     bx, di ;~ 075B:0929
cs=0x75b;eip=0x00092b; 	T(INC(bx));	// 18138                  inc     bx ;~ 075B:092B
cs=0x75b;eip=0x00092c; 	T(MOV(ah, *(raddr(ss,bp+0x10))));	// 18139                  mov     ah, [bp+10h] ;~ 075B:092C
cs=0x75b;eip=0x00092f; 	T(MOV(al, *(raddr(ss,bp+0x12))));	// 18140                  mov     al, [bp+12h] ;~ 075B:092F
loc_164c2:
	// 4786 
cs=0x75b;eip=0x000932; 	X(PUSH(cx));	// 18143                  push    cx ;~ 075B:0932
cs=0x75b;eip=0x000933; 	X(PUSH(di));	// 18144                  push    di ;~ 075B:0933
cs=0x75b;eip=0x000934; 	T(ADD(di, *(dw*)(raddr(cs,si+0x0E))));	// 18145                  add     di, cs:[si+0Eh] ;~ 075B:0934
cs=0x75b;eip=0x000939; 	T(cx = bx;);	// 18146                  mov     cx, bx ;~ 075B:0939
loc_164cb:
	// 4787 
cs=0x75b;eip=0x00093b; 	T(CMP(ah, *(raddr(es,di))));	// 18149                  cmp     ah, es:[di] ;~ 075B:093B
cs=0x75b;eip=0x00093e; 	J(JNZ(loc_164d3));	// 18150                  jnz     short loc_164D3 ;~ 075B:093E
cs=0x75b;eip=0x000940; 	X(MOV(*(raddr(es,di)), al));	// 18151                  mov     es:[di], al ;~ 075B:0940
loc_164d3:
	// 4788 
cs=0x75b;eip=0x000943; 	T(INC(di));	// 18154                  inc     di ;~ 075B:0943
cs=0x75b;eip=0x000944; 	J(LOOP(loc_164cb));	// 18155                  loop    loc_164CB ;~ 075B:0944
cs=0x75b;eip=0x000946; 	X(POP(di));	// 18156                  pop     di ;~ 075B:0946
cs=0x75b;eip=0x000947; 	X(POP(cx));	// 18157                  pop     cx ;~ 075B:0947
cs=0x75b;eip=0x000948; 	T(ADD(si, 2));	// 18158                  add     si, 2 ;~ 075B:0948
cs=0x75b;eip=0x00094b; 	J(LOOP(loc_164c2));	// 18159                  loop    loc_164C2 ;~ 075B:094B
cs=0x75b;eip=0x00094d; 	X(POP(di));	// 18160                  pop     di ;~ 075B:094D
cs=0x75b;eip=0x00094e; 	X(POP(si));	// 18161                  pop     si ;~ 075B:094E
cs=0x75b;eip=0x00094f; 	X(POP(es));	// 18162                  pop     es ;~ 075B:094F
cs=0x75b;eip=0x000950; 	X(POP(ds));	// 18164                  pop     ds ;~ 075B:0950
cs=0x75b;eip=0x000951; 	X(POP(bp));	// 18166                  pop     bp ;~ 075B:0951
cs=0x75b;eip=0x000952; 	J(RETF(0));	// 18167                  retf ;~ 075B:0952
ret_75b_953:
	// 4789 
cs=0x75b;eip=0x000953; 	T(bx = sp;);	// 18169                  mov     bx, sp ;~ 075B:0953
cs=0x75b;eip=0x000955; 	X(PUSH(ds));	// 18170                  push    ds ;~ 075B:0955
cs=0x75b;eip=0x000956; 	X(PUSH(es));	// 18171                  push    es ;~ 075B:0956
cs=0x75b;eip=0x000957; 	T(MOV(ds, *(dw*)(raddr(ss,bx+4))));	// 18172                  mov     ds, word ptr ss:[bx+4] ;~ 075B:0957
cs=0x75b;eip=0x00095b; 	T(es = word_15d2e;);	// 18173                  mov     es, cs:word_15D2E ;~ 075B:095B
cs=0x75b;eip=0x000960; 	J(JMP(loc_16505));	// 18175                  jmp     short loc_16505 ;~ 075B:0960
ret_75b_963:
	// 4790 
cs=0x75b;eip=0x000963; 	X(PUSH(ds));	// 18179                  push    ds ;~ 075B:0963
cs=0x75b;eip=0x000964; 	X(PUSH(es));	// 18180                  push    es ;~ 075B:0964
cs=0x75b;eip=0x000965; 	X(byte_15d32 = 1;);	// 18181                  mov     cs:byte_15D32, 1 ;~ 075B:0965
cs=0x75b;eip=0x00096b; 	T(ds = seg_16213;);	// 18182                  mov     ds, cs:seg_16213 ;~ 075B:096B
cs=0x75b;eip=0x000970; 	T(es = word_16211;);	// 18184                  mov     es, cs:word_16211 ;~ 075B:0970
loc_16505:
	// 4791 
cs=0x75b;eip=0x000975; 	X(PUSH(si));	// 18188                  push    si ;~ 075B:0975
cs=0x75b;eip=0x000976; 	X(PUSH(di));	// 18189                  push    di ;~ 075B:0976
cs=0x75b;eip=0x000977; 	T(XOR(si, si));	// 18190                  xor     si, si ;~ 075B:0977
cs=0x75b;eip=0x000979; 	T(XOR(di, di));	// 18191                  xor     di, di ;~ 075B:0979
cs=0x75b;eip=0x00097b; 	T(cx = 0x7D00;);	// 18192                  mov     cx, 7D00h ;~ 075B:097B
	// 18193                  rep movsw ;~ 075B:097E
cs=0x75b;eip=0x00097e; 	X(	REP MOVSW);	// 18193                  rep movsw ;~ 075B:097E
cs=0x75b;eip=0x000980; 	X(POP(di));	// 18194                  pop     di ;~ 075B:0980
cs=0x75b;eip=0x000981; 	X(POP(si));	// 18195                  pop     si ;~ 075B:0981
cs=0x75b;eip=0x000982; 	X(POP(es));	// 18196                  pop     es ;~ 075B:0982
cs=0x75b;eip=0x000983; 	X(POP(ds));	// 18198                  pop     ds ;~ 075B:0983
cs=0x75b;eip=0x000984; 	J(RETF(0));	// 18200                  retf ;~ 075B:0984
ret_75b_985:
	// 4792 
cs=0x75b;eip=0x000985; 	T(bx = sp;);	// 18202                  mov     bx, sp ;~ 075B:0985
cs=0x75b;eip=0x000987; 	X(PUSH(ds));	// 18203                  push    ds ;~ 075B:0987
cs=0x75b;eip=0x000988; 	X(PUSH(es));	// 18204                  push    es ;~ 075B:0988
cs=0x75b;eip=0x000989; 	T(MOV(ds, *(dw*)(raddr(ss,bx+4))));	// 18205                  mov     ds, word ptr ss:[bx+4] ;~ 075B:0989
cs=0x75b;eip=0x00098d; 	T(es = word_15d2e;);	// 18206                  mov     es, cs:word_15D2E ;~ 075B:098D
cs=0x75b;eip=0x000992; 	T(bx = 1;);	// 18207                  mov     bx, 1 ;~ 075B:0992
cs=0x75b;eip=0x000995; 	T(cx = 0x0FA00;);	// 18208                  mov     cx, 0FA00h ;~ 075B:0995
loc_16528:
	// 4793 
cs=0x75b;eip=0x000998; 	T(SHR(bx, 1));	// 18212                  shr     bx, 1 ;~ 075B:0998
cs=0x75b;eip=0x00099a; 	J(JNC(loc_16530));	// 18213                  jnb     short loc_16530 ;~ 075B:099A
cs=0x75b;eip=0x00099c; 	T(XOR(bx, 0x0B400));	// 18214                  xor     bx, 0B400h ;~ 075B:099C
loc_16530:
	// 4794 
cs=0x75b;eip=0x0009a0; 	T(CMP(bx, 0x0FA00));	// 18217                  cmp     bx, 0FA00h ;~ 075B:09A0
cs=0x75b;eip=0x0009a4; 	J(JA(loc_16528));	// 18218                  ja      short loc_16528 ;~ 075B:09A4
cs=0x75b;eip=0x0009a6; 	T(DEC(bx));	// 18219                  dec     bx ;~ 075B:09A6
cs=0x75b;eip=0x0009a7; 	T(MOV(al, *(raddr(ds,bx))));	// 18220                  mov     al, [bx] ;~ 075B:09A7
cs=0x75b;eip=0x0009a9; 	X(MOV(*(raddr(es,bx)), al));	// 18221                  mov     es:[bx], al ;~ 075B:09A9
cs=0x75b;eip=0x0009ac; 	T(INC(bx));	// 18222                  inc     bx ;~ 075B:09AC
cs=0x75b;eip=0x0009ad; 	J(LOOP(loc_16528));	// 18223                  loop    loc_16528 ;~ 075B:09AD
cs=0x75b;eip=0x0009af; 	X(POP(es));	// 18224                  pop     es ;~ 075B:09AF
cs=0x75b;eip=0x0009b0; 	X(POP(ds));	// 18225                  pop     ds ;~ 075B:09B0
cs=0x75b;eip=0x0009b1; 	J(RETF(0));	// 18226                  retf ;~ 075B:09B1
ret_75b_9b3:
	// 4795 
cs=0x75b;eip=0x0009b3; 	T(bx = sp;);	// 18232                  mov     bx, sp ;~ 075B:09B3
cs=0x75b;eip=0x0009b5; 	T(MOV(al, *(raddr(ss,bx+4))));	// 18233                  mov     al, ss:[bx+4] ;~ 075B:09B5
cs=0x75b;eip=0x0009b9; 	X(byte_16542 = al;);	// 18234                  mov     cs:byte_16542, al ;~ 075B:09B9
cs=0x75b;eip=0x0009bd; 	J(RETF(0));	// 18235                  retf ;~ 075B:09BD
ret_75b_9be:
	// 4796 
cs=0x75b;eip=0x0009be; 	X(PUSH(ds));	// 18237                  push    ds ;~ 075B:09BE
cs=0x75b;eip=0x0009bf; 	X(PUSH(si));	// 18238                  push    si ;~ 075B:09BF
cs=0x75b;eip=0x0009c0; 	T(ax = seg_offset(seg003););	// 18239                  mov     ax, seg seg003 ;~ 075B:09C0
cs=0x75b;eip=0x0009c3; 	T(ds = ax;);	// 18240                  mov     ds, ax ;~ 075B:09C3
cs=0x75b;eip=0x0009c5; 	T(ax = *(dw*)((byte_15b58)+4););	// 18242                  mov     ax, word ptr byte_15B58+4 ;~ 075B:09C5
cs=0x75b;eip=0x0009c8; 	T(SHL(ax, 1));	// 18243                  shl     ax, 1 ;~ 075B:09C8
cs=0x75b;eip=0x0009ca; 	T(SHL(ax, 1));	// 18244                  shl     ax, 1 ;~ 075B:09CA
cs=0x75b;eip=0x0009cc; 	T(ADD(ax, *(dw*)((byte_15b58)+4)));	// 18245                  add     ax, word ptr byte_15B58+4 ;~ 075B:09CC
cs=0x75b;eip=0x0009d0; 	T(INC(ax));	// 18246                  inc     ax ;~ 075B:09D0
cs=0x75b;eip=0x0009d1; 	X(*(dw*)((byte_15b58)+4) = ax;);	// 18247                  mov     word ptr byte_15B58+4, ax ;~ 075B:09D1
cs=0x75b;eip=0x0009d4; 	T(bl = al;);	// 18248                  mov     bl, al ;~ 075B:09D4
cs=0x75b;eip=0x0009d6; 	T(AND(bx, 3));	// 18249                  and     bx, 3 ;~ 075B:09D6
cs=0x75b;eip=0x0009d9; 	T(MOV(bl, *(raddr(ds,bx+0x1CC8))));	// 18250                  mov     bl, [bx+1CC8h] ;~ 075B:09D9
cs=0x75b;eip=0x0009dd; 	T(si = 0x1B85;);	// 18251                  mov     si, 1B85h ;~ 075B:09DD
cs=0x75b;eip=0x0009e0; 	T(ADD(si, bx));	// 18252                  add     si, bx ;~ 075B:09E0
cs=0x75b;eip=0x0009e2; 	T(ADD(si, bx));	// 18253                  add     si, bx ;~ 075B:09E2
cs=0x75b;eip=0x0009e4; 	T(ADD(si, bx));	// 18254                  add     si, bx ;~ 075B:09E4
cs=0x75b;eip=0x0009e6; 	T(LODSB);	// 18255                  lodsb ;~ 075B:09E6
cs=0x75b;eip=0x0009e7; 	T(ch = al;);	// 18256                  mov     ch, al ;~ 075B:09E7
cs=0x75b;eip=0x0009e9; 	T(LODSB);	// 18257                  lodsb ;~ 075B:09E9
cs=0x75b;eip=0x0009ea; 	T(cl = al;);	// 18258                  mov     cl, al ;~ 075B:09EA
cs=0x75b;eip=0x0009ec; 	T(LODSB);	// 18259                  lodsb ;~ 075B:09EC
cs=0x75b;eip=0x0009ed; 	T(bh = al;);	// 18260                  mov     bh, al ;~ 075B:09ED
cs=0x75b;eip=0x0009ef; 	T(bl = 0x8D;);	// 18261                  mov     bl, 8Dh ;~ 075B:09EF
loc_16581:
	// 4797 
cs=0x75b;eip=0x0009f1; 	T(dx = 0x3C8;);	// 18264                  mov     dx, 3C8h ;~ 075B:09F1
cs=0x75b;eip=0x0009f4; 	T(al = bl;);	// 18265                  mov     al, bl ;~ 075B:09F4
cs=0x75b;eip=0x0009f6; 	S(OUT(dx, al));	// 18266                  out     dx, al ;~ 075B:09F6
cs=0x75b;eip=0x0009f7; 	T(INC(dx));	// 18267                  inc     dx ;~ 075B:09F7
cs=0x75b;eip=0x0009f8; 	T(al = ch;);	// 18268                  mov     al, ch ;~ 075B:09F8
cs=0x75b;eip=0x0009fa; 	S(OUT(dx, al));	// 18269                  out     dx, al ;~ 075B:09FA
cs=0x75b;eip=0x0009fb; 	T(al = cl;);	// 18270                  mov     al, cl ;~ 075B:09FB
cs=0x75b;eip=0x0009fd; 	S(OUT(dx, al));	// 18271                  out     dx, al ;~ 075B:09FD
cs=0x75b;eip=0x0009fe; 	T(al = bh;);	// 18272                  mov     al, bh ;~ 075B:09FE
cs=0x75b;eip=0x000a00; 	S(OUT(dx, al));	// 18273                  out     dx, al ;~ 075B:0A00
cs=0x75b;eip=0x000a01; 	T(ADD(bl, 0x10));	// 18274                  add     bl, 10h ;~ 075B:0A01
cs=0x75b;eip=0x000a04; 	T(CMP(bl, 0x1D));	// 18275                  cmp     bl, 1Dh ;~ 075B:0A04
cs=0x75b;eip=0x000a07; 	J(JNZ(loc_16581));	// 18276                  jnz     short loc_16581 ;~ 075B:0A07
cs=0x75b;eip=0x000a09; 	T(CMP(byte_16542, 0));	// 18277                  cmp     cs:byte_16542, 0 ;~ 075B:0A09
cs=0x75b;eip=0x000a0f; 	J(JZ(loc_165b3));	// 18278                  jz      short loc_165B3 ;~ 075B:0A0F
cs=0x75b;eip=0x000a11; 	T(AND(ah, 3));	// 18279                  and     ah, 3 ;~ 075B:0A11
cs=0x75b;eip=0x000a14; 	X(DEC(byte_16542));	// 18280                  dec     cs:byte_16542 ;~ 075B:0A14
cs=0x75b;eip=0x000a19; 	J(JNZ(loc_165ad));	// 18281                  jnz     short loc_165AD ;~ 075B:0A19
cs=0x75b;eip=0x000a1b; 	T(XOR(ah, ah));	// 18282                  xor     ah, ah ;~ 075B:0A1B
loc_165ad:
	// 4798 
cs=0x75b;eip=0x000a1d; 	T(dx = 0x3D4;);	// 18285                  mov     dx, 3D4h ;~ 075B:0A1D
cs=0x75b;eip=0x000a20; 	T(al = 0x0D;);	// 18286                  mov     al, 0Dh ;~ 075B:0A20
cs=0x75b;eip=0x000a22; 	S(OUT(dx, ax));	// 18287                  out     dx, ax          ; Video: CRT cntrlr addr ;~ 075B:0A22
loc_165b3:
	// 4799 
cs=0x75b;eip=0x000a23; 	X(POP(si));	// 18291                  pop     si ;~ 075B:0A23
cs=0x75b;eip=0x000a24; 	X(POP(ds));	// 18292                  pop     ds ;~ 075B:0A24
cs=0x75b;eip=0x000a25; 	J(RETF(0));	// 18294                  retf ;~ 075B:0A25
ret_75b_a26:
	// 4800 
cs=0x75b;eip=0x000a26; 	T(SHL(di, 1));	// 18296                  shl     di, 1 ;~ 075B:0A26
cs=0x75b;eip=0x000a28; 	T(MOV(ax, *(dw*)(raddr(cs,di+0x0E))));	// 18297                  mov     ax, cs:[di+0Eh] ;~ 075B:0A28
cs=0x75b;eip=0x000a2d; 	J(RETF(0));	// 18298                  retf ;~ 075B:0A2D
ret_75b_a2e:
	// 4801 
cs=0x75b;eip=0x000a2e; 	T(bx = sp;);	// 18300                  mov     bx, sp ;~ 075B:0A2E
cs=0x75b;eip=0x000a30; 	T(MOV(ax, *(dw*)(raddr(ss,bx+6))));	// 18301                  mov     ax, ss:[bx+6] ;~ 075B:0A30
cs=0x75b;eip=0x000a34; 	T(MOV(bx, *(dw*)(raddr(ss,bx+4))));	// 18302                  mov     bx, ss:[bx+4] ;~ 075B:0A34
cs=0x75b;eip=0x000a38; 	T(SHL(bx, 1));	// 18303                  shl     bx, 1 ;~ 075B:0A38
cs=0x75b;eip=0x000a3a; 	X(MOV(*(dw*)(raddr(cs,bx+0x681)), ax));	// 18304                  mov     cs:[bx+681h], ax ;~ 075B:0A3A
cs=0x75b;eip=0x000a3f; 	J(RETF(0));	// 18305                  retf ;~ 075B:0A3F
ret_75b_a40:
	// 4802 
cs=0x75b;eip=0x000a40; 	J(RETF(0));	// 18307                  retf ;~ 075B:0A40
ret_75b_a41:
	// 4803 
cs=0x75b;eip=0x000a41; 	T(SHL(si, 1));	// 18309                  shl     si, 1 ;~ 075B:0A41
cs=0x75b;eip=0x000a43; 	T(MOV(es, *(dw*)(raddr(cs,si+0x681))));	// 18310                  mov     es, word ptr cs:[si+681h] ;~ 075B:0A43
cs=0x75b;eip=0x000a48; 	J(RETF(0));	// 18312                  retf ;~ 075B:0A48
ret_75b_a49:
	// 4804 
cs=0x75b;eip=0x000a49; 	J(RETF(0));	// 18314                  retf ;~ 075B:0A49
ret_75b_a4a:
	// 4805 
cs=0x75b;eip=0x000a4a; 	J(RETF(0));	// 18316                  retf ;~ 075B:0A4A
ret_75b_a4b:
	// 4806 
cs=0x75b;eip=0x000a4b; 	J(RETF(0));	// 18318                  retf ;~ 075B:0A4B
ret_75b_a4c:
	// 4807 
cs=0x75b;eip=0x000a4c; 	X(PUSH(ds));	// 18320                  push    ds ;~ 075B:0A4C
cs=0x75b;eip=0x000a4d; 	T(ax = ss;);	// 18321                  mov     ax, ss ;~ 075B:0A4D
cs=0x75b;eip=0x000a4f; 	T(ds = ax;);	// 18322                  mov     ds, ax ;~ 075B:0A4F
cs=0x75b;eip=0x000a51; 	T(si = bp;);	// 18323                  mov     si, bp ;~ 075B:0A51
cs=0x75b;eip=0x000a53; 	T(cx = 0x0A0;);	// 18324                  mov     cx, 0A0h ;~ 075B:0A53
	// 18325                  rep movsw ;~ 075B:0A56
cs=0x75b;eip=0x000a56; 	X(	REP MOVSW);	// 18325                  rep movsw ;~ 075B:0A56
cs=0x75b;eip=0x000a58; 	X(POP(ds));	// 18326                  pop     ds ;~ 075B:0A58
cs=0x75b;eip=0x000a59; 	J(RETF(0));	// 18327                  retf ;~ 075B:0A59
ret_75b_a5c:
	// 4808 
cs=0x75b;eip=0x000a5c; __disp=unk_166e1;
	J(return __dispatch_call(__disp, _state););	// 18331                  jmp     near ptr unk_166E1 ;~ 075B:0A5C
ret_75b_a5f:
	// 4809 
cs=0x75b;eip=0x000a5f; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x0A))));	// 18333                  mov     ax, [di+0Ah] ;~ 075B:0A5F
cs=0x75b;eip=0x000a62; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 18334                  mov     [bp-4], ax ;~ 075B:0A62
cs=0x75b;eip=0x000a65; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x0C))));	// 18335                  mov     ax, [di+0Ch] ;~ 075B:0A65
cs=0x75b;eip=0x000a68; 	X(MOV(*(dw*)(raddr(ss,bp-6)), ax));	// 18336                  mov     [bp-6], ax ;~ 075B:0A68
cs=0x75b;eip=0x000a6b; 	X(MOV(*(dw*)(raddr(ds,di+0x0A)), si));	// 18337                  mov     [di+0Ah], si ;~ 075B:0A6B
cs=0x75b;eip=0x000a6e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0C))));	// 18338                  mov     ax, [bp+0Ch] ;~ 075B:0A6E
cs=0x75b;eip=0x000a71; 	X(MOV(*(dw*)(raddr(ds,di+0x0C)), ax));	// 18339                  mov     [di+0Ch], ax ;~ 075B:0A71
cs=0x75b;eip=0x000a74; 	T(MOV(bx, *(dw*)(raddr(ds,di+0x16))));	// 18340                  mov     bx, [di+16h] ;~ 075B:0A74
cs=0x75b;eip=0x000a77; 	T(MOV(si, *(dw*)(raddr(ds,bx+0x1A))));	// 18341                  mov     si, [bx+1Ah] ;~ 075B:0A77
cs=0x75b;eip=0x000a7a; 	T(MOV(ax, *(dw*)(raddr(ds,si+2))));	// 18342                  mov     ax, [si+2] ;~ 075B:0A7A
cs=0x75b;eip=0x000a7d; 	T(CMP(ax, *(dw*)(raddr(ss,bp-4))));	// 18343                  cmp     ax, [bp-4] ;~ 075B:0A7D
cs=0x75b;eip=0x000a80; 	J(JGE(loc_16631));	// 18344                  jge     short loc_16631 ;~ 075B:0A80
cs=0x75b;eip=0x000a82; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 18345                  mov     ax, [bp+8] ;~ 075B:0A82
cs=0x75b;eip=0x000a85; 	T(MOV(dx, *(dw*)(raddr(ss,bp+6))));	// 18346                  mov     dx, [bp+6] ;~ 075B:0A85
cs=0x75b;eip=0x000a88; 	T(ADD(dx, *(dw*)(raddr(ds,si+0x12))));	// 18347                  add     dx, [si+12h] ;~ 075B:0A88
cs=0x75b;eip=0x000a8b; 	T(ADC(ax, 0));	// 18348                  adc     ax, 0 ;~ 075B:0A8B
cs=0x75b;eip=0x000a8e; 	T(MOV(bx, *(dw*)(raddr(ds,si+0x12))));	// 18349                  mov     bx, [si+12h] ;~ 075B:0A8E
cs=0x75b;eip=0x000a91; 	T(XOR(cx, cx));	// 18350                  xor     cx, cx ;~ 075B:0A91
cs=0x75b;eip=0x000a93; 	T(NOT(bx));	// 18351                  not     bx ;~ 075B:0A93
cs=0x75b;eip=0x000a95; 	T(NOT(cx));	// 18352                  not     cx ;~ 075B:0A95
cs=0x75b;eip=0x000a97; 	T(AND(dx, bx));	// 18353                  and     dx, bx ;~ 075B:0A97
cs=0x75b;eip=0x000a99; 	T(AND(ax, cx));	// 18354                  and     ax, cx ;~ 075B:0A99
cs=0x75b;eip=0x000a9b; 	X(SUB(*(dw*)(raddr(ds,si+0x0E)), dx));	// 18355                  sub     [si+0Eh], dx ;~ 075B:0A9B
cs=0x75b;eip=0x000a9e; 	X(SBB(*(dw*)(raddr(ds,si+0x10)), ax));	// 18356                  sbb     [si+10h], ax ;~ 075B:0A9E
loc_16631:
	// 4810 
cs=0x75b;eip=0x000aa1; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x0A))));	// 18359                  mov     ax, [di+0Ah] ;~ 075B:0AA1
cs=0x75b;eip=0x000aa4; 	T(CMP(ax, *(dw*)(raddr(ds,si+2))));	// 18360                  cmp     ax, [si+2] ;~ 075B:0AA4
cs=0x75b;eip=0x000aa7; 	J(JLE(loc_16658));	// 18361                  jle     short loc_16658 ;~ 075B:0AA7
cs=0x75b;eip=0x000aa9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 18362                  mov     ax, [bp+8] ;~ 075B:0AA9
cs=0x75b;eip=0x000aac; 	T(MOV(dx, *(dw*)(raddr(ss,bp+6))));	// 18363                  mov     dx, [bp+6] ;~ 075B:0AAC
cs=0x75b;eip=0x000aaf; 	T(ADD(dx, *(dw*)(raddr(ds,si+0x12))));	// 18364                  add     dx, [si+12h] ;~ 075B:0AAF
cs=0x75b;eip=0x000ab2; 	T(ADC(ax, 0));	// 18365                  adc     ax, 0 ;~ 075B:0AB2
cs=0x75b;eip=0x000ab5; 	T(MOV(bx, *(dw*)(raddr(ds,si+0x12))));	// 18366                  mov     bx, [si+12h] ;~ 075B:0AB5
cs=0x75b;eip=0x000ab8; 	T(XOR(cx, cx));	// 18367                  xor     cx, cx ;~ 075B:0AB8
cs=0x75b;eip=0x000aba; 	T(NOT(bx));	// 18368                  not     bx ;~ 075B:0ABA
cs=0x75b;eip=0x000abc; 	T(NOT(cx));	// 18369                  not     cx ;~ 075B:0ABC
cs=0x75b;eip=0x000abe; 	T(AND(dx, bx));	// 18370                  and     dx, bx ;~ 075B:0ABE
cs=0x75b;eip=0x000ac0; 	T(AND(ax, cx));	// 18371                  and     ax, cx ;~ 075B:0AC0
cs=0x75b;eip=0x000ac2; 	X(ADD(*(dw*)(raddr(ds,si+0x0E)), dx));	// 18372                  add     [si+0Eh], dx ;~ 075B:0AC2
cs=0x75b;eip=0x000ac5; 	X(ADC(*(dw*)(raddr(ds,si+0x10)), ax));	// 18373                  adc     [si+10h], ax ;~ 075B:0AC5
loc_16658:
	// 4811 
cs=0x75b;eip=0x000ac8; 	X(PUSH(0x0F));	// 18376                  push    0Fh ;~ 075B:0AC8
cs=0x75b;eip=0x000aca; 	J(CALL(__dispatch_call,unk_25563));	// 18377                  call    near ptr unk_25563 ;~ 075B:0ACA
cs=0x75b;eip=0x000acd; 	X(POP(cx));	// 18378                  pop     cx ;~ 075B:0ACD
cs=0x75b;eip=0x000ace; 	X(PUSH(*(dw*)(raddr(ss,bp+0x4D))));	// 18379                  push    word ptr [bp+4Dh] ;~ 075B:0ACE
cs=0x75b;eip=0x000ad1; 	T(LOCK);	// 18380                  lock jmp word ptr [bx+si+760Fh] ;~ 075B:0AD1
cs=0x75b;eip=0x000ad1; __disp=*(dw*)(raddr(ds,bx+si+0x760F));
	J(return __dispatch_call(__disp, _state););	// 18380                  lock jmp word ptr [bx+si+760Fh] ;~ 075B:0AD1

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_16469: 	goto loc_16469;
        case m2c::kloc_164c2: 	goto loc_164c2;
        case m2c::kloc_164cb: 	goto loc_164cb;
        case m2c::kloc_164d3: 	goto loc_164d3;
        case m2c::kloc_16505: 	goto loc_16505;
        case m2c::kloc_16528: 	goto loc_16528;
        case m2c::kloc_16530: 	goto loc_16530;
        case m2c::kloc_16581: 	goto loc_16581;
        case m2c::kloc_165ad: 	goto loc_165ad;
        case m2c::kloc_165b3: 	goto loc_165b3;
        case m2c::kloc_16631: 	goto loc_16631;
        case m2c::kloc_16658: 	goto loc_16658;
        case m2c::kret_75b_8a8: 	goto ret_75b_8a8;
        case m2c::kret_75b_8ff: 	goto ret_75b_8ff;
        case m2c::kret_75b_953: 	goto ret_75b_953;
        case m2c::kret_75b_963: 	goto ret_75b_963;
        case m2c::kret_75b_985: 	goto ret_75b_985;
        case m2c::kret_75b_9b3: 	goto ret_75b_9b3;
        case m2c::kret_75b_9be: 	goto ret_75b_9be;
        case m2c::kret_75b_a26: 	goto ret_75b_a26;
        case m2c::kret_75b_a2e: 	goto ret_75b_a2e;
        case m2c::kret_75b_a40: 	goto ret_75b_a40;
        case m2c::kret_75b_a41: 	goto ret_75b_a41;
        case m2c::kret_75b_a49: 	goto ret_75b_a49;
        case m2c::kret_75b_a4a: 	goto ret_75b_a4a;
        case m2c::kret_75b_a4b: 	goto ret_75b_a4b;
        case m2c::kret_75b_a4c: 	goto ret_75b_a4c;
        case m2c::kret_75b_a5c: 	goto ret_75b_a5c;
        case m2c::kret_75b_a5f: 	goto ret_75b_a5f;
        case m2c::kseg004_899_proc: 	goto seg004_899_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}


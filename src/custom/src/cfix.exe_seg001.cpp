/* THIS IS GENERATED FILE */

        
#include "cfix.exe.h"

                

 bool sub_1e052(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1e052:
    _begin:
cs=0x848;eip=0x000082; 	X(PUSH(sp));	// 36307                  push    sp ;~ 0848:0082
cs=0x848;eip=0x000083; 	X(POP(ax));	// 36308                  pop     ax ;~ 0848:0083
cs=0x848;eip=0x000084; 	T(SUB(ax, sp));	// 36309                  sub     ax, sp ;~ 0848:0084
cs=0x848;eip=0x000086; 	X(word_6b85a = ax;);	// 36310                  mov     word_6B85A, ax ;~ 0848:0086
cs=0x848;eip=0x000089; 	J(RETN(0));	// 36311                  retn ;~ 0848:0089

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_1e052: 	goto sub_1e052;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg001_45a_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg001_45a_proc:
    _begin:
cs=0x848;eip=0x00045a; 	X(PUSH(bp));	// 36587                  push    bp ;~ 0848:045A
cs=0x848;eip=0x00045b; 	T(bp = sp;);	// 36588                  mov     bp, sp ;~ 0848:045B
cs=0x848;eip=0x00045d; 	T(SUB(sp, 0x14));	// 36589                  sub     sp, 14h ;~ 0848:045D
cs=0x848;eip=0x000460; 	X(PUSH(di));	// 36590                  push    di ;~ 0848:0460
cs=0x848;eip=0x000461; 	X(PUSH(si));	// 36591                  push    si ;~ 0848:0461
cs=0x848;eip=0x000462; 	T(MOV(si, *(dw*)(raddr(ss,bp+0x0E))));	// 36592                  mov     si, [bp+0Eh] ;~ 0848:0462
cs=0x848;eip=0x000465; 	X(*(dw*)(&byte_6b85c) = si;);	// 36593                  mov     word ptr byte_6B85C, si ;~ 0848:0465
cs=0x848;eip=0x000469; 	X(PUSH(ds));	// 36594                  push    ds ;~ 0848:0469
cs=0x848;eip=0x00046a; 	T(MOV(ds, *(dw*)(raddr(ss,bp+0x10))));	// 36595                  mov     ds, word ptr [bp+10h] ;~ 0848:046A
cs=0x848;eip=0x00046d; 	T(LES(ax, *(dw*)(raddr(ss,bp+0x16))));	// 36597                  les     ax, [bp+16h] ;~ 0848:046D
cs=0x848;eip=0x000470; 	X(MOV(*(dw*)(raddr(ds,si+0x9A0)), ax));	// 36598                  mov     [si+9A0h], ax ;~ 0848:0470
cs=0x848;eip=0x000474; 	X(MOV(*(dw*)(raddr(ds,si+0x9A2)), es));	// 36599                  mov     word ptr [si+9A2h], es ;~ 0848:0474
cs=0x848;eip=0x000478; 	T(LES(ax, *(dw*)(raddr(ss,bp+0x12))));	// 36600                  les     ax, [bp+12h] ;~ 0848:0478
cs=0x848;eip=0x00047b; 	X(MOV(*(dw*)(raddr(ds,si+0x9A4)), ax));	// 36601                  mov     [si+9A4h], ax ;~ 0848:047B
cs=0x848;eip=0x00047f; 	X(MOV(*(dw*)(raddr(ds,si+0x9A6)), es));	// 36602                  mov     word ptr [si+9A6h], es ;~ 0848:047F
cs=0x848;eip=0x000483; 	T(LES(di, *(dw*)(raddr(ss,bp+6))));	// 36603                  les     di, [bp+6] ;~ 0848:0483
cs=0x848;eip=0x000486; 	T(MOV(ax, *(dw*)(raddr(es,di))));	// 36604                  mov     ax, es:[di] ;~ 0848:0486
cs=0x848;eip=0x000489; 	X(MOV(*(dw*)(raddr(ds,si+0x0C)), ax));	// 36605                  mov     [si+0Ch], ax ;~ 0848:0489
cs=0x848;eip=0x00048c; 	T(LES(bx, *(dw*)(raddr(ss,bp+0x0A))));	// 36606                  les     bx, [bp+0Ah] ;~ 0848:048C
cs=0x848;eip=0x00048f; 	T(MOV(cx, *(dw*)(raddr(es,bx))));	// 36607                  mov     cx, es:[bx] ;~ 0848:048F
cs=0x848;eip=0x000492; 	X(MOV(*(dw*)(raddr(ds,si+0x0A)), cx));	// 36608                  mov     [si+0Ah], cx ;~ 0848:0492
cs=0x848;eip=0x000495; 	X(MOV(*(dw*)(raddr(ds,si+6)), 4));	// 36609                  mov     word ptr [si+6], 4 ;~ 0848:0495
cs=0x848;eip=0x00049a; 	X(MOV(*(dw*)(raddr(ds,si+8)), 0x0F));	// 36610                  mov     word ptr [si+8], 0Fh ;~ 0848:049A
cs=0x848;eip=0x00049f; 	X(POP(es));	// 36611                  pop     es ;~ 0848:049F
cs=0x848;eip=0x0004a0; 	X(MOV(*(dw*)(raddr(es,0x0E)), ds));	// 36612                  mov     word ptr es:0Eh, ds ;~ 0848:04A0
cs=0x848;eip=0x0004a5; 	X(PUSH(ds));	// 36613                  push    ds ;~ 0848:04A5
cs=0x848;eip=0x0004a6; 	X(POP(es));	// 36614                  pop     es ;~ 0848:04A6
cs=0x848;eip=0x0004a7; 	T(SUB(ax, 0x400));	// 36615                  sub     ax, 400h ;~ 0848:04A7
cs=0x848;eip=0x0004aa; 	J(JZ(loc_1e4ad));	// 36616                  jz      short loc_1E4AD ;~ 0848:04AA
cs=0x848;eip=0x0004ac; 	T(SUB(ax, 0x400));	// 36617                  sub     ax, 400h ;~ 0848:04AC
cs=0x848;eip=0x0004af; 	J(JZ(loc_1e4a6));	// 36618                  jz      short loc_1E4A6 ;~ 0848:04AF
cs=0x848;eip=0x0004b1; 	T(SUB(ax, 0x800));	// 36619                  sub     ax, 800h ;~ 0848:04B1
cs=0x848;eip=0x0004b4; 	J(JZ(loc_1e49f));	// 36620                  jz      short loc_1E49F ;~ 0848:04B4
cs=0x848;eip=0x0004b6; 	T(ax = 1;);	// 36621                  mov     ax, 1 ;~ 0848:04B6
loc_1e489:
	// 6445 
cs=0x848;eip=0x0004b9; 	T(bx = seg_offset(seg045););	// 36624                  mov     bx, seg seg045 ;~ 0848:04B9
cs=0x848;eip=0x0004bc; 	T(ds = bx;);	// 36625                  mov     ds, bx ;~ 0848:04BC
cs=0x848;eip=0x0004be; 	J(JMP(loc_1e569));	// 36627                  jmp     loc_1E569 ;~ 0848:04BE
ret_848_4c5:
	// 6446 
cs=0x848;eip=0x0004c5; 	X(PUSH(ax));	// 36634                  push    ax ;~ 0848:04C5
cs=0x848;eip=0x0004c6; 	T(ax = 0x45A;);	// 36635                  mov     ax, 45Ah ;~ 0848:04C6
cs=0x848;eip=0x0004c9; 	X(PUSH(ax));	// 36636                  push    ax ;~ 0848:04C9
cs=0x848;eip=0x0004ca; 	J(CALL(sub_1e052,0));	// 36637                  call    sub_1E052 ;~ 0848:04CA
cs=0x848;eip=0x0004cd; 	J(RETF(0));	// 36638                  retf ;~ 0848:04CD
loc_1e49f:
	// 6447 
cs=0x848;eip=0x0004cf; 	X(INC(*(dw*)(raddr(ds,si+6))));	// 36644                  inc     word ptr [si+6] ;~ 0848:04CF
cs=0x848;eip=0x0004d2; 	X(OR(*(raddr(ds,si+8)), 0x20));	// 36645                  or      byte ptr [si+8], 20h ;~ 0848:04D2
loc_1e4a6:
	// 6448 
cs=0x848;eip=0x0004d6; 	X(INC(*(dw*)(raddr(ds,si+6))));	// 36648                  inc     word ptr [si+6] ;~ 0848:04D6
cs=0x848;eip=0x0004d9; 	X(OR(*(raddr(ds,si+8)), 0x10));	// 36649                  or      byte ptr [si+8], 10h ;~ 0848:04D9
loc_1e4ad:
	// 6449 
cs=0x848;eip=0x0004dd; 	J(JCXZ(loc_1e4b7));	// 36652                  jcxz    short loc_1E4B7 ;~ 0848:04DD
cs=0x848;eip=0x0004df; 	T(DEC(cx));	// 36653                  dec     cx ;~ 0848:04DF
cs=0x848;eip=0x0004e0; 	J(JZ(loc_1e4d5));	// 36654                  jz      short loc_1E4D5 ;~ 0848:04E0
cs=0x848;eip=0x0004e2; 	T(ax = 2;);	// 36655                  mov     ax, 2 ;~ 0848:04E2
cs=0x848;eip=0x0004e5; 	J(JMP(loc_1e489));	// 36656                  jmp     short loc_1E489 ;~ 0848:04E5
loc_1e4b7:
	// 6450 
cs=0x848;eip=0x0004e7; 	T(CLD);	// 36660                  cld ;~ 0848:04E7
cs=0x848;eip=0x0004e8; 	T(di = si+0x8E);	// 36661                  lea     di, [si+8Eh] ;~ 0848:04E8
cs=0x848;eip=0x0004ec; 	T(ax = 0x909;);	// 36662                  mov     ax, 909h ;~ 0848:04EC
cs=0x848;eip=0x0004ef; 	T(cx = 0x80;);	// 36663                  mov     cx, 80h ;~ 0848:04EF
	// 36664                  rep stosw ;~ 0848:04F2
cs=0x848;eip=0x0004f2; 	X(	REP STOSW);	// 36664                  rep stosw ;~ 0848:04F2
cs=0x848;eip=0x0004f4; 	T(cx = 0x100;);	// 36665                  mov     cx, 100h ;~ 0848:04F4
cs=0x848;eip=0x0004f7; 	T(di = si+0x394);	// 36666                  lea     di, [si+394h] ;~ 0848:04F7
cs=0x848;eip=0x0004fb; 	T(XOR(ax, ax));	// 36667                  xor     ax, ax ;~ 0848:04FB
loc_1e4cd:
	// 6451 
cs=0x848;eip=0x0004fd; 	X(STOSW);	// 36670                  stosw ;~ 0848:04FD
cs=0x848;eip=0x0004fe; 	T(INC(ax));	// 36671                  inc     ax ;~ 0848:04FE
cs=0x848;eip=0x0004ff; 	T(INC(ax));	// 36672                  inc     ax ;~ 0848:04FF
cs=0x848;eip=0x000500; 	J(LOOP(loc_1e4cd));	// 36673                  loop    loc_1E4CD ;~ 0848:0500
cs=0x848;eip=0x000502; 	J(JMP(loc_1e4f5));	// 36674                  jmp     short loc_1E4F5 ;~ 0848:0502
loc_1e4d5:
	// 6452 
cs=0x848;eip=0x000505; 	T(bx = 0x0FF;);	// 36680                  mov     bx, 0FFh ;~ 0848:0505
loc_1e4d8:
	// 6453 
cs=0x848;eip=0x000508; 	T(MOV(al, *(raddr(cs,bx+0x15A))));	// 36683                  mov     al, cs:[bx+15Ah] ;~ 0848:0508
cs=0x848;eip=0x00050d; 	T(INC(al));	// 36684                  inc     al ;~ 0848:050D
cs=0x848;eip=0x00050f; 	X(MOV(*(raddr(ds,bx+si+0x8E)), al));	// 36685                  mov     [bx+si+8Eh], al ;~ 0848:050F
cs=0x848;eip=0x000513; 	T(SHL(bx, 1));	// 36686                  shl     bx, 1 ;~ 0848:0513
cs=0x848;eip=0x000515; 	T(MOV(ax, *(dw*)(raddr(cs,bx+0x25A))));	// 36687                  mov     ax, cs:[bx+25Ah] ;~ 0848:0515
cs=0x848;eip=0x00051a; 	T(SHL(ax, 1));	// 36688                  shl     ax, 1 ;~ 0848:051A
cs=0x848;eip=0x00051c; 	X(MOV(*(dw*)(raddr(ds,bx+si+0x394)), ax));	// 36689                  mov     [bx+si+394h], ax ;~ 0848:051C
cs=0x848;eip=0x000520; 	T(SHR(bx, 1));	// 36690                  shr     bx, 1 ;~ 0848:0520
cs=0x848;eip=0x000522; 	T(DEC(bx));	// 36691                  dec     bx ;~ 0848:0522
cs=0x848;eip=0x000523; 	J(JGE(loc_1e4d8));	// 36692                  jge     short loc_1E4D8 ;~ 0848:0523
loc_1e4f5:
	// 6454 
cs=0x848;eip=0x000525; 	T(XOR(di, di));	// 36695                  xor     di, di ;~ 0848:0525
cs=0x848;eip=0x000527; 	T(bx = 0x100;);	// 36696                  mov     bx, 100h ;~ 0848:0527
loc_1e4fa:
	// 6455 
cs=0x848;eip=0x00052a; 	T(MOV(cl, *(raddr(cs,di+0x10A))));	// 36699                  mov     cl, cs:[di+10Ah] ;~ 0848:052A
cs=0x848;eip=0x00052f; 	T(dx = 1;);	// 36700                  mov     dx, 1 ;~ 0848:052F
cs=0x848;eip=0x000532; 	T(SHL(dx, cl));	// 36701                  shl     dx, cl ;~ 0848:0532
cs=0x848;eip=0x000534; 	X(MOV(*(dw*)(raddr(ss,bp-0x0A)), dx));	// 36702                  mov     [bp-0Ah], dx ;~ 0848:0534
cs=0x848;eip=0x000537; 	T(XOR(dx, dx));	// 36703                  xor     dx, dx ;~ 0848:0537
loc_1e509:
	// 6456 
cs=0x848;eip=0x000539; 	T(MOV(al, *(raddr(cs,di+0x13A))));	// 36706                  mov     al, cs:[di+13Ah] ;~ 0848:0539
cs=0x848;eip=0x00053e; 	T(cl = al;);	// 36707                  mov     cl, al ;~ 0848:053E
cs=0x848;eip=0x000540; 	T(INC(al));	// 36708                  inc     al ;~ 0848:0540
cs=0x848;eip=0x000542; 	T(ADD(al, *(raddr(cs,di+0x10A))));	// 36709                  add     al, cs:[di+10Ah] ;~ 0848:0542
cs=0x848;eip=0x000547; 	X(MOV(*(raddr(ds,bx+si+0x8E)), al));	// 36710                  mov     [bx+si+8Eh], al ;~ 0848:0547
cs=0x848;eip=0x00054b; 	T(ax = dx;);	// 36711                  mov     ax, dx ;~ 0848:054B
cs=0x848;eip=0x00054d; 	T(SHL(ax, cl));	// 36712                  shl     ax, cl ;~ 0848:054D
cs=0x848;eip=0x00054f; 	T(OR(al, *(raddr(cs,di+0x14A))));	// 36713                  or      al, cs:[di+14Ah] ;~ 0848:054F
cs=0x848;eip=0x000554; 	T(SHL(ax, 1));	// 36714                  shl     ax, 1 ;~ 0848:0554
cs=0x848;eip=0x000556; 	T(INC(ax));	// 36715                  inc     ax ;~ 0848:0556
cs=0x848;eip=0x000557; 	T(SHL(bx, 1));	// 36716                  shl     bx, 1 ;~ 0848:0557
cs=0x848;eip=0x000559; 	X(MOV(*(dw*)(raddr(ds,bx+si+0x394)), ax));	// 36717                  mov     [bx+si+394h], ax ;~ 0848:0559
cs=0x848;eip=0x00055d; 	T(SHR(bx, 1));	// 36718                  shr     bx, 1 ;~ 0848:055D
cs=0x848;eip=0x00055f; 	T(INC(bx));	// 36719                  inc     bx ;~ 0848:055F
cs=0x848;eip=0x000560; 	T(INC(dx));	// 36720                  inc     dx ;~ 0848:0560
cs=0x848;eip=0x000561; 	T(CMP(*(dw*)(raddr(ss,bp-0x0A)), dx));	// 36721                  cmp     [bp-0Ah], dx ;~ 0848:0561
cs=0x848;eip=0x000564; 	J(JA(loc_1e509));	// 36722                  ja      short loc_1E509 ;~ 0848:0564
cs=0x848;eip=0x000566; 	T(INC(di));	// 36723                  inc     di ;~ 0848:0566
cs=0x848;eip=0x000567; 	T(CMP(di, 0x10));	// 36724                  cmp     di, 10h ;~ 0848:0567
cs=0x848;eip=0x00056a; 	J(JC(loc_1e4fa));	// 36725                  jb      short loc_1E4FA ;~ 0848:056A
cs=0x848;eip=0x00056c; 	T(ax = seg_offset(seg045););	// 36726                  mov     ax, seg seg045 ;~ 0848:056C
cs=0x848;eip=0x00056f; 	T(ds = ax;);	// 36727                  mov     ds, ax ;~ 0848:056F
cs=0x848;eip=0x000571; 	T(ax = si+0x4E);	// 36728                  lea     ax, [si+4Eh] ;~ 0848:0571
cs=0x848;eip=0x000574; 	X(PUSH(es));	// 36729                  push    es ;~ 0848:0574
cs=0x848;eip=0x000575; 	X(PUSH(ax));	// 36730                  push    ax ;~ 0848:0575
cs=0x848;eip=0x000576; 	T(ax = 0x0CA;);	// 36731                  mov     ax, 0CAh ;~ 0848:0576
cs=0x848;eip=0x000579; 	X(PUSH(cs));	// 36732                  push    cs ;~ 0848:0579
cs=0x848;eip=0x00057a; 	X(PUSH(ax));	// 36733                  push    ax ;~ 0848:057A
cs=0x848;eip=0x00057b; 	T(ax = 0x40;);	// 36734                  mov     ax, 40h ; '@' ;~ 0848:057B
cs=0x848;eip=0x00057e; 	J(CALL(sub_1eba2,0));	// 36735                  call    sub_1EBA2 ;~ 0848:057E
cs=0x848;eip=0x000581; 	T(ax = si+0x0E);	// 36736                  lea     ax, [si+0Eh] ;~ 0848:0581
cs=0x848;eip=0x000584; 	X(PUSH(*(dw*)(&byte_6b85e)));	// 36737                  push    word ptr byte_6B85E ;~ 0848:0584
cs=0x848;eip=0x000588; 	X(PUSH(ax));	// 36738                  push    ax ;~ 0848:0588
cs=0x848;eip=0x000589; 	T(ax = 0x8A;);	// 36739                  mov     ax, 8Ah ;~ 0848:0589
cs=0x848;eip=0x00058c; 	X(PUSH(cs));	// 36740                  push    cs ;~ 0848:058C
cs=0x848;eip=0x00058d; 	X(PUSH(ax));	// 36741                  push    ax ;~ 0848:058D
cs=0x848;eip=0x00058e; 	T(ax = 0x40;);	// 36742                  mov     ax, 40h ; '@' ;~ 0848:058E
cs=0x848;eip=0x000591; 	J(CALL(sub_1eba2,0));	// 36743                  call    sub_1EBA2 ;~ 0848:0591
cs=0x848;eip=0x000594; 	J(CALL(sub_1e572,0));	// 36744                  call    sub_1E572 ;~ 0848:0594
cs=0x848;eip=0x000597; 	T(SUB(ax, ax));	// 36745                  sub     ax, ax ;~ 0848:0597
loc_1e569:
	// 6457 
cs=0x848;eip=0x000599; 	X(POP(si));	// 36748                  pop     si ;~ 0848:0599
cs=0x848;eip=0x00059a; 	X(POP(di));	// 36749                  pop     di ;~ 0848:059A
cs=0x848;eip=0x00059b; 	T(sp = bp;);	// 36750                  mov     sp, bp ;~ 0848:059B
cs=0x848;eip=0x00059d; 	X(POP(bp));	// 36751                  pop     bp ;~ 0848:059D
cs=0x848;eip=0x00059e; 	J(RETF(0x14));	// 36752                  retf    14h ;~ 0848:059E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1e489: 	goto loc_1e489;
        case m2c::kloc_1e49f: 	goto loc_1e49f;
        case m2c::kloc_1e4a6: 	goto loc_1e4a6;
        case m2c::kloc_1e4ad: 	goto loc_1e4ad;
        case m2c::kloc_1e4b7: 	goto loc_1e4b7;
        case m2c::kloc_1e4cd: 	goto loc_1e4cd;
        case m2c::kloc_1e4d5: 	goto loc_1e4d5;
        case m2c::kloc_1e4d8: 	goto loc_1e4d8;
        case m2c::kloc_1e4f5: 	goto loc_1e4f5;
        case m2c::kloc_1e4fa: 	goto loc_1e4fa;
        case m2c::kloc_1e509: 	goto loc_1e509;
        case m2c::kloc_1e569: 	goto loc_1e569;
        case m2c::kret_848_4c5: 	goto ret_848_4c5;
        case m2c::kseg001_45a_proc: 	goto seg001_45a_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1e572(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1e572:
    _begin:
#undef var_e
#define var_e -0x0E
	// 36762 var_E           = word ptr -0Eh ;~ 0848:05A2
#undef var_c
#define var_c -0x0C
	// 36763 var_C           = word ptr -0Ch ;~ 0848:05A2
#undef var_a
#define var_a -0x0A
	// 36764 var_A           = word ptr -0Ah ;~ 0848:05A2
#undef var_8
#define var_8 -8
	// 36765 var_8           = word ptr -8 ;~ 0848:05A2
#undef var_6
#define var_6 -6
	// 36766 var_6           = word ptr -6 ;~ 0848:05A2
#undef var_4
#define var_4 -4
	// 36767 var_4           = word ptr -4 ;~ 0848:05A2
#undef var_2
#define var_2 -2
	// 36768 var_2           = word ptr -2 ;~ 0848:05A2
cs=0x848;eip=0x0005a2; 	X(PUSH(bp));	// 36770                  push    bp ;~ 0848:05A2
cs=0x848;eip=0x0005a3; 	T(bp = sp;);	// 36771                  mov     bp, sp ;~ 0848:05A3
cs=0x848;eip=0x0005a5; 	T(SUB(sp, 0x0E));	// 36772                  sub     sp, 0Eh ;~ 0848:05A5
cs=0x848;eip=0x0005a8; 	X(PUSH(di));	// 36773                  push    di ;~ 0848:05A8
cs=0x848;eip=0x0005a9; 	X(PUSH(si));	// 36774                  push    si ;~ 0848:05A9
cs=0x848;eip=0x0005aa; 	T(LES(bx, *(dd*)(&byte_6b85c)));	// 36775                  les     bx, dword ptr byte_6B85C ;~ 0848:05AA
cs=0x848;eip=0x0005ae; 	T(ADD(bx, *(dw*)(raddr(es,bx+0x0C))));	// 36776                  add     bx, es:[bx+0Ch] ;~ 0848:05AE
cs=0x848;eip=0x0005b2; 	T(ax = bx+0x25B0);	// 36777                  lea     ax, [bx+25B0h] ;~ 0848:05B2
cs=0x848;eip=0x0005b6; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 36778                  mov     [bp+var_6], ax ;~ 0848:05B6
cs=0x848;eip=0x0005b9; 	T(bx = *(dw*)(&byte_6b85c););	// 36779                  mov     bx, word ptr byte_6B85C ;~ 0848:05B9
cs=0x848;eip=0x0005bd; 	T(MOV(al, *(raddr(es,bx+0x0A))));	// 36780                  mov     al, es:[bx+0Ah] ;~ 0848:05BD
cs=0x848;eip=0x0005c1; 	X(MOV(*(raddr(es,bx+0x1BAA)), al));	// 36781                  mov     es:[bx+1BAAh], al ;~ 0848:05C1
cs=0x848;eip=0x0005c6; 	T(MOV(al, *(raddr(es,bx+6))));	// 36782                  mov     al, es:[bx+6] ;~ 0848:05C6
cs=0x848;eip=0x0005ca; 	X(MOV(*(raddr(es,bx+0x1BAB)), al));	// 36783                  mov     es:[bx+1BABh], al ;~ 0848:05CA
cs=0x848;eip=0x0005cf; 	X(MOV(*(dw*)(raddr(es,bx+2)), 2));	// 36784                  mov     word ptr es:[bx+2], 2 ;~ 0848:05CF
cs=0x848;eip=0x0005d5; 	T(ax = bx+0x1BAC);	// 36785                  lea     ax, [bx+1BACh] ;~ 0848:05D5
cs=0x848;eip=0x0005d9; 	X(PUSH(es));	// 36786                  push    es ;~ 0848:05D9
cs=0x848;eip=0x0005da; 	X(PUSH(ax));	// 36787                  push    ax ;~ 0848:05DA
cs=0x848;eip=0x0005db; 	T(SUB(ax, ax));	// 36788                  sub     ax, ax ;~ 0848:05DB
cs=0x848;eip=0x0005dd; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 36789                  mov     [bp+var_E], ax ;~ 0848:05DD
cs=0x848;eip=0x0005e0; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 36790                  mov     [bp+var_C], ax ;~ 0848:05E0
cs=0x848;eip=0x0005e3; 	T(dx = 0x800;);	// 36791                  mov     dx, 800h ;~ 0848:05E3
cs=0x848;eip=0x0005e6; 	J(CALL(sub_1ebca,0));	// 36792                  call    sub_1EBCA ;~ 0848:05E6
cs=0x848;eip=0x0005e9; 	T(LES(bx, *(dd*)(&byte_6b85c)));	// 36793                  les     bx, dword ptr byte_6B85C ;~ 0848:05E9
cs=0x848;eip=0x0005ed; 	X(MOV(*(dw*)(raddr(es,bx+4)), 0));	// 36794                  mov     word ptr es:[bx+4], 0 ;~ 0848:05ED
loc_1e5c3:
	// 6458 
cs=0x848;eip=0x0005f3; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0x1000));	// 36797                  mov     [bp+var_A], 1000h ;~ 0848:05F3
cs=0x848;eip=0x0005f8; 	T(SUB(si, si));	// 36798                  sub     si, si ;~ 0848:05F8
loc_1e5ca:
	// 6459 
cs=0x848;eip=0x0005fa; 	T(LES(bx, *(dd*)(&byte_6b85c)));	// 36801                  les     bx, dword ptr byte_6B85C ;~ 0848:05FA
cs=0x848;eip=0x0005fe; 	T(ADD(bx, *(dw*)(raddr(es,bx+0x0C))));	// 36802                  add     bx, es:[bx+0Ch] ;~ 0848:05FE
cs=0x848;eip=0x000602; 	T(di = bp+var_a);	// 36803                  lea     di, [bp+var_A] ;~ 0848:0602
cs=0x848;eip=0x000605; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 36804                  push    [bp+var_A] ;~ 0848:0605
cs=0x848;eip=0x000608; 	X(PUSH(si));	// 36805                  push    si ;~ 0848:0608
cs=0x848;eip=0x000609; 	T(bx = bx+si+0x25B0);	// 36806                  lea     bx, [bx+si+25B0h] ;~ 0848:0609
cs=0x848;eip=0x00060d; 	X(PUSH(es));	// 36807                  push    es ;~ 0848:060D
cs=0x848;eip=0x00060e; 	X(PUSH(bx));	// 36808                  push    bx ;~ 0848:060E
cs=0x848;eip=0x00060f; 	X(PUSH(ss));	// 36809                  push    ss ;~ 0848:060F
cs=0x848;eip=0x000610; 	X(PUSH(di));	// 36810                  push    di ;~ 0848:0610
cs=0x848;eip=0x000611; 	T(bx = *(dw*)(&byte_6b85c););	// 36811                  mov     bx, word ptr byte_6B85C ;~ 0848:0611
cs=0x848;eip=0x000615; 	J(CALLF(__dispatch_call,*(dd*)(raddr(es,bx+0x9A0))));	// 36812                  call    dword ptr es:[bx+9A0h] ;~ 0848:0615
cs=0x848;eip=0x00061a; 	X(POP(si));	// 36813                  pop     si ;~ 0848:061A
cs=0x848;eip=0x00061b; 	X(POP(*(dw*)(raddr(ss,bp+var_a))));	// 36814                  pop     [bp+var_A] ;~ 0848:061B
cs=0x848;eip=0x00061e; 	T(di = ax;);	// 36815                  mov     di, ax ;~ 0848:061E
cs=0x848;eip=0x000620; 	T(OR(di, di));	// 36816                  or      di, di ;~ 0848:0620
cs=0x848;eip=0x000622; 	J(JZ(loc_1e604));	// 36817                  jz      short loc_1E604 ;~ 0848:0622
cs=0x848;eip=0x000624; 	T(ADD(si, di));	// 36818                  add     si, di ;~ 0848:0624
cs=0x848;eip=0x000626; 	X(SUB(*(dw*)(raddr(ss,bp+var_a)), di));	// 36819                  sub     [bp+var_A], di ;~ 0848:0626
cs=0x848;eip=0x000629; 	J(JNZ(loc_1e5ca));	// 36820                  jnz     short loc_1E5CA ;~ 0848:0629
cs=0x848;eip=0x00062b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), si));	// 36821                  mov     [bp+var_2], si ;~ 0848:062B
cs=0x848;eip=0x00062e; 	T(cx = si;);	// 36822                  mov     cx, si ;~ 0848:062E
cs=0x848;eip=0x000630; 	J(JMP(loc_1e788));	// 36823                  jmp     loc_1E788 ;~ 0848:0630
loc_1e604:
	// 6460 
cs=0x848;eip=0x000634; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), si));	// 36829                  mov     [bp+var_2], si ;~ 0848:0634
cs=0x848;eip=0x000637; 	T(cx = si;);	// 36830                  mov     cx, si ;~ 0848:0637
cs=0x848;eip=0x000639; 	T(OR(cx, cx));	// 36831                  or      cx, cx ;~ 0848:0639
cs=0x848;eip=0x00063b; 	J(JZ(loc_1e610));	// 36832                  jz      short loc_1E610 ;~ 0848:063B
cs=0x848;eip=0x00063d; 	J(JMP(loc_1e783));	// 36833                  jmp     loc_1E783 ;~ 0848:063D
loc_1e610:
	// 6461 
cs=0x848;eip=0x000640; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), 0));	// 36837                  cmp     [bp+var_E], 0 ;~ 0848:0640
cs=0x848;eip=0x000644; 	J(JZ(loc_1e619));	// 36838                  jz      short loc_1E619 ;~ 0848:0644
cs=0x848;eip=0x000646; 	J(JMP(loc_1e783));	// 36839                  jmp     loc_1E783 ;~ 0848:0646
loc_1e619:
	// 6462 
cs=0x848;eip=0x000649; 	T(LES(bx, *(dd*)(&byte_6b85c)));	// 36844                  les     bx, dword ptr byte_6B85C ;~ 0848:0649
cs=0x848;eip=0x00064d; 	X(PUSH(es));	// 36845                  push    es ;~ 0848:064D
cs=0x848;eip=0x00064e; 	X(PUSH(bx));	// 36846                  push    bx ;~ 0848:064E
cs=0x848;eip=0x00064f; 	T(MOV(al, *(raddr(es,bx+0x393))));	// 36847                  mov     al, es:[bx+393h] ;~ 0848:064F
cs=0x848;eip=0x000654; 	T(SUB(ah, ah));	// 36848                  sub     ah, ah ;~ 0848:0654
cs=0x848;eip=0x000656; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x99E))));	// 36849                  mov     dx, es:[bx+99Eh] ;~ 0848:0656
cs=0x848;eip=0x00065b; 	J(CALL(sub_1ea9e,0));	// 36850                  call    sub_1EA9E ;~ 0848:065B
cs=0x848;eip=0x00065e; 	X(POP(bx));	// 36851                  pop     bx ;~ 0848:065E
cs=0x848;eip=0x00065f; 	X(POP(es));	// 36852                  pop     es ;~ 0848:065F
cs=0x848;eip=0x000660; 	T(CMP(*(dw*)(raddr(es,bx+4)), 0));	// 36853                  cmp     word ptr es:[bx+4], 0 ;~ 0848:0660
cs=0x848;eip=0x000665; 	J(JZ(loc_1e63b));	// 36854                  jz      short loc_1E63B ;~ 0848:0665
cs=0x848;eip=0x000667; 	X(INC(*(dw*)(raddr(es,bx+2))));	// 36855                  inc     word ptr es:[bx+2] ;~ 0848:0667
loc_1e63b:
	// 6463 
cs=0x848;eip=0x00066b; 	T(ax = bx+0x1BAA);	// 36858                  lea     ax, [bx+1BAAh] ;~ 0848:066B
cs=0x848;eip=0x00066f; 	X(PUSH(es));	// 36859                  push    es ;~ 0848:066F
cs=0x848;eip=0x000670; 	X(PUSH(ax));	// 36860                  push    ax ;~ 0848:0670
cs=0x848;eip=0x000671; 	T(ax = bx+2);	// 36861                  lea     ax, [bx+2] ;~ 0848:0671
cs=0x848;eip=0x000674; 	X(PUSH(es));	// 36862                  push    es ;~ 0848:0674
cs=0x848;eip=0x000675; 	X(PUSH(ax));	// 36863                  push    ax ;~ 0848:0675
cs=0x848;eip=0x000676; 	J(CALLF(__dispatch_call,*(dd*)(raddr(es,bx+0x9A4))));	// 36864                  call    dword ptr es:[bx+9A4h] ;~ 0848:0676
cs=0x848;eip=0x00067b; 	X(POP(si));	// 36865                  pop     si ;~ 0848:067B
cs=0x848;eip=0x00067c; 	X(POP(di));	// 36866                  pop     di ;~ 0848:067C
cs=0x848;eip=0x00067d; 	T(sp = bp;);	// 36867                  mov     sp, bp ;~ 0848:067D
cs=0x848;eip=0x00067f; 	X(POP(bp));	// 36868                  pop     bp ;~ 0848:067F
cs=0x848;eip=0x000680; 	J(RETN(0));	// 36869                  retn ;~ 0848:0680
loc_1e651:
	// 6464 
cs=0x848;eip=0x000681; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), di));	// 36873                  mov     [bp+var_8], di ;~ 0848:0681
loc_1e654:
	// 6465 
cs=0x848;eip=0x000684; 	T(bx = si;);	// 36876                  mov     bx, si ;~ 0848:0684
cs=0x848;eip=0x000686; 	J(CALL(sub_1e830,0));	// 36877                  call    sub_1E830 ;~ 0848:0686
cs=0x848;eip=0x000689; 	T(di = ax;);	// 36878                  mov     di, ax ;~ 0848:0689
loc_1e65b:
	// 6466 
cs=0x848;eip=0x00068b; 	T(LES(bx, *(dd*)(&byte_6b85c)));	// 36881                  les     bx, dword ptr byte_6B85C ;~ 0848:068B
cs=0x848;eip=0x00068f; 	T(OR(di, di));	// 36882                  or      di, di ;~ 0848:068F
cs=0x848;eip=0x000691; 	J(JZ(loc_1e691));	// 36883                  jz      short loc_1E691 ;~ 0848:0691
cs=0x848;eip=0x000693; 	T(CMP(di, 2));	// 36884                  cmp     di, 2 ;~ 0848:0693
cs=0x848;eip=0x000696; 	J(JNZ(loc_1e66f));	// 36885                  jnz     short loc_1E66F ;~ 0848:0696
cs=0x848;eip=0x000698; 	T(CMP(*(dw*)(raddr(es,bx)), 0x100));	// 36886                  cmp     word ptr es:[bx], 100h ;~ 0848:0698
cs=0x848;eip=0x00069d; 	J(JNC(loc_1e691));	// 36887                  jnb     short loc_1E691 ;~ 0848:069D
loc_1e66f:
	// 6467 
cs=0x848;eip=0x00069f; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), 0));	// 36890                  cmp     [bp+var_C], 0 ;~ 0848:069F
cs=0x848;eip=0x0006a3; 	J(JZ(loc_1e6ad));	// 36891                  jz      short loc_1E6AD ;~ 0848:06A3
cs=0x848;eip=0x0006a5; 	T(ax = si;);	// 36892                  mov     ax, si ;~ 0848:06A5
cs=0x848;eip=0x0006a7; 	T(ADD(ax, di));	// 36893                  add     ax, di ;~ 0848:06A7
cs=0x848;eip=0x0006a9; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_8))));	// 36894                  cmp     ax, [bp+var_8] ;~ 0848:06A9
cs=0x848;eip=0x0006ac; 	J(JBE(loc_1e6ad));	// 36895                  jbe     short loc_1E6AD ;~ 0848:06AC
cs=0x848;eip=0x0006ae; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_8))));	// 36896                  mov     di, [bp+var_8] ;~ 0848:06AE
cs=0x848;eip=0x0006b1; 	T(SUB(di, si));	// 36897                  sub     di, si ;~ 0848:06B1
cs=0x848;eip=0x0006b3; 	T(CMP(di, 2));	// 36898                  cmp     di, 2 ;~ 0848:06B3
cs=0x848;eip=0x0006b6; 	J(JC(loc_1e691));	// 36899                  jb      short loc_1E691 ;~ 0848:06B6
cs=0x848;eip=0x0006b8; 	J(JNZ(loc_1e705));	// 36900                  jnz     short loc_1E705 ;~ 0848:06B8
cs=0x848;eip=0x0006ba; 	T(CMP(*(dw*)(raddr(es,bx)), 0x100));	// 36901                  cmp     word ptr es:[bx], 100h ;~ 0848:06BA
cs=0x848;eip=0x0006bf; 	J(JC(loc_1e705));	// 36902                  jb      short loc_1E705 ;~ 0848:06BF
loc_1e691:
	// 6468 
cs=0x848;eip=0x0006c1; 	T(di = bx;);	// 36906                  mov     di, bx ;~ 0848:06C1
cs=0x848;eip=0x0006c3; 	T(MOV(bl, *(raddr(es,si))));	// 36907                  mov     bl, es:[si] ;~ 0848:06C3
cs=0x848;eip=0x0006c6; 	T(SUB(bh, bh));	// 36908                  sub     bh, bh ;~ 0848:06C6
cs=0x848;eip=0x0006c8; 	T(MOV(al, *(raddr(es,bx+di+0x8E))));	// 36909                  mov     al, es:[bx+di+8Eh] ;~ 0848:06C8
cs=0x848;eip=0x0006cd; 	T(SUB(ah, ah));	// 36910                  sub     ah, ah ;~ 0848:06CD
cs=0x848;eip=0x0006cf; 	T(SHL(bx, 1));	// 36911                  shl     bx, 1 ;~ 0848:06CF
cs=0x848;eip=0x0006d1; 	T(MOV(dx, *(dw*)(raddr(es,bx+di+0x394))));	// 36912                  mov     dx, es:[bx+di+394h] ;~ 0848:06D1
cs=0x848;eip=0x0006d6; 	T(di = 1;);	// 36913                  mov     di, 1 ;~ 0848:06D6
cs=0x848;eip=0x0006d9; 	J(JMP(loc_1e775));	// 36914                  jmp     loc_1E775 ;~ 0848:06D9
loc_1e6ad:
	// 6469 
cs=0x848;eip=0x0006dd; 	T(CMP(di, 8));	// 36921                  cmp     di, 8 ;~ 0848:06DD
cs=0x848;eip=0x0006e0; 	J(JNC(loc_1e705));	// 36922                  jnb     short loc_1E705 ;~ 0848:06E0
cs=0x848;eip=0x0006e2; 	T(INC(si));	// 36923                  inc     si ;~ 0848:06E2
cs=0x848;eip=0x0006e3; 	T(CMP(si, *(dw*)(raddr(ss,bp+var_8))));	// 36924                  cmp     si, [bp+var_8] ;~ 0848:06E3
cs=0x848;eip=0x0006e6; 	T(DEC(si));	// 36925                  dec     si ;~ 0848:06E6
cs=0x848;eip=0x0006e7; 	J(JNC(loc_1e705));	// 36926                  jnb     short loc_1E705 ;~ 0848:06E7
cs=0x848;eip=0x0006e9; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 36927                  mov     ax, es:[bx] ;~ 0848:06E9
cs=0x848;eip=0x0006ec; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 36928                  mov     [bp+var_4], ax ;~ 0848:06EC
cs=0x848;eip=0x0006ef; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), di));	// 36929                  mov     [bp+var_2], di ;~ 0848:06EF
cs=0x848;eip=0x0006f2; 	X(PUSH(es));	// 36930                  push    es ;~ 0848:06F2
cs=0x848;eip=0x0006f3; 	X(PUSH(bx));	// 36931                  push    bx ;~ 0848:06F3
cs=0x848;eip=0x0006f4; 	T(bx = si+1);	// 36932                  lea     bx, [si+1] ;~ 0848:06F4
cs=0x848;eip=0x0006f7; 	J(CALL(sub_1e830,0));	// 36933                  call    sub_1E830 ;~ 0848:06F7
cs=0x848;eip=0x0006fa; 	X(POP(bx));	// 36934                  pop     bx ;~ 0848:06FA
cs=0x848;eip=0x0006fb; 	X(POP(es));	// 36935                  pop     es ;~ 0848:06FB
cs=0x848;eip=0x0006fc; 	T(XCHG(ax, di));	// 36936                  xchg    ax, di ;~ 0848:06FC
cs=0x848;eip=0x0006fd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 36937                  mov     ax, [bp+var_2] ;~ 0848:06FD
cs=0x848;eip=0x000700; 	T(CMP(di, ax));	// 36938                  cmp     di, ax ;~ 0848:0700
cs=0x848;eip=0x000702; 	J(JBE(loc_1e6fc));	// 36939                  jbe     short loc_1E6FC ;~ 0848:0702
cs=0x848;eip=0x000704; 	T(INC(ax));	// 36940                  inc     ax ;~ 0848:0704
cs=0x848;eip=0x000705; 	T(CMP(ax, di));	// 36941                  cmp     ax, di ;~ 0848:0705
cs=0x848;eip=0x000707; 	J(JC(loc_1e6e0));	// 36942                  jb      short loc_1E6E0 ;~ 0848:0707
cs=0x848;eip=0x000709; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0x80));	// 36943                  cmp     [bp+var_4], 80h ;~ 0848:0709
cs=0x848;eip=0x00070e; 	J(JBE(loc_1e6fc));	// 36944                  jbe     short loc_1E6FC ;~ 0848:070E
loc_1e6e0:
	// 6470 
cs=0x848;eip=0x000710; 	T(MOV(cl, *(raddr(es,si))));	// 36947                  mov     cl, es:[si] ;~ 0848:0710
cs=0x848;eip=0x000713; 	T(SUB(ch, ch));	// 36948                  sub     ch, ch ;~ 0848:0713
cs=0x848;eip=0x000715; 	T(ADD(bx, cx));	// 36949                  add     bx, cx ;~ 0848:0715
cs=0x848;eip=0x000717; 	T(MOV(al, *(raddr(es,bx+0x8E))));	// 36950                  mov     al, es:[bx+8Eh] ;~ 0848:0717
cs=0x848;eip=0x00071c; 	T(SUB(ah, ah));	// 36951                  sub     ah, ah ;~ 0848:071C
cs=0x848;eip=0x00071e; 	T(ADD(bx, cx));	// 36952                  add     bx, cx ;~ 0848:071E
cs=0x848;eip=0x000720; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x394))));	// 36953                  mov     dx, es:[bx+394h] ;~ 0848:0720
cs=0x848;eip=0x000725; 	J(CALL(sub_1ea9e,0));	// 36954                  call    sub_1EA9E ;~ 0848:0725
cs=0x848;eip=0x000728; 	T(INC(si));	// 36955                  inc     si ;~ 0848:0728
cs=0x848;eip=0x000729; 	J(JMP(loc_1e65b));	// 36956                  jmp     loc_1E65B ;~ 0848:0729
loc_1e6fc:
	// 6471 
cs=0x848;eip=0x00072c; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_2))));	// 36961                  mov     di, [bp+var_2] ;~ 0848:072C
cs=0x848;eip=0x00072f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 36962                  mov     ax, [bp+var_4] ;~ 0848:072F
cs=0x848;eip=0x000732; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 36963                  mov     es:[bx], ax ;~ 0848:0732
loc_1e705:
	// 6472 
cs=0x848;eip=0x000735; 	X(PUSH(es));	// 36967                  push    es ;~ 0848:0735
cs=0x848;eip=0x000736; 	X(PUSH(bx));	// 36968                  push    bx ;~ 0848:0736
cs=0x848;eip=0x000737; 	T(ax = di;);	// 36969                  mov     ax, di ;~ 0848:0737
cs=0x848;eip=0x000739; 	T(SHL(ax, 1));	// 36970                  shl     ax, 1 ;~ 0848:0739
cs=0x848;eip=0x00073b; 	T(ADD(bx, ax));	// 36971                  add     bx, ax ;~ 0848:073B
cs=0x848;eip=0x00073d; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x590))));	// 36972                  mov     dx, es:[bx+590h] ;~ 0848:073D
cs=0x848;eip=0x000742; 	X(POP(bx));	// 36973                  pop     bx ;~ 0848:0742
cs=0x848;eip=0x000743; 	X(PUSH(bx));	// 36974                  push    bx ;~ 0848:0743
cs=0x848;eip=0x000744; 	T(MOV(al, *(raddr(es,bx+di+0x18C))));	// 36975                  mov     al, es:[bx+di+18Ch] ;~ 0848:0744
cs=0x848;eip=0x000749; 	T(SUB(ah, ah));	// 36976                  sub     ah, ah ;~ 0848:0749
cs=0x848;eip=0x00074b; 	J(CALL(sub_1ea9e,0));	// 36977                  call    sub_1EA9E ;~ 0848:074B
cs=0x848;eip=0x00074e; 	X(POP(bx));	// 36978                  pop     bx ;~ 0848:074E
cs=0x848;eip=0x00074f; 	X(POP(es));	// 36979                  pop     es ;~ 0848:074F
cs=0x848;eip=0x000750; 	T(CMP(di, 2));	// 36980                  cmp     di, 2 ;~ 0848:0750
cs=0x848;eip=0x000753; 	J(JNZ(loc_1e74c));	// 36981                  jnz     short loc_1E74C ;~ 0848:0753
cs=0x848;eip=0x000755; 	X(PUSH(es));	// 36982                  push    es ;~ 0848:0755
cs=0x848;eip=0x000756; 	X(PUSH(bx));	// 36983                  push    bx ;~ 0848:0756
cs=0x848;eip=0x000757; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 36984                  mov     ax, es:[bx] ;~ 0848:0757
cs=0x848;eip=0x00075a; 	T(SHR(ax, 1));	// 36985                  shr     ax, 1 ;~ 0848:075A
cs=0x848;eip=0x00075c; 	T(SHR(ax, 1));	// 36986                  shr     ax, 1 ;~ 0848:075C
cs=0x848;eip=0x00075e; 	T(ADD(bx, ax));	// 36987                  add     bx, ax ;~ 0848:075E
cs=0x848;eip=0x000760; 	T(MOV(dl, *(raddr(es,bx+0x4E))));	// 36988                  mov     dl, es:[bx+4Eh] ;~ 0848:0760
cs=0x848;eip=0x000764; 	T(MOV(al, *(raddr(es,bx+0x0E))));	// 36989                  mov     al, es:[bx+0Eh] ;~ 0848:0764
cs=0x848;eip=0x000768; 	T(SUB(ah, ah));	// 36990                  sub     ah, ah ;~ 0848:0768
cs=0x848;eip=0x00076a; 	T(SUB(dh, dh));	// 36991                  sub     dh, dh ;~ 0848:076A
cs=0x848;eip=0x00076c; 	J(CALL(sub_1ea9e,0));	// 36992                  call    sub_1EA9E ;~ 0848:076C
cs=0x848;eip=0x00076f; 	X(POP(bx));	// 36993                  pop     bx ;~ 0848:076F
cs=0x848;eip=0x000770; 	X(POP(es));	// 36994                  pop     es ;~ 0848:0770
cs=0x848;eip=0x000771; 	T(MOV(dl, *(raddr(es,bx))));	// 36995                  mov     dl, es:[bx] ;~ 0848:0771
cs=0x848;eip=0x000774; 	T(AND(dx, 3));	// 36996                  and     dx, 3 ;~ 0848:0774
cs=0x848;eip=0x000777; 	T(ax = di;);	// 36997                  mov     ax, di ;~ 0848:0777
cs=0x848;eip=0x000779; 	J(JMP(loc_1e775));	// 36998                  jmp     short loc_1E775 ;~ 0848:0779
loc_1e74c:
	// 6473 
cs=0x848;eip=0x00077c; 	X(PUSH(es));	// 37004                  push    es ;~ 0848:077C
cs=0x848;eip=0x00077d; 	X(PUSH(bx));	// 37005                  push    bx ;~ 0848:077D
cs=0x848;eip=0x00077e; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 37006                  mov     ax, es:[bx] ;~ 0848:077E
cs=0x848;eip=0x000781; 	T(MOV(cl, *(raddr(es,bx+6))));	// 37007                  mov     cl, es:[bx+6] ;~ 0848:0781
cs=0x848;eip=0x000785; 	T(SHR(ax, cl));	// 37008                  shr     ax, cl ;~ 0848:0785
cs=0x848;eip=0x000787; 	T(ADD(bx, ax));	// 37009                  add     bx, ax ;~ 0848:0787
cs=0x848;eip=0x000789; 	T(MOV(dl, *(raddr(es,bx+0x4E))));	// 37010                  mov     dl, es:[bx+4Eh] ;~ 0848:0789
cs=0x848;eip=0x00078d; 	T(MOV(al, *(raddr(es,bx+0x0E))));	// 37011                  mov     al, es:[bx+0Eh] ;~ 0848:078D
cs=0x848;eip=0x000791; 	T(SUB(ah, ah));	// 37012                  sub     ah, ah ;~ 0848:0791
cs=0x848;eip=0x000793; 	T(SUB(dh, dh));	// 37013                  sub     dh, dh ;~ 0848:0793
cs=0x848;eip=0x000795; 	J(CALL(sub_1ea9e,0));	// 37014                  call    sub_1EA9E ;~ 0848:0795
cs=0x848;eip=0x000798; 	X(POP(bx));	// 37015                  pop     bx ;~ 0848:0798
cs=0x848;eip=0x000799; 	X(POP(es));	// 37016                  pop     es ;~ 0848:0799
cs=0x848;eip=0x00079a; 	T(MOV(dx, *(dw*)(raddr(es,bx+8))));	// 37017                  mov     dx, es:[bx+8] ;~ 0848:079A
cs=0x848;eip=0x00079e; 	T(AND(dx, *(dw*)(raddr(es,bx))));	// 37018                  and     dx, es:[bx] ;~ 0848:079E
cs=0x848;eip=0x0007a1; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 37019                  mov     ax, es:[bx+6] ;~ 0848:07A1
loc_1e775:
	// 6474 
cs=0x848;eip=0x0007a5; 	J(CALL(sub_1ea9e,0));	// 37023                  call    sub_1EA9E ;~ 0848:07A5
cs=0x848;eip=0x0007a8; 	T(ADD(si, di));	// 37024                  add     si, di ;~ 0848:07A8
cs=0x848;eip=0x0007aa; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), si));	// 37025                  cmp     [bp+var_8], si ;~ 0848:07AA
cs=0x848;eip=0x0007ad; 	J(JBE(loc_1e7fc));	// 37026                  jbe     short loc_1E7FC ;~ 0848:07AD
cs=0x848;eip=0x0007af; 	J(JMP(loc_1e654));	// 37027                  jmp     loc_1E654 ;~ 0848:07AF
loc_1e783:
	// 6475 
cs=0x848;eip=0x0007b3; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 1));	// 37034                  mov     [bp+var_C], 1 ;~ 0848:07B3
loc_1e788:
	// 6476 
cs=0x848;eip=0x0007b8; 	T(di = cx;);	// 37037                  mov     di, cx ;~ 0848:07B8
cs=0x848;eip=0x0007ba; 	T(LES(bx, *(dd*)(&byte_6b85c)));	// 37038                  les     bx, dword ptr byte_6B85C ;~ 0848:07BA
cs=0x848;eip=0x0007be; 	T(ADD(di, *(dw*)(raddr(es,bx+0x0C))));	// 37039                  add     di, es:[bx+0Ch] ;~ 0848:07BE
cs=0x848;eip=0x0007c2; 	T(di = bx+di+0x23AC);	// 37040                  lea     di, [bx+di+23ACh] ;~ 0848:07C2
cs=0x848;eip=0x0007c6; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), 0));	// 37041                  cmp     [bp+var_C], 0 ;~ 0848:07C6
cs=0x848;eip=0x0007ca; 	J(JZ(loc_1e7a0));	// 37042                  jz      short loc_1E7A0 ;~ 0848:07CA
cs=0x848;eip=0x0007cc; 	T(ADD(di, 0x204));	// 37043                  add     di, 204h ;~ 0848:07CC
loc_1e7a0:
	// 6477 
cs=0x848;eip=0x0007d0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 37046                  mov     ax, [bp+var_E] ;~ 0848:07D0
cs=0x848;eip=0x0007d3; 	T(OR(ax, ax));	// 37047                  or      ax, ax ;~ 0848:07D3
cs=0x848;eip=0x0007d5; 	J(JZ(loc_1e7c1));	// 37048                  jz      short loc_1E7C1 ;~ 0848:07D5
cs=0x848;eip=0x0007d7; 	T(DEC(ax));	// 37049                  dec     ax ;~ 0848:07D7
cs=0x848;eip=0x0007d8; 	J(JZ(loc_1e7db));	// 37050                  jz      short loc_1E7DB ;~ 0848:07D8
cs=0x848;eip=0x0007da; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_6))));	// 37051                  mov     si, [bp+var_6] ;~ 0848:07DA
cs=0x848;eip=0x0007dd; 	T(ax = di+1);	// 37052                  lea     ax, [di+1] ;~ 0848:07DD
cs=0x848;eip=0x0007e0; 	T(bx = *(dw*)(&byte_6b85c););	// 37053                  mov     bx, word ptr byte_6B85C ;~ 0848:07E0
cs=0x848;eip=0x0007e4; 	T(MOV(cx, *(dw*)(raddr(es,bx+0x0C))));	// 37054                  mov     cx, es:[bx+0Ch] ;~ 0848:07E4
cs=0x848;eip=0x0007e8; 	T(bx = si;);	// 37055                  mov     bx, si ;~ 0848:07E8
cs=0x848;eip=0x0007ea; 	T(SUB(bx, cx));	// 37056                  sub     bx, cx ;~ 0848:07EA
cs=0x848;eip=0x0007ec; 	J(CALL(sub_1eb15,0));	// 37057                  call    sub_1EB15 ;~ 0848:07EC
cs=0x848;eip=0x0007ef; 	J(JMP(loc_1e7f5));	// 37058                  jmp     short loc_1E7F5 ;~ 0848:07EF
loc_1e7c1:
	// 6478 
cs=0x848;eip=0x0007f1; 	T(bx = *(dw*)(&byte_6b85c););	// 37062                  mov     bx, word ptr byte_6B85C ;~ 0848:07F1
cs=0x848;eip=0x0007f5; 	T(CMP(*(dw*)(raddr(es,bx+0x0C)), 0x1000));	// 37063                  cmp     word ptr es:[bx+0Ch], 1000h ;~ 0848:07F5
cs=0x848;eip=0x0007fb; 	J(JZ(loc_1e7d0));	// 37064                  jz      short loc_1E7D0 ;~ 0848:07FB
cs=0x848;eip=0x0007fd; 	X(INC(*(dw*)(raddr(ss,bp+var_e))));	// 37065                  inc     [bp+var_E] ;~ 0848:07FD
loc_1e7d0:
	// 6479 
cs=0x848;eip=0x000800; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_6))));	// 37068                  mov     si, [bp+var_6] ;~ 0848:0800
cs=0x848;eip=0x000803; 	T(ax = di+1);	// 37069                  lea     ax, [di+1] ;~ 0848:0803
cs=0x848;eip=0x000806; 	T(bx = si;);	// 37070                  mov     bx, si ;~ 0848:0806
cs=0x848;eip=0x000808; 	J(JMP(loc_1e7ef));	// 37071                  jmp     short loc_1E7EF ;~ 0848:0808
loc_1e7db:
	// 6480 
cs=0x848;eip=0x00080b; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_6))));	// 37077                  mov     si, [bp+var_6] ;~ 0848:080B
cs=0x848;eip=0x00080e; 	T(ax = di+1);	// 37078                  lea     ax, [di+1] ;~ 0848:080E
cs=0x848;eip=0x000811; 	T(bx = *(dw*)(&byte_6b85c););	// 37079                  mov     bx, word ptr byte_6B85C ;~ 0848:0811
cs=0x848;eip=0x000815; 	T(MOV(cx, *(dw*)(raddr(es,bx+0x0C))));	// 37080                  mov     cx, es:[bx+0Ch] ;~ 0848:0815
cs=0x848;eip=0x000819; 	T(bx = si+0x204);	// 37081                  lea     bx, [si+204h] ;~ 0848:0819
cs=0x848;eip=0x00081d; 	T(SUB(bx, cx));	// 37082                  sub     bx, cx ;~ 0848:081D
loc_1e7ef:
	// 6481 
cs=0x848;eip=0x00081f; 	J(CALL(sub_1eb15,0));	// 37085                  call    sub_1EB15 ;~ 0848:081F
cs=0x848;eip=0x000822; 	X(INC(*(dw*)(raddr(ss,bp+var_e))));	// 37086                  inc     [bp+var_E] ;~ 0848:0822
loc_1e7f5:
	// 6482 
cs=0x848;eip=0x000825; 	T(CMP(di, si));	// 37089                  cmp     di, si ;~ 0848:0825
cs=0x848;eip=0x000827; 	J(JBE(loc_1e7fc));	// 37090                  jbe     short loc_1E7FC ;~ 0848:0827
cs=0x848;eip=0x000829; 	J(JMP(loc_1e651));	// 37091                  jmp     loc_1E651 ;~ 0848:0829
loc_1e7fc:
	// 6483 
cs=0x848;eip=0x00082c; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), 0));	// 37096                  cmp     [bp+var_C], 0 ;~ 0848:082C
cs=0x848;eip=0x000830; 	J(JNZ(loc_1e820));	// 37097                  jnz     short loc_1E820 ;~ 0848:0830
cs=0x848;eip=0x000832; 	T(LES(bx, *(dd*)(&byte_6b85c)));	// 37098                  les     bx, dword ptr byte_6B85C ;~ 0848:0832
cs=0x848;eip=0x000836; 	T(ax = bx+0x23AC);	// 37099                  lea     ax, [bx+23ACh] ;~ 0848:0836
cs=0x848;eip=0x00083a; 	X(PUSH(es));	// 37100                  push    es ;~ 0848:083A
cs=0x848;eip=0x00083b; 	X(PUSH(ax));	// 37101                  push    ax ;~ 0848:083B
cs=0x848;eip=0x00083c; 	T(ax = bx+0x33AC);	// 37102                  lea     ax, [bx+33ACh] ;~ 0848:083C
cs=0x848;eip=0x000840; 	X(PUSH(es));	// 37103                  push    es ;~ 0848:0840
cs=0x848;eip=0x000841; 	X(PUSH(ax));	// 37104                  push    ax ;~ 0848:0841
cs=0x848;eip=0x000842; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C))));	// 37105                  mov     ax, es:[bx+0Ch] ;~ 0848:0842
cs=0x848;eip=0x000846; 	T(ADD(ax, 0x204));	// 37106                  add     ax, 204h ;~ 0848:0846
cs=0x848;eip=0x000849; 	J(CALL(sub_1eba2,0));	// 37107                  call    sub_1EBA2 ;~ 0848:0849
cs=0x848;eip=0x00084c; 	T(SUB(si, 0x1000));	// 37108                  sub     si, 1000h ;~ 0848:084C
loc_1e820:
	// 6484 
cs=0x848;eip=0x000850; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), si));	// 37111                  mov     [bp+var_6], si ;~ 0848:0850
cs=0x848;eip=0x000853; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), 0));	// 37112                  cmp     [bp+var_C], 0 ;~ 0848:0853
cs=0x848;eip=0x000857; 	J(JNZ(loc_1e82c));	// 37113                  jnz     short loc_1E82C ;~ 0848:0857
cs=0x848;eip=0x000859; 	J(JMP(loc_1e5c3));	// 37114                  jmp     loc_1E5C3 ;~ 0848:0859
loc_1e82c:
	// 6485 
cs=0x848;eip=0x00085c; 	J(JMP(loc_1e619));	// 37118                  jmp     loc_1E619 ;~ 0848:085C

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1e5c3: 	goto loc_1e5c3;
        case m2c::kloc_1e5ca: 	goto loc_1e5ca;
        case m2c::kloc_1e604: 	goto loc_1e604;
        case m2c::kloc_1e610: 	goto loc_1e610;
        case m2c::kloc_1e619: 	goto loc_1e619;
        case m2c::kloc_1e63b: 	goto loc_1e63b;
        case m2c::kloc_1e651: 	goto loc_1e651;
        case m2c::kloc_1e654: 	goto loc_1e654;
        case m2c::kloc_1e65b: 	goto loc_1e65b;
        case m2c::kloc_1e66f: 	goto loc_1e66f;
        case m2c::kloc_1e691: 	goto loc_1e691;
        case m2c::kloc_1e6ad: 	goto loc_1e6ad;
        case m2c::kloc_1e6e0: 	goto loc_1e6e0;
        case m2c::kloc_1e6fc: 	goto loc_1e6fc;
        case m2c::kloc_1e705: 	goto loc_1e705;
        case m2c::kloc_1e74c: 	goto loc_1e74c;
        case m2c::kloc_1e775: 	goto loc_1e775;
        case m2c::kloc_1e783: 	goto loc_1e783;
        case m2c::kloc_1e788: 	goto loc_1e788;
        case m2c::kloc_1e7a0: 	goto loc_1e7a0;
        case m2c::kloc_1e7c1: 	goto loc_1e7c1;
        case m2c::kloc_1e7d0: 	goto loc_1e7d0;
        case m2c::kloc_1e7db: 	goto loc_1e7db;
        case m2c::kloc_1e7ef: 	goto loc_1e7ef;
        case m2c::kloc_1e7f5: 	goto loc_1e7f5;
        case m2c::kloc_1e7fc: 	goto loc_1e7fc;
        case m2c::kloc_1e820: 	goto loc_1e820;
        case m2c::kloc_1e82c: 	goto loc_1e82c;
        case m2c::ksub_1e572: 	goto sub_1e572;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1e830(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1e830:
    _begin:
cs=0x848;eip=0x000860; 	X(*(dw*)(&byte_6c06e) = ss;);	// 37129                  mov     word ptr byte_6C06E, ss ;~ 0848:0860
cs=0x848;eip=0x000864; 	X(*(dw*)(&byte_6c070) = sp;);	// 37130                  mov     word ptr byte_6C070, sp ;~ 0848:0864
cs=0x848;eip=0x000868; 	T(ax = ds;);	// 37131                  mov     ax, ds ;~ 0848:0868
cs=0x848;eip=0x00086a; 	T(CMP(word_6b85a, 0));	// 37132                  cmp     word_6B85A, 0 ;~ 0848:086A
cs=0x848;eip=0x00086f; 	J(JZ(loc_1e84b));	// 37133                  jz      short loc_1E84B ;~ 0848:086F
cs=0x848;eip=0x000871; 	T(CLI);	// 37134                  cli ;~ 0848:0871
cs=0x848;eip=0x000872; 	S(ss = ax;);	// 37135                  mov     ss, ax ;~ 0848:0872
cs=0x848;eip=0x000874; 	T(sp = 0x81E;);	// 37137                  mov     sp, 81Eh ;~ 0848:0874
cs=0x848;eip=0x000877; 	T(STI);	// 37138                  sti ;~ 0848:0877
cs=0x848;eip=0x000878; 	J(JMP(loc_1e850));	// 37139                  jmp     short loc_1E850 ;~ 0848:0878
loc_1e84b:
	// 6486 
cs=0x848;eip=0x00087b; 	S(ss = ax;);	// 37145                  mov     ss, ax ;~ 0848:087B
cs=0x848;eip=0x00087d; 	T(sp = 0x81E;);	// 37146                  mov     sp, 81Eh ;~ 0848:087D
loc_1e850:
	// 6487 
cs=0x848;eip=0x000880; 	X(PUSH(bp));	// 37149                  push    bp ;~ 0848:0880
cs=0x848;eip=0x000881; 	T(bp = sp;);	// 37150                  mov     bp, sp ;~ 0848:0881
cs=0x848;eip=0x000883; 	T(SUB(sp, 0x0E));	// 37151                  sub     sp, 0Eh ;~ 0848:0883
cs=0x848;eip=0x000886; 	X(PUSH(bx));	// 37152                  push    bx ;~ 0848:0886
cs=0x848;eip=0x000887; 	X(PUSH(di));	// 37153                  push    di ;~ 0848:0887
cs=0x848;eip=0x000888; 	X(PUSH(si));	// 37154                  push    si ;~ 0848:0888
cs=0x848;eip=0x000889; 	X(MOV(*(dw*)(raddr(ss,bp-6)), 1));	// 37155                  mov     word ptr [bp-6], 1 ;~ 0848:0889
cs=0x848;eip=0x00088e; 	X(PUSH(ds));	// 37156                  push    ds ;~ 0848:088E
cs=0x848;eip=0x00088f; 	T(ds = *(dw*)(&byte_6b85e););	// 37157                  mov     ds, word ptr byte_6B85E ;~ 0848:088F
cs=0x848;eip=0x000893; 	T(CLD);	// 37159                  cld ;~ 0848:0893
cs=0x848;eip=0x000894; 	T(di = bx;);	// 37160                  mov     di, bx ;~ 0848:0894
cs=0x848;eip=0x000896; 	T(MOV(al, *(raddr(ds,bx+1))));	// 37161                  mov     al, [bx+1] ;~ 0848:0896
cs=0x848;eip=0x000899; 	T(MOV(bl, *(raddr(ds,bx))));	// 37162                  mov     bl, [bx] ;~ 0848:0899
cs=0x848;eip=0x00089b; 	T(SUB(bh, bh));	// 37163                  sub     bh, bh ;~ 0848:089B
cs=0x848;eip=0x00089d; 	T(SUB(ah, ah));	// 37164                  sub     ah, ah ;~ 0848:089D
cs=0x848;eip=0x00089f; 	T(cl = 3;);	// 37165                  mov     cl, 3 ;~ 0848:089F
cs=0x848;eip=0x0008a1; 	T(SHL(bx, cl));	// 37166                  shl     bx, cl ;~ 0848:08A1
cs=0x848;eip=0x0008a3; 	T(ADD(bx, ax));	// 37167                  add     bx, ax ;~ 0848:08A3
cs=0x848;eip=0x0008a5; 	T(SHL(bx, 1));	// 37168                  shl     bx, 1 ;~ 0848:08A5
cs=0x848;eip=0x0008a7; 	X(MOV(*(dw*)(raddr(ss,bp-0x0A)), bx));	// 37169                  mov     [bp-0Ah], bx ;~ 0848:08A7
cs=0x848;eip=0x0008aa; 	X(POP(es));	// 37170                  pop     es ;~ 0848:08AA
cs=0x848;eip=0x0008ab; 	X(PUSH(es));	// 37171                  push    es ;~ 0848:08AB
cs=0x848;eip=0x0008ac; 	T(MOV(si, *(dw*)(raddr(es,0x0C))));	// 37172                  mov     si, es:0Ch ;~ 0848:08AC
cs=0x848;eip=0x0008b1; 	T(MOV(bx, *(dw*)(raddr(ds,bx+si+0x9A8))));	// 37173                  mov     bx, [bx+si+9A8h] ;~ 0848:08B1
cs=0x848;eip=0x0008b5; 	X(MOV(*(dw*)(raddr(ss,bp-8)), bx));	// 37174                  mov     [bp-8], bx ;~ 0848:08B5
cs=0x848;eip=0x0008b8; 	T(SUB(di, *(dw*)(raddr(ds,si+0x0C))));	// 37175                  sub     di, [si+0Ch] ;~ 0848:08B8
cs=0x848;eip=0x0008bb; 	T(INC(di));	// 37176                  inc     di ;~ 0848:08BB
cs=0x848;eip=0x0008bc; 	X(PUSH(ds));	// 37177                  push    ds ;~ 0848:08BC
cs=0x848;eip=0x0008bd; 	X(POP(es));	// 37178                  pop     es ;~ 0848:08BD
cs=0x848;eip=0x0008be; 	T(CMP(*(dw*)(raddr(ds,bx)), di));	// 37180                  cmp     [bx], di ;~ 0848:08BE
cs=0x848;eip=0x0008c0; 	J(JNC(loc_1e8a3));	// 37181                  jnb     short loc_1E8A3 ;~ 0848:08C0
loc_1e892:
	// 6488 
cs=0x848;eip=0x0008c2; 	T(INC(bx));	// 37184                  inc     bx ;~ 0848:08C2
cs=0x848;eip=0x0008c3; 	T(INC(bx));	// 37185                  inc     bx ;~ 0848:08C3
cs=0x848;eip=0x0008c4; 	T(CMP(*(dw*)(raddr(ds,bx)), di));	// 37186                  cmp     [bx], di ;~ 0848:08C4
cs=0x848;eip=0x0008c6; 	J(JC(loc_1e892));	// 37187                  jb      short loc_1E892 ;~ 0848:08C6
cs=0x848;eip=0x0008c8; 	X(MOV(*(dw*)(raddr(ss,bp-8)), bx));	// 37188                  mov     [bp-8], bx ;~ 0848:08C8
cs=0x848;eip=0x0008cb; 	T(XCHG(ax, bx));	// 37189                  xchg    ax, bx ;~ 0848:08CB
cs=0x848;eip=0x0008cc; 	T(MOV(bx, *(dw*)(raddr(ss,bp-0x0A))));	// 37190                  mov     bx, [bp-0Ah] ;~ 0848:08CC
cs=0x848;eip=0x0008cf; 	X(MOV(*(dw*)(raddr(ds,bx+si+0x9A8)), ax));	// 37191                  mov     [bx+si+9A8h], ax ;~ 0848:08CF
loc_1e8a3:
	// 6489 
cs=0x848;eip=0x0008d3; 	T(MOV(bx, *(dw*)(raddr(ss,bp-8))));	// 37194                  mov     bx, [bp-8] ;~ 0848:08D3
cs=0x848;eip=0x0008d6; 	T(MOV(di, *(dw*)(raddr(ds,bx))));	// 37195                  mov     di, [bx] ;~ 0848:08D6
cs=0x848;eip=0x0008d8; 	T(MOV(dx, *(dw*)(raddr(ss,bp-0x10))));	// 37196                  mov     dx, [bp-10h] ;~ 0848:08D8
cs=0x848;eip=0x0008db; 	T(DEC(dx));	// 37197                  dec     dx ;~ 0848:08DB
cs=0x848;eip=0x0008dc; 	T(CMP(di, dx));	// 37198                  cmp     di, dx ;~ 0848:08DC
cs=0x848;eip=0x0008de; 	J(JC(loc_1e8b6));	// 37199                  jb      short loc_1E8B6 ;~ 0848:08DE
cs=0x848;eip=0x0008e0; 	T(SUB(ax, ax));	// 37200                  sub     ax, ax ;~ 0848:08E0
cs=0x848;eip=0x0008e2; 	J(JMP(loc_1ea7b));	// 37201                  jmp     loc_1EA7B ;~ 0848:08E2
loc_1e8b6:
	// 6490 
cs=0x848;eip=0x0008e6; 	T(MOV(si, *(dw*)(raddr(ss,bp-0x10))));	// 37207                  mov     si, [bp-10h] ;~ 0848:08E6
cs=0x848;eip=0x0008e9; 	T(cx = si;);	// 37208                  mov     cx, si ;~ 0848:08E9
cs=0x848;eip=0x0008eb; 	X(MOV(*(dw*)(raddr(ss,bp-4)), si));	// 37209                  mov     [bp-4], si ;~ 0848:08EB
cs=0x848;eip=0x0008ee; 	T(MOV(bx, *(dw*)(raddr(ss,bp-6))));	// 37210                  mov     bx, [bp-6] ;~ 0848:08EE
cs=0x848;eip=0x0008f1; 	T(DEC(bx));	// 37211                  dec     bx ;~ 0848:08F1
cs=0x848;eip=0x0008f2; 	T(MOV(al, *(raddr(ds,bx+si))));	// 37212                  mov     al, [bx+si] ;~ 0848:08F2
cs=0x848;eip=0x0008f4; 	J(JMP(loc_1e8f2));	// 37213                  jmp     short loc_1E8F2 ;~ 0848:08F4
loc_1e8c6:
	// 6491 
cs=0x848;eip=0x0008f6; 	T(MOV(ax, *(dw*)(raddr(ss,bp-6))));	// 37217                  mov     ax, [bp-6] ;~ 0848:08F6
cs=0x848;eip=0x0008f9; 	T(CMP(ax, 2));	// 37218                  cmp     ax, 2 ;~ 0848:08F9
cs=0x848;eip=0x0008fc; 	J(JC(loc_1e8d1));	// 37219                  jb      short loc_1E8D1 ;~ 0848:08FC
cs=0x848;eip=0x0008fe; 	J(JMP(loc_1ea7b));	// 37220                  jmp     loc_1EA7B ;~ 0848:08FE
loc_1e8d1:
	// 6492 
cs=0x848;eip=0x000901; 	T(XOR(ax, ax));	// 37224                  xor     ax, ax ;~ 0848:0901
cs=0x848;eip=0x000903; 	J(JMP(loc_1ea7b));	// 37225                  jmp     loc_1EA7B ;~ 0848:0903
loc_1e8d6:
	// 6493 
cs=0x848;eip=0x000906; 	T(MOV(bx, *(dw*)(raddr(ss,bp-6))));	// 37230                  mov     bx, [bp-6] ;~ 0848:0906
cs=0x848;eip=0x000909; 	T(DEC(bx));	// 37231                  dec     bx ;~ 0848:0909
cs=0x848;eip=0x00090a; 	T(MOV(si, *(dw*)(raddr(ss,bp-4))));	// 37232                  mov     si, [bp-4] ;~ 0848:090A
cs=0x848;eip=0x00090d; 	T(MOV(al, *(raddr(ds,bx+si))));	// 37233                  mov     al, [bx+si] ;~ 0848:090D
cs=0x848;eip=0x00090f; 	T(cx = si;);	// 37234                  mov     cx, si ;~ 0848:090F
cs=0x848;eip=0x000911; 	T(NOP);	// 37235                  nop ;~ 0848:0911
loc_1e8e2:
	// 6494 
cs=0x848;eip=0x000912; 	T(si = cx;);	// 37238                  mov     si, cx ;~ 0848:0912
loc_1e8e4:
	// 6495 
cs=0x848;eip=0x000914; 	T(MOV(di, *(dw*)(raddr(ss,bp-8))));	// 37241                  mov     di, [bp-8] ;~ 0848:0914
cs=0x848;eip=0x000917; 	T(INC(di));	// 37242                  inc     di ;~ 0848:0917
cs=0x848;eip=0x000918; 	T(INC(di));	// 37243                  inc     di ;~ 0848:0918
cs=0x848;eip=0x000919; 	X(MOV(*(dw*)(raddr(ss,bp-8)), di));	// 37244                  mov     [bp-8], di ;~ 0848:0919
cs=0x848;eip=0x00091c; 	T(MOV(di, *(dw*)(raddr(ds,di))));	// 37245                  mov     di, [di] ;~ 0848:091C
cs=0x848;eip=0x00091e; 	T(CMP(di, dx));	// 37246                  cmp     di, dx ;~ 0848:091E
cs=0x848;eip=0x000920; 	J(JNC(loc_1e8c6));	// 37247                  jnb     short loc_1E8C6 ;~ 0848:0920
loc_1e8f2:
	// 6496 
cs=0x848;eip=0x000922; 	T(CMP(*(raddr(ds,bx+di)), al));	// 37250                  cmp     [bx+di], al ;~ 0848:0922
cs=0x848;eip=0x000924; 	J(JNZ(loc_1e8e4));	// 37251                  jnz     short loc_1E8E4 ;~ 0848:0924
cs=0x848;eip=0x000926; 	T(CMPSB);	// 37252                  cmpsb ;~ 0848:0926
cs=0x848;eip=0x000927; 	J(JNZ(loc_1e8e2));	// 37253                  jnz     short loc_1E8E2 ;~ 0848:0927
cs=0x848;eip=0x000929; 	T(cx = 0x202;);	// 37254                  mov     cx, 202h ;~ 0848:0929
cs=0x848;eip=0x00092c; 	T(INC(si));	// 37255                  inc     si ;~ 0848:092C
cs=0x848;eip=0x00092d; 	T(INC(di));	// 37256                  inc     di ;~ 0848:092D
	// 37257                  repe cmpsb ;~ 0848:092E
cs=0x848;eip=0x00092e; 	T(	REPE CMPSB);	// 37257                  repe cmpsb ;~ 0848:092E
cs=0x848;eip=0x000930; 	J(JZ(loc_1e903));	// 37258                  jz      short loc_1E903 ;~ 0848:0930
cs=0x848;eip=0x000932; 	T(INC(cx));	// 37259                  inc     cx ;~ 0848:0932
loc_1e903:
	// 6497 
cs=0x848;eip=0x000933; 	T(SUB(cx, 0x205));	// 37262                  sub     cx, 205h ;~ 0848:0933
cs=0x848;eip=0x000937; 	T(NOT(cx));	// 37263                  not     cx ;~ 0848:0937
cs=0x848;eip=0x000939; 	T(CMP(*(dw*)(raddr(ss,bp-6)), cx));	// 37264                  cmp     [bp-6], cx ;~ 0848:0939
cs=0x848;eip=0x00093c; 	J(JA(loc_1e8d6));	// 37265                  ja      short loc_1E8D6 ;~ 0848:093C
cs=0x848;eip=0x00093e; 	T(ax = si-1);	// 37266                  lea     ax, [si-1] ;~ 0848:093E
cs=0x848;eip=0x000941; 	T(SUB(ax, di));	// 37267                  sub     ax, di ;~ 0848:0941
cs=0x848;eip=0x000943; 	T(bx = *(dw*)(&byte_6b85c););	// 37268                  mov     bx, word ptr ss:byte_6B85C ;~ 0848:0943
cs=0x848;eip=0x000948; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 37269                  mov     [bx], ax ;~ 0848:0948
cs=0x848;eip=0x00094a; 	X(MOV(*(dw*)(raddr(ss,bp-6)), cx));	// 37270                  mov     [bp-6], cx ;~ 0848:094A
cs=0x848;eip=0x00094d; 	T(CMP(cx, 0x0E));	// 37271                  cmp     cx, 0Eh ;~ 0848:094D
cs=0x848;eip=0x000950; 	J(JC(loc_1e8d6));	// 37272                  jb      short loc_1E8D6 ;~ 0848:0950
cs=0x848;eip=0x000952; 	T(CMP(cx, 0x204));	// 37273                  cmp     cx, 204h ;~ 0848:0952
cs=0x848;eip=0x000956; 	J(JNZ(loc_1e934));	// 37274                  jnz     short loc_1E934 ;~ 0848:0956
loc_1e928:
	// 6498 
cs=0x848;eip=0x000958; 	T(XCHG(ax, cx));	// 37277                  xchg    ax, cx ;~ 0848:0958
cs=0x848;eip=0x000959; 	J(JMP(loc_1ea7b));	// 37278                  jmp     loc_1EA7B ;~ 0848:0959
loc_1e92d:
	// 6499 
cs=0x848;eip=0x00095d; 	T(MOV(ax, *(dw*)(raddr(ss,bp-6))));	// 37285                  mov     ax, [bp-6] ;~ 0848:095D
cs=0x848;eip=0x000960; 	J(JMP(loc_1ea7b));	// 37286                  jmp     loc_1EA7B ;~ 0848:0960
loc_1e934:
	// 6500 
cs=0x848;eip=0x000964; 	T(MOV(bx, *(dw*)(raddr(ss,bp-8))));	// 37292                  mov     bx, [bp-8] ;~ 0848:0964
cs=0x848;eip=0x000967; 	T(CMP(*(dw*)(raddr(ds,bx+2)), dx));	// 37293                  cmp     [bx+2], dx ;~ 0848:0967
cs=0x848;eip=0x00096a; 	J(JNC(loc_1e92d));	// 37294                  jnb     short loc_1E92D ;~ 0848:096A
cs=0x848;eip=0x00096c; 	T(CMP(*(dw*)(raddr(ds,bx+4)), dx));	// 37295                  cmp     [bx+4], dx ;~ 0848:096C
cs=0x848;eip=0x00096f; 	J(JNC(loc_1e8d6));	// 37296                  jnb     short loc_1E8D6 ;~ 0848:096F
cs=0x848;eip=0x000971; 	T(SUB(si, si));	// 37297                  sub     si, si ;~ 0848:0971
cs=0x848;eip=0x000973; 	X(*(dw*)(&byte_6b866) = si;);	// 37298                  mov     word ptr ss:byte_6B866, si ;~ 0848:0973
cs=0x848;eip=0x000978; 	X(*(dw*)(&byte_6b864) = 0x0FFFF;);	// 37299                  mov     word ptr ss:byte_6B864, 0FFFFh ;~ 0848:0978
cs=0x848;eip=0x00097f; 	T(di = 1;);	// 37300                  mov     di, 1 ;~ 0848:097F
cs=0x848;eip=0x000982; 	T(MOV(bx, *(dw*)(raddr(ss,bp-4))));	// 37301                  mov     bx, [bp-4] ;~ 0848:0982
cs=0x848;eip=0x000985; 	T(MOV(cx, *(dw*)(raddr(ss,bp-6))));	// 37302                  mov     cx, [bp-6] ;~ 0848:0985
loc_1e958:
	// 6501 
cs=0x848;eip=0x000988; 	T(MOV(al, *(raddr(ds,bx+di))));	// 37305                  mov     al, [bx+di] ;~ 0848:0988
cs=0x848;eip=0x00098a; 	T(CMP(*(raddr(ds,bx+si)), al));	// 37306                  cmp     [bx+si], al ;~ 0848:098A
cs=0x848;eip=0x00098c; 	J(JZ(loc_1e969));	// 37307                  jz      short loc_1E969 ;~ 0848:098C
cs=0x848;eip=0x00098e; 	T(SHL(si, 1));	// 37308                  shl     si, 1 ;~ 0848:098E
cs=0x848;eip=0x000990; 	T(MOV(si, *(dw*)(raddr(ss,si+0x14))));	// 37309                  mov     si, ss:[si+14h] ;~ 0848:0990
cs=0x848;eip=0x000995; 	T(TEST(si, si));	// 37310                  test    si, si ;~ 0848:0995
cs=0x848;eip=0x000997; 	J(JNS(loc_1e974));	// 37311                  jns     short loc_1E974 ;~ 0848:0997
loc_1e969:
	// 6502 
cs=0x848;eip=0x000999; 	T(INC(si));	// 37314                  inc     si ;~ 0848:0999
cs=0x848;eip=0x00099a; 	T(INC(di));	// 37315                  inc     di ;~ 0848:099A
cs=0x848;eip=0x00099b; 	T(SHL(di, 1));	// 37316                  shl     di, 1 ;~ 0848:099B
cs=0x848;eip=0x00099d; 	X(MOV(*(dw*)(raddr(ss,di+0x14)), si));	// 37317                  mov     ss:[di+14h], si ;~ 0848:099D
cs=0x848;eip=0x0009a2; 	T(SHR(di, 1));	// 37318                  shr     di, 1 ;~ 0848:09A2
loc_1e974:
	// 6503 
cs=0x848;eip=0x0009a4; 	T(CMP(cx, di));	// 37321                  cmp     cx, di ;~ 0848:09A4
cs=0x848;eip=0x0009a6; 	J(JA(loc_1e958));	// 37322                  ja      short loc_1E958 ;~ 0848:09A6
cs=0x848;eip=0x0009a8; 	X(MOV(*(dw*)(raddr(ss,bp-0x0E)), si));	// 37323                  mov     [bp-0Eh], si ;~ 0848:09A8
cs=0x848;eip=0x0009ab; 	X(MOV(*(dw*)(raddr(ss,bp-0x0C)), di));	// 37324                  mov     [bp-0Ch], di ;~ 0848:09AB
cs=0x848;eip=0x0009ae; 	T(MOV(bx, *(dw*)(raddr(ss,bp-8))));	// 37325                  mov     bx, [bp-8] ;~ 0848:09AE
cs=0x848;eip=0x0009b1; 	T(MOV(di, *(dw*)(raddr(ds,bx))));	// 37326                  mov     di, [bx] ;~ 0848:09B1
cs=0x848;eip=0x0009b3; 	T(ADD(di, cx));	// 37327                  add     di, cx ;~ 0848:09B3
cs=0x848;eip=0x0009b5; 	T(INC(di));	// 37328                  inc     di ;~ 0848:09B5
loc_1e986:
	// 6504 
cs=0x848;eip=0x0009b6; 	T(DEC(di));	// 37332                  dec     di ;~ 0848:09B6
cs=0x848;eip=0x0009b7; 	T(si = cx;);	// 37333                  mov     si, cx ;~ 0848:09B7
cs=0x848;eip=0x0009b9; 	T(bx = si;);	// 37334                  mov     bx, si ;~ 0848:09B9
cs=0x848;eip=0x0009bb; 	T(MOV(si, *(dw*)(raddr(ss,bx+si+0x14))));	// 37335                  mov     si, ss:[bx+si+14h] ;~ 0848:09BB
cs=0x848;eip=0x0009c0; 	T(CMP(si, 0x0FFFF));	// 37336                  cmp     si, 0FFFFh ;~ 0848:09C0
cs=0x848;eip=0x0009c3; 	J(JNZ(loc_1e996));	// 37337                  jnz     short loc_1E996 ;~ 0848:09C3
cs=0x848;eip=0x0009c5; 	T(INC(si));	// 37338                  inc     si ;~ 0848:09C5
loc_1e996:
	// 6505 
cs=0x848;eip=0x0009c6; 	X(ADD(*(dw*)(raddr(ss,bp-8)), 2));	// 37342                  add     word ptr [bp-8], 2 ;~ 0848:09C6
cs=0x848;eip=0x0009ca; 	T(MOV(bx, *(dw*)(raddr(ss,bp-8))));	// 37343                  mov     bx, [bp-8] ;~ 0848:09CA
cs=0x848;eip=0x0009cd; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 37344                  mov     ax, [bx] ;~ 0848:09CD
cs=0x848;eip=0x0009cf; 	X(MOV(*(dw*)(raddr(ss,bp-0x0A)), ax));	// 37345                  mov     [bp-0Ah], ax ;~ 0848:09CF
cs=0x848;eip=0x0009d2; 	T(CMP(ax, dx));	// 37346                  cmp     ax, dx ;~ 0848:09D2
cs=0x848;eip=0x0009d4; 	J(JNC(loc_1e92d));	// 37347                  jnb     short loc_1E92D ;~ 0848:09D4
cs=0x848;eip=0x0009d6; 	T(ADD(ax, si));	// 37348                  add     ax, si ;~ 0848:09D6
cs=0x848;eip=0x0009d8; 	T(CMP(ax, di));	// 37349                  cmp     ax, di ;~ 0848:09D8
cs=0x848;eip=0x0009da; 	J(JC(loc_1e996));	// 37350                  jb      short loc_1E996 ;~ 0848:09DA
cs=0x848;eip=0x0009dc; 	T(MOV(bx, *(dw*)(raddr(ss,bp-6))));	// 37351                  mov     bx, [bp-6] ;~ 0848:09DC
cs=0x848;eip=0x0009df; 	T(ADD(bx, *(dw*)(raddr(ss,bp-0x0A))));	// 37352                  add     bx, [bp-0Ah] ;~ 0848:09DF
cs=0x848;eip=0x0009e2; 	T(MOV(ax, *(dw*)(raddr(ds,bx-2))));	// 37353                  mov     ax, [bx-2] ;~ 0848:09E2
cs=0x848;eip=0x0009e5; 	T(MOV(bx, *(dw*)(raddr(ss,bp-4))));	// 37354                  mov     bx, [bp-4] ;~ 0848:09E5
cs=0x848;eip=0x0009e8; 	T(ADD(bx, *(dw*)(raddr(ss,bp-6))));	// 37355                  add     bx, [bp-6] ;~ 0848:09E8
cs=0x848;eip=0x0009eb; 	T(CMP(*(dw*)(raddr(ds,bx-2)), ax));	// 37356                  cmp     [bx-2], ax ;~ 0848:09EB
cs=0x848;eip=0x0009ee; 	J(JZ(loc_1e9f0));	// 37357                  jz      short loc_1E9F0 ;~ 0848:09EE
cs=0x848;eip=0x0009f0; 	T(MOV(bx, *(dw*)(raddr(ss,bp-6))));	// 37358                  mov     bx, [bp-6] ;~ 0848:09F0
cs=0x848;eip=0x0009f3; 	T(DEC(bx));	// 37359                  dec     bx ;~ 0848:09F3
cs=0x848;eip=0x0009f4; 	T(DEC(bx));	// 37360                  dec     bx ;~ 0848:09F4
cs=0x848;eip=0x0009f5; 	T(MOV(si, *(dw*)(raddr(ss,bp-4))));	// 37361                  mov     si, [bp-4] ;~ 0848:09F5
loc_1e9c8:
	// 6506 
cs=0x848;eip=0x0009f8; 	T(MOV(di, *(dw*)(raddr(ss,bp-8))));	// 37365                  mov     di, [bp-8] ;~ 0848:09F8
cs=0x848;eip=0x0009fb; 	T(INC(di));	// 37366                  inc     di ;~ 0848:09FB
cs=0x848;eip=0x0009fc; 	T(INC(di));	// 37367                  inc     di ;~ 0848:09FC
cs=0x848;eip=0x0009fd; 	X(MOV(*(dw*)(raddr(ss,bp-8)), di));	// 37368                  mov     [bp-8], di ;~ 0848:09FD
cs=0x848;eip=0x000a00; 	T(MOV(di, *(dw*)(raddr(ds,di))));	// 37369                  mov     di, [di] ;~ 0848:0A00
cs=0x848;eip=0x000a02; 	T(CMP(di, dx));	// 37370                  cmp     di, dx ;~ 0848:0A02
cs=0x848;eip=0x000a04; 	J(JC(loc_1e9da));	// 37371                  jb      short loc_1E9DA ;~ 0848:0A04
cs=0x848;eip=0x000a06; 	J(JMP(loc_1e92d));	// 37372                  jmp     loc_1E92D ;~ 0848:0A06
loc_1e9da:
	// 6507 
cs=0x848;eip=0x000a0a; 	T(MOV(ax, *(dw*)(raddr(ds,bx+di))));	// 37378                  mov     ax, [bx+di] ;~ 0848:0A0A
cs=0x848;eip=0x000a0c; 	T(CMP(*(dw*)(raddr(ds,bx+si)), ax));	// 37379                  cmp     [bx+si], ax ;~ 0848:0A0C
cs=0x848;eip=0x000a0e; 	J(JNZ(loc_1e9c8));	// 37380                  jnz     short loc_1E9C8 ;~ 0848:0A0E
cs=0x848;eip=0x000a10; 	T(MOV(al, *(raddr(ds,di))));	// 37381                  mov     al, [di] ;~ 0848:0A10
cs=0x848;eip=0x000a12; 	T(CMP(*(raddr(ds,si)), al));	// 37382                  cmp     [si], al ;~ 0848:0A12
cs=0x848;eip=0x000a14; 	J(JNZ(loc_1e9c8));	// 37383                  jnz     short loc_1E9C8 ;~ 0848:0A14
cs=0x848;eip=0x000a16; 	T(cx = 2;);	// 37384                  mov     cx, 2 ;~ 0848:0A16
cs=0x848;eip=0x000a19; 	X(MOV(*(dw*)(raddr(ss,bp-0x0A)), di));	// 37385                  mov     [bp-0Ah], di ;~ 0848:0A19
cs=0x848;eip=0x000a1c; 	T(ADD(di, cx));	// 37386                  add     di, cx ;~ 0848:0A1C
cs=0x848;eip=0x000a1e; 	J(JMP(loc_1ea00));	// 37387                  jmp     short loc_1EA00 ;~ 0848:0A1E
loc_1e9f0:
	// 6508 
cs=0x848;eip=0x000a20; 	T(cx = si;);	// 37391                  mov     cx, si ;~ 0848:0A20
cs=0x848;eip=0x000a22; 	T(MOV(ax, *(dw*)(raddr(ss,bp-0x0A))));	// 37392                  mov     ax, [bp-0Ah] ;~ 0848:0A22
cs=0x848;eip=0x000a25; 	T(ADD(ax, cx));	// 37393                  add     ax, cx ;~ 0848:0A25
cs=0x848;eip=0x000a27; 	T(CMP(ax, di));	// 37394                  cmp     ax, di ;~ 0848:0A27
cs=0x848;eip=0x000a29; 	J(JZ(loc_1ea00));	// 37395                  jz      short loc_1EA00 ;~ 0848:0A29
cs=0x848;eip=0x000a2b; 	T(SUB(cx, cx));	// 37396                  sub     cx, cx ;~ 0848:0A2B
cs=0x848;eip=0x000a2d; 	T(MOV(di, *(dw*)(raddr(ss,bp-0x0A))));	// 37397                  mov     di, [bp-0Ah] ;~ 0848:0A2D
loc_1ea00:
	// 6509 
cs=0x848;eip=0x000a30; 	T(MOV(si, *(dw*)(raddr(ss,bp-4))));	// 37401                  mov     si, [bp-4] ;~ 0848:0A30
cs=0x848;eip=0x000a33; 	T(ADD(si, cx));	// 37402                  add     si, cx ;~ 0848:0A33
cs=0x848;eip=0x000a35; 	T(SUB(cx, 0x205));	// 37403                  sub     cx, 205h ;~ 0848:0A35
cs=0x848;eip=0x000a39; 	T(NOT(cx));	// 37404                  not     cx ;~ 0848:0A39
	// 37405                  repe cmpsb ;~ 0848:0A3B
cs=0x848;eip=0x000a3b; 	T(	REPE CMPSB);	// 37405                  repe cmpsb ;~ 0848:0A3B
cs=0x848;eip=0x000a3d; 	J(JZ(loc_1ea10));	// 37406                  jz      short loc_1EA10 ;~ 0848:0A3D
cs=0x848;eip=0x000a3f; 	T(INC(cx));	// 37407                  inc     cx ;~ 0848:0A3F
loc_1ea10:
	// 6510 
cs=0x848;eip=0x000a40; 	T(SUB(cx, 0x205));	// 37410                  sub     cx, 205h ;~ 0848:0A40
cs=0x848;eip=0x000a44; 	T(NOT(cx));	// 37411                  not     cx ;~ 0848:0A44
cs=0x848;eip=0x000a46; 	T(CMP(cx, 0x204));	// 37412                  cmp     cx, 204h ;~ 0848:0A46
cs=0x848;eip=0x000a4a; 	J(JBE(loc_1ea1d));	// 37413                  jbe     short loc_1EA1D ;~ 0848:0A4A
cs=0x848;eip=0x000a4c; 	S(_INT(3));	// 37414                  int     3               ; Trap to Debugger ;~ 0848:0A4C
loc_1ea1d:
	// 6511 
cs=0x848;eip=0x000a4d; 	T(CMP(*(dw*)(raddr(ss,bp-6)), cx));	// 37417                  cmp     [bp-6], cx ;~ 0848:0A4D
cs=0x848;eip=0x000a50; 	J(JBE(loc_1ea26));	// 37418                  jbe     short loc_1EA26 ;~ 0848:0A50
cs=0x848;eip=0x000a52; 	J(JMP(loc_1e986));	// 37419                  jmp     loc_1E986 ;~ 0848:0A52
loc_1ea26:
	// 6512 
cs=0x848;eip=0x000a56; 	T(ax = si-1);	// 37425                  lea     ax, [si-1] ;~ 0848:0A56
cs=0x848;eip=0x000a59; 	T(SUB(ax, di));	// 37426                  sub     ax, di ;~ 0848:0A59
cs=0x848;eip=0x000a5b; 	T(bx = *(dw*)(&byte_6b85c););	// 37427                  mov     bx, word ptr ss:byte_6B85C ;~ 0848:0A5B
cs=0x848;eip=0x000a60; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 37428                  mov     [bx], ax ;~ 0848:0A60
cs=0x848;eip=0x000a62; 	T(CMP(*(dw*)(raddr(ss,bp-6)), cx));	// 37429                  cmp     [bp-6], cx ;~ 0848:0A62
cs=0x848;eip=0x000a65; 	J(JC(loc_1ea3a));	// 37430                  jb      short loc_1EA3A ;~ 0848:0A65
cs=0x848;eip=0x000a67; 	J(JMP(loc_1e986));	// 37431                  jmp     loc_1E986 ;~ 0848:0A67
loc_1ea3a:
	// 6513 
cs=0x848;eip=0x000a6a; 	T(CMP(cx, 0x204));	// 37435                  cmp     cx, 204h ;~ 0848:0A6A
cs=0x848;eip=0x000a6e; 	J(JNZ(loc_1ea43));	// 37436                  jnz     short loc_1EA43 ;~ 0848:0A6E
cs=0x848;eip=0x000a70; 	J(JMP(loc_1e928));	// 37437                  jmp     loc_1E928 ;~ 0848:0A70
loc_1ea43:
	// 6514 
cs=0x848;eip=0x000a73; 	X(MOV(*(dw*)(raddr(ss,bp-6)), cx));	// 37441                  mov     [bp-6], cx ;~ 0848:0A73
loc_1ea46:
	// 6515 
cs=0x848;eip=0x000a76; 	T(MOV(si, *(dw*)(raddr(ss,bp-4))));	// 37444                  mov     si, [bp-4] ;~ 0848:0A76
cs=0x848;eip=0x000a79; 	T(MOV(bx, *(dw*)(raddr(ss,bp-0x0C))));	// 37445                  mov     bx, [bp-0Ch] ;~ 0848:0A79
cs=0x848;eip=0x000a7c; 	T(MOV(al, *(raddr(ds,bx+si))));	// 37446                  mov     al, [bx+si] ;~ 0848:0A7C
cs=0x848;eip=0x000a7e; 	T(MOV(bx, *(dw*)(raddr(ss,bp-0x0E))));	// 37447                  mov     bx, [bp-0Eh] ;~ 0848:0A7E
cs=0x848;eip=0x000a81; 	T(CMP(*(raddr(ds,bx+si)), al));	// 37448                  cmp     [bx+si], al ;~ 0848:0A81
cs=0x848;eip=0x000a83; 	J(JZ(loc_1ea60));	// 37449                  jz      short loc_1EA60 ;~ 0848:0A83
cs=0x848;eip=0x000a85; 	T(SHL(bx, 1));	// 37450                  shl     bx, 1 ;~ 0848:0A85
cs=0x848;eip=0x000a87; 	T(MOV(bx, *(dw*)(raddr(ss,bx+0x14))));	// 37451                  mov     bx, ss:[bx+14h] ;~ 0848:0A87
cs=0x848;eip=0x000a8c; 	T(TEST(bx, bx));	// 37452                  test    bx, bx ;~ 0848:0A8C
cs=0x848;eip=0x000a8e; 	J(JNS(loc_1ea6e));	// 37453                  jns     short loc_1EA6E ;~ 0848:0A8E
loc_1ea60:
	// 6516 
cs=0x848;eip=0x000a90; 	T(INC(bx));	// 37456                  inc     bx ;~ 0848:0A90
cs=0x848;eip=0x000a91; 	X(INC(*(dw*)(raddr(ss,bp-0x0C))));	// 37457                  inc     word ptr [bp-0Ch] ;~ 0848:0A91
cs=0x848;eip=0x000a94; 	T(MOV(si, *(dw*)(raddr(ss,bp-0x0C))));	// 37458                  mov     si, [bp-0Ch] ;~ 0848:0A94
cs=0x848;eip=0x000a97; 	T(SHL(si, 1));	// 37459                  shl     si, 1 ;~ 0848:0A97
cs=0x848;eip=0x000a99; 	X(MOV(*(dw*)(raddr(ss,si+0x14)), bx));	// 37460                  mov     ss:[si+14h], bx ;~ 0848:0A99
loc_1ea6e:
	// 6517 
cs=0x848;eip=0x000a9e; 	X(MOV(*(dw*)(raddr(ss,bp-0x0E)), bx));	// 37463                  mov     [bp-0Eh], bx ;~ 0848:0A9E
cs=0x848;eip=0x000aa1; 	T(MOV(ax, *(dw*)(raddr(ss,bp-0x0C))));	// 37464                  mov     ax, [bp-0Ch] ;~ 0848:0AA1
cs=0x848;eip=0x000aa4; 	T(CMP(cx, ax));	// 37465                  cmp     cx, ax ;~ 0848:0AA4
cs=0x848;eip=0x000aa6; 	J(JA(loc_1ea46));	// 37466                  ja      short loc_1EA46 ;~ 0848:0AA6
cs=0x848;eip=0x000aa8; 	J(JMP(loc_1e986));	// 37467                  jmp     loc_1E986 ;~ 0848:0AA8
loc_1ea7b:
	// 6518 
cs=0x848;eip=0x000aab; 	X(POP(ds));	// 37472                  pop     ds ;~ 0848:0AAB
cs=0x848;eip=0x000aac; 	X(POP(si));	// 37474                  pop     si ;~ 0848:0AAC
cs=0x848;eip=0x000aad; 	X(POP(di));	// 37475                  pop     di ;~ 0848:0AAD
cs=0x848;eip=0x000aae; 	T(sp = bp;);	// 37476                  mov     sp, bp ;~ 0848:0AAE
cs=0x848;eip=0x000ab0; 	X(POP(bp));	// 37477                  pop     bp ;~ 0848:0AB0
cs=0x848;eip=0x000ab1; 	T(CMP(*(dw*)(raddr(ds,0x0A)), 0));	// 37478                  cmp     word ptr ds:0Ah, 0 ;~ 0848:0AB1
cs=0x848;eip=0x000ab6; 	J(JZ(loc_1ea93));	// 37479                  jz      short loc_1EA93 ;~ 0848:0AB6
cs=0x848;eip=0x000ab8; 	T(CLI);	// 37480                  cli ;~ 0848:0AB8
cs=0x848;eip=0x000ab9; 	S(MOV(ss, *(dw*)(raddr(ds,0x81E))));	// 37481                  mov     ss, word ptr ds:81Eh ;~ 0848:0AB9
cs=0x848;eip=0x000abd; 	T(MOV(sp, *(dw*)(raddr(ds,0x820))));	// 37483                  mov     sp, ds:820h ;~ 0848:0ABD
cs=0x848;eip=0x000ac1; 	T(STI);	// 37484                  sti ;~ 0848:0AC1
cs=0x848;eip=0x000ac2; 	J(RETN(0));	// 37485                  retn ;~ 0848:0AC2
loc_1ea93:
	// 6519 
cs=0x848;eip=0x000ac3; 	S(MOV(ss, *(dw*)(raddr(ds,0x81E))));	// 37489                  mov     ss, word ptr ds:81Eh ;~ 0848:0AC3
cs=0x848;eip=0x000ac7; 	T(MOV(sp, *(dw*)(raddr(ds,0x820))));	// 37490                  mov     sp, ds:820h ;~ 0848:0AC7
cs=0x848;eip=0x000acb; 	J(RETN(0));	// 37491                  retn ;~ 0848:0ACB

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1e84b: 	goto loc_1e84b;
        case m2c::kloc_1e850: 	goto loc_1e850;
        case m2c::kloc_1e892: 	goto loc_1e892;
        case m2c::kloc_1e8a3: 	goto loc_1e8a3;
        case m2c::kloc_1e8b6: 	goto loc_1e8b6;
        case m2c::kloc_1e8c6: 	goto loc_1e8c6;
        case m2c::kloc_1e8d1: 	goto loc_1e8d1;
        case m2c::kloc_1e8d6: 	goto loc_1e8d6;
        case m2c::kloc_1e8e2: 	goto loc_1e8e2;
        case m2c::kloc_1e8e4: 	goto loc_1e8e4;
        case m2c::kloc_1e8f2: 	goto loc_1e8f2;
        case m2c::kloc_1e903: 	goto loc_1e903;
        case m2c::kloc_1e928: 	goto loc_1e928;
        case m2c::kloc_1e92d: 	goto loc_1e92d;
        case m2c::kloc_1e934: 	goto loc_1e934;
        case m2c::kloc_1e958: 	goto loc_1e958;
        case m2c::kloc_1e969: 	goto loc_1e969;
        case m2c::kloc_1e974: 	goto loc_1e974;
        case m2c::kloc_1e986: 	goto loc_1e986;
        case m2c::kloc_1e996: 	goto loc_1e996;
        case m2c::kloc_1e9c8: 	goto loc_1e9c8;
        case m2c::kloc_1e9da: 	goto loc_1e9da;
        case m2c::kloc_1e9f0: 	goto loc_1e9f0;
        case m2c::kloc_1ea00: 	goto loc_1ea00;
        case m2c::kloc_1ea10: 	goto loc_1ea10;
        case m2c::kloc_1ea1d: 	goto loc_1ea1d;
        case m2c::kloc_1ea26: 	goto loc_1ea26;
        case m2c::kloc_1ea3a: 	goto loc_1ea3a;
        case m2c::kloc_1ea43: 	goto loc_1ea43;
        case m2c::kloc_1ea46: 	goto loc_1ea46;
        case m2c::kloc_1ea60: 	goto loc_1ea60;
        case m2c::kloc_1ea6e: 	goto loc_1ea6e;
        case m2c::kloc_1ea7b: 	goto loc_1ea7b;
        case m2c::kloc_1ea93: 	goto loc_1ea93;
        case m2c::ksub_1e830: 	goto sub_1e830;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1ea9e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1ea9e:
    _begin:
#undef var_4
#define var_4 -4
	// 37505 var_4           = word ptr -4 ;~ 0848:0ACE
#undef var_2
#define var_2 -2
	// 37506 var_2           = word ptr -2 ;~ 0848:0ACE
cs=0x848;eip=0x000ace; 	X(PUSH(bp));	// 37508                  push    bp ;~ 0848:0ACE
cs=0x848;eip=0x000acf; 	T(bp = sp;);	// 37509                  mov     bp, sp ;~ 0848:0ACF
cs=0x848;eip=0x000ad1; 	T(SUB(sp, 2));	// 37510                  sub     sp, 2 ;~ 0848:0AD1
cs=0x848;eip=0x000ad4; 	X(PUSH(ax));	// 37511                  push    ax ;~ 0848:0AD4
cs=0x848;eip=0x000ad5; 	X(PUSH(di));	// 37512                  push    di ;~ 0848:0AD5
cs=0x848;eip=0x000ad6; 	X(PUSH(si));	// 37513                  push    si ;~ 0848:0AD6
cs=0x848;eip=0x000ad7; 	T(di = dx;);	// 37514                  mov     di, dx ;~ 0848:0AD7
cs=0x848;eip=0x000ad9; 	T(CMP(ax, 8));	// 37515                  cmp     ax, 8 ;~ 0848:0AD9
cs=0x848;eip=0x000adc; 	J(JBE(loc_1eabc));	// 37516                  jbe     short loc_1EABC ;~ 0848:0ADC
cs=0x848;eip=0x000ade; 	T(ax = 8;);	// 37517                  mov     ax, 8 ;~ 0848:0ADE
cs=0x848;eip=0x000ae1; 	J(CALL(sub_1ea9e,0));	// 37518                  call    sub_1EA9E ;~ 0848:0AE1
cs=0x848;eip=0x000ae4; 	X(SUB(*(dw*)(raddr(ss,bp+var_4)), 8));	// 37519                  sub     [bp+var_4], 8 ;~ 0848:0AE4
cs=0x848;eip=0x000ae8; 	T(cl = 8;);	// 37520                  mov     cl, 8 ;~ 0848:0AE8
cs=0x848;eip=0x000aea; 	T(SHR(di, cl));	// 37521                  shr     di, cl ;~ 0848:0AEA
loc_1eabc:
	// 6520 
cs=0x848;eip=0x000aec; 	T(LES(bx, *(dw*)(raddr(ds,0x0C))));	// 37524                  les     bx, ds:0Ch ;~ 0848:0AEC
cs=0x848;eip=0x000af0; 	T(MOV(cx, *(dw*)(raddr(es,bx+4))));	// 37526                  mov     cx, es:[bx+4] ;~ 0848:0AF0
cs=0x848;eip=0x000af4; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), cx));	// 37527                  mov     [bp+var_2], cx ;~ 0848:0AF4
cs=0x848;eip=0x000af7; 	T(ax = di;);	// 37528                  mov     ax, di ;~ 0848:0AF7
cs=0x848;eip=0x000af9; 	T(SHL(al, cl));	// 37529                  shl     al, cl ;~ 0848:0AF9
cs=0x848;eip=0x000afb; 	T(MOV(si, *(dw*)(raddr(es,bx+2))));	// 37530                  mov     si, es:[bx+2] ;~ 0848:0AFB
cs=0x848;eip=0x000aff; 	X(OR(*(raddr(es,bx+si+0x1BAA)), al));	// 37531                  or      es:[bx+si+1BAAh], al ;~ 0848:0AFF
cs=0x848;eip=0x000b04; 	T(ax = cx;);	// 37532                  mov     ax, cx ;~ 0848:0B04
cs=0x848;eip=0x000b06; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_4))));	// 37533                  add     ax, [bp+var_4] ;~ 0848:0B06
cs=0x848;eip=0x000b09; 	X(MOV(*(dw*)(raddr(es,bx+4)), ax));	// 37534                  mov     es:[bx+4], ax ;~ 0848:0B09
cs=0x848;eip=0x000b0d; 	T(CMP(ax, 8));	// 37535                  cmp     ax, 8 ;~ 0848:0B0D
cs=0x848;eip=0x000b10; 	J(JBE(loc_1eaf9));	// 37536                  jbe     short loc_1EAF9 ;~ 0848:0B10
cs=0x848;eip=0x000b12; 	T(INC(si));	// 37537                  inc     si ;~ 0848:0B12
cs=0x848;eip=0x000b13; 	T(cl = 8;);	// 37538                  mov     cl, 8 ;~ 0848:0B13
cs=0x848;eip=0x000b15; 	T(SUB(cl, *(raddr(ss,bp+var_2))));	// 37539                  sub     cl, byte ptr [bp+var_2] ;~ 0848:0B15
cs=0x848;eip=0x000b18; 	T(SHR(di, cl));	// 37540                  shr     di, cl ;~ 0848:0B18
cs=0x848;eip=0x000b1a; 	T(ax = di;);	// 37541                  mov     ax, di ;~ 0848:0B1A
cs=0x848;eip=0x000b1c; 	X(MOV(*(raddr(es,bx+si+0x1BAA)), al));	// 37542                  mov     es:[bx+si+1BAAh], al ;~ 0848:0B1C
cs=0x848;eip=0x000b21; 	X(AND(*(dw*)(raddr(es,bx+4)), 7));	// 37543                  and     word ptr es:[bx+4], 7 ;~ 0848:0B21
cs=0x848;eip=0x000b26; 	J(JMP(loc_1eb01));	// 37544                  jmp     short loc_1EB01 ;~ 0848:0B26
loc_1eaf9:
	// 6521 
cs=0x848;eip=0x000b29; 	X(AND(*(dw*)(raddr(es,bx+4)), 7));	// 37550                  and     word ptr es:[bx+4], 7 ;~ 0848:0B29
cs=0x848;eip=0x000b2e; 	J(JNZ(loc_1eb01));	// 37551                  jnz     short loc_1EB01 ;~ 0848:0B2E
cs=0x848;eip=0x000b30; 	T(INC(si));	// 37552                  inc     si ;~ 0848:0B30
loc_1eb01:
	// 6522 
cs=0x848;eip=0x000b31; 	X(MOV(*(dw*)(raddr(es,bx+2)), si));	// 37556                  mov     es:[bx+2], si ;~ 0848:0B31
cs=0x848;eip=0x000b35; 	T(CMP(si, 0x800));	// 37557                  cmp     si, 800h ;~ 0848:0B35
cs=0x848;eip=0x000b39; 	J(JC(loc_1eb0e));	// 37558                  jb      short loc_1EB0E ;~ 0848:0B39
cs=0x848;eip=0x000b3b; 	J(CALL(sub_1ebed,0));	// 37559                  call    sub_1EBED ;~ 0848:0B3B
loc_1eb0e:
	// 6523 
cs=0x848;eip=0x000b3e; 	X(POP(si));	// 37562                  pop     si ;~ 0848:0B3E
cs=0x848;eip=0x000b3f; 	X(POP(di));	// 37563                  pop     di ;~ 0848:0B3F
cs=0x848;eip=0x000b40; 	T(sp = bp;);	// 37564                  mov     sp, bp ;~ 0848:0B40
cs=0x848;eip=0x000b42; 	X(POP(bp));	// 37565                  pop     bp ;~ 0848:0B42
cs=0x848;eip=0x000b43; 	J(RETN(0));	// 37566                  retn ;~ 0848:0B43

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1eabc: 	goto loc_1eabc;
        case m2c::kloc_1eaf9: 	goto loc_1eaf9;
        case m2c::kloc_1eb01: 	goto loc_1eb01;
        case m2c::kloc_1eb0e: 	goto loc_1eb0e;
        case m2c::ksub_1ea9e: 	goto sub_1ea9e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1eb15(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1eb15:
    _begin:
#undef var_8
#define var_8 -8
	// 37579 var_8           = word ptr -8 ;~ 0848:0B45
#undef var_6
#define var_6 -6
	// 37580 var_6           = word ptr -6 ;~ 0848:0B45
#undef var_2
#define var_2 -2
	// 37581 var_2           = word ptr -2 ;~ 0848:0B45
cs=0x848;eip=0x000b45; 	X(PUSH(bp));	// 37583                  push    bp ;~ 0848:0B45
cs=0x848;eip=0x000b46; 	T(bp = sp;);	// 37584                  mov     bp, sp ;~ 0848:0B46
cs=0x848;eip=0x000b48; 	T(SUB(sp, 4));	// 37585                  sub     sp, 4 ;~ 0848:0B48
cs=0x848;eip=0x000b4b; 	X(PUSH(ax));	// 37586                  push    ax ;~ 0848:0B4B
cs=0x848;eip=0x000b4c; 	X(PUSH(bx));	// 37587                  push    bx ;~ 0848:0B4C
cs=0x848;eip=0x000b4d; 	X(PUSH(di));	// 37588                  push    di ;~ 0848:0B4D
cs=0x848;eip=0x000b4e; 	X(PUSH(si));	// 37589                  push    si ;~ 0848:0B4E
cs=0x848;eip=0x000b4f; 	T(CLD);	// 37590                  cld ;~ 0848:0B4F
cs=0x848;eip=0x000b50; 	T(MOV(si, *(dw*)(raddr(ds,0x0C))));	// 37591                  mov     si, ds:0Ch ;~ 0848:0B50
cs=0x848;eip=0x000b54; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), si));	// 37592                  mov     [bp+var_2], si ;~ 0848:0B54
cs=0x848;eip=0x000b57; 	T(SUB(ax, ax));	// 37593                  sub     ax, ax ;~ 0848:0B57
cs=0x848;eip=0x000b59; 	T(MOV(es, *(dw*)(raddr(ds,0x0E))));	// 37594                  mov     es, word ptr ds:0Eh ;~ 0848:0B59
cs=0x848;eip=0x000b5d; 	T(cx = 0x900;);	// 37595                  mov     cx, 900h ;~ 0848:0B5D
cs=0x848;eip=0x000b60; 	T(di = si+0x9A8);	// 37596                  lea     di, [si+9A8h] ;~ 0848:0B60
	// 37597                  rep stosw ;~ 0848:0B64
cs=0x848;eip=0x000b64; 	X(	REP STOSW);	// 37597                  rep stosw ;~ 0848:0B64
cs=0x848;eip=0x000b66; 	T(di = si+0x9A8);	// 37598                  lea     di, [si+9A8h] ;~ 0848:0B66
cs=0x848;eip=0x000b6a; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 37599                  mov     dx, [bp+var_6] ;~ 0848:0B6A
cs=0x848;eip=0x000b6d; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_8))));	// 37600                  mov     si, [bp+var_8] ;~ 0848:0B6D
cs=0x848;eip=0x000b70; 	T(SUB(dx, si));	// 37601                  sub     dx, si ;~ 0848:0B70
cs=0x848;eip=0x000b72; 	T(cl = 3;);	// 37602                  mov     cl, 3 ;~ 0848:0B72
cs=0x848;eip=0x000b74; 	T(SUB(ah, ah));	// 37603                  sub     ah, ah ;~ 0848:0B74
cs=0x848;eip=0x000b76; 	X(PUSH(ds));	// 37604                  push    ds ;~ 0848:0B76
cs=0x848;eip=0x000b77; 	X(PUSH(es));	// 37605                  push    es ;~ 0848:0B77
cs=0x848;eip=0x000b78; 	X(POP(ds));	// 37606                  pop     ds ;~ 0848:0B78
cs=0x848;eip=0x000b79; 	T(NOP);	// 37607                  nop ;~ 0848:0B79
loc_1eb4a:
	// 6524 
cs=0x848;eip=0x000b7a; 	T(LODSB);	// 37610                  lodsb ;~ 0848:0B7A
cs=0x848;eip=0x000b7b; 	T(MOV(bl, *(raddr(ds,si))));	// 37611                  mov     bl, [si] ;~ 0848:0B7B
cs=0x848;eip=0x000b7d; 	T(SUB(bh, bh));	// 37612                  sub     bh, bh ;~ 0848:0B7D
cs=0x848;eip=0x000b7f; 	T(XCHG(ax, bx));	// 37613                  xchg    ax, bx ;~ 0848:0B7F
cs=0x848;eip=0x000b80; 	T(SHL(bx, cl));	// 37614                  shl     bx, cl ;~ 0848:0B80
cs=0x848;eip=0x000b82; 	T(ADD(bx, ax));	// 37615                  add     bx, ax ;~ 0848:0B82
cs=0x848;eip=0x000b84; 	T(SHL(bx, 1));	// 37616                  shl     bx, 1 ;~ 0848:0B84
cs=0x848;eip=0x000b86; 	X(ADD(*(dw*)(raddr(ds,bx+di)), 2));	// 37617                  add     word ptr [bx+di], 2 ;~ 0848:0B86
cs=0x848;eip=0x000b89; 	T(DEC(dx));	// 37618                  dec     dx ;~ 0848:0B89
cs=0x848;eip=0x000b8a; 	J(JNZ(loc_1eb4a));	// 37619                  jnz     short loc_1EB4A ;~ 0848:0B8A
cs=0x848;eip=0x000b8c; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_2))));	// 37620                  mov     si, [bp+var_2] ;~ 0848:0B8C
cs=0x848;eip=0x000b8f; 	T(ax = si+0x45B0);	// 37621                  lea     ax, [si+45B0h] ;~ 0848:0B8F
cs=0x848;eip=0x000b93; 	T(cx = 0x480;);	// 37622                  mov     cx, 480h ;~ 0848:0B93
cs=0x848;eip=0x000b96; 	T(di = si+0x9A8);	// 37623                  lea     di, [si+9A8h] ;~ 0848:0B96
loc_1eb6a:
	// 6525 
cs=0x848;eip=0x000b9a; 	T(ADD(ax, *(dw*)(raddr(ds,di))));	// 37626                  add     ax, [di] ;~ 0848:0B9A
cs=0x848;eip=0x000b9c; 	X(STOSW);	// 37627                  stosw ;~ 0848:0B9C
cs=0x848;eip=0x000b9d; 	T(ADD(ax, *(dw*)(raddr(ds,di))));	// 37628                  add     ax, [di] ;~ 0848:0B9D
cs=0x848;eip=0x000b9f; 	X(STOSW);	// 37629                  stosw ;~ 0848:0B9F
cs=0x848;eip=0x000ba0; 	J(LOOP(loc_1eb6a));	// 37630                  loop    loc_1EB6A ;~ 0848:0BA0
cs=0x848;eip=0x000ba2; 	T(di = si+0x9A8);	// 37631                  lea     di, [si+9A8h] ;~ 0848:0BA2
cs=0x848;eip=0x000ba6; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 37632                  mov     dx, [bp+var_6] ;~ 0848:0BA6
cs=0x848;eip=0x000ba9; 	T(si = dx;);	// 37633                  mov     si, dx ;~ 0848:0BA9
cs=0x848;eip=0x000bab; 	T(SUB(dx, *(dw*)(raddr(ss,bp+var_8))));	// 37634                  sub     dx, [bp+var_8] ;~ 0848:0BAB
cs=0x848;eip=0x000bae; 	T(cl = 3;);	// 37635                  mov     cl, 3 ;~ 0848:0BAE
cs=0x848;eip=0x000bb0; 	T(SUB(ah, ah));	// 37636                  sub     ah, ah ;~ 0848:0BB0
cs=0x848;eip=0x000bb2; 	T(STD);	// 37637                  std ;~ 0848:0BB2
cs=0x848;eip=0x000bb3; 	T(NOP);	// 37638                  nop ;~ 0848:0BB3
loc_1eb84:
	// 6526 
cs=0x848;eip=0x000bb4; 	T(LODSB);	// 37641                  lodsb ;~ 0848:0BB4
cs=0x848;eip=0x000bb5; 	T(MOV(bl, *(raddr(ds,si))));	// 37642                  mov     bl, [si] ;~ 0848:0BB5
cs=0x848;eip=0x000bb7; 	T(SUB(bh, bh));	// 37643                  sub     bh, bh ;~ 0848:0BB7
cs=0x848;eip=0x000bb9; 	T(SHL(bx, cl));	// 37644                  shl     bx, cl ;~ 0848:0BB9
cs=0x848;eip=0x000bbb; 	T(ADD(bx, ax));	// 37645                  add     bx, ax ;~ 0848:0BBB
cs=0x848;eip=0x000bbd; 	T(SHL(bx, 1));	// 37646                  shl     bx, 1 ;~ 0848:0BBD
cs=0x848;eip=0x000bbf; 	X(SUB(*(dw*)(raddr(ds,bx+di)), 2));	// 37647                  sub     word ptr [bx+di], 2 ;~ 0848:0BBF
cs=0x848;eip=0x000bc2; 	T(MOV(bx, *(dw*)(raddr(ds,bx+di))));	// 37648                  mov     bx, [bx+di] ;~ 0848:0BC2
cs=0x848;eip=0x000bc4; 	X(MOV(*(dw*)(raddr(ds,bx)), si));	// 37649                  mov     [bx], si ;~ 0848:0BC4
cs=0x848;eip=0x000bc6; 	T(DEC(dx));	// 37650                  dec     dx ;~ 0848:0BC6
cs=0x848;eip=0x000bc7; 	J(JNZ(loc_1eb84));	// 37651                  jnz     short loc_1EB84 ;~ 0848:0BC7
cs=0x848;eip=0x000bc9; 	T(CLD);	// 37652                  cld ;~ 0848:0BC9
cs=0x848;eip=0x000bca; 	X(POP(ds));	// 37653                  pop     ds ;~ 0848:0BCA
cs=0x848;eip=0x000bcb; 	X(POP(si));	// 37654                  pop     si ;~ 0848:0BCB
cs=0x848;eip=0x000bcc; 	X(POP(di));	// 37655                  pop     di ;~ 0848:0BCC
cs=0x848;eip=0x000bcd; 	T(sp = bp;);	// 37656                  mov     sp, bp ;~ 0848:0BCD
cs=0x848;eip=0x000bcf; 	X(POP(bp));	// 37657                  pop     bp ;~ 0848:0BCF
cs=0x848;eip=0x000bd0; 	J(RETN(0));	// 37658                  retn ;~ 0848:0BD0

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1eb4a: 	goto loc_1eb4a;
        case m2c::kloc_1eb6a: 	goto loc_1eb6a;
        case m2c::kloc_1eb84: 	goto loc_1eb84;
        case m2c::ksub_1eb15: 	goto sub_1eb15;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1eba2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1eba2:
    _begin:
#undef arg_0
#define arg_0 4
	// 37672 arg_0           = dword ptr  4 ;~ 0848:0BD2
#undef arg_4
#define arg_4 8
	// 37673 arg_4           = dword ptr  8 ;~ 0848:0BD2
cs=0x848;eip=0x000bd2; 	X(PUSH(bp));	// 37675                  push    bp ;~ 0848:0BD2
cs=0x848;eip=0x000bd3; 	T(bp = sp;);	// 37676                  mov     bp, sp ;~ 0848:0BD3
cs=0x848;eip=0x000bd5; 	X(PUSH(di));	// 37677                  push    di ;~ 0848:0BD5
cs=0x848;eip=0x000bd6; 	X(PUSH(si));	// 37678                  push    si ;~ 0848:0BD6
cs=0x848;eip=0x000bd7; 	T(XCHG(ax, cx));	// 37679                  xchg    ax, cx ;~ 0848:0BD7
cs=0x848;eip=0x000bd8; 	J(JCXZ(loc_1ebc3));	// 37680                  jcxz    short loc_1EBC3 ;~ 0848:0BD8
cs=0x848;eip=0x000bda; 	X(PUSH(ds));	// 37681                  push    ds ;~ 0848:0BDA
cs=0x848;eip=0x000bdb; 	T(CLD);	// 37682                  cld ;~ 0848:0BDB
cs=0x848;eip=0x000bdc; 	T(LDS(si, *(dd*)(raddr(ss,bp+arg_0))));	// 37683                  lds     si, [bp+arg_0] ;~ 0848:0BDC
cs=0x848;eip=0x000bdf; 	T(LES(di, *(dd*)(raddr(ss,bp+arg_4))));	// 37685                  les     di, [bp+arg_4] ;~ 0848:0BDF
cs=0x848;eip=0x000be2; 	T(TEST(di, 1));	// 37686                  test    di, 1 ;~ 0848:0BE2
cs=0x848;eip=0x000be6; 	J(JZ(loc_1ebba));	// 37687                  jz      short loc_1EBBA ;~ 0848:0BE6
cs=0x848;eip=0x000be8; 	X(MOVSB);	// 37688                  movsb ;~ 0848:0BE8
cs=0x848;eip=0x000be9; 	T(DEC(cx));	// 37689                  dec     cx ;~ 0848:0BE9
loc_1ebba:
	// 6527 
cs=0x848;eip=0x000bea; 	T(SHR(cx, 1));	// 37692                  shr     cx, 1 ;~ 0848:0BEA
	// 37693                  rep movsw ;~ 0848:0BEC
cs=0x848;eip=0x000bec; 	X(	REP MOVSW);	// 37693                  rep movsw ;~ 0848:0BEC
cs=0x848;eip=0x000bee; 	T(RCL(cx, 1));	// 37694                  rcl     cx, 1 ;~ 0848:0BEE
	// 37695                  rep movsb ;~ 0848:0BF0
cs=0x848;eip=0x000bf0; 	X(	REP MOVSB);	// 37695                  rep movsb ;~ 0848:0BF0
cs=0x848;eip=0x000bf2; 	X(POP(ds));	// 37696                  pop     ds ;~ 0848:0BF2
loc_1ebc3:
	// 6528 
cs=0x848;eip=0x000bf3; 	X(POP(si));	// 37700                  pop     si ;~ 0848:0BF3
cs=0x848;eip=0x000bf4; 	X(POP(di));	// 37701                  pop     di ;~ 0848:0BF4
cs=0x848;eip=0x000bf5; 	X(POP(bp));	// 37702                  pop     bp ;~ 0848:0BF5
cs=0x848;eip=0x000bf6; 	J(RETN(8));	// 37703                  retn    8 ;~ 0848:0BF6

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1ebba: 	goto loc_1ebba;
        case m2c::kloc_1ebc3: 	goto loc_1ebc3;
        case m2c::ksub_1eba2: 	goto sub_1eba2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1ebca(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1ebca:
    _begin:
#undef arg_0
#define arg_0 4
	// 37716 arg_0           = dword ptr  4 ;~ 0848:0BFA
cs=0x848;eip=0x000bfa; 	X(PUSH(bp));	// 37718                  push    bp ;~ 0848:0BFA
cs=0x848;eip=0x000bfb; 	T(bp = sp;);	// 37719                  mov     bp, sp ;~ 0848:0BFB
cs=0x848;eip=0x000bfd; 	X(PUSH(di));	// 37720                  push    di ;~ 0848:0BFD
cs=0x848;eip=0x000bfe; 	T(XCHG(cx, dx));	// 37721                  xchg    cx, dx ;~ 0848:0BFE
cs=0x848;eip=0x000c00; 	J(JCXZ(loc_1ebe7));	// 37722                  jcxz    short loc_1EBE7 ;~ 0848:0C00
cs=0x848;eip=0x000c02; 	T(LES(di, *(dd*)(raddr(ss,bp+arg_0))));	// 37723                  les     di, [bp+arg_0] ;~ 0848:0C02
cs=0x848;eip=0x000c05; 	T(ah = al;);	// 37725                  mov     ah, al ;~ 0848:0C05
cs=0x848;eip=0x000c07; 	T(TEST(di, 1));	// 37726                  test    di, 1 ;~ 0848:0C07
cs=0x848;eip=0x000c0b; 	J(JZ(loc_1ebdf));	// 37727                  jz      short loc_1EBDF ;~ 0848:0C0B
cs=0x848;eip=0x000c0d; 	X(STOSB);	// 37728                  stosb ;~ 0848:0C0D
cs=0x848;eip=0x000c0e; 	T(DEC(cx));	// 37729                  dec     cx ;~ 0848:0C0E
loc_1ebdf:
	// 6529 
cs=0x848;eip=0x000c0f; 	T(SHR(cx, 1));	// 37732                  shr     cx, 1 ;~ 0848:0C0F
	// 37733                  rep stosw ;~ 0848:0C11
cs=0x848;eip=0x000c11; 	X(	REP STOSW);	// 37733                  rep stosw ;~ 0848:0C11
cs=0x848;eip=0x000c13; 	T(SHL(cx, 1));	// 37734                  shl     cx, 1 ;~ 0848:0C13
	// 37735                  rep stosb ;~ 0848:0C15
cs=0x848;eip=0x000c15; 	X(	REP STOSB);	// 37735                  rep stosb ;~ 0848:0C15
loc_1ebe7:
	// 6530 
cs=0x848;eip=0x000c17; 	X(POP(di));	// 37738                  pop     di ;~ 0848:0C17
cs=0x848;eip=0x000c18; 	X(POP(bp));	// 37739                  pop     bp ;~ 0848:0C18
cs=0x848;eip=0x000c19; 	J(RETN(4));	// 37740                  retn    4 ;~ 0848:0C19

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1ebdf: 	goto loc_1ebdf;
        case m2c::kloc_1ebe7: 	goto loc_1ebe7;
        case m2c::ksub_1ebca: 	goto sub_1ebca;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1ebed(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1ebed:
    _begin:
#undef var_4
#define var_4 -4
	// 37752 var_4           = word ptr -4 ;~ 0848:0C1D
#undef var_2
#define var_2 -2
	// 37753 var_2           = byte ptr -2 ;~ 0848:0C1D
#undef var_1
#define var_1 -1
	// 37754 var_1           = byte ptr -1 ;~ 0848:0C1D
cs=0x848;eip=0x000c1d; 	X(PUSH(bp));	// 37756                  push    bp ;~ 0848:0C1D
cs=0x848;eip=0x000c1e; 	T(bp = sp;);	// 37757                  mov     bp, sp ;~ 0848:0C1E
cs=0x848;eip=0x000c20; 	T(SUB(sp, 4));	// 37758                  sub     sp, 4 ;~ 0848:0C20
cs=0x848;eip=0x000c23; 	X(PUSH(si));	// 37759                  push    si ;~ 0848:0C23
cs=0x848;eip=0x000c24; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0x800));	// 37760                  mov     [bp+var_4], 800h ;~ 0848:0C24
cs=0x848;eip=0x000c29; 	X(PUSH(si));	// 37761                  push    si ;~ 0848:0C29
cs=0x848;eip=0x000c2a; 	X(PUSH(di));	// 37762                  push    di ;~ 0848:0C2A
cs=0x848;eip=0x000c2b; 	T(ax = *(dw*)(&byte_6b85c););	// 37763                  mov     ax, word ptr byte_6B85C ;~ 0848:0C2B
cs=0x848;eip=0x000c2e; 	T(ADD(ax, 0x1BAA));	// 37764                  add     ax, 1BAAh ;~ 0848:0C2E
cs=0x848;eip=0x000c31; 	X(PUSH(*(dw*)(&byte_6b85e)));	// 37765                  push    word ptr byte_6B85E ;~ 0848:0C31
cs=0x848;eip=0x000c35; 	X(PUSH(ax));	// 37766                  push    ax ;~ 0848:0C35
cs=0x848;eip=0x000c36; 	T(ax = bp+var_4);	// 37767                  lea     ax, [bp+var_4] ;~ 0848:0C36
cs=0x848;eip=0x000c39; 	X(PUSH(ss));	// 37768                  push    ss ;~ 0848:0C39
cs=0x848;eip=0x000c3a; 	X(PUSH(ax));	// 37769                  push    ax ;~ 0848:0C3A
cs=0x848;eip=0x000c3b; 	T(LES(bx, *(dd*)(&byte_6b85c)));	// 37770                  les     bx, dword ptr byte_6B85C ;~ 0848:0C3B
cs=0x848;eip=0x000c3f; 	J(CALLF(__dispatch_call,*(dd*)(raddr(es,bx+0x9A4))));	// 37771                  call    dword ptr es:[bx+9A4h] ;~ 0848:0C3F
cs=0x848;eip=0x000c44; 	X(POP(di));	// 37772                  pop     di ;~ 0848:0C44
cs=0x848;eip=0x000c45; 	X(POP(si));	// 37773                  pop     si ;~ 0848:0C45
cs=0x848;eip=0x000c46; 	T(LES(bx, *(dd*)(&byte_6b85c)));	// 37774                  les     bx, dword ptr byte_6B85C ;~ 0848:0C46
cs=0x848;eip=0x000c4a; 	T(ADD(bx, *(dw*)(raddr(es,bx+2))));	// 37775                  add     bx, es:[bx+2] ;~ 0848:0C4A
cs=0x848;eip=0x000c4e; 	T(MOV(al, *(raddr(es,bx+0x1BAA))));	// 37776                  mov     al, es:[bx+1BAAh] ;~ 0848:0C4E
cs=0x848;eip=0x000c53; 	X(MOV(*(raddr(ss,bp+var_1)), al));	// 37777                  mov     [bp+var_1], al ;~ 0848:0C53
cs=0x848;eip=0x000c56; 	T(bx = *(dw*)(&byte_6b85c););	// 37778                  mov     bx, word ptr byte_6B85C ;~ 0848:0C56
cs=0x848;eip=0x000c5a; 	T(MOV(al, *(raddr(es,bx+0x23AA))));	// 37779                  mov     al, es:[bx+23AAh] ;~ 0848:0C5A
cs=0x848;eip=0x000c5f; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 37780                  mov     [bp+var_2], al ;~ 0848:0C5F
cs=0x848;eip=0x000c62; 	X(SUB(*(dw*)(raddr(es,bx+2)), 0x800));	// 37781                  sub     word ptr es:[bx+2], 800h ;~ 0848:0C62
cs=0x848;eip=0x000c68; 	T(ax = bx+0x1BAA);	// 37782                  lea     ax, [bx+1BAAh] ;~ 0848:0C68
cs=0x848;eip=0x000c6c; 	X(PUSH(es));	// 37783                  push    es ;~ 0848:0C6C
cs=0x848;eip=0x000c6d; 	X(PUSH(ax));	// 37784                  push    ax ;~ 0848:0C6D
cs=0x848;eip=0x000c6e; 	T(SUB(ax, ax));	// 37785                  sub     ax, ax ;~ 0848:0C6E
cs=0x848;eip=0x000c70; 	T(dx = 0x802;);	// 37786                  mov     dx, 802h ;~ 0848:0C70
cs=0x848;eip=0x000c73; 	J(CALL(sub_1ebca,0));	// 37787                  call    sub_1EBCA ;~ 0848:0C73
cs=0x848;eip=0x000c76; 	T(LES(bx, *(dd*)(&byte_6b85c)));	// 37788                  les     bx, dword ptr byte_6B85C ;~ 0848:0C76
cs=0x848;eip=0x000c7a; 	T(CMP(*(dw*)(raddr(es,bx+2)), 0));	// 37789                  cmp     word ptr es:[bx+2], 0 ;~ 0848:0C7A
cs=0x848;eip=0x000c7f; 	J(JNZ(loc_1ec56));	// 37790                  jnz     short loc_1EC56 ;~ 0848:0C7F
cs=0x848;eip=0x000c81; 	T(si = bx;);	// 37791                  mov     si, bx ;~ 0848:0C81
cs=0x848;eip=0x000c83; 	J(JMP(loc_1ec60));	// 37792                  jmp     short loc_1EC60 ;~ 0848:0C83
loc_1ec56:
	// 6531 
cs=0x848;eip=0x000c86; 	T(si = bx;);	// 37798                  mov     si, bx ;~ 0848:0C86
cs=0x848;eip=0x000c88; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 37799                  mov     al, [bp+var_2] ;~ 0848:0C88
cs=0x848;eip=0x000c8b; 	X(MOV(*(raddr(es,si+0x1BAA)), al));	// 37800                  mov     es:[si+1BAAh], al ;~ 0848:0C8B
loc_1ec60:
	// 6532 
cs=0x848;eip=0x000c90; 	T(CMP(*(dw*)(raddr(es,si+4)), 0));	// 37803                  cmp     word ptr es:[si+4], 0 ;~ 0848:0C90
cs=0x848;eip=0x000c95; 	J(JZ(loc_1ec75));	// 37804                  jz      short loc_1EC75 ;~ 0848:0C95
cs=0x848;eip=0x000c97; 	T(MOV(bx, *(dw*)(raddr(es,si+2))));	// 37805                  mov     bx, es:[si+2] ;~ 0848:0C97
cs=0x848;eip=0x000c9b; 	T(ADD(bx, si));	// 37806                  add     bx, si ;~ 0848:0C9B
cs=0x848;eip=0x000c9d; 	T(MOV(al, *(raddr(ss,bp+var_1))));	// 37807                  mov     al, [bp+var_1] ;~ 0848:0C9D
cs=0x848;eip=0x000ca0; 	X(MOV(*(raddr(es,bx+0x1BAA)), al));	// 37808                  mov     es:[bx+1BAAh], al ;~ 0848:0CA0
loc_1ec75:
	// 6533 
cs=0x848;eip=0x000ca5; 	X(POP(si));	// 37811                  pop     si ;~ 0848:0CA5
cs=0x848;eip=0x000ca6; 	T(sp = bp;);	// 37812                  mov     sp, bp ;~ 0848:0CA6
cs=0x848;eip=0x000ca8; 	X(POP(bp));	// 37813                  pop     bp ;~ 0848:0CA8
cs=0x848;eip=0x000ca9; 	J(RETN(0));	// 37814                  retn ;~ 0848:0CA9

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1ec56: 	goto loc_1ec56;
        case m2c::kloc_1ec60: 	goto loc_1ec60;
        case m2c::kloc_1ec75: 	goto loc_1ec75;
        case m2c::ksub_1ebed: 	goto sub_1ebed;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group33(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group33:
    _begin:
seg001_caa_proc:
	// 37818 
cs=0x848;eip=0x000caa; 	X(PUSH(bp));	// 37818                  push    bp ;~ 0848:0CAA
cs=0x848;eip=0x000cab; 	T(bp = sp;);	// 37819                  mov     bp, sp ;~ 0848:0CAB
cs=0x848;eip=0x000cad; 	X(PUSH(si));	// 37820                  push    si ;~ 0848:0CAD
cs=0x848;eip=0x000cae; 	X(PUSH(di));	// 37821                  push    di ;~ 0848:0CAE
cs=0x848;eip=0x000caf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 37822                  mov     ax, [bp+0Ah] ;~ 0848:0CAF
cs=0x848;eip=0x000cb2; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x0C))));	// 37823                  mov     dx, [bp+0Ch] ;~ 0848:0CB2
cs=0x848;eip=0x000cb5; 	T(LES(si, *(dw*)(raddr(ss,bp+6))));	// 37824                  les     si, [bp+6] ;~ 0848:0CB5
cs=0x848;eip=0x000cb8; 	T(di = es;);	// 37826                  mov     di, es ;~ 0848:0CB8
cs=0x848;eip=0x000cba; 	X(*(dw*)(&dword_6b860) = si;);	// 37827                  mov     word ptr dword_6B860, si ;~ 0848:0CBA
cs=0x848;eip=0x000cbe; 	X(*(dw*)(((db*)&dword_6b860)+2) = es;);	// 37828                  mov     word ptr dword_6B860+2, es ;~ 0848:0CBE
cs=0x848;eip=0x000cc2; 	X(MOV(*(dw*)(raddr(es,si+0x16)), ax));	// 37829                  mov     es:[si+16h], ax ;~ 0848:0CC2
cs=0x848;eip=0x000cc6; 	X(MOV(*(dw*)(raddr(es,si+0x18)), dx));	// 37830                  mov     es:[si+18h], dx ;~ 0848:0CC6
cs=0x848;eip=0x000cca; 	X(MOV(*(dw*)(raddr(es,si+0x0E)), 0x800));	// 37831                  mov     word ptr es:[si+0Eh], 800h ;~ 0848:0CCA
cs=0x848;eip=0x000cd0; 	X(PUSH(si));	// 37832                  push    si ;~ 0848:0CD0
cs=0x848;eip=0x000cd1; 	X(PUSH(di));	// 37833                  push    di ;~ 0848:0CD1
cs=0x848;eip=0x000cd2; 	T(ax = si+0x221E);	// 37834                  lea     ax, [si+221Eh] ;~ 0848:0CD2
cs=0x848;eip=0x000cd6; 	X(PUSH(es));	// 37835                  push    es ;~ 0848:0CD6
cs=0x848;eip=0x000cd7; 	X(PUSH(ax));	// 37836                  push    ax ;~ 0848:0CD7
cs=0x848;eip=0x000cd8; 	T(ax = si+0x0E);	// 37837                  lea     ax, [si+0Eh] ;~ 0848:0CD8
cs=0x848;eip=0x000cdb; 	X(PUSH(es));	// 37838                  push    es ;~ 0848:0CDB
cs=0x848;eip=0x000cdc; 	X(PUSH(ax));	// 37839                  push    ax ;~ 0848:0CDC
cs=0x848;eip=0x000cdd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0E))));	// 37840                  mov     ax, [bp+0Eh] ;~ 0848:0CDD
cs=0x848;eip=0x000ce0; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x10))));	// 37841                  mov     dx, [bp+10h] ;~ 0848:0CE0
cs=0x848;eip=0x000ce3; 	X(MOV(*(dw*)(raddr(es,si+0x12)), ax));	// 37842                  mov     es:[si+12h], ax ;~ 0848:0CE3
cs=0x848;eip=0x000ce7; 	X(MOV(*(dw*)(raddr(es,si+0x14)), dx));	// 37843                  mov     es:[si+14h], dx ;~ 0848:0CE7
cs=0x848;eip=0x000ceb; 	J(CALLF(__dispatch_call,*(dd*)(raddr(es,si+0x12))));	// 37844                  call    dword ptr es:[si+12h] ;~ 0848:0CEB
cs=0x848;eip=0x000cef; 	X(POP(di));	// 37845                  pop     di ;~ 0848:0CEF
cs=0x848;eip=0x000cf0; 	X(POP(si));	// 37846                  pop     si ;~ 0848:0CF0
cs=0x848;eip=0x000cf1; 	T(es = di;);	// 37847                  mov     es, di ;~ 0848:0CF1
cs=0x848;eip=0x000cf3; 	X(MOV(*(dw*)(raddr(es,si+0x10)), ax));	// 37848                  mov     es:[si+10h], ax ;~ 0848:0CF3
cs=0x848;eip=0x000cf7; 	T(CMP(ax, 4));	// 37849                  cmp     ax, 4 ;~ 0848:0CF7
cs=0x848;eip=0x000cfa; 	J(JA(loc_1ece0));	// 37850                  ja      short loc_1ECE0 ;~ 0848:0CFA
cs=0x848;eip=0x000cfc; 	T(ax = 3;);	// 37851                  mov     ax, 3 ;~ 0848:0CFC
cs=0x848;eip=0x000cff; 	J(JMP(loc_1edc6));	// 37852                  jmp     loc_1EDC6 ;~ 0848:0CFF
seg001_d10_proc:
	// 37872 
loc_1ece0:
	// 6534 
cs=0x848;eip=0x000d10; 	T(MOV(al, *(raddr(es,si+0x221E))));	// 37873                  mov     al, es:[si+221Eh] ;~ 0848:0D10
cs=0x848;eip=0x000d15; 	T(SUB(ah, ah));	// 37874                  sub     ah, ah ;~ 0848:0D15
cs=0x848;eip=0x000d17; 	X(MOV(*(dw*)(raddr(es,si+2)), ax));	// 37875                  mov     es:[si+2], ax ;~ 0848:0D17
cs=0x848;eip=0x000d1b; 	T(MOV(al, *(raddr(es,si+0x2220))));	// 37876                  mov     al, es:[si+2220h] ;~ 0848:0D1B
cs=0x848;eip=0x000d20; 	X(MOV(*(dw*)(raddr(es,si+0x0A)), ax));	// 37877                  mov     es:[si+0Ah], ax ;~ 0848:0D20
cs=0x848;eip=0x000d24; 	T(MOV(al, *(raddr(es,si+0x221F))));	// 37878                  mov     al, es:[si+221Fh] ;~ 0848:0D24
cs=0x848;eip=0x000d29; 	X(MOV(*(dw*)(raddr(es,si+6)), ax));	// 37879                  mov     es:[si+6], ax ;~ 0848:0D29
cs=0x848;eip=0x000d2d; 	X(MOV(*(dw*)(raddr(es,si+0x0C)), 0));	// 37880                  mov     word ptr es:[si+0Ch], 0 ;~ 0848:0D2D
cs=0x848;eip=0x000d33; 	X(MOV(*(dw*)(raddr(es,si+0x0E)), 3));	// 37881                  mov     word ptr es:[si+0Eh], 3 ;~ 0848:0D33
cs=0x848;eip=0x000d39; 	T(CMP(ax, 4));	// 37882                  cmp     ax, 4 ;~ 0848:0D39
cs=0x848;eip=0x000d3c; 	J(JNC(loc_1ed11));	// 37883                  jnb     short loc_1ED11 ;~ 0848:0D3C
cs=0x848;eip=0x000d3e; 	J(JMP(loc_1edc3));	// 37884                  jmp     loc_1EDC3 ;~ 0848:0D3E
loc_1ed11:
	// 6535 
cs=0x848;eip=0x000d41; 	T(CMP(ax, 6));	// 37888                  cmp     ax, 6 ;~ 0848:0D41
cs=0x848;eip=0x000d44; 	J(JBE(loc_1ed19));	// 37889                  jbe     short loc_1ED19 ;~ 0848:0D44
cs=0x848;eip=0x000d46; 	J(JMP(loc_1edc3));	// 37890                  jmp     loc_1EDC3 ;~ 0848:0D46
loc_1ed19:
	// 6536 
cs=0x848;eip=0x000d49; 	T(cl = 0x10;);	// 37894                  mov     cl, 10h ;~ 0848:0D49
cs=0x848;eip=0x000d4b; 	T(SUB(cl, al));	// 37895                  sub     cl, al ;~ 0848:0D4B
cs=0x848;eip=0x000d4d; 	T(ax = 0x0FFFF;);	// 37896                  mov     ax, 0FFFFh ;~ 0848:0D4D
cs=0x848;eip=0x000d50; 	T(SHR(ax, cl));	// 37897                  shr     ax, cl ;~ 0848:0D50
cs=0x848;eip=0x000d52; 	X(MOV(*(dw*)(raddr(es,si+8)), ax));	// 37898                  mov     es:[si+8], ax ;~ 0848:0D52
cs=0x848;eip=0x000d56; 	T(MOV(ax, *(dw*)(raddr(es,si+2))));	// 37899                  mov     ax, es:[si+2] ;~ 0848:0D56
cs=0x848;eip=0x000d5a; 	T(OR(ax, ax));	// 37900                  or      ax, ax ;~ 0848:0D5A
cs=0x848;eip=0x000d5c; 	J(JZ(loc_1ed4b));	// 37901                  jz      short loc_1ED4B ;~ 0848:0D5C
cs=0x848;eip=0x000d5e; 	T(DEC(ax));	// 37902                  dec     ax ;~ 0848:0D5E
cs=0x848;eip=0x000d5f; 	J(JZ(loc_1ed37));	// 37903                  jz      short loc_1ED37 ;~ 0848:0D5F
cs=0x848;eip=0x000d61; 	T(ax = 2;);	// 37904                  mov     ax, 2 ;~ 0848:0D61
cs=0x848;eip=0x000d64; 	J(JMP(loc_1edc6));	// 37905                  jmp     loc_1EDC6 ;~ 0848:0D64
loc_1ed37:
	// 6537 
cs=0x848;eip=0x000d67; 	T(ax = si+0x2F9E);	// 37909                  lea     ax, [si+2F9Eh] ;~ 0848:0D67
cs=0x848;eip=0x000d6b; 	X(PUSH(es));	// 37910                  push    es ;~ 0848:0D6B
cs=0x848;eip=0x000d6c; 	X(PUSH(ax));	// 37911                  push    ax ;~ 0848:0D6C
cs=0x848;eip=0x000d6d; 	T(ax = 0x15A;);	// 37912                  mov     ax, 15Ah ;~ 0848:0D6D
cs=0x848;eip=0x000d70; 	X(PUSH(cs));	// 37913                  push    cs ;~ 0848:0D70
cs=0x848;eip=0x000d71; 	X(PUSH(ax));	// 37914                  push    ax ;~ 0848:0D71
cs=0x848;eip=0x000d72; 	T(ax = 0x100;);	// 37915                  mov     ax, 100h ;~ 0848:0D72
cs=0x848;eip=0x000d75; 	J(CALL(sub_1eba2,0));	// 37916                  call    sub_1EBA2 ;~ 0848:0D75
cs=0x848;eip=0x000d78; 	J(CALL(sub_1f0f7,0));	// 37917                  call    sub_1F0F7 ;~ 0848:0D78
loc_1ed4b:
	// 6538 
cs=0x848;eip=0x000d7b; 	X(PUSH(di));	// 37920                  push    di ;~ 0848:0D7B
cs=0x848;eip=0x000d7c; 	T(ax = si+0x30DE);	// 37921                  lea     ax, [si+30DEh] ;~ 0848:0D7C
cs=0x848;eip=0x000d80; 	X(PUSH(ax));	// 37922                  push    ax ;~ 0848:0D80
cs=0x848;eip=0x000d81; 	T(ax = 0x13A;);	// 37923                  mov     ax, 13Ah ;~ 0848:0D81
cs=0x848;eip=0x000d84; 	X(PUSH(cs));	// 37924                  push    cs ;~ 0848:0D84
cs=0x848;eip=0x000d85; 	X(PUSH(ax));	// 37925                  push    ax ;~ 0848:0D85
cs=0x848;eip=0x000d86; 	T(ax = 0x10;);	// 37926                  mov     ax, 10h ;~ 0848:0D86
cs=0x848;eip=0x000d89; 	J(CALL(sub_1eba2,0));	// 37927                  call    sub_1EBA2 ;~ 0848:0D89
cs=0x848;eip=0x000d8c; 	T(bx = si+0x30DE);	// 37928                  lea     bx, [si+30DEh] ;~ 0848:0D8C
cs=0x848;eip=0x000d90; 	T(cx = 0x14A;);	// 37929                  mov     cx, 14Ah ;~ 0848:0D90
cs=0x848;eip=0x000d93; 	T(dx = si+0x2B1E);	// 37930                  lea     dx, [si+2B1Eh] ;~ 0848:0D93
cs=0x848;eip=0x000d97; 	T(ax = 0x10;);	// 37931                  mov     ax, 10h ;~ 0848:0D97
cs=0x848;eip=0x000d9a; 	J(CALL(sub_1f0c1,0));	// 37932                  call    sub_1F0C1 ;~ 0848:0D9A
cs=0x848;eip=0x000d9d; 	X(PUSH(di));	// 37933                  push    di ;~ 0848:0D9D
cs=0x848;eip=0x000d9e; 	T(ax = si+0x30EE);	// 37934                  lea     ax, [si+30EEh] ;~ 0848:0D9E
cs=0x848;eip=0x000da2; 	X(PUSH(ax));	// 37935                  push    ax ;~ 0848:0DA2
cs=0x848;eip=0x000da3; 	T(ax = 0x10A;);	// 37936                  mov     ax, 10Ah ;~ 0848:0DA3
cs=0x848;eip=0x000da6; 	X(PUSH(cs));	// 37937                  push    cs ;~ 0848:0DA6
cs=0x848;eip=0x000da7; 	X(PUSH(ax));	// 37938                  push    ax ;~ 0848:0DA7
cs=0x848;eip=0x000da8; 	T(ax = 0x10;);	// 37939                  mov     ax, 10h ;~ 0848:0DA8
cs=0x848;eip=0x000dab; 	J(CALL(sub_1eba2,0));	// 37940                  call    sub_1EBA2 ;~ 0848:0DAB
cs=0x848;eip=0x000dae; 	X(PUSH(di));	// 37941                  push    di ;~ 0848:0DAE
cs=0x848;eip=0x000daf; 	T(ax = si+0x30FE);	// 37942                  lea     ax, [si+30FEh] ;~ 0848:0DAF
cs=0x848;eip=0x000db3; 	X(PUSH(ax));	// 37943                  push    ax ;~ 0848:0DB3
cs=0x848;eip=0x000db4; 	T(ax = 0x11A;);	// 37944                  mov     ax, 11Ah ;~ 0848:0DB4
cs=0x848;eip=0x000db7; 	X(PUSH(cs));	// 37945                  push    cs ;~ 0848:0DB7
cs=0x848;eip=0x000db8; 	X(PUSH(ax));	// 37946                  push    ax ;~ 0848:0DB8
cs=0x848;eip=0x000db9; 	T(ax = 0x20;);	// 37947                  mov     ax, 20h ; ' ' ;~ 0848:0DB9
cs=0x848;eip=0x000dbc; 	J(CALL(sub_1eba2,0));	// 37948                  call    sub_1EBA2 ;~ 0848:0DBC
cs=0x848;eip=0x000dbf; 	X(PUSH(di));	// 37949                  push    di ;~ 0848:0DBF
cs=0x848;eip=0x000dc0; 	T(ax = si+0x309E);	// 37950                  lea     ax, [si+309Eh] ;~ 0848:0DC0
cs=0x848;eip=0x000dc4; 	X(PUSH(ax));	// 37951                  push    ax ;~ 0848:0DC4
cs=0x848;eip=0x000dc5; 	T(ax = 0x8A;);	// 37952                  mov     ax, 8Ah ;~ 0848:0DC5
cs=0x848;eip=0x000dc8; 	X(PUSH(cs));	// 37953                  push    cs ;~ 0848:0DC8
cs=0x848;eip=0x000dc9; 	X(PUSH(ax));	// 37954                  push    ax ;~ 0848:0DC9
cs=0x848;eip=0x000dca; 	T(ax = 0x40;);	// 37955                  mov     ax, 40h ; '@' ;~ 0848:0DCA
cs=0x848;eip=0x000dcd; 	J(CALL(sub_1eba2,0));	// 37956                  call    sub_1EBA2 ;~ 0848:0DCD
cs=0x848;eip=0x000dd0; 	T(bx = si+0x309E);	// 37957                  lea     bx, [si+309Eh] ;~ 0848:0DD0
cs=0x848;eip=0x000dd4; 	T(cx = 0x0CA;);	// 37958                  mov     cx, 0CAh ;~ 0848:0DD4
cs=0x848;eip=0x000dd7; 	T(dx = si+0x2A1E);	// 37959                  lea     dx, [si+2A1Eh] ;~ 0848:0DD7
cs=0x848;eip=0x000ddb; 	T(ax = 0x40;);	// 37960                  mov     ax, 40h ; '@' ;~ 0848:0DDB
cs=0x848;eip=0x000dde; 	J(CALL(sub_1f0c1,0));	// 37961                  call    sub_1F0C1 ;~ 0848:0DDE
cs=0x848;eip=0x000de1; 	J(CALL(sub_1edcd,0));	// 37962                  call    sub_1EDCD ;~ 0848:0DE1
cs=0x848;eip=0x000de4; 	T(CMP(ax, 0x306));	// 37964                  cmp     ax, 306h ;~ 0848:0DE4
cs=0x848;eip=0x000de7; 	J(JNZ(loc_1edbf));	// 37965                  jnz     short loc_1EDBF ;~ 0848:0DE7
cs=0x848;eip=0x000de9; 	T(ax = 4;);	// 37966                  mov     ax, 4 ;~ 0848:0DE9
cs=0x848;eip=0x000dec; 	J(JMP(loc_1edc6));	// 37967                  jmp     short loc_1EDC6 ;~ 0848:0DEC
loc_1edbf:
	// 6539 
cs=0x848;eip=0x000def; 	T(SUB(ax, ax));	// 37973                  sub     ax, ax ;~ 0848:0DEF
cs=0x848;eip=0x000df1; 	J(JMP(loc_1edc6));	// 37974                  jmp     short loc_1EDC6 ;~ 0848:0DF1
loc_1edc3:
	// 6540 
cs=0x848;eip=0x000df3; 	T(ax = 1;);	// 37979                  mov     ax, 1 ;~ 0848:0DF3
loc_1edc6:
	// 6541 
cs=0x848;eip=0x000df6; 	X(POP(di));	// 37983                  pop     di ;~ 0848:0DF6
cs=0x848;eip=0x000df7; 	X(POP(si));	// 37984                  pop     si ;~ 0848:0DF7
cs=0x848;eip=0x000df8; 	X(POP(bp));	// 37985                  pop     bp ;~ 0848:0DF8
cs=0x848;eip=0x000df9; 	J(RETF(0x0C));	// 37986                  retf    0Ch ;~ 0848:0DF9

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1ece0: 	goto loc_1ece0;
        case m2c::kloc_1ed11: 	goto loc_1ed11;
        case m2c::kloc_1ed19: 	goto loc_1ed19;
        case m2c::kloc_1ed37: 	goto loc_1ed37;
        case m2c::kloc_1ed4b: 	goto loc_1ed4b;
        case m2c::kloc_1edbf: 	goto loc_1edbf;
        case m2c::kloc_1edc3: 	goto loc_1edc3;
        case m2c::kloc_1edc6: 	goto loc_1edc6;
        case m2c::kseg001_caa_proc: 	goto seg001_caa_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1ecd3(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1ecd3:
    _begin:
cs=0x848;eip=0x000d03; 	T(ax = seg_offset(seg001););	// 37860                  mov     ax, seg seg001 ;~ 0848:0D03
cs=0x848;eip=0x000d06; 	X(PUSH(ax));	// 37861                  push    ax ;~ 0848:0D06
cs=0x848;eip=0x000d07; 	T(ax = 0x0CAA;);	// 37862                  mov     ax, 0CAAh ;~ 0848:0D07
cs=0x848;eip=0x000d0a; 	X(PUSH(ax));	// 37863                  push    ax ;~ 0848:0D0A
cs=0x848;eip=0x000d0b; 	J(CALL(sub_1e052,0));	// 37864                  call    sub_1E052 ;~ 0848:0D0B
cs=0x848;eip=0x000d0e; 	J(RETF(0));	// 37865                  retf ;~ 0848:0D0E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_1ecd3: 	goto sub_1ecd3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1edcd(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1edcd:
    _begin:
#undef var_2
#define var_2 -2
	// 37997 var_2           = word ptr -2 ;~ 0848:0DFD
cs=0x848;eip=0x000dfd; 	X(PUSH(bp));	// 37999                  push    bp ;~ 0848:0DFD
cs=0x848;eip=0x000dfe; 	T(bp = sp;);	// 38000                  mov     bp, sp ;~ 0848:0DFE
cs=0x848;eip=0x000e00; 	T(SUB(sp, 2));	// 38001                  sub     sp, 2 ;~ 0848:0E00
cs=0x848;eip=0x000e03; 	X(PUSH(si));	// 38002                  push    si ;~ 0848:0E03
cs=0x848;eip=0x000e04; 	X(PUSH(di));	// 38003                  push    di ;~ 0848:0E04
cs=0x848;eip=0x000e05; 	T(LES(si, dword_6b860));	// 38004                  les     si, dword_6B860 ;~ 0848:0E05
cs=0x848;eip=0x000e09; 	X(MOV(*(dw*)(raddr(es,si+4)), 0x1000));	// 38005                  mov     word ptr es:[si+4], 1000h ;~ 0848:0E09
loc_1eddf:
	// 6542 
cs=0x848;eip=0x000e0f; 	X(PUSH(es));	// 38009                  push    es ;~ 0848:0E0F
cs=0x848;eip=0x000e10; 	J(CALL(sub_1ee98,0));	// 38010                  call    sub_1EE98 ;~ 0848:0E10
cs=0x848;eip=0x000e13; 	X(POP(es));	// 38011                  pop     es ;~ 0848:0E13
cs=0x848;eip=0x000e14; 	T(CMP(ax, 0x305));	// 38012                  cmp     ax, 305h ;~ 0848:0E14
cs=0x848;eip=0x000e17; 	J(JC(loc_1edec));	// 38013                  jb      short loc_1EDEC ;~ 0848:0E17
cs=0x848;eip=0x000e19; 	J(JMP(loc_1ee75));	// 38014                  jmp     loc_1EE75 ;~ 0848:0E19
loc_1edec:
	// 6543 
cs=0x848;eip=0x000e1c; 	T(CMP(ax, 0x100));	// 38018                  cmp     ax, 100h ;~ 0848:0E1C
cs=0x848;eip=0x000e1f; 	J(JNC(loc_1ee02));	// 38019                  jnb     short loc_1EE02 ;~ 0848:0E1F
cs=0x848;eip=0x000e21; 	T(bx = si+0x1A);	// 38020                  lea     bx, [si+1Ah] ;~ 0848:0E21
cs=0x848;eip=0x000e24; 	T(MOV(di, *(dw*)(raddr(es,si+4))));	// 38021                  mov     di, es:[si+4] ;~ 0848:0E24
cs=0x848;eip=0x000e28; 	X(MOV(*(raddr(es,bx+di)), al));	// 38022                  mov     es:[bx+di], al ;~ 0848:0E28
cs=0x848;eip=0x000e2b; 	T(INC(di));	// 38023                  inc     di ;~ 0848:0E2B
cs=0x848;eip=0x000e2c; 	X(MOV(*(dw*)(raddr(es,si+4)), di));	// 38024                  mov     es:[si+4], di ;~ 0848:0E2C
cs=0x848;eip=0x000e30; 	J(JMP(loc_1ee32));	// 38025                  jmp     short loc_1EE32 ;~ 0848:0E30
loc_1ee02:
	// 6544 
cs=0x848;eip=0x000e32; 	T(SUB(ax, 0x0FE));	// 38029                  sub     ax, 0FEh ;~ 0848:0E32
cs=0x848;eip=0x000e35; 	T(di = ax;);	// 38030                  mov     di, ax ;~ 0848:0E35
cs=0x848;eip=0x000e37; 	X(PUSH(es));	// 38031                  push    es ;~ 0848:0E37
cs=0x848;eip=0x000e38; 	J(CALL(sub_1efd6,0));	// 38032                  call    sub_1EFD6 ;~ 0848:0E38
cs=0x848;eip=0x000e3b; 	X(POP(es));	// 38033                  pop     es ;~ 0848:0E3B
cs=0x848;eip=0x000e3c; 	T(OR(ax, ax));	// 38034                  or      ax, ax ;~ 0848:0E3C
cs=0x848;eip=0x000e3e; 	J(JZ(loc_1ee70));	// 38035                  jz      short loc_1EE70 ;~ 0848:0E3E
cs=0x848;eip=0x000e40; 	T(cx = di;);	// 38036                  mov     cx, di ;~ 0848:0E40
cs=0x848;eip=0x000e42; 	T(bx = si+0x1A);	// 38037                  lea     bx, [si+1Ah] ;~ 0848:0E42
cs=0x848;eip=0x000e45; 	T(MOV(di, *(dw*)(raddr(es,si+4))));	// 38038                  mov     di, es:[si+4] ;~ 0848:0E45
cs=0x848;eip=0x000e49; 	T(ADD(di, bx));	// 38039                  add     di, bx ;~ 0848:0E49
cs=0x848;eip=0x000e4b; 	T(dx = si;);	// 38040                  mov     dx, si ;~ 0848:0E4B
cs=0x848;eip=0x000e4d; 	T(si = di;);	// 38041                  mov     si, di ;~ 0848:0E4D
cs=0x848;eip=0x000e4f; 	T(SUB(si, ax));	// 38042                  sub     si, ax ;~ 0848:0E4F
cs=0x848;eip=0x000e51; 	T(CLD);	// 38043                  cld ;~ 0848:0E51
cs=0x848;eip=0x000e52; 	X(PUSH(ds));	// 38044                  push    ds ;~ 0848:0E52
cs=0x848;eip=0x000e53; 	T(ax = es;);	// 38045                  mov     ax, es ;~ 0848:0E53
cs=0x848;eip=0x000e55; 	T(ds = ax;);	// 38046                  mov     ds, ax ;~ 0848:0E55
	// 38048                  rep movsb ;~ 0848:0E57
cs=0x848;eip=0x000e57; 	X(	REP MOVSB);	// 38048                  rep movsb ;~ 0848:0E57
cs=0x848;eip=0x000e59; 	X(POP(ds));	// 38049                  pop     ds ;~ 0848:0E59
cs=0x848;eip=0x000e5a; 	T(si = dx;);	// 38051                  mov     si, dx ;~ 0848:0E5A
cs=0x848;eip=0x000e5c; 	T(SUB(di, bx));	// 38052                  sub     di, bx ;~ 0848:0E5C
cs=0x848;eip=0x000e5e; 	X(MOV(*(dw*)(raddr(es,si+4)), di));	// 38053                  mov     es:[si+4], di ;~ 0848:0E5E
loc_1ee32:
	// 6545 
cs=0x848;eip=0x000e62; 	T(CMP(di, 0x2000));	// 38056                  cmp     di, 2000h ;~ 0848:0E62
cs=0x848;eip=0x000e66; 	J(JC(loc_1eddf));	// 38057                  jb      short loc_1EDDF ;~ 0848:0E66
cs=0x848;eip=0x000e68; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x1000));	// 38058                  mov     [bp+var_2], 1000h ;~ 0848:0E68
cs=0x848;eip=0x000e6d; 	X(PUSH(si));	// 38059                  push    si ;~ 0848:0E6D
cs=0x848;eip=0x000e6e; 	X(PUSH(di));	// 38060                  push    di ;~ 0848:0E6E
cs=0x848;eip=0x000e6f; 	T(ax = si+0x101A);	// 38061                  lea     ax, [si+101Ah] ;~ 0848:0E6F
cs=0x848;eip=0x000e73; 	X(PUSH(es));	// 38062                  push    es ;~ 0848:0E73
cs=0x848;eip=0x000e74; 	X(PUSH(ax));	// 38063                  push    ax ;~ 0848:0E74
cs=0x848;eip=0x000e75; 	T(ax = bp+var_2);	// 38064                  lea     ax, [bp+var_2] ;~ 0848:0E75
cs=0x848;eip=0x000e78; 	X(PUSH(ss));	// 38065                  push    ss ;~ 0848:0E78
cs=0x848;eip=0x000e79; 	X(PUSH(ax));	// 38066                  push    ax ;~ 0848:0E79
cs=0x848;eip=0x000e7a; 	J(CALLF(__dispatch_call,*(dd*)(raddr(es,si+0x16))));	// 38067                  call    dword ptr es:[si+16h] ;~ 0848:0E7A
cs=0x848;eip=0x000e7e; 	X(POP(di));	// 38068                  pop     di ;~ 0848:0E7E
cs=0x848;eip=0x000e7f; 	X(POP(si));	// 38069                  pop     si ;~ 0848:0E7F
cs=0x848;eip=0x000e80; 	T(es = *(dw*)(((db*)&dword_6b860)+2););	// 38070                  mov     es, word ptr dword_6B860+2 ;~ 0848:0E80
cs=0x848;eip=0x000e84; 	T(ax = si+0x1A);	// 38071                  lea     ax, [si+1Ah] ;~ 0848:0E84
cs=0x848;eip=0x000e87; 	X(PUSH(es));	// 38072                  push    es ;~ 0848:0E87
cs=0x848;eip=0x000e88; 	X(PUSH(ax));	// 38073                  push    ax ;~ 0848:0E88
cs=0x848;eip=0x000e89; 	T(ADD(ax, 0x1000));	// 38074                  add     ax, 1000h ;~ 0848:0E89
cs=0x848;eip=0x000e8c; 	X(PUSH(es));	// 38075                  push    es ;~ 0848:0E8C
cs=0x848;eip=0x000e8d; 	X(PUSH(ax));	// 38076                  push    ax ;~ 0848:0E8D
cs=0x848;eip=0x000e8e; 	T(MOV(ax, *(dw*)(raddr(es,si+4))));	// 38077                  mov     ax, es:[si+4] ;~ 0848:0E8E
cs=0x848;eip=0x000e92; 	T(SUB(ax, 0x1000));	// 38078                  sub     ax, 1000h ;~ 0848:0E92
cs=0x848;eip=0x000e95; 	X(MOV(*(dw*)(raddr(es,si+4)), ax));	// 38079                  mov     es:[si+4], ax ;~ 0848:0E95
cs=0x848;eip=0x000e99; 	J(CALL(sub_1eba2,0));	// 38080                  call    sub_1EBA2 ;~ 0848:0E99
cs=0x848;eip=0x000e9c; 	J(JMP(loc_1eddf));	// 38081                  jmp     loc_1EDDF ;~ 0848:0E9C
loc_1ee70:
	// 6546 
cs=0x848;eip=0x000ea0; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x306));	// 38087                  mov     [bp+var_2], 306h ;~ 0848:0EA0
loc_1ee75:
	// 6547 
cs=0x848;eip=0x000ea5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 38090                  push    [bp+var_2] ;~ 0848:0EA5
cs=0x848;eip=0x000ea8; 	T(MOV(ax, *(dw*)(raddr(es,si+4))));	// 38091                  mov     ax, es:[si+4] ;~ 0848:0EA8
cs=0x848;eip=0x000eac; 	T(SUB(ax, 0x1000));	// 38092                  sub     ax, 1000h ;~ 0848:0EAC
cs=0x848;eip=0x000eaf; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 38093                  mov     [bp+var_2], ax ;~ 0848:0EAF
cs=0x848;eip=0x000eb2; 	T(ax = si+0x101A);	// 38094                  lea     ax, [si+101Ah] ;~ 0848:0EB2
cs=0x848;eip=0x000eb6; 	X(PUSH(es));	// 38095                  push    es ;~ 0848:0EB6
cs=0x848;eip=0x000eb7; 	X(PUSH(ax));	// 38096                  push    ax ;~ 0848:0EB7
cs=0x848;eip=0x000eb8; 	T(ax = bp+var_2);	// 38097                  lea     ax, [bp+var_2] ;~ 0848:0EB8
cs=0x848;eip=0x000ebb; 	X(PUSH(ss));	// 38098                  push    ss ;~ 0848:0EBB
cs=0x848;eip=0x000ebc; 	X(PUSH(ax));	// 38099                  push    ax ;~ 0848:0EBC
cs=0x848;eip=0x000ebd; 	J(CALLF(__dispatch_call,*(dd*)(raddr(es,si+0x16))));	// 38100                  call    dword ptr es:[si+16h] ;~ 0848:0EBD
cs=0x848;eip=0x000ec1; 	X(POP(ax));	// 38102                  pop     ax ;~ 0848:0EC1
cs=0x848;eip=0x000ec2; 	X(POP(di));	// 38103                  pop     di ;~ 0848:0EC2
cs=0x848;eip=0x000ec3; 	X(POP(si));	// 38104                  pop     si ;~ 0848:0EC3
cs=0x848;eip=0x000ec4; 	T(sp = bp;);	// 38105                  mov     sp, bp ;~ 0848:0EC4
cs=0x848;eip=0x000ec6; 	X(POP(bp));	// 38106                  pop     bp ;~ 0848:0EC6
cs=0x848;eip=0x000ec7; 	J(RETN(0));	// 38107                  retn ;~ 0848:0EC7

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1eddf: 	goto loc_1eddf;
        case m2c::kloc_1edec: 	goto loc_1edec;
        case m2c::kloc_1ee02: 	goto loc_1ee02;
        case m2c::kloc_1ee32: 	goto loc_1ee32;
        case m2c::kloc_1ee70: 	goto loc_1ee70;
        case m2c::kloc_1ee75: 	goto loc_1ee75;
        case m2c::ksub_1edcd: 	goto sub_1edcd;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1ee98(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1ee98:
    _begin:
cs=0x848;eip=0x000ec8; 	X(PUSH(di));	// 38116                  push    di ;~ 0848:0EC8
cs=0x848;eip=0x000ec9; 	X(PUSH(si));	// 38117                  push    si ;~ 0848:0EC9
cs=0x848;eip=0x000eca; 	T(LES(bx, dword_6b860));	// 38118                  les     bx, dword_6B860 ;~ 0848:0ECA
cs=0x848;eip=0x000ece; 	T(TEST(*(raddr(es,bx+0x0A)), 1));	// 38119                  test    byte ptr es:[bx+0Ah], 1 ;~ 0848:0ECE
cs=0x848;eip=0x000ed3; 	J(JZ(loc_1ef0f));	// 38120                  jz      short loc_1EF0F ;~ 0848:0ED3
cs=0x848;eip=0x000ed5; 	T(ax = 1;);	// 38121                  mov     ax, 1 ;~ 0848:0ED5
cs=0x848;eip=0x000ed8; 	J(CALL(sub_1f03e,0));	// 38122                  call    sub_1F03E ;~ 0848:0ED8
cs=0x848;eip=0x000edb; 	T(OR(ax, ax));	// 38123                  or      ax, ax ;~ 0848:0EDB
cs=0x848;eip=0x000edd; 	J(JZ(loc_1eeb5));	// 38124                  jz      short loc_1EEB5 ;~ 0848:0EDD
loc_1eeaf:
	// 6548 
cs=0x848;eip=0x000edf; 	T(ax = 0x306;);	// 38128                  mov     ax, 306h ;~ 0848:0EDF
cs=0x848;eip=0x000ee2; 	J(JMP(loc_1efd2));	// 38129                  jmp     loc_1EFD2 ;~ 0848:0EE2
loc_1eeb5:
	// 6549 
cs=0x848;eip=0x000ee5; 	T(LES(bx, dword_6b860));	// 38133                  les     bx, dword_6B860 ;~ 0848:0EE5
cs=0x848;eip=0x000ee9; 	T(MOV(si, *(dw*)(raddr(es,bx+0x0A))));	// 38134                  mov     si, es:[bx+0Ah] ;~ 0848:0EE9
cs=0x848;eip=0x000eed; 	T(AND(si, 0x0FF));	// 38135                  and     si, 0FFh ;~ 0848:0EED
cs=0x848;eip=0x000ef1; 	T(MOV(al, *(raddr(es,bx+si+0x2B1E))));	// 38136                  mov     al, es:[bx+si+2B1Eh] ;~ 0848:0EF1
cs=0x848;eip=0x000ef6; 	T(SUB(ah, ah));	// 38137                  sub     ah, ah ;~ 0848:0EF6
cs=0x848;eip=0x000ef8; 	T(di = ax;);	// 38138                  mov     di, ax ;~ 0848:0EF8
cs=0x848;eip=0x000efa; 	T(si = bx+0x30DE);	// 38139                  lea     si, [bx+30DEh] ;~ 0848:0EFA
cs=0x848;eip=0x000efe; 	T(bx = ax;);	// 38140                  mov     bx, ax ;~ 0848:0EFE
cs=0x848;eip=0x000f00; 	T(MOV(al, *(raddr(es,bx+si))));	// 38141                  mov     al, es:[bx+si] ;~ 0848:0F00
cs=0x848;eip=0x000f03; 	T(SUB(ah, ah));	// 38142                  sub     ah, ah ;~ 0848:0F03
cs=0x848;eip=0x000f05; 	J(CALL(sub_1f03e,0));	// 38143                  call    sub_1F03E ;~ 0848:0F05
cs=0x848;eip=0x000f08; 	T(OR(ax, ax));	// 38144                  or      ax, ax ;~ 0848:0F08
cs=0x848;eip=0x000f0a; 	J(JNZ(loc_1eeaf));	// 38145                  jnz     short loc_1EEAF ;~ 0848:0F0A
cs=0x848;eip=0x000f0c; 	T(LES(bx, dword_6b860));	// 38146                  les     bx, dword_6B860 ;~ 0848:0F0C
cs=0x848;eip=0x000f10; 	T(MOV(cl, *(raddr(es,bx+di+0x30EE))));	// 38147                  mov     cl, es:[bx+di+30EEh] ;~ 0848:0F10
cs=0x848;eip=0x000f15; 	T(TEST(cl, cl));	// 38148                  test    cl, cl ;~ 0848:0F15
cs=0x848;eip=0x000f17; 	J(JZ(loc_1ef07));	// 38149                  jz      short loc_1EF07 ;~ 0848:0F17
cs=0x848;eip=0x000f19; 	T(si = 1;);	// 38150                  mov     si, 1 ;~ 0848:0F19
cs=0x848;eip=0x000f1c; 	T(SHL(si, cl));	// 38151                  shl     si, cl ;~ 0848:0F1C
cs=0x848;eip=0x000f1e; 	T(DEC(si));	// 38152                  dec     si ;~ 0848:0F1E
cs=0x848;eip=0x000f1f; 	T(AND(si, *(dw*)(raddr(es,bx+0x0A))));	// 38153                  and     si, es:[bx+0Ah] ;~ 0848:0F1F
cs=0x848;eip=0x000f23; 	T(SHL(di, 1));	// 38154                  shl     di, 1 ;~ 0848:0F23
cs=0x848;eip=0x000f25; 	T(ADD(si, *(dw*)(raddr(es,bx+di+0x30FE))));	// 38155                  add     si, es:[bx+di+30FEh] ;~ 0848:0F25
cs=0x848;eip=0x000f2a; 	T(al = cl;);	// 38156                  mov     al, cl ;~ 0848:0F2A
cs=0x848;eip=0x000f2c; 	T(SUB(ah, ah));	// 38157                  sub     ah, ah ;~ 0848:0F2C
cs=0x848;eip=0x000f2e; 	J(CALL(sub_1f03e,0));	// 38158                  call    sub_1F03E ;~ 0848:0F2E
cs=0x848;eip=0x000f31; 	T(OR(ax, ax));	// 38159                  or      ax, ax ;~ 0848:0F31
cs=0x848;eip=0x000f33; 	J(JNZ(loc_1eeaf));	// 38160                  jnz     short loc_1EEAF ;~ 0848:0F33
cs=0x848;eip=0x000f35; 	T(di = si;);	// 38161                  mov     di, si ;~ 0848:0F35
loc_1ef07:
	// 6550 
cs=0x848;eip=0x000f37; 	T(ADD(di, 0x100));	// 38164                  add     di, 100h ;~ 0848:0F37
cs=0x848;eip=0x000f3b; 	J(JMP(loc_1efd0));	// 38165                  jmp     loc_1EFD0 ;~ 0848:0F3B
loc_1ef0f:
	// 6551 
cs=0x848;eip=0x000f3f; 	T(ax = 1;);	// 38171                  mov     ax, 1 ;~ 0848:0F3F
cs=0x848;eip=0x000f42; 	J(CALL(sub_1f03e,0));	// 38172                  call    sub_1F03E ;~ 0848:0F42
cs=0x848;eip=0x000f45; 	T(OR(ax, ax));	// 38173                  or      ax, ax ;~ 0848:0F45
cs=0x848;eip=0x000f47; 	J(JZ(loc_1ef1b));	// 38174                  jz      short loc_1EF1B ;~ 0848:0F47
cs=0x848;eip=0x000f49; 	J(JMP(loc_1eeaf));	// 38175                  jmp     short loc_1EEAF ;~ 0848:0F49
loc_1ef1b:
	// 6552 
cs=0x848;eip=0x000f4b; 	T(LES(si, dword_6b860));	// 38179                  les     si, dword_6B860 ;~ 0848:0F4B
cs=0x848;eip=0x000f4f; 	T(CMP(*(dw*)(raddr(es,si+2)), ax));	// 38180                  cmp     es:[si+2], ax ;~ 0848:0F4F
cs=0x848;eip=0x000f53; 	J(JNZ(loc_1ef3f));	// 38181                  jnz     short loc_1EF3F ;~ 0848:0F53
cs=0x848;eip=0x000f55; 	T(bx = si;);	// 38182                  mov     bx, si ;~ 0848:0F55
cs=0x848;eip=0x000f57; 	T(MOV(di, *(dw*)(raddr(es,bx+0x0A))));	// 38183                  mov     di, es:[bx+0Ah] ;~ 0848:0F57
cs=0x848;eip=0x000f5b; 	T(AND(di, 0x0FF));	// 38184                  and     di, 0FFh ;~ 0848:0F5B
cs=0x848;eip=0x000f5f; 	T(ax = 8;);	// 38185                  mov     ax, 8 ;~ 0848:0F5F
loc_1ef32:
	// 6553 
cs=0x848;eip=0x000f62; 	J(CALL(sub_1f03e,0));	// 38188                  call    sub_1F03E ;~ 0848:0F62
cs=0x848;eip=0x000f65; 	T(OR(ax, ax));	// 38189                  or      ax, ax ;~ 0848:0F65
cs=0x848;eip=0x000f67; 	J(JNZ(loc_1ef3c));	// 38190                  jnz     short loc_1EF3C ;~ 0848:0F67
cs=0x848;eip=0x000f69; 	J(JMP(loc_1efd0));	// 38191                  jmp     loc_1EFD0 ;~ 0848:0F69
loc_1ef3c:
	// 6554 
cs=0x848;eip=0x000f6c; 	J(JMP(loc_1eeaf));	// 38195                  jmp     loc_1EEAF ;~ 0848:0F6C
loc_1ef3f:
	// 6555 
cs=0x848;eip=0x000f6f; 	T(MOV(al, *(raddr(es,si+0x0A))));	// 38199                  mov     al, es:[si+0Ah] ;~ 0848:0F6F
cs=0x848;eip=0x000f73; 	T(SUB(ah, ah));	// 38200                  sub     ah, ah ;~ 0848:0F73
cs=0x848;eip=0x000f75; 	T(OR(ax, ax));	// 38201                  or      ax, ax ;~ 0848:0F75
cs=0x848;eip=0x000f77; 	J(JZ(loc_1efa0));	// 38202                  jz      short loc_1EFA0 ;~ 0848:0F77
cs=0x848;eip=0x000f79; 	T(bx = si;);	// 38203                  mov     bx, si ;~ 0848:0F79
cs=0x848;eip=0x000f7b; 	T(ADD(bx, ax));	// 38204                  add     bx, ax ;~ 0848:0F7B
cs=0x848;eip=0x000f7d; 	T(MOV(al, *(raddr(es,bx+0x2C1E))));	// 38205                  mov     al, es:[bx+2C1Eh] ;~ 0848:0F7D
cs=0x848;eip=0x000f82; 	T(di = ax;);	// 38206                  mov     di, ax ;~ 0848:0F82
cs=0x848;eip=0x000f84; 	T(CMP(ax, 0x0FF));	// 38207                  cmp     ax, 0FFh ;~ 0848:0F84
cs=0x848;eip=0x000f87; 	J(JNZ(loc_1efc2));	// 38208                  jnz     short loc_1EFC2 ;~ 0848:0F87
cs=0x848;eip=0x000f89; 	T(TEST(*(raddr(es,si+0x0A)), 0x3F));	// 38209                  test    byte ptr es:[si+0Ah], 3Fh ;~ 0848:0F89
cs=0x848;eip=0x000f8e; 	J(JZ(loc_1ef80));	// 38210                  jz      short loc_1EF80 ;~ 0848:0F8E
cs=0x848;eip=0x000f90; 	T(ax = 4;);	// 38211                  mov     ax, 4 ;~ 0848:0F90
cs=0x848;eip=0x000f93; 	J(CALL(sub_1f03e,0));	// 38212                  call    sub_1F03E ;~ 0848:0F93
cs=0x848;eip=0x000f96; 	T(OR(ax, ax));	// 38213                  or      ax, ax ;~ 0848:0F96
cs=0x848;eip=0x000f98; 	J(JZ(loc_1ef6d));	// 38214                  jz      short loc_1EF6D ;~ 0848:0F98
cs=0x848;eip=0x000f9a; 	J(JMP(loc_1eeaf));	// 38215                  jmp     loc_1EEAF ;~ 0848:0F9A
loc_1ef6d:
	// 6556 
cs=0x848;eip=0x000f9d; 	T(LES(bx, dword_6b860));	// 38219                  les     bx, dword_6B860 ;~ 0848:0F9D
cs=0x848;eip=0x000fa1; 	T(MOV(si, *(dw*)(raddr(es,bx+0x0A))));	// 38221                  mov     si, es:[bx+0Ah] ;~ 0848:0FA1
cs=0x848;eip=0x000fa5; 	T(AND(si, 0x0FF));	// 38222                  and     si, 0FFh ;~ 0848:0FA5
cs=0x848;eip=0x000fa9; 	T(MOV(di, *(dw*)(raddr(es,bx+si+0x2D1E))));	// 38223                  mov     di, es:[bx+si+2D1Eh] ;~ 0848:0FA9
cs=0x848;eip=0x000fae; 	J(JMP(loc_1efbe));	// 38224                  jmp     short loc_1EFBE ;~ 0848:0FAE
loc_1ef80:
	// 6557 
cs=0x848;eip=0x000fb0; 	T(ax = 6;);	// 38228                  mov     ax, 6 ;~ 0848:0FB0
cs=0x848;eip=0x000fb3; 	J(CALL(sub_1f03e,0));	// 38229                  call    sub_1F03E ;~ 0848:0FB3
cs=0x848;eip=0x000fb6; 	T(OR(ax, ax));	// 38230                  or      ax, ax ;~ 0848:0FB6
cs=0x848;eip=0x000fb8; 	J(JZ(loc_1ef8e));	// 38231                  jz      short loc_1EF8E ;~ 0848:0FB8
cs=0x848;eip=0x000fba; 	J(JMP(loc_1eeaf));	// 38232                  jmp     loc_1EEAF ;~ 0848:0FBA
loc_1ef8e:
	// 6558 
cs=0x848;eip=0x000fbe; 	T(LES(bx, dword_6b860));	// 38238                  les     bx, dword_6B860 ;~ 0848:0FBE
cs=0x848;eip=0x000fc2; 	T(MOV(si, *(dw*)(raddr(es,bx+0x0A))));	// 38239                  mov     si, es:[bx+0Ah] ;~ 0848:0FC2
cs=0x848;eip=0x000fc6; 	T(AND(si, 0x7F));	// 38240                  and     si, 7Fh ;~ 0848:0FC6
cs=0x848;eip=0x000fc9; 	T(MOV(di, *(dw*)(raddr(es,bx+si+0x2E1E))));	// 38241                  mov     di, es:[bx+si+2E1Eh] ;~ 0848:0FC9
cs=0x848;eip=0x000fce; 	J(JMP(loc_1efbe));	// 38242                  jmp     short loc_1EFBE ;~ 0848:0FCE
loc_1efa0:
	// 6559 
cs=0x848;eip=0x000fd0; 	T(ax = 8;);	// 38246                  mov     ax, 8 ;~ 0848:0FD0
cs=0x848;eip=0x000fd3; 	J(CALL(sub_1f03e,0));	// 38247                  call    sub_1F03E ;~ 0848:0FD3
cs=0x848;eip=0x000fd6; 	T(OR(ax, ax));	// 38248                  or      ax, ax ;~ 0848:0FD6
cs=0x848;eip=0x000fd8; 	J(JZ(loc_1efad));	// 38249                  jz      short loc_1EFAD ;~ 0848:0FD8
cs=0x848;eip=0x000fda; 	J(JMP(loc_1eeaf));	// 38250                  jmp     loc_1EEAF ;~ 0848:0FDA
loc_1efad:
	// 6560 
cs=0x848;eip=0x000fdd; 	T(LES(bx, dword_6b860));	// 38254                  les     bx, dword_6B860 ;~ 0848:0FDD
cs=0x848;eip=0x000fe1; 	T(MOV(si, *(dw*)(raddr(es,bx+0x0A))));	// 38255                  mov     si, es:[bx+0Ah] ;~ 0848:0FE1
cs=0x848;eip=0x000fe5; 	T(AND(si, 0x0FF));	// 38256                  and     si, 0FFh ;~ 0848:0FE5
cs=0x848;eip=0x000fe9; 	T(MOV(di, *(dw*)(raddr(es,bx+si+0x2E9E))));	// 38257                  mov     di, es:[bx+si+2E9Eh] ;~ 0848:0FE9
loc_1efbe:
	// 6561 
cs=0x848;eip=0x000fee; 	T(AND(di, 0x0FF));	// 38261                  and     di, 0FFh ;~ 0848:0FEE
loc_1efc2:
	// 6562 
cs=0x848;eip=0x000ff2; 	T(bx = *(dw*)(&dword_6b860););	// 38264                  mov     bx, word ptr dword_6B860 ;~ 0848:0FF2
cs=0x848;eip=0x000ff6; 	T(MOV(al, *(raddr(es,bx+di+0x2F9E))));	// 38265                  mov     al, es:[bx+di+2F9Eh] ;~ 0848:0FF6
cs=0x848;eip=0x000ffb; 	T(SUB(ah, ah));	// 38266                  sub     ah, ah ;~ 0848:0FFB
cs=0x848;eip=0x000ffd; 	J(JMP(loc_1ef32));	// 38267                  jmp     loc_1EF32 ;~ 0848:0FFD
loc_1efd0:
	// 6563 
cs=0x848;eip=0x001000; 	T(ax = di;);	// 38273                  mov     ax, di ;~ 0848:1000
loc_1efd2:
	// 6564 
cs=0x848;eip=0x001002; 	X(POP(si));	// 38276                  pop     si ;~ 0848:1002
cs=0x848;eip=0x001003; 	X(POP(di));	// 38277                  pop     di ;~ 0848:1003
cs=0x848;eip=0x001004; 	J(RETN(0));	// 38278                  retn ;~ 0848:1004

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1eeaf: 	goto loc_1eeaf;
        case m2c::kloc_1eeb5: 	goto loc_1eeb5;
        case m2c::kloc_1ef07: 	goto loc_1ef07;
        case m2c::kloc_1ef0f: 	goto loc_1ef0f;
        case m2c::kloc_1ef1b: 	goto loc_1ef1b;
        case m2c::kloc_1ef32: 	goto loc_1ef32;
        case m2c::kloc_1ef3c: 	goto loc_1ef3c;
        case m2c::kloc_1ef3f: 	goto loc_1ef3f;
        case m2c::kloc_1ef6d: 	goto loc_1ef6d;
        case m2c::kloc_1ef80: 	goto loc_1ef80;
        case m2c::kloc_1ef8e: 	goto loc_1ef8e;
        case m2c::kloc_1efa0: 	goto loc_1efa0;
        case m2c::kloc_1efad: 	goto loc_1efad;
        case m2c::kloc_1efbe: 	goto loc_1efbe;
        case m2c::kloc_1efc2: 	goto loc_1efc2;
        case m2c::kloc_1efd0: 	goto loc_1efd0;
        case m2c::kloc_1efd2: 	goto loc_1efd2;
        case m2c::ksub_1ee98: 	goto sub_1ee98;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1efd6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1efd6:
    _begin:
cs=0x848;eip=0x001006; 	X(PUSH(di));	// 38288                  push    di ;~ 0848:1006
cs=0x848;eip=0x001007; 	X(PUSH(si));	// 38289                  push    si ;~ 0848:1007
cs=0x848;eip=0x001008; 	T(di = ax;);	// 38290                  mov     di, ax ;~ 0848:1008
cs=0x848;eip=0x00100a; 	T(LES(si, dword_6b860));	// 38291                  les     si, dword_6B860 ;~ 0848:100A
cs=0x848;eip=0x00100e; 	T(MOV(bl, *(raddr(es,si+0x0A))));	// 38292                  mov     bl, es:[si+0Ah] ;~ 0848:100E
cs=0x848;eip=0x001012; 	T(SUB(bh, bh));	// 38293                  sub     bh, bh ;~ 0848:1012
cs=0x848;eip=0x001014; 	T(MOV(bl, *(raddr(es,bx+si+0x2A1E))));	// 38294                  mov     bl, es:[bx+si+2A1Eh] ;~ 0848:1014
cs=0x848;eip=0x001019; 	T(SUB(bh, bh));	// 38295                  sub     bh, bh ;~ 0848:1019
cs=0x848;eip=0x00101b; 	T(XCHG(bx, si));	// 38296                  xchg    bx, si ;~ 0848:101B
cs=0x848;eip=0x00101d; 	T(MOV(al, *(raddr(es,bx+si+0x309E))));	// 38297                  mov     al, es:[bx+si+309Eh] ;~ 0848:101D
cs=0x848;eip=0x001022; 	T(SUB(ah, ah));	// 38298                  sub     ah, ah ;~ 0848:1022
cs=0x848;eip=0x001024; 	J(CALL(sub_1f03e,0));	// 38299                  call    sub_1F03E ;~ 0848:1024
cs=0x848;eip=0x001027; 	T(OR(ax, ax));	// 38300                  or      ax, ax ;~ 0848:1027
cs=0x848;eip=0x001029; 	J(JZ(loc_1efff));	// 38301                  jz      short loc_1EFFF ;~ 0848:1029
loc_1effb:
	// 6565 
cs=0x848;eip=0x00102b; 	T(SUB(ax, ax));	// 38304                  sub     ax, ax ;~ 0848:102B
cs=0x848;eip=0x00102d; 	J(JMP(loc_1f039));	// 38305                  jmp     short loc_1F039 ;~ 0848:102D
loc_1efff:
	// 6566 
cs=0x848;eip=0x00102f; 	T(LES(bx, dword_6b860));	// 38309                  les     bx, dword_6B860 ;~ 0848:102F
cs=0x848;eip=0x001033; 	T(CMP(di, 2));	// 38310                  cmp     di, 2 ;~ 0848:1033
cs=0x848;eip=0x001036; 	J(JNZ(loc_1f020));	// 38311                  jnz     short loc_1F020 ;~ 0848:1036
cs=0x848;eip=0x001038; 	T(SHL(si, 1));	// 38312                  shl     si, 1 ;~ 0848:1038
cs=0x848;eip=0x00103a; 	T(SHL(si, 1));	// 38313                  shl     si, 1 ;~ 0848:103A
cs=0x848;eip=0x00103c; 	T(MOV(al, *(raddr(es,bx+0x0A))));	// 38314                  mov     al, es:[bx+0Ah] ;~ 0848:103C
cs=0x848;eip=0x001040; 	T(AND(ax, 3));	// 38315                  and     ax, 3 ;~ 0848:1040
cs=0x848;eip=0x001043; 	T(OR(si, ax));	// 38316                  or      si, ax ;~ 0848:1043
cs=0x848;eip=0x001045; 	T(ax = di;);	// 38317                  mov     ax, di ;~ 0848:1045
loc_1f017:
	// 6567 
cs=0x848;eip=0x001047; 	J(CALL(sub_1f03e,0));	// 38320                  call    sub_1F03E ;~ 0848:1047
cs=0x848;eip=0x00104a; 	T(OR(ax, ax));	// 38321                  or      ax, ax ;~ 0848:104A
cs=0x848;eip=0x00104c; 	J(JZ(loc_1f037));	// 38322                  jz      short loc_1F037 ;~ 0848:104C
cs=0x848;eip=0x00104e; 	J(JMP(loc_1effb));	// 38323                  jmp     short loc_1EFFB ;~ 0848:104E
loc_1f020:
	// 6568 
cs=0x848;eip=0x001050; 	T(MOV(cl, *(raddr(es,bx+6))));	// 38327                  mov     cl, es:[bx+6] ;~ 0848:1050
cs=0x848;eip=0x001054; 	T(SHL(si, cl));	// 38328                  shl     si, cl ;~ 0848:1054
cs=0x848;eip=0x001056; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 38329                  mov     ax, es:[bx+8] ;~ 0848:1056
cs=0x848;eip=0x00105a; 	T(AND(ax, *(dw*)(raddr(es,bx+0x0A))));	// 38330                  and     ax, es:[bx+0Ah] ;~ 0848:105A
cs=0x848;eip=0x00105e; 	T(OR(si, ax));	// 38331                  or      si, ax ;~ 0848:105E
cs=0x848;eip=0x001060; 	T(al = cl;);	// 38332                  mov     al, cl ;~ 0848:1060
cs=0x848;eip=0x001062; 	T(XOR(ch, ch));	// 38333                  xor     ch, ch ;~ 0848:1062
cs=0x848;eip=0x001064; 	J(JMP(loc_1f017));	// 38334                  jmp     short loc_1F017 ;~ 0848:1064
loc_1f037:
	// 6569 
cs=0x848;eip=0x001067; 	T(XCHG(ax, si));	// 38340                  xchg    ax, si ;~ 0848:1067
cs=0x848;eip=0x001068; 	T(INC(ax));	// 38341                  inc     ax ;~ 0848:1068
loc_1f039:
	// 6570 
cs=0x848;eip=0x001069; 	X(POP(si));	// 38344                  pop     si ;~ 0848:1069
cs=0x848;eip=0x00106a; 	X(POP(di));	// 38345                  pop     di ;~ 0848:106A
cs=0x848;eip=0x00106b; 	J(RETN(0));	// 38346                  retn ;~ 0848:106B

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1effb: 	goto loc_1effb;
        case m2c::kloc_1efff: 	goto loc_1efff;
        case m2c::kloc_1f017: 	goto loc_1f017;
        case m2c::kloc_1f020: 	goto loc_1f020;
        case m2c::kloc_1f037: 	goto loc_1f037;
        case m2c::kloc_1f039: 	goto loc_1f039;
        case m2c::ksub_1efd6: 	goto sub_1efd6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1f03e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1f03e:
    _begin:
cs=0x848;eip=0x00106e; 	T(XCHG(ax, cx));	// 38358                  xchg    ax, cx ;~ 0848:106E
cs=0x848;eip=0x00106f; 	T(LES(bx, dword_6b860));	// 38359                  les     bx, dword_6B860 ;~ 0848:106F
cs=0x848;eip=0x001073; 	T(MOV(ch, *(raddr(es,bx+0x0C))));	// 38360                  mov     ch, es:[bx+0Ch] ;~ 0848:1073
cs=0x848;eip=0x001077; 	T(CMP(ch, cl));	// 38361                  cmp     ch, cl ;~ 0848:1077
cs=0x848;eip=0x001079; 	J(JC(loc_1f058));	// 38362                  jb      short loc_1F058 ;~ 0848:1079
cs=0x848;eip=0x00107b; 	X(SHR(*(dw*)(raddr(es,bx+0x0A)), cl));	// 38363                  shr     word ptr es:[bx+0Ah], cl ;~ 0848:107B
cs=0x848;eip=0x00107f; 	T(SUB(ch, cl));	// 38364                  sub     ch, cl ;~ 0848:107F
cs=0x848;eip=0x001081; 	X(MOV(*(raddr(es,bx+0x0C)), ch));	// 38365                  mov     es:[bx+0Ch], ch ;~ 0848:1081
cs=0x848;eip=0x001085; 	T(XOR(ax, ax));	// 38366                  xor     ax, ax ;~ 0848:1085
cs=0x848;eip=0x001087; 	J(RETN(0));	// 38367                  retn ;~ 0848:1087
loc_1f058:
	// 6571 
cs=0x848;eip=0x001088; 	X(PUSH(di));	// 38371                  push    di ;~ 0848:1088
cs=0x848;eip=0x001089; 	X(PUSH(si));	// 38372                  push    si ;~ 0848:1089
cs=0x848;eip=0x00108a; 	T(si = bx;);	// 38373                  mov     si, bx ;~ 0848:108A
cs=0x848;eip=0x00108c; 	T(XCHG(ch, cl));	// 38374                  xchg    ch, cl ;~ 0848:108C
cs=0x848;eip=0x00108e; 	X(SHR(*(dw*)(raddr(es,si+0x0A)), cl));	// 38375                  shr     word ptr es:[si+0Ah], cl ;~ 0848:108E
cs=0x848;eip=0x001092; 	T(MOV(di, *(dw*)(raddr(es,si+0x0E))));	// 38376                  mov     di, es:[si+0Eh] ;~ 0848:1092
cs=0x848;eip=0x001096; 	T(CMP(*(dw*)(raddr(es,si+0x10)), di));	// 38377                  cmp     es:[si+10h], di ;~ 0848:1096
cs=0x848;eip=0x00109a; 	J(JA(loc_1f098));	// 38378                  ja      short loc_1F098 ;~ 0848:109A
cs=0x848;eip=0x00109c; 	X(MOV(*(dw*)(raddr(es,si+0x0E)), 0x800));	// 38379                  mov     word ptr es:[si+0Eh], 800h ;~ 0848:109C
cs=0x848;eip=0x0010a2; 	X(PUSH(cx));	// 38380                  push    cx ;~ 0848:10A2
cs=0x848;eip=0x0010a3; 	X(PUSH(si));	// 38381                  push    si ;~ 0848:10A3
cs=0x848;eip=0x0010a4; 	X(PUSH(di));	// 38382                  push    di ;~ 0848:10A4
cs=0x848;eip=0x0010a5; 	T(ax = si+0x221E);	// 38383                  lea     ax, [si+221Eh] ;~ 0848:10A5
cs=0x848;eip=0x0010a9; 	X(PUSH(es));	// 38384                  push    es ;~ 0848:10A9
cs=0x848;eip=0x0010aa; 	X(PUSH(ax));	// 38385                  push    ax ;~ 0848:10AA
cs=0x848;eip=0x0010ab; 	T(ax = si+0x0E);	// 38386                  lea     ax, [si+0Eh] ;~ 0848:10AB
cs=0x848;eip=0x0010ae; 	X(PUSH(es));	// 38387                  push    es ;~ 0848:10AE
cs=0x848;eip=0x0010af; 	X(PUSH(ax));	// 38388                  push    ax ;~ 0848:10AF
cs=0x848;eip=0x0010b0; 	J(CALLF(__dispatch_call,*(dd*)(raddr(es,si+0x12))));	// 38389                  call    dword ptr es:[si+12h] ;~ 0848:10B0
cs=0x848;eip=0x0010b4; 	X(POP(di));	// 38390                  pop     di ;~ 0848:10B4
cs=0x848;eip=0x0010b5; 	X(POP(si));	// 38391                  pop     si ;~ 0848:10B5
cs=0x848;eip=0x0010b6; 	X(POP(cx));	// 38392                  pop     cx ;~ 0848:10B6
cs=0x848;eip=0x0010b7; 	T(es = *(dw*)(((db*)&dword_6b860)+2););	// 38393                  mov     es, word ptr dword_6B860+2 ;~ 0848:10B7
cs=0x848;eip=0x0010bb; 	X(MOV(*(dw*)(raddr(es,si+0x10)), ax));	// 38394                  mov     es:[si+10h], ax ;~ 0848:10BB
cs=0x848;eip=0x0010bf; 	T(TEST(ax, ax));	// 38395                  test    ax, ax ;~ 0848:10BF
cs=0x848;eip=0x0010c1; 	T(ax = 1;);	// 38396                  mov     ax, 1 ;~ 0848:10C1
cs=0x848;eip=0x0010c4; 	J(JZ(loc_1f0bd));	// 38397                  jz      short loc_1F0BD ;~ 0848:10C4
cs=0x848;eip=0x0010c6; 	T(XOR(di, di));	// 38398                  xor     di, di ;~ 0848:10C6
loc_1f098:
	// 6572 
cs=0x848;eip=0x0010c8; 	T(bx = di;);	// 38401                  mov     bx, di ;~ 0848:10C8
cs=0x848;eip=0x0010ca; 	T(MOV(ah, *(raddr(es,bx+si+0x221E))));	// 38402                  mov     ah, es:[bx+si+221Eh] ;~ 0848:10CA
cs=0x848;eip=0x0010cf; 	T(SUB(al, al));	// 38403                  sub     al, al ;~ 0848:10CF
cs=0x848;eip=0x0010d1; 	X(OR(*(dw*)(raddr(es,si+0x0A)), ax));	// 38404                  or      es:[si+0Ah], ax ;~ 0848:10D1
cs=0x848;eip=0x0010d5; 	T(INC(di));	// 38405                  inc     di ;~ 0848:10D5
cs=0x848;eip=0x0010d6; 	T(SUB(ch, cl));	// 38406                  sub     ch, cl ;~ 0848:10D6
cs=0x848;eip=0x0010d8; 	T(cl = ch;);	// 38407                  mov     cl, ch ;~ 0848:10D8
cs=0x848;eip=0x0010da; 	X(SHR(*(dw*)(raddr(es,si+0x0A)), cl));	// 38408                  shr     word ptr es:[si+0Ah], cl ;~ 0848:10DA
cs=0x848;eip=0x0010de; 	T(SUB(cl, 8));	// 38409                  sub     cl, 8 ;~ 0848:10DE
cs=0x848;eip=0x0010e1; 	T(NEG(cl));	// 38410                  neg     cl ;~ 0848:10E1
cs=0x848;eip=0x0010e3; 	X(MOV(*(raddr(es,si+0x0C)), cl));	// 38411                  mov     es:[si+0Ch], cl ;~ 0848:10E3
cs=0x848;eip=0x0010e7; 	T(SUB(ax, ax));	// 38412                  sub     ax, ax ;~ 0848:10E7
cs=0x848;eip=0x0010e9; 	X(MOV(*(dw*)(raddr(es,si+0x0E)), di));	// 38413                  mov     es:[si+0Eh], di ;~ 0848:10E9
loc_1f0bd:
	// 6573 
cs=0x848;eip=0x0010ed; 	X(POP(si));	// 38416                  pop     si ;~ 0848:10ED
cs=0x848;eip=0x0010ee; 	X(POP(di));	// 38417                  pop     di ;~ 0848:10EE
cs=0x848;eip=0x0010ef; 	J(RETN(0));	// 38418                  retn ;~ 0848:10EF

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1f058: 	goto loc_1f058;
        case m2c::kloc_1f098: 	goto loc_1f098;
        case m2c::kloc_1f0bd: 	goto loc_1f0bd;
        case m2c::ksub_1f03e: 	goto sub_1f03e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1f0c1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1f0c1:
    _begin:
cs=0x848;eip=0x0010f1; 	X(PUSH(bp));	// 38429                  push    bp ;~ 0848:10F1
cs=0x848;eip=0x0010f2; 	X(PUSH(di));	// 38430                  push    di ;~ 0848:10F2
cs=0x848;eip=0x0010f3; 	X(PUSH(si));	// 38431                  push    si ;~ 0848:10F3
cs=0x848;eip=0x0010f4; 	T(es = *(dw*)(((db*)&dword_6b860)+2););	// 38432                  mov     es, word ptr dword_6B860+2 ;~ 0848:10F4
cs=0x848;eip=0x0010f8; 	T(si = cx;);	// 38433                  mov     si, cx ;~ 0848:10F8
cs=0x848;eip=0x0010fa; 	T(di = dx;);	// 38434                  mov     di, dx ;~ 0848:10FA
cs=0x848;eip=0x0010fc; 	T(dx = bx;);	// 38435                  mov     dx, bx ;~ 0848:10FC
cs=0x848;eip=0x0010fe; 	T(bx = ax;);	// 38436                  mov     bx, ax ;~ 0848:10FE
cs=0x848;eip=0x001100; 	T(DEC(bx));	// 38437                  dec     bx ;~ 0848:1100
loc_1f0d1:
	// 6574 
cs=0x848;eip=0x001101; 	T(ADD(bx, dx));	// 38440                  add     bx, dx ;~ 0848:1101
cs=0x848;eip=0x001103; 	T(MOV(cl, *(raddr(es,bx))));	// 38441                  mov     cl, es:[bx] ;~ 0848:1103
cs=0x848;eip=0x001106; 	T(SUB(bx, dx));	// 38442                  sub     bx, dx ;~ 0848:1106
cs=0x848;eip=0x001108; 	T(ax = 1;);	// 38443                  mov     ax, 1 ;~ 0848:1108
cs=0x848;eip=0x00110b; 	T(SHL(ax, cl));	// 38444                  shl     ax, cl ;~ 0848:110B
cs=0x848;eip=0x00110d; 	T(MOV(bp, *(dw*)(raddr(cs,bx+si))));	// 38445                  mov     bp, cs:[bx+si] ;~ 0848:110D
cs=0x848;eip=0x001110; 	T(AND(bp, 0x0FF));	// 38446                  and     bp, 0FFh ;~ 0848:1110
loc_1f0e4:
	// 6575 
cs=0x848;eip=0x001114; 	X(MOV(*(raddr(es,bp+di)), bl));	// 38449                  mov     es:[bp+di], bl ;~ 0848:1114
cs=0x848;eip=0x001117; 	T(ADD(bp, ax));	// 38450                  add     bp, ax ;~ 0848:1117
cs=0x848;eip=0x001119; 	T(CMP(bp, 0x0FF));	// 38451                  cmp     bp, 0FFh ;~ 0848:1119
cs=0x848;eip=0x00111d; 	J(JBE(loc_1f0e4));	// 38452                  jbe     short loc_1F0E4 ;~ 0848:111D
cs=0x848;eip=0x00111f; 	T(DEC(bx));	// 38453                  dec     bx ;~ 0848:111F
cs=0x848;eip=0x001120; 	J(JGE(loc_1f0d1));	// 38454                  jge     short loc_1F0D1 ;~ 0848:1120
cs=0x848;eip=0x001122; 	X(POP(si));	// 38455                  pop     si ;~ 0848:1122
cs=0x848;eip=0x001123; 	X(POP(di));	// 38456                  pop     di ;~ 0848:1123
cs=0x848;eip=0x001124; 	X(POP(bp));	// 38457                  pop     bp ;~ 0848:1124
cs=0x848;eip=0x001125; 	J(RETN(0));	// 38458                  retn ;~ 0848:1125

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1f0d1: 	goto loc_1f0d1;
        case m2c::kloc_1f0e4: 	goto loc_1f0e4;
        case m2c::ksub_1f0c1: 	goto sub_1f0c1;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1f0f7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1f0f7:
    _begin:
cs=0x848;eip=0x001127; 	X(PUSH(bp));	// 38468                  push    bp ;~ 0848:1127
cs=0x848;eip=0x001128; 	X(PUSH(di));	// 38469                  push    di ;~ 0848:1128
cs=0x848;eip=0x001129; 	X(PUSH(si));	// 38470                  push    si ;~ 0848:1129
cs=0x848;eip=0x00112a; 	X(PUSH(ds));	// 38471                  push    ds ;~ 0848:112A
cs=0x848;eip=0x00112b; 	T(LDS(si, dword_6b860));	// 38472                  lds     si, dword_6B860 ;~ 0848:112B
cs=0x848;eip=0x00112f; 	T(dx = 0x0FF;);	// 38474                  mov     dx, 0FFh ;~ 0848:112F
cs=0x848;eip=0x001132; 	T(bx = dx;);	// 38475                  mov     bx, dx ;~ 0848:1132
loc_1f104:
	// 6576 
cs=0x848;eip=0x001134; 	T(SHL(bx, 1));	// 38478                  shl     bx, 1 ;~ 0848:1134
cs=0x848;eip=0x001136; 	T(MOV(di, *(dw*)(raddr(cs,bx+0x25A))));	// 38479                  mov     di, cs:[bx+25Ah] ;~ 0848:1136
cs=0x848;eip=0x00113b; 	T(SHR(bx, 1));	// 38480                  shr     bx, 1 ;~ 0848:113B
cs=0x848;eip=0x00113d; 	T(XOR(cl, cl));	// 38481                  xor     cl, cl ;~ 0848:113D
cs=0x848;eip=0x00113f; 	T(bp = 0x2C1E;);	// 38482                  mov     bp, 2C1Eh ;~ 0848:113F
cs=0x848;eip=0x001142; 	T(MOV(al, *(raddr(ds,bx+si+0x2F9E))));	// 38483                  mov     al, [bx+si+2F9Eh] ;~ 0848:1142
cs=0x848;eip=0x001146; 	T(CMP(al, 8));	// 38484                  cmp     al, 8 ;~ 0848:1146
cs=0x848;eip=0x001148; 	J(JBE(loc_1f142));	// 38485                  jbe     short loc_1F142 ;~ 0848:1148
cs=0x848;eip=0x00114a; 	T(TEST(di, dx));	// 38486                  test    di, dx ;~ 0848:114A
cs=0x848;eip=0x00114c; 	J(JZ(loc_1f13d));	// 38487                  jz      short loc_1F13D ;~ 0848:114C
cs=0x848;eip=0x00114e; 	T(bp = di;);	// 38488                  mov     bp, di ;~ 0848:114E
cs=0x848;eip=0x001150; 	T(AND(bp, dx));	// 38489                  and     bp, dx ;~ 0848:1150
cs=0x848;eip=0x001152; 	X(MOV(*(raddr(ds,bp+si+0x2C1E)), dl));	// 38490                  mov     ds:[bp+si+2C1Eh], dl ;~ 0848:1152
cs=0x848;eip=0x001157; 	T(cl = 4;);	// 38491                  mov     cl, 4 ;~ 0848:1157
cs=0x848;eip=0x001159; 	T(bp = 0x2D1E;);	// 38492                  mov     bp, 2D1Eh ;~ 0848:1159
cs=0x848;eip=0x00115c; 	T(TEST(di, 0x3F));	// 38493                  test    di, 3Fh ;~ 0848:115C
cs=0x848;eip=0x001160; 	J(JNZ(loc_1f142));	// 38494                  jnz     short loc_1F142 ;~ 0848:1160
cs=0x848;eip=0x001162; 	T(cl = 6;);	// 38495                  mov     cl, 6 ;~ 0848:1162
cs=0x848;eip=0x001164; 	T(bp = 0x2E1E;);	// 38496                  mov     bp, 2E1Eh ;~ 0848:1164
cs=0x848;eip=0x001167; 	T(dx = 0x7F;);	// 38497                  mov     dx, 7Fh ;~ 0848:1167
cs=0x848;eip=0x00116a; 	J(JMP(loc_1f142));	// 38498                  jmp     short loc_1F142 ;~ 0848:116A
loc_1f13d:
	// 6577 
cs=0x848;eip=0x00116d; 	T(cl = 8;);	// 38504                  mov     cl, 8 ;~ 0848:116D
cs=0x848;eip=0x00116f; 	T(bp = 0x2E9E;);	// 38505                  mov     bp, 2E9Eh ;~ 0848:116F
loc_1f142:
	// 6578 
cs=0x848;eip=0x001172; 	T(SHR(di, cl));	// 38509                  shr     di, cl ;~ 0848:1172
cs=0x848;eip=0x001174; 	T(SUB(al, cl));	// 38510                  sub     al, cl ;~ 0848:1174
cs=0x848;eip=0x001176; 	X(MOV(*(raddr(ds,bx+si+0x2F9E)), al));	// 38511                  mov     [bx+si+2F9Eh], al ;~ 0848:1176
cs=0x848;eip=0x00117a; 	T(XCHG(ax, cx));	// 38512                  xchg    ax, cx ;~ 0848:117A
cs=0x848;eip=0x00117b; 	T(ax = 1;);	// 38513                  mov     ax, 1 ;~ 0848:117B
cs=0x848;eip=0x00117e; 	T(SHL(ax, cl));	// 38514                  shl     ax, cl ;~ 0848:117E
cs=0x848;eip=0x001180; 	T(ADD(bp, si));	// 38515                  add     bp, si ;~ 0848:1180
loc_1f152:
	// 6579 
cs=0x848;eip=0x001182; 	X(MOV(*(raddr(ds,bp+di)), bl));	// 38518                  mov     ds:[bp+di], bl ;~ 0848:1182
cs=0x848;eip=0x001185; 	T(ADD(di, ax));	// 38519                  add     di, ax ;~ 0848:1185
cs=0x848;eip=0x001187; 	T(CMP(di, dx));	// 38520                  cmp     di, dx ;~ 0848:1187
cs=0x848;eip=0x001189; 	J(JBE(loc_1f152));	// 38521                  jbe     short loc_1F152 ;~ 0848:1189
cs=0x848;eip=0x00118b; 	T(dx = 0x0FF;);	// 38522                  mov     dx, 0FFh ;~ 0848:118B
cs=0x848;eip=0x00118e; 	T(DEC(bx));	// 38523                  dec     bx ;~ 0848:118E
cs=0x848;eip=0x00118f; 	J(JGE(loc_1f104));	// 38524                  jge     short loc_1F104 ;~ 0848:118F
cs=0x848;eip=0x001191; 	X(POP(ds));	// 38525                  pop     ds ;~ 0848:1191
cs=0x848;eip=0x001192; 	X(POP(si));	// 38526                  pop     si ;~ 0848:1192
cs=0x848;eip=0x001193; 	X(POP(di));	// 38527                  pop     di ;~ 0848:1193
cs=0x848;eip=0x001194; 	X(POP(bp));	// 38528                  pop     bp ;~ 0848:1194
cs=0x848;eip=0x001195; 	J(RETN(0));	// 38529                  retn ;~ 0848:1195

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1f104: 	goto loc_1f104;
        case m2c::kloc_1f13d: 	goto loc_1f13d;
        case m2c::kloc_1f142: 	goto loc_1f142;
        case m2c::kloc_1f152: 	goto loc_1f152;
        case m2c::ksub_1f0f7: 	goto sub_1f0f7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}


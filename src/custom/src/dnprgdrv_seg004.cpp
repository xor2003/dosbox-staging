/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "dnprgdrv.h"

                

 bool _group4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group4:
    _begin:
seg004_100_proc:
	// 127561 
loc_5ce10:
	// 8598 
cs=0x4e73;eip=0x000100; 	R(JMP(loc_5cfe8));	// 127562 jmp     loc_5CFE8 ;~ 4E73:0100
ret_4e73_103:
	// 8599 
cs=0x4e73;eip=0x000103; 	R(JMP(loc_5d0c2));	// 127564 jmp     loc_5D0C2 ;~ 4E73:0103
ret_4e73_106:
	// 8600 
cs=0x4e73;eip=0x000106; 	R(JMP(sub_5d00e));	// 127566 jmp     near ptr sub_5D00E ;~ 4E73:0106
ret_4e73_109:
	// 8601 
cs=0x4e73;eip=0x000109; 	R(JMP(loc_5d0ac));	// 127568 jmp     loc_5D0AC ;~ 4E73:0109
ret_4e73_10c:
	// 8602 
cs=0x4e73;eip=0x00010c; 	R(JMP(loc_5d06b));	// 127570 jmp     loc_5D06B ;~ 4E73:010C
ret_4e73_10f:
	// 8603 
cs=0x4e73;eip=0x00010f; 	R(JMP(loc_5d183));	// 127572 jmp     loc_5D183 ;~ 4E73:010F
ret_4e73_112:
	// 8604 
cs=0x4e73;eip=0x000112; 	R(JMP(loc_5d058));	// 127574 jmp     loc_5D058 ;~ 4E73:0112
sub_5cfc5:
	// 127618 
cs=0x4e73;eip=0x0002b5; 	X(PUSH(ss));	// 127619 push    ss ;~ 4E73:02B5
ret_4e73_2b6:
	// 8605 
cs=0x4e73;eip=0x0002b6; 	X(POP(es));	// 127620 pop     es ;~ 4E73:02B6
cs=0x4e73;eip=0x0002b7; 	T(MOV(si, bp));	// 127621 mov     si, bp ;~ 4E73:02B7
loc_5cfc9:
	// 8606 
cs=0x4e73;eip=0x0002b9; 	X(LODS(*(dw*)(raddr(es,si)),si,2));	// 127624 lods    word ptr es:[si] ;~ 4E73:02B9
cs=0x4e73;eip=0x0002bb; 	T(ADD(ax, 2));	// 127625 add     ax, 2 ;~ 4E73:02BB
cs=0x4e73;eip=0x0002be; 	T(MOV(di, ax));	// 127626 mov     di, ax ;~ 4E73:02BE
cs=0x4e73;eip=0x0002c0; 	X(PUSH(cx));	// 127627 push    cx ;~ 4E73:02C0
cs=0x4e73;eip=0x0002c1; 	T(MOV(cx, 9));	// 127628 mov     cx, 9 ;~ 4E73:02C1
cs=0x4e73;eip=0x0002c4; 	T(MOV(al, 0x2E));	// 127629 mov     al, 2Eh ; '.' ;~ 4E73:02C4
	// 127630 repne scasb ;~ 4E73:02C6
cs=0x4e73;eip=0x0002c6; 	T(	REPNE SCASB);	// 127630 repne scasb ;~ 4E73:02C6
cs=0x4e73;eip=0x0002c8; 	X(POP(cx));	// 127631 pop     cx ;~ 4E73:02C8
cs=0x4e73;eip=0x0002c9; 	R(JNZ(loc_5cfe5));	// 127632 jnz     short loc_5CFE5 ;~ 4E73:02C9
	cs=seg_offset(seg004);
cs=0x4e73;eip=0x0002cb; 	T(MOV(ax, *(dw*)(((db*)&word_5cfc0))));	// 127633 mov     ax, cs:word_5CFC0 ;~ 4E73:02CB
cs=0x4e73;eip=0x0002cf; 	X(STOSW);	// 127634 stosw ;~ 4E73:02CF
	cs=seg_offset(seg004);
cs=0x4e73;eip=0x0002d0; 	T(MOV(al, *(&byte_5cfc2)));	// 127635 mov     al, cs:byte_5CFC2 ;~ 4E73:02D0
cs=0x4e73;eip=0x0002d4; 	X(STOSB);	// 127636 stosb ;~ 4E73:02D4
loc_5cfe5:
	// 8607 
cs=0x4e73;eip=0x0002d5; 	R(LOOP(loc_5cfc9));	// 127639 loop    loc_5CFC9 ;~ 4E73:02D5
cs=0x4e73;eip=0x0002d7; 	R(RETN(0));	// 127640 retn ;~ 4E73:02D7
seg004_2d8_proc:
	// 127645 
loc_5cfe8:
	// 8608 
cs=0x4e73;eip=0x0002d8; 	T(AND(ax, 0x0FFF));	// 127646 and     ax, 0FFFh ;~ 4E73:02D8
cs=0x4e73;eip=0x0002db; 	R(JZ(loc_5cff1));	// 127647 jz      short loc_5CFF1 ;~ 4E73:02DB
	cs=seg_offset(seg004);
cs=0x4e73;eip=0x0002dd; 	X(MOV(*(dw*)(((db*)&word_5cfc3)), ax));	// 127648 mov     cs:word_5CFC3, ax ;~ 4E73:02DD
loc_5cff1:
	// 8609 
cs=0x4e73;eip=0x0002e1; 	R(CALL(sub_5cfc5,0));	// 127651 call    sub_5CFC5 ;~ 4E73:02E1
cs=0x4e73;eip=0x0002e4; 	T(MOV(ax, 0x2001));	// 127652 mov     ax, 2001h ;~ 4E73:02E4
cs=0x4e73;eip=0x0002e7; 	R(CALL(sub_5d7b2,0));	// 127653 call    sub_5D7B2 ;~ 4E73:02E7
cs=0x4e73;eip=0x0002ea; 	T(MOV(ax, 0x0BD));	// 127654 mov     ax, 0BDh ; '½' ;~ 4E73:02EA
cs=0x4e73;eip=0x0002ed; 	R(CALL(sub_5d7b2,0));	// 127655 call    sub_5D7B2 ;~ 4E73:02ED
cs=0x4e73;eip=0x0002f0; 	T(MOV(ax, 0x4008));	// 127656 mov     ax, 4008h ;~ 4E73:02F0
cs=0x4e73;eip=0x0002f3; 	R(CALL(sub_5d7b2,0));	// 127657 call    sub_5D7B2 ;~ 4E73:02F3
cs=0x4e73;eip=0x0002f6; 	X(PUSH(cs));	// 127658 push    cs ;~ 4E73:02F6
cs=0x4e73;eip=0x0002f7; 	R(CALL(sub_5d00e,0));	// 127659 call    near ptr sub_5D00E ;~ 4E73:02F7
cs=0x4e73;eip=0x0002fa; 	T(MOV(bx, 0x0F00));	// 127660 mov     bx, 0F00h ;~ 4E73:02FA
cs=0x4e73;eip=0x0002fd; 	R(RETF(0));	// 127661 retf ;~ 4E73:02FD
sub_5d00e:
	// 127666 
cs=0x4e73;eip=0x0002fe; 	X(PUSHF);	// 127668 pushf ;~ 4E73:02FE
ret_4e73_2ff:
	// 8610 
cs=0x4e73;eip=0x0002ff; 	T(CLI);	// 127669 cli ;~ 4E73:02FF
cs=0x4e73;eip=0x000300; 	R(CALL(sub_5d62b,0));	// 127670 call    sub_5D62B ;~ 4E73:0300
cs=0x4e73;eip=0x000303; 	T(XOR(ax, ax));	// 127671 xor     ax, ax ;~ 4E73:0303
	cs=seg_offset(seg004);
cs=0x4e73;eip=0x000305; 	X(MOV(*(&byte_5ceaa), al));	// 127672 mov     cs:byte_5CEAA, al ;~ 4E73:0305
cs=0x4e73;eip=0x000309; 	X(POPF);	// 127673 popf ;~ 4E73:0309
cs=0x4e73;eip=0x00030a; 	R(RETF(0));	// 127674 retf ;~ 4E73:030A
sub_5d01b:
	// 127681 
cs=0x4e73;eip=0x00030b; 	X(PUSH(bx));	// 127683 push    bx ;~ 4E73:030B
ret_4e73_30c:
	// 8611 
cs=0x4e73;eip=0x00030c; 	X(PUSH(dx));	// 127684 push    dx ;~ 4E73:030C
cs=0x4e73;eip=0x00030d; 	T(SHR(al, 1));	// 127685 shr     al, 1 ;~ 4E73:030D
cs=0x4e73;eip=0x00030f; 	T(SHR(al, 1));	// 127686 shr     al, 1 ;~ 4E73:030F
cs=0x4e73;eip=0x000311; 	T(SHR(al, 1));	// 127687 shr     al, 1 ;~ 4E73:0311
cs=0x4e73;eip=0x000313; 	T(MOV(dx, ax));	// 127688 mov     dx, ax ;~ 4E73:0313
cs=0x4e73;eip=0x000315; 	T(MOV(bx, 0x0F078));	// 127689 mov     bx, 0F078h ;~ 4E73:0315
cs=0x4e73;eip=0x000318; 	T(CMP(ah, bl));	// 127690 cmp     ah, bl ;~ 4E73:0318
cs=0x4e73;eip=0x00031a; 	R(JBE(loc_5d02e));	// 127691 jbe     short loc_5D02E ;~ 4E73:031A
cs=0x4e73;eip=0x00031c; 	T(MOV(ah, bl));	// 127692 mov     ah, bl ;~ 4E73:031C
loc_5d02e:
	// 8612 
cs=0x4e73;eip=0x00031e; 	T(XOR(al, al));	// 127695 xor     al, al ;~ 4E73:031E
cs=0x4e73;eip=0x000320; 	T(DIV1(bh));	// 127696 div     bh ;~ 4E73:0320
cs=0x4e73;eip=0x000322; 	T(MUL1_1(dl));	// 127697 mul     dl ;~ 4E73:0322
cs=0x4e73;eip=0x000324; 	T(XCHG(ah, dh));	// 127698 xchg    ah, dh ;~ 4E73:0324
cs=0x4e73;eip=0x000326; 	T(SUB(ah, bh));	// 127699 sub     ah, bh ;~ 4E73:0326
cs=0x4e73;eip=0x000328; 	T(NEG(ah));	// 127700 neg     ah ;~ 4E73:0328
cs=0x4e73;eip=0x00032a; 	T(CMP(ah, bl));	// 127701 cmp     ah, bl ;~ 4E73:032A
cs=0x4e73;eip=0x00032c; 	R(JBE(loc_5d040));	// 127702 jbe     short loc_5D040 ;~ 4E73:032C
cs=0x4e73;eip=0x00032e; 	T(MOV(ah, bl));	// 127703 mov     ah, bl ;~ 4E73:032E
loc_5d040:
	// 8613 
cs=0x4e73;eip=0x000330; 	T(XOR(al, al));	// 127706 xor     al, al ;~ 4E73:0330
cs=0x4e73;eip=0x000332; 	T(DIV1(bh));	// 127707 div     bh ;~ 4E73:0332
cs=0x4e73;eip=0x000334; 	T(MUL1_1(dl));	// 127708 mul     dl ;~ 4E73:0334
cs=0x4e73;eip=0x000336; 	T(SHR(ax, 1));	// 127709 shr     ax, 1 ;~ 4E73:0336
cs=0x4e73;eip=0x000338; 	T(SHR(ax, 1));	// 127710 shr     ax, 1 ;~ 4E73:0338
cs=0x4e73;eip=0x00033a; 	T(SHR(ax, 1));	// 127711 shr     ax, 1 ;~ 4E73:033A
cs=0x4e73;eip=0x00033c; 	T(SHR(ax, 1));	// 127712 shr     ax, 1 ;~ 4E73:033C
cs=0x4e73;eip=0x00033e; 	T(MOV(ah, dh));	// 127713 mov     ah, dh ;~ 4E73:033E
cs=0x4e73;eip=0x000340; 	T(AND(ax, 0x0FF0));	// 127714 and     ax, 0FF0h ;~ 4E73:0340
cs=0x4e73;eip=0x000343; 	T(OR(al, ah));	// 127715 or      al, ah ;~ 4E73:0343
cs=0x4e73;eip=0x000345; 	X(POP(dx));	// 127716 pop     dx ;~ 4E73:0345
cs=0x4e73;eip=0x000346; 	X(POP(bx));	// 127717 pop     bx ;~ 4E73:0346
cs=0x4e73;eip=0x000347; 	R(RETN(0));	// 127718 retn ;~ 4E73:0347
seg004_348_proc:
	// 127723 
loc_5d058:
	// 8614 
cs=0x4e73;eip=0x000348; 	R(CALL(sub_5d01b,0));	// 127724 call    sub_5D01B ;~ 4E73:0348
	cs=seg_offset(seg004);
cs=0x4e73;eip=0x00034b; 	X(MOV(*(&byte_5ceae), al));	// 127725 mov     cs:byte_5CEAE, al ;~ 4E73:034B
	cs=seg_offset(seg004);
cs=0x4e73;eip=0x00034f; 	X(MOV(*(&byte_5cead), al));	// 127726 mov     cs:byte_5CEAD, al ;~ 4E73:034F
	cs=seg_offset(seg004);
cs=0x4e73;eip=0x000353; 	X(MOV(*(dw*)(((db*)&word_5ceaf)), 0x0FFFF));	// 127727 mov     cs:word_5CEAF, 0FFFFh ;~ 4E73:0353
cs=0x4e73;eip=0x00035a; 	R(RETF(0));	// 127728 retf ;~ 4E73:035A
loc_5d06b:
	// 8615 
cs=0x4e73;eip=0x00035b; 	X(PUSH(ax));	// 127732 push    ax ;~ 4E73:035B
cs=0x4e73;eip=0x00035c; 	T(MOV(ax, bx));	// 127733 mov     ax, bx ;~ 4E73:035C
cs=0x4e73;eip=0x00035e; 	R(CALL(sub_5d01b,0));	// 127734 call    sub_5D01B ;~ 4E73:035E
	cs=seg_offset(seg004);
cs=0x4e73;eip=0x000361; 	X(MOV(*(&byte_5cead), al));	// 127735 mov     cs:byte_5CEAD, al ;~ 4E73:0361
cs=0x4e73;eip=0x000365; 	X(POP(ax));	// 127736 pop     ax ;~ 4E73:0365
cs=0x4e73;eip=0x000366; 	T(MOV(bx, 0x0FFFF));	// 127737 mov     bx, 0FFFFh ;~ 4E73:0366
cs=0x4e73;eip=0x000369; 	T(CMP(ax, 0x60));	// 127738 cmp     ax, 60h ; '`' ;~ 4E73:0369
cs=0x4e73;eip=0x00036c; 	R(JC(loc_5d098));	// 127739 jb      short loc_5D098 ;~ 4E73:036C
cs=0x4e73;eip=0x00036e; 	T(MOV(bx, 0x0AAAA));	// 127740 mov     bx, 0AAAAh ;~ 4E73:036E
cs=0x4e73;eip=0x000371; 	T(CMP(ax, 0x0C0));	// 127741 cmp     ax, 0C0h ; 'À' ;~ 4E73:0371
cs=0x4e73;eip=0x000374; 	R(JC(loc_5d098));	// 127742 jb      short loc_5D098 ;~ 4E73:0374
cs=0x4e73;eip=0x000376; 	T(MOV(bx, 0x8888));	// 127743 mov     bx, 8888h ;~ 4E73:0376
cs=0x4e73;eip=0x000379; 	T(CMP(ax, 0x180));	// 127744 cmp     ax, 180h ;~ 4E73:0379
cs=0x4e73;eip=0x00037c; 	R(JC(loc_5d098));	// 127745 jb      short loc_5D098 ;~ 4E73:037C
cs=0x4e73;eip=0x00037e; 	T(MOV(bx, 0x8080));	// 127746 mov     bx, 8080h ;~ 4E73:037E
cs=0x4e73;eip=0x000381; 	T(CMP(ax, 0x300));	// 127747 cmp     ax, 300h ;~ 4E73:0381
cs=0x4e73;eip=0x000384; 	R(JC(loc_5d098));	// 127748 jb      short loc_5D098 ;~ 4E73:0384
cs=0x4e73;eip=0x000386; 	T(XOR(bl, bl));	// 127749 xor     bl, bl ;~ 4E73:0386
loc_5d098:
	// 8616 
	cs=seg_offset(seg004);
cs=0x4e73;eip=0x000388; 	X(MOV(*(dw*)(((db*)&word_5ceaf)), bx));	// 127753 mov     cs:word_5CEAF, bx ;~ 4E73:0388
	cs=seg_offset(seg004);
cs=0x4e73;eip=0x00038d; 	T(MOV(al, *(&byte_5ceaa)));	// 127754 mov     al, cs:byte_5CEAA ;~ 4E73:038D
cs=0x4e73;eip=0x000391; 	T(OR(al, al));	// 127755 or      al, al ;~ 4E73:0391
cs=0x4e73;eip=0x000393; 	R(JNS(locret_5d0ab));	// 127756 jns     short locret_5D0AB ;~ 4E73:0393
cs=0x4e73;eip=0x000395; 	T(OR(al, 0x40));	// 127757 or      al, 40h ;~ 4E73:0395
	cs=seg_offset(seg004);
cs=0x4e73;eip=0x000397; 	X(MOV(*(&byte_5ceaa), al));	// 127758 mov     cs:byte_5CEAA, al ;~ 4E73:0397
locret_5d0ab:
	// 8617 
cs=0x4e73;eip=0x00039b; 	R(RETF(0));	// 127761 retf ;~ 4E73:039B
loc_5d0ac:
	// 8618 
	cs=seg_offset(seg004);
cs=0x4e73;eip=0x00039c; 	X(MOV(*(&byte_5ceab), 1));	// 127765 mov     cs:byte_5CEAB, 1 ;~ 4E73:039C
	cs=seg_offset(seg004);
cs=0x4e73;eip=0x0003a2; 	T(MOV(al, *(&byte_5ceaa)));	// 127766 mov     al, cs:byte_5CEAA ;~ 4E73:03A2
cs=0x4e73;eip=0x0003a6; 	R(RETF(0));	// 127767 retf ;~ 4E73:03A6
loc_5d0c2:
	// 8619 
cs=0x4e73;eip=0x0003b2; 	X(PUSH(ds));	// 127774 push    ds ;~ 4E73:03B2
cs=0x4e73;eip=0x0003b3; 	X(PUSH(cs));	// 127775 push    cs ;~ 4E73:03B3
cs=0x4e73;eip=0x0003b4; 	X(POP(ds));	// 127776 pop     ds ;~ 4E73:03B4
cs=0x4e73;eip=0x0003b5; 	X(MOV(byte_5ceab, al));	// 127778 mov     byte_5CEAB, al ;~ 4E73:03B5
cs=0x4e73;eip=0x0003b8; 	T(MOV(ax, *(dw*)(raddr(es,si))));	// 127779 mov     ax, es:[si] ;~ 4E73:03B8
cs=0x4e73;eip=0x0003bb; 	T(MOV(di, 0x3A8));	// 127780 mov     di, 3A8h ;~ 4E73:03BB
cs=0x4e73;eip=0x0003be; 	X(MOV(*(dw*)(raddr(ds,di)), si));	// 127781 mov     [di], si ;~ 4E73:03BE
cs=0x4e73;eip=0x0003c0; 	X(MOV(*(dw*)(raddr(ds,di+2)), es));	// 127782 mov     word ptr [di+2], es ;~ 4E73:03C0
cs=0x4e73;eip=0x0003c3; 	X(MOV(*(dw*)(raddr(ds,di+4)), ax));	// 127783 mov     [di+4], ax ;~ 4E73:03C3
cs=0x4e73;eip=0x0003c6; 	T(MOV(ax, *(dw*)(raddr(es,si+0x4000))));	// 127784 mov     ax, es:[si+4000h] ;~ 4E73:03C6
cs=0x4e73;eip=0x0003cb; 	X(MOV(*(dw*)(raddr(ds,di+6)), ax));	// 127785 mov     [di+6], ax ;~ 4E73:03CB
cs=0x4e73;eip=0x0003ce; 	T(MOV(ax, *(dw*)(raddr(es,si-0x8000))));	// 127786 mov     ax, es:[si-8000h] ;~ 4E73:03CE
cs=0x4e73;eip=0x0003d3; 	X(MOV(*(dw*)(raddr(ds,di+8)), ax));	// 127787 mov     [di+8], ax ;~ 4E73:03D3
cs=0x4e73;eip=0x0003d6; 	T(ADD(si, 2));	// 127788 add     si, 2 ;~ 4E73:03D6
cs=0x4e73;eip=0x0003d9; 	X(MOV(word_5ce25, si));	// 127789 mov     word_5CE25, si ;~ 4E73:03D9
cs=0x4e73;eip=0x0003dd; 	X(MOV(word_5ce27, es));	// 127790 mov     word_5CE27, es ;~ 4E73:03DD
cs=0x4e73;eip=0x0003e1; 	T(SUB(si, 2));	// 127791 sub     si, 2 ;~ 4E73:03E1
cs=0x4e73;eip=0x0003e4; 	T(ADD(si, *(dw*)(raddr(es,si))));	// 127792 add     si, es:[si] ;~ 4E73:03E4
cs=0x4e73;eip=0x0003e7; 	X(MOV(word_5ce29, si));	// 127793 mov     word_5CE29, si ;~ 4E73:03E7
cs=0x4e73;eip=0x0003eb; 	X(MOV(word_5ce2b, es));	// 127794 mov     word_5CE2B, es ;~ 4E73:03EB
cs=0x4e73;eip=0x0003ef; 	R(CALL(sub_5d6aa,0));	// 127795 call    sub_5D6AA ;~ 4E73:03EF
cs=0x4e73;eip=0x0003f2; 	R(CALL(sub_5d123,0));	// 127796 call    sub_5D123 ;~ 4E73:03F2
cs=0x4e73;eip=0x0003f5; 	T(MOV(al, byte_5ceae));	// 127797 mov     al, byte_5CEAE ;~ 4E73:03F5
cs=0x4e73;eip=0x0003f8; 	X(MOV(byte_5ceac, al));	// 127798 mov     byte_5CEAC, al ;~ 4E73:03F8
cs=0x4e73;eip=0x0003fb; 	R(CALL(sub_5d692,0));	// 127799 call    sub_5D692 ;~ 4E73:03FB
cs=0x4e73;eip=0x0003fe; 	X(MOV(byte_5cead, al));	// 127800 mov     byte_5CEAD, al ;~ 4E73:03FE
cs=0x4e73;eip=0x000401; 	T(XOR(ax, ax));	// 127801 xor     ax, ax ;~ 4E73:0401
cs=0x4e73;eip=0x000403; 	X(MOV(word_5ce2d, ax));	// 127802 mov     word_5CE2D, ax ;~ 4E73:0403
cs=0x4e73;eip=0x000406; 	X(MOV(word_5ce33, ax));	// 127803 mov     word_5CE33, ax ;~ 4E73:0406
cs=0x4e73;eip=0x000409; 	R(CALL(sub_5d1e3,0));	// 127804 call    sub_5D1E3 ;~ 4E73:0409
cs=0x4e73;eip=0x00040c; 	T(MOV(al, 0x80));	// 127805 mov     al, 80h ; '€' ;~ 4E73:040C
cs=0x4e73;eip=0x00040e; 	X(MOV(byte_5ceaa, al));	// 127806 mov     byte_5CEAA, al ;~ 4E73:040E
cs=0x4e73;eip=0x000411; 	X(POP(ds));	// 127807 pop     ds ;~ 4E73:0411
cs=0x4e73;eip=0x000412; 	R(RETF(0));	// 127809 retf ;~ 4E73:0412
sub_5d123:
	// 127814 
cs=0x4e73;eip=0x000413; 	X(PUSH(ds));	// 127815 push    ds ;~ 4E73:0413
ret_4e73_414:
	// 8620 
cs=0x4e73;eip=0x000414; 	X(PUSH(ds));	// 127816 push    ds ;~ 4E73:0414
cs=0x4e73;eip=0x000415; 	X(POP(es));	// 127817 pop     es ;~ 4E73:0415
cs=0x4e73;eip=0x000416; 	T(LDS(si, *(dw*)(raddr(ds,0x115))));	// 127818 lds     si, ds:115h ;~ 4E73:0416
cs=0x4e73;eip=0x00041a; 	T(MOV(bp, si));	// 127819 mov     bp, si ;~ 4E73:041A
cs=0x4e73;eip=0x00041c; 	T(MOV(di, 0x1C6));	// 127820 mov     di, 1C6h ;~ 4E73:041C
cs=0x4e73;eip=0x00041f; 	T(MOV(cx, 9));	// 127821 mov     cx, 9 ;~ 4E73:041F
loc_5d132:
	// 8621 
cs=0x4e73;eip=0x000422; 	T(LODSW);	// 127824 lodsw ;~ 4E73:0422
cs=0x4e73;eip=0x000423; 	T(OR(ax, ax));	// 127825 or      ax, ax ;~ 4E73:0423
cs=0x4e73;eip=0x000425; 	R(JZ(loc_5d139));	// 127826 jz      short loc_5D139 ;~ 4E73:0425
cs=0x4e73;eip=0x000427; 	T(ADD(ax, bp));	// 127827 add     ax, bp ;~ 4E73:0427
loc_5d139:
	// 8622 
cs=0x4e73;eip=0x000429; 	X(STOSW);	// 127830 stosw ;~ 4E73:0429
cs=0x4e73;eip=0x00042a; 	R(LOOP(loc_5d132));	// 127831 loop    loc_5D132 ;~ 4E73:042A
cs=0x4e73;eip=0x00042c; 	T(MOV(di, 0x1D8));	// 127832 mov     di, 1D8h ;~ 4E73:042C
cs=0x4e73;eip=0x00042f; 	T(MOV(cl, 9));	// 127833 mov     cl, 9 ;~ 4E73:042F
cs=0x4e73;eip=0x000431; 	T(MOV(ax, 0x0FF));	// 127834 mov     ax, 0FFh ;~ 4E73:0431
	// 127835 rep stosw ;~ 4E73:0434
cs=0x4e73;eip=0x000434; 	X(	REP STOSW);	// 127835 rep stosw ;~ 4E73:0434
cs=0x4e73;eip=0x000436; 	T(MOV(di, 0x1FC));	// 127836 mov     di, 1FCh ;~ 4E73:0436
cs=0x4e73;eip=0x000439; 	T(MOV(cl, 9));	// 127837 mov     cl, 9 ;~ 4E73:0439
cs=0x4e73;eip=0x00043b; 	T(XOR(ax, ax));	// 127838 xor     ax, ax ;~ 4E73:043B
	// 127839 rep stosw ;~ 4E73:043D
cs=0x4e73;eip=0x00043d; 	X(	REP STOSW);	// 127839 rep stosw ;~ 4E73:043D
cs=0x4e73;eip=0x00043f; 	X(POP(ds));	// 127840 pop     ds ;~ 4E73:043F
cs=0x4e73;eip=0x000440; 	T(LES(si, *(dw*)(raddr(ds,0x115))));	// 127841 les     si, ds:115h ;~ 4E73:0440
loc_5d154:
	// 8623 
cs=0x4e73;eip=0x000444; 	X(MOV(*(dw*)(raddr(ds,0x11F)), 1));	// 127844 mov     word ptr ds:11Fh, 1 ;~ 4E73:0444
cs=0x4e73;eip=0x00044a; 	X(MOV(*(dw*)(raddr(ds,0x121)), 0x60));	// 127845 mov     word ptr ds:121h, 60h ; '`' ;~ 4E73:044A
cs=0x4e73;eip=0x000450; 	T(MOV(cx, 9));	// 127846 mov     cx, 9 ;~ 4E73:0450
cs=0x4e73;eip=0x000453; 	T(MOV(di, 0x1A2));	// 127847 mov     di, 1A2h ;~ 4E73:0453
loc_5d166:
	// 8624 
cs=0x4e73;eip=0x000456; 	T(MOV(si, *(dw*)(raddr(ds,di+0x24))));	// 127850 mov     si, [di+24h] ;~ 4E73:0456
cs=0x4e73;eip=0x000459; 	X(MOV(*(dw*)(raddr(ds,di+0x12)), si));	// 127851 mov     [di+12h], si ;~ 4E73:0459
cs=0x4e73;eip=0x00045c; 	X(MOV(*(dw*)(raddr(ds,di)), 0x0FFFF));	// 127852 mov     word ptr [di], 0FFFFh ;~ 4E73:045C
cs=0x4e73;eip=0x000460; 	T(OR(si, si));	// 127853 or      si, si ;~ 4E73:0460
cs=0x4e73;eip=0x000462; 	R(JZ(loc_5d17d));	// 127854 jz      short loc_5D17D ;~ 4E73:0462
cs=0x4e73;eip=0x000464; 	T(MOV(ax, cx));	// 127855 mov     ax, cx ;~ 4E73:0464
cs=0x4e73;eip=0x000466; 	R(CALL(sub_5d5f1,0));	// 127856 call    sub_5D5F1 ;~ 4E73:0466
cs=0x4e73;eip=0x000469; 	X(INC(*(dw*)(raddr(ds,di))));	// 127857 inc     word ptr [di] ;~ 4E73:0469
cs=0x4e73;eip=0x00046b; 	T(MOV(cx, ax));	// 127858 mov     cx, ax ;~ 4E73:046B
loc_5d17d:
	// 8625 
cs=0x4e73;eip=0x00046d; 	T(ADD(di, 2));	// 127861 add     di, 2 ;~ 4E73:046D
cs=0x4e73;eip=0x000470; 	R(LOOP(loc_5d166));	// 127862 loop    loc_5D166 ;~ 4E73:0470
cs=0x4e73;eip=0x000472; 	R(RETN(0));	// 127863 retn ;~ 4E73:0472
seg004_473_proc:
	// 127868 
loc_5d183:
	// 8626 
cs=0x4e73;eip=0x000473; 	X(PUSH(ds));	// 127869 push    ds ;~ 4E73:0473
cs=0x4e73;eip=0x000474; 	T(MOV(ax, cs));	// 127870 mov     ax, cs ;~ 4E73:0474
cs=0x4e73;eip=0x000476; 	T(MOV(ds, ax));	// 127871 mov     ds, ax ;~ 4E73:0476
cs=0x4e73;eip=0x000478; 	T(CMP(byte_5ceaa, 0));	// 127873 cmp     byte_5CEAA, 0 ;~ 4E73:0478
cs=0x4e73;eip=0x00047d; 	R(JNS(loc_5d1b0));	// 127874 jns     short loc_5D1B0 ;~ 4E73:047D
cs=0x4e73;eip=0x00047f; 	X(DEC(*(db*)(((db*)&word_5ce2d)+1)));	// 127875 dec     byte ptr word_5CE2D+1 ;~ 4E73:047F
cs=0x4e73;eip=0x000483; 	R(JNS(loc_5d1a7));	// 127876 jns     short loc_5D1A7 ;~ 4E73:0483
cs=0x4e73;eip=0x000485; 	R(CALL(sub_5d1bd,0));	// 127877 call    sub_5D1BD ;~ 4E73:0485
cs=0x4e73;eip=0x000488; 	R(JNZ(loc_5d1b0));	// 127878 jnz     short loc_5D1B0 ;~ 4E73:0488
cs=0x4e73;eip=0x00048a; 	X(PUSH(dx));	// 127879 push    dx ;~ 4E73:048A
cs=0x4e73;eip=0x00048b; 	X(PUSH(si));	// 127880 push    si ;~ 4E73:048B
cs=0x4e73;eip=0x00048c; 	X(PUSH(di));	// 127881 push    di ;~ 4E73:048C
cs=0x4e73;eip=0x00048d; 	X(PUSH(bp));	// 127882 push    bp ;~ 4E73:048D
cs=0x4e73;eip=0x00048e; 	X(PUSH(es));	// 127883 push    es ;~ 4E73:048E
cs=0x4e73;eip=0x00048f; 	R(CALL(sub_5d1e3,0));	// 127884 call    sub_5D1E3 ;~ 4E73:048F
cs=0x4e73;eip=0x000492; 	X(POP(es));	// 127885 pop     es ;~ 4E73:0492
cs=0x4e73;eip=0x000493; 	X(POP(bp));	// 127886 pop     bp ;~ 4E73:0493
cs=0x4e73;eip=0x000494; 	X(POP(di));	// 127887 pop     di ;~ 4E73:0494
cs=0x4e73;eip=0x000495; 	X(POP(si));	// 127888 pop     si ;~ 4E73:0495
cs=0x4e73;eip=0x000496; 	X(POP(dx));	// 127889 pop     dx ;~ 4E73:0496
loc_5d1a7:
	// 8627 
cs=0x4e73;eip=0x000497; 	X(ROL(word_5ceaf, 1));	// 127892 rol     word_5CEAF, 1 ;~ 4E73:0497
cs=0x4e73;eip=0x00049b; 	R(JNC(loc_5d1b0));	// 127893 jnb     short loc_5D1B0 ;~ 4E73:049B
cs=0x4e73;eip=0x00049d; 	R(CALL(sub_5d63d,0));	// 127894 call    sub_5D63D ;~ 4E73:049D
loc_5d1b0:
	// 8628 
cs=0x4e73;eip=0x0004a0; 	T(MOV(al, byte_5ceaa));	// 127898 mov     al, byte_5CEAA ;~ 4E73:04A0
cs=0x4e73;eip=0x0004a3; 	T(MOV(bx, word_5ce2f));	// 127899 mov     bx, word_5CE2F ;~ 4E73:04A3
cs=0x4e73;eip=0x0004a7; 	T(MOV(cx, word_5ce31));	// 127900 mov     cx, word_5CE31 ;~ 4E73:04A7
cs=0x4e73;eip=0x0004ab; 	X(POP(ds));	// 127901 pop     ds ;~ 4E73:04AB
cs=0x4e73;eip=0x0004ac; 	R(RETF(0));	// 127903 retf ;~ 4E73:04AC
sub_5d1bd:
	// 127908 
cs=0x4e73;eip=0x0004ad; 	X(PUSH(si));	// 127909 push    si ;~ 4E73:04AD
ret_4e73_4ae:
	// 8629 
cs=0x4e73;eip=0x0004ae; 	X(PUSH(es));	// 127910 push    es ;~ 4E73:04AE
cs=0x4e73;eip=0x0004af; 	T(LES(si, *(dw*)(raddr(ds,0x3A8))));	// 127911 les     si, ds:3A8h ;~ 4E73:04AF
cs=0x4e73;eip=0x0004b3; 	T(MOV(ax, *(dw*)(raddr(es,si))));	// 127912 mov     ax, es:[si] ;~ 4E73:04B3
cs=0x4e73;eip=0x0004b6; 	T(CMP(*(dw*)(raddr(ds,0x3AC)), ax));	// 127913 cmp     ds:3ACh, ax ;~ 4E73:04B6
cs=0x4e73;eip=0x0004ba; 	R(JNZ(loc_5d1e0));	// 127914 jnz     short loc_5D1E0 ;~ 4E73:04BA
cs=0x4e73;eip=0x0004bc; 	T(MOV(ax, *(dw*)(raddr(es,si+0x4000))));	// 127915 mov     ax, es:[si+4000h] ;~ 4E73:04BC
cs=0x4e73;eip=0x0004c1; 	T(CMP(*(dw*)(raddr(ds,0x3AE)), ax));	// 127916 cmp     ds:3AEh, ax ;~ 4E73:04C1
cs=0x4e73;eip=0x0004c5; 	R(JNZ(loc_5d1e0));	// 127917 jnz     short loc_5D1E0 ;~ 4E73:04C5
cs=0x4e73;eip=0x0004c7; 	T(MOV(ax, *(dw*)(raddr(es,si-0x8000))));	// 127918 mov     ax, es:[si-8000h] ;~ 4E73:04C7
cs=0x4e73;eip=0x0004cc; 	T(CMP(*(dw*)(raddr(ds,0x3B0)), ax));	// 127919 cmp     ds:3B0h, ax ;~ 4E73:04CC
loc_5d1e0:
	// 8630 
cs=0x4e73;eip=0x0004d0; 	X(POP(es));	// 127923 pop     es ;~ 4E73:04D0
cs=0x4e73;eip=0x0004d1; 	X(POP(si));	// 127924 pop     si ;~ 4E73:04D1
cs=0x4e73;eip=0x0004d2; 	R(RETN(0));	// 127925 retn ;~ 4E73:04D2
sub_5d1e3:
	// 127932 
cs=0x4e73;eip=0x0004d3; 	T(LES(bx, *(dw*)(raddr(ds,0x115))));	// 127934 les     bx, ds:115h ;~ 4E73:04D3
ret_4e73_4d7:
	// 8631 
cs=0x4e73;eip=0x0004d7; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x30))));	// 127935 mov     ax, es:[bx+30h] ;~ 4E73:04D7
cs=0x4e73;eip=0x0004db; 	X(ADD(*(dw*)(raddr(ds,0x11D)), ax));	// 127936 add     ds:11Dh, ax ;~ 4E73:04DB
cs=0x4e73;eip=0x0004df; 	T(MOV(di, 0x1A2));	// 127937 mov     di, 1A2h ;~ 4E73:04DF
cs=0x4e73;eip=0x0004e2; 	R(CALL(sub_5d263,0));	// 127938 call    sub_5D263 ;~ 4E73:04E2
cs=0x4e73;eip=0x0004e5; 	T(MOV(cx, 9));	// 127939 mov     cx, 9 ;~ 4E73:04E5
loc_5d1f8:
	// 8632 
cs=0x4e73;eip=0x0004e8; 	X(DEC(*(dw*)(raddr(ds,di))));	// 127942 dec     word ptr [di] ;~ 4E73:04E8
cs=0x4e73;eip=0x0004ea; 	R(JNZ(loc_5d23a));	// 127943 jnz     short loc_5D23A ;~ 4E73:04EA
loc_5d1fc:
	// 8633 
cs=0x4e73;eip=0x0004ec; 	T(MOV(si, *(dw*)(raddr(ds,di+0x12))));	// 127946 mov     si, [di+12h] ;~ 4E73:04EC
cs=0x4e73;eip=0x0004ef; 	T(OR(si, si));	// 127947 or      si, si ;~ 4E73:04EF
cs=0x4e73;eip=0x0004f1; 	R(JZ(loc_5d225));	// 127948 jz      short loc_5D225 ;~ 4E73:04F1
cs=0x4e73;eip=0x0004f3; 	X(PUSH(cx));	// 127949 push    cx ;~ 4E73:04F3
cs=0x4e73;eip=0x0004f4; 	X(PUSH(di));	// 127950 push    di ;~ 4E73:04F4
cs=0x4e73;eip=0x0004f5; 	X(LODS(*(dw*)(raddr(es,si)),si,2));	// 127951 lods    word ptr es:[si] ;~ 4E73:04F5
cs=0x4e73;eip=0x0004f7; 	T(MOV(dx, di));	// 127952 mov     dx, di ;~ 4E73:04F7
cs=0x4e73;eip=0x0004f9; 	T(SUB(dx, 0x1A2));	// 127953 sub     dx, 1A2h ;~ 4E73:04F9
cs=0x4e73;eip=0x0004fd; 	T(SHR(dx, 1));	// 127954 shr     dx, 1 ;~ 4E73:04FD
cs=0x4e73;eip=0x0004ff; 	T(MOV(bx, ax));	// 127955 mov     bx, ax ;~ 4E73:04FF
cs=0x4e73;eip=0x000501; 	T(AND(bx, 0x70));	// 127956 and     bx, 70h ;~ 4E73:0501
cs=0x4e73;eip=0x000504; 	T(SHR(bx, 1));	// 127957 shr     bx, 1 ;~ 4E73:0504
cs=0x4e73;eip=0x000506; 	T(SHR(bx, 1));	// 127958 shr     bx, 1 ;~ 4E73:0506
cs=0x4e73;eip=0x000508; 	T(SHR(bx, 1));	// 127959 shr     bx, 1 ;~ 4E73:0508
cs=0x4e73;eip=0x00050a; 	R(CALL(__dispatch_call,*(dw*)(raddr(ds,bx+0x125))));	// 127960 call    word ptr [bx+125h] ;~ 4E73:050A
cs=0x4e73;eip=0x00050e; 	X(POP(di));	// 127961 pop     di ;~ 4E73:050E
cs=0x4e73;eip=0x00050f; 	X(POP(cx));	// 127962 pop     cx ;~ 4E73:050F
cs=0x4e73;eip=0x000510; 	T(CMP(*(dw*)(raddr(ds,di)), 0));	// 127963 cmp     word ptr [di], 0 ;~ 4E73:0510
cs=0x4e73;eip=0x000513; 	R(JZ(loc_5d1fc));	// 127964 jz      short loc_5D1FC ;~ 4E73:0513
loc_5d225:
	// 8634 
cs=0x4e73;eip=0x000515; 	T(ADD(di, 2));	// 127968 add     di, 2 ;~ 4E73:0515
cs=0x4e73;eip=0x000518; 	R(LOOP(loc_5d1f8));	// 127969 loop    loc_5D1F8 ;~ 4E73:0518
cs=0x4e73;eip=0x00051a; 	X(DEC(*(raddr(ds,0x121))));	// 127970 dec     byte ptr ds:121h ;~ 4E73:051A
cs=0x4e73;eip=0x00051e; 	R(JNZ(locret_5d239));	// 127971 jnz     short locret_5D239 ;~ 4E73:051E
cs=0x4e73;eip=0x000520; 	X(MOV(*(raddr(ds,0x121)), 0x60));	// 127972 mov     byte ptr ds:121h, 60h ; '`' ;~ 4E73:0520
cs=0x4e73;eip=0x000525; 	X(INC(*(dw*)(raddr(ds,0x11F))));	// 127973 inc     word ptr ds:11Fh ;~ 4E73:0525
locret_5d239:
	// 8635 
cs=0x4e73;eip=0x000529; 	R(RETN(0));	// 127976 retn ;~ 4E73:0529
loc_5d23a:
	// 8636 
cs=0x4e73;eip=0x00052a; 	T(CMP(*(raddr(ds,di+0x5A)), 0));	// 127980 cmp     byte ptr [di+5Ah], 0 ;~ 4E73:052A
cs=0x4e73;eip=0x00052e; 	R(JZ(loc_5d225));	// 127981 jz      short loc_5D225 ;~ 4E73:052E
cs=0x4e73;eip=0x000530; 	T(MOV(si, *(dw*)(raddr(ds,di+0x12))));	// 127982 mov     si, [di+12h] ;~ 4E73:0530
cs=0x4e73;eip=0x000533; 	T(OR(si, si));	// 127983 or      si, si ;~ 4E73:0533
cs=0x4e73;eip=0x000535; 	R(JZ(loc_5d225));	// 127984 jz      short loc_5D225 ;~ 4E73:0535
cs=0x4e73;eip=0x000537; 	X(PUSH(cx));	// 127985 push    cx ;~ 4E73:0537
cs=0x4e73;eip=0x000538; 	X(PUSH(di));	// 127986 push    di ;~ 4E73:0538
cs=0x4e73;eip=0x000539; 	X(DEC(*(raddr(ds,di+0x5A))));	// 127987 dec     byte ptr [di+5Ah] ;~ 4E73:0539
cs=0x4e73;eip=0x00053c; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x6C))));	// 127988 mov     ax, [di+6Ch] ;~ 4E73:053C
cs=0x4e73;eip=0x00053f; 	T(ADD(al, ah));	// 127989 add     al, ah ;~ 4E73:053F
cs=0x4e73;eip=0x000541; 	X(MOV(*(raddr(ds,di+0x6C)), al));	// 127990 mov     [di+6Ch], al ;~ 4E73:0541
cs=0x4e73;eip=0x000544; 	T(MOV(dx, di));	// 127991 mov     dx, di ;~ 4E73:0544
cs=0x4e73;eip=0x000546; 	T(SUB(dx, 0x1A2));	// 127992 sub     dx, 1A2h ;~ 4E73:0546
cs=0x4e73;eip=0x00054a; 	T(SHR(dx, 1));	// 127993 shr     dx, 1 ;~ 4E73:054A
cs=0x4e73;eip=0x00054c; 	R(CALL(sub_5d4ff,0));	// 127994 call    sub_5D4FF ;~ 4E73:054C
cs=0x4e73;eip=0x00054f; 	X(POP(di));	// 127995 pop     di ;~ 4E73:054F
cs=0x4e73;eip=0x000550; 	X(POP(cx));	// 127996 pop     cx ;~ 4E73:0550
cs=0x4e73;eip=0x000551; 	R(JMP(loc_5d225));	// 127997 jmp     short loc_5D225 ;~ 4E73:0551
sub_5d263:
	// 128004 
cs=0x4e73;eip=0x000553; 	T(CMP(*(dw*)(raddr(ds,0x123)), 0));	// 128006 cmp     word ptr ds:123h, 0 ;~ 4E73:0553
ret_4e73_558:
	// 8637 
cs=0x4e73;eip=0x000558; 	R(JNZ(loc_5d295));	// 128007 jnz     short loc_5D295 ;~ 4E73:0558
cs=0x4e73;eip=0x00055a; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2A))));	// 128008 mov     ax, es:[bx+2Ah] ;~ 4E73:055A
cs=0x4e73;eip=0x00055e; 	T(CMP(ax, *(dw*)(raddr(ds,0x11F))));	// 128009 cmp     ax, ds:11Fh ;~ 4E73:055E
cs=0x4e73;eip=0x000562; 	R(JNZ(locret_5d294));	// 128010 jnz     short locret_5D294 ;~ 4E73:0562
cs=0x4e73;eip=0x000564; 	T(CMP(*(dw*)(raddr(ds,0x121)), 0x60));	// 128011 cmp     word ptr ds:121h, 60h ; '`' ;~ 4E73:0564
cs=0x4e73;eip=0x000569; 	R(JNZ(locret_5d294));	// 128012 jnz     short locret_5D294 ;~ 4E73:0569
cs=0x4e73;eip=0x00056b; 	X(PUSH(di));	// 128013 push    di ;~ 4E73:056B
cs=0x4e73;eip=0x00056c; 	X(PUSH(es));	// 128014 push    es ;~ 4E73:056C
cs=0x4e73;eip=0x00056d; 	T(MOV(si, di));	// 128015 mov     si, di ;~ 4E73:056D
cs=0x4e73;eip=0x00056f; 	T(ADD(di, 0x0EA));	// 128016 add     di, 0EAh ; 'ê' ;~ 4E73:056F
cs=0x4e73;eip=0x000573; 	X(PUSH(ds));	// 128017 push    ds ;~ 4E73:0573
cs=0x4e73;eip=0x000574; 	X(POP(es));	// 128018 pop     es ;~ 4E73:0574
cs=0x4e73;eip=0x000575; 	T(MOV(cx, 0x12));	// 128019 mov     cx, 12h ;~ 4E73:0575
	// 128020 rep movsw ;~ 4E73:0578
cs=0x4e73;eip=0x000578; 	X(	REP MOVSW);	// 128020 rep movsw ;~ 4E73:0578
cs=0x4e73;eip=0x00057a; 	X(POP(es));	// 128021 pop     es ;~ 4E73:057A
cs=0x4e73;eip=0x00057b; 	X(POP(di));	// 128022 pop     di ;~ 4E73:057B
cs=0x4e73;eip=0x00057c; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2E))));	// 128023 mov     ax, es:[bx+2Eh] ;~ 4E73:057C
cs=0x4e73;eip=0x000580; 	T(DEC(ax));	// 128024 dec     ax ;~ 4E73:0580
cs=0x4e73;eip=0x000581; 	X(MOV(*(dw*)(raddr(ds,0x123)), ax));	// 128025 mov     ds:123h, ax ;~ 4E73:0581
locret_5d294:
	// 8638 
cs=0x4e73;eip=0x000584; 	R(RETN(0));	// 128029 retn ;~ 4E73:0584
loc_5d295:
	// 8639 
cs=0x4e73;eip=0x000585; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2C))));	// 128033 mov     ax, es:[bx+2Ch] ;~ 4E73:0585
cs=0x4e73;eip=0x000589; 	T(CMP(ax, *(dw*)(raddr(ds,0x11F))));	// 128034 cmp     ax, ds:11Fh ;~ 4E73:0589
cs=0x4e73;eip=0x00058d; 	R(JNZ(locret_5d294));	// 128035 jnz     short locret_5D294 ;~ 4E73:058D
cs=0x4e73;eip=0x00058f; 	X(DEC(*(dw*)(raddr(ds,0x123))));	// 128036 dec     word ptr ds:123h ;~ 4E73:058F
cs=0x4e73;eip=0x000593; 	X(PUSH(di));	// 128037 push    di ;~ 4E73:0593
cs=0x4e73;eip=0x000594; 	X(PUSH(es));	// 128038 push    es ;~ 4E73:0594
cs=0x4e73;eip=0x000595; 	T(si = di+0x0EA);	// 128039 lea     si, [di+0EAh] ;~ 4E73:0595
cs=0x4e73;eip=0x000599; 	X(PUSH(ds));	// 128040 push    ds ;~ 4E73:0599
cs=0x4e73;eip=0x00059a; 	X(POP(es));	// 128041 pop     es ;~ 4E73:059A
cs=0x4e73;eip=0x00059b; 	T(MOV(cx, 0x12));	// 128042 mov     cx, 12h ;~ 4E73:059B
	// 128043 rep movsw ;~ 4E73:059E
cs=0x4e73;eip=0x00059e; 	X(	REP MOVSW);	// 128043 rep movsw ;~ 4E73:059E
cs=0x4e73;eip=0x0005a0; 	X(POP(es));	// 128044 pop     es ;~ 4E73:05A0
cs=0x4e73;eip=0x0005a1; 	X(POP(di));	// 128045 pop     di ;~ 4E73:05A1
cs=0x4e73;eip=0x0005a2; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2A))));	// 128046 mov     ax, es:[bx+2Ah] ;~ 4E73:05A2
cs=0x4e73;eip=0x0005a6; 	X(MOV(*(dw*)(raddr(ds,0x11F)), ax));	// 128047 mov     ds:11Fh, ax ;~ 4E73:05A6
locret_5d2b9:
	// 8640 
cs=0x4e73;eip=0x0005a9; 	R(RETN(0));	// 128050 retn ;~ 4E73:05A9
seg004_5aa_proc:
	// 128054 
cs=0x4e73;eip=0x0005aa; 	R(CALL(sub_5d5f1,0));	// 128054 call    sub_5D5F1 ;~ 4E73:05AA
ret_4e73_5ad:
	// 8641 
cs=0x4e73;eip=0x0005ad; 	T(CMP(*(raddr(ds,di+0x36)), ah));	// 128055 cmp     [di+36h], ah ;~ 4E73:05AD
cs=0x4e73;eip=0x0005b0; 	R(JZ(locret_5d2b9));	// 128056 jz      short locret_5D2B9 ;~ 4E73:05B0
cs=0x4e73;eip=0x0005b2; 	X(MOV(*(raddr(ds,di+0x36)), ah));	// 128057 mov     [di+36h], ah ;~ 4E73:05B2
cs=0x4e73;eip=0x0005b5; 	T(MOV(al, 0x28));	// 128058 mov     al, 28h ; '(' ;~ 4E73:05B5
cs=0x4e73;eip=0x0005b7; 	T(MUL1_1(ah));	// 128059 mul     ah ;~ 4E73:05B7
cs=0x4e73;eip=0x0005b9; 	T(LES(si, *(dw*)(raddr(ds,0x119))));	// 128060 les     si, ds:119h ;~ 4E73:05B9
cs=0x4e73;eip=0x0005bd; 	T(ADD(si, ax));	// 128061 add     si, ax ;~ 4E73:05BD
cs=0x4e73;eip=0x0005bf; 	T(MOV(ax, *(dw*)(raddr(es,si+0x21))));	// 128062 mov     ax, es:[si+21h] ;~ 4E73:05BF
cs=0x4e73;eip=0x0005c3; 	X(MOV(*(dw*)(raddr(ds,di+0x48)), ax));	// 128063 mov     [di+48h], ax ;~ 4E73:05C3
cs=0x4e73;eip=0x0005c6; 	T(MOV(ah, *(raddr(es,si+0x17))));	// 128064 mov     ah, es:[si+17h] ;~ 4E73:05C6
cs=0x4e73;eip=0x0005ca; 	T(MOV(al, *(raddr(es,si+0x0A))));	// 128065 mov     al, es:[si+0Ah] ;~ 4E73:05CA
cs=0x4e73;eip=0x0005ce; 	T(MOV(bh, *(raddr(es,si+2))));	// 128066 mov     bh, es:[si+2] ;~ 4E73:05CE
cs=0x4e73;eip=0x0005d2; 	T(MOV(bl, *(raddr(es,si+0x0F))));	// 128067 mov     bl, es:[si+0Fh] ;~ 4E73:05D2
cs=0x4e73;eip=0x0005d6; 	T(AND(bx, 0x303));	// 128068 and     bx, 303h ;~ 4E73:05D6
cs=0x4e73;eip=0x0005da; 	T(ROR(bx, 1));	// 128069 ror     bx, 1 ;~ 4E73:05DA
cs=0x4e73;eip=0x0005dc; 	T(ROR(bx, 1));	// 128070 ror     bx, 1 ;~ 4E73:05DC
cs=0x4e73;eip=0x0005de; 	T(OR(ax, bx));	// 128071 or      ax, bx ;~ 4E73:05DE
cs=0x4e73;eip=0x0005e0; 	X(MOV(*(dw*)(raddr(ds,di+0x90)), ax));	// 128072 mov     [di+90h], ax ;~ 4E73:05E0
cs=0x4e73;eip=0x0005e4; 	T(MOV(ax, *(dw*)(raddr(es,si+0x1E))));	// 128073 mov     ax, es:[si+1Eh] ;~ 4E73:05E4
cs=0x4e73;eip=0x0005e8; 	X(MOV(*(dw*)(raddr(ds,di+0x7E)), ax));	// 128074 mov     [di+7Eh], ax ;~ 4E73:05E8
cs=0x4e73;eip=0x0005eb; 	T(MOV(ax, *(dw*)(raddr(es,si+0x26))));	// 128075 mov     ax, es:[si+26h] ;~ 4E73:05EB
cs=0x4e73;eip=0x0005ef; 	X(MOV(*(dw*)(raddr(ds,di+0x0C6)), ax));	// 128076 mov     [di+0C6h], ax ;~ 4E73:05EF
cs=0x4e73;eip=0x0005f3; 	T(MOV(al, *(raddr(es,si+0x0E))));	// 128077 mov     al, es:[si+0Eh] ;~ 4E73:05F3
cs=0x4e73;eip=0x0005f7; 	T(NOT(al));	// 128078 not     al ;~ 4E73:05F7
cs=0x4e73;eip=0x0005f9; 	T(ROR(al, 1));	// 128079 ror     al, 1 ;~ 4E73:05F9
cs=0x4e73;eip=0x0005fb; 	T(MOV(ah, *(raddr(es,si+4))));	// 128080 mov     ah, es:[si+4] ;~ 4E73:05FB
cs=0x4e73;eip=0x0005ff; 	T(SHL(ax, 1));	// 128081 shl     ax, 1 ;~ 4E73:05FF
cs=0x4e73;eip=0x000601; 	T(MOV(al, *(raddr(es,si+0x20))));	// 128082 mov     al, es:[si+20h] ;~ 4E73:0601
cs=0x4e73;eip=0x000605; 	X(MOV(*(dw*)(raddr(ds,di+0x0B4)), ax));	// 128083 mov     [di+0B4h], ax ;~ 4E73:0605
cs=0x4e73;eip=0x000609; 	T(MOV(al, *(raddr(es,si+0x1B))));	// 128084 mov     al, es:[si+1Bh] ;~ 4E73:0609
cs=0x4e73;eip=0x00060d; 	X(MOV(*(dw*)(raddr(ds,di+0x0D8)), ax));	// 128085 mov     [di+0D8h], ax ;~ 4E73:060D
cs=0x4e73;eip=0x000611; 	T(MOV(ax, *(dw*)(raddr(es,si+0x23))));	// 128086 mov     ax, es:[si+23h] ;~ 4E73:0611
cs=0x4e73;eip=0x000615; 	X(MOV(*(raddr(ds,di+0x6D)), ah));	// 128087 mov     [di+6Dh], ah ;~ 4E73:0615
cs=0x4e73;eip=0x000618; 	T(MOV(ah, al));	// 128088 mov     ah, al ;~ 4E73:0618
cs=0x4e73;eip=0x00061a; 	T(XOR(al, al));	// 128089 xor     al, al ;~ 4E73:061A
cs=0x4e73;eip=0x00061c; 	X(MOV(*(dw*)(raddr(ds,di+0x5A)), ax));	// 128090 mov     [di+5Ah], ax ;~ 4E73:061C
cs=0x4e73;eip=0x00061f; 	X(PUSH(ds));	// 128091 push    ds ;~ 4E73:061F
cs=0x4e73;eip=0x000620; 	T(MOV(ax, es));	// 128092 mov     ax, es ;~ 4E73:0620
cs=0x4e73;eip=0x000622; 	T(MOV(ds, ax));	// 128093 mov     ds, ax ;~ 4E73:0622
cs=0x4e73;eip=0x000624; 	T(ADD(si, 2));	// 128094 add     si, 2 ;~ 4E73:0624
cs=0x4e73;eip=0x000627; 	R(CALL(sub_5d6bb,0));	// 128095 call    sub_5D6BB ;~ 4E73:0627
cs=0x4e73;eip=0x00062a; 	X(POP(ds));	// 128096 pop     ds ;~ 4E73:062A
cs=0x4e73;eip=0x00062b; 	R(RETN(0));	// 128097 retn ;~ 4E73:062B
ret_4e73_62c:
	// 8642 
cs=0x4e73;eip=0x00062c; 	X(LODS(*(raddr(es,si)),si,1));	// 128099 lods    byte ptr es:[si] ;~ 4E73:062C
cs=0x4e73;eip=0x00062e; 	R(CALL(sub_5d5f1,0));	// 128100 call    sub_5D5F1 ;~ 4E73:062E
cs=0x4e73;eip=0x000631; 	X(PUSH(ax));	// 128101 push    ax ;~ 4E73:0631
cs=0x4e73;eip=0x000632; 	R(CALL(sub_5d450,0));	// 128102 call    sub_5D450 ;~ 4E73:0632
cs=0x4e73;eip=0x000635; 	T(CMP(*(raddr(ds,di+0x37)), 0));	// 128103 cmp     byte ptr [di+37h], 0 ;~ 4E73:0635
cs=0x4e73;eip=0x000639; 	R(JZ(loc_5d350));	// 128104 jz      short loc_5D350 ;~ 4E73:0639
cs=0x4e73;eip=0x00063b; 	T(XOR(ax, ax));	// 128105 xor     ax, ax ;~ 4E73:063B
cs=0x4e73;eip=0x00063d; 	R(CALL(_group4,m2c::kloc_5d79f));	// 128106 call    loc_5D79F ;~ 4E73:063D
loc_5d350:
	// 8643 
cs=0x4e73;eip=0x000640; 	X(POP(ax));	// 128109 pop     ax ;~ 4E73:0640
cs=0x4e73;eip=0x000641; 	T(MOV(al, ah));	// 128110 mov     al, ah ;~ 4E73:0641
cs=0x4e73;eip=0x000643; 	T(ADD(al, *(raddr(ds,di+0x49))));	// 128111 add     al, [di+49h] ;~ 4E73:0643
cs=0x4e73;eip=0x000646; 	T(XOR(ah, ah));	// 128112 xor     ah, ah ;~ 4E73:0646
cs=0x4e73;eip=0x000648; 	X(MOV(*(raddr(ds,di+0x37)), al));	// 128113 mov     [di+37h], al ;~ 4E73:0648
cs=0x4e73;eip=0x00064b; 	T(SUB(ax, 0x48));	// 128114 sub     ax, 48h ; 'H' ;~ 4E73:064B
cs=0x4e73;eip=0x00064e; 	T(MOV(cl, *(raddr(ds,di+0x5B))));	// 128115 mov     cl, [di+5Bh] ;~ 4E73:064E
cs=0x4e73;eip=0x000651; 	X(MOV(*(raddr(ds,di+0x5A)), cl));	// 128116 mov     [di+5Ah], cl ;~ 4E73:0651
cs=0x4e73;eip=0x000654; 	X(MOV(*(raddr(ds,di+0x6C)), 0x40));	// 128117 mov     byte ptr [di+6Ch], 40h ; '@' ;~ 4E73:0654
cs=0x4e73;eip=0x000658; 	R(JMP(loc_5d768));	// 128118 jmp     loc_5D768 ;~ 4E73:0658
ret_4e73_65b:
	// 8644 
cs=0x4e73;eip=0x00065b; 	T(INC(si));	// 128120 inc     si ;~ 4E73:065B
cs=0x4e73;eip=0x00065c; 	R(CALL(sub_5d5f1,0));	// 128121 call    sub_5D5F1 ;~ 4E73:065C
cs=0x4e73;eip=0x00065f; 	T(ADD(ah, *(raddr(ds,di+0x49))));	// 128122 add     ah, [di+49h] ;~ 4E73:065F
cs=0x4e73;eip=0x000662; 	T(CMP(*(raddr(ds,di+0x37)), ah));	// 128123 cmp     [di+37h], ah ;~ 4E73:0662
cs=0x4e73;eip=0x000665; 	R(JNZ(locret_5d37e));	// 128124 jnz     short locret_5D37E ;~ 4E73:0665
cs=0x4e73;eip=0x000667; 	X(MOV(*(raddr(ds,di+0x37)), 0));	// 128125 mov     byte ptr [di+37h], 0 ;~ 4E73:0667
cs=0x4e73;eip=0x00066b; 	R(JMP(sub_5d797));	// 128126 jmp     sub_5D797 ;~ 4E73:066B
locret_5d37e:
	// 8645 
cs=0x4e73;eip=0x00066e; 	R(RETN(0));	// 128130 retn ;~ 4E73:066E
ret_4e73_66f:
	// 8646 
cs=0x4e73;eip=0x00066f; 	X(MOV(*(dw*)(raddr(ds,di)), 0x0FFFF));	// 128132 mov     word ptr [di], 0FFFFh ;~ 4E73:066F
cs=0x4e73;eip=0x000673; 	X(SUB(*(raddr(ds,di+0x12)), 2));	// 128133 sub     byte ptr [di+12h], 2 ;~ 4E73:0673
cs=0x4e73;eip=0x000677; 	T(OR(dx, dx));	// 128134 or      dx, dx ;~ 4E73:0677
cs=0x4e73;eip=0x000679; 	R(JNZ(locret_5d3a6));	// 128135 jnz     short locret_5D3A6 ;~ 4E73:0679
cs=0x4e73;eip=0x00067b; 	X(DEC(*(raddr(ds,0x19B))));	// 128136 dec     byte ptr ds:19Bh ;~ 4E73:067B
cs=0x4e73;eip=0x00067f; 	R(JZ(loc_5d3a7));	// 128137 jz      short loc_5D3A7 ;~ 4E73:067F
cs=0x4e73;eip=0x000681; 	R(JNS(loc_5d397));	// 128138 jns     short loc_5D397 ;~ 4E73:0681
cs=0x4e73;eip=0x000683; 	X(INC(*(raddr(ds,0x19B))));	// 128139 inc     byte ptr ds:19Bh ;~ 4E73:0683
loc_5d397:
	// 8647 
cs=0x4e73;eip=0x000687; 	R(CALL(_group4,m2c::kloc_5d154));	// 128142 call    loc_5D154 ;~ 4E73:0687
cs=0x4e73;eip=0x00068a; 	T(LES(bx, *(dw*)(raddr(ds,0x115))));	// 128143 les     bx, ds:115h ;~ 4E73:068A
cs=0x4e73;eip=0x00068e; 	T(MOV(di, 0x1A2));	// 128144 mov     di, 1A2h ;~ 4E73:068E
cs=0x4e73;eip=0x000691; 	R(CALL(sub_5d263,0));	// 128145 call    sub_5D263 ;~ 4E73:0691
cs=0x4e73;eip=0x000694; 	X(DEC(*(dw*)(raddr(ds,di))));	// 128146 dec     word ptr [di] ;~ 4E73:0694
locret_5d3a6:
	// 8648 
cs=0x4e73;eip=0x000696; 	R(RETN(0));	// 128149 retn ;~ 4E73:0696
loc_5d3a7:
	// 8649 
cs=0x4e73;eip=0x000697; 	T(MOV(ax, 0x0FFFF));	// 128153 mov     ax, 0FFFFh ;~ 4E73:0697
cs=0x4e73;eip=0x00069a; 	X(PUSH(es));	// 128154 push    es ;~ 4E73:069A
cs=0x4e73;eip=0x00069b; 	X(PUSH(ds));	// 128155 push    ds ;~ 4E73:069B
cs=0x4e73;eip=0x00069c; 	X(POP(es));	// 128156 pop     es ;~ 4E73:069C
cs=0x4e73;eip=0x00069d; 	T(MOV(cx, 9));	// 128157 mov     cx, 9 ;~ 4E73:069D
	// 128158 rep stosw ;~ 4E73:06A0
cs=0x4e73;eip=0x0006a0; 	X(	REP STOSW);	// 128158 rep stosw ;~ 4E73:06A0
cs=0x4e73;eip=0x0006a2; 	X(POP(es));	// 128159 pop     es ;~ 4E73:06A2
cs=0x4e73;eip=0x0006a3; 	X(PUSH(cs));	// 128160 push    cs ;~ 4E73:06A3
cs=0x4e73;eip=0x0006a4; 	R(CALL(sub_5d00e,0));	// 128161 call    near ptr sub_5D00E ;~ 4E73:06A4
cs=0x4e73;eip=0x0006a7; 	R(RETN(0));	// 128162 retn ;~ 4E73:06A7
ret_4e73_6a8:
	// 8650 
cs=0x4e73;eip=0x0006a8; 	R(CALL(sub_5d5f1,0));	// 128164 call    sub_5D5F1 ;~ 4E73:06A8
cs=0x4e73;eip=0x0006ab; 	T(MOV(al, 0x80));	// 128165 mov     al, 80h ; '€' ;~ 4E73:06AB
cs=0x4e73;eip=0x0006ad; 	T(SUB(al, ah));	// 128166 sub     al, ah ;~ 4E73:06AD
cs=0x4e73;eip=0x0006af; 	T(XCHG(al, ah));	// 128167 xchg    al, ah ;~ 4E73:06AF
cs=0x4e73;eip=0x0006b1; 	T(MOV(bx, *(dw*)(raddr(ds,di+0x0A2))));	// 128168 mov     bx, [di+0A2h] ;~ 4E73:06B1
cs=0x4e73;eip=0x0006b5; 	T(MOV(cx, *(dw*)(raddr(ds,di+0x0C6))));	// 128169 mov     cx, [di+0C6h] ;~ 4E73:06B5
cs=0x4e73;eip=0x0006b9; 	T(OR(cl, cl));	// 128170 or      cl, cl ;~ 4E73:06B9
cs=0x4e73;eip=0x0006bb; 	R(JZ(loc_5d3f7));	// 128171 jz      short loc_5D3F7 ;~ 4E73:06BB
cs=0x4e73;eip=0x0006bd; 	X(PUSH(ax));	// 128172 push    ax ;~ 4E73:06BD
cs=0x4e73;eip=0x0006be; 	R(JNS(loc_5d3d4));	// 128173 jns     short loc_5D3D4 ;~ 4E73:06BE
cs=0x4e73;eip=0x0006c0; 	T(NEG(cl));	// 128174 neg     cl ;~ 4E73:06C0
cs=0x4e73;eip=0x0006c2; 	T(MOV(al, ah));	// 128175 mov     al, ah ;~ 4E73:06C2
loc_5d3d4:
	// 8651 
cs=0x4e73;eip=0x0006c4; 	T(SUB(cl, 4));	// 128178 sub     cl, 4 ;~ 4E73:06C4
cs=0x4e73;eip=0x0006c7; 	T(NEG(cl));	// 128179 neg     cl ;~ 4E73:06C7
cs=0x4e73;eip=0x0006c9; 	T(SHR(al, cl));	// 128180 shr     al, cl ;~ 4E73:06C9
cs=0x4e73;eip=0x0006cb; 	T(MOV(ah, bl));	// 128181 mov     ah, bl ;~ 4E73:06CB
cs=0x4e73;eip=0x0006cd; 	T(AND(ah, 0x3F));	// 128182 and     ah, 3Fh ;~ 4E73:06CD
cs=0x4e73;eip=0x0006d0; 	T(SUB(ah, al));	// 128183 sub     ah, al ;~ 4E73:06D0
cs=0x4e73;eip=0x0006d2; 	R(JNC(loc_5d3e6));	// 128184 jnb     short loc_5D3E6 ;~ 4E73:06D2
cs=0x4e73;eip=0x0006d4; 	T(XOR(ah, ah));	// 128185 xor     ah, ah ;~ 4E73:06D4
loc_5d3e6:
	// 8652 
cs=0x4e73;eip=0x0006d6; 	T(AND(bl, 0x0C0));	// 128188 and     bl, 0C0h ;~ 4E73:06D6
cs=0x4e73;eip=0x0006d9; 	T(OR(ah, bl));	// 128189 or      ah, bl ;~ 4E73:06D9
cs=0x4e73;eip=0x0006db; 	T(MOV(si, 0x171));	// 128190 mov     si, 171h ;~ 4E73:06DB
cs=0x4e73;eip=0x0006de; 	T(ADD(si, dx));	// 128191 add     si, dx ;~ 4E73:06DE
cs=0x4e73;eip=0x0006e0; 	T(LODSB);	// 128192 lodsb ;~ 4E73:06E0
cs=0x4e73;eip=0x0006e1; 	T(ADD(al, 0x40));	// 128193 add     al, 40h ; '@' ;~ 4E73:06E1
cs=0x4e73;eip=0x0006e3; 	R(CALL(sub_5d7b2,0));	// 128194 call    sub_5D7B2 ;~ 4E73:06E3
cs=0x4e73;eip=0x0006e6; 	X(POP(ax));	// 128195 pop     ax ;~ 4E73:06E6
loc_5d3f7:
	// 8653 
cs=0x4e73;eip=0x0006e7; 	T(OR(ch, ch));	// 128198 or      ch, ch ;~ 4E73:06E7
cs=0x4e73;eip=0x0006e9; 	R(JZ(loc_5d424));	// 128199 jz      short loc_5D424 ;~ 4E73:06E9
cs=0x4e73;eip=0x0006eb; 	X(PUSH(ax));	// 128200 push    ax ;~ 4E73:06EB
cs=0x4e73;eip=0x0006ec; 	R(JNS(loc_5d402));	// 128201 jns     short loc_5D402 ;~ 4E73:06EC
cs=0x4e73;eip=0x0006ee; 	T(NEG(ch));	// 128202 neg     ch ;~ 4E73:06EE
cs=0x4e73;eip=0x0006f0; 	T(MOV(al, ah));	// 128203 mov     al, ah ;~ 4E73:06F0
loc_5d402:
	// 8654 
cs=0x4e73;eip=0x0006f2; 	T(MOV(cl, 4));	// 128206 mov     cl, 4 ;~ 4E73:06F2
cs=0x4e73;eip=0x0006f4; 	T(SUB(cl, ch));	// 128207 sub     cl, ch ;~ 4E73:06F4
cs=0x4e73;eip=0x0006f6; 	T(SHR(al, cl));	// 128208 shr     al, cl ;~ 4E73:06F6
cs=0x4e73;eip=0x0006f8; 	T(MOV(ah, bh));	// 128209 mov     ah, bh ;~ 4E73:06F8
cs=0x4e73;eip=0x0006fa; 	T(AND(ah, 0x3F));	// 128210 and     ah, 3Fh ;~ 4E73:06FA
cs=0x4e73;eip=0x0006fd; 	T(SUB(ah, al));	// 128211 sub     ah, al ;~ 4E73:06FD
cs=0x4e73;eip=0x0006ff; 	R(JNC(loc_5d413));	// 128212 jnb     short loc_5D413 ;~ 4E73:06FF
cs=0x4e73;eip=0x000701; 	T(XOR(ah, ah));	// 128213 xor     ah, ah ;~ 4E73:0701
loc_5d413:
	// 8655 
cs=0x4e73;eip=0x000703; 	T(AND(bh, 0x0C0));	// 128216 and     bh, 0C0h ;~ 4E73:0703
cs=0x4e73;eip=0x000706; 	T(OR(ah, bh));	// 128217 or      ah, bh ;~ 4E73:0706
cs=0x4e73;eip=0x000708; 	T(MOV(si, 0x17A));	// 128218 mov     si, 17Ah ;~ 4E73:0708
cs=0x4e73;eip=0x00070b; 	T(ADD(si, dx));	// 128219 add     si, dx ;~ 4E73:070B
cs=0x4e73;eip=0x00070d; 	T(LODSB);	// 128220 lodsb ;~ 4E73:070D
cs=0x4e73;eip=0x00070e; 	T(ADD(al, 0x40));	// 128221 add     al, 40h ; '@' ;~ 4E73:070E
cs=0x4e73;eip=0x000710; 	R(CALL(sub_5d7b2,0));	// 128222 call    sub_5D7B2 ;~ 4E73:0710
cs=0x4e73;eip=0x000713; 	X(POP(ax));	// 128223 pop     ax ;~ 4E73:0713
loc_5d424:
	// 8656 
cs=0x4e73;eip=0x000714; 	T(MOV(cx, *(dw*)(raddr(ds,di+0x0D8))));	// 128226 mov     cx, [di+0D8h] ;~ 4E73:0714
cs=0x4e73;eip=0x000718; 	T(OR(cl, cl));	// 128227 or      cl, cl ;~ 4E73:0718
cs=0x4e73;eip=0x00071a; 	R(JNZ(loc_5d42d));	// 128228 jnz     short loc_5D42D ;~ 4E73:071A
cs=0x4e73;eip=0x00071c; 	R(RETN(0));	// 128229 retn ;~ 4E73:071C
loc_5d42d:
	// 8657 
cs=0x4e73;eip=0x00071d; 	R(JNS(loc_5d433));	// 128233 jns     short loc_5D433 ;~ 4E73:071D
cs=0x4e73;eip=0x00071f; 	T(NEG(cl));	// 128234 neg     cl ;~ 4E73:071F
cs=0x4e73;eip=0x000721; 	T(MOV(al, ah));	// 128235 mov     al, ah ;~ 4E73:0721
loc_5d433:
	// 8658 
cs=0x4e73;eip=0x000723; 	T(SUB(cl, 6));	// 128238 sub     cl, 6 ;~ 4E73:0723
cs=0x4e73;eip=0x000726; 	T(NEG(cl));	// 128239 neg     cl ;~ 4E73:0726
cs=0x4e73;eip=0x000728; 	T(SHR(al, cl));	// 128240 shr     al, cl ;~ 4E73:0728
cs=0x4e73;eip=0x00072a; 	T(AND(al, 0x0FE));	// 128241 and     al, 0FEh ;~ 4E73:072A
cs=0x4e73;eip=0x00072c; 	T(ADD(al, ch));	// 128242 add     al, ch ;~ 4E73:072C
cs=0x4e73;eip=0x00072e; 	T(CMP(al, 0x0F));	// 128243 cmp     al, 0Fh ;~ 4E73:072E
cs=0x4e73;eip=0x000730; 	R(JBE(loc_5d446));	// 128244 jbe     short loc_5D446 ;~ 4E73:0730
cs=0x4e73;eip=0x000732; 	T(AND(al, 0x0F));	// 128245 and     al, 0Fh ;~ 4E73:0732
cs=0x4e73;eip=0x000734; 	T(OR(al, 0x0E));	// 128246 or      al, 0Eh ;~ 4E73:0734
loc_5d446:
	// 8659 
cs=0x4e73;eip=0x000736; 	T(MOV(ah, al));	// 128249 mov     ah, al ;~ 4E73:0736
cs=0x4e73;eip=0x000738; 	T(MOV(al, dl));	// 128250 mov     al, dl ;~ 4E73:0738
cs=0x4e73;eip=0x00073a; 	T(ADD(al, 0x0C0));	// 128251 add     al, 0C0h ; 'À' ;~ 4E73:073A
cs=0x4e73;eip=0x00073c; 	R(CALL(sub_5d7b2,0));	// 128252 call    sub_5D7B2 ;~ 4E73:073C
cs=0x4e73;eip=0x00073f; 	R(RETN(0));	// 128253 retn ;~ 4E73:073F
sub_5d450:
	// 128258 
cs=0x4e73;eip=0x000740; 	T(MOV(ah, al));	// 128259 mov     ah, al ;~ 4E73:0740
ret_4e73_742:
	// 8660 
cs=0x4e73;eip=0x000742; 	T(MOV(al, 0x80));	// 128260 mov     al, 80h ; '€' ;~ 4E73:0742
cs=0x4e73;eip=0x000744; 	T(SUB(al, ah));	// 128261 sub     al, ah ;~ 4E73:0744
cs=0x4e73;eip=0x000746; 	T(MOV(bx, *(dw*)(raddr(ds,di+0x90))));	// 128262 mov     bx, [di+90h] ;~ 4E73:0746
cs=0x4e73;eip=0x00074a; 	T(MOV(cx, *(dw*)(raddr(ds,di+0x7E))));	// 128263 mov     cx, [di+7Eh] ;~ 4E73:074A
cs=0x4e73;eip=0x00074d; 	T(OR(cl, cl));	// 128264 or      cl, cl ;~ 4E73:074D
cs=0x4e73;eip=0x00074f; 	R(JZ(loc_5d490));	// 128265 jz      short loc_5D490 ;~ 4E73:074F
cs=0x4e73;eip=0x000751; 	X(PUSH(ax));	// 128266 push    ax ;~ 4E73:0751
cs=0x4e73;eip=0x000752; 	R(JNS(loc_5d468));	// 128267 jns     short loc_5D468 ;~ 4E73:0752
cs=0x4e73;eip=0x000754; 	T(NEG(cl));	// 128268 neg     cl ;~ 4E73:0754
cs=0x4e73;eip=0x000756; 	T(MOV(al, ah));	// 128269 mov     al, ah ;~ 4E73:0756
loc_5d468:
	// 8661 
cs=0x4e73;eip=0x000758; 	T(SUB(cl, 4));	// 128272 sub     cl, 4 ;~ 4E73:0758
cs=0x4e73;eip=0x00075b; 	T(NEG(cl));	// 128273 neg     cl ;~ 4E73:075B
cs=0x4e73;eip=0x00075d; 	T(SHR(al, cl));	// 128274 shr     al, cl ;~ 4E73:075D
cs=0x4e73;eip=0x00075f; 	T(MOV(ah, bl));	// 128275 mov     ah, bl ;~ 4E73:075F
cs=0x4e73;eip=0x000761; 	T(AND(ah, 0x3F));	// 128276 and     ah, 3Fh ;~ 4E73:0761
cs=0x4e73;eip=0x000764; 	T(ADD(ah, al));	// 128277 add     ah, al ;~ 4E73:0764
cs=0x4e73;eip=0x000766; 	T(CMP(ah, 0x3F));	// 128278 cmp     ah, 3Fh ; '?' ;~ 4E73:0766
cs=0x4e73;eip=0x000769; 	R(JBE(loc_5d47d));	// 128279 jbe     short loc_5D47D ;~ 4E73:0769
cs=0x4e73;eip=0x00076b; 	T(MOV(ah, 0x3F));	// 128280 mov     ah, 3Fh ; '?' ;~ 4E73:076B
loc_5d47d:
	// 8662 
cs=0x4e73;eip=0x00076d; 	T(AND(bl, 0x0C0));	// 128283 and     bl, 0C0h ;~ 4E73:076D
cs=0x4e73;eip=0x000770; 	T(OR(bl, ah));	// 128284 or      bl, ah ;~ 4E73:0770
cs=0x4e73;eip=0x000772; 	T(MOV(ah, bl));	// 128285 mov     ah, bl ;~ 4E73:0772
cs=0x4e73;eip=0x000774; 	T(MOV(si, 0x171));	// 128286 mov     si, 171h ;~ 4E73:0774
cs=0x4e73;eip=0x000777; 	T(ADD(si, dx));	// 128287 add     si, dx ;~ 4E73:0777
cs=0x4e73;eip=0x000779; 	T(LODSB);	// 128288 lodsb ;~ 4E73:0779
cs=0x4e73;eip=0x00077a; 	T(ADD(al, 0x40));	// 128289 add     al, 40h ; '@' ;~ 4E73:077A
cs=0x4e73;eip=0x00077c; 	R(CALL(sub_5d7b2,0));	// 128290 call    sub_5D7B2 ;~ 4E73:077C
cs=0x4e73;eip=0x00077f; 	X(POP(ax));	// 128291 pop     ax ;~ 4E73:077F
loc_5d490:
	// 8663 
cs=0x4e73;eip=0x000780; 	T(OR(ch, ch));	// 128294 or      ch, ch ;~ 4E73:0780
cs=0x4e73;eip=0x000782; 	R(JZ(loc_5d4c2));	// 128295 jz      short loc_5D4C2 ;~ 4E73:0782
cs=0x4e73;eip=0x000784; 	X(PUSH(ax));	// 128296 push    ax ;~ 4E73:0784
cs=0x4e73;eip=0x000785; 	R(JNS(loc_5d49b));	// 128297 jns     short loc_5D49B ;~ 4E73:0785
cs=0x4e73;eip=0x000787; 	T(NEG(ch));	// 128298 neg     ch ;~ 4E73:0787
cs=0x4e73;eip=0x000789; 	T(MOV(al, ah));	// 128299 mov     al, ah ;~ 4E73:0789
loc_5d49b:
	// 8664 
cs=0x4e73;eip=0x00078b; 	T(MOV(cl, 4));	// 128302 mov     cl, 4 ;~ 4E73:078B
cs=0x4e73;eip=0x00078d; 	T(SUB(cl, ch));	// 128303 sub     cl, ch ;~ 4E73:078D
cs=0x4e73;eip=0x00078f; 	T(SHR(al, cl));	// 128304 shr     al, cl ;~ 4E73:078F
cs=0x4e73;eip=0x000791; 	T(MOV(ah, bh));	// 128305 mov     ah, bh ;~ 4E73:0791
cs=0x4e73;eip=0x000793; 	T(AND(ah, 0x3F));	// 128306 and     ah, 3Fh ;~ 4E73:0793
cs=0x4e73;eip=0x000796; 	T(ADD(ah, al));	// 128307 add     ah, al ;~ 4E73:0796
cs=0x4e73;eip=0x000798; 	T(CMP(ah, 0x3F));	// 128308 cmp     ah, 3Fh ; '?' ;~ 4E73:0798
cs=0x4e73;eip=0x00079b; 	R(JBE(loc_5d4af));	// 128309 jbe     short loc_5D4AF ;~ 4E73:079B
cs=0x4e73;eip=0x00079d; 	T(MOV(ah, 0x3F));	// 128310 mov     ah, 3Fh ; '?' ;~ 4E73:079D
loc_5d4af:
	// 8665 
cs=0x4e73;eip=0x00079f; 	T(AND(bh, 0x0C0));	// 128313 and     bh, 0C0h ;~ 4E73:079F
cs=0x4e73;eip=0x0007a2; 	T(OR(bh, ah));	// 128314 or      bh, ah ;~ 4E73:07A2
cs=0x4e73;eip=0x0007a4; 	T(MOV(ah, bh));	// 128315 mov     ah, bh ;~ 4E73:07A4
cs=0x4e73;eip=0x0007a6; 	T(MOV(si, 0x17A));	// 128316 mov     si, 17Ah ;~ 4E73:07A6
cs=0x4e73;eip=0x0007a9; 	T(ADD(si, dx));	// 128317 add     si, dx ;~ 4E73:07A9
cs=0x4e73;eip=0x0007ab; 	T(LODSB);	// 128318 lodsb ;~ 4E73:07AB
cs=0x4e73;eip=0x0007ac; 	T(ADD(al, 0x40));	// 128319 add     al, 40h ; '@' ;~ 4E73:07AC
cs=0x4e73;eip=0x0007ae; 	R(CALL(sub_5d7b2,0));	// 128320 call    sub_5D7B2 ;~ 4E73:07AE
cs=0x4e73;eip=0x0007b1; 	X(POP(ax));	// 128321 pop     ax ;~ 4E73:07B1
loc_5d4c2:
	// 8666 
cs=0x4e73;eip=0x0007b2; 	X(MOV(*(dw*)(raddr(ds,di+0x0A2)), bx));	// 128324 mov     [di+0A2h], bx ;~ 4E73:07B2
cs=0x4e73;eip=0x0007b6; 	T(MOV(cx, *(dw*)(raddr(ds,di+0x0B4))));	// 128325 mov     cx, [di+0B4h] ;~ 4E73:07B6
cs=0x4e73;eip=0x0007ba; 	T(OR(cl, cl));	// 128326 or      cl, cl ;~ 4E73:07BA
cs=0x4e73;eip=0x0007bc; 	R(JNZ(loc_5d4d3));	// 128327 jnz     short loc_5D4D3 ;~ 4E73:07BC
cs=0x4e73;eip=0x0007be; 	X(MOV(*(raddr(ds,di+0x0D9)), ch));	// 128328 mov     [di+0D9h], ch ;~ 4E73:07BE
cs=0x4e73;eip=0x0007c2; 	R(RETN(0));	// 128329 retn ;~ 4E73:07C2
loc_5d4d3:
	// 8667 
cs=0x4e73;eip=0x0007c3; 	R(JNS(loc_5d4d9));	// 128333 jns     short loc_5D4D9 ;~ 4E73:07C3
cs=0x4e73;eip=0x0007c5; 	T(NEG(cl));	// 128334 neg     cl ;~ 4E73:07C5
cs=0x4e73;eip=0x0007c7; 	T(MOV(al, ah));	// 128335 mov     al, ah ;~ 4E73:07C7
loc_5d4d9:
	// 8668 
cs=0x4e73;eip=0x0007c9; 	T(SUB(cl, 6));	// 128338 sub     cl, 6 ;~ 4E73:07C9
cs=0x4e73;eip=0x0007cc; 	T(NEG(cl));	// 128339 neg     cl ;~ 4E73:07CC
cs=0x4e73;eip=0x0007ce; 	T(SHR(al, cl));	// 128340 shr     al, cl ;~ 4E73:07CE
cs=0x4e73;eip=0x0007d0; 	T(AND(al, 0x0FE));	// 128341 and     al, 0FEh ;~ 4E73:07D0
cs=0x4e73;eip=0x0007d2; 	T(ADD(al, ch));	// 128342 add     al, ch ;~ 4E73:07D2
cs=0x4e73;eip=0x0007d4; 	T(CMP(al, 0x0F));	// 128343 cmp     al, 0Fh ;~ 4E73:07D4
cs=0x4e73;eip=0x0007d6; 	R(JBE(loc_5d4ec));	// 128344 jbe     short loc_5D4EC ;~ 4E73:07D6
cs=0x4e73;eip=0x0007d8; 	T(AND(al, 0x0F));	// 128345 and     al, 0Fh ;~ 4E73:07D8
cs=0x4e73;eip=0x0007da; 	T(OR(al, 0x0E));	// 128346 or      al, 0Eh ;~ 4E73:07DA
loc_5d4ec:
	// 8669 
cs=0x4e73;eip=0x0007dc; 	T(MOV(ah, al));	// 128349 mov     ah, al ;~ 4E73:07DC
cs=0x4e73;eip=0x0007de; 	X(MOV(*(raddr(ds,di+0x0D9)), al));	// 128350 mov     [di+0D9h], al ;~ 4E73:07DE
cs=0x4e73;eip=0x0007e2; 	T(MOV(al, dl));	// 128351 mov     al, dl ;~ 4E73:07E2
cs=0x4e73;eip=0x0007e4; 	T(ADD(al, 0x0C0));	// 128352 add     al, 0C0h ; 'À' ;~ 4E73:07E4
cs=0x4e73;eip=0x0007e6; 	R(CALL(sub_5d7b2,0));	// 128353 call    sub_5D7B2 ;~ 4E73:07E6
nullsub_20:
	// 128360 
cs=0x4e73;eip=0x0007e9; 	R(RETN(0));	// 128361 retn ;~ 4E73:07E9
seg004_7ea_proc:
	// 128365 
cs=0x4e73;eip=0x0007ea; 	T(MOV(al, ah));	// 128365 mov     al, ah ;~ 4E73:07EA
ret_4e73_7ec:
	// 8670 
cs=0x4e73;eip=0x0007ec; 	R(CALL(sub_5d5f1,0));	// 128366 call    sub_5D5F1 ;~ 4E73:07EC
sub_5d4ff:
	// 128371 
cs=0x4e73;eip=0x0007ef; 	T(MOV(cl, *(raddr(ds,di+0x37))));	// 128372 mov     cl, [di+37h] ;~ 4E73:07EF
cs=0x4e73;eip=0x0007f2; 	T(XOR(ch, ch));	// 128373 xor     ch, ch ;~ 4E73:07F2
cs=0x4e73;eip=0x0007f4; 	R(JCXZ(nullsub_20));	// 128374 jcxz    short nullsub_20 ;~ 4E73:07F4
cs=0x4e73;eip=0x0007f6; 	T(MOV(ah, ch));	// 128375 mov     ah, ch ;~ 4E73:07F6
cs=0x4e73;eip=0x0007f8; 	T(XCHG(ax, cx));	// 128376 xchg    ax, cx ;~ 4E73:07F8
cs=0x4e73;eip=0x0007f9; 	T(SUB(al, 0x18));	// 128377 sub     al, 18h ;~ 4E73:07F9
cs=0x4e73;eip=0x0007fb; 	T(MOV(bh, 0x0C));	// 128378 mov     bh, 0Ch ;~ 4E73:07FB
cs=0x4e73;eip=0x0007fd; 	T(DIV1(bh));	// 128379 div     bh ;~ 4E73:07FD
cs=0x4e73;eip=0x0007ff; 	T(XCHG(ax, cx));	// 128380 xchg    ax, cx ;~ 4E73:07FF
cs=0x4e73;eip=0x000800; 	T(CMP(*(raddr(ds,di+0x48)), 0));	// 128381 cmp     byte ptr [di+48h], 0 ;~ 4E73:0800
cs=0x4e73;eip=0x000804; 	R(JNZ(loc_5d575));	// 128382 jnz     short loc_5D575 ;~ 4E73:0804
cs=0x4e73;eip=0x000806; 	T(SUB(ax, 0x40));	// 128383 sub     ax, 40h ; '@' ;~ 4E73:0806
cs=0x4e73;eip=0x000809; 	R(JNC(loc_5d552));	// 128384 jnb     short loc_5D552 ;~ 4E73:0809
cs=0x4e73;eip=0x00080b; 	T(NEG(ax));	// 128385 neg     ax ;~ 4E73:080B
cs=0x4e73;eip=0x00080d; 	T(ROR(ax, 1));	// 128386 ror     ax, 1 ;~ 4E73:080D
cs=0x4e73;eip=0x00080f; 	T(ROR(ax, 1));	// 128387 ror     ax, 1 ;~ 4E73:080F
cs=0x4e73;eip=0x000811; 	T(ROR(ax, 1));	// 128388 ror     ax, 1 ;~ 4E73:0811
cs=0x4e73;eip=0x000813; 	T(ROR(ax, 1));	// 128389 ror     ax, 1 ;~ 4E73:0813
cs=0x4e73;eip=0x000815; 	T(ROR(ax, 1));	// 128390 ror     ax, 1 ;~ 4E73:0815
cs=0x4e73;eip=0x000817; 	T(SUB(ch, al));	// 128391 sub     ch, al ;~ 4E73:0817
cs=0x4e73;eip=0x000819; 	R(JNC(loc_5d534));	// 128392 jnb     short loc_5D534 ;~ 4E73:0819
cs=0x4e73;eip=0x00081b; 	T(ADD(ch, 0x0C));	// 128393 add     ch, 0Ch ;~ 4E73:081B
cs=0x4e73;eip=0x00081e; 	T(DEC(cl));	// 128394 dec     cl ;~ 4E73:081E
cs=0x4e73;eip=0x000820; 	R(JNS(loc_5d534));	// 128395 jns     short loc_5D534 ;~ 4E73:0820
cs=0x4e73;eip=0x000822; 	T(XOR(cx, cx));	// 128396 xor     cx, cx ;~ 4E73:0822
loc_5d534:
	// 8671 
cs=0x4e73;eip=0x000824; 	T(MOV(al, ch));	// 128400 mov     al, ch ;~ 4E73:0824
cs=0x4e73;eip=0x000826; 	T(MOV(bx, 0x183));	// 128401 mov     bx, 183h ;~ 4E73:0826
cs=0x4e73;eip=0x000829; 	T(XLAT);	// 128402 xlat ;~ 4E73:0829
cs=0x4e73;eip=0x00082a; 	T(MUL1_1(ah));	// 128403 mul     ah ;~ 4E73:082A
cs=0x4e73;eip=0x00082c; 	T(MOV(al, ah));	// 128404 mov     al, ah ;~ 4E73:082C
cs=0x4e73;eip=0x00082e; 	T(XCHG(al, ch));	// 128405 xchg    al, ch ;~ 4E73:082E
cs=0x4e73;eip=0x000830; 	T(XOR(ah, ah));	// 128406 xor     ah, ah ;~ 4E73:0830
cs=0x4e73;eip=0x000832; 	T(ADD(ax, ax));	// 128407 add     ax, ax ;~ 4E73:0832
cs=0x4e73;eip=0x000834; 	T(MOV(si, ax));	// 128408 mov     si, ax ;~ 4E73:0834
cs=0x4e73;eip=0x000836; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x147))));	// 128409 mov     ax, [si+147h] ;~ 4E73:0836
cs=0x4e73;eip=0x00083a; 	T(SUB(al, ch));	// 128410 sub     al, ch ;~ 4E73:083A
cs=0x4e73;eip=0x00083c; 	T(SBB(ah, 0));	// 128411 sbb     ah, 0 ;~ 4E73:083C
cs=0x4e73;eip=0x00083f; 	R(JMP(loc_5d5dd));	// 128412 jmp     loc_5D5DD ;~ 4E73:083F
loc_5d552:
	// 8672 
cs=0x4e73;eip=0x000842; 	T(INC(ax));	// 128416 inc     ax ;~ 4E73:0842
cs=0x4e73;eip=0x000843; 	T(ROR(ax, 1));	// 128417 ror     ax, 1 ;~ 4E73:0843
cs=0x4e73;eip=0x000845; 	T(ROR(ax, 1));	// 128418 ror     ax, 1 ;~ 4E73:0845
cs=0x4e73;eip=0x000847; 	T(ROR(ax, 1));	// 128419 ror     ax, 1 ;~ 4E73:0847
cs=0x4e73;eip=0x000849; 	T(ROR(ax, 1));	// 128420 ror     ax, 1 ;~ 4E73:0849
cs=0x4e73;eip=0x00084b; 	T(ROR(ax, 1));	// 128421 ror     ax, 1 ;~ 4E73:084B
cs=0x4e73;eip=0x00084d; 	T(ADD(ch, al));	// 128422 add     ch, al ;~ 4E73:084D
cs=0x4e73;eip=0x00084f; 	T(CMP(ch, 0x0C));	// 128423 cmp     ch, 0Ch ;~ 4E73:084F
cs=0x4e73;eip=0x000852; 	R(JC(loc_5d569));	// 128424 jb      short loc_5D569 ;~ 4E73:0852
cs=0x4e73;eip=0x000854; 	T(SUB(ch, 0x0C));	// 128425 sub     ch, 0Ch ;~ 4E73:0854
cs=0x4e73;eip=0x000857; 	T(INC(cl));	// 128426 inc     cl ;~ 4E73:0857
loc_5d569:
	// 8673 
cs=0x4e73;eip=0x000859; 	T(MOV(al, ch));	// 128429 mov     al, ch ;~ 4E73:0859
cs=0x4e73;eip=0x00085b; 	T(MOV(bx, 0x184));	// 128430 mov     bx, 184h ;~ 4E73:085B
cs=0x4e73;eip=0x00085e; 	T(XLAT);	// 128431 xlat ;~ 4E73:085E
cs=0x4e73;eip=0x00085f; 	T(MUL1_1(ah));	// 128432 mul     ah ;~ 4E73:085F
cs=0x4e73;eip=0x000861; 	T(MOV(al, ah));	// 128433 mov     al, ah ;~ 4E73:0861
cs=0x4e73;eip=0x000863; 	R(JMP(loc_5d5cc));	// 128434 jmp     short loc_5D5CC ;~ 4E73:0863
loc_5d575:
	// 8674 
cs=0x4e73;eip=0x000865; 	T(SUB(ax, 0x40));	// 128438 sub     ax, 40h ; '@' ;~ 4E73:0865
cs=0x4e73;eip=0x000868; 	R(JNC(loc_5d5ae));	// 128439 jnb     short loc_5D5AE ;~ 4E73:0868
cs=0x4e73;eip=0x00086a; 	T(NEG(ax));	// 128440 neg     ax ;~ 4E73:086A
cs=0x4e73;eip=0x00086c; 	T(MOV(bh, 5));	// 128441 mov     bh, 5 ;~ 4E73:086C
cs=0x4e73;eip=0x00086e; 	T(DIV1(bh));	// 128442 div     bh ;~ 4E73:086E
cs=0x4e73;eip=0x000870; 	T(SUB(ch, al));	// 128443 sub     ch, al ;~ 4E73:0870
cs=0x4e73;eip=0x000872; 	R(JNC(loc_5d58d));	// 128444 jnb     short loc_5D58D ;~ 4E73:0872
cs=0x4e73;eip=0x000874; 	T(ADD(ch, 0x0C));	// 128445 add     ch, 0Ch ;~ 4E73:0874
cs=0x4e73;eip=0x000877; 	T(DEC(cl));	// 128446 dec     cl ;~ 4E73:0877
cs=0x4e73;eip=0x000879; 	R(JNS(loc_5d58d));	// 128447 jns     short loc_5D58D ;~ 4E73:0879
cs=0x4e73;eip=0x00087b; 	T(XOR(cx, cx));	// 128448 xor     cx, cx ;~ 4E73:087B
loc_5d58d:
	// 8675 
cs=0x4e73;eip=0x00087d; 	T(MOV(al, ah));	// 128452 mov     al, ah ;~ 4E73:087D
cs=0x4e73;eip=0x00087f; 	T(MOV(bx, 0x190));	// 128453 mov     bx, 190h ;~ 4E73:087F
cs=0x4e73;eip=0x000882; 	T(CMP(ch, 6));	// 128454 cmp     ch, 6 ;~ 4E73:0882
cs=0x4e73;eip=0x000885; 	R(JC(loc_5d59a));	// 128455 jb      short loc_5D59A ;~ 4E73:0885
cs=0x4e73;eip=0x000887; 	T(ADD(bx, 5));	// 128456 add     bx, 5 ;~ 4E73:0887
loc_5d59a:
	// 8676 
cs=0x4e73;eip=0x00088a; 	T(XLAT);	// 128459 xlat ;~ 4E73:088A
cs=0x4e73;eip=0x00088b; 	T(XCHG(al, ch));	// 128460 xchg    al, ch ;~ 4E73:088B
cs=0x4e73;eip=0x00088d; 	T(XOR(ah, ah));	// 128461 xor     ah, ah ;~ 4E73:088D
cs=0x4e73;eip=0x00088f; 	T(ADD(ax, ax));	// 128462 add     ax, ax ;~ 4E73:088F
cs=0x4e73;eip=0x000891; 	T(MOV(si, ax));	// 128463 mov     si, ax ;~ 4E73:0891
cs=0x4e73;eip=0x000893; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x147))));	// 128464 mov     ax, [si+147h] ;~ 4E73:0893
cs=0x4e73;eip=0x000897; 	T(SUB(al, ch));	// 128465 sub     al, ch ;~ 4E73:0897
cs=0x4e73;eip=0x000899; 	T(SBB(ah, 0));	// 128466 sbb     ah, 0 ;~ 4E73:0899
cs=0x4e73;eip=0x00089c; 	R(JMP(loc_5d5dd));	// 128467 jmp     short loc_5D5DD ;~ 4E73:089C
loc_5d5ae:
	// 8677 
cs=0x4e73;eip=0x00089e; 	T(MOV(bh, 5));	// 128471 mov     bh, 5 ;~ 4E73:089E
cs=0x4e73;eip=0x0008a0; 	T(DIV1(bh));	// 128472 div     bh ;~ 4E73:08A0
cs=0x4e73;eip=0x0008a2; 	T(ADD(ch, al));	// 128473 add     ch, al ;~ 4E73:08A2
cs=0x4e73;eip=0x0008a4; 	T(CMP(ch, 0x0C));	// 128474 cmp     ch, 0Ch ;~ 4E73:08A4
cs=0x4e73;eip=0x0008a7; 	R(JC(loc_5d5be));	// 128475 jb      short loc_5D5BE ;~ 4E73:08A7
cs=0x4e73;eip=0x0008a9; 	T(SUB(ch, 0x0C));	// 128476 sub     ch, 0Ch ;~ 4E73:08A9
cs=0x4e73;eip=0x0008ac; 	T(INC(cl));	// 128477 inc     cl ;~ 4E73:08AC
loc_5d5be:
	// 8678 
cs=0x4e73;eip=0x0008ae; 	T(MOV(al, ah));	// 128480 mov     al, ah ;~ 4E73:08AE
cs=0x4e73;eip=0x0008b0; 	T(MOV(bx, 0x190));	// 128481 mov     bx, 190h ;~ 4E73:08B0
cs=0x4e73;eip=0x0008b3; 	T(CMP(ch, 6));	// 128482 cmp     ch, 6 ;~ 4E73:08B3
cs=0x4e73;eip=0x0008b6; 	R(JC(loc_5d5cb));	// 128483 jb      short loc_5D5CB ;~ 4E73:08B6
cs=0x4e73;eip=0x0008b8; 	T(ADD(bx, 5));	// 128484 add     bx, 5 ;~ 4E73:08B8
loc_5d5cb:
	// 8679 
cs=0x4e73;eip=0x0008bb; 	T(XLAT);	// 128487 xlat ;~ 4E73:08BB
loc_5d5cc:
	// 8680 
cs=0x4e73;eip=0x0008bc; 	T(XCHG(al, ch));	// 128490 xchg    al, ch ;~ 4E73:08BC
cs=0x4e73;eip=0x0008be; 	T(XOR(ah, ah));	// 128491 xor     ah, ah ;~ 4E73:08BE
cs=0x4e73;eip=0x0008c0; 	T(ADD(ax, ax));	// 128492 add     ax, ax ;~ 4E73:08C0
cs=0x4e73;eip=0x0008c2; 	T(MOV(si, ax));	// 128493 mov     si, ax ;~ 4E73:08C2
cs=0x4e73;eip=0x0008c4; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x147))));	// 128494 mov     ax, [si+147h] ;~ 4E73:08C4
cs=0x4e73;eip=0x0008c8; 	T(ADD(al, ch));	// 128495 add     al, ch ;~ 4E73:08C8
cs=0x4e73;eip=0x0008ca; 	T(ADC(ah, 0));	// 128496 adc     ah, 0 ;~ 4E73:08CA
loc_5d5dd:
	// 8681 
cs=0x4e73;eip=0x0008cd; 	T(SHL(cl, 1));	// 128500 shl     cl, 1 ;~ 4E73:08CD
cs=0x4e73;eip=0x0008cf; 	T(SHL(cl, 1));	// 128501 shl     cl, 1 ;~ 4E73:08CF
cs=0x4e73;eip=0x0008d1; 	T(OR(ah, cl));	// 128502 or      ah, cl ;~ 4E73:08D1
cs=0x4e73;eip=0x0008d3; 	T(MOV(si, dx));	// 128503 mov     si, dx ;~ 4E73:08D3
cs=0x4e73;eip=0x0008d5; 	T(ADD(si, si));	// 128504 add     si, si ;~ 4E73:08D5
cs=0x4e73;eip=0x0008d7; 	X(MOV(*(dw*)(raddr(ds,si+0x15F)), ax));	// 128505 mov     [si+15Fh], ax ;~ 4E73:08D7
cs=0x4e73;eip=0x0008db; 	T(OR(ah, 0x20));	// 128506 or      ah, 20h ;~ 4E73:08DB
cs=0x4e73;eip=0x0008de; 	R(JMP(loc_5d79f));	// 128507 jmp     loc_5D79F ;~ 4E73:08DE
sub_5d5f1:
	// 128514 
cs=0x4e73;eip=0x0008e1; 	X(PUSH(ax));	// 128516 push    ax ;~ 4E73:08E1
ret_4e73_8e2:
	// 8682 
cs=0x4e73;eip=0x0008e2; 	T(XOR(ax, ax));	// 128517 xor     ax, ax ;~ 4E73:08E2
cs=0x4e73;eip=0x0008e4; 	X(LODS(*(raddr(es,si)),si,1));	// 128518 lods    byte ptr es:[si] ;~ 4E73:08E4
cs=0x4e73;eip=0x0008e6; 	T(OR(al, al));	// 128519 or      al, al ;~ 4E73:08E6
cs=0x4e73;eip=0x0008e8; 	R(JNS(loc_5d624));	// 128520 jns     short loc_5D624 ;~ 4E73:08E8
cs=0x4e73;eip=0x0008ea; 	T(XOR(cx, cx));	// 128521 xor     cx, cx ;~ 4E73:08EA
loc_5d5fc:
	// 8683 
cs=0x4e73;eip=0x0008ec; 	T(MOV(ch, cl));	// 128524 mov     ch, cl ;~ 4E73:08EC
cs=0x4e73;eip=0x0008ee; 	T(MOV(cl, ah));	// 128525 mov     cl, ah ;~ 4E73:08EE
cs=0x4e73;eip=0x0008f0; 	T(MOV(ah, al));	// 128526 mov     ah, al ;~ 4E73:08F0
cs=0x4e73;eip=0x0008f2; 	X(LODS(*(raddr(es,si)),si,1));	// 128527 lods    byte ptr es:[si] ;~ 4E73:08F2
cs=0x4e73;eip=0x0008f4; 	T(OR(al, al));	// 128528 or      al, al ;~ 4E73:08F4
cs=0x4e73;eip=0x0008f6; 	R(JS(loc_5d5fc));	// 128529 js      short loc_5D5FC ;~ 4E73:08F6
cs=0x4e73;eip=0x0008f8; 	T(AND(ax, 0x7F7F));	// 128530 and     ax, 7F7Fh ;~ 4E73:08F8
cs=0x4e73;eip=0x0008fb; 	T(AND(cx, 0x7F7F));	// 128531 and     cx, 7F7Fh ;~ 4E73:08FB
cs=0x4e73;eip=0x0008ff; 	T(SHL(cl, 1));	// 128532 shl     cl, 1 ;~ 4E73:08FF
cs=0x4e73;eip=0x000901; 	T(SHR(cx, 1));	// 128533 shr     cx, 1 ;~ 4E73:0901
cs=0x4e73;eip=0x000903; 	T(SHL(al, 1));	// 128534 shl     al, 1 ;~ 4E73:0903
cs=0x4e73;eip=0x000905; 	T(SHL(ax, 1));	// 128535 shl     ax, 1 ;~ 4E73:0905
cs=0x4e73;eip=0x000907; 	T(SHR(cx, 1));	// 128536 shr     cx, 1 ;~ 4E73:0907
cs=0x4e73;eip=0x000909; 	T(RCR(ax, 1));	// 128537 rcr     ax, 1 ;~ 4E73:0909
cs=0x4e73;eip=0x00090b; 	T(SHR(cx, 1));	// 128538 shr     cx, 1 ;~ 4E73:090B
cs=0x4e73;eip=0x00090d; 	T(RCR(ax, 1));	// 128539 rcr     ax, 1 ;~ 4E73:090D
cs=0x4e73;eip=0x00090f; 	R(JCXZ(loc_5d624));	// 128540 jcxz    short loc_5D624 ;~ 4E73:090F
cs=0x4e73;eip=0x000911; 	T(MOV(ax, 0x0FFFF));	// 128541 mov     ax, 0FFFFh ;~ 4E73:0911
loc_5d624:
	// 8684 
cs=0x4e73;eip=0x000914; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 128545 mov     [di], ax ;~ 4E73:0914
cs=0x4e73;eip=0x000916; 	X(MOV(*(dw*)(raddr(ds,di+0x12)), si));	// 128546 mov     [di+12h], si ;~ 4E73:0916
cs=0x4e73;eip=0x000919; 	X(POP(ax));	// 128547 pop     ax ;~ 4E73:0919
cs=0x4e73;eip=0x00091a; 	R(RETN(0));	// 128548 retn ;~ 4E73:091A
sub_5d62b:
	// 128555 
cs=0x4e73;eip=0x00091b; 	X(PUSH(ds));	// 128557 push    ds ;~ 4E73:091B
ret_4e73_91c:
	// 8685 
cs=0x4e73;eip=0x00091c; 	X(PUSH(cs));	// 128558 push    cs ;~ 4E73:091C
cs=0x4e73;eip=0x00091d; 	X(POP(ds));	// 128559 pop     ds ;~ 4E73:091D
cs=0x4e73;eip=0x00091e; 	T(MOV(cx, 9));	// 128561 mov     cx, 9 ;~ 4E73:091E
loc_5d631:
	// 8686 
cs=0x4e73;eip=0x000921; 	X(PUSH(cx));	// 128564 push    cx ;~ 4E73:0921
cs=0x4e73;eip=0x000922; 	T(MOV(dx, cx));	// 128565 mov     dx, cx ;~ 4E73:0922
cs=0x4e73;eip=0x000924; 	T(DEC(dx));	// 128566 dec     dx ;~ 4E73:0924
cs=0x4e73;eip=0x000925; 	R(CALL(sub_5d797,0));	// 128567 call    sub_5D797 ;~ 4E73:0925
cs=0x4e73;eip=0x000928; 	X(POP(cx));	// 128568 pop     cx ;~ 4E73:0928
cs=0x4e73;eip=0x000929; 	R(LOOP(loc_5d631));	// 128569 loop    loc_5D631 ;~ 4E73:0929
cs=0x4e73;eip=0x00092b; 	X(POP(ds));	// 128570 pop     ds ;~ 4E73:092B
cs=0x4e73;eip=0x00092c; 	R(RETN(0));	// 128572 retn ;~ 4E73:092C
sub_5d63d:
	// 128579 
cs=0x4e73;eip=0x00092d; 	T(MOV(al, *(raddr(ds,0x19C))));	// 128580 mov     al, ds:19Ch ;~ 4E73:092D
ret_4e73_930:
	// 8687 
cs=0x4e73;eip=0x000930; 	T(CMP(al, *(raddr(ds,0x19D))));	// 128581 cmp     al, ds:19Dh ;~ 4E73:0930
cs=0x4e73;eip=0x000934; 	R(JNZ(loc_5d652));	// 128582 jnz     short loc_5D652 ;~ 4E73:0934
cs=0x4e73;eip=0x000936; 	X(MOV(*(dw*)(raddr(ds,0x19F)), 1));	// 128583 mov     word ptr ds:19Fh, 1 ;~ 4E73:0936
cs=0x4e73;eip=0x00093c; 	X(AND(*(raddr(ds,0x19A)), 0x0BF));	// 128584 and     byte ptr ds:19Ah, 0BFh ;~ 4E73:093C
cs=0x4e73;eip=0x000941; 	R(RETN(0));	// 128585 retn ;~ 4E73:0941
loc_5d652:
	// 8688 
cs=0x4e73;eip=0x000942; 	T(MOV(ah, al));	// 128589 mov     ah, al ;~ 4E73:0942
cs=0x4e73;eip=0x000944; 	T(MOV(bl, *(raddr(ds,0x19D))));	// 128590 mov     bl, ds:19Dh ;~ 4E73:0944
cs=0x4e73;eip=0x000948; 	T(MOV(bh, bl));	// 128591 mov     bh, bl ;~ 4E73:0948
cs=0x4e73;eip=0x00094a; 	T(AND(al, 0x0F));	// 128592 and     al, 0Fh ;~ 4E73:094A
cs=0x4e73;eip=0x00094c; 	T(AND(bl, 0x0F));	// 128593 and     bl, 0Fh ;~ 4E73:094C
cs=0x4e73;eip=0x00094f; 	T(CMP(al, bl));	// 128594 cmp     al, bl ;~ 4E73:094F
cs=0x4e73;eip=0x000951; 	R(JZ(loc_5d66b));	// 128595 jz      short loc_5D66B ;~ 4E73:0951
cs=0x4e73;eip=0x000953; 	T(INC(ah));	// 128596 inc     ah ;~ 4E73:0953
cs=0x4e73;eip=0x000955; 	R(JC(loc_5d66b));	// 128597 jb      short loc_5D66B ;~ 4E73:0955
cs=0x4e73;eip=0x000957; 	T(DEC(ah));	// 128598 dec     ah ;~ 4E73:0957
cs=0x4e73;eip=0x000959; 	T(DEC(ah));	// 128599 dec     ah ;~ 4E73:0959
loc_5d66b:
	// 8689 
cs=0x4e73;eip=0x00095b; 	T(MOV(al, ah));	// 128603 mov     al, ah ;~ 4E73:095B
cs=0x4e73;eip=0x00095d; 	T(AND(ah, 0x0F0));	// 128604 and     ah, 0F0h ;~ 4E73:095D
cs=0x4e73;eip=0x000960; 	T(AND(bh, 0x0F0));	// 128605 and     bh, 0F0h ;~ 4E73:0960
cs=0x4e73;eip=0x000963; 	T(CMP(ah, bh));	// 128606 cmp     ah, bh ;~ 4E73:0963
cs=0x4e73;eip=0x000965; 	R(JZ(loc_5d67f));	// 128607 jz      short loc_5D67F ;~ 4E73:0965
cs=0x4e73;eip=0x000967; 	T(ADD(al, 0x10));	// 128608 add     al, 10h ;~ 4E73:0967
cs=0x4e73;eip=0x000969; 	T(CMP(ah, bh));	// 128609 cmp     ah, bh ;~ 4E73:0969
cs=0x4e73;eip=0x00096b; 	R(JC(loc_5d67f));	// 128610 jb      short loc_5D67F ;~ 4E73:096B
cs=0x4e73;eip=0x00096d; 	T(SUB(al, 0x20));	// 128611 sub     al, 20h ; ' ' ;~ 4E73:096D
loc_5d67f:
	// 8690 
cs=0x4e73;eip=0x00096f; 	X(MOV(*(raddr(ds,0x19C)), al));	// 128615 mov     ds:19Ch, al ;~ 4E73:096F
cs=0x4e73;eip=0x000972; 	T(OR(al, al));	// 128616 or      al, al ;~ 4E73:0972
cs=0x4e73;eip=0x000974; 	R(JNZ(loc_5d696));	// 128617 jnz     short loc_5D696 ;~ 4E73:0974
cs=0x4e73;eip=0x000976; 	X(PUSH(dx));	// 128618 push    dx ;~ 4E73:0976
cs=0x4e73;eip=0x000977; 	X(PUSH(si));	// 128619 push    si ;~ 4E73:0977
cs=0x4e73;eip=0x000978; 	R(CALL(sub_5d62b,0));	// 128620 call    sub_5D62B ;~ 4E73:0978
cs=0x4e73;eip=0x00097b; 	X(POP(si));	// 128621 pop     si ;~ 4E73:097B
cs=0x4e73;eip=0x00097c; 	X(POP(dx));	// 128622 pop     dx ;~ 4E73:097C
cs=0x4e73;eip=0x00097d; 	X(MOV(*(raddr(ds,0x19A)), 0));	// 128623 mov     byte ptr ds:19Ah, 0 ;~ 4E73:097D
sub_5d692:
	// 128630 
	cs=seg_offset(seg004);
cs=0x4e73;eip=0x000982; 	T(MOV(al, *(&byte_5ceac)));	// 128631 mov     al, cs:byte_5CEAC ;~ 4E73:0982
loc_5d696:
	// 8691 
cs=0x4e73;eip=0x000986; 	T(MOV(ah, 0x26));	// 128634 mov     ah, 26h ; '&' ;~ 4E73:0986
cs=0x4e73;eip=0x000988; 	X(PUSH(dx));	// 128635 push    dx ;~ 4E73:0988
	cs=seg_offset(seg004);
cs=0x4e73;eip=0x000989; 	T(MOV(dx, *(dw*)(((db*)&word_5cfc3))));	// 128636 mov     dx, cs:word_5CFC3 ;~ 4E73:0989
cs=0x4e73;eip=0x00098e; 	T(ADD(dl, 4));	// 128637 add     dl, 4 ;~ 4E73:098E
cs=0x4e73;eip=0x000991; 	T(XCHG(al, ah));	// 128638 xchg    al, ah ;~ 4E73:0991
cs=0x4e73;eip=0x000993; 	R(OUT(dx, al));	// 128639 out     dx, al ;~ 4E73:0993
cs=0x4e73;eip=0x000994; 	T(INC(dx));	// 128640 inc     dx ;~ 4E73:0994
cs=0x4e73;eip=0x000995; 	T(XCHG(al, ah));	// 128641 xchg    al, ah ;~ 4E73:0995
cs=0x4e73;eip=0x000997; 	R(OUT(dx, al));	// 128642 out     dx, al ;~ 4E73:0997
cs=0x4e73;eip=0x000998; 	X(POP(dx));	// 128643 pop     dx ;~ 4E73:0998
cs=0x4e73;eip=0x000999; 	R(RETN(0));	// 128644 retn ;~ 4E73:0999
sub_5d6aa:
	// 128651 
cs=0x4e73;eip=0x00099a; 	T(MOV(si, 0x171));	// 128652 mov     si, 171h ;~ 4E73:099A
ret_4e73_99d:
	// 8692 
cs=0x4e73;eip=0x00099d; 	T(MOV(cx, 0x12));	// 128653 mov     cx, 12h ;~ 4E73:099D
cs=0x4e73;eip=0x0009a0; 	T(MOV(ah, 0x0FF));	// 128654 mov     ah, 0FFh ;~ 4E73:09A0
loc_5d6b2:
	// 8693 
cs=0x4e73;eip=0x0009a2; 	T(LODSB);	// 128657 lodsb ;~ 4E73:09A2
cs=0x4e73;eip=0x0009a3; 	T(ADD(al, 0x80));	// 128658 add     al, 80h ; '€' ;~ 4E73:09A3
cs=0x4e73;eip=0x0009a5; 	R(CALL(sub_5d7b2,0));	// 128659 call    sub_5D7B2 ;~ 4E73:09A5
cs=0x4e73;eip=0x0009a8; 	R(LOOP(loc_5d6b2));	// 128660 loop    loc_5D6B2 ;~ 4E73:09A8
cs=0x4e73;eip=0x0009aa; 	R(RETN(0));	// 128661 retn ;~ 4E73:09AA
sub_5d6bb:
	// 128668 
cs=0x4e73;eip=0x0009ab; 	T(ADD(dx, dx));	// 128669 add     dx, dx ;~ 4E73:09AB
ret_4e73_9ad:
	// 8694 
cs=0x4e73;eip=0x0009ad; 	T(MOV(bx, dx));	// 128670 mov     bx, dx ;~ 4E73:09AD
cs=0x4e73;eip=0x0009af; 	T(MOV(dx, *(dw*)(raddr(cs,bx+0x135))));	// 128671 mov     dx, cs:[bx+135h] ;~ 4E73:09AF
cs=0x4e73;eip=0x0009b4; 	T(SHR(bx, 1));	// 128672 shr     bx, 1 ;~ 4E73:09B4
cs=0x4e73;eip=0x0009b6; 	R(CALL(sub_5d6d3,0));	// 128673 call    sub_5D6D3 ;~ 4E73:09B6
cs=0x4e73;eip=0x0009b9; 	T(XCHG(dh, dl));	// 128674 xchg    dh, dl ;~ 4E73:09B9
cs=0x4e73;eip=0x0009bb; 	T(MOV(ah, *(raddr(ds,si+0x1B))));	// 128675 mov     ah, [si+1Bh] ;~ 4E73:09BB
cs=0x4e73;eip=0x0009be; 	T(ADD(si, 0x0D));	// 128676 add     si, 0Dh ;~ 4E73:09BE
cs=0x4e73;eip=0x0009c1; 	R(JMP(loc_5d6ec));	// 128677 jmp     short loc_5D6EC ;~ 4E73:09C1
sub_5d6d3:
	// 128684 
cs=0x4e73;eip=0x0009c3; 	T(MOV(ah, *(raddr(ds,si+0x0C))));	// 128685 mov     ah, [si+0Ch] ;~ 4E73:09C3
ret_4e73_9c6:
	// 8695 
cs=0x4e73;eip=0x0009c6; 	T(SHR(ax, 1));	// 128686 shr     ax, 1 ;~ 4E73:09C6
cs=0x4e73;eip=0x0009c8; 	T(MOV(ah, *(raddr(ds,si+2))));	// 128687 mov     ah, [si+2] ;~ 4E73:09C8
cs=0x4e73;eip=0x0009cb; 	T(NOT(al));	// 128688 not     al ;~ 4E73:09CB
cs=0x4e73;eip=0x0009cd; 	T(SHL(ax, 1));	// 128689 shl     ax, 1 ;~ 4E73:09CD
cs=0x4e73;eip=0x0009cf; 	T(AND(ah, 0x0F));	// 128690 and     ah, 0Fh ;~ 4E73:09CF
cs=0x4e73;eip=0x0009d2; 	T(MOV(al, 0x0C0));	// 128691 mov     al, 0C0h ; 'À' ;~ 4E73:09D2
cs=0x4e73;eip=0x0009d4; 	T(ADD(al, bl));	// 128692 add     al, bl ;~ 4E73:09D4
cs=0x4e73;eip=0x0009d6; 	R(CALL(sub_5d7b2,0));	// 128693 call    sub_5D7B2 ;~ 4E73:09D6
cs=0x4e73;eip=0x0009d9; 	T(MOV(ah, *(raddr(ds,si+0x1A))));	// 128694 mov     ah, [si+1Ah] ;~ 4E73:09D9
loc_5d6ec:
	// 8696 
cs=0x4e73;eip=0x0009dc; 	T(AND(ah, 3));	// 128697 and     ah, 3 ;~ 4E73:09DC
cs=0x4e73;eip=0x0009df; 	T(MOV(al, 0x0E0));	// 128698 mov     al, 0E0h ; 'à' ;~ 4E73:09DF
cs=0x4e73;eip=0x0009e1; 	T(ADD(al, dl));	// 128699 add     al, dl ;~ 4E73:09E1
cs=0x4e73;eip=0x0009e3; 	R(CALL(sub_5d7b2,0));	// 128700 call    sub_5D7B2 ;~ 4E73:09E3
cs=0x4e73;eip=0x0009e6; 	T(MOV(ah, *(raddr(ds,si+8))));	// 128701 mov     ah, [si+8] ;~ 4E73:09E6
cs=0x4e73;eip=0x0009e9; 	T(MOV(al, *(raddr(ds,si))));	// 128702 mov     al, [si] ;~ 4E73:09E9
cs=0x4e73;eip=0x0009eb; 	T(SHL(ah, 1));	// 128703 shl     ah, 1 ;~ 4E73:09EB
cs=0x4e73;eip=0x0009ed; 	T(SHL(ah, 1));	// 128704 shl     ah, 1 ;~ 4E73:09ED
cs=0x4e73;eip=0x0009ef; 	T(ROR(ax, 1));	// 128705 ror     ax, 1 ;~ 4E73:09EF
cs=0x4e73;eip=0x0009f1; 	T(ROR(ax, 1));	// 128706 ror     ax, 1 ;~ 4E73:09F1
cs=0x4e73;eip=0x0009f3; 	T(MOV(al, 0x40));	// 128707 mov     al, 40h ; '@' ;~ 4E73:09F3
cs=0x4e73;eip=0x0009f5; 	T(ADD(al, dl));	// 128708 add     al, dl ;~ 4E73:09F5
cs=0x4e73;eip=0x0009f7; 	R(CALL(sub_5d7b2,0));	// 128709 call    sub_5D7B2 ;~ 4E73:09F7
cs=0x4e73;eip=0x0009fa; 	T(MOV(ah, *(raddr(ds,si+3))));	// 128710 mov     ah, [si+3] ;~ 4E73:09FA
cs=0x4e73;eip=0x0009fd; 	T(MOV(al, *(raddr(ds,si+6))));	// 128711 mov     al, [si+6] ;~ 4E73:09FD
cs=0x4e73;eip=0x000a00; 	T(SHL(al, 1));	// 128712 shl     al, 1 ;~ 4E73:0A00
cs=0x4e73;eip=0x000a02; 	T(SHL(al, 1));	// 128713 shl     al, 1 ;~ 4E73:0A02
cs=0x4e73;eip=0x000a04; 	T(SHL(al, 1));	// 128714 shl     al, 1 ;~ 4E73:0A04
cs=0x4e73;eip=0x000a06; 	T(SHL(al, 1));	// 128715 shl     al, 1 ;~ 4E73:0A06
cs=0x4e73;eip=0x000a08; 	T(SHL(ax, 1));	// 128716 shl     ax, 1 ;~ 4E73:0A08
cs=0x4e73;eip=0x000a0a; 	T(SHL(ax, 1));	// 128717 shl     ax, 1 ;~ 4E73:0A0A
cs=0x4e73;eip=0x000a0c; 	T(SHL(ax, 1));	// 128718 shl     ax, 1 ;~ 4E73:0A0C
cs=0x4e73;eip=0x000a0e; 	T(SHL(ax, 1));	// 128719 shl     ax, 1 ;~ 4E73:0A0E
cs=0x4e73;eip=0x000a10; 	T(MOV(al, 0x60));	// 128720 mov     al, 60h ; '`' ;~ 4E73:0A10
cs=0x4e73;eip=0x000a12; 	T(ADD(al, dl));	// 128721 add     al, dl ;~ 4E73:0A12
cs=0x4e73;eip=0x000a14; 	R(CALL(sub_5d7b2,0));	// 128722 call    sub_5D7B2 ;~ 4E73:0A14
cs=0x4e73;eip=0x000a17; 	T(MOV(ah, *(raddr(ds,si+4))));	// 128723 mov     ah, [si+4] ;~ 4E73:0A17
cs=0x4e73;eip=0x000a1a; 	T(MOV(al, *(raddr(ds,si+7))));	// 128724 mov     al, [si+7] ;~ 4E73:0A1A
cs=0x4e73;eip=0x000a1d; 	T(SHL(al, 1));	// 128725 shl     al, 1 ;~ 4E73:0A1D
cs=0x4e73;eip=0x000a1f; 	T(SHL(al, 1));	// 128726 shl     al, 1 ;~ 4E73:0A1F
cs=0x4e73;eip=0x000a21; 	T(SHL(al, 1));	// 128727 shl     al, 1 ;~ 4E73:0A21
cs=0x4e73;eip=0x000a23; 	T(SHL(al, 1));	// 128728 shl     al, 1 ;~ 4E73:0A23
cs=0x4e73;eip=0x000a25; 	T(SHL(ax, 1));	// 128729 shl     ax, 1 ;~ 4E73:0A25
cs=0x4e73;eip=0x000a27; 	T(SHL(ax, 1));	// 128730 shl     ax, 1 ;~ 4E73:0A27
cs=0x4e73;eip=0x000a29; 	T(SHL(ax, 1));	// 128731 shl     ax, 1 ;~ 4E73:0A29
cs=0x4e73;eip=0x000a2b; 	T(SHL(ax, 1));	// 128732 shl     ax, 1 ;~ 4E73:0A2B
cs=0x4e73;eip=0x000a2d; 	T(MOV(al, 0x80));	// 128733 mov     al, 80h ; '€' ;~ 4E73:0A2D
cs=0x4e73;eip=0x000a2f; 	T(ADD(al, dl));	// 128734 add     al, dl ;~ 4E73:0A2F
cs=0x4e73;eip=0x000a31; 	R(CALL(sub_5d7b2,0));	// 128735 call    sub_5D7B2 ;~ 4E73:0A31
cs=0x4e73;eip=0x000a34; 	T(MOV(al, *(raddr(ds,si+0x0B))));	// 128736 mov     al, [si+0Bh] ;~ 4E73:0A34
cs=0x4e73;eip=0x000a37; 	T(ROR(ax, 1));	// 128737 ror     ax, 1 ;~ 4E73:0A37
cs=0x4e73;eip=0x000a39; 	T(MOV(al, *(raddr(ds,si+5))));	// 128738 mov     al, [si+5] ;~ 4E73:0A39
cs=0x4e73;eip=0x000a3c; 	T(ROR(ax, 1));	// 128739 ror     ax, 1 ;~ 4E73:0A3C
cs=0x4e73;eip=0x000a3e; 	T(MOV(al, *(raddr(ds,si+0x0A))));	// 128740 mov     al, [si+0Ah] ;~ 4E73:0A3E
cs=0x4e73;eip=0x000a41; 	T(ROR(ax, 1));	// 128741 ror     ax, 1 ;~ 4E73:0A41
cs=0x4e73;eip=0x000a43; 	T(MOV(al, *(raddr(ds,si+9))));	// 128742 mov     al, [si+9] ;~ 4E73:0A43
cs=0x4e73;eip=0x000a46; 	T(ROR(ax, 1));	// 128743 ror     ax, 1 ;~ 4E73:0A46
cs=0x4e73;eip=0x000a48; 	T(MOV(al, *(raddr(ds,si+1))));	// 128744 mov     al, [si+1] ;~ 4E73:0A48
cs=0x4e73;eip=0x000a4b; 	T(AND(ax, 0x0F00F));	// 128745 and     ax, 0F00Fh ;~ 4E73:0A4B
cs=0x4e73;eip=0x000a4e; 	T(OR(ah, al));	// 128746 or      ah, al ;~ 4E73:0A4E
cs=0x4e73;eip=0x000a50; 	T(MOV(al, 0x20));	// 128747 mov     al, 20h ; ' ' ;~ 4E73:0A50
cs=0x4e73;eip=0x000a52; 	T(ADD(al, dl));	// 128748 add     al, dl ;~ 4E73:0A52
cs=0x4e73;eip=0x000a54; 	R(CALL(sub_5d7b2,0));	// 128749 call    sub_5D7B2 ;~ 4E73:0A54
cs=0x4e73;eip=0x000a57; 	R(RETN(0));	// 128750 retn ;~ 4E73:0A57
seg004_a58_proc:
	// 128755 
loc_5d768:
	// 8697 
cs=0x4e73;eip=0x000a58; 	T(ADD(ax, 0x30));	// 128756 add     ax, 30h ; '0' ;~ 4E73:0A58
cs=0x4e73;eip=0x000a5b; 	T(CMP(ax, 0x60));	// 128757 cmp     ax, 60h ; '`' ;~ 4E73:0A5B
cs=0x4e73;eip=0x000a5e; 	R(JC(loc_5d772));	// 128758 jb      short loc_5D772 ;~ 4E73:0A5E
cs=0x4e73;eip=0x000a60; 	T(XOR(ax, ax));	// 128759 xor     ax, ax ;~ 4E73:0A60
loc_5d772:
	// 8698 
cs=0x4e73;eip=0x000a62; 	T(MOV(bl, 0x0C));	// 128762 mov     bl, 0Ch ;~ 4E73:0A62
cs=0x4e73;eip=0x000a64; 	T(DIV1(bl));	// 128763 div     bl ;~ 4E73:0A64
cs=0x4e73;eip=0x000a66; 	T(MOV(cl, al));	// 128764 mov     cl, al ;~ 4E73:0A66
cs=0x4e73;eip=0x000a68; 	T(XCHG(ah, al));	// 128765 xchg    ah, al ;~ 4E73:0A68
cs=0x4e73;eip=0x000a6a; 	T(XOR(ah, ah));	// 128766 xor     ah, ah ;~ 4E73:0A6A
cs=0x4e73;eip=0x000a6c; 	T(ADD(ax, ax));	// 128767 add     ax, ax ;~ 4E73:0A6C
cs=0x4e73;eip=0x000a6e; 	T(MOV(si, ax));	// 128768 mov     si, ax ;~ 4E73:0A6E
cs=0x4e73;eip=0x000a70; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x147))));	// 128769 mov     ax, [si+147h] ;~ 4E73:0A70
cs=0x4e73;eip=0x000a74; 	T(SHL(cl, 1));	// 128770 shl     cl, 1 ;~ 4E73:0A74
cs=0x4e73;eip=0x000a76; 	T(SHL(cl, 1));	// 128771 shl     cl, 1 ;~ 4E73:0A76
cs=0x4e73;eip=0x000a78; 	T(OR(ah, cl));	// 128772 or      ah, cl ;~ 4E73:0A78
cs=0x4e73;eip=0x000a7a; 	T(MOV(si, dx));	// 128773 mov     si, dx ;~ 4E73:0A7A
cs=0x4e73;eip=0x000a7c; 	T(ADD(si, si));	// 128774 add     si, si ;~ 4E73:0A7C
cs=0x4e73;eip=0x000a7e; 	X(MOV(*(dw*)(raddr(ds,si+0x15F)), ax));	// 128775 mov     [si+15Fh], ax ;~ 4E73:0A7E
cs=0x4e73;eip=0x000a82; 	T(OR(ah, 0x20));	// 128776 or      ah, 20h ;~ 4E73:0A82
cs=0x4e73;eip=0x000a85; 	R(JMP(loc_5d79f));	// 128777 jmp     short loc_5D79F ;~ 4E73:0A85
sub_5d797:
	// 128782 
cs=0x4e73;eip=0x000a87; 	T(MOV(si, dx));	// 128784 mov     si, dx ;~ 4E73:0A87
ret_4e73_a89:
	// 8699 
cs=0x4e73;eip=0x000a89; 	T(ADD(si, si));	// 128785 add     si, si ;~ 4E73:0A89
cs=0x4e73;eip=0x000a8b; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x15F))));	// 128786 mov     ax, [si+15Fh] ;~ 4E73:0A8B
loc_5d79f:
	// 8700 
cs=0x4e73;eip=0x000a8f; 	T(MOV(cx, ax));	// 128790 mov     cx, ax ;~ 4E73:0A8F
cs=0x4e73;eip=0x000a91; 	T(MOV(al, dl));	// 128791 mov     al, dl ;~ 4E73:0A91
cs=0x4e73;eip=0x000a93; 	T(ADD(al, 0x0A0));	// 128792 add     al, 0A0h ; ' ' ;~ 4E73:0A93
cs=0x4e73;eip=0x000a95; 	T(MOV(ah, cl));	// 128793 mov     ah, cl ;~ 4E73:0A95
cs=0x4e73;eip=0x000a97; 	T(MOV(si, ax));	// 128794 mov     si, ax ;~ 4E73:0A97
cs=0x4e73;eip=0x000a99; 	R(CALL(sub_5d7b2,0));	// 128795 call    sub_5D7B2 ;~ 4E73:0A99
cs=0x4e73;eip=0x000a9c; 	T(MOV(ax, si));	// 128796 mov     ax, si ;~ 4E73:0A9C
cs=0x4e73;eip=0x000a9e; 	T(ADD(al, 0x10));	// 128797 add     al, 10h ;~ 4E73:0A9E
cs=0x4e73;eip=0x000aa0; 	T(MOV(ah, ch));	// 128798 mov     ah, ch ;~ 4E73:0AA0
sub_5d7b2:
	// 128805 
cs=0x4e73;eip=0x000aa2; 	X(PUSH(dx));	// 128807 push    dx ;~ 4E73:0AA2
cs=0x4e73;eip=0x000aa3; 	T(MOV(dx, 0x388));	// 128808 mov     dx, 388h ;~ 4E73:0AA3
cs=0x4e73;eip=0x000aa6; 	R(OUT(dx, al));	// 128809 out     dx, al ;~ 4E73:0AA6
cs=0x4e73;eip=0x000aa7; 	R(IN(al, dx));	// 128810 in      al, dx ;~ 4E73:0AA7
cs=0x4e73;eip=0x000aa8; 	R(IN(al, dx));	// 128811 in      al, dx ;~ 4E73:0AA8
cs=0x4e73;eip=0x000aa9; 	R(IN(al, dx));	// 128812 in      al, dx ;~ 4E73:0AA9
cs=0x4e73;eip=0x000aaa; 	R(IN(al, dx));	// 128813 in      al, dx ;~ 4E73:0AAA
cs=0x4e73;eip=0x000aab; 	R(IN(al, dx));	// 128814 in      al, dx ;~ 4E73:0AAB
cs=0x4e73;eip=0x000aac; 	R(IN(al, dx));	// 128815 in      al, dx ;~ 4E73:0AAC
cs=0x4e73;eip=0x000aad; 	R(IN(al, dx));	// 128816 in      al, dx ;~ 4E73:0AAD
cs=0x4e73;eip=0x000aae; 	T(INC(dx));	// 128817 inc     dx ;~ 4E73:0AAE
cs=0x4e73;eip=0x000aaf; 	T(MOV(al, ah));	// 128818 mov     al, ah ;~ 4E73:0AAF
cs=0x4e73;eip=0x000ab1; 	R(OUT(dx, al));	// 128819 out     dx, al ;~ 4E73:0AB1
cs=0x4e73;eip=0x000ab2; 	R(IN(al, dx));	// 128820 in      al, dx ;~ 4E73:0AB2
cs=0x4e73;eip=0x000ab3; 	R(IN(al, dx));	// 128821 in      al, dx ;~ 4E73:0AB3
cs=0x4e73;eip=0x000ab4; 	R(IN(al, dx));	// 128822 in      al, dx ;~ 4E73:0AB4
cs=0x4e73;eip=0x000ab5; 	R(IN(al, dx));	// 128823 in      al, dx ;~ 4E73:0AB5
cs=0x4e73;eip=0x000ab6; 	R(IN(al, dx));	// 128824 in      al, dx ;~ 4E73:0AB6
cs=0x4e73;eip=0x000ab7; 	R(IN(al, dx));	// 128825 in      al, dx ;~ 4E73:0AB7
cs=0x4e73;eip=0x000ab8; 	R(IN(al, dx));	// 128826 in      al, dx ;~ 4E73:0AB8
cs=0x4e73;eip=0x000ab9; 	R(IN(al, dx));	// 128827 in      al, dx ;~ 4E73:0AB9
cs=0x4e73;eip=0x000aba; 	R(IN(al, dx));	// 128828 in      al, dx ;~ 4E73:0ABA
cs=0x4e73;eip=0x000abb; 	R(IN(al, dx));	// 128829 in      al, dx ;~ 4E73:0ABB
cs=0x4e73;eip=0x000abc; 	R(IN(al, dx));	// 128830 in      al, dx ;~ 4E73:0ABC
cs=0x4e73;eip=0x000abd; 	R(IN(al, dx));	// 128831 in      al, dx ;~ 4E73:0ABD
cs=0x4e73;eip=0x000abe; 	R(IN(al, dx));	// 128832 in      al, dx ;~ 4E73:0ABE
cs=0x4e73;eip=0x000abf; 	R(IN(al, dx));	// 128833 in      al, dx ;~ 4E73:0ABF
cs=0x4e73;eip=0x000ac0; 	R(IN(al, dx));	// 128834 in      al, dx ;~ 4E73:0AC0
cs=0x4e73;eip=0x000ac1; 	R(IN(al, dx));	// 128835 in      al, dx ;~ 4E73:0AC1
cs=0x4e73;eip=0x000ac2; 	R(IN(al, dx));	// 128836 in      al, dx ;~ 4E73:0AC2
cs=0x4e73;eip=0x000ac3; 	R(IN(al, dx));	// 128837 in      al, dx ;~ 4E73:0AC3
cs=0x4e73;eip=0x000ac4; 	R(IN(al, dx));	// 128838 in      al, dx ;~ 4E73:0AC4
cs=0x4e73;eip=0x000ac5; 	R(IN(al, dx));	// 128839 in      al, dx ;~ 4E73:0AC5
cs=0x4e73;eip=0x000ac6; 	R(IN(al, dx));	// 128840 in      al, dx ;~ 4E73:0AC6
cs=0x4e73;eip=0x000ac7; 	R(IN(al, dx));	// 128841 in      al, dx ;~ 4E73:0AC7
cs=0x4e73;eip=0x000ac8; 	R(IN(al, dx));	// 128842 in      al, dx ;~ 4E73:0AC8
cs=0x4e73;eip=0x000ac9; 	R(IN(al, dx));	// 128843 in      al, dx ;~ 4E73:0AC9
cs=0x4e73;eip=0x000aca; 	R(IN(al, dx));	// 128844 in      al, dx ;~ 4E73:0ACA
cs=0x4e73;eip=0x000acb; 	R(IN(al, dx));	// 128845 in      al, dx ;~ 4E73:0ACB
cs=0x4e73;eip=0x000acc; 	R(IN(al, dx));	// 128846 in      al, dx ;~ 4E73:0ACC
cs=0x4e73;eip=0x000acd; 	R(IN(al, dx));	// 128847 in      al, dx ;~ 4E73:0ACD
cs=0x4e73;eip=0x000ace; 	R(IN(al, dx));	// 128848 in      al, dx ;~ 4E73:0ACE
cs=0x4e73;eip=0x000acf; 	R(IN(al, dx));	// 128849 in      al, dx ;~ 4E73:0ACF
cs=0x4e73;eip=0x000ad0; 	R(IN(al, dx));	// 128850 in      al, dx ;~ 4E73:0AD0
cs=0x4e73;eip=0x000ad1; 	R(IN(al, dx));	// 128851 in      al, dx ;~ 4E73:0AD1
cs=0x4e73;eip=0x000ad2; 	R(IN(al, dx));	// 128852 in      al, dx ;~ 4E73:0AD2
cs=0x4e73;eip=0x000ad3; 	R(IN(al, dx));	// 128853 in      al, dx ;~ 4E73:0AD3
cs=0x4e73;eip=0x000ad4; 	R(IN(al, dx));	// 128854 in      al, dx ;~ 4E73:0AD4
cs=0x4e73;eip=0x000ad5; 	X(POP(dx));	// 128855 pop     dx ;~ 4E73:0AD5
cs=0x4e73;eip=0x000ad6; 	R(RETN(0));	// 128856 retn ;~ 4E73:0AD6

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return true;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_5ce10: 	goto loc_5ce10;
        case m2c::kloc_5cfc9: 	goto loc_5cfc9;
        case m2c::kloc_5cfe5: 	goto loc_5cfe5;
        case m2c::kloc_5cff1: 	goto loc_5cff1;
        case m2c::kloc_5d02e: 	goto loc_5d02e;
        case m2c::kloc_5d040: 	goto loc_5d040;
        case m2c::kloc_5d06b: 	goto loc_5d06b;
        case m2c::kloc_5d098: 	goto loc_5d098;
        case m2c::kloc_5d0ac: 	goto loc_5d0ac;
        case m2c::kloc_5d0c2: 	goto loc_5d0c2;
        case m2c::kloc_5d132: 	goto loc_5d132;
        case m2c::kloc_5d139: 	goto loc_5d139;
        case m2c::kloc_5d154: 	goto loc_5d154;
        case m2c::kloc_5d166: 	goto loc_5d166;
        case m2c::kloc_5d17d: 	goto loc_5d17d;
        case m2c::kloc_5d1a7: 	goto loc_5d1a7;
        case m2c::kloc_5d1b0: 	goto loc_5d1b0;
        case m2c::kloc_5d1e0: 	goto loc_5d1e0;
        case m2c::kloc_5d1f8: 	goto loc_5d1f8;
        case m2c::kloc_5d1fc: 	goto loc_5d1fc;
        case m2c::kloc_5d225: 	goto loc_5d225;
        case m2c::kloc_5d23a: 	goto loc_5d23a;
        case m2c::kloc_5d295: 	goto loc_5d295;
        case m2c::kloc_5d350: 	goto loc_5d350;
        case m2c::kloc_5d397: 	goto loc_5d397;
        case m2c::kloc_5d3a7: 	goto loc_5d3a7;
        case m2c::kloc_5d3d4: 	goto loc_5d3d4;
        case m2c::kloc_5d3e6: 	goto loc_5d3e6;
        case m2c::kloc_5d3f7: 	goto loc_5d3f7;
        case m2c::kloc_5d402: 	goto loc_5d402;
        case m2c::kloc_5d413: 	goto loc_5d413;
        case m2c::kloc_5d424: 	goto loc_5d424;
        case m2c::kloc_5d42d: 	goto loc_5d42d;
        case m2c::kloc_5d433: 	goto loc_5d433;
        case m2c::kloc_5d446: 	goto loc_5d446;
        case m2c::kloc_5d468: 	goto loc_5d468;
        case m2c::kloc_5d47d: 	goto loc_5d47d;
        case m2c::kloc_5d490: 	goto loc_5d490;
        case m2c::kloc_5d49b: 	goto loc_5d49b;
        case m2c::kloc_5d4af: 	goto loc_5d4af;
        case m2c::kloc_5d4c2: 	goto loc_5d4c2;
        case m2c::kloc_5d4d3: 	goto loc_5d4d3;
        case m2c::kloc_5d4d9: 	goto loc_5d4d9;
        case m2c::kloc_5d4ec: 	goto loc_5d4ec;
        case m2c::kloc_5d534: 	goto loc_5d534;
        case m2c::kloc_5d552: 	goto loc_5d552;
        case m2c::kloc_5d569: 	goto loc_5d569;
        case m2c::kloc_5d575: 	goto loc_5d575;
        case m2c::kloc_5d58d: 	goto loc_5d58d;
        case m2c::kloc_5d59a: 	goto loc_5d59a;
        case m2c::kloc_5d5ae: 	goto loc_5d5ae;
        case m2c::kloc_5d5be: 	goto loc_5d5be;
        case m2c::kloc_5d5cb: 	goto loc_5d5cb;
        case m2c::kloc_5d5cc: 	goto loc_5d5cc;
        case m2c::kloc_5d5dd: 	goto loc_5d5dd;
        case m2c::kloc_5d5fc: 	goto loc_5d5fc;
        case m2c::kloc_5d624: 	goto loc_5d624;
        case m2c::kloc_5d631: 	goto loc_5d631;
        case m2c::kloc_5d652: 	goto loc_5d652;
        case m2c::kloc_5d66b: 	goto loc_5d66b;
        case m2c::kloc_5d67f: 	goto loc_5d67f;
        case m2c::kloc_5d696: 	goto loc_5d696;
        case m2c::kloc_5d6b2: 	goto loc_5d6b2;
        case m2c::kloc_5d6ec: 	goto loc_5d6ec;
        case m2c::kloc_5d768: 	goto loc_5d768;
        case m2c::kloc_5d772: 	goto loc_5d772;
        case m2c::kloc_5d79f: 	goto loc_5d79f;
        case m2c::klocret_5d0ab: 	goto locret_5d0ab;
        case m2c::klocret_5d239: 	goto locret_5d239;
        case m2c::klocret_5d294: 	goto locret_5d294;
        case m2c::klocret_5d2b9: 	goto locret_5d2b9;
        case m2c::klocret_5d37e: 	goto locret_5d37e;
        case m2c::klocret_5d3a6: 	goto locret_5d3a6;
        case m2c::knullsub_20: 	goto nullsub_20;
        case m2c::kret_4e73_103: 	goto ret_4e73_103;
        case m2c::kret_4e73_106: 	goto ret_4e73_106;
        case m2c::kret_4e73_109: 	goto ret_4e73_109;
        case m2c::kret_4e73_10c: 	goto ret_4e73_10c;
        case m2c::kret_4e73_10f: 	goto ret_4e73_10f;
        case m2c::kret_4e73_112: 	goto ret_4e73_112;
        case m2c::kret_4e73_2b6: 	goto ret_4e73_2b6;
        case m2c::kret_4e73_2ff: 	goto ret_4e73_2ff;
        case m2c::kret_4e73_30c: 	goto ret_4e73_30c;
        case m2c::kret_4e73_414: 	goto ret_4e73_414;
        case m2c::kret_4e73_4ae: 	goto ret_4e73_4ae;
        case m2c::kret_4e73_4d7: 	goto ret_4e73_4d7;
        case m2c::kret_4e73_558: 	goto ret_4e73_558;
        case m2c::kret_4e73_5ad: 	goto ret_4e73_5ad;
        case m2c::kret_4e73_62c: 	goto ret_4e73_62c;
        case m2c::kret_4e73_65b: 	goto ret_4e73_65b;
        case m2c::kret_4e73_66f: 	goto ret_4e73_66f;
        case m2c::kret_4e73_6a8: 	goto ret_4e73_6a8;
        case m2c::kret_4e73_742: 	goto ret_4e73_742;
        case m2c::kret_4e73_7ec: 	goto ret_4e73_7ec;
        case m2c::kret_4e73_8e2: 	goto ret_4e73_8e2;
        case m2c::kret_4e73_91c: 	goto ret_4e73_91c;
        case m2c::kret_4e73_930: 	goto ret_4e73_930;
        case m2c::kret_4e73_99d: 	goto ret_4e73_99d;
        case m2c::kret_4e73_9ad: 	goto ret_4e73_9ad;
        case m2c::kret_4e73_9c6: 	goto ret_4e73_9c6;
        case m2c::kret_4e73_a89: 	goto ret_4e73_a89;
        case m2c::kseg004_2d8_proc: 	goto seg004_2d8_proc;
        case m2c::kseg004_348_proc: 	goto seg004_348_proc;
        case m2c::kseg004_473_proc: 	goto seg004_473_proc;
        case m2c::kseg004_5aa_proc: 	goto seg004_5aa_proc;
        case m2c::kseg004_7ea_proc: 	goto seg004_7ea_proc;
        case m2c::ksub_5cfc5: 	goto sub_5cfc5;
        case m2c::ksub_5d00e: 	goto sub_5d00e;
        case m2c::ksub_5d01b: 	goto sub_5d01b;
        case m2c::ksub_5d123: 	goto sub_5d123;
        case m2c::ksub_5d1bd: 	goto sub_5d1bd;
        case m2c::ksub_5d1e3: 	goto sub_5d1e3;
        case m2c::ksub_5d263: 	goto sub_5d263;
        case m2c::ksub_5d450: 	goto sub_5d450;
        case m2c::ksub_5d4ff: 	goto sub_5d4ff;
        case m2c::ksub_5d5f1: 	goto sub_5d5f1;
        case m2c::ksub_5d62b: 	goto sub_5d62b;
        case m2c::ksub_5d63d: 	goto sub_5d63d;
        case m2c::ksub_5d692: 	goto sub_5d692;
        case m2c::ksub_5d6aa: 	goto sub_5d6aa;
        case m2c::ksub_5d6bb: 	goto sub_5d6bb;
        case m2c::ksub_5d6d3: 	goto sub_5d6d3;
        case m2c::ksub_5d797: 	goto sub_5d797;
        case m2c::ksub_5d7b2: 	goto sub_5d7b2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);exit(1);
    };
}


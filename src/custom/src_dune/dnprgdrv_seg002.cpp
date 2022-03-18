/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "dnprgdrv.h"

                

 bool _group2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group2:
    _begin:
seg002_0_proc:
	// 119317 
cs=0x24ed;eip=0x000000; 	T(MOV(ds, *(dw*)(raddr(ds,bx+0x0E))));	// 119317 mov     ds, word ptr [bx+0Eh] ;~ 24ED:0000
ret_24ed_3:
	// 7854 
cs=0x24ed;eip=0x000003; 	T(XOR(ax, *(dw*)(raddr(ss,bp+di))));	// 119318 xor     ax, [bp+di] ;~ 24ED:0003
cs=0x24ed;eip=0x000005; 	T(XOR(al, 0x20));	// 119319 xor     al, 20h ;~ 24ED:0005
cs=0x24ed;eip=0x000007; 	T(TEST(ax, 0x4000));	// 119320 test    ax, 4000h ;~ 24ED:0007
cs=0x24ed;eip=0x00000a; 	T(AND(ah, *(raddr(ds,bx+si+0x0E))));	// 119321 and     ah, [bx+si+0Eh] ;~ 24ED:000A
cs=0x24ed;eip=0x00000d; 	T(XOR(al, 3));	// 119322 xor     al, 3 ;~ 24ED:000D
cs=0x24ed;eip=0x00000f; 	T(XOR(al, 0x0E4));	// 119323 xor     al, 0E4h ;~ 24ED:000F
cs=0x24ed;eip=0x000011; 	T(MOV(dh, 0));	// 119324 mov     dh, 0 ;~ 24ED:0011
cs=0x24ed;eip=0x000013; 	X(PUSHA);	// 119325 pusha ;~ 24ED:0013
cs=0x24ed;eip=0x000014; 	R(RETF(0));	// 119326 retf ;~ 24ED:0014
loc_335b0:
	// 7855 
cs=0x24ed;eip=0x000100; 	R(JMP(loc_33e17));	// 119349 jmp     loc_33E17 ;~ 24ED:0100
ret_24ed_103:
	// 7856 
cs=0x24ed;eip=0x000103; 	R(JMP(loc_33e89));	// 119351 jmp     loc_33E89 ;~ 24ED:0103
ret_24ed_106:
	// 7857 
cs=0x24ed;eip=0x000106; 	R(JMP(loc_33e92));	// 119353 jmp     loc_33E92 ;~ 24ED:0106
ret_24ed_109:
	// 7858 
cs=0x24ed;eip=0x000109; 	R(JMP(loc_34cac));	// 119355 jmp     loc_34CAC ;~ 24ED:0109
ret_24ed_10c:
	// 7859 
cs=0x24ed;eip=0x00010c; 	R(JMP(loc_34d64));	// 119357 jmp     loc_34D64 ;~ 24ED:010C
ret_24ed_10f:
	// 7860 
cs=0x24ed;eip=0x00010f; 	R(JMP(loc_343dd));	// 119359 jmp     loc_343DD ;~ 24ED:010F
ret_24ed_112:
	// 7861 
cs=0x24ed;eip=0x000112; 	R(JMP(loc_348c5));	// 119361 jmp     loc_348C5 ;~ 24ED:0112
ret_24ed_115:
	// 7862 
cs=0x24ed;eip=0x000115; 	R(JMP(loc_3506d));	// 119363 jmp     loc_3506D ;~ 24ED:0115
ret_24ed_118:
	// 7863 
cs=0x24ed;eip=0x000118; 	R(JMP(loc_34e0f));	// 119365 jmp     loc_34E0F ;~ 24ED:0118
ret_24ed_11b:
	// 7864 
cs=0x24ed;eip=0x00011b; 	R(JMP(loc_34d91));	// 119367 jmp     loc_34D91 ;~ 24ED:011B
ret_24ed_11e:
	// 7865 
cs=0x24ed;eip=0x00011e; 	R(JMP(loc_34d93));	// 119369 jmp     loc_34D93 ;~ 24ED:011E
ret_24ed_121:
	// 7866 
cs=0x24ed;eip=0x000121; 	R(JMP(sub_34f94));	// 119371 jmp     near ptr sub_34F94 ;~ 24ED:0121
ret_24ed_124:
	// 7867 
cs=0x24ed;eip=0x000124; 	R(JMP(sub_34fa7));	// 119373 jmp     near ptr sub_34FA7 ;~ 24ED:0124
ret_24ed_127:
	// 7868 
cs=0x24ed;eip=0x000127; 	R(JMP(sub_34f94));	// 119375 jmp     near ptr sub_34F94 ;~ 24ED:0127
ret_24ed_12a:
	// 7869 
cs=0x24ed;eip=0x00012a; 	R(JMP(loc_34fa5));	// 119377 jmp     loc_34FA5 ;~ 24ED:012A
ret_24ed_12d:
	// 7870 
cs=0x24ed;eip=0x00012d; 	R(JMP(sub_34f94));	// 119379 jmp     near ptr sub_34F94 ;~ 24ED:012D
ret_24ed_130:
	// 7871 
cs=0x24ed;eip=0x000130; 	R(JMP(sub_34fa7));	// 119381 jmp     near ptr sub_34FA7 ;~ 24ED:0130
ret_24ed_133:
	// 7872 
cs=0x24ed;eip=0x000133; 	R(JMP(loc_35041));	// 119383 jmp     loc_35041 ;~ 24ED:0133
ret_24ed_136:
	// 7873 
cs=0x24ed;eip=0x000136; 	R(JMP(loc_3505e));	// 119385 jmp     loc_3505E ;~ 24ED:0136
ret_24ed_139:
	// 7874 
cs=0x24ed;eip=0x000139; 	R(JMP(loc_34e1f));	// 119387 jmp     loc_34E1F ;~ 24ED:0139
ret_24ed_13c:
	// 7875 
cs=0x24ed;eip=0x00013c; 	R(RETF(0));	// 119389 retf ;~ 24ED:013C
ret_24ed_13d:
	// 7876 
cs=0x24ed;eip=0x00013d; 	R(RETF(0));	// 119391 retf ;~ 24ED:013D
ret_24ed_13e:
	// 7877 
cs=0x24ed;eip=0x00013e; 	R(RETF(0));	// 119393 retf ;~ 24ED:013E
ret_24ed_13f:
	// 7878 
cs=0x24ed;eip=0x00013f; 	R(JMP(loc_340c4));	// 119395 jmp     loc_340C4 ;~ 24ED:013F
ret_24ed_142:
	// 7879 
cs=0x24ed;eip=0x000142; 	R(JMP(loc_3584b));	// 119397 jmp     loc_3584B ;~ 24ED:0142
ret_24ed_145:
	// 7880 
cs=0x24ed;eip=0x000145; 	R(JMP(loc_3513c));	// 119399 jmp     loc_3513C ;~ 24ED:0145
ret_24ed_148:
	// 7881 
cs=0x24ed;eip=0x000148; 	R(JMP(sub_3518d));	// 119401 jmp     sub_3518D ;~ 24ED:0148
ret_24ed_14b:
	// 7882 
cs=0x24ed;eip=0x00014b; 	R(JMP(loc_350be));	// 119403 jmp     loc_350BE ;~ 24ED:014B
ret_24ed_14e:
	// 7883 
cs=0x24ed;eip=0x00014e; 	R(JMP(loc_350f5));	// 119405 jmp     loc_350F5 ;~ 24ED:014E
ret_24ed_151:
	// 7884 
cs=0x24ed;eip=0x000151; 	R(JMP(loc_35a56));	// 119407 jmp     loc_35A56 ;~ 24ED:0151
ret_24ed_154:
	// 7885 
cs=0x24ed;eip=0x000154; 	R(JMP(loc_33e25));	// 119409 jmp     loc_33E25 ;~ 24ED:0154
ret_24ed_157:
	// 7886 
cs=0x24ed;eip=0x000157; 	R(JMP(loc_353ce));	// 119411 jmp     loc_353CE ;~ 24ED:0157
loc_33e17:
	// 7887 
cs=0x24ed;eip=0x000967; 	T(MOV(ah, 0x0F));	// 119498 mov     ah, 0Fh ;~ 24ED:0967
cs=0x24ed;eip=0x000969; 	R(_INT(0x10));	// 119499 int     10h             ; - VIDEO - GET CURRENT VIDEO MODE ;~ 24ED:0969
cs=0x24ed;eip=0x00096b; 	T(CMP(al, 0x13));	// 119503 cmp     al, 13h ;~ 24ED:096B
cs=0x24ed;eip=0x00096d; 	R(JZ(locret_33e24));	// 119504 jz      short locret_33E24 ;~ 24ED:096D
cs=0x24ed;eip=0x00096f; 	T(MOV(ax, 0x13));	// 119505 mov     ax, 13h ;~ 24ED:096F
cs=0x24ed;eip=0x000972; 	R(_INT(0x10));	// 119506 int     10h             ; - VIDEO - SET VIDEO MODE ;~ 24ED:0972
locret_33e24:
	// 7888 
cs=0x24ed;eip=0x000974; 	R(RETF(0));	// 119510 retf ;~ 24ED:0974
loc_33e25:
	// 7889 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000975; 	X(MOV(*(&byte_3366d), al));	// 119514 mov     cs:byte_3366D, al ;~ 24ED:0975
cs=0x24ed;eip=0x000979; 	X(PUSHF);	// 119515 pushf ;~ 24ED:0979
cs=0x24ed;eip=0x00097a; 	T(STI);	// 119516 sti ;~ 24ED:097A
cs=0x24ed;eip=0x00097b; 	T(MOV(ax, 0x40));	// 119517 mov     ax, 40h ; '@' ;~ 24ED:097B
cs=0x24ed;eip=0x00097e; 	T(MOV(es, ax));	// 119518 mov     es, ax ;~ 24ED:097E
cs=0x24ed;eip=0x000980; 	T(MOV(dx, *(dw*)(raddr(es,0x63))));	// 119520 mov     dx, es:63h ;~ 24ED:0980
cs=0x24ed;eip=0x000985; 	T(ADD(dl, 6));	// 119521 add     dl, 6 ;~ 24ED:0985
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000988; 	X(MOV(*(dw*)(((db*)&word_3364f)), dx));	// 119522 mov     cs:word_3364F, dx ;~ 24ED:0988
cs=0x24ed;eip=0x00098d; 	R(IN(al, dx));	// 119523 in      al, dx ;~ 24ED:098D
cs=0x24ed;eip=0x00098e; 	T(AND(al, 8));	// 119524 and     al, 8 ;~ 24ED:098E
cs=0x24ed;eip=0x000990; 	R(CALL(sub_33e68,0));	// 119525 call    sub_33E68 ;~ 24ED:0990
cs=0x24ed;eip=0x000993; 	R(JNC(loc_33e64));	// 119526 jnb     short loc_33E64 ;~ 24ED:0993
cs=0x24ed;eip=0x000995; 	R(CALL(sub_33e68,0));	// 119527 call    sub_33E68 ;~ 24ED:0995
cs=0x24ed;eip=0x000998; 	R(JNC(loc_33e64));	// 119528 jnb     short loc_33E64 ;~ 24ED:0998
cs=0x24ed;eip=0x00099a; 	T(MOV(di, si));	// 119529 mov     di, si ;~ 24ED:099A
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00099c; 	X(MOV(*(&byte_33652), ah));	// 119530 mov     cs:byte_33652, ah ;~ 24ED:099C
cs=0x24ed;eip=0x0009a1; 	R(CALL(sub_33e68,0));	// 119531 call    sub_33E68 ;~ 24ED:09A1
cs=0x24ed;eip=0x0009a4; 	R(JNC(loc_33e64));	// 119532 jnb     short loc_33E64 ;~ 24ED:09A4
cs=0x24ed;eip=0x0009a6; 	T(CMP(si, di));	// 119533 cmp     si, di ;~ 24ED:09A6
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0009a8; 	X(NOT(*(&byte_33651)));	// 119534 not     cs:byte_33651 ;~ 24ED:09A8
cs=0x24ed;eip=0x0009ad; 	R(JNC(loc_33e64));	// 119535 jnb     short loc_33E64 ;~ 24ED:09AD
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0009af; 	X(MOV(*(&byte_33652), ah));	// 119536 mov     cs:byte_33652, ah ;~ 24ED:09AF
loc_33e64:
	// 7890 
cs=0x24ed;eip=0x0009b4; 	X(POPF);	// 119540 popf ;~ 24ED:09B4
cs=0x24ed;eip=0x0009b5; 	R(JMP(sub_33fb0));	// 119541 jmp     near ptr sub_33FB0 ;~ 24ED:09B5
sub_33e68:
	// 119546 
cs=0x24ed;eip=0x0009b8; 	T(MOV(ah, al));	// 119548 mov     ah, al ;~ 24ED:09B8
ret_24ed_9ba:
	// 7891 
cs=0x24ed;eip=0x0009ba; 	T(XOR(si, si));	// 119549 xor     si, si ;~ 24ED:09BA
cs=0x24ed;eip=0x0009bc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 119550 mov     bx, [bp+0] ;~ 24ED:09BC
loc_33e6f:
	// 7892 
cs=0x24ed;eip=0x0009bf; 	T(INC(si));	// 119553 inc     si ;~ 24ED:09BF
cs=0x24ed;eip=0x0009c0; 	R(JNZ(loc_33e73));	// 119554 jnz     short loc_33E73 ;~ 24ED:09C0
cs=0x24ed;eip=0x0009c2; 	T(DEC(si));	// 119555 dec     si ;~ 24ED:09C2
loc_33e73:
	// 7893 
cs=0x24ed;eip=0x0009c3; 	R(IN(al, dx));	// 119558 in      al, dx ;~ 24ED:09C3
cs=0x24ed;eip=0x0009c4; 	T(AND(al, 8));	// 119559 and     al, 8 ;~ 24ED:09C4
cs=0x24ed;eip=0x0009c6; 	T(CMP(al, ah));	// 119560 cmp     al, ah ;~ 24ED:09C6
cs=0x24ed;eip=0x0009c8; 	R(JNZ(loc_33e87));	// 119561 jnz     short loc_33E87 ;~ 24ED:09C8
cs=0x24ed;eip=0x0009ca; 	X(PUSH(ax));	// 119562 push    ax ;~ 24ED:09CA
cs=0x24ed;eip=0x0009cb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 119563 mov     ax, [bp+0] ;~ 24ED:09CB
cs=0x24ed;eip=0x0009ce; 	T(SUB(ax, bx));	// 119564 sub     ax, bx ;~ 24ED:09CE
cs=0x24ed;eip=0x0009d0; 	T(CMP(ax, 0x64));	// 119565 cmp     ax, 64h ; 'd' ;~ 24ED:09D0
cs=0x24ed;eip=0x0009d3; 	X(POP(ax));	// 119566 pop     ax ;~ 24ED:09D3
cs=0x24ed;eip=0x0009d4; 	R(JC(loc_33e6f));	// 119567 jb      short loc_33E6F ;~ 24ED:09D4
cs=0x24ed;eip=0x0009d6; 	R(RETN(0));	// 119568 retn ;~ 24ED:09D6
loc_33e87:
	// 7894 
cs=0x24ed;eip=0x0009d7; 	T(STC);	// 119572 stc ;~ 24ED:09D7
cs=0x24ed;eip=0x0009d8; 	R(RETN(0));	// 119573 retn ;~ 24ED:09D8
seg002_9d9_proc:
	// 119578 
loc_33e89:
	// 7895 
cs=0x24ed;eip=0x0009d9; 	T(MOV(ax, 0x0A000));	// 119579 mov     ax, 0A000h ;~ 24ED:09D9
cs=0x24ed;eip=0x0009dc; 	T(MOV(cx, 0x0FA00));	// 119580 mov     cx, 0FA00h ;~ 24ED:09DC
cs=0x24ed;eip=0x0009df; 	T(XOR(bp, bp));	// 119581 xor     bp, bp ;~ 24ED:09DF
cs=0x24ed;eip=0x0009e1; 	R(RETF(0));	// 119582 retf ;~ 24ED:09E1
loc_33e92:
	// 7896 
cs=0x24ed;eip=0x0009e2; 	X(PUSH(ax));	// 119586 push    ax ;~ 24ED:09E2
cs=0x24ed;eip=0x0009e3; 	X(PUSH(bx));	// 119587 push    bx ;~ 24ED:09E3
cs=0x24ed;eip=0x0009e4; 	X(PUSH(cx));	// 119588 push    cx ;~ 24ED:09E4
cs=0x24ed;eip=0x0009e5; 	X(PUSH(si));	// 119589 push    si ;~ 24ED:09E5
cs=0x24ed;eip=0x0009e6; 	X(PUSH(di));	// 119590 push    di ;~ 24ED:09E6
cs=0x24ed;eip=0x0009e7; 	X(PUSH(ds));	// 119591 push    ds ;~ 24ED:09E7
cs=0x24ed;eip=0x0009e8; 	X(PUSH(es));	// 119592 push    es ;~ 24ED:09E8
cs=0x24ed;eip=0x0009e9; 	X(PUSH(es));	// 119593 push    es ;~ 24ED:09E9
cs=0x24ed;eip=0x0009ea; 	X(POP(ds));	// 119594 pop     ds ;~ 24ED:09EA
cs=0x24ed;eip=0x0009eb; 	X(PUSH(cs));	// 119596 push    cs ;~ 24ED:09EB
cs=0x24ed;eip=0x0009ec; 	X(POP(es));	// 119597 pop     es ;~ 24ED:09EC
cs=0x24ed;eip=0x0009ed; 	T(MOV(di, 0x5BF));	// 119599 mov     di, 5BFh ;~ 24ED:09ED
cs=0x24ed;eip=0x0009f0; 	T(ADD(di, bx));	// 119600 add     di, bx ;~ 24ED:09F0
cs=0x24ed;eip=0x0009f2; 	T(MOV(ax, cx));	// 119601 mov     ax, cx ;~ 24ED:09F2
cs=0x24ed;eip=0x0009f4; 	T(MOV(si, dx));	// 119602 mov     si, dx ;~ 24ED:09F4
	// 119603 repe cmpsb ;~ 24ED:09F6
cs=0x24ed;eip=0x0009f6; 	T(	REPE CMPSB);	// 119603 repe cmpsb ;~ 24ED:09F6
cs=0x24ed;eip=0x0009f8; 	R(JZ(loc_33ec9));	// 119604 jz      short loc_33EC9 ;~ 24ED:09F8
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0009fa; 	X(MOV(*(&byte_3366e), 1));	// 119605 mov     cs:byte_3366E, 1 ;~ 24ED:09FA
cs=0x24ed;eip=0x000a00; 	T(MOV(di, 0x5BF));	// 119606 mov     di, 5BFh ;~ 24ED:0A00
cs=0x24ed;eip=0x000a03; 	T(ADD(di, bx));	// 119607 add     di, bx ;~ 24ED:0A03
cs=0x24ed;eip=0x000a05; 	T(MOV(si, dx));	// 119608 mov     si, dx ;~ 24ED:0A05
cs=0x24ed;eip=0x000a07; 	T(MOV(cx, ax));	// 119609 mov     cx, ax ;~ 24ED:0A07
cs=0x24ed;eip=0x000a09; 	X(PUSH(cx));	// 119610 push    cx ;~ 24ED:0A09
	// 119611 rep movsb ;~ 24ED:0A0A
cs=0x24ed;eip=0x000a0a; 	X(	REP MOVSB);	// 119611 rep movsb ;~ 24ED:0A0A
cs=0x24ed;eip=0x000a0c; 	X(POP(cx));	// 119612 pop     cx ;~ 24ED:0A0C
cs=0x24ed;eip=0x000a0d; 	R(CALL(sub_33ed1,0));	// 119613 call    sub_33ED1 ;~ 24ED:0A0D
cs=0x24ed;eip=0x000a10; 	T(MOV(di, 0x1BF));	// 119614 mov     di, 1BFh ;~ 24ED:0A10
cs=0x24ed;eip=0x000a13; 	T(ADD(di, bx));	// 119615 add     di, bx ;~ 24ED:0A13
cs=0x24ed;eip=0x000a15; 	T(MOV(al, 1));	// 119616 mov     al, 1 ;~ 24ED:0A15
	// 119617 rep stosb ;~ 24ED:0A17
cs=0x24ed;eip=0x000a17; 	X(	REP STOSB);	// 119617 rep stosb ;~ 24ED:0A17
loc_33ec9:
	// 7897 
cs=0x24ed;eip=0x000a19; 	X(POP(es));	// 119620 pop     es ;~ 24ED:0A19
cs=0x24ed;eip=0x000a1a; 	X(POP(ds));	// 119622 pop     ds ;~ 24ED:0A1A
cs=0x24ed;eip=0x000a1b; 	X(POP(di));	// 119624 pop     di ;~ 24ED:0A1B
cs=0x24ed;eip=0x000a1c; 	X(POP(si));	// 119625 pop     si ;~ 24ED:0A1C
cs=0x24ed;eip=0x000a1d; 	X(POP(cx));	// 119626 pop     cx ;~ 24ED:0A1D
cs=0x24ed;eip=0x000a1e; 	X(POP(bx));	// 119627 pop     bx ;~ 24ED:0A1E
cs=0x24ed;eip=0x000a1f; 	X(POP(ax));	// 119628 pop     ax ;~ 24ED:0A1F
cs=0x24ed;eip=0x000a20; 	R(RETF(0));	// 119629 retf ;~ 24ED:0A20
sub_33ed1:
	// 119634 
cs=0x24ed;eip=0x000a21; 	X(PUSH(dx));	// 119636 push    dx ;~ 24ED:0A21
ret_24ed_a22:
	// 7898 
cs=0x24ed;eip=0x000a22; 	T(MOV(ax, bx));	// 119637 mov     ax, bx ;~ 24ED:0A22
cs=0x24ed;eip=0x000a24; 	T(MOV(dl, 3));	// 119638 mov     dl, 3 ;~ 24ED:0A24
cs=0x24ed;eip=0x000a26; 	T(DIV1(dl));	// 119639 div     dl ;~ 24ED:0A26
cs=0x24ed;eip=0x000a28; 	T(XOR(ah, ah));	// 119640 xor     ah, ah ;~ 24ED:0A28
cs=0x24ed;eip=0x000a2a; 	T(MOV(bx, ax));	// 119641 mov     bx, ax ;~ 24ED:0A2A
cs=0x24ed;eip=0x000a2c; 	T(MOV(ax, cx));	// 119642 mov     ax, cx ;~ 24ED:0A2C
cs=0x24ed;eip=0x000a2e; 	T(CMP(ax, 0x300));	// 119643 cmp     ax, 300h ;~ 24ED:0A2E
cs=0x24ed;eip=0x000a31; 	R(JNC(loc_33eeb));	// 119644 jnb     short loc_33EEB ;~ 24ED:0A31
cs=0x24ed;eip=0x000a33; 	T(DIV1(dl));	// 119645 div     dl ;~ 24ED:0A33
cs=0x24ed;eip=0x000a35; 	T(XOR(ah, ah));	// 119646 xor     ah, ah ;~ 24ED:0A35
cs=0x24ed;eip=0x000a37; 	T(MOV(cx, ax));	// 119647 mov     cx, ax ;~ 24ED:0A37
cs=0x24ed;eip=0x000a39; 	X(POP(dx));	// 119648 pop     dx ;~ 24ED:0A39
cs=0x24ed;eip=0x000a3a; 	R(RETN(0));	// 119649 retn ;~ 24ED:0A3A
loc_33eeb:
	// 7899 
cs=0x24ed;eip=0x000a3b; 	T(MOV(cx, 0x100));	// 119653 mov     cx, 100h ;~ 24ED:0A3B
cs=0x24ed;eip=0x000a3e; 	X(POP(dx));	// 119654 pop     dx ;~ 24ED:0A3E
cs=0x24ed;eip=0x000a3f; 	R(RETN(0));	// 119655 retn ;~ 24ED:0A3F
seg002_a40_proc:
	// 119659 
cs=0x24ed;eip=0x000a40; 	X(PUSH(cx));	// 119659 push    cx ;~ 24ED:0A40
ret_24ed_a41:
	// 7900 
cs=0x24ed;eip=0x000a41; 	X(PUSH(si));	// 119660 push    si ;~ 24ED:0A41
cs=0x24ed;eip=0x000a42; 	X(PUSH(di));	// 119661 push    di ;~ 24ED:0A42
cs=0x24ed;eip=0x000a43; 	X(PUSH(ds));	// 119662 push    ds ;~ 24ED:0A43
cs=0x24ed;eip=0x000a44; 	X(PUSH(es));	// 119663 push    es ;~ 24ED:0A44
cs=0x24ed;eip=0x000a45; 	X(PUSH(es));	// 119664 push    es ;~ 24ED:0A45
cs=0x24ed;eip=0x000a46; 	X(POP(ds));	// 119665 pop     ds ;~ 24ED:0A46
cs=0x24ed;eip=0x000a47; 	X(PUSH(cs));	// 119666 push    cs ;~ 24ED:0A47
cs=0x24ed;eip=0x000a48; 	X(POP(es));	// 119667 pop     es ;~ 24ED:0A48
cs=0x24ed;eip=0x000a49; 	T(MOV(di, 0x2BF));	// 119669 mov     di, 2BFh ;~ 24ED:0A49
cs=0x24ed;eip=0x000a4c; 	T(ADD(di, bx));	// 119670 add     di, bx ;~ 24ED:0A4C
cs=0x24ed;eip=0x000a4e; 	T(MOV(si, dx));	// 119671 mov     si, dx ;~ 24ED:0A4E
	// 119672 rep movsb ;~ 24ED:0A50
cs=0x24ed;eip=0x000a50; 	X(	REP MOVSB);	// 119672 rep movsb ;~ 24ED:0A50
cs=0x24ed;eip=0x000a52; 	X(POP(es));	// 119673 pop     es ;~ 24ED:0A52
cs=0x24ed;eip=0x000a53; 	X(POP(ds));	// 119675 pop     ds ;~ 24ED:0A53
cs=0x24ed;eip=0x000a54; 	X(POP(di));	// 119676 pop     di ;~ 24ED:0A54
cs=0x24ed;eip=0x000a55; 	X(POP(si));	// 119677 pop     si ;~ 24ED:0A55
cs=0x24ed;eip=0x000a56; 	X(POP(cx));	// 119678 pop     cx ;~ 24ED:0A56
cs=0x24ed;eip=0x000a57; 	R(RETF(0));	// 119679 retf ;~ 24ED:0A57
sub_33f08:
	// 119684 
cs=0x24ed;eip=0x000a58; 	X(PUSH(cs));	// 119686 push    cs ;~ 24ED:0A58
ret_24ed_a59:
	// 7901 
cs=0x24ed;eip=0x000a59; 	X(PUSH(cs));	// 119687 push    cs ;~ 24ED:0A59
cs=0x24ed;eip=0x000a5a; 	X(POP(ds));	// 119688 pop     ds ;~ 24ED:0A5A
cs=0x24ed;eip=0x000a5b; 	X(POP(es));	// 119690 pop     es ;~ 24ED:0A5B
cs=0x24ed;eip=0x000a5c; 	T(MOV(si, 0x5BF));	// 119691 mov     si, 5BFh ;~ 24ED:0A5C
cs=0x24ed;eip=0x000a5f; 	T(MOV(di, 0x2BF));	// 119692 mov     di, 2BFh ;~ 24ED:0A5F
cs=0x24ed;eip=0x000a62; 	T(MOV(cx, 0x180));	// 119693 mov     cx, 180h ;~ 24ED:0A62
	// 119694 rep movsw ;~ 24ED:0A65
cs=0x24ed;eip=0x000a65; 	X(	REP MOVSW);	// 119694 rep movsw ;~ 24ED:0A65
cs=0x24ed;eip=0x000a67; 	R(RETN(0));	// 119695 retn ;~ 24ED:0A67
seg002_a68_proc:
	// 119699 
cs=0x24ed;eip=0x000a68; 	X(PUSH(cx));	// 119699 push    cx ;~ 24ED:0A68
ret_24ed_a69:
	// 7902 
cs=0x24ed;eip=0x000a69; 	X(PUSH(si));	// 119700 push    si ;~ 24ED:0A69
cs=0x24ed;eip=0x000a6a; 	X(PUSH(di));	// 119701 push    di ;~ 24ED:0A6A
cs=0x24ed;eip=0x000a6b; 	X(PUSH(ds));	// 119702 push    ds ;~ 24ED:0A6B
cs=0x24ed;eip=0x000a6c; 	X(PUSH(es));	// 119703 push    es ;~ 24ED:0A6C
cs=0x24ed;eip=0x000a6d; 	R(CALL(sub_33f08,0));	// 119704 call    sub_33F08 ;~ 24ED:0A6D
cs=0x24ed;eip=0x000a70; 	X(POP(es));	// 119705 pop     es ;~ 24ED:0A70
cs=0x24ed;eip=0x000a71; 	X(POP(ds));	// 119706 pop     ds ;~ 24ED:0A71
cs=0x24ed;eip=0x000a72; 	X(POP(di));	// 119708 pop     di ;~ 24ED:0A72
cs=0x24ed;eip=0x000a73; 	X(POP(si));	// 119709 pop     si ;~ 24ED:0A73
cs=0x24ed;eip=0x000a74; 	X(POP(cx));	// 119710 pop     cx ;~ 24ED:0A74
cs=0x24ed;eip=0x000a75; 	R(RETF(0));	// 119711 retf ;~ 24ED:0A75
ret_24ed_a76:
	// 7903 
cs=0x24ed;eip=0x000a76; 	X(PUSH(ax));	// 119713 push    ax ;~ 24ED:0A76
cs=0x24ed;eip=0x000a77; 	X(PUSH(cx));	// 119714 push    cx ;~ 24ED:0A77
cs=0x24ed;eip=0x000a78; 	X(PUSH(si));	// 119715 push    si ;~ 24ED:0A78
cs=0x24ed;eip=0x000a79; 	X(PUSH(di));	// 119716 push    di ;~ 24ED:0A79
cs=0x24ed;eip=0x000a7a; 	X(PUSH(ds));	// 119717 push    ds ;~ 24ED:0A7A
cs=0x24ed;eip=0x000a7b; 	X(PUSH(es));	// 119718 push    es ;~ 24ED:0A7B
cs=0x24ed;eip=0x000a7c; 	X(PUSH(cs));	// 119719 push    cs ;~ 24ED:0A7C
cs=0x24ed;eip=0x000a7d; 	X(PUSH(cs));	// 119720 push    cs ;~ 24ED:0A7D
cs=0x24ed;eip=0x000a7e; 	X(POP(ds));	// 119721 pop     ds ;~ 24ED:0A7E
cs=0x24ed;eip=0x000a7f; 	X(POP(es));	// 119723 pop     es ;~ 24ED:0A7F
cs=0x24ed;eip=0x000a80; 	T(MOV(si, 0x5BF));	// 119724 mov     si, 5BFh ;~ 24ED:0A80
cs=0x24ed;eip=0x000a83; 	T(MOV(di, 0x2BF));	// 119725 mov     di, 2BFh ;~ 24ED:0A83
cs=0x24ed;eip=0x000a86; 	T(MOV(cx, 0x180));	// 119726 mov     cx, 180h ;~ 24ED:0A86
loc_33f39:
	// 7904 
cs=0x24ed;eip=0x000a89; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 119729 mov     ax, [di] ;~ 24ED:0A89
cs=0x24ed;eip=0x000a8b; 	X(XCHG(ax, *(dw*)(raddr(ds,si))));	// 119730 xchg    ax, [si] ;~ 24ED:0A8B
cs=0x24ed;eip=0x000a8d; 	X(STOSW);	// 119731 stosw ;~ 24ED:0A8D
cs=0x24ed;eip=0x000a8e; 	T(ADD(si, 2));	// 119732 add     si, 2 ;~ 24ED:0A8E
cs=0x24ed;eip=0x000a91; 	R(LOOP(loc_33f39));	// 119733 loop    loc_33F39 ;~ 24ED:0A91
cs=0x24ed;eip=0x000a93; 	T(MOV(al, 1));	// 119734 mov     al, 1 ;~ 24ED:0A93
cs=0x24ed;eip=0x000a95; 	T(MOV(di, 0x1BE));	// 119735 mov     di, 1BEh ;~ 24ED:0A95
cs=0x24ed;eip=0x000a98; 	T(MOV(cx, 0x101));	// 119736 mov     cx, 101h ;~ 24ED:0A98
	// 119737 rep stosb ;~ 24ED:0A9B
cs=0x24ed;eip=0x000a9b; 	X(	REP STOSB);	// 119737 rep stosb ;~ 24ED:0A9B
cs=0x24ed;eip=0x000a9d; 	X(POP(es));	// 119738 pop     es ;~ 24ED:0A9D
cs=0x24ed;eip=0x000a9e; 	X(POP(ds));	// 119739 pop     ds ;~ 24ED:0A9E
cs=0x24ed;eip=0x000a9f; 	X(POP(di));	// 119741 pop     di ;~ 24ED:0A9F
cs=0x24ed;eip=0x000aa0; 	X(POP(si));	// 119742 pop     si ;~ 24ED:0AA0
cs=0x24ed;eip=0x000aa1; 	X(POP(cx));	// 119743 pop     cx ;~ 24ED:0AA1
cs=0x24ed;eip=0x000aa2; 	X(POP(ax));	// 119744 pop     ax ;~ 24ED:0AA2
cs=0x24ed;eip=0x000aa3; 	R(RETF(0));	// 119745 retf ;~ 24ED:0AA3
ret_24ed_aa4:
	// 7905 
cs=0x24ed;eip=0x000aa4; 	X(PUSHA);	// 119747 pusha ;~ 24ED:0AA4
cs=0x24ed;eip=0x000aa5; 	X(PUSH(es));	// 119748 push    es ;~ 24ED:0AA5
cs=0x24ed;eip=0x000aa6; 	X(PUSH(ds));	// 119749 push    ds ;~ 24ED:0AA6
cs=0x24ed;eip=0x000aa7; 	X(PUSH(cs));	// 119750 push    cs ;~ 24ED:0AA7
cs=0x24ed;eip=0x000aa8; 	X(POP(ds));	// 119751 pop     ds ;~ 24ED:0AA8
cs=0x24ed;eip=0x000aa9; 	X(PUSH(cs));	// 119753 push    cs ;~ 24ED:0AA9
cs=0x24ed;eip=0x000aaa; 	X(POP(es));	// 119754 pop     es ;~ 24ED:0AAA
cs=0x24ed;eip=0x000aab; 	T(MOV(si, 0x5BF));	// 119756 mov     si, 5BFh ;~ 24ED:0AAB
cs=0x24ed;eip=0x000aae; 	T(ADD(si, bx));	// 119757 add     si, bx ;~ 24ED:0AAE
cs=0x24ed;eip=0x000ab0; 	T(di = si-0x300);	// 119758 lea     di, [si-300h] ;~ 24ED:0AB0
cs=0x24ed;eip=0x000ab4; 	T(MOV(dx, si));	// 119759 mov     dx, si ;~ 24ED:0AB4
cs=0x24ed;eip=0x000ab6; 	X(PUSH(cx));	// 119760 push    cx ;~ 24ED:0AB6
	// 119761 rep movsb ;~ 24ED:0AB7
cs=0x24ed;eip=0x000ab7; 	X(	REP MOVSB);	// 119761 rep movsb ;~ 24ED:0AB7
cs=0x24ed;eip=0x000ab9; 	X(POP(cx));	// 119762 pop     cx ;~ 24ED:0AB9
cs=0x24ed;eip=0x000aba; 	T(MOV(di, dx));	// 119763 mov     di, dx ;~ 24ED:0ABA
cs=0x24ed;eip=0x000abc; 	T(XOR(ax, ax));	// 119764 xor     ax, ax ;~ 24ED:0ABC
cs=0x24ed;eip=0x000abe; 	X(PUSH(cx));	// 119765 push    cx ;~ 24ED:0ABE
	// 119766 rep stosb ;~ 24ED:0ABF
cs=0x24ed;eip=0x000abf; 	X(	REP STOSB);	// 119766 rep stosb ;~ 24ED:0ABF
cs=0x24ed;eip=0x000ac1; 	X(POP(cx));	// 119767 pop     cx ;~ 24ED:0AC1
cs=0x24ed;eip=0x000ac2; 	R(CALL(sub_33ed1,0));	// 119768 call    sub_33ED1 ;~ 24ED:0AC2
cs=0x24ed;eip=0x000ac5; 	T(MOV(di, 0x1BE));	// 119769 mov     di, 1BEh ;~ 24ED:0AC5
cs=0x24ed;eip=0x000ac8; 	T(MOV(al, 1));	// 119770 mov     al, 1 ;~ 24ED:0AC8
cs=0x24ed;eip=0x000aca; 	X(STOSB);	// 119771 stosb ;~ 24ED:0ACA
cs=0x24ed;eip=0x000acb; 	T(ADD(di, bx));	// 119772 add     di, bx ;~ 24ED:0ACB
	// 119773 rep stosb ;~ 24ED:0ACD
cs=0x24ed;eip=0x000acd; 	X(	REP STOSB);	// 119773 rep stosb ;~ 24ED:0ACD
cs=0x24ed;eip=0x000acf; 	R(JMP(loc_33fad));	// 119774 jmp     short loc_33FAD ;~ 24ED:0ACF
ret_24ed_ad1:
	// 7906 
cs=0x24ed;eip=0x000ad1; 	X(PUSHA);	// 119776 pusha ;~ 24ED:0AD1
cs=0x24ed;eip=0x000ad2; 	X(PUSH(es));	// 119777 push    es ;~ 24ED:0AD2
cs=0x24ed;eip=0x000ad3; 	X(PUSH(ds));	// 119778 push    ds ;~ 24ED:0AD3
cs=0x24ed;eip=0x000ad4; 	X(PUSH(cs));	// 119779 push    cs ;~ 24ED:0AD4
cs=0x24ed;eip=0x000ad5; 	X(POP(ds));	// 119780 pop     ds ;~ 24ED:0AD5
cs=0x24ed;eip=0x000ad6; 	X(PUSH(cs));	// 119781 push    cs ;~ 24ED:0AD6
cs=0x24ed;eip=0x000ad7; 	X(POP(es));	// 119782 pop     es ;~ 24ED:0AD7
cs=0x24ed;eip=0x000ad8; 	T(MOV(dl, al));	// 119783 mov     dl, al ;~ 24ED:0AD8
cs=0x24ed;eip=0x000ada; 	T(OR(dl, dl));	// 119784 or      dl, dl ;~ 24ED:0ADA
cs=0x24ed;eip=0x000adc; 	R(JNZ(loc_33f8f));	// 119785 jnz     short loc_33F8F ;~ 24ED:0ADC
cs=0x24ed;eip=0x000ade; 	T(INC(dx));	// 119786 inc     dx ;~ 24ED:0ADE
loc_33f8f:
	// 7907 
cs=0x24ed;eip=0x000adf; 	T(MOV(di, 0x5BF));	// 119789 mov     di, 5BFh ;~ 24ED:0ADF
cs=0x24ed;eip=0x000ae2; 	T(ADD(di, bx));	// 119790 add     di, bx ;~ 24ED:0AE2
cs=0x24ed;eip=0x000ae4; 	T(si = di-0x300);	// 119791 lea     si, [di-300h] ;~ 24ED:0AE4
cs=0x24ed;eip=0x000ae8; 	X(PUSH(di));	// 119792 push    di ;~ 24ED:0AE8
cs=0x24ed;eip=0x000ae9; 	X(PUSH(cx));	// 119793 push    cx ;~ 24ED:0AE9
loc_33f9a:
	// 7908 
cs=0x24ed;eip=0x000aea; 	T(LODSB);	// 119796 lodsb ;~ 24ED:0AEA
cs=0x24ed;eip=0x000aeb; 	T(SUB(al, *(raddr(ds,di))));	// 119797 sub     al, [di] ;~ 24ED:0AEB
cs=0x24ed;eip=0x000aed; 	T(CBW);	// 119798 cbw ;~ 24ED:0AED
cs=0x24ed;eip=0x000aee; 	T(IDIV1(dl));	// 119799 idiv    dl ;~ 24ED:0AEE
cs=0x24ed;eip=0x000af0; 	T(ADD(al, *(raddr(ds,di))));	// 119800 add     al, [di] ;~ 24ED:0AF0
cs=0x24ed;eip=0x000af2; 	X(STOSB);	// 119801 stosb ;~ 24ED:0AF2
cs=0x24ed;eip=0x000af3; 	R(LOOP(loc_33f9a));	// 119802 loop    loc_33F9A ;~ 24ED:0AF3
cs=0x24ed;eip=0x000af5; 	X(POP(cx));	// 119803 pop     cx ;~ 24ED:0AF5
cs=0x24ed;eip=0x000af6; 	R(CALL(sub_33ed1,0));	// 119804 call    sub_33ED1 ;~ 24ED:0AF6
cs=0x24ed;eip=0x000af9; 	X(POP(dx));	// 119805 pop     dx ;~ 24ED:0AF9
cs=0x24ed;eip=0x000afa; 	R(CALL(sub_34000,0));	// 119806 call    sub_34000 ;~ 24ED:0AFA
loc_33fad:
	// 7909 
cs=0x24ed;eip=0x000afd; 	X(POP(ds));	// 119809 pop     ds ;~ 24ED:0AFD
cs=0x24ed;eip=0x000afe; 	R(JMP(loc_33ffd));	// 119811 jmp     short loc_33FFD ;~ 24ED:0AFE
sub_33fb0:
	// 119816 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000b00; 	T(CMP(*(&byte_3366e), 0));	// 119818 cmp     cs:byte_3366E, 0 ;~ 24ED:0B00
ret_24ed_b06:
	// 7910 
cs=0x24ed;eip=0x000b06; 	R(JZ(locret_33fff));	// 119819 jz      short locret_33FFF ;~ 24ED:0B06
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000b08; 	X(MOV(*(&byte_3366e), 0));	// 119820 mov     cs:byte_3366E, 0 ;~ 24ED:0B08
cs=0x24ed;eip=0x000b0e; 	X(PUSHA);	// 119821 pusha ;~ 24ED:0B0E
cs=0x24ed;eip=0x000b0f; 	X(PUSH(es));	// 119822 push    es ;~ 24ED:0B0F
cs=0x24ed;eip=0x000b10; 	X(PUSH(cs));	// 119823 push    cs ;~ 24ED:0B10
cs=0x24ed;eip=0x000b11; 	X(POP(es));	// 119824 pop     es ;~ 24ED:0B11
cs=0x24ed;eip=0x000b12; 	T(MOV(di, 0x1BF));	// 119825 mov     di, 1BFh ;~ 24ED:0B12
cs=0x24ed;eip=0x000b15; 	T(MOV(cx, 0x100));	// 119826 mov     cx, 100h ;~ 24ED:0B15
loc_33fc8:
	// 7911 
cs=0x24ed;eip=0x000b18; 	T(XOR(al, al));	// 119829 xor     al, al ;~ 24ED:0B18
	// 119830 repe scasb ;~ 24ED:0B1A
cs=0x24ed;eip=0x000b1a; 	T(	REPE SCASB);	// 119830 repe scasb ;~ 24ED:0B1A
cs=0x24ed;eip=0x000b1c; 	R(JZ(loc_33ff3));	// 119831 jz      short loc_33FF3 ;~ 24ED:0B1C
cs=0x24ed;eip=0x000b1e; 	T(DEC(di));	// 119832 dec     di ;~ 24ED:0B1E
cs=0x24ed;eip=0x000b1f; 	T(INC(cx));	// 119833 inc     cx ;~ 24ED:0B1F
cs=0x24ed;eip=0x000b20; 	T(MOV(bx, cx));	// 119834 mov     bx, cx ;~ 24ED:0B20
	// 119835 repne scasb ;~ 24ED:0B22
cs=0x24ed;eip=0x000b22; 	T(	REPNE SCASB);	// 119835 repne scasb ;~ 24ED:0B22
cs=0x24ed;eip=0x000b24; 	X(PUSH(cx));	// 119836 push    cx ;~ 24ED:0B24
cs=0x24ed;eip=0x000b25; 	R(JNZ(loc_33fd8));	// 119837 jnz     short loc_33FD8 ;~ 24ED:0B25
cs=0x24ed;eip=0x000b27; 	T(INC(cx));	// 119838 inc     cx ;~ 24ED:0B27
loc_33fd8:
	// 7912 
cs=0x24ed;eip=0x000b28; 	T(SUB(cx, bx));	// 119841 sub     cx, bx ;~ 24ED:0B28
cs=0x24ed;eip=0x000b2a; 	T(NEG(cx));	// 119842 neg     cx ;~ 24ED:0B2A
cs=0x24ed;eip=0x000b2c; 	T(MOV(dx, 0x100));	// 119843 mov     dx, 100h ;~ 24ED:0B2C
cs=0x24ed;eip=0x000b2f; 	T(SUB(dx, bx));	// 119844 sub     dx, bx ;~ 24ED:0B2F
cs=0x24ed;eip=0x000b31; 	T(MOV(bx, dx));	// 119845 mov     bx, dx ;~ 24ED:0B31
cs=0x24ed;eip=0x000b33; 	T(ADD(dx, dx));	// 119846 add     dx, dx ;~ 24ED:0B33
cs=0x24ed;eip=0x000b35; 	T(ADD(dx, bx));	// 119847 add     dx, bx ;~ 24ED:0B35
cs=0x24ed;eip=0x000b37; 	T(ADD(dx, 0x5BF));	// 119848 add     dx, 5BFh ;~ 24ED:0B37
cs=0x24ed;eip=0x000b3b; 	R(CALL(sub_34000,0));	// 119849 call    sub_34000 ;~ 24ED:0B3B
cs=0x24ed;eip=0x000b3e; 	X(POP(cx));	// 119850 pop     cx ;~ 24ED:0B3E
cs=0x24ed;eip=0x000b3f; 	T(OR(cx, cx));	// 119851 or      cx, cx ;~ 24ED:0B3F
cs=0x24ed;eip=0x000b41; 	R(JNZ(loc_33fc8));	// 119852 jnz     short loc_33FC8 ;~ 24ED:0B41
loc_33ff3:
	// 7913 
cs=0x24ed;eip=0x000b43; 	T(MOV(di, 0x1BF));	// 119855 mov     di, 1BFh ;~ 24ED:0B43
cs=0x24ed;eip=0x000b46; 	T(MOV(cx, 0x80));	// 119856 mov     cx, 80h ; '€' ;~ 24ED:0B46
cs=0x24ed;eip=0x000b49; 	T(XOR(ax, ax));	// 119857 xor     ax, ax ;~ 24ED:0B49
	// 119858 rep stosw ;~ 24ED:0B4B
cs=0x24ed;eip=0x000b4b; 	X(	REP STOSW);	// 119858 rep stosw ;~ 24ED:0B4B
loc_33ffd:
	// 7914 
cs=0x24ed;eip=0x000b4d; 	X(POP(es));	// 119861 pop     es ;~ 24ED:0B4D
cs=0x24ed;eip=0x000b4e; 	X(POPA);	// 119863 popa ;~ 24ED:0B4E
locret_33fff:
	// 7915 
cs=0x24ed;eip=0x000b4f; 	R(RETF(0));	// 119866 retf ;~ 24ED:0B4F
sub_34000:
	// 119873 
cs=0x24ed;eip=0x000b50; 	X(PUSH(si));	// 119875 push    si ;~ 24ED:0B50
ret_24ed_b51:
	// 7916 
cs=0x24ed;eip=0x000b51; 	X(PUSH(ds));	// 119876 push    ds ;~ 24ED:0B51
cs=0x24ed;eip=0x000b52; 	X(PUSH(es));	// 119877 push    es ;~ 24ED:0B52
cs=0x24ed;eip=0x000b53; 	X(POP(ds));	// 119878 pop     ds ;~ 24ED:0B53
cs=0x24ed;eip=0x000b54; 	T(MOV(si, dx));	// 119879 mov     si, dx ;~ 24ED:0B54
cs=0x24ed;eip=0x000b56; 	X(PUSHF);	// 119880 pushf ;~ 24ED:0B56
cs=0x24ed;eip=0x000b57; 	T(CMP(*(raddr(ds,0x1A1)), 0));	// 119881 cmp     byte ptr ds:1A1h, 0 ;~ 24ED:0B57
cs=0x24ed;eip=0x000b5c; 	R(JZ(loc_3401b));	// 119882 jz      short loc_3401B ;~ 24ED:0B5C
cs=0x24ed;eip=0x000b5e; 	T(MOV(dx, *(dw*)(raddr(ds,0x19F))));	// 119883 mov     dx, ds:19Fh ;~ 24ED:0B5E
loc_34012:
	// 7917 
cs=0x24ed;eip=0x000b62; 	R(IN(al, dx));	// 119886 in      al, dx ;~ 24ED:0B62
cs=0x24ed;eip=0x000b63; 	T(AND(al, 8));	// 119887 and     al, 8 ;~ 24ED:0B63
cs=0x24ed;eip=0x000b65; 	T(CMP(al, *(raddr(ds,0x1A2))));	// 119888 cmp     al, ds:1A2h ;~ 24ED:0B65
cs=0x24ed;eip=0x000b69; 	R(JNZ(loc_34012));	// 119889 jnz     short loc_34012 ;~ 24ED:0B69
loc_3401b:
	// 7918 
cs=0x24ed;eip=0x000b6b; 	T(CLI);	// 119892 cli ;~ 24ED:0B6B
cs=0x24ed;eip=0x000b6c; 	T(MOV(dx, 0x3C8));	// 119893 mov     dx, 3C8h ;~ 24ED:0B6C
cs=0x24ed;eip=0x000b6f; 	T(MOV(al, bl));	// 119894 mov     al, bl ;~ 24ED:0B6F
cs=0x24ed;eip=0x000b71; 	R(OUT(dx, al));	// 119895 out     dx, al ;~ 24ED:0B71
cs=0x24ed;eip=0x000b72; 		// 119896 jmp     short $+2 ;~ 24ED:0B72
loc_34024:
	// 7919 
cs=0x24ed;eip=0x000b74; 		// 119900 jmp     short $+2 ;~ 24ED:0B74
loc_34026:
	// 7920 
cs=0x24ed;eip=0x000b76; 		// 119904 jmp     short $+2 ;~ 24ED:0B76
loc_34028:
	// 7921 
cs=0x24ed;eip=0x000b78; 		// 119908 jmp     short $+2 ;~ 24ED:0B78
loc_3402a:
	// 7922 
cs=0x24ed;eip=0x000b7a; 	T(INC(dx));	// 119912 inc     dx ;~ 24ED:0B7A
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000b7b; 	T(CMP(*(&byte_3366d), 0));	// 119913 cmp     cs:byte_3366D, 0 ;~ 24ED:0B7B
cs=0x24ed;eip=0x000b81; 	R(JNZ(loc_34041));	// 119914 jnz     short loc_34041 ;~ 24ED:0B81
cs=0x24ed;eip=0x000b83; 	T(MOV(ax, cx));	// 119915 mov     ax, cx ;~ 24ED:0B83
cs=0x24ed;eip=0x000b85; 	T(ADD(cx, cx));	// 119916 add     cx, cx ;~ 24ED:0B85
cs=0x24ed;eip=0x000b87; 	T(ADD(cx, ax));	// 119917 add     cx, ax ;~ 24ED:0B87
loc_34039:
	// 7923 
cs=0x24ed;eip=0x000b89; 	T(LODSB);	// 119920 lodsb ;~ 24ED:0B89
cs=0x24ed;eip=0x000b8a; 	R(OUT(dx, al));	// 119921 out     dx, al ;~ 24ED:0B8A
cs=0x24ed;eip=0x000b8b; 	R(LOOP(loc_34039));	// 119922 loop    loc_34039 ;~ 24ED:0B8B
cs=0x24ed;eip=0x000b8d; 	X(POPF);	// 119923 popf ;~ 24ED:0B8D
cs=0x24ed;eip=0x000b8e; 	X(POP(ds));	// 119924 pop     ds ;~ 24ED:0B8E
cs=0x24ed;eip=0x000b8f; 	X(POP(si));	// 119925 pop     si ;~ 24ED:0B8F
cs=0x24ed;eip=0x000b90; 	R(RETN(0));	// 119926 retn ;~ 24ED:0B90
loc_34041:
	// 7924 
cs=0x24ed;eip=0x000b91; 	T(LODSB);	// 119931 lodsb ;~ 24ED:0B91
cs=0x24ed;eip=0x000b92; 	T(AND(ax, 0x3F));	// 119932 and     ax, 3Fh ;~ 24ED:0B92
cs=0x24ed;eip=0x000b95; 	T(MOV(bp, ax));	// 119933 mov     bp, ax ;~ 24ED:0B95
cs=0x24ed;eip=0x000b97; 	T(SHL(bp, 1));	// 119934 shl     bp, 1 ;~ 24ED:0B97
cs=0x24ed;eip=0x000b99; 	T(SHL(bp, 1));	// 119935 shl     bp, 1 ;~ 24ED:0B99
cs=0x24ed;eip=0x000b9b; 	T(ADD(bp, ax));	// 119936 add     bp, ax ;~ 24ED:0B9B
cs=0x24ed;eip=0x000b9d; 	T(LODSB);	// 119937 lodsb ;~ 24ED:0B9D
cs=0x24ed;eip=0x000b9e; 	T(AND(al, 0x3F));	// 119938 and     al, 3Fh ;~ 24ED:0B9E
cs=0x24ed;eip=0x000ba0; 	T(MOV(bx, ax));	// 119939 mov     bx, ax ;~ 24ED:0BA0
cs=0x24ed;eip=0x000ba2; 	T(SHL(bx, 1));	// 119940 shl     bx, 1 ;~ 24ED:0BA2
cs=0x24ed;eip=0x000ba4; 	T(SHL(bx, 1));	// 119941 shl     bx, 1 ;~ 24ED:0BA4
cs=0x24ed;eip=0x000ba6; 	T(SHL(bx, 1));	// 119942 shl     bx, 1 ;~ 24ED:0BA6
cs=0x24ed;eip=0x000ba8; 	T(ADD(bx, ax));	// 119943 add     bx, ax ;~ 24ED:0BA8
cs=0x24ed;eip=0x000baa; 	T(LODSB);	// 119944 lodsb ;~ 24ED:0BAA
cs=0x24ed;eip=0x000bab; 	T(AND(al, 0x3F));	// 119945 and     al, 3Fh ;~ 24ED:0BAB
cs=0x24ed;eip=0x000bad; 	T(SHL(ax, 1));	// 119946 shl     ax, 1 ;~ 24ED:0BAD
cs=0x24ed;eip=0x000baf; 	T(ADD(ax, bp));	// 119947 add     ax, bp ;~ 24ED:0BAF
cs=0x24ed;eip=0x000bb1; 	T(ADD(ax, bx));	// 119948 add     ax, bx ;~ 24ED:0BB1
cs=0x24ed;eip=0x000bb3; 	T(SHR(ax, 1));	// 119949 shr     ax, 1 ;~ 24ED:0BB3
cs=0x24ed;eip=0x000bb5; 	T(SHR(ax, 1));	// 119950 shr     ax, 1 ;~ 24ED:0BB5
cs=0x24ed;eip=0x000bb7; 	T(SHR(ax, 1));	// 119951 shr     ax, 1 ;~ 24ED:0BB7
cs=0x24ed;eip=0x000bb9; 	T(SHR(ax, 1));	// 119952 shr     ax, 1 ;~ 24ED:0BB9
cs=0x24ed;eip=0x000bbb; 	R(OUT(dx, al));	// 119953 out     dx, al ;~ 24ED:0BBB
cs=0x24ed;eip=0x000bbc; 	R(OUT(dx, al));	// 119954 out     dx, al ;~ 24ED:0BBC
cs=0x24ed;eip=0x000bbd; 	R(OUT(dx, al));	// 119955 out     dx, al ;~ 24ED:0BBD
cs=0x24ed;eip=0x000bbe; 	R(LOOP(loc_34041));	// 119956 loop    loc_34041 ;~ 24ED:0BBE
cs=0x24ed;eip=0x000bc0; 	X(POPF);	// 119957 popf ;~ 24ED:0BC0
cs=0x24ed;eip=0x000bc1; 	X(POP(ds));	// 119958 pop     ds ;~ 24ED:0BC1
cs=0x24ed;eip=0x000bc2; 	X(POP(si));	// 119959 pop     si ;~ 24ED:0BC2
cs=0x24ed;eip=0x000bc3; 	R(RETN(0));	// 119960 retn ;~ 24ED:0BC3
seg002_bc4_proc:
	// 119964 
cs=0x24ed;eip=0x000bc4; 	X(PUSH(si));	// 119964 push    si ;~ 24ED:0BC4
ret_24ed_bc5:
	// 7925 
cs=0x24ed;eip=0x000bc5; 	X(PUSH(ds));	// 119965 push    ds ;~ 24ED:0BC5
cs=0x24ed;eip=0x000bc6; 	X(PUSH(es));	// 119966 push    es ;~ 24ED:0BC6
cs=0x24ed;eip=0x000bc7; 	X(PUSH(cs));	// 119967 push    cs ;~ 24ED:0BC7
cs=0x24ed;eip=0x000bc8; 	X(PUSH(cs));	// 119968 push    cs ;~ 24ED:0BC8
cs=0x24ed;eip=0x000bc9; 	X(POP(ds));	// 119969 pop     ds ;~ 24ED:0BC9
cs=0x24ed;eip=0x000bca; 	X(POP(es));	// 119971 pop     es ;~ 24ED:0BCA
cs=0x24ed;eip=0x000bcb; 	T(MOV(si, 0x73F));	// 119972 mov     si, 73Fh ;~ 24ED:0BCB
cs=0x24ed;eip=0x000bce; 	T(MOV(dx, si));	// 119973 mov     dx, si ;~ 24ED:0BCE
cs=0x24ed;eip=0x000bd0; 	T(MOV(di, si));	// 119974 mov     di, si ;~ 24ED:0BD0
cs=0x24ed;eip=0x000bd2; 	T(LODSW);	// 119975 lodsw ;~ 24ED:0BD2
cs=0x24ed;eip=0x000bd3; 	T(MOV(bl, *(raddr(ds,si))));	// 119976 mov     bl, [si] ;~ 24ED:0BD3
cs=0x24ed;eip=0x000bd5; 	T(INC(si));	// 119977 inc     si ;~ 24ED:0BD5
cs=0x24ed;eip=0x000bd6; 	T(MOV(cx, 0x5E));	// 119978 mov     cx, 5Eh ; '^' ;~ 24ED:0BD6
	// 119979 rep movsw ;~ 24ED:0BD9
cs=0x24ed;eip=0x000bd9; 	X(	REP MOVSW);	// 119979 rep movsw ;~ 24ED:0BD9
cs=0x24ed;eip=0x000bdb; 	X(MOVSB);	// 119980 movsb ;~ 24ED:0BDB
cs=0x24ed;eip=0x000bdc; 	X(STOSW);	// 119981 stosw ;~ 24ED:0BDC
cs=0x24ed;eip=0x000bdd; 	X(MOV(*(raddr(ds,di)), bl));	// 119982 mov     [di], bl ;~ 24ED:0BDD
cs=0x24ed;eip=0x000bdf; 	T(MOV(bx, 0x80));	// 119983 mov     bx, 80h ; '€' ;~ 24ED:0BDF
cs=0x24ed;eip=0x000be2; 	T(MOV(cx, 0x40));	// 119984 mov     cx, 40h ; '@' ;~ 24ED:0BE2
cs=0x24ed;eip=0x000be5; 	R(CALL(sub_34000,0));	// 119985 call    sub_34000 ;~ 24ED:0BE5
cs=0x24ed;eip=0x000be8; 	X(POP(es));	// 119986 pop     es ;~ 24ED:0BE8
cs=0x24ed;eip=0x000be9; 	X(POP(ds));	// 119987 pop     ds ;~ 24ED:0BE9
cs=0x24ed;eip=0x000bea; 	X(POP(si));	// 119989 pop     si ;~ 24ED:0BEA
cs=0x24ed;eip=0x000beb; 	R(RETN(0));	// 119990 retn ;~ 24ED:0BEB
ret_24ed_bec:
	// 7926 
cs=0x24ed;eip=0x000bec; 	R(RETF(0));	// 119992 retf ;~ 24ED:0BEC
ret_24ed_bed:
	// 7927 
cs=0x24ed;eip=0x000bed; 	R(RETF(0));	// 119994 retf ;~ 24ED:0BED
ret_24ed_bee:
	// 7928 
cs=0x24ed;eip=0x000bee; 	T(MOV(dx, 0x140));	// 119996 mov     dx, 140h ;~ 24ED:0BEE
cs=0x24ed;eip=0x000bf1; 	T(MUL1_2(dx));	// 119997 mul     dx ;~ 24ED:0BF1
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000bf3; 	X(MOV(*(dw*)(((db*)&word_33653)), ax));	// 119998 mov     cs:word_33653, ax ;~ 24ED:0BF3
cs=0x24ed;eip=0x000bf7; 	R(RETF(0));	// 119999 retf ;~ 24ED:0BF7
sub_340a8:
	// 120004 
cs=0x24ed;eip=0x000bf8; 	T(CMP(bx, 0x0C8));	// 120006 cmp     bx, 0C8h ; 'È' ;~ 24ED:0BF8
ret_24ed_bfc:
	// 7929 
cs=0x24ed;eip=0x000bfc; 	R(JC(loc_340b1));	// 120007 jb      short loc_340B1 ;~ 24ED:0BFC
cs=0x24ed;eip=0x000bfe; 	T(MOV(bx, 0x0C7));	// 120008 mov     bx, 0C7h ; 'Ç' ;~ 24ED:0BFE
loc_340b1:
	// 7930 
cs=0x24ed;eip=0x000c01; 	T(XCHG(bh, bl));	// 120011 xchg    bh, bl ;~ 24ED:0C01
cs=0x24ed;eip=0x000c03; 	T(MOV(di, bx));	// 120012 mov     di, bx ;~ 24ED:0C03
cs=0x24ed;eip=0x000c05; 	T(SHR(di, 2));	// 120013 shr     di, 2 ;~ 24ED:0C05
cs=0x24ed;eip=0x000c08; 	T(ADD(di, bx));	// 120014 add     di, bx ;~ 24ED:0C08
cs=0x24ed;eip=0x000c0a; 	T(XCHG(bh, bl));	// 120015 xchg    bh, bl ;~ 24ED:0C0A
cs=0x24ed;eip=0x000c0c; 	T(ADD(di, dx));	// 120016 add     di, dx ;~ 24ED:0C0C
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000c0e; 	T(ADD(di, *(dw*)(((db*)&word_33653))));	// 120017 add     di, cs:word_33653 ;~ 24ED:0C0E
cs=0x24ed;eip=0x000c13; 	R(RETN(0));	// 120018 retn ;~ 24ED:0C13
seg002_c14_proc:
	// 120023 
loc_340c4:
	// 7931 
cs=0x24ed;eip=0x000c14; 	X(PUSH(bx));	// 120024 push    bx ;~ 24ED:0C14
cs=0x24ed;eip=0x000c15; 	R(CALL(sub_340a8,0));	// 120025 call    sub_340A8 ;~ 24ED:0C15
cs=0x24ed;eip=0x000c18; 	X(POP(bx));	// 120026 pop     bx ;~ 24ED:0C18
cs=0x24ed;eip=0x000c19; 	X(STOSB);	// 120027 stosb ;~ 24ED:0C19
cs=0x24ed;eip=0x000c1a; 	R(RETF(0));	// 120028 retf ;~ 24ED:0C1A
ret_24ed_c1b:
	// 7932 
cs=0x24ed;eip=0x000c1b; 	R(CALL(sub_340a8,0));	// 120030 call    sub_340A8 ;~ 24ED:0C1B
cs=0x24ed;eip=0x000c1e; 	T(MOV(al, *(raddr(es,di))));	// 120031 mov     al, es:[di] ;~ 24ED:0C1E
cs=0x24ed;eip=0x000c21; 	R(RETF(0));	// 120032 retf ;~ 24ED:0C21
loc_340dd:
	// 7933 
cs=0x24ed;eip=0x000c2d; 	T(LODSB);	// 120046 lodsb ;~ 24ED:0C2D
cs=0x24ed;eip=0x000c2e; 	T(OR(al, al));	// 120047 or      al, al ;~ 24ED:0C2E
cs=0x24ed;eip=0x000c30; 	R(JS(loc_34118));	// 120048 js      short loc_34118 ;~ 24ED:0C30
cs=0x24ed;eip=0x000c32; 	T(MOV(cx, ax));	// 120049 mov     cx, ax ;~ 24ED:0C32
cs=0x24ed;eip=0x000c34; 	T(XOR(ch, ch));	// 120050 xor     ch, ch ;~ 24ED:0C34
cs=0x24ed;eip=0x000c36; 	T(INC(cx));	// 120051 inc     cx ;~ 24ED:0C36
cs=0x24ed;eip=0x000c37; 	T(SUB(bp, cx));	// 120052 sub     bp, cx ;~ 24ED:0C37
loc_340e9:
	// 7934 
cs=0x24ed;eip=0x000c39; 	T(LODSB);	// 120056 lodsb ;~ 24ED:0C39
cs=0x24ed;eip=0x000c3a; 	T(MOV(ah, al));	// 120057 mov     ah, al ;~ 24ED:0C3A
cs=0x24ed;eip=0x000c3c; 	T(AND(al, dl));	// 120058 and     al, dl ;~ 24ED:0C3C
cs=0x24ed;eip=0x000c3e; 	R(JZ(loc_3410d));	// 120059 jz      short loc_3410D ;~ 24ED:0C3E
cs=0x24ed;eip=0x000c40; 	T(ADD(al, dh));	// 120060 add     al, dh ;~ 24ED:0C40
cs=0x24ed;eip=0x000c42; 	X(STOSB);	// 120061 stosb ;~ 24ED:0C42
cs=0x24ed;eip=0x000c43; 	T(SHR(ah, 4));	// 120062 shr     ah, 4 ;~ 24ED:0C43
cs=0x24ed;eip=0x000c46; 	R(JZ(loc_34113));	// 120063 jz      short loc_34113 ;~ 24ED:0C46
loc_340f8:
	// 7935 
cs=0x24ed;eip=0x000c48; 	T(MOV(al, ah));	// 120066 mov     al, ah ;~ 24ED:0C48
cs=0x24ed;eip=0x000c4a; 	T(ADD(al, dh));	// 120067 add     al, dh ;~ 24ED:0C4A
cs=0x24ed;eip=0x000c4c; 	X(STOSB);	// 120068 stosb ;~ 24ED:0C4C
cs=0x24ed;eip=0x000c4d; 	R(LOOP(loc_340e9));	// 120069 loop    loc_340E9 ;~ 24ED:0C4D
loc_340ff:
	// 7936 
cs=0x24ed;eip=0x000c4f; 	T(OR(bp, bp));	// 120072 or      bp, bp ;~ 24ED:0C4F
cs=0x24ed;eip=0x000c51; 	R(JA(loc_340dd));	// 120073 ja      short loc_340DD ;~ 24ED:0C51
cs=0x24ed;eip=0x000c53; 	T(DEC(bx));	// 120074 dec     bx ;~ 24ED:0C53
cs=0x24ed;eip=0x000c54; __disp=byte_340d2;
	R(JNZ(__dispatch_call));	// 120075 jnz     short near ptr byte_340D2 ;~ 24ED:0C54
loc_34106:
	// 7937 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000c56; 	X(MOV(*(&byte_340da), 0x0C7));	// 120078 mov     cs:byte_340DA, 0C7h ; 'Ç' ;~ 24ED:0C56
cs=0x24ed;eip=0x000c5c; 	R(RETF(0));	// 120079 retf ;~ 24ED:0C5C
loc_3410d:
	// 7938 
cs=0x24ed;eip=0x000c5d; 	T(INC(di));	// 120083 inc     di ;~ 24ED:0C5D
cs=0x24ed;eip=0x000c5e; 	T(SHR(ah, 4));	// 120084 shr     ah, 4 ;~ 24ED:0C5E
cs=0x24ed;eip=0x000c61; 	R(JNZ(loc_340f8));	// 120085 jnz     short loc_340F8 ;~ 24ED:0C61
loc_34113:
	// 7939 
cs=0x24ed;eip=0x000c63; 	T(INC(di));	// 120088 inc     di ;~ 24ED:0C63
cs=0x24ed;eip=0x000c64; 	R(LOOP(loc_340e9));	// 120089 loop    loc_340E9 ;~ 24ED:0C64
cs=0x24ed;eip=0x000c66; 	R(JMP(loc_340ff));	// 120090 jmp     short loc_340FF ;~ 24ED:0C66
loc_34118:
	// 7940 
cs=0x24ed;eip=0x000c68; 	T(MOV(cx, 0x101));	// 120094 mov     cx, 101h ;~ 24ED:0C68
cs=0x24ed;eip=0x000c6b; 	T(XOR(ah, ah));	// 120095 xor     ah, ah ;~ 24ED:0C6B
cs=0x24ed;eip=0x000c6d; 	T(SUB(cx, ax));	// 120096 sub     cx, ax ;~ 24ED:0C6D
cs=0x24ed;eip=0x000c6f; 	T(SUB(bp, cx));	// 120097 sub     bp, cx ;~ 24ED:0C6F
cs=0x24ed;eip=0x000c71; 	T(LODSB);	// 120098 lodsb ;~ 24ED:0C71
cs=0x24ed;eip=0x000c72; 	T(SHL(ax, 4));	// 120099 shl     ax, 4 ;~ 24ED:0C72
cs=0x24ed;eip=0x000c75; 	R(JZ(loc_3413f));	// 120100 jz      short loc_3413F ;~ 24ED:0C75
cs=0x24ed;eip=0x000c77; 	T(SHR(al, 4));	// 120101 shr     al, 4 ;~ 24ED:0C77
cs=0x24ed;eip=0x000c7a; 	R(JZ(loc_34149));	// 120102 jz      short loc_34149 ;~ 24ED:0C7A
cs=0x24ed;eip=0x000c7c; 	T(ADD(al, dh));	// 120103 add     al, dh ;~ 24ED:0C7C
cs=0x24ed;eip=0x000c7e; 	T(OR(ah, ah));	// 120104 or      ah, ah ;~ 24ED:0C7E
cs=0x24ed;eip=0x000c80; 	R(JZ(loc_34157));	// 120105 jz      short loc_34157 ;~ 24ED:0C80
cs=0x24ed;eip=0x000c82; 	T(ADD(ah, dh));	// 120106 add     ah, dh ;~ 24ED:0C82
	// 120107 rep stosw ;~ 24ED:0C84
cs=0x24ed;eip=0x000c84; 	X(	REP STOSW);	// 120107 rep stosw ;~ 24ED:0C84
loc_34136:
	// 7941 
cs=0x24ed;eip=0x000c86; 	T(OR(bp, bp));	// 120110 or      bp, bp ;~ 24ED:0C86
cs=0x24ed;eip=0x000c88; 	R(JA(loc_340dd));	// 120111 ja      short loc_340DD ;~ 24ED:0C88
loc_3413a:
	// 7942 
cs=0x24ed;eip=0x000c8a; 	T(DEC(bx));	// 120115 dec     bx ;~ 24ED:0C8A
cs=0x24ed;eip=0x000c8b; __disp=byte_340d2;
	R(JNZ(__dispatch_call));	// 120116 jnz     short near ptr byte_340D2 ;~ 24ED:0C8B
cs=0x24ed;eip=0x000c8d; 	R(JMP(loc_34106));	// 120117 jmp     short loc_34106 ;~ 24ED:0C8D
loc_3413f:
	// 7943 
cs=0x24ed;eip=0x000c8f; 	T(SHL(cx, 1));	// 120121 shl     cx, 1 ;~ 24ED:0C8F
cs=0x24ed;eip=0x000c91; 	T(ADD(di, cx));	// 120122 add     di, cx ;~ 24ED:0C91
cs=0x24ed;eip=0x000c93; 	T(OR(bp, bp));	// 120123 or      bp, bp ;~ 24ED:0C93
cs=0x24ed;eip=0x000c95; 	R(JA(loc_340dd));	// 120124 ja      short loc_340DD ;~ 24ED:0C95
cs=0x24ed;eip=0x000c97; 	R(JMP(loc_3413a));	// 120125 jmp     short loc_3413A ;~ 24ED:0C97
loc_34149:
	// 7944 
cs=0x24ed;eip=0x000c99; 	T(MOV(al, ah));	// 120129 mov     al, ah ;~ 24ED:0C99
cs=0x24ed;eip=0x000c9b; 	T(ADD(al, dh));	// 120130 add     al, dh ;~ 24ED:0C9B
loc_3414d:
	// 7945 
cs=0x24ed;eip=0x000c9d; 	T(INC(di));	// 120133 inc     di ;~ 24ED:0C9D
cs=0x24ed;eip=0x000c9e; 	X(STOSB);	// 120134 stosb ;~ 24ED:0C9E
cs=0x24ed;eip=0x000c9f; 	R(LOOP(loc_3414d));	// 120135 loop    loc_3414D ;~ 24ED:0C9F
cs=0x24ed;eip=0x000ca1; 	T(OR(bp, bp));	// 120136 or      bp, bp ;~ 24ED:0CA1
cs=0x24ed;eip=0x000ca3; 	R(JBE(loc_3413a));	// 120137 jbe     short loc_3413A ;~ 24ED:0CA3
cs=0x24ed;eip=0x000ca5; 	R(JMP(loc_340dd));	// 120138 jmp     short loc_340DD ;~ 24ED:0CA5
loc_34157:
	// 7946 
cs=0x24ed;eip=0x000ca7; 	X(STOSB);	// 120143 stosb ;~ 24ED:0CA7
cs=0x24ed;eip=0x000ca8; 	T(INC(di));	// 120144 inc     di ;~ 24ED:0CA8
cs=0x24ed;eip=0x000ca9; 	R(LOOP(loc_34157));	// 120145 loop    loc_34157 ;~ 24ED:0CA9
cs=0x24ed;eip=0x000cab; 	R(JMP(loc_34136));	// 120146 jmp     short loc_34136 ;~ 24ED:0CAB
loc_34168:
	// 7947 
cs=0x24ed;eip=0x000cb8; 	T(MOV(al, *(raddr(ds,si))));	// 120159 mov     al, [si] ;~ 24ED:0CB8
cs=0x24ed;eip=0x000cba; 	T(INC(si));	// 120160 inc     si ;~ 24ED:0CBA
cs=0x24ed;eip=0x000cbb; 	T(OR(al, al));	// 120161 or      al, al ;~ 24ED:0CBB
cs=0x24ed;eip=0x000cbd; 	R(JS(loc_341d9));	// 120162 js      short loc_341D9 ;~ 24ED:0CBD
cs=0x24ed;eip=0x000cbf; 	T(MOV(cx, ax));	// 120163 mov     cx, ax ;~ 24ED:0CBF
cs=0x24ed;eip=0x000cc1; 	T(XOR(ch, ch));	// 120164 xor     ch, ch ;~ 24ED:0CC1
cs=0x24ed;eip=0x000cc3; 	T(INC(cx));	// 120165 inc     cx ;~ 24ED:0CC3
cs=0x24ed;eip=0x000cc4; 	T(SUB(bp, cx));	// 120166 sub     bp, cx ;~ 24ED:0CC4
loc_34176:
	// 7948 
cs=0x24ed;eip=0x000cc6; 	T(MOV(al, *(raddr(ds,si))));	// 120170 mov     al, [si] ;~ 24ED:0CC6
cs=0x24ed;eip=0x000cc8; 	T(INC(si));	// 120171 inc     si ;~ 24ED:0CC8
cs=0x24ed;eip=0x000cc9; 	T(MOV(ah, al));	// 120172 mov     ah, al ;~ 24ED:0CC9
cs=0x24ed;eip=0x000ccb; 	T(AND(al, dl));	// 120173 and     al, dl ;~ 24ED:0CCB
cs=0x24ed;eip=0x000ccd; 	R(JZ(loc_341a2));	// 120174 jz      short loc_341A2 ;~ 24ED:0CCD
cs=0x24ed;eip=0x000ccf; 	T(ADD(al, dh));	// 120175 add     al, dh ;~ 24ED:0CCF
cs=0x24ed;eip=0x000cd1; 	X(STOSB);	// 120176 stosb ;~ 24ED:0CD1
cs=0x24ed;eip=0x000cd2; 	T(SHR(ah, 1));	// 120177 shr     ah, 1 ;~ 24ED:0CD2
loc_34184:
	// 7949 
cs=0x24ed;eip=0x000cd4; 	T(SHR(ah, 1));	// 120180 shr     ah, 1 ;~ 24ED:0CD4
cs=0x24ed;eip=0x000cd6; 	T(SHR(ah, 1));	// 120181 shr     ah, 1 ;~ 24ED:0CD6
cs=0x24ed;eip=0x000cd8; 	T(SHR(ah, 1));	// 120182 shr     ah, 1 ;~ 24ED:0CD8
cs=0x24ed;eip=0x000cda; 	R(JZ(loc_341a7));	// 120183 jz      short loc_341A7 ;~ 24ED:0CDA
cs=0x24ed;eip=0x000cdc; 	T(MOV(al, ah));	// 120184 mov     al, ah ;~ 24ED:0CDC
cs=0x24ed;eip=0x000cde; 	T(ADD(al, dh));	// 120185 add     al, dh ;~ 24ED:0CDE
cs=0x24ed;eip=0x000ce0; 	X(STOSB);	// 120186 stosb ;~ 24ED:0CE0
cs=0x24ed;eip=0x000ce1; 	R(LOOP(loc_34176));	// 120187 loop    loc_34176 ;~ 24ED:0CE1
loc_34193:
	// 7950 
cs=0x24ed;eip=0x000ce3; 	T(OR(bp, bp));	// 120190 or      bp, bp ;~ 24ED:0CE3
cs=0x24ed;eip=0x000ce5; 	R(JA(loc_34168));	// 120191 ja      short loc_34168 ;~ 24ED:0CE5
cs=0x24ed;eip=0x000ce7; 	T(DEC(bx));	// 120192 dec     bx ;~ 24ED:0CE7
cs=0x24ed;eip=0x000ce8; __disp=byte_3415d;
	R(JNZ(__dispatch_call));	// 120193 jnz     short near ptr byte_3415D ;~ 24ED:0CE8
cs=0x24ed;eip=0x000cea; 	T(CLD);	// 120194 cld ;~ 24ED:0CEA
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000ceb; 	X(MOV(*(&byte_34165), 0x0C7));	// 120195 mov     cs:byte_34165, 0C7h ; 'Ç' ;~ 24ED:0CEB
cs=0x24ed;eip=0x000cf1; 	R(RETF(0));	// 120196 retf ;~ 24ED:0CF1
loc_341a2:
	// 7951 
cs=0x24ed;eip=0x000cf2; 	T(DEC(di));	// 120200 dec     di ;~ 24ED:0CF2
cs=0x24ed;eip=0x000cf3; 	T(SHR(ah, 1));	// 120201 shr     ah, 1 ;~ 24ED:0CF3
cs=0x24ed;eip=0x000cf5; 	R(JNZ(loc_34184));	// 120202 jnz     short loc_34184 ;~ 24ED:0CF5
loc_341a7:
	// 7952 
cs=0x24ed;eip=0x000cf7; 	T(DEC(di));	// 120205 dec     di ;~ 24ED:0CF7
cs=0x24ed;eip=0x000cf8; 	R(LOOP(loc_34176));	// 120206 loop    loc_34176 ;~ 24ED:0CF8
cs=0x24ed;eip=0x000cfa; 	R(JMP(loc_34193));	// 120207 jmp     short loc_34193 ;~ 24ED:0CFA
loc_341ac:
	// 7953 
cs=0x24ed;eip=0x000cfc; 	T(SHL(cx, 1));	// 120211 shl     cx, 1 ;~ 24ED:0CFC
cs=0x24ed;eip=0x000cfe; 	T(SUB(di, cx));	// 120212 sub     di, cx ;~ 24ED:0CFE
cs=0x24ed;eip=0x000d00; 	T(OR(bp, bp));	// 120213 or      bp, bp ;~ 24ED:0D00
cs=0x24ed;eip=0x000d02; 	R(JA(loc_34168));	// 120214 ja      short loc_34168 ;~ 24ED:0D02
cs=0x24ed;eip=0x000d04; 	R(JMP(loc_341ce));	// 120215 jmp     short loc_341CE ;~ 24ED:0D04
loc_341b7:
	// 7954 
cs=0x24ed;eip=0x000d07; 	T(MOV(al, ah));	// 120221 mov     al, ah ;~ 24ED:0D07
cs=0x24ed;eip=0x000d09; 	T(ADD(al, dh));	// 120222 add     al, dh ;~ 24ED:0D09
loc_341bb:
	// 7955 
cs=0x24ed;eip=0x000d0b; 	T(DEC(di));	// 120225 dec     di ;~ 24ED:0D0B
cs=0x24ed;eip=0x000d0c; 	X(STOSB);	// 120226 stosb ;~ 24ED:0D0C
cs=0x24ed;eip=0x000d0d; 	R(LOOP(loc_341bb));	// 120227 loop    loc_341BB ;~ 24ED:0D0D
cs=0x24ed;eip=0x000d0f; 	T(OR(bp, bp));	// 120228 or      bp, bp ;~ 24ED:0D0F
cs=0x24ed;eip=0x000d11; 	R(JA(loc_34168));	// 120229 ja      short loc_34168 ;~ 24ED:0D11
cs=0x24ed;eip=0x000d13; 	R(JMP(loc_341ce));	// 120230 jmp     short loc_341CE ;~ 24ED:0D13
loc_341c6:
	// 7956 
cs=0x24ed;eip=0x000d16; 	X(STOSB);	// 120236 stosb ;~ 24ED:0D16
cs=0x24ed;eip=0x000d17; 	T(DEC(di));	// 120237 dec     di ;~ 24ED:0D17
cs=0x24ed;eip=0x000d18; 	R(LOOP(loc_341c6));	// 120238 loop    loc_341C6 ;~ 24ED:0D18
loc_341ca:
	// 7957 
cs=0x24ed;eip=0x000d1a; 	T(OR(bp, bp));	// 120241 or      bp, bp ;~ 24ED:0D1A
cs=0x24ed;eip=0x000d1c; 	R(JA(loc_34168));	// 120242 ja      short loc_34168 ;~ 24ED:0D1C
loc_341ce:
	// 7958 
cs=0x24ed;eip=0x000d1e; 	T(DEC(bx));	// 120246 dec     bx ;~ 24ED:0D1E
cs=0x24ed;eip=0x000d1f; __disp=byte_3415d;
	R(JNZ(__dispatch_call));	// 120247 jnz     short near ptr byte_3415D ;~ 24ED:0D1F
cs=0x24ed;eip=0x000d21; 	T(CLD);	// 120248 cld ;~ 24ED:0D21
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000d22; 	X(MOV(*(&byte_34165), 0x0C7));	// 120249 mov     cs:byte_34165, 0C7h ; 'Ç' ;~ 24ED:0D22
cs=0x24ed;eip=0x000d28; 	R(RETF(0));	// 120250 retf ;~ 24ED:0D28
loc_341d9:
	// 7959 
cs=0x24ed;eip=0x000d29; 	T(MOV(cx, 0x101));	// 120254 mov     cx, 101h ;~ 24ED:0D29
cs=0x24ed;eip=0x000d2c; 	T(XOR(ah, ah));	// 120255 xor     ah, ah ;~ 24ED:0D2C
cs=0x24ed;eip=0x000d2e; 	T(SUB(cx, ax));	// 120256 sub     cx, ax ;~ 24ED:0D2E
cs=0x24ed;eip=0x000d30; 	T(SUB(bp, cx));	// 120257 sub     bp, cx ;~ 24ED:0D30
cs=0x24ed;eip=0x000d32; 	T(MOV(al, *(raddr(ds,si))));	// 120258 mov     al, [si] ;~ 24ED:0D32
cs=0x24ed;eip=0x000d34; 	T(INC(si));	// 120259 inc     si ;~ 24ED:0D34
cs=0x24ed;eip=0x000d35; 	T(SHL(ax, 1));	// 120260 shl     ax, 1 ;~ 24ED:0D35
cs=0x24ed;eip=0x000d37; 	R(JZ(loc_341ac));	// 120261 jz      short loc_341AC ;~ 24ED:0D37
cs=0x24ed;eip=0x000d39; 	T(SHL(ax, 1));	// 120262 shl     ax, 1 ;~ 24ED:0D39
cs=0x24ed;eip=0x000d3b; 	T(SHL(ax, 1));	// 120263 shl     ax, 1 ;~ 24ED:0D3B
cs=0x24ed;eip=0x000d3d; 	T(SHL(ax, 1));	// 120264 shl     ax, 1 ;~ 24ED:0D3D
cs=0x24ed;eip=0x000d3f; 	T(SHR(al, 1));	// 120265 shr     al, 1 ;~ 24ED:0D3F
cs=0x24ed;eip=0x000d41; 	R(JZ(loc_341b7));	// 120266 jz      short loc_341B7 ;~ 24ED:0D41
cs=0x24ed;eip=0x000d43; 	T(SHR(al, 1));	// 120267 shr     al, 1 ;~ 24ED:0D43
cs=0x24ed;eip=0x000d45; 	T(SHR(al, 1));	// 120268 shr     al, 1 ;~ 24ED:0D45
cs=0x24ed;eip=0x000d47; 	T(SHR(al, 1));	// 120269 shr     al, 1 ;~ 24ED:0D47
cs=0x24ed;eip=0x000d49; 	T(ADD(al, dh));	// 120270 add     al, dh ;~ 24ED:0D49
cs=0x24ed;eip=0x000d4b; 	T(OR(ah, ah));	// 120271 or      ah, ah ;~ 24ED:0D4B
cs=0x24ed;eip=0x000d4d; 	R(JZ(loc_341c6));	// 120272 jz      short loc_341C6 ;~ 24ED:0D4D
cs=0x24ed;eip=0x000d4f; 	T(ADD(ah, dh));	// 120273 add     ah, dh ;~ 24ED:0D4F
cs=0x24ed;eip=0x000d51; 	T(DEC(di));	// 120274 dec     di ;~ 24ED:0D51
cs=0x24ed;eip=0x000d52; 	T(XCHG(ah, al));	// 120275 xchg    ah, al ;~ 24ED:0D52
	// 120276 rep stosw ;~ 24ED:0D54
cs=0x24ed;eip=0x000d54; 	X(	REP STOSW);	// 120276 rep stosw ;~ 24ED:0D54
cs=0x24ed;eip=0x000d56; 	T(INC(di));	// 120277 inc     di ;~ 24ED:0D56
cs=0x24ed;eip=0x000d57; 	R(JMP(loc_341ca));	// 120278 jmp     short loc_341CA ;~ 24ED:0D57
loc_3420d:
	// 7960 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000d5d; 	X(MOV(*(db*)(((db*)&word_3364d)+1), ch));	// 120286 mov     byte ptr cs:word_3364D+1, ch ;~ 24ED:0D5D
cs=0x24ed;eip=0x000d62; 	T(XOR(ch, ch));	// 120287 xor     ch, ch ;~ 24ED:0D62
cs=0x24ed;eip=0x000d64; 	T(AND(ax, 0x3FF));	// 120288 and     ax, 3FFh ;~ 24ED:0D64
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000d67; 	X(MOV(*(dw*)(((db*)&word_34209)), ax));	// 120289 mov     cs:word_34209, ax ;~ 24ED:0D67
cs=0x24ed;eip=0x000d6b; 	T(MOV(ax, di));	// 120290 mov     ax, di ;~ 24ED:0D6B
cs=0x24ed;eip=0x000d6d; 	T(AND(di, 0x1FF));	// 120291 and     di, 1FFh ;~ 24ED:0D6D
cs=0x24ed;eip=0x000d71; 	T(ADD(di, 3));	// 120292 add     di, 3 ;~ 24ED:0D71
cs=0x24ed;eip=0x000d74; 	T(SHR(di, 2));	// 120293 shr     di, 2 ;~ 24ED:0D74
cs=0x24ed;eip=0x000d77; 	T(SHL(di, 1));	// 120294 shl     di, 1 ;~ 24ED:0D77
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000d79; 	X(MOV(*(dw*)(((db*)&word_34265)), di));	// 120295 mov     cs:word_34265, di ;~ 24ED:0D79
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000d7e; 	X(MOV(*(&byte_34295), 0x0C7));	// 120296 mov     cs:byte_34295, 0C7h ; 'Ç' ;~ 24ED:0D7E
cs=0x24ed;eip=0x000d84; 	T(TEST(ax, 0x2000));	// 120297 test    ax, 2000h ;~ 24ED:0D84
cs=0x24ed;eip=0x000d87; 	R(JZ(loc_34242));	// 120298 jz      short loc_34242 ;~ 24ED:0D87
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000d89; 	X(MOV(*(&byte_34295), 0x0EF));	// 120299 mov     cs:byte_34295, 0EFh ; 'ï' ;~ 24ED:0D89
cs=0x24ed;eip=0x000d8f; 	T(ADD(bx, cx));	// 120300 add     bx, cx ;~ 24ED:0D8F
cs=0x24ed;eip=0x000d91; 	T(DEC(bx));	// 120301 dec     bx ;~ 24ED:0D91
loc_34242:
	// 7961 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000d92; 	X(MOV(*(&byte_342a8), 0x47));	// 120304 mov     cs:byte_342A8, 47h ; 'G' ;~ 24ED:0D92
cs=0x24ed;eip=0x000d98; 	T(TEST(ax, 0x4000));	// 120305 test    ax, 4000h ;~ 24ED:0D98
cs=0x24ed;eip=0x000d9b; 	R(JZ(loc_3425a));	// 120306 jz      short loc_3425A ;~ 24ED:0D9B
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000d9d; 	X(MOV(*(&byte_342a8), 0x4F));	// 120307 mov     cs:byte_342A8, 4Fh ; 'O' ;~ 24ED:0D9D
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000da3; 	T(ADD(dx, *(dw*)(((db*)&word_34209))));	// 120308 add     dx, cs:word_34209 ;~ 24ED:0DA3
cs=0x24ed;eip=0x000da8; 	T(DEC(dx));	// 120309 dec     dx ;~ 24ED:0DA8
cs=0x24ed;eip=0x000da9; 	T(STD);	// 120310 std ;~ 24ED:0DA9
loc_3425a:
	// 7962 
cs=0x24ed;eip=0x000daa; 	R(CALL(sub_340a8,0));	// 120313 call    sub_340A8 ;~ 24ED:0DAA
cs=0x24ed;eip=0x000dad; 	T(XOR(bx, bx));	// 120314 xor     bx, bx ;~ 24ED:0DAD
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000daf; 	X(MOV(*(dw*)(((db*)&word_3420b)), bx));	// 120315 mov     cs:word_3420B, bx ;~ 24ED:0DAF
loc_342af:
	// 7963 
cs=0x24ed;eip=0x000dff; 	T(MOV(bp, dx));	// 120335 mov     bp, dx ;~ 24ED:0DFF
cs=0x24ed;eip=0x000e01; 	T(SUB(di, bp));	// 120336 sub     di, bp ;~ 24ED:0E01
loc_342b7:
	// 7964 
cs=0x24ed;eip=0x000e07; 	T(LODSB);	// 120346 lodsb ;~ 24ED:0E07
cs=0x24ed;eip=0x000e08; 	T(OR(al, al));	// 120347 or      al, al ;~ 24ED:0E08
cs=0x24ed;eip=0x000e0a; 	R(JS(loc_342ec));	// 120348 js      short loc_342EC ;~ 24ED:0E0A
cs=0x24ed;eip=0x000e0c; 	T(MOV(cx, ax));	// 120349 mov     cx, ax ;~ 24ED:0E0C
cs=0x24ed;eip=0x000e0e; 	T(XOR(ch, ch));	// 120350 xor     ch, ch ;~ 24ED:0E0E
cs=0x24ed;eip=0x000e10; 	T(INC(cx));	// 120351 inc     cx ;~ 24ED:0E10
cs=0x24ed;eip=0x000e11; 	T(SUB(bp, cx));	// 120352 sub     bp, cx ;~ 24ED:0E11
loc_342c3:
	// 7965 
cs=0x24ed;eip=0x000e13; 	T(LODSB);	// 120356 lodsb ;~ 24ED:0E13
cs=0x24ed;eip=0x000e14; 	T(OR(al, al));	// 120357 or      al, al ;~ 24ED:0E14
cs=0x24ed;eip=0x000e16; 	R(JZ(loc_342e0));	// 120358 jz      short loc_342E0 ;~ 24ED:0E16
cs=0x24ed;eip=0x000e18; 	X(STOSB);	// 120359 stosb ;~ 24ED:0E18
cs=0x24ed;eip=0x000e19; 	R(LOOP(loc_342c3));	// 120360 loop    loc_342C3 ;~ 24ED:0E19
cs=0x24ed;eip=0x000e1b; 	T(OR(bp, bp));	// 120361 or      bp, bp ;~ 24ED:0E1B
cs=0x24ed;eip=0x000e1d; 	R(JA(loc_342b7));	// 120362 ja      short loc_342B7 ;~ 24ED:0E1D
cs=0x24ed;eip=0x000e1f; 	T(DEC(bx));	// 120363 dec     bx ;~ 24ED:0E1F
cs=0x24ed;eip=0x000e20; 	R(JNZ(loc_342af));	// 120364 jnz     short loc_342AF ;~ 24ED:0E20
loc_342d2:
	// 7966 
cs=0x24ed;eip=0x000e22; 	T(CLD);	// 120368 cld ;~ 24ED:0E22
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000e23; 	X(MOV(*(&byte_342b4), 0x0C7));	// 120369 mov     cs:byte_342B4, 0C7h ; 'Ç' ;~ 24ED:0E23
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000e29; 	X(MOV(*(&byte_34372), 0x0C7));	// 120370 mov     cs:byte_34372, 0C7h ; 'Ç' ;~ 24ED:0E29
cs=0x24ed;eip=0x000e2f; 	R(RETF(0));	// 120371 retf ;~ 24ED:0E2F
loc_342e0:
	// 7967 
cs=0x24ed;eip=0x000e30; 	T(INC(di));	// 120375 inc     di ;~ 24ED:0E30
cs=0x24ed;eip=0x000e31; 	R(LOOP(loc_342c3));	// 120376 loop    loc_342C3 ;~ 24ED:0E31
cs=0x24ed;eip=0x000e33; 	T(OR(bp, bp));	// 120377 or      bp, bp ;~ 24ED:0E33
cs=0x24ed;eip=0x000e35; 	R(JA(loc_342b7));	// 120378 ja      short loc_342B7 ;~ 24ED:0E35
cs=0x24ed;eip=0x000e37; 	T(DEC(bx));	// 120379 dec     bx ;~ 24ED:0E37
cs=0x24ed;eip=0x000e38; 	R(JNZ(loc_342af));	// 120380 jnz     short loc_342AF ;~ 24ED:0E38
cs=0x24ed;eip=0x000e3a; 	R(JMP(loc_342d2));	// 120381 jmp     short loc_342D2 ;~ 24ED:0E3A
loc_342ec:
	// 7968 
cs=0x24ed;eip=0x000e3c; 	T(MOV(cx, 0x101));	// 120385 mov     cx, 101h ;~ 24ED:0E3C
cs=0x24ed;eip=0x000e3f; 	T(XOR(ah, ah));	// 120386 xor     ah, ah ;~ 24ED:0E3F
cs=0x24ed;eip=0x000e41; 	T(SUB(cx, ax));	// 120387 sub     cx, ax ;~ 24ED:0E41
cs=0x24ed;eip=0x000e43; 	T(SUB(bp, cx));	// 120388 sub     bp, cx ;~ 24ED:0E43
cs=0x24ed;eip=0x000e45; 	T(LODSB);	// 120389 lodsb ;~ 24ED:0E45
cs=0x24ed;eip=0x000e46; 	T(OR(al, al));	// 120390 or      al, al ;~ 24ED:0E46
cs=0x24ed;eip=0x000e48; 	R(JZ(loc_34305));	// 120391 jz      short loc_34305 ;~ 24ED:0E48
	// 120392 rep stosb ;~ 24ED:0E4A
cs=0x24ed;eip=0x000e4a; 	X(	REP STOSB);	// 120392 rep stosb ;~ 24ED:0E4A
cs=0x24ed;eip=0x000e4c; 	T(OR(bp, bp));	// 120393 or      bp, bp ;~ 24ED:0E4C
cs=0x24ed;eip=0x000e4e; 	R(JA(loc_342b7));	// 120394 ja      short loc_342B7 ;~ 24ED:0E4E
cs=0x24ed;eip=0x000e50; 	T(DEC(bx));	// 120395 dec     bx ;~ 24ED:0E50
cs=0x24ed;eip=0x000e51; 	R(JNZ(loc_342af));	// 120396 jnz     short loc_342AF ;~ 24ED:0E51
cs=0x24ed;eip=0x000e53; 	R(JMP(loc_342d2));	// 120397 jmp     short loc_342D2 ;~ 24ED:0E53
loc_34305:
	// 7969 
cs=0x24ed;eip=0x000e55; 	T(ADD(di, cx));	// 120401 add     di, cx ;~ 24ED:0E55
cs=0x24ed;eip=0x000e57; 	T(OR(bp, bp));	// 120402 or      bp, bp ;~ 24ED:0E57
cs=0x24ed;eip=0x000e59; 	R(JA(loc_342b7));	// 120403 ja      short loc_342B7 ;~ 24ED:0E59
cs=0x24ed;eip=0x000e5b; 	T(DEC(bx));	// 120404 dec     bx ;~ 24ED:0E5B
cs=0x24ed;eip=0x000e5c; 	R(JNZ(loc_342af));	// 120405 jnz     short loc_342AF ;~ 24ED:0E5C
cs=0x24ed;eip=0x000e5e; 	R(JMP(loc_342d2));	// 120406 jmp     short loc_342D2 ;~ 24ED:0E5E
loc_34310:
	// 7970 
cs=0x24ed;eip=0x000e60; 	T(MOV(bp, dx));	// 120411 mov     bp, dx ;~ 24ED:0E60
cs=0x24ed;eip=0x000e62; 	T(ADD(di, bp));	// 120412 add     di, bp ;~ 24ED:0E62
loc_34318:
	// 7971 
cs=0x24ed;eip=0x000e68; 	T(MOV(al, *(raddr(ds,si))));	// 120421 mov     al, [si] ;~ 24ED:0E68
cs=0x24ed;eip=0x000e6a; 	T(INC(si));	// 120422 inc     si ;~ 24ED:0E6A
cs=0x24ed;eip=0x000e6b; 	T(OR(al, al));	// 120423 or      al, al ;~ 24ED:0E6B
cs=0x24ed;eip=0x000e6d; 	R(JZ(loc_34345));	// 120424 jz      short loc_34345 ;~ 24ED:0E6D
cs=0x24ed;eip=0x000e6f; 	T(MOV(cx, ax));	// 120425 mov     cx, ax ;~ 24ED:0E6F
cs=0x24ed;eip=0x000e71; 	T(XOR(ch, ch));	// 120426 xor     ch, ch ;~ 24ED:0E71
cs=0x24ed;eip=0x000e73; 	T(INC(cx));	// 120427 inc     cx ;~ 24ED:0E73
cs=0x24ed;eip=0x000e74; 	T(SUB(bp, cx));	// 120428 sub     bp, cx ;~ 24ED:0E74
loc_34326:
	// 7972 
cs=0x24ed;eip=0x000e76; 	T(MOV(al, *(raddr(ds,si))));	// 120432 mov     al, [si] ;~ 24ED:0E76
cs=0x24ed;eip=0x000e78; 	T(INC(si));	// 120433 inc     si ;~ 24ED:0E78
cs=0x24ed;eip=0x000e79; 	T(OR(al, al));	// 120434 or      al, al ;~ 24ED:0E79
cs=0x24ed;eip=0x000e7b; 	R(JZ(loc_34339));	// 120435 jz      short loc_34339 ;~ 24ED:0E7B
cs=0x24ed;eip=0x000e7d; 	X(STOSB);	// 120436 stosb ;~ 24ED:0E7D
cs=0x24ed;eip=0x000e7e; 	R(LOOP(loc_34326));	// 120437 loop    loc_34326 ;~ 24ED:0E7E
cs=0x24ed;eip=0x000e80; 	T(OR(bp, bp));	// 120438 or      bp, bp ;~ 24ED:0E80
cs=0x24ed;eip=0x000e82; 	R(JA(loc_34318));	// 120439 ja      short loc_34318 ;~ 24ED:0E82
cs=0x24ed;eip=0x000e84; 	T(DEC(bx));	// 120440 dec     bx ;~ 24ED:0E84
cs=0x24ed;eip=0x000e85; 	R(JNZ(loc_34310));	// 120441 jnz     short loc_34310 ;~ 24ED:0E85
cs=0x24ed;eip=0x000e87; 	R(JMP(loc_342d2));	// 120442 jmp     short loc_342D2 ;~ 24ED:0E87
loc_34339:
	// 7973 
cs=0x24ed;eip=0x000e89; 	T(DEC(di));	// 120446 dec     di ;~ 24ED:0E89
cs=0x24ed;eip=0x000e8a; 	R(LOOP(loc_34326));	// 120447 loop    loc_34326 ;~ 24ED:0E8A
cs=0x24ed;eip=0x000e8c; 	T(OR(bp, bp));	// 120448 or      bp, bp ;~ 24ED:0E8C
cs=0x24ed;eip=0x000e8e; 	R(JA(loc_34318));	// 120449 ja      short loc_34318 ;~ 24ED:0E8E
cs=0x24ed;eip=0x000e90; 	T(DEC(bx));	// 120450 dec     bx ;~ 24ED:0E90
cs=0x24ed;eip=0x000e91; 	R(JNZ(loc_34310));	// 120451 jnz     short loc_34310 ;~ 24ED:0E91
cs=0x24ed;eip=0x000e93; 	R(JMP(loc_342d2));	// 120452 jmp     short loc_342D2 ;~ 24ED:0E93
loc_34345:
	// 7974 
cs=0x24ed;eip=0x000e95; 	T(MOV(cx, 0x101));	// 120456 mov     cx, 101h ;~ 24ED:0E95
cs=0x24ed;eip=0x000e98; 	T(XOR(ah, ah));	// 120457 xor     ah, ah ;~ 24ED:0E98
cs=0x24ed;eip=0x000e9a; 	T(SUB(cx, ax));	// 120458 sub     cx, ax ;~ 24ED:0E9A
cs=0x24ed;eip=0x000e9c; 	T(SUB(bp, cx));	// 120459 sub     bp, cx ;~ 24ED:0E9C
cs=0x24ed;eip=0x000e9e; 	T(MOV(al, *(raddr(ds,si))));	// 120460 mov     al, [si] ;~ 24ED:0E9E
cs=0x24ed;eip=0x000ea0; 	T(INC(si));	// 120461 inc     si ;~ 24ED:0EA0
cs=0x24ed;eip=0x000ea1; 	T(OR(al, al));	// 120462 or      al, al ;~ 24ED:0EA1
cs=0x24ed;eip=0x000ea3; 	R(JZ(loc_34361));	// 120463 jz      short loc_34361 ;~ 24ED:0EA3
	// 120464 rep stosb ;~ 24ED:0EA5
cs=0x24ed;eip=0x000ea5; 	X(	REP STOSB);	// 120464 rep stosb ;~ 24ED:0EA5
cs=0x24ed;eip=0x000ea7; 	T(OR(bp, bp));	// 120465 or      bp, bp ;~ 24ED:0EA7
cs=0x24ed;eip=0x000ea9; 	R(JA(loc_34318));	// 120466 ja      short loc_34318 ;~ 24ED:0EA9
cs=0x24ed;eip=0x000eab; 	T(DEC(bx));	// 120467 dec     bx ;~ 24ED:0EAB
cs=0x24ed;eip=0x000eac; 	R(JNZ(loc_34310));	// 120468 jnz     short loc_34310 ;~ 24ED:0EAC
cs=0x24ed;eip=0x000eae; 	R(JMP(loc_342d2));	// 120469 jmp     loc_342D2 ;~ 24ED:0EAE
loc_34361:
	// 7975 
cs=0x24ed;eip=0x000eb1; 	T(SUB(di, cx));	// 120473 sub     di, cx ;~ 24ED:0EB1
cs=0x24ed;eip=0x000eb3; 	T(OR(bp, bp));	// 120474 or      bp, bp ;~ 24ED:0EB3
cs=0x24ed;eip=0x000eb5; 	R(JA(loc_34318));	// 120475 ja      short loc_34318 ;~ 24ED:0EB5
cs=0x24ed;eip=0x000eb7; 	T(DEC(bx));	// 120476 dec     bx ;~ 24ED:0EB7
cs=0x24ed;eip=0x000eb8; 	R(JNZ(loc_34310));	// 120477 jnz     short loc_34310 ;~ 24ED:0EB8
cs=0x24ed;eip=0x000eba; 	R(JMP(loc_342d2));	// 120478 jmp     loc_342D2 ;~ 24ED:0EBA
loc_3436d:
	// 7976 
cs=0x24ed;eip=0x000ebd; 	T(MOV(bp, dx));	// 120483 mov     bp, dx ;~ 24ED:0EBD
cs=0x24ed;eip=0x000ebf; 	T(SUB(di, bp));	// 120484 sub     di, bp ;~ 24ED:0EBF
loc_34375:
	// 7977 
cs=0x24ed;eip=0x000ec5; 	T(LODSB);	// 120494 lodsb ;~ 24ED:0EC5
cs=0x24ed;eip=0x000ec6; 	T(OR(al, al));	// 120495 or      al, al ;~ 24ED:0EC6
cs=0x24ed;eip=0x000ec8; 	R(JS(loc_3438b));	// 120496 js      short loc_3438B ;~ 24ED:0EC8
cs=0x24ed;eip=0x000eca; 	T(MOV(cx, ax));	// 120497 mov     cx, ax ;~ 24ED:0ECA
cs=0x24ed;eip=0x000ecc; 	T(XOR(ch, ch));	// 120498 xor     ch, ch ;~ 24ED:0ECC
cs=0x24ed;eip=0x000ece; 	T(INC(cx));	// 120499 inc     cx ;~ 24ED:0ECE
cs=0x24ed;eip=0x000ecf; 	T(SUB(bp, cx));	// 120500 sub     bp, cx ;~ 24ED:0ECF
	// 120501 rep movsb ;~ 24ED:0ED1
cs=0x24ed;eip=0x000ed1; 	X(	REP MOVSB);	// 120501 rep movsb ;~ 24ED:0ED1
cs=0x24ed;eip=0x000ed3; 	R(JA(loc_34375));	// 120502 ja      short loc_34375 ;~ 24ED:0ED3
cs=0x24ed;eip=0x000ed5; 	T(DEC(bx));	// 120503 dec     bx ;~ 24ED:0ED5
cs=0x24ed;eip=0x000ed6; 	R(JNZ(loc_3436d));	// 120504 jnz     short loc_3436D ;~ 24ED:0ED6
cs=0x24ed;eip=0x000ed8; 	R(JMP(loc_342d2));	// 120505 jmp     loc_342D2 ;~ 24ED:0ED8
loc_3438b:
	// 7978 
cs=0x24ed;eip=0x000edb; 	T(MOV(cx, 0x101));	// 120509 mov     cx, 101h ;~ 24ED:0EDB
cs=0x24ed;eip=0x000ede; 	T(XOR(ah, ah));	// 120510 xor     ah, ah ;~ 24ED:0EDE
cs=0x24ed;eip=0x000ee0; 	T(SUB(cx, ax));	// 120511 sub     cx, ax ;~ 24ED:0EE0
cs=0x24ed;eip=0x000ee2; 	T(SUB(bp, cx));	// 120512 sub     bp, cx ;~ 24ED:0EE2
cs=0x24ed;eip=0x000ee4; 	T(LODSB);	// 120513 lodsb ;~ 24ED:0EE4
	// 120514 rep stosb ;~ 24ED:0EE5
cs=0x24ed;eip=0x000ee5; 	X(	REP STOSB);	// 120514 rep stosb ;~ 24ED:0EE5
cs=0x24ed;eip=0x000ee7; 	R(JA(loc_34375));	// 120515 ja      short loc_34375 ;~ 24ED:0EE7
cs=0x24ed;eip=0x000ee9; 	T(DEC(bx));	// 120516 dec     bx ;~ 24ED:0EE9
cs=0x24ed;eip=0x000eea; 	R(JNZ(loc_3436d));	// 120517 jnz     short loc_3436D ;~ 24ED:0EEA
cs=0x24ed;eip=0x000eec; 	R(JMP(loc_342d2));	// 120518 jmp     loc_342D2 ;~ 24ED:0EEC
loc_3439f:
	// 7979 
cs=0x24ed;eip=0x000eef; 	T(MOV(bp, dx));	// 120523 mov     bp, dx ;~ 24ED:0EEF
cs=0x24ed;eip=0x000ef1; 	T(ADD(di, bp));	// 120524 add     di, bp ;~ 24ED:0EF1
loc_343a7:
	// 7980 
cs=0x24ed;eip=0x000ef7; 	T(MOV(al, *(raddr(ds,si))));	// 120533 mov     al, [si] ;~ 24ED:0EF7
cs=0x24ed;eip=0x000ef9; 	T(INC(si));	// 120534 inc     si ;~ 24ED:0EF9
cs=0x24ed;eip=0x000efa; 	T(OR(al, al));	// 120535 or      al, al ;~ 24ED:0EFA
cs=0x24ed;eip=0x000efc; 	R(JZ(loc_343c5));	// 120536 jz      short loc_343C5 ;~ 24ED:0EFC
cs=0x24ed;eip=0x000efe; 	T(MOV(cx, ax));	// 120537 mov     cx, ax ;~ 24ED:0EFE
cs=0x24ed;eip=0x000f00; 	T(XOR(ch, ch));	// 120538 xor     ch, ch ;~ 24ED:0F00
cs=0x24ed;eip=0x000f02; 	T(INC(cx));	// 120539 inc     cx ;~ 24ED:0F02
cs=0x24ed;eip=0x000f03; 	T(SUB(bp, cx));	// 120540 sub     bp, cx ;~ 24ED:0F03
loc_343b5:
	// 7981 
cs=0x24ed;eip=0x000f05; 	T(MOV(al, *(raddr(ds,si))));	// 120543 mov     al, [si] ;~ 24ED:0F05
cs=0x24ed;eip=0x000f07; 	T(INC(si));	// 120544 inc     si ;~ 24ED:0F07
cs=0x24ed;eip=0x000f08; 	X(STOSB);	// 120545 stosb ;~ 24ED:0F08
cs=0x24ed;eip=0x000f09; 	R(LOOP(loc_343b5));	// 120546 loop    loc_343B5 ;~ 24ED:0F09
cs=0x24ed;eip=0x000f0b; 	T(OR(bp, bp));	// 120547 or      bp, bp ;~ 24ED:0F0B
cs=0x24ed;eip=0x000f0d; 	R(JA(loc_343a7));	// 120548 ja      short loc_343A7 ;~ 24ED:0F0D
cs=0x24ed;eip=0x000f0f; 	T(DEC(bx));	// 120549 dec     bx ;~ 24ED:0F0F
cs=0x24ed;eip=0x000f10; 	R(JNZ(loc_3439f));	// 120550 jnz     short loc_3439F ;~ 24ED:0F10
cs=0x24ed;eip=0x000f12; 	R(JMP(loc_342d2));	// 120551 jmp     loc_342D2 ;~ 24ED:0F12
loc_343c5:
	// 7982 
cs=0x24ed;eip=0x000f15; 	T(MOV(cx, 0x101));	// 120555 mov     cx, 101h ;~ 24ED:0F15
cs=0x24ed;eip=0x000f18; 	T(XOR(ah, ah));	// 120556 xor     ah, ah ;~ 24ED:0F18
cs=0x24ed;eip=0x000f1a; 	T(SUB(cx, ax));	// 120557 sub     cx, ax ;~ 24ED:0F1A
cs=0x24ed;eip=0x000f1c; 	T(SUB(bp, cx));	// 120558 sub     bp, cx ;~ 24ED:0F1C
cs=0x24ed;eip=0x000f1e; 	T(MOV(al, *(raddr(ds,si))));	// 120559 mov     al, [si] ;~ 24ED:0F1E
cs=0x24ed;eip=0x000f20; 	T(INC(si));	// 120560 inc     si ;~ 24ED:0F20
	// 120561 rep stosb ;~ 24ED:0F21
cs=0x24ed;eip=0x000f21; 	X(	REP STOSB);	// 120561 rep stosb ;~ 24ED:0F21
cs=0x24ed;eip=0x000f23; 	T(OR(bp, bp));	// 120562 or      bp, bp ;~ 24ED:0F23
cs=0x24ed;eip=0x000f25; 	R(JA(loc_343a7));	// 120563 ja      short loc_343A7 ;~ 24ED:0F25
cs=0x24ed;eip=0x000f27; 	T(DEC(bx));	// 120564 dec     bx ;~ 24ED:0F27
cs=0x24ed;eip=0x000f28; 	R(JNZ(loc_3439f));	// 120565 jnz     short loc_3439F ;~ 24ED:0F28
cs=0x24ed;eip=0x000f2a; 	R(JMP(loc_342d2));	// 120566 jmp     loc_342D2 ;~ 24ED:0F2A
loc_343dd:
	// 7983 
cs=0x24ed;eip=0x000f2d; 	T(CMP(ch, 0x0FE));	// 120570 cmp     ch, 0FEh ; 'þ' ;~ 24ED:0F2D
cs=0x24ed;eip=0x000f30; 	R(JC(loc_343e5));	// 120571 jb      short loc_343E5 ;~ 24ED:0F30
cs=0x24ed;eip=0x000f32; 	R(JMP(loc_3448a));	// 120572 jmp     loc_3448A ;~ 24ED:0F32
loc_343e5:
	// 7984 
cs=0x24ed;eip=0x000f35; 	T(OR(di, di));	// 120576 or      di, di ;~ 24ED:0F35
cs=0x24ed;eip=0x000f37; 	R(JS(loc_3440f));	// 120577 js      short loc_3440F ;~ 24ED:0F37
cs=0x24ed;eip=0x000f39; 	T(MOV(ax, di));	// 120578 mov     ax, di ;~ 24ED:0F39
cs=0x24ed;eip=0x000f3b; 	T(MOV(bp, 0x100));	// 120579 mov     bp, 100h ;~ 24ED:0F3B
cs=0x24ed;eip=0x000f3e; 	T(TEST(ax, 0x6000));	// 120580 test    ax, 6000h ;~ 24ED:0F3E
cs=0x24ed;eip=0x000f41; 	R(JZ(loc_343f6));	// 120581 jz      short loc_343F6 ;~ 24ED:0F41
cs=0x24ed;eip=0x000f43; 	R(JMP(loc_3420d));	// 120582 jmp     loc_3420D ;~ 24ED:0F43
loc_343f6:
	// 7985 
cs=0x24ed;eip=0x000f46; 	T(AND(ax, 0x1FF));	// 120586 and     ax, 1FFh ;~ 24ED:0F46
cs=0x24ed;eip=0x000f49; 	T(ADD(ax, 3));	// 120587 add     ax, 3 ;~ 24ED:0F49
cs=0x24ed;eip=0x000f4c; 	T(SHR(ax, 2));	// 120588 shr     ax, 2 ;~ 24ED:0F4C
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000f4f; 	X(MOV(*(dw*)(((db*)&word_349fc)), ax));	// 120589 mov     cs:word_349FC, ax ;~ 24ED:0F4F
cs=0x24ed;eip=0x000f53; 	R(CALL(sub_340a8,0));	// 120590 call    sub_340A8 ;~ 24ED:0F53
cs=0x24ed;eip=0x000f56; 	T(MOV(dh, ch));	// 120591 mov     dh, ch ;~ 24ED:0F56
cs=0x24ed;eip=0x000f58; 	T(XOR(ch, ch));	// 120592 xor     ch, ch ;~ 24ED:0F58
cs=0x24ed;eip=0x000f5a; 	T(MOV(dl, 0x0F));	// 120593 mov     dl, 0Fh ;~ 24ED:0F5A
cs=0x24ed;eip=0x000f5c; __disp=byte_349fb;
	R(JMP(__dispatch_call));	// 120594 jmp     near ptr byte_349FB ;~ 24ED:0F5C
loc_3440f:
	// 7986 
cs=0x24ed;eip=0x000f5f; 	T(MOV(ax, di));	// 120598 mov     ax, di ;~ 24ED:0F5F
cs=0x24ed;eip=0x000f61; 	T(AND(ax, 0x1FF));	// 120599 and     ax, 1FFh ;~ 24ED:0F61
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000f64; 	X(MOV(*(dw*)(((db*)&word_34209)), ax));	// 120600 mov     cs:word_34209, ax ;~ 24ED:0F64
cs=0x24ed;eip=0x000f68; 	T(ADD(ax, 3));	// 120601 add     ax, 3 ;~ 24ED:0F68
cs=0x24ed;eip=0x000f6b; 	T(SHR(ax, 2));	// 120602 shr     ax, 2 ;~ 24ED:0F6B
cs=0x24ed;eip=0x000f6e; 	T(SHL(ax, 1));	// 120603 shl     ax, 1 ;~ 24ED:0F6E
cs=0x24ed;eip=0x000f70; 	T(MOV(bp, ax));	// 120604 mov     bp, ax ;~ 24ED:0F70
cs=0x24ed;eip=0x000f72; 	T(MOV(ax, di));	// 120605 mov     ax, di ;~ 24ED:0F72
cs=0x24ed;eip=0x000f74; 	R(CALL(sub_340a8,0));	// 120606 call    sub_340A8 ;~ 24ED:0F74
cs=0x24ed;eip=0x000f77; 	T(MOV(dh, ch));	// 120607 mov     dh, ch ;~ 24ED:0F77
cs=0x24ed;eip=0x000f79; 	T(XOR(ch, ch));	// 120608 xor     ch, ch ;~ 24ED:0F79
cs=0x24ed;eip=0x000f7b; 	T(MOV(dl, 0x0F));	// 120609 mov     dl, 0Fh ;~ 24ED:0F7B
cs=0x24ed;eip=0x000f7d; 	T(MOV(bx, cx));	// 120610 mov     bx, cx ;~ 24ED:0F7D
cs=0x24ed;eip=0x000f7f; 	T(TEST(ax, 0x4000));	// 120611 test    ax, 4000h ;~ 24ED:0F7F
cs=0x24ed;eip=0x000f82; 	R(JNZ(loc_34459));	// 120612 jnz     short loc_34459 ;~ 24ED:0F82
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000f84; 	X(MOV(*(dw*)(((db*)&word_340d3)), bp));	// 120613 mov     cs:word_340D3, bp ;~ 24ED:0F84
cs=0x24ed;eip=0x000f89; 	T(TEST(ax, 0x2000));	// 120614 test    ax, 2000h ;~ 24ED:0F89
cs=0x24ed;eip=0x000f8c; 	R(JZ(loc_34456));	// 120615 jz      short loc_34456 ;~ 24ED:0F8C
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000f8e; 	X(MOV(*(&byte_340da), 0x0EF));	// 120616 mov     cs:byte_340DA, 0EFh ; 'ï' ;~ 24ED:0F8E
cs=0x24ed;eip=0x000f94; 	T(MOV(ah, bl));	// 120617 mov     ah, bl ;~ 24ED:0F94
cs=0x24ed;eip=0x000f96; 	T(DEC(ah));	// 120618 dec     ah ;~ 24ED:0F96
cs=0x24ed;eip=0x000f98; 	T(MOV(ch, ah));	// 120619 mov     ch, ah ;~ 24ED:0F98
cs=0x24ed;eip=0x000f9a; 	T(XOR(cl, cl));	// 120620 xor     cl, cl ;~ 24ED:0F9A
cs=0x24ed;eip=0x000f9c; 	T(MOV(al, cl));	// 120621 mov     al, cl ;~ 24ED:0F9C
cs=0x24ed;eip=0x000f9e; 	T(SHR(cx, 1));	// 120622 shr     cx, 1 ;~ 24ED:0F9E
cs=0x24ed;eip=0x000fa0; 	T(SHR(cx, 1));	// 120623 shr     cx, 1 ;~ 24ED:0FA0
cs=0x24ed;eip=0x000fa2; 	T(ADD(di, ax));	// 120624 add     di, ax ;~ 24ED:0FA2
cs=0x24ed;eip=0x000fa4; 	T(ADD(di, cx));	// 120625 add     di, cx ;~ 24ED:0FA4
loc_34456:
	// 7987 
cs=0x24ed;eip=0x000fa6; 	R(JMP(loc_340dd));	// 120628 jmp     loc_340DD ;~ 24ED:0FA6
loc_34459:
	// 7988 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000fa9; 	X(MOV(*(dw*)(((db*)&word_3415e)), bp));	// 120632 mov     cs:word_3415E, bp ;~ 24ED:0FA9
cs=0x24ed;eip=0x000fae; 	T(TEST(ax, 0x2000));	// 120633 test    ax, 2000h ;~ 24ED:0FAE
cs=0x24ed;eip=0x000fb1; 	R(JZ(loc_3447b));	// 120634 jz      short loc_3447B ;~ 24ED:0FB1
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000fb3; 	X(MOV(*(&byte_34165), 0x0EF));	// 120635 mov     cs:byte_34165, 0EFh ; 'ï' ;~ 24ED:0FB3
cs=0x24ed;eip=0x000fb9; 	T(MOV(ah, bl));	// 120636 mov     ah, bl ;~ 24ED:0FB9
cs=0x24ed;eip=0x000fbb; 	T(DEC(ah));	// 120637 dec     ah ;~ 24ED:0FBB
cs=0x24ed;eip=0x000fbd; 	T(MOV(ch, ah));	// 120638 mov     ch, ah ;~ 24ED:0FBD
cs=0x24ed;eip=0x000fbf; 	T(XOR(cl, cl));	// 120639 xor     cl, cl ;~ 24ED:0FBF
cs=0x24ed;eip=0x000fc1; 	T(MOV(al, cl));	// 120640 mov     al, cl ;~ 24ED:0FC1
cs=0x24ed;eip=0x000fc3; 	T(SHR(cx, 1));	// 120641 shr     cx, 1 ;~ 24ED:0FC3
cs=0x24ed;eip=0x000fc5; 	T(SHR(cx, 1));	// 120642 shr     cx, 1 ;~ 24ED:0FC5
cs=0x24ed;eip=0x000fc7; 	T(ADD(di, ax));	// 120643 add     di, ax ;~ 24ED:0FC7
cs=0x24ed;eip=0x000fc9; 	T(ADD(di, cx));	// 120644 add     di, cx ;~ 24ED:0FC9
loc_3447b:
	// 7989 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x000fcb; 	T(ADD(di, *(dw*)(((db*)&word_34209))));	// 120647 add     di, cs:word_34209 ;~ 24ED:0FCB
cs=0x24ed;eip=0x000fd0; 	T(DEC(di));	// 120648 dec     di ;~ 24ED:0FD0
cs=0x24ed;eip=0x000fd1; 	T(STD);	// 120649 std ;~ 24ED:0FD1
cs=0x24ed;eip=0x000fd2; 	R(JMP(loc_34168));	// 120650 jmp     loc_34168 ;~ 24ED:0FD2
ret_24ed_fd5:
	// 7990 
cs=0x24ed;eip=0x000fd5; 	T(CMP(ch, 0x0FE));	// 120652 cmp     ch, 0FEh ; 'þ' ;~ 24ED:0FD5
//cs=0x24ed;eip=0x000fd8; __disp=[Token('ptrdir', 'short'), ['$', Token('INTEGER', '+2')]];
//	R(JNC(__dispatch_call));	// 120653 jnb     short $+2 ;~ 24ED:0FD8
loc_3448a:
	// 7991 
cs=0x24ed;eip=0x000fda; 	T(OR(di, di));	// 120657 or      di, di ;~ 24ED:0FDA
cs=0x24ed;eip=0x000fdc; 	R(JS(loc_344f8));	// 120658 js      short loc_344F8 ;~ 24ED:0FDC
cs=0x24ed;eip=0x000fde; 	T(MOV(bp, di));	// 120659 mov     bp, di ;~ 24ED:0FDE
cs=0x24ed;eip=0x000fe0; 	T(AND(bp, 0x1FF));	// 120660 and     bp, 1FFh ;~ 24ED:0FE0
cs=0x24ed;eip=0x000fe4; 	T(MOV(ax, di));	// 120661 mov     ax, di ;~ 24ED:0FE4
cs=0x24ed;eip=0x000fe6; 	R(CALL(sub_340a8,0));	// 120662 call    sub_340A8 ;~ 24ED:0FE6
cs=0x24ed;eip=0x000fe9; 	T(MOV(bx, cx));	// 120663 mov     bx, cx ;~ 24ED:0FE9
cs=0x24ed;eip=0x000feb; 	T(XOR(bh, bh));	// 120664 xor     bh, bh ;~ 24ED:0FEB
cs=0x24ed;eip=0x000fed; 	T(CMP(ch, 0x0FF));	// 120665 cmp     ch, 0FFh ;~ 24ED:0FED
cs=0x24ed;eip=0x000ff0; 	R(JZ(loc_344d7));	// 120666 jz      short loc_344D7 ;~ 24ED:0FF0
cs=0x24ed;eip=0x000ff2; 	T(SHR(bp, 1));	// 120667 shr     bp, 1 ;~ 24ED:0FF2
cs=0x24ed;eip=0x000ff4; 	T(MOV(ax, di));	// 120668 mov     ax, di ;~ 24ED:0FF4
cs=0x24ed;eip=0x000ff6; 	R(JC(loc_344bb));	// 120669 jb      short loc_344BB ;~ 24ED:0FF6
cs=0x24ed;eip=0x000ff8; 	T(SHR(bp, 1));	// 120670 shr     bp, 1 ;~ 24ED:0FF8
cs=0x24ed;eip=0x000ffa; 	R(JNC(loc_344c9));	// 120671 jnb     short loc_344C9 ;~ 24ED:0FFA
cs=0x24ed;eip=0x000ffc; 	T(RCL(bp, 1));	// 120672 rcl     bp, 1 ;~ 24ED:0FFC
loc_344ae:
	// 7992 
cs=0x24ed;eip=0x000ffe; 	T(MOV(cx, bp));	// 120675 mov     cx, bp ;~ 24ED:0FFE
cs=0x24ed;eip=0x001000; 	T(MOV(di, ax));	// 120676 mov     di, ax ;~ 24ED:1000
	// 120677 rep movsw ;~ 24ED:1002
cs=0x24ed;eip=0x001002; 	X(	REP MOVSW);	// 120677 rep movsw ;~ 24ED:1002
cs=0x24ed;eip=0x001004; 	T(ADD(ax, 0x140));	// 120678 add     ax, 140h ;~ 24ED:1004
cs=0x24ed;eip=0x001007; 	T(DEC(bx));	// 120679 dec     bx ;~ 24ED:1007
cs=0x24ed;eip=0x001008; 	R(JNZ(loc_344ae));	// 120680 jnz     short loc_344AE ;~ 24ED:1008
cs=0x24ed;eip=0x00100a; 	R(RETF(0));	// 120681 retf ;~ 24ED:100A
loc_344bb:
	// 7993 
cs=0x24ed;eip=0x00100b; 	T(MOV(cx, bp));	// 120686 mov     cx, bp ;~ 24ED:100B
cs=0x24ed;eip=0x00100d; 	T(MOV(di, ax));	// 120687 mov     di, ax ;~ 24ED:100D
	// 120688 rep movsw ;~ 24ED:100F
cs=0x24ed;eip=0x00100f; 	X(	REP MOVSW);	// 120688 rep movsw ;~ 24ED:100F
cs=0x24ed;eip=0x001011; 	X(MOVSB);	// 120689 movsb ;~ 24ED:1011
cs=0x24ed;eip=0x001012; 	T(ADD(ax, 0x140));	// 120690 add     ax, 140h ;~ 24ED:1012
cs=0x24ed;eip=0x001015; 	T(DEC(bx));	// 120691 dec     bx ;~ 24ED:1015
cs=0x24ed;eip=0x001016; 	R(JNZ(loc_344bb));	// 120692 jnz     short loc_344BB ;~ 24ED:1016
cs=0x24ed;eip=0x001018; 	R(RETF(0));	// 120693 retf ;~ 24ED:1018
loc_344c9:
	// 7994 
cs=0x24ed;eip=0x001019; 	T(MOV(cx, bp));	// 120698 mov     cx, bp ;~ 24ED:1019
cs=0x24ed;eip=0x00101b; 	T(MOV(di, ax));	// 120699 mov     di, ax ;~ 24ED:101B
	// 120700 rep movsd ;~ 24ED:101D
cs=0x24ed;eip=0x00101d; 	X(	REP MOVSD);	// 120700 rep movsd ;~ 24ED:101D
cs=0x24ed;eip=0x001020; 	T(ADD(ax, 0x140));	// 120701 add     ax, 140h ;~ 24ED:1020
cs=0x24ed;eip=0x001023; 	T(DEC(bx));	// 120702 dec     bx ;~ 24ED:1023
cs=0x24ed;eip=0x001024; 	R(JNZ(loc_344c9));	// 120703 jnz     short loc_344C9 ;~ 24ED:1024
cs=0x24ed;eip=0x001026; 	R(RETF(0));	// 120704 retf ;~ 24ED:1026
loc_344d7:
	// 7995 
cs=0x24ed;eip=0x001027; 	T(MOV(dx, di));	// 120708 mov     dx, di ;~ 24ED:1027
loc_344d9:
	// 7996 
cs=0x24ed;eip=0x001029; 	T(MOV(cx, bp));	// 120712 mov     cx, bp ;~ 24ED:1029
cs=0x24ed;eip=0x00102b; 	T(MOV(di, dx));	// 120713 mov     di, dx ;~ 24ED:102B
loc_344dd:
	// 7997 
cs=0x24ed;eip=0x00102d; 	T(LODSB);	// 120717 lodsb ;~ 24ED:102D
cs=0x24ed;eip=0x00102e; 	T(OR(al, al));	// 120718 or      al, al ;~ 24ED:102E
cs=0x24ed;eip=0x001030; 	R(JZ(loc_344ed));	// 120719 jz      short loc_344ED ;~ 24ED:1030
cs=0x24ed;eip=0x001032; 	X(STOSB);	// 120720 stosb ;~ 24ED:1032
cs=0x24ed;eip=0x001033; 	R(LOOP(loc_344dd));	// 120721 loop    loc_344DD ;~ 24ED:1033
cs=0x24ed;eip=0x001035; 	T(ADD(dx, 0x140));	// 120722 add     dx, 140h ;~ 24ED:1035
cs=0x24ed;eip=0x001039; 	T(DEC(bx));	// 120723 dec     bx ;~ 24ED:1039
cs=0x24ed;eip=0x00103a; 	R(JNZ(loc_344d9));	// 120724 jnz     short loc_344D9 ;~ 24ED:103A
cs=0x24ed;eip=0x00103c; 	R(RETF(0));	// 120725 retf ;~ 24ED:103C
loc_344ed:
	// 7998 
cs=0x24ed;eip=0x00103d; 	T(INC(di));	// 120729 inc     di ;~ 24ED:103D
cs=0x24ed;eip=0x00103e; 	R(LOOP(loc_344dd));	// 120730 loop    loc_344DD ;~ 24ED:103E
cs=0x24ed;eip=0x001040; 	T(ADD(dx, 0x140));	// 120731 add     dx, 140h ;~ 24ED:1040
cs=0x24ed;eip=0x001044; 	T(DEC(bx));	// 120732 dec     bx ;~ 24ED:1044
cs=0x24ed;eip=0x001045; 	R(JNZ(loc_344d9));	// 120733 jnz     short loc_344D9 ;~ 24ED:1045
cs=0x24ed;eip=0x001047; 	R(RETF(0));	// 120734 retf ;~ 24ED:1047
loc_344f8:
	// 7999 
cs=0x24ed;eip=0x001048; 	T(MOV(bp, di));	// 120738 mov     bp, di ;~ 24ED:1048
cs=0x24ed;eip=0x00104a; 	T(AND(bp, 0x1FF));	// 120739 and     bp, 1FFh ;~ 24ED:104A
cs=0x24ed;eip=0x00104e; 	T(MOV(ax, di));	// 120740 mov     ax, di ;~ 24ED:104E
cs=0x24ed;eip=0x001050; 	R(CALL(sub_340a8,0));	// 120741 call    sub_340A8 ;~ 24ED:1050
cs=0x24ed;eip=0x001053; 	T(MOV(bx, cx));	// 120742 mov     bx, cx ;~ 24ED:1053
cs=0x24ed;eip=0x001055; 	T(XOR(bh, bh));	// 120743 xor     bh, bh ;~ 24ED:1055
cs=0x24ed;eip=0x001057; 	T(TEST(ax, 0x4000));	// 120744 test    ax, 4000h ;~ 24ED:1057
cs=0x24ed;eip=0x00105a; 	R(JNZ(loc_3453c));	// 120745 jnz     short loc_3453C ;~ 24ED:105A
cs=0x24ed;eip=0x00105c; 	T(TEST(ax, 0x2000));	// 120746 test    ax, 2000h ;~ 24ED:105C
cs=0x24ed;eip=0x00105f; 	R(JZ(loc_3452f));	// 120747 jz      short loc_3452F ;~ 24ED:105F
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001061; 	X(MOV(*(&byte_342b4), 0x0EF));	// 120748 mov     cs:byte_342B4, 0EFh ; 'ï' ;~ 24ED:1061
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001067; 	X(MOV(*(&byte_34372), 0x0EF));	// 120749 mov     cs:byte_34372, 0EFh ; 'ï' ;~ 24ED:1067
cs=0x24ed;eip=0x00106d; 	T(MOV(ah, bl));	// 120750 mov     ah, bl ;~ 24ED:106D
cs=0x24ed;eip=0x00106f; 	T(DEC(ah));	// 120751 dec     ah ;~ 24ED:106F
cs=0x24ed;eip=0x001071; 	T(MOV(dh, ah));	// 120752 mov     dh, ah ;~ 24ED:1071
cs=0x24ed;eip=0x001073; 	T(XOR(dl, dl));	// 120753 xor     dl, dl ;~ 24ED:1073
cs=0x24ed;eip=0x001075; 	T(MOV(al, dl));	// 120754 mov     al, dl ;~ 24ED:1075
cs=0x24ed;eip=0x001077; 	T(SHR(dx, 1));	// 120755 shr     dx, 1 ;~ 24ED:1077
cs=0x24ed;eip=0x001079; 	T(SHR(dx, 1));	// 120756 shr     dx, 1 ;~ 24ED:1079
cs=0x24ed;eip=0x00107b; 	T(ADD(di, ax));	// 120757 add     di, ax ;~ 24ED:107B
cs=0x24ed;eip=0x00107d; 	T(ADD(di, dx));	// 120758 add     di, dx ;~ 24ED:107D
loc_3452f:
	// 8000 
cs=0x24ed;eip=0x00107f; 	T(MOV(dx, bp));	// 120761 mov     dx, bp ;~ 24ED:107F
cs=0x24ed;eip=0x001081; 	T(CMP(ch, 0x0FF));	// 120762 cmp     ch, 0FFh ;~ 24ED:1081
cs=0x24ed;eip=0x001084; 	R(JZ(loc_34539));	// 120763 jz      short loc_34539 ;~ 24ED:1084
cs=0x24ed;eip=0x001086; 	R(JMP(loc_34375));	// 120764 jmp     loc_34375 ;~ 24ED:1086
loc_34539:
	// 8001 
cs=0x24ed;eip=0x001089; 	R(JMP(loc_342b7));	// 120768 jmp     loc_342B7 ;~ 24ED:1089
loc_3453c:
	// 8002 
cs=0x24ed;eip=0x00108c; 	T(TEST(ax, 0x2000));	// 120772 test    ax, 2000h ;~ 24ED:108C
cs=0x24ed;eip=0x00108f; 	R(JZ(loc_3455f));	// 120773 jz      short loc_3455F ;~ 24ED:108F
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001091; 	X(MOV(*(&byte_34315), 0x0EF));	// 120774 mov     cs:byte_34315, 0EFh ; 'ï' ;~ 24ED:1091
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001097; 	X(MOV(*(&byte_343a4), 0x0EF));	// 120775 mov     cs:byte_343A4, 0EFh ; 'ï' ;~ 24ED:1097
cs=0x24ed;eip=0x00109d; 	T(MOV(ah, bl));	// 120776 mov     ah, bl ;~ 24ED:109D
cs=0x24ed;eip=0x00109f; 	T(DEC(ah));	// 120777 dec     ah ;~ 24ED:109F
cs=0x24ed;eip=0x0010a1; 	T(MOV(dh, ah));	// 120778 mov     dh, ah ;~ 24ED:10A1
cs=0x24ed;eip=0x0010a3; 	T(XOR(dl, dl));	// 120779 xor     dl, dl ;~ 24ED:10A3
cs=0x24ed;eip=0x0010a5; 	T(MOV(al, dl));	// 120780 mov     al, dl ;~ 24ED:10A5
cs=0x24ed;eip=0x0010a7; 	T(SHR(dx, 1));	// 120781 shr     dx, 1 ;~ 24ED:10A7
cs=0x24ed;eip=0x0010a9; 	T(SHR(dx, 1));	// 120782 shr     dx, 1 ;~ 24ED:10A9
cs=0x24ed;eip=0x0010ab; 	T(ADD(di, ax));	// 120783 add     di, ax ;~ 24ED:10AB
cs=0x24ed;eip=0x0010ad; 	T(ADD(di, dx));	// 120784 add     di, dx ;~ 24ED:10AD
loc_3455f:
	// 8003 
cs=0x24ed;eip=0x0010af; 	T(ADD(di, bp));	// 120787 add     di, bp ;~ 24ED:10AF
cs=0x24ed;eip=0x0010b1; 	T(DEC(di));	// 120788 dec     di ;~ 24ED:10B1
cs=0x24ed;eip=0x0010b2; 	T(STD);	// 120789 std ;~ 24ED:10B2
cs=0x24ed;eip=0x0010b3; 	T(MOV(dx, bp));	// 120790 mov     dx, bp ;~ 24ED:10B3
cs=0x24ed;eip=0x0010b5; 	T(CMP(ch, 0x0FF));	// 120791 cmp     ch, 0FFh ;~ 24ED:10B5
cs=0x24ed;eip=0x0010b8; 	R(JZ(loc_3456d));	// 120792 jz      short loc_3456D ;~ 24ED:10B8
cs=0x24ed;eip=0x0010ba; 	R(JMP(loc_343a7));	// 120793 jmp     loc_343A7 ;~ 24ED:10BA
loc_3456d:
	// 8004 
cs=0x24ed;eip=0x0010bd; 	R(JMP(loc_34318));	// 120797 jmp     loc_34318 ;~ 24ED:10BD
loc_34576:
	// 8005 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0010c6; 	T(MOV(bp, *(dw*)(((db*)&word_34572))));	// 120809 mov     bp, cs:word_34572 ;~ 24ED:10C6
cs=0x24ed;eip=0x0010cb; 	T(SHR(bp, 1));	// 120810 shr     bp, 1 ;~ 24ED:10CB
cs=0x24ed;eip=0x0010cd; 	X(PUSHF);	// 120811 pushf ;~ 24ED:10CD
cs=0x24ed;eip=0x0010ce; 	R(JCXZ(loc_34588));	// 120812 jcxz    short loc_34588 ;~ 24ED:10CE
cs=0x24ed;eip=0x0010d0; 	T(OR(dl, dl));	// 120813 or      dl, dl ;~ 24ED:10D0
cs=0x24ed;eip=0x0010d2; 	R(JS(loc_345b1));	// 120814 js      short loc_345B1 ;~ 24ED:10D2
cs=0x24ed;eip=0x0010d4; 	R(JMP(loc_34594));	// 120815 jmp     short loc_34594 ;~ 24ED:10D4
loc_34586:
	// 8006 
cs=0x24ed;eip=0x0010d6; 	T(ADD(si, cx));	// 120819 add     si, cx ;~ 24ED:10D6
loc_34588:
	// 8007 
cs=0x24ed;eip=0x0010d8; 	T(LODSB);	// 120823 lodsb ;~ 24ED:10D8
cs=0x24ed;eip=0x0010d9; 	T(XOR(ah, ah));	// 120824 xor     ah, ah ;~ 24ED:10D9
cs=0x24ed;eip=0x0010db; 	T(MOV(dl, al));	// 120825 mov     dl, al ;~ 24ED:10DB
cs=0x24ed;eip=0x0010dd; 	T(OR(al, al));	// 120826 or      al, al ;~ 24ED:10DD
cs=0x24ed;eip=0x0010df; 	R(JS(loc_345ab));	// 120827 js      short loc_345AB ;~ 24ED:10DF
cs=0x24ed;eip=0x0010e1; 	T(MOV(cx, ax));	// 120828 mov     cx, ax ;~ 24ED:10E1
cs=0x24ed;eip=0x0010e3; 	T(INC(cx));	// 120829 inc     cx ;~ 24ED:10E3
loc_34594:
	// 8008 
cs=0x24ed;eip=0x0010e4; 	T(SUB(bp, cx));	// 120832 sub     bp, cx ;~ 24ED:10E4
cs=0x24ed;eip=0x0010e6; 	R(JNC(loc_34586));	// 120833 jnb     short loc_34586 ;~ 24ED:10E6
cs=0x24ed;eip=0x0010e8; 	T(ADD(cx, bp));	// 120834 add     cx, bp ;~ 24ED:10E8
cs=0x24ed;eip=0x0010ea; 	T(ADD(si, cx));	// 120835 add     si, cx ;~ 24ED:10EA
cs=0x24ed;eip=0x0010ec; 	T(MOV(cx, bp));	// 120836 mov     cx, bp ;~ 24ED:10EC
cs=0x24ed;eip=0x0010ee; 	T(NEG(cx));	// 120837 neg     cx ;~ 24ED:10EE
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0010f0; 	T(MOV(bp, *(dw*)(((db*)&word_34574))));	// 120838 mov     bp, cs:word_34574 ;~ 24ED:10F0
cs=0x24ed;eip=0x0010f5; 	X(POPF);	// 120839 popf ;~ 24ED:10F5
cs=0x24ed;eip=0x0010f6; 	R(JNC(loc_345d5));	// 120840 jnb     short loc_345D5 ;~ 24ED:10F6
cs=0x24ed;eip=0x0010f8; 	T(LODSB);	// 120841 lodsb ;~ 24ED:10F8
cs=0x24ed;eip=0x0010f9; 	R(JMP(loc_345c6));	// 120842 jmp     short loc_345C6 ;~ 24ED:10F9
loc_345ab:
	// 8009 
cs=0x24ed;eip=0x0010fb; 	T(MOV(cx, 0x101));	// 120846 mov     cx, 101h ;~ 24ED:10FB
cs=0x24ed;eip=0x0010fe; 	T(SUB(cx, ax));	// 120847 sub     cx, ax ;~ 24ED:10FE
cs=0x24ed;eip=0x001100; 	T(INC(si));	// 120848 inc     si ;~ 24ED:1100
loc_345b1:
	// 8010 
cs=0x24ed;eip=0x001101; 	T(SUB(bp, cx));	// 120851 sub     bp, cx ;~ 24ED:1101
cs=0x24ed;eip=0x001103; 	R(JNC(loc_34588));	// 120852 jnb     short loc_34588 ;~ 24ED:1103
cs=0x24ed;eip=0x001105; 	T(XOR(ah, ah));	// 120853 xor     ah, ah ;~ 24ED:1105
cs=0x24ed;eip=0x001107; 	T(MOV(cx, bp));	// 120854 mov     cx, bp ;~ 24ED:1107
cs=0x24ed;eip=0x001109; 	T(NEG(cx));	// 120855 neg     cx ;~ 24ED:1109
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00110b; 	T(MOV(bp, *(dw*)(((db*)&word_34574))));	// 120856 mov     bp, cs:word_34574 ;~ 24ED:110B
cs=0x24ed;eip=0x001110; 	X(POPF);	// 120857 popf ;~ 24ED:1110
cs=0x24ed;eip=0x001111; 	R(JNC(loc_345d5));	// 120858 jnb     short loc_345D5 ;~ 24ED:1111
cs=0x24ed;eip=0x001113; 	T(MOV(al, *(raddr(ds,si-1))));	// 120859 mov     al, [si-1] ;~ 24ED:1113
loc_345c6:
	// 8011 
cs=0x24ed;eip=0x001116; 	T(SHR(al, 4));	// 120862 shr     al, 4 ;~ 24ED:1116
cs=0x24ed;eip=0x001119; 	R(JZ(loc_345d0));	// 120863 jz      short loc_345D0 ;~ 24ED:1119
cs=0x24ed;eip=0x00111b; 	T(ADD(al, dh));	// 120864 add     al, dh ;~ 24ED:111B
cs=0x24ed;eip=0x00111d; 	X(MOV(*(raddr(es,di)), al));	// 120865 mov     es:[di], al ;~ 24ED:111D
loc_345d0:
	// 8012 
cs=0x24ed;eip=0x001120; 	T(INC(di));	// 120868 inc     di ;~ 24ED:1120
cs=0x24ed;eip=0x001121; 	T(DEC(cx));	// 120869 dec     cx ;~ 24ED:1121
cs=0x24ed;eip=0x001122; 	T(DEC(bp));	// 120870 dec     bp ;~ 24ED:1122
cs=0x24ed;eip=0x001123; 	R(JZ(loc_34610));	// 120871 jz      short loc_34610 ;~ 24ED:1123
loc_345d5:
	// 8013 
cs=0x24ed;eip=0x001125; 	T(SHR(bp, 1));	// 120875 shr     bp, 1 ;~ 24ED:1125
cs=0x24ed;eip=0x001127; 	R(JCXZ(loc_345e0));	// 120876 jcxz    short loc_345E0 ;~ 24ED:1127
cs=0x24ed;eip=0x001129; 	T(OR(dl, dl));	// 120877 or      dl, dl ;~ 24ED:1129
cs=0x24ed;eip=0x00112b; 	R(JNS(loc_345ec));	// 120878 jns     short loc_345EC ;~ 24ED:112B
cs=0x24ed;eip=0x00112d; 	R(JMP(loc_34633));	// 120879 jmp     short loc_34633 ;~ 24ED:112D
loc_345e0:
	// 8014 
cs=0x24ed;eip=0x001130; 	T(LODSB);	// 120885 lodsb ;~ 24ED:1130
cs=0x24ed;eip=0x001131; 	T(XOR(ah, ah));	// 120886 xor     ah, ah ;~ 24ED:1131
cs=0x24ed;eip=0x001133; 	T(MOV(dl, al));	// 120887 mov     dl, al ;~ 24ED:1133
cs=0x24ed;eip=0x001135; 	T(OR(al, al));	// 120888 or      al, al ;~ 24ED:1135
cs=0x24ed;eip=0x001137; 	R(JS(loc_3462d));	// 120889 js      short loc_3462D ;~ 24ED:1137
cs=0x24ed;eip=0x001139; 	T(MOV(cx, ax));	// 120890 mov     cx, ax ;~ 24ED:1139
cs=0x24ed;eip=0x00113b; 	T(INC(cx));	// 120891 inc     cx ;~ 24ED:113B
loc_345ec:
	// 8015 
cs=0x24ed;eip=0x00113c; 	T(SUB(bp, cx));	// 120894 sub     bp, cx ;~ 24ED:113C
cs=0x24ed;eip=0x00113e; 	R(JNC(loc_345f4));	// 120895 jnb     short loc_345F4 ;~ 24ED:113E
cs=0x24ed;eip=0x001140; 	T(ADD(cx, bp));	// 120896 add     cx, bp ;~ 24ED:1140
cs=0x24ed;eip=0x001142; 	R(JZ(loc_3460c));	// 120897 jz      short loc_3460C ;~ 24ED:1142
loc_345f4:
	// 8016 
cs=0x24ed;eip=0x001144; 	T(LODSB);	// 120901 lodsb ;~ 24ED:1144
cs=0x24ed;eip=0x001145; 	T(MOV(ah, al));	// 120902 mov     ah, al ;~ 24ED:1145
cs=0x24ed;eip=0x001147; 	T(AND(al, 0x0F));	// 120903 and     al, 0Fh ;~ 24ED:1147
cs=0x24ed;eip=0x001149; 	R(JZ(loc_34623));	// 120904 jz      short loc_34623 ;~ 24ED:1149
cs=0x24ed;eip=0x00114b; 	T(ADD(al, dh));	// 120905 add     al, dh ;~ 24ED:114B
cs=0x24ed;eip=0x00114d; 	X(STOSB);	// 120906 stosb ;~ 24ED:114D
cs=0x24ed;eip=0x00114e; 	T(SHR(ah, 1));	// 120907 shr     ah, 1 ;~ 24ED:114E
loc_34600:
	// 8017 
cs=0x24ed;eip=0x001150; 	T(SHR(ah, 3));	// 120910 shr     ah, 3 ;~ 24ED:1150
cs=0x24ed;eip=0x001153; 	R(JZ(loc_34628));	// 120911 jz      short loc_34628 ;~ 24ED:1153
cs=0x24ed;eip=0x001155; 	T(MOV(al, ah));	// 120912 mov     al, ah ;~ 24ED:1155
cs=0x24ed;eip=0x001157; 	T(ADD(al, dh));	// 120913 add     al, dh ;~ 24ED:1157
cs=0x24ed;eip=0x001159; 	X(STOSB);	// 120914 stosb ;~ 24ED:1159
cs=0x24ed;eip=0x00115a; 	R(LOOP(loc_345f4));	// 120915 loop    loc_345F4 ;~ 24ED:115A
loc_3460c:
	// 8018 
cs=0x24ed;eip=0x00115c; 	T(OR(bp, bp));	// 120919 or      bp, bp ;~ 24ED:115C
cs=0x24ed;eip=0x00115e; 	R(JNS(loc_345e0));	// 120920 jns     short loc_345E0 ;~ 24ED:115E
loc_34610:
	// 8019 
cs=0x24ed;eip=0x001160; 	T(MOV(cx, bp));	// 120924 mov     cx, bp ;~ 24ED:1160
cs=0x24ed;eip=0x001162; 	T(NEG(cx));	// 120925 neg     cx ;~ 24ED:1162
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001164; 	T(SUB(di, *(dw*)(((db*)&word_34574))));	// 120926 sub     di, cs:word_34574 ;~ 24ED:1164
cs=0x24ed;eip=0x001169; 	T(ADD(di, 0x140));	// 120927 add     di, 140h ;~ 24ED:1169
cs=0x24ed;eip=0x00116d; 	T(DEC(bx));	// 120928 dec     bx ;~ 24ED:116D
cs=0x24ed;eip=0x00116e; 	R(JNZ(loc_34576));	// 120929 jnz     loc_34576 ;~ 24ED:116E
cs=0x24ed;eip=0x001172; 	R(RETF(0));	// 120930 retf ;~ 24ED:1172
loc_34623:
	// 8020 
cs=0x24ed;eip=0x001173; 	T(INC(di));	// 120934 inc     di ;~ 24ED:1173
cs=0x24ed;eip=0x001174; 	T(SHR(ah, 1));	// 120935 shr     ah, 1 ;~ 24ED:1174
cs=0x24ed;eip=0x001176; 	R(JNZ(loc_34600));	// 120936 jnz     short loc_34600 ;~ 24ED:1176
loc_34628:
	// 8021 
cs=0x24ed;eip=0x001178; 	T(INC(di));	// 120939 inc     di ;~ 24ED:1178
cs=0x24ed;eip=0x001179; 	R(LOOP(loc_345f4));	// 120940 loop    loc_345F4 ;~ 24ED:1179
cs=0x24ed;eip=0x00117b; 	R(JMP(loc_3460c));	// 120941 jmp     short loc_3460C ;~ 24ED:117B
loc_3462d:
	// 8022 
cs=0x24ed;eip=0x00117d; 	T(MOV(cx, 0x101));	// 120945 mov     cx, 101h ;~ 24ED:117D
cs=0x24ed;eip=0x001180; 	T(SUB(cx, ax));	// 120946 sub     cx, ax ;~ 24ED:1180
cs=0x24ed;eip=0x001182; 	T(INC(si));	// 120947 inc     si ;~ 24ED:1182
loc_34633:
	// 8023 
cs=0x24ed;eip=0x001183; 	T(SUB(bp, cx));	// 120950 sub     bp, cx ;~ 24ED:1183
cs=0x24ed;eip=0x001185; 	R(JNC(loc_3463b));	// 120951 jnb     short loc_3463B ;~ 24ED:1185
cs=0x24ed;eip=0x001187; 	T(ADD(cx, bp));	// 120952 add     cx, bp ;~ 24ED:1187
cs=0x24ed;eip=0x001189; 	R(JZ(loc_34656));	// 120953 jz      short loc_34656 ;~ 24ED:1189
loc_3463b:
	// 8024 
cs=0x24ed;eip=0x00118b; 	T(MOV(al, *(raddr(ds,si-1))));	// 120956 mov     al, [si-1] ;~ 24ED:118B
cs=0x24ed;eip=0x00118e; 	T(SHL(ax, 1));	// 120957 shl     ax, 1 ;~ 24ED:118E
cs=0x24ed;eip=0x001190; 	R(JZ(loc_3465c));	// 120958 jz      short loc_3465C ;~ 24ED:1190
cs=0x24ed;eip=0x001192; 	T(SHL(ax, 3));	// 120959 shl     ax, 3 ;~ 24ED:1192
cs=0x24ed;eip=0x001195; 	T(SHR(al, 1));	// 120960 shr     al, 1 ;~ 24ED:1195
cs=0x24ed;eip=0x001197; 	R(JZ(loc_34662));	// 120961 jz      short loc_34662 ;~ 24ED:1197
cs=0x24ed;eip=0x001199; 	T(SHR(al, 3));	// 120962 shr     al, 3 ;~ 24ED:1199
cs=0x24ed;eip=0x00119c; 	T(ADD(al, dh));	// 120963 add     al, dh ;~ 24ED:119C
cs=0x24ed;eip=0x00119e; 	T(OR(ah, ah));	// 120964 or      ah, ah ;~ 24ED:119E
cs=0x24ed;eip=0x0011a0; 	R(JZ(loc_3466c));	// 120965 jz      short loc_3466C ;~ 24ED:11A0
cs=0x24ed;eip=0x0011a2; 	T(ADD(ah, dh));	// 120966 add     ah, dh ;~ 24ED:11A2
	// 120967 rep stosw ;~ 24ED:11A4
cs=0x24ed;eip=0x0011a4; 	X(	REP STOSW);	// 120967 rep stosw ;~ 24ED:11A4
loc_34656:
	// 8025 
cs=0x24ed;eip=0x0011a6; 	T(OR(bp, bp));	// 120971 or      bp, bp ;~ 24ED:11A6
cs=0x24ed;eip=0x0011a8; 	R(JS(loc_34610));	// 120972 js      short loc_34610 ;~ 24ED:11A8
cs=0x24ed;eip=0x0011aa; 	R(JMP(loc_345e0));	// 120973 jmp     short loc_345E0 ;~ 24ED:11AA
loc_3465c:
	// 8026 
cs=0x24ed;eip=0x0011ac; 	T(SHL(cx, 1));	// 120977 shl     cx, 1 ;~ 24ED:11AC
cs=0x24ed;eip=0x0011ae; 	T(ADD(di, cx));	// 120978 add     di, cx ;~ 24ED:11AE
cs=0x24ed;eip=0x0011b0; 	R(JMP(loc_34656));	// 120979 jmp     short loc_34656 ;~ 24ED:11B0
loc_34662:
	// 8027 
cs=0x24ed;eip=0x0011b2; 	T(MOV(al, ah));	// 120983 mov     al, ah ;~ 24ED:11B2
cs=0x24ed;eip=0x0011b4; 	T(ADD(al, dh));	// 120984 add     al, dh ;~ 24ED:11B4
loc_34666:
	// 8028 
cs=0x24ed;eip=0x0011b6; 	T(INC(di));	// 120987 inc     di ;~ 24ED:11B6
cs=0x24ed;eip=0x0011b7; 	X(STOSB);	// 120988 stosb ;~ 24ED:11B7
cs=0x24ed;eip=0x0011b8; 	R(LOOP(loc_34666));	// 120989 loop    loc_34666 ;~ 24ED:11B8
cs=0x24ed;eip=0x0011ba; 	R(JMP(loc_34656));	// 120990 jmp     short loc_34656 ;~ 24ED:11BA
loc_3466c:
	// 8029 
cs=0x24ed;eip=0x0011bc; 	X(STOSB);	// 120995 stosb ;~ 24ED:11BC
cs=0x24ed;eip=0x0011bd; 	T(INC(di));	// 120996 inc     di ;~ 24ED:11BD
cs=0x24ed;eip=0x0011be; 	R(LOOP(loc_3466c));	// 120997 loop    loc_3466C ;~ 24ED:11BE
cs=0x24ed;eip=0x0011c0; 	R(JMP(loc_34656));	// 120998 jmp     short loc_34656 ;~ 24ED:11C0
loc_34672:
	// 8030 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0011c2; 	T(MOV(bp, *(dw*)(((db*)&word_34572))));	// 121003 mov     bp, cs:word_34572 ;~ 24ED:11C2
cs=0x24ed;eip=0x0011c7; 	T(OR(bp, bp));	// 121004 or      bp, bp ;~ 24ED:11C7
cs=0x24ed;eip=0x0011c9; 	R(JNZ(loc_34683));	// 121005 jnz     short loc_34683 ;~ 24ED:11C9
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0011cb; 	T(MOV(bp, *(dw*)(((db*)&word_34574))));	// 121006 mov     bp, cs:word_34574 ;~ 24ED:11CB
cs=0x24ed;eip=0x0011d0; 	R(JMP(loc_346e5));	// 121007 jmp     short loc_346E5 ;~ 24ED:11D0
loc_34683:
	// 8031 
cs=0x24ed;eip=0x0011d3; 	T(SHR(bp, 1));	// 121013 shr     bp, 1 ;~ 24ED:11D3
cs=0x24ed;eip=0x0011d5; 	X(PUSHF);	// 121014 pushf ;~ 24ED:11D5
cs=0x24ed;eip=0x0011d6; 	R(JCXZ(loc_34690));	// 121015 jcxz    short loc_34690 ;~ 24ED:11D6
cs=0x24ed;eip=0x0011d8; 	T(OR(dl, dl));	// 121016 or      dl, dl ;~ 24ED:11D8
cs=0x24ed;eip=0x0011da; 	R(JS(loc_346b9));	// 121017 js      short loc_346B9 ;~ 24ED:11DA
cs=0x24ed;eip=0x0011dc; 	R(JMP(loc_3469c));	// 121018 jmp     short loc_3469C ;~ 24ED:11DC
loc_3468e:
	// 8032 
cs=0x24ed;eip=0x0011de; 	T(ADD(si, cx));	// 121022 add     si, cx ;~ 24ED:11DE
loc_34690:
	// 8033 
cs=0x24ed;eip=0x0011e0; 	T(LODSB);	// 121026 lodsb ;~ 24ED:11E0
cs=0x24ed;eip=0x0011e1; 	T(XOR(ah, ah));	// 121027 xor     ah, ah ;~ 24ED:11E1
cs=0x24ed;eip=0x0011e3; 	T(MOV(dl, al));	// 121028 mov     dl, al ;~ 24ED:11E3
cs=0x24ed;eip=0x0011e5; 	T(OR(al, al));	// 121029 or      al, al ;~ 24ED:11E5
cs=0x24ed;eip=0x0011e7; 	R(JS(loc_346b3));	// 121030 js      short loc_346B3 ;~ 24ED:11E7
cs=0x24ed;eip=0x0011e9; 	T(MOV(cx, ax));	// 121031 mov     cx, ax ;~ 24ED:11E9
cs=0x24ed;eip=0x0011eb; 	T(INC(cx));	// 121032 inc     cx ;~ 24ED:11EB
loc_3469c:
	// 8034 
cs=0x24ed;eip=0x0011ec; 	T(SUB(bp, cx));	// 121035 sub     bp, cx ;~ 24ED:11EC
cs=0x24ed;eip=0x0011ee; 	R(JNC(loc_3468e));	// 121036 jnb     short loc_3468E ;~ 24ED:11EE
cs=0x24ed;eip=0x0011f0; 	T(ADD(cx, bp));	// 121037 add     cx, bp ;~ 24ED:11F0
cs=0x24ed;eip=0x0011f2; 	T(ADD(si, cx));	// 121038 add     si, cx ;~ 24ED:11F2
cs=0x24ed;eip=0x0011f4; 	T(MOV(cx, bp));	// 121039 mov     cx, bp ;~ 24ED:11F4
cs=0x24ed;eip=0x0011f6; 	T(NEG(cx));	// 121040 neg     cx ;~ 24ED:11F6
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0011f8; 	T(MOV(bp, *(dw*)(((db*)&word_34574))));	// 121041 mov     bp, cs:word_34574 ;~ 24ED:11F8
cs=0x24ed;eip=0x0011fd; 	X(POPF);	// 121042 popf ;~ 24ED:11FD
cs=0x24ed;eip=0x0011fe; 	R(JNC(loc_346e5));	// 121043 jnb     short loc_346E5 ;~ 24ED:11FE
cs=0x24ed;eip=0x001200; 	T(LODSB);	// 121044 lodsb ;~ 24ED:1200
cs=0x24ed;eip=0x001201; 	R(JMP(loc_346ce));	// 121045 jmp     short loc_346CE ;~ 24ED:1201
loc_346b3:
	// 8035 
cs=0x24ed;eip=0x001203; 	T(MOV(cx, 0x101));	// 121049 mov     cx, 101h ;~ 24ED:1203
cs=0x24ed;eip=0x001206; 	T(SUB(cx, ax));	// 121050 sub     cx, ax ;~ 24ED:1206
cs=0x24ed;eip=0x001208; 	T(INC(si));	// 121051 inc     si ;~ 24ED:1208
loc_346b9:
	// 8036 
cs=0x24ed;eip=0x001209; 	T(SUB(bp, cx));	// 121054 sub     bp, cx ;~ 24ED:1209
cs=0x24ed;eip=0x00120b; 	R(JNC(loc_34690));	// 121055 jnb     short loc_34690 ;~ 24ED:120B
cs=0x24ed;eip=0x00120d; 	T(XOR(ah, ah));	// 121056 xor     ah, ah ;~ 24ED:120D
cs=0x24ed;eip=0x00120f; 	T(MOV(cx, bp));	// 121057 mov     cx, bp ;~ 24ED:120F
cs=0x24ed;eip=0x001211; 	T(NEG(cx));	// 121058 neg     cx ;~ 24ED:1211
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001213; 	T(MOV(bp, *(dw*)(((db*)&word_34574))));	// 121059 mov     bp, cs:word_34574 ;~ 24ED:1213
cs=0x24ed;eip=0x001218; 	X(POPF);	// 121060 popf ;~ 24ED:1218
cs=0x24ed;eip=0x001219; 	R(JNC(loc_346e5));	// 121061 jnb     short loc_346E5 ;~ 24ED:1219
cs=0x24ed;eip=0x00121b; 	T(MOV(al, *(raddr(ds,si-1))));	// 121062 mov     al, [si-1] ;~ 24ED:121B
loc_346ce:
	// 8037 
cs=0x24ed;eip=0x00121e; 	T(SHR(al, 4));	// 121065 shr     al, 4 ;~ 24ED:121E
cs=0x24ed;eip=0x001221; 	R(JZ(loc_346d8));	// 121066 jz      short loc_346D8 ;~ 24ED:1221
cs=0x24ed;eip=0x001223; 	T(ADD(al, dh));	// 121067 add     al, dh ;~ 24ED:1223
cs=0x24ed;eip=0x001225; 	X(MOV(*(raddr(es,di)), al));	// 121068 mov     es:[di], al ;~ 24ED:1225
loc_346d8:
	// 8038 
cs=0x24ed;eip=0x001228; 	T(INC(di));	// 121071 inc     di ;~ 24ED:1228
cs=0x24ed;eip=0x001229; 	T(DEC(cx));	// 121072 dec     cx ;~ 24ED:1229
cs=0x24ed;eip=0x00122a; 	T(DEC(bp));	// 121073 dec     bp ;~ 24ED:122A
cs=0x24ed;eip=0x00122b; 	R(JNZ(loc_346e5));	// 121074 jnz     short loc_346E5 ;~ 24ED:122B
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00122d; 	T(MOV(bp, *(dw*)(((db*)&word_34570))));	// 121075 mov     bp, cs:word_34570 ;~ 24ED:122D
cs=0x24ed;eip=0x001232; 	R(JMP(loc_347a1));	// 121076 jmp     loc_347A1 ;~ 24ED:1232
loc_346e5:
	// 8039 
cs=0x24ed;eip=0x001235; 	T(SHR(bp, 1));	// 121081 shr     bp, 1 ;~ 24ED:1235
cs=0x24ed;eip=0x001237; 	X(PUSHF);	// 121082 pushf ;~ 24ED:1237
cs=0x24ed;eip=0x001238; 	R(JCXZ(loc_346f1));	// 121083 jcxz    short loc_346F1 ;~ 24ED:1238
cs=0x24ed;eip=0x00123a; 	T(OR(dl, dl));	// 121084 or      dl, dl ;~ 24ED:123A
cs=0x24ed;eip=0x00123c; 	R(JNS(loc_346fd));	// 121085 jns     short loc_346FD ;~ 24ED:123C
cs=0x24ed;eip=0x00123e; 	R(JMP(loc_34743));	// 121086 jmp     short loc_34743 ;~ 24ED:123E
loc_346f1:
	// 8040 
cs=0x24ed;eip=0x001241; 	T(LODSB);	// 121093 lodsb ;~ 24ED:1241
cs=0x24ed;eip=0x001242; 	T(XOR(ah, ah));	// 121094 xor     ah, ah ;~ 24ED:1242
cs=0x24ed;eip=0x001244; 	T(MOV(dl, al));	// 121095 mov     dl, al ;~ 24ED:1244
cs=0x24ed;eip=0x001246; 	T(OR(al, al));	// 121096 or      al, al ;~ 24ED:1246
cs=0x24ed;eip=0x001248; 	R(JS(loc_3473d));	// 121097 js      short loc_3473D ;~ 24ED:1248
cs=0x24ed;eip=0x00124a; 	T(MOV(cx, ax));	// 121098 mov     cx, ax ;~ 24ED:124A
cs=0x24ed;eip=0x00124c; 	T(INC(cx));	// 121099 inc     cx ;~ 24ED:124C
loc_346fd:
	// 8041 
cs=0x24ed;eip=0x00124d; 	T(SUB(bp, cx));	// 121102 sub     bp, cx ;~ 24ED:124D
cs=0x24ed;eip=0x00124f; 	R(JNC(loc_34705));	// 121103 jnb     short loc_34705 ;~ 24ED:124F
cs=0x24ed;eip=0x001251; 	T(ADD(cx, bp));	// 121104 add     cx, bp ;~ 24ED:1251
cs=0x24ed;eip=0x001253; 	R(JZ(loc_3471d));	// 121105 jz      short loc_3471D ;~ 24ED:1253
loc_34705:
	// 8042 
cs=0x24ed;eip=0x001255; 	T(LODSB);	// 121109 lodsb ;~ 24ED:1255
cs=0x24ed;eip=0x001256; 	T(MOV(ah, al));	// 121110 mov     ah, al ;~ 24ED:1256
cs=0x24ed;eip=0x001258; 	T(AND(al, 0x0F));	// 121111 and     al, 0Fh ;~ 24ED:1258
cs=0x24ed;eip=0x00125a; 	R(JZ(loc_34733));	// 121112 jz      short loc_34733 ;~ 24ED:125A
cs=0x24ed;eip=0x00125c; 	T(ADD(al, dh));	// 121113 add     al, dh ;~ 24ED:125C
cs=0x24ed;eip=0x00125e; 	X(STOSB);	// 121114 stosb ;~ 24ED:125E
cs=0x24ed;eip=0x00125f; 	T(SHR(ah, 1));	// 121115 shr     ah, 1 ;~ 24ED:125F
loc_34711:
	// 8043 
cs=0x24ed;eip=0x001261; 	T(SHR(ah, 3));	// 121118 shr     ah, 3 ;~ 24ED:1261
cs=0x24ed;eip=0x001264; 	R(JZ(loc_34738));	// 121119 jz      short loc_34738 ;~ 24ED:1264
cs=0x24ed;eip=0x001266; 	T(MOV(al, ah));	// 121120 mov     al, ah ;~ 24ED:1266
cs=0x24ed;eip=0x001268; 	T(ADD(al, dh));	// 121121 add     al, dh ;~ 24ED:1268
cs=0x24ed;eip=0x00126a; 	X(STOSB);	// 121122 stosb ;~ 24ED:126A
cs=0x24ed;eip=0x00126b; 	R(LOOP(loc_34705));	// 121123 loop    loc_34705 ;~ 24ED:126B
loc_3471d:
	// 8044 
cs=0x24ed;eip=0x00126d; 	T(OR(bp, bp));	// 121127 or      bp, bp ;~ 24ED:126D
cs=0x24ed;eip=0x00126f; 	R(JNS(loc_346f1));	// 121128 jns     short loc_346F1 ;~ 24ED:126F
cs=0x24ed;eip=0x001271; 	T(MOV(cx, bp));	// 121129 mov     cx, bp ;~ 24ED:1271
cs=0x24ed;eip=0x001273; 	T(NEG(cx));	// 121130 neg     cx ;~ 24ED:1273
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001275; 	T(MOV(bp, *(dw*)(((db*)&word_34570))));	// 121131 mov     bp, cs:word_34570 ;~ 24ED:1275
cs=0x24ed;eip=0x00127a; 	T(XOR(ah, ah));	// 121132 xor     ah, ah ;~ 24ED:127A
cs=0x24ed;eip=0x00127c; 	X(POPF);	// 121133 popf ;~ 24ED:127C
cs=0x24ed;eip=0x00127d; 	R(JNC(loc_347a1));	// 121134 jnb     short loc_347A1 ;~ 24ED:127D
cs=0x24ed;eip=0x00127f; 	T(LODSB);	// 121135 lodsb ;~ 24ED:127F
cs=0x24ed;eip=0x001280; 	R(JMP(loc_34793));	// 121136 jmp     short loc_34793 ;~ 24ED:1280
loc_34733:
	// 8045 
cs=0x24ed;eip=0x001283; 	T(INC(di));	// 121142 inc     di ;~ 24ED:1283
cs=0x24ed;eip=0x001284; 	T(SHR(ah, 1));	// 121143 shr     ah, 1 ;~ 24ED:1284
cs=0x24ed;eip=0x001286; 	R(JNZ(loc_34711));	// 121144 jnz     short loc_34711 ;~ 24ED:1286
loc_34738:
	// 8046 
cs=0x24ed;eip=0x001288; 	T(INC(di));	// 121147 inc     di ;~ 24ED:1288
cs=0x24ed;eip=0x001289; 	R(LOOP(loc_34705));	// 121148 loop    loc_34705 ;~ 24ED:1289
cs=0x24ed;eip=0x00128b; 	R(JMP(loc_3471d));	// 121149 jmp     short loc_3471D ;~ 24ED:128B
loc_3473d:
	// 8047 
cs=0x24ed;eip=0x00128d; 	T(MOV(cx, 0x101));	// 121153 mov     cx, 101h ;~ 24ED:128D
cs=0x24ed;eip=0x001290; 	T(SUB(cx, ax));	// 121154 sub     cx, ax ;~ 24ED:1290
cs=0x24ed;eip=0x001292; 	T(INC(si));	// 121155 inc     si ;~ 24ED:1292
loc_34743:
	// 8048 
cs=0x24ed;eip=0x001293; 	T(SUB(bp, cx));	// 121158 sub     bp, cx ;~ 24ED:1293
cs=0x24ed;eip=0x001295; 	R(JNC(loc_3474b));	// 121159 jnb     short loc_3474B ;~ 24ED:1295
cs=0x24ed;eip=0x001297; 	T(ADD(cx, bp));	// 121160 add     cx, bp ;~ 24ED:1297
cs=0x24ed;eip=0x001299; 	R(JZ(loc_3477c));	// 121161 jz      short loc_3477C ;~ 24ED:1299
loc_3474b:
	// 8049 
cs=0x24ed;eip=0x00129b; 	T(MOV(al, *(raddr(ds,si-1))));	// 121164 mov     al, [si-1] ;~ 24ED:129B
cs=0x24ed;eip=0x00129e; 	T(SHL(ax, 1));	// 121165 shl     ax, 1 ;~ 24ED:129E
cs=0x24ed;eip=0x0012a0; 	R(JZ(loc_34768));	// 121166 jz      short loc_34768 ;~ 24ED:12A0
cs=0x24ed;eip=0x0012a2; 	T(SHL(ax, 3));	// 121167 shl     ax, 3 ;~ 24ED:12A2
cs=0x24ed;eip=0x0012a5; 	T(SHR(al, 1));	// 121168 shr     al, 1 ;~ 24ED:12A5
cs=0x24ed;eip=0x0012a7; 	R(JZ(loc_3476e));	// 121169 jz      short loc_3476E ;~ 24ED:12A7
cs=0x24ed;eip=0x0012a9; 	T(SHR(al, 3));	// 121170 shr     al, 3 ;~ 24ED:12A9
cs=0x24ed;eip=0x0012ac; 	T(ADD(al, dh));	// 121171 add     al, dh ;~ 24ED:12AC
cs=0x24ed;eip=0x0012ae; 	T(OR(ah, ah));	// 121172 or      ah, ah ;~ 24ED:12AE
cs=0x24ed;eip=0x0012b0; 	R(JZ(loc_34778));	// 121173 jz      short loc_34778 ;~ 24ED:12B0
cs=0x24ed;eip=0x0012b2; 	T(ADD(ah, dh));	// 121174 add     ah, dh ;~ 24ED:12B2
	// 121175 rep stosw ;~ 24ED:12B4
cs=0x24ed;eip=0x0012b4; 	X(	REP STOSW);	// 121175 rep stosw ;~ 24ED:12B4
cs=0x24ed;eip=0x0012b6; 	R(JMP(loc_3477c));	// 121176 jmp     short loc_3477C ;~ 24ED:12B6
loc_34768:
	// 8050 
cs=0x24ed;eip=0x0012b8; 	T(SHL(cx, 1));	// 121180 shl     cx, 1 ;~ 24ED:12B8
cs=0x24ed;eip=0x0012ba; 	T(ADD(di, cx));	// 121181 add     di, cx ;~ 24ED:12BA
cs=0x24ed;eip=0x0012bc; 	R(JMP(loc_3477c));	// 121182 jmp     short loc_3477C ;~ 24ED:12BC
loc_3476e:
	// 8051 
cs=0x24ed;eip=0x0012be; 	T(MOV(al, ah));	// 121186 mov     al, ah ;~ 24ED:12BE
cs=0x24ed;eip=0x0012c0; 	T(ADD(al, dh));	// 121187 add     al, dh ;~ 24ED:12C0
loc_34772:
	// 8052 
cs=0x24ed;eip=0x0012c2; 	T(INC(di));	// 121190 inc     di ;~ 24ED:12C2
cs=0x24ed;eip=0x0012c3; 	X(STOSB);	// 121191 stosb ;~ 24ED:12C3
cs=0x24ed;eip=0x0012c4; 	R(LOOP(loc_34772));	// 121192 loop    loc_34772 ;~ 24ED:12C4
cs=0x24ed;eip=0x0012c6; 	R(JMP(loc_3477c));	// 121193 jmp     short loc_3477C ;~ 24ED:12C6
loc_34778:
	// 8053 
cs=0x24ed;eip=0x0012c8; 	X(STOSB);	// 121198 stosb ;~ 24ED:12C8
cs=0x24ed;eip=0x0012c9; 	T(INC(di));	// 121199 inc     di ;~ 24ED:12C9
cs=0x24ed;eip=0x0012ca; 	R(LOOP(loc_34778));	// 121200 loop    loc_34778 ;~ 24ED:12CA
loc_3477c:
	// 8054 
cs=0x24ed;eip=0x0012cc; 	T(OR(bp, bp));	// 121204 or      bp, bp ;~ 24ED:12CC
cs=0x24ed;eip=0x0012ce; 	R(JNS(loc_346f1));	// 121205 jns     loc_346F1 ;~ 24ED:12CE
cs=0x24ed;eip=0x0012d2; 	T(XOR(ah, ah));	// 121206 xor     ah, ah ;~ 24ED:12D2
cs=0x24ed;eip=0x0012d4; 	T(MOV(cx, bp));	// 121207 mov     cx, bp ;~ 24ED:12D4
cs=0x24ed;eip=0x0012d6; 	T(NEG(cx));	// 121208 neg     cx ;~ 24ED:12D6
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0012d8; 	T(MOV(bp, *(dw*)(((db*)&word_34570))));	// 121209 mov     bp, cs:word_34570 ;~ 24ED:12D8
cs=0x24ed;eip=0x0012dd; 	X(POPF);	// 121210 popf ;~ 24ED:12DD
cs=0x24ed;eip=0x0012de; 	R(JNC(loc_347a1));	// 121211 jnb     short loc_347A1 ;~ 24ED:12DE
cs=0x24ed;eip=0x0012e0; 	T(MOV(al, *(raddr(ds,si-1))));	// 121212 mov     al, [si-1] ;~ 24ED:12E0
loc_34793:
	// 8055 
cs=0x24ed;eip=0x0012e3; 	T(AND(al, 0x0F));	// 121215 and     al, 0Fh ;~ 24ED:12E3
cs=0x24ed;eip=0x0012e5; 	R(JZ(loc_3479c));	// 121216 jz      short loc_3479C ;~ 24ED:12E5
cs=0x24ed;eip=0x0012e7; 	T(ADD(al, dh));	// 121217 add     al, dh ;~ 24ED:12E7
cs=0x24ed;eip=0x0012e9; 	X(MOV(*(raddr(es,di)), al));	// 121218 mov     es:[di], al ;~ 24ED:12E9
loc_3479c:
	// 8056 
cs=0x24ed;eip=0x0012ec; 	T(INC(di));	// 121221 inc     di ;~ 24ED:12EC
cs=0x24ed;eip=0x0012ed; 	T(DEC(cx));	// 121222 dec     cx ;~ 24ED:12ED
cs=0x24ed;eip=0x0012ee; 	T(DEC(bp));	// 121223 dec     bp ;~ 24ED:12EE
cs=0x24ed;eip=0x0012ef; 	R(JZ(loc_347d7));	// 121224 jz      short loc_347D7 ;~ 24ED:12EF
loc_347a1:
	// 8057 
cs=0x24ed;eip=0x0012f1; 	T(SHR(bp, 1));	// 121228 shr     bp, 1 ;~ 24ED:12F1
cs=0x24ed;eip=0x0012f3; 	R(JCXZ(loc_347ad));	// 121229 jcxz    short loc_347AD ;~ 24ED:12F3
cs=0x24ed;eip=0x0012f5; 	T(OR(dl, dl));	// 121230 or      dl, dl ;~ 24ED:12F5
cs=0x24ed;eip=0x0012f7; 	R(JS(loc_347cd));	// 121231 js      short loc_347CD ;~ 24ED:12F7
cs=0x24ed;eip=0x0012f9; 	R(JMP(loc_347b9));	// 121232 jmp     short loc_347B9 ;~ 24ED:12F9
loc_347ab:
	// 8058 
cs=0x24ed;eip=0x0012fb; 	T(ADD(si, cx));	// 121236 add     si, cx ;~ 24ED:12FB
loc_347ad:
	// 8059 
cs=0x24ed;eip=0x0012fd; 	T(LODSB);	// 121240 lodsb ;~ 24ED:12FD
cs=0x24ed;eip=0x0012fe; 	T(XOR(ah, ah));	// 121241 xor     ah, ah ;~ 24ED:12FE
cs=0x24ed;eip=0x001300; 	T(MOV(dl, al));	// 121242 mov     dl, al ;~ 24ED:1300
cs=0x24ed;eip=0x001302; 	T(OR(al, al));	// 121243 or      al, al ;~ 24ED:1302
cs=0x24ed;eip=0x001304; 	R(JS(loc_347c7));	// 121244 js      short loc_347C7 ;~ 24ED:1304
cs=0x24ed;eip=0x001306; 	T(MOV(cx, ax));	// 121245 mov     cx, ax ;~ 24ED:1306
cs=0x24ed;eip=0x001308; 	T(INC(cx));	// 121246 inc     cx ;~ 24ED:1308
loc_347b9:
	// 8060 
cs=0x24ed;eip=0x001309; 	T(SUB(bp, cx));	// 121249 sub     bp, cx ;~ 24ED:1309
cs=0x24ed;eip=0x00130b; 	R(JNC(loc_347ab));	// 121250 jnb     short loc_347AB ;~ 24ED:130B
cs=0x24ed;eip=0x00130d; 	T(ADD(cx, bp));	// 121251 add     cx, bp ;~ 24ED:130D
cs=0x24ed;eip=0x00130f; 	T(ADD(si, cx));	// 121252 add     si, cx ;~ 24ED:130F
cs=0x24ed;eip=0x001311; 	T(MOV(cx, bp));	// 121253 mov     cx, bp ;~ 24ED:1311
cs=0x24ed;eip=0x001313; 	T(NEG(cx));	// 121254 neg     cx ;~ 24ED:1313
cs=0x24ed;eip=0x001315; 	R(JMP(loc_347d7));	// 121255 jmp     short loc_347D7 ;~ 24ED:1315
loc_347c7:
	// 8061 
cs=0x24ed;eip=0x001317; 	T(MOV(cx, 0x101));	// 121259 mov     cx, 101h ;~ 24ED:1317
cs=0x24ed;eip=0x00131a; 	T(SUB(cx, ax));	// 121260 sub     cx, ax ;~ 24ED:131A
cs=0x24ed;eip=0x00131c; 	T(INC(si));	// 121261 inc     si ;~ 24ED:131C
loc_347cd:
	// 8062 
cs=0x24ed;eip=0x00131d; 	T(SUB(bp, cx));	// 121264 sub     bp, cx ;~ 24ED:131D
cs=0x24ed;eip=0x00131f; 	R(JNC(loc_347ad));	// 121265 jnb     short loc_347AD ;~ 24ED:131F
cs=0x24ed;eip=0x001321; 	T(XOR(ah, ah));	// 121266 xor     ah, ah ;~ 24ED:1321
cs=0x24ed;eip=0x001323; 	T(MOV(cx, bp));	// 121267 mov     cx, bp ;~ 24ED:1323
cs=0x24ed;eip=0x001325; 	T(NEG(cx));	// 121268 neg     cx ;~ 24ED:1325
loc_347d7:
	// 8063 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001327; 	T(SUB(di, *(dw*)(((db*)&word_34574))));	// 121272 sub     di, cs:word_34574 ;~ 24ED:1327
cs=0x24ed;eip=0x00132c; 	T(ADD(di, 0x140));	// 121273 add     di, 140h ;~ 24ED:132C
cs=0x24ed;eip=0x001330; 	T(DEC(bx));	// 121274 dec     bx ;~ 24ED:1330
cs=0x24ed;eip=0x001331; 	R(JNZ(loc_34672));	// 121275 jnz     loc_34672 ;~ 24ED:1331
cs=0x24ed;eip=0x001335; 	R(RETF(0));	// 121276 retf ;~ 24ED:1335
loc_347e6:
	// 8064 
cs=0x24ed;eip=0x001336; 	T(MOV(al, *(raddr(ds,si-1))));	// 121280 mov     al, [si-1] ;~ 24ED:1336
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001339; 	X(MOV(*(db*)(((db*)&word_3364d)+1), al));	// 121281 mov     byte ptr cs:word_3364D+1, al ;~ 24ED:1339
cs=0x24ed;eip=0x00133d; 	T(AND(di, 0x1FFF));	// 121282 and     di, 1FFFh ;~ 24ED:133D
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001341; 	X(MOV(*(dw*)(((db*)&word_349fc)), di));	// 121283 mov     cs:word_349FC, di ;~ 24ED:1341
cs=0x24ed;eip=0x001346; 	T(ADD(di, 3));	// 121284 add     di, 3 ;~ 24ED:1346
cs=0x24ed;eip=0x001349; 	T(SHR(di, 2));	// 121285 shr     di, 2 ;~ 24ED:1349
cs=0x24ed;eip=0x00134c; 	T(SHL(di, 1));	// 121286 shl     di, 1 ;~ 24ED:134C
cs=0x24ed;eip=0x00134e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+2))));	// 121287 mov     ax, [bp+2] ;~ 24ED:134E
cs=0x24ed;eip=0x001351; 	T(SUB(ax, bx));	// 121288 sub     ax, bx ;~ 24ED:1351
cs=0x24ed;eip=0x001353; 	R(JLE(loc_34831));	// 121289 jle     short loc_34831 ;~ 24ED:1353
cs=0x24ed;eip=0x001355; 	T(SUB(cx, ax));	// 121290 sub     cx, ax ;~ 24ED:1355
cs=0x24ed;eip=0x001357; 	R(JBE(locret_34864));	// 121291 jbe     short locret_34864 ;~ 24ED:1357
cs=0x24ed;eip=0x001359; 	T(ADD(bx, ax));	// 121292 add     bx, ax ;~ 24ED:1359
cs=0x24ed;eip=0x00135b; 	X(PUSH(dx));	// 121293 push    dx ;~ 24ED:135B
cs=0x24ed;eip=0x00135c; 	X(PUSH(cx));	// 121294 push    cx ;~ 24ED:135C
cs=0x24ed;eip=0x00135d; 	X(PUSH(bp));	// 121295 push    bp ;~ 24ED:135D
cs=0x24ed;eip=0x00135e; 	T(MUL1_2(di));	// 121296 mul     di ;~ 24ED:135E
cs=0x24ed;eip=0x001360; 	T(MOV(bp, ax));	// 121297 mov     bp, ax ;~ 24ED:1360
cs=0x24ed;eip=0x001362; 	T(XOR(ah, ah));	// 121298 xor     ah, ah ;~ 24ED:1362
loc_34814:
	// 8065 
cs=0x24ed;eip=0x001364; 	T(LODSB);	// 121302 lodsb ;~ 24ED:1364
cs=0x24ed;eip=0x001365; 	T(OR(al, al));	// 121303 or      al, al ;~ 24ED:1365
cs=0x24ed;eip=0x001367; 	R(JS(loc_34824));	// 121304 js      short loc_34824 ;~ 24ED:1367
cs=0x24ed;eip=0x001369; 	T(MOV(cx, ax));	// 121305 mov     cx, ax ;~ 24ED:1369
cs=0x24ed;eip=0x00136b; 	T(INC(cx));	// 121306 inc     cx ;~ 24ED:136B
cs=0x24ed;eip=0x00136c; 	T(ADD(si, cx));	// 121307 add     si, cx ;~ 24ED:136C
cs=0x24ed;eip=0x00136e; 	T(SUB(bp, cx));	// 121308 sub     bp, cx ;~ 24ED:136E
cs=0x24ed;eip=0x001370; 	R(JNZ(loc_34814));	// 121309 jnz     short loc_34814 ;~ 24ED:1370
cs=0x24ed;eip=0x001372; 	R(JMP(loc_3482e));	// 121310 jmp     short loc_3482E ;~ 24ED:1372
loc_34824:
	// 8066 
cs=0x24ed;eip=0x001374; 	T(MOV(cx, 0x101));	// 121314 mov     cx, 101h ;~ 24ED:1374
cs=0x24ed;eip=0x001377; 	T(SUB(cx, ax));	// 121315 sub     cx, ax ;~ 24ED:1377
cs=0x24ed;eip=0x001379; 	T(INC(si));	// 121316 inc     si ;~ 24ED:1379
cs=0x24ed;eip=0x00137a; 	T(SUB(bp, cx));	// 121317 sub     bp, cx ;~ 24ED:137A
cs=0x24ed;eip=0x00137c; 	R(JNZ(loc_34814));	// 121318 jnz     short loc_34814 ;~ 24ED:137C
loc_3482e:
	// 8067 
cs=0x24ed;eip=0x00137e; 	X(POP(bp));	// 121321 pop     bp ;~ 24ED:137E
cs=0x24ed;eip=0x00137f; 	X(POP(cx));	// 121322 pop     cx ;~ 24ED:137F
cs=0x24ed;eip=0x001380; 	X(POP(dx));	// 121323 pop     dx ;~ 24ED:1380
loc_34831:
	// 8068 
cs=0x24ed;eip=0x001381; 	T(MOV(ax, bx));	// 121326 mov     ax, bx ;~ 24ED:1381
cs=0x24ed;eip=0x001383; 	T(ADD(ax, cx));	// 121327 add     ax, cx ;~ 24ED:1383
cs=0x24ed;eip=0x001385; 	T(SUB(ax, *(dw*)(raddr(ss,bp+6))));	// 121328 sub     ax, [bp+6] ;~ 24ED:1385
cs=0x24ed;eip=0x001388; 	R(JBE(loc_3483e));	// 121329 jbe     short loc_3483E ;~ 24ED:1388
cs=0x24ed;eip=0x00138a; 	T(SUB(cx, ax));	// 121330 sub     cx, ax ;~ 24ED:138A
cs=0x24ed;eip=0x00138c; 	R(JBE(locret_34864));	// 121331 jbe     short locret_34864 ;~ 24ED:138C
loc_3483e:
	// 8069 
cs=0x24ed;eip=0x00138e; 	T(MOV(ax, dx));	// 121334 mov     ax, dx ;~ 24ED:138E
cs=0x24ed;eip=0x001390; 	T(ADD(ax, di));	// 121335 add     ax, di ;~ 24ED:1390
cs=0x24ed;eip=0x001392; 	T(ADD(ax, di));	// 121336 add     ax, di ;~ 24ED:1392
cs=0x24ed;eip=0x001394; 	T(SUB(ax, *(dw*)(raddr(ss,bp+4))));	// 121337 sub     ax, [bp+4] ;~ 24ED:1394
cs=0x24ed;eip=0x001397; 	R(JG(loc_3488c));	// 121338 jg      short loc_3488C ;~ 24ED:1397
cs=0x24ed;eip=0x001399; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 121339 mov     ax, [bp+0] ;~ 24ED:1399
cs=0x24ed;eip=0x00139c; 	T(SUB(ax, dx));	// 121340 sub     ax, dx ;~ 24ED:139C
cs=0x24ed;eip=0x00139e; 	R(JG(loc_34865));	// 121341 jg      short loc_34865 ;~ 24ED:139E
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0013a0; 	X(MOV(*(dw*)(((db*)&word_340d3)), di));	// 121342 mov     cs:word_340D3, di ;~ 24ED:13A0
cs=0x24ed;eip=0x0013a5; 	T(MOV(bp, di));	// 121343 mov     bp, di ;~ 24ED:13A5
cs=0x24ed;eip=0x0013a7; 	R(CALL(sub_340a8,0));	// 121344 call    sub_340A8 ;~ 24ED:13A7
cs=0x24ed;eip=0x0013aa; 	T(MOV(bx, cx));	// 121345 mov     bx, cx ;~ 24ED:13AA
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0013ac; 	T(MOV(dx, *(dw*)(((db*)&word_3364d))));	// 121346 mov     dx, cs:word_3364D ;~ 24ED:13AC
cs=0x24ed;eip=0x0013b1; 	R(JMP(loc_340dd));	// 121347 jmp     loc_340DD ;~ 24ED:13B1
locret_34864:
	// 8070 
cs=0x24ed;eip=0x0013b4; 	R(RETF(0));	// 121352 retf ;~ 24ED:13B4
loc_34865:
	// 8071 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0013b5; 	T(CMP(ax, *(dw*)(((db*)&word_349fc))));	// 121356 cmp     ax, cs:word_349FC ;~ 24ED:13B5
cs=0x24ed;eip=0x0013ba; 	R(JNC(locret_34864));	// 121357 jnb     short locret_34864 ;~ 24ED:13BA
cs=0x24ed;eip=0x0013bc; 	T(MOV(bp, di));	// 121358 mov     bp, di ;~ 24ED:13BC
cs=0x24ed;eip=0x0013be; 	T(SHL(bp, 1));	// 121359 shl     bp, 1 ;~ 24ED:13BE
cs=0x24ed;eip=0x0013c0; 	T(SUB(bp, ax));	// 121360 sub     bp, ax ;~ 24ED:13C0
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0013c2; 	X(MOV(*(dw*)(((db*)&word_34574)), bp));	// 121361 mov     cs:word_34574, bp ;~ 24ED:13C2
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0013c7; 	X(MOV(*(dw*)(((db*)&word_34572)), ax));	// 121362 mov     cs:word_34572, ax ;~ 24ED:13C7
cs=0x24ed;eip=0x0013cb; 	T(ADD(dx, ax));	// 121363 add     dx, ax ;~ 24ED:13CB
cs=0x24ed;eip=0x0013cd; 	R(CALL(sub_340a8,0));	// 121364 call    sub_340A8 ;~ 24ED:13CD
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0013d0; 	T(MOV(dx, *(dw*)(((db*)&word_3364d))));	// 121365 mov     dx, cs:word_3364D ;~ 24ED:13D0
cs=0x24ed;eip=0x0013d5; 	T(MOV(bx, cx));	// 121366 mov     bx, cx ;~ 24ED:13D5
cs=0x24ed;eip=0x0013d7; 	T(XOR(cx, cx));	// 121367 xor     cx, cx ;~ 24ED:13D7
cs=0x24ed;eip=0x0013d9; 	R(JMP(loc_34576));	// 121368 jmp     loc_34576 ;~ 24ED:13D9
loc_3488c:
	// 8072 
cs=0x24ed;eip=0x0013dc; 	T(SHL(di, 1));	// 121372 shl     di, 1 ;~ 24ED:13DC
cs=0x24ed;eip=0x0013de; 	T(SUB(di, ax));	// 121373 sub     di, ax ;~ 24ED:13DE
cs=0x24ed;eip=0x0013e0; 	R(JLE(locret_34864));	// 121374 jle     short locret_34864 ;~ 24ED:13E0
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0013e2; 	X(MOV(*(dw*)(((db*)&word_34570)), ax));	// 121375 mov     cs:word_34570, ax ;~ 24ED:13E2
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0013e6; 	X(MOV(*(dw*)(((db*)&word_34572)), 0));	// 121376 mov     cs:word_34572, 0 ;~ 24ED:13E6
cs=0x24ed;eip=0x0013ed; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 121377 mov     ax, [bp+0] ;~ 24ED:13ED
cs=0x24ed;eip=0x0013f0; 	T(SUB(ax, dx));	// 121378 sub     ax, dx ;~ 24ED:13F0
cs=0x24ed;eip=0x0013f2; 	R(JLE(loc_348ae));	// 121379 jle     short loc_348AE ;~ 24ED:13F2
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0013f4; 	X(MOV(*(dw*)(((db*)&word_34572)), ax));	// 121380 mov     cs:word_34572, ax ;~ 24ED:13F4
cs=0x24ed;eip=0x0013f8; 	T(SUB(di, ax));	// 121381 sub     di, ax ;~ 24ED:13F8
cs=0x24ed;eip=0x0013fa; 	R(JLE(locret_34864));	// 121382 jle     short locret_34864 ;~ 24ED:13FA
cs=0x24ed;eip=0x0013fc; 	T(ADD(dx, ax));	// 121383 add     dx, ax ;~ 24ED:13FC
loc_348ae:
	// 8073 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0013fe; 	X(MOV(*(dw*)(((db*)&word_34574)), di));	// 121386 mov     cs:word_34574, di ;~ 24ED:13FE
cs=0x24ed;eip=0x001403; 	R(CALL(sub_340a8,0));	// 121387 call    sub_340A8 ;~ 24ED:1403
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001406; 	T(MOV(dx, *(dw*)(((db*)&word_3364d))));	// 121388 mov     dx, cs:word_3364D ;~ 24ED:1406
cs=0x24ed;eip=0x00140b; 	T(MOV(bx, cx));	// 121389 mov     bx, cx ;~ 24ED:140B
cs=0x24ed;eip=0x00140d; 	T(XOR(cx, cx));	// 121390 xor     cx, cx ;~ 24ED:140D
cs=0x24ed;eip=0x00140f; 	R(JMP(loc_34672));	// 121391 jmp     loc_34672 ;~ 24ED:140F
loc_348c2:
	// 8074 
cs=0x24ed;eip=0x001412; 	R(JMP(loc_34c0c));	// 121395 jmp     loc_34C0C ;~ 24ED:1412
loc_348c5:
	// 8075 
cs=0x24ed;eip=0x001415; 	T(CMP(ch, 0x0FE));	// 121399 cmp     ch, 0FEh ; 'þ' ;~ 24ED:1415
cs=0x24ed;eip=0x001418; 	R(JNC(loc_348c2));	// 121400 jnb     short loc_348C2 ;~ 24ED:1418
cs=0x24ed;eip=0x00141a; 	T(OR(di, di));	// 121401 or      di, di ;~ 24ED:141A
cs=0x24ed;eip=0x00141c; 	R(JS(loc_347e6));	// 121402 js      loc_347E6 ;~ 24ED:141C
cs=0x24ed;eip=0x001420; 	T(MOV(al, *(raddr(ds,si-1))));	// 121403 mov     al, [si-1] ;~ 24ED:1420
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001423; 	X(MOV(*(db*)(((db*)&word_3364d)+1), al));	// 121404 mov     byte ptr cs:word_3364D+1, al ;~ 24ED:1423
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001427; 	X(MOV(*(dw*)(((db*)&word_349fc)), di));	// 121405 mov     cs:word_349FC, di ;~ 24ED:1427
cs=0x24ed;eip=0x00142c; 	T(ADD(di, 3));	// 121406 add     di, 3 ;~ 24ED:142C
cs=0x24ed;eip=0x00142f; 	T(SHR(di, 2));	// 121407 shr     di, 2 ;~ 24ED:142F
cs=0x24ed;eip=0x001432; 	T(SHL(di, 1));	// 121408 shl     di, 1 ;~ 24ED:1432
cs=0x24ed;eip=0x001434; 	T(MOV(ax, *(dw*)(raddr(ss,bp+2))));	// 121409 mov     ax, [bp+2] ;~ 24ED:1434
cs=0x24ed;eip=0x001437; 	T(SUB(ax, bx));	// 121410 sub     ax, bx ;~ 24ED:1437
cs=0x24ed;eip=0x001439; 	R(JLE(loc_348f6));	// 121411 jle     short loc_348F6 ;~ 24ED:1439
cs=0x24ed;eip=0x00143b; 	T(SUB(cx, ax));	// 121412 sub     cx, ax ;~ 24ED:143B
cs=0x24ed;eip=0x00143d; 	R(JBE(locret_34929));	// 121413 jbe     short locret_34929 ;~ 24ED:143D
cs=0x24ed;eip=0x00143f; 	T(ADD(bx, ax));	// 121414 add     bx, ax ;~ 24ED:143F
loc_348f1:
	// 8076 
cs=0x24ed;eip=0x001441; 	T(ADD(si, di));	// 121417 add     si, di ;~ 24ED:1441
cs=0x24ed;eip=0x001443; 	T(DEC(ax));	// 121418 dec     ax ;~ 24ED:1443
cs=0x24ed;eip=0x001444; 	R(JNZ(loc_348f1));	// 121419 jnz     short loc_348F1 ;~ 24ED:1444
loc_348f6:
	// 8077 
cs=0x24ed;eip=0x001446; 	T(MOV(ax, bx));	// 121422 mov     ax, bx ;~ 24ED:1446
cs=0x24ed;eip=0x001448; 	T(ADD(ax, cx));	// 121423 add     ax, cx ;~ 24ED:1448
cs=0x24ed;eip=0x00144a; 	T(SUB(ax, *(dw*)(raddr(ss,bp+6))));	// 121424 sub     ax, [bp+6] ;~ 24ED:144A
cs=0x24ed;eip=0x00144d; 	R(JBE(loc_34903));	// 121425 jbe     short loc_34903 ;~ 24ED:144D
cs=0x24ed;eip=0x00144f; 	T(SUB(cx, ax));	// 121426 sub     cx, ax ;~ 24ED:144F
cs=0x24ed;eip=0x001451; 	R(JBE(locret_34929));	// 121427 jbe     short locret_34929 ;~ 24ED:1451
loc_34903:
	// 8078 
cs=0x24ed;eip=0x001453; 	T(MOV(ax, dx));	// 121430 mov     ax, dx ;~ 24ED:1453
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001455; 	T(ADD(ax, *(dw*)(((db*)&word_349fc))));	// 121431 add     ax, cs:word_349FC ;~ 24ED:1455
cs=0x24ed;eip=0x00145a; 	T(SUB(ax, *(dw*)(raddr(ss,bp+4))));	// 121432 sub     ax, [bp+4] ;~ 24ED:145A
cs=0x24ed;eip=0x00145d; 	R(JG(loc_3496e));	// 121433 jg      short loc_3496E ;~ 24ED:145D
cs=0x24ed;eip=0x00145f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 121434 mov     ax, [bp+0] ;~ 24ED:145F
cs=0x24ed;eip=0x001462; 	T(SUB(ax, dx));	// 121435 sub     ax, dx ;~ 24ED:1462
cs=0x24ed;eip=0x001464; 	R(JG(loc_3492a));	// 121436 jg      short loc_3492A ;~ 24ED:1464
cs=0x24ed;eip=0x001466; 	T(MOV(ax, di));	// 121437 mov     ax, di ;~ 24ED:1466
cs=0x24ed;eip=0x001468; 	T(SHR(ax, 1));	// 121438 shr     ax, 1 ;~ 24ED:1468
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00146a; 	X(MOV(*(dw*)(((db*)&word_349fc)), ax));	// 121439 mov     cs:word_349FC, ax ;~ 24ED:146A
cs=0x24ed;eip=0x00146e; 	R(CALL(sub_340a8,0));	// 121440 call    sub_340A8 ;~ 24ED:146E
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001471; 	T(MOV(dx, *(dw*)(((db*)&word_3364d))));	// 121441 mov     dx, cs:word_3364D ;~ 24ED:1471
cs=0x24ed;eip=0x001476; __disp=byte_349fb;
	R(JMP(__dispatch_call));	// 121442 jmp     near ptr byte_349FB ;~ 24ED:1476
locret_34929:
	// 8079 
cs=0x24ed;eip=0x001479; 	R(RETF(0));	// 121447 retf ;~ 24ED:1479
loc_3492a:
	// 8080 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00147a; 	X(SUB(*(dw*)(((db*)&word_349fc)), ax));	// 121451 sub     cs:word_349FC, ax ;~ 24ED:147A
cs=0x24ed;eip=0x00147f; 	R(JLE(locret_34929));	// 121452 jle     short locret_34929 ;~ 24ED:147F
cs=0x24ed;eip=0x001481; 	X(PUSH(si));	// 121453 push    si ;~ 24ED:1481
cs=0x24ed;eip=0x001482; 	T(ADD(dx, ax));	// 121454 add     dx, ax ;~ 24ED:1482
cs=0x24ed;eip=0x001484; 	T(MOV(si, ax));	// 121455 mov     si, ax ;~ 24ED:1484
cs=0x24ed;eip=0x001486; 	T(AND(si, 3));	// 121456 and     si, 3 ;~ 24ED:1486
cs=0x24ed;eip=0x001489; 	T(SHL(si, 1));	// 121457 shl     si, 1           ; switch 4 cases ;~ 24ED:1489
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00148b; 	T(MOV(si, *(dw*)(((db*)&jpt_34964)+si)));	// 121458 mov     si, cs:jpt_34964[si] ;~ 24ED:148B
cs=0x24ed;eip=0x001490; 	T(SHR(di, 1));	// 121459 shr     di, 1 ;~ 24ED:1490
cs=0x24ed;eip=0x001492; 	T(SHR(ax, 1));	// 121460 shr     ax, 1 ;~ 24ED:1492
cs=0x24ed;eip=0x001494; 	X(MOV(*(raddr(cs,si+2)), al));	// 121461 mov     cs:[si+2], al ;~ 24ED:1494
cs=0x24ed;eip=0x001498; 	T(SHR(ax, 1));	// 121462 shr     ax, 1 ;~ 24ED:1498
cs=0x24ed;eip=0x00149a; 	T(SUB(di, ax));	// 121463 sub     di, ax ;~ 24ED:149A
cs=0x24ed;eip=0x00149c; 	X(MOV(*(dw*)(raddr(cs,si+4)), di));	// 121464 mov     cs:[si+4], di ;~ 24ED:149C
cs=0x24ed;eip=0x0014a0; 	R(CALL(sub_340a8,0));	// 121465 call    sub_340A8 ;~ 24ED:14A0
cs=0x24ed;eip=0x0014a3; 	T(MOV(bp, si));	// 121466 mov     bp, si ;~ 24ED:14A3
cs=0x24ed;eip=0x0014a5; 	X(POP(si));	// 121467 pop     si ;~ 24ED:14A5
cs=0x24ed;eip=0x0014a6; 	T(MOV(ax, bp));	// 121468 mov     ax, bp ;~ 24ED:14A6
cs=0x24ed;eip=0x0014a8; 	T(SUB(ax, 0x15E6));	// 121469 sub     ax, 15E6h ;~ 24ED:14A8
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0014ab; 	X(MOV(*(&byte_34a95), al));	// 121470 mov     cs:byte_34A95, al ;~ 24ED:14AB
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0014af; 	T(MOV(dx, *(dw*)(((db*)&word_3364d))));	// 121471 mov     dx, cs:word_3364D ;~ 24ED:14AF
cs=0x24ed;eip=0x0014b4; __disp=bp;
	R(JMP(__dispatch_call));	// 121472 jmp     bp              ; switch jump ;~ 24ED:14B4
loc_3496e:
	// 8081 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0014be; 	X(SUB(*(dw*)(((db*)&word_349fc)), ax));	// 121481 sub     cs:word_349FC, ax ;~ 24ED:14BE
cs=0x24ed;eip=0x0014c3; 	R(JLE(locret_34929));	// 121482 jle     short locret_34929 ;~ 24ED:14C3
cs=0x24ed;eip=0x0014c5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 121483 mov     ax, [bp+0] ;~ 24ED:14C5
cs=0x24ed;eip=0x0014c8; 	T(SUB(ax, dx));	// 121484 sub     ax, dx ;~ 24ED:14C8
cs=0x24ed;eip=0x0014ca; 	R(JG(loc_3499e));	// 121485 jg      short loc_3499E ;~ 24ED:14CA
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0014cc; 	T(MOV(ax, *(dw*)(((db*)&word_349fc))));	// 121486 mov     ax, cs:word_349FC ;~ 24ED:14CC
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0014d0; 	X(MOV(*(dw*)(((db*)&word_34af5)), ax));	// 121487 mov     cs:word_34AF5, ax ;~ 24ED:14D0
cs=0x24ed;eip=0x0014d4; 	T(ADD(ax, 3));	// 121488 add     ax, 3 ;~ 24ED:14D4
cs=0x24ed;eip=0x0014d7; 	T(SHR(ax, 1));	// 121489 shr     ax, 1 ;~ 24ED:14D7
cs=0x24ed;eip=0x0014d9; 	T(AND(al, 0x0FE));	// 121490 and     al, 0FEh ;~ 24ED:14D9
cs=0x24ed;eip=0x0014db; 	T(SUB(di, ax));	// 121491 sub     di, ax ;~ 24ED:14DB
cs=0x24ed;eip=0x0014dd; 	T(MOV(ax, di));	// 121492 mov     ax, di ;~ 24ED:14DD
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0014df; 	X(MOV(*(&byte_34af3), al));	// 121493 mov     cs:byte_34AF3, al ;~ 24ED:14DF
cs=0x24ed;eip=0x0014e3; 	R(CALL(sub_340a8,0));	// 121494 call    sub_340A8 ;~ 24ED:14E3
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0014e6; 	T(MOV(dx, *(dw*)(((db*)&word_3364d))));	// 121495 mov     dx, cs:word_3364D ;~ 24ED:14E6
cs=0x24ed;eip=0x0014eb; __disp=byte_34af4;
	R(JMP(__dispatch_call));	// 121496 jmp     near ptr byte_34AF4 ;~ 24ED:14EB
loc_3499e:
	// 8082 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0014ee; 	X(SUB(*(dw*)(((db*)&word_349fc)), ax));	// 121500 sub     cs:word_349FC, ax ;~ 24ED:14EE
cs=0x24ed;eip=0x0014f3; 	R(JLE(locret_34929));	// 121501 jle     short locret_34929 ;~ 24ED:14F3
cs=0x24ed;eip=0x0014f5; 	X(PUSH(cx));	// 121502 push    cx ;~ 24ED:14F5
cs=0x24ed;eip=0x0014f6; 	T(MOV(cx, ax));	// 121503 mov     cx, ax ;~ 24ED:14F6
cs=0x24ed;eip=0x0014f8; 	T(SHR(cx, 1));	// 121504 shr     cx, 1 ;~ 24ED:14F8
cs=0x24ed;eip=0x0014fa; 	T(ADD(si, cx));	// 121505 add     si, cx ;~ 24ED:14FA
cs=0x24ed;eip=0x0014fc; 	X(PUSH(si));	// 121506 push    si ;~ 24ED:14FC
cs=0x24ed;eip=0x0014fd; 	T(ADD(dx, ax));	// 121507 add     dx, ax ;~ 24ED:14FD
cs=0x24ed;eip=0x0014ff; 	T(MOV(si, ax));	// 121508 mov     si, ax ;~ 24ED:14FF
cs=0x24ed;eip=0x001501; 	T(AND(si, 3));	// 121509 and     si, 3 ;~ 24ED:1501
cs=0x24ed;eip=0x001504; 	T(SHL(si, 1));	// 121510 shl     si, 1 ;~ 24ED:1504
cs=0x24ed;eip=0x001506; 	T(MOV(si, *(dw*)(raddr(cs,si+0x1543))));	// 121511 mov     si, cs:[si+1543h] ;~ 24ED:1506
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00150b; 	T(ADD(ax, *(dw*)(((db*)&word_349fc))));	// 121512 add     ax, cs:word_349FC ;~ 24ED:150B
cs=0x24ed;eip=0x001510; 	T(ADD(ax, 3));	// 121513 add     ax, 3 ;~ 24ED:1510
cs=0x24ed;eip=0x001513; 	T(SHR(ax, 1));	// 121514 shr     ax, 1 ;~ 24ED:1513
cs=0x24ed;eip=0x001515; 	T(AND(al, 0x0FE));	// 121515 and     al, 0FEh ;~ 24ED:1515
cs=0x24ed;eip=0x001517; 	T(SUB(di, ax));	// 121516 sub     di, ax ;~ 24ED:1517
cs=0x24ed;eip=0x001519; 	T(MOV(ax, di));	// 121517 mov     ax, di ;~ 24ED:1519
cs=0x24ed;eip=0x00151b; 	T(ADD(ax, cx));	// 121518 add     ax, cx ;~ 24ED:151B
cs=0x24ed;eip=0x00151d; 	X(MOV(*(raddr(cs,si+2)), al));	// 121519 mov     cs:[si+2], al ;~ 24ED:151D
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001521; 	T(MOV(ax, *(dw*)(((db*)&word_349fc))));	// 121520 mov     ax, cs:word_349FC ;~ 24ED:1521
cs=0x24ed;eip=0x001525; 	X(MOV(*(dw*)(raddr(cs,si+4)), ax));	// 121521 mov     cs:[si+4], ax ;~ 24ED:1525
cs=0x24ed;eip=0x001529; 	R(CALL(sub_340a8,0));	// 121522 call    sub_340A8 ;~ 24ED:1529
cs=0x24ed;eip=0x00152c; 	T(MOV(bp, si));	// 121523 mov     bp, si ;~ 24ED:152C
cs=0x24ed;eip=0x00152e; 	X(POP(si));	// 121524 pop     si ;~ 24ED:152E
cs=0x24ed;eip=0x00152f; 	X(POP(cx));	// 121525 pop     cx ;~ 24ED:152F
cs=0x24ed;eip=0x001530; 	T(MOV(ax, bp));	// 121526 mov     ax, bp ;~ 24ED:1530
cs=0x24ed;eip=0x001532; 	T(SUB(ax, 0x16FB));	// 121527 sub     ax, 16FBh ;~ 24ED:1532
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001535; 	X(MOV(*(&byte_34baa), al));	// 121528 mov     cs:byte_34BAA, al ;~ 24ED:1535
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001539; 	T(MOV(dx, *(dw*)(((db*)&word_3364d))));	// 121529 mov     dx, cs:word_3364D ;~ 24ED:1539
cs=0x24ed;eip=0x00153e; 	T(ADD(bp, 3));	// 121530 add     bp, 3 ;~ 24ED:153E
cs=0x24ed;eip=0x001541; __disp=bp;
	R(JMP(__dispatch_call));	// 121531 jmp     bp ;~ 24ED:1541
loc_34a5e:
	// 8083 
cs=0x24ed;eip=0x0015ae; 	T(ADD(si, 0x12));	// 121552 add     si, 12h         ; jumptable 00034964 case 0 ;~ 24ED:15AE
cs=0x24ed;eip=0x0015b1; 	T(MOV(bp, 0x1234));	// 121553 mov     bp, 1234h ;~ 24ED:15B1
cs=0x24ed;eip=0x0015b4; 	X(PUSH(di));	// 121554 push    di ;~ 24ED:15B4
loc_34a65:
	// 8084 
cs=0x24ed;eip=0x0015b5; 	T(LODSW);	// 121558 lodsw ;~ 24ED:15B5
cs=0x24ed;eip=0x0015b6; 	T(MOV(bl, al));	// 121559 mov     bl, al ;~ 24ED:15B6
cs=0x24ed;eip=0x0015b8; 	T(AND(al, dl));	// 121560 and     al, dl ;~ 24ED:15B8
cs=0x24ed;eip=0x0015ba; 	R(JZ(loc_34a97));	// 121561 jz      short loc_34A97 ;~ 24ED:15BA
cs=0x24ed;eip=0x0015bc; 	T(ADD(al, dh));	// 121562 add     al, dh ;~ 24ED:15BC
cs=0x24ed;eip=0x0015be; 	X(STOSB);	// 121563 stosb ;~ 24ED:15BE
cs=0x24ed;eip=0x0015bf; 	T(SHR(bl, 4));	// 121564 shr     bl, 4 ;~ 24ED:15BF
cs=0x24ed;eip=0x0015c2; 	R(JZ(loc_34aa1));	// 121565 jz      short loc_34AA1 ;~ 24ED:15C2
cs=0x24ed;eip=0x0015c4; 	T(MOV(al, bl));	// 121566 mov     al, bl ;~ 24ED:15C4
loc_34a76:
	// 8085 
cs=0x24ed;eip=0x0015c6; 	T(ADD(al, dh));	// 121570 add     al, dh ;~ 24ED:15C6
cs=0x24ed;eip=0x0015c8; 	X(STOSB);	// 121571 stosb ;~ 24ED:15C8
cs=0x24ed;eip=0x0015c9; 	T(MOV(al, ah));	// 121572 mov     al, ah ;~ 24ED:15C9
loc_34a7b:
	// 8086 
cs=0x24ed;eip=0x0015cb; 	T(AND(al, dl));	// 121576 and     al, dl ;~ 24ED:15CB
cs=0x24ed;eip=0x0015cd; 	R(JZ(loc_34ab5));	// 121577 jz      short loc_34AB5 ;~ 24ED:15CD
cs=0x24ed;eip=0x0015cf; 	T(ADD(al, dh));	// 121578 add     al, dh ;~ 24ED:15CF
cs=0x24ed;eip=0x0015d1; 	X(STOSB);	// 121579 stosb ;~ 24ED:15D1
cs=0x24ed;eip=0x0015d2; 	T(SHR(ah, 4));	// 121580 shr     ah, 4 ;~ 24ED:15D2
loc_34a85:
	// 8087 
cs=0x24ed;eip=0x0015d5; 	R(JZ(loc_34abd));	// 121583 jz      short loc_34ABD ;~ 24ED:15D5
cs=0x24ed;eip=0x0015d7; 	T(MOV(al, ah));	// 121584 mov     al, ah ;~ 24ED:15D7
loc_34a89:
	// 8088 
cs=0x24ed;eip=0x0015d9; 	T(ADD(al, dh));	// 121587 add     al, dh ;~ 24ED:15D9
cs=0x24ed;eip=0x0015db; 	X(STOSB);	// 121588 stosb ;~ 24ED:15DB
cs=0x24ed;eip=0x0015dc; 	T(DEC(bp));	// 121589 dec     bp ;~ 24ED:15DC
cs=0x24ed;eip=0x0015dd; 	R(JNZ(loc_34a65));	// 121590 jnz     short loc_34A65 ;~ 24ED:15DD
cs=0x24ed;eip=0x0015df; 	X(POP(di));	// 121591 pop     di ;~ 24ED:15DF
cs=0x24ed;eip=0x0015e0; 	T(ADD(di, 0x140));	// 121592 add     di, 140h ;~ 24ED:15E0
cs=0x24ed;eip=0x0015e6; 	R(RETF(0));	// 121597 retf ;~ 24ED:15E6
loc_34a97:
	// 8089 
cs=0x24ed;eip=0x0015e7; 	T(INC(di));	// 121601 inc     di ;~ 24ED:15E7
cs=0x24ed;eip=0x0015e8; 	T(OR(al, bl));	// 121602 or      al, bl ;~ 24ED:15E8
cs=0x24ed;eip=0x0015ea; 	R(JZ(loc_34aa1));	// 121603 jz      short loc_34AA1 ;~ 24ED:15EA
cs=0x24ed;eip=0x0015ec; 	T(SHR(al, 4));	// 121604 shr     al, 4 ;~ 24ED:15EC
cs=0x24ed;eip=0x0015ef; 	R(JMP(loc_34a76));	// 121605 jmp     short loc_34A76 ;~ 24ED:15EF
loc_34aa1:
	// 8090 
cs=0x24ed;eip=0x0015f1; 	T(INC(di));	// 121610 inc     di ;~ 24ED:15F1
cs=0x24ed;eip=0x0015f2; 	T(MOV(al, ah));	// 121611 mov     al, ah ;~ 24ED:15F2
cs=0x24ed;eip=0x0015f4; 	T(OR(al, al));	// 121612 or      al, al ;~ 24ED:15F4
cs=0x24ed;eip=0x0015f6; 	R(JNZ(loc_34a7b));	// 121613 jnz     short loc_34A7B ;~ 24ED:15F6
loc_34aa8:
	// 8091 
cs=0x24ed;eip=0x0015f8; 	T(ADD(di, 2));	// 121616 add     di, 2 ;~ 24ED:15F8
cs=0x24ed;eip=0x0015fb; 	T(DEC(bp));	// 121617 dec     bp ;~ 24ED:15FB
cs=0x24ed;eip=0x0015fc; 	R(JNZ(loc_34a65));	// 121618 jnz     short loc_34A65 ;~ 24ED:15FC
loc_34aae:
	// 8092 
cs=0x24ed;eip=0x0015fe; 	X(POP(di));	// 121621 pop     di ;~ 24ED:15FE
cs=0x24ed;eip=0x0015ff; 	T(ADD(di, 0x140));	// 121622 add     di, 140h ;~ 24ED:15FF
cs=0x24ed;eip=0x001603; __disp=byte_34a94;
	R(JMP(__dispatch_call));	// 121623 jmp     short near ptr byte_34A94 ;~ 24ED:1603
loc_34ab5:
	// 8093 
cs=0x24ed;eip=0x001605; 	T(SHR(ah, 4));	// 121627 shr     ah, 4 ;~ 24ED:1605
cs=0x24ed;eip=0x001608; 	R(JZ(loc_34aa8));	// 121628 jz      short loc_34AA8 ;~ 24ED:1608
cs=0x24ed;eip=0x00160a; 	T(INC(di));	// 121629 inc     di ;~ 24ED:160A
cs=0x24ed;eip=0x00160b; 	R(JMP(loc_34a85));	// 121630 jmp     short loc_34A85 ;~ 24ED:160B
loc_34abd:
	// 8094 
cs=0x24ed;eip=0x00160d; 	T(INC(di));	// 121635 inc     di ;~ 24ED:160D
cs=0x24ed;eip=0x00160e; 	T(DEC(bp));	// 121636 dec     bp ;~ 24ED:160E
cs=0x24ed;eip=0x00160f; 	R(JNZ(loc_34a65));	// 121637 jnz     short loc_34A65 ;~ 24ED:160F
cs=0x24ed;eip=0x001611; 	R(JMP(loc_34aae));	// 121638 jmp     short loc_34AAE ;~ 24ED:1611
loc_34ac3:
	// 8095 
cs=0x24ed;eip=0x001613; 	T(ADD(si, 0x12));	// 121643 add     si, 12h         ; jumptable 00034964 case 3 ;~ 24ED:1613
cs=0x24ed;eip=0x001616; 	T(MOV(bp, 0x1234));	// 121644 mov     bp, 1234h ;~ 24ED:1616
cs=0x24ed;eip=0x001619; 	X(PUSH(di));	// 121645 push    di ;~ 24ED:1619
cs=0x24ed;eip=0x00161a; 	T(LODSB);	// 121646 lodsb ;~ 24ED:161A
cs=0x24ed;eip=0x00161b; 	T(CMP(al, dl));	// 121647 cmp     al, dl ;~ 24ED:161B
cs=0x24ed;eip=0x00161d; 	R(JBE(loc_34abd));	// 121648 jbe     short loc_34ABD ;~ 24ED:161D
cs=0x24ed;eip=0x00161f; 	T(SHR(al, 4));	// 121649 shr     al, 4 ;~ 24ED:161F
cs=0x24ed;eip=0x001622; 	R(JMP(loc_34a89));	// 121650 jmp     short loc_34A89 ;~ 24ED:1622
loc_34ad4:
	// 8096 
cs=0x24ed;eip=0x001624; 	T(ADD(si, 0x12));	// 121655 add     si, 12h         ; jumptable 00034964 case 2 ;~ 24ED:1624
cs=0x24ed;eip=0x001627; 	T(MOV(bp, 0x1234));	// 121656 mov     bp, 1234h ;~ 24ED:1627
cs=0x24ed;eip=0x00162a; 	X(PUSH(di));	// 121657 push    di ;~ 24ED:162A
cs=0x24ed;eip=0x00162b; 	T(LODSB);	// 121658 lodsb ;~ 24ED:162B
cs=0x24ed;eip=0x00162c; 	T(MOV(ah, al));	// 121659 mov     ah, al ;~ 24ED:162C
cs=0x24ed;eip=0x00162e; 	R(JMP(loc_34a7b));	// 121660 jmp     short loc_34A7B ;~ 24ED:162E
loc_34ae0:
	// 8097 
cs=0x24ed;eip=0x001630; 	T(ADD(si, 0x12));	// 121665 add     si, 12h         ; jumptable 00034964 case 1 ;~ 24ED:1630
cs=0x24ed;eip=0x001633; 	T(MOV(bp, 0x1234));	// 121666 mov     bp, 1234h ;~ 24ED:1633
cs=0x24ed;eip=0x001636; 	X(PUSH(di));	// 121667 push    di ;~ 24ED:1636
cs=0x24ed;eip=0x001637; 	T(LODSW);	// 121668 lodsw ;~ 24ED:1637
cs=0x24ed;eip=0x001638; 	T(AND(al, 0x0F0));	// 121669 and     al, 0F0h ;~ 24ED:1638
cs=0x24ed;eip=0x00163a; 	R(JZ(loc_34aa1));	// 121670 jz      short loc_34AA1 ;~ 24ED:163A
cs=0x24ed;eip=0x00163c; 	T(SHR(al, 4));	// 121671 shr     al, 4 ;~ 24ED:163C
cs=0x24ed;eip=0x00163f; 	R(JMP(loc_34a76));	// 121672 jmp     short loc_34A76 ;~ 24ED:163F
ret_24ed_16fb:
	// 8098 
cs=0x24ed;eip=0x0016fb; 	R(RETF(0));	// 121698 retf ;~ 24ED:16FB
loc_34c0c:
	// 8099 
cs=0x24ed;eip=0x00175c; 	T(XOR(ch, ch));	// 121713 xor     ch, ch ;~ 24ED:175C
cs=0x24ed;eip=0x00175e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+2))));	// 121714 mov     ax, [bp+2] ;~ 24ED:175E
cs=0x24ed;eip=0x001761; 	T(SUB(ax, bx));	// 121715 sub     ax, bx ;~ 24ED:1761
cs=0x24ed;eip=0x001763; 	R(JLE(loc_34c20));	// 121716 jle     short loc_34C20 ;~ 24ED:1763
cs=0x24ed;eip=0x001765; 	T(SUB(cx, ax));	// 121717 sub     cx, ax ;~ 24ED:1765
cs=0x24ed;eip=0x001767; 	R(JBE(locret_34c49));	// 121718 jbe     short locret_34C49 ;~ 24ED:1767
cs=0x24ed;eip=0x001769; 	T(ADD(bx, ax));	// 121719 add     bx, ax ;~ 24ED:1769
loc_34c1b:
	// 8100 
cs=0x24ed;eip=0x00176b; 	T(ADD(si, di));	// 121722 add     si, di ;~ 24ED:176B
cs=0x24ed;eip=0x00176d; 	T(DEC(ax));	// 121723 dec     ax ;~ 24ED:176D
cs=0x24ed;eip=0x00176e; 	R(JNZ(loc_34c1b));	// 121724 jnz     short loc_34C1B ;~ 24ED:176E
loc_34c20:
	// 8101 
cs=0x24ed;eip=0x001770; 	T(MOV(ax, bx));	// 121727 mov     ax, bx ;~ 24ED:1770
cs=0x24ed;eip=0x001772; 	T(ADD(ax, cx));	// 121728 add     ax, cx ;~ 24ED:1772
cs=0x24ed;eip=0x001774; 	T(SUB(ax, *(dw*)(raddr(ss,bp+6))));	// 121729 sub     ax, [bp+6] ;~ 24ED:1774
cs=0x24ed;eip=0x001777; 	R(JBE(loc_34c2d));	// 121730 jbe     short loc_34C2D ;~ 24ED:1777
cs=0x24ed;eip=0x001779; 	T(SUB(cx, ax));	// 121731 sub     cx, ax ;~ 24ED:1779
cs=0x24ed;eip=0x00177b; 	R(JBE(locret_34c49));	// 121732 jbe     short locret_34C49 ;~ 24ED:177B
loc_34c2d:
	// 8102 
cs=0x24ed;eip=0x00177d; 	T(MOV(ax, dx));	// 121735 mov     ax, dx ;~ 24ED:177D
cs=0x24ed;eip=0x00177f; 	T(ADD(ax, di));	// 121736 add     ax, di ;~ 24ED:177F
cs=0x24ed;eip=0x001781; 	T(SUB(ax, *(dw*)(raddr(ss,bp+4))));	// 121737 sub     ax, [bp+4] ;~ 24ED:1781
cs=0x24ed;eip=0x001784; 	R(JG(loc_34c78));	// 121738 jg      short loc_34C78 ;~ 24ED:1784
cs=0x24ed;eip=0x001786; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 121739 mov     ax, [bp+0] ;~ 24ED:1786
cs=0x24ed;eip=0x001789; 	T(SUB(ax, dx));	// 121740 sub     ax, dx ;~ 24ED:1789
cs=0x24ed;eip=0x00178b; 	R(JG(loc_34c4a));	// 121741 jg      short loc_34C4A ;~ 24ED:178B
cs=0x24ed;eip=0x00178d; 	T(MOV(bp, di));	// 121742 mov     bp, di ;~ 24ED:178D
cs=0x24ed;eip=0x00178f; 	X(PUSH(di));	// 121743 push    di ;~ 24ED:178F
cs=0x24ed;eip=0x001790; 	R(CALL(sub_340a8,0));	// 121744 call    sub_340A8 ;~ 24ED:1790
cs=0x24ed;eip=0x001793; 	X(POP(dx));	// 121745 pop     dx ;~ 24ED:1793
cs=0x24ed;eip=0x001794; 	T(MOV(bx, cx));	// 121746 mov     bx, cx ;~ 24ED:1794
cs=0x24ed;eip=0x001796; 	R(JMP(loc_34c5b));	// 121747 jmp     short loc_34C5B ;~ 24ED:1796
locret_34c49:
	// 8103 
cs=0x24ed;eip=0x001799; 	R(RETF(0));	// 121754 retf ;~ 24ED:1799
loc_34c4a:
	// 8104 
cs=0x24ed;eip=0x00179a; 	T(MOV(bp, di));	// 121758 mov     bp, di ;~ 24ED:179A
cs=0x24ed;eip=0x00179c; 	T(SUB(di, ax));	// 121759 sub     di, ax ;~ 24ED:179C
cs=0x24ed;eip=0x00179e; 	R(JLE(locret_34c49));	// 121760 jle     short locret_34C49 ;~ 24ED:179E
cs=0x24ed;eip=0x0017a0; 	T(ADD(dx, ax));	// 121761 add     dx, ax ;~ 24ED:17A0
cs=0x24ed;eip=0x0017a2; 	T(ADD(si, ax));	// 121762 add     si, ax ;~ 24ED:17A2
cs=0x24ed;eip=0x0017a4; 	X(PUSH(di));	// 121763 push    di ;~ 24ED:17A4
cs=0x24ed;eip=0x0017a5; 	R(CALL(sub_340a8,0));	// 121764 call    sub_340A8 ;~ 24ED:17A5
cs=0x24ed;eip=0x0017a8; 	X(POP(dx));	// 121765 pop     dx ;~ 24ED:17A8
cs=0x24ed;eip=0x0017a9; 	T(MOV(bx, cx));	// 121766 mov     bx, cx ;~ 24ED:17A9
loc_34c5b:
	// 8105 
cs=0x24ed;eip=0x0017ab; 	T(SUB(bp, dx));	// 121770 sub     bp, dx ;~ 24ED:17AB
loc_34c5d:
	// 8106 
cs=0x24ed;eip=0x0017ad; 	T(MOV(cx, dx));	// 121773 mov     cx, dx ;~ 24ED:17AD
loc_34c5f:
	// 8107 
cs=0x24ed;eip=0x0017af; 	T(LODSB);	// 121777 lodsb ;~ 24ED:17AF
cs=0x24ed;eip=0x0017b0; 	T(OR(al, al));	// 121778 or      al, al ;~ 24ED:17B0
cs=0x24ed;eip=0x0017b2; 	R(JZ(loc_34c73));	// 121779 jz      short loc_34C73 ;~ 24ED:17B2
cs=0x24ed;eip=0x0017b4; 	X(STOSB);	// 121780 stosb ;~ 24ED:17B4
cs=0x24ed;eip=0x0017b5; 	R(LOOP(loc_34c5f));	// 121781 loop    loc_34C5F ;~ 24ED:17B5
loc_34c67:
	// 8108 
cs=0x24ed;eip=0x0017b7; 	T(SUB(di, dx));	// 121784 sub     di, dx ;~ 24ED:17B7
cs=0x24ed;eip=0x0017b9; 	T(ADD(si, bp));	// 121785 add     si, bp ;~ 24ED:17B9
cs=0x24ed;eip=0x0017bb; 	T(ADD(di, 0x140));	// 121786 add     di, 140h ;~ 24ED:17BB
cs=0x24ed;eip=0x0017bf; 	T(DEC(bx));	// 121787 dec     bx ;~ 24ED:17BF
cs=0x24ed;eip=0x0017c0; 	R(JNZ(loc_34c5d));	// 121788 jnz     short loc_34C5D ;~ 24ED:17C0
cs=0x24ed;eip=0x0017c2; 	R(RETF(0));	// 121789 retf ;~ 24ED:17C2
loc_34c73:
	// 8109 
cs=0x24ed;eip=0x0017c3; 	T(INC(di));	// 121793 inc     di ;~ 24ED:17C3
cs=0x24ed;eip=0x0017c4; 	R(LOOP(loc_34c5f));	// 121794 loop    loc_34C5F ;~ 24ED:17C4
cs=0x24ed;eip=0x0017c6; 	R(JMP(loc_34c67));	// 121795 jmp     short loc_34C67 ;~ 24ED:17C6
loc_34c78:
	// 8110 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0017c8; 	X(MOV(*(dw*)(((db*)&word_349fc)), di));	// 121799 mov     cs:word_349FC, di ;~ 24ED:17C8
cs=0x24ed;eip=0x0017cd; 	T(SUB(di, ax));	// 121800 sub     di, ax ;~ 24ED:17CD
cs=0x24ed;eip=0x0017cf; 	R(JLE(locret_34c49));	// 121801 jle     short locret_34C49 ;~ 24ED:17CF
cs=0x24ed;eip=0x0017d1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 121802 mov     ax, [bp+0] ;~ 24ED:17D1
cs=0x24ed;eip=0x0017d4; 	T(SUB(ax, dx));	// 121803 sub     ax, dx ;~ 24ED:17D4
cs=0x24ed;eip=0x0017d6; 	R(JG(loc_34c96));	// 121804 jg      short loc_34C96 ;~ 24ED:17D6
cs=0x24ed;eip=0x0017d8; 	X(PUSH(di));	// 121805 push    di ;~ 24ED:17D8
cs=0x24ed;eip=0x0017d9; 	R(CALL(sub_340a8,0));	// 121806 call    sub_340A8 ;~ 24ED:17D9
cs=0x24ed;eip=0x0017dc; 	X(POP(dx));	// 121807 pop     dx ;~ 24ED:17DC
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0017dd; 	T(MOV(bp, *(dw*)(((db*)&word_349fc))));	// 121808 mov     bp, cs:word_349FC ;~ 24ED:17DD
cs=0x24ed;eip=0x0017e2; 	T(MOV(bx, cx));	// 121809 mov     bx, cx ;~ 24ED:17E2
cs=0x24ed;eip=0x0017e4; 	R(JMP(loc_34c5b));	// 121810 jmp     short loc_34C5B ;~ 24ED:17E4
loc_34c96:
	// 8111 
cs=0x24ed;eip=0x0017e6; 	T(SUB(di, ax));	// 121814 sub     di, ax ;~ 24ED:17E6
cs=0x24ed;eip=0x0017e8; 	R(JLE(locret_34c49));	// 121815 jle     short locret_34C49 ;~ 24ED:17E8
cs=0x24ed;eip=0x0017ea; 	T(ADD(si, ax));	// 121816 add     si, ax ;~ 24ED:17EA
cs=0x24ed;eip=0x0017ec; 	T(ADD(dx, ax));	// 121817 add     dx, ax ;~ 24ED:17EC
cs=0x24ed;eip=0x0017ee; 	X(PUSH(di));	// 121818 push    di ;~ 24ED:17EE
cs=0x24ed;eip=0x0017ef; 	R(CALL(sub_340a8,0));	// 121819 call    sub_340A8 ;~ 24ED:17EF
cs=0x24ed;eip=0x0017f2; 	X(POP(dx));	// 121820 pop     dx ;~ 24ED:17F2
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0017f3; 	T(MOV(bp, *(dw*)(((db*)&word_349fc))));	// 121821 mov     bp, cs:word_349FC ;~ 24ED:17F3
cs=0x24ed;eip=0x0017f8; 	T(MOV(bx, cx));	// 121822 mov     bx, cx ;~ 24ED:17F8
cs=0x24ed;eip=0x0017fa; 	R(JMP(loc_34c5b));	// 121823 jmp     short loc_34C5B ;~ 24ED:17FA
loc_34cac:
	// 8112 
cs=0x24ed;eip=0x0017fc; 	T(LODSW);	// 121827 lodsw ;~ 24ED:17FC
cs=0x24ed;eip=0x0017fd; 	T(SUB(dx, ax));	// 121828 sub     dx, ax ;~ 24ED:17FD
cs=0x24ed;eip=0x0017ff; 	R(JNC(loc_34cb3));	// 121829 jnb     short loc_34CB3 ;~ 24ED:17FF
cs=0x24ed;eip=0x001801; 	T(XOR(dx, dx));	// 121830 xor     dx, dx ;~ 24ED:1801
loc_34cb3:
	// 8113 
cs=0x24ed;eip=0x001803; 	T(LODSW);	// 121833 lodsw ;~ 24ED:1803
cs=0x24ed;eip=0x001804; 	T(SUB(bx, ax));	// 121834 sub     bx, ax ;~ 24ED:1804
cs=0x24ed;eip=0x001806; 	R(JNC(loc_34cba));	// 121835 jnb     short loc_34CBA ;~ 24ED:1806
cs=0x24ed;eip=0x001808; 	T(XOR(bx, bx));	// 121836 xor     bx, bx ;~ 24ED:1808
loc_34cba:
	// 8114 
cs=0x24ed;eip=0x00180a; 	T(MOV(cx, 0x10));	// 121839 mov     cx, 10h ;~ 24ED:180A
cs=0x24ed;eip=0x00180d; 	T(CMP(bx, 0x0B8));	// 121840 cmp     bx, 0B8h ; '¸' ;~ 24ED:180D
cs=0x24ed;eip=0x001811; 	R(JBE(loc_34cc8));	// 121841 jbe     short loc_34CC8 ;~ 24ED:1811
cs=0x24ed;eip=0x001813; 	T(MOV(cx, 0x0C8));	// 121842 mov     cx, 0C8h ; 'È' ;~ 24ED:1813
cs=0x24ed;eip=0x001816; 	T(SUB(cx, bx));	// 121843 sub     cx, bx ;~ 24ED:1816
loc_34cc8:
	// 8115 
cs=0x24ed;eip=0x001818; 	R(CALL(sub_340a8,0));	// 121846 call    sub_340A8 ;~ 24ED:1818
cs=0x24ed;eip=0x00181b; 	T(MOV(ax, 0x0A000));	// 121847 mov     ax, 0A000h ;~ 24ED:181B
cs=0x24ed;eip=0x00181e; 	T(MOV(es, ax));	// 121848 mov     es, ax ;~ 24ED:181E
cs=0x24ed;eip=0x001820; 	T(SUB(dx, 0x140));	// 121850 sub     dx, 140h ;~ 24ED:1820
cs=0x24ed;eip=0x001824; 	T(NEG(dx));	// 121851 neg     dx ;~ 24ED:1824
cs=0x24ed;eip=0x001826; 	T(CMP(dx, 0x10));	// 121852 cmp     dx, 10h ;~ 24ED:1826
cs=0x24ed;eip=0x001829; 	R(JBE(loc_34cde));	// 121853 jbe     short loc_34CDE ;~ 24ED:1829
cs=0x24ed;eip=0x00182b; 	T(MOV(dx, 0x10));	// 121854 mov     dx, 10h ;~ 24ED:182B
loc_34cde:
	// 8116 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00182e; 	X(MOV(*(dw*)(((db*)&word_3363c)), dx));	// 121857 mov     cs:word_3363C, dx ;~ 24ED:182E
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001833; 	X(MOV(*(dw*)(((db*)&word_3363e)), cx));	// 121858 mov     cs:word_3363E, cx ;~ 24ED:1833
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001838; 	X(MOV(*(dw*)(((db*)&word_3363a)), di));	// 121859 mov     cs:word_3363A, di ;~ 24ED:1838
cs=0x24ed;eip=0x00183d; 	T(MOV(bx, 0x0FA00));	// 121860 mov     bx, 0FA00h ;~ 24ED:183D
cs=0x24ed;eip=0x001840; 	T(SHR(dx, 1));	// 121861 shr     dx, 1 ;~ 24ED:1840
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001842; 	X(MOV(*(dw*)(((db*)&word_33640)), dx));	// 121862 mov     cs:word_33640, dx ;~ 24ED:1842
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001847; 	X(MOV(*(dw*)(((db*)&word_33642)), cx));	// 121863 mov     cs:word_33642, cx ;~ 24ED:1847
loc_34cfc:
	// 8117 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00184c; 	T(MOV(cx, *(dw*)(((db*)&word_33640))));	// 121866 mov     cx, cs:word_33640 ;~ 24ED:184C
cs=0x24ed;eip=0x001851; 	T(MOV(bp, *(dw*)(raddr(ds,si+0x20))));	// 121867 mov     bp, [si+20h] ;~ 24ED:1851
cs=0x24ed;eip=0x001854; 	T(LODSW);	// 121868 lodsw ;~ 24ED:1854
cs=0x24ed;eip=0x001855; 	T(MOV(dx, ax));	// 121869 mov     dx, ax ;~ 24ED:1855
cs=0x24ed;eip=0x001857; 	R(JCXZ(loc_34d35));	// 121870 jcxz    short loc_34D35 ;~ 24ED:1857
loc_34d09:
	// 8118 
cs=0x24ed;eip=0x001859; 	T(MOV(ax, *(dw*)(raddr(es,di))));	// 121873 mov     ax, es:[di] ;~ 24ED:1859
cs=0x24ed;eip=0x00185c; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 121874 mov     es:[bx], ax ;~ 24ED:185C
cs=0x24ed;eip=0x00185f; 	T(ADD(bx, 2));	// 121875 add     bx, 2 ;~ 24ED:185F
cs=0x24ed;eip=0x001862; 	T(ROL(bp, 1));	// 121876 rol     bp, 1 ;~ 24ED:1862
cs=0x24ed;eip=0x001864; 	T(ADD(dx, dx));	// 121877 add     dx, dx ;~ 24ED:1864
cs=0x24ed;eip=0x001866; 	R(JC(loc_34d22));	// 121878 jb      short loc_34D22 ;~ 24ED:1866
cs=0x24ed;eip=0x001868; 	T(XOR(al, al));	// 121879 xor     al, al ;~ 24ED:1868
cs=0x24ed;eip=0x00186a; 	T(TEST(bp, 1));	// 121880 test    bp, 1 ;~ 24ED:186A
cs=0x24ed;eip=0x00186e; 	R(JZ(loc_34d22));	// 121881 jz      short loc_34D22 ;~ 24ED:186E
cs=0x24ed;eip=0x001870; 	T(MOV(al, 0x0F));	// 121882 mov     al, 0Fh ;~ 24ED:1870
loc_34d22:
	// 8119 
cs=0x24ed;eip=0x001872; 	T(ROL(bp, 1));	// 121886 rol     bp, 1 ;~ 24ED:1872
cs=0x24ed;eip=0x001874; 	T(ADD(dx, dx));	// 121887 add     dx, dx ;~ 24ED:1874
cs=0x24ed;eip=0x001876; 	R(JC(loc_34d32));	// 121888 jb      short loc_34D32 ;~ 24ED:1876
cs=0x24ed;eip=0x001878; 	T(XOR(ah, ah));	// 121889 xor     ah, ah ;~ 24ED:1878
cs=0x24ed;eip=0x00187a; 	T(TEST(bp, 1));	// 121890 test    bp, 1 ;~ 24ED:187A
cs=0x24ed;eip=0x00187e; 	R(JZ(loc_34d32));	// 121891 jz      short loc_34D32 ;~ 24ED:187E
cs=0x24ed;eip=0x001880; 	T(MOV(ah, 0x0F));	// 121892 mov     ah, 0Fh ;~ 24ED:1880
loc_34d32:
	// 8120 
cs=0x24ed;eip=0x001882; 	X(STOSW);	// 121896 stosw ;~ 24ED:1882
cs=0x24ed;eip=0x001883; 	R(LOOP(loc_34d09));	// 121897 loop    loc_34D09 ;~ 24ED:1883
loc_34d35:
	// 8121 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001885; 	T(TEST(*(db*)(((db*)&word_3363c)), 1));	// 121900 test    byte ptr cs:word_3363C, 1 ;~ 24ED:1885
cs=0x24ed;eip=0x00188b; 	R(JZ(loc_34d53));	// 121901 jz      short loc_34D53 ;~ 24ED:188B
cs=0x24ed;eip=0x00188d; 	T(MOV(al, *(raddr(es,di))));	// 121902 mov     al, es:[di] ;~ 24ED:188D
cs=0x24ed;eip=0x001890; 	X(MOV(*(raddr(es,bx)), al));	// 121903 mov     es:[bx], al ;~ 24ED:1890
cs=0x24ed;eip=0x001893; 	T(INC(bx));	// 121904 inc     bx ;~ 24ED:1893
cs=0x24ed;eip=0x001894; 	T(INC(di));	// 121905 inc     di ;~ 24ED:1894
cs=0x24ed;eip=0x001895; 	T(ADD(dx, dx));	// 121906 add     dx, dx ;~ 24ED:1895
cs=0x24ed;eip=0x001897; 	R(JC(loc_34d53));	// 121907 jb      short loc_34D53 ;~ 24ED:1897
cs=0x24ed;eip=0x001899; 	T(XOR(al, al));	// 121908 xor     al, al ;~ 24ED:1899
cs=0x24ed;eip=0x00189b; 	T(ADD(bp, bp));	// 121909 add     bp, bp ;~ 24ED:189B
cs=0x24ed;eip=0x00189d; 	R(JNC(loc_34d51));	// 121910 jnb     short loc_34D51 ;~ 24ED:189D
cs=0x24ed;eip=0x00189f; 	T(MOV(al, 0x0F));	// 121911 mov     al, 0Fh ;~ 24ED:189F
loc_34d51:
	// 8122 
cs=0x24ed;eip=0x0018a1; 	T(DEC(di));	// 121914 dec     di ;~ 24ED:18A1
cs=0x24ed;eip=0x0018a2; 	X(STOSB);	// 121915 stosb ;~ 24ED:18A2
loc_34d53:
	// 8123 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0018a3; 	T(SUB(di, *(dw*)(((db*)&word_3363c))));	// 121919 sub     di, cs:word_3363C ;~ 24ED:18A3
cs=0x24ed;eip=0x0018a8; 	T(ADD(di, 0x140));	// 121920 add     di, 140h ;~ 24ED:18A8
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0018ac; 	X(DEC(*(dw*)(((db*)&word_33642))));	// 121921 dec     cs:word_33642 ;~ 24ED:18AC
cs=0x24ed;eip=0x0018b1; 	R(JNZ(loc_34cfc));	// 121922 jnz     short loc_34CFC ;~ 24ED:18B1
cs=0x24ed;eip=0x0018b3; 	R(RETF(0));	// 121923 retf ;~ 24ED:18B3
loc_34d64:
	// 8124 
cs=0x24ed;eip=0x0018b4; 	X(PUSHA);	// 121927 pusha ;~ 24ED:18B4
cs=0x24ed;eip=0x0018b5; 	X(PUSH(ds));	// 121928 push    ds ;~ 24ED:18B5
cs=0x24ed;eip=0x0018b6; 	X(PUSH(es));	// 121929 push    es ;~ 24ED:18B6
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0018b7; 	T(MOV(bp, *(dw*)(((db*)&word_3363a))));	// 121930 mov     bp, cs:word_3363A ;~ 24ED:18B7
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0018bc; 	T(MOV(bx, *(dw*)(((db*)&word_3363c))));	// 121931 mov     bx, cs:word_3363C ;~ 24ED:18BC
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0018c1; 	T(MOV(dx, *(dw*)(((db*)&word_3363e))));	// 121932 mov     dx, cs:word_3363E ;~ 24ED:18C1
cs=0x24ed;eip=0x0018c6; 	T(MOV(ax, 0x0A000));	// 121933 mov     ax, 0A000h ;~ 24ED:18C6
cs=0x24ed;eip=0x0018c9; 	T(MOV(es, ax));	// 121934 mov     es, ax ;~ 24ED:18C9
cs=0x24ed;eip=0x0018cb; 	T(MOV(ds, ax));	// 121935 mov     ds, ax ;~ 24ED:18CB
cs=0x24ed;eip=0x0018cd; 	T(MOV(si, 0x0FA00));	// 121937 mov     si, 0FA00h ;~ 24ED:18CD
loc_34d80:
	// 8125 
cs=0x24ed;eip=0x0018d0; 	T(MOV(di, bp));	// 121940 mov     di, bp ;~ 24ED:18D0
cs=0x24ed;eip=0x0018d2; 	T(MOV(cx, bx));	// 121941 mov     cx, bx ;~ 24ED:18D2
	// 121942 rep movsb ;~ 24ED:18D4
cs=0x24ed;eip=0x0018d4; 	X(	REP MOVSB);	// 121942 rep movsb ;~ 24ED:18D4
cs=0x24ed;eip=0x0018d6; 	T(ADD(bp, 0x140));	// 121943 add     bp, 140h ;~ 24ED:18D6
cs=0x24ed;eip=0x0018da; 	T(DEC(dx));	// 121944 dec     dx ;~ 24ED:18DA
cs=0x24ed;eip=0x0018db; 	R(JNZ(loc_34d80));	// 121945 jnz     short loc_34D80 ;~ 24ED:18DB
cs=0x24ed;eip=0x0018dd; 	X(POP(es));	// 121946 pop     es ;~ 24ED:18DD
cs=0x24ed;eip=0x0018de; 	X(POP(ds));	// 121948 pop     ds ;~ 24ED:18DE
cs=0x24ed;eip=0x0018df; 	X(POPA);	// 121950 popa ;~ 24ED:18DF
cs=0x24ed;eip=0x0018e0; 	R(RETF(0));	// 121951 retf ;~ 24ED:18E0
loc_34d91:
	// 8126 
cs=0x24ed;eip=0x0018e1; 	T(XOR(ax, ax));	// 121955 xor     ax, ax ;~ 24ED:18E1
loc_34d93:
	// 8127 
cs=0x24ed;eip=0x0018e3; 	T(MOV(ah, al));	// 121958 mov     ah, al ;~ 24ED:18E3
cs=0x24ed;eip=0x0018e5; 	X(PUSH(ax));	// 121959 push    ax ;~ 24ED:18E5
cs=0x24ed;eip=0x0018e6; 	T(LODSW);	// 121960 lodsw ;~ 24ED:18E6
cs=0x24ed;eip=0x0018e7; 	T(MOV(dx, ax));	// 121961 mov     dx, ax ;~ 24ED:18E7
cs=0x24ed;eip=0x0018e9; 	T(LODSW);	// 121962 lodsw ;~ 24ED:18E9
cs=0x24ed;eip=0x0018ea; 	T(MOV(bx, ax));	// 121963 mov     bx, ax ;~ 24ED:18EA
cs=0x24ed;eip=0x0018ec; 	R(CALL(sub_340a8,0));	// 121964 call    sub_340A8 ;~ 24ED:18EC
cs=0x24ed;eip=0x0018ef; 	T(LODSW);	// 121965 lodsw ;~ 24ED:18EF
cs=0x24ed;eip=0x0018f0; 	T(MOV(bp, ax));	// 121966 mov     bp, ax ;~ 24ED:18F0
cs=0x24ed;eip=0x0018f2; 	T(SUB(bp, dx));	// 121967 sub     bp, dx ;~ 24ED:18F2
cs=0x24ed;eip=0x0018f4; 	R(JBE(loc_34ddf));	// 121968 jbe     short loc_34DDF ;~ 24ED:18F4
cs=0x24ed;eip=0x0018f6; 	T(LODSW);	// 121969 lodsw ;~ 24ED:18F6
cs=0x24ed;eip=0x0018f7; 	T(SUB(bx, ax));	// 121970 sub     bx, ax ;~ 24ED:18F7
cs=0x24ed;eip=0x0018f9; 	R(JNC(loc_34ddf));	// 121971 jnb     short loc_34DDF ;~ 24ED:18F9
cs=0x24ed;eip=0x0018fb; 	T(NEG(bx));	// 121972 neg     bx ;~ 24ED:18FB
cs=0x24ed;eip=0x0018fd; 	X(POP(ax));	// 121973 pop     ax ;~ 24ED:18FD
cs=0x24ed;eip=0x0018fe; 	T(MOV(si, di));	// 121974 mov     si, di ;~ 24ED:18FE
cs=0x24ed;eip=0x001900; 	T(SHR(bp, 1));	// 121975 shr     bp, 1 ;~ 24ED:1900
cs=0x24ed;eip=0x001902; 	R(JC(loc_34dc4));	// 121976 jb      short loc_34DC4 ;~ 24ED:1902
cs=0x24ed;eip=0x001904; 	R(JZ(locret_34dde));	// 121977 jz      short locret_34DDE ;~ 24ED:1904
loc_34db6:
	// 8128 
cs=0x24ed;eip=0x001906; 	T(MOV(di, si));	// 121980 mov     di, si ;~ 24ED:1906
cs=0x24ed;eip=0x001908; 	T(MOV(cx, bp));	// 121981 mov     cx, bp ;~ 24ED:1908
	// 121982 rep stosw ;~ 24ED:190A
cs=0x24ed;eip=0x00190a; 	X(	REP STOSW);	// 121982 rep stosw ;~ 24ED:190A
cs=0x24ed;eip=0x00190c; 	T(ADD(si, 0x140));	// 121983 add     si, 140h ;~ 24ED:190C
cs=0x24ed;eip=0x001910; 	T(DEC(bx));	// 121984 dec     bx ;~ 24ED:1910
cs=0x24ed;eip=0x001911; 	R(JNZ(loc_34db6));	// 121985 jnz     short loc_34DB6 ;~ 24ED:1911
cs=0x24ed;eip=0x001913; 	R(RETF(0));	// 121986 retf ;~ 24ED:1913
loc_34dc4:
	// 8129 
cs=0x24ed;eip=0x001914; 	R(JZ(loc_34dd5));	// 121990 jz      short loc_34DD5 ;~ 24ED:1914
loc_34dc6:
	// 8130 
cs=0x24ed;eip=0x001916; 	T(MOV(di, si));	// 121993 mov     di, si ;~ 24ED:1916
cs=0x24ed;eip=0x001918; 	T(MOV(cx, bp));	// 121994 mov     cx, bp ;~ 24ED:1918
	// 121995 rep stosw ;~ 24ED:191A
cs=0x24ed;eip=0x00191a; 	X(	REP STOSW);	// 121995 rep stosw ;~ 24ED:191A
cs=0x24ed;eip=0x00191c; 	X(STOSB);	// 121996 stosb ;~ 24ED:191C
cs=0x24ed;eip=0x00191d; 	T(ADD(si, 0x140));	// 121997 add     si, 140h ;~ 24ED:191D
cs=0x24ed;eip=0x001921; 	T(DEC(bx));	// 121998 dec     bx ;~ 24ED:1921
cs=0x24ed;eip=0x001922; 	R(JNZ(loc_34dc6));	// 121999 jnz     short loc_34DC6 ;~ 24ED:1922
cs=0x24ed;eip=0x001924; 	R(RETF(0));	// 122000 retf ;~ 24ED:1924
loc_34dd5:
	// 8131 
cs=0x24ed;eip=0x001925; 	T(MOV(cx, bx));	// 122004 mov     cx, bx ;~ 24ED:1925
loc_34dd7:
	// 8132 
cs=0x24ed;eip=0x001927; 	X(STOSB);	// 122007 stosb ;~ 24ED:1927
cs=0x24ed;eip=0x001928; 	T(ADD(di, 0x13F));	// 122008 add     di, 13Fh ;~ 24ED:1928
cs=0x24ed;eip=0x00192c; 	R(LOOP(loc_34dd7));	// 122009 loop    loc_34DD7 ;~ 24ED:192C
locret_34dde:
	// 8133 
cs=0x24ed;eip=0x00192e; 	R(RETF(0));	// 122012 retf ;~ 24ED:192E
loc_34ddf:
	// 8134 
cs=0x24ed;eip=0x00192f; 	X(POP(ax));	// 122017 pop     ax ;~ 24ED:192F
cs=0x24ed;eip=0x001930; 	R(RETF(0));	// 122018 retf ;~ 24ED:1930
ret_24ed_1931:
	// 8135 
cs=0x24ed;eip=0x001931; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0))));	// 122020 mov     dx, [bp+0] ;~ 24ED:1931
cs=0x24ed;eip=0x001934; 	T(MOV(bx, *(dw*)(raddr(ss,bp+2))));	// 122021 mov     bx, [bp+2] ;~ 24ED:1934
cs=0x24ed;eip=0x001937; 	R(CALL(sub_340a8,0));	// 122022 call    sub_340A8 ;~ 24ED:1937
cs=0x24ed;eip=0x00193a; 	T(MOV(si, di));	// 122023 mov     si, di ;~ 24ED:193A
cs=0x24ed;eip=0x00193c; 	T(MOV(dx, *(dw*)(raddr(ss,bp+8))));	// 122024 mov     dx, [bp+8] ;~ 24ED:193C
cs=0x24ed;eip=0x00193f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0A))));	// 122025 mov     bx, [bp+0Ah] ;~ 24ED:193F
cs=0x24ed;eip=0x001942; 	R(CALL(sub_340a8,0));	// 122026 call    sub_340A8 ;~ 24ED:1942
cs=0x24ed;eip=0x001945; 	T(MOV(dx, *(dw*)(raddr(ss,bp+4))));	// 122027 mov     dx, [bp+4] ;~ 24ED:1945
cs=0x24ed;eip=0x001948; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 122028 mov     bx, [bp+6] ;~ 24ED:1948
loc_34dfb:
	// 8136 
cs=0x24ed;eip=0x00194b; 	T(MOV(cx, dx));	// 122031 mov     cx, dx ;~ 24ED:194B
	// 122032 rep movsb ;~ 24ED:194D
cs=0x24ed;eip=0x00194d; 	X(	REP MOVSB);	// 122032 rep movsb ;~ 24ED:194D
cs=0x24ed;eip=0x00194f; 	T(SUB(si, dx));	// 122033 sub     si, dx ;~ 24ED:194F
cs=0x24ed;eip=0x001951; 	T(SUB(di, dx));	// 122034 sub     di, dx ;~ 24ED:1951
cs=0x24ed;eip=0x001953; 	T(ADD(si, 0x140));	// 122035 add     si, 140h ;~ 24ED:1953
cs=0x24ed;eip=0x001957; 	T(ADD(di, 0x140));	// 122036 add     di, 140h ;~ 24ED:1957
cs=0x24ed;eip=0x00195b; 	T(DEC(bx));	// 122037 dec     bx ;~ 24ED:195B
cs=0x24ed;eip=0x00195c; 	R(JNZ(loc_34dfb));	// 122038 jnz     short loc_34DFB ;~ 24ED:195C
cs=0x24ed;eip=0x00195e; 	R(RETF(0));	// 122039 retf ;~ 24ED:195E
loc_34e0f:
	// 8137 
cs=0x24ed;eip=0x00195f; 	X(PUSH(ax));	// 122043 push    ax ;~ 24ED:195F
cs=0x24ed;eip=0x001960; 	X(PUSH(cx));	// 122044 push    cx ;~ 24ED:1960
cs=0x24ed;eip=0x001961; 	X(PUSH(di));	// 122045 push    di ;~ 24ED:1961
cs=0x24ed;eip=0x001962; 	T(XOR(di, di));	// 122046 xor     di, di ;~ 24ED:1962
cs=0x24ed;eip=0x001964; 	T(XOR(ax, ax));	// 122047 xor     ax, ax ;~ 24ED:1964
cs=0x24ed;eip=0x001966; 	T(MOV(cx, 0x7D00));	// 122048 mov     cx, 7D00h ;~ 24ED:1966
	// 122049 rep stosw ;~ 24ED:1969
cs=0x24ed;eip=0x001969; 	X(	REP STOSW);	// 122049 rep stosw ;~ 24ED:1969
cs=0x24ed;eip=0x00196b; 	X(POP(di));	// 122050 pop     di ;~ 24ED:196B
cs=0x24ed;eip=0x00196c; 	X(POP(cx));	// 122051 pop     cx ;~ 24ED:196C
cs=0x24ed;eip=0x00196d; 	X(POP(ax));	// 122052 pop     ax ;~ 24ED:196D
cs=0x24ed;eip=0x00196e; 	R(RETF(0));	// 122053 retf ;~ 24ED:196E
loc_34e1f:
	// 8138 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00196f; 	X(MOV(*(dw*)(((db*)&word_3364a)), bp));	// 122057 mov     cs:word_3364A, bp ;~ 24ED:196F
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001974; 	X(MOV(*(dw*)(((db*)&word_33648)), si));	// 122058 mov     cs:word_33648, si ;~ 24ED:1974
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001979; 	X(MOV(*(&byte_3364c), al));	// 122059 mov     cs:byte_3364C, al ;~ 24ED:1979
cs=0x24ed;eip=0x00197d; 	X(PUSH(ax));	// 122060 push    ax ;~ 24ED:197D
cs=0x24ed;eip=0x00197e; 	X(PUSH(bx));	// 122061 push    bx ;~ 24ED:197E
cs=0x24ed;eip=0x00197f; 	X(PUSH(cx));	// 122062 push    cx ;~ 24ED:197F
cs=0x24ed;eip=0x001980; 	X(PUSH(dx));	// 122063 push    dx ;~ 24ED:1980
cs=0x24ed;eip=0x001981; 	X(PUSH(di));	// 122064 push    di ;~ 24ED:1981
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001982; 	X(MOV(*(dw*)(((db*)&word_33644)), dx));	// 122065 mov     cs:word_33644, dx ;~ 24ED:1982
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001987; 	X(MOV(*(dw*)(((db*)&word_33646)), bx));	// 122066 mov     cs:word_33646, bx ;~ 24ED:1987
cs=0x24ed;eip=0x00198c; 	T(SUB(bx, cx));	// 122067 sub     bx, cx ;~ 24ED:198C
cs=0x24ed;eip=0x00198e; 	T(SUB(dx, di));	// 122068 sub     dx, di ;~ 24ED:198E
cs=0x24ed;eip=0x001990; 	T(NEG(bx));	// 122069 neg     bx ;~ 24ED:1990
cs=0x24ed;eip=0x001992; 	T(NEG(dx));	// 122070 neg     dx ;~ 24ED:1992
cs=0x24ed;eip=0x001994; 	R(CALL(sub_34ef4,0));	// 122071 call    sub_34EF4 ;~ 24ED:1994
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001997; 	T(MOV(bp, *(dw*)(((db*)&word_3364a))));	// 122072 mov     bp, cs:word_3364A ;~ 24ED:1997
cs=0x24ed;eip=0x00199c; 	X(POP(di));	// 122073 pop     di ;~ 24ED:199C
cs=0x24ed;eip=0x00199d; 	X(POP(dx));	// 122074 pop     dx ;~ 24ED:199D
cs=0x24ed;eip=0x00199e; 	X(POP(cx));	// 122075 pop     cx ;~ 24ED:199E
cs=0x24ed;eip=0x00199f; 	X(POP(bx));	// 122076 pop     bx ;~ 24ED:199F
cs=0x24ed;eip=0x0019a0; 	X(POP(ax));	// 122077 pop     ax ;~ 24ED:19A0
cs=0x24ed;eip=0x0019a1; 	R(RETF(0));	// 122078 retf ;~ 24ED:19A1
loc_34e52:
	// 8139 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0019a2; 	T(MOV(bx, *(dw*)(((db*)&word_33646))));	// 122083 mov     bx, cs:word_33646 ;~ 24ED:19A2
cs=0x24ed;eip=0x0019a7; 	T(MOV(cx, dx));	// 122084 mov     cx, dx ;~ 24ED:19A7
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0019a9; 	T(MOV(ax, *(dw*)(((db*)&word_33644))));	// 122085 mov     ax, cs:word_33644 ;~ 24ED:19A9
cs=0x24ed;eip=0x0019ad; 	T(MOV(dx, ax));	// 122086 mov     dx, ax ;~ 24ED:19AD
cs=0x24ed;eip=0x0019af; 	T(ADD(ax, cx));	// 122087 add     ax, cx ;~ 24ED:19AF
cs=0x24ed;eip=0x0019b1; 	T(CMP(ax, dx));	// 122088 cmp     ax, dx ;~ 24ED:19B1
cs=0x24ed;eip=0x0019b3; 	R(JG(loc_34e69));	// 122089 jg      short loc_34E69 ;~ 24ED:19B3
cs=0x24ed;eip=0x0019b5; 	T(MOV(dx, ax));	// 122090 mov     dx, ax ;~ 24ED:19B5
cs=0x24ed;eip=0x0019b7; 	T(NEG(cx));	// 122091 neg     cx ;~ 24ED:19B7
loc_34e69:
	// 8140 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0019b9; 	T(MOV(di, *(dw*)(((db*)&word_33648))));	// 122094 mov     di, cs:word_33648 ;~ 24ED:19B9
cs=0x24ed;eip=0x0019be; 	T(CMP(bx, *(dw*)(raddr(ds,di+2))));	// 122095 cmp     bx, [di+2] ;~ 24ED:19BE
cs=0x24ed;eip=0x0019c1; 	R(JL(loc_34e9b));	// 122096 jl      short loc_34E9B ;~ 24ED:19C1
cs=0x24ed;eip=0x0019c3; 	T(CMP(bx, *(dw*)(raddr(ds,di+6))));	// 122097 cmp     bx, [di+6] ;~ 24ED:19C3
cs=0x24ed;eip=0x0019c6; 	R(JGE(loc_34e9b));	// 122098 jge     short loc_34E9B ;~ 24ED:19C6
cs=0x24ed;eip=0x0019c8; 	R(CALL(sub_340a8,0));	// 122099 call    sub_340A8 ;~ 24ED:19C8
cs=0x24ed;eip=0x0019cb; 	T(INC(cx));	// 122100 inc     cx ;~ 24ED:19CB
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0019cc; 	T(MOV(al, *(&byte_3364c)));	// 122101 mov     al, cs:byte_3364C ;~ 24ED:19CC
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0019d0; 	T(MOV(si, *(dw*)(((db*)&word_33648))));	// 122102 mov     si, cs:word_33648 ;~ 24ED:19D0
loc_34e85:
	// 8141 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0019d5; 	X(ROL(*(dw*)(((db*)&word_3364a)), 1));	// 122105 rol     cs:word_3364A, 1 ;~ 24ED:19D5
cs=0x24ed;eip=0x0019da; 	R(JNC(loc_34e97));	// 122106 jnb     short loc_34E97 ;~ 24ED:19DA
cs=0x24ed;eip=0x0019dc; 	T(CMP(dx, *(dw*)(raddr(ds,si))));	// 122107 cmp     dx, [si] ;~ 24ED:19DC
cs=0x24ed;eip=0x0019de; 	R(JL(loc_34e97));	// 122108 jl      short loc_34E97 ;~ 24ED:19DE
cs=0x24ed;eip=0x0019e0; 	T(CMP(dx, *(dw*)(raddr(ds,si+4))));	// 122109 cmp     dx, [si+4] ;~ 24ED:19E0
cs=0x24ed;eip=0x0019e3; 	R(JGE(loc_34e97));	// 122110 jge     short loc_34E97 ;~ 24ED:19E3
cs=0x24ed;eip=0x0019e5; 	X(STOSB);	// 122111 stosb ;~ 24ED:19E5
cs=0x24ed;eip=0x0019e6; 	T(DEC(di));	// 122112 dec     di ;~ 24ED:19E6
loc_34e97:
	// 8142 
cs=0x24ed;eip=0x0019e7; 	T(INC(di));	// 122116 inc     di ;~ 24ED:19E7
cs=0x24ed;eip=0x0019e8; 	T(INC(dx));	// 122117 inc     dx ;~ 24ED:19E8
cs=0x24ed;eip=0x0019e9; 	R(LOOP(loc_34e85));	// 122118 loop    loc_34E85 ;~ 24ED:19E9
loc_34e9b:
	// 8143 
cs=0x24ed;eip=0x0019eb; 	X(POP(si));	// 122122 pop     si ;~ 24ED:19EB
cs=0x24ed;eip=0x0019ec; 	X(POP(di));	// 122123 pop     di ;~ 24ED:19EC
cs=0x24ed;eip=0x0019ed; 	R(RETN(0));	// 122124 retn ;~ 24ED:19ED
loc_34e9e:
	// 8144 
cs=0x24ed;eip=0x0019ee; 	T(MOV(cx, bx));	// 122128 mov     cx, bx ;~ 24ED:19EE
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0019f0; 	T(MOV(bx, *(dw*)(((db*)&word_33646))));	// 122129 mov     bx, cs:word_33646 ;~ 24ED:19F0
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0019f5; 	T(MOV(dx, *(dw*)(((db*)&word_33644))));	// 122130 mov     dx, cs:word_33644 ;~ 24ED:19F5
cs=0x24ed;eip=0x0019fa; 	T(OR(ax, ax));	// 122131 or      ax, ax ;~ 24ED:19FA
cs=0x24ed;eip=0x0019fc; 	R(JNS(loc_34eb0));	// 122132 jns     short loc_34EB0 ;~ 24ED:19FC
cs=0x24ed;eip=0x0019fe; 	T(SUB(bx, cx));	// 122133 sub     bx, cx ;~ 24ED:19FE
loc_34eb0:
	// 8145 
cs=0x24ed;eip=0x001a00; 	T(CMP(bx, 0x0C8));	// 122136 cmp     bx, 0C8h ; 'È' ;~ 24ED:1A00
cs=0x24ed;eip=0x001a04; 	R(JC(loc_34ebc));	// 122137 jb      short loc_34EBC ;~ 24ED:1A04
cs=0x24ed;eip=0x001a06; 	R(JGE(loc_34ef1));	// 122138 jge     short loc_34EF1 ;~ 24ED:1A06
cs=0x24ed;eip=0x001a08; 	T(ADD(cx, bx));	// 122139 add     cx, bx ;~ 24ED:1A08
cs=0x24ed;eip=0x001a0a; 	T(XOR(bx, bx));	// 122140 xor     bx, bx ;~ 24ED:1A0A
loc_34ebc:
	// 8146 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001a0c; 	T(MOV(di, *(dw*)(((db*)&word_33648))));	// 122143 mov     di, cs:word_33648 ;~ 24ED:1A0C
cs=0x24ed;eip=0x001a11; 	T(CMP(dx, *(dw*)(raddr(ds,di))));	// 122144 cmp     dx, [di] ;~ 24ED:1A11
cs=0x24ed;eip=0x001a13; 	R(JL(loc_34ef1));	// 122145 jl      short loc_34EF1 ;~ 24ED:1A13
cs=0x24ed;eip=0x001a15; 	T(CMP(dx, *(dw*)(raddr(ds,di+4))));	// 122146 cmp     dx, [di+4] ;~ 24ED:1A15
cs=0x24ed;eip=0x001a18; 	R(JGE(loc_34ef1));	// 122147 jge     short loc_34EF1 ;~ 24ED:1A18
cs=0x24ed;eip=0x001a1a; 	R(CALL(sub_340a8,0));	// 122148 call    sub_340A8 ;~ 24ED:1A1A
cs=0x24ed;eip=0x001a1d; 	T(INC(cx));	// 122149 inc     cx ;~ 24ED:1A1D
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001a1e; 	T(MOV(al, *(&byte_3364c)));	// 122150 mov     al, cs:byte_3364C ;~ 24ED:1A1E
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001a22; 	T(MOV(si, *(dw*)(((db*)&word_33648))));	// 122151 mov     si, cs:word_33648 ;~ 24ED:1A22
loc_34ed7:
	// 8147 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001a27; 	X(ROL(*(dw*)(((db*)&word_3364a)), 1));	// 122154 rol     cs:word_3364A, 1 ;~ 24ED:1A27
cs=0x24ed;eip=0x001a2c; 	R(JNC(loc_34eea));	// 122155 jnb     short loc_34EEA ;~ 24ED:1A2C
cs=0x24ed;eip=0x001a2e; 	T(CMP(bx, *(dw*)(raddr(ds,si+2))));	// 122156 cmp     bx, [si+2] ;~ 24ED:1A2E
cs=0x24ed;eip=0x001a31; 	R(JL(loc_34eea));	// 122157 jl      short loc_34EEA ;~ 24ED:1A31
cs=0x24ed;eip=0x001a33; 	T(CMP(bx, *(dw*)(raddr(ds,si+6))));	// 122158 cmp     bx, [si+6] ;~ 24ED:1A33
cs=0x24ed;eip=0x001a36; 	R(JGE(loc_34eea));	// 122159 jge     short loc_34EEA ;~ 24ED:1A36
cs=0x24ed;eip=0x001a38; 	X(STOSB);	// 122160 stosb ;~ 24ED:1A38
cs=0x24ed;eip=0x001a39; 	T(DEC(di));	// 122161 dec     di ;~ 24ED:1A39
loc_34eea:
	// 8148 
cs=0x24ed;eip=0x001a3a; 	T(INC(bx));	// 122165 inc     bx ;~ 24ED:1A3A
cs=0x24ed;eip=0x001a3b; 	T(ADD(di, 0x140));	// 122166 add     di, 140h ;~ 24ED:1A3B
cs=0x24ed;eip=0x001a3f; 	R(LOOP(loc_34ed7));	// 122167 loop    loc_34ED7 ;~ 24ED:1A3F
loc_34ef1:
	// 8149 
cs=0x24ed;eip=0x001a41; 	X(POP(si));	// 122171 pop     si ;~ 24ED:1A41
cs=0x24ed;eip=0x001a42; 	X(POP(di));	// 122172 pop     di ;~ 24ED:1A42
cs=0x24ed;eip=0x001a43; 	R(RETN(0));	// 122173 retn ;~ 24ED:1A43
sub_34ef4:
	// 122179 
cs=0x24ed;eip=0x001a44; 	X(PUSH(di));	// 122183 push    di ;~ 24ED:1A44
ret_24ed_1a45:
	// 8150 
cs=0x24ed;eip=0x001a45; 	X(PUSH(si));	// 122184 push    si ;~ 24ED:1A45
cs=0x24ed;eip=0x001a46; 	T(OR(bx, bx));	// 122185 or      bx, bx ;~ 24ED:1A46
cs=0x24ed;eip=0x001a48; 	R(JNZ(loc_34efd));	// 122186 jnz     short loc_34EFD ;~ 24ED:1A48
cs=0x24ed;eip=0x001a4a; 	R(JMP(loc_34e52));	// 122187 jmp     loc_34E52 ;~ 24ED:1A4A
loc_34efd:
	// 8151 
cs=0x24ed;eip=0x001a4d; 	T(MOV(ax, 1));	// 122191 mov     ax, 1 ;~ 24ED:1A4D
cs=0x24ed;eip=0x001a50; 	R(JNS(loc_34f06));	// 122192 jns     short loc_34F06 ;~ 24ED:1A50
cs=0x24ed;eip=0x001a52; 	T(NEG(bx));	// 122193 neg     bx ;~ 24ED:1A52
cs=0x24ed;eip=0x001a54; 	T(NEG(ax));	// 122194 neg     ax ;~ 24ED:1A54
loc_34f06:
	// 8152 
cs=0x24ed;eip=0x001a56; 	T(OR(dx, dx));	// 122197 or      dx, dx ;~ 24ED:1A56
cs=0x24ed;eip=0x001a58; 	R(JZ(loc_34e9e));	// 122198 jz      short loc_34E9E ;~ 24ED:1A58
cs=0x24ed;eip=0x001a5a; 	T(MOV(cx, 1));	// 122199 mov     cx, 1 ;~ 24ED:1A5A
cs=0x24ed;eip=0x001a5d; 	R(JNS(loc_34f13));	// 122200 jns     short loc_34F13 ;~ 24ED:1A5D
cs=0x24ed;eip=0x001a5f; 	T(NEG(cx));	// 122201 neg     cx ;~ 24ED:1A5F
cs=0x24ed;eip=0x001a61; 	T(NEG(dx));	// 122202 neg     dx ;~ 24ED:1A61
loc_34f13:
	// 8153 
cs=0x24ed;eip=0x001a63; 	X(PUSH(ax));	// 122205 push    ax ;~ 24ED:1A63
cs=0x24ed;eip=0x001a64; 	X(PUSH(cx));	// 122206 push    cx ;~ 24ED:1A64
cs=0x24ed;eip=0x001a65; 	X(PUSH(ax));	// 122207 push    ax ;~ 24ED:1A65
cs=0x24ed;eip=0x001a66; 	X(PUSH(cx));	// 122208 push    cx ;~ 24ED:1A66
cs=0x24ed;eip=0x001a67; 	T(MOV(bp, sp));	// 122209 mov     bp, sp ;~ 24ED:1A67
cs=0x24ed;eip=0x001a69; 	T(MOV(si, bx));	// 122210 mov     si, bx ;~ 24ED:1A69
cs=0x24ed;eip=0x001a6b; 	T(MOV(di, dx));	// 122211 mov     di, dx ;~ 24ED:1A6B
cs=0x24ed;eip=0x001a6d; 	T(XOR(ax, ax));	// 122212 xor     ax, ax ;~ 24ED:1A6D
cs=0x24ed;eip=0x001a6f; 	T(CMP(dx, bx));	// 122213 cmp     dx, bx ;~ 24ED:1A6F
cs=0x24ed;eip=0x001a71; 	R(JBE(loc_34f28));	// 122214 jbe     short loc_34F28 ;~ 24ED:1A71
cs=0x24ed;eip=0x001a73; 	X(MOV(*(dw*)(raddr(ss,bp+2)), ax));	// 122215 mov     [bp+2], ax ;~ 24ED:1A73
cs=0x24ed;eip=0x001a76; 	R(JMP(loc_34f31));	// 122216 jmp     short loc_34F31 ;~ 24ED:1A76
loc_34f28:
	// 8154 
cs=0x24ed;eip=0x001a78; 	T(OR(bx, bx));	// 122220 or      bx, bx ;~ 24ED:1A78
cs=0x24ed;eip=0x001a7a; 	R(JZ(loc_34f8e));	// 122221 jz      short loc_34F8E ;~ 24ED:1A7A
cs=0x24ed;eip=0x001a7c; 	T(XCHG(di, si));	// 122222 xchg    di, si ;~ 24ED:1A7C
cs=0x24ed;eip=0x001a7e; 	X(MOV(*(dw*)(raddr(ss,bp+0)), ax));	// 122223 mov     [bp+0], ax ;~ 24ED:1A7E
loc_34f31:
	// 8155 
cs=0x24ed;eip=0x001a81; 	T(MOV(ax, di));	// 122226 mov     ax, di ;~ 24ED:1A81
cs=0x24ed;eip=0x001a83; 	T(MOV(cx, di));	// 122227 mov     cx, di ;~ 24ED:1A83
cs=0x24ed;eip=0x001a85; 	T(SHR(ax, 1));	// 122228 shr     ax, 1 ;~ 24ED:1A85
loc_34f37:
	// 8156 
cs=0x24ed;eip=0x001a87; 	T(ADD(ax, si));	// 122231 add     ax, si ;~ 24ED:1A87
cs=0x24ed;eip=0x001a89; 	T(CMP(ax, di));	// 122232 cmp     ax, di ;~ 24ED:1A89
cs=0x24ed;eip=0x001a8b; 	R(JC(loc_34f47));	// 122233 jb      short loc_34F47 ;~ 24ED:1A8B
cs=0x24ed;eip=0x001a8d; 	T(SUB(ax, di));	// 122234 sub     ax, di ;~ 24ED:1A8D
cs=0x24ed;eip=0x001a8f; 	T(MOV(dx, *(dw*)(raddr(ss,bp+4))));	// 122235 mov     dx, [bp+4] ;~ 24ED:1A8F
cs=0x24ed;eip=0x001a92; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 122236 mov     bx, [bp+6] ;~ 24ED:1A92
cs=0x24ed;eip=0x001a95; 	R(JMP(loc_34f4d));	// 122237 jmp     short loc_34F4D ;~ 24ED:1A95
loc_34f47:
	// 8157 
cs=0x24ed;eip=0x001a97; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0))));	// 122241 mov     dx, [bp+0] ;~ 24ED:1A97
cs=0x24ed;eip=0x001a9a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+2))));	// 122242 mov     bx, [bp+2] ;~ 24ED:1A9A
loc_34f4d:
	// 8158 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001a9d; 	T(ADD(dx, *(dw*)(((db*)&word_33644))));	// 122245 add     dx, cs:word_33644 ;~ 24ED:1A9D
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001aa2; 	T(ADD(bx, *(dw*)(((db*)&word_33646))));	// 122246 add     bx, cs:word_33646 ;~ 24ED:1AA2
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001aa7; 	X(MOV(*(dw*)(((db*)&word_33644)), dx));	// 122247 mov     cs:word_33644, dx ;~ 24ED:1AA7
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001aac; 	X(MOV(*(dw*)(((db*)&word_33646)), bx));	// 122248 mov     cs:word_33646, bx ;~ 24ED:1AAC
cs=0x24ed;eip=0x001ab1; 	X(PUSH(ax));	// 122249 push    ax ;~ 24ED:1AB1
cs=0x24ed;eip=0x001ab2; 	X(PUSH(di));	// 122250 push    di ;~ 24ED:1AB2
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001ab3; 	X(ROL(*(dw*)(((db*)&word_3364a)), 1));	// 122251 rol     cs:word_3364A, 1 ;~ 24ED:1AB3
cs=0x24ed;eip=0x001ab8; 	R(JNC(loc_34f8a));	// 122252 jnb     short loc_34F8A ;~ 24ED:1AB8
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001aba; 	T(MOV(di, *(dw*)(((db*)&word_33648))));	// 122253 mov     di, cs:word_33648 ;~ 24ED:1ABA
cs=0x24ed;eip=0x001abf; 	T(CMP(dx, *(dw*)(raddr(ds,di))));	// 122254 cmp     dx, [di] ;~ 24ED:1ABF
cs=0x24ed;eip=0x001ac1; 	R(JL(loc_34f8a));	// 122255 jl      short loc_34F8A ;~ 24ED:1AC1
cs=0x24ed;eip=0x001ac3; 	T(CMP(bx, *(dw*)(raddr(ds,di+2))));	// 122256 cmp     bx, [di+2] ;~ 24ED:1AC3
cs=0x24ed;eip=0x001ac6; 	R(JL(loc_34f8a));	// 122257 jl      short loc_34F8A ;~ 24ED:1AC6
cs=0x24ed;eip=0x001ac8; 	T(CMP(dx, *(dw*)(raddr(ds,di+4))));	// 122258 cmp     dx, [di+4] ;~ 24ED:1AC8
cs=0x24ed;eip=0x001acb; 	R(JGE(loc_34f8a));	// 122259 jge     short loc_34F8A ;~ 24ED:1ACB
cs=0x24ed;eip=0x001acd; 	T(CMP(bx, *(dw*)(raddr(ds,di+6))));	// 122260 cmp     bx, [di+6] ;~ 24ED:1ACD
cs=0x24ed;eip=0x001ad0; 	R(JGE(loc_34f8a));	// 122261 jge     short loc_34F8A ;~ 24ED:1AD0
cs=0x24ed;eip=0x001ad2; 	R(CALL(sub_340a8,0));	// 122262 call    sub_340A8 ;~ 24ED:1AD2
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001ad5; 	T(MOV(al, *(&byte_3364c)));	// 122263 mov     al, cs:byte_3364C ;~ 24ED:1AD5
cs=0x24ed;eip=0x001ad9; 	X(STOSB);	// 122264 stosb ;~ 24ED:1AD9
loc_34f8a:
	// 8159 
cs=0x24ed;eip=0x001ada; 	X(POP(di));	// 122268 pop     di ;~ 24ED:1ADA
cs=0x24ed;eip=0x001adb; 	X(POP(ax));	// 122269 pop     ax ;~ 24ED:1ADB
cs=0x24ed;eip=0x001adc; 	R(LOOP(loc_34f37));	// 122270 loop    loc_34F37 ;~ 24ED:1ADC
loc_34f8e:
	// 8160 
cs=0x24ed;eip=0x001ade; 	T(ADD(sp, 8));	// 122273 add     sp, 8 ;~ 24ED:1ADE
cs=0x24ed;eip=0x001ae1; 	X(POP(si));	// 122274 pop     si ;~ 24ED:1AE1
cs=0x24ed;eip=0x001ae2; 	X(POP(di));	// 122275 pop     di ;~ 24ED:1AE2
cs=0x24ed;eip=0x001ae3; 	R(RETN(0));	// 122276 retn ;~ 24ED:1AE3
sub_34f94:
	// 122283 
cs=0x24ed;eip=0x001ae4; 	X(PUSH(cx));	// 122285 push    cx ;~ 24ED:1AE4
ret_24ed_1ae5:
	// 8161 
cs=0x24ed;eip=0x001ae5; 	X(PUSH(si));	// 122286 push    si ;~ 24ED:1AE5
cs=0x24ed;eip=0x001ae6; 	X(PUSH(di));	// 122287 push    di ;~ 24ED:1AE6
cs=0x24ed;eip=0x001ae7; 	T(XOR(si, si));	// 122288 xor     si, si ;~ 24ED:1AE7
cs=0x24ed;eip=0x001ae9; 	T(MOV(di, si));	// 122289 mov     di, si ;~ 24ED:1AE9
cs=0x24ed;eip=0x001aeb; 	T(MOV(cx, 0x3E80));	// 122290 mov     cx, 3E80h ;~ 24ED:1AEB
	// 122291 rep movsd ;~ 24ED:1AEE
cs=0x24ed;eip=0x001aee; 	X(	REP MOVSD);	// 122291 rep movsd ;~ 24ED:1AEE
cs=0x24ed;eip=0x001af1; 	X(POP(di));	// 122292 pop     di ;~ 24ED:1AF1
cs=0x24ed;eip=0x001af2; 	X(POP(si));	// 122293 pop     si ;~ 24ED:1AF2
cs=0x24ed;eip=0x001af3; 	X(POP(cx));	// 122294 pop     cx ;~ 24ED:1AF3
cs=0x24ed;eip=0x001af4; 	R(RETF(0));	// 122295 retf ;~ 24ED:1AF4
seg002_1af5_proc:
	// 122300 
loc_34fa5:
	// 8162 
cs=0x24ed;eip=0x001af5; 	T(MOV(ds, si));	// 122301 mov     ds, si ;~ 24ED:1AF5
sub_34fa7:
	// 122306 
cs=0x24ed;eip=0x001af7; 	R(CALL(sub_340a8,0));	// 122308 call    sub_340A8 ;~ 24ED:1AF7
cs=0x24ed;eip=0x001afa; 	T(SHR(bp, 1));	// 122309 shr     bp, 1 ;~ 24ED:1AFA
cs=0x24ed;eip=0x001afc; 	R(JC(loc_34fe5));	// 122310 jb      loc_34FE5 ;~ 24ED:1AFC
cs=0x24ed;eip=0x001b00; 	T(SHR(bp, 1));	// 122311 shr     bp, 1 ;~ 24ED:1B00
cs=0x24ed;eip=0x001b02; 	R(JC(loc_34fcd));	// 122312 jb      loc_34FCD ;~ 24ED:1B02
cs=0x24ed;eip=0x001b06; 	R(JZ(locret_34fe4));	// 122313 jz      locret_34FE4 ;~ 24ED:1B06
cs=0x24ed;eip=0x001b0a; 	T(MOV(dx, di));	// 122314 mov     dx, di ;~ 24ED:1B0A
loc_34fbc:
	// 8163 
cs=0x24ed;eip=0x001b0c; 	T(MOV(si, dx));	// 122317 mov     si, dx ;~ 24ED:1B0C
cs=0x24ed;eip=0x001b0e; 	T(MOV(di, si));	// 122318 mov     di, si ;~ 24ED:1B0E
cs=0x24ed;eip=0x001b10; 	T(MOV(cx, bp));	// 122319 mov     cx, bp ;~ 24ED:1B10
	// 122320 rep movsd ;~ 24ED:1B12
cs=0x24ed;eip=0x001b12; 	X(	REP MOVSD);	// 122320 rep movsd ;~ 24ED:1B12
cs=0x24ed;eip=0x001b15; 	T(ADD(dx, 0x140));	// 122321 add     dx, 140h ;~ 24ED:1B15
cs=0x24ed;eip=0x001b19; 	T(DEC(ax));	// 122322 dec     ax ;~ 24ED:1B19
cs=0x24ed;eip=0x001b1a; 	R(JNZ(loc_34fbc));	// 122323 jnz     short loc_34FBC ;~ 24ED:1B1A
cs=0x24ed;eip=0x001b1c; 	R(RETF(0));	// 122324 retf ;~ 24ED:1B1C
loc_34fcd:
	// 8164 
cs=0x24ed;eip=0x001b1d; 	R(JZ(loc_35028));	// 122328 jz      loc_35028 ;~ 24ED:1B1D
cs=0x24ed;eip=0x001b21; 	T(MOV(dx, di));	// 122329 mov     dx, di ;~ 24ED:1B21
loc_34fd3:
	// 8165 
cs=0x24ed;eip=0x001b23; 	T(MOV(si, dx));	// 122332 mov     si, dx ;~ 24ED:1B23
cs=0x24ed;eip=0x001b25; 	T(MOV(di, si));	// 122333 mov     di, si ;~ 24ED:1B25
cs=0x24ed;eip=0x001b27; 	T(MOV(cx, bp));	// 122334 mov     cx, bp ;~ 24ED:1B27
	// 122335 rep movsd ;~ 24ED:1B29
cs=0x24ed;eip=0x001b29; 	X(	REP MOVSD);	// 122335 rep movsd ;~ 24ED:1B29
cs=0x24ed;eip=0x001b2c; 	X(MOVSW);	// 122336 movsw ;~ 24ED:1B2C
cs=0x24ed;eip=0x001b2d; 	T(ADD(dx, 0x140));	// 122337 add     dx, 140h ;~ 24ED:1B2D
cs=0x24ed;eip=0x001b31; 	T(DEC(ax));	// 122338 dec     ax ;~ 24ED:1B31
cs=0x24ed;eip=0x001b32; 	R(JNZ(loc_34fd3));	// 122339 jnz     short loc_34FD3 ;~ 24ED:1B32
locret_34fe4:
	// 8166 
cs=0x24ed;eip=0x001b34; 	R(RETF(0));	// 122342 retf ;~ 24ED:1B34
loc_34fe5:
	// 8167 
cs=0x24ed;eip=0x001b35; 	R(JZ(loc_3501c));	// 122346 jz      loc_3501C ;~ 24ED:1B35
cs=0x24ed;eip=0x001b39; 	T(SHR(bp, 1));	// 122347 shr     bp, 1 ;~ 24ED:1B39
cs=0x24ed;eip=0x001b3b; 	R(JC(loc_35003));	// 122348 jb      loc_35003 ;~ 24ED:1B3B
cs=0x24ed;eip=0x001b3f; 	T(MOV(dx, di));	// 122349 mov     dx, di ;~ 24ED:1B3F
loc_34ff1:
	// 8168 
cs=0x24ed;eip=0x001b41; 	T(MOV(si, dx));	// 122352 mov     si, dx ;~ 24ED:1B41
cs=0x24ed;eip=0x001b43; 	T(MOV(di, si));	// 122353 mov     di, si ;~ 24ED:1B43
cs=0x24ed;eip=0x001b45; 	T(MOV(cx, bp));	// 122354 mov     cx, bp ;~ 24ED:1B45
	// 122355 rep movsd ;~ 24ED:1B47
cs=0x24ed;eip=0x001b47; 	X(	REP MOVSD);	// 122355 rep movsd ;~ 24ED:1B47
cs=0x24ed;eip=0x001b4a; 	X(MOVSB);	// 122356 movsb ;~ 24ED:1B4A
cs=0x24ed;eip=0x001b4b; 	T(ADD(dx, 0x140));	// 122357 add     dx, 140h ;~ 24ED:1B4B
cs=0x24ed;eip=0x001b4f; 	T(DEC(ax));	// 122358 dec     ax ;~ 24ED:1B4F
cs=0x24ed;eip=0x001b50; 	R(JNZ(loc_34ff1));	// 122359 jnz     short loc_34FF1 ;~ 24ED:1B50
cs=0x24ed;eip=0x001b52; 	R(RETF(0));	// 122360 retf ;~ 24ED:1B52
loc_35003:
	// 8169 
cs=0x24ed;eip=0x001b53; 	R(JZ(loc_35034));	// 122364 jz      loc_35034 ;~ 24ED:1B53
cs=0x24ed;eip=0x001b57; 	T(MOV(dx, di));	// 122365 mov     dx, di ;~ 24ED:1B57
loc_35009:
	// 8170 
cs=0x24ed;eip=0x001b59; 	T(MOV(si, dx));	// 122368 mov     si, dx ;~ 24ED:1B59
cs=0x24ed;eip=0x001b5b; 	T(MOV(di, si));	// 122369 mov     di, si ;~ 24ED:1B5B
cs=0x24ed;eip=0x001b5d; 	T(MOV(cx, bp));	// 122370 mov     cx, bp ;~ 24ED:1B5D
	// 122371 rep movsd ;~ 24ED:1B5F
cs=0x24ed;eip=0x001b5f; 	X(	REP MOVSD);	// 122371 rep movsd ;~ 24ED:1B5F
cs=0x24ed;eip=0x001b62; 	X(MOVSW);	// 122372 movsw ;~ 24ED:1B62
cs=0x24ed;eip=0x001b63; 	X(MOVSB);	// 122373 movsb ;~ 24ED:1B63
cs=0x24ed;eip=0x001b64; 	T(ADD(dx, 0x140));	// 122374 add     dx, 140h ;~ 24ED:1B64
cs=0x24ed;eip=0x001b68; 	T(DEC(ax));	// 122375 dec     ax ;~ 24ED:1B68
cs=0x24ed;eip=0x001b69; 	R(JNZ(loc_35009));	// 122376 jnz     short loc_35009 ;~ 24ED:1B69
cs=0x24ed;eip=0x001b6b; 	R(RETF(0));	// 122377 retf ;~ 24ED:1B6B
loc_3501c:
	// 8171 
cs=0x24ed;eip=0x001b6c; 	T(MOV(cx, ax));	// 122381 mov     cx, ax ;~ 24ED:1B6C
loc_3501e:
	// 8172 
cs=0x24ed;eip=0x001b6e; 	T(MOV(si, di));	// 122384 mov     si, di ;~ 24ED:1B6E
cs=0x24ed;eip=0x001b70; 	X(MOVSB);	// 122385 movsb ;~ 24ED:1B70
cs=0x24ed;eip=0x001b71; 	T(ADD(di, 0x13F));	// 122386 add     di, 13Fh ;~ 24ED:1B71
cs=0x24ed;eip=0x001b75; 	R(LOOP(loc_3501e));	// 122387 loop    loc_3501E ;~ 24ED:1B75
cs=0x24ed;eip=0x001b77; 	R(RETF(0));	// 122388 retf ;~ 24ED:1B77
loc_35028:
	// 8173 
cs=0x24ed;eip=0x001b78; 	T(MOV(cx, ax));	// 122392 mov     cx, ax ;~ 24ED:1B78
loc_3502a:
	// 8174 
cs=0x24ed;eip=0x001b7a; 	T(MOV(si, di));	// 122395 mov     si, di ;~ 24ED:1B7A
cs=0x24ed;eip=0x001b7c; 	X(MOVSW);	// 122396 movsw ;~ 24ED:1B7C
cs=0x24ed;eip=0x001b7d; 	T(ADD(di, 0x13E));	// 122397 add     di, 13Eh ;~ 24ED:1B7D
cs=0x24ed;eip=0x001b81; 	R(LOOP(loc_3502a));	// 122398 loop    loc_3502A ;~ 24ED:1B81
cs=0x24ed;eip=0x001b83; 	R(RETF(0));	// 122399 retf ;~ 24ED:1B83
loc_35034:
	// 8175 
cs=0x24ed;eip=0x001b84; 	T(MOV(cx, ax));	// 122403 mov     cx, ax ;~ 24ED:1B84
loc_35036:
	// 8176 
cs=0x24ed;eip=0x001b86; 	T(MOV(si, di));	// 122406 mov     si, di ;~ 24ED:1B86
cs=0x24ed;eip=0x001b88; 	X(MOVSW);	// 122407 movsw ;~ 24ED:1B88
cs=0x24ed;eip=0x001b89; 	X(MOVSB);	// 122408 movsb ;~ 24ED:1B89
cs=0x24ed;eip=0x001b8a; 	T(ADD(di, 0x13D));	// 122409 add     di, 13Dh ;~ 24ED:1B8A
cs=0x24ed;eip=0x001b8e; 	R(LOOP(loc_35036));	// 122410 loop    loc_35036 ;~ 24ED:1B8E
cs=0x24ed;eip=0x001b90; 	R(RETF(0));	// 122411 retf ;~ 24ED:1B90
seg002_1b91_proc:
	// 122416 
loc_35041:
	// 8177 
cs=0x24ed;eip=0x001b91; 	T(MOV(bp, di));	// 122417 mov     bp, di ;~ 24ED:1B91
cs=0x24ed;eip=0x001b93; 	T(AND(bp, 0x1FF));	// 122418 and     bp, 1FFh ;~ 24ED:1B93
cs=0x24ed;eip=0x001b97; 	R(CALL(sub_340a8,0));	// 122419 call    sub_340A8 ;~ 24ED:1B97
cs=0x24ed;eip=0x001b9a; 	T(MOV(dx, cx));	// 122420 mov     dx, cx ;~ 24ED:1B9A
cs=0x24ed;eip=0x001b9c; 	T(XOR(dh, dh));	// 122421 xor     dh, dh ;~ 24ED:1B9C
loc_3504e:
	// 8178 
cs=0x24ed;eip=0x001b9e; 	T(MOV(cx, bp));	// 122424 mov     cx, bp ;~ 24ED:1B9E
cs=0x24ed;eip=0x001ba0; 	X(PUSH(di));	// 122425 push    di ;~ 24ED:1BA0
loc_35051:
	// 8179 
cs=0x24ed;eip=0x001ba1; 	X(MOVSB);	// 122428 movsb ;~ 24ED:1BA1
cs=0x24ed;eip=0x001ba2; 	T(INC(di));	// 122429 inc     di ;~ 24ED:1BA2
cs=0x24ed;eip=0x001ba3; 	R(LOOP(loc_35051));	// 122430 loop    loc_35051 ;~ 24ED:1BA3
cs=0x24ed;eip=0x001ba5; 	X(POP(di));	// 122431 pop     di ;~ 24ED:1BA5
cs=0x24ed;eip=0x001ba6; 	T(ADD(di, 0x280));	// 122432 add     di, 280h ;~ 24ED:1BA6
cs=0x24ed;eip=0x001baa; 	T(DEC(dx));	// 122433 dec     dx ;~ 24ED:1BAA
cs=0x24ed;eip=0x001bab; 	R(JNZ(loc_3504e));	// 122434 jnz     short loc_3504E ;~ 24ED:1BAB
cs=0x24ed;eip=0x001bad; 	R(RETF(0));	// 122435 retf ;~ 24ED:1BAD
loc_3505e:
	// 8180 
cs=0x24ed;eip=0x001bae; 	X(PUSH(ds));	// 122439 push    ds ;~ 24ED:1BAE
cs=0x24ed;eip=0x001baf; 	T(MOV(ds, si));	// 122440 mov     ds, si ;~ 24ED:1BAF
cs=0x24ed;eip=0x001bb1; 	T(XOR(si, si));	// 122441 xor     si, si ;~ 24ED:1BB1
cs=0x24ed;eip=0x001bb3; 	T(MOV(di, si));	// 122442 mov     di, si ;~ 24ED:1BB3
cs=0x24ed;eip=0x001bb5; 	T(MOV(cx, 0x2F80));	// 122443 mov     cx, 2F80h ;~ 24ED:1BB5
	// 122444 rep movsd ;~ 24ED:1BB8
cs=0x24ed;eip=0x001bb8; 	X(	REP MOVSD);	// 122444 rep movsd ;~ 24ED:1BB8
cs=0x24ed;eip=0x001bbb; 	X(POP(ds));	// 122445 pop     ds ;~ 24ED:1BBB
cs=0x24ed;eip=0x001bbc; 	R(RETF(0));	// 122446 retf ;~ 24ED:1BBC
loc_3506d:
	// 8181 
cs=0x24ed;eip=0x001bbd; 	R(CALL(sub_340a8,0));	// 122450 call    sub_340A8 ;~ 24ED:1BBD
cs=0x24ed;eip=0x001bc0; 	T(MOV(bx, ax));	// 122451 mov     bx, ax ;~ 24ED:1BC0
cs=0x24ed;eip=0x001bc2; 	T(MOV(dx, cx));	// 122452 mov     dx, cx ;~ 24ED:1BC2
cs=0x24ed;eip=0x001bc4; 	T(XOR(cx, cx));	// 122453 xor     cx, cx ;~ 24ED:1BC4
cs=0x24ed;eip=0x001bc6; 	T(MOV(bp, di));	// 122454 mov     bp, di ;~ 24ED:1BC6
cs=0x24ed;eip=0x001bc8; 	T(OR(bh, bh));	// 122455 or      bh, bh ;~ 24ED:1BC8
cs=0x24ed;eip=0x001bca; 	R(JZ(loc_35097));	// 122456 jz      short loc_35097 ;~ 24ED:1BCA
loc_3507c:
	// 8182 
cs=0x24ed;eip=0x001bcc; 	T(MOV(cl, dl));	// 122459 mov     cl, dl ;~ 24ED:1BCC
cs=0x24ed;eip=0x001bce; 	T(LODSB);	// 122460 lodsb ;~ 24ED:1BCE
cs=0x24ed;eip=0x001bcf; 	T(MOV(ah, al));	// 122461 mov     ah, al ;~ 24ED:1BCF
loc_35081:
	// 8183 
cs=0x24ed;eip=0x001bd1; 	T(MOV(al, bl));	// 122464 mov     al, bl ;~ 24ED:1BD1
cs=0x24ed;eip=0x001bd3; 	T(SHL(ah, 1));	// 122465 shl     ah, 1 ;~ 24ED:1BD3
cs=0x24ed;eip=0x001bd5; 	R(JC(loc_35089));	// 122466 jb      short loc_35089 ;~ 24ED:1BD5
cs=0x24ed;eip=0x001bd7; 	T(MOV(al, bh));	// 122467 mov     al, bh ;~ 24ED:1BD7
loc_35089:
	// 8184 
cs=0x24ed;eip=0x001bd9; 	X(STOSB);	// 122470 stosb ;~ 24ED:1BD9
cs=0x24ed;eip=0x001bda; 	R(LOOP(loc_35081));	// 122471 loop    loc_35081 ;~ 24ED:1BDA
cs=0x24ed;eip=0x001bdc; 	T(ADD(bp, 0x140));	// 122472 add     bp, 140h ;~ 24ED:1BDC
cs=0x24ed;eip=0x001be0; 	T(MOV(di, bp));	// 122473 mov     di, bp ;~ 24ED:1BE0
cs=0x24ed;eip=0x001be2; 	T(DEC(dh));	// 122474 dec     dh ;~ 24ED:1BE2
cs=0x24ed;eip=0x001be4; 	R(JNZ(loc_3507c));	// 122475 jnz     short loc_3507C ;~ 24ED:1BE4
cs=0x24ed;eip=0x001be6; 	R(RETF(0));	// 122476 retf ;~ 24ED:1BE6
loc_35097:
	// 8185 
cs=0x24ed;eip=0x001be7; 	T(MOV(cl, dl));	// 122481 mov     cl, dl ;~ 24ED:1BE7
cs=0x24ed;eip=0x001be9; 	T(LODSB);	// 122482 lodsb ;~ 24ED:1BE9
cs=0x24ed;eip=0x001bea; 	T(MOV(ah, al));	// 122483 mov     ah, al ;~ 24ED:1BEA
cs=0x24ed;eip=0x001bec; 	T(MOV(al, bl));	// 122484 mov     al, bl ;~ 24ED:1BEC
loc_3509e:
	// 8186 
cs=0x24ed;eip=0x001bee; 	T(SHL(ah, 1));	// 122488 shl     ah, 1 ;~ 24ED:1BEE
cs=0x24ed;eip=0x001bf0; 	R(JC(loc_350b0));	// 122489 jb      short loc_350B0 ;~ 24ED:1BF0
cs=0x24ed;eip=0x001bf2; 	T(INC(di));	// 122490 inc     di ;~ 24ED:1BF2
cs=0x24ed;eip=0x001bf3; 	R(LOOP(loc_3509e));	// 122491 loop    loc_3509E ;~ 24ED:1BF3
cs=0x24ed;eip=0x001bf5; 	T(ADD(bp, 0x140));	// 122492 add     bp, 140h ;~ 24ED:1BF5
cs=0x24ed;eip=0x001bf9; 	T(MOV(di, bp));	// 122493 mov     di, bp ;~ 24ED:1BF9
cs=0x24ed;eip=0x001bfb; 	T(DEC(dh));	// 122494 dec     dh ;~ 24ED:1BFB
cs=0x24ed;eip=0x001bfd; 	R(JNZ(loc_35097));	// 122495 jnz     short loc_35097 ;~ 24ED:1BFD
cs=0x24ed;eip=0x001bff; 	R(RETF(0));	// 122496 retf ;~ 24ED:1BFF
loc_350b0:
	// 8187 
cs=0x24ed;eip=0x001c00; 	X(STOSB);	// 122500 stosb ;~ 24ED:1C00
cs=0x24ed;eip=0x001c01; 	R(LOOP(loc_3509e));	// 122501 loop    loc_3509E ;~ 24ED:1C01
cs=0x24ed;eip=0x001c03; 	T(ADD(bp, 0x140));	// 122502 add     bp, 140h ;~ 24ED:1C03
cs=0x24ed;eip=0x001c07; 	T(MOV(di, bp));	// 122503 mov     di, bp ;~ 24ED:1C07
cs=0x24ed;eip=0x001c09; 	T(DEC(dh));	// 122504 dec     dh ;~ 24ED:1C09
cs=0x24ed;eip=0x001c0b; 	R(JNZ(loc_35097));	// 122505 jnz     short loc_35097 ;~ 24ED:1C0B
cs=0x24ed;eip=0x001c0d; 	R(RETF(0));	// 122506 retf ;~ 24ED:1C0D
loc_350be:
	// 8188 
cs=0x24ed;eip=0x001c0e; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0))));	// 122510 mov     dx, [bp+0] ;~ 24ED:1C0E
cs=0x24ed;eip=0x001c11; 	T(MOV(bx, *(dw*)(raddr(ss,bp+2))));	// 122511 mov     bx, [bp+2] ;~ 24ED:1C11
cs=0x24ed;eip=0x001c14; 	R(CALL(sub_340a8,0));	// 122512 call    sub_340A8 ;~ 24ED:1C14
cs=0x24ed;eip=0x001c17; 	T(MOV(cx, *(dw*)(raddr(ss,bp+4))));	// 122513 mov     cx, [bp+4] ;~ 24ED:1C17
cs=0x24ed;eip=0x001c1a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 122514 mov     ax, [bp+6] ;~ 24ED:1C1A
cs=0x24ed;eip=0x001c1d; 	T(SUB(cx, dx));	// 122515 sub     cx, dx ;~ 24ED:1C1D
cs=0x24ed;eip=0x001c1f; 	T(SUB(ax, bx));	// 122516 sub     ax, bx ;~ 24ED:1C1F
cs=0x24ed;eip=0x001c21; 	T(XCHG(di, si));	// 122517 xchg    di, si ;~ 24ED:1C21
cs=0x24ed;eip=0x001c23; 	T(MOV(dx, 0x140));	// 122518 mov     dx, 140h ;~ 24ED:1C23
cs=0x24ed;eip=0x001c26; 	T(SUB(dx, cx));	// 122519 sub     dx, cx ;~ 24ED:1C26
cs=0x24ed;eip=0x001c28; 	X(PUSH(ds));	// 122520 push    ds ;~ 24ED:1C28
cs=0x24ed;eip=0x001c29; 	X(PUSH(es));	// 122521 push    es ;~ 24ED:1C29
cs=0x24ed;eip=0x001c2a; 	X(POP(ds));	// 122522 pop     ds ;~ 24ED:1C2A
cs=0x24ed;eip=0x001c2b; 	X(POP(es));	// 122523 pop     es ;~ 24ED:1C2B
loc_350dc:
	// 8189 
cs=0x24ed;eip=0x001c2c; 	X(PUSH(cx));	// 122526 push    cx ;~ 24ED:1C2C
cs=0x24ed;eip=0x001c2d; 	T(MOV(bp, cx));	// 122527 mov     bp, cx ;~ 24ED:1C2D
cs=0x24ed;eip=0x001c2f; 	T(SHR(cx, 2));	// 122528 shr     cx, 2 ;~ 24ED:1C2F
	// 122529 rep movsd ;~ 24ED:1C32
cs=0x24ed;eip=0x001c32; 	X(	REP MOVSD);	// 122529 rep movsd ;~ 24ED:1C32
cs=0x24ed;eip=0x001c35; 	T(MOV(cx, bp));	// 122530 mov     cx, bp ;~ 24ED:1C35
cs=0x24ed;eip=0x001c37; 	T(AND(cx, 3));	// 122531 and     cx, 3 ;~ 24ED:1C37
	// 122532 rep movsb ;~ 24ED:1C3A
cs=0x24ed;eip=0x001c3a; 	X(	REP MOVSB);	// 122532 rep movsb ;~ 24ED:1C3A
cs=0x24ed;eip=0x001c3c; 	X(POP(cx));	// 122533 pop     cx ;~ 24ED:1C3C
cs=0x24ed;eip=0x001c3d; 	T(ADD(si, dx));	// 122534 add     si, dx ;~ 24ED:1C3D
cs=0x24ed;eip=0x001c3f; 	T(DEC(ax));	// 122535 dec     ax ;~ 24ED:1C3F
cs=0x24ed;eip=0x001c40; 	R(JNZ(loc_350dc));	// 122536 jnz     short loc_350DC ;~ 24ED:1C40
cs=0x24ed;eip=0x001c42; 	X(PUSH(ss));	// 122537 push    ss ;~ 24ED:1C42
cs=0x24ed;eip=0x001c43; 	X(POP(ds));	// 122538 pop     ds ;~ 24ED:1C43
cs=0x24ed;eip=0x001c44; 	R(RETF(0));	// 122539 retf ;~ 24ED:1C44
loc_350f5:
	// 8190 
cs=0x24ed;eip=0x001c45; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0))));	// 122543 mov     dx, [bp+0] ;~ 24ED:1C45
cs=0x24ed;eip=0x001c48; 	T(MOV(bx, *(dw*)(raddr(ss,bp+2))));	// 122544 mov     bx, [bp+2] ;~ 24ED:1C48
cs=0x24ed;eip=0x001c4b; 	R(CALL(sub_340a8,0));	// 122545 call    sub_340A8 ;~ 24ED:1C4B
cs=0x24ed;eip=0x001c4e; 	T(MOV(cx, *(dw*)(raddr(ss,bp+4))));	// 122546 mov     cx, [bp+4] ;~ 24ED:1C4E
cs=0x24ed;eip=0x001c51; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 122547 mov     ax, [bp+6] ;~ 24ED:1C51
cs=0x24ed;eip=0x001c54; 	T(SUB(cx, dx));	// 122548 sub     cx, dx ;~ 24ED:1C54
cs=0x24ed;eip=0x001c56; 	T(SUB(ax, bx));	// 122549 sub     ax, bx ;~ 24ED:1C56
cs=0x24ed;eip=0x001c58; 	T(MOV(dx, 0x140));	// 122550 mov     dx, 140h ;~ 24ED:1C58
cs=0x24ed;eip=0x001c5b; 	T(SUB(dx, cx));	// 122551 sub     dx, cx ;~ 24ED:1C5B
loc_3510d:
	// 8191 
cs=0x24ed;eip=0x001c5d; 	X(PUSH(cx));	// 122554 push    cx ;~ 24ED:1C5D
cs=0x24ed;eip=0x001c5e; 	T(MOV(bp, cx));	// 122555 mov     bp, cx ;~ 24ED:1C5E
cs=0x24ed;eip=0x001c60; 	T(SHR(cx, 2));	// 122556 shr     cx, 2 ;~ 24ED:1C60
	// 122557 rep movsd ;~ 24ED:1C63
cs=0x24ed;eip=0x001c63; 	X(	REP MOVSD);	// 122557 rep movsd ;~ 24ED:1C63
cs=0x24ed;eip=0x001c66; 	T(MOV(cx, bp));	// 122558 mov     cx, bp ;~ 24ED:1C66
cs=0x24ed;eip=0x001c68; 	T(AND(cx, 3));	// 122559 and     cx, 3 ;~ 24ED:1C68
	// 122560 rep movsb ;~ 24ED:1C6B
cs=0x24ed;eip=0x001c6b; 	X(	REP MOVSB);	// 122560 rep movsb ;~ 24ED:1C6B
cs=0x24ed;eip=0x001c6d; 	X(POP(cx));	// 122561 pop     cx ;~ 24ED:1C6D
cs=0x24ed;eip=0x001c6e; 	T(ADD(di, dx));	// 122562 add     di, dx ;~ 24ED:1C6E
cs=0x24ed;eip=0x001c70; 	T(DEC(ax));	// 122563 dec     ax ;~ 24ED:1C70
cs=0x24ed;eip=0x001c71; 	R(JNZ(loc_3510d));	// 122564 jnz     short loc_3510D ;~ 24ED:1C71
cs=0x24ed;eip=0x001c73; 	X(PUSH(ss));	// 122565 push    ss ;~ 24ED:1C73
cs=0x24ed;eip=0x001c74; 	X(POP(ds));	// 122566 pop     ds ;~ 24ED:1C74
cs=0x24ed;eip=0x001c75; 	R(RETF(0));	// 122567 retf ;~ 24ED:1C75
loc_3513c:
	// 8192 
cs=0x24ed;eip=0x001c8c; 	T(OR(al, al));	// 122591 or      al, al ;~ 24ED:1C8C
cs=0x24ed;eip=0x001c8e; 	T(MOV(ax, 0x9090));	// 122592 mov     ax, 9090h ;~ 24ED:1C8E
cs=0x24ed;eip=0x001c91; 	R(JZ(loc_35146));	// 122593 jz      short loc_35146 ;~ 24ED:1C91
cs=0x24ed;eip=0x001c93; 	T(MOV(ax, 0x7DEB));	// 122594 mov     ax, 7DEBh ;~ 24ED:1C93
loc_35146:
	// 8193 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001c96; 	X(MOV(*(dw*)(((db*)&word_352cc)), ax));	// 122597 mov     cs:word_352CC, ax ;~ 24ED:1C96
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001c9a; 	X(MOV(*(dw*)(((db*)&word_35126)), si));	// 122598 mov     cs:word_35126, si ;~ 24ED:1C9A
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001c9f; 	X(MOV(*(dw*)(((db*)&word_35128)), ds));	// 122599 mov     cs:word_35128, ds ;~ 24ED:1C9F
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001ca4; 	X(MOV(*(dw*)(((db*)&word_3512a)), bp));	// 122600 mov     cs:word_3512A, bp ;~ 24ED:1CA4
cs=0x24ed;eip=0x001ca9; 	T(ADD(bp, 0x319));	// 122601 add     bp, 319h ;~ 24ED:1CA9
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001cad; 	X(MOV(*(dw*)(((db*)&word_3512e)), bp));	// 122602 mov     cs:word_3512E, bp ;~ 24ED:1CAD
cs=0x24ed;eip=0x001cb2; 	T(MOV(di, bp));	// 122603 mov     di, bp ;~ 24ED:1CB2
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001cb4; 	X(MOV(*(dw*)(((db*)&word_3512c)), bp));	// 122604 mov     cs:word_3512C, bp ;~ 24ED:1CB4
cs=0x24ed;eip=0x001cb9; 	T(ADD(bp, 0x0CD9));	// 122605 add     bp, 0CD9h ;~ 24ED:1CB9
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001cbd; 	X(MOV(*(dw*)(((db*)&word_35130)), bp));	// 122606 mov     cs:word_35130, bp ;~ 24ED:1CBD
cs=0x24ed;eip=0x001cc2; 	T(ADD(bp, 0x3301));	// 122607 add     bp, 3301h ;~ 24ED:1CC2
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001cc6; 	X(MOV(*(dw*)(((db*)&word_35132)), bp));	// 122608 mov     cs:word_35132, bp ;~ 24ED:1CC6
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001ccb; 	X(MOV(*(dw*)(((db*)&word_3513a)), 0x0FEC0));	// 122609 mov     cs:word_3513A, 0FEC0h ;~ 24ED:1CCB
cs=0x24ed;eip=0x001cd2; 	X(PUSH(cs));	// 122610 push    cs ;~ 24ED:1CD2
cs=0x24ed;eip=0x001cd3; 	R(CALL(sub_351e0,0));	// 122611 call    near ptr sub_351E0 ;~ 24ED:1CD3
loc_35186:
	// 8194 
cs=0x24ed;eip=0x001cd6; 	X(PUSH(cs));	// 122614 push    cs ;~ 24ED:1CD6
cs=0x24ed;eip=0x001cd7; 	R(CALL(sub_3518d,0));	// 122615 call    sub_3518D ;~ 24ED:1CD7
cs=0x24ed;eip=0x001cda; 	R(JNC(loc_35186));	// 122616 jnb     short loc_35186 ;~ 24ED:1CDA
cs=0x24ed;eip=0x001cdc; 	R(RETF(0));	// 122617 retf ;~ 24ED:1CDC
sub_3518d:
	// 122622 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001cdd; 	T(MOV(ds, *(dw*)(((db*)&word_35128))));	// 122624 mov     ds, cs:word_35128 ;~ 24ED:1CDD
ret_24ed_1ce2:
	// 8195 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001ce2; 	T(MOV(di, *(dw*)(((db*)&word_3512c))));	// 122625 mov     di, cs:word_3512C ;~ 24ED:1CE2
cs=0x24ed;eip=0x001ce7; 	T(MOV(al, *(raddr(ss,di))));	// 122626 mov     al, ss:[di] ;~ 24ED:1CE7
cs=0x24ed;eip=0x001cea; 	T(XOR(ah, ah));	// 122627 xor     ah, ah ;~ 24ED:1CEA
cs=0x24ed;eip=0x001cec; 	T(INC(di));	// 122628 inc     di ;~ 24ED:1CEC
cs=0x24ed;eip=0x001ced; 	T(OR(al, al));	// 122629 or      al, al ;~ 24ED:1CED
cs=0x24ed;eip=0x001cef; 	R(JNS(loc_351d8));	// 122630 jns     short loc_351D8 ;~ 24ED:1CEF
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001cf1; 	T(MOV(di, *(dw*)(((db*)&word_3512e))));	// 122631 mov     di, cs:word_3512E ;~ 24ED:1CF1
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001cf6; 	X(NEG(*(dw*)(((db*)&word_3513a))));	// 122632 neg     cs:word_3513A ;~ 24ED:1CF6
cs=0x24ed;eip=0x001cfb; 	R(JS(sub_351e0));	// 122633 js      short near ptr sub_351E0 ;~ 24ED:1CFB
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001cfd; 	X(MOV(*(dw*)(((db*)&word_35328)), 0x0FEDF));	// 122634 mov     cs:word_35328, 0FEDFh ;~ 24ED:1CFD
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001d04; 	X(MOV(*(dw*)(((db*)&word_353ab)), 0x0FE5C));	// 122635 mov     cs:word_353AB, 0FE5Ch ;~ 24ED:1D04
cs=0x24ed;eip=0x001d0b; 	T(MOV(ax, 0x64A0));	// 122636 mov     ax, 64A0h ;~ 24ED:1D0B
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001d0e; 	X(MOV(*(dw*)(((db*)&word_35136)), ax));	// 122637 mov     cs:word_35136, ax ;~ 24ED:1D0E
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001d12; 	X(MOV(*(dw*)(((db*)&word_35138)), ax));	// 122638 mov     cs:word_35138, ax ;~ 24ED:1D12
cs=0x24ed;eip=0x001d16; 	T(DEC(ax));	// 122639 dec     ax ;~ 24ED:1D16
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001d17; 	X(MOV(*(dw*)(((db*)&word_35134)), ax));	// 122640 mov     cs:word_35134, ax ;~ 24ED:1D17
cs=0x24ed;eip=0x001d1b; 	T(MOV(al, *(raddr(ss,di-1))));	// 122641 mov     al, ss:[di-1] ;~ 24ED:1D1B
cs=0x24ed;eip=0x001d1f; 	T(CBW);	// 122642 cbw ;~ 24ED:1D1F
cs=0x24ed;eip=0x001d20; 	T(SUB(di, ax));	// 122643 sub     di, ax ;~ 24ED:1D20
cs=0x24ed;eip=0x001d22; 	T(MOV(al, *(raddr(ss,di))));	// 122644 mov     al, ss:[di] ;~ 24ED:1D22
cs=0x24ed;eip=0x001d25; 	T(XOR(ah, ah));	// 122645 xor     ah, ah ;~ 24ED:1D25
cs=0x24ed;eip=0x001d27; 	T(INC(di));	// 122646 inc     di ;~ 24ED:1D27
loc_351d8:
	// 8196 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001d28; 	T(MOV(si, *(dw*)(((db*)&word_35130))));	// 122649 mov     si, cs:word_35130 ;~ 24ED:1D28
cs=0x24ed;eip=0x001d2d; __disp=byte_35327;
	R(JMP(__dispatch_call));	// 122650 jmp     near ptr byte_35327 ;~ 24ED:1D2D
sub_351e0:
	// 122657 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001d30; 	X(MOV(*(dw*)(((db*)&word_3512c)), di));	// 122659 mov     cs:word_3512C, di ;~ 24ED:1D30
ret_24ed_1d35:
	// 8197 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001d35; 	X(MOV(*(dw*)(((db*)&word_35328)), 0x0FEE1));	// 122660 mov     cs:word_35328, 0FEE1h ;~ 24ED:1D35
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001d3c; 	X(MOV(*(dw*)(((db*)&word_353ab)), 0x0FE5E));	// 122661 mov     cs:word_353AB, 0FE5Eh ;~ 24ED:1D3C
cs=0x24ed;eip=0x001d43; 	T(MOV(ax, 0x6360));	// 122662 mov     ax, 6360h ;~ 24ED:1D43
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001d46; 	X(MOV(*(dw*)(((db*)&word_35136)), ax));	// 122663 mov     cs:word_35136, ax ;~ 24ED:1D46
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001d4a; 	X(MOV(*(dw*)(((db*)&word_35138)), ax));	// 122664 mov     cs:word_35138, ax ;~ 24ED:1D4A
cs=0x24ed;eip=0x001d4e; 	T(DEC(ax));	// 122665 dec     ax ;~ 24ED:1D4E
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001d4f; 	X(MOV(*(dw*)(((db*)&word_35134)), ax));	// 122666 mov     cs:word_35134, ax ;~ 24ED:1D4F
cs=0x24ed;eip=0x001d53; 	T(MOV(ax, ss));	// 122667 mov     ax, ss ;~ 24ED:1D53
cs=0x24ed;eip=0x001d55; 	T(MOV(ds, ax));	// 122668 mov     ds, ax ;~ 24ED:1D55
cs=0x24ed;eip=0x001d57; 	T(STC);	// 122669 stc ;~ 24ED:1D57
cs=0x24ed;eip=0x001d58; 	R(RETF(0));	// 122670 retf ;~ 24ED:1D58
seg002_1e7a_proc:
	// 122705 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001e7a; 	X(MOV(*(dw*)(((db*)&word_3512c)), di));	// 122705 mov     cs:word_3512C, di ;~ 24ED:1E7A
ret_24ed_1e7f:
	// 8198 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001e7f; 	T(MOV(ax, *(dw*)(((db*)&word_3513a))));	// 122706 mov     ax, cs:word_3513A ;~ 24ED:1E7F
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001e83; 	T(ADD(ax, *(dw*)(((db*)&word_35138))));	// 122707 add     ax, cs:word_35138 ;~ 24ED:1E83
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001e88; 	X(MOV(*(dw*)(((db*)&word_35138)), ax));	// 122708 mov     cs:word_35138, ax ;~ 24ED:1E88
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001e8c; 	X(MOV(*(dw*)(((db*)&word_35136)), ax));	// 122709 mov     cs:word_35136, ax ;~ 24ED:1E8C
cs=0x24ed;eip=0x001e90; 	T(DEC(ax));	// 122710 dec     ax ;~ 24ED:1E90
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001e91; 	X(MOV(*(dw*)(((db*)&word_35134)), ax));	// 122711 mov     cs:word_35134, ax ;~ 24ED:1E91
cs=0x24ed;eip=0x001e95; 	T(CLC);	// 122712 clc ;~ 24ED:1E95
cs=0x24ed;eip=0x001e96; 	T(MOV(ax, ss));	// 122713 mov     ax, ss ;~ 24ED:1E96
cs=0x24ed;eip=0x001e98; 	T(MOV(ds, ax));	// 122714 mov     ds, ax ;~ 24ED:1E98
cs=0x24ed;eip=0x001e9a; 	R(RETF(0));	// 122715 retf ;~ 24ED:1E9A
ret_24ed_1efd:
	// 8199 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001efd; 	X(MOV(*(dw*)(((db*)&word_3512c)), di));	// 122729 mov     cs:word_3512C, di ;~ 24ED:1EFD
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f02; 	T(MOV(ax, *(dw*)(((db*)&word_3513a))));	// 122730 mov     ax, cs:word_3513A ;~ 24ED:1F02
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f06; 	T(ADD(ax, *(dw*)(((db*)&word_35138))));	// 122731 add     ax, cs:word_35138 ;~ 24ED:1F06
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f0b; 	X(MOV(*(dw*)(((db*)&word_35138)), ax));	// 122732 mov     cs:word_35138, ax ;~ 24ED:1F0B
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f0f; 	X(MOV(*(dw*)(((db*)&word_35136)), ax));	// 122733 mov     cs:word_35136, ax ;~ 24ED:1F0F
cs=0x24ed;eip=0x001f13; 	T(DEC(ax));	// 122734 dec     ax ;~ 24ED:1F13
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f14; 	X(MOV(*(dw*)(((db*)&word_35134)), ax));	// 122735 mov     cs:word_35134, ax ;~ 24ED:1F14
cs=0x24ed;eip=0x001f18; 	T(CLC);	// 122736 clc ;~ 24ED:1F18
cs=0x24ed;eip=0x001f19; 	T(MOV(ax, ss));	// 122737 mov     ax, ss ;~ 24ED:1F19
cs=0x24ed;eip=0x001f1b; 	T(MOV(ds, ax));	// 122738 mov     ds, ax ;~ 24ED:1F1B
cs=0x24ed;eip=0x001f1d; 	R(RETF(0));	// 122739 retf ;~ 24ED:1F1D
loc_353ce:
	// 8200 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f1e; 	X(MOV(*(dw*)(((db*)&dword_33657)), di));	// 122743 mov     word ptr cs:dword_33657, di ;~ 24ED:1F1E
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f23; 	X(MOV(*(dw*)(((db*)&dword_33657)+2), es));	// 122744 mov     word ptr cs:dword_33657+2, es ;~ 24ED:1F23
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f28; 	X(MOV(*(dw*)(((db*)&word_3366b)), bp));	// 122745 mov     cs:word_3366B, bp ;~ 24ED:1F28
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f2d; 	X(MOV(*(dw*)(((db*)&word_33655)), si));	// 122746 mov     cs:word_33655, si ;~ 24ED:1F2D
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f32; 	X(MOV(*(dw*)(((db*)&word_33667)), 0x24));	// 122747 mov     cs:word_33667, 24h ; '$' ;~ 24ED:1F32
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f39; 	X(MOV(*(dw*)(((db*)&word_3365b)), bx));	// 122748 mov     cs:word_3365B, bx ;~ 24ED:1F39
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f3e; 	X(MOV(*(dw*)(((db*)&word_35138)), 0x504));	// 122749 mov     cs:word_35138, 504h ;~ 24ED:1F3E
cs=0x24ed;eip=0x001f45; 	T(SHL(ax, 3));	// 122750 shl     ax, 3 ;~ 24ED:1F45
cs=0x24ed;eip=0x001f48; 	R(JNS(loc_35462));	// 122751 jns     short loc_35462 ;~ 24ED:1F48
cs=0x24ed;eip=0x001f4a; 	T(NEG(ax));	// 122752 neg     ax ;~ 24ED:1F4A
cs=0x24ed;eip=0x001f4c; 	T(ADD(bp, ax));	// 122753 add     bp, ax ;~ 24ED:1F4C
cs=0x24ed;eip=0x001f4e; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0))));	// 122754 mov     cx, [bp+0] ;~ 24ED:1F4E
cs=0x24ed;eip=0x001f51; 	T(MOV(bx, *(dw*)(raddr(ss,bp+2))));	// 122755 mov     bx, [bp+2] ;~ 24ED:1F51
cs=0x24ed;eip=0x001f54; 	T(NEG(cx));	// 122756 neg     cx ;~ 24ED:1F54
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f56; 	T(MOV(di, *(dw*)(((db*)&word_33655))));	// 122757 mov     di, cs:word_33655 ;~ 24ED:1F56
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f5b; 	X(MOV(*(dw*)(((db*)&word_33669)), 0x8F7));	// 122758 mov     cs:word_33669, 8F7h ;~ 24ED:1F5B
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f62; 	X(ADD(*(dw*)(((db*)&word_3366b)), 0x2B0));	// 122759 add     cs:word_3366B, 2B0h ;~ 24ED:1F62
cs=0x24ed;eip=0x001f69; 	T(ADD(di, 0x8C));	// 122760 add     di, 8Ch ; 'Œ' ;~ 24ED:1F69
cs=0x24ed;eip=0x001f6d; 	R(CALL(sub_354a4,0));	// 122761 call    sub_354A4 ;~ 24ED:1F6D
loc_35420:
	// 8201 
cs=0x24ed;eip=0x001f70; 	T(SUB(bp, 8));	// 122764 sub     bp, 8 ;~ 24ED:1F70
cs=0x24ed;eip=0x001f73; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0))));	// 122765 mov     cx, [bp+0] ;~ 24ED:1F73
cs=0x24ed;eip=0x001f76; 	T(MOV(bx, *(dw*)(raddr(ss,bp+2))));	// 122766 mov     bx, [bp+2] ;~ 24ED:1F76
cs=0x24ed;eip=0x001f79; 	T(NEG(cx));	// 122767 neg     cx ;~ 24ED:1F79
cs=0x24ed;eip=0x001f7b; 	R(JZ(loc_35444));	// 122768 jz      short loc_35444 ;~ 24ED:1F7B
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f7d; 	T(MOV(di, *(dw*)(((db*)&word_33655))));	// 122769 mov     di, cs:word_33655 ;~ 24ED:1F7D
cs=0x24ed;eip=0x001f82; 	T(ADD(di, 0x6CC));	// 122770 add     di, 6CCh ;~ 24ED:1F82
cs=0x24ed;eip=0x001f86; 	R(CALL(sub_354a4,0));	// 122771 call    sub_354A4 ;~ 24ED:1F86
cs=0x24ed;eip=0x001f89; 	R(CALL(sub_3558d,0));	// 122772 call    sub_3558D ;~ 24ED:1F89
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f8c; 	X(DEC(*(dw*)(((db*)&word_33667))));	// 122773 dec     cs:word_33667 ;~ 24ED:1F8C
cs=0x24ed;eip=0x001f91; 	R(JNZ(loc_35420));	// 122774 jnz     short loc_35420 ;~ 24ED:1F91
cs=0x24ed;eip=0x001f93; 	R(RETF(0));	// 122775 retf ;~ 24ED:1F93
loc_35444:
	// 8202 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f94; 	T(MOV(di, *(dw*)(((db*)&word_33655))));	// 122779 mov     di, cs:word_33655 ;~ 24ED:1F94
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001f99; 	X(MOV(*(dw*)(((db*)&word_33669)), 0x92F));	// 122780 mov     cs:word_33669, 92Fh ;~ 24ED:1F99
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001fa0; 	X(ADD(*(dw*)(((db*)&word_3366b)), 8));	// 122781 add     cs:word_3366B, 8 ;~ 24ED:1FA0
cs=0x24ed;eip=0x001fa6; 	T(ADD(di, 0x6CC));	// 122782 add     di, 6CCh ;~ 24ED:1FA6
cs=0x24ed;eip=0x001faa; 	R(CALL(sub_354a4,0));	// 122783 call    sub_354A4 ;~ 24ED:1FAA
cs=0x24ed;eip=0x001fad; 	R(CALL(sub_3558d,0));	// 122784 call    sub_3558D ;~ 24ED:1FAD
cs=0x24ed;eip=0x001fb0; 	R(JMP(loc_3549c));	// 122785 jmp     short loc_3549C ;~ 24ED:1FB0
loc_35462:
	// 8203 
cs=0x24ed;eip=0x001fb2; 	T(ADD(bp, ax));	// 122789 add     bp, ax ;~ 24ED:1FB2
cs=0x24ed;eip=0x001fb4; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0))));	// 122790 mov     cx, [bp+0] ;~ 24ED:1FB4
cs=0x24ed;eip=0x001fb7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+2))));	// 122791 mov     bx, [bp+2] ;~ 24ED:1FB7
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001fba; 	T(MOV(di, *(dw*)(((db*)&word_33655))));	// 122792 mov     di, cs:word_33655 ;~ 24ED:1FBA
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001fbf; 	X(MOV(*(dw*)(((db*)&word_33669)), 0x92F));	// 122793 mov     cs:word_33669, 92Fh ;~ 24ED:1FBF
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001fc6; 	X(ADD(*(dw*)(((db*)&word_3366b)), 0x2B8));	// 122794 add     cs:word_3366B, 2B8h ;~ 24ED:1FC6
cs=0x24ed;eip=0x001fcd; 	T(ADD(di, 0x8C));	// 122795 add     di, 8Ch ; 'Œ' ;~ 24ED:1FCD
cs=0x24ed;eip=0x001fd1; 	R(CALL(sub_354a4,0));	// 122796 call    sub_354A4 ;~ 24ED:1FD1
loc_35484:
	// 8204 
cs=0x24ed;eip=0x001fd4; 	T(ADD(bp, 8));	// 122799 add     bp, 8 ;~ 24ED:1FD4
cs=0x24ed;eip=0x001fd7; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0))));	// 122800 mov     cx, [bp+0] ;~ 24ED:1FD7
cs=0x24ed;eip=0x001fda; 	T(MOV(bx, *(dw*)(raddr(ss,bp+2))));	// 122801 mov     bx, [bp+2] ;~ 24ED:1FDA
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001fdd; 	T(MOV(di, *(dw*)(((db*)&word_33655))));	// 122802 mov     di, cs:word_33655 ;~ 24ED:1FDD
cs=0x24ed;eip=0x001fe2; 	T(ADD(di, 0x6CC));	// 122803 add     di, 6CCh ;~ 24ED:1FE2
cs=0x24ed;eip=0x001fe6; 	R(CALL(sub_354a4,0));	// 122804 call    sub_354A4 ;~ 24ED:1FE6
cs=0x24ed;eip=0x001fe9; 	R(CALL(sub_355bd,0));	// 122805 call    sub_355BD ;~ 24ED:1FE9
loc_3549c:
	// 8205 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001fec; 	X(DEC(*(dw*)(((db*)&word_33667))));	// 122808 dec     cs:word_33667 ;~ 24ED:1FEC
cs=0x24ed;eip=0x001ff1; 	R(JNZ(loc_35484));	// 122809 jnz     short loc_35484 ;~ 24ED:1FF1
cs=0x24ed;eip=0x001ff3; 	R(RETF(0));	// 122810 retf ;~ 24ED:1FF3
sub_354a4:
	// 122815 
cs=0x24ed;eip=0x001ff4; 	X(PUSH(dx));	// 122817 push    dx ;~ 24ED:1FF4
ret_24ed_1ff5:
	// 8206 
cs=0x24ed;eip=0x001ff5; 	X(PUSH(ds));	// 122818 push    ds ;~ 24ED:1FF5
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x001ff6; 	T(LDS(si, *(dd*)(((db*)&dword_33657))));	// 122819 lds     si, cs:dword_33657 ;~ 24ED:1FF6
cs=0x24ed;eip=0x001ffb; 	T(MOV(ax, ss));	// 122820 mov     ax, ss ;~ 24ED:1FFB
cs=0x24ed;eip=0x001ffd; 	T(MOV(es, ax));	// 122821 mov     es, ax ;~ 24ED:1FFD
cs=0x24ed;eip=0x001fff; 	T(ADD(si, cx));	// 122822 add     si, cx ;~ 24ED:1FFF
cs=0x24ed;eip=0x002001; 	T(ADD(bx, bx));	// 122823 add     bx, bx ;~ 24ED:2001
cs=0x24ed;eip=0x002003; 	T(MOV(ax, dx));	// 122824 mov     ax, dx ;~ 24ED:2003
cs=0x24ed;eip=0x002005; 	T(MUL1_2(bx));	// 122825 mul     bx ;~ 24ED:2005
cs=0x24ed;eip=0x002007; 	X(MOV(*(dw*)(raddr(ss,bp+4)), dx));	// 122826 mov     [bp+4], dx ;~ 24ED:2007
cs=0x24ed;eip=0x00200a; 	T(ROL(ax, 2));	// 122827 rol     ax, 2 ;~ 24ED:200A
cs=0x24ed;eip=0x00200d; 	T(AND(ax, 3));	// 122828 and     ax, 3 ;~ 24ED:200D
cs=0x24ed;eip=0x002010; 	T(SUB(di, ax));	// 122829 sub     di, ax ;~ 24ED:2010
cs=0x24ed;eip=0x002012; 	T(MOV(ax, dx));	// 122830 mov     ax, dx ;~ 24ED:2012
cs=0x24ed;eip=0x002014; 	T(MOV(cx, 0x58));	// 122831 mov     cx, 58h ; 'X' ;~ 24ED:2014
cs=0x24ed;eip=0x002017; 	T(CMP(bx, cx));	// 122832 cmp     bx, cx ;~ 24ED:2017
cs=0x24ed;eip=0x002019; 	R(JNC(loc_354f3));	// 122833 jnb     short loc_354F3 ;~ 24ED:2019
cs=0x24ed;eip=0x00201b; 	T(SUB(cx, bx));	// 122834 sub     cx, bx ;~ 24ED:201B
cs=0x24ed;eip=0x00201d; 	T(SHL(cx, 1));	// 122835 shl     cx, 1 ;~ 24ED:201D
cs=0x24ed;eip=0x00201f; 	T(ADD(di, cx));	// 122836 add     di, cx ;~ 24ED:201F
cs=0x24ed;eip=0x002021; 	T(MOV(cx, bx));	// 122837 mov     cx, bx ;~ 24ED:2021
cs=0x24ed;eip=0x002023; 	T(SHR(cx, 1));	// 122838 shr     cx, 1 ;~ 24ED:2023
cs=0x24ed;eip=0x002025; 	T(SUB(ax, cx));	// 122839 sub     ax, cx ;~ 24ED:2025
cs=0x24ed;eip=0x002027; 	R(JNS(loc_354db));	// 122840 jns     short loc_354DB ;~ 24ED:2027
cs=0x24ed;eip=0x002029; 	T(ADD(ax, bx));	// 122841 add     ax, bx ;~ 24ED:2029
loc_354db:
	// 8207 
cs=0x24ed;eip=0x00202b; 	T(MOV(cx, bx));	// 122844 mov     cx, bx ;~ 24ED:202B
cs=0x24ed;eip=0x00202d; 	T(SUB(bx, ax));	// 122845 sub     bx, ax ;~ 24ED:202D
cs=0x24ed;eip=0x00202f; 	T(INC(cx));	// 122846 inc     cx ;~ 24ED:202F
cs=0x24ed;eip=0x002030; 	T(SUB(cx, bx));	// 122847 sub     cx, bx ;~ 24ED:2030
cs=0x24ed;eip=0x002032; 	R(JNS(loc_35514));	// 122848 jns     short loc_35514 ;~ 24ED:2032
cs=0x24ed;eip=0x002034; 	T(ADD(cx, bx));	// 122849 add     cx, bx ;~ 24ED:2034
cs=0x24ed;eip=0x002036; 	T(ADD(si, ax));	// 122850 add     si, ax ;~ 24ED:2036
cs=0x24ed;eip=0x002038; 	T(MOV(al, *(raddr(ds,si-1))));	// 122851 mov     al, [si-1] ;~ 24ED:2038
cs=0x24ed;eip=0x00203b; 	T(SHL(al, 4));	// 122852 shl     al, 4 ;~ 24ED:203B
cs=0x24ed;eip=0x00203e; 	T(OR(al, 8));	// 122853 or      al, 8 ;~ 24ED:203E
cs=0x24ed;eip=0x002040; 	R(JMP(loc_35559));	// 122854 jmp     short loc_35559 ;~ 24ED:2040
loc_354f3:
	// 8208 
cs=0x24ed;eip=0x002043; 	T(SHR(cx, 1));	// 122860 shr     cx, 1 ;~ 24ED:2043
cs=0x24ed;eip=0x002045; 	T(SUB(ax, cx));	// 122861 sub     ax, cx ;~ 24ED:2045
cs=0x24ed;eip=0x002047; 	R(JNS(loc_354fb));	// 122862 jns     short loc_354FB ;~ 24ED:2047
cs=0x24ed;eip=0x002049; 	T(ADD(ax, bx));	// 122863 add     ax, bx ;~ 24ED:2049
loc_354fb:
	// 8209 
cs=0x24ed;eip=0x00204b; 	T(SUB(bx, ax));	// 122866 sub     bx, ax ;~ 24ED:204B
cs=0x24ed;eip=0x00204d; 	T(MOV(cx, 0x58));	// 122867 mov     cx, 58h ; 'X' ;~ 24ED:204D
cs=0x24ed;eip=0x002050; 	T(INC(cx));	// 122868 inc     cx ;~ 24ED:2050
cs=0x24ed;eip=0x002051; 	T(SUB(cx, bx));	// 122869 sub     cx, bx ;~ 24ED:2051
cs=0x24ed;eip=0x002053; 	R(JNS(loc_35514));	// 122870 jns     short loc_35514 ;~ 24ED:2053
cs=0x24ed;eip=0x002055; 	T(ADD(cx, bx));	// 122871 add     cx, bx ;~ 24ED:2055
cs=0x24ed;eip=0x002057; 	T(ADD(si, ax));	// 122872 add     si, ax ;~ 24ED:2057
cs=0x24ed;eip=0x002059; 	T(MOV(al, *(raddr(ds,si-1))));	// 122873 mov     al, [si-1] ;~ 24ED:2059
cs=0x24ed;eip=0x00205c; 	T(SHL(al, 4));	// 122874 shl     al, 4 ;~ 24ED:205C
cs=0x24ed;eip=0x00205f; 	T(OR(al, 8));	// 122875 or      al, 8 ;~ 24ED:205F
cs=0x24ed;eip=0x002061; 	R(JMP(loc_35559));	// 122876 jmp     short loc_35559 ;~ 24ED:2061
loc_35514:
	// 8210 
cs=0x24ed;eip=0x002064; 	T(OR(bx, bx));	// 122882 or      bx, bx ;~ 24ED:2064
cs=0x24ed;eip=0x002066; 	R(JZ(loc_35559));	// 122883 jz      short loc_35559 ;~ 24ED:2066
cs=0x24ed;eip=0x002068; 	T(XCHG(cx, bx));	// 122884 xchg    cx, bx ;~ 24ED:2068
cs=0x24ed;eip=0x00206a; 	X(PUSH(si));	// 122885 push    si ;~ 24ED:206A
cs=0x24ed;eip=0x00206b; 	T(ADD(si, ax));	// 122886 add     si, ax ;~ 24ED:206B
cs=0x24ed;eip=0x00206d; 	T(MOV(al, *(raddr(ds,si-1))));	// 122887 mov     al, [si-1] ;~ 24ED:206D
cs=0x24ed;eip=0x002070; 	T(SHL(al, 4));	// 122888 shl     al, 4 ;~ 24ED:2070
cs=0x24ed;eip=0x002073; 	T(OR(al, 8));	// 122889 or      al, 8 ;~ 24ED:2073
loc_35525:
	// 8211 
cs=0x24ed;eip=0x002075; 	T(MOV(dh, *(raddr(ds,si))));	// 122893 mov     dh, [si] ;~ 24ED:2075
cs=0x24ed;eip=0x002077; 	T(INC(si));	// 122894 inc     si ;~ 24ED:2077
cs=0x24ed;eip=0x002078; 	T(SHL(dh, 4));	// 122895 shl     dh, 4 ;~ 24ED:2078
cs=0x24ed;eip=0x00207b; 	T(OR(dh, 8));	// 122896 or      dh, 8 ;~ 24ED:207B
cs=0x24ed;eip=0x00207e; 	T(MOV(dl, dh));	// 122897 mov     dl, dh ;~ 24ED:207E
cs=0x24ed;eip=0x002080; 	T(SUB(dl, al));	// 122898 sub     dl, al ;~ 24ED:2080
cs=0x24ed;eip=0x002082; 	T(SAR(dl, 2));	// 122899 sar     dl, 2 ;~ 24ED:2082
cs=0x24ed;eip=0x002085; 	T(OR(dl, dl));	// 122900 or      dl, dl ;~ 24ED:2085
cs=0x24ed;eip=0x002087; 	R(JZ(loc_3554e));	// 122901 jz      short loc_3554E ;~ 24ED:2087
cs=0x24ed;eip=0x002089; 	T(MOV(ah, al));	// 122902 mov     ah, al ;~ 24ED:2089
cs=0x24ed;eip=0x00208b; 	T(ADD(ah, dl));	// 122903 add     ah, dl ;~ 24ED:208B
cs=0x24ed;eip=0x00208d; 	X(STOSW);	// 122904 stosw ;~ 24ED:208D
cs=0x24ed;eip=0x00208e; 	T(ADD(ah, dl));	// 122905 add     ah, dl ;~ 24ED:208E
cs=0x24ed;eip=0x002090; 	T(MOV(al, ah));	// 122906 mov     al, ah ;~ 24ED:2090
cs=0x24ed;eip=0x002092; 	T(ADD(ah, dl));	// 122907 add     ah, dl ;~ 24ED:2092
cs=0x24ed;eip=0x002094; 	X(STOSW);	// 122908 stosw ;~ 24ED:2094
cs=0x24ed;eip=0x002095; 	T(MOV(al, dh));	// 122909 mov     al, dh ;~ 24ED:2095
cs=0x24ed;eip=0x002097; 	R(LOOP(loc_35525));	// 122910 loop    loc_35525 ;~ 24ED:2097
cs=0x24ed;eip=0x002099; 	T(MOV(cx, bx));	// 122911 mov     cx, bx ;~ 24ED:2099
cs=0x24ed;eip=0x00209b; 	X(POP(si));	// 122912 pop     si ;~ 24ED:209B
cs=0x24ed;eip=0x00209c; 	R(JMP(loc_35559));	// 122913 jmp     short loc_35559 ;~ 24ED:209C
loc_3554e:
	// 8212 
cs=0x24ed;eip=0x00209e; 	T(MOV(ah, al));	// 122917 mov     ah, al ;~ 24ED:209E
cs=0x24ed;eip=0x0020a0; 	X(STOSW);	// 122918 stosw ;~ 24ED:20A0
cs=0x24ed;eip=0x0020a1; 	X(STOSW);	// 122919 stosw ;~ 24ED:20A1
cs=0x24ed;eip=0x0020a2; 	T(MOV(al, dh));	// 122920 mov     al, dh ;~ 24ED:20A2
cs=0x24ed;eip=0x0020a4; 	R(LOOP(loc_35525));	// 122921 loop    loc_35525 ;~ 24ED:20A4
cs=0x24ed;eip=0x0020a6; 	T(MOV(cx, bx));	// 122922 mov     cx, bx ;~ 24ED:20A6
cs=0x24ed;eip=0x0020a8; 	X(POP(si));	// 122923 pop     si ;~ 24ED:20A8
loc_35559:
	// 8213 
cs=0x24ed;eip=0x0020a9; 	R(JCXZ(loc_3557f));	// 122927 jcxz    short loc_3557F ;~ 24ED:20A9
loc_3555b:
	// 8214 
cs=0x24ed;eip=0x0020ab; 	T(MOV(dh, *(raddr(ds,si))));	// 122931 mov     dh, [si] ;~ 24ED:20AB
cs=0x24ed;eip=0x0020ad; 	T(INC(si));	// 122932 inc     si ;~ 24ED:20AD
cs=0x24ed;eip=0x0020ae; 	T(SHL(dh, 4));	// 122933 shl     dh, 4 ;~ 24ED:20AE
cs=0x24ed;eip=0x0020b1; 	T(OR(dh, 8));	// 122934 or      dh, 8 ;~ 24ED:20B1
cs=0x24ed;eip=0x0020b4; 	T(MOV(dl, dh));	// 122935 mov     dl, dh ;~ 24ED:20B4
cs=0x24ed;eip=0x0020b6; 	T(SUB(dl, al));	// 122936 sub     dl, al ;~ 24ED:20B6
cs=0x24ed;eip=0x0020b8; 	T(SAR(dl, 2));	// 122937 sar     dl, 2 ;~ 24ED:20B8
cs=0x24ed;eip=0x0020bb; 	T(OR(dl, dl));	// 122938 or      dl, dl ;~ 24ED:20BB
cs=0x24ed;eip=0x0020bd; 	R(JZ(loc_35582));	// 122939 jz      short loc_35582 ;~ 24ED:20BD
cs=0x24ed;eip=0x0020bf; 	T(MOV(ah, al));	// 122940 mov     ah, al ;~ 24ED:20BF
cs=0x24ed;eip=0x0020c1; 	T(ADD(ah, dl));	// 122941 add     ah, dl ;~ 24ED:20C1
cs=0x24ed;eip=0x0020c3; 	X(STOSW);	// 122942 stosw ;~ 24ED:20C3
cs=0x24ed;eip=0x0020c4; 	T(ADD(ah, dl));	// 122943 add     ah, dl ;~ 24ED:20C4
cs=0x24ed;eip=0x0020c6; 	T(MOV(al, ah));	// 122944 mov     al, ah ;~ 24ED:20C6
cs=0x24ed;eip=0x0020c8; 	T(ADD(ah, dl));	// 122945 add     ah, dl ;~ 24ED:20C8
cs=0x24ed;eip=0x0020ca; 	X(STOSW);	// 122946 stosw ;~ 24ED:20CA
cs=0x24ed;eip=0x0020cb; 	T(MOV(al, dh));	// 122947 mov     al, dh ;~ 24ED:20CB
cs=0x24ed;eip=0x0020cd; 	R(LOOP(loc_3555b));	// 122948 loop    loc_3555B ;~ 24ED:20CD
loc_3557f:
	// 8215 
cs=0x24ed;eip=0x0020cf; 	X(POP(ds));	// 122951 pop     ds ;~ 24ED:20CF
cs=0x24ed;eip=0x0020d0; 	X(POP(dx));	// 122952 pop     dx ;~ 24ED:20D0
cs=0x24ed;eip=0x0020d1; 	R(RETN(0));	// 122953 retn ;~ 24ED:20D1
loc_35582:
	// 8216 
cs=0x24ed;eip=0x0020d2; 	T(MOV(ah, al));	// 122957 mov     ah, al ;~ 24ED:20D2
cs=0x24ed;eip=0x0020d4; 	X(STOSW);	// 122958 stosw ;~ 24ED:20D4
cs=0x24ed;eip=0x0020d5; 	X(STOSW);	// 122959 stosw ;~ 24ED:20D5
cs=0x24ed;eip=0x0020d6; 	T(MOV(al, dh));	// 122960 mov     al, dh ;~ 24ED:20D6
cs=0x24ed;eip=0x0020d8; 	R(LOOP(loc_3555b));	// 122961 loop    loc_3555B ;~ 24ED:20D8
cs=0x24ed;eip=0x0020da; 	X(POP(ds));	// 122962 pop     ds ;~ 24ED:20DA
cs=0x24ed;eip=0x0020db; 	X(POP(dx));	// 122963 pop     dx ;~ 24ED:20DB
cs=0x24ed;eip=0x0020dc; 	R(RETN(0));	// 122964 retn ;~ 24ED:20DC
sub_3558d:
	// 122971 
cs=0x24ed;eip=0x0020dd; 	X(PUSH(dx));	// 122973 push    dx ;~ 24ED:20DD
ret_24ed_20de:
	// 8217 
cs=0x24ed;eip=0x0020de; 	X(PUSH(bp));	// 122974 push    bp ;~ 24ED:20DE
cs=0x24ed;eip=0x0020df; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0A))));	// 122975 mov     cx, [bp+0Ah] ;~ 24ED:20DF
cs=0x24ed;eip=0x0020e2; 	T(MOV(dx, *(dw*)(raddr(ss,bp+2))));	// 122976 mov     dx, [bp+2] ;~ 24ED:20E2
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0020e5; 	T(MOV(di, *(dw*)(((db*)&word_33655))));	// 122977 mov     di, cs:word_33655 ;~ 24ED:20E5
cs=0x24ed;eip=0x0020ea; 	T(ADD(di, 0x13C));	// 122978 add     di, 13Ch ;~ 24ED:20EA
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0020ee; 	X(MOV(*(dw*)(((db*)&word_33663)), 0x0B0));	// 122979 mov     cs:word_33663, 0B0h ; '°' ;~ 24ED:20EE
cs=0x24ed;eip=0x0020f5; 	T(MOV(si, di));	// 122980 mov     si, di ;~ 24ED:20F5
cs=0x24ed;eip=0x0020f7; 	T(MOV(ax, 0x190));	// 122981 mov     ax, 190h ;~ 24ED:20F7
cs=0x24ed;eip=0x0020fa; 	T(ADD(di, ax));	// 122982 add     di, ax ;~ 24ED:20FA
cs=0x24ed;eip=0x0020fc; 	T(MOV(bp, di));	// 122983 mov     bp, di ;~ 24ED:20FC
cs=0x24ed;eip=0x0020fe; 	T(ADD(di, ax));	// 122984 add     di, ax ;~ 24ED:20FE
cs=0x24ed;eip=0x002100; 	T(MOV(bx, di));	// 122985 mov     bx, di ;~ 24ED:2100
cs=0x24ed;eip=0x002102; 	T(ADD(di, ax));	// 122986 add     di, ax ;~ 24ED:2102
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002104; 	X(MOV(*(dw*)(((db*)&word_33665)), di));	// 122987 mov     cs:word_33665, di ;~ 24ED:2104
cs=0x24ed;eip=0x002109; 	T(ADD(di, ax));	// 122988 add     di, ax ;~ 24ED:2109
cs=0x24ed;eip=0x00210b; 	R(JMP(loc_355ed));	// 122989 jmp     short loc_355ED ;~ 24ED:210B
sub_355bd:
	// 122996 
cs=0x24ed;eip=0x00210d; 	X(PUSH(dx));	// 122997 push    dx ;~ 24ED:210D
ret_24ed_210e:
	// 8218 
cs=0x24ed;eip=0x00210e; 	X(PUSH(bp));	// 122998 push    bp ;~ 24ED:210E
cs=0x24ed;eip=0x00210f; 	T(MOV(cx, *(dw*)(raddr(ss,bp+2))));	// 122999 mov     cx, [bp+2] ;~ 24ED:210F
cs=0x24ed;eip=0x002112; 	T(MOV(dx, *(dw*)(raddr(ss,bp-6))));	// 123000 mov     dx, [bp-6] ;~ 24ED:2112
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002115; 	T(MOV(di, *(dw*)(((db*)&word_33655))));	// 123001 mov     di, cs:word_33655 ;~ 24ED:2115
cs=0x24ed;eip=0x00211a; 	T(ADD(di, 0x13C));	// 123002 add     di, 13Ch ;~ 24ED:211A
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00211e; 	X(MOV(*(dw*)(((db*)&word_33663)), 0x0B0));	// 123003 mov     cs:word_33663, 0B0h ; '°' ;~ 24ED:211E
cs=0x24ed;eip=0x002125; 	X(PUSH(di));	// 123004 push    di ;~ 24ED:2125
cs=0x24ed;eip=0x002126; 	T(MOV(ax, 0x190));	// 123005 mov     ax, 190h ;~ 24ED:2126
cs=0x24ed;eip=0x002129; 	T(ADD(di, ax));	// 123006 add     di, ax ;~ 24ED:2129
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00212b; 	X(MOV(*(dw*)(((db*)&word_33665)), di));	// 123007 mov     cs:word_33665, di ;~ 24ED:212B
cs=0x24ed;eip=0x002130; 	T(ADD(di, ax));	// 123008 add     di, ax ;~ 24ED:2130
cs=0x24ed;eip=0x002132; 	T(MOV(bx, di));	// 123009 mov     bx, di ;~ 24ED:2132
cs=0x24ed;eip=0x002134; 	T(ADD(di, ax));	// 123010 add     di, ax ;~ 24ED:2134
cs=0x24ed;eip=0x002136; 	T(MOV(bp, di));	// 123011 mov     bp, di ;~ 24ED:2136
cs=0x24ed;eip=0x002138; 	T(ADD(di, ax));	// 123012 add     di, ax ;~ 24ED:2138
cs=0x24ed;eip=0x00213a; 	T(MOV(si, di));	// 123013 mov     si, di ;~ 24ED:213A
cs=0x24ed;eip=0x00213c; 	X(POP(di));	// 123014 pop     di ;~ 24ED:213C
loc_355ed:
	// 8219 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00213d; 	X(PUSH(*(dw*)(((db*)&word_33663))));	// 123017 push    cs:word_33663 ;~ 24ED:213D
cs=0x24ed;eip=0x002142; 	X(PUSH(di));	// 123018 push    di ;~ 24ED:2142
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002143; 	X(PUSH(*(dw*)(((db*)&word_33665))));	// 123019 push    cs:word_33665 ;~ 24ED:2143
cs=0x24ed;eip=0x002148; 	X(PUSH(bx));	// 123020 push    bx ;~ 24ED:2148
cs=0x24ed;eip=0x002149; 	X(PUSH(bp));	// 123021 push    bp ;~ 24ED:2149
cs=0x24ed;eip=0x00214a; 	X(PUSH(si));	// 123022 push    si ;~ 24ED:214A
cs=0x24ed;eip=0x00214b; 	T(SUB(dx, cx));	// 123023 sub     dx, cx ;~ 24ED:214B
cs=0x24ed;eip=0x00214d; 	T(MOV(ax, ds));	// 123024 mov     ax, ds ;~ 24ED:214D
cs=0x24ed;eip=0x00214f; 	T(MOV(es, ax));	// 123025 mov     es, ax ;~ 24ED:214F
cs=0x24ed;eip=0x002151; 	T(XOR(ax, ax));	// 123026 xor     ax, ax ;~ 24ED:2151
cs=0x24ed;eip=0x002153; 	T(DIV2(cx));	// 123027 div     cx ;~ 24ED:2153
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002155; 	X(MOV(*(dw*)(((db*)&word_3365d)), ax));	// 123028 mov     cs:word_3365D, ax ;~ 24ED:2155
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002159; 	X(MOV(*(dw*)(((db*)&word_3365f)), ax));	// 123029 mov     cs:word_3365F, ax ;~ 24ED:2159
cs=0x24ed;eip=0x00215d; 	T(SHR(ax, 1));	// 123030 shr     ax, 1 ;~ 24ED:215D
cs=0x24ed;eip=0x00215f; 	T(MOV(dx, ax));	// 123031 mov     dx, ax ;~ 24ED:215F
cs=0x24ed;eip=0x002161; 	T(SHR(ax, 1));	// 123032 shr     ax, 1 ;~ 24ED:2161
cs=0x24ed;eip=0x002163; 	T(MOV(cx, dx));	// 123033 mov     cx, dx ;~ 24ED:2163
cs=0x24ed;eip=0x002165; 	T(ADD(cx, ax));	// 123034 add     cx, ax ;~ 24ED:2165
cs=0x24ed;eip=0x002167; 	T(ADD(ax, 0x80));	// 123035 add     ax, 80h ; '€' ;~ 24ED:2167
cs=0x24ed;eip=0x00216a; 	T(ADD(cx, 0x80));	// 123036 add     cx, 80h ; '€' ;~ 24ED:216A
cs=0x24ed;eip=0x00216e; 	T(ADD(dx, 0x80));	// 123037 add     dx, 80h ; '€' ;~ 24ED:216E
cs=0x24ed;eip=0x002172; 	T(MOV(cl, ch));	// 123038 mov     cl, ch ;~ 24ED:2172
cs=0x24ed;eip=0x002174; 	T(MOV(ch, ah));	// 123039 mov     ch, ah ;~ 24ED:2174
cs=0x24ed;eip=0x002176; 	T(MOV(dl, dh));	// 123040 mov     dl, dh ;~ 24ED:2176
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002178; 	X(MOV(*(dw*)(((db*)&word_33661)), cx));	// 123041 mov     cs:word_33661, cx ;~ 24ED:2178
loc_3562d:
	// 8220 
cs=0x24ed;eip=0x00217d; 	T(LODSB);	// 123045 lodsb ;~ 24ED:217D
cs=0x24ed;eip=0x00217e; 	T(MOV(ah, *(raddr(ds,di))));	// 123046 mov     ah, [di] ;~ 24ED:217E
cs=0x24ed;eip=0x002180; 	T(INC(di));	// 123047 inc     di ;~ 24ED:2180
cs=0x24ed;eip=0x002181; 	T(SUB(ah, al));	// 123048 sub     ah, al ;~ 24ED:2181
cs=0x24ed;eip=0x002183; 	T(SAR(ah, 2));	// 123049 sar     ah, 2 ;~ 24ED:2183
cs=0x24ed;eip=0x002186; 	T(ADD(al, ah));	// 123050 add     al, ah ;~ 24ED:2186
cs=0x24ed;eip=0x002188; 	X(MOV(*(raddr(ss,bp+0)), al));	// 123051 mov     [bp+0], al ;~ 24ED:2188
cs=0x24ed;eip=0x00218b; 	T(INC(bp));	// 123052 inc     bp ;~ 24ED:218B
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00218c; 	T(ADD(ch, *(db*)(((db*)&word_33661)+1)));	// 123053 add     ch, byte ptr cs:word_33661+1 ;~ 24ED:218C
cs=0x24ed;eip=0x002191; 	R(JC(loc_35674));	// 123054 jb      short loc_35674 ;~ 24ED:2191
loc_35643:
	// 8221 
cs=0x24ed;eip=0x002193; 	T(ADD(al, ah));	// 123057 add     al, ah ;~ 24ED:2193
cs=0x24ed;eip=0x002195; 	X(MOV(*(raddr(ds,bx)), al));	// 123058 mov     [bx], al ;~ 24ED:2195
cs=0x24ed;eip=0x002197; 	T(INC(bx));	// 123059 inc     bx ;~ 24ED:2197
cs=0x24ed;eip=0x002198; 	T(ADD(dl, dh));	// 123060 add     dl, dh ;~ 24ED:2198
cs=0x24ed;eip=0x00219a; 	R(JC(loc_3567a));	// 123061 jb      short loc_3567A ;~ 24ED:219A
loc_3564c:
	// 8222 
cs=0x24ed;eip=0x00219c; 	T(ADD(al, ah));	// 123064 add     al, ah ;~ 24ED:219C
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00219e; 	X(XCHG(di, *(dw*)(((db*)&word_33665))));	// 123065 xchg    di, cs:word_33665 ;~ 24ED:219E
cs=0x24ed;eip=0x0021a3; 	X(STOSB);	// 123066 stosb ;~ 24ED:21A3
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0021a4; 	T(ADD(cl, *(db*)(((db*)&word_33661))));	// 123067 add     cl, byte ptr cs:word_33661 ;~ 24ED:21A4
cs=0x24ed;eip=0x0021a9; 	R(JC(loc_3567f));	// 123068 jb      short loc_3567F ;~ 24ED:21A9
loc_3565b:
	// 8223 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0021ab; 	X(XCHG(di, *(dw*)(((db*)&word_33665))));	// 123071 xchg    di, cs:word_33665 ;~ 24ED:21AB
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0021b0; 	T(MOV(ax, *(dw*)(((db*)&word_3365d))));	// 123072 mov     ax, cs:word_3365D ;~ 24ED:21B0
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0021b4; 	X(ADD(*(dw*)(((db*)&word_3365f)), ax));	// 123073 add     cs:word_3365F, ax ;~ 24ED:21B4
cs=0x24ed;eip=0x0021b9; 	R(JC(loc_35682));	// 123074 jb      short loc_35682 ;~ 24ED:21B9
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0021bb; 	X(DEC(*(dw*)(((db*)&word_33663))));	// 123075 dec     cs:word_33663 ;~ 24ED:21BB
cs=0x24ed;eip=0x0021c0; 	R(JNZ(loc_3562d));	// 123076 jnz     short loc_3562D ;~ 24ED:21C0
cs=0x24ed;eip=0x0021c2; 	R(JMP(loc_3568a));	// 123077 jmp     short loc_3568A ;~ 24ED:21C2
loc_35674:
	// 8224 
cs=0x24ed;eip=0x0021c4; 	X(MOV(*(raddr(ss,bp+0)), al));	// 123081 mov     [bp+0], al ;~ 24ED:21C4
cs=0x24ed;eip=0x0021c7; 	T(INC(bp));	// 123082 inc     bp ;~ 24ED:21C7
cs=0x24ed;eip=0x0021c8; 	R(JMP(loc_35643));	// 123083 jmp     short loc_35643 ;~ 24ED:21C8
loc_3567a:
	// 8225 
cs=0x24ed;eip=0x0021ca; 	X(MOV(*(raddr(ds,bx)), al));	// 123087 mov     [bx], al ;~ 24ED:21CA
cs=0x24ed;eip=0x0021cc; 	T(INC(bx));	// 123088 inc     bx ;~ 24ED:21CC
cs=0x24ed;eip=0x0021cd; 	R(JMP(loc_3564c));	// 123089 jmp     short loc_3564C ;~ 24ED:21CD
loc_3567f:
	// 8226 
cs=0x24ed;eip=0x0021cf; 	X(STOSB);	// 123093 stosb ;~ 24ED:21CF
cs=0x24ed;eip=0x0021d0; 	R(JMP(loc_3565b));	// 123094 jmp     short loc_3565B ;~ 24ED:21D0
loc_35682:
	// 8227 
cs=0x24ed;eip=0x0021d2; 	T(INC(di));	// 123098 inc     di ;~ 24ED:21D2
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0021d3; 	X(DEC(*(dw*)(((db*)&word_33663))));	// 123099 dec     cs:word_33663 ;~ 24ED:21D3
cs=0x24ed;eip=0x0021d8; 	R(JNZ(loc_3562d));	// 123100 jnz     short loc_3562D ;~ 24ED:21D8
loc_3568a:
	// 8228 
cs=0x24ed;eip=0x0021da; 	X(POP(si));	// 123103 pop     si ;~ 24ED:21DA
cs=0x24ed;eip=0x0021db; 	X(POP(bp));	// 123104 pop     bp ;~ 24ED:21DB
cs=0x24ed;eip=0x0021dc; 	X(POP(bx));	// 123105 pop     bx ;~ 24ED:21DC
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0021dd; 	X(POP(*(dw*)(((db*)&word_33665))));	// 123106 pop     cs:word_33665 ;~ 24ED:21DD
cs=0x24ed;eip=0x0021e2; 	X(POP(di));	// 123107 pop     di ;~ 24ED:21E2
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0021e3; 	X(POP(*(dw*)(((db*)&word_33663))));	// 123108 pop     cs:word_33663 ;~ 24ED:21E3
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0021e8; 	T(MOV(cx, *(dw*)(((db*)&word_33661))));	// 123109 mov     cx, cs:word_33661 ;~ 24ED:21E8
cs=0x24ed;eip=0x0021ed; 	T(MOV(dl, dh));	// 123110 mov     dl, dh ;~ 24ED:21ED
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0021ef; 	T(MOV(ax, *(dw*)(((db*)&word_3365d))));	// 123111 mov     ax, cs:word_3365D ;~ 24ED:21EF
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0021f3; 	X(MOV(*(dw*)(((db*)&word_3365f)), ax));	// 123112 mov     cs:word_3365F, ax ;~ 24ED:21F3
cs=0x24ed;eip=0x0021f7; 	T(DEC(si));	// 123113 dec     si ;~ 24ED:21F7
cs=0x24ed;eip=0x0021f8; 	T(DEC(di));	// 123114 dec     di ;~ 24ED:21F8
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0021f9; 	X(DEC(*(dw*)(((db*)&word_33665))));	// 123115 dec     cs:word_33665 ;~ 24ED:21F9
cs=0x24ed;eip=0x0021fe; 	T(STD);	// 123116 std ;~ 24ED:21FE
loc_356af:
	// 8229 
cs=0x24ed;eip=0x0021ff; 	T(LODSB);	// 123119 lodsb ;~ 24ED:21FF
cs=0x24ed;eip=0x002200; 	T(MOV(ah, *(raddr(ds,di))));	// 123120 mov     ah, [di] ;~ 24ED:2200
cs=0x24ed;eip=0x002202; 	T(DEC(di));	// 123121 dec     di ;~ 24ED:2202
cs=0x24ed;eip=0x002203; 	T(SUB(ah, al));	// 123122 sub     ah, al ;~ 24ED:2203
cs=0x24ed;eip=0x002205; 	T(SAR(ah, 2));	// 123123 sar     ah, 2 ;~ 24ED:2205
cs=0x24ed;eip=0x002208; 	T(ADD(al, ah));	// 123124 add     al, ah ;~ 24ED:2208
cs=0x24ed;eip=0x00220a; 	T(DEC(bp));	// 123125 dec     bp ;~ 24ED:220A
cs=0x24ed;eip=0x00220b; 	X(MOV(*(raddr(ss,bp+0)), al));	// 123126 mov     [bp+0], al ;~ 24ED:220B
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00220e; 	T(ADD(ch, *(db*)(((db*)&word_33661)+1)));	// 123127 add     ch, byte ptr cs:word_33661+1 ;~ 24ED:220E
cs=0x24ed;eip=0x002213; 	R(JC(loc_356f7));	// 123128 jb      short loc_356F7 ;~ 24ED:2213
loc_356c5:
	// 8230 
cs=0x24ed;eip=0x002215; 	T(ADD(al, ah));	// 123131 add     al, ah ;~ 24ED:2215
cs=0x24ed;eip=0x002217; 	T(DEC(bx));	// 123132 dec     bx ;~ 24ED:2217
cs=0x24ed;eip=0x002218; 	X(MOV(*(raddr(ds,bx)), al));	// 123133 mov     [bx], al ;~ 24ED:2218
cs=0x24ed;eip=0x00221a; 	T(ADD(dl, dh));	// 123134 add     dl, dh ;~ 24ED:221A
cs=0x24ed;eip=0x00221c; 	R(JC(loc_356fd));	// 123135 jb      short loc_356FD ;~ 24ED:221C
loc_356ce:
	// 8231 
cs=0x24ed;eip=0x00221e; 	T(ADD(al, ah));	// 123138 add     al, ah ;~ 24ED:221E
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002220; 	X(XCHG(di, *(dw*)(((db*)&word_33665))));	// 123139 xchg    di, cs:word_33665 ;~ 24ED:2220
cs=0x24ed;eip=0x002225; 	X(STOSB);	// 123140 stosb ;~ 24ED:2225
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002226; 	T(ADD(cl, *(db*)(((db*)&word_33661))));	// 123141 add     cl, byte ptr cs:word_33661 ;~ 24ED:2226
cs=0x24ed;eip=0x00222b; 	R(JC(loc_35702));	// 123142 jb      short loc_35702 ;~ 24ED:222B
loc_356dd:
	// 8232 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00222d; 	X(XCHG(di, *(dw*)(((db*)&word_33665))));	// 123145 xchg    di, cs:word_33665 ;~ 24ED:222D
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002232; 	T(MOV(ax, *(dw*)(((db*)&word_3365d))));	// 123146 mov     ax, cs:word_3365D ;~ 24ED:2232
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002236; 	X(ADD(*(dw*)(((db*)&word_3365f)), ax));	// 123147 add     cs:word_3365F, ax ;~ 24ED:2236
cs=0x24ed;eip=0x00223b; 	R(JC(loc_35705));	// 123148 jb      short loc_35705 ;~ 24ED:223B
loc_356ed:
	// 8233 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00223d; 	X(DEC(*(dw*)(((db*)&word_33663))));	// 123151 dec     cs:word_33663 ;~ 24ED:223D
cs=0x24ed;eip=0x002242; 	R(JNZ(loc_356af));	// 123152 jnz     short loc_356AF ;~ 24ED:2242
cs=0x24ed;eip=0x002244; 	T(CLD);	// 123153 cld ;~ 24ED:2244
cs=0x24ed;eip=0x002245; 	R(JMP(loc_35708));	// 123154 jmp     short loc_35708 ;~ 24ED:2245
loc_356f7:
	// 8234 
cs=0x24ed;eip=0x002247; 	T(DEC(bp));	// 123158 dec     bp ;~ 24ED:2247
cs=0x24ed;eip=0x002248; 	X(MOV(*(raddr(ss,bp+0)), al));	// 123159 mov     [bp+0], al ;~ 24ED:2248
cs=0x24ed;eip=0x00224b; 	R(JMP(loc_356c5));	// 123160 jmp     short loc_356C5 ;~ 24ED:224B
loc_356fd:
	// 8235 
cs=0x24ed;eip=0x00224d; 	T(DEC(bx));	// 123164 dec     bx ;~ 24ED:224D
cs=0x24ed;eip=0x00224e; 	X(MOV(*(raddr(ds,bx)), al));	// 123165 mov     [bx], al ;~ 24ED:224E
cs=0x24ed;eip=0x002250; 	R(JMP(loc_356ce));	// 123166 jmp     short loc_356CE ;~ 24ED:2250
loc_35702:
	// 8236 
cs=0x24ed;eip=0x002252; 	X(STOSB);	// 123170 stosb ;~ 24ED:2252
cs=0x24ed;eip=0x002253; 	R(JMP(loc_356dd));	// 123171 jmp     short loc_356DD ;~ 24ED:2253
loc_35705:
	// 8237 
cs=0x24ed;eip=0x002255; 	T(DEC(di));	// 123175 dec     di ;~ 24ED:2255
cs=0x24ed;eip=0x002256; 	R(JMP(loc_356ed));	// 123176 jmp     short loc_356ED ;~ 24ED:2256
loc_35708:
	// 8238 
cs=0x24ed;eip=0x002258; 	X(POP(bp));	// 123180 pop     bp ;~ 24ED:2258
cs=0x24ed;eip=0x002259; 	X(PUSH(bp));	// 123181 push    bp ;~ 24ED:2259
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00225a; 	T(SUB(bp, *(dw*)(((db*)&word_3366b))));	// 123182 sub     bp, cs:word_3366B ;~ 24ED:225A
cs=0x24ed;eip=0x00225f; 	R(JC(loc_35772));	// 123183 jb      short loc_35772 ;~ 24ED:225F
cs=0x24ed;eip=0x002261; 	T(MOV(ax, cs));	// 123184 mov     ax, cs ;~ 24ED:2261
cs=0x24ed;eip=0x002263; 	T(MOV(ds, ax));	// 123185 mov     ds, ax ;~ 24ED:2263
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002265; 	T(ADD(bp, *(dw*)(((db*)&word_33669))));	// 123187 add     bp, cs:word_33669 ;~ 24ED:2265
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00226a; 	T(MOV(di, *(dw*)(((db*)&word_33655))));	// 123188 mov     di, cs:word_33655 ;~ 24ED:226A
cs=0x24ed;eip=0x00226f; 	T(ADD(di, 0x0A0));	// 123189 add     di, 0A0h ; ' ' ;~ 24ED:226F
cs=0x24ed;eip=0x002273; 	T(XOR(ch, ch));	// 123190 xor     ch, ch ;~ 24ED:2273
cs=0x24ed;eip=0x002275; 	T(XOR(al, al));	// 123191 xor     al, al ;~ 24ED:2275
cs=0x24ed;eip=0x002277; 	T(MOV(bl, 4));	// 123192 mov     bl, 4 ;~ 24ED:2277
loc_35729:
	// 8239 
cs=0x24ed;eip=0x002279; 	T(MOV(si, 0x8EF));	// 123195 mov     si, 8EFh ;~ 24ED:2279
cs=0x24ed;eip=0x00227c; 	T(MOV(cl, *(raddr(cs,bp+0))));	// 123196 mov     cl, cs:[bp+0] ;~ 24ED:227C
cs=0x24ed;eip=0x002280; 	T(MOV(bh, cl));	// 123197 mov     bh, cl ;~ 24ED:2280
cs=0x24ed;eip=0x002282; 	T(SUB(cx, 4));	// 123198 sub     cx, 4 ;~ 24ED:2282
cs=0x24ed;eip=0x002285; 	R(JA(loc_35741));	// 123199 ja      short loc_35741 ;~ 24ED:2285
cs=0x24ed;eip=0x002287; 	T(NEG(cx));	// 123200 neg     cx ;~ 24ED:2287
cs=0x24ed;eip=0x002289; 	T(ADD(si, cx));	// 123201 add     si, cx ;~ 24ED:2289
cs=0x24ed;eip=0x00228b; 	T(MOV(cl, bh));	// 123202 mov     cl, bh ;~ 24ED:228B
	// 123203 rep movsb ;~ 24ED:228D
cs=0x24ed;eip=0x00228d; 	X(	REP MOVSB);	// 123203 rep movsb ;~ 24ED:228D
cs=0x24ed;eip=0x00228f; 	R(JMP(loc_35747));	// 123204 jmp     short loc_35747 ;~ 24ED:228F
loc_35741:
	// 8240 
cs=0x24ed;eip=0x002291; 	T(XOR(al, al));	// 123208 xor     al, al ;~ 24ED:2291
	// 123209 rep stosb ;~ 24ED:2293
cs=0x24ed;eip=0x002293; 	X(	REP STOSB);	// 123209 rep stosb ;~ 24ED:2293
cs=0x24ed;eip=0x002295; 	X(MOVSD);	// 123210 movsd ;~ 24ED:2295
loc_35747:
	// 8241 
cs=0x24ed;eip=0x002297; 	T(MOV(cl, *(raddr(cs,bp+1))));	// 123213 mov     cl, cs:[bp+1] ;~ 24ED:2297
cs=0x24ed;eip=0x00229b; 	T(ADD(di, cx));	// 123214 add     di, cx ;~ 24ED:229B
cs=0x24ed;eip=0x00229d; 	T(ADD(di, cx));	// 123215 add     di, cx ;~ 24ED:229D
cs=0x24ed;eip=0x00229f; 	T(MOV(cl, bh));	// 123216 mov     cl, bh ;~ 24ED:229F
cs=0x24ed;eip=0x0022a1; 	T(SUB(cx, 4));	// 123217 sub     cx, 4 ;~ 24ED:22A1
cs=0x24ed;eip=0x0022a4; 	R(JA(loc_3575e));	// 123218 ja      short loc_3575E ;~ 24ED:22A4
cs=0x24ed;eip=0x0022a6; 	T(MOV(cl, bh));	// 123219 mov     cl, bh ;~ 24ED:22A6
cs=0x24ed;eip=0x0022a8; 	T(XOR(ch, ch));	// 123220 xor     ch, ch ;~ 24ED:22A8
	// 123221 rep movsb ;~ 24ED:22AA
cs=0x24ed;eip=0x0022aa; 	X(	REP MOVSB);	// 123221 rep movsb ;~ 24ED:22AA
cs=0x24ed;eip=0x0022ac; 	R(JMP(loc_35764));	// 123222 jmp     short loc_35764 ;~ 24ED:22AC
loc_3575e:
	// 8242 
cs=0x24ed;eip=0x0022ae; 	X(MOVSD);	// 123226 movsd ;~ 24ED:22AE
cs=0x24ed;eip=0x0022b0; 	T(XOR(al, al));	// 123227 xor     al, al ;~ 24ED:22B0
	// 123228 rep stosb ;~ 24ED:22B2
cs=0x24ed;eip=0x0022b2; 	X(	REP STOSB);	// 123228 rep stosb ;~ 24ED:22B2
loc_35764:
	// 8243 
cs=0x24ed;eip=0x0022b4; 	T(ADD(di, 0x58));	// 123231 add     di, 58h ; 'X' ;~ 24ED:22B4
cs=0x24ed;eip=0x0022b7; 	T(ADD(bp, 2));	// 123232 add     bp, 2 ;~ 24ED:22B7
cs=0x24ed;eip=0x0022ba; 	T(DEC(bl));	// 123233 dec     bl ;~ 24ED:22BA
cs=0x24ed;eip=0x0022bc; 	R(JNZ(loc_35729));	// 123234 jnz     short loc_35729 ;~ 24ED:22BC
cs=0x24ed;eip=0x0022be; 	T(MOV(ax, ss));	// 123235 mov     ax, ss ;~ 24ED:22BE
cs=0x24ed;eip=0x0022c0; 	T(MOV(ds, ax));	// 123236 mov     ds, ax ;~ 24ED:22C0
loc_35772:
	// 8244 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0022c2; 	T(MOV(es, *(dw*)(((db*)&word_3365b))));	// 123240 mov     es, cs:word_3365B ;~ 24ED:22C2
cs=0x24ed;eip=0x0022c7; 	T(MOV(cx, 0x138));	// 123241 mov     cx, 138h ;~ 24ED:22C7
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0022ca; 	T(MOV(di, *(dw*)(((db*)&word_35138))));	// 123242 mov     di, cs:word_35138 ;~ 24ED:22CA
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0022cf; 	T(MOV(si, *(dw*)(((db*)&word_33655))));	// 123243 mov     si, cs:word_33655 ;~ 24ED:22CF
cs=0x24ed;eip=0x0022d4; 	T(ADD(si, 0x0A0));	// 123244 add     si, 0A0h ; ' ' ;~ 24ED:22D4
cs=0x24ed;eip=0x0022d8; 	R(CALL(sub_357ac,0));	// 123245 call    sub_357AC ;~ 24ED:22D8
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0022db; 	X(MOV(*(dw*)(((db*)&word_35138)), di));	// 123246 mov     cs:word_35138, di ;~ 24ED:22DB
cs=0x24ed;eip=0x0022e0; 	T(MOV(ax, ds));	// 123247 mov     ax, ds ;~ 24ED:22E0
cs=0x24ed;eip=0x0022e2; 	T(MOV(es, ax));	// 123248 mov     es, ax ;~ 24ED:22E2
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0022e4; 	T(MOV(di, *(dw*)(((db*)&word_33655))));	// 123249 mov     di, cs:word_33655 ;~ 24ED:22E4
cs=0x24ed;eip=0x0022e9; 	T(ADD(di, 0x8C));	// 123250 add     di, 8Ch ; 'Œ' ;~ 24ED:22E9
cs=0x24ed;eip=0x0022ed; 	T(MOV(si, di));	// 123251 mov     si, di ;~ 24ED:22ED
cs=0x24ed;eip=0x0022ef; 	T(ADD(si, 0x640));	// 123252 add     si, 640h ;~ 24ED:22EF
cs=0x24ed;eip=0x0022f3; 	T(MOV(cx, 0x159));	// 123253 mov     cx, 159h ;~ 24ED:22F3
	// 123254 rep movsd ;~ 24ED:22F6
cs=0x24ed;eip=0x0022f6; 	X(	REP MOVSD);	// 123254 rep movsd ;~ 24ED:22F6
cs=0x24ed;eip=0x0022f9; 	X(POP(bp));	// 123255 pop     bp ;~ 24ED:22F9
cs=0x24ed;eip=0x0022fa; 	X(POP(dx));	// 123256 pop     dx ;~ 24ED:22FA
cs=0x24ed;eip=0x0022fb; 	R(RETN(0));	// 123257 retn ;~ 24ED:22FB
sub_357ac:
	// 123264 
cs=0x24ed;eip=0x0022fc; 	X(PUSH(dx));	// 123265 push    dx ;~ 24ED:22FC
ret_24ed_22fd:
	// 8245 
cs=0x24ed;eip=0x0022fd; 	X(PUSH(bp));	// 123266 push    bp ;~ 24ED:22FD
cs=0x24ed;eip=0x0022fe; 	T(MOV(bh, 4));	// 123267 mov     bh, 4 ;~ 24ED:22FE
cs=0x24ed;eip=0x002300; 	T(MOV(ebp, 0x0F0F0F0F));	// 123268 mov     ebp, 0F0F0F0Fh ;~ 24ED:2300
cs=0x24ed;eip=0x002306; 	T(MOV(edx, 0x10101010));	// 123269 mov     edx, 10101010h ;~ 24ED:2306
loc_357bc:
	// 8246 
cs=0x24ed;eip=0x00230c; 	X(PUSH(cx));	// 123272 push    cx ;~ 24ED:230C
cs=0x24ed;eip=0x00230d; 	T(SHR(cx, 2));	// 123273 shr     cx, 2 ;~ 24ED:230D
loc_357c0:
	// 8247 
cs=0x24ed;eip=0x002310; 	T(LODSD);	// 123276 lodsd ;~ 24ED:2310
cs=0x24ed;eip=0x002312; 	T(SHR(eax, 4));	// 123277 shr     eax, 4 ;~ 24ED:2312
cs=0x24ed;eip=0x002316; 	T(AND(eax, ebp));	// 123278 and     eax, ebp ;~ 24ED:2316
cs=0x24ed;eip=0x002319; 	T(ADD(eax, edx));	// 123279 add     eax, edx ;~ 24ED:2319
cs=0x24ed;eip=0x00231c; 	X(STOSD);	// 123280 stosd ;~ 24ED:231C
cs=0x24ed;eip=0x00231e; 	R(LOOP(loc_357c0));	// 123281 loop    loc_357C0 ;~ 24ED:231E
cs=0x24ed;eip=0x002320; 	X(POP(cx));	// 123282 pop     cx ;~ 24ED:2320
cs=0x24ed;eip=0x002321; 	T(SUB(di, cx));	// 123283 sub     di, cx ;~ 24ED:2321
cs=0x24ed;eip=0x002323; 	T(SUB(si, cx));	// 123284 sub     si, cx ;~ 24ED:2323
cs=0x24ed;eip=0x002325; 	T(ADD(di, 0x140));	// 123285 add     di, 140h ;~ 24ED:2325
cs=0x24ed;eip=0x002329; 	T(ADD(si, 0x190));	// 123286 add     si, 190h ;~ 24ED:2329
cs=0x24ed;eip=0x00232d; 	T(DEC(bh));	// 123287 dec     bh ;~ 24ED:232D
cs=0x24ed;eip=0x00232f; 	R(JNZ(loc_357bc));	// 123288 jnz     short loc_357BC ;~ 24ED:232F
cs=0x24ed;eip=0x002331; 	X(POP(bp));	// 123289 pop     bp ;~ 24ED:2331
cs=0x24ed;eip=0x002332; 	X(POP(dx));	// 123290 pop     dx ;~ 24ED:2332
cs=0x24ed;eip=0x002333; 	R(RETN(0));	// 123291 retn ;~ 24ED:2333
seg002_2334_proc:
	// 123295 
cs=0x24ed;eip=0x002334; 	T(ADD(al, *(raddr(ds,si))));	// 123295 add     al, [si] ;~ 24ED:2334
ret_24ed_2336:
	// 8248 
cs=0x24ed;eip=0x002336; 	X(PUSH(es));	// 123296 push    es ;~ 24ED:2336
cs=0x24ed;eip=0x002337; 	X(OR(*(raddr(ss,bp+di)), cl));	// 123297 or      [bp+di], cl ;~ 24ED:2337
cs=0x24ed;eip=0x002339; 	X(PUSH(cs));	// 123298 push    cs ;~ 24ED:2339
cs=0x24ed;eip=0x00233a; 	X(ADC(*(raddr(ss,bp+di)), dl));	// 123299 adc     [bp+di], dl ;~ 24ED:233A
cs=0x24ed;eip=0x00233c; 	X(PUSH(ss));	// 123300 push    ss ;~ 24ED:233C
cs=0x24ed;eip=0x00233d; 	X(SBB(*(dw*)(raddr(ds,si)), bx));	// 123301 sbb     [si], bx ;~ 24ED:233D
cs=0x24ed;eip=0x00233f; 	X(AND(*(raddr(ds,si)), ah));	// 123302 and     [si], ah ;~ 24ED:233F
cs=0x24ed;eip=0x002341; 	X(SUB(*(dw*)(raddr(ds,bx)), bp));	// 123303 sub     [bx], bp ;~ 24ED:2341
cs=0x24ed;eip=0x002343; 	T(INC(cx));	// 123305 inc     cx ;~ 24ED:2343
cs=0x24ed;eip=0x002345; 	T(DEC(bx));	// 123306 dec     bx ;~ 24ED:2345
sub_357f6:
	// 123311 
cs=0x24ed;eip=0x002346; 	T(XOR(dx, dx));	// 123313 xor     dx, dx ;~ 24ED:2346
cs=0x24ed;eip=0x002348; 	T(OR(ax, ax));	// 123314 or      ax, ax ;~ 24ED:2348
cs=0x24ed;eip=0x00234a; 	R(JNS(loc_357fe));	// 123315 jns     short loc_357FE ;~ 24ED:234A
cs=0x24ed;eip=0x00234c; 	T(NEG(ax));	// 123316 neg     ax ;~ 24ED:234C
loc_357fe:
	// 8249 
cs=0x24ed;eip=0x00234e; 	T(SUB(ax, 0x46));	// 123319 sub     ax, 46h ; 'F' ;~ 24ED:234E
cs=0x24ed;eip=0x002351; 	R(JC(locret_3582b));	// 123320 jb      short locret_3582B ;~ 24ED:2351
cs=0x24ed;eip=0x002353; 	T(MOV(bx, 0x2334));	// 123321 mov     bx, 2334h ;~ 24ED:2353
cs=0x24ed;eip=0x002356; 	X(XLATP(raddr(cs,bx)));	// 123322 xlat    byte ptr cs:[bx] ;~ 24ED:2356
cs=0x24ed;eip=0x002358; 	T(XOR(ah, ah));	// 123323 xor     ah, ah ;~ 24ED:2358
cs=0x24ed;eip=0x00235a; 	T(MOV(dx, ax));	// 123324 mov     dx, ax ;~ 24ED:235A
cs=0x24ed;eip=0x00235c; 	T(XOR(al, al));	// 123325 xor     al, al ;~ 24ED:235C
cs=0x24ed;eip=0x00235e; 	T(ADD(si, dx));	// 123326 add     si, dx ;~ 24ED:235E
cs=0x24ed;eip=0x002360; 	T(SUB(cx, dx));	// 123327 sub     cx, dx ;~ 24ED:2360
cs=0x24ed;eip=0x002362; 	T(SUB(cx, dx));	// 123328 sub     cx, dx ;~ 24ED:2362
cs=0x24ed;eip=0x002364; 	R(JC(loc_3582c));	// 123329 jb      short loc_3582C ;~ 24ED:2364
cs=0x24ed;eip=0x002366; 	X(PUSH(dx));	// 123330 push    dx ;~ 24ED:2366
cs=0x24ed;eip=0x002367; 	T(XCHG(cx, dx));	// 123331 xchg    cx, dx ;~ 24ED:2367
cs=0x24ed;eip=0x002369; 	T(SUB(cx, 4));	// 123332 sub     cx, 4 ;~ 24ED:2369
cs=0x24ed;eip=0x00236c; 	R(JC(loc_35824));	// 123333 jb      short loc_35824 ;~ 24ED:236C
	// 123334 rep stosb ;~ 24ED:236E
cs=0x24ed;eip=0x00236e; 	X(	REP STOSB);	// 123334 rep stosb ;~ 24ED:236E
cs=0x24ed;eip=0x002370; 	T(MOV(ax, 0x191C));	// 123335 mov     ax, 191Ch ;~ 24ED:2370
cs=0x24ed;eip=0x002373; 	X(STOSW);	// 123336 stosw ;~ 24ED:2373
loc_35824:
	// 8250 
cs=0x24ed;eip=0x002374; 	T(MOV(ax, 0x1718));	// 123339 mov     ax, 1718h ;~ 24ED:2374
cs=0x24ed;eip=0x002377; 	X(STOSW);	// 123340 stosw ;~ 24ED:2377
cs=0x24ed;eip=0x002378; 	T(MOV(cx, dx));	// 123341 mov     cx, dx ;~ 24ED:2378
cs=0x24ed;eip=0x00237a; 	X(POP(dx));	// 123342 pop     dx ;~ 24ED:237A
locret_3582b:
	// 8251 
cs=0x24ed;eip=0x00237b; 	R(RETN(0));	// 123345 retn ;~ 24ED:237B
loc_3582c:
	// 8252 
cs=0x24ed;eip=0x00237c; 	T(ADD(cx, dx));	// 123349 add     cx, dx ;~ 24ED:237C
cs=0x24ed;eip=0x00237e; 	T(ADD(cx, dx));	// 123350 add     cx, dx ;~ 24ED:237E
	// 123351 rep stosb ;~ 24ED:2380
cs=0x24ed;eip=0x002380; 	X(	REP STOSB);	// 123351 rep stosb ;~ 24ED:2380
cs=0x24ed;eip=0x002382; 	T(XOR(cx, cx));	// 123352 xor     cx, cx ;~ 24ED:2382
cs=0x24ed;eip=0x002384; 	T(XOR(dx, dx));	// 123353 xor     dx, dx ;~ 24ED:2384
cs=0x24ed;eip=0x002386; 	R(RETN(0));	// 123354 retn ;~ 24ED:2386
sub_35837:
	// 123361 
cs=0x24ed;eip=0x002387; 	R(JCXZ(locret_3584a));	// 123363 jcxz    short locret_3584A ;~ 24ED:2387
ret_24ed_2389:
	// 8253 
cs=0x24ed;eip=0x002389; 	T(MOV(ax, 0x1817));	// 123364 mov     ax, 1817h ;~ 24ED:2389
cs=0x24ed;eip=0x00238c; 	X(STOSW);	// 123365 stosw ;~ 24ED:238C
cs=0x24ed;eip=0x00238d; 	T(SUB(cx, 4));	// 123366 sub     cx, 4 ;~ 24ED:238D
cs=0x24ed;eip=0x002390; 	R(JC(locret_3584a));	// 123367 jb      short locret_3584A ;~ 24ED:2390
cs=0x24ed;eip=0x002392; 	T(MOV(ax, 0x1C19));	// 123368 mov     ax, 1C19h ;~ 24ED:2392
cs=0x24ed;eip=0x002395; 	X(STOSW);	// 123369 stosw ;~ 24ED:2395
cs=0x24ed;eip=0x002396; 	T(XOR(al, al));	// 123370 xor     al, al ;~ 24ED:2396
	// 123371 rep stosb ;~ 24ED:2398
cs=0x24ed;eip=0x002398; 	X(	REP STOSB);	// 123371 rep stosb ;~ 24ED:2398
locret_3584a:
	// 8254 
cs=0x24ed;eip=0x00239a; 	R(RETN(0));	// 123375 retn ;~ 24ED:239A
seg002_239b_proc:
	// 123380 
loc_3584b:
	// 8255 
cs=0x24ed;eip=0x00239b; 	X(PUSH(di));	// 123381 push    di ;~ 24ED:239B
cs=0x24ed;eip=0x00239c; 	T(MOV(di, cx));	// 123382 mov     di, cx ;~ 24ED:239C
cs=0x24ed;eip=0x00239e; 	T(DEC(di));	// 123383 dec     di ;~ 24ED:239E
cs=0x24ed;eip=0x00239f; 	T(ADD(bx, di));	// 123384 add     bx, di ;~ 24ED:239F
cs=0x24ed;eip=0x0023a1; 	T(ADD(ax, di));	// 123385 add     ax, di ;~ 24ED:23A1
cs=0x24ed;eip=0x0023a3; 	X(PUSH(ax));	// 123386 push    ax ;~ 24ED:23A3
cs=0x24ed;eip=0x0023a4; 	X(PUSH(dx));	// 123387 push    dx ;~ 24ED:23A4
cs=0x24ed;eip=0x0023a5; 	T(MOV(ax, 0x0C8));	// 123388 mov     ax, 0C8h ; 'È' ;~ 24ED:23A5
cs=0x24ed;eip=0x0023a8; 	T(MUL1_2(di));	// 123389 mul     di ;~ 24ED:23A8
cs=0x24ed;eip=0x0023aa; 	T(ADD(si, ax));	// 123390 add     si, ax ;~ 24ED:23AA
cs=0x24ed;eip=0x0023ac; 	X(POP(dx));	// 123391 pop     dx ;~ 24ED:23AC
cs=0x24ed;eip=0x0023ad; 	X(POP(ax));	// 123392 pop     ax ;~ 24ED:23AD
cs=0x24ed;eip=0x0023ae; 	R(CALL(sub_340a8,0));	// 123393 call    sub_340A8 ;~ 24ED:23AE
cs=0x24ed;eip=0x0023b1; 	X(POP(dx));	// 123394 pop     dx ;~ 24ED:23B1
cs=0x24ed;eip=0x0023b2; 	T(XCHG(cx, dx));	// 123395 xchg    cx, dx ;~ 24ED:23B2
loc_35864:
	// 8256 
cs=0x24ed;eip=0x0023b4; 	R(CALL(sub_35873,0));	// 123398 call    sub_35873 ;~ 24ED:23B4
cs=0x24ed;eip=0x0023b7; 	T(SUB(si, 0x0C8));	// 123399 sub     si, 0C8h ; 'È' ;~ 24ED:23B7
cs=0x24ed;eip=0x0023bb; 	T(SUB(di, 0x140));	// 123400 sub     di, 140h ;~ 24ED:23BB
cs=0x24ed;eip=0x0023bf; 	T(DEC(dx));	// 123401 dec     dx ;~ 24ED:23BF
cs=0x24ed;eip=0x0023c0; 	R(JNZ(loc_35864));	// 123402 jnz     short loc_35864 ;~ 24ED:23C0
cs=0x24ed;eip=0x0023c2; 	R(RETF(0));	// 123403 retf ;~ 24ED:23C2
sub_35873:
	// 123408 
cs=0x24ed;eip=0x0023c3; 	X(PUSH(ax));	// 123409 push    ax ;~ 24ED:23C3
ret_24ed_23c4:
	// 8257 
cs=0x24ed;eip=0x0023c4; 	X(PUSH(cx));	// 123410 push    cx ;~ 24ED:23C4
cs=0x24ed;eip=0x0023c5; 	X(PUSH(dx));	// 123411 push    dx ;~ 24ED:23C5
cs=0x24ed;eip=0x0023c6; 	X(PUSH(si));	// 123412 push    si ;~ 24ED:23C6
cs=0x24ed;eip=0x0023c7; 	X(PUSH(di));	// 123413 push    di ;~ 24ED:23C7
cs=0x24ed;eip=0x0023c8; 	R(CALL(sub_357f6,0));	// 123414 call    sub_357F6 ;~ 24ED:23C8
cs=0x24ed;eip=0x0023cb; 	X(PUSH(dx));	// 123415 push    dx ;~ 24ED:23CB
cs=0x24ed;eip=0x0023cc; 	T(MOV(ebp, 0x0F0F0F0F));	// 123416 mov     ebp, 0F0F0F0Fh ;~ 24ED:23CC
cs=0x24ed;eip=0x0023d2; 	T(TEST(cx, 3));	// 123417 test    cx, 3 ;~ 24ED:23D2
cs=0x24ed;eip=0x0023d6; 	R(JZ(loc_35898));	// 123418 jz      loc_35898 ;~ 24ED:23D6
cs=0x24ed;eip=0x0023da; 	T(MOV(dx, cx));	// 123419 mov     dx, cx ;~ 24ED:23DA
cs=0x24ed;eip=0x0023dc; 	T(AND(dx, 3));	// 123420 and     dx, 3 ;~ 24ED:23DC
loc_3588f:
	// 8258 
cs=0x24ed;eip=0x0023df; 	T(LODSB);	// 123423 lodsb ;~ 24ED:23DF
cs=0x24ed;eip=0x0023e0; 	T(AND(ax, bp));	// 123424 and     ax, bp ;~ 24ED:23E0
cs=0x24ed;eip=0x0023e2; 	T(ADD(al, 0x10));	// 123425 add     al, 10h ;~ 24ED:23E2
cs=0x24ed;eip=0x0023e4; 	X(STOSB);	// 123426 stosb ;~ 24ED:23E4
cs=0x24ed;eip=0x0023e5; 	T(DEC(dx));	// 123427 dec     dx ;~ 24ED:23E5
cs=0x24ed;eip=0x0023e6; 	R(JNZ(loc_3588f));	// 123428 jnz     short loc_3588F ;~ 24ED:23E6
loc_35898:
	// 8259 
cs=0x24ed;eip=0x0023e8; 	T(SHR(cx, 2));	// 123431 shr     cx, 2 ;~ 24ED:23E8
cs=0x24ed;eip=0x0023eb; 	R(JZ(loc_358b1));	// 123432 jz      loc_358B1 ;~ 24ED:23EB
cs=0x24ed;eip=0x0023ef; 	T(MOV(edx, 0x10101010));	// 123433 mov     edx, 10101010h ;~ 24ED:23EF
loc_358a5:
	// 8260 
cs=0x24ed;eip=0x0023f5; 	T(LODSD);	// 123436 lodsd ;~ 24ED:23F5
cs=0x24ed;eip=0x0023f7; 	T(AND(eax, ebp));	// 123437 and     eax, ebp ;~ 24ED:23F7
cs=0x24ed;eip=0x0023fa; 	T(ADD(eax, edx));	// 123438 add     eax, edx ;~ 24ED:23FA
cs=0x24ed;eip=0x0023fd; 	X(STOSD);	// 123439 stosd ;~ 24ED:23FD
cs=0x24ed;eip=0x0023ff; 	R(LOOP(loc_358a5));	// 123440 loop    loc_358A5 ;~ 24ED:23FF
loc_358b1:
	// 8261 
cs=0x24ed;eip=0x002401; 	X(POP(cx));	// 123443 pop     cx ;~ 24ED:2401
cs=0x24ed;eip=0x002402; 	R(CALL(sub_35837,0));	// 123444 call    sub_35837 ;~ 24ED:2402
cs=0x24ed;eip=0x002405; 	X(POP(di));	// 123445 pop     di ;~ 24ED:2405
cs=0x24ed;eip=0x002406; 	X(POP(si));	// 123446 pop     si ;~ 24ED:2406
cs=0x24ed;eip=0x002407; 	X(POP(dx));	// 123447 pop     dx ;~ 24ED:2407
cs=0x24ed;eip=0x002408; 	X(POP(cx));	// 123448 pop     cx ;~ 24ED:2408
cs=0x24ed;eip=0x002409; 	X(POP(ax));	// 123449 pop     ax ;~ 24ED:2409
cs=0x24ed;eip=0x00240a; 	T(DEC(ax));	// 123450 dec     ax ;~ 24ED:240A
cs=0x24ed;eip=0x00240b; 	R(RETN(0));	// 123451 retn ;~ 24ED:240B
seg002_240c_proc:
	// 123455 
cs=0x24ed;eip=0x00240c; 	X(PUSH(bx));	// 123455 push    bx ;~ 24ED:240C
ret_24ed_240d:
	// 8262 
cs=0x24ed;eip=0x00240d; 	T(XOR(bh, bh));	// 123456 xor     bh, bh ;~ 24ED:240D
cs=0x24ed;eip=0x00240f; 	X(PUSH(di));	// 123457 push    di ;~ 24ED:240F
cs=0x24ed;eip=0x002410; 	R(CALL(sub_340a8,0));	// 123458 call    sub_340A8 ;~ 24ED:2410
cs=0x24ed;eip=0x002413; 	X(POP(dx));	// 123459 pop     dx ;~ 24ED:2413
cs=0x24ed;eip=0x002414; 	T(XCHG(cx, dx));	// 123460 xchg    cx, dx ;~ 24ED:2414
cs=0x24ed;eip=0x002416; 	X(POP(bx));	// 123461 pop     bx ;~ 24ED:2416
cs=0x24ed;eip=0x002417; 	T(OR(bh, bh));	// 123462 or      bh, bh ;~ 24ED:2417
cs=0x24ed;eip=0x002419; 	R(JNZ(loc_358f6));	// 123463 jnz     short loc_358F6 ;~ 24ED:2419
loc_358cb:
	// 8263 
cs=0x24ed;eip=0x00241b; 	R(CALL(sub_3591c,0));	// 123466 call    sub_3591C ;~ 24ED:241B
cs=0x24ed;eip=0x00241e; 	T(ADD(si, 0x0C8));	// 123467 add     si, 0C8h ; 'È' ;~ 24ED:241E
cs=0x24ed;eip=0x002422; 	T(ADD(di, 0x140));	// 123468 add     di, 140h ;~ 24ED:2422
cs=0x24ed;eip=0x002426; 	T(DEC(dx));	// 123469 dec     dx ;~ 24ED:2426
cs=0x24ed;eip=0x002427; 	R(JNZ(loc_358cb));	// 123470 jnz     short loc_358CB ;~ 24ED:2427
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002429; 	T(CMP(*(&byte_3366d), 0));	// 123471 cmp     cs:byte_3366D, 0 ;~ 24ED:2429
cs=0x24ed;eip=0x00242f; 	R(JZ(locret_358f5));	// 123472 jz      short locret_358F5 ;~ 24ED:242F
cs=0x24ed;eip=0x002431; 	X(PUSHA);	// 123473 pusha ;~ 24ED:2431
cs=0x24ed;eip=0x002432; 	X(PUSH(ds));	// 123474 push    ds ;~ 24ED:2432
cs=0x24ed;eip=0x002433; 	X(PUSH(es));	// 123475 push    es ;~ 24ED:2433
cs=0x24ed;eip=0x002434; 	X(PUSH(cs));	// 123476 push    cs ;~ 24ED:2434
cs=0x24ed;eip=0x002435; 	X(POP(es));	// 123477 pop     es ;~ 24ED:2435
cs=0x24ed;eip=0x002436; 	T(MOV(dx, 0x8BF));	// 123479 mov     dx, 8BFh ;~ 24ED:2436
cs=0x24ed;eip=0x002439; 	T(MOV(cx, 0x10));	// 123480 mov     cx, 10h ;~ 24ED:2439
cs=0x24ed;eip=0x00243c; 	T(MOV(bx, 0x50));	// 123481 mov     bx, 50h ; 'P' ;~ 24ED:243C
cs=0x24ed;eip=0x00243f; 	R(CALL(sub_34000,0));	// 123482 call    sub_34000 ;~ 24ED:243F
cs=0x24ed;eip=0x002442; 	X(POP(es));	// 123483 pop     es ;~ 24ED:2442
cs=0x24ed;eip=0x002443; 	X(POP(ds));	// 123485 pop     ds ;~ 24ED:2443
cs=0x24ed;eip=0x002444; 	X(POPA);	// 123486 popa ;~ 24ED:2444
locret_358f5:
	// 8264 
cs=0x24ed;eip=0x002445; 	R(RETF(0));	// 123489 retf ;~ 24ED:2445
loc_358f6:
	// 8265 
cs=0x24ed;eip=0x002446; 	R(CALL(sub_35958,0));	// 123494 call    sub_35958 ;~ 24ED:2446
cs=0x24ed;eip=0x002449; 	T(ADD(si, 0x0C8));	// 123495 add     si, 0C8h ; 'È' ;~ 24ED:2449
cs=0x24ed;eip=0x00244d; 	T(ADD(di, 0x140));	// 123496 add     di, 140h ;~ 24ED:244D
cs=0x24ed;eip=0x002451; 	X(PUSH(ax));	// 123497 push    ax ;~ 24ED:2451
cs=0x24ed;eip=0x002452; 	T(bx = bp+0x100);	// 123498 lea     bx, [bp+100h] ;~ 24ED:2452
loc_35906:
	// 8266 
cs=0x24ed;eip=0x002456; 	T(DEC(bx));	// 123501 dec     bx ;~ 24ED:2456
cs=0x24ed;eip=0x002457; 	T(MOV(al, *(raddr(ds,bx))));	// 123502 mov     al, [bx] ;~ 24ED:2457
cs=0x24ed;eip=0x002459; 	T(CMP(al, 0x70));	// 123503 cmp     al, 70h ; 'p' ;~ 24ED:2459
cs=0x24ed;eip=0x00245b; 	R(JZ(loc_35913));	// 123504 jz      short loc_35913 ;~ 24ED:245B
cs=0x24ed;eip=0x00245d; 	T(ROL(al, 1));	// 123505 rol     al, 1 ;~ 24ED:245D
cs=0x24ed;eip=0x00245f; 	T(ROL(al, 1));	// 123506 rol     al, 1 ;~ 24ED:245F
cs=0x24ed;eip=0x002461; 	X(MOV(*(raddr(ds,bx)), al));	// 123507 mov     [bx], al ;~ 24ED:2461
loc_35913:
	// 8267 
cs=0x24ed;eip=0x002463; 	T(CMP(bx, bp));	// 123510 cmp     bx, bp ;~ 24ED:2463
cs=0x24ed;eip=0x002465; 	R(JA(loc_35906));	// 123511 ja      short loc_35906 ;~ 24ED:2465
cs=0x24ed;eip=0x002467; 	X(POP(ax));	// 123512 pop     ax ;~ 24ED:2467
cs=0x24ed;eip=0x002468; 	T(DEC(dx));	// 123513 dec     dx ;~ 24ED:2468
cs=0x24ed;eip=0x002469; 	R(JNZ(loc_358f6));	// 123514 jnz     short loc_358F6 ;~ 24ED:2469
cs=0x24ed;eip=0x00246b; 	R(RETF(0));	// 123515 retf ;~ 24ED:246B
sub_3591c:
	// 123520 
cs=0x24ed;eip=0x00246c; 	X(PUSH(ax));	// 123521 push    ax ;~ 24ED:246C
ret_24ed_246d:
	// 8268 
cs=0x24ed;eip=0x00246d; 	X(PUSH(cx));	// 123522 push    cx ;~ 24ED:246D
cs=0x24ed;eip=0x00246e; 	X(PUSH(dx));	// 123523 push    dx ;~ 24ED:246E
cs=0x24ed;eip=0x00246f; 	X(PUSH(si));	// 123524 push    si ;~ 24ED:246F
cs=0x24ed;eip=0x002470; 	X(PUSH(di));	// 123525 push    di ;~ 24ED:2470
cs=0x24ed;eip=0x002471; 	R(CALL(sub_357f6,0));	// 123526 call    sub_357F6 ;~ 24ED:2471
cs=0x24ed;eip=0x002474; 	X(PUSH(dx));	// 123527 push    dx ;~ 24ED:2474
cs=0x24ed;eip=0x002475; 	T(MOV(bx, bp));	// 123528 mov     bx, bp ;~ 24ED:2475
cs=0x24ed;eip=0x002477; 	T(MOV(ah, 0x70));	// 123529 mov     ah, 70h ; 'p' ;~ 24ED:2477
cs=0x24ed;eip=0x002479; 	T(DEC(cx));	// 123530 dec     cx ;~ 24ED:2479
loc_3592a:
	// 8269 
cs=0x24ed;eip=0x00247a; 	T(LODSB);	// 123534 lodsb ;~ 24ED:247A
cs=0x24ed;eip=0x00247b; 	T(CMP(al, *(raddr(ds,si))));	// 123535 cmp     al, [si] ;~ 24ED:247B
cs=0x24ed;eip=0x00247d; 	R(JNZ(loc_3593b));	// 123536 jnz     short loc_3593B ;~ 24ED:247D
cs=0x24ed;eip=0x00247f; 	T(CMP(al, *(raddr(ds,si+0x0C7))));	// 123537 cmp     al, [si+0C7h] ;~ 24ED:247F
cs=0x24ed;eip=0x002483; 	R(JNZ(loc_3593b));	// 123538 jnz     short loc_3593B ;~ 24ED:2483
cs=0x24ed;eip=0x002485; 	T(XLAT);	// 123539 xlat ;~ 24ED:2485
cs=0x24ed;eip=0x002486; 	X(STOSB);	// 123540 stosb ;~ 24ED:2486
cs=0x24ed;eip=0x002487; 	R(LOOP(loc_3592a));	// 123541 loop    loc_3592A ;~ 24ED:2487
cs=0x24ed;eip=0x002489; 	R(JMP(loc_35940));	// 123542 jmp     short loc_35940 ;~ 24ED:2489
loc_3593b:
	// 8270 
cs=0x24ed;eip=0x00248b; 	T(MOV(al, ah));	// 123547 mov     al, ah ;~ 24ED:248B
cs=0x24ed;eip=0x00248d; 	X(STOSB);	// 123548 stosb ;~ 24ED:248D
cs=0x24ed;eip=0x00248e; 	R(LOOP(loc_3592a));	// 123549 loop    loc_3592A ;~ 24ED:248E
loc_35940:
	// 8271 
cs=0x24ed;eip=0x002490; 	T(LODSB);	// 123552 lodsb ;~ 24ED:2490
cs=0x24ed;eip=0x002491; 	T(CMP(al, *(raddr(ds,si+0x0C7))));	// 123553 cmp     al, [si+0C7h] ;~ 24ED:2491
cs=0x24ed;eip=0x002495; 	R(JNZ(loc_3594a));	// 123554 jnz     short loc_3594A ;~ 24ED:2495
cs=0x24ed;eip=0x002497; 	T(XLAT);	// 123555 xlat ;~ 24ED:2497
cs=0x24ed;eip=0x002498; 	R(JMP(loc_3594c));	// 123556 jmp     short loc_3594C ;~ 24ED:2498
loc_3594a:
	// 8272 
cs=0x24ed;eip=0x00249a; 	T(MOV(al, ah));	// 123560 mov     al, ah ;~ 24ED:249A
loc_3594c:
	// 8273 
cs=0x24ed;eip=0x00249c; 	X(STOSB);	// 123563 stosb ;~ 24ED:249C
cs=0x24ed;eip=0x00249d; 	X(POP(cx));	// 123564 pop     cx ;~ 24ED:249D
cs=0x24ed;eip=0x00249e; 	R(CALL(sub_35837,0));	// 123565 call    sub_35837 ;~ 24ED:249E
cs=0x24ed;eip=0x0024a1; 	X(POP(di));	// 123566 pop     di ;~ 24ED:24A1
cs=0x24ed;eip=0x0024a2; 	X(POP(si));	// 123567 pop     si ;~ 24ED:24A2
cs=0x24ed;eip=0x0024a3; 	X(POP(dx));	// 123568 pop     dx ;~ 24ED:24A3
cs=0x24ed;eip=0x0024a4; 	X(POP(cx));	// 123569 pop     cx ;~ 24ED:24A4
cs=0x24ed;eip=0x0024a5; 	X(POP(ax));	// 123570 pop     ax ;~ 24ED:24A5
cs=0x24ed;eip=0x0024a6; 	T(INC(ax));	// 123571 inc     ax ;~ 24ED:24A6
cs=0x24ed;eip=0x0024a7; 	R(RETN(0));	// 123572 retn ;~ 24ED:24A7
sub_35958:
	// 123579 
cs=0x24ed;eip=0x0024a8; 	X(PUSH(ax));	// 123580 push    ax ;~ 24ED:24A8
ret_24ed_24a9:
	// 8274 
cs=0x24ed;eip=0x0024a9; 	X(PUSH(cx));	// 123581 push    cx ;~ 24ED:24A9
cs=0x24ed;eip=0x0024aa; 	X(PUSH(dx));	// 123582 push    dx ;~ 24ED:24AA
cs=0x24ed;eip=0x0024ab; 	X(PUSH(si));	// 123583 push    si ;~ 24ED:24AB
cs=0x24ed;eip=0x0024ac; 	X(PUSH(di));	// 123584 push    di ;~ 24ED:24AC
cs=0x24ed;eip=0x0024ad; 	R(CALL(sub_357f6,0));	// 123585 call    sub_357F6 ;~ 24ED:24AD
cs=0x24ed;eip=0x0024b0; 	X(PUSH(dx));	// 123586 push    dx ;~ 24ED:24B0
cs=0x24ed;eip=0x0024b1; 	T(MOV(bx, bp));	// 123587 mov     bx, bp ;~ 24ED:24B1
cs=0x24ed;eip=0x0024b3; 	T(MOV(ah, 0x70));	// 123588 mov     ah, 70h ; 'p' ;~ 24ED:24B3
cs=0x24ed;eip=0x0024b5; 	T(DEC(cx));	// 123589 dec     cx ;~ 24ED:24B5
loc_35966:
	// 8275 
cs=0x24ed;eip=0x0024b6; 	T(LODSB);	// 123593 lodsb ;~ 24ED:24B6
cs=0x24ed;eip=0x0024b7; 	T(CMP(al, *(raddr(ds,si))));	// 123594 cmp     al, [si] ;~ 24ED:24B7
cs=0x24ed;eip=0x0024b9; 	R(JNZ(loc_3597f));	// 123595 jnz     short loc_3597F ;~ 24ED:24B9
cs=0x24ed;eip=0x0024bb; 	T(CMP(al, *(raddr(ds,si+0x0C7))));	// 123596 cmp     al, [si+0C7h] ;~ 24ED:24BB
cs=0x24ed;eip=0x0024bf; 	R(JNZ(loc_3597f));	// 123597 jnz     short loc_3597F ;~ 24ED:24BF
cs=0x24ed;eip=0x0024c1; 	T(XLAT);	// 123598 xlat ;~ 24ED:24C1
cs=0x24ed;eip=0x0024c2; 	T(CMP(al, ah));	// 123599 cmp     al, ah ;~ 24ED:24C2
cs=0x24ed;eip=0x0024c4; 	R(JZ(loc_35981));	// 123600 jz      short loc_35981 ;~ 24ED:24C4
cs=0x24ed;eip=0x0024c6; 	T(AND(al, 3));	// 123601 and     al, 3 ;~ 24ED:24C6
cs=0x24ed;eip=0x0024c8; 	T(ADD(al, 0x71));	// 123602 add     al, 71h ; 'q' ;~ 24ED:24C8
cs=0x24ed;eip=0x0024ca; 	X(STOSB);	// 123603 stosb ;~ 24ED:24CA
cs=0x24ed;eip=0x0024cb; 	R(LOOP(loc_35966));	// 123604 loop    loc_35966 ;~ 24ED:24CB
cs=0x24ed;eip=0x0024cd; 	R(JMP(loc_35984));	// 123605 jmp     short loc_35984 ;~ 24ED:24CD
loc_3597f:
	// 8276 
cs=0x24ed;eip=0x0024cf; 	T(MOV(al, ah));	// 123610 mov     al, ah ;~ 24ED:24CF
loc_35981:
	// 8277 
cs=0x24ed;eip=0x0024d1; 	X(STOSB);	// 123613 stosb ;~ 24ED:24D1
cs=0x24ed;eip=0x0024d2; 	R(LOOP(loc_35966));	// 123614 loop    loc_35966 ;~ 24ED:24D2
loc_35984:
	// 8278 
cs=0x24ed;eip=0x0024d4; 	T(LODSB);	// 123617 lodsb ;~ 24ED:24D4
cs=0x24ed;eip=0x0024d5; 	T(CMP(al, *(raddr(ds,si+0x0C7))));	// 123618 cmp     al, [si+0C7h] ;~ 24ED:24D5
cs=0x24ed;eip=0x0024d9; 	R(JNZ(loc_35996));	// 123619 jnz     short loc_35996 ;~ 24ED:24D9
cs=0x24ed;eip=0x0024db; 	T(XLAT);	// 123620 xlat ;~ 24ED:24DB
cs=0x24ed;eip=0x0024dc; 	T(CMP(al, ah));	// 123621 cmp     al, ah ;~ 24ED:24DC
cs=0x24ed;eip=0x0024de; 	R(JZ(loc_35998));	// 123622 jz      short loc_35998 ;~ 24ED:24DE
cs=0x24ed;eip=0x0024e0; 	T(AND(al, 3));	// 123623 and     al, 3 ;~ 24ED:24E0
cs=0x24ed;eip=0x0024e2; 	T(ADD(al, 0x71));	// 123624 add     al, 71h ; 'q' ;~ 24ED:24E2
cs=0x24ed;eip=0x0024e4; 	R(JMP(loc_35998));	// 123625 jmp     short loc_35998 ;~ 24ED:24E4
loc_35996:
	// 8279 
cs=0x24ed;eip=0x0024e6; 	T(MOV(al, ah));	// 123629 mov     al, ah ;~ 24ED:24E6
loc_35998:
	// 8280 
cs=0x24ed;eip=0x0024e8; 	X(STOSB);	// 123633 stosb ;~ 24ED:24E8
cs=0x24ed;eip=0x0024e9; 	X(POP(cx));	// 123634 pop     cx ;~ 24ED:24E9
cs=0x24ed;eip=0x0024ea; 	R(CALL(sub_35837,0));	// 123635 call    sub_35837 ;~ 24ED:24EA
cs=0x24ed;eip=0x0024ed; 	X(POP(di));	// 123636 pop     di ;~ 24ED:24ED
cs=0x24ed;eip=0x0024ee; 	X(POP(si));	// 123637 pop     si ;~ 24ED:24EE
cs=0x24ed;eip=0x0024ef; 	X(POP(dx));	// 123638 pop     dx ;~ 24ED:24EF
cs=0x24ed;eip=0x0024f0; 	X(POP(cx));	// 123639 pop     cx ;~ 24ED:24F0
cs=0x24ed;eip=0x0024f1; 	X(POP(ax));	// 123640 pop     ax ;~ 24ED:24F1
cs=0x24ed;eip=0x0024f2; 	T(INC(ax));	// 123641 inc     ax ;~ 24ED:24F2
cs=0x24ed;eip=0x0024f3; 	R(RETN(0));	// 123642 retn ;~ 24ED:24F3
sub_359ac:
	// 123658 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0024fc; 	T(CMP(*(&byte_33651), 0));	// 123660 cmp     cs:byte_33651, 0 ;~ 24ED:24FC
ret_24ed_2502:
	// 8281 
cs=0x24ed;eip=0x002502; 	R(JZ(loc_359d3));	// 123661 jz      short loc_359D3 ;~ 24ED:2502
loc_359b4:
	// 8282 
cs=0x24ed;eip=0x002504; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 123664 mov     ax, [bp+0] ;~ 24ED:2504
cs=0x24ed;eip=0x002507; 	T(SUB(ax, bx));	// 123665 sub     ax, bx ;~ 24ED:2507
cs=0x24ed;eip=0x002509; 	T(CMP(ax, 5));	// 123666 cmp     ax, 5 ;~ 24ED:2509
cs=0x24ed;eip=0x00250c; 	R(JC(loc_359b4));	// 123667 jb      short loc_359B4 ;~ 24ED:250C
loc_359be:
	// 8283 
cs=0x24ed;eip=0x00250e; 	X(PUSH(dx));	// 123670 push    dx ;~ 24ED:250E
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00250f; 	T(MOV(dx, *(dw*)(((db*)&word_3364f))));	// 123671 mov     dx, cs:word_3364F ;~ 24ED:250F
loc_359c4:
	// 8284 
cs=0x24ed;eip=0x002514; 	R(IN(al, dx));	// 123674 in      al, dx ;~ 24ED:2514
cs=0x24ed;eip=0x002515; 	T(AND(al, 8));	// 123675 and     al, 8 ;~ 24ED:2515
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002517; 	T(CMP(al, *(&byte_33652)));	// 123676 cmp     al, cs:byte_33652 ;~ 24ED:2517
cs=0x24ed;eip=0x00251c; 	R(JNZ(loc_359c4));	// 123677 jnz     short loc_359C4 ;~ 24ED:251C
cs=0x24ed;eip=0x00251e; 	X(POP(dx));	// 123678 pop     dx ;~ 24ED:251E
cs=0x24ed;eip=0x00251f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 123679 mov     bx, [bp+0] ;~ 24ED:251F
cs=0x24ed;eip=0x002522; 	R(RETN(0));	// 123680 retn ;~ 24ED:2522
loc_359d3:
	// 8285 
cs=0x24ed;eip=0x002523; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 123685 mov     ax, [bp+0] ;~ 24ED:2523
cs=0x24ed;eip=0x002526; 	T(SUB(ax, bx));	// 123686 sub     ax, bx ;~ 24ED:2526
cs=0x24ed;eip=0x002528; 	T(CMP(ax, 6));	// 123687 cmp     ax, 6 ;~ 24ED:2528
cs=0x24ed;eip=0x00252b; 	R(JC(loc_359d3));	// 123688 jb      short loc_359D3 ;~ 24ED:252B
cs=0x24ed;eip=0x00252d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 123689 mov     bx, [bp+0] ;~ 24ED:252D
cs=0x24ed;eip=0x002530; 	R(RETN(0));	// 123690 retn ;~ 24ED:2530
sub_359e1:
	// 123697 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002531; 	T(CMP(*(&byte_33651), 0));	// 123699 cmp     cs:byte_33651, 0 ;~ 24ED:2531
ret_24ed_2537:
	// 8286 
cs=0x24ed;eip=0x002537; 	R(JNZ(loc_359be));	// 123700 jnz     short loc_359BE ;~ 24ED:2537
loc_359e9:
	// 8287 
cs=0x24ed;eip=0x002539; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 123703 mov     ax, [bp+0] ;~ 24ED:2539
cs=0x24ed;eip=0x00253c; 	T(SUB(ax, bx));	// 123704 sub     ax, bx ;~ 24ED:253C
cs=0x24ed;eip=0x00253e; 	T(CMP(ax, 3));	// 123705 cmp     ax, 3 ;~ 24ED:253E
cs=0x24ed;eip=0x002541; 	R(JC(loc_359e9));	// 123706 jb      short loc_359E9 ;~ 24ED:2541
cs=0x24ed;eip=0x002543; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 123707 mov     bx, [bp+0] ;~ 24ED:2543
cs=0x24ed;eip=0x002546; 	R(RETN(0));	// 123708 retn ;~ 24ED:2546
sub_359f7:
	// 123715 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002547; 	T(MOV(ax, *(dw*)(((db*)&word_359a4))));	// 123716 mov     ax, cs:word_359A4 ;~ 24ED:2547
ret_24ed_254b:
	// 8288 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00254b; 	X(XCHG(ax, *(dw*)(((db*)&word_359a6))));	// 123717 xchg    ax, cs:word_359A6 ;~ 24ED:254B
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002550; 	X(MOV(*(dw*)(((db*)&word_359a4)), ax));	// 123718 mov     cs:word_359A4, ax ;~ 24ED:2550
cs=0x24ed;eip=0x002554; 	R(RETN(0));	// 123719 retn ;~ 24ED:2554
sub_35a05:
	// 123726 
cs=0x24ed;eip=0x002555; 	X(PUSH(ds));	// 123728 push    ds ;~ 24ED:2555
ret_24ed_2556:
	// 8289 
cs=0x24ed;eip=0x002556; 	X(PUSH(es));	// 123729 push    es ;~ 24ED:2556
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002557; 	T(MOV(ds, *(dw*)(((db*)&word_359a8))));	// 123730 mov     ds, cs:word_359A8 ;~ 24ED:2557
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00255c; 	T(MOV(es, *(dw*)(((db*)&word_359a4))));	// 123731 mov     es, cs:word_359A4 ;~ 24ED:255C
cs=0x24ed;eip=0x002561; 	X(PUSH(cs));	// 123732 push    cs ;~ 24ED:2561
cs=0x24ed;eip=0x002562; 	R(CALL(sub_34f94,0));	// 123733 call    near ptr sub_34F94 ;~ 24ED:2562
cs=0x24ed;eip=0x002565; 	X(POP(es));	// 123734 pop     es ;~ 24ED:2565
cs=0x24ed;eip=0x002566; 	X(POP(ds));	// 123735 pop     ds ;~ 24ED:2566
cs=0x24ed;eip=0x002567; 	R(RETN(0));	// 123736 retn ;~ 24ED:2567
seg002_25a6_proc:
	// 123773 
loc_35a56:
	// 8290 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0025a6; 	X(MOV(*(dw*)(((db*)&word_35bf2)), 8));	// 123774 mov     cs:word_35BF2, 8 ;~ 24ED:25A6
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0025ad; 	X(MOV(*(dw*)(((db*)&word_35bf4)), 1));	// 123775 mov     cs:word_35BF4, 1 ;~ 24ED:25AD
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0025b4; 	X(MOV(*(dw*)(((db*)&word_359a4)), si));	// 123776 mov     cs:word_359A4, si ;~ 24ED:25B4
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0025b9; 	X(MOV(*(dw*)(((db*)&word_359a6)), ds));	// 123777 mov     cs:word_359A6, ds ;~ 24ED:25B9
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0025be; 	X(MOV(*(dw*)(((db*)&word_359a8)), es));	// 123778 mov     cs:word_359A8, es ;~ 24ED:25BE
cs=0x24ed;eip=0x0025c3; 	T(MOV(cx, 0x98));	// 123779 mov     cx, 98h ;~ 24ED:25C3
cs=0x24ed;eip=0x0025c6; 	T(AND(ax, 0x0FE));	// 123780 and     ax, 0FEh ;~ 24ED:25C6
loc_35a79:
	// 8291 
cs=0x24ed;eip=0x0025c9; 	T(CMP(ax, 0x3E));	// 123783 cmp     ax, 3Eh ; '>' ;~ 24ED:25C9
cs=0x24ed;eip=0x0025cc; 	R(JC(loc_35a83));	// 123784 jb      short loc_35A83 ;~ 24ED:25CC
cs=0x24ed;eip=0x0025ce; 	T(SUB(ax, 0x3E));	// 123785 sub     ax, 3Eh ; '>' ;~ 24ED:25CE
cs=0x24ed;eip=0x0025d1; 	R(JMP(loc_35a79));	// 123786 jmp     short loc_35A79 ;~ 24ED:25D1
loc_35a83:
	// 8292 
cs=0x24ed;eip=0x0025d3; 	T(MOV(bx, ax));	// 123790 mov     bx, ax ;~ 24ED:25D3
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0025d5; __disp=*(dw*)(((db*)&off_35a18)+bx);
	R(JMP(__dispatch_call));	// 123791 jmp     cs:off_35A18[bx] ;~ 24ED:25D5
sub_35a8c:
	// 123799 
cs=0x24ed;eip=0x0025dc; 	T(CMP(*(raddr(ds,0x1A1)), 0));	// 123801 cmp     byte ptr ds:1A1h, 0 ;~ 24ED:25DC
ret_24ed_25e1:
	// 8293 
cs=0x24ed;eip=0x0025e1; 	R(JNZ(locret_35a96));	// 123802 jnz     short locret_35A96 ;~ 24ED:25E1
cs=0x24ed;eip=0x0025e3; 	R(CALL(sub_359e1,0));	// 123803 call    sub_359E1 ;~ 24ED:25E3
locret_35a96:
	// 8294 
cs=0x24ed;eip=0x0025e6; 	R(RETN(0));	// 123806 retn ;~ 24ED:25E6
seg002_25e7_proc:
	// 123811 
loc_35a97:
	// 8295 
cs=0x24ed;eip=0x0025e7; 	R(CALL(sub_33f08,0));	// 123813 call    sub_33F08 ;~ 24ED:25E7
cs=0x24ed;eip=0x0025ea; 	T(XOR(ax, ax));	// 123814 xor     ax, ax ;~ 24ED:25EA
cs=0x24ed;eip=0x0025ec; 	T(MOV(di, 0x1BE));	// 123815 mov     di, 1BEh ;~ 24ED:25EC
cs=0x24ed;eip=0x0025ef; 	T(MOV(cx, 0x101));	// 123816 mov     cx, 101h ;~ 24ED:25EF
	// 123817 rep stosb ;~ 24ED:25F2
cs=0x24ed;eip=0x0025f2; 	X(	REP STOSB);	// 123817 rep stosb ;~ 24ED:25F2
cs=0x24ed;eip=0x0025f4; 	T(MOV(di, 0x5BF));	// 123818 mov     di, 5BFh ;~ 24ED:25F4
cs=0x24ed;eip=0x0025f7; 	T(MOV(dx, di));	// 123819 mov     dx, di ;~ 24ED:25F7
cs=0x24ed;eip=0x0025f9; 	T(MOV(cx, 0x2FD));	// 123820 mov     cx, 2FDh ;~ 24ED:25F9
	// 123821 rep stosb ;~ 24ED:25FC
cs=0x24ed;eip=0x0025fc; 	X(	REP STOSB);	// 123821 rep stosb ;~ 24ED:25FC
cs=0x24ed;eip=0x0025fe; 	T(XOR(bx, bx));	// 123822 xor     bx, bx ;~ 24ED:25FE
cs=0x24ed;eip=0x002600; 	T(MOV(cx, 0x0FF));	// 123823 mov     cx, 0FFh ;~ 24ED:2600
cs=0x24ed;eip=0x002603; 	R(CALL(sub_34000,0));	// 123824 call    sub_34000 ;~ 24ED:2603
cs=0x24ed;eip=0x002606; 	T(MOV(cx, 0x60));	// 123825 mov     cx, 60h ; '`' ;~ 24ED:2606
cs=0x24ed;eip=0x002609; 	T(MOV(dx, 0x140));	// 123826 mov     dx, 140h ;~ 24ED:2609
loc_35abc:
	// 8296 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00260c; 	T(MOV(ds, *(dw*)(((db*)&word_359a6))));	// 123830 mov     ds, cs:word_359A6 ;~ 24ED:260C
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002611; 	T(MOV(es, *(dw*)(((db*)&word_359a8))));	// 123831 mov     es, cs:word_359A8 ;~ 24ED:2611
cs=0x24ed;eip=0x002616; 	X(PUSH(cs));	// 123832 push    cs ;~ 24ED:2616
cs=0x24ed;eip=0x002617; 	R(CALL(sub_34f94,0));	// 123833 call    near ptr sub_34F94 ;~ 24ED:2617
cs=0x24ed;eip=0x00261a; 	X(PUSH(cs));	// 123834 push    cs ;~ 24ED:261A
cs=0x24ed;eip=0x00261b; 	X(PUSH(cs));	// 123835 push    cs ;~ 24ED:261B
cs=0x24ed;eip=0x00261c; 	X(POP(ds));	// 123836 pop     ds ;~ 24ED:261C
cs=0x24ed;eip=0x00261d; 	X(POP(es));	// 123838 pop     es ;~ 24ED:261D
loc_35ace:
	// 8297 
cs=0x24ed;eip=0x00261e; 	T(XOR(bx, bx));	// 123841 xor     bx, bx ;~ 24ED:261E
loc_35ad0:
	// 8298 
cs=0x24ed;eip=0x002620; 	X(PUSH(bx));	// 123844 push    bx ;~ 24ED:2620
cs=0x24ed;eip=0x002621; 	X(PUSH(cx));	// 123845 push    cx ;~ 24ED:2621
cs=0x24ed;eip=0x002622; 	X(PUSH(dx));	// 123846 push    dx ;~ 24ED:2622
cs=0x24ed;eip=0x002623; 	X(PUSH(*(dw*)(raddr(ss,bp+0))));	// 123847 push    word ptr [bp+0] ;~ 24ED:2623
cs=0x24ed;eip=0x002626; 	T(MOV(di, 0x5BF));	// 123848 mov     di, 5BFh ;~ 24ED:2626
cs=0x24ed;eip=0x002629; 	T(ADD(di, bx));	// 123849 add     di, bx ;~ 24ED:2629
cs=0x24ed;eip=0x00262b; 	T(si = di-0x300);	// 123850 lea     si, [di-300h] ;~ 24ED:262B
cs=0x24ed;eip=0x00262f; 	X(PUSH(bx));	// 123851 push    bx ;~ 24ED:262F
cs=0x24ed;eip=0x002630; 	X(PUSH(cx));	// 123852 push    cx ;~ 24ED:2630
cs=0x24ed;eip=0x002631; 	X(PUSH(di));	// 123853 push    di ;~ 24ED:2631
loc_35ae2:
	// 8299 
cs=0x24ed;eip=0x002632; 	T(LODSB);	// 123856 lodsb ;~ 24ED:2632
cs=0x24ed;eip=0x002633; 	T(SUB(al, *(raddr(ds,di))));	// 123857 sub     al, [di] ;~ 24ED:2633
cs=0x24ed;eip=0x002635; 	R(JZ(loc_35aff));	// 123858 jz      short loc_35AFF ;~ 24ED:2635
cs=0x24ed;eip=0x002637; 	T(MOV(bl, al));	// 123859 mov     bl, al ;~ 24ED:2637
cs=0x24ed;eip=0x002639; 	T(XOR(ah, ah));	// 123860 xor     ah, ah ;~ 24ED:2639
cs=0x24ed;eip=0x00263b; 	T(DIV1(dh));	// 123861 div     dh ;~ 24ED:263B
cs=0x24ed;eip=0x00263d; 	T(XCHG(al, ah));	// 123862 xchg    al, ah ;~ 24ED:263D
cs=0x24ed;eip=0x00263f; 	T(INC(ah));	// 123863 inc     ah ;~ 24ED:263F
cs=0x24ed;eip=0x002641; 	T(OR(al, al));	// 123864 or      al, al ;~ 24ED:2641
cs=0x24ed;eip=0x002643; 	R(JNZ(loc_35af9));	// 123865 jnz     short loc_35AF9 ;~ 24ED:2643
cs=0x24ed;eip=0x002645; 	T(DEC(ah));	// 123866 dec     ah ;~ 24ED:2645
cs=0x24ed;eip=0x002647; 	T(MOV(al, dh));	// 123867 mov     al, dh ;~ 24ED:2647
loc_35af9:
	// 8300 
cs=0x24ed;eip=0x002649; 	T(CMP(ah, dl));	// 123870 cmp     ah, dl ;~ 24ED:2649
cs=0x24ed;eip=0x00264b; 	R(JC(loc_35aff));	// 123871 jb      short loc_35AFF ;~ 24ED:264B
cs=0x24ed;eip=0x00264d; 	X(ADD(*(raddr(ds,di)), al));	// 123872 add     [di], al ;~ 24ED:264D
loc_35aff:
	// 8301 
cs=0x24ed;eip=0x00264f; 	T(INC(di));	// 123876 inc     di ;~ 24ED:264F
cs=0x24ed;eip=0x002650; 	R(LOOP(loc_35ae2));	// 123877 loop    loc_35AE2 ;~ 24ED:2650
cs=0x24ed;eip=0x002652; 	X(POP(dx));	// 123878 pop     dx ;~ 24ED:2652
cs=0x24ed;eip=0x002653; 	X(POP(cx));	// 123879 pop     cx ;~ 24ED:2653
cs=0x24ed;eip=0x002654; 	X(POP(bx));	// 123880 pop     bx ;~ 24ED:2654
cs=0x24ed;eip=0x002655; 	R(CALL(sub_33ed1,0));	// 123881 call    sub_33ED1 ;~ 24ED:2655
cs=0x24ed;eip=0x002658; 	R(CALL(sub_34000,0));	// 123882 call    sub_34000 ;~ 24ED:2658
cs=0x24ed;eip=0x00265b; 	X(POP(bx));	// 123883 pop     bx ;~ 24ED:265B
cs=0x24ed;eip=0x00265c; 	R(CALL(sub_35a8c,0));	// 123884 call    sub_35A8C ;~ 24ED:265C
cs=0x24ed;eip=0x00265f; 	X(POP(dx));	// 123885 pop     dx ;~ 24ED:265F
cs=0x24ed;eip=0x002660; 	X(POP(cx));	// 123886 pop     cx ;~ 24ED:2660
cs=0x24ed;eip=0x002661; 	X(POP(bx));	// 123887 pop     bx ;~ 24ED:2661
cs=0x24ed;eip=0x002662; 	T(ADD(bx, cx));	// 123888 add     bx, cx ;~ 24ED:2662
cs=0x24ed;eip=0x002664; 	T(CMP(bx, 0x2FD));	// 123889 cmp     bx, 2FDh ;~ 24ED:2664
cs=0x24ed;eip=0x002668; 	R(JC(loc_35ad0));	// 123890 jb      short loc_35AD0 ;~ 24ED:2668
cs=0x24ed;eip=0x00266a; 	T(DEC(dl));	// 123891 dec     dl ;~ 24ED:266A
cs=0x24ed;eip=0x00266c; 	R(JNZ(loc_35ace));	// 123892 jnz     short loc_35ACE ;~ 24ED:266C
cs=0x24ed;eip=0x00266e; 	R(RETF(0));	// 123893 retf ;~ 24ED:266E
loc_35b1f:
	// 8302 
cs=0x24ed;eip=0x00266f; 	R(CALL(sub_33f08,0));	// 123898 call    sub_33F08 ;~ 24ED:266F
cs=0x24ed;eip=0x002672; 	T(MOV(dx, 0x220));	// 123899 mov     dx, 220h ;~ 24ED:2672
cs=0x24ed;eip=0x002675; 	T(MOV(ax, 0x40));	// 123900 mov     ax, 40h ; '@' ;~ 24ED:2675
cs=0x24ed;eip=0x002678; 	R(CALL(sub_35b52,0));	// 123901 call    sub_35B52 ;~ 24ED:2678
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00267b; 	T(MOV(ds, *(dw*)(((db*)&word_359a6))));	// 123902 mov     ds, cs:word_359A6 ;~ 24ED:267B
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002680; 	T(MOV(es, *(dw*)(((db*)&word_359a8))));	// 123904 mov     es, cs:word_359A8 ;~ 24ED:2680
cs=0x24ed;eip=0x002685; 	X(PUSH(cs));	// 123905 push    cs ;~ 24ED:2685
cs=0x24ed;eip=0x002686; 	R(CALL(sub_34f94,0));	// 123906 call    near ptr sub_34F94 ;~ 24ED:2686
cs=0x24ed;eip=0x002689; 	X(PUSH(cs));	// 123907 push    cs ;~ 24ED:2689
cs=0x24ed;eip=0x00268a; 	X(PUSH(cs));	// 123908 push    cs ;~ 24ED:268A
cs=0x24ed;eip=0x00268b; 	X(POP(ds));	// 123909 pop     ds ;~ 24ED:268B
cs=0x24ed;eip=0x00268c; 	X(POP(es));	// 123911 pop     es ;~ 24ED:268C
cs=0x24ed;eip=0x00268d; 	T(MOV(di, 0x5BF));	// 123912 mov     di, 5BFh ;~ 24ED:268D
cs=0x24ed;eip=0x002690; 	T(MOV(dx, di));	// 123913 mov     dx, di ;~ 24ED:2690
cs=0x24ed;eip=0x002692; 	T(MOV(si, 0x2BF));	// 123914 mov     si, 2BFh ;~ 24ED:2692
cs=0x24ed;eip=0x002695; 	T(MOV(cx, 0x180));	// 123915 mov     cx, 180h ;~ 24ED:2695
	// 123916 rep movsw ;~ 24ED:2698
cs=0x24ed;eip=0x002698; 	X(	REP MOVSW);	// 123916 rep movsw ;~ 24ED:2698
cs=0x24ed;eip=0x00269a; 	T(XOR(bx, bx));	// 123917 xor     bx, bx ;~ 24ED:269A
cs=0x24ed;eip=0x00269c; 	T(MOV(cx, 0x60));	// 123918 mov     cx, 60h ; '`' ;~ 24ED:269C
cs=0x24ed;eip=0x00269f; 	R(JMP(sub_33fb0));	// 123919 jmp     near ptr sub_33FB0 ;~ 24ED:269F
sub_35b52:
	// 123924 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0026a2; 	X(MOV(*(dw*)(((db*)&word_35a8a)), ax));	// 123926 mov     cs:word_35A8A, ax ;~ 24ED:26A2
loc_35b56:
	// 8303 
cs=0x24ed;eip=0x0026a6; 	T(XOR(bx, bx));	// 123929 xor     bx, bx ;~ 24ED:26A6
loc_35b58:
	// 8304 
cs=0x24ed;eip=0x0026a8; 	X(PUSH(bx));	// 123932 push    bx ;~ 24ED:26A8
cs=0x24ed;eip=0x0026a9; 	X(PUSH(dx));	// 123933 push    dx ;~ 24ED:26A9
cs=0x24ed;eip=0x0026aa; 	X(PUSH(*(dw*)(raddr(ss,bp+0))));	// 123934 push    word ptr [bp+0] ;~ 24ED:26AA
cs=0x24ed;eip=0x0026ad; 	T(MOV(si, 0x5BF));	// 123935 mov     si, 5BFh ;~ 24ED:26AD
cs=0x24ed;eip=0x0026b0; 	T(ADD(si, bx));	// 123936 add     si, bx ;~ 24ED:26B0
cs=0x24ed;eip=0x0026b2; 	T(ADD(si, bx));	// 123937 add     si, bx ;~ 24ED:26B2
cs=0x24ed;eip=0x0026b4; 	T(ADD(si, bx));	// 123938 add     si, bx ;~ 24ED:26B4
cs=0x24ed;eip=0x0026b6; 	T(MOV(di, si));	// 123939 mov     di, si ;~ 24ED:26B6
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0026b8; 	T(MOV(ax, *(dw*)(((db*)&word_35a8a))));	// 123940 mov     ax, cs:word_35A8A ;~ 24ED:26B8
cs=0x24ed;eip=0x0026bc; 	X(PUSH(ax));	// 123941 push    ax ;~ 24ED:26BC
cs=0x24ed;eip=0x0026bd; 	T(MOV(cx, ax));	// 123942 mov     cx, ax ;~ 24ED:26BD
cs=0x24ed;eip=0x0026bf; 	T(ADD(cx, cx));	// 123943 add     cx, cx ;~ 24ED:26BF
cs=0x24ed;eip=0x0026c1; 	T(ADD(cx, ax));	// 123944 add     cx, ax ;~ 24ED:26C1
loc_35b73:
	// 8305 
cs=0x24ed;eip=0x0026c3; 	T(MOV(al, *(raddr(ds,si))));	// 123947 mov     al, [si] ;~ 24ED:26C3
cs=0x24ed;eip=0x0026c5; 	T(SUB(al, dh));	// 123948 sub     al, dh ;~ 24ED:26C5
cs=0x24ed;eip=0x0026c7; 	R(JNS(loc_35b7b));	// 123949 jns     short loc_35B7B ;~ 24ED:26C7
cs=0x24ed;eip=0x0026c9; 	T(XOR(al, al));	// 123950 xor     al, al ;~ 24ED:26C9
loc_35b7b:
	// 8306 
cs=0x24ed;eip=0x0026cb; 	X(MOV(*(raddr(ds,si)), al));	// 123953 mov     [si], al ;~ 24ED:26CB
cs=0x24ed;eip=0x0026cd; 	T(INC(si));	// 123954 inc     si ;~ 24ED:26CD
cs=0x24ed;eip=0x0026ce; 	R(LOOP(loc_35b73));	// 123955 loop    loc_35B73 ;~ 24ED:26CE
cs=0x24ed;eip=0x0026d0; 	X(POP(cx));	// 123956 pop     cx ;~ 24ED:26D0
cs=0x24ed;eip=0x0026d1; 	T(MOV(dx, di));	// 123957 mov     dx, di ;~ 24ED:26D1
cs=0x24ed;eip=0x0026d3; 	R(CALL(sub_34000,0));	// 123958 call    sub_34000 ;~ 24ED:26D3
cs=0x24ed;eip=0x0026d6; 	X(POP(bx));	// 123959 pop     bx ;~ 24ED:26D6
cs=0x24ed;eip=0x0026d7; 	R(CALL(sub_35a8c,0));	// 123960 call    sub_35A8C ;~ 24ED:26D7
cs=0x24ed;eip=0x0026da; 	X(POP(dx));	// 123961 pop     dx ;~ 24ED:26DA
cs=0x24ed;eip=0x0026db; 	X(POP(bx));	// 123962 pop     bx ;~ 24ED:26DB
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0026dc; 	T(MOV(ax, *(dw*)(((db*)&word_35a8a))));	// 123963 mov     ax, cs:word_35A8A ;~ 24ED:26DC
cs=0x24ed;eip=0x0026e0; 	T(ADD(bx, ax));	// 123964 add     bx, ax ;~ 24ED:26E0
cs=0x24ed;eip=0x0026e2; 	T(CMP(bx, 0x0FF));	// 123965 cmp     bx, 0FFh ;~ 24ED:26E2
cs=0x24ed;eip=0x0026e6; 	R(JC(loc_35b58));	// 123966 jb      short loc_35B58 ;~ 24ED:26E6
cs=0x24ed;eip=0x0026e8; 	T(DEC(dl));	// 123967 dec     dl ;~ 24ED:26E8
cs=0x24ed;eip=0x0026ea; 	R(JNZ(loc_35b56));	// 123968 jnz     short loc_35B56 ;~ 24ED:26EA
cs=0x24ed;eip=0x0026ec; 	R(RETN(0));	// 123969 retn ;~ 24ED:26EC
seg002_26ed_proc:
	// 123974 
loc_35b9d:
	// 8307 
cs=0x24ed;eip=0x0026ed; 	X(PUSH(cs));	// 123976 push    cs ;~ 24ED:26ED
cs=0x24ed;eip=0x0026ee; 	X(PUSH(cs));	// 123977 push    cs ;~ 24ED:26EE
cs=0x24ed;eip=0x0026ef; 	X(POP(ds));	// 123978 pop     ds ;~ 24ED:26EF
cs=0x24ed;eip=0x0026f0; 	X(POP(es));	// 123979 pop     es ;~ 24ED:26F0
cs=0x24ed;eip=0x0026f1; 	T(MOV(si, 0x5C2));	// 123980 mov     si, 5C2h ;~ 24ED:26F1
cs=0x24ed;eip=0x0026f4; 	T(MOV(di, 0x2C2));	// 123981 mov     di, 2C2h ;~ 24ED:26F4
cs=0x24ed;eip=0x0026f7; 	T(MOV(cx, 0x17D));	// 123982 mov     cx, 17Dh ;~ 24ED:26F7
loc_35baa:
	// 8308 
cs=0x24ed;eip=0x0026fa; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 123985 mov     ax, [di] ;~ 24ED:26FA
cs=0x24ed;eip=0x0026fc; 	X(XCHG(ax, *(dw*)(raddr(ds,si))));	// 123986 xchg    ax, [si] ;~ 24ED:26FC
cs=0x24ed;eip=0x0026fe; 	X(STOSW);	// 123987 stosw ;~ 24ED:26FE
cs=0x24ed;eip=0x0026ff; 	T(ADD(si, 2));	// 123988 add     si, 2 ;~ 24ED:26FF
cs=0x24ed;eip=0x002702; 	R(LOOP(loc_35baa));	// 123989 loop    loc_35BAA ;~ 24ED:2702
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002704; 	T(CMP(*(&byte_3366d), 0));	// 123990 cmp     cs:byte_3366D, 0 ;~ 24ED:2704
cs=0x24ed;eip=0x00270a; 	R(JNZ(loc_35bce));	// 123991 jnz     short loc_35BCE ;~ 24ED:270A
cs=0x24ed;eip=0x00270c; 	T(MOV(ax, 0x0FF));	// 123992 mov     ax, 0FFh ;~ 24ED:270C
cs=0x24ed;eip=0x00270f; 	T(MOV(dx, 0x140));	// 123993 mov     dx, 140h ;~ 24ED:270F
cs=0x24ed;eip=0x002712; 	R(CALL(sub_35b52,0));	// 123994 call    sub_35B52 ;~ 24ED:2712
cs=0x24ed;eip=0x002715; 	T(MOV(cx, 0x2FD));	// 123995 mov     cx, 2FDh ;~ 24ED:2715
cs=0x24ed;eip=0x002718; 	T(MOV(dx, 0x140));	// 123996 mov     dx, 140h ;~ 24ED:2718
cs=0x24ed;eip=0x00271b; 	R(JMP(loc_35abc));	// 123997 jmp     loc_35ABC ;~ 24ED:271B
loc_35bce:
	// 8309 
cs=0x24ed;eip=0x00271e; 	T(MOV(ax, 0x55));	// 124001 mov     ax, 55h ; 'U' ;~ 24ED:271E
cs=0x24ed;eip=0x002721; 	T(MOV(dx, 0x316));	// 124002 mov     dx, 316h ;~ 24ED:2721
cs=0x24ed;eip=0x002724; 	R(CALL(sub_35b52,0));	// 124003 call    sub_35B52 ;~ 24ED:2724
cs=0x24ed;eip=0x002727; 	T(MOV(cx, 0x0FF));	// 124004 mov     cx, 0FFh ;~ 24ED:2727
cs=0x24ed;eip=0x00272a; 	T(MOV(dx, 0x316));	// 124005 mov     dx, 316h ;~ 24ED:272A
cs=0x24ed;eip=0x00272d; 	R(JMP(loc_35abc));	// 124006 jmp     loc_35ABC ;~ 24ED:272D
loc_35be0:
	// 8310 
cs=0x24ed;eip=0x002730; 	X(PUSH(cs));	// 124011 push    cs ;~ 24ED:2730
cs=0x24ed;eip=0x002731; 	R(CALL(sub_33fb0,0));	// 124012 call    near ptr sub_33FB0 ;~ 24ED:2731
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002734; 	T(MOV(di, *(dw*)(((db*)&word_33653))));	// 124013 mov     di, cs:word_33653 ;~ 24ED:2734
cs=0x24ed;eip=0x002739; 	T(MOV(si, di));	// 124014 mov     si, di ;~ 24ED:2739
cs=0x24ed;eip=0x00273b; 	T(MOV(cx, 0x2F80));	// 124015 mov     cx, 2F80h ;~ 24ED:273B
	// 124016 rep movsd ;~ 24ED:273E
cs=0x24ed;eip=0x00273e; 	X(	REP MOVSD);	// 124016 rep movsd ;~ 24ED:273E
cs=0x24ed;eip=0x002741; 	R(RETF(0));	// 124017 retf ;~ 24ED:2741
ret_24ed_2746:
	// 8311 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002746; 	T(MOV(cx, *(dw*)(((db*)&word_35bf2))));	// 124024 mov     cx, cs:word_35BF2 ;~ 24ED:2746
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00274b; 	T(MOV(si, *(dw*)(((db*)&word_35bf4))));	// 124025 mov     si, cs:word_35BF4 ;~ 24ED:274B
cs=0x24ed;eip=0x002750; 	X(PUSH(cx));	// 124026 push    cx ;~ 24ED:2750
cs=0x24ed;eip=0x002751; 	X(PUSH(si));	// 124027 push    si ;~ 24ED:2751
cs=0x24ed;eip=0x002752; 	R(CALL(sub_35c70,0));	// 124028 call    sub_35C70 ;~ 24ED:2752
cs=0x24ed;eip=0x002755; 	X(POP(si));	// 124029 pop     si ;~ 24ED:2755
cs=0x24ed;eip=0x002756; 	X(POP(cx));	// 124030 pop     cx ;~ 24ED:2756
cs=0x24ed;eip=0x002757; 	T(ADD(cx, 8));	// 124031 add     cx, 8 ;~ 24ED:2757
cs=0x24ed;eip=0x00275a; 	T(ADD(si, 1));	// 124032 add     si, 1 ;~ 24ED:275A
cs=0x24ed;eip=0x00275d; 	T(CMP(cx, 0x212));	// 124033 cmp     cx, 212h ;~ 24ED:275D
cs=0x24ed;eip=0x002761; 	R(JC(loc_35c19));	// 124034 jb      short loc_35C19 ;~ 24ED:2761
cs=0x24ed;eip=0x002763; 	T(MOV(cx, 8));	// 124035 mov     cx, 8 ;~ 24ED:2763
cs=0x24ed;eip=0x002766; 	T(MOV(si, 1));	// 124036 mov     si, 1 ;~ 24ED:2766
loc_35c19:
	// 8312 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002769; 	X(MOV(*(dw*)(((db*)&word_35bf2)), cx));	// 124039 mov     cs:word_35BF2, cx ;~ 24ED:2769
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00276e; 	X(MOV(*(dw*)(((db*)&word_35bf4)), si));	// 124040 mov     cs:word_35BF4, si ;~ 24ED:276E
cs=0x24ed;eip=0x002773; 	R(RETF(0));	// 124041 retf ;~ 24ED:2773
loc_35c24:
	// 8313 
cs=0x24ed;eip=0x002774; 	R(CALL(sub_35a05,0));	// 124046 call    sub_35A05 ;~ 24ED:2774
cs=0x24ed;eip=0x002777; 	X(PUSH(ds));	// 124047 push    ds ;~ 24ED:2777
cs=0x24ed;eip=0x002778; 	T(MOV(ds, si));	// 124048 mov     ds, si ;~ 24ED:2778
cs=0x24ed;eip=0x00277a; 	T(MOV(cx, 8));	// 124050 mov     cx, 8 ;~ 24ED:277A
cs=0x24ed;eip=0x00277d; 	T(MOV(si, 1));	// 124051 mov     si, 1 ;~ 24ED:277D
cs=0x24ed;eip=0x002780; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 124052 mov     bx, [bp+0] ;~ 24ED:2780
cs=0x24ed;eip=0x002783; 	T(MOV(dx, bx));	// 124053 mov     dx, bx ;~ 24ED:2783
loc_35c35:
	// 8314 
cs=0x24ed;eip=0x002785; 	X(PUSH(dx));	// 124056 push    dx ;~ 24ED:2785
cs=0x24ed;eip=0x002786; 	T(CMP(cx, 0x1F4));	// 124057 cmp     cx, 1F4h ;~ 24ED:2786
cs=0x24ed;eip=0x00278a; 	R(JNC(loc_35c43));	// 124058 jnb     short loc_35C43 ;~ 24ED:278A
cs=0x24ed;eip=0x00278c; 	X(PUSH(cx));	// 124059 push    cx ;~ 24ED:278C
cs=0x24ed;eip=0x00278d; 	X(PUSH(si));	// 124060 push    si ;~ 24ED:278D
cs=0x24ed;eip=0x00278e; 	R(CALL(sub_35c70,0));	// 124061 call    sub_35C70 ;~ 24ED:278E
cs=0x24ed;eip=0x002791; 	X(POP(si));	// 124062 pop     si ;~ 24ED:2791
cs=0x24ed;eip=0x002792; 	X(POP(cx));	// 124063 pop     cx ;~ 24ED:2792
loc_35c43:
	// 8315 
cs=0x24ed;eip=0x002793; 	R(CALL(sub_359ac,0));	// 124066 call    sub_359AC ;~ 24ED:2793
cs=0x24ed;eip=0x002796; 	R(CALL(sub_359ac,0));	// 124067 call    sub_359AC ;~ 24ED:2796
cs=0x24ed;eip=0x002799; 	R(CALL(sub_359ac,0));	// 124068 call    sub_359AC ;~ 24ED:2799
cs=0x24ed;eip=0x00279c; 	T(ADD(cx, 8));	// 124069 add     cx, 8 ;~ 24ED:279C
cs=0x24ed;eip=0x00279f; 	T(ADD(si, 1));	// 124070 add     si, 1 ;~ 24ED:279F
cs=0x24ed;eip=0x0027a2; 	T(CMP(cx, 0x3C0));	// 124071 cmp     cx, 3C0h ;~ 24ED:27A2
cs=0x24ed;eip=0x0027a6; 	R(JC(loc_35c61));	// 124072 jb      short loc_35C61 ;~ 24ED:27A6
cs=0x24ed;eip=0x0027a8; 	R(CALL(sub_35c8c,0));	// 124073 call    sub_35C8C ;~ 24ED:27A8
cs=0x24ed;eip=0x0027ab; 	T(MOV(cx, 8));	// 124074 mov     cx, 8 ;~ 24ED:27AB
cs=0x24ed;eip=0x0027ae; 	T(MOV(si, 1));	// 124075 mov     si, 1 ;~ 24ED:27AE
loc_35c61:
	// 8316 
cs=0x24ed;eip=0x0027b1; 	X(POP(dx));	// 124078 pop     dx ;~ 24ED:27B1
cs=0x24ed;eip=0x0027b2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 124079 mov     ax, [bp+0] ;~ 24ED:27B2
cs=0x24ed;eip=0x0027b5; 	T(SUB(ax, dx));	// 124080 sub     ax, dx ;~ 24ED:27B5
cs=0x24ed;eip=0x0027b7; 	T(CMP(ax, 0x12C0));	// 124081 cmp     ax, 12C0h ;~ 24ED:27B7
cs=0x24ed;eip=0x0027ba; 	R(JC(loc_35c35));	// 124082 jb      short loc_35C35 ;~ 24ED:27BA
cs=0x24ed;eip=0x0027bc; 	X(POP(ds));	// 124083 pop     ds ;~ 24ED:27BC
cs=0x24ed;eip=0x0027bd; 	R(RETF(0));	// 124084 retf ;~ 24ED:27BD
sub_35c70:
	// 124092 
cs=0x24ed;eip=0x0027c0; 	R(CALL(sub_35c8c,0));	// 124094 call    sub_35C8C ;~ 24ED:27C0
ret_24ed_27c3:
	// 8317 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0027c3; 	X(MOV(*(dw*)(((db*)&off_35c6e)), 0x27FD));	// 124095 mov     cs:off_35C6E, 27FDh ;~ 24ED:27C3
cs=0x24ed;eip=0x0027ca; 	X(PUSH(cx));	// 124096 push    cx ;~ 24ED:27CA
cs=0x24ed;eip=0x0027cb; 	X(PUSH(si));	// 124097 push    si ;~ 24ED:27CB
cs=0x24ed;eip=0x0027cc; 	X(PUSH(bx));	// 124098 push    bx ;~ 24ED:27CC
cs=0x24ed;eip=0x0027cd; 	X(PUSH(bp));	// 124099 push    bp ;~ 24ED:27CD
cs=0x24ed;eip=0x0027ce; 	T(MOV(dx, 0x0B0));	// 124100 mov     dx, 0B0h ; '°' ;~ 24ED:27CE
cs=0x24ed;eip=0x0027d1; 	T(MOV(bx, 0x5B));	// 124101 mov     bx, 5Bh ; '[' ;~ 24ED:27D1
cs=0x24ed;eip=0x0027d4; 	R(CALL(sub_35d7e,0));	// 124102 call    sub_35D7E ;~ 24ED:27D4
cs=0x24ed;eip=0x0027d7; 	X(POP(bp));	// 124103 pop     bp ;~ 24ED:27D7
cs=0x24ed;eip=0x0027d8; 	X(POP(bx));	// 124104 pop     bx ;~ 24ED:27D8
cs=0x24ed;eip=0x0027d9; 	X(POP(si));	// 124105 pop     si ;~ 24ED:27D9
cs=0x24ed;eip=0x0027da; 	X(POP(cx));	// 124106 pop     cx ;~ 24ED:27DA
cs=0x24ed;eip=0x0027db; 	R(RETN(0));	// 124107 retn ;~ 24ED:27DB
sub_35c8c:
	// 124114 
cs=0x24ed;eip=0x0027dc; 	X(PUSH(cx));	// 124116 push    cx ;~ 24ED:27DC
ret_24ed_27dd:
	// 8318 
cs=0x24ed;eip=0x0027dd; 	X(PUSH(si));	// 124117 push    si ;~ 24ED:27DD
cs=0x24ed;eip=0x0027de; 	T(SUB(cx, 8));	// 124118 sub     cx, 8 ;~ 24ED:27DE
cs=0x24ed;eip=0x0027e1; 	R(JZ(loc_35caa));	// 124119 jz      short loc_35CAA ;~ 24ED:27E1
cs=0x24ed;eip=0x0027e3; 	X(PUSH(bx));	// 124120 push    bx ;~ 24ED:27E3
cs=0x24ed;eip=0x0027e4; 	X(PUSH(bp));	// 124121 push    bp ;~ 24ED:27E4
cs=0x24ed;eip=0x0027e5; 	T(SUB(si, 1));	// 124122 sub     si, 1 ;~ 24ED:27E5
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0027e8; 	X(MOV(*(dw*)(((db*)&off_35c6e)), 0x2869));	// 124123 mov     cs:off_35C6E, 2869h ;~ 24ED:27E8
cs=0x24ed;eip=0x0027ef; 	T(MOV(dx, 0x0B0));	// 124124 mov     dx, 0B0h ; '°' ;~ 24ED:27EF
cs=0x24ed;eip=0x0027f2; 	T(MOV(bx, 0x5B));	// 124125 mov     bx, 5Bh ; '[' ;~ 24ED:27F2
cs=0x24ed;eip=0x0027f5; 	R(CALL(sub_35d7e,0));	// 124126 call    sub_35D7E ;~ 24ED:27F5
cs=0x24ed;eip=0x0027f8; 	X(POP(bp));	// 124127 pop     bp ;~ 24ED:27F8
cs=0x24ed;eip=0x0027f9; 	X(POP(bx));	// 124128 pop     bx ;~ 24ED:27F9
loc_35caa:
	// 8319 
cs=0x24ed;eip=0x0027fa; 	X(POP(si));	// 124131 pop     si ;~ 24ED:27FA
cs=0x24ed;eip=0x0027fb; 	X(POP(cx));	// 124132 pop     cx ;~ 24ED:27FB
cs=0x24ed;eip=0x0027fc; 	R(RETN(0));	// 124133 retn ;~ 24ED:27FC
sub_35cad:
	// 124140 
cs=0x24ed;eip=0x0027fd; 	X(PUSH(bx));	// 124142 push    bx ;~ 24ED:27FD
ret_24ed_27fe:
	// 8320 
cs=0x24ed;eip=0x0027fe; 	T(MOV(ax, 0x5B));	// 124143 mov     ax, 5Bh ; '[' ;~ 24ED:27FE
cs=0x24ed;eip=0x002801; 	T(SUB(ax, bx));	// 124144 sub     ax, bx ;~ 24ED:2801
cs=0x24ed;eip=0x002803; 	R(JS(loc_35cbc));	// 124145 js      short loc_35CBC ;~ 24ED:2803
cs=0x24ed;eip=0x002805; 	T(SHR(ax, 1));	// 124146 shr     ax, 1 ;~ 24ED:2805
cs=0x24ed;eip=0x002807; 	T(MOV(bx, 0x5B));	// 124147 mov     bx, 5Bh ; '[' ;~ 24ED:2807
cs=0x24ed;eip=0x00280a; 	T(SUB(bx, ax));	// 124148 sub     bx, ax ;~ 24ED:280A
loc_35cbc:
	// 8321 
cs=0x24ed;eip=0x00280c; 	T(MOV(ax, bx));	// 124151 mov     ax, bx ;~ 24ED:280C
cs=0x24ed;eip=0x00280e; 	T(SUB(ax, 0x47));	// 124152 sub     ax, 47h ; 'G' ;~ 24ED:280E
cs=0x24ed;eip=0x002811; 	T(CMP(ax, 0x4E));	// 124153 cmp     ax, 4Eh ; 'N' ;~ 24ED:2811
cs=0x24ed;eip=0x002814; 	R(JNC(loc_35d17));	// 124154 jnb     short loc_35D17 ;~ 24ED:2814
cs=0x24ed;eip=0x002816; 	T(CMP(dx, 0x140));	// 124155 cmp     dx, 140h ;~ 24ED:2816
cs=0x24ed;eip=0x00281a; 	R(JNC(loc_35d17));	// 124156 jnb     short loc_35D17 ;~ 24ED:281A
cs=0x24ed;eip=0x00281c; 	X(PUSH(cx));	// 124157 push    cx ;~ 24ED:281C
cs=0x24ed;eip=0x00281d; 	X(PUSH(di));	// 124158 push    di ;~ 24ED:281D
cs=0x24ed;eip=0x00281e; 	R(CALL(sub_340a8,0));	// 124159 call    sub_340A8 ;~ 24ED:281E
cs=0x24ed;eip=0x002821; 	T(MOV(ax, *(dw*)(raddr(es,di))));	// 124160 mov     ax, es:[di] ;~ 24ED:2821
cs=0x24ed;eip=0x002824; 	T(AND(ax, *(dw*)(raddr(es,di+2))));	// 124161 and     ax, es:[di+2] ;~ 24ED:2824
cs=0x24ed;eip=0x002828; 	T(AND(ax, *(dw*)(raddr(es,di+0x140))));	// 124162 and     ax, es:[di+140h] ;~ 24ED:2828
cs=0x24ed;eip=0x00282d; 	T(AND(ax, *(dw*)(raddr(es,di+0x142))));	// 124163 and     ax, es:[di+142h] ;~ 24ED:282D
cs=0x24ed;eip=0x002832; 	T(AND(ax, *(dw*)(raddr(es,di+0x280))));	// 124164 and     ax, es:[di+280h] ;~ 24ED:2832
cs=0x24ed;eip=0x002837; 	T(AND(ax, *(dw*)(raddr(es,di+0x282))));	// 124165 and     ax, es:[di+282h] ;~ 24ED:2837
cs=0x24ed;eip=0x00283c; 	T(AND(ax, *(dw*)(raddr(es,di+0x3C0))));	// 124166 and     ax, es:[di+3C0h] ;~ 24ED:283C
cs=0x24ed;eip=0x002841; 	T(AND(ax, *(dw*)(raddr(es,di+0x3C2))));	// 124167 and     ax, es:[di+3C2h] ;~ 24ED:2841
cs=0x24ed;eip=0x002846; 	T(AND(al, ah));	// 124168 and     al, ah ;~ 24ED:2846
cs=0x24ed;eip=0x002848; 	R(JNS(loc_35d15));	// 124169 jns     short loc_35D15 ;~ 24ED:2848
cs=0x24ed;eip=0x00284a; 	T(MOV(al, *(raddr(ds,di))));	// 124170 mov     al, [di] ;~ 24ED:284A
cs=0x24ed;eip=0x00284c; 	T(CMP(al, 0x0F0));	// 124171 cmp     al, 0F0h ; 'ð' ;~ 24ED:284C
cs=0x24ed;eip=0x00284e; 	R(JNC(loc_35d15));	// 124172 jnb     short loc_35D15 ;~ 24ED:284E
cs=0x24ed;eip=0x002850; 	T(MOV(ah, al));	// 124173 mov     ah, al ;~ 24ED:2850
cs=0x24ed;eip=0x002852; 	T(MOV(cx, ax));	// 124174 mov     cx, ax ;~ 24ED:2852
cs=0x24ed;eip=0x002854; 	T(SHL(eax, 0x10));	// 124175 shl     eax, 10h ;~ 24ED:2854
cs=0x24ed;eip=0x002858; 	T(MOV(ax, cx));	// 124176 mov     ax, cx ;~ 24ED:2858
cs=0x24ed;eip=0x00285a; 	T(MOV(cx, 4));	// 124177 mov     cx, 4 ;~ 24ED:285A
loc_35d0d:
	// 8322 
cs=0x24ed;eip=0x00285d; 	X(STOSD);	// 124180 stosd ;~ 24ED:285D
cs=0x24ed;eip=0x00285f; 	T(ADD(di, 0x13C));	// 124181 add     di, 13Ch ;~ 24ED:285F
cs=0x24ed;eip=0x002863; 	R(LOOP(loc_35d0d));	// 124182 loop    loc_35D0D ;~ 24ED:2863
loc_35d15:
	// 8323 
cs=0x24ed;eip=0x002865; 	X(POP(di));	// 124186 pop     di ;~ 24ED:2865
cs=0x24ed;eip=0x002866; 	X(POP(cx));	// 124187 pop     cx ;~ 24ED:2866
loc_35d17:
	// 8324 
cs=0x24ed;eip=0x002867; 	X(POP(bx));	// 124191 pop     bx ;~ 24ED:2867
cs=0x24ed;eip=0x002868; 	R(RETN(0));	// 124192 retn ;~ 24ED:2868
seg002_2869_proc:
	// 124196 
cs=0x24ed;eip=0x002869; 	X(PUSH(bx));	// 124196 push    bx ;~ 24ED:2869
ret_24ed_286a:
	// 8325 
cs=0x24ed;eip=0x00286a; 	T(MOV(ax, 0x5B));	// 124197 mov     ax, 5Bh ; '[' ;~ 24ED:286A
cs=0x24ed;eip=0x00286d; 	T(SUB(ax, bx));	// 124198 sub     ax, bx ;~ 24ED:286D
cs=0x24ed;eip=0x00286f; 	R(JS(loc_35d28));	// 124199 js      short loc_35D28 ;~ 24ED:286F
cs=0x24ed;eip=0x002871; 	T(SHR(ax, 1));	// 124200 shr     ax, 1 ;~ 24ED:2871
cs=0x24ed;eip=0x002873; 	T(MOV(bx, 0x5B));	// 124201 mov     bx, 5Bh ; '[' ;~ 24ED:2873
cs=0x24ed;eip=0x002876; 	T(SUB(bx, ax));	// 124202 sub     bx, ax ;~ 24ED:2876
loc_35d28:
	// 8326 
cs=0x24ed;eip=0x002878; 	T(MOV(ax, bx));	// 124205 mov     ax, bx ;~ 24ED:2878
cs=0x24ed;eip=0x00287a; 	T(SUB(ax, 0x47));	// 124206 sub     ax, 47h ; 'G' ;~ 24ED:287A
cs=0x24ed;eip=0x00287d; 	T(CMP(ax, 0x4E));	// 124207 cmp     ax, 4Eh ; 'N' ;~ 24ED:287D
cs=0x24ed;eip=0x002880; 	R(JNC(loc_35d17));	// 124208 jnb     short loc_35D17 ;~ 24ED:2880
cs=0x24ed;eip=0x002882; 	T(CMP(dx, 0x140));	// 124209 cmp     dx, 140h ;~ 24ED:2882
cs=0x24ed;eip=0x002886; 	R(JNC(loc_35d17));	// 124210 jnb     short loc_35D17 ;~ 24ED:2886
cs=0x24ed;eip=0x002888; 	X(PUSH(cx));	// 124211 push    cx ;~ 24ED:2888
cs=0x24ed;eip=0x002889; 	X(PUSH(si));	// 124212 push    si ;~ 24ED:2889
cs=0x24ed;eip=0x00288a; 	X(PUSH(di));	// 124213 push    di ;~ 24ED:288A
cs=0x24ed;eip=0x00288b; 	R(CALL(sub_340a8,0));	// 124214 call    sub_340A8 ;~ 24ED:288B
cs=0x24ed;eip=0x00288e; 	T(MOV(cx, 4));	// 124215 mov     cx, 4 ;~ 24ED:288E
loc_35d41:
	// 8327 
cs=0x24ed;eip=0x002891; 	T(MOV(si, di));	// 124218 mov     si, di ;~ 24ED:2891
cs=0x24ed;eip=0x002893; 	T(MOV(al, *(raddr(es,di))));	// 124219 mov     al, es:[di] ;~ 24ED:2893
cs=0x24ed;eip=0x002896; 	T(OR(al, al));	// 124220 or      al, al ;~ 24ED:2896
cs=0x24ed;eip=0x002898; 	R(JNS(loc_35d4d));	// 124221 jns     short loc_35D4D ;~ 24ED:2898
cs=0x24ed;eip=0x00289a; 	X(MOVSB);	// 124222 movsb ;~ 24ED:289A
cs=0x24ed;eip=0x00289b; 	T(DEC(si));	// 124223 dec     si ;~ 24ED:289B
cs=0x24ed;eip=0x00289c; 	T(DEC(di));	// 124224 dec     di ;~ 24ED:289C
loc_35d4d:
	// 8328 
cs=0x24ed;eip=0x00289d; 	T(INC(si));	// 124227 inc     si ;~ 24ED:289D
cs=0x24ed;eip=0x00289e; 	T(INC(di));	// 124228 inc     di ;~ 24ED:289E
cs=0x24ed;eip=0x00289f; 	T(MOV(al, *(raddr(es,di))));	// 124229 mov     al, es:[di] ;~ 24ED:289F
cs=0x24ed;eip=0x0028a2; 	T(OR(al, al));	// 124230 or      al, al ;~ 24ED:28A2
cs=0x24ed;eip=0x0028a4; 	R(JNS(loc_35d59));	// 124231 jns     short loc_35D59 ;~ 24ED:28A4
cs=0x24ed;eip=0x0028a6; 	X(MOVSB);	// 124232 movsb ;~ 24ED:28A6
cs=0x24ed;eip=0x0028a7; 	T(DEC(si));	// 124233 dec     si ;~ 24ED:28A7
cs=0x24ed;eip=0x0028a8; 	T(DEC(di));	// 124234 dec     di ;~ 24ED:28A8
loc_35d59:
	// 8329 
cs=0x24ed;eip=0x0028a9; 	T(INC(si));	// 124237 inc     si ;~ 24ED:28A9
cs=0x24ed;eip=0x0028aa; 	T(INC(di));	// 124238 inc     di ;~ 24ED:28AA
cs=0x24ed;eip=0x0028ab; 	T(MOV(al, *(raddr(es,di))));	// 124239 mov     al, es:[di] ;~ 24ED:28AB
cs=0x24ed;eip=0x0028ae; 	T(OR(al, al));	// 124240 or      al, al ;~ 24ED:28AE
cs=0x24ed;eip=0x0028b0; 	R(JNS(loc_35d65));	// 124241 jns     short loc_35D65 ;~ 24ED:28B0
cs=0x24ed;eip=0x0028b2; 	X(MOVSB);	// 124242 movsb ;~ 24ED:28B2
cs=0x24ed;eip=0x0028b3; 	T(DEC(si));	// 124243 dec     si ;~ 24ED:28B3
cs=0x24ed;eip=0x0028b4; 	T(DEC(di));	// 124244 dec     di ;~ 24ED:28B4
loc_35d65:
	// 8330 
cs=0x24ed;eip=0x0028b5; 	T(INC(si));	// 124247 inc     si ;~ 24ED:28B5
cs=0x24ed;eip=0x0028b6; 	T(INC(di));	// 124248 inc     di ;~ 24ED:28B6
cs=0x24ed;eip=0x0028b7; 	T(MOV(al, *(raddr(es,di))));	// 124249 mov     al, es:[di] ;~ 24ED:28B7
cs=0x24ed;eip=0x0028ba; 	T(OR(al, al));	// 124250 or      al, al ;~ 24ED:28BA
cs=0x24ed;eip=0x0028bc; 	R(JNS(loc_35d71));	// 124251 jns     short loc_35D71 ;~ 24ED:28BC
cs=0x24ed;eip=0x0028be; 	X(MOVSB);	// 124252 movsb ;~ 24ED:28BE
cs=0x24ed;eip=0x0028bf; 	T(DEC(si));	// 124253 dec     si ;~ 24ED:28BF
cs=0x24ed;eip=0x0028c0; 	T(DEC(di));	// 124254 dec     di ;~ 24ED:28C0
loc_35d71:
	// 8331 
cs=0x24ed;eip=0x0028c1; 	T(INC(si));	// 124257 inc     si ;~ 24ED:28C1
cs=0x24ed;eip=0x0028c2; 	T(INC(di));	// 124258 inc     di ;~ 24ED:28C2
cs=0x24ed;eip=0x0028c3; 	T(ADD(di, 0x13C));	// 124259 add     di, 13Ch ;~ 24ED:28C3
cs=0x24ed;eip=0x0028c7; 	R(LOOP(loc_35d41));	// 124260 loop    loc_35D41 ;~ 24ED:28C7
cs=0x24ed;eip=0x0028c9; 	X(POP(di));	// 124261 pop     di ;~ 24ED:28C9
cs=0x24ed;eip=0x0028ca; 	X(POP(si));	// 124262 pop     si ;~ 24ED:28CA
cs=0x24ed;eip=0x0028cb; 	X(POP(cx));	// 124263 pop     cx ;~ 24ED:28CB
cs=0x24ed;eip=0x0028cc; 	X(POP(bx));	// 124264 pop     bx ;~ 24ED:28CC
cs=0x24ed;eip=0x0028cd; 	R(RETN(0));	// 124265 retn ;~ 24ED:28CD
sub_35d7e:
	// 124270 
cs=0x24ed;eip=0x0028ce; 	T(SUB(sp, 0x14));	// 124272 sub     sp, 14h ;~ 24ED:28CE
ret_24ed_28d1:
	// 8332 
cs=0x24ed;eip=0x0028d1; 	T(MOV(bp, sp));	// 124273 mov     bp, sp ;~ 24ED:28D1
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0028d3; 	X(MOV(*(&byte_35e65), 0));	// 124274 mov     cs:byte_35E65, 0 ;~ 24ED:28D3
cs=0x24ed;eip=0x0028d9; 	X(PUSH(dx));	// 124275 push    dx ;~ 24ED:28D9
cs=0x24ed;eip=0x0028da; 	T(XOR(ax, ax));	// 124276 xor     ax, ax ;~ 24ED:28DA
cs=0x24ed;eip=0x0028dc; 	T(MOV(dx, ax));	// 124277 mov     dx, ax ;~ 24ED:28DC
cs=0x24ed;eip=0x0028de; 	T(MOV(ah, cl));	// 124278 mov     ah, cl ;~ 24ED:28DE
cs=0x24ed;eip=0x0028e0; 	T(MOV(dl, ch));	// 124279 mov     dl, ch ;~ 24ED:28E0
cs=0x24ed;eip=0x0028e2; 	X(PUSH(ax));	// 124280 push    ax ;~ 24ED:28E2
cs=0x24ed;eip=0x0028e3; 	X(PUSH(dx));	// 124281 push    dx ;~ 24ED:28E3
cs=0x24ed;eip=0x0028e4; 	T(ADD(ax, ax));	// 124282 add     ax, ax ;~ 24ED:28E4
cs=0x24ed;eip=0x0028e6; 	T(ADC(dx, dx));	// 124283 adc     dx, dx ;~ 24ED:28E6
cs=0x24ed;eip=0x0028e8; 	T(ADD(ah, 2));	// 124284 add     ah, 2 ;~ 24ED:28E8
cs=0x24ed;eip=0x0028eb; 	T(ADC(dx, 0));	// 124285 adc     dx, 0 ;~ 24ED:28EB
cs=0x24ed;eip=0x0028ee; 	X(MOV(*(dw*)(raddr(ss,bp+0)), ax));	// 124286 mov     [bp+0], ax ;~ 24ED:28EE
cs=0x24ed;eip=0x0028f1; 	X(MOV(*(dw*)(raddr(ss,bp+2)), dx));	// 124287 mov     [bp+2], dx ;~ 24ED:28F1
cs=0x24ed;eip=0x0028f4; 	T(SUB(ah, 4));	// 124288 sub     ah, 4 ;~ 24ED:28F4
cs=0x24ed;eip=0x0028f7; 	T(SBB(dx, 0));	// 124289 sbb     dx, 0 ;~ 24ED:28F7
cs=0x24ed;eip=0x0028fa; 	X(MOV(*(dw*)(raddr(ss,bp+4)), ax));	// 124290 mov     [bp+4], ax ;~ 24ED:28FA
cs=0x24ed;eip=0x0028fd; 	X(MOV(*(dw*)(raddr(ss,bp+6)), dx));	// 124291 mov     [bp+6], dx ;~ 24ED:28FD
cs=0x24ed;eip=0x002900; 	X(POP(dx));	// 124292 pop     dx ;~ 24ED:2900
cs=0x24ed;eip=0x002901; 	X(POP(ax));	// 124293 pop     ax ;~ 24ED:2901
cs=0x24ed;eip=0x002902; 	T(DIV2(si));	// 124294 div     si ;~ 24ED:2902
cs=0x24ed;eip=0x002904; 	T(MUL1_2(ax));	// 124295 mul     ax ;~ 24ED:2904
cs=0x24ed;eip=0x002906; 	T(MOV(al, ah));	// 124296 mov     al, ah ;~ 24ED:2906
cs=0x24ed;eip=0x002908; 	T(MOV(ah, dl));	// 124297 mov     ah, dl ;~ 24ED:2908
cs=0x24ed;eip=0x00290a; 	T(MOV(dl, dh));	// 124298 mov     dl, dh ;~ 24ED:290A
cs=0x24ed;eip=0x00290c; 	T(XOR(dh, dh));	// 124299 xor     dh, dh ;~ 24ED:290C
cs=0x24ed;eip=0x00290e; 	X(MOV(*(dw*)(raddr(ss,bp+8)), ax));	// 124300 mov     [bp+8], ax ;~ 24ED:290E
cs=0x24ed;eip=0x002911; 	X(MOV(*(dw*)(raddr(ss,bp+0x0A)), dx));	// 124301 mov     [bp+0Ah], dx ;~ 24ED:2911
cs=0x24ed;eip=0x002914; 	T(ADD(ax, ax));	// 124302 add     ax, ax ;~ 24ED:2914
cs=0x24ed;eip=0x002916; 	T(ADC(dx, dx));	// 124303 adc     dx, dx ;~ 24ED:2916
cs=0x24ed;eip=0x002918; 	X(MOV(*(dw*)(raddr(ss,bp+0x0C)), ax));	// 124304 mov     [bp+0Ch], ax ;~ 24ED:2918
cs=0x24ed;eip=0x00291b; 	X(MOV(*(dw*)(raddr(ss,bp+0x0E)), dx));	// 124305 mov     [bp+0Eh], dx ;~ 24ED:291B
cs=0x24ed;eip=0x00291e; 	X(POP(dx));	// 124306 pop     dx ;~ 24ED:291E
cs=0x24ed;eip=0x00291f; 	T(MOV(di, dx));	// 124307 mov     di, dx ;~ 24ED:291F
cs=0x24ed;eip=0x002921; 	T(ADD(di, cx));	// 124308 add     di, cx ;~ 24ED:2921
cs=0x24ed;eip=0x002923; 	T(SUB(dx, cx));	// 124309 sub     dx, cx ;~ 24ED:2923
cs=0x24ed;eip=0x002925; 	T(MOV(si, bx));	// 124310 mov     si, bx ;~ 24ED:2925
cs=0x24ed;eip=0x002927; 	R(JMP(loc_35df0));	// 124311 jmp     short loc_35DF0 ;~ 24ED:2927
loc_35dd9:
	// 8333 
cs=0x24ed;eip=0x002929; 	X(SUB(*(dw*)(raddr(ss,bp+4)), 0x200));	// 124315 sub     word ptr [bp+4], 200h ;~ 24ED:2929
cs=0x24ed;eip=0x00292e; 	X(SBB(*(dw*)(raddr(ss,bp+6)), 0));	// 124316 sbb     word ptr [bp+6], 0 ;~ 24ED:292E
loc_35de2:
	// 8334 
cs=0x24ed;eip=0x002932; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0C))));	// 124319 mov     ax, [bp+0Ch] ;~ 24ED:2932
cs=0x24ed;eip=0x002935; 	X(ADD(*(dw*)(raddr(ss,bp+8)), ax));	// 124320 add     [bp+8], ax ;~ 24ED:2935
cs=0x24ed;eip=0x002938; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0E))));	// 124321 mov     ax, [bp+0Eh] ;~ 24ED:2938
cs=0x24ed;eip=0x00293b; 	X(ADC(*(dw*)(raddr(ss,bp+0x0A)), ax));	// 124322 adc     [bp+0Ah], ax ;~ 24ED:293B
cs=0x24ed;eip=0x00293e; 	T(INC(bx));	// 124323 inc     bx ;~ 24ED:293E
cs=0x24ed;eip=0x00293f; 	T(DEC(si));	// 124324 dec     si ;~ 24ED:293F
loc_35df0:
	// 8335 
cs=0x24ed;eip=0x002940; 	R(CALL(sub_35e66,0));	// 124327 call    sub_35E66 ;~ 24ED:2940
cs=0x24ed;eip=0x002943; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 124328 mov     ax, [bp+8] ;~ 24ED:2943
cs=0x24ed;eip=0x002946; 	X(SUB(*(dw*)(raddr(ss,bp+0)), ax));	// 124329 sub     [bp+0], ax ;~ 24ED:2946
cs=0x24ed;eip=0x002949; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 124330 mov     ax, [bp+0Ah] ;~ 24ED:2949
cs=0x24ed;eip=0x00294c; 	X(SBB(*(dw*)(raddr(ss,bp+2)), ax));	// 124331 sbb     [bp+2], ax ;~ 24ED:294C
cs=0x24ed;eip=0x00294f; 	R(JNC(loc_35de2));	// 124332 jnb     short loc_35DE2 ;~ 24ED:294F
cs=0x24ed;eip=0x002951; 	T(INC(dx));	// 124333 inc     dx ;~ 24ED:2951
cs=0x24ed;eip=0x002952; 	T(DEC(di));	// 124334 dec     di ;~ 24ED:2952
cs=0x24ed;eip=0x002953; 	T(MOV(ax, *(dw*)(raddr(ss,bp+4))));	// 124335 mov     ax, [bp+4] ;~ 24ED:2953
cs=0x24ed;eip=0x002956; 	X(ADD(*(dw*)(raddr(ss,bp+0)), ax));	// 124336 add     [bp+0], ax ;~ 24ED:2956
cs=0x24ed;eip=0x002959; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 124337 mov     ax, [bp+6] ;~ 24ED:2959
cs=0x24ed;eip=0x00295c; 	X(ADC(*(dw*)(raddr(ss,bp+2)), ax));	// 124338 adc     [bp+2], ax ;~ 24ED:295C
cs=0x24ed;eip=0x00295f; 	R(JC(loc_35dd9));	// 124339 jb      short loc_35DD9 ;~ 24ED:295F
cs=0x24ed;eip=0x002961; 	X(SUB(*(dw*)(raddr(ss,bp+4)), 0x200));	// 124340 sub     word ptr [bp+4], 200h ;~ 24ED:2961
cs=0x24ed;eip=0x002966; 	X(SBB(*(dw*)(raddr(ss,bp+6)), 0));	// 124341 sbb     word ptr [bp+6], 0 ;~ 24ED:2966
cs=0x24ed;eip=0x00296a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0C))));	// 124342 mov     ax, [bp+0Ch] ;~ 24ED:296A
cs=0x24ed;eip=0x00296d; 	X(ADD(*(dw*)(raddr(ss,bp+8)), ax));	// 124343 add     [bp+8], ax ;~ 24ED:296D
cs=0x24ed;eip=0x002970; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0E))));	// 124344 mov     ax, [bp+0Eh] ;~ 24ED:2970
cs=0x24ed;eip=0x002973; 	X(ADC(*(dw*)(raddr(ss,bp+0x0A)), ax));	// 124345 adc     [bp+0Ah], ax ;~ 24ED:2973
loc_35e26:
	// 8336 
cs=0x24ed;eip=0x002976; 	R(CALL(sub_35e66,0));	// 124348 call    sub_35E66 ;~ 24ED:2976
cs=0x24ed;eip=0x002979; 	T(INC(dx));	// 124349 inc     dx ;~ 24ED:2979
cs=0x24ed;eip=0x00297a; 	T(DEC(di));	// 124350 dec     di ;~ 24ED:297A
cs=0x24ed;eip=0x00297b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+4))));	// 124351 mov     ax, [bp+4] ;~ 24ED:297B
cs=0x24ed;eip=0x00297e; 	X(ADD(*(dw*)(raddr(ss,bp+0)), ax));	// 124352 add     [bp+0], ax ;~ 24ED:297E
cs=0x24ed;eip=0x002981; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 124353 mov     ax, [bp+6] ;~ 24ED:2981
cs=0x24ed;eip=0x002984; 	X(ADC(*(dw*)(raddr(ss,bp+2)), ax));	// 124354 adc     [bp+2], ax ;~ 24ED:2984
cs=0x24ed;eip=0x002987; 	R(JNC(loc_35e53));	// 124355 jnb     short loc_35E53 ;~ 24ED:2987
cs=0x24ed;eip=0x002989; 	T(INC(bx));	// 124356 inc     bx ;~ 24ED:2989
cs=0x24ed;eip=0x00298a; 	T(DEC(si));	// 124357 dec     si ;~ 24ED:298A
cs=0x24ed;eip=0x00298b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 124358 mov     ax, [bp+8] ;~ 24ED:298B
cs=0x24ed;eip=0x00298e; 	X(SUB(*(dw*)(raddr(ss,bp+0)), ax));	// 124359 sub     [bp+0], ax ;~ 24ED:298E
cs=0x24ed;eip=0x002991; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 124360 mov     ax, [bp+0Ah] ;~ 24ED:2991
cs=0x24ed;eip=0x002994; 	X(SBB(*(dw*)(raddr(ss,bp+2)), ax));	// 124361 sbb     [bp+2], ax ;~ 24ED:2994
cs=0x24ed;eip=0x002997; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0C))));	// 124362 mov     ax, [bp+0Ch] ;~ 24ED:2997
cs=0x24ed;eip=0x00299a; 	X(ADD(*(dw*)(raddr(ss,bp+8)), ax));	// 124363 add     [bp+8], ax ;~ 24ED:299A
cs=0x24ed;eip=0x00299d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0E))));	// 124364 mov     ax, [bp+0Eh] ;~ 24ED:299D
cs=0x24ed;eip=0x0029a0; 	X(ADC(*(dw*)(raddr(ss,bp+0x0A)), ax));	// 124365 adc     [bp+0Ah], ax ;~ 24ED:29A0
loc_35e53:
	// 8337 
cs=0x24ed;eip=0x0029a3; 	X(SUB(*(dw*)(raddr(ss,bp+4)), 0x200));	// 124368 sub     word ptr [bp+4], 200h ;~ 24ED:29A3
cs=0x24ed;eip=0x0029a8; 	X(SBB(*(dw*)(raddr(ss,bp+6)), 0));	// 124369 sbb     word ptr [bp+6], 0 ;~ 24ED:29A8
cs=0x24ed;eip=0x0029ac; 	R(JNS(loc_35e26));	// 124370 jns     short loc_35E26 ;~ 24ED:29AC
cs=0x24ed;eip=0x0029ae; 	R(CALL(sub_35e66,0));	// 124371 call    sub_35E66 ;~ 24ED:29AE
cs=0x24ed;eip=0x0029b1; 	T(ADD(sp, 0x14));	// 124372 add     sp, 14h ;~ 24ED:29B1
cs=0x24ed;eip=0x0029b4; 	R(RETN(0));	// 124373 retn ;~ 24ED:29B4
sub_35e66:
	// 124383 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0029b6; 	X(INC(*(&byte_35e65)));	// 124385 inc     cs:byte_35E65 ;~ 24ED:29B6
ret_24ed_29bb:
	// 8338 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0029bb; 	T(MOV(al, *(&byte_35e65)));	// 124386 mov     al, cs:byte_35E65 ;~ 24ED:29BB
cs=0x24ed;eip=0x0029bf; 	T(AND(al, 3));	// 124387 and     al, 3 ;~ 24ED:29BF
cs=0x24ed;eip=0x0029c1; 	R(JZ(loc_35e87));	// 124388 jz      short loc_35E87 ;~ 24ED:29C1
cs=0x24ed;eip=0x0029c3; 	T(CMP(al, 2));	// 124389 cmp     al, 2 ;~ 24ED:29C3
cs=0x24ed;eip=0x0029c5; 	R(JC(loc_35e8d));	// 124390 jb      short loc_35E8D ;~ 24ED:29C5
cs=0x24ed;eip=0x0029c7; 	R(JZ(loc_35e97));	// 124391 jz      short loc_35E97 ;~ 24ED:29C7
cs=0x24ed;eip=0x0029c9; 	T(XCHG(dx, di));	// 124392 xchg    dx, di ;~ 24ED:29C9
cs=0x24ed;eip=0x0029cb; 	T(XCHG(bx, si));	// 124393 xchg    bx, si ;~ 24ED:29CB
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0029cd; 	R(CALL(__dispatch_call,*(dw*)(((db*)&off_35c6e))));	// 124394 call    cs:off_35C6E ;~ 24ED:29CD
cs=0x24ed;eip=0x0029d2; 	T(XCHG(bx, si));	// 124395 xchg    bx, si ;~ 24ED:29D2
cs=0x24ed;eip=0x0029d4; 	T(XCHG(dx, di));	// 124396 xchg    dx, di ;~ 24ED:29D4
cs=0x24ed;eip=0x0029d6; 	R(RETN(0));	// 124397 retn ;~ 24ED:29D6
loc_35e87:
	// 8339 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0029d7; 	R(CALL(__dispatch_call,*(dw*)(((db*)&off_35c6e))));	// 124401 call    cs:off_35C6E ;~ 24ED:29D7
cs=0x24ed;eip=0x0029dc; 	R(RETN(0));	// 124402 retn ;~ 24ED:29DC
loc_35e8d:
	// 8340 
cs=0x24ed;eip=0x0029dd; 	T(XCHG(dx, di));	// 124406 xchg    dx, di ;~ 24ED:29DD
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0029df; 	R(CALL(__dispatch_call,*(dw*)(((db*)&off_35c6e))));	// 124407 call    cs:off_35C6E ;~ 24ED:29DF
cs=0x24ed;eip=0x0029e4; 	T(XCHG(dx, di));	// 124408 xchg    dx, di ;~ 24ED:29E4
cs=0x24ed;eip=0x0029e6; 	R(RETN(0));	// 124409 retn ;~ 24ED:29E6
loc_35e97:
	// 8341 
cs=0x24ed;eip=0x0029e7; 	T(XCHG(bx, si));	// 124413 xchg    bx, si ;~ 24ED:29E7
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0029e9; 	R(CALL(__dispatch_call,*(dw*)(((db*)&off_35c6e))));	// 124414 call    cs:off_35C6E ;~ 24ED:29E9
cs=0x24ed;eip=0x0029ee; 	T(XCHG(bx, si));	// 124415 xchg    bx, si ;~ 24ED:29EE
cs=0x24ed;eip=0x0029f0; 	R(RETN(0));	// 124416 retn ;~ 24ED:29F0
seg002_29f1_proc:
	// 124421 
locret_35ea1:
	// 8342 
cs=0x24ed;eip=0x0029f1; 	R(RETF(0));	// 124423 retf ;~ 24ED:29F1
loc_35ea2:
	// 8343 
cs=0x24ed;eip=0x0029f2; 	T(MOV(dx, 0x50));	// 124428 mov     dx, 50h ; 'P' ;~ 24ED:29F2
cs=0x24ed;eip=0x0029f5; 	R(JMP(loc_35eaa));	// 124429 jmp     short loc_35EAA ;~ 24ED:29F5
loc_35ea7:
	// 8344 
cs=0x24ed;eip=0x0029f7; 	T(MOV(dx, 0x96));	// 124434 mov     dx, 96h ; '–' ;~ 24ED:29F7
loc_35eaa:
	// 8345 
cs=0x24ed;eip=0x0029fa; 	T(MOV(ax, 0x140));	// 124437 mov     ax, 140h ;~ 24ED:29FA
cs=0x24ed;eip=0x0029fd; 	X(PUSH(dx));	// 124438 push    dx ;~ 24ED:29FD
cs=0x24ed;eip=0x0029fe; 	T(MUL1_2(cx));	// 124439 mul     cx ;~ 24ED:29FE
cs=0x24ed;eip=0x002a00; 	X(POP(dx));	// 124440 pop     dx ;~ 24ED:2A00
cs=0x24ed;eip=0x002a01; 	T(MOV(cx, 1));	// 124441 mov     cx, 1 ;~ 24ED:2A01
loc_35eb4:
	// 8346 
cs=0x24ed;eip=0x002a04; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 124444 mov     bx, [bp+0] ;~ 24ED:2A04
cs=0x24ed;eip=0x002a07; 	X(PUSH(dx));	// 124445 push    dx ;~ 24ED:2A07
loc_35eb8:
	// 8347 
cs=0x24ed;eip=0x002a08; 	T(MOV(si, cx));	// 124448 mov     si, cx ;~ 24ED:2A08
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002a0a; 	T(ADD(si, *(dw*)(((db*)&word_33653))));	// 124449 add     si, cs:word_33653 ;~ 24ED:2A0A
cs=0x24ed;eip=0x002a0f; 	T(MOV(di, si));	// 124450 mov     di, si ;~ 24ED:2A0F
cs=0x24ed;eip=0x002a11; 	X(MOVSB);	// 124451 movsb ;~ 24ED:2A11
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002a12; 	T(SUB(si, *(dw*)(((db*)&word_33653))));	// 124452 sub     si, cs:word_33653 ;~ 24ED:2A12
cs=0x24ed;eip=0x002a17; 	T(ADD(si, 0x7FFE));	// 124453 add     si, 7FFEh ;~ 24ED:2A17
cs=0x24ed;eip=0x002a1b; 	T(CMP(si, ax));	// 124454 cmp     si, ax ;~ 24ED:2A1B
cs=0x24ed;eip=0x002a1d; 	R(JNC(loc_35edc));	// 124455 jnb     short loc_35EDC ;~ 24ED:2A1D
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002a1f; 	T(ADD(si, *(dw*)(((db*)&word_33653))));	// 124456 add     si, cs:word_33653 ;~ 24ED:2A1F
cs=0x24ed;eip=0x002a24; 	T(MOV(di, si));	// 124457 mov     di, si ;~ 24ED:2A24
cs=0x24ed;eip=0x002a26; 	X(MOVSB);	// 124458 movsb ;~ 24ED:2A26
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002a27; 	T(SUB(si, *(dw*)(((db*)&word_33653))));	// 124459 sub     si, cs:word_33653 ;~ 24ED:2A27
loc_35edc:
	// 8348 
cs=0x24ed;eip=0x002a2c; 	T(SHR(cx, 1));	// 124462 shr     cx, 1 ;~ 24ED:2A2C
cs=0x24ed;eip=0x002a2e; 	R(JNC(loc_35ee3));	// 124463 jnb     short loc_35EE3 ;~ 24ED:2A2E
cs=0x24ed;eip=0x002a30; 	T(XOR(ch, 0x44));	// 124464 xor     ch, 44h ;~ 24ED:2A30
loc_35ee3:
	// 8349 
cs=0x24ed;eip=0x002a33; 	T(CMP(cx, 1));	// 124467 cmp     cx, 1 ;~ 24ED:2A33
cs=0x24ed;eip=0x002a36; 	R(JZ(loc_35ef3));	// 124468 jz      short loc_35EF3 ;~ 24ED:2A36
cs=0x24ed;eip=0x002a38; 	T(DEC(dx));	// 124469 dec     dx ;~ 24ED:2A38
cs=0x24ed;eip=0x002a39; 	R(JNZ(loc_35eb8));	// 124470 jnz     short loc_35EB8 ;~ 24ED:2A39
cs=0x24ed;eip=0x002a3b; 	X(POP(dx));	// 124471 pop     dx ;~ 24ED:2A3B
loc_35eec:
	// 8350 
cs=0x24ed;eip=0x002a3c; 	T(CMP(bx, *(dw*)(raddr(ss,bp+0))));	// 124474 cmp     bx, [bp+0] ;~ 24ED:2A3C
cs=0x24ed;eip=0x002a3f; 	R(JZ(loc_35eec));	// 124475 jz      short loc_35EEC ;~ 24ED:2A3F
cs=0x24ed;eip=0x002a41; 	R(JMP(loc_35eb4));	// 124476 jmp     short loc_35EB4 ;~ 24ED:2A41
loc_35ef3:
	// 8351 
cs=0x24ed;eip=0x002a43; 	X(POP(dx));	// 124480 pop     dx ;~ 24ED:2A43
cs=0x24ed;eip=0x002a44; 	T(XOR(si, si));	// 124481 xor     si, si ;~ 24ED:2A44
cs=0x24ed;eip=0x002a46; 	T(MOV(di, si));	// 124482 mov     di, si ;~ 24ED:2A46
cs=0x24ed;eip=0x002a48; 	X(MOVSB);	// 124483 movsb ;~ 24ED:2A48
cs=0x24ed;eip=0x002a49; 	R(RETF(0));	// 124484 retf ;~ 24ED:2A49
loc_35efa:
	// 8352 
cs=0x24ed;eip=0x002a4a; 	T(MOV(bx, 0x4A));	// 124489 mov     bx, 4Ah ; 'J' ;~ 24ED:2A4A
cs=0x24ed;eip=0x002a4d; 	T(MOV(dx, 0x9C));	// 124490 mov     dx, 9Ch ; 'œ' ;~ 24ED:2A4D
cs=0x24ed;eip=0x002a50; 	R(CALL(sub_340a8,0));	// 124491 call    sub_340A8 ;~ 24ED:2A50
cs=0x24ed;eip=0x002a53; 	T(MOV(dx, 1));	// 124492 mov     dx, 1 ;~ 24ED:2A53
cs=0x24ed;eip=0x002a56; 	T(MOV(ax, 0x0FB08));	// 124493 mov     ax, 0FB08h ;~ 24ED:2A56
cs=0x24ed;eip=0x002a59; 	R(CALL(sub_35f42,0));	// 124494 call    sub_35F42 ;~ 24ED:2A59
cs=0x24ed;eip=0x002a5c; 	T(INC(dx));	// 124495 inc     dx ;~ 24ED:2A5C
cs=0x24ed;eip=0x002a5d; 	T(XOR(ax, ax));	// 124496 xor     ax, ax ;~ 24ED:2A5D
cs=0x24ed;eip=0x002a5f; 	R(CALL(sub_35f42,0));	// 124497 call    sub_35F42 ;~ 24ED:2A5F
cs=0x24ed;eip=0x002a62; 	T(MOV(dx, 2));	// 124498 mov     dx, 2 ;~ 24ED:2A62
loc_35f15:
	// 8353 
cs=0x24ed;eip=0x002a65; 	T(MOV(ax, 0x0FAF8));	// 124501 mov     ax, 0FAF8h ;~ 24ED:2A65
cs=0x24ed;eip=0x002a68; 	T(ADD(di, ax));	// 124502 add     di, ax ;~ 24ED:2A68
cs=0x24ed;eip=0x002a6a; 	R(CALL(sub_35f42,0));	// 124503 call    sub_35F42 ;~ 24ED:2A6A
cs=0x24ed;eip=0x002a6d; 	T(SUB(di, 0x4F8));	// 124504 sub     di, 4F8h ;~ 24ED:2A6D
cs=0x24ed;eip=0x002a71; 	T(MOV(ax, 0x0F600));	// 124505 mov     ax, 0F600h ;~ 24ED:2A71
cs=0x24ed;eip=0x002a74; 	R(CALL(sub_35f42,0));	// 124506 call    sub_35F42 ;~ 24ED:2A74
cs=0x24ed;eip=0x002a77; 	T(ADD(di, 0x508));	// 124507 add     di, 508h ;~ 24ED:2A77
cs=0x24ed;eip=0x002a7b; 	T(INC(dx));	// 124508 inc     dx ;~ 24ED:2A7B
cs=0x24ed;eip=0x002a7c; 	T(MOV(ax, 0x0FB08));	// 124509 mov     ax, 0FB08h ;~ 24ED:2A7C
cs=0x24ed;eip=0x002a7f; 	R(CALL(sub_35f42,0));	// 124510 call    sub_35F42 ;~ 24ED:2A7F
cs=0x24ed;eip=0x002a82; 	T(ADD(di, 0x4F8));	// 124511 add     di, 4F8h ;~ 24ED:2A82
cs=0x24ed;eip=0x002a86; 	T(XOR(ax, ax));	// 124512 xor     ax, ax ;~ 24ED:2A86
cs=0x24ed;eip=0x002a88; 	R(CALL(sub_35f42,0));	// 124513 call    sub_35F42 ;~ 24ED:2A88
cs=0x24ed;eip=0x002a8b; 	T(INC(dx));	// 124514 inc     dx ;~ 24ED:2A8B
cs=0x24ed;eip=0x002a8c; 	T(CMP(dx, 0x26));	// 124515 cmp     dx, 26h ; '&' ;~ 24ED:2A8C
cs=0x24ed;eip=0x002a8f; 	R(JC(loc_35f15));	// 124516 jb      short loc_35F15 ;~ 24ED:2A8F
cs=0x24ed;eip=0x002a91; 	R(RETF(0));	// 124517 retf ;~ 24ED:2A91
sub_35f42:
	// 124522 
cs=0x24ed;eip=0x002a92; 	X(PUSH(*(dw*)(raddr(ss,bp+0))));	// 124524 push    word ptr [bp+0] ;~ 24ED:2A92
ret_24ed_2a95:
	// 8354 
cs=0x24ed;eip=0x002a95; 	T(MOV(bx, dx));	// 124525 mov     bx, dx ;~ 24ED:2A95
loc_35f47:
	// 8355 
cs=0x24ed;eip=0x002a97; 	T(MOV(cx, 4));	// 124528 mov     cx, 4 ;~ 24ED:2A97
loc_35f4a:
	// 8356 
cs=0x24ed;eip=0x002a9a; 	T(MOV(si, di));	// 124531 mov     si, di ;~ 24ED:2A9A
cs=0x24ed;eip=0x002a9c; 	X(MOVSD);	// 124532 movsd ;~ 24ED:2A9C
cs=0x24ed;eip=0x002a9e; 	X(MOVSD);	// 124533 movsd ;~ 24ED:2A9E
cs=0x24ed;eip=0x002aa0; 	T(ADD(di, 0x138));	// 124534 add     di, 138h ;~ 24ED:2AA0
cs=0x24ed;eip=0x002aa4; 	R(LOOP(loc_35f4a));	// 124535 loop    loc_35F4A ;~ 24ED:2AA4
cs=0x24ed;eip=0x002aa6; 	T(ADD(di, ax));	// 124536 add     di, ax ;~ 24ED:2AA6
cs=0x24ed;eip=0x002aa8; 	T(DEC(bx));	// 124537 dec     bx ;~ 24ED:2AA8
cs=0x24ed;eip=0x002aa9; 	R(JNZ(loc_35f47));	// 124538 jnz     short loc_35F47 ;~ 24ED:2AA9
cs=0x24ed;eip=0x002aab; 	X(POP(ax));	// 124539 pop     ax ;~ 24ED:2AAB
loc_35f5c:
	// 8357 
cs=0x24ed;eip=0x002aac; 	T(CMP(ax, *(dw*)(raddr(ss,bp+0))));	// 124542 cmp     ax, [bp+0] ;~ 24ED:2AAC
cs=0x24ed;eip=0x002aaf; 	R(JZ(loc_35f5c));	// 124543 jz      short loc_35F5C ;~ 24ED:2AAF
cs=0x24ed;eip=0x002ab1; 	R(RETN(0));	// 124544 retn ;~ 24ED:2AB1
seg002_2ab2_proc:
	// 124549 
locret_35f62:
	// 8358 
cs=0x24ed;eip=0x002ab2; 	R(RETF(0));	// 124551 retf ;~ 24ED:2AB2
loc_35f63:
	// 8359 
cs=0x24ed;eip=0x002ab3; 	X(PUSH(cs));	// 124556 push    cs ;~ 24ED:2AB3
cs=0x24ed;eip=0x002ab4; 	R(CALL(sub_33fb0,0));	// 124557 call    near ptr sub_33FB0 ;~ 24ED:2AB4
cs=0x24ed;eip=0x002ab7; 	T(OR(dx, dx));	// 124558 or      dx, dx ;~ 24ED:2AB7
cs=0x24ed;eip=0x002ab9; 	R(JS(loc_35fac));	// 124559 js      short loc_35FAC ;~ 24ED:2AB9
cs=0x24ed;eip=0x002abb; 	X(PUSH(cx));	// 124560 push    cx ;~ 24ED:2ABB
cs=0x24ed;eip=0x002abc; 	X(PUSH(ds));	// 124561 push    ds ;~ 24ED:2ABC
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002abd; 	T(MOV(ds, *(dw*)(((db*)&word_359a8))));	// 124562 mov     ds, cs:word_359A8 ;~ 24ED:2ABD
cs=0x24ed;eip=0x002ac2; 	R(CALL(sub_360e4,0));	// 124563 call    sub_360E4 ;~ 24ED:2AC2
cs=0x24ed;eip=0x002ac5; 	X(POP(ds));	// 124564 pop     ds ;~ 24ED:2AC5
cs=0x24ed;eip=0x002ac6; 	X(POP(cx));	// 124565 pop     cx ;~ 24ED:2AC6
cs=0x24ed;eip=0x002ac7; 	T(MOV(bx, cx));	// 124566 mov     bx, cx ;~ 24ED:2AC7
loc_35f79:
	// 8360 
cs=0x24ed;eip=0x002ac9; 	T(MOV(dx, 0x140));	// 124569 mov     dx, 140h ;~ 24ED:2AC9
cs=0x24ed;eip=0x002acc; 	T(SUB(bx, 8));	// 124570 sub     bx, 8 ;~ 24ED:2ACC
cs=0x24ed;eip=0x002acf; 	X(PUSH(bx));	// 124571 push    bx ;~ 24ED:2ACF
cs=0x24ed;eip=0x002ad0; 	X(PUSH(*(dw*)(raddr(ss,bp+0))));	// 124572 push    word ptr [bp+0] ;~ 24ED:2AD0
cs=0x24ed;eip=0x002ad3; 	R(JNS(loc_35f89));	// 124573 jns     short loc_35F89 ;~ 24ED:2AD3
cs=0x24ed;eip=0x002ad5; 	T(ADD(dx, bx));	// 124574 add     dx, bx ;~ 24ED:2AD5
cs=0x24ed;eip=0x002ad7; 	T(XOR(bx, bx));	// 124575 xor     bx, bx ;~ 24ED:2AD7
loc_35f89:
	// 8361 
cs=0x24ed;eip=0x002ad9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 124578 mov     ax, [bp+0] ;~ 24ED:2AD9
loc_35f8c:
	// 8362 
cs=0x24ed;eip=0x002adc; 	T(CMP(ax, *(dw*)(raddr(ss,bp+0))));	// 124581 cmp     ax, [bp+0] ;~ 24ED:2ADC
cs=0x24ed;eip=0x002adf; 	R(JZ(loc_35f8c));	// 124582 jz      short loc_35F8C ;~ 24ED:2ADF
cs=0x24ed;eip=0x002ae1; 	R(CALL(sub_340a8,0));	// 124583 call    sub_340A8 ;~ 24ED:2AE1
cs=0x24ed;eip=0x002ae4; 	X(PUSH(bx));	// 124584 push    bx ;~ 24ED:2AE4
cs=0x24ed;eip=0x002ae5; 	X(PUSH(dx));	// 124585 push    dx ;~ 24ED:2AE5
cs=0x24ed;eip=0x002ae6; 	X(PUSH(di));	// 124586 push    di ;~ 24ED:2AE6
cs=0x24ed;eip=0x002ae7; 	R(CALL(sub_3603e,0));	// 124587 call    sub_3603E ;~ 24ED:2AE7
cs=0x24ed;eip=0x002aea; 	X(POP(di));	// 124588 pop     di ;~ 24ED:2AEA
cs=0x24ed;eip=0x002aeb; 	X(POP(dx));	// 124589 pop     dx ;~ 24ED:2AEB
cs=0x24ed;eip=0x002aec; 	X(POP(bx));	// 124590 pop     bx ;~ 24ED:2AEC
cs=0x24ed;eip=0x002aed; 	R(CALL(sub_35fe8,0));	// 124591 call    sub_35FE8 ;~ 24ED:2AED
cs=0x24ed;eip=0x002af0; 	X(POP(bx));	// 124592 pop     bx ;~ 24ED:2AF0
cs=0x24ed;eip=0x002af1; 	R(CALL(sub_359e1,0));	// 124593 call    sub_359E1 ;~ 24ED:2AF1
cs=0x24ed;eip=0x002af4; 	X(POP(bx));	// 124594 pop     bx ;~ 24ED:2AF4
cs=0x24ed;eip=0x002af5; 	T(CMP(bx, 0x0FEC8));	// 124595 cmp     bx, 0FEC8h ;~ 24ED:2AF5
cs=0x24ed;eip=0x002af9; 	R(JG(loc_35f79));	// 124596 jg      short loc_35F79 ;~ 24ED:2AF9
cs=0x24ed;eip=0x002afb; 	R(RETF(0));	// 124597 retf ;~ 24ED:2AFB
loc_35fac:
	// 8363 
cs=0x24ed;eip=0x002afc; 	X(PUSH(cx));	// 124601 push    cx ;~ 24ED:2AFC
cs=0x24ed;eip=0x002afd; 	X(PUSH(ds));	// 124602 push    ds ;~ 24ED:2AFD
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002afe; 	T(MOV(ds, *(dw*)(((db*)&word_359a6))));	// 124603 mov     ds, cs:word_359A6 ;~ 24ED:2AFE
cs=0x24ed;eip=0x002b03; 	R(CALL(sub_360e4,0));	// 124604 call    sub_360E4 ;~ 24ED:2B03
cs=0x24ed;eip=0x002b06; 	X(POP(ds));	// 124605 pop     ds ;~ 24ED:2B06
cs=0x24ed;eip=0x002b07; 	X(POP(cx));	// 124606 pop     cx ;~ 24ED:2B07
cs=0x24ed;eip=0x002b08; 	T(MOV(bx, 0x0FEC8));	// 124607 mov     bx, 0FEC8h ;~ 24ED:2B08
loc_35fbb:
	// 8364 
cs=0x24ed;eip=0x002b0b; 	T(MOV(dx, 0x140));	// 124610 mov     dx, 140h ;~ 24ED:2B0B
cs=0x24ed;eip=0x002b0e; 	X(PUSH(bx));	// 124611 push    bx ;~ 24ED:2B0E
cs=0x24ed;eip=0x002b0f; 	X(PUSH(*(dw*)(raddr(ss,bp+0))));	// 124612 push    word ptr [bp+0] ;~ 24ED:2B0F
cs=0x24ed;eip=0x002b12; 	T(OR(bx, bx));	// 124613 or      bx, bx ;~ 24ED:2B12
cs=0x24ed;eip=0x002b14; 	R(JNS(loc_35fca));	// 124614 jns     short loc_35FCA ;~ 24ED:2B14
cs=0x24ed;eip=0x002b16; 	T(ADD(dx, bx));	// 124615 add     dx, bx ;~ 24ED:2B16
cs=0x24ed;eip=0x002b18; 	T(XOR(bx, bx));	// 124616 xor     bx, bx ;~ 24ED:2B18
loc_35fca:
	// 8365 
cs=0x24ed;eip=0x002b1a; 	R(CALL(sub_340a8,0));	// 124619 call    sub_340A8 ;~ 24ED:2B1A
cs=0x24ed;eip=0x002b1d; 	X(PUSH(bx));	// 124620 push    bx ;~ 24ED:2B1D
cs=0x24ed;eip=0x002b1e; 	X(PUSH(dx));	// 124621 push    dx ;~ 24ED:2B1E
cs=0x24ed;eip=0x002b1f; 	X(PUSH(di));	// 124622 push    di ;~ 24ED:2B1F
cs=0x24ed;eip=0x002b20; 	R(CALL(sub_36094,0));	// 124623 call    sub_36094 ;~ 24ED:2B20
cs=0x24ed;eip=0x002b23; 	X(POP(di));	// 124624 pop     di ;~ 24ED:2B23
cs=0x24ed;eip=0x002b24; 	X(POP(dx));	// 124625 pop     dx ;~ 24ED:2B24
cs=0x24ed;eip=0x002b25; 	X(POP(bx));	// 124626 pop     bx ;~ 24ED:2B25
cs=0x24ed;eip=0x002b26; 	R(CALL(sub_35fe8,0));	// 124627 call    sub_35FE8 ;~ 24ED:2B26
cs=0x24ed;eip=0x002b29; 	X(POP(bx));	// 124628 pop     bx ;~ 24ED:2B29
cs=0x24ed;eip=0x002b2a; 	R(CALL(sub_359e1,0));	// 124629 call    sub_359E1 ;~ 24ED:2B2A
cs=0x24ed;eip=0x002b2d; 	X(POP(bx));	// 124630 pop     bx ;~ 24ED:2B2D
cs=0x24ed;eip=0x002b2e; 	T(ADD(bx, 8));	// 124631 add     bx, 8 ;~ 24ED:2B2E
cs=0x24ed;eip=0x002b31; 	T(CMP(bx, 0x98));	// 124632 cmp     bx, 98h ;~ 24ED:2B31
cs=0x24ed;eip=0x002b35; 	R(JL(loc_35fbb));	// 124633 jl      short loc_35FBB ;~ 24ED:2B35
cs=0x24ed;eip=0x002b37; 	R(RETF(0));	// 124634 retf ;~ 24ED:2B37
sub_35fe8:
	// 124639 
cs=0x24ed;eip=0x002b38; 	X(PUSH(dx));	// 124641 push    dx ;~ 24ED:2B38
ret_24ed_2b39:
	// 8366 
cs=0x24ed;eip=0x002b39; 	T(MOV(ax, 0x0C8));	// 124642 mov     ax, 0C8h ; 'È' ;~ 24ED:2B39
cs=0x24ed;eip=0x002b3c; 	T(NEG(dx));	// 124643 neg     dx ;~ 24ED:2B3C
cs=0x24ed;eip=0x002b3e; 	T(ADD(dx, 0x140));	// 124644 add     dx, 140h ;~ 24ED:2B3E
cs=0x24ed;eip=0x002b42; 	T(INC(dx));	// 124645 inc     dx ;~ 24ED:2B42
cs=0x24ed;eip=0x002b43; 	T(MUL1_2(dx));	// 124646 mul     dx ;~ 24ED:2B43
cs=0x24ed;eip=0x002b45; 	T(MOV(si, ax));	// 124647 mov     si, ax ;~ 24ED:2B45
cs=0x24ed;eip=0x002b47; 	T(MOV(ax, 0x98));	// 124648 mov     ax, 98h ;~ 24ED:2B47
cs=0x24ed;eip=0x002b4a; 	T(SUB(si, ax));	// 124649 sub     si, ax ;~ 24ED:2B4A
cs=0x24ed;eip=0x002b4c; 	X(POP(dx));	// 124650 pop     dx ;~ 24ED:2B4C
cs=0x24ed;eip=0x002b4d; 	T(CMP(dx, ax));	// 124651 cmp     dx, ax ;~ 24ED:2B4D
cs=0x24ed;eip=0x002b4f; 	R(JNC(loc_36005));	// 124652 jnb     short loc_36005 ;~ 24ED:2B4F
cs=0x24ed;eip=0x002b51; 	T(ADD(si, ax));	// 124653 add     si, ax ;~ 24ED:2B51
cs=0x24ed;eip=0x002b53; 	T(SUB(si, dx));	// 124654 sub     si, dx ;~ 24ED:2B53
loc_36005:
	// 8367 
cs=0x24ed;eip=0x002b55; 	T(SUB(ax, bx));	// 124657 sub     ax, bx ;~ 24ED:2B55
cs=0x24ed;eip=0x002b57; 	T(CMP(ax, dx));	// 124658 cmp     ax, dx ;~ 24ED:2B57
cs=0x24ed;eip=0x002b59; 	R(JC(loc_3600d));	// 124659 jb      short loc_3600D ;~ 24ED:2B59
cs=0x24ed;eip=0x002b5b; 	T(MOV(ax, dx));	// 124660 mov     ax, dx ;~ 24ED:2B5B
loc_3600d:
	// 8368 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002b5d; 	T(MOV(ds, *(dw*)(((db*)&word_359a4))));	// 124663 mov     ds, cs:word_359A4 ;~ 24ED:2B5D
cs=0x24ed;eip=0x002b62; 	T(SUB(di, ax));	// 124664 sub     di, ax ;~ 24ED:2B62
loc_36014:
	// 8369 
cs=0x24ed;eip=0x002b64; 	T(MOV(cx, ax));	// 124667 mov     cx, ax ;~ 24ED:2B64
cs=0x24ed;eip=0x002b66; 	T(SHR(cx, 1));	// 124668 shr     cx, 1 ;~ 24ED:2B66
	// 124669 rep movsw ;~ 24ED:2B68
cs=0x24ed;eip=0x002b68; 	X(	REP MOVSW);	// 124669 rep movsw ;~ 24ED:2B68
cs=0x24ed;eip=0x002b6a; 	T(SUB(si, ax));	// 124670 sub     si, ax ;~ 24ED:2B6A
cs=0x24ed;eip=0x002b6c; 	T(SUB(di, ax));	// 124671 sub     di, ax ;~ 24ED:2B6C
cs=0x24ed;eip=0x002b6e; 	T(ADD(si, 0x0C8));	// 124672 add     si, 0C8h ; 'È' ;~ 24ED:2B6E
cs=0x24ed;eip=0x002b72; 	T(ADD(di, 0x140));	// 124673 add     di, 140h ;~ 24ED:2B72
cs=0x24ed;eip=0x002b76; 	T(DEC(ax));	// 124674 dec     ax ;~ 24ED:2B76
cs=0x24ed;eip=0x002b77; 	T(MOV(cx, ax));	// 124675 mov     cx, ax ;~ 24ED:2B77
cs=0x24ed;eip=0x002b79; 	T(SHR(cx, 1));	// 124676 shr     cx, 1 ;~ 24ED:2B79
	// 124677 rep movsw ;~ 24ED:2B7B
cs=0x24ed;eip=0x002b7b; 	X(	REP MOVSW);	// 124677 rep movsw ;~ 24ED:2B7B
cs=0x24ed;eip=0x002b7d; 	X(MOVSB);	// 124678 movsb ;~ 24ED:2B7D
cs=0x24ed;eip=0x002b7e; 	T(SUB(si, ax));	// 124679 sub     si, ax ;~ 24ED:2B7E
cs=0x24ed;eip=0x002b80; 	T(SUB(di, ax));	// 124680 sub     di, ax ;~ 24ED:2B80
cs=0x24ed;eip=0x002b82; 	T(ADD(si, 0x0C8));	// 124681 add     si, 0C8h ; 'È' ;~ 24ED:2B82
cs=0x24ed;eip=0x002b86; 	T(ADD(di, 0x140));	// 124682 add     di, 140h ;~ 24ED:2B86
cs=0x24ed;eip=0x002b8a; 	T(DEC(ax));	// 124683 dec     ax ;~ 24ED:2B8A
cs=0x24ed;eip=0x002b8b; 	R(JG(loc_36014));	// 124684 jg      short loc_36014 ;~ 24ED:2B8B
cs=0x24ed;eip=0x002b8d; 	R(RETN(0));	// 124685 retn ;~ 24ED:2B8D
sub_3603e:
	// 124692 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002b8e; 	T(MOV(ds, *(dw*)(((db*)&word_359a6))));	// 124693 mov     ds, cs:word_359A6 ;~ 24ED:2B8E
ret_24ed_2b93:
	// 8370 
cs=0x24ed;eip=0x002b93; 	T(MOV(ax, 0x98));	// 124694 mov     ax, 98h ;~ 24ED:2B93
cs=0x24ed;eip=0x002b96; 	T(SUB(ax, bx));	// 124695 sub     ax, bx ;~ 24ED:2B96
cs=0x24ed;eip=0x002b98; 	T(MOV(bx, dx));	// 124696 mov     bx, dx ;~ 24ED:2B98
cs=0x24ed;eip=0x002b9a; 	T(SUB(bx, ax));	// 124697 sub     bx, ax ;~ 24ED:2B9A
cs=0x24ed;eip=0x002b9c; 	R(JNS(loc_36050));	// 124698 jns     short loc_36050 ;~ 24ED:2B9C
cs=0x24ed;eip=0x002b9e; 	T(ADD(ax, bx));	// 124699 add     ax, bx ;~ 24ED:2B9E
loc_36050:
	// 8371 
cs=0x24ed;eip=0x002ba0; 	T(CMP(dx, 0x138));	// 124702 cmp     dx, 138h ;~ 24ED:2BA0
cs=0x24ed;eip=0x002ba4; 	R(JBE(loc_3606f));	// 124703 jbe     short loc_3606F ;~ 24ED:2BA4
cs=0x24ed;eip=0x002ba6; 	T(XOR(dx, dx));	// 124704 xor     dx, dx ;~ 24ED:2BA6
loc_36058:
	// 8372 
cs=0x24ed;eip=0x002ba8; 	T(MOV(cx, dx));	// 124707 mov     cx, dx ;~ 24ED:2BA8
cs=0x24ed;eip=0x002baa; 	T(MOV(si, di));	// 124708 mov     si, di ;~ 24ED:2BAA
	// 124709 rep movsb ;~ 24ED:2BAC
cs=0x24ed;eip=0x002bac; 	X(	REP MOVSB);	// 124709 rep movsb ;~ 24ED:2BAC
cs=0x24ed;eip=0x002bae; 	T(SUB(di, dx));	// 124710 sub     di, dx ;~ 24ED:2BAE
cs=0x24ed;eip=0x002bb0; 	T(ADD(di, 0x13F));	// 124711 add     di, 13Fh ;~ 24ED:2BB0
cs=0x24ed;eip=0x002bb4; 	T(INC(dx));	// 124712 inc     dx ;~ 24ED:2BB4
cs=0x24ed;eip=0x002bb5; 	T(CMP(dx, 8));	// 124713 cmp     dx, 8 ;~ 24ED:2BB5
cs=0x24ed;eip=0x002bb8; 	R(JC(loc_36058));	// 124714 jb      short loc_36058 ;~ 24ED:2BB8
cs=0x24ed;eip=0x002bba; 	T(SUB(ax, 8));	// 124715 sub     ax, 8 ;~ 24ED:2BBA
cs=0x24ed;eip=0x002bbd; 	R(JBE(locret_36093));	// 124716 jbe     short locret_36093 ;~ 24ED:2BBD
loc_3606f:
	// 8373 
cs=0x24ed;eip=0x002bbf; 	T(MOV(si, di));	// 124720 mov     si, di ;~ 24ED:2BBF
cs=0x24ed;eip=0x002bc1; 	T(MOV(cx, 4));	// 124721 mov     cx, 4 ;~ 24ED:2BC1
	// 124722 rep movsw ;~ 24ED:2BC4
cs=0x24ed;eip=0x002bc4; 	X(	REP MOVSW);	// 124722 rep movsw ;~ 24ED:2BC4
cs=0x24ed;eip=0x002bc6; 	T(ADD(di, 0x137));	// 124723 add     di, 137h ;~ 24ED:2BC6
cs=0x24ed;eip=0x002bca; 	T(DEC(ax));	// 124724 dec     ax ;~ 24ED:2BCA
cs=0x24ed;eip=0x002bcb; 	R(JNZ(loc_3606f));	// 124725 jnz     short loc_3606F ;~ 24ED:2BCB
cs=0x24ed;eip=0x002bcd; 	T(OR(bx, bx));	// 124726 or      bx, bx ;~ 24ED:2BCD
cs=0x24ed;eip=0x002bcf; 	R(JGE(locret_36093));	// 124727 jge     short locret_36093 ;~ 24ED:2BCF
cs=0x24ed;eip=0x002bd1; 	T(MOV(dx, 8));	// 124728 mov     dx, 8 ;~ 24ED:2BD1
loc_36084:
	// 8374 
cs=0x24ed;eip=0x002bd4; 	T(MOV(cx, dx));	// 124731 mov     cx, dx ;~ 24ED:2BD4
cs=0x24ed;eip=0x002bd6; 	T(MOV(si, di));	// 124732 mov     si, di ;~ 24ED:2BD6
	// 124733 rep movsb ;~ 24ED:2BD8
cs=0x24ed;eip=0x002bd8; 	X(	REP MOVSB);	// 124733 rep movsb ;~ 24ED:2BD8
cs=0x24ed;eip=0x002bda; 	T(SUB(di, dx));	// 124734 sub     di, dx ;~ 24ED:2BDA
cs=0x24ed;eip=0x002bdc; 	T(ADD(di, 0x140));	// 124735 add     di, 140h ;~ 24ED:2BDC
cs=0x24ed;eip=0x002be0; 	T(DEC(dx));	// 124736 dec     dx ;~ 24ED:2BE0
cs=0x24ed;eip=0x002be1; 	R(JNZ(loc_36084));	// 124737 jnz     short loc_36084 ;~ 24ED:2BE1
locret_36093:
	// 8375 
cs=0x24ed;eip=0x002be3; 	R(RETN(0));	// 124741 retn ;~ 24ED:2BE3
sub_36094:
	// 124748 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002be4; 	T(MOV(ds, *(dw*)(((db*)&word_359a6))));	// 124749 mov     ds, cs:word_359A6 ;~ 24ED:2BE4
ret_24ed_2be9:
	// 8376 
cs=0x24ed;eip=0x002be9; 	T(MOV(ax, 0x98));	// 124750 mov     ax, 98h ;~ 24ED:2BE9
cs=0x24ed;eip=0x002bec; 	T(ADD(ax, 8));	// 124751 add     ax, 8 ;~ 24ED:2BEC
cs=0x24ed;eip=0x002bef; 	T(CMP(di, ax));	// 124752 cmp     di, ax ;~ 24ED:2BEF
cs=0x24ed;eip=0x002bf1; 	R(JC(locret_360e3));	// 124753 jb      short locret_360E3 ;~ 24ED:2BF1
cs=0x24ed;eip=0x002bf3; 	T(OR(bx, bx));	// 124754 or      bx, bx ;~ 24ED:2BF3
cs=0x24ed;eip=0x002bf5; 	T(SUB(ax, 8));	// 124755 sub     ax, 8 ;~ 24ED:2BF5
cs=0x24ed;eip=0x002bf8; 	T(OR(bx, bx));	// 124756 or      bx, bx ;~ 24ED:2BF8
cs=0x24ed;eip=0x002bfa; 	R(JLE(loc_360d0));	// 124757 jle     short loc_360D0 ;~ 24ED:2BFA
cs=0x24ed;eip=0x002bfc; 	T(ADD(ax, 8));	// 124758 add     ax, 8 ;~ 24ED:2BFC
cs=0x24ed;eip=0x002bff; 	T(SUB(ax, bx));	// 124759 sub     ax, bx ;~ 24ED:2BFF
cs=0x24ed;eip=0x002c01; 	T(SUB(di, ax));	// 124760 sub     di, ax ;~ 24ED:2C01
cs=0x24ed;eip=0x002c03; 	T(SUB(di, 0x0A00));	// 124761 sub     di, 0A00h ;~ 24ED:2C03
cs=0x24ed;eip=0x002c07; 	T(MOV(dx, 8));	// 124762 mov     dx, 8 ;~ 24ED:2C07
loc_360ba:
	// 8377 
cs=0x24ed;eip=0x002c0a; 	T(MOV(cx, ax));	// 124765 mov     cx, ax ;~ 24ED:2C0A
cs=0x24ed;eip=0x002c0c; 	T(SHR(cx, 1));	// 124766 shr     cx, 1 ;~ 24ED:2C0C
cs=0x24ed;eip=0x002c0e; 	T(MOV(si, di));	// 124767 mov     si, di ;~ 24ED:2C0E
	// 124768 rep movsw ;~ 24ED:2C10
cs=0x24ed;eip=0x002c10; 	X(	REP MOVSW);	// 124768 rep movsw ;~ 24ED:2C10
cs=0x24ed;eip=0x002c12; 	T(SUB(di, ax));	// 124769 sub     di, ax ;~ 24ED:2C12
cs=0x24ed;eip=0x002c14; 	T(ADD(di, 0x140));	// 124770 add     di, 140h ;~ 24ED:2C14
cs=0x24ed;eip=0x002c18; 	T(DEC(dx));	// 124771 dec     dx ;~ 24ED:2C18
cs=0x24ed;eip=0x002c19; 	R(JNZ(loc_360ba));	// 124772 jnz     short loc_360BA ;~ 24ED:2C19
cs=0x24ed;eip=0x002c1b; 	T(SUB(ax, 8));	// 124773 sub     ax, 8 ;~ 24ED:2C1B
cs=0x24ed;eip=0x002c1e; 	R(JMP(loc_360d5));	// 124774 jmp     short loc_360D5 ;~ 24ED:2C1E
loc_360d0:
	// 8378 
cs=0x24ed;eip=0x002c20; 	T(SUB(di, ax));	// 124778 sub     di, ax ;~ 24ED:2C20
cs=0x24ed;eip=0x002c22; 	T(SUB(di, 8));	// 124779 sub     di, 8 ;~ 24ED:2C22
loc_360d5:
	// 8379 
cs=0x24ed;eip=0x002c25; 	T(MOV(si, di));	// 124783 mov     si, di ;~ 24ED:2C25
cs=0x24ed;eip=0x002c27; 	T(MOV(cx, 4));	// 124784 mov     cx, 4 ;~ 24ED:2C27
	// 124785 rep movsw ;~ 24ED:2C2A
cs=0x24ed;eip=0x002c2a; 	X(	REP MOVSW);	// 124785 rep movsw ;~ 24ED:2C2A
cs=0x24ed;eip=0x002c2c; 	T(ADD(di, 0x138));	// 124786 add     di, 138h ;~ 24ED:2C2C
cs=0x24ed;eip=0x002c30; 	T(DEC(ax));	// 124787 dec     ax ;~ 24ED:2C30
cs=0x24ed;eip=0x002c31; 	R(JNZ(loc_360d5));	// 124788 jnz     short loc_360D5 ;~ 24ED:2C31
locret_360e3:
	// 8380 
cs=0x24ed;eip=0x002c33; 	R(RETN(0));	// 124791 retn ;~ 24ED:2C33
sub_360e4:
	// 124798 
cs=0x24ed;eip=0x002c34; 	X(PUSH(es));	// 124800 push    es ;~ 24ED:2C34
ret_24ed_2c35:
	// 8381 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002c35; 	T(MOV(es, *(dw*)(((db*)&word_359a4))));	// 124801 mov     es, cs:word_359A4 ;~ 24ED:2C35
cs=0x24ed;eip=0x002c3a; 	T(MOV(si, 0x0F9FF));	// 124802 mov     si, 0F9FFh ;~ 24ED:2C3A
cs=0x24ed;eip=0x002c3d; 	T(XOR(di, di));	// 124803 xor     di, di ;~ 24ED:2C3D
cs=0x24ed;eip=0x002c3f; 	T(MOV(dx, 0x140));	// 124804 mov     dx, 140h ;~ 24ED:2C3F
cs=0x24ed;eip=0x002c42; 	T(MOV(bx, 0x6062));	// 124805 mov     bx, 6062h ;~ 24ED:2C42
loc_360f5:
	// 8382 
cs=0x24ed;eip=0x002c45; 	X(PUSH(si));	// 124808 push    si ;~ 24ED:2C45
cs=0x24ed;eip=0x002c46; 	T(MOV(cx, 0x32));	// 124809 mov     cx, 32h ; '2' ;~ 24ED:2C46
loc_360f9:
	// 8383 
cs=0x24ed;eip=0x002c49; 	T(MOV(ah, *(raddr(ds,si-0x140))));	// 124812 mov     ah, [si-140h] ;~ 24ED:2C49
cs=0x24ed;eip=0x002c4d; 	T(CMP(ah, bh));	// 124813 cmp     ah, bh ;~ 24ED:2C4D
cs=0x24ed;eip=0x002c4f; 	R(JC(loc_36108));	// 124814 jb      short loc_36108 ;~ 24ED:2C4F
cs=0x24ed;eip=0x002c51; 	T(CMP(ah, bl));	// 124815 cmp     ah, bl ;~ 24ED:2C51
cs=0x24ed;eip=0x002c53; 	R(JNC(loc_36108));	// 124816 jnb     short loc_36108 ;~ 24ED:2C53
cs=0x24ed;eip=0x002c55; 	T(ADD(ah, 2));	// 124817 add     ah, 2 ;~ 24ED:2C55
loc_36108:
	// 8384 
cs=0x24ed;eip=0x002c58; 	T(MOV(al, *(raddr(ds,si))));	// 124821 mov     al, [si] ;~ 24ED:2C58
cs=0x24ed;eip=0x002c5a; 	T(CMP(al, bh));	// 124822 cmp     al, bh ;~ 24ED:2C5A
cs=0x24ed;eip=0x002c5c; 	R(JC(loc_36114));	// 124823 jb      short loc_36114 ;~ 24ED:2C5C
cs=0x24ed;eip=0x002c5e; 	T(CMP(al, bl));	// 124824 cmp     al, bl ;~ 24ED:2C5E
cs=0x24ed;eip=0x002c60; 	R(JNC(loc_36114));	// 124825 jnb     short loc_36114 ;~ 24ED:2C60
cs=0x24ed;eip=0x002c62; 	T(ADD(al, 2));	// 124826 add     al, 2 ;~ 24ED:2C62
loc_36114:
	// 8385 
cs=0x24ed;eip=0x002c64; 	X(STOSW);	// 124830 stosw ;~ 24ED:2C64
cs=0x24ed;eip=0x002c65; 	T(MOV(ah, *(raddr(ds,si-0x3C0))));	// 124831 mov     ah, [si-3C0h] ;~ 24ED:2C65
cs=0x24ed;eip=0x002c69; 	T(CMP(ah, bh));	// 124832 cmp     ah, bh ;~ 24ED:2C69
cs=0x24ed;eip=0x002c6b; 	R(JC(loc_36124));	// 124833 jb      short loc_36124 ;~ 24ED:2C6B
cs=0x24ed;eip=0x002c6d; 	T(CMP(ah, bl));	// 124834 cmp     ah, bl ;~ 24ED:2C6D
cs=0x24ed;eip=0x002c6f; 	R(JNC(loc_36124));	// 124835 jnb     short loc_36124 ;~ 24ED:2C6F
cs=0x24ed;eip=0x002c71; 	T(ADD(ah, 2));	// 124836 add     ah, 2 ;~ 24ED:2C71
loc_36124:
	// 8386 
cs=0x24ed;eip=0x002c74; 	T(MOV(al, *(raddr(ds,si-0x280))));	// 124840 mov     al, [si-280h] ;~ 24ED:2C74
cs=0x24ed;eip=0x002c78; 	T(CMP(al, bh));	// 124841 cmp     al, bh ;~ 24ED:2C78
cs=0x24ed;eip=0x002c7a; 	R(JC(loc_36132));	// 124842 jb      short loc_36132 ;~ 24ED:2C7A
cs=0x24ed;eip=0x002c7c; 	T(CMP(al, bl));	// 124843 cmp     al, bl ;~ 24ED:2C7C
cs=0x24ed;eip=0x002c7e; 	R(JNC(loc_36132));	// 124844 jnb     short loc_36132 ;~ 24ED:2C7E
cs=0x24ed;eip=0x002c80; 	T(ADD(al, 2));	// 124845 add     al, 2 ;~ 24ED:2C80
loc_36132:
	// 8387 
cs=0x24ed;eip=0x002c82; 	X(STOSW);	// 124849 stosw ;~ 24ED:2C82
cs=0x24ed;eip=0x002c83; 	T(SUB(si, 0x500));	// 124850 sub     si, 500h ;~ 24ED:2C83
cs=0x24ed;eip=0x002c87; 	R(LOOP(loc_360f9));	// 124851 loop    loc_360F9 ;~ 24ED:2C87
cs=0x24ed;eip=0x002c89; 	X(POP(si));	// 124852 pop     si ;~ 24ED:2C89
cs=0x24ed;eip=0x002c8a; 	T(DEC(si));	// 124853 dec     si ;~ 24ED:2C8A
cs=0x24ed;eip=0x002c8b; 	T(DEC(dx));	// 124854 dec     dx ;~ 24ED:2C8B
cs=0x24ed;eip=0x002c8c; 	R(JNZ(loc_360f5));	// 124855 jnz     short loc_360F5 ;~ 24ED:2C8C
cs=0x24ed;eip=0x002c8e; 	X(PUSH(ds));	// 124856 push    ds ;~ 24ED:2C8E
cs=0x24ed;eip=0x002c8f; 	X(PUSH(es));	// 124857 push    es ;~ 24ED:2C8F
cs=0x24ed;eip=0x002c90; 	X(POP(ds));	// 124858 pop     ds ;~ 24ED:2C90
cs=0x24ed;eip=0x002c91; 	T(MOV(di, 0x62A0));	// 124859 mov     di, 62A0h ;~ 24ED:2C91
cs=0x24ed;eip=0x002c94; 	T(MOV(dx, 0x44));	// 124860 mov     dx, 44h ; 'D' ;~ 24ED:2C94
loc_36147:
	// 8388 
cs=0x24ed;eip=0x002c97; 	T(si = di-0x2A30);	// 124863 lea     si, [di-2A30h] ;~ 24ED:2C97
cs=0x24ed;eip=0x002c9b; 	X(MOVSW);	// 124864 movsw ;~ 24ED:2C9B
cs=0x24ed;eip=0x002c9c; 	X(MOVSW);	// 124865 movsw ;~ 24ED:2C9C
cs=0x24ed;eip=0x002c9d; 	X(MOVSW);	// 124866 movsw ;~ 24ED:2C9D
cs=0x24ed;eip=0x002c9e; 	X(MOVSW);	// 124867 movsw ;~ 24ED:2C9E
cs=0x24ed;eip=0x002c9f; 	T(ADD(di, 0x0C0));	// 124868 add     di, 0C0h ; 'À' ;~ 24ED:2C9F
cs=0x24ed;eip=0x002ca3; 	T(DEC(dx));	// 124869 dec     dx ;~ 24ED:2CA3
cs=0x24ed;eip=0x002ca4; 	R(JNZ(loc_36147));	// 124870 jnz     short loc_36147 ;~ 24ED:2CA4
cs=0x24ed;eip=0x002ca6; 	X(POP(ds));	// 124871 pop     ds ;~ 24ED:2CA6
cs=0x24ed;eip=0x002ca7; 	X(POP(es));	// 124872 pop     es ;~ 24ED:2CA7
cs=0x24ed;eip=0x002ca8; 	R(RETN(0));	// 124873 retn ;~ 24ED:2CA8
seg002_2ca9_proc:
	// 124878 
locret_36159:
	// 8389 
cs=0x24ed;eip=0x002ca9; 	R(RETF(0));	// 124880 retf ;~ 24ED:2CA9
locret_3615a:
	// 8390 
cs=0x24ed;eip=0x002caa; 	R(RETF(0));	// 124885 retf ;~ 24ED:2CAA
locret_3615b:
	// 8391 
cs=0x24ed;eip=0x002cab; 	R(RETF(0));	// 124890 retf ;~ 24ED:2CAB
loc_3615c:
	// 8392 
cs=0x24ed;eip=0x002cac; 	T(OR(dl, dl));	// 124895 or      dl, dl ;~ 24ED:2CAC
cs=0x24ed;eip=0x002cae; 	R(JS(loc_36196));	// 124896 js      short loc_36196 ;~ 24ED:2CAE
cs=0x24ed;eip=0x002cb0; 	T(MOV(ax, 0x140));	// 124897 mov     ax, 140h ;~ 24ED:2CB0
cs=0x24ed;eip=0x002cb3; 	T(MUL1_2(cx));	// 124898 mul     cx ;~ 24ED:2CB3
cs=0x24ed;eip=0x002cb5; 	T(MOV(dx, ax));	// 124899 mov     dx, ax ;~ 24ED:2CB5
cs=0x24ed;eip=0x002cb7; 	T(MOV(si, dx));	// 124900 mov     si, dx ;~ 24ED:2CB7
cs=0x24ed;eip=0x002cb9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 124901 mov     bx, [bp+0] ;~ 24ED:2CB9
loc_3616c:
	// 8393 
cs=0x24ed;eip=0x002cbc; 	T(XOR(di, di));	// 124904 xor     di, di ;~ 24ED:2CBC
cs=0x24ed;eip=0x002cbe; 	T(MOV(cx, dx));	// 124905 mov     cx, dx ;~ 24ED:2CBE
cs=0x24ed;eip=0x002cc0; 	T(SUB(cx, si));	// 124906 sub     cx, si ;~ 24ED:2CC0
cs=0x24ed;eip=0x002cc2; 	R(JZ(loc_3617c));	// 124907 jz      short loc_3617C ;~ 24ED:2CC2
cs=0x24ed;eip=0x002cc4; 	X(PUSH(si));	// 124908 push    si ;~ 24ED:2CC4
cs=0x24ed;eip=0x002cc5; 	T(SHR(cx, 2));	// 124909 shr     cx, 2 ;~ 24ED:2CC5
	// 124910 rep movsd ;~ 24ED:2CC8
cs=0x24ed;eip=0x002cc8; 	X(	REP MOVSD);	// 124910 rep movsd ;~ 24ED:2CC8
cs=0x24ed;eip=0x002ccb; 	X(POP(si));	// 124911 pop     si ;~ 24ED:2CCB
loc_3617c:
	// 8394 
cs=0x24ed;eip=0x002ccc; 	T(MOV(cx, 0x280));	// 124914 mov     cx, 280h ;~ 24ED:2CCC
cs=0x24ed;eip=0x002ccf; 	T(MOV(eax, 0x7070707));	// 124915 mov     eax, 7070707h ;~ 24ED:2CCF
	// 124916 rep stosd ;~ 24ED:2CD5
cs=0x24ed;eip=0x002cd5; 	X(	REP STOSD);	// 124916 rep stosd ;~ 24ED:2CD5
cs=0x24ed;eip=0x002cd8; 	T(SUB(si, 0x0A00));	// 124917 sub     si, 0A00h ;~ 24ED:2CD8
cs=0x24ed;eip=0x002cdc; 	R(CALL(sub_359ac,0));	// 124918 call    sub_359AC ;~ 24ED:2CDC
cs=0x24ed;eip=0x002cdf; 	T(CMP(si, 0x0A00));	// 124919 cmp     si, 0A00h ;~ 24ED:2CDF
cs=0x24ed;eip=0x002ce3; 	R(JA(loc_3616c));	// 124920 ja      short loc_3616C ;~ 24ED:2CE3
cs=0x24ed;eip=0x002ce5; 	R(RETF(0));	// 124921 retf ;~ 24ED:2CE5
loc_36196:
	// 8395 
cs=0x24ed;eip=0x002ce6; 	R(CALL(sub_35a05,0));	// 124925 call    sub_35A05 ;~ 24ED:2CE6
cs=0x24ed;eip=0x002ce9; 	T(MOV(ax, 0x140));	// 124926 mov     ax, 140h ;~ 24ED:2CE9
cs=0x24ed;eip=0x002cec; 	T(MUL1_2(cx));	// 124927 mul     cx ;~ 24ED:2CEC
cs=0x24ed;eip=0x002cee; 	T(MOV(dx, ax));	// 124928 mov     dx, ax ;~ 24ED:2CEE
cs=0x24ed;eip=0x002cf0; 	T(MOV(si, 0x0A00));	// 124929 mov     si, 0A00h ;~ 24ED:2CF0
cs=0x24ed;eip=0x002cf3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 124930 mov     bx, [bp+0] ;~ 24ED:2CF3
loc_361a6:
	// 8396 
cs=0x24ed;eip=0x002cf6; 	X(PUSH(si));	// 124933 push    si ;~ 24ED:2CF6
cs=0x24ed;eip=0x002cf7; 	T(XOR(di, di));	// 124934 xor     di, di ;~ 24ED:2CF7
cs=0x24ed;eip=0x002cf9; 	T(MOV(cx, dx));	// 124935 mov     cx, dx ;~ 24ED:2CF9
cs=0x24ed;eip=0x002cfb; 	T(SUB(cx, si));	// 124936 sub     cx, si ;~ 24ED:2CFB
cs=0x24ed;eip=0x002cfd; 	T(MOV(ax, ds));	// 124937 mov     ax, ds ;~ 24ED:2CFD
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002cff; 	T(MOV(ds, *(dw*)(((db*)&word_359a4))));	// 124938 mov     ds, cs:word_359A4 ;~ 24ED:2CFF
cs=0x24ed;eip=0x002d04; 	T(SHR(cx, 2));	// 124939 shr     cx, 2 ;~ 24ED:2D04
	// 124940 rep movsd ;~ 24ED:2D07
cs=0x24ed;eip=0x002d07; 	X(	REP MOVSD);	// 124940 rep movsd ;~ 24ED:2D07
cs=0x24ed;eip=0x002d0a; 	T(MOV(ds, ax));	// 124941 mov     ds, ax ;~ 24ED:2D0A
cs=0x24ed;eip=0x002d0c; 	T(MOV(cx, 0x280));	// 124942 mov     cx, 280h ;~ 24ED:2D0C
cs=0x24ed;eip=0x002d0f; 	T(MOV(eax, 0x7070707));	// 124943 mov     eax, 7070707h ;~ 24ED:2D0F
	// 124944 rep stosd ;~ 24ED:2D15
cs=0x24ed;eip=0x002d15; 	X(	REP STOSD);	// 124944 rep stosd ;~ 24ED:2D15
cs=0x24ed;eip=0x002d18; 	T(CMP(di, dx));	// 124945 cmp     di, dx ;~ 24ED:2D18
cs=0x24ed;eip=0x002d1a; 	R(JNC(loc_361d6));	// 124946 jnb     loc_361D6 ;~ 24ED:2D1A
cs=0x24ed;eip=0x002d1e; 	T(MOV(cx, 0x280));	// 124947 mov     cx, 280h ;~ 24ED:2D1E
cs=0x24ed;eip=0x002d21; 	T(MOV(si, di));	// 124948 mov     si, di ;~ 24ED:2D21
	// 124949 rep movsd ;~ 24ED:2D23
cs=0x24ed;eip=0x002d23; 	X(	REP MOVSD);	// 124949 rep movsd ;~ 24ED:2D23
loc_361d6:
	// 8397 
cs=0x24ed;eip=0x002d26; 	X(POP(si));	// 124952 pop     si ;~ 24ED:2D26
cs=0x24ed;eip=0x002d27; 	T(ADD(si, 0x0A00));	// 124953 add     si, 0A00h ;~ 24ED:2D27
cs=0x24ed;eip=0x002d2b; 	R(CALL(sub_359ac,0));	// 124954 call    sub_359AC ;~ 24ED:2D2B
cs=0x24ed;eip=0x002d2e; 	T(CMP(si, dx));	// 124955 cmp     si, dx ;~ 24ED:2D2E
cs=0x24ed;eip=0x002d30; 	R(JBE(loc_361a6));	// 124956 jbe     short loc_361A6 ;~ 24ED:2D30
cs=0x24ed;eip=0x002d32; 	R(RETF(0));	// 124957 retf ;~ 24ED:2D32
locret_361e3:
	// 8398 
cs=0x24ed;eip=0x002d33; 	R(RETF(0));	// 124962 retf ;~ 24ED:2D33
locret_361e4:
	// 8399 
cs=0x24ed;eip=0x002d34; 	R(RETF(0));	// 124967 retf ;~ 24ED:2D34
loc_361e5:
	// 8400 
cs=0x24ed;eip=0x002d35; 	T(MOV(bx, 0x0FEC0));	// 124972 mov     bx, 0FEC0h ;~ 24ED:2D35
cs=0x24ed;eip=0x002d38; 	R(CALL(sub_35a05,0));	// 124973 call    sub_35A05 ;~ 24ED:2D38
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002d3b; 	X(MOV(*(dw*)(((db*)&word_359aa)), 0));	// 124974 mov     cs:word_359AA, 0 ;~ 24ED:2D3B
cs=0x24ed;eip=0x002d42; 	X(PUSH(bx));	// 124975 push    bx ;~ 24ED:2D42
cs=0x24ed;eip=0x002d43; 	T(XOR(dx, dx));	// 124976 xor     dx, dx ;~ 24ED:2D43
cs=0x24ed;eip=0x002d45; 	T(MOV(bx, cx));	// 124977 mov     bx, cx ;~ 24ED:2D45
cs=0x24ed;eip=0x002d47; 	R(CALL(sub_340a8,0));	// 124978 call    sub_340A8 ;~ 24ED:2D47
cs=0x24ed;eip=0x002d4a; 	X(POP(bx));	// 124979 pop     bx ;~ 24ED:2D4A
cs=0x24ed;eip=0x002d4b; 	T(MOV(si, di));	// 124980 mov     si, di ;~ 24ED:2D4B
cs=0x24ed;eip=0x002d4d; 	T(MOV(dx, di));	// 124981 mov     dx, di ;~ 24ED:2D4D
cs=0x24ed;eip=0x002d4f; 	R(CALL(sub_359f7,0));	// 124982 call    sub_359F7 ;~ 24ED:2D4F
cs=0x24ed;eip=0x002d52; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0))));	// 124983 mov     cx, [bp+0] ;~ 24ED:2D52
loc_36205:
	// 8401 
cs=0x24ed;eip=0x002d55; 	X(PUSH(cx));	// 124986 push    cx ;~ 24ED:2D55
cs=0x24ed;eip=0x002d56; 	X(PUSH(si));	// 124987 push    si ;~ 24ED:2D56
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002d57; 	T(MOV(di, *(dw*)(((db*)&word_33653))));	// 124988 mov     di, cs:word_33653 ;~ 24ED:2D57
cs=0x24ed;eip=0x002d5c; 	T(MOV(cx, dx));	// 124989 mov     cx, dx ;~ 24ED:2D5C
cs=0x24ed;eip=0x002d5e; 	T(SUB(cx, si));	// 124990 sub     cx, si ;~ 24ED:2D5E
cs=0x24ed;eip=0x002d60; 	R(JZ(loc_3621b));	// 124991 jz      short loc_3621B ;~ 24ED:2D60
cs=0x24ed;eip=0x002d62; 	T(SHR(cx, 1));	// 124992 shr     cx, 1 ;~ 24ED:2D62
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002d64; 	T(MOV(ds, *(dw*)(((db*)&word_359a4))));	// 124993 mov     ds, cs:word_359A4 ;~ 24ED:2D64
	// 124994 rep movsw ;~ 24ED:2D69
cs=0x24ed;eip=0x002d69; 	X(	REP MOVSW);	// 124994 rep movsw ;~ 24ED:2D69
loc_3621b:
	// 8402 
cs=0x24ed;eip=0x002d6b; 	T(MOV(cx, dx));	// 124997 mov     cx, dx ;~ 24ED:2D6B
cs=0x24ed;eip=0x002d6d; 	T(SUB(cx, di));	// 124998 sub     cx, di ;~ 24ED:2D6D
cs=0x24ed;eip=0x002d6f; 	R(JZ(loc_3622f));	// 124999 jz      short loc_3622F ;~ 24ED:2D6F
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002d71; 	T(MOV(ds, *(dw*)(((db*)&word_359a6))));	// 125000 mov     ds, cs:word_359A6 ;~ 24ED:2D71
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002d76; 	T(MOV(si, *(dw*)(((db*)&word_33653))));	// 125001 mov     si, cs:word_33653 ;~ 24ED:2D76
cs=0x24ed;eip=0x002d7b; 	T(SHR(cx, 1));	// 125002 shr     cx, 1 ;~ 24ED:2D7B
	// 125003 rep movsw ;~ 24ED:2D7D
cs=0x24ed;eip=0x002d7d; 	X(	REP MOVSW);	// 125003 rep movsw ;~ 24ED:2D7D
loc_3622f:
	// 8403 
cs=0x24ed;eip=0x002d7f; 	X(POP(si));	// 125006 pop     si ;~ 24ED:2D7F
cs=0x24ed;eip=0x002d80; 	X(POP(cx));	// 125007 pop     cx ;~ 24ED:2D80
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002d81; 	X(INC(*(dw*)(((db*)&word_359aa))));	// 125008 inc     cs:word_359AA ;~ 24ED:2D81
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002d86; 	T(MOV(ax, *(dw*)(((db*)&word_359aa))));	// 125009 mov     ax, cs:word_359AA ;~ 24ED:2D86
cs=0x24ed;eip=0x002d8a; 	T(MOV(ah, 6));	// 125010 mov     ah, 6 ;~ 24ED:2D8A
cs=0x24ed;eip=0x002d8c; 	T(MUL1_1(ah));	// 125011 mul     ah ;~ 24ED:2D8C
loc_3623e:
	// 8404 
cs=0x24ed;eip=0x002d8e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 125014 mov     bx, [bp+0] ;~ 24ED:2D8E
cs=0x24ed;eip=0x002d91; 	T(SUB(bx, cx));	// 125015 sub     bx, cx ;~ 24ED:2D91
cs=0x24ed;eip=0x002d93; 	T(CMP(bx, ax));	// 125016 cmp     bx, ax ;~ 24ED:2D93
cs=0x24ed;eip=0x002d95; 	R(JC(loc_3623e));	// 125017 jb      short loc_3623E ;~ 24ED:2D95
cs=0x24ed;eip=0x002d97; 	T(MOV(bx, 0x0FEC0));	// 125018 mov     bx, 0FEC0h ;~ 24ED:2D97
cs=0x24ed;eip=0x002d9a; 	R(JZ(loc_36253));	// 125019 jz      short loc_36253 ;~ 24ED:2D9A
cs=0x24ed;eip=0x002d9c; 	T(ADD(bx, bx));	// 125020 add     bx, bx ;~ 24ED:2D9C
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002d9e; 	X(INC(*(dw*)(((db*)&word_359aa))));	// 125021 inc     cs:word_359AA ;~ 24ED:2D9E
loc_36253:
	// 8405 
cs=0x24ed;eip=0x002da3; 	T(ADD(si, bx));	// 125024 add     si, bx ;~ 24ED:2DA3
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002da5; 	T(CMP(si, *(dw*)(((db*)&word_33653))));	// 125025 cmp     si, cs:word_33653 ;~ 24ED:2DA5
cs=0x24ed;eip=0x002daa; 	R(JC(locret_36260));	// 125026 jb      short locret_36260 ;~ 24ED:2DAA
cs=0x24ed;eip=0x002dac; 	T(CMP(si, dx));	// 125027 cmp     si, dx ;~ 24ED:2DAC
cs=0x24ed;eip=0x002dae; 	R(JC(loc_36205));	// 125028 jb      short loc_36205 ;~ 24ED:2DAE
locret_36260:
	// 8406 
cs=0x24ed;eip=0x002db0; 	R(RETF(0));	// 125031 retf ;~ 24ED:2DB0
loc_36261:
	// 8407 
cs=0x24ed;eip=0x002db1; 	T(MOV(cx, 0x0C8));	// 125036 mov     cx, 0C8h ; 'È' ;~ 24ED:2DB1
loc_36264:
	// 8408 
cs=0x24ed;eip=0x002db4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 125040 mov     bx, [bp+0] ;~ 24ED:2DB4
cs=0x24ed;eip=0x002db7; 	T(MOV(si, 0x2FC8));	// 125041 mov     si, 2FC8h ;~ 24ED:2DB7
cs=0x24ed;eip=0x002dba; 	T(SHR(cx, 1));	// 125042 shr     cx, 1 ;~ 24ED:2DBA
cs=0x24ed;eip=0x002dbc; 	T(SHR(cx, 1));	// 125043 shr     cx, 1 ;~ 24ED:2DBC
loc_3626e:
	// 8409 
cs=0x24ed;eip=0x002dbe; 	X(LODS(*(dw*)(raddr(cs,si)),si,2));	// 125046 lods    word ptr cs:[si] ;~ 24ED:2DBE
cs=0x24ed;eip=0x002dc0; 	T(OR(ax, ax));	// 125047 or      ax, ax ;~ 24ED:2DC0
cs=0x24ed;eip=0x002dc2; 	R(JS(loc_36298));	// 125048 js      short loc_36298 ;~ 24ED:2DC2
cs=0x24ed;eip=0x002dc4; 	X(PUSH(cx));	// 125049 push    cx ;~ 24ED:2DC4
cs=0x24ed;eip=0x002dc5; 	X(PUSH(si));	// 125050 push    si ;~ 24ED:2DC5
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002dc6; 	T(ADD(ax, *(dw*)(((db*)&word_33653))));	// 125051 add     ax, cs:word_33653 ;~ 24ED:2DC6
cs=0x24ed;eip=0x002dcb; 	T(MOV(di, ax));	// 125052 mov     di, ax ;~ 24ED:2DCB
cs=0x24ed;eip=0x002dcd; 	T(XOR(ax, ax));	// 125053 xor     ax, ax ;~ 24ED:2DCD
loc_3627f:
	// 8410 
cs=0x24ed;eip=0x002dcf; 	X(PUSH(di));	// 125056 push    di ;~ 24ED:2DCF
cs=0x24ed;eip=0x002dd0; 	T(MOV(dx, 0x50));	// 125057 mov     dx, 50h ; 'P' ;~ 24ED:2DD0
loc_36283:
	// 8411 
cs=0x24ed;eip=0x002dd3; 	X(STOSB);	// 125060 stosb ;~ 24ED:2DD3
cs=0x24ed;eip=0x002dd4; 	T(ADD(di, 3));	// 125061 add     di, 3 ;~ 24ED:2DD4
cs=0x24ed;eip=0x002dd7; 	T(DEC(dx));	// 125062 dec     dx ;~ 24ED:2DD7
cs=0x24ed;eip=0x002dd8; 	R(JNZ(loc_36283));	// 125063 jnz     short loc_36283 ;~ 24ED:2DD8
cs=0x24ed;eip=0x002dda; 	X(POP(di));	// 125064 pop     di ;~ 24ED:2DDA
cs=0x24ed;eip=0x002ddb; 	T(ADD(di, 0x500));	// 125065 add     di, 500h ;~ 24ED:2DDB
cs=0x24ed;eip=0x002ddf; 	R(LOOP(loc_3627f));	// 125066 loop    loc_3627F ;~ 24ED:2DDF
cs=0x24ed;eip=0x002de1; 	R(CALL(sub_359e1,0));	// 125067 call    sub_359E1 ;~ 24ED:2DE1
cs=0x24ed;eip=0x002de4; 	X(POP(si));	// 125068 pop     si ;~ 24ED:2DE4
cs=0x24ed;eip=0x002de5; 	X(POP(cx));	// 125069 pop     cx ;~ 24ED:2DE5
cs=0x24ed;eip=0x002de6; 	R(JMP(loc_3626e));	// 125070 jmp     short loc_3626E ;~ 24ED:2DE6
loc_36298:
	// 8412 
cs=0x24ed;eip=0x002de8; 	X(PUSH(cs));	// 125074 push    cs ;~ 24ED:2DE8
cs=0x24ed;eip=0x002de9; 	R(CALL(sub_33fb0,0));	// 125075 call    near ptr sub_33FB0 ;~ 24ED:2DE9
cs=0x24ed;eip=0x002dec; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 125076 mov     bx, [bp+0] ;~ 24ED:2DEC
cs=0x24ed;eip=0x002def; 	T(MOV(si, 0x2FC8));	// 125077 mov     si, 2FC8h ;~ 24ED:2DEF
loc_362a2:
	// 8413 
cs=0x24ed;eip=0x002df2; 	X(LODS(*(dw*)(raddr(cs,si)),si,2));	// 125080 lods    word ptr cs:[si] ;~ 24ED:2DF2
cs=0x24ed;eip=0x002df4; 	T(OR(ax, ax));	// 125081 or      ax, ax ;~ 24ED:2DF4
cs=0x24ed;eip=0x002df6; 	R(JS(locret_362cc));	// 125082 js      short locret_362CC ;~ 24ED:2DF6
cs=0x24ed;eip=0x002df8; 	X(PUSH(cx));	// 125083 push    cx ;~ 24ED:2DF8
cs=0x24ed;eip=0x002df9; 	X(PUSH(si));	// 125084 push    si ;~ 24ED:2DF9
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002dfa; 	T(ADD(ax, *(dw*)(((db*)&word_33653))));	// 125085 add     ax, cs:word_33653 ;~ 24ED:2DFA
cs=0x24ed;eip=0x002dff; 	T(MOV(di, ax));	// 125086 mov     di, ax ;~ 24ED:2DFF
loc_362b1:
	// 8414 
cs=0x24ed;eip=0x002e01; 	X(PUSH(di));	// 125089 push    di ;~ 24ED:2E01
cs=0x24ed;eip=0x002e02; 	T(MOV(dx, 0x50));	// 125090 mov     dx, 50h ; 'P' ;~ 24ED:2E02
loc_362b5:
	// 8415 
cs=0x24ed;eip=0x002e05; 	T(MOV(si, di));	// 125093 mov     si, di ;~ 24ED:2E05
cs=0x24ed;eip=0x002e07; 	X(MOVSB);	// 125094 movsb ;~ 24ED:2E07
cs=0x24ed;eip=0x002e08; 	T(ADD(di, 3));	// 125095 add     di, 3 ;~ 24ED:2E08
cs=0x24ed;eip=0x002e0b; 	T(DEC(dx));	// 125096 dec     dx ;~ 24ED:2E0B
cs=0x24ed;eip=0x002e0c; 	R(JNZ(loc_362b5));	// 125097 jnz     short loc_362B5 ;~ 24ED:2E0C
cs=0x24ed;eip=0x002e0e; 	X(POP(di));	// 125098 pop     di ;~ 24ED:2E0E
cs=0x24ed;eip=0x002e0f; 	T(ADD(di, 0x500));	// 125099 add     di, 500h ;~ 24ED:2E0F
cs=0x24ed;eip=0x002e13; 	R(LOOP(loc_362b1));	// 125100 loop    loc_362B1 ;~ 24ED:2E13
cs=0x24ed;eip=0x002e15; 	R(CALL(sub_359e1,0));	// 125101 call    sub_359E1 ;~ 24ED:2E15
cs=0x24ed;eip=0x002e18; 	X(POP(si));	// 125102 pop     si ;~ 24ED:2E18
cs=0x24ed;eip=0x002e19; 	X(POP(cx));	// 125103 pop     cx ;~ 24ED:2E19
cs=0x24ed;eip=0x002e1a; 	R(JMP(loc_362a2));	// 125104 jmp     short loc_362A2 ;~ 24ED:2E1A
locret_362cc:
	// 8416 
cs=0x24ed;eip=0x002e1c; 	R(RETF(0));	// 125108 retf ;~ 24ED:2E1C
ret_24ed_2e1d:
	// 8417 
cs=0x24ed;eip=0x002e1d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 125110 mov     bx, [bp+0] ;~ 24ED:2E1D
cs=0x24ed;eip=0x002e20; 	T(MOV(si, 0x2FC8));	// 125111 mov     si, 2FC8h ;~ 24ED:2E20
cs=0x24ed;eip=0x002e23; 	T(SHR(cx, 1));	// 125112 shr     cx, 1 ;~ 24ED:2E23
cs=0x24ed;eip=0x002e25; 	T(SHR(cx, 1));	// 125113 shr     cx, 1 ;~ 24ED:2E25
loc_362d7:
	// 8418 
cs=0x24ed;eip=0x002e27; 	T(CMP(si, 0x2FD8));	// 125116 cmp     si, 2FD8h ;~ 24ED:2E27
cs=0x24ed;eip=0x002e2b; 	R(JNZ(loc_362e1));	// 125117 jnz     short loc_362E1 ;~ 24ED:2E2B
cs=0x24ed;eip=0x002e2d; 	X(PUSH(cs));	// 125118 push    cs ;~ 24ED:2E2D
cs=0x24ed;eip=0x002e2e; 	R(CALL(sub_33fb0,0));	// 125119 call    near ptr sub_33FB0 ;~ 24ED:2E2E
loc_362e1:
	// 8419 
cs=0x24ed;eip=0x002e31; 	X(LODS(*(dw*)(raddr(cs,si)),si,2));	// 125122 lods    word ptr cs:[si] ;~ 24ED:2E31
cs=0x24ed;eip=0x002e33; 	T(OR(ax, ax));	// 125123 or      ax, ax ;~ 24ED:2E33
cs=0x24ed;eip=0x002e35; 	R(JS(locret_36306));	// 125124 js      short locret_36306 ;~ 24ED:2E35
cs=0x24ed;eip=0x002e37; 	X(PUSH(cx));	// 125125 push    cx ;~ 24ED:2E37
cs=0x24ed;eip=0x002e38; 	X(PUSH(si));	// 125126 push    si ;~ 24ED:2E38
cs=0x24ed;eip=0x002e39; 	T(MOV(si, ax));	// 125127 mov     si, ax ;~ 24ED:2E39
loc_362eb:
	// 8420 
cs=0x24ed;eip=0x002e3b; 	X(PUSH(si));	// 125130 push    si ;~ 24ED:2E3B
cs=0x24ed;eip=0x002e3c; 	T(MOV(dx, 0x50));	// 125131 mov     dx, 50h ; 'P' ;~ 24ED:2E3C
loc_362ef:
	// 8421 
cs=0x24ed;eip=0x002e3f; 	T(MOV(di, si));	// 125134 mov     di, si ;~ 24ED:2E3F
cs=0x24ed;eip=0x002e41; 	X(MOVSB);	// 125135 movsb ;~ 24ED:2E41
cs=0x24ed;eip=0x002e42; 	T(ADD(si, 3));	// 125136 add     si, 3 ;~ 24ED:2E42
cs=0x24ed;eip=0x002e45; 	T(DEC(dx));	// 125137 dec     dx ;~ 24ED:2E45
cs=0x24ed;eip=0x002e46; 	R(JNZ(loc_362ef));	// 125138 jnz     short loc_362EF ;~ 24ED:2E46
cs=0x24ed;eip=0x002e48; 	X(POP(si));	// 125139 pop     si ;~ 24ED:2E48
cs=0x24ed;eip=0x002e49; 	T(ADD(si, 0x500));	// 125140 add     si, 500h ;~ 24ED:2E49
cs=0x24ed;eip=0x002e4d; 	R(LOOP(loc_362eb));	// 125141 loop    loc_362EB ;~ 24ED:2E4D
cs=0x24ed;eip=0x002e4f; 	R(CALL(sub_359ac,0));	// 125142 call    sub_359AC ;~ 24ED:2E4F
cs=0x24ed;eip=0x002e52; 	X(POP(si));	// 125143 pop     si ;~ 24ED:2E52
cs=0x24ed;eip=0x002e53; 	X(POP(cx));	// 125144 pop     cx ;~ 24ED:2E53
cs=0x24ed;eip=0x002e54; 	R(JMP(loc_362d7));	// 125145 jmp     short loc_362D7 ;~ 24ED:2E54
locret_36306:
	// 8422 
cs=0x24ed;eip=0x002e56; 	R(RETF(0));	// 125149 retf ;~ 24ED:2E56
loc_3638b:
	// 8423 
cs=0x24ed;eip=0x002edb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 125165 mov     bx, [bp+0] ;~ 24ED:2EDB
cs=0x24ed;eip=0x002ede; 	T(MOV(si, 0x2ED9));	// 125166 mov     si, 2ED9h ;~ 24ED:2EDE
cs=0x24ed;eip=0x002ee1; 	T(SHR(cx, 1));	// 125167 shr     cx, 1 ;~ 24ED:2EE1
cs=0x24ed;eip=0x002ee3; 	T(SHR(cx, 1));	// 125168 shr     cx, 1 ;~ 24ED:2EE3
cs=0x24ed;eip=0x002ee5; 	T(SHR(cx, 1));	// 125169 shr     cx, 1 ;~ 24ED:2EE5
loc_36397:
	// 8424 
cs=0x24ed;eip=0x002ee7; 	T(CMP(si, 0x2E57));	// 125172 cmp     si, 2E57h ;~ 24ED:2EE7
cs=0x24ed;eip=0x002eeb; 	R(JBE(loc_363c5));	// 125173 jbe     short loc_363C5 ;~ 24ED:2EEB
cs=0x24ed;eip=0x002eed; 	T(SUB(si, 2));	// 125174 sub     si, 2 ;~ 24ED:2EED
cs=0x24ed;eip=0x002ef0; 	T(MOV(ax, *(dw*)(raddr(cs,si))));	// 125175 mov     ax, cs:[si] ;~ 24ED:2EF0
cs=0x24ed;eip=0x002ef3; 	X(PUSH(cx));	// 125176 push    cx ;~ 24ED:2EF3
cs=0x24ed;eip=0x002ef4; 	T(MOV(di, ax));	// 125177 mov     di, ax ;~ 24ED:2EF4
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002ef6; 	T(ADD(di, *(dw*)(((db*)&word_33653))));	// 125178 add     di, cs:word_33653 ;~ 24ED:2EF6
cs=0x24ed;eip=0x002efb; 	T(XOR(ax, ax));	// 125179 xor     ax, ax ;~ 24ED:2EFB
loc_363ad:
	// 8425 
cs=0x24ed;eip=0x002efd; 	X(PUSH(di));	// 125182 push    di ;~ 24ED:2EFD
cs=0x24ed;eip=0x002efe; 	T(MOV(dx, 0x28));	// 125183 mov     dx, 28h ; '(' ;~ 24ED:2EFE
loc_363b1:
	// 8426 
cs=0x24ed;eip=0x002f01; 	X(STOSB);	// 125186 stosb ;~ 24ED:2F01
cs=0x24ed;eip=0x002f02; 	T(ADD(di, 7));	// 125187 add     di, 7 ;~ 24ED:2F02
cs=0x24ed;eip=0x002f05; 	T(DEC(dx));	// 125188 dec     dx ;~ 24ED:2F05
cs=0x24ed;eip=0x002f06; 	R(JNZ(loc_363b1));	// 125189 jnz     short loc_363B1 ;~ 24ED:2F06
cs=0x24ed;eip=0x002f08; 	X(POP(di));	// 125190 pop     di ;~ 24ED:2F08
cs=0x24ed;eip=0x002f09; 	T(ADD(di, 0x0A00));	// 125191 add     di, 0A00h ;~ 24ED:2F09
cs=0x24ed;eip=0x002f0d; 	R(LOOP(loc_363ad));	// 125192 loop    loc_363AD ;~ 24ED:2F0D
cs=0x24ed;eip=0x002f0f; 	R(CALL(sub_359e1,0));	// 125193 call    sub_359E1 ;~ 24ED:2F0F
cs=0x24ed;eip=0x002f12; 	X(POP(cx));	// 125194 pop     cx ;~ 24ED:2F12
cs=0x24ed;eip=0x002f13; 	R(JMP(loc_36397));	// 125195 jmp     short loc_36397 ;~ 24ED:2F13
loc_363c5:
	// 8427 
cs=0x24ed;eip=0x002f15; 	X(PUSH(cs));	// 125199 push    cs ;~ 24ED:2F15
cs=0x24ed;eip=0x002f16; 	R(CALL(sub_33fb0,0));	// 125200 call    near ptr sub_33FB0 ;~ 24ED:2F16
loc_363c9:
	// 8428 
cs=0x24ed;eip=0x002f19; 	X(LODS(*(dw*)(raddr(cs,si)),si,2));	// 125203 lods    word ptr cs:[si] ;~ 24ED:2F19
cs=0x24ed;eip=0x002f1b; 	T(OR(ax, ax));	// 125204 or      ax, ax ;~ 24ED:2F1B
cs=0x24ed;eip=0x002f1d; 	R(JS(locret_363f3));	// 125205 js      short locret_363F3 ;~ 24ED:2F1D
cs=0x24ed;eip=0x002f1f; 	X(PUSH(cx));	// 125206 push    cx ;~ 24ED:2F1F
cs=0x24ed;eip=0x002f20; 	X(PUSH(si));	// 125207 push    si ;~ 24ED:2F20
cs=0x24ed;eip=0x002f21; 	T(MOV(si, ax));	// 125208 mov     si, ax ;~ 24ED:2F21
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x002f23; 	T(ADD(si, *(dw*)(((db*)&word_33653))));	// 125209 add     si, cs:word_33653 ;~ 24ED:2F23
loc_363d8:
	// 8429 
cs=0x24ed;eip=0x002f28; 	X(PUSH(si));	// 125212 push    si ;~ 24ED:2F28
cs=0x24ed;eip=0x002f29; 	T(MOV(dx, 0x28));	// 125213 mov     dx, 28h ; '(' ;~ 24ED:2F29
loc_363dc:
	// 8430 
cs=0x24ed;eip=0x002f2c; 	T(MOV(di, si));	// 125216 mov     di, si ;~ 24ED:2F2C
cs=0x24ed;eip=0x002f2e; 	X(MOVSB);	// 125217 movsb ;~ 24ED:2F2E
cs=0x24ed;eip=0x002f2f; 	T(ADD(si, 7));	// 125218 add     si, 7 ;~ 24ED:2F2F
cs=0x24ed;eip=0x002f32; 	T(DEC(dx));	// 125219 dec     dx ;~ 24ED:2F32
cs=0x24ed;eip=0x002f33; 	R(JNZ(loc_363dc));	// 125220 jnz     short loc_363DC ;~ 24ED:2F33
cs=0x24ed;eip=0x002f35; 	X(POP(si));	// 125221 pop     si ;~ 24ED:2F35
cs=0x24ed;eip=0x002f36; 	T(ADD(si, 0x0A00));	// 125222 add     si, 0A00h ;~ 24ED:2F36
cs=0x24ed;eip=0x002f3a; 	R(LOOP(loc_363d8));	// 125223 loop    loc_363D8 ;~ 24ED:2F3A
cs=0x24ed;eip=0x002f3c; 	R(CALL(sub_359e1,0));	// 125224 call    sub_359E1 ;~ 24ED:2F3C
cs=0x24ed;eip=0x002f3f; 	X(POP(si));	// 125225 pop     si ;~ 24ED:2F3F
cs=0x24ed;eip=0x002f40; 	X(POP(cx));	// 125226 pop     cx ;~ 24ED:2F40
cs=0x24ed;eip=0x002f41; 	R(JMP(loc_363c9));	// 125227 jmp     short loc_363C9 ;~ 24ED:2F41
locret_363f3:
	// 8431 
cs=0x24ed;eip=0x002f43; 	R(RETF(0));	// 125231 retf ;~ 24ED:2F43
loc_363f4:
	// 8432 
cs=0x24ed;eip=0x002f44; 	R(CALL(sub_35a05,0));	// 125236 call    sub_35A05 ;~ 24ED:2F44
cs=0x24ed;eip=0x002f47; 	X(PUSH(ds));	// 125237 push    ds ;~ 24ED:2F47
cs=0x24ed;eip=0x002f48; 	T(MOV(ds, si));	// 125238 mov     ds, si ;~ 24ED:2F48
cs=0x24ed;eip=0x002f4a; 	R(CALL(sub_36462,0));	// 125239 call    sub_36462 ;~ 24ED:2F4A
cs=0x24ed;eip=0x002f4d; 	R(CALL(sub_3649a,0));	// 125240 call    sub_3649A ;~ 24ED:2F4D
cs=0x24ed;eip=0x002f50; 	R(CALL(sub_364d2,0));	// 125241 call    sub_364D2 ;~ 24ED:2F50
cs=0x24ed;eip=0x002f53; 	X(PUSH(cs));	// 125242 push    cs ;~ 24ED:2F53
cs=0x24ed;eip=0x002f54; 	R(CALL(sub_33fb0,0));	// 125243 call    near ptr sub_33FB0 ;~ 24ED:2F54
cs=0x24ed;eip=0x002f57; 	X(POP(ds));	// 125244 pop     ds ;~ 24ED:2F57
cs=0x24ed;eip=0x002f58; 	R(CALL(sub_364d2,0));	// 125245 call    sub_364D2 ;~ 24ED:2F58
cs=0x24ed;eip=0x002f5b; 	R(CALL(sub_3649a,0));	// 125246 call    sub_3649A ;~ 24ED:2F5B
cs=0x24ed;eip=0x002f5e; 	R(CALL(sub_36462,0));	// 125247 call    sub_36462 ;~ 24ED:2F5E
cs=0x24ed;eip=0x002f61; 	R(RETF(0));	// 125248 retf ;~ 24ED:2F61
loc_36412:
	// 8433 
cs=0x24ed;eip=0x002f62; 	R(CALL(sub_364d2,0));	// 125253 call    sub_364D2 ;~ 24ED:2F62
cs=0x24ed;eip=0x002f65; 	R(CALL(sub_364d2,0));	// 125254 call    sub_364D2 ;~ 24ED:2F65
cs=0x24ed;eip=0x002f68; 	R(CALL(sub_364d2,0));	// 125255 call    sub_364D2 ;~ 24ED:2F68
cs=0x24ed;eip=0x002f6b; 	R(CALL(sub_3649a,0));	// 125256 call    sub_3649A ;~ 24ED:2F6B
cs=0x24ed;eip=0x002f6e; 	R(CALL(sub_3649a,0));	// 125257 call    sub_3649A ;~ 24ED:2F6E
cs=0x24ed;eip=0x002f71; 	R(CALL(sub_36462,0));	// 125258 call    sub_36462 ;~ 24ED:2F71
cs=0x24ed;eip=0x002f74; 	R(CALL(sub_36462,0));	// 125259 call    sub_36462 ;~ 24ED:2F74
cs=0x24ed;eip=0x002f77; 	R(RETF(0));	// 125260 retf ;~ 24ED:2F77
loc_36428:
	// 8434 
cs=0x24ed;eip=0x002f78; 	R(CALL(sub_35a05,0));	// 125265 call    sub_35A05 ;~ 24ED:2F78
cs=0x24ed;eip=0x002f7b; 	X(PUSH(ds));	// 125266 push    ds ;~ 24ED:2F7B
cs=0x24ed;eip=0x002f7c; 	T(MOV(ds, si));	// 125267 mov     ds, si ;~ 24ED:2F7C
cs=0x24ed;eip=0x002f7e; 	R(CALL(sub_36462,0));	// 125268 call    sub_36462 ;~ 24ED:2F7E
cs=0x24ed;eip=0x002f81; 	R(CALL(sub_3649a,0));	// 125269 call    sub_3649A ;~ 24ED:2F81
cs=0x24ed;eip=0x002f84; 	X(PUSH(cs));	// 125270 push    cs ;~ 24ED:2F84
cs=0x24ed;eip=0x002f85; 	R(CALL(sub_33fb0,0));	// 125271 call    near ptr sub_33FB0 ;~ 24ED:2F85
cs=0x24ed;eip=0x002f88; 	X(POP(ds));	// 125272 pop     ds ;~ 24ED:2F88
cs=0x24ed;eip=0x002f89; 	R(CALL(sub_3649a,0));	// 125273 call    sub_3649A ;~ 24ED:2F89
cs=0x24ed;eip=0x002f8c; 	R(CALL(sub_36462,0));	// 125274 call    sub_36462 ;~ 24ED:2F8C
cs=0x24ed;eip=0x002f8f; 	R(RETF(0));	// 125275 retf ;~ 24ED:2F8F
loc_36440:
	// 8435 
cs=0x24ed;eip=0x002f90; 	R(CALL(sub_35a05,0));	// 125280 call    sub_35A05 ;~ 24ED:2F90
cs=0x24ed;eip=0x002f93; 	X(PUSH(ds));	// 125281 push    ds ;~ 24ED:2F93
cs=0x24ed;eip=0x002f94; 	T(MOV(ds, si));	// 125282 mov     ds, si ;~ 24ED:2F94
cs=0x24ed;eip=0x002f96; 	R(CALL(sub_36462,0));	// 125283 call    sub_36462 ;~ 24ED:2F96
cs=0x24ed;eip=0x002f99; 	R(CALL(sub_36462,0));	// 125284 call    sub_36462 ;~ 24ED:2F99
cs=0x24ed;eip=0x002f9c; 	R(CALL(sub_36462,0));	// 125285 call    sub_36462 ;~ 24ED:2F9C
cs=0x24ed;eip=0x002f9f; 	X(PUSH(cs));	// 125286 push    cs ;~ 24ED:2F9F
cs=0x24ed;eip=0x002fa0; 	R(CALL(sub_33fb0,0));	// 125287 call    near ptr sub_33FB0 ;~ 24ED:2FA0
cs=0x24ed;eip=0x002fa3; 	X(POP(ds));	// 125288 pop     ds ;~ 24ED:2FA3
cs=0x24ed;eip=0x002fa4; 	R(CALL(sub_36462,0));	// 125289 call    sub_36462 ;~ 24ED:2FA4
cs=0x24ed;eip=0x002fa7; 	R(RETF(0));	// 125290 retf ;~ 24ED:2FA7
sub_36462:
	// 125297 
cs=0x24ed;eip=0x002fb2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 125299 mov     bx, [bp+0] ;~ 24ED:2FB2
loc_36465:
	// 8436 
cs=0x24ed;eip=0x002fb5; 	T(MOV(si, 0x2FA8));	// 125302 mov     si, 2FA8h ;~ 24ED:2FB5
loc_36468:
	// 8437 
cs=0x24ed;eip=0x002fb8; 	X(LODS(*(dw*)(raddr(cs,si)),si,2));	// 125305 lods    word ptr cs:[si] ;~ 24ED:2FB8
cs=0x24ed;eip=0x002fba; 	T(OR(ax, ax));	// 125306 or      ax, ax ;~ 24ED:2FBA
cs=0x24ed;eip=0x002fbc; 	R(JS(loc_36465));	// 125307 js      short loc_36465 ;~ 24ED:2FBC
cs=0x24ed;eip=0x002fbe; 	X(PUSH(si));	// 125308 push    si ;~ 24ED:2FBE
cs=0x24ed;eip=0x002fbf; 	T(MOV(si, ax));	// 125309 mov     si, ax ;~ 24ED:2FBF
cs=0x24ed;eip=0x002fc1; 	R(CALL(sub_3656a,0));	// 125310 call    sub_3656A ;~ 24ED:2FC1
cs=0x24ed;eip=0x002fc4; 	X(POP(si));	// 125311 pop     si ;~ 24ED:2FC4
cs=0x24ed;eip=0x002fc5; 	R(JC(loc_36468));	// 125312 jb      short loc_36468 ;~ 24ED:2FC5
cs=0x24ed;eip=0x002fc7; 	R(RETN(0));	// 125313 retn ;~ 24ED:2FC7
seg002_2fc8_proc:
	// 125317 
cs=0x24ed;eip=0x002fc8; 	T(INC(cx));	// 125317 inc     cx ;~ 24ED:2FC8
ret_24ed_2fc9:
	// 8438 
cs=0x24ed;eip=0x002fc9; 	T(ADD(ax, ax));	// 125318 add     ax, ax ;~ 24ED:2FC9
cs=0x24ed;eip=0x002fcb; 	T(ADD(ax, *(dw*)(raddr(ss,bp+di+0x202))));	// 125319 add     ax, [bp+di+202h] ;~ 24ED:2FCB
cs=0x24ed;eip=0x002fcf; 	X(ADD(*(raddr(ds,bx+si+1)), al));	// 125320 add     [bx+si+1], al ;~ 24ED:2FCF
cs=0x24ed;eip=0x002fd2; 	R(RETN(3));	// 125321 retn    3 ;~ 24ED:2FD2
sub_3649a:
	// 125330 
cs=0x24ed;eip=0x002fea; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 125332 mov     bx, [bp+0] ;~ 24ED:2FEA
loc_3649d:
	// 8439 
cs=0x24ed;eip=0x002fed; 	T(MOV(si, 0x2FC8));	// 125335 mov     si, 2FC8h ;~ 24ED:2FED
loc_364a0:
	// 8440 
cs=0x24ed;eip=0x002ff0; 	X(LODS(*(dw*)(raddr(cs,si)),si,2));	// 125338 lods    word ptr cs:[si] ;~ 24ED:2FF0
cs=0x24ed;eip=0x002ff2; 	T(OR(ax, ax));	// 125339 or      ax, ax ;~ 24ED:2FF2
cs=0x24ed;eip=0x002ff4; 	R(JS(loc_3649d));	// 125340 js      short loc_3649D ;~ 24ED:2FF4
cs=0x24ed;eip=0x002ff6; 	X(PUSH(si));	// 125341 push    si ;~ 24ED:2FF6
cs=0x24ed;eip=0x002ff7; 	T(MOV(si, ax));	// 125342 mov     si, ax ;~ 24ED:2FF7
cs=0x24ed;eip=0x002ff9; 	R(CALL(sub_36532,0));	// 125343 call    sub_36532 ;~ 24ED:2FF9
cs=0x24ed;eip=0x002ffc; 	X(POP(si));	// 125344 pop     si ;~ 24ED:2FFC
cs=0x24ed;eip=0x002ffd; 	R(JC(loc_364a0));	// 125345 jb      short loc_364A0 ;~ 24ED:2FFD
cs=0x24ed;eip=0x002fff; 	R(RETN(0));	// 125346 retn ;~ 24ED:2FFF
seg002_3000_proc:
	// 125350 
cs=0x24ed;eip=0x003000; 	R(RETN(0));	// 125350 retn ;~ 24ED:3000
ret_24ed_3001:
	// 8441 
cs=0x24ed;eip=0x003001; 	T(ADD(ax, *(dw*)(raddr(ds,bx+si+6))));	// 125352 add     ax, [bx+si+6] ;~ 24ED:3001
cs=0x24ed;eip=0x003004; 	T(ADD(ax, 0x8405));	// 125353 add     ax, 8405h ;~ 24ED:3004
cs=0x24ed;eip=0x003007; 	T(ADD(al, al));	// 125354 add     al, al ;~ 24ED:3007
cs=0x24ed;eip=0x003009; 	T(ADD(ax, *(dw*)(raddr(ds,si+6))));	// 125355 add     ax, [si+6] ;~ 24ED:3009
cs=0x24ed;eip=0x00300c; 	X(ADD(*(raddr(ss,bp+si)), 3));	// 125356 add     byte ptr [bp+si], 3 ;~ 24ED:300C
cs=0x24ed;eip=0x00300f; 	T(ADD(ax, 0x285));	// 125357 add     ax, 285h ;~ 24ED:300F
cs=0x24ed;eip=0x003012; 	T(INC(bx));	// 125358 inc     bx ;~ 24ED:3012
cs=0x24ed;eip=0x003013; 	X(PUSH(es));	// 125359 push    es ;~ 24ED:3013
cs=0x24ed;eip=0x003014; 	T(LES(ax, *(dw*)(raddr(ss,bp+di))));	// 125360 les     ax, [bp+di] ;~ 24ED:3014
cs=0x24ed;eip=0x003016; 	T(INC(bp));	// 125361 inc     bp ;~ 24ED:3016
cs=0x24ed;eip=0x003017; 	X(PUSH(es));	// 125362 push    es ;~ 24ED:3017
cs=0x24ed;eip=0x003018; 	T(ADD(al, 5));	// 125363 add     al, 5 ;~ 24ED:3018
cs=0x24ed;eip=0x00301a; 	X(ADD(*(dw*)(raddr(ss,bp+si)), 0x0FFC5));	// 125364 add     word ptr [bp+si], 0FFC5h ;~ 24ED:301A
cs=0x24ed;eip=0x00301d; 	T(ADD(ax, *(dw*)(raddr(ss,bp+si))));	// 125365 add     ax, [bp+si] ;~ 24ED:301D
cs=0x24ed;eip=0x00301f; 	T(ADD(ax, 0x0FFFF));	// 125366 add     ax, 0FFFFh ;~ 24ED:301F
sub_364d2:
	// 125371 
cs=0x24ed;eip=0x003022; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0))));	// 125373 mov     bx, [bp+0] ;~ 24ED:3022
loc_364d5:
	// 8442 
cs=0x24ed;eip=0x003025; 	T(MOV(si, 0x3000));	// 125376 mov     si, 3000h ;~ 24ED:3025
loc_364d8:
	// 8443 
cs=0x24ed;eip=0x003028; 	X(LODS(*(dw*)(raddr(cs,si)),si,2));	// 125379 lods    word ptr cs:[si] ;~ 24ED:3028
cs=0x24ed;eip=0x00302a; 	T(OR(ax, ax));	// 125380 or      ax, ax ;~ 24ED:302A
cs=0x24ed;eip=0x00302c; 	R(JS(loc_364d5));	// 125381 js      short loc_364D5 ;~ 24ED:302C
cs=0x24ed;eip=0x00302e; 	X(PUSH(si));	// 125382 push    si ;~ 24ED:302E
cs=0x24ed;eip=0x00302f; 	T(MOV(si, ax));	// 125383 mov     si, ax ;~ 24ED:302F
cs=0x24ed;eip=0x003031; 	R(CALL(sub_364e8,0));	// 125384 call    sub_364E8 ;~ 24ED:3031
cs=0x24ed;eip=0x003034; 	X(POP(si));	// 125385 pop     si ;~ 24ED:3034
cs=0x24ed;eip=0x003035; 	R(JC(loc_364d8));	// 125386 jb      short loc_364D8 ;~ 24ED:3035
cs=0x24ed;eip=0x003037; 	R(RETN(0));	// 125387 retn ;~ 24ED:3037
sub_364e8:
	// 125394 
cs=0x24ed;eip=0x003038; 	X(PUSH(cx));	// 125395 push    cx ;~ 24ED:3038
ret_24ed_3039:
	// 8444 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003039; 	T(MOV(di, *(dw*)(((db*)&word_33653))));	// 125396 mov     di, cs:word_33653 ;~ 24ED:3039
cs=0x24ed;eip=0x00303e; 	T(ADD(si, di));	// 125397 add     si, di ;~ 24ED:303E
cs=0x24ed;eip=0x003040; 	T(SHR(cx, 3));	// 125398 shr     cx, 3 ;~ 24ED:3040
loc_364f3:
	// 8445 
cs=0x24ed;eip=0x003043; 	X(PUSH(cx));	// 125401 push    cx ;~ 24ED:3043
cs=0x24ed;eip=0x003044; 	X(PUSH(si));	// 125402 push    si ;~ 24ED:3044
cs=0x24ed;eip=0x003045; 	X(PUSH(di));	// 125403 push    di ;~ 24ED:3045
cs=0x24ed;eip=0x003046; 	T(MOV(cx, 0x28));	// 125404 mov     cx, 28h ; '(' ;~ 24ED:3046
loc_364f9:
	// 8446 
cs=0x24ed;eip=0x003049; 	T(LODSB);	// 125407 lodsb ;~ 24ED:3049
cs=0x24ed;eip=0x00304a; 	T(ADD(si, 7));	// 125408 add     si, 7 ;~ 24ED:304A
cs=0x24ed;eip=0x00304d; 	T(MOV(ah, al));	// 125409 mov     ah, al ;~ 24ED:304D
cs=0x24ed;eip=0x00304f; 	T(MOV(dx, ax));	// 125410 mov     dx, ax ;~ 24ED:304F
cs=0x24ed;eip=0x003051; 	T(SHL(eax, 0x10));	// 125411 shl     eax, 10h ;~ 24ED:3051
cs=0x24ed;eip=0x003055; 	T(MOV(ax, dx));	// 125412 mov     ax, dx ;~ 24ED:3055
cs=0x24ed;eip=0x003057; 	T(MOV(dx, 8));	// 125413 mov     dx, 8 ;~ 24ED:3057
loc_3650a:
	// 8447 
cs=0x24ed;eip=0x00305a; 	X(STOSD);	// 125416 stosd ;~ 24ED:305A
cs=0x24ed;eip=0x00305c; 	X(STOSD);	// 125417 stosd ;~ 24ED:305C
cs=0x24ed;eip=0x00305e; 	T(ADD(di, 0x138));	// 125418 add     di, 138h ;~ 24ED:305E
cs=0x24ed;eip=0x003062; 	T(DEC(dx));	// 125419 dec     dx ;~ 24ED:3062
cs=0x24ed;eip=0x003063; 	R(JNZ(loc_3650a));	// 125420 jnz     short loc_3650A ;~ 24ED:3063
cs=0x24ed;eip=0x003065; 	T(SUB(di, 0x9F8));	// 125421 sub     di, 9F8h ;~ 24ED:3065
cs=0x24ed;eip=0x003069; 	R(LOOP(loc_364f9));	// 125422 loop    loc_364F9 ;~ 24ED:3069
cs=0x24ed;eip=0x00306b; 	X(POP(di));	// 125423 pop     di ;~ 24ED:306B
cs=0x24ed;eip=0x00306c; 	X(POP(si));	// 125424 pop     si ;~ 24ED:306C
cs=0x24ed;eip=0x00306d; 	X(POP(cx));	// 125425 pop     cx ;~ 24ED:306D
cs=0x24ed;eip=0x00306e; 	T(ADD(di, 0x0A00));	// 125426 add     di, 0A00h ;~ 24ED:306E
cs=0x24ed;eip=0x003072; 	T(ADD(si, 0x0A00));	// 125427 add     si, 0A00h ;~ 24ED:3072
cs=0x24ed;eip=0x003076; 	R(LOOP(loc_364f3));	// 125428 loop    loc_364F3 ;~ 24ED:3076
loc_36528:
	// 8448 
cs=0x24ed;eip=0x003078; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 125432 mov     ax, [bp+0] ;~ 24ED:3078
cs=0x24ed;eip=0x00307b; 	T(SUB(ax, bx));	// 125433 sub     ax, bx ;~ 24ED:307B
cs=0x24ed;eip=0x00307d; 	T(CMP(ax, 0x24));	// 125434 cmp     ax, 24h ; '$' ;~ 24ED:307D
cs=0x24ed;eip=0x003080; 	X(POP(cx));	// 125435 pop     cx ;~ 24ED:3080
cs=0x24ed;eip=0x003081; 	R(RETN(0));	// 125436 retn ;~ 24ED:3081
sub_36532:
	// 125443 
cs=0x24ed;eip=0x003082; 	X(PUSH(cx));	// 125444 push    cx ;~ 24ED:3082
ret_24ed_3083:
	// 8449 
cs=0x24ed;eip=0x003083; 	T(SHR(cx, 2));	// 125445 shr     cx, 2 ;~ 24ED:3083
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003086; 	T(MOV(di, *(dw*)(((db*)&word_33653))));	// 125446 mov     di, cs:word_33653 ;~ 24ED:3086
cs=0x24ed;eip=0x00308b; 	T(ADD(si, di));	// 125447 add     si, di ;~ 24ED:308B
loc_3653d:
	// 8450 
cs=0x24ed;eip=0x00308d; 	X(PUSH(cx));	// 125450 push    cx ;~ 24ED:308D
cs=0x24ed;eip=0x00308e; 	X(PUSH(si));	// 125451 push    si ;~ 24ED:308E
cs=0x24ed;eip=0x00308f; 	X(PUSH(di));	// 125452 push    di ;~ 24ED:308F
cs=0x24ed;eip=0x003090; 	T(MOV(cx, 0x50));	// 125453 mov     cx, 50h ; 'P' ;~ 24ED:3090
loc_36543:
	// 8451 
cs=0x24ed;eip=0x003093; 	T(LODSB);	// 125456 lodsb ;~ 24ED:3093
cs=0x24ed;eip=0x003094; 	T(ADD(si, 3));	// 125457 add     si, 3 ;~ 24ED:3094
cs=0x24ed;eip=0x003097; 	T(MOV(ah, al));	// 125458 mov     ah, al ;~ 24ED:3097
cs=0x24ed;eip=0x003099; 	T(MOV(dx, 4));	// 125459 mov     dx, 4 ;~ 24ED:3099
loc_3654c:
	// 8452 
cs=0x24ed;eip=0x00309c; 	X(STOSW);	// 125462 stosw ;~ 24ED:309C
cs=0x24ed;eip=0x00309d; 	X(STOSW);	// 125463 stosw ;~ 24ED:309D
cs=0x24ed;eip=0x00309e; 	T(ADD(di, 0x13C));	// 125464 add     di, 13Ch ;~ 24ED:309E
cs=0x24ed;eip=0x0030a2; 	T(DEC(dx));	// 125465 dec     dx ;~ 24ED:30A2
cs=0x24ed;eip=0x0030a3; 	R(JNZ(loc_3654c));	// 125466 jnz     short loc_3654C ;~ 24ED:30A3
cs=0x24ed;eip=0x0030a5; 	T(SUB(di, 0x4FC));	// 125467 sub     di, 4FCh ;~ 24ED:30A5
cs=0x24ed;eip=0x0030a9; 	R(LOOP(loc_36543));	// 125468 loop    loc_36543 ;~ 24ED:30A9
cs=0x24ed;eip=0x0030ab; 	X(POP(di));	// 125469 pop     di ;~ 24ED:30AB
cs=0x24ed;eip=0x0030ac; 	X(POP(si));	// 125470 pop     si ;~ 24ED:30AC
cs=0x24ed;eip=0x0030ad; 	X(POP(cx));	// 125471 pop     cx ;~ 24ED:30AD
cs=0x24ed;eip=0x0030ae; 	T(ADD(si, 0x500));	// 125472 add     si, 500h ;~ 24ED:30AE
cs=0x24ed;eip=0x0030b2; 	T(ADD(di, 0x500));	// 125473 add     di, 500h ;~ 24ED:30B2
cs=0x24ed;eip=0x0030b6; 	R(LOOP(loc_3653d));	// 125474 loop    loc_3653D ;~ 24ED:30B6
cs=0x24ed;eip=0x0030b8; 	R(JMP(loc_36528));	// 125475 jmp     short loc_36528 ;~ 24ED:30B8
sub_3656a:
	// 125482 
cs=0x24ed;eip=0x0030ba; 	X(PUSH(cx));	// 125483 push    cx ;~ 24ED:30BA
ret_24ed_30bb:
	// 8453 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0030bb; 	T(MOV(di, *(dw*)(((db*)&word_33653))));	// 125484 mov     di, cs:word_33653 ;~ 24ED:30BB
cs=0x24ed;eip=0x0030c0; 	T(ADD(si, di));	// 125485 add     si, di ;~ 24ED:30C0
cs=0x24ed;eip=0x0030c2; 	T(SHR(cx, 1));	// 125486 shr     cx, 1 ;~ 24ED:30C2
loc_36574:
	// 8454 
cs=0x24ed;eip=0x0030c4; 	X(PUSH(cx));	// 125489 push    cx ;~ 24ED:30C4
cs=0x24ed;eip=0x0030c5; 	X(PUSH(si));	// 125490 push    si ;~ 24ED:30C5
cs=0x24ed;eip=0x0030c6; 	X(PUSH(di));	// 125491 push    di ;~ 24ED:30C6
cs=0x24ed;eip=0x0030c7; 	T(MOV(cx, 0x0A0));	// 125492 mov     cx, 0A0h ; ' ' ;~ 24ED:30C7
loc_3657a:
	// 8455 
cs=0x24ed;eip=0x0030ca; 	T(LODSB);	// 125495 lodsb ;~ 24ED:30CA
cs=0x24ed;eip=0x0030cb; 	T(INC(si));	// 125496 inc     si ;~ 24ED:30CB
cs=0x24ed;eip=0x0030cc; 	T(MOV(ah, al));	// 125497 mov     ah, al ;~ 24ED:30CC
cs=0x24ed;eip=0x0030ce; 	X(MOV(*(dw*)(raddr(es,di+0x140)), ax));	// 125498 mov     es:[di+140h], ax ;~ 24ED:30CE
cs=0x24ed;eip=0x0030d3; 	X(STOSW);	// 125499 stosw ;~ 24ED:30D3
cs=0x24ed;eip=0x0030d4; 	R(LOOP(loc_3657a));	// 125500 loop    loc_3657A ;~ 24ED:30D4
cs=0x24ed;eip=0x0030d6; 	X(POP(di));	// 125501 pop     di ;~ 24ED:30D6
cs=0x24ed;eip=0x0030d7; 	X(POP(si));	// 125502 pop     si ;~ 24ED:30D7
cs=0x24ed;eip=0x0030d8; 	X(POP(cx));	// 125503 pop     cx ;~ 24ED:30D8
cs=0x24ed;eip=0x0030d9; 	T(ADD(si, 0x280));	// 125504 add     si, 280h ;~ 24ED:30D9
cs=0x24ed;eip=0x0030dd; 	T(ADD(di, 0x280));	// 125505 add     di, 280h ;~ 24ED:30DD
cs=0x24ed;eip=0x0030e1; 	R(LOOP(loc_36574));	// 125506 loop    loc_36574 ;~ 24ED:30E1
cs=0x24ed;eip=0x0030e3; 	R(JMP(loc_36528));	// 125507 jmp     short loc_36528 ;~ 24ED:30E3
seg002_30e5_proc:
	// 125512 
locret_36595:
	// 8456 
cs=0x24ed;eip=0x0030e5; 	R(RETF(0));	// 125514 retf ;~ 24ED:30E5
locret_36596:
	// 8457 
cs=0x24ed;eip=0x0030e6; 	R(RETF(0));	// 125519 retf ;~ 24ED:30E6
loc_365bf:
	// 8458 
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00310f; 	T(MOV(di, *(dw*)(((db*)&word_365bd))));	// 125533 mov     di, cs:word_365BD ;~ 24ED:310F
cs=0x24ed;eip=0x003114; 	T(XOR(ax, ax));	// 125534 xor     ax, ax ;~ 24ED:3114
cs=0x24ed;eip=0x003116; 	T(MOV(cx, 0x12C0));	// 125535 mov     cx, 12C0h ;~ 24ED:3116
	// 125536 rep stosw ;~ 24ED:3119
cs=0x24ed;eip=0x003119; 	X(	REP STOSW);	// 125536 rep stosw ;~ 24ED:3119
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00311b; 	T(MOV(ds, *(dw*)(((db*)&word_359a6))));	// 125537 mov     ds, cs:word_359A6 ;~ 24ED:311B
cs=0x24ed;eip=0x003120; 	X(PUSH(cs));	// 125538 push    cs ;~ 24ED:3120
cs=0x24ed;eip=0x003121; 	R(CALL(sub_33fb0,0));	// 125539 call    near ptr sub_33FB0 ;~ 24ED:3121
cs=0x24ed;eip=0x003124; 	R(RETN(0));	// 125540 retn ;~ 24ED:3124
loc_365d5:
	// 8459 
cs=0x24ed;eip=0x003125; 	R(CALL(sub_35a05,0));	// 125546 call    sub_35A05 ;~ 24ED:3125
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003128; 	T(MOV(ds, *(dw*)(((db*)&word_359a4))));	// 125547 mov     ds, cs:word_359A4 ;~ 24ED:3128
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00312d; 	T(MOV(ax, *(dw*)(((db*)&word_33653))));	// 125548 mov     ax, cs:word_33653 ;~ 24ED:312D
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003131; 	X(MOV(*(dw*)(((db*)&word_365bd)), ax));	// 125549 mov     cs:word_365BD, ax ;~ 24ED:3131
cs=0x24ed;eip=0x003135; 	T(OR(dl, dl));	// 125550 or      dl, dl ;~ 24ED:3135
cs=0x24ed;eip=0x003137; 	T(MOV(cx, 0x101));	// 125551 mov     cx, 101h ;~ 24ED:3137
cs=0x24ed;eip=0x00313a; 	R(JS(loc_365ef));	// 125552 js      short loc_365EF ;~ 24ED:313A
cs=0x24ed;eip=0x00313c; 	T(MOV(cx, 0x0FF11));	// 125553 mov     cx, 0FF11h ;~ 24ED:313C
loc_365ef:
	// 8460 
cs=0x24ed;eip=0x00313f; 	X(PUSH(*(dw*)(raddr(ss,bp+0))));	// 125557 push    word ptr [bp+0] ;~ 24ED:313F
cs=0x24ed;eip=0x003142; 	X(PUSH(cx));	// 125558 push    cx ;~ 24ED:3142
cs=0x24ed;eip=0x003143; 	X(PUSH(bp));	// 125559 push    bp ;~ 24ED:3143
cs=0x24ed;eip=0x003144; 	T(XOR(ch, ch));	// 125560 xor     ch, ch ;~ 24ED:3144
cs=0x24ed;eip=0x003146; 	T(MOV(bx, cx));	// 125561 mov     bx, cx ;~ 24ED:3146
cs=0x24ed;eip=0x003148; 	T(SHL(bx, 1));	// 125562 shl     bx, 1 ;~ 24ED:3148
cs=0x24ed;eip=0x00314a; 	T(MOV(ax, *(dw*)(raddr(cs,bx+0x30E5))));	// 125563 mov     ax, cs:[bx+30E5h] ;~ 24ED:314A
cs=0x24ed;eip=0x00314f; 	R(CALL(sub_36612,0));	// 125564 call    sub_36612 ;~ 24ED:314F
cs=0x24ed;eip=0x003152; 	X(POP(bp));	// 125565 pop     bp ;~ 24ED:3152
cs=0x24ed;eip=0x003153; 	X(POP(cx));	// 125566 pop     cx ;~ 24ED:3153
cs=0x24ed;eip=0x003154; 	X(POP(bx));	// 125567 pop     bx ;~ 24ED:3154
cs=0x24ed;eip=0x003155; 	R(CALL(sub_359ac,0));	// 125568 call    sub_359AC ;~ 24ED:3155
cs=0x24ed;eip=0x003158; 	T(ADD(cl, ch));	// 125569 add     cl, ch ;~ 24ED:3158
cs=0x24ed;eip=0x00315a; 	R(JZ(locret_36611));	// 125570 jz      short locret_36611 ;~ 24ED:315A
cs=0x24ed;eip=0x00315c; 	T(CMP(cl, 0x11));	// 125571 cmp     cl, 11h ;~ 24ED:315C
cs=0x24ed;eip=0x00315f; 	R(JC(loc_365ef));	// 125572 jb      short loc_365EF ;~ 24ED:315F
locret_36611:
	// 8461 
cs=0x24ed;eip=0x003161; 	R(RETF(0));	// 125575 retf ;~ 24ED:3161
sub_36612:
	// 125580 
cs=0x24ed;eip=0x003162; 	T(CMP(cl, 9));	// 125584 cmp     cl, 9 ;~ 24ED:3162
ret_24ed_3165:
	// 8462 
cs=0x24ed;eip=0x003165; 	R(JZ(loc_365bf));	// 125585 jz      short loc_365BF ;~ 24ED:3165
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003167; 	X(MOV(*(dw*)(((db*)&word_365b9)), ax));	// 125586 mov     cs:word_365B9, ax ;~ 24ED:3167
cs=0x24ed;eip=0x00316b; 	T(MOV(di, 0x5DC0));	// 125587 mov     di, 5DC0h ;~ 24ED:316B
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00316e; 	T(ADD(di, *(dw*)(((db*)&word_33653))));	// 125588 add     di, cs:word_33653 ;~ 24ED:316E
cs=0x24ed;eip=0x003173; 	T(bp = di+0x140);	// 125589 lea     bp, [di+140h] ;~ 24ED:3173
cs=0x24ed;eip=0x003177; 	T(MOV(si, di));	// 125590 mov     si, di ;~ 24ED:3177
cs=0x24ed;eip=0x003179; 	T(MOV(bx, bp));	// 125591 mov     bx, bp ;~ 24ED:3179
cs=0x24ed;eip=0x00317b; 	T(MOV(dx, 0x4C));	// 125592 mov     dx, 4Ch ; 'L' ;~ 24ED:317B
cs=0x24ed;eip=0x00317e; 	R(JMP(loc_36638));	// 125593 jmp     short loc_36638 ;~ 24ED:317E
loc_36630:
	// 8463 
cs=0x24ed;eip=0x003180; 	T(SUB(si, 0x280));	// 125598 sub     si, 280h ;~ 24ED:3180
cs=0x24ed;eip=0x003184; 	T(SUB(di, 0x280));	// 125599 sub     di, 280h ;~ 24ED:3184
loc_36638:
	// 8464 
cs=0x24ed;eip=0x003188; 	T(DEC(dx));	// 125602 dec     dx ;~ 24ED:3188
cs=0x24ed;eip=0x003189; 	R(JS(loc_3666c));	// 125603 js      short loc_3666C ;~ 24ED:3189
cs=0x24ed;eip=0x00318b; 	T(MOV(cx, 0x50));	// 125604 mov     cx, 50h ; 'P' ;~ 24ED:318B
	// 125605 rep movsd ;~ 24ED:318E
cs=0x24ed;eip=0x00318e; 	X(	REP MOVSD);	// 125605 rep movsd ;~ 24ED:318E
cs=0x24ed;eip=0x003191; 	T(XCHG(di, bp));	// 125606 xchg    di, bp ;~ 24ED:3191
cs=0x24ed;eip=0x003193; 	T(XCHG(si, bx));	// 125607 xchg    si, bx ;~ 24ED:3193
cs=0x24ed;eip=0x003195; 	T(MOV(cx, 0x50));	// 125608 mov     cx, 50h ; 'P' ;~ 24ED:3195
	// 125609 rep movsd ;~ 24ED:3198
cs=0x24ed;eip=0x003198; 	X(	REP MOVSD);	// 125609 rep movsd ;~ 24ED:3198
cs=0x24ed;eip=0x00319b; 	T(XCHG(di, bp));	// 125610 xchg    di, bp ;~ 24ED:319B
cs=0x24ed;eip=0x00319d; 	T(XCHG(si, bx));	// 125611 xchg    si, bx ;~ 24ED:319D
cs=0x24ed;eip=0x00319f; 	T(DEC(al));	// 125612 dec     al ;~ 24ED:319F
cs=0x24ed;eip=0x0031a1; 	R(JNZ(loc_36630));	// 125613 jnz     short loc_36630 ;~ 24ED:31A1
cs=0x24ed;eip=0x0031a3; 	T(MOV(cx, 0x140));	// 125614 mov     cx, 140h ;~ 24ED:31A3
cs=0x24ed;eip=0x0031a6; 	T(SUB(dl, ah));	// 125615 sub     dl, ah ;~ 24ED:31A6
cs=0x24ed;eip=0x0031a8; 	R(JBE(loc_36668));	// 125616 jbe     short loc_36668 ;~ 24ED:31A8
loc_3665a:
	// 8465 
cs=0x24ed;eip=0x0031aa; 	T(SUB(si, cx));	// 125619 sub     si, cx ;~ 24ED:31AA
cs=0x24ed;eip=0x0031ac; 	T(ADD(bx, cx));	// 125620 add     bx, cx ;~ 24ED:31AC
cs=0x24ed;eip=0x0031ae; 	T(DEC(ah));	// 125621 dec     ah ;~ 24ED:31AE
cs=0x24ed;eip=0x0031b0; 	R(JNZ(loc_3665a));	// 125622 jnz     short loc_3665A ;~ 24ED:31B0
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0031b2; 	T(MOV(ax, *(dw*)(((db*)&word_365b9))));	// 125623 mov     ax, cs:word_365B9 ;~ 24ED:31B2
cs=0x24ed;eip=0x0031b6; 	R(JMP(loc_36630));	// 125624 jmp     short loc_36630 ;~ 24ED:31B6
loc_36668:
	// 8466 
cs=0x24ed;eip=0x0031b8; 	T(SUB(di, 0x280));	// 125628 sub     di, 280h ;~ 24ED:31B8
loc_3666c:
	// 8467 
cs=0x24ed;eip=0x0031bc; 	T(MOV(bx, di));	// 125631 mov     bx, di ;~ 24ED:31BC
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0031be; 	X(XCHG(bx, *(dw*)(((db*)&word_365bd))));	// 125632 xchg    bx, cs:word_365BD ;~ 24ED:31BE
cs=0x24ed;eip=0x0031c3; 	T(XOR(eax, eax));	// 125633 xor     eax, eax ;~ 24ED:31C3
loc_36676:
	// 8468 
cs=0x24ed;eip=0x0031c6; 	T(CMP(bx, di));	// 125636 cmp     bx, di ;~ 24ED:31C6
cs=0x24ed;eip=0x0031c8; 	R(JG(locret_36691));	// 125637 jg      locret_36691 ;~ 24ED:31C8
cs=0x24ed;eip=0x0031cc; 	T(MOV(cx, 0x50));	// 125638 mov     cx, 50h ; 'P' ;~ 24ED:31CC
cs=0x24ed;eip=0x0031cf; 	T(XCHG(bp, di));	// 125639 xchg    bp, di ;~ 24ED:31CF
	// 125640 rep stosd ;~ 24ED:31D1
cs=0x24ed;eip=0x0031d1; 	X(	REP STOSD);	// 125640 rep stosd ;~ 24ED:31D1
cs=0x24ed;eip=0x0031d4; 	T(XCHG(bp, di));	// 125641 xchg    bp, di ;~ 24ED:31D4
cs=0x24ed;eip=0x0031d6; 	T(MOV(cl, 0x50));	// 125642 mov     cl, 50h ; 'P' ;~ 24ED:31D6
	// 125643 rep stosd ;~ 24ED:31D8
cs=0x24ed;eip=0x0031d8; 	X(	REP STOSD);	// 125643 rep stosd ;~ 24ED:31D8
cs=0x24ed;eip=0x0031db; 	T(SUB(di, 0x280));	// 125644 sub     di, 280h ;~ 24ED:31DB
cs=0x24ed;eip=0x0031df; 	R(JMP(loc_36676));	// 125645 jmp     short loc_36676 ;~ 24ED:31DF
locret_36691:
	// 8469 
cs=0x24ed;eip=0x0031e1; 	R(RETN(0));	// 125649 retn ;~ 24ED:31E1
seg002_327c_proc:
	// 125671 
loc_3672c:
	// 8470 
cs=0x24ed;eip=0x00327c; 	T(MOV(di, 0x0C71C));	// 125672 mov     di, 0C71Ch ;~ 24ED:327C
cs=0x24ed;eip=0x00327f; 	T(MOV(dx, 0x10));	// 125673 mov     dx, 10h ;~ 24ED:327F
cs=0x24ed;eip=0x003282; 	T(MOV(ax, 0x0FEFE));	// 125674 mov     ax, 0FEFEh ;~ 24ED:3282
loc_36735:
	// 8471 
cs=0x24ed;eip=0x003285; 	T(MOV(cx, 0x44));	// 125677 mov     cx, 44h ; 'D' ;~ 24ED:3285
	// 125678 rep stosw ;~ 24ED:3288
cs=0x24ed;eip=0x003288; 	X(	REP STOSW);	// 125678 rep stosw ;~ 24ED:3288
cs=0x24ed;eip=0x00328a; 	T(ADD(di, 0x0B8));	// 125679 add     di, 0B8h ; '¸' ;~ 24ED:328A
cs=0x24ed;eip=0x00328e; 	T(DEC(dx));	// 125680 dec     dx ;~ 24ED:328E
cs=0x24ed;eip=0x00328f; 	R(JNZ(loc_36735));	// 125681 jnz     short loc_36735 ;~ 24ED:328F
cs=0x24ed;eip=0x003291; 	T(MOV(dx, 8));	// 125682 mov     dx, 8 ;~ 24ED:3291
cs=0x24ed;eip=0x003294; 	T(MOV(ax, 0x0F208));	// 125683 mov     ax, 0F208h ;~ 24ED:3294
loc_36747:
	// 8472 
cs=0x24ed;eip=0x003297; 	T(MOV(cx, 0x44));	// 125686 mov     cx, 44h ; 'D' ;~ 24ED:3297
	// 125687 rep stosw ;~ 24ED:329A
cs=0x24ed;eip=0x00329a; 	X(	REP STOSW);	// 125687 rep stosw ;~ 24ED:329A
cs=0x24ed;eip=0x00329c; 	T(ADD(di, 0x0B8));	// 125688 add     di, 0B8h ; '¸' ;~ 24ED:329C
cs=0x24ed;eip=0x0032a0; 	T(XCHG(al, ah));	// 125689 xchg    al, ah ;~ 24ED:32A0
cs=0x24ed;eip=0x0032a2; 	T(DEC(dx));	// 125690 dec     dx ;~ 24ED:32A2
cs=0x24ed;eip=0x0032a3; 	R(JNZ(loc_36747));	// 125691 jnz     short loc_36747 ;~ 24ED:32A3
cs=0x24ed;eip=0x0032a5; 	T(MOV(dx, 0x10));	// 125692 mov     dx, 10h ;~ 24ED:32A5
cs=0x24ed;eip=0x0032a8; 	T(MOV(ax, 0x0FEFE));	// 125693 mov     ax, 0FEFEh ;~ 24ED:32A8
loc_3675b:
	// 8473 
cs=0x24ed;eip=0x0032ab; 	T(MOV(cx, 0x44));	// 125696 mov     cx, 44h ; 'D' ;~ 24ED:32AB
	// 125697 rep stosw ;~ 24ED:32AE
cs=0x24ed;eip=0x0032ae; 	X(	REP STOSW);	// 125697 rep stosw ;~ 24ED:32AE
cs=0x24ed;eip=0x0032b0; 	T(ADD(di, 0x0B8));	// 125698 add     di, 0B8h ; '¸' ;~ 24ED:32B0
cs=0x24ed;eip=0x0032b4; 	T(DEC(dx));	// 125699 dec     dx ;~ 24ED:32B4
cs=0x24ed;eip=0x0032b5; 	R(JNZ(loc_3675b));	// 125700 jnz     short loc_3675B ;~ 24ED:32B5
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0032b7; 	T(MOV(ds, *(dw*)(((db*)&word_359a6))));	// 125701 mov     ds, cs:word_359A6 ;~ 24ED:32B7
cs=0x24ed;eip=0x0032bc; 	R(RETN(0));	// 125702 retn ;~ 24ED:32BC
sub_3676d:
	// 125708 
cs=0x24ed;eip=0x0032bd; 	T(CMP(cl, 9));	// 125712 cmp     cl, 9 ;~ 24ED:32BD
ret_24ed_32c0:
	// 8474 
cs=0x24ed;eip=0x0032c0; 	R(JZ(loc_3672c));	// 125713 jz      short loc_3672C ;~ 24ED:32C0
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0032c2; 	X(MOV(*(dw*)(((db*)&word_365bb)), cx));	// 125714 mov     cs:word_365BB, cx ;~ 24ED:32C2
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x0032c7; 	X(MOV(*(dw*)(((db*)&word_365b9)), ax));	// 125715 mov     cs:word_365B9, ax ;~ 24ED:32C7
cs=0x24ed;eip=0x0032cb; 	T(MOV(di, 0x0E01C));	// 125716 mov     di, 0E01Ch ;~ 24ED:32CB
cs=0x24ed;eip=0x0032ce; 	T(bp = di-0x140);	// 125717 lea     bp, [di-140h] ;~ 24ED:32CE
cs=0x24ed;eip=0x0032d2; 	T(MOV(cx, 0x44));	// 125718 mov     cx, 44h ; 'D' ;~ 24ED:32D2
cs=0x24ed;eip=0x0032d5; 	T(MOV(si, di));	// 125719 mov     si, di ;~ 24ED:32D5
	// 125720 rep movsw ;~ 24ED:32D7
cs=0x24ed;eip=0x0032d7; 	X(	REP MOVSW);	// 125720 rep movsw ;~ 24ED:32D7
cs=0x24ed;eip=0x0032d9; 	T(ADD(di, 0x0B8));	// 125721 add     di, 0B8h ; '¸' ;~ 24ED:32D9
cs=0x24ed;eip=0x0032dd; 	T(MOV(si, di));	// 125722 mov     si, di ;~ 24ED:32DD
cs=0x24ed;eip=0x0032df; 	T(MOV(bx, bp));	// 125723 mov     bx, bp ;~ 24ED:32DF
cs=0x24ed;eip=0x0032e1; 	T(MOV(dx, 0x14));	// 125724 mov     dx, 14h ;~ 24ED:32E1
cs=0x24ed;eip=0x0032e4; 	R(JMP(loc_367a6));	// 125725 jmp     short loc_367A6 ;~ 24ED:32E4
loc_36796:
	// 8475 
cs=0x24ed;eip=0x0032e6; 	T(SUB(si, 0x1C8));	// 125730 sub     si, 1C8h ;~ 24ED:32E6
cs=0x24ed;eip=0x0032ea; 	T(SUB(di, 0x1C8));	// 125731 sub     di, 1C8h ;~ 24ED:32EA
cs=0x24ed;eip=0x0032ee; 	T(ADD(bx, 0x0B8));	// 125732 add     bx, 0B8h ; '¸' ;~ 24ED:32EE
cs=0x24ed;eip=0x0032f2; 	T(ADD(bp, 0x0B8));	// 125733 add     bp, 0B8h ; '¸' ;~ 24ED:32F2
loc_367a6:
	// 8476 
cs=0x24ed;eip=0x0032f6; 	T(DEC(dx));	// 125736 dec     dx ;~ 24ED:32F6
cs=0x24ed;eip=0x0032f7; 	R(JS(loc_367dc));	// 125737 js      short loc_367DC ;~ 24ED:32F7
cs=0x24ed;eip=0x0032f9; 	T(MOV(cx, 0x44));	// 125738 mov     cx, 44h ; 'D' ;~ 24ED:32F9
	// 125739 rep movsw ;~ 24ED:32FC
cs=0x24ed;eip=0x0032fc; 	X(	REP MOVSW);	// 125739 rep movsw ;~ 24ED:32FC
cs=0x24ed;eip=0x0032fe; 	T(XCHG(di, bp));	// 125740 xchg    di, bp ;~ 24ED:32FE
cs=0x24ed;eip=0x003300; 	T(XCHG(si, bx));	// 125741 xchg    si, bx ;~ 24ED:3300
cs=0x24ed;eip=0x003302; 	T(MOV(cx, 0x44));	// 125742 mov     cx, 44h ; 'D' ;~ 24ED:3302
	// 125743 rep movsw ;~ 24ED:3305
cs=0x24ed;eip=0x003305; 	X(	REP MOVSW);	// 125743 rep movsw ;~ 24ED:3305
cs=0x24ed;eip=0x003307; 	T(XCHG(di, bp));	// 125744 xchg    di, bp ;~ 24ED:3307
cs=0x24ed;eip=0x003309; 	T(XCHG(si, bx));	// 125745 xchg    si, bx ;~ 24ED:3309
cs=0x24ed;eip=0x00330b; 	T(DEC(al));	// 125746 dec     al ;~ 24ED:330B
cs=0x24ed;eip=0x00330d; 	R(JNZ(loc_36796));	// 125747 jnz     short loc_36796 ;~ 24ED:330D
cs=0x24ed;eip=0x00330f; 	T(MOV(cx, 0x140));	// 125748 mov     cx, 140h ;~ 24ED:330F
cs=0x24ed;eip=0x003312; 	T(SUB(dl, ah));	// 125749 sub     dl, ah ;~ 24ED:3312
cs=0x24ed;eip=0x003314; 	R(JBE(loc_367d4));	// 125750 jbe     short loc_367D4 ;~ 24ED:3314
loc_367c6:
	// 8477 
cs=0x24ed;eip=0x003316; 	T(SUB(si, cx));	// 125753 sub     si, cx ;~ 24ED:3316
cs=0x24ed;eip=0x003318; 	T(ADD(bx, cx));	// 125754 add     bx, cx ;~ 24ED:3318
cs=0x24ed;eip=0x00331a; 	T(DEC(ah));	// 125755 dec     ah ;~ 24ED:331A
cs=0x24ed;eip=0x00331c; 	R(JNZ(loc_367c6));	// 125756 jnz     short loc_367C6 ;~ 24ED:331C
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x00331e; 	T(MOV(ax, *(dw*)(((db*)&word_365b9))));	// 125757 mov     ax, cs:word_365B9 ;~ 24ED:331E
cs=0x24ed;eip=0x003322; 	R(JMP(loc_36796));	// 125758 jmp     short loc_36796 ;~ 24ED:3322
loc_367d4:
	// 8478 
cs=0x24ed;eip=0x003324; 	T(SUB(di, 0x1C8));	// 125762 sub     di, 1C8h ;~ 24ED:3324
cs=0x24ed;eip=0x003328; 	T(ADD(bp, 0x0B8));	// 125763 add     bp, 0B8h ; '¸' ;~ 24ED:3328
loc_367dc:
	// 8479 
cs=0x24ed;eip=0x00332c; 	T(MOV(bx, 0x0FEFE));	// 125766 mov     bx, 0FEFEh ;~ 24ED:332C
cs=0x24ed;eip=0x00332f; 	T(MOV(ax, 0x0F208));	// 125767 mov     ax, 0F208h ;~ 24ED:332F
	cs=seg_offset(seg002);
cs=0x24ed;eip=0x003332; 	T(MOV(dx, *(dw*)(((db*)&word_365bb))));	// 125768 mov     dx, cs:word_365BB ;~ 24ED:3332
cs=0x24ed;eip=0x003337; 	T(CMP(dx, 9));	// 125769 cmp     dx, 9 ;~ 24ED:3337
cs=0x24ed;eip=0x00333a; 	R(JC(loc_367f2));	// 125770 jb      short loc_367F2 ;~ 24ED:333A
cs=0x24ed;eip=0x00333c; 	T(SUB(dx, 0x12));	// 125771 sub     dx, 12h ;~ 24ED:333C
cs=0x24ed;eip=0x00333f; 	T(NEG(dx));	// 125772 neg     dx ;~ 24ED:333F
cs=0x24ed;eip=0x003341; 	T(XCHG(ax, bx));	// 125773 xchg    ax, bx ;~ 24ED:3341
loc_367f2:
	// 8480 
cs=0x24ed;eip=0x003342; 	T(MOV(cx, 0x44));	// 125777 mov     cx, 44h ; 'D' ;~ 24ED:3342
cs=0x24ed;eip=0x003345; 	T(XCHG(ax, bx));	// 125778 xchg    ax, bx ;~ 24ED:3345
cs=0x24ed;eip=0x003346; 	T(XCHG(bp, di));	// 125779 xchg    bp, di ;~ 24ED:3346
	// 125780 rep stosw ;~ 24ED:3348
cs=0x24ed;eip=0x003348; 	X(	REP STOSW);	// 125780 rep stosw ;~ 24ED:3348
cs=0x24ed;eip=0x00334a; 	T(XCHG(ax, bx));	// 125781 xchg    ax, bx ;~ 24ED:334A
cs=0x24ed;eip=0x00334b; 	T(XCHG(bp, di));	// 125782 xchg    bp, di ;~ 24ED:334B
cs=0x24ed;eip=0x00334d; 	T(MOV(cl, 0x44));	// 125783 mov     cl, 44h ; 'D' ;~ 24ED:334D
	// 125784 rep stosw ;~ 24ED:334F
cs=0x24ed;eip=0x00334f; 	X(	REP STOSW);	// 125784 rep stosw ;~ 24ED:334F
cs=0x24ed;eip=0x003351; 	T(XCHG(al, ah));	// 125785 xchg    al, ah ;~ 24ED:3351
cs=0x24ed;eip=0x003353; 	T(XCHG(bl, bh));	// 125786 xchg    bl, bh ;~ 24ED:3353
cs=0x24ed;eip=0x003355; 	T(SUB(di, 0x1C8));	// 125787 sub     di, 1C8h ;~ 24ED:3355
cs=0x24ed;eip=0x003359; 	T(ADD(bp, 0x0B8));	// 125788 add     bp, 0B8h ; '¸' ;~ 24ED:3359
cs=0x24ed;eip=0x00335d; 	T(DEC(dx));	// 125789 dec     dx ;~ 24ED:335D
cs=0x24ed;eip=0x00335e; 	R(JNZ(loc_367f2));	// 125790 jnz     short loc_367F2 ;~ 24ED:335E
cs=0x24ed;eip=0x003360; 	T(MOV(ax, 0x0FEFE));	// 125791 mov     ax, 0FEFEh ;~ 24ED:3360
loc_36813:
	// 8481 
cs=0x24ed;eip=0x003363; 	T(MOV(cl, 0x44));	// 125794 mov     cl, 44h ; 'D' ;~ 24ED:3363
cs=0x24ed;eip=0x003365; 	T(XCHG(bp, di));	// 125795 xchg    bp, di ;~ 24ED:3365
	// 125796 rep stosw ;~ 24ED:3367
cs=0x24ed;eip=0x003367; 	X(	REP STOSW);	// 125796 rep stosw ;~ 24ED:3367
cs=0x24ed;eip=0x003369; 	T(XCHG(bp, di));	// 125797 xchg    bp, di ;~ 24ED:3369
cs=0x24ed;eip=0x00336b; 	T(MOV(cl, 0x44));	// 125798 mov     cl, 44h ; 'D' ;~ 24ED:336B
	// 125799 rep stosw ;~ 24ED:336D
cs=0x24ed;eip=0x00336d; 	X(	REP STOSW);	// 125799 rep stosw ;~ 24ED:336D
cs=0x24ed;eip=0x00336f; 	T(SUB(di, 0x1C8));	// 125800 sub     di, 1C8h ;~ 24ED:336F
cs=0x24ed;eip=0x003373; 	T(ADD(bp, 0x0B8));	// 125801 add     bp, 0B8h ; '¸' ;~ 24ED:3373
cs=0x24ed;eip=0x003377; 	T(CMP(di, 0x0C6C0));	// 125802 cmp     di, 0C6C0h ;~ 24ED:3377
cs=0x24ed;eip=0x00337b; 	R(JNC(loc_36813));	// 125803 jnb     short loc_36813 ;~ 24ED:337B
cs=0x24ed;eip=0x00337d; 	R(RETN(0));	// 125804 retn ;~ 24ED:337D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return true;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_335b0: 	goto loc_335b0;
        case m2c::kloc_33e17: 	goto loc_33e17;
        case m2c::kloc_33e25: 	goto loc_33e25;
        case m2c::kloc_33e64: 	goto loc_33e64;
        case m2c::kloc_33e6f: 	goto loc_33e6f;
        case m2c::kloc_33e73: 	goto loc_33e73;
        case m2c::kloc_33e87: 	goto loc_33e87;
        case m2c::kloc_33e89: 	goto loc_33e89;
        case m2c::kloc_33e92: 	goto loc_33e92;
        case m2c::kloc_33ec9: 	goto loc_33ec9;
        case m2c::kloc_33eeb: 	goto loc_33eeb;
        case m2c::kloc_33f39: 	goto loc_33f39;
        case m2c::kloc_33f8f: 	goto loc_33f8f;
        case m2c::kloc_33f9a: 	goto loc_33f9a;
        case m2c::kloc_33fad: 	goto loc_33fad;
        case m2c::kloc_33fc8: 	goto loc_33fc8;
        case m2c::kloc_33fd8: 	goto loc_33fd8;
        case m2c::kloc_33ff3: 	goto loc_33ff3;
        case m2c::kloc_33ffd: 	goto loc_33ffd;
        case m2c::kloc_34012: 	goto loc_34012;
        case m2c::kloc_3401b: 	goto loc_3401b;
        case m2c::kloc_34024: 	goto loc_34024;
        case m2c::kloc_34026: 	goto loc_34026;
        case m2c::kloc_34028: 	goto loc_34028;
        case m2c::kloc_3402a: 	goto loc_3402a;
        case m2c::kloc_34039: 	goto loc_34039;
        case m2c::kloc_34041: 	goto loc_34041;
        case m2c::kloc_340b1: 	goto loc_340b1;
        case m2c::kloc_340c4: 	goto loc_340c4;
        case m2c::kloc_340dd: 	goto loc_340dd;
        case m2c::kloc_340e9: 	goto loc_340e9;
        case m2c::kloc_340f8: 	goto loc_340f8;
        case m2c::kloc_340ff: 	goto loc_340ff;
        case m2c::kloc_34106: 	goto loc_34106;
        case m2c::kloc_3410d: 	goto loc_3410d;
        case m2c::kloc_34113: 	goto loc_34113;
        case m2c::kloc_34118: 	goto loc_34118;
        case m2c::kloc_34136: 	goto loc_34136;
        case m2c::kloc_3413a: 	goto loc_3413a;
        case m2c::kloc_3413f: 	goto loc_3413f;
        case m2c::kloc_34149: 	goto loc_34149;
        case m2c::kloc_3414d: 	goto loc_3414d;
        case m2c::kloc_34157: 	goto loc_34157;
        case m2c::kloc_34168: 	goto loc_34168;
        case m2c::kloc_34176: 	goto loc_34176;
        case m2c::kloc_34184: 	goto loc_34184;
        case m2c::kloc_34193: 	goto loc_34193;
        case m2c::kloc_341a2: 	goto loc_341a2;
        case m2c::kloc_341a7: 	goto loc_341a7;
        case m2c::kloc_341ac: 	goto loc_341ac;
        case m2c::kloc_341b7: 	goto loc_341b7;
        case m2c::kloc_341bb: 	goto loc_341bb;
        case m2c::kloc_341c6: 	goto loc_341c6;
        case m2c::kloc_341ca: 	goto loc_341ca;
        case m2c::kloc_341ce: 	goto loc_341ce;
        case m2c::kloc_341d9: 	goto loc_341d9;
        case m2c::kloc_3420d: 	goto loc_3420d;
        case m2c::kloc_34242: 	goto loc_34242;
        case m2c::kloc_3425a: 	goto loc_3425a;
        case m2c::kloc_342af: 	goto loc_342af;
        case m2c::kloc_342b7: 	goto loc_342b7;
        case m2c::kloc_342c3: 	goto loc_342c3;
        case m2c::kloc_342d2: 	goto loc_342d2;
        case m2c::kloc_342e0: 	goto loc_342e0;
        case m2c::kloc_342ec: 	goto loc_342ec;
        case m2c::kloc_34305: 	goto loc_34305;
        case m2c::kloc_34310: 	goto loc_34310;
        case m2c::kloc_34318: 	goto loc_34318;
        case m2c::kloc_34326: 	goto loc_34326;
        case m2c::kloc_34339: 	goto loc_34339;
        case m2c::kloc_34345: 	goto loc_34345;
        case m2c::kloc_34361: 	goto loc_34361;
        case m2c::kloc_3436d: 	goto loc_3436d;
        case m2c::kloc_34375: 	goto loc_34375;
        case m2c::kloc_3438b: 	goto loc_3438b;
        case m2c::kloc_3439f: 	goto loc_3439f;
        case m2c::kloc_343a7: 	goto loc_343a7;
        case m2c::kloc_343b5: 	goto loc_343b5;
        case m2c::kloc_343c5: 	goto loc_343c5;
        case m2c::kloc_343dd: 	goto loc_343dd;
        case m2c::kloc_343e5: 	goto loc_343e5;
        case m2c::kloc_343f6: 	goto loc_343f6;
        case m2c::kloc_3440f: 	goto loc_3440f;
        case m2c::kloc_34456: 	goto loc_34456;
        case m2c::kloc_34459: 	goto loc_34459;
        case m2c::kloc_3447b: 	goto loc_3447b;
        case m2c::kloc_3448a: 	goto loc_3448a;
        case m2c::kloc_344ae: 	goto loc_344ae;
        case m2c::kloc_344bb: 	goto loc_344bb;
        case m2c::kloc_344c9: 	goto loc_344c9;
        case m2c::kloc_344d7: 	goto loc_344d7;
        case m2c::kloc_344d9: 	goto loc_344d9;
        case m2c::kloc_344dd: 	goto loc_344dd;
        case m2c::kloc_344ed: 	goto loc_344ed;
        case m2c::kloc_344f8: 	goto loc_344f8;
        case m2c::kloc_3452f: 	goto loc_3452f;
        case m2c::kloc_34539: 	goto loc_34539;
        case m2c::kloc_3453c: 	goto loc_3453c;
        case m2c::kloc_3455f: 	goto loc_3455f;
        case m2c::kloc_3456d: 	goto loc_3456d;
        case m2c::kloc_34576: 	goto loc_34576;
        case m2c::kloc_34586: 	goto loc_34586;
        case m2c::kloc_34588: 	goto loc_34588;
        case m2c::kloc_34594: 	goto loc_34594;
        case m2c::kloc_345ab: 	goto loc_345ab;
        case m2c::kloc_345b1: 	goto loc_345b1;
        case m2c::kloc_345c6: 	goto loc_345c6;
        case m2c::kloc_345d0: 	goto loc_345d0;
        case m2c::kloc_345d5: 	goto loc_345d5;
        case m2c::kloc_345e0: 	goto loc_345e0;
        case m2c::kloc_345ec: 	goto loc_345ec;
        case m2c::kloc_345f4: 	goto loc_345f4;
        case m2c::kloc_34600: 	goto loc_34600;
        case m2c::kloc_3460c: 	goto loc_3460c;
        case m2c::kloc_34610: 	goto loc_34610;
        case m2c::kloc_34623: 	goto loc_34623;
        case m2c::kloc_34628: 	goto loc_34628;
        case m2c::kloc_3462d: 	goto loc_3462d;
        case m2c::kloc_34633: 	goto loc_34633;
        case m2c::kloc_3463b: 	goto loc_3463b;
        case m2c::kloc_34656: 	goto loc_34656;
        case m2c::kloc_3465c: 	goto loc_3465c;
        case m2c::kloc_34662: 	goto loc_34662;
        case m2c::kloc_34666: 	goto loc_34666;
        case m2c::kloc_3466c: 	goto loc_3466c;
        case m2c::kloc_34672: 	goto loc_34672;
        case m2c::kloc_34683: 	goto loc_34683;
        case m2c::kloc_3468e: 	goto loc_3468e;
        case m2c::kloc_34690: 	goto loc_34690;
        case m2c::kloc_3469c: 	goto loc_3469c;
        case m2c::kloc_346b3: 	goto loc_346b3;
        case m2c::kloc_346b9: 	goto loc_346b9;
        case m2c::kloc_346ce: 	goto loc_346ce;
        case m2c::kloc_346d8: 	goto loc_346d8;
        case m2c::kloc_346e5: 	goto loc_346e5;
        case m2c::kloc_346f1: 	goto loc_346f1;
        case m2c::kloc_346fd: 	goto loc_346fd;
        case m2c::kloc_34705: 	goto loc_34705;
        case m2c::kloc_34711: 	goto loc_34711;
        case m2c::kloc_3471d: 	goto loc_3471d;
        case m2c::kloc_34733: 	goto loc_34733;
        case m2c::kloc_34738: 	goto loc_34738;
        case m2c::kloc_3473d: 	goto loc_3473d;
        case m2c::kloc_34743: 	goto loc_34743;
        case m2c::kloc_3474b: 	goto loc_3474b;
        case m2c::kloc_34768: 	goto loc_34768;
        case m2c::kloc_3476e: 	goto loc_3476e;
        case m2c::kloc_34772: 	goto loc_34772;
        case m2c::kloc_34778: 	goto loc_34778;
        case m2c::kloc_3477c: 	goto loc_3477c;
        case m2c::kloc_34793: 	goto loc_34793;
        case m2c::kloc_3479c: 	goto loc_3479c;
        case m2c::kloc_347a1: 	goto loc_347a1;
        case m2c::kloc_347ab: 	goto loc_347ab;
        case m2c::kloc_347ad: 	goto loc_347ad;
        case m2c::kloc_347b9: 	goto loc_347b9;
        case m2c::kloc_347c7: 	goto loc_347c7;
        case m2c::kloc_347cd: 	goto loc_347cd;
        case m2c::kloc_347d7: 	goto loc_347d7;
        case m2c::kloc_347e6: 	goto loc_347e6;
        case m2c::kloc_34814: 	goto loc_34814;
        case m2c::kloc_34824: 	goto loc_34824;
        case m2c::kloc_3482e: 	goto loc_3482e;
        case m2c::kloc_34831: 	goto loc_34831;
        case m2c::kloc_3483e: 	goto loc_3483e;
        case m2c::kloc_34865: 	goto loc_34865;
        case m2c::kloc_3488c: 	goto loc_3488c;
        case m2c::kloc_348ae: 	goto loc_348ae;
        case m2c::kloc_348c2: 	goto loc_348c2;
        case m2c::kloc_348c5: 	goto loc_348c5;
        case m2c::kloc_348f1: 	goto loc_348f1;
        case m2c::kloc_348f6: 	goto loc_348f6;
        case m2c::kloc_34903: 	goto loc_34903;
        case m2c::kloc_3492a: 	goto loc_3492a;
        case m2c::kloc_3496e: 	goto loc_3496e;
        case m2c::kloc_3499e: 	goto loc_3499e;
        case m2c::kloc_34a5e: 	goto loc_34a5e;
        case m2c::kloc_34a65: 	goto loc_34a65;
        case m2c::kloc_34a76: 	goto loc_34a76;
        case m2c::kloc_34a7b: 	goto loc_34a7b;
        case m2c::kloc_34a85: 	goto loc_34a85;
        case m2c::kloc_34a89: 	goto loc_34a89;
        case m2c::kloc_34a97: 	goto loc_34a97;
        case m2c::kloc_34aa1: 	goto loc_34aa1;
        case m2c::kloc_34aa8: 	goto loc_34aa8;
        case m2c::kloc_34aae: 	goto loc_34aae;
        case m2c::kloc_34ab5: 	goto loc_34ab5;
        case m2c::kloc_34abd: 	goto loc_34abd;
        case m2c::kloc_34ac3: 	goto loc_34ac3;
        case m2c::kloc_34ad4: 	goto loc_34ad4;
        case m2c::kloc_34ae0: 	goto loc_34ae0;
        case m2c::kloc_34c0c: 	goto loc_34c0c;
        case m2c::kloc_34c1b: 	goto loc_34c1b;
        case m2c::kloc_34c20: 	goto loc_34c20;
        case m2c::kloc_34c2d: 	goto loc_34c2d;
        case m2c::kloc_34c4a: 	goto loc_34c4a;
        case m2c::kloc_34c5b: 	goto loc_34c5b;
        case m2c::kloc_34c5d: 	goto loc_34c5d;
        case m2c::kloc_34c5f: 	goto loc_34c5f;
        case m2c::kloc_34c67: 	goto loc_34c67;
        case m2c::kloc_34c73: 	goto loc_34c73;
        case m2c::kloc_34c78: 	goto loc_34c78;
        case m2c::kloc_34c96: 	goto loc_34c96;
        case m2c::kloc_34cac: 	goto loc_34cac;
        case m2c::kloc_34cb3: 	goto loc_34cb3;
        case m2c::kloc_34cba: 	goto loc_34cba;
        case m2c::kloc_34cc8: 	goto loc_34cc8;
        case m2c::kloc_34cde: 	goto loc_34cde;
        case m2c::kloc_34cfc: 	goto loc_34cfc;
        case m2c::kloc_34d09: 	goto loc_34d09;
        case m2c::kloc_34d22: 	goto loc_34d22;
        case m2c::kloc_34d32: 	goto loc_34d32;
        case m2c::kloc_34d35: 	goto loc_34d35;
        case m2c::kloc_34d51: 	goto loc_34d51;
        case m2c::kloc_34d53: 	goto loc_34d53;
        case m2c::kloc_34d64: 	goto loc_34d64;
        case m2c::kloc_34d80: 	goto loc_34d80;
        case m2c::kloc_34d91: 	goto loc_34d91;
        case m2c::kloc_34d93: 	goto loc_34d93;
        case m2c::kloc_34db6: 	goto loc_34db6;
        case m2c::kloc_34dc4: 	goto loc_34dc4;
        case m2c::kloc_34dc6: 	goto loc_34dc6;
        case m2c::kloc_34dd5: 	goto loc_34dd5;
        case m2c::kloc_34dd7: 	goto loc_34dd7;
        case m2c::kloc_34ddf: 	goto loc_34ddf;
        case m2c::kloc_34dfb: 	goto loc_34dfb;
        case m2c::kloc_34e0f: 	goto loc_34e0f;
        case m2c::kloc_34e1f: 	goto loc_34e1f;
        case m2c::kloc_34e52: 	goto loc_34e52;
        case m2c::kloc_34e69: 	goto loc_34e69;
        case m2c::kloc_34e85: 	goto loc_34e85;
        case m2c::kloc_34e97: 	goto loc_34e97;
        case m2c::kloc_34e9b: 	goto loc_34e9b;
        case m2c::kloc_34e9e: 	goto loc_34e9e;
        case m2c::kloc_34eb0: 	goto loc_34eb0;
        case m2c::kloc_34ebc: 	goto loc_34ebc;
        case m2c::kloc_34ed7: 	goto loc_34ed7;
        case m2c::kloc_34eea: 	goto loc_34eea;
        case m2c::kloc_34ef1: 	goto loc_34ef1;
        case m2c::kloc_34efd: 	goto loc_34efd;
        case m2c::kloc_34f06: 	goto loc_34f06;
        case m2c::kloc_34f13: 	goto loc_34f13;
        case m2c::kloc_34f28: 	goto loc_34f28;
        case m2c::kloc_34f31: 	goto loc_34f31;
        case m2c::kloc_34f37: 	goto loc_34f37;
        case m2c::kloc_34f47: 	goto loc_34f47;
        case m2c::kloc_34f4d: 	goto loc_34f4d;
        case m2c::kloc_34f8a: 	goto loc_34f8a;
        case m2c::kloc_34f8e: 	goto loc_34f8e;
        case m2c::kloc_34fbc: 	goto loc_34fbc;
        case m2c::kloc_34fcd: 	goto loc_34fcd;
        case m2c::kloc_34fd3: 	goto loc_34fd3;
        case m2c::kloc_34fe5: 	goto loc_34fe5;
        case m2c::kloc_34ff1: 	goto loc_34ff1;
        case m2c::kloc_35003: 	goto loc_35003;
        case m2c::kloc_35009: 	goto loc_35009;
        case m2c::kloc_3501c: 	goto loc_3501c;
        case m2c::kloc_3501e: 	goto loc_3501e;
        case m2c::kloc_35028: 	goto loc_35028;
        case m2c::kloc_3502a: 	goto loc_3502a;
        case m2c::kloc_35034: 	goto loc_35034;
        case m2c::kloc_35036: 	goto loc_35036;
        case m2c::kloc_3504e: 	goto loc_3504e;
        case m2c::kloc_35051: 	goto loc_35051;
        case m2c::kloc_3505e: 	goto loc_3505e;
        case m2c::kloc_3506d: 	goto loc_3506d;
        case m2c::kloc_3507c: 	goto loc_3507c;
        case m2c::kloc_35081: 	goto loc_35081;
        case m2c::kloc_35089: 	goto loc_35089;
        case m2c::kloc_35097: 	goto loc_35097;
        case m2c::kloc_3509e: 	goto loc_3509e;
        case m2c::kloc_350b0: 	goto loc_350b0;
        case m2c::kloc_350be: 	goto loc_350be;
        case m2c::kloc_350dc: 	goto loc_350dc;
        case m2c::kloc_350f5: 	goto loc_350f5;
        case m2c::kloc_3510d: 	goto loc_3510d;
        case m2c::kloc_3513c: 	goto loc_3513c;
        case m2c::kloc_35146: 	goto loc_35146;
        case m2c::kloc_35186: 	goto loc_35186;
        case m2c::kloc_351d8: 	goto loc_351d8;
        case m2c::kloc_353ce: 	goto loc_353ce;
        case m2c::kloc_35420: 	goto loc_35420;
        case m2c::kloc_35444: 	goto loc_35444;
        case m2c::kloc_35462: 	goto loc_35462;
        case m2c::kloc_35484: 	goto loc_35484;
        case m2c::kloc_3549c: 	goto loc_3549c;
        case m2c::kloc_354db: 	goto loc_354db;
        case m2c::kloc_354f3: 	goto loc_354f3;
        case m2c::kloc_354fb: 	goto loc_354fb;
        case m2c::kloc_35514: 	goto loc_35514;
        case m2c::kloc_35525: 	goto loc_35525;
        case m2c::kloc_3554e: 	goto loc_3554e;
        case m2c::kloc_35559: 	goto loc_35559;
        case m2c::kloc_3555b: 	goto loc_3555b;
        case m2c::kloc_3557f: 	goto loc_3557f;
        case m2c::kloc_35582: 	goto loc_35582;
        case m2c::kloc_355ed: 	goto loc_355ed;
        case m2c::kloc_3562d: 	goto loc_3562d;
        case m2c::kloc_35643: 	goto loc_35643;
        case m2c::kloc_3564c: 	goto loc_3564c;
        case m2c::kloc_3565b: 	goto loc_3565b;
        case m2c::kloc_35674: 	goto loc_35674;
        case m2c::kloc_3567a: 	goto loc_3567a;
        case m2c::kloc_3567f: 	goto loc_3567f;
        case m2c::kloc_35682: 	goto loc_35682;
        case m2c::kloc_3568a: 	goto loc_3568a;
        case m2c::kloc_356af: 	goto loc_356af;
        case m2c::kloc_356c5: 	goto loc_356c5;
        case m2c::kloc_356ce: 	goto loc_356ce;
        case m2c::kloc_356dd: 	goto loc_356dd;
        case m2c::kloc_356ed: 	goto loc_356ed;
        case m2c::kloc_356f7: 	goto loc_356f7;
        case m2c::kloc_356fd: 	goto loc_356fd;
        case m2c::kloc_35702: 	goto loc_35702;
        case m2c::kloc_35705: 	goto loc_35705;
        case m2c::kloc_35708: 	goto loc_35708;
        case m2c::kloc_35729: 	goto loc_35729;
        case m2c::kloc_35741: 	goto loc_35741;
        case m2c::kloc_35747: 	goto loc_35747;
        case m2c::kloc_3575e: 	goto loc_3575e;
        case m2c::kloc_35764: 	goto loc_35764;
        case m2c::kloc_35772: 	goto loc_35772;
        case m2c::kloc_357bc: 	goto loc_357bc;
        case m2c::kloc_357c0: 	goto loc_357c0;
        case m2c::kloc_357fe: 	goto loc_357fe;
        case m2c::kloc_35824: 	goto loc_35824;
        case m2c::kloc_3582c: 	goto loc_3582c;
        case m2c::kloc_35864: 	goto loc_35864;
        case m2c::kloc_3588f: 	goto loc_3588f;
        case m2c::kloc_35898: 	goto loc_35898;
        case m2c::kloc_358a5: 	goto loc_358a5;
        case m2c::kloc_358b1: 	goto loc_358b1;
        case m2c::kloc_358cb: 	goto loc_358cb;
        case m2c::kloc_358f6: 	goto loc_358f6;
        case m2c::kloc_35906: 	goto loc_35906;
        case m2c::kloc_35913: 	goto loc_35913;
        case m2c::kloc_3592a: 	goto loc_3592a;
        case m2c::kloc_3593b: 	goto loc_3593b;
        case m2c::kloc_35940: 	goto loc_35940;
        case m2c::kloc_3594a: 	goto loc_3594a;
        case m2c::kloc_3594c: 	goto loc_3594c;
        case m2c::kloc_35966: 	goto loc_35966;
        case m2c::kloc_3597f: 	goto loc_3597f;
        case m2c::kloc_35981: 	goto loc_35981;
        case m2c::kloc_35984: 	goto loc_35984;
        case m2c::kloc_35996: 	goto loc_35996;
        case m2c::kloc_35998: 	goto loc_35998;
        case m2c::kloc_359b4: 	goto loc_359b4;
        case m2c::kloc_359be: 	goto loc_359be;
        case m2c::kloc_359c4: 	goto loc_359c4;
        case m2c::kloc_359d3: 	goto loc_359d3;
        case m2c::kloc_359e9: 	goto loc_359e9;
        case m2c::kloc_35a79: 	goto loc_35a79;
        case m2c::kloc_35a83: 	goto loc_35a83;
        case m2c::kloc_35abc: 	goto loc_35abc;
        case m2c::kloc_35ace: 	goto loc_35ace;
        case m2c::kloc_35ad0: 	goto loc_35ad0;
        case m2c::kloc_35ae2: 	goto loc_35ae2;
        case m2c::kloc_35af9: 	goto loc_35af9;
        case m2c::kloc_35aff: 	goto loc_35aff;
        case m2c::kloc_35b1f: 	goto loc_35b1f;
        case m2c::kloc_35b56: 	goto loc_35b56;
        case m2c::kloc_35b58: 	goto loc_35b58;
        case m2c::kloc_35b73: 	goto loc_35b73;
        case m2c::kloc_35b7b: 	goto loc_35b7b;
        case m2c::kloc_35baa: 	goto loc_35baa;
        case m2c::kloc_35bce: 	goto loc_35bce;
        case m2c::kloc_35be0: 	goto loc_35be0;
        case m2c::kloc_35c19: 	goto loc_35c19;
        case m2c::kloc_35c24: 	goto loc_35c24;
        case m2c::kloc_35c35: 	goto loc_35c35;
        case m2c::kloc_35c43: 	goto loc_35c43;
        case m2c::kloc_35c61: 	goto loc_35c61;
        case m2c::kloc_35caa: 	goto loc_35caa;
        case m2c::kloc_35cbc: 	goto loc_35cbc;
        case m2c::kloc_35d0d: 	goto loc_35d0d;
        case m2c::kloc_35d15: 	goto loc_35d15;
        case m2c::kloc_35d17: 	goto loc_35d17;
        case m2c::kloc_35d28: 	goto loc_35d28;
        case m2c::kloc_35d41: 	goto loc_35d41;
        case m2c::kloc_35d4d: 	goto loc_35d4d;
        case m2c::kloc_35d59: 	goto loc_35d59;
        case m2c::kloc_35d65: 	goto loc_35d65;
        case m2c::kloc_35d71: 	goto loc_35d71;
        case m2c::kloc_35dd9: 	goto loc_35dd9;
        case m2c::kloc_35de2: 	goto loc_35de2;
        case m2c::kloc_35df0: 	goto loc_35df0;
        case m2c::kloc_35e26: 	goto loc_35e26;
        case m2c::kloc_35e53: 	goto loc_35e53;
        case m2c::kloc_35e87: 	goto loc_35e87;
        case m2c::kloc_35e8d: 	goto loc_35e8d;
        case m2c::kloc_35e97: 	goto loc_35e97;
        case m2c::kloc_35ea2: 	goto loc_35ea2;
        case m2c::kloc_35ea7: 	goto loc_35ea7;
        case m2c::kloc_35eaa: 	goto loc_35eaa;
        case m2c::kloc_35eb4: 	goto loc_35eb4;
        case m2c::kloc_35eb8: 	goto loc_35eb8;
        case m2c::kloc_35edc: 	goto loc_35edc;
        case m2c::kloc_35ee3: 	goto loc_35ee3;
        case m2c::kloc_35eec: 	goto loc_35eec;
        case m2c::kloc_35ef3: 	goto loc_35ef3;
        case m2c::kloc_35efa: 	goto loc_35efa;
        case m2c::kloc_35f15: 	goto loc_35f15;
        case m2c::kloc_35f47: 	goto loc_35f47;
        case m2c::kloc_35f4a: 	goto loc_35f4a;
        case m2c::kloc_35f5c: 	goto loc_35f5c;
        case m2c::kloc_35f63: 	goto loc_35f63;
        case m2c::kloc_35f79: 	goto loc_35f79;
        case m2c::kloc_35f89: 	goto loc_35f89;
        case m2c::kloc_35f8c: 	goto loc_35f8c;
        case m2c::kloc_35fac: 	goto loc_35fac;
        case m2c::kloc_35fbb: 	goto loc_35fbb;
        case m2c::kloc_35fca: 	goto loc_35fca;
        case m2c::kloc_36005: 	goto loc_36005;
        case m2c::kloc_3600d: 	goto loc_3600d;
        case m2c::kloc_36014: 	goto loc_36014;
        case m2c::kloc_36050: 	goto loc_36050;
        case m2c::kloc_36058: 	goto loc_36058;
        case m2c::kloc_3606f: 	goto loc_3606f;
        case m2c::kloc_36084: 	goto loc_36084;
        case m2c::kloc_360ba: 	goto loc_360ba;
        case m2c::kloc_360d0: 	goto loc_360d0;
        case m2c::kloc_360d5: 	goto loc_360d5;
        case m2c::kloc_360f5: 	goto loc_360f5;
        case m2c::kloc_360f9: 	goto loc_360f9;
        case m2c::kloc_36108: 	goto loc_36108;
        case m2c::kloc_36114: 	goto loc_36114;
        case m2c::kloc_36124: 	goto loc_36124;
        case m2c::kloc_36132: 	goto loc_36132;
        case m2c::kloc_36147: 	goto loc_36147;
        case m2c::kloc_3615c: 	goto loc_3615c;
        case m2c::kloc_3616c: 	goto loc_3616c;
        case m2c::kloc_3617c: 	goto loc_3617c;
        case m2c::kloc_36196: 	goto loc_36196;
        case m2c::kloc_361a6: 	goto loc_361a6;
        case m2c::kloc_361d6: 	goto loc_361d6;
        case m2c::kloc_361e5: 	goto loc_361e5;
        case m2c::kloc_36205: 	goto loc_36205;
        case m2c::kloc_3621b: 	goto loc_3621b;
        case m2c::kloc_3622f: 	goto loc_3622f;
        case m2c::kloc_3623e: 	goto loc_3623e;
        case m2c::kloc_36253: 	goto loc_36253;
        case m2c::kloc_36261: 	goto loc_36261;
        case m2c::kloc_36264: 	goto loc_36264;
        case m2c::kloc_3626e: 	goto loc_3626e;
        case m2c::kloc_3627f: 	goto loc_3627f;
        case m2c::kloc_36283: 	goto loc_36283;
        case m2c::kloc_36298: 	goto loc_36298;
        case m2c::kloc_362a2: 	goto loc_362a2;
        case m2c::kloc_362b1: 	goto loc_362b1;
        case m2c::kloc_362b5: 	goto loc_362b5;
        case m2c::kloc_362d7: 	goto loc_362d7;
        case m2c::kloc_362e1: 	goto loc_362e1;
        case m2c::kloc_362eb: 	goto loc_362eb;
        case m2c::kloc_362ef: 	goto loc_362ef;
        case m2c::kloc_3638b: 	goto loc_3638b;
        case m2c::kloc_36397: 	goto loc_36397;
        case m2c::kloc_363ad: 	goto loc_363ad;
        case m2c::kloc_363b1: 	goto loc_363b1;
        case m2c::kloc_363c5: 	goto loc_363c5;
        case m2c::kloc_363c9: 	goto loc_363c9;
        case m2c::kloc_363d8: 	goto loc_363d8;
        case m2c::kloc_363dc: 	goto loc_363dc;
        case m2c::kloc_363f4: 	goto loc_363f4;
        case m2c::kloc_36412: 	goto loc_36412;
        case m2c::kloc_36428: 	goto loc_36428;
        case m2c::kloc_36440: 	goto loc_36440;
        case m2c::kloc_36465: 	goto loc_36465;
        case m2c::kloc_36468: 	goto loc_36468;
        case m2c::kloc_3649d: 	goto loc_3649d;
        case m2c::kloc_364a0: 	goto loc_364a0;
        case m2c::kloc_364d5: 	goto loc_364d5;
        case m2c::kloc_364d8: 	goto loc_364d8;
        case m2c::kloc_364f3: 	goto loc_364f3;
        case m2c::kloc_364f9: 	goto loc_364f9;
        case m2c::kloc_3650a: 	goto loc_3650a;
        case m2c::kloc_36528: 	goto loc_36528;
        case m2c::kloc_3653d: 	goto loc_3653d;
        case m2c::kloc_36543: 	goto loc_36543;
        case m2c::kloc_3654c: 	goto loc_3654c;
        case m2c::kloc_36574: 	goto loc_36574;
        case m2c::kloc_3657a: 	goto loc_3657a;
        case m2c::kloc_365bf: 	goto loc_365bf;
        case m2c::kloc_365d5: 	goto loc_365d5;
        case m2c::kloc_365ef: 	goto loc_365ef;
        case m2c::kloc_36630: 	goto loc_36630;
        case m2c::kloc_36638: 	goto loc_36638;
        case m2c::kloc_3665a: 	goto loc_3665a;
        case m2c::kloc_36668: 	goto loc_36668;
        case m2c::kloc_3666c: 	goto loc_3666c;
        case m2c::kloc_36676: 	goto loc_36676;
        case m2c::kloc_36735: 	goto loc_36735;
        case m2c::kloc_36747: 	goto loc_36747;
        case m2c::kloc_3675b: 	goto loc_3675b;
        case m2c::kloc_36796: 	goto loc_36796;
        case m2c::kloc_367a6: 	goto loc_367a6;
        case m2c::kloc_367c6: 	goto loc_367c6;
        case m2c::kloc_367d4: 	goto loc_367d4;
        case m2c::kloc_367dc: 	goto loc_367dc;
        case m2c::kloc_367f2: 	goto loc_367f2;
        case m2c::kloc_36813: 	goto loc_36813;
        case m2c::klocret_33e24: 	goto locret_33e24;
        case m2c::klocret_33fff: 	goto locret_33fff;
        case m2c::klocret_34864: 	goto locret_34864;
        case m2c::klocret_34929: 	goto locret_34929;
        case m2c::klocret_34c49: 	goto locret_34c49;
        case m2c::klocret_34dde: 	goto locret_34dde;
        case m2c::klocret_34fe4: 	goto locret_34fe4;
        case m2c::klocret_3582b: 	goto locret_3582b;
        case m2c::klocret_3584a: 	goto locret_3584a;
        case m2c::klocret_358f5: 	goto locret_358f5;
        case m2c::klocret_35a96: 	goto locret_35a96;
        case m2c::klocret_36093: 	goto locret_36093;
        case m2c::klocret_360e3: 	goto locret_360e3;
        case m2c::klocret_3615a: 	goto locret_3615a;
        case m2c::klocret_3615b: 	goto locret_3615b;
        case m2c::klocret_361e3: 	goto locret_361e3;
        case m2c::klocret_361e4: 	goto locret_361e4;
        case m2c::klocret_36260: 	goto locret_36260;
        case m2c::klocret_362cc: 	goto locret_362cc;
        case m2c::klocret_36306: 	goto locret_36306;
        case m2c::klocret_363f3: 	goto locret_363f3;
        case m2c::klocret_36596: 	goto locret_36596;
        case m2c::klocret_36611: 	goto locret_36611;
        case m2c::klocret_36691: 	goto locret_36691;
        case m2c::kret_24ed_103: 	goto ret_24ed_103;
        case m2c::kret_24ed_106: 	goto ret_24ed_106;
        case m2c::kret_24ed_109: 	goto ret_24ed_109;
        case m2c::kret_24ed_10c: 	goto ret_24ed_10c;
        case m2c::kret_24ed_10f: 	goto ret_24ed_10f;
        case m2c::kret_24ed_112: 	goto ret_24ed_112;
        case m2c::kret_24ed_115: 	goto ret_24ed_115;
        case m2c::kret_24ed_118: 	goto ret_24ed_118;
        case m2c::kret_24ed_11b: 	goto ret_24ed_11b;
        case m2c::kret_24ed_11e: 	goto ret_24ed_11e;
        case m2c::kret_24ed_121: 	goto ret_24ed_121;
        case m2c::kret_24ed_124: 	goto ret_24ed_124;
        case m2c::kret_24ed_127: 	goto ret_24ed_127;
        case m2c::kret_24ed_12a: 	goto ret_24ed_12a;
        case m2c::kret_24ed_12d: 	goto ret_24ed_12d;
        case m2c::kret_24ed_130: 	goto ret_24ed_130;
        case m2c::kret_24ed_133: 	goto ret_24ed_133;
        case m2c::kret_24ed_136: 	goto ret_24ed_136;
        case m2c::kret_24ed_139: 	goto ret_24ed_139;
        case m2c::kret_24ed_13c: 	goto ret_24ed_13c;
        case m2c::kret_24ed_13d: 	goto ret_24ed_13d;
        case m2c::kret_24ed_13e: 	goto ret_24ed_13e;
        case m2c::kret_24ed_13f: 	goto ret_24ed_13f;
        case m2c::kret_24ed_142: 	goto ret_24ed_142;
        case m2c::kret_24ed_145: 	goto ret_24ed_145;
        case m2c::kret_24ed_148: 	goto ret_24ed_148;
        case m2c::kret_24ed_14b: 	goto ret_24ed_14b;
        case m2c::kret_24ed_14e: 	goto ret_24ed_14e;
        case m2c::kret_24ed_151: 	goto ret_24ed_151;
        case m2c::kret_24ed_154: 	goto ret_24ed_154;
        case m2c::kret_24ed_157: 	goto ret_24ed_157;
        case m2c::kret_24ed_16fb: 	goto ret_24ed_16fb;
        case m2c::kret_24ed_1931: 	goto ret_24ed_1931;
        case m2c::kret_24ed_1a45: 	goto ret_24ed_1a45;
        case m2c::kret_24ed_1ae5: 	goto ret_24ed_1ae5;
        case m2c::kret_24ed_1ce2: 	goto ret_24ed_1ce2;
        case m2c::kret_24ed_1d35: 	goto ret_24ed_1d35;
        case m2c::kret_24ed_1e7f: 	goto ret_24ed_1e7f;
        case m2c::kret_24ed_1efd: 	goto ret_24ed_1efd;
        case m2c::kret_24ed_1ff5: 	goto ret_24ed_1ff5;
        case m2c::kret_24ed_20de: 	goto ret_24ed_20de;
        case m2c::kret_24ed_210e: 	goto ret_24ed_210e;
        case m2c::kret_24ed_22fd: 	goto ret_24ed_22fd;
        case m2c::kret_24ed_2336: 	goto ret_24ed_2336;
        case m2c::kret_24ed_2389: 	goto ret_24ed_2389;
        case m2c::kret_24ed_23c4: 	goto ret_24ed_23c4;
        case m2c::kret_24ed_240d: 	goto ret_24ed_240d;
        case m2c::kret_24ed_246d: 	goto ret_24ed_246d;
        case m2c::kret_24ed_24a9: 	goto ret_24ed_24a9;
        case m2c::kret_24ed_2502: 	goto ret_24ed_2502;
        case m2c::kret_24ed_2537: 	goto ret_24ed_2537;
        case m2c::kret_24ed_254b: 	goto ret_24ed_254b;
        case m2c::kret_24ed_2556: 	goto ret_24ed_2556;
        case m2c::kret_24ed_25e1: 	goto ret_24ed_25e1;
        case m2c::kret_24ed_2746: 	goto ret_24ed_2746;
        case m2c::kret_24ed_27c3: 	goto ret_24ed_27c3;
        case m2c::kret_24ed_27dd: 	goto ret_24ed_27dd;
        case m2c::kret_24ed_27fe: 	goto ret_24ed_27fe;
        case m2c::kret_24ed_286a: 	goto ret_24ed_286a;
        case m2c::kret_24ed_28d1: 	goto ret_24ed_28d1;
        case m2c::kret_24ed_29bb: 	goto ret_24ed_29bb;
        case m2c::kret_24ed_2a95: 	goto ret_24ed_2a95;
        case m2c::kret_24ed_2b39: 	goto ret_24ed_2b39;
        case m2c::kret_24ed_2b93: 	goto ret_24ed_2b93;
        case m2c::kret_24ed_2be9: 	goto ret_24ed_2be9;
        case m2c::kret_24ed_2c35: 	goto ret_24ed_2c35;
        case m2c::kret_24ed_2e1d: 	goto ret_24ed_2e1d;
        case m2c::kret_24ed_2fc9: 	goto ret_24ed_2fc9;
        case m2c::kret_24ed_3: 	goto ret_24ed_3;
        case m2c::kret_24ed_3001: 	goto ret_24ed_3001;
        case m2c::kret_24ed_3039: 	goto ret_24ed_3039;
        case m2c::kret_24ed_3083: 	goto ret_24ed_3083;
        case m2c::kret_24ed_30bb: 	goto ret_24ed_30bb;
        case m2c::kret_24ed_3165: 	goto ret_24ed_3165;
        case m2c::kret_24ed_32c0: 	goto ret_24ed_32c0;
        case m2c::kret_24ed_9ba: 	goto ret_24ed_9ba;
        case m2c::kret_24ed_a22: 	goto ret_24ed_a22;
        case m2c::kret_24ed_a41: 	goto ret_24ed_a41;
        case m2c::kret_24ed_a59: 	goto ret_24ed_a59;
        case m2c::kret_24ed_a69: 	goto ret_24ed_a69;
        case m2c::kret_24ed_a76: 	goto ret_24ed_a76;
        case m2c::kret_24ed_aa4: 	goto ret_24ed_aa4;
        case m2c::kret_24ed_ad1: 	goto ret_24ed_ad1;
        case m2c::kret_24ed_b06: 	goto ret_24ed_b06;
        case m2c::kret_24ed_b51: 	goto ret_24ed_b51;
        case m2c::kret_24ed_bc5: 	goto ret_24ed_bc5;
        case m2c::kret_24ed_bec: 	goto ret_24ed_bec;
        case m2c::kret_24ed_bed: 	goto ret_24ed_bed;
        case m2c::kret_24ed_bee: 	goto ret_24ed_bee;
        case m2c::kret_24ed_bfc: 	goto ret_24ed_bfc;
        case m2c::kret_24ed_c1b: 	goto ret_24ed_c1b;
        case m2c::kret_24ed_fd5: 	goto ret_24ed_fd5;
        case m2c::kseg002_0_proc: 	goto seg002_0_proc;
        case m2c::kseg002_1af5_proc: 	goto seg002_1af5_proc;
        case m2c::kseg002_1b91_proc: 	goto seg002_1b91_proc;
        case m2c::kseg002_1e7a_proc: 	goto seg002_1e7a_proc;
        case m2c::kseg002_2334_proc: 	goto seg002_2334_proc;
        case m2c::kseg002_239b_proc: 	goto seg002_239b_proc;
        case m2c::kseg002_240c_proc: 	goto seg002_240c_proc;
        case m2c::kseg002_25a6_proc: 	goto seg002_25a6_proc;
        case m2c::kseg002_25e7_proc: 	goto seg002_25e7_proc;
        case m2c::kseg002_26ed_proc: 	goto seg002_26ed_proc;
        case m2c::kseg002_2869_proc: 	goto seg002_2869_proc;
        case m2c::kseg002_29f1_proc: 	goto seg002_29f1_proc;
        case m2c::kseg002_2ab2_proc: 	goto seg002_2ab2_proc;
        case m2c::kseg002_2ca9_proc: 	goto seg002_2ca9_proc;
        case m2c::kseg002_2fc8_proc: 	goto seg002_2fc8_proc;
        case m2c::kseg002_3000_proc: 	goto seg002_3000_proc;
        case m2c::kseg002_30e5_proc: 	goto seg002_30e5_proc;
        case m2c::kseg002_327c_proc: 	goto seg002_327c_proc;
        case m2c::kseg002_a40_proc: 	goto seg002_a40_proc;
        case m2c::kseg002_a68_proc: 	goto seg002_a68_proc;
        case m2c::kseg002_bc4_proc: 	goto seg002_bc4_proc;
        case m2c::ksub_33e68: 	goto sub_33e68;
        case m2c::ksub_33ed1: 	goto sub_33ed1;
        case m2c::ksub_33f08: 	goto sub_33f08;
        case m2c::ksub_33fb0: 	goto sub_33fb0;
        case m2c::ksub_34000: 	goto sub_34000;
        case m2c::ksub_340a8: 	goto sub_340a8;
        case m2c::ksub_34ef4: 	goto sub_34ef4;
        case m2c::ksub_34f94: 	goto sub_34f94;
        case m2c::ksub_34fa7: 	goto sub_34fa7;
        case m2c::ksub_3518d: 	goto sub_3518d;
        case m2c::ksub_351e0: 	goto sub_351e0;
        case m2c::ksub_354a4: 	goto sub_354a4;
        case m2c::ksub_3558d: 	goto sub_3558d;
        case m2c::ksub_355bd: 	goto sub_355bd;
        case m2c::ksub_357ac: 	goto sub_357ac;
        case m2c::ksub_357f6: 	goto sub_357f6;
        case m2c::ksub_35837: 	goto sub_35837;
        case m2c::ksub_35873: 	goto sub_35873;
        case m2c::ksub_3591c: 	goto sub_3591c;
        case m2c::ksub_35958: 	goto sub_35958;
        case m2c::ksub_359ac: 	goto sub_359ac;
        case m2c::ksub_359e1: 	goto sub_359e1;
        case m2c::ksub_359f7: 	goto sub_359f7;
        case m2c::ksub_35a05: 	goto sub_35a05;
        case m2c::ksub_35a8c: 	goto sub_35a8c;
        case m2c::ksub_35b52: 	goto sub_35b52;
        case m2c::ksub_35c70: 	goto sub_35c70;
        case m2c::ksub_35c8c: 	goto sub_35c8c;
        case m2c::ksub_35cad: 	goto sub_35cad;
        case m2c::ksub_35d7e: 	goto sub_35d7e;
        case m2c::ksub_35e66: 	goto sub_35e66;
        case m2c::ksub_35f42: 	goto sub_35f42;
        case m2c::ksub_35fe8: 	goto sub_35fe8;
        case m2c::ksub_3603e: 	goto sub_3603e;
        case m2c::ksub_36094: 	goto sub_36094;
        case m2c::ksub_360e4: 	goto sub_360e4;
        case m2c::ksub_36462: 	goto sub_36462;
        case m2c::ksub_3649a: 	goto sub_3649a;
        case m2c::ksub_364d2: 	goto sub_364d2;
        case m2c::ksub_364e8: 	goto sub_364e8;
        case m2c::ksub_36532: 	goto sub_36532;
        case m2c::ksub_3656a: 	goto sub_3656a;
        case m2c::ksub_36612: 	goto sub_36612;
        case m2c::ksub_3676d: 	goto sub_3676d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__); exit(1);
    };
}


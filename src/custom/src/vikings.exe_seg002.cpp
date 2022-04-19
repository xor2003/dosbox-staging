/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "vikings.exe.h"

                

 bool _group2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group2:
    _begin:
sub_1be8a:
	// 32236 
cs=0xd4f;eip=0x0003ba; 	T(CMP(bx, 0x10));	// 32238 cmp     bx, 10h ;~ 0D4F:03BA
ret_d4f_3bd:
	// 5891 
cs=0xd4f;eip=0x0003bd; 	J(JNC(loc_1beb4));	// 32239 jnb     short loc_1BEB4 ;~ 0D4F:03BD
cs=0xd4f;eip=0x0003bf; 	T(SHL(bx, 1));	// 32240 shl     bx, 1 ;~ 0D4F:03BF
cs=0xd4f;eip=0x0003c1; 	T(SHL(bx, 1));	// 32241 shl     bx, 1 ;~ 0D4F:03C1
cs=0xd4f;eip=0x0003c3; 	T(LES(bx, *(dw*)(raddr(cs,bx+0x124))));	// 32242 les     bx, cs:[bx+124h] ;~ 0D4F:03C3
cs=0xd4f;eip=0x0003c8; 	T(MOV(cx, es));	// 32243 mov     cx, es ;~ 0D4F:03C8
cs=0xd4f;eip=0x0003ca; 	T(OR(cx, bx));	// 32244 or      cx, bx ;~ 0D4F:03CA
cs=0xd4f;eip=0x0003cc; 	J(JZ(loc_1beb4));	// 32245 jz      short loc_1BEB4 ;~ 0D4F:03CC
loc_1be9e:
	// 5892 
cs=0xd4f;eip=0x0003ce; 	T(MOV(cx, *(dw*)(raddr(es,bx))));	// 32248 mov     cx, es:[bx] ;~ 0D4F:03CE
cs=0xd4f;eip=0x0003d1; 	T(CMP(cx, ax));	// 32249 cmp     cx, ax ;~ 0D4F:03D1
cs=0xd4f;eip=0x0003d3; 	J(JZ(loc_1bebb));	// 32250 jz      short loc_1BEBB ;~ 0D4F:03D3
cs=0xd4f;eip=0x0003d5; 	T(ADD(bx, 4));	// 32251 add     bx, 4 ;~ 0D4F:03D5
cs=0xd4f;eip=0x0003d8; 	T(CMP(cx, 0x0FFFF));	// 32252 cmp     cx, 0FFFFh ;~ 0D4F:03D8
cs=0xd4f;eip=0x0003db; 	J(JNZ(loc_1be9e));	// 32253 jnz     short loc_1BE9E ;~ 0D4F:03DB
cs=0xd4f;eip=0x0003dd; 	T(MOV(ax, 0));	// 32254 mov     ax, 0 ;~ 0D4F:03DD
cs=0xd4f;eip=0x0003e0; 	T(MOV(dx, 0));	// 32255 mov     dx, 0 ;~ 0D4F:03E0
cs=0xd4f;eip=0x0003e3; 	R(RETF(0));	// 32256 retf ;~ 0D4F:03E3
loc_1beb4:
	// 5893 
cs=0xd4f;eip=0x0003e4; 	T(MOV(ax, 0));	// 32261 mov     ax, 0 ;~ 0D4F:03E4
cs=0xd4f;eip=0x0003e7; 	T(MOV(dx, 0));	// 32262 mov     dx, 0 ;~ 0D4F:03E7
cs=0xd4f;eip=0x0003ea; 	R(RETF(0));	// 32263 retf ;~ 0D4F:03EA
loc_1bebb:
	// 5894 
cs=0xd4f;eip=0x0003eb; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 32267 mov     ax, es:[bx+2] ;~ 0D4F:03EB
cs=0xd4f;eip=0x0003ef; 	T(MOV(dx, es));	// 32268 mov     dx, es ;~ 0D4F:03EF
cs=0xd4f;eip=0x0003f1; 	R(RETF(0));	// 32269 retf ;~ 0D4F:03F1
sub_1bec2:
	// 32276 
cs=0xd4f;eip=0x0003f2; 	T(MOV(bx, sp));	// 32278 mov     bx, sp ;~ 0D4F:03F2
ret_d4f_3f4:
	// 5895 
cs=0xd4f;eip=0x0003f4; 	T(MOV(bx, *(dw*)(raddr(ss,bx+4))));	// 32279 mov     bx, ss:[bx+4] ;~ 0D4F:03F4
cs=0xd4f;eip=0x0003f8; 	X(PUSH(cs));	// 32280 push    cs ;~ 0D4F:03F8
cs=0xd4f;eip=0x0003f9; 	J(CALL(sub_1be8a,0));	// 32281 call    near ptr sub_1BE8A ;~ 0D4F:03F9
cs=0xd4f;eip=0x0003fc; 	T(CMP(ax, 0));	// 32282 cmp     ax, 0 ;~ 0D4F:03FC
cs=0xd4f;eip=0x0003ff; 	J(JNZ(loc_1bed6));	// 32283 jnz     short loc_1BED6 ;~ 0D4F:03FF
cs=0xd4f;eip=0x000401; 	T(CMP(dx, 0));	// 32284 cmp     dx, 0 ;~ 0D4F:0401
cs=0xd4f;eip=0x000404; 	J(JZ(locret_1bed9));	// 32285 jz      short locret_1BED9 ;~ 0D4F:0404
loc_1bed6:
	// 5896 
cs=0xd4f;eip=0x000406; 	X(PUSH(dx));	// 32288 push    dx ;~ 0D4F:0406
cs=0xd4f;eip=0x000407; 	X(PUSH(ax));	// 32289 push    ax ;~ 0D4F:0407
cs=0xd4f;eip=0x000408; 	R(RETF(0));	// 32290 retf ;~ 0D4F:0408
locret_1bed9:
	// 5897 
cs=0xd4f;eip=0x000409; 	R(RETF(0));	// 32294 retf ;~ 0D4F:0409
seg002_40a_proc:
	// 32299 
loc_1beda:
	// 5898 
cs=0xd4f;eip=0x00040a; 	T(ADD(al, *(raddr(ds,bx+si))));	// 32301 add     al, [bx+si] ;~ 0D4F:040A
sub_1bedc:
	// 32306 
cs=0xd4f;eip=0x00040c; 	X(DEC(*(dw*)(raddr(cs,m2c::kloc_1beda))));	// 32307 dec     word ptr cs:loc_1BEDA ;~ 0D4F:040C
cs=0xd4f;eip=0x000411; 	J(JNZ(locret_1bf1a));	// 32308 jnz     short locret_1BF1A ;~ 0D4F:0411
cs=0xd4f;eip=0x000413; 	X(MOV(*(dw*)(raddr(cs,m2c::kloc_1beda)), 2));	// 32309 mov     word ptr cs:loc_1BEDA, 2 ;~ 0D4F:0413
cs=0xd4f;eip=0x00041a; 	T(MOV(al, 0x36));	// 32310 mov     al, 36h ; '6' ;~ 0D4F:041A
cs=0xd4f;eip=0x00041c; 	R(OUT(0x43, al));	// 32311 out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0D4F:041C
cs=0xd4f;eip=0x00041e; 	T(MOV(ax, 0x7FFF));	// 32312 mov     ax, 7FFFh ;~ 0D4F:041E
cs=0xd4f;eip=0x000421; 	J({;});	// 32313 jmp     short $+2 ;~ 0D4F:0421
loc_1bef3:
	// 5899 
cs=0xd4f;eip=0x000423; 	R(OUT(0x40, al));	// 32317 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0D4F:0423
cs=0xd4f;eip=0x000425; 	T(MOV(al, ah));	// 32318 mov     al, ah ;~ 0D4F:0425
cs=0xd4f;eip=0x000427; 	J({;});	// 32319 jmp     short $+2 ;~ 0D4F:0427
loc_1bef9:
	// 5900 
cs=0xd4f;eip=0x000429; 	R(OUT(0x40, al));	// 32323 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0D4F:0429
cs=0xd4f;eip=0x00042b; 	T(MOV(dx, 0x3DA));	// 32324 mov     dx, 3DAh ;~ 0D4F:042B
loc_1befe:
	// 5901 
cs=0xd4f;eip=0x00042e; 	R(IN(al, dx));	// 32327 in      al, dx          ; Video status bits: ;~ 0D4F:042E
cs=0xd4f;eip=0x00042f; 	T(TEST(al, 8));	// 32332 test    al, 8 ;~ 0D4F:042F
cs=0xd4f;eip=0x000431; 	J(JZ(loc_1befe));	// 32333 jz      short loc_1BEFE ;~ 0D4F:0431
cs=0xd4f;eip=0x000433; 	T(MOV(al, 0x36));	// 32334 mov     al, 36h ; '6' ;~ 0D4F:0433
cs=0xd4f;eip=0x000435; 	R(OUT(0x43, al));	// 32335 out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0D4F:0435
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000437; 	T(MOV(ax, *(dw*)(((db*)&word_1bbf2))));	// 32336 mov     ax, cs:word_1BBF2 ;~ 0D4F:0437
cs=0xd4f;eip=0x00043b; 	J({;});	// 32337 jmp     short $+2 ;~ 0D4F:043B
loc_1bf0d:
	// 5902 
cs=0xd4f;eip=0x00043d; 	R(OUT(0x40, al));	// 32341 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0D4F:043D
cs=0xd4f;eip=0x00043f; 	T(MOV(al, ah));	// 32342 mov     al, ah ;~ 0D4F:043F
cs=0xd4f;eip=0x000441; 	J({;});	// 32343 jmp     short $+2 ;~ 0D4F:0441
loc_1bf13:
	// 5903 
cs=0xd4f;eip=0x000443; 	R(OUT(0x40, al));	// 32347 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0D4F:0443
cs=0xd4f;eip=0x000445; 	J(CALLF(sub_1797b,0));	// 32348 call    sub_1797B ;~ 0D4F:0445
locret_1bf1a:
	// 5904 
cs=0xd4f;eip=0x00044a; 	R(RETF(0));	// 32351 retf ;~ 0D4F:044A
seg002_44b_proc:
	// 32355 
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00044b; 	X(INC(*(dw*)(((db*)&word_1bad2))));	// 32355 inc     cs:word_1BAD2 ;~ 0D4F:044B
ret_d4f_450:
	// 5905 
cs=0xd4f;eip=0x000450; 	T(CLD);	// 32356 cld ;~ 0D4F:0450
cs=0xd4f;eip=0x000451; 	X(PUSH(ax));	// 32357 push    ax ;~ 0D4F:0451
cs=0xd4f;eip=0x000452; 	X(PUSH(bx));	// 32358 push    bx ;~ 0D4F:0452
cs=0xd4f;eip=0x000453; 	X(PUSH(cx));	// 32359 push    cx ;~ 0D4F:0453
cs=0xd4f;eip=0x000454; 	X(PUSH(dx));	// 32360 push    dx ;~ 0D4F:0454
cs=0xd4f;eip=0x000455; 	X(PUSH(si));	// 32361 push    si ;~ 0D4F:0455
cs=0xd4f;eip=0x000456; 	X(PUSH(di));	// 32362 push    di ;~ 0D4F:0456
cs=0xd4f;eip=0x000457; 	X(PUSH(bp));	// 32363 push    bp ;~ 0D4F:0457
cs=0xd4f;eip=0x000458; 	X(PUSH(es));	// 32364 push    es ;~ 0D4F:0458
cs=0xd4f;eip=0x000459; 	X(PUSH(ds));	// 32365 push    ds ;~ 0D4F:0459
cs=0xd4f;eip=0x00045a; 	X(PUSH(cs));	// 32366 push    cs ;~ 0D4F:045A
cs=0xd4f;eip=0x00045b; 	J(CALL(sub_1bedc,0));	// 32367 call    near ptr sub_1BEDC ;~ 0D4F:045B
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00045e; 	T(CMP(*(dw*)(((db*)&word_1bad2)), 1));	// 32368 cmp     cs:word_1BAD2, 1 ;~ 0D4F:045E
cs=0xd4f;eip=0x000464; 	J(JZ(loc_1bf39));	// 32369 jz      short loc_1BF39 ;~ 0D4F:0464
cs=0xd4f;eip=0x000466; 	J(JMP(loc_1bfc7));	// 32370 jmp     loc_1BFC7 ;~ 0D4F:0466
loc_1bf39:
	// 5906 
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000469; 	X(MOV(*(dw*)((byte_1bc85)+0x1FF), ss));	// 32374 mov     word ptr cs:byte_1BC85+1FFh, ss ;~ 0D4F:0469
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00046e; 	X(MOV(*(dw*)((byte_1bc85)+0x201), sp));	// 32375 mov     word ptr cs:byte_1BC85+201h, sp ;~ 0D4F:046E
cs=0xd4f;eip=0x000473; 	T(MOV(ax, cs));	// 32376 mov     ax, cs ;~ 0D4F:0473
cs=0xd4f;eip=0x000475; 	R(MOV(ss, ax));	// 32377 mov     ss, ax ;~ 0D4F:0475
cs=0xd4f;eip=0x000477; 	T(MOV(sp, 0x3B4));	// 32379 mov     sp, 3B4h ;~ 0D4F:0477
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00047a; 	X(MOV(*(dw*)(((db*)&word_1bbec)), 0));	// 32380 mov     cs:word_1BBEC, 0 ;~ 0D4F:047A
loc_1bf51:
	// 5907 
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000481; 	T(MOV(si, *(dw*)(((db*)&word_1bbec))));	// 32383 mov     si, cs:word_1BBEC ;~ 0D4F:0481
cs=0xd4f;eip=0x000486; 	T(SHL(si, 1));	// 32384 shl     si, 1 ;~ 0D4F:0486
cs=0xd4f;eip=0x000488; 	T(CMP(*(dw*)(raddr(cs,si+0x6A)), 2));	// 32385 cmp     word ptr cs:[si+6Ah], 2 ;~ 0D4F:0488
cs=0xd4f;eip=0x00048e; 	J(JNZ(loc_1bfb0));	// 32386 jnz     short loc_1BFB0 ;~ 0D4F:048E
cs=0xd4f;eip=0x000490; 	T(MOV(ds, *(dw*)(raddr(cs,si+0x48))));	// 32387 mov     ds, word ptr cs:[si+48h] ;~ 0D4F:0490
cs=0xd4f;eip=0x000495; 	T(SHL(si, 1));	// 32388 shl     si, 1 ;~ 0D4F:0495
cs=0xd4f;eip=0x000497; 	T(MOV(ax, *(dw*)(raddr(cs,si+0x8C))));	// 32389 mov     ax, cs:[si+8Ch] ;~ 0D4F:0497
cs=0xd4f;eip=0x00049c; 	T(MOV(dx, *(dw*)(raddr(cs,si+0x8E))));	// 32390 mov     dx, cs:[si+8Eh] ;~ 0D4F:049C
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0004a1; 	T(ADD(ax, *(dw*)(((db*)&word_1bbe4))));	// 32391 add     ax, cs:word_1BBE4 ;~ 0D4F:04A1
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0004a6; 	T(ADC(dx, *(dw*)(((db*)&word_1bbe6))));	// 32392 adc     dx, cs:word_1BBE6 ;~ 0D4F:04A6
cs=0xd4f;eip=0x0004ab; 	T(CMP(dx, *(dw*)(raddr(cs,si+0x0D2))));	// 32393 cmp     dx, cs:[si+0D2h] ;~ 0D4F:04AB
cs=0xd4f;eip=0x0004b0; 	J(JC(loc_1bf8b));	// 32394 jb      short loc_1BF8B ;~ 0D4F:04B0
cs=0xd4f;eip=0x0004b2; 	J(JA(loc_1bf97));	// 32395 ja      short loc_1BF97 ;~ 0D4F:04B2
cs=0xd4f;eip=0x0004b4; 	T(CMP(ax, *(dw*)(raddr(cs,si+0x0D0))));	// 32396 cmp     ax, cs:[si+0D0h] ;~ 0D4F:04B4
cs=0xd4f;eip=0x0004b9; 	J(JNC(loc_1bf97));	// 32397 jnb     short loc_1BF97 ;~ 0D4F:04B9
loc_1bf8b:
	// 5908 
cs=0xd4f;eip=0x0004bb; 	X(MOV(*(dw*)(raddr(cs,si+0x8C)), ax));	// 32400 mov     cs:[si+8Ch], ax ;~ 0D4F:04BB
cs=0xd4f;eip=0x0004c0; 	X(MOV(*(dw*)(raddr(cs,si+0x8E)), dx));	// 32401 mov     cs:[si+8Eh], dx ;~ 0D4F:04C0
cs=0xd4f;eip=0x0004c5; 	J(JMP(loc_1bfb0));	// 32402 jmp     short loc_1BFB0 ;~ 0D4F:04C5
loc_1bf97:
	// 5909 
cs=0xd4f;eip=0x0004c7; 	T(SUB(ax, *(dw*)(raddr(cs,si+0x0D0))));	// 32407 sub     ax, cs:[si+0D0h] ;~ 0D4F:04C7
cs=0xd4f;eip=0x0004cc; 	T(SBB(dx, *(dw*)(raddr(cs,si+0x0D2))));	// 32408 sbb     dx, cs:[si+0D2h] ;~ 0D4F:04CC
cs=0xd4f;eip=0x0004d1; 	X(MOV(*(dw*)(raddr(cs,si+0x8C)), ax));	// 32409 mov     cs:[si+8Ch], ax ;~ 0D4F:04D1
cs=0xd4f;eip=0x0004d6; 	X(MOV(*(dw*)(raddr(cs,si+0x8E)), dx));	// 32410 mov     cs:[si+8Eh], dx ;~ 0D4F:04D6
cs=0xd4f;eip=0x0004db; 	J(CALLF(__dispatch_call,*(dd*)(raddr(cs,si+4))));	// 32411 call    dword ptr cs:[si+4] ;~ 0D4F:04DB
loc_1bfb0:
	// 5910 
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0004e0; 	X(INC(*(dw*)(((db*)&word_1bbec))));	// 32415 inc     cs:word_1BBEC ;~ 0D4F:04E0
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0004e5; 	T(CMP(*(dw*)(((db*)&word_1bbec)), 0x10));	// 32416 cmp     cs:word_1BBEC, 10h ;~ 0D4F:04E5
cs=0xd4f;eip=0x0004eb; 	J(JBE(loc_1bf51));	// 32417 jbe     short loc_1BF51 ;~ 0D4F:04EB
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0004ed; 	R(MOV(ss, *(dw*)((byte_1bc85)+0x1FF)));	// 32418 mov     ss, word ptr cs:byte_1BC85+1FFh ;~ 0D4F:04ED
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0004f2; 	T(MOV(sp, *(dw*)((byte_1bc85)+0x201)));	// 32420 mov     sp, word ptr cs:byte_1BC85+201h ;~ 0D4F:04F2
loc_1bfc7:
	// 5911 
cs=0xd4f;eip=0x0004f7; 	X(POP(ds));	// 32423 pop     ds ;~ 0D4F:04F7
cs=0xd4f;eip=0x0004f8; 	X(POP(es));	// 32424 pop     es ;~ 0D4F:04F8
cs=0xd4f;eip=0x0004f9; 	X(POP(bp));	// 32425 pop     bp ;~ 0D4F:04F9
cs=0xd4f;eip=0x0004fa; 	X(POP(di));	// 32426 pop     di ;~ 0D4F:04FA
cs=0xd4f;eip=0x0004fb; 	X(POP(si));	// 32427 pop     si ;~ 0D4F:04FB
cs=0xd4f;eip=0x0004fc; 	X(POP(dx));	// 32428 pop     dx ;~ 0D4F:04FC
cs=0xd4f;eip=0x0004fd; 	X(POP(cx));	// 32429 pop     cx ;~ 0D4F:04FD
cs=0xd4f;eip=0x0004fe; 	X(POP(bx));	// 32430 pop     bx ;~ 0D4F:04FE
cs=0xd4f;eip=0x0004ff; 	T(MOV(al, 0x20));	// 32431 mov     al, 20h ; ' ' ;~ 0D4F:04FF
cs=0xd4f;eip=0x000501; 	R(OUT(0x20, al));	// 32432 out     20h, al         ; Interrupt controller, 8259A. ;~ 0D4F:0501
cs=0xd4f;eip=0x000503; 	X(POP(ax));	// 32433 pop     ax ;~ 0D4F:0503
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000504; 	T(CMP(*(dw*)((atest)), 0x6554));	// 32434 cmp     word ptr cs:aTest, 6554h ; "Test" ;~ 0D4F:0504
cs=0xd4f;eip=0x00050b; 	J(JNZ(loc_1bfec));	// 32435 jnz     short loc_1BFEC ;~ 0D4F:050B
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00050d; 	T(CMP(*(dw*)((atest)+2), 0x7473));	// 32436 cmp     word ptr cs:aTest+2, 7473h ; "st" ;~ 0D4F:050D
cs=0xd4f;eip=0x000514; 	J(JNZ(loc_1bfec));	// 32437 jnz     short loc_1BFEC ;~ 0D4F:0514
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000516; 	X(DEC(*(dw*)(((db*)&word_1bad2))));	// 32438 dec     cs:word_1BAD2 ;~ 0D4F:0516
cs=0xd4f;eip=0x00051b; 	R(IRET);	// 32439 iret ;~ 0D4F:051B
loc_1bfec:
	// 5912 
cs=0xd4f;eip=0x00051c; 	T(MOV(ax, 0x2DBA));	// 32444 mov     ax, 2DBAh ;~ 0D4F:051C
cs=0xd4f;eip=0x00051f; 	T(XOR(bx, bx));	// 32445 xor     bx, bx ;~ 0D4F:051F
cs=0xd4f;eip=0x000521; 	J(CALLF(sub_10dba,0));	// 32446 call    far ptr sub_10DBA ;~ 0D4F:0521
cs=0xd4f;eip=0x000526; 	J(JMP(loc_1bfec));	// 32448 jmp     short loc_1BFEC ;~ 0D4F:0526
sub_1bff8:
	// 32453 
cs=0xd4f;eip=0x000528; 	X(PUSH(ds));	// 32454 push    ds ;~ 0D4F:0528
ret_d4f_529:
	// 5913 
cs=0xd4f;eip=0x000529; 	X(PUSH(si));	// 32455 push    si ;~ 0D4F:0529
cs=0xd4f;eip=0x00052a; 	X(PUSH(di));	// 32456 push    di ;~ 0D4F:052A
cs=0xd4f;eip=0x00052b; 	X(PUSHF);	// 32457 pushf ;~ 0D4F:052B
cs=0xd4f;eip=0x00052c; 	T(CLI);	// 32458 cli ;~ 0D4F:052C
cs=0xd4f;eip=0x00052d; 	T(CLD);	// 32459 cld ;~ 0D4F:052D
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00052e; 	X(MOV(*(dw*)(((db*)&word_1bbe4)), 0x0FFFF));	// 32460 mov     cs:word_1BBE4, 0FFFFh ;~ 0D4F:052E
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000535; 	X(MOV(*(dw*)(((db*)&word_1bbe6)), 0x0FFFF));	// 32461 mov     cs:word_1BBE6, 0FFFFh ;~ 0D4F:0535
cs=0xd4f;eip=0x00053c; 	X(PUSH(cs));	// 32462 push    cs ;~ 0D4F:053C
cs=0xd4f;eip=0x00053d; 	X(POP(es));	// 32463 pop     es ;~ 0D4F:053D
cs=0xd4f;eip=0x00053e; 	T(MOV(di, 0x6A));	// 32465 mov     di, 6Ah ; 'j' ;~ 0D4F:053E
cs=0xd4f;eip=0x000541; 	T(MOV(cx, 0x11));	// 32466 mov     cx, 11h ;~ 0D4F:0541
cs=0xd4f;eip=0x000544; 	T(MOV(ax, 0));	// 32467 mov     ax, 0 ;~ 0D4F:0544
	// 32468 rep stosw ;~ 0D4F:0547
cs=0xd4f;eip=0x000547; 	X(	REP STOSW);	// 32468 rep stosw ;~ 0D4F:0547
cs=0xd4f;eip=0x000549; 	T(MOV(di, 0x8C));	// 32469 mov     di, 8Ch ; 'Œ' ;~ 0D4F:0549
cs=0xd4f;eip=0x00054c; 	T(MOV(cx, 0x22));	// 32470 mov     cx, 22h ; '"' ;~ 0D4F:054C
	// 32471 rep stosw ;~ 0D4F:054F
cs=0xd4f;eip=0x00054f; 	X(	REP STOSW);	// 32471 rep stosw ;~ 0D4F:054F
cs=0xd4f;eip=0x000551; 	T(MOV(di, 0x0D0));	// 32472 mov     di, 0D0h ; 'Ğ' ;~ 0D4F:0551
cs=0xd4f;eip=0x000554; 	T(MOV(cx, 0x22));	// 32473 mov     cx, 22h ; '"' ;~ 0D4F:0554
	// 32474 rep stosw ;~ 0D4F:0557
cs=0xd4f;eip=0x000557; 	X(	REP STOSW);	// 32474 rep stosw ;~ 0D4F:0557
loc_1c029:
	// 5914 
cs=0xd4f;eip=0x000559; 	T(OR(bh, 0));	// 32477 or      bh, 0 ;~ 0D4F:0559
seg002_55c_proc:
	// 32480 
cs=0xd4f;eip=0x00055c; 	X(PUSH(cs));	// 32480 push    cs ;~ 0D4F:055C
cs=0xd4f;eip=0x00055d; 	J(CALL(_group2,m2c::kloc_1c029));	// 32481 call    near ptr loc_1C029+1 ;~ 0D4F:055D
cs=0xd4f;eip=0x000560; 	X(POP(di));	// 32482 pop     di ;~ 0D4F:0560
cs=0xd4f;eip=0x000561; 	X(POP(si));	// 32483 pop     si ;~ 0D4F:0561
cs=0xd4f;eip=0x000562; 	X(POP(ds));	// 32484 pop     ds ;~ 0D4F:0562
cs=0xd4f;eip=0x000563; 	R(RETF(0));	// 32485 retf ;~ 0D4F:0563
ret_d4f_564:
	// 5915 
cs=0xd4f;eip=0x000564; 	X(PUSHF);	// 32487 pushf ;~ 0D4F:0564
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000565; 	J(CALLF(__dispatch_call,*(dd*)(((db*)&dword_1bbe8))));	// 32488 call    cs:dword_1BBE8 ;~ 0D4F:0565
cs=0xd4f;eip=0x00056a; 	R(RETF(0));	// 32489 retf ;~ 0D4F:056A
sub_1c03b:
	// 32494 
cs=0xd4f;eip=0x00056b; 	X(PUSH(ds));	// 32495 push    ds ;~ 0D4F:056B
ret_d4f_56c:
	// 5916 
cs=0xd4f;eip=0x00056c; 	X(PUSH(si));	// 32496 push    si ;~ 0D4F:056C
cs=0xd4f;eip=0x00056d; 	X(PUSH(di));	// 32497 push    di ;~ 0D4F:056D
cs=0xd4f;eip=0x00056e; 	X(PUSHF);	// 32498 pushf ;~ 0D4F:056E
cs=0xd4f;eip=0x00056f; 	T(CLI);	// 32499 cli ;~ 0D4F:056F
cs=0xd4f;eip=0x000570; 	T(MOV(ax, 0));	// 32500 mov     ax, 0 ;~ 0D4F:0570
cs=0xd4f;eip=0x000573; 	T(MOV(es, ax));	// 32501 mov     es, ax ;~ 0D4F:0573
cs=0xd4f;eip=0x000575; 	T(MOV(bx, *(dw*)(raddr(es,0x20))));	// 32503 mov     bx, es:20h ;~ 0D4F:0575
cs=0xd4f;eip=0x00057a; 	T(MOV(es, *(dw*)(raddr(es,0x22))));	// 32504 mov     es, word ptr es:22h ;~ 0D4F:057A
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00057f; 	X(MOV(*(dw*)(((db*)&dword_1bbe8)), bx));	// 32506 mov     word ptr cs:dword_1BBE8, bx ;~ 0D4F:057F
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000584; 	X(MOV(*(dw*)(((db*)&dword_1bbe8)+2), es));	// 32507 mov     word ptr cs:dword_1BBE8+2, es ;~ 0D4F:0584
cs=0xd4f;eip=0x000589; 	T(MOV(bx, 0x564));	// 32508 mov     bx, 564h ;~ 0D4F:0589
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00058c; 	X(MOV(*(dw*)(((db*)&word_1bb14)), bx));	// 32509 mov     cs:word_1BB14, bx ;~ 0D4F:058C
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000591; 	X(MOV(*(dw*)(((db*)&word_1bb16)), cs));	// 32510 mov     cs:word_1BB16, cs ;~ 0D4F:0591
cs=0xd4f;eip=0x000596; 	T(MOV(ax, cs));	// 32511 mov     ax, cs ;~ 0D4F:0596
cs=0xd4f;eip=0x000598; 	T(MOV(ds, ax));	// 32512 mov     ds, ax ;~ 0D4F:0598
cs=0xd4f;eip=0x00059a; 	T(MOV(dx, 0x44B));	// 32514 mov     dx, 44Bh ;~ 0D4F:059A
cs=0xd4f;eip=0x00059d; 	T(MOV(ax, 0));	// 32515 mov     ax, 0 ;~ 0D4F:059D
cs=0xd4f;eip=0x0005a0; 	T(MOV(es, ax));	// 32516 mov     es, ax ;~ 0D4F:05A0
cs=0xd4f;eip=0x0005a2; 	X(MOV(*(dw*)(raddr(es,0x20)), dx));	// 32518 mov     es:20h, dx ;~ 0D4F:05A2
cs=0xd4f;eip=0x0005a7; 	X(MOV(*(dw*)(raddr(es,0x22)), ds));	// 32519 mov     word ptr es:22h, ds ;~ 0D4F:05A7
loc_1c07c:
	// 5917 
cs=0xd4f;eip=0x0005ac; 	T(OR(bh, 0));	// 32522 or      bh, 0 ;~ 0D4F:05AC
seg002_5af_proc:
	// 32525 
cs=0xd4f;eip=0x0005af; 	X(PUSH(cs));	// 32525 push    cs ;~ 0D4F:05AF
cs=0xd4f;eip=0x0005b0; 	J(CALL(_group2,m2c::kloc_1c07c));	// 32526 call    near ptr loc_1C07C+1 ;~ 0D4F:05B0
cs=0xd4f;eip=0x0005b3; 	X(POP(di));	// 32527 pop     di ;~ 0D4F:05B3
cs=0xd4f;eip=0x0005b4; 	X(POP(si));	// 32528 pop     si ;~ 0D4F:05B4
cs=0xd4f;eip=0x0005b5; 	X(POP(ds));	// 32529 pop     ds ;~ 0D4F:05B5
cs=0xd4f;eip=0x0005b6; 	R(RETF(0));	// 32531 retf ;~ 0D4F:05B6
sub_1c087:
	// 32536 
cs=0xd4f;eip=0x0005b7; 	X(PUSH(ds));	// 32537 push    ds ;~ 0D4F:05B7
ret_d4f_5b8:
	// 5918 
cs=0xd4f;eip=0x0005b8; 	X(PUSH(si));	// 32538 push    si ;~ 0D4F:05B8
cs=0xd4f;eip=0x0005b9; 	X(PUSH(di));	// 32539 push    di ;~ 0D4F:05B9
cs=0xd4f;eip=0x0005ba; 	X(PUSHF);	// 32540 pushf ;~ 0D4F:05BA
cs=0xd4f;eip=0x0005bb; 	T(CLI);	// 32541 cli ;~ 0D4F:05BB
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0005bc; 	X(MOV(*(dw*)(((db*)&word_1bbec)), 0x0FFFF));	// 32542 mov     cs:word_1BBEC, 0FFFFh ;~ 0D4F:05BC
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0005c3; 	T(MOV(dx, *(dw*)(((db*)&dword_1bbe8))));	// 32543 mov     dx, word ptr cs:dword_1BBE8 ;~ 0D4F:05C3
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0005c8; 	T(MOV(ds, *(dw*)(((db*)&dword_1bbe8)+2)));	// 32544 mov     ds, word ptr cs:dword_1BBE8+2 ;~ 0D4F:05C8
cs=0xd4f;eip=0x0005cd; 	T(MOV(ax, 0));	// 32545 mov     ax, 0 ;~ 0D4F:05CD
cs=0xd4f;eip=0x0005d0; 	T(MOV(es, ax));	// 32546 mov     es, ax ;~ 0D4F:05D0
cs=0xd4f;eip=0x0005d2; 	X(MOV(*(dw*)(raddr(es,0x20)), dx));	// 32547 mov     es:20h, dx ;~ 0D4F:05D2
cs=0xd4f;eip=0x0005d7; 	X(MOV(*(dw*)(raddr(es,0x22)), ds));	// 32548 mov     word ptr es:22h, ds ;~ 0D4F:05D7
loc_1c0ac:
	// 5919 
cs=0xd4f;eip=0x0005dc; 	T(OR(bh, 0));	// 32551 or      bh, 0 ;~ 0D4F:05DC
seg002_5df_proc:
	// 32554 
cs=0xd4f;eip=0x0005df; 	X(PUSH(cs));	// 32554 push    cs ;~ 0D4F:05DF
cs=0xd4f;eip=0x0005e0; 	J(CALL(_group2,m2c::kloc_1c0ac));	// 32555 call    near ptr loc_1C0AC+1 ;~ 0D4F:05E0
cs=0xd4f;eip=0x0005e3; 	X(POP(di));	// 32556 pop     di ;~ 0D4F:05E3
cs=0xd4f;eip=0x0005e4; 	X(POP(si));	// 32557 pop     si ;~ 0D4F:05E4
cs=0xd4f;eip=0x0005e5; 	X(POP(ds));	// 32558 pop     ds ;~ 0D4F:05E5
cs=0xd4f;eip=0x0005e6; 	R(RETF(0));	// 32559 retf ;~ 0D4F:05E6
sub_1c0b7:
	// 32565 
#undef arg_2
#define arg_2 6
	// 32568 arg_2           = word ptr  6 ;~ 0D4F:05E7
ret_d4f_5e7:
	// 5920 
cs=0xd4f;eip=0x0005e7; 	X(PUSH(bp));	// 32570 push    bp ;~ 0D4F:05E7
cs=0xd4f;eip=0x0005e8; 	T(MOV(bp, sp));	// 32571 mov     bp, sp ;~ 0D4F:05E8
cs=0xd4f;eip=0x0005ea; 	X(PUSH(ds));	// 32572 push    ds ;~ 0D4F:05EA
cs=0xd4f;eip=0x0005eb; 	X(PUSH(si));	// 32573 push    si ;~ 0D4F:05EB
cs=0xd4f;eip=0x0005ec; 	X(PUSH(di));	// 32574 push    di ;~ 0D4F:05EC
cs=0xd4f;eip=0x0005ed; 	X(PUSHF);	// 32575 pushf ;~ 0D4F:05ED
cs=0xd4f;eip=0x0005ee; 	T(CLI);	// 32576 cli ;~ 0D4F:05EE
cs=0xd4f;eip=0x0005ef; 	T(MOV(al, 0x36));	// 32577 mov     al, 36h ; '6' ;~ 0D4F:05EF
cs=0xd4f;eip=0x0005f1; 	R(OUT(0x43, al));	// 32578 out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0D4F:05F1
cs=0xd4f;eip=0x0005f3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 32579 mov     ax, [bp+arg_2] ;~ 0D4F:05F3
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0005f6; 	X(MOV(*(dw*)(((db*)&word_1bbf2)), ax));	// 32580 mov     cs:word_1BBF2, ax ;~ 0D4F:05F6
cs=0xd4f;eip=0x0005fa; 	J({;});	// 32581 jmp     short $+2 ;~ 0D4F:05FA
loc_1c0cc:
	// 5921 
cs=0xd4f;eip=0x0005fc; 	R(OUT(0x40, al));	// 32585 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0D4F:05FC
cs=0xd4f;eip=0x0005fe; 	T(MOV(al, ah));	// 32586 mov     al, ah ;~ 0D4F:05FE
cs=0xd4f;eip=0x000600; 	J({;});	// 32587 jmp     short $+2 ;~ 0D4F:0600
loc_1c0d2:
	// 5922 
cs=0xd4f;eip=0x000602; 	R(OUT(0x40, al));	// 32591 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0D4F:0602
loc_1c0d4:
	// 5923 
cs=0xd4f;eip=0x000604; 	T(OR(bh, 0));	// 32594 or      bh, 0 ;~ 0D4F:0604
seg002_607_proc:
	// 32597 
cs=0xd4f;eip=0x000607; 	X(PUSH(cs));	// 32597 push    cs ;~ 0D4F:0607
cs=0xd4f;eip=0x000608; 	J(CALL(_group2,m2c::kloc_1c0d4));	// 32598 call    near ptr loc_1C0D4+1 ;~ 0D4F:0608
cs=0xd4f;eip=0x00060b; 	X(POP(di));	// 32599 pop     di ;~ 0D4F:060B
cs=0xd4f;eip=0x00060c; 	X(POP(si));	// 32600 pop     si ;~ 0D4F:060C
cs=0xd4f;eip=0x00060d; 	X(POP(ds));	// 32601 pop     ds ;~ 0D4F:060D
cs=0xd4f;eip=0x00060e; 	X(POP(bp));	// 32602 pop     bp ;~ 0D4F:060E
cs=0xd4f;eip=0x00060f; 	R(RETF(0));	// 32603 retf ;~ 0D4F:060F
sub_1c0e0:
	// 32609 
#undef arg_0
#define arg_0 6
	// 32611 arg_0           = word ptr  6 ;~ 0D4F:0610
ret_d4f_610:
	// 5924 
cs=0xd4f;eip=0x000610; 	X(PUSH(bp));	// 32613 push    bp ;~ 0D4F:0610
cs=0xd4f;eip=0x000611; 	T(MOV(bp, sp));	// 32614 mov     bp, sp ;~ 0D4F:0611
cs=0xd4f;eip=0x000613; 	X(PUSH(ds));	// 32615 push    ds ;~ 0D4F:0613
cs=0xd4f;eip=0x000614; 	X(PUSH(si));	// 32616 push    si ;~ 0D4F:0614
cs=0xd4f;eip=0x000615; 	X(PUSH(di));	// 32617 push    di ;~ 0D4F:0615
cs=0xd4f;eip=0x000616; 	T(MOV(ax, 0));	// 32618 mov     ax, 0 ;~ 0D4F:0616
cs=0xd4f;eip=0x000619; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0D68D));	// 32619 cmp     [bp+arg_0], 0D68Dh ;~ 0D4F:0619
cs=0xd4f;eip=0x00061e; 	J(JNC(loc_1c0fd));	// 32620 jnb     short loc_1C0FD ;~ 0D4F:061E
cs=0xd4f;eip=0x000620; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 32621 mov     ax, [bp+arg_0] ;~ 0D4F:0620
cs=0xd4f;eip=0x000623; 	T(MOV(bx, 0x20BC));	// 32622 mov     bx, 20BCh ;~ 0D4F:0623
cs=0xd4f;eip=0x000626; 	T(MOV(cx, 0x2710));	// 32623 mov     cx, 2710h ;~ 0D4F:0626
cs=0xd4f;eip=0x000629; 	T(MUL1_2(cx));	// 32624 mul     cx ;~ 0D4F:0629
cs=0xd4f;eip=0x00062b; 	T(DIV2(bx));	// 32625 div     bx ;~ 0D4F:062B
loc_1c0fd:
	// 5925 
cs=0xd4f;eip=0x00062d; 	X(PUSH(ax));	// 32628 push    ax ;~ 0D4F:062D
cs=0xd4f;eip=0x00062e; 	X(PUSH(cs));	// 32629 push    cs ;~ 0D4F:062E
cs=0xd4f;eip=0x00062f; 	J(CALL(sub_1c0b7,0));	// 32630 call    sub_1C0B7 ;~ 0D4F:062F
cs=0xd4f;eip=0x000632; 	T(ADD(sp, 2));	// 32631 add     sp, 2 ;~ 0D4F:0632
cs=0xd4f;eip=0x000635; 	X(POP(di));	// 32632 pop     di ;~ 0D4F:0635
cs=0xd4f;eip=0x000636; 	X(POP(si));	// 32633 pop     si ;~ 0D4F:0636
cs=0xd4f;eip=0x000637; 	X(POP(ds));	// 32634 pop     ds ;~ 0D4F:0637
cs=0xd4f;eip=0x000638; 	X(POP(bp));	// 32635 pop     bp ;~ 0D4F:0638
cs=0xd4f;eip=0x000639; 	R(RETF(0));	// 32636 retf ;~ 0D4F:0639
sub_1c10a:
	// 32644 
#undef arg_0
#define arg_0 6
	// 32646 arg_0           = word ptr  6 ;~ 0D4F:063A
#undef arg_2
#define arg_2 8
	// 32647 arg_2           = word ptr  8 ;~ 0D4F:063A
#undef arg_4
#define arg_4 0x0A
	// 32648 arg_4           = word ptr  0Ah ;~ 0D4F:063A
#undef arg_6
#define arg_6 0x0C
	// 32649 arg_6           = word ptr  0Ch ;~ 0D4F:063A
ret_d4f_63a:
	// 5926 
cs=0xd4f;eip=0x00063a; 	X(PUSH(bp));	// 32651 push    bp ;~ 0D4F:063A
cs=0xd4f;eip=0x00063b; 	T(MOV(bp, sp));	// 32652 mov     bp, sp ;~ 0D4F:063B
cs=0xd4f;eip=0x00063d; 	X(PUSH(ds));	// 32653 push    ds ;~ 0D4F:063D
cs=0xd4f;eip=0x00063e; 	X(PUSH(si));	// 32654 push    si ;~ 0D4F:063E
cs=0xd4f;eip=0x00063f; 	X(PUSH(di));	// 32655 push    di ;~ 0D4F:063F
cs=0xd4f;eip=0x000640; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 32656 mov     ax, [bp+arg_0] ;~ 0D4F:0640
cs=0xd4f;eip=0x000643; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 32657 mov     dx, [bp+arg_2] ;~ 0D4F:0643
cs=0xd4f;eip=0x000646; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 32658 mov     bx, [bp+arg_4] ;~ 0D4F:0646
cs=0xd4f;eip=0x000649; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_6))));	// 32659 mov     cx, [bp+arg_6] ;~ 0D4F:0649
cs=0xd4f;eip=0x00064c; 	T(OR(cx, cx));	// 32660 or      cx, cx ;~ 0D4F:064C
cs=0xd4f;eip=0x00064e; 	J(JNZ(loc_1c128));	// 32661 jnz     short loc_1C128 ;~ 0D4F:064E
cs=0xd4f;eip=0x000650; 	T(OR(dx, dx));	// 32662 or      dx, dx ;~ 0D4F:0650
cs=0xd4f;eip=0x000652; 	J(JZ(loc_1c14c));	// 32663 jz      short loc_1C14C ;~ 0D4F:0652
cs=0xd4f;eip=0x000654; 	T(OR(bx, bx));	// 32664 or      bx, bx ;~ 0D4F:0654
cs=0xd4f;eip=0x000656; 	J(JZ(loc_1c14c));	// 32665 jz      short loc_1C14C ;~ 0D4F:0656
loc_1c128:
	// 5927 
cs=0xd4f;eip=0x000658; 	T(MOV(bp, cx));	// 32668 mov     bp, cx ;~ 0D4F:0658
cs=0xd4f;eip=0x00065a; 	T(MOV(cx, 0x20));	// 32669 mov     cx, 20h ; ' ' ;~ 0D4F:065A
cs=0xd4f;eip=0x00065d; 	T(XOR(di, di));	// 32670 xor     di, di ;~ 0D4F:065D
cs=0xd4f;eip=0x00065f; 	T(XOR(si, si));	// 32671 xor     si, si ;~ 0D4F:065F
loc_1c131:
	// 5928 
cs=0xd4f;eip=0x000661; 	T(SHL(ax, 1));	// 32674 shl     ax, 1 ;~ 0D4F:0661
cs=0xd4f;eip=0x000663; 	T(RCL(dx, 1));	// 32675 rcl     dx, 1 ;~ 0D4F:0663
cs=0xd4f;eip=0x000665; 	T(RCL(si, 1));	// 32676 rcl     si, 1 ;~ 0D4F:0665
cs=0xd4f;eip=0x000667; 	T(RCL(di, 1));	// 32677 rcl     di, 1 ;~ 0D4F:0667
cs=0xd4f;eip=0x000669; 	T(CMP(di, bp));	// 32678 cmp     di, bp ;~ 0D4F:0669
cs=0xd4f;eip=0x00066b; 	J(JC(loc_1c148));	// 32679 jb      short loc_1C148 ;~ 0D4F:066B
cs=0xd4f;eip=0x00066d; 	J(JA(loc_1c143));	// 32680 ja      short loc_1C143 ;~ 0D4F:066D
cs=0xd4f;eip=0x00066f; 	T(CMP(si, bx));	// 32681 cmp     si, bx ;~ 0D4F:066F
cs=0xd4f;eip=0x000671; 	J(JC(loc_1c148));	// 32682 jb      short loc_1C148 ;~ 0D4F:0671
loc_1c143:
	// 5929 
cs=0xd4f;eip=0x000673; 	T(SUB(si, bx));	// 32685 sub     si, bx ;~ 0D4F:0673
cs=0xd4f;eip=0x000675; 	T(SBB(di, bp));	// 32686 sbb     di, bp ;~ 0D4F:0675
cs=0xd4f;eip=0x000677; 	T(INC(ax));	// 32687 inc     ax ;~ 0D4F:0677
loc_1c148:
	// 5930 
cs=0xd4f;eip=0x000678; 	J(LOOP(loc_1c131));	// 32691 loop    loc_1C131 ;~ 0D4F:0678
cs=0xd4f;eip=0x00067a; 	J(JMP(loc_1c150));	// 32692 jmp     short loc_1C150 ;~ 0D4F:067A
loc_1c14c:
	// 5931 
cs=0xd4f;eip=0x00067c; 	T(DIV2(bx));	// 32697 div     bx ;~ 0D4F:067C
cs=0xd4f;eip=0x00067e; 	T(XOR(dx, dx));	// 32698 xor     dx, dx ;~ 0D4F:067E
loc_1c150:
	// 5932 
cs=0xd4f;eip=0x000680; 	X(POP(di));	// 32701 pop     di ;~ 0D4F:0680
cs=0xd4f;eip=0x000681; 	X(POP(si));	// 32702 pop     si ;~ 0D4F:0681
cs=0xd4f;eip=0x000682; 	X(POP(ds));	// 32703 pop     ds ;~ 0D4F:0682
cs=0xd4f;eip=0x000683; 	X(POP(bp));	// 32704 pop     bp ;~ 0D4F:0683
cs=0xd4f;eip=0x000684; 	R(RETF(0));	// 32705 retf ;~ 0D4F:0684
sub_1c155:
	// 32712 
cs=0xd4f;eip=0x000685; 	X(PUSH(ds));	// 32713 push    ds ;~ 0D4F:0685
ret_d4f_686:
	// 5933 
cs=0xd4f;eip=0x000686; 	X(PUSH(si));	// 32714 push    si ;~ 0D4F:0686
cs=0xd4f;eip=0x000687; 	X(PUSH(di));	// 32715 push    di ;~ 0D4F:0687
cs=0xd4f;eip=0x000688; 	X(PUSHF);	// 32716 pushf ;~ 0D4F:0688
cs=0xd4f;eip=0x000689; 	T(CLI);	// 32717 cli ;~ 0D4F:0689
cs=0xd4f;eip=0x00068a; 	T(CLD);	// 32718 cld ;~ 0D4F:068A
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00068b; 	X(MOV(*(dw*)(((db*)&word_1bbee)), 0x0FFFF));	// 32719 mov     cs:word_1BBEE, 0FFFFh ;~ 0D4F:068B
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000692; 	X(MOV(*(dw*)(((db*)&word_1bbf0)), 0x0FFFF));	// 32720 mov     cs:word_1BBF0, 0FFFFh ;~ 0D4F:0692
cs=0xd4f;eip=0x000699; 	T(MOV(si, 0));	// 32721 mov     si, 0 ;~ 0D4F:0699
loc_1c16c:
	// 5934 
cs=0xd4f;eip=0x00069c; 	T(MOV(bx, si));	// 32724 mov     bx, si ;~ 0D4F:069C
cs=0xd4f;eip=0x00069e; 	T(SHL(bx, 1));	// 32725 shl     bx, 1 ;~ 0D4F:069E
cs=0xd4f;eip=0x0006a0; 	T(CMP(*(dw*)(raddr(cs,bx+0x6A)), 0));	// 32726 cmp     word ptr cs:[bx+6Ah], 0 ;~ 0D4F:06A0
cs=0xd4f;eip=0x0006a6; 	J(JZ(loc_1c19d));	// 32727 jz      short loc_1C19D ;~ 0D4F:06A6
cs=0xd4f;eip=0x0006a8; 	T(SHL(bx, 1));	// 32728 shl     bx, 1 ;~ 0D4F:06A8
cs=0xd4f;eip=0x0006aa; 	T(MOV(ax, *(dw*)(raddr(cs,bx+0x0D0))));	// 32729 mov     ax, cs:[bx+0D0h] ;~ 0D4F:06AA
cs=0xd4f;eip=0x0006af; 	T(MOV(dx, *(dw*)(raddr(cs,bx+0x0D2))));	// 32730 mov     dx, cs:[bx+0D2h] ;~ 0D4F:06AF
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0006b4; 	T(CMP(dx, *(dw*)(((db*)&word_1bbf0))));	// 32731 cmp     dx, cs:word_1BBF0 ;~ 0D4F:06B4
cs=0xd4f;eip=0x0006b9; 	J(JC(loc_1c194));	// 32732 jb      short loc_1C194 ;~ 0D4F:06B9
cs=0xd4f;eip=0x0006bb; 	J(JA(loc_1c19d));	// 32733 ja      short loc_1C19D ;~ 0D4F:06BB
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0006bd; 	T(CMP(ax, *(dw*)(((db*)&word_1bbee))));	// 32734 cmp     ax, cs:word_1BBEE ;~ 0D4F:06BD
cs=0xd4f;eip=0x0006c2; 	J(JNC(loc_1c19d));	// 32735 jnb     short loc_1C19D ;~ 0D4F:06C2
loc_1c194:
	// 5935 
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0006c4; 	X(MOV(*(dw*)(((db*)&word_1bbee)), ax));	// 32738 mov     cs:word_1BBEE, ax ;~ 0D4F:06C4
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0006c8; 	X(MOV(*(dw*)(((db*)&word_1bbf0)), dx));	// 32739 mov     cs:word_1BBF0, dx ;~ 0D4F:06C8
loc_1c19d:
	// 5936 
cs=0xd4f;eip=0x0006cd; 	T(INC(si));	// 32743 inc     si ;~ 0D4F:06CD
cs=0xd4f;eip=0x0006ce; 	T(CMP(si, 0x10));	// 32744 cmp     si, 10h ;~ 0D4F:06CE
cs=0xd4f;eip=0x0006d1; 	J(JBE(loc_1c16c));	// 32745 jbe     short loc_1C16C ;~ 0D4F:06D1
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0006d3; 	T(MOV(ax, *(dw*)(((db*)&word_1bbee))));	// 32746 mov     ax, cs:word_1BBEE ;~ 0D4F:06D3
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0006d7; 	T(MOV(dx, *(dw*)(((db*)&word_1bbf0))));	// 32747 mov     dx, cs:word_1BBF0 ;~ 0D4F:06D7
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0006dc; 	T(CMP(ax, *(dw*)(((db*)&word_1bbe4))));	// 32748 cmp     ax, cs:word_1BBE4 ;~ 0D4F:06DC
cs=0xd4f;eip=0x0006e1; 	J(JNZ(loc_1c1ba));	// 32749 jnz     short loc_1C1BA ;~ 0D4F:06E1
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0006e3; 	T(CMP(dx, *(dw*)(((db*)&word_1bbe6))));	// 32750 cmp     dx, cs:word_1BBE6 ;~ 0D4F:06E3
cs=0xd4f;eip=0x0006e8; 	J(JZ(loc_1c1df));	// 32751 jz      short loc_1C1DF ;~ 0D4F:06E8
loc_1c1ba:
	// 5937 
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0006ea; 	X(MOV(*(dw*)(((db*)&word_1bbec)), 0x0FFFF));	// 32754 mov     cs:word_1BBEC, 0FFFFh ;~ 0D4F:06EA
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0006f1; 	X(MOV(*(dw*)(((db*)&word_1bbe4)), ax));	// 32755 mov     cs:word_1BBE4, ax ;~ 0D4F:06F1
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0006f5; 	X(MOV(*(dw*)(((db*)&word_1bbe6)), dx));	// 32756 mov     cs:word_1BBE6, dx ;~ 0D4F:06F5
cs=0xd4f;eip=0x0006fa; 	X(PUSH(ax));	// 32757 push    ax ;~ 0D4F:06FA
cs=0xd4f;eip=0x0006fb; 	X(PUSH(cs));	// 32758 push    cs ;~ 0D4F:06FB
cs=0xd4f;eip=0x0006fc; 	J(CALL(sub_1c0e0,0));	// 32759 call    near ptr sub_1C0E0 ;~ 0D4F:06FC
cs=0xd4f;eip=0x0006ff; 	T(ADD(sp, 2));	// 32760 add     sp, 2 ;~ 0D4F:06FF
cs=0xd4f;eip=0x000702; 	X(PUSH(cs));	// 32761 push    cs ;~ 0D4F:0702
cs=0xd4f;eip=0x000703; 	X(POP(es));	// 32762 pop     es ;~ 0D4F:0703
cs=0xd4f;eip=0x000704; 	T(MOV(di, 0x8C));	// 32764 mov     di, 8Ch ; 'Œ' ;~ 0D4F:0704
cs=0xd4f;eip=0x000707; 	T(MOV(cx, 0x22));	// 32765 mov     cx, 22h ; '"' ;~ 0D4F:0707
cs=0xd4f;eip=0x00070a; 	T(MOV(ax, 0));	// 32766 mov     ax, 0 ;~ 0D4F:070A
	// 32767 rep stosw ;~ 0D4F:070D
cs=0xd4f;eip=0x00070d; 	X(	REP STOSW);	// 32767 rep stosw ;~ 0D4F:070D
loc_1c1df:
	// 5938 
cs=0xd4f;eip=0x00070f; 	T(OR(bh, 0));	// 32771 or      bh, 0 ;~ 0D4F:070F
seg002_712_proc:
	// 32774 
cs=0xd4f;eip=0x000712; 	X(PUSH(cs));	// 32774 push    cs ;~ 0D4F:0712
cs=0xd4f;eip=0x000713; 	J(CALL(_group2,m2c::kloc_1c1df));	// 32775 call    near ptr loc_1C1DF+1 ;~ 0D4F:0713
cs=0xd4f;eip=0x000716; 	X(POP(di));	// 32776 pop     di ;~ 0D4F:0716
cs=0xd4f;eip=0x000717; 	X(POP(si));	// 32777 pop     si ;~ 0D4F:0717
cs=0xd4f;eip=0x000718; 	X(POP(ds));	// 32778 pop     ds ;~ 0D4F:0718
cs=0xd4f;eip=0x000719; 	R(RETF(0));	// 32779 retf ;~ 0D4F:0719
sub_1c1ea:
	// 32784 
cs=0xd4f;eip=0x00071a; 	X(PUSH(ds));	// 32785 push    ds ;~ 0D4F:071A
ret_d4f_71b:
	// 5939 
cs=0xd4f;eip=0x00071b; 	X(PUSH(si));	// 32786 push    si ;~ 0D4F:071B
cs=0xd4f;eip=0x00071c; 	X(PUSH(di));	// 32787 push    di ;~ 0D4F:071C
cs=0xd4f;eip=0x00071d; 	X(PUSHF);	// 32788 pushf ;~ 0D4F:071D
cs=0xd4f;eip=0x00071e; 	T(CLI);	// 32789 cli ;~ 0D4F:071E
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00071f; 	X(MOV(*(dw*)(((db*)&word_1bad0)), 0));	// 32790 mov     cs:word_1BAD0, 0 ;~ 0D4F:071F
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000726; 	X(MOV(*(dw*)(((db*)&word_1bad2)), 0));	// 32791 mov     cs:word_1BAD2, 0 ;~ 0D4F:0726
cs=0xd4f;eip=0x00072d; 	T(CLD);	// 32792 cld ;~ 0D4F:072D
cs=0xd4f;eip=0x00072e; 	T(MOV(ax, cs));	// 32793 mov     ax, cs ;~ 0D4F:072E
cs=0xd4f;eip=0x000730; 	T(MOV(es, ax));	// 32794 mov     es, ax ;~ 0D4F:0730
cs=0xd4f;eip=0x000732; 	T(MOV(di, 0x124));	// 32795 mov     di, 124h ;~ 0D4F:0732
cs=0xd4f;eip=0x000735; 	T(MOV(cx, 0x20));	// 32796 mov     cx, 20h ; ' ' ;~ 0D4F:0735
cs=0xd4f;eip=0x000738; 	T(MOV(ax, 0));	// 32797 mov     ax, 0 ;~ 0D4F:0738
	// 32798 rep stosw ;~ 0D4F:073B
cs=0xd4f;eip=0x00073b; 	X(	REP STOSW);	// 32798 rep stosw ;~ 0D4F:073B
cs=0xd4f;eip=0x00073d; 	T(MOV(di, 0x164));	// 32799 mov     di, 164h ;~ 0D4F:073D
cs=0xd4f;eip=0x000740; 	T(MOV(cx, 0x10));	// 32800 mov     cx, 10h ;~ 0D4F:0740
cs=0xd4f;eip=0x000743; 	T(MOV(ax, 0x0FFFF));	// 32801 mov     ax, 0FFFFh ;~ 0D4F:0743
	// 32802 rep stosw ;~ 0D4F:0746
cs=0xd4f;eip=0x000746; 	X(	REP STOSW);	// 32802 rep stosw ;~ 0D4F:0746
cs=0xd4f;eip=0x000748; 	T(MOV(di, 0x184));	// 32803 mov     di, 184h ;~ 0D4F:0748
cs=0xd4f;eip=0x00074b; 	T(MOV(cx, 0x10));	// 32804 mov     cx, 10h ;~ 0D4F:074B
cs=0xd4f;eip=0x00074e; 	T(MOV(ax, 0));	// 32805 mov     ax, 0 ;~ 0D4F:074E
	// 32806 rep stosw ;~ 0D4F:0751
cs=0xd4f;eip=0x000751; 	X(	REP STOSW);	// 32806 rep stosw ;~ 0D4F:0751
loc_1c223:
	// 5940 
cs=0xd4f;eip=0x000753; 	T(OR(bh, 0));	// 32809 or      bh, 0 ;~ 0D4F:0753
seg002_756_proc:
	// 32812 
cs=0xd4f;eip=0x000756; 	X(PUSH(cs));	// 32812 push    cs ;~ 0D4F:0756
cs=0xd4f;eip=0x000757; 	J(CALL(_group2,m2c::kloc_1c223));	// 32813 call    near ptr loc_1C223+1 ;~ 0D4F:0757
cs=0xd4f;eip=0x00075a; 	X(POP(di));	// 32814 pop     di ;~ 0D4F:075A
cs=0xd4f;eip=0x00075b; 	X(POP(si));	// 32815 pop     si ;~ 0D4F:075B
cs=0xd4f;eip=0x00075c; 	X(POP(ds));	// 32816 pop     ds ;~ 0D4F:075C
cs=0xd4f;eip=0x00075d; 	R(RETF(0));	// 32817 retf ;~ 0D4F:075D
sub_1c22e:
	// 32823 
#undef arg_2
#define arg_2 6
	// 32825 arg_2           = word ptr  6 ;~ 0D4F:075E
#undef arg_4
#define arg_4 8
	// 32826 arg_4           = word ptr  8 ;~ 0D4F:075E
ret_d4f_75e:
	// 5941 
cs=0xd4f;eip=0x00075e; 	X(PUSH(bp));	// 32828 push    bp ;~ 0D4F:075E
cs=0xd4f;eip=0x00075f; 	T(MOV(bp, sp));	// 32829 mov     bp, sp ;~ 0D4F:075F
cs=0xd4f;eip=0x000761; 	X(PUSH(ds));	// 32830 push    ds ;~ 0D4F:0761
cs=0xd4f;eip=0x000762; 	X(PUSH(si));	// 32831 push    si ;~ 0D4F:0762
cs=0xd4f;eip=0x000763; 	X(PUSH(di));	// 32832 push    di ;~ 0D4F:0763
cs=0xd4f;eip=0x000764; 	X(PUSHF);	// 32833 pushf ;~ 0D4F:0764
cs=0xd4f;eip=0x000765; 	T(CLI);	// 32834 cli ;~ 0D4F:0765
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000766; 	X(MOV(*(dw*)(((db*)&word_1bc78)), 0));	// 32835 mov     cs:word_1BC78, 0 ;~ 0D4F:0766
loc_1c23d:
	// 5942 
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00076d; 	T(MOV(si, *(dw*)(((db*)&word_1bc78))));	// 32838 mov     si, cs:word_1BC78 ;~ 0D4F:076D
cs=0xd4f;eip=0x000772; 	T(SHL(si, 1));	// 32839 shl     si, 1 ;~ 0D4F:0772
cs=0xd4f;eip=0x000774; 	T(MOV(dx, *(dw*)(raddr(cs,si+0x164))));	// 32840 mov     dx, cs:[si+164h] ;~ 0D4F:0774
cs=0xd4f;eip=0x000779; 	T(SHL(si, 1));	// 32841 shl     si, 1 ;~ 0D4F:0779
cs=0xd4f;eip=0x00077b; 	T(MOV(ax, *(dw*)(raddr(cs,si+0x124))));	// 32842 mov     ax, cs:[si+124h] ;~ 0D4F:077B
cs=0xd4f;eip=0x000780; 	T(OR(ax, *(dw*)(raddr(cs,si+0x126))));	// 32843 or      ax, cs:[si+126h] ;~ 0D4F:0780
cs=0xd4f;eip=0x000785; 	J(JZ(loc_1c276));	// 32844 jz      short loc_1C276 ;~ 0D4F:0785
cs=0xd4f;eip=0x000787; 	T(CMP(dx, 0x0FFFF));	// 32845 cmp     dx, 0FFFFh ;~ 0D4F:0787
cs=0xd4f;eip=0x00078a; 	J(JZ(loc_1c264));	// 32846 jz      short loc_1C264 ;~ 0D4F:078A
cs=0xd4f;eip=0x00078c; 	X(PUSH(dx));	// 32847 push    dx ;~ 0D4F:078C
cs=0xd4f;eip=0x00078d; 	X(PUSH(cs));	// 32848 push    cs ;~ 0D4F:078D
cs=0xd4f;eip=0x00078e; 	J(CALL(sub_1c35e,0));	// 32849 call    sub_1C35E ;~ 0D4F:078E
cs=0xd4f;eip=0x000791; 	T(ADD(sp, 2));	// 32850 add     sp, 2 ;~ 0D4F:0791
loc_1c264:
	// 5943 
cs=0xd4f;eip=0x000794; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 32853 push    [bp+arg_4] ;~ 0D4F:0794
cs=0xd4f;eip=0x000797; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 32854 push    [bp+arg_2] ;~ 0D4F:0797
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00079a; 	X(PUSH(*(dw*)(((db*)&word_1bc78))));	// 32855 push    cs:word_1BC78 ;~ 0D4F:079A
cs=0xd4f;eip=0x00079f; 	X(PUSH(cs));	// 32856 push    cs ;~ 0D4F:079F
cs=0xd4f;eip=0x0007a0; 	J(CALL(sub_1c6d0,0));	// 32857 call    near ptr sub_1C6D0 ;~ 0D4F:07A0
cs=0xd4f;eip=0x0007a3; 	T(ADD(sp, 6));	// 32858 add     sp, 6 ;~ 0D4F:07A3
loc_1c276:
	// 5944 
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0007a6; 	X(INC(*(dw*)(((db*)&word_1bc78))));	// 32861 inc     cs:word_1BC78 ;~ 0D4F:07A6
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0007ab; 	T(CMP(*(dw*)(((db*)&word_1bc78)), 0x10));	// 32862 cmp     cs:word_1BC78, 10h ;~ 0D4F:07AB
cs=0xd4f;eip=0x0007b1; 	J(JNZ(loc_1c23d));	// 32863 jnz     short loc_1C23D ;~ 0D4F:07B1
cs=0xd4f;eip=0x0007b3; 	X(PUSH(cs));	// 32864 push    cs ;~ 0D4F:07B3
cs=0xd4f;eip=0x0007b4; 	J(CALL(sub_1c3a7,0));	// 32865 call    sub_1C3A7 ;~ 0D4F:07B4
loc_1c287:
	// 5945 
cs=0xd4f;eip=0x0007b7; 	T(OR(bh, 0));	// 32868 or      bh, 0 ;~ 0D4F:07B7
seg002_7ba_proc:
	// 32871 
cs=0xd4f;eip=0x0007ba; 	X(PUSH(cs));	// 32871 push    cs ;~ 0D4F:07BA
cs=0xd4f;eip=0x0007bb; 	J(CALL(_group2,m2c::kloc_1c287));	// 32872 call    near ptr loc_1C287+1 ;~ 0D4F:07BB
cs=0xd4f;eip=0x0007be; 	X(POP(di));	// 32873 pop     di ;~ 0D4F:07BE
cs=0xd4f;eip=0x0007bf; 	X(POP(si));	// 32874 pop     si ;~ 0D4F:07BF
cs=0xd4f;eip=0x0007c0; 	X(POP(ds));	// 32875 pop     ds ;~ 0D4F:07C0
cs=0xd4f;eip=0x0007c1; 	X(POP(bp));	// 32876 pop     bp ;~ 0D4F:07C1
cs=0xd4f;eip=0x0007c2; 	R(RETF(0));	// 32877 retf ;~ 0D4F:07C2
sub_1c293:
	// 32883 
#undef arg_2
#define arg_2 6
	// 32886 arg_2           = dword ptr  6 ;~ 0D4F:07C3
ret_d4f_7c3:
	// 5946 
cs=0xd4f;eip=0x0007c3; 	X(PUSH(bp));	// 32888 push    bp ;~ 0D4F:07C3
cs=0xd4f;eip=0x0007c4; 	T(MOV(bp, sp));	// 32889 mov     bp, sp ;~ 0D4F:07C4
cs=0xd4f;eip=0x0007c6; 	X(PUSH(ds));	// 32890 push    ds ;~ 0D4F:07C6
cs=0xd4f;eip=0x0007c7; 	X(PUSH(si));	// 32891 push    si ;~ 0D4F:07C7
cs=0xd4f;eip=0x0007c8; 	X(PUSH(di));	// 32892 push    di ;~ 0D4F:07C8
cs=0xd4f;eip=0x0007c9; 	X(PUSHF);	// 32893 pushf ;~ 0D4F:07C9
cs=0xd4f;eip=0x0007ca; 	T(CLI);	// 32894 cli ;~ 0D4F:07CA
cs=0xd4f;eip=0x0007cb; 	T(MOV(cx, ds));	// 32895 mov     cx, ds ;~ 0D4F:07CB
cs=0xd4f;eip=0x0007cd; 	T(MOV(bx, 0));	// 32896 mov     bx, 0 ;~ 0D4F:07CD
loc_1c2a0:
	// 5947 
cs=0xd4f;eip=0x0007d0; 	T(CMP(*(dw*)(raddr(cs,bx+0x6A)), 0));	// 32899 cmp     word ptr cs:[bx+6Ah], 0 ;~ 0D4F:07D0
cs=0xd4f;eip=0x0007d6; 	J(JZ(loc_1c2b6));	// 32900 jz      short loc_1C2B6 ;~ 0D4F:07D6
cs=0xd4f;eip=0x0007d8; 	T(ADD(bx, 2));	// 32901 add     bx, 2 ;~ 0D4F:07D8
cs=0xd4f;eip=0x0007db; 	T(CMP(bx, 0x20));	// 32902 cmp     bx, 20h ; ' ' ;~ 0D4F:07DB
cs=0xd4f;eip=0x0007de; 	J(JC(loc_1c2a0));	// 32903 jb      short loc_1C2A0 ;~ 0D4F:07DE
cs=0xd4f;eip=0x0007e0; 	T(MOV(ax, 0x0FFFF));	// 32904 mov     ax, 0FFFFh ;~ 0D4F:07E0
cs=0xd4f;eip=0x0007e3; 	J(JMP(loc_1c352));	// 32905 jmp     loc_1C352 ;~ 0D4F:07E3
loc_1c2b6:
	// 5948 
cs=0xd4f;eip=0x0007e6; 	T(MOV(ax, bx));	// 32909 mov     ax, bx ;~ 0D4F:07E6
cs=0xd4f;eip=0x0007e8; 	T(SHR(ax, 1));	// 32910 shr     ax, 1 ;~ 0D4F:07E8
cs=0xd4f;eip=0x0007ea; 	X(MOV(*(dw*)(raddr(cs,bx+0x6A)), 1));	// 32911 mov     word ptr cs:[bx+6Ah], 1 ;~ 0D4F:07EA
cs=0xd4f;eip=0x0007f1; 	X(MOV(*(dw*)(raddr(cs,bx+0x48)), cx));	// 32912 mov     cs:[bx+48h], cx ;~ 0D4F:07F1
cs=0xd4f;eip=0x0007f6; 	T(SHL(bx, 1));	// 32913 shl     bx, 1 ;~ 0D4F:07F6
cs=0xd4f;eip=0x0007f8; 	T(LDS(si, *(dd*)(raddr(ss,bp+arg_2))));	// 32914 lds     si, [bp+arg_2] ;~ 0D4F:07F8
cs=0xd4f;eip=0x0007fb; 	X(MOV(*(dw*)(raddr(cs,bx+4)), si));	// 32915 mov     cs:[bx+4], si ;~ 0D4F:07FB
cs=0xd4f;eip=0x000800; 	X(MOV(*(dw*)(raddr(cs,bx+6)), ds));	// 32916 mov     word ptr cs:[bx+6], ds ;~ 0D4F:0800
cs=0xd4f;eip=0x000805; 	X(MOV(*(dw*)(raddr(cs,bx+0x0D0)), 0x0FFFF));	// 32917 mov     word ptr cs:[bx+0D0h], 0FFFFh ;~ 0D4F:0805
cs=0xd4f;eip=0x00080c; 	X(MOV(*(dw*)(raddr(cs,bx+0x0D2)), 0x0FFFF));	// 32918 mov     word ptr cs:[bx+0D2h], 0FFFFh ;~ 0D4F:080C
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000813; 	X(INC(*(dw*)(((db*)&word_1bad0))));	// 32919 inc     cs:word_1BAD0 ;~ 0D4F:0813
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000818; 	T(CMP(*(dw*)(((db*)&word_1bad0)), 1));	// 32920 cmp     cs:word_1BAD0, 1 ;~ 0D4F:0818
cs=0xd4f;eip=0x00081e; 	J(JNZ(loc_1c352));	// 32921 jnz     short loc_1C352 ;~ 0D4F:081E
cs=0xd4f;eip=0x000820; 	X(PUSH(ax));	// 32922 push    ax ;~ 0D4F:0820
cs=0xd4f;eip=0x000821; 	X(PUSH(cs));	// 32923 push    cs ;~ 0D4F:0821
cs=0xd4f;eip=0x000822; 	J(CALL(sub_1bff8,0));	// 32924 call    sub_1BFF8 ;~ 0D4F:0822
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000825; 	X(MOV(*(dw*)(((db*)&word_1bb5a)), 1));	// 32925 mov     cs:word_1BB5A, 1 ;~ 0D4F:0825
cs=0xd4f;eip=0x00082c; 	X(PUSH(cs));	// 32926 push    cs ;~ 0D4F:082C
cs=0xd4f;eip=0x00082d; 	J(CALL(sub_1c03b,0));	// 32927 call    sub_1C03B ;~ 0D4F:082D
cs=0xd4f;eip=0x000830; 	X(PUSH(ax));	// 32928 push    ax ;~ 0D4F:0830
cs=0xd4f;eip=0x000831; 	X(PUSH(bp));	// 32929 push    bp ;~ 0D4F:0831
cs=0xd4f;eip=0x000832; 	T(MOV(bp, sp));	// 32930 mov     bp, sp ;~ 0D4F:0832
cs=0xd4f;eip=0x000834; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0));	// 32931 mov     word ptr [bp+2], 0 ;~ 0D4F:0834
cs=0xd4f;eip=0x000839; 	X(POP(bp));	// 32932 pop     bp ;~ 0D4F:0839
cs=0xd4f;eip=0x00083a; 	X(PUSH(ax));	// 32933 push    ax ;~ 0D4F:083A
cs=0xd4f;eip=0x00083b; 	X(PUSH(bp));	// 32934 push    bp ;~ 0D4F:083B
cs=0xd4f;eip=0x00083c; 	T(MOV(bp, sp));	// 32935 mov     bp, sp ;~ 0D4F:083C
cs=0xd4f;eip=0x00083e; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0x0D68D));	// 32936 mov     word ptr [bp+2], 0D68Dh ;~ 0D4F:083E
cs=0xd4f;eip=0x000843; 	X(POP(bp));	// 32937 pop     bp ;~ 0D4F:0843
cs=0xd4f;eip=0x000844; 	X(PUSH(ax));	// 32938 push    ax ;~ 0D4F:0844
cs=0xd4f;eip=0x000845; 	X(PUSH(bp));	// 32939 push    bp ;~ 0D4F:0845
cs=0xd4f;eip=0x000846; 	T(MOV(bp, sp));	// 32940 mov     bp, sp ;~ 0D4F:0846
cs=0xd4f;eip=0x000848; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0x10));	// 32941 mov     word ptr [bp+2], 10h ;~ 0D4F:0848
cs=0xd4f;eip=0x00084d; 	X(POP(bp));	// 32942 pop     bp ;~ 0D4F:084D
cs=0xd4f;eip=0x00084e; 	X(PUSH(cs));	// 32943 push    cs ;~ 0D4F:084E
cs=0xd4f;eip=0x00084f; 	J(CALL(sub_1c451,0));	// 32944 call    sub_1C451 ;~ 0D4F:084F
cs=0xd4f;eip=0x000852; 	T(ADD(sp, 6));	// 32945 add     sp, 6 ;~ 0D4F:0852
cs=0xd4f;eip=0x000855; 	X(PUSH(ax));	// 32946 push    ax ;~ 0D4F:0855
cs=0xd4f;eip=0x000856; 	X(PUSH(bp));	// 32947 push    bp ;~ 0D4F:0856
cs=0xd4f;eip=0x000857; 	T(MOV(bp, sp));	// 32948 mov     bp, sp ;~ 0D4F:0857
cs=0xd4f;eip=0x000859; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0x10));	// 32949 mov     word ptr [bp+2], 10h ;~ 0D4F:0859
cs=0xd4f;eip=0x00085e; 	X(POP(bp));	// 32950 pop     bp ;~ 0D4F:085E
cs=0xd4f;eip=0x00085f; 	X(PUSH(cs));	// 32951 push    cs ;~ 0D4F:085F
cs=0xd4f;eip=0x000860; 	J(CALL(sub_1c3c5,0));	// 32952 call    sub_1C3C5 ;~ 0D4F:0860
cs=0xd4f;eip=0x000863; 	T(ADD(sp, 2));	// 32953 add     sp, 2 ;~ 0D4F:0863
cs=0xd4f;eip=0x000866; 	X(POP(ax));	// 32954 pop     ax ;~ 0D4F:0866
cs=0xd4f;eip=0x000867; 	T(MOV(bx, ax));	// 32955 mov     bx, ax ;~ 0D4F:0867
cs=0xd4f;eip=0x000869; 	T(SHL(bx, 1));	// 32956 shl     bx, 1 ;~ 0D4F:0869
cs=0xd4f;eip=0x00086b; 	X(MOV(*(dw*)(raddr(cs,bx+0x6A)), 1));	// 32957 mov     word ptr cs:[bx+6Ah], 1 ;~ 0D4F:086B
cs=0xd4f;eip=0x000872; 	T(SHL(bx, 1));	// 32958 shl     bx, 1 ;~ 0D4F:0872
cs=0xd4f;eip=0x000874; 	X(MOV(*(dw*)(raddr(cs,bx+0x0D0)), 0x0FFFF));	// 32959 mov     word ptr cs:[bx+0D0h], 0FFFFh ;~ 0D4F:0874
cs=0xd4f;eip=0x00087b; 	X(MOV(*(dw*)(raddr(cs,bx+0x0D2)), 0x0FFFF));	// 32960 mov     word ptr cs:[bx+0D2h], 0FFFFh ;~ 0D4F:087B
loc_1c352:
	// 5949 
cs=0xd4f;eip=0x000882; 	T(OR(bh, 0));	// 32964 or      bh, 0 ;~ 0D4F:0882
seg002_885_proc:
	// 32967 
cs=0xd4f;eip=0x000885; 	X(PUSH(cs));	// 32967 push    cs ;~ 0D4F:0885
cs=0xd4f;eip=0x000886; 	J(CALL(_group2,m2c::kloc_1c352));	// 32968 call    near ptr loc_1C352+1 ;~ 0D4F:0886
cs=0xd4f;eip=0x000889; 	X(POP(di));	// 32969 pop     di ;~ 0D4F:0889
cs=0xd4f;eip=0x00088a; 	X(POP(si));	// 32970 pop     si ;~ 0D4F:088A
cs=0xd4f;eip=0x00088b; 	X(POP(ds));	// 32971 pop     ds ;~ 0D4F:088B
cs=0xd4f;eip=0x00088c; 	X(POP(bp));	// 32972 pop     bp ;~ 0D4F:088C
cs=0xd4f;eip=0x00088d; 	R(RETF(0));	// 32973 retf ;~ 0D4F:088D
sub_1c35e:
	// 32979 
#undef arg_2
#define arg_2 6
	// 32982 arg_2           = word ptr  6 ;~ 0D4F:088E
ret_d4f_88e:
	// 5950 
cs=0xd4f;eip=0x00088e; 	X(PUSH(bp));	// 32984 push    bp ;~ 0D4F:088E
cs=0xd4f;eip=0x00088f; 	T(MOV(bp, sp));	// 32985 mov     bp, sp ;~ 0D4F:088F
cs=0xd4f;eip=0x000891; 	X(PUSH(ds));	// 32986 push    ds ;~ 0D4F:0891
cs=0xd4f;eip=0x000892; 	X(PUSH(si));	// 32987 push    si ;~ 0D4F:0892
cs=0xd4f;eip=0x000893; 	X(PUSH(di));	// 32988 push    di ;~ 0D4F:0893
cs=0xd4f;eip=0x000894; 	X(PUSHF);	// 32989 pushf ;~ 0D4F:0894
cs=0xd4f;eip=0x000895; 	T(CLI);	// 32990 cli ;~ 0D4F:0895
cs=0xd4f;eip=0x000896; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 32991 mov     bx, [bp+arg_2] ;~ 0D4F:0896
cs=0xd4f;eip=0x000899; 	T(CMP(bx, 0x0FFFF));	// 32992 cmp     bx, 0FFFFh ;~ 0D4F:0899
cs=0xd4f;eip=0x00089c; 	J(JZ(loc_1c39b));	// 32993 jz      short loc_1C39B ;~ 0D4F:089C
cs=0xd4f;eip=0x00089e; 	T(SHL(bx, 1));	// 32994 shl     bx, 1 ;~ 0D4F:089E
cs=0xd4f;eip=0x0008a0; 	T(CMP(*(dw*)(raddr(cs,bx+0x6A)), 0));	// 32995 cmp     word ptr cs:[bx+6Ah], 0 ;~ 0D4F:08A0
cs=0xd4f;eip=0x0008a6; 	J(JZ(loc_1c39b));	// 32996 jz      short loc_1C39B ;~ 0D4F:08A6
cs=0xd4f;eip=0x0008a8; 	X(MOV(*(dw*)(raddr(cs,bx+0x6A)), 0));	// 32997 mov     word ptr cs:[bx+6Ah], 0 ;~ 0D4F:08A8
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0008af; 	X(DEC(*(dw*)(((db*)&word_1bad0))));	// 32998 dec     cs:word_1BAD0 ;~ 0D4F:08AF
cs=0xd4f;eip=0x0008b4; 	J(JNZ(loc_1c39b));	// 32999 jnz     short loc_1C39B ;~ 0D4F:08B4
cs=0xd4f;eip=0x0008b6; 	X(PUSH(ax));	// 33000 push    ax ;~ 0D4F:08B6
cs=0xd4f;eip=0x0008b7; 	X(PUSH(bp));	// 33001 push    bp ;~ 0D4F:08B7
cs=0xd4f;eip=0x0008b8; 	T(MOV(bp, sp));	// 33002 mov     bp, sp ;~ 0D4F:08B8
cs=0xd4f;eip=0x0008ba; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0));	// 33003 mov     word ptr [bp+2], 0 ;~ 0D4F:08BA
cs=0xd4f;eip=0x0008bf; 	X(POP(bp));	// 33004 pop     bp ;~ 0D4F:08BF
cs=0xd4f;eip=0x0008c0; 	X(PUSH(cs));	// 33005 push    cs ;~ 0D4F:08C0
cs=0xd4f;eip=0x0008c1; 	J(CALL(sub_1c0b7,0));	// 33006 call    sub_1C0B7 ;~ 0D4F:08C1
cs=0xd4f;eip=0x0008c4; 	T(ADD(sp, 2));	// 33007 add     sp, 2 ;~ 0D4F:08C4
cs=0xd4f;eip=0x0008c7; 	X(PUSH(cs));	// 33008 push    cs ;~ 0D4F:08C7
cs=0xd4f;eip=0x0008c8; 	J(CALL(sub_1c087,0));	// 33009 call    sub_1C087 ;~ 0D4F:08C8
loc_1c39b:
	// 5951 
cs=0xd4f;eip=0x0008cb; 	T(OR(bh, 0));	// 33013 or      bh, 0 ;~ 0D4F:08CB
seg002_8ce_proc:
	// 33016 
cs=0xd4f;eip=0x0008ce; 	X(PUSH(cs));	// 33016 push    cs ;~ 0D4F:08CE
cs=0xd4f;eip=0x0008cf; 	J(CALL(_group2,m2c::kloc_1c39b));	// 33017 call    near ptr loc_1C39B+1 ;~ 0D4F:08CF
cs=0xd4f;eip=0x0008d2; 	X(POP(di));	// 33018 pop     di ;~ 0D4F:08D2
cs=0xd4f;eip=0x0008d3; 	X(POP(si));	// 33019 pop     si ;~ 0D4F:08D3
cs=0xd4f;eip=0x0008d4; 	X(POP(ds));	// 33020 pop     ds ;~ 0D4F:08D4
cs=0xd4f;eip=0x0008d5; 	X(POP(bp));	// 33021 pop     bp ;~ 0D4F:08D5
cs=0xd4f;eip=0x0008d6; 	R(RETF(0));	// 33022 retf ;~ 0D4F:08D6
sub_1c3a7:
	// 33027 
cs=0xd4f;eip=0x0008d7; 	X(PUSH(ds));	// 33028 push    ds ;~ 0D4F:08D7
ret_d4f_8d8:
	// 5952 
cs=0xd4f;eip=0x0008d8; 	X(PUSH(si));	// 33029 push    si ;~ 0D4F:08D8
cs=0xd4f;eip=0x0008d9; 	X(PUSH(di));	// 33030 push    di ;~ 0D4F:08D9
cs=0xd4f;eip=0x0008da; 	X(PUSHF);	// 33031 pushf ;~ 0D4F:08DA
cs=0xd4f;eip=0x0008db; 	T(CLI);	// 33032 cli ;~ 0D4F:08DB
cs=0xd4f;eip=0x0008dc; 	T(MOV(si, 0x0F));	// 33033 mov     si, 0Fh ;~ 0D4F:08DC
loc_1c3af:
	// 5953 
cs=0xd4f;eip=0x0008df; 	X(PUSH(si));	// 33036 push    si ;~ 0D4F:08DF
cs=0xd4f;eip=0x0008e0; 	X(PUSH(cs));	// 33037 push    cs ;~ 0D4F:08E0
cs=0xd4f;eip=0x0008e1; 	J(CALL(sub_1c35e,0));	// 33038 call    sub_1C35E ;~ 0D4F:08E1
cs=0xd4f;eip=0x0008e4; 	T(ADD(sp, 2));	// 33039 add     sp, 2 ;~ 0D4F:08E4
cs=0xd4f;eip=0x0008e7; 	T(DEC(si));	// 33040 dec     si ;~ 0D4F:08E7
cs=0xd4f;eip=0x0008e8; 	J(JGE(loc_1c3af));	// 33041 jge     short loc_1C3AF ;~ 0D4F:08E8
loc_1c3ba:
	// 5954 
cs=0xd4f;eip=0x0008ea; 	T(OR(bh, 0));	// 33044 or      bh, 0 ;~ 0D4F:08EA
seg002_8ed_proc:
	// 33047 
cs=0xd4f;eip=0x0008ed; 	X(PUSH(cs));	// 33047 push    cs ;~ 0D4F:08ED
cs=0xd4f;eip=0x0008ee; 	J(CALL(_group2,m2c::kloc_1c3ba));	// 33048 call    near ptr loc_1C3BA+1 ;~ 0D4F:08EE
cs=0xd4f;eip=0x0008f1; 	X(POP(di));	// 33049 pop     di ;~ 0D4F:08F1
cs=0xd4f;eip=0x0008f2; 	X(POP(si));	// 33050 pop     si ;~ 0D4F:08F2
cs=0xd4f;eip=0x0008f3; 	X(POP(ds));	// 33051 pop     ds ;~ 0D4F:08F3
cs=0xd4f;eip=0x0008f4; 	R(RETF(0));	// 33052 retf ;~ 0D4F:08F4
sub_1c3c5:
	// 33058 
#undef arg_2
#define arg_2 6
	// 33061 arg_2           = word ptr  6 ;~ 0D4F:08F5
ret_d4f_8f5:
	// 5955 
cs=0xd4f;eip=0x0008f5; 	X(PUSH(bp));	// 33063 push    bp ;~ 0D4F:08F5
cs=0xd4f;eip=0x0008f6; 	T(MOV(bp, sp));	// 33064 mov     bp, sp ;~ 0D4F:08F6
cs=0xd4f;eip=0x0008f8; 	X(PUSH(ds));	// 33065 push    ds ;~ 0D4F:08F8
cs=0xd4f;eip=0x0008f9; 	X(PUSH(si));	// 33066 push    si ;~ 0D4F:08F9
cs=0xd4f;eip=0x0008fa; 	X(PUSH(di));	// 33067 push    di ;~ 0D4F:08FA
cs=0xd4f;eip=0x0008fb; 	X(PUSHF);	// 33068 pushf ;~ 0D4F:08FB
cs=0xd4f;eip=0x0008fc; 	T(CLI);	// 33069 cli ;~ 0D4F:08FC
cs=0xd4f;eip=0x0008fd; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 33070 mov     bx, [bp+arg_2] ;~ 0D4F:08FD
cs=0xd4f;eip=0x000900; 	T(SHL(bx, 1));	// 33071 shl     bx, 1 ;~ 0D4F:0900
cs=0xd4f;eip=0x000902; 	T(CMP(*(dw*)(raddr(cs,bx+0x6A)), 1));	// 33072 cmp     word ptr cs:[bx+6Ah], 1 ;~ 0D4F:0902
cs=0xd4f;eip=0x000908; 	J(JNZ(loc_1c3e1));	// 33073 jnz     short loc_1C3E1 ;~ 0D4F:0908
cs=0xd4f;eip=0x00090a; 	X(MOV(*(dw*)(raddr(cs,bx+0x6A)), 2));	// 33074 mov     word ptr cs:[bx+6Ah], 2 ;~ 0D4F:090A
loc_1c3e1:
	// 5956 
cs=0xd4f;eip=0x000911; 	T(OR(bh, 0));	// 33078 or      bh, 0 ;~ 0D4F:0911
seg002_914_proc:
	// 33081 
cs=0xd4f;eip=0x000914; 	X(PUSH(cs));	// 33081 push    cs ;~ 0D4F:0914
cs=0xd4f;eip=0x000915; 	J(CALL(_group2,m2c::kloc_1c3e1));	// 33082 call    near ptr loc_1C3E1+1 ;~ 0D4F:0915
cs=0xd4f;eip=0x000918; 	X(POP(di));	// 33083 pop     di ;~ 0D4F:0918
cs=0xd4f;eip=0x000919; 	X(POP(si));	// 33084 pop     si ;~ 0D4F:0919
cs=0xd4f;eip=0x00091a; 	X(POP(ds));	// 33085 pop     ds ;~ 0D4F:091A
cs=0xd4f;eip=0x00091b; 	X(POP(bp));	// 33086 pop     bp ;~ 0D4F:091B
cs=0xd4f;eip=0x00091c; 	R(RETF(0));	// 33087 retf ;~ 0D4F:091C
sub_1c40b:
	// 33097 
#undef arg_0
#define arg_0 6
	// 33099 arg_0           = word ptr  6 ;~ 0D4F:093B
ret_d4f_93b:
	// 5957 
cs=0xd4f;eip=0x00093b; 	X(PUSH(bp));	// 33101 push    bp ;~ 0D4F:093B
cs=0xd4f;eip=0x00093c; 	T(MOV(bp, sp));	// 33102 mov     bp, sp ;~ 0D4F:093C
cs=0xd4f;eip=0x00093e; 	X(PUSH(ds));	// 33103 push    ds ;~ 0D4F:093E
cs=0xd4f;eip=0x00093f; 	X(PUSH(si));	// 33104 push    si ;~ 0D4F:093F
cs=0xd4f;eip=0x000940; 	X(PUSH(di));	// 33105 push    di ;~ 0D4F:0940
cs=0xd4f;eip=0x000941; 	X(PUSHF);	// 33106 pushf ;~ 0D4F:0941
cs=0xd4f;eip=0x000942; 	T(CLI);	// 33107 cli ;~ 0D4F:0942
cs=0xd4f;eip=0x000943; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 33108 mov     bx, [bp+arg_0] ;~ 0D4F:0943
cs=0xd4f;eip=0x000946; 	T(SHL(bx, 1));	// 33109 shl     bx, 1 ;~ 0D4F:0946
cs=0xd4f;eip=0x000948; 	T(CMP(*(dw*)(raddr(cs,bx+0x6A)), 2));	// 33110 cmp     word ptr cs:[bx+6Ah], 2 ;~ 0D4F:0948
cs=0xd4f;eip=0x00094e; 	J(JNZ(loc_1c427));	// 33111 jnz     short loc_1C427 ;~ 0D4F:094E
cs=0xd4f;eip=0x000950; 	X(MOV(*(dw*)(raddr(cs,bx+0x6A)), 1));	// 33112 mov     word ptr cs:[bx+6Ah], 1 ;~ 0D4F:0950
loc_1c427:
	// 5958 
cs=0xd4f;eip=0x000957; 	T(OR(bh, 0));	// 33116 or      bh, 0 ;~ 0D4F:0957
cs=0xd4f;eip=0x00095a; 	X(PUSH(cs));	// 33117 push    cs ;~ 0D4F:095A
cs=0xd4f;eip=0x00095b; 	J(CALL(_group2,m2c::kloc_1c427));	// 33118 call    near ptr loc_1C427+1 ;~ 0D4F:095B
cs=0xd4f;eip=0x00095e; 	X(POP(di));	// 33119 pop     di ;~ 0D4F:095E
cs=0xd4f;eip=0x00095f; 	X(POP(si));	// 33120 pop     si ;~ 0D4F:095F
cs=0xd4f;eip=0x000960; 	X(POP(ds));	// 33121 pop     ds ;~ 0D4F:0960
cs=0xd4f;eip=0x000961; 	X(POP(bp));	// 33122 pop     bp ;~ 0D4F:0961
cs=0xd4f;eip=0x000962; 	R(RETF(0));	// 33123 retf ;~ 0D4F:0962
sub_1c451:
	// 33135 
#undef arg_2
#define arg_2 6
	// 33138 arg_2           = word ptr  6 ;~ 0D4F:0981
#undef arg_4
#define arg_4 8
	// 33139 arg_4           = word ptr  8 ;~ 0D4F:0981
#undef arg_6
#define arg_6 0x0A
	// 33140 arg_6           = word ptr  0Ah ;~ 0D4F:0981
ret_d4f_981:
	// 5959 
cs=0xd4f;eip=0x000981; 	X(PUSH(bp));	// 33142 push    bp ;~ 0D4F:0981
cs=0xd4f;eip=0x000982; 	T(MOV(bp, sp));	// 33143 mov     bp, sp ;~ 0D4F:0982
cs=0xd4f;eip=0x000984; 	X(PUSH(ds));	// 33144 push    ds ;~ 0D4F:0984
cs=0xd4f;eip=0x000985; 	X(PUSH(si));	// 33145 push    si ;~ 0D4F:0985
cs=0xd4f;eip=0x000986; 	X(PUSH(di));	// 33146 push    di ;~ 0D4F:0986
cs=0xd4f;eip=0x000987; 	X(PUSHF);	// 33147 pushf ;~ 0D4F:0987
cs=0xd4f;eip=0x000988; 	T(CLI);	// 33148 cli ;~ 0D4F:0988
cs=0xd4f;eip=0x000989; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 33149 mov     bx, [bp+arg_2] ;~ 0D4F:0989
cs=0xd4f;eip=0x00098c; 	T(SHL(bx, 1));	// 33150 shl     bx, 1 ;~ 0D4F:098C
cs=0xd4f;eip=0x00098e; 	T(MOV(ax, *(dw*)(raddr(cs,bx+0x6A))));	// 33151 mov     ax, cs:[bx+6Ah] ;~ 0D4F:098E
cs=0xd4f;eip=0x000993; 	X(PUSH(ax));	// 33152 push    ax ;~ 0D4F:0993
cs=0xd4f;eip=0x000994; 	X(MOV(*(dw*)(raddr(cs,bx+0x6A)), 1));	// 33153 mov     word ptr cs:[bx+6Ah], 1 ;~ 0D4F:0994
cs=0xd4f;eip=0x00099b; 	T(SHL(bx, 1));	// 33154 shl     bx, 1 ;~ 0D4F:099B
cs=0xd4f;eip=0x00099d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 33155 mov     ax, [bp+arg_4] ;~ 0D4F:099D
cs=0xd4f;eip=0x0009a0; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 33156 mov     dx, [bp+arg_6] ;~ 0D4F:09A0
cs=0xd4f;eip=0x0009a3; 	X(MOV(*(dw*)(raddr(cs,bx+0x0D0)), ax));	// 33157 mov     cs:[bx+0D0h], ax ;~ 0D4F:09A3
cs=0xd4f;eip=0x0009a8; 	X(MOV(*(dw*)(raddr(cs,bx+0x0D2)), dx));	// 33158 mov     cs:[bx+0D2h], dx ;~ 0D4F:09A8
cs=0xd4f;eip=0x0009ad; 	X(MOV(*(dw*)(raddr(cs,bx+0x8C)), 0));	// 33159 mov     word ptr cs:[bx+8Ch], 0 ;~ 0D4F:09AD
cs=0xd4f;eip=0x0009b4; 	X(MOV(*(dw*)(raddr(cs,bx+0x8E)), 0));	// 33160 mov     word ptr cs:[bx+8Eh], 0 ;~ 0D4F:09B4
cs=0xd4f;eip=0x0009bb; 	X(PUSH(cs));	// 33161 push    cs ;~ 0D4F:09BB
cs=0xd4f;eip=0x0009bc; 	J(CALL(sub_1c155,0));	// 33162 call    sub_1C155 ;~ 0D4F:09BC
cs=0xd4f;eip=0x0009bf; 	X(POP(ax));	// 33163 pop     ax ;~ 0D4F:09BF
cs=0xd4f;eip=0x0009c0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 33164 mov     bx, [bp+arg_2] ;~ 0D4F:09C0
cs=0xd4f;eip=0x0009c3; 	T(SHL(bx, 1));	// 33165 shl     bx, 1 ;~ 0D4F:09C3
cs=0xd4f;eip=0x0009c5; 	X(MOV(*(dw*)(raddr(cs,bx+0x6A)), ax));	// 33166 mov     cs:[bx+6Ah], ax ;~ 0D4F:09C5
loc_1c49a:
	// 5960 
cs=0xd4f;eip=0x0009ca; 	T(OR(bh, 0));	// 33169 or      bh, 0 ;~ 0D4F:09CA
seg002_9cd_proc:
	// 33172 
cs=0xd4f;eip=0x0009cd; 	X(PUSH(cs));	// 33172 push    cs ;~ 0D4F:09CD
cs=0xd4f;eip=0x0009ce; 	J(CALL(_group2,m2c::kloc_1c49a));	// 33173 call    near ptr loc_1C49A+1 ;~ 0D4F:09CE
cs=0xd4f;eip=0x0009d1; 	X(POP(di));	// 33174 pop     di ;~ 0D4F:09D1
cs=0xd4f;eip=0x0009d2; 	X(POP(si));	// 33175 pop     si ;~ 0D4F:09D2
cs=0xd4f;eip=0x0009d3; 	X(POP(ds));	// 33176 pop     ds ;~ 0D4F:09D3
cs=0xd4f;eip=0x0009d4; 	X(POP(bp));	// 33177 pop     bp ;~ 0D4F:09D4
cs=0xd4f;eip=0x0009d5; 	R(RETF(0));	// 33178 retf ;~ 0D4F:09D5
sub_1c4a6:
	// 33184 
#undef arg_2
#define arg_2 6
	// 33187 arg_2           = word ptr  6 ;~ 0D4F:09D6
#undef arg_4
#define arg_4 8
	// 33188 arg_4           = word ptr  8 ;~ 0D4F:09D6
#undef arg_6
#define arg_6 0x0A
	// 33189 arg_6           = word ptr  0Ah ;~ 0D4F:09D6
ret_d4f_9d6:
	// 5961 
cs=0xd4f;eip=0x0009d6; 	X(PUSH(bp));	// 33191 push    bp ;~ 0D4F:09D6
cs=0xd4f;eip=0x0009d7; 	T(MOV(bp, sp));	// 33192 mov     bp, sp ;~ 0D4F:09D7
cs=0xd4f;eip=0x0009d9; 	X(PUSH(ds));	// 33193 push    ds ;~ 0D4F:09D9
cs=0xd4f;eip=0x0009da; 	X(PUSH(si));	// 33194 push    si ;~ 0D4F:09DA
cs=0xd4f;eip=0x0009db; 	X(PUSH(di));	// 33195 push    di ;~ 0D4F:09DB
cs=0xd4f;eip=0x0009dc; 	X(PUSHF);	// 33196 pushf ;~ 0D4F:09DC
cs=0xd4f;eip=0x0009dd; 	T(CLI);	// 33197 cli ;~ 0D4F:09DD
cs=0xd4f;eip=0x0009de; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 33198 push    [bp+arg_6] ;~ 0D4F:09DE
cs=0xd4f;eip=0x0009e1; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 33199 push    [bp+arg_4] ;~ 0D4F:09E1
cs=0xd4f;eip=0x0009e4; 	X(PUSH(ax));	// 33200 push    ax ;~ 0D4F:09E4
cs=0xd4f;eip=0x0009e5; 	X(PUSH(bp));	// 33201 push    bp ;~ 0D4F:09E5
cs=0xd4f;eip=0x0009e6; 	T(MOV(bp, sp));	// 33202 mov     bp, sp ;~ 0D4F:09E6
cs=0xd4f;eip=0x0009e8; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0x0F));	// 33203 mov     word ptr [bp+2], 0Fh ;~ 0D4F:09E8
cs=0xd4f;eip=0x0009ed; 	X(POP(bp));	// 33204 pop     bp ;~ 0D4F:09ED
cs=0xd4f;eip=0x0009ee; 	X(PUSH(ax));	// 33205 push    ax ;~ 0D4F:09EE
cs=0xd4f;eip=0x0009ef; 	X(PUSH(bp));	// 33206 push    bp ;~ 0D4F:09EF
cs=0xd4f;eip=0x0009f0; 	T(MOV(bp, sp));	// 33207 mov     bp, sp ;~ 0D4F:09F0
cs=0xd4f;eip=0x0009f2; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0x4240));	// 33208 mov     word ptr [bp+2], 4240h ;~ 0D4F:09F2
cs=0xd4f;eip=0x0009f7; 	X(POP(bp));	// 33209 pop     bp ;~ 0D4F:09F7
cs=0xd4f;eip=0x0009f8; 	X(PUSH(cs));	// 33210 push    cs ;~ 0D4F:09F8
cs=0xd4f;eip=0x0009f9; 	J(CALL(sub_1c10a,0));	// 33211 call    near ptr sub_1C10A ;~ 0D4F:09F9
cs=0xd4f;eip=0x0009fc; 	T(ADD(sp, 8));	// 33212 add     sp, 8 ;~ 0D4F:09FC
cs=0xd4f;eip=0x0009ff; 	X(PUSH(dx));	// 33213 push    dx ;~ 0D4F:09FF
cs=0xd4f;eip=0x000a00; 	X(PUSH(ax));	// 33214 push    ax ;~ 0D4F:0A00
cs=0xd4f;eip=0x000a01; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 33215 push    [bp+arg_2] ;~ 0D4F:0A01
cs=0xd4f;eip=0x000a04; 	X(PUSH(cs));	// 33216 push    cs ;~ 0D4F:0A04
cs=0xd4f;eip=0x000a05; 	J(CALL(sub_1c451,0));	// 33217 call    sub_1C451 ;~ 0D4F:0A05
cs=0xd4f;eip=0x000a08; 	T(ADD(sp, 6));	// 33218 add     sp, 6 ;~ 0D4F:0A08
loc_1c4db:
	// 5962 
cs=0xd4f;eip=0x000a0b; 	T(OR(bh, 0));	// 33221 or      bh, 0 ;~ 0D4F:0A0B
seg002_a0e_proc:
	// 33224 
cs=0xd4f;eip=0x000a0e; 	X(PUSH(cs));	// 33224 push    cs ;~ 0D4F:0A0E
cs=0xd4f;eip=0x000a0f; 	J(CALL(_group2,m2c::kloc_1c4db));	// 33225 call    near ptr loc_1C4DB+1 ;~ 0D4F:0A0F
cs=0xd4f;eip=0x000a12; 	X(POP(di));	// 33226 pop     di ;~ 0D4F:0A12
cs=0xd4f;eip=0x000a13; 	X(POP(si));	// 33227 pop     si ;~ 0D4F:0A13
cs=0xd4f;eip=0x000a14; 	X(POP(ds));	// 33228 pop     ds ;~ 0D4F:0A14
cs=0xd4f;eip=0x000a15; 	X(POP(bp));	// 33229 pop     bp ;~ 0D4F:0A15
cs=0xd4f;eip=0x000a16; 	R(RETF(0));	// 33230 retf ;~ 0D4F:0A16
ret_d4f_a17:
	// 5963 
cs=0xd4f;eip=0x000a17; 	X(PUSH(bp));	// 33232 push    bp ;~ 0D4F:0A17
cs=0xd4f;eip=0x000a18; 	T(MOV(bp, sp));	// 33233 mov     bp, sp ;~ 0D4F:0A18
cs=0xd4f;eip=0x000a1a; 	X(PUSH(ds));	// 33234 push    ds ;~ 0D4F:0A1A
cs=0xd4f;eip=0x000a1b; 	X(PUSH(si));	// 33235 push    si ;~ 0D4F:0A1B
cs=0xd4f;eip=0x000a1c; 	X(PUSH(di));	// 33236 push    di ;~ 0D4F:0A1C
cs=0xd4f;eip=0x000a1d; 	X(PUSHF);	// 33237 pushf ;~ 0D4F:0A1D
cs=0xd4f;eip=0x000a1e; 	T(CLI);	// 33238 cli ;~ 0D4F:0A1E
cs=0xd4f;eip=0x000a1f; 	T(CMP(*(dw*)(raddr(ss,bp+8)), 0));	// 33239 cmp     word ptr [bp+8], 0 ;~ 0D4F:0A1F
cs=0xd4f;eip=0x000a23; 	J(JNZ(loc_1c4fd));	// 33240 jnz     short loc_1C4FD ;~ 0D4F:0A23
cs=0xd4f;eip=0x000a25; 	T(MOV(ax, 0x0D68D));	// 33241 mov     ax, 0D68Dh ;~ 0D4F:0A25
cs=0xd4f;eip=0x000a28; 	T(MOV(dx, 0));	// 33242 mov     dx, 0 ;~ 0D4F:0A28
cs=0xd4f;eip=0x000a2b; 	J(JMP(loc_1c50b));	// 33243 jmp     short loc_1C50B ;~ 0D4F:0A2B
loc_1c4fd:
	// 5964 
cs=0xd4f;eip=0x000a2d; 	T(MOV(ax, 0x2710));	// 33247 mov     ax, 2710h ;~ 0D4F:0A2D
cs=0xd4f;eip=0x000a30; 	T(MOV(bx, 0x2E9C));	// 33248 mov     bx, 2E9Ch ;~ 0D4F:0A30
cs=0xd4f;eip=0x000a33; 	X(MUL1_2(*(dw*)(raddr(ss,bp+8))));	// 33249 mul     word ptr [bp+8] ;~ 0D4F:0A33
cs=0xd4f;eip=0x000a36; 	T(DIV2(bx));	// 33250 div     bx ;~ 0D4F:0A36
cs=0xd4f;eip=0x000a38; 	T(MOV(dx, 0));	// 33251 mov     dx, 0 ;~ 0D4F:0A38
loc_1c50b:
	// 5965 
cs=0xd4f;eip=0x000a3b; 	X(PUSH(dx));	// 33254 push    dx ;~ 0D4F:0A3B
cs=0xd4f;eip=0x000a3c; 	X(PUSH(ax));	// 33255 push    ax ;~ 0D4F:0A3C
cs=0xd4f;eip=0x000a3d; 	X(PUSH(*(dw*)(raddr(ss,bp+6))));	// 33256 push    word ptr [bp+6] ;~ 0D4F:0A3D
cs=0xd4f;eip=0x000a40; 	X(PUSH(cs));	// 33257 push    cs ;~ 0D4F:0A40
cs=0xd4f;eip=0x000a41; 	J(CALL(sub_1c451,0));	// 33258 call    sub_1C451 ;~ 0D4F:0A41
cs=0xd4f;eip=0x000a44; 	T(ADD(sp, 6));	// 33259 add     sp, 6 ;~ 0D4F:0A44
loc_1c517:
	// 5966 
cs=0xd4f;eip=0x000a47; 	T(OR(bh, 0));	// 33262 or      bh, 0 ;~ 0D4F:0A47
cs=0xd4f;eip=0x000a4a; 	X(PUSH(cs));	// 33263 push    cs ;~ 0D4F:0A4A
cs=0xd4f;eip=0x000a4b; 	J(CALL(_group2,m2c::kloc_1c517));	// 33264 call    near ptr loc_1C517+1 ;~ 0D4F:0A4B
cs=0xd4f;eip=0x000a4e; 	X(POP(di));	// 33265 pop     di ;~ 0D4F:0A4E
cs=0xd4f;eip=0x000a4f; 	X(POP(si));	// 33266 pop     si ;~ 0D4F:0A4F
cs=0xd4f;eip=0x000a50; 	X(POP(ds));	// 33267 pop     ds ;~ 0D4F:0A50
cs=0xd4f;eip=0x000a51; 	X(POP(bp));	// 33268 pop     bp ;~ 0D4F:0A51
cs=0xd4f;eip=0x000a52; 	R(RETF(0));	// 33269 retf ;~ 0D4F:0A52
sub_1c537:
	// 33278 
#undef arg_2
#define arg_2 6
	// 33280 arg_2           = dword ptr  6 ;~ 0D4F:0A67
ret_d4f_a67:
	// 5967 
cs=0xd4f;eip=0x000a67; 	X(PUSH(bp));	// 33282 push    bp ;~ 0D4F:0A67
cs=0xd4f;eip=0x000a68; 	T(MOV(bp, sp));	// 33283 mov     bp, sp ;~ 0D4F:0A68
cs=0xd4f;eip=0x000a6a; 	X(PUSH(ds));	// 33284 push    ds ;~ 0D4F:0A6A
cs=0xd4f;eip=0x000a6b; 	X(PUSH(si));	// 33285 push    si ;~ 0D4F:0A6B
cs=0xd4f;eip=0x000a6c; 	X(PUSH(di));	// 33286 push    di ;~ 0D4F:0A6C
cs=0xd4f;eip=0x000a6d; 	X(PUSHF);	// 33287 pushf ;~ 0D4F:0A6D
cs=0xd4f;eip=0x000a6e; 	T(CLI);	// 33288 cli ;~ 0D4F:0A6E
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000a6f; 	X(MOV(*(dw*)(((db*)&word_1bc78)), 0));	// 33289 mov     cs:word_1BC78, 0 ;~ 0D4F:0A6F
loc_1c546:
	// 5968 
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000a76; 	T(MOV(si, *(dw*)(((db*)&word_1bc78))));	// 33292 mov     si, cs:word_1BC78 ;~ 0D4F:0A76
cs=0xd4f;eip=0x000a7b; 	T(SHL(si, 1));	// 33293 shl     si, 1 ;~ 0D4F:0A7B
cs=0xd4f;eip=0x000a7d; 	T(SHL(si, 1));	// 33294 shl     si, 1 ;~ 0D4F:0A7D
cs=0xd4f;eip=0x000a7f; 	T(MOV(ax, *(dw*)(raddr(cs,si+0x124))));	// 33295 mov     ax, cs:[si+124h] ;~ 0D4F:0A7F
cs=0xd4f;eip=0x000a84; 	T(OR(ax, *(dw*)(raddr(cs,si+0x126))));	// 33296 or      ax, cs:[si+126h] ;~ 0D4F:0A84
cs=0xd4f;eip=0x000a89; 	J(JZ(loc_1c56d));	// 33297 jz      short loc_1C56D ;~ 0D4F:0A89
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000a8b; 	X(INC(*(dw*)(((db*)&word_1bc78))));	// 33298 inc     cs:word_1BC78 ;~ 0D4F:0A8B
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000a90; 	T(CMP(*(dw*)(((db*)&word_1bc78)), 0x10));	// 33299 cmp     cs:word_1BC78, 10h ;~ 0D4F:0A90
cs=0xd4f;eip=0x000a96; 	J(JNZ(loc_1c546));	// 33300 jnz     short loc_1C546 ;~ 0D4F:0A96
cs=0xd4f;eip=0x000a98; 	T(MOV(ax, 0x0FFFF));	// 33301 mov     ax, 0FFFFh ;~ 0D4F:0A98
cs=0xd4f;eip=0x000a9b; 	J(JMP(loc_1c5b5));	// 33302 jmp     short loc_1C5B5 ;~ 0D4F:0A9B
loc_1c56d:
	// 5969 
cs=0xd4f;eip=0x000a9d; 	T(LES(di, *(dd*)(raddr(ss,bp+arg_2))));	// 33306 les     di, [bp+arg_2] ;~ 0D4F:0A9D
cs=0xd4f;eip=0x000aa0; 	T(MOV(ax, 0x0FFFF));	// 33308 mov     ax, 0FFFFh ;~ 0D4F:0AA0
cs=0xd4f;eip=0x000aa3; 	T(CMP(*(dw*)(raddr(es,di+2)), 0x6F43));	// 33309 cmp     word ptr es:[di+2], 6F43h ;~ 0D4F:0AA3
cs=0xd4f;eip=0x000aa9; 	J(JNZ(loc_1c5b5));	// 33310 jnz     short loc_1C5B5 ;~ 0D4F:0AA9
cs=0xd4f;eip=0x000aab; 	T(CMP(*(dw*)(raddr(es,di+4)), 0x7970));	// 33311 cmp     word ptr es:[di+4], 7970h ;~ 0D4F:0AAB
cs=0xd4f;eip=0x000ab1; 	J(JNZ(loc_1c5b5));	// 33312 jnz     short loc_1C5B5 ;~ 0D4F:0AB1
cs=0xd4f;eip=0x000ab3; 	T(ADD(di, *(dw*)(raddr(es,di))));	// 33313 add     di, es:[di] ;~ 0D4F:0AB3
cs=0xd4f;eip=0x000ab6; 	X(MOV(*(dw*)(raddr(cs,si+0x124)), di));	// 33314 mov     cs:[si+124h], di ;~ 0D4F:0AB6
cs=0xd4f;eip=0x000abb; 	X(MOV(*(dw*)(raddr(cs,si+0x126)), es));	// 33315 mov     word ptr cs:[si+126h], es ;~ 0D4F:0ABB
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000ac0; 	X(PUSH(*(dw*)(((db*)&word_1bc78))));	// 33316 push    cs:word_1BC78 ;~ 0D4F:0AC0
cs=0xd4f;eip=0x000ac5; 	X(PUSH(cs));	// 33317 push    cs ;~ 0D4F:0AC5
cs=0xd4f;eip=0x000ac6; 	J(CALL(sub_1c5ef,0));	// 33318 call    near ptr sub_1C5EF ;~ 0D4F:0AC6
cs=0xd4f;eip=0x000ac9; 	T(ADD(sp, 2));	// 33319 add     sp, 2 ;~ 0D4F:0AC9
cs=0xd4f;eip=0x000acc; 	T(MOV(es, dx));	// 33320 mov     es, dx ;~ 0D4F:0ACC
cs=0xd4f;eip=0x000ace; 	T(MOV(di, ax));	// 33321 mov     di, ax ;~ 0D4F:0ACE
cs=0xd4f;eip=0x000ad0; 	T(OR(dx, ax));	// 33322 or      dx, ax ;~ 0D4F:0AD0
cs=0xd4f;eip=0x000ad2; 	T(MOV(ax, 0x0FFFF));	// 33323 mov     ax, 0FFFFh ;~ 0D4F:0AD2
cs=0xd4f;eip=0x000ad5; 	J(JZ(loc_1c5b5));	// 33324 jz      short loc_1C5B5 ;~ 0D4F:0AD5
cs=0xd4f;eip=0x000ad7; 	T(MOV(dx, *(dw*)(raddr(es,di))));	// 33325 mov     dx, es:[di] ;~ 0D4F:0AD7
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000ada; 	T(CMP(dx, *(dw*)(((db*)&word_1be88))));	// 33326 cmp     dx, cs:word_1BE88 ;~ 0D4F:0ADA
cs=0xd4f;eip=0x000adf; 	J(JA(loc_1c5b5));	// 33327 ja      short loc_1C5B5 ;~ 0D4F:0ADF
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000ae1; 	T(MOV(ax, *(dw*)(((db*)&word_1bc78))));	// 33328 mov     ax, cs:word_1BC78 ;~ 0D4F:0AE1
loc_1c5b5:
	// 5970 
cs=0xd4f;eip=0x000ae5; 	T(OR(bh, 0));	// 33332 or      bh, 0 ;~ 0D4F:0AE5
seg002_ae8_proc:
	// 33335 
cs=0xd4f;eip=0x000ae8; 	X(PUSH(cs));	// 33335 push    cs ;~ 0D4F:0AE8
cs=0xd4f;eip=0x000ae9; 	J(CALL(_group2,m2c::kloc_1c5b5));	// 33336 call    near ptr loc_1C5B5+1 ;~ 0D4F:0AE9
cs=0xd4f;eip=0x000aec; 	X(POP(di));	// 33337 pop     di ;~ 0D4F:0AEC
cs=0xd4f;eip=0x000aed; 	X(POP(si));	// 33338 pop     si ;~ 0D4F:0AED
cs=0xd4f;eip=0x000aee; 	X(POP(ds));	// 33339 pop     ds ;~ 0D4F:0AEE
cs=0xd4f;eip=0x000aef; 	X(POP(bp));	// 33340 pop     bp ;~ 0D4F:0AEF
cs=0xd4f;eip=0x000af0; 	R(RETF(0));	// 33341 retf ;~ 0D4F:0AF0
ret_d4f_af1:
	// 5971 
cs=0xd4f;eip=0x000af1; 	X(PUSH(bp));	// 33343 push    bp ;~ 0D4F:0AF1
cs=0xd4f;eip=0x000af2; 	T(MOV(bp, sp));	// 33344 mov     bp, sp ;~ 0D4F:0AF2
cs=0xd4f;eip=0x000af4; 	X(PUSH(ds));	// 33345 push    ds ;~ 0D4F:0AF4
cs=0xd4f;eip=0x000af5; 	X(PUSH(si));	// 33346 push    si ;~ 0D4F:0AF5
cs=0xd4f;eip=0x000af6; 	X(PUSH(di));	// 33347 push    di ;~ 0D4F:0AF6
cs=0xd4f;eip=0x000af7; 	X(PUSHF);	// 33348 pushf ;~ 0D4F:0AF7
cs=0xd4f;eip=0x000af8; 	T(CLI);	// 33349 cli ;~ 0D4F:0AF8
cs=0xd4f;eip=0x000af9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 33350 mov     bx, [bp+6] ;~ 0D4F:0AF9
cs=0xd4f;eip=0x000afc; 	T(CMP(bx, 0x10));	// 33351 cmp     bx, 10h ;~ 0D4F:0AFC
cs=0xd4f;eip=0x000aff; 	J(JNC(loc_1c5e3));	// 33352 jnb     short loc_1C5E3 ;~ 0D4F:0AFF
cs=0xd4f;eip=0x000b01; 	T(SHL(bx, 1));	// 33353 shl     bx, 1 ;~ 0D4F:0B01
cs=0xd4f;eip=0x000b03; 	T(SHL(bx, 1));	// 33354 shl     bx, 1 ;~ 0D4F:0B03
cs=0xd4f;eip=0x000b05; 	X(MOV(*(dw*)(raddr(cs,bx+0x124)), 0));	// 33355 mov     word ptr cs:[bx+124h], 0 ;~ 0D4F:0B05
cs=0xd4f;eip=0x000b0c; 	X(MOV(*(dw*)(raddr(cs,bx+0x126)), 0));	// 33356 mov     word ptr cs:[bx+126h], 0 ;~ 0D4F:0B0C
loc_1c5e3:
	// 5972 
cs=0xd4f;eip=0x000b13; 	T(OR(bh, 0));	// 33360 or      bh, 0 ;~ 0D4F:0B13
cs=0xd4f;eip=0x000b16; 	X(PUSH(cs));	// 33361 push    cs ;~ 0D4F:0B16
cs=0xd4f;eip=0x000b17; 	J(CALL(_group2,m2c::kloc_1c5e3));	// 33362 call    near ptr loc_1C5E3+1 ;~ 0D4F:0B17
cs=0xd4f;eip=0x000b1a; 	X(POP(di));	// 33363 pop     di ;~ 0D4F:0B1A
cs=0xd4f;eip=0x000b1b; 	X(POP(si));	// 33364 pop     si ;~ 0D4F:0B1B
cs=0xd4f;eip=0x000b1c; 	X(POP(ds));	// 33365 pop     ds ;~ 0D4F:0B1C
cs=0xd4f;eip=0x000b1d; 	X(POP(bp));	// 33366 pop     bp ;~ 0D4F:0B1D
cs=0xd4f;eip=0x000b1e; 	R(RETF(0));	// 33367 retf ;~ 0D4F:0B1E
sub_1c5ef:
	// 33373 
#undef arg_0
#define arg_0 6
	// 33376 arg_0           = word ptr  6 ;~ 0D4F:0B1F
ret_d4f_b1f:
	// 5973 
cs=0xd4f;eip=0x000b1f; 	X(PUSH(bp));	// 33378 push    bp ;~ 0D4F:0B1F
cs=0xd4f;eip=0x000b20; 	T(MOV(bp, sp));	// 33379 mov     bp, sp ;~ 0D4F:0B20
cs=0xd4f;eip=0x000b22; 	X(PUSH(ax));	// 33380 push    ax ;~ 0D4F:0B22
cs=0xd4f;eip=0x000b23; 	X(PUSH(bp));	// 33381 push    bp ;~ 0D4F:0B23
cs=0xd4f;eip=0x000b24; 	T(MOV(bp, sp));	// 33382 mov     bp, sp ;~ 0D4F:0B24
cs=0xd4f;eip=0x000b26; 	X(MOV(*(dw*)(raddr(ss,bp+2)), seg_offset(seg002)));	// 33383 mov     word ptr [bp+2], seg seg002 ;~ 0D4F:0B26
cs=0xd4f;eip=0x000b2b; 	X(POP(bp));	// 33384 pop     bp ;~ 0D4F:0B2B
cs=0xd4f;eip=0x000b2c; 	X(PUSH(ax));	// 33385 push    ax ;~ 0D4F:0B2C
cs=0xd4f;eip=0x000b2d; 	X(PUSH(bp));	// 33386 push    bp ;~ 0D4F:0B2D
cs=0xd4f;eip=0x000b2e; 	T(MOV(bp, sp));	// 33387 mov     bp, sp ;~ 0D4F:0B2E
cs=0xd4f;eip=0x000b30; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0x0A53));	// 33388 mov     word ptr [bp+2], 0A53h ;~ 0D4F:0B30
cs=0xd4f;eip=0x000b35; 	X(POP(bp));	// 33389 pop     bp ;~ 0D4F:0B35
cs=0xd4f;eip=0x000b36; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 33390 push    [bp+arg_0] ;~ 0D4F:0B36
cs=0xd4f;eip=0x000b39; 	T(MOV(ax, 0x64));	// 33391 mov     ax, 64h ; 'd' ;~ 0D4F:0B39
cs=0xd4f;eip=0x000b3c; 	X(PUSH(cs));	// 33392 push    cs ;~ 0D4F:0B3C
cs=0xd4f;eip=0x000b3d; 	J(CALL(sub_1bec2,0));	// 33393 call    near ptr sub_1BEC2 ;~ 0D4F:0B3D
cs=0xd4f;eip=0x000b40; 	T(ADD(sp, 6));	// 33394 add     sp, 6 ;~ 0D4F:0B40
cs=0xd4f;eip=0x000b43; 	X(POP(bp));	// 33395 pop     bp ;~ 0D4F:0B43
cs=0xd4f;eip=0x000b44; 	R(RETF(0));	// 33396 retf ;~ 0D4F:0B44
sub_1c615:
	// 33403 
cs=0xd4f;eip=0x000b45; 	T(MOV(ax, 0x65));	// 33404 mov     ax, 65h ; 'e' ;~ 0D4F:0B45
ret_d4f_b48:
	// 5974 
cs=0xd4f;eip=0x000b48; 	J(JMP(sub_1bec2));	// 33405 jmp     near ptr sub_1BEC2 ;~ 0D4F:0B48
sub_1c61b:
	// 33413 
#undef arg_2
#define arg_2 6
	// 33415 arg_2           = word ptr  6 ;~ 0D4F:0B4B
#undef arg_4
#define arg_4 8
	// 33416 arg_4           = word ptr  8 ;~ 0D4F:0B4B
#undef arg_6
#define arg_6 0x0A
	// 33417 arg_6           = word ptr  0Ah ;~ 0D4F:0B4B
#undef arg_8
#define arg_8 0x0C
	// 33418 arg_8           = word ptr  0Ch ;~ 0D4F:0B4B
#undef arg_a
#define arg_a 0x0E
	// 33419 arg_A           = word ptr  0Eh ;~ 0D4F:0B4B
ret_d4f_b4b:
	// 5975 
cs=0xd4f;eip=0x000b4b; 	X(PUSH(bp));	// 33421 push    bp ;~ 0D4F:0B4B
cs=0xd4f;eip=0x000b4c; 	T(MOV(bp, sp));	// 33422 mov     bp, sp ;~ 0D4F:0B4C
cs=0xd4f;eip=0x000b4e; 	X(PUSH(ds));	// 33423 push    ds ;~ 0D4F:0B4E
cs=0xd4f;eip=0x000b4f; 	X(PUSH(si));	// 33424 push    si ;~ 0D4F:0B4F
cs=0xd4f;eip=0x000b50; 	X(PUSH(di));	// 33425 push    di ;~ 0D4F:0B50
cs=0xd4f;eip=0x000b51; 	X(PUSHF);	// 33426 pushf ;~ 0D4F:0B51
cs=0xd4f;eip=0x000b52; 	T(CLI);	// 33427 cli ;~ 0D4F:0B52
cs=0xd4f;eip=0x000b53; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0x10));	// 33428 cmp     [bp+arg_2], 10h ;~ 0D4F:0B53
cs=0xd4f;eip=0x000b57; 	J(JC(loc_1c62c));	// 33429 jb      short loc_1C62C ;~ 0D4F:0B57
cs=0xd4f;eip=0x000b59; 	J(JMP(loc_1c6c4));	// 33430 jmp     loc_1C6C4 ;~ 0D4F:0B59
loc_1c62c:
	// 5976 
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000b5c; 	X(MOV(*(dw*)(((db*)&word_1bc7e)), 0x0FFFF));	// 33434 mov     cs:word_1BC7E, 0FFFFh ;~ 0D4F:0B5C
cs=0xd4f;eip=0x000b63; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 33435 push    [bp+arg_2] ;~ 0D4F:0B63
cs=0xd4f;eip=0x000b66; 	X(PUSH(cs));	// 33436 push    cs ;~ 0D4F:0B66
cs=0xd4f;eip=0x000b67; 	J(CALL(sub_1c5ef,0));	// 33437 call    near ptr sub_1C5EF ;~ 0D4F:0B67
cs=0xd4f;eip=0x000b6a; 	T(ADD(sp, 2));	// 33438 add     sp, 2 ;~ 0D4F:0B6A
cs=0xd4f;eip=0x000b6d; 	T(MOV(es, dx));	// 33439 mov     es, dx ;~ 0D4F:0B6D
cs=0xd4f;eip=0x000b6f; 	T(MOV(di, ax));	// 33440 mov     di, ax ;~ 0D4F:0B6F
cs=0xd4f;eip=0x000b71; 	T(MOV(si, *(dw*)(raddr(es,di+0x14))));	// 33441 mov     si, es:[di+14h] ;~ 0D4F:0B71
cs=0xd4f;eip=0x000b75; 	T(CMP(si, 0x0FFFF));	// 33442 cmp     si, 0FFFFh ;~ 0D4F:0B75
cs=0xd4f;eip=0x000b78; 	J(JZ(loc_1c68b));	// 33443 jz      short loc_1C68B ;~ 0D4F:0B78
cs=0xd4f;eip=0x000b7a; 	T(ADD(si, 5));	// 33444 add     si, 5 ;~ 0D4F:0B7A
cs=0xd4f;eip=0x000b7d; 	T(MOV(ax, 0x67));	// 33445 mov     ax, 67h ; 'g' ;~ 0D4F:0B7D
cs=0xd4f;eip=0x000b80; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 33446 mov     bx, [bp+arg_2] ;~ 0D4F:0B80
cs=0xd4f;eip=0x000b83; 	X(PUSH(cs));	// 33447 push    cs ;~ 0D4F:0B83
cs=0xd4f;eip=0x000b84; 	J(CALL(sub_1be8a,0));	// 33448 call    near ptr sub_1BE8A ;~ 0D4F:0B84
cs=0xd4f;eip=0x000b87; 	T(MOV(bx, ax));	// 33449 mov     bx, ax ;~ 0D4F:0B87
cs=0xd4f;eip=0x000b89; 	T(OR(bx, dx));	// 33450 or      bx, dx ;~ 0D4F:0B89
cs=0xd4f;eip=0x000b8b; 	J(JZ(loc_1c68b));	// 33451 jz      short loc_1C68B ;~ 0D4F:0B8B
cs=0xd4f;eip=0x000b8d; 	T(MOV(es, dx));	// 33452 mov     es, dx ;~ 0D4F:0B8D
cs=0xd4f;eip=0x000b8f; 	T(MOV(bx, ax));	// 33453 mov     bx, ax ;~ 0D4F:0B8F
cs=0xd4f;eip=0x000b91; 	X(PUSH(es));	// 33454 push    es ;~ 0D4F:0B91
cs=0xd4f;eip=0x000b92; 	X(PUSH(bx));	// 33455 push    bx ;~ 0D4F:0B92
cs=0xd4f;eip=0x000b93; 	X(PUSH(cs));	// 33456 push    cs ;~ 0D4F:0B93
cs=0xd4f;eip=0x000b94; 	J(CALL(sub_1c293,0));	// 33457 call    sub_1C293 ;~ 0D4F:0B94
cs=0xd4f;eip=0x000b97; 	T(ADD(sp, 4));	// 33458 add     sp, 4 ;~ 0D4F:0B97
cs=0xd4f;eip=0x000b9a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 33459 mov     bx, [bp+arg_2] ;~ 0D4F:0B9A
cs=0xd4f;eip=0x000b9d; 	T(SHL(bx, 1));	// 33460 shl     bx, 1 ;~ 0D4F:0B9D
cs=0xd4f;eip=0x000b9f; 	X(MOV(*(dw*)(raddr(cs,bx+0x164)), ax));	// 33461 mov     cs:[bx+164h], ax ;~ 0D4F:0B9F
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000ba4; 	X(MOV(*(dw*)(((db*)&word_1bc7e)), ax));	// 33462 mov     cs:word_1BC7E, ax ;~ 0D4F:0BA4
cs=0xd4f;eip=0x000ba8; 	X(PUSH(ax));	// 33463 push    ax ;~ 0D4F:0BA8
cs=0xd4f;eip=0x000ba9; 	X(PUSH(bp));	// 33464 push    bp ;~ 0D4F:0BA9
cs=0xd4f;eip=0x000baa; 	T(MOV(bp, sp));	// 33465 mov     bp, sp ;~ 0D4F:0BAA
cs=0xd4f;eip=0x000bac; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0));	// 33466 mov     word ptr [bp+2], 0 ;~ 0D4F:0BAC
cs=0xd4f;eip=0x000bb1; 	X(POP(bp));	// 33467 pop     bp ;~ 0D4F:0BB1
cs=0xd4f;eip=0x000bb2; 	X(PUSH(si));	// 33468 push    si ;~ 0D4F:0BB2
cs=0xd4f;eip=0x000bb3; 	X(PUSH(ax));	// 33469 push    ax ;~ 0D4F:0BB3
cs=0xd4f;eip=0x000bb4; 	X(PUSH(cs));	// 33470 push    cs ;~ 0D4F:0BB4
cs=0xd4f;eip=0x000bb5; 	J(CALL(sub_1c4a6,0));	// 33471 call    sub_1C4A6 ;~ 0D4F:0BB5
cs=0xd4f;eip=0x000bb8; 	T(ADD(sp, 6));	// 33472 add     sp, 6 ;~ 0D4F:0BB8
loc_1c68b:
	// 5977 
cs=0xd4f;eip=0x000bbb; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 33476 push    [bp+arg_A] ;~ 0D4F:0BBB
cs=0xd4f;eip=0x000bbe; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 33477 push    [bp+arg_8] ;~ 0D4F:0BBE
cs=0xd4f;eip=0x000bc1; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 33478 push    [bp+arg_6] ;~ 0D4F:0BC1
cs=0xd4f;eip=0x000bc4; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 33479 push    [bp+arg_4] ;~ 0D4F:0BC4
cs=0xd4f;eip=0x000bc7; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 33480 push    [bp+arg_2] ;~ 0D4F:0BC7
cs=0xd4f;eip=0x000bca; 	T(MOV(ax, 0x66));	// 33481 mov     ax, 66h ; 'f' ;~ 0D4F:0BCA
cs=0xd4f;eip=0x000bcd; 	X(PUSH(cs));	// 33482 push    cs ;~ 0D4F:0BCD
cs=0xd4f;eip=0x000bce; 	J(CALL(sub_1bec2,0));	// 33483 call    near ptr sub_1BEC2 ;~ 0D4F:0BCE
cs=0xd4f;eip=0x000bd1; 	T(ADD(sp, 0x0A));	// 33484 add     sp, 0Ah ;~ 0D4F:0BD1
cs=0xd4f;eip=0x000bd4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 33485 mov     bx, [bp+arg_2] ;~ 0D4F:0BD4
cs=0xd4f;eip=0x000bd7; 	T(SHL(bx, 1));	// 33486 shl     bx, 1 ;~ 0D4F:0BD7
cs=0xd4f;eip=0x000bd9; 	X(MOV(*(dw*)(raddr(cs,bx+0x184)), 1));	// 33487 mov     word ptr cs:[bx+184h], 1 ;~ 0D4F:0BD9
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000be0; 	T(CMP(*(dw*)(((db*)&word_1bc7e)), 0x0FFFF));	// 33488 cmp     cs:word_1BC7E, 0FFFFh ;~ 0D4F:0BE0
cs=0xd4f;eip=0x000be6; 	J(JZ(loc_1c6c4));	// 33489 jz      short loc_1C6C4 ;~ 0D4F:0BE6
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000be8; 	X(PUSH(*(dw*)(((db*)&word_1bc7e))));	// 33490 push    cs:word_1BC7E ;~ 0D4F:0BE8
cs=0xd4f;eip=0x000bed; 	X(PUSH(cs));	// 33491 push    cs ;~ 0D4F:0BED
cs=0xd4f;eip=0x000bee; 	J(CALL(sub_1c3c5,0));	// 33492 call    sub_1C3C5 ;~ 0D4F:0BEE
cs=0xd4f;eip=0x000bf1; 	T(ADD(sp, 2));	// 33493 add     sp, 2 ;~ 0D4F:0BF1
loc_1c6c4:
	// 5978 
cs=0xd4f;eip=0x000bf4; 	T(OR(bh, 0));	// 33497 or      bh, 0 ;~ 0D4F:0BF4
seg002_bf7_proc:
	// 33500 
cs=0xd4f;eip=0x000bf7; 	X(PUSH(cs));	// 33500 push    cs ;~ 0D4F:0BF7
cs=0xd4f;eip=0x000bf8; 	J(CALL(_group2,m2c::kloc_1c6c4));	// 33501 call    near ptr loc_1C6C4+1 ;~ 0D4F:0BF8
cs=0xd4f;eip=0x000bfb; 	X(POP(di));	// 33502 pop     di ;~ 0D4F:0BFB
cs=0xd4f;eip=0x000bfc; 	X(POP(si));	// 33503 pop     si ;~ 0D4F:0BFC
cs=0xd4f;eip=0x000bfd; 	X(POP(ds));	// 33504 pop     ds ;~ 0D4F:0BFD
cs=0xd4f;eip=0x000bfe; 	X(POP(bp));	// 33505 pop     bp ;~ 0D4F:0BFE
cs=0xd4f;eip=0x000bff; 	R(RETF(0));	// 33506 retf ;~ 0D4F:0BFF
sub_1c6d0:
	// 33511 
cs=0xd4f;eip=0x000c00; 	T(MOV(bx, sp));	// 33512 mov     bx, sp ;~ 0D4F:0C00
ret_d4f_c02:
	// 5979 
cs=0xd4f;eip=0x000c02; 	T(MOV(bx, *(dw*)(raddr(ss,bx+4))));	// 33513 mov     bx, ss:[bx+4] ;~ 0D4F:0C02
cs=0xd4f;eip=0x000c06; 	T(CMP(bx, 0x10));	// 33514 cmp     bx, 10h ;~ 0D4F:0C06
cs=0xd4f;eip=0x000c09; 	J(JNC(locret_1c702));	// 33515 jnb     short locret_1C702 ;~ 0D4F:0C09
cs=0xd4f;eip=0x000c0b; 	T(SHL(bx, 1));	// 33516 shl     bx, 1 ;~ 0D4F:0C0B
cs=0xd4f;eip=0x000c0d; 	T(MOV(dx, 0));	// 33517 mov     dx, 0 ;~ 0D4F:0C0D
cs=0xd4f;eip=0x000c10; 	X(XCHG(dx, *(dw*)(raddr(cs,bx+0x184))));	// 33518 xchg    dx, cs:[bx+184h] ;~ 0D4F:0C10
cs=0xd4f;eip=0x000c15; 	T(CMP(dx, 0));	// 33519 cmp     dx, 0 ;~ 0D4F:0C15
cs=0xd4f;eip=0x000c18; 	J(JZ(locret_1c702));	// 33520 jz      short locret_1C702 ;~ 0D4F:0C18
cs=0xd4f;eip=0x000c1a; 	T(MOV(dx, *(dw*)(raddr(cs,bx+0x164))));	// 33521 mov     dx, cs:[bx+164h] ;~ 0D4F:0C1A
cs=0xd4f;eip=0x000c1f; 	T(CMP(dx, 0x0FFFF));	// 33522 cmp     dx, 0FFFFh ;~ 0D4F:0C1F
cs=0xd4f;eip=0x000c22; 	J(JZ(loc_1c6fc));	// 33523 jz      short loc_1C6FC ;~ 0D4F:0C22
cs=0xd4f;eip=0x000c24; 	X(PUSH(dx));	// 33524 push    dx ;~ 0D4F:0C24
cs=0xd4f;eip=0x000c25; 	X(PUSH(cs));	// 33525 push    cs ;~ 0D4F:0C25
cs=0xd4f;eip=0x000c26; 	J(CALL(sub_1c35e,0));	// 33526 call    sub_1C35E ;~ 0D4F:0C26
cs=0xd4f;eip=0x000c29; 	T(ADD(sp, 2));	// 33527 add     sp, 2 ;~ 0D4F:0C29
loc_1c6fc:
	// 5980 
cs=0xd4f;eip=0x000c2c; 	T(MOV(ax, 0x68));	// 33530 mov     ax, 68h ; 'h' ;~ 0D4F:0C2C
cs=0xd4f;eip=0x000c2f; 	J(JMP(sub_1bec2));	// 33531 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C2F
locret_1c702:
	// 5981 
cs=0xd4f;eip=0x000c32; 	R(RETF(0));	// 33536 retf ;~ 0D4F:0C32
seg002_c33_proc:
	// 33540 
cs=0xd4f;eip=0x000c33; 	T(MOV(ax, 0x78));	// 33540 mov     ax, 78h ; 'x' ;~ 0D4F:0C33
ret_d4f_c36:
	// 5982 
cs=0xd4f;eip=0x000c36; 	J(JMP(sub_1bec2));	// 33541 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C36
ret_d4f_c39:
	// 5983 
cs=0xd4f;eip=0x000c39; 	T(MOV(ax, 0x79));	// 33543 mov     ax, 79h ; 'y' ;~ 0D4F:0C39
cs=0xd4f;eip=0x000c3c; 	J(JMP(sub_1bec2));	// 33544 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C3C
ret_d4f_c3f:
	// 5984 
cs=0xd4f;eip=0x000c3f; 	T(MOV(ax, 0x86));	// 33546 mov     ax, 86h ; '†' ;~ 0D4F:0C3F
cs=0xd4f;eip=0x000c42; 	J(JMP(sub_1bec2));	// 33547 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C42
ret_d4f_c45:
	// 5985 
cs=0xd4f;eip=0x000c45; 	T(MOV(ax, 0x7A));	// 33549 mov     ax, 7Ah ; 'z' ;~ 0D4F:0C45
cs=0xd4f;eip=0x000c48; 	J(JMP(sub_1bec2));	// 33550 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C48
ret_d4f_c4b:
	// 5986 
cs=0xd4f;eip=0x000c4b; 	T(MOV(ax, 0x7B));	// 33552 mov     ax, 7Bh ; '{' ;~ 0D4F:0C4B
cs=0xd4f;eip=0x000c4e; 	J(JMP(sub_1bec2));	// 33553 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C4E
ret_d4f_c51:
	// 5987 
cs=0xd4f;eip=0x000c51; 	T(MOV(ax, 0x85));	// 33555 mov     ax, 85h ; '…' ;~ 0D4F:0C51
cs=0xd4f;eip=0x000c54; 	J(JMP(sub_1bec2));	// 33556 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C54
ret_d4f_c57:
	// 5988 
cs=0xd4f;eip=0x000c57; 	T(MOV(ax, 0x7C));	// 33558 mov     ax, 7Ch ; '|' ;~ 0D4F:0C57
cs=0xd4f;eip=0x000c5a; 	J(JMP(sub_1bec2));	// 33559 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C5A
ret_d4f_c5d:
	// 5989 
cs=0xd4f;eip=0x000c5d; 	T(MOV(ax, 0x7D));	// 33561 mov     ax, 7Dh ; '}' ;~ 0D4F:0C5D
cs=0xd4f;eip=0x000c60; 	J(JMP(sub_1bec2));	// 33562 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C60
ret_d4f_c63:
	// 5990 
cs=0xd4f;eip=0x000c63; 	T(MOV(ax, 0x7E));	// 33564 mov     ax, 7Eh ; '~' ;~ 0D4F:0C63
cs=0xd4f;eip=0x000c66; 	J(JMP(sub_1bec2));	// 33565 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C66
ret_d4f_c69:
	// 5991 
cs=0xd4f;eip=0x000c69; 	T(MOV(ax, 0x7F));	// 33567 mov     ax, 7Fh ;~ 0D4F:0C69
cs=0xd4f;eip=0x000c6c; 	J(JMP(sub_1bec2));	// 33568 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C6C
ret_d4f_c6f:
	// 5992 
cs=0xd4f;eip=0x000c6f; 	T(MOV(ax, 0x80));	// 33570 mov     ax, 80h ; '€' ;~ 0D4F:0C6F
cs=0xd4f;eip=0x000c72; 	J(JMP(sub_1bec2));	// 33571 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C72
ret_d4f_c75:
	// 5993 
cs=0xd4f;eip=0x000c75; 	T(MOV(ax, 0x81));	// 33573 mov     ax, 81h ;~ 0D4F:0C75
cs=0xd4f;eip=0x000c78; 	J(JMP(sub_1bec2));	// 33574 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C78
ret_d4f_c7b:
	// 5994 
cs=0xd4f;eip=0x000c7b; 	T(MOV(ax, 0x82));	// 33576 mov     ax, 82h ; '‚' ;~ 0D4F:0C7B
cs=0xd4f;eip=0x000c7e; 	J(JMP(sub_1bec2));	// 33577 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C7E
ret_d4f_c81:
	// 5995 
cs=0xd4f;eip=0x000c81; 	T(MOV(ax, 0x83));	// 33579 mov     ax, 83h ; 'ƒ' ;~ 0D4F:0C81
cs=0xd4f;eip=0x000c84; 	J(JMP(sub_1bec2));	// 33580 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C84
ret_d4f_c87:
	// 5996 
cs=0xd4f;eip=0x000c87; 	T(MOV(ax, 0x84));	// 33582 mov     ax, 84h ; '„' ;~ 0D4F:0C87
cs=0xd4f;eip=0x000c8a; 	J(JMP(sub_1bec2));	// 33583 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C8A
ret_d4f_c8d:
	// 5997 
cs=0xd4f;eip=0x000c8d; 	T(MOV(ax, 0x96));	// 33585 mov     ax, 96h ; '–' ;~ 0D4F:0C8D
cs=0xd4f;eip=0x000c90; 	J(JMP(sub_1bec2));	// 33586 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C90
sub_1c763:
	// 33591 
cs=0xd4f;eip=0x000c93; 	T(MOV(ax, 0x97));	// 33592 mov     ax, 97h ; '—' ;~ 0D4F:0C93
ret_d4f_c96:
	// 5998 
cs=0xd4f;eip=0x000c96; 	J(JMP(sub_1bec2));	// 33593 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C96
sub_1c769:
	// 33600 
cs=0xd4f;eip=0x000c99; 	T(MOV(ax, 0x98));	// 33602 mov     ax, 98h ; '˜' ;~ 0D4F:0C99
ret_d4f_c9c:
	// 5999 
cs=0xd4f;eip=0x000c9c; 	J(JMP(sub_1bec2));	// 33603 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C9C
sub_1c76f:
	// 33610 
cs=0xd4f;eip=0x000c9f; 	T(MOV(ax, 0x99));	// 33611 mov     ax, 99h ; '™' ;~ 0D4F:0C9F
ret_d4f_ca2:
	// 6000 
cs=0xd4f;eip=0x000ca2; 	J(JMP(sub_1bec2));	// 33612 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CA2
sub_1c775:
	// 33619 
cs=0xd4f;eip=0x000ca5; 	T(MOV(ax, 0x9A));	// 33620 mov     ax, 9Ah ; 'š' ;~ 0D4F:0CA5
ret_d4f_ca8:
	// 6001 
cs=0xd4f;eip=0x000ca8; 	J(JMP(sub_1bec2));	// 33621 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CA8
sub_1c77b:
	// 33628 
cs=0xd4f;eip=0x000cab; 	T(MOV(ax, 0x9B));	// 33629 mov     ax, 9Bh ; '›' ;~ 0D4F:0CAB
ret_d4f_cae:
	// 6002 
cs=0xd4f;eip=0x000cae; 	J(JMP(sub_1bec2));	// 33630 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CAE
sub_1c781:
	// 33637 
cs=0xd4f;eip=0x000cb1; 	T(MOV(ax, 0x9C));	// 33638 mov     ax, 9Ch ; 'œ' ;~ 0D4F:0CB1
ret_d4f_cb4:
	// 6003 
cs=0xd4f;eip=0x000cb4; 	J(JMP(sub_1bec2));	// 33639 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CB4
seg002_cb7_proc:
	// 33643 
cs=0xd4f;eip=0x000cb7; 	T(MOV(ax, 0x9D));	// 33643 mov     ax, 9Dh ;~ 0D4F:0CB7
ret_d4f_cba:
	// 6004 
cs=0xd4f;eip=0x000cba; 	J(JMP(sub_1bec2));	// 33644 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CBA
ret_d4f_cbd:
	// 6005 
cs=0xd4f;eip=0x000cbd; 	T(MOV(ax, 0x9E));	// 33646 mov     ax, 9Eh ; '' ;~ 0D4F:0CBD
cs=0xd4f;eip=0x000cc0; 	J(JMP(sub_1bec2));	// 33647 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CC0
ret_d4f_cc3:
	// 6006 
cs=0xd4f;eip=0x000cc3; 	T(MOV(ax, 0x9F));	// 33649 mov     ax, 9Fh ; 'Ÿ' ;~ 0D4F:0CC3
cs=0xd4f;eip=0x000cc6; 	J(JMP(sub_1bec2));	// 33650 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CC6
sub_1c799:
	// 33655 
cs=0xd4f;eip=0x000cc9; 	T(MOV(ax, 0x0AA));	// 33656 mov     ax, 0AAh ; 'ª' ;~ 0D4F:0CC9
ret_d4f_ccc:
	// 6007 
cs=0xd4f;eip=0x000ccc; 	J(JMP(sub_1bec2));	// 33657 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CCC
sub_1c79f:
	// 33664 
cs=0xd4f;eip=0x000ccf; 	T(MOV(ax, 0x0AB));	// 33666 mov     ax, 0ABh ; '«' ;~ 0D4F:0CCF
ret_d4f_cd2:
	// 6008 
cs=0xd4f;eip=0x000cd2; 	J(JMP(sub_1bec2));	// 33667 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CD2
seg002_cd5_proc:
	// 33671 
cs=0xd4f;eip=0x000cd5; 	T(MOV(ax, 0x0AD));	// 33671 mov     ax, 0ADh ; '­' ;~ 0D4F:0CD5
ret_d4f_cd8:
	// 6009 
cs=0xd4f;eip=0x000cd8; 	J(JMP(sub_1bec2));	// 33672 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CD8
sub_1c7ab:
	// 33677 
cs=0xd4f;eip=0x000cdb; 	T(MOV(ax, 0x0AE));	// 33678 mov     ax, 0AEh ; '®' ;~ 0D4F:0CDB
ret_d4f_cde:
	// 6010 
cs=0xd4f;eip=0x000cde; 	J(JMP(sub_1bec2));	// 33679 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CDE
seg002_ce1_proc:
	// 33683 
cs=0xd4f;eip=0x000ce1; 	T(MOV(ax, 0x0AF));	// 33683 mov     ax, 0AFh ; '¯' ;~ 0D4F:0CE1
ret_d4f_ce4:
	// 6011 
cs=0xd4f;eip=0x000ce4; 	J(JMP(sub_1bec2));	// 33684 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CE4
ret_d4f_ce7:
	// 6012 
cs=0xd4f;eip=0x000ce7; 	T(MOV(ax, 0x0B0));	// 33686 mov     ax, 0B0h ; '°' ;~ 0D4F:0CE7
cs=0xd4f;eip=0x000cea; 	J(JMP(sub_1bec2));	// 33687 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CEA
sub_1c7bd:
	// 33692 
cs=0xd4f;eip=0x000ced; 	T(MOV(ax, 0x0B1));	// 33693 mov     ax, 0B1h ; '±' ;~ 0D4F:0CED
ret_d4f_cf0:
	// 6013 
cs=0xd4f;eip=0x000cf0; 	J(JMP(sub_1bec2));	// 33694 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CF0
seg002_cf3_proc:
	// 33698 
cs=0xd4f;eip=0x000cf3; 	T(MOV(ax, 0x0B2));	// 33698 mov     ax, 0B2h ; '²' ;~ 0D4F:0CF3
ret_d4f_cf6:
	// 6014 
cs=0xd4f;eip=0x000cf6; 	J(JMP(sub_1bec2));	// 33699 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CF6
ret_d4f_cf9:
	// 6015 
cs=0xd4f;eip=0x000cf9; 	T(MOV(ax, 0x0B3));	// 33701 mov     ax, 0B3h ; '³' ;~ 0D4F:0CF9
cs=0xd4f;eip=0x000cfc; 	J(JMP(sub_1bec2));	// 33702 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CFC
ret_d4f_cff:
	// 6016 
cs=0xd4f;eip=0x000cff; 	T(MOV(ax, 0x0B4));	// 33704 mov     ax, 0B4h ; '´' ;~ 0D4F:0CFF
cs=0xd4f;eip=0x000d02; 	J(JMP(sub_1bec2));	// 33705 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D02
ret_d4f_d05:
	// 6017 
cs=0xd4f;eip=0x000d05; 	T(MOV(ax, 0x0B5));	// 33707 mov     ax, 0B5h ; 'µ' ;~ 0D4F:0D05
cs=0xd4f;eip=0x000d08; 	J(JMP(sub_1bec2));	// 33708 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D08
ret_d4f_d0b:
	// 6018 
cs=0xd4f;eip=0x000d0b; 	T(MOV(ax, 0x0B6));	// 33710 mov     ax, 0B6h ; '¶' ;~ 0D4F:0D0B
cs=0xd4f;eip=0x000d0e; 	J(JMP(sub_1bec2));	// 33711 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D0E
ret_d4f_d11:
	// 6019 
cs=0xd4f;eip=0x000d11; 	T(MOV(ax, 0x0B7));	// 33713 mov     ax, 0B7h ; '·' ;~ 0D4F:0D11
cs=0xd4f;eip=0x000d14; 	J(JMP(sub_1bec2));	// 33714 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D14
ret_d4f_d17:
	// 6020 
cs=0xd4f;eip=0x000d17; 	T(MOV(ax, 0x0B9));	// 33716 mov     ax, 0B9h ; '¹' ;~ 0D4F:0D17
cs=0xd4f;eip=0x000d1a; 	J(JMP(sub_1bec2));	// 33717 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D1A
ret_d4f_d1d:
	// 6021 
cs=0xd4f;eip=0x000d1d; 	T(MOV(ax, 0x0BA));	// 33719 mov     ax, 0BAh ; 'º' ;~ 0D4F:0D1D
cs=0xd4f;eip=0x000d20; 	J(JMP(sub_1bec2));	// 33720 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D20
ret_d4f_d23:
	// 6022 
cs=0xd4f;eip=0x000d23; 	T(MOV(ax, 0x0BB));	// 33722 mov     ax, 0BBh ; '»' ;~ 0D4F:0D23
cs=0xd4f;eip=0x000d26; 	J(JMP(sub_1bec2));	// 33723 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D26
ret_d4f_d29:
	// 6023 
cs=0xd4f;eip=0x000d29; 	T(MOV(ax, 0x0BC));	// 33725 mov     ax, 0BCh ; '¼' ;~ 0D4F:0D29
cs=0xd4f;eip=0x000d2c; 	J(JMP(sub_1bec2));	// 33726 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D2C
ret_d4f_d2f:
	// 6024 
cs=0xd4f;eip=0x000d2f; 	T(MOV(ax, 0x0BD));	// 33728 mov     ax, 0BDh ; '½' ;~ 0D4F:0D2F
cs=0xd4f;eip=0x000d32; 	J(JMP(sub_1bec2));	// 33729 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D32
ret_d4f_d35:
	// 6025 
cs=0xd4f;eip=0x000d35; 	T(MOV(ax, 0x0BE));	// 33731 mov     ax, 0BEh ; '¾' ;~ 0D4F:0D35
cs=0xd4f;eip=0x000d38; 	J(JMP(sub_1bec2));	// 33732 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D38
ret_d4f_d3b:
	// 6026 
cs=0xd4f;eip=0x000d3b; 	T(MOV(ax, 0x0BF));	// 33734 mov     ax, 0BFh ; '¿' ;~ 0D4F:0D3B
cs=0xd4f;eip=0x000d3e; 	J(JMP(sub_1bec2));	// 33735 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D3E
ret_d4f_d41:
	// 6027 
cs=0xd4f;eip=0x000d41; 	T(MOV(ax, 0x0C0));	// 33737 mov     ax, 0C0h ; 'À' ;~ 0D4F:0D41
cs=0xd4f;eip=0x000d44; 	J(JMP(sub_1bec2));	// 33738 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D44
ret_d4f_d47:
	// 6028 
cs=0xd4f;eip=0x000d47; 	T(MOV(ax, 0x0C1));	// 33740 mov     ax, 0C1h ; 'Á' ;~ 0D4F:0D47
cs=0xd4f;eip=0x000d4a; 	J(JMP(sub_1bec2));	// 33741 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D4A
ret_d4f_d4d:
	// 6029 
cs=0xd4f;eip=0x000d4d; 	T(MOV(ax, 0x0C2));	// 33743 mov     ax, 0C2h ; 'Â' ;~ 0D4F:0D4D
cs=0xd4f;eip=0x000d50; 	J(JMP(sub_1bec2));	// 33744 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D50

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_1be9e: 	goto loc_1be9e;
        case m2c::kloc_1beb4: 	goto loc_1beb4;
        case m2c::kloc_1bebb: 	goto loc_1bebb;
        case m2c::kloc_1bed6: 	goto loc_1bed6;
        case m2c::kloc_1bef3: 	goto loc_1bef3;
        case m2c::kloc_1bef9: 	goto loc_1bef9;
        case m2c::kloc_1befe: 	goto loc_1befe;
        case m2c::kloc_1bf0d: 	goto loc_1bf0d;
        case m2c::kloc_1bf13: 	goto loc_1bf13;
        case m2c::kloc_1bf39: 	goto loc_1bf39;
        case m2c::kloc_1bf51: 	goto loc_1bf51;
        case m2c::kloc_1bf8b: 	goto loc_1bf8b;
        case m2c::kloc_1bf97: 	goto loc_1bf97;
        case m2c::kloc_1bfb0: 	goto loc_1bfb0;
        case m2c::kloc_1bfc7: 	goto loc_1bfc7;
        case m2c::kloc_1bfec: 	goto loc_1bfec;
        case m2c::kloc_1c029: 	goto loc_1c029;
        case m2c::kloc_1c07c: 	goto loc_1c07c;
        case m2c::kloc_1c0ac: 	goto loc_1c0ac;
        case m2c::kloc_1c0cc: 	goto loc_1c0cc;
        case m2c::kloc_1c0d2: 	goto loc_1c0d2;
        case m2c::kloc_1c0d4: 	goto loc_1c0d4;
        case m2c::kloc_1c0fd: 	goto loc_1c0fd;
        case m2c::kloc_1c128: 	goto loc_1c128;
        case m2c::kloc_1c131: 	goto loc_1c131;
        case m2c::kloc_1c143: 	goto loc_1c143;
        case m2c::kloc_1c148: 	goto loc_1c148;
        case m2c::kloc_1c14c: 	goto loc_1c14c;
        case m2c::kloc_1c150: 	goto loc_1c150;
        case m2c::kloc_1c16c: 	goto loc_1c16c;
        case m2c::kloc_1c194: 	goto loc_1c194;
        case m2c::kloc_1c19d: 	goto loc_1c19d;
        case m2c::kloc_1c1ba: 	goto loc_1c1ba;
        case m2c::kloc_1c1df: 	goto loc_1c1df;
        case m2c::kloc_1c223: 	goto loc_1c223;
        case m2c::kloc_1c23d: 	goto loc_1c23d;
        case m2c::kloc_1c264: 	goto loc_1c264;
        case m2c::kloc_1c276: 	goto loc_1c276;
        case m2c::kloc_1c287: 	goto loc_1c287;
        case m2c::kloc_1c2a0: 	goto loc_1c2a0;
        case m2c::kloc_1c2b6: 	goto loc_1c2b6;
        case m2c::kloc_1c352: 	goto loc_1c352;
        case m2c::kloc_1c39b: 	goto loc_1c39b;
        case m2c::kloc_1c3af: 	goto loc_1c3af;
        case m2c::kloc_1c3ba: 	goto loc_1c3ba;
        case m2c::kloc_1c3e1: 	goto loc_1c3e1;
        case m2c::kloc_1c427: 	goto loc_1c427;
        case m2c::kloc_1c49a: 	goto loc_1c49a;
        case m2c::kloc_1c4db: 	goto loc_1c4db;
        case m2c::kloc_1c4fd: 	goto loc_1c4fd;
        case m2c::kloc_1c50b: 	goto loc_1c50b;
        case m2c::kloc_1c517: 	goto loc_1c517;
        case m2c::kloc_1c546: 	goto loc_1c546;
        case m2c::kloc_1c56d: 	goto loc_1c56d;
        case m2c::kloc_1c5b5: 	goto loc_1c5b5;
        case m2c::kloc_1c5e3: 	goto loc_1c5e3;
        case m2c::kloc_1c62c: 	goto loc_1c62c;
        case m2c::kloc_1c68b: 	goto loc_1c68b;
        case m2c::kloc_1c6c4: 	goto loc_1c6c4;
        case m2c::kloc_1c6fc: 	goto loc_1c6fc;
        case m2c::klocret_1bed9: 	goto locret_1bed9;
        case m2c::klocret_1bf1a: 	goto locret_1bf1a;
        case m2c::klocret_1c702: 	goto locret_1c702;
        case m2c::kret_d4f_3bd: 	goto ret_d4f_3bd;
        case m2c::kret_d4f_3f4: 	goto ret_d4f_3f4;
        case m2c::kret_d4f_450: 	goto ret_d4f_450;
        case m2c::kret_d4f_529: 	goto ret_d4f_529;
        case m2c::kret_d4f_564: 	goto ret_d4f_564;
        case m2c::kret_d4f_56c: 	goto ret_d4f_56c;
        case m2c::kret_d4f_5b8: 	goto ret_d4f_5b8;
        case m2c::kret_d4f_63a: 	goto ret_d4f_63a;
        case m2c::kret_d4f_686: 	goto ret_d4f_686;
        case m2c::kret_d4f_71b: 	goto ret_d4f_71b;
        case m2c::kret_d4f_75e: 	goto ret_d4f_75e;
        case m2c::kret_d4f_8d8: 	goto ret_d4f_8d8;
        case m2c::kret_d4f_8f5: 	goto ret_d4f_8f5;
        case m2c::kret_d4f_981: 	goto ret_d4f_981;
        case m2c::kret_d4f_a17: 	goto ret_d4f_a17;
        case m2c::kret_d4f_a67: 	goto ret_d4f_a67;
        case m2c::kret_d4f_af1: 	goto ret_d4f_af1;
        case m2c::kret_d4f_b48: 	goto ret_d4f_b48;
        case m2c::kret_d4f_b4b: 	goto ret_d4f_b4b;
        case m2c::kret_d4f_c02: 	goto ret_d4f_c02;
        case m2c::kret_d4f_c36: 	goto ret_d4f_c36;
        case m2c::kret_d4f_c39: 	goto ret_d4f_c39;
        case m2c::kret_d4f_c3f: 	goto ret_d4f_c3f;
        case m2c::kret_d4f_c45: 	goto ret_d4f_c45;
        case m2c::kret_d4f_c4b: 	goto ret_d4f_c4b;
        case m2c::kret_d4f_c51: 	goto ret_d4f_c51;
        case m2c::kret_d4f_c57: 	goto ret_d4f_c57;
        case m2c::kret_d4f_c5d: 	goto ret_d4f_c5d;
        case m2c::kret_d4f_c63: 	goto ret_d4f_c63;
        case m2c::kret_d4f_c69: 	goto ret_d4f_c69;
        case m2c::kret_d4f_c6f: 	goto ret_d4f_c6f;
        case m2c::kret_d4f_c75: 	goto ret_d4f_c75;
        case m2c::kret_d4f_c7b: 	goto ret_d4f_c7b;
        case m2c::kret_d4f_c81: 	goto ret_d4f_c81;
        case m2c::kret_d4f_c87: 	goto ret_d4f_c87;
        case m2c::kret_d4f_c8d: 	goto ret_d4f_c8d;
        case m2c::kret_d4f_c96: 	goto ret_d4f_c96;
        case m2c::kret_d4f_c9c: 	goto ret_d4f_c9c;
        case m2c::kret_d4f_ca2: 	goto ret_d4f_ca2;
        case m2c::kret_d4f_ca8: 	goto ret_d4f_ca8;
        case m2c::kret_d4f_cae: 	goto ret_d4f_cae;
        case m2c::kret_d4f_cb4: 	goto ret_d4f_cb4;
        case m2c::kret_d4f_cba: 	goto ret_d4f_cba;
        case m2c::kret_d4f_cbd: 	goto ret_d4f_cbd;
        case m2c::kret_d4f_cc3: 	goto ret_d4f_cc3;
        case m2c::kret_d4f_ccc: 	goto ret_d4f_ccc;
        case m2c::kret_d4f_cd2: 	goto ret_d4f_cd2;
        case m2c::kret_d4f_cd8: 	goto ret_d4f_cd8;
        case m2c::kret_d4f_cde: 	goto ret_d4f_cde;
        case m2c::kret_d4f_ce4: 	goto ret_d4f_ce4;
        case m2c::kret_d4f_ce7: 	goto ret_d4f_ce7;
        case m2c::kret_d4f_cf0: 	goto ret_d4f_cf0;
        case m2c::kret_d4f_cf6: 	goto ret_d4f_cf6;
        case m2c::kret_d4f_cf9: 	goto ret_d4f_cf9;
        case m2c::kret_d4f_cff: 	goto ret_d4f_cff;
        case m2c::kret_d4f_d05: 	goto ret_d4f_d05;
        case m2c::kret_d4f_d0b: 	goto ret_d4f_d0b;
        case m2c::kret_d4f_d11: 	goto ret_d4f_d11;
        case m2c::kret_d4f_d17: 	goto ret_d4f_d17;
        case m2c::kret_d4f_d1d: 	goto ret_d4f_d1d;
        case m2c::kret_d4f_d23: 	goto ret_d4f_d23;
        case m2c::kret_d4f_d29: 	goto ret_d4f_d29;
        case m2c::kret_d4f_d2f: 	goto ret_d4f_d2f;
        case m2c::kret_d4f_d35: 	goto ret_d4f_d35;
        case m2c::kret_d4f_d3b: 	goto ret_d4f_d3b;
        case m2c::kret_d4f_d41: 	goto ret_d4f_d41;
        case m2c::kret_d4f_d47: 	goto ret_d4f_d47;
        case m2c::kret_d4f_d4d: 	goto ret_d4f_d4d;
        case m2c::kseg002_40a_proc: 	goto seg002_40a_proc;
        case m2c::kseg002_44b_proc: 	goto seg002_44b_proc;
        case m2c::kseg002_55c_proc: 	goto seg002_55c_proc;
        case m2c::kseg002_5af_proc: 	goto seg002_5af_proc;
        case m2c::kseg002_5df_proc: 	goto seg002_5df_proc;
        case m2c::kseg002_607_proc: 	goto seg002_607_proc;
        case m2c::kseg002_712_proc: 	goto seg002_712_proc;
        case m2c::kseg002_756_proc: 	goto seg002_756_proc;
        case m2c::kseg002_7ba_proc: 	goto seg002_7ba_proc;
        case m2c::kseg002_885_proc: 	goto seg002_885_proc;
        case m2c::kseg002_8ce_proc: 	goto seg002_8ce_proc;
        case m2c::kseg002_8ed_proc: 	goto seg002_8ed_proc;
        case m2c::kseg002_914_proc: 	goto seg002_914_proc;
        case m2c::kseg002_9cd_proc: 	goto seg002_9cd_proc;
        case m2c::kseg002_a0e_proc: 	goto seg002_a0e_proc;
        case m2c::kseg002_ae8_proc: 	goto seg002_ae8_proc;
        case m2c::kseg002_bf7_proc: 	goto seg002_bf7_proc;
        case m2c::kseg002_c33_proc: 	goto seg002_c33_proc;
        case m2c::kseg002_cb7_proc: 	goto seg002_cb7_proc;
        case m2c::kseg002_cd5_proc: 	goto seg002_cd5_proc;
        case m2c::kseg002_ce1_proc: 	goto seg002_ce1_proc;
        case m2c::kseg002_cf3_proc: 	goto seg002_cf3_proc;
        case m2c::ksub_1be8a: 	goto sub_1be8a;
        case m2c::ksub_1bec2: 	goto sub_1bec2;
        case m2c::ksub_1bedc: 	goto sub_1bedc;
        case m2c::ksub_1bff8: 	goto sub_1bff8;
        case m2c::ksub_1c03b: 	goto sub_1c03b;
        case m2c::ksub_1c087: 	goto sub_1c087;
        case m2c::ksub_1c0b7: 	goto sub_1c0b7;
        case m2c::ksub_1c0e0: 	goto sub_1c0e0;
        case m2c::ksub_1c155: 	goto sub_1c155;
        case m2c::ksub_1c1ea: 	goto sub_1c1ea;
        case m2c::ksub_1c293: 	goto sub_1c293;
        case m2c::ksub_1c35e: 	goto sub_1c35e;
        case m2c::ksub_1c3a7: 	goto sub_1c3a7;
        case m2c::ksub_1c40b: 	goto sub_1c40b;
        case m2c::ksub_1c4a6: 	goto sub_1c4a6;
        case m2c::ksub_1c5ef: 	goto sub_1c5ef;
        case m2c::ksub_1c615: 	goto sub_1c615;
        case m2c::ksub_1c6d0: 	goto sub_1c6d0;
        case m2c::ksub_1c763: 	goto sub_1c763;
        case m2c::ksub_1c769: 	goto sub_1c769;
        case m2c::ksub_1c76f: 	goto sub_1c76f;
        case m2c::ksub_1c775: 	goto sub_1c775;
        case m2c::ksub_1c77b: 	goto sub_1c77b;
        case m2c::ksub_1c781: 	goto sub_1c781;
        case m2c::ksub_1c799: 	goto sub_1c799;
        case m2c::ksub_1c79f: 	goto sub_1c79f;
        case m2c::ksub_1c7ab: 	goto sub_1c7ab;
        case m2c::ksub_1c7bd: 	goto sub_1c7bd;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}


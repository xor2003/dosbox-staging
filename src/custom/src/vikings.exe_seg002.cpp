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
	// 32781 
cs=0xd4f;eip=0x0003ba; 	T(CMP(bx, 0x10));	// 32783 cmp     bx, 10h ;~ 0D4F:03BA
ret_d4f_3bd:
	// 5929 
cs=0xd4f;eip=0x0003bd; 	J(JNC(loc_1beb4));	// 32784 jnb     short loc_1BEB4 ;~ 0D4F:03BD
cs=0xd4f;eip=0x0003bf; 	T(SHL(bx, 1));	// 32785 shl     bx, 1 ;~ 0D4F:03BF
cs=0xd4f;eip=0x0003c1; 	T(SHL(bx, 1));	// 32786 shl     bx, 1 ;~ 0D4F:03C1
cs=0xd4f;eip=0x0003c3; 	T(LES(bx, *(dw*)(raddr(cs,bx+0x124))));	// 32787 les     bx, cs:[bx+124h] ;~ 0D4F:03C3
cs=0xd4f;eip=0x0003c8; 	T(MOV(cx, es));	// 32788 mov     cx, es ;~ 0D4F:03C8
cs=0xd4f;eip=0x0003ca; 	T(OR(cx, bx));	// 32789 or      cx, bx ;~ 0D4F:03CA
cs=0xd4f;eip=0x0003cc; 	J(JZ(loc_1beb4));	// 32790 jz      short loc_1BEB4 ;~ 0D4F:03CC
loc_1be9e:
	// 5930 
cs=0xd4f;eip=0x0003ce; 	T(MOV(cx, *(dw*)(raddr(es,bx))));	// 32793 mov     cx, es:[bx] ;~ 0D4F:03CE
cs=0xd4f;eip=0x0003d1; 	T(CMP(cx, ax));	// 32794 cmp     cx, ax ;~ 0D4F:03D1
cs=0xd4f;eip=0x0003d3; 	J(JZ(loc_1bebb));	// 32795 jz      short loc_1BEBB ;~ 0D4F:03D3
cs=0xd4f;eip=0x0003d5; 	T(ADD(bx, 4));	// 32796 add     bx, 4 ;~ 0D4F:03D5
cs=0xd4f;eip=0x0003d8; 	T(CMP(cx, 0x0FFFF));	// 32797 cmp     cx, 0FFFFh ;~ 0D4F:03D8
cs=0xd4f;eip=0x0003db; 	J(JNZ(loc_1be9e));	// 32798 jnz     short loc_1BE9E ;~ 0D4F:03DB
cs=0xd4f;eip=0x0003dd; 	T(MOV(ax, 0));	// 32799 mov     ax, 0 ;~ 0D4F:03DD
cs=0xd4f;eip=0x0003e0; 	T(MOV(dx, 0));	// 32800 mov     dx, 0 ;~ 0D4F:03E0
cs=0xd4f;eip=0x0003e3; 	R(RETF(0));	// 32801 retf ;~ 0D4F:03E3
loc_1beb4:
	// 5931 
cs=0xd4f;eip=0x0003e4; 	T(MOV(ax, 0));	// 32806 mov     ax, 0 ;~ 0D4F:03E4
cs=0xd4f;eip=0x0003e7; 	T(MOV(dx, 0));	// 32807 mov     dx, 0 ;~ 0D4F:03E7
cs=0xd4f;eip=0x0003ea; 	R(RETF(0));	// 32808 retf ;~ 0D4F:03EA
loc_1bebb:
	// 5932 
cs=0xd4f;eip=0x0003eb; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 32812 mov     ax, es:[bx+2] ;~ 0D4F:03EB
cs=0xd4f;eip=0x0003ef; 	T(MOV(dx, es));	// 32813 mov     dx, es ;~ 0D4F:03EF
cs=0xd4f;eip=0x0003f1; 	R(RETF(0));	// 32814 retf ;~ 0D4F:03F1
sub_1bec2:
	// 32821 
cs=0xd4f;eip=0x0003f2; 	T(MOV(bx, sp));	// 32823 mov     bx, sp ;~ 0D4F:03F2
ret_d4f_3f4:
	// 5933 
cs=0xd4f;eip=0x0003f4; 	T(MOV(bx, *(dw*)(raddr(ss,bx+4))));	// 32824 mov     bx, ss:[bx+4] ;~ 0D4F:03F4
cs=0xd4f;eip=0x0003f8; 	X(PUSH(cs));	// 32825 push    cs ;~ 0D4F:03F8
cs=0xd4f;eip=0x0003f9; 	J(CALL(sub_1be8a,0));	// 32826 call    near ptr sub_1BE8A ;~ 0D4F:03F9
cs=0xd4f;eip=0x0003fc; 	T(CMP(ax, 0));	// 32827 cmp     ax, 0 ;~ 0D4F:03FC
cs=0xd4f;eip=0x0003ff; 	J(JNZ(loc_1bed6));	// 32828 jnz     short loc_1BED6 ;~ 0D4F:03FF
cs=0xd4f;eip=0x000401; 	T(CMP(dx, 0));	// 32829 cmp     dx, 0 ;~ 0D4F:0401
cs=0xd4f;eip=0x000404; 	J(JZ(locret_1bed9));	// 32830 jz      short locret_1BED9 ;~ 0D4F:0404
loc_1bed6:
	// 5934 
cs=0xd4f;eip=0x000406; 	X(PUSH(dx));	// 32833 push    dx ;~ 0D4F:0406
cs=0xd4f;eip=0x000407; 	X(PUSH(ax));	// 32834 push    ax ;~ 0D4F:0407
cs=0xd4f;eip=0x000408; 	R(RETF(0));	// 32835 retf ;~ 0D4F:0408
locret_1bed9:
	// 5935 
cs=0xd4f;eip=0x000409; 	R(RETF(0));	// 32839 retf ;~ 0D4F:0409
seg002_40a_proc:
	// 32844 
loc_1beda:
	// 5936 
cs=0xd4f;eip=0x00040a; 	T(ADD(al, *(raddr(ds,bx+si))));	// 32846 add     al, [bx+si] ;~ 0D4F:040A
sub_1bedc:
	// 32851 
cs=0xd4f;eip=0x00040c; 	X(DEC(*(dw*)(raddr(cs,m2c::kloc_1beda))));	// 32852 dec     word ptr cs:loc_1BEDA ;~ 0D4F:040C
cs=0xd4f;eip=0x000411; 	J(JNZ(locret_1bf1a));	// 32853 jnz     short locret_1BF1A ;~ 0D4F:0411
cs=0xd4f;eip=0x000413; 	X(MOV(*(dw*)(raddr(cs,m2c::kloc_1beda)), 2));	// 32854 mov     word ptr cs:loc_1BEDA, 2 ;~ 0D4F:0413
cs=0xd4f;eip=0x00041a; 	T(MOV(al, 0x36));	// 32855 mov     al, 36h ; '6' ;~ 0D4F:041A
cs=0xd4f;eip=0x00041c; 	R(OUT(0x43, al));	// 32856 out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0D4F:041C
cs=0xd4f;eip=0x00041e; 	T(MOV(ax, 0x7FFF));	// 32857 mov     ax, 7FFFh ;~ 0D4F:041E
cs=0xd4f;eip=0x000421; 	J({;});	// 32858 jmp     short $+2 ;~ 0D4F:0421
loc_1bef3:
	// 5937 
cs=0xd4f;eip=0x000423; 	R(OUT(0x40, al));	// 32862 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0D4F:0423
cs=0xd4f;eip=0x000425; 	T(MOV(al, ah));	// 32863 mov     al, ah ;~ 0D4F:0425
cs=0xd4f;eip=0x000427; 	J({;});	// 32864 jmp     short $+2 ;~ 0D4F:0427
loc_1bef9:
	// 5938 
cs=0xd4f;eip=0x000429; 	R(OUT(0x40, al));	// 32868 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0D4F:0429
cs=0xd4f;eip=0x00042b; 	T(MOV(dx, 0x3DA));	// 32869 mov     dx, 3DAh ;~ 0D4F:042B
loc_1befe:
	// 5939 
cs=0xd4f;eip=0x00042e; 	R(IN(al, dx));	// 32872 in      al, dx          ; Video status bits: ;~ 0D4F:042E
cs=0xd4f;eip=0x00042f; 	T(TEST(al, 8));	// 32877 test    al, 8 ;~ 0D4F:042F
cs=0xd4f;eip=0x000431; 	J(JZ(loc_1befe));	// 32878 jz      short loc_1BEFE ;~ 0D4F:0431
cs=0xd4f;eip=0x000433; 	T(MOV(al, 0x36));	// 32879 mov     al, 36h ; '6' ;~ 0D4F:0433
cs=0xd4f;eip=0x000435; 	R(OUT(0x43, al));	// 32880 out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0D4F:0435
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000437; 	T(MOV(ax, *(dw*)(((db*)&word_1bbf2))));	// 32881 mov     ax, cs:word_1BBF2 ;~ 0D4F:0437
cs=0xd4f;eip=0x00043b; 	J({;});	// 32882 jmp     short $+2 ;~ 0D4F:043B
loc_1bf0d:
	// 5940 
cs=0xd4f;eip=0x00043d; 	R(OUT(0x40, al));	// 32886 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0D4F:043D
cs=0xd4f;eip=0x00043f; 	T(MOV(al, ah));	// 32887 mov     al, ah ;~ 0D4F:043F
cs=0xd4f;eip=0x000441; 	J({;});	// 32888 jmp     short $+2 ;~ 0D4F:0441
loc_1bf13:
	// 5941 
cs=0xd4f;eip=0x000443; 	R(OUT(0x40, al));	// 32892 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0D4F:0443
cs=0xd4f;eip=0x000445; 	J(CALLF(sub_1797b,0));	// 32893 call    sub_1797B ;~ 0D4F:0445
locret_1bf1a:
	// 5942 
cs=0xd4f;eip=0x00044a; 	R(RETF(0));	// 32896 retf ;~ 0D4F:044A
seg002_44b_proc:
	// 32900 
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00044b; 	X(INC(*(dw*)(((db*)&word_1bad2))));	// 32900 inc     cs:word_1BAD2 ;~ 0D4F:044B
ret_d4f_450:
	// 5943 
cs=0xd4f;eip=0x000450; 	T(CLD);	// 32901 cld ;~ 0D4F:0450
cs=0xd4f;eip=0x000451; 	X(PUSH(ax));	// 32902 push    ax ;~ 0D4F:0451
cs=0xd4f;eip=0x000452; 	X(PUSH(bx));	// 32903 push    bx ;~ 0D4F:0452
cs=0xd4f;eip=0x000453; 	X(PUSH(cx));	// 32904 push    cx ;~ 0D4F:0453
cs=0xd4f;eip=0x000454; 	X(PUSH(dx));	// 32905 push    dx ;~ 0D4F:0454
cs=0xd4f;eip=0x000455; 	X(PUSH(si));	// 32906 push    si ;~ 0D4F:0455
cs=0xd4f;eip=0x000456; 	X(PUSH(di));	// 32907 push    di ;~ 0D4F:0456
cs=0xd4f;eip=0x000457; 	X(PUSH(bp));	// 32908 push    bp ;~ 0D4F:0457
cs=0xd4f;eip=0x000458; 	X(PUSH(es));	// 32909 push    es ;~ 0D4F:0458
cs=0xd4f;eip=0x000459; 	X(PUSH(ds));	// 32910 push    ds ;~ 0D4F:0459
cs=0xd4f;eip=0x00045a; 	X(PUSH(cs));	// 32911 push    cs ;~ 0D4F:045A
cs=0xd4f;eip=0x00045b; 	J(CALL(sub_1bedc,0));	// 32912 call    near ptr sub_1BEDC ;~ 0D4F:045B
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00045e; 	T(CMP(*(dw*)(((db*)&word_1bad2)), 1));	// 32913 cmp     cs:word_1BAD2, 1 ;~ 0D4F:045E
cs=0xd4f;eip=0x000464; 	J(JZ(loc_1bf39));	// 32914 jz      short loc_1BF39 ;~ 0D4F:0464
cs=0xd4f;eip=0x000466; 	J(JMP(loc_1bfc7));	// 32915 jmp     loc_1BFC7 ;~ 0D4F:0466
loc_1bf39:
	// 5944 
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000469; 	X(MOV(*(dw*)((byte_1bc85)+0x1FF), ss));	// 32919 mov     word ptr cs:byte_1BC85+1FFh, ss ;~ 0D4F:0469
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00046e; 	X(MOV(*(dw*)((byte_1bc85)+0x201), sp));	// 32920 mov     word ptr cs:byte_1BC85+201h, sp ;~ 0D4F:046E
cs=0xd4f;eip=0x000473; 	T(MOV(ax, cs));	// 32921 mov     ax, cs ;~ 0D4F:0473
cs=0xd4f;eip=0x000475; 	R(MOV(ss, ax));	// 32922 mov     ss, ax ;~ 0D4F:0475
cs=0xd4f;eip=0x000477; 	T(MOV(sp, 0x3B4));	// 32924 mov     sp, 3B4h ;~ 0D4F:0477
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00047a; 	X(MOV(*(dw*)(((db*)&word_1bbec)), 0));	// 32925 mov     cs:word_1BBEC, 0 ;~ 0D4F:047A
loc_1bf51:
	// 5945 
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000481; 	T(MOV(si, *(dw*)(((db*)&word_1bbec))));	// 32928 mov     si, cs:word_1BBEC ;~ 0D4F:0481
cs=0xd4f;eip=0x000486; 	T(SHL(si, 1));	// 32929 shl     si, 1 ;~ 0D4F:0486
cs=0xd4f;eip=0x000488; 	T(CMP(*(dw*)(raddr(cs,si+0x6A)), 2));	// 32930 cmp     word ptr cs:[si+6Ah], 2 ;~ 0D4F:0488
cs=0xd4f;eip=0x00048e; 	J(JNZ(loc_1bfb0));	// 32931 jnz     short loc_1BFB0 ;~ 0D4F:048E
cs=0xd4f;eip=0x000490; 	T(MOV(ds, *(dw*)(raddr(cs,si+0x48))));	// 32932 mov     ds, word ptr cs:[si+48h] ;~ 0D4F:0490
cs=0xd4f;eip=0x000495; 	T(SHL(si, 1));	// 32933 shl     si, 1 ;~ 0D4F:0495
cs=0xd4f;eip=0x000497; 	T(MOV(ax, *(dw*)(raddr(cs,si+0x8C))));	// 32934 mov     ax, cs:[si+8Ch] ;~ 0D4F:0497
cs=0xd4f;eip=0x00049c; 	T(MOV(dx, *(dw*)(raddr(cs,si+0x8E))));	// 32935 mov     dx, cs:[si+8Eh] ;~ 0D4F:049C
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0004a1; 	T(ADD(ax, *(dw*)(((db*)&word_1bbe4))));	// 32936 add     ax, cs:word_1BBE4 ;~ 0D4F:04A1
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0004a6; 	T(ADC(dx, *(dw*)(((db*)&word_1bbe6))));	// 32937 adc     dx, cs:word_1BBE6 ;~ 0D4F:04A6
cs=0xd4f;eip=0x0004ab; 	T(CMP(dx, *(dw*)(raddr(cs,si+0x0D2))));	// 32938 cmp     dx, cs:[si+0D2h] ;~ 0D4F:04AB
cs=0xd4f;eip=0x0004b0; 	J(JC(loc_1bf8b));	// 32939 jb      short loc_1BF8B ;~ 0D4F:04B0
cs=0xd4f;eip=0x0004b2; 	J(JA(loc_1bf97));	// 32940 ja      short loc_1BF97 ;~ 0D4F:04B2
cs=0xd4f;eip=0x0004b4; 	T(CMP(ax, *(dw*)(raddr(cs,si+0x0D0))));	// 32941 cmp     ax, cs:[si+0D0h] ;~ 0D4F:04B4
cs=0xd4f;eip=0x0004b9; 	J(JNC(loc_1bf97));	// 32942 jnb     short loc_1BF97 ;~ 0D4F:04B9
loc_1bf8b:
	// 5946 
cs=0xd4f;eip=0x0004bb; 	X(MOV(*(dw*)(raddr(cs,si+0x8C)), ax));	// 32945 mov     cs:[si+8Ch], ax ;~ 0D4F:04BB
cs=0xd4f;eip=0x0004c0; 	X(MOV(*(dw*)(raddr(cs,si+0x8E)), dx));	// 32946 mov     cs:[si+8Eh], dx ;~ 0D4F:04C0
cs=0xd4f;eip=0x0004c5; 	J(JMP(loc_1bfb0));	// 32947 jmp     short loc_1BFB0 ;~ 0D4F:04C5
loc_1bf97:
	// 5947 
cs=0xd4f;eip=0x0004c7; 	T(SUB(ax, *(dw*)(raddr(cs,si+0x0D0))));	// 32952 sub     ax, cs:[si+0D0h] ;~ 0D4F:04C7
cs=0xd4f;eip=0x0004cc; 	T(SBB(dx, *(dw*)(raddr(cs,si+0x0D2))));	// 32953 sbb     dx, cs:[si+0D2h] ;~ 0D4F:04CC
cs=0xd4f;eip=0x0004d1; 	X(MOV(*(dw*)(raddr(cs,si+0x8C)), ax));	// 32954 mov     cs:[si+8Ch], ax ;~ 0D4F:04D1
cs=0xd4f;eip=0x0004d6; 	X(MOV(*(dw*)(raddr(cs,si+0x8E)), dx));	// 32955 mov     cs:[si+8Eh], dx ;~ 0D4F:04D6
cs=0xd4f;eip=0x0004db; 	J(CALLF(__dispatch_call,*(dd*)(raddr(cs,si+4))));	// 32956 call    dword ptr cs:[si+4] ;~ 0D4F:04DB
loc_1bfb0:
	// 5948 
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0004e0; 	X(INC(*(dw*)(((db*)&word_1bbec))));	// 32960 inc     cs:word_1BBEC ;~ 0D4F:04E0
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0004e5; 	T(CMP(*(dw*)(((db*)&word_1bbec)), 0x10));	// 32961 cmp     cs:word_1BBEC, 10h ;~ 0D4F:04E5
cs=0xd4f;eip=0x0004eb; 	J(JBE(loc_1bf51));	// 32962 jbe     short loc_1BF51 ;~ 0D4F:04EB
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0004ed; 	R(MOV(ss, *(dw*)((byte_1bc85)+0x1FF)));	// 32963 mov     ss, word ptr cs:byte_1BC85+1FFh ;~ 0D4F:04ED
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0004f2; 	T(MOV(sp, *(dw*)((byte_1bc85)+0x201)));	// 32965 mov     sp, word ptr cs:byte_1BC85+201h ;~ 0D4F:04F2
loc_1bfc7:
	// 5949 
cs=0xd4f;eip=0x0004f7; 	X(POP(ds));	// 32968 pop     ds ;~ 0D4F:04F7
cs=0xd4f;eip=0x0004f8; 	X(POP(es));	// 32969 pop     es ;~ 0D4F:04F8
cs=0xd4f;eip=0x0004f9; 	X(POP(bp));	// 32970 pop     bp ;~ 0D4F:04F9
cs=0xd4f;eip=0x0004fa; 	X(POP(di));	// 32971 pop     di ;~ 0D4F:04FA
cs=0xd4f;eip=0x0004fb; 	X(POP(si));	// 32972 pop     si ;~ 0D4F:04FB
cs=0xd4f;eip=0x0004fc; 	X(POP(dx));	// 32973 pop     dx ;~ 0D4F:04FC
cs=0xd4f;eip=0x0004fd; 	X(POP(cx));	// 32974 pop     cx ;~ 0D4F:04FD
cs=0xd4f;eip=0x0004fe; 	X(POP(bx));	// 32975 pop     bx ;~ 0D4F:04FE
cs=0xd4f;eip=0x0004ff; 	T(MOV(al, 0x20));	// 32976 mov     al, 20h ; ' ' ;~ 0D4F:04FF
cs=0xd4f;eip=0x000501; 	R(OUT(0x20, al));	// 32977 out     20h, al         ; Interrupt controller, 8259A. ;~ 0D4F:0501
cs=0xd4f;eip=0x000503; 	X(POP(ax));	// 32978 pop     ax ;~ 0D4F:0503
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000504; 	T(CMP(*(dw*)((atest)), 0x6554));	// 32979 cmp     word ptr cs:aTest, 6554h ; "Test" ;~ 0D4F:0504
cs=0xd4f;eip=0x00050b; 	J(JNZ(loc_1bfec));	// 32980 jnz     short loc_1BFEC ;~ 0D4F:050B
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00050d; 	T(CMP(*(dw*)((atest)+2), 0x7473));	// 32981 cmp     word ptr cs:aTest+2, 7473h ; "st" ;~ 0D4F:050D
cs=0xd4f;eip=0x000514; 	J(JNZ(loc_1bfec));	// 32982 jnz     short loc_1BFEC ;~ 0D4F:0514
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000516; 	X(DEC(*(dw*)(((db*)&word_1bad2))));	// 32983 dec     cs:word_1BAD2 ;~ 0D4F:0516
cs=0xd4f;eip=0x00051b; 	R(IRET);	// 32984 iret ;~ 0D4F:051B
loc_1bfec:
	// 5950 
cs=0xd4f;eip=0x00051c; 	T(MOV(ax, 0x2DBA));	// 32989 mov     ax, 2DBAh ;~ 0D4F:051C
cs=0xd4f;eip=0x00051f; 	T(XOR(bx, bx));	// 32990 xor     bx, bx ;~ 0D4F:051F
cs=0xd4f;eip=0x000521; 	J(CALLF(sub_10dba,0));	// 32991 call    far ptr sub_10DBA ;~ 0D4F:0521
cs=0xd4f;eip=0x000526; 	J(JMP(loc_1bfec));	// 32993 jmp     short loc_1BFEC ;~ 0D4F:0526
sub_1bff8:
	// 32998 
cs=0xd4f;eip=0x000528; 	X(PUSH(ds));	// 32999 push    ds ;~ 0D4F:0528
ret_d4f_529:
	// 5951 
cs=0xd4f;eip=0x000529; 	X(PUSH(si));	// 33000 push    si ;~ 0D4F:0529
cs=0xd4f;eip=0x00052a; 	X(PUSH(di));	// 33001 push    di ;~ 0D4F:052A
cs=0xd4f;eip=0x00052b; 	X(PUSHF);	// 33002 pushf ;~ 0D4F:052B
cs=0xd4f;eip=0x00052c; 	T(CLI);	// 33003 cli ;~ 0D4F:052C
cs=0xd4f;eip=0x00052d; 	T(CLD);	// 33004 cld ;~ 0D4F:052D
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00052e; 	X(MOV(*(dw*)(((db*)&word_1bbe4)), 0x0FFFF));	// 33005 mov     cs:word_1BBE4, 0FFFFh ;~ 0D4F:052E
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000535; 	X(MOV(*(dw*)(((db*)&word_1bbe6)), 0x0FFFF));	// 33006 mov     cs:word_1BBE6, 0FFFFh ;~ 0D4F:0535
cs=0xd4f;eip=0x00053c; 	X(PUSH(cs));	// 33007 push    cs ;~ 0D4F:053C
cs=0xd4f;eip=0x00053d; 	X(POP(es));	// 33008 pop     es ;~ 0D4F:053D
cs=0xd4f;eip=0x00053e; 	T(MOV(di, 0x6A));	// 33010 mov     di, 6Ah ; 'j' ;~ 0D4F:053E
cs=0xd4f;eip=0x000541; 	T(MOV(cx, 0x11));	// 33011 mov     cx, 11h ;~ 0D4F:0541
cs=0xd4f;eip=0x000544; 	T(MOV(ax, 0));	// 33012 mov     ax, 0 ;~ 0D4F:0544
	// 33013 rep stosw ;~ 0D4F:0547
cs=0xd4f;eip=0x000547; 	X(	REP STOSW);	// 33013 rep stosw ;~ 0D4F:0547
cs=0xd4f;eip=0x000549; 	T(MOV(di, 0x8C));	// 33014 mov     di, 8Ch ; 'Œ' ;~ 0D4F:0549
cs=0xd4f;eip=0x00054c; 	T(MOV(cx, 0x22));	// 33015 mov     cx, 22h ; '"' ;~ 0D4F:054C
	// 33016 rep stosw ;~ 0D4F:054F
cs=0xd4f;eip=0x00054f; 	X(	REP STOSW);	// 33016 rep stosw ;~ 0D4F:054F
cs=0xd4f;eip=0x000551; 	T(MOV(di, 0x0D0));	// 33017 mov     di, 0D0h ; 'Ğ' ;~ 0D4F:0551
cs=0xd4f;eip=0x000554; 	T(MOV(cx, 0x22));	// 33018 mov     cx, 22h ; '"' ;~ 0D4F:0554
	// 33019 rep stosw ;~ 0D4F:0557
cs=0xd4f;eip=0x000557; 	X(	REP STOSW);	// 33019 rep stosw ;~ 0D4F:0557
loc_1c029:
	// 5952 
cs=0xd4f;eip=0x000559; 	T(OR(bh, 0));	// 33022 or      bh, 0 ;~ 0D4F:0559
seg002_55c_proc:
	// 33025 
cs=0xd4f;eip=0x00055c; 	X(PUSH(cs));	// 33025 push    cs ;~ 0D4F:055C
cs=0xd4f;eip=0x00055d; 	J(CALL(_group2,m2c::kloc_1c029));	// 33026 call    near ptr loc_1C029+1 ;~ 0D4F:055D
cs=0xd4f;eip=0x000560; 	X(POP(di));	// 33027 pop     di ;~ 0D4F:0560
cs=0xd4f;eip=0x000561; 	X(POP(si));	// 33028 pop     si ;~ 0D4F:0561
cs=0xd4f;eip=0x000562; 	X(POP(ds));	// 33029 pop     ds ;~ 0D4F:0562
cs=0xd4f;eip=0x000563; 	R(RETF(0));	// 33030 retf ;~ 0D4F:0563
ret_d4f_564:
	// 5953 
cs=0xd4f;eip=0x000564; 	X(PUSHF);	// 33032 pushf ;~ 0D4F:0564
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000565; 	J(CALLF(__dispatch_call,*(dd*)(((db*)&dword_1bbe8))));	// 33033 call    cs:dword_1BBE8 ;~ 0D4F:0565
cs=0xd4f;eip=0x00056a; 	R(RETF(0));	// 33034 retf ;~ 0D4F:056A
sub_1c03b:
	// 33039 
cs=0xd4f;eip=0x00056b; 	X(PUSH(ds));	// 33040 push    ds ;~ 0D4F:056B
ret_d4f_56c:
	// 5954 
cs=0xd4f;eip=0x00056c; 	X(PUSH(si));	// 33041 push    si ;~ 0D4F:056C
cs=0xd4f;eip=0x00056d; 	X(PUSH(di));	// 33042 push    di ;~ 0D4F:056D
cs=0xd4f;eip=0x00056e; 	X(PUSHF);	// 33043 pushf ;~ 0D4F:056E
cs=0xd4f;eip=0x00056f; 	T(CLI);	// 33044 cli ;~ 0D4F:056F
cs=0xd4f;eip=0x000570; 	T(MOV(ax, 0));	// 33045 mov     ax, 0 ;~ 0D4F:0570
cs=0xd4f;eip=0x000573; 	T(MOV(es, ax));	// 33046 mov     es, ax ;~ 0D4F:0573
cs=0xd4f;eip=0x000575; 	T(MOV(bx, *(dw*)(raddr(es,0x20))));	// 33048 mov     bx, es:20h ;~ 0D4F:0575
cs=0xd4f;eip=0x00057a; 	T(MOV(es, *(dw*)(raddr(es,0x22))));	// 33049 mov     es, word ptr es:22h ;~ 0D4F:057A
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00057f; 	X(MOV(*(dw*)(((db*)&dword_1bbe8)), bx));	// 33051 mov     word ptr cs:dword_1BBE8, bx ;~ 0D4F:057F
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000584; 	X(MOV(*(dw*)(((db*)&dword_1bbe8)+2), es));	// 33052 mov     word ptr cs:dword_1BBE8+2, es ;~ 0D4F:0584
cs=0xd4f;eip=0x000589; 	T(MOV(bx, 0x564));	// 33053 mov     bx, 564h ;~ 0D4F:0589
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00058c; 	X(MOV(*(dw*)(((db*)&word_1bb14)), bx));	// 33054 mov     cs:word_1BB14, bx ;~ 0D4F:058C
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000591; 	X(MOV(*(dw*)(((db*)&word_1bb16)), cs));	// 33055 mov     cs:word_1BB16, cs ;~ 0D4F:0591
cs=0xd4f;eip=0x000596; 	T(MOV(ax, cs));	// 33056 mov     ax, cs ;~ 0D4F:0596
cs=0xd4f;eip=0x000598; 	T(MOV(ds, ax));	// 33057 mov     ds, ax ;~ 0D4F:0598
cs=0xd4f;eip=0x00059a; 	T(MOV(dx, 0x44B));	// 33059 mov     dx, 44Bh ;~ 0D4F:059A
cs=0xd4f;eip=0x00059d; 	T(MOV(ax, 0));	// 33060 mov     ax, 0 ;~ 0D4F:059D
cs=0xd4f;eip=0x0005a0; 	T(MOV(es, ax));	// 33061 mov     es, ax ;~ 0D4F:05A0
cs=0xd4f;eip=0x0005a2; 	X(MOV(*(dw*)(raddr(es,0x20)), dx));	// 33063 mov     es:20h, dx ;~ 0D4F:05A2
cs=0xd4f;eip=0x0005a7; 	X(MOV(*(dw*)(raddr(es,0x22)), ds));	// 33064 mov     word ptr es:22h, ds ;~ 0D4F:05A7
loc_1c07c:
	// 5955 
cs=0xd4f;eip=0x0005ac; 	T(OR(bh, 0));	// 33067 or      bh, 0 ;~ 0D4F:05AC
seg002_5af_proc:
	// 33070 
cs=0xd4f;eip=0x0005af; 	X(PUSH(cs));	// 33070 push    cs ;~ 0D4F:05AF
cs=0xd4f;eip=0x0005b0; 	J(CALL(_group2,m2c::kloc_1c07c));	// 33071 call    near ptr loc_1C07C+1 ;~ 0D4F:05B0
cs=0xd4f;eip=0x0005b3; 	X(POP(di));	// 33072 pop     di ;~ 0D4F:05B3
cs=0xd4f;eip=0x0005b4; 	X(POP(si));	// 33073 pop     si ;~ 0D4F:05B4
cs=0xd4f;eip=0x0005b5; 	X(POP(ds));	// 33074 pop     ds ;~ 0D4F:05B5
cs=0xd4f;eip=0x0005b6; 	R(RETF(0));	// 33076 retf ;~ 0D4F:05B6
sub_1c087:
	// 33081 
cs=0xd4f;eip=0x0005b7; 	X(PUSH(ds));	// 33082 push    ds ;~ 0D4F:05B7
ret_d4f_5b8:
	// 5956 
cs=0xd4f;eip=0x0005b8; 	X(PUSH(si));	// 33083 push    si ;~ 0D4F:05B8
cs=0xd4f;eip=0x0005b9; 	X(PUSH(di));	// 33084 push    di ;~ 0D4F:05B9
cs=0xd4f;eip=0x0005ba; 	X(PUSHF);	// 33085 pushf ;~ 0D4F:05BA
cs=0xd4f;eip=0x0005bb; 	T(CLI);	// 33086 cli ;~ 0D4F:05BB
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0005bc; 	X(MOV(*(dw*)(((db*)&word_1bbec)), 0x0FFFF));	// 33087 mov     cs:word_1BBEC, 0FFFFh ;~ 0D4F:05BC
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0005c3; 	T(MOV(dx, *(dw*)(((db*)&dword_1bbe8))));	// 33088 mov     dx, word ptr cs:dword_1BBE8 ;~ 0D4F:05C3
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0005c8; 	T(MOV(ds, *(dw*)(((db*)&dword_1bbe8)+2)));	// 33089 mov     ds, word ptr cs:dword_1BBE8+2 ;~ 0D4F:05C8
cs=0xd4f;eip=0x0005cd; 	T(MOV(ax, 0));	// 33090 mov     ax, 0 ;~ 0D4F:05CD
cs=0xd4f;eip=0x0005d0; 	T(MOV(es, ax));	// 33091 mov     es, ax ;~ 0D4F:05D0
cs=0xd4f;eip=0x0005d2; 	X(MOV(*(dw*)(raddr(es,0x20)), dx));	// 33092 mov     es:20h, dx ;~ 0D4F:05D2
cs=0xd4f;eip=0x0005d7; 	X(MOV(*(dw*)(raddr(es,0x22)), ds));	// 33093 mov     word ptr es:22h, ds ;~ 0D4F:05D7
loc_1c0ac:
	// 5957 
cs=0xd4f;eip=0x0005dc; 	T(OR(bh, 0));	// 33096 or      bh, 0 ;~ 0D4F:05DC
seg002_5df_proc:
	// 33099 
cs=0xd4f;eip=0x0005df; 	X(PUSH(cs));	// 33099 push    cs ;~ 0D4F:05DF
cs=0xd4f;eip=0x0005e0; 	J(CALL(_group2,m2c::kloc_1c0ac));	// 33100 call    near ptr loc_1C0AC+1 ;~ 0D4F:05E0
cs=0xd4f;eip=0x0005e3; 	X(POP(di));	// 33101 pop     di ;~ 0D4F:05E3
cs=0xd4f;eip=0x0005e4; 	X(POP(si));	// 33102 pop     si ;~ 0D4F:05E4
cs=0xd4f;eip=0x0005e5; 	X(POP(ds));	// 33103 pop     ds ;~ 0D4F:05E5
cs=0xd4f;eip=0x0005e6; 	R(RETF(0));	// 33104 retf ;~ 0D4F:05E6
sub_1c0b7:
	// 33110 
#undef arg_2
#define arg_2 6
	// 33113 arg_2           = word ptr  6 ;~ 0D4F:05E7
ret_d4f_5e7:
	// 5958 
cs=0xd4f;eip=0x0005e7; 	X(PUSH(bp));	// 33115 push    bp ;~ 0D4F:05E7
cs=0xd4f;eip=0x0005e8; 	T(MOV(bp, sp));	// 33116 mov     bp, sp ;~ 0D4F:05E8
cs=0xd4f;eip=0x0005ea; 	X(PUSH(ds));	// 33117 push    ds ;~ 0D4F:05EA
cs=0xd4f;eip=0x0005eb; 	X(PUSH(si));	// 33118 push    si ;~ 0D4F:05EB
cs=0xd4f;eip=0x0005ec; 	X(PUSH(di));	// 33119 push    di ;~ 0D4F:05EC
cs=0xd4f;eip=0x0005ed; 	X(PUSHF);	// 33120 pushf ;~ 0D4F:05ED
cs=0xd4f;eip=0x0005ee; 	T(CLI);	// 33121 cli ;~ 0D4F:05EE
cs=0xd4f;eip=0x0005ef; 	T(MOV(al, 0x36));	// 33122 mov     al, 36h ; '6' ;~ 0D4F:05EF
cs=0xd4f;eip=0x0005f1; 	R(OUT(0x43, al));	// 33123 out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0D4F:05F1
cs=0xd4f;eip=0x0005f3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 33124 mov     ax, [bp+arg_2] ;~ 0D4F:05F3
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0005f6; 	X(MOV(*(dw*)(((db*)&word_1bbf2)), ax));	// 33125 mov     cs:word_1BBF2, ax ;~ 0D4F:05F6
cs=0xd4f;eip=0x0005fa; 	J({;});	// 33126 jmp     short $+2 ;~ 0D4F:05FA
loc_1c0cc:
	// 5959 
cs=0xd4f;eip=0x0005fc; 	R(OUT(0x40, al));	// 33130 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0D4F:05FC
cs=0xd4f;eip=0x0005fe; 	T(MOV(al, ah));	// 33131 mov     al, ah ;~ 0D4F:05FE
cs=0xd4f;eip=0x000600; 	J({;});	// 33132 jmp     short $+2 ;~ 0D4F:0600
loc_1c0d2:
	// 5960 
cs=0xd4f;eip=0x000602; 	R(OUT(0x40, al));	// 33136 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0D4F:0602
loc_1c0d4:
	// 5961 
cs=0xd4f;eip=0x000604; 	T(OR(bh, 0));	// 33139 or      bh, 0 ;~ 0D4F:0604
seg002_607_proc:
	// 33142 
cs=0xd4f;eip=0x000607; 	X(PUSH(cs));	// 33142 push    cs ;~ 0D4F:0607
cs=0xd4f;eip=0x000608; 	J(CALL(_group2,m2c::kloc_1c0d4));	// 33143 call    near ptr loc_1C0D4+1 ;~ 0D4F:0608
cs=0xd4f;eip=0x00060b; 	X(POP(di));	// 33144 pop     di ;~ 0D4F:060B
cs=0xd4f;eip=0x00060c; 	X(POP(si));	// 33145 pop     si ;~ 0D4F:060C
cs=0xd4f;eip=0x00060d; 	X(POP(ds));	// 33146 pop     ds ;~ 0D4F:060D
cs=0xd4f;eip=0x00060e; 	X(POP(bp));	// 33147 pop     bp ;~ 0D4F:060E
cs=0xd4f;eip=0x00060f; 	R(RETF(0));	// 33148 retf ;~ 0D4F:060F
sub_1c0e0:
	// 33154 
#undef arg_0
#define arg_0 6
	// 33156 arg_0           = word ptr  6 ;~ 0D4F:0610
ret_d4f_610:
	// 5962 
cs=0xd4f;eip=0x000610; 	X(PUSH(bp));	// 33158 push    bp ;~ 0D4F:0610
cs=0xd4f;eip=0x000611; 	T(MOV(bp, sp));	// 33159 mov     bp, sp ;~ 0D4F:0611
cs=0xd4f;eip=0x000613; 	X(PUSH(ds));	// 33160 push    ds ;~ 0D4F:0613
cs=0xd4f;eip=0x000614; 	X(PUSH(si));	// 33161 push    si ;~ 0D4F:0614
cs=0xd4f;eip=0x000615; 	X(PUSH(di));	// 33162 push    di ;~ 0D4F:0615
cs=0xd4f;eip=0x000616; 	T(MOV(ax, 0));	// 33163 mov     ax, 0 ;~ 0D4F:0616
cs=0xd4f;eip=0x000619; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0D68D));	// 33164 cmp     [bp+arg_0], 0D68Dh ;~ 0D4F:0619
cs=0xd4f;eip=0x00061e; 	J(JNC(loc_1c0fd));	// 33165 jnb     short loc_1C0FD ;~ 0D4F:061E
cs=0xd4f;eip=0x000620; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 33166 mov     ax, [bp+arg_0] ;~ 0D4F:0620
cs=0xd4f;eip=0x000623; 	T(MOV(bx, 0x20BC));	// 33167 mov     bx, 20BCh ;~ 0D4F:0623
cs=0xd4f;eip=0x000626; 	T(MOV(cx, 0x2710));	// 33168 mov     cx, 2710h ;~ 0D4F:0626
cs=0xd4f;eip=0x000629; 	T(MUL1_2(cx));	// 33169 mul     cx ;~ 0D4F:0629
cs=0xd4f;eip=0x00062b; 	T(DIV2(bx));	// 33170 div     bx ;~ 0D4F:062B
loc_1c0fd:
	// 5963 
cs=0xd4f;eip=0x00062d; 	X(PUSH(ax));	// 33173 push    ax ;~ 0D4F:062D
cs=0xd4f;eip=0x00062e; 	X(PUSH(cs));	// 33174 push    cs ;~ 0D4F:062E
cs=0xd4f;eip=0x00062f; 	J(CALL(sub_1c0b7,0));	// 33175 call    sub_1C0B7 ;~ 0D4F:062F
cs=0xd4f;eip=0x000632; 	T(ADD(sp, 2));	// 33176 add     sp, 2 ;~ 0D4F:0632
cs=0xd4f;eip=0x000635; 	X(POP(di));	// 33177 pop     di ;~ 0D4F:0635
cs=0xd4f;eip=0x000636; 	X(POP(si));	// 33178 pop     si ;~ 0D4F:0636
cs=0xd4f;eip=0x000637; 	X(POP(ds));	// 33179 pop     ds ;~ 0D4F:0637
cs=0xd4f;eip=0x000638; 	X(POP(bp));	// 33180 pop     bp ;~ 0D4F:0638
cs=0xd4f;eip=0x000639; 	R(RETF(0));	// 33181 retf ;~ 0D4F:0639
sub_1c10a:
	// 33189 
#undef arg_0
#define arg_0 6
	// 33191 arg_0           = word ptr  6 ;~ 0D4F:063A
#undef arg_2
#define arg_2 8
	// 33192 arg_2           = word ptr  8 ;~ 0D4F:063A
#undef arg_4
#define arg_4 0x0A
	// 33193 arg_4           = word ptr  0Ah ;~ 0D4F:063A
#undef arg_6
#define arg_6 0x0C
	// 33194 arg_6           = word ptr  0Ch ;~ 0D4F:063A
ret_d4f_63a:
	// 5964 
cs=0xd4f;eip=0x00063a; 	X(PUSH(bp));	// 33196 push    bp ;~ 0D4F:063A
cs=0xd4f;eip=0x00063b; 	T(MOV(bp, sp));	// 33197 mov     bp, sp ;~ 0D4F:063B
cs=0xd4f;eip=0x00063d; 	X(PUSH(ds));	// 33198 push    ds ;~ 0D4F:063D
cs=0xd4f;eip=0x00063e; 	X(PUSH(si));	// 33199 push    si ;~ 0D4F:063E
cs=0xd4f;eip=0x00063f; 	X(PUSH(di));	// 33200 push    di ;~ 0D4F:063F
cs=0xd4f;eip=0x000640; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 33201 mov     ax, [bp+arg_0] ;~ 0D4F:0640
cs=0xd4f;eip=0x000643; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 33202 mov     dx, [bp+arg_2] ;~ 0D4F:0643
cs=0xd4f;eip=0x000646; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 33203 mov     bx, [bp+arg_4] ;~ 0D4F:0646
cs=0xd4f;eip=0x000649; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_6))));	// 33204 mov     cx, [bp+arg_6] ;~ 0D4F:0649
cs=0xd4f;eip=0x00064c; 	T(OR(cx, cx));	// 33205 or      cx, cx ;~ 0D4F:064C
cs=0xd4f;eip=0x00064e; 	J(JNZ(loc_1c128));	// 33206 jnz     short loc_1C128 ;~ 0D4F:064E
cs=0xd4f;eip=0x000650; 	T(OR(dx, dx));	// 33207 or      dx, dx ;~ 0D4F:0650
cs=0xd4f;eip=0x000652; 	J(JZ(loc_1c14c));	// 33208 jz      short loc_1C14C ;~ 0D4F:0652
cs=0xd4f;eip=0x000654; 	T(OR(bx, bx));	// 33209 or      bx, bx ;~ 0D4F:0654
cs=0xd4f;eip=0x000656; 	J(JZ(loc_1c14c));	// 33210 jz      short loc_1C14C ;~ 0D4F:0656
loc_1c128:
	// 5965 
cs=0xd4f;eip=0x000658; 	T(MOV(bp, cx));	// 33213 mov     bp, cx ;~ 0D4F:0658
cs=0xd4f;eip=0x00065a; 	T(MOV(cx, 0x20));	// 33214 mov     cx, 20h ; ' ' ;~ 0D4F:065A
cs=0xd4f;eip=0x00065d; 	T(XOR(di, di));	// 33215 xor     di, di ;~ 0D4F:065D
cs=0xd4f;eip=0x00065f; 	T(XOR(si, si));	// 33216 xor     si, si ;~ 0D4F:065F
loc_1c131:
	// 5966 
cs=0xd4f;eip=0x000661; 	T(SHL(ax, 1));	// 33219 shl     ax, 1 ;~ 0D4F:0661
cs=0xd4f;eip=0x000663; 	T(RCL(dx, 1));	// 33220 rcl     dx, 1 ;~ 0D4F:0663
cs=0xd4f;eip=0x000665; 	T(RCL(si, 1));	// 33221 rcl     si, 1 ;~ 0D4F:0665
cs=0xd4f;eip=0x000667; 	T(RCL(di, 1));	// 33222 rcl     di, 1 ;~ 0D4F:0667
cs=0xd4f;eip=0x000669; 	T(CMP(di, bp));	// 33223 cmp     di, bp ;~ 0D4F:0669
cs=0xd4f;eip=0x00066b; 	J(JC(loc_1c148));	// 33224 jb      short loc_1C148 ;~ 0D4F:066B
cs=0xd4f;eip=0x00066d; 	J(JA(loc_1c143));	// 33225 ja      short loc_1C143 ;~ 0D4F:066D
cs=0xd4f;eip=0x00066f; 	T(CMP(si, bx));	// 33226 cmp     si, bx ;~ 0D4F:066F
cs=0xd4f;eip=0x000671; 	J(JC(loc_1c148));	// 33227 jb      short loc_1C148 ;~ 0D4F:0671
loc_1c143:
	// 5967 
cs=0xd4f;eip=0x000673; 	T(SUB(si, bx));	// 33230 sub     si, bx ;~ 0D4F:0673
cs=0xd4f;eip=0x000675; 	T(SBB(di, bp));	// 33231 sbb     di, bp ;~ 0D4F:0675
cs=0xd4f;eip=0x000677; 	T(INC(ax));	// 33232 inc     ax ;~ 0D4F:0677
loc_1c148:
	// 5968 
cs=0xd4f;eip=0x000678; 	J(LOOP(loc_1c131));	// 33236 loop    loc_1C131 ;~ 0D4F:0678
cs=0xd4f;eip=0x00067a; 	J(JMP(loc_1c150));	// 33237 jmp     short loc_1C150 ;~ 0D4F:067A
loc_1c14c:
	// 5969 
cs=0xd4f;eip=0x00067c; 	T(DIV2(bx));	// 33242 div     bx ;~ 0D4F:067C
cs=0xd4f;eip=0x00067e; 	T(XOR(dx, dx));	// 33243 xor     dx, dx ;~ 0D4F:067E
loc_1c150:
	// 5970 
cs=0xd4f;eip=0x000680; 	X(POP(di));	// 33246 pop     di ;~ 0D4F:0680
cs=0xd4f;eip=0x000681; 	X(POP(si));	// 33247 pop     si ;~ 0D4F:0681
cs=0xd4f;eip=0x000682; 	X(POP(ds));	// 33248 pop     ds ;~ 0D4F:0682
cs=0xd4f;eip=0x000683; 	X(POP(bp));	// 33249 pop     bp ;~ 0D4F:0683
cs=0xd4f;eip=0x000684; 	R(RETF(0));	// 33250 retf ;~ 0D4F:0684
sub_1c155:
	// 33257 
cs=0xd4f;eip=0x000685; 	X(PUSH(ds));	// 33258 push    ds ;~ 0D4F:0685
ret_d4f_686:
	// 5971 
cs=0xd4f;eip=0x000686; 	X(PUSH(si));	// 33259 push    si ;~ 0D4F:0686
cs=0xd4f;eip=0x000687; 	X(PUSH(di));	// 33260 push    di ;~ 0D4F:0687
cs=0xd4f;eip=0x000688; 	X(PUSHF);	// 33261 pushf ;~ 0D4F:0688
cs=0xd4f;eip=0x000689; 	T(CLI);	// 33262 cli ;~ 0D4F:0689
cs=0xd4f;eip=0x00068a; 	T(CLD);	// 33263 cld ;~ 0D4F:068A
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00068b; 	X(MOV(*(dw*)(((db*)&word_1bbee)), 0x0FFFF));	// 33264 mov     cs:word_1BBEE, 0FFFFh ;~ 0D4F:068B
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000692; 	X(MOV(*(dw*)(((db*)&word_1bbf0)), 0x0FFFF));	// 33265 mov     cs:word_1BBF0, 0FFFFh ;~ 0D4F:0692
cs=0xd4f;eip=0x000699; 	T(MOV(si, 0));	// 33266 mov     si, 0 ;~ 0D4F:0699
loc_1c16c:
	// 5972 
cs=0xd4f;eip=0x00069c; 	T(MOV(bx, si));	// 33269 mov     bx, si ;~ 0D4F:069C
cs=0xd4f;eip=0x00069e; 	T(SHL(bx, 1));	// 33270 shl     bx, 1 ;~ 0D4F:069E
cs=0xd4f;eip=0x0006a0; 	T(CMP(*(dw*)(raddr(cs,bx+0x6A)), 0));	// 33271 cmp     word ptr cs:[bx+6Ah], 0 ;~ 0D4F:06A0
cs=0xd4f;eip=0x0006a6; 	J(JZ(loc_1c19d));	// 33272 jz      short loc_1C19D ;~ 0D4F:06A6
cs=0xd4f;eip=0x0006a8; 	T(SHL(bx, 1));	// 33273 shl     bx, 1 ;~ 0D4F:06A8
cs=0xd4f;eip=0x0006aa; 	T(MOV(ax, *(dw*)(raddr(cs,bx+0x0D0))));	// 33274 mov     ax, cs:[bx+0D0h] ;~ 0D4F:06AA
cs=0xd4f;eip=0x0006af; 	T(MOV(dx, *(dw*)(raddr(cs,bx+0x0D2))));	// 33275 mov     dx, cs:[bx+0D2h] ;~ 0D4F:06AF
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0006b4; 	T(CMP(dx, *(dw*)(((db*)&word_1bbf0))));	// 33276 cmp     dx, cs:word_1BBF0 ;~ 0D4F:06B4
cs=0xd4f;eip=0x0006b9; 	J(JC(loc_1c194));	// 33277 jb      short loc_1C194 ;~ 0D4F:06B9
cs=0xd4f;eip=0x0006bb; 	J(JA(loc_1c19d));	// 33278 ja      short loc_1C19D ;~ 0D4F:06BB
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0006bd; 	T(CMP(ax, *(dw*)(((db*)&word_1bbee))));	// 33279 cmp     ax, cs:word_1BBEE ;~ 0D4F:06BD
cs=0xd4f;eip=0x0006c2; 	J(JNC(loc_1c19d));	// 33280 jnb     short loc_1C19D ;~ 0D4F:06C2
loc_1c194:
	// 5973 
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0006c4; 	X(MOV(*(dw*)(((db*)&word_1bbee)), ax));	// 33283 mov     cs:word_1BBEE, ax ;~ 0D4F:06C4
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0006c8; 	X(MOV(*(dw*)(((db*)&word_1bbf0)), dx));	// 33284 mov     cs:word_1BBF0, dx ;~ 0D4F:06C8
loc_1c19d:
	// 5974 
cs=0xd4f;eip=0x0006cd; 	T(INC(si));	// 33288 inc     si ;~ 0D4F:06CD
cs=0xd4f;eip=0x0006ce; 	T(CMP(si, 0x10));	// 33289 cmp     si, 10h ;~ 0D4F:06CE
cs=0xd4f;eip=0x0006d1; 	J(JBE(loc_1c16c));	// 33290 jbe     short loc_1C16C ;~ 0D4F:06D1
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0006d3; 	T(MOV(ax, *(dw*)(((db*)&word_1bbee))));	// 33291 mov     ax, cs:word_1BBEE ;~ 0D4F:06D3
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0006d7; 	T(MOV(dx, *(dw*)(((db*)&word_1bbf0))));	// 33292 mov     dx, cs:word_1BBF0 ;~ 0D4F:06D7
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0006dc; 	T(CMP(ax, *(dw*)(((db*)&word_1bbe4))));	// 33293 cmp     ax, cs:word_1BBE4 ;~ 0D4F:06DC
cs=0xd4f;eip=0x0006e1; 	J(JNZ(loc_1c1ba));	// 33294 jnz     short loc_1C1BA ;~ 0D4F:06E1
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0006e3; 	T(CMP(dx, *(dw*)(((db*)&word_1bbe6))));	// 33295 cmp     dx, cs:word_1BBE6 ;~ 0D4F:06E3
cs=0xd4f;eip=0x0006e8; 	J(JZ(loc_1c1df));	// 33296 jz      short loc_1C1DF ;~ 0D4F:06E8
loc_1c1ba:
	// 5975 
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0006ea; 	X(MOV(*(dw*)(((db*)&word_1bbec)), 0x0FFFF));	// 33299 mov     cs:word_1BBEC, 0FFFFh ;~ 0D4F:06EA
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0006f1; 	X(MOV(*(dw*)(((db*)&word_1bbe4)), ax));	// 33300 mov     cs:word_1BBE4, ax ;~ 0D4F:06F1
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0006f5; 	X(MOV(*(dw*)(((db*)&word_1bbe6)), dx));	// 33301 mov     cs:word_1BBE6, dx ;~ 0D4F:06F5
cs=0xd4f;eip=0x0006fa; 	X(PUSH(ax));	// 33302 push    ax ;~ 0D4F:06FA
cs=0xd4f;eip=0x0006fb; 	X(PUSH(cs));	// 33303 push    cs ;~ 0D4F:06FB
cs=0xd4f;eip=0x0006fc; 	J(CALL(sub_1c0e0,0));	// 33304 call    near ptr sub_1C0E0 ;~ 0D4F:06FC
cs=0xd4f;eip=0x0006ff; 	T(ADD(sp, 2));	// 33305 add     sp, 2 ;~ 0D4F:06FF
cs=0xd4f;eip=0x000702; 	X(PUSH(cs));	// 33306 push    cs ;~ 0D4F:0702
cs=0xd4f;eip=0x000703; 	X(POP(es));	// 33307 pop     es ;~ 0D4F:0703
cs=0xd4f;eip=0x000704; 	T(MOV(di, 0x8C));	// 33309 mov     di, 8Ch ; 'Œ' ;~ 0D4F:0704
cs=0xd4f;eip=0x000707; 	T(MOV(cx, 0x22));	// 33310 mov     cx, 22h ; '"' ;~ 0D4F:0707
cs=0xd4f;eip=0x00070a; 	T(MOV(ax, 0));	// 33311 mov     ax, 0 ;~ 0D4F:070A
	// 33312 rep stosw ;~ 0D4F:070D
cs=0xd4f;eip=0x00070d; 	X(	REP STOSW);	// 33312 rep stosw ;~ 0D4F:070D
loc_1c1df:
	// 5976 
cs=0xd4f;eip=0x00070f; 	T(OR(bh, 0));	// 33316 or      bh, 0 ;~ 0D4F:070F
seg002_712_proc:
	// 33319 
cs=0xd4f;eip=0x000712; 	X(PUSH(cs));	// 33319 push    cs ;~ 0D4F:0712
cs=0xd4f;eip=0x000713; 	J(CALL(_group2,m2c::kloc_1c1df));	// 33320 call    near ptr loc_1C1DF+1 ;~ 0D4F:0713
cs=0xd4f;eip=0x000716; 	X(POP(di));	// 33321 pop     di ;~ 0D4F:0716
cs=0xd4f;eip=0x000717; 	X(POP(si));	// 33322 pop     si ;~ 0D4F:0717
cs=0xd4f;eip=0x000718; 	X(POP(ds));	// 33323 pop     ds ;~ 0D4F:0718
cs=0xd4f;eip=0x000719; 	R(RETF(0));	// 33324 retf ;~ 0D4F:0719
sub_1c1ea:
	// 33329 
cs=0xd4f;eip=0x00071a; 	X(PUSH(ds));	// 33330 push    ds ;~ 0D4F:071A
ret_d4f_71b:
	// 5977 
cs=0xd4f;eip=0x00071b; 	X(PUSH(si));	// 33331 push    si ;~ 0D4F:071B
cs=0xd4f;eip=0x00071c; 	X(PUSH(di));	// 33332 push    di ;~ 0D4F:071C
cs=0xd4f;eip=0x00071d; 	X(PUSHF);	// 33333 pushf ;~ 0D4F:071D
cs=0xd4f;eip=0x00071e; 	T(CLI);	// 33334 cli ;~ 0D4F:071E
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00071f; 	X(MOV(*(dw*)(((db*)&word_1bad0)), 0));	// 33335 mov     cs:word_1BAD0, 0 ;~ 0D4F:071F
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000726; 	X(MOV(*(dw*)(((db*)&word_1bad2)), 0));	// 33336 mov     cs:word_1BAD2, 0 ;~ 0D4F:0726
cs=0xd4f;eip=0x00072d; 	T(CLD);	// 33337 cld ;~ 0D4F:072D
cs=0xd4f;eip=0x00072e; 	T(MOV(ax, cs));	// 33338 mov     ax, cs ;~ 0D4F:072E
cs=0xd4f;eip=0x000730; 	T(MOV(es, ax));	// 33339 mov     es, ax ;~ 0D4F:0730
cs=0xd4f;eip=0x000732; 	T(MOV(di, offset(seg002,byte_1bbf4)));	// 33340 mov     di, offset byte_1BBF4 ;~ 0D4F:0732
cs=0xd4f;eip=0x000735; 	T(MOV(cx, 0x20));	// 33341 mov     cx, 20h ; ' ' ;~ 0D4F:0735
cs=0xd4f;eip=0x000738; 	T(MOV(ax, 0));	// 33342 mov     ax, 0 ;~ 0D4F:0738
	// 33343 rep stosw ;~ 0D4F:073B
cs=0xd4f;eip=0x00073b; 	X(	REP STOSW);	// 33343 rep stosw ;~ 0D4F:073B
cs=0xd4f;eip=0x00073d; 	T(MOV(di, 0x164));	// 33344 mov     di, 164h ;~ 0D4F:073D
cs=0xd4f;eip=0x000740; 	T(MOV(cx, 0x10));	// 33345 mov     cx, 10h ;~ 0D4F:0740
cs=0xd4f;eip=0x000743; 	T(MOV(ax, 0x0FFFF));	// 33346 mov     ax, 0FFFFh ;~ 0D4F:0743
	// 33347 rep stosw ;~ 0D4F:0746
cs=0xd4f;eip=0x000746; 	X(	REP STOSW);	// 33347 rep stosw ;~ 0D4F:0746
cs=0xd4f;eip=0x000748; 	T(MOV(di, 0x184));	// 33348 mov     di, 184h ;~ 0D4F:0748
cs=0xd4f;eip=0x00074b; 	T(MOV(cx, 0x10));	// 33349 mov     cx, 10h ;~ 0D4F:074B
cs=0xd4f;eip=0x00074e; 	T(MOV(ax, 0));	// 33350 mov     ax, 0 ;~ 0D4F:074E
	// 33351 rep stosw ;~ 0D4F:0751
cs=0xd4f;eip=0x000751; 	X(	REP STOSW);	// 33351 rep stosw ;~ 0D4F:0751
seg002_753_proc:
	// 33355 
loc_1c223:
	// 5978 
cs=0xd4f;eip=0x000753; 	T(OR(bh, 0));	// 33356 or      bh, 0 ;~ 0D4F:0753
cs=0xd4f;eip=0x000756; 	X(PUSH(cs));	// 33357 push    cs ;~ 0D4F:0756
cs=0xd4f;eip=0x000757; 	J(CALL(_group2,m2c::kloc_1c223));	// 33358 call    near ptr loc_1C223+1 ;~ 0D4F:0757
cs=0xd4f;eip=0x00075a; 	X(POP(di));	// 33359 pop     di ;~ 0D4F:075A
cs=0xd4f;eip=0x00075b; 	X(POP(si));	// 33360 pop     si ;~ 0D4F:075B
cs=0xd4f;eip=0x00075c; 	X(POP(ds));	// 33361 pop     ds ;~ 0D4F:075C
cs=0xd4f;eip=0x00075d; 	R(RETF(0));	// 33362 retf ;~ 0D4F:075D
sub_1c22e:
	// 33368 
#undef arg_2
#define arg_2 6
	// 33370 arg_2           = word ptr  6 ;~ 0D4F:075E
#undef arg_4
#define arg_4 8
	// 33371 arg_4           = word ptr  8 ;~ 0D4F:075E
ret_d4f_75e:
	// 5979 
cs=0xd4f;eip=0x00075e; 	X(PUSH(bp));	// 33373 push    bp ;~ 0D4F:075E
cs=0xd4f;eip=0x00075f; 	T(MOV(bp, sp));	// 33374 mov     bp, sp ;~ 0D4F:075F
cs=0xd4f;eip=0x000761; 	X(PUSH(ds));	// 33375 push    ds ;~ 0D4F:0761
cs=0xd4f;eip=0x000762; 	X(PUSH(si));	// 33376 push    si ;~ 0D4F:0762
cs=0xd4f;eip=0x000763; 	X(PUSH(di));	// 33377 push    di ;~ 0D4F:0763
cs=0xd4f;eip=0x000764; 	X(PUSHF);	// 33378 pushf ;~ 0D4F:0764
cs=0xd4f;eip=0x000765; 	T(CLI);	// 33379 cli ;~ 0D4F:0765
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000766; 	X(MOV(*(dw*)(((db*)&word_1bc78)), 0));	// 33380 mov     cs:word_1BC78, 0 ;~ 0D4F:0766
loc_1c23d:
	// 5980 
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00076d; 	T(MOV(si, *(dw*)(((db*)&word_1bc78))));	// 33383 mov     si, cs:word_1BC78 ;~ 0D4F:076D
cs=0xd4f;eip=0x000772; 	T(SHL(si, 1));	// 33384 shl     si, 1 ;~ 0D4F:0772
cs=0xd4f;eip=0x000774; 	T(MOV(dx, *(dw*)(raddr(cs,si+0x164))));	// 33385 mov     dx, cs:[si+164h] ;~ 0D4F:0774
cs=0xd4f;eip=0x000779; 	T(SHL(si, 1));	// 33386 shl     si, 1 ;~ 0D4F:0779
cs=0xd4f;eip=0x00077b; 	T(MOV(ax, *(dw*)(raddr(cs,si+0x124))));	// 33387 mov     ax, cs:[si+124h] ;~ 0D4F:077B
cs=0xd4f;eip=0x000780; 	T(OR(ax, *(dw*)(raddr(cs,si+0x126))));	// 33388 or      ax, cs:[si+126h] ;~ 0D4F:0780
cs=0xd4f;eip=0x000785; 	J(JZ(loc_1c276));	// 33389 jz      short loc_1C276 ;~ 0D4F:0785
cs=0xd4f;eip=0x000787; 	T(CMP(dx, 0x0FFFF));	// 33390 cmp     dx, 0FFFFh ;~ 0D4F:0787
cs=0xd4f;eip=0x00078a; 	J(JZ(loc_1c264));	// 33391 jz      short loc_1C264 ;~ 0D4F:078A
cs=0xd4f;eip=0x00078c; 	X(PUSH(dx));	// 33392 push    dx ;~ 0D4F:078C
cs=0xd4f;eip=0x00078d; 	X(PUSH(cs));	// 33393 push    cs ;~ 0D4F:078D
cs=0xd4f;eip=0x00078e; 	J(CALL(sub_1c35e,0));	// 33394 call    sub_1C35E ;~ 0D4F:078E
cs=0xd4f;eip=0x000791; 	T(ADD(sp, 2));	// 33395 add     sp, 2 ;~ 0D4F:0791
loc_1c264:
	// 5981 
cs=0xd4f;eip=0x000794; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 33398 push    [bp+arg_4] ;~ 0D4F:0794
cs=0xd4f;eip=0x000797; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 33399 push    [bp+arg_2] ;~ 0D4F:0797
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00079a; 	X(PUSH(*(dw*)(((db*)&word_1bc78))));	// 33400 push    cs:word_1BC78 ;~ 0D4F:079A
cs=0xd4f;eip=0x00079f; 	X(PUSH(cs));	// 33401 push    cs ;~ 0D4F:079F
cs=0xd4f;eip=0x0007a0; 	J(CALL(sub_1c6d0,0));	// 33402 call    near ptr sub_1C6D0 ;~ 0D4F:07A0
cs=0xd4f;eip=0x0007a3; 	T(ADD(sp, 6));	// 33403 add     sp, 6 ;~ 0D4F:07A3
loc_1c276:
	// 5982 
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0007a6; 	X(INC(*(dw*)(((db*)&word_1bc78))));	// 33406 inc     cs:word_1BC78 ;~ 0D4F:07A6
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0007ab; 	T(CMP(*(dw*)(((db*)&word_1bc78)), 0x10));	// 33407 cmp     cs:word_1BC78, 10h ;~ 0D4F:07AB
cs=0xd4f;eip=0x0007b1; 	J(JNZ(loc_1c23d));	// 33408 jnz     short loc_1C23D ;~ 0D4F:07B1
cs=0xd4f;eip=0x0007b3; 	X(PUSH(cs));	// 33409 push    cs ;~ 0D4F:07B3
cs=0xd4f;eip=0x0007b4; 	J(CALL(sub_1c3a7,0));	// 33410 call    sub_1C3A7 ;~ 0D4F:07B4
loc_1c287:
	// 5983 
cs=0xd4f;eip=0x0007b7; 	T(OR(bh, 0));	// 33413 or      bh, 0 ;~ 0D4F:07B7
seg002_7ba_proc:
	// 33416 
cs=0xd4f;eip=0x0007ba; 	X(PUSH(cs));	// 33416 push    cs ;~ 0D4F:07BA
cs=0xd4f;eip=0x0007bb; 	J(CALL(_group2,m2c::kloc_1c287));	// 33417 call    near ptr loc_1C287+1 ;~ 0D4F:07BB
cs=0xd4f;eip=0x0007be; 	X(POP(di));	// 33418 pop     di ;~ 0D4F:07BE
cs=0xd4f;eip=0x0007bf; 	X(POP(si));	// 33419 pop     si ;~ 0D4F:07BF
cs=0xd4f;eip=0x0007c0; 	X(POP(ds));	// 33420 pop     ds ;~ 0D4F:07C0
cs=0xd4f;eip=0x0007c1; 	X(POP(bp));	// 33421 pop     bp ;~ 0D4F:07C1
cs=0xd4f;eip=0x0007c2; 	R(RETF(0));	// 33422 retf ;~ 0D4F:07C2
sub_1c293:
	// 33428 
#undef arg_2
#define arg_2 6
	// 33431 arg_2           = dword ptr  6 ;~ 0D4F:07C3
ret_d4f_7c3:
	// 5984 
cs=0xd4f;eip=0x0007c3; 	X(PUSH(bp));	// 33433 push    bp ;~ 0D4F:07C3
cs=0xd4f;eip=0x0007c4; 	T(MOV(bp, sp));	// 33434 mov     bp, sp ;~ 0D4F:07C4
cs=0xd4f;eip=0x0007c6; 	X(PUSH(ds));	// 33435 push    ds ;~ 0D4F:07C6
cs=0xd4f;eip=0x0007c7; 	X(PUSH(si));	// 33436 push    si ;~ 0D4F:07C7
cs=0xd4f;eip=0x0007c8; 	X(PUSH(di));	// 33437 push    di ;~ 0D4F:07C8
cs=0xd4f;eip=0x0007c9; 	X(PUSHF);	// 33438 pushf ;~ 0D4F:07C9
cs=0xd4f;eip=0x0007ca; 	T(CLI);	// 33439 cli ;~ 0D4F:07CA
cs=0xd4f;eip=0x0007cb; 	T(MOV(cx, ds));	// 33440 mov     cx, ds ;~ 0D4F:07CB
cs=0xd4f;eip=0x0007cd; 	T(MOV(bx, 0));	// 33441 mov     bx, 0 ;~ 0D4F:07CD
loc_1c2a0:
	// 5985 
cs=0xd4f;eip=0x0007d0; 	T(CMP(*(dw*)(raddr(cs,bx+0x6A)), 0));	// 33444 cmp     word ptr cs:[bx+6Ah], 0 ;~ 0D4F:07D0
cs=0xd4f;eip=0x0007d6; 	J(JZ(loc_1c2b6));	// 33445 jz      short loc_1C2B6 ;~ 0D4F:07D6
cs=0xd4f;eip=0x0007d8; 	T(ADD(bx, 2));	// 33446 add     bx, 2 ;~ 0D4F:07D8
cs=0xd4f;eip=0x0007db; 	T(CMP(bx, 0x20));	// 33447 cmp     bx, 20h ; ' ' ;~ 0D4F:07DB
cs=0xd4f;eip=0x0007de; 	J(JC(loc_1c2a0));	// 33448 jb      short loc_1C2A0 ;~ 0D4F:07DE
cs=0xd4f;eip=0x0007e0; 	T(MOV(ax, 0x0FFFF));	// 33449 mov     ax, 0FFFFh ;~ 0D4F:07E0
cs=0xd4f;eip=0x0007e3; 	J(JMP(loc_1c352));	// 33450 jmp     loc_1C352 ;~ 0D4F:07E3
loc_1c2b6:
	// 5986 
cs=0xd4f;eip=0x0007e6; 	T(MOV(ax, bx));	// 33454 mov     ax, bx ;~ 0D4F:07E6
cs=0xd4f;eip=0x0007e8; 	T(SHR(ax, 1));	// 33455 shr     ax, 1 ;~ 0D4F:07E8
cs=0xd4f;eip=0x0007ea; 	X(MOV(*(dw*)(raddr(cs,bx+0x6A)), 1));	// 33456 mov     word ptr cs:[bx+6Ah], 1 ;~ 0D4F:07EA
cs=0xd4f;eip=0x0007f1; 	X(MOV(*(dw*)(raddr(cs,bx+0x48)), cx));	// 33457 mov     cs:[bx+48h], cx ;~ 0D4F:07F1
cs=0xd4f;eip=0x0007f6; 	T(SHL(bx, 1));	// 33458 shl     bx, 1 ;~ 0D4F:07F6
cs=0xd4f;eip=0x0007f8; 	T(LDS(si, *(dd*)(raddr(ss,bp+arg_2))));	// 33459 lds     si, [bp+arg_2] ;~ 0D4F:07F8
cs=0xd4f;eip=0x0007fb; 	X(MOV(*(dw*)(raddr(cs,bx+4)), si));	// 33460 mov     cs:[bx+4], si ;~ 0D4F:07FB
cs=0xd4f;eip=0x000800; 	X(MOV(*(dw*)(raddr(cs,bx+6)), ds));	// 33461 mov     word ptr cs:[bx+6], ds ;~ 0D4F:0800
cs=0xd4f;eip=0x000805; 	X(MOV(*(dw*)(raddr(cs,bx+0x0D0)), 0x0FFFF));	// 33462 mov     word ptr cs:[bx+0D0h], 0FFFFh ;~ 0D4F:0805
cs=0xd4f;eip=0x00080c; 	X(MOV(*(dw*)(raddr(cs,bx+0x0D2)), 0x0FFFF));	// 33463 mov     word ptr cs:[bx+0D2h], 0FFFFh ;~ 0D4F:080C
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000813; 	X(INC(*(dw*)(((db*)&word_1bad0))));	// 33464 inc     cs:word_1BAD0 ;~ 0D4F:0813
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000818; 	T(CMP(*(dw*)(((db*)&word_1bad0)), 1));	// 33465 cmp     cs:word_1BAD0, 1 ;~ 0D4F:0818
cs=0xd4f;eip=0x00081e; 	J(JNZ(loc_1c352));	// 33466 jnz     short loc_1C352 ;~ 0D4F:081E
cs=0xd4f;eip=0x000820; 	X(PUSH(ax));	// 33467 push    ax ;~ 0D4F:0820
cs=0xd4f;eip=0x000821; 	X(PUSH(cs));	// 33468 push    cs ;~ 0D4F:0821
cs=0xd4f;eip=0x000822; 	J(CALL(sub_1bff8,0));	// 33469 call    sub_1BFF8 ;~ 0D4F:0822
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000825; 	X(MOV(*(dw*)(((db*)&word_1bb5a)), 1));	// 33470 mov     cs:word_1BB5A, 1 ;~ 0D4F:0825
cs=0xd4f;eip=0x00082c; 	X(PUSH(cs));	// 33471 push    cs ;~ 0D4F:082C
cs=0xd4f;eip=0x00082d; 	J(CALL(sub_1c03b,0));	// 33472 call    sub_1C03B ;~ 0D4F:082D
cs=0xd4f;eip=0x000830; 	X(PUSH(ax));	// 33473 push    ax ;~ 0D4F:0830
cs=0xd4f;eip=0x000831; 	X(PUSH(bp));	// 33474 push    bp ;~ 0D4F:0831
cs=0xd4f;eip=0x000832; 	T(MOV(bp, sp));	// 33475 mov     bp, sp ;~ 0D4F:0832
cs=0xd4f;eip=0x000834; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0));	// 33476 mov     word ptr [bp+2], 0 ;~ 0D4F:0834
cs=0xd4f;eip=0x000839; 	X(POP(bp));	// 33477 pop     bp ;~ 0D4F:0839
cs=0xd4f;eip=0x00083a; 	X(PUSH(ax));	// 33478 push    ax ;~ 0D4F:083A
cs=0xd4f;eip=0x00083b; 	X(PUSH(bp));	// 33479 push    bp ;~ 0D4F:083B
cs=0xd4f;eip=0x00083c; 	T(MOV(bp, sp));	// 33480 mov     bp, sp ;~ 0D4F:083C
cs=0xd4f;eip=0x00083e; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0x0D68D));	// 33481 mov     word ptr [bp+2], 0D68Dh ;~ 0D4F:083E
cs=0xd4f;eip=0x000843; 	X(POP(bp));	// 33482 pop     bp ;~ 0D4F:0843
cs=0xd4f;eip=0x000844; 	X(PUSH(ax));	// 33483 push    ax ;~ 0D4F:0844
cs=0xd4f;eip=0x000845; 	X(PUSH(bp));	// 33484 push    bp ;~ 0D4F:0845
cs=0xd4f;eip=0x000846; 	T(MOV(bp, sp));	// 33485 mov     bp, sp ;~ 0D4F:0846
cs=0xd4f;eip=0x000848; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0x10));	// 33486 mov     word ptr [bp+2], 10h ;~ 0D4F:0848
cs=0xd4f;eip=0x00084d; 	X(POP(bp));	// 33487 pop     bp ;~ 0D4F:084D
cs=0xd4f;eip=0x00084e; 	X(PUSH(cs));	// 33488 push    cs ;~ 0D4F:084E
cs=0xd4f;eip=0x00084f; 	J(CALL(sub_1c451,0));	// 33489 call    sub_1C451 ;~ 0D4F:084F
cs=0xd4f;eip=0x000852; 	T(ADD(sp, 6));	// 33490 add     sp, 6 ;~ 0D4F:0852
cs=0xd4f;eip=0x000855; 	X(PUSH(ax));	// 33491 push    ax ;~ 0D4F:0855
cs=0xd4f;eip=0x000856; 	X(PUSH(bp));	// 33492 push    bp ;~ 0D4F:0856
cs=0xd4f;eip=0x000857; 	T(MOV(bp, sp));	// 33493 mov     bp, sp ;~ 0D4F:0857
cs=0xd4f;eip=0x000859; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0x10));	// 33494 mov     word ptr [bp+2], 10h ;~ 0D4F:0859
cs=0xd4f;eip=0x00085e; 	X(POP(bp));	// 33495 pop     bp ;~ 0D4F:085E
cs=0xd4f;eip=0x00085f; 	X(PUSH(cs));	// 33496 push    cs ;~ 0D4F:085F
cs=0xd4f;eip=0x000860; 	J(CALL(sub_1c3c5,0));	// 33497 call    sub_1C3C5 ;~ 0D4F:0860
cs=0xd4f;eip=0x000863; 	T(ADD(sp, 2));	// 33498 add     sp, 2 ;~ 0D4F:0863
cs=0xd4f;eip=0x000866; 	X(POP(ax));	// 33499 pop     ax ;~ 0D4F:0866
cs=0xd4f;eip=0x000867; 	T(MOV(bx, ax));	// 33500 mov     bx, ax ;~ 0D4F:0867
cs=0xd4f;eip=0x000869; 	T(SHL(bx, 1));	// 33501 shl     bx, 1 ;~ 0D4F:0869
cs=0xd4f;eip=0x00086b; 	X(MOV(*(dw*)(raddr(cs,bx+0x6A)), 1));	// 33502 mov     word ptr cs:[bx+6Ah], 1 ;~ 0D4F:086B
cs=0xd4f;eip=0x000872; 	T(SHL(bx, 1));	// 33503 shl     bx, 1 ;~ 0D4F:0872
cs=0xd4f;eip=0x000874; 	X(MOV(*(dw*)(raddr(cs,bx+0x0D0)), 0x0FFFF));	// 33504 mov     word ptr cs:[bx+0D0h], 0FFFFh ;~ 0D4F:0874
cs=0xd4f;eip=0x00087b; 	X(MOV(*(dw*)(raddr(cs,bx+0x0D2)), 0x0FFFF));	// 33505 mov     word ptr cs:[bx+0D2h], 0FFFFh ;~ 0D4F:087B
loc_1c352:
	// 5987 
cs=0xd4f;eip=0x000882; 	T(OR(bh, 0));	// 33509 or      bh, 0 ;~ 0D4F:0882
seg002_885_proc:
	// 33512 
cs=0xd4f;eip=0x000885; 	X(PUSH(cs));	// 33512 push    cs ;~ 0D4F:0885
cs=0xd4f;eip=0x000886; 	J(CALL(_group2,m2c::kloc_1c352));	// 33513 call    near ptr loc_1C352+1 ;~ 0D4F:0886
cs=0xd4f;eip=0x000889; 	X(POP(di));	// 33514 pop     di ;~ 0D4F:0889
cs=0xd4f;eip=0x00088a; 	X(POP(si));	// 33515 pop     si ;~ 0D4F:088A
cs=0xd4f;eip=0x00088b; 	X(POP(ds));	// 33516 pop     ds ;~ 0D4F:088B
cs=0xd4f;eip=0x00088c; 	X(POP(bp));	// 33517 pop     bp ;~ 0D4F:088C
cs=0xd4f;eip=0x00088d; 	R(RETF(0));	// 33518 retf ;~ 0D4F:088D
sub_1c35e:
	// 33524 
#undef arg_2
#define arg_2 6
	// 33527 arg_2           = word ptr  6 ;~ 0D4F:088E
ret_d4f_88e:
	// 5988 
cs=0xd4f;eip=0x00088e; 	X(PUSH(bp));	// 33529 push    bp ;~ 0D4F:088E
cs=0xd4f;eip=0x00088f; 	T(MOV(bp, sp));	// 33530 mov     bp, sp ;~ 0D4F:088F
cs=0xd4f;eip=0x000891; 	X(PUSH(ds));	// 33531 push    ds ;~ 0D4F:0891
cs=0xd4f;eip=0x000892; 	X(PUSH(si));	// 33532 push    si ;~ 0D4F:0892
cs=0xd4f;eip=0x000893; 	X(PUSH(di));	// 33533 push    di ;~ 0D4F:0893
cs=0xd4f;eip=0x000894; 	X(PUSHF);	// 33534 pushf ;~ 0D4F:0894
cs=0xd4f;eip=0x000895; 	T(CLI);	// 33535 cli ;~ 0D4F:0895
cs=0xd4f;eip=0x000896; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 33536 mov     bx, [bp+arg_2] ;~ 0D4F:0896
cs=0xd4f;eip=0x000899; 	T(CMP(bx, 0x0FFFF));	// 33537 cmp     bx, 0FFFFh ;~ 0D4F:0899
cs=0xd4f;eip=0x00089c; 	J(JZ(loc_1c39b));	// 33538 jz      short loc_1C39B ;~ 0D4F:089C
cs=0xd4f;eip=0x00089e; 	T(SHL(bx, 1));	// 33539 shl     bx, 1 ;~ 0D4F:089E
cs=0xd4f;eip=0x0008a0; 	T(CMP(*(dw*)(raddr(cs,bx+0x6A)), 0));	// 33540 cmp     word ptr cs:[bx+6Ah], 0 ;~ 0D4F:08A0
cs=0xd4f;eip=0x0008a6; 	J(JZ(loc_1c39b));	// 33541 jz      short loc_1C39B ;~ 0D4F:08A6
cs=0xd4f;eip=0x0008a8; 	X(MOV(*(dw*)(raddr(cs,bx+0x6A)), 0));	// 33542 mov     word ptr cs:[bx+6Ah], 0 ;~ 0D4F:08A8
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0008af; 	X(DEC(*(dw*)(((db*)&word_1bad0))));	// 33543 dec     cs:word_1BAD0 ;~ 0D4F:08AF
cs=0xd4f;eip=0x0008b4; 	J(JNZ(loc_1c39b));	// 33544 jnz     short loc_1C39B ;~ 0D4F:08B4
cs=0xd4f;eip=0x0008b6; 	X(PUSH(ax));	// 33545 push    ax ;~ 0D4F:08B6
cs=0xd4f;eip=0x0008b7; 	X(PUSH(bp));	// 33546 push    bp ;~ 0D4F:08B7
cs=0xd4f;eip=0x0008b8; 	T(MOV(bp, sp));	// 33547 mov     bp, sp ;~ 0D4F:08B8
cs=0xd4f;eip=0x0008ba; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0));	// 33548 mov     word ptr [bp+2], 0 ;~ 0D4F:08BA
cs=0xd4f;eip=0x0008bf; 	X(POP(bp));	// 33549 pop     bp ;~ 0D4F:08BF
cs=0xd4f;eip=0x0008c0; 	X(PUSH(cs));	// 33550 push    cs ;~ 0D4F:08C0
cs=0xd4f;eip=0x0008c1; 	J(CALL(sub_1c0b7,0));	// 33551 call    sub_1C0B7 ;~ 0D4F:08C1
cs=0xd4f;eip=0x0008c4; 	T(ADD(sp, 2));	// 33552 add     sp, 2 ;~ 0D4F:08C4
cs=0xd4f;eip=0x0008c7; 	X(PUSH(cs));	// 33553 push    cs ;~ 0D4F:08C7
cs=0xd4f;eip=0x0008c8; 	J(CALL(sub_1c087,0));	// 33554 call    sub_1C087 ;~ 0D4F:08C8
loc_1c39b:
	// 5989 
cs=0xd4f;eip=0x0008cb; 	T(OR(bh, 0));	// 33558 or      bh, 0 ;~ 0D4F:08CB
seg002_8ce_proc:
	// 33561 
cs=0xd4f;eip=0x0008ce; 	X(PUSH(cs));	// 33561 push    cs ;~ 0D4F:08CE
cs=0xd4f;eip=0x0008cf; 	J(CALL(_group2,m2c::kloc_1c39b));	// 33562 call    near ptr loc_1C39B+1 ;~ 0D4F:08CF
cs=0xd4f;eip=0x0008d2; 	X(POP(di));	// 33563 pop     di ;~ 0D4F:08D2
cs=0xd4f;eip=0x0008d3; 	X(POP(si));	// 33564 pop     si ;~ 0D4F:08D3
cs=0xd4f;eip=0x0008d4; 	X(POP(ds));	// 33565 pop     ds ;~ 0D4F:08D4
cs=0xd4f;eip=0x0008d5; 	X(POP(bp));	// 33566 pop     bp ;~ 0D4F:08D5
cs=0xd4f;eip=0x0008d6; 	R(RETF(0));	// 33567 retf ;~ 0D4F:08D6
sub_1c3a7:
	// 33572 
cs=0xd4f;eip=0x0008d7; 	X(PUSH(ds));	// 33573 push    ds ;~ 0D4F:08D7
ret_d4f_8d8:
	// 5990 
cs=0xd4f;eip=0x0008d8; 	X(PUSH(si));	// 33574 push    si ;~ 0D4F:08D8
cs=0xd4f;eip=0x0008d9; 	X(PUSH(di));	// 33575 push    di ;~ 0D4F:08D9
cs=0xd4f;eip=0x0008da; 	X(PUSHF);	// 33576 pushf ;~ 0D4F:08DA
cs=0xd4f;eip=0x0008db; 	T(CLI);	// 33577 cli ;~ 0D4F:08DB
cs=0xd4f;eip=0x0008dc; 	T(MOV(si, 0x0F));	// 33578 mov     si, 0Fh ;~ 0D4F:08DC
loc_1c3af:
	// 5991 
cs=0xd4f;eip=0x0008df; 	X(PUSH(si));	// 33581 push    si ;~ 0D4F:08DF
cs=0xd4f;eip=0x0008e0; 	X(PUSH(cs));	// 33582 push    cs ;~ 0D4F:08E0
cs=0xd4f;eip=0x0008e1; 	J(CALL(sub_1c35e,0));	// 33583 call    sub_1C35E ;~ 0D4F:08E1
cs=0xd4f;eip=0x0008e4; 	T(ADD(sp, 2));	// 33584 add     sp, 2 ;~ 0D4F:08E4
cs=0xd4f;eip=0x0008e7; 	T(DEC(si));	// 33585 dec     si ;~ 0D4F:08E7
cs=0xd4f;eip=0x0008e8; 	J(JGE(loc_1c3af));	// 33586 jge     short loc_1C3AF ;~ 0D4F:08E8
loc_1c3ba:
	// 5992 
cs=0xd4f;eip=0x0008ea; 	T(OR(bh, 0));	// 33589 or      bh, 0 ;~ 0D4F:08EA
seg002_8ed_proc:
	// 33592 
cs=0xd4f;eip=0x0008ed; 	X(PUSH(cs));	// 33592 push    cs ;~ 0D4F:08ED
cs=0xd4f;eip=0x0008ee; 	J(CALL(_group2,m2c::kloc_1c3ba));	// 33593 call    near ptr loc_1C3BA+1 ;~ 0D4F:08EE
cs=0xd4f;eip=0x0008f1; 	X(POP(di));	// 33594 pop     di ;~ 0D4F:08F1
cs=0xd4f;eip=0x0008f2; 	X(POP(si));	// 33595 pop     si ;~ 0D4F:08F2
cs=0xd4f;eip=0x0008f3; 	X(POP(ds));	// 33596 pop     ds ;~ 0D4F:08F3
cs=0xd4f;eip=0x0008f4; 	R(RETF(0));	// 33597 retf ;~ 0D4F:08F4
sub_1c3c5:
	// 33603 
#undef arg_2
#define arg_2 6
	// 33606 arg_2           = word ptr  6 ;~ 0D4F:08F5
ret_d4f_8f5:
	// 5993 
cs=0xd4f;eip=0x0008f5; 	X(PUSH(bp));	// 33608 push    bp ;~ 0D4F:08F5
cs=0xd4f;eip=0x0008f6; 	T(MOV(bp, sp));	// 33609 mov     bp, sp ;~ 0D4F:08F6
cs=0xd4f;eip=0x0008f8; 	X(PUSH(ds));	// 33610 push    ds ;~ 0D4F:08F8
cs=0xd4f;eip=0x0008f9; 	X(PUSH(si));	// 33611 push    si ;~ 0D4F:08F9
cs=0xd4f;eip=0x0008fa; 	X(PUSH(di));	// 33612 push    di ;~ 0D4F:08FA
cs=0xd4f;eip=0x0008fb; 	X(PUSHF);	// 33613 pushf ;~ 0D4F:08FB
cs=0xd4f;eip=0x0008fc; 	T(CLI);	// 33614 cli ;~ 0D4F:08FC
cs=0xd4f;eip=0x0008fd; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 33615 mov     bx, [bp+arg_2] ;~ 0D4F:08FD
cs=0xd4f;eip=0x000900; 	T(SHL(bx, 1));	// 33616 shl     bx, 1 ;~ 0D4F:0900
cs=0xd4f;eip=0x000902; 	T(CMP(*(dw*)(raddr(cs,bx+0x6A)), 1));	// 33617 cmp     word ptr cs:[bx+6Ah], 1 ;~ 0D4F:0902
cs=0xd4f;eip=0x000908; 	J(JNZ(loc_1c3e1));	// 33618 jnz     short loc_1C3E1 ;~ 0D4F:0908
cs=0xd4f;eip=0x00090a; 	X(MOV(*(dw*)(raddr(cs,bx+0x6A)), 2));	// 33619 mov     word ptr cs:[bx+6Ah], 2 ;~ 0D4F:090A
loc_1c3e1:
	// 5994 
cs=0xd4f;eip=0x000911; 	T(OR(bh, 0));	// 33623 or      bh, 0 ;~ 0D4F:0911
seg002_914_proc:
	// 33626 
cs=0xd4f;eip=0x000914; 	X(PUSH(cs));	// 33626 push    cs ;~ 0D4F:0914
cs=0xd4f;eip=0x000915; 	J(CALL(_group2,m2c::kloc_1c3e1));	// 33627 call    near ptr loc_1C3E1+1 ;~ 0D4F:0915
cs=0xd4f;eip=0x000918; 	X(POP(di));	// 33628 pop     di ;~ 0D4F:0918
cs=0xd4f;eip=0x000919; 	X(POP(si));	// 33629 pop     si ;~ 0D4F:0919
cs=0xd4f;eip=0x00091a; 	X(POP(ds));	// 33630 pop     ds ;~ 0D4F:091A
cs=0xd4f;eip=0x00091b; 	X(POP(bp));	// 33631 pop     bp ;~ 0D4F:091B
cs=0xd4f;eip=0x00091c; 	R(RETF(0));	// 33632 retf ;~ 0D4F:091C
ret_d4f_91d:
	// 5995 
cs=0xd4f;eip=0x00091d; 	X(PUSH(ds));	// 33634 push    ds ;~ 0D4F:091D
cs=0xd4f;eip=0x00091e; 	X(PUSH(si));	// 33635 push    si ;~ 0D4F:091E
cs=0xd4f;eip=0x00091f; 	X(PUSH(di));	// 33636 push    di ;~ 0D4F:091F
cs=0xd4f;eip=0x000920; 	X(PUSHF);	// 33637 pushf ;~ 0D4F:0920
cs=0xd4f;eip=0x000921; 	T(CLI);	// 33638 cli ;~ 0D4F:0921
cs=0xd4f;eip=0x000922; 	T(MOV(si, 0x0F));	// 33639 mov     si, 0Fh ;~ 0D4F:0922
loc_1c3f5:
	// 5996 
cs=0xd4f;eip=0x000925; 	X(PUSH(si));	// 33642 push    si ;~ 0D4F:0925
cs=0xd4f;eip=0x000926; 	X(PUSH(cs));	// 33643 push    cs ;~ 0D4F:0926
cs=0xd4f;eip=0x000927; 	J(CALL(sub_1c3c5,0));	// 33644 call    sub_1C3C5 ;~ 0D4F:0927
cs=0xd4f;eip=0x00092a; 	T(ADD(sp, 2));	// 33645 add     sp, 2 ;~ 0D4F:092A
cs=0xd4f;eip=0x00092d; 	T(DEC(si));	// 33646 dec     si ;~ 0D4F:092D
cs=0xd4f;eip=0x00092e; 	J(JGE(loc_1c3f5));	// 33647 jge     short loc_1C3F5 ;~ 0D4F:092E
loc_1c400:
	// 5997 
cs=0xd4f;eip=0x000930; 	T(OR(bh, 0));	// 33650 or      bh, 0 ;~ 0D4F:0930
cs=0xd4f;eip=0x000933; 	X(PUSH(cs));	// 33651 push    cs ;~ 0D4F:0933
cs=0xd4f;eip=0x000934; 	J(CALL(_group2,m2c::kloc_1c400));	// 33652 call    near ptr loc_1C400+1 ;~ 0D4F:0934
cs=0xd4f;eip=0x000937; 	X(POP(di));	// 33653 pop     di ;~ 0D4F:0937
cs=0xd4f;eip=0x000938; 	X(POP(si));	// 33654 pop     si ;~ 0D4F:0938
cs=0xd4f;eip=0x000939; 	X(POP(ds));	// 33655 pop     ds ;~ 0D4F:0939
cs=0xd4f;eip=0x00093a; 	R(RETF(0));	// 33656 retf ;~ 0D4F:093A
sub_1c40b:
	// 33662 
#undef arg_0
#define arg_0 6
	// 33664 arg_0           = word ptr  6 ;~ 0D4F:093B
ret_d4f_93b:
	// 5998 
cs=0xd4f;eip=0x00093b; 	X(PUSH(bp));	// 33666 push    bp ;~ 0D4F:093B
cs=0xd4f;eip=0x00093c; 	T(MOV(bp, sp));	// 33667 mov     bp, sp ;~ 0D4F:093C
cs=0xd4f;eip=0x00093e; 	X(PUSH(ds));	// 33668 push    ds ;~ 0D4F:093E
cs=0xd4f;eip=0x00093f; 	X(PUSH(si));	// 33669 push    si ;~ 0D4F:093F
cs=0xd4f;eip=0x000940; 	X(PUSH(di));	// 33670 push    di ;~ 0D4F:0940
cs=0xd4f;eip=0x000941; 	X(PUSHF);	// 33671 pushf ;~ 0D4F:0941
cs=0xd4f;eip=0x000942; 	T(CLI);	// 33672 cli ;~ 0D4F:0942
cs=0xd4f;eip=0x000943; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 33673 mov     bx, [bp+arg_0] ;~ 0D4F:0943
cs=0xd4f;eip=0x000946; 	T(SHL(bx, 1));	// 33674 shl     bx, 1 ;~ 0D4F:0946
cs=0xd4f;eip=0x000948; 	T(CMP(*(dw*)(raddr(cs,bx+0x6A)), 2));	// 33675 cmp     word ptr cs:[bx+6Ah], 2 ;~ 0D4F:0948
cs=0xd4f;eip=0x00094e; 	J(JNZ(loc_1c427));	// 33676 jnz     short loc_1C427 ;~ 0D4F:094E
cs=0xd4f;eip=0x000950; 	X(MOV(*(dw*)(raddr(cs,bx+0x6A)), 1));	// 33677 mov     word ptr cs:[bx+6Ah], 1 ;~ 0D4F:0950
loc_1c427:
	// 5999 
cs=0xd4f;eip=0x000957; 	T(OR(bh, 0));	// 33681 or      bh, 0 ;~ 0D4F:0957
cs=0xd4f;eip=0x00095a; 	X(PUSH(cs));	// 33682 push    cs ;~ 0D4F:095A
cs=0xd4f;eip=0x00095b; 	J(CALL(_group2,m2c::kloc_1c427));	// 33683 call    near ptr loc_1C427+1 ;~ 0D4F:095B
cs=0xd4f;eip=0x00095e; 	X(POP(di));	// 33684 pop     di ;~ 0D4F:095E
cs=0xd4f;eip=0x00095f; 	X(POP(si));	// 33685 pop     si ;~ 0D4F:095F
cs=0xd4f;eip=0x000960; 	X(POP(ds));	// 33686 pop     ds ;~ 0D4F:0960
cs=0xd4f;eip=0x000961; 	X(POP(bp));	// 33687 pop     bp ;~ 0D4F:0961
cs=0xd4f;eip=0x000962; 	R(RETF(0));	// 33688 retf ;~ 0D4F:0962
seg002_963_proc:
	// 33692 
cs=0xd4f;eip=0x000963; 	X(PUSH(ds));	// 33692 push    ds ;~ 0D4F:0963
ret_d4f_964:
	// 6000 
cs=0xd4f;eip=0x000964; 	X(PUSH(si));	// 33693 push    si ;~ 0D4F:0964
cs=0xd4f;eip=0x000965; 	X(PUSH(di));	// 33694 push    di ;~ 0D4F:0965
cs=0xd4f;eip=0x000966; 	X(PUSHF);	// 33695 pushf ;~ 0D4F:0966
cs=0xd4f;eip=0x000967; 	T(CLI);	// 33696 cli ;~ 0D4F:0967
cs=0xd4f;eip=0x000968; 	T(MOV(si, 0x0F));	// 33697 mov     si, 0Fh ;~ 0D4F:0968
loc_1c43b:
	// 6001 
cs=0xd4f;eip=0x00096b; 	X(PUSH(si));	// 33700 push    si ;~ 0D4F:096B
cs=0xd4f;eip=0x00096c; 	X(PUSH(cs));	// 33701 push    cs ;~ 0D4F:096C
cs=0xd4f;eip=0x00096d; 	J(CALL(sub_1c40b,0));	// 33702 call    near ptr sub_1C40B ;~ 0D4F:096D
cs=0xd4f;eip=0x000970; 	T(ADD(sp, 2));	// 33703 add     sp, 2 ;~ 0D4F:0970
cs=0xd4f;eip=0x000973; 	T(DEC(si));	// 33704 dec     si ;~ 0D4F:0973
cs=0xd4f;eip=0x000974; 	J(JGE(loc_1c43b));	// 33705 jge     short loc_1C43B ;~ 0D4F:0974
loc_1c446:
	// 6002 
cs=0xd4f;eip=0x000976; 	T(OR(bh, 0));	// 33708 or      bh, 0 ;~ 0D4F:0976
cs=0xd4f;eip=0x000979; 	X(PUSH(cs));	// 33709 push    cs ;~ 0D4F:0979
cs=0xd4f;eip=0x00097a; 	J(CALL(_group2,m2c::kloc_1c446));	// 33710 call    near ptr loc_1C446+1 ;~ 0D4F:097A
cs=0xd4f;eip=0x00097d; 	X(POP(di));	// 33711 pop     di ;~ 0D4F:097D
cs=0xd4f;eip=0x00097e; 	X(POP(si));	// 33712 pop     si ;~ 0D4F:097E
cs=0xd4f;eip=0x00097f; 	X(POP(ds));	// 33713 pop     ds ;~ 0D4F:097F
cs=0xd4f;eip=0x000980; 	R(RETF(0));	// 33714 retf ;~ 0D4F:0980
sub_1c451:
	// 33720 
#undef arg_2
#define arg_2 6
	// 33723 arg_2           = word ptr  6 ;~ 0D4F:0981
#undef arg_4
#define arg_4 8
	// 33724 arg_4           = word ptr  8 ;~ 0D4F:0981
#undef arg_6
#define arg_6 0x0A
	// 33725 arg_6           = word ptr  0Ah ;~ 0D4F:0981
ret_d4f_981:
	// 6003 
cs=0xd4f;eip=0x000981; 	X(PUSH(bp));	// 33727 push    bp ;~ 0D4F:0981
cs=0xd4f;eip=0x000982; 	T(MOV(bp, sp));	// 33728 mov     bp, sp ;~ 0D4F:0982
cs=0xd4f;eip=0x000984; 	X(PUSH(ds));	// 33729 push    ds ;~ 0D4F:0984
cs=0xd4f;eip=0x000985; 	X(PUSH(si));	// 33730 push    si ;~ 0D4F:0985
cs=0xd4f;eip=0x000986; 	X(PUSH(di));	// 33731 push    di ;~ 0D4F:0986
cs=0xd4f;eip=0x000987; 	X(PUSHF);	// 33732 pushf ;~ 0D4F:0987
cs=0xd4f;eip=0x000988; 	T(CLI);	// 33733 cli ;~ 0D4F:0988
cs=0xd4f;eip=0x000989; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 33734 mov     bx, [bp+arg_2] ;~ 0D4F:0989
cs=0xd4f;eip=0x00098c; 	T(SHL(bx, 1));	// 33735 shl     bx, 1 ;~ 0D4F:098C
cs=0xd4f;eip=0x00098e; 	T(MOV(ax, *(dw*)(raddr(cs,bx+0x6A))));	// 33736 mov     ax, cs:[bx+6Ah] ;~ 0D4F:098E
cs=0xd4f;eip=0x000993; 	X(PUSH(ax));	// 33737 push    ax ;~ 0D4F:0993
cs=0xd4f;eip=0x000994; 	X(MOV(*(dw*)(raddr(cs,bx+0x6A)), 1));	// 33738 mov     word ptr cs:[bx+6Ah], 1 ;~ 0D4F:0994
cs=0xd4f;eip=0x00099b; 	T(SHL(bx, 1));	// 33739 shl     bx, 1 ;~ 0D4F:099B
cs=0xd4f;eip=0x00099d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 33740 mov     ax, [bp+arg_4] ;~ 0D4F:099D
cs=0xd4f;eip=0x0009a0; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 33741 mov     dx, [bp+arg_6] ;~ 0D4F:09A0
cs=0xd4f;eip=0x0009a3; 	X(MOV(*(dw*)(raddr(cs,bx+0x0D0)), ax));	// 33742 mov     cs:[bx+0D0h], ax ;~ 0D4F:09A3
cs=0xd4f;eip=0x0009a8; 	X(MOV(*(dw*)(raddr(cs,bx+0x0D2)), dx));	// 33743 mov     cs:[bx+0D2h], dx ;~ 0D4F:09A8
cs=0xd4f;eip=0x0009ad; 	X(MOV(*(dw*)(raddr(cs,bx+0x8C)), 0));	// 33744 mov     word ptr cs:[bx+8Ch], 0 ;~ 0D4F:09AD
cs=0xd4f;eip=0x0009b4; 	X(MOV(*(dw*)(raddr(cs,bx+0x8E)), 0));	// 33745 mov     word ptr cs:[bx+8Eh], 0 ;~ 0D4F:09B4
cs=0xd4f;eip=0x0009bb; 	X(PUSH(cs));	// 33746 push    cs ;~ 0D4F:09BB
cs=0xd4f;eip=0x0009bc; 	J(CALL(sub_1c155,0));	// 33747 call    sub_1C155 ;~ 0D4F:09BC
cs=0xd4f;eip=0x0009bf; 	X(POP(ax));	// 33748 pop     ax ;~ 0D4F:09BF
cs=0xd4f;eip=0x0009c0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 33749 mov     bx, [bp+arg_2] ;~ 0D4F:09C0
cs=0xd4f;eip=0x0009c3; 	T(SHL(bx, 1));	// 33750 shl     bx, 1 ;~ 0D4F:09C3
cs=0xd4f;eip=0x0009c5; 	X(MOV(*(dw*)(raddr(cs,bx+0x6A)), ax));	// 33751 mov     cs:[bx+6Ah], ax ;~ 0D4F:09C5
loc_1c49a:
	// 6004 
cs=0xd4f;eip=0x0009ca; 	T(OR(bh, 0));	// 33754 or      bh, 0 ;~ 0D4F:09CA
seg002_9cd_proc:
	// 33757 
cs=0xd4f;eip=0x0009cd; 	X(PUSH(cs));	// 33757 push    cs ;~ 0D4F:09CD
cs=0xd4f;eip=0x0009ce; 	J(CALL(_group2,m2c::kloc_1c49a));	// 33758 call    near ptr loc_1C49A+1 ;~ 0D4F:09CE
cs=0xd4f;eip=0x0009d1; 	X(POP(di));	// 33759 pop     di ;~ 0D4F:09D1
cs=0xd4f;eip=0x0009d2; 	X(POP(si));	// 33760 pop     si ;~ 0D4F:09D2
cs=0xd4f;eip=0x0009d3; 	X(POP(ds));	// 33761 pop     ds ;~ 0D4F:09D3
cs=0xd4f;eip=0x0009d4; 	X(POP(bp));	// 33762 pop     bp ;~ 0D4F:09D4
cs=0xd4f;eip=0x0009d5; 	R(RETF(0));	// 33763 retf ;~ 0D4F:09D5
sub_1c4a6:
	// 33769 
#undef arg_2
#define arg_2 6
	// 33772 arg_2           = word ptr  6 ;~ 0D4F:09D6
#undef arg_4
#define arg_4 8
	// 33773 arg_4           = word ptr  8 ;~ 0D4F:09D6
#undef arg_6
#define arg_6 0x0A
	// 33774 arg_6           = word ptr  0Ah ;~ 0D4F:09D6
ret_d4f_9d6:
	// 6005 
cs=0xd4f;eip=0x0009d6; 	X(PUSH(bp));	// 33776 push    bp ;~ 0D4F:09D6
cs=0xd4f;eip=0x0009d7; 	T(MOV(bp, sp));	// 33777 mov     bp, sp ;~ 0D4F:09D7
cs=0xd4f;eip=0x0009d9; 	X(PUSH(ds));	// 33778 push    ds ;~ 0D4F:09D9
cs=0xd4f;eip=0x0009da; 	X(PUSH(si));	// 33779 push    si ;~ 0D4F:09DA
cs=0xd4f;eip=0x0009db; 	X(PUSH(di));	// 33780 push    di ;~ 0D4F:09DB
cs=0xd4f;eip=0x0009dc; 	X(PUSHF);	// 33781 pushf ;~ 0D4F:09DC
cs=0xd4f;eip=0x0009dd; 	T(CLI);	// 33782 cli ;~ 0D4F:09DD
cs=0xd4f;eip=0x0009de; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 33783 push    [bp+arg_6] ;~ 0D4F:09DE
cs=0xd4f;eip=0x0009e1; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 33784 push    [bp+arg_4] ;~ 0D4F:09E1
cs=0xd4f;eip=0x0009e4; 	X(PUSH(ax));	// 33785 push    ax ;~ 0D4F:09E4
cs=0xd4f;eip=0x0009e5; 	X(PUSH(bp));	// 33786 push    bp ;~ 0D4F:09E5
cs=0xd4f;eip=0x0009e6; 	T(MOV(bp, sp));	// 33787 mov     bp, sp ;~ 0D4F:09E6
cs=0xd4f;eip=0x0009e8; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0x0F));	// 33788 mov     word ptr [bp+2], 0Fh ;~ 0D4F:09E8
cs=0xd4f;eip=0x0009ed; 	X(POP(bp));	// 33789 pop     bp ;~ 0D4F:09ED
cs=0xd4f;eip=0x0009ee; 	X(PUSH(ax));	// 33790 push    ax ;~ 0D4F:09EE
cs=0xd4f;eip=0x0009ef; 	X(PUSH(bp));	// 33791 push    bp ;~ 0D4F:09EF
cs=0xd4f;eip=0x0009f0; 	T(MOV(bp, sp));	// 33792 mov     bp, sp ;~ 0D4F:09F0
cs=0xd4f;eip=0x0009f2; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0x4240));	// 33793 mov     word ptr [bp+2], 4240h ;~ 0D4F:09F2
cs=0xd4f;eip=0x0009f7; 	X(POP(bp));	// 33794 pop     bp ;~ 0D4F:09F7
cs=0xd4f;eip=0x0009f8; 	X(PUSH(cs));	// 33795 push    cs ;~ 0D4F:09F8
cs=0xd4f;eip=0x0009f9; 	J(CALL(sub_1c10a,0));	// 33796 call    near ptr sub_1C10A ;~ 0D4F:09F9
cs=0xd4f;eip=0x0009fc; 	T(ADD(sp, 8));	// 33797 add     sp, 8 ;~ 0D4F:09FC
cs=0xd4f;eip=0x0009ff; 	X(PUSH(dx));	// 33798 push    dx ;~ 0D4F:09FF
cs=0xd4f;eip=0x000a00; 	X(PUSH(ax));	// 33799 push    ax ;~ 0D4F:0A00
cs=0xd4f;eip=0x000a01; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 33800 push    [bp+arg_2] ;~ 0D4F:0A01
cs=0xd4f;eip=0x000a04; 	X(PUSH(cs));	// 33801 push    cs ;~ 0D4F:0A04
cs=0xd4f;eip=0x000a05; 	J(CALL(sub_1c451,0));	// 33802 call    sub_1C451 ;~ 0D4F:0A05
cs=0xd4f;eip=0x000a08; 	T(ADD(sp, 6));	// 33803 add     sp, 6 ;~ 0D4F:0A08
loc_1c4db:
	// 6006 
cs=0xd4f;eip=0x000a0b; 	T(OR(bh, 0));	// 33806 or      bh, 0 ;~ 0D4F:0A0B
seg002_a0e_proc:
	// 33809 
cs=0xd4f;eip=0x000a0e; 	X(PUSH(cs));	// 33809 push    cs ;~ 0D4F:0A0E
cs=0xd4f;eip=0x000a0f; 	J(CALL(_group2,m2c::kloc_1c4db));	// 33810 call    near ptr loc_1C4DB+1 ;~ 0D4F:0A0F
cs=0xd4f;eip=0x000a12; 	X(POP(di));	// 33811 pop     di ;~ 0D4F:0A12
cs=0xd4f;eip=0x000a13; 	X(POP(si));	// 33812 pop     si ;~ 0D4F:0A13
cs=0xd4f;eip=0x000a14; 	X(POP(ds));	// 33813 pop     ds ;~ 0D4F:0A14
cs=0xd4f;eip=0x000a15; 	X(POP(bp));	// 33814 pop     bp ;~ 0D4F:0A15
cs=0xd4f;eip=0x000a16; 	R(RETF(0));	// 33815 retf ;~ 0D4F:0A16
ret_d4f_a17:
	// 6007 
cs=0xd4f;eip=0x000a17; 	X(PUSH(bp));	// 33817 push    bp ;~ 0D4F:0A17
cs=0xd4f;eip=0x000a18; 	T(MOV(bp, sp));	// 33818 mov     bp, sp ;~ 0D4F:0A18
cs=0xd4f;eip=0x000a1a; 	X(PUSH(ds));	// 33819 push    ds ;~ 0D4F:0A1A
cs=0xd4f;eip=0x000a1b; 	X(PUSH(si));	// 33820 push    si ;~ 0D4F:0A1B
cs=0xd4f;eip=0x000a1c; 	X(PUSH(di));	// 33821 push    di ;~ 0D4F:0A1C
cs=0xd4f;eip=0x000a1d; 	X(PUSHF);	// 33822 pushf ;~ 0D4F:0A1D
cs=0xd4f;eip=0x000a1e; 	T(CLI);	// 33823 cli ;~ 0D4F:0A1E
cs=0xd4f;eip=0x000a1f; 	T(CMP(*(dw*)(raddr(ss,bp+8)), 0));	// 33824 cmp     word ptr [bp+8], 0 ;~ 0D4F:0A1F
cs=0xd4f;eip=0x000a23; 	J(JNZ(loc_1c4fd));	// 33825 jnz     short loc_1C4FD ;~ 0D4F:0A23
cs=0xd4f;eip=0x000a25; 	T(MOV(ax, 0x0D68D));	// 33826 mov     ax, 0D68Dh ;~ 0D4F:0A25
cs=0xd4f;eip=0x000a28; 	T(MOV(dx, 0));	// 33827 mov     dx, 0 ;~ 0D4F:0A28
cs=0xd4f;eip=0x000a2b; 	J(JMP(loc_1c50b));	// 33828 jmp     short loc_1C50B ;~ 0D4F:0A2B
loc_1c4fd:
	// 6008 
cs=0xd4f;eip=0x000a2d; 	T(MOV(ax, 0x2710));	// 33832 mov     ax, 2710h ;~ 0D4F:0A2D
cs=0xd4f;eip=0x000a30; 	T(MOV(bx, 0x2E9C));	// 33833 mov     bx, 2E9Ch ;~ 0D4F:0A30
cs=0xd4f;eip=0x000a33; 	X(MUL1_2(*(dw*)(raddr(ss,bp+8))));	// 33834 mul     word ptr [bp+8] ;~ 0D4F:0A33
cs=0xd4f;eip=0x000a36; 	T(DIV2(bx));	// 33835 div     bx ;~ 0D4F:0A36
cs=0xd4f;eip=0x000a38; 	T(MOV(dx, 0));	// 33836 mov     dx, 0 ;~ 0D4F:0A38
loc_1c50b:
	// 6009 
cs=0xd4f;eip=0x000a3b; 	X(PUSH(dx));	// 33839 push    dx ;~ 0D4F:0A3B
cs=0xd4f;eip=0x000a3c; 	X(PUSH(ax));	// 33840 push    ax ;~ 0D4F:0A3C
cs=0xd4f;eip=0x000a3d; 	X(PUSH(*(dw*)(raddr(ss,bp+6))));	// 33841 push    word ptr [bp+6] ;~ 0D4F:0A3D
cs=0xd4f;eip=0x000a40; 	X(PUSH(cs));	// 33842 push    cs ;~ 0D4F:0A40
cs=0xd4f;eip=0x000a41; 	J(CALL(sub_1c451,0));	// 33843 call    sub_1C451 ;~ 0D4F:0A41
cs=0xd4f;eip=0x000a44; 	T(ADD(sp, 6));	// 33844 add     sp, 6 ;~ 0D4F:0A44
loc_1c517:
	// 6010 
cs=0xd4f;eip=0x000a47; 	T(OR(bh, 0));	// 33847 or      bh, 0 ;~ 0D4F:0A47
cs=0xd4f;eip=0x000a4a; 	X(PUSH(cs));	// 33848 push    cs ;~ 0D4F:0A4A
cs=0xd4f;eip=0x000a4b; 	J(CALL(_group2,m2c::kloc_1c517));	// 33849 call    near ptr loc_1C517+1 ;~ 0D4F:0A4B
cs=0xd4f;eip=0x000a4e; 	X(POP(di));	// 33850 pop     di ;~ 0D4F:0A4E
cs=0xd4f;eip=0x000a4f; 	X(POP(si));	// 33851 pop     si ;~ 0D4F:0A4F
cs=0xd4f;eip=0x000a50; 	X(POP(ds));	// 33852 pop     ds ;~ 0D4F:0A50
cs=0xd4f;eip=0x000a51; 	X(POP(bp));	// 33853 pop     bp ;~ 0D4F:0A51
cs=0xd4f;eip=0x000a52; 	R(RETF(0));	// 33854 retf ;~ 0D4F:0A52
ret_d4f_a53:
	// 6011 
cs=0xd4f;eip=0x000a53; 	X(PUSH(ds));	// 33856 push    ds ;~ 0D4F:0A53
cs=0xd4f;eip=0x000a54; 	X(PUSH(si));	// 33857 push    si ;~ 0D4F:0A54
cs=0xd4f;eip=0x000a55; 	X(PUSH(di));	// 33858 push    di ;~ 0D4F:0A55
cs=0xd4f;eip=0x000a56; 	X(PUSHF);	// 33859 pushf ;~ 0D4F:0A56
cs=0xd4f;eip=0x000a57; 	T(CLI);	// 33860 cli ;~ 0D4F:0A57
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000a58; 	T(MOV(ax, *(dw*)(((db*)&word_1bbf2))));	// 33861 mov     ax, cs:word_1BBF2 ;~ 0D4F:0A58
loc_1c52c:
	// 6012 
cs=0xd4f;eip=0x000a5c; 	T(OR(bh, 0));	// 33864 or      bh, 0 ;~ 0D4F:0A5C
cs=0xd4f;eip=0x000a5f; 	X(PUSH(cs));	// 33865 push    cs ;~ 0D4F:0A5F
cs=0xd4f;eip=0x000a60; 	J(CALL(_group2,m2c::kloc_1c52c));	// 33866 call    near ptr loc_1C52C+1 ;~ 0D4F:0A60
cs=0xd4f;eip=0x000a63; 	X(POP(di));	// 33867 pop     di ;~ 0D4F:0A63
cs=0xd4f;eip=0x000a64; 	X(POP(si));	// 33868 pop     si ;~ 0D4F:0A64
cs=0xd4f;eip=0x000a65; 	X(POP(ds));	// 33869 pop     ds ;~ 0D4F:0A65
cs=0xd4f;eip=0x000a66; 	R(RETF(0));	// 33870 retf ;~ 0D4F:0A66
sub_1c537:
	// 33876 
#undef arg_2
#define arg_2 6
	// 33878 arg_2           = dword ptr  6 ;~ 0D4F:0A67
ret_d4f_a67:
	// 6013 
cs=0xd4f;eip=0x000a67; 	X(PUSH(bp));	// 33880 push    bp ;~ 0D4F:0A67
cs=0xd4f;eip=0x000a68; 	T(MOV(bp, sp));	// 33881 mov     bp, sp ;~ 0D4F:0A68
cs=0xd4f;eip=0x000a6a; 	X(PUSH(ds));	// 33882 push    ds ;~ 0D4F:0A6A
cs=0xd4f;eip=0x000a6b; 	X(PUSH(si));	// 33883 push    si ;~ 0D4F:0A6B
cs=0xd4f;eip=0x000a6c; 	X(PUSH(di));	// 33884 push    di ;~ 0D4F:0A6C
cs=0xd4f;eip=0x000a6d; 	X(PUSHF);	// 33885 pushf ;~ 0D4F:0A6D
cs=0xd4f;eip=0x000a6e; 	T(CLI);	// 33886 cli ;~ 0D4F:0A6E
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000a6f; 	X(MOV(*(dw*)(((db*)&word_1bc78)), 0));	// 33887 mov     cs:word_1BC78, 0 ;~ 0D4F:0A6F
loc_1c546:
	// 6014 
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000a76; 	T(MOV(si, *(dw*)(((db*)&word_1bc78))));	// 33890 mov     si, cs:word_1BC78 ;~ 0D4F:0A76
cs=0xd4f;eip=0x000a7b; 	T(SHL(si, 1));	// 33891 shl     si, 1 ;~ 0D4F:0A7B
cs=0xd4f;eip=0x000a7d; 	T(SHL(si, 1));	// 33892 shl     si, 1 ;~ 0D4F:0A7D
cs=0xd4f;eip=0x000a7f; 	T(MOV(ax, *(dw*)(raddr(cs,si+0x124))));	// 33893 mov     ax, cs:[si+124h] ;~ 0D4F:0A7F
cs=0xd4f;eip=0x000a84; 	T(OR(ax, *(dw*)(raddr(cs,si+0x126))));	// 33894 or      ax, cs:[si+126h] ;~ 0D4F:0A84
cs=0xd4f;eip=0x000a89; 	J(JZ(loc_1c56d));	// 33895 jz      short loc_1C56D ;~ 0D4F:0A89
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000a8b; 	X(INC(*(dw*)(((db*)&word_1bc78))));	// 33896 inc     cs:word_1BC78 ;~ 0D4F:0A8B
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000a90; 	T(CMP(*(dw*)(((db*)&word_1bc78)), 0x10));	// 33897 cmp     cs:word_1BC78, 10h ;~ 0D4F:0A90
cs=0xd4f;eip=0x000a96; 	J(JNZ(loc_1c546));	// 33898 jnz     short loc_1C546 ;~ 0D4F:0A96
cs=0xd4f;eip=0x000a98; 	T(MOV(ax, 0x0FFFF));	// 33899 mov     ax, 0FFFFh ;~ 0D4F:0A98
cs=0xd4f;eip=0x000a9b; 	J(JMP(loc_1c5b5));	// 33900 jmp     short loc_1C5B5 ;~ 0D4F:0A9B
loc_1c56d:
	// 6015 
cs=0xd4f;eip=0x000a9d; 	T(LES(di, *(dd*)(raddr(ss,bp+arg_2))));	// 33904 les     di, [bp+arg_2] ;~ 0D4F:0A9D
cs=0xd4f;eip=0x000aa0; 	T(MOV(ax, 0x0FFFF));	// 33906 mov     ax, 0FFFFh ;~ 0D4F:0AA0
cs=0xd4f;eip=0x000aa3; 	T(CMP(*(dw*)(raddr(es,di+2)), 0x6F43));	// 33907 cmp     word ptr es:[di+2], 6F43h ;~ 0D4F:0AA3
cs=0xd4f;eip=0x000aa9; 	J(JNZ(loc_1c5b5));	// 33908 jnz     short loc_1C5B5 ;~ 0D4F:0AA9
cs=0xd4f;eip=0x000aab; 	T(CMP(*(dw*)(raddr(es,di+4)), 0x7970));	// 33909 cmp     word ptr es:[di+4], 7970h ;~ 0D4F:0AAB
cs=0xd4f;eip=0x000ab1; 	J(JNZ(loc_1c5b5));	// 33910 jnz     short loc_1C5B5 ;~ 0D4F:0AB1
cs=0xd4f;eip=0x000ab3; 	T(ADD(di, *(dw*)(raddr(es,di))));	// 33911 add     di, es:[di] ;~ 0D4F:0AB3
cs=0xd4f;eip=0x000ab6; 	X(MOV(*(dw*)(raddr(cs,si+0x124)), di));	// 33912 mov     cs:[si+124h], di ;~ 0D4F:0AB6
cs=0xd4f;eip=0x000abb; 	X(MOV(*(dw*)(raddr(cs,si+0x126)), es));	// 33913 mov     word ptr cs:[si+126h], es ;~ 0D4F:0ABB
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000ac0; 	X(PUSH(*(dw*)(((db*)&word_1bc78))));	// 33914 push    cs:word_1BC78 ;~ 0D4F:0AC0
cs=0xd4f;eip=0x000ac5; 	X(PUSH(cs));	// 33915 push    cs ;~ 0D4F:0AC5
cs=0xd4f;eip=0x000ac6; 	J(CALL(sub_1c5ef,0));	// 33916 call    near ptr sub_1C5EF ;~ 0D4F:0AC6
cs=0xd4f;eip=0x000ac9; 	T(ADD(sp, 2));	// 33917 add     sp, 2 ;~ 0D4F:0AC9
cs=0xd4f;eip=0x000acc; 	T(MOV(es, dx));	// 33918 mov     es, dx ;~ 0D4F:0ACC
cs=0xd4f;eip=0x000ace; 	T(MOV(di, ax));	// 33919 mov     di, ax ;~ 0D4F:0ACE
cs=0xd4f;eip=0x000ad0; 	T(OR(dx, ax));	// 33920 or      dx, ax ;~ 0D4F:0AD0
cs=0xd4f;eip=0x000ad2; 	T(MOV(ax, 0x0FFFF));	// 33921 mov     ax, 0FFFFh ;~ 0D4F:0AD2
cs=0xd4f;eip=0x000ad5; 	J(JZ(loc_1c5b5));	// 33922 jz      short loc_1C5B5 ;~ 0D4F:0AD5
cs=0xd4f;eip=0x000ad7; 	T(MOV(dx, *(dw*)(raddr(es,di))));	// 33923 mov     dx, es:[di] ;~ 0D4F:0AD7
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000ada; 	T(CMP(dx, *(dw*)(((db*)&word_1be88))));	// 33924 cmp     dx, cs:word_1BE88 ;~ 0D4F:0ADA
cs=0xd4f;eip=0x000adf; 	J(JA(loc_1c5b5));	// 33925 ja      short loc_1C5B5 ;~ 0D4F:0ADF
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000ae1; 	T(MOV(ax, *(dw*)(((db*)&word_1bc78))));	// 33926 mov     ax, cs:word_1BC78 ;~ 0D4F:0AE1
loc_1c5b5:
	// 6016 
cs=0xd4f;eip=0x000ae5; 	T(OR(bh, 0));	// 33930 or      bh, 0 ;~ 0D4F:0AE5
seg002_ae8_proc:
	// 33933 
cs=0xd4f;eip=0x000ae8; 	X(PUSH(cs));	// 33933 push    cs ;~ 0D4F:0AE8
cs=0xd4f;eip=0x000ae9; 	J(CALL(_group2,m2c::kloc_1c5b5));	// 33934 call    near ptr loc_1C5B5+1 ;~ 0D4F:0AE9
cs=0xd4f;eip=0x000aec; 	X(POP(di));	// 33935 pop     di ;~ 0D4F:0AEC
cs=0xd4f;eip=0x000aed; 	X(POP(si));	// 33936 pop     si ;~ 0D4F:0AED
cs=0xd4f;eip=0x000aee; 	X(POP(ds));	// 33937 pop     ds ;~ 0D4F:0AEE
cs=0xd4f;eip=0x000aef; 	X(POP(bp));	// 33938 pop     bp ;~ 0D4F:0AEF
cs=0xd4f;eip=0x000af0; 	R(RETF(0));	// 33939 retf ;~ 0D4F:0AF0
ret_d4f_af1:
	// 6017 
cs=0xd4f;eip=0x000af1; 	X(PUSH(bp));	// 33941 push    bp ;~ 0D4F:0AF1
cs=0xd4f;eip=0x000af2; 	T(MOV(bp, sp));	// 33942 mov     bp, sp ;~ 0D4F:0AF2
cs=0xd4f;eip=0x000af4; 	X(PUSH(ds));	// 33943 push    ds ;~ 0D4F:0AF4
cs=0xd4f;eip=0x000af5; 	X(PUSH(si));	// 33944 push    si ;~ 0D4F:0AF5
cs=0xd4f;eip=0x000af6; 	X(PUSH(di));	// 33945 push    di ;~ 0D4F:0AF6
cs=0xd4f;eip=0x000af7; 	X(PUSHF);	// 33946 pushf ;~ 0D4F:0AF7
cs=0xd4f;eip=0x000af8; 	T(CLI);	// 33947 cli ;~ 0D4F:0AF8
cs=0xd4f;eip=0x000af9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 33948 mov     bx, [bp+6] ;~ 0D4F:0AF9
cs=0xd4f;eip=0x000afc; 	T(CMP(bx, 0x10));	// 33949 cmp     bx, 10h ;~ 0D4F:0AFC
cs=0xd4f;eip=0x000aff; 	J(JNC(loc_1c5e3));	// 33950 jnb     short loc_1C5E3 ;~ 0D4F:0AFF
cs=0xd4f;eip=0x000b01; 	T(SHL(bx, 1));	// 33951 shl     bx, 1 ;~ 0D4F:0B01
cs=0xd4f;eip=0x000b03; 	T(SHL(bx, 1));	// 33952 shl     bx, 1 ;~ 0D4F:0B03
cs=0xd4f;eip=0x000b05; 	X(MOV(*(dw*)(raddr(cs,bx+0x124)), 0));	// 33953 mov     word ptr cs:[bx+124h], 0 ;~ 0D4F:0B05
cs=0xd4f;eip=0x000b0c; 	X(MOV(*(dw*)(raddr(cs,bx+0x126)), 0));	// 33954 mov     word ptr cs:[bx+126h], 0 ;~ 0D4F:0B0C
loc_1c5e3:
	// 6018 
cs=0xd4f;eip=0x000b13; 	T(OR(bh, 0));	// 33958 or      bh, 0 ;~ 0D4F:0B13
cs=0xd4f;eip=0x000b16; 	X(PUSH(cs));	// 33959 push    cs ;~ 0D4F:0B16
cs=0xd4f;eip=0x000b17; 	J(CALL(_group2,m2c::kloc_1c5e3));	// 33960 call    near ptr loc_1C5E3+1 ;~ 0D4F:0B17
cs=0xd4f;eip=0x000b1a; 	X(POP(di));	// 33961 pop     di ;~ 0D4F:0B1A
cs=0xd4f;eip=0x000b1b; 	X(POP(si));	// 33962 pop     si ;~ 0D4F:0B1B
cs=0xd4f;eip=0x000b1c; 	X(POP(ds));	// 33963 pop     ds ;~ 0D4F:0B1C
cs=0xd4f;eip=0x000b1d; 	X(POP(bp));	// 33964 pop     bp ;~ 0D4F:0B1D
cs=0xd4f;eip=0x000b1e; 	R(RETF(0));	// 33965 retf ;~ 0D4F:0B1E
sub_1c5ef:
	// 33971 
#undef arg_0
#define arg_0 6
	// 33974 arg_0           = word ptr  6 ;~ 0D4F:0B1F
ret_d4f_b1f:
	// 6019 
cs=0xd4f;eip=0x000b1f; 	X(PUSH(bp));	// 33976 push    bp ;~ 0D4F:0B1F
cs=0xd4f;eip=0x000b20; 	T(MOV(bp, sp));	// 33977 mov     bp, sp ;~ 0D4F:0B20
cs=0xd4f;eip=0x000b22; 	X(PUSH(ax));	// 33978 push    ax ;~ 0D4F:0B22
cs=0xd4f;eip=0x000b23; 	X(PUSH(bp));	// 33979 push    bp ;~ 0D4F:0B23
cs=0xd4f;eip=0x000b24; 	T(MOV(bp, sp));	// 33980 mov     bp, sp ;~ 0D4F:0B24
cs=0xd4f;eip=0x000b26; 	X(MOV(*(dw*)(raddr(ss,bp+2)), seg_offset(seg002)));	// 33981 mov     word ptr [bp+2], seg seg002 ;~ 0D4F:0B26
cs=0xd4f;eip=0x000b2b; 	X(POP(bp));	// 33982 pop     bp ;~ 0D4F:0B2B
cs=0xd4f;eip=0x000b2c; 	X(PUSH(ax));	// 33983 push    ax ;~ 0D4F:0B2C
cs=0xd4f;eip=0x000b2d; 	X(PUSH(bp));	// 33984 push    bp ;~ 0D4F:0B2D
cs=0xd4f;eip=0x000b2e; 	T(MOV(bp, sp));	// 33985 mov     bp, sp ;~ 0D4F:0B2E
cs=0xd4f;eip=0x000b30; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0x0A53));	// 33986 mov     word ptr [bp+2], 0A53h ;~ 0D4F:0B30
cs=0xd4f;eip=0x000b35; 	X(POP(bp));	// 33987 pop     bp ;~ 0D4F:0B35
cs=0xd4f;eip=0x000b36; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 33988 push    [bp+arg_0] ;~ 0D4F:0B36
cs=0xd4f;eip=0x000b39; 	T(MOV(ax, 0x64));	// 33989 mov     ax, 64h ; 'd' ;~ 0D4F:0B39
cs=0xd4f;eip=0x000b3c; 	X(PUSH(cs));	// 33990 push    cs ;~ 0D4F:0B3C
cs=0xd4f;eip=0x000b3d; 	J(CALL(sub_1bec2,0));	// 33991 call    near ptr sub_1BEC2 ;~ 0D4F:0B3D
cs=0xd4f;eip=0x000b40; 	T(ADD(sp, 6));	// 33992 add     sp, 6 ;~ 0D4F:0B40
cs=0xd4f;eip=0x000b43; 	X(POP(bp));	// 33993 pop     bp ;~ 0D4F:0B43
cs=0xd4f;eip=0x000b44; 	R(RETF(0));	// 33994 retf ;~ 0D4F:0B44
sub_1c615:
	// 34001 
cs=0xd4f;eip=0x000b45; 	T(MOV(ax, 0x65));	// 34002 mov     ax, 65h ; 'e' ;~ 0D4F:0B45
ret_d4f_b48:
	// 6020 
cs=0xd4f;eip=0x000b48; 	J(JMP(sub_1bec2));	// 34003 jmp     near ptr sub_1BEC2 ;~ 0D4F:0B48
sub_1c61b:
	// 34011 
#undef arg_2
#define arg_2 6
	// 34013 arg_2           = word ptr  6 ;~ 0D4F:0B4B
#undef arg_4
#define arg_4 8
	// 34014 arg_4           = word ptr  8 ;~ 0D4F:0B4B
#undef arg_6
#define arg_6 0x0A
	// 34015 arg_6           = word ptr  0Ah ;~ 0D4F:0B4B
#undef arg_8
#define arg_8 0x0C
	// 34016 arg_8           = word ptr  0Ch ;~ 0D4F:0B4B
#undef arg_a
#define arg_a 0x0E
	// 34017 arg_A           = word ptr  0Eh ;~ 0D4F:0B4B
ret_d4f_b4b:
	// 6021 
cs=0xd4f;eip=0x000b4b; 	X(PUSH(bp));	// 34019 push    bp ;~ 0D4F:0B4B
cs=0xd4f;eip=0x000b4c; 	T(MOV(bp, sp));	// 34020 mov     bp, sp ;~ 0D4F:0B4C
cs=0xd4f;eip=0x000b4e; 	X(PUSH(ds));	// 34021 push    ds ;~ 0D4F:0B4E
cs=0xd4f;eip=0x000b4f; 	X(PUSH(si));	// 34022 push    si ;~ 0D4F:0B4F
cs=0xd4f;eip=0x000b50; 	X(PUSH(di));	// 34023 push    di ;~ 0D4F:0B50
cs=0xd4f;eip=0x000b51; 	X(PUSHF);	// 34024 pushf ;~ 0D4F:0B51
cs=0xd4f;eip=0x000b52; 	T(CLI);	// 34025 cli ;~ 0D4F:0B52
cs=0xd4f;eip=0x000b53; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0x10));	// 34026 cmp     [bp+arg_2], 10h ;~ 0D4F:0B53
cs=0xd4f;eip=0x000b57; 	J(JC(loc_1c62c));	// 34027 jb      short loc_1C62C ;~ 0D4F:0B57
cs=0xd4f;eip=0x000b59; 	J(JMP(loc_1c6c4));	// 34028 jmp     loc_1C6C4 ;~ 0D4F:0B59
loc_1c62c:
	// 6022 
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000b5c; 	X(MOV(*(dw*)(((db*)&word_1bc7e)), 0x0FFFF));	// 34032 mov     cs:word_1BC7E, 0FFFFh ;~ 0D4F:0B5C
cs=0xd4f;eip=0x000b63; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 34033 push    [bp+arg_2] ;~ 0D4F:0B63
cs=0xd4f;eip=0x000b66; 	X(PUSH(cs));	// 34034 push    cs ;~ 0D4F:0B66
cs=0xd4f;eip=0x000b67; 	J(CALL(sub_1c5ef,0));	// 34035 call    near ptr sub_1C5EF ;~ 0D4F:0B67
cs=0xd4f;eip=0x000b6a; 	T(ADD(sp, 2));	// 34036 add     sp, 2 ;~ 0D4F:0B6A
cs=0xd4f;eip=0x000b6d; 	T(MOV(es, dx));	// 34037 mov     es, dx ;~ 0D4F:0B6D
cs=0xd4f;eip=0x000b6f; 	T(MOV(di, ax));	// 34038 mov     di, ax ;~ 0D4F:0B6F
cs=0xd4f;eip=0x000b71; 	T(MOV(si, *(dw*)(raddr(es,di+0x14))));	// 34039 mov     si, es:[di+14h] ;~ 0D4F:0B71
cs=0xd4f;eip=0x000b75; 	T(CMP(si, 0x0FFFF));	// 34040 cmp     si, 0FFFFh ;~ 0D4F:0B75
cs=0xd4f;eip=0x000b78; 	J(JZ(loc_1c68b));	// 34041 jz      short loc_1C68B ;~ 0D4F:0B78
cs=0xd4f;eip=0x000b7a; 	T(ADD(si, 5));	// 34042 add     si, 5 ;~ 0D4F:0B7A
cs=0xd4f;eip=0x000b7d; 	T(MOV(ax, 0x67));	// 34043 mov     ax, 67h ; 'g' ;~ 0D4F:0B7D
cs=0xd4f;eip=0x000b80; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 34044 mov     bx, [bp+arg_2] ;~ 0D4F:0B80
cs=0xd4f;eip=0x000b83; 	X(PUSH(cs));	// 34045 push    cs ;~ 0D4F:0B83
cs=0xd4f;eip=0x000b84; 	J(CALL(sub_1be8a,0));	// 34046 call    near ptr sub_1BE8A ;~ 0D4F:0B84
cs=0xd4f;eip=0x000b87; 	T(MOV(bx, ax));	// 34047 mov     bx, ax ;~ 0D4F:0B87
cs=0xd4f;eip=0x000b89; 	T(OR(bx, dx));	// 34048 or      bx, dx ;~ 0D4F:0B89
cs=0xd4f;eip=0x000b8b; 	J(JZ(loc_1c68b));	// 34049 jz      short loc_1C68B ;~ 0D4F:0B8B
cs=0xd4f;eip=0x000b8d; 	T(MOV(es, dx));	// 34050 mov     es, dx ;~ 0D4F:0B8D
cs=0xd4f;eip=0x000b8f; 	T(MOV(bx, ax));	// 34051 mov     bx, ax ;~ 0D4F:0B8F
cs=0xd4f;eip=0x000b91; 	X(PUSH(es));	// 34052 push    es ;~ 0D4F:0B91
cs=0xd4f;eip=0x000b92; 	X(PUSH(bx));	// 34053 push    bx ;~ 0D4F:0B92
cs=0xd4f;eip=0x000b93; 	X(PUSH(cs));	// 34054 push    cs ;~ 0D4F:0B93
cs=0xd4f;eip=0x000b94; 	J(CALL(sub_1c293,0));	// 34055 call    sub_1C293 ;~ 0D4F:0B94
cs=0xd4f;eip=0x000b97; 	T(ADD(sp, 4));	// 34056 add     sp, 4 ;~ 0D4F:0B97
cs=0xd4f;eip=0x000b9a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 34057 mov     bx, [bp+arg_2] ;~ 0D4F:0B9A
cs=0xd4f;eip=0x000b9d; 	T(SHL(bx, 1));	// 34058 shl     bx, 1 ;~ 0D4F:0B9D
cs=0xd4f;eip=0x000b9f; 	X(MOV(*(dw*)(raddr(cs,bx+0x164)), ax));	// 34059 mov     cs:[bx+164h], ax ;~ 0D4F:0B9F
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000ba4; 	X(MOV(*(dw*)(((db*)&word_1bc7e)), ax));	// 34060 mov     cs:word_1BC7E, ax ;~ 0D4F:0BA4
cs=0xd4f;eip=0x000ba8; 	X(PUSH(ax));	// 34061 push    ax ;~ 0D4F:0BA8
cs=0xd4f;eip=0x000ba9; 	X(PUSH(bp));	// 34062 push    bp ;~ 0D4F:0BA9
cs=0xd4f;eip=0x000baa; 	T(MOV(bp, sp));	// 34063 mov     bp, sp ;~ 0D4F:0BAA
cs=0xd4f;eip=0x000bac; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0));	// 34064 mov     word ptr [bp+2], 0 ;~ 0D4F:0BAC
cs=0xd4f;eip=0x000bb1; 	X(POP(bp));	// 34065 pop     bp ;~ 0D4F:0BB1
cs=0xd4f;eip=0x000bb2; 	X(PUSH(si));	// 34066 push    si ;~ 0D4F:0BB2
cs=0xd4f;eip=0x000bb3; 	X(PUSH(ax));	// 34067 push    ax ;~ 0D4F:0BB3
cs=0xd4f;eip=0x000bb4; 	X(PUSH(cs));	// 34068 push    cs ;~ 0D4F:0BB4
cs=0xd4f;eip=0x000bb5; 	J(CALL(sub_1c4a6,0));	// 34069 call    sub_1C4A6 ;~ 0D4F:0BB5
cs=0xd4f;eip=0x000bb8; 	T(ADD(sp, 6));	// 34070 add     sp, 6 ;~ 0D4F:0BB8
loc_1c68b:
	// 6023 
cs=0xd4f;eip=0x000bbb; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 34074 push    [bp+arg_A] ;~ 0D4F:0BBB
cs=0xd4f;eip=0x000bbe; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 34075 push    [bp+arg_8] ;~ 0D4F:0BBE
cs=0xd4f;eip=0x000bc1; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 34076 push    [bp+arg_6] ;~ 0D4F:0BC1
cs=0xd4f;eip=0x000bc4; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 34077 push    [bp+arg_4] ;~ 0D4F:0BC4
cs=0xd4f;eip=0x000bc7; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 34078 push    [bp+arg_2] ;~ 0D4F:0BC7
cs=0xd4f;eip=0x000bca; 	T(MOV(ax, 0x66));	// 34079 mov     ax, 66h ; 'f' ;~ 0D4F:0BCA
cs=0xd4f;eip=0x000bcd; 	X(PUSH(cs));	// 34080 push    cs ;~ 0D4F:0BCD
cs=0xd4f;eip=0x000bce; 	J(CALL(sub_1bec2,0));	// 34081 call    near ptr sub_1BEC2 ;~ 0D4F:0BCE
cs=0xd4f;eip=0x000bd1; 	T(ADD(sp, 0x0A));	// 34082 add     sp, 0Ah ;~ 0D4F:0BD1
cs=0xd4f;eip=0x000bd4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 34083 mov     bx, [bp+arg_2] ;~ 0D4F:0BD4
cs=0xd4f;eip=0x000bd7; 	T(SHL(bx, 1));	// 34084 shl     bx, 1 ;~ 0D4F:0BD7
cs=0xd4f;eip=0x000bd9; 	X(MOV(*(dw*)(raddr(cs,bx+0x184)), 1));	// 34085 mov     word ptr cs:[bx+184h], 1 ;~ 0D4F:0BD9
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000be0; 	T(CMP(*(dw*)(((db*)&word_1bc7e)), 0x0FFFF));	// 34086 cmp     cs:word_1BC7E, 0FFFFh ;~ 0D4F:0BE0
cs=0xd4f;eip=0x000be6; 	J(JZ(loc_1c6c4));	// 34087 jz      short loc_1C6C4 ;~ 0D4F:0BE6
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000be8; 	X(PUSH(*(dw*)(((db*)&word_1bc7e))));	// 34088 push    cs:word_1BC7E ;~ 0D4F:0BE8
cs=0xd4f;eip=0x000bed; 	X(PUSH(cs));	// 34089 push    cs ;~ 0D4F:0BED
cs=0xd4f;eip=0x000bee; 	J(CALL(sub_1c3c5,0));	// 34090 call    sub_1C3C5 ;~ 0D4F:0BEE
cs=0xd4f;eip=0x000bf1; 	T(ADD(sp, 2));	// 34091 add     sp, 2 ;~ 0D4F:0BF1
loc_1c6c4:
	// 6024 
cs=0xd4f;eip=0x000bf4; 	T(OR(bh, 0));	// 34095 or      bh, 0 ;~ 0D4F:0BF4
seg002_bf7_proc:
	// 34098 
cs=0xd4f;eip=0x000bf7; 	X(PUSH(cs));	// 34098 push    cs ;~ 0D4F:0BF7
cs=0xd4f;eip=0x000bf8; 	J(CALL(_group2,m2c::kloc_1c6c4));	// 34099 call    near ptr loc_1C6C4+1 ;~ 0D4F:0BF8
cs=0xd4f;eip=0x000bfb; 	X(POP(di));	// 34100 pop     di ;~ 0D4F:0BFB
cs=0xd4f;eip=0x000bfc; 	X(POP(si));	// 34101 pop     si ;~ 0D4F:0BFC
cs=0xd4f;eip=0x000bfd; 	X(POP(ds));	// 34102 pop     ds ;~ 0D4F:0BFD
cs=0xd4f;eip=0x000bfe; 	X(POP(bp));	// 34103 pop     bp ;~ 0D4F:0BFE
cs=0xd4f;eip=0x000bff; 	R(RETF(0));	// 34104 retf ;~ 0D4F:0BFF
sub_1c6d0:
	// 34109 
cs=0xd4f;eip=0x000c00; 	T(MOV(bx, sp));	// 34110 mov     bx, sp ;~ 0D4F:0C00
ret_d4f_c02:
	// 6025 
cs=0xd4f;eip=0x000c02; 	T(MOV(bx, *(dw*)(raddr(ss,bx+4))));	// 34111 mov     bx, ss:[bx+4] ;~ 0D4F:0C02
cs=0xd4f;eip=0x000c06; 	T(CMP(bx, 0x10));	// 34112 cmp     bx, 10h ;~ 0D4F:0C06
cs=0xd4f;eip=0x000c09; 	J(JNC(locret_1c702));	// 34113 jnb     short locret_1C702 ;~ 0D4F:0C09
cs=0xd4f;eip=0x000c0b; 	T(SHL(bx, 1));	// 34114 shl     bx, 1 ;~ 0D4F:0C0B
cs=0xd4f;eip=0x000c0d; 	T(MOV(dx, 0));	// 34115 mov     dx, 0 ;~ 0D4F:0C0D
cs=0xd4f;eip=0x000c10; 	X(XCHG(dx, *(dw*)(raddr(cs,bx+0x184))));	// 34116 xchg    dx, cs:[bx+184h] ;~ 0D4F:0C10
cs=0xd4f;eip=0x000c15; 	T(CMP(dx, 0));	// 34117 cmp     dx, 0 ;~ 0D4F:0C15
cs=0xd4f;eip=0x000c18; 	J(JZ(locret_1c702));	// 34118 jz      short locret_1C702 ;~ 0D4F:0C18
cs=0xd4f;eip=0x000c1a; 	T(MOV(dx, *(dw*)(raddr(cs,bx+0x164))));	// 34119 mov     dx, cs:[bx+164h] ;~ 0D4F:0C1A
cs=0xd4f;eip=0x000c1f; 	T(CMP(dx, 0x0FFFF));	// 34120 cmp     dx, 0FFFFh ;~ 0D4F:0C1F
cs=0xd4f;eip=0x000c22; 	J(JZ(loc_1c6fc));	// 34121 jz      short loc_1C6FC ;~ 0D4F:0C22
cs=0xd4f;eip=0x000c24; 	X(PUSH(dx));	// 34122 push    dx ;~ 0D4F:0C24
cs=0xd4f;eip=0x000c25; 	X(PUSH(cs));	// 34123 push    cs ;~ 0D4F:0C25
cs=0xd4f;eip=0x000c26; 	J(CALL(sub_1c35e,0));	// 34124 call    sub_1C35E ;~ 0D4F:0C26
cs=0xd4f;eip=0x000c29; 	T(ADD(sp, 2));	// 34125 add     sp, 2 ;~ 0D4F:0C29
loc_1c6fc:
	// 6026 
cs=0xd4f;eip=0x000c2c; 	T(MOV(ax, 0x68));	// 34128 mov     ax, 68h ; 'h' ;~ 0D4F:0C2C
cs=0xd4f;eip=0x000c2f; 	J(JMP(sub_1bec2));	// 34129 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C2F
locret_1c702:
	// 6027 
cs=0xd4f;eip=0x000c32; 	R(RETF(0));	// 34134 retf ;~ 0D4F:0C32
seg002_c33_proc:
	// 34138 
cs=0xd4f;eip=0x000c33; 	T(MOV(ax, 0x78));	// 34138 mov     ax, 78h ; 'x' ;~ 0D4F:0C33
ret_d4f_c36:
	// 6028 
cs=0xd4f;eip=0x000c36; 	J(JMP(sub_1bec2));	// 34139 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C36
ret_d4f_c39:
	// 6029 
cs=0xd4f;eip=0x000c39; 	T(MOV(ax, 0x79));	// 34141 mov     ax, 79h ; 'y' ;~ 0D4F:0C39
cs=0xd4f;eip=0x000c3c; 	J(JMP(sub_1bec2));	// 34142 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C3C
ret_d4f_c3f:
	// 6030 
cs=0xd4f;eip=0x000c3f; 	T(MOV(ax, 0x86));	// 34144 mov     ax, 86h ; '†' ;~ 0D4F:0C3F
cs=0xd4f;eip=0x000c42; 	J(JMP(sub_1bec2));	// 34145 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C42
ret_d4f_c45:
	// 6031 
cs=0xd4f;eip=0x000c45; 	T(MOV(ax, 0x7A));	// 34147 mov     ax, 7Ah ; 'z' ;~ 0D4F:0C45
cs=0xd4f;eip=0x000c48; 	J(JMP(sub_1bec2));	// 34148 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C48
ret_d4f_c4b:
	// 6032 
cs=0xd4f;eip=0x000c4b; 	T(MOV(ax, 0x7B));	// 34150 mov     ax, 7Bh ; '{' ;~ 0D4F:0C4B
cs=0xd4f;eip=0x000c4e; 	J(JMP(sub_1bec2));	// 34151 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C4E
ret_d4f_c51:
	// 6033 
cs=0xd4f;eip=0x000c51; 	T(MOV(ax, 0x85));	// 34153 mov     ax, 85h ; '…' ;~ 0D4F:0C51
cs=0xd4f;eip=0x000c54; 	J(JMP(sub_1bec2));	// 34154 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C54
ret_d4f_c57:
	// 6034 
cs=0xd4f;eip=0x000c57; 	T(MOV(ax, 0x7C));	// 34156 mov     ax, 7Ch ; '|' ;~ 0D4F:0C57
cs=0xd4f;eip=0x000c5a; 	J(JMP(sub_1bec2));	// 34157 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C5A
ret_d4f_c5d:
	// 6035 
cs=0xd4f;eip=0x000c5d; 	T(MOV(ax, 0x7D));	// 34159 mov     ax, 7Dh ; '}' ;~ 0D4F:0C5D
cs=0xd4f;eip=0x000c60; 	J(JMP(sub_1bec2));	// 34160 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C60
ret_d4f_c63:
	// 6036 
cs=0xd4f;eip=0x000c63; 	T(MOV(ax, 0x7E));	// 34162 mov     ax, 7Eh ; '~' ;~ 0D4F:0C63
cs=0xd4f;eip=0x000c66; 	J(JMP(sub_1bec2));	// 34163 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C66
ret_d4f_c69:
	// 6037 
cs=0xd4f;eip=0x000c69; 	T(MOV(ax, 0x7F));	// 34165 mov     ax, 7Fh ;~ 0D4F:0C69
cs=0xd4f;eip=0x000c6c; 	J(JMP(sub_1bec2));	// 34166 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C6C
ret_d4f_c6f:
	// 6038 
cs=0xd4f;eip=0x000c6f; 	T(MOV(ax, 0x80));	// 34168 mov     ax, 80h ; '€' ;~ 0D4F:0C6F
cs=0xd4f;eip=0x000c72; 	J(JMP(sub_1bec2));	// 34169 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C72
ret_d4f_c75:
	// 6039 
cs=0xd4f;eip=0x000c75; 	T(MOV(ax, 0x81));	// 34171 mov     ax, 81h ;~ 0D4F:0C75
cs=0xd4f;eip=0x000c78; 	J(JMP(sub_1bec2));	// 34172 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C78
ret_d4f_c7b:
	// 6040 
cs=0xd4f;eip=0x000c7b; 	T(MOV(ax, 0x82));	// 34174 mov     ax, 82h ; '‚' ;~ 0D4F:0C7B
cs=0xd4f;eip=0x000c7e; 	J(JMP(sub_1bec2));	// 34175 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C7E
ret_d4f_c81:
	// 6041 
cs=0xd4f;eip=0x000c81; 	T(MOV(ax, 0x83));	// 34177 mov     ax, 83h ; 'ƒ' ;~ 0D4F:0C81
cs=0xd4f;eip=0x000c84; 	J(JMP(sub_1bec2));	// 34178 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C84
ret_d4f_c87:
	// 6042 
cs=0xd4f;eip=0x000c87; 	T(MOV(ax, 0x84));	// 34180 mov     ax, 84h ; '„' ;~ 0D4F:0C87
cs=0xd4f;eip=0x000c8a; 	J(JMP(sub_1bec2));	// 34181 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C8A
ret_d4f_c8d:
	// 6043 
cs=0xd4f;eip=0x000c8d; 	T(MOV(ax, 0x96));	// 34183 mov     ax, 96h ; '–' ;~ 0D4F:0C8D
cs=0xd4f;eip=0x000c90; 	J(JMP(sub_1bec2));	// 34184 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C90
sub_1c763:
	// 34189 
cs=0xd4f;eip=0x000c93; 	T(MOV(ax, 0x97));	// 34190 mov     ax, 97h ; '—' ;~ 0D4F:0C93
ret_d4f_c96:
	// 6044 
cs=0xd4f;eip=0x000c96; 	J(JMP(sub_1bec2));	// 34191 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C96
sub_1c769:
	// 34198 
cs=0xd4f;eip=0x000c99; 	T(MOV(ax, 0x98));	// 34200 mov     ax, 98h ; '˜' ;~ 0D4F:0C99
ret_d4f_c9c:
	// 6045 
cs=0xd4f;eip=0x000c9c; 	J(JMP(sub_1bec2));	// 34201 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C9C
sub_1c76f:
	// 34208 
cs=0xd4f;eip=0x000c9f; 	T(MOV(ax, 0x99));	// 34209 mov     ax, 99h ; '™' ;~ 0D4F:0C9F
ret_d4f_ca2:
	// 6046 
cs=0xd4f;eip=0x000ca2; 	J(JMP(sub_1bec2));	// 34210 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CA2
sub_1c775:
	// 34217 
cs=0xd4f;eip=0x000ca5; 	T(MOV(ax, 0x9A));	// 34218 mov     ax, 9Ah ; 'š' ;~ 0D4F:0CA5
ret_d4f_ca8:
	// 6047 
cs=0xd4f;eip=0x000ca8; 	J(JMP(sub_1bec2));	// 34219 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CA8
sub_1c77b:
	// 34226 
cs=0xd4f;eip=0x000cab; 	T(MOV(ax, 0x9B));	// 34227 mov     ax, 9Bh ; '›' ;~ 0D4F:0CAB
ret_d4f_cae:
	// 6048 
cs=0xd4f;eip=0x000cae; 	J(JMP(sub_1bec2));	// 34228 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CAE
sub_1c781:
	// 34235 
cs=0xd4f;eip=0x000cb1; 	T(MOV(ax, 0x9C));	// 34236 mov     ax, 9Ch ; 'œ' ;~ 0D4F:0CB1
ret_d4f_cb4:
	// 6049 
cs=0xd4f;eip=0x000cb4; 	J(JMP(sub_1bec2));	// 34237 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CB4
seg002_cb7_proc:
	// 34241 
cs=0xd4f;eip=0x000cb7; 	T(MOV(ax, 0x9D));	// 34241 mov     ax, 9Dh ;~ 0D4F:0CB7
ret_d4f_cba:
	// 6050 
cs=0xd4f;eip=0x000cba; 	J(JMP(sub_1bec2));	// 34242 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CBA
ret_d4f_cbd:
	// 6051 
cs=0xd4f;eip=0x000cbd; 	T(MOV(ax, 0x9E));	// 34244 mov     ax, 9Eh ; '' ;~ 0D4F:0CBD
cs=0xd4f;eip=0x000cc0; 	J(JMP(sub_1bec2));	// 34245 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CC0
ret_d4f_cc3:
	// 6052 
cs=0xd4f;eip=0x000cc3; 	T(MOV(ax, 0x9F));	// 34247 mov     ax, 9Fh ; 'Ÿ' ;~ 0D4F:0CC3
cs=0xd4f;eip=0x000cc6; 	J(JMP(sub_1bec2));	// 34248 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CC6
sub_1c799:
	// 34253 
cs=0xd4f;eip=0x000cc9; 	T(MOV(ax, 0x0AA));	// 34254 mov     ax, 0AAh ; 'ª' ;~ 0D4F:0CC9
ret_d4f_ccc:
	// 6053 
cs=0xd4f;eip=0x000ccc; 	J(JMP(sub_1bec2));	// 34255 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CCC
sub_1c79f:
	// 34262 
cs=0xd4f;eip=0x000ccf; 	T(MOV(ax, 0x0AB));	// 34264 mov     ax, 0ABh ; '«' ;~ 0D4F:0CCF
ret_d4f_cd2:
	// 6054 
cs=0xd4f;eip=0x000cd2; 	J(JMP(sub_1bec2));	// 34265 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CD2
seg002_cd5_proc:
	// 34269 
cs=0xd4f;eip=0x000cd5; 	T(MOV(ax, 0x0AD));	// 34269 mov     ax, 0ADh ; '­' ;~ 0D4F:0CD5
ret_d4f_cd8:
	// 6055 
cs=0xd4f;eip=0x000cd8; 	J(JMP(sub_1bec2));	// 34270 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CD8
sub_1c7ab:
	// 34275 
cs=0xd4f;eip=0x000cdb; 	T(MOV(ax, 0x0AE));	// 34276 mov     ax, 0AEh ; '®' ;~ 0D4F:0CDB
ret_d4f_cde:
	// 6056 
cs=0xd4f;eip=0x000cde; 	J(JMP(sub_1bec2));	// 34277 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CDE
seg002_ce1_proc:
	// 34281 
cs=0xd4f;eip=0x000ce1; 	T(MOV(ax, 0x0AF));	// 34281 mov     ax, 0AFh ; '¯' ;~ 0D4F:0CE1
ret_d4f_ce4:
	// 6057 
cs=0xd4f;eip=0x000ce4; 	J(JMP(sub_1bec2));	// 34282 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CE4
ret_d4f_ce7:
	// 6058 
cs=0xd4f;eip=0x000ce7; 	T(MOV(ax, 0x0B0));	// 34284 mov     ax, 0B0h ; '°' ;~ 0D4F:0CE7
cs=0xd4f;eip=0x000cea; 	J(JMP(sub_1bec2));	// 34285 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CEA
sub_1c7bd:
	// 34290 
cs=0xd4f;eip=0x000ced; 	T(MOV(ax, 0x0B1));	// 34291 mov     ax, 0B1h ; '±' ;~ 0D4F:0CED
ret_d4f_cf0:
	// 6059 
cs=0xd4f;eip=0x000cf0; 	J(JMP(sub_1bec2));	// 34292 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CF0
seg002_cf3_proc:
	// 34296 
cs=0xd4f;eip=0x000cf3; 	T(MOV(ax, 0x0B2));	// 34296 mov     ax, 0B2h ; '²' ;~ 0D4F:0CF3
ret_d4f_cf6:
	// 6060 
cs=0xd4f;eip=0x000cf6; 	J(JMP(sub_1bec2));	// 34297 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CF6
ret_d4f_cf9:
	// 6061 
cs=0xd4f;eip=0x000cf9; 	T(MOV(ax, 0x0B3));	// 34299 mov     ax, 0B3h ; '³' ;~ 0D4F:0CF9
cs=0xd4f;eip=0x000cfc; 	J(JMP(sub_1bec2));	// 34300 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CFC
ret_d4f_cff:
	// 6062 
cs=0xd4f;eip=0x000cff; 	T(MOV(ax, 0x0B4));	// 34302 mov     ax, 0B4h ; '´' ;~ 0D4F:0CFF
cs=0xd4f;eip=0x000d02; 	J(JMP(sub_1bec2));	// 34303 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D02
ret_d4f_d05:
	// 6063 
cs=0xd4f;eip=0x000d05; 	T(MOV(ax, 0x0B5));	// 34305 mov     ax, 0B5h ; 'µ' ;~ 0D4F:0D05
cs=0xd4f;eip=0x000d08; 	J(JMP(sub_1bec2));	// 34306 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D08
ret_d4f_d0b:
	// 6064 
cs=0xd4f;eip=0x000d0b; 	T(MOV(ax, 0x0B6));	// 34308 mov     ax, 0B6h ; '¶' ;~ 0D4F:0D0B
cs=0xd4f;eip=0x000d0e; 	J(JMP(sub_1bec2));	// 34309 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D0E
ret_d4f_d11:
	// 6065 
cs=0xd4f;eip=0x000d11; 	T(MOV(ax, 0x0B7));	// 34311 mov     ax, 0B7h ; '·' ;~ 0D4F:0D11
cs=0xd4f;eip=0x000d14; 	J(JMP(sub_1bec2));	// 34312 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D14
ret_d4f_d17:
	// 6066 
cs=0xd4f;eip=0x000d17; 	T(MOV(ax, 0x0B9));	// 34314 mov     ax, 0B9h ; '¹' ;~ 0D4F:0D17
cs=0xd4f;eip=0x000d1a; 	J(JMP(sub_1bec2));	// 34315 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D1A
ret_d4f_d1d:
	// 6067 
cs=0xd4f;eip=0x000d1d; 	T(MOV(ax, 0x0BA));	// 34317 mov     ax, 0BAh ; 'º' ;~ 0D4F:0D1D
cs=0xd4f;eip=0x000d20; 	J(JMP(sub_1bec2));	// 34318 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D20
ret_d4f_d23:
	// 6068 
cs=0xd4f;eip=0x000d23; 	T(MOV(ax, 0x0BB));	// 34320 mov     ax, 0BBh ; '»' ;~ 0D4F:0D23
cs=0xd4f;eip=0x000d26; 	J(JMP(sub_1bec2));	// 34321 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D26
ret_d4f_d29:
	// 6069 
cs=0xd4f;eip=0x000d29; 	T(MOV(ax, 0x0BC));	// 34323 mov     ax, 0BCh ; '¼' ;~ 0D4F:0D29
cs=0xd4f;eip=0x000d2c; 	J(JMP(sub_1bec2));	// 34324 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D2C
ret_d4f_d2f:
	// 6070 
cs=0xd4f;eip=0x000d2f; 	T(MOV(ax, 0x0BD));	// 34326 mov     ax, 0BDh ; '½' ;~ 0D4F:0D2F
cs=0xd4f;eip=0x000d32; 	J(JMP(sub_1bec2));	// 34327 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D32
ret_d4f_d35:
	// 6071 
cs=0xd4f;eip=0x000d35; 	T(MOV(ax, 0x0BE));	// 34329 mov     ax, 0BEh ; '¾' ;~ 0D4F:0D35
cs=0xd4f;eip=0x000d38; 	J(JMP(sub_1bec2));	// 34330 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D38
ret_d4f_d3b:
	// 6072 
cs=0xd4f;eip=0x000d3b; 	T(MOV(ax, 0x0BF));	// 34332 mov     ax, 0BFh ; '¿' ;~ 0D4F:0D3B
cs=0xd4f;eip=0x000d3e; 	J(JMP(sub_1bec2));	// 34333 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D3E
ret_d4f_d41:
	// 6073 
cs=0xd4f;eip=0x000d41; 	T(MOV(ax, 0x0C0));	// 34335 mov     ax, 0C0h ; 'À' ;~ 0D4F:0D41
cs=0xd4f;eip=0x000d44; 	J(JMP(sub_1bec2));	// 34336 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D44
ret_d4f_d47:
	// 6074 
cs=0xd4f;eip=0x000d47; 	T(MOV(ax, 0x0C1));	// 34338 mov     ax, 0C1h ; 'Á' ;~ 0D4F:0D47
cs=0xd4f;eip=0x000d4a; 	J(JMP(sub_1bec2));	// 34339 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D4A
ret_d4f_d4d:
	// 6075 
cs=0xd4f;eip=0x000d4d; 	T(MOV(ax, 0x0C2));	// 34341 mov     ax, 0C2h ; 'Â' ;~ 0D4F:0D4D
cs=0xd4f;eip=0x000d50; 	J(JMP(sub_1bec2));	// 34342 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D50

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
        case m2c::kloc_1beda: 	goto loc_1beda;
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
        case m2c::kloc_1c3f5: 	goto loc_1c3f5;
        case m2c::kloc_1c400: 	goto loc_1c400;
        case m2c::kloc_1c427: 	goto loc_1c427;
        case m2c::kloc_1c43b: 	goto loc_1c43b;
        case m2c::kloc_1c446: 	goto loc_1c446;
        case m2c::kloc_1c49a: 	goto loc_1c49a;
        case m2c::kloc_1c4db: 	goto loc_1c4db;
        case m2c::kloc_1c4fd: 	goto loc_1c4fd;
        case m2c::kloc_1c50b: 	goto loc_1c50b;
        case m2c::kloc_1c517: 	goto loc_1c517;
        case m2c::kloc_1c52c: 	goto loc_1c52c;
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
        case m2c::kret_d4f_686: 	goto ret_d4f_686;
        case m2c::kret_d4f_71b: 	goto ret_d4f_71b;
        case m2c::kret_d4f_75e: 	goto ret_d4f_75e;
        case m2c::kret_d4f_7c3: 	goto ret_d4f_7c3;
        case m2c::kret_d4f_8d8: 	goto ret_d4f_8d8;
        case m2c::kret_d4f_91d: 	goto ret_d4f_91d;
        case m2c::kret_d4f_964: 	goto ret_d4f_964;
        case m2c::kret_d4f_a17: 	goto ret_d4f_a17;
        case m2c::kret_d4f_a53: 	goto ret_d4f_a53;
        case m2c::kret_d4f_a67: 	goto ret_d4f_a67;
        case m2c::kret_d4f_af1: 	goto ret_d4f_af1;
        case m2c::kret_d4f_b48: 	goto ret_d4f_b48;
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
        case m2c::kseg002_44b_proc: 	goto seg002_44b_proc;
        case m2c::kseg002_55c_proc: 	goto seg002_55c_proc;
        case m2c::kseg002_5af_proc: 	goto seg002_5af_proc;
        case m2c::kseg002_5df_proc: 	goto seg002_5df_proc;
        case m2c::kseg002_607_proc: 	goto seg002_607_proc;
        case m2c::kseg002_712_proc: 	goto seg002_712_proc;
        case m2c::kseg002_7ba_proc: 	goto seg002_7ba_proc;
        case m2c::kseg002_885_proc: 	goto seg002_885_proc;
        case m2c::kseg002_8ce_proc: 	goto seg002_8ce_proc;
        case m2c::kseg002_8ed_proc: 	goto seg002_8ed_proc;
        case m2c::kseg002_914_proc: 	goto seg002_914_proc;
        case m2c::kseg002_963_proc: 	goto seg002_963_proc;
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
        case m2c::ksub_1c10a: 	goto sub_1c10a;
        case m2c::ksub_1c155: 	goto sub_1c155;
        case m2c::ksub_1c1ea: 	goto sub_1c1ea;
        case m2c::ksub_1c35e: 	goto sub_1c35e;
        case m2c::ksub_1c3a7: 	goto sub_1c3a7;
        case m2c::ksub_1c3c5: 	goto sub_1c3c5;
        case m2c::ksub_1c40b: 	goto sub_1c40b;
        case m2c::ksub_1c451: 	goto sub_1c451;
        case m2c::ksub_1c4a6: 	goto sub_1c4a6;
        case m2c::ksub_1c5ef: 	goto sub_1c5ef;
        case m2c::ksub_1c615: 	goto sub_1c615;
        case m2c::ksub_1c61b: 	goto sub_1c61b;
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


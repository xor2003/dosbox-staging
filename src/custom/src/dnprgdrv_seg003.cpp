/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "dnprgdrv.h"

                

 bool _group3(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group3:
    _begin:
seg003_100_proc:
	// 126089 
loc_57750:
	// 8482 
cs=0x4907;eip=0x000100; 	R(JMP(loc_57770));	// 126091 jmp     short loc_57770 ;~ 4907:0100
ret_4907_103:
	// 8483 
cs=0x4907;eip=0x000103; 	R(JMP(sub_57812));	// 126095 jmp     near ptr sub_57812 ;~ 4907:0103
loc_57756:
	// 8484 
cs=0x4907;eip=0x000106; 	R(JMP(sub_5782e));	// 126099 jmp     near ptr sub_5782E ;~ 4907:0106
ret_4907_109:
	// 8485 
cs=0x4907;eip=0x000109; 	R(JMP(sub_57812));	// 126101 jmp     near ptr sub_57812 ;~ 4907:0109
ret_4907_10c:
	// 8486 
cs=0x4907;eip=0x00010c; 	R(JMP(loc_5781b));	// 126103 jmp     loc_5781B ;~ 4907:010C
ret_4907_10f:
	// 8487 
cs=0x4907;eip=0x00010f; 	R(JMP(loc_57828));	// 126105 jmp     loc_57828 ;~ 4907:010F
ret_4907_112:
	// 8488 
cs=0x4907;eip=0x000112; 	R(JMP(loc_57867));	// 126107 jmp     loc_57867 ;~ 4907:0112
ret_4907_115:
	// 8489 
cs=0x4907;eip=0x000115; 	R(JMP(loc_577f7));	// 126109 jmp     loc_577F7 ;~ 4907:0115
loc_57770:
	// 8490 
cs=0x4907;eip=0x000120; 	T(OR(ax, ax));	// 126120 or      ax, ax ;~ 4907:0120
cs=0x4907;eip=0x000122; 	R(JZ(loc_57794));	// 126121 jz      short loc_57794 ;~ 4907:0122
cs=0x4907;eip=0x000124; 	X(PUSH(ax));	// 126122 push    ax ;~ 4907:0124
cs=0x4907;eip=0x000125; 	T(AND(al, 0x0F));	// 126123 and     al, 0Fh ;~ 4907:0125
cs=0x4907;eip=0x000127; 	T(MOV(bx, 2));	// 126124 mov     bx, 2 ;~ 4907:0127
cs=0x4907;eip=0x00012a; 	R(CALL(sub_57e7b,0));	// 126125 call    sub_57E7B ;~ 4907:012A
cs=0x4907;eip=0x00012d; 	X(POP(ax));	// 126126 pop     ax ;~ 4907:012D
cs=0x4907;eip=0x00012e; 	T(SHR(ax, 1));	// 126127 shr     ax, 1 ;~ 4907:012E
cs=0x4907;eip=0x000130; 	T(SHR(ax, 1));	// 126128 shr     ax, 1 ;~ 4907:0130
cs=0x4907;eip=0x000132; 	T(SHR(ax, 1));	// 126129 shr     ax, 1 ;~ 4907:0132
cs=0x4907;eip=0x000134; 	T(SHR(ax, 1));	// 126130 shr     ax, 1 ;~ 4907:0134
cs=0x4907;eip=0x000136; 	X(PUSH(ax));	// 126131 push    ax ;~ 4907:0136
cs=0x4907;eip=0x000137; 	T(MOV(bx, 1));	// 126132 mov     bx, 1 ;~ 4907:0137
cs=0x4907;eip=0x00013a; 	R(CALL(sub_57e7b,0));	// 126133 call    sub_57E7B ;~ 4907:013A
cs=0x4907;eip=0x00013d; 	X(POP(ax));	// 126134 pop     ax ;~ 4907:013D
cs=0x4907;eip=0x00013e; 	T(MOV(bx, 0x0D));	// 126135 mov     bx, 0Dh ;~ 4907:013E
cs=0x4907;eip=0x000141; 	R(CALL(sub_57e7b,0));	// 126136 call    sub_57E7B ;~ 4907:0141
loc_57794:
	// 8491 
cs=0x4907;eip=0x000144; 	T(MOV(bx, 3));	// 126139 mov     bx, 3 ;~ 4907:0144
cs=0x4907;eip=0x000147; 	R(CALL(sub_57e7b,0));	// 126140 call    sub_57E7B ;~ 4907:0147
	cs=seg_offset(seg003);
cs=0x4907;eip=0x00014a; 	X(MOV(*(dw*)(((db*)&dword_5776c)), m2c::kloc_57750));	// 126141 mov     word ptr cs:dword_5776C, offset loc_57750 ;~ 4907:014A
	cs=seg_offset(seg003);
cs=0x4907;eip=0x000151; 	X(MOV(*(dw*)(((db*)&dword_5776c)+2), cs));	// 126142 mov     word ptr cs:dword_5776C+2, cs ;~ 4907:0151
	cs=seg_offset(seg003);
cs=0x4907;eip=0x000156; 	X(MOV(*(dw*)(((db*)&word_57768)), m2c::kloc_57750));	// 126143 mov     cs:word_57768, offset loc_57750 ;~ 4907:0156
	cs=seg_offset(seg003);
cs=0x4907;eip=0x00015d; 	X(MOV(*(dw*)(((db*)&word_5776a)), cs));	// 126144 mov     cs:word_5776A, cs ;~ 4907:015D
cs=0x4907;eip=0x000162; 	X(PUSH(cs));	// 126145 push    cs ;~ 4907:0162
cs=0x4907;eip=0x000163; 	R(CALL(sub_57812,0));	// 126146 call    near ptr sub_57812 ;~ 4907:0163
cs=0x4907;eip=0x000166; 	T(MOV(bx, 0x0F));	// 126147 mov     bx, 0Fh ;~ 4907:0166
cs=0x4907;eip=0x000169; 	R(RETF(0));	// 126148 retf ;~ 4907:0169
sub_577ba:
	// 126153 
cs=0x4907;eip=0x00016a; 	X(PUSH(bx));	// 126154 push    bx ;~ 4907:016A
ret_4907_16b:
	// 8492 
cs=0x4907;eip=0x00016b; 	X(PUSH(dx));	// 126155 push    dx ;~ 4907:016B
cs=0x4907;eip=0x00016c; 	T(SHR(al, 1));	// 126156 shr     al, 1 ;~ 4907:016C
cs=0x4907;eip=0x00016e; 	T(SHR(al, 1));	// 126157 shr     al, 1 ;~ 4907:016E
cs=0x4907;eip=0x000170; 	T(SHR(al, 1));	// 126158 shr     al, 1 ;~ 4907:0170
cs=0x4907;eip=0x000172; 	T(MOV(dx, ax));	// 126159 mov     dx, ax ;~ 4907:0172
cs=0x4907;eip=0x000174; 	T(MOV(bx, 0x0F078));	// 126160 mov     bx, 0F078h ;~ 4907:0174
cs=0x4907;eip=0x000177; 	T(CMP(ah, bl));	// 126161 cmp     ah, bl ;~ 4907:0177
cs=0x4907;eip=0x000179; 	R(JBE(loc_577cd));	// 126162 jbe     short loc_577CD ;~ 4907:0179
cs=0x4907;eip=0x00017b; 	T(MOV(ah, bl));	// 126163 mov     ah, bl ;~ 4907:017B
loc_577cd:
	// 8493 
cs=0x4907;eip=0x00017d; 	T(XOR(al, al));	// 126166 xor     al, al ;~ 4907:017D
cs=0x4907;eip=0x00017f; 	T(DIV1(bh));	// 126167 div     bh ;~ 4907:017F
cs=0x4907;eip=0x000181; 	T(MUL1_1(dl));	// 126168 mul     dl ;~ 4907:0181
cs=0x4907;eip=0x000183; 	T(XCHG(ah, dh));	// 126169 xchg    ah, dh ;~ 4907:0183
cs=0x4907;eip=0x000185; 	T(SUB(ah, bh));	// 126170 sub     ah, bh ;~ 4907:0185
cs=0x4907;eip=0x000187; 	T(NEG(ah));	// 126171 neg     ah ;~ 4907:0187
cs=0x4907;eip=0x000189; 	T(CMP(ah, bl));	// 126172 cmp     ah, bl ;~ 4907:0189
cs=0x4907;eip=0x00018b; 	R(JBE(loc_577df));	// 126173 jbe     short loc_577DF ;~ 4907:018B
cs=0x4907;eip=0x00018d; 	T(MOV(ah, bl));	// 126174 mov     ah, bl ;~ 4907:018D
loc_577df:
	// 8494 
cs=0x4907;eip=0x00018f; 	T(XOR(al, al));	// 126177 xor     al, al ;~ 4907:018F
cs=0x4907;eip=0x000191; 	T(DIV1(bh));	// 126178 div     bh ;~ 4907:0191
cs=0x4907;eip=0x000193; 	T(MUL1_1(dl));	// 126179 mul     dl ;~ 4907:0193
cs=0x4907;eip=0x000195; 	T(SHR(ax, 1));	// 126180 shr     ax, 1 ;~ 4907:0195
cs=0x4907;eip=0x000197; 	T(SHR(ax, 1));	// 126181 shr     ax, 1 ;~ 4907:0197
cs=0x4907;eip=0x000199; 	T(SHR(ax, 1));	// 126182 shr     ax, 1 ;~ 4907:0199
cs=0x4907;eip=0x00019b; 	T(SHR(ax, 1));	// 126183 shr     ax, 1 ;~ 4907:019B
cs=0x4907;eip=0x00019d; 	T(MOV(ah, dh));	// 126184 mov     ah, dh ;~ 4907:019D
cs=0x4907;eip=0x00019f; 	T(AND(ax, 0x0FF0));	// 126185 and     ax, 0FF0h ;~ 4907:019F
cs=0x4907;eip=0x0001a2; 	T(OR(al, ah));	// 126186 or      al, ah ;~ 4907:01A2
cs=0x4907;eip=0x0001a4; 	X(POP(dx));	// 126187 pop     dx ;~ 4907:01A4
cs=0x4907;eip=0x0001a5; 	X(POP(bx));	// 126188 pop     bx ;~ 4907:01A5
cs=0x4907;eip=0x0001a6; 	R(RETN(0));	// 126189 retn ;~ 4907:01A6
seg003_1a7_proc:
	// 126194 
loc_577f7:
	// 8495 
cs=0x4907;eip=0x0001a7; 	R(CALL(sub_577ba,0));	// 126195 call    sub_577BA ;~ 4907:01A7
cs=0x4907;eip=0x0001aa; 	T(MOV(ah, 4));	// 126196 mov     ah, 4 ;~ 4907:01AA
cs=0x4907;eip=0x0001ac; 	R(CALL(sub_57800,0));	// 126197 call    sub_57800 ;~ 4907:01AC
cs=0x4907;eip=0x0001af; 	R(RETF(0));	// 126198 retf ;~ 4907:01AF
sub_57800:
	// 126203 
cs=0x4907;eip=0x0001b0; 	X(PUSH(dx));	// 126204 push    dx ;~ 4907:01B0
ret_4907_1b1:
	// 8496 
	cs=seg_offset(seg003);
cs=0x4907;eip=0x0001b1; 	T(MOV(dx, *(dw*)(((db*)&word_578d5))));	// 126205 mov     dx, cs:word_578D5 ;~ 4907:01B1
cs=0x4907;eip=0x0001b6; 	T(ADD(dl, 4));	// 126206 add     dl, 4 ;~ 4907:01B6
cs=0x4907;eip=0x0001b9; 	T(XCHG(al, ah));	// 126207 xchg    al, ah ;~ 4907:01B9
cs=0x4907;eip=0x0001bb; 	R(OUT(dx, al));	// 126208 out     dx, al ;~ 4907:01BB
cs=0x4907;eip=0x0001bc; 	T(INC(dx));	// 126209 inc     dx ;~ 4907:01BC
cs=0x4907;eip=0x0001bd; 	T(XCHG(al, ah));	// 126210 xchg    al, ah ;~ 4907:01BD
cs=0x4907;eip=0x0001bf; 	R(OUT(dx, al));	// 126211 out     dx, al ;~ 4907:01BF
cs=0x4907;eip=0x0001c0; 	X(POP(dx));	// 126212 pop     dx ;~ 4907:01C0
cs=0x4907;eip=0x0001c1; 	R(RETN(0));	// 126213 retn ;~ 4907:01C1
sub_57812:
	// 126220 
cs=0x4907;eip=0x0001c2; 	X(PUSH(bx));	// 126222 push    bx ;~ 4907:01C2
ret_4907_1c3:
	// 8497 
cs=0x4907;eip=0x0001c3; 	T(MOV(bx, 8));	// 126223 mov     bx, 8 ;~ 4907:01C3
cs=0x4907;eip=0x0001c6; 	R(CALL(sub_57e7b,0));	// 126224 call    sub_57E7B ;~ 4907:01C6
cs=0x4907;eip=0x0001c9; 	X(POP(bx));	// 126225 pop     bx ;~ 4907:01C9
cs=0x4907;eip=0x0001ca; 	R(RETF(0));	// 126226 retf ;~ 4907:01CA
seg003_1cb_proc:
	// 126231 
loc_5781b:
	// 8498 
cs=0x4907;eip=0x0001cb; 	X(PUSH(ax));	// 126232 push    ax ;~ 4907:01CB
cs=0x4907;eip=0x0001cc; 	T(XOR(ax, ax));	// 126233 xor     ax, ax ;~ 4907:01CC
loc_5781e:
	// 8499 
cs=0x4907;eip=0x0001ce; 	X(PUSH(bx));	// 126236 push    bx ;~ 4907:01CE
cs=0x4907;eip=0x0001cf; 	T(MOV(bx, 0x0C));	// 126237 mov     bx, 0Ch ;~ 4907:01CF
cs=0x4907;eip=0x0001d2; 	R(CALL(sub_57e7b,0));	// 126238 call    sub_57E7B ;~ 4907:01D2
cs=0x4907;eip=0x0001d5; 	X(POP(bx));	// 126239 pop     bx ;~ 4907:01D5
cs=0x4907;eip=0x0001d6; 	X(POP(ax));	// 126240 pop     ax ;~ 4907:01D6
cs=0x4907;eip=0x0001d7; 	R(RETF(0));	// 126241 retf ;~ 4907:01D7
loc_57828:
	// 8500 
cs=0x4907;eip=0x0001d8; 	X(PUSH(ax));	// 126245 push    ax ;~ 4907:01D8
cs=0x4907;eip=0x0001d9; 	T(MOV(ax, 1));	// 126246 mov     ax, 1 ;~ 4907:01D9
cs=0x4907;eip=0x0001dc; 	R(JMP(loc_5781e));	// 126247 jmp     short loc_5781E ;~ 4907:01DC
sub_5782e:
	// 126252 
cs=0x4907;eip=0x0001de; 	X(PUSH(es));	// 126254 push    es ;~ 4907:01DE
ret_4907_1df:
	// 8501 
	cs=seg_offset(seg003);
cs=0x4907;eip=0x0001df; 	X(MOV(*(dw*)(((db*)&word_57768)), si));	// 126255 mov     cs:word_57768, si ;~ 4907:01DF
	cs=seg_offset(seg003);
cs=0x4907;eip=0x0001e4; 	X(MOV(*(dw*)(((db*)&word_5776a)), ds));	// 126256 mov     cs:word_5776A, ds ;~ 4907:01E4
cs=0x4907;eip=0x0001e9; 	T(LES(di, *(dw*)(raddr(ds,si))));	// 126257 les     di, [si] ;~ 4907:01E9
cs=0x4907;eip=0x0001eb; 	T(MOV(bx, *(dw*)(raddr(ds,si+4))));	// 126258 mov     bx, [si+4] ;~ 4907:01EB
cs=0x4907;eip=0x0001ee; 	X(OR(*(raddr(ds,si+6)), 3));	// 126259 or      byte ptr [si+6], 3 ;~ 4907:01EE
cs=0x4907;eip=0x0001f2; 	X(MOV(*(raddr(es,bx+di)), 0));	// 126260 mov     byte ptr es:[bx+di], 0 ;~ 4907:01F2
cs=0x4907;eip=0x0001f6; 	T(SUB(bx, 4));	// 126261 sub     bx, 4 ;~ 4907:01F6
cs=0x4907;eip=0x0001f9; 	T(CMP(*(raddr(es,di+3)), 0));	// 126262 cmp     byte ptr es:[di+3], 0 ;~ 4907:01F9
cs=0x4907;eip=0x0001fe; 	R(JNZ(loc_57856));	// 126263 jnz     short loc_57856 ;~ 4907:01FE
cs=0x4907;eip=0x000200; 	T(CMP(*(dw*)(raddr(es,di+1)), bx));	// 126264 cmp     es:[di+1], bx ;~ 4907:0200
cs=0x4907;eip=0x000204; 	R(JC(loc_5785f));	// 126265 jb      short loc_5785F ;~ 4907:0204
loc_57856:
	// 8502 
cs=0x4907;eip=0x000206; 	X(MOV(*(dw*)(raddr(es,di+1)), bx));	// 126268 mov     es:[di+1], bx ;~ 4907:0206
cs=0x4907;eip=0x00020a; 	X(MOV(*(raddr(es,di+3)), 0));	// 126269 mov     byte ptr es:[di+3], 0 ;~ 4907:020A
loc_5785f:
	// 8503 
cs=0x4907;eip=0x00020f; 	T(MOV(bx, 6));	// 126272 mov     bx, 6 ;~ 4907:020F
cs=0x4907;eip=0x000212; 	R(CALL(sub_57e7b,0));	// 126273 call    sub_57E7B ;~ 4907:0212
cs=0x4907;eip=0x000215; 	X(POP(es));	// 126274 pop     es ;~ 4907:0215
cs=0x4907;eip=0x000216; 	R(RETF(0));	// 126275 retf ;~ 4907:0216
seg003_217_proc:
	// 126280 
loc_57867:
	// 8504 
cs=0x4907;eip=0x000217; 	X(PUSH(es));	// 126281 push    es ;~ 4907:0217
	cs=seg_offset(seg003);
cs=0x4907;eip=0x000218; 	X(MOV(*(dw*)(((db*)&dword_5776c)), si));	// 126282 mov     word ptr cs:dword_5776C, si ;~ 4907:0218
	cs=seg_offset(seg003);
cs=0x4907;eip=0x00021d; 	X(MOV(*(dw*)(((db*)&dword_5776c)+2), ds));	// 126283 mov     word ptr cs:dword_5776C+2, ds ;~ 4907:021D
cs=0x4907;eip=0x000222; 	T(LES(di, *(dw*)(raddr(ds,si))));	// 126284 les     di, [si] ;~ 4907:0222
cs=0x4907;eip=0x000224; 	T(MOV(bx, *(dw*)(raddr(ds,si+4))));	// 126285 mov     bx, [si+4] ;~ 4907:0224
cs=0x4907;eip=0x000227; 	T(CMP(*(raddr(ds,si+7)), 0));	// 126286 cmp     byte ptr [si+7], 0 ;~ 4907:0227
cs=0x4907;eip=0x00022b; 	R(JNS(loc_57882));	// 126287 jns     short loc_57882 ;~ 4907:022B
cs=0x4907;eip=0x00022d; 	T(OR(bx, bx));	// 126288 or      bx, bx ;~ 4907:022D
cs=0x4907;eip=0x00022f; 	R(JZ(loc_57882));	// 126289 jz      short loc_57882 ;~ 4907:022F
cs=0x4907;eip=0x000231; 	T(DEC(bx));	// 126290 dec     bx ;~ 4907:0231
loc_57882:
	// 8505 
cs=0x4907;eip=0x000232; 	X(MOV(*(raddr(es,bx+di+6)), 0));	// 126294 mov     byte ptr es:[bx+di+6], 0 ;~ 4907:0232
cs=0x4907;eip=0x000237; 	X(MOV(*(raddr(es,di+2)), 2));	// 126295 mov     byte ptr es:[di+2], 2 ;~ 4907:0237
cs=0x4907;eip=0x00023c; 	X(MOV(*(dw*)(raddr(es,di+3)), bx));	// 126296 mov     es:[di+3], bx ;~ 4907:023C
cs=0x4907;eip=0x000240; 	X(MOV(*(raddr(es,di+5)), 0));	// 126297 mov     byte ptr es:[di+5], 0 ;~ 4907:0240
cs=0x4907;eip=0x000245; 	X(MOV(*(raddr(ds,si+6)), 2));	// 126298 mov     byte ptr [si+6], 2 ;~ 4907:0245
	cs=seg_offset(seg003);
cs=0x4907;eip=0x000249; 	T(CMP(*(&byte_578e2), 0));	// 126299 cmp     cs:byte_578E2, 0 ;~ 4907:0249
cs=0x4907;eip=0x00024f; 	R(JNZ(loc_578d1));	// 126300 jnz     short loc_578D1 ;~ 4907:024F
	cs=seg_offset(seg003);
cs=0x4907;eip=0x000251; 	T(CMP(*(&byte_5794e), 0));	// 126301 cmp     cs:byte_5794E, 0 ;~ 4907:0251
cs=0x4907;eip=0x000257; 	R(JNZ(loc_578d1));	// 126302 jnz     short loc_578D1 ;~ 4907:0257
	cs=seg_offset(seg003);
cs=0x4907;eip=0x000259; 	T(LDS(si, *(dd*)(((db*)&dword_5776c))));	// 126303 lds     si, cs:dword_5776C ;~ 4907:0259
cs=0x4907;eip=0x00025e; 	T(LES(di, *(dw*)(raddr(ds,si))));	// 126304 les     di, [si] ;~ 4907:025E
cs=0x4907;eip=0x000260; 	X(ADD(*(dw*)(raddr(ds,si+4)), 6));	// 126305 add     word ptr [si+4], 6 ;~ 4907:0260
cs=0x4907;eip=0x000264; 	X(MOV(*(raddr(es,di)), 1));	// 126306 mov     byte ptr es:[di], 1 ;~ 4907:0264
cs=0x4907;eip=0x000268; 	X(MOV(*(raddr(es,di+3)), 1));	// 126307 mov     byte ptr es:[di+3], 1 ;~ 4907:0268
	cs=seg_offset(seg003);
cs=0x4907;eip=0x00026d; 	T(MOV(al, *(&byte_5794c)));	// 126308 mov     al, cs:byte_5794C ;~ 4907:026D
cs=0x4907;eip=0x000271; 	X(MOV(*(raddr(es,di+4)), al));	// 126309 mov     es:[di+4], al ;~ 4907:0271
	cs=seg_offset(seg003);
cs=0x4907;eip=0x000275; 	T(MOV(al, *(&byte_5794d)));	// 126310 mov     al, cs:byte_5794D ;~ 4907:0275
cs=0x4907;eip=0x000279; 	X(MOV(*(raddr(es,di+5)), al));	// 126311 mov     es:[di+5], al ;~ 4907:0279
cs=0x4907;eip=0x00027d; 	X(PUSH(cs));	// 126312 push    cs ;~ 4907:027D
cs=0x4907;eip=0x00027e; 	R(CALL(sub_5782e,0));	// 126313 call    near ptr sub_5782E ;~ 4907:027E
loc_578d1:
	// 8506 
cs=0x4907;eip=0x000281; 	X(POP(es));	// 126317 pop     es ;~ 4907:0281
cs=0x4907;eip=0x000282; 	R(RETF(0));	// 126318 retf ;~ 4907:0282
sub_5794f:
	// 126361 
cs=0x4907;eip=0x0002ff; 	X(PUSH(cx));	// 126363 push    cx ;~ 4907:02FF
ret_4907_300:
	// 8507 
cs=0x4907;eip=0x000300; 	T(MOV(cx, 0x200));	// 126364 mov     cx, 200h ;~ 4907:0300
cs=0x4907;eip=0x000303; 	T(MOV(ah, al));	// 126365 mov     ah, al ;~ 4907:0303
loc_57955:
	// 8508 
cs=0x4907;eip=0x000305; 	R(IN(al, dx));	// 126368 in      al, dx ;~ 4907:0305
cs=0x4907;eip=0x000306; 	T(OR(al, al));	// 126369 or      al, al ;~ 4907:0306
cs=0x4907;eip=0x000308; 	R(JNS(loc_5795f));	// 126370 jns     short loc_5795F ;~ 4907:0308
cs=0x4907;eip=0x00030a; 	R(LOOP(loc_57955));	// 126371 loop    loc_57955 ;~ 4907:030A
cs=0x4907;eip=0x00030c; 	T(STC);	// 126372 stc ;~ 4907:030C
cs=0x4907;eip=0x00030d; 	R(JMP(loc_57963));	// 126373 jmp     short loc_57963 ;~ 4907:030D
loc_5795f:
	// 8509 
cs=0x4907;eip=0x00030f; 	T(MOV(al, ah));	// 126377 mov     al, ah ;~ 4907:030F
cs=0x4907;eip=0x000311; 	R(OUT(dx, al));	// 126378 out     dx, al ;~ 4907:0311
cs=0x4907;eip=0x000312; 	T(CLC);	// 126379 clc ;~ 4907:0312
loc_57963:
	// 8510 
cs=0x4907;eip=0x000313; 	X(POP(cx));	// 126382 pop     cx ;~ 4907:0313
cs=0x4907;eip=0x000314; 	R(RETN(0));	// 126383 retn ;~ 4907:0314
sub_57965:
	// 126390 
cs=0x4907;eip=0x000315; 	X(PUSH(cx));	// 126392 push    cx ;~ 4907:0315
ret_4907_316:
	// 8511 
cs=0x4907;eip=0x000316; 	X(PUSH(dx));	// 126393 push    dx ;~ 4907:0316
cs=0x4907;eip=0x000317; 	T(MOV(dx, *(dw*)(raddr(ds,0x285))));	// 126394 mov     dx, ds:285h ;~ 4907:0317
cs=0x4907;eip=0x00031b; 	T(ADD(dl, 0x0E));	// 126395 add     dl, 0Eh ;~ 4907:031B
cs=0x4907;eip=0x00031e; 	T(MOV(cx, 0x200));	// 126396 mov     cx, 200h ;~ 4907:031E
loc_57971:
	// 8512 
cs=0x4907;eip=0x000321; 	R(IN(al, dx));	// 126399 in      al, dx ;~ 4907:0321
cs=0x4907;eip=0x000322; 	T(OR(al, al));	// 126400 or      al, al ;~ 4907:0322
cs=0x4907;eip=0x000324; 	R(JS(loc_5797b));	// 126401 js      short loc_5797B ;~ 4907:0324
cs=0x4907;eip=0x000326; 	R(LOOP(loc_57971));	// 126402 loop    loc_57971 ;~ 4907:0326
cs=0x4907;eip=0x000328; 	T(STC);	// 126403 stc ;~ 4907:0328
cs=0x4907;eip=0x000329; 	R(JMP(loc_57980));	// 126404 jmp     short loc_57980 ;~ 4907:0329
loc_5797b:
	// 8513 
cs=0x4907;eip=0x00032b; 	T(SUB(dl, 4));	// 126408 sub     dl, 4 ;~ 4907:032B
cs=0x4907;eip=0x00032e; 	R(IN(al, dx));	// 126409 in      al, dx ;~ 4907:032E
cs=0x4907;eip=0x00032f; 	T(CLC);	// 126410 clc ;~ 4907:032F
loc_57980:
	// 8514 
cs=0x4907;eip=0x000330; 	X(POP(dx));	// 126413 pop     dx ;~ 4907:0330
cs=0x4907;eip=0x000331; 	X(POP(cx));	// 126414 pop     cx ;~ 4907:0331
cs=0x4907;eip=0x000332; 	R(RETN(0));	// 126415 retn ;~ 4907:0332
sub_57983:
	// 126422 
cs=0x4907;eip=0x000333; 	T(MOV(dx, *(dw*)(raddr(ds,0x285))));	// 126424 mov     dx, ds:285h ;~ 4907:0333
ret_4907_337:
	// 8515 
cs=0x4907;eip=0x000337; 	T(ADD(dl, 0x0C));	// 126425 add     dl, 0Ch ;~ 4907:0337
sub_5798a:
	// 126432 
cs=0x4907;eip=0x00033a; 	T(MOV(ah, al));	// 126434 mov     ah, al ;~ 4907:033A
cs=0x4907;eip=0x00033c; 	T(MOV(al, 0x0F0));	// 126435 mov     al, 0F0h ; 'ğ' ;~ 4907:033C
loc_5798e:
	// 8516 
cs=0x4907;eip=0x00033e; 	R(IN(al, dx));	// 126438 in      al, dx ;~ 4907:033E
cs=0x4907;eip=0x00033f; 	T(OR(al, al));	// 126439 or      al, al ;~ 4907:033F
cs=0x4907;eip=0x000341; 	R(JS(loc_5798e));	// 126440 js      short loc_5798E ;~ 4907:0341
cs=0x4907;eip=0x000343; 	T(MOV(al, ah));	// 126441 mov     al, ah ;~ 4907:0343
cs=0x4907;eip=0x000345; 	R(OUT(dx, al));	// 126442 out     dx, al ;~ 4907:0345
cs=0x4907;eip=0x000346; 	R(RETN(0));	// 126443 retn ;~ 4907:0346
sub_57997:
	// 126450 
cs=0x4907;eip=0x000347; 	X(PUSH(dx));	// 126452 push    dx ;~ 4907:0347
ret_4907_348:
	// 8517 
cs=0x4907;eip=0x000348; 	T(MOV(dx, *(dw*)(raddr(ds,0x285))));	// 126453 mov     dx, ds:285h ;~ 4907:0348
cs=0x4907;eip=0x00034c; 	T(ADD(dl, 0x0E));	// 126454 add     dl, 0Eh ;~ 4907:034C
cs=0x4907;eip=0x00034f; 	T(XOR(al, al));	// 126455 xor     al, al ;~ 4907:034F
loc_579a1:
	// 8518 
cs=0x4907;eip=0x000351; 	R(IN(al, dx));	// 126458 in      al, dx ;~ 4907:0351
cs=0x4907;eip=0x000352; 	T(OR(al, al));	// 126459 or      al, al ;~ 4907:0352
cs=0x4907;eip=0x000354; 	R(JNS(loc_579a1));	// 126460 jns     short loc_579A1 ;~ 4907:0354
cs=0x4907;eip=0x000356; 	T(SUB(dl, 4));	// 126461 sub     dl, 4 ;~ 4907:0356
cs=0x4907;eip=0x000359; 	R(IN(al, dx));	// 126462 in      al, dx ;~ 4907:0359
cs=0x4907;eip=0x00035a; 	X(POP(dx));	// 126463 pop     dx ;~ 4907:035A
cs=0x4907;eip=0x00035b; 	R(RETN(0));	// 126464 retn ;~ 4907:035B
sub_579ac:
	// 126471 
cs=0x4907;eip=0x00035c; 	T(MOV(dx, *(dw*)(raddr(ds,0x285))));	// 126472 mov     dx, ds:285h ;~ 4907:035C
ret_4907_360:
	// 8519 
cs=0x4907;eip=0x000360; 	T(ADD(dl, 6));	// 126473 add     dl, 6 ;~ 4907:0360
cs=0x4907;eip=0x000363; 	T(MOV(al, 1));	// 126474 mov     al, 1 ;~ 4907:0363
cs=0x4907;eip=0x000365; 	R(OUT(dx, al));	// 126475 out     dx, al ;~ 4907:0365
cs=0x4907;eip=0x000366; 	R(IN(al, dx));	// 126476 in      al, dx ;~ 4907:0366
cs=0x4907;eip=0x000367; 	R(IN(al, dx));	// 126477 in      al, dx ;~ 4907:0367
cs=0x4907;eip=0x000368; 	R(IN(al, dx));	// 126478 in      al, dx ;~ 4907:0368
cs=0x4907;eip=0x000369; 	R(IN(al, dx));	// 126479 in      al, dx ;~ 4907:0369
cs=0x4907;eip=0x00036a; 	T(XOR(al, al));	// 126480 xor     al, al ;~ 4907:036A
cs=0x4907;eip=0x00036c; 	R(OUT(dx, al));	// 126481 out     dx, al ;~ 4907:036C
cs=0x4907;eip=0x00036d; 	T(MOV(bl, 0x10));	// 126482 mov     bl, 10h ;~ 4907:036D
loc_579bf:
	// 8520 
cs=0x4907;eip=0x00036f; 	R(CALL(sub_57965,0));	// 126485 call    sub_57965 ;~ 4907:036F
cs=0x4907;eip=0x000372; 	T(CMP(al, 0x0AA));	// 126486 cmp     al, 0AAh ; 'ª' ;~ 4907:0372
cs=0x4907;eip=0x000374; 	R(JZ(loc_579d0));	// 126487 jz      short loc_579D0 ;~ 4907:0374
cs=0x4907;eip=0x000376; 	T(DEC(bl));	// 126488 dec     bl ;~ 4907:0376
cs=0x4907;eip=0x000378; 	R(JNZ(loc_579bf));	// 126489 jnz     short loc_579BF ;~ 4907:0378
cs=0x4907;eip=0x00037a; 	T(MOV(ax, 2));	// 126490 mov     ax, 2 ;~ 4907:037A
cs=0x4907;eip=0x00037d; 	R(JMP(loc_579d2));	// 126491 jmp     short loc_579D2 ;~ 4907:037D
loc_579d0:
	// 8521 
cs=0x4907;eip=0x000380; 	T(XOR(ax, ax));	// 126496 xor     ax, ax ;~ 4907:0380
loc_579d2:
	// 8522 
cs=0x4907;eip=0x000382; 	T(OR(ax, ax));	// 126499 or      ax, ax ;~ 4907:0382
cs=0x4907;eip=0x000384; 	R(RETN(0));	// 126500 retn ;~ 4907:0384
sub_579d5:
	// 126507 
cs=0x4907;eip=0x000385; 	T(MOV(bx, 2));	// 126508 mov     bx, 2 ;~ 4907:0385
ret_4907_388:
	// 8523 
cs=0x4907;eip=0x000388; 	T(MOV(al, 0x0E0));	// 126509 mov     al, 0E0h ; 'à' ;~ 4907:0388
cs=0x4907;eip=0x00038a; 	T(MOV(dx, *(dw*)(raddr(ds,0x285))));	// 126510 mov     dx, ds:285h ;~ 4907:038A
cs=0x4907;eip=0x00038e; 	T(ADD(dl, 0x0C));	// 126511 add     dl, 0Ch ;~ 4907:038E
cs=0x4907;eip=0x000391; 	R(CALL(sub_5794f,0));	// 126512 call    sub_5794F ;~ 4907:0391
cs=0x4907;eip=0x000394; 	R(JC(loc_579f8));	// 126513 jb      short loc_579F8 ;~ 4907:0394
cs=0x4907;eip=0x000396; 	T(MOV(al, 0x0AA));	// 126514 mov     al, 0AAh ; 'ª' ;~ 4907:0396
cs=0x4907;eip=0x000398; 	R(CALL(sub_5794f,0));	// 126515 call    sub_5794F ;~ 4907:0398
cs=0x4907;eip=0x00039b; 	R(JC(loc_579f8));	// 126516 jb      short loc_579F8 ;~ 4907:039B
cs=0x4907;eip=0x00039d; 	R(CALL(sub_57965,0));	// 126517 call    sub_57965 ;~ 4907:039D
cs=0x4907;eip=0x0003a0; 	R(JC(loc_579f8));	// 126518 jb      short loc_579F8 ;~ 4907:03A0
cs=0x4907;eip=0x0003a2; 	T(CMP(al, 0x55));	// 126519 cmp     al, 55h ; 'U' ;~ 4907:03A2
cs=0x4907;eip=0x0003a4; 	R(JNZ(loc_579f8));	// 126520 jnz     short loc_579F8 ;~ 4907:03A4
cs=0x4907;eip=0x0003a6; 	T(XOR(bx, bx));	// 126521 xor     bx, bx ;~ 4907:03A6
loc_579f8:
	// 8524 
cs=0x4907;eip=0x0003a8; 	T(MOV(ax, bx));	// 126525 mov     ax, bx ;~ 4907:03A8
cs=0x4907;eip=0x0003aa; 	T(OR(ax, ax));	// 126526 or      ax, ax ;~ 4907:03AA
cs=0x4907;eip=0x0003ac; 	R(RETN(0));	// 126527 retn ;~ 4907:03AC
seg003_3ad_proc:
	// 126531 
cs=0x4907;eip=0x0003ad; 	X(PUSH(ax));	// 126531 push    ax ;~ 4907:03AD
ret_4907_3ae:
	// 8525 
cs=0x4907;eip=0x0003ae; 	X(PUSH(dx));	// 126532 push    dx ;~ 4907:03AE
	cs=seg_offset(seg003);
cs=0x4907;eip=0x0003af; 	T(MOV(dx, *(dw*)(((db*)&word_578d5))));	// 126533 mov     dx, cs:word_578D5 ;~ 4907:03AF
cs=0x4907;eip=0x0003b4; 	T(ADD(dl, 0x0E));	// 126534 add     dl, 0Eh ;~ 4907:03B4
cs=0x4907;eip=0x0003b7; 	R(IN(al, dx));	// 126535 in      al, dx ;~ 4907:03B7
	cs=seg_offset(seg003);
cs=0x4907;eip=0x0003b8; 	X(MOV(*(&byte_578de), 1));	// 126536 mov     cs:byte_578DE, 1 ;~ 4907:03B8
cs=0x4907;eip=0x0003be; 	T(MOV(al, 0x20));	// 126537 mov     al, 20h ; ' ' ;~ 4907:03BE
	cs=seg_offset(seg003);
cs=0x4907;eip=0x0003c0; 	T(CMP(*(&byte_578d7), 8));	// 126538 cmp     cs:byte_578D7, 8 ;~ 4907:03C0
cs=0x4907;eip=0x0003c6; 	R(JC(loc_57a1c));	// 126539 jb      short loc_57A1C ;~ 4907:03C6
cs=0x4907;eip=0x0003c8; 	R(OUT(0x0A0, al));	// 126540 out     0A0h, al        ; PIC 2  same as 0020 for PIC 1 ;~ 4907:03C8
cs=0x4907;eip=0x0003ca; 		// 126541 jmp     short $+2 ;~ 4907:03CA
loc_57a1c:
	// 8526 
cs=0x4907;eip=0x0003cc; 	R(OUT(0x20, al));	// 126546 out     20h, al         ; Interrupt controller, 8259A. ;~ 4907:03CC
cs=0x4907;eip=0x0003ce; 	X(POP(dx));	// 126547 pop     dx ;~ 4907:03CE
cs=0x4907;eip=0x0003cf; 	X(POP(ax));	// 126548 pop     ax ;~ 4907:03CF
cs=0x4907;eip=0x0003d0; 	R(IRET);	// 126549 iret ;~ 4907:03D0
sub_57a21:
	// 126554 
cs=0x4907;eip=0x0003d1; 	X(MOV(*(raddr(ds,0x28E)), 0));	// 126555 mov     byte ptr ds:28Eh, 0 ;~ 4907:03D1
ret_4907_3d6:
	// 8527 
cs=0x4907;eip=0x0003d6; 	T(MOV(ax, 0x3AD));	// 126556 mov     ax, 3ADh ;~ 4907:03D6
cs=0x4907;eip=0x0003d9; 	R(CALL(sub_57b28,0));	// 126557 call    sub_57B28 ;~ 4907:03D9
cs=0x4907;eip=0x0003dc; 	T(MOV(dx, cs));	// 126558 mov     dx, cs ;~ 4907:03DC
cs=0x4907;eip=0x0003de; 	T(MOV(ax, 0x291));	// 126559 mov     ax, 291h ;~ 4907:03DE
cs=0x4907;eip=0x0003e1; 	R(CALL(sub_57ada,0));	// 126560 call    sub_57ADA ;~ 4907:03E1
cs=0x4907;eip=0x0003e4; 	T(XOR(cx, cx));	// 126561 xor     cx, cx ;~ 4907:03E4
cs=0x4907;eip=0x0003e6; 	T(MOV(dh, 0x48));	// 126562 mov     dh, 48h ; 'H' ;~ 4907:03E6
cs=0x4907;eip=0x0003e8; 	R(CALL(sub_57aa0,0));	// 126563 call    sub_57AA0 ;~ 4907:03E8
cs=0x4907;eip=0x0003eb; 	T(MOV(al, 0x40));	// 126564 mov     al, 40h ; '@' ;~ 4907:03EB
cs=0x4907;eip=0x0003ed; 	R(CALL(sub_57983,0));	// 126565 call    sub_57983 ;~ 4907:03ED
cs=0x4907;eip=0x0003f0; 	T(MOV(al, 0x64));	// 126566 mov     al, 64h ; 'd' ;~ 4907:03F0
cs=0x4907;eip=0x0003f2; 	R(CALL(sub_5798a,0));	// 126567 call    sub_5798A ;~ 4907:03F2
cs=0x4907;eip=0x0003f5; 	T(MOV(al, 0x14));	// 126568 mov     al, 14h ;~ 4907:03F5
cs=0x4907;eip=0x0003f7; 	R(CALL(sub_5798a,0));	// 126569 call    sub_5798A ;~ 4907:03F7
cs=0x4907;eip=0x0003fa; 	T(XOR(al, al));	// 126570 xor     al, al ;~ 4907:03FA
cs=0x4907;eip=0x0003fc; 	R(CALL(sub_5798a,0));	// 126571 call    sub_5798A ;~ 4907:03FC
cs=0x4907;eip=0x0003ff; 	T(XOR(al, al));	// 126572 xor     al, al ;~ 4907:03FF
cs=0x4907;eip=0x000401; 	R(CALL(sub_5798a,0));	// 126573 call    sub_5798A ;~ 4907:0401
cs=0x4907;eip=0x000404; 	T(XOR(ax, ax));	// 126574 xor     ax, ax ;~ 4907:0404
cs=0x4907;eip=0x000406; 	T(MOV(cx, 0x0FFFF));	// 126575 mov     cx, 0FFFFh ;~ 4907:0406
loc_57a59:
	// 8528 
cs=0x4907;eip=0x000409; 	T(CMP(*(raddr(ds,0x28E)), 0));	// 126578 cmp     byte ptr ds:28Eh, 0 ;~ 4907:0409
cs=0x4907;eip=0x00040e; 	R(JNZ(loc_57a64));	// 126579 jnz     short loc_57A64 ;~ 4907:040E
cs=0x4907;eip=0x000410; 	R(LOOP(loc_57a59));	// 126580 loop    loc_57A59 ;~ 4907:0410
cs=0x4907;eip=0x000412; 	T(MOV(al, 3));	// 126581 mov     al, 3 ;~ 4907:0412
loc_57a64:
	// 8529 
cs=0x4907;eip=0x000414; 	X(PUSH(ax));	// 126584 push    ax ;~ 4907:0414
cs=0x4907;eip=0x000415; 	R(CALL(sub_57b74,0));	// 126585 call    sub_57B74 ;~ 4907:0415
cs=0x4907;eip=0x000418; 	X(POP(ax));	// 126586 pop     ax ;~ 4907:0418
cs=0x4907;eip=0x000419; 	T(OR(ax, ax));	// 126587 or      ax, ax ;~ 4907:0419
cs=0x4907;eip=0x00041b; 	R(RETN(0));	// 126588 retn ;~ 4907:041B
sub_57a6c:
	// 126595 
cs=0x4907;eip=0x00041c; 	T(MOV(al, 0x0E1));	// 126596 mov     al, 0E1h ; 'á' ;~ 4907:041C
ret_4907_41e:
	// 8530 
cs=0x4907;eip=0x00041e; 	R(CALL(sub_5798a,0));	// 126597 call    sub_5798A ;~ 4907:041E
cs=0x4907;eip=0x000421; 	R(CALL(sub_57997,0));	// 126598 call    sub_57997 ;~ 4907:0421
cs=0x4907;eip=0x000424; 	T(MOV(ah, al));	// 126599 mov     ah, al ;~ 4907:0424
cs=0x4907;eip=0x000426; 	R(CALL(sub_57997,0));	// 126600 call    sub_57997 ;~ 4907:0426
cs=0x4907;eip=0x000429; 	T(CMP(ax, 0x103));	// 126601 cmp     ax, 103h ;~ 4907:0429
cs=0x4907;eip=0x00042c; 	T(MOV(ax, 0));	// 126602 mov     ax, 0 ;~ 4907:042C
cs=0x4907;eip=0x00042f; 	T(ADC(al, ah));	// 126603 adc     al, ah ;~ 4907:042F
cs=0x4907;eip=0x000431; 	R(RETN(0));	// 126604 retn ;~ 4907:0431
sub_57a82:
	// 126611 
cs=0x4907;eip=0x000432; 	X(PUSHF);	// 126613 pushf ;~ 4907:0432
ret_4907_433:
	// 8531 
cs=0x4907;eip=0x000433; 	T(MOV(cx, 0x64));	// 126614 mov     cx, 64h ; 'd' ;~ 4907:0433
cs=0x4907;eip=0x000436; 	T(MOV(dx, *(dw*)(raddr(ds,0x285))));	// 126615 mov     dx, ds:285h ;~ 4907:0436
cs=0x4907;eip=0x00043a; 	T(ADD(dl, 0x0C));	// 126616 add     dl, 0Ch ;~ 4907:043A
loc_57a8d:
	// 8532 
cs=0x4907;eip=0x00043d; 	T(STI);	// 126619 sti ;~ 4907:043D
cs=0x4907;eip=0x00043e; 	T(CMP(*(raddr(ds,0x292)), 0));	// 126620 cmp     byte ptr ds:292h, 0 ;~ 4907:043E
cs=0x4907;eip=0x000443; 	R(JZ(loc_57a9e));	// 126621 jz      short loc_57A9E ;~ 4907:0443
cs=0x4907;eip=0x000445; 	T(CLI);	// 126622 cli ;~ 4907:0445
cs=0x4907;eip=0x000446; 	R(IN(al, dx));	// 126623 in      al, dx ;~ 4907:0446
cs=0x4907;eip=0x000447; 	T(TEST(al, 0x80));	// 126624 test    al, 80h ;~ 4907:0447
cs=0x4907;eip=0x000449; 	R(LOOPNE(loc_57a8d));	// 126625 loopne  loc_57A8D ;~ 4907:0449
cs=0x4907;eip=0x00044b; 	T(MOV(al, 0x0D0));	// 126626 mov     al, 0D0h ; 'Ğ' ;~ 4907:044B
cs=0x4907;eip=0x00044d; 	R(OUT(dx, al));	// 126627 out     dx, al ;~ 4907:044D
loc_57a9e:
	// 8533 
cs=0x4907;eip=0x00044e; 	X(POPF);	// 126630 popf ;~ 4907:044E
cs=0x4907;eip=0x00044f; 	R(RETN(0));	// 126631 retn ;~ 4907:044F
sub_57aa0:
	// 126638 
cs=0x4907;eip=0x000450; 	X(PUSH(bx));	// 126640 push    bx ;~ 4907:0450
ret_4907_451:
	// 8534 
cs=0x4907;eip=0x000451; 	T(MOV(bx, ax));	// 126641 mov     bx, ax ;~ 4907:0451
cs=0x4907;eip=0x000453; 	T(MOV(ah, dl));	// 126642 mov     ah, dl ;~ 4907:0453
	cs=seg_offset(seg003);
cs=0x4907;eip=0x000455; 	T(MOV(al, *(&byte_578d8)));	// 126643 mov     al, cs:byte_578D8 ;~ 4907:0455
cs=0x4907;eip=0x000459; 	T(MOV(dl, al));	// 126644 mov     dl, al ;~ 4907:0459
cs=0x4907;eip=0x00045b; 	T(OR(al, 4));	// 126645 or      al, 4 ;~ 4907:045B
cs=0x4907;eip=0x00045d; 	R(OUT(0x0A, al));	// 126646 out     0Ah, al         ; DMA controller, 8237A-5. ;~ 4907:045D
cs=0x4907;eip=0x00045f; 	T(XOR(al, al));	// 126650 xor     al, al ;~ 4907:045F
cs=0x4907;eip=0x000461; 	R(OUT(0x0C, al));	// 126651 out     0Ch, al         ; DMA controller, 8237A-5. ;~ 4907:0461
cs=0x4907;eip=0x000463; 	T(MOV(al, dh));	// 126653 mov     al, dh ;~ 4907:0463
cs=0x4907;eip=0x000465; 	T(OR(al, dl));	// 126654 or      al, dl ;~ 4907:0465
cs=0x4907;eip=0x000467; 	R(OUT(0x0B, al));	// 126655 out     0Bh, al         ; DMA 8237A-5. mode register bits: ;~ 4907:0467
cs=0x4907;eip=0x000469; 	T(XOR(dh, dh));	// 126661 xor     dh, dh ;~ 4907:0469
cs=0x4907;eip=0x00046b; 	T(SHL(dx, 1));	// 126662 shl     dx, 1 ;~ 4907:046B
cs=0x4907;eip=0x00046d; 	T(MOV(al, bl));	// 126663 mov     al, bl ;~ 4907:046D
cs=0x4907;eip=0x00046f; 	R(OUT(dx, al));	// 126664 out     dx, al          ; DMA controller, 8237A-5. ;~ 4907:046F
cs=0x4907;eip=0x000470; 	T(MOV(al, bh));	// 126667 mov     al, bh ;~ 4907:0470
cs=0x4907;eip=0x000472; 	R(OUT(dx, al));	// 126668 out     dx, al          ; DMA controller, 8237A-5. ;~ 4907:0472
cs=0x4907;eip=0x000473; 	T(MOV(al, cl));	// 126671 mov     al, cl ;~ 4907:0473
cs=0x4907;eip=0x000475; 	T(INC(dx));	// 126672 inc     dx ;~ 4907:0475
cs=0x4907;eip=0x000476; 	R(OUT(dx, al));	// 126673 out     dx, al          ; DMA controller, 8237A-5. ;~ 4907:0476
cs=0x4907;eip=0x000477; 	T(MOV(al, ch));	// 126675 mov     al, ch ;~ 4907:0477
cs=0x4907;eip=0x000479; 	R(OUT(dx, al));	// 126676 out     dx, al          ; DMA controller, 8237A-5. ;~ 4907:0479
	cs=seg_offset(seg003);
cs=0x4907;eip=0x00047a; 	T(MOV(dl, *(&byte_578d9)));	// 126678 mov     dl, cs:byte_578D9 ;~ 4907:047A
cs=0x4907;eip=0x00047f; 	T(MOV(al, ah));	// 126679 mov     al, ah ;~ 4907:047F
cs=0x4907;eip=0x000481; 	R(OUT(dx, al));	// 126680 out     dx, al          ; DMA page register 74LS612: ;~ 4907:0481
	cs=seg_offset(seg003);
cs=0x4907;eip=0x000482; 	T(MOV(al, *(&byte_578d8)));	// 126682 mov     al, cs:byte_578D8 ;~ 4907:0482
cs=0x4907;eip=0x000486; 	R(OUT(0x0A, al));	// 126683 out     0Ah, al         ; DMA controller, 8237A-5. ;~ 4907:0486
cs=0x4907;eip=0x000488; 	X(POP(bx));	// 126687 pop     bx ;~ 4907:0488
cs=0x4907;eip=0x000489; 	R(RETN(0));	// 126688 retn ;~ 4907:0489
sub_57ada:
	// 126695 
cs=0x4907;eip=0x00048a; 	X(PUSH(cx));	// 126697 push    cx ;~ 4907:048A
ret_4907_48b:
	// 8535 
cs=0x4907;eip=0x00048b; 	T(MOV(cl, 4));	// 126698 mov     cl, 4 ;~ 4907:048B
cs=0x4907;eip=0x00048d; 	T(ROL(dx, cl));	// 126699 rol     dx, cl ;~ 4907:048D
cs=0x4907;eip=0x00048f; 	T(MOV(cx, dx));	// 126700 mov     cx, dx ;~ 4907:048F
cs=0x4907;eip=0x000491; 	T(AND(dx, 0x0F));	// 126701 and     dx, 0Fh ;~ 4907:0491
cs=0x4907;eip=0x000494; 	T(AND(cx, 0x0FFF0));	// 126702 and     cx, 0FFF0h ;~ 4907:0494
cs=0x4907;eip=0x000497; 	T(ADD(ax, cx));	// 126703 add     ax, cx ;~ 4907:0497
cs=0x4907;eip=0x000499; 	T(ADC(dx, 0));	// 126704 adc     dx, 0 ;~ 4907:0499
cs=0x4907;eip=0x00049c; 	X(POP(cx));	// 126705 pop     cx ;~ 4907:049C
cs=0x4907;eip=0x00049d; 	R(RETN(0));	// 126706 retn ;~ 4907:049D
sub_57aee:
	// 126713 
cs=0x4907;eip=0x00049e; 	T(MOV(dx, *(dw*)(raddr(ds,0x295))));	// 126714 mov     dx, ds:295h ;~ 4907:049E
ret_4907_4a2:
	// 8536 
cs=0x4907;eip=0x0004a2; 	T(ADD(ax, *(dw*)(raddr(ds,0x293))));	// 126715 add     ax, ds:293h ;~ 4907:04A2
cs=0x4907;eip=0x0004a6; 	R(JNC(locret_57afb));	// 126716 jnb     short locret_57AFB ;~ 4907:04A6
cs=0x4907;eip=0x0004a8; 	T(ADD(dh, 0x10));	// 126717 add     dh, 10h ;~ 4907:04A8
locret_57afb:
	// 8537 
cs=0x4907;eip=0x0004ab; 	R(RETN(0));	// 126720 retn ;~ 4907:04AB
sub_57afc:
	// 126727 
cs=0x4907;eip=0x0004ac; 	X(PUSH(es));	// 126728 push    es ;~ 4907:04AC
ret_4907_4ad:
	// 8538 
cs=0x4907;eip=0x0004ad; 	X(PUSH(di));	// 126729 push    di ;~ 4907:04AD
cs=0x4907;eip=0x0004ae; 	T(LES(di, *(dw*)(raddr(ds,0x293))));	// 126730 les     di, ds:293h ;~ 4907:04AE
cs=0x4907;eip=0x0004b2; 	T(MOV(ax, *(dw*)(raddr(es,di+1))));	// 126731 mov     ax, es:[di+1] ;~ 4907:04B2
cs=0x4907;eip=0x0004b6; 	T(XOR(dx, dx));	// 126732 xor     dx, dx ;~ 4907:04B6
cs=0x4907;eip=0x0004b8; 	T(MOV(dl, *(raddr(es,di+3))));	// 126733 mov     dl, es:[di+3] ;~ 4907:04B8
cs=0x4907;eip=0x0004bc; 	X(POP(di));	// 126734 pop     di ;~ 4907:04BC
cs=0x4907;eip=0x0004bd; 	X(POP(es));	// 126735 pop     es ;~ 4907:04BD
cs=0x4907;eip=0x0004be; 	R(RETN(0));	// 126736 retn ;~ 4907:04BE
sub_57b0f:
	// 126743 
cs=0x4907;eip=0x0004bf; 	T(MOV(al, *(raddr(ds,0x287))));	// 126745 mov     al, ds:287h ;~ 4907:04BF
ret_4907_4c2:
	// 8539 
cs=0x4907;eip=0x0004c2; 	T(ADD(al, 8));	// 126746 add     al, 8 ;~ 4907:04C2
cs=0x4907;eip=0x0004c4; 	T(CMP(al, 0x10));	// 126747 cmp     al, 10h ;~ 4907:04C4
cs=0x4907;eip=0x0004c6; 	R(JC(loc_57b1a));	// 126748 jb      short loc_57B1A ;~ 4907:04C6
cs=0x4907;eip=0x0004c8; 	T(ADD(al, 0x60));	// 126749 add     al, 60h ; '`' ;~ 4907:04C8
loc_57b1a:
	// 8540 
cs=0x4907;eip=0x0004ca; 	T(XOR(ah, ah));	// 126752 xor     ah, ah ;~ 4907:04CA
cs=0x4907;eip=0x0004cc; 	T(SHL(ax, 1));	// 126753 shl     ax, 1 ;~ 4907:04CC
cs=0x4907;eip=0x0004ce; 	T(SHL(ax, 1));	// 126754 shl     ax, 1 ;~ 4907:04CE
cs=0x4907;eip=0x0004d0; 	T(MOV(bx, ax));	// 126755 mov     bx, ax ;~ 4907:04D0
cs=0x4907;eip=0x0004d2; 	T(XOR(ax, ax));	// 126756 xor     ax, ax ;~ 4907:04D2
cs=0x4907;eip=0x0004d4; 	T(MOV(es, ax));	// 126757 mov     es, ax ;~ 4907:04D4
cs=0x4907;eip=0x0004d6; 	T(CLI);	// 126759 cli ;~ 4907:04D6
cs=0x4907;eip=0x0004d7; 	R(RETN(0));	// 126760 retn ;~ 4907:04D7
sub_57b28:
	// 126767 
cs=0x4907;eip=0x0004d8; 	X(PUSHF);	// 126769 pushf ;~ 4907:04D8
ret_4907_4d9:
	// 8541 
cs=0x4907;eip=0x0004d9; 	X(PUSH(bx));	// 126770 push    bx ;~ 4907:04D9
cs=0x4907;eip=0x0004da; 	X(PUSH(cx));	// 126771 push    cx ;~ 4907:04DA
cs=0x4907;eip=0x0004db; 	X(PUSH(dx));	// 126772 push    dx ;~ 4907:04DB
cs=0x4907;eip=0x0004dc; 	T(MOV(dx, ax));	// 126773 mov     dx, ax ;~ 4907:04DC
cs=0x4907;eip=0x0004de; 	X(PUSH(es));	// 126774 push    es ;~ 4907:04DE
cs=0x4907;eip=0x0004df; 	R(CALL(sub_57b0f,0));	// 126775 call    sub_57B0F ;~ 4907:04DF
cs=0x4907;eip=0x0004e2; 	T(MOV(ax, cs));	// 126776 mov     ax, cs ;~ 4907:04E2
cs=0x4907;eip=0x0004e4; 	X(XCHG(dx, *(dw*)(raddr(es,bx))));	// 126777 xchg    dx, es:[bx] ;~ 4907:04E4
cs=0x4907;eip=0x0004e7; 	X(MOV(*(dw*)(raddr(ds,0x297)), dx));	// 126778 mov     ds:297h, dx ;~ 4907:04E7
cs=0x4907;eip=0x0004eb; 	X(XCHG(ax, *(dw*)(raddr(es,bx+2))));	// 126779 xchg    ax, es:[bx+2] ;~ 4907:04EB
cs=0x4907;eip=0x0004ef; 	X(MOV(*(dw*)(raddr(ds,0x299)), ax));	// 126780 mov     ds:299h, ax ;~ 4907:04EF
cs=0x4907;eip=0x0004f2; 	X(POP(es));	// 126781 pop     es ;~ 4907:04F2
cs=0x4907;eip=0x0004f3; 	T(MOV(cl, *(raddr(ds,0x287))));	// 126783 mov     cl, ds:287h ;~ 4907:04F3
cs=0x4907;eip=0x0004f7; 	T(CMP(cl, 8));	// 126784 cmp     cl, 8 ;~ 4907:04F7
cs=0x4907;eip=0x0004fa; 	R(JC(loc_57b60));	// 126785 jb      short loc_57B60 ;~ 4907:04FA
cs=0x4907;eip=0x0004fc; 	T(SUB(cl, 8));	// 126786 sub     cl, 8 ;~ 4907:04FC
cs=0x4907;eip=0x0004ff; 	T(MOV(ah, 1));	// 126787 mov     ah, 1 ;~ 4907:04FF
cs=0x4907;eip=0x000501; 	T(SHL(ah, cl));	// 126788 shl     ah, cl ;~ 4907:0501
cs=0x4907;eip=0x000503; 	T(NOT(ah));	// 126789 not     ah ;~ 4907:0503
cs=0x4907;eip=0x000505; 	R(IN(al, 0x0A1));	// 126790 in      al, 0A1h        ; Interrupt Controller #2, 8259A ;~ 4907:0505
cs=0x4907;eip=0x000507; 	X(MOV(*(raddr(ds,0x29C)), al));	// 126791 mov     ds:29Ch, al ;~ 4907:0507
cs=0x4907;eip=0x00050a; 	T(AND(al, ah));	// 126792 and     al, ah ;~ 4907:050A
cs=0x4907;eip=0x00050c; 	R(OUT(0x0A1, al));	// 126793 out     0A1h, al        ; Interrupt Controller #2, 8259A ;~ 4907:050C
cs=0x4907;eip=0x00050e; 	T(MOV(cl, 2));	// 126794 mov     cl, 2 ;~ 4907:050E
loc_57b60:
	// 8542 
cs=0x4907;eip=0x000510; 	T(MOV(ah, 1));	// 126797 mov     ah, 1 ;~ 4907:0510
cs=0x4907;eip=0x000512; 	T(SHL(ah, cl));	// 126798 shl     ah, cl ;~ 4907:0512
cs=0x4907;eip=0x000514; 	T(NOT(ah));	// 126799 not     ah ;~ 4907:0514
cs=0x4907;eip=0x000516; 	R(IN(al, 0x21));	// 126800 in      al, 21h         ; Interrupt controller, 8259A. ;~ 4907:0516
cs=0x4907;eip=0x000518; 	X(MOV(*(raddr(ds,0x29B)), al));	// 126801 mov     ds:29Bh, al ;~ 4907:0518
cs=0x4907;eip=0x00051b; 	T(AND(al, ah));	// 126802 and     al, ah ;~ 4907:051B
cs=0x4907;eip=0x00051d; 	R(OUT(0x21, al));	// 126803 out     21h, al         ; Interrupt controller, 8259A. ;~ 4907:051D
cs=0x4907;eip=0x00051f; 	X(POP(dx));	// 126804 pop     dx ;~ 4907:051F
cs=0x4907;eip=0x000520; 	X(POP(cx));	// 126805 pop     cx ;~ 4907:0520
cs=0x4907;eip=0x000521; 	X(POP(bx));	// 126806 pop     bx ;~ 4907:0521
cs=0x4907;eip=0x000522; 	X(POPF);	// 126807 popf ;~ 4907:0522
cs=0x4907;eip=0x000523; 	R(RETN(0));	// 126808 retn ;~ 4907:0523
sub_57b74:
	// 126815 
cs=0x4907;eip=0x000524; 	X(PUSHF);	// 126817 pushf ;~ 4907:0524
ret_4907_525:
	// 8543 
cs=0x4907;eip=0x000525; 	X(PUSH(bx));	// 126818 push    bx ;~ 4907:0525
cs=0x4907;eip=0x000526; 	X(PUSH(es));	// 126819 push    es ;~ 4907:0526
cs=0x4907;eip=0x000527; 	R(CALL(sub_57b0f,0));	// 126820 call    sub_57B0F ;~ 4907:0527
cs=0x4907;eip=0x00052a; 	T(MOV(ax, *(dw*)(raddr(ds,0x297))));	// 126821 mov     ax, ds:297h ;~ 4907:052A
cs=0x4907;eip=0x00052d; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 126822 mov     es:[bx], ax ;~ 4907:052D
cs=0x4907;eip=0x000530; 	T(MOV(ax, *(dw*)(raddr(ds,0x299))));	// 126823 mov     ax, ds:299h ;~ 4907:0530
cs=0x4907;eip=0x000533; 	X(MOV(*(dw*)(raddr(es,bx+2)), ax));	// 126824 mov     es:[bx+2], ax ;~ 4907:0533
cs=0x4907;eip=0x000537; 	X(POP(es));	// 126825 pop     es ;~ 4907:0537
cs=0x4907;eip=0x000538; 	T(CMP(*(raddr(ds,0x287)), 8));	// 126826 cmp     byte ptr ds:287h, 8 ;~ 4907:0538
cs=0x4907;eip=0x00053d; 	R(JC(loc_57b94));	// 126827 jb      short loc_57B94 ;~ 4907:053D
cs=0x4907;eip=0x00053f; 	T(MOV(al, *(raddr(ds,0x29C))));	// 126828 mov     al, ds:29Ch ;~ 4907:053F
cs=0x4907;eip=0x000542; 	R(OUT(0x0A1, al));	// 126829 out     0A1h, al        ; Interrupt Controller #2, 8259A ;~ 4907:0542
loc_57b94:
	// 8544 
cs=0x4907;eip=0x000544; 	T(MOV(al, *(raddr(ds,0x29B))));	// 126832 mov     al, ds:29Bh ;~ 4907:0544
cs=0x4907;eip=0x000547; 	R(OUT(0x21, al));	// 126833 out     21h, al         ; Interrupt controller, 8259A. ;~ 4907:0547
cs=0x4907;eip=0x000549; 	X(POP(bx));	// 126834 pop     bx ;~ 4907:0549
cs=0x4907;eip=0x00054a; 	X(POPF);	// 126835 popf ;~ 4907:054A
cs=0x4907;eip=0x00054b; 	R(RETN(0));	// 126836 retn ;~ 4907:054B
sub_57b9c:
	// 126843 
cs=0x4907;eip=0x00054c; 	X(PUSH(ds));	// 126844 push    ds ;~ 4907:054C
ret_4907_54d:
	// 8545 
cs=0x4907;eip=0x00054d; 	X(PUSH(si));	// 126845 push    si ;~ 4907:054D
cs=0x4907;eip=0x00054e; 	T(LDS(si, *(dw*)(raddr(ds,0x293))));	// 126846 lds     si, ds:293h ;~ 4907:054E
cs=0x4907;eip=0x000552; 	T(LODSB);	// 126847 lodsb ;~ 4907:0552
cs=0x4907;eip=0x000553; 	X(POP(si));	// 126848 pop     si ;~ 4907:0553
cs=0x4907;eip=0x000554; 	X(POP(ds));	// 126849 pop     ds ;~ 4907:0554
cs=0x4907;eip=0x000555; 	R(RETN(0));	// 126850 retn ;~ 4907:0555
sub_57ba6:
	// 126857 
cs=0x4907;eip=0x000556; 	T(MOV(cx, ax));	// 126859 mov     cx, ax ;~ 4907:0556
ret_4907_558:
	// 8546 
cs=0x4907;eip=0x000558; 	R(CALL(sub_57aee,0));	// 126860 call    sub_57AEE ;~ 4907:0558
cs=0x4907;eip=0x00055b; 	R(CALL(sub_57ada,0));	// 126861 call    sub_57ADA ;~ 4907:055B
cs=0x4907;eip=0x00055e; 	X(MOV(*(raddr(ds,0x29D)), dl));	// 126862 mov     ds:29Dh, dl ;~ 4907:055E
cs=0x4907;eip=0x000562; 	X(MOV(*(dw*)(raddr(ds,0x29E)), ax));	// 126863 mov     ds:29Eh, ax ;~ 4907:0562
cs=0x4907;eip=0x000565; 	R(CALL(sub_57afc,0));	// 126864 call    sub_57AFC ;~ 4907:0565
cs=0x4907;eip=0x000568; 	T(SUB(cx, 4));	// 126865 sub     cx, 4 ;~ 4907:0568
cs=0x4907;eip=0x00056b; 	T(SUB(ax, cx));	// 126866 sub     ax, cx ;~ 4907:056B
cs=0x4907;eip=0x00056d; 	T(SBB(dx, 0));	// 126867 sbb     dx, 0 ;~ 4907:056D
cs=0x4907;eip=0x000570; 	X(MOV(*(dw*)(raddr(ds,0x2A0)), ax));	// 126868 mov     ds:2A0h, ax ;~ 4907:0570
cs=0x4907;eip=0x000573; 	X(MOV(*(dw*)(raddr(ds,0x2A2)), dx));	// 126869 mov     ds:2A2h, dx ;~ 4907:0573
cs=0x4907;eip=0x000577; 	T(SUB(ax, 1));	// 126870 sub     ax, 1 ;~ 4907:0577
cs=0x4907;eip=0x00057a; 	T(SBB(dx, 0));	// 126871 sbb     dx, 0 ;~ 4907:057A
cs=0x4907;eip=0x00057d; 	T(ADD(ax, *(dw*)(raddr(ds,0x29E))));	// 126872 add     ax, ds:29Eh ;~ 4907:057D
cs=0x4907;eip=0x000581; 	T(ADC(dl, *(raddr(ds,0x29D))));	// 126873 adc     dl, ds:29Dh ;~ 4907:0581
cs=0x4907;eip=0x000585; 	X(MOV(*(dw*)(raddr(ds,0x2A4)), ax));	// 126874 mov     ds:2A4h, ax ;~ 4907:0585
cs=0x4907;eip=0x000588; 	T(SUB(dl, *(raddr(ds,0x29D))));	// 126875 sub     dl, ds:29Dh ;~ 4907:0588
cs=0x4907;eip=0x00058c; 	X(MOV(*(raddr(ds,0x2A6)), dl));	// 126876 mov     ds:2A6h, dl ;~ 4907:058C
cs=0x4907;eip=0x000590; 	R(RETN(0));	// 126877 retn ;~ 4907:0590
seg003_591_proc:
	// 126881 
cs=0x4907;eip=0x000591; 	X(PUSH(ds));	// 126881 push    ds ;~ 4907:0591
ret_4907_592:
	// 8547 
cs=0x4907;eip=0x000592; 	X(PUSH(es));	// 126882 push    es ;~ 4907:0592
cs=0x4907;eip=0x000593; 	X(PUSH(ax));	// 126883 push    ax ;~ 4907:0593
cs=0x4907;eip=0x000594; 	X(PUSH(bx));	// 126884 push    bx ;~ 4907:0594
cs=0x4907;eip=0x000595; 	X(PUSH(cx));	// 126885 push    cx ;~ 4907:0595
cs=0x4907;eip=0x000596; 	X(PUSH(dx));	// 126886 push    dx ;~ 4907:0596
cs=0x4907;eip=0x000597; 	X(PUSH(si));	// 126887 push    si ;~ 4907:0597
cs=0x4907;eip=0x000598; 	X(PUSH(di));	// 126888 push    di ;~ 4907:0598
cs=0x4907;eip=0x000599; 	X(PUSH(bp));	// 126889 push    bp ;~ 4907:0599
cs=0x4907;eip=0x00059a; 	T(CLD);	// 126890 cld ;~ 4907:059A
cs=0x4907;eip=0x00059b; 	T(MOV(ax, cs));	// 126891 mov     ax, cs ;~ 4907:059B
cs=0x4907;eip=0x00059d; 	T(MOV(ds, ax));	// 126892 mov     ds, ax ;~ 4907:059D
cs=0x4907;eip=0x00059f; 	T(MOV(es, ax));	// 126894 mov     es, ax ;~ 4907:059F
cs=0x4907;eip=0x0005a1; 	T(MOV(al, 0x20));	// 126896 mov     al, 20h ; ' ' ;~ 4907:05A1
	cs=seg_offset(seg003);
cs=0x4907;eip=0x0005a3; 	T(CMP(*(&byte_578d7), 8));	// 126897 cmp     cs:byte_578D7, 8 ;~ 4907:05A3
cs=0x4907;eip=0x0005a9; 	R(JC(loc_57bff));	// 126898 jb      short loc_57BFF ;~ 4907:05A9
cs=0x4907;eip=0x0005ab; 	R(OUT(0x0A0, al));	// 126899 out     0A0h, al        ; PIC 2  same as 0020 for PIC 1 ;~ 4907:05AB
cs=0x4907;eip=0x0005ad; 		// 126900 jmp     short $+2 ;~ 4907:05AD
loc_57bff:
	// 8548 
cs=0x4907;eip=0x0005af; 	R(OUT(0x20, al));	// 126905 out     20h, al         ; Interrupt controller, 8259A. ;~ 4907:05AF
cs=0x4907;eip=0x0005b1; 	T(MOV(dx, word_578d5));	// 126906 mov     dx, word_578D5 ;~ 4907:05B1
cs=0x4907;eip=0x0005b5; 	T(ADD(dl, 0x0E));	// 126907 add     dl, 0Eh ;~ 4907:05B5
cs=0x4907;eip=0x0005b8; 	R(IN(al, dx));	// 126908 in      al, dx ;~ 4907:05B8
cs=0x4907;eip=0x0005b9; 	T(STI);	// 126909 sti ;~ 4907:05B9
cs=0x4907;eip=0x0005ba; 	T(MOV(ax, *(dw*)((byte_578e3)+0x0D)));	// 126910 mov     ax, word ptr byte_578E3+0Dh ;~ 4907:05BA
cs=0x4907;eip=0x0005bd; 	T(OR(ax, *(dw*)((byte_578e3)+0x0F)));	// 126911 or      ax, word ptr byte_578E3+0Fh ;~ 4907:05BD
cs=0x4907;eip=0x0005c1; 	R(JNZ(loc_57c25));	// 126912 jnz     short loc_57C25 ;~ 4907:05C1
cs=0x4907;eip=0x0005c3; 	R(CALL(sub_57cc7,0));	// 126913 call    sub_57CC7 ;~ 4907:05C3
cs=0x4907;eip=0x0005c6; 	R(CALL(sub_57caf,0));	// 126914 call    sub_57CAF ;~ 4907:05C6
cs=0x4907;eip=0x0005c9; 	T(CMP(*((byte_578e3)+0x14), 0));	// 126915 cmp     byte_578E3+14h, 0 ;~ 4907:05C9
cs=0x4907;eip=0x0005ce; 	R(JZ(loc_57c28));	// 126916 jz      short loc_57C28 ;~ 4907:05CE
cs=0x4907;eip=0x0005d0; 	R(CALL(sub_57c90,0));	// 126917 call    sub_57C90 ;~ 4907:05D0
cs=0x4907;eip=0x0005d3; 	R(JMP(loc_57c28));	// 126918 jmp     short loc_57C28 ;~ 4907:05D3
loc_57c25:
	// 8549 
cs=0x4907;eip=0x0005d5; 	R(CALL(sub_57c32,0));	// 126922 call    sub_57C32 ;~ 4907:05D5
loc_57c28:
	// 8550 
cs=0x4907;eip=0x0005d8; 	X(POP(bp));	// 126926 pop     bp ;~ 4907:05D8
cs=0x4907;eip=0x0005d9; 	X(POP(di));	// 126927 pop     di ;~ 4907:05D9
cs=0x4907;eip=0x0005da; 	X(POP(si));	// 126928 pop     si ;~ 4907:05DA
cs=0x4907;eip=0x0005db; 	X(POP(dx));	// 126929 pop     dx ;~ 4907:05DB
cs=0x4907;eip=0x0005dc; 	X(POP(cx));	// 126930 pop     cx ;~ 4907:05DC
cs=0x4907;eip=0x0005dd; 	X(POP(bx));	// 126931 pop     bx ;~ 4907:05DD
cs=0x4907;eip=0x0005de; 	X(POP(ax));	// 126932 pop     ax ;~ 4907:05DE
cs=0x4907;eip=0x0005df; 	X(POP(es));	// 126933 pop     es ;~ 4907:05DF
cs=0x4907;eip=0x0005e0; 	X(POP(ds));	// 126935 pop     ds ;~ 4907:05E0
cs=0x4907;eip=0x0005e1; 	R(IRET);	// 126937 iret ;~ 4907:05E1
sub_57c32:
	// 126942 
cs=0x4907;eip=0x0005e2; 	T(MOV(cx, 0x0FFFF));	// 126944 mov     cx, 0FFFFh ;~ 4907:05E2
ret_4907_5e5:
	// 8551 
cs=0x4907;eip=0x0005e5; 	T(CMP(*(raddr(ds,0x2A6)), 0));	// 126945 cmp     byte ptr ds:2A6h, 0 ;~ 4907:05E5
cs=0x4907;eip=0x0005ea; 	R(JNZ(loc_57c44));	// 126946 jnz     short loc_57C44 ;~ 4907:05EA
cs=0x4907;eip=0x0005ec; 	X(INC(*(raddr(ds,0x2A6))));	// 126947 inc     byte ptr ds:2A6h ;~ 4907:05EC
cs=0x4907;eip=0x0005f0; 	T(MOV(cx, *(dw*)(raddr(ds,0x2A4))));	// 126948 mov     cx, ds:2A4h ;~ 4907:05F0
loc_57c44:
	// 8552 
cs=0x4907;eip=0x0005f4; 	T(SUB(cx, *(dw*)(raddr(ds,0x29E))));	// 126951 sub     cx, ds:29Eh ;~ 4907:05F4
cs=0x4907;eip=0x0005f8; 	X(MOV(*(dw*)(raddr(ds,0x2A8)), cx));	// 126952 mov     ds:2A8h, cx ;~ 4907:05F8
cs=0x4907;eip=0x0005fc; 	T(INC(cx));	// 126953 inc     cx ;~ 4907:05FC
cs=0x4907;eip=0x0005fd; 	R(JZ(loc_57c5a));	// 126954 jz      short loc_57C5A ;~ 4907:05FD
cs=0x4907;eip=0x0005ff; 	X(SUB(*(dw*)(raddr(ds,0x2A0)), cx));	// 126955 sub     ds:2A0h, cx ;~ 4907:05FF
cs=0x4907;eip=0x000603; 	X(SBB(*(dw*)(raddr(ds,0x2A2)), 0));	// 126956 sbb     word ptr ds:2A2h, 0 ;~ 4907:0603
cs=0x4907;eip=0x000608; 	R(JMP(loc_57c5e));	// 126957 jmp     short loc_57C5E ;~ 4907:0608
loc_57c5a:
	// 8553 
cs=0x4907;eip=0x00060a; 	X(DEC(*(dw*)(raddr(ds,0x2A2))));	// 126961 dec     word ptr ds:2A2h ;~ 4907:060A
loc_57c5e:
	// 8554 
cs=0x4907;eip=0x00060e; 	T(MOV(dh, 0x48));	// 126964 mov     dh, 48h ; 'H' ;~ 4907:060E
cs=0x4907;eip=0x000610; 	T(MOV(dl, *(raddr(ds,0x29D))));	// 126965 mov     dl, ds:29Dh ;~ 4907:0610
cs=0x4907;eip=0x000614; 	T(MOV(ax, *(dw*)(raddr(ds,0x29E))));	// 126966 mov     ax, ds:29Eh ;~ 4907:0614
cs=0x4907;eip=0x000617; 	T(MOV(cx, *(dw*)(raddr(ds,0x2A8))));	// 126967 mov     cx, ds:2A8h ;~ 4907:0617
cs=0x4907;eip=0x00061b; 	R(CALL(sub_57aa0,0));	// 126968 call    sub_57AA0 ;~ 4907:061B
cs=0x4907;eip=0x00061e; 	X(DEC(*(raddr(ds,0x2A6))));	// 126969 dec     byte ptr ds:2A6h ;~ 4907:061E
cs=0x4907;eip=0x000622; 	X(INC(*(raddr(ds,0x29D))));	// 126970 inc     byte ptr ds:29Dh ;~ 4907:0622
cs=0x4907;eip=0x000626; 	X(MOV(*(dw*)(raddr(ds,0x29E)), 0));	// 126971 mov     word ptr ds:29Eh, 0 ;~ 4907:0626
cs=0x4907;eip=0x00062c; 	T(MOV(cx, *(dw*)(raddr(ds,0x2A8))));	// 126972 mov     cx, ds:2A8h ;~ 4907:062C
cs=0x4907;eip=0x000630; 	T(MOV(al, *(raddr(ds,0x2AA))));	// 126973 mov     al, ds:2AAh ;~ 4907:0630
cs=0x4907;eip=0x000633; 	R(CALL(sub_57983,0));	// 126974 call    sub_57983 ;~ 4907:0633
cs=0x4907;eip=0x000636; 	T(MOV(al, cl));	// 126975 mov     al, cl ;~ 4907:0636
cs=0x4907;eip=0x000638; 	R(CALL(sub_5798a,0));	// 126976 call    sub_5798A ;~ 4907:0638
cs=0x4907;eip=0x00063b; 	T(MOV(al, ch));	// 126977 mov     al, ch ;~ 4907:063B
cs=0x4907;eip=0x00063d; 	R(JMP(sub_5798a));	// 126978 jmp     sub_5798A ;~ 4907:063D
sub_57c90:
	// 126985 
	cs=seg_offset(seg003);
cs=0x4907;eip=0x000640; 	T(MOV(al, *(&byte_578d8)));	// 126987 mov     al, cs:byte_578D8 ;~ 4907:0640
ret_4907_644:
	// 8555 
cs=0x4907;eip=0x000644; 	T(OR(al, 4));	// 126988 or      al, 4 ;~ 4907:0644
cs=0x4907;eip=0x000646; 	R(OUT(0x0A, al));	// 126989 out     0Ah, al         ; DMA controller, 8237A-5. ;~ 4907:0646
cs=0x4907;eip=0x000648; 	R(CALL(sub_57b74,0));	// 126993 call    sub_57B74 ;~ 4907:0648
cs=0x4907;eip=0x00064b; 	T(XOR(ax, ax));	// 126994 xor     ax, ax ;~ 4907:064B
cs=0x4907;eip=0x00064d; 	X(MOV(*(raddr(ds,0x292)), al));	// 126995 mov     ds:292h, al ;~ 4907:064D
cs=0x4907;eip=0x000650; 	X(MOV(*(dw*)(raddr(ds,0x2AB)), ax));	// 126996 mov     ds:2ABh, ax ;~ 4907:0650
cs=0x4907;eip=0x000653; 	X(MOV(*(dw*)(raddr(ds,0x283)), ax));	// 126997 mov     ds:283h, ax ;~ 4907:0653
cs=0x4907;eip=0x000656; 	T(MOV(dx, *(dw*)(raddr(ds,0x285))));	// 126998 mov     dx, ds:285h ;~ 4907:0656
cs=0x4907;eip=0x00065a; 	T(ADD(dl, 0x0E));	// 126999 add     dl, 0Eh ;~ 4907:065A
cs=0x4907;eip=0x00065d; 	R(IN(al, dx));	// 127000 in      al, dx ;~ 4907:065D
cs=0x4907;eip=0x00065e; 	R(RETN(0));	// 127001 retn ;~ 4907:065E
sub_57caf:
	// 127008 
cs=0x4907;eip=0x00065f; 	R(CALL(sub_57b9c,0));	// 127010 call    sub_57B9C ;~ 4907:065F
ret_4907_662:
	// 8556 
cs=0x4907;eip=0x000662; 	T(CMP(al, 8));	// 127011 cmp     al, 8 ;~ 4907:0662
cs=0x4907;eip=0x000664; 	R(JNC(loc_57cc2));	// 127012 jnb     short loc_57CC2 ;~ 4907:0664
cs=0x4907;eip=0x000666; 	T(CBW);	// 127013 cbw ;~ 4907:0666
cs=0x4907;eip=0x000667; 	T(MOV(bx, ax));	// 127014 mov     bx, ax ;~ 4907:0667
cs=0x4907;eip=0x000669; 	T(SHL(bx, 1));	// 127015 shl     bx, 1 ;~ 4907:0669
cs=0x4907;eip=0x00066b; 	R(CALL(__dispatch_call,*(dw*)(raddr(ds,bx+0x2D0))));	// 127016 call    word ptr [bx+2D0h] ;~ 4907:066B
cs=0x4907;eip=0x00066f; 	R(JC(sub_57caf));	// 127017 jb      short sub_57CAF ;~ 4907:066F
cs=0x4907;eip=0x000671; 	R(RETN(0));	// 127018 retn ;~ 4907:0671
loc_57cc2:
	// 8557 
cs=0x4907;eip=0x000672; 	R(CALL(sub_57cc7,0));	// 127022 call    sub_57CC7 ;~ 4907:0672
cs=0x4907;eip=0x000675; 	R(JMP(sub_57caf));	// 127023 jmp     short sub_57CAF ;~ 4907:0675
sub_57cc7:
	// 127030 
cs=0x4907;eip=0x000677; 	X(PUSH(es));	// 127032 push    es ;~ 4907:0677
ret_4907_678:
	// 8558 
cs=0x4907;eip=0x000678; 	X(PUSH(ax));	// 127033 push    ax ;~ 4907:0678
cs=0x4907;eip=0x000679; 	X(PUSH(bx));	// 127034 push    bx ;~ 4907:0679
cs=0x4907;eip=0x00067a; 	X(PUSH(dx));	// 127035 push    dx ;~ 4907:067A
cs=0x4907;eip=0x00067b; 	T(LES(bx, *(dw*)(raddr(ds,0x293))));	// 127036 les     bx, ds:293h ;~ 4907:067B
cs=0x4907;eip=0x00067f; 	T(MOV(ax, *(dw*)(raddr(es,bx+1))));	// 127037 mov     ax, es:[bx+1] ;~ 4907:067F
cs=0x4907;eip=0x000683; 	T(XOR(dx, dx));	// 127038 xor     dx, dx ;~ 4907:0683
cs=0x4907;eip=0x000685; 	T(MOV(dl, *(raddr(es,bx+3))));	// 127039 mov     dl, es:[bx+3] ;~ 4907:0685
cs=0x4907;eip=0x000689; 	T(ADD(ax, 4));	// 127040 add     ax, 4 ;~ 4907:0689
cs=0x4907;eip=0x00068c; 	T(ADC(dx, 0));	// 127041 adc     dx, 0 ;~ 4907:068C
cs=0x4907;eip=0x00068f; 	T(ADD(ax, *(dw*)(raddr(ds,0x293))));	// 127042 add     ax, ds:293h ;~ 4907:068F
cs=0x4907;eip=0x000693; 	T(ADC(dx, 0));	// 127043 adc     dx, 0 ;~ 4907:0693
cs=0x4907;eip=0x000696; 	T(ROR(dx, 1));	// 127044 ror     dx, 1 ;~ 4907:0696
cs=0x4907;eip=0x000698; 	T(ROR(dx, 1));	// 127045 ror     dx, 1 ;~ 4907:0698
cs=0x4907;eip=0x00069a; 	T(ROR(dx, 1));	// 127046 ror     dx, 1 ;~ 4907:069A
cs=0x4907;eip=0x00069c; 	T(ROR(dx, 1));	// 127047 ror     dx, 1 ;~ 4907:069C
cs=0x4907;eip=0x00069e; 	T(ADD(dx, *(dw*)(raddr(ds,0x295))));	// 127048 add     dx, ds:295h ;~ 4907:069E
cs=0x4907;eip=0x0006a2; 	T(MOV(bx, ax));	// 127049 mov     bx, ax ;~ 4907:06A2
cs=0x4907;eip=0x0006a4; 	T(SHR(bx, 1));	// 127050 shr     bx, 1 ;~ 4907:06A4
cs=0x4907;eip=0x0006a6; 	T(SHR(bx, 1));	// 127051 shr     bx, 1 ;~ 4907:06A6
cs=0x4907;eip=0x0006a8; 	T(SHR(bx, 1));	// 127052 shr     bx, 1 ;~ 4907:06A8
cs=0x4907;eip=0x0006aa; 	T(SHR(bx, 1));	// 127053 shr     bx, 1 ;~ 4907:06AA
cs=0x4907;eip=0x0006ac; 	T(ADD(dx, bx));	// 127054 add     dx, bx ;~ 4907:06AC
cs=0x4907;eip=0x0006ae; 	T(AND(ax, 0x0F));	// 127055 and     ax, 0Fh ;~ 4907:06AE
cs=0x4907;eip=0x0006b1; 	X(MOV(*(dw*)(raddr(ds,0x295)), dx));	// 127056 mov     ds:295h, dx ;~ 4907:06B1
cs=0x4907;eip=0x0006b5; 	X(MOV(*(dw*)(raddr(ds,0x293)), ax));	// 127057 mov     ds:293h, ax ;~ 4907:06B5
cs=0x4907;eip=0x0006b8; 	X(POP(dx));	// 127058 pop     dx ;~ 4907:06B8
cs=0x4907;eip=0x0006b9; 	X(POP(bx));	// 127059 pop     bx ;~ 4907:06B9
cs=0x4907;eip=0x0006ba; 	X(POP(ax));	// 127060 pop     ax ;~ 4907:06BA
cs=0x4907;eip=0x0006bb; 	X(POP(es));	// 127061 pop     es ;~ 4907:06BB
cs=0x4907;eip=0x0006bc; 	R(RETN(0));	// 127062 retn ;~ 4907:06BC
sub_57d0d:
	// 127069 
cs=0x4907;eip=0x0006bd; 	X(PUSH(ax));	// 127070 push    ax ;~ 4907:06BD
ret_4907_6be:
	// 8559 
cs=0x4907;eip=0x0006be; 	T(SHR(ax, 1));	// 127071 shr     ax, 1 ;~ 4907:06BE
cs=0x4907;eip=0x0006c0; 	T(SHR(ax, 1));	// 127072 shr     ax, 1 ;~ 4907:06C0
cs=0x4907;eip=0x0006c2; 	T(SHR(ax, 1));	// 127073 shr     ax, 1 ;~ 4907:06C2
cs=0x4907;eip=0x0006c4; 	T(SHR(ax, 1));	// 127074 shr     ax, 1 ;~ 4907:06C4
cs=0x4907;eip=0x0006c6; 	T(ADD(dx, ax));	// 127075 add     dx, ax ;~ 4907:06C6
cs=0x4907;eip=0x0006c8; 	X(POP(ax));	// 127076 pop     ax ;~ 4907:06C8
cs=0x4907;eip=0x0006c9; 	T(AND(ax, 0x0F));	// 127077 and     ax, 0Fh ;~ 4907:06C9
cs=0x4907;eip=0x0006cc; 	R(RETN(0));	// 127078 retn ;~ 4907:06CC
seg003_6cd_proc:
	// 127082 
cs=0x4907;eip=0x0006cd; 	X(PUSH(es));	// 127082 push    es ;~ 4907:06CD
loc_57d1e:
	// 8560 
cs=0x4907;eip=0x0006ce; 	T(LES(si, *(dw*)(raddr(ds,0x118))));	// 127085 les     si, ds:118h ;~ 4907:06CE
cs=0x4907;eip=0x0006d2; 	X(MOV(*(raddr(es,si+6)), 0));	// 127086 mov     byte ptr es:[si+6], 0 ;~ 4907:06D2
cs=0x4907;eip=0x0006d7; 	T(MOV(al, *(raddr(es,si+7))));	// 127087 mov     al, es:[si+7] ;~ 4907:06D7
cs=0x4907;eip=0x0006db; 	T(SHL(al, 1));	// 127088 shl     al, 1 ;~ 4907:06DB
cs=0x4907;eip=0x0006dd; 	R(JC(loc_57d83));	// 127089 jb      short loc_57D83 ;~ 4907:06DD
cs=0x4907;eip=0x0006df; 	T(LES(si, *(dw*)(raddr(ds,0x11C))));	// 127090 les     si, ds:11Ch ;~ 4907:06DF
cs=0x4907;eip=0x0006e3; 	T(CMP(*(raddr(es,si+6)), 2));	// 127091 cmp     byte ptr es:[si+6], 2 ;~ 4907:06E3
cs=0x4907;eip=0x0006e8; 	R(JZ(loc_57d5f));	// 127092 jz      short loc_57D5F ;~ 4907:06E8
cs=0x4907;eip=0x0006ea; 	T(SHL(al, 1));	// 127093 shl     al, 1 ;~ 4907:06EA
cs=0x4907;eip=0x0006ec; 	R(JNC(loc_57d88));	// 127094 jnb     short loc_57D88 ;~ 4907:06EC
cs=0x4907;eip=0x0006ee; 	T(LES(si, *(dw*)(raddr(ds,0x118))));	// 127095 les     si, ds:118h ;~ 4907:06EE
cs=0x4907;eip=0x0006f2; 	X(MOV(*(raddr(es,si+6)), 3));	// 127096 mov     byte ptr es:[si+6], 3 ;~ 4907:06F2
cs=0x4907;eip=0x0006f7; 	T(LES(si, *(dw*)(raddr(es,si))));	// 127097 les     si, es:[si] ;~ 4907:06F7
cs=0x4907;eip=0x0006fa; 	T(CMP(*(raddr(es,si+2)), 2));	// 127098 cmp     byte ptr es:[si+2], 2 ;~ 4907:06FA
cs=0x4907;eip=0x0006ff; 	R(JNZ(loc_57d54));	// 127099 jnz     short loc_57D54 ;~ 4907:06FF
cs=0x4907;eip=0x000701; 	T(ADD(si, 2));	// 127100 add     si, 2 ;~ 4907:0701
loc_57d54:
	// 8561 
cs=0x4907;eip=0x000704; 	X(MOV(*(dw*)(raddr(ds,0x293)), si));	// 127103 mov     ds:293h, si ;~ 4907:0704
cs=0x4907;eip=0x000708; 	X(MOV(*(dw*)(raddr(ds,0x295)), es));	// 127104 mov     word ptr ds:295h, es ;~ 4907:0708
cs=0x4907;eip=0x00070c; 	X(POP(es));	// 127105 pop     es ;~ 4907:070C
cs=0x4907;eip=0x00070d; 	T(STC);	// 127106 stc ;~ 4907:070D
cs=0x4907;eip=0x00070e; 	R(RETN(0));	// 127107 retn ;~ 4907:070E
loc_57d5f:
	// 8562 
cs=0x4907;eip=0x00070f; 	X(MOV(*(dw*)(raddr(ds,0x118)), si));	// 127111 mov     ds:118h, si ;~ 4907:070F
cs=0x4907;eip=0x000713; 	X(MOV(*(dw*)(raddr(ds,0x11A)), es));	// 127112 mov     word ptr ds:11Ah, es ;~ 4907:0713
cs=0x4907;eip=0x000717; 	X(MOV(*(raddr(es,si+6)), 3));	// 127113 mov     byte ptr es:[si+6], 3 ;~ 4907:0717
cs=0x4907;eip=0x00071c; 	T(CMP(*(dw*)(raddr(es,si+4)), 3));	// 127114 cmp     word ptr es:[si+4], 3 ;~ 4907:071C
cs=0x4907;eip=0x000721; 	R(JC(loc_57d1e));	// 127115 jb      short loc_57D1E ;~ 4907:0721
cs=0x4907;eip=0x000723; 	T(LES(ax, *(dw*)(raddr(es,si))));	// 127116 les     ax, es:[si] ;~ 4907:0723
cs=0x4907;eip=0x000726; 	T(ADD(ax, 2));	// 127117 add     ax, 2 ;~ 4907:0726
cs=0x4907;eip=0x000729; 	X(MOV(*(dw*)(raddr(ds,0x293)), ax));	// 127118 mov     ds:293h, ax ;~ 4907:0729
cs=0x4907;eip=0x00072c; 	X(MOV(*(dw*)(raddr(ds,0x295)), es));	// 127119 mov     word ptr ds:295h, es ;~ 4907:072C
cs=0x4907;eip=0x000730; 	X(POP(es));	// 127120 pop     es ;~ 4907:0730
cs=0x4907;eip=0x000731; 	T(STC);	// 127121 stc ;~ 4907:0731
cs=0x4907;eip=0x000732; 	R(RETN(0));	// 127122 retn ;~ 4907:0732
loc_57d83:
	// 8563 
cs=0x4907;eip=0x000733; 	X(MOV(*(raddr(ds,0x2FE)), 1));	// 127126 mov     byte ptr ds:2FEh, 1 ;~ 4907:0733
loc_57d88:
	// 8564 
cs=0x4907;eip=0x000738; 	X(MOV(*(raddr(ds,0x2A7)), 1));	// 127129 mov     byte ptr ds:2A7h, 1 ;~ 4907:0738
cs=0x4907;eip=0x00073d; 	X(POP(es));	// 127130 pop     es ;~ 4907:073D
cs=0x4907;eip=0x00073e; 	T(CLC);	// 127131 clc ;~ 4907:073E
cs=0x4907;eip=0x00073f; 	R(RETN(0));	// 127132 retn ;~ 4907:073F
ret_4907_740:
	// 8565 
cs=0x4907;eip=0x000740; 	X(PUSH(es));	// 127134 push    es ;~ 4907:0740
cs=0x4907;eip=0x000741; 	T(LES(di, *(dw*)(raddr(ds,0x293))));	// 127135 les     di, ds:293h ;~ 4907:0741
cs=0x4907;eip=0x000745; 	T(MOV(al, 0x40));	// 127136 mov     al, 40h ; '@' ;~ 4907:0745
cs=0x4907;eip=0x000747; 	R(CALL(sub_57983,0));	// 127137 call    sub_57983 ;~ 4907:0747
cs=0x4907;eip=0x00074a; 	T(MOV(al, *(raddr(es,di+4))));	// 127138 mov     al, es:[di+4] ;~ 4907:074A
cs=0x4907;eip=0x00074e; 	X(MOV(*(raddr(ds,0x2FC)), al));	// 127139 mov     ds:2FCh, al ;~ 4907:074E
cs=0x4907;eip=0x000751; 	R(CALL(sub_5798a,0));	// 127140 call    sub_5798A ;~ 4907:0751
cs=0x4907;eip=0x000754; 	T(MOV(al, *(raddr(es,di+5))));	// 127141 mov     al, es:[di+5] ;~ 4907:0754
cs=0x4907;eip=0x000758; 	X(MOV(*(raddr(ds,0x2FD)), al));	// 127142 mov     ds:2FDh, al ;~ 4907:0758
cs=0x4907;eip=0x00075b; 	T(MOV(bx, 0x2C5));	// 127143 mov     bx, 2C5h ;~ 4907:075B
cs=0x4907;eip=0x00075e; 	T(XLAT);	// 127144 xlat ;~ 4907:075E
cs=0x4907;eip=0x00075f; 	X(MOV(*(raddr(ds,0x2AA)), al));	// 127145 mov     ds:2AAh, al ;~ 4907:075F
cs=0x4907;eip=0x000762; 	X(POP(es));	// 127146 pop     es ;~ 4907:0762
cs=0x4907;eip=0x000763; 	T(MOV(ax, 6));	// 127147 mov     ax, 6 ;~ 4907:0763
cs=0x4907;eip=0x000766; 	R(CALL(sub_57ba6,0));	// 127148 call    sub_57BA6 ;~ 4907:0766
cs=0x4907;eip=0x000769; 	R(CALL(sub_57c32,0));	// 127149 call    sub_57C32 ;~ 4907:0769
cs=0x4907;eip=0x00076c; 	R(CALL(sub_57dc1,0));	// 127150 call    sub_57DC1 ;~ 4907:076C
cs=0x4907;eip=0x00076f; 	T(CLC);	// 127151 clc ;~ 4907:076F
cs=0x4907;eip=0x000770; 	R(RETN(0));	// 127152 retn ;~ 4907:0770
sub_57dc1:
	// 127157 
cs=0x4907;eip=0x000771; 	T(MOV(al, *(raddr(ds,0x2AA))));	// 127159 mov     al, ds:2AAh ;~ 4907:0771
ret_4907_774:
	// 8566 
cs=0x4907;eip=0x000774; 	T(CMP(al, 0x61));	// 127160 cmp     al, 61h ; 'a' ;~ 4907:0774
cs=0x4907;eip=0x000776; 	R(JC(loc_57dd2));	// 127161 jb      short loc_57DD2 ;~ 4907:0776
cs=0x4907;eip=0x000778; 	T(CMP(al, 0x67));	// 127162 cmp     al, 67h ; 'g' ;~ 4907:0778
cs=0x4907;eip=0x00077a; 	R(JA(loc_57dd2));	// 127163 ja      short loc_57DD2 ;~ 4907:077A
cs=0x4907;eip=0x00077c; 	X(OR(*(raddr(ds,0x2AA)), 8));	// 127164 or      byte ptr ds:2AAh, 8 ;~ 4907:077C
cs=0x4907;eip=0x000781; 	R(RETN(0));	// 127165 retn ;~ 4907:0781
loc_57dd2:
	// 8567 
cs=0x4907;eip=0x000782; 	X(AND(*(raddr(ds,0x2AA)), 0x0FE));	// 127170 and     byte ptr ds:2AAh, 0FEh ;~ 4907:0782
cs=0x4907;eip=0x000787; 	R(RETN(0));	// 127171 retn ;~ 4907:0787
seg003_788_proc:
	// 127175 
cs=0x4907;eip=0x000788; 	T(MOV(ax, 4));	// 127175 mov     ax, 4 ;~ 4907:0788
ret_4907_78b:
	// 8568 
cs=0x4907;eip=0x00078b; 	R(CALL(sub_57ba6,0));	// 127176 call    sub_57BA6 ;~ 4907:078B
cs=0x4907;eip=0x00078e; 	R(CALL(sub_57dc1,0));	// 127177 call    sub_57DC1 ;~ 4907:078E
cs=0x4907;eip=0x000791; 	R(CALL(sub_57c32,0));	// 127178 call    sub_57C32 ;~ 4907:0791
cs=0x4907;eip=0x000794; 	T(CLC);	// 127179 clc ;~ 4907:0794
cs=0x4907;eip=0x000795; 	R(RETN(0));	// 127180 retn ;~ 4907:0795
ret_4907_796:
	// 8569 
cs=0x4907;eip=0x000796; 	T(MOV(al, 0x40));	// 127182 mov     al, 40h ; '@' ;~ 4907:0796
cs=0x4907;eip=0x000798; 	R(CALL(sub_57983,0));	// 127183 call    sub_57983 ;~ 4907:0798
cs=0x4907;eip=0x00079b; 	X(PUSH(es));	// 127184 push    es ;~ 4907:079B
cs=0x4907;eip=0x00079c; 	T(LES(bx, *(dw*)(raddr(ds,0x293))));	// 127185 les     bx, ds:293h ;~ 4907:079C
cs=0x4907;eip=0x0007a0; 	T(MOV(al, *(raddr(es,bx+6))));	// 127186 mov     al, es:[bx+6] ;~ 4907:07A0
cs=0x4907;eip=0x0007a4; 	R(CALL(sub_5798a,0));	// 127187 call    sub_5798A ;~ 4907:07A4
cs=0x4907;eip=0x0007a7; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 127188 mov     ax, es:[bx+4] ;~ 4907:07A7
cs=0x4907;eip=0x0007ab; 	X(POP(es));	// 127189 pop     es ;~ 4907:07AB
cs=0x4907;eip=0x0007ac; 	T(MOV(bx, ax));	// 127190 mov     bx, ax ;~ 4907:07AC
cs=0x4907;eip=0x0007ae; 	T(MOV(al, 0x80));	// 127191 mov     al, 80h ; '€' ;~ 4907:07AE
cs=0x4907;eip=0x0007b0; 	R(CALL(sub_5798a,0));	// 127192 call    sub_5798A ;~ 4907:07B0
cs=0x4907;eip=0x0007b3; 	T(MOV(al, bl));	// 127193 mov     al, bl ;~ 4907:07B3
cs=0x4907;eip=0x0007b5; 	R(CALL(sub_5798a,0));	// 127194 call    sub_5798A ;~ 4907:07B5
cs=0x4907;eip=0x0007b8; 	T(MOV(al, bh));	// 127195 mov     al, bh ;~ 4907:07B8
cs=0x4907;eip=0x0007ba; 	R(CALL(sub_5798a,0));	// 127196 call    sub_5798A ;~ 4907:07BA
cs=0x4907;eip=0x0007bd; 	T(CLC);	// 127197 clc ;~ 4907:07BD
cs=0x4907;eip=0x0007be; 	R(RETN(0));	// 127198 retn ;~ 4907:07BE
ret_4907_7bf:
	// 8570 
cs=0x4907;eip=0x0007bf; 	X(PUSH(ds));	// 127200 push    ds ;~ 4907:07BF
cs=0x4907;eip=0x0007c0; 	T(LDS(bx, *(dw*)(raddr(ds,0x293))));	// 127201 lds     bx, ds:293h ;~ 4907:07C0
cs=0x4907;eip=0x0007c4; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 127202 mov     ax, [bx+4] ;~ 4907:07C4
cs=0x4907;eip=0x0007c7; 	X(POP(ds));	// 127203 pop     ds ;~ 4907:07C7
cs=0x4907;eip=0x0007c8; 	X(MOV(*(dw*)(raddr(ds,0x283)), ax));	// 127204 mov     ds:283h, ax ;~ 4907:07C8
cs=0x4907;eip=0x0007cb; 	R(CALL(sub_57cc7,0));	// 127205 call    sub_57CC7 ;~ 4907:07CB
cs=0x4907;eip=0x0007ce; 	T(STC);	// 127206 stc ;~ 4907:07CE
cs=0x4907;eip=0x0007cf; 	R(RETN(0));	// 127207 retn ;~ 4907:07CF
ret_4907_7d0:
	// 8571 
cs=0x4907;eip=0x0007d0; 	X(PUSH(ds));	// 127209 push    ds ;~ 4907:07D0
cs=0x4907;eip=0x0007d1; 	T(LDS(bx, *(dw*)(raddr(ds,0x293))));	// 127210 lds     bx, ds:293h ;~ 4907:07D1
cs=0x4907;eip=0x0007d5; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 127211 mov     ax, [bx+4] ;~ 4907:07D5
cs=0x4907;eip=0x0007d8; 	X(POP(ds));	// 127212 pop     ds ;~ 4907:07D8
cs=0x4907;eip=0x0007d9; 	X(ADD(*(dw*)(raddr(ds,0x2AB)), 2));	// 127213 add     word ptr ds:2ABh, 2 ;~ 4907:07D9
cs=0x4907;eip=0x0007de; 	T(MOV(bx, *(dw*)(raddr(ds,0x2AB))));	// 127214 mov     bx, ds:2ABh ;~ 4907:07DE
cs=0x4907;eip=0x0007e2; 	X(MOV(*(dw*)(raddr(ds,bx+0x2AB)), ax));	// 127215 mov     [bx+2ABh], ax ;~ 4907:07E2
cs=0x4907;eip=0x0007e6; 	X(PUSH(bx));	// 127216 push    bx ;~ 4907:07E6
cs=0x4907;eip=0x0007e7; 	R(CALL(sub_57cc7,0));	// 127217 call    sub_57CC7 ;~ 4907:07E7
cs=0x4907;eip=0x0007ea; 	T(MOV(si, 0x293));	// 127218 mov     si, 293h ;~ 4907:07EA
cs=0x4907;eip=0x0007ed; 	T(MOV(di, 0x2B3));	// 127219 mov     di, 2B3h ;~ 4907:07ED
cs=0x4907;eip=0x0007f0; 	X(POP(bx));	// 127220 pop     bx ;~ 4907:07F0
cs=0x4907;eip=0x0007f1; 	T(ADD(di, bx));	// 127221 add     di, bx ;~ 4907:07F1
cs=0x4907;eip=0x0007f3; 	T(ADD(di, bx));	// 127222 add     di, bx ;~ 4907:07F3
cs=0x4907;eip=0x0007f5; 	X(MOVSW);	// 127223 movsw ;~ 4907:07F5
cs=0x4907;eip=0x0007f6; 	X(MOVSW);	// 127224 movsw ;~ 4907:07F6
cs=0x4907;eip=0x0007f7; 	T(STC);	// 127225 stc ;~ 4907:07F7
cs=0x4907;eip=0x0007f8; 	R(RETN(0));	// 127226 retn ;~ 4907:07F8
ret_4907_7f9:
	// 8572 
cs=0x4907;eip=0x0007f9; 	T(MOV(bx, *(dw*)(raddr(ds,0x2AB))));	// 127228 mov     bx, ds:2ABh ;~ 4907:07F9
cs=0x4907;eip=0x0007fd; 	T(OR(bx, bx));	// 127229 or      bx, bx ;~ 4907:07FD
cs=0x4907;eip=0x0007ff; 	R(JZ(loc_57e76));	// 127230 jz      short loc_57E76 ;~ 4907:07FF
cs=0x4907;eip=0x000801; 	T(CMP(*(dw*)(raddr(ds,bx+0x2AB)), 0));	// 127231 cmp     word ptr [bx+2ABh], 0 ;~ 4907:0801
cs=0x4907;eip=0x000806; 	R(JZ(loc_57e71));	// 127232 jz      short loc_57E71 ;~ 4907:0806
cs=0x4907;eip=0x000808; 	T(MOV(di, 0x293));	// 127233 mov     di, 293h ;~ 4907:0808
cs=0x4907;eip=0x00080b; 	T(MOV(si, 0x2B3));	// 127234 mov     si, 2B3h ;~ 4907:080B
cs=0x4907;eip=0x00080e; 	T(ADD(si, bx));	// 127235 add     si, bx ;~ 4907:080E
cs=0x4907;eip=0x000810; 	T(ADD(si, bx));	// 127236 add     si, bx ;~ 4907:0810
cs=0x4907;eip=0x000812; 	X(MOVSW);	// 127237 movsw ;~ 4907:0812
cs=0x4907;eip=0x000813; 	X(MOVSW);	// 127238 movsw ;~ 4907:0813
cs=0x4907;eip=0x000814; 	T(CMP(*(dw*)(raddr(ds,bx+0x2AB)), 0x0FFFF));	// 127239 cmp     word ptr [bx+2ABh], 0FFFFh ;~ 4907:0814
cs=0x4907;eip=0x000819; 	R(JZ(loc_57e79));	// 127240 jz      short loc_57E79 ;~ 4907:0819
cs=0x4907;eip=0x00081b; 	X(DEC(*(dw*)(raddr(ds,bx+0x2AB))));	// 127241 dec     word ptr [bx+2ABh] ;~ 4907:081B
cs=0x4907;eip=0x00081f; 	R(JMP(loc_57e79));	// 127242 jmp     short loc_57E79 ;~ 4907:081F
loc_57e71:
	// 8573 
cs=0x4907;eip=0x000821; 	X(SUB(*(dw*)(raddr(ds,0x2AB)), 2));	// 127246 sub     word ptr ds:2ABh, 2 ;~ 4907:0821
loc_57e76:
	// 8574 
cs=0x4907;eip=0x000826; 	R(CALL(sub_57cc7,0));	// 127249 call    sub_57CC7 ;~ 4907:0826
loc_57e79:
	// 8575 
cs=0x4907;eip=0x000829; 	T(STC);	// 127253 stc ;~ 4907:0829
cs=0x4907;eip=0x00082a; 	R(RETN(0));	// 127254 retn ;~ 4907:082A
sub_57e7b:
	// 127259 
cs=0x4907;eip=0x00082b; 	X(PUSH(cx));	// 127261 push    cx ;~ 4907:082B
ret_4907_82c:
	// 8576 
cs=0x4907;eip=0x00082c; 	X(PUSH(dx));	// 127262 push    dx ;~ 4907:082C
cs=0x4907;eip=0x00082d; 	X(PUSH(si));	// 127263 push    si ;~ 4907:082D
cs=0x4907;eip=0x00082e; 	X(PUSH(di));	// 127264 push    di ;~ 4907:082E
cs=0x4907;eip=0x00082f; 	X(PUSH(bp));	// 127265 push    bp ;~ 4907:082F
cs=0x4907;eip=0x000830; 	X(PUSH(ds));	// 127266 push    ds ;~ 4907:0830
cs=0x4907;eip=0x000831; 	X(PUSH(es));	// 127267 push    es ;~ 4907:0831
cs=0x4907;eip=0x000832; 	X(PUSH(cs));	// 127268 push    cs ;~ 4907:0832
cs=0x4907;eip=0x000833; 	X(POP(ds));	// 127269 pop     ds ;~ 4907:0833
cs=0x4907;eip=0x000834; 	X(MOV(word_578df, es));	// 127271 mov     word_578DF, es ;~ 4907:0834
cs=0x4907;eip=0x000838; 	X(PUSH(cs));	// 127272 push    cs ;~ 4907:0838
cs=0x4907;eip=0x000839; 	X(POP(es));	// 127273 pop     es ;~ 4907:0839
cs=0x4907;eip=0x00083a; 	T(CMP(bx, 0x0E));	// 127275 cmp     bx, 0Eh ;~ 4907:083A
cs=0x4907;eip=0x00083d; 	R(JNC(loc_57ea8));	// 127276 jnb     short loc_57EA8 ;~ 4907:083D
cs=0x4907;eip=0x00083f; 	T(CMP(bl, 4));	// 127277 cmp     bl, 4 ;~ 4907:083F
cs=0x4907;eip=0x000842; 	R(JC(loc_57ea0));	// 127278 jb      short loc_57EA0 ;~ 4907:0842
cs=0x4907;eip=0x000844; 	T(CMP(bl, 0x0D));	// 127279 cmp     bl, 0Dh ;~ 4907:0844
cs=0x4907;eip=0x000847; 	R(JZ(loc_57ea0));	// 127280 jz      short loc_57EA0 ;~ 4907:0847
cs=0x4907;eip=0x000849; 	T(CMP(byte_578de, 0));	// 127281 cmp     byte_578DE, 0 ;~ 4907:0849
cs=0x4907;eip=0x00084e; 	R(JZ(loc_57ea8));	// 127282 jz      short loc_57EA8 ;~ 4907:084E
loc_57ea0:
	// 8577 
cs=0x4907;eip=0x000850; 	T(SHL(bx, 1));	// 127286 shl     bx, 1 ;~ 4907:0850
cs=0x4907;eip=0x000852; 	R(CALL(__dispatch_call,*(dw*)(((db*)&funcs_57ea2)+bx)));	// 127287 call    funcs_57EA2[bx] ;~ 4907:0852
cs=0x4907;eip=0x000856; 	R(JMP(loc_57eab));	// 127288 jmp     short loc_57EAB ;~ 4907:0856
loc_57ea8:
	// 8578 
cs=0x4907;eip=0x000858; 	T(MOV(ax, 0x0FFFF));	// 127293 mov     ax, 0FFFFh ;~ 4907:0858
loc_57eab:
	// 8579 
cs=0x4907;eip=0x00085b; 	X(POP(es));	// 127296 pop     es ;~ 4907:085B
cs=0x4907;eip=0x00085c; 	X(POP(ds));	// 127298 pop     ds ;~ 4907:085C
cs=0x4907;eip=0x00085d; 	X(POP(bp));	// 127300 pop     bp ;~ 4907:085D
cs=0x4907;eip=0x00085e; 	X(POP(di));	// 127301 pop     di ;~ 4907:085E
cs=0x4907;eip=0x00085f; 	X(POP(si));	// 127302 pop     si ;~ 4907:085F
cs=0x4907;eip=0x000860; 	X(POP(dx));	// 127303 pop     dx ;~ 4907:0860
cs=0x4907;eip=0x000861; 	X(POP(cx));	// 127304 pop     cx ;~ 4907:0861
cs=0x4907;eip=0x000862; 	R(RETN(0));	// 127305 retn ;~ 4907:0862
sub_57eb3:
	// 127312 
cs=0x4907;eip=0x000863; 	T(MOV(ax, 0x10D));	// 127314 mov     ax, 10Dh ;~ 4907:0863
ret_4907_866:
	// 8580 
cs=0x4907;eip=0x000866; 	R(RETN(0));	// 127315 retn ;~ 4907:0866
sub_57eb7:
	// 127322 
cs=0x4907;eip=0x000867; 	T(AND(ax, 0x0FFF8));	// 127324 and     ax, 0FFF8h ;~ 4907:0867
ret_4907_86a:
	// 8581 
cs=0x4907;eip=0x00086a; 	T(MOV(bx, ax));	// 127325 mov     bx, ax ;~ 4907:086A
cs=0x4907;eip=0x00086c; 	T(SUB(ax, 0x210));	// 127326 sub     ax, 210h ;~ 4907:086C
cs=0x4907;eip=0x00086f; 	T(CMP(ax, 0x50));	// 127327 cmp     ax, 50h ; 'P' ;~ 4907:086F
cs=0x4907;eip=0x000872; 	R(JA(sub_57f00));	// 127328 ja      short sub_57F00 ;~ 4907:0872
cs=0x4907;eip=0x000874; 	X(MOV(*(dw*)(raddr(ds,0x285)), bx));	// 127329 mov     ds:285h, bx ;~ 4907:0874
cs=0x4907;eip=0x000878; 	T(XOR(ax, ax));	// 127330 xor     ax, ax ;~ 4907:0878
cs=0x4907;eip=0x00087a; 	R(RETN(0));	// 127331 retn ;~ 4907:087A
sub_57ecb:
	// 127338 
cs=0x4907;eip=0x00087b; 	T(CMP(al, 0x0A));	// 127340 cmp     al, 0Ah ;~ 4907:087B
ret_4907_87d:
	// 8582 
cs=0x4907;eip=0x00087d; 	R(JZ(loc_57edf));	// 127341 jz      short loc_57EDF ;~ 4907:087D
cs=0x4907;eip=0x00087f; 	T(CMP(al, 7));	// 127342 cmp     al, 7 ;~ 4907:087F
cs=0x4907;eip=0x000881; 	R(JZ(loc_57edf));	// 127343 jz      short loc_57EDF ;~ 4907:0881
cs=0x4907;eip=0x000883; 	T(CMP(al, 5));	// 127344 cmp     al, 5 ;~ 4907:0883
cs=0x4907;eip=0x000885; 	R(JZ(loc_57edf));	// 127345 jz      short loc_57EDF ;~ 4907:0885
cs=0x4907;eip=0x000887; 	T(CMP(al, 3));	// 127346 cmp     al, 3 ;~ 4907:0887
cs=0x4907;eip=0x000889; 	R(JZ(loc_57edf));	// 127347 jz      short loc_57EDF ;~ 4907:0889
cs=0x4907;eip=0x00088b; 	T(CMP(al, 2));	// 127348 cmp     al, 2 ;~ 4907:088B
cs=0x4907;eip=0x00088d; 	R(JNZ(sub_57f00));	// 127349 jnz     short sub_57F00 ;~ 4907:088D
loc_57edf:
	// 8583 
cs=0x4907;eip=0x00088f; 	X(MOV(*(raddr(ds,0x287)), al));	// 127353 mov     ds:287h, al ;~ 4907:088F
cs=0x4907;eip=0x000892; 	T(XOR(ax, ax));	// 127354 xor     ax, ax ;~ 4907:0892
cs=0x4907;eip=0x000894; 	R(RETN(0));	// 127355 retn ;~ 4907:0894
sub_57ee5:
	// 127362 
cs=0x4907;eip=0x000895; 	T(AND(al, 7));	// 127364 and     al, 7 ;~ 4907:0895
ret_4907_897:
	// 8584 
cs=0x4907;eip=0x000897; 	T(DEC(al));	// 127365 dec     al ;~ 4907:0897
cs=0x4907;eip=0x000899; 	T(CMP(al, 3));	// 127366 cmp     al, 3 ;~ 4907:0899
cs=0x4907;eip=0x00089b; 	R(JA(sub_57f00));	// 127367 ja      short sub_57F00 ;~ 4907:089B
cs=0x4907;eip=0x00089d; 	T(CMP(al, 2));	// 127368 cmp     al, 2 ;~ 4907:089D
cs=0x4907;eip=0x00089f; 	R(JZ(sub_57f00));	// 127369 jz      short sub_57F00 ;~ 4907:089F
cs=0x4907;eip=0x0008a1; 	X(MOV(*(raddr(ds,0x288)), al));	// 127370 mov     ds:288h, al ;~ 4907:08A1
cs=0x4907;eip=0x0008a4; 	X(PUSH(bx));	// 127371 push    bx ;~ 4907:08A4
cs=0x4907;eip=0x0008a5; 	T(MOV(bx, 0x28A));	// 127372 mov     bx, 28Ah ;~ 4907:08A5
cs=0x4907;eip=0x0008a8; 	T(XLAT);	// 127373 xlat ;~ 4907:08A8
cs=0x4907;eip=0x0008a9; 	X(MOV(*(raddr(ds,0x289)), al));	// 127374 mov     ds:289h, al ;~ 4907:08A9
cs=0x4907;eip=0x0008ac; 	X(POP(bx));	// 127375 pop     bx ;~ 4907:08AC
cs=0x4907;eip=0x0008ad; 	T(XOR(ax, ax));	// 127376 xor     ax, ax ;~ 4907:08AD
cs=0x4907;eip=0x0008af; 	R(RETN(0));	// 127377 retn ;~ 4907:08AF
sub_57f00:
	// 127384 
cs=0x4907;eip=0x0008b0; 	T(MOV(ax, 0x0FFFF));	// 127386 mov     ax, 0FFFFh ;~ 4907:08B0
ret_4907_8b3:
	// 8585 
cs=0x4907;eip=0x0008b3; 	R(RETN(0));	// 127387 retn ;~ 4907:08B3
sub_57f04:
	// 127394 
cs=0x4907;eip=0x0008b4; 	X(PUSHF);	// 127396 pushf ;~ 4907:08B4
ret_4907_8b5:
	// 8586 
cs=0x4907;eip=0x0008b5; 	T(STI);	// 127397 sti ;~ 4907:08B5
cs=0x4907;eip=0x0008b6; 	R(CALL(sub_579ac,0));	// 127398 call    sub_579AC ;~ 4907:08B6
cs=0x4907;eip=0x0008b9; 	R(JNZ(loc_57f21));	// 127399 jnz     short loc_57F21 ;~ 4907:08B9
cs=0x4907;eip=0x0008bb; 	R(CALL(sub_579d5,0));	// 127400 call    sub_579D5 ;~ 4907:08BB
cs=0x4907;eip=0x0008be; 	R(JNZ(loc_57f21));	// 127401 jnz     short loc_57F21 ;~ 4907:08BE
cs=0x4907;eip=0x0008c0; 	R(CALL(sub_57a6c,0));	// 127402 call    sub_57A6C ;~ 4907:08C0
cs=0x4907;eip=0x0008c3; 	R(JNZ(loc_57f21));	// 127403 jnz     short loc_57F21 ;~ 4907:08C3
cs=0x4907;eip=0x0008c5; 	R(CALL(sub_57a21,0));	// 127404 call    sub_57A21 ;~ 4907:08C5
cs=0x4907;eip=0x0008c8; 	R(JNZ(loc_57f21));	// 127405 jnz     short loc_57F21 ;~ 4907:08C8
cs=0x4907;eip=0x0008ca; 	T(MOV(al, 1));	// 127406 mov     al, 1 ;~ 4907:08CA
cs=0x4907;eip=0x0008cc; 	R(CALL(sub_57f23,0));	// 127407 call    sub_57F23 ;~ 4907:08CC
cs=0x4907;eip=0x0008cf; 	T(XOR(ax, ax));	// 127408 xor     ax, ax ;~ 4907:08CF
loc_57f21:
	// 8587 
cs=0x4907;eip=0x0008d1; 	X(POPF);	// 127412 popf ;~ 4907:08D1
cs=0x4907;eip=0x0008d2; 	R(RETN(0));	// 127413 retn ;~ 4907:08D2
sub_57f23:
	// 127420 
cs=0x4907;eip=0x0008d3; 	T(MOV(dx, *(dw*)(raddr(ds,0x285))));	// 127423 mov     dx, ds:285h ;~ 4907:08D3
ret_4907_8d7:
	// 8588 
cs=0x4907;eip=0x0008d7; 	T(ADD(dl, 0x0C));	// 127424 add     dl, 0Ch ;~ 4907:08D7
cs=0x4907;eip=0x0008da; 	T(OR(al, al));	// 127425 or      al, al ;~ 4907:08DA
cs=0x4907;eip=0x0008dc; 	T(MOV(al, 0x0D1));	// 127426 mov     al, 0D1h ; 'Ñ' ;~ 4907:08DC
cs=0x4907;eip=0x0008de; 	R(JNZ(loc_57f32));	// 127427 jnz     short loc_57F32 ;~ 4907:08DE
cs=0x4907;eip=0x0008e0; 	T(MOV(al, 0x0D3));	// 127428 mov     al, 0D3h ; 'Ó' ;~ 4907:08E0
loc_57f32:
	// 8589 
cs=0x4907;eip=0x0008e2; 	R(CALL(sub_5798a,0));	// 127431 call    sub_5798A ;~ 4907:08E2
cs=0x4907;eip=0x0008e5; 	T(XOR(ax, ax));	// 127432 xor     ax, ax ;~ 4907:08E5
cs=0x4907;eip=0x0008e7; 	R(RETN(0));	// 127433 retn ;~ 4907:08E7
sub_57f38:
	// 127440 
cs=0x4907;eip=0x0008e8; 	T(CMP(*(raddr(ds,0x292)), 0));	// 127442 cmp     byte ptr ds:292h, 0 ;~ 4907:08E8
ret_4907_8ed:
	// 8590 
cs=0x4907;eip=0x0008ed; 	R(JNZ(sub_57f00));	// 127443 jnz     short sub_57F00 ;~ 4907:08ED
cs=0x4907;eip=0x0008ef; 	X(INC(*(raddr(ds,0x292))));	// 127444 inc     byte ptr ds:292h ;~ 4907:08EF
cs=0x4907;eip=0x0008f3; 	T(MOV(dx, *(dw*)(raddr(ds,0x28F))));	// 127445 mov     dx, ds:28Fh ;~ 4907:08F3
cs=0x4907;eip=0x0008f7; 	T(MOV(ax, di));	// 127446 mov     ax, di ;~ 4907:08F7
cs=0x4907;eip=0x0008f9; 	R(CALL(sub_57d0d,0));	// 127447 call    sub_57D0D ;~ 4907:08F9
cs=0x4907;eip=0x0008fc; 	X(MOV(*(dw*)(raddr(ds,0x295)), dx));	// 127448 mov     ds:295h, dx ;~ 4907:08FC
cs=0x4907;eip=0x000900; 	X(MOV(*(dw*)(raddr(ds,0x293)), ax));	// 127449 mov     ds:293h, ax ;~ 4907:0900
cs=0x4907;eip=0x000903; 	T(XOR(ax, ax));	// 127450 xor     ax, ax ;~ 4907:0903
cs=0x4907;eip=0x000905; 	X(MOV(*(raddr(ds,0x2A7)), al));	// 127451 mov     ds:2A7h, al ;~ 4907:0905
cs=0x4907;eip=0x000908; 	X(MOV(*(dw*)(raddr(ds,0x2AB)), ax));	// 127452 mov     ds:2ABh, ax ;~ 4907:0908
cs=0x4907;eip=0x00090b; 	X(MOV(*(dw*)(raddr(ds,0x2AD)), ax));	// 127453 mov     ds:2ADh, ax ;~ 4907:090B
cs=0x4907;eip=0x00090e; 	T(MOV(ax, 0x591));	// 127454 mov     ax, 591h ;~ 4907:090E
cs=0x4907;eip=0x000911; 	R(CALL(sub_57b28,0));	// 127455 call    sub_57B28 ;~ 4907:0911
cs=0x4907;eip=0x000914; 	X(MOV(*(dw*)(raddr(ds,0x283)), 0x0FFFF));	// 127456 mov     word ptr ds:283h, 0FFFFh ;~ 4907:0914
cs=0x4907;eip=0x00091a; 	R(CALL(sub_57caf,0));	// 127457 call    sub_57CAF ;~ 4907:091A
cs=0x4907;eip=0x00091d; 	X(MOV(*(raddr(ds,0x2FE)), 0));	// 127458 mov     byte ptr ds:2FEh, 0 ;~ 4907:091D
cs=0x4907;eip=0x000922; 	T(XOR(ax, ax));	// 127459 xor     ax, ax ;~ 4907:0922
cs=0x4907;eip=0x000924; 	R(RETN(0));	// 127460 retn ;~ 4907:0924
sub_57f75:
	// 127467 
cs=0x4907;eip=0x000925; 	T(MOV(ax, 1));	// 127469 mov     ax, 1 ;~ 4907:0925
ret_4907_928:
	// 8591 
cs=0x4907;eip=0x000928; 	T(CMP(*(raddr(ds,0x292)), 0));	// 127470 cmp     byte ptr ds:292h, 0 ;~ 4907:0928
cs=0x4907;eip=0x00092d; 	R(JZ(loc_57f87));	// 127471 jz      short loc_57F87 ;~ 4907:092D
cs=0x4907;eip=0x00092f; 	R(CALL(sub_57a82,0));	// 127472 call    sub_57A82 ;~ 4907:092F
cs=0x4907;eip=0x000932; 	R(CALL(sub_57c90,0));	// 127473 call    sub_57C90 ;~ 4907:0932
cs=0x4907;eip=0x000935; 	T(XOR(ax, ax));	// 127474 xor     ax, ax ;~ 4907:0935
loc_57f87:
	// 8592 
cs=0x4907;eip=0x000937; 	X(MOV(*(raddr(ds,0x2FE)), 1));	// 127478 mov     byte ptr ds:2FEh, 1 ;~ 4907:0937
cs=0x4907;eip=0x00093c; 	R(RETN(0));	// 127479 retn ;~ 4907:093C
sub_57f8d:
	// 127486 
cs=0x4907;eip=0x00093d; 	T(MOV(ax, 1));	// 127488 mov     ax, 1 ;~ 4907:093D
ret_4907_940:
	// 8593 
cs=0x4907;eip=0x000940; 	T(CMP(*(raddr(ds,0x292)), 0));	// 127489 cmp     byte ptr ds:292h, 0 ;~ 4907:0940
cs=0x4907;eip=0x000945; 	R(JZ(loc_57f87));	// 127490 jz      short loc_57F87 ;~ 4907:0945
cs=0x4907;eip=0x000947; 	R(CALL(sub_57a82,0));	// 127491 call    sub_57A82 ;~ 4907:0947
cs=0x4907;eip=0x00094a; 	T(XOR(ax, ax));	// 127492 xor     ax, ax ;~ 4907:094A
cs=0x4907;eip=0x00094c; 	R(RETN(0));	// 127493 retn ;~ 4907:094C
sub_57f9d:
	// 127500 
cs=0x4907;eip=0x00094d; 	T(MOV(ax, 1));	// 127502 mov     ax, 1 ;~ 4907:094D
ret_4907_950:
	// 8594 
cs=0x4907;eip=0x000950; 	T(CMP(*(raddr(ds,0x292)), 0));	// 127503 cmp     byte ptr ds:292h, 0 ;~ 4907:0950
cs=0x4907;eip=0x000955; 	R(JZ(loc_57f87));	// 127504 jz      short loc_57F87 ;~ 4907:0955
cs=0x4907;eip=0x000957; 	T(MOV(al, 0x0D4));	// 127505 mov     al, 0D4h ; 'Ô' ;~ 4907:0957
cs=0x4907;eip=0x000959; 	R(CALL(sub_57983,0));	// 127506 call    sub_57983 ;~ 4907:0959
cs=0x4907;eip=0x00095c; 	T(XOR(ax, ax));	// 127507 xor     ax, ax ;~ 4907:095C
cs=0x4907;eip=0x00095e; 	R(RETN(0));	// 127508 retn ;~ 4907:095E
sub_57faf:
	// 127515 
cs=0x4907;eip=0x00095f; 	T(MOV(cx, ax));	// 127517 mov     cx, ax ;~ 4907:095F
ret_4907_961:
	// 8595 
cs=0x4907;eip=0x000961; 	T(MOV(ax, 1));	// 127518 mov     ax, 1 ;~ 4907:0961
cs=0x4907;eip=0x000964; 	X(PUSHF);	// 127519 pushf ;~ 4907:0964
cs=0x4907;eip=0x000965; 	T(CLI);	// 127520 cli ;~ 4907:0965
cs=0x4907;eip=0x000966; 	T(MOV(bx, *(dw*)(raddr(ds,0x2AB))));	// 127521 mov     bx, ds:2ABh ;~ 4907:0966
cs=0x4907;eip=0x00096a; 	T(OR(bx, bx));	// 127522 or      bx, bx ;~ 4907:096A
cs=0x4907;eip=0x00096c; 	R(JZ(loc_57fe0));	// 127523 jz      short loc_57FE0 ;~ 4907:096C
cs=0x4907;eip=0x00096e; 	T(XOR(ax, ax));	// 127524 xor     ax, ax ;~ 4907:096E
cs=0x4907;eip=0x000970; 	X(MOV(*(dw*)(raddr(ds,bx+0x2AB)), ax));	// 127525 mov     [bx+2ABh], ax ;~ 4907:0970
cs=0x4907;eip=0x000974; 	R(JCXZ(loc_57fde));	// 127526 jcxz    short loc_57FDE ;~ 4907:0974
cs=0x4907;eip=0x000976; 	X(SUB(*(dw*)(raddr(ds,0x2AB)), 2));	// 127527 sub     word ptr ds:2ABh, 2 ;~ 4907:0976
cs=0x4907;eip=0x00097b; 	R(CALL(sub_57a82,0));	// 127528 call    sub_57A82 ;~ 4907:097B
cs=0x4907;eip=0x00097e; 	R(CALL(sub_57cc7,0));	// 127529 call    sub_57CC7 ;~ 4907:097E
cs=0x4907;eip=0x000981; 	R(CALL(sub_57caf,0));	// 127530 call    sub_57CAF ;~ 4907:0981
cs=0x4907;eip=0x000984; 	T(CMP(*(raddr(ds,0x2A7)), 0));	// 127531 cmp     byte ptr ds:2A7h, 0 ;~ 4907:0984
cs=0x4907;eip=0x000989; 	R(JZ(loc_57fde));	// 127532 jz      short loc_57FDE ;~ 4907:0989
cs=0x4907;eip=0x00098b; 	R(CALL(sub_57c90,0));	// 127533 call    sub_57C90 ;~ 4907:098B
loc_57fde:
	// 8596 
cs=0x4907;eip=0x00098e; 	T(XOR(ax, ax));	// 127537 xor     ax, ax ;~ 4907:098E
loc_57fe0:
	// 8597 
cs=0x4907;eip=0x000990; 	X(POPF);	// 127540 popf ;~ 4907:0990
cs=0x4907;eip=0x000991; 	R(RETN(0));	// 127541 retn ;~ 4907:0991

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return true;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_57750: 	goto loc_57750;
        case m2c::kloc_57756: 	goto loc_57756;
        case m2c::kloc_57770: 	goto loc_57770;
        case m2c::kloc_57794: 	goto loc_57794;
        case m2c::kloc_577cd: 	goto loc_577cd;
        case m2c::kloc_577df: 	goto loc_577df;
        case m2c::kloc_577f7: 	goto loc_577f7;
        case m2c::kloc_5781b: 	goto loc_5781b;
        case m2c::kloc_5781e: 	goto loc_5781e;
        case m2c::kloc_57828: 	goto loc_57828;
        case m2c::kloc_57856: 	goto loc_57856;
        case m2c::kloc_5785f: 	goto loc_5785f;
        case m2c::kloc_57882: 	goto loc_57882;
        case m2c::kloc_578d1: 	goto loc_578d1;
        case m2c::kloc_57955: 	goto loc_57955;
        case m2c::kloc_5795f: 	goto loc_5795f;
        case m2c::kloc_57963: 	goto loc_57963;
        case m2c::kloc_57971: 	goto loc_57971;
        case m2c::kloc_5797b: 	goto loc_5797b;
        case m2c::kloc_57980: 	goto loc_57980;
        case m2c::kloc_5798e: 	goto loc_5798e;
        case m2c::kloc_579a1: 	goto loc_579a1;
        case m2c::kloc_579bf: 	goto loc_579bf;
        case m2c::kloc_579d0: 	goto loc_579d0;
        case m2c::kloc_579d2: 	goto loc_579d2;
        case m2c::kloc_579f8: 	goto loc_579f8;
        case m2c::kloc_57a1c: 	goto loc_57a1c;
        case m2c::kloc_57a59: 	goto loc_57a59;
        case m2c::kloc_57a64: 	goto loc_57a64;
        case m2c::kloc_57a8d: 	goto loc_57a8d;
        case m2c::kloc_57a9e: 	goto loc_57a9e;
        case m2c::kloc_57b1a: 	goto loc_57b1a;
        case m2c::kloc_57b60: 	goto loc_57b60;
        case m2c::kloc_57b94: 	goto loc_57b94;
        case m2c::kloc_57bff: 	goto loc_57bff;
        case m2c::kloc_57c25: 	goto loc_57c25;
        case m2c::kloc_57c28: 	goto loc_57c28;
        case m2c::kloc_57c44: 	goto loc_57c44;
        case m2c::kloc_57c5a: 	goto loc_57c5a;
        case m2c::kloc_57c5e: 	goto loc_57c5e;
        case m2c::kloc_57cc2: 	goto loc_57cc2;
        case m2c::kloc_57d1e: 	goto loc_57d1e;
        case m2c::kloc_57d54: 	goto loc_57d54;
        case m2c::kloc_57d5f: 	goto loc_57d5f;
        case m2c::kloc_57d83: 	goto loc_57d83;
        case m2c::kloc_57d88: 	goto loc_57d88;
        case m2c::kloc_57dd2: 	goto loc_57dd2;
        case m2c::kloc_57e71: 	goto loc_57e71;
        case m2c::kloc_57e76: 	goto loc_57e76;
        case m2c::kloc_57e79: 	goto loc_57e79;
        case m2c::kloc_57ea0: 	goto loc_57ea0;
        case m2c::kloc_57ea8: 	goto loc_57ea8;
        case m2c::kloc_57eab: 	goto loc_57eab;
        case m2c::kloc_57edf: 	goto loc_57edf;
        case m2c::kloc_57f21: 	goto loc_57f21;
        case m2c::kloc_57f32: 	goto loc_57f32;
        case m2c::kloc_57f87: 	goto loc_57f87;
        case m2c::kloc_57fde: 	goto loc_57fde;
        case m2c::kloc_57fe0: 	goto loc_57fe0;
        case m2c::klocret_57afb: 	goto locret_57afb;
        case m2c::kret_4907_103: 	goto ret_4907_103;
        case m2c::kret_4907_109: 	goto ret_4907_109;
        case m2c::kret_4907_10c: 	goto ret_4907_10c;
        case m2c::kret_4907_10f: 	goto ret_4907_10f;
        case m2c::kret_4907_112: 	goto ret_4907_112;
        case m2c::kret_4907_115: 	goto ret_4907_115;
        case m2c::kret_4907_16b: 	goto ret_4907_16b;
        case m2c::kret_4907_1b1: 	goto ret_4907_1b1;
        case m2c::kret_4907_1c3: 	goto ret_4907_1c3;
        case m2c::kret_4907_1df: 	goto ret_4907_1df;
        case m2c::kret_4907_300: 	goto ret_4907_300;
        case m2c::kret_4907_316: 	goto ret_4907_316;
        case m2c::kret_4907_337: 	goto ret_4907_337;
        case m2c::kret_4907_348: 	goto ret_4907_348;
        case m2c::kret_4907_360: 	goto ret_4907_360;
        case m2c::kret_4907_388: 	goto ret_4907_388;
        case m2c::kret_4907_3ae: 	goto ret_4907_3ae;
        case m2c::kret_4907_3d6: 	goto ret_4907_3d6;
        case m2c::kret_4907_41e: 	goto ret_4907_41e;
        case m2c::kret_4907_433: 	goto ret_4907_433;
        case m2c::kret_4907_451: 	goto ret_4907_451;
        case m2c::kret_4907_48b: 	goto ret_4907_48b;
        case m2c::kret_4907_4a2: 	goto ret_4907_4a2;
        case m2c::kret_4907_4ad: 	goto ret_4907_4ad;
        case m2c::kret_4907_4c2: 	goto ret_4907_4c2;
        case m2c::kret_4907_4d9: 	goto ret_4907_4d9;
        case m2c::kret_4907_525: 	goto ret_4907_525;
        case m2c::kret_4907_54d: 	goto ret_4907_54d;
        case m2c::kret_4907_558: 	goto ret_4907_558;
        case m2c::kret_4907_592: 	goto ret_4907_592;
        case m2c::kret_4907_5e5: 	goto ret_4907_5e5;
        case m2c::kret_4907_644: 	goto ret_4907_644;
        case m2c::kret_4907_662: 	goto ret_4907_662;
        case m2c::kret_4907_678: 	goto ret_4907_678;
        case m2c::kret_4907_6be: 	goto ret_4907_6be;
        case m2c::kret_4907_740: 	goto ret_4907_740;
        case m2c::kret_4907_774: 	goto ret_4907_774;
        case m2c::kret_4907_78b: 	goto ret_4907_78b;
        case m2c::kret_4907_796: 	goto ret_4907_796;
        case m2c::kret_4907_7bf: 	goto ret_4907_7bf;
        case m2c::kret_4907_7d0: 	goto ret_4907_7d0;
        case m2c::kret_4907_7f9: 	goto ret_4907_7f9;
        case m2c::kret_4907_82c: 	goto ret_4907_82c;
        case m2c::kret_4907_866: 	goto ret_4907_866;
        case m2c::kret_4907_86a: 	goto ret_4907_86a;
        case m2c::kret_4907_87d: 	goto ret_4907_87d;
        case m2c::kret_4907_897: 	goto ret_4907_897;
        case m2c::kret_4907_8b3: 	goto ret_4907_8b3;
        case m2c::kret_4907_8b5: 	goto ret_4907_8b5;
        case m2c::kret_4907_8d7: 	goto ret_4907_8d7;
        case m2c::kret_4907_8ed: 	goto ret_4907_8ed;
        case m2c::kret_4907_928: 	goto ret_4907_928;
        case m2c::kret_4907_940: 	goto ret_4907_940;
        case m2c::kret_4907_950: 	goto ret_4907_950;
        case m2c::kret_4907_961: 	goto ret_4907_961;
        case m2c::kseg003_217_proc: 	goto seg003_217_proc;
        case m2c::kseg003_3ad_proc: 	goto seg003_3ad_proc;
        case m2c::kseg003_591_proc: 	goto seg003_591_proc;
        case m2c::kseg003_6cd_proc: 	goto seg003_6cd_proc;
        case m2c::kseg003_788_proc: 	goto seg003_788_proc;
        case m2c::ksub_577ba: 	goto sub_577ba;
        case m2c::ksub_57800: 	goto sub_57800;
        case m2c::ksub_57812: 	goto sub_57812;
        case m2c::ksub_5782e: 	goto sub_5782e;
        case m2c::ksub_5794f: 	goto sub_5794f;
        case m2c::ksub_57965: 	goto sub_57965;
        case m2c::ksub_57983: 	goto sub_57983;
        case m2c::ksub_5798a: 	goto sub_5798a;
        case m2c::ksub_57997: 	goto sub_57997;
        case m2c::ksub_579ac: 	goto sub_579ac;
        case m2c::ksub_579d5: 	goto sub_579d5;
        case m2c::ksub_57a21: 	goto sub_57a21;
        case m2c::ksub_57a6c: 	goto sub_57a6c;
        case m2c::ksub_57a82: 	goto sub_57a82;
        case m2c::ksub_57aa0: 	goto sub_57aa0;
        case m2c::ksub_57ada: 	goto sub_57ada;
        case m2c::ksub_57aee: 	goto sub_57aee;
        case m2c::ksub_57afc: 	goto sub_57afc;
        case m2c::ksub_57b0f: 	goto sub_57b0f;
        case m2c::ksub_57b28: 	goto sub_57b28;
        case m2c::ksub_57b74: 	goto sub_57b74;
        case m2c::ksub_57b9c: 	goto sub_57b9c;
        case m2c::ksub_57ba6: 	goto sub_57ba6;
        case m2c::ksub_57c32: 	goto sub_57c32;
        case m2c::ksub_57c90: 	goto sub_57c90;
        case m2c::ksub_57caf: 	goto sub_57caf;
        case m2c::ksub_57cc7: 	goto sub_57cc7;
        case m2c::ksub_57d0d: 	goto sub_57d0d;
        case m2c::ksub_57dc1: 	goto sub_57dc1;
        case m2c::ksub_57e7b: 	goto sub_57e7b;
        case m2c::ksub_57eb3: 	goto sub_57eb3;
        case m2c::ksub_57eb7: 	goto sub_57eb7;
        case m2c::ksub_57ecb: 	goto sub_57ecb;
        case m2c::ksub_57ee5: 	goto sub_57ee5;
        case m2c::ksub_57f00: 	goto sub_57f00;
        case m2c::ksub_57f04: 	goto sub_57f04;
        case m2c::ksub_57f23: 	goto sub_57f23;
        case m2c::ksub_57f38: 	goto sub_57f38;
        case m2c::ksub_57f75: 	goto sub_57f75;
        case m2c::ksub_57f8d: 	goto sub_57f8d;
        case m2c::ksub_57f9d: 	goto sub_57f9d;
        case m2c::ksub_57faf: 	goto sub_57faf;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);exit(1);
    };
}


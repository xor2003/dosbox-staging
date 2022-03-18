/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "sab2.h"

                

 bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
start:
	// 31 
cs=0x192;eip=0x000100; 	X(PUSH(cs));	// 39 push    cs ;~ 01A2:0100
ret_1a2_101:
	// 4369 
cs=0x192;eip=0x000101; 	X(POP(ax));	// 40 pop     ax ;~ 01A2:0101
cs=0x192;eip=0x000102; 	T(MOV(bx, 0x2E61));	// 41 mov     bx, 2E61h ;~ 01A2:0102
cs=0x192;eip=0x000105; 	T(SHR(bx, 1));	// 42 shr     bx, 1 ;~ 01A2:0105
cs=0x192;eip=0x000107; 	T(SHR(bx, 1));	// 43 shr     bx, 1 ;~ 01A2:0107
cs=0x192;eip=0x000109; 	T(SHR(bx, 1));	// 44 shr     bx, 1 ;~ 01A2:0109
cs=0x192;eip=0x00010b; 	T(SHR(bx, 1));	// 45 shr     bx, 1 ;~ 01A2:010B
cs=0x192;eip=0x00010d; 	T(ADD(ax, bx));	// 46 add     ax, bx ;~ 01A2:010D
cs=0x192;eip=0x00010f; 	T(MOV(ds, ax));	// 47 mov     ds, ax ;~ 01A2:010F
cs=0x192;eip=0x000111; 	T(MOV(es, ax));	// 49 mov     es, ax ;~ 01A2:0111
cs=0x192;eip=0x000113; 	X(MOV(*(&byte_14a2c), 0));	// 51 mov     ds:byte_14A2C, 0 ;~ 01A2:0113
cs=0x192;eip=0x000118; 	T(MOV(ah, 0x0F));	// 52 mov     ah, 0Fh ;~ 01A2:0118
cs=0x192;eip=0x00011a; 	R(_INT(0x10));	// 53 int     10h             ; - VIDEO - GET CURRENT VIDEO MODE ;~ 01A2:011A
cs=0x192;eip=0x00011c; 	X(MOV(*(&byte_14a23), al));	// 57 mov     ds:byte_14A23, al ;~ 01A2:011C
cs=0x192;eip=0x00011f; 	T(CMP(al, 7));	// 58 cmp     al, 7 ;~ 01A2:011F
cs=0x192;eip=0x000121; 	R(JC(loc_10196));	// 59 jb      short loc_10196 ;~ 01A2:0121
cs=0x192;eip=0x000123; 	T(MOV(dx, 0x1B82));	// 60 mov     dx, 1B82h ;~ 01A2:0123
cs=0x192;eip=0x000126; 	T(MOV(ah, 9));	// 61 mov     ah, 9 ;~ 01A2:0126
cs=0x192;eip=0x000128; 	R(_INT(0x21));	// 62 int     21h             ; DOS - PRINT STRING ;~ 01A2:0128
cs=0x192;eip=0x00012a; 	R(JMP(loc_10191));	// 64 jmp     short loc_10191 ;~ 01A2:012A
loc_1012d:
	// 4370 
cs=0x192;eip=0x00012d; 	T(MOV(al, *(&byte_14a23)));	// 71 mov     al, ds:byte_14A23 ;~ 01A2:012D
cs=0x192;eip=0x000130; 	T(MOV(ah, 0));	// 72 mov     ah, 0 ;~ 01A2:0130
cs=0x192;eip=0x000132; 	R(_INT(0x10));	// 73 int     10h             ; - VIDEO - SET VIDEO MODE ;~ 01A2:0132
cs=0x192;eip=0x000134; 	R(CALL(sub_105f2,0));	// 75 call    sub_105F2 ;~ 01A2:0134
cs=0x192;eip=0x000137; 	T(MOV(dx, 0x0D8C));	// 76 mov     dx, 0D8Ch ;~ 01A2:0137
cs=0x192;eip=0x00013a; 	T(MOV(ah, 0x13));	// 77 mov     ah, 13h ;~ 01A2:013A
cs=0x192;eip=0x00013c; 	R(_INT(0x21));	// 78 int     21h             ; DOS - DELETE FILE via FCB ;~ 01A2:013C
cs=0x192;eip=0x00013e; 	X(MOV(*(&byte_1a60d), 0x1A));	// 82 mov     ds:byte_1A60D, 1Ah ;~ 01A2:013E
cs=0x192;eip=0x000143; 	T(MOV(dx, 0x0D8C));	// 83 mov     dx, 0D8Ch ;~ 01A2:0143
cs=0x192;eip=0x000146; 	T(MOV(ah, 0x16));	// 84 mov     ah, 16h ;~ 01A2:0146
cs=0x192;eip=0x000148; 	R(_INT(0x21));	// 85 int     21h             ; DOS - CREATE A DISK FILE ;~ 01A2:0148
cs=0x192;eip=0x00014a; 	T(OR(al, al));	// 87 or      al, al ;~ 01A2:014A
cs=0x192;eip=0x00014c; 	R(JNZ(loc_1018a));	// 88 jnz     short loc_1018A ;~ 01A2:014C
cs=0x192;eip=0x00014e; 	X(MOV(*(&byte_13bf8), 0));	// 89 mov     ds:byte_13BF8, 0 ;~ 01A2:014E
cs=0x192;eip=0x000153; 	X(MOV(*(&byte_13c0c), 0));	// 90 mov     ds:byte_13C0C, 0 ;~ 01A2:0153
cs=0x192;eip=0x000158; 	R(CALL(sub_1062d,0));	// 91 call    sub_1062D ;~ 01A2:0158
cs=0x192;eip=0x00015b; 	T(MOV(dx, 0x76AE));	// 92 mov     dx, 76AEh ;~ 01A2:015B
cs=0x192;eip=0x00015e; 	T(MOV(ah, 0x1A));	// 93 mov     ah, 1Ah ;~ 01A2:015E
cs=0x192;eip=0x000160; 	R(_INT(0x21));	// 94 int     21h             ; DOS - SET DISK TRANSFER AREA ADDRESS ;~ 01A2:0160
cs=0x192;eip=0x000162; 	T(MOV(dx, 0x0D8C));	// 96 mov     dx, 0D8Ch ;~ 01A2:0162
cs=0x192;eip=0x000165; 	T(MOV(ah, 0x15));	// 97 mov     ah, 15h ;~ 01A2:0165
cs=0x192;eip=0x000167; 	R(_INT(0x21));	// 98 int     21h             ; DOS - SEQUENTIAL DISK RECORD WRITE ;~ 01A2:0167
cs=0x192;eip=0x000169; 	T(OR(al, al));	// 100 or      al, al ;~ 01A2:0169
cs=0x192;eip=0x00016b; 	R(JNZ(loc_1018a));	// 101 jnz     short loc_1018A ;~ 01A2:016B
cs=0x192;eip=0x00016d; 	T(MOV(dx, 0x772E));	// 102 mov     dx, 772Eh ;~ 01A2:016D
cs=0x192;eip=0x000170; 	T(MOV(ah, 0x1A));	// 103 mov     ah, 1Ah ;~ 01A2:0170
cs=0x192;eip=0x000172; 	R(_INT(0x21));	// 104 int     21h             ; DOS - SET DISK TRANSFER AREA ADDRESS ;~ 01A2:0172
cs=0x192;eip=0x000174; 	T(MOV(dx, 0x0D8C));	// 106 mov     dx, 0D8Ch ;~ 01A2:0174
cs=0x192;eip=0x000177; 	T(MOV(ah, 0x15));	// 107 mov     ah, 15h ;~ 01A2:0177
cs=0x192;eip=0x000179; 	R(_INT(0x21));	// 108 int     21h             ; DOS - SEQUENTIAL DISK RECORD WRITE ;~ 01A2:0179
cs=0x192;eip=0x00017b; 	T(OR(al, al));	// 110 or      al, al ;~ 01A2:017B
cs=0x192;eip=0x00017d; 	R(JNZ(loc_1018a));	// 111 jnz     short loc_1018A ;~ 01A2:017D
cs=0x192;eip=0x00017f; 	T(MOV(dx, 0x0D8C));	// 112 mov     dx, 0D8Ch ;~ 01A2:017F
cs=0x192;eip=0x000182; 	T(MOV(ah, 0x10));	// 113 mov     ah, 10h ;~ 01A2:0182
cs=0x192;eip=0x000184; 	R(_INT(0x21));	// 114 int     21h             ; DOS - CLOSE DISK FILE ;~ 01A2:0184
cs=0x192;eip=0x000186; 	T(OR(al, al));	// 118 or      al, al ;~ 01A2:0186
cs=0x192;eip=0x000188; 	R(JZ(loc_10191));	// 119 jz      short loc_10191 ;~ 01A2:0188
loc_1018a:
	// 4371 
cs=0x192;eip=0x00018a; 	T(MOV(dx, 0x0D8C));	// 123 mov     dx, 0D8Ch ;~ 01A2:018A
cs=0x192;eip=0x00018d; 	T(MOV(ah, 0x13));	// 124 mov     ah, 13h ;~ 01A2:018D
cs=0x192;eip=0x00018f; 	R(_INT(0x21));	// 125 int     21h             ; DOS - DELETE FILE via FCB ;~ 01A2:018F
loc_10191:
	// 4372 
cs=0x192;eip=0x000191; 	T(MOV(ax, 0x4C00));	// 132 mov     ax, 4C00h ;~ 01A2:0191
cs=0x192;eip=0x000194; 	R(_INT(0x21));	// 133 int     21h             ; DOS - 2+ - QUIT WITH EXIT CODE (EXIT) ;~ 01A2:0194
loc_10196:
	// 4373 
cs=0x192;eip=0x000196; 	T(MOV(dx, 5));	// 138 mov     dx, 5 ;~ 01A2:0196
cs=0x192;eip=0x000199; 	T(CMP(al, 0));	// 139 cmp     al, 0 ;~ 01A2:0199
cs=0x192;eip=0x00019b; 	R(JZ(loc_101a8));	// 140 jz      short loc_101A8 ;~ 01A2:019B
cs=0x192;eip=0x00019d; 	T(CMP(al, 2));	// 141 cmp     al, 2 ;~ 01A2:019D
cs=0x192;eip=0x00019f; 	R(JZ(loc_101a8));	// 142 jz      short loc_101A8 ;~ 01A2:019F
cs=0x192;eip=0x0001a1; 	T(CMP(al, 5));	// 143 cmp     al, 5 ;~ 01A2:01A1
cs=0x192;eip=0x0001a3; 	R(JZ(loc_101a8));	// 144 jz      short loc_101A8 ;~ 01A2:01A3
cs=0x192;eip=0x0001a5; 	T(MOV(dx, 0x104));	// 145 mov     dx, 104h ;~ 01A2:01A5
loc_101a8:
	// 4374 
cs=0x192;eip=0x0001a8; 	X(PUSH(dx));	// 149 push    dx ;~ 01A2:01A8
cs=0x192;eip=0x0001a9; 	T(MOV(ah, 0));	// 150 mov     ah, 0 ;~ 01A2:01A9
cs=0x192;eip=0x0001ab; 	R(_INT(0x1A));	// 151 int     1Ah             ; CLOCK - GET TIME OF DAY ;~ 01A2:01AB
cs=0x192;eip=0x0001ad; 	X(MOV(*(dw*)(((db*)&word_14a1e)), dx));	// 156 mov     ds:word_14A1E, dx ;~ 01A2:01AD
cs=0x192;eip=0x0001b1; 	T(MOV(dx, 0x0D8C));	// 157 mov     dx, 0D8Ch ;~ 01A2:01B1
cs=0x192;eip=0x0001b4; 	T(MOV(ah, 0x0F));	// 158 mov     ah, 0Fh ;~ 01A2:01B4
cs=0x192;eip=0x0001b6; 	R(_INT(0x21));	// 159 int     21h             ; DOS - OPEN DISK FILE ;~ 01A2:01B6
cs=0x192;eip=0x0001b8; 	T(OR(al, al));	// 162 or      al, al ;~ 01A2:01B8
cs=0x192;eip=0x0001ba; 	R(JNZ(loc_101fb));	// 163 jnz     short loc_101FB ;~ 01A2:01BA
cs=0x192;eip=0x0001bc; 	T(MOV(dx, 0x0BA2));	// 164 mov     dx, 0BA2h ;~ 01A2:01BC
cs=0x192;eip=0x0001bf; 	T(MOV(ah, 0x1A));	// 165 mov     ah, 1Ah ;~ 01A2:01BF
cs=0x192;eip=0x0001c1; 	R(_INT(0x21));	// 166 int     21h             ; DOS - SET DISK TRANSFER AREA ADDRESS ;~ 01A2:01C1
cs=0x192;eip=0x0001c3; 	T(MOV(dx, 0x0D8C));	// 168 mov     dx, 0D8Ch ;~ 01A2:01C3
cs=0x192;eip=0x0001c6; 	X(MOV(*(&byte_13bf8), 0));	// 169 mov     ds:byte_13BF8, 0 ;~ 01A2:01C6
cs=0x192;eip=0x0001cb; 	X(MOV(*(&byte_13c0c), 0));	// 170 mov     ds:byte_13C0C, 0 ;~ 01A2:01CB
cs=0x192;eip=0x0001d0; 	T(MOV(ah, 0x14));	// 171 mov     ah, 14h ;~ 01A2:01D0
cs=0x192;eip=0x0001d2; 	R(_INT(0x21));	// 172 int     21h             ; DOS - SEQUENTIAL DISK FILE READ ;~ 01A2:01D2
cs=0x192;eip=0x0001d4; 	T(OR(al, al));	// 174 or      al, al ;~ 01A2:01D4
cs=0x192;eip=0x0001d6; 	R(JNZ(loc_101fb));	// 175 jnz     short loc_101FB ;~ 01A2:01D6
cs=0x192;eip=0x0001d8; 	T(MOV(dx, 0x0C22));	// 176 mov     dx, 0C22h ;~ 01A2:01D8
cs=0x192;eip=0x0001db; 	T(MOV(ah, 0x1A));	// 177 mov     ah, 1Ah ;~ 01A2:01DB
cs=0x192;eip=0x0001dd; 	R(_INT(0x21));	// 178 int     21h             ; DOS - SET DISK TRANSFER AREA ADDRESS ;~ 01A2:01DD
cs=0x192;eip=0x0001df; 	T(MOV(dx, 0x0D8C));	// 180 mov     dx, 0D8Ch ;~ 01A2:01DF
cs=0x192;eip=0x0001e2; 	T(MOV(ah, 0x14));	// 181 mov     ah, 14h ;~ 01A2:01E2
cs=0x192;eip=0x0001e4; 	R(_INT(0x21));	// 182 int     21h             ; DOS - SEQUENTIAL DISK FILE READ ;~ 01A2:01E4
cs=0x192;eip=0x0001e6; 	T(OR(al, al));	// 184 or      al, al ;~ 01A2:01E6
cs=0x192;eip=0x0001e8; 	R(JNZ(loc_101fb));	// 185 jnz     short loc_101FB ;~ 01A2:01E8
cs=0x192;eip=0x0001ea; 	T(MOV(si, 0x0BA2));	// 186 mov     si, 0BA2h ;~ 01A2:01EA
cs=0x192;eip=0x0001ed; 	T(MOV(di, 0x76AE));	// 187 mov     di, 76AEh ;~ 01A2:01ED
cs=0x192;eip=0x0001f0; 	T(MOV(cx, 0x80));	// 188 mov     cx, 80h ; '€' ;~ 01A2:01F0
cs=0x192;eip=0x0001f3; 	T(CLD);	// 189 cld ;~ 01A2:01F3
	// 190 rep movsw ;~ 01A2:01F4
cs=0x192;eip=0x0001f4; 	X(	REP MOVSW);	// 190 rep movsw ;~ 01A2:01F4
cs=0x192;eip=0x0001f6; 	R(CALL(sub_10640,0));	// 191 call    sub_10640 ;~ 01A2:01F6
cs=0x192;eip=0x0001f9; 	R(JZ(loc_10216));	// 192 jz      short loc_10216 ;~ 01A2:01F9
loc_101fb:
	// 4375 
cs=0x192;eip=0x0001fb; 	R(CALL(sub_1107c,0));	// 196 call    sub_1107C ;~ 01A2:01FB
cs=0x192;eip=0x0001fe; 	T(AND(al, 7));	// 197 and     al, 7 ;~ 01A2:01FE
cs=0x192;eip=0x000200; 	R(JZ(loc_10216));	// 198 jz      short loc_10216 ;~ 01A2:0200
cs=0x192;eip=0x000202; 	T(MOV(si, 0x0FF05));	// 199 mov     si, 0FF05h ;~ 01A2:0202
loc_10205:
	// 4376 
cs=0x192;eip=0x000205; 	T(ADD(si, 0x0FF));	// 202 add     si, 0FFh ;~ 01A2:0205
cs=0x192;eip=0x000209; 	T(DEC(al));	// 203 dec     al ;~ 01A2:0209
cs=0x192;eip=0x00020b; 	R(JNZ(loc_10205));	// 204 jnz     short loc_10205 ;~ 01A2:020B
cs=0x192;eip=0x00020d; 	T(MOV(di, 0x76AE));	// 205 mov     di, 76AEh ;~ 01A2:020D
cs=0x192;eip=0x000210; 	T(MOV(cx, 0x0FF));	// 206 mov     cx, 0FFh ;~ 01A2:0210
cs=0x192;eip=0x000213; 	T(CLD);	// 207 cld ;~ 01A2:0213
	// 208 rep movsb ;~ 01A2:0214
cs=0x192;eip=0x000214; 	X(	REP MOVSB);	// 208 rep movsb ;~ 01A2:0214
loc_10216:
	// 4377 
cs=0x192;eip=0x000216; 	X(POP(dx));	// 212 pop     dx ;~ 01A2:0216
cs=0x192;eip=0x000217; 	X(PUSH(dx));	// 213 push    dx ;~ 01A2:0217
cs=0x192;eip=0x000218; 	T(MOV(ah, 0));	// 214 mov     ah, 0 ;~ 01A2:0218
cs=0x192;eip=0x00021a; 	T(MOV(al, dh));	// 215 mov     al, dh ;~ 01A2:021A
cs=0x192;eip=0x00021c; 	R(_INT(0x10));	// 216 int     10h             ; - VIDEO - SET VIDEO MODE ;~ 01A2:021C
cs=0x192;eip=0x00021e; 	T(MOV(bx, 0));	// 218 mov     bx, 0 ;~ 01A2:021E
cs=0x192;eip=0x000221; 	T(MOV(ah, 0x0B));	// 219 mov     ah, 0Bh ;~ 01A2:0221
cs=0x192;eip=0x000223; 	R(_INT(0x10));	// 220 int     10h             ; - VIDEO - SET COLOR PALETTE ;~ 01A2:0223
cs=0x192;eip=0x000225; 	T(MOV(si, 0x6FD));	// 223 mov     si, 6FDh ;~ 01A2:0225
cs=0x192;eip=0x000228; 	R(CALL(sub_104b7,0));	// 224 call    sub_104B7 ;~ 01A2:0228
cs=0x192;eip=0x00022b; 	T(MOV(di, 0x3F3D));	// 225 mov     di, 3F3Dh ;~ 01A2:022B
cs=0x192;eip=0x00022e; 	T(MOV(cx, 0x100));	// 226 mov     cx, 100h ;~ 01A2:022E
cs=0x192;eip=0x000231; 	T(STD);	// 227 std ;~ 01A2:0231
loc_10232:
	// 4378 
cs=0x192;eip=0x000232; 	T(MOV(ah, cl));	// 230 mov     ah, cl ;~ 01A2:0232
cs=0x192;eip=0x000234; 	X(PUSH(cx));	// 231 push    cx ;~ 01A2:0234
cs=0x192;eip=0x000235; 	T(MOV(cx, 8));	// 232 mov     cx, 8 ;~ 01A2:0235
cs=0x192;eip=0x000238; 	T(DEC(ah));	// 233 dec     ah ;~ 01A2:0238
cs=0x192;eip=0x00023a; 	T(MOV(al, 0));	// 234 mov     al, 0 ;~ 01A2:023A
loc_1023c:
	// 4379 
cs=0x192;eip=0x00023c; 	T(SHR(ah, 1));	// 237 shr     ah, 1 ;~ 01A2:023C
cs=0x192;eip=0x00023e; 	T(RCL(al, 1));	// 238 rcl     al, 1 ;~ 01A2:023E
cs=0x192;eip=0x000240; 	R(LOOP(loc_1023c));	// 239 loop    loc_1023C ;~ 01A2:0240
cs=0x192;eip=0x000242; 	X(STOSB);	// 240 stosb ;~ 01A2:0242
cs=0x192;eip=0x000243; 	X(POP(cx));	// 241 pop     cx ;~ 01A2:0243
cs=0x192;eip=0x000244; 	R(LOOP(loc_10232));	// 242 loop    loc_10232 ;~ 01A2:0244
cs=0x192;eip=0x000246; 	T(CLD);	// 243 cld ;~ 01A2:0246
cs=0x192;eip=0x000247; 	R(CALL(sub_105c6,0));	// 244 call    sub_105C6 ;~ 01A2:0247
cs=0x192;eip=0x00024a; 	R(CALL(sub_105bb,0));	// 245 call    sub_105BB ;~ 01A2:024A
cs=0x192;eip=0x00024d; 	X(POP(ax));	// 246 pop     ax ;~ 01A2:024D
cs=0x192;eip=0x00024e; 	T(CBW);	// 247 cbw ;~ 01A2:024E
cs=0x192;eip=0x00024f; 	X(MOV(*(dw*)(((db*)&word_14a10)), ax));	// 248 mov     ds:word_14A10, ax ;~ 01A2:024F
cs=0x192;eip=0x000252; 	R(_INT(0x10));	// 249 int     10h             ; - VIDEO - ;~ 01A2:0252
cs=0x192;eip=0x000254; 	T(MOV(bx, 0));	// 250 mov     bx, 0 ;~ 01A2:0254
cs=0x192;eip=0x000257; 	T(MOV(ah, 0x0B));	// 251 mov     ah, 0Bh ;~ 01A2:0257
cs=0x192;eip=0x000259; 	R(_INT(0x10));	// 252 int     10h             ; - VIDEO - SET COLOR PALETTE ;~ 01A2:0259
cs=0x192;eip=0x00025b; 	T(MOV(bx, 0x100));	// 255 mov     bx, 100h ;~ 01A2:025B
cs=0x192;eip=0x00025e; 	T(MOV(ah, 0x0B));	// 256 mov     ah, 0Bh ;~ 01A2:025E
cs=0x192;eip=0x000260; 	R(_INT(0x10));	// 257 int     10h             ; - VIDEO - SET COLOR PALETTE ;~ 01A2:0260
cs=0x192;eip=0x000262; 	X(MOV(*(&byte_14a2c), 1));	// 260 mov     ds:byte_14A2C, 1 ;~ 01A2:0262
cs=0x192;eip=0x000267; 	R(CALL(sub_105cd,0));	// 261 call    sub_105CD ;~ 01A2:0267
cs=0x192;eip=0x00026a; 	R(CALL(sub_10620,0));	// 262 call    sub_10620 ;~ 01A2:026A
cs=0x192;eip=0x00026d; 	R(CALL(sub_10620,0));	// 263 call    sub_10620 ;~ 01A2:026D
cs=0x192;eip=0x000270; 	T(MOV(bx, 0));	// 264 mov     bx, 0 ;~ 01A2:0270
loc_10273:
	// 4380 
cs=0x192;eip=0x000273; 	T(INC(bx));	// 267 inc     bx ;~ 01A2:0273
cs=0x192;eip=0x000274; 	T(MOV(cx, 0x0A));	// 268 mov     cx, 0Ah ;~ 01A2:0274
loc_10277:
	// 4381 
cs=0x192;eip=0x000277; 	R(LOOP(loc_10277));	// 271 loop    loc_10277 ;~ 01A2:0277
cs=0x192;eip=0x000279; 	T(CMP(*(&byte_14a22), 1));	// 272 cmp     ds:byte_14A22, 1 ;~ 01A2:0279
cs=0x192;eip=0x00027e; 	R(JNZ(loc_10273));	// 273 jnz     short loc_10273 ;~ 01A2:027E
cs=0x192;eip=0x000280; 	T(CMP(bx, 0x600));	// 274 cmp     bx, 600h ;~ 01A2:0280
cs=0x192;eip=0x000284; 	R(JNC(loc_1028b));	// 275 jnb     short loc_1028B ;~ 01A2:0284
cs=0x192;eip=0x000286; 	X(ADD(*(&byte_1a809), 8));	// 276 add     ds:byte_1A809, 8 ;~ 01A2:0286
loc_1028b:
	// 4382 
cs=0x192;eip=0x00028b; 	R(JMP(loc_12736));	// 279 jmp     loc_12736 ;~ 01A2:028B
loc_1028e:
	// 4383 
cs=0x192;eip=0x00028e; 	R(CALL(sub_12a8c,0));	// 283 call    sub_12A8C ;~ 01A2:028E
cs=0x192;eip=0x000291; 	T(MOV(al, *(&byte_14a26)));	// 284 mov     al, ds:byte_14A26 ;~ 01A2:0291
cs=0x192;eip=0x000294; 	T(ADD(al, 0x30));	// 285 add     al, 30h ; '0' ;~ 01A2:0294
cs=0x192;eip=0x000296; 	X(MOV(*(&byte_14584), al));	// 286 mov     ds:byte_14584, al ;~ 01A2:0296
cs=0x192;eip=0x000299; 	T(MOV(si, 0x1704));	// 287 mov     si, 1704h ;~ 01A2:0299
cs=0x192;eip=0x00029c; 	R(CALL(sub_104b7,0));	// 288 call    sub_104B7 ;~ 01A2:029C
cs=0x192;eip=0x00029f; 	T(MOV(al, *(&byte_14a26)));	// 289 mov     al, ds:byte_14A26 ;~ 01A2:029F
cs=0x192;eip=0x0002a2; 	T(DEC(al));	// 290 dec     al ;~ 01A2:02A2
cs=0x192;eip=0x0002a4; 	T(ADD(al, al));	// 291 add     al, al ;~ 01A2:02A4
cs=0x192;eip=0x0002a6; 	T(CBW);	// 292 cbw ;~ 01A2:02A6
cs=0x192;eip=0x0002a7; 	T(MOV(bx, 0x16F2));	// 293 mov     bx, 16F2h ;~ 01A2:02A7
cs=0x192;eip=0x0002aa; 	T(ADD(bx, ax));	// 294 add     bx, ax ;~ 01A2:02AA
cs=0x192;eip=0x0002ac; 	T(MOV(si, *(dw*)(raddr(ds,bx))));	// 295 mov     si, [bx] ;~ 01A2:02AC
cs=0x192;eip=0x0002ae; 	R(CALL(sub_104b7,0));	// 296 call    sub_104B7 ;~ 01A2:02AE
cs=0x192;eip=0x0002b1; 	T(CLD);	// 297 cld ;~ 01A2:02B1
cs=0x192;eip=0x0002b2; 	T(MOV(di, 0x1BE6));	// 298 mov     di, 1BE6h ;~ 01A2:02B2
cs=0x192;eip=0x0002b5; 	T(MOV(cx, 3));	// 299 mov     cx, 3 ;~ 01A2:02B5
	// 300 rep movsb ;~ 01A2:02B8
cs=0x192;eip=0x0002b8; 	X(	REP MOVSB);	// 300 rep movsb ;~ 01A2:02B8
cs=0x192;eip=0x0002ba; 	X(PUSH(si));	// 301 push    si ;~ 01A2:02BA
cs=0x192;eip=0x0002bb; 	T(MOV(si, 0x173A));	// 302 mov     si, 173Ah ;~ 01A2:02BB
cs=0x192;eip=0x0002be; 	R(CALL(sub_104b7,0));	// 303 call    sub_104B7 ;~ 01A2:02BE
cs=0x192;eip=0x0002c1; 	X(POP(si));	// 304 pop     si ;~ 01A2:02C1
cs=0x192;eip=0x0002c2; 	R(CALL(sub_104b7,0));	// 305 call    sub_104B7 ;~ 01A2:02C2
cs=0x192;eip=0x0002c5; 	X(MOV(*(&byte_14a24), 2));	// 306 mov     ds:byte_14A24, 2 ;~ 01A2:02C5
cs=0x192;eip=0x0002ca; 	T(LODSW);	// 307 lodsw ;~ 01A2:02CA
cs=0x192;eip=0x0002cb; 	X(MOV(*(dw*)(((db*)&word_14614)), ax));	// 308 mov     ds:word_14614, ax ;~ 01A2:02CB
cs=0x192;eip=0x0002ce; 	X(MOV(*(dw*)(((db*)&word_14a04)), si));	// 309 mov     ds:word_14A04, si ;~ 01A2:02CE
cs=0x192;eip=0x0002d2; 	T(MOV(bx, si));	// 310 mov     bx, si ;~ 01A2:02D2
cs=0x192;eip=0x0002d4; 	T(MOV(al, *(raddr(ds,bx))));	// 311 mov     al, [bx] ;~ 01A2:02D4
cs=0x192;eip=0x0002d6; 	T(OR(al, al));	// 312 or      al, al ;~ 01A2:02D6
cs=0x192;eip=0x0002d8; 	X(MOV(*(&byte_14a27), al));	// 313 mov     ds:byte_14A27, al ;~ 01A2:02D8
cs=0x192;eip=0x0002db; 	R(JZ(loc_102e5));	// 314 jz      short loc_102E5 ;~ 01A2:02DB
cs=0x192;eip=0x0002dd; 	T(MOV(si, 0x17A9));	// 315 mov     si, 17A9h ;~ 01A2:02DD
cs=0x192;eip=0x0002e0; 	X(PUSH(bx));	// 316 push    bx ;~ 01A2:02E0
cs=0x192;eip=0x0002e1; 	R(CALL(sub_104b7,0));	// 317 call    sub_104B7 ;~ 01A2:02E1
cs=0x192;eip=0x0002e4; 	X(POP(bx));	// 318 pop     bx ;~ 01A2:02E4
loc_102e5:
	// 4384 
cs=0x192;eip=0x0002e5; 	T(MOV(al, *(raddr(ds,bx+3))));	// 321 mov     al, [bx+3] ;~ 01A2:02E5
cs=0x192;eip=0x0002e8; 	X(MOV(*(&byte_14a28), al));	// 322 mov     ds:byte_14A28, al ;~ 01A2:02E8
cs=0x192;eip=0x0002eb; 	T(INC(al));	// 323 inc     al ;~ 01A2:02EB
cs=0x192;eip=0x0002ed; 	T(MOV(al, 0x0FF));	// 324 mov     al, 0FFh ;~ 01A2:02ED
cs=0x192;eip=0x0002ef; 	R(JNZ(loc_102fb));	// 325 jnz     short loc_102FB ;~ 01A2:02EF
cs=0x192;eip=0x0002f1; 	T(MOV(si, 0x180B));	// 326 mov     si, 180Bh ;~ 01A2:02F1
cs=0x192;eip=0x0002f4; 	X(PUSH(bx));	// 327 push    bx ;~ 01A2:02F4
cs=0x192;eip=0x0002f5; 	R(CALL(sub_104b7,0));	// 328 call    sub_104B7 ;~ 01A2:02F5
cs=0x192;eip=0x0002f8; 	X(POP(bx));	// 329 pop     bx ;~ 01A2:02F8
cs=0x192;eip=0x0002f9; 	T(MOV(al, 1));	// 330 mov     al, 1 ;~ 01A2:02F9
loc_102fb:
	// 4385 
cs=0x192;eip=0x0002fb; 	X(MOV(*(&byte_14a2b), al));	// 333 mov     ds:byte_14A2B, al ;~ 01A2:02FB
cs=0x192;eip=0x0002fe; 	T(MOV(al, *(raddr(ds,bx+1))));	// 334 mov     al, [bx+1] ;~ 01A2:02FE
cs=0x192;eip=0x000301; 	X(MOV(*(&byte_14a29), al));	// 335 mov     ds:byte_14A29, al ;~ 01A2:0301
cs=0x192;eip=0x000304; 	T(OR(al, al));	// 336 or      al, al ;~ 01A2:0304
cs=0x192;eip=0x000306; 	R(JZ(loc_10310));	// 337 jz      short loc_10310 ;~ 01A2:0306
cs=0x192;eip=0x000308; 	T(MOV(si, 0x17CC));	// 338 mov     si, 17CCh ;~ 01A2:0308
cs=0x192;eip=0x00030b; 	X(PUSH(bx));	// 339 push    bx ;~ 01A2:030B
cs=0x192;eip=0x00030c; 	R(CALL(sub_104b7,0));	// 340 call    sub_104B7 ;~ 01A2:030C
cs=0x192;eip=0x00030f; 	X(POP(bx));	// 341 pop     bx ;~ 01A2:030F
loc_10310:
	// 4386 
cs=0x192;eip=0x000310; 	T(MOV(al, *(raddr(ds,bx+2))));	// 344 mov     al, [bx+2] ;~ 01A2:0310
cs=0x192;eip=0x000313; 	X(MOV(*(&byte_14a2a), al));	// 345 mov     ds:byte_14A2A, al ;~ 01A2:0313
cs=0x192;eip=0x000316; 	T(INC(al));	// 346 inc     al ;~ 01A2:0316
cs=0x192;eip=0x000318; 	R(JZ(loc_10322));	// 347 jz      short loc_10322 ;~ 01A2:0318
cs=0x192;eip=0x00031a; 	T(MOV(si, 0x17EE));	// 348 mov     si, 17EEh ;~ 01A2:031A
cs=0x192;eip=0x00031d; 	X(PUSH(bx));	// 349 push    bx ;~ 01A2:031D
cs=0x192;eip=0x00031e; 	R(CALL(sub_104b7,0));	// 350 call    sub_104B7 ;~ 01A2:031E
cs=0x192;eip=0x000321; 	X(POP(bx));	// 351 pop     bx ;~ 01A2:0321
loc_10322:
	// 4387 
cs=0x192;eip=0x000322; 	T(MOV(si, 0x173E));	// 354 mov     si, 173Eh ;~ 01A2:0322
cs=0x192;eip=0x000325; 	R(CALL(sub_104b7,0));	// 355 call    sub_104B7 ;~ 01A2:0325
cs=0x192;eip=0x000328; 	T(MOV(si, 0x1537));	// 356 mov     si, 1537h ;~ 01A2:0328
cs=0x192;eip=0x00032b; 	R(CALL(sub_104b7,0));	// 357 call    sub_104B7 ;~ 01A2:032B
cs=0x192;eip=0x00032e; 	R(CALL(sub_105c6,0));	// 358 call    sub_105C6 ;~ 01A2:032E
cs=0x192;eip=0x000331; 	R(CALL(sub_105bb,0));	// 359 call    sub_105BB ;~ 01A2:0331
cs=0x192;eip=0x000334; 	T(MOV(ax, *(dw*)(((db*)&word_14a10))));	// 360 mov     ax, ds:word_14A10 ;~ 01A2:0334
cs=0x192;eip=0x000337; 	R(_INT(0x10));	// 361 int     10h             ; - VIDEO - ;~ 01A2:0337
cs=0x192;eip=0x000339; 	T(MOV(bx, 0));	// 362 mov     bx, 0 ;~ 01A2:0339
cs=0x192;eip=0x00033c; 	T(MOV(ah, 0x0B));	// 363 mov     ah, 0Bh ;~ 01A2:033C
cs=0x192;eip=0x00033e; 	R(_INT(0x10));	// 364 int     10h             ; - VIDEO - SET COLOR PALETTE ;~ 01A2:033E
cs=0x192;eip=0x000340; 	T(MOV(bx, 0x100));	// 367 mov     bx, 100h ;~ 01A2:0340
cs=0x192;eip=0x000343; 	T(MOV(ah, 0x0B));	// 368 mov     ah, 0Bh ;~ 01A2:0343
cs=0x192;eip=0x000345; 	R(_INT(0x10));	// 369 int     10h             ; - VIDEO - SET COLOR PALETTE ;~ 01A2:0345
cs=0x192;eip=0x000347; 	X(MOV(*(&byte_14a2c), 1));	// 372 mov     ds:byte_14A2C, 1 ;~ 01A2:0347
cs=0x192;eip=0x00034c; 	T(MOV(di, 0x1688));	// 373 mov     di, 1688h ;~ 01A2:034C
cs=0x192;eip=0x00034f; 	T(MOV(bx, 0x182F));	// 374 mov     bx, 182Fh ;~ 01A2:034F
loc_10352:
	// 4388 
cs=0x192;eip=0x000352; 	T(MOV(al, *(raddr(ds,bx))));	// 377 mov     al, [bx] ;~ 01A2:0352
cs=0x192;eip=0x000354; 	T(INC(bx));	// 378 inc     bx ;~ 01A2:0354
cs=0x192;eip=0x000355; 	T(INC(al));	// 379 inc     al ;~ 01A2:0355
cs=0x192;eip=0x000357; 	R(JZ(loc_10397));	// 380 jz      short loc_10397 ;~ 01A2:0357
cs=0x192;eip=0x000359; 	T(DEC(al));	// 381 dec     al ;~ 01A2:0359
cs=0x192;eip=0x00035b; 	T(MOV(cl, al));	// 382 mov     cl, al ;~ 01A2:035B
cs=0x192;eip=0x00035d; 	T(ADD(al, al));	// 383 add     al, al ;~ 01A2:035D
cs=0x192;eip=0x00035f; 	T(ADD(al, al));	// 384 add     al, al ;~ 01A2:035F
cs=0x192;eip=0x000361; 	T(ADD(al, al));	// 385 add     al, al ;~ 01A2:0361
cs=0x192;eip=0x000363; 	T(ADD(al, cl));	// 386 add     al, cl ;~ 01A2:0363
cs=0x192;eip=0x000365; 	T(MOV(ah, 0));	// 387 mov     ah, 0 ;~ 01A2:0365
cs=0x192;eip=0x000367; 	T(MOV(si, 0x1886));	// 388 mov     si, 1886h ;~ 01A2:0367
cs=0x192;eip=0x00036a; 	T(ADD(si, ax));	// 389 add     si, ax ;~ 01A2:036A
cs=0x192;eip=0x00036c; 	T(CMP(cl, 0x10));	// 390 cmp     cl, 10h ;~ 01A2:036C
cs=0x192;eip=0x00036f; 	T(MOV(cx, 1));	// 391 mov     cx, 1 ;~ 01A2:036F
cs=0x192;eip=0x000372; 	R(JC(loc_10377));	// 392 jb      short loc_10377 ;~ 01A2:0372
cs=0x192;eip=0x000374; 	T(MOV(cl, *(raddr(ds,bx))));	// 393 mov     cl, [bx] ;~ 01A2:0374
cs=0x192;eip=0x000376; 	T(INC(bx));	// 394 inc     bx ;~ 01A2:0376
loc_10377:
	// 4389 
cs=0x192;eip=0x000377; 	X(PUSH(bx));	// 397 push    bx ;~ 01A2:0377
loc_10378:
	// 4390 
cs=0x192;eip=0x000378; 	X(PUSH(cx));	// 400 push    cx ;~ 01A2:0378
cs=0x192;eip=0x000379; 	X(PUSH(si));	// 401 push    si ;~ 01A2:0379
cs=0x192;eip=0x00037a; 	X(PUSH(di));	// 402 push    di ;~ 01A2:037A
cs=0x192;eip=0x00037b; 	R(CALL(sub_10547,0));	// 403 call    sub_10547 ;~ 01A2:037B
cs=0x192;eip=0x00037e; 	X(POP(di));	// 404 pop     di ;~ 01A2:037E
cs=0x192;eip=0x00037f; 	T(INC(di));	// 405 inc     di ;~ 01A2:037F
cs=0x192;eip=0x000380; 	T(INC(di));	// 406 inc     di ;~ 01A2:0380
cs=0x192;eip=0x000381; 	T(MOV(ax, di));	// 407 mov     ax, di ;~ 01A2:0381
cs=0x192;eip=0x000383; 	T(MOV(cl, 0x50));	// 408 mov     cl, 50h ; 'P' ;~ 01A2:0383
cs=0x192;eip=0x000385; 	T(DIV1(cl));	// 409 div     cl ;~ 01A2:0385
cs=0x192;eip=0x000387; 	T(CMP(ah, 0x48));	// 410 cmp     ah, 48h ; 'H' ;~ 01A2:0387
cs=0x192;eip=0x00038a; 	R(JC(loc_10390));	// 411 jb      short loc_10390 ;~ 01A2:038A
cs=0x192;eip=0x00038c; 	T(ADD(di, 0x100));	// 412 add     di, 100h ;~ 01A2:038C
loc_10390:
	// 4391 
cs=0x192;eip=0x000390; 	X(POP(si));	// 415 pop     si ;~ 01A2:0390
cs=0x192;eip=0x000391; 	X(POP(cx));	// 416 pop     cx ;~ 01A2:0391
cs=0x192;eip=0x000392; 	R(LOOP(loc_10378));	// 417 loop    loc_10378 ;~ 01A2:0392
cs=0x192;eip=0x000394; 	X(POP(bx));	// 418 pop     bx ;~ 01A2:0394
cs=0x192;eip=0x000395; 	R(JMP(loc_10352));	// 419 jmp     short loc_10352 ;~ 01A2:0395
loc_10397:
	// 4392 
cs=0x192;eip=0x000397; 	T(MOV(si, 0x193A));	// 423 mov     si, 193Ah ;~ 01A2:0397
cs=0x192;eip=0x00039a; 	R(CALL(sub_104b7,0));	// 424 call    sub_104B7 ;~ 01A2:039A
cs=0x192;eip=0x00039d; 	T(MOV(bx, 0x195E));	// 425 mov     bx, 195Eh ;~ 01A2:039D
cs=0x192;eip=0x0003a0; 	T(MOV(cx, 6));	// 426 mov     cx, 6 ;~ 01A2:03A0
loc_103a3:
	// 4393 
cs=0x192;eip=0x0003a3; 	X(MOV(*(raddr(ds,bx)), 0x30));	// 429 mov     byte ptr [bx], 30h ; '0' ;~ 01A2:03A3
cs=0x192;eip=0x0003a6; 	T(INC(bx));	// 430 inc     bx ;~ 01A2:03A6
cs=0x192;eip=0x0003a7; 	R(LOOP(loc_103a3));	// 431 loop    loc_103A3 ;~ 01A2:03A7
cs=0x192;eip=0x0003a9; 	T(MOV(si, 0x1953));	// 432 mov     si, 1953h ;~ 01A2:03A9
cs=0x192;eip=0x0003ac; 	R(CALL(sub_104b7,0));	// 433 call    sub_104B7 ;~ 01A2:03AC
cs=0x192;eip=0x0003af; 	T(MOV(cx, 0x21));	// 434 mov     cx, 21h ; '!' ;~ 01A2:03AF
cs=0x192;eip=0x0003b2; 	T(CLD);	// 435 cld ;~ 01A2:03B2
cs=0x192;eip=0x0003b3; 	T(MOV(di, 0x136D));	// 436 mov     di, 136Dh ;~ 01A2:03B3
cs=0x192;eip=0x0003b6; 	T(MOV(si, 0x1372));	// 437 mov     si, 1372h ;~ 01A2:03B6
loc_103b9:
	// 4394 
cs=0x192;eip=0x0003b9; 	X(PUSH(cx));	// 440 push    cx ;~ 01A2:03B9
cs=0x192;eip=0x0003ba; 	T(MOV(cx, 5));	// 441 mov     cx, 5 ;~ 01A2:03BA
	// 442 rep movsb ;~ 01A2:03BD
cs=0x192;eip=0x0003bd; 	X(	REP MOVSB);	// 442 rep movsb ;~ 01A2:03BD
cs=0x192;eip=0x0003bf; 	T(ADD(si, 9));	// 443 add     si, 9 ;~ 01A2:03BF
cs=0x192;eip=0x0003c2; 	T(ADD(di, 9));	// 444 add     di, 9 ;~ 01A2:03C2
cs=0x192;eip=0x0003c5; 	X(POP(cx));	// 445 pop     cx ;~ 01A2:03C5
cs=0x192;eip=0x0003c6; 	R(LOOP(loc_103b9));	// 446 loop    loc_103B9 ;~ 01A2:03C6
cs=0x192;eip=0x0003c8; 	X(MOV(*(dw*)(((db*)&word_14a20)), 0x1A6F));	// 447 mov     ds:word_14A20, 1A6Fh ;~ 01A2:03C8
cs=0x192;eip=0x0003ce; 	X(MOV(*(&byte_14a2d), 7));	// 448 mov     ds:byte_14A2D, 7 ;~ 01A2:03CE
cs=0x192;eip=0x0003d3; 	X(MOV(*(&byte_14a2e), 0x1D));	// 449 mov     ds:byte_14A2E, 1Dh ;~ 01A2:03D3
cs=0x192;eip=0x0003d8; 	X(MOV(*(dw*)(((db*)&word_14a14)), 0x0FD));	// 450 mov     ds:word_14A14, 0FDh ; 'ı' ;~ 01A2:03D8
cs=0x192;eip=0x0003de; 	X(MOV(*(db*)(((db*)&word_14a36)+1), 0x11));	// 451 mov     byte ptr ds:word_14A36+1, 11h ;~ 01A2:03DE
cs=0x192;eip=0x0003e3; 	X(MOV(*(&byte_18e0a), 5));	// 452 mov     ds:byte_18E0A, 5 ;~ 01A2:03E3
cs=0x192;eip=0x0003e8; 	T(XOR(al, al));	// 453 xor     al, al ;~ 01A2:03E8
cs=0x192;eip=0x0003ea; 	X(MOV(*(&byte_14a2f), al));	// 454 mov     ds:byte_14A2F, al ;~ 01A2:03EA
cs=0x192;eip=0x0003ed; 	X(MOV(*(&byte_14a30), al));	// 455 mov     ds:byte_14A30, al ;~ 01A2:03ED
cs=0x192;eip=0x0003f0; 	X(MOV(*(&byte_14a31), al));	// 456 mov     ds:byte_14A31, al ;~ 01A2:03F0
cs=0x192;eip=0x0003f3; 	X(MOV(*(&byte_14a32), al));	// 457 mov     ds:byte_14A32, al ;~ 01A2:03F3
cs=0x192;eip=0x0003f6; 	X(MOV(*(&byte_14a33), al));	// 458 mov     ds:byte_14A33, al ;~ 01A2:03F6
cs=0x192;eip=0x0003f9; 	X(MOV(*(&byte_14a34), 2));	// 459 mov     ds:byte_14A34, 2 ;~ 01A2:03F9
cs=0x192;eip=0x0003fe; 	X(MOV(*(&byte_14a35), al));	// 460 mov     ds:byte_14A35, al ;~ 01A2:03FE
cs=0x192;eip=0x000401; 	X(MOV(*(db*)(((db*)&word_14a36)), al));	// 461 mov     byte ptr ds:word_14A36, al ;~ 01A2:0401
cs=0x192;eip=0x000404; 	X(MOV(*(&byte_18e08), 2));	// 462 mov     ds:byte_18E08, 2 ;~ 01A2:0404
cs=0x192;eip=0x000409; 	X(MOV(*(dw*)(((db*)&word_14a16)), 0x136D));	// 463 mov     ds:word_14A16, 136Dh ;~ 01A2:0409
cs=0x192;eip=0x00040f; 	X(MOV(*(dw*)(((db*)&word_14a18)), 0x5BC0));	// 464 mov     ds:word_14A18, 5BC0h ;~ 01A2:040F
cs=0x192;eip=0x000415; 	X(MOV(*(dw*)(((db*)&word_14a1a)), 0x11D7));	// 465 mov     ds:word_14A1A, 11D7h ;~ 01A2:0415
cs=0x192;eip=0x00041b; 	X(MOV(*(&byte_14a38), al));	// 466 mov     ds:byte_14A38, al ;~ 01A2:041B
cs=0x192;eip=0x00041e; 	X(MOV(*(&byte_14a39), al));	// 467 mov     ds:byte_14A39, al ;~ 01A2:041E
cs=0x192;eip=0x000421; 	X(MOV(*(&byte_14a3a), al));	// 468 mov     ds:byte_14A3A, al ;~ 01A2:0421
cs=0x192;eip=0x000424; 	X(MOV(*(dw*)(((db*)&word_14a1c)), 0x0F7A));	// 469 mov     ds:word_14A1C, 0F7Ah ;~ 01A2:0424
cs=0x192;eip=0x00042a; 	T(INC(al));	// 470 inc     al ;~ 01A2:042A
cs=0x192;eip=0x00042c; 	X(MOV(*(&byte_14a3b), 2));	// 471 mov     ds:byte_14A3B, 2 ;~ 01A2:042C
cs=0x192;eip=0x000431; 	X(MOV(*(&byte_14a3c), al));	// 472 mov     ds:byte_14A3C, al ;~ 01A2:0431
cs=0x192;eip=0x000434; 	X(MOV(*(&byte_14a3d), al));	// 473 mov     ds:byte_14A3D, al ;~ 01A2:0434
cs=0x192;eip=0x000437; 	X(MOV(*(&byte_14a3e), al));	// 474 mov     ds:byte_14A3E, al ;~ 01A2:0437
cs=0x192;eip=0x00043a; 	X(MOV(*(&byte_14a3f), al));	// 475 mov     ds:byte_14A3F, al ;~ 01A2:043A
cs=0x192;eip=0x00043d; 	X(MOV(*(&byte_14a40), al));	// 476 mov     ds:byte_14A40, al ;~ 01A2:043D
cs=0x192;eip=0x000440; 	T(MOV(bx, 0x68ED));	// 477 mov     bx, 68EDh ;~ 01A2:0440
cs=0x192;eip=0x000443; 	T(MOV(cx, 0x65));	// 478 mov     cx, 65h ; 'e' ;~ 01A2:0443
loc_10446:
	// 4395 
cs=0x192;eip=0x000446; 	T(MOV(al, *(raddr(ds,bx))));	// 481 mov     al, [bx] ;~ 01A2:0446
cs=0x192;eip=0x000448; 	T(CMP(al, 5));	// 482 cmp     al, 5 ;~ 01A2:0448
cs=0x192;eip=0x00044a; 	R(JNZ(loc_1044f));	// 483 jnz     short loc_1044F ;~ 01A2:044A
cs=0x192;eip=0x00044c; 	X(MOV(*(raddr(ds,bx)), 0));	// 484 mov     byte ptr [bx], 0 ;~ 01A2:044C
loc_1044f:
	// 4396 
cs=0x192;eip=0x00044f; 	T(CMP(al, 6));	// 487 cmp     al, 6 ;~ 01A2:044F
cs=0x192;eip=0x000451; 	R(JNZ(loc_10456));	// 488 jnz     short loc_10456 ;~ 01A2:0451
cs=0x192;eip=0x000453; 	X(MOV(*(raddr(ds,bx)), 1));	// 489 mov     byte ptr [bx], 1 ;~ 01A2:0453
loc_10456:
	// 4397 
cs=0x192;eip=0x000456; 	T(ADD(bx, 0x0C));	// 492 add     bx, 0Ch ;~ 01A2:0456
cs=0x192;eip=0x000459; 	R(LOOP(loc_10446));	// 493 loop    loc_10446 ;~ 01A2:0459
cs=0x192;eip=0x00045b; 	R(CALL(sub_11f32,0));	// 494 call    sub_11F32 ;~ 01A2:045B
loc_1045e:
	// 4398 
cs=0x192;eip=0x00045e; 	R(CALL(sub_10660,0));	// 498 call    sub_10660 ;~ 01A2:045E
cs=0x192;eip=0x000461; 	R(JMP(loc_1049a));	// 499 jmp     short loc_1049A ;~ 01A2:0461
seg000_464_proc:
	// 505 
loc_10464:
	// 4399 
cs=0x192;eip=0x000464; 	R(CALL(sub_10620,0));	// 506 call    sub_10620 ;~ 01A2:0464
loc_10467:
	// 4400 
cs=0x192;eip=0x000467; 	R(CALL(sub_10ebc,0));	// 510 call    sub_10EBC ;~ 01A2:0467
cs=0x192;eip=0x00046a; 	R(CALL(sub_12032,0));	// 511 call    sub_12032 ;~ 01A2:046A
cs=0x192;eip=0x00046d; 	R(CALL(sub_1269b,0));	// 512 call    sub_1269B ;~ 01A2:046D
cs=0x192;eip=0x000470; 	R(CALL(sub_1259e,0));	// 513 call    sub_1259E ;~ 01A2:0470
cs=0x192;eip=0x000473; 	R(CALL(sub_10c0d,0));	// 514 call    sub_10C0D ;~ 01A2:0473
cs=0x192;eip=0x000476; 	T(MOV(ah, 1));	// 515 mov     ah, 1 ;~ 01A2:0476
cs=0x192;eip=0x000478; 	R(_INT(0x16));	// 516 int     16h             ; KEYBOARD - CHECK BUFFER, DO NOT CLEAR ;~ 01A2:0478
cs=0x192;eip=0x00047a; 	R(JZ(loc_10464));	// 520 jz      short loc_10464 ;~ 01A2:047A
cs=0x192;eip=0x00047c; 	T(MOV(ah, 0));	// 521 mov     ah, 0 ;~ 01A2:047C
cs=0x192;eip=0x00047e; 	R(_INT(0x16));	// 522 int     16h             ; KEYBOARD - READ CHAR FROM BUFFER, WAIT IF EMPTY ;~ 01A2:047E
cs=0x192;eip=0x000480; 	X(INC(*(db*)(((db*)&word_14a36)+1)));	// 524 inc     byte ptr ds:word_14A36+1 ;~ 01A2:0480
cs=0x192;eip=0x000484; 	X(INC(*(dw*)(((db*)&word_14a1c))));	// 525 inc     ds:word_14A1C ;~ 01A2:0484
cs=0x192;eip=0x000488; 	T(CMP(*(db*)(((db*)&word_14a36)+1), 0x20));	// 526 cmp     byte ptr ds:word_14A36+1, 20h ; ' ' ;~ 01A2:0488
cs=0x192;eip=0x00048d; 	R(JNZ(loc_1045e));	// 527 jnz     short loc_1045E ;~ 01A2:048D
cs=0x192;eip=0x00048f; 	X(MOV(*(db*)(((db*)&word_14a36)+1), 0));	// 528 mov     byte ptr ds:word_14A36+1, 0 ;~ 01A2:048F
cs=0x192;eip=0x000494; 	X(INC(*(db*)(((db*)&word_14a36))));	// 529 inc     byte ptr ds:word_14A36 ;~ 01A2:0494
cs=0x192;eip=0x000498; 	R(JMP(loc_1045e));	// 530 jmp     short loc_1045E ;~ 01A2:0498
loc_1049a:
	// 4401 
cs=0x192;eip=0x00049a; 	R(CALL(sub_10ebc,0));	// 536 call    sub_10EBC ;~ 01A2:049A
cs=0x192;eip=0x00049d; 	R(CALL(sub_110a4,0));	// 537 call    sub_110A4 ;~ 01A2:049D
cs=0x192;eip=0x0004a0; 	R(CALL(sub_11162,0));	// 538 call    sub_11162 ;~ 01A2:04A0
cs=0x192;eip=0x0004a3; 	R(CALL(sub_1104a,0));	// 539 call    sub_1104A ;~ 01A2:04A3
cs=0x192;eip=0x0004a6; 	R(CALL(sub_12032,0));	// 540 call    sub_12032 ;~ 01A2:04A6
cs=0x192;eip=0x0004a9; 	R(CALL(sub_1269b,0));	// 541 call    sub_1269B ;~ 01A2:04A9
cs=0x192;eip=0x0004ac; 	R(CALL(sub_1259e,0));	// 542 call    sub_1259E ;~ 01A2:04AC
cs=0x192;eip=0x0004af; 	R(CALL(sub_10c0d,0));	// 543 call    sub_10C0D ;~ 01A2:04AF
cs=0x192;eip=0x0004b2; 	R(CALL(sub_10620,0));	// 544 call    sub_10620 ;~ 01A2:04B2
cs=0x192;eip=0x0004b5; 	R(JMP(loc_1049a));	// 545 jmp     short loc_1049A ;~ 01A2:04B5
seg000_11ab_proc:
	// 2629 
loc_111ab:
	// 4665 
cs=0x192;eip=0x0011ab; 	R(CALL(sub_11de3,0));	// 2631 call    sub_11DE3 ;~ 01A2:11AB
cs=0x192;eip=0x0011ae; 	R(CALL(sub_11dca,0));	// 2632 call    sub_11DCA ;~ 01A2:11AE
cs=0x192;eip=0x0011b1; 	R(CALL(sub_10bea,0));	// 2633 call    sub_10BEA ;~ 01A2:11B1
cs=0x192;eip=0x0011b4; 	T(MOV(al, byte_11bcd));	// 2634 mov     al, byte_11BCD ;~ 01A2:11B4
cs=0x192;eip=0x0011b7; 	T(ADD(al, 7));	// 2635 add     al, 7 ;~ 01A2:11B7
cs=0x192;eip=0x0011b9; 	T(CMP(al, 8));	// 2636 cmp     al, 8 ;~ 01A2:11B9
cs=0x192;eip=0x0011bb; 	R(JC(loc_111d4));	// 2637 jb      short loc_111D4 ;~ 01A2:11BB
cs=0x192;eip=0x0011bd; 	T(MOV(bx, word_11bb4));	// 2638 mov     bx, word_11BB4 ;~ 01A2:11BD
cs=0x192;eip=0x0011c1; 	T(MOV(dx, 0x4A6));	// 2639 mov     dx, 4A6h ;~ 01A2:11C1
cs=0x192;eip=0x0011c4; 	R(CALL(sub_11daa,0));	// 2640 call    sub_11DAA ;~ 01A2:11C4
cs=0x192;eip=0x0011c7; 	T(ADD(bx, dx));	// 2641 add     bx, dx ;~ 01A2:11C7
cs=0x192;eip=0x0011c9; 	T(CMP(*(raddr(ds,bx)), 0));	// 2642 cmp     byte ptr [bx], 0 ;~ 01A2:11C9
cs=0x192;eip=0x0011cc; 	R(JNZ(loc_111d4));	// 2643 jnz     short loc_111D4 ;~ 01A2:11CC
cs=0x192;eip=0x0011ce; 	T(MOV(cx, 2));	// 2644 mov     cx, 2 ;~ 01A2:11CE
cs=0x192;eip=0x0011d1; 	R(CALL(sub_11f89,0));	// 2645 call    sub_11F89 ;~ 01A2:11D1
loc_111d4:
	// 4666 
cs=0x192;eip=0x0011d4; 	R(JMP(loc_11c07));	// 2649 jmp     loc_11C07 ;~ 01A2:11D4
ret_1a2_11d7:
	// 4667 
cs=0x192;eip=0x0011d7; 	T(CMP(byte_11bce, 0x0FD));	// 2652 cmp     byte_11BCE, 0FDh ; 'ı' ;~ 01A2:11D7
cs=0x192;eip=0x0011dc; 	R(JNZ(loc_111e1));	// 2653 jnz     short loc_111E1 ;~ 01A2:11DC
cs=0x192;eip=0x0011de; 	R(JMP(loc_11213));	// 2654 jmp     short loc_11213 ;~ 01A2:11DE
loc_111e1:
	// 4668 
cs=0x192;eip=0x0011e1; 	R(CALL(sub_11d99,0));	// 2660 call    sub_11D99 ;~ 01A2:11E1
cs=0x192;eip=0x0011e4; 	T(TEST(byte_15b35, 0x10));	// 2661 test    byte_15B35, 10h ;~ 01A2:11E4
cs=0x192;eip=0x0011e9; 	R(JNZ(loc_111f3));	// 2662 jnz     short loc_111F3 ;~ 01A2:11E9
cs=0x192;eip=0x0011eb; 	X(DEC(byte_11bd8));	// 2663 dec     byte_11BD8 ;~ 01A2:11EB
cs=0x192;eip=0x0011ef; 	R(JZ(loc_111f3));	// 2664 jz      short loc_111F3 ;~ 01A2:11EF
cs=0x192;eip=0x0011f1; 	R(JMP(loc_111ab));	// 2665 jmp     short loc_111AB ;~ 01A2:11F1
loc_111f3:
	// 4669 
cs=0x192;eip=0x0011f3; 	T(MOV(al, 1));	// 2670 mov     al, 1 ;~ 01A2:11F3
cs=0x192;eip=0x0011f5; 	R(JMP(loc_111f8));	// 2671 jmp     short loc_111F8 ;~ 01A2:11F5
loc_111f8:
	// 4670 
cs=0x192;eip=0x0011f8; 	X(MOV(byte_15b36, 0));	// 2677 mov     byte_15B36, 0 ;~ 01A2:11F8
cs=0x192;eip=0x0011fd; 	T(MOV(bx, 0x1282));	// 2678 mov     bx, 1282h ;~ 01A2:11FD
cs=0x192;eip=0x001200; 	T(MOV(dx, 0x5BE2));	// 2679 mov     dx, 5BE2h ;~ 01A2:1200
cs=0x192;eip=0x001203; 	R(JMP(loc_11206));	// 2680 jmp     short loc_11206 ;~ 01A2:1203
loc_11206:
	// 4671 
cs=0x192;eip=0x001206; 	X(MOV(byte_11bd8, al));	// 2687 mov     byte_11BD8, al ;~ 01A2:1206
loc_11209:
	// 4672 
cs=0x192;eip=0x001209; 	X(MOV(word_11bb8, dx));	// 2694 mov     word_11BB8, dx ;~ 01A2:1209
loc_1120d:
	// 4673 
cs=0x192;eip=0x00120d; 	X(MOV(word_11bba, bx));	// 2698 mov     word_11BBA, bx ;~ 01A2:120D
cs=0x192;eip=0x001211; 	R(JMP(loc_111ab));	// 2699 jmp     short loc_111AB ;~ 01A2:1211
loc_11213:
	// 4674 
cs=0x192;eip=0x001213; 	X(DEC(*(db*)(((db*)&word_11bd6)+1)));	// 2706 dec     byte ptr word_11BD6+1 ;~ 01A2:1213
cs=0x192;eip=0x001217; 	X(MOV(byte_11bce, 0x1D));	// 2707 mov     byte_11BCE, 1Dh ;~ 01A2:1217
cs=0x192;eip=0x00121c; 	T(MOV(bx, word_11bb4));	// 2708 mov     bx, word_11BB4 ;~ 01A2:121C
cs=0x192;eip=0x001220; 	T(ADD(bx, 0x20));	// 2709 add     bx, 20h ; ' ' ;~ 01A2:1220
cs=0x192;eip=0x001223; 	T(MOV(dx, 0x0FFFF));	// 2710 mov     dx, 0FFFFh ;~ 01A2:1223
cs=0x192;eip=0x001226; 	R(JMP(loc_11271));	// 2711 jmp     short loc_11271 ;~ 01A2:1226
loc_11229:
	// 4675 
cs=0x192;eip=0x001229; 	T(MOV(bx, word_11bbc));	// 2720 mov     bx, word_11BBC ;~ 01A2:1229
cs=0x192;eip=0x00122d; 	T(CMP(*(raddr(ds,bx)), 0x41));	// 2721 cmp     byte ptr [bx], 41h ; 'A' ;~ 01A2:122D
cs=0x192;eip=0x001230; 	R(JZ(loc_11248));	// 2722 jz      short loc_11248 ;~ 01A2:1230
cs=0x192;eip=0x001232; 	X(INC(*(db*)(((db*)&word_11bd6)+1)));	// 2723 inc     byte ptr word_11BD6+1 ;~ 01A2:1232
cs=0x192;eip=0x001236; 	X(MOV(byte_11bce, 0x0FD));	// 2724 mov     byte_11BCE, 0FDh ; 'ı' ;~ 01A2:1236
cs=0x192;eip=0x00123b; 	T(MOV(bx, word_11bb4));	// 2725 mov     bx, word_11BB4 ;~ 01A2:123B
cs=0x192;eip=0x00123f; 	T(ADD(bx, 0x0FFE0));	// 2726 add     bx, 0FFE0h ;~ 01A2:123F
cs=0x192;eip=0x001242; 	T(MOV(dx, 1));	// 2727 mov     dx, 1 ;~ 01A2:1242
cs=0x192;eip=0x001245; 	R(JMP(loc_11271));	// 2728 jmp     short loc_11271 ;~ 01A2:1245
loc_11248:
	// 4676 
cs=0x192;eip=0x001248; 	X(MOV(*(db*)(((db*)&word_11bd6)+1), 0x1E));	// 2735 mov     byte ptr word_11BD6+1, 1Eh ;~ 01A2:1248
cs=0x192;eip=0x00124d; 	X(MOV(*(db*)(((db*)&word_11bd6)), 0x18));	// 2736 mov     byte ptr word_11BD6, 18h ;~ 01A2:124D
cs=0x192;eip=0x001252; 	X(MOV(byte_11bcd, 5));	// 2737 mov     byte_11BCD, 5 ;~ 01A2:1252
cs=0x192;eip=0x001257; 	X(MOV(byte_11bce, 4));	// 2738 mov     byte_11BCE, 4 ;~ 01A2:1257
cs=0x192;eip=0x00125c; 	X(MOV(word_11bb4, 0x0A4));	// 2739 mov     word_11BB4, 0A4h ; '¤' ;~ 01A2:125C
cs=0x192;eip=0x001262; 	X(MOV(word_11bbc, 0x1287));	// 2740 mov     word_11BBC, 1287h ;~ 01A2:1262
cs=0x192;eip=0x001268; 	X(MOV(byte_11bd4, 6));	// 2741 mov     byte_11BD4, 6 ;~ 01A2:1268
cs=0x192;eip=0x00126d; 	X(POP(ax));	// 2742 pop     ax ;~ 01A2:126D
cs=0x192;eip=0x00126e; 	R(JMP(loc_1045e));	// 2743 jmp     loc_1045E ;~ 01A2:126E
loc_11271:
	// 4677 
cs=0x192;eip=0x001271; 	X(MOV(word_11bb4, bx));	// 2748 mov     word_11BB4, bx ;~ 01A2:1271
cs=0x192;eip=0x001275; 	X(ADD(word_11bbc, dx));	// 2749 add     word_11BBC, dx ;~ 01A2:1275
cs=0x192;eip=0x001279; 	X(MOV(byte_11bd4, 2));	// 2750 mov     byte_11BD4, 2 ;~ 01A2:1279
cs=0x192;eip=0x00127e; 	X(POP(ax));	// 2751 pop     ax ;~ 01A2:127E
cs=0x192;eip=0x00127f; 	R(JMP(loc_1045e));	// 2752 jmp     loc_1045E ;~ 01A2:127F
ret_1a2_1282:
	// 4678 
cs=0x192;eip=0x001282; 	T(MOV(al, byte_15b36));	// 2755 mov     al, byte_15B36 ;~ 01A2:1282
cs=0x192;eip=0x001285; 	T(INC(al));	// 2756 inc     al ;~ 01A2:1285
cs=0x192;eip=0x001287; 	T(AND(al, 3));	// 2757 and     al, 3 ;~ 01A2:1287
cs=0x192;eip=0x001289; 	X(MOV(byte_15b36, al));	// 2758 mov     byte_15B36, al ;~ 01A2:1289
cs=0x192;eip=0x00128c; 	T(CBW);	// 2759 cbw ;~ 01A2:128C
cs=0x192;eip=0x00128d; 	T(ADD(ax, ax));	// 2760 add     ax, ax ;~ 01A2:128D
cs=0x192;eip=0x00128f; 	T(ADD(ax, 0x5B26));	// 2761 add     ax, 5B26h ;~ 01A2:128F
cs=0x192;eip=0x001292; 	T(MOV(bx, ax));	// 2762 mov     bx, ax ;~ 01A2:1292
cs=0x192;eip=0x001294; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 2763 mov     bx, [bx] ;~ 01A2:1294
cs=0x192;eip=0x001296; 	X(MOV(word_11bb8, bx));	// 2764 mov     word_11BB8, bx ;~ 01A2:1296
loc_1129a:
	// 4679 
cs=0x192;eip=0x00129a; 	R(CALL(sub_11d7b,0));	// 2768 call    sub_11D7B ;~ 01A2:129A
cs=0x192;eip=0x00129d; 	R(CALL(sub_11d6b,0));	// 2769 call    sub_11D6B ;~ 01A2:129D
cs=0x192;eip=0x0012a0; 	R(CALL(sub_11d99,0));	// 2770 call    sub_11D99 ;~ 01A2:12A0
cs=0x192;eip=0x0012a3; 	X(DEC(byte_11bd8));	// 2771 dec     byte_11BD8 ;~ 01A2:12A3
cs=0x192;eip=0x0012a7; 	R(JZ(loc_112ac));	// 2772 jz      short loc_112AC ;~ 01A2:12A7
cs=0x192;eip=0x0012a9; 	R(JMP(loc_111ab));	// 2773 jmp     loc_111AB ;~ 01A2:12A9
loc_112ac:
	// 4680 
cs=0x192;eip=0x0012ac; 	X(MOV(byte_11bd8, 6));	// 2777 mov     byte_11BD8, 6 ;~ 01A2:12AC
cs=0x192;eip=0x0012b1; 	T(MOV(bx, 0x12B7));	// 2778 mov     bx, 12B7h ;~ 01A2:12B1
cs=0x192;eip=0x0012b4; 	R(JMP(loc_1120d));	// 2779 jmp     loc_1120D ;~ 01A2:12B4
ret_1a2_12b7:
	// 4681 
cs=0x192;eip=0x0012b7; 	R(CALL(sub_11d16,0));	// 2781 call    sub_11D16 ;~ 01A2:12B7
cs=0x192;eip=0x0012ba; 	R(CALL(sub_11d7b,0));	// 2782 call    sub_11D7B ;~ 01A2:12BA
cs=0x192;eip=0x0012bd; 	R(CALL(sub_11d6b,0));	// 2783 call    sub_11D6B ;~ 01A2:12BD
cs=0x192;eip=0x0012c0; 	T(MOV(al, byte_15fec));	// 2784 mov     al, byte_15FEC ;~ 01A2:12C0
cs=0x192;eip=0x0012c3; 	T(INC(al));	// 2785 inc     al ;~ 01A2:12C3
cs=0x192;eip=0x0012c5; 	T(CMP(al, 0x0C8));	// 2786 cmp     al, 0C8h ; 'È' ;~ 01A2:12C5
cs=0x192;eip=0x0012c7; 	R(JC(loc_112cc));	// 2787 jb      short loc_112CC ;~ 01A2:12C7
cs=0x192;eip=0x0012c9; 	R(JMP(loc_11367));	// 2788 jmp     loc_11367 ;~ 01A2:12C9
loc_112cc:
	// 4682 
cs=0x192;eip=0x0012cc; 	R(CALL(sub_11d36,0));	// 2792 call    sub_11D36 ;~ 01A2:12CC
cs=0x192;eip=0x0012cf; 	R(JZ(loc_112d4));	// 2793 jz      short loc_112D4 ;~ 01A2:12CF
cs=0x192;eip=0x0012d1; 	R(JMP(loc_11359));	// 2794 jmp     loc_11359 ;~ 01A2:12D1
loc_112d4:
	// 4683 
cs=0x192;eip=0x0012d4; 	R(CALL(sub_11d99,0));	// 2798 call    sub_11D99 ;~ 01A2:12D4
cs=0x192;eip=0x0012d7; 	X(INC(byte_11bcd));	// 2799 inc     byte_11BCD ;~ 01A2:12D7
cs=0x192;eip=0x0012db; 	X(ADD(word_11bb4, 0x20));	// 2800 add     word_11BB4, 20h ; ' ' ;~ 01A2:12DB
cs=0x192;eip=0x0012e0; 	X(MOV(word_11bb8, 0x5DD6));	// 2801 mov     word_11BB8, 5DD6h ;~ 01A2:12E0
cs=0x192;eip=0x0012e6; 	X(DEC(byte_11bd8));	// 2802 dec     byte_11BD8 ;~ 01A2:12E6
cs=0x192;eip=0x0012ea; 	R(JZ(loc_112ef));	// 2803 jz      short loc_112EF ;~ 01A2:12EA
cs=0x192;eip=0x0012ec; 	R(JMP(loc_111ab));	// 2804 jmp     loc_111AB ;~ 01A2:12EC
loc_112ef:
	// 4684 
cs=0x192;eip=0x0012ef; 	T(MOV(al, 0x19));	// 2808 mov     al, 19h ;~ 01A2:12EF
loc_112f1:
	// 4685 
cs=0x192;eip=0x0012f1; 	X(MOV(byte_15b37, 1));	// 2812 mov     byte_15B37, 1 ;~ 01A2:12F1
cs=0x192;eip=0x0012f6; 	X(MOV(byte_15b38, 1));	// 2813 mov     byte_15B38, 1 ;~ 01A2:12F6
cs=0x192;eip=0x0012fb; 	T(MOV(dx, 0x5E7E));	// 2814 mov     dx, 5E7Eh ;~ 01A2:12FB
cs=0x192;eip=0x0012fe; 	T(MOV(bx, 0x1304));	// 2815 mov     bx, 1304h ;~ 01A2:12FE
cs=0x192;eip=0x001301; 	R(JMP(loc_11206));	// 2816 jmp     loc_11206 ;~ 01A2:1301
ret_1a2_1304:
	// 4686 
cs=0x192;eip=0x001304; 	R(CALL(sub_11d16,0));	// 2819 call    sub_11D16 ;~ 01A2:1304
cs=0x192;eip=0x001307; 	R(CALL(sub_11d7b,0));	// 2820 call    sub_11D7B ;~ 01A2:1307
cs=0x192;eip=0x00130a; 	R(CALL(sub_11d36,0));	// 2821 call    sub_11D36 ;~ 01A2:130A
cs=0x192;eip=0x00130d; 	R(JZ(loc_11312));	// 2822 jz      short loc_11312 ;~ 01A2:130D
cs=0x192;eip=0x00130f; 	R(JMP(loc_1134a));	// 2823 jmp     short loc_1134A ;~ 01A2:130F
loc_11312:
	// 4687 
cs=0x192;eip=0x001312; 	X(INC(byte_15b37));	// 2828 inc     byte_15B37 ;~ 01A2:1312
cs=0x192;eip=0x001316; 	X(XOR(byte_15b39, 1));	// 2829 xor     byte_15B39, 1 ;~ 01A2:1316
cs=0x192;eip=0x00131b; 	R(JZ(loc_1132f));	// 2830 jz      short loc_1132F ;~ 01A2:131B
cs=0x192;eip=0x00131d; 	R(CALL(sub_11d6b,0));	// 2831 call    sub_11D6B ;~ 01A2:131D
cs=0x192;eip=0x001320; 	T(MOV(al, byte_15fec));	// 2832 mov     al, byte_15FEC ;~ 01A2:1320
cs=0x192;eip=0x001323; 	T(INC(al));	// 2833 inc     al ;~ 01A2:1323
cs=0x192;eip=0x001325; 	T(CMP(al, 0x0C8));	// 2834 cmp     al, 0C8h ; 'È' ;~ 01A2:1325
cs=0x192;eip=0x001327; 	R(JC(loc_1132c));	// 2835 jb      short loc_1132C ;~ 01A2:1327
cs=0x192;eip=0x001329; 	R(JMP(loc_11367));	// 2836 jmp     short loc_11367 ;~ 01A2:1329
loc_1132c:
	// 4688 
cs=0x192;eip=0x00132c; 	R(CALL(sub_11d99,0));	// 2841 call    sub_11D99 ;~ 01A2:132C
loc_1132f:
	// 4689 
cs=0x192;eip=0x00132f; 	X(INC(byte_11bcd));	// 2844 inc     byte_11BCD ;~ 01A2:132F
cs=0x192;eip=0x001333; 	X(ADD(word_11bb4, 0x20));	// 2845 add     word_11BB4, 20h ; ' ' ;~ 01A2:1333
cs=0x192;eip=0x001338; 	X(DEC(byte_11bd8));	// 2846 dec     byte_11BD8 ;~ 01A2:1338
cs=0x192;eip=0x00133c; 	R(JZ(loc_11341));	// 2847 jz      short loc_11341 ;~ 01A2:133C
cs=0x192;eip=0x00133e; 	R(JMP(loc_111ab));	// 2848 jmp     loc_111AB ;~ 01A2:133E
loc_11341:
	// 4690 
cs=0x192;eip=0x001341; 	T(MOV(dx, 0x5E7E));	// 2852 mov     dx, 5E7Eh ;~ 01A2:1341
cs=0x192;eip=0x001344; 	T(MOV(bx, 0x1A05));	// 2853 mov     bx, 1A05h ;~ 01A2:1344
cs=0x192;eip=0x001347; 	R(JMP(loc_11209));	// 2854 jmp     loc_11209 ;~ 01A2:1347
loc_1134a:
	// 4691 
cs=0x192;eip=0x00134a; 	T(MOV(cl, byte_15b37));	// 2859 mov     cl, byte_15B37 ;~ 01A2:134A
cs=0x192;eip=0x00134e; 	T(MOV(ch, 0));	// 2860 mov     ch, 0 ;~ 01A2:134E
cs=0x192;eip=0x001350; 	R(CALL(sub_11f89,0));	// 2861 call    sub_11F89 ;~ 01A2:1350
cs=0x192;eip=0x001353; 	R(CALL(sub_12023,0));	// 2862 call    sub_12023 ;~ 01A2:1353
cs=0x192;eip=0x001356; 	R(JMP(loc_11359));	// 2863 jmp     short loc_11359 ;~ 01A2:1356
loc_11359:
	// 4692 
cs=0x192;eip=0x001359; 	X(MOV(byte_15b38, 0));	// 2870 mov     byte_15B38, 0 ;~ 01A2:1359
cs=0x192;eip=0x00135e; 	T(MOV(bx, 0x1375));	// 2871 mov     bx, 1375h ;~ 01A2:135E
cs=0x192;eip=0x001361; 	T(MOV(dx, 0x5D82));	// 2872 mov     dx, 5D82h ;~ 01A2:1361
cs=0x192;eip=0x001364; 	R(JMP(loc_11209));	// 2873 jmp     loc_11209 ;~ 01A2:1364
loc_11367:
	// 4693 
cs=0x192;eip=0x001367; 	X(MOV(byte_15b38, 0));	// 2879 mov     byte_15B38, 0 ;~ 01A2:1367
cs=0x192;eip=0x00136c; 	T(MOV(bx, 0x1725));	// 2880 mov     bx, 1725h ;~ 01A2:136C
cs=0x192;eip=0x00136f; 	T(MOV(dx, 0x5C69));	// 2881 mov     dx, 5C69h ;~ 01A2:136F
cs=0x192;eip=0x001372; 	R(JMP(loc_11209));	// 2882 jmp     loc_11209 ;~ 01A2:1372
ret_1a2_1375:
	// 4694 
cs=0x192;eip=0x001375; 	R(CALL(sub_11d36,0));	// 2885 call    sub_11D36 ;~ 01A2:1375
cs=0x192;eip=0x001378; 	R(JNZ(loc_113a9));	// 2886 jnz     short loc_113A9 ;~ 01A2:1378
cs=0x192;eip=0x00137a; 	T(MOV(bx, word_11bb4));	// 2887 mov     bx, word_11BB4 ;~ 01A2:137A
cs=0x192;eip=0x00137e; 	T(MOV(dx, 0x4A6));	// 2888 mov     dx, 4A6h ;~ 01A2:137E
cs=0x192;eip=0x001381; 	R(CALL(sub_11daa,0));	// 2889 call    sub_11DAA ;~ 01A2:1381
cs=0x192;eip=0x001384; 	T(ADD(bx, dx));	// 2890 add     bx, dx ;~ 01A2:1384
cs=0x192;eip=0x001386; 	T(CMP(*(raddr(ds,bx)), 0));	// 2891 cmp     byte ptr [bx], 0 ;~ 01A2:1386
cs=0x192;eip=0x001389; 	R(JNZ(loc_11393));	// 2892 jnz     short loc_11393 ;~ 01A2:1389
cs=0x192;eip=0x00138b; 	T(MOV(cx, 2));	// 2893 mov     cx, 2 ;~ 01A2:138B
cs=0x192;eip=0x00138e; 	X(PUSH(dx));	// 2894 push    dx ;~ 01A2:138E
cs=0x192;eip=0x00138f; 	R(CALL(sub_11f89,0));	// 2895 call    sub_11F89 ;~ 01A2:138F
cs=0x192;eip=0x001392; 	X(POP(dx));	// 2896 pop     dx ;~ 01A2:1392
loc_11393:
	// 4695 
cs=0x192;eip=0x001393; 	X(INC(byte_11bcd));	// 2899 inc     byte_11BCD ;~ 01A2:1393
cs=0x192;eip=0x001397; 	X(ADD(word_11bb4, 0x20));	// 2900 add     word_11BB4, 20h ; ' ' ;~ 01A2:1397
cs=0x192;eip=0x00139c; 	T(MOV(bx, dx));	// 2901 mov     bx, dx ;~ 01A2:139C
cs=0x192;eip=0x00139e; 	T(ADD(bx, word_11bb4));	// 2902 add     bx, word_11BB4 ;~ 01A2:139E
cs=0x192;eip=0x0013a2; 	T(CMP(*(raddr(ds,bx)), 0));	// 2903 cmp     byte ptr [bx], 0 ;~ 01A2:13A2
cs=0x192;eip=0x0013a5; 	R(JZ(loc_113e2));	// 2904 jz      short loc_113E2 ;~ 01A2:13A5
cs=0x192;eip=0x0013a7; 	R(JMP(loc_11367));	// 2905 jmp     short loc_11367 ;~ 01A2:13A7
loc_113a9:
	// 4696 
cs=0x192;eip=0x0013a9; 	T(CMP(byte_11bcd, 0x0FF));	// 2909 cmp     byte_11BCD, 0FFh ;~ 01A2:13A9
cs=0x192;eip=0x0013ae; 	T(MOV(dx, 0x4A6));	// 2910 mov     dx, 4A6h ;~ 01A2:13AE
cs=0x192;eip=0x0013b1; 	R(JNS(loc_113b6));	// 2911 jns     short loc_113B6 ;~ 01A2:13B1
cs=0x192;eip=0x0013b3; 	T(MOV(dx, 0x546));	// 2912 mov     dx, 546h ;~ 01A2:13B3
loc_113b6:
	// 4697 
cs=0x192;eip=0x0013b6; 	R(CALL(sub_11daa,0));	// 2915 call    sub_11DAA ;~ 01A2:13B6
cs=0x192;eip=0x0013b9; 	T(MOV(bx, word_11bb4));	// 2916 mov     bx, word_11BB4 ;~ 01A2:13B9
cs=0x192;eip=0x0013bd; 	T(ADD(bx, dx));	// 2917 add     bx, dx ;~ 01A2:13BD
cs=0x192;eip=0x0013bf; 	T(CMP(*(raddr(ds,bx)), 0));	// 2918 cmp     byte ptr [bx], 0 ;~ 01A2:13BF
cs=0x192;eip=0x0013c2; 	R(JZ(loc_113e2));	// 2919 jz      short loc_113E2 ;~ 01A2:13C2
cs=0x192;eip=0x0013c4; 	T(TEST(byte_15b35, 0x10));	// 2920 test    byte_15B35, 10h ;~ 01A2:13C4
cs=0x192;eip=0x0013c9; 	R(JZ(loc_113d9));	// 2921 jz      short loc_113D9 ;~ 01A2:13C9
cs=0x192;eip=0x0013cb; 	X(MOV(byte_11bd8, 1));	// 2922 mov     byte_11BD8, 1 ;~ 01A2:13CB
cs=0x192;eip=0x0013d0; 	T(MOV(bx, 0x1429));	// 2923 mov     bx, 1429h ;~ 01A2:13D0
cs=0x192;eip=0x0013d3; 	T(MOV(dx, 0x5D58));	// 2924 mov     dx, 5D58h ;~ 01A2:13D3
cs=0x192;eip=0x0013d6; 	R(JMP(loc_11209));	// 2925 jmp     loc_11209 ;~ 01A2:13D6
loc_113d9:
	// 4698 
cs=0x192;eip=0x0013d9; 	T(TEST(byte_15b35, 4));	// 2929 test    byte_15B35, 4 ;~ 01A2:13D9
cs=0x192;eip=0x0013de; 	R(JNZ(loc_113e2));	// 2930 jnz     short loc_113E2 ;~ 01A2:13DE
cs=0x192;eip=0x0013e0; 	R(JMP(loc_11367));	// 2931 jmp     short loc_11367 ;~ 01A2:13E0
loc_113e2:
	// 4699 
cs=0x192;eip=0x0013e2; 	T(TEST(byte_15b35, 2));	// 2936 test    byte_15B35, 2 ;~ 01A2:13E2
cs=0x192;eip=0x0013e7; 	R(JZ(loc_1140c));	// 2937 jz      short loc_1140C ;~ 01A2:13E7
cs=0x192;eip=0x0013e9; 	T(MOV(al, byte_11bd9));	// 2938 mov     al, byte_11BD9 ;~ 01A2:13E9
cs=0x192;eip=0x0013ec; 	T(DEC(al));	// 2939 dec     al ;~ 01A2:13EC
cs=0x192;eip=0x0013ee; 	R(JZ(loc_11402));	// 2940 jz      short loc_11402 ;~ 01A2:13EE
cs=0x192;eip=0x0013f0; 	R(CALL(sub_11d00,0));	// 2941 call    sub_11D00 ;~ 01A2:13F0
cs=0x192;eip=0x0013f3; 	T(MOV(cx, 2));	// 2942 mov     cx, 2 ;~ 01A2:13F3
cs=0x192;eip=0x0013f6; 	R(CALL(sub_11f89,0));	// 2943 call    sub_11F89 ;~ 01A2:13F6
cs=0x192;eip=0x0013f9; 	T(MOV(dx, 0x5DAC));	// 2944 mov     dx, 5DACh ;~ 01A2:13F9
cs=0x192;eip=0x0013fc; 	T(MOV(bx, 0x1BB2));	// 2945 mov     bx, 1BB2h ;~ 01A2:13FC
cs=0x192;eip=0x0013ff; 	R(JMP(loc_11209));	// 2946 jmp     loc_11209 ;~ 01A2:13FF
loc_11402:
	// 4700 
cs=0x192;eip=0x001402; 	X(MOV(byte_11bd9, al));	// 2951 mov     byte_11BD9, al ;~ 01A2:1402
cs=0x192;eip=0x001405; 	R(JMP(loc_111ab));	// 2952 jmp     loc_111AB ;~ 01A2:1405
loc_11408:
	// 4701 
cs=0x192;eip=0x001408; 	T(INC(al));	// 2956 inc     al ;~ 01A2:1408
cs=0x192;eip=0x00140a; 	R(JMP(loc_11402));	// 2957 jmp     short loc_11402 ;~ 01A2:140A
loc_1140c:
	// 4702 
cs=0x192;eip=0x00140c; 	T(TEST(byte_15b35, 1));	// 2961 test    byte_15B35, 1 ;~ 01A2:140C
cs=0x192;eip=0x001411; 	R(JZ(loc_11426));	// 2962 jz      short loc_11426 ;~ 01A2:1411
cs=0x192;eip=0x001413; 	T(MOV(al, byte_11bd9));	// 2963 mov     al, byte_11BD9 ;~ 01A2:1413
cs=0x192;eip=0x001416; 	T(OR(al, al));	// 2964 or      al, al ;~ 01A2:1416
cs=0x192;eip=0x001418; 	R(JZ(loc_11408));	// 2965 jz      short loc_11408 ;~ 01A2:1418
cs=0x192;eip=0x00141a; 	R(CALL(sub_11d00,0));	// 2966 call    sub_11D00 ;~ 01A2:141A
cs=0x192;eip=0x00141d; 	T(MOV(dx, 0x5DAC));	// 2967 mov     dx, 5DACh ;~ 01A2:141D
cs=0x192;eip=0x001420; 	T(MOV(bx, 0x1B65));	// 2968 mov     bx, 1B65h ;~ 01A2:1420
cs=0x192;eip=0x001423; 	R(JMP(loc_11209));	// 2969 jmp     loc_11209 ;~ 01A2:1423
loc_11426:
	// 4703 
cs=0x192;eip=0x001426; 	R(JMP(loc_111ab));	// 2974 jmp     loc_111AB ;~ 01A2:1426
ret_1a2_1429:
	// 4704 
cs=0x192;eip=0x001429; 	T(CMP(byte_11bd8, 0));	// 2976 cmp     byte_11BD8, 0 ;~ 01A2:1429
cs=0x192;eip=0x00142e; 	R(JZ(loc_1145e));	// 2977 jz      short loc_1145E ;~ 01A2:142E
cs=0x192;eip=0x001430; 	T(CMP(byte_15fe6, 0x0FF));	// 2978 cmp     byte_15FE6, 0FFh ;~ 01A2:1430
cs=0x192;eip=0x001435; 	R(JZ(loc_11447));	// 2979 jz      short loc_11447 ;~ 01A2:1435
cs=0x192;eip=0x001437; 	T(MOV(dx, 0x9C4));	// 2980 mov     dx, 9C4h ;~ 01A2:1437
cs=0x192;eip=0x00143a; 	T(CMP(byte_11bd9, 0));	// 2981 cmp     byte_11BD9, 0 ;~ 01A2:143A
cs=0x192;eip=0x00143f; 	R(JZ(loc_11444));	// 2982 jz      short loc_11444 ;~ 01A2:143F
cs=0x192;eip=0x001441; 	T(MOV(dx, 0x9C9));	// 2983 mov     dx, 9C9h ;~ 01A2:1441
loc_11444:
	// 4705 
cs=0x192;eip=0x001444; 	R(CALL(sub_11be5,0));	// 2986 call    sub_11BE5 ;~ 01A2:1444
loc_11447:
	// 4706 
cs=0x192;eip=0x001447; 	T(CMP(byte_15fda, 0x0FF));	// 2989 cmp     byte_15FDA, 0FFh ;~ 01A2:1447
cs=0x192;eip=0x00144c; 	R(JZ(loc_1145e));	// 2990 jz      short loc_1145E ;~ 01A2:144C
cs=0x192;eip=0x00144e; 	T(MOV(dx, 0x984));	// 2991 mov     dx, 984h ;~ 01A2:144E
cs=0x192;eip=0x001451; 	T(CMP(byte_11bd9, 0));	// 2992 cmp     byte_11BD9, 0 ;~ 01A2:1451
cs=0x192;eip=0x001456; 	R(JZ(loc_1145b));	// 2993 jz      short loc_1145B ;~ 01A2:1456
cs=0x192;eip=0x001458; 	T(MOV(dx, 0x989));	// 2994 mov     dx, 989h ;~ 01A2:1458
loc_1145b:
	// 4707 
cs=0x192;eip=0x00145b; 	R(CALL(sub_11be5,0));	// 2997 call    sub_11BE5 ;~ 01A2:145B
loc_1145e:
	// 4708 
cs=0x192;eip=0x00145e; 	X(MOV(byte_11bd8, 0));	// 3001 mov     byte_11BD8, 0 ;~ 01A2:145E
cs=0x192;eip=0x001463; 	T(TEST(byte_15b35, 0x10));	// 3002 test    byte_15B35, 10h ;~ 01A2:1463
cs=0x192;eip=0x001468; 	R(JNZ(loc_11426));	// 3003 jnz     short loc_11426 ;~ 01A2:1468
cs=0x192;eip=0x00146a; 	R(JMP(loc_11359));	// 3004 jmp     loc_11359 ;~ 01A2:146A
ret_1a2_146d:
	// 4709 
cs=0x192;eip=0x00146d; 	R(CALL(sub_11c97,0));	// 3006 call    sub_11C97 ;~ 01A2:146D
cs=0x192;eip=0x001470; 	R(CALL(sub_11d7b,0));	// 3007 call    sub_11D7B ;~ 01A2:1470
cs=0x192;eip=0x001473; 	R(CALL(sub_11d6b,0));	// 3008 call    sub_11D6B ;~ 01A2:1473
cs=0x192;eip=0x001476; 	R(CALL(sub_11d99,0));	// 3009 call    sub_11D99 ;~ 01A2:1476
cs=0x192;eip=0x001479; 	T(MOV(cx, 4));	// 3010 mov     cx, 4 ;~ 01A2:1479
cs=0x192;eip=0x00147c; 	T(MOV(bx, 0x5FC3));	// 3011 mov     bx, 5FC3h ;~ 01A2:147C
loc_1147f:
	// 4710 
cs=0x192;eip=0x00147f; 	T(MOV(al, *(raddr(ds,bx))));	// 3014 mov     al, [bx] ;~ 01A2:147F
cs=0x192;eip=0x001481; 	T(INC(al));	// 3015 inc     al ;~ 01A2:1481
cs=0x192;eip=0x001483; 	T(CMP(al, 0x0C8));	// 3016 cmp     al, 0C8h ; 'È' ;~ 01A2:1483
cs=0x192;eip=0x001485; 	R(JNC(loc_11499));	// 3017 jnb     short loc_11499 ;~ 01A2:1485
cs=0x192;eip=0x001487; 	T(INC(bx));	// 3018 inc     bx ;~ 01A2:1487
cs=0x192;eip=0x001488; 	R(LOOP(loc_1147f));	// 3019 loop    loc_1147F ;~ 01A2:1488
cs=0x192;eip=0x00148a; 	X(DEC(byte_11bcd));	// 3020 dec     byte_11BCD ;~ 01A2:148A
cs=0x192;eip=0x00148e; 	X(ADD(word_11bb4, 0x0FFE0));	// 3021 add     word_11BB4, 0FFE0h ;~ 01A2:148E
cs=0x192;eip=0x001493; 	X(DEC(byte_11bd8));	// 3022 dec     byte_11BD8 ;~ 01A2:1493
cs=0x192;eip=0x001497; 	R(JNZ(loc_11426));	// 3023 jnz     short loc_11426 ;~ 01A2:1497
loc_11499:
	// 4711 
cs=0x192;eip=0x001499; 	T(MOV(al, 4));	// 3026 mov     al, 4 ;~ 01A2:1499
cs=0x192;eip=0x00149b; 	R(JMP(loc_111f8));	// 3027 jmp     loc_111F8 ;~ 01A2:149B
ret_1a2_149e:
	// 4712 
cs=0x192;eip=0x00149e; 	R(CALL(sub_11d7b,0));	// 3029 call    sub_11D7B ;~ 01A2:149E
cs=0x192;eip=0x0014a1; 	R(CALL(sub_11c33,0));	// 3030 call    sub_11C33 ;~ 01A2:14A1
cs=0x192;eip=0x0014a4; 	R(CALL(sub_11d99,0));	// 3031 call    sub_11D99 ;~ 01A2:14A4
cs=0x192;eip=0x0014a7; 	R(CALL(sub_11ccd,0));	// 3032 call    sub_11CCD ;~ 01A2:14A7
cs=0x192;eip=0x0014aa; 	T(TEST(byte_15b35, 8));	// 3033 test    byte_15B35, 8 ;~ 01A2:14AA
cs=0x192;eip=0x0014af; 	R(JZ(loc_114c9));	// 3034 jz      short loc_114C9 ;~ 01A2:14AF
loc_114b1:
	// 4713 
cs=0x192;eip=0x0014b1; 	X(MOV(byte_15b38, 1));	// 3037 mov     byte_15B38, 1 ;~ 01A2:14B1
cs=0x192;eip=0x0014b6; 	X(MOV(byte_15b37, 1));	// 3038 mov     byte_15B37, 1 ;~ 01A2:14B6
cs=0x192;eip=0x0014bb; 	X(MOV(byte_11bd8, 4));	// 3039 mov     byte_11BD8, 4 ;~ 01A2:14BB
cs=0x192;eip=0x0014c0; 	T(MOV(bx, 0x146D));	// 3040 mov     bx, 146Dh ;~ 01A2:14C0
cs=0x192;eip=0x0014c3; 	T(MOV(dx, 0x5DD6));	// 3041 mov     dx, 5DD6h ;~ 01A2:14C3
cs=0x192;eip=0x0014c6; 	R(JMP(loc_11209));	// 3042 jmp     loc_11209 ;~ 01A2:14C6
loc_114c9:
	// 4714 
cs=0x192;eip=0x0014c9; 	T(TEST(byte_15b35, 0x10));	// 3046 test    byte_15B35, 10h ;~ 01A2:14C9
cs=0x192;eip=0x0014ce; 	R(JNZ(loc_114dd));	// 3047 jnz     short loc_114DD ;~ 01A2:14CE
cs=0x192;eip=0x0014d0; 	T(TEST(byte_15b35, 1));	// 3048 test    byte_15B35, 1 ;~ 01A2:14D0
cs=0x192;eip=0x0014d5; 	R(JZ(loc_114da));	// 3049 jz      short loc_114DA ;~ 01A2:14D5
cs=0x192;eip=0x0014d7; 	R(JMP(loc_111ab));	// 3050 jmp     loc_111AB ;~ 01A2:14D7
loc_114da:
	// 4715 
cs=0x192;eip=0x0014da; 	R(JMP(loc_11367));	// 3054 jmp     loc_11367 ;~ 01A2:14DA
loc_114dd:
	// 4716 
cs=0x192;eip=0x0014dd; 	X(MOV(byte_11bd8, 5));	// 3059 mov     byte_11BD8, 5 ;~ 01A2:14DD
cs=0x192;eip=0x0014e2; 	T(MOV(bx, 0x14EB));	// 3060 mov     bx, 14EBh ;~ 01A2:14E2
cs=0x192;eip=0x0014e5; 	T(MOV(dx, 0x5DD6));	// 3061 mov     dx, 5DD6h ;~ 01A2:14E5
cs=0x192;eip=0x0014e8; 	R(JMP(loc_11209));	// 3062 jmp     loc_11209 ;~ 01A2:14E8
ret_1a2_14eb:
	// 4717 
cs=0x192;eip=0x0014eb; 	T(MOV(bx, 0x14F4));	// 3064 mov     bx, 14F4h ;~ 01A2:14EB
cs=0x192;eip=0x0014ee; 	T(MOV(dx, 0x5E2A));	// 3065 mov     dx, 5E2Ah ;~ 01A2:14EE
cs=0x192;eip=0x0014f1; 	R(JMP(loc_11209));	// 3066 jmp     loc_11209 ;~ 01A2:14F1
ret_1a2_14f4:
	// 4718 
cs=0x192;eip=0x0014f4; 	T(MOV(al, byte_15fc8));	// 3068 mov     al, byte_15FC8 ;~ 01A2:14F4
cs=0x192;eip=0x0014f7; 	T(INC(al));	// 3069 inc     al ;~ 01A2:14F7
cs=0x192;eip=0x0014f9; 	R(JNZ(loc_114fe));	// 3070 jnz     short loc_114FE ;~ 01A2:14F9
cs=0x192;eip=0x0014fb; 	R(JMP(loc_1129a));	// 3071 jmp     loc_1129A ;~ 01A2:14FB
loc_114fe:
	// 4719 
cs=0x192;eip=0x0014fe; 	T(MOV(dx, 0x924));	// 3075 mov     dx, 924h ;~ 01A2:14FE
cs=0x192;eip=0x001501; 	T(CMP(byte_11bd9, 0));	// 3076 cmp     byte_11BD9, 0 ;~ 01A2:1501
cs=0x192;eip=0x001506; 	R(JZ(loc_1150b));	// 3077 jz      short loc_1150B ;~ 01A2:1506
cs=0x192;eip=0x001508; 	T(MOV(dx, 0x929));	// 3078 mov     dx, 929h ;~ 01A2:1508
loc_1150b:
	// 4720 
cs=0x192;eip=0x00150b; 	R(CALL(sub_11be5,0));	// 3081 call    sub_11BE5 ;~ 01A2:150B
cs=0x192;eip=0x00150e; 	R(JMP(loc_1129a));	// 3082 jmp     loc_1129A ;~ 01A2:150E
ret_1a2_1511:
	// 4721 
cs=0x192;eip=0x001511; 	R(CALL(sub_11d7b,0));	// 3084 call    sub_11D7B ;~ 01A2:1511
cs=0x192;eip=0x001514; 	R(CALL(sub_11c33,0));	// 3085 call    sub_11C33 ;~ 01A2:1514
cs=0x192;eip=0x001517; 	R(CALL(sub_11d99,0));	// 3086 call    sub_11D99 ;~ 01A2:1517
cs=0x192;eip=0x00151a; 	R(CALL(sub_11ccd,0));	// 3087 call    sub_11CCD ;~ 01A2:151A
cs=0x192;eip=0x00151d; 	T(MOV(al, byte_11bc8));	// 3088 mov     al, byte_11BC8 ;~ 01A2:151D
cs=0x192;eip=0x001520; 	T(INC(al));	// 3089 inc     al ;~ 01A2:1520
cs=0x192;eip=0x001522; 	R(JZ(loc_11551));	// 3090 jz      short loc_11551 ;~ 01A2:1522
cs=0x192;eip=0x001524; 	T(INC(al));	// 3091 inc     al ;~ 01A2:1524
cs=0x192;eip=0x001526; 	R(JZ(loc_11551));	// 3092 jz      short loc_11551 ;~ 01A2:1526
cs=0x192;eip=0x001528; 	X(DEC(byte_11bc8));	// 3093 dec     byte_11BC8 ;~ 01A2:1528
cs=0x192;eip=0x00152c; 	R(JZ(loc_11531));	// 3094 jz      short loc_11531 ;~ 01A2:152C
cs=0x192;eip=0x00152e; 	R(JMP(loc_111ab));	// 3095 jmp     loc_111AB ;~ 01A2:152E
loc_11531:
	// 4722 
cs=0x192;eip=0x001531; 	T(MOV(cx, 0x11));	// 3099 mov     cx, 11h ;~ 01A2:1531
cs=0x192;eip=0x001534; 	T(MOV(si, 0x5F5C));	// 3100 mov     si, 5F5Ch ;~ 01A2:1534
cs=0x192;eip=0x001537; 	T(MOV(bx, 0x58B));	// 3101 mov     bx, 58Bh ;~ 01A2:1537
cs=0x192;eip=0x00153a; 	R(CALL(sub_10bf7,0));	// 3102 call    sub_10BF7 ;~ 01A2:153A
cs=0x192;eip=0x00153d; 	T(MOV(cx, 0x12));	// 3103 mov     cx, 12h ;~ 01A2:153D
cs=0x192;eip=0x001540; 	T(MOV(si, 0x5F6D));	// 3104 mov     si, 5F6Dh ;~ 01A2:1540
cs=0x192;eip=0x001543; 	T(MOV(bx, 0x5EB));	// 3105 mov     bx, 5EBh ;~ 01A2:1543
cs=0x192;eip=0x001546; 	R(CALL(sub_10bf7,0));	// 3106 call    sub_10BF7 ;~ 01A2:1546
cs=0x192;eip=0x001549; 	X(MOV(byte_11bc8, 0x0C8));	// 3107 mov     byte_11BC8, 0C8h ; 'È' ;~ 01A2:1549
cs=0x192;eip=0x00154e; 	R(JMP(loc_11367));	// 3108 jmp     loc_11367 ;~ 01A2:154E
loc_11551:
	// 4723 
cs=0x192;eip=0x001551; 	T(MOV(al, byte_15b35));	// 3113 mov     al, byte_15B35 ;~ 01A2:1551
cs=0x192;eip=0x001554; 	T(TEST(al, 8));	// 3114 test    al, 8 ;~ 01A2:1554
cs=0x192;eip=0x001556; 	R(JZ(loc_1155b));	// 3115 jz      short loc_1155B ;~ 01A2:1556
cs=0x192;eip=0x001558; 	R(JMP(loc_114b1));	// 3116 jmp     loc_114B1 ;~ 01A2:1558
loc_1155b:
	// 4724 
cs=0x192;eip=0x00155b; 	T(TEST(al, 0x10));	// 3120 test    al, 10h ;~ 01A2:155B
cs=0x192;eip=0x00155d; 	R(JZ(loc_11562));	// 3121 jz      short loc_11562 ;~ 01A2:155D
cs=0x192;eip=0x00155f; 	R(JMP(loc_114dd));	// 3122 jmp     loc_114DD ;~ 01A2:155F
loc_11562:
	// 4725 
cs=0x192;eip=0x001562; 	T(TEST(al, 2));	// 3126 test    al, 2 ;~ 01A2:1562
cs=0x192;eip=0x001564; 	R(JNZ(loc_11569));	// 3127 jnz     short loc_11569 ;~ 01A2:1564
cs=0x192;eip=0x001566; 	R(JMP(loc_11367));	// 3128 jmp     loc_11367 ;~ 01A2:1566
loc_11569:
	// 4726 
cs=0x192;eip=0x001569; 	R(JMP(loc_111ab));	// 3132 jmp     loc_111AB ;~ 01A2:1569
loc_1156c:
	// 4727 
cs=0x192;eip=0x00156c; 	T(CMP(byte_11bce, 0x0FD));	// 3136 cmp     byte_11BCE, 0FDh ; 'ı' ;~ 01A2:156C
cs=0x192;eip=0x001571; 	R(JNZ(loc_11576));	// 3137 jnz     short loc_11576 ;~ 01A2:1571
cs=0x192;eip=0x001573; 	R(JMP(loc_11213));	// 3138 jmp     loc_11213 ;~ 01A2:1573
loc_11576:
	// 4728 
cs=0x192;eip=0x001576; 	R(CALL(sub_11d99,0));	// 3142 call    sub_11D99 ;~ 01A2:1576
cs=0x192;eip=0x001579; 	X(XOR(byte_15b3a, 1));	// 3143 xor     byte_15B3A, 1 ;~ 01A2:1579
cs=0x192;eip=0x00157e; 	R(JNZ(loc_1156c));	// 3144 jnz     short loc_1156C ;~ 01A2:157E
cs=0x192;eip=0x001580; 	T(MOV(dx, 0x1F5C));	// 3145 mov     dx, 1F5Ch ;~ 01A2:1580
cs=0x192;eip=0x001583; 	T(MOV(ax, 0x484));	// 3146 mov     ax, 484h ;~ 01A2:1583
cs=0x192;eip=0x001586; 	R(CALL(sub_11ee6,0));	// 3147 call    sub_11EE6 ;~ 01A2:1586
cs=0x192;eip=0x001589; 	T(MOV(dx, 0x5B6A));	// 3148 mov     dx, 5B6Ah ;~ 01A2:1589
cs=0x192;eip=0x00158c; 	T(MOV(ax, 4));	// 3149 mov     ax, 4 ;~ 01A2:158C
cs=0x192;eip=0x00158f; 	R(CALL(sub_11ee6,0));	// 3150 call    sub_11EE6 ;~ 01A2:158F
cs=0x192;eip=0x001592; 	X(DEC(byte_11bd8));	// 3151 dec     byte_11BD8 ;~ 01A2:1592
cs=0x192;eip=0x001596; 	R(JZ(loc_1159b));	// 3152 jz      short loc_1159B ;~ 01A2:1596
cs=0x192;eip=0x001598; 	R(JMP(loc_111ab));	// 3153 jmp     loc_111AB ;~ 01A2:1598
loc_1159b:
	// 4729 
cs=0x192;eip=0x00159b; 	T(MOV(dx, 0x1F25));	// 3157 mov     dx, 1F25h ;~ 01A2:159B
cs=0x192;eip=0x00159e; 	T(MOV(ax, 0x484));	// 3158 mov     ax, 484h ;~ 01A2:159E
cs=0x192;eip=0x0015a1; 	R(CALL(sub_11ee6,0));	// 3159 call    sub_11EE6 ;~ 01A2:15A1
cs=0x192;eip=0x0015a4; 	X(MOV(byte_11bc8, 0x10));	// 3160 mov     byte_11BC8, 10h ;~ 01A2:15A4
cs=0x192;eip=0x0015a9; 	R(JMP(loc_11367));	// 3161 jmp     loc_11367 ;~ 01A2:15A9
ret_1a2_15ac:
	// 4730 
cs=0x192;eip=0x0015ac; 	X(DEC(byte_11bd8));	// 3163 dec     byte_11BD8 ;~ 01A2:15AC
cs=0x192;eip=0x0015b0; 	R(JZ(loc_115b5));	// 3164 jz      short loc_115B5 ;~ 01A2:15B0
cs=0x192;eip=0x0015b2; 	R(JMP(loc_111ab));	// 3165 jmp     loc_111AB ;~ 01A2:15B2
loc_115b5:
	// 4731 
cs=0x192;eip=0x0015b5; 	T(MOV(bx, word_11bb6));	// 3169 mov     bx, word_11BB6 ;~ 01A2:15B5
cs=0x192;eip=0x0015b9; 	T(MOV(al, *(raddr(ds,bx))));	// 3170 mov     al, [bx] ;~ 01A2:15B9
cs=0x192;eip=0x0015bb; 	X(MOV(byte_15b30, al));	// 3171 mov     byte_15B30, al ;~ 01A2:15BB
cs=0x192;eip=0x0015be; 	T(MOV(cx, 5));	// 3172 mov     cx, 5 ;~ 01A2:15BE
loc_115c1:
	// 4732 
cs=0x192;eip=0x0015c1; 	T(INC(bx));	// 3175 inc     bx ;~ 01A2:15C1
cs=0x192;eip=0x0015c2; 	T(MOV(al, *(raddr(ds,bx))));	// 3176 mov     al, [bx] ;~ 01A2:15C2
cs=0x192;eip=0x0015c4; 	T(DEC(bx));	// 3177 dec     bx ;~ 01A2:15C4
cs=0x192;eip=0x0015c5; 	X(MOV(*(raddr(ds,bx)), al));	// 3178 mov     [bx], al ;~ 01A2:15C5
cs=0x192;eip=0x0015c7; 	T(INC(bx));	// 3179 inc     bx ;~ 01A2:15C7
cs=0x192;eip=0x0015c8; 	T(CMP(al, 3));	// 3180 cmp     al, 3 ;~ 01A2:15C8
cs=0x192;eip=0x0015ca; 	R(JZ(loc_115ce));	// 3181 jz      short loc_115CE ;~ 01A2:15CA
cs=0x192;eip=0x0015cc; 	R(LOOP(loc_115c1));	// 3182 loop    loc_115C1 ;~ 01A2:15CC
loc_115ce:
	// 4733 
cs=0x192;eip=0x0015ce; 	T(DEC(bx));	// 3185 dec     bx ;~ 01A2:15CE
cs=0x192;eip=0x0015cf; 	T(MOV(al, byte_15b30));	// 3186 mov     al, byte_15B30 ;~ 01A2:15CF
cs=0x192;eip=0x0015d2; 	T(CMP(al, 4));	// 3187 cmp     al, 4 ;~ 01A2:15D2
cs=0x192;eip=0x0015d4; 	R(JNZ(loc_1160e));	// 3188 jnz     short loc_1160E ;~ 01A2:15D4
cs=0x192;eip=0x0015d6; 	X(INC(byte_15faa));	// 3189 inc     byte_15FAA ;~ 01A2:15D6
cs=0x192;eip=0x0015da; 	T(MOV(bx, word_11ba4));	// 3190 mov     bx, word_11BA4 ;~ 01A2:15DA
cs=0x192;eip=0x0015de; 	T(MOV(al, *(raddr(ds,bx))));	// 3191 mov     al, [bx] ;~ 01A2:15DE
cs=0x192;eip=0x0015e0; 	T(OR(al, al));	// 3192 or      al, al ;~ 01A2:15E0
cs=0x192;eip=0x0015e2; 	R(JZ(loc_115f1));	// 3193 jz      short loc_115F1 ;~ 01A2:15E2
cs=0x192;eip=0x0015e4; 	T(ADD(al, 5));	// 3194 add     al, 5 ;~ 01A2:15E4
cs=0x192;eip=0x0015e6; 	T(CMP(al, byte_15faa));	// 3195 cmp     al, byte_15FAA ;~ 01A2:15E6
cs=0x192;eip=0x0015ea; 	R(JNZ(loc_115f1));	// 3196 jnz     short loc_115F1 ;~ 01A2:15EA
cs=0x192;eip=0x0015ec; 	X(MOV(byte_15fa8, 8));	// 3197 mov     byte_15FA8, 8 ;~ 01A2:15EC
loc_115f1:
	// 4734 
cs=0x192;eip=0x0015f1; 	X(INC(byte_11bd0));	// 3201 inc     byte_11BD0 ;~ 01A2:15F1
cs=0x192;eip=0x0015f5; 	R(CALL(sub_1107c,0));	// 3202 call    sub_1107C ;~ 01A2:15F5
cs=0x192;eip=0x0015f8; 	T(AND(al, 1));	// 3203 and     al, 1 ;~ 01A2:15F8
cs=0x192;eip=0x0015fa; 	T(ADD(al, 0x25));	// 3204 add     al, 25h ; '%' ;~ 01A2:15FA
cs=0x192;eip=0x0015fc; 	X(MOV(byte_15fac, al));	// 3205 mov     byte_15FAC, al ;~ 01A2:15FC
cs=0x192;eip=0x0015ff; 	T(MOV(si, 0x5FA7));	// 3206 mov     si, 5FA7h ;~ 01A2:15FF
cs=0x192;eip=0x001602; 	R(CALL(sub_104b7,0));	// 3207 call    sub_104B7 ;~ 01A2:1602
cs=0x192;eip=0x001605; 	T(MOV(cx, 0x64));	// 3208 mov     cx, 64h ; 'd' ;~ 01A2:1605
cs=0x192;eip=0x001608; 	R(CALL(sub_11f6b,0));	// 3209 call    sub_11F6B ;~ 01A2:1608
cs=0x192;eip=0x00160b; 	R(JMP(loc_11367));	// 3210 jmp     loc_11367 ;~ 01A2:160B
loc_1160e:
	// 4735 
cs=0x192;eip=0x00160e; 	T(XOR(ah, ah));	// 3214 xor     ah, ah ;~ 01A2:160E
cs=0x192;eip=0x001610; 	T(CMP(byte_15b3b, ah));	// 3215 cmp     byte_15B3B, ah ;~ 01A2:1610
cs=0x192;eip=0x001614; 	R(JNZ(loc_11618));	// 3216 jnz     short loc_11618 ;~ 01A2:1614
cs=0x192;eip=0x001616; 	T(MOV(ah, 0x80));	// 3217 mov     ah, 80h ; '€' ;~ 01A2:1616
loc_11618:
	// 4736 
cs=0x192;eip=0x001618; 	T(MOV(al, byte_11bdd));	// 3220 mov     al, byte_11BDD ;~ 01A2:1618
cs=0x192;eip=0x00161b; 	T(OR(al, al));	// 3221 or      al, al ;~ 01A2:161B
cs=0x192;eip=0x00161d; 	R(JNZ(loc_11622));	// 3222 jnz     short loc_11622 ;~ 01A2:161D
cs=0x192;eip=0x00161f; 	T(MOV(ax, 3));	// 3223 mov     ax, 3 ;~ 01A2:161F
loc_11622:
	// 4737 
cs=0x192;eip=0x001622; 	T(OR(al, ah));	// 3226 or      al, ah ;~ 01A2:1622
cs=0x192;eip=0x001624; 	X(MOV(*(raddr(ds,bx)), al));	// 3227 mov     [bx], al ;~ 01A2:1624
cs=0x192;eip=0x001626; 	T(OR(ah, ah));	// 3228 or      ah, ah ;~ 01A2:1626
cs=0x192;eip=0x001628; 	R(JZ(loc_1162f));	// 3229 jz      short loc_1162F ;~ 01A2:1628
cs=0x192;eip=0x00162a; 	X(MOV(byte_15b3b, 1));	// 3230 mov     byte_15B3B, 1 ;~ 01A2:162A
loc_1162f:
	// 4738 
cs=0x192;eip=0x00162f; 	T(MOV(al, byte_15b30));	// 3233 mov     al, byte_15B30 ;~ 01A2:162F
cs=0x192;eip=0x001632; 	T(TEST(al, 0x80));	// 3234 test    al, 80h ;~ 01A2:1632
cs=0x192;eip=0x001634; 	R(JZ(loc_11640));	// 3235 jz      short loc_11640 ;~ 01A2:1634
cs=0x192;eip=0x001636; 	T(AND(al, 0x7F));	// 3236 and     al, 7Fh ;~ 01A2:1636
cs=0x192;eip=0x001638; 	X(PUSH(ax));	// 3237 push    ax ;~ 01A2:1638
cs=0x192;eip=0x001639; 	T(MOV(si, 0x5F93));	// 3238 mov     si, 5F93h ;~ 01A2:1639
cs=0x192;eip=0x00163c; 	R(CALL(sub_104b7,0));	// 3239 call    sub_104B7 ;~ 01A2:163C
cs=0x192;eip=0x00163f; 	X(POP(ax));	// 3240 pop     ax ;~ 01A2:163F
loc_11640:
	// 4739 
cs=0x192;eip=0x001640; 	T(CMP(al, 3));	// 3243 cmp     al, 3 ;~ 01A2:1640
cs=0x192;eip=0x001642; 	R(JNZ(loc_11646));	// 3244 jnz     short loc_11646 ;~ 01A2:1642
cs=0x192;eip=0x001644; 	T(XOR(al, al));	// 3245 xor     al, al ;~ 01A2:1644
loc_11646:
	// 4740 
cs=0x192;eip=0x001646; 	X(MOV(byte_11bdd, al));	// 3248 mov     byte_11BDD, al ;~ 01A2:1646
cs=0x192;eip=0x001649; 	R(CALL(sub_11f32,0));	// 3249 call    sub_11F32 ;~ 01A2:1649
cs=0x192;eip=0x00164c; 	R(JMP(loc_11367));	// 3250 jmp     loc_11367 ;~ 01A2:164C
ret_1a2_164f:
	// 4741 
cs=0x192;eip=0x00164f; 	T(CMP(byte_15fce, 0x0FF));	// 3252 cmp     byte_15FCE, 0FFh ;~ 01A2:164F
cs=0x192;eip=0x001654; 	R(JNZ(loc_11659));	// 3253 jnz     short loc_11659 ;~ 01A2:1654
cs=0x192;eip=0x001656; 	R(JMP(loc_116d9));	// 3254 jmp     loc_116D9 ;~ 01A2:1656
loc_11659:
	// 4742 
cs=0x192;eip=0x001659; 	T(CMP(byte_11bdd, 0));	// 3258 cmp     byte_11BDD, 0 ;~ 01A2:1659
cs=0x192;eip=0x00165e; 	R(JZ(loc_116c2));	// 3259 jz      short loc_116C2 ;~ 01A2:165E
cs=0x192;eip=0x001660; 	T(MOV(al, byte_11bd9));	// 3260 mov     al, byte_11BD9 ;~ 01A2:1660
cs=0x192;eip=0x001663; 	T(DEC(al));	// 3261 dec     al ;~ 01A2:1663
cs=0x192;eip=0x001665; 	T(MOV(bx, 0x508));	// 3262 mov     bx, 508h ;~ 01A2:1665
cs=0x192;eip=0x001668; 	T(MOV(dx, 0x45));	// 3263 mov     dx, 45h ; 'E' ;~ 01A2:1668
cs=0x192;eip=0x00166b; 	R(JZ(loc_11673));	// 3264 jz      short loc_11673 ;~ 01A2:166B
cs=0x192;eip=0x00166d; 	T(MOV(bx, 4));	// 3265 mov     bx, 4 ;~ 01A2:166D
cs=0x192;eip=0x001670; 	T(MOV(dx, 0x40));	// 3266 mov     dx, 40h ; '@' ;~ 01A2:1670
loc_11673:
	// 4743 
cs=0x192;eip=0x001673; 	T(MOV(al, byte_11bce));	// 3269 mov     al, byte_11BCE ;~ 01A2:1673
cs=0x192;eip=0x001676; 	T(ADD(al, bh));	// 3270 add     al, bh ;~ 01A2:1676
cs=0x192;eip=0x001678; 	T(ADD(dx, word_11bb4));	// 3271 add     dx, word_11BB4 ;~ 01A2:1678
cs=0x192;eip=0x00167c; 	X(MOV(byte_16fad, al));	// 3272 mov     byte_16FAD, al ;~ 01A2:167C
cs=0x192;eip=0x00167f; 	T(MOV(al, byte_11bcd));	// 3273 mov     al, byte_11BCD ;~ 01A2:167F
cs=0x192;eip=0x001682; 	T(ADD(al, 2));	// 3274 add     al, 2 ;~ 01A2:1682
cs=0x192;eip=0x001684; 	X(MOV(byte_16fac, al));	// 3275 mov     byte_16FAC, al ;~ 01A2:1684
cs=0x192;eip=0x001687; 	T(MOV(al, byte_11bdd));	// 3276 mov     al, byte_11BDD ;~ 01A2:1687
cs=0x192;eip=0x00168a; 	T(ADD(al, al));	// 3277 add     al, al ;~ 01A2:168A
cs=0x192;eip=0x00168c; 	T(ADD(al, 0x0D0));	// 3278 add     al, 0D0h ; 'Ğ' ;~ 01A2:168C
cs=0x192;eip=0x00168e; 	X(MOV(byte_16fab, al));	// 3279 mov     byte_16FAB, al ;~ 01A2:168E
cs=0x192;eip=0x001691; 	X(MOV(byte_11bdd, 0));	// 3280 mov     byte_11BDD, 0 ;~ 01A2:1691
cs=0x192;eip=0x001696; 	T(MOV(cl, bl));	// 3281 mov     cl, bl ;~ 01A2:1696
cs=0x192;eip=0x001698; 	T(MOV(ch, 0));	// 3282 mov     ch, 0 ;~ 01A2:1698
cs=0x192;eip=0x00169a; 	T(MOV(bx, dx));	// 3283 mov     bx, dx ;~ 01A2:169A
cs=0x192;eip=0x00169c; 	R(CALL(sub_11f32,0));	// 3284 call    sub_11F32 ;~ 01A2:169C
cs=0x192;eip=0x00169f; 	X(MOV(word_16fae, bx));	// 3285 mov     word_16FAE, bx ;~ 01A2:169F
cs=0x192;eip=0x0016a3; 	X(MOV(byte_16fb0, cl));	// 3286 mov     byte_16FB0, cl ;~ 01A2:16A3
cs=0x192;eip=0x0016a7; 	X(MOV(byte_16fb1, cl));	// 3287 mov     byte_16FB1, cl ;~ 01A2:16A7
cs=0x192;eip=0x0016ab; 	T(MOV(bx, 0x6FB1));	// 3288 mov     bx, 6FB1h ;~ 01A2:16AB
cs=0x192;eip=0x0016ae; 	T(TEST(byte_15b35, 8));	// 3289 test    byte_15B35, 8 ;~ 01A2:16AE
cs=0x192;eip=0x0016b3; 	R(JNZ(loc_116be));	// 3290 jnz     short loc_116BE ;~ 01A2:16B3
cs=0x192;eip=0x0016b5; 	T(TEST(byte_15b35, 4));	// 3291 test    byte_15B35, 4 ;~ 01A2:16B5
cs=0x192;eip=0x0016ba; 	R(JZ(loc_116d9));	// 3292 jz      short loc_116D9 ;~ 01A2:16BA
cs=0x192;eip=0x0016bc; 	X(INC(*(raddr(ds,bx))));	// 3293 inc     byte ptr [bx] ;~ 01A2:16BC
loc_116be:
	// 4744 
cs=0x192;eip=0x0016be; 	X(INC(*(raddr(ds,bx))));	// 3296 inc     byte ptr [bx] ;~ 01A2:16BE
cs=0x192;eip=0x0016c0; 	R(JMP(loc_116d9));	// 3297 jmp     short loc_116D9 ;~ 01A2:16C0
loc_116c2:
	// 4745 
cs=0x192;eip=0x0016c2; 	T(CMP(byte_11bd8, 0));	// 3301 cmp     byte_11BD8, 0 ;~ 01A2:16C2
cs=0x192;eip=0x0016c7; 	R(JZ(loc_116d9));	// 3302 jz      short loc_116D9 ;~ 01A2:16C7
cs=0x192;eip=0x0016c9; 	T(MOV(dx, 0x924));	// 3303 mov     dx, 924h ;~ 01A2:16C9
cs=0x192;eip=0x0016cc; 	T(CMP(byte_11bd9, 0));	// 3304 cmp     byte_11BD9, 0 ;~ 01A2:16CC
cs=0x192;eip=0x0016d1; 	R(JZ(loc_116d6));	// 3305 jz      short loc_116D6 ;~ 01A2:16D1
cs=0x192;eip=0x0016d3; 	T(MOV(dx, 0x929));	// 3306 mov     dx, 929h ;~ 01A2:16D3
loc_116d6:
	// 4746 
cs=0x192;eip=0x0016d6; 	R(CALL(sub_11be5,0));	// 3309 call    sub_11BE5 ;~ 01A2:16D6
loc_116d9:
	// 4747 
cs=0x192;eip=0x0016d9; 	X(MOV(byte_11bd8, 0));	// 3313 mov     byte_11BD8, 0 ;~ 01A2:16D9
cs=0x192;eip=0x0016de; 	T(MOV(al, byte_15b35));	// 3314 mov     al, byte_15B35 ;~ 01A2:16DE
cs=0x192;eip=0x0016e1; 	T(TEST(al, 0x10));	// 3315 test    al, 10h ;~ 01A2:16E1
cs=0x192;eip=0x0016e3; 	R(JZ(loc_116e8));	// 3316 jz      short loc_116E8 ;~ 01A2:16E3
cs=0x192;eip=0x0016e5; 	R(JMP(loc_111ab));	// 3317 jmp     loc_111AB ;~ 01A2:16E5
loc_116e8:
	// 4748 
cs=0x192;eip=0x0016e8; 	R(JMP(loc_11367));	// 3321 jmp     loc_11367 ;~ 01A2:16E8
ret_1a2_16eb:
	// 4749 
cs=0x192;eip=0x0016eb; 	X(MOV(byte_11bd8, 2));	// 3323 mov     byte_11BD8, 2 ;~ 01A2:16EB
cs=0x192;eip=0x0016f0; 	T(MOV(bx, 0x16F9));	// 3324 mov     bx, 16F9h ;~ 01A2:16F0
cs=0x192;eip=0x0016f3; 	T(MOV(dx, 0x5E00));	// 3325 mov     dx, 5E00h ;~ 01A2:16F3
cs=0x192;eip=0x0016f6; 	R(JMP(loc_11209));	// 3326 jmp     loc_11209 ;~ 01A2:16F6
ret_1a2_16f9:
	// 4750 
cs=0x192;eip=0x0016f9; 	X(DEC(byte_11bd8));	// 3328 dec     byte_11BD8 ;~ 01A2:16F9
cs=0x192;eip=0x0016fd; 	R(JNZ(loc_11708));	// 3329 jnz     short loc_11708 ;~ 01A2:16FD
cs=0x192;eip=0x0016ff; 	T(MOV(bx, 0x1722));	// 3330 mov     bx, 1722h ;~ 01A2:16FF
cs=0x192;eip=0x001702; 	T(MOV(dx, 0x5DD6));	// 3331 mov     dx, 5DD6h ;~ 01A2:1702
cs=0x192;eip=0x001705; 	R(JMP(loc_11209));	// 3332 jmp     loc_11209 ;~ 01A2:1705
loc_11708:
	// 4751 
cs=0x192;eip=0x001708; 	T(CMP(byte_15fc9, 0x0FF));	// 3336 cmp     byte_15FC9, 0FFh ;~ 01A2:1708
cs=0x192;eip=0x00170d; 	R(JZ(loc_1171f));	// 3337 jz      short loc_1171F ;~ 01A2:170D
cs=0x192;eip=0x00170f; 	T(MOV(dx, 0x925));	// 3338 mov     dx, 925h ;~ 01A2:170F
cs=0x192;eip=0x001712; 	T(CMP(byte_11bd9, 0));	// 3339 cmp     byte_11BD9, 0 ;~ 01A2:1712
cs=0x192;eip=0x001717; 	R(JZ(loc_1171c));	// 3340 jz      short loc_1171C ;~ 01A2:1717
cs=0x192;eip=0x001719; 	T(MOV(dx, 0x928));	// 3341 mov     dx, 928h ;~ 01A2:1719
loc_1171c:
	// 4752 
cs=0x192;eip=0x00171c; 	R(CALL(sub_11be5,0));	// 3344 call    sub_11BE5 ;~ 01A2:171C
loc_1171f:
	// 4753 
cs=0x192;eip=0x00171f; 	R(JMP(loc_111ab));	// 3347 jmp     loc_111AB ;~ 01A2:171F
ret_1a2_1722:
	// 4754 
cs=0x192;eip=0x001722; 	R(JMP(loc_11367));	// 3349 jmp     loc_11367 ;~ 01A2:1722
ret_1a2_1725:
	// 4755 
cs=0x192;eip=0x001725; 	R(CALL(sub_11ff3,0));	// 3351 call    sub_11FF3 ;~ 01A2:1725
cs=0x192;eip=0x001728; 	R(CALL(sub_11d36,0));	// 3352 call    sub_11D36 ;~ 01A2:1728
cs=0x192;eip=0x00172b; 	R(JNZ(loc_11740));	// 3353 jnz     short loc_11740 ;~ 01A2:172B
cs=0x192;eip=0x00172d; 	T(MOV(dx, 0x5E7E));	// 3354 mov     dx, 5E7Eh ;~ 01A2:172D
cs=0x192;eip=0x001730; 	X(MOV(byte_15b37, 1));	// 3355 mov     byte_15B37, 1 ;~ 01A2:1730
cs=0x192;eip=0x001735; 	X(MOV(byte_15b38, 1));	// 3356 mov     byte_15B38, 1 ;~ 01A2:1735
cs=0x192;eip=0x00173a; 	T(MOV(bx, 0x1A05));	// 3357 mov     bx, 1A05h ;~ 01A2:173A
cs=0x192;eip=0x00173d; 	R(JMP(loc_11209));	// 3358 jmp     loc_11209 ;~ 01A2:173D
loc_11740:
	// 4756 
cs=0x192;eip=0x001740; 	T(MOV(al, byte_11bc8));	// 3362 mov     al, byte_11BC8 ;~ 01A2:1740
cs=0x192;eip=0x001743; 	T(CMP(al, 0x10));	// 3363 cmp     al, 10h ;~ 01A2:1743
cs=0x192;eip=0x001745; 	R(JNZ(loc_1174a));	// 3364 jnz     short loc_1174A ;~ 01A2:1745
cs=0x192;eip=0x001747; 	R(JMP(loc_11842));	// 3365 jmp     loc_11842 ;~ 01A2:1747
loc_1174a:
	// 4757 
cs=0x192;eip=0x00174a; 	T(CMP(al, 0x0C8));	// 3369 cmp     al, 0C8h ; 'È' ;~ 01A2:174A
cs=0x192;eip=0x00174c; 	R(JNZ(loc_11751));	// 3370 jnz     short loc_11751 ;~ 01A2:174C
cs=0x192;eip=0x00174e; 	R(JMP(loc_128f6));	// 3371 jmp     loc_128F6 ;~ 01A2:174E
loc_11751:
	// 4758 
cs=0x192;eip=0x001751; 	T(TEST(byte_15b35, 0x10));	// 3375 test    byte_15B35, 10h ;~ 01A2:1751
cs=0x192;eip=0x001756; 	R(JNZ(loc_1175b));	// 3376 jnz     short loc_1175B ;~ 01A2:1756
cs=0x192;eip=0x001758; 	R(JMP(loc_1182c));	// 3377 jmp     loc_1182C ;~ 01A2:1758
loc_1175b:
	// 4759 
cs=0x192;eip=0x00175b; 	T(CMP(byte_15fd6, 0x0FF));	// 3381 cmp     byte_15FD6, 0FFh ;~ 01A2:175B
cs=0x192;eip=0x001760; 	R(JNZ(loc_11765));	// 3382 jnz     short loc_11765 ;~ 01A2:1760
loc_11762:
	// 4760 
cs=0x192;eip=0x001762; 	R(JMP(loc_1180c));	// 3385 jmp     loc_1180C ;~ 01A2:1762
loc_11765:
	// 4761 
cs=0x192;eip=0x001765; 	T(MOV(bx, word_11bb4));	// 3389 mov     bx, word_11BB4 ;~ 01A2:1765
cs=0x192;eip=0x001769; 	T(ADD(bx, 0x4E6));	// 3390 add     bx, 4E6h ;~ 01A2:1769
cs=0x192;eip=0x00176d; 	T(CMP(*(raddr(ds,bx)), 0x8A));	// 3391 cmp     byte ptr [bx], 8Ah ; 'Š' ;~ 01A2:176D
cs=0x192;eip=0x001770; 	R(JNZ(loc_11762));	// 3392 jnz     short loc_11762 ;~ 01A2:1770
cs=0x192;eip=0x001772; 	T(MOV(bx, word_11bbc));	// 3393 mov     bx, word_11BBC ;~ 01A2:1772
cs=0x192;eip=0x001776; 	T(MOV(al, *(raddr(ds,bx))));	// 3394 mov     al, [bx] ;~ 01A2:1776
cs=0x192;eip=0x001778; 	T(CMP(al, 0x3D));	// 3395 cmp     al, 3Dh ; '=' ;~ 01A2:1778
cs=0x192;eip=0x00177a; 	R(JZ(loc_117b7));	// 3396 jz      short loc_117B7 ;~ 01A2:177A
cs=0x192;eip=0x00177c; 	T(CMP(al, 0x4D));	// 3397 cmp     al, 4Dh ; 'M' ;~ 01A2:177C
cs=0x192;eip=0x00177e; 	R(JZ(loc_1179c));	// 3398 jz      short loc_1179C ;~ 01A2:177E
loc_11780:
	// 4762 
cs=0x192;eip=0x001780; 	X(XOR(*raddr(ds,m2c::kloc_12b3d), 0x0EE));	// 3401 xor     byte ptr loc_12B3D, 0EEh ;~ 01A2:1780
cs=0x192;eip=0x001785; 	X(NOT(*raddr(ds,m2c::kloc_12b74)));	// 3402 not     byte ptr loc_12B74 ;~ 01A2:1785
cs=0x192;eip=0x001789; 	T(MOV(si, 0x5EE4));	// 3403 mov     si, 5EE4h ;~ 01A2:1789
cs=0x192;eip=0x00178c; 	T(CMP(*raddr(ds,m2c::kloc_12b74), 0x0FF));	// 3404 cmp     byte ptr loc_12B74, 0FFh ;~ 01A2:178C
cs=0x192;eip=0x001791; 	R(JZ(loc_11796));	// 3405 jz      short loc_11796 ;~ 01A2:1791
cs=0x192;eip=0x001793; 	T(MOV(si, 0x5EF8));	// 3406 mov     si, 5EF8h ;~ 01A2:1793
loc_11796:
	// 4763 
cs=0x192;eip=0x001796; 	R(CALL(sub_104b7,0));	// 3410 call    sub_104B7 ;~ 01A2:1796
cs=0x192;eip=0x001799; 	R(JMP(loc_111ab));	// 3411 jmp     loc_111AB ;~ 01A2:1799
loc_1179c:
	// 4764 
cs=0x192;eip=0x00179c; 	T(CMP(byte_11bcb, 0x0FF));	// 3415 cmp     byte_11BCB, 0FFh ;~ 01A2:179C
cs=0x192;eip=0x0017a1; 	R(JZ(loc_11780));	// 3416 jz      short loc_11780 ;~ 01A2:17A1
cs=0x192;eip=0x0017a3; 	X(XOR(byte_11bca, 0x11));	// 3417 xor     byte_11BCA, 11h ;~ 01A2:17A3
cs=0x192;eip=0x0017a8; 	T(MOV(si, 0x5F20));	// 3418 mov     si, 5F20h ;~ 01A2:17A8
cs=0x192;eip=0x0017ab; 	T(CMP(byte_11bca, 0x0FF));	// 3419 cmp     byte_11BCA, 0FFh ;~ 01A2:17AB
cs=0x192;eip=0x0017b0; 	R(JZ(loc_11796));	// 3420 jz      short loc_11796 ;~ 01A2:17B0
cs=0x192;eip=0x0017b2; 	T(MOV(si, 0x5F0C));	// 3421 mov     si, 5F0Ch ;~ 01A2:17B2
cs=0x192;eip=0x0017b5; 	R(JMP(loc_11796));	// 3422 jmp     short loc_11796 ;~ 01A2:17B5
loc_117b7:
	// 4765 
cs=0x192;eip=0x0017b7; 	T(MOV(bx, 0x1BD0));	// 3426 mov     bx, 1BD0h ;~ 01A2:17B7
cs=0x192;eip=0x0017ba; 	T(MOV(al, byte_11bd1));	// 3427 mov     al, byte_11BD1 ;~ 01A2:17BA
cs=0x192;eip=0x0017bd; 	T(OR(al, al));	// 3428 or      al, al ;~ 01A2:17BD
cs=0x192;eip=0x0017bf; 	R(JZ(loc_117c3));	// 3429 jz      short loc_117C3 ;~ 01A2:17BF
cs=0x192;eip=0x0017c1; 	X(MOV(*(raddr(ds,bx)), al));	// 3430 mov     [bx], al ;~ 01A2:17C1
loc_117c3:
	// 4766 
cs=0x192;eip=0x0017c3; 	T(MOV(al, *(raddr(ds,bx))));	// 3433 mov     al, [bx] ;~ 01A2:17C3
cs=0x192;eip=0x0017c5; 	T(OR(al, al));	// 3434 or      al, al ;~ 01A2:17C5
cs=0x192;eip=0x0017c7; 	R(JZ(loc_117f9));	// 3435 jz      short loc_117F9 ;~ 01A2:17C7
cs=0x192;eip=0x0017c9; 	T(MOV(al, byte_11bc7));	// 3436 mov     al, byte_11BC7 ;~ 01A2:17C9
cs=0x192;eip=0x0017cc; 	T(CMP(al, *(raddr(ds,bx))));	// 3437 cmp     al, [bx] ;~ 01A2:17CC
cs=0x192;eip=0x0017ce; 	R(JNC(loc_11802));	// 3438 jnb     short loc_11802 ;~ 01A2:17CE
loc_117d0:
	// 4767 
cs=0x192;eip=0x0017d0; 	T(MOV(al, byte_11bd1));	// 3441 mov     al, byte_11BD1 ;~ 01A2:17D0
cs=0x192;eip=0x0017d3; 	T(OR(al, al));	// 3442 or      al, al ;~ 01A2:17D3
cs=0x192;eip=0x0017d5; 	R(JNZ(loc_117da));	// 3443 jnz     short loc_117DA ;~ 01A2:17D5
cs=0x192;eip=0x0017d7; 	R(CALL(sub_1201c,0));	// 3444 call    sub_1201C ;~ 01A2:17D7
loc_117da:
	// 4768 
cs=0x192;eip=0x0017da; 	T(MOV(al, byte_11bd0));	// 3447 mov     al, byte_11BD0 ;~ 01A2:17DA
cs=0x192;eip=0x0017dd; 	X(MOV(byte_11bd1, al));	// 3448 mov     byte_11BD1, al ;~ 01A2:17DD
cs=0x192;eip=0x0017e0; 	T(MOV(si, 0x5EBC));	// 3449 mov     si, 5EBCh ;~ 01A2:17E0
cs=0x192;eip=0x0017e3; 	R(CALL(sub_104b7,0));	// 3450 call    sub_104B7 ;~ 01A2:17E3
loc_117e6:
	// 4769 
cs=0x192;eip=0x0017e6; 	T(MOV(si, 0x5F34));	// 3453 mov     si, 5F34h ;~ 01A2:17E6
cs=0x192;eip=0x0017e9; 	R(CALL(sub_104b7,0));	// 3454 call    sub_104B7 ;~ 01A2:17E9
cs=0x192;eip=0x0017ec; 	X(MOV(byte_15faa, 5));	// 3455 mov     byte_15FAA, 5 ;~ 01A2:17EC
cs=0x192;eip=0x0017f1; 	X(MOV(byte_15fa8, 2));	// 3456 mov     byte_15FA8, 2 ;~ 01A2:17F1
cs=0x192;eip=0x0017f6; 	R(JMP(loc_111ab));	// 3457 jmp     loc_111AB ;~ 01A2:17F6
loc_117f9:
	// 4770 
cs=0x192;eip=0x0017f9; 	T(MOV(si, 0x5EA8));	// 3461 mov     si, 5EA8h ;~ 01A2:17F9
cs=0x192;eip=0x0017fc; 	R(CALL(sub_104b7,0));	// 3462 call    sub_104B7 ;~ 01A2:17FC
cs=0x192;eip=0x0017ff; 	R(JMP(loc_111ab));	// 3463 jmp     loc_111AB ;~ 01A2:17FF
loc_11802:
	// 4771 
cs=0x192;eip=0x001802; 	R(JZ(loc_117d0));	// 3467 jz      short loc_117D0 ;~ 01A2:1802
cs=0x192;eip=0x001804; 	T(MOV(si, 0x5ED0));	// 3468 mov     si, 5ED0h ;~ 01A2:1804
cs=0x192;eip=0x001807; 	R(CALL(sub_104b7,0));	// 3469 call    sub_104B7 ;~ 01A2:1807
cs=0x192;eip=0x00180a; 	R(JMP(loc_117e6));	// 3470 jmp     short loc_117E6 ;~ 01A2:180A
loc_1180c:
	// 4772 
cs=0x192;eip=0x00180c; 	T(CMP(byte_11bde, 0));	// 3474 cmp     byte_11BDE, 0 ;~ 01A2:180C
cs=0x192;eip=0x001811; 	R(JZ(loc_1181e));	// 3475 jz      short loc_1181E ;~ 01A2:1811
cs=0x192;eip=0x001813; 	T(MOV(al, 2));	// 3476 mov     al, 2 ;~ 01A2:1813
cs=0x192;eip=0x001815; 	T(MOV(dx, 0x5D82));	// 3477 mov     dx, 5D82h ;~ 01A2:1815
cs=0x192;eip=0x001818; 	T(MOV(bx, 0x15AC));	// 3478 mov     bx, 15ACh ;~ 01A2:1818
cs=0x192;eip=0x00181b; 	R(JMP(loc_11206));	// 3479 jmp     loc_11206 ;~ 01A2:181B
loc_1181e:
	// 4773 
cs=0x192;eip=0x00181e; 	X(MOV(byte_11bd8, 1));	// 3483 mov     byte_11BD8, 1 ;~ 01A2:181E
cs=0x192;eip=0x001823; 	T(MOV(bx, 0x164F));	// 3484 mov     bx, 164Fh ;~ 01A2:1823
cs=0x192;eip=0x001826; 	T(MOV(dx, 0x5CBC));	// 3485 mov     dx, 5CBCh ;~ 01A2:1826
cs=0x192;eip=0x001829; 	R(JMP(loc_11209));	// 3486 jmp     loc_11209 ;~ 01A2:1829
loc_1182c:
	// 4774 
cs=0x192;eip=0x00182c; 	T(TEST(byte_15b35, 2));	// 3490 test    byte_15B35, 2 ;~ 01A2:182C
cs=0x192;eip=0x001831; 	R(JZ(loc_1184e));	// 3491 jz      short loc_1184E ;~ 01A2:1831
cs=0x192;eip=0x001833; 	T(CMP(byte_11bd9, 0));	// 3492 cmp     byte_11BD9, 0 ;~ 01A2:1833
cs=0x192;eip=0x001838; 	R(JZ(loc_11842));	// 3493 jz      short loc_11842 ;~ 01A2:1838
cs=0x192;eip=0x00183a; 	X(MOV(byte_11bd9, 0));	// 3494 mov     byte_11BD9, 0 ;~ 01A2:183A
cs=0x192;eip=0x00183f; 	R(JMP(loc_111ab));	// 3495 jmp     loc_111AB ;~ 01A2:183F
loc_11842:
	// 4775 
cs=0x192;eip=0x001842; 	R(CALL(sub_11cb7,0));	// 3500 call    sub_11CB7 ;~ 01A2:1842
cs=0x192;eip=0x001845; 	T(MOV(bx, 0x1511));	// 3501 mov     bx, 1511h ;~ 01A2:1845
cs=0x192;eip=0x001848; 	T(MOV(dx, 0x5CE6));	// 3502 mov     dx, 5CE6h ;~ 01A2:1848
cs=0x192;eip=0x00184b; 	R(JMP(loc_11209));	// 3503 jmp     loc_11209 ;~ 01A2:184B
loc_1184e:
	// 4776 
cs=0x192;eip=0x00184e; 	T(TEST(byte_15b35, 4));	// 3507 test    byte_15B35, 4 ;~ 01A2:184E
cs=0x192;eip=0x001853; 	R(JZ(loc_118b0));	// 3508 jz      short loc_118B0 ;~ 01A2:1853
cs=0x192;eip=0x001855; 	T(CMP(byte_11bd9, 0));	// 3509 cmp     byte_11BD9, 0 ;~ 01A2:1855
cs=0x192;eip=0x00185a; 	T(MOV(al, byte_15fec));	// 3510 mov     al, byte_15FEC ;~ 01A2:185A
cs=0x192;eip=0x00185d; 	R(JZ(loc_11862));	// 3511 jz      short loc_11862 ;~ 01A2:185D
cs=0x192;eip=0x00185f; 	T(MOV(al, byte_15ff1));	// 3512 mov     al, byte_15FF1 ;~ 01A2:185F
loc_11862:
	// 4777 
cs=0x192;eip=0x001862; 	T(CMP(al, 0x0D4));	// 3515 cmp     al, 0D4h ; 'Ô' ;~ 01A2:1862
cs=0x192;eip=0x001864; 	R(JNZ(loc_11876));	// 3516 jnz     short loc_11876 ;~ 01A2:1864
cs=0x192;eip=0x001866; 	T(CMP(*(raddr(ds,m2c::kloc_10467+2)), 8));	// 3517 cmp     byte ptr loc_10467+2, 8 ;~ 01A2:1866
cs=0x192;eip=0x00186b; 	R(JNZ(loc_11876));	// 3518 jnz     short loc_11876 ;~ 01A2:186B
cs=0x192;eip=0x00186d; 	R(CALL(sub_11f82,0));	// 3519 call    sub_11F82 ;~ 01A2:186D
cs=0x192;eip=0x001870; 	T(MOV(bx, 0x1A67));	// 3520 mov     bx, 1A67h ;~ 01A2:1870
cs=0x192;eip=0x001873; 	R(JMP(loc_1120d));	// 3521 jmp     loc_1120D ;~ 01A2:1873
loc_11876:
	// 4778 
cs=0x192;eip=0x001876; 	T(CMP(byte_11bd9, 0));	// 3526 cmp     byte_11BD9, 0 ;~ 01A2:1876
cs=0x192;eip=0x00187b; 	T(MOV(al, byte_15fee));	// 3527 mov     al, byte_15FEE ;~ 01A2:187B
cs=0x192;eip=0x00187e; 	R(JZ(loc_11883));	// 3528 jz      short loc_11883 ;~ 01A2:187E
cs=0x192;eip=0x001880; 	T(MOV(al, byte_15fef));	// 3529 mov     al, byte_15FEF ;~ 01A2:1880
loc_11883:
	// 4779 
cs=0x192;eip=0x001883; 	T(CMP(al, 0x2C));	// 3532 cmp     al, 2Ch ; ',' ;~ 01A2:1883
cs=0x192;eip=0x001885; 	R(JZ(loc_11896));	// 3533 jz      short loc_11896 ;~ 01A2:1885
cs=0x192;eip=0x001887; 	T(CMP(al, 0x25));	// 3534 cmp     al, 25h ; '%' ;~ 01A2:1887
cs=0x192;eip=0x001889; 	R(JZ(loc_11896));	// 3535 jz      short loc_11896 ;~ 01A2:1889
cs=0x192;eip=0x00188b; 	T(CMP(al, 9));	// 3536 cmp     al, 9 ;~ 01A2:188B
cs=0x192;eip=0x00188d; 	R(JZ(loc_11896));	// 3537 jz      short loc_11896 ;~ 01A2:188D
cs=0x192;eip=0x00188f; 	T(CMP(al, 5));	// 3538 cmp     al, 5 ;~ 01A2:188F
cs=0x192;eip=0x001891; 	R(JZ(loc_11896));	// 3539 jz      short loc_11896 ;~ 01A2:1891
cs=0x192;eip=0x001893; 	R(JMP(loc_11359));	// 3540 jmp     loc_11359 ;~ 01A2:1893
loc_11896:
	// 4780 
cs=0x192;eip=0x001896; 	T(MOV(bx, 0x194E));	// 3545 mov     bx, 194Eh ;~ 01A2:1896
cs=0x192;eip=0x001899; 	T(MOV(dx, 0x5C92));	// 3546 mov     dx, 5C92h ;~ 01A2:1899
cs=0x192;eip=0x00189c; 	X(MOV(word_11bb8, dx));	// 3547 mov     word_11BB8, dx ;~ 01A2:189C
cs=0x192;eip=0x0018a0; 	X(MOV(word_11bba, bx));	// 3548 mov     word_11BBA, bx ;~ 01A2:18A0
cs=0x192;eip=0x0018a4; 	R(JMP(loc_119f7));	// 3549 jmp     loc_119F7 ;~ 01A2:18A4
loc_118a7:
	// 4781 
cs=0x192;eip=0x0018a7; 	T(MOV(bx, 0x194E));	// 3553 mov     bx, 194Eh ;~ 01A2:18A7
cs=0x192;eip=0x0018aa; 	T(MOV(dx, 0x5C92));	// 3554 mov     dx, 5C92h ;~ 01A2:18AA
cs=0x192;eip=0x0018ad; 	R(JMP(loc_11209));	// 3555 jmp     loc_11209 ;~ 01A2:18AD
loc_118b0:
	// 4782 
cs=0x192;eip=0x0018b0; 	T(TEST(byte_15b35, 1));	// 3559 test    byte_15B35, 1 ;~ 01A2:18B0
cs=0x192;eip=0x0018b5; 	R(JZ(loc_118d2));	// 3560 jz      short loc_118D2 ;~ 01A2:18B5
cs=0x192;eip=0x0018b7; 	T(CMP(byte_11bd9, 1));	// 3561 cmp     byte_11BD9, 1 ;~ 01A2:18B7
cs=0x192;eip=0x0018bc; 	R(JZ(loc_118c6));	// 3562 jz      short loc_118C6 ;~ 01A2:18BC
cs=0x192;eip=0x0018be; 	X(MOV(byte_11bd9, 1));	// 3563 mov     byte_11BD9, 1 ;~ 01A2:18BE
cs=0x192;eip=0x0018c3; 	R(JMP(loc_111ab));	// 3564 jmp     loc_111AB ;~ 01A2:18C3
loc_118c6:
	// 4783 
cs=0x192;eip=0x0018c6; 	R(CALL(sub_11cb7,0));	// 3568 call    sub_11CB7 ;~ 01A2:18C6
cs=0x192;eip=0x0018c9; 	T(MOV(bx, 0x149E));	// 3569 mov     bx, 149Eh ;~ 01A2:18C9
cs=0x192;eip=0x0018cc; 	T(MOV(dx, 0x5CE6));	// 3570 mov     dx, 5CE6h ;~ 01A2:18CC
cs=0x192;eip=0x0018cf; 	R(JMP(loc_11209));	// 3571 jmp     loc_11209 ;~ 01A2:18CF
loc_118d2:
	// 4784 
cs=0x192;eip=0x0018d2; 	T(TEST(byte_15b35, 8));	// 3575 test    byte_15B35, 8 ;~ 01A2:18D2
cs=0x192;eip=0x0018d7; 	R(JZ(loc_1194b));	// 3576 jz      short loc_1194B ;~ 01A2:18D7
cs=0x192;eip=0x0018d9; 	T(CMP(byte_11bd9, 0));	// 3577 cmp     byte_11BD9, 0 ;~ 01A2:18D9
cs=0x192;eip=0x0018de; 	R(JNZ(loc_118fd));	// 3578 jnz     short loc_118FD ;~ 01A2:18DE
cs=0x192;eip=0x0018e0; 	T(MOV(bx, word_11bb4));	// 3579 mov     bx, word_11BB4 ;~ 01A2:18E0
cs=0x192;eip=0x0018e4; 	T(ADD(bx, 0x4C4));	// 3580 add     bx, 4C4h ;~ 01A2:18E4
cs=0x192;eip=0x0018e8; 	T(CMP(*(raddr(ds,bx)), 0x62));	// 3581 cmp     byte ptr [bx], 62h ; 'b' ;~ 01A2:18E8
cs=0x192;eip=0x0018eb; 	R(JNZ(loc_118fd));	// 3582 jnz     short loc_118FD ;~ 01A2:18EB
cs=0x192;eip=0x0018ed; 	X(MOV(byte_11bc8, 0x0FD));	// 3583 mov     byte_11BC8, 0FDh ; 'ı' ;~ 01A2:18ED
cs=0x192;eip=0x0018f2; 	T(MOV(bx, 0x156C));	// 3584 mov     bx, 156Ch ;~ 01A2:18F2
cs=0x192;eip=0x0018f5; 	T(MOV(dx, 0x5B9C));	// 3585 mov     dx, 5B9Ch ;~ 01A2:18F5
cs=0x192;eip=0x0018f8; 	T(MOV(al, 0x6D));	// 3586 mov     al, 6Dh ; 'm' ;~ 01A2:18F8
cs=0x192;eip=0x0018fa; 	R(JMP(loc_11206));	// 3587 jmp     loc_11206 ;~ 01A2:18FA
loc_118fd:
	// 4785 
cs=0x192;eip=0x0018fd; 	T(MOV(al, byte_15fec));	// 3592 mov     al, byte_15FEC ;~ 01A2:18FD
cs=0x192;eip=0x001900; 	T(CMP(byte_11bd9, 0));	// 3593 cmp     byte_11BD9, 0 ;~ 01A2:1900
cs=0x192;eip=0x001905; 	R(JZ(loc_1190a));	// 3594 jz      short loc_1190A ;~ 01A2:1905
cs=0x192;eip=0x001907; 	T(MOV(al, byte_15ff1));	// 3595 mov     al, byte_15FF1 ;~ 01A2:1907
loc_1190a:
	// 4786 
cs=0x192;eip=0x00190a; 	T(CMP(al, 0x0D4));	// 3598 cmp     al, 0D4h ; 'Ô' ;~ 01A2:190A
cs=0x192;eip=0x00190c; 	R(JNZ(loc_1191e));	// 3599 jnz     short loc_1191E ;~ 01A2:190C
cs=0x192;eip=0x00190e; 	T(CMP(*(raddr(ds,m2c::kloc_10467+2)), 8));	// 3600 cmp     byte ptr loc_10467+2, 8 ;~ 01A2:190E
cs=0x192;eip=0x001913; 	R(JZ(loc_1191e));	// 3601 jz      short loc_1191E ;~ 01A2:1913
cs=0x192;eip=0x001915; 	R(CALL(sub_11f82,0));	// 3602 call    sub_11F82 ;~ 01A2:1915
cs=0x192;eip=0x001918; 	T(MOV(bx, 0x1AD9));	// 3603 mov     bx, 1AD9h ;~ 01A2:1918
cs=0x192;eip=0x00191b; 	R(JMP(loc_1120d));	// 3604 jmp     loc_1120D ;~ 01A2:191B
loc_1191e:
	// 4787 
cs=0x192;eip=0x00191e; 	T(CMP(byte_11bd9, 0));	// 3609 cmp     byte_11BD9, 0 ;~ 01A2:191E
cs=0x192;eip=0x001923; 	T(MOV(al, byte_15fe8));	// 3610 mov     al, byte_15FE8 ;~ 01A2:1923
cs=0x192;eip=0x001926; 	R(JZ(loc_1192b));	// 3611 jz      short loc_1192B ;~ 01A2:1926
cs=0x192;eip=0x001928; 	T(MOV(al, byte_15fe9));	// 3612 mov     al, byte_15FE9 ;~ 01A2:1928
loc_1192b:
	// 4788 
cs=0x192;eip=0x00192b; 	T(CMP(al, 9));	// 3615 cmp     al, 9 ;~ 01A2:192B
cs=0x192;eip=0x00192d; 	R(JZ(loc_11948));	// 3616 jz      short loc_11948 ;~ 01A2:192D
cs=0x192;eip=0x00192f; 	T(CMP(al, 5));	// 3617 cmp     al, 5 ;~ 01A2:192F
cs=0x192;eip=0x001931; 	R(JZ(loc_11948));	// 3618 jz      short loc_11948 ;~ 01A2:1931
cs=0x192;eip=0x001933; 	T(CMP(al, 0x25));	// 3619 cmp     al, 25h ; '%' ;~ 01A2:1933
cs=0x192;eip=0x001935; 	R(JZ(loc_11948));	// 3620 jz      short loc_11948 ;~ 01A2:1935
cs=0x192;eip=0x001937; 	T(CMP(al, 0x2C));	// 3621 cmp     al, 2Ch ; ',' ;~ 01A2:1937
cs=0x192;eip=0x001939; 	R(JZ(loc_11948));	// 3622 jz      short loc_11948 ;~ 01A2:1939
cs=0x192;eip=0x00193b; 	T(CMP(al, 0x10));	// 3623 cmp     al, 10h ;~ 01A2:193B
cs=0x192;eip=0x00193d; 	R(JZ(loc_11948));	// 3624 jz      short loc_11948 ;~ 01A2:193D
cs=0x192;eip=0x00193f; 	T(MOV(bx, 0x16EB));	// 3625 mov     bx, 16EBh ;~ 01A2:193F
cs=0x192;eip=0x001942; 	T(MOV(dx, 0x5DD6));	// 3626 mov     dx, 5DD6h ;~ 01A2:1942
cs=0x192;eip=0x001945; 	R(JMP(loc_11209));	// 3627 jmp     loc_11209 ;~ 01A2:1945
loc_11948:
	// 4789 
cs=0x192;eip=0x001948; 	R(JMP(loc_118a7));	// 3632 jmp     loc_118A7 ;~ 01A2:1948
loc_1194b:
	// 4790 
cs=0x192;eip=0x00194b; 	R(JMP(loc_111ab));	// 3636 jmp     loc_111AB ;~ 01A2:194B
ret_1a2_194e:
	// 4791 
cs=0x192;eip=0x00194e; 	T(CMP(byte_11bd9, 0));	// 3638 cmp     byte_11BD9, 0 ;~ 01A2:194E
cs=0x192;eip=0x001953; 	T(MOV(al, byte_15fe8));	// 3639 mov     al, byte_15FE8 ;~ 01A2:1953
cs=0x192;eip=0x001956; 	R(JZ(loc_1195b));	// 3640 jz      short loc_1195B ;~ 01A2:1956
cs=0x192;eip=0x001958; 	T(MOV(al, byte_15fe9));	// 3641 mov     al, byte_15FE9 ;~ 01A2:1958
loc_1195b:
	// 4792 
cs=0x192;eip=0x00195b; 	T(CMP(al, 5));	// 3644 cmp     al, 5 ;~ 01A2:195B
cs=0x192;eip=0x00195d; 	R(JZ(loc_1197a));	// 3645 jz      short loc_1197A ;~ 01A2:195D
cs=0x192;eip=0x00195f; 	T(CMP(al, 9));	// 3646 cmp     al, 9 ;~ 01A2:195F
cs=0x192;eip=0x001961; 	R(JZ(loc_1197a));	// 3647 jz      short loc_1197A ;~ 01A2:1961
cs=0x192;eip=0x001963; 	T(CMP(al, 0x10));	// 3648 cmp     al, 10h ;~ 01A2:1963
cs=0x192;eip=0x001965; 	R(JZ(loc_1197a));	// 3649 jz      short loc_1197A ;~ 01A2:1965
cs=0x192;eip=0x001967; 	T(CMP(al, 0x25));	// 3650 cmp     al, 25h ; '%' ;~ 01A2:1967
cs=0x192;eip=0x001969; 	R(JZ(loc_1197a));	// 3651 jz      short loc_1197A ;~ 01A2:1969
cs=0x192;eip=0x00196b; 	T(CMP(al, 0x2C));	// 3652 cmp     al, 2Ch ; ',' ;~ 01A2:196B
cs=0x192;eip=0x00196d; 	R(JZ(loc_1197a));	// 3653 jz      short loc_1197A ;~ 01A2:196D
cs=0x192;eip=0x00196f; 	T(CMP(al, 0x0CC));	// 3654 cmp     al, 0CCh ; 'Ì' ;~ 01A2:196F
cs=0x192;eip=0x001971; 	R(JZ(loc_1197a));	// 3655 jz      short loc_1197A ;~ 01A2:1971
cs=0x192;eip=0x001973; 	T(CMP(al, 0x0FF));	// 3656 cmp     al, 0FFh ;~ 01A2:1973
cs=0x192;eip=0x001975; 	R(JZ(loc_1197a));	// 3657 jz      short loc_1197A ;~ 01A2:1975
cs=0x192;eip=0x001977; 	R(JMP(loc_11367));	// 3658 jmp     loc_11367 ;~ 01A2:1977
loc_1197a:
	// 4793 
cs=0x192;eip=0x00197a; 	T(MOV(al, byte_15b35));	// 3663 mov     al, byte_15B35 ;~ 01A2:197A
cs=0x192;eip=0x00197d; 	T(TEST(al, 1));	// 3664 test    al, 1 ;~ 01A2:197D
cs=0x192;eip=0x00197f; 	R(JZ(loc_11988));	// 3665 jz      short loc_11988 ;~ 01A2:197F
cs=0x192;eip=0x001981; 	X(MOV(byte_11bd9, 1));	// 3666 mov     byte_11BD9, 1 ;~ 01A2:1981
cs=0x192;eip=0x001986; 	R(JMP(loc_11991));	// 3667 jmp     short loc_11991 ;~ 01A2:1986
loc_11988:
	// 4794 
cs=0x192;eip=0x001988; 	T(TEST(al, 2));	// 3671 test    al, 2 ;~ 01A2:1988
cs=0x192;eip=0x00198a; 	R(JZ(loc_119a7));	// 3672 jz      short loc_119A7 ;~ 01A2:198A
cs=0x192;eip=0x00198c; 	X(MOV(byte_11bd9, 0));	// 3673 mov     byte_11BD9, 0 ;~ 01A2:198C
loc_11991:
	// 4795 
cs=0x192;eip=0x001991; 	T(CMP(byte_15fe7, 0x0C7));	// 3676 cmp     byte_15FE7, 0C7h ; 'Ç' ;~ 01A2:1991
cs=0x192;eip=0x001996; 	R(JC(loc_1199b));	// 3677 jb      short loc_1199B ;~ 01A2:1996
loc_11998:
	// 4796 
cs=0x192;eip=0x001998; 	R(JMP(loc_111ab));	// 3680 jmp     loc_111AB ;~ 01A2:1998
loc_1199b:
	// 4797 
cs=0x192;eip=0x00199b; 	T(MOV(al, byte_15fed));	// 3684 mov     al, byte_15FED ;~ 01A2:199B
cs=0x192;eip=0x00199e; 	T(INC(al));	// 3685 inc     al ;~ 01A2:199E
cs=0x192;eip=0x0019a0; 	T(CMP(al, 0x0C7));	// 3686 cmp     al, 0C7h ; 'Ç' ;~ 01A2:19A0
cs=0x192;eip=0x0019a2; 	R(JC(loc_11998));	// 3687 jb      short loc_11998 ;~ 01A2:19A2
cs=0x192;eip=0x0019a4; 	R(JMP(loc_11367));	// 3688 jmp     loc_11367 ;~ 01A2:19A4
loc_119a7:
	// 4798 
cs=0x192;eip=0x0019a7; 	T(TEST(al, 8));	// 3692 test    al, 8 ;~ 01A2:19A7
cs=0x192;eip=0x0019a9; 	R(JZ(loc_119db));	// 3693 jz      short loc_119DB ;~ 01A2:19A9
cs=0x192;eip=0x0019ab; 	T(MOV(al, byte_11bcd));	// 3694 mov     al, byte_11BCD ;~ 01A2:19AB
cs=0x192;eip=0x0019ae; 	T(DEC(al));	// 3695 dec     al ;~ 01A2:19AE
cs=0x192;eip=0x0019b0; 	R(JS(loc_119c7));	// 3696 js      short loc_119C7 ;~ 01A2:19B0
cs=0x192;eip=0x0019b2; 	T(MOV(bx, word_11bb4));	// 3697 mov     bx, word_11BB4 ;~ 01A2:19B2
cs=0x192;eip=0x0019b6; 	T(ADD(bx, 0x226));	// 3698 add     bx, 226h ;~ 01A2:19B6
cs=0x192;eip=0x0019ba; 	T(MOV(al, *(raddr(ds,bx))));	// 3699 mov     al, [bx] ;~ 01A2:19BA
cs=0x192;eip=0x0019bc; 	T(CMP(al, 0x0CC));	// 3700 cmp     al, 0CCh ; 'Ì' ;~ 01A2:19BC
cs=0x192;eip=0x0019be; 	R(JZ(loc_119c7));	// 3701 jz      short loc_119C7 ;~ 01A2:19BE
cs=0x192;eip=0x0019c0; 	T(CMP(al, 0x0C7));	// 3702 cmp     al, 0C7h ; 'Ç' ;~ 01A2:19C0
cs=0x192;eip=0x0019c2; 	R(JC(loc_119c7));	// 3703 jb      short loc_119C7 ;~ 01A2:19C2
cs=0x192;eip=0x0019c4; 	R(JMP(loc_111ab));	// 3704 jmp     loc_111AB ;~ 01A2:19C4
loc_119c7:
	// 4799 
cs=0x192;eip=0x0019c7; 	R(CALL(sub_11c97,0));	// 3709 call    sub_11C97 ;~ 01A2:19C7
cs=0x192;eip=0x0019ca; 	X(DEC(byte_11bcd));	// 3710 dec     byte_11BCD ;~ 01A2:19CA
cs=0x192;eip=0x0019ce; 	X(ADD(word_11bb4, 0x0FFE0));	// 3711 add     word_11BB4, 0FFE0h ;~ 01A2:19CE
loc_119d3:
	// 4800 
cs=0x192;eip=0x0019d3; 	X(XOR(byte_11bd9, 1));	// 3714 xor     byte_11BD9, 1 ;~ 01A2:19D3
cs=0x192;eip=0x0019d8; 	R(JMP(loc_111ab));	// 3715 jmp     loc_111AB ;~ 01A2:19D8
loc_119db:
	// 4801 
cs=0x192;eip=0x0019db; 	T(TEST(al, 4));	// 3719 test    al, 4 ;~ 01A2:19DB
cs=0x192;eip=0x0019dd; 	R(JNZ(loc_119e2));	// 3720 jnz     short loc_119E2 ;~ 01A2:19DD
cs=0x192;eip=0x0019df; 	R(JMP(loc_111ab));	// 3721 jmp     loc_111AB ;~ 01A2:19DF
loc_119e2:
	// 4802 
cs=0x192;eip=0x0019e2; 	T(MOV(al, byte_15fee));	// 3725 mov     al, byte_15FEE ;~ 01A2:19E2
cs=0x192;eip=0x0019e5; 	T(INC(al));	// 3726 inc     al ;~ 01A2:19E5
cs=0x192;eip=0x0019e7; 	T(CMP(al, 0x0C7));	// 3727 cmp     al, 0C7h ; 'Ç' ;~ 01A2:19E7
cs=0x192;eip=0x0019e9; 	R(JC(loc_119ee));	// 3728 jb      short loc_119EE ;~ 01A2:19E9
loc_119eb:
	// 4803 
cs=0x192;eip=0x0019eb; 	R(JMP(loc_11367));	// 3731 jmp     loc_11367 ;~ 01A2:19EB
loc_119ee:
	// 4804 
cs=0x192;eip=0x0019ee; 	T(MOV(al, byte_15fef));	// 3735 mov     al, byte_15FEF ;~ 01A2:19EE
cs=0x192;eip=0x0019f1; 	T(INC(al));	// 3736 inc     al ;~ 01A2:19F1
cs=0x192;eip=0x0019f3; 	T(CMP(al, 0x0C7));	// 3737 cmp     al, 0C7h ; 'Ç' ;~ 01A2:19F3
cs=0x192;eip=0x0019f5; 	R(JNC(loc_119eb));	// 3738 jnb     short loc_119EB ;~ 01A2:19F5
loc_119f7:
	// 4805 
cs=0x192;eip=0x0019f7; 	R(CALL(sub_11d16,0));	// 3741 call    sub_11D16 ;~ 01A2:19F7
cs=0x192;eip=0x0019fa; 	X(INC(byte_11bcd));	// 3742 inc     byte_11BCD ;~ 01A2:19FA
cs=0x192;eip=0x0019fe; 	X(ADD(word_11bb4, 0x20));	// 3743 add     word_11BB4, 20h ; ' ' ;~ 01A2:19FE
cs=0x192;eip=0x001a03; 	R(JMP(loc_119d3));	// 3744 jmp     short loc_119D3 ;~ 01A2:1A03
ret_1a2_1a05:
	// 4806 
cs=0x192;eip=0x001a05; 	R(CALL(sub_11d16,0));	// 3746 call    sub_11D16 ;~ 01A2:1A05
cs=0x192;eip=0x001a08; 	R(CALL(sub_11d36,0));	// 3747 call    sub_11D36 ;~ 01A2:1A08
cs=0x192;eip=0x001a0b; 	R(JZ(loc_11a51));	// 3748 jz      short loc_11A51 ;~ 01A2:1A0B
cs=0x192;eip=0x001a0d; 	T(CMP(byte_11bd5, 0));	// 3749 cmp     byte_11BD5, 0 ;~ 01A2:1A0D
cs=0x192;eip=0x001a12; 	R(JNZ(loc_11a17));	// 3750 jnz     short loc_11A17 ;~ 01A2:1A12
cs=0x192;eip=0x001a14; 	R(JMP(loc_1134a));	// 3751 jmp     loc_1134A ;~ 01A2:1A14
loc_11a17:
	// 4807 
cs=0x192;eip=0x001a17; 	T(MOV(cx, 0x14));	// 3755 mov     cx, 14h ;~ 01A2:1A17
cs=0x192;eip=0x001a1a; 	T(MOV(si, 0x5F48));	// 3756 mov     si, 5F48h ;~ 01A2:1A1A
cs=0x192;eip=0x001a1d; 	T(MOV(al, byte_11bd5));	// 3757 mov     al, byte_11BD5 ;~ 01A2:1A1D
cs=0x192;eip=0x001a20; 	T(DEC(al));	// 3758 dec     al ;~ 01A2:1A20
cs=0x192;eip=0x001a22; 	R(JNZ(loc_11a27));	// 3759 jnz     short loc_11A27 ;~ 01A2:1A22
cs=0x192;eip=0x001a24; 	T(MOV(si, 0x5F7F));	// 3760 mov     si, 5F7Fh ;~ 01A2:1A24
loc_11a27:
	// 4808 
cs=0x192;eip=0x001a27; 	T(MOV(bx, 0x58A));	// 3763 mov     bx, 58Ah ;~ 01A2:1A27
cs=0x192;eip=0x001a2a; 	R(CALL(sub_10bf7,0));	// 3764 call    sub_10BF7 ;~ 01A2:1A2A
cs=0x192;eip=0x001a2d; 	T(CMP(byte_11bc8, 0x0FD));	// 3765 cmp     byte_11BC8, 0FDh ; 'ı' ;~ 01A2:1A2D
cs=0x192;eip=0x001a32; 	R(JNZ(loc_11a3d));	// 3766 jnz     short loc_11A3D ;~ 01A2:1A32
cs=0x192;eip=0x001a34; 	T(MOV(dx, 0x1F25));	// 3767 mov     dx, 1F25h ;~ 01A2:1A34
cs=0x192;eip=0x001a37; 	T(MOV(ax, 0x484));	// 3768 mov     ax, 484h ;~ 01A2:1A37
cs=0x192;eip=0x001a3a; 	R(CALL(sub_11ee6,0));	// 3769 call    sub_11EE6 ;~ 01A2:1A3A
loc_11a3d:
	// 4809 
cs=0x192;eip=0x001a3d; 	T(MOV(dx, 0x5B6A));	// 3772 mov     dx, 5B6Ah ;~ 01A2:1A3D
cs=0x192;eip=0x001a40; 	T(MOV(ax, 4));	// 3773 mov     ax, 4 ;~ 01A2:1A40
cs=0x192;eip=0x001a43; 	R(CALL(sub_11ee6,0));	// 3774 call    sub_11EE6 ;~ 01A2:1A43
cs=0x192;eip=0x001a46; 	T(MOV(dx, 0x5E54));	// 3775 mov     dx, 5E54h ;~ 01A2:1A46
cs=0x192;eip=0x001a49; 	T(MOV(bx, 0x1B58));	// 3776 mov     bx, 1B58h ;~ 01A2:1A49
cs=0x192;eip=0x001a4c; 	T(MOV(al, 0x1E));	// 3777 mov     al, 1Eh ;~ 01A2:1A4C
cs=0x192;eip=0x001a4e; 	R(JMP(loc_11206));	// 3778 jmp     loc_11206 ;~ 01A2:1A4E
loc_11a51:
	// 4810 
cs=0x192;eip=0x001a51; 	T(MOV(bx, 0x5B37));	// 3782 mov     bx, 5B37h ;~ 01A2:1A51
cs=0x192;eip=0x001a54; 	T(CMP(*(raddr(ds,bx)), 0x0FA));	// 3783 cmp     byte ptr [bx], 0FAh ; 'ú' ;~ 01A2:1A54
cs=0x192;eip=0x001a57; 	R(JZ(loc_11a5b));	// 3784 jz      short loc_11A5B ;~ 01A2:1A57
cs=0x192;eip=0x001a59; 	X(INC(*(raddr(ds,bx))));	// 3785 inc     byte ptr [bx] ;~ 01A2:1A59
loc_11a5b:
	// 4811 
cs=0x192;eip=0x001a5b; 	X(INC(byte_11bcd));	// 3788 inc     byte_11BCD ;~ 01A2:1A5B
cs=0x192;eip=0x001a5f; 	X(ADD(word_11bb4, 0x20));	// 3789 add     word_11BB4, 20h ; ' ' ;~ 01A2:1A5F
cs=0x192;eip=0x001a64; 	R(JMP(loc_111ab));	// 3790 jmp     loc_111AB ;~ 01A2:1A64
ret_1a2_1a67:
	// 4812 
cs=0x192;eip=0x001a67; 	X(MOV(*raddr(ds,m2c::kloc_12b3d), 0x11));	// 3792 mov     byte ptr loc_12B3D, 11h ;~ 01A2:1A67
cs=0x192;eip=0x001a6c; 	X(MOV(*raddr(ds,m2c::kloc_12b74), 0));	// 3793 mov     byte ptr loc_12B74, 0 ;~ 01A2:1A6C
cs=0x192;eip=0x001a71; 	R(CALL(sub_11ff3,0));	// 3794 call    sub_11FF3 ;~ 01A2:1A71
cs=0x192;eip=0x001a74; 	R(CALL(sub_11d16,0));	// 3795 call    sub_11D16 ;~ 01A2:1A74
cs=0x192;eip=0x001a77; 	X(INC(byte_11bcd));	// 3796 inc     byte_11BCD ;~ 01A2:1A77
cs=0x192;eip=0x001a7b; 	X(ADD(word_11bb4, 0x20));	// 3797 add     word_11BB4, 20h ; ' ' ;~ 01A2:1A7B
cs=0x192;eip=0x001a80; 	T(MOV(di, word_11bb4));	// 3798 mov     di, word_11BB4 ;~ 01A2:1A80
cs=0x192;eip=0x001a84; 	T(ADD(di, 0x304));	// 3799 add     di, 304h ;~ 01A2:1A84
cs=0x192;eip=0x001a88; 	T(MOV(cx, 3));	// 3800 mov     cx, 3 ;~ 01A2:1A88
cs=0x192;eip=0x001a8b; 	T(CLD);	// 3801 cld ;~ 01A2:1A8B
cs=0x192;eip=0x001a8c; 	T(MOV(ax, 0x808));	// 3802 mov     ax, 808h ;~ 01A2:1A8C
	// 3803 rep stosw ;~ 01A2:1A8F
cs=0x192;eip=0x001a8f; 	X(	REP STOSW);	// 3803 rep stosw ;~ 01A2:1A8F
cs=0x192;eip=0x001a91; 	T(CMP(byte_11bcd, 0x0B));	// 3804 cmp     byte_11BCD, 0Bh ;~ 01A2:1A91
cs=0x192;eip=0x001a96; 	R(JZ(loc_11aaf));	// 3805 jz      short loc_11AAF ;~ 01A2:1A96
cs=0x192;eip=0x001a98; 	T(ADD(di, 0x1A));	// 3806 add     di, 1Ah ;~ 01A2:1A98
cs=0x192;eip=0x001a9b; 	T(MOV(si, 0x3B34));	// 3807 mov     si, 3B34h ;~ 01A2:1A9B
cs=0x192;eip=0x001a9e; 	T(MOV(cx, 3));	// 3808 mov     cx, 3 ;~ 01A2:1A9E
	// 3809 rep movsw ;~ 01A2:1AA1
cs=0x192;eip=0x001aa1; 	X(	REP MOVSW);	// 3809 rep movsw ;~ 01A2:1AA1
cs=0x192;eip=0x001aa3; 	T(SUB(di, 0x246));	// 3810 sub     di, 246h ;~ 01A2:1AA3
cs=0x192;eip=0x001aa7; 	T(MOV(cx, 3));	// 3811 mov     cx, 3 ;~ 01A2:1AA7
cs=0x192;eip=0x001aaa; 	T(MOV(ax, 0x101));	// 3812 mov     ax, 101h ;~ 01A2:1AAA
	// 3813 rep stosw ;~ 01A2:1AAD
cs=0x192;eip=0x001aad; 	X(	REP STOSW);	// 3813 rep stosw ;~ 01A2:1AAD
loc_11aaf:
	// 4813 
cs=0x192;eip=0x001aaf; 	T(MOV(al, byte_15b35));	// 3816 mov     al, byte_15B35 ;~ 01A2:1AAF
cs=0x192;eip=0x001ab2; 	T(TEST(al, 8));	// 3817 test    al, 8 ;~ 01A2:1AB2
cs=0x192;eip=0x001ab4; 	R(JZ(loc_11abc));	// 3818 jz      short loc_11ABC ;~ 01A2:1AB4
cs=0x192;eip=0x001ab6; 	T(MOV(bx, 0x1AD9));	// 3819 mov     bx, 1AD9h ;~ 01A2:1AB6
cs=0x192;eip=0x001ab9; 	R(JMP(loc_1120d));	// 3820 jmp     loc_1120D ;~ 01A2:1AB9
loc_11abc:
	// 4814 
cs=0x192;eip=0x001abc; 	X(MOV(*raddr(ds,m2c::kloc_12b3d), 0x0FF));	// 3824 mov     byte ptr loc_12B3D, 0FFh ;~ 01A2:1ABC
cs=0x192;eip=0x001ac1; 	X(MOV(*raddr(ds,m2c::kloc_12b74), 0x0FF));	// 3825 mov     byte ptr loc_12B74, 0FFh ;~ 01A2:1AC1
cs=0x192;eip=0x001ac6; 	T(MOV(bx, word_11bb4));	// 3826 mov     bx, word_11BB4 ;~ 01A2:1AC6
cs=0x192;eip=0x001aca; 	T(ADD(bx, 0x344));	// 3827 add     bx, 344h ;~ 01A2:1ACA
cs=0x192;eip=0x001ace; 	T(CMP(*(raddr(ds,bx)), 0x0FA));	// 3828 cmp     byte ptr [bx], 0FAh ; 'ú' ;~ 01A2:1ACE
cs=0x192;eip=0x001ad1; 	R(JNZ(loc_11ad6));	// 3829 jnz     short loc_11AD6 ;~ 01A2:1AD1
cs=0x192;eip=0x001ad3; 	R(JMP(loc_11359));	// 3830 jmp     loc_11359 ;~ 01A2:1AD3
loc_11ad6:
	// 4815 
cs=0x192;eip=0x001ad6; 	R(JMP(loc_111ab));	// 3835 jmp     loc_111AB ;~ 01A2:1AD6
ret_1a2_1ad9:
	// 4816 
cs=0x192;eip=0x001ad9; 	X(MOV(*raddr(ds,m2c::kloc_12b3d), 0x0FF));	// 3837 mov     byte ptr loc_12B3D, 0FFh ;~ 01A2:1AD9
cs=0x192;eip=0x001ade; 	X(MOV(*raddr(ds,m2c::kloc_12b74), 0x0FF));	// 3838 mov     byte ptr loc_12B74, 0FFh ;~ 01A2:1ADE
cs=0x192;eip=0x001ae3; 	R(CALL(sub_11ff3,0));	// 3839 call    sub_11FF3 ;~ 01A2:1AE3
cs=0x192;eip=0x001ae6; 	R(CALL(sub_11c97,0));	// 3840 call    sub_11C97 ;~ 01A2:1AE6
cs=0x192;eip=0x001ae9; 	X(DEC(byte_11bcd));	// 3841 dec     byte_11BCD ;~ 01A2:1AE9
cs=0x192;eip=0x001aed; 	X(ADD(word_11bb4, 0x0FFE0));	// 3842 add     word_11BB4, 0FFE0h ;~ 01A2:1AED
cs=0x192;eip=0x001af2; 	T(MOV(di, word_11bb4));	// 3843 mov     di, word_11BB4 ;~ 01A2:1AF2
cs=0x192;eip=0x001af6; 	T(CMP(byte_11bcd, 0x0B));	// 3844 cmp     byte_11BCD, 0Bh ;~ 01A2:1AF6
cs=0x192;eip=0x001afb; 	R(JZ(loc_11b28));	// 3845 jz      short loc_11B28 ;~ 01A2:1AFB
cs=0x192;eip=0x001afd; 	T(ADD(di, 0x324));	// 3846 add     di, 324h ;~ 01A2:1AFD
cs=0x192;eip=0x001b01; 	T(MOV(si, 0x3B34));	// 3847 mov     si, 3B34h ;~ 01A2:1B01
cs=0x192;eip=0x001b04; 	T(MOV(cx, 3));	// 3848 mov     cx, 3 ;~ 01A2:1B04
cs=0x192;eip=0x001b07; 	T(CLD);	// 3849 cld ;~ 01A2:1B07
	// 3850 rep movsw ;~ 01A2:1B08
cs=0x192;eip=0x001b08; 	X(	REP MOVSW);	// 3850 rep movsw ;~ 01A2:1B08
cs=0x192;eip=0x001b0a; 	T(CMP(byte_11bcd, 0x0A));	// 3851 cmp     byte_11BCD, 0Ah ;~ 01A2:1B0A
cs=0x192;eip=0x001b0f; 	R(JZ(loc_11b28));	// 3852 jz      short loc_11B28 ;~ 01A2:1B0F
cs=0x192;eip=0x001b11; 	T(ADD(di, 0x1A));	// 3853 add     di, 1Ah ;~ 01A2:1B11
cs=0x192;eip=0x001b14; 	T(MOV(cx, 3));	// 3854 mov     cx, 3 ;~ 01A2:1B14
cs=0x192;eip=0x001b17; 	T(MOV(ax, 0x808));	// 3855 mov     ax, 808h ;~ 01A2:1B17
	// 3856 rep stosw ;~ 01A2:1B1A
cs=0x192;eip=0x001b1a; 	X(	REP STOSW);	// 3856 rep stosw ;~ 01A2:1B1A
cs=0x192;eip=0x001b1c; 	T(SUB(di, 0x246));	// 3857 sub     di, 246h ;~ 01A2:1B1C
cs=0x192;eip=0x001b20; 	T(MOV(cx, 3));	// 3858 mov     cx, 3 ;~ 01A2:1B20
cs=0x192;eip=0x001b23; 	T(MOV(ax, 0x101));	// 3859 mov     ax, 101h ;~ 01A2:1B23
	// 3860 rep stosw ;~ 01A2:1B26
cs=0x192;eip=0x001b26; 	X(	REP STOSW);	// 3860 rep stosw ;~ 01A2:1B26
loc_11b28:
	// 4817 
cs=0x192;eip=0x001b28; 	T(MOV(al, byte_15b35));	// 3864 mov     al, byte_15B35 ;~ 01A2:1B28
cs=0x192;eip=0x001b2b; 	T(TEST(al, 4));	// 3865 test    al, 4 ;~ 01A2:1B2B
cs=0x192;eip=0x001b2d; 	R(JZ(loc_11b35));	// 3866 jz      short loc_11B35 ;~ 01A2:1B2D
cs=0x192;eip=0x001b2f; 	T(MOV(bx, 0x1A67));	// 3867 mov     bx, 1A67h ;~ 01A2:1B2F
cs=0x192;eip=0x001b32; 	R(JMP(loc_1120d));	// 3868 jmp     loc_1120D ;~ 01A2:1B32
loc_11b35:
	// 4818 
cs=0x192;eip=0x001b35; 	X(MOV(*raddr(ds,m2c::kloc_12b3d), 0x11));	// 3872 mov     byte ptr loc_12B3D, 11h ;~ 01A2:1B35
cs=0x192;eip=0x001b3a; 	X(MOV(*raddr(ds,m2c::kloc_12b74), 0));	// 3873 mov     byte ptr loc_12B74, 0 ;~ 01A2:1B3A
cs=0x192;eip=0x001b3f; 	T(MOV(bx, word_11bb4));	// 3874 mov     bx, word_11BB4 ;~ 01A2:1B3F
cs=0x192;eip=0x001b43; 	T(ADD(bx, 0x303));	// 3875 add     bx, 303h ;~ 01A2:1B43
cs=0x192;eip=0x001b47; 	T(CMP(*(raddr(ds,bx)), 8));	// 3876 cmp     byte ptr [bx], 8 ;~ 01A2:1B47
cs=0x192;eip=0x001b4a; 	R(JNZ(loc_11ad6));	// 3877 jnz     short loc_11AD6 ;~ 01A2:1B4A
cs=0x192;eip=0x001b4c; 	X(DEC(byte_11bcd));	// 3878 dec     byte_11BCD ;~ 01A2:1B4C
cs=0x192;eip=0x001b50; 	X(ADD(word_11bb4, 0x0FFE0));	// 3879 add     word_11BB4, 0FFE0h ;~ 01A2:1B50
cs=0x192;eip=0x001b55; 	R(JMP(loc_11367));	// 3880 jmp     loc_11367 ;~ 01A2:1B55
ret_1a2_1b58:
	// 4819 
cs=0x192;eip=0x001b58; 	X(DEC(byte_11bd8));	// 3882 dec     byte_11BD8 ;~ 01A2:1B58
cs=0x192;eip=0x001b5c; 	R(JZ(loc_11b61));	// 3883 jz      short loc_11B61 ;~ 01A2:1B5C
cs=0x192;eip=0x001b5e; 	R(JMP(loc_111ab));	// 3884 jmp     loc_111AB ;~ 01A2:1B5E
loc_11b61:
	// 4820 
cs=0x192;eip=0x001b61; 	X(POP(ax));	// 3888 pop     ax ;~ 01A2:1B61
cs=0x192;eip=0x001b62; 	R(JMP(loc_12843));	// 3889 jmp     loc_12843 ;~ 01A2:1B62
ret_1a2_1b65:
	// 4821 
cs=0x192;eip=0x001b65; 	T(MOV(al, byte_11bce));	// 3891 mov     al, byte_11BCE ;~ 01A2:1B65
cs=0x192;eip=0x001b68; 	T(CMP(al, 0x1D));	// 3892 cmp     al, 1Dh ;~ 01A2:1B68
cs=0x192;eip=0x001b6a; 	R(JNZ(loc_11b6f));	// 3893 jnz     short loc_11B6F ;~ 01A2:1B6A
cs=0x192;eip=0x001b6c; 	R(JMP(loc_11229));	// 3894 jmp     loc_11229 ;~ 01A2:1B6C
loc_11b6f:
	// 4822 
cs=0x192;eip=0x001b6f; 	T(CMP(al, 0x1A));	// 3898 cmp     al, 1Ah ;~ 01A2:1B6F
cs=0x192;eip=0x001b71; 	R(JNC(loc_11b80));	// 3899 jnb     short loc_11B80 ;~ 01A2:1B71
cs=0x192;eip=0x001b73; 	T(MOV(bx, word_11bb4));	// 3900 mov     bx, word_11BB4 ;~ 01A2:1B73
cs=0x192;eip=0x001b77; 	T(ADD(bx, 0x30A));	// 3901 add     bx, 30Ah ;~ 01A2:1B77
cs=0x192;eip=0x001b7b; 	T(CMP(*(raddr(ds,bx)), 0x0C7));	// 3902 cmp     byte ptr [bx], 0C7h ; 'Ç' ;~ 01A2:1B7B
cs=0x192;eip=0x001b7e; 	R(JNC(loc_11b88));	// 3903 jnb     short loc_11B88 ;~ 01A2:1B7E
loc_11b80:
	// 4823 
cs=0x192;eip=0x001b80; 	X(INC(byte_11bce));	// 3906 inc     byte_11BCE ;~ 01A2:1B80
cs=0x192;eip=0x001b84; 	X(INC(word_11bb4));	// 3907 inc     word_11BB4 ;~ 01A2:1B84
loc_11b88:
	// 4824 
cs=0x192;eip=0x001b88; 	R(CALL(__dispatch_call,byte_11bdf));	// 3910 call    near ptr byte_11BDF ;~ 01A2:1B88
cs=0x192;eip=0x001b8b; 	T(MOV(al, byte_15b35));	// 3911 mov     al, byte_15B35 ;~ 01A2:1B8B
cs=0x192;eip=0x001b8e; 	T(TEST(al, 1));	// 3912 test    al, 1 ;~ 01A2:1B8E
cs=0x192;eip=0x001b90; 	R(JNZ(loc_11b95));	// 3913 jnz     short loc_11B95 ;~ 01A2:1B90
cs=0x192;eip=0x001b92; 	R(JMP(loc_11359));	// 3914 jmp     loc_11359 ;~ 01A2:1B92
loc_11b95:
	// 4825 
cs=0x192;eip=0x001b95; 	T(MOV(dx, 0x4E6));	// 3918 mov     dx, 4E6h ;~ 01A2:1B95
cs=0x192;eip=0x001b98; 	R(CALL(sub_11daa,0));	// 3919 call    sub_11DAA ;~ 01A2:1B98
cs=0x192;eip=0x001b9b; 	T(MOV(bx, word_11bb4));	// 3920 mov     bx, word_11BB4 ;~ 01A2:1B9B
cs=0x192;eip=0x001b9f; 	T(ADD(bx, dx));	// 3921 add     bx, dx ;~ 01A2:1B9F
cs=0x192;eip=0x001ba1; 	T(CMP(*(raddr(ds,bx)), 0));	// 3922 cmp     byte ptr [bx], 0 ;~ 01A2:1BA1
cs=0x192;eip=0x001ba6; 	X(DEC(byte_11bcd));	// 3926 dec     byte_11BCD ;~ 01A2:1BA6
cs=0x192;eip=0x001baa; 	X(ADD(word_11bb4, 0x0FFE0));	// 3927 add     word_11BB4, 0FFE0h ;~ 01A2:1BAA
cs=0x192;eip=0x001baf; 	R(JMP(loc_111ab));	// 3928 jmp     loc_111AB ;~ 01A2:1BAF
ret_1a2_1be1:
	// 4826 
cs=0x192;eip=0x001be1; 	R(RETN(0));	// 3998 retn ;~ 01A2:1BE1
ret_1a2_1be2:
	// 4827 
cs=0x192;eip=0x001be2; 	X(POP(bp));	// 4000 pop     bp ;~ 01A2:1BE2
cs=0x192;eip=0x001be3; 	X(POP(es));	// 4001 pop     es ;~ 01A2:1BE3
cs=0x192;eip=0x001be4; 	R(RETN(0));	// 4002 retn ;~ 01A2:1BE4
seg000_1c07_proc:
	// 4032 
loc_11c07:
	// 4831 
cs=0x192;eip=0x001c07; 	T(MOV(al, *(db*)(((db*)&word_11bd6))));	// 4033 mov     al, byte ptr word_11BD6 ;~ 01A2:1C07
cs=0x192;eip=0x001c0a; 	T(OR(al, al));	// 4034 or      al, al ;~ 01A2:1C0A
cs=0x192;eip=0x001c0c; 	R(JNZ(locret_11c32));	// 4035 jnz     short locret_11C32 ;~ 01A2:1C0C
cs=0x192;eip=0x001c0e; 	T(MOV(ah, al));	// 4036 mov     ah, al ;~ 01A2:1C0E
cs=0x192;eip=0x001c10; 	T(MOV(al, byte_11bce));	// 4037 mov     al, byte_11BCE ;~ 01A2:1C10
cs=0x192;eip=0x001c13; 	T(ADD(al, 0x30));	// 4038 add     al, 30h ; '0' ;~ 01A2:1C13
cs=0x192;eip=0x001c15; 	T(ADD(ax, 0x6E));	// 4039 add     ax, 6Eh ; 'n' ;~ 01A2:1C15
cs=0x192;eip=0x001c18; 	X(MOV(word_15b22, ax));	// 4040 mov     word_15B22, ax ;~ 01A2:1C18
cs=0x192;eip=0x001c1b; 	X(MOV(byte_15b34, 5));	// 4041 mov     byte_15B34, 5 ;~ 01A2:1C1B
cs=0x192;eip=0x001c20; 	T(MOV(dx, 0x5B3E));	// 4042 mov     dx, 5B3Eh ;~ 01A2:1C20
cs=0x192;eip=0x001c23; 	T(MOV(ax, 0x484));	// 4043 mov     ax, 484h ;~ 01A2:1C23
cs=0x192;eip=0x001c26; 	R(CALL(sub_11ec0,0));	// 4044 call    sub_11EC0 ;~ 01A2:1C26
cs=0x192;eip=0x001c29; 	T(MOV(dx, 0x5B6A));	// 4045 mov     dx, 5B6Ah ;~ 01A2:1C29
cs=0x192;eip=0x001c2c; 	T(MOV(ax, 4));	// 4046 mov     ax, 4 ;~ 01A2:1C2C
cs=0x192;eip=0x001c2f; 	R(CALL(sub_11ec0,0));	// 4047 call    sub_11EC0 ;~ 01A2:1C2F
locret_11c32:
	// 4832 
cs=0x192;eip=0x001c32; 	R(RETN(0));	// 4050 retn ;~ 01A2:1C32
sub_11c33:
	// 4056 
cs=0x192;eip=0x001c33; 	X(POP(bp));	// 4064 pop     bp ;~ 01A2:1C33
ret_1a2_1c34:
	// 4833 
cs=0x192;eip=0x001c34; 	T(CMP(byte_15fed, 7));	// 4065 cmp     byte_15FED, 7 ;~ 01A2:1C34
cs=0x192;eip=0x001c39; 	R(JZ(loc_11c95));	// 4066 jz      short loc_11C95 ;~ 01A2:1C39
cs=0x192;eip=0x001c3b; 	T(CMP(byte_15ff0, 7));	// 4067 cmp     byte_15FF0, 7 ;~ 01A2:1C3B
cs=0x192;eip=0x001c40; 	R(JZ(loc_11c95));	// 4068 jz      short loc_11C95 ;~ 01A2:1C40
cs=0x192;eip=0x001c42; 	X(PUSH(bp));	// 4069 push    bp ;~ 01A2:1C42
cs=0x192;eip=0x001c43; 	T(MOV(cx, 5));	// 4070 mov     cx, 5 ;~ 01A2:1C43
cs=0x192;eip=0x001c46; 	R(CALL(sub_11d4f,m2c::kloc_11d52));	// 4071 call    loc_11D52 ;~ 01A2:1C46
cs=0x192;eip=0x001c49; 	X(POP(bp));	// 4072 pop     bp ;~ 01A2:1C49
cs=0x192;eip=0x001c4a; 	R(JZ(loc_11c4f));	// 4073 jz      short loc_11C4F ;~ 01A2:1C4A
cs=0x192;eip=0x001c4c; 	R(JMP(loc_11367));	// 4074 jmp     loc_11367 ;~ 01A2:1C4C
loc_11c4f:
	// 4834 
cs=0x192;eip=0x001c4f; 	T(MOV(al, byte_15fe6));	// 4078 mov     al, byte_15FE6 ;~ 01A2:1C4F
cs=0x192;eip=0x001c52; 	T(INC(al));	// 4079 inc     al ;~ 01A2:1C52
cs=0x192;eip=0x001c54; 	T(CMP(al, 0x0C8));	// 4080 cmp     al, 0C8h ; 'È' ;~ 01A2:1C54
cs=0x192;eip=0x001c56; 	R(JC(loc_11c66));	// 4081 jb      short loc_11C66 ;~ 01A2:1C56
cs=0x192;eip=0x001c58; 	X(DEC(byte_11bcd));	// 4082 dec     byte_11BCD ;~ 01A2:1C58
cs=0x192;eip=0x001c5c; 	X(ADD(word_11bb4, 0x0FFE0));	// 4083 add     word_11BB4, 0FFE0h ;~ 01A2:1C5C
cs=0x192;eip=0x001c61; 	R(CALL(sub_11c97,0));	// 4084 call    sub_11C97 ;~ 01A2:1C61
cs=0x192;eip=0x001c64; 	R(JMP(loc_11c95));	// 4085 jmp     short loc_11C95 ;~ 01A2:1C64
loc_11c66:
	// 4835 
cs=0x192;eip=0x001c66; 	T(CMP(byte_15fef, 0x0C7));	// 4089 cmp     byte_15FEF, 0C7h ; 'Ç' ;~ 01A2:1C66
cs=0x192;eip=0x001c6b; 	R(JNC(loc_11c95));	// 4090 jnb     short loc_11C95 ;~ 01A2:1C6B
cs=0x192;eip=0x001c6d; 	T(CMP(byte_15fec, 0x0C7));	// 4091 cmp     byte_15FEC, 0C7h ; 'Ç' ;~ 01A2:1C6D
cs=0x192;eip=0x001c72; 	R(JNC(loc_11c95));	// 4092 jnb     short loc_11C95 ;~ 01A2:1C72
cs=0x192;eip=0x001c74; 	X(INC(byte_11bcd));	// 4093 inc     byte_11BCD ;~ 01A2:1C74
cs=0x192;eip=0x001c78; 	X(ADD(word_11bb4, 0x20));	// 4094 add     word_11BB4, 20h ; ' ' ;~ 01A2:1C78
cs=0x192;eip=0x001c7d; 	R(CALL(sub_11d16,0));	// 4095 call    sub_11D16 ;~ 01A2:1C7D
cs=0x192;eip=0x001c80; 	X(PUSH(bp));	// 4096 push    bp ;~ 01A2:1C80
cs=0x192;eip=0x001c81; 	R(CALL(sub_11db3,0));	// 4097 call    sub_11DB3 ;~ 01A2:1C81
cs=0x192;eip=0x001c84; 	R(CALL(sub_11dca,0));	// 4098 call    sub_11DCA ;~ 01A2:1C84
cs=0x192;eip=0x001c87; 	R(CALL(sub_11dc4,0));	// 4099 call    sub_11DC4 ;~ 01A2:1C87
cs=0x192;eip=0x001c8a; 	R(CALL(sub_11d36,0));	// 4100 call    sub_11D36 ;~ 01A2:1C8A
cs=0x192;eip=0x001c8d; 	X(POP(bp));	// 4101 pop     bp ;~ 01A2:1C8D
cs=0x192;eip=0x001c8e; 	R(JNZ(loc_11c95));	// 4102 jnz     short loc_11C95 ;~ 01A2:1C8E
cs=0x192;eip=0x001c90; 	T(MOV(al, 5));	// 4103 mov     al, 5 ;~ 01A2:1C90
cs=0x192;eip=0x001c92; 	R(JMP(loc_112f1));	// 4104 jmp     loc_112F1 ;~ 01A2:1C92
loc_11c95:
	// 4836 
cs=0x192;eip=0x001c95; 	X(PUSH(bp));	// 4109 push    bp ;~ 01A2:1C95
cs=0x192;eip=0x001c96; 	R(RETN(0));	// 4110 retn ;~ 01A2:1C96
sub_11c97:
	// 4117 
cs=0x192;eip=0x001c97; 	T(CMP(byte_11bcd, 0x0F9));	// 4119 cmp     byte_11BCD, 0F9h ; 'ù' ;~ 01A2:1C97
ret_1a2_1c9c:
	// 4837 
cs=0x192;eip=0x001c9c; 	R(JZ(loc_11c9f));	// 4120 jz      short loc_11C9F ;~ 01A2:1C9C
cs=0x192;eip=0x001c9e; 	R(RETN(0));	// 4121 retn ;~ 01A2:1C9E
loc_11c9f:
	// 4838 
cs=0x192;eip=0x001c9f; 	X(DEC(*(db*)(((db*)&word_11bd6))));	// 4125 dec     byte ptr word_11BD6 ;~ 01A2:1C9F
cs=0x192;eip=0x001ca3; 	X(POP(ax));	// 4126 pop     ax ;~ 01A2:1CA3
cs=0x192;eip=0x001ca4; 	X(ADD(byte_11bcd, 0x12));	// 4127 add     byte_11BCD, 12h ;~ 01A2:1CA4
cs=0x192;eip=0x001ca9; 	T(MOV(bx, word_11bb4));	// 4128 mov     bx, word_11BB4 ;~ 01A2:1CA9
cs=0x192;eip=0x001cad; 	T(ADD(bx, 0x240));	// 4129 add     bx, 240h ;~ 01A2:1CAD
cs=0x192;eip=0x001cb1; 	T(MOV(dx, 0x0FFE0));	// 4130 mov     dx, 0FFE0h ;~ 01A2:1CB1
cs=0x192;eip=0x001cb4; 	R(JMP(loc_11271));	// 4131 jmp     loc_11271 ;~ 01A2:1CB4
sub_11d00:
	// 4182 
cs=0x192;eip=0x001d00; 	T(MOV(dx, 0x506));	// 4187 mov     dx, 506h ;~ 01A2:1D00
ret_1a2_1d03:
	// 4842 
cs=0x192;eip=0x001d03; 	R(CALL(sub_11daa,0));	// 4188 call    sub_11DAA ;~ 01A2:1D03
cs=0x192;eip=0x001d06; 	T(MOV(bx, word_11bb4));	// 4189 mov     bx, word_11BB4 ;~ 01A2:1D06
cs=0x192;eip=0x001d0a; 	T(ADD(bx, dx));	// 4190 add     bx, dx ;~ 01A2:1D0A
cs=0x192;eip=0x001d0c; 	T(CMP(*(raddr(ds,bx)), 0));	// 4191 cmp     byte ptr [bx], 0 ;~ 01A2:1D0C
cs=0x192;eip=0x001d0f; 	R(JNZ(loc_11d12));	// 4192 jnz     short loc_11D12 ;~ 01A2:1D0F
cs=0x192;eip=0x001d11; 	R(RETN(0));	// 4193 retn ;~ 01A2:1D11
loc_11d12:
	// 4843 
cs=0x192;eip=0x001d12; 	X(POP(ax));	// 4197 pop     ax ;~ 01A2:1D12
cs=0x192;eip=0x001d13; 	R(JMP(loc_111ab));	// 4198 jmp     loc_111AB ;~ 01A2:1D13
sub_11d16:
	// 4205 
cs=0x192;eip=0x001d16; 	T(CMP(byte_11bcd, 0x0B));	// 4207 cmp     byte_11BCD, 0Bh ;~ 01A2:1D16
ret_1a2_1d1b:
	// 4844 
cs=0x192;eip=0x001d1b; 	R(JZ(loc_11d1e));	// 4208 jz      short loc_11D1E ;~ 01A2:1D1B
cs=0x192;eip=0x001d1d; 	R(RETN(0));	// 4209 retn ;~ 01A2:1D1D
loc_11d1e:
	// 4845 
cs=0x192;eip=0x001d1e; 	X(INC(*(db*)(((db*)&word_11bd6))));	// 4213 inc     byte ptr word_11BD6 ;~ 01A2:1D1E
cs=0x192;eip=0x001d22; 	X(SUB(byte_11bcd, 0x11));	// 4214 sub     byte_11BCD, 11h ;~ 01A2:1D22
cs=0x192;eip=0x001d27; 	T(MOV(bx, word_11bb4));	// 4215 mov     bx, word_11BB4 ;~ 01A2:1D27
cs=0x192;eip=0x001d2b; 	T(ADD(bx, 0x0FDE0));	// 4216 add     bx, 0FDE0h ;~ 01A2:1D2B
cs=0x192;eip=0x001d2f; 	T(MOV(dx, 0x20));	// 4217 mov     dx, 20h ; ' ' ;~ 01A2:1D2F
cs=0x192;eip=0x001d32; 	X(POP(ax));	// 4218 pop     ax ;~ 01A2:1D32
cs=0x192;eip=0x001d33; 	R(JMP(loc_11271));	// 4219 jmp     loc_11271 ;~ 01A2:1D33
sub_11d6b:
	// 4278 
cs=0x192;eip=0x001d6b; 	R(CALL(sub_11d4f,0));	// 4285 call    sub_11D4F ;~ 01A2:1D6B
ret_1a2_1d6e:
	// 4852 
cs=0x192;eip=0x001d6e; 	R(JNZ(loc_11d71));	// 4286 jnz     short loc_11D71 ;~ 01A2:1D6E
cs=0x192;eip=0x001d70; 	R(RETN(0));	// 4287 retn ;~ 01A2:1D70
loc_11d71:
	// 4853 
cs=0x192;eip=0x001d71; 	X(POP(ax));	// 4291 pop     ax ;~ 01A2:1D71
cs=0x192;eip=0x001d72; 	T(MOV(dx, 0x5E7E));	// 4292 mov     dx, 5E7Eh ;~ 01A2:1D72
cs=0x192;eip=0x001d75; 	T(MOV(bx, 0x1A05));	// 4293 mov     bx, 1A05h ;~ 01A2:1D75
cs=0x192;eip=0x001d78; 	R(JMP(loc_11209));	// 4294 jmp     loc_11209 ;~ 01A2:1D78
sub_11d7b:
	// 4301 
cs=0x192;eip=0x001d7b; 	T(CMP(byte_11bd9, 0));	// 4308 cmp     byte_11BD9, 0 ;~ 01A2:1D7B
ret_1a2_1d80:
	// 4854 
cs=0x192;eip=0x001d80; 	R(JZ(loc_11d8e));	// 4309 jz      short loc_11D8E ;~ 01A2:1D80
cs=0x192;eip=0x001d82; 	T(CMP(byte_11bce, 0x1D));	// 4310 cmp     byte_11BCE, 1Dh ;~ 01A2:1D82
cs=0x192;eip=0x001d87; 	R(JZ(loc_11d8a));	// 4311 jz      short loc_11D8A ;~ 01A2:1D87
locret_11d89:
	// 4855 
cs=0x192;eip=0x001d89; 	R(RETN(0));	// 4314 retn ;~ 01A2:1D89
loc_11d8a:
	// 4856 
cs=0x192;eip=0x001d8a; 	X(POP(ax));	// 4318 pop     ax ;~ 01A2:1D8A
cs=0x192;eip=0x001d8b; 	R(JMP(loc_11229));	// 4319 jmp     loc_11229 ;~ 01A2:1D8B
loc_11d8e:
	// 4857 
cs=0x192;eip=0x001d8e; 	T(CMP(byte_11bce, 0x0FD));	// 4323 cmp     byte_11BCE, 0FDh ; 'ı' ;~ 01A2:1D8E
cs=0x192;eip=0x001d93; 	R(JNZ(locret_11d89));	// 4324 jnz     short locret_11D89 ;~ 01A2:1D93
cs=0x192;eip=0x001d95; 	X(POP(ax));	// 4325 pop     ax ;~ 01A2:1D95
cs=0x192;eip=0x001d96; 	R(JMP(loc_11213));	// 4326 jmp     loc_11213 ;~ 01A2:1D96
seg000_2736_proc:
	// 5857 
loc_12736:
	// 5014 
cs=0x192;eip=0x002736; 	R(CALL(sub_12a25,0));	// 5858 call    sub_12A25 ;~ 01A2:2736
loc_12739:
	// 5015 
cs=0x192;eip=0x002739; 	R(CALL(sub_12a93,0));	// 5862 call    sub_12A93 ;~ 01A2:2739
cs=0x192;eip=0x00273c; 	T(MOV(si, 0x7519));	// 5863 mov     si, 7519h ;~ 01A2:273C
cs=0x192;eip=0x00273f; 	R(CALL(sub_104b7,0));	// 5864 call    sub_104B7 ;~ 01A2:273F
cs=0x192;eip=0x002742; 	R(CALL(sub_12a18,0));	// 5865 call    sub_12A18 ;~ 01A2:2742
loc_12745:
	// 5016 
cs=0x192;eip=0x002745; 	R(CALL(sub_12ad8,0));	// 5868 call    sub_12AD8 ;~ 01A2:2745
cs=0x192;eip=0x002748; 	R(JNZ(loc_1274d));	// 5869 jnz     short loc_1274D ;~ 01A2:2748
loc_1274a:
	// 5017 
cs=0x192;eip=0x00274a; 	R(JMP(loc_12897));	// 5872 jmp     loc_12897 ;~ 01A2:274A
loc_1274d:
	// 5018 
cs=0x192;eip=0x00274d; 	R(CALL(sub_12a13,0));	// 5876 call    sub_12A13 ;~ 01A2:274D
cs=0x192;eip=0x002750; 	R(CALL(sub_12a05,0));	// 5877 call    sub_12A05 ;~ 01A2:2750
cs=0x192;eip=0x002753; 	T(CMP(al, 3));	// 5878 cmp     al, 3 ;~ 01A2:2753
cs=0x192;eip=0x002755; 	R(JNZ(loc_1275a));	// 5879 jnz     short loc_1275A ;~ 01A2:2755
cs=0x192;eip=0x002757; 	R(JMP(loc_1012d));	// 5880 jmp     loc_1012D ;~ 01A2:2757
loc_1275a:
	// 5019 
cs=0x192;eip=0x00275a; 	T(CMP(al, 0x52));	// 5884 cmp     al, 52h ; 'R' ;~ 01A2:275A
cs=0x192;eip=0x00275c; 	R(JZ(loc_127d1));	// 5885 jz      short loc_127D1 ;~ 01A2:275C
cs=0x192;eip=0x00275e; 	T(CMP(al, 0x4D));	// 5886 cmp     al, 4Dh ; 'M' ;~ 01A2:275E
cs=0x192;eip=0x002760; 	R(JZ(loc_1277f));	// 5887 jz      short loc_1277F ;~ 01A2:2760
cs=0x192;eip=0x002762; 	T(CMP(al, 0x53));	// 5888 cmp     al, 53h ; 'S' ;~ 01A2:2762
cs=0x192;eip=0x002764; 	R(JZ(loc_1276f));	// 5889 jz      short loc_1276F ;~ 01A2:2764
cs=0x192;eip=0x002766; 	T(CMP(al, 0x0E));	// 5890 cmp     al, 0Eh ;~ 01A2:2766
cs=0x192;eip=0x002768; 	R(JNZ(loc_1274a));	// 5891 jnz     short loc_1274A ;~ 01A2:2768
cs=0x192;eip=0x00276a; 	R(CALL(sub_12772,0));	// 5892 call    sub_12772 ;~ 01A2:276A
cs=0x192;eip=0x00276d; 	R(JMP(loc_12745));	// 5893 jmp     short loc_12745 ;~ 01A2:276D
loc_1276f:
	// 5020 
cs=0x192;eip=0x00276f; 	R(JMP(loc_1028e));	// 5897 jmp     loc_1028E ;~ 01A2:276F
seg000_277f_proc:
	// 5922 
loc_1277f:
	// 5022 
cs=0x192;eip=0x00277f; 	R(CALL(sub_12a93,0));	// 5923 call    sub_12A93 ;~ 01A2:277F
cs=0x192;eip=0x002782; 	T(MOV(si, 0x74AF));	// 5924 mov     si, 74AFh ;~ 01A2:2782
cs=0x192;eip=0x002785; 	R(CALL(sub_104b7,0));	// 5925 call    sub_104B7 ;~ 01A2:2785
cs=0x192;eip=0x002788; 	R(CALL(sub_12a18,0));	// 5926 call    sub_12A18 ;~ 01A2:2788
cs=0x192;eip=0x00278b; 	R(CALL(sub_12970,0));	// 5927 call    sub_12970 ;~ 01A2:278B
cs=0x192;eip=0x00278e; 	T(CLD);	// 5928 cld ;~ 01A2:278E
cs=0x192;eip=0x00278f; 	T(MOV(bx, 0x744C));	// 5929 mov     bx, 744Ch ;~ 01A2:278F
cs=0x192;eip=0x002792; 	T(MOV(cx, 9));	// 5930 mov     cx, 9 ;~ 01A2:2792
loc_12795:
	// 5023 
cs=0x192;eip=0x002795; 	T(MOV(si, 0x743A));	// 5933 mov     si, 743Ah ;~ 01A2:2795
cs=0x192;eip=0x002798; 	T(MOV(ah, 0x0B));	// 5934 mov     ah, 0Bh ;~ 01A2:2798
cs=0x192;eip=0x00279a; 	X(PUSH(bx));	// 5935 push    bx ;~ 01A2:279A
loc_1279b:
	// 5024 
cs=0x192;eip=0x00279b; 	T(LODSB);	// 5938 lodsb ;~ 01A2:279B
cs=0x192;eip=0x00279c; 	T(CMP(al, *(raddr(ds,bx))));	// 5939 cmp     al, [bx] ;~ 01A2:279C
cs=0x192;eip=0x00279e; 	R(JNZ(loc_127b9));	// 5940 jnz     short loc_127B9 ;~ 01A2:279E
cs=0x192;eip=0x0027a0; 	T(INC(bx));	// 5941 inc     bx ;~ 01A2:27A0
cs=0x192;eip=0x0027a1; 	T(DEC(ah));	// 5942 dec     ah ;~ 01A2:27A1
cs=0x192;eip=0x0027a3; 	R(JNZ(loc_1279b));	// 5943 jnz     short loc_1279B ;~ 01A2:27A3
cs=0x192;eip=0x0027a5; 	X(POP(bx));	// 5944 pop     bx ;~ 01A2:27A5
cs=0x192;eip=0x0027a6; 	X(MOV(byte_11bc6, cl));	// 5945 mov     byte_11BC6, cl ;~ 01A2:27A6
cs=0x192;eip=0x0027aa; 	T(ADD(cl, 0x30));	// 5946 add     cl, 30h ; '0' ;~ 01A2:27AA
cs=0x192;eip=0x0027ad; 	X(MOV(byte_175e9, cl));	// 5947 mov     byte_175E9, cl ;~ 01A2:27AD
cs=0x192;eip=0x0027b1; 	T(MOV(si, 0x75DC));	// 5948 mov     si, 75DCh ;~ 01A2:27B1
cs=0x192;eip=0x0027b4; 	R(CALL(sub_104b7,0));	// 5949 call    sub_104B7 ;~ 01A2:27B4
cs=0x192;eip=0x0027b7; 	R(JMP(loc_127c5));	// 5950 jmp     short loc_127C5 ;~ 01A2:27B7
loc_127b9:
	// 5025 
cs=0x192;eip=0x0027b9; 	X(POP(bx));	// 5954 pop     bx ;~ 01A2:27B9
cs=0x192;eip=0x0027ba; 	T(ADD(bx, 0x0B));	// 5955 add     bx, 0Bh ;~ 01A2:27BA
cs=0x192;eip=0x0027bd; 	R(LOOP(loc_12795));	// 5956 loop    loc_12795 ;~ 01A2:27BD
cs=0x192;eip=0x0027bf; 	T(MOV(si, 0x74F6));	// 5957 mov     si, 74F6h ;~ 01A2:27BF
cs=0x192;eip=0x0027c2; 	R(CALL(sub_104b7,0));	// 5958 call    sub_104B7 ;~ 01A2:27C2
loc_127c5:
	// 5026 
cs=0x192;eip=0x0027c5; 	T(MOV(si, 0x75BB));	// 5962 mov     si, 75BBh ;~ 01A2:27C5
cs=0x192;eip=0x0027c8; 	R(CALL(sub_104b7,0));	// 5963 call    sub_104B7 ;~ 01A2:27C8
cs=0x192;eip=0x0027cb; 	R(CALL(sub_12a10,0));	// 5964 call    sub_12A10 ;~ 01A2:27CB
cs=0x192;eip=0x0027ce; 	R(JMP(loc_12739));	// 5965 jmp     loc_12739 ;~ 01A2:27CE
loc_127d1:
	// 5027 
cs=0x192;eip=0x0027d1; 	R(CALL(sub_12a93,0));	// 5969 call    sub_12A93 ;~ 01A2:27D1
cs=0x192;eip=0x0027d4; 	T(MOV(si, 0x75F4));	// 5970 mov     si, 75F4h ;~ 01A2:27D4
cs=0x192;eip=0x0027d7; 	R(CALL(sub_104b7,0));	// 5971 call    sub_104B7 ;~ 01A2:27D7
cs=0x192;eip=0x0027da; 	R(CALL(sub_12a18,0));	// 5972 call    sub_12A18 ;~ 01A2:27DA
cs=0x192;eip=0x0027dd; 	X(MOV(byte_1760b, 8));	// 5973 mov     byte_1760B, 8 ;~ 01A2:27DD
cs=0x192;eip=0x0027e2; 	T(MOV(si, 0x761E));	// 5974 mov     si, 761Eh ;~ 01A2:27E2
cs=0x192;eip=0x0027e5; 	T(MOV(bx, 0x5800));	// 5975 mov     bx, 5800h ;~ 01A2:27E5
cs=0x192;eip=0x0027e8; 	T(MOV(cx, 5));	// 5976 mov     cx, 5 ;~ 01A2:27E8
loc_127eb:
	// 5028 
cs=0x192;eip=0x0027eb; 	X(PUSH(cx));	// 5979 push    cx ;~ 01A2:27EB
cs=0x192;eip=0x0027ec; 	T(MOV(di, 0x760C));	// 5980 mov     di, 760Ch ;~ 01A2:27EC
cs=0x192;eip=0x0027ef; 	T(MOV(cx, 5));	// 5981 mov     cx, 5 ;~ 01A2:27EF
cs=0x192;eip=0x0027f2; 	T(CLD);	// 5982 cld ;~ 01A2:27F2
	// 5983 rep movsb ;~ 01A2:27F3
cs=0x192;eip=0x0027f3; 	X(	REP MOVSB);	// 5983 rep movsb ;~ 01A2:27F3
cs=0x192;eip=0x0027f5; 	X(PUSH(si));	// 5984 push    si ;~ 01A2:27F5
cs=0x192;eip=0x0027f6; 	X(PUSH(bx));	// 5985 push    bx ;~ 01A2:27F6
cs=0x192;eip=0x0027f7; 	T(MOV(si, 0x7607));	// 5986 mov     si, 7607h ;~ 01A2:27F7
cs=0x192;eip=0x0027fa; 	R(CALL(sub_104b7,0));	// 5987 call    sub_104B7 ;~ 01A2:27FA
cs=0x192;eip=0x0027fd; 	R(CALL(sub_12a10,0));	// 5988 call    sub_12A10 ;~ 01A2:27FD
cs=0x192;eip=0x002800; 	X(MOV(byte_1761c, 0x21));	// 5989 mov     byte_1761C, 21h ; '!' ;~ 01A2:2800
cs=0x192;eip=0x002805; 	R(CALL(sub_12a05,0));	// 5990 call    sub_12A05 ;~ 01A2:2805
cs=0x192;eip=0x002808; 	T(OR(al, al));	// 5991 or      al, al ;~ 01A2:2808
cs=0x192;eip=0x00280a; 	R(JZ(loc_1280e));	// 5992 jz      short loc_1280E ;~ 01A2:280A
cs=0x192;eip=0x00280c; 	T(MOV(ah, al));	// 5993 mov     ah, al ;~ 01A2:280C
loc_1280e:
	// 5029 
cs=0x192;eip=0x00280e; 	T(CMP(al, 0x41));	// 5996 cmp     al, 41h ; 'A' ;~ 01A2:280E
cs=0x192;eip=0x002810; 	R(JC(loc_1281c));	// 5997 jb      short loc_1281C ;~ 01A2:2810
cs=0x192;eip=0x002812; 	T(CMP(al, 0x5B));	// 5998 cmp     al, 5Bh ; '[' ;~ 01A2:2812
cs=0x192;eip=0x002814; 	R(JNC(loc_12827));	// 5999 jnb     short loc_12827 ;~ 01A2:2814
cs=0x192;eip=0x002816; 	T(ADD(ah, 0x20));	// 6000 add     ah, 20h ; ' ' ;~ 01A2:2816
cs=0x192;eip=0x002819; 	R(JMP(loc_12824));	// 6001 jmp     short loc_12824 ;~ 01A2:2819
loc_1281c:
	// 5030 
cs=0x192;eip=0x00281c; 	T(CMP(al, 0x30));	// 6008 cmp     al, 30h ; '0' ;~ 01A2:281C
cs=0x192;eip=0x00281e; 	R(JC(loc_12827));	// 6009 jb      short loc_12827 ;~ 01A2:281E
cs=0x192;eip=0x002820; 	T(CMP(al, 0x3A));	// 6010 cmp     al, 3Ah ; ':' ;~ 01A2:2820
cs=0x192;eip=0x002822; 	R(JNC(loc_12827));	// 6011 jnb     short loc_12827 ;~ 01A2:2822
loc_12824:
	// 5031 
cs=0x192;eip=0x002824; 	X(MOV(byte_1761c, al));	// 6014 mov     byte_1761C, al ;~ 01A2:2824
loc_12827:
	// 5032 
cs=0x192;eip=0x002827; 	X(PUSH(ax));	// 6018 push    ax ;~ 01A2:2827
cs=0x192;eip=0x002828; 	T(MOV(si, 0x761C));	// 6019 mov     si, 761Ch ;~ 01A2:2828
cs=0x192;eip=0x00282b; 	R(CALL(sub_104b7,0));	// 6020 call    sub_104B7 ;~ 01A2:282B
cs=0x192;eip=0x00282e; 	X(ADD(byte_1760b, 2));	// 6021 add     byte_1760B, 2 ;~ 01A2:282E
cs=0x192;eip=0x002833; 	X(POP(ax));	// 6022 pop     ax ;~ 01A2:2833
cs=0x192;eip=0x002834; 	X(POP(bx));	// 6023 pop     bx ;~ 01A2:2834
cs=0x192;eip=0x002835; 	X(MOV(*(raddr(ds,bx)), al));	// 6024 mov     [bx], al ;~ 01A2:2835
cs=0x192;eip=0x002837; 	T(INC(bx));	// 6025 inc     bx ;~ 01A2:2837
cs=0x192;eip=0x002838; 	X(MOV(*(raddr(ds,bx)), ah));	// 6026 mov     [bx], ah ;~ 01A2:2838
cs=0x192;eip=0x00283a; 	T(ADD(bx, 3));	// 6027 add     bx, 3 ;~ 01A2:283A
cs=0x192;eip=0x00283d; 	X(POP(si));	// 6028 pop     si ;~ 01A2:283D
cs=0x192;eip=0x00283e; 	X(POP(cx));	// 6029 pop     cx ;~ 01A2:283E
cs=0x192;eip=0x00283f; 	R(LOOP(loc_127eb));	// 6030 loop    loc_127EB ;~ 01A2:283F
cs=0x192;eip=0x002841; 	R(JMP(loc_127c5));	// 6031 jmp     short loc_127C5 ;~ 01A2:2841
loc_12843:
	// 5033 
cs=0x192;eip=0x002843; 	R(CALL(sub_12a25,0));	// 6037 call    sub_12A25 ;~ 01A2:2843
cs=0x192;eip=0x002846; 	T(MOV(cx, 0x0F));	// 6038 mov     cx, 0Fh ;~ 01A2:2846
cs=0x192;eip=0x002849; 	T(MOV(bx, 0x76AE));	// 6039 mov     bx, 76AEh ;~ 01A2:2849
loc_1284c:
	// 5034 
cs=0x192;eip=0x00284c; 	T(MOV(si, 0x195E));	// 6042 mov     si, 195Eh ;~ 01A2:284C
cs=0x192;eip=0x00284f; 	X(PUSH(bx));	// 6043 push    bx ;~ 01A2:284F
cs=0x192;eip=0x002850; 	X(PUSH(cx));	// 6044 push    cx ;~ 01A2:2850
cs=0x192;eip=0x002851; 	T(MOV(cx, 6));	// 6045 mov     cx, 6 ;~ 01A2:2851
loc_12854:
	// 5035 
cs=0x192;eip=0x002854; 	T(LODSB);	// 6048 lodsb ;~ 01A2:2854
cs=0x192;eip=0x002855; 	T(CMP(al, *(raddr(ds,bx))));	// 6049 cmp     al, [bx] ;~ 01A2:2855
cs=0x192;eip=0x002857; 	R(JNZ(loc_12866));	// 6050 jnz     short loc_12866 ;~ 01A2:2857
cs=0x192;eip=0x002859; 	T(INC(bx));	// 6051 inc     bx ;~ 01A2:2859
cs=0x192;eip=0x00285a; 	R(LOOP(loc_12854));	// 6052 loop    loc_12854 ;~ 01A2:285A
loc_1285c:
	// 5036 
cs=0x192;eip=0x00285c; 	X(POP(cx));	// 6055 pop     cx ;~ 01A2:285C
cs=0x192;eip=0x00285d; 	X(POP(bx));	// 6056 pop     bx ;~ 01A2:285D
cs=0x192;eip=0x00285e; 	T(ADD(bx, 0x11));	// 6057 add     bx, 11h ;~ 01A2:285E
cs=0x192;eip=0x002861; 	R(LOOP(loc_1284c));	// 6058 loop    loc_1284C ;~ 01A2:2861
cs=0x192;eip=0x002863; 	R(JMP(loc_1289a));	// 6059 jmp     short loc_1289A ;~ 01A2:2863
loc_12866:
	// 5037 
cs=0x192;eip=0x002866; 	R(JC(loc_1285c));	// 6064 jb      short loc_1285C ;~ 01A2:2866
cs=0x192;eip=0x002868; 	T(MOV(si, 0x7637));	// 6065 mov     si, 7637h ;~ 01A2:2868
cs=0x192;eip=0x00286b; 	R(CALL(sub_104b7,0));	// 6066 call    sub_104B7 ;~ 01A2:286B
cs=0x192;eip=0x00286e; 	R(CALL(sub_12970,0));	// 6067 call    sub_12970 ;~ 01A2:286E
cs=0x192;eip=0x002871; 	X(POP(cx));	// 6068 pop     cx ;~ 01A2:2871
cs=0x192;eip=0x002872; 	X(POP(bx));	// 6069 pop     bx ;~ 01A2:2872
cs=0x192;eip=0x002873; 	T(MOV(si, 0x77AC));	// 6070 mov     si, 77ACh ;~ 01A2:2873
cs=0x192;eip=0x002876; 	T(MOV(di, 0x77BD));	// 6071 mov     di, 77BDh ;~ 01A2:2876
cs=0x192;eip=0x002879; 	T(STD);	// 6072 std ;~ 01A2:2879
loc_1287a:
	// 5038 
cs=0x192;eip=0x00287a; 	X(PUSH(cx));	// 6075 push    cx ;~ 01A2:287A
cs=0x192;eip=0x00287b; 	T(MOV(cx, 0x11));	// 6076 mov     cx, 11h ;~ 01A2:287B
	// 6077 rep movsb ;~ 01A2:287E
cs=0x192;eip=0x00287e; 	X(	REP MOVSB);	// 6077 rep movsb ;~ 01A2:287E
cs=0x192;eip=0x002880; 	X(POP(cx));	// 6078 pop     cx ;~ 01A2:2880
cs=0x192;eip=0x002881; 	R(LOOP(loc_1287a));	// 6079 loop    loc_1287A ;~ 01A2:2881
cs=0x192;eip=0x002883; 	T(INC(si));	// 6080 inc     si ;~ 01A2:2883
cs=0x192;eip=0x002884; 	T(MOV(di, si));	// 6081 mov     di, si ;~ 01A2:2884
cs=0x192;eip=0x002886; 	T(MOV(si, 0x195E));	// 6082 mov     si, 195Eh ;~ 01A2:2886
cs=0x192;eip=0x002889; 	T(MOV(cx, 6));	// 6083 mov     cx, 6 ;~ 01A2:2889
cs=0x192;eip=0x00288c; 	T(CLD);	// 6084 cld ;~ 01A2:288C
	// 6085 rep movsb ;~ 01A2:288D
cs=0x192;eip=0x00288d; 	X(	REP MOVSB);	// 6085 rep movsb ;~ 01A2:288D
cs=0x192;eip=0x00288f; 	T(MOV(si, 0x743A));	// 6086 mov     si, 743Ah ;~ 01A2:288F
cs=0x192;eip=0x002892; 	T(MOV(cx, 0x0B));	// 6087 mov     cx, 0Bh ;~ 01A2:2892
	// 6088 rep movsb ;~ 01A2:2895
cs=0x192;eip=0x002895; 	X(	REP MOVSB);	// 6088 rep movsb ;~ 01A2:2895
loc_12897:
	// 5039 
cs=0x192;eip=0x002897; 	R(CALL(sub_12a93,0));	// 6092 call    sub_12A93 ;~ 01A2:2897
loc_1289a:
	// 5040 
cs=0x192;eip=0x00289a; 	T(MOV(si, 0x7684));	// 6095 mov     si, 7684h ;~ 01A2:289A
cs=0x192;eip=0x00289d; 	R(CALL(sub_104b7,0));	// 6096 call    sub_104B7 ;~ 01A2:289D
cs=0x192;eip=0x0028a0; 	T(MOV(si, 0x76AE));	// 6097 mov     si, 76AEh ;~ 01A2:28A0
cs=0x192;eip=0x0028a3; 	T(MOV(cx, 0x0F));	// 6098 mov     cx, 0Fh ;~ 01A2:28A3
cs=0x192;eip=0x0028a6; 	X(MOV(byte_17699, 4));	// 6099 mov     byte_17699, 4 ;~ 01A2:28A6
loc_128ab:
	// 5041 
cs=0x192;eip=0x0028ab; 	T(MOV(di, 0x769A));	// 6102 mov     di, 769Ah ;~ 01A2:28AB
cs=0x192;eip=0x0028ae; 	X(PUSH(cx));	// 6103 push    cx ;~ 01A2:28AE
cs=0x192;eip=0x0028af; 	T(MOV(cx, 6));	// 6104 mov     cx, 6 ;~ 01A2:28AF
cs=0x192;eip=0x0028b2; 	T(CLD);	// 6105 cld ;~ 01A2:28B2
	// 6106 rep movsb ;~ 01A2:28B3
cs=0x192;eip=0x0028b3; 	X(	REP MOVSB);	// 6106 rep movsb ;~ 01A2:28B3
cs=0x192;eip=0x0028b5; 	T(ADD(di, 2));	// 6107 add     di, 2 ;~ 01A2:28B5
cs=0x192;eip=0x0028b8; 	T(MOV(cx, 0x0B));	// 6108 mov     cx, 0Bh ;~ 01A2:28B8
	// 6109 rep movsb ;~ 01A2:28BB
cs=0x192;eip=0x0028bb; 	X(	REP MOVSB);	// 6109 rep movsb ;~ 01A2:28BB
cs=0x192;eip=0x0028bd; 	X(PUSH(si));	// 6110 push    si ;~ 01A2:28BD
cs=0x192;eip=0x0028be; 	T(MOV(si, 0x7695));	// 6111 mov     si, 7695h ;~ 01A2:28BE
cs=0x192;eip=0x0028c1; 	R(CALL(sub_104b7,0));	// 6112 call    sub_104B7 ;~ 01A2:28C1
cs=0x192;eip=0x0028c4; 	X(INC(byte_17699));	// 6113 inc     byte_17699 ;~ 01A2:28C4
cs=0x192;eip=0x0028c8; 	X(POP(si));	// 6114 pop     si ;~ 01A2:28C8
cs=0x192;eip=0x0028c9; 	X(POP(cx));	// 6115 pop     cx ;~ 01A2:28C9
cs=0x192;eip=0x0028ca; 	R(LOOP(loc_128ab));	// 6116 loop    loc_128AB ;~ 01A2:28CA
cs=0x192;eip=0x0028cc; 	R(CALL(sub_12a18,0));	// 6117 call    sub_12A18 ;~ 01A2:28CC
cs=0x192;eip=0x0028cf; 	T(MOV(cx, 0x64));	// 6118 mov     cx, 64h ; 'd' ;~ 01A2:28CF
loc_128d2:
	// 5042 
cs=0x192;eip=0x0028d2; 	X(PUSH(cx));	// 6121 push    cx ;~ 01A2:28D2
cs=0x192;eip=0x0028d3; 	R(CALL(sub_10620,0));	// 6122 call    sub_10620 ;~ 01A2:28D3
cs=0x192;eip=0x0028d6; 	T(MOV(ah, 1));	// 6123 mov     ah, 1 ;~ 01A2:28D6
cs=0x192;eip=0x0028d8; 	R(_INT(0x16));	// 6124 int     16h             ; KEYBOARD - CHECK BUFFER, DO NOT CLEAR ;~ 01A2:28D8
cs=0x192;eip=0x0028da; 	X(POP(cx));	// 6128 pop     cx ;~ 01A2:28DA
cs=0x192;eip=0x0028db; 	R(JNZ(loc_128e2));	// 6129 jnz     short loc_128E2 ;~ 01A2:28DB
cs=0x192;eip=0x0028dd; 	R(LOOP(loc_128d2));	// 6130 loop    loc_128D2 ;~ 01A2:28DD
loc_128df:
	// 5043 
cs=0x192;eip=0x0028df; 	R(JMP(loc_12739));	// 6134 jmp     loc_12739 ;~ 01A2:28DF
loc_128e2:
	// 5044 
cs=0x192;eip=0x0028e2; 	T(MOV(ah, 0));	// 6138 mov     ah, 0 ;~ 01A2:28E2
cs=0x192;eip=0x0028e4; 	R(_INT(0x16));	// 6139 int     16h             ; KEYBOARD - READ CHAR FROM BUFFER, WAIT IF EMPTY ;~ 01A2:28E4
cs=0x192;eip=0x0028e6; 	T(CMP(al, 3));	// 6141 cmp     al, 3 ;~ 01A2:28E6
cs=0x192;eip=0x0028e8; 	R(JZ(loc_128f3));	// 6142 jz      short loc_128F3 ;~ 01A2:28E8
cs=0x192;eip=0x0028ea; 	T(CMP(al, 0x0E));	// 6143 cmp     al, 0Eh ;~ 01A2:28EA
cs=0x192;eip=0x0028ec; 	R(JNZ(loc_128df));	// 6144 jnz     short loc_128DF ;~ 01A2:28EC
cs=0x192;eip=0x0028ee; 	R(CALL(sub_12772,0));	// 6145 call    sub_12772 ;~ 01A2:28EE
cs=0x192;eip=0x0028f1; 	R(JMP(loc_128df));	// 6146 jmp     short loc_128DF ;~ 01A2:28F1
loc_128f3:
	// 5045 
cs=0x192;eip=0x0028f3; 	R(JMP(loc_1012d));	// 6150 jmp     loc_1012D ;~ 01A2:28F3
loc_128f6:
	// 5046 
cs=0x192;eip=0x0028f6; 	T(MOV(cx, 0x0FA));	// 6155 mov     cx, 0FAh ; 'ú' ;~ 01A2:28F6
cs=0x192;eip=0x0028f9; 	R(CALL(sub_11f6b,0));	// 6156 call    sub_11F6B ;~ 01A2:28F9
cs=0x192;eip=0x0028fc; 	T(MOV(cx, 0x14));	// 6157 mov     cx, 14h ;~ 01A2:28FC
loc_128ff:
	// 5047 
cs=0x192;eip=0x0028ff; 	X(PUSH(cx));	// 6160 push    cx ;~ 01A2:28FF
cs=0x192;eip=0x002900; 	R(CALL(sub_10620,0));	// 6161 call    sub_10620 ;~ 01A2:2900
cs=0x192;eip=0x002903; 	X(POP(cx));	// 6162 pop     cx ;~ 01A2:2903
cs=0x192;eip=0x002904; 	R(LOOP(loc_128ff));	// 6163 loop    loc_128FF ;~ 01A2:2904
cs=0x192;eip=0x002906; 	R(CALL(sub_12a25,0));	// 6164 call    sub_12A25 ;~ 01A2:2906
cs=0x192;eip=0x002909; 	T(MOV(al, byte_11bd1));	// 6165 mov     al, byte_11BD1 ;~ 01A2:2909
cs=0x192;eip=0x00290c; 	T(CMP(byte_11bc9, 1));	// 6166 cmp     byte_11BC9, 1 ;~ 01A2:290C
cs=0x192;eip=0x002911; 	R(JZ(loc_12916));	// 6167 jz      short loc_12916 ;~ 01A2:2911
cs=0x192;eip=0x002913; 	T(MOV(al, byte_11bd0));	// 6168 mov     al, byte_11BD0 ;~ 01A2:2913
loc_12916:
	// 5048 
cs=0x192;eip=0x002916; 	T(CMP(al, byte_11bc7));	// 6171 cmp     al, byte_11BC7 ;~ 01A2:2916
cs=0x192;eip=0x00291a; 	R(JNC(loc_1291f));	// 6172 jnb     short loc_1291F ;~ 01A2:291A
cs=0x192;eip=0x00291c; 	R(JMP(loc_12843));	// 6173 jmp     loc_12843 ;~ 01A2:291C
loc_1291f:
	// 5049 
cs=0x192;eip=0x00291f; 	T(MOV(cx, 0x1F4));	// 6177 mov     cx, 1F4h ;~ 01A2:291F
cs=0x192;eip=0x002922; 	R(CALL(sub_11f6b,0));	// 6178 call    sub_11F6B ;~ 01A2:2922
cs=0x192;eip=0x002925; 	T(MOV(si, 0x77BF));	// 6179 mov     si, 77BFh ;~ 01A2:2925
cs=0x192;eip=0x002928; 	R(CALL(sub_104b7,0));	// 6180 call    sub_104B7 ;~ 01A2:2928
cs=0x192;eip=0x00292b; 	T(MOV(si, 0x77CA));	// 6181 mov     si, 77CAh ;~ 01A2:292B
cs=0x192;eip=0x00292e; 	R(CALL(sub_104b7,0));	// 6182 call    sub_104B7 ;~ 01A2:292E
cs=0x192;eip=0x002931; 	T(CMP(byte_11bc6, 9));	// 6183 cmp     byte_11BC6, 9 ;~ 01A2:2931
cs=0x192;eip=0x002936; 	R(JNZ(loc_12941));	// 6184 jnz     short loc_12941 ;~ 01A2:2936
cs=0x192;eip=0x002938; 	T(MOV(si, 0x780C));	// 6185 mov     si, 780Ch ;~ 01A2:2938
cs=0x192;eip=0x00293b; 	R(CALL(sub_104b7,0));	// 6186 call    sub_104B7 ;~ 01A2:293B
cs=0x192;eip=0x00293e; 	R(JMP(loc_12964));	// 6187 jmp     short loc_12964 ;~ 01A2:293E
loc_12941:
	// 5050 
cs=0x192;eip=0x002941; 	T(MOV(al, byte_11bc6));	// 6193 mov     al, byte_11BC6 ;~ 01A2:2941
cs=0x192;eip=0x002944; 	T(MOV(cl, al));	// 6194 mov     cl, al ;~ 01A2:2944
cs=0x192;eip=0x002946; 	T(ADD(al, 0x31));	// 6195 add     al, 31h ; '1' ;~ 01A2:2946
cs=0x192;eip=0x002948; 	X(MOV(byte_1787b, al));	// 6196 mov     byte_1787B, al ;~ 01A2:2948
cs=0x192;eip=0x00294b; 	T(MOV(ch, 0));	// 6197 mov     ch, 0 ;~ 01A2:294B
cs=0x192;eip=0x00294d; 	T(MOV(si, 0x74A4));	// 6198 mov     si, 74A4h ;~ 01A2:294D
loc_12950:
	// 5051 
cs=0x192;eip=0x002950; 	T(SUB(si, 0x0B));	// 6201 sub     si, 0Bh ;~ 01A2:2950
cs=0x192;eip=0x002953; 	R(LOOP(loc_12950));	// 6202 loop    loc_12950 ;~ 01A2:2953
cs=0x192;eip=0x002955; 	T(MOV(di, 0x7883));	// 6203 mov     di, 7883h ;~ 01A2:2955
cs=0x192;eip=0x002958; 	T(MOV(cx, 0x0B));	// 6204 mov     cx, 0Bh ;~ 01A2:2958
cs=0x192;eip=0x00295b; 	T(CLD);	// 6205 cld ;~ 01A2:295B
	// 6206 rep movsb ;~ 01A2:295C
cs=0x192;eip=0x00295c; 	X(	REP MOVSB);	// 6206 rep movsb ;~ 01A2:295C
cs=0x192;eip=0x00295e; 	T(MOV(si, 0x7861));	// 6207 mov     si, 7861h ;~ 01A2:295E
cs=0x192;eip=0x002961; 	R(CALL(sub_104b7,0));	// 6208 call    sub_104B7 ;~ 01A2:2961
loc_12964:
	// 5052 
cs=0x192;eip=0x002964; 	T(MOV(si, 0x75BB));	// 6211 mov     si, 75BBh ;~ 01A2:2964
cs=0x192;eip=0x002967; 	R(CALL(sub_104b7,0));	// 6212 call    sub_104B7 ;~ 01A2:2967
cs=0x192;eip=0x00296a; 	R(CALL(sub_12a10,0));	// 6213 call    sub_12A10 ;~ 01A2:296A
cs=0x192;eip=0x00296d; 	R(JMP(loc_12843));	// 6214 jmp     loc_12843 ;~ 01A2:296D
seg000_2abc_proc:
	// 6491 
loc_12abc:
	// 5075 
cs=0x192;eip=0x002abc; 	T(CLI);	// 6493 cli ;~ 01A2:2ABC
cs=0x192;eip=0x002abd; 	X(PUSHF);	// 6494 pushf ;~ 01A2:2ABD
cs=0x192;eip=0x002abe; 	T(XOR(ax, ax));	// 6495 xor     ax, ax ;~ 01A2:2ABE
cs=0x192;eip=0x002ac0; 	T(MOV(es, ax));	// 6496 mov     es, ax ;~ 01A2:2AC0
cs=0x192;eip=0x002ac2; 	T(MOV(ax, word_17890));	// 6498 mov     ax, word_17890 ;~ 01A2:2AC2
cs=0x192;eip=0x002ac5; 	X(MOV(*(dw*)(raddr(es,0x70)), ax));	// 6499 mov     es:70h, ax ;~ 01A2:2AC5
cs=0x192;eip=0x002ac9; 	T(MOV(ax, word_17892));	// 6500 mov     ax, word_17892 ;~ 01A2:2AC9
cs=0x192;eip=0x002acc; 	X(MOV(*(dw*)(raddr(es,0x72)), ax));	// 6501 mov     es:72h, ax ;~ 01A2:2ACC
cs=0x192;eip=0x002ad0; 	X(POPF);	// 6502 popf ;~ 01A2:2AD0
cs=0x192;eip=0x002ad1; 	T(MOV(sp, word_178aa));	// 6503 mov     sp, word_178AA ;~ 01A2:2AD1
cs=0x192;eip=0x002ad5; 	X(POP(es));	// 6504 pop     es ;~ 01A2:2AD5
cs=0x192;eip=0x002ad6; 	T(STI);	// 6506 sti ;~ 01A2:2AD6
cs=0x192;eip=0x002ad7; 	R(RETN(0));	// 6507 retn ;~ 01A2:2AD7
sub_12ad8:
	// 6513 
cs=0x192;eip=0x002ad8; 	T(CLI);	// 6518 cli ;~ 01A2:2AD8
ret_1a2_2ad9:
	// 5076 
cs=0x192;eip=0x002ad9; 	X(PUSH(es));	// 6519 push    es ;~ 01A2:2AD9
cs=0x192;eip=0x002ada; 	X(MOV(word_178aa, sp));	// 6520 mov     word_178AA, sp ;~ 01A2:2ADA
cs=0x192;eip=0x002ade; 	T(XOR(ax, ax));	// 6521 xor     ax, ax ;~ 01A2:2ADE
cs=0x192;eip=0x002ae0; 	T(MOV(es, ax));	// 6522 mov     es, ax ;~ 01A2:2AE0
cs=0x192;eip=0x002ae2; 	T(MOV(ax, *(dw*)(raddr(es,0x70))));	// 6524 mov     ax, es:70h ;~ 01A2:2AE2
cs=0x192;eip=0x002ae6; 	X(MOV(word_17890, ax));	// 6525 mov     word_17890, ax ;~ 01A2:2AE6
cs=0x192;eip=0x002ae9; 	T(MOV(ax, *(dw*)(raddr(es,0x72))));	// 6526 mov     ax, es:72h ;~ 01A2:2AE9
cs=0x192;eip=0x002aed; 	X(MOV(word_17892, ax));	// 6527 mov     word_17892, ax ;~ 01A2:2AED
cs=0x192;eip=0x002af0; 	X(MOV(*(dw*)(raddr(es,0x70)), m2c::kloc_12d56));	// 6528 mov     word ptr es:70h, offset loc_12D56 ;~ 01A2:2AF0
cs=0x192;eip=0x002af7; 	X(MOV(*(dw*)(raddr(es,0x72)), cs));	// 6529 mov     word ptr es:72h, cs ;~ 01A2:2AF7
cs=0x192;eip=0x002afc; 	R(IN(al, 0x61));	// 6530 in      al, 61h         ; PC/XT PPI port B bits: ;~ 01A2:2AFC
cs=0x192;eip=0x002afe; 	T(AND(al, 0x0FC));	// 6538 and     al, 0FCh ;~ 01A2:2AFE
cs=0x192;eip=0x002b00; 	X(MOV(byte_178b6, al));	// 6539 mov     byte_178B6, al ;~ 01A2:2B00
cs=0x192;eip=0x002b03; 	T(MOV(bx, 0x79DF));	// 6540 mov     bx, 79DFh ;~ 01A2:2B03
cs=0x192;eip=0x002b06; 	R(CALL(sub_12e06,0));	// 6541 call    sub_12E06 ;~ 01A2:2B06
cs=0x192;eip=0x002b09; 	X(MOV(byte_178b9, 1));	// 6542 mov     byte_178B9, 1 ;~ 01A2:2B09
cs=0x192;eip=0x002b0e; 	X(MOV(byte_178ba, 0));	// 6543 mov     byte_178BA, 0 ;~ 01A2:2B0E
cs=0x192;eip=0x002b13; 	T(MOV(si, 0x79A8));	// 6544 mov     si, 79A8h ;~ 01A2:2B13
cs=0x192;eip=0x002b16; 	R(JMP(loc_12b1c));	// 6545 jmp     short loc_12B1C ;~ 01A2:2B16
ret_1a2_2b18:
	// 5077 
cs=0x192;eip=0x002b18; 	T(MOV(si, word_17894));	// 6547 mov     si, word_17894 ;~ 01A2:2B18
loc_12b1c:
	// 5078 
cs=0x192;eip=0x002b1c; 	T(MOV(al, *(raddr(ds,si))));	// 6551 mov     al, [si] ;~ 01A2:2B1C
cs=0x192;eip=0x002b1e; 	T(INC(si));	// 6552 inc     si ;~ 01A2:2B1E
cs=0x192;eip=0x002b1f; 	T(OR(al, al));	// 6553 or      al, al ;~ 01A2:2B1F
cs=0x192;eip=0x002b21; 	R(JS(loc_12b26));	// 6554 js      short loc_12B26 ;~ 01A2:2B21
cs=0x192;eip=0x002b23; 	R(JMP(loc_12bb2));	// 6555 jmp     loc_12BB2 ;~ 01A2:2B23
loc_12b26:
	// 5079 
cs=0x192;eip=0x002b26; 	T(AND(al, 0x7F));	// 6559 and     al, 7Fh ;~ 01A2:2B26
cs=0x192;eip=0x002b28; 	R(JNZ(loc_12b2c));	// 6560 jnz     short loc_12B2C ;~ 01A2:2B28
cs=0x192;eip=0x002b2a; 	R(JMP(loc_12abc));	// 6561 jmp     short loc_12ABC ;~ 01A2:2B2A
loc_12b2c:
	// 5080 
cs=0x192;eip=0x002b2c; 	T(DEC(al));	// 6565 dec     al ;~ 01A2:2B2C
cs=0x192;eip=0x002b2e; 	R(JNZ(loc_12b39));	// 6566 jnz     short loc_12B39 ;~ 01A2:2B2E
cs=0x192;eip=0x002b30; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 6567 mov     ax, [si] ;~ 01A2:2B30
cs=0x192;eip=0x002b32; 	T(INC(si));	// 6568 inc     si ;~ 01A2:2B32
cs=0x192;eip=0x002b33; 	T(INC(si));	// 6569 inc     si ;~ 01A2:2B33
cs=0x192;eip=0x002b34; 	X(PUSH(si));	// 6570 push    si ;~ 01A2:2B34
cs=0x192;eip=0x002b35; 	T(MOV(si, ax));	// 6571 mov     si, ax ;~ 01A2:2B35
cs=0x192;eip=0x002b37; 	R(JMP(loc_12b1c));	// 6572 jmp     short loc_12B1C ;~ 01A2:2B37
loc_12b39:
	// 5081 
cs=0x192;eip=0x002b39; 	T(DEC(al));	// 6576 dec     al ;~ 01A2:2B39
cs=0x192;eip=0x002b3b; 	R(JNZ(loc_12b40));	// 6577 jnz     short loc_12B40 ;~ 01A2:2B3B
loc_12b3d:
	// 5082 
cs=0x192;eip=0x002b3d; 	X(POP(si));	// 6581 pop     si ;~ 01A2:2B3D
cs=0x192;eip=0x002b3e; 	R(JMP(loc_12b1c));	// 6582 jmp     short loc_12B1C ;~ 01A2:2B3E
loc_12b40:
	// 5083 
cs=0x192;eip=0x002b40; 	T(DEC(al));	// 6586 dec     al ;~ 01A2:2B40
cs=0x192;eip=0x002b42; 	R(JNZ(loc_12b5f));	// 6587 jnz     short loc_12B5F ;~ 01A2:2B42
cs=0x192;eip=0x002b44; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 6588 mov     ax, [si] ;~ 01A2:2B44
cs=0x192;eip=0x002b46; 	T(INC(si));	// 6589 inc     si ;~ 01A2:2B46
cs=0x192;eip=0x002b47; 	T(INC(si));	// 6590 inc     si ;~ 01A2:2B47
cs=0x192;eip=0x002b48; 	T(MOV(cl, byte_178ac));	// 6591 mov     cl, byte_178AC ;~ 01A2:2B48
cs=0x192;eip=0x002b4c; 	T(OR(cl, cl));	// 6592 or      cl, cl ;~ 01A2:2B4C
cs=0x192;eip=0x002b4e; 	R(JNZ(loc_12b52));	// 6593 jnz     short loc_12B52 ;~ 01A2:2B4E
cs=0x192;eip=0x002b50; 	T(MOV(cl, *(raddr(ds,si))));	// 6594 mov     cl, [si] ;~ 01A2:2B50
loc_12b52:
	// 5084 
cs=0x192;eip=0x002b52; 	T(INC(si));	// 6597 inc     si ;~ 01A2:2B52
cs=0x192;eip=0x002b53; 	T(DEC(cl));	// 6598 dec     cl ;~ 01A2:2B53
cs=0x192;eip=0x002b55; 	X(MOV(byte_178ac, cl));	// 6599 mov     byte_178AC, cl ;~ 01A2:2B55
cs=0x192;eip=0x002b59; 	R(JZ(loc_12b1c));	// 6600 jz      short loc_12B1C ;~ 01A2:2B59
cs=0x192;eip=0x002b5b; 	T(MOV(si, ax));	// 6601 mov     si, ax ;~ 01A2:2B5B
cs=0x192;eip=0x002b5d; 	R(JMP(loc_12b1c));	// 6602 jmp     short loc_12B1C ;~ 01A2:2B5D
loc_12b5f:
	// 5085 
cs=0x192;eip=0x002b5f; 	T(DEC(al));	// 6606 dec     al ;~ 01A2:2B5F
cs=0x192;eip=0x002b61; 	R(JNZ(loc_12b6b));	// 6607 jnz     short loc_12B6B ;~ 01A2:2B61
cs=0x192;eip=0x002b63; 	T(MOV(al, *(raddr(ds,si))));	// 6608 mov     al, [si] ;~ 01A2:2B63
cs=0x192;eip=0x002b65; 	T(INC(si));	// 6609 inc     si ;~ 01A2:2B65
cs=0x192;eip=0x002b66; 	X(MOV(byte_178ad, al));	// 6610 mov     byte_178AD, al ;~ 01A2:2B66
cs=0x192;eip=0x002b69; 	R(JMP(loc_12b1c));	// 6611 jmp     short loc_12B1C ;~ 01A2:2B69
loc_12b6b:
	// 5086 
cs=0x192;eip=0x002b6b; 	T(DEC(al));	// 6615 dec     al ;~ 01A2:2B6B
cs=0x192;eip=0x002b6d; 	R(JNZ(loc_12b89));	// 6616 jnz     short loc_12B89 ;~ 01A2:2B6D
cs=0x192;eip=0x002b6f; 	T(MOV(cl, 1));	// 6617 mov     cl, 1 ;~ 01A2:2B6F
loc_12b71:
	// 5087 
cs=0x192;eip=0x002b71; 	T(MOV(al, *(raddr(ds,si))));	// 6620 mov     al, [si] ;~ 01A2:2B71
cs=0x192;eip=0x002b73; 	T(INC(si));	// 6621 inc     si ;~ 01A2:2B73
loc_12b74:
	// 5088 
cs=0x192;eip=0x002b74; 	T(OR(al, al));	// 6625 or      al, al ;~ 01A2:2B74
cs=0x192;eip=0x002b76; 	R(JZ(loc_12b84));	// 6626 jz      short loc_12B84 ;~ 01A2:2B76
cs=0x192;eip=0x002b78; 	T(MOV(ah, 0));	// 6627 mov     ah, 0 ;~ 01A2:2B78
cs=0x192;eip=0x002b7a; 	T(MOV(bx, 0x78D6));	// 6628 mov     bx, 78D6h ;~ 01A2:2B7A
cs=0x192;eip=0x002b7d; 	T(ADD(ax, bx));	// 6629 add     ax, bx ;~ 01A2:2B7D
cs=0x192;eip=0x002b7f; 	X(MOV(word_17896, ax));	// 6630 mov     word_17896, ax ;~ 01A2:2B7F
cs=0x192;eip=0x002b82; 	T(MOV(al, cl));	// 6631 mov     al, cl ;~ 01A2:2B82
loc_12b84:
	// 5089 
cs=0x192;eip=0x002b84; 	X(MOV(byte_178af, al));	// 6634 mov     byte_178AF, al ;~ 01A2:2B84
cs=0x192;eip=0x002b87; 	R(JMP(loc_12b1c));	// 6635 jmp     short loc_12B1C ;~ 01A2:2B87
loc_12b89:
	// 5090 
cs=0x192;eip=0x002b89; 	T(DEC(al));	// 6639 dec     al ;~ 01A2:2B89
cs=0x192;eip=0x002b8b; 	R(JNZ(loc_12b91));	// 6640 jnz     short loc_12B91 ;~ 01A2:2B8B
cs=0x192;eip=0x002b8d; 	T(MOV(cl, 2));	// 6641 mov     cl, 2 ;~ 01A2:2B8D
cs=0x192;eip=0x002b8f; 	R(JMP(loc_12b71));	// 6642 jmp     short loc_12B71 ;~ 01A2:2B8F
loc_12b91:
	// 5091 
cs=0x192;eip=0x002b91; 	T(MOV(al, *(raddr(ds,si))));	// 6646 mov     al, [si] ;~ 01A2:2B91
cs=0x192;eip=0x002b93; 	T(INC(si));	// 6647 inc     si ;~ 01A2:2B93
cs=0x192;eip=0x002b94; 	T(MOV(ah, 0));	// 6648 mov     ah, 0 ;~ 01A2:2B94
cs=0x192;eip=0x002b96; 	T(MOV(bx, 0x78D6));	// 6649 mov     bx, 78D6h ;~ 01A2:2B96
cs=0x192;eip=0x002b99; 	T(ADD(bx, ax));	// 6650 add     bx, ax ;~ 01A2:2B99
cs=0x192;eip=0x002b9b; 	T(MOV(cl, *(raddr(ds,bx))));	// 6651 mov     cl, [bx] ;~ 01A2:2B9B
cs=0x192;eip=0x002b9d; 	X(MOV(byte_178b1, cl));	// 6652 mov     byte_178B1, cl ;~ 01A2:2B9D
cs=0x192;eip=0x002ba1; 	T(INC(bx));	// 6653 inc     bx ;~ 01A2:2BA1
cs=0x192;eip=0x002ba2; 	T(MOV(cl, *(raddr(ds,bx))));	// 6654 mov     cl, [bx] ;~ 01A2:2BA2
cs=0x192;eip=0x002ba4; 	X(MOV(byte_178b2, cl));	// 6655 mov     byte_178B2, cl ;~ 01A2:2BA4
cs=0x192;eip=0x002ba8; 	T(INC(bx));	// 6656 inc     bx ;~ 01A2:2BA8
cs=0x192;eip=0x002ba9; 	T(MOV(al, *(raddr(ds,bx))));	// 6657 mov     al, [bx] ;~ 01A2:2BA9
cs=0x192;eip=0x002bab; 	T(CBW);	// 6658 cbw ;~ 01A2:2BAB
cs=0x192;eip=0x002bac; 	X(MOV(word_178a4, ax));	// 6659 mov     word_178A4, ax ;~ 01A2:2BAC
cs=0x192;eip=0x002baf; 	R(JMP(loc_12b1c));	// 6660 jmp     loc_12B1C ;~ 01A2:2BAF
loc_12bb2:
	// 5092 
cs=0x192;eip=0x002bb2; 	X(MOV(byte_178b7, al));	// 6664 mov     byte_178B7, al ;~ 01A2:2BB2
loc_12bb5:
	// 5093 
cs=0x192;eip=0x002bb5; 	T(MOV(al, *(raddr(ds,si))));	// 6667 mov     al, [si] ;~ 01A2:2BB5
cs=0x192;eip=0x002bb7; 	T(INC(si));	// 6668 inc     si ;~ 01A2:2BB7
cs=0x192;eip=0x002bb8; 	X(MOV(word_17894, si));	// 6669 mov     word_17894, si ;~ 01A2:2BB8
cs=0x192;eip=0x002bbc; 	X(PUSH(ax));	// 6670 push    ax ;~ 01A2:2BBC
cs=0x192;eip=0x002bbd; 	T(MOV(ah, 1));	// 6671 mov     ah, 1 ;~ 01A2:2BBD
cs=0x192;eip=0x002bbf; 	R(_INT(0x16));	// 6672 int     16h             ; KEYBOARD - CHECK BUFFER, DO NOT CLEAR ;~ 01A2:2BBF
cs=0x192;eip=0x002bc1; 	X(POP(ax));	// 6676 pop     ax ;~ 01A2:2BC1
cs=0x192;eip=0x002bc2; 	R(JZ(loc_12bc7));	// 6677 jz      short loc_12BC7 ;~ 01A2:2BC2
cs=0x192;eip=0x002bc4; 	R(JMP(loc_12abc));	// 6678 jmp     loc_12ABC ;~ 01A2:2BC4
loc_12bc7:
	// 5094 
cs=0x192;eip=0x002bc7; 	T(MOV(ah, al));	// 6682 mov     ah, al ;~ 01A2:2BC7
cs=0x192;eip=0x002bc9; 	T(AND(al, 0x0F8));	// 6683 and     al, 0F8h ;~ 01A2:2BC9
cs=0x192;eip=0x002bcb; 	X(MOV(byte_178b8, al));	// 6684 mov     byte_178B8, al ;~ 01A2:2BCB
cs=0x192;eip=0x002bce; 	T(MOV(al, ah));	// 6685 mov     al, ah ;~ 01A2:2BCE
cs=0x192;eip=0x002bd0; 	R(CALL(sub_12e18,0));	// 6686 call    sub_12E18 ;~ 01A2:2BD0
cs=0x192;eip=0x002bd3; 	R(JNZ(loc_12bd8));	// 6687 jnz     short loc_12BD8 ;~ 01A2:2BD3
cs=0x192;eip=0x002bd5; 	R(JMP(loc_12d53));	// 6688 jmp     loc_12D53 ;~ 01A2:2BD5
loc_12bd8:
	// 5095 
cs=0x192;eip=0x002bd8; 	X(MOV(byte_178ae, al));	// 6692 mov     byte_178AE, al ;~ 01A2:2BD8
cs=0x192;eip=0x002bdb; 	T(TEST(byte_178af, 1));	// 6693 test    byte_178AF, 1 ;~ 01A2:2BDB
cs=0x192;eip=0x002be0; 	R(JZ(loc_12c1c));	// 6694 jz      short loc_12C1C ;~ 01A2:2BE0
cs=0x192;eip=0x002be2; 	R(CALL(sub_12e4d,0));	// 6695 call    sub_12E4D ;~ 01A2:2BE2
cs=0x192;eip=0x002be5; 	T(MOV(ah, 0));	// 6696 mov     ah, 0 ;~ 01A2:2BE5
cs=0x192;eip=0x002be7; 	T(ADD(cx, ax));	// 6697 add     cx, ax ;~ 01A2:2BE7
cs=0x192;eip=0x002be9; 	X(MOV(word_17898, cx));	// 6698 mov     word_17898, cx ;~ 01A2:2BE9
cs=0x192;eip=0x002bed; 	T(SUB(cx, ax));	// 6699 sub     cx, ax ;~ 01A2:2BED
cs=0x192;eip=0x002bef; 	T(SUB(cx, ax));	// 6700 sub     cx, ax ;~ 01A2:2BEF
cs=0x192;eip=0x002bf1; 	X(MOV(word_1789a, cx));	// 6701 mov     word_1789A, cx ;~ 01A2:2BF1
cs=0x192;eip=0x002bf5; 	T(ADD(cx, ax));	// 6702 add     cx, ax ;~ 01A2:2BF5
loc_12bf7:
	// 5096 
cs=0x192;eip=0x002bf7; 	T(INC(bx));	// 6705 inc     bx ;~ 01A2:2BF7
cs=0x192;eip=0x002bf8; 	T(MOV(al, *(raddr(ds,bx))));	// 6706 mov     al, [bx] ;~ 01A2:2BF8
cs=0x192;eip=0x002bfa; 	T(OR(al, al));	// 6707 or      al, al ;~ 01A2:2BFA
cs=0x192;eip=0x002bfc; 	R(JZ(loc_12c54));	// 6708 jz      short loc_12C54 ;~ 01A2:2BFC
cs=0x192;eip=0x002bfe; 	X(PUSH(ax));	// 6709 push    ax ;~ 01A2:2BFE
cs=0x192;eip=0x002bff; 	T(XOR(ax, ax));	// 6710 xor     ax, ax ;~ 01A2:2BFF
cs=0x192;eip=0x002c01; 	X(XCHG(ax, word_1789c));	// 6711 xchg    ax, word_1789C ;~ 01A2:2C01
cs=0x192;eip=0x002c05; 	X(MOV(word_1789e, ax));	// 6712 mov     word_1789E, ax ;~ 01A2:2C05
cs=0x192;eip=0x002c08; 	X(POP(ax));	// 6713 pop     ax ;~ 01A2:2C08
cs=0x192;eip=0x002c09; 	T(MOV(ah, al));	// 6714 mov     ah, al ;~ 01A2:2C09
cs=0x192;eip=0x002c0b; 	T(NEG(al));	// 6715 neg     al ;~ 01A2:2C0B
cs=0x192;eip=0x002c0d; 	T(ADD(al, byte_178ae));	// 6716 add     al, byte_178AE ;~ 01A2:2C0D
cs=0x192;eip=0x002c11; 	R(JNC(loc_12c54));	// 6717 jnb     short loc_12C54 ;~ 01A2:2C11
cs=0x192;eip=0x002c13; 	X(MOV(byte_178ae, ah));	// 6718 mov     byte_178AE, ah ;~ 01A2:2C13
cs=0x192;eip=0x002c17; 	X(MOV(byte_178b0, al));	// 6719 mov     byte_178B0, al ;~ 01A2:2C17
cs=0x192;eip=0x002c1a; 	R(JMP(loc_12c54));	// 6720 jmp     short loc_12C54 ;~ 01A2:2C1A
loc_12c1c:
	// 5097 
cs=0x192;eip=0x002c1c; 	T(TEST(byte_178af, 2));	// 6724 test    byte_178AF, 2 ;~ 01A2:2C1C
cs=0x192;eip=0x002c21; 	R(JZ(loc_12c42));	// 6725 jz      short loc_12C42 ;~ 01A2:2C21
cs=0x192;eip=0x002c23; 	R(CALL(sub_12e4d,0));	// 6726 call    sub_12E4D ;~ 01A2:2C23
cs=0x192;eip=0x002c26; 	X(PUSH(cx));	// 6727 push    cx ;~ 01A2:2C26
cs=0x192;eip=0x002c27; 	X(PUSH(bx));	// 6728 push    bx ;~ 01A2:2C27
cs=0x192;eip=0x002c28; 	T(TEST(ah, 0x80));	// 6729 test    ah, 80h ;~ 01A2:2C28
cs=0x192;eip=0x002c2b; 	R(JNZ(loc_12c2f));	// 6730 jnz     short loc_12C2F ;~ 01A2:2C2B
cs=0x192;eip=0x002c2d; 	T(NEG(al));	// 6731 neg     al ;~ 01A2:2C2D
loc_12c2f:
	// 5098 
cs=0x192;eip=0x002c2f; 	T(ADD(al, byte_178b8));	// 6734 add     al, byte_178B8 ;~ 01A2:2C2F
cs=0x192;eip=0x002c33; 	R(CALL(sub_12e18,0));	// 6735 call    sub_12E18 ;~ 01A2:2C33
cs=0x192;eip=0x002c36; 	X(MOV(word_17898, cx));	// 6736 mov     word_17898, cx ;~ 01A2:2C36
cs=0x192;eip=0x002c3a; 	X(MOV(word_1789a, cx));	// 6737 mov     word_1789A, cx ;~ 01A2:2C3A
cs=0x192;eip=0x002c3e; 	X(POP(bx));	// 6738 pop     bx ;~ 01A2:2C3E
cs=0x192;eip=0x002c3f; 	X(POP(cx));	// 6739 pop     cx ;~ 01A2:2C3F
cs=0x192;eip=0x002c40; 	R(JMP(loc_12bf7));	// 6740 jmp     short loc_12BF7 ;~ 01A2:2C40
loc_12c42:
	// 5099 
cs=0x192;eip=0x002c42; 	X(MOV(word_17898, cx));	// 6744 mov     word_17898, cx ;~ 01A2:2C42
cs=0x192;eip=0x002c46; 	X(MOV(word_1789a, cx));	// 6745 mov     word_1789A, cx ;~ 01A2:2C46
cs=0x192;eip=0x002c4a; 	X(MOV(word_1789c, 0));	// 6746 mov     word_1789C, 0 ;~ 01A2:2C4A
cs=0x192;eip=0x002c50; 	X(MOV(word_17898, cx));	// 6747 mov     word_17898, cx ;~ 01A2:2C50
loc_12c54:
	// 5100 
cs=0x192;eip=0x002c54; 	X(MOV(word_178a0, cx));	// 6751 mov     word_178A0, cx ;~ 01A2:2C54
cs=0x192;eip=0x002c58; 	T(MOV(dx, 0));	// 6752 mov     dx, 0 ;~ 01A2:2C58
cs=0x192;eip=0x002c5b; 	T(MOV(al, byte_178b1));	// 6753 mov     al, byte_178B1 ;~ 01A2:2C5B
cs=0x192;eip=0x002c5e; 	T(OR(al, al));	// 6754 or      al, al ;~ 01A2:2C5E
cs=0x192;eip=0x002c60; 	R(JZ(loc_12c72));	// 6755 jz      short loc_12C72 ;~ 01A2:2C60
cs=0x192;eip=0x002c62; 	T(MOV(dx, cx));	// 6756 mov     dx, cx ;~ 01A2:2C62
cs=0x192;eip=0x002c64; 	T(DEC(dx));	// 6757 dec     dx ;~ 01A2:2C64
cs=0x192;eip=0x002c65; 	T(DEC(dx));	// 6758 dec     dx ;~ 01A2:2C65
cs=0x192;eip=0x002c66; 	T(DEC(al));	// 6759 dec     al ;~ 01A2:2C66
cs=0x192;eip=0x002c68; 	R(JZ(loc_12c72));	// 6760 jz      short loc_12C72 ;~ 01A2:2C68
cs=0x192;eip=0x002c6a; 	T(INC(dx));	// 6761 inc     dx ;~ 01A2:2C6A
cs=0x192;eip=0x002c6b; 	T(INC(dx));	// 6762 inc     dx ;~ 01A2:2C6B
loc_12c6c:
	// 5101 
cs=0x192;eip=0x002c6c; 	T(SHR(dx, 1));	// 6765 shr     dx, 1 ;~ 01A2:2C6C
cs=0x192;eip=0x002c6e; 	T(DEC(al));	// 6766 dec     al ;~ 01A2:2C6E
cs=0x192;eip=0x002c70; 	R(JNZ(loc_12c6c));	// 6767 jnz     short loc_12C6C ;~ 01A2:2C70
loc_12c72:
	// 5102 
cs=0x192;eip=0x002c72; 	X(MOV(word_178a2, dx));	// 6771 mov     word_178A2, dx ;~ 01A2:2C72
cs=0x192;eip=0x002c76; 	X(MOV(byte_178bc, 1));	// 6772 mov     byte_178BC, 1 ;~ 01A2:2C76
cs=0x192;eip=0x002c7b; 	T(STI);	// 6773 sti ;~ 01A2:2C7B
loc_12c7c:
	// 5103 
cs=0x192;eip=0x002c7c; 	T(MOV(ax, word_178a2));	// 6776 mov     ax, word_178A2 ;~ 01A2:2C7C
cs=0x192;eip=0x002c7f; 	X(DEC(byte_178b3));	// 6777 dec     byte_178B3 ;~ 01A2:2C7F
cs=0x192;eip=0x002c83; 	T(MOV(bl, byte_178b3));	// 6778 mov     bl, byte_178B3 ;~ 01A2:2C83
cs=0x192;eip=0x002c87; 	T(AND(bl, byte_178b2));	// 6779 and     bl, byte_178B2 ;~ 01A2:2C87
cs=0x192;eip=0x002c8b; 	R(JNZ(loc_12c91));	// 6780 jnz     short loc_12C91 ;~ 01A2:2C8B
cs=0x192;eip=0x002c8d; 	T(ADD(ax, word_178a4));	// 6781 add     ax, word_178A4 ;~ 01A2:2C8D
loc_12c91:
	// 5104 
cs=0x192;eip=0x002c91; 	T(TEST(byte_178b6, 2));	// 6784 test    byte_178B6, 2 ;~ 01A2:2C91
cs=0x192;eip=0x002c96; 	R(JZ(loc_12c9e));	// 6785 jz      short loc_12C9E ;~ 01A2:2C96
cs=0x192;eip=0x002c98; 	T(ADD(cx, ax));	// 6786 add     cx, ax ;~ 01A2:2C98
cs=0x192;eip=0x002c9a; 	R(
);	// 6787 jmp     short $+2 ;~ 01A2:2C9A
loc_12c9c:
	// 5105 
cs=0x192;eip=0x002c9c; 	R(JMP(loc_12caf));	// 6791 jmp     short loc_12CAF ;~ 01A2:2C9C
loc_12c9e:
	// 5106 
cs=0x192;eip=0x002c9e; 	T(SUB(cx, ax));	// 6795 sub     cx, ax ;~ 01A2:2C9E
cs=0x192;eip=0x002ca0; 	R(JA(loc_12caf));	// 6796 ja      short loc_12CAF ;~ 01A2:2CA0
cs=0x192;eip=0x002ca2; 	X(NEG(word_178a4));	// 6797 neg     word_178A4 ;~ 01A2:2CA2
cs=0x192;eip=0x002ca6; 	T(ADD(ax, word_178a4));	// 6798 add     ax, word_178A4 ;~ 01A2:2CA6
cs=0x192;eip=0x002caa; 	T(MOV(cx, 1));	// 6799 mov     cx, 1 ;~ 01A2:2CAA
cs=0x192;eip=0x002cad; 	R(JMP(loc_12cb9));	// 6800 jmp     short loc_12CB9 ;~ 01A2:2CAD
loc_12caf:
	// 5107 
cs=0x192;eip=0x002caf; 	T(MOV(dh, 3));	// 6805 mov     dh, 3 ;~ 01A2:2CAF
loc_12cb1:
	// 5108 
cs=0x192;eip=0x002cb1; 	T(DEC(dh));	// 6808 dec     dh ;~ 01A2:2CB1
cs=0x192;eip=0x002cb3; 	R(JNZ(loc_12cb1));	// 6809 jnz     short loc_12CB1 ;~ 01A2:2CB3
	// 6810 nop ;~ 01A2:2CB5
	// 6811 nop ;~ 01A2:2CB6
	// 6812 nop ;~ 01A2:2CB7
	// 6813 nop ;~ 01A2:2CB8
loc_12cb9:
	// 5109 
cs=0x192;eip=0x002cb9; 	X(MOV(word_178a2, ax));	// 6816 mov     word_178A2, ax ;~ 01A2:2CB9
loc_12cbc:
	// 5110 
cs=0x192;eip=0x002cbc; 	R(LOOP(loc_12cbc));	// 6819 loop    loc_12CBC ;~ 01A2:2CBC
cs=0x192;eip=0x002cbe; 	T(MOV(al, byte_178b6));	// 6820 mov     al, byte_178B6 ;~ 01A2:2CBE
cs=0x192;eip=0x002cc1; 	T(XOR(al, byte_11bb2));	// 6821 xor     al, byte_11BB2 ;~ 01A2:2CC1
cs=0x192;eip=0x002cc5; 	X(MOV(byte_178b6, al));	// 6822 mov     byte_178B6, al ;~ 01A2:2CC5
cs=0x192;eip=0x002cc8; 	R(OUT(0x61, al));	// 6823 out     61h, al         ; PC/XT PPI port B bits: ;~ 01A2:2CC8
cs=0x192;eip=0x002cca; 	T(MOV(cx, word_178a0));	// 6831 mov     cx, word_178A0 ;~ 01A2:2CCA
cs=0x192;eip=0x002cce; 	X(DEC(byte_178b4));	// 6832 dec     byte_178B4 ;~ 01A2:2CCE
cs=0x192;eip=0x002cd2; 	T(MOV(al, byte_178b4));	// 6833 mov     al, byte_178B4 ;~ 01A2:2CD2
cs=0x192;eip=0x002cd5; 	T(AND(al, byte_178b5));	// 6834 and     al, byte_178B5 ;~ 01A2:2CD5
cs=0x192;eip=0x002cd9; 	T(MOV(ax, word_1789c));	// 6835 mov     ax, word_1789C ;~ 01A2:2CD9
cs=0x192;eip=0x002cdc; 	R(JNZ(loc_12d45));	// 6836 jnz     short loc_12D45 ;~ 01A2:2CDC
cs=0x192;eip=0x002cde; 	T(OR(ax, ax));	// 6837 or      ax, ax ;~ 01A2:2CDE
cs=0x192;eip=0x002ce0; 	R(JZ(loc_12d47));	// 6838 jz      short loc_12D47 ;~ 01A2:2CE0
cs=0x192;eip=0x002ce2; 	T(ADD(cx, ax));	// 6839 add     cx, ax ;~ 01A2:2CE2
cs=0x192;eip=0x002ce4; 	T(MOV(dx, cx));	// 6840 mov     dx, cx ;~ 01A2:2CE4
cs=0x192;eip=0x002ce6; 	T(TEST(ah, 0x80));	// 6841 test    ah, 80h ;~ 01A2:2CE6
cs=0x192;eip=0x002ce9; 	R(JNZ(loc_12cf5));	// 6842 jnz     short loc_12CF5 ;~ 01A2:2CE9
cs=0x192;eip=0x002ceb; 	T(DEC(dx));	// 6843 dec     dx ;~ 01A2:2CEB
cs=0x192;eip=0x002cec; 	T(MOV(ax, word_17898));	// 6844 mov     ax, word_17898 ;~ 01A2:2CEC
cs=0x192;eip=0x002cef; 	T(SUB(dx, ax));	// 6845 sub     dx, ax ;~ 01A2:2CEF
cs=0x192;eip=0x002cf1; 	R(JNC(loc_12d26));	// 6846 jnb     short loc_12D26 ;~ 01A2:2CF1
cs=0x192;eip=0x002cf3; 	R(JMP(loc_12d01));	// 6847 jmp     short loc_12D01 ;~ 01A2:2CF3
loc_12cf5:
	// 5111 
cs=0x192;eip=0x002cf5; 	T(MOV(ax, word_1789a));	// 6851 mov     ax, word_1789A ;~ 01A2:2CF5
cs=0x192;eip=0x002cf8; 	T(SUB(dx, ax));	// 6852 sub     dx, ax ;~ 01A2:2CF8
cs=0x192;eip=0x002cfa; 	R(JC(loc_12d26));	// 6853 jb      short loc_12D26 ;~ 01A2:2CFA
	// 6854 nop ;~ 01A2:2CFC
	// 6855 nop ;~ 01A2:2CFD
	// 6856 nop ;~ 01A2:2CFE
	// 6857 nop ;~ 01A2:2CFF
	// 6858 nop ;~ 01A2:2D00
loc_12d01:
	// 5112 
cs=0x192;eip=0x002d01; 	T(MOV(dh, 8));	// 6861 mov     dh, 8 ;~ 01A2:2D01
loc_12d03:
	// 5113 
cs=0x192;eip=0x002d03; 	T(DEC(dh));	// 6864 dec     dh ;~ 01A2:2D03
cs=0x192;eip=0x002d05; 	R(JNZ(loc_12d03));	// 6865 jnz     short loc_12D03 ;~ 01A2:2D05
loc_12d07:
	// 5114 
cs=0x192;eip=0x002d07; 	X(MOV(word_178a0, cx));	// 6868 mov     word_178A0, cx ;~ 01A2:2D07
loc_12d0b:
	// 5115 
cs=0x192;eip=0x002d0b; 	T(TEST(byte_178bc, 1));	// 6871 test    byte_178BC, 1 ;~ 01A2:2D0B
cs=0x192;eip=0x002d10; 	R(JZ(loc_12d15));	// 6872 jz      short loc_12D15 ;~ 01A2:2D10
cs=0x192;eip=0x002d12; 	R(JMP(loc_12c7c));	// 6873 jmp     loc_12C7C ;~ 01A2:2D12
loc_12d15:
	// 5116 
cs=0x192;eip=0x002d15; 	T(CLI);	// 6877 cli ;~ 01A2:2D15
cs=0x192;eip=0x002d16; 	T(MOV(si, word_17894));	// 6878 mov     si, word_17894 ;~ 01A2:2D16
cs=0x192;eip=0x002d1a; 	X(DEC(byte_178b7));	// 6879 dec     byte_178B7 ;~ 01A2:2D1A
cs=0x192;eip=0x002d1e; 	R(JZ(loc_12d23));	// 6880 jz      short loc_12D23 ;~ 01A2:2D1E
cs=0x192;eip=0x002d20; 	R(JMP(loc_12bb5));	// 6881 jmp     loc_12BB5 ;~ 01A2:2D20
loc_12d23:
	// 5117 
cs=0x192;eip=0x002d23; 	R(JMP(loc_12b1c));	// 6885 jmp     loc_12B1C ;~ 01A2:2D23
loc_12d26:
	// 5118 
cs=0x192;eip=0x002d26; 	T(MOV(cx, 0));	// 6890 mov     cx, 0 ;~ 01A2:2D26
cs=0x192;eip=0x002d29; 	T(TEST(byte_178af, 1));	// 6891 test    byte_178AF, 1 ;~ 01A2:2D29
cs=0x192;eip=0x002d2e; 	R(JNZ(loc_12d3f));	// 6892 jnz     short loc_12D3F ;~ 01A2:2D2E
cs=0x192;eip=0x002d30; 	T(MOV(dh, 3));	// 6893 mov     dh, 3 ;~ 01A2:2D30
loc_12d32:
	// 5119 
cs=0x192;eip=0x002d32; 	T(DEC(dh));	// 6896 dec     dh ;~ 01A2:2D32
cs=0x192;eip=0x002d34; 	R(JNZ(loc_12d32));	// 6897 jnz     short loc_12D32 ;~ 01A2:2D34
	// 6898 nop ;~ 01A2:2D36
loc_12d37:
	// 5120 
cs=0x192;eip=0x002d37; 	X(MOV(word_1789c, cx));	// 6901 mov     word_1789C, cx ;~ 01A2:2D37
cs=0x192;eip=0x002d3b; 	T(MOV(cx, ax));	// 6902 mov     cx, ax ;~ 01A2:2D3B
cs=0x192;eip=0x002d3d; 	R(JMP(loc_12d07));	// 6903 jmp     short loc_12D07 ;~ 01A2:2D3D
loc_12d3f:
	// 5121 
cs=0x192;eip=0x002d3f; 	T(SUB(cx, word_1789c));	// 6907 sub     cx, word_1789C ;~ 01A2:2D3F
cs=0x192;eip=0x002d43; 	R(JMP(loc_12d37));	// 6908 jmp     short loc_12D37 ;~ 01A2:2D43
loc_12d45:
	// 5122 
	// 6912 nop ;~ 01A2:2D45
	// 6913 nop ;~ 01A2:2D46
loc_12d47:
	// 5123 
cs=0x192;eip=0x002d47; 	T(MOV(dh, 9));	// 6916 mov     dh, 9 ;~ 01A2:2D47
loc_12d49:
	// 5124 
cs=0x192;eip=0x002d49; 	T(DEC(dh));	// 6919 dec     dh ;~ 01A2:2D49
cs=0x192;eip=0x002d4b; 	R(JNZ(loc_12d49));	// 6920 jnz     short loc_12D49 ;~ 01A2:2D4B
	// 6921 nop ;~ 01A2:2D4D
	// 6922 nop ;~ 01A2:2D4E
	// 6923 nop ;~ 01A2:2D4F
	// 6924 nop ;~ 01A2:2D50
cs=0x192;eip=0x002d51; 	R(JMP(loc_12d0b));	// 6925 jmp     short loc_12D0B ;~ 01A2:2D51
loc_12d53:
	// 5125 
cs=0x192;eip=0x002d53; 	T(STI);	// 6929 sti ;~ 01A2:2D53
loc_12d54:
	// 5126 
cs=0x192;eip=0x002d54; 	R(JMP(loc_12d54));	// 6932 jmp     short loc_12D54 ;~ 01A2:2D54
seg000_2d56_proc:
	// 6937 
loc_12d56:
	// 5127 
cs=0x192;eip=0x002d56; 	X(PUSH(ds));	// 6938 push    ds ;~ 01A2:2D56
cs=0x192;eip=0x002d57; 	X(PUSH(ax));	// 6939 push    ax ;~ 01A2:2D57
cs=0x192;eip=0x002d58; 	T(MOV(ax, 0x2E61));	// 6940 mov     ax, 2E61h ;~ 01A2:2D58
cs=0x192;eip=0x002d5b; 	T(SHR(ax, 1));	// 6941 shr     ax, 1 ;~ 01A2:2D5B
cs=0x192;eip=0x002d5d; 	T(SHR(ax, 1));	// 6942 shr     ax, 1 ;~ 01A2:2D5D
cs=0x192;eip=0x002d5f; 	T(SHR(ax, 1));	// 6943 shr     ax, 1 ;~ 01A2:2D5F
cs=0x192;eip=0x002d61; 	T(SHR(ax, 1));	// 6944 shr     ax, 1 ;~ 01A2:2D61
cs=0x192;eip=0x002d63; 	X(PUSH(bx));	// 6945 push    bx ;~ 01A2:2D63
cs=0x192;eip=0x002d64; 	T(MOV(bx, cs));	// 6946 mov     bx, cs ;~ 01A2:2D64
cs=0x192;eip=0x002d66; 	T(ADD(ax, bx));	// 6947 add     ax, bx ;~ 01A2:2D66
cs=0x192;eip=0x002d68; 	X(POP(bx));	// 6948 pop     bx ;~ 01A2:2D68
cs=0x192;eip=0x002d69; 	T(MOV(ds, ax));	// 6949 mov     ds, ax ;~ 01A2:2D69
cs=0x192;eip=0x002d6b; 	X(DEC(*(&byte_1a719)));	// 6951 dec     ds:byte_1A719 ;~ 01A2:2D6B
cs=0x192;eip=0x002d6f; 	R(JNZ(loc_12da8));	// 6952 jnz     short loc_12DA8 ;~ 01A2:2D6F
cs=0x192;eip=0x002d71; 	X(PUSH(bx));	// 6953 push    bx ;~ 01A2:2D71
cs=0x192;eip=0x002d72; 	X(PUSH(cx));	// 6954 push    cx ;~ 01A2:2D72
cs=0x192;eip=0x002d73; 	X(PUSH(dx));	// 6955 push    dx ;~ 01A2:2D73
cs=0x192;eip=0x002d74; 	X(INC(*(&byte_1a71a)));	// 6956 inc     ds:byte_1A71A ;~ 01A2:2D74
cs=0x192;eip=0x002d78; 	T(MOV(al, *(&byte_1a71a)));	// 6957 mov     al, ds:byte_1A71A ;~ 01A2:2D78
cs=0x192;eip=0x002d7b; 	T(CMP(al, 0x10));	// 6958 cmp     al, 10h ;~ 01A2:2D7B
cs=0x192;eip=0x002d7d; 	R(JNZ(loc_12d8d));	// 6959 jnz     short loc_12D8D ;~ 01A2:2D7D
cs=0x192;eip=0x002d7f; 	X(DEC(*(&byte_1a71b)));	// 6960 dec     ds:byte_1A71B ;~ 01A2:2D7F
cs=0x192;eip=0x002d83; 	R(JNZ(loc_12d88));	// 6961 jnz     short loc_12D88 ;~ 01A2:2D83
cs=0x192;eip=0x002d85; 	R(CALL(sub_12e02,0));	// 6962 call    sub_12E02 ;~ 01A2:2D85
loc_12d88:
	// 5128 
cs=0x192;eip=0x002d88; 	X(MOV(*(&byte_1a71a), 0));	// 6965 mov     ds:byte_1A71A, 0 ;~ 01A2:2D88
loc_12d8d:
	// 5129 
cs=0x192;eip=0x002d8d; 	T(MOV(bx, *(dw*)(((db*)&word_1a706))));	// 6968 mov     bx, ds:word_1A706 ;~ 01A2:2D8D
cs=0x192;eip=0x002d91; 	T(MOV(al, *(&byte_1a71a)));	// 6969 mov     al, ds:byte_1A71A ;~ 01A2:2D91
cs=0x192;eip=0x002d94; 	T(XLAT);	// 6970 xlat ;~ 01A2:2D94
cs=0x192;eip=0x002d95; 	T(OR(al, al));	// 6971 or      al, al ;~ 01A2:2D95
cs=0x192;eip=0x002d97; 	R(JZ(loc_12da0));	// 6972 jz      short loc_12DA0 ;~ 01A2:2D97
cs=0x192;eip=0x002d99; 	T(MOV(ch, al));	// 6973 mov     ch, al ;~ 01A2:2D99
cs=0x192;eip=0x002d9b; 	T(MOV(dh, 0x14));	// 6974 mov     dh, 14h ;~ 01A2:2D9B
cs=0x192;eip=0x002d9d; 	R(CALL(sub_12dd0,0));	// 6975 call    sub_12DD0 ;~ 01A2:2D9D
loc_12da0:
	// 5130 
cs=0x192;eip=0x002da0; 	X(MOV(*(&byte_1a719), 2));	// 6978 mov     ds:byte_1A719, 2 ;~ 01A2:2DA0
cs=0x192;eip=0x002da5; 	X(POP(dx));	// 6979 pop     dx ;~ 01A2:2DA5
cs=0x192;eip=0x002da6; 	X(POP(cx));	// 6980 pop     cx ;~ 01A2:2DA6
cs=0x192;eip=0x002da7; 	X(POP(bx));	// 6981 pop     bx ;~ 01A2:2DA7
loc_12da8:
	// 5131 
cs=0x192;eip=0x002da8; 	X(DEC(*(&byte_1a70e)));	// 6984 dec     ds:byte_1A70E ;~ 01A2:2DA8
cs=0x192;eip=0x002dac; 	R(JZ(loc_12db1));	// 6985 jz      short loc_12DB1 ;~ 01A2:2DAC
cs=0x192;eip=0x002dae; 	X(POP(ax));	// 6986 pop     ax ;~ 01A2:2DAE
cs=0x192;eip=0x002daf; 	X(POP(ds));	// 6987 pop     ds ;~ 01A2:2DAF
cs=0x192;eip=0x002db0; 	R(IRET);	// 6989 iret ;~ 01A2:2DB0
loc_12db1:
	// 5132 
cs=0x192;eip=0x002db1; 	T(MOV(al, byte_178b0));	// 6993 mov     al, byte_178B0 ;~ 01A2:2DB1
cs=0x192;eip=0x002db4; 	T(OR(al, al));	// 6994 or      al, al ;~ 01A2:2DB4
cs=0x192;eip=0x002db6; 	R(JNZ(loc_12dbf));	// 6995 jnz     short loc_12DBF ;~ 01A2:2DB6
cs=0x192;eip=0x002db8; 	X(MOV(byte_178bc, 0));	// 6996 mov     byte_178BC, 0 ;~ 01A2:2DB8
cs=0x192;eip=0x002dbd; 	R(JMP(loc_12dcd));	// 6997 jmp     short loc_12DCD ;~ 01A2:2DBD
loc_12dbf:
	// 5133 
cs=0x192;eip=0x002dbf; 	X(MOV(byte_178ae, al));	// 7001 mov     byte_178AE, al ;~ 01A2:2DBF
cs=0x192;eip=0x002dc2; 	X(MOV(byte_178b0, 0));	// 7002 mov     byte_178B0, 0 ;~ 01A2:2DC2
cs=0x192;eip=0x002dc7; 	T(MOV(ax, word_1789e));	// 7003 mov     ax, word_1789E ;~ 01A2:2DC7
cs=0x192;eip=0x002dca; 	X(MOV(word_1789c, ax));	// 7004 mov     word_1789C, ax ;~ 01A2:2DCA
loc_12dcd:
	// 5134 
cs=0x192;eip=0x002dcd; 	X(POP(ax));	// 7007 pop     ax ;~ 01A2:2DCD
cs=0x192;eip=0x002dce; 	X(POP(ds));	// 7008 pop     ds ;~ 01A2:2DCE
cs=0x192;eip=0x002dcf; 	R(IRET);	// 7009 iret ;~ 01A2:2DCF

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_1012d: 	goto loc_1012d;
        case m2c::kloc_1018a: 	goto loc_1018a;
        case m2c::kloc_10191: 	goto loc_10191;
        case m2c::kloc_10196: 	goto loc_10196;
        case m2c::kloc_101a8: 	goto loc_101a8;
        case m2c::kloc_101fb: 	goto loc_101fb;
        case m2c::kloc_10205: 	goto loc_10205;
        case m2c::kloc_10216: 	goto loc_10216;
        case m2c::kloc_10232: 	goto loc_10232;
        case m2c::kloc_1023c: 	goto loc_1023c;
        case m2c::kloc_10273: 	goto loc_10273;
        case m2c::kloc_10277: 	goto loc_10277;
        case m2c::kloc_1028b: 	goto loc_1028b;
        case m2c::kloc_1028e: 	goto loc_1028e;
        case m2c::kloc_102e5: 	goto loc_102e5;
        case m2c::kloc_102fb: 	goto loc_102fb;
        case m2c::kloc_10310: 	goto loc_10310;
        case m2c::kloc_10322: 	goto loc_10322;
        case m2c::kloc_10352: 	goto loc_10352;
        case m2c::kloc_10377: 	goto loc_10377;
        case m2c::kloc_10378: 	goto loc_10378;
        case m2c::kloc_10390: 	goto loc_10390;
        case m2c::kloc_10397: 	goto loc_10397;
        case m2c::kloc_103a3: 	goto loc_103a3;
        case m2c::kloc_103b9: 	goto loc_103b9;
        case m2c::kloc_10446: 	goto loc_10446;
        case m2c::kloc_1044f: 	goto loc_1044f;
        case m2c::kloc_10456: 	goto loc_10456;
        case m2c::kloc_1045e: 	goto loc_1045e;
        case m2c::kloc_10464: 	goto loc_10464;
        case m2c::kloc_10467: 	goto loc_10467;
        case m2c::kloc_1049a: 	goto loc_1049a;
        case m2c::kloc_111ab: 	goto loc_111ab;
        case m2c::kloc_111d4: 	goto loc_111d4;
        case m2c::kloc_111e1: 	goto loc_111e1;
        case m2c::kloc_111f3: 	goto loc_111f3;
        case m2c::kloc_111f8: 	goto loc_111f8;
        case m2c::kloc_11206: 	goto loc_11206;
        case m2c::kloc_11209: 	goto loc_11209;
        case m2c::kloc_1120d: 	goto loc_1120d;
        case m2c::kloc_11213: 	goto loc_11213;
        case m2c::kloc_11229: 	goto loc_11229;
        case m2c::kloc_11248: 	goto loc_11248;
        case m2c::kloc_11271: 	goto loc_11271;
        case m2c::kloc_1129a: 	goto loc_1129a;
        case m2c::kloc_112ac: 	goto loc_112ac;
        case m2c::kloc_112cc: 	goto loc_112cc;
        case m2c::kloc_112d4: 	goto loc_112d4;
        case m2c::kloc_112ef: 	goto loc_112ef;
        case m2c::kloc_112f1: 	goto loc_112f1;
        case m2c::kloc_11312: 	goto loc_11312;
        case m2c::kloc_1132c: 	goto loc_1132c;
        case m2c::kloc_1132f: 	goto loc_1132f;
        case m2c::kloc_11341: 	goto loc_11341;
        case m2c::kloc_1134a: 	goto loc_1134a;
        case m2c::kloc_11359: 	goto loc_11359;
        case m2c::kloc_11367: 	goto loc_11367;
        case m2c::kloc_11393: 	goto loc_11393;
        case m2c::kloc_113a9: 	goto loc_113a9;
        case m2c::kloc_113b6: 	goto loc_113b6;
        case m2c::kloc_113d9: 	goto loc_113d9;
        case m2c::kloc_113e2: 	goto loc_113e2;
        case m2c::kloc_11402: 	goto loc_11402;
        case m2c::kloc_11408: 	goto loc_11408;
        case m2c::kloc_1140c: 	goto loc_1140c;
        case m2c::kloc_11426: 	goto loc_11426;
        case m2c::kloc_11444: 	goto loc_11444;
        case m2c::kloc_11447: 	goto loc_11447;
        case m2c::kloc_1145b: 	goto loc_1145b;
        case m2c::kloc_1145e: 	goto loc_1145e;
        case m2c::kloc_1147f: 	goto loc_1147f;
        case m2c::kloc_11499: 	goto loc_11499;
        case m2c::kloc_114b1: 	goto loc_114b1;
        case m2c::kloc_114c9: 	goto loc_114c9;
        case m2c::kloc_114da: 	goto loc_114da;
        case m2c::kloc_114dd: 	goto loc_114dd;
        case m2c::kloc_114fe: 	goto loc_114fe;
        case m2c::kloc_1150b: 	goto loc_1150b;
        case m2c::kloc_11531: 	goto loc_11531;
        case m2c::kloc_11551: 	goto loc_11551;
        case m2c::kloc_1155b: 	goto loc_1155b;
        case m2c::kloc_11562: 	goto loc_11562;
        case m2c::kloc_11569: 	goto loc_11569;
        case m2c::kloc_1156c: 	goto loc_1156c;
        case m2c::kloc_11576: 	goto loc_11576;
        case m2c::kloc_1159b: 	goto loc_1159b;
        case m2c::kloc_115b5: 	goto loc_115b5;
        case m2c::kloc_115c1: 	goto loc_115c1;
        case m2c::kloc_115ce: 	goto loc_115ce;
        case m2c::kloc_115f1: 	goto loc_115f1;
        case m2c::kloc_1160e: 	goto loc_1160e;
        case m2c::kloc_11618: 	goto loc_11618;
        case m2c::kloc_11622: 	goto loc_11622;
        case m2c::kloc_1162f: 	goto loc_1162f;
        case m2c::kloc_11640: 	goto loc_11640;
        case m2c::kloc_11646: 	goto loc_11646;
        case m2c::kloc_11659: 	goto loc_11659;
        case m2c::kloc_11673: 	goto loc_11673;
        case m2c::kloc_116be: 	goto loc_116be;
        case m2c::kloc_116c2: 	goto loc_116c2;
        case m2c::kloc_116d6: 	goto loc_116d6;
        case m2c::kloc_116d9: 	goto loc_116d9;
        case m2c::kloc_116e8: 	goto loc_116e8;
        case m2c::kloc_11708: 	goto loc_11708;
        case m2c::kloc_1171c: 	goto loc_1171c;
        case m2c::kloc_1171f: 	goto loc_1171f;
        case m2c::kloc_11740: 	goto loc_11740;
        case m2c::kloc_1174a: 	goto loc_1174a;
        case m2c::kloc_11751: 	goto loc_11751;
        case m2c::kloc_1175b: 	goto loc_1175b;
        case m2c::kloc_11762: 	goto loc_11762;
        case m2c::kloc_11765: 	goto loc_11765;
        case m2c::kloc_11780: 	goto loc_11780;
        case m2c::kloc_11796: 	goto loc_11796;
        case m2c::kloc_1179c: 	goto loc_1179c;
        case m2c::kloc_117b7: 	goto loc_117b7;
        case m2c::kloc_117c3: 	goto loc_117c3;
        case m2c::kloc_117d0: 	goto loc_117d0;
        case m2c::kloc_117da: 	goto loc_117da;
        case m2c::kloc_117e6: 	goto loc_117e6;
        case m2c::kloc_117f9: 	goto loc_117f9;
        case m2c::kloc_11802: 	goto loc_11802;
        case m2c::kloc_1180c: 	goto loc_1180c;
        case m2c::kloc_1181e: 	goto loc_1181e;
        case m2c::kloc_1182c: 	goto loc_1182c;
        case m2c::kloc_11842: 	goto loc_11842;
        case m2c::kloc_1184e: 	goto loc_1184e;
        case m2c::kloc_11862: 	goto loc_11862;
        case m2c::kloc_11876: 	goto loc_11876;
        case m2c::kloc_11883: 	goto loc_11883;
        case m2c::kloc_11896: 	goto loc_11896;
        case m2c::kloc_118a7: 	goto loc_118a7;
        case m2c::kloc_118b0: 	goto loc_118b0;
        case m2c::kloc_118c6: 	goto loc_118c6;
        case m2c::kloc_118d2: 	goto loc_118d2;
        case m2c::kloc_118fd: 	goto loc_118fd;
        case m2c::kloc_1190a: 	goto loc_1190a;
        case m2c::kloc_1191e: 	goto loc_1191e;
        case m2c::kloc_1192b: 	goto loc_1192b;
        case m2c::kloc_11948: 	goto loc_11948;
        case m2c::kloc_1194b: 	goto loc_1194b;
        case m2c::kloc_1195b: 	goto loc_1195b;
        case m2c::kloc_1197a: 	goto loc_1197a;
        case m2c::kloc_11988: 	goto loc_11988;
        case m2c::kloc_11991: 	goto loc_11991;
        case m2c::kloc_11998: 	goto loc_11998;
        case m2c::kloc_1199b: 	goto loc_1199b;
        case m2c::kloc_119a7: 	goto loc_119a7;
        case m2c::kloc_119c7: 	goto loc_119c7;
        case m2c::kloc_119d3: 	goto loc_119d3;
        case m2c::kloc_119db: 	goto loc_119db;
        case m2c::kloc_119e2: 	goto loc_119e2;
        case m2c::kloc_119eb: 	goto loc_119eb;
        case m2c::kloc_119ee: 	goto loc_119ee;
        case m2c::kloc_119f7: 	goto loc_119f7;
        case m2c::kloc_11a17: 	goto loc_11a17;
        case m2c::kloc_11a27: 	goto loc_11a27;
        case m2c::kloc_11a3d: 	goto loc_11a3d;
        case m2c::kloc_11a51: 	goto loc_11a51;
        case m2c::kloc_11a5b: 	goto loc_11a5b;
        case m2c::kloc_11aaf: 	goto loc_11aaf;
        case m2c::kloc_11abc: 	goto loc_11abc;
        case m2c::kloc_11ad6: 	goto loc_11ad6;
        case m2c::kloc_11b28: 	goto loc_11b28;
        case m2c::kloc_11b35: 	goto loc_11b35;
        case m2c::kloc_11b61: 	goto loc_11b61;
        case m2c::kloc_11b6f: 	goto loc_11b6f;
        case m2c::kloc_11b80: 	goto loc_11b80;
        case m2c::kloc_11b88: 	goto loc_11b88;
        case m2c::kloc_11b95: 	goto loc_11b95;
        case m2c::kloc_11c07: 	goto loc_11c07;
        case m2c::kloc_11c4f: 	goto loc_11c4f;
        case m2c::kloc_11c66: 	goto loc_11c66;
        case m2c::kloc_11c95: 	goto loc_11c95;
        case m2c::kloc_11c9f: 	goto loc_11c9f;
        case m2c::kloc_11d12: 	goto loc_11d12;
        case m2c::kloc_11d1e: 	goto loc_11d1e;
        case m2c::kloc_11d71: 	goto loc_11d71;
        case m2c::kloc_11d8a: 	goto loc_11d8a;
        case m2c::kloc_11d8e: 	goto loc_11d8e;
        case m2c::kloc_12739: 	goto loc_12739;
        case m2c::kloc_12745: 	goto loc_12745;
        case m2c::kloc_1274a: 	goto loc_1274a;
        case m2c::kloc_1274d: 	goto loc_1274d;
        case m2c::kloc_1275a: 	goto loc_1275a;
        case m2c::kloc_1276f: 	goto loc_1276f;
        case m2c::kloc_12795: 	goto loc_12795;
        case m2c::kloc_1279b: 	goto loc_1279b;
        case m2c::kloc_127b9: 	goto loc_127b9;
        case m2c::kloc_127c5: 	goto loc_127c5;
        case m2c::kloc_127d1: 	goto loc_127d1;
        case m2c::kloc_127eb: 	goto loc_127eb;
        case m2c::kloc_1280e: 	goto loc_1280e;
        case m2c::kloc_1281c: 	goto loc_1281c;
        case m2c::kloc_12824: 	goto loc_12824;
        case m2c::kloc_12827: 	goto loc_12827;
        case m2c::kloc_12843: 	goto loc_12843;
        case m2c::kloc_1284c: 	goto loc_1284c;
        case m2c::kloc_12854: 	goto loc_12854;
        case m2c::kloc_1285c: 	goto loc_1285c;
        case m2c::kloc_12866: 	goto loc_12866;
        case m2c::kloc_1287a: 	goto loc_1287a;
        case m2c::kloc_12897: 	goto loc_12897;
        case m2c::kloc_1289a: 	goto loc_1289a;
        case m2c::kloc_128ab: 	goto loc_128ab;
        case m2c::kloc_128d2: 	goto loc_128d2;
        case m2c::kloc_128df: 	goto loc_128df;
        case m2c::kloc_128e2: 	goto loc_128e2;
        case m2c::kloc_128f3: 	goto loc_128f3;
        case m2c::kloc_128f6: 	goto loc_128f6;
        case m2c::kloc_128ff: 	goto loc_128ff;
        case m2c::kloc_12916: 	goto loc_12916;
        case m2c::kloc_1291f: 	goto loc_1291f;
        case m2c::kloc_12941: 	goto loc_12941;
        case m2c::kloc_12950: 	goto loc_12950;
        case m2c::kloc_12964: 	goto loc_12964;
        case m2c::kloc_12b1c: 	goto loc_12b1c;
        case m2c::kloc_12b26: 	goto loc_12b26;
        case m2c::kloc_12b2c: 	goto loc_12b2c;
        case m2c::kloc_12b39: 	goto loc_12b39;
        case m2c::kloc_12b3d: 	goto loc_12b3d;
        case m2c::kloc_12b40: 	goto loc_12b40;
        case m2c::kloc_12b52: 	goto loc_12b52;
        case m2c::kloc_12b5f: 	goto loc_12b5f;
        case m2c::kloc_12b6b: 	goto loc_12b6b;
        case m2c::kloc_12b71: 	goto loc_12b71;
        case m2c::kloc_12b74: 	goto loc_12b74;
        case m2c::kloc_12b84: 	goto loc_12b84;
        case m2c::kloc_12b89: 	goto loc_12b89;
        case m2c::kloc_12b91: 	goto loc_12b91;
        case m2c::kloc_12bb2: 	goto loc_12bb2;
        case m2c::kloc_12bb5: 	goto loc_12bb5;
        case m2c::kloc_12bc7: 	goto loc_12bc7;
        case m2c::kloc_12bd8: 	goto loc_12bd8;
        case m2c::kloc_12bf7: 	goto loc_12bf7;
        case m2c::kloc_12c1c: 	goto loc_12c1c;
        case m2c::kloc_12c2f: 	goto loc_12c2f;
        case m2c::kloc_12c42: 	goto loc_12c42;
        case m2c::kloc_12c54: 	goto loc_12c54;
        case m2c::kloc_12c6c: 	goto loc_12c6c;
        case m2c::kloc_12c72: 	goto loc_12c72;
        case m2c::kloc_12c7c: 	goto loc_12c7c;
        case m2c::kloc_12c91: 	goto loc_12c91;
        case m2c::kloc_12c9c: 	goto loc_12c9c;
        case m2c::kloc_12c9e: 	goto loc_12c9e;
        case m2c::kloc_12caf: 	goto loc_12caf;
        case m2c::kloc_12cb1: 	goto loc_12cb1;
        case m2c::kloc_12cb9: 	goto loc_12cb9;
        case m2c::kloc_12cbc: 	goto loc_12cbc;
        case m2c::kloc_12cf5: 	goto loc_12cf5;
        case m2c::kloc_12d01: 	goto loc_12d01;
        case m2c::kloc_12d03: 	goto loc_12d03;
        case m2c::kloc_12d07: 	goto loc_12d07;
        case m2c::kloc_12d0b: 	goto loc_12d0b;
        case m2c::kloc_12d15: 	goto loc_12d15;
        case m2c::kloc_12d23: 	goto loc_12d23;
        case m2c::kloc_12d26: 	goto loc_12d26;
        case m2c::kloc_12d32: 	goto loc_12d32;
        case m2c::kloc_12d37: 	goto loc_12d37;
        case m2c::kloc_12d3f: 	goto loc_12d3f;
        case m2c::kloc_12d45: 	goto loc_12d45;
        case m2c::kloc_12d47: 	goto loc_12d47;
        case m2c::kloc_12d49: 	goto loc_12d49;
        case m2c::kloc_12d53: 	goto loc_12d53;
        case m2c::kloc_12d54: 	goto loc_12d54;
        case m2c::kloc_12d88: 	goto loc_12d88;
        case m2c::kloc_12d8d: 	goto loc_12d8d;
        case m2c::kloc_12da0: 	goto loc_12da0;
        case m2c::kloc_12da8: 	goto loc_12da8;
        case m2c::kloc_12db1: 	goto loc_12db1;
        case m2c::kloc_12dbf: 	goto loc_12dbf;
        case m2c::kloc_12dcd: 	goto loc_12dcd;
        case m2c::klocret_11c32: 	goto locret_11c32;
        case m2c::klocret_11d89: 	goto locret_11d89;
        case m2c::kret_1a2_101: 	goto ret_1a2_101;
        case m2c::kret_1a2_11d7: 	goto ret_1a2_11d7;
        case m2c::kret_1a2_1282: 	goto ret_1a2_1282;
        case m2c::kret_1a2_12b7: 	goto ret_1a2_12b7;
        case m2c::kret_1a2_1304: 	goto ret_1a2_1304;
        case m2c::kret_1a2_1375: 	goto ret_1a2_1375;
        case m2c::kret_1a2_1429: 	goto ret_1a2_1429;
        case m2c::kret_1a2_146d: 	goto ret_1a2_146d;
        case m2c::kret_1a2_149e: 	goto ret_1a2_149e;
        case m2c::kret_1a2_14eb: 	goto ret_1a2_14eb;
        case m2c::kret_1a2_14f4: 	goto ret_1a2_14f4;
        case m2c::kret_1a2_1511: 	goto ret_1a2_1511;
        case m2c::kret_1a2_15ac: 	goto ret_1a2_15ac;
        case m2c::kret_1a2_164f: 	goto ret_1a2_164f;
        case m2c::kret_1a2_16eb: 	goto ret_1a2_16eb;
        case m2c::kret_1a2_16f9: 	goto ret_1a2_16f9;
        case m2c::kret_1a2_1722: 	goto ret_1a2_1722;
        case m2c::kret_1a2_1725: 	goto ret_1a2_1725;
        case m2c::kret_1a2_194e: 	goto ret_1a2_194e;
        case m2c::kret_1a2_1a05: 	goto ret_1a2_1a05;
        case m2c::kret_1a2_1a67: 	goto ret_1a2_1a67;
        case m2c::kret_1a2_1ad9: 	goto ret_1a2_1ad9;
        case m2c::kret_1a2_1b58: 	goto ret_1a2_1b58;
        case m2c::kret_1a2_1b65: 	goto ret_1a2_1b65;
        case m2c::kret_1a2_1be1: 	goto ret_1a2_1be1;
        case m2c::kret_1a2_1be2: 	goto ret_1a2_1be2;
        case m2c::kret_1a2_1c34: 	goto ret_1a2_1c34;
        case m2c::kret_1a2_1c9c: 	goto ret_1a2_1c9c;
        case m2c::kret_1a2_1d03: 	goto ret_1a2_1d03;
        case m2c::kret_1a2_1d1b: 	goto ret_1a2_1d1b;
        case m2c::kret_1a2_1d6e: 	goto ret_1a2_1d6e;
        case m2c::kret_1a2_1d80: 	goto ret_1a2_1d80;
        case m2c::kret_1a2_2ad9: 	goto ret_1a2_2ad9;
        case m2c::kret_1a2_2b18: 	goto ret_1a2_2b18;
        case m2c::kseg000_2736_proc: 	goto seg000_2736_proc;
        case m2c::kseg000_277f_proc: 	goto seg000_277f_proc;
        case m2c::kseg000_2abc_proc: 	goto seg000_2abc_proc;
        case m2c::kseg000_2d56_proc: 	goto seg000_2d56_proc;
        case m2c::kstart: 	goto start;
        case m2c::ksub_11c33: 	goto sub_11c33;
        case m2c::ksub_11c97: 	goto sub_11c97;
        case m2c::ksub_11d00: 	goto sub_11d00;
        case m2c::ksub_11d16: 	goto sub_11d16;
        case m2c::ksub_11d6b: 	goto sub_11d6b;
        case m2c::ksub_11d7b: 	goto sub_11d7b;
        case m2c::ksub_12ad8: 	goto sub_12ad8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_104b7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_104b7:
    _begin:
cs=0x192;eip=0x0004b7; 	T(MOV(al, *(raddr(ds,si))));	// 553 mov     al, [si] ;~ 01A2:04B7
ret_1a2_4b9:
	// 4402 
cs=0x192;eip=0x0004b9; 	T(INC(si));	// 554 inc     si ;~ 01A2:04B9
cs=0x192;eip=0x0004ba; 	T(CMP(al, 0x0FD));	// 555 cmp     al, 0FDh ; 'ı' ;~ 01A2:04BA
cs=0x192;eip=0x0004bc; 	R(JNC(loc_1052e));	// 556 jnb     short loc_1052E ;~ 01A2:04BC
cs=0x192;eip=0x0004be; 	X(PUSH(si));	// 557 push    si ;~ 01A2:04BE
cs=0x192;eip=0x0004bf; 	T(TEST(*(&byte_14a2c), 1));	// 558 test    ds:byte_14A2C, 1 ;~ 01A2:04BF
cs=0x192;eip=0x0004c4; 	R(JZ(loc_104f7));	// 559 jz      short loc_104F7 ;~ 01A2:04C4
cs=0x192;eip=0x0004c6; 	X(PUSH(ax));	// 560 push    ax ;~ 01A2:04C6
cs=0x192;eip=0x0004c7; 	T(MOV(ax, *(dw*)(((db*)&word_14a02))));	// 561 mov     ax, ds:word_14A02 ;~ 01A2:04C7
cs=0x192;eip=0x0004ca; 	T(ADD(al, al));	// 562 add     al, al ;~ 01A2:04CA
cs=0x192;eip=0x0004cc; 	T(ADD(al, 8));	// 563 add     al, 8 ;~ 01A2:04CC
cs=0x192;eip=0x0004ce; 	T(MOV(cl, al));	// 564 mov     cl, al ;~ 01A2:04CE
cs=0x192;eip=0x0004d0; 	T(MOV(al, ah));	// 565 mov     al, ah ;~ 01A2:04D0
cs=0x192;eip=0x0004d2; 	T(MOV(ch, 0x0A0));	// 566 mov     ch, 0A0h ; ' ' ;~ 01A2:04D2
cs=0x192;eip=0x0004d4; 	T(MUL1_1(ch));	// 567 mul     ch ;~ 01A2:04D4
cs=0x192;eip=0x0004d6; 	T(ADD(ax, ax));	// 568 add     ax, ax ;~ 01A2:04D6
cs=0x192;eip=0x0004d8; 	T(MOV(ch, 0));	// 569 mov     ch, 0 ;~ 01A2:04D8
cs=0x192;eip=0x0004da; 	T(ADD(ax, cx));	// 570 add     ax, cx ;~ 01A2:04DA
cs=0x192;eip=0x0004dc; 	T(MOV(di, ax));	// 571 mov     di, ax ;~ 01A2:04DC
cs=0x192;eip=0x0004de; 	X(POP(ax));	// 572 pop     ax ;~ 01A2:04DE
cs=0x192;eip=0x0004df; 	T(MOV(ah, 0));	// 573 mov     ah, 0 ;~ 01A2:04DF
cs=0x192;eip=0x0004e1; 	T(ADD(ax, ax));	// 574 add     ax, ax ;~ 01A2:04E1
cs=0x192;eip=0x0004e3; 	T(ADD(ax, ax));	// 575 add     ax, ax ;~ 01A2:04E3
cs=0x192;eip=0x0004e5; 	T(ADD(ax, ax));	// 576 add     ax, ax ;~ 01A2:04E5
cs=0x192;eip=0x0004e7; 	T(ADD(ax, 0x0CB1));	// 577 add     ax, 0CB1h ;~ 01A2:04E7
cs=0x192;eip=0x0004ea; 	T(MOV(si, ax));	// 578 mov     si, ax ;~ 01A2:04EA
cs=0x192;eip=0x0004ec; 	T(MOV(al, *(&byte_14a24)));	// 579 mov     al, ds:byte_14A24 ;~ 01A2:04EC
cs=0x192;eip=0x0004ef; 	T(MOV(bx, 0x1B72));	// 580 mov     bx, 1B72h ;~ 01A2:04EF
cs=0x192;eip=0x0004f2; 	R(CALL(sub_1054a,0));	// 581 call    sub_1054A ;~ 01A2:04F2
cs=0x192;eip=0x0004f5; 	R(JMP(loc_10504));	// 582 jmp     short loc_10504 ;~ 01A2:04F5
loc_104f7:
	// 4403 
cs=0x192;eip=0x0004f7; 	T(MOV(cx, 1));	// 586 mov     cx, 1 ;~ 01A2:04F7
cs=0x192;eip=0x0004fa; 	T(MOV(bl, *(&byte_14a24)));	// 587 mov     bl, ds:byte_14A24 ;~ 01A2:04FA
cs=0x192;eip=0x0004fe; 	T(MOV(bh, 0));	// 588 mov     bh, 0 ;~ 01A2:04FE
cs=0x192;eip=0x000500; 	T(MOV(ah, 9));	// 589 mov     ah, 9 ;~ 01A2:0500
cs=0x192;eip=0x000502; 	R(_INT(0x10));	// 590 int     10h             ; - VIDEO - WRITE ATTRIBUTES/CHARACTERS AT CURSOR POSITION ;~ 01A2:0502
loc_10504:
	// 4404 
cs=0x192;eip=0x000504; 	T(MOV(dx, *(dw*)(((db*)&word_14a02))));	// 596 mov     dx, ds:word_14A02 ;~ 01A2:0504
cs=0x192;eip=0x000508; 	T(TEST(*(&byte_14a25), 0x20));	// 597 test    ds:byte_14A25, 20h ;~ 01A2:0508
cs=0x192;eip=0x00050d; 	R(JZ(loc_10513));	// 598 jz      short loc_10513 ;~ 01A2:050D
cs=0x192;eip=0x00050f; 	T(INC(dh));	// 599 inc     dh ;~ 01A2:050F
cs=0x192;eip=0x000511; 	R(JMP(loc_1051e));	// 600 jmp     short loc_1051E ;~ 01A2:0511
loc_10513:
	// 4405 
cs=0x192;eip=0x000513; 	T(INC(dl));	// 604 inc     dl ;~ 01A2:0513
cs=0x192;eip=0x000515; 	T(CMP(dl, 0x20));	// 605 cmp     dl, 20h ; ' ' ;~ 01A2:0515
cs=0x192;eip=0x000518; 	R(JNZ(loc_1051e));	// 606 jnz     short loc_1051E ;~ 01A2:0518
cs=0x192;eip=0x00051a; 	T(MOV(dl, 0));	// 607 mov     dl, 0 ;~ 01A2:051A
cs=0x192;eip=0x00051c; 	T(INC(dh));	// 608 inc     dh ;~ 01A2:051C
loc_1051e:
	// 4406 
cs=0x192;eip=0x00051e; 	X(MOV(*(dw*)(((db*)&word_14a02)), dx));	// 612 mov     ds:word_14A02, dx ;~ 01A2:051E
cs=0x192;eip=0x000522; 	T(ADD(dx, 4));	// 613 add     dx, 4 ;~ 01A2:0522
cs=0x192;eip=0x000525; 	T(MOV(bh, 0));	// 614 mov     bh, 0 ;~ 01A2:0525
cs=0x192;eip=0x000527; 	T(MOV(ah, 2));	// 615 mov     ah, 2 ;~ 01A2:0527
cs=0x192;eip=0x000529; 	R(_INT(0x10));	// 616 int     10h             ; - VIDEO - SET CURSOR POSITION ;~ 01A2:0529
cs=0x192;eip=0x00052b; 	X(POP(si));	// 619 pop     si ;~ 01A2:052B
cs=0x192;eip=0x00052c; 	R(JMP(sub_104b7));	// 620 jmp     short sub_104B7 ;~ 01A2:052C
loc_1052e:
	// 4407 
cs=0x192;eip=0x00052e; 	T(INC(al));	// 624 inc     al ;~ 01A2:052E
cs=0x192;eip=0x000530; 	R(JNZ(loc_10533));	// 625 jnz     short loc_10533 ;~ 01A2:0530
cs=0x192;eip=0x000532; 	R(RETN(0));	// 626 retn ;~ 01A2:0532
loc_10533:
	// 4408 
cs=0x192;eip=0x000533; 	T(INC(al));	// 630 inc     al ;~ 01A2:0533
cs=0x192;eip=0x000535; 	R(JNZ(loc_10540));	// 631 jnz     short loc_10540 ;~ 01A2:0535
cs=0x192;eip=0x000537; 	T(MOV(al, *(raddr(ds,si))));	// 632 mov     al, [si] ;~ 01A2:0537
cs=0x192;eip=0x000539; 	T(INC(si));	// 633 inc     si ;~ 01A2:0539
cs=0x192;eip=0x00053a; 	X(MOV(*(&byte_14a24), al));	// 634 mov     ds:byte_14A24, al ;~ 01A2:053A
cs=0x192;eip=0x00053d; 	R(JMP(sub_104b7));	// 635 jmp     sub_104B7 ;~ 01A2:053D
loc_10540:
	// 4409 
cs=0x192;eip=0x000540; 	T(MOV(dx, *(dw*)(raddr(ds,si))));	// 639 mov     dx, [si] ;~ 01A2:0540
cs=0x192;eip=0x000542; 	T(INC(si));	// 640 inc     si ;~ 01A2:0542
cs=0x192;eip=0x000543; 	T(INC(si));	// 641 inc     si ;~ 01A2:0543
cs=0x192;eip=0x000544; 	X(PUSH(si));	// 642 push    si ;~ 01A2:0544
cs=0x192;eip=0x000545; 	R(JMP(loc_1051e));	// 643 jmp     short loc_1051E ;~ 01A2:0545

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_104f7: 	goto loc_104f7;
        case m2c::kloc_10504: 	goto loc_10504;
        case m2c::kloc_10513: 	goto loc_10513;
        case m2c::kloc_1051e: 	goto loc_1051e;
        case m2c::kloc_1052e: 	goto loc_1052e;
        case m2c::kloc_10533: 	goto loc_10533;
        case m2c::kloc_10540: 	goto loc_10540;
        case m2c::kret_1a2_4b9: 	goto ret_1a2_4b9;
        case m2c::ksub_104b7: 	goto sub_104b7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool _group2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group2:
    _begin:
sub_10547:
	// 650 
cs=0x192;eip=0x000547; 	T(MOV(al, *(raddr(ds,si+8))));	// 652 mov     al, [si+8] ;~ 01A2:0547
sub_1054a:
	// 659 
cs=0x192;eip=0x00054a; 	T(MOV(bx, 0x1B72));	// 661 mov     bx, 1B72h ;~ 01A2:054A
ret_1a2_54d:
	// 4410 
cs=0x192;eip=0x00054d; 	T(MOV(cl, al));	// 662 mov     cl, al ;~ 01A2:054D
cs=0x192;eip=0x00054f; 	T(AND(al, 7));	// 663 and     al, 7 ;~ 01A2:054F
cs=0x192;eip=0x000551; 	T(ADD(al, al));	// 664 add     al, al ;~ 01A2:0551
cs=0x192;eip=0x000553; 	T(CBW);	// 665 cbw ;~ 01A2:0553
cs=0x192;eip=0x000554; 	X(PUSH(bx));	// 666 push    bx ;~ 01A2:0554
cs=0x192;eip=0x000555; 	T(ADD(bx, ax));	// 667 add     bx, ax ;~ 01A2:0555
cs=0x192;eip=0x000557; 	T(MOV(dx, *(dw*)(raddr(ds,bx))));	// 668 mov     dx, [bx] ;~ 01A2:0557
cs=0x192;eip=0x000559; 	X(MOV(*(dw*)(((db*)&word_14a06)), dx));	// 669 mov     ds:word_14A06, dx ;~ 01A2:0559
cs=0x192;eip=0x00055d; 	X(POP(bx));	// 670 pop     bx ;~ 01A2:055D
cs=0x192;eip=0x00055e; 	T(MOV(al, cl));	// 671 mov     al, cl ;~ 01A2:055E
cs=0x192;eip=0x000560; 	T(SHR(al, 1));	// 672 shr     al, 1 ;~ 01A2:0560
cs=0x192;eip=0x000562; 	T(SHR(al, 1));	// 673 shr     al, 1 ;~ 01A2:0562
cs=0x192;eip=0x000564; 	T(AND(al, 0x0E));	// 674 and     al, 0Eh ;~ 01A2:0564
cs=0x192;eip=0x000566; 	T(ADD(bx, ax));	// 675 add     bx, ax ;~ 01A2:0566
cs=0x192;eip=0x000568; 	T(MOV(dx, *(dw*)(raddr(ds,bx))));	// 676 mov     dx, [bx] ;~ 01A2:0568
cs=0x192;eip=0x00056a; 	X(MOV(*(dw*)(((db*)&word_14a08)), dx));	// 677 mov     ds:word_14A08, dx ;~ 01A2:056A
cs=0x192;eip=0x00056e; 	X(PUSH(es));	// 678 push    es ;~ 01A2:056E
cs=0x192;eip=0x00056f; 	T(MOV(ax, 0x0B800));	// 679 mov     ax, 0B800h ;~ 01A2:056F
cs=0x192;eip=0x000572; 	T(MOV(es, ax));	// 680 mov     es, ax ;~ 01A2:0572
cs=0x192;eip=0x000574; 	T(CLD);	// 682 cld ;~ 01A2:0574
cs=0x192;eip=0x000575; 	T(MOV(cx, 4));	// 683 mov     cx, 4 ;~ 01A2:0575
cs=0x192;eip=0x000578; 	T(MOV(dx, 0x1972));	// 684 mov     dx, 1972h ;~ 01A2:0578
loc_1057b:
	// 4411 
cs=0x192;eip=0x00057b; 	T(LODSB);	// 687 lodsb ;~ 01A2:057B
cs=0x192;eip=0x00057c; 	T(MOV(ah, 0));	// 688 mov     ah, 0 ;~ 01A2:057C
cs=0x192;eip=0x00057e; 	T(MOV(bx, dx));	// 689 mov     bx, dx ;~ 01A2:057E
cs=0x192;eip=0x000580; 	T(ADD(bx, ax));	// 690 add     bx, ax ;~ 01A2:0580
cs=0x192;eip=0x000582; 	T(ADD(bx, ax));	// 691 add     bx, ax ;~ 01A2:0582
cs=0x192;eip=0x000584; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 692 mov     ax, [bx] ;~ 01A2:0584
cs=0x192;eip=0x000586; 	T(MOV(bx, ax));	// 693 mov     bx, ax ;~ 01A2:0586
cs=0x192;eip=0x000588; 	T(NOT(bx));	// 694 not     bx ;~ 01A2:0588
cs=0x192;eip=0x00058a; 	T(AND(ax, *(dw*)(((db*)&word_14a06))));	// 695 and     ax, ds:word_14A06 ;~ 01A2:058A
cs=0x192;eip=0x00058e; 	T(AND(bx, *(dw*)(((db*)&word_14a08))));	// 696 and     bx, ds:word_14A08 ;~ 01A2:058E
cs=0x192;eip=0x000592; 	T(OR(ax, bx));	// 697 or      ax, bx ;~ 01A2:0592
cs=0x192;eip=0x000594; 	X(STOSW);	// 698 stosw ;~ 01A2:0594
cs=0x192;eip=0x000595; 	T(ADD(di, 0x1FFE));	// 699 add     di, 1FFEh ;~ 01A2:0595
cs=0x192;eip=0x000599; 	T(LODSB);	// 700 lodsb ;~ 01A2:0599
cs=0x192;eip=0x00059a; 	T(MOV(ah, 0));	// 701 mov     ah, 0 ;~ 01A2:059A
cs=0x192;eip=0x00059c; 	T(MOV(bx, dx));	// 702 mov     bx, dx ;~ 01A2:059C
cs=0x192;eip=0x00059e; 	T(ADD(bx, ax));	// 703 add     bx, ax ;~ 01A2:059E
cs=0x192;eip=0x0005a0; 	T(ADD(bx, ax));	// 704 add     bx, ax ;~ 01A2:05A0
cs=0x192;eip=0x0005a2; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 705 mov     ax, [bx] ;~ 01A2:05A2
cs=0x192;eip=0x0005a4; 	T(MOV(bx, ax));	// 706 mov     bx, ax ;~ 01A2:05A4
cs=0x192;eip=0x0005a6; 	T(NOT(bx));	// 707 not     bx ;~ 01A2:05A6
cs=0x192;eip=0x0005a8; 	T(AND(ax, *(dw*)(((db*)&word_14a06))));	// 708 and     ax, ds:word_14A06 ;~ 01A2:05A8
cs=0x192;eip=0x0005ac; 	T(AND(bx, *(dw*)(((db*)&word_14a08))));	// 709 and     bx, ds:word_14A08 ;~ 01A2:05AC
cs=0x192;eip=0x0005b0; 	T(OR(ax, bx));	// 710 or      ax, bx ;~ 01A2:05B0
cs=0x192;eip=0x0005b2; 	X(STOSW);	// 711 stosw ;~ 01A2:05B2
cs=0x192;eip=0x0005b3; 	T(SUB(di, 0x1FB2));	// 712 sub     di, 1FB2h ;~ 01A2:05B3
cs=0x192;eip=0x0005b7; 	R(LOOP(loc_1057b));	// 713 loop    loc_1057B ;~ 01A2:05B7
cs=0x192;eip=0x0005b9; 	X(POP(es));	// 714 pop     es ;~ 01A2:05B9
cs=0x192;eip=0x0005ba; 	R(RETN(0));	// 716 retn ;~ 01A2:05BA

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_1057b: 	goto loc_1057b;
        case m2c::kret_1a2_54d: 	goto ret_1a2_54d;
        case m2c::ksub_10547: 	goto sub_10547;
        case m2c::ksub_1054a: 	goto sub_1054a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_105bb(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_105bb:
    _begin:
cs=0x192;eip=0x0005bb; 	T(MOV(ah, 1));	// 725 mov     ah, 1 ;~ 01A2:05BB
ret_1a2_5bd:
	// 4412 
cs=0x192;eip=0x0005bd; 	R(_INT(0x16));	// 726 int     16h             ; KEYBOARD - CHECK BUFFER, DO NOT CLEAR ;~ 01A2:05BD
cs=0x192;eip=0x0005bf; 	R(JZ(sub_105bb));	// 730 jz      short sub_105BB ;~ 01A2:05BF
cs=0x192;eip=0x0005c1; 	T(MOV(ah, 0));	// 731 mov     ah, 0 ;~ 01A2:05C1
cs=0x192;eip=0x0005c3; 	R(_INT(0x16));	// 732 int     16h             ; KEYBOARD - READ CHAR FROM BUFFER, WAIT IF EMPTY ;~ 01A2:05C3
cs=0x192;eip=0x0005c5; 	R(RETN(0));	// 734 retn ;~ 01A2:05C5

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1a2_5bd: 	goto ret_1a2_5bd;
        case m2c::ksub_105bb: 	goto sub_105bb;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_105c6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_105c6:
    _begin:
cs=0x192;eip=0x0005c6; 	T(MOV(ch, 0x20));	// 743 mov     ch, 20h ; ' ' ;~ 01A2:05C6
ret_1a2_5c8:
	// 4413 
cs=0x192;eip=0x0005c8; 	T(MOV(ah, 1));	// 744 mov     ah, 1 ;~ 01A2:05C8
cs=0x192;eip=0x0005ca; 	R(_INT(0x10));	// 745 int     10h             ; - VIDEO - SET CURSOR CHARACTERISTICS ;~ 01A2:05CA
cs=0x192;eip=0x0005cc; 	R(RETN(0));	// 749 retn ;~ 01A2:05CC

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1a2_5c8: 	goto ret_1a2_5c8;
        case m2c::ksub_105c6: 	goto sub_105c6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool _group3(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group3:
    _begin:
sub_105cd:
	// 756 
cs=0x192;eip=0x0005cd; 	X(PUSH(es));	// 757 push    es ;~ 01A2:05CD
ret_1a2_5ce:
	// 4414 
cs=0x192;eip=0x0005ce; 	T(XOR(ax, ax));	// 758 xor     ax, ax ;~ 01A2:05CE
cs=0x192;eip=0x0005d0; 	T(MOV(es, ax));	// 759 mov     es, ax ;~ 01A2:05D0
cs=0x192;eip=0x0005d2; 	T(MOV(ax, *(dw*)(raddr(es,0x70))));	// 761 mov     ax, es:70h ;~ 01A2:05D2
cs=0x192;eip=0x0005d6; 	X(MOV(*(dw*)(((db*)&word_14a0a)), ax));	// 762 mov     ds:word_14A0A, ax ;~ 01A2:05D6
cs=0x192;eip=0x0005d9; 	T(MOV(ax, *(dw*)(raddr(es,0x72))));	// 763 mov     ax, es:72h ;~ 01A2:05D9
cs=0x192;eip=0x0005dd; 	X(MOV(*(dw*)(((db*)&word_14a0c)), ax));	// 764 mov     ds:word_14A0C, ax ;~ 01A2:05DD
cs=0x192;eip=0x0005e0; 	T(MOV(ax, m2c::ksub_10600));	// 765 mov     ax, offset sub_10600 ;~ 01A2:05E0
cs=0x192;eip=0x0005e3; 	X(PUSH(cs));	// 766 push    cs ;~ 01A2:05E3
cs=0x192;eip=0x0005e4; 	X(POP(dx));	// 767 pop     dx ;~ 01A2:05E4
loc_105e5:
	// 4415 
cs=0x192;eip=0x0005e5; 	T(CLI);	// 770 cli ;~ 01A2:05E5
cs=0x192;eip=0x0005e6; 	X(MOV(*(dw*)(raddr(es,0x70)), ax));	// 771 mov     es:70h, ax ;~ 01A2:05E6
cs=0x192;eip=0x0005ea; 	X(MOV(*(dw*)(raddr(es,0x72)), dx));	// 772 mov     es:72h, dx ;~ 01A2:05EA
cs=0x192;eip=0x0005ef; 	T(STI);	// 773 sti ;~ 01A2:05EF
cs=0x192;eip=0x0005f0; 	X(POP(es));	// 774 pop     es ;~ 01A2:05F0
cs=0x192;eip=0x0005f1; 	R(RETN(0));	// 776 retn ;~ 01A2:05F1
sub_105f2:
	// 783 
cs=0x192;eip=0x0005f2; 	T(MOV(ax, *(dw*)(((db*)&word_14a0a))));	// 784 mov     ax, ds:word_14A0A ;~ 01A2:05F2
ret_1a2_5f5:
	// 4416 
cs=0x192;eip=0x0005f5; 	T(MOV(dx, *(dw*)(((db*)&word_14a0c))));	// 785 mov     dx, ds:word_14A0C ;~ 01A2:05F5
cs=0x192;eip=0x0005f9; 	X(PUSH(es));	// 786 push    es ;~ 01A2:05F9
cs=0x192;eip=0x0005fa; 	T(XOR(bx, bx));	// 787 xor     bx, bx ;~ 01A2:05FA
cs=0x192;eip=0x0005fc; 	T(MOV(es, bx));	// 788 mov     es, bx ;~ 01A2:05FC
cs=0x192;eip=0x0005fe; 	R(JMP(loc_105e5));	// 790 jmp     short loc_105E5 ;~ 01A2:05FE
sub_10600:
	// 797 
cs=0x192;eip=0x000600; 	X(PUSH(ax));	// 798 push    ax ;~ 01A2:0600
ret_1a2_601:
	// 4417 
cs=0x192;eip=0x000601; 	X(PUSH(ds));	// 799 push    ds ;~ 01A2:0601
cs=0x192;eip=0x000602; 	T(MOV(ax, 0x2E61));	// 800 mov     ax, 2E61h ;~ 01A2:0602
cs=0x192;eip=0x000605; 	T(SHR(ax, 1));	// 801 shr     ax, 1 ;~ 01A2:0605
cs=0x192;eip=0x000607; 	T(SHR(ax, 1));	// 802 shr     ax, 1 ;~ 01A2:0607
cs=0x192;eip=0x000609; 	T(SHR(ax, 1));	// 803 shr     ax, 1 ;~ 01A2:0609
cs=0x192;eip=0x00060b; 	T(SHR(ax, 1));	// 804 shr     ax, 1 ;~ 01A2:060B
cs=0x192;eip=0x00060d; 	X(PUSH(bx));	// 805 push    bx ;~ 01A2:060D
cs=0x192;eip=0x00060e; 	T(MOV(bx, cs));	// 806 mov     bx, cs ;~ 01A2:060E
cs=0x192;eip=0x000610; 	T(ADD(ax, bx));	// 807 add     ax, bx ;~ 01A2:0610
cs=0x192;eip=0x000612; 	X(POP(bx));	// 808 pop     bx ;~ 01A2:0612
cs=0x192;eip=0x000613; 	T(MOV(ds, ax));	// 809 mov     ds, ax ;~ 01A2:0613
cs=0x192;eip=0x000615; 	X(INC(*(&byte_14a22)));	// 810 inc     ds:byte_14A22 ;~ 01A2:0615
cs=0x192;eip=0x000619; 	X(INC(*(&byte_14a13)));	// 811 inc     ds:byte_14A13 ;~ 01A2:0619
cs=0x192;eip=0x00061d; 	X(POP(ds));	// 812 pop     ds ;~ 01A2:061D
cs=0x192;eip=0x00061e; 	X(POP(ax));	// 814 pop     ax ;~ 01A2:061E
cs=0x192;eip=0x00061f; 	R(IRET);	// 815 iret ;~ 01A2:061F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_105e5: 	goto loc_105e5;
        case m2c::kret_1a2_5ce: 	goto ret_1a2_5ce;
        case m2c::kret_1a2_5f5: 	goto ret_1a2_5f5;
        case m2c::kret_1a2_601: 	goto ret_1a2_601;
        case m2c::ksub_105cd: 	goto sub_105cd;
        case m2c::ksub_105f2: 	goto sub_105f2;
        case m2c::ksub_10600: 	goto sub_10600;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_10620(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_10620:
    _begin:
cs=0x192;eip=0x000620; 	T(CMP(*(byte_11bc2), 2));	// 824 cmp     byte_11BC2, 2 ;~ 01A2:0620
ret_1a2_625:
	// 4418 
cs=0x192;eip=0x000625; 	R(JC(sub_10620));	// 825 jb      short sub_10620 ;~ 01A2:0625
cs=0x192;eip=0x000627; 	X(MOV(*(byte_11bc2), 0));	// 826 mov     byte_11BC2, 0 ;~ 01A2:0627
cs=0x192;eip=0x00062c; 	R(RETN(0));	// 827 retn ;~ 01A2:062C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1a2_625: 	goto ret_1a2_625;
        case m2c::ksub_10620: 	goto sub_10620;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_1062d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1062d:
    _begin:
cs=0x192;eip=0x00062d; 	T(MOV(si, 0x77AC));	// 835 mov     si, 77ACh ;~ 01A2:062D
ret_1a2_630:
	// 4419 
cs=0x192;eip=0x000630; 	T(MOV(cx, 0x0FF));	// 836 mov     cx, 0FFh ;~ 01A2:0630
cs=0x192;eip=0x000633; 	T(MOV(al, *(raddr(ds,si+1))));	// 837 mov     al, [si+1] ;~ 01A2:0633
loc_10636:
	// 4420 
cs=0x192;eip=0x000636; 	T(MOV(ah, *(raddr(ds,si))));	// 840 mov     ah, [si] ;~ 01A2:0636
cs=0x192;eip=0x000638; 	X(XOR(*(raddr(ds,si)), al));	// 841 xor     [si], al ;~ 01A2:0638
cs=0x192;eip=0x00063a; 	T(MOV(al, ah));	// 842 mov     al, ah ;~ 01A2:063A
cs=0x192;eip=0x00063c; 	T(DEC(si));	// 843 dec     si ;~ 01A2:063C
cs=0x192;eip=0x00063d; 	R(LOOP(loc_10636));	// 844 loop    loc_10636 ;~ 01A2:063D
cs=0x192;eip=0x00063f; 	R(RETN(0));	// 845 retn ;~ 01A2:063F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_10636: 	goto loc_10636;
        case m2c::kret_1a2_630: 	goto ret_1a2_630;
        case m2c::ksub_1062d: 	goto sub_1062d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_10640(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_10640:
    _begin:
cs=0x192;eip=0x000640; 	T(MOV(si, 0x77AC));	// 853 mov     si, 77ACh ;~ 01A2:0640
ret_1a2_643:
	// 4421 
cs=0x192;eip=0x000643; 	T(MOV(cx, 0x0FF));	// 854 mov     cx, 0FFh ;~ 01A2:0643
cs=0x192;eip=0x000646; 	T(MOV(al, *(raddr(ds,si+1))));	// 855 mov     al, [si+1] ;~ 01A2:0646
loc_10649:
	// 4422 
cs=0x192;eip=0x000649; 	X(XOR(*(raddr(ds,si)), al));	// 858 xor     [si], al ;~ 01A2:0649
cs=0x192;eip=0x00064b; 	T(MOV(al, *(raddr(ds,si))));	// 859 mov     al, [si] ;~ 01A2:064B
cs=0x192;eip=0x00064d; 	T(CMP(al, 0x20));	// 860 cmp     al, 20h ; ' ' ;~ 01A2:064D
cs=0x192;eip=0x00064f; 	R(JC(loc_1065b));	// 861 jb      short loc_1065B ;~ 01A2:064F
cs=0x192;eip=0x000651; 	T(CMP(al, 0x80));	// 862 cmp     al, 80h ; '€' ;~ 01A2:0651
cs=0x192;eip=0x000653; 	R(JNC(loc_1065b));	// 863 jnb     short loc_1065B ;~ 01A2:0653
cs=0x192;eip=0x000655; 	T(DEC(si));	// 864 dec     si ;~ 01A2:0655
cs=0x192;eip=0x000656; 	R(LOOP(loc_10649));	// 865 loop    loc_10649 ;~ 01A2:0656
cs=0x192;eip=0x000658; 	T(XOR(al, al));	// 866 xor     al, al ;~ 01A2:0658
cs=0x192;eip=0x00065a; 	R(RETN(0));	// 867 retn ;~ 01A2:065A
loc_1065b:
	// 4423 
cs=0x192;eip=0x00065b; 	T(XOR(al, al));	// 872 xor     al, al ;~ 01A2:065B
cs=0x192;eip=0x00065d; 	T(INC(al));	// 873 inc     al ;~ 01A2:065D
cs=0x192;eip=0x00065f; 	R(RETN(0));	// 874 retn ;~ 01A2:065F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_10649: 	goto loc_10649;
        case m2c::kloc_1065b: 	goto loc_1065b;
        case m2c::kret_1a2_643: 	goto ret_1a2_643;
        case m2c::ksub_10640: 	goto sub_10640;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool _group4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group4:
    _begin:
sub_10660:
	// 881 
cs=0x192;eip=0x000660; 	X(MOV(*((byte_13c0d)+0x12D), 5));	// 882 mov     byte_13C0D+12Dh, 5 ;~ 01A2:0660
ret_1a2_665:
	// 4424 
cs=0x192;eip=0x000665; 	X(MOV(byte_13d3b, 3));	// 883 mov     byte_13D3B, 3 ;~ 01A2:0665
cs=0x192;eip=0x00066a; 	X(MOV(*raddr(ds,m2c::kloc_11e74), 0));	// 884 mov     byte ptr loc_11E74, 0 ;~ 01A2:066A
cs=0x192;eip=0x00066f; 	X(MOV(byte_11bda, 0));	// 885 mov     byte_11BDA, 0 ;~ 01A2:066F
cs=0x192;eip=0x000674; 	T(MOV(al, byte_11bc8));	// 886 mov     al, byte_11BC8 ;~ 01A2:0674
cs=0x192;eip=0x000677; 	T(INC(al));	// 887 inc     al ;~ 01A2:0677
cs=0x192;eip=0x000679; 	R(JNZ(loc_10694));	// 888 jnz     short loc_10694 ;~ 01A2:0679
cs=0x192;eip=0x00067b; 	T(MOV(al, *(db*)(((db*)&word_11bd6))));	// 889 mov     al, byte ptr word_11BD6 ;~ 01A2:067B
cs=0x192;eip=0x00067e; 	T(CMP(al, 0x13));	// 890 cmp     al, 13h ;~ 01A2:067E
cs=0x192;eip=0x000680; 	R(JNZ(loc_10694));	// 891 jnz     short loc_10694 ;~ 01A2:0680
cs=0x192;eip=0x000682; 	T(MOV(bx, 0x1BD2));	// 892 mov     bx, 1BD2h ;~ 01A2:0682
cs=0x192;eip=0x000685; 	T(XOR(al, al));	// 893 xor     al, al ;~ 01A2:0685
cs=0x192;eip=0x000687; 	T(CMP(al, *(raddr(ds,bx))));	// 894 cmp     al, [bx] ;~ 01A2:0687
cs=0x192;eip=0x000689; 	R(JNZ(loc_10694));	// 895 jnz     short loc_10694 ;~ 01A2:0689
cs=0x192;eip=0x00068b; 	X(MOV(*(raddr(ds,bx)), 1));	// 896 mov     byte ptr [bx], 1 ;~ 01A2:068B
cs=0x192;eip=0x00068e; 	T(MOV(si, 0x2069));	// 897 mov     si, 2069h ;~ 01A2:068E
cs=0x192;eip=0x000691; 	R(CALL(sub_104b7,0));	// 898 call    sub_104B7 ;~ 01A2:0691
loc_10694:
	// 4425 
cs=0x192;eip=0x000694; 	T(MOV(cx, 6));	// 902 mov     cx, 6 ;~ 01A2:0694
cs=0x192;eip=0x000697; 	T(MOV(bx, 0x6FAB));	// 903 mov     bx, 6FABh ;~ 01A2:0697
loc_1069a:
	// 4426 
cs=0x192;eip=0x00069a; 	X(MOV(*(raddr(ds,bx)), 0));	// 906 mov     byte ptr [bx], 0 ;~ 01A2:069A
cs=0x192;eip=0x00069d; 	T(ADD(bx, 7));	// 907 add     bx, 7 ;~ 01A2:069D
cs=0x192;eip=0x0006a0; 	R(LOOP(loc_1069a));	// 908 loop    loc_1069A ;~ 01A2:06A0
cs=0x192;eip=0x0006a2; 	T(MOV(al, *(db*)(((db*)&word_11bd6)+1)));	// 909 mov     al, byte ptr word_11BD6+1 ;~ 01A2:06A2
cs=0x192;eip=0x0006a5; 	T(DEC(al));	// 910 dec     al ;~ 01A2:06A5
cs=0x192;eip=0x0006a7; 	T(MOV(al, 1));	// 911 mov     al, 1 ;~ 01A2:06A7
cs=0x192;eip=0x0006a9; 	R(JNZ(loc_106ae));	// 912 jnz     short loc_106AE ;~ 01A2:06A9
cs=0x192;eip=0x0006ab; 	T(MOV(al, byte_11bcb));	// 913 mov     al, byte_11BCB ;~ 01A2:06AB
loc_106ae:
	// 4427 
cs=0x192;eip=0x0006ae; 	X(MOV(*((byte_13831)+0x261), al));	// 916 mov     byte_13831+261h, al ;~ 01A2:06AE
cs=0x192;eip=0x0006b1; 	X(MOV(*(asc_13d3c), 0));	// 917 mov     byte ptr asc_13D3C, 0 ; "~``~" ;~ 01A2:06B1
cs=0x192;eip=0x0006b6; 	R(CALL(sub_10bdd,0));	// 918 call    sub_10BDD ;~ 01A2:06B6
cs=0x192;eip=0x0006b9; 	R(CALL(sub_10bea,0));	// 919 call    sub_10BEA ;~ 01A2:06B9
cs=0x192;eip=0x0006bc; 	T(MOV(di, 0x244));	// 920 mov     di, 244h ;~ 01A2:06BC
cs=0x192;eip=0x0006bf; 	T(CLD);	// 921 cld ;~ 01A2:06BF
cs=0x192;eip=0x0006c0; 	T(XOR(ax, ax));	// 922 xor     ax, ax ;~ 01A2:06C0
cs=0x192;eip=0x0006c2; 	T(MOV(cx, 0x120));	// 923 mov     cx, 120h ;~ 01A2:06C2
	// 924 rep stosw ;~ 01A2:06C5
cs=0x192;eip=0x0006c5; 	X(	REP STOSW);	// 924 rep stosw ;~ 01A2:06C5
cs=0x192;eip=0x0006c7; 	T(DEC(ax));	// 925 dec     ax ;~ 01A2:06C7
cs=0x192;eip=0x0006c8; 	T(MOV(cx, 0x120));	// 926 mov     cx, 120h ;~ 01A2:06C8
	// 927 rep stosw ;~ 01A2:06CB
cs=0x192;eip=0x0006cb; 	X(	REP STOSW);	// 927 rep stosw ;~ 01A2:06CB
cs=0x192;eip=0x0006cd; 	T(MOV(di, 4));	// 928 mov     di, 4 ;~ 01A2:06CD
cs=0x192;eip=0x0006d0; 	T(MOV(ax, 0x101));	// 929 mov     ax, 101h ;~ 01A2:06D0
cs=0x192;eip=0x0006d3; 	T(MOV(cx, 0x120));	// 930 mov     cx, 120h ;~ 01A2:06D3
	// 931 rep stosw ;~ 01A2:06D6
cs=0x192;eip=0x0006d6; 	X(	REP STOSW);	// 931 rep stosw ;~ 01A2:06D6
cs=0x192;eip=0x0006d8; 	T(MOV(al, *(db*)(((db*)&word_11bd6))));	// 932 mov     al, byte ptr word_11BD6 ;~ 01A2:06D8
cs=0x192;eip=0x0006db; 	T(OR(al, al));	// 933 or      al, al ;~ 01A2:06DB
cs=0x192;eip=0x0006dd; 	R(JZ(loc_106e5));	// 934 jz      short loc_106E5 ;~ 01A2:06DD
cs=0x192;eip=0x0006df; 	T(MOV(bx, word_11bbc));	// 935 mov     bx, word_11BBC ;~ 01A2:06DF
cs=0x192;eip=0x0006e3; 	T(MOV(al, *(raddr(ds,bx))));	// 936 mov     al, [bx] ;~ 01A2:06E3
loc_106e5:
	// 4428 
cs=0x192;eip=0x0006e5; 	T(MOV(ah, 0));	// 939 mov     ah, 0 ;~ 01A2:06E5
cs=0x192;eip=0x0006e7; 	T(ADD(ax, ax));	// 940 add     ax, ax ;~ 01A2:06E7
cs=0x192;eip=0x0006e9; 	T(MOV(bx, 0x3B4C));	// 941 mov     bx, 3B4Ch ;~ 01A2:06E9
cs=0x192;eip=0x0006ec; 	T(ADD(bx, ax));	// 942 add     bx, ax ;~ 01A2:06EC
cs=0x192;eip=0x0006ee; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 943 mov     bx, [bx] ;~ 01A2:06EE
loc_106f0:
	// 4429 
cs=0x192;eip=0x0006f0; 	T(MOV(al, *(raddr(ds,bx))));	// 946 mov     al, [bx] ;~ 01A2:06F0
cs=0x192;eip=0x0006f2; 	T(INC(al));	// 947 inc     al ;~ 01A2:06F2
cs=0x192;eip=0x0006f4; 	R(JNZ(loc_106f8));	// 948 jnz     short loc_106F8 ;~ 01A2:06F4
cs=0x192;eip=0x0006f6; 	R(JMP(loc_1070b));	// 949 jmp     short loc_1070B ;~ 01A2:06F6
loc_106f8:
	// 4430 
cs=0x192;eip=0x0006f8; 	T(INC(bx));	// 953 inc     bx ;~ 01A2:06F8
cs=0x192;eip=0x0006f9; 	X(PUSH(bx));	// 954 push    bx ;~ 01A2:06F9
cs=0x192;eip=0x0006fa; 	T(MOV(ah, 0));	// 955 mov     ah, 0 ;~ 01A2:06FA
cs=0x192;eip=0x0006fc; 	T(ADD(ax, ax));	// 956 add     ax, ax ;~ 01A2:06FC
cs=0x192;eip=0x0006fe; 	T(MOV(bx, 0x1BE8));	// 957 mov     bx, 1BE8h ;~ 01A2:06FE
cs=0x192;eip=0x000701; 	T(ADD(bx, ax));	// 958 add     bx, ax ;~ 01A2:0701
cs=0x192;eip=0x000703; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 959 mov     bx, [bx] ;~ 01A2:0703
cs=0x192;eip=0x000705; __disp=bx;
	R(JMP(__dispatch_call));	// 960 jmp     bx ;~ 01A2:0705
ret_1a2_707:
	// 4431 
cs=0x192;eip=0x000707; 	X(POP(bx));	// 962 pop     bx ;~ 01A2:0707
cs=0x192;eip=0x000708; 	T(INC(bx));	// 963 inc     bx ;~ 01A2:0708
cs=0x192;eip=0x000709; 	R(JMP(loc_106f0));	// 964 jmp     short loc_106F0 ;~ 01A2:0709
loc_1070b:
	// 4432 
cs=0x192;eip=0x00070b; 	X(MOV(*(dw*)((byte_13c0d)+0x12B), 0x730));	// 968 mov     word ptr byte_13C0D+12Bh, 730h ;~ 01A2:070B
cs=0x192;eip=0x000711; 	T(MOV(bx, 0x2567));	// 969 mov     bx, 2567h ;~ 01A2:0711
cs=0x192;eip=0x000714; 	T(MOV(cx, 0x16));	// 970 mov     cx, 16h ;~ 01A2:0714
loc_10717:
	// 4433 
cs=0x192;eip=0x000717; 	T(MOV(ax, word_11bd6));	// 973 mov     ax, word_11BD6 ;~ 01A2:0717
cs=0x192;eip=0x00071a; 	T(CMP(ax, *(dw*)(raddr(ds,bx))));	// 974 cmp     ax, [bx] ;~ 01A2:071A
cs=0x192;eip=0x00071c; 	R(JNZ(loc_10733));	// 975 jnz     short loc_10733 ;~ 01A2:071C
cs=0x192;eip=0x00071e; 	X(PUSH(bx));	// 976 push    bx ;~ 01A2:071E
cs=0x192;eip=0x00071f; 	T(MOV(bl, *(raddr(ds,bx+2))));	// 977 mov     bl, [bx+2] ;~ 01A2:071F
cs=0x192;eip=0x000722; 	T(MOV(bh, 0));	// 978 mov     bh, 0 ;~ 01A2:0722
cs=0x192;eip=0x000724; 	T(ADD(bx, bx));	// 979 add     bx, bx ;~ 01A2:0724
cs=0x192;eip=0x000726; 	T(ADD(bx, 0x1BEA));	// 980 add     bx, 1BEAh ;~ 01A2:0726
cs=0x192;eip=0x00072a; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 981 mov     bx, [bx] ;~ 01A2:072A
cs=0x192;eip=0x00072c; 	X(PUSH(cx));	// 982 push    cx ;~ 01A2:072C
cs=0x192;eip=0x00072d; 	X(PUSH(bx));	// 983 push    bx ;~ 01A2:072D
cs=0x192;eip=0x00072e; __disp=bx;
	R(JMP(__dispatch_call));	// 984 jmp     bx ;~ 01A2:072E
ret_1a2_730:
	// 4434 
cs=0x192;eip=0x000730; 	X(POP(bx));	// 986 pop     bx ;~ 01A2:0730
cs=0x192;eip=0x000731; 	X(POP(cx));	// 987 pop     cx ;~ 01A2:0731
cs=0x192;eip=0x000732; 	X(POP(bx));	// 988 pop     bx ;~ 01A2:0732
loc_10733:
	// 4435 
cs=0x192;eip=0x000733; 	T(ADD(bx, 3));	// 991 add     bx, 3 ;~ 01A2:0733
cs=0x192;eip=0x000736; 	R(LOOP(loc_10717));	// 992 loop    loc_10717 ;~ 01A2:0736
cs=0x192;eip=0x000738; 	X(MOV(*(dw*)((byte_13c0d)+0x12B), 0x707));	// 993 mov     word ptr byte_13C0D+12Bh, 707h ;~ 01A2:0738
cs=0x192;eip=0x00073e; 	T(MOV(al, *(db*)(((db*)&word_11bd6))));	// 994 mov     al, byte ptr word_11BD6 ;~ 01A2:073E
cs=0x192;eip=0x000741; 	T(CMP(al, 0x1F));	// 995 cmp     al, 1Fh ;~ 01A2:0741
cs=0x192;eip=0x000743; 	R(JNZ(loc_10759));	// 996 jnz     short loc_10759 ;~ 01A2:0743
cs=0x192;eip=0x000745; 	T(MOV(cx, 0x100));	// 997 mov     cx, 100h ;~ 01A2:0745
cs=0x192;eip=0x000748; 	T(MOV(di, 0x6A3));	// 998 mov     di, 6A3h ;~ 01A2:0748
loc_1074b:
	// 4436 
cs=0x192;eip=0x00074b; 	T(MOV(al, *(raddr(ds,di-0x240))));	// 1001 mov     al, [di-240h] ;~ 01A2:074B
cs=0x192;eip=0x00074f; 	T(CMP(al, 0x0C7));	// 1002 cmp     al, 0C7h ; 'Ç' ;~ 01A2:074F
cs=0x192;eip=0x000751; 	R(JNC(loc_10756));	// 1003 jnb     short loc_10756 ;~ 01A2:0751
cs=0x192;eip=0x000753; 	X(MOV(*(raddr(ds,di)), 0));	// 1004 mov     byte ptr [di], 0 ;~ 01A2:0753
loc_10756:
	// 4437 
cs=0x192;eip=0x000756; 	T(DEC(di));	// 1007 dec     di ;~ 01A2:0756
cs=0x192;eip=0x000757; 	R(LOOP(loc_1074b));	// 1008 loop    loc_1074B ;~ 01A2:0757
loc_10759:
	// 4438 
cs=0x192;eip=0x000759; 	T(MOV(si, 0x1369));	// 1011 mov     si, 1369h ;~ 01A2:0759
cs=0x192;eip=0x00075c; 	T(MOV(cx, 0x21));	// 1012 mov     cx, 21h ; '!' ;~ 01A2:075C
loc_1075f:
	// 4439 
cs=0x192;eip=0x00075f; 	T(MOV(ax, word_11bd6));	// 1015 mov     ax, word_11BD6 ;~ 01A2:075F
cs=0x192;eip=0x000762; 	T(CMP(ax, *(dw*)(raddr(ds,si))));	// 1016 cmp     ax, [si] ;~ 01A2:0762
cs=0x192;eip=0x000764; 	R(JNZ(loc_10783));	// 1017 jnz     short loc_10783 ;~ 01A2:0764
cs=0x192;eip=0x000766; 	T(MOV(bx, *(dw*)(raddr(ds,si+2))));	// 1018 mov     bx, [si+2] ;~ 01A2:0766
cs=0x192;eip=0x000769; 	T(MOV(al, *(raddr(ds,bx))));	// 1019 mov     al, [bx] ;~ 01A2:0769
cs=0x192;eip=0x00076b; 	T(INC(al));	// 1020 inc     al ;~ 01A2:076B
cs=0x192;eip=0x00076d; 	R(JNZ(loc_10773));	// 1021 jnz     short loc_10773 ;~ 01A2:076D
cs=0x192;eip=0x00076f; 	X(MOV(*(dw*)(raddr(ds,bx)), 0x2A29));	// 1022 mov     word ptr [bx], 2A29h ;~ 01A2:076F
loc_10773:
	// 4440 
cs=0x192;eip=0x000773; 	T(SUB(bx, 0x240));	// 1025 sub     bx, 240h ;~ 01A2:0773
cs=0x192;eip=0x000777; 	X(MOV(*(dw*)(raddr(ds,bx)), 0x6464));	// 1026 mov     word ptr [bx], 6464h ;~ 01A2:0777
cs=0x192;eip=0x00077b; 	T(MOV(ax, si));	// 1027 mov     ax, si ;~ 01A2:077B
cs=0x192;eip=0x00077d; 	T(ADD(ax, 4));	// 1028 add     ax, 4 ;~ 01A2:077D
cs=0x192;eip=0x000780; 	X(MOV(word_11bb6, ax));	// 1029 mov     word_11BB6, ax ;~ 01A2:0780
loc_10783:
	// 4441 
cs=0x192;eip=0x000783; 	T(ADD(si, 0x0E));	// 1032 add     si, 0Eh ;~ 01A2:0783
cs=0x192;eip=0x000786; 	R(LOOP(loc_1075f));	// 1033 loop    loc_1075F ;~ 01A2:0786
cs=0x192;eip=0x000788; 	R(CALL(sub_10c0d,0));	// 1034 call    sub_10C0D ;~ 01A2:0788
cs=0x192;eip=0x00078b; 	T(MOV(al, *(asc_13d3c)));	// 1035 mov     al, byte ptr asc_13D3C ; "~``~" ;~ 01A2:078B
cs=0x192;eip=0x00078e; 	T(DEC(al));	// 1036 dec     al ;~ 01A2:078E
cs=0x192;eip=0x000790; 	R(JNZ(loc_10797));	// 1037 jnz     short loc_10797 ;~ 01A2:0790
cs=0x192;eip=0x000792; 	T(MOV(si, 0x203E));	// 1038 mov     si, 203Eh ;~ 01A2:0792
cs=0x192;eip=0x000795; 	R(JMP(loc_107b1));	// 1039 jmp     short loc_107B1 ;~ 01A2:0795
loc_10797:
	// 4442 
cs=0x192;eip=0x000797; 	T(DEC(al));	// 1043 dec     al ;~ 01A2:0797
cs=0x192;eip=0x000799; 	R(JNZ(loc_107a5));	// 1044 jnz     short loc_107A5 ;~ 01A2:0799
cs=0x192;eip=0x00079b; 	X(MOV(*((byte_11bc2)+3), 0x20));	// 1045 mov     byte_11BC2+3, 20h ; ' ' ;~ 01A2:079B
cs=0x192;eip=0x0007a0; 	T(MOV(si, 0x2045));	// 1046 mov     si, 2045h ;~ 01A2:07A0
cs=0x192;eip=0x0007a3; 	R(JMP(loc_107b1));	// 1047 jmp     short loc_107B1 ;~ 01A2:07A3
loc_107a5:
	// 4443 
cs=0x192;eip=0x0007a5; 	T(DEC(al));	// 1051 dec     al ;~ 01A2:07A5
cs=0x192;eip=0x0007a7; 	R(JNZ(locret_107b9));	// 1052 jnz     short locret_107B9 ;~ 01A2:07A7
cs=0x192;eip=0x0007a9; 	X(MOV(*((byte_11bc2)+3), 0x20));	// 1053 mov     byte_11BC2+3, 20h ; ' ' ;~ 01A2:07A9
cs=0x192;eip=0x0007ae; 	T(MOV(si, 0x205D));	// 1054 mov     si, 205Dh ;~ 01A2:07AE
loc_107b1:
	// 4444 
cs=0x192;eip=0x0007b1; 	R(CALL(sub_104b7,0));	// 1058 call    sub_104B7 ;~ 01A2:07B1
cs=0x192;eip=0x0007b4; 	X(MOV(*((byte_11bc2)+3), 1));	// 1059 mov     byte_11BC2+3, 1 ;~ 01A2:07B4
locret_107b9:
	// 4445 
cs=0x192;eip=0x0007b9; 	R(RETN(0));	// 1062 retn ;~ 01A2:07B9
seg000_7ba_proc:
	// 1066 
cs=0x192;eip=0x0007ba; 	X(MOV(*raddr(ds,m2c::kloc_11e74), 1));	// 1066 mov     byte ptr loc_11E74, 1 ;~ 01A2:07BA
ret_1a2_7bf:
	// 4446 
cs=0x192;eip=0x0007bf; 	T(MOV(bx, 0x2A8));	// 1067 mov     bx, 2A8h ;~ 01A2:07BF
cs=0x192;eip=0x0007c2; 	T(MOV(si, 0x1DF0));	// 1068 mov     si, 1DF0h ;~ 01A2:07C2
cs=0x192;eip=0x0007c5; 	T(MOV(cl, 6));	// 1069 mov     cl, 6 ;~ 01A2:07C5
cs=0x192;eip=0x0007c7; 	T(MOV(ch, 6));	// 1070 mov     ch, 6 ;~ 01A2:07C7
cs=0x192;eip=0x0007c9; 	R(JMP(loc_107ee));	// 1071 jmp     short loc_107EE ;~ 01A2:07C9
ret_1a2_7cb:
	// 4447 
cs=0x192;eip=0x0007cb; 	T(MOV(bx, 0x275));	// 1073 mov     bx, 275h ;~ 01A2:07CB
cs=0x192;eip=0x0007ce; 	R(JMP(loc_107dd));	// 1074 jmp     short loc_107DD ;~ 01A2:07CE
ret_1a2_7d0:
	// 4448 
cs=0x192;eip=0x0007d0; 	T(MOV(bx, 0x267));	// 1076 mov     bx, 267h ;~ 01A2:07D0
cs=0x192;eip=0x0007d3; 	R(JMP(loc_107dd));	// 1077 jmp     short loc_107DD ;~ 01A2:07D3
ret_1a2_7d5:
	// 4449 
cs=0x192;eip=0x0007d5; 	T(MOV(bx, 0x26C));	// 1079 mov     bx, 26Ch ;~ 01A2:07D5
cs=0x192;eip=0x0007d8; 	R(JMP(loc_107dd));	// 1080 jmp     short loc_107DD ;~ 01A2:07D8
ret_1a2_7da:
	// 4450 
cs=0x192;eip=0x0007da; 	T(MOV(bx, 0x277));	// 1082 mov     bx, 277h ;~ 01A2:07DA
loc_107dd:
	// 4451 
cs=0x192;eip=0x0007dd; 	T(MOV(al, *(db*)(((db*)&word_11bd6))));	// 1086 mov     al, byte ptr word_11BD6 ;~ 01A2:07DD
cs=0x192;eip=0x0007e0; 	T(CMP(al, 0x0C));	// 1087 cmp     al, 0Ch ;~ 01A2:07E0
cs=0x192;eip=0x0007e2; 	R(JC(loc_107e7));	// 1088 jb      short loc_107E7 ;~ 01A2:07E2
cs=0x192;eip=0x0007e4; 	R(JMP(loc_109e4));	// 1089 jmp     loc_109E4 ;~ 01A2:07E4
loc_107e7:
	// 4452 
cs=0x192;eip=0x0007e7; 	T(MOV(si, 0x1DBA));	// 1093 mov     si, 1DBAh ;~ 01A2:07E7
cs=0x192;eip=0x0007ea; 	T(MOV(cl, 9));	// 1094 mov     cl, 9 ;~ 01A2:07EA
cs=0x192;eip=0x0007ec; 	T(MOV(ch, 6));	// 1095 mov     ch, 6 ;~ 01A2:07EC
loc_107ee:
	// 4453 
cs=0x192;eip=0x0007ee; 	R(JMP(loc_109d1));	// 1098 jmp     loc_109D1 ;~ 01A2:07EE
ret_1a2_7f1:
	// 4454 
cs=0x192;eip=0x0007f1; 	T(MOV(bx, 0x36C));	// 1100 mov     bx, 36Ch ;~ 01A2:07F1
cs=0x192;eip=0x0007f4; 	R(JMP(loc_10849));	// 1101 jmp     short loc_10849 ;~ 01A2:07F4
ret_1a2_7f6:
	// 4455 
cs=0x192;eip=0x0007f6; 	T(MOV(bx, 0x37A));	// 1103 mov     bx, 37Ah ;~ 01A2:07F6
cs=0x192;eip=0x0007f9; 	R(JMP(loc_10849));	// 1104 jmp     short loc_10849 ;~ 01A2:07F9
ret_1a2_7fb:
	// 4456 
cs=0x192;eip=0x0007fb; 	T(MOV(bx, 0x373));	// 1106 mov     bx, 373h ;~ 01A2:07FB
cs=0x192;eip=0x0007fe; 	R(JMP(loc_10849));	// 1107 jmp     short loc_10849 ;~ 01A2:07FE
ret_1a2_800:
	// 4457 
cs=0x192;eip=0x000800; 	T(MOV(bx, 0x365));	// 1109 mov     bx, 365h ;~ 01A2:0800
cs=0x192;eip=0x000803; 	R(JMP(loc_10849));	// 1110 jmp     short loc_10849 ;~ 01A2:0803
ret_1a2_805:
	// 4458 
cs=0x192;eip=0x000805; 	T(MOV(bx, 0x391));	// 1112 mov     bx, 391h ;~ 01A2:0805
cs=0x192;eip=0x000808; 	R(JMP(loc_10849));	// 1113 jmp     short loc_10849 ;~ 01A2:0808
ret_1a2_80a:
	// 4459 
cs=0x192;eip=0x00080a; 	T(MOV(bx, 0x386));	// 1115 mov     bx, 386h ;~ 01A2:080A
cs=0x192;eip=0x00080d; 	R(JMP(loc_10849));	// 1116 jmp     short loc_10849 ;~ 01A2:080D
ret_1a2_80f:
	// 4460 
cs=0x192;eip=0x00080f; 	T(MOV(bx, 0x3DB));	// 1118 mov     bx, 3DBh ;~ 01A2:080F
cs=0x192;eip=0x000812; 	R(JMP(loc_10849));	// 1119 jmp     short loc_10849 ;~ 01A2:0812
ret_1a2_814:
	// 4461 
cs=0x192;eip=0x000814; 	T(MOV(bx, 0x3D3));	// 1121 mov     bx, 3D3h ;~ 01A2:0814
cs=0x192;eip=0x000817; 	R(JMP(loc_10849));	// 1122 jmp     short loc_10849 ;~ 01A2:0817
ret_1a2_819:
	// 4462 
cs=0x192;eip=0x000819; 	T(MOV(bx, 0x3CB));	// 1124 mov     bx, 3CBh ;~ 01A2:0819
cs=0x192;eip=0x00081c; 	R(JMP(loc_10849));	// 1125 jmp     short loc_10849 ;~ 01A2:081C
ret_1a2_81e:
	// 4463 
cs=0x192;eip=0x00081e; 	T(MOV(bx, 0x3BD));	// 1127 mov     bx, 3BDh ;~ 01A2:081E
cs=0x192;eip=0x000821; 	R(JMP(loc_10849));	// 1128 jmp     short loc_10849 ;~ 01A2:0821
ret_1a2_823:
	// 4464 
cs=0x192;eip=0x000823; 	T(MOV(bx, 0x3B5));	// 1130 mov     bx, 3B5h ;~ 01A2:0823
cs=0x192;eip=0x000826; 	R(JMP(loc_10849));	// 1131 jmp     short loc_10849 ;~ 01A2:0826
ret_1a2_828:
	// 4465 
cs=0x192;eip=0x000828; 	T(MOV(bx, 0x3AB));	// 1133 mov     bx, 3ABh ;~ 01A2:0828
cs=0x192;eip=0x00082b; 	R(JMP(loc_10849));	// 1134 jmp     short loc_10849 ;~ 01A2:082B
ret_1a2_82d:
	// 4466 
cs=0x192;eip=0x00082d; 	T(MOV(bx, 0x3A4));	// 1136 mov     bx, 3A4h ;~ 01A2:082D
cs=0x192;eip=0x000830; 	R(JMP(loc_10849));	// 1137 jmp     short loc_10849 ;~ 01A2:0830
ret_1a2_832:
	// 4467 
cs=0x192;eip=0x000832; 	T(MOV(bx, 0x35A));	// 1139 mov     bx, 35Ah ;~ 01A2:0832
cs=0x192;eip=0x000835; 	R(JMP(loc_10849));	// 1140 jmp     short loc_10849 ;~ 01A2:0835
ret_1a2_837:
	// 4468 
cs=0x192;eip=0x000837; 	T(MOV(bx, 0x352));	// 1142 mov     bx, 352h ;~ 01A2:0837
cs=0x192;eip=0x00083a; 	R(JMP(loc_10849));	// 1143 jmp     short loc_10849 ;~ 01A2:083A
ret_1a2_83c:
	// 4469 
cs=0x192;eip=0x00083c; 	T(MOV(bx, 0x345));	// 1145 mov     bx, 345h ;~ 01A2:083C
cs=0x192;eip=0x00083f; 	R(JMP(loc_10849));	// 1146 jmp     short loc_10849 ;~ 01A2:083F
ret_1a2_841:
	// 4470 
cs=0x192;eip=0x000841; 	T(MOV(bx, 0x398));	// 1148 mov     bx, 398h ;~ 01A2:0841
cs=0x192;eip=0x000844; 	R(JMP(loc_10849));	// 1149 jmp     short loc_10849 ;~ 01A2:0844
ret_1a2_846:
	// 4471 
cs=0x192;eip=0x000846; 	T(MOV(bx, 0x38D));	// 1151 mov     bx, 38Dh ;~ 01A2:0846
loc_10849:
	// 4472 
cs=0x192;eip=0x000849; 	T(MOV(si, 0x1D9C));	// 1155 mov     si, 1D9Ch ;~ 01A2:0849
cs=0x192;eip=0x00084c; 	T(MOV(cl, 6));	// 1156 mov     cl, 6 ;~ 01A2:084C
cs=0x192;eip=0x00084e; 	T(MOV(ch, 5));	// 1157 mov     ch, 5 ;~ 01A2:084E
cs=0x192;eip=0x000850; 	R(JMP(loc_109d1));	// 1158 jmp     loc_109D1 ;~ 01A2:0850
ret_1a2_853:
	// 4473 
cs=0x192;eip=0x000853; 	T(MOV(bx, 0x2DA));	// 1160 mov     bx, 2DAh ;~ 01A2:0853
cs=0x192;eip=0x000856; 	T(MOV(si, 0x1D96));	// 1161 mov     si, 1D96h ;~ 01A2:0856
cs=0x192;eip=0x000859; 	T(MOV(cl, 3));	// 1162 mov     cl, 3 ;~ 01A2:0859
cs=0x192;eip=0x00085b; 	T(MOV(ch, 2));	// 1163 mov     ch, 2 ;~ 01A2:085B
cs=0x192;eip=0x00085d; 	R(JMP(loc_109d1));	// 1164 jmp     loc_109D1 ;~ 01A2:085D
ret_1a2_860:
	// 4474 
cs=0x192;eip=0x000860; 	T(MOV(bx, 0x60E));	// 1166 mov     bx, 60Eh ;~ 01A2:0860
cs=0x192;eip=0x000863; 	R(JMP(loc_10868));	// 1167 jmp     short loc_10868 ;~ 01A2:0863
ret_1a2_865:
	// 4475 
cs=0x192;eip=0x000865; 	T(MOV(bx, 0x608));	// 1169 mov     bx, 608h ;~ 01A2:0865
loc_10868:
	// 4476 
cs=0x192;eip=0x000868; 	T(MOV(si, 0x1CBA));	// 1172 mov     si, 1CBAh ;~ 01A2:0868
cs=0x192;eip=0x00086b; 	R(JMP(loc_108b7));	// 1173 jmp     short loc_108B7 ;~ 01A2:086B
ret_1a2_86d:
	// 4477 
cs=0x192;eip=0x00086d; 	T(MOV(bx, 0x2EC));	// 1175 mov     bx, 2ECh ;~ 01A2:086D
cs=0x192;eip=0x000870; 	R(JMP(loc_1088e));	// 1176 jmp     short loc_1088E ;~ 01A2:0870
ret_1a2_872:
	// 4478 
cs=0x192;eip=0x000872; 	T(MOV(bx, 0x35E));	// 1178 mov     bx, 35Eh ;~ 01A2:0872
cs=0x192;eip=0x000875; 	R(JMP(loc_1088e));	// 1179 jmp     short loc_1088E ;~ 01A2:0875
ret_1a2_877:
	// 4479 
cs=0x192;eip=0x000877; 	T(MOV(bx, 0x352));	// 1181 mov     bx, 352h ;~ 01A2:0877
cs=0x192;eip=0x00087a; 	R(JMP(loc_1088e));	// 1182 jmp     short loc_1088E ;~ 01A2:087A
ret_1a2_87c:
	// 4480 
cs=0x192;eip=0x00087c; 	T(MOV(bx, 0x346));	// 1184 mov     bx, 346h ;~ 01A2:087C
cs=0x192;eip=0x00087f; 	R(JMP(loc_1088e));	// 1185 jmp     short loc_1088E ;~ 01A2:087F
ret_1a2_881:
	// 4481 
cs=0x192;eip=0x000881; 	T(MOV(bx, 0x338));	// 1187 mov     bx, 338h ;~ 01A2:0881
cs=0x192;eip=0x000884; 	R(JMP(loc_1088e));	// 1188 jmp     short loc_1088E ;~ 01A2:0884
ret_1a2_886:
	// 4482 
cs=0x192;eip=0x000886; 	T(MOV(bx, 0x2F9));	// 1190 mov     bx, 2F9h ;~ 01A2:0886
cs=0x192;eip=0x000889; 	R(JMP(loc_1088e));	// 1191 jmp     short loc_1088E ;~ 01A2:0889
ret_1a2_88b:
	// 4483 
cs=0x192;eip=0x00088b; 	T(MOV(bx, 0x347));	// 1193 mov     bx, 347h ;~ 01A2:088B
loc_1088e:
	// 4484 
cs=0x192;eip=0x00088e; 	T(MOV(si, 0x1CF2));	// 1197 mov     si, 1CF2h ;~ 01A2:088E
cs=0x192;eip=0x000891; 	T(MOV(cl, 5));	// 1198 mov     cl, 5 ;~ 01A2:0891
cs=0x192;eip=0x000893; 	T(MOV(ch, 8));	// 1199 mov     ch, 8 ;~ 01A2:0893
cs=0x192;eip=0x000895; 	R(JMP(loc_109d1));	// 1200 jmp     loc_109D1 ;~ 01A2:0895
ret_1a2_898:
	// 4485 
cs=0x192;eip=0x000898; 	T(MOV(bx, 0x3CE));	// 1202 mov     bx, 3CEh ;~ 01A2:0898
cs=0x192;eip=0x00089b; 	R(JMP(loc_108b4));	// 1203 jmp     short loc_108B4 ;~ 01A2:089B
ret_1a2_89d:
	// 4486 
cs=0x192;eip=0x00089d; 	T(MOV(bx, 0x3D2));	// 1205 mov     bx, 3D2h ;~ 01A2:089D
cs=0x192;eip=0x0008a0; 	R(JMP(loc_108b4));	// 1206 jmp     short loc_108B4 ;~ 01A2:08A0
ret_1a2_8a2:
	// 4487 
cs=0x192;eip=0x0008a2; 	T(MOV(bx, 0x3D5));	// 1208 mov     bx, 3D5h ;~ 01A2:08A2
cs=0x192;eip=0x0008a5; 	R(JMP(loc_108b4));	// 1209 jmp     short loc_108B4 ;~ 01A2:08A5
ret_1a2_8a7:
	// 4488 
cs=0x192;eip=0x0008a7; 	T(MOV(bx, 0x3D5));	// 1211 mov     bx, 3D5h ;~ 01A2:08A7
cs=0x192;eip=0x0008aa; 	T(MOV(si, 0x1D81));	// 1212 mov     si, 1D81h ;~ 01A2:08AA
cs=0x192;eip=0x0008ad; 	T(MOV(cl, 5));	// 1213 mov     cl, 5 ;~ 01A2:08AD
cs=0x192;eip=0x0008af; 	R(JMP(loc_108b9));	// 1214 jmp     short loc_108B9 ;~ 01A2:08AF
ret_1a2_8b1:
	// 4489 
cs=0x192;eip=0x0008b1; 	T(MOV(bx, 0x3AD));	// 1216 mov     bx, 3ADh ;~ 01A2:08B1
loc_108b4:
	// 4490 
cs=0x192;eip=0x0008b4; 	T(MOV(si, 0x1D90));	// 1220 mov     si, 1D90h ;~ 01A2:08B4
loc_108b7:
	// 4491 
cs=0x192;eip=0x0008b7; 	T(MOV(cl, 2));	// 1223 mov     cl, 2 ;~ 01A2:08B7
loc_108b9:
	// 4492 
cs=0x192;eip=0x0008b9; 	T(MOV(ch, 3));	// 1226 mov     ch, 3 ;~ 01A2:08B9
cs=0x192;eip=0x0008bb; 	R(JMP(loc_109d1));	// 1227 jmp     loc_109D1 ;~ 01A2:08BB
ret_1a2_8be:
	// 4493 
cs=0x192;eip=0x0008be; 	T(MOV(bx, 0x331));	// 1229 mov     bx, 331h ;~ 01A2:08BE
loc_108c1:
	// 4494 
cs=0x192;eip=0x0008c1; 	T(MOV(si, 0x1D42));	// 1233 mov     si, 1D42h ;~ 01A2:08C1
cs=0x192;eip=0x0008c4; 	T(MOV(cl, 7));	// 1234 mov     cl, 7 ;~ 01A2:08C4
cs=0x192;eip=0x0008c6; 	T(MOV(ch, 9));	// 1235 mov     ch, 9 ;~ 01A2:08C6
cs=0x192;eip=0x0008c8; 	R(JMP(loc_109d1));	// 1236 jmp     loc_109D1 ;~ 01A2:08C8
ret_1a2_8cb:
	// 4495 
cs=0x192;eip=0x0008cb; 	T(MOV(bx, 0x53E));	// 1238 mov     bx, 53Eh ;~ 01A2:08CB
cs=0x192;eip=0x0008ce; 	R(JMP(loc_108d8));	// 1239 jmp     short loc_108D8 ;~ 01A2:08CE
ret_1a2_8d0:
	// 4496 
cs=0x192;eip=0x0008d0; 	T(MOV(bx, 0x535));	// 1241 mov     bx, 535h ;~ 01A2:08D0
cs=0x192;eip=0x0008d3; 	R(JMP(loc_108d8));	// 1242 jmp     short loc_108D8 ;~ 01A2:08D3
ret_1a2_8d5:
	// 4497 
cs=0x192;eip=0x0008d5; 	T(MOV(bx, 0x529));	// 1244 mov     bx, 529h ;~ 01A2:08D5
loc_108d8:
	// 4498 
cs=0x192;eip=0x0008d8; 	T(MOV(si, 0x1CC0));	// 1248 mov     si, 1CC0h ;~ 01A2:08D8
cs=0x192;eip=0x0008db; 	T(MOV(cl, 5));	// 1249 mov     cl, 5 ;~ 01A2:08DB
cs=0x192;eip=0x0008dd; 	T(MOV(ch, 0x0A));	// 1250 mov     ch, 0Ah ;~ 01A2:08DD
cs=0x192;eip=0x0008df; 	R(JMP(loc_109d1));	// 1251 jmp     loc_109D1 ;~ 01A2:08DF
ret_1a2_8e2:
	// 4499 
cs=0x192;eip=0x0008e2; 	T(MOV(bx, 0x326));	// 1253 mov     bx, 326h ;~ 01A2:08E2
cs=0x192;eip=0x0008e5; 	R(JMP(loc_108c1));	// 1254 jmp     short loc_108C1 ;~ 01A2:08E5
ret_1a2_8e7:
	// 4500 
cs=0x192;eip=0x0008e7; 	T(MOV(bx, 0x33B));	// 1256 mov     bx, 33Bh ;~ 01A2:08E7
cs=0x192;eip=0x0008ea; 	R(JMP(loc_108c1));	// 1257 jmp     short loc_108C1 ;~ 01A2:08EA
ret_1a2_8ec:
	// 4501 
cs=0x192;eip=0x0008ec; 	T(MOV(bx, 0x1BD6));	// 1259 mov     bx, 1BD6h ;~ 01A2:08EC
cs=0x192;eip=0x0008ef; 	T(MOV(al, 0x5C));	// 1260 mov     al, 5Ch ; '\' ;~ 01A2:08EF
cs=0x192;eip=0x0008f1; 	T(SUB(al, *(raddr(ds,bx))));	// 1261 sub     al, [bx] ;~ 01A2:08F1
cs=0x192;eip=0x0008f3; 	X(MOV(*(raddr(ds,m2c::kloc_11e7d+1)), al));	// 1262 mov     byte ptr loc_11E7D+1, al ;~ 01A2:08F3
cs=0x192;eip=0x0008f6; 	T(MOV(cx, 9));	// 1263 mov     cx, 9 ;~ 01A2:08F6
cs=0x192;eip=0x0008f9; 	T(MOV(si, 0x1E77));	// 1264 mov     si, 1E77h ;~ 01A2:08F9
cs=0x192;eip=0x0008fc; 	T(MOV(bx, 0x575));	// 1265 mov     bx, 575h ;~ 01A2:08FC
cs=0x192;eip=0x0008ff; 	R(CALL(sub_10bf7,0));	// 1266 call    sub_10BF7 ;~ 01A2:08FF
cs=0x192;eip=0x000902; 	X(POP(bx));	// 1267 pop     bx ;~ 01A2:0902
cs=0x192;eip=0x000903; 	T(DEC(bx));	// 1268 dec     bx ;~ 01A2:0903
loc_10904:
	// 4502 
cs=0x192;eip=0x000904; 	X(PUSH(bx));	// 1271 push    bx ;~ 01A2:0904
cs=0x192;eip=0x000905; 	T(MOV(bx, *(dw*)((byte_13c0d)+0x12B)));	// 1272 mov     bx, word ptr byte_13C0D+12Bh ;~ 01A2:0905
cs=0x192;eip=0x000909; __disp=bx;
	R(JMP(__dispatch_call));	// 1273 jmp     bx ;~ 01A2:0909
ret_1a2_90b:
	// 4503 
cs=0x192;eip=0x00090b; 	T(MOV(si, 0x1E80));	// 1275 mov     si, 1E80h ;~ 01A2:090B
cs=0x192;eip=0x00090e; 	T(MOV(cl, 5));	// 1276 mov     cl, 5 ;~ 01A2:090E
cs=0x192;eip=0x000910; 	T(MOV(ch, 4));	// 1277 mov     ch, 4 ;~ 01A2:0910
cs=0x192;eip=0x000912; 	T(MOV(bx, 0x537));	// 1278 mov     bx, 537h ;~ 01A2:0912
cs=0x192;eip=0x000915; 	R(JMP(loc_109d1));	// 1279 jmp     loc_109D1 ;~ 01A2:0915
ret_1a2_918:
	// 4504 
cs=0x192;eip=0x000918; 	T(MOV(si, 0x1E94));	// 1281 mov     si, 1E94h ;~ 01A2:0918
cs=0x192;eip=0x00091b; 	T(MOV(cl, 2));	// 1282 mov     cl, 2 ;~ 01A2:091B
cs=0x192;eip=0x00091d; 	T(MOV(ch, 3));	// 1283 mov     ch, 3 ;~ 01A2:091D
cs=0x192;eip=0x00091f; 	T(MOV(bx, 0x370));	// 1284 mov     bx, 370h ;~ 01A2:091F
cs=0x192;eip=0x000922; 	R(JMP(loc_109d1));	// 1285 jmp     loc_109D1 ;~ 01A2:0922
ret_1a2_925:
	// 4505 
cs=0x192;eip=0x000925; 	T(MOV(si, 0x1E9A));	// 1287 mov     si, 1E9Ah ;~ 01A2:0925
cs=0x192;eip=0x000928; 	T(MOV(cl, 2));	// 1288 mov     cl, 2 ;~ 01A2:0928
cs=0x192;eip=0x00092a; 	T(MOV(ch, 3));	// 1289 mov     ch, 3 ;~ 01A2:092A
cs=0x192;eip=0x00092c; 	T(MOV(bx, 0x379));	// 1290 mov     bx, 379h ;~ 01A2:092C
cs=0x192;eip=0x00092f; 	R(JMP(loc_109d1));	// 1291 jmp     loc_109D1 ;~ 01A2:092F
ret_1a2_932:
	// 4506 
cs=0x192;eip=0x000932; 	T(MOV(si, 0x1EA0));	// 1293 mov     si, 1EA0h ;~ 01A2:0932
cs=0x192;eip=0x000935; 	T(MOV(cl, 3));	// 1294 mov     cl, 3 ;~ 01A2:0935
cs=0x192;eip=0x000937; 	T(MOV(ch, 3));	// 1295 mov     ch, 3 ;~ 01A2:0937
cs=0x192;eip=0x000939; 	T(MOV(bx, 0x3D1));	// 1296 mov     bx, 3D1h ;~ 01A2:0939
cs=0x192;eip=0x00093c; 	R(JMP(loc_109d1));	// 1297 jmp     loc_109D1 ;~ 01A2:093C
ret_1a2_93f:
	// 4507 
cs=0x192;eip=0x00093f; 	T(MOV(si, 0x1EA9));	// 1299 mov     si, 1EA9h ;~ 01A2:093F
cs=0x192;eip=0x000942; 	T(MOV(cl, 3));	// 1300 mov     cl, 3 ;~ 01A2:0942
cs=0x192;eip=0x000944; 	T(MOV(ch, 3));	// 1301 mov     ch, 3 ;~ 01A2:0944
cs=0x192;eip=0x000946; 	T(MOV(bx, 0x3D7));	// 1302 mov     bx, 3D7h ;~ 01A2:0946
cs=0x192;eip=0x000949; 	R(JMP(loc_109d1));	// 1303 jmp     loc_109D1 ;~ 01A2:0949
ret_1a2_94c:
	// 4508 
cs=0x192;eip=0x00094c; 	T(MOV(si, 0x3B40));	// 1305 mov     si, 3B40h ;~ 01A2:094C
cs=0x192;eip=0x00094f; 	T(MOV(cl, 3));	// 1306 mov     cl, 3 ;~ 01A2:094F
cs=0x192;eip=0x000951; 	T(MOV(ch, 4));	// 1307 mov     ch, 4 ;~ 01A2:0951
cs=0x192;eip=0x000953; 	T(MOV(bx, 0x2D4));	// 1308 mov     bx, 2D4h ;~ 01A2:0953
cs=0x192;eip=0x000956; 	R(JMP(loc_109d1));	// 1309 jmp     short loc_109D1 ;~ 01A2:0956
ret_1a2_959:
	// 4509 
cs=0x192;eip=0x000959; 	T(MOV(si, 0x1EC1));	// 1313 mov     si, 1EC1h ;~ 01A2:0959
cs=0x192;eip=0x00095c; 	T(MOV(dl, 3));	// 1314 mov     dl, 3 ;~ 01A2:095C
cs=0x192;eip=0x00095e; 	T(MOV(ch, 2));	// 1315 mov     ch, 2 ;~ 01A2:095E
cs=0x192;eip=0x000960; 	R(JMP(loc_10984));	// 1316 jmp     short loc_10984 ;~ 01A2:0960
ret_1a2_962:
	// 4510 
cs=0x192;eip=0x000962; 	T(MOV(si, 0x1EB2));	// 1318 mov     si, 1EB2h ;~ 01A2:0962
cs=0x192;eip=0x000965; 	T(MOV(dl, 5));	// 1319 mov     dl, 5 ;~ 01A2:0965
cs=0x192;eip=0x000967; 	T(MOV(ch, 3));	// 1320 mov     ch, 3 ;~ 01A2:0967
cs=0x192;eip=0x000969; 	R(JMP(loc_10984));	// 1321 jmp     short loc_10984 ;~ 01A2:0969
ret_1a2_96b:
	// 4511 
cs=0x192;eip=0x00096b; 	T(MOV(si, 0x1EC7));	// 1323 mov     si, 1EC7h ;~ 01A2:096B
cs=0x192;eip=0x00096e; 	T(MOV(dl, 2));	// 1324 mov     dl, 2 ;~ 01A2:096E
cs=0x192;eip=0x000970; 	T(MOV(ch, 6));	// 1325 mov     ch, 6 ;~ 01A2:0970
cs=0x192;eip=0x000972; 	R(JMP(loc_10984));	// 1326 jmp     short loc_10984 ;~ 01A2:0972
ret_1a2_974:
	// 4512 
cs=0x192;eip=0x000974; 	T(MOV(si, 0x1ED3));	// 1328 mov     si, 1ED3h ;~ 01A2:0974
cs=0x192;eip=0x000977; 	T(MOV(dl, 2));	// 1329 mov     dl, 2 ;~ 01A2:0977
cs=0x192;eip=0x000979; 	T(MOV(ch, 6));	// 1330 mov     ch, 6 ;~ 01A2:0979
cs=0x192;eip=0x00097b; 	R(JMP(loc_10984));	// 1331 jmp     short loc_10984 ;~ 01A2:097B
ret_1a2_97d:
	// 4513 
cs=0x192;eip=0x00097d; 	T(MOV(si, 0x3B34));	// 1333 mov     si, 3B34h ;~ 01A2:097D
cs=0x192;eip=0x000980; 	T(MOV(dl, 6));	// 1334 mov     dl, 6 ;~ 01A2:0980
cs=0x192;eip=0x000982; 	T(MOV(ch, 1));	// 1335 mov     ch, 1 ;~ 01A2:0982
loc_10984:
	// 4514 
cs=0x192;eip=0x000984; 	X(POP(bx));	// 1339 pop     bx ;~ 01A2:0984
cs=0x192;eip=0x000985; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 1340 mov     ax, [bx] ;~ 01A2:0985
cs=0x192;eip=0x000987; 	T(INC(bx));	// 1341 inc     bx ;~ 01A2:0987
cs=0x192;eip=0x000988; 	X(PUSH(bx));	// 1342 push    bx ;~ 01A2:0988
cs=0x192;eip=0x000989; 	T(MOV(bx, ax));	// 1343 mov     bx, ax ;~ 01A2:0989
loc_1098b:
	// 4515 
cs=0x192;eip=0x00098b; 	X(PUSH(dx));	// 1346 push    dx ;~ 01A2:098B
cs=0x192;eip=0x00098c; 	X(PUSH(bx));	// 1347 push    bx ;~ 01A2:098C
loc_1098d:
	// 4516 
cs=0x192;eip=0x00098d; 	T(LODSB);	// 1350 lodsb ;~ 01A2:098D
cs=0x192;eip=0x00098e; 	X(MOV(*(raddr(ds,bx)), al));	// 1351 mov     [bx], al ;~ 01A2:098E
cs=0x192;eip=0x000990; 	T(INC(bx));	// 1352 inc     bx ;~ 01A2:0990
cs=0x192;eip=0x000991; 	T(DEC(dl));	// 1353 dec     dl ;~ 01A2:0991
cs=0x192;eip=0x000993; 	R(JNZ(loc_1098d));	// 1354 jnz     short loc_1098D ;~ 01A2:0993
cs=0x192;eip=0x000995; 	X(POP(bx));	// 1355 pop     bx ;~ 01A2:0995
cs=0x192;eip=0x000996; 	T(ADD(bx, 0x20));	// 1356 add     bx, 20h ; ' ' ;~ 01A2:0996
cs=0x192;eip=0x000999; 	X(POP(dx));	// 1357 pop     dx ;~ 01A2:0999
cs=0x192;eip=0x00099a; 	T(DEC(ch));	// 1358 dec     ch ;~ 01A2:099A
cs=0x192;eip=0x00099c; 	R(JNZ(loc_1098b));	// 1359 jnz     short loc_1098B ;~ 01A2:099C
cs=0x192;eip=0x00099e; 	T(MOV(bx, *(dw*)((byte_13c0d)+0x12B)));	// 1360 mov     bx, word ptr byte_13C0D+12Bh ;~ 01A2:099E
cs=0x192;eip=0x0009a2; __disp=bx;
	R(JMP(__dispatch_call));	// 1361 jmp     bx ;~ 01A2:09A2
ret_1a2_9a4:
	// 4517 
cs=0x192;eip=0x0009a4; 	T(MOV(si, 0x1EE8));	// 1363 mov     si, 1EE8h ;~ 01A2:09A4
cs=0x192;eip=0x0009a7; 	T(MOV(cl, 2));	// 1364 mov     cl, 2 ;~ 01A2:09A7
cs=0x192;eip=0x0009a9; 	T(MOV(ch, 2));	// 1365 mov     ch, 2 ;~ 01A2:09A9
cs=0x192;eip=0x0009ab; 	T(MOV(bx, 0x695));	// 1366 mov     bx, 695h ;~ 01A2:09AB
cs=0x192;eip=0x0009ae; 	R(JMP(loc_109d1));	// 1367 jmp     short loc_109D1 ;~ 01A2:09AE
ret_1a2_9b0:
	// 4518 
cs=0x192;eip=0x0009b0; 	X(MOV(byte_11bdc, 0));	// 1369 mov     byte_11BDC, 0 ;~ 01A2:09B0
cs=0x192;eip=0x0009b5; 	T(MOV(si, 0x1EDF));	// 1370 mov     si, 1EDFh ;~ 01A2:09B5
cs=0x192;eip=0x0009b8; 	T(MOV(cl, 3));	// 1371 mov     cl, 3 ;~ 01A2:09B8
cs=0x192;eip=0x0009ba; 	T(MOV(ch, 3));	// 1372 mov     ch, 3 ;~ 01A2:09BA
cs=0x192;eip=0x0009bc; 	T(MOV(bx, 0x618));	// 1373 mov     bx, 618h ;~ 01A2:09BC
cs=0x192;eip=0x0009bf; 	R(JMP(loc_109d1));	// 1374 jmp     short loc_109D1 ;~ 01A2:09BF
ret_1a2_9c1:
	// 4519 
cs=0x192;eip=0x0009c1; 	T(MOV(bx, 0x29D));	// 1376 mov     bx, 29Dh ;~ 01A2:09C1
cs=0x192;eip=0x0009c4; 	T(MOV(al, *(raddr(ds,bx))));	// 1377 mov     al, [bx] ;~ 01A2:09C4
cs=0x192;eip=0x0009c6; 	T(DEC(al));	// 1378 dec     al ;~ 01A2:09C6
cs=0x192;eip=0x0009c8; 	R(JNZ(loc_109e4));	// 1379 jnz     short loc_109E4 ;~ 01A2:09C8
cs=0x192;eip=0x0009ca; 	T(MOV(si, 0x1EEC));	// 1380 mov     si, 1EECh ;~ 01A2:09CA
cs=0x192;eip=0x0009cd; 	T(MOV(cl, 2));	// 1381 mov     cl, 2 ;~ 01A2:09CD
cs=0x192;eip=0x0009cf; 	T(MOV(ch, 2));	// 1382 mov     ch, 2 ;~ 01A2:09CF
loc_109d1:
	// 4520 
cs=0x192;eip=0x0009d1; 	X(PUSH(cx));	// 1386 push    cx ;~ 01A2:09D1
cs=0x192;eip=0x0009d2; 	X(PUSH(bx));	// 1387 push    bx ;~ 01A2:09D2
cs=0x192;eip=0x0009d3; 	T(MOV(ch, 0));	// 1388 mov     ch, 0 ;~ 01A2:09D3
loc_109d5:
	// 4521 
cs=0x192;eip=0x0009d5; 	T(LODSB);	// 1391 lodsb ;~ 01A2:09D5
cs=0x192;eip=0x0009d6; 	X(MOV(*(raddr(ds,bx)), al));	// 1392 mov     [bx], al ;~ 01A2:09D6
cs=0x192;eip=0x0009d8; 	T(INC(bx));	// 1393 inc     bx ;~ 01A2:09D8
cs=0x192;eip=0x0009d9; 	R(LOOP(loc_109d5));	// 1394 loop    loc_109D5 ;~ 01A2:09D9
cs=0x192;eip=0x0009db; 	X(POP(bx));	// 1395 pop     bx ;~ 01A2:09DB
cs=0x192;eip=0x0009dc; 	T(ADD(bx, 0x20));	// 1396 add     bx, 20h ; ' ' ;~ 01A2:09DC
cs=0x192;eip=0x0009df; 	X(POP(cx));	// 1397 pop     cx ;~ 01A2:09DF
cs=0x192;eip=0x0009e0; 	T(DEC(ch));	// 1398 dec     ch ;~ 01A2:09E0
cs=0x192;eip=0x0009e2; 	R(JNZ(loc_109d1));	// 1399 jnz     short loc_109D1 ;~ 01A2:09E2
loc_109e4:
	// 4522 
cs=0x192;eip=0x0009e4; 	X(POP(bx));	// 1403 pop     bx ;~ 01A2:09E4
cs=0x192;eip=0x0009e5; 	T(DEC(bx));	// 1404 dec     bx ;~ 01A2:09E5
cs=0x192;eip=0x0009e6; 	X(PUSH(bx));	// 1405 push    bx ;~ 01A2:09E6
cs=0x192;eip=0x0009e7; 	T(MOV(bx, *(dw*)((byte_13c0d)+0x12B)));	// 1406 mov     bx, word ptr byte_13C0D+12Bh ;~ 01A2:09E7
cs=0x192;eip=0x0009eb; __disp=bx;
	R(JMP(__dispatch_call));	// 1407 jmp     bx ;~ 01A2:09EB
ret_1a2_9ed:
	// 4523 
cs=0x192;eip=0x0009ed; 	T(MOV(si, 0x1D1A));	// 1409 mov     si, 1D1Ah ;~ 01A2:09ED
cs=0x192;eip=0x0009f0; 	T(MOV(cl, 5));	// 1410 mov     cl, 5 ;~ 01A2:09F0
cs=0x192;eip=0x0009f2; 	T(MOV(ch, 8));	// 1411 mov     ch, 8 ;~ 01A2:09F2
cs=0x192;eip=0x0009f4; 	T(MOV(bx, 0x358));	// 1412 mov     bx, 358h ;~ 01A2:09F4
cs=0x192;eip=0x0009f7; 	R(JMP(loc_109d1));	// 1413 jmp     short loc_109D1 ;~ 01A2:09F7
ret_1a2_9f9:
	// 4524 
cs=0x192;eip=0x0009f9; 	T(MOV(bx, 0x5CB));	// 1415 mov     bx, 5CBh ;~ 01A2:09F9
cs=0x192;eip=0x0009fc; 	R(JMP(loc_10a3f));	// 1416 jmp     short loc_10A3F ;~ 01A2:09FC
ret_1a2_9fe:
	// 4525 
cs=0x192;eip=0x0009fe; 	T(MOV(bx, 0x60E));	// 1418 mov     bx, 60Eh ;~ 01A2:09FE
cs=0x192;eip=0x000a01; 	R(JMP(loc_10a33));	// 1419 jmp     short loc_10A33 ;~ 01A2:0A01
ret_1a2_a03:
	// 4526 
cs=0x192;eip=0x000a03; 	T(MOV(bx, 0x4AB));	// 1421 mov     bx, 4ABh ;~ 01A2:0A03
cs=0x192;eip=0x000a06; 	R(JMP(loc_10a1f));	// 1422 jmp     short loc_10A1F ;~ 01A2:0A06
ret_1a2_a08:
	// 4527 
cs=0x192;eip=0x000a08; 	T(MOV(bx, 0x5A5));	// 1424 mov     bx, 5A5h ;~ 01A2:0A08
cs=0x192;eip=0x000a0b; 	R(JMP(loc_10a3f));	// 1425 jmp     short loc_10A3F ;~ 01A2:0A0B
ret_1a2_a0d:
	// 4528 
cs=0x192;eip=0x000a0d; 	T(MOV(bx, 0x4A5));	// 1427 mov     bx, 4A5h ;~ 01A2:0A0D
cs=0x192;eip=0x000a10; 	R(JMP(loc_10a1f));	// 1428 jmp     short loc_10A1F ;~ 01A2:0A10
ret_1a2_a12:
	// 4529 
cs=0x192;eip=0x000a12; 	T(MOV(bx, 0x593));	// 1430 mov     bx, 593h ;~ 01A2:0A12
cs=0x192;eip=0x000a15; 	R(JMP(loc_10a3f));	// 1431 jmp     short loc_10A3F ;~ 01A2:0A15
ret_1a2_a17:
	// 4530 
cs=0x192;eip=0x000a17; 	T(MOV(bx, 0x585));	// 1433 mov     bx, 585h ;~ 01A2:0A17
cs=0x192;eip=0x000a1a; 	R(JMP(loc_10a3f));	// 1434 jmp     short loc_10A3F ;~ 01A2:0A1A
ret_1a2_a1c:
	// 4531 
cs=0x192;eip=0x000a1c; 	T(MOV(bx, 0x597));	// 1436 mov     bx, 597h ;~ 01A2:0A1C
loc_10a1f:
	// 4532 
cs=0x192;eip=0x000a1f; 	T(MOV(cl, 0x0A));	// 1440 mov     cl, 0Ah ;~ 01A2:0A1F
cs=0x192;eip=0x000a21; 	T(MOV(si, 0x1FF8));	// 1441 mov     si, 1FF8h ;~ 01A2:0A21
cs=0x192;eip=0x000a24; 	R(JMP(loc_10a44));	// 1442 jmp     short loc_10A44 ;~ 01A2:0A24
ret_1a2_a26:
	// 4533 
cs=0x192;eip=0x000a26; 	T(MOV(bx, 0x596));	// 1444 mov     bx, 596h ;~ 01A2:0A26
cs=0x192;eip=0x000a29; 	R(JMP(loc_10a3f));	// 1445 jmp     short loc_10A3F ;~ 01A2:0A29
ret_1a2_a2b:
	// 4534 
cs=0x192;eip=0x000a2b; 	T(MOV(bx, 0x587));	// 1447 mov     bx, 587h ;~ 01A2:0A2B
cs=0x192;eip=0x000a2e; 	R(JMP(loc_10a3f));	// 1448 jmp     short loc_10A3F ;~ 01A2:0A2E
ret_1a2_a30:
	// 4535 
cs=0x192;eip=0x000a30; 	T(MOV(bx, 0x5ED));	// 1450 mov     bx, 5EDh ;~ 01A2:0A30
loc_10a33:
	// 4536 
cs=0x192;eip=0x000a33; 	T(MOV(cl, 8));	// 1453 mov     cl, 8 ;~ 01A2:0A33
cs=0x192;eip=0x000a35; 	T(MOV(si, 0x1EF0));	// 1454 mov     si, 1EF0h ;~ 01A2:0A35
cs=0x192;eip=0x000a38; 	T(MOV(ch, 4));	// 1455 mov     ch, 4 ;~ 01A2:0A38
cs=0x192;eip=0x000a3a; 	R(JMP(loc_109d1));	// 1456 jmp     short loc_109D1 ;~ 01A2:0A3A
ret_1a2_a3c:
	// 4537 
cs=0x192;eip=0x000a3c; 	T(MOV(bx, 0x5AE));	// 1458 mov     bx, 5AEh ;~ 01A2:0A3C
loc_10a3f:
	// 4538 
cs=0x192;eip=0x000a3f; 	T(MOV(cl, 0x0B));	// 1462 mov     cl, 0Bh ;~ 01A2:0A3F
cs=0x192;eip=0x000a41; 	T(MOV(si, 0x1FAB));	// 1463 mov     si, 1FABh ;~ 01A2:0A41
loc_10a44:
	// 4539 
cs=0x192;eip=0x000a44; 	T(MOV(ch, 7));	// 1466 mov     ch, 7 ;~ 01A2:0A44
cs=0x192;eip=0x000a46; 	R(JMP(loc_109d1));	// 1467 jmp     short loc_109D1 ;~ 01A2:0A46
ret_1a2_a48:
	// 4540 
cs=0x192;eip=0x000a48; 	T(MOV(si, 0x1F93));	// 1469 mov     si, 1F93h ;~ 01A2:0A48
cs=0x192;eip=0x000a4b; 	T(MOV(cl, 6));	// 1470 mov     cl, 6 ;~ 01A2:0A4B
cs=0x192;eip=0x000a4d; 	T(MOV(ch, 4));	// 1471 mov     ch, 4 ;~ 01A2:0A4D
cs=0x192;eip=0x000a4f; 	T(MOV(bx, 0x61C));	// 1472 mov     bx, 61Ch ;~ 01A2:0A4F
cs=0x192;eip=0x000a52; 	R(JMP(loc_109d1));	// 1473 jmp     loc_109D1 ;~ 01A2:0A52
ret_1a2_a55:
	// 4541 
cs=0x192;eip=0x000a55; 	T(MOV(al, byte_11bc8));	// 1475 mov     al, byte_11BC8 ;~ 01A2:0A55
cs=0x192;eip=0x000a58; 	T(INC(al));	// 1476 inc     al ;~ 01A2:0A58
cs=0x192;eip=0x000a5a; 	R(JNZ(loc_10a75));	// 1477 jnz     short loc_10A75 ;~ 01A2:0A5A
cs=0x192;eip=0x000a5c; 	T(MOV(si, 0x1F25));	// 1478 mov     si, 1F25h ;~ 01A2:0A5C
cs=0x192;eip=0x000a5f; 	T(MOV(cl, 0x0B));	// 1479 mov     cl, 0Bh ;~ 01A2:0A5F
cs=0x192;eip=0x000a61; 	T(MOV(ch, 5));	// 1480 mov     ch, 5 ;~ 01A2:0A61
cs=0x192;eip=0x000a63; 	T(MOV(bx, 0x5D0));	// 1481 mov     bx, 5D0h ;~ 01A2:0A63
cs=0x192;eip=0x000a66; 	R(JMP(loc_109d1));	// 1482 jmp     loc_109D1 ;~ 01A2:0A66
ret_1a2_a69:
	// 4542 
cs=0x192;eip=0x000a69; 	T(MOV(al, byte_11bc8));	// 1484 mov     al, byte_11BC8 ;~ 01A2:0A69
cs=0x192;eip=0x000a6c; 	T(CMP(al, 0x0FE));	// 1485 cmp     al, 0FEh ; 'ş' ;~ 01A2:0A6C
cs=0x192;eip=0x000a6e; 	R(JNZ(loc_10a75));	// 1486 jnz     short loc_10A75 ;~ 01A2:0A6E
cs=0x192;eip=0x000a70; 	X(MOV(byte_11bc8, 0x10));	// 1487 mov     byte_11BC8, 10h ;~ 01A2:0A70
loc_10a75:
	// 4543 
cs=0x192;eip=0x000a75; 	R(JMP(loc_109e4));	// 1491 jmp     loc_109E4 ;~ 01A2:0A75
ret_1a2_a78:
	// 4544 
cs=0x192;eip=0x000a78; 	T(MOV(bx, 0x5E8));	// 1493 mov     bx, 5E8h ;~ 01A2:0A78
loc_10a7b:
	// 4545 
cs=0x192;eip=0x000a7b; 	T(MOV(si, 0x1F10));	// 1496 mov     si, 1F10h ;~ 01A2:0A7B
cs=0x192;eip=0x000a7e; 	T(MOV(cl, 4));	// 1497 mov     cl, 4 ;~ 01A2:0A7E
cs=0x192;eip=0x000a80; 	T(MOV(ch, 4));	// 1498 mov     ch, 4 ;~ 01A2:0A80
cs=0x192;eip=0x000a82; 	R(JMP(loc_109d1));	// 1499 jmp     loc_109D1 ;~ 01A2:0A82
ret_1a2_a85:
	// 4546 
cs=0x192;eip=0x000a85; 	T(MOV(bx, 0x427));	// 1501 mov     bx, 427h ;~ 01A2:0A85
loc_10a88:
	// 4547 
cs=0x192;eip=0x000a88; 	T(MOV(si, 0x1F20));	// 1504 mov     si, 1F20h ;~ 01A2:0A88
cs=0x192;eip=0x000a8b; 	T(MOV(cl, 5));	// 1505 mov     cl, 5 ;~ 01A2:0A8B
cs=0x192;eip=0x000a8d; 	T(MOV(ch, 1));	// 1506 mov     ch, 1 ;~ 01A2:0A8D
cs=0x192;eip=0x000a8f; 	R(JMP(loc_109d1));	// 1507 jmp     loc_109D1 ;~ 01A2:0A8F
ret_1a2_a92:
	// 4548 
cs=0x192;eip=0x000a92; 	T(MOV(bx, 0x414));	// 1509 mov     bx, 414h ;~ 01A2:0A92
cs=0x192;eip=0x000a95; 	R(JMP(loc_10a88));	// 1510 jmp     short loc_10A88 ;~ 01A2:0A95
ret_1a2_a97:
	// 4549 
cs=0x192;eip=0x000a97; 	T(MOV(bx, 0x5D5));	// 1512 mov     bx, 5D5h ;~ 01A2:0A97
cs=0x192;eip=0x000a9a; 	R(JMP(loc_10a7b));	// 1513 jmp     short loc_10A7B ;~ 01A2:0A9A
ret_1a2_a9c:
	// 4550 
cs=0x192;eip=0x000a9c; 	X(MOV(byte_11bd8, 0x5A));	// 1515 mov     byte_11BD8, 5Ah ; 'Z' ;~ 01A2:0A9C
cs=0x192;eip=0x000aa1; 	R(JMP(loc_109e4));	// 1516 jmp     loc_109E4 ;~ 01A2:0AA1
ret_1a2_aa4:
	// 4551 
cs=0x192;eip=0x000aa4; 	T(MOV(al, 1));	// 1518 mov     al, 1 ;~ 01A2:0AA4
cs=0x192;eip=0x000aa6; 	R(JMP(loc_10aae));	// 1519 jmp     short loc_10AAE ;~ 01A2:0AA6
ret_1a2_aa8:
	// 4552 
cs=0x192;eip=0x000aa8; 	T(MOV(al, 2));	// 1521 mov     al, 2 ;~ 01A2:0AA8
cs=0x192;eip=0x000aaa; 	R(JMP(loc_10aae));	// 1522 jmp     short loc_10AAE ;~ 01A2:0AAA
ret_1a2_aac:
	// 4553 
cs=0x192;eip=0x000aac; 	T(MOV(al, 3));	// 1524 mov     al, 3 ;~ 01A2:0AAC
loc_10aae:
	// 4554 
cs=0x192;eip=0x000aae; 	X(MOV(*(asc_13d3c), al));	// 1528 mov     byte ptr asc_13D3C, al ; "~``~" ;~ 01A2:0AAE
cs=0x192;eip=0x000ab1; 	R(JMP(loc_10ab8));	// 1529 jmp     short loc_10AB8 ;~ 01A2:0AB1
ret_1a2_ab3:
	// 4555 
cs=0x192;eip=0x000ab3; 	T(XOR(al, al));	// 1531 xor     al, al ;~ 01A2:0AB3
loc_10ab5:
	// 4556 
cs=0x192;eip=0x000ab5; 	X(MOV(byte_11bda, al));	// 1534 mov     byte_11BDA, al ;~ 01A2:0AB5
loc_10ab8:
	// 4557 
cs=0x192;eip=0x000ab8; 	R(JMP(loc_109e4));	// 1537 jmp     loc_109E4 ;~ 01A2:0AB8
ret_1a2_abb:
	// 4558 
cs=0x192;eip=0x000abb; 	T(MOV(al, 0x77));	// 1539 mov     al, 77h ; 'w' ;~ 01A2:0ABB
cs=0x192;eip=0x000abd; 	R(JMP(loc_10ab5));	// 1540 jmp     short loc_10AB5 ;~ 01A2:0ABD
ret_1a2_abf:
	// 4559 
cs=0x192;eip=0x000abf; 	X(POP(bx));	// 1542 pop     bx ;~ 01A2:0ABF
cs=0x192;eip=0x000ac0; 	T(MOV(al, *(raddr(ds,bx))));	// 1543 mov     al, [bx] ;~ 01A2:0AC0
cs=0x192;eip=0x000ac2; 	X(PUSH(bx));	// 1544 push    bx ;~ 01A2:0AC2
cs=0x192;eip=0x000ac3; 	T(MOV(ah, al));	// 1545 mov     ah, al ;~ 01A2:0AC3
cs=0x192;eip=0x000ac5; 	T(MOV(di, 0x244));	// 1546 mov     di, 244h ;~ 01A2:0AC5
cs=0x192;eip=0x000ac8; 	T(MOV(cx, 0x120));	// 1547 mov     cx, 120h ;~ 01A2:0AC8
	// 1548 rep stosw ;~ 01A2:0ACB
cs=0x192;eip=0x000acb; 	X(	REP STOSW);	// 1548 rep stosw ;~ 01A2:0ACB
loc_10acd:
	// 4560 
cs=0x192;eip=0x000acd; 	T(MOV(bx, *(dw*)((byte_13c0d)+0x12B)));	// 1552 mov     bx, word ptr byte_13C0D+12Bh ;~ 01A2:0ACD
cs=0x192;eip=0x000ad1; __disp=bx;
	R(JMP(__dispatch_call));	// 1553 jmp     bx ;~ 01A2:0AD1
ret_1a2_ad3:
	// 4561 
cs=0x192;eip=0x000ad3; 	X(POP(bx));	// 1555 pop     bx ;~ 01A2:0AD3
cs=0x192;eip=0x000ad4; 	T(MOV(al, *(raddr(ds,bx))));	// 1556 mov     al, [bx] ;~ 01A2:0AD4
cs=0x192;eip=0x000ad6; 	T(INC(bx));	// 1557 inc     bx ;~ 01A2:0AD6
cs=0x192;eip=0x000ad7; 	T(MOV(di, *(dw*)(raddr(ds,bx))));	// 1558 mov     di, [bx] ;~ 01A2:0AD7
cs=0x192;eip=0x000ad9; 	T(INC(bx));	// 1559 inc     bx ;~ 01A2:0AD9
cs=0x192;eip=0x000ada; 	X(PUSH(bx));	// 1560 push    bx ;~ 01A2:0ADA
cs=0x192;eip=0x000adb; 	X(MOV(*(raddr(ds,di)), al));	// 1561 mov     [di], al ;~ 01A2:0ADB
cs=0x192;eip=0x000add; 	R(JMP(loc_10acd));	// 1562 jmp     short loc_10ACD ;~ 01A2:0ADD
ret_1a2_adf:
	// 4562 
cs=0x192;eip=0x000adf; 	T(MOV(al, 0x0CA));	// 1564 mov     al, 0CAh ; 'Ê' ;~ 01A2:0ADF
cs=0x192;eip=0x000ae1; 	X(POP(bx));	// 1565 pop     bx ;~ 01A2:0AE1
cs=0x192;eip=0x000ae2; 	T(MOV(di, *(dw*)(raddr(ds,bx))));	// 1566 mov     di, [bx] ;~ 01A2:0AE2
cs=0x192;eip=0x000ae4; 	T(INC(bx));	// 1567 inc     bx ;~ 01A2:0AE4
cs=0x192;eip=0x000ae5; 	X(PUSH(bx));	// 1568 push    bx ;~ 01A2:0AE5
cs=0x192;eip=0x000ae6; 	X(MOV(*(raddr(ds,di)), al));	// 1569 mov     [di], al ;~ 01A2:0AE6
cs=0x192;eip=0x000ae8; 	T(INC(di));	// 1570 inc     di ;~ 01A2:0AE8
cs=0x192;eip=0x000ae9; 	T(INC(al));	// 1571 inc     al ;~ 01A2:0AE9
cs=0x192;eip=0x000aeb; 	X(MOV(*(raddr(ds,di)), al));	// 1572 mov     [di], al ;~ 01A2:0AEB
cs=0x192;eip=0x000aed; 	R(JMP(loc_10acd));	// 1573 jmp     short loc_10ACD ;~ 01A2:0AED
ret_1a2_aef:
	// 4563 
cs=0x192;eip=0x000aef; 	T(MOV(dx, 1));	// 1575 mov     dx, 1 ;~ 01A2:0AEF
cs=0x192;eip=0x000af2; 	R(JMP(loc_10b06));	// 1576 jmp     short loc_10B06 ;~ 01A2:0AF2
ret_1a2_af4:
	// 4564 
cs=0x192;eip=0x000af4; 	X(POP(bx));	// 1578 pop     bx ;~ 01A2:0AF4
cs=0x192;eip=0x000af5; 	T(MOV(bx, 0x207D));	// 1579 mov     bx, 207Dh ;~ 01A2:0AF5
cs=0x192;eip=0x000af8; 	X(PUSH(bx));	// 1580 push    bx ;~ 01A2:0AF8
cs=0x192;eip=0x000af9; 	T(MOV(dx, 0x21));	// 1581 mov     dx, 21h ; '!' ;~ 01A2:0AF9
cs=0x192;eip=0x000afc; 	R(JMP(loc_10b06));	// 1582 jmp     short loc_10B06 ;~ 01A2:0AFC
ret_1a2_afe:
	// 4565 
cs=0x192;eip=0x000afe; 	T(MOV(dx, 0x1F));	// 1584 mov     dx, 1Fh ;~ 01A2:0AFE
cs=0x192;eip=0x000b01; 	R(JMP(loc_10b06));	// 1585 jmp     short loc_10B06 ;~ 01A2:0B01
ret_1a2_b03:
	// 4566 
cs=0x192;eip=0x000b03; 	T(MOV(dx, 0x20));	// 1587 mov     dx, 20h ; ' ' ;~ 01A2:0B03
loc_10b06:
	// 4567 
cs=0x192;eip=0x000b06; 	X(POP(bx));	// 1591 pop     bx ;~ 01A2:0B06
cs=0x192;eip=0x000b07; 	T(MOV(cl, *(raddr(ds,bx))));	// 1592 mov     cl, [bx] ;~ 01A2:0B07
cs=0x192;eip=0x000b09; 	T(INC(bx));	// 1593 inc     bx ;~ 01A2:0B09
cs=0x192;eip=0x000b0a; 	T(MOV(al, *(raddr(ds,bx))));	// 1594 mov     al, [bx] ;~ 01A2:0B0A
cs=0x192;eip=0x000b0c; 	T(INC(bx));	// 1595 inc     bx ;~ 01A2:0B0C
cs=0x192;eip=0x000b0d; 	T(MOV(di, *(dw*)(raddr(ds,bx))));	// 1596 mov     di, [bx] ;~ 01A2:0B0D
cs=0x192;eip=0x000b0f; 	T(INC(bx));	// 1597 inc     bx ;~ 01A2:0B0F
cs=0x192;eip=0x000b10; 	X(PUSH(bx));	// 1598 push    bx ;~ 01A2:0B10
cs=0x192;eip=0x000b11; 	T(MOV(ch, 0));	// 1599 mov     ch, 0 ;~ 01A2:0B11
cs=0x192;eip=0x000b13; 	T(OR(cl, cl));	// 1600 or      cl, cl ;~ 01A2:0B13
cs=0x192;eip=0x000b15; 	R(JNZ(loc_10b19));	// 1601 jnz     short loc_10B19 ;~ 01A2:0B15
cs=0x192;eip=0x000b17; 	T(INC(ch));	// 1602 inc     ch ;~ 01A2:0B17
loc_10b19:
	// 4568 
cs=0x192;eip=0x000b19; 	X(MOV(*(raddr(ds,di)), al));	// 1606 mov     [di], al ;~ 01A2:0B19
cs=0x192;eip=0x000b1b; 	T(ADD(di, dx));	// 1607 add     di, dx ;~ 01A2:0B1B
cs=0x192;eip=0x000b1d; 	R(LOOP(loc_10b19));	// 1608 loop    loc_10B19 ;~ 01A2:0B1D
cs=0x192;eip=0x000b1f; 	R(JMP(loc_10acd));	// 1609 jmp     short loc_10ACD ;~ 01A2:0B1F
ret_1a2_b21:
	// 4569 
cs=0x192;eip=0x000b21; 	T(MOV(cl, 0x2C));	// 1611 mov     cl, 2Ch ; ',' ;~ 01A2:0B21
cs=0x192;eip=0x000b23; 	R(JMP(loc_10b2f));	// 1612 jmp     short loc_10B2F ;~ 01A2:0B23
ret_1a2_b25:
	// 4570 
cs=0x192;eip=0x000b25; 	T(MOV(cl, 9));	// 1614 mov     cl, 9 ;~ 01A2:0B25
cs=0x192;eip=0x000b27; 	R(JMP(loc_10b2f));	// 1615 jmp     short loc_10B2F ;~ 01A2:0B27
ret_1a2_b29:
	// 4571 
cs=0x192;eip=0x000b29; 	T(MOV(cl, 0x25));	// 1617 mov     cl, 25h ; '%' ;~ 01A2:0B29
cs=0x192;eip=0x000b2b; 	R(JMP(loc_10b2f));	// 1618 jmp     short loc_10B2F ;~ 01A2:0B2B
ret_1a2_b2d:
	// 4572 
cs=0x192;eip=0x000b2d; 	T(MOV(cl, 5));	// 1620 mov     cl, 5 ;~ 01A2:0B2D
loc_10b2f:
	// 4573 
cs=0x192;eip=0x000b2f; 	X(POP(bx));	// 1624 pop     bx ;~ 01A2:0B2F
cs=0x192;eip=0x000b30; 	T(MOV(al, cl));	// 1625 mov     al, cl ;~ 01A2:0B30
cs=0x192;eip=0x000b32; 	T(MOV(cl, *(raddr(ds,bx))));	// 1626 mov     cl, [bx] ;~ 01A2:0B32
cs=0x192;eip=0x000b34; 	T(INC(bx));	// 1627 inc     bx ;~ 01A2:0B34
cs=0x192;eip=0x000b35; 	T(MOV(di, *(dw*)(raddr(ds,bx))));	// 1628 mov     di, [bx] ;~ 01A2:0B35
cs=0x192;eip=0x000b37; 	T(INC(bx));	// 1629 inc     bx ;~ 01A2:0B37
cs=0x192;eip=0x000b38; 	X(PUSH(bx));	// 1630 push    bx ;~ 01A2:0B38
cs=0x192;eip=0x000b39; 	T(MOV(ch, 0));	// 1631 mov     ch, 0 ;~ 01A2:0B39
cs=0x192;eip=0x000b3b; 	T(MOV(ah, al));	// 1632 mov     ah, al ;~ 01A2:0B3B
cs=0x192;eip=0x000b3d; 	T(INC(ah));	// 1633 inc     ah ;~ 01A2:0B3D
loc_10b3f:
	// 4574 
cs=0x192;eip=0x000b3f; 	X(STOSW);	// 1636 stosw ;~ 01A2:0B3F
cs=0x192;eip=0x000b40; 	T(ADD(di, 0x1E));	// 1637 add     di, 1Eh ;~ 01A2:0B40
loc_10b43:
	// 4575 
cs=0x192;eip=0x000b43; 	R(LOOP(loc_10b3f));	// 1640 loop    loc_10B3F ;~ 01A2:0B43
cs=0x192;eip=0x000b45; 	R(JMP(loc_10acd));	// 1641 jmp     short loc_10ACD ;~ 01A2:0B45
ret_1a2_b47:
	// 4576 
cs=0x192;eip=0x000b47; 	T(MOV(di, 0x244));	// 1643 mov     di, 244h ;~ 01A2:0B47
cs=0x192;eip=0x000b4a; 	T(MOV(ch, 3));	// 1644 mov     ch, 3 ;~ 01A2:0B4A
loc_10b4c:
	// 4577 
cs=0x192;eip=0x000b4c; 	T(MOV(cl, 4));	// 1647 mov     cl, 4 ;~ 01A2:0B4C
loc_10b4e:
	// 4578 
cs=0x192;eip=0x000b4e; 	X(POP(bx));	// 1650 pop     bx ;~ 01A2:0B4E
cs=0x192;eip=0x000b4f; 	T(MOV(al, *(raddr(ds,bx))));	// 1651 mov     al, [bx] ;~ 01A2:0B4F
cs=0x192;eip=0x000b51; 	T(INC(bx));	// 1652 inc     bx ;~ 01A2:0B51
cs=0x192;eip=0x000b52; 	X(PUSH(bx));	// 1653 push    bx ;~ 01A2:0B52
cs=0x192;eip=0x000b53; 	X(PUSH(di));	// 1654 push    di ;~ 01A2:0B53
cs=0x192;eip=0x000b54; 	T(MOV(ah, 0));	// 1655 mov     ah, 0 ;~ 01A2:0B54
cs=0x192;eip=0x000b56; 	T(MOV(bx, 0x2081));	// 1656 mov     bx, 2081h ;~ 01A2:0B56
cs=0x192;eip=0x000b59; 	T(ADD(bx, ax));	// 1657 add     bx, ax ;~ 01A2:0B59
cs=0x192;eip=0x000b5b; 	T(ADD(bx, ax));	// 1658 add     bx, ax ;~ 01A2:0B5B
cs=0x192;eip=0x000b5d; 	T(MOV(si, *(dw*)(raddr(ds,bx))));	// 1659 mov     si, [bx] ;~ 01A2:0B5D
cs=0x192;eip=0x000b5f; 	X(PUSH(cx));	// 1660 push    cx ;~ 01A2:0B5F
cs=0x192;eip=0x000b60; 	T(MOV(cx, 6));	// 1661 mov     cx, 6 ;~ 01A2:0B60
loc_10b63:
	// 4579 
cs=0x192;eip=0x000b63; 	X(PUSH(cx));	// 1664 push    cx ;~ 01A2:0B63
cs=0x192;eip=0x000b64; 	T(MOV(cx, 4));	// 1665 mov     cx, 4 ;~ 01A2:0B64
	// 1666 rep movsw ;~ 01A2:0B67
cs=0x192;eip=0x000b67; 	X(	REP MOVSW);	// 1666 rep movsw ;~ 01A2:0B67
cs=0x192;eip=0x000b69; 	T(ADD(di, 0x18));	// 1667 add     di, 18h ;~ 01A2:0B69
cs=0x192;eip=0x000b6c; 	X(POP(cx));	// 1668 pop     cx ;~ 01A2:0B6C
cs=0x192;eip=0x000b6d; 	R(LOOP(loc_10b63));	// 1669 loop    loc_10B63 ;~ 01A2:0B6D
cs=0x192;eip=0x000b6f; 	X(POP(cx));	// 1670 pop     cx ;~ 01A2:0B6F
cs=0x192;eip=0x000b70; 	X(POP(di));	// 1671 pop     di ;~ 01A2:0B70
cs=0x192;eip=0x000b71; 	T(ADD(di, 8));	// 1672 add     di, 8 ;~ 01A2:0B71
cs=0x192;eip=0x000b74; 	T(DEC(cl));	// 1673 dec     cl ;~ 01A2:0B74
cs=0x192;eip=0x000b76; 	R(JNZ(loc_10b4e));	// 1674 jnz     short loc_10B4E ;~ 01A2:0B76
cs=0x192;eip=0x000b78; 	T(ADD(di, 0x0A0));	// 1675 add     di, 0A0h ; ' ' ;~ 01A2:0B78
cs=0x192;eip=0x000b7c; 	T(DEC(ch));	// 1676 dec     ch ;~ 01A2:0B7C
cs=0x192;eip=0x000b7e; 	R(JNZ(loc_10b4c));	// 1677 jnz     short loc_10B4C ;~ 01A2:0B7E
cs=0x192;eip=0x000b80; 	X(POP(bx));	// 1678 pop     bx ;~ 01A2:0B80
cs=0x192;eip=0x000b81; 	T(DEC(bx));	// 1679 dec     bx ;~ 01A2:0B81
cs=0x192;eip=0x000b82; 	X(PUSH(bx));	// 1680 push    bx ;~ 01A2:0B82
cs=0x192;eip=0x000b83; 	R(JMP(loc_10acd));	// 1681 jmp     loc_10ACD ;~ 01A2:0B83
ret_1a2_b86:
	// 4580 
cs=0x192;eip=0x000b86; 	T(MOV(bx, 0x0FFE0));	// 1683 mov     bx, 0FFE0h ;~ 01A2:0B86
cs=0x192;eip=0x000b89; 	R(JMP(loc_10b9d));	// 1684 jmp     short loc_10B9D ;~ 01A2:0B89
ret_1a2_b8b:
	// 4581 
cs=0x192;eip=0x000b8b; 	T(MOV(bx, 0x0FFE1));	// 1686 mov     bx, 0FFE1h ;~ 01A2:0B8B
cs=0x192;eip=0x000b8e; 	R(JMP(loc_10b9d));	// 1687 jmp     short loc_10B9D ;~ 01A2:0B8E
ret_1a2_b90:
	// 4582 
cs=0x192;eip=0x000b90; 	X(POP(bx));	// 1689 pop     bx ;~ 01A2:0B90
cs=0x192;eip=0x000b91; 	T(MOV(bx, 0x2563));	// 1690 mov     bx, 2563h ;~ 01A2:0B91
cs=0x192;eip=0x000b94; 	X(PUSH(bx));	// 1691 push    bx ;~ 01A2:0B94
cs=0x192;eip=0x000b95; 	T(MOV(bx, 0x21));	// 1692 mov     bx, 21h ; '!' ;~ 01A2:0B95
cs=0x192;eip=0x000b98; 	R(JMP(loc_10b9d));	// 1693 jmp     short loc_10B9D ;~ 01A2:0B98
ret_1a2_b9a:
	// 4583 
cs=0x192;eip=0x000b9a; 	T(MOV(bx, 0x20));	// 1695 mov     bx, 20h ; ' ' ;~ 01A2:0B9A
loc_10b9d:
	// 4584 
cs=0x192;eip=0x000b9d; 	T(MOV(dx, bx));	// 1699 mov     dx, bx ;~ 01A2:0B9D
cs=0x192;eip=0x000b9f; 	X(POP(bx));	// 1700 pop     bx ;~ 01A2:0B9F
cs=0x192;eip=0x000ba0; 	T(MOV(cl, *(raddr(ds,bx))));	// 1701 mov     cl, [bx] ;~ 01A2:0BA0
cs=0x192;eip=0x000ba2; 	T(INC(bx));	// 1702 inc     bx ;~ 01A2:0BA2
cs=0x192;eip=0x000ba3; 	T(MOV(al, *(raddr(ds,bx))));	// 1703 mov     al, [bx] ;~ 01A2:0BA3
cs=0x192;eip=0x000ba5; 	T(INC(bx));	// 1704 inc     bx ;~ 01A2:0BA5
cs=0x192;eip=0x000ba6; 	T(MOV(di, *(dw*)(raddr(ds,bx))));	// 1705 mov     di, [bx] ;~ 01A2:0BA6
cs=0x192;eip=0x000ba8; 	T(INC(bx));	// 1706 inc     bx ;~ 01A2:0BA8
cs=0x192;eip=0x000ba9; 	X(PUSH(bx));	// 1707 push    bx ;~ 01A2:0BA9
cs=0x192;eip=0x000baa; 	T(MOV(ch, 0));	// 1708 mov     ch, 0 ;~ 01A2:0BAA
cs=0x192;eip=0x000bac; 	T(CLD);	// 1709 cld ;~ 01A2:0BAC
loc_10bad:
	// 4585 
cs=0x192;eip=0x000bad; 	X(PUSH(cx));	// 1712 push    cx ;~ 01A2:0BAD
cs=0x192;eip=0x000bae; 	X(PUSH(di));	// 1713 push    di ;~ 01A2:0BAE
	// 1714 rep stosb ;~ 01A2:0BAF
cs=0x192;eip=0x000baf; 	X(	REP STOSB);	// 1714 rep stosb ;~ 01A2:0BAF
cs=0x192;eip=0x000bb1; 	X(POP(di));	// 1715 pop     di ;~ 01A2:0BB1
cs=0x192;eip=0x000bb2; 	T(ADD(di, dx));	// 1716 add     di, dx ;~ 01A2:0BB2
cs=0x192;eip=0x000bb4; 	X(POP(cx));	// 1717 pop     cx ;~ 01A2:0BB4
cs=0x192;eip=0x000bb5; 	R(LOOP(loc_10bad));	// 1718 loop    loc_10BAD ;~ 01A2:0BB5
cs=0x192;eip=0x000bb7; 	R(JMP(loc_10acd));	// 1719 jmp     loc_10ACD ;~ 01A2:0BB7
ret_1a2_bba:
	// 4586 
cs=0x192;eip=0x000bba; 	X(POP(bx));	// 1721 pop     bx ;~ 01A2:0BBA
cs=0x192;eip=0x000bbb; 	T(MOV(ch, *(raddr(ds,bx))));	// 1722 mov     ch, [bx] ;~ 01A2:0BBB
cs=0x192;eip=0x000bbd; 	T(INC(bx));	// 1723 inc     bx ;~ 01A2:0BBD
cs=0x192;eip=0x000bbe; 	T(MOV(cl, *(raddr(ds,bx))));	// 1724 mov     cl, [bx] ;~ 01A2:0BBE
cs=0x192;eip=0x000bc0; 	T(INC(bx));	// 1725 inc     bx ;~ 01A2:0BC0
cs=0x192;eip=0x000bc1; 	T(MOV(al, *(raddr(ds,bx))));	// 1726 mov     al, [bx] ;~ 01A2:0BC1
cs=0x192;eip=0x000bc3; 	T(INC(bx));	// 1727 inc     bx ;~ 01A2:0BC3
cs=0x192;eip=0x000bc4; 	T(MOV(di, *(dw*)(raddr(ds,bx))));	// 1728 mov     di, [bx] ;~ 01A2:0BC4
cs=0x192;eip=0x000bc6; 	T(INC(bx));	// 1729 inc     bx ;~ 01A2:0BC6
cs=0x192;eip=0x000bc7; 	X(PUSH(bx));	// 1730 push    bx ;~ 01A2:0BC7
loc_10bc8:
	// 4587 
cs=0x192;eip=0x000bc8; 	X(PUSH(di));	// 1733 push    di ;~ 01A2:0BC8
cs=0x192;eip=0x000bc9; 	X(PUSH(cx));	// 1734 push    cx ;~ 01A2:0BC9
loc_10bca:
	// 4588 
cs=0x192;eip=0x000bca; 	X(MOV(*(raddr(ds,di)), al));	// 1737 mov     [di], al ;~ 01A2:0BCA
cs=0x192;eip=0x000bcc; 	T(INC(di));	// 1738 inc     di ;~ 01A2:0BCC
cs=0x192;eip=0x000bcd; 	T(DEC(ch));	// 1739 dec     ch ;~ 01A2:0BCD
cs=0x192;eip=0x000bcf; 	R(JNZ(loc_10bca));	// 1740 jnz     short loc_10BCA ;~ 01A2:0BCF
cs=0x192;eip=0x000bd1; 	X(POP(cx));	// 1741 pop     cx ;~ 01A2:0BD1
cs=0x192;eip=0x000bd2; 	X(POP(di));	// 1742 pop     di ;~ 01A2:0BD2
cs=0x192;eip=0x000bd3; 	T(ADD(di, 0x20));	// 1743 add     di, 20h ; ' ' ;~ 01A2:0BD3
cs=0x192;eip=0x000bd6; 	T(DEC(cl));	// 1744 dec     cl ;~ 01A2:0BD6
cs=0x192;eip=0x000bd8; 	R(JNZ(loc_10bc8));	// 1745 jnz     short loc_10BC8 ;~ 01A2:0BD8
cs=0x192;eip=0x000bda; 	R(JMP(loc_10acd));	// 1746 jmp     loc_10ACD ;~ 01A2:0BDA
sub_10ebc:
	// 2188 
cs=0x192;eip=0x000ebc; 	R(CALL(sub_10bdd,0));	// 2190 call    sub_10BDD ;~ 01A2:0EBC
ret_1a2_ebf:
	// 4619 
cs=0x192;eip=0x000ebf; 	T(MOV(di, 4));	// 2191 mov     di, 4 ;~ 01A2:0EBF
cs=0x192;eip=0x000ec2; 	T(XOR(ax, ax));	// 2192 xor     ax, ax ;~ 01A2:0EC2
cs=0x192;eip=0x000ec4; 	T(MOV(cx, 0x120));	// 2193 mov     cx, 120h ;~ 01A2:0EC4
cs=0x192;eip=0x000ec7; 	T(CLD);	// 2194 cld ;~ 01A2:0EC7
	// 2195 rep stosw ;~ 01A2:0EC8
cs=0x192;eip=0x000ec8; 	X(	REP STOSW);	// 2195 rep stosw ;~ 01A2:0EC8
cs=0x192;eip=0x000eca; 	T(MOV(bx, word_11bbc));	// 2196 mov     bx, word_11BBC ;~ 01A2:0ECA
cs=0x192;eip=0x000ece; 	T(CMP(*(raddr(ds,bx)), 0x3A));	// 2197 cmp     byte ptr [bx], 3Ah ; ':' ;~ 01A2:0ECE
cs=0x192;eip=0x000ed1; 	X(PUSH(bx));	// 2198 push    bx ;~ 01A2:0ED1
cs=0x192;eip=0x000ed2; 	R(JNZ(loc_10ee3));	// 2199 jnz     short loc_10EE3 ;~ 01A2:0ED2
cs=0x192;eip=0x000ed4; 	T(MOV(cx, 6));	// 2200 mov     cx, 6 ;~ 01A2:0ED4
cs=0x192;eip=0x000ed7; 	T(MOV(si, 0x57FA));	// 2201 mov     si, 57FAh ;~ 01A2:0ED7
cs=0x192;eip=0x000eda; 	T(MOV(bx, 0x4E5));	// 2202 mov     bx, 4E5h ;~ 01A2:0EDA
cs=0x192;eip=0x000edd; 	R(CALL(sub_10bf7,0));	// 2203 call    sub_10BF7 ;~ 01A2:0EDD
cs=0x192;eip=0x000ee0; 	R(JMP(loc_10ef4));	// 2204 jmp     short loc_10EF4 ;~ 01A2:0EE0
loc_10ee3:
	// 4620 
cs=0x192;eip=0x000ee3; 	T(CMP(*(raddr(ds,bx)), 0x3C));	// 2210 cmp     byte ptr [bx], 3Ch ; '<' ;~ 01A2:0EE3
cs=0x192;eip=0x000ee6; 	R(JNZ(loc_10ef4));	// 2211 jnz     short loc_10EF4 ;~ 01A2:0EE6
cs=0x192;eip=0x000ee8; 	T(MOV(cx, 6));	// 2212 mov     cx, 6 ;~ 01A2:0EE8
cs=0x192;eip=0x000eeb; 	T(MOV(si, 0x57FA));	// 2213 mov     si, 57FAh ;~ 01A2:0EEB
cs=0x192;eip=0x000eee; 	T(MOV(bx, 0x4F0));	// 2214 mov     bx, 4F0h ;~ 01A2:0EEE
cs=0x192;eip=0x000ef1; 	R(CALL(sub_10bf7,0));	// 2215 call    sub_10BF7 ;~ 01A2:0EF1
loc_10ef4:
	// 4621 
cs=0x192;eip=0x000ef4; 	X(POP(bx));	// 2219 pop     bx ;~ 01A2:0EF4
cs=0x192;eip=0x000ef5; 	T(CMP(*(raddr(ds,bx)), 0x9E));	// 2220 cmp     byte ptr [bx], 9Eh ; '' ;~ 01A2:0EF5
cs=0x192;eip=0x000ef8; 	R(JNZ(loc_10f30));	// 2221 jnz     short loc_10F30 ;~ 01A2:0EF8
cs=0x192;eip=0x000efa; 	T(MOV(si, 0x57DE));	// 2222 mov     si, 57DEh ;~ 01A2:0EFA
cs=0x192;eip=0x000efd; 	R(CALL(sub_1108d,0));	// 2223 call    sub_1108D ;~ 01A2:0EFD
cs=0x192;eip=0x000f00; 	T(MOV(al, byte_157dc));	// 2224 mov     al, byte_157DC ;~ 01A2:0F00
cs=0x192;eip=0x000f03; 	T(OR(al, al));	// 2225 or      al, al ;~ 01A2:0F03
cs=0x192;eip=0x000f05; 	R(JZ(loc_10f1c));	// 2226 jz      short loc_10F1C ;~ 01A2:0F05
cs=0x192;eip=0x000f07; 	X(INC(byte_157dd));	// 2227 inc     byte_157DD ;~ 01A2:0F07
cs=0x192;eip=0x000f0b; 	X(INC(word_157da));	// 2228 inc     word_157DA ;~ 01A2:0F0B
cs=0x192;eip=0x000f0f; 	T(CMP(byte_157dd, 0x13));	// 2229 cmp     byte_157DD, 13h ;~ 01A2:0F0F
cs=0x192;eip=0x000f14; 	R(JNZ(loc_10f2a));	// 2230 jnz     short loc_10F2A ;~ 01A2:0F14
cs=0x192;eip=0x000f16; 	X(DEC(byte_157dc));	// 2231 dec     byte_157DC ;~ 01A2:0F16
cs=0x192;eip=0x000f1a; 	R(JMP(loc_10f2a));	// 2232 jmp     short loc_10F2A ;~ 01A2:0F1A
loc_10f1c:
	// 4622 
cs=0x192;eip=0x000f1c; 	X(DEC(word_157da));	// 2236 dec     word_157DA ;~ 01A2:0F1C
cs=0x192;eip=0x000f20; 	X(DEC(byte_157dd));	// 2237 dec     byte_157DD ;~ 01A2:0F20
cs=0x192;eip=0x000f24; 	R(JNZ(loc_10f2a));	// 2238 jnz     short loc_10F2A ;~ 01A2:0F24
cs=0x192;eip=0x000f26; 	X(INC(byte_157dc));	// 2239 inc     byte_157DC ;~ 01A2:0F26
loc_10f2a:
	// 4623 
cs=0x192;eip=0x000f2a; 	T(MOV(si, 0x57E2));	// 2243 mov     si, 57E2h ;~ 01A2:0F2A
cs=0x192;eip=0x000f2d; 	R(CALL(sub_1108d,0));	// 2244 call    sub_1108D ;~ 01A2:0F2D
loc_10f30:
	// 4624 
cs=0x192;eip=0x000f30; 	T(MOV(al, *raddr(ds,m2c::kloc_11e74)));	// 2247 mov     al, byte ptr loc_11E74 ;~ 01A2:0F30
cs=0x192;eip=0x000f33; 	T(OR(al, al));	// 2248 or      al, al ;~ 01A2:0F33
cs=0x192;eip=0x000f35; 	R(JZ(loc_10f99));	// 2249 jz      short loc_10F99 ;~ 01A2:0F35
cs=0x192;eip=0x000f37; 	X(DEC(*(raddr(ds,m2c::kloc_11e74+1))));	// 2250 dec     byte ptr loc_11E74+1 ;~ 01A2:0F37
cs=0x192;eip=0x000f3b; 	R(JNZ(loc_10f50));	// 2251 jnz     short loc_10F50 ;~ 01A2:0F3B
cs=0x192;eip=0x000f3d; 	R(CALL(sub_1107c,0));	// 2252 call    sub_1107C ;~ 01A2:0F3D
cs=0x192;eip=0x000f40; 	X(MOV(*(raddr(ds,m2c::kloc_11e74+1)), al));	// 2253 mov     byte ptr loc_11E74+1, al ;~ 01A2:0F40
cs=0x192;eip=0x000f43; 	T(AND(al, 3));	// 2254 and     al, 3 ;~ 01A2:0F43
cs=0x192;eip=0x000f45; 	R(JNZ(loc_10f57));	// 2255 jnz     short loc_10F57 ;~ 01A2:0F45
cs=0x192;eip=0x000f47; 	R(CALL(sub_1107c,0));	// 2256 call    sub_1107C ;~ 01A2:0F47
cs=0x192;eip=0x000f4a; 	T(AND(al, 3));	// 2257 and     al, 3 ;~ 01A2:0F4A
cs=0x192;eip=0x000f4c; 	T(ADD(al, 4));	// 2258 add     al, 4 ;~ 01A2:0F4C
cs=0x192;eip=0x000f4e; 	R(JMP(loc_10f66));	// 2259 jmp     short loc_10F66 ;~ 01A2:0F4E
loc_10f50:
	// 4625 
cs=0x192;eip=0x000f50; 	T(TEST(*raddr(ds,m2c::kloc_11e76), 2));	// 2263 test    byte ptr loc_11E76, 2 ;~ 01A2:0F50
cs=0x192;eip=0x000f55; 	R(JNZ(loc_10f66));	// 2264 jnz     short loc_10F66 ;~ 01A2:0F55
loc_10f57:
	// 4626 
cs=0x192;eip=0x000f57; 	R(CALL(sub_1107c,0));	// 2267 call    sub_1107C ;~ 01A2:0F57
cs=0x192;eip=0x000f5a; 	T(AND(al, 3));	// 2268 and     al, 3 ;~ 01A2:0F5A
cs=0x192;eip=0x000f5c; 	T(CMP(al, *raddr(ds,m2c::kloc_11e76)));	// 2269 cmp     al, byte ptr loc_11E76 ;~ 01A2:0F5C
cs=0x192;eip=0x000f60; 	R(JNZ(loc_10f66));	// 2270 jnz     short loc_10F66 ;~ 01A2:0F60
cs=0x192;eip=0x000f62; 	T(INC(al));	// 2271 inc     al ;~ 01A2:0F62
cs=0x192;eip=0x000f64; 	T(AND(al, 3));	// 2272 and     al, 3 ;~ 01A2:0F64
loc_10f66:
	// 4627 
cs=0x192;eip=0x000f66; 	X(MOV(*raddr(ds,m2c::kloc_11e76), al));	// 2276 mov     byte ptr loc_11E76, al ;~ 01A2:0F66
cs=0x192;eip=0x000f69; 	T(ADD(al, al));	// 2277 add     al, al ;~ 01A2:0F69
cs=0x192;eip=0x000f6b; 	T(ADD(al, al));	// 2278 add     al, al ;~ 01A2:0F6B
cs=0x192;eip=0x000f6d; 	T(MOV(ah, al));	// 2279 mov     ah, al ;~ 01A2:0F6D
cs=0x192;eip=0x000f6f; 	T(ADD(al, al));	// 2280 add     al, al ;~ 01A2:0F6F
cs=0x192;eip=0x000f71; 	T(ADD(al, ah));	// 2281 add     al, ah ;~ 01A2:0F71
cs=0x192;eip=0x000f73; 	T(XOR(ah, ah));	// 2282 xor     ah, ah ;~ 01A2:0F73
cs=0x192;eip=0x000f75; 	T(ADD(ax, 0x1E14));	// 2283 add     ax, 1E14h ;~ 01A2:0F75
cs=0x192;eip=0x000f78; 	T(MOV(si, ax));	// 2284 mov     si, ax ;~ 01A2:0F78
cs=0x192;eip=0x000f7a; 	T(MOV(di, 0x2C9));	// 2285 mov     di, 2C9h ;~ 01A2:0F7A
cs=0x192;eip=0x000f7d; 	T(MOV(bx, 0x89));	// 2286 mov     bx, 89h ; '‰' ;~ 01A2:0F7D
cs=0x192;eip=0x000f80; 	T(MOV(cx, 3));	// 2287 mov     cx, 3 ;~ 01A2:0F80
loc_10f83:
	// 4628 
cs=0x192;eip=0x000f83; 	X(PUSH(cx));	// 2290 push    cx ;~ 01A2:0F83
cs=0x192;eip=0x000f84; 	T(MOV(cx, 2));	// 2291 mov     cx, 2 ;~ 01A2:0F84
loc_10f87:
	// 4629 
cs=0x192;eip=0x000f87; 	X(MOVSW);	// 2294 movsw ;~ 01A2:0F87
cs=0x192;eip=0x000f88; 	X(MOV(*(dw*)(raddr(ds,bx)), 0x101));	// 2295 mov     word ptr [bx], 101h ;~ 01A2:0F88
cs=0x192;eip=0x000f8c; 	T(INC(bx));	// 2296 inc     bx ;~ 01A2:0F8C
cs=0x192;eip=0x000f8d; 	T(INC(bx));	// 2297 inc     bx ;~ 01A2:0F8D
cs=0x192;eip=0x000f8e; 	R(LOOP(loc_10f87));	// 2298 loop    loc_10F87 ;~ 01A2:0F8E
cs=0x192;eip=0x000f90; 	X(POP(cx));	// 2299 pop     cx ;~ 01A2:0F90
cs=0x192;eip=0x000f91; 	T(ADD(bx, 0x1C));	// 2300 add     bx, 1Ch ;~ 01A2:0F91
cs=0x192;eip=0x000f94; 	T(ADD(di, 0x1C));	// 2301 add     di, 1Ch ;~ 01A2:0F94
cs=0x192;eip=0x000f97; 	R(LOOP(loc_10f83));	// 2302 loop    loc_10F83 ;~ 01A2:0F97
loc_10f99:
	// 4630 
cs=0x192;eip=0x000f99; 	T(CMP(byte_11bd5, 2));	// 2305 cmp     byte_11BD5, 2 ;~ 01A2:0F99
cs=0x192;eip=0x000f9e; 	R(JZ(loc_10fe5));	// 2306 jz      short loc_10FE5 ;~ 01A2:0F9E
cs=0x192;eip=0x000fa0; 	T(MOV(bx, 0x1BE8));	// 2307 mov     bx, 1BE8h ;~ 01A2:0FA0
cs=0x192;eip=0x000fa3; 	X(DEC(byte_11be0));	// 2308 dec     byte_11BE0 ;~ 01A2:0FA3
cs=0x192;eip=0x000fa7; 	R(JNZ(loc_10fe5));	// 2309 jnz     short loc_10FE5 ;~ 01A2:0FA7
cs=0x192;eip=0x000fa9; 	X(MOV(byte_11be0, 0x1A));	// 2310 mov     byte_11BE0, 1Ah ;~ 01A2:0FA9
cs=0x192;eip=0x000fae; 	X(DEC(*(raddr(ds,bx))));	// 2311 dec     byte ptr [bx] ;~ 01A2:0FAE
cs=0x192;eip=0x000fb0; 	T(MOV(al, 0x2F));	// 2312 mov     al, 2Fh ; '/' ;~ 01A2:0FB0
cs=0x192;eip=0x000fb2; 	T(CMP(al, *(raddr(ds,bx))));	// 2313 cmp     al, [bx] ;~ 01A2:0FB2
cs=0x192;eip=0x000fb4; 	R(JNZ(loc_10fdf));	// 2314 jnz     short loc_10FDF ;~ 01A2:0FB4
cs=0x192;eip=0x000fb6; 	X(MOV(*(raddr(ds,bx)), 0x39));	// 2315 mov     byte ptr [bx], 39h ; '9' ;~ 01A2:0FB6
cs=0x192;eip=0x000fb9; 	T(DEC(bx));	// 2316 dec     bx ;~ 01A2:0FB9
cs=0x192;eip=0x000fba; 	X(DEC(*(raddr(ds,bx))));	// 2317 dec     byte ptr [bx] ;~ 01A2:0FBA
cs=0x192;eip=0x000fbc; 	T(CMP(al, *(raddr(ds,bx))));	// 2318 cmp     al, [bx] ;~ 01A2:0FBC
cs=0x192;eip=0x000fbe; 	R(JNZ(loc_10fdf));	// 2319 jnz     short loc_10FDF ;~ 01A2:0FBE
cs=0x192;eip=0x000fc0; 	X(MOV(*(raddr(ds,bx)), 0x39));	// 2320 mov     byte ptr [bx], 39h ; '9' ;~ 01A2:0FC0
cs=0x192;eip=0x000fc3; 	T(DEC(bx));	// 2321 dec     bx ;~ 01A2:0FC3
cs=0x192;eip=0x000fc4; 	X(DEC(*(raddr(ds,bx))));	// 2322 dec     byte ptr [bx] ;~ 01A2:0FC4
cs=0x192;eip=0x000fc6; 	T(CMP(*(raddr(ds,bx)), 0x30));	// 2323 cmp     byte ptr [bx], 30h ; '0' ;~ 01A2:0FC6
cs=0x192;eip=0x000fc9; 	R(JNZ(loc_10fd3));	// 2324 jnz     short loc_10FD3 ;~ 01A2:0FC9
cs=0x192;eip=0x000fcb; 	X(PUSH(bx));	// 2325 push    bx ;~ 01A2:0FCB
cs=0x192;eip=0x000fcc; 	T(MOV(si, 0x57E6));	// 2326 mov     si, 57E6h ;~ 01A2:0FCC
cs=0x192;eip=0x000fcf; 	R(CALL(sub_104b7,0));	// 2327 call    sub_104B7 ;~ 01A2:0FCF
cs=0x192;eip=0x000fd2; 	X(POP(bx));	// 2328 pop     bx ;~ 01A2:0FD2
loc_10fd3:
	// 4631 
cs=0x192;eip=0x000fd3; 	T(CMP(*(raddr(ds,bx)), 0x2F));	// 2331 cmp     byte ptr [bx], 2Fh ; '/' ;~ 01A2:0FD3
cs=0x192;eip=0x000fd6; 	R(JNZ(loc_10fdf));	// 2332 jnz     short loc_10FDF ;~ 01A2:0FD6
cs=0x192;eip=0x000fd8; 	X(MOV(byte_11bd5, 2));	// 2333 mov     byte_11BD5, 2 ;~ 01A2:0FD8
cs=0x192;eip=0x000fdd; 	R(JMP(loc_10fe5));	// 2334 jmp     short loc_10FE5 ;~ 01A2:0FDD
loc_10fdf:
	// 4632 
cs=0x192;eip=0x000fdf; 	T(MOV(si, 0x1BE1));	// 2339 mov     si, 1BE1h ;~ 01A2:0FDF
cs=0x192;eip=0x000fe2; 	R(CALL(sub_104b7,0));	// 2340 call    sub_104B7 ;~ 01A2:0FE2
loc_10fe5:
	// 4633 
cs=0x192;eip=0x000fe5; 	T(CMP(byte_11bda, 0));	// 2344 cmp     byte_11BDA, 0 ;~ 01A2:0FE5
cs=0x192;eip=0x000fea; 	R(JZ(loc_1100d));	// 2345 jz      short loc_1100D ;~ 01A2:0FEA
cs=0x192;eip=0x000fec; 	T(MOV(al, byte_149bb));	// 2346 mov     al, byte_149BB ;~ 01A2:0FEC
loc_10fef:
	// 4634 
cs=0x192;eip=0x000fef; 	T(INC(al));	// 2349 inc     al ;~ 01A2:0FEF
cs=0x192;eip=0x000ff1; 	T(CMP(al, 0x16));	// 2350 cmp     al, 16h ;~ 01A2:0FF1
cs=0x192;eip=0x000ff3; 	R(JZ(loc_10fef));	// 2351 jz      short loc_10FEF ;~ 01A2:0FF3
cs=0x192;eip=0x000ff5; 	T(CMP(al, 0x18));	// 2352 cmp     al, 18h ;~ 01A2:0FF5
cs=0x192;eip=0x000ff7; 	R(JNZ(loc_10ffb));	// 2353 jnz     short loc_10FFB ;~ 01A2:0FF7
cs=0x192;eip=0x000ff9; 	T(MOV(al, 0x13));	// 2354 mov     al, 13h ;~ 01A2:0FF9
loc_10ffb:
	// 4635 
cs=0x192;eip=0x000ffb; 	X(MOV(byte_149bb, al));	// 2357 mov     byte_149BB, al ;~ 01A2:0FFB
cs=0x192;eip=0x000ffe; 	X(MOV(byte_149cc, al));	// 2358 mov     byte_149CC, al ;~ 01A2:0FFE
cs=0x192;eip=0x001001; 	X(MOV(byte_149dd, al));	// 2359 mov     byte_149DD, al ;~ 01A2:1001
cs=0x192;eip=0x001004; 	T(MOV(di, 0x198));	// 2360 mov     di, 198h ;~ 01A2:1004
cs=0x192;eip=0x001007; 	T(MOV(al, 1));	// 2361 mov     al, 1 ;~ 01A2:1007
cs=0x192;eip=0x001009; 	T(CLD);	// 2362 cld ;~ 01A2:1009
cs=0x192;eip=0x00100a; 	X(STOSB);	// 2363 stosb ;~ 01A2:100A
cs=0x192;eip=0x00100b; 	X(STOSB);	// 2364 stosb ;~ 01A2:100B
cs=0x192;eip=0x00100c; 	X(STOSB);	// 2365 stosb ;~ 01A2:100C
loc_1100d:
	// 4636 
cs=0x192;eip=0x00100d; 	T(MOV(bx, word_11bbc));	// 2368 mov     bx, word_11BBC ;~ 01A2:100D
cs=0x192;eip=0x001011; 	T(MOV(al, *(raddr(ds,bx))));	// 2369 mov     al, [bx] ;~ 01A2:1011
cs=0x192;eip=0x001013; 	T(CMP(byte_11bca, al));	// 2370 cmp     byte_11BCA, al ;~ 01A2:1013
cs=0x192;eip=0x001017; 	R(JNZ(locret_11049));	// 2371 jnz     short locret_11049 ;~ 01A2:1017
cs=0x192;eip=0x001019; 	T(MOV(bx, 0x2CB));	// 2372 mov     bx, 2CBh ;~ 01A2:1019
cs=0x192;eip=0x00101c; 	T(MOV(di, 0x8B));	// 2373 mov     di, 8Bh ; '‹' ;~ 01A2:101C
cs=0x192;eip=0x00101f; 	T(MOV(cx, 0x0A));	// 2374 mov     cx, 0Ah ;~ 01A2:101F
loc_11022:
	// 4637 
cs=0x192;eip=0x001022; 	R(CALL(sub_1107c,0));	// 2377 call    sub_1107C ;~ 01A2:1022
cs=0x192;eip=0x001025; 	T(AND(al, 3));	// 2378 and     al, 3 ;~ 01A2:1025
cs=0x192;eip=0x001027; 	T(ADD(al, 0x4F));	// 2379 add     al, 4Fh ; 'O' ;~ 01A2:1027
cs=0x192;eip=0x001029; 	X(MOV(*(raddr(ds,bx)), al));	// 2380 mov     [bx], al ;~ 01A2:1029
cs=0x192;eip=0x00102b; 	T(INC(bx));	// 2381 inc     bx ;~ 01A2:102B
cs=0x192;eip=0x00102c; 	T(INC(bx));	// 2382 inc     bx ;~ 01A2:102C
cs=0x192;eip=0x00102d; 	X(MOV(*(raddr(ds,di)), 1));	// 2383 mov     byte ptr [di], 1 ;~ 01A2:102D
cs=0x192;eip=0x001030; 	T(INC(di));	// 2384 inc     di ;~ 01A2:1030
cs=0x192;eip=0x001031; 	T(INC(di));	// 2385 inc     di ;~ 01A2:1031
cs=0x192;eip=0x001032; 	X(MOV(*(raddr(ds,di)), 1));	// 2386 mov     byte ptr [di], 1 ;~ 01A2:1032
cs=0x192;eip=0x001035; 	R(CALL(sub_1107c,0));	// 2387 call    sub_1107C ;~ 01A2:1035
cs=0x192;eip=0x001038; 	T(AND(al, 3));	// 2388 and     al, 3 ;~ 01A2:1038
cs=0x192;eip=0x00103a; 	T(ADD(al, 0x52));	// 2389 add     al, 52h ; 'R' ;~ 01A2:103A
cs=0x192;eip=0x00103c; 	X(MOV(*(raddr(ds,bx)), al));	// 2390 mov     [bx], al ;~ 01A2:103C
cs=0x192;eip=0x00103e; 	T(ADD(bx, 0x1E));	// 2391 add     bx, 1Eh ;~ 01A2:103E
cs=0x192;eip=0x001041; 	T(ADD(di, 0x1E));	// 2392 add     di, 1Eh ;~ 01A2:1041
cs=0x192;eip=0x001044; 	R(LOOP(loc_11022));	// 2393 loop    loc_11022 ;~ 01A2:1044
cs=0x192;eip=0x001046; 	R(CALL(sub_1107c,0));	// 2394 call    sub_1107C ;~ 01A2:1046
locret_11049:
	// 4638 
cs=0x192;eip=0x001049; 	R(RETN(0));	// 2397 retn ;~ 01A2:1049
sub_11dca:
	// 4386 
cs=0x192;eip=0x001dca; 	T(MOV(bx, word_11bb4));	// 4388 mov     bx, word_11BB4 ;~ 01A2:1DCA
ret_1a2_1dce:
	// 4863 
cs=0x192;eip=0x001dce; 	T(ADD(bx, 4));	// 4389 add     bx, 4 ;~ 01A2:1DCE
cs=0x192;eip=0x001dd2; 	T(MOV(dx, 0x5B6A));	// 4390 mov     dx, 5B6Ah ;~ 01A2:1DD2
cs=0x192;eip=0x001dd5; 	T(MOV(cl, 8));	// 4391 mov     cl, 8 ;~ 01A2:1DD5
cs=0x192;eip=0x001dd7; 	T(MOV(ch, 6));	// 4392 mov     ch, 6 ;~ 01A2:1DD7
cs=0x192;eip=0x001dd9; 	T(MOV(ah, byte_11bcd));	// 4393 mov     ah, byte_11BCD ;~ 01A2:1DD9
cs=0x192;eip=0x001ddd; 	T(MOV(al, byte_11bce));	// 4394 mov     al, byte_11BCE ;~ 01A2:1DDD
cs=0x192;eip=0x001de0; 	R(JMP(sub_11dfd));	// 4395 jmp     short sub_11DFD ;~ 01A2:1DE0
sub_11de3:
	// 4404 
cs=0x192;eip=0x001de3; 	T(MOV(bx, word_11bb4));	// 4405 mov     bx, word_11BB4 ;~ 01A2:1DE3
ret_1a2_1de7:
	// 4864 
cs=0x192;eip=0x001de7; 	T(ADD(bx, 0x6C4));	// 4406 add     bx, 6C4h ;~ 01A2:1DE7
cs=0x192;eip=0x001deb; 	T(MOV(dx, word_11bb8));	// 4407 mov     dx, word_11BB8 ;~ 01A2:1DEB
cs=0x192;eip=0x001def; 	T(MOV(cl, 7));	// 4408 mov     cl, 7 ;~ 01A2:1DEF
cs=0x192;eip=0x001df1; 	T(MOV(ch, 6));	// 4409 mov     ch, 6 ;~ 01A2:1DF1
cs=0x192;eip=0x001df3; 	T(MOV(ah, byte_11bcd));	// 4410 mov     ah, byte_11BCD ;~ 01A2:1DF3
cs=0x192;eip=0x001df7; 	T(MOV(al, byte_11bce));	// 4411 mov     al, byte_11BCE ;~ 01A2:1DF7
cs=0x192;eip=0x001dfa; 	R(JMP(sub_11dfd));	// 4412 jmp     short sub_11DFD ;~ 01A2:1DFA
sub_11dfd:
	// 4421 
cs=0x192;eip=0x001dfd; 	X(MOV(byte_15b33, al));	// 4423 mov     byte_15B33, al ;~ 01A2:1DFD
ret_1a2_1e00:
	// 4865 
cs=0x192;eip=0x001e00; 	T(MOV(al, byte_11bd9));	// 4424 mov     al, byte_11BD9 ;~ 01A2:1E00
cs=0x192;eip=0x001e03; 	T(DEC(al));	// 4425 dec     al ;~ 01A2:1E03
cs=0x192;eip=0x001e05; 	R(JZ(loc_11e5c));	// 4426 jz      short loc_11E5C ;~ 01A2:1E05
cs=0x192;eip=0x001e07; 	T(MOV(di, word_15b20));	// 4427 mov     di, word_15B20 ;~ 01A2:1E07
cs=0x192;eip=0x001e0b; 	T(MOV(di, *(dw*)(raddr(ds,di))));	// 4428 mov     di, [di] ;~ 01A2:1E0B
cs=0x192;eip=0x001e0d; 	T(ADD(di, 0x244));	// 4429 add     di, 244h ;~ 01A2:1E0D
cs=0x192;eip=0x001e11; 	T(MOV(si, 0x5FC2));	// 4430 mov     si, 5FC2h ;~ 01A2:1E11
cs=0x192;eip=0x001e14; 	X(MOV(byte_15b32, ch));	// 4431 mov     byte_15B32, ch ;~ 01A2:1E14
loc_11e18:
	// 4866 
cs=0x192;eip=0x001e18; 	T(MOV(ch, byte_15b32));	// 4434 mov     ch, byte_15B32 ;~ 01A2:1E18
cs=0x192;eip=0x001e1c; 	X(PUSH(di));	// 4435 push    di ;~ 01A2:1E1C
cs=0x192;eip=0x001e1d; 	X(PUSH(bx));	// 4436 push    bx ;~ 01A2:1E1D
cs=0x192;eip=0x001e1e; 	T(MOV(al, byte_15b33));	// 4437 mov     al, byte_15B33 ;~ 01A2:1E1E
loc_11e21:
	// 4867 
cs=0x192;eip=0x001e21; 	T(CMP(al, 0x20));	// 4440 cmp     al, 20h ; ' ' ;~ 01A2:1E21
cs=0x192;eip=0x001e23; 	R(JNC(loc_11e43));	// 4441 jnb     short loc_11E43 ;~ 01A2:1E23
cs=0x192;eip=0x001e25; 	T(CMP(ah, 0x12));	// 4442 cmp     ah, 12h ;~ 01A2:1E25
cs=0x192;eip=0x001e28; 	R(JNC(loc_11e43));	// 4443 jnb     short loc_11E43 ;~ 01A2:1E28
cs=0x192;eip=0x001e2a; 	X(PUSH(ax));	// 4444 push    ax ;~ 01A2:1E2A
cs=0x192;eip=0x001e2b; 	T(MOV(al, *(raddr(ds,di))));	// 4445 mov     al, [di] ;~ 01A2:1E2B
cs=0x192;eip=0x001e2d; 	T(TEST(byte_15b31, 2));	// 4446 test    byte_15B31, 2 ;~ 01A2:1E2D
cs=0x192;eip=0x001e32; 	R(JZ(loc_11e36));	// 4447 jz      short loc_11E36 ;~ 01A2:1E32
cs=0x192;eip=0x001e34; 	X(MOV(*(raddr(ds,si)), al));	// 4448 mov     [si], al ;~ 01A2:1E34
loc_11e36:
	// 4868 
cs=0x192;eip=0x001e36; 	T(CMP(al, 0x0C7));	// 4451 cmp     al, 0C7h ; 'Ç' ;~ 01A2:1E36
cs=0x192;eip=0x001e38; 	R(JNC(loc_11e42));	// 4452 jnb     short loc_11E42 ;~ 01A2:1E38
cs=0x192;eip=0x001e3a; 	T(XCHG(bx, dx));	// 4453 xchg    bx, dx ;~ 01A2:1E3A
cs=0x192;eip=0x001e3c; 	T(MOV(al, *(raddr(ds,bx))));	// 4454 mov     al, [bx] ;~ 01A2:1E3C
cs=0x192;eip=0x001e3e; 	T(XCHG(bx, dx));	// 4455 xchg    bx, dx ;~ 01A2:1E3E
cs=0x192;eip=0x001e40; 	X(MOV(*(raddr(ds,bx)), al));	// 4456 mov     [bx], al ;~ 01A2:1E40
loc_11e42:
	// 4869 
cs=0x192;eip=0x001e42; 	X(POP(ax));	// 4459 pop     ax ;~ 01A2:1E42
loc_11e43:
	// 4870 
cs=0x192;eip=0x001e43; 	T(INC(al));	// 4463 inc     al ;~ 01A2:1E43
cs=0x192;eip=0x001e45; 	T(INC(di));	// 4464 inc     di ;~ 01A2:1E45
cs=0x192;eip=0x001e46; 	T(INC(si));	// 4465 inc     si ;~ 01A2:1E46
cs=0x192;eip=0x001e47; 	T(INC(bx));	// 4466 inc     bx ;~ 01A2:1E47
cs=0x192;eip=0x001e48; 	T(INC(dx));	// 4467 inc     dx ;~ 01A2:1E48
cs=0x192;eip=0x001e49; 	T(DEC(ch));	// 4468 dec     ch ;~ 01A2:1E49
cs=0x192;eip=0x001e4b; 	R(JNZ(loc_11e21));	// 4469 jnz     short loc_11E21 ;~ 01A2:1E4B
cs=0x192;eip=0x001e4d; 	X(POP(bx));	// 4470 pop     bx ;~ 01A2:1E4D
cs=0x192;eip=0x001e4e; 	T(ADD(bx, 0x20));	// 4471 add     bx, 20h ; ' ' ;~ 01A2:1E4E
cs=0x192;eip=0x001e51; 	T(INC(ah));	// 4472 inc     ah ;~ 01A2:1E51
cs=0x192;eip=0x001e53; 	X(POP(di));	// 4473 pop     di ;~ 01A2:1E53
cs=0x192;eip=0x001e54; 	T(ADD(di, 0x20));	// 4474 add     di, 20h ; ' ' ;~ 01A2:1E54
cs=0x192;eip=0x001e57; 	T(DEC(cl));	// 4475 dec     cl ;~ 01A2:1E57
cs=0x192;eip=0x001e59; 	R(JNZ(loc_11e18));	// 4476 jnz     short loc_11E18 ;~ 01A2:1E59
cs=0x192;eip=0x001e5b; 	R(RETN(0));	// 4477 retn ;~ 01A2:1E5B
loc_11e5c:
	// 4871 
cs=0x192;eip=0x001e5c; 	T(MOV(di, word_15b20));	// 4481 mov     di, word_15B20 ;~ 01A2:1E5C
cs=0x192;eip=0x001e60; 	T(MOV(di, *(dw*)(raddr(ds,di))));	// 4482 mov     di, [di] ;~ 01A2:1E60
cs=0x192;eip=0x001e62; 	T(ADD(di, 0x244));	// 4483 add     di, 244h ;~ 01A2:1E62
cs=0x192;eip=0x001e66; 	T(MOV(si, word_15b1e));	// 4484 mov     si, word_15B1E ;~ 01A2:1E66
cs=0x192;eip=0x001e6a; 	X(MOV(byte_15b32, ch));	// 4485 mov     byte_15B32, ch ;~ 01A2:1E6A
cs=0x192;eip=0x001e6e; 	T(XCHG(bx, dx));	// 4486 xchg    bx, dx ;~ 01A2:1E6E
cs=0x192;eip=0x001e70; 	T(ADD(bx, word_15b1c));	// 4487 add     bx, word_15B1C ;~ 01A2:1E70
loc_11e74:
	// 4872 
cs=0x192;eip=0x001e74; 	T(XCHG(bx, dx));	// 4491 xchg    bx, dx ;~ 01A2:1E74
loc_11e76:
	// 4873 
cs=0x192;eip=0x001e76; 	T(MOV(ch, byte_15b32));	// 4495 mov     ch, byte_15B32 ;~ 01A2:1E76
cs=0x192;eip=0x001e7a; 	T(MOV(al, byte_15b33));	// 4496 mov     al, byte_15B33 ;~ 01A2:1E7A
loc_11e7d:
	// 4874 
cs=0x192;eip=0x001e7d; 	T(CMP(al, 0x20));	// 4500 cmp     al, 20h ; ' ' ;~ 01A2:1E7D
cs=0x192;eip=0x001e7f; 	R(JNC(loc_11e9f));	// 4501 jnb     short loc_11E9F ;~ 01A2:1E7F
cs=0x192;eip=0x001e81; 	T(CMP(ah, 0x12));	// 4502 cmp     ah, 12h ;~ 01A2:1E81
cs=0x192;eip=0x001e84; 	R(JNC(loc_11e9f));	// 4503 jnb     short loc_11E9F ;~ 01A2:1E84
cs=0x192;eip=0x001e86; 	X(PUSH(ax));	// 4504 push    ax ;~ 01A2:1E86
cs=0x192;eip=0x001e87; 	T(MOV(al, *(raddr(ds,di))));	// 4505 mov     al, [di] ;~ 01A2:1E87
cs=0x192;eip=0x001e89; 	T(TEST(byte_15b31, 2));	// 4506 test    byte_15B31, 2 ;~ 01A2:1E89
cs=0x192;eip=0x001e8e; 	R(JZ(loc_11e92));	// 4507 jz      short loc_11E92 ;~ 01A2:1E8E
cs=0x192;eip=0x001e90; 	X(MOV(*(raddr(ds,si)), al));	// 4508 mov     [si], al ;~ 01A2:1E90
loc_11e92:
	// 4875 
cs=0x192;eip=0x001e92; 	T(CMP(al, 0x0C7));	// 4511 cmp     al, 0C7h ; 'Ç' ;~ 01A2:1E92
cs=0x192;eip=0x001e94; 	R(JNC(loc_11e9e));	// 4512 jnb     short loc_11E9E ;~ 01A2:1E94
cs=0x192;eip=0x001e96; 	T(XCHG(bx, dx));	// 4513 xchg    bx, dx ;~ 01A2:1E96
cs=0x192;eip=0x001e98; 	T(MOV(al, *(raddr(ds,bx))));	// 4514 mov     al, [bx] ;~ 01A2:1E98
cs=0x192;eip=0x001e9a; 	T(XCHG(bx, dx));	// 4515 xchg    bx, dx ;~ 01A2:1E9A
cs=0x192;eip=0x001e9c; 	X(MOV(*(raddr(ds,bx)), al));	// 4516 mov     [bx], al ;~ 01A2:1E9C
loc_11e9e:
	// 4876 
cs=0x192;eip=0x001e9e; 	X(POP(ax));	// 4519 pop     ax ;~ 01A2:1E9E
loc_11e9f:
	// 4877 
cs=0x192;eip=0x001e9f; 	T(INC(al));	// 4523 inc     al ;~ 01A2:1E9F
cs=0x192;eip=0x001ea1; 	T(INC(di));	// 4524 inc     di ;~ 01A2:1EA1
cs=0x192;eip=0x001ea2; 	T(DEC(si));	// 4525 dec     si ;~ 01A2:1EA2
cs=0x192;eip=0x001ea3; 	T(INC(bx));	// 4526 inc     bx ;~ 01A2:1EA3
cs=0x192;eip=0x001ea4; 	T(DEC(dx));	// 4527 dec     dx ;~ 01A2:1EA4
cs=0x192;eip=0x001ea5; 	T(DEC(ch));	// 4528 dec     ch ;~ 01A2:1EA5
cs=0x192;eip=0x001ea7; 	R(JNZ(loc_11e7d));	// 4529 jnz     short loc_11E7D ;~ 01A2:1EA7
cs=0x192;eip=0x001ea9; 	T(ADD(bx, word_15b18));	// 4530 add     bx, word_15B18 ;~ 01A2:1EA9
cs=0x192;eip=0x001ead; 	T(ADD(dx, word_15b1a));	// 4531 add     dx, word_15B1A ;~ 01A2:1EAD
cs=0x192;eip=0x001eb1; 	T(INC(ah));	// 4532 inc     ah ;~ 01A2:1EB1
cs=0x192;eip=0x001eb3; 	T(ADD(di, word_15b18));	// 4533 add     di, word_15B18 ;~ 01A2:1EB3
cs=0x192;eip=0x001eb7; 	T(ADD(si, word_15b1a));	// 4534 add     si, word_15B1A ;~ 01A2:1EB7
cs=0x192;eip=0x001ebb; 	T(DEC(cl));	// 4535 dec     cl ;~ 01A2:1EBB
cs=0x192;eip=0x001ebd; 	R(JNZ(loc_11e76));	// 4536 jnz     short loc_11E76 ;~ 01A2:1EBD
cs=0x192;eip=0x001ebf; 	R(RETN(0));	// 4537 retn ;~ 01A2:1EBF
sub_12032:
	// 4837 
cs=0x192;eip=0x002032; 	T(MOV(cl, byte_16f8f));	// 4839 mov     cl, byte_16F8F ;~ 01A2:2032
ret_1a2_2036:
	// 4902 
cs=0x192;eip=0x002036; 	T(MOV(bx, word_16f90));	// 4840 mov     bx, word_16F90 ;~ 01A2:2036
cs=0x192;eip=0x00203a; 	T(SUB(bx, 0x900));	// 4841 sub     bx, 900h ;~ 01A2:203A
cs=0x192;eip=0x00203e; 	T(MOV(al, 1));	// 4842 mov     al, 1 ;~ 01A2:203E
cs=0x192;eip=0x002040; 	T(MOV(ch, 0));	// 4843 mov     ch, 0 ;~ 01A2:2040
loc_12042:
	// 4903 
cs=0x192;eip=0x002042; 	X(MOV(*(raddr(ds,bx)), al));	// 4846 mov     [bx], al ;~ 01A2:2042
cs=0x192;eip=0x002044; 	T(TEST(byte_16fa8, 1));	// 4847 test    byte_16FA8, 1 ;~ 01A2:2044
cs=0x192;eip=0x002049; 	R(JZ(loc_1204d));	// 4848 jz      short loc_1204D ;~ 01A2:2049
cs=0x192;eip=0x00204b; 	T(DEC(bx));	// 4849 dec     bx ;~ 01A2:204B
cs=0x192;eip=0x00204c; 	T(DEC(bx));	// 4850 dec     bx ;~ 01A2:204C
loc_1204d:
	// 4904 
cs=0x192;eip=0x00204d; 	T(INC(bx));	// 4853 inc     bx ;~ 01A2:204D
cs=0x192;eip=0x00204e; 	R(LOOP(loc_12042));	// 4854 loop    loc_12042 ;~ 01A2:204E
cs=0x192;eip=0x002050; 	X(MOV(byte_16f8f, al));	// 4855 mov     byte_16F8F, al ;~ 01A2:2050
cs=0x192;eip=0x002053; 	X(INC(byte_16f92));	// 4856 inc     byte_16F92 ;~ 01A2:2053
cs=0x192;eip=0x002057; 	T(MOV(al, byte_16f92));	// 4857 mov     al, byte_16F92 ;~ 01A2:2057
cs=0x192;eip=0x00205a; 	T(AND(al, 3));	// 4858 and     al, 3 ;~ 01A2:205A
cs=0x192;eip=0x00205c; 	T(ADD(al, al));	// 4859 add     al, al ;~ 01A2:205C
cs=0x192;eip=0x00205e; 	T(CBW);	// 4860 cbw ;~ 01A2:205E
cs=0x192;eip=0x00205f; 	T(ADD(ax, 0x6F81));	// 4861 add     ax, 6F81h ;~ 01A2:205F
cs=0x192;eip=0x002062; 	T(MOV(bx, ax));	// 4862 mov     bx, ax ;~ 01A2:2062
cs=0x192;eip=0x002064; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 4863 mov     ax, [bx] ;~ 01A2:2064
cs=0x192;eip=0x002066; 	X(MOV(word_16f9d, ax));	// 4864 mov     word_16F9D, ax ;~ 01A2:2066
cs=0x192;eip=0x002069; 	T(MOV(al, byte_16f93));	// 4865 mov     al, byte_16F93 ;~ 01A2:2069
cs=0x192;eip=0x00206c; 	T(INC(al));	// 4866 inc     al ;~ 01A2:206C
cs=0x192;eip=0x00206e; 	T(CMP(al, 3));	// 4867 cmp     al, 3 ;~ 01A2:206E
cs=0x192;eip=0x002070; 	R(JNZ(loc_12074));	// 4868 jnz     short loc_12074 ;~ 01A2:2070
cs=0x192;eip=0x002072; 	T(XOR(al, al));	// 4869 xor     al, al ;~ 01A2:2072
loc_12074:
	// 4905 
cs=0x192;eip=0x002074; 	X(MOV(byte_16f93, al));	// 4872 mov     byte_16F93, al ;~ 01A2:2074
cs=0x192;eip=0x002077; 	T(ADD(al, al));	// 4873 add     al, al ;~ 01A2:2077
cs=0x192;eip=0x002079; 	T(CBW);	// 4874 cbw ;~ 01A2:2079
cs=0x192;eip=0x00207a; 	T(ADD(ax, 0x6F89));	// 4875 add     ax, 6F89h ;~ 01A2:207A
cs=0x192;eip=0x00207d; 	T(MOV(bx, ax));	// 4876 mov     bx, ax ;~ 01A2:207D
cs=0x192;eip=0x00207f; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 4877 mov     ax, [bx] ;~ 01A2:207F
cs=0x192;eip=0x002081; 	X(MOV(word_16f94, ax));	// 4878 mov     word_16F94, ax ;~ 01A2:2081
cs=0x192;eip=0x002084; 	T(MOV(si, 0x68E2));	// 4879 mov     si, 68E2h ;~ 01A2:2084
cs=0x192;eip=0x002087; 	T(MOV(cx, 0x65));	// 4880 mov     cx, 65h ; 'e' ;~ 01A2:2087
loc_1208a:
	// 4906 
cs=0x192;eip=0x00208a; 	X(PUSH(cx));	// 4883 push    cx ;~ 01A2:208A
cs=0x192;eip=0x00208b; 	T(MOV(al, *(raddr(ds,si+0x0B))));	// 4884 mov     al, [si+0Bh] ;~ 01A2:208B
cs=0x192;eip=0x00208e; 	T(CMP(al, 1));	// 4885 cmp     al, 1 ;~ 01A2:208E
cs=0x192;eip=0x002090; 	R(JZ(loc_120a2));	// 4886 jz      short loc_120A2 ;~ 01A2:2090
cs=0x192;eip=0x002092; 	T(CMP(al, 6));	// 4887 cmp     al, 6 ;~ 01A2:2092
cs=0x192;eip=0x002094; 	R(JZ(loc_120a2));	// 4888 jz      short loc_120A2 ;~ 01A2:2094
cs=0x192;eip=0x002096; 	T(CMP(al, 4));	// 4889 cmp     al, 4 ;~ 01A2:2096
cs=0x192;eip=0x002098; 	R(JZ(loc_120a2));	// 4890 jz      short loc_120A2 ;~ 01A2:2098
cs=0x192;eip=0x00209a; 	T(CMP(al, 9));	// 4891 cmp     al, 9 ;~ 01A2:209A
cs=0x192;eip=0x00209c; 	R(JZ(loc_120a2));	// 4892 jz      short loc_120A2 ;~ 01A2:209C
cs=0x192;eip=0x00209e; 	T(CMP(al, 0x0A));	// 4893 cmp     al, 0Ah ;~ 01A2:209E
cs=0x192;eip=0x0020a0; 	R(JNZ(loc_120a5));	// 4894 jnz     short loc_120A5 ;~ 01A2:20A0
loc_120a2:
	// 4907 
cs=0x192;eip=0x0020a2; 	R(CALL(sub_12574,0));	// 4898 call    sub_12574 ;~ 01A2:20A2
loc_120a5:
	// 4908 
cs=0x192;eip=0x0020a5; 	R(CALL(sub_12549,0));	// 4901 call    sub_12549 ;~ 01A2:20A5
cs=0x192;eip=0x0020a8; 	R(CALL(sub_1252e,0));	// 4902 call    sub_1252E ;~ 01A2:20A8
cs=0x192;eip=0x0020ab; 	T(MOV(ax, si));	// 4903 mov     ax, si ;~ 01A2:20AB
cs=0x192;eip=0x0020ad; 	T(ADD(ax, 3));	// 4904 add     ax, 3 ;~ 01A2:20AD
cs=0x192;eip=0x0020b0; 	X(MOV(word_15b20, ax));	// 4905 mov     word_15B20, ax ;~ 01A2:20B0
cs=0x192;eip=0x0020b3; 	T(MOV(al, *(raddr(ds,si))));	// 4906 mov     al, [si] ;~ 01A2:20B3
cs=0x192;eip=0x0020b5; 	T(AND(al, 0x7F));	// 4907 and     al, 7Fh ;~ 01A2:20B5
cs=0x192;eip=0x0020b7; 	T(CMP(al, *(db*)(((db*)&word_11bd6))));	// 4908 cmp     al, byte ptr word_11BD6 ;~ 01A2:20B7
cs=0x192;eip=0x0020bb; 	R(JNZ(loc_120d1));	// 4909 jnz     short loc_120D1 ;~ 01A2:20BB
cs=0x192;eip=0x0020bd; 	T(MOV(al, *(raddr(ds,si+2))));	// 4910 mov     al, [si+2] ;~ 01A2:20BD
cs=0x192;eip=0x0020c0; 	T(CMP(al, *(db*)(((db*)&word_11bd6)+1)));	// 4911 cmp     al, byte ptr word_11BD6+1 ;~ 01A2:20C0
cs=0x192;eip=0x0020c4; 	R(JNZ(loc_120d1));	// 4912 jnz     short loc_120D1 ;~ 01A2:20C4
cs=0x192;eip=0x0020c6; 	X(PUSH(si));	// 4913 push    si ;~ 01A2:20C6
cs=0x192;eip=0x0020c7; 	R(CALL(sub_11db3,0));	// 4914 call    sub_11DB3 ;~ 01A2:20C7
cs=0x192;eip=0x0020ca; 	R(CALL(sub_12553,0));	// 4915 call    sub_12553 ;~ 01A2:20CA
cs=0x192;eip=0x0020cd; 	R(CALL(sub_11dc4,0));	// 4916 call    sub_11DC4 ;~ 01A2:20CD
cs=0x192;eip=0x0020d0; 	X(POP(si));	// 4917 pop     si ;~ 01A2:20D0
loc_120d1:
	// 4909 
cs=0x192;eip=0x0020d1; 	T(MOV(al, *(raddr(ds,si))));	// 4921 mov     al, [si] ;~ 01A2:20D1
cs=0x192;eip=0x0020d3; 	T(AND(al, 0x7F));	// 4922 and     al, 7Fh ;~ 01A2:20D3
cs=0x192;eip=0x0020d5; 	T(SUB(al, *(db*)(((db*)&word_11bd6))));	// 4923 sub     al, byte ptr word_11BD6 ;~ 01A2:20D5
cs=0x192;eip=0x0020d9; 	T(ADD(al, 3));	// 4924 add     al, 3 ;~ 01A2:20D9
cs=0x192;eip=0x0020db; 	T(CMP(al, 6));	// 4925 cmp     al, 6 ;~ 01A2:20DB
cs=0x192;eip=0x0020dd; 	R(JC(loc_120e2));	// 4926 jb      short loc_120E2 ;~ 01A2:20DD
loc_120df:
	// 4910 
cs=0x192;eip=0x0020df; 	R(JMP(loc_12474));	// 4929 jmp     loc_12474 ;~ 01A2:20DF
loc_120e2:
	// 4911 
cs=0x192;eip=0x0020e2; 	T(MOV(al, *(db*)(((db*)&word_11bd6)+1)));	// 4933 mov     al, byte ptr word_11BD6+1 ;~ 01A2:20E2
cs=0x192;eip=0x0020e5; 	T(SUB(al, *(raddr(ds,si+2))));	// 4934 sub     al, [si+2] ;~ 01A2:20E5
cs=0x192;eip=0x0020e8; 	T(ADD(al, 6));	// 4935 add     al, 6 ;~ 01A2:20E8
cs=0x192;eip=0x0020ea; 	T(CMP(al, 0x0C));	// 4936 cmp     al, 0Ch ;~ 01A2:20EA
cs=0x192;eip=0x0020ec; 	R(JNC(loc_120df));	// 4937 jnb     short loc_120DF ;~ 01A2:20EC
cs=0x192;eip=0x0020ee; 	T(CMP(*(raddr(ds,si+0x0B)), 2));	// 4938 cmp     byte ptr [si+0Bh], 2 ;~ 01A2:20EE
cs=0x192;eip=0x0020f2; 	R(JC(loc_120f7));	// 4939 jb      short loc_120F7 ;~ 01A2:20F2
cs=0x192;eip=0x0020f4; 	R(JMP(loc_1218c));	// 4940 jmp     loc_1218C ;~ 01A2:20F4
loc_120f7:
	// 4912 
cs=0x192;eip=0x0020f7; 	T(MOV(cl, *(raddr(ds,si+1))));	// 4944 mov     cl, [si+1] ;~ 01A2:20F7
cs=0x192;eip=0x0020fa; 	T(MOV(bx, *(dw*)(raddr(ds,si+3))));	// 4945 mov     bx, [si+3] ;~ 01A2:20FA
cs=0x192;eip=0x0020fd; 	T(MOV(dl, 0x0FF));	// 4946 mov     dl, 0FFh ;~ 01A2:20FD
cs=0x192;eip=0x0020ff; 	T(TEST(*(raddr(ds,si)), 0x80));	// 4947 test    byte ptr [si], 80h ;~ 01A2:20FF
cs=0x192;eip=0x002102; 	R(JZ(loc_1211f));	// 4948 jz      short loc_1211F ;~ 01A2:2102
cs=0x192;eip=0x002104; 	R(CALL(sub_1107c,0));	// 4949 call    sub_1107C ;~ 01A2:2104
cs=0x192;eip=0x002107; 	T(AND(al, 3));	// 4950 and     al, 3 ;~ 01A2:2107
cs=0x192;eip=0x002109; 	R(JZ(loc_1211f));	// 4951 jz      short loc_1211F ;~ 01A2:2109
cs=0x192;eip=0x00210b; 	T(INC(dl));	// 4952 inc     dl ;~ 01A2:210B
cs=0x192;eip=0x00210d; 	T(MOV(al, *(raddr(ds,si+1))));	// 4953 mov     al, [si+1] ;~ 01A2:210D
cs=0x192;eip=0x002110; 	T(ADD(al, 0x0A));	// 4954 add     al, 0Ah ;~ 01A2:2110
cs=0x192;eip=0x002112; 	T(MOV(ah, byte_11bce));	// 4955 mov     ah, byte_11BCE ;~ 01A2:2112
cs=0x192;eip=0x002116; 	T(ADD(ah, 0x0A));	// 4956 add     ah, 0Ah ;~ 01A2:2116
cs=0x192;eip=0x002119; 	T(CMP(ah, al));	// 4957 cmp     ah, al ;~ 01A2:2119
cs=0x192;eip=0x00211b; 	R(JNC(loc_1211f));	// 4958 jnb     short loc_1211F ;~ 01A2:211B
cs=0x192;eip=0x00211d; 	T(INC(dl));	// 4959 inc     dl ;~ 01A2:211D
loc_1211f:
	// 4913 
cs=0x192;eip=0x00211f; 	T(CMP(byte_11bd9, 0));	// 4963 cmp     byte_11BD9, 0 ;~ 01A2:211F
cs=0x192;eip=0x002124; 	R(JZ(loc_12164));	// 4964 jz      short loc_12164 ;~ 01A2:2124
cs=0x192;eip=0x002126; 	T(MOV(al, *(raddr(ds,si+2))));	// 4965 mov     al, [si+2] ;~ 01A2:2126
cs=0x192;eip=0x002129; 	T(CMP(al, *(raddr(ds,si+5))));	// 4966 cmp     al, [si+5] ;~ 01A2:2129
cs=0x192;eip=0x00212c; 	R(JNZ(loc_12151));	// 4967 jnz     short loc_12151 ;~ 01A2:212C
cs=0x192;eip=0x00212e; 	T(CMP(*(raddr(ds,si+6)), cl));	// 4968 cmp     [si+6], cl ;~ 01A2:212E
cs=0x192;eip=0x002131; 	R(JNZ(loc_12151));	// 4969 jnz     short loc_12151 ;~ 01A2:2131
loc_12133:
	// 4914 
cs=0x192;eip=0x002133; 	T(DEC(dl));	// 4972 dec     dl ;~ 01A2:2133
cs=0x192;eip=0x002135; 	R(JZ(loc_12143));	// 4973 jz      short loc_12143 ;~ 01A2:2135
cs=0x192;eip=0x002137; 	T(MOV(al, *(raddr(ds,si+0x0B))));	// 4974 mov     al, [si+0Bh] ;~ 01A2:2137
cs=0x192;eip=0x00213a; 	T(ADD(al, al));	// 4975 add     al, al ;~ 01A2:213A
cs=0x192;eip=0x00213c; 	T(ADD(al, 7));	// 4976 add     al, 7 ;~ 01A2:213C
loc_1213e:
	// 4915 
cs=0x192;eip=0x00213e; 	X(MOV(*(raddr(ds,si+0x0B)), al));	// 4979 mov     [si+0Bh], al ;~ 01A2:213E
cs=0x192;eip=0x002141; 	R(JMP(loc_1218c));	// 4980 jmp     short loc_1218C ;~ 01A2:2141
loc_12143:
	// 4916 
cs=0x192;eip=0x002143; 	R(CALL(sub_1107c,0));	// 4984 call    sub_1107C ;~ 01A2:2143
cs=0x192;eip=0x002146; 	T(AND(al, 7));	// 4985 and     al, 7 ;~ 01A2:2146
cs=0x192;eip=0x002148; 	T(ADD(al, 3));	// 4986 add     al, 3 ;~ 01A2:2148
cs=0x192;eip=0x00214a; 	X(MOV(byte_16f96, al));	// 4987 mov     byte_16F96, al ;~ 01A2:214A
cs=0x192;eip=0x00214d; 	T(MOV(al, 0x0C));	// 4988 mov     al, 0Ch ;~ 01A2:214D
cs=0x192;eip=0x00214f; 	R(JMP(loc_1213e));	// 4989 jmp     short loc_1213E ;~ 01A2:214F
loc_12151:
	// 4917 
cs=0x192;eip=0x002151; 	T(DEC(cl));	// 4994 dec     cl ;~ 01A2:2151
cs=0x192;eip=0x002153; 	T(DEC(bx));	// 4995 dec     bx ;~ 01A2:2153
cs=0x192;eip=0x002154; 	T(MOV(al, 0x0FC));	// 4996 mov     al, 0FCh ; 'ü' ;~ 01A2:2154
cs=0x192;eip=0x002156; 	T(CMP(al, cl));	// 4997 cmp     al, cl ;~ 01A2:2156
cs=0x192;eip=0x002158; 	R(JNZ(loc_12186));	// 4998 jnz     short loc_12186 ;~ 01A2:2158
cs=0x192;eip=0x00215a; 	T(MOV(cl, 0x1C));	// 4999 mov     cl, 1Ch ;~ 01A2:215A
cs=0x192;eip=0x00215c; 	T(ADD(bx, 0x20));	// 5000 add     bx, 20h ; ' ' ;~ 01A2:215C
cs=0x192;eip=0x00215f; 	X(DEC(*(raddr(ds,si+2))));	// 5001 dec     byte ptr [si+2] ;~ 01A2:215F
cs=0x192;eip=0x002162; 	R(JMP(loc_12186));	// 5002 jmp     short loc_12186 ;~ 01A2:2162
loc_12164:
	// 4918 
cs=0x192;eip=0x002164; 	T(MOV(al, *(raddr(ds,si+2))));	// 5006 mov     al, [si+2] ;~ 01A2:2164
cs=0x192;eip=0x002167; 	T(CMP(al, *(raddr(ds,si+7))));	// 5007 cmp     al, [si+7] ;~ 01A2:2167
cs=0x192;eip=0x00216a; 	R(JNZ(loc_12175));	// 5008 jnz     short loc_12175 ;~ 01A2:216A
cs=0x192;eip=0x00216c; 	T(CMP(*(raddr(ds,si+8)), cl));	// 5009 cmp     [si+8], cl ;~ 01A2:216C
cs=0x192;eip=0x00216f; 	R(JNZ(loc_12175));	// 5010 jnz     short loc_12175 ;~ 01A2:216F
cs=0x192;eip=0x002171; 	T(INC(dl));	// 5011 inc     dl ;~ 01A2:2171
cs=0x192;eip=0x002173; 	R(JMP(loc_12133));	// 5012 jmp     short loc_12133 ;~ 01A2:2173
loc_12175:
	// 4919 
cs=0x192;eip=0x002175; 	T(INC(cl));	// 5017 inc     cl ;~ 01A2:2175
cs=0x192;eip=0x002177; 	T(INC(bx));	// 5018 inc     bx ;~ 01A2:2177
cs=0x192;eip=0x002178; 	T(MOV(al, 0x1E));	// 5019 mov     al, 1Eh ;~ 01A2:2178
cs=0x192;eip=0x00217a; 	T(CMP(al, cl));	// 5020 cmp     al, cl ;~ 01A2:217A
cs=0x192;eip=0x00217c; 	R(JNZ(loc_12186));	// 5021 jnz     short loc_12186 ;~ 01A2:217C
cs=0x192;eip=0x00217e; 	T(MOV(cl, 0x0FE));	// 5022 mov     cl, 0FEh ; 'ş' ;~ 01A2:217E
cs=0x192;eip=0x002180; 	T(ADD(bx, 0x0FFE0));	// 5023 add     bx, 0FFE0h ;~ 01A2:2180
cs=0x192;eip=0x002183; 	X(INC(*(raddr(ds,si+2))));	// 5024 inc     byte ptr [si+2] ;~ 01A2:2183
loc_12186:
	// 4920 
cs=0x192;eip=0x002186; 	X(MOV(*(dw*)(raddr(ds,si+3)), bx));	// 5028 mov     [si+3], bx ;~ 01A2:2186
cs=0x192;eip=0x002189; 	X(MOV(*(raddr(ds,si+1)), cl));	// 5029 mov     [si+1], cl ;~ 01A2:2189
loc_1218c:
	// 4921 
cs=0x192;eip=0x00218c; 	T(MOV(al, *(raddr(ds,si))));	// 5033 mov     al, [si] ;~ 01A2:218C
cs=0x192;eip=0x00218e; 	T(AND(al, 0x7F));	// 5034 and     al, 7Fh ;~ 01A2:218E
cs=0x192;eip=0x002190; 	T(CMP(al, *(db*)(((db*)&word_11bd6))));	// 5035 cmp     al, byte ptr word_11BD6 ;~ 01A2:2190
cs=0x192;eip=0x002194; 	R(JZ(loc_12199));	// 5036 jz      short loc_12199 ;~ 01A2:2194
loc_12196:
	// 4922 
cs=0x192;eip=0x002196; 	R(JMP(loc_12474));	// 5039 jmp     loc_12474 ;~ 01A2:2196
loc_12199:
	// 4923 
cs=0x192;eip=0x002199; 	T(MOV(al, *(db*)(((db*)&word_11bd6)+1)));	// 5043 mov     al, byte ptr word_11BD6+1 ;~ 01A2:2199
cs=0x192;eip=0x00219c; 	T(CMP(al, *(raddr(ds,si+2))));	// 5044 cmp     al, [si+2] ;~ 01A2:219C
cs=0x192;eip=0x00219f; 	R(JNZ(loc_12196));	// 5045 jnz     short loc_12196 ;~ 01A2:219F
cs=0x192;eip=0x0021a1; 	X(PUSH(si));	// 5046 push    si ;~ 01A2:21A1
cs=0x192;eip=0x0021a2; 	R(CALL(sub_11db3,0));	// 5047 call    sub_11DB3 ;~ 01A2:21A2
cs=0x192;eip=0x0021a5; 	R(CALL(sub_12553,0));	// 5048 call    sub_12553 ;~ 01A2:21A5
cs=0x192;eip=0x0021a8; 	R(CALL(sub_11dc4,0));	// 5049 call    sub_11DC4 ;~ 01A2:21A8
cs=0x192;eip=0x0021ab; 	X(POP(si));	// 5050 pop     si ;~ 01A2:21AB
cs=0x192;eip=0x0021ac; 	T(MOV(al, 1));	// 5051 mov     al, 1 ;~ 01A2:21AC
cs=0x192;eip=0x0021ae; 	T(TEST(*(raddr(ds,si+9)), 0x80));	// 5052 test    byte ptr [si+9], 80h ;~ 01A2:21AE
cs=0x192;eip=0x0021b2; 	R(JZ(loc_121b6));	// 5053 jz      short loc_121B6 ;~ 01A2:21B2
cs=0x192;eip=0x0021b4; 	T(INC(al));	// 5054 inc     al ;~ 01A2:21B4
loc_121b6:
	// 4924 
cs=0x192;eip=0x0021b6; 	T(CMP(al, byte_16fa1));	// 5057 cmp     al, byte_16FA1 ;~ 01A2:21B6
cs=0x192;eip=0x0021ba; 	R(JNZ(loc_12207));	// 5058 jnz     short loc_12207 ;~ 01A2:21BA
cs=0x192;eip=0x0021bc; 	T(CMP(*(raddr(ds,si+0x0B)), 5));	// 5059 cmp     byte ptr [si+0Bh], 5 ;~ 01A2:21BC
cs=0x192;eip=0x0021c0; 	R(JZ(loc_12207));	// 5060 jz      short loc_12207 ;~ 01A2:21C0
cs=0x192;eip=0x0021c2; 	T(CMP(*(raddr(ds,si+0x0B)), 6));	// 5061 cmp     byte ptr [si+0Bh], 6 ;~ 01A2:21C2
cs=0x192;eip=0x0021c6; 	R(JZ(loc_12207));	// 5062 jz      short loc_12207 ;~ 01A2:21C6
cs=0x192;eip=0x0021c8; 	X(PUSH(si));	// 5063 push    si ;~ 01A2:21C8
cs=0x192;eip=0x0021c9; 	T(MOV(cx, 2));	// 5064 mov     cx, 2 ;~ 01A2:21C9
cs=0x192;eip=0x0021cc; 	R(CALL(sub_11f6b,0));	// 5065 call    sub_11F6B ;~ 01A2:21CC
cs=0x192;eip=0x0021cf; 	R(CALL(sub_12023,0));	// 5066 call    sub_12023 ;~ 01A2:21CF
cs=0x192;eip=0x0021d2; 	X(POP(si));	// 5067 pop     si ;~ 01A2:21D2
cs=0x192;eip=0x0021d3; 	X(DEC(byte_16f98));	// 5068 dec     byte_16F98 ;~ 01A2:21D3
cs=0x192;eip=0x0021d7; 	R(JZ(loc_121e0));	// 5069 jz      short loc_121E0 ;~ 01A2:21D7
cs=0x192;eip=0x0021d9; 	R(CALL(sub_1107c,0));	// 5070 call    sub_1107C ;~ 01A2:21D9
cs=0x192;eip=0x0021dc; 	T(AND(al, 7));	// 5071 and     al, 7 ;~ 01A2:21DC
cs=0x192;eip=0x0021de; 	R(JNZ(loc_12207));	// 5072 jnz     short loc_12207 ;~ 01A2:21DE
loc_121e0:
	// 4925 
cs=0x192;eip=0x0021e0; 	X(MOV(byte_16f98, 5));	// 5075 mov     byte_16F98, 5 ;~ 01A2:21E0
cs=0x192;eip=0x0021e5; 	T(MOV(cl, 6));	// 5076 mov     cl, 6 ;~ 01A2:21E5
cs=0x192;eip=0x0021e7; 	T(MOV(al, *(raddr(ds,si+0x0B))));	// 5077 mov     al, [si+0Bh] ;~ 01A2:21E7
cs=0x192;eip=0x0021ea; 	T(CMP(al, 4));	// 5078 cmp     al, 4 ;~ 01A2:21EA
cs=0x192;eip=0x0021ec; 	R(JZ(loc_121fc));	// 5079 jz      short loc_121FC ;~ 01A2:21EC
cs=0x192;eip=0x0021ee; 	T(CMP(al, 1));	// 5080 cmp     al, 1 ;~ 01A2:21EE
cs=0x192;eip=0x0021f0; 	R(JZ(loc_121fc));	// 5081 jz      short loc_121FC ;~ 01A2:21F0
cs=0x192;eip=0x0021f2; 	T(CMP(al, 9));	// 5082 cmp     al, 9 ;~ 01A2:21F2
cs=0x192;eip=0x0021f4; 	R(JZ(loc_121fc));	// 5083 jz      short loc_121FC ;~ 01A2:21F4
cs=0x192;eip=0x0021f6; 	T(CMP(al, 0x0A));	// 5084 cmp     al, 0Ah ;~ 01A2:21F6
cs=0x192;eip=0x0021f8; 	R(JZ(loc_121fc));	// 5085 jz      short loc_121FC ;~ 01A2:21F8
cs=0x192;eip=0x0021fa; 	T(DEC(cl));	// 5086 dec     cl ;~ 01A2:21FA
loc_121fc:
	// 4926 
cs=0x192;eip=0x0021fc; 	X(MOV(*(raddr(ds,si+0x0B)), cl));	// 5090 mov     [si+0Bh], cl ;~ 01A2:21FC
cs=0x192;eip=0x0021ff; 	X(PUSH(si));	// 5091 push    si ;~ 01A2:21FF
cs=0x192;eip=0x002200; 	T(MOV(cx, 0x0A));	// 5092 mov     cx, 0Ah ;~ 01A2:2200
cs=0x192;eip=0x002203; 	R(CALL(sub_11f6b,0));	// 5093 call    sub_11F6B ;~ 01A2:2203
cs=0x192;eip=0x002206; 	X(POP(si));	// 5094 pop     si ;~ 01A2:2206
loc_12207:
	// 4927 
cs=0x192;eip=0x002207; 	T(MOV(bl, *(raddr(ds,si+0x0B))));	// 5098 mov     bl, [si+0Bh] ;~ 01A2:2207
cs=0x192;eip=0x00220a; 	T(MOV(bh, 0));	// 5099 mov     bh, 0 ;~ 01A2:220A
cs=0x192;eip=0x00220c; 	T(ADD(bx, bx));	// 5100 add     bx, bx ;~ 01A2:220C
cs=0x192;eip=0x00220e; 	T(ADD(bx, 0x6F5D));	// 5101 add     bx, 6F5Dh ;~ 01A2:220E
cs=0x192;eip=0x002212; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 5102 mov     bx, [bx] ;~ 01A2:2212
cs=0x192;eip=0x002214; 	T(MOV(cl, byte_11bd9));	// 5103 mov     cl, byte_11BD9 ;~ 01A2:2214
cs=0x192;eip=0x002218; 	T(OR(cl, cl));	// 5104 or      cl, cl ;~ 01A2:2218
cs=0x192;eip=0x00221a; __disp=bx;
	R(JMP(__dispatch_call));	// 5105 jmp     bx ;~ 01A2:221A
ret_1a2_221c:
	// 4928 
cs=0x192;eip=0x00221c; 	T(MOV(bx, 0x729));	// 5107 mov     bx, 729h ;~ 01A2:221C
cs=0x192;eip=0x00221f; 	R(JZ(loc_12224));	// 5108 jz      short loc_12224 ;~ 01A2:221F
cs=0x192;eip=0x002221; 	T(MOV(bx, 0x724));	// 5109 mov     bx, 724h ;~ 01A2:2221
loc_12224:
	// 4929 
cs=0x192;eip=0x002224; 	T(ADD(bx, *(dw*)(raddr(ds,si+3))));	// 5112 add     bx, [si+3] ;~ 01A2:2224
cs=0x192;eip=0x002227; 	T(CMP(byte_15fd9, 0x0FF));	// 5113 cmp     byte_15FD9, 0FFh ;~ 01A2:2227
cs=0x192;eip=0x00222c; 	R(JZ(loc_1224a));	// 5114 jz      short loc_1224A ;~ 01A2:222C
cs=0x192;eip=0x00222e; 	T(CMP(*(raddr(ds,bx)), 0x0FF));	// 5115 cmp     byte ptr [bx], 0FFh ;~ 01A2:222E
cs=0x192;eip=0x002231; 	R(JZ(loc_1224a));	// 5116 jz      short loc_1224A ;~ 01A2:2231
cs=0x192;eip=0x002233; 	X(MOV(word_16fa2, bx));	// 5117 mov     word_16FA2, bx ;~ 01A2:2233
cs=0x192;eip=0x002237; 	X(MOV(*(raddr(ds,si+0x0B)), 2));	// 5118 mov     byte ptr [si+0Bh], 2 ;~ 01A2:2237
cs=0x192;eip=0x00223b; 	X(MOV(byte_16f96, 3));	// 5119 mov     byte_16F96, 3 ;~ 01A2:223B
cs=0x192;eip=0x002240; 	R(CALL(sub_1107c,0));	// 5120 call    sub_1107C ;~ 01A2:2240
cs=0x192;eip=0x002243; 	T(TEST(al, 1));	// 5121 test    al, 1 ;~ 01A2:2243
cs=0x192;eip=0x002245; 	R(JZ(loc_1224a));	// 5122 jz      short loc_1224A ;~ 01A2:2245
cs=0x192;eip=0x002247; 	R(JMP(loc_122f4));	// 5123 jmp     loc_122F4 ;~ 01A2:2247
loc_1224a:
	// 4930 
cs=0x192;eip=0x00224a; 	T(CMP(byte_15fd3, 0x0FF));	// 5128 cmp     byte_15FD3, 0FFh ;~ 01A2:224A
cs=0x192;eip=0x00224f; 	R(JZ(loc_12273));	// 5129 jz      short loc_12273 ;~ 01A2:224F
cs=0x192;eip=0x002251; 	T(MOV(bx, 0x709));	// 5130 mov     bx, 709h ;~ 01A2:2251
cs=0x192;eip=0x002254; 	T(OR(cl, cl));	// 5131 or      cl, cl ;~ 01A2:2254
cs=0x192;eip=0x002256; 	R(JZ(loc_1225b));	// 5132 jz      short loc_1225B ;~ 01A2:2256
cs=0x192;eip=0x002258; 	T(MOV(bx, 0x704));	// 5133 mov     bx, 704h ;~ 01A2:2258
loc_1225b:
	// 4931 
cs=0x192;eip=0x00225b; 	T(ADD(bx, *(dw*)(raddr(ds,si+3))));	// 5136 add     bx, [si+3] ;~ 01A2:225B
cs=0x192;eip=0x00225e; 	T(CMP(*(raddr(ds,bx)), 0x0FF));	// 5137 cmp     byte ptr [bx], 0FFh ;~ 01A2:225E
cs=0x192;eip=0x002261; 	R(JZ(loc_12273));	// 5138 jz      short loc_12273 ;~ 01A2:2261
cs=0x192;eip=0x002263; 	X(MOV(word_16fa2, bx));	// 5139 mov     word_16FA2, bx ;~ 01A2:2263
cs=0x192;eip=0x002267; 	X(MOV(*(raddr(ds,si+0x0B)), 0x0B));	// 5140 mov     byte ptr [si+0Bh], 0Bh ;~ 01A2:2267
cs=0x192;eip=0x00226b; 	X(MOV(byte_16f96, 2));	// 5141 mov     byte_16F96, 2 ;~ 01A2:226B
cs=0x192;eip=0x002270; 	R(JMP(loc_122f4));	// 5142 jmp     loc_122F4 ;~ 01A2:2270
loc_12273:
	// 4932 
cs=0x192;eip=0x002273; 	R(CALL(sub_1107c,0));	// 5147 call    sub_1107C ;~ 01A2:2273
cs=0x192;eip=0x002276; 	T(AND(al, 7));	// 5148 and     al, 7 ;~ 01A2:2276
cs=0x192;eip=0x002278; 	R(JNZ(loc_122f1));	// 5149 jnz     short loc_122F1 ;~ 01A2:2278
cs=0x192;eip=0x00227a; 	T(CMP(byte_16fb2, 0));	// 5150 cmp     byte_16FB2, 0 ;~ 01A2:227A
cs=0x192;eip=0x00227f; 	R(JNZ(loc_122f1));	// 5151 jnz     short loc_122F1 ;~ 01A2:227F
cs=0x192;eip=0x002281; 	T(CMP(byte_15fd8, 0x0FF));	// 5152 cmp     byte_15FD8, 0FFh ;~ 01A2:2281
cs=0x192;eip=0x002286; 	R(JZ(loc_122f1));	// 5153 jz      short loc_122F1 ;~ 01A2:2286
cs=0x192;eip=0x002288; 	T(MOV(al, *(raddr(ds,si+9))));	// 5154 mov     al, [si+9] ;~ 01A2:2288
cs=0x192;eip=0x00228b; 	T(AND(al, 0x3F));	// 5155 and     al, 3Fh ;~ 01A2:228B
cs=0x192;eip=0x00228d; 	T(SUB(al, byte_11bcd));	// 5156 sub     al, byte_11BCD ;~ 01A2:228D
cs=0x192;eip=0x002291; 	T(ADD(al, 4));	// 5157 add     al, 4 ;~ 01A2:2291
cs=0x192;eip=0x002293; 	T(CMP(al, 9));	// 5158 cmp     al, 9 ;~ 01A2:2293
cs=0x192;eip=0x002295; 	R(JNC(loc_122f1));	// 5159 jnb     short loc_122F1 ;~ 01A2:2295
cs=0x192;eip=0x002297; 	T(MOV(bx, *(dw*)(raddr(ds,si+3))));	// 5160 mov     bx, [si+3] ;~ 01A2:2297
cs=0x192;eip=0x00229a; 	T(ADD(bx, 0x64));	// 5161 add     bx, 64h ; 'd' ;~ 01A2:229A
cs=0x192;eip=0x00229d; 	T(MOV(cl, 4));	// 5162 mov     cl, 4 ;~ 01A2:229D
cs=0x192;eip=0x00229f; 	T(MOV(ch, 8));	// 5163 mov     ch, 8 ;~ 01A2:229F
cs=0x192;eip=0x0022a1; 	T(MOV(dl, 0));	// 5164 mov     dl, 0 ;~ 01A2:22A1
cs=0x192;eip=0x0022a3; 	T(MOV(al, *(raddr(ds,si+1))));	// 5165 mov     al, [si+1] ;~ 01A2:22A3
cs=0x192;eip=0x0022a6; 	T(ADD(al, 0x0A));	// 5166 add     al, 0Ah ;~ 01A2:22A6
cs=0x192;eip=0x0022a8; 	T(MOV(ah, byte_11bce));	// 5167 mov     ah, byte_11BCE ;~ 01A2:22A8
cs=0x192;eip=0x0022ac; 	T(ADD(ah, 0x0A));	// 5168 add     ah, 0Ah ;~ 01A2:22AC
cs=0x192;eip=0x0022af; 	T(CMP(ah, al));	// 5169 cmp     ah, al ;~ 01A2:22AF
cs=0x192;eip=0x0022b1; 	R(JNC(loc_122bc));	// 5170 jnb     short loc_122BC ;~ 01A2:22B1
cs=0x192;eip=0x0022b3; 	T(MOV(cl, 1));	// 5171 mov     cl, 1 ;~ 01A2:22B3
cs=0x192;eip=0x0022b5; 	T(MOV(ch, 4));	// 5172 mov     ch, 4 ;~ 01A2:22B5
cs=0x192;eip=0x0022b7; 	T(INC(dl));	// 5173 inc     dl ;~ 01A2:22B7
cs=0x192;eip=0x0022b9; 	T(SUB(bx, 3));	// 5174 sub     bx, 3 ;~ 01A2:22B9
loc_122bc:
	// 4933 
cs=0x192;eip=0x0022bc; 	T(CMP(byte_11bd9, dl));	// 5177 cmp     byte_11BD9, dl ;~ 01A2:22BC
cs=0x192;eip=0x0022c0; 	R(JNZ(loc_122f1));	// 5178 jnz     short loc_122F1 ;~ 01A2:22C0
cs=0x192;eip=0x0022c2; 	T(MOV(al, *(raddr(ds,si+1))));	// 5179 mov     al, [si+1] ;~ 01A2:22C2
cs=0x192;eip=0x0022c5; 	T(ADD(al, cl));	// 5180 add     al, cl ;~ 01A2:22C5
cs=0x192;eip=0x0022c7; 	X(MOV(byte_16fb4, al));	// 5181 mov     byte_16FB4, al ;~ 01A2:22C7
cs=0x192;eip=0x0022ca; 	X(MOV(word_16fb5, bx));	// 5182 mov     word_16FB5, bx ;~ 01A2:22CA
cs=0x192;eip=0x0022ce; 	X(MOV(byte_16fb7, ch));	// 5183 mov     byte_16FB7, ch ;~ 01A2:22CE
cs=0x192;eip=0x0022d2; 	X(MOV(byte_16fb8, ch));	// 5184 mov     byte_16FB8, ch ;~ 01A2:22D2
cs=0x192;eip=0x0022d6; 	X(MOV(byte_16fb2, 0x0D4));	// 5185 mov     byte_16FB2, 0D4h ; 'Ô' ;~ 01A2:22D6
cs=0x192;eip=0x0022db; 	T(MOV(al, *(raddr(ds,si+9))));	// 5186 mov     al, [si+9] ;~ 01A2:22DB
cs=0x192;eip=0x0022de; 	T(AND(al, 0x3F));	// 5187 and     al, 3Fh ;~ 01A2:22DE
cs=0x192;eip=0x0022e0; 	T(ADD(al, 3));	// 5188 add     al, 3 ;~ 01A2:22E0
cs=0x192;eip=0x0022e2; 	X(MOV(byte_16fb3, al));	// 5189 mov     byte_16FB3, al ;~ 01A2:22E2
cs=0x192;eip=0x0022e5; 	X(MOV(*(raddr(ds,si+0x0B)), 2));	// 5190 mov     byte ptr [si+0Bh], 2 ;~ 01A2:22E5
cs=0x192;eip=0x0022e9; 	X(MOV(byte_16f96, 1));	// 5191 mov     byte_16F96, 1 ;~ 01A2:22E9
cs=0x192;eip=0x0022ee; 	R(JMP(loc_122f4));	// 5192 jmp     short loc_122F4 ;~ 01A2:22EE
loc_122f1:
	// 4934 
cs=0x192;eip=0x0022f1; 	R(CALL(sub_12506,0));	// 5199 call    sub_12506 ;~ 01A2:22F1
loc_122f4:
	// 4935 
cs=0x192;eip=0x0022f4; 	T(MOV(bx, word_16f9d));	// 5203 mov     bx, word_16F9D ;~ 01A2:22F4
cs=0x192;eip=0x0022f8; 	R(JMP(loc_1242e));	// 5204 jmp     loc_1242E ;~ 01A2:22F8
ret_1a2_22fb:
	// 4936 
cs=0x192;eip=0x0022fb; 	T(MOV(bx, 0x6EB));	// 5206 mov     bx, 6EBh ;~ 01A2:22FB
cs=0x192;eip=0x0022fe; 	R(JZ(loc_12303));	// 5207 jz      short loc_12303 ;~ 01A2:22FE
cs=0x192;eip=0x002300; 	T(MOV(bx, 0x6E4));	// 5208 mov     bx, 6E4h ;~ 01A2:2300
loc_12303:
	// 4937 
cs=0x192;eip=0x002303; 	T(CMP(byte_15fcb, 0x0FF));	// 5211 cmp     byte_15FCB, 0FFh ;~ 01A2:2303
cs=0x192;eip=0x002308; 	R(JZ(loc_12319));	// 5212 jz      short loc_12319 ;~ 01A2:2308
cs=0x192;eip=0x00230a; 	T(ADD(bx, *(dw*)(raddr(ds,si+3))));	// 5213 add     bx, [si+3] ;~ 01A2:230A
cs=0x192;eip=0x00230d; 	T(CMP(*(raddr(ds,bx)), 0x0FF));	// 5214 cmp     byte ptr [bx], 0FFh ;~ 01A2:230D
cs=0x192;eip=0x002310; 	R(JZ(loc_12319));	// 5215 jz      short loc_12319 ;~ 01A2:2310
cs=0x192;eip=0x002312; 	X(MOV(*(raddr(ds,si+0x0B)), 4));	// 5216 mov     byte ptr [si+0Bh], 4 ;~ 01A2:2312
cs=0x192;eip=0x002316; 	R(JMP(loc_1231c));	// 5217 jmp     short loc_1231C ;~ 01A2:2316
loc_12319:
	// 4938 
cs=0x192;eip=0x002319; 	R(CALL(sub_12506,0));	// 5224 call    sub_12506 ;~ 01A2:2319
loc_1231c:
	// 4939 
cs=0x192;eip=0x00231c; 	T(MOV(bx, word_16f94));	// 5227 mov     bx, word_16F94 ;~ 01A2:231C
cs=0x192;eip=0x002320; 	R(JMP(loc_1242e));	// 5228 jmp     loc_1242E ;~ 01A2:2320
ret_1a2_2323:
	// 4940 
cs=0x192;eip=0x002323; 	T(CMP(byte_16f96, 2));	// 5230 cmp     byte_16F96, 2 ;~ 01A2:2323
cs=0x192;eip=0x002328; 	R(JNZ(loc_1233e));	// 5231 jnz     short loc_1233E ;~ 01A2:2328
cs=0x192;eip=0x00232a; 	T(MOV(bx, word_16fa2));	// 5232 mov     bx, word_16FA2 ;~ 01A2:232A
cs=0x192;eip=0x00232e; 	T(CMP(*(raddr(ds,bx)), 0x0FF));	// 5233 cmp     byte ptr [bx], 0FFh ;~ 01A2:232E
cs=0x192;eip=0x002331; 	R(JZ(loc_1233e));	// 5234 jz      short loc_1233E ;~ 01A2:2331
cs=0x192;eip=0x002333; 	X(PUSH(si));	// 5235 push    si ;~ 01A2:2333
cs=0x192;eip=0x002334; 	R(CALL(sub_12023,0));	// 5236 call    sub_12023 ;~ 01A2:2334
cs=0x192;eip=0x002337; 	T(MOV(cx, 8));	// 5237 mov     cx, 8 ;~ 01A2:2337
cs=0x192;eip=0x00233a; 	R(CALL(sub_11f89,0));	// 5238 call    sub_11F89 ;~ 01A2:233A
cs=0x192;eip=0x00233d; 	X(POP(si));	// 5239 pop     si ;~ 01A2:233D
loc_1233e:
	// 4941 
cs=0x192;eip=0x00233e; 	X(DEC(byte_16f96));	// 5243 dec     byte_16F96 ;~ 01A2:233E
cs=0x192;eip=0x002342; 	R(JNZ(loc_12348));	// 5244 jnz     short loc_12348 ;~ 01A2:2342
cs=0x192;eip=0x002344; 	X(MOV(*(raddr(ds,si+0x0B)), 0));	// 5245 mov     byte ptr [si+0Bh], 0 ;~ 01A2:2344
loc_12348:
	// 4942 
cs=0x192;eip=0x002348; 	T(MOV(bx, 0x6D9E));	// 5248 mov     bx, 6D9Eh ;~ 01A2:2348
cs=0x192;eip=0x00234b; 	R(JMP(loc_1242e));	// 5249 jmp     loc_1242E ;~ 01A2:234B
ret_1a2_234e:
	// 4943 
cs=0x192;eip=0x00234e; 	T(MOV(bx, 0x96A));	// 5251 mov     bx, 96Ah ;~ 01A2:234E
cs=0x192;eip=0x002351; 	T(CMP(byte_11bd9, 1));	// 5252 cmp     byte_11BD9, 1 ;~ 01A2:2351
cs=0x192;eip=0x002356; 	R(JNZ(loc_1235b));	// 5253 jnz     short loc_1235B ;~ 01A2:2356
cs=0x192;eip=0x002358; 	T(MOV(bx, 0x963));	// 5254 mov     bx, 963h ;~ 01A2:2358
loc_1235b:
	// 4944 
cs=0x192;eip=0x00235b; 	T(MOV(cl, *(raddr(ds,si+1))));	// 5257 mov     cl, [si+1] ;~ 01A2:235B
cs=0x192;eip=0x00235e; 	T(DEC(cl));	// 5258 dec     cl ;~ 01A2:235E
cs=0x192;eip=0x002360; 	T(ADD(bx, *(dw*)(raddr(ds,si+3))));	// 5259 add     bx, [si+3] ;~ 01A2:2360
cs=0x192;eip=0x002363; 	X(MOV(word_16f90, bx));	// 5260 mov     word_16F90, bx ;~ 01A2:2363
cs=0x192;eip=0x002367; 	T(MOV(al, byte_11bd9));	// 5261 mov     al, byte_11BD9 ;~ 01A2:2367
cs=0x192;eip=0x00236a; 	X(MOV(byte_16fa8, al));	// 5262 mov     byte_16FA8, al ;~ 01A2:236A
cs=0x192;eip=0x00236d; 	T(MOV(di, 0x6F77));	// 5263 mov     di, 6F77h ;~ 01A2:236D
cs=0x192;eip=0x002370; 	T(MOV(ch, 0x0A));	// 5264 mov     ch, 0Ah ;~ 01A2:2370
cs=0x192;eip=0x002372; 	X(MOV(byte_16f8f, ch));	// 5265 mov     byte_16F8F, ch ;~ 01A2:2372
loc_12376:
	// 4945 
cs=0x192;eip=0x002376; 	T(CMP(cl, 0x19));	// 5268 cmp     cl, 19h ;~ 01A2:2376
cs=0x192;eip=0x002379; 	R(JNC(loc_1238b));	// 5269 jnb     short loc_1238B ;~ 01A2:2379
cs=0x192;eip=0x00237b; 	T(CMP(*(raddr(ds,bx-0x6C0)), 0x0C7));	// 5270 cmp     byte ptr [bx-6C0h], 0C7h ; 'Ç' ;~ 01A2:237B
cs=0x192;eip=0x002380; 	R(JNC(loc_123a0));	// 5271 jnb     short loc_123A0 ;~ 01A2:2380
cs=0x192;eip=0x002382; 	T(MOV(al, *(raddr(ds,di))));	// 5272 mov     al, [di] ;~ 01A2:2382
cs=0x192;eip=0x002384; 	X(MOV(*(raddr(ds,bx)), al));	// 5273 mov     [bx], al ;~ 01A2:2384
cs=0x192;eip=0x002386; 	X(MOV(*(raddr(ds,bx-0x900)), 1));	// 5274 mov     byte ptr [bx-900h], 1 ;~ 01A2:2386
loc_1238b:
	// 4946 
cs=0x192;eip=0x00238b; 	T(INC(di));	// 5277 inc     di ;~ 01A2:238B
cs=0x192;eip=0x00238c; 	T(TEST(byte_11bd9, 1));	// 5278 test    byte_11BD9, 1 ;~ 01A2:238C
cs=0x192;eip=0x002391; 	R(JZ(loc_12399));	// 5279 jz      short loc_12399 ;~ 01A2:2391
cs=0x192;eip=0x002393; 	T(DEC(cl));	// 5280 dec     cl ;~ 01A2:2393
cs=0x192;eip=0x002395; 	T(DEC(cl));	// 5281 dec     cl ;~ 01A2:2395
cs=0x192;eip=0x002397; 	T(DEC(bx));	// 5282 dec     bx ;~ 01A2:2397
cs=0x192;eip=0x002398; 	T(DEC(bx));	// 5283 dec     bx ;~ 01A2:2398
loc_12399:
	// 4947 
cs=0x192;eip=0x002399; 	T(INC(cl));	// 5286 inc     cl ;~ 01A2:2399
cs=0x192;eip=0x00239b; 	T(INC(bx));	// 5287 inc     bx ;~ 01A2:239B
cs=0x192;eip=0x00239c; 	T(DEC(ch));	// 5288 dec     ch ;~ 01A2:239C
cs=0x192;eip=0x00239e; 	R(JNZ(loc_12376));	// 5289 jnz     short loc_12376 ;~ 01A2:239E
loc_123a0:
	// 4948 
cs=0x192;eip=0x0023a0; 	X(DEC(byte_16f96));	// 5292 dec     byte_16F96 ;~ 01A2:23A0
cs=0x192;eip=0x0023a4; 	R(JNZ(loc_123aa));	// 5293 jnz     short loc_123AA ;~ 01A2:23A4
cs=0x192;eip=0x0023a6; 	X(MOV(*(raddr(ds,si+0x0B)), 7));	// 5294 mov     byte ptr [si+0Bh], 7 ;~ 01A2:23A6
loc_123aa:
	// 4949 
cs=0x192;eip=0x0023aa; 	T(MOV(bx, 0x6D9E));	// 5297 mov     bx, 6D9Eh ;~ 01A2:23AA
cs=0x192;eip=0x0023ad; 	R(JMP(loc_1242e));	// 5298 jmp     short loc_1242E ;~ 01A2:23AD
ret_1a2_23b0:
	// 4950 
cs=0x192;eip=0x0023b0; 	X(MOV(*(raddr(ds,si+0x0B)), 8));	// 5301 mov     byte ptr [si+0Bh], 8 ;~ 01A2:23B0
cs=0x192;eip=0x0023b4; 	T(MOV(bx, 0x6EC9));	// 5302 mov     bx, 6EC9h ;~ 01A2:23B4
cs=0x192;eip=0x0023b7; 	R(JMP(loc_1242e));	// 5303 jmp     short loc_1242E ;~ 01A2:23B7
ret_1a2_23ba:
	// 4951 
cs=0x192;eip=0x0023ba; 	X(MOV(*(raddr(ds,si+0x0B)), 0));	// 5306 mov     byte ptr [si+0Bh], 0 ;~ 01A2:23BA
cs=0x192;eip=0x0023be; 	T(MOV(bx, 0x6EC9));	// 5307 mov     bx, 6EC9h ;~ 01A2:23BE
loc_123c1:
	// 4952 
cs=0x192;eip=0x0023c1; 	X(XOR(byte_11bd9, 1));	// 5310 xor     byte_11BD9, 1 ;~ 01A2:23C1
cs=0x192;eip=0x0023c6; 	R(JMP(loc_1242e));	// 5311 jmp     short loc_1242E ;~ 01A2:23C6
ret_1a2_23c9:
	// 4953 
cs=0x192;eip=0x0023c9; 	X(MOV(*(raddr(ds,si+0x0B)), 0x0A));	// 5315 mov     byte ptr [si+0Bh], 0Ah ;~ 01A2:23C9
cs=0x192;eip=0x0023cd; 	T(MOV(bx, 0x6E37));	// 5316 mov     bx, 6E37h ;~ 01A2:23CD
cs=0x192;eip=0x0023d0; 	R(JMP(loc_1242e));	// 5317 jmp     short loc_1242E ;~ 01A2:23D0
ret_1a2_23d3:
	// 4954 
cs=0x192;eip=0x0023d3; 	X(MOV(*(raddr(ds,si+0x0B)), 1));	// 5321 mov     byte ptr [si+0Bh], 1 ;~ 01A2:23D3
cs=0x192;eip=0x0023d7; 	T(MOV(bx, 0x6E37));	// 5322 mov     bx, 6E37h ;~ 01A2:23D7
cs=0x192;eip=0x0023da; 	R(JMP(loc_123c1));	// 5323 jmp     short loc_123C1 ;~ 01A2:23DA
ret_1a2_23dc:
	// 4955 
cs=0x192;eip=0x0023dc; 	T(MOV(bx, 0x6F1B));	// 5325 mov     bx, 6F1Bh ;~ 01A2:23DC
cs=0x192;eip=0x0023df; 	R(JMP(loc_1242e));	// 5326 jmp     short loc_1242E ;~ 01A2:23DF
ret_1a2_23e2:
	// 4956 
cs=0x192;eip=0x0023e2; 	T(MOV(bx, 0x6F45));	// 5329 mov     bx, 6F45h ;~ 01A2:23E2
cs=0x192;eip=0x0023e5; 	R(JMP(loc_1242e));	// 5330 jmp     short loc_1242E ;~ 01A2:23E5
ret_1a2_23e8:
	// 4957 
cs=0x192;eip=0x0023e8; 	T(CMP(byte_16f96, 1));	// 5333 cmp     byte_16F96, 1 ;~ 01A2:23E8
cs=0x192;eip=0x0023ed; 	R(JNZ(loc_12402));	// 5334 jnz     short loc_12402 ;~ 01A2:23ED
cs=0x192;eip=0x0023ef; 	T(CMP(word_16fa2, 0x0FF));	// 5335 cmp     word_16FA2, 0FFh ;~ 01A2:23EF
cs=0x192;eip=0x0023f5; 	R(JZ(loc_12402));	// 5336 jz      short loc_12402 ;~ 01A2:23F5
cs=0x192;eip=0x0023f7; 	X(PUSH(si));	// 5337 push    si ;~ 01A2:23F7
cs=0x192;eip=0x0023f8; 	R(CALL(sub_12023,0));	// 5338 call    sub_12023 ;~ 01A2:23F8
cs=0x192;eip=0x0023fb; 	T(MOV(cx, 5));	// 5339 mov     cx, 5 ;~ 01A2:23FB
cs=0x192;eip=0x0023fe; 	R(CALL(sub_11f89,0));	// 5340 call    sub_11F89 ;~ 01A2:23FE
cs=0x192;eip=0x002401; 	X(POP(si));	// 5341 pop     si ;~ 01A2:2401
loc_12402:
	// 4958 
cs=0x192;eip=0x002402; 	X(DEC(byte_16f96));	// 5345 dec     byte_16F96 ;~ 01A2:2402
cs=0x192;eip=0x002406; 	R(JNZ(loc_1240c));	// 5346 jnz     short loc_1240C ;~ 01A2:2406
cs=0x192;eip=0x002408; 	X(MOV(*(raddr(ds,si+0x0B)), 0));	// 5347 mov     byte ptr [si+0Bh], 0 ;~ 01A2:2408
loc_1240c:
	// 4959 
cs=0x192;eip=0x00240c; 	T(MOV(bx, 0x6EF3));	// 5350 mov     bx, 6EF3h ;~ 01A2:240C
cs=0x192;eip=0x00240f; 	R(JMP(loc_1242e));	// 5351 jmp     short loc_1242E ;~ 01A2:240F
ret_1a2_2412:
	// 4960 
cs=0x192;eip=0x002412; 	X(MOV(*(raddr(ds,si+0x0B)), 3));	// 5354 mov     byte ptr [si+0Bh], 3 ;~ 01A2:2412
cs=0x192;eip=0x002416; 	T(MOV(bx, 0x6DC7));	// 5355 mov     bx, 6DC7h ;~ 01A2:2416
cs=0x192;eip=0x002419; 	R(JMP(loc_1242e));	// 5356 jmp     short loc_1242E ;~ 01A2:2419
ret_1a2_241c:
	// 4961 
cs=0x192;eip=0x00241c; 	R(CALL(sub_12023,0));	// 5359 call    sub_12023 ;~ 01A2:241C
cs=0x192;eip=0x00241f; 	X(PUSH(si));	// 5360 push    si ;~ 01A2:241F
cs=0x192;eip=0x002420; 	T(MOV(cx, 3));	// 5361 mov     cx, 3 ;~ 01A2:2420
cs=0x192;eip=0x002423; 	R(CALL(sub_11f89,0));	// 5362 call    sub_11F89 ;~ 01A2:2423
cs=0x192;eip=0x002426; 	X(POP(si));	// 5363 pop     si ;~ 01A2:2426
cs=0x192;eip=0x002427; 	X(MOV(*(raddr(ds,si+0x0B)), 1));	// 5364 mov     byte ptr [si+0Bh], 1 ;~ 01A2:2427
cs=0x192;eip=0x00242b; 	T(MOV(bx, 0x6E07));	// 5365 mov     bx, 6E07h ;~ 01A2:242B
loc_1242e:
	// 4962 
cs=0x192;eip=0x00242e; 	X(MOV(word_16f9f, bx));	// 5369 mov     word_16F9F, bx ;~ 01A2:242E
cs=0x192;eip=0x002432; 	T(MOV(bx, offset(seg000,byte_16fa6)));	// 5370 mov     bx, offset byte_16FA6 ;~ 01A2:2432
cs=0x192;eip=0x002435; 	T(TEST(*(raddr(ds,si+9)), 0x80));	// 5371 test    byte ptr [si+9], 80h ;~ 01A2:2435
cs=0x192;eip=0x002439; 	R(JZ(loc_1243e));	// 5372 jz      short loc_1243E ;~ 01A2:2439
cs=0x192;eip=0x00243b; 	T(MOV(bx, offset(seg000,byte_16fa6)+1));	// 5373 mov     bx, (offset byte_16FA6+1) ;~ 01A2:243B
loc_1243e:
	// 4963 
cs=0x192;eip=0x00243e; 	T(MOV(al, byte_11bd9));	// 5376 mov     al, byte_11BD9 ;~ 01A2:243E
cs=0x192;eip=0x002441; 	X(MOV(*(raddr(ds,bx)), al));	// 5377 mov     [bx], al ;~ 01A2:2441
cs=0x192;eip=0x002443; 	T(MOV(bx, m2c::kloc_10904));	// 5378 mov     bx, offset loc_10904 ;~ 01A2:2443
cs=0x192;eip=0x002446; 	T(TEST(*(raddr(ds,si+9)), 0x80));	// 5379 test    byte ptr [si+9], 80h ;~ 01A2:2446
cs=0x192;eip=0x00244a; 	R(JZ(loc_1244f));	// 5380 jz      short loc_1244F ;~ 01A2:244A
cs=0x192;eip=0x00244c; 	T(MOV(bx, m2c::kloc_10b43+1));	// 5381 mov     bx, (offset loc_10B43+1) ;~ 01A2:244C
loc_1244f:
	// 4964 
cs=0x192;eip=0x00244f; 	T(ADD(bx, *(dw*)(raddr(ds,si+3))));	// 5384 add     bx, [si+3] ;~ 01A2:244F
cs=0x192;eip=0x002452; 	T(MOV(dx, word_16f9f));	// 5385 mov     dx, word_16F9F ;~ 01A2:2452
cs=0x192;eip=0x002456; 	T(MOV(cl, byte_16f99));	// 5386 mov     cl, byte_16F99 ;~ 01A2:2456
cs=0x192;eip=0x00245a; 	T(MOV(ch, byte_16f9a));	// 5387 mov     ch, byte_16F9A ;~ 01A2:245A
cs=0x192;eip=0x00245e; 	T(MOV(ah, *(raddr(ds,si+9))));	// 5388 mov     ah, [si+9] ;~ 01A2:245E
cs=0x192;eip=0x002461; 	T(AND(ah, 0x7F));	// 5389 and     ah, 7Fh ;~ 01A2:2461
cs=0x192;eip=0x002464; 	T(MOV(al, *(raddr(ds,si+1))));	// 5390 mov     al, [si+1] ;~ 01A2:2464
cs=0x192;eip=0x002467; 	X(PUSH(si));	// 5391 push    si ;~ 01A2:2467
cs=0x192;eip=0x002468; 	R(CALL(sub_11dfd,0));	// 5392 call    sub_11DFD ;~ 01A2:2468
cs=0x192;eip=0x00246b; 	X(POP(si));	// 5393 pop     si ;~ 01A2:246B
cs=0x192;eip=0x00246c; 	X(PUSH(si));	// 5394 push    si ;~ 01A2:246C
cs=0x192;eip=0x00246d; 	R(CALL(sub_12553,0));	// 5395 call    sub_12553 ;~ 01A2:246D
cs=0x192;eip=0x002470; 	X(POP(si));	// 5396 pop     si ;~ 01A2:2470
cs=0x192;eip=0x002471; 	R(JMP(loc_124c1));	// 5397 jmp     short loc_124C1 ;~ 01A2:2471
loc_12474:
	// 4965 
cs=0x192;eip=0x002474; 	T(MOV(al, *(raddr(ds,si+0x0B))));	// 5403 mov     al, [si+0Bh] ;~ 01A2:2474
cs=0x192;eip=0x002477; 	T(CMP(al, 0x0C));	// 5404 cmp     al, 0Ch ;~ 01A2:2477
cs=0x192;eip=0x002479; 	R(JNZ(loc_12482));	// 5405 jnz     short loc_12482 ;~ 01A2:2479
cs=0x192;eip=0x00247b; 	X(MOV(*(raddr(ds,si+0x0B)), 7));	// 5406 mov     byte ptr [si+0Bh], 7 ;~ 01A2:247B
cs=0x192;eip=0x00247f; 	R(JMP(loc_124c1));	// 5407 jmp     short loc_124C1 ;~ 01A2:247F
loc_12482:
	// 4966 
cs=0x192;eip=0x002482; 	T(CMP(al, 0x0B));	// 5412 cmp     al, 0Bh ;~ 01A2:2482
cs=0x192;eip=0x002484; 	R(JZ(loc_124bd));	// 5413 jz      short loc_124BD ;~ 01A2:2484
cs=0x192;eip=0x002486; 	T(CMP(al, 9));	// 5414 cmp     al, 9 ;~ 01A2:2486
cs=0x192;eip=0x002488; 	R(JNZ(loc_12496));	// 5415 jnz     short loc_12496 ;~ 01A2:2488
cs=0x192;eip=0x00248a; 	X(XOR(byte_11bd9, 1));	// 5416 xor     byte_11BD9, 1 ;~ 01A2:248A
cs=0x192;eip=0x00248f; 	X(MOV(*(raddr(ds,si+0x0B)), 1));	// 5417 mov     byte ptr [si+0Bh], 1 ;~ 01A2:248F
cs=0x192;eip=0x002493; 	R(JMP(loc_124c1));	// 5418 jmp     short loc_124C1 ;~ 01A2:2493
loc_12496:
	// 4967 
cs=0x192;eip=0x002496; 	T(CMP(al, 7));	// 5423 cmp     al, 7 ;~ 01A2:2496
cs=0x192;eip=0x002498; 	R(JNZ(loc_124a2));	// 5424 jnz     short loc_124A2 ;~ 01A2:2498
cs=0x192;eip=0x00249a; 	X(XOR(byte_11bd9, 1));	// 5425 xor     byte_11BD9, 1 ;~ 01A2:249A
cs=0x192;eip=0x00249f; 	R(JMP(loc_124bd));	// 5426 jmp     short loc_124BD ;~ 01A2:249F
loc_124a2:
	// 4968 
cs=0x192;eip=0x0024a2; 	T(CMP(al, 6));	// 5431 cmp     al, 6 ;~ 01A2:24A2
cs=0x192;eip=0x0024a4; 	R(JZ(loc_124c1));	// 5432 jz      short loc_124C1 ;~ 01A2:24A4
cs=0x192;eip=0x0024a6; 	T(CMP(al, 4));	// 5433 cmp     al, 4 ;~ 01A2:24A6
cs=0x192;eip=0x0024a8; 	R(JNZ(loc_124b1));	// 5434 jnz     short loc_124B1 ;~ 01A2:24A8
loc_124aa:
	// 4969 
cs=0x192;eip=0x0024aa; 	X(MOV(*(raddr(ds,si+0x0B)), 1));	// 5437 mov     byte ptr [si+0Bh], 1 ;~ 01A2:24AA
cs=0x192;eip=0x0024ae; 	R(JMP(loc_124c1));	// 5438 jmp     short loc_124C1 ;~ 01A2:24AE
loc_124b1:
	// 4970 
cs=0x192;eip=0x0024b1; 	T(CMP(al, 5));	// 5444 cmp     al, 5 ;~ 01A2:24B1
cs=0x192;eip=0x0024b3; 	R(JZ(loc_124c1));	// 5445 jz      short loc_124C1 ;~ 01A2:24B3
cs=0x192;eip=0x0024b5; 	T(CMP(al, 0x0A));	// 5446 cmp     al, 0Ah ;~ 01A2:24B5
cs=0x192;eip=0x0024b7; 	R(JZ(loc_124aa));	// 5447 jz      short loc_124AA ;~ 01A2:24B7
cs=0x192;eip=0x0024b9; 	T(CMP(al, 2));	// 5448 cmp     al, 2 ;~ 01A2:24B9
cs=0x192;eip=0x0024bb; 	R(JC(loc_124c1));	// 5449 jb      short loc_124C1 ;~ 01A2:24BB
loc_124bd:
	// 4971 
cs=0x192;eip=0x0024bd; 	X(MOV(*(raddr(ds,si+0x0B)), 0));	// 5453 mov     byte ptr [si+0Bh], 0 ;~ 01A2:24BD
loc_124c1:
	// 4972 
cs=0x192;eip=0x0024c1; 	X(MOV(word_15b20, 0x1BB4));	// 5457 mov     word_15B20, 1BB4h ;~ 01A2:24C1
cs=0x192;eip=0x0024c7; 	R(CALL(sub_12549,0));	// 5458 call    sub_12549 ;~ 01A2:24C7
cs=0x192;eip=0x0024ca; 	R(CALL(sub_1252e,0));	// 5459 call    sub_1252E ;~ 01A2:24CA
cs=0x192;eip=0x0024cd; 	T(ADD(si, 0x0C));	// 5460 add     si, 0Ch ;~ 01A2:24CD
cs=0x192;eip=0x0024d0; 	X(MOV(word_15b1e, 0x5FC7));	// 5461 mov     word_15B1E, 5FC7h ;~ 01A2:24D0
cs=0x192;eip=0x0024d6; 	X(MOV(*(db*)(((db*)&word_15b1c)), 5));	// 5462 mov     byte ptr word_15B1C, 5 ;~ 01A2:24D6
cs=0x192;eip=0x0024db; 	X(MOV(byte_16f9a, 6));	// 5463 mov     byte_16F9A, 6 ;~ 01A2:24DB
cs=0x192;eip=0x0024e0; 	X(MOV(byte_16f9c, 6));	// 5464 mov     byte_16F9C, 6 ;~ 01A2:24E0
cs=0x192;eip=0x0024e5; 	X(MOV(byte_16f99, 7));	// 5465 mov     byte_16F99, 7 ;~ 01A2:24E5
cs=0x192;eip=0x0024ea; 	X(MOV(byte_16f9b, 8));	// 5466 mov     byte_16F9B, 8 ;~ 01A2:24EA
cs=0x192;eip=0x0024ef; 	X(MOV(*(db*)(((db*)&word_15b1a)), 0x0C));	// 5467 mov     byte ptr word_15B1A, 0Ch ;~ 01A2:24EF
cs=0x192;eip=0x0024f4; 	X(MOV(*(db*)(((db*)&word_15b18)), 0x1A));	// 5468 mov     byte ptr word_15B18, 1Ah ;~ 01A2:24F4
cs=0x192;eip=0x0024f9; 	X(POP(cx));	// 5469 pop     cx ;~ 01A2:24F9
cs=0x192;eip=0x0024fa; 	T(DEC(cx));	// 5470 dec     cx ;~ 01A2:24FA
cs=0x192;eip=0x0024fb; 	R(JCXZ(loc_12500));	// 5471 jcxz    short loc_12500 ;~ 01A2:24FB
cs=0x192;eip=0x0024fd; 	R(JMP(loc_1208a));	// 5472 jmp     loc_1208A ;~ 01A2:24FD
loc_12500:
	// 4973 
cs=0x192;eip=0x002500; 	X(MOV(byte_16fa1, 0));	// 5476 mov     byte_16FA1, 0 ;~ 01A2:2500
cs=0x192;eip=0x002505; 	R(RETN(0));	// 5477 retn ;~ 01A2:2505

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_10694: 	goto loc_10694;
        case m2c::kloc_1069a: 	goto loc_1069a;
        case m2c::kloc_106ae: 	goto loc_106ae;
        case m2c::kloc_106e5: 	goto loc_106e5;
        case m2c::kloc_106f0: 	goto loc_106f0;
        case m2c::kloc_106f8: 	goto loc_106f8;
        case m2c::kloc_1070b: 	goto loc_1070b;
        case m2c::kloc_10717: 	goto loc_10717;
        case m2c::kloc_10733: 	goto loc_10733;
        case m2c::kloc_1074b: 	goto loc_1074b;
        case m2c::kloc_10756: 	goto loc_10756;
        case m2c::kloc_10759: 	goto loc_10759;
        case m2c::kloc_1075f: 	goto loc_1075f;
        case m2c::kloc_10773: 	goto loc_10773;
        case m2c::kloc_10783: 	goto loc_10783;
        case m2c::kloc_10797: 	goto loc_10797;
        case m2c::kloc_107a5: 	goto loc_107a5;
        case m2c::kloc_107b1: 	goto loc_107b1;
        case m2c::kloc_107dd: 	goto loc_107dd;
        case m2c::kloc_107e7: 	goto loc_107e7;
        case m2c::kloc_107ee: 	goto loc_107ee;
        case m2c::kloc_10849: 	goto loc_10849;
        case m2c::kloc_10868: 	goto loc_10868;
        case m2c::kloc_1088e: 	goto loc_1088e;
        case m2c::kloc_108b4: 	goto loc_108b4;
        case m2c::kloc_108b7: 	goto loc_108b7;
        case m2c::kloc_108b9: 	goto loc_108b9;
        case m2c::kloc_108c1: 	goto loc_108c1;
        case m2c::kloc_108d8: 	goto loc_108d8;
        case m2c::kloc_10904: 	goto loc_10904;
        case m2c::kloc_10984: 	goto loc_10984;
        case m2c::kloc_1098b: 	goto loc_1098b;
        case m2c::kloc_1098d: 	goto loc_1098d;
        case m2c::kloc_109d1: 	goto loc_109d1;
        case m2c::kloc_109d5: 	goto loc_109d5;
        case m2c::kloc_109e4: 	goto loc_109e4;
        case m2c::kloc_10a1f: 	goto loc_10a1f;
        case m2c::kloc_10a33: 	goto loc_10a33;
        case m2c::kloc_10a3f: 	goto loc_10a3f;
        case m2c::kloc_10a44: 	goto loc_10a44;
        case m2c::kloc_10a75: 	goto loc_10a75;
        case m2c::kloc_10a7b: 	goto loc_10a7b;
        case m2c::kloc_10a88: 	goto loc_10a88;
        case m2c::kloc_10aae: 	goto loc_10aae;
        case m2c::kloc_10ab5: 	goto loc_10ab5;
        case m2c::kloc_10ab8: 	goto loc_10ab8;
        case m2c::kloc_10acd: 	goto loc_10acd;
        case m2c::kloc_10b06: 	goto loc_10b06;
        case m2c::kloc_10b19: 	goto loc_10b19;
        case m2c::kloc_10b2f: 	goto loc_10b2f;
        case m2c::kloc_10b3f: 	goto loc_10b3f;
        case m2c::kloc_10b43: 	goto loc_10b43;
        case m2c::kloc_10b4c: 	goto loc_10b4c;
        case m2c::kloc_10b4e: 	goto loc_10b4e;
        case m2c::kloc_10b63: 	goto loc_10b63;
        case m2c::kloc_10b9d: 	goto loc_10b9d;
        case m2c::kloc_10bad: 	goto loc_10bad;
        case m2c::kloc_10bc8: 	goto loc_10bc8;
        case m2c::kloc_10bca: 	goto loc_10bca;
        case m2c::kloc_10ee3: 	goto loc_10ee3;
        case m2c::kloc_10ef4: 	goto loc_10ef4;
        case m2c::kloc_10f1c: 	goto loc_10f1c;
        case m2c::kloc_10f2a: 	goto loc_10f2a;
        case m2c::kloc_10f30: 	goto loc_10f30;
        case m2c::kloc_10f50: 	goto loc_10f50;
        case m2c::kloc_10f57: 	goto loc_10f57;
        case m2c::kloc_10f66: 	goto loc_10f66;
        case m2c::kloc_10f83: 	goto loc_10f83;
        case m2c::kloc_10f87: 	goto loc_10f87;
        case m2c::kloc_10f99: 	goto loc_10f99;
        case m2c::kloc_10fd3: 	goto loc_10fd3;
        case m2c::kloc_10fdf: 	goto loc_10fdf;
        case m2c::kloc_10fe5: 	goto loc_10fe5;
        case m2c::kloc_10fef: 	goto loc_10fef;
        case m2c::kloc_10ffb: 	goto loc_10ffb;
        case m2c::kloc_1100d: 	goto loc_1100d;
        case m2c::kloc_11022: 	goto loc_11022;
        case m2c::kloc_11e18: 	goto loc_11e18;
        case m2c::kloc_11e21: 	goto loc_11e21;
        case m2c::kloc_11e36: 	goto loc_11e36;
        case m2c::kloc_11e42: 	goto loc_11e42;
        case m2c::kloc_11e43: 	goto loc_11e43;
        case m2c::kloc_11e5c: 	goto loc_11e5c;
        case m2c::kloc_11e74: 	goto loc_11e74;
        case m2c::kloc_11e76: 	goto loc_11e76;
        case m2c::kloc_11e7d: 	goto loc_11e7d;
        case m2c::kloc_11e92: 	goto loc_11e92;
        case m2c::kloc_11e9e: 	goto loc_11e9e;
        case m2c::kloc_11e9f: 	goto loc_11e9f;
        case m2c::kloc_12042: 	goto loc_12042;
        case m2c::kloc_1204d: 	goto loc_1204d;
        case m2c::kloc_12074: 	goto loc_12074;
        case m2c::kloc_1208a: 	goto loc_1208a;
        case m2c::kloc_120a2: 	goto loc_120a2;
        case m2c::kloc_120a5: 	goto loc_120a5;
        case m2c::kloc_120d1: 	goto loc_120d1;
        case m2c::kloc_120df: 	goto loc_120df;
        case m2c::kloc_120e2: 	goto loc_120e2;
        case m2c::kloc_120f7: 	goto loc_120f7;
        case m2c::kloc_1211f: 	goto loc_1211f;
        case m2c::kloc_12133: 	goto loc_12133;
        case m2c::kloc_1213e: 	goto loc_1213e;
        case m2c::kloc_12143: 	goto loc_12143;
        case m2c::kloc_12151: 	goto loc_12151;
        case m2c::kloc_12164: 	goto loc_12164;
        case m2c::kloc_12175: 	goto loc_12175;
        case m2c::kloc_12186: 	goto loc_12186;
        case m2c::kloc_1218c: 	goto loc_1218c;
        case m2c::kloc_12196: 	goto loc_12196;
        case m2c::kloc_12199: 	goto loc_12199;
        case m2c::kloc_121b6: 	goto loc_121b6;
        case m2c::kloc_121e0: 	goto loc_121e0;
        case m2c::kloc_121fc: 	goto loc_121fc;
        case m2c::kloc_12207: 	goto loc_12207;
        case m2c::kloc_12224: 	goto loc_12224;
        case m2c::kloc_1224a: 	goto loc_1224a;
        case m2c::kloc_1225b: 	goto loc_1225b;
        case m2c::kloc_12273: 	goto loc_12273;
        case m2c::kloc_122bc: 	goto loc_122bc;
        case m2c::kloc_122f1: 	goto loc_122f1;
        case m2c::kloc_122f4: 	goto loc_122f4;
        case m2c::kloc_12303: 	goto loc_12303;
        case m2c::kloc_12319: 	goto loc_12319;
        case m2c::kloc_1231c: 	goto loc_1231c;
        case m2c::kloc_1233e: 	goto loc_1233e;
        case m2c::kloc_12348: 	goto loc_12348;
        case m2c::kloc_1235b: 	goto loc_1235b;
        case m2c::kloc_12376: 	goto loc_12376;
        case m2c::kloc_1238b: 	goto loc_1238b;
        case m2c::kloc_12399: 	goto loc_12399;
        case m2c::kloc_123a0: 	goto loc_123a0;
        case m2c::kloc_123aa: 	goto loc_123aa;
        case m2c::kloc_123c1: 	goto loc_123c1;
        case m2c::kloc_12402: 	goto loc_12402;
        case m2c::kloc_1240c: 	goto loc_1240c;
        case m2c::kloc_1242e: 	goto loc_1242e;
        case m2c::kloc_1243e: 	goto loc_1243e;
        case m2c::kloc_1244f: 	goto loc_1244f;
        case m2c::kloc_12474: 	goto loc_12474;
        case m2c::kloc_12482: 	goto loc_12482;
        case m2c::kloc_12496: 	goto loc_12496;
        case m2c::kloc_124a2: 	goto loc_124a2;
        case m2c::kloc_124aa: 	goto loc_124aa;
        case m2c::kloc_124b1: 	goto loc_124b1;
        case m2c::kloc_124bd: 	goto loc_124bd;
        case m2c::kloc_124c1: 	goto loc_124c1;
        case m2c::kloc_12500: 	goto loc_12500;
        case m2c::klocret_107b9: 	goto locret_107b9;
        case m2c::klocret_11049: 	goto locret_11049;
        case m2c::kret_1a2_1dce: 	goto ret_1a2_1dce;
        case m2c::kret_1a2_1de7: 	goto ret_1a2_1de7;
        case m2c::kret_1a2_1e00: 	goto ret_1a2_1e00;
        case m2c::kret_1a2_2036: 	goto ret_1a2_2036;
        case m2c::kret_1a2_221c: 	goto ret_1a2_221c;
        case m2c::kret_1a2_22fb: 	goto ret_1a2_22fb;
        case m2c::kret_1a2_2323: 	goto ret_1a2_2323;
        case m2c::kret_1a2_234e: 	goto ret_1a2_234e;
        case m2c::kret_1a2_23b0: 	goto ret_1a2_23b0;
        case m2c::kret_1a2_23ba: 	goto ret_1a2_23ba;
        case m2c::kret_1a2_23c9: 	goto ret_1a2_23c9;
        case m2c::kret_1a2_23d3: 	goto ret_1a2_23d3;
        case m2c::kret_1a2_23dc: 	goto ret_1a2_23dc;
        case m2c::kret_1a2_23e2: 	goto ret_1a2_23e2;
        case m2c::kret_1a2_23e8: 	goto ret_1a2_23e8;
        case m2c::kret_1a2_2412: 	goto ret_1a2_2412;
        case m2c::kret_1a2_241c: 	goto ret_1a2_241c;
        case m2c::kret_1a2_665: 	goto ret_1a2_665;
        case m2c::kret_1a2_707: 	goto ret_1a2_707;
        case m2c::kret_1a2_730: 	goto ret_1a2_730;
        case m2c::kret_1a2_7bf: 	goto ret_1a2_7bf;
        case m2c::kret_1a2_7cb: 	goto ret_1a2_7cb;
        case m2c::kret_1a2_7d0: 	goto ret_1a2_7d0;
        case m2c::kret_1a2_7d5: 	goto ret_1a2_7d5;
        case m2c::kret_1a2_7da: 	goto ret_1a2_7da;
        case m2c::kret_1a2_7f1: 	goto ret_1a2_7f1;
        case m2c::kret_1a2_7f6: 	goto ret_1a2_7f6;
        case m2c::kret_1a2_7fb: 	goto ret_1a2_7fb;
        case m2c::kret_1a2_800: 	goto ret_1a2_800;
        case m2c::kret_1a2_805: 	goto ret_1a2_805;
        case m2c::kret_1a2_80a: 	goto ret_1a2_80a;
        case m2c::kret_1a2_80f: 	goto ret_1a2_80f;
        case m2c::kret_1a2_814: 	goto ret_1a2_814;
        case m2c::kret_1a2_819: 	goto ret_1a2_819;
        case m2c::kret_1a2_81e: 	goto ret_1a2_81e;
        case m2c::kret_1a2_823: 	goto ret_1a2_823;
        case m2c::kret_1a2_828: 	goto ret_1a2_828;
        case m2c::kret_1a2_82d: 	goto ret_1a2_82d;
        case m2c::kret_1a2_832: 	goto ret_1a2_832;
        case m2c::kret_1a2_837: 	goto ret_1a2_837;
        case m2c::kret_1a2_83c: 	goto ret_1a2_83c;
        case m2c::kret_1a2_841: 	goto ret_1a2_841;
        case m2c::kret_1a2_846: 	goto ret_1a2_846;
        case m2c::kret_1a2_853: 	goto ret_1a2_853;
        case m2c::kret_1a2_860: 	goto ret_1a2_860;
        case m2c::kret_1a2_865: 	goto ret_1a2_865;
        case m2c::kret_1a2_86d: 	goto ret_1a2_86d;
        case m2c::kret_1a2_872: 	goto ret_1a2_872;
        case m2c::kret_1a2_877: 	goto ret_1a2_877;
        case m2c::kret_1a2_87c: 	goto ret_1a2_87c;
        case m2c::kret_1a2_881: 	goto ret_1a2_881;
        case m2c::kret_1a2_886: 	goto ret_1a2_886;
        case m2c::kret_1a2_88b: 	goto ret_1a2_88b;
        case m2c::kret_1a2_898: 	goto ret_1a2_898;
        case m2c::kret_1a2_89d: 	goto ret_1a2_89d;
        case m2c::kret_1a2_8a2: 	goto ret_1a2_8a2;
        case m2c::kret_1a2_8a7: 	goto ret_1a2_8a7;
        case m2c::kret_1a2_8b1: 	goto ret_1a2_8b1;
        case m2c::kret_1a2_8be: 	goto ret_1a2_8be;
        case m2c::kret_1a2_8cb: 	goto ret_1a2_8cb;
        case m2c::kret_1a2_8d0: 	goto ret_1a2_8d0;
        case m2c::kret_1a2_8d5: 	goto ret_1a2_8d5;
        case m2c::kret_1a2_8e2: 	goto ret_1a2_8e2;
        case m2c::kret_1a2_8e7: 	goto ret_1a2_8e7;
        case m2c::kret_1a2_8ec: 	goto ret_1a2_8ec;
        case m2c::kret_1a2_90b: 	goto ret_1a2_90b;
        case m2c::kret_1a2_918: 	goto ret_1a2_918;
        case m2c::kret_1a2_925: 	goto ret_1a2_925;
        case m2c::kret_1a2_932: 	goto ret_1a2_932;
        case m2c::kret_1a2_93f: 	goto ret_1a2_93f;
        case m2c::kret_1a2_94c: 	goto ret_1a2_94c;
        case m2c::kret_1a2_959: 	goto ret_1a2_959;
        case m2c::kret_1a2_962: 	goto ret_1a2_962;
        case m2c::kret_1a2_96b: 	goto ret_1a2_96b;
        case m2c::kret_1a2_974: 	goto ret_1a2_974;
        case m2c::kret_1a2_97d: 	goto ret_1a2_97d;
        case m2c::kret_1a2_9a4: 	goto ret_1a2_9a4;
        case m2c::kret_1a2_9b0: 	goto ret_1a2_9b0;
        case m2c::kret_1a2_9c1: 	goto ret_1a2_9c1;
        case m2c::kret_1a2_9ed: 	goto ret_1a2_9ed;
        case m2c::kret_1a2_9f9: 	goto ret_1a2_9f9;
        case m2c::kret_1a2_9fe: 	goto ret_1a2_9fe;
        case m2c::kret_1a2_a03: 	goto ret_1a2_a03;
        case m2c::kret_1a2_a08: 	goto ret_1a2_a08;
        case m2c::kret_1a2_a0d: 	goto ret_1a2_a0d;
        case m2c::kret_1a2_a12: 	goto ret_1a2_a12;
        case m2c::kret_1a2_a17: 	goto ret_1a2_a17;
        case m2c::kret_1a2_a1c: 	goto ret_1a2_a1c;
        case m2c::kret_1a2_a26: 	goto ret_1a2_a26;
        case m2c::kret_1a2_a2b: 	goto ret_1a2_a2b;
        case m2c::kret_1a2_a30: 	goto ret_1a2_a30;
        case m2c::kret_1a2_a3c: 	goto ret_1a2_a3c;
        case m2c::kret_1a2_a48: 	goto ret_1a2_a48;
        case m2c::kret_1a2_a55: 	goto ret_1a2_a55;
        case m2c::kret_1a2_a69: 	goto ret_1a2_a69;
        case m2c::kret_1a2_a78: 	goto ret_1a2_a78;
        case m2c::kret_1a2_a85: 	goto ret_1a2_a85;
        case m2c::kret_1a2_a92: 	goto ret_1a2_a92;
        case m2c::kret_1a2_a97: 	goto ret_1a2_a97;
        case m2c::kret_1a2_a9c: 	goto ret_1a2_a9c;
        case m2c::kret_1a2_aa4: 	goto ret_1a2_aa4;
        case m2c::kret_1a2_aa8: 	goto ret_1a2_aa8;
        case m2c::kret_1a2_aac: 	goto ret_1a2_aac;
        case m2c::kret_1a2_ab3: 	goto ret_1a2_ab3;
        case m2c::kret_1a2_abb: 	goto ret_1a2_abb;
        case m2c::kret_1a2_abf: 	goto ret_1a2_abf;
        case m2c::kret_1a2_ad3: 	goto ret_1a2_ad3;
        case m2c::kret_1a2_adf: 	goto ret_1a2_adf;
        case m2c::kret_1a2_aef: 	goto ret_1a2_aef;
        case m2c::kret_1a2_af4: 	goto ret_1a2_af4;
        case m2c::kret_1a2_afe: 	goto ret_1a2_afe;
        case m2c::kret_1a2_b03: 	goto ret_1a2_b03;
        case m2c::kret_1a2_b21: 	goto ret_1a2_b21;
        case m2c::kret_1a2_b25: 	goto ret_1a2_b25;
        case m2c::kret_1a2_b29: 	goto ret_1a2_b29;
        case m2c::kret_1a2_b2d: 	goto ret_1a2_b2d;
        case m2c::kret_1a2_b47: 	goto ret_1a2_b47;
        case m2c::kret_1a2_b86: 	goto ret_1a2_b86;
        case m2c::kret_1a2_b8b: 	goto ret_1a2_b8b;
        case m2c::kret_1a2_b90: 	goto ret_1a2_b90;
        case m2c::kret_1a2_b9a: 	goto ret_1a2_b9a;
        case m2c::kret_1a2_bba: 	goto ret_1a2_bba;
        case m2c::kret_1a2_ebf: 	goto ret_1a2_ebf;
        case m2c::kseg000_7ba_proc: 	goto seg000_7ba_proc;
        case m2c::ksub_10660: 	goto sub_10660;
        case m2c::ksub_10ebc: 	goto sub_10ebc;
        case m2c::ksub_11dca: 	goto sub_11dca;
        case m2c::ksub_11de3: 	goto sub_11de3;
        case m2c::ksub_11dfd: 	goto sub_11dfd;
        case m2c::ksub_12032: 	goto sub_12032;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_10bdd(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_10bdd:
    _begin:
cs=0x192;eip=0x000bdd; 	T(MOV(di, 0x6C4));	// 1753 mov     di, 6C4h ;~ 01A2:0BDD
ret_1a2_be0:
	// 4589 
cs=0x192;eip=0x000be0; 	T(MOV(ax, 0x0FFFF));	// 1754 mov     ax, 0FFFFh ;~ 01A2:0BE0
cs=0x192;eip=0x000be3; 	T(MOV(cx, 0x120));	// 1755 mov     cx, 120h ;~ 01A2:0BE3
cs=0x192;eip=0x000be6; 	T(CLD);	// 1756 cld ;~ 01A2:0BE6
	// 1757 rep stosw ;~ 01A2:0BE7
cs=0x192;eip=0x000be7; 	X(	REP STOSW);	// 1757 rep stosw ;~ 01A2:0BE7
cs=0x192;eip=0x000be9; 	R(RETN(0));	// 1758 retn ;~ 01A2:0BE9

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1a2_be0: 	goto ret_1a2_be0;
        case m2c::ksub_10bdd: 	goto sub_10bdd;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_10bea(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_10bea:
    _begin:
cs=0x192;eip=0x000bea; 	T(MOV(di, 0x904));	// 1767 mov     di, 904h ;~ 01A2:0BEA
ret_1a2_bed:
	// 4590 
cs=0x192;eip=0x000bed; 	T(MOV(ax, 0x0FFFF));	// 1768 mov     ax, 0FFFFh ;~ 01A2:0BED
cs=0x192;eip=0x000bf0; 	T(MOV(cx, 0x240));	// 1769 mov     cx, 240h ;~ 01A2:0BF0
cs=0x192;eip=0x000bf3; 	T(CLD);	// 1770 cld ;~ 01A2:0BF3
	// 1771 rep stosw ;~ 01A2:0BF4
cs=0x192;eip=0x000bf4; 	X(	REP STOSW);	// 1771 rep stosw ;~ 01A2:0BF4
cs=0x192;eip=0x000bf6; 	R(RETN(0));	// 1772 retn ;~ 01A2:0BF6

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1a2_bed: 	goto ret_1a2_bed;
        case m2c::ksub_10bea: 	goto sub_10bea;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_10bf7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_10bf7:
    _begin:
cs=0x192;eip=0x000bf7; 	X(PUSH(cx));	// 1781 push    cx ;~ 01A2:0BF7
loc_10bf8:
	// 4591 
cs=0x192;eip=0x000bf8; 	T(LODSB);	// 1784 lodsb ;~ 01A2:0BF8
cs=0x192;eip=0x000bf9; 	T(ADD(al, 0x0A4));	// 1785 add     al, 0A4h ; '¤' ;~ 01A2:0BF9
cs=0x192;eip=0x000bfb; 	X(MOV(*(raddr(ds,bx)), al));	// 1786 mov     [bx], al ;~ 01A2:0BFB
cs=0x192;eip=0x000bfd; 	T(INC(bx));	// 1787 inc     bx ;~ 01A2:0BFD
cs=0x192;eip=0x000bfe; 	R(LOOP(loc_10bf8));	// 1788 loop    loc_10BF8 ;~ 01A2:0BFE
cs=0x192;eip=0x000c00; 	X(POP(cx));	// 1789 pop     cx ;~ 01A2:0C00
cs=0x192;eip=0x000c01; 	T(SUB(bx, 0x480));	// 1790 sub     bx, 480h ;~ 01A2:0C01
loc_10c05:
	// 4592 
cs=0x192;eip=0x000c05; 	T(DEC(bx));	// 1793 dec     bx ;~ 01A2:0C05
cs=0x192;eip=0x000c06; 	X(MOV(*(raddr(ds,bx)), 1));	// 1794 mov     byte ptr [bx], 1 ;~ 01A2:0C06
cs=0x192;eip=0x000c09; 	R(LOOP(loc_10c05));	// 1795 loop    loc_10C05 ;~ 01A2:0C09
cs=0x192;eip=0x000c0b; 	R(RETN(0));	// 1796 retn ;~ 01A2:0C0B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_10bf8: 	goto loc_10bf8;
        case m2c::kloc_10c05: 	goto loc_10c05;
        case m2c::ksub_10bf7: 	goto sub_10bf7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool _group5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group5:
    _begin:
nullsub_1:
	// 1803 
cs=0x192;eip=0x000c0c; 	R(RETN(0));	// 1804 retn ;~ 01A2:0C0C
sub_10c0d:
	// 1811 
cs=0x192;eip=0x000c0d; 	T(MOV(ax, *(dw*)((byte_15631)+0x192)));	// 1813 mov     ax, word ptr byte_15631+192h ;~ 01A2:0C0D
ret_1a2_c10:
	// 4593 
cs=0x192;eip=0x000c10; 	T(XOR(al, 4));	// 1814 xor     al, 4 ;~ 01A2:0C10
cs=0x192;eip=0x000c12; 	T(MOV(ah, 0));	// 1815 mov     ah, 0 ;~ 01A2:0C12
cs=0x192;eip=0x000c14; 	X(MOV(*(dw*)((byte_15631)+0x192), ax));	// 1816 mov     word ptr byte_15631+192h, ax ;~ 01A2:0C14
cs=0x192;eip=0x000c17; 	T(MOV(di, 4));	// 1817 mov     di, 4 ;~ 01A2:0C17
cs=0x192;eip=0x000c1a; 	T(MOV(cx, 0x121));	// 1818 mov     cx, 121h ;~ 01A2:0C1A
loc_10c1d:
	// 4594 
cs=0x192;eip=0x000c1d; 	T(XOR(ax, ax));	// 1821 xor     ax, ax ;~ 01A2:0C1D
cs=0x192;eip=0x000c1f; 	T(CLD);	// 1822 cld ;~ 01A2:0C1F
	// 1823 repe scasw ;~ 01A2:0C20
cs=0x192;eip=0x000c20; 	T(	REPE SCASW);	// 1823 repe scasw ;~ 01A2:0C20
cs=0x192;eip=0x000c22; 	R(JCXZ(nullsub_1));	// 1824 jcxz    short nullsub_1 ;~ 01A2:0C22
cs=0x192;eip=0x000c24; 	X(PUSH(cx));	// 1825 push    cx ;~ 01A2:0C24
cs=0x192;eip=0x000c25; 	X(PUSH(di));	// 1826 push    di ;~ 01A2:0C25
cs=0x192;eip=0x000c26; 	T(DEC(di));	// 1827 dec     di ;~ 01A2:0C26
cs=0x192;eip=0x000c27; 	T(DEC(di));	// 1828 dec     di ;~ 01A2:0C27
loc_10c28:
	// 4595 
cs=0x192;eip=0x000c28; 	T(MOV(al, *(raddr(ds,di))));	// 1831 mov     al, [di] ;~ 01A2:0C28
cs=0x192;eip=0x000c2a; 	T(OR(al, al));	// 1832 or      al, al ;~ 01A2:0C2A
cs=0x192;eip=0x000c2c; 	R(JNZ(loc_10c31));	// 1833 jnz     short loc_10C31 ;~ 01A2:0C2C
cs=0x192;eip=0x000c2e; 	R(JMP(loc_10e23));	// 1834 jmp     loc_10E23 ;~ 01A2:0C2E
loc_10c31:
	// 4596 
cs=0x192;eip=0x000c31; 	T(MOV(al, *(raddr(ds,di+0x240))));	// 1838 mov     al, [di+240h] ;~ 01A2:0C31
cs=0x192;eip=0x000c35; 	X(MOV(*((byte_15631)+0x1A5), al));	// 1839 mov     byte_15631+1A5h, al ;~ 01A2:0C35
cs=0x192;eip=0x000c38; 	T(MOV(ah, 0));	// 1840 mov     ah, 0 ;~ 01A2:0C38
cs=0x192;eip=0x000c3a; 	T(MOV(bx, ax));	// 1841 mov     bx, ax ;~ 01A2:0C3A
cs=0x192;eip=0x000c3c; 	T(ADD(ax, ax));	// 1842 add     ax, ax ;~ 01A2:0C3C
cs=0x192;eip=0x000c3e; 	T(ADD(ax, ax));	// 1843 add     ax, ax ;~ 01A2:0C3E
cs=0x192;eip=0x000c40; 	T(ADD(ax, ax));	// 1844 add     ax, ax ;~ 01A2:0C40
cs=0x192;eip=0x000c42; 	T(ADD(ax, bx));	// 1845 add     ax, bx ;~ 01A2:0C42
cs=0x192;eip=0x000c44; 	T(ADD(ax, 0x3F3E));	// 1846 add     ax, 3F3Eh ;~ 01A2:0C44
cs=0x192;eip=0x000c47; 	T(MOV(si, ax));	// 1847 mov     si, ax ;~ 01A2:0C47
cs=0x192;eip=0x000c49; 	X(PUSH(di));	// 1848 push    di ;~ 01A2:0C49
cs=0x192;eip=0x000c4a; 	T(MOV(di, 0x57C5));	// 1849 mov     di, 57C5h ;~ 01A2:0C4A
cs=0x192;eip=0x000c4d; 	T(MOV(bl, *(raddr(ds,si+8))));	// 1850 mov     bl, [si+8] ;~ 01A2:0C4D
cs=0x192;eip=0x000c50; 	T(CMP(byte_11bda, 0));	// 1851 cmp     byte_11BDA, 0 ;~ 01A2:0C50
cs=0x192;eip=0x000c55; 	R(JZ(loc_10c5d));	// 1852 jz      short loc_10C5D ;~ 01A2:0C55
cs=0x192;eip=0x000c57; 	T(AND(bl, 0x0C7));	// 1853 and     bl, 0C7h ;~ 01A2:0C57
cs=0x192;eip=0x000c5a; 	T(OR(bl, 0x10));	// 1854 or      bl, 10h ;~ 01A2:0C5A
loc_10c5d:
	// 4597 
cs=0x192;eip=0x000c5d; 	T(MOV(al, bl));	// 1857 mov     al, bl ;~ 01A2:0C5D
cs=0x192;eip=0x000c5f; 	T(XOR(cx, cx));	// 1858 xor     cx, cx ;~ 01A2:0C5F
cs=0x192;eip=0x000c61; 	T(AND(al, 0x38));	// 1859 and     al, 38h ;~ 01A2:0C61
cs=0x192;eip=0x000c63; 	T(CMP(al, 0x20));	// 1860 cmp     al, 20h ; ' ' ;~ 01A2:0C63
cs=0x192;eip=0x000c65; 	R(
);	// 1861 jnz     short $+2 ;~ 01A2:0C65
loc_10c67:
	// 4598 
cs=0x192;eip=0x000c67; 	X(MOV(word_157d8, cx));	// 1864 mov     word_157D8, cx ;~ 01A2:0C67
cs=0x192;eip=0x000c6b; 	T(MOV(bh, 0));	// 1865 mov     bh, 0 ;~ 01A2:0C6B
cs=0x192;eip=0x000c6d; 	T(MOV(ax, bx));	// 1866 mov     ax, bx ;~ 01A2:0C6D
cs=0x192;eip=0x000c6f; 	T(SHL(bx, 1));	// 1867 shl     bx, 1 ;~ 01A2:0C6F
cs=0x192;eip=0x000c71; 	T(AND(bl, 0x0E));	// 1868 and     bl, 0Eh ;~ 01A2:0C71
cs=0x192;eip=0x000c74; 	T(ADD(bx, 0x1B72));	// 1869 add     bx, 1B72h ;~ 01A2:0C74
cs=0x192;eip=0x000c78; 	T(MOV(bp, *(dw*)(raddr(ds,bx))));	// 1870 mov     bp, [bx] ;~ 01A2:0C78
cs=0x192;eip=0x000c7a; 	T(MOV(bx, ax));	// 1871 mov     bx, ax ;~ 01A2:0C7A
cs=0x192;eip=0x000c7c; 	T(SHR(bl, 1));	// 1872 shr     bl, 1 ;~ 01A2:0C7C
cs=0x192;eip=0x000c7e; 	T(SHR(bl, 1));	// 1873 shr     bl, 1 ;~ 01A2:0C7E
cs=0x192;eip=0x000c80; 	T(AND(bl, 0x0E));	// 1874 and     bl, 0Eh ;~ 01A2:0C80
cs=0x192;eip=0x000c83; 	T(ADD(bx, 0x1B72));	// 1875 add     bx, 1B72h ;~ 01A2:0C83
cs=0x192;eip=0x000c87; 	T(MOV(dx, *(dw*)(raddr(ds,bx))));	// 1876 mov     dx, [bx] ;~ 01A2:0C87
cs=0x192;eip=0x000c89; 	T(MOV(cx, 8));	// 1877 mov     cx, 8 ;~ 01A2:0C89
loc_10c8c:
	// 4599 
cs=0x192;eip=0x000c8c; 	T(LODSB);	// 1880 lodsb ;~ 01A2:0C8C
cs=0x192;eip=0x000c8d; 	T(XOR(ah, ah));	// 1881 xor     ah, ah ;~ 01A2:0C8D
cs=0x192;eip=0x000c8f; 	T(SHL(ax, 1));	// 1882 shl     ax, 1 ;~ 01A2:0C8F
cs=0x192;eip=0x000c91; 	T(ADD(ax, 0x1972));	// 1883 add     ax, 1972h ;~ 01A2:0C91
cs=0x192;eip=0x000c94; 	T(MOV(bx, ax));	// 1884 mov     bx, ax ;~ 01A2:0C94
cs=0x192;eip=0x000c96; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 1885 mov     ax, [bx] ;~ 01A2:0C96
cs=0x192;eip=0x000c98; 	T(MOV(bx, ax));	// 1886 mov     bx, ax ;~ 01A2:0C98
cs=0x192;eip=0x000c9a; 	T(NOT(bx));	// 1887 not     bx ;~ 01A2:0C9A
cs=0x192;eip=0x000c9c; 	T(AND(ax, bp));	// 1888 and     ax, bp ;~ 01A2:0C9C
cs=0x192;eip=0x000c9e; 	T(AND(bx, dx));	// 1889 and     bx, dx ;~ 01A2:0C9E
cs=0x192;eip=0x000ca0; 	T(OR(ax, bx));	// 1890 or      ax, bx ;~ 01A2:0CA0
cs=0x192;eip=0x000ca2; 	X(STOSW);	// 1891 stosw ;~ 01A2:0CA2
cs=0x192;eip=0x000ca3; 	R(LOOP(loc_10c8c));	// 1892 loop    loc_10C8C ;~ 01A2:0CA3
cs=0x192;eip=0x000ca5; 	X(POP(di));	// 1893 pop     di ;~ 01A2:0CA5
cs=0x192;eip=0x000ca6; 	X(MOV(*((byte_15631)+0x193), 0));	// 1894 mov     byte_15631+193h, 0 ;~ 01A2:0CA6
cs=0x192;eip=0x000cab; 	T(MOV(al, *(raddr(ds,di+0x900))));	// 1895 mov     al, [di+900h] ;~ 01A2:0CAB
cs=0x192;eip=0x000caf; 	T(INC(al));	// 1896 inc     al ;~ 01A2:0CAF
cs=0x192;eip=0x000cb1; 	R(JZ(loc_10cce));	// 1897 jz      short loc_10CCE ;~ 01A2:0CB1
cs=0x192;eip=0x000cb3; 	T(MOV(cl, 2));	// 1898 mov     cl, 2 ;~ 01A2:0CB3
cs=0x192;eip=0x000cb5; 	T(CMP(al, 0x0A4));	// 1899 cmp     al, 0A4h ; '¤' ;~ 01A2:0CB5
cs=0x192;eip=0x000cb7; 	R(JC(loc_10cc5));	// 1900 jb      short loc_10CC5 ;~ 01A2:0CB7
cs=0x192;eip=0x000cb9; 	T(CMP(al, 0x0A7));	// 1901 cmp     al, 0A7h ; '§' ;~ 01A2:0CB9
cs=0x192;eip=0x000cbb; 	R(JNC(loc_10cc5));	// 1902 jnb     short loc_10CC5 ;~ 01A2:0CBB
cs=0x192;eip=0x000cbd; 	T(MOV(cl, *((byte_15631)+0x192)));	// 1903 mov     cl, byte_15631+192h ;~ 01A2:0CBD
cs=0x192;eip=0x000cc1; 	X(MOV(*((byte_15631)+0x193), cl));	// 1904 mov     byte_15631+193h, cl ;~ 01A2:0CC1
loc_10cc5:
	// 4600 
cs=0x192;eip=0x000cc5; 	T(DEC(al));	// 1908 dec     al ;~ 01A2:0CC5
cs=0x192;eip=0x000cc7; 	T(MOV(ah, *(byte_16fa6)));	// 1909 mov     ah, byte_16FA6 ;~ 01A2:0CC7
cs=0x192;eip=0x000ccb; 	R(CALL(sub_10e5f,0));	// 1910 call    sub_10E5F ;~ 01A2:0CCB
loc_10cce:
	// 4601 
cs=0x192;eip=0x000cce; 	T(MOV(al, *(raddr(ds,di+0x0B40))));	// 1913 mov     al, [di+0B40h] ;~ 01A2:0CCE
cs=0x192;eip=0x000cd2; 	T(INC(al));	// 1914 inc     al ;~ 01A2:0CD2
cs=0x192;eip=0x000cd4; 	R(JZ(loc_10ce1));	// 1915 jz      short loc_10CE1 ;~ 01A2:0CD4
cs=0x192;eip=0x000cd6; 	T(DEC(al));	// 1916 dec     al ;~ 01A2:0CD6
cs=0x192;eip=0x000cd8; 	T(MOV(cl, 2));	// 1917 mov     cl, 2 ;~ 01A2:0CD8
cs=0x192;eip=0x000cda; 	T(MOV(ah, *((byte_16fa6)+1)));	// 1918 mov     ah, byte_16FA6+1 ;~ 01A2:0CDA
cs=0x192;eip=0x000cde; 	R(CALL(sub_10e5f,0));	// 1919 call    sub_10E5F ;~ 01A2:0CDE
loc_10ce1:
	// 4602 
cs=0x192;eip=0x000ce1; 	T(MOV(al, *(raddr(ds,di+0x6C0))));	// 1922 mov     al, [di+6C0h] ;~ 01A2:0CE1
cs=0x192;eip=0x000ce5; 	T(INC(al));	// 1923 inc     al ;~ 01A2:0CE5
cs=0x192;eip=0x000ce7; 	R(JZ(loc_10d4d));	// 1924 jz      short loc_10D4D ;~ 01A2:0CE7
cs=0x192;eip=0x000ce9; 	T(MOV(cl, byte_11bd4));	// 1925 mov     cl, byte_11BD4 ;~ 01A2:0CE9
cs=0x192;eip=0x000ced; 	T(CMP(byte_11bda, 0));	// 1926 cmp     byte_11BDA, 0 ;~ 01A2:0CED
cs=0x192;eip=0x000cf2; 	R(JZ(loc_10cf6));	// 1927 jz      short loc_10CF6 ;~ 01A2:0CF2
cs=0x192;eip=0x000cf4; 	T(MOV(cl, 6));	// 1928 mov     cl, 6 ;~ 01A2:0CF4
loc_10cf6:
	// 4603 
cs=0x192;eip=0x000cf6; 	T(CMP(al, 0x0E1));	// 1931 cmp     al, 0E1h ; 'á' ;~ 01A2:0CF6
cs=0x192;eip=0x000cf8; 	R(JNC(loc_10d12));	// 1932 jnb     short loc_10D12 ;~ 01A2:0CF8
cs=0x192;eip=0x000cfa; 	T(CMP(al, 0x0D3));	// 1933 cmp     al, 0D3h ; 'Ó' ;~ 01A2:0CFA
cs=0x192;eip=0x000cfc; 	R(JC(loc_10d12));	// 1934 jb      short loc_10D12 ;~ 01A2:0CFC
cs=0x192;eip=0x000cfe; 	T(CMP(al, 0x0D7));	// 1935 cmp     al, 0D7h ; '×' ;~ 01A2:0CFE
cs=0x192;eip=0x000d00; 	R(JC(loc_10d06));	// 1936 jb      short loc_10D06 ;~ 01A2:0D00
cs=0x192;eip=0x000d02; 	T(CMP(al, 0x0DB));	// 1937 cmp     al, 0DBh ; 'Û' ;~ 01A2:0D02
cs=0x192;eip=0x000d04; 	R(JC(loc_10d12));	// 1938 jb      short loc_10D12 ;~ 01A2:0D04
loc_10d06:
	// 4604 
cs=0x192;eip=0x000d06; 	T(MOV(ah, *((byte_15631)+0x1A5)));	// 1941 mov     ah, byte_15631+1A5h ;~ 01A2:0D06
cs=0x192;eip=0x000d0a; 	T(DEC(ah));	// 1942 dec     ah ;~ 01A2:0D0A
cs=0x192;eip=0x000d0c; 	R(JNZ(loc_10d12));	// 1943 jnz     short loc_10D12 ;~ 01A2:0D0C
cs=0x192;eip=0x000d0e; 	T(MOV(cl, 6));	// 1944 mov     cl, 6 ;~ 01A2:0D0E
cs=0x192;eip=0x000d10; 	R(JMP(loc_10d41));	// 1945 jmp     short loc_10D41 ;~ 01A2:0D10
loc_10d12:
	// 4605 
cs=0x192;eip=0x000d12; 	T(MOV(ah, *((byte_15631)+0x1A5)));	// 1950 mov     ah, byte_15631+1A5h ;~ 01A2:0D12
cs=0x192;eip=0x000d16; 	T(CMP(ah, 0x4F));	// 1951 cmp     ah, 4Fh ; 'O' ;~ 01A2:0D16
cs=0x192;eip=0x000d19; 	R(JC(loc_10d2d));	// 1952 jb      short loc_10D2D ;~ 01A2:0D19
cs=0x192;eip=0x000d1b; 	T(CMP(ah, 0x56));	// 1953 cmp     ah, 56h ; 'V' ;~ 01A2:0D1B
cs=0x192;eip=0x000d1e; 	R(JNC(loc_10d2d));	// 1954 jnb     short loc_10D2D ;~ 01A2:0D1E
cs=0x192;eip=0x000d20; 	T(MOV(ah, byte_11bdc));	// 1955 mov     ah, byte_11BDC ;~ 01A2:0D20
cs=0x192;eip=0x000d24; 	T(OR(ah, ah));	// 1956 or      ah, ah ;~ 01A2:0D24
cs=0x192;eip=0x000d26; 	R(JZ(loc_10d2d));	// 1957 jz      short loc_10D2D ;~ 01A2:0D26
cs=0x192;eip=0x000d28; 	X(MOV(byte_11bd3, 1));	// 1958 mov     byte_11BD3, 1 ;~ 01A2:0D28
loc_10d2d:
	// 4606 
cs=0x192;eip=0x000d2d; 	T(MOV(ah, *((byte_15631)+0x193)));	// 1962 mov     ah, byte_15631+193h ;~ 01A2:0D2D
cs=0x192;eip=0x000d31; 	T(OR(ah, ah));	// 1963 or      ah, ah ;~ 01A2:0D31
cs=0x192;eip=0x000d33; 	R(JZ(loc_10d41));	// 1964 jz      short loc_10D41 ;~ 01A2:0D33
cs=0x192;eip=0x000d35; 	X(PUSH(ax));	// 1965 push    ax ;~ 01A2:0D35
cs=0x192;eip=0x000d36; 	X(PUSH(di));	// 1966 push    di ;~ 01A2:0D36
cs=0x192;eip=0x000d37; 	T(MOV(cx, 3));	// 1967 mov     cx, 3 ;~ 01A2:0D37
cs=0x192;eip=0x000d3a; 	R(CALL(sub_11f89,0));	// 1968 call    sub_11F89 ;~ 01A2:0D3A
cs=0x192;eip=0x000d3d; 	X(POP(di));	// 1969 pop     di ;~ 01A2:0D3D
cs=0x192;eip=0x000d3e; 	X(POP(ax));	// 1970 pop     ax ;~ 01A2:0D3E
cs=0x192;eip=0x000d3f; 	T(MOV(cl, ah));	// 1971 mov     cl, ah ;~ 01A2:0D3F
loc_10d41:
	// 4607 
cs=0x192;eip=0x000d41; 	T(MOV(ah, byte_11bd9));	// 1975 mov     ah, byte_11BD9 ;~ 01A2:0D41
cs=0x192;eip=0x000d45; 	T(DEC(al));	// 1976 dec     al ;~ 01A2:0D45
cs=0x192;eip=0x000d47; 	T(MOV(si, 0x5FF2));	// 1977 mov     si, 5FF2h ;~ 01A2:0D47
cs=0x192;eip=0x000d4a; 	R(CALL(sub_10e62,0));	// 1978 call    sub_10E62 ;~ 01A2:0D4A
loc_10d4d:
	// 4608 
cs=0x192;eip=0x000d4d; 	T(MOV(al, *(raddr(ds,di+0x480))));	// 1981 mov     al, [di+480h] ;~ 01A2:0D4D
cs=0x192;eip=0x000d51; 	X(PUSH(di));	// 1982 push    di ;~ 01A2:0D51
cs=0x192;eip=0x000d52; 	T(INC(al));	// 1983 inc     al ;~ 01A2:0D52
cs=0x192;eip=0x000d54; 	R(JZ(loc_10dcf));	// 1984 jz      short loc_10DCF ;~ 01A2:0D54
cs=0x192;eip=0x000d56; 	T(MOV(cl, al));	// 1985 mov     cl, al ;~ 01A2:0D56
cs=0x192;eip=0x000d58; 	T(DEC(al));	// 1986 dec     al ;~ 01A2:0D58
cs=0x192;eip=0x000d5a; 	T(MOV(ah, 0));	// 1987 mov     ah, 0 ;~ 01A2:0D5A
cs=0x192;eip=0x000d5c; 	T(MOV(dx, ax));	// 1988 mov     dx, ax ;~ 01A2:0D5C
cs=0x192;eip=0x000d5e; 	T(ADD(ax, ax));	// 1989 add     ax, ax ;~ 01A2:0D5E
cs=0x192;eip=0x000d60; 	T(ADD(ax, ax));	// 1990 add     ax, ax ;~ 01A2:0D60
cs=0x192;eip=0x000d62; 	T(ADD(ax, ax));	// 1991 add     ax, ax ;~ 01A2:0D62
cs=0x192;eip=0x000d64; 	T(CMP(cl, 0x0E5));	// 1992 cmp     cl, 0E5h ; 'å' ;~ 01A2:0D64
cs=0x192;eip=0x000d67; 	R(JC(loc_10d6c));	// 1993 jb      short loc_10D6C ;~ 01A2:0D67
cs=0x192;eip=0x000d69; 	R(JMP(loc_10e32));	// 1994 jmp     loc_10E32 ;~ 01A2:0D69
loc_10d6c:
	// 4609 
cs=0x192;eip=0x000d6c; 	T(ADD(ax, ax));	// 1998 add     ax, ax ;~ 01A2:0D6C
cs=0x192;eip=0x000d6e; 	T(ADD(ax, dx));	// 1999 add     ax, dx ;~ 01A2:0D6E
cs=0x192;eip=0x000d70; 	T(ADD(ax, 0x4835));	// 2000 add     ax, 4835h ;~ 01A2:0D70
cs=0x192;eip=0x000d73; 	T(MOV(si, ax));	// 2001 mov     si, ax ;~ 01A2:0D73
cs=0x192;eip=0x000d75; 	T(MOV(di, 0x57C5));	// 2002 mov     di, 57C5h ;~ 01A2:0D75
cs=0x192;eip=0x000d78; 	T(MOV(dl, 8));	// 2003 mov     dl, 8 ;~ 01A2:0D78
cs=0x192;eip=0x000d7a; 	T(MOV(bl, *(raddr(ds,si+0x10))));	// 2004 mov     bl, [si+10h] ;~ 01A2:0D7A
cs=0x192;eip=0x000d7d; 	T(XOR(bh, bh));	// 2005 xor     bh, bh ;~ 01A2:0D7D
cs=0x192;eip=0x000d7f; 	T(AND(bl, 7));	// 2006 and     bl, 7 ;~ 01A2:0D7F
cs=0x192;eip=0x000d82; 	T(SHL(bx, 1));	// 2007 shl     bx, 1 ;~ 01A2:0D82
cs=0x192;eip=0x000d84; 	T(MOV(bp, *(dw*)(raddr(ds,bx+0x1B72))));	// 2008 mov     bp, [bx+1B72h] ;~ 01A2:0D84
cs=0x192;eip=0x000d88; 	T(MOV(bl, *(raddr(ds,si+0x10))));	// 2009 mov     bl, [si+10h] ;~ 01A2:0D88
cs=0x192;eip=0x000d8b; 	T(AND(bl, 0x38));	// 2010 and     bl, 38h ;~ 01A2:0D8B
cs=0x192;eip=0x000d8e; 	T(SHR(bx, 1));	// 2011 shr     bx, 1 ;~ 01A2:0D8E
cs=0x192;eip=0x000d90; 	T(SHR(bx, 1));	// 2012 shr     bx, 1 ;~ 01A2:0D90
cs=0x192;eip=0x000d92; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1B72))));	// 2013 mov     ax, [bx+1B72h] ;~ 01A2:0D92
cs=0x192;eip=0x000d96; 	X(MOV(word_157d8, ax));	// 2014 mov     word_157D8, ax ;~ 01A2:0D96
loc_10d99:
	// 4610 
cs=0x192;eip=0x000d99; 	T(LODSW);	// 2017 lodsw ;~ 01A2:0D99
cs=0x192;eip=0x000d9a; 	T(MOV(bl, ah));	// 2018 mov     bl, ah ;~ 01A2:0D9A
cs=0x192;eip=0x000d9c; 	T(OR(al, ah));	// 2019 or      al, ah ;~ 01A2:0D9C
cs=0x192;eip=0x000d9e; 	T(MOV(dh, al));	// 2020 mov     dh, al ;~ 01A2:0D9E
cs=0x192;eip=0x000da0; 	T(SHL(bx, 1));	// 2021 shl     bx, 1 ;~ 01A2:0DA0
cs=0x192;eip=0x000da2; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1972))));	// 2022 mov     ax, [bx+1972h] ;~ 01A2:0DA2
cs=0x192;eip=0x000da6; 	T(SHR(bx, 1));	// 2023 shr     bx, 1 ;~ 01A2:0DA6
cs=0x192;eip=0x000da8; 	T(MOV(cx, ax));	// 2024 mov     cx, ax ;~ 01A2:0DA8
cs=0x192;eip=0x000daa; 	T(AND(cx, bp));	// 2025 and     cx, bp ;~ 01A2:0DAA
cs=0x192;eip=0x000dac; 	T(NOT(ax));	// 2026 not     ax ;~ 01A2:0DAC
cs=0x192;eip=0x000dae; 	T(AND(ax, *(dw*)(raddr(ds,di))));	// 2027 and     ax, [di] ;~ 01A2:0DAE
cs=0x192;eip=0x000db0; 	T(OR(ax, cx));	// 2028 or      ax, cx ;~ 01A2:0DB0
cs=0x192;eip=0x000db2; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 2029 mov     [di], ax ;~ 01A2:0DB2
cs=0x192;eip=0x000db4; 	T(MOV(bl, dh));	// 2030 mov     bl, dh ;~ 01A2:0DB4
cs=0x192;eip=0x000db6; 	T(SHL(bx, 1));	// 2031 shl     bx, 1 ;~ 01A2:0DB6
cs=0x192;eip=0x000db8; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1972))));	// 2032 mov     ax, [bx+1972h] ;~ 01A2:0DB8
cs=0x192;eip=0x000dbc; 	T(SHR(bx, 1));	// 2033 shr     bx, 1 ;~ 01A2:0DBC
cs=0x192;eip=0x000dbe; 	T(MOV(cx, ax));	// 2034 mov     cx, ax ;~ 01A2:0DBE
cs=0x192;eip=0x000dc0; 	T(NOT(cx));	// 2035 not     cx ;~ 01A2:0DC0
cs=0x192;eip=0x000dc2; 	T(AND(cx, word_157d8));	// 2036 and     cx, word_157D8 ;~ 01A2:0DC2
cs=0x192;eip=0x000dc6; 	T(AND(ax, *(dw*)(raddr(ds,di))));	// 2037 and     ax, [di] ;~ 01A2:0DC6
cs=0x192;eip=0x000dc8; 	T(OR(ax, cx));	// 2038 or      ax, cx ;~ 01A2:0DC8
cs=0x192;eip=0x000dca; 	X(STOSW);	// 2039 stosw ;~ 01A2:0DCA
cs=0x192;eip=0x000dcb; 	T(DEC(dl));	// 2040 dec     dl ;~ 01A2:0DCB
cs=0x192;eip=0x000dcd; 	R(JNZ(loc_10d99));	// 2041 jnz     short loc_10D99 ;~ 01A2:0DCD
loc_10dcf:
	// 4611 
cs=0x192;eip=0x000dcf; 	X(POP(ax));	// 2044 pop     ax ;~ 01A2:0DCF
cs=0x192;eip=0x000dd0; 	X(PUSH(ax));	// 2045 push    ax ;~ 01A2:0DD0
cs=0x192;eip=0x000dd1; 	T(MOV(si, 0x57C5));	// 2046 mov     si, 57C5h ;~ 01A2:0DD1
cs=0x192;eip=0x000dd4; 	T(SUB(ax, 4));	// 2047 sub     ax, 4 ;~ 01A2:0DD4
cs=0x192;eip=0x000dd7; 	T(ADD(ax, ax));	// 2048 add     ax, ax ;~ 01A2:0DD7
cs=0x192;eip=0x000dd9; 	T(MOV(ch, al));	// 2049 mov     ch, al ;~ 01A2:0DD9
cs=0x192;eip=0x000ddb; 	T(AND(ch, 0x3E));	// 2050 and     ch, 3Eh ;~ 01A2:0DDB
cs=0x192;eip=0x000dde; 	T(AND(al, 0x0C0));	// 2051 and     al, 0C0h ;~ 01A2:0DDE
cs=0x192;eip=0x000de0; 	T(MOV(dx, ax));	// 2052 mov     dx, ax ;~ 01A2:0DE0
cs=0x192;eip=0x000de2; 	T(ADD(ax, ax));	// 2053 add     ax, ax ;~ 01A2:0DE2
cs=0x192;eip=0x000de4; 	T(ADD(ax, ax));	// 2054 add     ax, ax ;~ 01A2:0DE4
cs=0x192;eip=0x000de6; 	T(ADD(ax, dx));	// 2055 add     ax, dx ;~ 01A2:0DE6
cs=0x192;eip=0x000de8; 	T(MOV(dl, ch));	// 2056 mov     dl, ch ;~ 01A2:0DE8
cs=0x192;eip=0x000dea; 	T(MOV(dh, 0));	// 2057 mov     dh, 0 ;~ 01A2:0DEA
cs=0x192;eip=0x000dec; 	T(ADD(ax, dx));	// 2058 add     ax, dx ;~ 01A2:0DEC
cs=0x192;eip=0x000dee; 	T(ADD(ax, 8));	// 2059 add     ax, 8 ;~ 01A2:0DEE
cs=0x192;eip=0x000df1; 	T(MOV(di, ax));	// 2060 mov     di, ax ;~ 01A2:0DF1
cs=0x192;eip=0x000df3; 	X(PUSH(es));	// 2061 push    es ;~ 01A2:0DF3
cs=0x192;eip=0x000df4; 	T(MOV(ax, 0x0B800));	// 2062 mov     ax, 0B800h ;~ 01A2:0DF4
cs=0x192;eip=0x000df7; 	T(MOV(es, ax));	// 2063 mov     es, ax ;~ 01A2:0DF7
cs=0x192;eip=0x000df9; 	X(MOVSW);	// 2065 movsw ;~ 01A2:0DF9
cs=0x192;eip=0x000dfa; 	T(ADD(di, 0x1FFE));	// 2066 add     di, 1FFEh ;~ 01A2:0DFA
cs=0x192;eip=0x000dfe; 	X(MOVSW);	// 2067 movsw ;~ 01A2:0DFE
cs=0x192;eip=0x000dff; 	T(ADD(di, 0x0E04E));	// 2068 add     di, 0E04Eh ;~ 01A2:0DFF
cs=0x192;eip=0x000e03; 	X(MOVSW);	// 2069 movsw ;~ 01A2:0E03
cs=0x192;eip=0x000e04; 	T(ADD(di, 0x1FFE));	// 2070 add     di, 1FFEh ;~ 01A2:0E04
cs=0x192;eip=0x000e08; 	X(MOVSW);	// 2071 movsw ;~ 01A2:0E08
cs=0x192;eip=0x000e09; 	T(ADD(di, 0x0E04E));	// 2072 add     di, 0E04Eh ;~ 01A2:0E09
cs=0x192;eip=0x000e0d; 	X(MOVSW);	// 2073 movsw ;~ 01A2:0E0D
cs=0x192;eip=0x000e0e; 	T(ADD(di, 0x1FFE));	// 2074 add     di, 1FFEh ;~ 01A2:0E0E
cs=0x192;eip=0x000e12; 	X(MOVSW);	// 2075 movsw ;~ 01A2:0E12
cs=0x192;eip=0x000e13; 	T(ADD(di, 0x0E04E));	// 2076 add     di, 0E04Eh ;~ 01A2:0E13
cs=0x192;eip=0x000e17; 	X(MOVSW);	// 2077 movsw ;~ 01A2:0E17
cs=0x192;eip=0x000e18; 	T(ADD(di, 0x1FFE));	// 2078 add     di, 1FFEh ;~ 01A2:0E18
cs=0x192;eip=0x000e1c; 	X(MOVSW);	// 2079 movsw ;~ 01A2:0E1C
cs=0x192;eip=0x000e1d; 	T(ADD(di, 0x0E04E));	// 2080 add     di, 0E04Eh ;~ 01A2:0E1D
cs=0x192;eip=0x000e21; 	X(POP(es));	// 2081 pop     es ;~ 01A2:0E21
loc_10e22:
	// 4612 
cs=0x192;eip=0x000e22; 	X(POP(di));	// 2085 pop     di ;~ 01A2:0E22
loc_10e23:
	// 4613 
cs=0x192;eip=0x000e23; 	T(TEST(di, 1));	// 2088 test    di, 1 ;~ 01A2:0E23
cs=0x192;eip=0x000e27; 	R(JZ(loc_10e2e));	// 2089 jz      short loc_10E2E ;~ 01A2:0E27
cs=0x192;eip=0x000e29; 	X(POP(di));	// 2090 pop     di ;~ 01A2:0E29
cs=0x192;eip=0x000e2a; 	X(POP(cx));	// 2091 pop     cx ;~ 01A2:0E2A
cs=0x192;eip=0x000e2b; 	R(JMP(loc_10c1d));	// 2092 jmp     loc_10C1D ;~ 01A2:0E2B
loc_10e2e:
	// 4614 
cs=0x192;eip=0x000e2e; 	T(INC(di));	// 2096 inc     di ;~ 01A2:0E2E
cs=0x192;eip=0x000e2f; 	R(JMP(loc_10c28));	// 2097 jmp     loc_10C28 ;~ 01A2:0E2F
loc_10e32:
	// 4615 
cs=0x192;eip=0x000e32; 	T(ADD(ax, 0x791));	// 2101 add     ax, 791h ;~ 01A2:0E32
cs=0x192;eip=0x000e35; 	T(MOV(si, ax));	// 2102 mov     si, ax ;~ 01A2:0E35
cs=0x192;eip=0x000e37; 	T(MOV(ax, di));	// 2103 mov     ax, di ;~ 01A2:0E37
cs=0x192;eip=0x000e39; 	T(SUB(ax, 4));	// 2104 sub     ax, 4 ;~ 01A2:0E39
cs=0x192;eip=0x000e3c; 	T(ADD(ax, ax));	// 2105 add     ax, ax ;~ 01A2:0E3C
cs=0x192;eip=0x000e3e; 	T(MOV(ch, al));	// 2106 mov     ch, al ;~ 01A2:0E3E
cs=0x192;eip=0x000e40; 	T(AND(ch, 0x3E));	// 2107 and     ch, 3Eh ;~ 01A2:0E40
cs=0x192;eip=0x000e43; 	T(AND(al, 0x0C0));	// 2108 and     al, 0C0h ;~ 01A2:0E43
cs=0x192;eip=0x000e45; 	T(MOV(dx, ax));	// 2109 mov     dx, ax ;~ 01A2:0E45
cs=0x192;eip=0x000e47; 	T(ADD(ax, ax));	// 2110 add     ax, ax ;~ 01A2:0E47
cs=0x192;eip=0x000e49; 	T(ADD(ax, ax));	// 2111 add     ax, ax ;~ 01A2:0E49
cs=0x192;eip=0x000e4b; 	T(ADD(ax, dx));	// 2112 add     ax, dx ;~ 01A2:0E4B
cs=0x192;eip=0x000e4d; 	T(MOV(dl, ch));	// 2113 mov     dl, ch ;~ 01A2:0E4D
cs=0x192;eip=0x000e4f; 	T(MOV(dh, 0));	// 2114 mov     dh, 0 ;~ 01A2:0E4F
cs=0x192;eip=0x000e51; 	T(ADD(ax, dx));	// 2115 add     ax, dx ;~ 01A2:0E51
cs=0x192;eip=0x000e53; 	T(ADD(ax, 8));	// 2116 add     ax, 8 ;~ 01A2:0E53
cs=0x192;eip=0x000e56; 	T(MOV(di, ax));	// 2117 mov     di, ax ;~ 01A2:0E56
cs=0x192;eip=0x000e58; 	T(MOV(al, 2));	// 2118 mov     al, 2 ;~ 01A2:0E58
cs=0x192;eip=0x000e5a; 	R(CALL(sub_1054a,0));	// 2119 call    sub_1054A ;~ 01A2:0E5A
cs=0x192;eip=0x000e5d; 	R(JMP(loc_10e22));	// 2120 jmp     short loc_10E22 ;~ 01A2:0E5D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_10c1d: 	goto loc_10c1d;
        case m2c::kloc_10c28: 	goto loc_10c28;
        case m2c::kloc_10c31: 	goto loc_10c31;
        case m2c::kloc_10c5d: 	goto loc_10c5d;
        case m2c::kloc_10c67: 	goto loc_10c67;
        case m2c::kloc_10c8c: 	goto loc_10c8c;
        case m2c::kloc_10cc5: 	goto loc_10cc5;
        case m2c::kloc_10cce: 	goto loc_10cce;
        case m2c::kloc_10ce1: 	goto loc_10ce1;
        case m2c::kloc_10cf6: 	goto loc_10cf6;
        case m2c::kloc_10d06: 	goto loc_10d06;
        case m2c::kloc_10d12: 	goto loc_10d12;
        case m2c::kloc_10d2d: 	goto loc_10d2d;
        case m2c::kloc_10d41: 	goto loc_10d41;
        case m2c::kloc_10d4d: 	goto loc_10d4d;
        case m2c::kloc_10d6c: 	goto loc_10d6c;
        case m2c::kloc_10d99: 	goto loc_10d99;
        case m2c::kloc_10dcf: 	goto loc_10dcf;
        case m2c::kloc_10e22: 	goto loc_10e22;
        case m2c::kloc_10e23: 	goto loc_10e23;
        case m2c::kloc_10e2e: 	goto loc_10e2e;
        case m2c::kloc_10e32: 	goto loc_10e32;
        case m2c::knullsub_1: 	goto nullsub_1;
        case m2c::kret_1a2_c10: 	goto ret_1a2_c10;
        case m2c::ksub_10c0d: 	goto sub_10c0d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool _group6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group6:
    _begin:
sub_10e5f:
	// 2127 
cs=0x192;eip=0x000e5f; 	T(MOV(si, 0x51A3));	// 2129 mov     si, 51A3h ;~ 01A2:0E5F
sub_10e62:
	// 2136 
cs=0x192;eip=0x000e62; 	X(PUSH(di));	// 2137 push    di ;~ 01A2:0E62
ret_1a2_e63:
	// 4616 
cs=0x192;eip=0x000e63; 	T(MOV(di, 0x57C5));	// 2138 mov     di, 57C5h ;~ 01A2:0E63
cs=0x192;eip=0x000e66; 	T(MOV(bl, cl));	// 2139 mov     bl, cl ;~ 01A2:0E66
cs=0x192;eip=0x000e68; 	T(XOR(bh, bh));	// 2140 xor     bh, bh ;~ 01A2:0E68
cs=0x192;eip=0x000e6a; 	T(SHL(bx, 1));	// 2141 shl     bx, 1 ;~ 01A2:0E6A
cs=0x192;eip=0x000e6c; 	T(MOV(bp, *(dw*)(raddr(ds,bx+0x1B72))));	// 2142 mov     bp, [bx+1B72h] ;~ 01A2:0E6C
cs=0x192;eip=0x000e70; 	T(MOV(dh, ah));	// 2143 mov     dh, ah ;~ 01A2:0E70
cs=0x192;eip=0x000e72; 	T(MOV(dl, 8));	// 2144 mov     dl, 8 ;~ 01A2:0E72
cs=0x192;eip=0x000e74; 	T(XOR(ah, ah));	// 2145 xor     ah, ah ;~ 01A2:0E74
cs=0x192;eip=0x000e76; 	T(SHL(ax, 1));	// 2146 shl     ax, 1 ;~ 01A2:0E76
cs=0x192;eip=0x000e78; 	T(SHL(ax, 1));	// 2147 shl     ax, 1 ;~ 01A2:0E78
cs=0x192;eip=0x000e7a; 	T(SHL(ax, 1));	// 2148 shl     ax, 1 ;~ 01A2:0E7A
cs=0x192;eip=0x000e7c; 	T(ADD(si, ax));	// 2149 add     si, ax ;~ 01A2:0E7C
loc_10e7e:
	// 4617 
cs=0x192;eip=0x000e7e; 	T(MOV(bl, *(raddr(ds,si))));	// 2152 mov     bl, [si] ;~ 01A2:0E7E
cs=0x192;eip=0x000e80; 	T(INC(si));	// 2153 inc     si ;~ 01A2:0E80
cs=0x192;eip=0x000e81; 	T(OR(dh, dh));	// 2154 or      dh, dh ;~ 01A2:0E81
cs=0x192;eip=0x000e83; 	R(JZ(loc_10e89));	// 2155 jz      short loc_10E89 ;~ 01A2:0E83
cs=0x192;eip=0x000e85; 	T(MOV(bl, *(raddr(ds,bx+0x3E3E))));	// 2156 mov     bl, [bx+3E3Eh] ;~ 01A2:0E85
loc_10e89:
	// 4618 
cs=0x192;eip=0x000e89; 	T(SHL(bx, 1));	// 2159 shl     bx, 1 ;~ 01A2:0E89
cs=0x192;eip=0x000e8b; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1972))));	// 2160 mov     ax, [bx+1972h] ;~ 01A2:0E8B
cs=0x192;eip=0x000e8f; 	T(SHR(bx, 1));	// 2161 shr     bx, 1 ;~ 01A2:0E8F
cs=0x192;eip=0x000e91; 	T(MOV(cx, ax));	// 2162 mov     cx, ax ;~ 01A2:0E91
cs=0x192;eip=0x000e93; 	T(NOT(ax));	// 2163 not     ax ;~ 01A2:0E93
cs=0x192;eip=0x000e95; 	T(AND(cx, bp));	// 2164 and     cx, bp ;~ 01A2:0E95
cs=0x192;eip=0x000e97; 	T(AND(ax, *(dw*)(raddr(ds,di))));	// 2165 and     ax, [di] ;~ 01A2:0E97
cs=0x192;eip=0x000e99; 	T(OR(ax, cx));	// 2166 or      ax, cx ;~ 01A2:0E99
cs=0x192;eip=0x000e9b; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 2167 mov     [di], ax ;~ 01A2:0E9B
cs=0x192;eip=0x000e9d; 	T(OR(bl, *(raddr(ds,bx+0x3D3E))));	// 2168 or      bl, [bx+3D3Eh] ;~ 01A2:0E9D
cs=0x192;eip=0x000ea1; 	T(SHL(bx, 1));	// 2169 shl     bx, 1 ;~ 01A2:0EA1
cs=0x192;eip=0x000ea3; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1972))));	// 2170 mov     ax, [bx+1972h] ;~ 01A2:0EA3
cs=0x192;eip=0x000ea7; 	T(SHR(bx, 1));	// 2171 shr     bx, 1 ;~ 01A2:0EA7
cs=0x192;eip=0x000ea9; 	T(MOV(cx, ax));	// 2172 mov     cx, ax ;~ 01A2:0EA9
cs=0x192;eip=0x000eab; 	T(NOT(cx));	// 2173 not     cx ;~ 01A2:0EAB
cs=0x192;eip=0x000ead; 	T(AND(cx, word_157d8));	// 2174 and     cx, word_157D8 ;~ 01A2:0EAD
cs=0x192;eip=0x000eb1; 	T(AND(ax, *(dw*)(raddr(ds,di))));	// 2175 and     ax, [di] ;~ 01A2:0EB1
cs=0x192;eip=0x000eb3; 	T(OR(ax, cx));	// 2176 or      ax, cx ;~ 01A2:0EB3
cs=0x192;eip=0x000eb5; 	X(STOSW);	// 2177 stosw ;~ 01A2:0EB5
cs=0x192;eip=0x000eb6; 	T(DEC(dl));	// 2178 dec     dl ;~ 01A2:0EB6
cs=0x192;eip=0x000eb8; 	R(JNZ(loc_10e7e));	// 2179 jnz     short loc_10E7E ;~ 01A2:0EB8
cs=0x192;eip=0x000eba; 	X(POP(di));	// 2180 pop     di ;~ 01A2:0EBA
cs=0x192;eip=0x000ebb; 	R(RETN(0));	// 2181 retn ;~ 01A2:0EBB

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_10e7e: 	goto loc_10e7e;
        case m2c::kloc_10e89: 	goto loc_10e89;
        case m2c::kret_1a2_e63: 	goto ret_1a2_e63;
        case m2c::ksub_10e5f: 	goto sub_10e5f;
        case m2c::ksub_10e62: 	goto sub_10e62;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_1104a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1104a:
    _begin:
cs=0x192;eip=0x00104a; 	T(MOV(bx, word_11bb4));	// 2405 mov     bx, word_11BB4 ;~ 01A2:104A
ret_1a2_104e:
	// 4639 
cs=0x192;eip=0x00104e; 	T(ADD(bx, 0x4E6));	// 2406 add     bx, 4E6h ;~ 01A2:104E
cs=0x192;eip=0x001052; 	T(MOV(al, 0x28));	// 2407 mov     al, 28h ; '(' ;~ 01A2:1052
cs=0x192;eip=0x001054; 	T(CMP(*(raddr(ds,bx)), 0x8A));	// 2408 cmp     byte ptr [bx], 8Ah ; 'Š' ;~ 01A2:1054
cs=0x192;eip=0x001057; 	R(JNZ(loc_1105b));	// 2409 jnz     short loc_1105B ;~ 01A2:1057
cs=0x192;eip=0x001059; 	T(MOV(al, 0x10));	// 2410 mov     al, 10h ;~ 01A2:1059
loc_1105b:
	// 4640 
cs=0x192;eip=0x00105b; 	X(MOV(byte_1515e, al));	// 2413 mov     byte_1515E, al ;~ 01A2:105B
cs=0x192;eip=0x00105e; 	X(MOV(byte_1516f, al));	// 2414 mov     byte_1516F, al ;~ 01A2:105E
cs=0x192;eip=0x001061; 	X(MOV(byte_15180, al));	// 2415 mov     byte_15180, al ;~ 01A2:1061
cs=0x192;eip=0x001064; 	T(CMP(byte_11bd3, 0));	// 2416 cmp     byte_11BD3, 0 ;~ 01A2:1064
cs=0x192;eip=0x001069; 	R(JZ(locret_1107b));	// 2417 jz      short locret_1107B ;~ 01A2:1069
loc_1106b:
	// 4641 
cs=0x192;eip=0x00106b; 	R(CALL(sub_1107c,0));	// 2420 call    sub_1107C ;~ 01A2:106B
cs=0x192;eip=0x00106e; 	T(AND(al, 7));	// 2421 and     al, 7 ;~ 01A2:106E
cs=0x192;eip=0x001070; 	R(JZ(loc_1106b));	// 2422 jz      short loc_1106B ;~ 01A2:1070
cs=0x192;eip=0x001072; 	X(MOV(byte_11bd4, al));	// 2423 mov     byte_11BD4, al ;~ 01A2:1072
cs=0x192;eip=0x001075; 	T(MOV(cx, 0x14));	// 2424 mov     cx, 14h ;~ 01A2:1075
cs=0x192;eip=0x001078; 	R(CALL(sub_11f89,0));	// 2425 call    sub_11F89 ;~ 01A2:1078
locret_1107b:
	// 4642 
cs=0x192;eip=0x00107b; 	R(RETN(0));	// 2428 retn ;~ 01A2:107B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_1105b: 	goto loc_1105b;
        case m2c::kloc_1106b: 	goto loc_1106b;
        case m2c::klocret_1107b: 	goto locret_1107b;
        case m2c::kret_1a2_104e: 	goto ret_1a2_104e;
        case m2c::ksub_1104a: 	goto sub_1104a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_1107c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1107c:
    _begin:
cs=0x192;eip=0x00107c; 	X(INC(byte_11bb3));	// 2437 inc     byte_11BB3 ;~ 01A2:107C
ret_1a2_1080:
	// 4643 
cs=0x192;eip=0x001080; 	T(MOV(al, byte_11bb3));	// 2438 mov     al, byte_11BB3 ;~ 01A2:1080
cs=0x192;eip=0x001083; 	T(XOR(ah, ah));	// 2439 xor     ah, ah ;~ 01A2:1083
cs=0x192;eip=0x001085; 	T(ADD(ax, word_11bbe));	// 2440 add     ax, word_11BBE ;~ 01A2:1085
cs=0x192;eip=0x001089; 	X(MOV(word_11bbe, ax));	// 2441 mov     word_11BBE, ax ;~ 01A2:1089
cs=0x192;eip=0x00108c; 	R(RETN(0));	// 2442 retn ;~ 01A2:108C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1a2_1080: 	goto ret_1a2_1080;
        case m2c::ksub_1107c: 	goto sub_1107c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_1108d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1108d:
    _begin:
cs=0x192;eip=0x00108d; 	T(MOV(di, word_157da));	// 2451 mov     di, word_157DA ;~ 01A2:108D
ret_1a2_1091:
	// 4644 
cs=0x192;eip=0x001091; 	T(MOV(cx, 2));	// 2452 mov     cx, 2 ;~ 01A2:1091
cs=0x192;eip=0x001094; 	T(CLD);	// 2453 cld ;~ 01A2:1094
	// 2454 rep movsw ;~ 01A2:1095
cs=0x192;eip=0x001095; 	X(	REP MOVSW);	// 2454 rep movsw ;~ 01A2:1095
cs=0x192;eip=0x001097; 	T(SUB(di, 0x244));	// 2455 sub     di, 244h ;~ 01A2:1097
cs=0x192;eip=0x00109b; 	T(MOV(cx, 2));	// 2456 mov     cx, 2 ;~ 01A2:109B
cs=0x192;eip=0x00109e; 	T(MOV(ax, 0x101));	// 2457 mov     ax, 101h ;~ 01A2:109E
	// 2458 rep stosw ;~ 01A2:10A1
cs=0x192;eip=0x0010a1; 	X(	REP STOSW);	// 2458 rep stosw ;~ 01A2:10A1
cs=0x192;eip=0x0010a3; 	R(RETN(0));	// 2459 retn ;~ 01A2:10A3

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1a2_1091: 	goto ret_1a2_1091;
        case m2c::ksub_1108d: 	goto sub_1108d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_110a4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_110a4:
    _begin:
cs=0x192;eip=0x0010a4; 	T(MOV(ah, 1));	// 2468 mov     ah, 1 ;~ 01A2:10A4
ret_1a2_10a6:
	// 4645 
cs=0x192;eip=0x0010a6; 	R(_INT(0x16));	// 2469 int     16h             ; KEYBOARD - CHECK BUFFER, DO NOT CLEAR ;~ 01A2:10A6
cs=0x192;eip=0x0010a8; 	R(JNZ(loc_110ad));	// 2473 jnz     short loc_110AD ;~ 01A2:10A8
cs=0x192;eip=0x0010aa; 	R(JMP(loc_1112c));	// 2474 jmp     loc_1112C ;~ 01A2:10AA
loc_110ad:
	// 4646 
cs=0x192;eip=0x0010ad; 	T(MOV(ah, 0));	// 2478 mov     ah, 0 ;~ 01A2:10AD
cs=0x192;eip=0x0010af; 	R(_INT(0x16));	// 2479 int     16h             ; KEYBOARD - READ CHAR FROM BUFFER, WAIT IF EMPTY ;~ 01A2:10AF
cs=0x192;eip=0x0010b1; 	T(MOV(cx, 5));	// 2481 mov     cx, 5 ;~ 01A2:10B1
cs=0x192;eip=0x0010b4; 	T(MOV(bx, 0x5800));	// 2482 mov     bx, 5800h ;~ 01A2:10B4
loc_110b7:
	// 4647 
cs=0x192;eip=0x0010b7; 	T(CMP(al, *(raddr(ds,bx))));	// 2485 cmp     al, [bx] ;~ 01A2:10B7
cs=0x192;eip=0x0010b9; 	R(JZ(loc_110e9));	// 2486 jz      short loc_110E9 ;~ 01A2:10B9
cs=0x192;eip=0x0010bb; 	T(CMP(*(raddr(ds,bx)), 0));	// 2487 cmp     byte ptr [bx], 0 ;~ 01A2:10BB
cs=0x192;eip=0x0010be; 	R(JZ(loc_110c5));	// 2488 jz      short loc_110C5 ;~ 01A2:10BE
cs=0x192;eip=0x0010c0; 	T(CMP(al, *(raddr(ds,bx+1))));	// 2489 cmp     al, [bx+1] ;~ 01A2:10C0
cs=0x192;eip=0x0010c3; 	R(JZ(loc_110e9));	// 2490 jz      short loc_110E9 ;~ 01A2:10C3
loc_110c5:
	// 4648 
cs=0x192;eip=0x0010c5; 	T(ADD(bx, 4));	// 2494 add     bx, 4 ;~ 01A2:10C5
cs=0x192;eip=0x0010c8; 	R(LOOP(loc_110b7));	// 2495 loop    loc_110B7 ;~ 01A2:10C8
cs=0x192;eip=0x0010ca; 	T(CMP(al, 3));	// 2496 cmp     al, 3 ;~ 01A2:10CA
cs=0x192;eip=0x0010cc; 	R(JNZ(loc_110d3));	// 2497 jnz     short loc_110D3 ;~ 01A2:10CC
cs=0x192;eip=0x0010ce; 	X(MOV(byte_11bd5, 3));	// 2498 mov     byte_11BD5, 3 ;~ 01A2:10CE
loc_110d3:
	// 4649 
cs=0x192;eip=0x0010d3; 	T(CMP(al, 0x0E));	// 2501 cmp     al, 0Eh ;~ 01A2:10D3
cs=0x192;eip=0x0010d5; 	R(JNZ(loc_110da));	// 2502 jnz     short loc_110DA ;~ 01A2:10D5
cs=0x192;eip=0x0010d7; 	R(CALL(sub_12772,0));	// 2503 call    sub_12772 ;~ 01A2:10D7
loc_110da:
	// 4650 
cs=0x192;eip=0x0010da; 	T(CMP(al, 0x13));	// 2506 cmp     al, 13h ;~ 01A2:10DA
cs=0x192;eip=0x0010dc; 	R(JNZ(loc_110e7));	// 2507 jnz     short loc_110E7 ;~ 01A2:10DC
loc_110de:
	// 4651 
cs=0x192;eip=0x0010de; 	R(CALL(sub_12ad8,0));	// 2510 call    sub_12AD8 ;~ 01A2:10DE
cs=0x192;eip=0x0010e1; 	R(JZ(loc_110de));	// 2511 jz      short loc_110DE ;~ 01A2:10E1
cs=0x192;eip=0x0010e3; 	T(MOV(ah, 0));	// 2512 mov     ah, 0 ;~ 01A2:10E3
cs=0x192;eip=0x0010e5; 	R(_INT(0x16));	// 2513 int     16h             ; KEYBOARD - READ CHAR FROM BUFFER, WAIT IF EMPTY ;~ 01A2:10E5
loc_110e7:
	// 4652 
cs=0x192;eip=0x0010e7; 	R(JMP(sub_110a4));	// 2517 jmp     short sub_110A4 ;~ 01A2:10E7
loc_110e9:
	// 4653 
cs=0x192;eip=0x0010e9; 	T(OR(al, al));	// 2522 or      al, al ;~ 01A2:10E9
cs=0x192;eip=0x0010eb; 	R(JNZ(loc_110f2));	// 2523 jnz     short loc_110F2 ;~ 01A2:10EB
cs=0x192;eip=0x0010ed; 	T(CMP(ah, *(raddr(ds,bx+1))));	// 2524 cmp     ah, [bx+1] ;~ 01A2:10ED
cs=0x192;eip=0x0010f0; 	R(JNZ(loc_110c5));	// 2525 jnz     short loc_110C5 ;~ 01A2:10F0
loc_110f2:
	// 4654 
cs=0x192;eip=0x0010f2; 	T(ADD(bx, 2));	// 2528 add     bx, 2 ;~ 01A2:10F2
cs=0x192;eip=0x0010f5; 	T(MOV(al, *(raddr(ds,bx))));	// 2529 mov     al, [bx] ;~ 01A2:10F5
cs=0x192;eip=0x0010f7; 	T(TEST(al, 0x0C0));	// 2530 test    al, 0C0h ;~ 01A2:10F7
cs=0x192;eip=0x0010f9; 	R(JZ(loc_11105));	// 2531 jz      short loc_11105 ;~ 01A2:10F9
cs=0x192;eip=0x0010fb; 	X(OR(byte_15b35, al));	// 2532 or      byte_15B35, al ;~ 01A2:10FB
cs=0x192;eip=0x0010ff; 	T(INC(bx));	// 2533 inc     bx ;~ 01A2:10FF
cs=0x192;eip=0x001100; 	X(MOV(*(raddr(ds,bx)), 3));	// 2534 mov     byte ptr [bx], 3 ;~ 01A2:1100
cs=0x192;eip=0x001103; 	R(JMP(sub_110a4));	// 2535 jmp     short sub_110A4 ;~ 01A2:1103
loc_11105:
	// 4655 
cs=0x192;eip=0x001105; 	X(OR(*(raddr(ds,bx)), 0x80));	// 2539 or      byte ptr [bx], 80h ;~ 01A2:1105
cs=0x192;eip=0x001108; 	T(CMP(al, 4));	// 2540 cmp     al, 4 ;~ 01A2:1108
cs=0x192;eip=0x00110a; 	R(JNZ(loc_1111e));	// 2541 jnz     short loc_1111E ;~ 01A2:110A
cs=0x192;eip=0x00110c; 	T(CMP(word_11bb8, 0x5C92));	// 2542 cmp     word_11BB8, 5C92h ;~ 01A2:110C
cs=0x192;eip=0x001112; 	R(JZ(loc_1111e));	// 2543 jz      short loc_1111E ;~ 01A2:1112
cs=0x192;eip=0x001114; 	X(OR(byte_15b35, al));	// 2544 or      byte_15B35, al ;~ 01A2:1114
cs=0x192;eip=0x001118; 	T(INC(bx));	// 2545 inc     bx ;~ 01A2:1118
cs=0x192;eip=0x001119; 	X(MOV(*(raddr(ds,bx)), 6));	// 2546 mov     byte ptr [bx], 6 ;~ 01A2:1119
cs=0x192;eip=0x00111c; 	R(JMP(sub_110a4));	// 2547 jmp     short sub_110A4 ;~ 01A2:111C
loc_1111e:
	// 4656 
cs=0x192;eip=0x00111e; 	X(OR(*(raddr(ds,bx)), 0x0C0));	// 2552 or      byte ptr [bx], 0C0h ;~ 01A2:111E
cs=0x192;eip=0x001121; 	X(OR(byte_15b35, al));	// 2553 or      byte_15B35, al ;~ 01A2:1121
cs=0x192;eip=0x001125; 	T(INC(bx));	// 2554 inc     bx ;~ 01A2:1125
cs=0x192;eip=0x001126; 	X(MOV(*(raddr(ds,bx)), 2));	// 2555 mov     byte ptr [bx], 2 ;~ 01A2:1126
cs=0x192;eip=0x001129; 	R(JMP(sub_110a4));	// 2556 jmp     sub_110A4 ;~ 01A2:1129
loc_1112c:
	// 4657 
cs=0x192;eip=0x00112c; 	T(MOV(bx, 0x5803));	// 2560 mov     bx, 5803h ;~ 01A2:112C
cs=0x192;eip=0x00112f; 	T(MOV(cx, 5));	// 2561 mov     cx, 5 ;~ 01A2:112F
loc_11132:
	// 4658 
cs=0x192;eip=0x001132; 	T(CMP(*(raddr(ds,bx)), 0));	// 2564 cmp     byte ptr [bx], 0 ;~ 01A2:1132
cs=0x192;eip=0x001135; 	R(JZ(loc_1115c));	// 2565 jz      short loc_1115C ;~ 01A2:1135
cs=0x192;eip=0x001137; 	X(DEC(*(raddr(ds,bx))));	// 2566 dec     byte ptr [bx] ;~ 01A2:1137
cs=0x192;eip=0x001139; 	R(JNZ(loc_1115c));	// 2567 jnz     short loc_1115C ;~ 01A2:1139
cs=0x192;eip=0x00113b; 	T(MOV(ah, *(raddr(ds,bx-1))));	// 2568 mov     ah, [bx-1] ;~ 01A2:113B
cs=0x192;eip=0x00113e; 	T(TEST(ah, 0x40));	// 2569 test    ah, 40h ;~ 01A2:113E
cs=0x192;eip=0x001141; 	R(JZ(loc_11152));	// 2570 jz      short loc_11152 ;~ 01A2:1141
cs=0x192;eip=0x001143; 	X(MOV(*(raddr(ds,bx)), 3));	// 2571 mov     byte ptr [bx], 3 ;~ 01A2:1143
cs=0x192;eip=0x001146; 	X(AND(*(raddr(ds,bx-1)), 0x0BF));	// 2572 and     byte ptr [bx-1], 0BFh ;~ 01A2:1146
cs=0x192;eip=0x00114a; 	T(NOT(ah));	// 2573 not     ah ;~ 01A2:114A
cs=0x192;eip=0x00114c; 	X(AND(byte_15b35, ah));	// 2574 and     byte_15B35, ah ;~ 01A2:114C
cs=0x192;eip=0x001150; 	R(JMP(loc_1115c));	// 2575 jmp     short loc_1115C ;~ 01A2:1150
loc_11152:
	// 4659 
cs=0x192;eip=0x001152; 	T(NOT(ah));	// 2579 not     ah ;~ 01A2:1152
cs=0x192;eip=0x001154; 	X(AND(byte_15b35, ah));	// 2580 and     byte_15B35, ah ;~ 01A2:1154
cs=0x192;eip=0x001158; 	X(AND(*(raddr(ds,bx-1)), 0x3F));	// 2581 and     byte ptr [bx-1], 3Fh ;~ 01A2:1158
loc_1115c:
	// 4660 
cs=0x192;eip=0x00115c; 	T(ADD(bx, 4));	// 2585 add     bx, 4 ;~ 01A2:115C
cs=0x192;eip=0x00115f; 	R(LOOP(loc_11132));	// 2586 loop    loc_11132 ;~ 01A2:115F
cs=0x192;eip=0x001161; 	R(RETN(0));	// 2587 retn ;~ 01A2:1161

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_110ad: 	goto loc_110ad;
        case m2c::kloc_110b7: 	goto loc_110b7;
        case m2c::kloc_110c5: 	goto loc_110c5;
        case m2c::kloc_110d3: 	goto loc_110d3;
        case m2c::kloc_110da: 	goto loc_110da;
        case m2c::kloc_110de: 	goto loc_110de;
        case m2c::kloc_110e7: 	goto loc_110e7;
        case m2c::kloc_110e9: 	goto loc_110e9;
        case m2c::kloc_110f2: 	goto loc_110f2;
        case m2c::kloc_11105: 	goto loc_11105;
        case m2c::kloc_1111e: 	goto loc_1111e;
        case m2c::kloc_1112c: 	goto loc_1112c;
        case m2c::kloc_11132: 	goto loc_11132;
        case m2c::kloc_11152: 	goto loc_11152;
        case m2c::kloc_1115c: 	goto loc_1115c;
        case m2c::kret_1a2_10a6: 	goto ret_1a2_10a6;
        case m2c::ksub_110a4: 	goto sub_110a4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_11162(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11162:
    _begin:
cs=0x192;eip=0x001162; 	T(CMP(byte_11bd5, 0));	// 2595 cmp     byte_11BD5, 0 ;~ 01A2:1162
ret_1a2_1167:
	// 4661 
cs=0x192;eip=0x001167; 	R(JZ(loc_11181));	// 2596 jz      short loc_11181 ;~ 01A2:1167
cs=0x192;eip=0x001169; 	T(CMP(byte_15b38, 0));	// 2597 cmp     byte_15B38, 0 ;~ 01A2:1169
cs=0x192;eip=0x00116e; 	R(JNZ(loc_11181));	// 2598 jnz     short loc_11181 ;~ 01A2:116E
cs=0x192;eip=0x001170; 	X(MOV(byte_15b38, 1));	// 2599 mov     byte_15B38, 1 ;~ 01A2:1170
cs=0x192;eip=0x001175; 	X(MOV(word_11bb8, 0x5E7E));	// 2600 mov     word_11BB8, 5E7Eh ;~ 01A2:1175
cs=0x192;eip=0x00117b; 	X(MOV(word_11bba, 0x1A05));	// 2601 mov     word_11BBA, 1A05h ;~ 01A2:117B
loc_11181:
	// 4662 
cs=0x192;eip=0x001181; 	R(CALL(sub_11db3,0));	// 2605 call    sub_11DB3 ;~ 01A2:1181
cs=0x192;eip=0x001184; 	R(CALL(sub_11dca,0));	// 2606 call    sub_11DCA ;~ 01A2:1184
cs=0x192;eip=0x001187; 	R(CALL(sub_11dc4,0));	// 2607 call    sub_11DC4 ;~ 01A2:1187
cs=0x192;eip=0x00118a; 	T(XOR(al, al));	// 2608 xor     al, al ;~ 01A2:118A
cs=0x192;eip=0x00118c; 	T(CMP(byte_15fe8, 0x64));	// 2609 cmp     byte_15FE8, 64h ; 'd' ;~ 01A2:118C
cs=0x192;eip=0x001191; 	R(JNZ(loc_11199));	// 2610 jnz     short loc_11199 ;~ 01A2:1191
cs=0x192;eip=0x001193; 	T(MOV(bx, word_11bb6));	// 2611 mov     bx, word_11BB6 ;~ 01A2:1193
cs=0x192;eip=0x001197; 	T(MOV(al, *(raddr(ds,bx))));	// 2612 mov     al, [bx] ;~ 01A2:1197
loc_11199:
	// 4663 
cs=0x192;eip=0x001199; 	T(CMP(al, byte_11bde));	// 2615 cmp     al, byte_11BDE ;~ 01A2:1199
cs=0x192;eip=0x00119d; 	X(MOV(byte_11bde, al));	// 2616 mov     byte_11BDE, al ;~ 01A2:119D
cs=0x192;eip=0x0011a0; 	R(JZ(loc_111a5));	// 2617 jz      short loc_111A5 ;~ 01A2:11A0
cs=0x192;eip=0x0011a2; 	R(CALL(sub_11f09,0));	// 2618 call    sub_11F09 ;~ 01A2:11A2
loc_111a5:
	// 4664 
cs=0x192;eip=0x0011a5; 	T(MOV(bx, word_11bba));	// 2621 mov     bx, word_11BBA ;~ 01A2:11A5
cs=0x192;eip=0x0011a9; __disp=bx;
	R(JMP(__dispatch_call));	// 2622 jmp     bx ;~ 01A2:11A9

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_11181: 	goto loc_11181;
        case m2c::kloc_11199: 	goto loc_11199;
        case m2c::kloc_111a5: 	goto loc_111a5;
        case m2c::kret_1a2_1167: 	goto ret_1a2_1167;
        case m2c::ksub_11162: 	goto sub_11162;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_11be5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11be5:
    _begin:
cs=0x192;eip=0x001be5; 	T(MOV(bx, word_11bb4));	// 4009 mov     bx, word_11BB4 ;~ 01A2:1BE5
ret_1a2_1be9:
	// 4828 
cs=0x192;eip=0x001be9; 	T(ADD(bx, dx));	// 4010 add     bx, dx ;~ 01A2:1BE9
cs=0x192;eip=0x001beb; 	T(CMP(*(raddr(ds,bx)), 0x0FF));	// 4011 cmp     byte ptr [bx], 0FFh ;~ 01A2:1BEB
cs=0x192;eip=0x001bee; 	R(JZ(loc_11bfb));	// 4012 jz      short loc_11BFB ;~ 01A2:1BEE
cs=0x192;eip=0x001bf0; 	T(MOV(al, 1));	// 4013 mov     al, 1 ;~ 01A2:1BF0
loc_11bf2:
	// 4829 
cs=0x192;eip=0x001bf2; 	X(MOV(byte_16fa1, al));	// 4016 mov     byte_16FA1, al ;~ 01A2:1BF2
cs=0x192;eip=0x001bf5; 	X(MOV(byte_11bd8, 1));	// 4017 mov     byte_11BD8, 1 ;~ 01A2:1BF5
cs=0x192;eip=0x001bfa; 	R(RETN(0));	// 4018 retn ;~ 01A2:1BFA
loc_11bfb:
	// 4830 
cs=0x192;eip=0x001bfb; 	T(ADD(bx, 0x240));	// 4022 add     bx, 240h ;~ 01A2:1BFB
cs=0x192;eip=0x001bff; 	T(CMP(*(raddr(ds,bx)), 0x0FF));	// 4023 cmp     byte ptr [bx], 0FFh ;~ 01A2:1BFF
cs=0x192;eip=0x001c02; 	T(MOV(al, 2));	// 4024 mov     al, 2 ;~ 01A2:1C02
cs=0x192;eip=0x001c04; 	R(JNZ(loc_11bf2));	// 4025 jnz     short loc_11BF2 ;~ 01A2:1C04
cs=0x192;eip=0x001c06; 	R(RETN(0));	// 4026 retn ;~ 01A2:1C06

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_11bf2: 	goto loc_11bf2;
        case m2c::kloc_11bfb: 	goto loc_11bfb;
        case m2c::kret_1a2_1be9: 	goto ret_1a2_1be9;
        case m2c::ksub_11be5: 	goto sub_11be5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_11cb7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11cb7:
    _begin:
cs=0x192;eip=0x001cb7; 	T(MOV(si, 0x5D10));	// 4140 mov     si, 5D10h ;~ 01A2:1CB7
ret_1a2_1cba:
	// 4839 
cs=0x192;eip=0x001cba; 	X(MOV(word_15b2e, si));	// 4141 mov     word_15B2E, si ;~ 01A2:1CBA
cs=0x192;eip=0x001cbe; 	T(MOV(di, 0x5CFE));	// 4142 mov     di, 5CFEh ;~ 01A2:1CBE
cs=0x192;eip=0x001cc1; 	T(MOV(cx, 9));	// 4143 mov     cx, 9 ;~ 01A2:1CC1
cs=0x192;eip=0x001cc4; 	T(CLD);	// 4144 cld ;~ 01A2:1CC4
	// 4145 rep movsw ;~ 01A2:1CC5
cs=0x192;eip=0x001cc5; 	X(	REP MOVSW);	// 4145 rep movsw ;~ 01A2:1CC5
cs=0x192;eip=0x001cc7; 	X(MOV(byte_15b3c, 0));	// 4146 mov     byte_15B3C, 0 ;~ 01A2:1CC7
cs=0x192;eip=0x001ccc; 	R(RETN(0));	// 4147 retn ;~ 01A2:1CCC

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1a2_1cba: 	goto ret_1a2_1cba;
        case m2c::ksub_11cb7: 	goto sub_11cb7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_11ccd(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11ccd:
    _begin:
cs=0x192;eip=0x001ccd; 	X(XOR(byte_15cf5, 0x9B));	// 4156 xor     byte_15CF5, 9Bh ;~ 01A2:1CCD
ret_1a2_1cd2:
	// 4840 
cs=0x192;eip=0x001cd2; 	X(ADD(word_15b2e, 0x12));	// 4157 add     word_15B2E, 12h ;~ 01A2:1CD2
cs=0x192;eip=0x001cd7; 	T(MOV(al, byte_15b3c));	// 4158 mov     al, byte_15B3C ;~ 01A2:1CD7
cs=0x192;eip=0x001cda; 	T(INC(al));	// 4159 inc     al ;~ 01A2:1CDA
cs=0x192;eip=0x001cdc; 	T(CMP(al, 4));	// 4160 cmp     al, 4 ;~ 01A2:1CDC
cs=0x192;eip=0x001cde; 	R(JNZ(loc_11cef));	// 4161 jnz     short loc_11CEF ;~ 01A2:1CDE
cs=0x192;eip=0x001ce0; 	X(MOV(word_15b2e, 0x5D10));	// 4162 mov     word_15B2E, 5D10h ;~ 01A2:1CE0
cs=0x192;eip=0x001ce6; 	T(MOV(ch, 1));	// 4163 mov     ch, 1 ;~ 01A2:1CE6
cs=0x192;eip=0x001ce8; 	T(MOV(dh, 4));	// 4164 mov     dh, 4 ;~ 01A2:1CE8
cs=0x192;eip=0x001cea; 	R(CALL(sub_12dd0,0));	// 4165 call    sub_12DD0 ;~ 01A2:1CEA
cs=0x192;eip=0x001ced; 	T(XOR(al, al));	// 4166 xor     al, al ;~ 01A2:1CED
loc_11cef:
	// 4841 
cs=0x192;eip=0x001cef; 	X(MOV(byte_15b3c, al));	// 4169 mov     byte_15B3C, al ;~ 01A2:1CEF
cs=0x192;eip=0x001cf2; 	T(MOV(si, word_15b2e));	// 4170 mov     si, word_15B2E ;~ 01A2:1CF2
cs=0x192;eip=0x001cf6; 	T(MOV(di, 0x5CFE));	// 4171 mov     di, 5CFEh ;~ 01A2:1CF6
cs=0x192;eip=0x001cf9; 	T(MOV(cx, 9));	// 4172 mov     cx, 9 ;~ 01A2:1CF9
cs=0x192;eip=0x001cfc; 	T(CLD);	// 4173 cld ;~ 01A2:1CFC
	// 4174 rep movsw ;~ 01A2:1CFD
cs=0x192;eip=0x001cfd; 	X(	REP MOVSW);	// 4174 rep movsw ;~ 01A2:1CFD
cs=0x192;eip=0x001cff; 	R(RETN(0));	// 4175 retn ;~ 01A2:1CFF

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_11cef: 	goto loc_11cef;
        case m2c::kret_1a2_1cd2: 	goto ret_1a2_1cd2;
        case m2c::ksub_11ccd: 	goto sub_11ccd;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_11d36(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11d36:
    _begin:
cs=0x192;eip=0x001d36; 	T(MOV(bx, 0x5FED));	// 4228 mov     bx, 5FEDh ;~ 01A2:1D36
ret_1a2_1d39:
	// 4846 
cs=0x192;eip=0x001d39; 	T(MOV(ah, 1));	// 4229 mov     ah, 1 ;~ 01A2:1D39
cs=0x192;eip=0x001d3b; 	T(MOV(cx, 4));	// 4230 mov     cx, 4 ;~ 01A2:1D3B
loc_11d3e:
	// 4847 
cs=0x192;eip=0x001d3e; 	T(MOV(al, *(raddr(ds,bx))));	// 4233 mov     al, [bx] ;~ 01A2:1D3E
cs=0x192;eip=0x001d40; 	T(INC(al));	// 4234 inc     al ;~ 01A2:1D40
cs=0x192;eip=0x001d42; 	T(CMP(al, 0x0C8));	// 4235 cmp     al, 0C8h ; 'È' ;~ 01A2:1D42
cs=0x192;eip=0x001d44; 	R(JNC(loc_11d4c));	// 4236 jnb     short loc_11D4C ;~ 01A2:1D44
cs=0x192;eip=0x001d46; 	T(INC(bx));	// 4237 inc     bx ;~ 01A2:1D46
cs=0x192;eip=0x001d47; 	R(LOOP(loc_11d3e));	// 4238 loop    loc_11D3E ;~ 01A2:1D47
cs=0x192;eip=0x001d49; 	T(DEC(ah));	// 4239 dec     ah ;~ 01A2:1D49
cs=0x192;eip=0x001d4b; 	R(RETN(0));	// 4240 retn ;~ 01A2:1D4B
loc_11d4c:
	// 4848 
cs=0x192;eip=0x001d4c; 	T(INC(ah));	// 4244 inc     ah ;~ 01A2:1D4C
cs=0x192;eip=0x001d4e; 	R(RETN(0));	// 4245 retn ;~ 01A2:1D4E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_11d3e: 	goto loc_11d3e;
        case m2c::kloc_11d4c: 	goto loc_11d4c;
        case m2c::kret_1a2_1d39: 	goto ret_1a2_1d39;
        case m2c::ksub_11d36: 	goto sub_11d36;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_11d4f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11d4f:
    _begin:
cs=0x192;eip=0x001d4f; 	T(MOV(cx, 6));	// 4253 mov     cx, 6 ;~ 01A2:1D4F
loc_11d52:
	// 4849 
cs=0x192;eip=0x001d52; 	T(MOV(bx, 0x5FC8));	// 4256 mov     bx, 5FC8h ;~ 01A2:1D52
cs=0x192;eip=0x001d55; 	T(MOV(ah, 1));	// 4257 mov     ah, 1 ;~ 01A2:1D55
loc_11d57:
	// 4850 
cs=0x192;eip=0x001d57; 	T(MOV(al, *(raddr(ds,bx))));	// 4260 mov     al, [bx] ;~ 01A2:1D57
cs=0x192;eip=0x001d59; 	T(INC(al));	// 4261 inc     al ;~ 01A2:1D59
cs=0x192;eip=0x001d5b; 	T(CMP(al, 0x0C8));	// 4262 cmp     al, 0C8h ; 'È' ;~ 01A2:1D5B
cs=0x192;eip=0x001d5d; 	R(JNC(loc_11d66));	// 4263 jnb     short loc_11D66 ;~ 01A2:1D5D
cs=0x192;eip=0x001d5f; 	T(ADD(bx, 6));	// 4264 add     bx, 6 ;~ 01A2:1D5F
cs=0x192;eip=0x001d62; 	R(LOOP(loc_11d57));	// 4265 loop    loc_11D57 ;~ 01A2:1D62
cs=0x192;eip=0x001d64; 	T(MOV(ah, 0));	// 4266 mov     ah, 0 ;~ 01A2:1D64
loc_11d66:
	// 4851 
cs=0x192;eip=0x001d66; 	T(DEC(ah));	// 4269 dec     ah ;~ 01A2:1D66
cs=0x192;eip=0x001d68; 	T(INC(ah));	// 4270 inc     ah ;~ 01A2:1D68
cs=0x192;eip=0x001d6a; 	R(RETN(0));	// 4271 retn ;~ 01A2:1D6A

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_11d52: 	goto loc_11d52;
        case m2c::kloc_11d57: 	goto loc_11d57;
        case m2c::kloc_11d66: 	goto loc_11d66;
        case m2c::ksub_11d4f: 	goto sub_11d4f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_11d99(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11d99:
    _begin:
cs=0x192;eip=0x001d99; 	T(MOV(al, byte_11bd9));	// 4335 mov     al, byte_11BD9 ;~ 01A2:1D99
ret_1a2_1d9c:
	// 4858 
cs=0x192;eip=0x001d9c; 	T(ADD(al, al));	// 4336 add     al, al ;~ 01A2:1D9C
cs=0x192;eip=0x001d9e; 	T(MOV(ah, 0));	// 4337 mov     ah, 0 ;~ 01A2:1D9E
cs=0x192;eip=0x001da0; 	T(DEC(ax));	// 4338 dec     ax ;~ 01A2:1DA0
cs=0x192;eip=0x001da1; 	X(ADD(byte_11bce, al));	// 4339 add     byte_11BCE, al ;~ 01A2:1DA1
cs=0x192;eip=0x001da5; 	X(ADD(word_11bb4, ax));	// 4340 add     word_11BB4, ax ;~ 01A2:1DA5
cs=0x192;eip=0x001da9; 	R(RETN(0));	// 4341 retn ;~ 01A2:1DA9

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1a2_1d9c: 	goto ret_1a2_1d9c;
        case m2c::ksub_11d99: 	goto sub_11d99;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_11daa(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11daa:
    _begin:
cs=0x192;eip=0x001daa; 	T(CMP(byte_11bce, 0x0FD));	// 4350 cmp     byte_11BCE, 0FDh ; 'ı' ;~ 01A2:1DAA
ret_1a2_1daf:
	// 4859 
cs=0x192;eip=0x001daf; 	R(JNZ(locret_11db2));	// 4351 jnz     short locret_11DB2 ;~ 01A2:1DAF
cs=0x192;eip=0x001db1; 	T(INC(dx));	// 4352 inc     dx ;~ 01A2:1DB1
locret_11db2:
	// 4860 
cs=0x192;eip=0x001db2; 	R(RETN(0));	// 4355 retn ;~ 01A2:1DB2

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::klocret_11db2: 	goto locret_11db2;
        case m2c::kret_1a2_1daf: 	goto ret_1a2_1daf;
        case m2c::ksub_11daa: 	goto sub_11daa;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_11db3(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11db3:
    _begin:
cs=0x192;eip=0x001db3; 	T(MOV(di, 0x5FC2));	// 4364 mov     di, 5FC2h ;~ 01A2:1DB3
ret_1a2_1db6:
	// 4861 
cs=0x192;eip=0x001db6; 	T(MOV(cx, 0x18));	// 4365 mov     cx, 18h ;~ 01A2:1DB6
cs=0x192;eip=0x001db9; 	T(MOV(ax, 0x0FFFF));	// 4366 mov     ax, 0FFFFh ;~ 01A2:1DB9
	// 4367 rep stosw ;~ 01A2:1DBC
cs=0x192;eip=0x001dbc; 	X(	REP STOSW);	// 4367 rep stosw ;~ 01A2:1DBC
cs=0x192;eip=0x001dbe; 	X(MOV(byte_15b31, 2));	// 4368 mov     byte_15B31, 2 ;~ 01A2:1DBE
cs=0x192;eip=0x001dc3; 	R(RETN(0));	// 4369 retn ;~ 01A2:1DC3

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1a2_1db6: 	goto ret_1a2_1db6;
        case m2c::ksub_11db3: 	goto sub_11db3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_11dc4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11dc4:
    _begin:
cs=0x192;eip=0x001dc4; 	X(MOV(byte_15b31, 0));	// 4378 mov     byte_15B31, 0 ;~ 01A2:1DC4
ret_1a2_1dc9:
	// 4862 
cs=0x192;eip=0x001dc9; 	R(RETN(0));	// 4379 retn ;~ 01A2:1DC9

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1a2_1dc9: 	goto ret_1a2_1dc9;
        case m2c::ksub_11dc4: 	goto sub_11dc4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool _group7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group7:
    _begin:
sub_11ec0:
	// 4544 
cs=0x192;eip=0x001ec0; 	X(MOV(word_15b20, 0x5B22));	// 4546 mov     word_15B20, 5B22h ;~ 01A2:1EC0
ret_1a2_1ec6:
	// 4878 
cs=0x192;eip=0x001ec6; 	T(MOV(bx, word_15b22));	// 4547 mov     bx, word_15B22 ;~ 01A2:1EC6
cs=0x192;eip=0x001eca; 	T(ADD(bx, ax));	// 4548 add     bx, ax ;~ 01A2:1ECA
cs=0x192;eip=0x001ecc; 	T(MOV(cl, 4));	// 4549 mov     cl, 4 ;~ 01A2:1ECC
cs=0x192;eip=0x001ece; 	T(MOV(ch, 0x0B));	// 4550 mov     ch, 0Bh ;~ 01A2:1ECE
cs=0x192;eip=0x001ed0; 	T(MOV(ah, byte_11bcd));	// 4551 mov     ah, byte_11BCD ;~ 01A2:1ED0
cs=0x192;eip=0x001ed4; 	T(MOV(al, byte_11bce));	// 4552 mov     al, byte_11BCE ;~ 01A2:1ED4
cs=0x192;eip=0x001ed7; 	T(SUB(al, 2));	// 4553 sub     al, 2 ;~ 01A2:1ED7
cs=0x192;eip=0x001ed9; 	R(CALL(sub_11dfd,0));	// 4554 call    sub_11DFD ;~ 01A2:1ED9
cs=0x192;eip=0x001edc; 	R(JMP(loc_11edf));	// 4555 jmp     short loc_11EDF ;~ 01A2:1EDC
loc_11edf:
	// 4879 
cs=0x192;eip=0x001edf; 	X(MOV(word_15b20, 0x1BB4));	// 4562 mov     word_15B20, 1BB4h ;~ 01A2:1EDF
cs=0x192;eip=0x001ee5; 	R(RETN(0));	// 4563 retn ;~ 01A2:1EE5
sub_11ee6:
	// 4570 
cs=0x192;eip=0x001ee6; 	X(MOV(word_15b20, 0x5B24));	// 4572 mov     word_15B20, 5B24h ;~ 01A2:1EE6
ret_1a2_1eec:
	// 4880 
cs=0x192;eip=0x001eec; 	T(MOV(bx, word_11bb4));	// 4573 mov     bx, word_11BB4 ;~ 01A2:1EEC
cs=0x192;eip=0x001ef0; 	T(ADD(bx, 0x3E));	// 4574 add     bx, 3Eh ; '>' ;~ 01A2:1EF0
cs=0x192;eip=0x001ef3; 	X(MOV(word_15b24, bx));	// 4575 mov     word_15B24, bx ;~ 01A2:1EF3
cs=0x192;eip=0x001ef7; 	T(ADD(bx, ax));	// 4576 add     bx, ax ;~ 01A2:1EF7
cs=0x192;eip=0x001ef9; 	T(MOV(cl, 5));	// 4577 mov     cl, 5 ;~ 01A2:1EF9
cs=0x192;eip=0x001efb; 	T(MOV(ch, 0x0B));	// 4578 mov     ch, 0Bh ;~ 01A2:1EFB
cs=0x192;eip=0x001efd; 	T(MOV(ah, 0x0A));	// 4579 mov     ah, 0Ah ;~ 01A2:1EFD
cs=0x192;eip=0x001eff; 	T(MOV(al, byte_11bce));	// 4580 mov     al, byte_11BCE ;~ 01A2:1EFF
cs=0x192;eip=0x001f02; 	T(SUB(al, 2));	// 4581 sub     al, 2 ;~ 01A2:1F02
cs=0x192;eip=0x001f04; 	R(CALL(sub_11dfd,0));	// 4582 call    sub_11DFD ;~ 01A2:1F04
cs=0x192;eip=0x001f07; 	R(JMP(loc_11edf));	// 4583 jmp     short loc_11EDF ;~ 01A2:1F07

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_11edf: 	goto loc_11edf;
        case m2c::kret_1a2_1ec6: 	goto ret_1a2_1ec6;
        case m2c::kret_1a2_1eec: 	goto ret_1a2_1eec;
        case m2c::ksub_11ec0: 	goto sub_11ec0;
        case m2c::ksub_11ee6: 	goto sub_11ee6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool _group8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group8:
    _begin:
sub_11f09:
	// 4590 
cs=0x192;eip=0x001f09; 	X(PUSH(bx));	// 4591 push    bx ;~ 01A2:1F09
ret_1a2_1f0a:
	// 4881 
cs=0x192;eip=0x001f0a; 	X(PUSH(cx));	// 4592 push    cx ;~ 01A2:1F0A
cs=0x192;eip=0x001f0b; 	X(PUSH(dx));	// 4593 push    dx ;~ 01A2:1F0B
cs=0x192;eip=0x001f0c; 	T(OR(al, al));	// 4594 or      al, al ;~ 01A2:1F0C
cs=0x192;eip=0x001f0e; 	R(JNZ(loc_11f2d));	// 4595 jnz     short loc_11F2D ;~ 01A2:1F0E
cs=0x192;eip=0x001f10; 	T(MOV(bx, 0x5B3B));	// 4596 mov     bx, 5B3Bh ;~ 01A2:1F10
cs=0x192;eip=0x001f13; 	T(MOV(al, *(raddr(ds,bx))));	// 4597 mov     al, [bx] ;~ 01A2:1F13
cs=0x192;eip=0x001f15; 	T(OR(al, al));	// 4598 or      al, al ;~ 01A2:1F15
cs=0x192;eip=0x001f17; 	R(JZ(loc_11f2d));	// 4599 jz      short loc_11F2D ;~ 01A2:1F17
cs=0x192;eip=0x001f19; 	X(DEC(*(raddr(ds,bx))));	// 4600 dec     byte ptr [bx] ;~ 01A2:1F19
cs=0x192;eip=0x001f1b; 	T(MOV(bx, word_11bb6));	// 4601 mov     bx, word_11BB6 ;~ 01A2:1F1B
cs=0x192;eip=0x001f1f; 	T(MOV(cx, 5));	// 4602 mov     cx, 5 ;~ 01A2:1F1F
loc_11f22:
	// 4882 
cs=0x192;eip=0x001f22; 	X(AND(*(raddr(ds,bx)), 0x7F));	// 4605 and     byte ptr [bx], 7Fh ;~ 01A2:1F22
cs=0x192;eip=0x001f25; 	T(INC(bx));	// 4606 inc     bx ;~ 01A2:1F25
cs=0x192;eip=0x001f26; 	R(LOOP(loc_11f22));	// 4607 loop    loc_11F22 ;~ 01A2:1F26
cs=0x192;eip=0x001f28; 	R(CALL(sub_11f82,0));	// 4608 call    sub_11F82 ;~ 01A2:1F28
cs=0x192;eip=0x001f2b; 	T(XOR(al, al));	// 4609 xor     al, al ;~ 01A2:1F2B
loc_11f2d:
	// 4883 
cs=0x192;eip=0x001f2d; 	T(MOV(di, 0x17FE));	// 4613 mov     di, 17FEh ;~ 01A2:1F2D
cs=0x192;eip=0x001f30; 	R(JMP(loc_11f3b));	// 4614 jmp     short loc_11F3B ;~ 01A2:1F30
sub_11f32:
	// 4621 
cs=0x192;eip=0x001f32; 	T(MOV(al, byte_11bdd));	// 4623 mov     al, byte_11BDD ;~ 01A2:1F32
ret_1a2_1f35:
	// 4884 
cs=0x192;eip=0x001f35; 	X(PUSH(bx));	// 4624 push    bx ;~ 01A2:1F35
cs=0x192;eip=0x001f36; 	X(PUSH(cx));	// 4625 push    cx ;~ 01A2:1F36
cs=0x192;eip=0x001f37; 	X(PUSH(dx));	// 4626 push    dx ;~ 01A2:1F37
cs=0x192;eip=0x001f38; 	T(MOV(di, 0x17CA));	// 4627 mov     di, 17CAh ;~ 01A2:1F38
loc_11f3b:
	// 4885 
cs=0x192;eip=0x001f3b; 	T(AND(al, 0x7F));	// 4630 and     al, 7Fh ;~ 01A2:1F3B
cs=0x192;eip=0x001f3d; 	T(MOV(ah, 0));	// 4631 mov     ah, 0 ;~ 01A2:1F3D
cs=0x192;eip=0x001f3f; 	T(ADD(ax, ax));	// 4632 add     ax, ax ;~ 01A2:1F3F
cs=0x192;eip=0x001f41; 	T(MOV(bx, 0x5814));	// 4633 mov     bx, 5814h ;~ 01A2:1F41
cs=0x192;eip=0x001f44; 	T(ADD(bx, ax));	// 4634 add     bx, ax ;~ 01A2:1F44
cs=0x192;eip=0x001f46; 	T(MOV(si, *(dw*)(raddr(ds,bx))));	// 4635 mov     si, [bx] ;~ 01A2:1F46
cs=0x192;eip=0x001f48; 	T(MOV(cx, 3));	// 4636 mov     cx, 3 ;~ 01A2:1F48
loc_11f4b:
	// 4886 
cs=0x192;eip=0x001f4b; 	X(PUSH(cx));	// 4639 push    cx ;~ 01A2:1F4B
cs=0x192;eip=0x001f4c; 	T(MOV(cx, 4));	// 4640 mov     cx, 4 ;~ 01A2:1F4C
loc_11f4f:
	// 4887 
cs=0x192;eip=0x001f4f; 	X(PUSH(cx));	// 4643 push    cx ;~ 01A2:1F4F
cs=0x192;eip=0x001f50; 	X(PUSH(di));	// 4644 push    di ;~ 01A2:1F50
cs=0x192;eip=0x001f51; 	X(PUSH(si));	// 4645 push    si ;~ 01A2:1F51
cs=0x192;eip=0x001f52; 	R(CALL(sub_10547,0));	// 4646 call    sub_10547 ;~ 01A2:1F52
cs=0x192;eip=0x001f55; 	X(POP(si));	// 4647 pop     si ;~ 01A2:1F55
cs=0x192;eip=0x001f56; 	T(ADD(si, 9));	// 4648 add     si, 9 ;~ 01A2:1F56
cs=0x192;eip=0x001f59; 	X(POP(di));	// 4649 pop     di ;~ 01A2:1F59
cs=0x192;eip=0x001f5a; 	T(ADD(di, 2));	// 4650 add     di, 2 ;~ 01A2:1F5A
cs=0x192;eip=0x001f5d; 	X(POP(cx));	// 4651 pop     cx ;~ 01A2:1F5D
cs=0x192;eip=0x001f5e; 	R(LOOP(loc_11f4f));	// 4652 loop    loc_11F4F ;~ 01A2:1F5E
cs=0x192;eip=0x001f60; 	T(ADD(di, 0x138));	// 4653 add     di, 138h ;~ 01A2:1F60
cs=0x192;eip=0x001f64; 	X(POP(cx));	// 4654 pop     cx ;~ 01A2:1F64
cs=0x192;eip=0x001f65; 	R(LOOP(loc_11f4b));	// 4655 loop    loc_11F4B ;~ 01A2:1F65
cs=0x192;eip=0x001f67; 	X(POP(dx));	// 4656 pop     dx ;~ 01A2:1F67
cs=0x192;eip=0x001f68; 	X(POP(cx));	// 4657 pop     cx ;~ 01A2:1F68
cs=0x192;eip=0x001f69; 	X(POP(bx));	// 4658 pop     bx ;~ 01A2:1F69
cs=0x192;eip=0x001f6a; 	R(RETN(0));	// 4659 retn ;~ 01A2:1F6A

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_11f22: 	goto loc_11f22;
        case m2c::kloc_11f2d: 	goto loc_11f2d;
        case m2c::kloc_11f3b: 	goto loc_11f3b;
        case m2c::kloc_11f4b: 	goto loc_11f4b;
        case m2c::kloc_11f4f: 	goto loc_11f4f;
        case m2c::kret_1a2_1f0a: 	goto ret_1a2_1f0a;
        case m2c::kret_1a2_1f35: 	goto ret_1a2_1f35;
        case m2c::ksub_11f09: 	goto sub_11f09;
        case m2c::ksub_11f32: 	goto sub_11f32;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool _group9(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group9:
    _begin:
sub_11f6b:
	// 4666 
cs=0x192;eip=0x001f6b; 	T(MOV(bx, 0x1963));	// 4668 mov     bx, 1963h ;~ 01A2:1F6B
ret_1a2_1f6e:
	// 4888 
cs=0x192;eip=0x001f6e; 	T(MOV(ah, 6));	// 4669 mov     ah, 6 ;~ 01A2:1F6E
cs=0x192;eip=0x001f70; 	T(MOV(al, 0x3A));	// 4670 mov     al, 3Ah ; ':' ;~ 01A2:1F70
loc_11f72:
	// 4889 
cs=0x192;eip=0x001f72; 	X(INC(*(raddr(ds,bx))));	// 4673 inc     byte ptr [bx] ;~ 01A2:1F72
cs=0x192;eip=0x001f74; 	T(CMP(al, *(raddr(ds,bx))));	// 4674 cmp     al, [bx] ;~ 01A2:1F74
cs=0x192;eip=0x001f76; 	R(JNZ(loc_11f80));	// 4675 jnz     short loc_11F80 ;~ 01A2:1F76
cs=0x192;eip=0x001f78; 	X(MOV(*(raddr(ds,bx)), 0x30));	// 4676 mov     byte ptr [bx], 30h ; '0' ;~ 01A2:1F78
cs=0x192;eip=0x001f7b; 	T(DEC(bx));	// 4677 dec     bx ;~ 01A2:1F7B
cs=0x192;eip=0x001f7c; 	T(DEC(ah));	// 4678 dec     ah ;~ 01A2:1F7C
cs=0x192;eip=0x001f7e; 	R(JNZ(loc_11f72));	// 4679 jnz     short loc_11F72 ;~ 01A2:1F7E
loc_11f80:
	// 4890 
cs=0x192;eip=0x001f80; 	R(LOOP(sub_11f6b));	// 4682 loop    sub_11F6B ;~ 01A2:1F80
sub_11f82:
	// 4689 
cs=0x192;eip=0x001f82; 	T(MOV(si, 0x1953));	// 4691 mov     si, 1953h ;~ 01A2:1F82
cs=0x192;eip=0x001f85; 	R(CALL(sub_104b7,0));	// 4692 call    sub_104B7 ;~ 01A2:1F85
cs=0x192;eip=0x001f88; 	R(RETN(0));	// 4693 retn ;~ 01A2:1F88

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_11f72: 	goto loc_11f72;
        case m2c::kloc_11f80: 	goto loc_11f80;
        case m2c::kret_1a2_1f6e: 	goto ret_1a2_1f6e;
        case m2c::ksub_11f6b: 	goto sub_11f6b;
        case m2c::ksub_11f82: 	goto sub_11f82;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_11f89(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11f89:
    _begin:
cs=0x192;eip=0x001f89; 	T(CMP(byte_11bdc, 0));	// 4702 cmp     byte_11BDC, 0 ;~ 01A2:1F89
ret_1a2_1f8e:
	// 4891 
cs=0x192;eip=0x001f8e; 	R(JNZ(loc_11f91));	// 4703 jnz     short loc_11F91 ;~ 01A2:1F8E
cs=0x192;eip=0x001f90; 	R(RETN(0));	// 4704 retn ;~ 01A2:1F90
loc_11f91:
	// 4892 
cs=0x192;eip=0x001f91; 	X(PUSH(cx));	// 4709 push    cx ;~ 01A2:1F91
cs=0x192;eip=0x001f92; 	T(MOV(di, word_11bc0));	// 4710 mov     di, word_11BC0 ;~ 01A2:1F92
cs=0x192;eip=0x001f96; 	X(PUSH(es));	// 4711 push    es ;~ 01A2:1F96
cs=0x192;eip=0x001f97; 	T(MOV(ax, 0x0B800));	// 4712 mov     ax, 0B800h ;~ 01A2:1F97
cs=0x192;eip=0x001f9a; 	T(MOV(es, ax));	// 4713 mov     es, ax ;~ 01A2:1F9A
cs=0x192;eip=0x001f9c; 	T(MOV(al, byte_11bdb));	// 4715 mov     al, byte_11BDB ;~ 01A2:1F9C
cs=0x192;eip=0x001f9f; 	X(PUSH(di));	// 4716 push    di ;~ 01A2:1F9F
cs=0x192;eip=0x001fa0; 	R(CALL(sub_11fd8,0));	// 4717 call    sub_11FD8 ;~ 01A2:1FA0
cs=0x192;eip=0x001fa3; 	X(POP(di));	// 4718 pop     di ;~ 01A2:1FA3
cs=0x192;eip=0x001fa4; 	T(ADD(di, 0x2000));	// 4719 add     di, 2000h ;~ 01A2:1FA4
cs=0x192;eip=0x001fa8; 	R(CALL(sub_11fd8,0));	// 4720 call    sub_11FD8 ;~ 01A2:1FA8
cs=0x192;eip=0x001fab; 	X(ROL(byte_11bdb, 1));	// 4721 rol     byte_11BDB, 1 ;~ 01A2:1FAB
cs=0x192;eip=0x001faf; 	X(ROL(byte_11bdb, 1));	// 4722 rol     byte_11BDB, 1 ;~ 01A2:1FAF
cs=0x192;eip=0x001fb3; 	T(CMP(byte_11bdb, 2));	// 4723 cmp     byte_11BDB, 2 ;~ 01A2:1FB3
cs=0x192;eip=0x001fb8; 	R(JNZ(loc_11fd3));	// 4724 jnz     short loc_11FD3 ;~ 01A2:1FB8
cs=0x192;eip=0x001fba; 	X(DEC(word_11bc0));	// 4725 dec     word_11BC0 ;~ 01A2:1FBA
cs=0x192;eip=0x001fbe; 	T(CMP(word_11bc0, 0x1A53));	// 4726 cmp     word_11BC0, 1A53h ;~ 01A2:1FBE
cs=0x192;eip=0x001fc4; 	R(JNZ(loc_11fd3));	// 4727 jnz     short loc_11FD3 ;~ 01A2:1FC4
cs=0x192;eip=0x001fc6; 	X(POP(es));	// 4728 pop     es ;~ 01A2:1FC6
cs=0x192;eip=0x001fc7; 	X(POP(cx));	// 4730 pop     cx ;~ 01A2:1FC7
cs=0x192;eip=0x001fc8; 	X(MOV(byte_11bd5, 1));	// 4731 mov     byte_11BD5, 1 ;~ 01A2:1FC8
cs=0x192;eip=0x001fcd; 	X(MOV(byte_11bdc, 0));	// 4732 mov     byte_11BDC, 0 ;~ 01A2:1FCD
cs=0x192;eip=0x001fd2; 	R(RETN(0));	// 4733 retn ;~ 01A2:1FD2
loc_11fd3:
	// 4893 
cs=0x192;eip=0x001fd3; 	X(POP(es));	// 4738 pop     es ;~ 01A2:1FD3
cs=0x192;eip=0x001fd4; 	X(POP(cx));	// 4739 pop     cx ;~ 01A2:1FD4
cs=0x192;eip=0x001fd5; 	R(LOOP(loc_11f91));	// 4740 loop    loc_11F91 ;~ 01A2:1FD5
cs=0x192;eip=0x001fd7; 	R(RETN(0));	// 4741 retn ;~ 01A2:1FD7

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_11f91: 	goto loc_11f91;
        case m2c::kloc_11fd3: 	goto loc_11fd3;
        case m2c::kret_1a2_1f8e: 	goto ret_1a2_1f8e;
        case m2c::ksub_11f89: 	goto sub_11f89;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_11fd8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11fd8:
    _begin:
cs=0x192;eip=0x001fd8; 	T(MOV(cx, 8));	// 4750 mov     cx, 8 ;~ 01A2:1FD8
loc_11fdb:
	// 4894 
cs=0x192;eip=0x001fdb; 	X(XOR(*(raddr(es,di)), al));	// 4753 xor     es:[di], al ;~ 01A2:1FDB
cs=0x192;eip=0x001fde; 	T(ADD(di, 0x50));	// 4754 add     di, 50h ; 'P' ;~ 01A2:1FDE
cs=0x192;eip=0x001fe1; 	R(LOOP(loc_11fdb));	// 4755 loop    loc_11FDB ;~ 01A2:1FE1
cs=0x192;eip=0x001fe3; 	R(RETN(0));	// 4756 retn ;~ 01A2:1FE3

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_11fdb: 	goto loc_11fdb;
        case m2c::ksub_11fd8: 	goto sub_11fd8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_11fe4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11fe4:
    _begin:
cs=0x192;eip=0x001fe4; 	X(ROR(byte_11bdb, 1));	// 4765 ror     byte_11BDB, 1 ;~ 01A2:1FE4
ret_1a2_1fe8:
	// 4895 
cs=0x192;eip=0x001fe8; 	X(ROR(byte_11bdb, 1));	// 4766 ror     byte_11BDB, 1 ;~ 01A2:1FE8
cs=0x192;eip=0x001fec; 	R(JNC(locret_11ff2));	// 4767 jnb     short locret_11FF2 ;~ 01A2:1FEC
cs=0x192;eip=0x001fee; 	X(INC(word_11bc0));	// 4768 inc     word_11BC0 ;~ 01A2:1FEE
locret_11ff2:
	// 4896 
cs=0x192;eip=0x001ff2; 	R(RETN(0));	// 4771 retn ;~ 01A2:1FF2

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::klocret_11ff2: 	goto locret_11ff2;
        case m2c::kret_1a2_1fe8: 	goto ret_1a2_1fe8;
        case m2c::ksub_11fe4: 	goto sub_11fe4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_11ff3(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11ff3:
    _begin:
cs=0x192;eip=0x001ff3; 	X(DEC(byte_15b3d));	// 4780 dec     byte_15B3D ;~ 01A2:1FF3
ret_1a2_1ff7:
	// 4897 
cs=0x192;eip=0x001ff7; 	R(JZ(loc_11ffa));	// 4781 jz      short loc_11FFA ;~ 01A2:1FF7
cs=0x192;eip=0x001ff9; 	R(RETN(0));	// 4782 retn ;~ 01A2:1FF9
loc_11ffa:
	// 4898 
cs=0x192;eip=0x001ffa; 	X(MOV(byte_15b3d, 2));	// 4786 mov     byte_15B3D, 2 ;~ 01A2:1FFA
cs=0x192;eip=0x001fff; 	T(CMP(word_11bc0, 0x1A6F));	// 4787 cmp     word_11BC0, 1A6Fh ;~ 01A2:1FFF
cs=0x192;eip=0x002005; 	R(JNZ(loc_1200f));	// 4788 jnz     short loc_1200F ;~ 01A2:2005
cs=0x192;eip=0x002007; 	T(CMP(byte_11bdb, 2));	// 4789 cmp     byte_11BDB, 2 ;~ 01A2:2007
cs=0x192;eip=0x00200c; 	R(JNZ(loc_1200f));	// 4790 jnz     short loc_1200F ;~ 01A2:200C
cs=0x192;eip=0x00200e; 	R(RETN(0));	// 4791 retn ;~ 01A2:200E
loc_1200f:
	// 4899 
cs=0x192;eip=0x00200f; 	R(CALL(sub_11fe4,0));	// 4796 call    sub_11FE4 ;~ 01A2:200F
cs=0x192;eip=0x002012; 	T(MOV(cx, 1));	// 4797 mov     cx, 1 ;~ 01A2:2012
cs=0x192;eip=0x002015; 	R(CALL(sub_11f89,m2c::kloc_11f91));	// 4798 call    loc_11F91 ;~ 01A2:2015
cs=0x192;eip=0x002018; 	R(CALL(sub_11fe4,0));	// 4799 call    sub_11FE4 ;~ 01A2:2018
cs=0x192;eip=0x00201b; 	R(RETN(0));	// 4800 retn ;~ 01A2:201B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_11ffa: 	goto loc_11ffa;
        case m2c::kloc_1200f: 	goto loc_1200f;
        case m2c::kret_1a2_1ff7: 	goto ret_1a2_1ff7;
        case m2c::ksub_11ff3: 	goto sub_11ff3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_1201c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1201c:
    _begin:
cs=0x192;eip=0x00201c; 	T(MOV(cx, 0x1F4));	// 4808 mov     cx, 1F4h ;~ 01A2:201C
ret_1a2_201f:
	// 4900 
cs=0x192;eip=0x00201f; 	R(CALL(sub_11f6b,0));	// 4809 call    sub_11F6B ;~ 01A2:201F
cs=0x192;eip=0x002022; 	R(RETN(0));	// 4810 retn ;~ 01A2:2022

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1a2_201f: 	goto ret_1a2_201f;
        case m2c::ksub_1201c: 	goto sub_1201c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_12023(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12023:
    _begin:
cs=0x192;eip=0x002023; 	X(PUSH(bx));	// 4819 push    bx ;~ 01A2:2023
ret_1a2_2024:
	// 4901 
cs=0x192;eip=0x002024; 	X(PUSH(cx));	// 4820 push    cx ;~ 01A2:2024
cs=0x192;eip=0x002025; 	X(PUSH(dx));	// 4821 push    dx ;~ 01A2:2025
cs=0x192;eip=0x002026; 	T(MOV(ch, 1));	// 4822 mov     ch, 1 ;~ 01A2:2026
cs=0x192;eip=0x002028; 	T(MOV(dh, 0x19));	// 4823 mov     dh, 19h ;~ 01A2:2028
cs=0x192;eip=0x00202a; 	R(CALL(sub_12dd0,0));	// 4824 call    sub_12DD0 ;~ 01A2:202A
cs=0x192;eip=0x00202d; 	X(POP(dx));	// 4825 pop     dx ;~ 01A2:202D
cs=0x192;eip=0x00202e; 	X(POP(cx));	// 4826 pop     cx ;~ 01A2:202E
cs=0x192;eip=0x00202f; 	X(POP(bx));	// 4827 pop     bx ;~ 01A2:202F
cs=0x192;eip=0x002030; 	R(RETN(0));	// 4828 retn ;~ 01A2:2030

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1a2_2024: 	goto ret_1a2_2024;
        case m2c::ksub_12023: 	goto sub_12023;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_12506(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12506:
    _begin:
cs=0x192;eip=0x002506; 	R(CALL(sub_1107c,0));	// 5486 call    sub_1107C ;~ 01A2:2506
ret_1a2_2509:
	// 4974 
cs=0x192;eip=0x002509; 	T(AND(al, 3));	// 5487 and     al, 3 ;~ 01A2:2509
cs=0x192;eip=0x00250b; 	R(JNZ(locret_1252d));	// 5488 jnz     short locret_1252D ;~ 01A2:250B
cs=0x192;eip=0x00250d; 	T(MOV(al, byte_11bce));	// 5489 mov     al, byte_11BCE ;~ 01A2:250D
cs=0x192;eip=0x002510; 	T(ADD(al, 4));	// 5490 add     al, 4 ;~ 01A2:2510
cs=0x192;eip=0x002512; 	T(SUB(al, *(raddr(ds,si+1))));	// 5491 sub     al, [si+1] ;~ 01A2:2512
cs=0x192;eip=0x002515; 	T(SUB(al, 4));	// 5492 sub     al, 4 ;~ 01A2:2515
cs=0x192;eip=0x002517; 	T(MOV(ah, 1));	// 5493 mov     ah, 1 ;~ 01A2:2517
cs=0x192;eip=0x002519; 	R(JS(loc_1251d));	// 5494 js      short loc_1251D ;~ 01A2:2519
cs=0x192;eip=0x00251b; 	T(DEC(ah));	// 5495 dec     ah ;~ 01A2:251B
loc_1251d:
	// 4975 
cs=0x192;eip=0x00251d; 	T(CMP(byte_11bd9, ah));	// 5498 cmp     byte_11BD9, ah ;~ 01A2:251D
cs=0x192;eip=0x002521; 	R(JZ(locret_1252d));	// 5499 jz      short locret_1252D ;~ 01A2:2521
cs=0x192;eip=0x002523; 	T(MOV(al, *(raddr(ds,si+0x0B))));	// 5500 mov     al, [si+0Bh] ;~ 01A2:2523
cs=0x192;eip=0x002526; 	T(ADD(al, al));	// 5501 add     al, al ;~ 01A2:2526
cs=0x192;eip=0x002528; 	T(ADD(al, 7));	// 5502 add     al, 7 ;~ 01A2:2528
cs=0x192;eip=0x00252a; 	X(MOV(*(raddr(ds,si+0x0B)), al));	// 5503 mov     [si+0Bh], al ;~ 01A2:252A
locret_1252d:
	// 4976 
cs=0x192;eip=0x00252d; 	R(RETN(0));	// 5507 retn ;~ 01A2:252D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_1251d: 	goto loc_1251d;
        case m2c::klocret_1252d: 	goto locret_1252d;
        case m2c::kret_1a2_2509: 	goto ret_1a2_2509;
        case m2c::ksub_12506: 	goto sub_12506;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_1252e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1252e:
    _begin:
cs=0x192;eip=0x00252e; 	T(TEST(*(raddr(ds,si+9)), 0x80));	// 5516 test    byte ptr [si+9], 80h ;~ 01A2:252E
ret_1a2_2532:
	// 4977 
cs=0x192;eip=0x002532; 	R(JZ(locret_12548));	// 5517 jz      short locret_12548 ;~ 01A2:2532
cs=0x192;eip=0x002534; 	T(MOV(al, byte_16f96));	// 5518 mov     al, byte_16F96 ;~ 01A2:2534
cs=0x192;eip=0x002537; 	X(XCHG(al, byte_16f97));	// 5519 xchg    al, byte_16F97 ;~ 01A2:2537
cs=0x192;eip=0x00253b; 	X(MOV(byte_16f96, al));	// 5520 mov     byte_16F96, al ;~ 01A2:253B
cs=0x192;eip=0x00253e; 	T(MOV(ax, word_16fa2));	// 5521 mov     ax, word_16FA2 ;~ 01A2:253E
cs=0x192;eip=0x002541; 	X(XCHG(ax, word_16fa4));	// 5522 xchg    ax, word_16FA4 ;~ 01A2:2541
cs=0x192;eip=0x002545; 	X(MOV(word_16fa2, ax));	// 5523 mov     word_16FA2, ax ;~ 01A2:2545
locret_12548:
	// 4978 
cs=0x192;eip=0x002548; 	R(RETN(0));	// 5526 retn ;~ 01A2:2548

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::klocret_12548: 	goto locret_12548;
        case m2c::kret_1a2_2532: 	goto ret_1a2_2532;
        case m2c::ksub_1252e: 	goto sub_1252e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_12549(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12549:
    _begin:
cs=0x192;eip=0x002549; 	T(MOV(al, byte_11bd9));	// 5535 mov     al, byte_11BD9 ;~ 01A2:2549
ret_1a2_254c:
	// 4979 
cs=0x192;eip=0x00254c; 	X(XCHG(al, *(raddr(ds,si+0x0A))));	// 5536 xchg    al, [si+0Ah] ;~ 01A2:254C
cs=0x192;eip=0x00254f; 	X(MOV(byte_11bd9, al));	// 5537 mov     byte_11BD9, al ;~ 01A2:254F
cs=0x192;eip=0x002552; 	R(RETN(0));	// 5538 retn ;~ 01A2:2552

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1a2_254c: 	goto ret_1a2_254c;
        case m2c::ksub_12549: 	goto sub_12549;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_12553(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12553:
    _begin:
cs=0x192;eip=0x002553; 	T(MOV(bx, *(dw*)(raddr(ds,si+3))));	// 5547 mov     bx, [si+3] ;~ 01A2:2553
ret_1a2_2556:
	// 4980 
cs=0x192;eip=0x002556; 	T(ADD(bx, 4));	// 5548 add     bx, 4 ;~ 01A2:2556
cs=0x192;eip=0x00255a; 	T(MOV(dx, 0x5B6A));	// 5549 mov     dx, 5B6Ah ;~ 01A2:255A
cs=0x192;eip=0x00255d; 	T(MOV(cl, byte_16f9b));	// 5550 mov     cl, byte_16F9B ;~ 01A2:255D
cs=0x192;eip=0x002561; 	T(MOV(ch, byte_16f9c));	// 5551 mov     ch, byte_16F9C ;~ 01A2:2561
cs=0x192;eip=0x002565; 	T(MOV(ah, *(raddr(ds,si+9))));	// 5552 mov     ah, [si+9] ;~ 01A2:2565
cs=0x192;eip=0x002568; 	T(AND(ah, 0x7F));	// 5553 and     ah, 7Fh ;~ 01A2:2568
cs=0x192;eip=0x00256b; 	T(MOV(al, *(raddr(ds,si+1))));	// 5554 mov     al, [si+1] ;~ 01A2:256B
cs=0x192;eip=0x00256e; 	X(PUSH(si));	// 5555 push    si ;~ 01A2:256E
cs=0x192;eip=0x00256f; 	R(CALL(sub_11dfd,0));	// 5556 call    sub_11DFD ;~ 01A2:256F
cs=0x192;eip=0x002572; 	X(POP(si));	// 5557 pop     si ;~ 01A2:2572
cs=0x192;eip=0x002573; 	R(RETN(0));	// 5558 retn ;~ 01A2:2573

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1a2_2556: 	goto ret_1a2_2556;
        case m2c::ksub_12553: 	goto sub_12553;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_12574(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12574:
    _begin:
cs=0x192;eip=0x002574; 	X(MOV(word_15b1e, 0x5FC8));	// 5566 mov     word_15B1E, 5FC8h ;~ 01A2:2574
ret_1a2_257a:
	// 4981 
cs=0x192;eip=0x00257a; 	X(MOV(*(db*)(((db*)&word_15b1c)), 7));	// 5567 mov     byte ptr word_15B1C, 7 ;~ 01A2:257A
cs=0x192;eip=0x00257f; 	X(MOV(byte_16f9a, 8));	// 5568 mov     byte_16F9A, 8 ;~ 01A2:257F
cs=0x192;eip=0x002584; 	X(MOV(byte_16f9c, 8));	// 5569 mov     byte_16F9C, 8 ;~ 01A2:2584
cs=0x192;eip=0x002589; 	X(MOV(byte_16f99, 3));	// 5570 mov     byte_16F99, 3 ;~ 01A2:2589
cs=0x192;eip=0x00258e; 	X(MOV(byte_16f9b, 4));	// 5571 mov     byte_16F9B, 4 ;~ 01A2:258E
cs=0x192;eip=0x002593; 	X(MOV(*(db*)(((db*)&word_15b1a)), 0x10));	// 5572 mov     byte ptr word_15B1A, 10h ;~ 01A2:2593
cs=0x192;eip=0x002598; 	X(MOV(*(db*)(((db*)&word_15b18)), 0x18));	// 5573 mov     byte ptr word_15B18, 18h ;~ 01A2:2598
cs=0x192;eip=0x00259d; 	R(RETN(0));	// 5574 retn ;~ 01A2:259D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1a2_257a: 	goto ret_1a2_257a;
        case m2c::ksub_12574: 	goto sub_12574;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool _group10(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group10:
    _begin:
sub_1259e:
	// 5581 
cs=0x192;eip=0x00259e; 	X(MOV(byte_16faa, 6));	// 5583 mov     byte_16FAA, 6 ;~ 01A2:259E
ret_1a2_25a3:
	// 4982 
cs=0x192;eip=0x0025a3; 	T(MOV(si, 0x6FAB));	// 5584 mov     si, 6FABh ;~ 01A2:25A3
loc_125a6:
	// 4983 
cs=0x192;eip=0x0025a6; 	T(CMP(*(raddr(ds,si)), 0));	// 5587 cmp     byte ptr [si], 0 ;~ 01A2:25A6
cs=0x192;eip=0x0025a9; 	R(JNZ(loc_125ae));	// 5588 jnz     short loc_125AE ;~ 01A2:25A9
cs=0x192;eip=0x0025ab; 	R(JMP(loc_1264d));	// 5589 jmp     loc_1264D ;~ 01A2:25AB
loc_125ae:
	// 4984 
cs=0x192;eip=0x0025ae; 	T(MOV(bx, *(dw*)(raddr(ds,si+3))));	// 5593 mov     bx, [si+3] ;~ 01A2:25AE
cs=0x192;eip=0x0025b1; 	T(ADD(bx, 4));	// 5594 add     bx, 4 ;~ 01A2:25B1
cs=0x192;eip=0x0025b5; 	X(MOV(*(raddr(ds,bx)), 1));	// 5595 mov     byte ptr [bx], 1 ;~ 01A2:25B5
cs=0x192;eip=0x0025b8; 	T(MOV(cl, *(raddr(ds,si+5))));	// 5596 mov     cl, [si+5] ;~ 01A2:25B8
cs=0x192;eip=0x0025bb; 	X(PUSH(cx));	// 5597 push    cx ;~ 01A2:25BB
cs=0x192;eip=0x0025bc; 	T(MOV(ch, 2));	// 5598 mov     ch, 2 ;~ 01A2:25BC
loc_125be:
	// 4985 
cs=0x192;eip=0x0025be; 	T(TEST(cl, 1));	// 5601 test    cl, 1 ;~ 01A2:25BE
cs=0x192;eip=0x0025c1; 	R(JZ(loc_125c6));	// 5602 jz      short loc_125C6 ;~ 01A2:25C1
cs=0x192;eip=0x0025c3; 	R(CALL(sub_1265a,0));	// 5603 call    sub_1265A ;~ 01A2:25C3
loc_125c6:
	// 4986 
cs=0x192;eip=0x0025c6; 	T(TEST(cl, 2));	// 5606 test    cl, 2 ;~ 01A2:25C6
cs=0x192;eip=0x0025c9; 	R(JZ(loc_125ce));	// 5607 jz      short loc_125CE ;~ 01A2:25C9
cs=0x192;eip=0x0025cb; 	R(CALL(sub_12671,0));	// 5608 call    sub_12671 ;~ 01A2:25CB
loc_125ce:
	// 4987 
cs=0x192;eip=0x0025ce; 	T(TEST(cl, 4));	// 5611 test    cl, 4 ;~ 01A2:25CE
cs=0x192;eip=0x0025d1; 	R(JZ(loc_125d6));	// 5612 jz      short loc_125D6 ;~ 01A2:25D1
cs=0x192;eip=0x0025d3; 	R(CALL(sub_1267f,0));	// 5613 call    sub_1267F ;~ 01A2:25D3
loc_125d6:
	// 4988 
cs=0x192;eip=0x0025d6; 	T(TEST(cl, 8));	// 5616 test    cl, 8 ;~ 01A2:25D6
cs=0x192;eip=0x0025d9; 	R(JZ(loc_125de));	// 5617 jz      short loc_125DE ;~ 01A2:25D9
cs=0x192;eip=0x0025db; 	R(CALL(sub_1268d,0));	// 5618 call    sub_1268D ;~ 01A2:25DB
loc_125de:
	// 4989 
cs=0x192;eip=0x0025de; 	T(MOV(bx, *(dw*)(raddr(ds,si+3))));	// 5621 mov     bx, [si+3] ;~ 01A2:25DE
cs=0x192;eip=0x0025e1; 	T(ADD(bx, 0x244));	// 5622 add     bx, 244h ;~ 01A2:25E1
cs=0x192;eip=0x0025e5; 	T(CMP(*(raddr(ds,bx)), 0x0C7));	// 5623 cmp     byte ptr [bx], 0C7h ; 'Ç' ;~ 01A2:25E5
cs=0x192;eip=0x0025e8; 	R(JC(loc_125f1));	// 5624 jb      short loc_125F1 ;~ 01A2:25E8
loc_125ea:
	// 4990 
cs=0x192;eip=0x0025ea; 	X(MOV(*(raddr(ds,si)), 0));	// 5628 mov     byte ptr [si], 0 ;~ 01A2:25EA
cs=0x192;eip=0x0025ed; 	X(POP(cx));	// 5629 pop     cx ;~ 01A2:25ED
cs=0x192;eip=0x0025ee; 	R(JMP(loc_1264d));	// 5630 jmp     short loc_1264D ;~ 01A2:25EE
loc_125f1:
	// 4991 
cs=0x192;eip=0x0025f1; 	T(ADD(bx, 0x6C0));	// 5636 add     bx, 6C0h ;~ 01A2:25F1
cs=0x192;eip=0x0025f5; 	T(CMP(byte_16faa, 6));	// 5637 cmp     byte_16FAA, 6 ;~ 01A2:25F5
cs=0x192;eip=0x0025fa; 	R(JNZ(loc_1261d));	// 5638 jnz     short loc_1261D ;~ 01A2:25FA
cs=0x192;eip=0x0025fc; 	T(CMP(*(raddr(ds,bx)), 0x0FF));	// 5639 cmp     byte ptr [bx], 0FFh ;~ 01A2:25FC
cs=0x192;eip=0x0025ff; 	R(JZ(loc_12608));	// 5640 jz      short loc_12608 ;~ 01A2:25FF
cs=0x192;eip=0x002601; 	T(MOV(al, 1));	// 5641 mov     al, 1 ;~ 01A2:2601
loc_12603:
	// 4992 
cs=0x192;eip=0x002603; 	X(MOV(byte_16fa1, al));	// 5644 mov     byte_16FA1, al ;~ 01A2:2603
cs=0x192;eip=0x002606; 	R(JMP(loc_125ea));	// 5645 jmp     short loc_125EA ;~ 01A2:2606
loc_12608:
	// 4993 
cs=0x192;eip=0x002608; 	T(ADD(bx, 0x240));	// 5649 add     bx, 240h ;~ 01A2:2608
cs=0x192;eip=0x00260c; 	T(CMP(*(raddr(ds,bx)), 0x0FF));	// 5650 cmp     byte ptr [bx], 0FFh ;~ 01A2:260C
cs=0x192;eip=0x00260f; 	T(MOV(al, 2));	// 5651 mov     al, 2 ;~ 01A2:260F
cs=0x192;eip=0x002611; 	R(JNZ(loc_12603));	// 5652 jnz     short loc_12603 ;~ 01A2:2611
loc_12613:
	// 4994 
cs=0x192;eip=0x002613; 	T(MOV(cl, *(raddr(ds,si+6))));	// 5655 mov     cl, [si+6] ;~ 01A2:2613
cs=0x192;eip=0x002616; 	T(DEC(ch));	// 5656 dec     ch ;~ 01A2:2616
cs=0x192;eip=0x002618; 	R(JNZ(loc_125be));	// 5657 jnz     short loc_125BE ;~ 01A2:2618
cs=0x192;eip=0x00261a; 	R(JMP(loc_12636));	// 5658 jmp     short loc_12636 ;~ 01A2:261A
loc_1261d:
	// 4995 
cs=0x192;eip=0x00261d; 	T(SUB(bx, 0x240));	// 5664 sub     bx, 240h ;~ 01A2:261D
cs=0x192;eip=0x002621; 	T(CMP(*(raddr(ds,bx)), 0x0E0));	// 5665 cmp     byte ptr [bx], 0E0h ; 'à' ;~ 01A2:2621
cs=0x192;eip=0x002624; 	R(JNC(loc_12613));	// 5666 jnb     short loc_12613 ;~ 01A2:2624
cs=0x192;eip=0x002626; 	T(MOV(cx, 5));	// 5667 mov     cx, 5 ;~ 01A2:2626
cs=0x192;eip=0x002629; 	X(PUSH(si));	// 5668 push    si ;~ 01A2:2629
cs=0x192;eip=0x00262a; 	R(CALL(sub_11f89,0));	// 5669 call    sub_11F89 ;~ 01A2:262A
cs=0x192;eip=0x00262d; 	R(CALL(sub_12023,0));	// 5670 call    sub_12023 ;~ 01A2:262D
cs=0x192;eip=0x002630; 	X(POP(si));	// 5671 pop     si ;~ 01A2:2630
cs=0x192;eip=0x002631; 	T(CMP(*(raddr(ds,si)), 0x0E0));	// 5672 cmp     byte ptr [si], 0E0h ; 'à' ;~ 01A2:2631
cs=0x192;eip=0x002634; 	R(JC(loc_125ea));	// 5673 jb      short loc_125EA ;~ 01A2:2634
loc_12636:
	// 4996 
cs=0x192;eip=0x002636; 	X(POP(cx));	// 5676 pop     cx ;~ 01A2:2636
cs=0x192;eip=0x002637; 	T(MOV(bx, *(dw*)(raddr(ds,si+3))));	// 5677 mov     bx, [si+3] ;~ 01A2:2637
cs=0x192;eip=0x00263a; 	T(ADD(bx, 0x6C4));	// 5678 add     bx, 6C4h ;~ 01A2:263A
cs=0x192;eip=0x00263e; 	T(MOV(al, *(raddr(ds,si))));	// 5679 mov     al, [si] ;~ 01A2:263E
cs=0x192;eip=0x002640; 	X(MOV(*(raddr(ds,bx)), al));	// 5680 mov     [bx], al ;~ 01A2:2640
cs=0x192;eip=0x002642; 	T(XOR(al, 1));	// 5681 xor     al, 1 ;~ 01A2:2642
cs=0x192;eip=0x002644; 	X(MOV(*(raddr(ds,si)), al));	// 5682 mov     [si], al ;~ 01A2:2644
cs=0x192;eip=0x002646; 	T(SUB(bx, 0x6C0));	// 5683 sub     bx, 6C0h ;~ 01A2:2646
cs=0x192;eip=0x00264a; 	X(MOV(*(raddr(ds,bx)), 1));	// 5684 mov     byte ptr [bx], 1 ;~ 01A2:264A
loc_1264d:
	// 4997 
cs=0x192;eip=0x00264d; 	T(ADD(si, 7));	// 5688 add     si, 7 ;~ 01A2:264D
cs=0x192;eip=0x002650; 	X(DEC(byte_16faa));	// 5689 dec     byte_16FAA ;~ 01A2:2650
cs=0x192;eip=0x002654; 	R(JZ(locret_12659));	// 5690 jz      short locret_12659 ;~ 01A2:2654
cs=0x192;eip=0x002656; 	R(JMP(loc_125a6));	// 5691 jmp     loc_125A6 ;~ 01A2:2656
locret_12659:
	// 4998 
cs=0x192;eip=0x002659; 	R(RETN(0));	// 5695 retn ;~ 01A2:2659
sub_1265a:
	// 5702 
cs=0x192;eip=0x00265a; 	T(CMP(*(raddr(ds,si+1)), 0));	// 5703 cmp     byte ptr [si+1], 0 ;~ 01A2:265A
ret_1a2_265e:
	// 4999 
cs=0x192;eip=0x00265e; 	R(JZ(loc_1266a));	// 5704 jz      short loc_1266A ;~ 01A2:265E
cs=0x192;eip=0x002660; 	X(DEC(*(raddr(ds,si+1))));	// 5705 dec     byte ptr [si+1] ;~ 01A2:2660
cs=0x192;eip=0x002663; 	T(MOV(dx, 0x0FFE0));	// 5706 mov     dx, 0FFE0h ;~ 01A2:2663
loc_12666:
	// 5000 
cs=0x192;eip=0x002666; 	X(ADD(*(dw*)(raddr(ds,si+3)), dx));	// 5710 add     [si+3], dx ;~ 01A2:2666
cs=0x192;eip=0x002669; 	R(RETN(0));	// 5711 retn ;~ 01A2:2669
loc_1266a:
	// 5001 
cs=0x192;eip=0x00266a; 	X(MOV(*(raddr(ds,si)), 0));	// 5716 mov     byte ptr [si], 0 ;~ 01A2:266A
cs=0x192;eip=0x00266d; 	X(POP(dx));	// 5717 pop     dx ;~ 01A2:266D
cs=0x192;eip=0x00266e; 	X(POP(dx));	// 5718 pop     dx ;~ 01A2:266E
cs=0x192;eip=0x00266f; 	R(JMP(loc_1264d));	// 5719 jmp     short loc_1264D ;~ 01A2:266F
sub_12671:
	// 5726 
cs=0x192;eip=0x002671; 	T(CMP(*(raddr(ds,si+1)), 0x11));	// 5727 cmp     byte ptr [si+1], 11h ;~ 01A2:2671
ret_1a2_2675:
	// 5002 
cs=0x192;eip=0x002675; 	R(JZ(loc_1266a));	// 5728 jz      short loc_1266A ;~ 01A2:2675
cs=0x192;eip=0x002677; 	X(INC(*(raddr(ds,si+1))));	// 5729 inc     byte ptr [si+1] ;~ 01A2:2677
cs=0x192;eip=0x00267a; 	T(MOV(dx, 0x20));	// 5730 mov     dx, 20h ; ' ' ;~ 01A2:267A
cs=0x192;eip=0x00267d; 	R(JMP(loc_12666));	// 5731 jmp     short loc_12666 ;~ 01A2:267D
sub_1267f:
	// 5738 
cs=0x192;eip=0x00267f; 	T(CMP(*(raddr(ds,si+2)), 0));	// 5739 cmp     byte ptr [si+2], 0 ;~ 01A2:267F
ret_1a2_2683:
	// 5003 
cs=0x192;eip=0x002683; 	R(JZ(loc_1266a));	// 5740 jz      short loc_1266A ;~ 01A2:2683
cs=0x192;eip=0x002685; 	X(DEC(*(raddr(ds,si+2))));	// 5741 dec     byte ptr [si+2] ;~ 01A2:2685
cs=0x192;eip=0x002688; 	T(MOV(dx, 0x0FFFF));	// 5742 mov     dx, 0FFFFh ;~ 01A2:2688
cs=0x192;eip=0x00268b; 	R(JMP(loc_12666));	// 5743 jmp     short loc_12666 ;~ 01A2:268B
sub_1268d:
	// 5750 
cs=0x192;eip=0x00268d; 	T(CMP(*(raddr(ds,si+2)), 0x1F));	// 5751 cmp     byte ptr [si+2], 1Fh ;~ 01A2:268D
ret_1a2_2691:
	// 5004 
cs=0x192;eip=0x002691; 	R(JZ(loc_1266a));	// 5752 jz      short loc_1266A ;~ 01A2:2691
cs=0x192;eip=0x002693; 	X(INC(*(raddr(ds,si+2))));	// 5753 inc     byte ptr [si+2] ;~ 01A2:2693
cs=0x192;eip=0x002696; 	T(MOV(dx, 1));	// 5754 mov     dx, 1 ;~ 01A2:2696
cs=0x192;eip=0x002699; 	R(JMP(loc_12666));	// 5755 jmp     short loc_12666 ;~ 01A2:2699

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_125a6: 	goto loc_125a6;
        case m2c::kloc_125ae: 	goto loc_125ae;
        case m2c::kloc_125be: 	goto loc_125be;
        case m2c::kloc_125c6: 	goto loc_125c6;
        case m2c::kloc_125ce: 	goto loc_125ce;
        case m2c::kloc_125d6: 	goto loc_125d6;
        case m2c::kloc_125de: 	goto loc_125de;
        case m2c::kloc_125ea: 	goto loc_125ea;
        case m2c::kloc_125f1: 	goto loc_125f1;
        case m2c::kloc_12603: 	goto loc_12603;
        case m2c::kloc_12608: 	goto loc_12608;
        case m2c::kloc_12613: 	goto loc_12613;
        case m2c::kloc_1261d: 	goto loc_1261d;
        case m2c::kloc_12636: 	goto loc_12636;
        case m2c::kloc_1264d: 	goto loc_1264d;
        case m2c::kloc_12666: 	goto loc_12666;
        case m2c::kloc_1266a: 	goto loc_1266a;
        case m2c::klocret_12659: 	goto locret_12659;
        case m2c::kret_1a2_25a3: 	goto ret_1a2_25a3;
        case m2c::kret_1a2_265e: 	goto ret_1a2_265e;
        case m2c::kret_1a2_2675: 	goto ret_1a2_2675;
        case m2c::kret_1a2_2683: 	goto ret_1a2_2683;
        case m2c::kret_1a2_2691: 	goto ret_1a2_2691;
        case m2c::ksub_1259e: 	goto sub_1259e;
        case m2c::ksub_1265a: 	goto sub_1265a;
        case m2c::ksub_12671: 	goto sub_12671;
        case m2c::ksub_1267f: 	goto sub_1267f;
        case m2c::ksub_1268d: 	goto sub_1268d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_1269b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1269b:
    _begin:
cs=0x192;eip=0x00269b; 	T(CMP(byte_13d3b, 0));	// 5764 cmp     byte_13D3B, 0 ;~ 01A2:269B
ret_1a2_26a0:
	// 5005 
cs=0x192;eip=0x0026a0; 	R(JZ(loc_126a7));	// 5765 jz      short loc_126A7 ;~ 01A2:26A0
cs=0x192;eip=0x0026a2; 	X(DEC(byte_13d3b));	// 5766 dec     byte_13D3B ;~ 01A2:26A2
locret_126a6:
	// 5006 
cs=0x192;eip=0x0026a6; 	R(RETN(0));	// 5770 retn ;~ 01A2:26A6
loc_126a7:
	// 5007 
cs=0x192;eip=0x0026a7; 	T(CMP(*(db*)(((db*)&word_11bd6)), 0x1F));	// 5774 cmp     byte ptr word_11BD6, 1Fh ;~ 01A2:26A7
cs=0x192;eip=0x0026ac; 	R(JZ(locret_126a6));	// 5775 jz      short locret_126A6 ;~ 01A2:26AC
cs=0x192;eip=0x0026ae; 	T(MOV(bx, word_11bbc));	// 5776 mov     bx, word_11BBC ;~ 01A2:26AE
cs=0x192;eip=0x0026b2; 	T(MOV(al, *(raddr(ds,bx))));	// 5777 mov     al, [bx] ;~ 01A2:26B2
cs=0x192;eip=0x0026b4; 	T(CMP(al, 0x1D));	// 5778 cmp     al, 1Dh ;~ 01A2:26B4
cs=0x192;eip=0x0026b6; 	R(JZ(loc_126c8));	// 5779 jz      short loc_126C8 ;~ 01A2:26B6
cs=0x192;eip=0x0026b8; 	T(CMP(al, 0x23));	// 5780 cmp     al, 23h ; '#' ;~ 01A2:26B8
cs=0x192;eip=0x0026ba; 	R(JZ(loc_126c8));	// 5781 jz      short loc_126C8 ;~ 01A2:26BA
cs=0x192;eip=0x0026bc; 	T(CMP(al, 0x22));	// 5782 cmp     al, 22h ; '"' ;~ 01A2:26BC
cs=0x192;eip=0x0026be; 	R(JZ(loc_126c8));	// 5783 jz      short loc_126C8 ;~ 01A2:26BE
cs=0x192;eip=0x0026c0; 	T(CMP(al, 0x26));	// 5784 cmp     al, 26h ; '&' ;~ 01A2:26C0
cs=0x192;eip=0x0026c2; 	R(JZ(loc_126c8));	// 5785 jz      short loc_126C8 ;~ 01A2:26C2
cs=0x192;eip=0x0026c4; 	T(CMP(al, 0x2A));	// 5786 cmp     al, 2Ah ; '*' ;~ 01A2:26C4
cs=0x192;eip=0x0026c6; 	R(JNZ(locret_126a6));	// 5787 jnz     short locret_126A6 ;~ 01A2:26C6
loc_126c8:
	// 5008 
cs=0x192;eip=0x0026c8; 	R(CALL(sub_1107c,0));	// 5791 call    sub_1107C ;~ 01A2:26C8
cs=0x192;eip=0x0026cb; 	T(AND(al, 0x3F));	// 5792 and     al, 3Fh ;~ 01A2:26CB
cs=0x192;eip=0x0026cd; 	T(INC(al));	// 5793 inc     al ;~ 01A2:26CD
cs=0x192;eip=0x0026cf; 	T(CMP(al, 5));	// 5794 cmp     al, 5 ;~ 01A2:26CF
cs=0x192;eip=0x0026d1; 	R(JNC(loc_1271b));	// 5795 jnb     short loc_1271B ;~ 01A2:26D1
cs=0x192;eip=0x0026d3; 	T(MOV(bx, 0x6FB2));	// 5796 mov     bx, 6FB2h ;~ 01A2:26D3
loc_126d6:
	// 5009 
cs=0x192;eip=0x0026d6; 	T(ADD(bx, 7));	// 5799 add     bx, 7 ;~ 01A2:26D6
cs=0x192;eip=0x0026d9; 	T(DEC(al));	// 5800 dec     al ;~ 01A2:26D9
cs=0x192;eip=0x0026db; 	R(JNZ(loc_126d6));	// 5801 jnz     short loc_126D6 ;~ 01A2:26DB
cs=0x192;eip=0x0026dd; 	T(CMP(*(raddr(ds,bx)), 0));	// 5802 cmp     byte ptr [bx], 0 ;~ 01A2:26DD
cs=0x192;eip=0x0026e0; 	R(JNZ(loc_1271b));	// 5803 jnz     short loc_1271B ;~ 01A2:26E0
cs=0x192;eip=0x0026e2; 	X(MOV(*(raddr(ds,bx)), 0x0E0));	// 5804 mov     byte ptr [bx], 0E0h ; 'à' ;~ 01A2:26E2
cs=0x192;eip=0x0026e5; 	T(INC(bx));	// 5805 inc     bx ;~ 01A2:26E5
cs=0x192;eip=0x0026e6; 	X(MOV(*(raddr(ds,bx)), 9));	// 5806 mov     byte ptr [bx], 9 ;~ 01A2:26E6
cs=0x192;eip=0x0026e9; 	T(INC(bx));	// 5807 inc     bx ;~ 01A2:26E9
cs=0x192;eip=0x0026ea; 	X(MOV(*(raddr(ds,bx)), 0));	// 5808 mov     byte ptr [bx], 0 ;~ 01A2:26EA
cs=0x192;eip=0x0026ed; 	T(INC(bx));	// 5809 inc     bx ;~ 01A2:26ED
cs=0x192;eip=0x0026ee; 	X(MOV(*(dw*)(raddr(ds,bx)), 0x120));	// 5810 mov     word ptr [bx], 120h ;~ 01A2:26EE
cs=0x192;eip=0x0026f2; 	T(INC(bx));	// 5811 inc     bx ;~ 01A2:26F2
cs=0x192;eip=0x0026f3; 	T(INC(bx));	// 5812 inc     bx ;~ 01A2:26F3
cs=0x192;eip=0x0026f4; 	R(CALL(sub_1107c,0));	// 5813 call    sub_1107C ;~ 01A2:26F4
cs=0x192;eip=0x0026f7; 	T(AND(al, 0x0E));	// 5814 and     al, 0Eh ;~ 01A2:26F7
cs=0x192;eip=0x0026f9; 	T(CBW);	// 5815 cbw ;~ 01A2:26F9
cs=0x192;eip=0x0026fa; 	T(ADD(ax, 0x6FD5));	// 5816 add     ax, 6FD5h ;~ 01A2:26FA
cs=0x192;eip=0x0026fd; 	T(MOV(si, ax));	// 5817 mov     si, ax ;~ 01A2:26FD
cs=0x192;eip=0x0026ff; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 5818 mov     ax, [si] ;~ 01A2:26FF
cs=0x192;eip=0x002701; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 5819 mov     [bx], ax ;~ 01A2:2701
cs=0x192;eip=0x002703; 	T(INC(bx));	// 5820 inc     bx ;~ 01A2:2703
cs=0x192;eip=0x002704; 	R(CALL(sub_1107c,0));	// 5821 call    sub_1107C ;~ 01A2:2704
cs=0x192;eip=0x002707; 	T(AND(al, 1));	// 5822 and     al, 1 ;~ 01A2:2707
cs=0x192;eip=0x002709; 	R(JZ(loc_1271b));	// 5823 jz      short loc_1271B ;~ 01A2:2709
cs=0x192;eip=0x00270b; 	X(XOR(*(raddr(ds,bx)), 0x0C));	// 5824 xor     byte ptr [bx], 0Ch ;~ 01A2:270B
cs=0x192;eip=0x00270e; 	T(DEC(bx));	// 5825 dec     bx ;~ 01A2:270E
cs=0x192;eip=0x00270f; 	X(XOR(*(raddr(ds,bx)), 0x0C));	// 5826 xor     byte ptr [bx], 0Ch ;~ 01A2:270F
cs=0x192;eip=0x002712; 	T(DEC(bx));	// 5827 dec     bx ;~ 01A2:2712
cs=0x192;eip=0x002713; 	T(DEC(bx));	// 5828 dec     bx ;~ 01A2:2713
cs=0x192;eip=0x002714; 	X(ADD(*(dw*)(raddr(ds,bx)), 0x1F));	// 5829 add     word ptr [bx], 1Fh ;~ 01A2:2714
cs=0x192;eip=0x002717; 	T(DEC(bx));	// 5830 dec     bx ;~ 01A2:2717
cs=0x192;eip=0x002718; 	X(MOV(*(raddr(ds,bx)), 0x1F));	// 5831 mov     byte ptr [bx], 1Fh ;~ 01A2:2718
loc_1271b:
	// 5010 
cs=0x192;eip=0x00271b; 	T(MOV(cx, 4));	// 5835 mov     cx, 4 ;~ 01A2:271B
cs=0x192;eip=0x00271e; 	T(MOV(si, 0x6FB9));	// 5836 mov     si, 6FB9h ;~ 01A2:271E
loc_12721:
	// 5011 
cs=0x192;eip=0x002721; 	T(MOV(al, *(raddr(ds,si+1))));	// 5839 mov     al, [si+1] ;~ 01A2:2721
cs=0x192;eip=0x002724; 	T(CMP(al, 8));	// 5840 cmp     al, 8 ;~ 01A2:2724
cs=0x192;eip=0x002726; 	R(JZ(loc_1272c));	// 5841 jz      short loc_1272C ;~ 01A2:2726
cs=0x192;eip=0x002728; 	T(CMP(al, 0x0A));	// 5842 cmp     al, 0Ah ;~ 01A2:2728
cs=0x192;eip=0x00272a; 	R(JNZ(loc_12730));	// 5843 jnz     short loc_12730 ;~ 01A2:272A
loc_1272c:
	// 5012 
cs=0x192;eip=0x00272c; 	X(XOR(*(raddr(ds,si+5)), 3));	// 5846 xor     byte ptr [si+5], 3 ;~ 01A2:272C
loc_12730:
	// 5013 
cs=0x192;eip=0x002730; 	T(ADD(si, 7));	// 5849 add     si, 7 ;~ 01A2:2730
cs=0x192;eip=0x002733; 	R(LOOP(loc_12721));	// 5850 loop    loc_12721 ;~ 01A2:2733
cs=0x192;eip=0x002735; 	R(RETN(0));	// 5851 retn ;~ 01A2:2735

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_126a7: 	goto loc_126a7;
        case m2c::kloc_126c8: 	goto loc_126c8;
        case m2c::kloc_126d6: 	goto loc_126d6;
        case m2c::kloc_1271b: 	goto loc_1271b;
        case m2c::kloc_12721: 	goto loc_12721;
        case m2c::kloc_1272c: 	goto loc_1272c;
        case m2c::kloc_12730: 	goto loc_12730;
        case m2c::klocret_126a6: 	goto locret_126a6;
        case m2c::kret_1a2_26a0: 	goto ret_1a2_26a0;
        case m2c::ksub_1269b: 	goto sub_1269b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_12772(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12772:
    _begin:
cs=0x192;eip=0x002772; 	X(XOR(byte_11bb2, 2));	// 5905 xor     byte_11BB2, 2 ;~ 01A2:2772
ret_1a2_2777:
	// 5021 
cs=0x192;eip=0x002777; 	T(MOV(al, byte_178b6));	// 5906 mov     al, byte_178B6 ;~ 01A2:2777
cs=0x192;eip=0x00277a; 	T(AND(al, 0x0FC));	// 5907 and     al, 0FCh ;~ 01A2:277A
cs=0x192;eip=0x00277c; 	R(OUT(0x61, al));	// 5908 out     61h, al         ; PC/XT PPI port B bits: ;~ 01A2:277C
cs=0x192;eip=0x00277e; 	R(RETN(0));	// 5916 retn ;~ 01A2:277E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1a2_2777: 	goto ret_1a2_2777;
        case m2c::ksub_12772: 	goto sub_12772;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_12970(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12970:
    _begin:
cs=0x192;eip=0x002970; 	T(MOV(di, 0x743A));	// 6221 mov     di, 743Ah ;~ 01A2:2970
ret_1a2_2973:
	// 5053 
cs=0x192;eip=0x002973; 	T(MOV(cx, 0x0B));	// 6222 mov     cx, 0Bh ;~ 01A2:2973
cs=0x192;eip=0x002976; 	T(MOV(al, 0x20));	// 6223 mov     al, 20h ; ' ' ;~ 01A2:2976
cs=0x192;eip=0x002978; 	T(CLD);	// 6224 cld ;~ 01A2:2978
	// 6225 rep stosb ;~ 01A2:2979
cs=0x192;eip=0x002979; 	X(	REP STOSB);	// 6225 rep stosb ;~ 01A2:2979
cs=0x192;eip=0x00297b; 	X(MOV(byte_17448, 4));	// 6226 mov     byte_17448, 4 ;~ 01A2:297B
cs=0x192;eip=0x002980; 	X(MOV(byte_1744a, 0x21));	// 6227 mov     byte_1744A, 21h ; '!' ;~ 01A2:2980
cs=0x192;eip=0x002985; 	T(MOV(si, 0x7445));	// 6228 mov     si, 7445h ;~ 01A2:2985
cs=0x192;eip=0x002988; 	R(CALL(sub_104b7,0));	// 6229 call    sub_104B7 ;~ 01A2:2988
cs=0x192;eip=0x00298b; 	T(MOV(di, 0x743A));	// 6230 mov     di, 743Ah ;~ 01A2:298B
loc_1298e:
	// 5054 
cs=0x192;eip=0x00298e; 	X(PUSH(di));	// 6234 push    di ;~ 01A2:298E
loc_1298f:
	// 5055 
cs=0x192;eip=0x00298f; 	R(CALL(sub_12a10,0));	// 6238 call    sub_12A10 ;~ 01A2:298F
cs=0x192;eip=0x002992; 	X(POP(di));	// 6239 pop     di ;~ 01A2:2992
cs=0x192;eip=0x002993; 	T(CMP(al, 0x0D));	// 6240 cmp     al, 0Dh ;~ 01A2:2993
cs=0x192;eip=0x002995; 	R(JZ(loc_129f9));	// 6241 jz      short loc_129F9 ;~ 01A2:2995
cs=0x192;eip=0x002997; 	T(CMP(al, 0x7F));	// 6242 cmp     al, 7Fh ;~ 01A2:2997
cs=0x192;eip=0x002999; 	R(JZ(loc_129d1));	// 6243 jz      short loc_129D1 ;~ 01A2:2999
cs=0x192;eip=0x00299b; 	T(CMP(al, 8));	// 6244 cmp     al, 8 ;~ 01A2:299B
cs=0x192;eip=0x00299d; 	R(JZ(loc_129d1));	// 6245 jz      short loc_129D1 ;~ 01A2:299D
cs=0x192;eip=0x00299f; 	T(CMP(al, 0x20));	// 6246 cmp     al, 20h ; ' ' ;~ 01A2:299F
cs=0x192;eip=0x0029a1; 	R(JZ(loc_129ae));	// 6247 jz      short loc_129AE ;~ 01A2:29A1
cs=0x192;eip=0x0029a3; 	R(CALL(sub_12a05,0));	// 6248 call    sub_12A05 ;~ 01A2:29A3
cs=0x192;eip=0x0029a6; 	T(CMP(al, 0x41));	// 6249 cmp     al, 41h ; 'A' ;~ 01A2:29A6
cs=0x192;eip=0x0029a8; 	R(JC(loc_1298e));	// 6250 jb      short loc_1298E ;~ 01A2:29A8
cs=0x192;eip=0x0029aa; 	T(CMP(al, 0x5B));	// 6251 cmp     al, 5Bh ; '[' ;~ 01A2:29AA
cs=0x192;eip=0x0029ac; 	R(JNC(loc_1298e));	// 6252 jnb     short loc_1298E ;~ 01A2:29AC
loc_129ae:
	// 5056 
cs=0x192;eip=0x0029ae; 	T(CMP(byte_17448, 0x0F));	// 6255 cmp     byte_17448, 0Fh ;~ 01A2:29AE
cs=0x192;eip=0x0029b3; 	R(JZ(loc_1298e));	// 6256 jz      short loc_1298E ;~ 01A2:29B3
cs=0x192;eip=0x0029b5; 	X(STOSB);	// 6257 stosb ;~ 01A2:29B5
cs=0x192;eip=0x0029b6; 	X(PUSH(di));	// 6258 push    di ;~ 01A2:29B6
cs=0x192;eip=0x0029b7; 	X(MOV(byte_1744a, al));	// 6259 mov     byte_1744A, al ;~ 01A2:29B7
cs=0x192;eip=0x0029ba; 	T(MOV(si, 0x7445));	// 6260 mov     si, 7445h ;~ 01A2:29BA
cs=0x192;eip=0x0029bd; 	R(CALL(sub_104b7,0));	// 6261 call    sub_104B7 ;~ 01A2:29BD
cs=0x192;eip=0x0029c0; 	X(INC(byte_17448));	// 6262 inc     byte_17448 ;~ 01A2:29C0
cs=0x192;eip=0x0029c4; 	X(MOV(byte_1744a, 0x21));	// 6263 mov     byte_1744A, 21h ; '!' ;~ 01A2:29C4
cs=0x192;eip=0x0029c9; 	T(MOV(si, 0x7445));	// 6264 mov     si, 7445h ;~ 01A2:29C9
cs=0x192;eip=0x0029cc; 	R(CALL(sub_104b7,0));	// 6265 call    sub_104B7 ;~ 01A2:29CC
cs=0x192;eip=0x0029cf; 	R(JMP(loc_1298f));	// 6266 jmp     short loc_1298F ;~ 01A2:29CF
loc_129d1:
	// 5057 
cs=0x192;eip=0x0029d1; 	T(CMP(byte_17448, 4));	// 6271 cmp     byte_17448, 4 ;~ 01A2:29D1
cs=0x192;eip=0x0029d6; 	R(JZ(loc_1298e));	// 6272 jz      short loc_1298E ;~ 01A2:29D6
cs=0x192;eip=0x0029d8; 	T(DEC(di));	// 6273 dec     di ;~ 01A2:29D8
cs=0x192;eip=0x0029d9; 	X(MOV(*(raddr(ds,di)), 0x20));	// 6274 mov     byte ptr [di], 20h ; ' ' ;~ 01A2:29D9
cs=0x192;eip=0x0029dc; 	X(PUSH(di));	// 6275 push    di ;~ 01A2:29DC
cs=0x192;eip=0x0029dd; 	X(MOV(byte_1744a, 0x20));	// 6276 mov     byte_1744A, 20h ; ' ' ;~ 01A2:29DD
cs=0x192;eip=0x0029e2; 	T(MOV(si, 0x7445));	// 6277 mov     si, 7445h ;~ 01A2:29E2
cs=0x192;eip=0x0029e5; 	R(CALL(sub_104b7,0));	// 6278 call    sub_104B7 ;~ 01A2:29E5
cs=0x192;eip=0x0029e8; 	X(DEC(byte_17448));	// 6279 dec     byte_17448 ;~ 01A2:29E8
cs=0x192;eip=0x0029ec; 	X(MOV(byte_1744a, 0x21));	// 6280 mov     byte_1744A, 21h ; '!' ;~ 01A2:29EC
cs=0x192;eip=0x0029f1; 	T(MOV(si, 0x7445));	// 6281 mov     si, 7445h ;~ 01A2:29F1
cs=0x192;eip=0x0029f4; 	R(CALL(sub_104b7,0));	// 6282 call    sub_104B7 ;~ 01A2:29F4
cs=0x192;eip=0x0029f7; 	R(JMP(loc_1298f));	// 6283 jmp     short loc_1298F ;~ 01A2:29F7
loc_129f9:
	// 5058 
cs=0x192;eip=0x0029f9; 	X(MOV(byte_1744a, 0x20));	// 6287 mov     byte_1744A, 20h ; ' ' ;~ 01A2:29F9
cs=0x192;eip=0x0029fe; 	T(MOV(si, 0x7445));	// 6288 mov     si, 7445h ;~ 01A2:29FE
cs=0x192;eip=0x002a01; 	R(CALL(sub_104b7,0));	// 6289 call    sub_104B7 ;~ 01A2:2A01
cs=0x192;eip=0x002a04; 	R(RETN(0));	// 6290 retn ;~ 01A2:2A04

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_1298e: 	goto loc_1298e;
        case m2c::kloc_1298f: 	goto loc_1298f;
        case m2c::kloc_129ae: 	goto loc_129ae;
        case m2c::kloc_129d1: 	goto loc_129d1;
        case m2c::kloc_129f9: 	goto loc_129f9;
        case m2c::kret_1a2_2973: 	goto ret_1a2_2973;
        case m2c::ksub_12970: 	goto sub_12970;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_12a05(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12a05:
    _begin:
cs=0x192;eip=0x002a05; 	T(CMP(al, 0x61));	// 6299 cmp     al, 61h ; 'a' ;~ 01A2:2A05
ret_1a2_2a07:
	// 5059 
cs=0x192;eip=0x002a07; 	R(JC(locret_12a0f));	// 6300 jb      short locret_12A0F ;~ 01A2:2A07
cs=0x192;eip=0x002a09; 	T(CMP(al, 0x7B));	// 6301 cmp     al, 7Bh ; '{' ;~ 01A2:2A09
cs=0x192;eip=0x002a0b; 	R(JNC(locret_12a0f));	// 6302 jnb     short locret_12A0F ;~ 01A2:2A0B
cs=0x192;eip=0x002a0d; 	T(ADD(al, 0x0E0));	// 6303 add     al, 0E0h ; 'à' ;~ 01A2:2A0D
locret_12a0f:
	// 5060 
cs=0x192;eip=0x002a0f; 	R(RETN(0));	// 6307 retn ;~ 01A2:2A0F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::klocret_12a0f: 	goto locret_12a0f;
        case m2c::kret_1a2_2a07: 	goto ret_1a2_2a07;
        case m2c::ksub_12a05: 	goto sub_12a05;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool _group11(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group11:
    _begin:
sub_12a10:
	// 6314 
cs=0x192;eip=0x002a10; 	R(CALL(sub_12a18,0));	// 6316 call    sub_12A18 ;~ 01A2:2A10
sub_12a13:
	// 6323 
cs=0x192;eip=0x002a13; 	T(MOV(ah, 0));	// 6324 mov     ah, 0 ;~ 01A2:2A13
ret_1a2_2a15:
	// 5061 
cs=0x192;eip=0x002a15; 	R(_INT(0x16));	// 6325 int     16h             ; KEYBOARD - READ CHAR FROM BUFFER, WAIT IF EMPTY ;~ 01A2:2A15
cs=0x192;eip=0x002a17; 	R(RETN(0));	// 6327 retn ;~ 01A2:2A17

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1a2_2a15: 	goto ret_1a2_2a15;
        case m2c::ksub_12a10: 	goto sub_12a10;
        case m2c::ksub_12a13: 	goto sub_12a13;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_12a18(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12a18:
    _begin:
cs=0x192;eip=0x002a18; 	T(MOV(ah, 1));	// 6336 mov     ah, 1 ;~ 01A2:2A18
ret_1a2_2a1a:
	// 5062 
cs=0x192;eip=0x002a1a; 	R(_INT(0x16));	// 6337 int     16h             ; KEYBOARD - CHECK BUFFER, DO NOT CLEAR ;~ 01A2:2A1A
cs=0x192;eip=0x002a1c; 	R(JZ(locret_12a24));	// 6341 jz      short locret_12A24 ;~ 01A2:2A1C
cs=0x192;eip=0x002a1e; 	T(MOV(ah, 0));	// 6342 mov     ah, 0 ;~ 01A2:2A1E
cs=0x192;eip=0x002a20; 	R(_INT(0x16));	// 6343 int     16h             ; KEYBOARD - READ CHAR FROM BUFFER, WAIT IF EMPTY ;~ 01A2:2A20
cs=0x192;eip=0x002a22; 	R(JMP(sub_12a18));	// 6345 jmp     short sub_12A18 ;~ 01A2:2A22
locret_12a24:
	// 5063 
cs=0x192;eip=0x002a24; 	R(RETN(0));	// 6349 retn ;~ 01A2:2A24

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::klocret_12a24: 	goto locret_12a24;
        case m2c::kret_1a2_2a1a: 	goto ret_1a2_2a1a;
        case m2c::ksub_12a18: 	goto sub_12a18;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_12a25(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12a25:
    _begin:
cs=0x192;eip=0x002a25; 	T(CLD);	// 6358 cld ;~ 01A2:2A25
ret_1a2_2a26:
	// 5064 
cs=0x192;eip=0x002a26; 	T(MOV(si, 0x6FE6));	// 6359 mov     si, 6FE6h ;~ 01A2:2A26
cs=0x192;eip=0x002a29; 	T(MOV(di, 4));	// 6360 mov     di, 4 ;~ 01A2:2A29
cs=0x192;eip=0x002a2c; 	T(MOV(ch, 0));	// 6361 mov     ch, 0 ;~ 01A2:2A2C
loc_12a2e:
	// 5065 
cs=0x192;eip=0x002a2e; 	T(LODSB);	// 6364 lodsb ;~ 01A2:2A2E
cs=0x192;eip=0x002a2f; 	T(CMP(al, 0x7B));	// 6365 cmp     al, 7Bh ; '{' ;~ 01A2:2A2F
cs=0x192;eip=0x002a31; 	R(JZ(loc_12a44));	// 6366 jz      short loc_12A44 ;~ 01A2:2A31
cs=0x192;eip=0x002a33; 	T(CMP(al, 0x0EA));	// 6367 cmp     al, 0EAh ; 'ê' ;~ 01A2:2A33
cs=0x192;eip=0x002a35; 	R(JZ(loc_12a3e));	// 6368 jz      short loc_12A3E ;~ 01A2:2A35
cs=0x192;eip=0x002a37; 	T(MOV(cx, 1));	// 6369 mov     cx, 1 ;~ 01A2:2A37
loc_12a3a:
	// 5066 
	// 6372 rep stosb ;~ 01A2:2A3A
cs=0x192;eip=0x002a3a; 	X(	REP STOSB);	// 6372 rep stosb ;~ 01A2:2A3A
cs=0x192;eip=0x002a3c; 	R(JMP(loc_12a2e));	// 6373 jmp     short loc_12A2E ;~ 01A2:2A3C
loc_12a3e:
	// 5067 
cs=0x192;eip=0x002a3e; 	T(LODSB);	// 6377 lodsb ;~ 01A2:2A3E
cs=0x192;eip=0x002a3f; 	T(MOV(cl, al));	// 6378 mov     cl, al ;~ 01A2:2A3F
cs=0x192;eip=0x002a41; 	T(LODSB);	// 6379 lodsb ;~ 01A2:2A41
cs=0x192;eip=0x002a42; 	R(JMP(loc_12a3a));	// 6380 jmp     short loc_12A3A ;~ 01A2:2A42
loc_12a44:
	// 5068 
cs=0x192;eip=0x002a44; 	T(MOV(di, 8));	// 6384 mov     di, 8 ;~ 01A2:2A44
cs=0x192;eip=0x002a47; 	T(MOV(si, 0x7432));	// 6385 mov     si, 7432h ;~ 01A2:2A47
cs=0x192;eip=0x002a4a; 	T(MOV(bx, 0x844));	// 6386 mov     bx, 844h ;~ 01A2:2A4A
cs=0x192;eip=0x002a4d; 	T(MOV(cx, 0x15));	// 6387 mov     cx, 15h ;~ 01A2:2A4D
cs=0x192;eip=0x002a50; 	T(MOV(dx, 0));	// 6388 mov     dx, 0 ;~ 01A2:2A50
cs=0x192;eip=0x002a53; 	R(CALL(sub_12a63,0));	// 6389 call    sub_12A63 ;~ 01A2:2A53
cs=0x192;eip=0x002a56; 	T(MOV(si, 4));	// 6390 mov     si, 4 ;~ 01A2:2A56
cs=0x192;eip=0x002a59; 	T(MOV(dx, 8));	// 6391 mov     dx, 8 ;~ 01A2:2A59
cs=0x192;eip=0x002a5c; 	T(MOV(cx, 0x0B));	// 6392 mov     cx, 0Bh ;~ 01A2:2A5C
cs=0x192;eip=0x002a5f; 	R(CALL(sub_12a63,0));	// 6393 call    sub_12A63 ;~ 01A2:2A5F
cs=0x192;eip=0x002a62; 	R(RETN(0));	// 6394 retn ;~ 01A2:2A62

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_12a2e: 	goto loc_12a2e;
        case m2c::kloc_12a3a: 	goto loc_12a3a;
        case m2c::kloc_12a3e: 	goto loc_12a3e;
        case m2c::kloc_12a44: 	goto loc_12a44;
        case m2c::kret_1a2_2a26: 	goto ret_1a2_2a26;
        case m2c::ksub_12a25: 	goto sub_12a25;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_12a63(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12a63:
    _begin:
cs=0x192;eip=0x002a63; 	X(PUSH(cx));	// 6403 push    cx ;~ 01A2:2A63
ret_1a2_2a64:
	// 5069 
cs=0x192;eip=0x002a64; 	X(PUSH(di));	// 6404 push    di ;~ 01A2:2A64
cs=0x192;eip=0x002a65; 	X(PUSH(bx));	// 6405 push    bx ;~ 01A2:2A65
cs=0x192;eip=0x002a66; 	T(MOV(cx, 0x18));	// 6406 mov     cx, 18h ;~ 01A2:2A66
loc_12a69:
	// 5070 
cs=0x192;eip=0x002a69; 	X(PUSH(cx));	// 6409 push    cx ;~ 01A2:2A69
cs=0x192;eip=0x002a6a; 	X(PUSH(di));	// 6410 push    di ;~ 01A2:2A6A
cs=0x192;eip=0x002a6b; 	X(PUSH(dx));	// 6411 push    dx ;~ 01A2:2A6B
cs=0x192;eip=0x002a6c; 	X(PUSH(si));	// 6412 push    si ;~ 01A2:2A6C
cs=0x192;eip=0x002a6d; 	T(MOV(al, *(raddr(ds,bx))));	// 6413 mov     al, [bx] ;~ 01A2:2A6D
cs=0x192;eip=0x002a6f; 	T(ADD(bx, 0x20));	// 6414 add     bx, 20h ; ' ' ;~ 01A2:2A6F
cs=0x192;eip=0x002a72; 	X(PUSH(bx));	// 6415 push    bx ;~ 01A2:2A72
cs=0x192;eip=0x002a73; 	R(CALL(sub_1054a,0));	// 6416 call    sub_1054A ;~ 01A2:2A73
cs=0x192;eip=0x002a76; 	X(POP(bx));	// 6417 pop     bx ;~ 01A2:2A76
cs=0x192;eip=0x002a77; 	X(POP(si));	// 6418 pop     si ;~ 01A2:2A77
cs=0x192;eip=0x002a78; 	X(POP(dx));	// 6419 pop     dx ;~ 01A2:2A78
cs=0x192;eip=0x002a79; 	T(ADD(si, dx));	// 6420 add     si, dx ;~ 01A2:2A79
cs=0x192;eip=0x002a7b; 	X(POP(di));	// 6421 pop     di ;~ 01A2:2A7B
cs=0x192;eip=0x002a7c; 	T(ADD(di, 0x140));	// 6422 add     di, 140h ;~ 01A2:2A7C
cs=0x192;eip=0x002a80; 	X(POP(cx));	// 6423 pop     cx ;~ 01A2:2A80
cs=0x192;eip=0x002a81; 	R(LOOP(loc_12a69));	// 6424 loop    loc_12A69 ;~ 01A2:2A81
cs=0x192;eip=0x002a83; 	X(POP(bx));	// 6425 pop     bx ;~ 01A2:2A83
cs=0x192;eip=0x002a84; 	T(INC(bx));	// 6426 inc     bx ;~ 01A2:2A84
cs=0x192;eip=0x002a85; 	X(POP(di));	// 6427 pop     di ;~ 01A2:2A85
cs=0x192;eip=0x002a86; 	T(INC(di));	// 6428 inc     di ;~ 01A2:2A86
cs=0x192;eip=0x002a87; 	T(INC(di));	// 6429 inc     di ;~ 01A2:2A87
cs=0x192;eip=0x002a88; 	X(POP(cx));	// 6430 pop     cx ;~ 01A2:2A88
cs=0x192;eip=0x002a89; 	R(LOOP(sub_12a63));	// 6431 loop    sub_12A63 ;~ 01A2:2A89
cs=0x192;eip=0x002a8b; 	R(RETN(0));	// 6432 retn ;~ 01A2:2A8B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_12a69: 	goto loc_12a69;
        case m2c::kret_1a2_2a64: 	goto ret_1a2_2a64;
        case m2c::ksub_12a63: 	goto sub_12a63;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool _group12(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group12:
    _begin:
sub_12a8c:
	// 6439 
cs=0x192;eip=0x002a8c; 	T(MOV(al, 0));	// 6440 mov     al, 0 ;~ 01A2:2A8C
ret_1a2_2a8e:
	// 5071 
cs=0x192;eip=0x002a8e; 	T(MOV(cx, 0x40));	// 6441 mov     cx, 40h ; '@' ;~ 01A2:2A8E
cs=0x192;eip=0x002a91; 	R(JMP(loc_12a98));	// 6442 jmp     short loc_12A98 ;~ 01A2:2A91
sub_12a93:
	// 6449 
cs=0x192;eip=0x002a93; 	T(MOV(al, 0x55));	// 6451 mov     al, 55h ; 'U' ;~ 01A2:2A93
ret_1a2_2a95:
	// 5072 
cs=0x192;eip=0x002a95; 	T(MOV(cx, 0x2A));	// 6452 mov     cx, 2Ah ; '*' ;~ 01A2:2A95
loc_12a98:
	// 5073 
cs=0x192;eip=0x002a98; 	X(PUSH(es));	// 6455 push    es ;~ 01A2:2A98
cs=0x192;eip=0x002a99; 	T(MOV(dx, 0x0B800));	// 6456 mov     dx, 0B800h ;~ 01A2:2A99
cs=0x192;eip=0x002a9c; 	T(MOV(es, dx));	// 6457 mov     es, dx ;~ 01A2:2A9C
cs=0x192;eip=0x002a9e; 	T(MOV(di, 8));	// 6459 mov     di, 8 ;~ 01A2:2A9E
cs=0x192;eip=0x002aa1; 	R(CALL(sub_12aac,0));	// 6460 call    sub_12AAC ;~ 01A2:2AA1
cs=0x192;eip=0x002aa4; 	T(MOV(di, 0x2008));	// 6461 mov     di, 2008h ;~ 01A2:2AA4
cs=0x192;eip=0x002aa7; 	R(CALL(sub_12aac,0));	// 6462 call    sub_12AAC ;~ 01A2:2AA7
cs=0x192;eip=0x002aaa; 	X(POP(es));	// 6463 pop     es ;~ 01A2:2AAA
cs=0x192;eip=0x002aab; 	R(RETN(0));	// 6465 retn ;~ 01A2:2AAB

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_12a98: 	goto loc_12a98;
        case m2c::kret_1a2_2a8e: 	goto ret_1a2_2a8e;
        case m2c::kret_1a2_2a95: 	goto ret_1a2_2a95;
        case m2c::ksub_12a8c: 	goto sub_12a8c;
        case m2c::ksub_12a93: 	goto sub_12a93;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_12aac(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12aac:
    _begin:
cs=0x192;eip=0x002aac; 	T(MOV(ah, 0x60));	// 6474 mov     ah, 60h ; '`' ;~ 01A2:2AAC
loc_12aae:
	// 5074 
cs=0x192;eip=0x002aae; 	X(PUSH(di));	// 6477 push    di ;~ 01A2:2AAE
cs=0x192;eip=0x002aaf; 	X(PUSH(cx));	// 6478 push    cx ;~ 01A2:2AAF
	// 6479 rep stosb ;~ 01A2:2AB0
cs=0x192;eip=0x002ab0; 	X(	REP STOSB);	// 6479 rep stosb ;~ 01A2:2AB0
cs=0x192;eip=0x002ab2; 	X(POP(cx));	// 6480 pop     cx ;~ 01A2:2AB2
cs=0x192;eip=0x002ab3; 	X(POP(di));	// 6481 pop     di ;~ 01A2:2AB3
cs=0x192;eip=0x002ab4; 	T(ADD(di, 0x50));	// 6482 add     di, 50h ; 'P' ;~ 01A2:2AB4
cs=0x192;eip=0x002ab7; 	T(DEC(ah));	// 6483 dec     ah ;~ 01A2:2AB7
cs=0x192;eip=0x002ab9; 	R(JNZ(loc_12aae));	// 6484 jnz     short loc_12AAE ;~ 01A2:2AB9
cs=0x192;eip=0x002abb; 	R(RETN(0));	// 6485 retn ;~ 01A2:2ABB

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_12aae: 	goto loc_12aae;
        case m2c::ksub_12aac: 	goto sub_12aac;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_12dd0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12dd0:
    _begin:
cs=0x192;eip=0x002dd0; 	X(PUSH(es));	// 7016 push    es ;~ 01A2:2DD0
ret_1a2_2dd1:
	// 5135 
cs=0x192;eip=0x002dd1; 	T(XOR(ax, ax));	// 7017 xor     ax, ax ;~ 01A2:2DD1
cs=0x192;eip=0x002dd3; 	T(MOV(es, ax));	// 7018 mov     es, ax ;~ 01A2:2DD3
cs=0x192;eip=0x002dd5; 	T(MOV(bx, 0));	// 7019 mov     bx, 0 ;~ 01A2:2DD5
cs=0x192;eip=0x002dd8; 	T(MOV(dl, byte_178b6));	// 7020 mov     dl, byte_178B6 ;~ 01A2:2DD8
loc_12ddc:
	// 5136 
cs=0x192;eip=0x002ddc; 	T(MOV(al, *(raddr(es,bx))));	// 7023 mov     al, es:[bx] ;~ 01A2:2DDC
cs=0x192;eip=0x002ddf; 	T(MOV(cl, ch));	// 7024 mov     cl, ch ;~ 01A2:2DDF
cs=0x192;eip=0x002de1; 	T(DEC(cl));	// 7025 dec     cl ;~ 01A2:2DE1
cs=0x192;eip=0x002de3; 	R(JZ(loc_12deb));	// 7026 jz      short loc_12DEB ;~ 01A2:2DE3
loc_12de5:
	// 5137 
cs=0x192;eip=0x002de5; 	T(SHR(al, 1));	// 7029 shr     al, 1 ;~ 01A2:2DE5
cs=0x192;eip=0x002de7; 	T(DEC(cl));	// 7030 dec     cl ;~ 01A2:2DE7
cs=0x192;eip=0x002de9; 	R(JNZ(loc_12de5));	// 7031 jnz     short loc_12DE5 ;~ 01A2:2DE9
loc_12deb:
	// 5138 
cs=0x192;eip=0x002deb; 	T(INC(al));	// 7034 inc     al ;~ 01A2:2DEB
loc_12ded:
	// 5139 
cs=0x192;eip=0x002ded; 	T(DEC(al));	// 7037 dec     al ;~ 01A2:2DED
	// 7038 nop ;~ 01A2:2DEF
	// 7039 nop ;~ 01A2:2DF0
cs=0x192;eip=0x002df1; 	R(JNZ(loc_12ded));	// 7040 jnz     short loc_12DED ;~ 01A2:2DF1
cs=0x192;eip=0x002df3; 	T(XOR(dl, byte_11bb2));	// 7041 xor     dl, byte_11BB2 ;~ 01A2:2DF3
cs=0x192;eip=0x002df7; 	T(MOV(al, dl));	// 7042 mov     al, dl ;~ 01A2:2DF7
cs=0x192;eip=0x002df9; 	R(OUT(0x61, al));	// 7043 out     61h, al         ; PC/XT PPI port B bits: ;~ 01A2:2DF9
cs=0x192;eip=0x002dfb; 	T(INC(bx));	// 7051 inc     bx ;~ 01A2:2DFB
cs=0x192;eip=0x002dfc; 	T(DEC(dh));	// 7052 dec     dh ;~ 01A2:2DFC
cs=0x192;eip=0x002dfe; 	R(JNZ(loc_12ddc));	// 7053 jnz     short loc_12DDC ;~ 01A2:2DFE
cs=0x192;eip=0x002e00; 	X(POP(es));	// 7054 pop     es ;~ 01A2:2E00
cs=0x192;eip=0x002e01; 	R(RETN(0));	// 7056 retn ;~ 01A2:2E01

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_12ddc: 	goto loc_12ddc;
        case m2c::kloc_12de5: 	goto loc_12de5;
        case m2c::kloc_12deb: 	goto loc_12deb;
        case m2c::kloc_12ded: 	goto loc_12ded;
        case m2c::kret_1a2_2dd1: 	goto ret_1a2_2dd1;
        case m2c::ksub_12dd0: 	goto sub_12dd0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool _group13(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group13:
    _begin:
sub_12e02:
	// 7063 
cs=0x192;eip=0x002e02; 	T(MOV(bx, word_178a8));	// 7064 mov     bx, word_178A8 ;~ 01A2:2E02
sub_12e06:
	// 7071 
cs=0x192;eip=0x002e06; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 7072 mov     ax, [bx] ;~ 01A2:2E06
ret_1a2_2e08:
	// 5140 
cs=0x192;eip=0x002e08; 	T(INC(bx));	// 7073 inc     bx ;~ 01A2:2E08
cs=0x192;eip=0x002e09; 	T(INC(bx));	// 7074 inc     bx ;~ 01A2:2E09
cs=0x192;eip=0x002e0a; 	X(MOV(word_178a6, ax));	// 7075 mov     word_178A6, ax ;~ 01A2:2E0A
cs=0x192;eip=0x002e0d; 	T(MOV(al, *(raddr(ds,bx))));	// 7076 mov     al, [bx] ;~ 01A2:2E0D
cs=0x192;eip=0x002e0f; 	T(INC(bx));	// 7077 inc     bx ;~ 01A2:2E0F
cs=0x192;eip=0x002e10; 	X(MOV(word_178a8, bx));	// 7078 mov     word_178A8, bx ;~ 01A2:2E10
cs=0x192;eip=0x002e14; 	X(MOV(byte_178bb, al));	// 7079 mov     byte_178BB, al ;~ 01A2:2E14
cs=0x192;eip=0x002e17; 	R(RETN(0));	// 7080 retn ;~ 01A2:2E17

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1a2_2e08: 	goto ret_1a2_2e08;
        case m2c::ksub_12e02: 	goto sub_12e02;
        case m2c::ksub_12e06: 	goto sub_12e06;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_12e18(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12e18:
    _begin:
cs=0x192;eip=0x002e18; 	T(MOV(dh, al));	// 7089 mov     dh, al ;~ 01A2:2E18
ret_1a2_2e1a:
	// 5141 
cs=0x192;eip=0x002e1a; 	T(SHR(al, 1));	// 7090 shr     al, 1 ;~ 01A2:2E1A
cs=0x192;eip=0x002e1c; 	T(SHR(al, 1));	// 7091 shr     al, 1 ;~ 01A2:2E1C
cs=0x192;eip=0x002e1e; 	T(SHR(al, 1));	// 7092 shr     al, 1 ;~ 01A2:2E1E
cs=0x192;eip=0x002e20; 	T(AND(al, 0x1F));	// 7093 and     al, 1Fh ;~ 01A2:2E20
cs=0x192;eip=0x002e22; 	T(ADD(al, byte_178ad));	// 7094 add     al, byte_178AD ;~ 01A2:2E22
cs=0x192;eip=0x002e26; 	T(MOV(cl, 0x0FF));	// 7095 mov     cl, 0FFh ;~ 01A2:2E26
loc_12e28:
	// 5142 
cs=0x192;eip=0x002e28; 	T(INC(cl));	// 7098 inc     cl ;~ 01A2:2E28
cs=0x192;eip=0x002e2a; 	T(SUB(al, 0x0C));	// 7099 sub     al, 0Ch ;~ 01A2:2E2A
cs=0x192;eip=0x002e2c; 	R(JNC(loc_12e28));	// 7100 jnb     short loc_12E28 ;~ 01A2:2E2C
cs=0x192;eip=0x002e2e; 	T(ADD(al, 0x0C));	// 7101 add     al, 0Ch ;~ 01A2:2E2E
cs=0x192;eip=0x002e30; 	T(ADD(al, al));	// 7102 add     al, al ;~ 01A2:2E30
cs=0x192;eip=0x002e32; 	T(MOV(bx, 0x78BD));	// 7103 mov     bx, 78BDh ;~ 01A2:2E32
cs=0x192;eip=0x002e35; 	T(CBW);	// 7104 cbw ;~ 01A2:2E35
cs=0x192;eip=0x002e36; 	T(ADD(bx, ax));	// 7105 add     bx, ax ;~ 01A2:2E36
cs=0x192;eip=0x002e38; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 7106 mov     ax, [bx] ;~ 01A2:2E38
cs=0x192;eip=0x002e3a; 	T(SHR(ax, cl));	// 7107 shr     ax, cl ;~ 01A2:2E3A
cs=0x192;eip=0x002e3c; 	T(SUB(ax, 0x1B));	// 7108 sub     ax, 1Bh ;~ 01A2:2E3C
cs=0x192;eip=0x002e3f; 	T(MOV(cx, ax));	// 7109 mov     cx, ax ;~ 01A2:2E3F
cs=0x192;eip=0x002e41; 	T(MOV(al, dh));	// 7110 mov     al, dh ;~ 01A2:2E41
cs=0x192;eip=0x002e43; 	T(AND(al, 7));	// 7111 and     al, 7 ;~ 01A2:2E43
cs=0x192;eip=0x002e45; 	T(MOV(bx, 0x79D7));	// 7112 mov     bx, 79D7h ;~ 01A2:2E45
cs=0x192;eip=0x002e48; 	T(XLAT);	// 7113 xlat ;~ 01A2:2E48
cs=0x192;eip=0x002e49; 	T(AND(dh, 0x0F8));	// 7114 and     dh, 0F8h ;~ 01A2:2E49
cs=0x192;eip=0x002e4c; 	R(RETN(0));	// 7115 retn ;~ 01A2:2E4C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_12e28: 	goto loc_12e28;
        case m2c::kret_1a2_2e1a: 	goto ret_1a2_2e1a;
        case m2c::ksub_12e18: 	goto sub_12e18;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}



 bool sub_12e4d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12e4d:
    _begin:
cs=0x192;eip=0x002e4d; 	T(MOV(bx, word_17896));	// 7124 mov     bx, word_17896 ;~ 01A2:2E4D
ret_1a2_2e51:
	// 5143 
cs=0x192;eip=0x002e51; 	T(MOV(al, *(raddr(ds,bx))));	// 7125 mov     al, [bx] ;~ 01A2:2E51
cs=0x192;eip=0x002e53; 	X(MOV(byte_178b5, al));	// 7126 mov     byte_178B5, al ;~ 01A2:2E53
cs=0x192;eip=0x002e56; 	T(INC(bx));	// 7127 inc     bx ;~ 01A2:2E56
cs=0x192;eip=0x002e57; 	T(MOV(al, *(raddr(ds,bx))));	// 7128 mov     al, [bx] ;~ 01A2:2E57
cs=0x192;eip=0x002e59; 	T(CBW);	// 7129 cbw ;~ 01A2:2E59
cs=0x192;eip=0x002e5a; 	X(MOV(word_1789c, ax));	// 7130 mov     word_1789C, ax ;~ 01A2:2E5A
cs=0x192;eip=0x002e5d; 	T(INC(bx));	// 7131 inc     bx ;~ 01A2:2E5D
cs=0x192;eip=0x002e5e; 	T(MOV(al, *(raddr(ds,bx))));	// 7132 mov     al, [bx] ;~ 01A2:2E5E
cs=0x192;eip=0x002e60; 	R(RETN(0));	// 7133 retn ;~ 01A2:2E60

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1a2_2e51: 	goto ret_1a2_2e51;
        case m2c::ksub_12e4d: 	goto sub_12e4d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}


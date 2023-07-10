/* THIS IS GENERATED FILE */

        
#include "f.exe.h"

                

 bool _nullsub_2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _nullsub_2:
    _begin:
cs=0x1a2;eip=0x000019; 	J(RETN(0));	// 48                  retn ;~ 01A2:0019

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k_nullsub_2: 	goto _nullsub_2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
seg000_1b_proc:
	// 55 
loc_1001b:
	// 4369 
cs=0x1a2;eip=0x00001b; 	J(JMP(loc_10027));	// 56                  jmp     short loc_10027 ;~ 01A2:001B
ret_1a2_1d:
	// 4370 
cs=0x1a2;eip=0x00001d; 	J(RETN(0));	// 58                  retn ;~ 01A2:001D
ret_1a2_1e:
	// 4371 
cs=0x1a2;eip=0x00001e; 	J(RETF(0));	// 60                  retf ;~ 01A2:001E
ret_1a2_1f:
	// 4372 
cs=0x1a2;eip=0x00001f; 	J(IRET);	// 62                  iret ;~ 01A2:001F
ret_1a2_20:
	// 4373 
cs=0x1a2;eip=0x000020; 	X(PUSH(ax));	// 64                  push    ax ;~ 01A2:0020
cs=0x1a2;eip=0x000021; 	T(INC(bx));	// 65                  inc     bx ;~ 01A2:0021
cs=0x1a2;eip=0x000022; 	T(INC(bx));	// 66                  inc     bx ;~ 01A2:0022
cs=0x1a2;eip=0x000023; 	T(DEC(sp));	// 67                  dec     sp ;~ 01A2:0023
cs=0x1a2;eip=0x000024; 	T(DEC(di));	// 68                  dec     di ;~ 01A2:0024
cs=0x1a2;eip=0x000025; 	T(INC(cx));	// 69                  inc     cx ;~ 01A2:0025
cs=0x1a2;eip=0x000026; 	T(DEC(bx));	// 70                  dec     bx ;~ 01A2:0026
loc_10027:
	// 4374 
cs=0x1a2;eip=0x000027; 	X(byte_1001a = 0x12;);	// 73                  mov     ds:byte_1001A, 12h ;~ 01A2:0027
cs=0x1a2;eip=0x00002c; 	J(CALL(_nullsub_2,0));	// 74                  call    _nullsub_2 ;~ 01A2:002C
cs=0x1a2;eip=0x00002f; 	J(CALL(_nullsub_2,0));	// 75                  call    _nullsub_2 ;~ 01A2:002F
cs=0x1a2;eip=0x000032; 	J(CALL(_nullsub_2,0));	// 76                  call    _nullsub_2 ;~ 01A2:0032
cs=0x1a2;eip=0x000035; 	J(CALL(_nullsub_2,0));	// 77                  call    _nullsub_2 ;~ 01A2:0035
cs=0x1a2;eip=0x000038; 	X(PUSH(ds));	// 78                  push    ds ;~ 01A2:0038
cs=0x1a2;eip=0x000039; 	T(XOR(ax, ax));	// 79                  xor     ax, ax ;~ 01A2:0039
cs=0x1a2;eip=0x00003b; 	T(ds = ax;);	// 80                  mov     ds, ax ;~ 01A2:003B
cs=0x1a2;eip=0x00003d; 	X(MOV(*(dw*)(raddr(ds,0x417)), ax));	// 82                  mov     ds:417h, ax ;~ 01A2:003D
cs=0x1a2;eip=0x000040; 	X(POP(ds));	// 83                  pop     ds ;~ 01A2:0040
cs=0x1a2;eip=0x000041; 	T(XOR(ax, ax));	// 85                  xor     ax, ax ;~ 01A2:0041
cs=0x1a2;eip=0x000043; 	J(CALL(_nullsub_2,0));	// 86                  call    _nullsub_2 ;~ 01A2:0043
cs=0x1a2;eip=0x000046; 	J(CALL(_nullsub_2,0));	// 87                  call    _nullsub_2 ;~ 01A2:0046
cs=0x1a2;eip=0x000049; 	J(CALL(_nullsub_2,0));	// 88                  call    _nullsub_2 ;~ 01A2:0049
cs=0x1a2;eip=0x00004c; 	J(CALL(_nullsub_2,0));	// 89                  call    _nullsub_2 ;~ 01A2:004C
cs=0x1a2;eip=0x00004f; 	J(CALL(_nullsub_2,0));	// 90                  call    _nullsub_2 ;~ 01A2:004F
cs=0x1a2;eip=0x000052; 	T(OR(ax, ax));	// 91                  or      ax, ax ;~ 01A2:0052
cs=0x1a2;eip=0x000054; 	J(JZ(loc_10059));	// 92                  jz      short loc_10059 ;~ 01A2:0054
cs=0x1a2;eip=0x000056; 	J(JMP(loc_1026e));	// 93                  jmp     loc_1026E ;~ 01A2:0056
loc_10059:
	// 4375 
cs=0x1a2;eip=0x000059; 	T(bx = 0x70D;);	// 97                  mov     bx, 70Dh ;~ 01A2:0059
cs=0x1a2;eip=0x00005c; 	T(SHR(bx, 1));	// 98                  shr     bx, 1 ;~ 01A2:005C
cs=0x1a2;eip=0x00005e; 	T(SHR(bx, 1));	// 99                  shr     bx, 1 ;~ 01A2:005E
cs=0x1a2;eip=0x000060; 	T(SHR(bx, 1));	// 100                  shr     bx, 1 ;~ 01A2:0060
cs=0x1a2;eip=0x000062; 	T(SHR(bx, 1));	// 101                  shr     bx, 1 ;~ 01A2:0062
cs=0x1a2;eip=0x000064; 	T(INC(bx));	// 102                  inc     bx ;~ 01A2:0064
cs=0x1a2;eip=0x000065; 	T(ah = 0x4A;);	// 103                  mov     ah, 4Ah ;~ 01A2:0065
cs=0x1a2;eip=0x000067; 	S(_INT(0x21));	// 104                  int     21h             ; DOS - 2+ - ADJUST MEMORY BLOCK SIZE (SETBLOCK) ;~ 01A2:0067
cs=0x1a2;eip=0x000069; 	X(PUSH(es));	// 107                  push    es ;~ 01A2:0069
cs=0x1a2;eip=0x00006a; 	T(ah = 0x48;);	// 108                  mov     ah, 48h ; 'H' ;~ 01A2:006A
cs=0x1a2;eip=0x00006c; 	T(bx = 0x140;);	// 109                  mov     bx, 140h ;~ 01A2:006C
cs=0x1a2;eip=0x00006f; 	S(_INT(0x21));	// 110                  int     21h             ; DOS - 2+ - ALLOCATE MEMORY ;~ 01A2:006F
cs=0x1a2;eip=0x000071; 	T(bx = ax;);	// 112                  mov     bx, ax ;~ 01A2:0071
cs=0x1a2;eip=0x000073; 	T(DEC(ax));	// 113                  dec     ax ;~ 01A2:0073
cs=0x1a2;eip=0x000074; 	T(es = ax;);	// 114                  mov     es, ax ;~ 01A2:0074
cs=0x1a2;eip=0x000076; 	T(MOV(ax, *(dw*)(raddr(ds,m2c::kloc_2673b))));	// 116                  mov     ax, word ptr loc_2673B ;~ 01A2:0076
cs=0x1a2;eip=0x000079; 	X(MOV(*(dw*)(raddr(es,0x0C)), ax));	// 117                  mov     es:0Ch, ax ;~ 01A2:0079
cs=0x1a2;eip=0x00007d; 	T(MOV(ax, *(dw*)(raddr(ds,m2c::kloc_2673b+2))));	// 118                  mov     ax, word ptr loc_2673B+2 ;~ 01A2:007D
loc_10080:
	// 4376 
cs=0x1a2;eip=0x000080; 	X(MOV(*(dw*)(raddr(es,0x0E)), ax));	// 121                  mov     es:0Eh, ax ;~ 01A2:0080
cs=0x1a2;eip=0x000084; 	T(ax = 0;);	// 122                  mov     ax, 0 ;~ 01A2:0084
cs=0x1a2;eip=0x000087; 	T(es = ax;);	// 123                  mov     es, ax ;~ 01A2:0087
cs=0x1a2;eip=0x000089; 	X(MOV(*(dw*)(raddr(es,0x4F0)), bx));	// 125                  mov     es:4F0h, bx ;~ 01A2:0089
cs=0x1a2;eip=0x00008e; 	X(word_267b0 = bx;);	// 126                  mov     word_267B0, bx ;~ 01A2:008E
cs=0x1a2;eip=0x000092; 	T(ax = 1;);	// 127                  mov     ax, 1 ;~ 01A2:0092
cs=0x1a2;eip=0x000095; 	X(MOV(*(dw*)(raddr(es,0x4F2)), ax));	// 128                  mov     es:4F2h, ax ;~ 01A2:0095
cs=0x1a2;eip=0x000099; 	T(ax = 0;);	// 129                  mov     ax, 0 ;~ 01A2:0099
cs=0x1a2;eip=0x00009c; 	X(MOV(*(dw*)(raddr(es,0x4F4)), ax));	// 130                  mov     es:4F4h, ax ;~ 01A2:009C
cs=0x1a2;eip=0x0000a0; 	X(POP(es));	// 131                  pop     es ;~ 01A2:00A0
cs=0x1a2;eip=0x0000a1; 	T(al = 0x0D;);	// 133                  mov     al, 0Dh ;~ 01A2:00A1
cs=0x1a2;eip=0x0000a3; 	X(byte_267c3 = al;);	// 134                  mov     byte_267C3, al ;~ 01A2:00A3
cs=0x1a2;eip=0x0000a6; 	T(MOV(cl, *(raddr(cs,m2c::kloc_10080))));	// 135                  mov     cl, byte ptr cs:loc_10080 ;~ 01A2:00A6
cs=0x1a2;eip=0x0000ab; 	T(SUB(ch, ch));	// 136                  sub     ch, ch ;~ 01A2:00AB
cs=0x1a2;eip=0x0000ad; 	J(JCXZ(loc_100b9));	// 137                  jcxz    short loc_100B9 ;~ 01A2:00AD
cs=0x1a2;eip=0x0000af; 	T(INC(cx));	// 138                  inc     cx ;~ 01A2:00AF
cs=0x1a2;eip=0x0000b0; 	T(INC(cx));	// 139                  inc     cx ;~ 01A2:00B0
cs=0x1a2;eip=0x0000b1; 	T(si = 0x80;);	// 140                  mov     si, 80h ;~ 01A2:00B1
cs=0x1a2;eip=0x0000b4; 	T(di = 0x592;);	// 141                  mov     di, 592h ;~ 01A2:00B4
	// 142                  rep movsb ;~ 01A2:00B7
cs=0x1a2;eip=0x0000b7; 	X(	REP MOVSB);	// 142                  rep movsb ;~ 01A2:00B7
loc_100b9:
	// 4377 
cs=0x1a2;eip=0x0000b9; 	T(ax = cs;);	// 145                  mov     ax, cs ;~ 01A2:00B9
cs=0x1a2;eip=0x0000bb; 	X(word_267b8 = ax;);	// 146                  mov     word_267B8, ax ;~ 01A2:00BB
cs=0x1a2;eip=0x0000be; 	X(word_267bc = ax;);	// 147                  mov     word_267BC, ax ;~ 01A2:00BE
cs=0x1a2;eip=0x0000c1; 	X(word_267c0 = ax;);	// 148                  mov     word_267C0, ax ;~ 01A2:00C1
cs=0x1a2;eip=0x0000c4; 	T(dx = 0x52E;);	// 149                  mov     dx, 52Eh ;~ 01A2:00C4
cs=0x1a2;eip=0x0000c7; 	T(bx = 0x584;);	// 150                  mov     bx, 584h ;~ 01A2:00C7
cs=0x1a2;eip=0x0000ca; 	X(word_267b2 = sp;);	// 151                  mov     word_267B2, sp ;~ 01A2:00CA
cs=0x1a2;eip=0x0000ce; 	T(ax = 0x4B00;);	// 152                  mov     ax, 4B00h ;~ 01A2:00CE
cs=0x1a2;eip=0x0000d1; 	S(_INT(0x21));	// 153                  int     21h             ; DOS - 2+ - LOAD OR EXECUTE (EXEC) ;~ 01A2:00D1
cs=0x1a2;eip=0x0000d3; 	T(cx = cs;);	// 157                  mov     cx, cs ;~ 01A2:00D3
cs=0x1a2;eip=0x0000d5; 	S(ss = cx;);	// 158                  mov     ss, cx ;~ 01A2:00D5
cs=0x1a2;eip=0x0000d7; 	T(sp = word_10582;);	// 160                  mov     sp, cs:word_10582 ;~ 01A2:00D7
cs=0x1a2;eip=0x0000dc; 	T(ds = cx;);	// 161                  mov     ds, cx ;~ 01A2:00DC
cs=0x1a2;eip=0x0000de; 	T(es = cx;);	// 163                  mov     es, cx ;~ 01A2:00DE
cs=0x1a2;eip=0x0000e0; 	T(ah = 0x4D;);	// 165                  mov     ah, 4Dh ;~ 01A2:00E0
cs=0x1a2;eip=0x0000e2; 	S(_INT(0x21));	// 166                  int     21h             ; DOS - 2+ - GET EXIT CODE OF SUBPROGRAM (WAIT) ;~ 01A2:00E2
cs=0x1a2;eip=0x0000e4; 	T(CMP(al, 0x24));	// 167                  cmp     al, 24h ; '$' ;~ 01A2:00E4
cs=0x1a2;eip=0x0000e6; 	J(JZ(loc_100eb));	// 168                  jz      short loc_100EB ;~ 01A2:00E6
cs=0x1a2;eip=0x0000e8; 	J(JMP(loc_1026e));	// 169                  jmp     loc_1026E ;~ 01A2:00E8
loc_100eb:
	// 4378 
cs=0x1a2;eip=0x0000eb; 	T(es = word_10580;);	// 173                  mov     es, word_10580 ;~ 01A2:00EB
cs=0x1a2;eip=0x0000ef; 	T(di = 0x0D;);	// 175                  mov     di, 0Dh ;~ 01A2:00EF
loc_100f2:
	// 4379 
cs=0x1a2;eip=0x0000f2; 	T(CMP(*(raddr(es,di)), 0));	// 178                  cmp     byte ptr es:[di], 0 ;~ 01A2:00F2
cs=0x1a2;eip=0x0000f6; 	J(JZ(loc_10102));	// 179                  jz      short loc_10102 ;~ 01A2:00F6
cs=0x1a2;eip=0x0000f8; 	T(MOV(al, *(raddr(es,di))));	// 180                  mov     al, es:[di] ;~ 01A2:00F8
cs=0x1a2;eip=0x0000fb; 	X(MOV(*(raddr(ds,di+0x561)), al));	// 181                  mov     [di+561h], al ;~ 01A2:00FB
cs=0x1a2;eip=0x0000ff; 	T(INC(di));	// 182                  inc     di ;~ 01A2:00FF
cs=0x1a2;eip=0x000100; 	J(JMP(loc_100f2));	// 183                  jmp     short loc_100F2 ;~ 01A2:0100
loc_10102:
	// 4380 
cs=0x1a2;eip=0x000102; 	T(dx = 0x56E;);	// 187                  mov     dx, 56Eh ;~ 01A2:0102
cs=0x1a2;eip=0x000105; 	J(CALL(sub_10273,0));	// 188                  call    sub_10273 ;~ 01A2:0105
cs=0x1a2;eip=0x000108; 	T(es = word_10580;);	// 189                  mov     es, word_10580 ;~ 01A2:0108
cs=0x1a2;eip=0x00010c; 	X(MOV(*(dw*)(raddr(es,0x1C)), ax));	// 190                  mov     es:1Ch, ax ;~ 01A2:010C
cs=0x1a2;eip=0x000110; 	T(dx = 0x565;);	// 191                  mov     dx, 565h ;~ 01A2:0110
cs=0x1a2;eip=0x000113; 	J(CALL(sub_10273,0));	// 192                  call    sub_10273 ;~ 01A2:0113
cs=0x1a2;eip=0x000116; 	T(es = word_10580;);	// 193                  mov     es, word_10580 ;~ 01A2:0116
cs=0x1a2;eip=0x00011a; 	X(MOV(*(dw*)(raddr(es,0x1E)), ax));	// 194                  mov     es:1Eh, ax ;~ 01A2:011A
cs=0x1a2;eip=0x00011e; 	T(es = word_10580;);	// 195                  mov     es, word_10580 ;~ 01A2:011E
cs=0x1a2;eip=0x000122; 	T(di = 0;);	// 196                  mov     di, 0 ;~ 01A2:0122
loc_10125:
	// 4381 
cs=0x1a2;eip=0x000125; 	T(CMP(*(raddr(es,di)), 0));	// 199                  cmp     byte ptr es:[di], 0 ;~ 01A2:0125
cs=0x1a2;eip=0x000129; 	J(JZ(loc_10135));	// 200                  jz      short loc_10135 ;~ 01A2:0129
cs=0x1a2;eip=0x00012b; 	T(MOV(al, *(raddr(es,di))));	// 201                  mov     al, es:[di] ;~ 01A2:012B
cs=0x1a2;eip=0x00012e; 	X(MOV(*(raddr(ds,di+0x56E)), al));	// 202                  mov     [di+56Eh], al ;~ 01A2:012E
cs=0x1a2;eip=0x000132; 	T(INC(di));	// 203                  inc     di ;~ 01A2:0132
cs=0x1a2;eip=0x000133; 	J(JMP(loc_10125));	// 204                  jmp     short loc_10125 ;~ 01A2:0133
loc_10135:
	// 4382 
cs=0x1a2;eip=0x000135; 	T(dx = 0x56E;);	// 208                  mov     dx, 56Eh ;~ 01A2:0135
cs=0x1a2;eip=0x000138; 	J(CALL(sub_10273,0));	// 209                  call    sub_10273 ;~ 01A2:0138
cs=0x1a2;eip=0x00013b; 	T(es = word_10580;);	// 210                  mov     es, word_10580 ;~ 01A2:013B
cs=0x1a2;eip=0x00013f; 	X(MOV(*(dw*)(raddr(es,0x1A)), ax));	// 211                  mov     es:1Ah, ax ;~ 01A2:013F
cs=0x1a2;eip=0x000143; 	T(ax = 2;);	// 212                  mov     ax, 2 ;~ 01A2:0143
cs=0x1a2;eip=0x000146; 	X(PUSH(ax));	// 213                  push    ax ;~ 01A2:0146
cs=0x1a2;eip=0x000147; 	J(CALL(__dispatch_call,dword_1057c));	// 214                  call    dword_1057C ;~ 01A2:0147
cs=0x1a2;eip=0x00014b; 	T(ADD(sp, 2));	// 215                  add     sp, 2 ;~ 01A2:014B
cs=0x1a2;eip=0x00014e; 	X(MOV(*(dw*)(raddr(es,0x20)), ax));	// 216                  mov     es:20h, ax ;~ 01A2:014E
loc_10152:
	// 4383 
cs=0x1a2;eip=0x000152; 	T(ax = cs;);	// 219                  mov     ax, cs ;~ 01A2:0152
cs=0x1a2;eip=0x000154; 	T(es = ax;);	// 220                  mov     es, ax ;~ 01A2:0154
cs=0x1a2;eip=0x000156; 	T(dx = 0x55E;);	// 222                  mov     dx, 55Eh ;~ 01A2:0156
cs=0x1a2;eip=0x000159; 	T(ax = 0x63E;);	// 223                  mov     ax, 63Eh ;~ 01A2:0159
cs=0x1a2;eip=0x00015c; 	X(word_10586 = ax;);	// 224                  mov     word_10586, ax ;~ 01A2:015C
cs=0x1a2;eip=0x00015f; 	T(bx = 0x584;);	// 225                  mov     bx, 584h ;~ 01A2:015F
cs=0x1a2;eip=0x000162; 	X(word_10582 = sp;);	// 226                  mov     word_10582, sp ;~ 01A2:0162
cs=0x1a2;eip=0x000166; 	T(ax = 0x4B00;);	// 227                  mov     ax, 4B00h ;~ 01A2:0166
cs=0x1a2;eip=0x000169; 	S(_INT(0x21));	// 228                  int     21h             ; DOS - 2+ - LOAD OR EXECUTE (EXEC) ;~ 01A2:0169
cs=0x1a2;eip=0x00016b; 	T(cx = cs;);	// 232                  mov     cx, cs ;~ 01A2:016B
cs=0x1a2;eip=0x00016d; 	S(ss = cx;);	// 233                  mov     ss, cx ;~ 01A2:016D
cs=0x1a2;eip=0x00016f; 	T(sp = word_10582;);	// 234                  mov     sp, cs:word_10582 ;~ 01A2:016F
cs=0x1a2;eip=0x000174; 	T(ds = cx;);	// 235                  mov     ds, cx ;~ 01A2:0174
cs=0x1a2;eip=0x000176; 	T(es = cx;);	// 236                  mov     es, cx ;~ 01A2:0176
cs=0x1a2;eip=0x000178; 	T(ah = 0x4D;);	// 237                  mov     ah, 4Dh ;~ 01A2:0178
cs=0x1a2;eip=0x00017a; 	S(_INT(0x21));	// 238                  int     21h             ; DOS - 2+ - GET EXIT CODE OF SUBPROGRAM (WAIT) ;~ 01A2:017A
cs=0x1a2;eip=0x00017c; 	T(CMP(al, 0));	// 239                  cmp     al, 0 ;~ 01A2:017C
cs=0x1a2;eip=0x00017e; 	J(JNZ(loc_10183));	// 240                  jnz     short loc_10183 ;~ 01A2:017E
cs=0x1a2;eip=0x000180; 	J(JMP(loc_1026e));	// 241                  jmp     loc_1026E ;~ 01A2:0180
loc_10183:
	// 4384 
cs=0x1a2;eip=0x000183; 	T(ax = cs;);	// 245                  mov     ax, cs ;~ 01A2:0183
cs=0x1a2;eip=0x000185; 	T(es = ax;);	// 246                  mov     es, ax ;~ 01A2:0185
cs=0x1a2;eip=0x000187; 	T(dx = 0x535;);	// 247                  mov     dx, 535h ;~ 01A2:0187
cs=0x1a2;eip=0x00018a; 	T(ax = 0x592;);	// 248                  mov     ax, 592h ;~ 01A2:018A
cs=0x1a2;eip=0x00018d; 	X(word_10586 = ax;);	// 249                  mov     word_10586, ax ;~ 01A2:018D
cs=0x1a2;eip=0x000190; 	T(bx = 0x584;);	// 250                  mov     bx, 584h ;~ 01A2:0190
cs=0x1a2;eip=0x000193; 	X(word_10582 = sp;);	// 251                  mov     word_10582, sp ;~ 01A2:0193
cs=0x1a2;eip=0x000197; 	T(ax = 0x4B00;);	// 252                  mov     ax, 4B00h ;~ 01A2:0197
cs=0x1a2;eip=0x00019a; 	S(_INT(0x21));	// 253                  int     21h             ; DOS - 2+ - LOAD OR EXECUTE (EXEC) ;~ 01A2:019A
cs=0x1a2;eip=0x00019c; 	T(cx = cs;);	// 257                  mov     cx, cs ;~ 01A2:019C
cs=0x1a2;eip=0x00019e; 	S(ss = cx;);	// 258                  mov     ss, cx ;~ 01A2:019E
cs=0x1a2;eip=0x0001a0; 	T(sp = word_10582;);	// 259                  mov     sp, cs:word_10582 ;~ 01A2:01A0
cs=0x1a2;eip=0x0001a5; 	T(ds = cx;);	// 260                  mov     ds, cx ;~ 01A2:01A5
cs=0x1a2;eip=0x0001a7; 	T(es = cx;);	// 261                  mov     es, cx ;~ 01A2:01A7
cs=0x1a2;eip=0x0001a9; 	T(ah = 0x4D;);	// 262                  mov     ah, 4Dh ;~ 01A2:01A9
cs=0x1a2;eip=0x0001ab; 	S(_INT(0x21));	// 263                  int     21h             ; DOS - 2+ - GET EXIT CODE OF SUBPROGRAM (WAIT) ;~ 01A2:01AB
cs=0x1a2;eip=0x0001ad; 	T(CMP(al, 0x0C));	// 264                  cmp     al, 0Ch ;~ 01A2:01AD
cs=0x1a2;eip=0x0001af; 	J(JZ(loc_101b4));	// 265                  jz      short loc_101B4 ;~ 01A2:01AF
cs=0x1a2;eip=0x0001b1; 	J(JMP(loc_1026e));	// 266                  jmp     loc_1026E ;~ 01A2:01B1
loc_101b4:
	// 4385 
cs=0x1a2;eip=0x0001b4; 	T(ax = cs;);	// 270                  mov     ax, cs ;~ 01A2:01B4
cs=0x1a2;eip=0x0001b6; 	T(es = ax;);	// 271                  mov     es, ax ;~ 01A2:01B6
cs=0x1a2;eip=0x0001b8; 	T(dx = 0x55E;);	// 272                  mov     dx, 55Eh ;~ 01A2:01B8
cs=0x1a2;eip=0x0001bb; 	T(ax = 0x643;);	// 273                  mov     ax, 643h ;~ 01A2:01BB
cs=0x1a2;eip=0x0001be; 	X(word_10586 = ax;);	// 274                  mov     word_10586, ax ;~ 01A2:01BE
cs=0x1a2;eip=0x0001c1; 	T(bx = 0x584;);	// 275                  mov     bx, 584h ;~ 01A2:01C1
cs=0x1a2;eip=0x0001c4; 	X(word_10582 = sp;);	// 276                  mov     word_10582, sp ;~ 01A2:01C4
cs=0x1a2;eip=0x0001c8; 	T(ax = 0x4B00;);	// 277                  mov     ax, 4B00h ;~ 01A2:01C8
cs=0x1a2;eip=0x0001cb; 	S(_INT(0x21));	// 278                  int     21h             ; DOS - 2+ - LOAD OR EXECUTE (EXEC) ;~ 01A2:01CB
cs=0x1a2;eip=0x0001cd; 	T(cx = cs;);	// 282                  mov     cx, cs ;~ 01A2:01CD
cs=0x1a2;eip=0x0001cf; 	S(ss = cx;);	// 283                  mov     ss, cx ;~ 01A2:01CF
cs=0x1a2;eip=0x0001d1; 	T(sp = word_10582;);	// 284                  mov     sp, cs:word_10582 ;~ 01A2:01D1
cs=0x1a2;eip=0x0001d6; 	T(ds = cx;);	// 285                  mov     ds, cx ;~ 01A2:01D6
cs=0x1a2;eip=0x0001d8; 	T(es = cx;);	// 286                  mov     es, cx ;~ 01A2:01D8
cs=0x1a2;eip=0x0001da; 	T(ah = 0x4D;);	// 287                  mov     ah, 4Dh ;~ 01A2:01DA
cs=0x1a2;eip=0x0001dc; 	S(_INT(0x21));	// 288                  int     21h             ; DOS - 2+ - GET EXIT CODE OF SUBPROGRAM (WAIT) ;~ 01A2:01DC
cs=0x1a2;eip=0x0001de; 	T(CMP(al, 0));	// 289                  cmp     al, 0 ;~ 01A2:01DE
cs=0x1a2;eip=0x0001e0; 	J(JNZ(loc_101e5));	// 290                  jnz     short loc_101E5 ;~ 01A2:01E0
cs=0x1a2;eip=0x0001e2; 	J(JMP(loc_1026e));	// 291                  jmp     loc_1026E ;~ 01A2:01E2
loc_101e5:
	// 4386 
cs=0x1a2;eip=0x0001e5; 	T(dx = 0x54C;);	// 295                  mov     dx, 54Ch ;~ 01A2:01E5
cs=0x1a2;eip=0x0001e8; 	T(ax = 0x592;);	// 296                  mov     ax, 592h ;~ 01A2:01E8
cs=0x1a2;eip=0x0001eb; 	X(word_10586 = ax;);	// 297                  mov     word_10586, ax ;~ 01A2:01EB
cs=0x1a2;eip=0x0001ee; 	T(bx = 0x584;);	// 298                  mov     bx, 584h ;~ 01A2:01EE
cs=0x1a2;eip=0x0001f1; 	X(word_10582 = sp;);	// 299                  mov     word_10582, sp ;~ 01A2:01F1
cs=0x1a2;eip=0x0001f5; 	T(ax = 0x4B00;);	// 300                  mov     ax, 4B00h ;~ 01A2:01F5
cs=0x1a2;eip=0x0001f8; 	S(_INT(0x21));	// 301                  int     21h             ; DOS - 2+ - LOAD OR EXECUTE (EXEC) ;~ 01A2:01F8
cs=0x1a2;eip=0x0001fa; 	T(cx = cs;);	// 305                  mov     cx, cs ;~ 01A2:01FA
cs=0x1a2;eip=0x0001fc; 	S(ss = cx;);	// 306                  mov     ss, cx ;~ 01A2:01FC
cs=0x1a2;eip=0x0001fe; 	T(sp = word_10582;);	// 307                  mov     sp, cs:word_10582 ;~ 01A2:01FE
cs=0x1a2;eip=0x000203; 	T(ds = cx;);	// 308                  mov     ds, cx ;~ 01A2:0203
cs=0x1a2;eip=0x000205; 	T(es = cx;);	// 309                  mov     es, cx ;~ 01A2:0205
cs=0x1a2;eip=0x000207; 	T(ah = 0x4D;);	// 310                  mov     ah, 4Dh ;~ 01A2:0207
cs=0x1a2;eip=0x000209; 	S(_INT(0x21));	// 311                  int     21h             ; DOS - 2+ - GET EXIT CODE OF SUBPROGRAM (WAIT) ;~ 01A2:0209
cs=0x1a2;eip=0x00020b; 	T(OR(ax, ax));	// 312                  or      ax, ax ;~ 01A2:020B
cs=0x1a2;eip=0x00020d; 	J(JNZ(loc_10211));	// 313                  jnz     short loc_10211 ;~ 01A2:020D
cs=0x1a2;eip=0x00020f; 	J(JMP(loc_1026e));	// 314                  jmp     short loc_1026E ;~ 01A2:020F
loc_10211:
	// 4387 
cs=0x1a2;eip=0x000211; 	T(ax = cs;);	// 318                  mov     ax, cs ;~ 01A2:0211
cs=0x1a2;eip=0x000213; 	T(es = ax;);	// 319                  mov     es, ax ;~ 01A2:0213
cs=0x1a2;eip=0x000215; 	T(dx = 0x55E;);	// 320                  mov     dx, 55Eh ;~ 01A2:0215
cs=0x1a2;eip=0x000218; 	T(ax = 0x648;);	// 321                  mov     ax, 648h ;~ 01A2:0218
cs=0x1a2;eip=0x00021b; 	X(word_10586 = ax;);	// 322                  mov     word_10586, ax ;~ 01A2:021B
cs=0x1a2;eip=0x00021e; 	T(bx = 0x584;);	// 323                  mov     bx, 584h ;~ 01A2:021E
cs=0x1a2;eip=0x000221; 	X(word_10582 = sp;);	// 324                  mov     word_10582, sp ;~ 01A2:0221
cs=0x1a2;eip=0x000225; 	T(ax = 0x4B00;);	// 325                  mov     ax, 4B00h ;~ 01A2:0225
cs=0x1a2;eip=0x000228; 	S(_INT(0x21));	// 326                  int     21h             ; DOS - 2+ - LOAD OR EXECUTE (EXEC) ;~ 01A2:0228
cs=0x1a2;eip=0x00022a; 	T(cx = cs;);	// 330                  mov     cx, cs ;~ 01A2:022A
cs=0x1a2;eip=0x00022c; 	S(ss = cx;);	// 331                  mov     ss, cx ;~ 01A2:022C
cs=0x1a2;eip=0x00022e; 	T(sp = word_10582;);	// 332                  mov     sp, cs:word_10582 ;~ 01A2:022E
cs=0x1a2;eip=0x000233; 	T(ds = cx;);	// 333                  mov     ds, cx ;~ 01A2:0233
cs=0x1a2;eip=0x000235; 	T(es = cx;);	// 334                  mov     es, cx ;~ 01A2:0235
cs=0x1a2;eip=0x000237; 	T(ah = 0x4D;);	// 335                  mov     ah, 4Dh ;~ 01A2:0237
cs=0x1a2;eip=0x000239; 	S(_INT(0x21));	// 336                  int     21h             ; DOS - 2+ - GET EXIT CODE OF SUBPROGRAM (WAIT) ;~ 01A2:0239
cs=0x1a2;eip=0x00023b; 	T(CMP(al, 0));	// 337                  cmp     al, 0 ;~ 01A2:023B
cs=0x1a2;eip=0x00023d; 	J(JNZ(loc_10241));	// 338                  jnz     short loc_10241 ;~ 01A2:023D
cs=0x1a2;eip=0x00023f; 	J(JMP(loc_1026e));	// 339                  jmp     short loc_1026E ;~ 01A2:023F
loc_10241:
	// 4388 
cs=0x1a2;eip=0x000241; 	T(dx = 0x556;);	// 343                  mov     dx, 556h ;~ 01A2:0241
cs=0x1a2;eip=0x000244; 	T(ax = 0x592;);	// 344                  mov     ax, 592h ;~ 01A2:0244
cs=0x1a2;eip=0x000247; 	X(word_10586 = ax;);	// 345                  mov     word_10586, ax ;~ 01A2:0247
cs=0x1a2;eip=0x00024a; 	T(bx = 0x584;);	// 346                  mov     bx, 584h ;~ 01A2:024A
cs=0x1a2;eip=0x00024d; 	X(word_10582 = sp;);	// 347                  mov     word_10582, sp ;~ 01A2:024D
cs=0x1a2;eip=0x000251; 	T(ax = 0x4B00;);	// 348                  mov     ax, 4B00h ;~ 01A2:0251
cs=0x1a2;eip=0x000254; 	S(_INT(0x21));	// 349                  int     21h             ; DOS - 2+ - LOAD OR EXECUTE (EXEC) ;~ 01A2:0254
cs=0x1a2;eip=0x000256; 	T(cx = cs;);	// 353                  mov     cx, cs ;~ 01A2:0256
cs=0x1a2;eip=0x000258; 	S(ss = cx;);	// 354                  mov     ss, cx ;~ 01A2:0258
cs=0x1a2;eip=0x00025a; 	T(sp = word_10582;);	// 355                  mov     sp, cs:word_10582 ;~ 01A2:025A
cs=0x1a2;eip=0x00025f; 	T(ds = cx;);	// 356                  mov     ds, cx ;~ 01A2:025F
cs=0x1a2;eip=0x000261; 	T(es = cx;);	// 357                  mov     es, cx ;~ 01A2:0261
cs=0x1a2;eip=0x000263; 	T(ah = 0x4D;);	// 358                  mov     ah, 4Dh ;~ 01A2:0263
cs=0x1a2;eip=0x000265; 	S(_INT(0x21));	// 359                  int     21h             ; DOS - 2+ - GET EXIT CODE OF SUBPROGRAM (WAIT) ;~ 01A2:0265
cs=0x1a2;eip=0x000267; 	T(CMP(al, 0x23));	// 360                  cmp     al, 23h ; '#' ;~ 01A2:0267
cs=0x1a2;eip=0x000269; 	J(JNZ(loc_1026e));	// 361                  jnz     short loc_1026E ;~ 01A2:0269
cs=0x1a2;eip=0x00026b; 	J(JMP(loc_10152));	// 362                  jmp     loc_10152 ;~ 01A2:026B
loc_1026e:
	// 4389 
cs=0x1a2;eip=0x00026e; 	T(ax = 0x4C00;);	// 368                  mov     ax, 4C00h ;~ 01A2:026E
cs=0x1a2;eip=0x000271; 	S(_INT(0x21));	// 369                  int     21h             ; DOS - 2+ - QUIT WITH EXIT CODE (EXIT) ;~ 01A2:0271
sub_10273:
	// 375 
cs=0x1a2;eip=0x000273; 	X(PUSH(ds));	// 380                  push    ds ;~ 01A2:0273
cs=0x1a2;eip=0x000274; 	X(POP(es));	// 381                  pop     es ;~ 01A2:0274
cs=0x1a2;eip=0x000275; 	X(PUSH(dx));	// 382                  push    dx ;~ 01A2:0275
cs=0x1a2;eip=0x000276; 	T(ah = 0x48;);	// 383                  mov     ah, 48h ; 'H' ;~ 01A2:0276
cs=0x1a2;eip=0x000278; 	T(bx = 0x0FFFF;);	// 384                  mov     bx, 0FFFFh ;~ 01A2:0278
cs=0x1a2;eip=0x00027b; 	S(_INT(0x21));	// 385                  int     21h             ; DOS - 2+ - ALLOCATE MEMORY ;~ 01A2:027B
cs=0x1a2;eip=0x00027d; 	J(JC(loc_10288));	// 388                  jb      short loc_10288 ;~ 01A2:027D
cs=0x1a2;eip=0x00027f; 	T(dx = 0x461;);	// 389                  mov     dx, 461h ;~ 01A2:027F
cs=0x1a2;eip=0x000282; 	T(ah = 9;);	// 390                  mov     ah, 9 ;~ 01A2:0282
cs=0x1a2;eip=0x000284; 	S(_INT(0x21));	// 391                  int     21h             ; DOS - PRINT STRING ;~ 01A2:0284
cs=0x1a2;eip=0x000286; 	J(JMP(loc_1026e));	// 393                  jmp     short loc_1026E ;~ 01A2:0286
loc_10288:
	// 4390 
cs=0x1a2;eip=0x000288; 	T(ah = 0x48;);	// 397                  mov     ah, 48h ; 'H' ;~ 01A2:0288
cs=0x1a2;eip=0x00028a; 	T(SUB(bx, 0x400));	// 398                  sub     bx, 400h ;~ 01A2:028A
cs=0x1a2;eip=0x00028e; 	X(word_1045b = bx;);	// 399                  mov     word_1045B, bx ;~ 01A2:028E
cs=0x1a2;eip=0x000292; 	S(_INT(0x21));	// 400                  int     21h             ; DOS - 2+ - ALLOCATE MEMORY ;~ 01A2:0292
cs=0x1a2;eip=0x000294; 	J(JNC(loc_1029f));	// 402                  jnb     short loc_1029F ;~ 01A2:0294
cs=0x1a2;eip=0x000296; 	T(dx = 0x46C;);	// 403                  mov     dx, 46Ch ;~ 01A2:0296
cs=0x1a2;eip=0x000299; 	T(ah = 9;);	// 404                  mov     ah, 9 ;~ 01A2:0299
cs=0x1a2;eip=0x00029b; 	S(_INT(0x21));	// 405                  int     21h             ; DOS - PRINT STRING ;~ 01A2:029B
cs=0x1a2;eip=0x00029d; 	J(JMP(loc_1026e));	// 407                  jmp     short loc_1026E ;~ 01A2:029D
loc_1029f:
	// 4391 
cs=0x1a2;eip=0x00029f; 	X(word_10459 = ax;);	// 411                  mov     word_10459, ax ;~ 01A2:029F
cs=0x1a2;eip=0x0002a2; 	X(*(dw*)(&byte_1045d) = ax;);	// 412                  mov     word ptr byte_1045D, ax ;~ 01A2:02A2
cs=0x1a2;eip=0x0002a5; 	X(*(dw*)((adsexe)+1) = ax;);	// 413                  mov     word ptr aDsExe+1, ax ; "s.EXE" ;~ 01A2:02A5
cs=0x1a2;eip=0x0002a8; 	T(bx = 0x45D;);	// 414                  mov     bx, 45Dh ;~ 01A2:02A8
cs=0x1a2;eip=0x0002ab; 	T(ax = 0x4B03;);	// 415                  mov     ax, 4B03h ;~ 01A2:02AB
cs=0x1a2;eip=0x0002ae; 	X(POP(dx));	// 416                  pop     dx ;~ 01A2:02AE
cs=0x1a2;eip=0x0002af; 	X(word_10582 = sp;);	// 417                  mov     cs:word_10582, sp ;~ 01A2:02AF
cs=0x1a2;eip=0x0002b4; 	S(_INT(0x21));	// 418                  int     21h             ; DOS - 2+ - LOAD OR EXECUTE (EXEC) ;~ 01A2:02B4
cs=0x1a2;eip=0x0002b6; 	J(JNC(loc_102dd));	// 422                  jnb     short loc_102DD ;~ 01A2:02B6
cs=0x1a2;eip=0x0002b8; 	T(CMP(ax, 2));	// 423                  cmp     ax, 2 ;~ 01A2:02B8
cs=0x1a2;eip=0x0002bb; 	J(JNZ(loc_102c6));	// 424                  jnz     short loc_102C6 ;~ 01A2:02BB
cs=0x1a2;eip=0x0002bd; 	T(dx = 0x485;);	// 425                  mov     dx, 485h ;~ 01A2:02BD
cs=0x1a2;eip=0x0002c0; 	T(ah = 9;);	// 426                  mov     ah, 9 ;~ 01A2:02C0
cs=0x1a2;eip=0x0002c2; 	S(_INT(0x21));	// 427                  int     21h             ; DOS - PRINT STRING ;~ 01A2:02C2
cs=0x1a2;eip=0x0002c4; 	J(JMP(loc_1026e));	// 429                  jmp     short loc_1026E ;~ 01A2:02C4
loc_102c6:
	// 4392 
cs=0x1a2;eip=0x0002c6; 	T(CMP(ax, 8));	// 433                  cmp     ax, 8 ;~ 01A2:02C6
cs=0x1a2;eip=0x0002c9; 	J(JNZ(loc_102d4));	// 434                  jnz     short loc_102D4 ;~ 01A2:02C9
cs=0x1a2;eip=0x0002cb; 	T(dx = 0x498;);	// 435                  mov     dx, 498h ;~ 01A2:02CB
cs=0x1a2;eip=0x0002ce; 	T(ah = 9;);	// 436                  mov     ah, 9 ;~ 01A2:02CE
cs=0x1a2;eip=0x0002d0; 	S(_INT(0x21));	// 437                  int     21h             ; DOS - PRINT STRING ;~ 01A2:02D0
cs=0x1a2;eip=0x0002d2; 	J(JMP(loc_1026e));	// 439                  jmp     short loc_1026E ;~ 01A2:02D2
loc_102d4:
	// 4393 
cs=0x1a2;eip=0x0002d4; 	T(dx = 0x4B4;);	// 443                  mov     dx, 4B4h ;~ 01A2:02D4
cs=0x1a2;eip=0x0002d7; 	T(ah = 9;);	// 444                  mov     ah, 9 ;~ 01A2:02D7
cs=0x1a2;eip=0x0002d9; 	S(_INT(0x21));	// 445                  int     21h             ; DOS - PRINT STRING ;~ 01A2:02D9
cs=0x1a2;eip=0x0002db; 	J(JMP(loc_1026e));	// 447                  jmp     short loc_1026E ;~ 01A2:02DB
loc_102dd:
	// 4394 
cs=0x1a2;eip=0x0002dd; 	T(sp = word_10582;);	// 451                  mov     sp, cs:word_10582 ;~ 01A2:02DD
cs=0x1a2;eip=0x0002e2; 	T(ax = cs;);	// 452                  mov     ax, cs ;~ 01A2:02E2
cs=0x1a2;eip=0x0002e4; 	S(ss = ax;);	// 453                  mov     ss, ax ;~ 01A2:02E4
cs=0x1a2;eip=0x0002e6; 	T(ds = ax;);	// 454                  mov     ds, ax ;~ 01A2:02E6
cs=0x1a2;eip=0x0002e8; 	T(es = word_10459;);	// 455                  mov     es, word_10459 ;~ 01A2:02E8
cs=0x1a2;eip=0x0002ec; 	T(di = 0x18;);	// 457                  mov     di, 18h ;~ 01A2:02EC
cs=0x1a2;eip=0x0002ef; 	T(MOV(ax, *(dw*)(raddr(es,di))));	// 458                  mov     ax, es:[di] ;~ 01A2:02EF
cs=0x1a2;eip=0x0002f2; 	X(*(dw*)(((db*)&dword_1057c)+2) = ax;);	// 459                  mov     word ptr dword_1057C+2, ax ;~ 01A2:02F2
cs=0x1a2;eip=0x0002f5; 	T(di = 0x24;);	// 460                  mov     di, 24h ; '$' ;~ 01A2:02F5
cs=0x1a2;eip=0x0002f8; 	T(MOV(ax, *(dw*)(raddr(es,di))));	// 461                  mov     ax, es:[di] ;~ 01A2:02F8
cs=0x1a2;eip=0x0002fb; 	X(*(dw*)(&dword_1057c) = ax;);	// 462                  mov     word ptr dword_1057C, ax ;~ 01A2:02FB
cs=0x1a2;eip=0x0002fe; 	T(di = 0x1E;);	// 463                  mov     di, 1Eh ;~ 01A2:02FE
cs=0x1a2;eip=0x000301; 	T(MOV(bx, *(dw*)(raddr(es,di))));	// 464                  mov     bx, es:[di] ;~ 01A2:0301
cs=0x1a2;eip=0x000304; 	T(SHR(bx, 1));	// 465                  shr     bx, 1 ;~ 01A2:0304
cs=0x1a2;eip=0x000306; 	T(SHR(bx, 1));	// 466                  shr     bx, 1 ;~ 01A2:0306
cs=0x1a2;eip=0x000308; 	T(SHR(bx, 1));	// 467                  shr     bx, 1 ;~ 01A2:0308
cs=0x1a2;eip=0x00030a; 	T(SHR(bx, 1));	// 468                  shr     bx, 1 ;~ 01A2:030A
cs=0x1a2;eip=0x00030c; 	T(di = 0x20;);	// 469                  mov     di, 20h ; ' ' ;~ 01A2:030C
cs=0x1a2;eip=0x00030f; 	T(MOV(cx, *(dw*)(raddr(es,di))));	// 470                  mov     cx, es:[di] ;~ 01A2:030F
cs=0x1a2;eip=0x000312; 	T(SHR(cx, 1));	// 471                  shr     cx, 1 ;~ 01A2:0312
cs=0x1a2;eip=0x000314; 	T(SHR(cx, 1));	// 472                  shr     cx, 1 ;~ 01A2:0314
cs=0x1a2;eip=0x000316; 	T(SHR(cx, 1));	// 473                  shr     cx, 1 ;~ 01A2:0316
cs=0x1a2;eip=0x000318; 	T(SHR(cx, 1));	// 474                  shr     cx, 1 ;~ 01A2:0318
cs=0x1a2;eip=0x00031a; 	T(ADD(bx, cx));	// 475                  add     bx, cx ;~ 01A2:031A
cs=0x1a2;eip=0x00031c; 	T(CMP(bx, word_1045b));	// 476                  cmp     bx, word_1045B ;~ 01A2:031C
cs=0x1a2;eip=0x000320; 	J(JBE(loc_1032c));	// 477                  jbe     short loc_1032C ;~ 01A2:0320
cs=0x1a2;eip=0x000322; 	T(dx = 0x4C8;);	// 478                  mov     dx, 4C8h ;~ 01A2:0322
cs=0x1a2;eip=0x000325; 	T(ah = 9;);	// 479                  mov     ah, 9 ;~ 01A2:0325
cs=0x1a2;eip=0x000327; 	S(_INT(0x21));	// 480                  int     21h             ; DOS - PRINT STRING ;~ 01A2:0327
cs=0x1a2;eip=0x000329; 	J(JMP(loc_1026e));	// 482                  jmp     loc_1026E ;~ 01A2:0329
loc_1032c:
	// 4395 
cs=0x1a2;eip=0x00032c; 	T(ADD(bx, 8));	// 486                  add     bx, 8 ;~ 01A2:032C
cs=0x1a2;eip=0x00032f; 	T(ah = 0x4A;);	// 487                  mov     ah, 4Ah ; 'J' ;~ 01A2:032F
cs=0x1a2;eip=0x000331; 	T(cx = word_10459;);	// 488                  mov     cx, word_10459 ;~ 01A2:0331
cs=0x1a2;eip=0x000335; 	T(es = cx;);	// 489                  mov     es, cx ;~ 01A2:0335
cs=0x1a2;eip=0x000337; 	S(_INT(0x21));	// 490                  int     21h             ; DOS - 2+ - ADJUST MEMORY BLOCK SIZE (SETBLOCK) ;~ 01A2:0337
cs=0x1a2;eip=0x000339; 	J(JNC(loc_10345));	// 493                  jnb     short loc_10345 ;~ 01A2:0339
cs=0x1a2;eip=0x00033b; 	T(dx = 0x4DA;);	// 494                  mov     dx, 4DAh ;~ 01A2:033B
cs=0x1a2;eip=0x00033e; 	T(ah = 9;);	// 495                  mov     ah, 9 ;~ 01A2:033E
cs=0x1a2;eip=0x000340; 	S(_INT(0x21));	// 496                  int     21h             ; DOS - PRINT STRING ;~ 01A2:0340
cs=0x1a2;eip=0x000342; 	J(JMP(loc_1026e));	// 498                  jmp     loc_1026E ;~ 01A2:0342
loc_10345:
	// 4396 
cs=0x1a2;eip=0x000345; 	T(ax = cs;);	// 502                  mov     ax, cs ;~ 01A2:0345
cs=0x1a2;eip=0x000347; 	T(ds = ax;);	// 503                  mov     ds, ax ;~ 01A2:0347
cs=0x1a2;eip=0x000349; 	T(es = ax;);	// 504                  mov     es, ax ;~ 01A2:0349
cs=0x1a2;eip=0x00034b; 	T(ax = word_10459;);	// 506                  mov     ax, word_10459 ;~ 01A2:034B
cs=0x1a2;eip=0x00034e; 	J(RETN(0));	// 507                  retn ;~ 01A2:034E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1001b: 	goto loc_1001b;
        case m2c::kloc_10027: 	goto loc_10027;
        case m2c::kloc_10059: 	goto loc_10059;
        case m2c::kloc_10080: 	goto loc_10080;
        case m2c::kloc_100b9: 	goto loc_100b9;
        case m2c::kloc_100eb: 	goto loc_100eb;
        case m2c::kloc_100f2: 	goto loc_100f2;
        case m2c::kloc_10102: 	goto loc_10102;
        case m2c::kloc_10125: 	goto loc_10125;
        case m2c::kloc_10135: 	goto loc_10135;
        case m2c::kloc_10152: 	goto loc_10152;
        case m2c::kloc_10183: 	goto loc_10183;
        case m2c::kloc_101b4: 	goto loc_101b4;
        case m2c::kloc_101e5: 	goto loc_101e5;
        case m2c::kloc_10211: 	goto loc_10211;
        case m2c::kloc_10241: 	goto loc_10241;
        case m2c::kloc_1026e: 	goto loc_1026e;
        case m2c::kloc_10288: 	goto loc_10288;
        case m2c::kloc_1029f: 	goto loc_1029f;
        case m2c::kloc_102c6: 	goto loc_102c6;
        case m2c::kloc_102d4: 	goto loc_102d4;
        case m2c::kloc_102dd: 	goto loc_102dd;
        case m2c::kloc_1032c: 	goto loc_1032c;
        case m2c::kloc_10345: 	goto loc_10345;
        case m2c::kret_1a2_1d: 	goto ret_1a2_1d;
        case m2c::kret_1a2_1e: 	goto ret_1a2_1e;
        case m2c::kret_1a2_1f: 	goto ret_1a2_1f;
        case m2c::kret_1a2_20: 	goto ret_1a2_20;
        case m2c::ksub_10273: 	goto sub_10273;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}


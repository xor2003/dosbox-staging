/* THIS IS GENERATED FILE */

        
#include "f.exe.h"

                

 bool _group4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group4:
    _begin:
seg127c_8_proc:
	// 6336 
loc_127c8:
	// 4504 
cs=0x41e;eip=0x000008; 	T(ADD(al, bl));	// 6338                  add     al, bl ;~ 041E:0008
loc_127cb:
	// 4505 
cs=0x41e;eip=0x00000b; 	T(ah = 0x82;);	// 6345                  mov     ah, 82h ;~ 041E:000B
cs=0x41e;eip=0x00000d; 	T(AAS);	// 6346                  aas ;~ 041E:000D
cs=0x41e;eip=0x000010; 	T(AND(sp, *(dw*)(raddr(ds,bx+si))));	// 6351                  and     sp, [bx+si] ;~ 041E:0010
cs=0x41e;eip=0x000012; 	T(SBB(ax, 0x191B));	// 6352                  sbb     ax, 191Bh ;~ 041E:0012
cs=0x41e;eip=0x000015; 	X(SBB(byte_12e45, dl));	// 6353                  sbb     ds:byte_12E45, dl ;~ 041E:0015
cs=0x41e;eip=0x000019; 	T(ADC(dx, *(dw*)(raddr(ss,bp+si))));	// 6354                  adc     dx, [bp+si] ;~ 041E:0019
cs=0x41e;eip=0x00001b; 	X(ADC(*(dw*)(raddr(ds,bx+si)), dx));	// 6355                  adc     [bx+si], dx ;~ 041E:001B
cs=0x41e;eip=0x00001d; 	X(ADC(*(raddr(ds,bx)), cl));	// 6356                  adc     [bx], cl ;~ 041E:001D
cs=0x41e;eip=0x00001f; 	X(PUSH(cs));	// 6357                  push    cs ;~ 041E:001F
cs=0x41e;eip=0x000020; 	X(PUSH(cs));	// 6358                  push    cs ;~ 041E:0020
cs=0x41e;eip=0x000021; 	T(OR(ax, 0x0C0D));	// 6359                  or      ax, 0C0Dh ;~ 041E:0021
cs=0x41e;eip=0x000024; 	T(OR(al, 0x0B));	// 6360                  or      al, 0Bh ;~ 041E:0024
cs=0x41e;eip=0x000026; 	T(OR(cx, *(dw*)(raddr(ss,bp+si))));	// 6361                  or      cx, [bp+si] ;~ 041E:0026
cs=0x41e;eip=0x000028; 	T(OR(cl, *(raddr(ds,bx+di))));	// 6362                  or      cl, [bx+di] ;~ 041E:0028
cs=0x41e;eip=0x00002a; 	X(OR(*(dw*)(raddr(ds,bx+di)), cx));	// 6363                  or      [bx+di], cx ;~ 041E:002A
cs=0x41e;eip=0x00002c; 	X(OR(*(raddr(ds,bx+si)), cl));	// 6364                  or      [bx+si], cl ;~ 041E:002C
cs=0x41e;eip=0x00002e; 	X(POP(es));	// 6365                  pop     es ;~ 041E:002E
cs=0x41e;eip=0x00002f; 	X(POP(es));	// 6367                  pop     es ;~ 041E:002F
cs=0x41e;eip=0x000030; 	X(POP(es));	// 6368                  pop     es ;~ 041E:0030
cs=0x41e;eip=0x000031; 	X(PUSH(es));	// 6370                  push    es ;~ 041E:0031
cs=0x41e;eip=0x000032; 	X(PUSH(es));	// 6371                  push    es ;~ 041E:0032
cs=0x41e;eip=0x000033; 	X(PUSH(es));	// 6372                  push    es ;~ 041E:0033
cs=0x41e;eip=0x000034; 	X(PUSH(es));	// 6373                  push    es ;~ 041E:0034
cs=0x41e;eip=0x000035; 	T(ADD(ax, 0x505));	// 6374                  add     ax, 505h ;~ 041E:0035
cs=0x41e;eip=0x000038; 	T(ADD(al, 4));	// 6375                  add     al, 4 ;~ 041E:0038
cs=0x41e;eip=0x00003a; 	T(ADD(al, 4));	// 6376                  add     al, 4 ;~ 041E:003A
cs=0x41e;eip=0x00003c; 	T(ADD(ax, *(dw*)(raddr(ss,bp+di))));	// 6377                  add     ax, [bp+di] ;~ 041E:003C
cs=0x41e;eip=0x00003e; 	T(ADD(ax, *(dw*)(raddr(ss,bp+di))));	// 6378                  add     ax, [bp+di] ;~ 041E:003E
cs=0x41e;eip=0x000040; 	T(ADD(al, *(raddr(ss,bp+si))));	// 6379                  add     al, [bp+si] ;~ 041E:0040
cs=0x41e;eip=0x000042; 	T(ADD(al, *(raddr(ss,bp+si))));	// 6380                  add     al, [bp+si] ;~ 041E:0042
cs=0x41e;eip=0x000044; 	T(ADD(al, *(raddr(ds,bx+di))));	// 6381                  add     al, [bx+di] ;~ 041E:0044
cs=0x41e;eip=0x000046; 	X(ADD(*(dw*)(raddr(ds,bx+di)), ax));	// 6382                  add     [bx+di], ax ;~ 041E:0046
cs=0x41e;eip=0x000048; 	X(ADD(*(dw*)(raddr(ds,bx+si)), ax));	// 6383                  add     [bx+si], ax ;~ 041E:0048
cs=0x41e;eip=0x000052; 	T(dx = 0x3DA;);	// 6392                  mov     dx, 3DAh ;~ 041E:0052
loc_12815:
	// 4506 
cs=0x41e;eip=0x000055; 	S(IN(al, dx));	// 6395                  in      al, dx          ; Video status bits: ;~ 041E:0055
cs=0x41e;eip=0x000056; 	T(TEST(al, 8));	// 6400                  test    al, 8 ;~ 041E:0056
cs=0x41e;eip=0x000058; 	J(JZ(loc_12815));	// 6401                  jz      short loc_12815 ;~ 041E:0058
loc_1281a:
	// 4507 
cs=0x41e;eip=0x00005a; 	S(IN(al, dx));	// 6404                  in      al, dx          ; Video status bits: ;~ 041E:005A
cs=0x41e;eip=0x00005b; 	T(TEST(al, 8));	// 6409                  test    al, 8 ;~ 041E:005B
cs=0x41e;eip=0x00005d; 	J(JNZ(loc_1281a));	// 6410                  jnz     short loc_1281A ;~ 041E:005D
cs=0x41e;eip=0x00005f; 	T(bl = 1;);	// 6411                  mov     bl, 1 ;~ 041E:005F
cs=0x41e;eip=0x000061; 	T(XOR(cx, cx));	// 6412                  xor     cx, cx ;~ 041E:0061
loc_12823:
	// 4508 
cs=0x41e;eip=0x000063; 	S(IN(al, dx));	// 6416                  in      al, dx          ; Video status bits: ;~ 041E:0063
cs=0x41e;eip=0x000064; 	T(TEST(al, 8));	// 6421                  test    al, 8 ;~ 041E:0064
cs=0x41e;eip=0x000066; 	J(JNZ(loc_12833));	// 6422                  jnz     short loc_12833 ;~ 041E:0066
cs=0x41e;eip=0x000068; 	T(AND(al, 1));	// 6423                  and     al, 1 ;~ 041E:0068
cs=0x41e;eip=0x00006a; 	T(CMP(al, bl));	// 6424                  cmp     al, bl ;~ 041E:006A
cs=0x41e;eip=0x00006c; 	J(JZ(loc_12823));	// 6425                  jz      short loc_12823 ;~ 041E:006C
cs=0x41e;eip=0x00006e; 	T(XOR(bl, 1));	// 6426                  xor     bl, 1 ;~ 041E:006E
cs=0x41e;eip=0x000071; 	J(LOOP(loc_12823));	// 6427                  loop    loc_12823 ;~ 041E:0071
loc_12833:
	// 4509 
cs=0x41e;eip=0x000073; 	T(STI);	// 6430                  sti ;~ 041E:0073
cs=0x41e;eip=0x000074; 	T(NEG(cx));	// 6431                  neg     cx ;~ 041E:0074
cs=0x41e;eip=0x000076; 	T(XOR(al, al));	// 6432                  xor     al, al ;~ 041E:0076
cs=0x41e;eip=0x000078; 	T(CMP(cx, 0x258));	// 6433                  cmp     cx, 258h ;~ 041E:0078
cs=0x41e;eip=0x00007c; 	J(JC(loc_12840));	// 6434                  jb      short loc_12840 ;~ 041E:007C
cs=0x41e;eip=0x00007e; 	T(al = 0x0FF;);	// 6435                  mov     al, 0FFh ;~ 041E:007E
loc_12840:
	// 4510 
cs=0x41e;eip=0x000080; 	X(*((seg_11c22)+0x48) = al;);	// 6438                  mov     ds:seg_11C22+48h, al ;~ 041E:0080
cs=0x41e;eip=0x000083; 	J(RETN(0));	// 6439                  retn ;~ 041E:0083
sub_12a70:
	// 6825 
cs=0x41e;eip=0x0002b0; 	T(CMP(*(dw*)(&_unk_11cac), 0));	// 6826                  cmp     word ptr ds:_unk_11CAC, 0 ;~ 041E:02B0
cs=0x41e;eip=0x0002b5; 	J(JZ(loc_12a7b));	// 6827                  jz      short loc_12A7B ;~ 041E:02B5
cs=0x41e;eip=0x0002b7; 	X(DEC(*(dw*)(&_unk_11cac)));	// 6828                  dec     word ptr ds:_unk_11CAC ;~ 041E:02B7
loc_12a7b:
	// 4527 
cs=0x41e;eip=0x0002bb; 	X(PUSH(es));	// 6831                  push    es ;~ 041E:02BB
cs=0x41e;eip=0x0002bc; 	X(PUSH(si));	// 6832                  push    si ;~ 041E:02BC
cs=0x41e;eip=0x0002bd; 	X(PUSH(di));	// 6833                  push    di ;~ 041E:02BD
cs=0x41e;eip=0x0002be; 	X(PUSH(bp));	// 6834                  push    bp ;~ 041E:02BE
cs=0x41e;eip=0x0002bf; 	X(MOV(*(dw*)(raddr(cs,m2c::kloc_127c8+1)), ss));	// 6835                  mov     word ptr cs:loc_127C8+1, ss ;~ 041E:02BF
cs=0x41e;eip=0x0002c4; 	X(MOV(*(dw*)(raddr(cs,m2c::kloc_127cb)), sp));	// 6836                  mov     word ptr cs:loc_127CB, sp ;~ 041E:02C4
cs=0x41e;eip=0x0002c9; 	T(ax = 0x11A3;);	// 6837                  mov     ax, 11A3h ;~ 041E:02C9
cs=0x41e;eip=0x0002cc; 	T(es = ax;);	// 6838                  mov     es, ax ;~ 041E:02CC
cs=0x41e;eip=0x0002ce; 	S(ss = ax;);	// 6839                  mov     ss, ax ;~ 041E:02CE
cs=0x41e;eip=0x0002d0; 	T(sp = 0x238;);	// 6841                  mov     sp, 238h ;~ 041E:02D0
cs=0x41e;eip=0x0002d3; 	J(CALLF(sub_13c8c,0));	// 6842                  call    far ptr sub_13C8C ;~ 041E:02D3
cs=0x41e;eip=0x0002d8; 	T(MOV(bx, *(dw*)(raddr(cs,m2c::kloc_127c8+1))));	// 6843                  mov     bx, word ptr cs:loc_127C8+1 ;~ 041E:02D8
cs=0x41e;eip=0x0002dd; 	S(ss = bx;);	// 6844                  mov     ss, bx ;~ 041E:02DD
cs=0x41e;eip=0x0002df; 	T(MOV(sp, *(dw*)(raddr(cs,m2c::kloc_127cb))));	// 6846                  mov     sp, word ptr cs:loc_127CB ;~ 041E:02DF
cs=0x41e;eip=0x0002e4; 	X(POP(bp));	// 6847                  pop     bp ;~ 041E:02E4
cs=0x41e;eip=0x0002e5; 	X(POP(di));	// 6848                  pop     di ;~ 041E:02E5
cs=0x41e;eip=0x0002e6; 	X(POP(si));	// 6849                  pop     si ;~ 041E:02E6
cs=0x41e;eip=0x0002e7; 	X(POP(es));	// 6850                  pop     es ;~ 041E:02E7
cs=0x41e;eip=0x0002e8; 	T(al = byte_12659;);	// 6852                  mov     al, ds:byte_12659 ;~ 041E:02E8
cs=0x41e;eip=0x0002eb; 	T(OR(al, byte_12658));	// 6853                  or      al, ds:byte_12658 ;~ 041E:02EB
cs=0x41e;eip=0x0002ef; 	J(JZ(loc_12af4));	// 6854                  jz      short loc_12AF4 ;~ 041E:02EF
cs=0x41e;eip=0x0002f1; 	T(CMP(byte_12658, 0));	// 6855                  cmp     ds:byte_12658, 0 ;~ 041E:02F1
cs=0x41e;eip=0x0002f6; 	J(JZ(loc_12ad2));	// 6856                  jz      short loc_12AD2 ;~ 041E:02F6
cs=0x41e;eip=0x0002f8; 	T(ax = *(dw*)(&_unk_125c2););	// 6857                  mov     ax, word ptr ds:_unk_125C2 ;~ 041E:02F8
cs=0x41e;eip=0x0002fb; 	T(ADD(ax, *(dw*)(&_unk_125c6)));	// 6858                  add     ax, word ptr ds:_unk_125C6 ;~ 041E:02FB
cs=0x41e;eip=0x0002ff; 	X(*(dw*)(&_unk_125c2) = ax;);	// 6859                  mov     word ptr ds:_unk_125C2, ax ;~ 041E:02FF
cs=0x41e;eip=0x000302; 	X(DEC(byte_12658));	// 6860                  dec     ds:byte_12658 ;~ 041E:0302
cs=0x41e;eip=0x000306; 	J(JNZ(loc_12ad2));	// 6861                  jnz     short loc_12AD2 ;~ 041E:0306
cs=0x41e;eip=0x000308; 	T(al = byte_1265f;);	// 6862                  mov     al, ds:byte_1265F ;~ 041E:0308
cs=0x41e;eip=0x00030b; 	T(ADD(al, 0x0B0));	// 6863                  add     al, 0B0h ;~ 041E:030B
cs=0x41e;eip=0x00030d; 	T(bl = 0;);	// 6864                  mov     bl, 0 ;~ 041E:030D
cs=0x41e;eip=0x00030f; 	J(CALL(sub_12a3b,0));	// 6865                  call    sub_12A3B ;~ 041E:030F
loc_12ad2:
	// 4528 
cs=0x41e;eip=0x000312; 	T(CMP(byte_12659, 0));	// 6869                  cmp     ds:byte_12659, 0 ;~ 041E:0312
cs=0x41e;eip=0x000317; 	J(JZ(locret_12af3));	// 6870                  jz      short locret_12AF3 ;~ 041E:0317
cs=0x41e;eip=0x000319; 	T(ax = word_125c4;);	// 6871                  mov     ax, ds:word_125C4 ;~ 041E:0319
cs=0x41e;eip=0x00031c; 	T(ADD(ax, *(dw*)(&_unk_125c8)));	// 6872                  add     ax, word ptr ds:_unk_125C8 ;~ 041E:031C
cs=0x41e;eip=0x000320; 	X(word_125c4 = ax;);	// 6873                  mov     ds:word_125C4, ax ;~ 041E:0320
cs=0x41e;eip=0x000323; 	X(DEC(byte_12659));	// 6874                  dec     ds:byte_12659 ;~ 041E:0323
cs=0x41e;eip=0x000327; 	J(JNZ(locret_12af3));	// 6875                  jnz     short locret_12AF3 ;~ 041E:0327
cs=0x41e;eip=0x000329; 	T(al = byte_12660;);	// 6876                  mov     al, ds:byte_12660 ;~ 041E:0329
cs=0x41e;eip=0x00032c; 	T(ADD(al, 0x0B0));	// 6877                  add     al, 0B0h ;~ 041E:032C
cs=0x41e;eip=0x00032e; 	T(bl = 0;);	// 6878                  mov     bl, 0 ;~ 041E:032E
cs=0x41e;eip=0x000330; 	J(CALL(sub_12a3b,0));	// 6879                  call    sub_12A3B ;~ 041E:0330
locret_12af3:
	// 4529 
cs=0x41e;eip=0x000333; 	J(RETN(0));	// 6883                  retn ;~ 041E:0333
loc_12af4:
	// 4530 
cs=0x41e;eip=0x000334; 	T(CMP(*(dw*)(&_unk_11c8f), 0x0FFFF));	// 6887                  cmp     word ptr ds:_unk_11C8F, 0FFFFh ;~ 041E:0334
cs=0x41e;eip=0x000339; 	J(JZ(locret_12b07));	// 6888                  jz      short locret_12B07 ;~ 041E:0339
cs=0x41e;eip=0x00033b; 	X(*(dw*)(&_unk_11c8f) = 0x0FFFF;);	// 6889                  mov     word ptr ds:_unk_11C8F, 0FFFFh ;~ 041E:033B
cs=0x41e;eip=0x000341; 	X(*(dw*)(&_unk_11c8d) = 0x0FFFF;);	// 6890                  mov     word ptr ds:_unk_11C8D, 0FFFFh ;~ 041E:0341
locret_12b07:
	// 4531 
cs=0x41e;eip=0x000347; 	J(RETN(0));	// 6893                  retn ;~ 041E:0347

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_127cb: 	goto loc_127cb;
        case m2c::kloc_12815: 	goto loc_12815;
        case m2c::kloc_1281a: 	goto loc_1281a;
        case m2c::kloc_12823: 	goto loc_12823;
        case m2c::kloc_12833: 	goto loc_12833;
        case m2c::kloc_12840: 	goto loc_12840;
        case m2c::kloc_12a7b: 	goto loc_12a7b;
        case m2c::kloc_12ad2: 	goto loc_12ad2;
        case m2c::kloc_12af4: 	goto loc_12af4;
        case m2c::klocret_12af3: 	goto locret_12af3;
        case m2c::klocret_12b07: 	goto locret_12b07;
        case m2c::kseg127c_8_proc: 	goto seg127c_8_proc;
        case m2c::ksub_12a70: 	goto sub_12a70;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12844(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12844:
    _begin:
cs=0x41e;eip=0x000084; 	X(PUSH(es));	// 6446                  push    es ;~ 041E:0084
cs=0x41e;eip=0x000085; 	X(PUSH(di));	// 6447                  push    di ;~ 041E:0085
cs=0x41e;eip=0x000086; 	T(ax = 0;);	// 6448                  mov     ax, 0 ;~ 041E:0086
cs=0x41e;eip=0x000089; 	T(es = ax;);	// 6449                  mov     es, ax ;~ 041E:0089
cs=0x41e;eip=0x00008b; 	T(di = 0x440;);	// 6450                  mov     di, 440h ;~ 041E:008B
cs=0x41e;eip=0x00008e; 	X(MOV(*(raddr(es,di)), 1));	// 6451                  mov     byte ptr es:[di], 1 ;~ 041E:008E
cs=0x41e;eip=0x000092; 	T(DEC(di));	// 6452                  dec     di ;~ 041E:0092
loc_12853:
	// 4511 
cs=0x41e;eip=0x000093; 	T(MOV(al, *(raddr(es,di))));	// 6455                  mov     al, es:[di] ;~ 041E:0093
cs=0x41e;eip=0x000096; 	T(AND(al, 0x0F));	// 6456                  and     al, 0Fh ;~ 041E:0096
cs=0x41e;eip=0x000098; 	J(JNZ(loc_12853));	// 6457                  jnz     short loc_12853 ;~ 041E:0098
cs=0x41e;eip=0x00009a; 	X(POP(di));	// 6458                  pop     di ;~ 041E:009A
cs=0x41e;eip=0x00009b; 	X(POP(es));	// 6459                  pop     es ;~ 041E:009B
cs=0x41e;eip=0x00009c; 	J(RETN(0));	// 6460                  retn ;~ 041E:009C

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_12853: 	goto loc_12853;
        case m2c::ksub_12844: 	goto sub_12844;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1285d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1285d:
    _begin:
cs=0x41e;eip=0x00009d; 	X(PUSH(cx));	// 6468                  push    cx ;~ 041E:009D
cs=0x41e;eip=0x00009e; 	T(CLI);	// 6469                  cli ;~ 041E:009E
cs=0x41e;eip=0x00009f; 	T(al = 0x80;);	// 6470                  mov     al, 80h ;~ 041E:009F
cs=0x41e;eip=0x0000a1; 	S(OUT(0x43, al));	// 6471                  out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:00A1
cs=0x41e;eip=0x0000a3; 	S(IN(al, 0x42));	// 6472                  in      al, 42h         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:00A3
cs=0x41e;eip=0x0000a5; 	T(bl = al;);	// 6473                  mov     bl, al ;~ 041E:00A5
cs=0x41e;eip=0x0000a7; 	S(IN(al, 0x42));	// 6474                  in      al, 42h         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:00A7
cs=0x41e;eip=0x0000a9; 	T(bh = al;);	// 6475                  mov     bh, al ;~ 041E:00A9
cs=0x41e;eip=0x0000ab; 	T(cx = 0x100;);	// 6476                  mov     cx, 100h ;~ 041E:00AB
loc_1286e:
	// 4512 
cs=0x41e;eip=0x0000ae; 	J(LOOP(loc_1286e));	// 6479                  loop    loc_1286E ;~ 041E:00AE
cs=0x41e;eip=0x0000b0; 	T(al = 0x80;);	// 6480                  mov     al, 80h ;~ 041E:00B0
cs=0x41e;eip=0x0000b2; 	S(OUT(0x43, al));	// 6481                  out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:00B2
cs=0x41e;eip=0x0000b4; 	S(IN(al, 0x42));	// 6482                  in      al, 42h         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:00B4
cs=0x41e;eip=0x0000b6; 	T(dl = al;);	// 6483                  mov     dl, al ;~ 041E:00B6
cs=0x41e;eip=0x0000b8; 	S(IN(al, 0x42));	// 6484                  in      al, 42h         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:00B8
cs=0x41e;eip=0x0000ba; 	T(dh = al;);	// 6485                  mov     dh, al ;~ 041E:00BA
cs=0x41e;eip=0x0000bc; 	T(STI);	// 6486                  sti ;~ 041E:00BC
cs=0x41e;eip=0x0000bd; 	T(SUB(bx, dx));	// 6487                  sub     bx, dx ;~ 041E:00BD
cs=0x41e;eip=0x0000bf; 	X(POP(cx));	// 6488                  pop     cx ;~ 041E:00BF
cs=0x41e;eip=0x0000c0; 	J(RETN(0));	// 6489                  retn ;~ 041E:00C0

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1286e: 	goto loc_1286e;
        case m2c::ksub_1285d: 	goto sub_1285d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12881(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12881:
    _begin:
cs=0x41e;eip=0x0000c1; 	S(IN(al, 0x61));	// 6497                  in      al, 61h         ; PC/XT PPI port B bits: ;~ 041E:00C1
cs=0x41e;eip=0x0000c3; 	X(byte_11c96 = al;);	// 6505                  mov     ds:byte_11C96, al ;~ 041E:00C3
cs=0x41e;eip=0x0000c6; 	T(OR(al, 1));	// 6506                  or      al, 1 ;~ 041E:00C6
cs=0x41e;eip=0x0000c8; 	T(AND(al, 0x0FD));	// 6507                  and     al, 0FDh ;~ 041E:00C8
cs=0x41e;eip=0x0000ca; 	S(OUT(0x61, al));	// 6508                  out     61h, al         ; PC/XT PPI port B bits: ;~ 041E:00CA
cs=0x41e;eip=0x0000cc; 	T(al = 0x0B6;);	// 6516                  mov     al, 0B6h ;~ 041E:00CC
cs=0x41e;eip=0x0000ce; 	S(OUT(0x43, al));	// 6517                  out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:00CE
cs=0x41e;eip=0x0000d0; 	J({;});	// 6518                  jmp     short $+2 ;~ 041E:00D0
loc_12892:
	// 4513 
cs=0x41e;eip=0x0000d2; 	T(XOR(al, al));	// 6522                  xor     al, al ;~ 041E:00D2
cs=0x41e;eip=0x0000d4; 	S(OUT(0x42, al));	// 6523                  out     42h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:00D4
cs=0x41e;eip=0x0000d6; 	J({;});	// 6524                  jmp     short $+2 ;~ 041E:00D6
loc_12898:
	// 4514 
cs=0x41e;eip=0x0000d8; 	S(OUT(0x42, al));	// 6528                  out     42h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:00D8
cs=0x41e;eip=0x0000da; 	J({;});	// 6529                  jmp     short $+2 ;~ 041E:00DA
loc_1289c:
	// 4515 
cs=0x41e;eip=0x0000dc; 	X(*(dw*)(&_unk_11c93) = 0;);	// 6533                  mov     word ptr ds:_unk_11C93, 0 ;~ 041E:00DC
cs=0x41e;eip=0x0000e2; 	T(cx = 0x10;);	// 6534                  mov     cx, 10h ;~ 041E:00E2
loc_128a5:
	// 4516 
cs=0x41e;eip=0x0000e5; 	J(CALL(sub_1285d,0));	// 6537                  call    sub_1285D ;~ 041E:00E5
cs=0x41e;eip=0x0000e8; 	X(ADD(*(dw*)(&_unk_11c93), bx));	// 6538                  add     word ptr ds:_unk_11C93, bx ;~ 041E:00E8
cs=0x41e;eip=0x0000ec; 	J(LOOP(loc_128a5));	// 6539                  loop    loc_128A5 ;~ 041E:00EC
cs=0x41e;eip=0x0000ee; 	T(bx = *(dw*)(&_unk_11c93););	// 6540                  mov     bx, word ptr ds:_unk_11C93 ;~ 041E:00EE
cs=0x41e;eip=0x0000f2; 	T(SHR(bx, 1));	// 6541                  shr     bx, 1 ;~ 041E:00F2
cs=0x41e;eip=0x0000f4; 	T(SHR(bx, 1));	// 6542                  shr     bx, 1 ;~ 041E:00F4
cs=0x41e;eip=0x0000f6; 	T(SHR(bx, 1));	// 6543                  shr     bx, 1 ;~ 041E:00F6
cs=0x41e;eip=0x0000f8; 	T(SHR(bx, 1));	// 6544                  shr     bx, 1 ;~ 041E:00F8
cs=0x41e;eip=0x0000fa; 	T(CMP(bx, 0x0A28));	// 6545                  cmp     bx, 0A28h ;~ 041E:00FA
cs=0x41e;eip=0x0000fe; 	J(JLE(loc_128c3));	// 6546                  jle     short loc_128C3 ;~ 041E:00FE
cs=0x41e;eip=0x000100; 	T(bx = 0x0A28;);	// 6547                  mov     bx, 0A28h ;~ 041E:0100
loc_128c3:
	// 4517 
cs=0x41e;eip=0x000103; 	T(dx = 0;);	// 6550                  mov     dx, 0 ;~ 041E:0103
cs=0x41e;eip=0x000106; 	T(ax = 0x5140;);	// 6551                  mov     ax, 5140h ;~ 041E:0106
cs=0x41e;eip=0x000109; 	T(DIV2(bx));	// 6552                  div     bx ;~ 041E:0109
cs=0x41e;eip=0x00010b; 	T(INC(ax));	// 6553                  inc     ax ;~ 041E:010B
cs=0x41e;eip=0x00010c; 	T(ah = 0;);	// 6554                  mov     ah, 0 ;~ 041E:010C
cs=0x41e;eip=0x00010e; 	X(word_1280d = ax;);	// 6555                  mov     cs:word_1280D, ax ;~ 041E:010E
cs=0x41e;eip=0x000112; 	T(SHR(ax, 1));	// 6556                  shr     ax, 1 ;~ 041E:0112
cs=0x41e;eip=0x000114; 	T(SHR(ax, 1));	// 6557                  shr     ax, 1 ;~ 041E:0114
cs=0x41e;eip=0x000116; 	T(SHR(ax, 1));	// 6558                  shr     ax, 1 ;~ 041E:0116
cs=0x41e;eip=0x000118; 	T(INC(ax));	// 6559                  inc     ax ;~ 041E:0118
cs=0x41e;eip=0x000119; 	T(ah = 0;);	// 6560                  mov     ah, 0 ;~ 041E:0119
cs=0x41e;eip=0x00011b; 	X(word_1280f = ax;);	// 6561                  mov     cs:word_1280F, ax ;~ 041E:011B
cs=0x41e;eip=0x00011f; 	T(al = byte_11c96;);	// 6562                  mov     al, ds:byte_11C96 ;~ 041E:011F
cs=0x41e;eip=0x000122; 	S(OUT(0x61, al));	// 6563                  out     61h, al         ; PC/XT PPI port B bits: ;~ 041E:0122
cs=0x41e;eip=0x000124; 	J(RETN(0));	// 6571                  retn ;~ 041E:0124

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_12892: 	goto loc_12892;
        case m2c::kloc_12898: 	goto loc_12898;
        case m2c::kloc_1289c: 	goto loc_1289c;
        case m2c::kloc_128a5: 	goto loc_128a5;
        case m2c::kloc_128c3: 	goto loc_128c3;
        case m2c::ksub_12881: 	goto sub_12881;
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
sub_128e5:
	// 6578 
cs=0x41e;eip=0x000125; 	T(al = 0x0B6;);	// 6579                  mov     al, 0B6h ;~ 041E:0125
cs=0x41e;eip=0x000127; 	S(OUT(0x43, al));	// 6580                  out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:0127
cs=0x41e;eip=0x000129; 	T(XOR(ax, ax));	// 6581                  xor     ax, ax ;~ 041E:0129
cs=0x41e;eip=0x00012b; 	S(OUT(0x42, al));	// 6582                  out     42h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:012B
cs=0x41e;eip=0x00012d; 	T(al = ah;);	// 6583                  mov     al, ah ;~ 041E:012D
cs=0x41e;eip=0x00012f; 	S(OUT(0x42, al));	// 6584                  out     42h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:012F
cs=0x41e;eip=0x000131; 	J(CALL(sub_12844,0));	// 6585                  call    sub_12844 ;~ 041E:0131
cs=0x41e;eip=0x000134; 	J(CALL(sub_12881,0));	// 6586                  call    sub_12881 ;~ 041E:0134
cs=0x41e;eip=0x000137; 	T(bl = 0x94;);	// 6587                  mov     bl, 94h ;~ 041E:0137
cs=0x41e;eip=0x000139; 	T(al = 0x0A5;);	// 6588                  mov     al, 0A5h ;~ 041E:0139
cs=0x41e;eip=0x00013b; 	X(*(dw*)(&_unk_11c99) = 0;);	// 6589                  mov     word ptr ds:_unk_11C99, 0 ;~ 041E:013B
cs=0x41e;eip=0x000141; 	J(CALL(sub_12f38,0));	// 6590                  call    sub_12F38 ;~ 041E:0141
cs=0x41e;eip=0x000144; 	X(*(dw*)(&_unk_11c99) = 0;);	// 6591                  mov     word ptr ds:_unk_11C99, 0 ;~ 041E:0144
cs=0x41e;eip=0x00014a; 	T(dx = 0x43;);	// 6592                  mov     dx, 43h ; 'C' ;~ 041E:014A
cs=0x41e;eip=0x00014d; 	T(al = 0x80;);	// 6593                  mov     al, 80h ;~ 041E:014D
cs=0x41e;eip=0x00014f; 	S(OUT(dx, al));	// 6594                  out     dx, al          ; Timer 8253-5 (AT: 8254.2). ;~ 041E:014F
cs=0x41e;eip=0x000150; 	J({;});	// 6595                  jmp     short $+2 ;~ 041E:0150
loc_12912:
	// 4518 
cs=0x41e;eip=0x000152; 	S(IN(al, 0x42));	// 6599                  in      al, 42h         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:0152
cs=0x41e;eip=0x000154; 	T(ah = al;);	// 6600                  mov     ah, al ;~ 041E:0154
cs=0x41e;eip=0x000156; 	J({;});	// 6601                  jmp     short $+2 ;~ 041E:0156
loc_12918:
	// 4519 
cs=0x41e;eip=0x000158; 	T(al = 0x80;);	// 6605                  mov     al, 80h ;~ 041E:0158
cs=0x41e;eip=0x00015a; 	S(OUT(dx, al));	// 6606                  out     dx, al          ; Timer 8253-5 (AT: 8254.2). ;~ 041E:015A
cs=0x41e;eip=0x00015b; 	J({;});	// 6607                  jmp     short $+2 ;~ 041E:015B
loc_1291d:
	// 4520 
cs=0x41e;eip=0x00015d; 	S(IN(al, 0x42));	// 6611                  in      al, 42h         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:015D
cs=0x41e;eip=0x00015f; 	T(CMP(ah, al));	// 6612                  cmp     ah, al ;~ 041E:015F
cs=0x41e;eip=0x000161; 	J(JNZ(loc_1292e));	// 6613                  jnz     short loc_1292E ;~ 041E:0161
cs=0x41e;eip=0x000163; 	T(ax = 0x9090;);	// 6614                  mov     ax, 9090h ;~ 041E:0163
cs=0x41e;eip=0x000166; 	X(MOV(*(dw*)(raddr(cs,m2c::kloc_12e33)), ax));	// 6615                  mov     word ptr cs:loc_12E33, ax ;~ 041E:0166
cs=0x41e;eip=0x00016a; 	X(MOV(*(dw*)(raddr(cs,m2c::kloc_12f13)), ax));	// 6616                  mov     word ptr cs:loc_12F13, ax ;~ 041E:016A
loc_1292e:
	// 4521 
cs=0x41e;eip=0x00016e; 	J(CALL(sub_12e41,0));	// 6619                  call    sub_12E41 ;~ 041E:016E
cs=0x41e;eip=0x000171; 	T(al = 4;);	// 6620                  mov     al, 4 ;~ 041E:0171
cs=0x41e;eip=0x000173; 	T(bl = 0x60;);	// 6621                  mov     bl, 60h ; '`' ;~ 041E:0173
cs=0x41e;eip=0x000175; 	J(CALL(sub_12a3b,0));	// 6622                  call    sub_12A3B ;~ 041E:0175
cs=0x41e;eip=0x000178; 	T(bl = 0x80;);	// 6623                  mov     bl, 80h ;~ 041E:0178
cs=0x41e;eip=0x00017a; 	J(CALL(sub_12a3b,0));	// 6624                  call    sub_12A3B ;~ 041E:017A
cs=0x41e;eip=0x00017d; 	T(dx = 0x388;);	// 6625                  mov     dx, 388h ;~ 041E:017D
cs=0x41e;eip=0x000180; 	S(IN(al, dx));	// 6626                  in      al, dx ;~ 041E:0180
cs=0x41e;eip=0x000181; 	X(PUSH(ax));	// 6627                  push    ax ;~ 041E:0181
cs=0x41e;eip=0x000182; 	T(al = 2;);	// 6628                  mov     al, 2 ;~ 041E:0182
cs=0x41e;eip=0x000184; 	T(bl = 0x0FF;);	// 6629                  mov     bl, 0FFh ;~ 041E:0184
cs=0x41e;eip=0x000186; 	J(CALL(sub_12a3b,0));	// 6630                  call    sub_12A3B ;~ 041E:0186
cs=0x41e;eip=0x000189; 	T(al = 4;);	// 6631                  mov     al, 4 ;~ 041E:0189
cs=0x41e;eip=0x00018b; 	T(bl = 0x21;);	// 6632                  mov     bl, 21h ; '!' ;~ 041E:018B
cs=0x41e;eip=0x00018d; 	J(CALL(sub_12a3b,0));	// 6633                  call    sub_12A3B ;~ 041E:018D
cs=0x41e;eip=0x000190; 	T(cx = 0x0C8;);	// 6634                  mov     cx, 0C8h ;~ 041E:0190
cs=0x41e;eip=0x000193; 	T(dx = 0x388;);	// 6635                  mov     dx, 388h ;~ 041E:0193
loc_12956:
	// 4522 
cs=0x41e;eip=0x000196; 	S(IN(al, dx));	// 6638                  in      al, dx ;~ 041E:0196
cs=0x41e;eip=0x000197; 	J(LOOP(loc_12956));	// 6639                  loop    loc_12956 ;~ 041E:0197
cs=0x41e;eip=0x000199; 	X(PUSH(ax));	// 6640                  push    ax ;~ 041E:0199
cs=0x41e;eip=0x00019a; 	T(al = 4;);	// 6641                  mov     al, 4 ;~ 041E:019A
cs=0x41e;eip=0x00019c; 	T(bl = 0x60;);	// 6642                  mov     bl, 60h ; '`' ;~ 041E:019C
cs=0x41e;eip=0x00019e; 	J(CALL(sub_12a3b,0));	// 6643                  call    sub_12A3B ;~ 041E:019E
cs=0x41e;eip=0x0001a1; 	T(bl = 0x80;);	// 6644                  mov     bl, 80h ;~ 041E:01A1
cs=0x41e;eip=0x0001a3; 	J(CALL(sub_12a3b,0));	// 6645                  call    sub_12A3B ;~ 041E:01A3
cs=0x41e;eip=0x0001a6; 	X(POP(ax));	// 6646                  pop     ax ;~ 041E:01A6
cs=0x41e;eip=0x0001a7; 	X(POP(bx));	// 6647                  pop     bx ;~ 041E:01A7
cs=0x41e;eip=0x0001a8; 	T(dx = 0;);	// 6648                  mov     dx, 0 ;~ 041E:01A8
cs=0x41e;eip=0x0001ab; 	T(AND(al, 0x0E0));	// 6649                  and     al, 0E0h ;~ 041E:01AB
cs=0x41e;eip=0x0001ad; 	T(CMP(al, 0x0C0));	// 6650                  cmp     al, 0C0h ;~ 041E:01AD
cs=0x41e;eip=0x0001af; 	J(JNZ(loc_1297d));	// 6651                  jnz     short loc_1297D ;~ 041E:01AF
cs=0x41e;eip=0x0001b1; 	T(AND(bl, 0x0E0));	// 6652                  and     bl, 0E0h ;~ 041E:01B1
cs=0x41e;eip=0x0001b4; 	T(CMP(bl, 0));	// 6653                  cmp     bl, 0 ;~ 041E:01B4
cs=0x41e;eip=0x0001b7; 	J(JNZ(loc_1297d));	// 6654                  jnz     short loc_1297D ;~ 041E:01B7
cs=0x41e;eip=0x0001b9; 	J(CALL(sub_1298e,0));	// 6655                  call    sub_1298E ;~ 041E:01B9
cs=0x41e;eip=0x0001bc; 	J(RETN(0));	// 6656                  retn ;~ 041E:01BC
loc_1297d:
	// 4523 
cs=0x41e;eip=0x0001bd; 	T(ax = 3;);	// 6661                  mov     ax, 3 ;~ 041E:01BD
cs=0x41e;eip=0x0001c0; 	S(_INT(0x10));	// 6662                  int     10h             ; - VIDEO - SET VIDEO MODE ;~ 041E:01C0
cs=0x41e;eip=0x0001c2; 	T(dx = 0x23C;);	// 6664                  mov     dx, 23Ch ;~ 041E:01C2
cs=0x41e;eip=0x0001c5; 	T(ah = 9;);	// 6665                  mov     ah, 9 ;~ 041E:01C5
cs=0x41e;eip=0x0001c7; 	S(_INT(0x21));	// 6666                  int     21h             ; DOS - PRINT STRING ;~ 041E:01C7
cs=0x41e;eip=0x0001c9; 	T(ax = 0x4C00;);	// 6668                  mov     ax, 4C00h ;~ 041E:01C9
cs=0x41e;eip=0x0001cc; 	S(_INT(0x21));	// 6669                  int     21h             ; DOS - 2+ - QUIT WITH EXIT CODE (EXIT) ;~ 041E:01CC
sub_1298e:
	// 6676 
cs=0x41e;eip=0x0001ce; 	T(ax = 0;);	// 6678                  mov     ax, 0 ;~ 041E:01CE
cs=0x41e;eip=0x0001d1; 	X(byte_125ca = al;);	// 6679                  mov     ds:byte_125CA, al ;~ 041E:01D1
cs=0x41e;eip=0x0001d4; 	X(byte_12658 = al;);	// 6680                  mov     ds:byte_12658, al ;~ 041E:01D4
cs=0x41e;eip=0x0001d7; 	X(byte_12659 = al;);	// 6681                  mov     ds:byte_12659, al ;~ 041E:01D7
cs=0x41e;eip=0x0001da; 	X(*(dw*)(&_unk_125c6) = ax;);	// 6682                  mov     word ptr ds:_unk_125C6, ax ;~ 041E:01DA
cs=0x41e;eip=0x0001dd; 	X(*(dw*)(&_unk_125c8) = ax;);	// 6683                  mov     word ptr ds:_unk_125C8, ax ;~ 041E:01DD
cs=0x41e;eip=0x0001e0; 	T(bx = offset(seg001,byte_125cc)-offset(seg001,__af15iiadlib3149));	// 6684                  lea     bx, byte_125CC - __aF15IiAdlib3149 ; "F15 II AdLib 3-14-91" ;~ 041E:01E0
cs=0x41e;eip=0x0001e4; 	X(MOV(*(raddr(ds,bx)), al));	// 6685                  mov     [bx], al ;~ 041E:01E4
cs=0x41e;eip=0x0001e6; 	X(MOV(*(raddr(ds,bx+1)), al));	// 6686                  mov     [bx+1], al ;~ 041E:01E6
cs=0x41e;eip=0x0001e9; 	X(MOV(*(raddr(ds,bx+2)), al));	// 6687                  mov     [bx+2], al ;~ 041E:01E9
cs=0x41e;eip=0x0001ec; 	T(bx = offset(seg001,byte_125e0)-offset(seg001,__af15iiadlib3149));	// 6688                  lea     bx, byte_125E0 - __aF15IiAdlib3149 ; "F15 II AdLib 3-14-91" ;~ 041E:01EC
cs=0x41e;eip=0x0001f0; 	X(MOV(*(raddr(ds,bx)), al));	// 6689                  mov     [bx], al ;~ 041E:01F0
cs=0x41e;eip=0x0001f2; 	X(MOV(*(raddr(ds,bx+1)), al));	// 6690                  mov     [bx+1], al ;~ 041E:01F2
cs=0x41e;eip=0x0001f5; 	X(MOV(*(raddr(ds,bx+2)), al));	// 6691                  mov     [bx+2], al ;~ 041E:01F5
cs=0x41e;eip=0x0001f8; 	T(bx = offset(seg001,byte_125f4)-offset(seg001,__af15iiadlib3149));	// 6692                  lea     bx, byte_125F4 - __aF15IiAdlib3149 ; "F15 II AdLib 3-14-91" ;~ 041E:01F8
cs=0x41e;eip=0x0001fc; 	X(MOV(*(raddr(ds,bx)), al));	// 6693                  mov     [bx], al ;~ 041E:01FC
cs=0x41e;eip=0x0001fe; 	X(MOV(*(raddr(ds,bx+1)), al));	// 6694                  mov     [bx+1], al ;~ 041E:01FE
cs=0x41e;eip=0x000201; 	X(MOV(*(raddr(ds,bx+2)), al));	// 6695                  mov     [bx+2], al ;~ 041E:0201
cs=0x41e;eip=0x000204; 	T(bx = offset(seg001,byte_12608)-offset(seg001,__af15iiadlib3149));	// 6696                  lea     bx, byte_12608 - __aF15IiAdlib3149 ; "F15 II AdLib 3-14-91" ;~ 041E:0204
cs=0x41e;eip=0x000208; 	X(MOV(*(raddr(ds,bx)), al));	// 6697                  mov     [bx], al ;~ 041E:0208
cs=0x41e;eip=0x00020a; 	X(MOV(*(raddr(ds,bx+1)), al));	// 6698                  mov     [bx+1], al ;~ 041E:020A
cs=0x41e;eip=0x00020d; 	X(MOV(*(raddr(ds,bx+2)), al));	// 6699                  mov     [bx+2], al ;~ 041E:020D
cs=0x41e;eip=0x000210; 	T(bx = offset(seg001,byte_1261c)-offset(seg001,__af15iiadlib3149));	// 6700                  lea     bx, byte_1261C - __aF15IiAdlib3149 ; "F15 II AdLib 3-14-91" ;~ 041E:0210
cs=0x41e;eip=0x000214; 	X(MOV(*(raddr(ds,bx)), al));	// 6701                  mov     [bx], al ;~ 041E:0214
cs=0x41e;eip=0x000216; 	X(MOV(*(raddr(ds,bx+1)), al));	// 6702                  mov     [bx+1], al ;~ 041E:0216
cs=0x41e;eip=0x000219; 	X(MOV(*(raddr(ds,bx+2)), al));	// 6703                  mov     [bx+2], al ;~ 041E:0219
cs=0x41e;eip=0x00021c; 	T(bx = offset(seg001,byte_12630)-offset(seg001,__af15iiadlib3149));	// 6704                  lea     bx, byte_12630 - __aF15IiAdlib3149 ; "F15 II AdLib 3-14-91" ;~ 041E:021C
cs=0x41e;eip=0x000220; 	X(MOV(*(raddr(ds,bx)), al));	// 6705                  mov     [bx], al ;~ 041E:0220
cs=0x41e;eip=0x000222; 	X(MOV(*(raddr(ds,bx+1)), al));	// 6706                  mov     [bx+1], al ;~ 041E:0222
cs=0x41e;eip=0x000225; 	X(MOV(*(raddr(ds,bx+2)), al));	// 6707                  mov     [bx+2], al ;~ 041E:0225
cs=0x41e;eip=0x000228; 	X(*(dw*)(&_unk_11cae) = ax;);	// 6708                  mov     word ptr ds:_unk_11CAE, ax ;~ 041E:0228
cs=0x41e;eip=0x00022b; 	X(*(dw*)(&_unk_11cb0) = ax;);	// 6709                  mov     word ptr ds:_unk_11CB0, ax ;~ 041E:022B
cs=0x41e;eip=0x00022e; 	X(byte_11cb6 = al;);	// 6710                  mov     ds:byte_11CB6, al ;~ 041E:022E
cs=0x41e;eip=0x000231; 	X(byte_11cb7 = al;);	// 6711                  mov     ds:byte_11CB7, al ;~ 041E:0231
cs=0x41e;eip=0x000234; 	X(byte_125ca = 0x0FF;);	// 6712                  mov     ds:byte_125CA, 0FFh ;~ 041E:0234
cs=0x41e;eip=0x000239; 	T(al = 0x0B1;);	// 6713                  mov     al, 0B1h ;~ 041E:0239
cs=0x41e;eip=0x00023b; 	T(bl = 0;);	// 6714                  mov     bl, 0 ;~ 041E:023B
cs=0x41e;eip=0x00023d; 	J(CALL(sub_12a3b,0));	// 6715                  call    sub_12A3B ;~ 041E:023D
cs=0x41e;eip=0x000240; 	T(al = 0x0B2;);	// 6716                  mov     al, 0B2h ;~ 041E:0240
cs=0x41e;eip=0x000242; 	T(bl = 0;);	// 6717                  mov     bl, 0 ;~ 041E:0242
cs=0x41e;eip=0x000244; 	J(CALL(sub_12a3b,0));	// 6718                  call    sub_12A3B ;~ 041E:0244
cs=0x41e;eip=0x000247; 	T(al = 0x84;);	// 6719                  mov     al, 84h ;~ 041E:0247
cs=0x41e;eip=0x000249; 	T(bl = 0x0F;);	// 6720                  mov     bl, 0Fh ;~ 041E:0249
cs=0x41e;eip=0x00024b; 	J(CALL(sub_12a3b,0));	// 6721                  call    sub_12A3B ;~ 041E:024B
cs=0x41e;eip=0x00024e; 	T(al = 0x85;);	// 6722                  mov     al, 85h ;~ 041E:024E
cs=0x41e;eip=0x000250; 	T(bl = 0x0F;);	// 6723                  mov     bl, 0Fh ;~ 041E:0250
cs=0x41e;eip=0x000252; 	J(CALL(sub_12a3b,0));	// 6724                  call    sub_12A3B ;~ 041E:0252
cs=0x41e;eip=0x000255; 	J(RETN(0));	// 6725                  retn ;~ 041E:0255
sub_12e25:
	// 7623 
cs=0x41e;eip=0x000665; 	J(CALL(sub_12e67,0));	// 7624                  call    sub_12E67 ;~ 041E:0665
cs=0x41e;eip=0x000668; 	T(bl = 0x94;);	// 7625                  mov     bl, 94h ;~ 041E:0668
cs=0x41e;eip=0x00066a; 	T(al = 0x0A5;);	// 7626                  mov     al, 0A5h ;~ 041E:066A
cs=0x41e;eip=0x00066c; 	J(CALL(sub_12f38,0));	// 7627                  call    sub_12F38 ;~ 041E:066C
cs=0x41e;eip=0x00066f; 	T(ah = 0x0FF;);	// 7628                  mov     ah, 0FFh ;~ 041E:066F
loc_12e31:
	// 4539 
cs=0x41e;eip=0x000671; 	T(al = 0x80;);	// 7631                  mov     al, 80h ;~ 041E:0671
loc_12e33:
	// 4540 
cs=0x41e;eip=0x000673; 	S(OUT(0x43, al));	// 7634                  out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:0673
cs=0x41e;eip=0x000675; 	J({;});	// 7635                  jmp     short $+2 ;~ 041E:0675
loc_12e37:
	// 4541 
cs=0x41e;eip=0x000677; 	S(IN(al, 0x42));	// 7639                  in      al, 42h         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:0677
cs=0x41e;eip=0x000679; 	T(CMP(ah, al));	// 7640                  cmp     ah, al ;~ 041E:0679
cs=0x41e;eip=0x00067b; 	T(ah = al;);	// 7641                  mov     ah, al ;~ 041E:067B
cs=0x41e;eip=0x00067d; 	J(JNC(loc_12e31));	// 7642                  jnb     short loc_12E31 ;~ 041E:067D
cs=0x41e;eip=0x00067f; 	T(CLI);	// 7643                  cli ;~ 041E:067F
cs=0x41e;eip=0x000680; 	J(RETN(0));	// 7644                  retn ;~ 041E:0680
sub_12f09:
	// 7767 
cs=0x41e;eip=0x000749; 	X(PUSH(ds));	// 7768                  push    ds ;~ 041E:0749
cs=0x41e;eip=0x00074a; 	T(ax = *(dw*)(&_unk_11c97););	// 7769                  mov     ax, word ptr ds:_unk_11C97 ;~ 041E:074A
cs=0x41e;eip=0x00074d; 	T(ds = ax;);	// 7770                  mov     ds, ax ;~ 041E:074D
loc_12f0f:
	// 4543 
cs=0x41e;eip=0x00074f; 	T(ah = 0x0FF;);	// 7774                  mov     ah, 0FFh ;~ 041E:074F
loc_12f11:
	// 4544 
cs=0x41e;eip=0x000751; 	T(al = 0x80;);	// 7777                  mov     al, 80h ;~ 041E:0751
loc_12f13:
	// 4545 
cs=0x41e;eip=0x000753; 	S(OUT(0x43, al));	// 7780                  out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:0753
cs=0x41e;eip=0x000755; 	J({;});	// 7781                  jmp     short $+2 ;~ 041E:0755
loc_12f17:
	// 4546 
cs=0x41e;eip=0x000757; 	S(IN(al, 0x42));	// 7785                  in      al, 42h         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:0757
cs=0x41e;eip=0x000759; 	T(CMP(ah, al));	// 7786                  cmp     ah, al ;~ 041E:0759
cs=0x41e;eip=0x00075b; 	T(ah = al;);	// 7787                  mov     ah, al ;~ 041E:075B
cs=0x41e;eip=0x00075d; 	J(JNC(loc_12f11));	// 7788                  jnb     short loc_12F11 ;~ 041E:075D
cs=0x41e;eip=0x00075f; 	T(XOR(bh, bh));	// 7789                  xor     bh, bh ;~ 041E:075F
cs=0x41e;eip=0x000761; 	T(MOV(bl, *(raddr(ds,si))));	// 7790                  mov     bl, [si] ;~ 041E:0761
cs=0x41e;eip=0x000763; 	T(SHR(bx, 1));	// 7791                  shr     bx, 1 ;~ 041E:0763
cs=0x41e;eip=0x000765; 	T(SHR(bx, 1));	// 7792                  shr     bx, 1 ;~ 041E:0765
cs=0x41e;eip=0x000767; 	T(MOV(bl, *(raddr(cs,bx+0x0D))));	// 7793                  mov     bl, cs:[bx+0Dh] ;~ 041E:0767
cs=0x41e;eip=0x00076c; 	T(al = 0x43;);	// 7794                  mov     al, 43h ; 'C' ;~ 041E:076C
cs=0x41e;eip=0x00076e; 	J(CALL(sub_12a45,0));	// 7795                  call    sub_12A45 ;~ 041E:076E
cs=0x41e;eip=0x000771; 	T(INC(si));	// 7796                  inc     si ;~ 041E:0771
cs=0x41e;eip=0x000772; 	T(CMP(si, di));	// 7797                  cmp     si, di ;~ 041E:0772
cs=0x41e;eip=0x000774; 	J(JNZ(loc_12f0f));	// 7798                  jnz     short loc_12F0F ;~ 041E:0774
cs=0x41e;eip=0x000776; 	X(POP(ds));	// 7799                  pop     ds ;~ 041E:0776
cs=0x41e;eip=0x000777; 	J(RETN(0));	// 7800                  retn ;~ 041E:0777

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_12912: 	goto loc_12912;
        case m2c::kloc_12918: 	goto loc_12918;
        case m2c::kloc_1291d: 	goto loc_1291d;
        case m2c::kloc_1292e: 	goto loc_1292e;
        case m2c::kloc_12956: 	goto loc_12956;
        case m2c::kloc_1297d: 	goto loc_1297d;
        case m2c::kloc_12e31: 	goto loc_12e31;
        case m2c::kloc_12e33: 	goto loc_12e33;
        case m2c::kloc_12e37: 	goto loc_12e37;
        case m2c::kloc_12f0f: 	goto loc_12f0f;
        case m2c::kloc_12f11: 	goto loc_12f11;
        case m2c::kloc_12f13: 	goto loc_12f13;
        case m2c::kloc_12f17: 	goto loc_12f17;
        case m2c::ksub_128e5: 	goto sub_128e5;
        case m2c::ksub_1298e: 	goto sub_1298e;
        case m2c::ksub_12e25: 	goto sub_12e25;
        case m2c::ksub_12f09: 	goto sub_12f09;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12a16(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12a16:
    _begin:
cs=0x41e;eip=0x000256; 	T(bx = 0;);	// 6733                  mov     bx, 0 ;~ 041E:0256
cs=0x41e;eip=0x000259; 	T(ax = 0x0FF;);	// 6734                  mov     ax, 0FFh ;~ 041E:0259
loc_12a1c:
	// 4524 
cs=0x41e;eip=0x00025c; 	X(PUSH(ax));	// 6737                  push    ax ;~ 041E:025C
cs=0x41e;eip=0x00025d; 	J(CALL(sub_12a3b,0));	// 6738                  call    sub_12A3B ;~ 041E:025D
cs=0x41e;eip=0x000260; 	X(POP(ax));	// 6739                  pop     ax ;~ 041E:0260
cs=0x41e;eip=0x000261; 	T(DEC(ax));	// 6740                  dec     ax ;~ 041E:0261
cs=0x41e;eip=0x000262; 	J(JNZ(loc_12a1c));	// 6741                  jnz     short loc_12A1C ;~ 041E:0262
cs=0x41e;eip=0x000264; 	T(al = 1;);	// 6742                  mov     al, 1 ;~ 041E:0264
cs=0x41e;eip=0x000266; 	T(bl = 0x20;);	// 6743                  mov     bl, 20h ; ' ' ;~ 041E:0266
cs=0x41e;eip=0x000268; 	J(CALL(sub_12a3b,0));	// 6744                  call    sub_12A3B ;~ 041E:0268
cs=0x41e;eip=0x00026b; 	T(al = 0x0BD;);	// 6745                  mov     al, 0BDh ;~ 041E:026B
cs=0x41e;eip=0x00026d; 	J(CALL(sub_12a3b,0));	// 6746                  call    sub_12A3B ;~ 041E:026D
cs=0x41e;eip=0x000270; 	J(RETN(0));	// 6747                  retn ;~ 041E:0270

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_12a1c: 	goto loc_12a1c;
        case m2c::ksub_12a16: 	goto sub_12a16;
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
sub_12a31:
	// 6756 
#undef arg_0
#define arg_0 4
	// 6759 arg_0           = word ptr  4 ;~ 041E:0271
#undef arg_2
#define arg_2 6
	// 6760 arg_2           = byte ptr  6 ;~ 041E:0271
cs=0x41e;eip=0x000271; 	X(PUSH(bp));	// 6762                  push    bp ;~ 041E:0271
cs=0x41e;eip=0x000272; 	T(bp = sp;);	// 6763                  mov     bp, sp ;~ 041E:0272
cs=0x41e;eip=0x000274; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 6764                  mov     ax, [bp+arg_0] ;~ 041E:0274
cs=0x41e;eip=0x000277; 	T(MOV(bl, *(raddr(ss,bp+arg_2))));	// 6765                  mov     bl, [bp+arg_2] ;~ 041E:0277
cs=0x41e;eip=0x00027a; 	X(POP(bp));	// 6766                  pop     bp ;~ 041E:027A
sub_12a3b:
	// 6773 
cs=0x41e;eip=0x00027b; 	X(PUSH(di));	// 6775                  push    di ;~ 041E:027B
cs=0x41e;eip=0x00027c; 	T(ah = 0;);	// 6776                  mov     ah, 0 ;~ 041E:027C
cs=0x41e;eip=0x00027e; 	T(di = ax;);	// 6777                  mov     di, ax ;~ 041E:027E
cs=0x41e;eip=0x000280; 	X(MOV(*(raddr(ds,di+0x0C32)), bl));	// 6778                  mov     [di+0C32h], bl ;~ 041E:0280
cs=0x41e;eip=0x000284; 	X(POP(di));	// 6779                  pop     di ;~ 041E:0284
sub_12a45:
	// 6786 
cs=0x41e;eip=0x000285; 	T(dx = 0x388;);	// 6787                  mov     dx, 388h ;~ 041E:0285
cs=0x41e;eip=0x000288; 	T(cx = word_1280d;);	// 6788                  mov     cx, cs:word_1280D ;~ 041E:0288
loc_12a4d:
	// 4525 
cs=0x41e;eip=0x00028d; 	J(LOOP(loc_12a4d));	// 6791                  loop    loc_12A4D ;~ 041E:028D
cs=0x41e;eip=0x00028f; 	S(OUT(dx, al));	// 6792                  out     dx, al ;~ 041E:028F
cs=0x41e;eip=0x000290; 	T(al = bl;);	// 6793                  mov     al, bl ;~ 041E:0290
cs=0x41e;eip=0x000292; 	T(dx = 0x389;);	// 6794                  mov     dx, 389h ;~ 041E:0292
cs=0x41e;eip=0x000295; 	T(cx = word_1280f;);	// 6795                  mov     cx, cs:word_1280F ;~ 041E:0295
loc_12a5a:
	// 4526 
cs=0x41e;eip=0x00029a; 	J(LOOP(loc_12a5a));	// 6798                  loop    loc_12A5A ;~ 041E:029A
cs=0x41e;eip=0x00029c; 	S(OUT(dx, al));	// 6799                  out     dx, al ;~ 041E:029C
cs=0x41e;eip=0x00029d; 	J(RETN(0));	// 6800                  retn ;~ 041E:029D

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_12a4d: 	goto loc_12a4d;
        case m2c::kloc_12a5a: 	goto loc_12a5a;
        case m2c::ksub_12a31: 	goto sub_12a31;
        case m2c::ksub_12a3b: 	goto sub_12a3b;
        case m2c::ksub_12a45: 	goto sub_12a45;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12a5e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12a5e:
    _begin:
cs=0x41e;eip=0x00029e; 	X(PUSH(ax));	// 6810                  push    ax ;~ 041E:029E
cs=0x41e;eip=0x00029f; 	T(ADD(al, 0x0A0));	// 6811                  add     al, 0A0h ;~ 041E:029F
cs=0x41e;eip=0x0002a1; 	J(CALL(sub_12a3b,0));	// 6812                  call    sub_12A3B ;~ 041E:02A1
cs=0x41e;eip=0x0002a4; 	X(POP(ax));	// 6813                  pop     ax ;~ 041E:02A4
cs=0x41e;eip=0x0002a5; 	T(ADD(al, 0x0B0));	// 6814                  add     al, 0B0h ;~ 041E:02A5
cs=0x41e;eip=0x0002a7; 	T(bl = bh;);	// 6815                  mov     bl, bh ;~ 041E:02A7
cs=0x41e;eip=0x0002a9; 	T(OR(bl, 0x20));	// 6816                  or      bl, 20h ;~ 041E:02A9
cs=0x41e;eip=0x0002ac; 	J(CALL(sub_12a3b,0));	// 6817                  call    sub_12A3B ;~ 041E:02AC
cs=0x41e;eip=0x0002af; 	J(RETN(0));	// 6818                  retn ;~ 041E:02AF

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_12a5e: 	goto sub_12a5e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12b08(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12b08:
    _begin:
cs=0x41e;eip=0x000348; 	T(bx = 0x9248;);	// 6901                  mov     bx, 9248h ;~ 041E:0348
cs=0x41e;eip=0x00034b; 	T(ADD(bx, *(dw*)(&_unk_11cb8)));	// 6902                  add     bx, word ptr ds:_unk_11CB8 ;~ 041E:034B
cs=0x41e;eip=0x00034f; 	T(ROR(bx, 1));	// 6903                  ror     bx, 1 ;~ 041E:034F
cs=0x41e;eip=0x000351; 	T(ROR(bx, 1));	// 6904                  ror     bx, 1 ;~ 041E:0351
cs=0x41e;eip=0x000353; 	T(ROR(bx, 1));	// 6905                  ror     bx, 1 ;~ 041E:0353
cs=0x41e;eip=0x000355; 	X(*(dw*)(&_unk_11cb8) = bx;);	// 6906                  mov     word ptr ds:_unk_11CB8, bx ;~ 041E:0355
cs=0x41e;eip=0x000359; 	T(CMP(byte_12658, 0));	// 6907                  cmp     ds:byte_12658, 0 ;~ 041E:0359
cs=0x41e;eip=0x00035e; 	J(JZ(loc_12b31));	// 6908                  jz      short loc_12B31 ;~ 041E:035E
cs=0x41e;eip=0x000360; 	T(XOR(bx, 0x0FFFF));	// 6909                  xor     bx, 0FFFFh ;~ 041E:0360
cs=0x41e;eip=0x000363; 	T(AND(bx, *(dw*)(&_unk_1265a)));	// 6910                  and     bx, word ptr ds:_unk_1265A ;~ 041E:0363
cs=0x41e;eip=0x000367; 	T(ADD(bx, *(dw*)(&_unk_125c2)));	// 6911                  add     bx, word ptr ds:_unk_125C2 ;~ 041E:0367
cs=0x41e;eip=0x00036b; 	T(al = byte_1265f;);	// 6912                  mov     al, ds:byte_1265F ;~ 041E:036B
cs=0x41e;eip=0x00036e; 	J(CALL(sub_12a5e,0));	// 6913                  call    sub_12A5E ;~ 041E:036E
loc_12b31:
	// 4532 
cs=0x41e;eip=0x000371; 	T(CMP(byte_12659, 0));	// 6916                  cmp     ds:byte_12659, 0 ;~ 041E:0371
cs=0x41e;eip=0x000376; 	J(JZ(locret_12b4a));	// 6917                  jz      short locret_12B4A ;~ 041E:0376
cs=0x41e;eip=0x000378; 	T(bx = *(dw*)(&_unk_11cb8););	// 6918                  mov     bx, word ptr ds:_unk_11CB8 ;~ 041E:0378
cs=0x41e;eip=0x00037c; 	T(AND(bx, word_1265c));	// 6919                  and     bx, ds:word_1265C ;~ 041E:037C
cs=0x41e;eip=0x000380; 	T(ADD(bx, word_125c4));	// 6920                  add     bx, ds:word_125C4 ;~ 041E:0380
cs=0x41e;eip=0x000384; 	T(al = byte_12660;);	// 6921                  mov     al, ds:byte_12660 ;~ 041E:0384
cs=0x41e;eip=0x000387; 	J(CALL(sub_12a5e,0));	// 6922                  call    sub_12A5E ;~ 041E:0387
locret_12b4a:
	// 4533 
cs=0x41e;eip=0x00038a; 	J(RETN(0));	// 6925                  retn ;~ 041E:038A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_12b31: 	goto loc_12b31;
        case m2c::klocret_12b4a: 	goto locret_12b4a;
        case m2c::ksub_12b08: 	goto sub_12b08;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12b4b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12b4b:
    _begin:
cs=0x41e;eip=0x00038b; 	T(CMP(*(dw*)(&_unk_11c8f), 1));	// 6935                  cmp     word ptr ds:_unk_11C8F, 1 ;~ 041E:038B
cs=0x41e;eip=0x000390; 	J(JZ(locret_12b5e));	// 6936                  jz      short locret_12B5E ;~ 041E:0390
cs=0x41e;eip=0x000392; 	X(*(dw*)(&_unk_11c8f) = 1;);	// 6937                  mov     word ptr ds:_unk_11C8F, 1 ;~ 041E:0392
cs=0x41e;eip=0x000398; 	X(*(dw*)(&_unk_11c8d) = 1;);	// 6938                  mov     word ptr ds:_unk_11C8D, 1 ;~ 041E:0398
locret_12b5e:
	// 4534 
cs=0x41e;eip=0x00039e; 	J(RETN(0));	// 6941                  retn ;~ 041E:039E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::klocret_12b5e: 	goto locret_12b5e;
        case m2c::ksub_12b4b: 	goto sub_12b4b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg127c_3b0_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg127c_3b0_proc:
    _begin:
loc_12b70:
	// 4535 
cs=0x41e;eip=0x0003b0; 	T(dl = byte_125ca;);	// 6971                  mov     dl, ds:byte_125CA ;~ 041E:03B0
cs=0x41e;eip=0x0003b4; 	X(PUSH(dx));	// 6972                  push    dx ;~ 041E:03B4
cs=0x41e;eip=0x0003b5; 	X(byte_125ca = 0;);	// 6973                  mov     ds:byte_125CA, 0 ;~ 041E:03B5
cs=0x41e;eip=0x0003ba; 	X(MOV(*(raddr(ds,bx+1)), 0));	// 6974                  mov     byte ptr [bx+1], 0 ;~ 041E:03BA
cs=0x41e;eip=0x0003be; 	X(MOV(*(raddr(ds,bx+9)), 0x0FF));	// 6975                  mov     byte ptr [bx+9], 0FFh ;~ 041E:03BE
cs=0x41e;eip=0x0003c2; 	X(MOV(*(raddr(ds,bx+2)), 0));	// 6976                  mov     byte ptr [bx+2], 0 ;~ 041E:03C2
cs=0x41e;eip=0x0003c6; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), cx));	// 6977                  mov     [bx+0Ah], cx ;~ 041E:03C6
cs=0x41e;eip=0x0003c9; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), 0));	// 6978                  mov     word ptr [bx+0Ch], 0 ;~ 041E:03C9
cs=0x41e;eip=0x0003ce; 	X(MOV(*(dw*)(raddr(ds,bx+0x0E)), 0));	// 6979                  mov     word ptr [bx+0Eh], 0 ;~ 041E:03CE
cs=0x41e;eip=0x0003d3; 	X(MOV(*(dw*)(raddr(ds,bx+0x10)), 0));	// 6980                  mov     word ptr [bx+10h], 0 ;~ 041E:03D3
cs=0x41e;eip=0x0003d8; 	X(MOV(*(raddr(ds,bx+6)), 0));	// 6981                  mov     byte ptr [bx+6], 0 ;~ 041E:03D8
cs=0x41e;eip=0x0003dc; 	X(MOV(*(dw*)(raddr(ds,bx+0x12)), ax));	// 6982                  mov     [bx+12h], ax ;~ 041E:03DC
cs=0x41e;eip=0x0003df; 	X(MOV(*(raddr(ds,bx)), 1));	// 6983                  mov     byte ptr [bx], 1 ;~ 041E:03DF
cs=0x41e;eip=0x0003e2; 	X(POP(dx));	// 6984                  pop     dx ;~ 041E:03E2
cs=0x41e;eip=0x0003e3; 	X(byte_125ca = dl;);	// 6985                  mov     ds:byte_125CA, dl ;~ 041E:03E3
cs=0x41e;eip=0x0003e7; 	J(RETN(0));	// 6986                  retn ;~ 041E:03E7

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg127c_3b0_proc: 	goto seg127c_3b0_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12c73(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12c73:
    _begin:
cs=0x41e;eip=0x0004b3; 	T(bx = *(dw*)(&_unk_11cb8););	// 7201                  mov     bx, word ptr ds:_unk_11CB8 ;~ 041E:04B3
cs=0x41e;eip=0x0004b7; 	T(SHR(bx, 1));	// 7202                  shr     bx, 1 ;~ 041E:04B7
cs=0x41e;eip=0x0004b9; 	T(SHR(bx, 1));	// 7203                  shr     bx, 1 ;~ 041E:04B9
cs=0x41e;eip=0x0004bb; 	T(AND(bx, 6));	// 7204                  and     bx, 6 ;~ 041E:04BB
cs=0x41e;eip=0x0004be; 	T(MOV(cx, *(dw*)(raddr(cs,bx+0x4AB))));	// 7205                  mov     cx, cs:[bx+4ABh] ;~ 041E:04BE
cs=0x41e;eip=0x0004c3; 	T(ax = 0;);	// 7206                  mov     ax, 0 ;~ 041E:04C3
cs=0x41e;eip=0x0004c6; 	T(bx = offset(seg001,byte_125f4)-offset(seg001,__af15iiadlib3149));	// 7207                  lea     bx, byte_125F4 - __aF15IiAdlib3149 ; "F15 II AdLib 3-14-91" ;~ 041E:04C6
cs=0x41e;eip=0x0004ca; 	J(return seg127c_3b0_proc(m2c::kloc_12b70, _state););	// 7208                  jmp     loc_12B70 ;~ 041E:04CA

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_12c73: 	goto sub_12c73;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12cb1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12cb1:
    _begin:
cs=0x41e;eip=0x0004f1; 	T(ax = 0;);	// 7257                  mov     ax, 0 ;~ 041E:04F1
cs=0x41e;eip=0x0004f4; 	T(bx = offset(seg001,byte_125cc)-offset(seg001,__af15iiadlib3149));	// 7258                  lea     bx, byte_125CC - __aF15IiAdlib3149 ; "F15 II AdLib 3-14-91" ;~ 041E:04F4
cs=0x41e;eip=0x0004f8; 	T(cx = offset(seg001,_unk_12218)-offset(seg001,__af15iiadlib3149));	// 7259                  lea     cx, _unk_12218 - __aF15IiAdlib3149 ; "F15 II AdLib 3-14-91" ;~ 041E:04F8
cs=0x41e;eip=0x0004fc; 	J(return seg127c_3b0_proc(m2c::kloc_12b70, _state););	// 7260                  jmp     loc_12B70 ;~ 041E:04FC

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_12cb1: 	goto sub_12cb1;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12cbf(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12cbf:
    _begin:
cs=0x41e;eip=0x0004ff; 	T(ax = 0;);	// 7272                  mov     ax, 0 ;~ 041E:04FF
cs=0x41e;eip=0x000502; 	T(bx = offset(seg001,byte_125cc)-offset(seg001,__af15iiadlib3149));	// 7273                  lea     bx, byte_125CC - __aF15IiAdlib3149 ; "F15 II AdLib 3-14-91" ;~ 041E:0502
cs=0x41e;eip=0x000506; 	T(cx = offset(seg001,_unk_12224)-offset(seg001,__af15iiadlib3149));	// 7274                  lea     cx, _unk_12224 - __aF15IiAdlib3149 ; "F15 II AdLib 3-14-91" ;~ 041E:0506
cs=0x41e;eip=0x00050a; 	J(return seg127c_3b0_proc(m2c::kloc_12b70, _state););	// 7275                  jmp     loc_12B70 ;~ 041E:050A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_12cbf: 	goto sub_12cbf;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12d6f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12d6f:
    _begin:
cs=0x41e;eip=0x0005af; 	T(ax = 0;);	// 7449                  mov     ax, 0 ;~ 041E:05AF
cs=0x41e;eip=0x0005b2; 	T(bx = offset(seg001,byte_125e0)-offset(seg001,__af15iiadlib3149));	// 7450                  lea     bx, byte_125E0 - __aF15IiAdlib3149 ; "F15 II AdLib 3-14-91" ;~ 041E:05B2
cs=0x41e;eip=0x0005b6; 	T(cx = offset(seg001,_unk_12288)-offset(seg001,__af15iiadlib3149));	// 7451                  lea     cx, _unk_12288 - __aF15IiAdlib3149 ; "F15 II AdLib 3-14-91" ;~ 041E:05B6
cs=0x41e;eip=0x0005ba; 	J(return seg127c_3b0_proc(m2c::kloc_12b70, _state););	// 7452                  jmp     loc_12B70 ;~ 041E:05BA

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_12d6f: 	goto sub_12d6f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12dce(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12dce:
    _begin:
cs=0x41e;eip=0x00060e; 	T(CMP(*(dw*)(&_unk_11cae), 0));	// 7543                  cmp     word ptr ds:_unk_11CAE, 0 ;~ 041E:060E
cs=0x41e;eip=0x000613; 	J(JNZ(locret_12dde));	// 7544                  jnz     short locret_12DDE ;~ 041E:0613
cs=0x41e;eip=0x000615; 	T(bx = 0;);	// 7545                  mov     bx, 0 ;~ 041E:0615
cs=0x41e;eip=0x000618; 	T(cx = 0x31F3;);	// 7546                  mov     cx, 31F3h ;~ 041E:0618
cs=0x41e;eip=0x00061b; 	J(JMP(loc_12e0b));	// 7547                  jmp     short loc_12E0B ;~ 041E:061B
locret_12dde:
	// 4536 
cs=0x41e;eip=0x00061e; 	J(RETN(0));	// 7553                  retn ;~ 041E:061E
loc_12e0b:
	// 4537 
cs=0x41e;eip=0x00064b; 	T(ax = 1;);	// 7602                  mov     ax, 1 ;~ 041E:064B
cs=0x41e;eip=0x00064e; 	X(*(dw*)(&_unk_11cac) = ax;);	// 7603                  mov     word ptr ds:_unk_11CAC, ax ;~ 041E:064E
loc_12e11:
	// 4538 
cs=0x41e;eip=0x000651; 	T(CMP(*(dw*)(&_unk_11cac), 0));	// 7606                  cmp     word ptr ds:_unk_11CAC, 0 ;~ 041E:0651
cs=0x41e;eip=0x000656; 	J(JNZ(loc_12e11));	// 7607                  jnz     short loc_12E11 ;~ 041E:0656
cs=0x41e;eip=0x000658; 	X(PUSH(bx));	// 7608                  push    bx ;~ 041E:0658
cs=0x41e;eip=0x000659; 	X(PUSH(cx));	// 7609                  push    cx ;~ 041E:0659
cs=0x41e;eip=0x00065a; 	J(CALL(sub_12e25,0));	// 7610                  call    sub_12E25 ;~ 041E:065A
cs=0x41e;eip=0x00065d; 	X(POP(di));	// 7611                  pop     di ;~ 041E:065D
cs=0x41e;eip=0x00065e; 	X(POP(si));	// 7612                  pop     si ;~ 041E:065E
cs=0x41e;eip=0x00065f; 	J(CALL(sub_12f09,0));	// 7613                  call    sub_12F09 ;~ 041E:065F
cs=0x41e;eip=0x000662; 	J(return sub_12e41(0, _state););	// 7614                  jmp     short sub_12E41 ;~ 041E:0662

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_12e0b: 	goto loc_12e0b;
        case m2c::kloc_12e11: 	goto loc_12e11;
        case m2c::klocret_12dde: 	goto locret_12dde;
        case m2c::ksub_12dce: 	goto sub_12dce;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12e41(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12e41:
    _begin:
cs=0x41e;eip=0x000681; 	T(al = 0x0B0;);	// 7654                  mov     al, 0B0h ;~ 041E:0681
cs=0x41e;eip=0x000683; 	T(bl = 0;);	// 7655                  mov     bl, 0 ;~ 041E:0683
cs=0x41e;eip=0x000692; 	S(OUT(0x21, al));	// 7661                  out     21h, al         ; Interrupt controller, 8259A. ;~ 041E:0692
cs=0x41e;eip=0x000694; 	T(al = byte_11c96;);	// 7662                  mov     al, ds:byte_11C96 ;~ 041E:0694
cs=0x41e;eip=0x000697; 	S(OUT(0x61, al));	// 7663                  out     61h, al         ; PC/XT PPI port B bits: ;~ 041E:0697
cs=0x41e;eip=0x000699; 	T(al = 0x0B6;);	// 7671                  mov     al, 0B6h ;~ 041E:0699
cs=0x41e;eip=0x00069b; 	S(OUT(0x43, al));	// 7672                  out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:069B
cs=0x41e;eip=0x00069d; 	T(XOR(ax, ax));	// 7673                  xor     ax, ax ;~ 041E:069D
cs=0x41e;eip=0x00069f; 	S(OUT(0x42, al));	// 7674                  out     42h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:069F
cs=0x41e;eip=0x0006a1; 	T(al = ah;);	// 7675                  mov     al, ah ;~ 041E:06A1
cs=0x41e;eip=0x0006a3; 	S(OUT(0x42, al));	// 7676                  out     42h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:06A3
cs=0x41e;eip=0x0006a5; 	T(STI);	// 7677                  sti ;~ 041E:06A5
cs=0x41e;eip=0x0006a6; 	J(RETN(0));	// 7678                  retn ;~ 041E:06A6

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_12e41: 	goto sub_12e41;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12e67(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12e67:
    _begin:
cs=0x41e;eip=0x0006a7; 	T(al = 0x20;);	// 7686                  mov     al, 20h ; ' ' ;~ 041E:06A7
cs=0x41e;eip=0x0006a9; 	T(bl = 0x23;);	// 7687                  mov     bl, 23h ; '#' ;~ 041E:06A9
cs=0x41e;eip=0x0006ab; 	J(CALL(sub_12a3b,0));	// 7688                  call    sub_12A3B ;~ 041E:06AB
cs=0x41e;eip=0x0006ae; 	T(al = 0x23;);	// 7689                  mov     al, 23h ; '#' ;~ 041E:06AE
cs=0x41e;eip=0x0006b0; 	T(bl = 0x28;);	// 7690                  mov     bl, 28h ; '(' ;~ 041E:06B0
cs=0x41e;eip=0x0006b2; 	J(CALL(sub_12a3b,0));	// 7691                  call    sub_12A3B ;~ 041E:06B2
cs=0x41e;eip=0x0006b5; 	T(al = 0x40;);	// 7692                  mov     al, 40h ; '@' ;~ 041E:06B5
cs=0x41e;eip=0x0006b7; 	T(bl = 0x3F;);	// 7693                  mov     bl, 3Fh ; '?' ;~ 041E:06B7
cs=0x41e;eip=0x0006b9; 	J(CALL(sub_12a3b,0));	// 7694                  call    sub_12A3B ;~ 041E:06B9
cs=0x41e;eip=0x0006bc; 	T(al = 0x43;);	// 7695                  mov     al, 43h ; 'C' ;~ 041E:06BC
cs=0x41e;eip=0x0006be; 	T(bl = 0x3F;);	// 7696                  mov     bl, 3Fh ; '?' ;~ 041E:06BE
cs=0x41e;eip=0x0006c0; 	J(CALL(sub_12a3b,0));	// 7697                  call    sub_12A3B ;~ 041E:06C0
cs=0x41e;eip=0x0006c3; 	T(al = 0x60;);	// 7698                  mov     al, 60h ; '`' ;~ 041E:06C3
cs=0x41e;eip=0x0006c5; 	T(bl = 0x0AF;);	// 7699                  mov     bl, 0AFh ;~ 041E:06C5
cs=0x41e;eip=0x0006c7; 	J(CALL(sub_12a3b,0));	// 7700                  call    sub_12A3B ;~ 041E:06C7
cs=0x41e;eip=0x0006ca; 	T(al = 0x63;);	// 7701                  mov     al, 63h ; 'c' ;~ 041E:06CA
cs=0x41e;eip=0x0006cc; 	T(bl = 0x0AF;);	// 7702                  mov     bl, 0AFh ;~ 041E:06CC
cs=0x41e;eip=0x0006ce; 	J(CALL(sub_12a3b,0));	// 7703                  call    sub_12A3B ;~ 041E:06CE
cs=0x41e;eip=0x0006d1; 	T(al = 0x80;);	// 7704                  mov     al, 80h ;~ 041E:06D1
cs=0x41e;eip=0x0006d3; 	T(bl = 0x0D;);	// 7705                  mov     bl, 0Dh ;~ 041E:06D3
cs=0x41e;eip=0x0006d5; 	J(CALL(sub_12a3b,0));	// 7706                  call    sub_12A3B ;~ 041E:06D5
cs=0x41e;eip=0x0006d8; 	T(al = 0x83;);	// 7707                  mov     al, 83h ;~ 041E:06D8
cs=0x41e;eip=0x0006da; 	T(bl = 0x0F;);	// 7708                  mov     bl, 0Fh ;~ 041E:06DA
cs=0x41e;eip=0x0006dc; 	J(CALL(sub_12a3b,0));	// 7709                  call    sub_12A3B ;~ 041E:06DC
cs=0x41e;eip=0x0006df; 	T(al = 0x0C0;);	// 7710                  mov     al, 0C0h ;~ 041E:06DF
cs=0x41e;eip=0x0006e1; 	T(bl = 5;);	// 7711                  mov     bl, 5 ;~ 041E:06E1
cs=0x41e;eip=0x0006e3; 	J(CALL(sub_12a3b,0));	// 7712                  call    sub_12A3B ;~ 041E:06E3
cs=0x41e;eip=0x0006e6; 	T(al = 0x0E0;);	// 7713                  mov     al, 0E0h ;~ 041E:06E6
cs=0x41e;eip=0x0006e8; 	T(bl = 0;);	// 7714                  mov     bl, 0 ;~ 041E:06E8
cs=0x41e;eip=0x0006ea; 	J(CALL(sub_12a3b,0));	// 7715                  call    sub_12A3B ;~ 041E:06EA
cs=0x41e;eip=0x0006ed; 	T(al = 0x0E3;);	// 7716                  mov     al, 0E3h ;~ 041E:06ED
cs=0x41e;eip=0x0006ef; 	T(bl = 2;);	// 7717                  mov     bl, 2 ;~ 041E:06EF
cs=0x41e;eip=0x0006f1; 	J(CALL(sub_12a3b,0));	// 7718                  call    sub_12A3B ;~ 041E:06F1
cs=0x41e;eip=0x0006f4; 	T(al = 0x0B0;);	// 7719                  mov     al, 0B0h ;~ 041E:06F4
cs=0x41e;eip=0x0006f6; 	T(bl = 1;);	// 7720                  mov     bl, 1 ;~ 041E:06F6
cs=0x41e;eip=0x0006f8; 	J(CALL(sub_12a3b,0));	// 7721                  call    sub_12A3B ;~ 041E:06F8
cs=0x41e;eip=0x0006fb; 	T(al = 0x0A0;);	// 7722                  mov     al, 0A0h ;~ 041E:06FB
cs=0x41e;eip=0x0006fd; 	T(bl = 0x8F;);	// 7723                  mov     bl, 8Fh ;~ 041E:06FD
cs=0x41e;eip=0x0006ff; 	J(CALL(sub_12a3b,0));	// 7724                  call    sub_12A3B ;~ 041E:06FF
cs=0x41e;eip=0x000702; 	T(al = 0x0B0;);	// 7725                  mov     al, 0B0h ;~ 041E:0702
cs=0x41e;eip=0x000704; 	T(bl = 0x2E;);	// 7726                  mov     bl, 2Eh ; '.' ;~ 041E:0704
cs=0x41e;eip=0x000706; 	J(CALL(sub_12a3b,0));	// 7727                  call    sub_12A3B ;~ 041E:0706
cs=0x41e;eip=0x000709; 	T(CLI);	// 7728                  cli ;~ 041E:0709
cs=0x41e;eip=0x00070a; 	T(al = 0x36;);	// 7729                  mov     al, 36h ; '6' ;~ 041E:070A
cs=0x41e;eip=0x00070c; 	S(OUT(0x43, al));	// 7730                  out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:070C
cs=0x41e;eip=0x00070e; 	T(ax = 0x4C90;);	// 7731                  mov     ax, 4C90h ;~ 041E:070E
cs=0x41e;eip=0x000711; 	S(OUT(0x40, al));	// 7732                  out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:0711
cs=0x41e;eip=0x000713; 	T(al = ah;);	// 7733                  mov     al, ah ;~ 041E:0713
cs=0x41e;eip=0x000715; 	S(OUT(0x40, al));	// 7734                  out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:0715
cs=0x41e;eip=0x000717; 	T(al = 0;);	// 7735                  mov     al, 0 ;~ 041E:0717
cs=0x41e;eip=0x000719; 	S(OUT(0x43, al));	// 7736                  out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:0719
cs=0x41e;eip=0x00071b; 	S(IN(al, 0x40));	// 7737                  in      al, 40h         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:071B
cs=0x41e;eip=0x00071d; 	T(bl = al;);	// 7738                  mov     bl, al ;~ 041E:071D
cs=0x41e;eip=0x00071f; 	S(IN(al, 0x40));	// 7739                  in      al, 40h         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:071F
cs=0x41e;eip=0x000721; 	T(bh = al;);	// 7740                  mov     bh, al ;~ 041E:0721
loc_12ee3:
	// 4542 
cs=0x41e;eip=0x000723; 	T(al = 0;);	// 7743                  mov     al, 0 ;~ 041E:0723
cs=0x41e;eip=0x000725; 	S(OUT(0x43, al));	// 7744                  out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:0725
cs=0x41e;eip=0x000727; 	S(IN(al, 0x40));	// 7745                  in      al, 40h         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:0727
cs=0x41e;eip=0x000729; 	T(cl = al;);	// 7746                  mov     cl, al ;~ 041E:0729
cs=0x41e;eip=0x00072b; 	S(IN(al, 0x40));	// 7747                  in      al, 40h         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:072B
cs=0x41e;eip=0x00072d; 	T(ch = al;);	// 7748                  mov     ch, al ;~ 041E:072D
cs=0x41e;eip=0x00072f; 	T(NEG(cx));	// 7749                  neg     cx ;~ 041E:072F
cs=0x41e;eip=0x000731; 	T(ADD(cx, bx));	// 7750                  add     cx, bx ;~ 041E:0731
cs=0x41e;eip=0x000733; 	T(CMP(cx, 0x952));	// 7751                  cmp     cx, 952h ;~ 041E:0733
cs=0x41e;eip=0x000737; 	J(JC(loc_12ee3));	// 7752                  jb      short loc_12EE3 ;~ 041E:0737
cs=0x41e;eip=0x000739; 	T(al = 0x0B0;);	// 7753                  mov     al, 0B0h ;~ 041E:0739
cs=0x41e;eip=0x00073b; 	T(bl = 0x20;);	// 7754                  mov     bl, 20h ; ' ' ;~ 041E:073B
cs=0x41e;eip=0x00073d; 	J(CALL(sub_12a3b,0));	// 7755                  call    sub_12A3B ;~ 041E:073D
cs=0x41e;eip=0x000740; 	T(al = 0x0A0;);	// 7756                  mov     al, 0A0h ;~ 041E:0740
cs=0x41e;eip=0x000742; 	T(bl = 0;);	// 7757                  mov     bl, 0 ;~ 041E:0742
cs=0x41e;eip=0x000744; 	J(CALL(sub_12a3b,0));	// 7758                  call    sub_12A3B ;~ 041E:0744
cs=0x41e;eip=0x000747; 	T(STI);	// 7759                  sti ;~ 041E:0747
cs=0x41e;eip=0x000748; 	J(RETN(0));	// 7760                  retn ;~ 041E:0748

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_12ee3: 	goto loc_12ee3;
        case m2c::ksub_12e67: 	goto sub_12e67;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12f38(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12f38:
    _begin:
cs=0x41e;eip=0x000778; 	X(PUSH(ax));	// 7810                  push    ax ;~ 041E:0778
cs=0x41e;eip=0x000779; 	T(al = bl;);	// 7811                  mov     al, bl ;~ 041E:0779
cs=0x41e;eip=0x00077b; 	S(OUT(0x43, al));	// 7812                  out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:077B
cs=0x41e;eip=0x00077d; 	X(POP(ax));	// 7813                  pop     ax ;~ 041E:077D
cs=0x41e;eip=0x00077e; 	S(OUT(0x42, al));	// 7814                  out     42h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 041E:077E
cs=0x41e;eip=0x000780; 	S(IN(al, 0x61));	// 7815                  in      al, 61h         ; PC/XT PPI port B bits: ;~ 041E:0780
cs=0x41e;eip=0x000782; 	X(byte_11c96 = al;);	// 7823                  mov     ds:byte_11C96, al ;~ 041E:0782
cs=0x41e;eip=0x000785; 	T(OR(al, 1));	// 7824                  or      al, 1 ;~ 041E:0785
cs=0x41e;eip=0x000787; 	T(AND(al, 0x0FD));	// 7825                  and     al, 0FDh ;~ 041E:0787
cs=0x41e;eip=0x000789; 	S(OUT(0x61, al));	// 7826                  out     61h, al         ; PC/XT PPI port B bits: ;~ 041E:0789
cs=0x41e;eip=0x00078b; 	T(CLI);	// 7834                  cli ;~ 041E:078B
cs=0x41e;eip=0x00078c; 	S(IN(al, 0x21));	// 7835                  in      al, 21h         ; Interrupt controller, 8259A. ;~ 041E:078C
cs=0x41e;eip=0x00078e; 	X(byte_11c95 = al;);	// 7836                  mov     ds:byte_11C95, al ;~ 041E:078E
cs=0x41e;eip=0x000791; 	T(OR(al, 1));	// 7837                  or      al, 1 ;~ 041E:0791
cs=0x41e;eip=0x000793; 	S(OUT(0x21, al));	// 7838                  out     21h, al         ; Interrupt controller, 8259A. ;~ 041E:0793
cs=0x41e;eip=0x000795; 	T(STI);	// 7839                  sti ;~ 041E:0795
cs=0x41e;eip=0x000796; 	J(RETN(0));	// 7840                  retn ;~ 041E:0796

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_12f38: 	goto sub_12f38;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg127c_797_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg127c_797_proc:
    _begin:
cs=0x41e;eip=0x000797; 	X(PUSH(bp));	// 7845                  push    bp ;~ 041E:0797
cs=0x41e;eip=0x000798; 	T(bp = sp;);	// 7846                  mov     bp, sp ;~ 041E:0798
cs=0x41e;eip=0x00079a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 7847                  mov     bx, [bp+6] ;~ 041E:079A
cs=0x41e;eip=0x00079d; 	T(MOV(cx, *(dw*)(raddr(ss,bp+8))));	// 7848                  mov     cx, [bp+8] ;~ 041E:079D
cs=0x41e;eip=0x0007a0; 	X(PUSH(di));	// 7849                  push    di ;~ 041E:07A0
cs=0x41e;eip=0x0007a1; 	X(PUSH(ds));	// 7850                  push    ds ;~ 041E:07A1
cs=0x41e;eip=0x0007a2; 	T(ax = 0x11A3;);	// 7851                  mov     ax, 11A3h ;~ 041E:07A2
cs=0x41e;eip=0x0007a5; 	T(ds = ax;);	// 7852                  mov     ds, ax ;~ 041E:07A5
cs=0x41e;eip=0x0007a7; 	X(*(dw*)(&_unk_11c97) = bx;);	// 7854                  mov     word ptr ds:_unk_11C97, bx ;~ 041E:07A7
cs=0x41e;eip=0x0007ab; 	J(CALL(sub_12f75,0));	// 7855                  call    sub_12F75 ;~ 041E:07AB
cs=0x41e;eip=0x0007ae; 	J(CALL(sub_128e5,0));	// 7856                  call    sub_128E5 ;~ 041E:07AE
cs=0x41e;eip=0x0007b1; 	X(POP(ds));	// 7857                  pop     ds ;~ 041E:07B1
cs=0x41e;eip=0x0007b2; 	X(POP(di));	// 7859                  pop     di ;~ 041E:07B2
cs=0x41e;eip=0x0007b3; 	X(POP(bp));	// 7860                  pop     bp ;~ 041E:07B3
cs=0x41e;eip=0x0007b4; 	J(RETF(0));	// 7861                  retf ;~ 041E:07B4

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg127c_797_proc: 	goto seg127c_797_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_12f75(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_12f75:
    _begin:
cs=0x41e;eip=0x0007b5; 	T(bl = 2;);	// 7868                  mov     bl, 2 ;~ 041E:07B5
cs=0x41e;eip=0x0007b7; 	T(CMP(cx, 0x7D9D));	// 7869                  cmp     cx, 7D9Dh ;~ 041E:07B7
cs=0x41e;eip=0x0007bb; 	J(JNC(loc_12f87));	// 7870                  jnb     short loc_12F87 ;~ 041E:07BB
cs=0x41e;eip=0x0007bd; 	T(DEC(bl));	// 7871                  dec     bl ;~ 041E:07BD
cs=0x41e;eip=0x0007bf; 	T(CMP(cx, 0x6A1A));	// 7872                  cmp     cx, 6A1Ah ;~ 041E:07BF
cs=0x41e;eip=0x0007c3; 	J(JNC(loc_12f87));	// 7873                  jnb     short loc_12F87 ;~ 041E:07C3
cs=0x41e;eip=0x0007c5; 	T(DEC(bl));	// 7874                  dec     bl ;~ 041E:07C5
loc_12f87:
	// 4547 
cs=0x41e;eip=0x0007c7; 	X(byte_11cab = bl;);	// 7878                  mov     ds:byte_11CAB, bl ;~ 041E:07C7
cs=0x41e;eip=0x0007cb; 	J(RETN(0));	// 7879                  retn ;~ 041E:07CB

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_12f87: 	goto loc_12f87;
        case m2c::ksub_12f75: 	goto sub_12f75;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg127c_7cc_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg127c_7cc_proc:
    _begin:
cs=0x41e;eip=0x0007cc; 	X(PUSH(ds));	// 7884                  push    ds ;~ 041E:07CC
cs=0x41e;eip=0x0007cd; 	T(ax = 0x11A3;);	// 7885                  mov     ax, 11A3h ;~ 041E:07CD
cs=0x41e;eip=0x0007d0; 	T(ds = ax;);	// 7886                  mov     ds, ax ;~ 041E:07D0
cs=0x41e;eip=0x0007d2; 	J(CALL(sub_1298e,0));	// 7888                  call    sub_1298E ;~ 041E:07D2
cs=0x41e;eip=0x0007d5; 	J(CALL(sub_12a16,0));	// 7889                  call    sub_12A16 ;~ 041E:07D5
cs=0x41e;eip=0x0007d8; 	X(POP(ds));	// 7890                  pop     ds ;~ 041E:07D8
cs=0x41e;eip=0x0007d9; 	J(RETF(0));	// 7892                  retf ;~ 041E:07D9
ret_41e_7da:
	// 4548 
cs=0x41e;eip=0x0007da; 	X(PUSH(bp));	// 7894                  push    bp ;~ 041E:07DA
cs=0x41e;eip=0x0007db; 	T(bp = sp;);	// 7895                  mov     bp, sp ;~ 041E:07DB
cs=0x41e;eip=0x0007dd; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 7896                  mov     bx, [bp+6] ;~ 041E:07DD
cs=0x41e;eip=0x0007e0; 	T(CMP(bx, 0x22));	// 7897                  cmp     bx, 22h ; '"' ;~ 041E:07E0
cs=0x41e;eip=0x0007e3; 	J(JA(loc_12fb1));	// 7898                  ja      short loc_12FB1 ;~ 041E:07E3
cs=0x41e;eip=0x0007e5; 	X(PUSH(ds));	// 7899                  push    ds ;~ 041E:07E5
cs=0x41e;eip=0x0007e6; 	T(ax = 0x11A3;);	// 7900                  mov     ax, 11A3h ;~ 041E:07E6
cs=0x41e;eip=0x0007e9; 	T(ds = ax;);	// 7901                  mov     ds, ax ;~ 041E:07E9
cs=0x41e;eip=0x0007eb; 	J(CALL(__dispatch_call,*(dw*)(raddr(cs,bx+0x5E4))));	// 7903                  call    word ptr cs:[bx+5E4h] ;~ 041E:07EB
cs=0x41e;eip=0x0007f0; 	X(POP(ds));	// 7904                  pop     ds ;~ 041E:07F0
loc_12fb1:
	// 4549 
cs=0x41e;eip=0x0007f1; 	X(POP(bp));	// 7909                  pop     bp ;~ 041E:07F1
cs=0x41e;eip=0x0007f2; 	J(RETF(0));	// 7910                  retf ;~ 041E:07F2
ret_41e_7f3:
	// 4550 
cs=0x41e;eip=0x0007f3; 	X(PUSH(bp));	// 7913                  push    bp ;~ 041E:07F3
cs=0x41e;eip=0x0007f4; 	T(bp = sp;);	// 7914                  mov     bp, sp ;~ 041E:07F4
cs=0x41e;eip=0x0007f6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 7915                  mov     bx, [bp+6] ;~ 041E:07F6
cs=0x41e;eip=0x0007f9; 	T(CMP(bx, 4));	// 7916                  cmp     bx, 4 ;~ 041E:07F9
cs=0x41e;eip=0x0007fc; 	J(JA(loc_12fb1));	// 7917                  ja      short loc_12FB1 ;~ 041E:07FC
cs=0x41e;eip=0x0007fe; 	X(PUSH(ds));	// 7918                  push    ds ;~ 041E:07FE
cs=0x41e;eip=0x0007ff; 	T(ax = 0x11A3;);	// 7919                  mov     ax, 11A3h ;~ 041E:07FF
cs=0x41e;eip=0x000802; 	T(ds = ax;);	// 7920                  mov     ds, ax ;~ 041E:0802
cs=0x41e;eip=0x000804; 	X(PUSH(di));	// 7922                  push    di ;~ 041E:0804
cs=0x41e;eip=0x000805; 	X(PUSH(si));	// 7923                  push    si ;~ 041E:0805
cs=0x41e;eip=0x000806; 	J(CALL(__dispatch_call,*(dw*)(raddr(cs,bx+0x608))));	// 7924                  call    word ptr cs:[bx+608h] ;~ 041E:0806
cs=0x41e;eip=0x00080b; 	X(POP(si));	// 7925                  pop     si ;~ 041E:080B
cs=0x41e;eip=0x00080c; 	X(POP(di));	// 7926                  pop     di ;~ 041E:080C
cs=0x41e;eip=0x00080d; 	X(POP(ds));	// 7927                  pop     ds ;~ 041E:080D
cs=0x41e;eip=0x00080e; 	X(POP(bp));	// 7929                  pop     bp ;~ 041E:080E
cs=0x41e;eip=0x00080f; 	J(RETF(0));	// 7930                  retf ;~ 041E:080F
ret_41e_82a:
	// 4551 
cs=0x41e;eip=0x00082a; 	X(PUSH(ds));	// 7959                  push    ds ;~ 041E:082A
cs=0x41e;eip=0x00082b; 	T(ax = 0x11A3;);	// 7960                  mov     ax, 11A3h ;~ 041E:082B
cs=0x41e;eip=0x00082e; 	T(ds = ax;);	// 7961                  mov     ds, ax ;~ 041E:082E
cs=0x41e;eip=0x000830; 	X(DEC(*((seg_11c22)+0x49)));	// 7963                  dec     ds:seg_11C22+49h ;~ 041E:0830
cs=0x41e;eip=0x000834; 	J(JNZ(loc_13002));	// 7964                  jnz     short loc_13002 ;~ 041E:0834
cs=0x41e;eip=0x000836; 	X(*((seg_11c22)+0x49) = 7;);	// 7965                  mov     ds:seg_11C22+49h, 7 ;~ 041E:0836
cs=0x41e;eip=0x00083b; 	T(CMP(*((seg_11c22)+0x48), 0));	// 7966                  cmp     ds:seg_11C22+48h, 0 ;~ 041E:083B
cs=0x41e;eip=0x000840; 	J(JNZ(loc_13005));	// 7967                  jnz     short loc_13005 ;~ 041E:0840
loc_13002:
	// 4552 
cs=0x41e;eip=0x000842; 	J(CALL(sub_12a70,0));	// 7970                  call    sub_12A70 ;~ 041E:0842
loc_13005:
	// 4553 
cs=0x41e;eip=0x000845; 	T(ax = *(dw*)(&_unk_11c8d););	// 7973                  mov     ax, word ptr ds:_unk_11C8D ;~ 041E:0845
cs=0x41e;eip=0x000848; 	X(*(dw*)(&_unk_11c8d) = 0;);	// 7974                  mov     word ptr ds:_unk_11C8D, 0 ;~ 041E:0848
cs=0x41e;eip=0x00084e; 	X(POP(ds));	// 7975                  pop     ds ;~ 041E:084E
cs=0x41e;eip=0x00084f; 	J(RETF(0));	// 7977                  retf ;~ 041E:084F
ret_41e_850:
	// 4554 
cs=0x41e;eip=0x000850; 	X(PUSH(ds));	// 7979                  push    ds ;~ 041E:0850
cs=0x41e;eip=0x000851; 	T(ax = 0x11A3;);	// 7980                  mov     ax, 11A3h ;~ 041E:0851
cs=0x41e;eip=0x000854; 	T(ds = ax;);	// 7981                  mov     ds, ax ;~ 041E:0854
cs=0x41e;eip=0x000856; 	J(CALL(sub_12b08,0));	// 7983                  call    sub_12B08 ;~ 041E:0856
cs=0x41e;eip=0x000859; 	X(POP(ds));	// 7984                  pop     ds ;~ 041E:0859
cs=0x41e;eip=0x00085a; 	T(XOR(ax, ax));	// 7986                  xor     ax, ax ;~ 041E:085A
cs=0x41e;eip=0x00085c; 	J(RETF(0));	// 7987                  retf ;~ 041E:085C
ret_41e_85d:
	// 4555 
cs=0x41e;eip=0x00085d; 	X(PUSH(bp));	// 7989                  push    bp ;~ 041E:085D
cs=0x41e;eip=0x00085e; 	T(bp = sp;);	// 7990                  mov     bp, sp ;~ 041E:085E
cs=0x41e;eip=0x000860; 	X(PUSH(ds));	// 7991                  push    ds ;~ 041E:0860
cs=0x41e;eip=0x000861; 	T(ax = 0x11A3;);	// 7992                  mov     ax, 11A3h ;~ 041E:0861
cs=0x41e;eip=0x000864; 	T(ds = ax;);	// 7993                  mov     ds, ax ;~ 041E:0864
cs=0x41e;eip=0x000866; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 7995                  mov     ax, [bp+6] ;~ 041E:0866
cs=0x41e;eip=0x000869; 	T(CMP(ax, *(dw*)(&_unk_11cb4)));	// 7996                  cmp     ax, word ptr ds:_unk_11CB4 ;~ 041E:0869
cs=0x41e;eip=0x00086d; 	J(JL(loc_13032));	// 7997                  jl      short loc_13032 ;~ 041E:086D
cs=0x41e;eip=0x00086f; 	T(ax = *(dw*)(&_unk_11cb4););	// 7998                  mov     ax, word ptr ds:_unk_11CB4 ;~ 041E:086F
loc_13032:
	// 4556 
cs=0x41e;eip=0x000872; 	X(*(dw*)(&_unk_11cae) = ax;);	// 8001                  mov     word ptr ds:_unk_11CAE, ax ;~ 041E:0872
cs=0x41e;eip=0x000875; 	X(POP(ds));	// 8002                  pop     ds ;~ 041E:0875
cs=0x41e;eip=0x000876; 	X(POP(bp));	// 8004                  pop     bp ;~ 041E:0876
cs=0x41e;eip=0x000877; 	J(RETF(0));	// 8005                  retf ;~ 041E:0877
ret_41e_878:
	// 4557 
cs=0x41e;eip=0x000878; 	X(PUSH(ds));	// 8007                  push    ds ;~ 041E:0878
cs=0x41e;eip=0x000879; 	T(ax = 0x11A3;);	// 8008                  mov     ax, 11A3h ;~ 041E:0879
cs=0x41e;eip=0x00087c; 	T(ds = ax;);	// 8009                  mov     ds, ax ;~ 041E:087C
cs=0x41e;eip=0x00087e; 	X(byte_11cb6 = 1;);	// 8011                  mov     ds:byte_11CB6, 1 ;~ 041E:087E
cs=0x41e;eip=0x000883; 	X(POP(ds));	// 8012                  pop     ds ;~ 041E:0883
cs=0x41e;eip=0x000884; 	J(RETF(0));	// 8014                  retf ;~ 041E:0884

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_12fb1: 	goto loc_12fb1;
        case m2c::kloc_13002: 	goto loc_13002;
        case m2c::kloc_13005: 	goto loc_13005;
        case m2c::kloc_13032: 	goto loc_13032;
        case m2c::kret_41e_7da: 	goto ret_41e_7da;
        case m2c::kret_41e_7f3: 	goto ret_41e_7f3;
        case m2c::kret_41e_82a: 	goto ret_41e_82a;
        case m2c::kret_41e_850: 	goto ret_41e_850;
        case m2c::kret_41e_85d: 	goto ret_41e_85d;
        case m2c::kret_41e_878: 	goto ret_41e_878;
        case m2c::kseg127c_7cc_proc: 	goto seg127c_7cc_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13052(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13052:
    _begin:
#undef var_2
#define var_2 -2
	// 8038 var_2           = word ptr -2 ;~ 041E:0892
#undef arg_0
#define arg_0 4
	// 8039 arg_0           = word ptr  4 ;~ 041E:0892
cs=0x41e;eip=0x000892; 	X(PUSH(bp));	// 8041                  push    bp ;~ 041E:0892
cs=0x41e;eip=0x000893; 	T(bp = sp;);	// 8042                  mov     bp, sp ;~ 041E:0893
cs=0x41e;eip=0x000895; 	T(SUB(sp, 2));	// 8043                  sub     sp, 2 ;~ 041E:0895
cs=0x41e;eip=0x000899; 	X(PUSH(si));	// 8044                  push    si ;~ 041E:0899
cs=0x41e;eip=0x00089a; 	X(PUSH(di));	// 8045                  push    di ;~ 041E:089A
cs=0x41e;eip=0x00089b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 8046                  mov     ax, [bp+arg_0] ;~ 041E:089B
cs=0x41e;eip=0x00089e; 	T(bl = al;);	// 8047                  mov     bl, al ;~ 041E:089E
cs=0x41e;eip=0x0008a0; 	T(CMP(al, 6));	// 8048                  cmp     al, 6 ;~ 041E:08A0
cs=0x41e;eip=0x0008a2; 	J(JLE(loc_13070));	// 8049                  jle     short loc_13070 ;~ 041E:08A2
cs=0x41e;eip=0x0008a4; 	T(bl = 7;);	// 8050                  mov     bl, 7 ;~ 041E:08A4
cs=0x41e;eip=0x0008a6; 	T(CMP(al, 7));	// 8051                  cmp     al, 7 ;~ 041E:08A6
cs=0x41e;eip=0x0008a8; 	J(JZ(loc_13070));	// 8052                  jz      short loc_13070 ;~ 041E:08A8
cs=0x41e;eip=0x0008aa; 	T(CMP(al, 0x0A));	// 8053                  cmp     al, 0Ah ;~ 041E:08AA
cs=0x41e;eip=0x0008ac; 	J(JZ(loc_13070));	// 8054                  jz      short loc_13070 ;~ 041E:08AC
cs=0x41e;eip=0x0008ae; 	T(bl = 8;);	// 8055                  mov     bl, 8 ;~ 041E:08AE
loc_13070:
	// 4558 
cs=0x41e;eip=0x0008b0; 	T(bh = 0;);	// 8059                  mov     bh, 0 ;~ 041E:08B0
cs=0x41e;eip=0x0008b2; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), bx));	// 8060                  mov     [bp+var_2], bx ;~ 041E:08B2
cs=0x41e;eip=0x0008b5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 8061                  mov     ax, [bp+var_2] ;~ 041E:08B5
cs=0x41e;eip=0x0008b8; 	X(POP(di));	// 8062                  pop     di ;~ 041E:08B8
cs=0x41e;eip=0x0008b9; 	X(POP(si));	// 8063                  pop     si ;~ 041E:08B9
cs=0x41e;eip=0x0008ba; 	T(sp = bp;);	// 8064                  mov     sp, bp ;~ 041E:08BA
cs=0x41e;eip=0x0008bc; 	X(POP(bp));	// 8065                  pop     bp ;~ 041E:08BC
cs=0x41e;eip=0x0008bd; 	J(RETN(0));	// 8066                  retn ;~ 041E:08BD

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_13070: 	goto loc_13070;
        case m2c::ksub_13052: 	goto sub_13052;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1307e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1307e:
    _begin:
#undef var_4
#define var_4 -4
	// 8077 var_4           = word ptr -4 ;~ 041E:08BE
#undef var_2
#define var_2 -2
	// 8078 var_2           = word ptr -2 ;~ 041E:08BE
#undef arg_0
#define arg_0 4
	// 8079 arg_0           = word ptr  4 ;~ 041E:08BE
#undef arg_2
#define arg_2 6
	// 8080 arg_2           = word ptr  6 ;~ 041E:08BE
cs=0x41e;eip=0x0008be; 	X(PUSH(bp));	// 8082                  push    bp ;~ 041E:08BE
cs=0x41e;eip=0x0008bf; 	T(bp = sp;);	// 8083                  mov     bp, sp ;~ 041E:08BF
cs=0x41e;eip=0x0008c1; 	T(SUB(sp, 4));	// 8084                  sub     sp, 4 ;~ 041E:08C1
cs=0x41e;eip=0x0008c5; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 6));	// 8085                  cmp     [bp+arg_0], 6 ;~ 041E:08C5
cs=0x41e;eip=0x0008c9; 	J(JA(loc_130a8));	// 8086                  ja      short loc_130A8 ;~ 041E:08C9
cs=0x41e;eip=0x0008cb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 8087                  mov     ax, [bp+arg_0] ;~ 041E:08CB
cs=0x41e;eip=0x0008ce; 	T(SHL(ax, 1));	// 8088                  shl     ax, 1 ;~ 041E:08CE
cs=0x41e;eip=0x0008d0; 	T(bx = 0x2AE;);	// 8089                  mov     bx, 2AEh ;~ 041E:08D0
cs=0x41e;eip=0x0008d3; 	T(ADD(bx, ax));	// 8090                  add     bx, ax ;~ 041E:08D3
cs=0x41e;eip=0x0008d5; 	T(MOV(al, *(raddr(ds,bx+1))));	// 8091                  mov     al, [bx+1] ;~ 041E:08D5
cs=0x41e;eip=0x0008d8; 	T(CBW);	// 8092                  cbw ;~ 041E:08D8
cs=0x41e;eip=0x0008d9; 	T(bx = ax;);	// 8093                  mov     bx, ax ;~ 041E:08D9
cs=0x41e;eip=0x0008db; 	T(MOV(al, *(raddr(ds,bx+0x2C4))));	// 8094                  mov     al, [bx+2C4h] ;~ 041E:08DB
cs=0x41e;eip=0x0008df; 	T(CBW);	// 8095                  cbw ;~ 041E:08DF
cs=0x41e;eip=0x0008e0; 	T(ADD(ax, 0x40));	// 8096                  add     ax, 40h ; '@' ;~ 041E:08E0
cs=0x41e;eip=0x0008e3; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8097                  mov     [bp+var_2], ax ;~ 041E:08E3
cs=0x41e;eip=0x0008e6; 	J(JMP(loc_130bf));	// 8098                  jmp     short loc_130BF ;~ 041E:08E6
loc_130a8:
	// 4559 
cs=0x41e;eip=0x0008e8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8102                  mov     bx, [bp+arg_0] ;~ 041E:08E8
cs=0x41e;eip=0x0008eb; 	T(SHL(bx, 1));	// 8103                  shl     bx, 1 ;~ 041E:08EB
cs=0x41e;eip=0x0008ed; 	T(MOV(al, *(raddr(ds,bx+0x2AE))));	// 8104                  mov     al, [bx+2AEh] ;~ 041E:08ED
cs=0x41e;eip=0x0008f1; 	T(CBW);	// 8105                  cbw ;~ 041E:08F1
cs=0x41e;eip=0x0008f2; 	T(bx = ax;);	// 8106                  mov     bx, ax ;~ 041E:08F2
cs=0x41e;eip=0x0008f4; 	T(MOV(al, *(raddr(ds,bx+0x2C4))));	// 8107                  mov     al, [bx+2C4h] ;~ 041E:08F4
cs=0x41e;eip=0x0008f8; 	T(CBW);	// 8108                  cbw ;~ 041E:08F8
cs=0x41e;eip=0x0008f9; 	T(ADD(ax, 0x40));	// 8109                  add     ax, 40h ; '@' ;~ 041E:08F9
cs=0x41e;eip=0x0008fc; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8110                  mov     [bp+var_2], ax ;~ 041E:08FC
loc_130bf:
	// 4560 
cs=0x41e;eip=0x0008ff; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 8113                  mov     bx, [bp+var_2] ;~ 041E:08FF
cs=0x41e;eip=0x000902; 	T(MOV(al, *(raddr(ds,bx+0x0C32))));	// 8114                  mov     al, [bx+0C32h] ;~ 041E:0902
cs=0x41e;eip=0x000906; 	T(AND(ax, 0x0C0));	// 8115                  and     ax, 0C0h ;~ 041E:0906
cs=0x41e;eip=0x000909; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 8116                  mov     [bp+var_4], ax ;~ 041E:0909
cs=0x41e;eip=0x00090c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 8117                  mov     ax, [bp+arg_2] ;~ 041E:090C
cs=0x41e;eip=0x00090f; 	T(AND(ax, 0x3F));	// 8118                  and     ax, 3Fh ;~ 041E:090F
cs=0x41e;eip=0x000912; 	T(cx = 0x3F;);	// 8119                  mov     cx, 3Fh ; '?' ;~ 041E:0912
cs=0x41e;eip=0x000915; 	T(SUB(cx, ax));	// 8120                  sub     cx, ax ;~ 041E:0915
cs=0x41e;eip=0x000917; 	X(OR(*(dw*)(raddr(ss,bp+var_4)), cx));	// 8121                  or      [bp+var_4], cx ;~ 041E:0917
cs=0x41e;eip=0x00091a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 8122                  push    [bp+var_4] ;~ 041E:091A
cs=0x41e;eip=0x00091d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 8123                  push    [bp+var_2] ;~ 041E:091D
cs=0x41e;eip=0x000920; 	J(CALL(sub_12a31,0));	// 8124                  call    sub_12A31 ;~ 041E:0920
cs=0x41e;eip=0x000923; 	T(ADD(sp, 4));	// 8125                  add     sp, 4 ;~ 041E:0923
cs=0x41e;eip=0x000926; 	T(sp = bp;);	// 8126                  mov     sp, bp ;~ 041E:0926
cs=0x41e;eip=0x000928; 	X(POP(bp));	// 8127                  pop     bp ;~ 041E:0928
cs=0x41e;eip=0x000929; 	J(RETN(0));	// 8128                  retn ;~ 041E:0929

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_130a8: 	goto loc_130a8;
        case m2c::kloc_130bf: 	goto loc_130bf;
        case m2c::ksub_1307e: 	goto sub_1307e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_130ea(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_130ea:
    _begin:
#undef var_4
#define var_4 -4
	// 8138 var_4           = word ptr -4 ;~ 041E:092A
#undef var_2
#define var_2 -2
	// 8139 var_2           = word ptr -2 ;~ 041E:092A
#undef arg_0
#define arg_0 4
	// 8140 arg_0           = word ptr  4 ;~ 041E:092A
#undef arg_2
#define arg_2 6
	// 8141 arg_2           = word ptr  6 ;~ 041E:092A
cs=0x41e;eip=0x00092a; 	X(PUSH(bp));	// 8143                  push    bp ;~ 041E:092A
cs=0x41e;eip=0x00092b; 	T(bp = sp;);	// 8144                  mov     bp, sp ;~ 041E:092B
cs=0x41e;eip=0x00092d; 	T(SUB(sp, 4));	// 8145                  sub     sp, 4 ;~ 041E:092D
cs=0x41e;eip=0x000931; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8146                  mov     bx, [bp+arg_0] ;~ 041E:0931
cs=0x41e;eip=0x000934; 	T(SHL(bx, 1));	// 8147                  shl     bx, 1 ;~ 041E:0934
cs=0x41e;eip=0x000936; 	T(MOV(al, *(raddr(ds,bx+0x2AE))));	// 8148                  mov     al, [bx+2AEh] ;~ 041E:0936
cs=0x41e;eip=0x00093a; 	T(CBW);	// 8149                  cbw ;~ 041E:093A
cs=0x41e;eip=0x00093b; 	T(bx = ax;);	// 8150                  mov     bx, ax ;~ 041E:093B
cs=0x41e;eip=0x00093d; 	T(MOV(al, *(raddr(ds,bx+0x2C4))));	// 8151                  mov     al, [bx+2C4h] ;~ 041E:093D
cs=0x41e;eip=0x000941; 	T(CBW);	// 8152                  cbw ;~ 041E:0941
cs=0x41e;eip=0x000942; 	T(ADD(ax, 0x40));	// 8153                  add     ax, 40h ; '@' ;~ 041E:0942
cs=0x41e;eip=0x000945; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8154                  mov     [bp+var_2], ax ;~ 041E:0945
cs=0x41e;eip=0x000948; 	T(bx = ax;);	// 8155                  mov     bx, ax ;~ 041E:0948
cs=0x41e;eip=0x00094a; 	T(MOV(al, *(raddr(ds,bx+0x0C32))));	// 8156                  mov     al, [bx+0C32h] ;~ 041E:094A
cs=0x41e;eip=0x00094e; 	T(AND(ax, 0x0C0));	// 8157                  and     ax, 0C0h ;~ 041E:094E
cs=0x41e;eip=0x000951; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 8158                  mov     [bp+var_4], ax ;~ 041E:0951
cs=0x41e;eip=0x000954; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 8159                  mov     ax, [bp+arg_2] ;~ 041E:0954
cs=0x41e;eip=0x000957; 	T(AND(ax, 0x3F));	// 8160                  and     ax, 3Fh ;~ 041E:0957
cs=0x41e;eip=0x00095a; 	T(cx = 0x3F;);	// 8161                  mov     cx, 3Fh ; '?' ;~ 041E:095A
cs=0x41e;eip=0x00095d; 	T(SUB(cx, ax));	// 8162                  sub     cx, ax ;~ 041E:095D
cs=0x41e;eip=0x00095f; 	X(OR(*(dw*)(raddr(ss,bp+var_4)), cx));	// 8163                  or      [bp+var_4], cx ;~ 041E:095F
cs=0x41e;eip=0x000962; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 8164                  push    [bp+var_4] ;~ 041E:0962
cs=0x41e;eip=0x000965; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 8165                  push    [bp+var_2] ;~ 041E:0965
cs=0x41e;eip=0x000968; 	J(CALL(sub_12a31,0));	// 8166                  call    sub_12A31 ;~ 041E:0968
cs=0x41e;eip=0x00096b; 	T(ADD(sp, 4));	// 8167                  add     sp, 4 ;~ 041E:096B
cs=0x41e;eip=0x00096e; 	T(sp = bp;);	// 8168                  mov     sp, bp ;~ 041E:096E
cs=0x41e;eip=0x000970; 	X(POP(bp));	// 8169                  pop     bp ;~ 041E:0970
cs=0x41e;eip=0x000971; 	J(RETN(0));	// 8170                  retn ;~ 041E:0971

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_130ea: 	goto sub_130ea;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13132(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13132:
    _begin:
#undef var_c
#define var_c -0x0C
	// 8180 var_C           = word ptr -0Ch ;~ 041E:0972
#undef var_a
#define var_a -0x0A
	// 8181 var_A           = byte ptr -0Ah ;~ 041E:0972
#undef var_8
#define var_8 -8
	// 8182 var_8           = byte ptr -8 ;~ 041E:0972
#undef var_6
#define var_6 -6
	// 8183 var_6           = byte ptr -6 ;~ 041E:0972
#undef var_4
#define var_4 -4
	// 8184 var_4           = word ptr -4 ;~ 041E:0972
#undef var_2
#define var_2 -2
	// 8185 var_2           = word ptr -2 ;~ 041E:0972
#undef arg_0
#define arg_0 4
	// 8186 arg_0           = word ptr  4 ;~ 041E:0972
#undef arg_2
#define arg_2 6
	// 8187 arg_2           = word ptr  6 ;~ 041E:0972
cs=0x41e;eip=0x000972; 	X(PUSH(bp));	// 8189                  push    bp ;~ 041E:0972
cs=0x41e;eip=0x000973; 	T(bp = sp;);	// 8190                  mov     bp, sp ;~ 041E:0973
cs=0x41e;eip=0x000975; 	T(SUB(sp, 0x0C));	// 8191                  sub     sp, 0Ch ;~ 041E:0975
cs=0x41e;eip=0x000979; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 8192                  push    [bp+arg_0] ;~ 041E:0979
cs=0x41e;eip=0x00097c; 	J(CALL(sub_13052,0));	// 8193                  call    sub_13052 ;~ 041E:097C
cs=0x41e;eip=0x00097f; 	T(ADD(sp, 2));	// 8194                  add     sp, 2 ;~ 041E:097F
cs=0x41e;eip=0x000982; 	T(ADD(ax, 0x0A0));	// 8195                  add     ax, 0A0h ;~ 041E:0982
cs=0x41e;eip=0x000985; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8196                  mov     [bp+var_2], ax ;~ 041E:0985
cs=0x41e;eip=0x000988; 	T(cx = 0x0C;);	// 8197                  mov     cx, 0Ch ;~ 041E:0988
cs=0x41e;eip=0x00098b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 8198                  mov     ax, [bp+arg_2] ;~ 041E:098B
cs=0x41e;eip=0x00098e; 	T(SUB(dx, dx));	// 8199                  sub     dx, dx ;~ 041E:098E
cs=0x41e;eip=0x000990; 	T(DIV2(cx));	// 8200                  div     cx ;~ 041E:0990
cs=0x41e;eip=0x000992; 	X(MOV(*(raddr(ss,bp+var_8)), dl));	// 8201                  mov     [bp+var_8], dl ;~ 041E:0992
cs=0x41e;eip=0x000995; 	T(cx = 0x0C;);	// 8202                  mov     cx, 0Ch ;~ 041E:0995
cs=0x41e;eip=0x000998; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 8203                  mov     ax, [bp+arg_2] ;~ 041E:0998
cs=0x41e;eip=0x00099b; 	T(SUB(dx, dx));	// 8204                  sub     dx, dx ;~ 041E:099B
cs=0x41e;eip=0x00099d; 	T(DIV2(cx));	// 8205                  div     cx ;~ 041E:099D
cs=0x41e;eip=0x00099f; 	X(MOV(*(raddr(ss,bp+var_a)), al));	// 8206                  mov     [bp+var_A], al ;~ 041E:099F
cs=0x41e;eip=0x0009a2; 	T(MOV(al, *(raddr(ss,bp+var_8))));	// 8207                  mov     al, [bp+var_8] ;~ 041E:09A2
cs=0x41e;eip=0x0009a5; 	T(AND(ax, 0x0FF));	// 8208                  and     ax, 0FFh ;~ 041E:09A5
cs=0x41e;eip=0x0009a8; 	T(bx = ax;);	// 8209                  mov     bx, ax ;~ 041E:09A8
cs=0x41e;eip=0x0009aa; 	T(SHL(bx, 1));	// 8210                  shl     bx, 1 ;~ 041E:09AA
cs=0x41e;eip=0x0009ac; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x292))));	// 8211                  mov     ax, [bx+292h] ;~ 041E:09AC
cs=0x41e;eip=0x0009b0; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 8212                  mov     [bp+var_4], ax ;~ 041E:09B0
cs=0x41e;eip=0x0009b3; 	T(AND(ax, 0x0FF));	// 8213                  and     ax, 0FFh ;~ 041E:09B3
cs=0x41e;eip=0x0009b6; 	X(PUSH(ax));	// 8214                  push    ax ;~ 041E:09B6
cs=0x41e;eip=0x0009b7; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 8215                  push    [bp+var_2] ;~ 041E:09B7
cs=0x41e;eip=0x0009ba; 	J(CALL(sub_12a31,0));	// 8216                  call    sub_12A31 ;~ 041E:09BA
cs=0x41e;eip=0x0009bd; 	T(ADD(sp, 4));	// 8217                  add     sp, 4 ;~ 041E:09BD
cs=0x41e;eip=0x0009c0; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), 0x10));	// 8218                  add     [bp+var_2], 10h ;~ 041E:09C0
cs=0x41e;eip=0x0009c4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 8219                  mov     bx, [bp+var_2] ;~ 041E:09C4
cs=0x41e;eip=0x0009c7; 	T(MOV(al, *(raddr(ds,bx+0x0C32))));	// 8220                  mov     al, [bx+0C32h] ;~ 041E:09C7
cs=0x41e;eip=0x0009cb; 	T(AND(ax, 0x20));	// 8221                  and     ax, 20h ;~ 041E:09CB
cs=0x41e;eip=0x0009ce; 	X(MOV(*(raddr(ss,bp+var_6)), al));	// 8222                  mov     [bp+var_6], al ;~ 041E:09CE
cs=0x41e;eip=0x0009d1; 	T(cx = 8;);	// 8223                  mov     cx, 8 ;~ 041E:09D1
cs=0x41e;eip=0x0009d4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 8224                  mov     ax, [bp+var_4] ;~ 041E:09D4
cs=0x41e;eip=0x0009d7; 	T(SHR(ax, cl));	// 8225                  shr     ax, cl ;~ 041E:09D7
cs=0x41e;eip=0x0009d9; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 8226                  mov     [bp+var_C], ax ;~ 041E:09D9
cs=0x41e;eip=0x0009dc; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 8227                  mov     al, [bp+var_A] ;~ 041E:09DC
cs=0x41e;eip=0x0009df; 	T(AND(ax, 0x0FF));	// 8228                  and     ax, 0FFh ;~ 041E:09DF
cs=0x41e;eip=0x0009e2; 	T(SHL(ax, 1));	// 8229                  shl     ax, 1 ;~ 041E:09E2
cs=0x41e;eip=0x0009e4; 	T(SHL(ax, 1));	// 8230                  shl     ax, 1 ;~ 041E:09E4
cs=0x41e;eip=0x0009e6; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_c))));	// 8231                  mov     cx, [bp+var_C] ;~ 041E:09E6
cs=0x41e;eip=0x0009e9; 	T(OR(cx, ax));	// 8232                  or      cx, ax ;~ 041E:09E9
cs=0x41e;eip=0x0009eb; 	X(OR(*(raddr(ss,bp+var_6)), cl));	// 8233                  or      [bp+var_6], cl ;~ 041E:09EB
cs=0x41e;eip=0x0009ee; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 8234                  mov     al, [bp+var_6] ;~ 041E:09EE
cs=0x41e;eip=0x0009f1; 	T(AND(ax, 0x0FF));	// 8235                  and     ax, 0FFh ;~ 041E:09F1
cs=0x41e;eip=0x0009f4; 	X(PUSH(ax));	// 8236                  push    ax ;~ 041E:09F4
cs=0x41e;eip=0x0009f5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 8237                  push    [bp+var_2] ;~ 041E:09F5
cs=0x41e;eip=0x0009f8; 	J(CALL(sub_12a31,0));	// 8238                  call    sub_12A31 ;~ 041E:09F8
cs=0x41e;eip=0x0009fb; 	T(ADD(sp, 4));	// 8239                  add     sp, 4 ;~ 041E:09FB
cs=0x41e;eip=0x0009fe; 	T(sp = bp;);	// 8240                  mov     sp, bp ;~ 041E:09FE
cs=0x41e;eip=0x000a00; 	X(POP(bp));	// 8241                  pop     bp ;~ 041E:0A00
cs=0x41e;eip=0x000a01; 	J(RETN(0));	// 8242                  retn ;~ 041E:0A01

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_13132: 	goto sub_13132;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_131c2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_131c2:
    _begin:
#undef var_4
#define var_4 -4
	// 8252 var_4           = byte ptr -4 ;~ 041E:0A02
#undef var_2
#define var_2 -2
	// 8253 var_2           = word ptr -2 ;~ 041E:0A02
#undef arg_0
#define arg_0 4
	// 8254 arg_0           = byte ptr  4 ;~ 041E:0A02
#undef arg_2
#define arg_2 6
	// 8255 arg_2           = word ptr  6 ;~ 041E:0A02
cs=0x41e;eip=0x000a02; 	X(PUSH(bp));	// 8257                  push    bp ;~ 041E:0A02
cs=0x41e;eip=0x000a03; 	T(bp = sp;);	// 8258                  mov     bp, sp ;~ 041E:0A03
cs=0x41e;eip=0x000a05; 	T(SUB(sp, 4));	// 8259                  sub     sp, 4 ;~ 041E:0A05
cs=0x41e;eip=0x000a09; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8260                  mov     al, [bp+arg_0] ;~ 041E:0A09
cs=0x41e;eip=0x000a0c; 	T(AND(ax, 0x0FF));	// 8261                  and     ax, 0FFh ;~ 041E:0A0C
cs=0x41e;eip=0x000a0f; 	X(PUSH(ax));	// 8262                  push    ax ;~ 041E:0A0F
cs=0x41e;eip=0x000a10; 	J(CALL(sub_13052,0));	// 8263                  call    sub_13052 ;~ 041E:0A10
cs=0x41e;eip=0x000a13; 	T(ADD(sp, 2));	// 8264                  add     sp, 2 ;~ 041E:0A13
cs=0x41e;eip=0x000a16; 	T(ADD(ax, 0x0A0));	// 8265                  add     ax, 0A0h ;~ 041E:0A16
cs=0x41e;eip=0x000a19; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8266                  mov     [bp+var_2], ax ;~ 041E:0A19
cs=0x41e;eip=0x000a1c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 8267                  mov     ax, [bp+arg_2] ;~ 041E:0A1C
cs=0x41e;eip=0x000a1f; 	T(AND(ax, 0x0FF));	// 8268                  and     ax, 0FFh ;~ 041E:0A1F
cs=0x41e;eip=0x000a22; 	X(PUSH(ax));	// 8269                  push    ax ;~ 041E:0A22
cs=0x41e;eip=0x000a23; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 8270                  push    [bp+var_2] ;~ 041E:0A23
cs=0x41e;eip=0x000a26; 	J(CALL(sub_12a31,0));	// 8271                  call    sub_12A31 ;~ 041E:0A26
cs=0x41e;eip=0x000a29; 	T(ADD(sp, 4));	// 8272                  add     sp, 4 ;~ 041E:0A29
cs=0x41e;eip=0x000a2c; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), 0x10));	// 8273                  add     [bp+var_2], 10h ;~ 041E:0A2C
cs=0x41e;eip=0x000a30; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 8274                  mov     bx, [bp+var_2] ;~ 041E:0A30
cs=0x41e;eip=0x000a33; 	T(MOV(al, *(raddr(ds,bx+0x0C32))));	// 8275                  mov     al, [bx+0C32h] ;~ 041E:0A33
cs=0x41e;eip=0x000a37; 	T(AND(ax, 0x20));	// 8276                  and     ax, 20h ;~ 041E:0A37
cs=0x41e;eip=0x000a3a; 	X(MOV(*(raddr(ss,bp+var_4)), al));	// 8277                  mov     [bp+var_4], al ;~ 041E:0A3A
cs=0x41e;eip=0x000a3d; 	T(cx = 8;);	// 8278                  mov     cx, 8 ;~ 041E:0A3D
cs=0x41e;eip=0x000a40; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 8279                  mov     ax, [bp+arg_2] ;~ 041E:0A40
cs=0x41e;eip=0x000a43; 	T(SHR(ax, cl));	// 8280                  shr     ax, cl ;~ 041E:0A43
cs=0x41e;eip=0x000a45; 	X(OR(*(raddr(ss,bp+var_4)), al));	// 8281                  or      [bp+var_4], al ;~ 041E:0A45
cs=0x41e;eip=0x000a48; 	T(MOV(al, *(raddr(ss,bp+var_4))));	// 8282                  mov     al, [bp+var_4] ;~ 041E:0A48
cs=0x41e;eip=0x000a4b; 	T(AND(ax, 0x0FF));	// 8283                  and     ax, 0FFh ;~ 041E:0A4B
cs=0x41e;eip=0x000a4e; 	X(PUSH(ax));	// 8284                  push    ax ;~ 041E:0A4E
cs=0x41e;eip=0x000a4f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 8285                  push    [bp+var_2] ;~ 041E:0A4F
cs=0x41e;eip=0x000a52; 	J(CALL(sub_12a31,0));	// 8286                  call    sub_12A31 ;~ 041E:0A52
cs=0x41e;eip=0x000a55; 	T(ADD(sp, 4));	// 8287                  add     sp, 4 ;~ 041E:0A55
cs=0x41e;eip=0x000a58; 	T(sp = bp;);	// 8288                  mov     sp, bp ;~ 041E:0A58
cs=0x41e;eip=0x000a5a; 	X(POP(bp));	// 8289                  pop     bp ;~ 041E:0A5A
cs=0x41e;eip=0x000a5b; 	J(RETN(0));	// 8290                  retn ;~ 041E:0A5B

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_131c2: 	goto sub_131c2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1321c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1321c:
    _begin:
#undef var_a
#define var_a -0x0A
	// 8300 var_A           = word ptr -0Ah ;~ 041E:0A5C
#undef var_8
#define var_8 -8
	// 8301 var_8           = byte ptr -8 ;~ 041E:0A5C
#undef var_6
#define var_6 -6
	// 8302 var_6           = word ptr -6 ;~ 041E:0A5C
#undef var_4
#define var_4 -4
	// 8303 var_4           = word ptr -4 ;~ 041E:0A5C
#undef var_2
#define var_2 -2
	// 8304 var_2           = word ptr -2 ;~ 041E:0A5C
#undef arg_0
#define arg_0 4
	// 8305 arg_0           = byte ptr  4 ;~ 041E:0A5C
#undef arg_2
#define arg_2 6
	// 8306 arg_2           = byte ptr  6 ;~ 041E:0A5C
cs=0x41e;eip=0x000a5c; 	X(PUSH(bp));	// 8308                  push    bp ;~ 041E:0A5C
cs=0x41e;eip=0x000a5d; 	T(bp = sp;);	// 8309                  mov     bp, sp ;~ 041E:0A5D
cs=0x41e;eip=0x000a5f; 	T(SUB(sp, 0x0A));	// 8310                  sub     sp, 0Ah ;~ 041E:0A5F
cs=0x41e;eip=0x000a63; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8311                  mov     al, [bp+arg_0] ;~ 041E:0A63
cs=0x41e;eip=0x000a66; 	T(AND(ax, 0x0FF));	// 8312                  and     ax, 0FFh ;~ 041E:0A66
cs=0x41e;eip=0x000a69; 	X(PUSH(ax));	// 8313                  push    ax ;~ 041E:0A69
cs=0x41e;eip=0x000a6a; 	J(CALL(sub_13052,0));	// 8314                  call    sub_13052 ;~ 041E:0A6A
cs=0x41e;eip=0x000a6d; 	T(ADD(sp, 2));	// 8315                  add     sp, 2 ;~ 041E:0A6D
cs=0x41e;eip=0x000a70; 	T(ADD(ax, 0x0A0));	// 8316                  add     ax, 0A0h ;~ 041E:0A70
cs=0x41e;eip=0x000a73; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8317                  mov     [bp+var_2], ax ;~ 041E:0A73
cs=0x41e;eip=0x000a76; 	T(ADD(ax, 0x10));	// 8318                  add     ax, 10h ;~ 041E:0A76
cs=0x41e;eip=0x000a79; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 8319                  mov     [bp+var_4], ax ;~ 041E:0A79
cs=0x41e;eip=0x000a7c; 	T(bx = ax;);	// 8320                  mov     bx, ax ;~ 041E:0A7C
cs=0x41e;eip=0x000a7e; 	T(MOV(al, *(raddr(ds,bx+0x0C32))));	// 8321                  mov     al, [bx+0C32h] ;~ 041E:0A7E
cs=0x41e;eip=0x000a82; 	T(AND(ax, 0x1F));	// 8322                  and     ax, 1Fh ;~ 041E:0A82
cs=0x41e;eip=0x000a85; 	T(cx = 8;);	// 8323                  mov     cx, 8 ;~ 041E:0A85
cs=0x41e;eip=0x000a88; 	T(SHL(ax, cl));	// 8324                  shl     ax, cl ;~ 041E:0A88
cs=0x41e;eip=0x000a8a; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 8325                  mov     [bp+var_6], ax ;~ 041E:0A8A
cs=0x41e;eip=0x000a8d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 8326                  mov     bx, [bp+var_2] ;~ 041E:0A8D
cs=0x41e;eip=0x000a90; 	T(MOV(al, *(raddr(ds,bx+0x0C32))));	// 8327                  mov     al, [bx+0C32h] ;~ 041E:0A90
cs=0x41e;eip=0x000a94; 	T(AND(ax, 0x0FF));	// 8328                  and     ax, 0FFh ;~ 041E:0A94
cs=0x41e;eip=0x000a97; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 8329                  mov     [bp+var_A], ax ;~ 041E:0A97
cs=0x41e;eip=0x000a9a; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 8330                  mov     al, [bp+arg_2] ;~ 041E:0A9A
cs=0x41e;eip=0x000a9d; 	T(CBW);	// 8331                  cbw ;~ 041E:0A9D
cs=0x41e;eip=0x000a9e; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_a))));	// 8332                  mov     cx, [bp+var_A] ;~ 041E:0A9E
cs=0x41e;eip=0x000aa1; 	T(ADD(cx, ax));	// 8333                  add     cx, ax ;~ 041E:0AA1
cs=0x41e;eip=0x000aa3; 	X(ADD(*(dw*)(raddr(ss,bp+var_6)), cx));	// 8334                  add     [bp+var_6], cx ;~ 041E:0AA3
cs=0x41e;eip=0x000aa6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 8335                  mov     ax, [bp+var_6] ;~ 041E:0AA6
cs=0x41e;eip=0x000aa9; 	T(AND(ax, 0x0FF));	// 8336                  and     ax, 0FFh ;~ 041E:0AA9
cs=0x41e;eip=0x000aac; 	X(PUSH(ax));	// 8337                  push    ax ;~ 041E:0AAC
cs=0x41e;eip=0x000aad; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 8338                  push    [bp+var_2] ;~ 041E:0AAD
cs=0x41e;eip=0x000ab0; 	J(CALL(sub_12a31,0));	// 8339                  call    sub_12A31 ;~ 041E:0AB0
cs=0x41e;eip=0x000ab3; 	T(ADD(sp, 4));	// 8340                  add     sp, 4 ;~ 041E:0AB3
cs=0x41e;eip=0x000ab6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 8341                  mov     bx, [bp+var_4] ;~ 041E:0AB6
cs=0x41e;eip=0x000ab9; 	T(MOV(al, *(raddr(ds,bx+0x0C32))));	// 8342                  mov     al, [bx+0C32h] ;~ 041E:0AB9
cs=0x41e;eip=0x000abd; 	T(AND(ax, 0x20));	// 8343                  and     ax, 20h ;~ 041E:0ABD
cs=0x41e;eip=0x000ac0; 	X(MOV(*(raddr(ss,bp+var_8)), al));	// 8344                  mov     [bp+var_8], al ;~ 041E:0AC0
cs=0x41e;eip=0x000ac3; 	T(cx = 8;);	// 8345                  mov     cx, 8 ;~ 041E:0AC3
cs=0x41e;eip=0x000ac6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 8346                  mov     ax, [bp+var_6] ;~ 041E:0AC6
cs=0x41e;eip=0x000ac9; 	T(SHR(ax, cl));	// 8347                  shr     ax, cl ;~ 041E:0AC9
cs=0x41e;eip=0x000acb; 	X(OR(*(raddr(ss,bp+var_8)), al));	// 8348                  or      [bp+var_8], al ;~ 041E:0ACB
cs=0x41e;eip=0x000ace; 	T(MOV(al, *(raddr(ss,bp+var_8))));	// 8349                  mov     al, [bp+var_8] ;~ 041E:0ACE
cs=0x41e;eip=0x000ad1; 	T(AND(ax, 0x0FF));	// 8350                  and     ax, 0FFh ;~ 041E:0AD1
cs=0x41e;eip=0x000ad4; 	X(PUSH(ax));	// 8351                  push    ax ;~ 041E:0AD4
cs=0x41e;eip=0x000ad5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 8352                  push    [bp+var_4] ;~ 041E:0AD5
cs=0x41e;eip=0x000ad8; 	J(CALL(sub_12a31,0));	// 8353                  call    sub_12A31 ;~ 041E:0AD8
cs=0x41e;eip=0x000adb; 	T(ADD(sp, 4));	// 8354                  add     sp, 4 ;~ 041E:0ADB
cs=0x41e;eip=0x000ade; 	T(sp = bp;);	// 8355                  mov     sp, bp ;~ 041E:0ADE
cs=0x41e;eip=0x000ae0; 	X(POP(bp));	// 8356                  pop     bp ;~ 041E:0AE0
cs=0x41e;eip=0x000ae1; 	J(RETN(0));	// 8357                  retn ;~ 041E:0AE1

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_1321c: 	goto sub_1321c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_132a2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_132a2:
    _begin:
#undef var_8
#define var_8 -8
	// 8367 var_8           = word ptr -8 ;~ 041E:0AE2
#undef var_6
#define var_6 -6
	// 8368 var_6           = word ptr -6 ;~ 041E:0AE2
#undef var_4
#define var_4 -4
	// 8369 var_4           = word ptr -4 ;~ 041E:0AE2
#undef var_2
#define var_2 -2
	// 8370 var_2           = word ptr -2 ;~ 041E:0AE2
#undef arg_0
#define arg_0 4
	// 8371 arg_0           = word ptr  4 ;~ 041E:0AE2
#undef arg_2
#define arg_2 6
	// 8372 arg_2           = byte ptr  6 ;~ 041E:0AE2
cs=0x41e;eip=0x000ae2; 	X(PUSH(bp));	// 8374                  push    bp ;~ 041E:0AE2
cs=0x41e;eip=0x000ae3; 	T(bp = sp;);	// 8375                  mov     bp, sp ;~ 041E:0AE3
cs=0x41e;eip=0x000ae5; 	T(SUB(sp, 8));	// 8376                  sub     sp, 8 ;~ 041E:0AE5
cs=0x41e;eip=0x000ae9; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 6));	// 8377                  cmp     [bp+arg_0], 6 ;~ 041E:0AE9
cs=0x41e;eip=0x000aed; 	J(JA(loc_132cc));	// 8378                  ja      short loc_132CC ;~ 041E:0AED
cs=0x41e;eip=0x000aef; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 8379                  mov     ax, [bp+arg_0] ;~ 041E:0AEF
cs=0x41e;eip=0x000af2; 	T(SHL(ax, 1));	// 8380                  shl     ax, 1 ;~ 041E:0AF2
cs=0x41e;eip=0x000af4; 	T(bx = 0x2AE;);	// 8381                  mov     bx, 2AEh ;~ 041E:0AF4
cs=0x41e;eip=0x000af7; 	T(ADD(bx, ax));	// 8382                  add     bx, ax ;~ 041E:0AF7
cs=0x41e;eip=0x000af9; 	T(MOV(al, *(raddr(ds,bx+1))));	// 8383                  mov     al, [bx+1] ;~ 041E:0AF9
cs=0x41e;eip=0x000afc; 	T(CBW);	// 8384                  cbw ;~ 041E:0AFC
cs=0x41e;eip=0x000afd; 	T(bx = ax;);	// 8385                  mov     bx, ax ;~ 041E:0AFD
cs=0x41e;eip=0x000aff; 	T(MOV(al, *(raddr(ds,bx+0x2C4))));	// 8386                  mov     al, [bx+2C4h] ;~ 041E:0AFF
cs=0x41e;eip=0x000b03; 	T(CBW);	// 8387                  cbw ;~ 041E:0B03
cs=0x41e;eip=0x000b04; 	T(ADD(ax, 0x40));	// 8388                  add     ax, 40h ; '@' ;~ 041E:0B04
cs=0x41e;eip=0x000b07; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8389                  mov     [bp+var_2], ax ;~ 041E:0B07
cs=0x41e;eip=0x000b0a; 	J(JMP(loc_132e3));	// 8390                  jmp     short loc_132E3 ;~ 041E:0B0A
loc_132cc:
	// 4561 
cs=0x41e;eip=0x000b0c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 8394                  mov     bx, [bp+arg_0] ;~ 041E:0B0C
cs=0x41e;eip=0x000b0f; 	T(SHL(bx, 1));	// 8395                  shl     bx, 1 ;~ 041E:0B0F
cs=0x41e;eip=0x000b11; 	T(MOV(al, *(raddr(ds,bx+0x2AE))));	// 8396                  mov     al, [bx+2AEh] ;~ 041E:0B11
cs=0x41e;eip=0x000b15; 	T(CBW);	// 8397                  cbw ;~ 041E:0B15
cs=0x41e;eip=0x000b16; 	T(bx = ax;);	// 8398                  mov     bx, ax ;~ 041E:0B16
cs=0x41e;eip=0x000b18; 	T(MOV(al, *(raddr(ds,bx+0x2C4))));	// 8399                  mov     al, [bx+2C4h] ;~ 041E:0B18
cs=0x41e;eip=0x000b1c; 	T(CBW);	// 8400                  cbw ;~ 041E:0B1C
cs=0x41e;eip=0x000b1d; 	T(ADD(ax, 0x40));	// 8401                  add     ax, 40h ; '@' ;~ 041E:0B1D
cs=0x41e;eip=0x000b20; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8402                  mov     [bp+var_2], ax ;~ 041E:0B20
loc_132e3:
	// 4562 
cs=0x41e;eip=0x000b23; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 8405                  mov     bx, [bp+var_2] ;~ 041E:0B23
cs=0x41e;eip=0x000b26; 	T(MOV(al, *(raddr(ds,bx+0x0C32))));	// 8406                  mov     al, [bx+0C32h] ;~ 041E:0B26
cs=0x41e;eip=0x000b2a; 	T(AND(ax, 0x0FF));	// 8407                  and     ax, 0FFh ;~ 041E:0B2A
cs=0x41e;eip=0x000b2d; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 8408                  mov     [bp+var_6], ax ;~ 041E:0B2D
cs=0x41e;eip=0x000b30; 	T(AND(ax, 0x3F));	// 8409                  and     ax, 3Fh ;~ 041E:0B30
cs=0x41e;eip=0x000b33; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 8410                  mov     [bp+var_8], ax ;~ 041E:0B33
cs=0x41e;eip=0x000b36; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 8411                  mov     al, [bp+arg_2] ;~ 041E:0B36
cs=0x41e;eip=0x000b39; 	T(CBW);	// 8412                  cbw ;~ 041E:0B39
cs=0x41e;eip=0x000b3a; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_8))));	// 8413                  mov     cx, [bp+var_8] ;~ 041E:0B3A
cs=0x41e;eip=0x000b3d; 	T(SUB(cx, ax));	// 8414                  sub     cx, ax ;~ 041E:0B3D
cs=0x41e;eip=0x000b3f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), cx));	// 8415                  mov     [bp+var_4], cx ;~ 041E:0B3F
cs=0x41e;eip=0x000b42; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 8416                  mov     ax, [bp+var_6] ;~ 041E:0B42
cs=0x41e;eip=0x000b45; 	T(AND(ax, 0x0FFC0));	// 8417                  and     ax, 0FFC0h ;~ 041E:0B45
cs=0x41e;eip=0x000b48; 	X(OR(*(dw*)(raddr(ss,bp+var_4)), ax));	// 8418                  or      [bp+var_4], ax ;~ 041E:0B48
cs=0x41e;eip=0x000b4b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 8419                  push    [bp+var_4] ;~ 041E:0B4B
cs=0x41e;eip=0x000b4e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 8420                  push    [bp+var_2] ;~ 041E:0B4E
cs=0x41e;eip=0x000b51; 	J(CALL(sub_12a31,0));	// 8421                  call    sub_12A31 ;~ 041E:0B51
cs=0x41e;eip=0x000b54; 	T(ADD(sp, 4));	// 8422                  add     sp, 4 ;~ 041E:0B54
cs=0x41e;eip=0x000b57; 	T(sp = bp;);	// 8423                  mov     sp, bp ;~ 041E:0B57
cs=0x41e;eip=0x000b59; 	X(POP(bp));	// 8424                  pop     bp ;~ 041E:0B59
cs=0x41e;eip=0x000b5a; 	J(RETN(0));	// 8425                  retn ;~ 041E:0B5A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_132cc: 	goto loc_132cc;
        case m2c::kloc_132e3: 	goto loc_132e3;
        case m2c::ksub_132a2: 	goto sub_132a2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1331c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1331c:
    _begin:
#undef var_6
#define var_6 -6
	// 8438 var_6           = word ptr -6 ;~ 041E:0B5C
#undef var_4
#define var_4 -4
	// 8439 var_4           = word ptr -4 ;~ 041E:0B5C
#undef var_2
#define var_2 -2
	// 8440 var_2           = byte ptr -2 ;~ 041E:0B5C
#undef arg_0
#define arg_0 4
	// 8441 arg_0           = byte ptr  4 ;~ 041E:0B5C
cs=0x41e;eip=0x000b5c; 	X(PUSH(bp));	// 8443                  push    bp ;~ 041E:0B5C
cs=0x41e;eip=0x000b5d; 	T(bp = sp;);	// 8444                  mov     bp, sp ;~ 041E:0B5D
cs=0x41e;eip=0x000b5f; 	T(SUB(sp, 6));	// 8445                  sub     sp, 6 ;~ 041E:0B5F
cs=0x41e;eip=0x000b63; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8446                  mov     al, [bp+arg_0] ;~ 041E:0B63
cs=0x41e;eip=0x000b66; 	T(AND(ax, 0x0FF));	// 8447                  and     ax, 0FFh ;~ 041E:0B66
cs=0x41e;eip=0x000b69; 	T(CMP(ax, 6));	// 8448                  cmp     ax, 6 ;~ 041E:0B69
cs=0x41e;eip=0x000b6c; 	J(JGE(loc_13360));	// 8449                  jge     short loc_13360 ;~ 041E:0B6C
cs=0x41e;eip=0x000b6e; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8450                  mov     al, [bp+arg_0] ;~ 041E:0B6E
cs=0x41e;eip=0x000b71; 	T(AND(ax, 0x0FF));	// 8451                  and     ax, 0FFh ;~ 041E:0B71
cs=0x41e;eip=0x000b74; 	X(PUSH(ax));	// 8452                  push    ax ;~ 041E:0B74
cs=0x41e;eip=0x000b75; 	J(CALL(sub_13052,0));	// 8453                  call    sub_13052 ;~ 041E:0B75
cs=0x41e;eip=0x000b78; 	T(ADD(sp, 2));	// 8454                  add     sp, 2 ;~ 041E:0B78
cs=0x41e;eip=0x000b7b; 	T(ADD(ax, 0x0B0));	// 8455                  add     ax, 0B0h ;~ 041E:0B7B
cs=0x41e;eip=0x000b7e; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 8456                  mov     [bp+var_4], ax ;~ 041E:0B7E
cs=0x41e;eip=0x000b81; 	T(bx = ax;);	// 8457                  mov     bx, ax ;~ 041E:0B81
cs=0x41e;eip=0x000b83; 	T(MOV(al, *(raddr(ds,bx+0x0C32))));	// 8458                  mov     al, [bx+0C32h] ;~ 041E:0B83
cs=0x41e;eip=0x000b87; 	T(AND(ax, 0x0DF));	// 8459                  and     ax, 0DFh ;~ 041E:0B87
cs=0x41e;eip=0x000b8a; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 8460                  mov     [bp+var_2], al ;~ 041E:0B8A
cs=0x41e;eip=0x000b8d; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 8461                  mov     al, [bp+var_2] ;~ 041E:0B8D
cs=0x41e;eip=0x000b90; 	T(AND(ax, 0x0FF));	// 8462                  and     ax, 0FFh ;~ 041E:0B90
cs=0x41e;eip=0x000b93; 	X(PUSH(ax));	// 8463                  push    ax ;~ 041E:0B93
cs=0x41e;eip=0x000b94; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 8464                  push    [bp+var_4] ;~ 041E:0B94
cs=0x41e;eip=0x000b97; 	J(CALL(sub_12a31,0));	// 8465                  call    sub_12A31 ;~ 041E:0B97
cs=0x41e;eip=0x000b9a; 	T(ADD(sp, 4));	// 8466                  add     sp, 4 ;~ 041E:0B9A
cs=0x41e;eip=0x000b9d; 	J(JMP(loc_13394));	// 8467                  jmp     short loc_13394 ;~ 041E:0B9D
loc_13360:
	// 4563 
cs=0x41e;eip=0x000ba0; 	T(al = byte_1271f;);	// 8473                  mov     al, ds:byte_1271F ;~ 041E:0BA0
cs=0x41e;eip=0x000ba3; 	T(AND(ax, 0x0FF));	// 8474                  and     ax, 0FFh ;~ 041E:0BA3
cs=0x41e;eip=0x000ba6; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 8475                  mov     [bp+var_6], ax ;~ 041E:0BA6
cs=0x41e;eip=0x000ba9; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8476                  mov     al, [bp+arg_0] ;~ 041E:0BA9
cs=0x41e;eip=0x000bac; 	T(AND(ax, 0x0FF));	// 8477                  and     ax, 0FFh ;~ 041E:0BAC
cs=0x41e;eip=0x000baf; 	T(bx = ax;);	// 8478                  mov     bx, ax ;~ 041E:0BAF
cs=0x41e;eip=0x000bb1; 	T(ADD(bx, 0x0FFFA));	// 8479                  add     bx, 0FFFAh ;~ 041E:0BB1
cs=0x41e;eip=0x000bb4; 	T(MOV(al, *(raddr(ds,bx+0x28C))));	// 8480                  mov     al, [bx+28Ch] ;~ 041E:0BB4
cs=0x41e;eip=0x000bb8; 	T(CBW);	// 8481                  cbw ;~ 041E:0BB8
cs=0x41e;eip=0x000bb9; 	T(NOT(ax));	// 8482                  not     ax ;~ 041E:0BB9
cs=0x41e;eip=0x000bbb; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_6))));	// 8483                  mov     cx, [bp+var_6] ;~ 041E:0BBB
cs=0x41e;eip=0x000bbe; 	T(AND(cx, ax));	// 8484                  and     cx, ax ;~ 041E:0BBE
cs=0x41e;eip=0x000bc0; 	X(MOV(*(raddr(ss,bp+var_2)), cl));	// 8485                  mov     [bp+var_2], cl ;~ 041E:0BC0
cs=0x41e;eip=0x000bc3; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 8486                  mov     al, [bp+var_2] ;~ 041E:0BC3
cs=0x41e;eip=0x000bc6; 	T(AND(ax, 0x0FF));	// 8487                  and     ax, 0FFh ;~ 041E:0BC6
cs=0x41e;eip=0x000bc9; 	X(PUSH(ax));	// 8488                  push    ax ;~ 041E:0BC9
cs=0x41e;eip=0x000bca; 	T(ax = 0x0BD;);	// 8489                  mov     ax, 0BDh ;~ 041E:0BCA
cs=0x41e;eip=0x000bcd; 	X(PUSH(ax));	// 8490                  push    ax ;~ 041E:0BCD
cs=0x41e;eip=0x000bce; 	J(CALL(sub_12a31,0));	// 8491                  call    sub_12A31 ;~ 041E:0BCE
cs=0x41e;eip=0x000bd1; 	T(ADD(sp, 4));	// 8492                  add     sp, 4 ;~ 041E:0BD1
loc_13394:
	// 4564 
cs=0x41e;eip=0x000bd4; 	T(sp = bp;);	// 8495                  mov     sp, bp ;~ 041E:0BD4
cs=0x41e;eip=0x000bd6; 	X(POP(bp));	// 8496                  pop     bp ;~ 041E:0BD6
cs=0x41e;eip=0x000bd7; 	J(RETN(0));	// 8497                  retn ;~ 041E:0BD7

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_13360: 	goto loc_13360;
        case m2c::kloc_13394: 	goto loc_13394;
        case m2c::ksub_1331c: 	goto sub_1331c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13398(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13398:
    _begin:
#undef var_6
#define var_6 -6
	// 8508 var_6           = word ptr -6 ;~ 041E:0BD8
#undef var_4
#define var_4 -4
	// 8509 var_4           = word ptr -4 ;~ 041E:0BD8
#undef var_2
#define var_2 -2
	// 8510 var_2           = byte ptr -2 ;~ 041E:0BD8
#undef arg_0
#define arg_0 4
	// 8511 arg_0           = byte ptr  4 ;~ 041E:0BD8
#undef arg_2
#define arg_2 6
	// 8512 arg_2           = byte ptr  6 ;~ 041E:0BD8
#undef arg_4
#define arg_4 8
	// 8513 arg_4           = byte ptr  8 ;~ 041E:0BD8
#undef arg_6
#define arg_6 0x0A
	// 8514 arg_6           = byte ptr  0Ah ;~ 041E:0BD8
cs=0x41e;eip=0x000bd8; 	X(PUSH(bp));	// 8516                  push    bp ;~ 041E:0BD8
cs=0x41e;eip=0x000bd9; 	T(bp = sp;);	// 8517                  mov     bp, sp ;~ 041E:0BD9
cs=0x41e;eip=0x000bdb; 	T(SUB(sp, 6));	// 8518                  sub     sp, 6 ;~ 041E:0BDB
cs=0x41e;eip=0x000bdf; 	X(PUSH(si));	// 8519                  push    si ;~ 041E:0BDF
cs=0x41e;eip=0x000be0; 	X(PUSH(di));	// 8520                  push    di ;~ 041E:0BE0
cs=0x41e;eip=0x000be1; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8521                  mov     al, [bp+arg_0] ;~ 041E:0BE1
cs=0x41e;eip=0x000be4; 	T(AND(ax, 0x0FF));	// 8522                  and     ax, 0FFh ;~ 041E:0BE4
cs=0x41e;eip=0x000be7; 	T(bx = ax;);	// 8523                  mov     bx, ax ;~ 041E:0BE7
cs=0x41e;eip=0x000be9; 	T(SHL(bx, 1));	// 8524                  shl     bx, 1 ;~ 041E:0BE9
cs=0x41e;eip=0x000beb; 	T(SHL(bx, 1));	// 8525                  shl     bx, 1 ;~ 041E:0BEB
cs=0x41e;eip=0x000bed; 	T(SHL(bx, 1));	// 8526                  shl     bx, 1 ;~ 041E:0BED
cs=0x41e;eip=0x000bef; 	T(MOV(al, *(raddr(ds,bx+0x0D32))));	// 8527                  mov     al, [bx+0D32h] ;~ 041E:0BEF
cs=0x41e;eip=0x000bf3; 	T(AND(ax, 0x0FF));	// 8528                  and     ax, 0FFh ;~ 041E:0BF3
cs=0x41e;eip=0x000bf6; 	J(JNZ(loc_133bb));	// 8529                  jnz     short loc_133BB ;~ 041E:0BF6
cs=0x41e;eip=0x000bf8; 	J(JMP(loc_13492));	// 8530                  jmp     loc_13492 ;~ 041E:0BF8
loc_133bb:
	// 4565 
cs=0x41e;eip=0x000bfb; 	T(al = byte_12658;);	// 8534                  mov     al, ds:byte_12658 ;~ 041E:0BFB
cs=0x41e;eip=0x000bfe; 	T(AND(ax, 0x0FF));	// 8535                  and     ax, 0FFh ;~ 041E:0BFE
cs=0x41e;eip=0x000c01; 	J(JZ(loc_133c6));	// 8536                  jz      short loc_133C6 ;~ 041E:0C01
cs=0x41e;eip=0x000c03; 	J(JMP(loc_1342c));	// 8537                  jmp     loc_1342C ;~ 041E:0C03
loc_133c6:
	// 4566 
cs=0x41e;eip=0x000c06; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8541                  mov     al, [bp+arg_0] ;~ 041E:0C06
cs=0x41e;eip=0x000c09; 	X(byte_1265f = al;);	// 8542                  mov     ds:byte_1265F, al ;~ 041E:0C09
cs=0x41e;eip=0x000c0c; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8543                  mov     al, [bp+arg_0] ;~ 041E:0C0C
cs=0x41e;eip=0x000c0f; 	T(AND(ax, 0x0FF));	// 8544                  and     ax, 0FFh ;~ 041E:0C0F
cs=0x41e;eip=0x000c12; 	T(bx = ax;);	// 8545                  mov     bx, ax ;~ 041E:0C12
cs=0x41e;eip=0x000c14; 	T(SHL(bx, 1));	// 8546                  shl     bx, 1 ;~ 041E:0C14
cs=0x41e;eip=0x000c16; 	T(SHL(bx, 1));	// 8547                  shl     bx, 1 ;~ 041E:0C16
cs=0x41e;eip=0x000c18; 	T(SHL(bx, 1));	// 8548                  shl     bx, 1 ;~ 041E:0C18
cs=0x41e;eip=0x000c1a; 	T(MOV(al, *(raddr(ds,bx+0x0D32))));	// 8549                  mov     al, [bx+0D32h] ;~ 041E:0C1A
cs=0x41e;eip=0x000c1e; 	X(byte_12658 = al;);	// 8550                  mov     ds:byte_12658, al ;~ 041E:0C1E
cs=0x41e;eip=0x000c21; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8551                  mov     al, [bp+arg_0] ;~ 041E:0C21
cs=0x41e;eip=0x000c24; 	T(AND(ax, 0x0FF));	// 8552                  and     ax, 0FFh ;~ 041E:0C24
cs=0x41e;eip=0x000c27; 	T(SHL(ax, 1));	// 8553                  shl     ax, 1 ;~ 041E:0C27
cs=0x41e;eip=0x000c29; 	T(SHL(ax, 1));	// 8554                  shl     ax, 1 ;~ 041E:0C29
cs=0x41e;eip=0x000c2b; 	T(SHL(ax, 1));	// 8555                  shl     ax, 1 ;~ 041E:0C2B
cs=0x41e;eip=0x000c2d; 	T(bx = 0x0D32;);	// 8556                  mov     bx, 0D32h ;~ 041E:0C2D
cs=0x41e;eip=0x000c30; 	T(ADD(bx, ax));	// 8557                  add     bx, ax ;~ 041E:0C30
cs=0x41e;eip=0x000c32; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 8558                  mov     ax, [bx+2] ;~ 041E:0C32
cs=0x41e;eip=0x000c35; 	X(*(dw*)(&_unk_1265a) = ax;);	// 8559                  mov     word ptr ds:_unk_1265A, ax ;~ 041E:0C35
cs=0x41e;eip=0x000c38; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8560                  mov     al, [bp+arg_0] ;~ 041E:0C38
cs=0x41e;eip=0x000c3b; 	T(AND(ax, 0x0FF));	// 8561                  and     ax, 0FFh ;~ 041E:0C3B
cs=0x41e;eip=0x000c3e; 	T(SHL(ax, 1));	// 8562                  shl     ax, 1 ;~ 041E:0C3E
cs=0x41e;eip=0x000c40; 	T(SHL(ax, 1));	// 8563                  shl     ax, 1 ;~ 041E:0C40
cs=0x41e;eip=0x000c42; 	T(SHL(ax, 1));	// 8564                  shl     ax, 1 ;~ 041E:0C42
cs=0x41e;eip=0x000c44; 	T(bx = 0x0D32;);	// 8565                  mov     bx, 0D32h ;~ 041E:0C44
cs=0x41e;eip=0x000c47; 	T(ADD(bx, ax));	// 8566                  add     bx, ax ;~ 041E:0C47
cs=0x41e;eip=0x000c49; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 8567                  mov     ax, [bx+4] ;~ 041E:0C49
cs=0x41e;eip=0x000c4c; 	X(*(dw*)(&_unk_125c2) = ax;);	// 8568                  mov     word ptr ds:_unk_125C2, ax ;~ 041E:0C4C
cs=0x41e;eip=0x000c4f; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8569                  mov     al, [bp+arg_0] ;~ 041E:0C4F
cs=0x41e;eip=0x000c52; 	T(AND(ax, 0x0FF));	// 8570                  and     ax, 0FFh ;~ 041E:0C52
cs=0x41e;eip=0x000c55; 	T(SHL(ax, 1));	// 8571                  shl     ax, 1 ;~ 041E:0C55
cs=0x41e;eip=0x000c57; 	T(SHL(ax, 1));	// 8572                  shl     ax, 1 ;~ 041E:0C57
cs=0x41e;eip=0x000c59; 	T(SHL(ax, 1));	// 8573                  shl     ax, 1 ;~ 041E:0C59
cs=0x41e;eip=0x000c5b; 	T(bx = 0x0D32;);	// 8574                  mov     bx, 0D32h ;~ 041E:0C5B
cs=0x41e;eip=0x000c5e; 	T(ADD(bx, ax));	// 8575                  add     bx, ax ;~ 041E:0C5E
cs=0x41e;eip=0x000c60; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 8576                  mov     ax, [bx+6] ;~ 041E:0C60
cs=0x41e;eip=0x000c63; 	X(*(dw*)(&_unk_125c6) = ax;);	// 8577                  mov     word ptr ds:_unk_125C6, ax ;~ 041E:0C63
cs=0x41e;eip=0x000c66; 	J(CALL(sub_12b4b,0));	// 8578                  call    sub_12B4B ;~ 041E:0C66
cs=0x41e;eip=0x000c69; 	J(JMP(loc_1348f));	// 8579                  jmp     loc_1348F ;~ 041E:0C69
loc_1342c:
	// 4567 
cs=0x41e;eip=0x000c6c; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8583                  mov     al, [bp+arg_0] ;~ 041E:0C6C
cs=0x41e;eip=0x000c6f; 	X(byte_12660 = al;);	// 8584                  mov     ds:byte_12660, al ;~ 041E:0C6F
cs=0x41e;eip=0x000c72; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8585                  mov     al, [bp+arg_0] ;~ 041E:0C72
cs=0x41e;eip=0x000c75; 	T(AND(ax, 0x0FF));	// 8586                  and     ax, 0FFh ;~ 041E:0C75
cs=0x41e;eip=0x000c78; 	T(bx = ax;);	// 8587                  mov     bx, ax ;~ 041E:0C78
cs=0x41e;eip=0x000c7a; 	T(SHL(bx, 1));	// 8588                  shl     bx, 1 ;~ 041E:0C7A
cs=0x41e;eip=0x000c7c; 	T(SHL(bx, 1));	// 8589                  shl     bx, 1 ;~ 041E:0C7C
cs=0x41e;eip=0x000c7e; 	T(SHL(bx, 1));	// 8590                  shl     bx, 1 ;~ 041E:0C7E
cs=0x41e;eip=0x000c80; 	T(MOV(al, *(raddr(ds,bx+0x0D32))));	// 8591                  mov     al, [bx+0D32h] ;~ 041E:0C80
cs=0x41e;eip=0x000c84; 	X(byte_12659 = al;);	// 8592                  mov     ds:byte_12659, al ;~ 041E:0C84
cs=0x41e;eip=0x000c87; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8593                  mov     al, [bp+arg_0] ;~ 041E:0C87
cs=0x41e;eip=0x000c8a; 	T(AND(ax, 0x0FF));	// 8594                  and     ax, 0FFh ;~ 041E:0C8A
cs=0x41e;eip=0x000c8d; 	T(SHL(ax, 1));	// 8595                  shl     ax, 1 ;~ 041E:0C8D
cs=0x41e;eip=0x000c8f; 	T(SHL(ax, 1));	// 8596                  shl     ax, 1 ;~ 041E:0C8F
cs=0x41e;eip=0x000c91; 	T(SHL(ax, 1));	// 8597                  shl     ax, 1 ;~ 041E:0C91
cs=0x41e;eip=0x000c93; 	T(bx = 0x0D32;);	// 8598                  mov     bx, 0D32h ;~ 041E:0C93
cs=0x41e;eip=0x000c96; 	T(ADD(bx, ax));	// 8599                  add     bx, ax ;~ 041E:0C96
cs=0x41e;eip=0x000c98; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 8600                  mov     ax, [bx+2] ;~ 041E:0C98
cs=0x41e;eip=0x000c9b; 	X(word_1265c = ax;);	// 8601                  mov     ds:word_1265C, ax ;~ 041E:0C9B
cs=0x41e;eip=0x000c9e; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8602                  mov     al, [bp+arg_0] ;~ 041E:0C9E
cs=0x41e;eip=0x000ca1; 	T(AND(ax, 0x0FF));	// 8603                  and     ax, 0FFh ;~ 041E:0CA1
cs=0x41e;eip=0x000ca4; 	T(SHL(ax, 1));	// 8604                  shl     ax, 1 ;~ 041E:0CA4
cs=0x41e;eip=0x000ca6; 	T(SHL(ax, 1));	// 8605                  shl     ax, 1 ;~ 041E:0CA6
cs=0x41e;eip=0x000ca8; 	T(SHL(ax, 1));	// 8606                  shl     ax, 1 ;~ 041E:0CA8
cs=0x41e;eip=0x000caa; 	T(bx = 0x0D32;);	// 8607                  mov     bx, 0D32h ;~ 041E:0CAA
cs=0x41e;eip=0x000cad; 	T(ADD(bx, ax));	// 8608                  add     bx, ax ;~ 041E:0CAD
cs=0x41e;eip=0x000caf; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 8609                  mov     ax, [bx+4] ;~ 041E:0CAF
cs=0x41e;eip=0x000cb2; 	X(word_125c4 = ax;);	// 8610                  mov     ds:word_125C4, ax ;~ 041E:0CB2
cs=0x41e;eip=0x000cb5; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8611                  mov     al, [bp+arg_0] ;~ 041E:0CB5
cs=0x41e;eip=0x000cb8; 	T(AND(ax, 0x0FF));	// 8612                  and     ax, 0FFh ;~ 041E:0CB8
cs=0x41e;eip=0x000cbb; 	T(SHL(ax, 1));	// 8613                  shl     ax, 1 ;~ 041E:0CBB
cs=0x41e;eip=0x000cbd; 	T(SHL(ax, 1));	// 8614                  shl     ax, 1 ;~ 041E:0CBD
cs=0x41e;eip=0x000cbf; 	T(SHL(ax, 1));	// 8615                  shl     ax, 1 ;~ 041E:0CBF
cs=0x41e;eip=0x000cc1; 	T(bx = 0x0D32;);	// 8616                  mov     bx, 0D32h ;~ 041E:0CC1
cs=0x41e;eip=0x000cc4; 	T(ADD(bx, ax));	// 8617                  add     bx, ax ;~ 041E:0CC4
cs=0x41e;eip=0x000cc6; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 8618                  mov     ax, [bx+6] ;~ 041E:0CC6
cs=0x41e;eip=0x000cc9; 	X(*(dw*)(&_unk_125c8) = ax;);	// 8619                  mov     word ptr ds:_unk_125C8, ax ;~ 041E:0CC9
cs=0x41e;eip=0x000ccc; 	J(CALL(sub_12b4b,0));	// 8620                  call    sub_12B4B ;~ 041E:0CCC
loc_1348f:
	// 4568 
cs=0x41e;eip=0x000ccf; 	J(JMP(loc_1353e));	// 8623                  jmp     loc_1353E ;~ 041E:0CCF
loc_13492:
	// 4569 
cs=0x41e;eip=0x000cd2; 	T(CMP(*(raddr(ss,bp+arg_6)), 0));	// 8627                  cmp     [bp+arg_6], 0 ;~ 041E:0CD2
cs=0x41e;eip=0x000cd6; 	J(JNZ(loc_134a5));	// 8628                  jnz     short loc_134A5 ;~ 041E:0CD6
cs=0x41e;eip=0x000cd8; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8629                  mov     al, [bp+arg_0] ;~ 041E:0CD8
cs=0x41e;eip=0x000cdb; 	T(AND(ax, 0x0FF));	// 8630                  and     ax, 0FFh ;~ 041E:0CDB
cs=0x41e;eip=0x000cde; 	X(PUSH(ax));	// 8631                  push    ax ;~ 041E:0CDE
cs=0x41e;eip=0x000cdf; 	J(CALL(sub_1331c,0));	// 8632                  call    sub_1331C ;~ 041E:0CDF
cs=0x41e;eip=0x000ce2; 	T(ADD(sp, 2));	// 8633                  add     sp, 2 ;~ 041E:0CE2
loc_134a5:
	// 4570 
cs=0x41e;eip=0x000ce5; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 8636                  mov     al, [bp+arg_2] ;~ 041E:0CE5
cs=0x41e;eip=0x000ce8; 	T(AND(ax, 0x0FF));	// 8637                  and     ax, 0FFh ;~ 041E:0CE8
cs=0x41e;eip=0x000ceb; 	X(PUSH(ax));	// 8638                  push    ax ;~ 041E:0CEB
cs=0x41e;eip=0x000cec; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8639                  mov     al, [bp+arg_0] ;~ 041E:0CEC
cs=0x41e;eip=0x000cef; 	T(AND(ax, 0x0FF));	// 8640                  and     ax, 0FFh ;~ 041E:0CEF
cs=0x41e;eip=0x000cf2; 	X(PUSH(ax));	// 8641                  push    ax ;~ 041E:0CF2
cs=0x41e;eip=0x000cf3; 	J(CALL(sub_13132,0));	// 8642                  call    sub_13132 ;~ 041E:0CF3
cs=0x41e;eip=0x000cf6; 	T(ADD(sp, 4));	// 8643                  add     sp, 4 ;~ 041E:0CF6
cs=0x41e;eip=0x000cf9; 	T(MOV(al, *(raddr(ss,bp+arg_4))));	// 8644                  mov     al, [bp+arg_4] ;~ 041E:0CF9
cs=0x41e;eip=0x000cfc; 	T(AND(ax, 0x0FF));	// 8645                  and     ax, 0FFh ;~ 041E:0CFC
cs=0x41e;eip=0x000cff; 	X(PUSH(ax));	// 8646                  push    ax ;~ 041E:0CFF
cs=0x41e;eip=0x000d00; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8647                  mov     al, [bp+arg_0] ;~ 041E:0D00
cs=0x41e;eip=0x000d03; 	T(AND(ax, 0x0FF));	// 8648                  and     ax, 0FFh ;~ 041E:0D03
cs=0x41e;eip=0x000d06; 	X(PUSH(ax));	// 8649                  push    ax ;~ 041E:0D06
cs=0x41e;eip=0x000d07; 	J(CALL(sub_1307e,0));	// 8650                  call    sub_1307E ;~ 041E:0D07
cs=0x41e;eip=0x000d0a; 	T(ADD(sp, 4));	// 8651                  add     sp, 4 ;~ 041E:0D0A
cs=0x41e;eip=0x000d0d; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8652                  mov     al, [bp+arg_0] ;~ 041E:0D0D
cs=0x41e;eip=0x000d10; 	T(AND(ax, 0x0FF));	// 8653                  and     ax, 0FFh ;~ 041E:0D10
cs=0x41e;eip=0x000d13; 	T(CMP(ax, 6));	// 8654                  cmp     ax, 6 ;~ 041E:0D13
cs=0x41e;eip=0x000d16; 	J(JGE(loc_1350c));	// 8655                  jge     short loc_1350C ;~ 041E:0D16
cs=0x41e;eip=0x000d18; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8656                  mov     al, [bp+arg_0] ;~ 041E:0D18
cs=0x41e;eip=0x000d1b; 	T(AND(ax, 0x0FF));	// 8657                  and     ax, 0FFh ;~ 041E:0D1B
cs=0x41e;eip=0x000d1e; 	X(PUSH(ax));	// 8658                  push    ax ;~ 041E:0D1E
cs=0x41e;eip=0x000d1f; 	J(CALL(sub_13052,0));	// 8659                  call    sub_13052 ;~ 041E:0D1F
cs=0x41e;eip=0x000d22; 	T(ADD(sp, 2));	// 8660                  add     sp, 2 ;~ 041E:0D22
cs=0x41e;eip=0x000d25; 	T(ADD(ax, 0x0B0));	// 8661                  add     ax, 0B0h ;~ 041E:0D25
cs=0x41e;eip=0x000d28; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 8662                  mov     [bp+var_4], ax ;~ 041E:0D28
cs=0x41e;eip=0x000d2b; 	T(bx = ax;);	// 8663                  mov     bx, ax ;~ 041E:0D2B
cs=0x41e;eip=0x000d2d; 	T(MOV(al, *(raddr(ds,bx+0x0C32))));	// 8664                  mov     al, [bx+0C32h] ;~ 041E:0D2D
cs=0x41e;eip=0x000d31; 	T(AND(ax, 0x0FF));	// 8665                  and     ax, 0FFh ;~ 041E:0D31
cs=0x41e;eip=0x000d34; 	T(OR(ax, 0x20));	// 8666                  or      ax, 20h ;~ 041E:0D34
cs=0x41e;eip=0x000d37; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 8667                  mov     [bp+var_2], al ;~ 041E:0D37
cs=0x41e;eip=0x000d3a; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 8668                  mov     al, [bp+var_2] ;~ 041E:0D3A
cs=0x41e;eip=0x000d3d; 	T(AND(ax, 0x0FF));	// 8669                  and     ax, 0FFh ;~ 041E:0D3D
cs=0x41e;eip=0x000d40; 	X(PUSH(ax));	// 8670                  push    ax ;~ 041E:0D40
cs=0x41e;eip=0x000d41; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 8671                  push    [bp+var_4] ;~ 041E:0D41
cs=0x41e;eip=0x000d44; 	J(CALL(sub_12a31,0));	// 8672                  call    sub_12A31 ;~ 041E:0D44
cs=0x41e;eip=0x000d47; 	T(ADD(sp, 4));	// 8673                  add     sp, 4 ;~ 041E:0D47
cs=0x41e;eip=0x000d4a; 	J(JMP(loc_1353e));	// 8674                  jmp     short loc_1353E ;~ 041E:0D4A
loc_1350c:
	// 4571 
cs=0x41e;eip=0x000d4c; 	T(al = byte_1271f;);	// 8678                  mov     al, ds:byte_1271F ;~ 041E:0D4C
cs=0x41e;eip=0x000d4f; 	T(AND(ax, 0x0FF));	// 8679                  and     ax, 0FFh ;~ 041E:0D4F
cs=0x41e;eip=0x000d52; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 8680                  mov     [bp+var_6], ax ;~ 041E:0D52
cs=0x41e;eip=0x000d55; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 8681                  mov     al, [bp+arg_0] ;~ 041E:0D55
cs=0x41e;eip=0x000d58; 	T(AND(ax, 0x0FF));	// 8682                  and     ax, 0FFh ;~ 041E:0D58
cs=0x41e;eip=0x000d5b; 	T(bx = ax;);	// 8683                  mov     bx, ax ;~ 041E:0D5B
cs=0x41e;eip=0x000d5d; 	T(ADD(bx, 0x0FFFA));	// 8684                  add     bx, 0FFFAh ;~ 041E:0D5D
cs=0x41e;eip=0x000d60; 	T(MOV(al, *(raddr(ds,bx+0x28C))));	// 8685                  mov     al, [bx+28Ch] ;~ 041E:0D60
cs=0x41e;eip=0x000d64; 	T(CBW);	// 8686                  cbw ;~ 041E:0D64
cs=0x41e;eip=0x000d65; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_6))));	// 8687                  mov     cx, [bp+var_6] ;~ 041E:0D65
cs=0x41e;eip=0x000d68; 	T(OR(cx, ax));	// 8688                  or      cx, ax ;~ 041E:0D68
cs=0x41e;eip=0x000d6a; 	X(MOV(*(raddr(ss,bp+var_2)), cl));	// 8689                  mov     [bp+var_2], cl ;~ 041E:0D6A
cs=0x41e;eip=0x000d6d; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 8690                  mov     al, [bp+var_2] ;~ 041E:0D6D
cs=0x41e;eip=0x000d70; 	T(AND(ax, 0x0FF));	// 8691                  and     ax, 0FFh ;~ 041E:0D70
cs=0x41e;eip=0x000d73; 	X(PUSH(ax));	// 8692                  push    ax ;~ 041E:0D73
cs=0x41e;eip=0x000d74; 	T(ax = 0x0BD;);	// 8693                  mov     ax, 0BDh ;~ 041E:0D74
cs=0x41e;eip=0x000d77; 	X(PUSH(ax));	// 8694                  push    ax ;~ 041E:0D77
cs=0x41e;eip=0x000d78; 	J(CALL(sub_12a31,0));	// 8695                  call    sub_12A31 ;~ 041E:0D78
cs=0x41e;eip=0x000d7b; 	T(ADD(sp, 4));	// 8696                  add     sp, 4 ;~ 041E:0D7B
loc_1353e:
	// 4572 
cs=0x41e;eip=0x000d7e; 	X(POP(di));	// 8700                  pop     di ;~ 041E:0D7E
cs=0x41e;eip=0x000d7f; 	X(POP(si));	// 8701                  pop     si ;~ 041E:0D7F
cs=0x41e;eip=0x000d80; 	T(sp = bp;);	// 8702                  mov     sp, bp ;~ 041E:0D80
cs=0x41e;eip=0x000d82; 	X(POP(bp));	// 8703                  pop     bp ;~ 041E:0D82
cs=0x41e;eip=0x000d83; 	J(RETN(0));	// 8704                  retn ;~ 041E:0D83

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_133bb: 	goto loc_133bb;
        case m2c::kloc_133c6: 	goto loc_133c6;
        case m2c::kloc_1342c: 	goto loc_1342c;
        case m2c::kloc_1348f: 	goto loc_1348f;
        case m2c::kloc_13492: 	goto loc_13492;
        case m2c::kloc_134a5: 	goto loc_134a5;
        case m2c::kloc_1350c: 	goto loc_1350c;
        case m2c::kloc_1353e: 	goto loc_1353e;
        case m2c::ksub_13398: 	goto sub_13398;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13544(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13544:
    _begin:
#undef var_2
#define var_2 -2
	// 8714 var_2           = byte ptr -2 ;~ 041E:0D84
cs=0x41e;eip=0x000d84; 	X(PUSH(bp));	// 8716                  push    bp ;~ 041E:0D84
cs=0x41e;eip=0x000d85; 	T(bp = sp;);	// 8717                  mov     bp, sp ;~ 041E:0D85
cs=0x41e;eip=0x000d87; 	T(SUB(sp, 2));	// 8718                  sub     sp, 2 ;~ 041E:0D87
cs=0x41e;eip=0x000d8b; 	T(al = byte_1271f;);	// 8719                  mov     al, ds:byte_1271F ;~ 041E:0D8B
cs=0x41e;eip=0x000d8e; 	T(AND(ax, 0x3F));	// 8720                  and     ax, 3Fh ;~ 041E:0D8E
cs=0x41e;eip=0x000d91; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 8721                  mov     [bp+var_2], al ;~ 041E:0D91
cs=0x41e;eip=0x000d94; 	T(al = byte_11cda;);	// 8722                  mov     al, ds:byte_11CDA ;~ 041E:0D94
cs=0x41e;eip=0x000d97; 	T(AND(ax, 0x0FF));	// 8723                  and     ax, 0FFh ;~ 041E:0D97
cs=0x41e;eip=0x000d9a; 	J(JZ(loc_13562));	// 8724                  jz      short loc_13562 ;~ 041E:0D9A
cs=0x41e;eip=0x000d9c; 	T(ax = 0x80;);	// 8725                  mov     ax, 80h ;~ 041E:0D9C
cs=0x41e;eip=0x000d9f; 	J(JMP(loc_13564));	// 8726                  jmp     short loc_13564 ;~ 041E:0D9F
loc_13562:
	// 4573 
cs=0x41e;eip=0x000da2; 	T(XOR(ax, ax));	// 8732                  xor     ax, ax ;~ 041E:0DA2
loc_13564:
	// 4574 
cs=0x41e;eip=0x000da4; 	X(OR(*(raddr(ss,bp+var_2)), al));	// 8735                  or      [bp+var_2], al ;~ 041E:0DA4
cs=0x41e;eip=0x000da7; 	T(al = byte_11cdb;);	// 8736                  mov     al, ds:byte_11CDB ;~ 041E:0DA7
cs=0x41e;eip=0x000daa; 	T(AND(ax, 0x0FF));	// 8737                  and     ax, 0FFh ;~ 041E:0DAA
cs=0x41e;eip=0x000dad; 	J(JZ(loc_13574));	// 8738                  jz      short loc_13574 ;~ 041E:0DAD
cs=0x41e;eip=0x000daf; 	T(ax = 0x40;);	// 8739                  mov     ax, 40h ; '@' ;~ 041E:0DAF
cs=0x41e;eip=0x000db2; 	J(JMP(loc_13576));	// 8740                  jmp     short loc_13576 ;~ 041E:0DB2
loc_13574:
	// 4575 
cs=0x41e;eip=0x000db4; 	T(XOR(ax, ax));	// 8744                  xor     ax, ax ;~ 041E:0DB4
loc_13576:
	// 4576 
cs=0x41e;eip=0x000db6; 	X(OR(*(raddr(ss,bp+var_2)), al));	// 8747                  or      [bp+var_2], al ;~ 041E:0DB6
cs=0x41e;eip=0x000db9; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 8748                  mov     al, [bp+var_2] ;~ 041E:0DB9
cs=0x41e;eip=0x000dbc; 	T(AND(ax, 0x0FF));	// 8749                  and     ax, 0FFh ;~ 041E:0DBC
cs=0x41e;eip=0x000dbf; 	X(PUSH(ax));	// 8750                  push    ax ;~ 041E:0DBF
cs=0x41e;eip=0x000dc0; 	T(ax = 0x0BD;);	// 8751                  mov     ax, 0BDh ;~ 041E:0DC0
cs=0x41e;eip=0x000dc3; 	X(PUSH(ax));	// 8752                  push    ax ;~ 041E:0DC3
cs=0x41e;eip=0x000dc4; 	J(CALL(sub_12a31,0));	// 8753                  call    sub_12A31 ;~ 041E:0DC4
cs=0x41e;eip=0x000dc7; 	T(ADD(sp, 4));	// 8754                  add     sp, 4 ;~ 041E:0DC7
cs=0x41e;eip=0x000dca; 	T(sp = bp;);	// 8755                  mov     sp, bp ;~ 041E:0DCA
cs=0x41e;eip=0x000dcc; 	X(POP(bp));	// 8756                  pop     bp ;~ 041E:0DCC
cs=0x41e;eip=0x000dcd; 	J(RETN(0));	// 8757                  retn ;~ 041E:0DCD

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_13562: 	goto loc_13562;
        case m2c::kloc_13564: 	goto loc_13564;
        case m2c::kloc_13574: 	goto loc_13574;
        case m2c::kloc_13576: 	goto loc_13576;
        case m2c::ksub_13544: 	goto sub_13544;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1358e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1358e:
    _begin:
cs=0x41e;eip=0x000dce; 	T(al = byte_11cdc;);	// 8765                  mov     al, ds:byte_11CDC ;~ 041E:0DCE
cs=0x41e;eip=0x000dd1; 	T(AND(ax, 0x0FF));	// 8766                  and     ax, 0FFh ;~ 041E:0DD1
cs=0x41e;eip=0x000dd4; 	J(JZ(loc_1359c));	// 8767                  jz      short loc_1359C ;~ 041E:0DD4
cs=0x41e;eip=0x000dd6; 	T(ax = 0x40;);	// 8768                  mov     ax, 40h ; '@' ;~ 041E:0DD6
cs=0x41e;eip=0x000dd9; 	J(JMP(loc_1359e));	// 8769                  jmp     short loc_1359E ;~ 041E:0DD9
loc_1359c:
	// 4577 
cs=0x41e;eip=0x000ddc; 	T(XOR(ax, ax));	// 8775                  xor     ax, ax ;~ 041E:0DDC
loc_1359e:
	// 4578 
cs=0x41e;eip=0x000dde; 	X(PUSH(ax));	// 8778                  push    ax ;~ 041E:0DDE
cs=0x41e;eip=0x000ddf; 	T(ax = 8;);	// 8779                  mov     ax, 8 ;~ 041E:0DDF
cs=0x41e;eip=0x000de2; 	X(PUSH(ax));	// 8780                  push    ax ;~ 041E:0DE2
cs=0x41e;eip=0x000de3; 	J(CALL(sub_12a31,0));	// 8781                  call    sub_12A31 ;~ 041E:0DE3
cs=0x41e;eip=0x000de6; 	T(ADD(sp, 4));	// 8782                  add     sp, 4 ;~ 041E:0DE6
cs=0x41e;eip=0x000de9; 	J(RETN(0));	// 8783                  retn ;~ 041E:0DE9

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1359c: 	goto loc_1359c;
        case m2c::kloc_1359e: 	goto loc_1359e;
        case m2c::ksub_1358e: 	goto sub_1358e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_135aa(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_135aa:
    _begin:
#undef var_4
#define var_4 -4
	// 8793 var_4           = word ptr -4 ;~ 041E:0DEA
#undef var_2
#define var_2 -2
	// 8794 var_2           = word ptr -2 ;~ 041E:0DEA
cs=0x41e;eip=0x000dea; 	X(PUSH(bp));	// 8796                  push    bp ;~ 041E:0DEA
cs=0x41e;eip=0x000deb; 	T(bp = sp;);	// 8797                  mov     bp, sp ;~ 041E:0DEB
cs=0x41e;eip=0x000ded; 	T(SUB(sp, 4));	// 8798                  sub     sp, 4 ;~ 041E:0DED
cs=0x41e;eip=0x000df1; 	T(ax = *(dw*)(&_unk_127bc););	// 8799                  mov     ax, word ptr ds:_unk_127BC ;~ 041E:0DF1
cs=0x41e;eip=0x000df4; 	T(ADD(ax, 0x40));	// 8800                  add     ax, 40h ; '@' ;~ 041E:0DF4
cs=0x41e;eip=0x000df7; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 8801                  mov     [bp+var_4], ax ;~ 041E:0DF7
cs=0x41e;eip=0x000dfa; 	T(bx = *(dw*)(&_unk_127be););	// 8802                  mov     bx, word ptr ds:_unk_127BE ;~ 041E:0DFA
cs=0x41e;eip=0x000dfe; 	T(MOV(al, *(raddr(ds,bx+6))));	// 8803                  mov     al, [bx+6] ;~ 041E:0DFE
cs=0x41e;eip=0x000e01; 	T(AND(ax, 0x3F));	// 8804                  and     ax, 3Fh ;~ 041E:0E01
cs=0x41e;eip=0x000e04; 	T(cx = 0x3F;);	// 8805                  mov     cx, 3Fh ; '?' ;~ 041E:0E04
cs=0x41e;eip=0x000e07; 	T(SUB(cx, ax));	// 8806                  sub     cx, ax ;~ 041E:0E07
cs=0x41e;eip=0x000e09; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), cx));	// 8807                  mov     [bp+var_2], cx ;~ 041E:0E09
cs=0x41e;eip=0x000e0c; 	T(bx = *(dw*)(&_unk_127be););	// 8808                  mov     bx, word ptr ds:_unk_127BE ;~ 041E:0E0C
cs=0x41e;eip=0x000e10; 	T(MOV(al, *(raddr(ds,bx+7))));	// 8809                  mov     al, [bx+7] ;~ 041E:0E10
cs=0x41e;eip=0x000e13; 	T(AND(ax, 0x0FF));	// 8810                  and     ax, 0FFh ;~ 041E:0E13
cs=0x41e;eip=0x000e16; 	T(cx = 6;);	// 8811                  mov     cx, 6 ;~ 041E:0E16
cs=0x41e;eip=0x000e19; 	T(SHL(ax, cl));	// 8812                  shl     ax, cl ;~ 041E:0E19
cs=0x41e;eip=0x000e1b; 	X(OR(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8813                  or      [bp+var_2], ax ;~ 041E:0E1B
cs=0x41e;eip=0x000e1e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 8814                  push    [bp+var_2] ;~ 041E:0E1E
cs=0x41e;eip=0x000e21; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 8815                  mov     ax, [bp+var_4] ;~ 041E:0E21
cs=0x41e;eip=0x000e24; 	X(PUSH(ax));	// 8816                  push    ax ;~ 041E:0E24
cs=0x41e;eip=0x000e25; 	J(CALL(sub_12a31,0));	// 8817                  call    sub_12A31 ;~ 041E:0E25
cs=0x41e;eip=0x000e28; 	T(ADD(sp, 4));	// 8818                  add     sp, 4 ;~ 041E:0E28
cs=0x41e;eip=0x000e2b; 	T(sp = bp;);	// 8819                  mov     sp, bp ;~ 041E:0E2B
cs=0x41e;eip=0x000e2d; 	X(POP(bp));	// 8820                  pop     bp ;~ 041E:0E2D
cs=0x41e;eip=0x000e2e; 	J(RETN(0));	// 8821                  retn ;~ 041E:0E2E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_135aa: 	goto sub_135aa;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_135f0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_135f0:
    _begin:
#undef var_4
#define var_4 -4
	// 8833 var_4           = word ptr -4 ;~ 041E:0E30
#undef var_2
#define var_2 -2
	// 8834 var_2           = word ptr -2 ;~ 041E:0E30
cs=0x41e;eip=0x000e30; 	X(PUSH(bp));	// 8836                  push    bp ;~ 041E:0E30
cs=0x41e;eip=0x000e31; 	T(bp = sp;);	// 8837                  mov     bp, sp ;~ 041E:0E31
cs=0x41e;eip=0x000e33; 	T(SUB(sp, 4));	// 8838                  sub     sp, 4 ;~ 041E:0E33
cs=0x41e;eip=0x000e37; 	T(ax = *(dw*)(&_unk_127ba););	// 8839                  mov     ax, word ptr ds:_unk_127BA ;~ 041E:0E37
cs=0x41e;eip=0x000e3a; 	T(ADD(ax, 0x0C0));	// 8840                  add     ax, 0C0h ;~ 041E:0E3A
cs=0x41e;eip=0x000e3d; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 8841                  mov     [bp+var_4], ax ;~ 041E:0E3D
cs=0x41e;eip=0x000e40; 	T(bx = *(dw*)(&_unk_127be););	// 8842                  mov     bx, word ptr ds:_unk_127BE ;~ 041E:0E40
cs=0x41e;eip=0x000e44; 	T(MOV(al, *(raddr(ds,bx+0x0A))));	// 8843                  mov     al, [bx+0Ah] ;~ 041E:0E44
cs=0x41e;eip=0x000e47; 	T(AND(ax, 0x0FF));	// 8844                  and     ax, 0FFh ;~ 041E:0E47
cs=0x41e;eip=0x000e4a; 	T(SHL(ax, 1));	// 8845                  shl     ax, 1 ;~ 041E:0E4A
cs=0x41e;eip=0x000e4c; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8846                  mov     [bp+var_2], ax ;~ 041E:0E4C
cs=0x41e;eip=0x000e4f; 	T(bx = *(dw*)(&_unk_127be););	// 8847                  mov     bx, word ptr ds:_unk_127BE ;~ 041E:0E4F
cs=0x41e;eip=0x000e53; 	T(MOV(al, *(raddr(ds,bx+0x0D))));	// 8848                  mov     al, [bx+0Dh] ;~ 041E:0E53
cs=0x41e;eip=0x000e56; 	T(AND(ax, 0x0FF));	// 8849                  and     ax, 0FFh ;~ 041E:0E56
cs=0x41e;eip=0x000e59; 	J(JZ(loc_13620));	// 8850                  jz      short loc_13620 ;~ 041E:0E59
cs=0x41e;eip=0x000e5b; 	T(XOR(ax, ax));	// 8851                  xor     ax, ax ;~ 041E:0E5B
cs=0x41e;eip=0x000e5d; 	J(JMP(loc_13623));	// 8852                  jmp     short loc_13623 ;~ 041E:0E5D
loc_13620:
	// 4579 
cs=0x41e;eip=0x000e60; 	T(ax = 1;);	// 8858                  mov     ax, 1 ;~ 041E:0E60
loc_13623:
	// 4580 
cs=0x41e;eip=0x000e63; 	X(OR(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8861                  or      [bp+var_2], ax ;~ 041E:0E63
cs=0x41e;eip=0x000e66; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 8862                  push    [bp+var_2] ;~ 041E:0E66
cs=0x41e;eip=0x000e69; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 8863                  mov     ax, [bp+var_4] ;~ 041E:0E69
cs=0x41e;eip=0x000e6c; 	X(PUSH(ax));	// 8864                  push    ax ;~ 041E:0E6C
cs=0x41e;eip=0x000e6d; 	J(CALL(sub_12a31,0));	// 8865                  call    sub_12A31 ;~ 041E:0E6D
cs=0x41e;eip=0x000e70; 	T(ADD(sp, 4));	// 8866                  add     sp, 4 ;~ 041E:0E70
cs=0x41e;eip=0x000e73; 	T(sp = bp;);	// 8867                  mov     sp, bp ;~ 041E:0E73
cs=0x41e;eip=0x000e75; 	X(POP(bp));	// 8868                  pop     bp ;~ 041E:0E75
cs=0x41e;eip=0x000e76; 	J(RETN(0));	// 8869                  retn ;~ 041E:0E76

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_13620: 	goto loc_13620;
        case m2c::kloc_13623: 	goto loc_13623;
        case m2c::ksub_135f0: 	goto sub_135f0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13638(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13638:
    _begin:
#undef var_4
#define var_4 -4
	// 8881 var_4           = word ptr -4 ;~ 041E:0E78
#undef var_2
#define var_2 -2
	// 8882 var_2           = word ptr -2 ;~ 041E:0E78
cs=0x41e;eip=0x000e78; 	X(PUSH(bp));	// 8884                  push    bp ;~ 041E:0E78
cs=0x41e;eip=0x000e79; 	T(bp = sp;);	// 8885                  mov     bp, sp ;~ 041E:0E79
cs=0x41e;eip=0x000e7b; 	T(SUB(sp, 4));	// 8886                  sub     sp, 4 ;~ 041E:0E7B
cs=0x41e;eip=0x000e7f; 	T(ax = *(dw*)(&_unk_127bc););	// 8887                  mov     ax, word ptr ds:_unk_127BC ;~ 041E:0E7F
cs=0x41e;eip=0x000e82; 	T(ADD(ax, 0x60));	// 8888                  add     ax, 60h ; '`' ;~ 041E:0E82
cs=0x41e;eip=0x000e85; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 8889                  mov     [bp+var_4], ax ;~ 041E:0E85
cs=0x41e;eip=0x000e88; 	T(bx = *(dw*)(&_unk_127be););	// 8890                  mov     bx, word ptr ds:_unk_127BE ;~ 041E:0E88
cs=0x41e;eip=0x000e8c; 	T(MOV(al, *(raddr(ds,bx))));	// 8891                  mov     al, [bx] ;~ 041E:0E8C
cs=0x41e;eip=0x000e8e; 	T(AND(ax, 0x0FF));	// 8892                  and     ax, 0FFh ;~ 041E:0E8E
cs=0x41e;eip=0x000e91; 	T(SHL(ax, 1));	// 8893                  shl     ax, 1 ;~ 041E:0E91
cs=0x41e;eip=0x000e93; 	T(SHL(ax, 1));	// 8894                  shl     ax, 1 ;~ 041E:0E93
cs=0x41e;eip=0x000e95; 	T(SHL(ax, 1));	// 8895                  shl     ax, 1 ;~ 041E:0E95
cs=0x41e;eip=0x000e97; 	T(SHL(ax, 1));	// 8896                  shl     ax, 1 ;~ 041E:0E97
cs=0x41e;eip=0x000e99; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8897                  mov     [bp+var_2], ax ;~ 041E:0E99
cs=0x41e;eip=0x000e9c; 	T(bx = *(dw*)(&_unk_127be););	// 8898                  mov     bx, word ptr ds:_unk_127BE ;~ 041E:0E9C
cs=0x41e;eip=0x000ea0; 	T(MOV(al, *(raddr(ds,bx+1))));	// 8899                  mov     al, [bx+1] ;~ 041E:0EA0
cs=0x41e;eip=0x000ea3; 	T(AND(ax, 0x0F));	// 8900                  and     ax, 0Fh ;~ 041E:0EA3
cs=0x41e;eip=0x000ea6; 	X(OR(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8901                  or      [bp+var_2], ax ;~ 041E:0EA6
cs=0x41e;eip=0x000ea9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 8902                  push    [bp+var_2] ;~ 041E:0EA9
cs=0x41e;eip=0x000eac; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 8903                  mov     ax, [bp+var_4] ;~ 041E:0EAC
cs=0x41e;eip=0x000eaf; 	X(PUSH(ax));	// 8904                  push    ax ;~ 041E:0EAF
cs=0x41e;eip=0x000eb0; 	J(CALL(sub_12a31,0));	// 8905                  call    sub_12A31 ;~ 041E:0EB0
cs=0x41e;eip=0x000eb3; 	T(ADD(sp, 4));	// 8906                  add     sp, 4 ;~ 041E:0EB3
cs=0x41e;eip=0x000eb6; 	T(sp = bp;);	// 8907                  mov     sp, bp ;~ 041E:0EB6
cs=0x41e;eip=0x000eb8; 	X(POP(bp));	// 8908                  pop     bp ;~ 041E:0EB8
cs=0x41e;eip=0x000eb9; 	J(RETN(0));	// 8909                  retn ;~ 041E:0EB9

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_13638: 	goto sub_13638;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1367a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1367a:
    _begin:
#undef var_4
#define var_4 -4
	// 8919 var_4           = word ptr -4 ;~ 041E:0EBA
#undef var_2
#define var_2 -2
	// 8920 var_2           = word ptr -2 ;~ 041E:0EBA
cs=0x41e;eip=0x000eba; 	X(PUSH(bp));	// 8922                  push    bp ;~ 041E:0EBA
cs=0x41e;eip=0x000ebb; 	T(bp = sp;);	// 8923                  mov     bp, sp ;~ 041E:0EBB
cs=0x41e;eip=0x000ebd; 	T(SUB(sp, 4));	// 8924                  sub     sp, 4 ;~ 041E:0EBD
cs=0x41e;eip=0x000ec1; 	T(ax = *(dw*)(&_unk_127bc););	// 8925                  mov     ax, word ptr ds:_unk_127BC ;~ 041E:0EC1
cs=0x41e;eip=0x000ec4; 	T(ADD(ax, 0x80));	// 8926                  add     ax, 80h ;~ 041E:0EC4
cs=0x41e;eip=0x000ec7; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 8927                  mov     [bp+var_4], ax ;~ 041E:0EC7
cs=0x41e;eip=0x000eca; 	T(bx = *(dw*)(&_unk_127be););	// 8928                  mov     bx, word ptr ds:_unk_127BE ;~ 041E:0ECA
cs=0x41e;eip=0x000ece; 	T(MOV(al, *(raddr(ds,bx+2))));	// 8929                  mov     al, [bx+2] ;~ 041E:0ECE
cs=0x41e;eip=0x000ed1; 	T(AND(ax, 0x0FF));	// 8930                  and     ax, 0FFh ;~ 041E:0ED1
cs=0x41e;eip=0x000ed4; 	T(SHL(ax, 1));	// 8931                  shl     ax, 1 ;~ 041E:0ED4
cs=0x41e;eip=0x000ed6; 	T(SHL(ax, 1));	// 8932                  shl     ax, 1 ;~ 041E:0ED6
cs=0x41e;eip=0x000ed8; 	T(SHL(ax, 1));	// 8933                  shl     ax, 1 ;~ 041E:0ED8
cs=0x41e;eip=0x000eda; 	T(SHL(ax, 1));	// 8934                  shl     ax, 1 ;~ 041E:0EDA
cs=0x41e;eip=0x000edc; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8935                  mov     [bp+var_2], ax ;~ 041E:0EDC
cs=0x41e;eip=0x000edf; 	T(bx = *(dw*)(&_unk_127be););	// 8936                  mov     bx, word ptr ds:_unk_127BE ;~ 041E:0EDF
cs=0x41e;eip=0x000ee3; 	T(MOV(al, *(raddr(ds,bx+3))));	// 8937                  mov     al, [bx+3] ;~ 041E:0EE3
cs=0x41e;eip=0x000ee6; 	T(AND(ax, 0x0F));	// 8938                  and     ax, 0Fh ;~ 041E:0EE6
cs=0x41e;eip=0x000ee9; 	X(OR(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8939                  or      [bp+var_2], ax ;~ 041E:0EE9
cs=0x41e;eip=0x000eec; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 8940                  push    [bp+var_2] ;~ 041E:0EEC
cs=0x41e;eip=0x000eef; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 8941                  mov     ax, [bp+var_4] ;~ 041E:0EEF
cs=0x41e;eip=0x000ef2; 	X(PUSH(ax));	// 8942                  push    ax ;~ 041E:0EF2
cs=0x41e;eip=0x000ef3; 	J(CALL(sub_12a31,0));	// 8943                  call    sub_12A31 ;~ 041E:0EF3
cs=0x41e;eip=0x000ef6; 	T(ADD(sp, 4));	// 8944                  add     sp, 4 ;~ 041E:0EF6
cs=0x41e;eip=0x000ef9; 	T(sp = bp;);	// 8945                  mov     sp, bp ;~ 041E:0EF9
cs=0x41e;eip=0x000efb; 	X(POP(bp));	// 8946                  pop     bp ;~ 041E:0EFB
cs=0x41e;eip=0x000efc; 	J(RETN(0));	// 8947                  retn ;~ 041E:0EFC

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_1367a: 	goto sub_1367a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_136be(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_136be:
    _begin:
#undef var_4
#define var_4 -4
	// 8959 var_4           = word ptr -4 ;~ 041E:0EFE
#undef var_2
#define var_2 -2
	// 8960 var_2           = word ptr -2 ;~ 041E:0EFE
cs=0x41e;eip=0x000efe; 	X(PUSH(bp));	// 8962                  push    bp ;~ 041E:0EFE
cs=0x41e;eip=0x000eff; 	T(bp = sp;);	// 8963                  mov     bp, sp ;~ 041E:0EFF
cs=0x41e;eip=0x000f01; 	T(SUB(sp, 4));	// 8964                  sub     sp, 4 ;~ 041E:0F01
cs=0x41e;eip=0x000f05; 	T(ax = *(dw*)(&_unk_127bc););	// 8965                  mov     ax, word ptr ds:_unk_127BC ;~ 041E:0F05
cs=0x41e;eip=0x000f08; 	T(ADD(ax, 0x20));	// 8966                  add     ax, 20h ; ' ' ;~ 041E:0F08
cs=0x41e;eip=0x000f0b; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 8967                  mov     [bp+var_4], ax ;~ 041E:0F0B
cs=0x41e;eip=0x000f0e; 	T(bx = *(dw*)(&_unk_127be););	// 8968                  mov     bx, word ptr ds:_unk_127BE ;~ 041E:0F0E
cs=0x41e;eip=0x000f12; 	T(MOV(al, *(raddr(ds,bx+0x0B))));	// 8969                  mov     al, [bx+0Bh] ;~ 041E:0F12
cs=0x41e;eip=0x000f15; 	T(AND(ax, 0x0FF));	// 8970                  and     ax, 0FFh ;~ 041E:0F15
cs=0x41e;eip=0x000f18; 	J(JZ(loc_136e0));	// 8971                  jz      short loc_136E0 ;~ 041E:0F18
cs=0x41e;eip=0x000f1a; 	T(ax = 0x80;);	// 8972                  mov     ax, 80h ;~ 041E:0F1A
cs=0x41e;eip=0x000f1d; 	J(JMP(loc_136e2));	// 8973                  jmp     short loc_136E2 ;~ 041E:0F1D
loc_136e0:
	// 4581 
cs=0x41e;eip=0x000f20; 	T(XOR(ax, ax));	// 8979                  xor     ax, ax ;~ 041E:0F20
loc_136e2:
	// 4582 
cs=0x41e;eip=0x000f22; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8982                  mov     [bp+var_2], ax ;~ 041E:0F22
cs=0x41e;eip=0x000f25; 	T(bx = *(dw*)(&_unk_127be););	// 8983                  mov     bx, word ptr ds:_unk_127BE ;~ 041E:0F25
cs=0x41e;eip=0x000f29; 	T(MOV(al, *(raddr(ds,bx+0x0C))));	// 8984                  mov     al, [bx+0Ch] ;~ 041E:0F29
cs=0x41e;eip=0x000f2c; 	T(AND(ax, 0x0FF));	// 8985                  and     ax, 0FFh ;~ 041E:0F2C
cs=0x41e;eip=0x000f2f; 	J(JZ(loc_136f6));	// 8986                  jz      short loc_136F6 ;~ 041E:0F2F
cs=0x41e;eip=0x000f31; 	T(ax = 0x40;);	// 8987                  mov     ax, 40h ; '@' ;~ 041E:0F31
cs=0x41e;eip=0x000f34; 	J(JMP(loc_136f8));	// 8988                  jmp     short loc_136F8 ;~ 041E:0F34
loc_136f6:
	// 4583 
cs=0x41e;eip=0x000f36; 	T(XOR(ax, ax));	// 8992                  xor     ax, ax ;~ 041E:0F36
loc_136f8:
	// 4584 
cs=0x41e;eip=0x000f38; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), ax));	// 8995                  add     [bp+var_2], ax ;~ 041E:0F38
cs=0x41e;eip=0x000f3b; 	T(bx = *(dw*)(&_unk_127be););	// 8996                  mov     bx, word ptr ds:_unk_127BE ;~ 041E:0F3B
cs=0x41e;eip=0x000f3f; 	T(MOV(al, *(raddr(ds,bx+4))));	// 8997                  mov     al, [bx+4] ;~ 041E:0F3F
cs=0x41e;eip=0x000f42; 	T(AND(ax, 0x0FF));	// 8998                  and     ax, 0FFh ;~ 041E:0F42
cs=0x41e;eip=0x000f45; 	J(JZ(loc_1370c));	// 8999                  jz      short loc_1370C ;~ 041E:0F45
cs=0x41e;eip=0x000f47; 	T(ax = 0x20;);	// 9000                  mov     ax, 20h ; ' ' ;~ 041E:0F47
cs=0x41e;eip=0x000f4a; 	J(JMP(loc_1370e));	// 9001                  jmp     short loc_1370E ;~ 041E:0F4A
loc_1370c:
	// 4585 
cs=0x41e;eip=0x000f4c; 	T(XOR(ax, ax));	// 9005                  xor     ax, ax ;~ 041E:0F4C
loc_1370e:
	// 4586 
cs=0x41e;eip=0x000f4e; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9008                  add     [bp+var_2], ax ;~ 041E:0F4E
cs=0x41e;eip=0x000f51; 	T(bx = *(dw*)(&_unk_127be););	// 9009                  mov     bx, word ptr ds:_unk_127BE ;~ 041E:0F51
cs=0x41e;eip=0x000f55; 	T(MOV(al, *(raddr(ds,bx+5))));	// 9010                  mov     al, [bx+5] ;~ 041E:0F55
cs=0x41e;eip=0x000f58; 	T(AND(ax, 0x0FF));	// 9011                  and     ax, 0FFh ;~ 041E:0F58
cs=0x41e;eip=0x000f5b; 	J(JZ(loc_13722));	// 9012                  jz      short loc_13722 ;~ 041E:0F5B
cs=0x41e;eip=0x000f5d; 	T(ax = 0x10;);	// 9013                  mov     ax, 10h ;~ 041E:0F5D
cs=0x41e;eip=0x000f60; 	J(JMP(loc_13724));	// 9014                  jmp     short loc_13724 ;~ 041E:0F60
loc_13722:
	// 4587 
cs=0x41e;eip=0x000f62; 	T(XOR(ax, ax));	// 9018                  xor     ax, ax ;~ 041E:0F62
loc_13724:
	// 4588 
cs=0x41e;eip=0x000f64; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9021                  add     [bp+var_2], ax ;~ 041E:0F64
cs=0x41e;eip=0x000f67; 	T(bx = *(dw*)(&_unk_127be););	// 9022                  mov     bx, word ptr ds:_unk_127BE ;~ 041E:0F67
cs=0x41e;eip=0x000f6b; 	T(MOV(al, *(raddr(ds,bx+9))));	// 9023                  mov     al, [bx+9] ;~ 041E:0F6B
cs=0x41e;eip=0x000f6e; 	T(AND(ax, 0x0F));	// 9024                  and     ax, 0Fh ;~ 041E:0F6E
cs=0x41e;eip=0x000f71; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9025                  add     [bp+var_2], ax ;~ 041E:0F71
cs=0x41e;eip=0x000f74; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 9026                  push    [bp+var_2] ;~ 041E:0F74
cs=0x41e;eip=0x000f77; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 9027                  mov     ax, [bp+var_4] ;~ 041E:0F77
cs=0x41e;eip=0x000f7a; 	X(PUSH(ax));	// 9028                  push    ax ;~ 041E:0F7A
cs=0x41e;eip=0x000f7b; 	J(CALL(sub_12a31,0));	// 9029                  call    sub_12A31 ;~ 041E:0F7B
cs=0x41e;eip=0x000f7e; 	T(ADD(sp, 4));	// 9030                  add     sp, 4 ;~ 041E:0F7E
cs=0x41e;eip=0x000f81; 	T(sp = bp;);	// 9031                  mov     sp, bp ;~ 041E:0F81
cs=0x41e;eip=0x000f83; 	X(POP(bp));	// 9032                  pop     bp ;~ 041E:0F83
cs=0x41e;eip=0x000f84; 	J(RETN(0));	// 9033                  retn ;~ 041E:0F84

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_136e0: 	goto loc_136e0;
        case m2c::kloc_136e2: 	goto loc_136e2;
        case m2c::kloc_136f6: 	goto loc_136f6;
        case m2c::kloc_136f8: 	goto loc_136f8;
        case m2c::kloc_1370c: 	goto loc_1370c;
        case m2c::kloc_1370e: 	goto loc_1370e;
        case m2c::kloc_13722: 	goto loc_13722;
        case m2c::kloc_13724: 	goto loc_13724;
        case m2c::ksub_136be: 	goto sub_136be;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13746(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13746:
    _begin:
#undef var_2
#define var_2 -2
	// 9045 var_2           = word ptr -2 ;~ 041E:0F86
cs=0x41e;eip=0x000f86; 	X(PUSH(bp));	// 9047                  push    bp ;~ 041E:0F86
cs=0x41e;eip=0x000f87; 	T(bp = sp;);	// 9048                  mov     bp, sp ;~ 041E:0F87
cs=0x41e;eip=0x000f89; 	T(SUB(sp, 2));	// 9049                  sub     sp, 2 ;~ 041E:0F89
cs=0x41e;eip=0x000f8d; 	T(ax = *(dw*)(&_unk_127bc););	// 9050                  mov     ax, word ptr ds:_unk_127BC ;~ 041E:0F8D
cs=0x41e;eip=0x000f90; 	T(ADD(ax, 0x0E0));	// 9051                  add     ax, 0E0h ;~ 041E:0F90
cs=0x41e;eip=0x000f93; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9052                  mov     [bp+var_2], ax ;~ 041E:0F93
cs=0x41e;eip=0x000f96; 	T(bx = *(dw*)(&_unk_127be););	// 9053                  mov     bx, word ptr ds:_unk_127BE ;~ 041E:0F96
cs=0x41e;eip=0x000f9a; 	T(MOV(al, *(raddr(ds,bx+8))));	// 9054                  mov     al, [bx+8] ;~ 041E:0F9A
cs=0x41e;eip=0x000f9d; 	T(AND(ax, 3));	// 9055                  and     ax, 3 ;~ 041E:0F9D
cs=0x41e;eip=0x000fa0; 	X(PUSH(ax));	// 9056                  push    ax ;~ 041E:0FA0
cs=0x41e;eip=0x000fa1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 9057                  push    [bp+var_2] ;~ 041E:0FA1
cs=0x41e;eip=0x000fa4; 	J(CALL(sub_12a31,0));	// 9058                  call    sub_12A31 ;~ 041E:0FA4
cs=0x41e;eip=0x000fa7; 	T(ADD(sp, 4));	// 9059                  add     sp, 4 ;~ 041E:0FA7
cs=0x41e;eip=0x000faa; 	T(sp = bp;);	// 9060                  mov     sp, bp ;~ 041E:0FAA
cs=0x41e;eip=0x000fac; 	X(POP(bp));	// 9061                  pop     bp ;~ 041E:0FAC
cs=0x41e;eip=0x000fad; 	J(RETN(0));	// 9062                  retn ;~ 041E:0FAD

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_13746: 	goto sub_13746;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1376e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1376e:
    _begin:
cs=0x41e;eip=0x000fae; 	J(CALL(sub_13544,0));	// 9071                  call    sub_13544 ;~ 041E:0FAE
cs=0x41e;eip=0x000fb1; 	J(CALL(sub_1358e,0));	// 9072                  call    sub_1358E ;~ 041E:0FB1
cs=0x41e;eip=0x000fb4; 	J(CALL(sub_135aa,0));	// 9073                  call    sub_135AA ;~ 041E:0FB4
cs=0x41e;eip=0x000fb7; 	J(CALL(sub_135f0,0));	// 9074                  call    sub_135F0 ;~ 041E:0FB7
cs=0x41e;eip=0x000fba; 	J(CALL(sub_13638,0));	// 9075                  call    sub_13638 ;~ 041E:0FBA
cs=0x41e;eip=0x000fbd; 	J(CALL(sub_1367a,0));	// 9076                  call    sub_1367A ;~ 041E:0FBD
cs=0x41e;eip=0x000fc0; 	J(CALL(sub_136be,0));	// 9077                  call    sub_136BE ;~ 041E:0FC0
cs=0x41e;eip=0x000fc3; 	J(CALL(sub_13746,0));	// 9078                  call    sub_13746 ;~ 041E:0FC3
cs=0x41e;eip=0x000fc6; 	J(RETN(0));	// 9079                  retn ;~ 041E:0FC6

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_1376e: 	goto sub_1376e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13788(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13788:
    _begin:
#undef var_2
#define var_2 -2
	// 9092 var_2           = word ptr -2 ;~ 041E:0FC8
#undef arg_0
#define arg_0 4
	// 9093 arg_0           = byte ptr  4 ;~ 041E:0FC8
#undef arg_2
#define arg_2 6
	// 9094 arg_2           = byte ptr  6 ;~ 041E:0FC8
cs=0x41e;eip=0x000fc8; 	X(PUSH(bp));	// 9096                  push    bp ;~ 041E:0FC8
cs=0x41e;eip=0x000fc9; 	T(bp = sp;);	// 9097                  mov     bp, sp ;~ 041E:0FC9
cs=0x41e;eip=0x000fcb; 	T(SUB(sp, 2));	// 9098                  sub     sp, 2 ;~ 041E:0FCB
cs=0x41e;eip=0x000fcf; 	X(PUSH(si));	// 9099                  push    si ;~ 041E:0FCF
cs=0x41e;eip=0x000fd0; 	X(PUSH(di));	// 9100                  push    di ;~ 041E:0FD0
cs=0x41e;eip=0x000fd1; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 9101                  mov     al, [bp+arg_0] ;~ 041E:0FD1
cs=0x41e;eip=0x000fd4; 	T(AND(ax, 0x0FF));	// 9102                  and     ax, 0FFh ;~ 041E:0FD4
cs=0x41e;eip=0x000fd7; 	X(PUSH(ax));	// 9103                  push    ax ;~ 041E:0FD7
cs=0x41e;eip=0x000fd8; 	J(CALL(sub_13052,0));	// 9104                  call    sub_13052 ;~ 041E:0FD8
cs=0x41e;eip=0x000fdb; 	T(ADD(sp, 2));	// 9105                  add     sp, 2 ;~ 041E:0FDB
cs=0x41e;eip=0x000fde; 	X(*(dw*)(&_unk_127ba) = ax;);	// 9106                  mov     word ptr ds:_unk_127BA, ax ;~ 041E:0FDE
cs=0x41e;eip=0x000fe1; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 9107                  mov     al, [bp+arg_2] ;~ 041E:0FE1
cs=0x41e;eip=0x000fe4; 	T(AND(ax, 0x0FF));	// 9108                  and     ax, 0FFh ;~ 041E:0FE4
cs=0x41e;eip=0x000fe7; 	T(cx = 0x2C;);	// 9109                  mov     cx, 2Ch ; ',' ;~ 041E:0FE7
cs=0x41e;eip=0x000fea; 	T(IMUL1_2(cx));	// 9110                  imul    cx ;~ 041E:0FEA
cs=0x41e;eip=0x000fec; 	T(cx = 0x2D6;);	// 9111                  mov     cx, 2D6h ;~ 041E:0FEC
cs=0x41e;eip=0x000fef; 	T(ADD(cx, ax));	// 9112                  add     cx, ax ;~ 041E:0FEF
cs=0x41e;eip=0x000ff1; 	X(*(dw*)(&_unk_127be) = cx;);	// 9113                  mov     word ptr ds:_unk_127BE, cx ;~ 041E:0FF1
cs=0x41e;eip=0x000ff5; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 9114                  mov     al, [bp+arg_0] ;~ 041E:0FF5
cs=0x41e;eip=0x000ff8; 	T(AND(ax, 0x0FF));	// 9115                  and     ax, 0FFh ;~ 041E:0FF8
cs=0x41e;eip=0x000ffb; 	T(bx = ax;);	// 9116                  mov     bx, ax ;~ 041E:0FFB
cs=0x41e;eip=0x000ffd; 	T(SHL(bx, 1));	// 9117                  shl     bx, 1 ;~ 041E:0FFD
cs=0x41e;eip=0x000fff; 	T(MOV(al, *(raddr(ds,bx+0x2AE))));	// 9118                  mov     al, [bx+2AEh] ;~ 041E:0FFF
cs=0x41e;eip=0x001003; 	T(CBW);	// 9119                  cbw ;~ 041E:1003
cs=0x41e;eip=0x001004; 	T(bx = ax;);	// 9120                  mov     bx, ax ;~ 041E:1004
cs=0x41e;eip=0x001006; 	T(MOV(al, *(raddr(ds,bx+0x2C4))));	// 9121                  mov     al, [bx+2C4h] ;~ 041E:1006
cs=0x41e;eip=0x00100a; 	T(CBW);	// 9122                  cbw ;~ 041E:100A
cs=0x41e;eip=0x00100b; 	X(*(dw*)(&_unk_127bc) = ax;);	// 9123                  mov     word ptr ds:_unk_127BC, ax ;~ 041E:100B
cs=0x41e;eip=0x00100e; 	T(CMP(ax, 0x14));	// 9124                  cmp     ax, 14h ;~ 041E:100E
cs=0x41e;eip=0x001011; 	J(JC(loc_137d6));	// 9125                  jb      short loc_137D6 ;~ 041E:1011
cs=0x41e;eip=0x001013; 	J(JMP(loc_1385b));	// 9126                  jmp     loc_1385B ;~ 041E:1013
loc_137d6:
	// 4589 
cs=0x41e;eip=0x001016; 	J(CALL(sub_1376e,0));	// 9130                  call    sub_1376E ;~ 041E:1016
cs=0x41e;eip=0x001019; 	T(bx = *(dw*)(&_unk_127be););	// 9131                  mov     bx, word ptr ds:_unk_127BE ;~ 041E:1019
cs=0x41e;eip=0x00101d; 	T(MOV(al, *(raddr(ds,bx+0x0E))));	// 9132                  mov     al, [bx+0Eh] ;~ 041E:101D
cs=0x41e;eip=0x001020; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9133                  mov     [bp+var_2], ax ;~ 041E:1020
cs=0x41e;eip=0x001023; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 9134                  mov     al, [bp+arg_0] ;~ 041E:1023
cs=0x41e;eip=0x001026; 	T(AND(ax, 0x0FF));	// 9135                  and     ax, 0FFh ;~ 041E:1026
cs=0x41e;eip=0x001029; 	T(bx = ax;);	// 9136                  mov     bx, ax ;~ 041E:1029
cs=0x41e;eip=0x00102b; 	T(SHL(bx, 1));	// 9137                  shl     bx, 1 ;~ 041E:102B
cs=0x41e;eip=0x00102d; 	T(SHL(bx, 1));	// 9138                  shl     bx, 1 ;~ 041E:102D
cs=0x41e;eip=0x00102f; 	T(SHL(bx, 1));	// 9139                  shl     bx, 1 ;~ 041E:102F
cs=0x41e;eip=0x001031; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 9140                  mov     ax, [bp+var_2] ;~ 041E:1031
cs=0x41e;eip=0x001034; 	X(MOV(*(raddr(ds,bx+0x0D32)), al));	// 9141                  mov     [bx+0D32h], al ;~ 041E:1034
cs=0x41e;eip=0x001038; 	T(bx = *(dw*)(&_unk_127be););	// 9142                  mov     bx, word ptr ds:_unk_127BE ;~ 041E:1038
cs=0x41e;eip=0x00103c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x10))));	// 9143                  mov     ax, [bx+10h] ;~ 041E:103C
cs=0x41e;eip=0x00103f; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9144                  mov     [bp+var_2], ax ;~ 041E:103F
cs=0x41e;eip=0x001042; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 9145                  mov     al, [bp+arg_0] ;~ 041E:1042
cs=0x41e;eip=0x001045; 	T(AND(ax, 0x0FF));	// 9146                  and     ax, 0FFh ;~ 041E:1045
cs=0x41e;eip=0x001048; 	T(SHL(ax, 1));	// 9147                  shl     ax, 1 ;~ 041E:1048
cs=0x41e;eip=0x00104a; 	T(SHL(ax, 1));	// 9148                  shl     ax, 1 ;~ 041E:104A
cs=0x41e;eip=0x00104c; 	T(SHL(ax, 1));	// 9149                  shl     ax, 1 ;~ 041E:104C
cs=0x41e;eip=0x00104e; 	T(bx = 0x0D32;);	// 9150                  mov     bx, 0D32h ;~ 041E:104E
cs=0x41e;eip=0x001051; 	T(ADD(bx, ax));	// 9151                  add     bx, ax ;~ 041E:1051
cs=0x41e;eip=0x001053; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 9152                  mov     ax, [bp+var_2] ;~ 041E:1053
cs=0x41e;eip=0x001056; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 9153                  mov     [bx+2], ax ;~ 041E:1056
cs=0x41e;eip=0x001059; 	T(bx = *(dw*)(&_unk_127be););	// 9154                  mov     bx, word ptr ds:_unk_127BE ;~ 041E:1059
cs=0x41e;eip=0x00105d; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x12))));	// 9155                  mov     ax, [bx+12h] ;~ 041E:105D
cs=0x41e;eip=0x001060; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9156                  mov     [bp+var_2], ax ;~ 041E:1060
cs=0x41e;eip=0x001063; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 9157                  mov     al, [bp+arg_0] ;~ 041E:1063
cs=0x41e;eip=0x001066; 	T(AND(ax, 0x0FF));	// 9158                  and     ax, 0FFh ;~ 041E:1066
cs=0x41e;eip=0x001069; 	T(SHL(ax, 1));	// 9159                  shl     ax, 1 ;~ 041E:1069
cs=0x41e;eip=0x00106b; 	T(SHL(ax, 1));	// 9160                  shl     ax, 1 ;~ 041E:106B
cs=0x41e;eip=0x00106d; 	T(SHL(ax, 1));	// 9161                  shl     ax, 1 ;~ 041E:106D
cs=0x41e;eip=0x00106f; 	T(bx = 0x0D32;);	// 9162                  mov     bx, 0D32h ;~ 041E:106F
cs=0x41e;eip=0x001072; 	T(ADD(bx, ax));	// 9163                  add     bx, ax ;~ 041E:1072
cs=0x41e;eip=0x001074; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 9164                  mov     ax, [bp+var_2] ;~ 041E:1074
cs=0x41e;eip=0x001077; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 9165                  mov     [bx+4], ax ;~ 041E:1077
cs=0x41e;eip=0x00107a; 	T(bx = *(dw*)(&_unk_127be););	// 9166                  mov     bx, word ptr ds:_unk_127BE ;~ 041E:107A
cs=0x41e;eip=0x00107e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x14))));	// 9167                  mov     ax, [bx+14h] ;~ 041E:107E
cs=0x41e;eip=0x001081; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9168                  mov     [bp+var_2], ax ;~ 041E:1081
cs=0x41e;eip=0x001084; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 9169                  mov     al, [bp+arg_0] ;~ 041E:1084
cs=0x41e;eip=0x001087; 	T(AND(ax, 0x0FF));	// 9170                  and     ax, 0FFh ;~ 041E:1087
cs=0x41e;eip=0x00108a; 	T(SHL(ax, 1));	// 9171                  shl     ax, 1 ;~ 041E:108A
cs=0x41e;eip=0x00108c; 	T(SHL(ax, 1));	// 9172                  shl     ax, 1 ;~ 041E:108C
cs=0x41e;eip=0x00108e; 	T(SHL(ax, 1));	// 9173                  shl     ax, 1 ;~ 041E:108E
cs=0x41e;eip=0x001090; 	T(bx = 0x0D32;);	// 9174                  mov     bx, 0D32h ;~ 041E:1090
cs=0x41e;eip=0x001093; 	T(ADD(bx, ax));	// 9175                  add     bx, ax ;~ 041E:1093
cs=0x41e;eip=0x001095; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 9176                  mov     ax, [bp+var_2] ;~ 041E:1095
cs=0x41e;eip=0x001098; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 9177                  mov     [bx+6], ax ;~ 041E:1098
loc_1385b:
	// 4590 
cs=0x41e;eip=0x00109b; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 9180                  mov     al, [bp+arg_2] ;~ 041E:109B
cs=0x41e;eip=0x00109e; 	T(AND(ax, 0x0FF));	// 9181                  and     ax, 0FFh ;~ 041E:109E
cs=0x41e;eip=0x0010a1; 	T(cx = 0x2C;);	// 9182                  mov     cx, 2Ch ; ',' ;~ 041E:10A1
cs=0x41e;eip=0x0010a4; 	T(IMUL1_2(cx));	// 9183                  imul    cx ;~ 041E:10A4
cs=0x41e;eip=0x0010a6; 	T(cx = 0x2D6;);	// 9184                  mov     cx, 2D6h ;~ 041E:10A6
cs=0x41e;eip=0x0010a9; 	T(ADD(cx, ax));	// 9185                  add     cx, ax ;~ 041E:10A9
cs=0x41e;eip=0x0010ab; 	T(ax = 0x16;);	// 9186                  mov     ax, 16h ;~ 041E:10AB
cs=0x41e;eip=0x0010ae; 	T(ADD(cx, ax));	// 9187                  add     cx, ax ;~ 041E:10AE
cs=0x41e;eip=0x0010b0; 	X(*(dw*)(&_unk_127be) = cx;);	// 9188                  mov     word ptr ds:_unk_127BE, cx ;~ 041E:10B0
cs=0x41e;eip=0x0010b4; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 9189                  mov     al, [bp+arg_0] ;~ 041E:10B4
cs=0x41e;eip=0x0010b7; 	T(AND(ax, 0x0FF));	// 9190                  and     ax, 0FFh ;~ 041E:10B7
cs=0x41e;eip=0x0010ba; 	T(SHL(ax, 1));	// 9191                  shl     ax, 1 ;~ 041E:10BA
cs=0x41e;eip=0x0010bc; 	T(bx = 0x2AE;);	// 9192                  mov     bx, 2AEh ;~ 041E:10BC
cs=0x41e;eip=0x0010bf; 	T(ADD(bx, ax));	// 9193                  add     bx, ax ;~ 041E:10BF
cs=0x41e;eip=0x0010c1; 	T(MOV(al, *(raddr(ds,bx+1))));	// 9194                  mov     al, [bx+1] ;~ 041E:10C1
cs=0x41e;eip=0x0010c4; 	T(CBW);	// 9195                  cbw ;~ 041E:10C4
cs=0x41e;eip=0x0010c5; 	T(bx = ax;);	// 9196                  mov     bx, ax ;~ 041E:10C5
cs=0x41e;eip=0x0010c7; 	T(MOV(al, *(raddr(ds,bx+0x2C4))));	// 9197                  mov     al, [bx+2C4h] ;~ 041E:10C7
cs=0x41e;eip=0x0010cb; 	T(CBW);	// 9198                  cbw ;~ 041E:10CB
cs=0x41e;eip=0x0010cc; 	X(*(dw*)(&_unk_127bc) = ax;);	// 9199                  mov     word ptr ds:_unk_127BC, ax ;~ 041E:10CC
cs=0x41e;eip=0x0010cf; 	T(CMP(ax, 0x14));	// 9200                  cmp     ax, 14h ;~ 041E:10CF
cs=0x41e;eip=0x0010d2; 	J(JNC(loc_13897));	// 9201                  jnb     short loc_13897 ;~ 041E:10D2
cs=0x41e;eip=0x0010d4; 	J(CALL(sub_1376e,0));	// 9202                  call    sub_1376E ;~ 041E:10D4
loc_13897:
	// 4591 
cs=0x41e;eip=0x0010d7; 	X(POP(di));	// 9205                  pop     di ;~ 041E:10D7
cs=0x41e;eip=0x0010d8; 	X(POP(si));	// 9206                  pop     si ;~ 041E:10D8
cs=0x41e;eip=0x0010d9; 	T(sp = bp;);	// 9207                  mov     sp, bp ;~ 041E:10D9
cs=0x41e;eip=0x0010db; 	X(POP(bp));	// 9208                  pop     bp ;~ 041E:10DB
cs=0x41e;eip=0x0010dc; 	J(RETN(0));	// 9209                  retn ;~ 041E:10DC

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_137d6: 	goto loc_137d6;
        case m2c::kloc_1385b: 	goto loc_1385b;
        case m2c::kloc_13897: 	goto loc_13897;
        case m2c::ksub_13788: 	goto sub_13788;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1389e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1389e:
    _begin:
#undef var_6
#define var_6 -6
	// 9222 var_6           = word ptr -6 ;~ 041E:10DE
#undef var_4
#define var_4 -4
	// 9223 var_4           = byte ptr -4 ;~ 041E:10DE
#undef var_2
#define var_2 -2
	// 9224 var_2           = word ptr -2 ;~ 041E:10DE
#undef arg_0
#define arg_0 4
	// 9225 arg_0           = word ptr  4 ;~ 041E:10DE
cs=0x41e;eip=0x0010de; 	X(PUSH(bp));	// 9236                  push    bp ;~ 041E:10DE
cs=0x41e;eip=0x0010df; 	T(bp = sp;);	// 9237                  mov     bp, sp ;~ 041E:10DF
cs=0x41e;eip=0x0010e1; 	T(SUB(sp, 6));	// 9238                  sub     sp, 6 ;~ 041E:10E1
cs=0x41e;eip=0x0010e5; 	X(PUSH(si));	// 9239                  push    si ;~ 041E:10E5
cs=0x41e;eip=0x0010e6; 	X(PUSH(di));	// 9240                  push    di ;~ 041E:10E6
cs=0x41e;eip=0x0010e7; 	X(MOV(*(raddr(ss,bp+var_4)), 0));	// 9241                  mov     [bp+var_4], 0 ;~ 041E:10E7
cs=0x41e;eip=0x0010eb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9242                  mov     bx, [bp+arg_0] ;~ 041E:10EB
cs=0x41e;eip=0x0010ee; 	T(MOV(al, *(raddr(ds,bx))));	// 9243                  mov     al, [bx] ;~ 041E:10EE
cs=0x41e;eip=0x0010f0; 	T(AND(ax, 0x0FF));	// 9244                  and     ax, 0FFh ;~ 041E:10F0
cs=0x41e;eip=0x0010f3; 	J(JNZ(loc_138b8));	// 9245                  jnz     short loc_138B8 ;~ 041E:10F3
cs=0x41e;eip=0x0010f5; 	J(return seg127c_11ae_proc(m2c::kloc_13b2c, _state););	// 9246                  jmp     loc_13B2C ;~ 041E:10F5
loc_138b8:
	// 4592 
cs=0x41e;eip=0x0010f8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9250                  mov     bx, [bp+arg_0] ;~ 041E:10F8
cs=0x41e;eip=0x0010fb; 	T(MOV(al, *(raddr(ds,bx+7))));	// 9251                  mov     al, [bx+7] ;~ 041E:10FB
cs=0x41e;eip=0x0010fe; 	T(AND(ax, 0x0FF));	// 9252                  and     ax, 0FFh ;~ 041E:10FE
cs=0x41e;eip=0x001101; 	J(JZ(loc_138de));	// 9253                  jz      short loc_138DE ;~ 041E:1101
cs=0x41e;eip=0x001103; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9254                  mov     bx, [bp+arg_0] ;~ 041E:1103
cs=0x41e;eip=0x001106; 	X(DEC(*(raddr(ds,bx+7))));	// 9255                  dec     byte ptr [bx+7] ;~ 041E:1106
cs=0x41e;eip=0x001109; 	T(MOV(al, *(raddr(ds,bx+7))));	// 9256                  mov     al, [bx+7] ;~ 041E:1109
cs=0x41e;eip=0x00110c; 	T(AND(ax, 0x0FF));	// 9257                  and     ax, 0FFh ;~ 041E:110C
cs=0x41e;eip=0x00110f; 	J(JNZ(loc_138de));	// 9258                  jnz     short loc_138DE ;~ 041E:110F
cs=0x41e;eip=0x001111; 	T(al = byte_1265e;);	// 9259                  mov     al, ds:byte_1265E ;~ 041E:1111
cs=0x41e;eip=0x001114; 	T(AND(ax, 0x0FF));	// 9260                  and     ax, 0FFh ;~ 041E:1114
cs=0x41e;eip=0x001117; 	X(PUSH(ax));	// 9261                  push    ax ;~ 041E:1117
cs=0x41e;eip=0x001118; 	J(CALL(sub_1331c,0));	// 9262                  call    sub_1331C ;~ 041E:1118
cs=0x41e;eip=0x00111b; 	T(ADD(sp, 2));	// 9263                  add     sp, 2 ;~ 041E:111B
loc_138de:
	// 4593 
cs=0x41e;eip=0x00111e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9267                  mov     bx, [bp+arg_0] ;~ 041E:111E
cs=0x41e;eip=0x001121; 	X(DEC(*(raddr(ds,bx))));	// 9268                  dec     byte ptr [bx] ;~ 041E:1121
cs=0x41e;eip=0x001123; 	T(MOV(al, *(raddr(ds,bx))));	// 9269                  mov     al, [bx] ;~ 041E:1123
cs=0x41e;eip=0x001125; 	T(AND(ax, 0x0FF));	// 9270                  and     ax, 0FFh ;~ 041E:1125
cs=0x41e;eip=0x001128; 	J(JLE(loc_138ed));	// 9271                  jle     short loc_138ED ;~ 041E:1128
cs=0x41e;eip=0x00112a; 	J(return seg127c_11ae_proc(m2c::kloc_13b2c, _state););	// 9272                  jmp     loc_13B2C ;~ 041E:112A
loc_138ed:
	// 4594 
cs=0x41e;eip=0x00112d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9277                  mov     bx, [bp+arg_0] ;~ 041E:112D
cs=0x41e;eip=0x001130; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0C))));	// 9278                  mov     ax, [bx+0Ch] ;~ 041E:1130
cs=0x41e;eip=0x001133; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9279                  mov     bx, [bp+arg_0] ;~ 041E:1133
cs=0x41e;eip=0x001136; 	T(MOV(cx, *(dw*)(raddr(ds,bx+0x0A))));	// 9280                  mov     cx, [bx+0Ah] ;~ 041E:1136
cs=0x41e;eip=0x001139; 	T(ADD(cx, ax));	// 9281                  add     cx, ax ;~ 041E:1139
cs=0x41e;eip=0x00113b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), cx));	// 9282                  mov     [bp+var_2], cx ;~ 041E:113B
cs=0x41e;eip=0x00113e; 	T(bx = cx;);	// 9283                  mov     bx, cx ;~ 041E:113E
cs=0x41e;eip=0x001140; 	T(MOV(al, *(raddr(ds,bx))));	// 9284                  mov     al, [bx] ;~ 041E:1140
cs=0x41e;eip=0x001142; 	T(CBW);	// 9285                  cbw ;~ 041E:1142
cs=0x41e;eip=0x001143; 	T(AND(ax, 0x80));	// 9286                  and     ax, 80h ;~ 041E:1143
cs=0x41e;eip=0x001146; 	J(JNZ(loc_1390b));	// 9287                  jnz     short loc_1390B ;~ 041E:1146
cs=0x41e;eip=0x001148; 	J(return seg127c_11ae_proc(m2c::kloc_13a88, _state););	// 9288                  jmp     loc_13A88 ;~ 041E:1148
loc_1390b:
	// 4595 
cs=0x41e;eip=0x00114b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 9292                  mov     bx, [bp+var_2] ;~ 041E:114B
cs=0x41e;eip=0x00114e; 	T(MOV(al, *(raddr(ds,bx))));	// 9293                  mov     al, [bx] ;~ 041E:114E
cs=0x41e;eip=0x001150; 	T(CBW);	// 9294                  cbw ;~ 041E:1150
cs=0x41e;eip=0x001151; 	J(return seg127c_11ae_proc(m2c::kloc_13a60, _state););	// 9295                  jmp     loc_13A60 ;~ 041E:1151

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_138b8: 	goto loc_138b8;
        case m2c::kloc_138de: 	goto loc_138de;
        case m2c::kloc_138ed: 	goto loc_138ed;
        case m2c::kloc_1390b: 	goto loc_1390b;
        case m2c::ksub_1389e: 	goto sub_1389e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg127c_11ae_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg127c_11ae_proc:
    _begin:
loc_1396e:
	// 4596 
cs=0x41e;eip=0x0011ae; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9394                  mov     bx, [bp+arg_0]  ; jumptable 00013A6F case -2 ;~ 041E:11AE
cs=0x41e;eip=0x0011b1; 	X(INC(*(dw*)(raddr(ds,bx+0x0C))));	// 9395                  inc     word ptr [bx+0Ch] ;~ 041E:11B1
cs=0x41e;eip=0x0011b4; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0C))));	// 9396                  mov     ax, [bx+0Ch] ;~ 041E:11B4
cs=0x41e;eip=0x0011b7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9397                  mov     bx, [bp+arg_0] ;~ 041E:11B7
cs=0x41e;eip=0x0011ba; 	X(MOV(*(dw*)(raddr(ds,bx+0x0E)), ax));	// 9398                  mov     [bx+0Eh], ax ;~ 041E:11BA
cs=0x41e;eip=0x0011bd; 	J(JMP(__def_13a6f));	// 9399                  jmp     __def_13A6F     ; jumptable 00013A6F default case ;~ 041E:11BD
loc_13980:
	// 4597 
cs=0x41e;eip=0x0011c0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9404                  mov     bx, [bp+arg_0]  ; jumptable 00013A6F case -3 ;~ 041E:11C0
cs=0x41e;eip=0x0011c3; 	T(CMP(*(dw*)(raddr(ds,bx+0x12)), 0));	// 9405                  cmp     word ptr [bx+12h], 0 ;~ 041E:11C3
cs=0x41e;eip=0x0011c7; 	J(JNZ(loc_13994));	// 9406                  jnz     short loc_13994 ;~ 041E:11C7
cs=0x41e;eip=0x0011c9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9407                  mov     bx, [bp+arg_0] ;~ 041E:11C9
cs=0x41e;eip=0x0011cc; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), 0));	// 9408                  mov     word ptr [bx+0Ch], 0 ;~ 041E:11CC
cs=0x41e;eip=0x0011d1; 	J(JMP(loc_1399a));	// 9409                  jmp     short loc_1399A ;~ 041E:11D1
loc_13994:
	// 4598 
cs=0x41e;eip=0x0011d4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9417                  mov     bx, [bp+arg_0] ;~ 041E:11D4
cs=0x41e;eip=0x0011d7; 	J(CALL(__dispatch_call,*(dw*)(raddr(ds,bx+0x12))));	// 9418                  call    word ptr [bx+12h] ;~ 041E:11D7
loc_1399a:
	// 4599 
cs=0x41e;eip=0x0011da; 	J(JMP(__def_13a6f));	// 9421                  jmp     __def_13A6F     ; jumptable 00013A6F default case ;~ 041E:11DA
loc_1399e:
	// 4600 
cs=0x41e;eip=0x0011de; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 9430                  inc     [bp+var_2]      ; jumptable 00013A6F case -4 ;~ 041E:11DE
cs=0x41e;eip=0x0011e1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 9431                  mov     bx, [bp+var_2] ;~ 041E:11E1
cs=0x41e;eip=0x0011e4; 	T(MOV(al, *(raddr(ds,bx))));	// 9432                  mov     al, [bx] ;~ 041E:11E4
cs=0x41e;eip=0x0011e6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9433                  mov     bx, [bp+arg_0] ;~ 041E:11E6
cs=0x41e;eip=0x0011e9; 	X(MOV(*(raddr(ds,bx+4)), al));	// 9434                  mov     [bx+4], al ;~ 041E:11E9
cs=0x41e;eip=0x0011ec; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9435                  mov     bx, [bp+arg_0] ;~ 041E:11EC
cs=0x41e;eip=0x0011ef; 	X(ADD(*(dw*)(raddr(ds,bx+0x0C)), 2));	// 9436                  add     word ptr [bx+0Ch], 2 ;~ 041E:11EF
cs=0x41e;eip=0x0011f3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9437                  mov     bx, [bp+arg_0] ;~ 041E:11F3
cs=0x41e;eip=0x0011f6; 	T(MOV(al, *(raddr(ds,bx+4))));	// 9438                  mov     al, [bx+4] ;~ 041E:11F6
cs=0x41e;eip=0x0011f9; 	T(AND(ax, 0x0FF));	// 9439                  and     ax, 0FFh ;~ 041E:11F9
cs=0x41e;eip=0x0011fc; 	X(PUSH(ax));	// 9440                  push    ax ;~ 041E:11FC
cs=0x41e;eip=0x0011fd; 	T(al = byte_1265e;);	// 9441                  mov     al, ds:byte_1265E ;~ 041E:11FD
cs=0x41e;eip=0x001200; 	T(AND(ax, 0x0FF));	// 9442                  and     ax, 0FFh ;~ 041E:1200
cs=0x41e;eip=0x001203; 	X(PUSH(ax));	// 9443                  push    ax ;~ 041E:1203
cs=0x41e;eip=0x001204; 	J(CALL(sub_13788,0));	// 9444                  call    sub_13788 ;~ 041E:1204
cs=0x41e;eip=0x001207; 	T(ADD(sp, 4));	// 9445                  add     sp, 4 ;~ 041E:1207
cs=0x41e;eip=0x00120a; 	J(JMP(__def_13a6f));	// 9446                  jmp     __def_13A6F     ; jumptable 00013A6F default case ;~ 041E:120A
loc_139ce:
	// 4601 
cs=0x41e;eip=0x00120e; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 9455                  inc     [bp+var_2]      ; jumptable 00013A6F case -5 ;~ 041E:120E
cs=0x41e;eip=0x001211; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 9456                  mov     bx, [bp+var_2] ;~ 041E:1211
cs=0x41e;eip=0x001214; 	T(MOV(al, *(raddr(ds,bx))));	// 9457                  mov     al, [bx] ;~ 041E:1214
cs=0x41e;eip=0x001216; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9458                  mov     bx, [bp+arg_0] ;~ 041E:1216
cs=0x41e;eip=0x001219; 	X(MOV(*(raddr(ds,bx+6)), al));	// 9459                  mov     [bx+6], al ;~ 041E:1219
cs=0x41e;eip=0x00121c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9460                  mov     bx, [bp+arg_0] ;~ 041E:121C
cs=0x41e;eip=0x00121f; 	X(ADD(*(dw*)(raddr(ds,bx+0x0C)), 2));	// 9461                  add     word ptr [bx+0Ch], 2 ;~ 041E:121F
cs=0x41e;eip=0x001223; 	J(JMP(__def_13a6f));	// 9462                  jmp     __def_13A6F     ; jumptable 00013A6F default case ;~ 041E:1223
loc_139e6:
	// 4602 
cs=0x41e;eip=0x001226; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 9467                  inc     [bp+var_2]      ; jumptable 00013A6F case -6 ;~ 041E:1226
cs=0x41e;eip=0x001229; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 9468                  mov     bx, [bp+var_2] ;~ 041E:1229
cs=0x41e;eip=0x00122c; 	T(MOV(al, *(raddr(ds,bx))));	// 9469                  mov     al, [bx] ;~ 041E:122C
cs=0x41e;eip=0x00122e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9470                  mov     bx, [bp+arg_0] ;~ 041E:122E
cs=0x41e;eip=0x001231; 	X(MOV(*(raddr(ds,bx+1)), al));	// 9471                  mov     [bx+1], al ;~ 041E:1231
cs=0x41e;eip=0x001234; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9472                  mov     bx, [bp+arg_0] ;~ 041E:1234
cs=0x41e;eip=0x001237; 	X(ADD(*(dw*)(raddr(ds,bx+0x0C)), 2));	// 9473                  add     word ptr [bx+0Ch], 2 ;~ 041E:1237
cs=0x41e;eip=0x00123b; 	J(JMP(__def_13a6f));	// 9474                  jmp     __def_13A6F     ; jumptable 00013A6F default case ;~ 041E:123B
loc_139fe:
	// 4603 
cs=0x41e;eip=0x00123e; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 9479                  inc     [bp+var_2]      ; jumptable 00013A6F case -7 ;~ 041E:123E
cs=0x41e;eip=0x001241; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 9480                  mov     bx, [bp+var_2] ;~ 041E:1241
cs=0x41e;eip=0x001244; 	T(MOV(al, *(raddr(ds,bx))));	// 9481                  mov     al, [bx] ;~ 041E:1244
cs=0x41e;eip=0x001246; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9482                  mov     bx, [bp+arg_0] ;~ 041E:1246
cs=0x41e;eip=0x001249; 	X(MOV(*(raddr(ds,bx+5)), al));	// 9483                  mov     [bx+5], al ;~ 041E:1249
cs=0x41e;eip=0x00124c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9484                  mov     bx, [bp+arg_0] ;~ 041E:124C
cs=0x41e;eip=0x00124f; 	X(ADD(*(dw*)(raddr(ds,bx+0x0C)), 2));	// 9485                  add     word ptr [bx+0Ch], 2 ;~ 041E:124F
cs=0x41e;eip=0x001253; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9486                  mov     bx, [bp+arg_0] ;~ 041E:1253
cs=0x41e;eip=0x001256; 	T(MOV(al, *(raddr(ds,bx+5))));	// 9487                  mov     al, [bx+5] ;~ 041E:1256
cs=0x41e;eip=0x001259; 	T(AND(ax, 0x0FF));	// 9488                  and     ax, 0FFh ;~ 041E:1259
cs=0x41e;eip=0x00125c; 	X(PUSH(ax));	// 9489                  push    ax ;~ 041E:125C
cs=0x41e;eip=0x00125d; 	T(al = byte_1265e;);	// 9490                  mov     al, ds:byte_1265E ;~ 041E:125D
cs=0x41e;eip=0x001260; 	T(AND(ax, 0x0FF));	// 9491                  and     ax, 0FFh ;~ 041E:1260
cs=0x41e;eip=0x001263; 	X(PUSH(ax));	// 9492                  push    ax ;~ 041E:1263
cs=0x41e;eip=0x001264; 	J(CALL(sub_1307e,0));	// 9493                  call    sub_1307E ;~ 041E:1264
cs=0x41e;eip=0x001267; 	T(ADD(sp, 4));	// 9494                  add     sp, 4 ;~ 041E:1267
cs=0x41e;eip=0x00126a; 	J(JMP(__def_13a6f));	// 9495                  jmp     __def_13A6F     ; jumptable 00013A6F default case ;~ 041E:126A
loc_13a2e:
	// 4604 
cs=0x41e;eip=0x00126e; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 9504                  inc     [bp+var_2]      ; jumptable 00013A6F case -8 ;~ 041E:126E
cs=0x41e;eip=0x001271; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 9505                  mov     bx, [bp+var_2] ;~ 041E:1271
cs=0x41e;eip=0x001274; 	T(MOV(al, *(raddr(ds,bx))));	// 9506                  mov     al, [bx] ;~ 041E:1274
cs=0x41e;eip=0x001276; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9507                  mov     bx, [bp+arg_0] ;~ 041E:1276
cs=0x41e;eip=0x001279; 	X(MOV(*(raddr(ds,bx+9)), al));	// 9508                  mov     [bx+9], al ;~ 041E:1279
cs=0x41e;eip=0x00127c; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 9509                  inc     [bp+var_2] ;~ 041E:127C
cs=0x41e;eip=0x00127f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 9510                  mov     bx, [bp+var_2] ;~ 041E:127F
cs=0x41e;eip=0x001282; 	T(MOV(al, *(raddr(ds,bx))));	// 9511                  mov     al, [bx] ;~ 041E:1282
cs=0x41e;eip=0x001284; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9512                  mov     bx, [bp+arg_0] ;~ 041E:1284
cs=0x41e;eip=0x001287; 	X(MOV(*(raddr(ds,bx+2)), al));	// 9513                  mov     [bx+2], al ;~ 041E:1287
cs=0x41e;eip=0x00128a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9514                  mov     bx, [bp+arg_0] ;~ 041E:128A
cs=0x41e;eip=0x00128d; 	X(MOV(*(raddr(ds,bx+8)), 1));	// 9515                  mov     byte ptr [bx+8], 1 ;~ 041E:128D
cs=0x41e;eip=0x001291; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9516                  mov     bx, [bp+arg_0] ;~ 041E:1291
cs=0x41e;eip=0x001294; 	X(ADD(*(dw*)(raddr(ds,bx+0x0C)), 3));	// 9517                  add     word ptr [bx+0Ch], 3 ;~ 041E:1294
cs=0x41e;eip=0x001298; 	J(JMP(__def_13a6f));	// 9518                  jmp     __def_13A6F     ; jumptable 00013A6F default case ;~ 041E:1298
loc_13a60:
	// 4605 
cs=0x41e;eip=0x0012a0; 	T(SUB(ax, 0x0FFF8));	// 9530                  sub     ax, 0FFF8h      ; switch 7 cases ;~ 041E:12A0
cs=0x41e;eip=0x0012a3; 	T(CMP(ax, 7));	// 9531                  cmp     ax, 7 ;~ 041E:12A3
cs=0x41e;eip=0x0012a6; 	J(JBE(loc_13a6b));	// 9532                  jbe     short loc_13A6B ;~ 041E:12A6
cs=0x41e;eip=0x0012a8; 	J(JMP(__def_13a6f));	// 9533                  jmp     __def_13A6F     ; jumptable 00013A6F default case ;~ 041E:12A8
loc_13a6b:
	// 4606 
cs=0x41e;eip=0x0012ab; 	T(SHL(ax, 1));	// 9537                  shl     ax, 1 ;~ 041E:12AB
cs=0x41e;eip=0x0012ad; 	T(bx = ax;);	// 9538                  mov     bx, ax ;~ 041E:12AD
cs=0x41e;eip=0x0012af; __disp=*(dw*)(((db*)&jpt_13a6f)+bx);
	J(return __dispatch_call(__disp, _state););	// 9539                  jmp     cs:jpt_13A6F[bx] ; switch jump ;~ 041E:12AF
__def_13a6f:
	// 4607 
cs=0x41e;eip=0x0012c4; 	J(return sub_1389e(m2c::kloc_138ed, _state););	// 9556                  jmp     loc_138ED       ; jumptable 00013A6F default case ;~ 041E:12C4
loc_13a88:
	// 4608 
cs=0x41e;eip=0x0012c8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9564                  mov     bx, [bp+arg_0] ;~ 041E:12C8
cs=0x41e;eip=0x0012cb; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0C))));	// 9565                  mov     ax, [bx+0Ch] ;~ 041E:12CB
cs=0x41e;eip=0x0012ce; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9566                  mov     bx, [bp+arg_0] ;~ 041E:12CE
cs=0x41e;eip=0x0012d1; 	T(MOV(cx, *(dw*)(raddr(ds,bx+0x0A))));	// 9567                  mov     cx, [bx+0Ah] ;~ 041E:12D1
cs=0x41e;eip=0x0012d4; 	T(ADD(cx, ax));	// 9568                  add     cx, ax ;~ 041E:12D4
cs=0x41e;eip=0x0012d6; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), cx));	// 9569                  mov     [bp+var_2], cx ;~ 041E:12D6
cs=0x41e;eip=0x0012d9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 9570                  mov     bx, [bp+var_2] ;~ 041E:12D9
cs=0x41e;eip=0x0012dc; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 9571                  inc     [bp+var_2] ;~ 041E:12DC
cs=0x41e;eip=0x0012df; 	T(MOV(al, *(raddr(ds,bx))));	// 9572                  mov     al, [bx] ;~ 041E:12DF
cs=0x41e;eip=0x0012e1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9573                  mov     bx, [bp+arg_0] ;~ 041E:12E1
cs=0x41e;eip=0x0012e4; 	X(MOV(*(raddr(ds,bx+3)), al));	// 9574                  mov     [bx+3], al ;~ 041E:12E4
cs=0x41e;eip=0x0012e7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 9575                  mov     bx, [bp+var_2] ;~ 041E:12E7
cs=0x41e;eip=0x0012ea; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 9576                  inc     [bp+var_2] ;~ 041E:12EA
cs=0x41e;eip=0x0012ed; 	T(MOV(al, *(raddr(ds,bx))));	// 9577                  mov     al, [bx] ;~ 041E:12ED
cs=0x41e;eip=0x0012ef; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9578                  mov     bx, [bp+arg_0] ;~ 041E:12EF
cs=0x41e;eip=0x0012f2; 	X(MOV(*(raddr(ds,bx)), al));	// 9579                  mov     [bx], al ;~ 041E:12F2
cs=0x41e;eip=0x0012f4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9580                  mov     bx, [bp+arg_0] ;~ 041E:12F4
cs=0x41e;eip=0x0012f7; 	X(ADD(*(dw*)(raddr(ds,bx+0x0C)), 2));	// 9581                  add     word ptr [bx+0Ch], 2 ;~ 041E:12F7
cs=0x41e;eip=0x0012fb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9582                  mov     bx, [bp+arg_0] ;~ 041E:12FB
cs=0x41e;eip=0x0012fe; 	T(MOV(al, *(raddr(ds,bx+3))));	// 9583                  mov     al, [bx+3] ;~ 041E:12FE
cs=0x41e;eip=0x001301; 	T(AND(ax, 0x0FF));	// 9584                  and     ax, 0FFh ;~ 041E:1301
cs=0x41e;eip=0x001304; 	J(JZ(loc_13ad0));	// 9585                  jz      short loc_13AD0 ;~ 041E:1304
cs=0x41e;eip=0x001306; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9586                  mov     bx, [bp+arg_0] ;~ 041E:1306
cs=0x41e;eip=0x001309; 	T(MOV(al, *(raddr(ds,bx))));	// 9587                  mov     al, [bx] ;~ 041E:1309
cs=0x41e;eip=0x00130b; 	T(AND(ax, 0x0FF));	// 9588                  and     ax, 0FFh ;~ 041E:130B
cs=0x41e;eip=0x00130e; 	J(JNZ(loc_13ae0));	// 9589                  jnz     short loc_13AE0 ;~ 041E:130E
loc_13ad0:
	// 4609 
cs=0x41e;eip=0x001310; 	T(al = byte_1265e;);	// 9592                  mov     al, ds:byte_1265E ;~ 041E:1310
cs=0x41e;eip=0x001313; 	T(AND(ax, 0x0FF));	// 9593                  and     ax, 0FFh ;~ 041E:1313
cs=0x41e;eip=0x001316; 	X(PUSH(ax));	// 9594                  push    ax ;~ 041E:1316
cs=0x41e;eip=0x001317; 	J(CALL(sub_1331c,0));	// 9595                  call    sub_1331C ;~ 041E:1317
cs=0x41e;eip=0x00131a; 	T(ADD(sp, 2));	// 9596                  add     sp, 2 ;~ 041E:131A
cs=0x41e;eip=0x00131d; 	J(JMP(loc_13b2c));	// 9597                  jmp     loc_13B2C ;~ 041E:131D
loc_13ae0:
	// 4610 
cs=0x41e;eip=0x001320; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9601                  mov     bx, [bp+arg_0] ;~ 041E:1320
cs=0x41e;eip=0x001323; 	T(MOV(al, *(raddr(ds,bx+7))));	// 9602                  mov     al, [bx+7] ;~ 041E:1323
cs=0x41e;eip=0x001326; 	T(AND(ax, 0x0FF));	// 9603                  and     ax, 0FFh ;~ 041E:1326
cs=0x41e;eip=0x001329; 	X(PUSH(ax));	// 9604                  push    ax ;~ 041E:1329
cs=0x41e;eip=0x00132a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9605                  mov     bx, [bp+arg_0] ;~ 041E:132A
cs=0x41e;eip=0x00132d; 	T(MOV(al, *(raddr(ds,bx+5))));	// 9606                  mov     al, [bx+5] ;~ 041E:132D
cs=0x41e;eip=0x001330; 	T(AND(ax, 0x0FF));	// 9607                  and     ax, 0FFh ;~ 041E:1330
cs=0x41e;eip=0x001333; 	X(PUSH(ax));	// 9608                  push    ax ;~ 041E:1333
cs=0x41e;eip=0x001334; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9609                  mov     bx, [bp+arg_0] ;~ 041E:1334
cs=0x41e;eip=0x001337; 	T(MOV(al, *(raddr(ds,bx+3))));	// 9610                  mov     al, [bx+3] ;~ 041E:1337
cs=0x41e;eip=0x00133a; 	T(AND(ax, 0x0FF));	// 9611                  and     ax, 0FFh ;~ 041E:133A
cs=0x41e;eip=0x00133d; 	X(PUSH(ax));	// 9612                  push    ax ;~ 041E:133D
cs=0x41e;eip=0x00133e; 	T(al = byte_1265e;);	// 9613                  mov     al, ds:byte_1265E ;~ 041E:133E
cs=0x41e;eip=0x001341; 	T(AND(ax, 0x0FF));	// 9614                  and     ax, 0FFh ;~ 041E:1341
cs=0x41e;eip=0x001344; 	X(PUSH(ax));	// 9615                  push    ax ;~ 041E:1344
cs=0x41e;eip=0x001345; 	J(CALL(sub_13398,0));	// 9616                  call    sub_13398 ;~ 041E:1345
cs=0x41e;eip=0x001348; 	T(ADD(sp, 8));	// 9617                  add     sp, 8 ;~ 041E:1348
cs=0x41e;eip=0x00134b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9618                  mov     bx, [bp+arg_0] ;~ 041E:134B
cs=0x41e;eip=0x00134e; 	T(MOV(al, *(raddr(ds,bx))));	// 9619                  mov     al, [bx] ;~ 041E:134E
cs=0x41e;eip=0x001350; 	T(AND(ax, 0x0FF));	// 9620                  and     ax, 0FFh ;~ 041E:1350
cs=0x41e;eip=0x001353; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9621                  mov     bx, [bp+arg_0] ;~ 041E:1353
cs=0x41e;eip=0x001356; 	T(MOV(cl, *(raddr(ds,bx+6))));	// 9622                  mov     cl, [bx+6] ;~ 041E:1356
cs=0x41e;eip=0x001359; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 9623                  mov     [bp+var_6], ax ;~ 041E:1359
cs=0x41e;eip=0x00135c; 	T(ax = cx;);	// 9624                  mov     ax, cx ;~ 041E:135C
cs=0x41e;eip=0x00135e; 	T(AND(ax, 0x0FF));	// 9625                  and     ax, 0FFh ;~ 041E:135E
cs=0x41e;eip=0x001361; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_6))));	// 9626                  mov     cx, [bp+var_6] ;~ 041E:1361
cs=0x41e;eip=0x001364; 	T(SUB(cx, ax));	// 9627                  sub     cx, ax ;~ 041E:1364
cs=0x41e;eip=0x001366; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9628                  mov     bx, [bp+arg_0] ;~ 041E:1366
cs=0x41e;eip=0x001369; 	X(MOV(*(raddr(ds,bx+7)), cl));	// 9629                  mov     [bx+7], cl ;~ 041E:1369
loc_13b2c:
	// 4611 
cs=0x41e;eip=0x00136c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9633                  mov     bx, [bp+arg_0] ;~ 041E:136C
cs=0x41e;eip=0x00136f; 	T(CMP(*(raddr(ds,bx+1)), 0));	// 9634                  cmp     byte ptr [bx+1], 0 ;~ 041E:136F
cs=0x41e;eip=0x001373; 	J(JZ(loc_13b4a));	// 9635                  jz      short loc_13B4A ;~ 041E:1373
cs=0x41e;eip=0x001375; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9636                  mov     bx, [bp+arg_0] ;~ 041E:1375
cs=0x41e;eip=0x001378; 	T(MOV(al, *(raddr(ds,bx+1))));	// 9637                  mov     al, [bx+1] ;~ 041E:1378
cs=0x41e;eip=0x00137b; 	T(CBW);	// 9638                  cbw ;~ 041E:137B
cs=0x41e;eip=0x00137c; 	X(PUSH(ax));	// 9639                  push    ax ;~ 041E:137C
cs=0x41e;eip=0x00137d; 	T(al = byte_1265e;);	// 9640                  mov     al, ds:byte_1265E ;~ 041E:137D
cs=0x41e;eip=0x001380; 	T(AND(ax, 0x0FF));	// 9641                  and     ax, 0FFh ;~ 041E:1380
cs=0x41e;eip=0x001383; 	X(PUSH(ax));	// 9642                  push    ax ;~ 041E:1383
cs=0x41e;eip=0x001384; 	J(CALL(sub_1321c,0));	// 9643                  call    sub_1321C ;~ 041E:1384
cs=0x41e;eip=0x001387; 	T(ADD(sp, 4));	// 9644                  add     sp, 4 ;~ 041E:1387
loc_13b4a:
	// 4612 
cs=0x41e;eip=0x00138a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9647                  mov     bx, [bp+arg_0] ;~ 041E:138A
cs=0x41e;eip=0x00138d; 	X(DEC(*(raddr(ds,bx+8))));	// 9648                  dec     byte ptr [bx+8] ;~ 041E:138D
cs=0x41e;eip=0x001390; 	T(MOV(al, *(raddr(ds,bx+8))));	// 9649                  mov     al, [bx+8] ;~ 041E:1390
cs=0x41e;eip=0x001393; 	T(AND(ax, 0x0FF));	// 9650                  and     ax, 0FFh ;~ 041E:1393
cs=0x41e;eip=0x001396; 	J(JNZ(loc_13b82));	// 9651                  jnz     short loc_13B82 ;~ 041E:1396
cs=0x41e;eip=0x001398; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9652                  mov     bx, [bp+arg_0] ;~ 041E:1398
cs=0x41e;eip=0x00139b; 	T(MOV(al, *(raddr(ds,bx+9))));	// 9653                  mov     al, [bx+9] ;~ 041E:139B
cs=0x41e;eip=0x00139e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9654                  mov     bx, [bp+arg_0] ;~ 041E:139E
cs=0x41e;eip=0x0013a1; 	X(MOV(*(raddr(ds,bx+8)), al));	// 9655                  mov     [bx+8], al ;~ 041E:13A1
cs=0x41e;eip=0x0013a4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9656                  mov     bx, [bp+arg_0] ;~ 041E:13A4
cs=0x41e;eip=0x0013a7; 	T(CMP(*(raddr(ds,bx+2)), 0));	// 9657                  cmp     byte ptr [bx+2], 0 ;~ 041E:13A7
cs=0x41e;eip=0x0013ab; 	J(JZ(loc_13b82));	// 9658                  jz      short loc_13B82 ;~ 041E:13AB
cs=0x41e;eip=0x0013ad; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 9659                  mov     bx, [bp+arg_0] ;~ 041E:13AD
cs=0x41e;eip=0x0013b0; 	T(MOV(al, *(raddr(ds,bx+2))));	// 9660                  mov     al, [bx+2] ;~ 041E:13B0
cs=0x41e;eip=0x0013b3; 	T(CBW);	// 9661                  cbw ;~ 041E:13B3
cs=0x41e;eip=0x0013b4; 	X(PUSH(ax));	// 9662                  push    ax ;~ 041E:13B4
cs=0x41e;eip=0x0013b5; 	T(al = byte_1265e;);	// 9663                  mov     al, ds:byte_1265E ;~ 041E:13B5
cs=0x41e;eip=0x0013b8; 	T(AND(ax, 0x0FF));	// 9664                  and     ax, 0FFh ;~ 041E:13B8
cs=0x41e;eip=0x0013bb; 	X(PUSH(ax));	// 9665                  push    ax ;~ 041E:13BB
cs=0x41e;eip=0x0013bc; 	J(CALL(sub_132a2,0));	// 9666                  call    sub_132A2 ;~ 041E:13BC
cs=0x41e;eip=0x0013bf; 	T(ADD(sp, 4));	// 9667                  add     sp, 4 ;~ 041E:13BF
loc_13b82:
	// 4613 
cs=0x41e;eip=0x0013c2; 	X(INC(byte_1265e));	// 9671                  inc     ds:byte_1265E ;~ 041E:13C2
cs=0x41e;eip=0x0013c6; 	X(POP(di));	// 9672                  pop     di ;~ 041E:13C6
cs=0x41e;eip=0x0013c7; 	X(POP(si));	// 9673                  pop     si ;~ 041E:13C7
cs=0x41e;eip=0x0013c8; 	T(sp = bp;);	// 9674                  mov     sp, bp ;~ 041E:13C8
cs=0x41e;eip=0x0013ca; 	X(POP(bp));	// 9675                  pop     bp ;~ 041E:13CA
cs=0x41e;eip=0x0013cb; 	J(RETN(0));	// 9676                  retn ;~ 041E:13CB

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::k__def_13a6f: 	goto __def_13a6f;
        case m2c::kloc_1396e: 	goto loc_1396e;
        case m2c::kloc_13980: 	goto loc_13980;
        case m2c::kloc_13994: 	goto loc_13994;
        case m2c::kloc_1399a: 	goto loc_1399a;
        case m2c::kloc_1399e: 	goto loc_1399e;
        case m2c::kloc_139ce: 	goto loc_139ce;
        case m2c::kloc_139e6: 	goto loc_139e6;
        case m2c::kloc_139fe: 	goto loc_139fe;
        case m2c::kloc_13a2e: 	goto loc_13a2e;
        case m2c::kloc_13a60: 	goto loc_13a60;
        case m2c::kloc_13a6b: 	goto loc_13a6b;
        case m2c::kloc_13a88: 	goto loc_13a88;
        case m2c::kloc_13ad0: 	goto loc_13ad0;
        case m2c::kloc_13ae0: 	goto loc_13ae0;
        case m2c::kloc_13b2c: 	goto loc_13b2c;
        case m2c::kloc_13b4a: 	goto loc_13b4a;
        case m2c::kloc_13b82: 	goto loc_13b82;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13b8c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13b8c:
    _begin:
#undef var_2
#define var_2 -2
	// 9685 var_2           = word ptr -2 ;~ 041E:13CC
cs=0x41e;eip=0x0013cc; 	X(PUSH(bp));	// 9687                  push    bp ;~ 041E:13CC
cs=0x41e;eip=0x0013cd; 	T(bp = sp;);	// 9688                  mov     bp, sp ;~ 041E:13CD
cs=0x41e;eip=0x0013cf; 	T(SUB(sp, 2));	// 9689                  sub     sp, 2 ;~ 041E:13CF
cs=0x41e;eip=0x0013d3; 	X(PUSH(si));	// 9690                  push    si ;~ 041E:13D3
cs=0x41e;eip=0x0013d4; 	X(PUSH(di));	// 9691                  push    di ;~ 041E:13D4
cs=0x41e;eip=0x0013d5; 	T(al = byte_11cb6;);	// 9692                  mov     al, ds:byte_11CB6 ;~ 041E:13D5
cs=0x41e;eip=0x0013d8; 	T(AND(ax, 0x0FF));	// 9693                  and     ax, 0FFh ;~ 041E:13D8
cs=0x41e;eip=0x0013db; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 9694                  mov     [bp+var_2], ax ;~ 041E:13DB
cs=0x41e;eip=0x0013de; 	T(al = byte_11cb7;);	// 9695                  mov     al, ds:byte_11CB7 ;~ 041E:13DE
cs=0x41e;eip=0x0013e1; 	T(AND(ax, 0x0FF));	// 9696                  and     ax, 0FFh ;~ 041E:13E1
cs=0x41e;eip=0x0013e4; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_2))));	// 9697                  mov     cx, [bp+var_2] ;~ 041E:13E4
cs=0x41e;eip=0x0013e7; 	T(CMP(cx, ax));	// 9698                  cmp     cx, ax ;~ 041E:13E7
cs=0x41e;eip=0x0013e9; 	J(JNZ(loc_13bae));	// 9699                  jnz     short loc_13BAE ;~ 041E:13E9
cs=0x41e;eip=0x0013eb; 	J(JMP(loc_13c2e));	// 9700                  jmp     loc_13C2E ;~ 041E:13EB
loc_13bae:
	// 4614 
cs=0x41e;eip=0x0013ee; 	T(al = byte_11cb6;);	// 9704                  mov     al, ds:byte_11CB6 ;~ 041E:13EE
cs=0x41e;eip=0x0013f1; 	T(AND(ax, 0x0FF));	// 9705                  and     ax, 0FFh ;~ 041E:13F1
cs=0x41e;eip=0x0013f4; 	J(JNZ(loc_13bb9));	// 9706                  jnz     short loc_13BB9 ;~ 041E:13F4
cs=0x41e;eip=0x0013f6; 	J(JMP(loc_13c10));	// 9707                  jmp     loc_13C10 ;~ 041E:13F6
loc_13bb9:
	// 4615 
cs=0x41e;eip=0x0013f9; 	T(ax = 6;);	// 9711                  mov     ax, 6 ;~ 041E:13F9
cs=0x41e;eip=0x0013fc; 	X(PUSH(ax));	// 9712                  push    ax ;~ 041E:13FC
cs=0x41e;eip=0x0013fd; 	T(ax = 5;);	// 9713                  mov     ax, 5 ;~ 041E:13FD
cs=0x41e;eip=0x001400; 	X(PUSH(ax));	// 9714                  push    ax ;~ 041E:1400
cs=0x41e;eip=0x001401; 	J(CALL(sub_13788,0));	// 9715                  call    sub_13788 ;~ 041E:1401
cs=0x41e;eip=0x001404; 	T(ADD(sp, 4));	// 9716                  add     sp, 4 ;~ 041E:1404
cs=0x41e;eip=0x001407; 	T(ax = 1;);	// 9717                  mov     ax, 1 ;~ 041E:1407
cs=0x41e;eip=0x00140a; 	X(PUSH(ax));	// 9718                  push    ax ;~ 041E:140A
cs=0x41e;eip=0x00140b; 	T(ax = 6;);	// 9719                  mov     ax, 6 ;~ 041E:140B
cs=0x41e;eip=0x00140e; 	X(PUSH(ax));	// 9720                  push    ax ;~ 041E:140E
cs=0x41e;eip=0x00140f; 	J(CALL(sub_13788,0));	// 9721                  call    sub_13788 ;~ 041E:140F
cs=0x41e;eip=0x001412; 	T(ADD(sp, 4));	// 9722                  add     sp, 4 ;~ 041E:1412
cs=0x41e;eip=0x001415; 	T(ax = 0x0F;);	// 9723                  mov     ax, 0Fh ;~ 041E:1415
cs=0x41e;eip=0x001418; 	X(PUSH(ax));	// 9724                  push    ax ;~ 041E:1418
cs=0x41e;eip=0x001419; 	T(ax = 5;);	// 9725                  mov     ax, 5 ;~ 041E:1419
cs=0x41e;eip=0x00141c; 	X(PUSH(ax));	// 9726                  push    ax ;~ 041E:141C
cs=0x41e;eip=0x00141d; 	J(CALL(sub_130ea,0));	// 9727                  call    sub_130EA ;~ 041E:141D
cs=0x41e;eip=0x001420; 	T(ADD(sp, 4));	// 9728                  add     sp, 4 ;~ 041E:1420
cs=0x41e;eip=0x001423; 	T(XOR(ax, ax));	// 9729                  xor     ax, ax ;~ 041E:1423
cs=0x41e;eip=0x001425; 	X(PUSH(ax));	// 9730                  push    ax ;~ 041E:1425
cs=0x41e;eip=0x001426; 	T(ax = 0x0F;);	// 9731                  mov     ax, 0Fh ;~ 041E:1426
cs=0x41e;eip=0x001429; 	X(PUSH(ax));	// 9732                  push    ax ;~ 041E:1429
cs=0x41e;eip=0x00142a; 	T(ax = 0x0B;);	// 9733                  mov     ax, 0Bh ;~ 041E:142A
cs=0x41e;eip=0x00142d; 	X(PUSH(ax));	// 9734                  push    ax ;~ 041E:142D
cs=0x41e;eip=0x00142e; 	T(ax = 5;);	// 9735                  mov     ax, 5 ;~ 041E:142E
cs=0x41e;eip=0x001431; 	X(PUSH(ax));	// 9736                  push    ax ;~ 041E:1431
cs=0x41e;eip=0x001432; 	J(CALL(sub_13398,0));	// 9737                  call    sub_13398 ;~ 041E:1432
cs=0x41e;eip=0x001435; 	T(ADD(sp, 8));	// 9738                  add     sp, 8 ;~ 041E:1435
cs=0x41e;eip=0x001438; 	T(XOR(ax, ax));	// 9739                  xor     ax, ax ;~ 041E:1438
cs=0x41e;eip=0x00143a; 	X(PUSH(ax));	// 9740                  push    ax ;~ 041E:143A
cs=0x41e;eip=0x00143b; 	T(ax = 0x0F;);	// 9741                  mov     ax, 0Fh ;~ 041E:143B
cs=0x41e;eip=0x00143e; 	X(PUSH(ax));	// 9742                  push    ax ;~ 041E:143E
cs=0x41e;eip=0x00143f; 	T(ax = 0x37;);	// 9743                  mov     ax, 37h ; '7' ;~ 041E:143F
cs=0x41e;eip=0x001442; 	X(PUSH(ax));	// 9744                  push    ax ;~ 041E:1442
cs=0x41e;eip=0x001443; 	T(ax = 6;);	// 9745                  mov     ax, 6 ;~ 041E:1443
cs=0x41e;eip=0x001446; 	X(PUSH(ax));	// 9746                  push    ax ;~ 041E:1446
cs=0x41e;eip=0x001447; 	J(CALL(sub_13398,0));	// 9747                  call    sub_13398 ;~ 041E:1447
cs=0x41e;eip=0x00144a; 	T(ADD(sp, 8));	// 9748                  add     sp, 8 ;~ 041E:144A
cs=0x41e;eip=0x00144d; 	J(JMP(loc_13c24));	// 9749                  jmp     short loc_13C24 ;~ 041E:144D
loc_13c10:
	// 4616 
cs=0x41e;eip=0x001450; 	T(ax = 5;);	// 9755                  mov     ax, 5 ;~ 041E:1450
cs=0x41e;eip=0x001453; 	X(PUSH(ax));	// 9756                  push    ax ;~ 041E:1453
cs=0x41e;eip=0x001454; 	J(CALL(sub_1331c,0));	// 9757                  call    sub_1331C ;~ 041E:1454
cs=0x41e;eip=0x001457; 	T(ADD(sp, 2));	// 9758                  add     sp, 2 ;~ 041E:1457
cs=0x41e;eip=0x00145a; 	T(ax = 6;);	// 9759                  mov     ax, 6 ;~ 041E:145A
cs=0x41e;eip=0x00145d; 	X(PUSH(ax));	// 9760                  push    ax ;~ 041E:145D
cs=0x41e;eip=0x00145e; 	J(CALL(sub_1331c,0));	// 9761                  call    sub_1331C ;~ 041E:145E
cs=0x41e;eip=0x001461; 	T(ADD(sp, 2));	// 9762                  add     sp, 2 ;~ 041E:1461
loc_13c24:
	// 4617 
cs=0x41e;eip=0x001464; 	T(al = byte_11cb6;);	// 9765                  mov     al, ds:byte_11CB6 ;~ 041E:1464
cs=0x41e;eip=0x001467; 	X(byte_11cb7 = al;);	// 9766                  mov     ds:byte_11CB7, al ;~ 041E:1467
cs=0x41e;eip=0x00146a; 	J(JMP(loc_13c85));	// 9767                  jmp     loc_13C85 ;~ 041E:146A
loc_13c2e:
	// 4618 
cs=0x41e;eip=0x00146e; 	T(al = byte_11cb6;);	// 9773                  mov     al, ds:byte_11CB6 ;~ 041E:146E
cs=0x41e;eip=0x001471; 	T(AND(ax, 0x0FF));	// 9774                  and     ax, 0FFh ;~ 041E:1471
cs=0x41e;eip=0x001474; 	J(JNZ(loc_13c39));	// 9775                  jnz     short loc_13C39 ;~ 041E:1474
cs=0x41e;eip=0x001476; 	J(JMP(loc_13c85));	// 9776                  jmp     loc_13C85 ;~ 041E:1476
loc_13c39:
	// 4619 
cs=0x41e;eip=0x001479; 	T(ax = *(dw*)(&_unk_11cb0););	// 9780                  mov     ax, word ptr ds:_unk_11CB0 ;~ 041E:1479
cs=0x41e;eip=0x00147c; 	T(CMP(*(dw*)(&_unk_11cae), ax));	// 9781                  cmp     word ptr ds:_unk_11CAE, ax ;~ 041E:147C
cs=0x41e;eip=0x001480; 	J(JZ(loc_13c85));	// 9782                  jz      short loc_13C85 ;~ 041E:1480
cs=0x41e;eip=0x001482; 	T(ax = *(dw*)(&_unk_11cae););	// 9783                  mov     ax, word ptr ds:_unk_11CAE ;~ 041E:1482
cs=0x41e;eip=0x001485; 	T(ADD(ax, 0x8FC));	// 9784                  add     ax, 8FCh ;~ 041E:1485
cs=0x41e;eip=0x001488; 	X(PUSH(ax));	// 9785                  push    ax ;~ 041E:1488
cs=0x41e;eip=0x001489; 	T(ax = 5;);	// 9786                  mov     ax, 5 ;~ 041E:1489
cs=0x41e;eip=0x00148c; 	X(PUSH(ax));	// 9787                  push    ax ;~ 041E:148C
cs=0x41e;eip=0x00148d; 	J(CALL(sub_131c2,0));	// 9788                  call    sub_131C2 ;~ 041E:148D
cs=0x41e;eip=0x001490; 	T(ADD(sp, 4));	// 9789                  add     sp, 4 ;~ 041E:1490
cs=0x41e;eip=0x001493; 	T(cx = 6;);	// 9790                  mov     cx, 6 ;~ 041E:1493
cs=0x41e;eip=0x001496; 	T(ax = *(dw*)(&_unk_11cae););	// 9791                  mov     ax, word ptr ds:_unk_11CAE ;~ 041E:1496
cs=0x41e;eip=0x001499; 	T(SHR(ax, cl));	// 9792                  shr     ax, cl ;~ 041E:1499
cs=0x41e;eip=0x00149b; 	T(ADD(ax, 0x0F));	// 9793                  add     ax, 0Fh ;~ 041E:149B
cs=0x41e;eip=0x00149e; 	X(PUSH(ax));	// 9794                  push    ax ;~ 041E:149E
cs=0x41e;eip=0x00149f; 	T(ax = 6;);	// 9795                  mov     ax, 6 ;~ 041E:149F
cs=0x41e;eip=0x0014a2; 	X(PUSH(ax));	// 9796                  push    ax ;~ 041E:14A2
cs=0x41e;eip=0x0014a3; 	J(CALL(sub_1307e,0));	// 9797                  call    sub_1307E ;~ 041E:14A3
cs=0x41e;eip=0x0014a6; 	T(ADD(sp, 4));	// 9798                  add     sp, 4 ;~ 041E:14A6
cs=0x41e;eip=0x0014a9; 	T(cx = 7;);	// 9799                  mov     cx, 7 ;~ 041E:14A9
cs=0x41e;eip=0x0014ac; 	T(ax = *(dw*)(&_unk_11cae););	// 9800                  mov     ax, word ptr ds:_unk_11CAE ;~ 041E:14AC
cs=0x41e;eip=0x0014af; 	T(SHR(ax, cl));	// 9801                  shr     ax, cl ;~ 041E:14AF
cs=0x41e;eip=0x0014b1; 	T(ADD(ax, 0x0F));	// 9802                  add     ax, 0Fh ;~ 041E:14B1
cs=0x41e;eip=0x0014b4; 	X(PUSH(ax));	// 9803                  push    ax ;~ 041E:14B4
cs=0x41e;eip=0x0014b5; 	T(ax = 5;);	// 9804                  mov     ax, 5 ;~ 041E:14B5
cs=0x41e;eip=0x0014b8; 	X(PUSH(ax));	// 9805                  push    ax ;~ 041E:14B8
cs=0x41e;eip=0x0014b9; 	J(CALL(sub_1307e,0));	// 9806                  call    sub_1307E ;~ 041E:14B9
cs=0x41e;eip=0x0014bc; 	T(ADD(sp, 4));	// 9807                  add     sp, 4 ;~ 041E:14BC
cs=0x41e;eip=0x0014bf; 	T(ax = *(dw*)(&_unk_11cae););	// 9808                  mov     ax, word ptr ds:_unk_11CAE ;~ 041E:14BF
cs=0x41e;eip=0x0014c2; 	X(*(dw*)(&_unk_11cb0) = ax;);	// 9809                  mov     word ptr ds:_unk_11CB0, ax ;~ 041E:14C2
loc_13c85:
	// 4620 
cs=0x41e;eip=0x0014c5; 	X(POP(di));	// 9813                  pop     di ;~ 041E:14C5
cs=0x41e;eip=0x0014c6; 	X(POP(si));	// 9814                  pop     si ;~ 041E:14C6
cs=0x41e;eip=0x0014c7; 	T(sp = bp;);	// 9815                  mov     sp, bp ;~ 041E:14C7
cs=0x41e;eip=0x0014c9; 	X(POP(bp));	// 9816                  pop     bp ;~ 041E:14C9
cs=0x41e;eip=0x0014ca; 	J(RETN(0));	// 9817                  retn ;~ 041E:14CA

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_13bae: 	goto loc_13bae;
        case m2c::kloc_13bb9: 	goto loc_13bb9;
        case m2c::kloc_13c10: 	goto loc_13c10;
        case m2c::kloc_13c24: 	goto loc_13c24;
        case m2c::kloc_13c2e: 	goto loc_13c2e;
        case m2c::kloc_13c39: 	goto loc_13c39;
        case m2c::kloc_13c85: 	goto loc_13c85;
        case m2c::ksub_13b8c: 	goto sub_13b8c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_13c8c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_13c8c:
    _begin:
cs=0x41e;eip=0x0014cc; 	T(CMP(byte_125ca, 0));	// 9827                  cmp     ds:byte_125CA, 0 ;~ 041E:14CC
cs=0x41e;eip=0x0014d1; 	J(JNZ(loc_13c96));	// 9828                  jnz     short loc_13C96 ;~ 041E:14D1
cs=0x41e;eip=0x0014d3; 	J(JMP(locret_13cda));	// 9829                  jmp     locret_13CDA ;~ 041E:14D3
loc_13c96:
	// 4621 
cs=0x41e;eip=0x0014d6; 	X(byte_1265e = 0;);	// 9833                  mov     ds:byte_1265E, 0 ;~ 041E:14D6
cs=0x41e;eip=0x0014db; 	T(ax = 0x0B9C;);	// 9834                  mov     ax, 0B9Ch ;~ 041E:14DB
cs=0x41e;eip=0x0014de; 	X(PUSH(ax));	// 9835                  push    ax ;~ 041E:14DE
cs=0x41e;eip=0x0014df; 	J(CALL(sub_1389e,0));	// 9836                  call    sub_1389E ;~ 041E:14DF
cs=0x41e;eip=0x0014e2; 	T(ADD(sp, 2));	// 9837                  add     sp, 2 ;~ 041E:14E2
cs=0x41e;eip=0x0014e5; 	T(ax = 0x0BB0;);	// 9838                  mov     ax, 0BB0h ;~ 041E:14E5
cs=0x41e;eip=0x0014e8; 	X(PUSH(ax));	// 9839                  push    ax ;~ 041E:14E8
cs=0x41e;eip=0x0014e9; 	J(CALL(sub_1389e,0));	// 9840                  call    sub_1389E ;~ 041E:14E9
cs=0x41e;eip=0x0014ec; 	T(ADD(sp, 2));	// 9841                  add     sp, 2 ;~ 041E:14EC
cs=0x41e;eip=0x0014ef; 	T(ax = 0x0BC4;);	// 9842                  mov     ax, 0BC4h ;~ 041E:14EF
cs=0x41e;eip=0x0014f2; 	X(PUSH(ax));	// 9843                  push    ax ;~ 041E:14F2
cs=0x41e;eip=0x0014f3; 	J(CALL(sub_1389e,0));	// 9844                  call    sub_1389E ;~ 041E:14F3
cs=0x41e;eip=0x0014f6; 	T(ADD(sp, 2));	// 9845                  add     sp, 2 ;~ 041E:14F6
cs=0x41e;eip=0x0014f9; 	T(ax = 0x0BD8;);	// 9846                  mov     ax, 0BD8h ;~ 041E:14F9
cs=0x41e;eip=0x0014fc; 	X(PUSH(ax));	// 9847                  push    ax ;~ 041E:14FC
cs=0x41e;eip=0x0014fd; 	J(CALL(sub_1389e,0));	// 9848                  call    sub_1389E ;~ 041E:14FD
cs=0x41e;eip=0x001500; 	T(ADD(sp, 2));	// 9849                  add     sp, 2 ;~ 041E:1500
cs=0x41e;eip=0x001503; 	T(ax = 0x0BEC;);	// 9850                  mov     ax, 0BECh ;~ 041E:1503
cs=0x41e;eip=0x001506; 	X(PUSH(ax));	// 9851                  push    ax ;~ 041E:1506
cs=0x41e;eip=0x001507; 	J(CALL(sub_1389e,0));	// 9852                  call    sub_1389E ;~ 041E:1507
cs=0x41e;eip=0x00150a; 	T(ADD(sp, 2));	// 9853                  add     sp, 2 ;~ 041E:150A
cs=0x41e;eip=0x00150d; 	T(ax = 0x0C00;);	// 9854                  mov     ax, 0C00h ;~ 041E:150D
cs=0x41e;eip=0x001510; 	X(PUSH(ax));	// 9855                  push    ax ;~ 041E:1510
cs=0x41e;eip=0x001511; 	J(CALL(sub_1389e,0));	// 9856                  call    sub_1389E ;~ 041E:1511
cs=0x41e;eip=0x001514; 	T(ADD(sp, 2));	// 9857                  add     sp, 2 ;~ 041E:1514
cs=0x41e;eip=0x001517; 	J(CALL(sub_13b8c,0));	// 9858                  call    sub_13B8C ;~ 041E:1517
locret_13cda:
	// 4622 
cs=0x41e;eip=0x00151a; 	J(RETN(0));	// 9861                  retn ;~ 041E:151A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_13c96: 	goto loc_13c96;
        case m2c::klocret_13cda: 	goto locret_13cda;
        case m2c::ksub_13c8c: 	goto sub_13c8c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg127c_1610_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg127c_1610_proc:
    _begin:
cs=0x41e;eip=0x001610; 	T(ah = 1;);	// 10089                  mov     ah, 1 ;~ 041E:1610
cs=0x41e;eip=0x001612; 	S(_INT(0x21));	// 10090                  int     21h             ; DOS - KEYBOARD INPUT ;~ 041E:1612
cs=0x41e;eip=0x001614; 	J(RETF(0));	// 10092                  retf ;~ 041E:1614
ret_41e_1615:
	// 4623 
cs=0x41e;eip=0x001615; 	T(SUB(ah, ah));	// 10094                  sub     ah, ah ;~ 041E:1615
cs=0x41e;eip=0x001617; 	S(_INT(0x16));	// 10095                  int     16h             ; KEYBOARD - READ CHAR FROM BUFFER, WAIT IF EMPTY ;~ 041E:1617
cs=0x41e;eip=0x001619; 	J(RETF(0));	// 10097                  retf ;~ 041E:1619
ret_41e_161a:
	// 4624 
cs=0x41e;eip=0x00161a; 	T(ah = 1;);	// 10099                  mov     ah, 1 ;~ 041E:161A
cs=0x41e;eip=0x00161c; 	S(_INT(0x16));	// 10100                  int     16h             ; KEYBOARD - CHECK BUFFER, DO NOT CLEAR ;~ 041E:161C
cs=0x41e;eip=0x00161e; 	J(JZ(loc_13de3));	// 10104                  jz      short loc_13DE3 ;~ 041E:161E
cs=0x41e;eip=0x001620; 	T(SUB(ax, ax));	// 10105                  sub     ax, ax ;~ 041E:1620
cs=0x41e;eip=0x001622; 	J(RETF(0));	// 10106                  retf ;~ 041E:1622
loc_13de3:
	// 4625 
cs=0x41e;eip=0x001623; 	T(SUB(ax, ax));	// 10110                  sub     ax, ax ;~ 041E:1623
cs=0x41e;eip=0x001625; 	T(NOT(ax));	// 10111                  not     ax ;~ 041E:1625
cs=0x41e;eip=0x001627; 	J(RETF(0));	// 10112                  retf ;~ 041E:1627
ret_41e_1628:
	// 4626 
cs=0x41e;eip=0x001628; 	X(PUSH(es));	// 10114                  push    es ;~ 041E:1628
cs=0x41e;eip=0x001629; 	T(SUB(ax, ax));	// 10115                  sub     ax, ax ;~ 041E:1629
cs=0x41e;eip=0x00162b; 	T(es = ax;);	// 10116                  mov     es, ax ;~ 041E:162B
cs=0x41e;eip=0x00162d; 	T(MOV(al, *(raddr(es,0x417))));	// 10118                  mov     al, es:417h ;~ 041E:162D
cs=0x41e;eip=0x001631; 	T(AND(al, 0x0F0));	// 10119                  and     al, 0F0h ;~ 041E:1631
cs=0x41e;eip=0x001633; 	X(MOV(*(raddr(es,0x417)), al));	// 10120                  mov     es:417h, al ;~ 041E:1633
cs=0x41e;eip=0x001637; 	X(POP(es));	// 10121                  pop     es ;~ 041E:1637
cs=0x41e;eip=0x001638; 	J(RETF(0));	// 10123                  retf ;~ 041E:1638
ret_41e_1639:
	// 4627 
cs=0x41e;eip=0x001639; 	X(PUSH(bp));	// 10125                  push    bp ;~ 041E:1639
cs=0x41e;eip=0x00163a; 	T(bp = sp;);	// 10126                  mov     bp, sp ;~ 041E:163A
cs=0x41e;eip=0x00163c; 	T(dx = 0x201;);	// 10127                  mov     dx, 201h ;~ 041E:163C
cs=0x41e;eip=0x00163f; 	S(IN(al, dx));	// 10128                  in      al, dx          ; Game I/O port ;~ 041E:163F
cs=0x41e;eip=0x001640; 	T(MOV(cx, *(dw*)(raddr(ss,bp+6))));	// 10131                  mov     cx, [bp+6] ;~ 041E:1640
cs=0x41e;eip=0x001643; 	T(ADD(cx, 4));	// 10132                  add     cx, 4 ;~ 041E:1643
cs=0x41e;eip=0x001646; 	T(SHR(al, cl));	// 10133                  shr     al, cl ;~ 041E:1646
cs=0x41e;eip=0x001648; 	T(AND(al, 1));	// 10134                  and     al, 1 ;~ 041E:1648
cs=0x41e;eip=0x00164a; 	T(SUB(ah, ah));	// 10135                  sub     ah, ah ;~ 041E:164A
cs=0x41e;eip=0x00164c; 	T(XOR(ax, 1));	// 10136                  xor     ax, 1 ;~ 041E:164C
cs=0x41e;eip=0x00164f; 	X(POP(bp));	// 10137                  pop     bp ;~ 041E:164F
cs=0x41e;eip=0x001650; 	J(RETF(0));	// 10138                  retf ;~ 041E:1650
ret_41e_1651:
	// 4628 
cs=0x41e;eip=0x001651; 	X(POP(bp));	// 10140                  pop     bp ;~ 041E:1651
cs=0x41e;eip=0x001652; 	J(RETN(2));	// 10141                  retn    2 ;~ 041E:1652

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_13de3: 	goto loc_13de3;
        case m2c::kret_41e_1615: 	goto ret_41e_1615;
        case m2c::kret_41e_161a: 	goto ret_41e_161a;
        case m2c::kret_41e_1628: 	goto ret_41e_1628;
        case m2c::kret_41e_1639: 	goto ret_41e_1639;
        case m2c::kret_41e_1651: 	goto ret_41e_1651;
        case m2c::kseg127c_1610_proc: 	goto seg127c_1610_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}


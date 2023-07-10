/* THIS IS GENERATED FILE */

        
#include "f.exe.h"

                

 bool _group75(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group75:
    _begin:
sub_35ab2:
	// 70022 
#undef arg_2
#define arg_2 8
	// 70025 arg_2           = word ptr  8 ;~ 274D:0002
#undef arg_4
#define arg_4 0x0A
	// 70026 arg_4           = word ptr  0Ah ;~ 274D:0002
#undef arg_6
#define arg_6 0x0C
	// 70027 arg_6           = byte ptr  0Ch ;~ 274D:0002
cs=0x274d;eip=0x000002; 	X(PUSH(bp));	// 70029                  push    bp ;~ 274D:0002
cs=0x274d;eip=0x000003; 	T(bp = sp;);	// 70030                  mov     bp, sp ;~ 274D:0003
cs=0x274d;eip=0x000005; 	X(PUSH(es));	// 70031                  push    es ;~ 274D:0005
cs=0x274d;eip=0x000006; 	X(PUSH(ds));	// 70032                  push    ds ;~ 274D:0006
cs=0x274d;eip=0x000007; 	X(PUSH(si));	// 70033                  push    si ;~ 274D:0007
cs=0x274d;eip=0x000008; 	X(PUSH(di));	// 70034                  push    di ;~ 274D:0008
cs=0x274d;eip=0x000009; 	T(MOV(ah, *(raddr(ss,bp+arg_6))));	// 70035                  mov     ah, [bp+arg_6] ;~ 274D:0009
cs=0x274d;eip=0x00000c; 	J(CALLF(sub_49a3e,0));	// 70036                  call    far ptr sub_49A3E ;~ 274D:000C
cs=0x274d;eip=0x000011; 	J(CALL(sub_37950,0));	// 70038                  call    sub_37950 ;~ 274D:0011
cs=0x274d;eip=0x000014; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 70039                  mov     si, [bp+arg_4] ;~ 274D:0014
cs=0x274d;eip=0x000017; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_2))));	// 70040                  mov     cx, [bp+arg_2] ;~ 274D:0017
cs=0x274d;eip=0x00001a; 	T(DEC(cx));	// 70041                  dec     cx ;~ 274D:001A
cs=0x274d;eip=0x00001b; 	T(LODSW);	// 70042                  lodsw ;~ 274D:001B
cs=0x274d;eip=0x00001c; 	X(word_4d78d = ax;);	// 70043                  mov     word_4D78D, ax ;~ 274D:001C
cs=0x274d;eip=0x00001f; 	X(PUSH(ax));	// 70044                  push    ax ;~ 274D:001F
cs=0x274d;eip=0x000020; 	T(LODSW);	// 70045                  lodsw ;~ 274D:0020
cs=0x274d;eip=0x000021; 	X(word_4d791 = ax;);	// 70046                  mov     word_4D791, ax ;~ 274D:0021
cs=0x274d;eip=0x000024; 	X(PUSH(ax));	// 70047                  push    ax ;~ 274D:0024
loc_35ad5:
	// 6859 
cs=0x274d;eip=0x000025; 	X(PUSH(cx));	// 70050                  push    cx ;~ 274D:0025
cs=0x274d;eip=0x000026; 	T(LODSW);	// 70051                  lodsw ;~ 274D:0026
cs=0x274d;eip=0x000027; 	X(word_4d78f = ax;);	// 70052                  mov     word_4D78F, ax ;~ 274D:0027
cs=0x274d;eip=0x00002a; 	X(PUSH(ax));	// 70053                  push    ax ;~ 274D:002A
cs=0x274d;eip=0x00002b; 	T(LODSW);	// 70054                  lodsw ;~ 274D:002B
cs=0x274d;eip=0x00002c; 	X(word_4d793 = ax;);	// 70055                  mov     word_4D793, ax ;~ 274D:002C
cs=0x274d;eip=0x00002f; 	X(PUSH(ax));	// 70056                  push    ax ;~ 274D:002F
cs=0x274d;eip=0x000030; 	X(PUSH(si));	// 70057                  push    si ;~ 274D:0030
cs=0x274d;eip=0x000031; 	J(CALL(sub_37ad8,0));	// 70058                  call    sub_37AD8 ;~ 274D:0031
cs=0x274d;eip=0x000034; 	X(POP(si));	// 70060                  pop     si ;~ 274D:0034
cs=0x274d;eip=0x000035; 	X(POP(word_4d791));	// 70061                  pop     word_4D791 ;~ 274D:0035
cs=0x274d;eip=0x000039; 	X(POP(word_4d78d));	// 70062                  pop     word_4D78D ;~ 274D:0039
cs=0x274d;eip=0x00003d; 	X(POP(cx));	// 70063                  pop     cx ;~ 274D:003D
cs=0x274d;eip=0x00003e; 	J(LOOP(loc_35ad5));	// 70064                  loop    loc_35AD5 ;~ 274D:003E
cs=0x274d;eip=0x000040; 	X(POP(word_4d793));	// 70065                  pop     word_4D793 ;~ 274D:0040
cs=0x274d;eip=0x000044; 	X(POP(word_4d78f));	// 70066                  pop     word_4D78F ;~ 274D:0044
cs=0x274d;eip=0x000048; 	J(CALL(sub_37ad8,0));	// 70067                  call    sub_37AD8 ;~ 274D:0048
cs=0x274d;eip=0x00004b; 	T(ax = word_4db09;);	// 70068                  mov     ax, word_4DB09 ;~ 274D:004B
cs=0x274d;eip=0x00004e; 	T(cx = word_4db0b;);	// 70069                  mov     cx, word_4DB0B ;~ 274D:004E
cs=0x274d;eip=0x000052; 	T(bx = 0x4CB5;);	// 70070                  mov     bx, 4CB5h ;~ 274D:0052
cs=0x274d;eip=0x000055; 	J(CALLF(sub_49a57,0));	// 70071                  call    far ptr sub_49A57 ;~ 274D:0055
seg35ab_5a_proc:
	// 70075 
cs=0x274d;eip=0x00005a; 	J(CALLF(sub_49a48,0));	// 70075                  call    far ptr sub_49A48 ;~ 274D:005A
cs=0x274d;eip=0x00005f; 	X(POP(di));	// 70077                  pop     di ;~ 274D:005F
cs=0x274d;eip=0x000060; 	X(POP(si));	// 70078                  pop     si ;~ 274D:0060
cs=0x274d;eip=0x000061; 	X(POP(ds));	// 70079                  pop     ds ;~ 274D:0061
cs=0x274d;eip=0x000062; 	X(POP(es));	// 70081                  pop     es ;~ 274D:0062
cs=0x274d;eip=0x000063; 	X(POP(bp));	// 70083                  pop     bp ;~ 274D:0063
cs=0x274d;eip=0x000064; 	J(RETF(0));	// 70084                  retf ;~ 274D:0064
ret_274d_66:
	// 6860 
cs=0x274d;eip=0x000066; 	T(bx = sp;);	// 70088                  mov     bx, sp ;~ 274D:0066
cs=0x274d;eip=0x000068; 	X(PUSH(si));	// 70089                  push    si ;~ 274D:0068
cs=0x274d;eip=0x000069; 	X(PUSH(di));	// 70090                  push    di ;~ 274D:0069
cs=0x274d;eip=0x00006a; 	T(MOV(bx, *(dw*)(raddr(ss,bx+2))));	// 70091                  mov     bx, ss:[bx+2] ;~ 274D:006A
cs=0x274d;eip=0x00006e; 	T(SHL(bx, 1));	// 70092                  shl     bx, 1 ;~ 274D:006E
cs=0x274d;eip=0x000070; 	T(SHL(bx, 1));	// 70093                  shl     bx, 1 ;~ 274D:0070
cs=0x274d;eip=0x000072; 	J(CALL(sub_35b28,0));	// 70094                  call    sub_35B28 ;~ 274D:0072
cs=0x274d;eip=0x000075; 	X(POP(di));	// 70095                  pop     di ;~ 274D:0075
cs=0x274d;eip=0x000076; 	X(POP(si));	// 70096                  pop     si ;~ 274D:0076
cs=0x274d;eip=0x000077; 	J(RETN(0));	// 70097                  retn ;~ 274D:0077

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_35ad5: 	goto loc_35ad5;
        case m2c::kret_274d_66: 	goto ret_274d_66;
        case m2c::kseg35ab_5a_proc: 	goto seg35ab_5a_proc;
        case m2c::ksub_35ab2: 	goto sub_35ab2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35b28(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35b28:
    _begin:
cs=0x274d;eip=0x000078; 	T(MOV(cx, *(dw*)(raddr(ds,bx+0x1DD6))));	// 70105                  mov     cx, [bx+1DD6h] ;~ 274D:0078
cs=0x274d;eip=0x00007c; 	T(CMP(byte_4de54, 0));	// 70106                  cmp     byte_4DE54, 0 ;~ 274D:007C
cs=0x274d;eip=0x000081; 	J(JZ(loc_35b35));	// 70107                  jz      short loc_35B35 ;~ 274D:0081
cs=0x274d;eip=0x000083; 	T(SHL(cx, 1));	// 70108                  shl     cx, 1 ;~ 274D:0083
loc_35b35:
	// 6861 
cs=0x274d;eip=0x000085; 	T(CMP(*(db*)(&word_4e73e), 0));	// 70111                  cmp     byte ptr word_4E73E, 0 ;~ 274D:0085
cs=0x274d;eip=0x00008a; 	J(JZ(loc_35b46));	// 70112                  jz      short loc_35B46 ;~ 274D:008A
cs=0x274d;eip=0x00008c; 	T(XCHG(dx, cx));	// 70113                  xchg    dx, cx ;~ 274D:008C
cs=0x274d;eip=0x00008e; 	T(cl = *(db*)(&word_4e73e););	// 70114                  mov     cl, byte ptr word_4E73E ;~ 274D:008E
cs=0x274d;eip=0x000092; 	T(SAR(dx, cl));	// 70115                  sar     dx, cl ;~ 274D:0092
cs=0x274d;eip=0x000094; 	T(XCHG(dx, cx));	// 70116                  xchg    dx, cx ;~ 274D:0094
loc_35b46:
	// 6862 
cs=0x274d;eip=0x000096; 	T(OR(cx, cx));	// 70119                  or      cx, cx ;~ 274D:0096
cs=0x274d;eip=0x000098; 	J(JLE(loc_35b97));	// 70120                  jle     short loc_35B97 ;~ 274D:0098
cs=0x274d;eip=0x00009a; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x1A0D))));	// 70121                  mov     dx, [bx+1A0Dh] ;~ 274D:009A
cs=0x274d;eip=0x00009e; 	T(MOV(al, *(raddr(ds,bx+0x1A0F))));	// 70122                  mov     al, [bx+1A0Fh] ;~ 274D:009E
cs=0x274d;eip=0x0000a2; 	T(CBW);	// 70123                  cbw ;~ 274D:00A2
cs=0x274d;eip=0x0000a3; 	T(XCHG(ax, dx));	// 70124                  xchg    ax, dx ;~ 274D:00A3
cs=0x274d;eip=0x0000a4; 	T(IDIV2(cx));	// 70125                  idiv    cx ;~ 274D:00A4
cs=0x274d;eip=0x0000a6; 	T(CWD);	// 70126                  cwd ;~ 274D:00A6
cs=0x274d;eip=0x0000a7; 	T(OR(ax, ax));	// 70127                  or      ax, ax ;~ 274D:00A7
cs=0x274d;eip=0x0000a9; 	T(ADD(ax, word_48bbc));	// 70128                  add     ax, word_48BBC ;~ 274D:00A9
cs=0x274d;eip=0x0000ad; 	T(ADC(dx, 0));	// 70129                  adc     dx, 0 ;~ 274D:00AD
cs=0x274d;eip=0x0000b0; 	X(MOV(*(dw*)(raddr(ds,bx+0x1FBA)), dx));	// 70130                  mov     [bx+1FBAh], dx ;~ 274D:00B0
cs=0x274d;eip=0x0000b4; 	X(MOV(*(dw*)(raddr(ds,bx+0x1FB8)), ax));	// 70131                  mov     [bx+1FB8h], ax ;~ 274D:00B4
cs=0x274d;eip=0x0000b8; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x1BF1))));	// 70132                  mov     dx, [bx+1BF1h] ;~ 274D:00B8
cs=0x274d;eip=0x0000bc; 	T(MOV(al, *(raddr(ds,bx+0x1BF3))));	// 70133                  mov     al, [bx+1BF3h] ;~ 274D:00BC
cs=0x274d;eip=0x0000c0; 	T(CBW);	// 70134                  cbw ;~ 274D:00C0
cs=0x274d;eip=0x0000c1; 	T(XCHG(ax, dx));	// 70135                  xchg    ax, dx ;~ 274D:00C1
cs=0x274d;eip=0x0000c2; 	T(si = dx;);	// 70136                  mov     si, dx ;~ 274D:00C2
cs=0x274d;eip=0x0000c4; 	T(di = ax;);	// 70137                  mov     di, ax ;~ 274D:00C4
cs=0x274d;eip=0x0000c6; 	T(SAR(dx, 1));	// 70138                  sar     dx, 1 ;~ 274D:00C6
cs=0x274d;eip=0x0000c8; 	T(RCR(ax, 1));	// 70139                  rcr     ax, 1 ;~ 274D:00C8
cs=0x274d;eip=0x0000ca; 	T(SAR(dx, 1));	// 70140                  sar     dx, 1 ;~ 274D:00CA
cs=0x274d;eip=0x0000cc; 	T(RCR(ax, 1));	// 70141                  rcr     ax, 1 ;~ 274D:00CC
cs=0x274d;eip=0x0000ce; 	T(SUB(ax, di));	// 70142                  sub     ax, di ;~ 274D:00CE
cs=0x274d;eip=0x0000d0; 	T(SBB(dx, si));	// 70143                  sbb     dx, si ;~ 274D:00D0
cs=0x274d;eip=0x0000d2; 	T(IDIV2(cx));	// 70144                  idiv    cx ;~ 274D:00D2
cs=0x274d;eip=0x0000d4; 	T(CWD);	// 70145                  cwd ;~ 274D:00D4
cs=0x274d;eip=0x0000d5; 	T(OR(ax, ax));	// 70146                  or      ax, ax ;~ 274D:00D5
cs=0x274d;eip=0x0000d7; 	T(ADD(ax, *(word_48bbe)));	// 70147                  add     ax, word_48BBE ;~ 274D:00D7
cs=0x274d;eip=0x0000db; 	T(ADC(dx, 0));	// 70148                  adc     dx, 0 ;~ 274D:00DB
cs=0x274d;eip=0x0000de; 	X(MOV(*(dw*)(raddr(ds,bx+0x219E)), dx));	// 70149                  mov     [bx+219Eh], dx ;~ 274D:00DE
cs=0x274d;eip=0x0000e2; 	X(MOV(*(dw*)(raddr(ds,bx+0x219C)), ax));	// 70150                  mov     [bx+219Ch], ax ;~ 274D:00E2
cs=0x274d;eip=0x0000e6; 	J(RETN(0));	// 70151                  retn ;~ 274D:00E6
loc_35b97:
	// 6863 
cs=0x274d;eip=0x0000e7; 	T(ax = 0x8000;);	// 70155                  mov     ax, 8000h ;~ 274D:00E7
cs=0x274d;eip=0x0000ea; 	X(MOV(*(dw*)(raddr(ds,bx+0x1FB8)), ax));	// 70156                  mov     [bx+1FB8h], ax ;~ 274D:00EA
cs=0x274d;eip=0x0000ee; 	X(MOV(*(dw*)(raddr(ds,bx+0x1FBA)), ax));	// 70157                  mov     [bx+1FBAh], ax ;~ 274D:00EE
cs=0x274d;eip=0x0000f2; 	X(MOV(*(dw*)(raddr(ds,bx+0x219C)), ax));	// 70158                  mov     [bx+219Ch], ax ;~ 274D:00F2
cs=0x274d;eip=0x0000f6; 	X(MOV(*(dw*)(raddr(ds,bx+0x219E)), ax));	// 70159                  mov     [bx+219Eh], ax ;~ 274D:00F6
cs=0x274d;eip=0x0000fa; 	J(RETN(0));	// 70160                  retn ;~ 274D:00FA

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_35b35: 	goto loc_35b35;
        case m2c::kloc_35b46: 	goto loc_35b46;
        case m2c::kloc_35b97: 	goto loc_35b97;
        case m2c::ksub_35b28: 	goto sub_35b28;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg35ab_fb_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg35ab_fb_proc:
    _begin:
cs=0x274d;eip=0x0000fb; 	X(PUSH(bp));	// 70164                  push    bp ;~ 274D:00FB
cs=0x274d;eip=0x0000fc; 	T(bp = sp;);	// 70165                  mov     bp, sp ;~ 274D:00FC
cs=0x274d;eip=0x0000fe; 	X(ADD(*(dw*)(raddr(ss,bp+2)), 3));	// 70166                  add     word ptr [bp+2], 3 ;~ 274D:00FE
cs=0x274d;eip=0x000102; 	T(al = ah;);	// 70167                  mov     al, ah ;~ 274D:0102
cs=0x274d;eip=0x000104; 	T(ah = dl;);	// 70168                  mov     ah, dl ;~ 274D:0104
cs=0x274d;eip=0x000106; 	T(dl = dh;);	// 70169                  mov     dl, dh ;~ 274D:0106
cs=0x274d;eip=0x000108; 	T(IDIV2(cx));	// 70170                  idiv    cx ;~ 274D:0108
cs=0x274d;eip=0x00010a; 	T(CWD);	// 70171                  cwd ;~ 274D:010A
cs=0x274d;eip=0x00010b; 	T(dl = ah;);	// 70172                  mov     dl, ah ;~ 274D:010B
cs=0x274d;eip=0x00010d; 	T(ah = al;);	// 70173                  mov     ah, al ;~ 274D:010D
cs=0x274d;eip=0x00010f; 	T(SUB(al, al));	// 70174                  sub     al, al ;~ 274D:010F
cs=0x274d;eip=0x000111; 	X(POP(bp));	// 70175                  pop     bp ;~ 274D:0111
cs=0x274d;eip=0x000112; 	J(IRET);	// 70176                  iret ;~ 274D:0112

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg35ab_fb_proc: 	goto seg35ab_fb_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35bc3(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35bc3:
    _begin:
cs=0x274d;eip=0x000113; 	X(PUSH(es));	// 70183                  push    es ;~ 274D:0113
cs=0x274d;eip=0x000114; 	T(SUB(ax, ax));	// 70184                  sub     ax, ax ;~ 274D:0114
cs=0x274d;eip=0x000116; 	T(es = ax;);	// 70185                  mov     es, ax ;~ 274D:0116
cs=0x274d;eip=0x000118; 	T(MOV(ax, *(dw*)(raddr(es,0))));	// 70187                  mov     ax, es:0 ;~ 274D:0118
cs=0x274d;eip=0x00011c; 	X(word_4a380 = ax;);	// 70188                  mov     word_4A380, ax ;~ 274D:011C
cs=0x274d;eip=0x00011f; 	T(ax = offset(seg48ae,byte_48bc2)+0x19);	// 70189                  lea     ax, byte_48BC2+19h ;~ 274D:011F
cs=0x274d;eip=0x000123; 	X(MOV(*(dw*)(raddr(es,0)), ax));	// 70190                  mov     es:0, ax ;~ 274D:0123
cs=0x274d;eip=0x000127; 	T(MOV(ax, *(dw*)(raddr(es,2))));	// 70191                  mov     ax, es:2 ;~ 274D:0127
cs=0x274d;eip=0x00012b; 	X(*(word_4a382) = ax;);	// 70192                  mov     word_4A382, ax ;~ 274D:012B
cs=0x274d;eip=0x00012e; 	T(ax = seg_offset(seg35ab););	// 70193                  mov     ax, seg seg35ab ;~ 274D:012E
cs=0x274d;eip=0x000131; 	X(MOV(*(dw*)(raddr(es,2)), ax));	// 70194                  mov     es:2, ax ;~ 274D:0131
cs=0x274d;eip=0x000135; 	X(POP(es));	// 70195                  pop     es ;~ 274D:0135
cs=0x274d;eip=0x000136; 	J(RETN(0));	// 70197                  retn ;~ 274D:0136

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_35bc3: 	goto sub_35bc3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35be7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35be7:
    _begin:
cs=0x274d;eip=0x000137; 	X(PUSH(es));	// 70206                  push    es ;~ 274D:0137
cs=0x274d;eip=0x000138; 	T(SUB(ax, ax));	// 70207                  sub     ax, ax ;~ 274D:0138
cs=0x274d;eip=0x00013a; 	T(es = ax;);	// 70208                  mov     es, ax ;~ 274D:013A
cs=0x274d;eip=0x00013c; 	T(ax = word_4a380;);	// 70210                  mov     ax, word_4A380 ;~ 274D:013C
cs=0x274d;eip=0x00013f; 	X(MOV(*(dw*)(raddr(es,0)), ax));	// 70211                  mov     es:0, ax ;~ 274D:013F
cs=0x274d;eip=0x000143; 	T(ax = *(word_4a382););	// 70212                  mov     ax, word_4A382 ;~ 274D:0143
cs=0x274d;eip=0x000146; 	X(MOV(*(dw*)(raddr(es,2)), ax));	// 70213                  mov     es:2, ax ;~ 274D:0146
cs=0x274d;eip=0x00014a; 	X(POP(es));	// 70214                  pop     es ;~ 274D:014A
cs=0x274d;eip=0x00014b; 	J(RETN(0));	// 70216                  retn ;~ 274D:014B

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_35be7: 	goto sub_35be7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg35ab_14c_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg35ab_14c_proc:
    _begin:
cs=0x274d;eip=0x00014c; 	X(PUSH(bp));	// 70220                  push    bp ;~ 274D:014C
cs=0x274d;eip=0x00014d; 	T(bp = sp;);	// 70221                  mov     bp, sp ;~ 274D:014D
cs=0x274d;eip=0x00014f; 	X(PUSH(si));	// 70222                  push    si ;~ 274D:014F
cs=0x274d;eip=0x000150; 	X(PUSH(di));	// 70223                  push    di ;~ 274D:0150
cs=0x274d;eip=0x000151; 	X(PUSH(es));	// 70224                  push    es ;~ 274D:0151
cs=0x274d;eip=0x000152; 	T(MOV(di, *(dw*)(raddr(ss,bp+6))));	// 70225                  mov     di, [bp+6] ;~ 274D:0152
cs=0x274d;eip=0x000155; 	J(CALL(sub_35c0d,0));	// 70226                  call    sub_35C0D ;~ 274D:0155
cs=0x274d;eip=0x000158; 	X(POP(es));	// 70227                  pop     es ;~ 274D:0158
cs=0x274d;eip=0x000159; 	X(POP(di));	// 70229                  pop     di ;~ 274D:0159
cs=0x274d;eip=0x00015a; 	X(POP(si));	// 70230                  pop     si ;~ 274D:015A
cs=0x274d;eip=0x00015b; 	X(POP(bp));	// 70231                  pop     bp ;~ 274D:015B
cs=0x274d;eip=0x00015c; 	J(RETN(0));	// 70232                  retn ;~ 274D:015C

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg35ab_14c_proc: 	goto seg35ab_14c_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35c0d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35c0d:
    _begin:
cs=0x274d;eip=0x00015d; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 70240                  mov     ax, [di] ;~ 274D:015D
cs=0x274d;eip=0x00015f; 	T(MOV(cx, *(dw*)(raddr(ds,di+2))));	// 70241                  mov     cx, [di+2] ;~ 274D:015F
cs=0x274d;eip=0x000162; 	T(CWD);	// 70242                  cwd ;~ 274D:0162
cs=0x274d;eip=0x000163; 	T(CMP(dx, cx));	// 70243                  cmp     dx, cx ;~ 274D:0163
cs=0x274d;eip=0x000165; 	J(JNZ(loc_35c57));	// 70244                  jnz     short loc_35C57 ;~ 274D:0165
cs=0x274d;eip=0x000167; 	T(si = ax;);	// 70245                  mov     si, ax ;~ 274D:0167
cs=0x274d;eip=0x000169; 	T(MOV(ax, *(dw*)(raddr(ds,di+4))));	// 70246                  mov     ax, [di+4] ;~ 274D:0169
cs=0x274d;eip=0x00016c; 	T(MOV(cx, *(dw*)(raddr(ds,di+6))));	// 70247                  mov     cx, [di+6] ;~ 274D:016C
cs=0x274d;eip=0x00016f; 	T(CWD);	// 70248                  cwd ;~ 274D:016F
cs=0x274d;eip=0x000170; 	T(CMP(dx, cx));	// 70249                  cmp     dx, cx ;~ 274D:0170
cs=0x274d;eip=0x000172; 	J(JNZ(loc_35c57));	// 70250                  jnz     short loc_35C57 ;~ 274D:0172
cs=0x274d;eip=0x000174; 	T(cx = ax;);	// 70251                  mov     cx, ax ;~ 274D:0174
cs=0x274d;eip=0x000176; 	T(MOV(ax, *(dw*)(raddr(ds,di+8))));	// 70252                  mov     ax, [di+8] ;~ 274D:0176
cs=0x274d;eip=0x000179; 	T(MOV(bx, *(dw*)(raddr(ds,di+0x0A))));	// 70253                  mov     bx, [di+0Ah] ;~ 274D:0179
cs=0x274d;eip=0x00017c; 	T(CWD);	// 70254                  cwd ;~ 274D:017C
cs=0x274d;eip=0x00017d; 	T(CMP(dx, bx));	// 70255                  cmp     dx, bx ;~ 274D:017D
cs=0x274d;eip=0x00017f; 	J(JNZ(loc_35c57));	// 70256                  jnz     short loc_35C57 ;~ 274D:017F
cs=0x274d;eip=0x000181; 	T(bp = ax;);	// 70257                  mov     bp, ax ;~ 274D:0181
cs=0x274d;eip=0x000183; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x0C))));	// 70258                  mov     ax, [di+0Ch] ;~ 274D:0183
cs=0x274d;eip=0x000186; 	T(MOV(bx, *(dw*)(raddr(ds,di+0x0E))));	// 70259                  mov     bx, [di+0Eh] ;~ 274D:0186
cs=0x274d;eip=0x000189; 	T(CWD);	// 70260                  cwd ;~ 274D:0189
cs=0x274d;eip=0x00018a; 	T(CMP(dx, bx));	// 70261                  cmp     dx, bx ;~ 274D:018A
cs=0x274d;eip=0x00018c; 	J(JNZ(loc_35c57));	// 70262                  jnz     short loc_35C57 ;~ 274D:018C
cs=0x274d;eip=0x00018e; 	T(dx = ax;);	// 70263                  mov     dx, ax ;~ 274D:018E
cs=0x274d;eip=0x000190; 	T(ax = word_4d787;);	// 70264                  mov     ax, word_4D787 ;~ 274D:0190
cs=0x274d;eip=0x000193; 	T(CMP(si, ax));	// 70265                  cmp     si, ax ;~ 274D:0193
cs=0x274d;eip=0x000195; 	J(JA(loc_35c57));	// 70266                  ja      short loc_35C57 ;~ 274D:0195
cs=0x274d;eip=0x000197; 	T(CMP(bp, ax));	// 70267                  cmp     bp, ax ;~ 274D:0197
cs=0x274d;eip=0x000199; 	J(JA(loc_35c57));	// 70268                  ja      short loc_35C57 ;~ 274D:0199
cs=0x274d;eip=0x00019b; 	T(ax = word_4d789;);	// 70269                  mov     ax, word_4D789 ;~ 274D:019B
cs=0x274d;eip=0x00019e; 	T(CMP(cx, ax));	// 70270                  cmp     cx, ax ;~ 274D:019E
cs=0x274d;eip=0x0001a0; 	J(JA(loc_35c57));	// 70271                  ja      short loc_35C57 ;~ 274D:01A0
cs=0x274d;eip=0x0001a2; 	T(CMP(dx, ax));	// 70272                  cmp     dx, ax ;~ 274D:01A2
cs=0x274d;eip=0x0001a4; 	J(JA(loc_35c57));	// 70273                  ja      short loc_35C57 ;~ 274D:01A4
cs=0x274d;eip=0x0001a6; 	J(RETN(0));	// 70274                  retn ;~ 274D:01A6
loc_35c57:
	// 6864 
cs=0x274d;eip=0x0001a7; 	T(SUB(al, al));	// 70279                  sub     al, al ;~ 274D:01A7
cs=0x274d;eip=0x0001a9; 	X(byte_4a3a0 = al;);	// 70280                  mov     byte_4A3A0, al ;~ 274D:01A9
cs=0x274d;eip=0x0001ac; 	T(MOV(bx, *(dw*)(raddr(ds,di))));	// 70281                  mov     bx, [di] ;~ 274D:01AC
cs=0x274d;eip=0x0001ae; 	X(word_4a386 = bx;);	// 70282                  mov     word_4A386, bx ;~ 274D:01AE
cs=0x274d;eip=0x0001b2; 	T(MOV(cx, *(dw*)(raddr(ds,di+2))));	// 70283                  mov     cx, [di+2] ;~ 274D:01B2
cs=0x274d;eip=0x0001b5; 	X(word_4a388 = cx;);	// 70284                  mov     word_4A388, cx ;~ 274D:01B5
cs=0x274d;eip=0x0001b9; 	T(MOV(si, *(dw*)(raddr(ds,di+4))));	// 70285                  mov     si, [di+4] ;~ 274D:01B9
cs=0x274d;eip=0x0001bc; 	X(word_4a38a = si;);	// 70286                  mov     word_4A38A, si ;~ 274D:01BC
cs=0x274d;eip=0x0001c0; 	T(MOV(dx, *(dw*)(raddr(ds,di+6))));	// 70287                  mov     dx, [di+6] ;~ 274D:01C0
cs=0x274d;eip=0x0001c3; 	X(word_4a38c = dx;);	// 70288                  mov     word_4A38C, dx ;~ 274D:01C3
cs=0x274d;eip=0x0001c7; 	J(CALL(sub_35e33,0));	// 70289                  call    sub_35E33 ;~ 274D:01C7
cs=0x274d;eip=0x0001ca; 	X(byte_4a39e = al;);	// 70290                  mov     byte_4A39E, al ;~ 274D:01CA
cs=0x274d;eip=0x0001cd; 	J(JZ(loc_35c88));	// 70291                  jz      short loc_35C88 ;~ 274D:01CD
cs=0x274d;eip=0x0001cf; 	J(CALL(sub_35e6a,0));	// 70292                  call    sub_35E6A ;~ 274D:01CF
cs=0x274d;eip=0x0001d2; 	X(MOV(*(dw*)(raddr(ds,di+2)), ax));	// 70293                  mov     [di+2], ax ;~ 274D:01D2
cs=0x274d;eip=0x0001d5; 	X(MOV(*(dw*)(raddr(ds,di+6)), bp));	// 70294                  mov     [di+6], bp ;~ 274D:01D5
loc_35c88:
	// 6865 
cs=0x274d;eip=0x0001d8; 	T(MOV(bx, *(dw*)(raddr(ds,di+8))));	// 70297                  mov     bx, [di+8] ;~ 274D:01D8
cs=0x274d;eip=0x0001db; 	X(word_4a38e = bx;);	// 70298                  mov     word_4A38E, bx ;~ 274D:01DB
cs=0x274d;eip=0x0001df; 	T(MOV(cx, *(dw*)(raddr(ds,di+0x0A))));	// 70299                  mov     cx, [di+0Ah] ;~ 274D:01DF
cs=0x274d;eip=0x0001e2; 	X(word_4a390 = cx;);	// 70300                  mov     word_4A390, cx ;~ 274D:01E2
cs=0x274d;eip=0x0001e6; 	T(MOV(si, *(dw*)(raddr(ds,di+0x0C))));	// 70301                  mov     si, [di+0Ch] ;~ 274D:01E6
cs=0x274d;eip=0x0001e9; 	X(word_4a392 = si;);	// 70302                  mov     word_4A392, si ;~ 274D:01E9
cs=0x274d;eip=0x0001ed; 	T(MOV(dx, *(dw*)(raddr(ds,di+0x0E))));	// 70303                  mov     dx, [di+0Eh] ;~ 274D:01ED
cs=0x274d;eip=0x0001f0; 	X(word_4a394 = dx;);	// 70304                  mov     word_4A394, dx ;~ 274D:01F0
cs=0x274d;eip=0x0001f4; 	J(CALL(sub_35e33,0));	// 70305                  call    sub_35E33 ;~ 274D:01F4
cs=0x274d;eip=0x0001f7; 	X(byte_4a39f = al;);	// 70306                  mov     byte_4A39F, al ;~ 274D:01F7
cs=0x274d;eip=0x0001fa; 	J(JZ(loc_35cb5));	// 70307                  jz      short loc_35CB5 ;~ 274D:01FA
cs=0x274d;eip=0x0001fc; 	J(CALL(sub_35e6a,0));	// 70308                  call    sub_35E6A ;~ 274D:01FC
cs=0x274d;eip=0x0001ff; 	X(MOV(*(dw*)(raddr(ds,di+0x0A)), ax));	// 70309                  mov     [di+0Ah], ax ;~ 274D:01FF
cs=0x274d;eip=0x000202; 	X(MOV(*(dw*)(raddr(ds,di+0x0E)), bp));	// 70310                  mov     [di+0Eh], bp ;~ 274D:0202
loc_35cb5:
	// 6866 
cs=0x274d;eip=0x000205; 	T(ah = byte_4a39e;);	// 70313                  mov     ah, byte_4A39E ;~ 274D:0205
cs=0x274d;eip=0x000209; 	T(al = byte_4a39f;);	// 70314                  mov     al, byte_4A39F ;~ 274D:0209
cs=0x274d;eip=0x00020c; 	T(OR(ah, al));	// 70315                  or      ah, al ;~ 274D:020C
cs=0x274d;eip=0x00020e; 	T(TEST(byte_4a39e, al));	// 70316                  test    byte_4A39E, al ;~ 274D:020E
cs=0x274d;eip=0x000212; 	J(JNZ(loc_35ceb));	// 70317                  jnz     short loc_35CEB ;~ 274D:0212
cs=0x274d;eip=0x000214; 	T(OR(al, al));	// 70318                  or      al, al ;~ 274D:0214
cs=0x274d;eip=0x000216; 	J(JZ(loc_35cd3));	// 70319                  jz      short loc_35CD3 ;~ 274D:0216
cs=0x274d;eip=0x000218; 	T(al = byte_4a39e;);	// 70320                  mov     al, byte_4A39E ;~ 274D:0218
cs=0x274d;eip=0x00021b; 	T(OR(al, al));	// 70321                  or      al, al ;~ 274D:021B
cs=0x274d;eip=0x00021d; 	J(JZ(loc_35cd7));	// 70322                  jz      short loc_35CD7 ;~ 274D:021D
cs=0x274d;eip=0x00021f; 	J(CALL(sub_35cef,0));	// 70323                  call    sub_35CEF ;~ 274D:021F
cs=0x274d;eip=0x000222; 	J(RETN(0));	// 70324                  retn ;~ 274D:0222
loc_35cd3:
	// 6867 
cs=0x274d;eip=0x000223; 	J(CALL(sub_35d4d,0));	// 70328                  call    sub_35D4D ;~ 274D:0223
cs=0x274d;eip=0x000226; 	J(RETN(0));	// 70329                  retn ;~ 274D:0226
loc_35cd7:
	// 6868 
cs=0x274d;eip=0x000227; 	T(bx = word_4a386;);	// 70333                  mov     bx, word_4A386 ;~ 274D:0227
cs=0x274d;eip=0x00022b; 	T(cx = word_4a388;);	// 70334                  mov     cx, word_4A388 ;~ 274D:022B
cs=0x274d;eip=0x00022f; 	T(si = word_4a38a;);	// 70335                  mov     si, word_4A38A ;~ 274D:022F
cs=0x274d;eip=0x000233; 	T(dx = word_4a38c;);	// 70336                  mov     dx, word_4A38C ;~ 274D:0233
cs=0x274d;eip=0x000237; 	J(CALL(sub_35d82,0));	// 70337                  call    sub_35D82 ;~ 274D:0237
cs=0x274d;eip=0x00023a; 	J(RETN(0));	// 70338                  retn ;~ 274D:023A
loc_35ceb:
	// 6869 
cs=0x274d;eip=0x00023b; 	J(CALL(sub_35db8,0));	// 70342                  call    sub_35DB8 ;~ 274D:023B
cs=0x274d;eip=0x00023e; 	J(RETN(0));	// 70343                  retn ;~ 274D:023E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_35c57: 	goto loc_35c57;
        case m2c::kloc_35c88: 	goto loc_35c88;
        case m2c::kloc_35cb5: 	goto loc_35cb5;
        case m2c::kloc_35cd3: 	goto loc_35cd3;
        case m2c::kloc_35cd7: 	goto loc_35cd7;
        case m2c::kloc_35ceb: 	goto loc_35ceb;
        case m2c::ksub_35c0d: 	goto sub_35c0d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35cef(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35cef:
    _begin:
cs=0x274d;eip=0x00023f; 	T(ax = word_4a386;);	// 70351                  mov     ax, word_4A386 ;~ 274D:023F
cs=0x274d;eip=0x000242; 	X(word_4a396 = ax;);	// 70352                  mov     word_4A396, ax ;~ 274D:0242
cs=0x274d;eip=0x000245; 	T(ax = word_4a388;);	// 70353                  mov     ax, word_4A388 ;~ 274D:0245
cs=0x274d;eip=0x000248; 	X(word_4a398 = ax;);	// 70354                  mov     word_4A398, ax ;~ 274D:0248
cs=0x274d;eip=0x00024b; 	T(ax = word_4a38a;);	// 70355                  mov     ax, word_4A38A ;~ 274D:024B
cs=0x274d;eip=0x00024e; 	X(word_4a39a = ax;);	// 70356                  mov     word_4A39A, ax ;~ 274D:024E
cs=0x274d;eip=0x000251; 	T(ax = word_4a38c;);	// 70357                  mov     ax, word_4A38C ;~ 274D:0251
cs=0x274d;eip=0x000254; 	X(word_4a39c = ax;);	// 70358                  mov     word_4A39C, ax ;~ 274D:0254
cs=0x274d;eip=0x000257; 	T(bx = word_4a38e;);	// 70359                  mov     bx, word_4A38E ;~ 274D:0257
cs=0x274d;eip=0x00025b; 	T(cx = word_4a390;);	// 70360                  mov     cx, word_4A390 ;~ 274D:025B
cs=0x274d;eip=0x00025f; 	T(si = word_4a392;);	// 70361                  mov     si, word_4A392 ;~ 274D:025F
cs=0x274d;eip=0x000263; 	T(dx = word_4a394;);	// 70362                  mov     dx, word_4A394 ;~ 274D:0263
cs=0x274d;eip=0x000267; 	J(CALL(sub_35f34,0));	// 70363                  call    sub_35F34 ;~ 274D:0267
cs=0x274d;eip=0x00026a; 	J(JZ(loc_35d26));	// 70364                  jz      short loc_35D26 ;~ 274D:026A
cs=0x274d;eip=0x00026c; 	T(MOV(dx, *(dw*)(raddr(ds,di+0x0E))));	// 70365                  mov     dx, [di+0Eh] ;~ 274D:026C
cs=0x274d;eip=0x00026f; 	X(MOV(*(dw*)(raddr(ds,di+4)), dx));	// 70366                  mov     [di+4], dx ;~ 274D:026F
cs=0x274d;eip=0x000272; 	J(CALL(sub_35db8,0));	// 70367                  call    sub_35DB8 ;~ 274D:0272
cs=0x274d;eip=0x000275; 	J(RETN(0));	// 70368                  retn ;~ 274D:0275
loc_35d26:
	// 6870 
cs=0x274d;eip=0x000276; 	X(word_4a3a9 = bx;);	// 70372                  mov     word_4A3A9, bx ;~ 274D:0276
cs=0x274d;eip=0x00027a; 	X(word_4a3ab = cx;);	// 70373                  mov     word_4A3AB, cx ;~ 274D:027A
cs=0x274d;eip=0x00027e; 	X(word_4a3ad = si;);	// 70374                  mov     word_4A3AD, si ;~ 274D:027E
cs=0x274d;eip=0x000282; 	X(word_4a3af = dx;);	// 70375                  mov     word_4A3AF, dx ;~ 274D:0282
cs=0x274d;eip=0x000286; 	J(CALL(sub_35d4d,0));	// 70376                  call    sub_35D4D ;~ 274D:0286
cs=0x274d;eip=0x000289; 	T(bx = word_4a3a9;);	// 70377                  mov     bx, word_4A3A9 ;~ 274D:0289
cs=0x274d;eip=0x00028d; 	T(cx = word_4a3ab;);	// 70378                  mov     cx, word_4A3AB ;~ 274D:028D
cs=0x274d;eip=0x000291; 	T(si = word_4a3ad;);	// 70379                  mov     si, word_4A3AD ;~ 274D:0291
cs=0x274d;eip=0x000295; 	T(dx = word_4a3af;);	// 70380                  mov     dx, word_4A3AF ;~ 274D:0295
cs=0x274d;eip=0x000299; 	J(CALL(sub_35d82,0));	// 70381                  call    sub_35D82 ;~ 274D:0299
cs=0x274d;eip=0x00029c; 	J(RETN(0));	// 70382                  retn ;~ 274D:029C

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_35d26: 	goto loc_35d26;
        case m2c::ksub_35cef: 	goto sub_35cef;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35d4d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35d4d:
    _begin:
cs=0x274d;eip=0x00029d; 	X(word_4a396 = bx;);	// 70391                  mov     word_4A396, bx ;~ 274D:029D
cs=0x274d;eip=0x0002a1; 	X(word_4a398 = cx;);	// 70392                  mov     word_4A398, cx ;~ 274D:02A1
cs=0x274d;eip=0x0002a5; 	X(word_4a39a = si;);	// 70393                  mov     word_4A39A, si ;~ 274D:02A5
cs=0x274d;eip=0x0002a9; 	X(word_4a39c = dx;);	// 70394                  mov     word_4A39C, dx ;~ 274D:02A9
cs=0x274d;eip=0x0002ad; 	T(bx = word_4a386;);	// 70395                  mov     bx, word_4A386 ;~ 274D:02AD
cs=0x274d;eip=0x0002b1; 	T(cx = word_4a388;);	// 70396                  mov     cx, word_4A388 ;~ 274D:02B1
cs=0x274d;eip=0x0002b5; 	T(si = word_4a38a;);	// 70397                  mov     si, word_4A38A ;~ 274D:02B5
cs=0x274d;eip=0x0002b9; 	T(dx = word_4a38c;);	// 70398                  mov     dx, word_4A38C ;~ 274D:02B9
cs=0x274d;eip=0x0002bd; 	J(CALL(sub_35ebe,0));	// 70399                  call    sub_35EBE ;~ 274D:02BD
cs=0x274d;eip=0x0002c0; 	X(MOV(*(dw*)(raddr(ds,di)), bx));	// 70400                  mov     [di], bx ;~ 274D:02C0
cs=0x274d;eip=0x0002c2; 	X(MOV(*(dw*)(raddr(ds,di+4)), si));	// 70401                  mov     [di+4], si ;~ 274D:02C2
cs=0x274d;eip=0x0002c5; 	T(MOV(ax, *(dw*)(raddr(ds,di+4))));	// 70402                  mov     ax, [di+4] ;~ 274D:02C5
cs=0x274d;eip=0x0002c8; 	T(CMP(ax, *(dw*)(raddr(ds,di+6))));	// 70403                  cmp     ax, [di+6] ;~ 274D:02C8
cs=0x274d;eip=0x0002cb; 	J(JZ(locret_35d81));	// 70404                  jz      short locret_35D81 ;~ 274D:02CB
cs=0x274d;eip=0x0002cd; 	X(OR(*(raddr(ds,di+0x18)), 0x20));	// 70405                  or      byte ptr [di+18h], 20h ;~ 274D:02CD
locret_35d81:
	// 6871 
cs=0x274d;eip=0x0002d1; 	J(RETN(0));	// 70408                  retn ;~ 274D:02D1

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::klocret_35d81: 	goto locret_35d81;
        case m2c::ksub_35d4d: 	goto sub_35d4d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35d82(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35d82:
    _begin:
cs=0x274d;eip=0x0002d2; 	X(word_4a396 = bx;);	// 70417                  mov     word_4A396, bx ;~ 274D:02D2
cs=0x274d;eip=0x0002d6; 	X(word_4a398 = cx;);	// 70418                  mov     word_4A398, cx ;~ 274D:02D6
cs=0x274d;eip=0x0002da; 	X(word_4a39a = si;);	// 70419                  mov     word_4A39A, si ;~ 274D:02DA
cs=0x274d;eip=0x0002de; 	X(word_4a39c = dx;);	// 70420                  mov     word_4A39C, dx ;~ 274D:02DE
cs=0x274d;eip=0x0002e2; 	T(bx = word_4a38e;);	// 70421                  mov     bx, word_4A38E ;~ 274D:02E2
cs=0x274d;eip=0x0002e6; 	T(cx = word_4a390;);	// 70422                  mov     cx, word_4A390 ;~ 274D:02E6
cs=0x274d;eip=0x0002ea; 	T(si = word_4a392;);	// 70423                  mov     si, word_4A392 ;~ 274D:02EA
cs=0x274d;eip=0x0002ee; 	T(dx = word_4a394;);	// 70424                  mov     dx, word_4A394 ;~ 274D:02EE
cs=0x274d;eip=0x0002f2; 	J(CALL(sub_35ebe,0));	// 70425                  call    sub_35EBE ;~ 274D:02F2
cs=0x274d;eip=0x0002f5; 	X(MOV(*(dw*)(raddr(ds,di+8)), bx));	// 70426                  mov     [di+8], bx ;~ 274D:02F5
cs=0x274d;eip=0x0002f8; 	X(MOV(*(dw*)(raddr(ds,di+0x0C)), si));	// 70427                  mov     [di+0Ch], si ;~ 274D:02F8
cs=0x274d;eip=0x0002fb; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x0C))));	// 70428                  mov     ax, [di+0Ch] ;~ 274D:02FB
cs=0x274d;eip=0x0002fe; 	T(CMP(ax, *(dw*)(raddr(ds,di+0x0E))));	// 70429                  cmp     ax, [di+0Eh] ;~ 274D:02FE
cs=0x274d;eip=0x000301; 	J(JZ(locret_35db7));	// 70430                  jz      short locret_35DB7 ;~ 274D:0301
cs=0x274d;eip=0x000303; 	X(OR(*(raddr(ds,di+0x18)), 0x10));	// 70431                  or      byte ptr [di+18h], 10h ;~ 274D:0303
locret_35db7:
	// 6872 
cs=0x274d;eip=0x000307; 	J(RETN(0));	// 70434                  retn ;~ 274D:0307

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::klocret_35db7: 	goto locret_35db7;
        case m2c::ksub_35d82: 	goto sub_35d82;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35db8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35db8:
    _begin:
cs=0x274d;eip=0x000308; 	T(MOV(cl, *(raddr(ds,di+0x18))));	// 70443                  mov     cl, [di+18h] ;~ 274D:0308
cs=0x274d;eip=0x00030b; 	T(OR(cl, 0x80));	// 70444                  or      cl, 80h ;~ 274D:030B
cs=0x274d;eip=0x00030e; 	T(MOV(dx, *(dw*)(raddr(ds,di+0x0E))));	// 70445                  mov     dx, [di+0Eh] ;~ 274D:030E
cs=0x274d;eip=0x000311; 	X(MOV(*(dw*)(raddr(ds,di+4)), dx));	// 70446                  mov     [di+4], dx ;~ 274D:0311
cs=0x274d;eip=0x000314; 	T(TEST(al, 9));	// 70447                  test    al, 9 ;~ 274D:0314
cs=0x274d;eip=0x000316; 	J(JZ(loc_35de0));	// 70448                  jz      short loc_35DE0 ;~ 274D:0316
cs=0x274d;eip=0x000318; 	T(dx = 0;);	// 70449                  mov     dx, 0 ;~ 274D:0318
cs=0x274d;eip=0x00031b; 	T(TEST(al, 8));	// 70450                  test    al, 8 ;~ 274D:031B
cs=0x274d;eip=0x00031d; 	J(JNZ(loc_35dd3));	// 70451                  jnz     short loc_35DD3 ;~ 274D:031D
cs=0x274d;eip=0x00031f; 	T(dx = word_4d787;);	// 70452                  mov     dx, word_4D787 ;~ 274D:031F
loc_35dd3:
	// 6873 
cs=0x274d;eip=0x000323; 	X(MOV(*(dw*)(raddr(ds,di)), dx));	// 70455                  mov     [di], dx ;~ 274D:0323
cs=0x274d;eip=0x000325; 	T(MOV(ax, *(dw*)(raddr(ds,di+4))));	// 70456                  mov     ax, [di+4] ;~ 274D:0325
cs=0x274d;eip=0x000328; 	T(CMP(ax, *(dw*)(raddr(ds,di+6))));	// 70457                  cmp     ax, [di+6] ;~ 274D:0328
cs=0x274d;eip=0x00032b; 	J(JZ(loc_35de0));	// 70458                  jz      short loc_35DE0 ;~ 274D:032B
cs=0x274d;eip=0x00032d; 	T(OR(cl, 0x20));	// 70459                  or      cl, 20h ;~ 274D:032D
loc_35de0:
	// 6874 
cs=0x274d;eip=0x000330; 	X(MOV(*(raddr(ds,di+0x18)), cl));	// 70463                  mov     [di+18h], cl ;~ 274D:0330
cs=0x274d;eip=0x000333; 	J(RETN(0));	// 70464                  retn ;~ 274D:0333

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_35dd3: 	goto loc_35dd3;
        case m2c::kloc_35de0: 	goto loc_35de0;
        case m2c::ksub_35db8: 	goto sub_35db8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35de4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35de4:
    _begin:
cs=0x274d;eip=0x000334; 	T(OR(cx, cx));	// 70472                  or      cx, cx ;~ 274D:0334
cs=0x274d;eip=0x000336; 	J(JNZ(loc_35df3));	// 70473                  jnz     short loc_35DF3 ;~ 274D:0336
cs=0x274d;eip=0x000338; 	T(CMP(bx, 0));	// 70474                  cmp     bx, 0 ;~ 274D:0338
cs=0x274d;eip=0x00033b; 	J(JZ(loc_35e05));	// 70475                  jz      short loc_35E05 ;~ 274D:033B
cs=0x274d;eip=0x00033d; 	T(CMP(bx, word_4d787));	// 70476                  cmp     bx, word_4D787 ;~ 274D:033D
cs=0x274d;eip=0x000341; 	J(JZ(loc_35e05));	// 70477                  jz      short loc_35E05 ;~ 274D:0341
loc_35df3:
	// 6875 
cs=0x274d;eip=0x000343; 	T(OR(dx, dx));	// 70480                  or      dx, dx ;~ 274D:0343
cs=0x274d;eip=0x000345; 	J(JNZ(loc_35e02));	// 70481                  jnz     short loc_35E02 ;~ 274D:0345
cs=0x274d;eip=0x000347; 	T(CMP(si, 0));	// 70482                  cmp     si, 0 ;~ 274D:0347
cs=0x274d;eip=0x00034a; 	J(JZ(loc_35e1c));	// 70483                  jz      short loc_35E1C ;~ 274D:034A
cs=0x274d;eip=0x00034c; 	T(CMP(si, word_4d789));	// 70484                  cmp     si, word_4D789 ;~ 274D:034C
cs=0x274d;eip=0x000350; 	J(JZ(loc_35e1c));	// 70485                  jz      short loc_35E1C ;~ 274D:0350
loc_35e02:
	// 6876 
cs=0x274d;eip=0x000352; 	T(SUB(ax, ax));	// 70488                  sub     ax, ax ;~ 274D:0352
cs=0x274d;eip=0x000354; 	J(RETN(0));	// 70489                  retn ;~ 274D:0354
loc_35e05:
	// 6877 
cs=0x274d;eip=0x000355; 	T(SUB(ax, ax));	// 70494                  sub     ax, ax ;~ 274D:0355
cs=0x274d;eip=0x000357; 	T(OR(dx, dx));	// 70495                  or      dx, dx ;~ 274D:0357
cs=0x274d;eip=0x000359; 	J(JS(loc_35e19));	// 70496                  js      short loc_35E19 ;~ 274D:0359
cs=0x274d;eip=0x00035b; 	J(JNZ(loc_35e19));	// 70497                  jnz     short loc_35E19 ;~ 274D:035B
cs=0x274d;eip=0x00035d; 	T(CMP(si, 0));	// 70498                  cmp     si, 0 ;~ 274D:035D
cs=0x274d;eip=0x000360; 	J(JC(loc_35e19));	// 70499                  jb      short loc_35E19 ;~ 274D:0360
cs=0x274d;eip=0x000362; 	T(CMP(si, word_4d789));	// 70500                  cmp     si, word_4D789 ;~ 274D:0362
cs=0x274d;eip=0x000366; 	J(JA(loc_35e19));	// 70501                  ja      short loc_35E19 ;~ 274D:0366
cs=0x274d;eip=0x000368; 	T(INC(ax));	// 70502                  inc     ax ;~ 274D:0368
loc_35e19:
	// 6878 
cs=0x274d;eip=0x000369; 	T(OR(ax, ax));	// 70506                  or      ax, ax ;~ 274D:0369
cs=0x274d;eip=0x00036b; 	J(RETN(0));	// 70507                  retn ;~ 274D:036B
loc_35e1c:
	// 6879 
cs=0x274d;eip=0x00036c; 	T(SUB(ax, ax));	// 70512                  sub     ax, ax ;~ 274D:036C
cs=0x274d;eip=0x00036e; 	T(OR(cx, cx));	// 70513                  or      cx, cx ;~ 274D:036E
cs=0x274d;eip=0x000370; 	J(JS(loc_35e30));	// 70514                  js      short loc_35E30 ;~ 274D:0370
cs=0x274d;eip=0x000372; 	J(JNZ(loc_35e30));	// 70515                  jnz     short loc_35E30 ;~ 274D:0372
cs=0x274d;eip=0x000374; 	T(CMP(bx, 0));	// 70516                  cmp     bx, 0 ;~ 274D:0374
cs=0x274d;eip=0x000377; 	J(JC(loc_35e30));	// 70517                  jb      short loc_35E30 ;~ 274D:0377
cs=0x274d;eip=0x000379; 	T(CMP(bx, word_4d787));	// 70518                  cmp     bx, word_4D787 ;~ 274D:0379
cs=0x274d;eip=0x00037d; 	J(JA(loc_35e30));	// 70519                  ja      short loc_35E30 ;~ 274D:037D
cs=0x274d;eip=0x00037f; 	T(INC(ax));	// 70520                  inc     ax ;~ 274D:037F
loc_35e30:
	// 6880 
cs=0x274d;eip=0x000380; 	T(OR(ax, ax));	// 70524                  or      ax, ax ;~ 274D:0380
cs=0x274d;eip=0x000382; 	J(RETN(0));	// 70525                  retn ;~ 274D:0382

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_35df3: 	goto loc_35df3;
        case m2c::kloc_35e02: 	goto loc_35e02;
        case m2c::kloc_35e05: 	goto loc_35e05;
        case m2c::kloc_35e19: 	goto loc_35e19;
        case m2c::kloc_35e1c: 	goto loc_35e1c;
        case m2c::kloc_35e30: 	goto loc_35e30;
        case m2c::ksub_35de4: 	goto sub_35de4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35e33(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35e33:
    _begin:
cs=0x274d;eip=0x000383; 	T(al = 0x0C;);	// 70534                  mov     al, 0Ch ;~ 274D:0383
cs=0x274d;eip=0x000385; 	T(OR(cx, cx));	// 70535                  or      cx, cx ;~ 274D:0385
cs=0x274d;eip=0x000387; 	J(JS(loc_35e4e));	// 70536                  js      short loc_35E4E ;~ 274D:0387
cs=0x274d;eip=0x000389; 	J(JNZ(loc_35e40));	// 70537                  jnz     short loc_35E40 ;~ 274D:0389
cs=0x274d;eip=0x00038b; 	T(CMP(bx, 0));	// 70538                  cmp     bx, 0 ;~ 274D:038B
cs=0x274d;eip=0x00038e; 	J(JC(loc_35e4e));	// 70539                  jb      short loc_35E4E ;~ 274D:038E
loc_35e40:
	// 6881 
cs=0x274d;eip=0x000390; 	T(XOR(al, 9));	// 70542                  xor     al, 9 ;~ 274D:0390
cs=0x274d;eip=0x000392; 	T(OR(cx, cx));	// 70543                  or      cx, cx ;~ 274D:0392
cs=0x274d;eip=0x000394; 	J(JNZ(loc_35e4e));	// 70544                  jnz     short loc_35E4E ;~ 274D:0394
cs=0x274d;eip=0x000396; 	T(CMP(bx, word_4d787));	// 70545                  cmp     bx, word_4D787 ;~ 274D:0396
cs=0x274d;eip=0x00039a; 	J(JA(loc_35e4e));	// 70546                  ja      short loc_35E4E ;~ 274D:039A
cs=0x274d;eip=0x00039c; 	T(XOR(al, 1));	// 70547                  xor     al, 1 ;~ 274D:039C
loc_35e4e:
	// 6882 
cs=0x274d;eip=0x00039e; 	T(OR(dx, dx));	// 70551                  or      dx, dx ;~ 274D:039E
cs=0x274d;eip=0x0003a0; 	J(JS(loc_35e67));	// 70552                  js      short loc_35E67 ;~ 274D:03A0
cs=0x274d;eip=0x0003a2; 	J(JNZ(loc_35e59));	// 70553                  jnz     short loc_35E59 ;~ 274D:03A2
cs=0x274d;eip=0x0003a4; 	T(CMP(si, 0));	// 70554                  cmp     si, 0 ;~ 274D:03A4
cs=0x274d;eip=0x0003a7; 	J(JC(loc_35e67));	// 70555                  jb      short loc_35E67 ;~ 274D:03A7
loc_35e59:
	// 6883 
cs=0x274d;eip=0x0003a9; 	T(XOR(al, 6));	// 70558                  xor     al, 6 ;~ 274D:03A9
cs=0x274d;eip=0x0003ab; 	T(OR(dx, dx));	// 70559                  or      dx, dx ;~ 274D:03AB
cs=0x274d;eip=0x0003ad; 	J(JNZ(loc_35e67));	// 70560                  jnz     short loc_35E67 ;~ 274D:03AD
cs=0x274d;eip=0x0003af; 	T(CMP(si, word_4d789));	// 70561                  cmp     si, word_4D789 ;~ 274D:03AF
cs=0x274d;eip=0x0003b3; 	J(JA(loc_35e67));	// 70562                  ja      short loc_35E67 ;~ 274D:03B3
cs=0x274d;eip=0x0003b5; 	T(XOR(al, 2));	// 70563                  xor     al, 2 ;~ 274D:03B5
loc_35e67:
	// 6884 
cs=0x274d;eip=0x0003b7; 	T(OR(al, al));	// 70567                  or      al, al ;~ 274D:03B7
cs=0x274d;eip=0x0003b9; 	J(RETN(0));	// 70568                  retn ;~ 274D:03B9

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_35e40: 	goto loc_35e40;
        case m2c::kloc_35e4e: 	goto loc_35e4e;
        case m2c::kloc_35e59: 	goto loc_35e59;
        case m2c::kloc_35e67: 	goto loc_35e67;
        case m2c::ksub_35e33: 	goto sub_35e33;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35e6a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35e6a:
    _begin:
cs=0x274d;eip=0x0003ba; 	T(ah = 1;);	// 70577                  mov     ah, 1 ;~ 274D:03BA
cs=0x274d;eip=0x0003bc; 	T(bp = cx;);	// 70578                  mov     bp, cx ;~ 274D:03BC
cs=0x274d;eip=0x0003be; 	T(INC(bp));	// 70579                  inc     bp ;~ 274D:03BE
cs=0x274d;eip=0x0003bf; 	T(CMP(bp, 1));	// 70580                  cmp     bp, 1 ;~ 274D:03BF
cs=0x274d;eip=0x0003c2; 	J(JA(loc_35e96));	// 70581                  ja      short loc_35E96 ;~ 274D:03C2
cs=0x274d;eip=0x0003c4; 	T(bp = cx;);	// 70582                  mov     bp, cx ;~ 274D:03C4
cs=0x274d;eip=0x0003c6; 	T(SAR(bp, 1));	// 70583                  sar     bp, 1 ;~ 274D:03C6
cs=0x274d;eip=0x0003c8; 	T(XOR(bp, bx));	// 70584                  xor     bp, bx ;~ 274D:03C8
cs=0x274d;eip=0x0003ca; 	T(AND(bp, 0x0C000));	// 70585                  and     bp, 0C000h ;~ 274D:03CA
cs=0x274d;eip=0x0003ce; 	J(JNZ(loc_35e96));	// 70586                  jnz     short loc_35E96 ;~ 274D:03CE
cs=0x274d;eip=0x0003d0; 	T(bp = dx;);	// 70587                  mov     bp, dx ;~ 274D:03D0
cs=0x274d;eip=0x0003d2; 	T(INC(bp));	// 70588                  inc     bp ;~ 274D:03D2
cs=0x274d;eip=0x0003d3; 	T(CMP(bp, 1));	// 70589                  cmp     bp, 1 ;~ 274D:03D3
cs=0x274d;eip=0x0003d6; 	J(JA(loc_35e96));	// 70590                  ja      short loc_35E96 ;~ 274D:03D6
cs=0x274d;eip=0x0003d8; 	T(bp = dx;);	// 70591                  mov     bp, dx ;~ 274D:03D8
cs=0x274d;eip=0x0003da; 	T(SAR(bp, 1));	// 70592                  sar     bp, 1 ;~ 274D:03DA
cs=0x274d;eip=0x0003dc; 	T(XOR(bp, si));	// 70593                  xor     bp, si ;~ 274D:03DC
cs=0x274d;eip=0x0003de; 	T(AND(bp, 0x0C000));	// 70594                  and     bp, 0C000h ;~ 274D:03DE
cs=0x274d;eip=0x0003e2; 	J(JNZ(loc_35e96));	// 70595                  jnz     short loc_35E96 ;~ 274D:03E2
cs=0x274d;eip=0x0003e4; 	T(SUB(ah, ah));	// 70596                  sub     ah, ah ;~ 274D:03E4
loc_35e96:
	// 6885 
cs=0x274d;eip=0x0003e6; 	X(OR(byte_4a3a0, ah));	// 70600                  or      byte_4A3A0, ah ;~ 274D:03E6
cs=0x274d;eip=0x0003ea; 	T(bp = si;);	// 70601                  mov     bp, si ;~ 274D:03EA
cs=0x274d;eip=0x0003ec; 	T(TEST(al, 4));	// 70602                  test    al, 4 ;~ 274D:03EC
cs=0x274d;eip=0x0003ee; 	J(JZ(loc_35ea3));	// 70603                  jz      short loc_35EA3 ;~ 274D:03EE
cs=0x274d;eip=0x0003f0; 	T(bp = 0;);	// 70604                  mov     bp, 0 ;~ 274D:03F0
loc_35ea3:
	// 6886 
cs=0x274d;eip=0x0003f3; 	T(TEST(al, 2));	// 70607                  test    al, 2 ;~ 274D:03F3
cs=0x274d;eip=0x0003f5; 	J(JZ(loc_35eab));	// 70608                  jz      short loc_35EAB ;~ 274D:03F5
cs=0x274d;eip=0x0003f7; 	T(bp = word_4d789;);	// 70609                  mov     bp, word_4D789 ;~ 274D:03F7
loc_35eab:
	// 6887 
cs=0x274d;eip=0x0003fb; 	T(TEST(al, 8));	// 70612                  test    al, 8 ;~ 274D:03FB
cs=0x274d;eip=0x0003fd; 	J(JZ(loc_35eb3));	// 70613                  jz      short loc_35EB3 ;~ 274D:03FD
cs=0x274d;eip=0x0003ff; 	T(ax = 0;);	// 70614                  mov     ax, 0 ;~ 274D:03FF
cs=0x274d;eip=0x000402; 	J(RETN(0));	// 70615                  retn ;~ 274D:0402
loc_35eb3:
	// 6888 
cs=0x274d;eip=0x000403; 	T(TEST(al, 1));	// 70619                  test    al, 1 ;~ 274D:0403
cs=0x274d;eip=0x000405; 	J(JZ(loc_35ebb));	// 70620                  jz      short loc_35EBB ;~ 274D:0405
cs=0x274d;eip=0x000407; 	T(ax = word_4d787;);	// 70621                  mov     ax, word_4D787 ;~ 274D:0407
cs=0x274d;eip=0x00040a; 	J(RETN(0));	// 70622                  retn ;~ 274D:040A
loc_35ebb:
	// 6889 
cs=0x274d;eip=0x00040b; 	T(ax = bx;);	// 70626                  mov     ax, bx ;~ 274D:040B
cs=0x274d;eip=0x00040d; 	J(RETN(0));	// 70627                  retn ;~ 274D:040D

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_35e96: 	goto loc_35e96;
        case m2c::kloc_35ea3: 	goto loc_35ea3;
        case m2c::kloc_35eab: 	goto loc_35eab;
        case m2c::kloc_35eb3: 	goto loc_35eb3;
        case m2c::kloc_35ebb: 	goto loc_35ebb;
        case m2c::ksub_35e6a: 	goto sub_35e6a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35ebe(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35ebe:
    _begin:
cs=0x274d;eip=0x00040e; 	T(al = byte_4a3a0;);	// 70639                  mov     al, byte_4A3A0 ;~ 274D:040E
cs=0x274d;eip=0x000411; 	T(OR(al, al));	// 70640                  or      al, al ;~ 274D:0411
cs=0x274d;eip=0x000413; 	J(JNZ(loc_35ec8));	// 70641                  jnz     short loc_35EC8 ;~ 274D:0413
cs=0x274d;eip=0x000415; 	J(return seg35ab_550_proc(m2c::kloc_3603a, _state););	// 70642                  jmp     loc_3603A ;~ 274D:0415
loc_35ec8:
	// 6890 
cs=0x274d;eip=0x000418; 	T(bp = 0x20;);	// 70646                  mov     bp, 20h ; ' ' ;~ 274D:0418
loc_35ecb:
	// 6891 
cs=0x274d;eip=0x00041b; 	X(word_4a3a1 = bx;);	// 70649                  mov     word_4A3A1, bx ;~ 274D:041B
cs=0x274d;eip=0x00041f; 	X(word_4a3a3 = cx;);	// 70650                  mov     word_4A3A3, cx ;~ 274D:041F
cs=0x274d;eip=0x000423; 	X(word_4a3a5 = si;);	// 70651                  mov     word_4A3A5, si ;~ 274D:0423
cs=0x274d;eip=0x000427; 	X(word_4a3a7 = dx;);	// 70652                  mov     word_4A3A7, dx ;~ 274D:0427
loc_35edb:
	// 6892 
cs=0x274d;eip=0x00042b; 	T(ADD(bx, word_4a396));	// 70655                  add     bx, word_4A396 ;~ 274D:042B
cs=0x274d;eip=0x00042f; 	T(ADC(cx, word_4a398));	// 70656                  adc     cx, word_4A398 ;~ 274D:042F
cs=0x274d;eip=0x000433; 	T(SAR(cx, 1));	// 70657                  sar     cx, 1 ;~ 274D:0433
cs=0x274d;eip=0x000435; 	T(RCR(bx, 1));	// 70658                  rcr     bx, 1 ;~ 274D:0435
cs=0x274d;eip=0x000437; 	T(ADD(si, word_4a39a));	// 70659                  add     si, word_4A39A ;~ 274D:0437
cs=0x274d;eip=0x00043b; 	T(ADC(dx, word_4a39c));	// 70660                  adc     dx, word_4A39C ;~ 274D:043B
cs=0x274d;eip=0x00043f; 	T(SAR(dx, 1));	// 70661                  sar     dx, 1 ;~ 274D:043F
cs=0x274d;eip=0x000441; 	T(RCR(si, 1));	// 70662                  rcr     si, 1 ;~ 274D:0441
cs=0x274d;eip=0x000443; 	J(CALL(sub_35de4,0));	// 70663                  call    sub_35DE4 ;~ 274D:0443
cs=0x274d;eip=0x000446; 	J(JNZ(locret_35f22));	// 70664                  jnz     short locret_35F22 ;~ 274D:0446
cs=0x274d;eip=0x000448; 	T(DEC(bp));	// 70665                  dec     bp ;~ 274D:0448
cs=0x274d;eip=0x000449; 	J(JZ(loc_35f23));	// 70666                  jz      short loc_35F23 ;~ 274D:0449
cs=0x274d;eip=0x00044b; 	J(CALL(sub_35e33,0));	// 70667                  call    sub_35E33 ;~ 274D:044B
cs=0x274d;eip=0x00044e; 	J(JNZ(loc_35ecb));	// 70668                  jnz     short loc_35ECB ;~ 274D:044E
cs=0x274d;eip=0x000450; 	X(word_4a396 = bx;);	// 70669                  mov     word_4A396, bx ;~ 274D:0450
cs=0x274d;eip=0x000454; 	X(word_4a398 = cx;);	// 70670                  mov     word_4A398, cx ;~ 274D:0454
cs=0x274d;eip=0x000458; 	X(word_4a39a = si;);	// 70671                  mov     word_4A39A, si ;~ 274D:0458
cs=0x274d;eip=0x00045c; 	X(word_4a39c = dx;);	// 70672                  mov     word_4A39C, dx ;~ 274D:045C
cs=0x274d;eip=0x000460; 	T(bx = word_4a3a1;);	// 70673                  mov     bx, word_4A3A1 ;~ 274D:0460
cs=0x274d;eip=0x000464; 	T(cx = word_4a3a3;);	// 70674                  mov     cx, word_4A3A3 ;~ 274D:0464
cs=0x274d;eip=0x000468; 	T(si = word_4a3a5;);	// 70675                  mov     si, word_4A3A5 ;~ 274D:0468
cs=0x274d;eip=0x00046c; 	T(dx = word_4a3a7;);	// 70676                  mov     dx, word_4A3A7 ;~ 274D:046C
cs=0x274d;eip=0x000470; 	J(JMP(loc_35edb));	// 70677                  jmp     short loc_35EDB ;~ 274D:0470
locret_35f22:
	// 6893 
cs=0x274d;eip=0x000472; 	J(RETN(0));	// 70681                  retn ;~ 274D:0472
loc_35f23:
	// 6894 
cs=0x274d;eip=0x000473; 	T(bx = word_4a396;);	// 70685                  mov     bx, word_4A396 ;~ 274D:0473
cs=0x274d;eip=0x000477; 	T(cx = word_4a398;);	// 70686                  mov     cx, word_4A398 ;~ 274D:0477
cs=0x274d;eip=0x00047b; 	T(si = word_4a39a;);	// 70687                  mov     si, word_4A39A ;~ 274D:047B
cs=0x274d;eip=0x00047f; 	T(dx = word_4a39c;);	// 70688                  mov     dx, word_4A39C ;~ 274D:047F
cs=0x274d;eip=0x000483; 	J(RETN(0));	// 70689                  retn ;~ 274D:0483

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_35ec8: 	goto loc_35ec8;
        case m2c::kloc_35ecb: 	goto loc_35ecb;
        case m2c::kloc_35edb: 	goto loc_35edb;
        case m2c::kloc_35f23: 	goto loc_35f23;
        case m2c::klocret_35f22: 	goto locret_35f22;
        case m2c::ksub_35ebe: 	goto sub_35ebe;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35f34(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35f34:
    _begin:
cs=0x274d;eip=0x000484; 	T(al = byte_4a3a0;);	// 70700                  mov     al, byte_4A3A0 ;~ 274D:0484
cs=0x274d;eip=0x000487; 	T(OR(al, al));	// 70701                  or      al, al ;~ 274D:0487
cs=0x274d;eip=0x000489; 	J(JNZ(loc_35f3e));	// 70702                  jnz     short loc_35F3E ;~ 274D:0489
cs=0x274d;eip=0x00048b; 	J(return seg35ab_550_proc(m2c::kloc_36000, _state););	// 70703                  jmp     loc_36000 ;~ 274D:048B
loc_35f3e:
	// 6895 
cs=0x274d;eip=0x00048e; 	T(bp = 0x20;);	// 70707                  mov     bp, 20h ; ' ' ;~ 274D:048E
loc_35f41:
	// 6896 
cs=0x274d;eip=0x000491; 	X(word_4a3a1 = bx;);	// 70710                  mov     word_4A3A1, bx ;~ 274D:0491
cs=0x274d;eip=0x000495; 	X(word_4a3a3 = cx;);	// 70711                  mov     word_4A3A3, cx ;~ 274D:0495
cs=0x274d;eip=0x000499; 	X(word_4a3a5 = si;);	// 70712                  mov     word_4A3A5, si ;~ 274D:0499
cs=0x274d;eip=0x00049d; 	X(word_4a3a7 = dx;);	// 70713                  mov     word_4A3A7, dx ;~ 274D:049D
loc_35f51:
	// 6897 
cs=0x274d;eip=0x0004a1; 	T(ADD(bx, word_4a396));	// 70716                  add     bx, word_4A396 ;~ 274D:04A1
cs=0x274d;eip=0x0004a5; 	T(ADC(cx, word_4a398));	// 70717                  adc     cx, word_4A398 ;~ 274D:04A5
cs=0x274d;eip=0x0004a9; 	T(SAR(cx, 1));	// 70718                  sar     cx, 1 ;~ 274D:04A9
cs=0x274d;eip=0x0004ab; 	T(RCR(bx, 1));	// 70719                  rcr     bx, 1 ;~ 274D:04AB
cs=0x274d;eip=0x0004ad; 	T(ADD(si, word_4a39a));	// 70720                  add     si, word_4A39A ;~ 274D:04AD
cs=0x274d;eip=0x0004b1; 	T(ADC(dx, word_4a39c));	// 70721                  adc     dx, word_4A39C ;~ 274D:04B1
cs=0x274d;eip=0x0004b5; 	T(SAR(dx, 1));	// 70722                  sar     dx, 1 ;~ 274D:04B5
cs=0x274d;eip=0x0004b7; 	T(RCR(si, 1));	// 70723                  rcr     si, 1 ;~ 274D:04B7
cs=0x274d;eip=0x0004b9; 	J(CALL(sub_35e33,0));	// 70724                  call    sub_35E33 ;~ 274D:04B9
cs=0x274d;eip=0x0004bc; 	J(JZ(loc_35f9f));	// 70725                  jz      short loc_35F9F ;~ 274D:04BC
cs=0x274d;eip=0x0004be; 	T(DEC(bp));	// 70726                  dec     bp ;~ 274D:04BE
cs=0x274d;eip=0x0004bf; 	J(JZ(loc_35f9f));	// 70727                  jz      short loc_35F9F ;~ 274D:04BF
cs=0x274d;eip=0x0004c1; 	T(TEST(byte_4a39e, al));	// 70728                  test    byte_4A39E, al ;~ 274D:04C1
cs=0x274d;eip=0x0004c5; 	J(JZ(loc_35f41));	// 70729                  jz      short loc_35F41 ;~ 274D:04C5
cs=0x274d;eip=0x0004c7; 	T(TEST(byte_4a39f, al));	// 70730                  test    byte_4A39F, al ;~ 274D:04C7
cs=0x274d;eip=0x0004cb; 	J(JNZ(loc_35f9f));	// 70731                  jnz     short loc_35F9F ;~ 274D:04CB
cs=0x274d;eip=0x0004cd; 	X(word_4a396 = bx;);	// 70732                  mov     word_4A396, bx ;~ 274D:04CD
cs=0x274d;eip=0x0004d1; 	X(word_4a398 = cx;);	// 70733                  mov     word_4A398, cx ;~ 274D:04D1
cs=0x274d;eip=0x0004d5; 	X(word_4a39a = si;);	// 70734                  mov     word_4A39A, si ;~ 274D:04D5
cs=0x274d;eip=0x0004d9; 	X(word_4a39c = dx;);	// 70735                  mov     word_4A39C, dx ;~ 274D:04D9
cs=0x274d;eip=0x0004dd; 	T(bx = word_4a3a1;);	// 70736                  mov     bx, word_4A3A1 ;~ 274D:04DD
cs=0x274d;eip=0x0004e1; 	T(cx = word_4a3a3;);	// 70737                  mov     cx, word_4A3A3 ;~ 274D:04E1
cs=0x274d;eip=0x0004e5; 	T(si = word_4a3a5;);	// 70738                  mov     si, word_4A3A5 ;~ 274D:04E5
cs=0x274d;eip=0x0004e9; 	T(dx = word_4a3a7;);	// 70739                  mov     dx, word_4A3A7 ;~ 274D:04E9
cs=0x274d;eip=0x0004ed; 	J(JMP(loc_35f51));	// 70740                  jmp     short loc_35F51 ;~ 274D:04ED
loc_35f9f:
	// 6898 
cs=0x274d;eip=0x0004ef; 	T(OR(al, al));	// 70745                  or      al, al ;~ 274D:04EF
cs=0x274d;eip=0x0004f1; 	J(RETN(0));	// 70746                  retn ;~ 274D:04F1

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_35f3e: 	goto loc_35f3e;
        case m2c::kloc_35f41: 	goto loc_35f41;
        case m2c::kloc_35f51: 	goto loc_35f51;
        case m2c::kloc_35f9f: 	goto loc_35f9f;
        case m2c::ksub_35f34: 	goto sub_35f34;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35fa2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35fa2:
    _begin:
cs=0x274d;eip=0x0004f2; 	T(CMP(bx, 0));	// 70754                  cmp     bx, 0 ;~ 274D:04F2
cs=0x274d;eip=0x0004f5; 	J(JZ(loc_35fbb));	// 70755                  jz      short loc_35FBB ;~ 274D:04F5
cs=0x274d;eip=0x0004f7; 	T(CMP(bx, word_4d787));	// 70756                  cmp     bx, word_4D787 ;~ 274D:04F7
cs=0x274d;eip=0x0004fb; 	J(JZ(loc_35fbb));	// 70757                  jz      short loc_35FBB ;~ 274D:04FB
cs=0x274d;eip=0x0004fd; 	T(CMP(si, 0));	// 70758                  cmp     si, 0 ;~ 274D:04FD
cs=0x274d;eip=0x000500; 	J(JZ(loc_35fcc));	// 70759                  jz      short loc_35FCC ;~ 274D:0500
cs=0x274d;eip=0x000502; 	T(CMP(si, word_4d789));	// 70760                  cmp     si, word_4D789 ;~ 274D:0502
cs=0x274d;eip=0x000506; 	J(JZ(loc_35fcc));	// 70761                  jz      short loc_35FCC ;~ 274D:0506
cs=0x274d;eip=0x000508; 	T(SUB(ax, ax));	// 70762                  sub     ax, ax ;~ 274D:0508
cs=0x274d;eip=0x00050a; 	J(RETN(0));	// 70763                  retn ;~ 274D:050A
loc_35fbb:
	// 6899 
cs=0x274d;eip=0x00050b; 	T(SUB(ax, ax));	// 70768                  sub     ax, ax ;~ 274D:050B
cs=0x274d;eip=0x00050d; 	T(CMP(si, 0));	// 70769                  cmp     si, 0 ;~ 274D:050D
cs=0x274d;eip=0x000510; 	J(JL(loc_35fc9));	// 70770                  jl      short loc_35FC9 ;~ 274D:0510
cs=0x274d;eip=0x000512; 	T(CMP(si, word_4d789));	// 70771                  cmp     si, word_4D789 ;~ 274D:0512
cs=0x274d;eip=0x000516; 	J(JG(loc_35fc9));	// 70772                  jg      short loc_35FC9 ;~ 274D:0516
cs=0x274d;eip=0x000518; 	T(INC(ax));	// 70773                  inc     ax ;~ 274D:0518
loc_35fc9:
	// 6900 
cs=0x274d;eip=0x000519; 	T(OR(ax, ax));	// 70777                  or      ax, ax ;~ 274D:0519
cs=0x274d;eip=0x00051b; 	J(RETN(0));	// 70778                  retn ;~ 274D:051B
loc_35fcc:
	// 6901 
cs=0x274d;eip=0x00051c; 	T(SUB(ax, ax));	// 70783                  sub     ax, ax ;~ 274D:051C
cs=0x274d;eip=0x00051e; 	T(CMP(bx, 0));	// 70784                  cmp     bx, 0 ;~ 274D:051E
cs=0x274d;eip=0x000521; 	J(JL(loc_35fda));	// 70785                  jl      short loc_35FDA ;~ 274D:0521
cs=0x274d;eip=0x000523; 	T(CMP(bx, word_4d787));	// 70786                  cmp     bx, word_4D787 ;~ 274D:0523
cs=0x274d;eip=0x000527; 	J(JG(loc_35fda));	// 70787                  jg      short loc_35FDA ;~ 274D:0527
cs=0x274d;eip=0x000529; 	T(INC(ax));	// 70788                  inc     ax ;~ 274D:0529
loc_35fda:
	// 6902 
cs=0x274d;eip=0x00052a; 	T(OR(ax, ax));	// 70792                  or      ax, ax ;~ 274D:052A
cs=0x274d;eip=0x00052c; 	J(RETN(0));	// 70793                  retn ;~ 274D:052C

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_35fbb: 	goto loc_35fbb;
        case m2c::kloc_35fc9: 	goto loc_35fc9;
        case m2c::kloc_35fcc: 	goto loc_35fcc;
        case m2c::kloc_35fda: 	goto loc_35fda;
        case m2c::ksub_35fa2: 	goto sub_35fa2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_35fdd(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_35fdd:
    _begin:
cs=0x274d;eip=0x00052d; 	T(al = 0x0C;);	// 70802                  mov     al, 0Ch ;~ 274D:052D
cs=0x274d;eip=0x00052f; 	T(CMP(bx, 0));	// 70803                  cmp     bx, 0 ;~ 274D:052F
cs=0x274d;eip=0x000532; 	J(JL(loc_35fee));	// 70804                  jl      short loc_35FEE ;~ 274D:0532
cs=0x274d;eip=0x000534; 	T(XOR(al, 9));	// 70805                  xor     al, 9 ;~ 274D:0534
cs=0x274d;eip=0x000536; 	T(CMP(bx, word_4d787));	// 70806                  cmp     bx, word_4D787 ;~ 274D:0536
cs=0x274d;eip=0x00053a; 	J(JG(loc_35fee));	// 70807                  jg      short loc_35FEE ;~ 274D:053A
cs=0x274d;eip=0x00053c; 	T(XOR(al, 1));	// 70808                  xor     al, 1 ;~ 274D:053C
loc_35fee:
	// 6903 
cs=0x274d;eip=0x00053e; 	T(CMP(si, 0));	// 70812                  cmp     si, 0 ;~ 274D:053E
cs=0x274d;eip=0x000541; 	J(JL(loc_35ffd));	// 70813                  jl      short loc_35FFD ;~ 274D:0541
cs=0x274d;eip=0x000543; 	T(XOR(al, 6));	// 70814                  xor     al, 6 ;~ 274D:0543
cs=0x274d;eip=0x000545; 	T(CMP(si, word_4d789));	// 70815                  cmp     si, word_4D789 ;~ 274D:0545
cs=0x274d;eip=0x000549; 	J(JG(loc_35ffd));	// 70816                  jg      short loc_35FFD ;~ 274D:0549
cs=0x274d;eip=0x00054b; 	T(XOR(al, 2));	// 70817                  xor     al, 2 ;~ 274D:054B
loc_35ffd:
	// 6904 
cs=0x274d;eip=0x00054d; 	T(OR(al, al));	// 70821                  or      al, al ;~ 274D:054D
cs=0x274d;eip=0x00054f; 	J(RETN(0));	// 70822                  retn ;~ 274D:054F

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_35fee: 	goto loc_35fee;
        case m2c::kloc_35ffd: 	goto loc_35ffd;
        case m2c::ksub_35fdd: 	goto sub_35fdd;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg35ab_550_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg35ab_550_proc:
    _begin:
loc_36000:
	// 6905 
cs=0x274d;eip=0x000550; 	X(PUSH(di));	// 70829                  push    di ;~ 274D:0550
cs=0x274d;eip=0x000551; 	T(cx = word_4a396;);	// 70830                  mov     cx, word_4A396 ;~ 274D:0551
cs=0x274d;eip=0x000555; 	T(dx = word_4a39a;);	// 70831                  mov     dx, word_4A39A ;~ 274D:0555
cs=0x274d;eip=0x000559; 	T(bp = 0x10;);	// 70832                  mov     bp, 10h ;~ 274D:0559
loc_3600c:
	// 6906 
cs=0x274d;eip=0x00055c; 	T(di = bx;);	// 70835                  mov     di, bx ;~ 274D:055C
cs=0x274d;eip=0x00055e; 	T(es = si;);	// 70836                  mov     es, si ;~ 274D:055E
loc_36010:
	// 6907 
cs=0x274d;eip=0x000560; 	T(ADD(bx, cx));	// 70840                  add     bx, cx ;~ 274D:0560
cs=0x274d;eip=0x000562; 	T(SAR(bx, 1));	// 70841                  sar     bx, 1 ;~ 274D:0562
cs=0x274d;eip=0x000564; 	T(ADD(si, dx));	// 70842                  add     si, dx ;~ 274D:0564
cs=0x274d;eip=0x000566; 	T(SAR(si, 1));	// 70843                  sar     si, 1 ;~ 274D:0566
cs=0x274d;eip=0x000568; 	J(CALL(sub_35fdd,0));	// 70844                  call    sub_35FDD ;~ 274D:0568
cs=0x274d;eip=0x00056b; 	J(JZ(loc_36036));	// 70845                  jz      short loc_36036 ;~ 274D:056B
cs=0x274d;eip=0x00056d; 	T(DEC(bp));	// 70846                  dec     bp ;~ 274D:056D
cs=0x274d;eip=0x00056e; 	J(JZ(loc_36036));	// 70847                  jz      short loc_36036 ;~ 274D:056E
cs=0x274d;eip=0x000570; 	T(TEST(byte_4a39e, al));	// 70848                  test    byte_4A39E, al ;~ 274D:0570
cs=0x274d;eip=0x000574; 	J(JZ(loc_3600c));	// 70849                  jz      short loc_3600C ;~ 274D:0574
cs=0x274d;eip=0x000576; 	T(TEST(byte_4a39f, al));	// 70850                  test    byte_4A39F, al ;~ 274D:0576
cs=0x274d;eip=0x00057a; 	J(JNZ(loc_36036));	// 70851                  jnz     short loc_36036 ;~ 274D:057A
cs=0x274d;eip=0x00057c; 	T(cx = bx;);	// 70853                  mov     cx, bx ;~ 274D:057C
cs=0x274d;eip=0x00057e; 	T(dx = si;);	// 70854                  mov     dx, si ;~ 274D:057E
cs=0x274d;eip=0x000580; 	T(bx = di;);	// 70855                  mov     bx, di ;~ 274D:0580
cs=0x274d;eip=0x000582; 	T(si = es;);	// 70856                  mov     si, es ;~ 274D:0582
cs=0x274d;eip=0x000584; 	J(JMP(loc_36010));	// 70857                  jmp     short loc_36010 ;~ 274D:0584
loc_36036:
	// 6908 
cs=0x274d;eip=0x000586; 	X(POP(di));	// 70862                  pop     di ;~ 274D:0586
cs=0x274d;eip=0x000587; 	T(OR(al, al));	// 70863                  or      al, al ;~ 274D:0587
cs=0x274d;eip=0x000589; 	J(RETN(0));	// 70864                  retn ;~ 274D:0589
loc_3603a:
	// 6909 
cs=0x274d;eip=0x00058a; 	X(PUSH(di));	// 70870                  push    di ;~ 274D:058A
cs=0x274d;eip=0x00058b; 	T(cx = word_4a396;);	// 70871                  mov     cx, word_4A396 ;~ 274D:058B
cs=0x274d;eip=0x00058f; 	T(dx = word_4a39a;);	// 70872                  mov     dx, word_4A39A ;~ 274D:058F
cs=0x274d;eip=0x000593; 	T(bp = 0x10;);	// 70873                  mov     bp, 10h ;~ 274D:0593
loc_36046:
	// 6910 
cs=0x274d;eip=0x000596; 	T(di = bx;);	// 70876                  mov     di, bx ;~ 274D:0596
cs=0x274d;eip=0x000598; 	T(es = si;);	// 70877                  mov     es, si ;~ 274D:0598
loc_3604a:
	// 6911 
cs=0x274d;eip=0x00059a; 	T(ADD(bx, cx));	// 70881                  add     bx, cx ;~ 274D:059A
cs=0x274d;eip=0x00059c; 	T(SAR(bx, 1));	// 70882                  sar     bx, 1 ;~ 274D:059C
cs=0x274d;eip=0x00059e; 	T(ADD(si, dx));	// 70883                  add     si, dx ;~ 274D:059E
cs=0x274d;eip=0x0005a0; 	T(SAR(si, 1));	// 70884                  sar     si, 1 ;~ 274D:05A0
cs=0x274d;eip=0x0005a2; 	J(CALL(sub_35fa2,0));	// 70885                  call    sub_35FA2 ;~ 274D:05A2
cs=0x274d;eip=0x0005a5; 	J(JNZ(loc_36069));	// 70886                  jnz     short loc_36069 ;~ 274D:05A5
cs=0x274d;eip=0x0005a7; 	T(DEC(bp));	// 70887                  dec     bp ;~ 274D:05A7
cs=0x274d;eip=0x0005a8; 	J(JZ(loc_3606b));	// 70888                  jz      short loc_3606B ;~ 274D:05A8
cs=0x274d;eip=0x0005aa; 	J(CALL(sub_35fdd,0));	// 70889                  call    sub_35FDD ;~ 274D:05AA
cs=0x274d;eip=0x0005ad; 	J(JNZ(loc_36046));	// 70890                  jnz     short loc_36046 ;~ 274D:05AD
cs=0x274d;eip=0x0005af; 	T(cx = bx;);	// 70891                  mov     cx, bx ;~ 274D:05AF
cs=0x274d;eip=0x0005b1; 	T(dx = si;);	// 70892                  mov     dx, si ;~ 274D:05B1
cs=0x274d;eip=0x0005b3; 	T(bx = di;);	// 70893                  mov     bx, di ;~ 274D:05B3
cs=0x274d;eip=0x0005b5; 	T(si = es;);	// 70894                  mov     si, es ;~ 274D:05B5
cs=0x274d;eip=0x0005b7; 	J(JMP(loc_3604a));	// 70895                  jmp     short loc_3604A ;~ 274D:05B7
loc_36069:
	// 6912 
cs=0x274d;eip=0x0005b9; 	X(POP(di));	// 70899                  pop     di ;~ 274D:05B9
cs=0x274d;eip=0x0005ba; 	J(RETN(0));	// 70900                  retn ;~ 274D:05BA
loc_3606b:
	// 6913 
cs=0x274d;eip=0x0005bb; 	T(bx = cx;);	// 70904                  mov     bx, cx ;~ 274D:05BB
cs=0x274d;eip=0x0005bd; 	T(si = dx;);	// 70905                  mov     si, dx ;~ 274D:05BD
cs=0x274d;eip=0x0005bf; 	X(POP(di));	// 70906                  pop     di ;~ 274D:05BF
cs=0x274d;eip=0x0005c0; 	J(RETN(0));	// 70907                  retn ;~ 274D:05C0
ret_274d_5c2:
	// 6914 
cs=0x274d;eip=0x0005c2; 	X(PUSH(bp));	// 70912                  push    bp ;~ 274D:05C2
cs=0x274d;eip=0x0005c3; 	T(bp = sp;);	// 70913                  mov     bp, sp ;~ 274D:05C3
cs=0x274d;eip=0x0005c5; 	X(PUSH(si));	// 70914                  push    si ;~ 274D:05C5
cs=0x274d;eip=0x0005c6; 	X(PUSH(di));	// 70915                  push    di ;~ 274D:05C6
cs=0x274d;eip=0x0005c7; 	T(MOV(si, *(dw*)(raddr(ss,bp+4))));	// 70916                  mov     si, [bp+4] ;~ 274D:05C7
cs=0x274d;eip=0x0005ca; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 70917                  mov     ax, [bp+6] ;~ 274D:05CA
cs=0x274d;eip=0x0005cd; 	T(es = ax;);	// 70918                  mov     es, ax ;~ 274D:05CD
cs=0x274d;eip=0x0005cf; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 70919                  mov     di, [bp+8] ;~ 274D:05CF
cs=0x274d;eip=0x0005d2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0A))));	// 70920                  mov     bx, [bp+0Ah] ;~ 274D:05D2
cs=0x274d;eip=0x0005d5; 	J(CALL(sub_3608c,0));	// 70921                  call    sub_3608C ;~ 274D:05D5
cs=0x274d;eip=0x0005d8; 	X(POP(di));	// 70922                  pop     di ;~ 274D:05D8
cs=0x274d;eip=0x0005d9; 	X(POP(si));	// 70923                  pop     si ;~ 274D:05D9
cs=0x274d;eip=0x0005da; 	X(POP(bp));	// 70924                  pop     bp ;~ 274D:05DA
cs=0x274d;eip=0x0005db; 	J(RETN(0));	// 70925                  retn ;~ 274D:05DB

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_36000: 	goto loc_36000;
        case m2c::kloc_3600c: 	goto loc_3600c;
        case m2c::kloc_36010: 	goto loc_36010;
        case m2c::kloc_36036: 	goto loc_36036;
        case m2c::kloc_3603a: 	goto loc_3603a;
        case m2c::kloc_36046: 	goto loc_36046;
        case m2c::kloc_3604a: 	goto loc_3604a;
        case m2c::kloc_36069: 	goto loc_36069;
        case m2c::kloc_3606b: 	goto loc_3606b;
        case m2c::kret_274d_5c2: 	goto ret_274d_5c2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3608c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3608c:
    _begin:
cs=0x274d;eip=0x0005dc; 	X(word_4a3c0 = bx;);	// 70933                  mov     word_4A3C0, bx ;~ 274D:05DC
cs=0x274d;eip=0x0005e0; 	T(SUB(bp, bp));	// 70934                  sub     bp, bp ;~ 274D:05E0
cs=0x274d;eip=0x0005e2; 	T(MOV(al, *(raddr(es,si))));	// 70935                  mov     al, es:[si] ;~ 274D:05E2
cs=0x274d;eip=0x0005e5; 	T(INC(si));	// 70936                  inc     si ;~ 274D:05E5
cs=0x274d;eip=0x0005e6; 	T(SUB(ah, ah));	// 70937                  sub     ah, ah ;~ 274D:05E6
cs=0x274d;eip=0x0005e8; 	T(cx = ax;);	// 70938                  mov     cx, ax ;~ 274D:05E8
loc_3609a:
	// 6915 
cs=0x274d;eip=0x0005ea; 	T(bx = word_4a3c0;);	// 70941                  mov     bx, word_4A3C0 ;~ 274D:05EA
cs=0x274d;eip=0x0005ee; 	T(ADD(bx, cx));	// 70942                  add     bx, cx ;~ 274D:05EE
cs=0x274d;eip=0x0005f0; 	T(MOV(al, *(raddr(ds,bx))));	// 70943                  mov     al, [bx] ;~ 274D:05F0
cs=0x274d;eip=0x0005f2; 	T(bx = cx;);	// 70944                  mov     bx, cx ;~ 274D:05F2
cs=0x274d;eip=0x0005f4; 	T(SHL(bx, 1));	// 70945                  shl     bx, 1 ;~ 274D:05F4
cs=0x274d;eip=0x0005f6; 	T(SUB(dx, dx));	// 70946                  sub     dx, dx ;~ 274D:05F6
cs=0x274d;eip=0x0005f8; 	T(CMP(al, 0x0FF));	// 70947                  cmp     al, 0FFh ;~ 274D:05F8
cs=0x274d;eip=0x0005fa; 	J(JNZ(loc_360af));	// 70948                  jnz     short loc_360AF ;~ 274D:05FA
cs=0x274d;eip=0x0005fc; 	T(dx = 2;);	// 70949                  mov     dx, 2 ;~ 274D:05FC
loc_360af:
	// 6916 
cs=0x274d;eip=0x0005ff; 	T(CMP(dx, 0));	// 70953                  cmp     dx, 0 ;~ 274D:05FF
cs=0x274d;eip=0x000602; 	J(JZ(loc_360c6));	// 70954                  jz      short loc_360C6 ;~ 274D:0602
cs=0x274d;eip=0x000604; 	T(CMP(dx, 1));	// 70955                  cmp     dx, 1 ;~ 274D:0604
cs=0x274d;eip=0x000607; 	J(JZ(loc_360cc));	// 70956                  jz      short loc_360CC ;~ 274D:0607
cs=0x274d;eip=0x000609; 	T(CMP(dx, 2));	// 70957                  cmp     dx, 2 ;~ 274D:0609
cs=0x274d;eip=0x00060c; 	J(JZ(loc_360d5));	// 70958                  jz      short loc_360D5 ;~ 274D:060C
cs=0x274d;eip=0x00060e; 	T(CMP(dx, 3));	// 70959                  cmp     dx, 3 ;~ 274D:060E
cs=0x274d;eip=0x000611; 	J(JZ(loc_360db));	// 70960                  jz      short loc_360DB ;~ 274D:0611
cs=0x274d;eip=0x000613; 	J(JMP(loc_360e4));	// 70961                  jmp     short loc_360E4 ;~ 274D:0613
loc_360c6:
	// 6917 
cs=0x274d;eip=0x000616; 	T(dx = 1;);	// 70967                  mov     dx, 1 ;~ 274D:0616
cs=0x274d;eip=0x000619; 	J(JMP(loc_36108));	// 70968                  jmp     short loc_36108 ;~ 274D:0619
loc_360cc:
	// 6918 
cs=0x274d;eip=0x00061c; 	X(MOV(*(raddr(ds,di)), cl));	// 70974                  mov     [di], cl ;~ 274D:061C
cs=0x274d;eip=0x00061e; 	T(INC(di));	// 70975                  inc     di ;~ 274D:061E
cs=0x274d;eip=0x00061f; 	T(dx = 4;);	// 70976                  mov     dx, 4 ;~ 274D:061F
cs=0x274d;eip=0x000622; 	J(JMP(loc_360fc));	// 70977                  jmp     short loc_360FC ;~ 274D:0622
loc_360d5:
	// 6919 
cs=0x274d;eip=0x000625; 	T(dx = 3;);	// 70983                  mov     dx, 3 ;~ 274D:0625
cs=0x274d;eip=0x000628; 	J(JMP(loc_360fc));	// 70984                  jmp     short loc_360FC ;~ 274D:0628
loc_360db:
	// 6920 
cs=0x274d;eip=0x00062b; 	X(MOV(*(raddr(ds,di)), cl));	// 70990                  mov     [di], cl ;~ 274D:062B
cs=0x274d;eip=0x00062d; 	T(INC(di));	// 70991                  inc     di ;~ 274D:062D
cs=0x274d;eip=0x00062e; 	T(dx = 4;);	// 70992                  mov     dx, 4 ;~ 274D:062E
cs=0x274d;eip=0x000631; 	J(JMP(loc_36108));	// 70993                  jmp     short loc_36108 ;~ 274D:0631
loc_360e4:
	// 6921 
cs=0x274d;eip=0x000634; 	T(SUB(bp, 1));	// 70999                  sub     bp, 1 ;~ 274D:0634
cs=0x274d;eip=0x000637; 	J(JS(loc_360f8));	// 71000                  js      short loc_360F8 ;~ 274D:0637
cs=0x274d;eip=0x000639; 	X(POP(ax));	// 71001                  pop     ax ;~ 274D:0639
cs=0x274d;eip=0x00063a; 	T(dl = al;);	// 71002                  mov     dl, al ;~ 274D:063A
cs=0x274d;eip=0x00063c; 	T(SUB(dh, dh));	// 71003                  sub     dh, dh ;~ 274D:063C
cs=0x274d;eip=0x00063e; 	T(cl = ah;);	// 71004                  mov     cl, ah ;~ 274D:063E
cs=0x274d;eip=0x000640; 	T(SUB(ch, ch));	// 71005                  sub     ch, ch ;~ 274D:0640
cs=0x274d;eip=0x000642; 	T(bx = cx;);	// 71006                  mov     bx, cx ;~ 274D:0642
cs=0x274d;eip=0x000644; 	T(SHL(bx, 1));	// 71007                  shl     bx, 1 ;~ 274D:0644
cs=0x274d;eip=0x000646; 	J(JMP(loc_360af));	// 71008                  jmp     short loc_360AF ;~ 274D:0646
loc_360f8:
	// 6922 
cs=0x274d;eip=0x000648; 	X(MOV(*(raddr(ds,di)), 0x0FF));	// 71012                  mov     byte ptr [di], 0FFh ;~ 274D:0648
cs=0x274d;eip=0x00064b; 	J(RETN(0));	// 71013                  retn ;~ 274D:064B
loc_360fc:
	// 6923 
cs=0x274d;eip=0x00064c; 	T(MOV(al, *(raddr(es,bx+si))));	// 71018                  mov     al, es:[bx+si] ;~ 274D:064C
cs=0x274d;eip=0x00064f; 	T(CMP(al, 0x0FF));	// 71019                  cmp     al, 0FFh ;~ 274D:064F
cs=0x274d;eip=0x000651; 	J(JZ(loc_36106));	// 71020                  jz      short loc_36106 ;~ 274D:0651
cs=0x274d;eip=0x000653; 	J(JMP(loc_36110));	// 71021                  jmp     short loc_36110 ;~ 274D:0653
loc_36106:
	// 6924 
cs=0x274d;eip=0x000656; 	J(JMP(loc_360af));	// 71028                  jmp     short loc_360AF ;~ 274D:0656
loc_36108:
	// 6925 
cs=0x274d;eip=0x000658; 	T(MOV(al, *(raddr(es,bx+si+1))));	// 71033                  mov     al, es:[bx+si+1] ;~ 274D:0658
cs=0x274d;eip=0x00065c; 	T(CMP(al, 0x0FF));	// 71034                  cmp     al, 0FFh ;~ 274D:065C
cs=0x274d;eip=0x00065e; 	J(JZ(loc_36106));	// 71035                  jz      short loc_36106 ;~ 274D:065E
loc_36110:
	// 6926 
cs=0x274d;eip=0x000660; 	T(SUB(ah, ah));	// 71038                  sub     ah, ah ;~ 274D:0660
cs=0x274d;eip=0x000662; 	T(XCHG(ax, cx));	// 71039                  xchg    ax, cx ;~ 274D:0662
cs=0x274d;eip=0x000663; 	T(ah = al;);	// 71040                  mov     ah, al ;~ 274D:0663
cs=0x274d;eip=0x000665; 	T(al = dl;);	// 71041                  mov     al, dl ;~ 274D:0665
cs=0x274d;eip=0x000667; 	X(PUSH(ax));	// 71042                  push    ax ;~ 274D:0667
cs=0x274d;eip=0x000668; 	T(INC(bp));	// 71043                  inc     bp ;~ 274D:0668
cs=0x274d;eip=0x000669; 	J(JMP(loc_3609a));	// 71044                  jmp     loc_3609A ;~ 274D:0669

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_3609a: 	goto loc_3609a;
        case m2c::kloc_360af: 	goto loc_360af;
        case m2c::kloc_360c6: 	goto loc_360c6;
        case m2c::kloc_360cc: 	goto loc_360cc;
        case m2c::kloc_360d5: 	goto loc_360d5;
        case m2c::kloc_360db: 	goto loc_360db;
        case m2c::kloc_360e4: 	goto loc_360e4;
        case m2c::kloc_360f8: 	goto loc_360f8;
        case m2c::kloc_360fc: 	goto loc_360fc;
        case m2c::kloc_36106: 	goto loc_36106;
        case m2c::kloc_36108: 	goto loc_36108;
        case m2c::kloc_36110: 	goto loc_36110;
        case m2c::ksub_3608c: 	goto sub_3608c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group76(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group76:
    _begin:
sub_3611c:
	// 71053 
#undef arg_0
#define arg_0 6
	// 71055 arg_0           = byte ptr  6 ;~ 274D:066C
cs=0x274d;eip=0x00066c; 	X(PUSH(bp));	// 71057                  push    bp ;~ 274D:066C
cs=0x274d;eip=0x00066d; 	T(bp = sp;);	// 71058                  mov     bp, sp ;~ 274D:066D
cs=0x274d;eip=0x00066f; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 71059                  mov     al, [bp+arg_0] ;~ 274D:066F
cs=0x274d;eip=0x000672; 	X(byte_4a3c6 = al;);	// 71060                  mov     byte_4A3C6, al ;~ 274D:0672
cs=0x274d;eip=0x000675; 	X(PUSH(si));	// 71061                  push    si ;~ 274D:0675
cs=0x274d;eip=0x000676; 	X(PUSH(di));	// 71062                  push    di ;~ 274D:0676
cs=0x274d;eip=0x000677; 	J(CALL(sub_3612e,0));	// 71063                  call    sub_3612E ;~ 274D:0677
seg35ab_67a_proc:
	// 71067 
cs=0x274d;eip=0x00067a; 	X(POP(di));	// 71067                  pop     di ;~ 274D:067A
cs=0x274d;eip=0x00067b; 	X(POP(si));	// 71068                  pop     si ;~ 274D:067B
cs=0x274d;eip=0x00067c; 	X(POP(bp));	// 71069                  pop     bp ;~ 274D:067C
cs=0x274d;eip=0x00067d; 	J(RETF(0));	// 71070                  retf ;~ 274D:067D

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg35ab_67a_proc: 	goto seg35ab_67a_proc;
        case m2c::ksub_3611c: 	goto sub_3611c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group77(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group77:
    _begin:
sub_3612e:
	// 71076 
cs=0x274d;eip=0x00067e; 	T(ax = word_4a4a2;);	// 71077                  mov     ax, word_4A4A2 ;~ 274D:067E
cs=0x274d;eip=0x000681; 	T(NEG(ax));	// 71078                  neg     ax ;~ 274D:0681
cs=0x274d;eip=0x000683; 	X(word_4a3c4 = ax;);	// 71079                  mov     word_4A3C4, ax ;~ 274D:0683
cs=0x274d;eip=0x000686; 	T(ax = word_4a49e;);	// 71080                  mov     ax, word_4A49E ;~ 274D:0686
cs=0x274d;eip=0x000689; 	T(CWD);	// 71081                  cwd ;~ 274D:0689
cs=0x274d;eip=0x00068a; 	T(dl = ah;);	// 71082                  mov     dl, ah ;~ 274D:068A
cs=0x274d;eip=0x00068c; 	T(ah = al;);	// 71083                  mov     ah, al ;~ 274D:068C
cs=0x274d;eip=0x00068e; 	T(SUB(al, al));	// 71084                  sub     al, al ;~ 274D:068E
cs=0x274d;eip=0x000690; 	T(cx = word_4a4a0;);	// 71085                  mov     cx, word_4A4A0 ;~ 274D:0690
cs=0x274d;eip=0x000694; 	T(CMP(cx, 0x1F0B));	// 71086                  cmp     cx, 1F0Bh ;~ 274D:0694
cs=0x274d;eip=0x000698; 	J(JG(loc_36150));	// 71087                  jg      short loc_36150 ;~ 274D:0698
cs=0x274d;eip=0x00069a; 	T(ax = 0x3FF;);	// 71088                  mov     ax, 3FFh ;~ 274D:069A
cs=0x274d;eip=0x00069d; 	J(JMP(loc_3616e));	// 71089                  jmp     short loc_3616E ;~ 274D:069D
loc_36150:
	// 6927 
cs=0x274d;eip=0x0006a0; 	T(IDIV2(cx));	// 71095                  idiv    cx ;~ 274D:06A0
cs=0x274d;eip=0x0006a2; 	T(CMP(*(byte_4f20c), 2));	// 71096                  cmp     byte_4F20C, 2 ;~ 274D:06A2
cs=0x274d;eip=0x0006a7; 	J(JNZ(loc_3616e));	// 71097                  jnz     short loc_3616E ;~ 274D:06A7
cs=0x274d;eip=0x0006a9; 	T(dl = *(db*)(((db*)&word_4a498)+1););	// 71098                  mov     dl, byte ptr word_4A498+1 ;~ 274D:06A9
cs=0x274d;eip=0x0006ad; 	T(SUB(dh, dh));	// 71099                  sub     dh, dh ;~ 274D:06AD
cs=0x274d;eip=0x0006af; 	T(cx = dx;);	// 71100                  mov     cx, dx ;~ 274D:06AF
cs=0x274d;eip=0x0006b1; 	T(SHR(cx, 1));	// 71101                  shr     cx, 1 ;~ 274D:06B1
cs=0x274d;eip=0x0006b3; 	T(ADD(dx, cx));	// 71102                  add     dx, cx ;~ 274D:06B3
cs=0x274d;eip=0x0006b5; 	T(cl = 3;);	// 71103                  mov     cl, 3 ;~ 274D:06B5
cs=0x274d;eip=0x0006b7; 	T(SHR(dx, cl));	// 71104                  shr     dx, cl ;~ 274D:06B7
cs=0x274d;eip=0x0006b9; 	T(ADD(dx, 4));	// 71105                  add     dx, 4 ;~ 274D:06B9
cs=0x274d;eip=0x0006bc; 	T(SUB(ax, dx));	// 71106                  sub     ax, dx ;~ 274D:06BC
loc_3616e:
	// 6928 
cs=0x274d;eip=0x0006be; 	T(CMP(*(db*)(&word_4e73e), 0));	// 71110                  cmp     byte ptr word_4E73E, 0 ;~ 274D:06BE
cs=0x274d;eip=0x0006c3; 	J(JZ(loc_3617b));	// 71111                  jz      short loc_3617B ;~ 274D:06C3
cs=0x274d;eip=0x0006c5; 	T(cl = *(db*)(&word_4e73e););	// 71112                  mov     cl, byte ptr word_4E73E ;~ 274D:06C5
cs=0x274d;eip=0x0006c9; 	T(SHL(ax, cl));	// 71113                  shl     ax, cl ;~ 274D:06C9
loc_3617b:
	// 6929 
cs=0x274d;eip=0x0006cb; 	T(CMP(byte_4de54, 0));	// 71116                  cmp     byte_4DE54, 0 ;~ 274D:06CB
cs=0x274d;eip=0x0006d0; 	J(JZ(loc_36184));	// 71117                  jz      short loc_36184 ;~ 274D:06D0
cs=0x274d;eip=0x0006d2; 	T(SAR(ax, 1));	// 71118                  sar     ax, 1 ;~ 274D:06D2
loc_36184:
	// 6930 
cs=0x274d;eip=0x0006d4; 	T(bp = ax;);	// 71121                  mov     bp, ax ;~ 274D:06D4
cs=0x274d;eip=0x0006d6; 	X(IMUL1_2(word_4a3c4));	// 71122                  imul    word_4A3C4 ;~ 274D:06D6
cs=0x274d;eip=0x0006da; 	T(SHL(ax, 1));	// 71123                  shl     ax, 1 ;~ 274D:06DA
cs=0x274d;eip=0x0006dc; 	T(RCL(dx, 1));	// 71124                  rcl     dx, 1 ;~ 274D:06DC
cs=0x274d;eip=0x0006de; 	T(bx = ax;);	// 71125                  mov     bx, ax ;~ 274D:06DE
cs=0x274d;eip=0x0006e0; 	T(cx = dx;);	// 71126                  mov     cx, dx ;~ 274D:06E0
cs=0x274d;eip=0x0006e2; 	T(ax = word_48bbc;);	// 71127                  mov     ax, word_48BBC ;~ 274D:06E2
cs=0x274d;eip=0x0006e5; 	T(SHL(ax, 1));	// 71128                  shl     ax, 1 ;~ 274D:06E5
cs=0x274d;eip=0x0006e7; 	X(IMUL1_2(word_4a4a4));	// 71129                  imul    word_4A4A4 ;~ 274D:06E7
cs=0x274d;eip=0x0006eb; 	T(SHL(ax, 1));	// 71130                  shl     ax, 1 ;~ 274D:06EB
cs=0x274d;eip=0x0006ed; 	T(RCL(dx, 1));	// 71131                  rcl     dx, 1 ;~ 274D:06ED
cs=0x274d;eip=0x0006ef; 	T(si = ax;);	// 71132                  mov     si, ax ;~ 274D:06EF
cs=0x274d;eip=0x0006f1; 	T(di = dx;);	// 71133                  mov     di, dx ;~ 274D:06F1
cs=0x274d;eip=0x0006f3; 	T(SUB(ax, bx));	// 71134                  sub     ax, bx ;~ 274D:06F3
cs=0x274d;eip=0x0006f5; 	T(SBB(dx, cx));	// 71135                  sbb     dx, cx ;~ 274D:06F5
cs=0x274d;eip=0x0006f7; 	T(SHL(ax, 1));	// 71136                  shl     ax, 1 ;~ 274D:06F7
cs=0x274d;eip=0x0006f9; 	T(ADC(dx, word_48bbc));	// 71137                  adc     dx, word_48BBC ;~ 274D:06F9
cs=0x274d;eip=0x0006fd; 	X(word_4d78d = dx;);	// 71138                  mov     word_4D78D, dx ;~ 274D:06FD
cs=0x274d;eip=0x000701; 	T(ADD(bx, si));	// 71139                  add     bx, si ;~ 274D:0701
cs=0x274d;eip=0x000703; 	T(ADC(cx, di));	// 71140                  adc     cx, di ;~ 274D:0703
cs=0x274d;eip=0x000705; 	T(SHL(bx, 1));	// 71141                  shl     bx, 1 ;~ 274D:0705
cs=0x274d;eip=0x000707; 	T(ADC(cx, 0));	// 71142                  adc     cx, 0 ;~ 274D:0707
cs=0x274d;eip=0x00070a; 	T(dx = word_48bbc;);	// 71143                  mov     dx, word_48BBC ;~ 274D:070A
cs=0x274d;eip=0x00070e; 	T(SUB(dx, cx));	// 71144                  sub     dx, cx ;~ 274D:070E
cs=0x274d;eip=0x000710; 	X(word_4d78f = dx;);	// 71145                  mov     word_4D78F, dx ;~ 274D:0710
cs=0x274d;eip=0x000714; 	T(ax = bp;);	// 71146                  mov     ax, bp ;~ 274D:0714
cs=0x274d;eip=0x000716; 	X(IMUL1_2(word_4a4a4));	// 71147                  imul    word_4A4A4 ;~ 274D:0716
cs=0x274d;eip=0x00071a; 	T(SHL(ax, 1));	// 71148                  shl     ax, 1 ;~ 274D:071A
cs=0x274d;eip=0x00071c; 	T(RCL(dx, 1));	// 71149                  rcl     dx, 1 ;~ 274D:071C
cs=0x274d;eip=0x00071e; 	T(si = ax;);	// 71150                  mov     si, ax ;~ 274D:071E
cs=0x274d;eip=0x000720; 	T(di = dx;);	// 71151                  mov     di, dx ;~ 274D:0720
cs=0x274d;eip=0x000722; 	T(ax = word_48bbc;);	// 71152                  mov     ax, word_48BBC ;~ 274D:0722
cs=0x274d;eip=0x000725; 	T(SHL(ax, 1));	// 71153                  shl     ax, 1 ;~ 274D:0725
cs=0x274d;eip=0x000727; 	X(IMUL1_2(word_4a3c4));	// 71154                  imul    word_4A3C4 ;~ 274D:0727
cs=0x274d;eip=0x00072b; 	T(SHL(ax, 1));	// 71155                  shl     ax, 1 ;~ 274D:072B
cs=0x274d;eip=0x00072d; 	T(RCL(dx, 1));	// 71156                  rcl     dx, 1 ;~ 274D:072D
cs=0x274d;eip=0x00072f; 	T(bx = ax;);	// 71157                  mov     bx, ax ;~ 274D:072F
cs=0x274d;eip=0x000731; 	T(cx = dx;);	// 71158                  mov     cx, dx ;~ 274D:0731
cs=0x274d;eip=0x000733; 	T(SUB(ax, si));	// 71159                  sub     ax, si ;~ 274D:0733
cs=0x274d;eip=0x000735; 	T(SBB(dx, di));	// 71160                  sbb     dx, di ;~ 274D:0735
cs=0x274d;eip=0x000737; 	T(SHL(ax, 1));	// 71161                  shl     ax, 1 ;~ 274D:0737
cs=0x274d;eip=0x000739; 	T(ADC(dx, 0));	// 71162                  adc     dx, 0 ;~ 274D:0739
cs=0x274d;eip=0x00073c; 	T(ax = dx;);	// 71163                  mov     ax, dx ;~ 274D:073C
cs=0x274d;eip=0x00073e; 	T(SAR(ax, 1));	// 71164                  sar     ax, 1 ;~ 274D:073E
cs=0x274d;eip=0x000740; 	T(SAR(ax, 1));	// 71165                  sar     ax, 1 ;~ 274D:0740
cs=0x274d;eip=0x000742; 	T(SUB(dx, ax));	// 71166                  sub     dx, ax ;~ 274D:0742
cs=0x274d;eip=0x000744; 	T(ADD(dx, *(word_48bbe)));	// 71167                  add     dx, word_48BBE ;~ 274D:0744
cs=0x274d;eip=0x000748; 	X(word_4d793 = dx;);	// 71168                  mov     word_4D793, dx ;~ 274D:0748
cs=0x274d;eip=0x00074c; 	T(ADD(si, bx));	// 71169                  add     si, bx ;~ 274D:074C
cs=0x274d;eip=0x00074e; 	T(ADC(di, cx));	// 71170                  adc     di, cx ;~ 274D:074E
cs=0x274d;eip=0x000750; 	T(SHL(si, 1));	// 71171                  shl     si, 1 ;~ 274D:0750
cs=0x274d;eip=0x000752; 	T(ADC(di, 0));	// 71172                  adc     di, 0 ;~ 274D:0752
cs=0x274d;eip=0x000755; 	T(si = di;);	// 71173                  mov     si, di ;~ 274D:0755
cs=0x274d;eip=0x000757; 	T(SAR(si, 1));	// 71174                  sar     si, 1 ;~ 274D:0757
cs=0x274d;eip=0x000759; 	T(SAR(si, 1));	// 71175                  sar     si, 1 ;~ 274D:0759
cs=0x274d;eip=0x00075b; 	T(SUB(di, si));	// 71176                  sub     di, si ;~ 274D:075B
cs=0x274d;eip=0x00075d; 	T(dx = *(word_48bbe););	// 71177                  mov     dx, word_48BBE ;~ 274D:075D
cs=0x274d;eip=0x000761; 	T(SUB(dx, di));	// 71178                  sub     dx, di ;~ 274D:0761
cs=0x274d;eip=0x000763; 	X(word_4d791 = dx;);	// 71179                  mov     word_4D791, dx ;~ 274D:0763
cs=0x274d;eip=0x000767; 	X(word_4a3c8 = 0;);	// 71180                  mov     word_4A3C8, 0 ;~ 274D:0767
cs=0x274d;eip=0x00076d; 	T(ah = byte_4a3c6;);	// 71181                  mov     ah, byte_4A3C6 ;~ 274D:076D
cs=0x274d;eip=0x000771; 	J(CALLF(sub_49a3e,0));	// 71182                  call    far ptr sub_49A3E ;~ 274D:0771
seg35ab_776_proc:
	// 71186 
cs=0x274d;eip=0x000776; 	J(CALL(sub_37950,0));	// 71186                  call    sub_37950 ;~ 274D:0776
cs=0x274d;eip=0x000779; 	J(CALL(sub_37766,0));	// 71187                  call    sub_37766 ;~ 274D:0779
cs=0x274d;eip=0x00077c; 	J(JNC(loc_36272));	// 71188                  jnb     short loc_36272 ;~ 274D:077C
loc_3622e:
	// 6931 
cs=0x274d;eip=0x00077e; 	T(CMP(word_4a49e, 0));	// 71192                  cmp     word_4A49E, 0 ;~ 274D:077E
cs=0x274d;eip=0x000783; 	J(JS(loc_36248));	// 71193                  js      short loc_36248 ;~ 274D:0783
cs=0x274d;eip=0x000785; 	T(ah = byte_4a3c7;);	// 71194                  mov     ah, byte_4A3C7 ;~ 274D:0785
cs=0x274d;eip=0x000789; 	J(CALLF(sub_49a3e,0));	// 71195                  call    far ptr sub_49A3E ;~ 274D:0789
cs=0x274d;eip=0x00078e; 	T(CMP(*(byte_4f20c), 2));	// 71197                  cmp     byte_4F20C, 2 ;~ 274D:078E
cs=0x274d;eip=0x000793; 	J(JNZ(loc_36248));	// 71198                  jnz     short loc_36248 ;~ 274D:0793
cs=0x274d;eip=0x000795; 	J(JMP(loc_3632e));	// 71199                  jmp     loc_3632E ;~ 274D:0795
loc_36248:
	// 6932 
cs=0x274d;eip=0x000798; 	T(SUB(si, si));	// 71204                  sub     si, si ;~ 274D:0798
cs=0x274d;eip=0x00079a; 	T(di = si;);	// 71205                  mov     di, si ;~ 274D:079A
cs=0x274d;eip=0x00079c; 	T(dx = word_4d789;);	// 71206                  mov     dx, word_4D789 ;~ 274D:079C
cs=0x274d;eip=0x0007a0; 	J(CALL(sub_37986,0));	// 71207                  call    sub_37986 ;~ 274D:07A0
cs=0x274d;eip=0x0007a3; 	T(si = word_4d787;);	// 71208                  mov     si, word_4D787 ;~ 274D:07A3
cs=0x274d;eip=0x0007a7; 	T(SUB(di, di));	// 71209                  sub     di, di ;~ 274D:07A7
cs=0x274d;eip=0x0007a9; 	T(dx = word_4d789;);	// 71210                  mov     dx, word_4D789 ;~ 274D:07A9
cs=0x274d;eip=0x0007ad; 	J(CALL(sub_37986,0));	// 71211                  call    sub_37986 ;~ 274D:07AD
cs=0x274d;eip=0x0007b0; 	T(ax = word_4db09;);	// 71212                  mov     ax, word_4DB09 ;~ 274D:07B0
cs=0x274d;eip=0x0007b3; 	T(cx = word_4db0b;);	// 71213                  mov     cx, word_4DB0B ;~ 274D:07B3
cs=0x274d;eip=0x0007b7; 	T(bx = 0x4CB5;);	// 71214                  mov     bx, 4CB5h ;~ 274D:07B7
cs=0x274d;eip=0x0007ba; 	J(CALLF(sub_49a57,0));	// 71215                  call    far ptr sub_49A57 ;~ 274D:07BA
cs=0x274d;eip=0x0007bf; 	J(JMP(loc_3632e));	// 71217                  jmp     loc_3632E ;~ 274D:07BF
loc_36272:
	// 6933 
cs=0x274d;eip=0x0007c2; 	T(ax = word_4d791;);	// 71221                  mov     ax, word_4D791 ;~ 274D:07C2
cs=0x274d;eip=0x0007c5; 	T(CMP(ax, word_4d793));	// 71222                  cmp     ax, word_4D793 ;~ 274D:07C5
cs=0x274d;eip=0x0007c9; 	J(JNZ(loc_36285));	// 71223                  jnz     short loc_36285 ;~ 274D:07C9
cs=0x274d;eip=0x0007cb; 	T(OR(ax, ax));	// 71224                  or      ax, ax ;~ 274D:07CB
cs=0x274d;eip=0x0007cd; 	J(JZ(loc_3622e));	// 71225                  jz      short loc_3622E ;~ 274D:07CD
cs=0x274d;eip=0x0007cf; 	T(CMP(ax, word_4d789));	// 71226                  cmp     ax, word_4D789 ;~ 274D:07CF
cs=0x274d;eip=0x0007d3; 	J(JZ(loc_3622e));	// 71227                  jz      short loc_3622E ;~ 274D:07D3
loc_36285:
	// 6934 
cs=0x274d;eip=0x0007d5; 	X(PUSH(word_4d78d));	// 71231                  push    word_4D78D ;~ 274D:07D5
cs=0x274d;eip=0x0007d9; 	X(PUSH(word_4d791));	// 71232                  push    word_4D791 ;~ 274D:07D9
cs=0x274d;eip=0x0007dd; 	X(PUSH(word_4d78f));	// 71233                  push    word_4D78F ;~ 274D:07DD
cs=0x274d;eip=0x0007e1; 	X(PUSH(word_4d793));	// 71234                  push    word_4D793 ;~ 274D:07E1
cs=0x274d;eip=0x0007e5; 	J(CALL(sub_37ad8,0));	// 71235                  call    sub_37AD8 ;~ 274D:07E5
cs=0x274d;eip=0x0007e8; 	X(POP(word_4d793));	// 71236                  pop     word_4D793 ;~ 274D:07E8
cs=0x274d;eip=0x0007ec; 	X(POP(word_4d78f));	// 71237                  pop     word_4D78F ;~ 274D:07EC
cs=0x274d;eip=0x0007f0; 	X(POP(word_4d791));	// 71238                  pop     word_4D791 ;~ 274D:07F0
cs=0x274d;eip=0x0007f4; 	X(POP(word_4d78d));	// 71239                  pop     word_4D78D ;~ 274D:07F4
cs=0x274d;eip=0x0007f8; 	T(SUB(ax, ax));	// 71240                  sub     ax, ax ;~ 274D:07F8
cs=0x274d;eip=0x0007fa; 	T(si = word_4a3c8;);	// 71241                  mov     si, word_4A3C8 ;~ 274D:07FA
cs=0x274d;eip=0x0007fe; 	T(XOR(si, word_4a3c4));	// 71242                  xor     si, word_4A3C4 ;~ 274D:07FE
cs=0x274d;eip=0x000802; 	J(JNS(loc_362b7));	// 71243                  jns     short loc_362B7 ;~ 274D:0802
cs=0x274d;eip=0x000804; 	T(ax = word_4d787;);	// 71244                  mov     ax, word_4D787 ;~ 274D:0804
loc_362b7:
	// 6935 
cs=0x274d;eip=0x000807; 	X(word_4a3c2 = ax;);	// 71247                  mov     word_4A3C2, ax ;~ 274D:0807
cs=0x274d;eip=0x00080a; 	T(SUB(bx, bx));	// 71248                  sub     bx, bx ;~ 274D:080A
cs=0x274d;eip=0x00080c; 	T(bp = word_4d789;);	// 71249                  mov     bp, word_4D789 ;~ 274D:080C
cs=0x274d;eip=0x000810; 	T(si = word_4a3c8;);	// 71250                  mov     si, word_4A3C8 ;~ 274D:0810
cs=0x274d;eip=0x000814; 	T(XOR(si, word_4a4a4));	// 71251                  xor     si, word_4A4A4 ;~ 274D:0814
cs=0x274d;eip=0x000818; 	J(JNS(loc_362cc));	// 71252                  jns     short loc_362CC ;~ 274D:0818
cs=0x274d;eip=0x00081a; 	T(XCHG(bx, bp));	// 71253                  xchg    bx, bp ;~ 274D:081A
loc_362cc:
	// 6936 
cs=0x274d;eip=0x00081c; 	T(si = word_4d78d;);	// 71256                  mov     si, word_4D78D ;~ 274D:081C
cs=0x274d;eip=0x000820; 	T(di = word_4d791;);	// 71257                  mov     di, word_4D791 ;~ 274D:0820
cs=0x274d;eip=0x000824; 	T(CMP(di, bx));	// 71258                  cmp     di, bx ;~ 274D:0824
cs=0x274d;eip=0x000826; 	J(JZ(loc_362e7));	// 71259                  jz      short loc_362E7 ;~ 274D:0826
cs=0x274d;eip=0x000828; 	T(CMP(di, bp));	// 71260                  cmp     di, bp ;~ 274D:0828
cs=0x274d;eip=0x00082a; 	J(JNZ(loc_362e2));	// 71261                  jnz     short loc_362E2 ;~ 274D:082A
cs=0x274d;eip=0x00082c; 	T(di = bp;);	// 71262                  mov     di, bp ;~ 274D:082C
cs=0x274d;eip=0x00082e; 	T(si = word_4a3c2;);	// 71263                  mov     si, word_4A3C2 ;~ 274D:082E
loc_362e2:
	// 6937 
cs=0x274d;eip=0x000832; 	T(dx = bx;);	// 71266                  mov     dx, bx ;~ 274D:0832
cs=0x274d;eip=0x000834; 	J(CALL(sub_37986,0));	// 71267                  call    sub_37986 ;~ 274D:0834
loc_362e7:
	// 6938 
cs=0x274d;eip=0x000837; 	T(si = word_4d78f;);	// 71270                  mov     si, word_4D78F ;~ 274D:0837
cs=0x274d;eip=0x00083b; 	T(di = word_4d793;);	// 71271                  mov     di, word_4D793 ;~ 274D:083B
cs=0x274d;eip=0x00083f; 	T(CMP(di, bx));	// 71272                  cmp     di, bx ;~ 274D:083F
cs=0x274d;eip=0x000841; 	J(JZ(loc_36302));	// 71273                  jz      short loc_36302 ;~ 274D:0841
cs=0x274d;eip=0x000843; 	T(CMP(di, bp));	// 71274                  cmp     di, bp ;~ 274D:0843
cs=0x274d;eip=0x000845; 	J(JNZ(loc_362fd));	// 71275                  jnz     short loc_362FD ;~ 274D:0845
cs=0x274d;eip=0x000847; 	T(di = bp;);	// 71276                  mov     di, bp ;~ 274D:0847
cs=0x274d;eip=0x000849; 	T(si = word_4a3c2;);	// 71277                  mov     si, word_4A3C2 ;~ 274D:0849
loc_362fd:
	// 6939 
cs=0x274d;eip=0x00084d; 	T(dx = bx;);	// 71280                  mov     dx, bx ;~ 274D:084D
cs=0x274d;eip=0x00084f; 	J(CALL(sub_37986,0));	// 71281                  call    sub_37986 ;~ 274D:084F
loc_36302:
	// 6940 
cs=0x274d;eip=0x000852; 	T(ax = word_4db09;);	// 71284                  mov     ax, word_4DB09 ;~ 274D:0852
cs=0x274d;eip=0x000855; 	T(cx = word_4db0b;);	// 71285                  mov     cx, word_4DB0B ;~ 274D:0855
cs=0x274d;eip=0x000859; 	T(bx = 0x4CB5;);	// 71286                  mov     bx, 4CB5h ;~ 274D:0859
cs=0x274d;eip=0x00085c; 	J(CALLF(sub_49a57,0));	// 71287                  call    far ptr sub_49A57 ;~ 274D:085C
cs=0x274d;eip=0x000861; 	T(CMP(*(byte_4f20c), 2));	// 71289                  cmp     byte_4F20C, 2 ;~ 274D:0861
cs=0x274d;eip=0x000866; 	J(JZ(loc_3632e));	// 71290                  jz      short loc_3632E ;~ 274D:0866
cs=0x274d;eip=0x000868; 	X(XOR(word_4a3c8, 0x0FFFF));	// 71291                  xor     word_4A3C8, 0FFFFh ;~ 274D:0868
cs=0x274d;eip=0x00086d; 	J(JZ(loc_3632e));	// 71292                  jz      short loc_3632E ;~ 274D:086D
cs=0x274d;eip=0x00086f; 	T(ah = byte_4a3c7;);	// 71293                  mov     ah, byte_4A3C7 ;~ 274D:086F
cs=0x274d;eip=0x000873; 	J(CALLF(sub_49a3e,0));	// 71294                  call    far ptr sub_49A3E ;~ 274D:0873
cs=0x274d;eip=0x000878; 	J(CALL(sub_37950,0));	// 71296                  call    sub_37950 ;~ 274D:0878
cs=0x274d;eip=0x00087b; 	J(JMP(loc_36285));	// 71297                  jmp     loc_36285 ;~ 274D:087B
loc_3632e:
	// 6941 
cs=0x274d;eip=0x00087e; 	J(CALLF(sub_49a48,0));	// 71302                  call    far ptr sub_49A48 ;~ 274D:087E
cs=0x274d;eip=0x000883; 	J(RETN(0));	// 71304                  retn ;~ 274D:0883

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_36150: 	goto loc_36150;
        case m2c::kloc_3616e: 	goto loc_3616e;
        case m2c::kloc_3617b: 	goto loc_3617b;
        case m2c::kloc_36184: 	goto loc_36184;
        case m2c::kloc_3622e: 	goto loc_3622e;
        case m2c::kloc_36248: 	goto loc_36248;
        case m2c::kloc_36272: 	goto loc_36272;
        case m2c::kloc_36285: 	goto loc_36285;
        case m2c::kloc_362b7: 	goto loc_362b7;
        case m2c::kloc_362cc: 	goto loc_362cc;
        case m2c::kloc_362e2: 	goto loc_362e2;
        case m2c::kloc_362e7: 	goto loc_362e7;
        case m2c::kloc_362fd: 	goto loc_362fd;
        case m2c::kloc_36302: 	goto loc_36302;
        case m2c::kloc_3632e: 	goto loc_3632e;
        case m2c::kseg35ab_776_proc: 	goto seg35ab_776_proc;
        case m2c::ksub_3612e: 	goto sub_3612e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36334(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36334:
    _begin:
#undef arg_0
#define arg_0 6
	// 71313 arg_0           = dword ptr  6 ;~ 274D:0884
#undef arg_4
#define arg_4 0x0A
	// 71314 arg_4           = word ptr  0Ah ;~ 274D:0884
#undef arg_6
#define arg_6 0x0C
	// 71315 arg_6           = word ptr  0Ch ;~ 274D:0884
#undef arg_8
#define arg_8 0x0E
	// 71316 arg_8           = word ptr  0Eh ;~ 274D:0884
#undef arg_a
#define arg_a 0x10
	// 71317 arg_A           = word ptr  10h ;~ 274D:0884
#undef arg_c
#define arg_c 0x12
	// 71318 arg_C           = word ptr  12h ;~ 274D:0884
#undef arg_e
#define arg_e 0x14
	// 71319 arg_E           = word ptr  14h ;~ 274D:0884
cs=0x274d;eip=0x000884; 	X(PUSH(bp));	// 71321                  push    bp ;~ 274D:0884
cs=0x274d;eip=0x000885; 	T(bp = sp;);	// 71322                  mov     bp, sp ;~ 274D:0885
cs=0x274d;eip=0x000887; 	X(PUSH(si));	// 71323                  push    si ;~ 274D:0887
cs=0x274d;eip=0x000888; 	X(PUSH(di));	// 71324                  push    di ;~ 274D:0888
cs=0x274d;eip=0x000889; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 71325                  mov     ax, [bp+arg_4] ;~ 274D:0889
cs=0x274d;eip=0x00088c; 	X(word_4a476 = ax;);	// 71326                  mov     word_4A476, ax ;~ 274D:088C
cs=0x274d;eip=0x00088f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 71327                  mov     ax, [bp+arg_6] ;~ 274D:088F
cs=0x274d;eip=0x000892; 	X(word_4a478 = ax;);	// 71328                  mov     word_4A478, ax ;~ 274D:0892
cs=0x274d;eip=0x000895; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 71329                  mov     ax, [bp+arg_8] ;~ 274D:0895
cs=0x274d;eip=0x000898; 	X(word_4a47a = ax;);	// 71330                  mov     word_4A47A, ax ;~ 274D:0898
cs=0x274d;eip=0x00089b; 	T(LES(si, *(dd*)(raddr(ss,bp+arg_0))));	// 71331                  les     si, [bp+arg_0] ;~ 274D:089B
cs=0x274d;eip=0x00089e; 	X(*(dw*)(&dword_4a46c) = si;);	// 71333                  mov     word ptr dword_4A46C, si ;~ 274D:089E
cs=0x274d;eip=0x0008a2; 	X(*(dw*)(((db*)&dword_4a46c)+2) = es;);	// 71334                  mov     word ptr dword_4A46C+2, es ;~ 274D:08A2
cs=0x274d;eip=0x0008a6; 	X(LODS(*(raddr(es,si)),si,1));	// 71335                  lods    byte ptr es:[si] ;~ 274D:08A6
cs=0x274d;eip=0x0008a8; 	X(*(db*)(&word_4a492) = al;);	// 71336                  mov     byte ptr word_4A492, al ;~ 274D:08A8
cs=0x274d;eip=0x0008ab; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_c))));	// 71337                  mov     bx, [bp+arg_C] ;~ 274D:08AB
cs=0x274d;eip=0x0008ae; 	T(SUB(bx, word_4a496));	// 71338                  sub     bx, word_4A496 ;~ 274D:08AE
cs=0x274d;eip=0x0008b2; 	X(word_4a472 = bx;);	// 71339                  mov     word_4A472, bx ;~ 274D:08B2
cs=0x274d;eip=0x0008b6; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_e))));	// 71340                  mov     cx, [bp+arg_E] ;~ 274D:08B6
cs=0x274d;eip=0x0008b9; 	T(SUB(cx, word_4a498));	// 71341                  sub     cx, word_4A498 ;~ 274D:08B9
cs=0x274d;eip=0x0008bd; 	X(word_4a474 = cx;);	// 71342                  mov     word_4A474, cx ;~ 274D:08BD
cs=0x274d;eip=0x0008c1; 	T(MOV(bp, *(dw*)(raddr(ss,bp+arg_a))));	// 71343                  mov     bp, [bp+arg_A] ;~ 274D:08C1
cs=0x274d;eip=0x0008c4; 	T(SUB(bp, word_4a494));	// 71344                  sub     bp, word_4A494 ;~ 274D:08C4
cs=0x274d;eip=0x0008c8; 	X(word_4a470 = bp;);	// 71345                  mov     word_4A470, bp ;~ 274D:08C8
cs=0x274d;eip=0x0008cc; 	J(CALL(sub_363b8,0));	// 71346                  call    sub_363B8 ;~ 274D:08CC
cs=0x274d;eip=0x0008cf; 	J(JNZ(loc_363b4));	// 71347                  jnz     short loc_363B4 ;~ 274D:08CF
cs=0x274d;eip=0x0008d1; 	J(CALL(sub_364b9,0));	// 71348                  call    sub_364B9 ;~ 274D:08D1
cs=0x274d;eip=0x0008d4; 	T(CMP(si, 1));	// 71349                  cmp     si, 1 ;~ 274D:08D4
cs=0x274d;eip=0x0008d7; 	J(JNZ(loc_36390));	// 71350                  jnz     short loc_36390 ;~ 274D:08D7
cs=0x274d;eip=0x0008d9; 	T(CMP(*(dw*)(byte_4f20c), 2));	// 71351                  cmp     word ptr byte_4F20C, 2 ;~ 274D:08D9
cs=0x274d;eip=0x0008de; 	J(JNZ(loc_363b4));	// 71352                  jnz     short loc_363B4 ;~ 274D:08DE
loc_36390:
	// 6942 
cs=0x274d;eip=0x0008e0; 	T(cl = al;);	// 71355                  mov     cl, al ;~ 274D:08E0
cs=0x274d;eip=0x0008e2; 	T(AND(al, 0x60));	// 71356                  and     al, 60h ;~ 274D:08E2
cs=0x274d;eip=0x0008e4; 	T(CMP(al, 0x60));	// 71357                  cmp     al, 60h ; '`' ;~ 274D:08E4
cs=0x274d;eip=0x0008e6; 	J(JNZ(loc_3639b));	// 71358                  jnz     short loc_3639B ;~ 274D:08E6
cs=0x274d;eip=0x0008e8; 	J(CALL(sub_364e6,0));	// 71359                  call    sub_364E6 ;~ 274D:08E8
loc_3639b:
	// 6943 
cs=0x274d;eip=0x0008eb; 	T(TEST(cl, 0x40));	// 71362                  test    cl, 40h ;~ 274D:08EB
cs=0x274d;eip=0x0008ee; 	J(JNZ(loc_363ab));	// 71363                  jnz     short loc_363AB ;~ 274D:08EE
cs=0x274d;eip=0x0008f0; 	T(ax = word_4a498;);	// 71364                  mov     ax, word_4A498 ;~ 274D:08F0
cs=0x274d;eip=0x0008f3; 	T(NEG(ax));	// 71365                  neg     ax ;~ 274D:08F3
cs=0x274d;eip=0x0008f5; 	T(CMP(ax, word_4a474));	// 71366                  cmp     ax, word_4A474 ;~ 274D:08F5
cs=0x274d;eip=0x0008f9; 	J(JZ(loc_363b1));	// 71367                  jz      short loc_363B1 ;~ 274D:08F9
loc_363ab:
	// 6944 
cs=0x274d;eip=0x0008fb; 	J(CALL(sub_36530,0));	// 71370                  call    sub_36530 ;~ 274D:08FB
cs=0x274d;eip=0x0008fe; 	J(JMP(loc_363b4));	// 71372                  jmp     short loc_363B4 ;~ 274D:08FE
loc_363b1:
	// 6945 
cs=0x274d;eip=0x000901; 	J(CALL(sub_36697,0));	// 71379                  call    sub_36697 ;~ 274D:0901
loc_363b4:
	// 6946 
cs=0x274d;eip=0x000904; 	X(POP(di));	// 71383                  pop     di ;~ 274D:0904
cs=0x274d;eip=0x000905; 	X(POP(si));	// 71384                  pop     si ;~ 274D:0905
cs=0x274d;eip=0x000906; 	X(POP(bp));	// 71385                  pop     bp ;~ 274D:0906
cs=0x274d;eip=0x000907; 	J(RETF(0));	// 71386                  retf ;~ 274D:0907

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_36390: 	goto loc_36390;
        case m2c::kloc_3639b: 	goto loc_3639b;
        case m2c::kloc_363ab: 	goto loc_363ab;
        case m2c::kloc_363b1: 	goto loc_363b1;
        case m2c::kloc_363b4: 	goto loc_363b4;
        case m2c::ksub_36334: 	goto sub_36334;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_363b8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_363b8:
    _begin:
cs=0x274d;eip=0x000908; 	X(PUSH(si));	// 71395                  push    si ;~ 274D:0908
cs=0x274d;eip=0x000909; 	T(ax = word_4a4b2;);	// 71396                  mov     ax, word_4A4B2 ;~ 274D:0909
cs=0x274d;eip=0x00090c; 	T(IMUL1_2(bx));	// 71397                  imul    bx ;~ 274D:090C
cs=0x274d;eip=0x00090e; 	T(di = dx;);	// 71398                  mov     di, dx ;~ 274D:090E
cs=0x274d;eip=0x000910; 	T(si = ax;);	// 71399                  mov     si, ax ;~ 274D:0910
cs=0x274d;eip=0x000912; 	T(ax = word_4a4ac;);	// 71400                  mov     ax, word_4A4AC ;~ 274D:0912
cs=0x274d;eip=0x000915; 	T(IMUL1_2(cx));	// 71401                  imul    cx ;~ 274D:0915
cs=0x274d;eip=0x000917; 	T(ADD(si, ax));	// 71402                  add     si, ax ;~ 274D:0917
cs=0x274d;eip=0x000919; 	T(ADC(di, dx));	// 71403                  adc     di, dx ;~ 274D:0919
cs=0x274d;eip=0x00091b; 	T(ax = word_4a4a6;);	// 71404                  mov     ax, word_4A4A6 ;~ 274D:091B
cs=0x274d;eip=0x00091e; 	T(IMUL1_2(bp));	// 71405                  imul    bp ;~ 274D:091E
cs=0x274d;eip=0x000920; 	T(ADD(si, ax));	// 71406                  add     si, ax ;~ 274D:0920
cs=0x274d;eip=0x000922; 	T(ADC(di, dx));	// 71407                  adc     di, dx ;~ 274D:0922
cs=0x274d;eip=0x000924; 	T(SHL(si, 1));	// 71408                  shl     si, 1 ;~ 274D:0924
cs=0x274d;eip=0x000926; 	T(RCL(di, 1));	// 71409                  rcl     di, 1 ;~ 274D:0926
cs=0x274d;eip=0x000928; 	X(word_4a47c = si;);	// 71410                  mov     word_4A47C, si ;~ 274D:0928
cs=0x274d;eip=0x00092c; 	X(word_4a47e = di;);	// 71411                  mov     word_4A47E, di ;~ 274D:092C
cs=0x274d;eip=0x000930; 	T(ax = word_4a4b4;);	// 71412                  mov     ax, word_4A4B4 ;~ 274D:0930
cs=0x274d;eip=0x000933; 	T(IMUL1_2(bx));	// 71413                  imul    bx ;~ 274D:0933
cs=0x274d;eip=0x000935; 	T(di = dx;);	// 71414                  mov     di, dx ;~ 274D:0935
cs=0x274d;eip=0x000937; 	T(si = ax;);	// 71415                  mov     si, ax ;~ 274D:0937
cs=0x274d;eip=0x000939; 	T(ax = word_4a4ae;);	// 71416                  mov     ax, word_4A4AE ;~ 274D:0939
cs=0x274d;eip=0x00093c; 	T(IMUL1_2(cx));	// 71417                  imul    cx ;~ 274D:093C
cs=0x274d;eip=0x00093e; 	T(ADD(si, ax));	// 71418                  add     si, ax ;~ 274D:093E
cs=0x274d;eip=0x000940; 	T(ADC(di, dx));	// 71419                  adc     di, dx ;~ 274D:0940
cs=0x274d;eip=0x000942; 	T(ax = word_4a4a8;);	// 71420                  mov     ax, word_4A4A8 ;~ 274D:0942
cs=0x274d;eip=0x000945; 	T(IMUL1_2(bp));	// 71421                  imul    bp ;~ 274D:0945
cs=0x274d;eip=0x000947; 	T(ADD(si, ax));	// 71422                  add     si, ax ;~ 274D:0947
cs=0x274d;eip=0x000949; 	T(ADC(di, dx));	// 71423                  adc     di, dx ;~ 274D:0949
cs=0x274d;eip=0x00094b; 	T(SHL(si, 1));	// 71424                  shl     si, 1 ;~ 274D:094B
cs=0x274d;eip=0x00094d; 	T(RCL(di, 1));	// 71425                  rcl     di, 1 ;~ 274D:094D
cs=0x274d;eip=0x00094f; 	X(word_4a480 = si;);	// 71426                  mov     word_4A480, si ;~ 274D:094F
cs=0x274d;eip=0x000953; 	X(word_4a482 = di;);	// 71427                  mov     word_4A482, di ;~ 274D:0953
cs=0x274d;eip=0x000957; 	T(ax = word_4a4b6;);	// 71428                  mov     ax, word_4A4B6 ;~ 274D:0957
cs=0x274d;eip=0x00095a; 	T(IMUL1_2(bx));	// 71429                  imul    bx ;~ 274D:095A
cs=0x274d;eip=0x00095c; 	T(di = dx;);	// 71430                  mov     di, dx ;~ 274D:095C
cs=0x274d;eip=0x00095e; 	T(si = ax;);	// 71431                  mov     si, ax ;~ 274D:095E
cs=0x274d;eip=0x000960; 	T(ax = word_4a4b0;);	// 71432                  mov     ax, word_4A4B0 ;~ 274D:0960
cs=0x274d;eip=0x000963; 	T(IMUL1_2(cx));	// 71433                  imul    cx ;~ 274D:0963
cs=0x274d;eip=0x000965; 	T(ADD(si, ax));	// 71434                  add     si, ax ;~ 274D:0965
cs=0x274d;eip=0x000967; 	T(ADC(di, dx));	// 71435                  adc     di, dx ;~ 274D:0967
cs=0x274d;eip=0x000969; 	T(ax = word_4a4aa;);	// 71436                  mov     ax, word_4A4AA ;~ 274D:0969
cs=0x274d;eip=0x00096c; 	T(IMUL1_2(bp));	// 71437                  imul    bp ;~ 274D:096C
cs=0x274d;eip=0x00096e; 	T(ADD(si, ax));	// 71438                  add     si, ax ;~ 274D:096E
cs=0x274d;eip=0x000970; 	T(ADC(di, dx));	// 71439                  adc     di, dx ;~ 274D:0970
cs=0x274d;eip=0x000972; 	T(SHL(si, 1));	// 71440                  shl     si, 1 ;~ 274D:0972
cs=0x274d;eip=0x000974; 	T(RCL(di, 1));	// 71441                  rcl     di, 1 ;~ 274D:0974
cs=0x274d;eip=0x000976; 	X(word_4a484 = si;);	// 71442                  mov     word_4A484, si ;~ 274D:0976
cs=0x274d;eip=0x00097a; 	X(word_4a486 = di;);	// 71443                  mov     word_4A486, di ;~ 274D:097A
cs=0x274d;eip=0x00097e; 	T(CMP(di, *(word_4a3ec)));	// 71444                  cmp     di, word_4A3EC ;~ 274D:097E
cs=0x274d;eip=0x000982; 	J(JG(loc_364b2));	// 71445                  jg      short loc_364B2 ;~ 274D:0982
cs=0x274d;eip=0x000984; 	T(bx = word_4a492;);	// 71446                  mov     bx, word_4A492 ;~ 274D:0984
cs=0x274d;eip=0x000988; 	T(SHL(bx, 1));	// 71447                  shl     bx, 1 ;~ 274D:0988
cs=0x274d;eip=0x00098a; 	T(CMP(di, *(dw*)(raddr(ds,bx+0x191C))));	// 71448                  cmp     di, [bx+191Ch] ;~ 274D:098A
cs=0x274d;eip=0x00098e; 	J(JL(loc_364b2));	// 71449                  jl      short loc_364B2 ;~ 274D:098E
cs=0x274d;eip=0x000990; 	T(si = word_528cc;);	// 71450                  mov     si, word_528CC ;~ 274D:0990
cs=0x274d;eip=0x000994; 	T(bp = word_528d2;);	// 71451                  mov     bp, word_528D2 ;~ 274D:0994
cs=0x274d;eip=0x000998; 	T(ADD(si, bx));	// 71452                  add     si, bx ;~ 274D:0998
cs=0x274d;eip=0x00099a; 	T(ADD(bp, bx));	// 71453                  add     bp, bx ;~ 274D:099A
cs=0x274d;eip=0x00099c; 	T(cl = byte_4de54;);	// 71454                  mov     cl, byte_4DE54 ;~ 274D:099C
cs=0x274d;eip=0x0009a0; 	T(XOR(cl, 1));	// 71455                  xor     cl, 1 ;~ 274D:09A0
cs=0x274d;eip=0x0009a3; 	T(ax = di;);	// 71456                  mov     ax, di ;~ 274D:09A3
cs=0x274d;eip=0x0009a5; 	T(CWD);	// 71457                  cwd ;~ 274D:09A5
cs=0x274d;eip=0x0009a6; 	T(XOR(ax, dx));	// 71458                  xor     ax, dx ;~ 274D:09A6
cs=0x274d;eip=0x0009a8; 	T(SUB(ax, dx));	// 71459                  sub     ax, dx ;~ 274D:09A8
cs=0x274d;eip=0x0009aa; 	T(di = ax;);	// 71460                  mov     di, ax ;~ 274D:09AA
cs=0x274d;eip=0x0009ac; 	T(ADD(ax, *(dw*)(raddr(ds,si))));	// 71461                  add     ax, [si] ;~ 274D:09AC
cs=0x274d;eip=0x0009ae; 	T(SAR(ax, cl));	// 71462                  sar     ax, cl ;~ 274D:09AE
cs=0x274d;eip=0x0009b0; 	T(si = ax;);	// 71463                  mov     si, ax ;~ 274D:09B0
cs=0x274d;eip=0x0009b2; 	T(SAR(si, 1));	// 71464                  sar     si, 1 ;~ 274D:09B2
cs=0x274d;eip=0x0009b4; 	T(SAR(si, 1));	// 71465                  sar     si, 1 ;~ 274D:09B4
cs=0x274d;eip=0x0009b6; 	T(ADD(si, ax));	// 71466                  add     si, ax ;~ 274D:09B6
cs=0x274d;eip=0x0009b8; 	T(ax = word_4a47e;);	// 71467                  mov     ax, word_4A47E ;~ 274D:09B8
cs=0x274d;eip=0x0009bb; 	T(CWD);	// 71468                  cwd ;~ 274D:09BB
cs=0x274d;eip=0x0009bc; 	T(XOR(ax, dx));	// 71469                  xor     ax, dx ;~ 274D:09BC
cs=0x274d;eip=0x0009be; 	T(SUB(ax, dx));	// 71470                  sub     ax, dx ;~ 274D:09BE
cs=0x274d;eip=0x0009c0; 	T(CMP(ax, si));	// 71471                  cmp     ax, si ;~ 274D:09C0
cs=0x274d;eip=0x0009c2; 	J(JG(loc_364b2));	// 71472                  jg      short loc_364B2 ;~ 274D:09C2
cs=0x274d;eip=0x0009c4; 	T(si = ax;);	// 71473                  mov     si, ax ;~ 274D:09C4
cs=0x274d;eip=0x0009c6; 	T(ax = di;);	// 71474                  mov     ax, di ;~ 274D:09C6
cs=0x274d;eip=0x0009c8; 	T(ADD(ax, *(dw*)(raddr(ss,bp+0))));	// 71475                  add     ax, [bp+0] ;~ 274D:09C8
cs=0x274d;eip=0x0009cb; 	T(SAR(ax, cl));	// 71476                  sar     ax, cl ;~ 274D:09CB
cs=0x274d;eip=0x0009cd; 	T(bx = ax;);	// 71477                  mov     bx, ax ;~ 274D:09CD
cs=0x274d;eip=0x0009cf; 	T(CMP(*(db*)(&word_492f2), 0));	// 71478                  cmp     byte ptr word_492F2, 0 ;~ 274D:09CF
cs=0x274d;eip=0x0009d4; 	J(JZ(loc_36490));	// 71479                  jz      short loc_36490 ;~ 274D:09D4
cs=0x274d;eip=0x0009d6; 	T(SAR(bx, 1));	// 71480                  sar     bx, 1 ;~ 274D:09D6
cs=0x274d;eip=0x0009d8; 	T(SAR(bx, 1));	// 71481                  sar     bx, 1 ;~ 274D:09D8
cs=0x274d;eip=0x0009da; 	T(SAR(bx, 1));	// 71482                  sar     bx, 1 ;~ 274D:09DA
cs=0x274d;eip=0x0009dc; 	T(ADD(bx, ax));	// 71483                  add     bx, ax ;~ 274D:09DC
cs=0x274d;eip=0x0009de; 	T(SAR(bx, 1));	// 71484                  sar     bx, 1 ;~ 274D:09DE
loc_36490:
	// 6947 
cs=0x274d;eip=0x0009e0; 	T(ax = word_4a482;);	// 71487                  mov     ax, word_4A482 ;~ 274D:09E0
cs=0x274d;eip=0x0009e3; 	T(CWD);	// 71488                  cwd ;~ 274D:09E3
cs=0x274d;eip=0x0009e4; 	T(XOR(ax, dx));	// 71489                  xor     ax, dx ;~ 274D:09E4
cs=0x274d;eip=0x0009e6; 	T(SUB(ax, dx));	// 71490                  sub     ax, dx ;~ 274D:09E6
cs=0x274d;eip=0x0009e8; 	T(CMP(ax, bx));	// 71491                  cmp     ax, bx ;~ 274D:09E8
cs=0x274d;eip=0x0009ea; 	J(JG(loc_364b2));	// 71492                  jg      short loc_364B2 ;~ 274D:09EA
cs=0x274d;eip=0x0009ec; 	T(ADD(si, ax));	// 71493                  add     si, ax ;~ 274D:09EC
cs=0x274d;eip=0x0009ee; 	T(SAR(si, 1));	// 71494                  sar     si, 1 ;~ 274D:09EE
cs=0x274d;eip=0x0009f0; 	T(SAR(si, 1));	// 71495                  sar     si, 1 ;~ 274D:09F0
cs=0x274d;eip=0x0009f2; 	T(ADD(si, di));	// 71496                  add     si, di ;~ 274D:09F2
cs=0x274d;eip=0x0009f4; 	X(word_4a490 = si;);	// 71497                  mov     word_4A490, si ;~ 274D:09F4
cs=0x274d;eip=0x0009f8; 	T(CMP(si, *(word_4a3ec)));	// 71498                  cmp     si, word_4A3EC ;~ 274D:09F8
cs=0x274d;eip=0x0009fc; 	J(JG(loc_364b2));	// 71499                  jg      short loc_364B2 ;~ 274D:09FC
cs=0x274d;eip=0x0009fe; 	T(SUB(ax, ax));	// 71500                  sub     ax, ax ;~ 274D:09FE
cs=0x274d;eip=0x000a00; 	X(POP(si));	// 71501                  pop     si ;~ 274D:0A00
cs=0x274d;eip=0x000a01; 	J(RETN(0));	// 71502                  retn ;~ 274D:0A01
loc_364b2:
	// 6948 
cs=0x274d;eip=0x000a02; 	T(ax = 1;);	// 71507                  mov     ax, 1 ;~ 274D:0A02
cs=0x274d;eip=0x000a05; 	T(OR(ax, ax));	// 71508                  or      ax, ax ;~ 274D:0A05
cs=0x274d;eip=0x000a07; 	X(POP(si));	// 71509                  pop     si ;~ 274D:0A07
cs=0x274d;eip=0x000a08; 	J(RETN(0));	// 71510                  retn ;~ 274D:0A08

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_36490: 	goto loc_36490;
        case m2c::kloc_364b2: 	goto loc_364b2;
        case m2c::ksub_363b8: 	goto sub_363b8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_364b9(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_364b9:
    _begin:
cs=0x274d;eip=0x000a09; 	T(MOV(al, *(raddr(es,si))));	// 71519                  mov     al, es:[si] ;~ 274D:0A09
cs=0x274d;eip=0x000a0c; 	T(TEST(al, 0x80));	// 71520                  test    al, 80h ;~ 274D:0A0C
cs=0x274d;eip=0x000a0e; 	J(JZ(locret_364e1));	// 71521                  jz      short locret_364E1 ;~ 274D:0A0E
cs=0x274d;eip=0x000a10; 	T(AND(ax, 7));	// 71522                  and     ax, 7 ;~ 274D:0A10
cs=0x274d;eip=0x000a13; 	T(SHL(ax, 1));	// 71523                  shl     ax, 1 ;~ 274D:0A13
cs=0x274d;eip=0x000a15; 	T(bx = ax;);	// 71524                  mov     bx, ax ;~ 274D:0A15
cs=0x274d;eip=0x000a17; 	T(ax = word_4a490;);	// 71525                  mov     ax, word_4A490 ;~ 274D:0A17
cs=0x274d;eip=0x000a1a; 	T(cl = *(db*)(&word_4e73e););	// 71526                  mov     cl, byte ptr word_4E73E ;~ 274D:0A1A
cs=0x274d;eip=0x000a1e; 	T(SAR(ax, cl));	// 71527                  sar     ax, cl ;~ 274D:0A1E
cs=0x274d;eip=0x000a20; 	T(CMP(ax, *(dw*)(raddr(ds,bx+0x18FC))));	// 71528                  cmp     ax, [bx+18FCh] ;~ 274D:0A20
cs=0x274d;eip=0x000a24; 	J(JLE(loc_364dc));	// 71529                  jle     short loc_364DC ;~ 274D:0A24
cs=0x274d;eip=0x000a26; 	T(ADD(si, *(dw*)(raddr(es,si+1))));	// 71530                  add     si, es:[si+1] ;~ 274D:0A26
cs=0x274d;eip=0x000a2a; 	J(JMP(sub_364b9));	// 71531                  jmp     short sub_364B9 ;~ 274D:0A2A
loc_364dc:
	// 6949 
cs=0x274d;eip=0x000a2c; 	T(ADD(si, 3));	// 71535                  add     si, 3 ;~ 274D:0A2C
cs=0x274d;eip=0x000a2f; 	J(JMP(sub_364b9));	// 71536                  jmp     short sub_364B9 ;~ 274D:0A2F
locret_364e1:
	// 6950 
cs=0x274d;eip=0x000a31; 	J(RETN(0));	// 71540                  retn ;~ 274D:0A31

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_364dc: 	goto loc_364dc;
        case m2c::klocret_364e1: 	goto locret_364e1;
        case m2c::ksub_364b9: 	goto sub_364b9;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group78(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group78:
    _begin:
seg35ab_a32_proc:
	// 71544 
cs=0x274d;eip=0x000a32; 	T(LES(si, dword_4a46c));	// 71544                  les     si, dword_4A46C ;~ 274D:0A32
sub_364e6:
	// 71550 
cs=0x274d;eip=0x000a36; 	X(LODS(*(raddr(es,si)),si,1));	// 71551                  lods    byte ptr es:[si] ;~ 274D:0A36
cs=0x274d;eip=0x000a38; 	T(AND(ax, 3));	// 71552                  and     ax, 3 ;~ 274D:0A38
cs=0x274d;eip=0x000a3b; 	T(SHL(ax, 1));	// 71553                  shl     ax, 1 ;~ 274D:0A3B
cs=0x274d;eip=0x000a3d; 	T(bx = ax;);	// 71554                  mov     bx, ax ;~ 274D:0A3D
cs=0x274d;eip=0x000a3f; 	T(ax = word_4a4ea;);	// 71555                  mov     ax, word_4A4EA ;~ 274D:0A3F
cs=0x274d;eip=0x000a42; 	X(MOV(*(dw*)(raddr(ds,bx+0x1994)), ax));	// 71556                  mov     [bx+1994h], ax ;~ 274D:0A42
cs=0x274d;eip=0x000a46; 	J(RETN(0));	// 71557                  retn ;~ 274D:0A46

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg35ab_a32_proc: 	goto seg35ab_a32_proc;
        case m2c::ksub_364e6: 	goto sub_364e6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_364f7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_364f7:
    _begin:
#undef arg_0
#define arg_0 6
	// 71567 arg_0           = word ptr  6 ;~ 274D:0A47
#undef arg_2
#define arg_2 8
	// 71568 arg_2           = word ptr  8 ;~ 274D:0A47
#undef arg_4
#define arg_4 0x0A
	// 71569 arg_4           = word ptr  0Ah ;~ 274D:0A47
cs=0x274d;eip=0x000a47; 	X(PUSH(bp));	// 71571                  push    bp ;~ 274D:0A47
cs=0x274d;eip=0x000a48; 	T(bp = sp;);	// 71572                  mov     bp, sp ;~ 274D:0A48
cs=0x274d;eip=0x000a4a; 	X(PUSH(di));	// 71573                  push    di ;~ 274D:0A4A
cs=0x274d;eip=0x000a4b; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_4))));	// 71574                  mov     cx, [bp+arg_4] ;~ 274D:0A4B
cs=0x274d;eip=0x000a4e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 71575                  mov     bx, [bp+arg_2] ;~ 274D:0A4E
cs=0x274d;eip=0x000a51; 	T(MOV(bp, *(dw*)(raddr(ss,bp+arg_0))));	// 71576                  mov     bp, [bp+arg_0] ;~ 274D:0A51
cs=0x274d;eip=0x000a54; 	J(CALL(sub_363b8,0));	// 71577                  call    sub_363B8 ;~ 274D:0A54
cs=0x274d;eip=0x000a57; 	X(POP(di));	// 71578                  pop     di ;~ 274D:0A57
cs=0x274d;eip=0x000a58; 	X(POP(bp));	// 71579                  pop     bp ;~ 274D:0A58
cs=0x274d;eip=0x000a59; 	J(RETF(0));	// 71580                  retf ;~ 274D:0A59

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_364f7: 	goto sub_364f7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3650a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3650a:
    _begin:
cs=0x274d;eip=0x000a5a; 	X(PUSH(si));	// 71589                  push    si ;~ 274D:0A5A
cs=0x274d;eip=0x000a5b; 	T(LES(si, dword_4a46c));	// 71590                  les     si, dword_4A46C ;~ 274D:0A5B
cs=0x274d;eip=0x000a5f; 	J(CALL(sub_364b9,0));	// 71592                  call    sub_364B9 ;~ 274D:0A5F
cs=0x274d;eip=0x000a62; 	X(*(dw*)(&dword_4a46c) = si;);	// 71593                  mov     word ptr dword_4A46C, si ;~ 274D:0A62
cs=0x274d;eip=0x000a66; 	X(POP(si));	// 71594                  pop     si ;~ 274D:0A66
cs=0x274d;eip=0x000a67; 	J(RETF(0));	// 71595                  retf ;~ 274D:0A67

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_3650a: 	goto sub_3650a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg35ab_a68_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg35ab_a68_proc:
    _begin:
cs=0x274d;eip=0x000a68; 	X(PUSH(bp));	// 71599                  push    bp ;~ 274D:0A68
cs=0x274d;eip=0x000a69; 	X(PUSH(si));	// 71600                  push    si ;~ 274D:0A69
cs=0x274d;eip=0x000a6a; 	X(PUSH(di));	// 71601                  push    di ;~ 274D:0A6A
cs=0x274d;eip=0x000a6b; 	T(LES(si, dword_4a46c));	// 71602                  les     si, dword_4A46C ;~ 274D:0A6B
cs=0x274d;eip=0x000a6f; 	J(CALL(sub_36530,0));	// 71604                  call    sub_36530 ;~ 274D:0A6F
cs=0x274d;eip=0x000a72; 	X(POP(di));	// 71605                  pop     di ;~ 274D:0A72
cs=0x274d;eip=0x000a73; 	X(POP(si));	// 71606                  pop     si ;~ 274D:0A73
cs=0x274d;eip=0x000a74; 	X(POP(bp));	// 71607                  pop     bp ;~ 274D:0A74
cs=0x274d;eip=0x000a75; 	J(RETN(0));	// 71608                  retn ;~ 274D:0A75

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg35ab_a68_proc: 	goto seg35ab_a68_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36526(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36526:
    _begin:
cs=0x274d;eip=0x000a76; 	X(PUSH(bp));	// 71614                  push    bp ;~ 274D:0A76
cs=0x274d;eip=0x000a77; 	X(PUSH(si));	// 71615                  push    si ;~ 274D:0A77
cs=0x274d;eip=0x000a78; 	X(PUSH(di));	// 71616                  push    di ;~ 274D:0A78
cs=0x274d;eip=0x000a79; 	J(CALL(sub_36610,0));	// 71617                  call    sub_36610 ;~ 274D:0A79
cs=0x274d;eip=0x000a7c; 	X(POP(di));	// 71619                  pop     di ;~ 274D:0A7C
cs=0x274d;eip=0x000a7d; 	X(POP(si));	// 71620                  pop     si ;~ 274D:0A7D
cs=0x274d;eip=0x000a7e; 	X(POP(bp));	// 71621                  pop     bp ;~ 274D:0A7E
cs=0x274d;eip=0x000a7f; 	J(RETF(0));	// 71622                  retf ;~ 274D:0A7F

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_36526: 	goto sub_36526;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36530(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36530:
    _begin:
cs=0x274d;eip=0x000a80; 	X(*(dw*)(&dword_4a46c) = si;);	// 71631                  mov     word ptr dword_4A46C, si ;~ 274D:0A80
cs=0x274d;eip=0x000a84; 	X(*(dw*)(((db*)&dword_4a46c)+2) = es;);	// 71632                  mov     word ptr dword_4A46C+2, es ;~ 274D:0A84
cs=0x274d;eip=0x000a88; 	T(ax = ds;);	// 71633                  mov     ax, ds ;~ 274D:0A88
cs=0x274d;eip=0x000a8a; 	T(es = ax;);	// 71634                  mov     es, ax ;~ 274D:0A8A
cs=0x274d;eip=0x000a8c; 	T(ax = word_4a4dc;);	// 71636                  mov     ax, word_4A4DC ;~ 274D:0A8C
cs=0x274d;eip=0x000a8f; 	T(CMP(ax, 0x23));	// 71637                  cmp     ax, 23h ; '#' ;~ 274D:0A8F
cs=0x274d;eip=0x000a92; 	J(JL(loc_3655c));	// 71638                  jl      short loc_3655C ;~ 274D:0A92
cs=0x274d;eip=0x000a94; 	T(bx = *(_unk_4bd28););	// 71639                  mov     bx, _unk_4BD28 ;~ 274D:0A94
cs=0x274d;eip=0x000a98; 	T(cx = 0x22;);	// 71640                  mov     cx, 22h ; '"' ;~ 274D:0A98
cs=0x274d;eip=0x000a9b; 	T(si = 0x324A;);	// 71641                  mov     si, 324Ah ;~ 274D:0A9B
cs=0x274d;eip=0x000a9e; 	T(di = 0x3248;);	// 71642                  mov     di, 3248h ;~ 274D:0A9E
	// 71643                  rep movsw ;~ 274D:0AA1
cs=0x274d;eip=0x000aa1; 	X(	REP MOVSW);	// 71643                  rep movsw ;~ 274D:0AA1
cs=0x274d;eip=0x000aa3; 	T(di = bx;);	// 71644                  mov     di, bx ;~ 274D:0AA3
cs=0x274d;eip=0x000aa5; 	T(DEC(ax));	// 71645                  dec     ax ;~ 274D:0AA5
cs=0x274d;eip=0x000aa6; 	X(word_4a4dc = ax;);	// 71646                  mov     word_4A4DC, ax ;~ 274D:0AA6
cs=0x274d;eip=0x000aa9; 	J(JMP(loc_36565));	// 71647                  jmp     short loc_36565 ;~ 274D:0AA9
loc_3655c:
	// 6951 
cs=0x274d;eip=0x000aac; 	T(di = 0x2DE8;);	// 71653                  mov     di, 2DE8h ;~ 274D:0AAC
cs=0x274d;eip=0x000aaf; 	T(cl = 5;);	// 71654                  mov     cl, 5 ;~ 274D:0AAF
cs=0x274d;eip=0x000ab1; 	T(SHL(ax, cl));	// 71655                  shl     ax, cl ;~ 274D:0AB1
cs=0x274d;eip=0x000ab3; 	T(ADD(di, ax));	// 71656                  add     di, ax ;~ 274D:0AB3
loc_36565:
	// 6952 
cs=0x274d;eip=0x000ab5; 	T(ax = word_4a484;);	// 71659                  mov     ax, word_4A484 ;~ 274D:0AB5
cs=0x274d;eip=0x000ab8; 	T(dx = word_4a486;);	// 71660                  mov     dx, word_4A486 ;~ 274D:0AB8
cs=0x274d;eip=0x000abc; 	T(cx = *(word_5239c););	// 71661                  mov     cx, word_5239C ;~ 274D:0ABC
cs=0x274d;eip=0x000ac0; 	T(bx = cx;);	// 71662                  mov     bx, cx ;~ 274D:0AC0
cs=0x274d;eip=0x000ac2; 	T(SHL(cx, 1));	// 71663                  shl     cx, 1 ;~ 274D:0AC2
cs=0x274d;eip=0x000ac4; 	T(NEG(cx));	// 71664                  neg     cx ;~ 274D:0AC4
cs=0x274d;eip=0x000ac6; 	T(ADD(cx, 8));	// 71665                  add     cx, 8 ;~ 274D:0AC6
cs=0x274d;eip=0x000ac9; 	J(JZ(loc_36581));	// 71666                  jz      short loc_36581 ;~ 274D:0AC9
loc_3657b:
	// 6953 
cs=0x274d;eip=0x000acb; 	T(SAR(dx, 1));	// 71669                  sar     dx, 1 ;~ 274D:0ACB
cs=0x274d;eip=0x000acd; 	T(RCR(ax, 1));	// 71670                  rcr     ax, 1 ;~ 274D:0ACD
cs=0x274d;eip=0x000acf; 	J(LOOP(loc_3657b));	// 71671                  loop    loc_3657B ;~ 274D:0ACF
loc_36581:
	// 6954 
cs=0x274d;eip=0x000ad1; 	T(CMP(bx, 2));	// 71674                  cmp     bx, 2 ;~ 274D:0AD1
cs=0x274d;eip=0x000ad4; 	J(JNZ(loc_36590));	// 71675                  jnz     short loc_36590 ;~ 274D:0AD4
cs=0x274d;eip=0x000ad6; 	T(CMP(word_4a492, 5));	// 71676                  cmp     word_4A492, 5 ;~ 274D:0AD6
cs=0x274d;eip=0x000adb; 	J(JNZ(loc_36590));	// 71677                  jnz     short loc_36590 ;~ 274D:0ADB
cs=0x274d;eip=0x000add; 	T(ADD(dx, 0x20));	// 71678                  add     dx, 20h ; ' ' ;~ 274D:0ADD
loc_36590:
	// 6955 
cs=0x274d;eip=0x000ae0; 	T(bp = di;);	// 71682                  mov     bp, di ;~ 274D:0AE0
cs=0x274d;eip=0x000ae2; 	X(PUSH(ax));	// 71683                  push    ax ;~ 274D:0AE2
cs=0x274d;eip=0x000ae3; 	X(PUSH(dx));	// 71684                  push    dx ;~ 274D:0AE3
cs=0x274d;eip=0x000ae4; 	X(STOSW);	// 71685                  stosw ;~ 274D:0AE4
cs=0x274d;eip=0x000ae5; 	T(ax = dx;);	// 71686                  mov     ax, dx ;~ 274D:0AE5
cs=0x274d;eip=0x000ae7; 	X(STOSW);	// 71687                  stosw ;~ 274D:0AE7
cs=0x274d;eip=0x000ae8; 	T(ax = *(dw*)(&dword_4a46c););	// 71688                  mov     ax, word ptr dword_4A46C ;~ 274D:0AE8
cs=0x274d;eip=0x000aeb; 	X(STOSW);	// 71689                  stosw ;~ 274D:0AEB
cs=0x274d;eip=0x000aec; 	T(ax = *(dw*)(((db*)&dword_4a46c)+2););	// 71690                  mov     ax, word ptr dword_4A46C+2 ;~ 274D:0AEC
cs=0x274d;eip=0x000aef; 	X(STOSW);	// 71691                  stosw ;~ 274D:0AEF
cs=0x274d;eip=0x000af0; 	T(ax = word_4a470;);	// 71692                  mov     ax, word_4A470 ;~ 274D:0AF0
cs=0x274d;eip=0x000af3; 	X(STOSW);	// 71693                  stosw ;~ 274D:0AF3
cs=0x274d;eip=0x000af4; 	T(ax = word_4a472;);	// 71694                  mov     ax, word_4A472 ;~ 274D:0AF4
cs=0x274d;eip=0x000af7; 	X(STOSW);	// 71695                  stosw ;~ 274D:0AF7
cs=0x274d;eip=0x000af8; 	T(ax = word_4a474;);	// 71696                  mov     ax, word_4A474 ;~ 274D:0AF8
cs=0x274d;eip=0x000afb; 	X(STOSW);	// 71697                  stosw ;~ 274D:0AFB
cs=0x274d;eip=0x000afc; 	T(ax = word_4a476;);	// 71698                  mov     ax, word_4A476 ;~ 274D:0AFC
cs=0x274d;eip=0x000aff; 	X(STOSW);	// 71699                  stosw ;~ 274D:0AFF
cs=0x274d;eip=0x000b00; 	T(ax = word_4a478;);	// 71700                  mov     ax, word_4A478 ;~ 274D:0B00
cs=0x274d;eip=0x000b03; 	X(STOSW);	// 71701                  stosw ;~ 274D:0B03
cs=0x274d;eip=0x000b04; 	T(ax = word_4a47a;);	// 71702                  mov     ax, word_4A47A ;~ 274D:0B04
cs=0x274d;eip=0x000b07; 	X(STOSW);	// 71703                  stosw ;~ 274D:0B07
cs=0x274d;eip=0x000b08; 	T(ax = word_4a47c;);	// 71704                  mov     ax, word_4A47C ;~ 274D:0B08
cs=0x274d;eip=0x000b0b; 	X(STOSW);	// 71705                  stosw ;~ 274D:0B0B
cs=0x274d;eip=0x000b0c; 	T(ax = word_4a47e;);	// 71706                  mov     ax, word_4A47E ;~ 274D:0B0C
cs=0x274d;eip=0x000b0f; 	X(STOSW);	// 71707                  stosw ;~ 274D:0B0F
cs=0x274d;eip=0x000b10; 	T(ax = word_4a480;);	// 71708                  mov     ax, word_4A480 ;~ 274D:0B10
cs=0x274d;eip=0x000b13; 	X(STOSW);	// 71709                  stosw ;~ 274D:0B13
cs=0x274d;eip=0x000b14; 	T(ax = word_4a482;);	// 71710                  mov     ax, word_4A482 ;~ 274D:0B14
cs=0x274d;eip=0x000b17; 	X(STOSW);	// 71711                  stosw ;~ 274D:0B17
cs=0x274d;eip=0x000b18; 	T(ax = word_4a484;);	// 71712                  mov     ax, word_4A484 ;~ 274D:0B18
cs=0x274d;eip=0x000b1b; 	X(STOSW);	// 71713                  stosw ;~ 274D:0B1B
cs=0x274d;eip=0x000b1c; 	T(ax = word_4a486;);	// 71714                  mov     ax, word_4A486 ;~ 274D:0B1C
cs=0x274d;eip=0x000b1f; 	X(STOSW);	// 71715                  stosw ;~ 274D:0B1F
cs=0x274d;eip=0x000b20; 	X(POP(dx));	// 71716                  pop     dx ;~ 274D:0B20
cs=0x274d;eip=0x000b21; 	X(POP(ax));	// 71717                  pop     ax ;~ 274D:0B21
cs=0x274d;eip=0x000b22; 	T(bx = word_4a4dc;);	// 71718                  mov     bx, word_4A4DC ;~ 274D:0B22
cs=0x274d;eip=0x000b26; 	T(SHL(bx, 1));	// 71719                  shl     bx, 1 ;~ 274D:0B26
cs=0x274d;eip=0x000b28; 	T(cx = bx;);	// 71720                  mov     cx, bx ;~ 274D:0B28
loc_365da:
	// 6956 
cs=0x274d;eip=0x000b2a; 	T(SUB(bx, 2));	// 71724                  sub     bx, 2 ;~ 274D:0B2A
cs=0x274d;eip=0x000b2d; 	J(JS(loc_365ee));	// 71725                  js      short loc_365EE ;~ 274D:0B2D
cs=0x274d;eip=0x000b2f; 	T(MOV(di, *(dw*)(raddr(ds,bx+0x3248))));	// 71726                  mov     di, [bx+3248h] ;~ 274D:0B2F
cs=0x274d;eip=0x000b33; 	T(CMP(dx, *(dw*)(raddr(ds,di+2))));	// 71727                  cmp     dx, [di+2] ;~ 274D:0B33
cs=0x274d;eip=0x000b36; 	J(JG(loc_365da));	// 71728                  jg      short loc_365DA ;~ 274D:0B36
cs=0x274d;eip=0x000b38; 	J(JL(loc_365ee));	// 71729                  jl      short loc_365EE ;~ 274D:0B38
cs=0x274d;eip=0x000b3a; 	T(CMP(ax, *(dw*)(raddr(ds,di))));	// 71730                  cmp     ax, [di] ;~ 274D:0B3A
cs=0x274d;eip=0x000b3c; 	J(JA(loc_365da));	// 71731                  ja      short loc_365DA ;~ 274D:0B3C
loc_365ee:
	// 6957 
cs=0x274d;eip=0x000b3e; 	T(SUB(cx, 2));	// 71735                  sub     cx, 2 ;~ 274D:0B3E
cs=0x274d;eip=0x000b41; 	T(di = cx;);	// 71736                  mov     di, cx ;~ 274D:0B41
cs=0x274d;eip=0x000b43; 	T(ADD(di, 0x324A));	// 71737                  add     di, 324Ah ;~ 274D:0B43
cs=0x274d;eip=0x000b47; 	T(si = cx;);	// 71738                  mov     si, cx ;~ 274D:0B47
cs=0x274d;eip=0x000b49; 	T(ADD(si, 0x3248));	// 71739                  add     si, 3248h ;~ 274D:0B49
cs=0x274d;eip=0x000b4d; 	T(SUB(cx, bx));	// 71740                  sub     cx, bx ;~ 274D:0B4D
cs=0x274d;eip=0x000b4f; 	J(JLE(loc_36609));	// 71741                  jle     short loc_36609 ;~ 274D:0B4F
cs=0x274d;eip=0x000b51; 	T(SHR(cx, 1));	// 71742                  shr     cx, 1 ;~ 274D:0B51
cs=0x274d;eip=0x000b53; 	T(CLI);	// 71743                  cli ;~ 274D:0B53
cs=0x274d;eip=0x000b54; 	T(STD);	// 71744                  std ;~ 274D:0B54
	// 71745                  rep movsw ;~ 274D:0B55
cs=0x274d;eip=0x000b55; 	X(	REP MOVSW);	// 71745                  rep movsw ;~ 274D:0B55
cs=0x274d;eip=0x000b57; 	T(CLD);	// 71746                  cld ;~ 274D:0B57
cs=0x274d;eip=0x000b58; 	T(STI);	// 71747                  sti ;~ 274D:0B58
loc_36609:
	// 6958 
cs=0x274d;eip=0x000b59; 	X(MOV(*(dw*)(raddr(ds,di)), bp));	// 71750                  mov     [di], bp ;~ 274D:0B59
cs=0x274d;eip=0x000b5b; 	X(INC(word_4a4dc));	// 71751                  inc     word_4A4DC ;~ 274D:0B5B
cs=0x274d;eip=0x000b5f; 	J(RETN(0));	// 71752                  retn ;~ 274D:0B5F

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_3655c: 	goto loc_3655c;
        case m2c::kloc_36565: 	goto loc_36565;
        case m2c::kloc_3657b: 	goto loc_3657b;
        case m2c::kloc_36581: 	goto loc_36581;
        case m2c::kloc_36590: 	goto loc_36590;
        case m2c::kloc_365da: 	goto loc_365da;
        case m2c::kloc_365ee: 	goto loc_365ee;
        case m2c::kloc_36609: 	goto loc_36609;
        case m2c::ksub_36530: 	goto sub_36530;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36610(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36610:
    _begin:
cs=0x274d;eip=0x000b60; 	T(CMP(word_4a4dc, 0));	// 71760                  cmp     word_4A4DC, 0 ;~ 274D:0B60
cs=0x274d;eip=0x000b65; 	J(JZ(locret_3666b));	// 71761                  jz      short locret_3666B ;~ 274D:0B65
cs=0x274d;eip=0x000b67; 	T(si = 0x3246;);	// 71762                  mov     si, 3246h ;~ 274D:0B67
loc_3661a:
	// 6959 
cs=0x274d;eip=0x000b6a; 	T(ADD(si, 2));	// 71765                  add     si, 2 ;~ 274D:0B6A
cs=0x274d;eip=0x000b6d; 	X(PUSH(si));	// 71766                  push    si ;~ 274D:0B6D
cs=0x274d;eip=0x000b6e; 	T(MOV(si, *(dw*)(raddr(ds,si))));	// 71767                  mov     si, [si] ;~ 274D:0B6E
cs=0x274d;eip=0x000b70; 	T(ADD(si, 4));	// 71768                  add     si, 4 ;~ 274D:0B70
cs=0x274d;eip=0x000b73; 	T(LODSW);	// 71769                  lodsw ;~ 274D:0B73
cs=0x274d;eip=0x000b74; 	X(*(dw*)(&dword_4a46c) = ax;);	// 71770                  mov     word ptr dword_4A46C, ax ;~ 274D:0B74
cs=0x274d;eip=0x000b77; 	T(LODSW);	// 71771                  lodsw ;~ 274D:0B77
cs=0x274d;eip=0x000b78; 	X(*(dw*)(((db*)&dword_4a46c)+2) = ax;);	// 71772                  mov     word ptr dword_4A46C+2, ax ;~ 274D:0B78
cs=0x274d;eip=0x000b7b; 	T(LODSW);	// 71773                  lodsw ;~ 274D:0B7B
cs=0x274d;eip=0x000b7c; 	X(word_4a470 = ax;);	// 71774                  mov     word_4A470, ax ;~ 274D:0B7C
cs=0x274d;eip=0x000b7f; 	T(LODSW);	// 71775                  lodsw ;~ 274D:0B7F
cs=0x274d;eip=0x000b80; 	X(word_4a472 = ax;);	// 71776                  mov     word_4A472, ax ;~ 274D:0B80
cs=0x274d;eip=0x000b83; 	T(LODSW);	// 71777                  lodsw ;~ 274D:0B83
cs=0x274d;eip=0x000b84; 	X(word_4a474 = ax;);	// 71778                  mov     word_4A474, ax ;~ 274D:0B84
cs=0x274d;eip=0x000b87; 	T(LODSW);	// 71779                  lodsw ;~ 274D:0B87
cs=0x274d;eip=0x000b88; 	X(word_4a476 = ax;);	// 71780                  mov     word_4A476, ax ;~ 274D:0B88
cs=0x274d;eip=0x000b8b; 	T(LODSW);	// 71781                  lodsw ;~ 274D:0B8B
cs=0x274d;eip=0x000b8c; 	X(word_4a478 = ax;);	// 71782                  mov     word_4A478, ax ;~ 274D:0B8C
cs=0x274d;eip=0x000b8f; 	T(LODSW);	// 71783                  lodsw ;~ 274D:0B8F
cs=0x274d;eip=0x000b90; 	X(word_4a47a = ax;);	// 71784                  mov     word_4A47A, ax ;~ 274D:0B90
cs=0x274d;eip=0x000b93; 	T(LODSW);	// 71785                  lodsw ;~ 274D:0B93
cs=0x274d;eip=0x000b94; 	X(word_4a47c = ax;);	// 71786                  mov     word_4A47C, ax ;~ 274D:0B94
cs=0x274d;eip=0x000b97; 	T(LODSW);	// 71787                  lodsw ;~ 274D:0B97
cs=0x274d;eip=0x000b98; 	X(word_4a47e = ax;);	// 71788                  mov     word_4A47E, ax ;~ 274D:0B98
cs=0x274d;eip=0x000b9b; 	T(LODSW);	// 71789                  lodsw ;~ 274D:0B9B
cs=0x274d;eip=0x000b9c; 	X(word_4a480 = ax;);	// 71790                  mov     word_4A480, ax ;~ 274D:0B9C
cs=0x274d;eip=0x000b9f; 	T(LODSW);	// 71791                  lodsw ;~ 274D:0B9F
cs=0x274d;eip=0x000ba0; 	X(word_4a482 = ax;);	// 71792                  mov     word_4A482, ax ;~ 274D:0BA0
cs=0x274d;eip=0x000ba3; 	T(LODSW);	// 71793                  lodsw ;~ 274D:0BA3
cs=0x274d;eip=0x000ba4; 	X(word_4a484 = ax;);	// 71794                  mov     word_4A484, ax ;~ 274D:0BA4
cs=0x274d;eip=0x000ba7; 	T(LODSW);	// 71795                  lodsw ;~ 274D:0BA7
cs=0x274d;eip=0x000ba8; 	X(word_4a486 = ax;);	// 71796                  mov     word_4A486, ax ;~ 274D:0BA8
cs=0x274d;eip=0x000bab; 	T(LES(si, dword_4a46c));	// 71797                  les     si, dword_4A46C ;~ 274D:0BAB
cs=0x274d;eip=0x000baf; 	J(CALL(sub_36697,0));	// 71799                  call    sub_36697 ;~ 274D:0BAF
cs=0x274d;eip=0x000bb2; 	X(POP(si));	// 71800                  pop     si ;~ 274D:0BB2
cs=0x274d;eip=0x000bb3; 	X(DEC(word_4a4dc));	// 71801                  dec     word_4A4DC ;~ 274D:0BB3
cs=0x274d;eip=0x000bb7; 	J(JZ(locret_3666b));	// 71802                  jz      short locret_3666B ;~ 274D:0BB7
cs=0x274d;eip=0x000bb9; 	J(JMP(loc_3661a));	// 71803                  jmp     short loc_3661A ;~ 274D:0BB9
locret_3666b:
	// 6960 
cs=0x274d;eip=0x000bbb; 	J(RETN(0));	// 71808                  retn ;~ 274D:0BBB

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_3661a: 	goto loc_3661a;
        case m2c::klocret_3666b: 	goto locret_3666b;
        case m2c::ksub_36610: 	goto sub_36610;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg35ab_bbc_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg35ab_bbc_proc:
    _begin:
cs=0x274d;eip=0x000bbc; 	X(PUSH(bp));	// 71812                  push    bp ;~ 274D:0BBC
cs=0x274d;eip=0x000bbd; 	X(PUSH(si));	// 71813                  push    si ;~ 274D:0BBD
cs=0x274d;eip=0x000bbe; 	X(PUSH(di));	// 71814                  push    di ;~ 274D:0BBE
cs=0x274d;eip=0x000bbf; 	T(LES(si, dword_4a46c));	// 71815                  les     si, dword_4A46C ;~ 274D:0BBF
cs=0x274d;eip=0x000bc3; 	J(CALL(sub_36697,0));	// 71817                  call    sub_36697 ;~ 274D:0BC3
cs=0x274d;eip=0x000bc6; 	X(POP(di));	// 71818                  pop     di ;~ 274D:0BC6
cs=0x274d;eip=0x000bc7; 	X(POP(si));	// 71819                  pop     si ;~ 274D:0BC7
cs=0x274d;eip=0x000bc8; 	X(POP(bp));	// 71820                  pop     bp ;~ 274D:0BC8
cs=0x274d;eip=0x000bc9; 	J(RETN(0));	// 71821                  retn ;~ 274D:0BC9

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg35ab_bbc_proc: 	goto seg35ab_bbc_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3667a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3667a:
    _begin:
cs=0x274d;eip=0x000bca; 	X(PUSH(bp));	// 71827                  push    bp ;~ 274D:0BCA
cs=0x274d;eip=0x000bcb; 	X(PUSH(si));	// 71828                  push    si ;~ 274D:0BCB
cs=0x274d;eip=0x000bcc; 	X(PUSH(di));	// 71829                  push    di ;~ 274D:0BCC
cs=0x274d;eip=0x000bcd; 	T(cx = word_4a474;);	// 71830                  mov     cx, word_4A474 ;~ 274D:0BCD
cs=0x274d;eip=0x000bd1; 	T(ax = word_4a472;);	// 71831                  mov     ax, word_4A472 ;~ 274D:0BD1
cs=0x274d;eip=0x000bd4; 	T(bp = word_4a470;);	// 71832                  mov     bp, word_4A470 ;~ 274D:0BD4
cs=0x274d;eip=0x000bd8; 	T(LES(si, dword_4a46c));	// 71833                  les     si, dword_4A46C ;~ 274D:0BD8
cs=0x274d;eip=0x000bdc; 	J(CALL(sub_36764,0));	// 71834                  call    sub_36764 ;~ 274D:0BDC
cs=0x274d;eip=0x000bdf; 	X(*(dw*)(&dword_4a46c) = si;);	// 71835                  mov     word ptr dword_4A46C, si ;~ 274D:0BDF
cs=0x274d;eip=0x000be3; 	X(POP(di));	// 71836                  pop     di ;~ 274D:0BE3
cs=0x274d;eip=0x000be4; 	X(POP(si));	// 71837                  pop     si ;~ 274D:0BE4
cs=0x274d;eip=0x000be5; 	X(POP(bp));	// 71838                  pop     bp ;~ 274D:0BE5
cs=0x274d;eip=0x000be6; 	J(RETF(0));	// 71839                  retf ;~ 274D:0BE6

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_3667a: 	goto sub_3667a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36697(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36697:
    _begin:
cs=0x274d;eip=0x000be7; 	T(ah = byte_48b63;);	// 71852                  mov     ah, byte_48B63 ;~ 274D:0BE7
cs=0x274d;eip=0x000beb; 	T(OR(ah, ah));	// 71853                  or      ah, ah ;~ 274D:0BEB
cs=0x274d;eip=0x000bed; 	J(JZ(loc_366c6));	// 71854                  jz      short loc_366C6 ;~ 274D:0BED
cs=0x274d;eip=0x000bef; 	T(al = *(db*)(((db*)&word_4a486)+1););	// 71855                  mov     al, byte ptr word_4A486+1 ;~ 274D:0BEF
cs=0x274d;eip=0x000bf2; 	T(CBW);	// 71856                  cbw ;~ 274D:0BF2
cs=0x274d;eip=0x000bf3; 	T(NOT(ah));	// 71857                  not     ah ;~ 274D:0BF3
cs=0x274d;eip=0x000bf5; 	T(AND(al, ah));	// 71858                  and     al, ah ;~ 274D:0BF5
cs=0x274d;eip=0x000bf7; 	T(SUB(ah, ah));	// 71859                  sub     ah, ah ;~ 274D:0BF7
cs=0x274d;eip=0x000bf9; 	T(SHR(ax, 1));	// 71860                  shr     ax, 1 ;~ 274D:0BF9
cs=0x274d;eip=0x000bfb; 	T(ah = al;);	// 71861                  mov     ah, al ;~ 274D:0BFB
cs=0x274d;eip=0x000bfd; 	T(SUB(ah, 0));	// 71862                  sub     ah, 0 ;~ 274D:0BFD
cs=0x274d;eip=0x000c00; 	J(JNS(loc_366b4));	// 71863                  jns     short loc_366B4 ;~ 274D:0C00
cs=0x274d;eip=0x000c02; 	T(SUB(ah, ah));	// 71864                  sub     ah, ah ;~ 274D:0C02
loc_366b4:
	// 6961 
cs=0x274d;eip=0x000c04; 	T(CMP(ah, 7));	// 71867                  cmp     ah, 7 ;~ 274D:0C04
cs=0x274d;eip=0x000c07; 	J(JLE(loc_366bb));	// 71868                  jle     short loc_366BB ;~ 274D:0C07
cs=0x274d;eip=0x000c09; 	T(ah = 7;);	// 71869                  mov     ah, 7 ;~ 274D:0C09
loc_366bb:
	// 6962 
cs=0x274d;eip=0x000c0b; 	T(SHL(ah, 1));	// 71872                  shl     ah, 1 ;~ 274D:0C0B
cs=0x274d;eip=0x000c0d; 	T(SHL(ah, 1));	// 71873                  shl     ah, 1 ;~ 274D:0C0D
cs=0x274d;eip=0x000c0f; 	T(SHL(ah, 1));	// 71874                  shl     ah, 1 ;~ 274D:0C0F
cs=0x274d;eip=0x000c11; 	T(SHL(ah, 1));	// 71875                  shl     ah, 1 ;~ 274D:0C11
cs=0x274d;eip=0x000c13; 	T(ADD(ah, 0x80));	// 71876                  add     ah, 80h ;~ 274D:0C13
loc_366c6:
	// 6963 
cs=0x274d;eip=0x000c16; 	X(*(byte_4a3ca) = ah;);	// 71879                  mov     byte_4A3CA, ah ;~ 274D:0C16
cs=0x274d;eip=0x000c1a; 	T(MOV(al, *(raddr(es,si))));	// 71880                  mov     al, es:[si] ;~ 274D:0C1A
cs=0x274d;eip=0x000c1d; 	T(AND(al, 0x3F));	// 71881                  and     al, 3Fh ;~ 274D:0C1D
cs=0x274d;eip=0x000c1f; 	T(CMP(al, 0x3E));	// 71882                  cmp     al, 3Eh ; '>' ;~ 274D:0C1F
cs=0x274d;eip=0x000c21; 	J(JL(loc_366db));	// 71883                  jl      short loc_366DB ;~ 274D:0C21
cs=0x274d;eip=0x000c23; 	J(JZ(loc_366d8));	// 71884                  jz      short loc_366D8 ;~ 274D:0C23
cs=0x274d;eip=0x000c25; 	J(return seg35ab_198a_proc(m2c::kloc_3743a, _state););	// 71885                  jmp     loc_3743A ;~ 274D:0C25
loc_366d8:
	// 6964 
cs=0x274d;eip=0x000c28; 	J(return seg35ab_198a_proc(m2c::kloc_375a4, _state););	// 71889                  jmp     loc_375A4 ;~ 274D:0C28
loc_366db:
	// 6965 
cs=0x274d;eip=0x000c2b; 	T(ax = word_4a476;);	// 71893                  mov     ax, word_4A476 ;~ 274D:0C2B
cs=0x274d;eip=0x000c2e; 	T(OR(ax, word_4a478));	// 71894                  or      ax, word_4A478 ;~ 274D:0C2E
cs=0x274d;eip=0x000c32; 	T(OR(ax, word_4a47a));	// 71895                  or      ax, word_4A47A ;~ 274D:0C32
cs=0x274d;eip=0x000c36; 	T(OR(al, ah));	// 71896                  or      al, ah ;~ 274D:0C36
cs=0x274d;eip=0x000c38; 	X(*(byte_4a488) = al;);	// 71897                  mov     byte_4A488, al ;~ 274D:0C38
cs=0x274d;eip=0x000c3b; 	J(JZ(loc_36710));	// 71898                  jz      short loc_36710 ;~ 274D:0C3B
cs=0x274d;eip=0x000c3d; 	X(PUSH(si));	// 71899                  push    si ;~ 274D:0C3D
cs=0x274d;eip=0x000c3e; 	T(di = 0x19D8;);	// 71900                  mov     di, 19D8h ;~ 274D:0C3E
cs=0x274d;eip=0x000c41; 	T(cx = word_4a476;);	// 71901                  mov     cx, word_4A476 ;~ 274D:0C41
cs=0x274d;eip=0x000c45; 	T(si = word_4a478;);	// 71902                  mov     si, word_4A478 ;~ 274D:0C45
cs=0x274d;eip=0x000c49; 	T(bp = word_4a47a;);	// 71903                  mov     bp, word_4A47A ;~ 274D:0C49
cs=0x274d;eip=0x000c4d; 	J(CALL(sub_36f2b,0));	// 71904                  call    sub_36F2B ;~ 274D:0C4D
cs=0x274d;eip=0x000c50; 	T(bx = 0x19D8;);	// 71905                  mov     bx, 19D8h ;~ 274D:0C50
cs=0x274d;eip=0x000c53; 	T(si = 0x19C6;);	// 71906                  mov     si, 19C6h ;~ 274D:0C53
cs=0x274d;eip=0x000c56; 	T(di = 0x19EA;);	// 71907                  mov     di, 19EAh ;~ 274D:0C56
cs=0x274d;eip=0x000c59; 	J(CALL(sub_3707d,0));	// 71908                  call    sub_3707D ;~ 274D:0C59
cs=0x274d;eip=0x000c5c; 	X(POP(si));	// 71909                  pop     si ;~ 274D:0C5C
cs=0x274d;eip=0x000c5d; 	J(JMP(loc_36746));	// 71910                  jmp     short loc_36746 ;~ 274D:0C5D
loc_36710:
	// 6966 
cs=0x274d;eip=0x000c60; 	T(ax = word_4a4a6;);	// 71916                  mov     ax, word_4A4A6 ;~ 274D:0C60
cs=0x274d;eip=0x000c63; 	X(word_4a4ca = ax;);	// 71917                  mov     word_4A4CA, ax ;~ 274D:0C63
cs=0x274d;eip=0x000c66; 	T(ax = word_4a4a8;);	// 71918                  mov     ax, word_4A4A8 ;~ 274D:0C66
cs=0x274d;eip=0x000c69; 	X(word_4a4cc = ax;);	// 71919                  mov     word_4A4CC, ax ;~ 274D:0C69
cs=0x274d;eip=0x000c6c; 	T(ax = word_4a4aa;);	// 71920                  mov     ax, word_4A4AA ;~ 274D:0C6C
cs=0x274d;eip=0x000c6f; 	X(word_4a4ce = ax;);	// 71921                  mov     word_4A4CE, ax ;~ 274D:0C6F
cs=0x274d;eip=0x000c72; 	T(ax = word_4a4ac;);	// 71922                  mov     ax, word_4A4AC ;~ 274D:0C72
cs=0x274d;eip=0x000c75; 	X(word_4a4d0 = ax;);	// 71923                  mov     word_4A4D0, ax ;~ 274D:0C75
cs=0x274d;eip=0x000c78; 	T(ax = word_4a4ae;);	// 71924                  mov     ax, word_4A4AE ;~ 274D:0C78
cs=0x274d;eip=0x000c7b; 	X(word_4a4d2 = ax;);	// 71925                  mov     word_4A4D2, ax ;~ 274D:0C7B
cs=0x274d;eip=0x000c7e; 	T(ax = word_4a4b0;);	// 71926                  mov     ax, word_4A4B0 ;~ 274D:0C7E
cs=0x274d;eip=0x000c81; 	X(word_4a4d4 = ax;);	// 71927                  mov     word_4A4D4, ax ;~ 274D:0C81
cs=0x274d;eip=0x000c84; 	T(ax = word_4a4b2;);	// 71928                  mov     ax, word_4A4B2 ;~ 274D:0C84
cs=0x274d;eip=0x000c87; 	X(word_4a4d6 = ax;);	// 71929                  mov     word_4A4D6, ax ;~ 274D:0C87
cs=0x274d;eip=0x000c8a; 	T(ax = word_4a4b4;);	// 71930                  mov     ax, word_4A4B4 ;~ 274D:0C8A
cs=0x274d;eip=0x000c8d; 	X(word_4a4d8 = ax;);	// 71931                  mov     word_4A4D8, ax ;~ 274D:0C8D
cs=0x274d;eip=0x000c90; 	T(ax = word_4a4b6;);	// 71932                  mov     ax, word_4A4B6 ;~ 274D:0C90
cs=0x274d;eip=0x000c93; 	X(word_4a4da = ax;);	// 71933                  mov     word_4A4DA, ax ;~ 274D:0C93
loc_36746:
	// 6967 
cs=0x274d;eip=0x000c96; 	T(cx = word_4a474;);	// 71936                  mov     cx, word_4A474 ;~ 274D:0C96
cs=0x274d;eip=0x000c9a; 	T(ax = word_4a472;);	// 71937                  mov     ax, word_4A472 ;~ 274D:0C9A
cs=0x274d;eip=0x000c9d; 	T(bp = word_4a470;);	// 71938                  mov     bp, word_4A470 ;~ 274D:0C9D
cs=0x274d;eip=0x000ca1; 	J(CALL(sub_36764,0));	// 71939                  call    sub_36764 ;~ 274D:0CA1
cs=0x274d;eip=0x000ca4; 	J(CALL(sub_35bc3,0));	// 71940                  call    sub_35BC3 ;~ 274D:0CA4
cs=0x274d;eip=0x000ca7; 	J(CALL(sub_36ba0,0));	// 71941                  call    sub_36BA0 ;~ 274D:0CA7
cs=0x274d;eip=0x000caa; 	J(CALL(sub_36c88,0));	// 71942                  call    sub_36C88 ;~ 274D:0CAA
cs=0x274d;eip=0x000cad; 	J(CALL(sub_3721a,0));	// 71943                  call    sub_3721A ;~ 274D:0CAD
cs=0x274d;eip=0x000cb0; 	J(CALL(sub_35be7,0));	// 71944                  call    sub_35BE7 ;~ 274D:0CB0
cs=0x274d;eip=0x000cb3; 	J(RETN(0));	// 71945                  retn ;~ 274D:0CB3

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_366b4: 	goto loc_366b4;
        case m2c::kloc_366bb: 	goto loc_366bb;
        case m2c::kloc_366c6: 	goto loc_366c6;
        case m2c::kloc_366d8: 	goto loc_366d8;
        case m2c::kloc_366db: 	goto loc_366db;
        case m2c::kloc_36710: 	goto loc_36710;
        case m2c::kloc_36746: 	goto loc_36746;
        case m2c::ksub_36697: 	goto sub_36697;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36764(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36764:
    _begin:
cs=0x274d;eip=0x000cb4; 	T(NEG(bp));	// 71954                  neg     bp ;~ 274D:0CB4
cs=0x274d;eip=0x000cb6; 	T(NEG(ax));	// 71955                  neg     ax ;~ 274D:0CB6
cs=0x274d;eip=0x000cb8; 	T(NEG(cx));	// 71956                  neg     cx ;~ 274D:0CB8
cs=0x274d;eip=0x000cba; 	T(CMP(*(byte_4a488), 0));	// 71957                  cmp     byte_4A488, 0 ;~ 274D:0CBA
cs=0x274d;eip=0x000cbf; 	J(JNZ(loc_3677f));	// 71958                  jnz     short loc_3677F ;~ 274D:0CBF
cs=0x274d;eip=0x000cc1; 	X(word_4cdae = bp;);	// 71959                  mov     word_4CDAE, bp ;~ 274D:0CC1
cs=0x274d;eip=0x000cc5; 	X(word_4cdb0 = cx;);	// 71960                  mov     word_4CDB0, cx ;~ 274D:0CC5
cs=0x274d;eip=0x000cc9; 	X(word_4cdb2 = ax;);	// 71961                  mov     word_4CDB2, ax ;~ 274D:0CC9
cs=0x274d;eip=0x000ccc; 	J(JMP(loc_3680e));	// 71962                  jmp     loc_3680E ;~ 274D:0CCC
loc_3677f:
	// 6968 
cs=0x274d;eip=0x000ccf; 	X(word_4cdb4 = ax;);	// 71966                  mov     word_4CDB4, ax ;~ 274D:0CCF
cs=0x274d;eip=0x000cd2; 	J(CALL(sub_37049,0));	// 71967                  call    sub_37049 ;~ 274D:0CD2
cs=0x274d;eip=0x000cd5; 	X(PUSH(si));	// 71968                  push    si ;~ 274D:0CD5
cs=0x274d;eip=0x000cd6; 	T(ax = word_4cdb4;);	// 71969                  mov     ax, word_4CDB4 ;~ 274D:0CD6
cs=0x274d;eip=0x000cd9; 	X(IMUL1_2(word_4a4c4));	// 71970                  imul    word_4A4C4 ;~ 274D:0CD9
cs=0x274d;eip=0x000cdd; 	T(di = dx;);	// 71971                  mov     di, dx ;~ 274D:0CDD
cs=0x274d;eip=0x000cdf; 	T(si = ax;);	// 71972                  mov     si, ax ;~ 274D:0CDF
cs=0x274d;eip=0x000ce1; 	T(ax = cx;);	// 71973                  mov     ax, cx ;~ 274D:0CE1
cs=0x274d;eip=0x000ce3; 	X(IMUL1_2(word_4a4be));	// 71974                  imul    word_4A4BE ;~ 274D:0CE3
cs=0x274d;eip=0x000ce7; 	T(ADD(si, ax));	// 71975                  add     si, ax ;~ 274D:0CE7
cs=0x274d;eip=0x000ce9; 	T(ADC(di, dx));	// 71976                  adc     di, dx ;~ 274D:0CE9
cs=0x274d;eip=0x000ceb; 	T(ax = bp;);	// 71977                  mov     ax, bp ;~ 274D:0CEB
cs=0x274d;eip=0x000ced; 	X(IMUL1_2(word_4a4b8));	// 71978                  imul    word_4A4B8 ;~ 274D:0CED
cs=0x274d;eip=0x000cf1; 	T(ADD(si, ax));	// 71979                  add     si, ax ;~ 274D:0CF1
cs=0x274d;eip=0x000cf3; 	T(ADC(di, dx));	// 71980                  adc     di, dx ;~ 274D:0CF3
cs=0x274d;eip=0x000cf5; 	T(SHL(si, 1));	// 71981                  shl     si, 1 ;~ 274D:0CF5
cs=0x274d;eip=0x000cf7; 	T(RCL(di, 1));	// 71982                  rcl     di, 1 ;~ 274D:0CF7
cs=0x274d;eip=0x000cf9; 	T(SHL(si, 1));	// 71983                  shl     si, 1 ;~ 274D:0CF9
cs=0x274d;eip=0x000cfb; 	T(ADC(di, 0));	// 71984                  adc     di, 0 ;~ 274D:0CFB
cs=0x274d;eip=0x000cfe; 	X(word_4cdae = di;);	// 71985                  mov     word_4CDAE, di ;~ 274D:0CFE
cs=0x274d;eip=0x000d02; 	T(ax = word_4cdb4;);	// 71986                  mov     ax, word_4CDB4 ;~ 274D:0D02
cs=0x274d;eip=0x000d05; 	X(IMUL1_2(word_4a4c6));	// 71987                  imul    word_4A4C6 ;~ 274D:0D05
cs=0x274d;eip=0x000d09; 	T(di = dx;);	// 71988                  mov     di, dx ;~ 274D:0D09
cs=0x274d;eip=0x000d0b; 	T(si = ax;);	// 71989                  mov     si, ax ;~ 274D:0D0B
cs=0x274d;eip=0x000d0d; 	T(ax = cx;);	// 71990                  mov     ax, cx ;~ 274D:0D0D
cs=0x274d;eip=0x000d0f; 	X(IMUL1_2(word_4a4c0));	// 71991                  imul    word_4A4C0 ;~ 274D:0D0F
cs=0x274d;eip=0x000d13; 	T(ADD(si, ax));	// 71992                  add     si, ax ;~ 274D:0D13
cs=0x274d;eip=0x000d15; 	T(ADC(di, dx));	// 71993                  adc     di, dx ;~ 274D:0D15
cs=0x274d;eip=0x000d17; 	T(ax = bp;);	// 71994                  mov     ax, bp ;~ 274D:0D17
cs=0x274d;eip=0x000d19; 	X(IMUL1_2(word_4a4ba));	// 71995                  imul    word_4A4BA ;~ 274D:0D19
cs=0x274d;eip=0x000d1d; 	T(ADD(si, ax));	// 71996                  add     si, ax ;~ 274D:0D1D
cs=0x274d;eip=0x000d1f; 	T(ADC(di, dx));	// 71997                  adc     di, dx ;~ 274D:0D1F
cs=0x274d;eip=0x000d21; 	T(SHL(si, 1));	// 71998                  shl     si, 1 ;~ 274D:0D21
cs=0x274d;eip=0x000d23; 	T(RCL(di, 1));	// 71999                  rcl     di, 1 ;~ 274D:0D23
cs=0x274d;eip=0x000d25; 	T(SHL(si, 1));	// 72000                  shl     si, 1 ;~ 274D:0D25
cs=0x274d;eip=0x000d27; 	T(ADC(di, 0));	// 72001                  adc     di, 0 ;~ 274D:0D27
cs=0x274d;eip=0x000d2a; 	X(word_4cdb0 = di;);	// 72002                  mov     word_4CDB0, di ;~ 274D:0D2A
cs=0x274d;eip=0x000d2e; 	T(ax = word_4cdb4;);	// 72003                  mov     ax, word_4CDB4 ;~ 274D:0D2E
cs=0x274d;eip=0x000d31; 	X(IMUL1_2(word_4a4c8));	// 72004                  imul    word_4A4C8 ;~ 274D:0D31
cs=0x274d;eip=0x000d35; 	T(di = dx;);	// 72005                  mov     di, dx ;~ 274D:0D35
cs=0x274d;eip=0x000d37; 	T(si = ax;);	// 72006                  mov     si, ax ;~ 274D:0D37
cs=0x274d;eip=0x000d39; 	T(ax = cx;);	// 72007                  mov     ax, cx ;~ 274D:0D39
cs=0x274d;eip=0x000d3b; 	X(IMUL1_2(word_4a4c2));	// 72008                  imul    word_4A4C2 ;~ 274D:0D3B
cs=0x274d;eip=0x000d3f; 	T(ADD(si, ax));	// 72009                  add     si, ax ;~ 274D:0D3F
cs=0x274d;eip=0x000d41; 	T(ADC(di, dx));	// 72010                  adc     di, dx ;~ 274D:0D41
cs=0x274d;eip=0x000d43; 	T(ax = bp;);	// 72011                  mov     ax, bp ;~ 274D:0D43
cs=0x274d;eip=0x000d45; 	X(IMUL1_2(word_4a4bc));	// 72012                  imul    word_4A4BC ;~ 274D:0D45
cs=0x274d;eip=0x000d49; 	T(ADD(si, ax));	// 72013                  add     si, ax ;~ 274D:0D49
cs=0x274d;eip=0x000d4b; 	T(ADC(di, dx));	// 72014                  adc     di, dx ;~ 274D:0D4B
cs=0x274d;eip=0x000d4d; 	T(SHL(si, 1));	// 72015                  shl     si, 1 ;~ 274D:0D4D
cs=0x274d;eip=0x000d4f; 	T(RCL(di, 1));	// 72016                  rcl     di, 1 ;~ 274D:0D4F
cs=0x274d;eip=0x000d51; 	T(SHL(si, 1));	// 72017                  shl     si, 1 ;~ 274D:0D51
cs=0x274d;eip=0x000d53; 	T(ADC(di, 0));	// 72018                  adc     di, 0 ;~ 274D:0D53
cs=0x274d;eip=0x000d56; 	X(word_4cdb2 = di;);	// 72019                  mov     word_4CDB2, di ;~ 274D:0D56
cs=0x274d;eip=0x000d5a; 	X(POP(si));	// 72020                  pop     si ;~ 274D:0D5A
cs=0x274d;eip=0x000d5b; 	J(CALL(sub_37049,0));	// 72021                  call    sub_37049 ;~ 274D:0D5B
loc_3680e:
	// 6969 
cs=0x274d;eip=0x000d5e; 	X(LODS(*(raddr(es,si)),si,1));	// 72024                  lods    byte ptr es:[si] ;~ 274D:0D5E
cs=0x274d;eip=0x000d60; 	T(AND(ax, 0x1F));	// 72025                  and     ax, 1Fh ;~ 274D:0D60
cs=0x274d;eip=0x000d63; 	X(*(word_4a4e0) = ax;);	// 72026                  mov     word_4A4E0, ax ;~ 274D:0D63
cs=0x274d;eip=0x000d66; 	T(cx = ax;);	// 72027                  mov     cx, ax ;~ 274D:0D66
cs=0x274d;eip=0x000d68; 	T(SUB(ax, ax));	// 72028                  sub     ax, ax ;~ 274D:0D68
cs=0x274d;eip=0x000d6a; 	T(CMP(cx, 0x10));	// 72029                  cmp     cx, 10h ;~ 274D:0D6A
cs=0x274d;eip=0x000d6d; 	J(JLE(loc_36820));	// 72030                  jle     short loc_36820 ;~ 274D:0D6D
cs=0x274d;eip=0x000d6f; 	T(INC(ax));	// 72031                  inc     ax ;~ 274D:0D6F
loc_36820:
	// 6970 
cs=0x274d;eip=0x000d70; 	X(*(byte_4a4e4) = al;);	// 72034                  mov     byte_4A4E4, al ;~ 274D:0D70
cs=0x274d;eip=0x000d73; 	X(word_4a4e6 = 0x0FFFF;);	// 72035                  mov     word_4A4E6, 0FFFFh ;~ 274D:0D73
cs=0x274d;eip=0x000d79; 	X(word_4a4e8 = 0x0FFFF;);	// 72036                  mov     word_4A4E8, 0FFFFh ;~ 274D:0D79
cs=0x274d;eip=0x000d7f; 	T(OR(cx, cx));	// 72037                  or      cx, cx ;~ 274D:0D7F
cs=0x274d;eip=0x000d81; 	J(JZ(loc_36877));	// 72038                  jz      short loc_36877 ;~ 274D:0D81
cs=0x274d;eip=0x000d83; 	T(bx = 1;);	// 72039                  mov     bx, 1 ;~ 274D:0D83
cs=0x274d;eip=0x000d86; 	T(SUB(di, di));	// 72040                  sub     di, di ;~ 274D:0D86
loc_36838:
	// 6971 
cs=0x274d;eip=0x000d88; 	X(PUSH(bx));	// 72043                  push    bx ;~ 274D:0D88
cs=0x274d;eip=0x000d89; 	X(LODS(*(dw*)(raddr(es,si)),si,2));	// 72044                  lods    word ptr es:[si] ;~ 274D:0D89
cs=0x274d;eip=0x000d8b; 	X(IMUL1_2(word_4cdae));	// 72045                  imul    word_4CDAE ;~ 274D:0D8B
cs=0x274d;eip=0x000d8f; 	T(bp = ax;);	// 72046                  mov     bp, ax ;~ 274D:0D8F
cs=0x274d;eip=0x000d91; 	T(bx = dx;);	// 72047                  mov     bx, dx ;~ 274D:0D91
cs=0x274d;eip=0x000d93; 	X(LODS(*(dw*)(raddr(es,si)),si,2));	// 72048                  lods    word ptr es:[si] ;~ 274D:0D93
cs=0x274d;eip=0x000d95; 	X(IMUL1_2(word_4cdb2));	// 72049                  imul    word_4CDB2 ;~ 274D:0D95
cs=0x274d;eip=0x000d99; 	T(ADD(bp, ax));	// 72050                  add     bp, ax ;~ 274D:0D99
cs=0x274d;eip=0x000d9b; 	T(ADC(bx, dx));	// 72051                  adc     bx, dx ;~ 274D:0D9B
cs=0x274d;eip=0x000d9d; 	X(LODS(*(dw*)(raddr(es,si)),si,2));	// 72052                  lods    word ptr es:[si] ;~ 274D:0D9D
cs=0x274d;eip=0x000d9f; 	X(IMUL1_2(word_4cdb0));	// 72053                  imul    word_4CDB0 ;~ 274D:0D9F
cs=0x274d;eip=0x000da3; 	T(ADD(bp, ax));	// 72054                  add     bp, ax ;~ 274D:0DA3
cs=0x274d;eip=0x000da5; 	T(ADC(bx, dx));	// 72055                  adc     bx, dx ;~ 274D:0DA5
cs=0x274d;eip=0x000da7; 	X(LODS(*(dw*)(raddr(es,si)),si,2));	// 72056                  lods    word ptr es:[si] ;~ 274D:0DA7
cs=0x274d;eip=0x000da9; 	T(CWD);	// 72057                  cwd ;~ 274D:0DA9
cs=0x274d;eip=0x000daa; 	T(CMP(bx, dx));	// 72058                  cmp     bx, dx ;~ 274D:0DAA
cs=0x274d;eip=0x000dac; 	X(POP(bx));	// 72059                  pop     bx ;~ 274D:0DAC
cs=0x274d;eip=0x000dad; 	J(JG(loc_3686f));	// 72060                  jg      short loc_3686F ;~ 274D:0DAD
cs=0x274d;eip=0x000daf; 	J(JL(loc_36865));	// 72061                  jl      short loc_36865 ;~ 274D:0DAF
cs=0x274d;eip=0x000db1; 	T(CMP(bp, ax));	// 72062                  cmp     bp, ax ;~ 274D:0DB1
cs=0x274d;eip=0x000db3; 	J(JNC(loc_3686f));	// 72063                  jnb     short loc_3686F ;~ 274D:0DB3
loc_36865:
	// 6972 
cs=0x274d;eip=0x000db5; 	X(XOR(word_4a4e6, bx));	// 72066                  xor     word_4A4E6, bx ;~ 274D:0DB5
cs=0x274d;eip=0x000db9; 	X(XOR(word_4a4e8, di));	// 72067                  xor     word_4A4E8, di ;~ 274D:0DB9
cs=0x274d;eip=0x000dbd; 	T(INC(ch));	// 72068                  inc     ch ;~ 274D:0DBD
loc_3686f:
	// 6973 
cs=0x274d;eip=0x000dbf; 	T(SHL(bx, 1));	// 72072                  shl     bx, 1 ;~ 274D:0DBF
cs=0x274d;eip=0x000dc1; 	T(RCL(di, 1));	// 72073                  rcl     di, 1 ;~ 274D:0DC1
cs=0x274d;eip=0x000dc3; 	T(DEC(cl));	// 72074                  dec     cl ;~ 274D:0DC3
cs=0x274d;eip=0x000dc5; 	J(JNZ(loc_36838));	// 72075                  jnz     short loc_36838 ;~ 274D:0DC5
loc_36877:
	// 6974 
cs=0x274d;eip=0x000dc7; 	T(al = *(db*)(word_4a4e0););	// 72078                  mov     al, byte ptr word_4A4E0 ;~ 274D:0DC7
cs=0x274d;eip=0x000dca; 	T(CMP(al, 4));	// 72079                  cmp     al, 4 ;~ 274D:0DCA
cs=0x274d;eip=0x000dcc; 	J(JL(locret_36886));	// 72080                  jl      short locret_36886 ;~ 274D:0DCC
cs=0x274d;eip=0x000dce; 	T(CMP(al, ch));	// 72081                  cmp     al, ch ;~ 274D:0DCE
cs=0x274d;eip=0x000dd0; 	J(JNZ(locret_36886));	// 72082                  jnz     short locret_36886 ;~ 274D:0DD0
cs=0x274d;eip=0x000dd2; 	X(INC(*(dw*)(byte_4cdb6)));	// 72083                  inc     word ptr byte_4CDB6 ;~ 274D:0DD2
locret_36886:
	// 6975 
cs=0x274d;eip=0x000dd6; 	J(RETN(0));	// 72087                  retn ;~ 274D:0DD6

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_3677f: 	goto loc_3677f;
        case m2c::kloc_3680e: 	goto loc_3680e;
        case m2c::kloc_36820: 	goto loc_36820;
        case m2c::kloc_36838: 	goto loc_36838;
        case m2c::kloc_36865: 	goto loc_36865;
        case m2c::kloc_3686f: 	goto loc_3686f;
        case m2c::kloc_36877: 	goto loc_36877;
        case m2c::klocret_36886: 	goto locret_36886;
        case m2c::ksub_36764: 	goto sub_36764;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg35ab_dd7_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg35ab_dd7_proc:
    _begin:
cs=0x274d;eip=0x000dd7; 	J(RETN(0));	// 72091                  retn ;~ 274D:0DD7

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg35ab_dd7_proc: 	goto seg35ab_dd7_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36888(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36888:
    _begin:
cs=0x274d;eip=0x000dd8; 	X(PUSH(bp));	// 72098                  push    bp ;~ 274D:0DD8
cs=0x274d;eip=0x000dd9; 	X(PUSH(si));	// 72099                  push    si ;~ 274D:0DD9
cs=0x274d;eip=0x000dda; 	X(PUSH(di));	// 72100                  push    di ;~ 274D:0DDA
cs=0x274d;eip=0x000ddb; 	J(CALL(sub_368a4,0));	// 72101                  call    sub_368A4 ;~ 274D:0DDB
cs=0x274d;eip=0x000dde; 	X(POP(di));	// 72102                  pop     di ;~ 274D:0DDE
cs=0x274d;eip=0x000ddf; 	X(POP(si));	// 72103                  pop     si ;~ 274D:0DDF
cs=0x274d;eip=0x000de0; 	X(POP(bp));	// 72104                  pop     bp ;~ 274D:0DE0
cs=0x274d;eip=0x000de1; 	J(RETF(0));	// 72105                  retf ;~ 274D:0DE1

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_36888: 	goto sub_36888;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg35ab_de2_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg35ab_de2_proc:
    _begin:
cs=0x274d;eip=0x000de2; 	X(PUSH(bp));	// 72109                  push    bp ;~ 274D:0DE2
cs=0x274d;eip=0x000de3; 	X(PUSH(si));	// 72110                  push    si ;~ 274D:0DE3
cs=0x274d;eip=0x000de4; 	X(PUSH(di));	// 72111                  push    di ;~ 274D:0DE4
cs=0x274d;eip=0x000de5; 	T(LES(si, dword_4a46c));	// 72112                  les     si, dword_4A46C ;~ 274D:0DE5
cs=0x274d;eip=0x000de9; 	J(CALL(sub_36ba0,0));	// 72114                  call    sub_36BA0 ;~ 274D:0DE9
cs=0x274d;eip=0x000dec; 	X(*(dw*)(&dword_4a46c) = si;);	// 72115                  mov     word ptr dword_4A46C, si ;~ 274D:0DEC
cs=0x274d;eip=0x000df0; 	X(POP(di));	// 72116                  pop     di ;~ 274D:0DF0
cs=0x274d;eip=0x000df1; 	X(POP(si));	// 72117                  pop     si ;~ 274D:0DF1
cs=0x274d;eip=0x000df2; 	X(POP(bp));	// 72118                  pop     bp ;~ 274D:0DF2
cs=0x274d;eip=0x000df3; 	J(RETN(0));	// 72119                  retn ;~ 274D:0DF3

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg35ab_de2_proc: 	goto seg35ab_de2_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_368a4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_368a4:
    _begin:
cs=0x274d;eip=0x000df4; 	T(CMP(word_4a046, 0));	// 72126                  cmp     word_4A046, 0 ;~ 274D:0DF4
cs=0x274d;eip=0x000df9; 	J(JNZ(loc_368ac));	// 72127                  jnz     short loc_368AC ;~ 274D:0DF9
cs=0x274d;eip=0x000dfb; 	J(RETN(0));	// 72128                  retn ;~ 274D:0DFB
loc_368ac:
	// 6976 
cs=0x274d;eip=0x000dfc; 	T(bx = word_4a040;);	// 72132                  mov     bx, word_4A040 ;~ 274D:0DFC
cs=0x274d;eip=0x000e00; 	T(DEC(bx));	// 72133                  dec     bx ;~ 274D:0E00
cs=0x274d;eip=0x000e01; 	T(SHL(bx, 1));	// 72134                  shl     bx, 1 ;~ 274D:0E01
cs=0x274d;eip=0x000e03; 	T(di = bx;);	// 72135                  mov     di, bx ;~ 274D:0E03
cs=0x274d;eip=0x000e05; 	T(SHL(di, 1));	// 72136                  shl     di, 1 ;~ 274D:0E05
loc_368b7:
	// 6977 
cs=0x274d;eip=0x000e07; 	T(MOV(cx, *(dw*)(raddr(ds,bx-0x6AB4))));	// 72139                  mov     cx, [bx-6AB4h] ;~ 274D:0E07
cs=0x274d;eip=0x000e0b; 	T(ax = word_4a4a6;);	// 72140                  mov     ax, word_4A4A6 ;~ 274D:0E0B
cs=0x274d;eip=0x000e0e; 	T(IMUL1_2(cx));	// 72141                  imul    cx ;~ 274D:0E0E
cs=0x274d;eip=0x000e10; 	T(SHL(ax, 1));	// 72142                  shl     ax, 1 ;~ 274D:0E10
cs=0x274d;eip=0x000e12; 	T(RCL(dx, 1));	// 72143                  rcl     dx, 1 ;~ 274D:0E12
cs=0x274d;eip=0x000e14; 	X(MOV(*(dw*)(raddr(ds,di+0x2A88)), ax));	// 72144                  mov     [di+2A88h], ax ;~ 274D:0E14
cs=0x274d;eip=0x000e18; 	X(MOV(*(dw*)(raddr(ds,di+0x2A8A)), dx));	// 72145                  mov     [di+2A8Ah], dx ;~ 274D:0E18
cs=0x274d;eip=0x000e1c; 	T(ax = word_4a4a8;);	// 72146                  mov     ax, word_4A4A8 ;~ 274D:0E1C
cs=0x274d;eip=0x000e1f; 	T(IMUL1_2(cx));	// 72147                  imul    cx ;~ 274D:0E1F
cs=0x274d;eip=0x000e21; 	T(SHL(ax, 1));	// 72148                  shl     ax, 1 ;~ 274D:0E21
cs=0x274d;eip=0x000e23; 	T(RCL(dx, 1));	// 72149                  rcl     dx, 1 ;~ 274D:0E23
cs=0x274d;eip=0x000e25; 	X(MOV(*(dw*)(raddr(ds,di+0x2B08)), ax));	// 72150                  mov     [di+2B08h], ax ;~ 274D:0E25
cs=0x274d;eip=0x000e29; 	X(MOV(*(dw*)(raddr(ds,di+0x2B0A)), dx));	// 72151                  mov     [di+2B0Ah], dx ;~ 274D:0E29
cs=0x274d;eip=0x000e2d; 	T(ax = word_4a4aa;);	// 72152                  mov     ax, word_4A4AA ;~ 274D:0E2D
cs=0x274d;eip=0x000e30; 	T(IMUL1_2(cx));	// 72153                  imul    cx ;~ 274D:0E30
cs=0x274d;eip=0x000e32; 	T(SHL(ax, 1));	// 72154                  shl     ax, 1 ;~ 274D:0E32
cs=0x274d;eip=0x000e34; 	T(RCL(dx, 1));	// 72155                  rcl     dx, 1 ;~ 274D:0E34
cs=0x274d;eip=0x000e36; 	X(MOV(*(dw*)(raddr(ds,di+0x2B88)), ax));	// 72156                  mov     [di+2B88h], ax ;~ 274D:0E36
cs=0x274d;eip=0x000e3a; 	X(MOV(*(dw*)(raddr(ds,di+0x2B8A)), dx));	// 72157                  mov     [di+2B8Ah], dx ;~ 274D:0E3A
cs=0x274d;eip=0x000e3e; 	T(SUB(di, 4));	// 72158                  sub     di, 4 ;~ 274D:0E3E
cs=0x274d;eip=0x000e41; 	T(SUB(bx, 2));	// 72159                  sub     bx, 2 ;~ 274D:0E41
cs=0x274d;eip=0x000e44; 	J(JNS(loc_368b7));	// 72160                  jns     short loc_368B7 ;~ 274D:0E44
cs=0x274d;eip=0x000e46; 	T(bx = word_4a044;);	// 72161                  mov     bx, word_4A044 ;~ 274D:0E46
cs=0x274d;eip=0x000e4a; 	T(DEC(bx));	// 72162                  dec     bx ;~ 274D:0E4A
cs=0x274d;eip=0x000e4b; 	T(SHL(bx, 1));	// 72163                  shl     bx, 1 ;~ 274D:0E4B
cs=0x274d;eip=0x000e4d; 	T(di = bx;);	// 72164                  mov     di, bx ;~ 274D:0E4D
cs=0x274d;eip=0x000e4f; 	T(SHL(di, 1));	// 72165                  shl     di, 1 ;~ 274D:0E4F
loc_36901:
	// 6978 
cs=0x274d;eip=0x000e51; 	T(MOV(cx, *(dw*)(raddr(ds,bx-0x6A30))));	// 72168                  mov     cx, [bx-6A30h] ;~ 274D:0E51
cs=0x274d;eip=0x000e55; 	T(ax = word_4a4ac;);	// 72169                  mov     ax, word_4A4AC ;~ 274D:0E55
cs=0x274d;eip=0x000e58; 	T(IMUL1_2(cx));	// 72170                  imul    cx ;~ 274D:0E58
cs=0x274d;eip=0x000e5a; 	T(SHL(ax, 1));	// 72171                  shl     ax, 1 ;~ 274D:0E5A
cs=0x274d;eip=0x000e5c; 	T(RCL(dx, 1));	// 72172                  rcl     dx, 1 ;~ 274D:0E5C
cs=0x274d;eip=0x000e5e; 	X(MOV(*(dw*)(raddr(ds,di+0x2C08)), ax));	// 72173                  mov     [di+2C08h], ax ;~ 274D:0E5E
cs=0x274d;eip=0x000e62; 	X(MOV(*(dw*)(raddr(ds,di+0x2C0A)), dx));	// 72174                  mov     [di+2C0Ah], dx ;~ 274D:0E62
cs=0x274d;eip=0x000e66; 	T(ax = word_4a4ae;);	// 72175                  mov     ax, word_4A4AE ;~ 274D:0E66
cs=0x274d;eip=0x000e69; 	T(IMUL1_2(cx));	// 72176                  imul    cx ;~ 274D:0E69
cs=0x274d;eip=0x000e6b; 	T(SHL(ax, 1));	// 72177                  shl     ax, 1 ;~ 274D:0E6B
cs=0x274d;eip=0x000e6d; 	T(RCL(dx, 1));	// 72178                  rcl     dx, 1 ;~ 274D:0E6D
cs=0x274d;eip=0x000e6f; 	X(MOV(*(dw*)(raddr(ds,di+0x2C28)), ax));	// 72179                  mov     [di+2C28h], ax ;~ 274D:0E6F
cs=0x274d;eip=0x000e73; 	X(MOV(*(dw*)(raddr(ds,di+0x2C2A)), dx));	// 72180                  mov     [di+2C2Ah], dx ;~ 274D:0E73
cs=0x274d;eip=0x000e77; 	T(ax = word_4a4b0;);	// 72181                  mov     ax, word_4A4B0 ;~ 274D:0E77
cs=0x274d;eip=0x000e7a; 	T(IMUL1_2(cx));	// 72182                  imul    cx ;~ 274D:0E7A
cs=0x274d;eip=0x000e7c; 	T(SHL(ax, 1));	// 72183                  shl     ax, 1 ;~ 274D:0E7C
cs=0x274d;eip=0x000e7e; 	T(RCL(dx, 1));	// 72184                  rcl     dx, 1 ;~ 274D:0E7E
cs=0x274d;eip=0x000e80; 	X(MOV(*(dw*)(raddr(ds,di+0x2C48)), ax));	// 72185                  mov     [di+2C48h], ax ;~ 274D:0E80
cs=0x274d;eip=0x000e84; 	X(MOV(*(dw*)(raddr(ds,di+0x2C4A)), dx));	// 72186                  mov     [di+2C4Ah], dx ;~ 274D:0E84
cs=0x274d;eip=0x000e88; 	T(SUB(di, 4));	// 72187                  sub     di, 4 ;~ 274D:0E88
cs=0x274d;eip=0x000e8b; 	T(SUB(bx, 2));	// 72188                  sub     bx, 2 ;~ 274D:0E8B
cs=0x274d;eip=0x000e8e; 	J(JNS(loc_36901));	// 72189                  jns     short loc_36901 ;~ 274D:0E8E
cs=0x274d;eip=0x000e90; 	T(bx = word_4a042;);	// 72190                  mov     bx, word_4A042 ;~ 274D:0E90
cs=0x274d;eip=0x000e94; 	T(DEC(bx));	// 72191                  dec     bx ;~ 274D:0E94
cs=0x274d;eip=0x000e95; 	T(SHL(bx, 1));	// 72192                  shl     bx, 1 ;~ 274D:0E95
cs=0x274d;eip=0x000e97; 	T(di = bx;);	// 72193                  mov     di, bx ;~ 274D:0E97
cs=0x274d;eip=0x000e99; 	T(SHL(di, 1));	// 72194                  shl     di, 1 ;~ 274D:0E99
loc_3694b:
	// 6979 
cs=0x274d;eip=0x000e9b; 	T(MOV(cx, *(dw*)(raddr(ds,bx-0x6A72))));	// 72197                  mov     cx, [bx-6A72h] ;~ 274D:0E9B
cs=0x274d;eip=0x000e9f; 	T(ax = word_4a4b2;);	// 72198                  mov     ax, word_4A4B2 ;~ 274D:0E9F
cs=0x274d;eip=0x000ea2; 	T(IMUL1_2(cx));	// 72199                  imul    cx ;~ 274D:0EA2
cs=0x274d;eip=0x000ea4; 	T(SHL(ax, 1));	// 72200                  shl     ax, 1 ;~ 274D:0EA4
cs=0x274d;eip=0x000ea6; 	T(RCL(dx, 1));	// 72201                  rcl     dx, 1 ;~ 274D:0EA6
cs=0x274d;eip=0x000ea8; 	X(MOV(*(dw*)(raddr(ds,di+0x2C68)), ax));	// 72202                  mov     [di+2C68h], ax ;~ 274D:0EA8
cs=0x274d;eip=0x000eac; 	X(MOV(*(dw*)(raddr(ds,di+0x2C6A)), dx));	// 72203                  mov     [di+2C6Ah], dx ;~ 274D:0EAC
cs=0x274d;eip=0x000eb0; 	T(ax = word_4a4b4;);	// 72204                  mov     ax, word_4A4B4 ;~ 274D:0EB0
cs=0x274d;eip=0x000eb3; 	T(IMUL1_2(cx));	// 72205                  imul    cx ;~ 274D:0EB3
cs=0x274d;eip=0x000eb5; 	T(SHL(ax, 1));	// 72206                  shl     ax, 1 ;~ 274D:0EB5
cs=0x274d;eip=0x000eb7; 	T(RCL(dx, 1));	// 72207                  rcl     dx, 1 ;~ 274D:0EB7
cs=0x274d;eip=0x000eb9; 	X(MOV(*(dw*)(raddr(ds,di+0x2CE8)), ax));	// 72208                  mov     [di+2CE8h], ax ;~ 274D:0EB9
cs=0x274d;eip=0x000ebd; 	X(MOV(*(dw*)(raddr(ds,di+0x2CEA)), dx));	// 72209                  mov     [di+2CEAh], dx ;~ 274D:0EBD
cs=0x274d;eip=0x000ec1; 	T(ax = word_4a4b6;);	// 72210                  mov     ax, word_4A4B6 ;~ 274D:0EC1
cs=0x274d;eip=0x000ec4; 	T(IMUL1_2(cx));	// 72211                  imul    cx ;~ 274D:0EC4
cs=0x274d;eip=0x000ec6; 	T(SHL(ax, 1));	// 72212                  shl     ax, 1 ;~ 274D:0EC6
cs=0x274d;eip=0x000ec8; 	T(RCL(dx, 1));	// 72213                  rcl     dx, 1 ;~ 274D:0EC8
cs=0x274d;eip=0x000eca; 	X(MOV(*(dw*)(raddr(ds,di+0x2D68)), ax));	// 72214                  mov     [di+2D68h], ax ;~ 274D:0ECA
cs=0x274d;eip=0x000ece; 	X(MOV(*(dw*)(raddr(ds,di+0x2D6A)), dx));	// 72215                  mov     [di+2D6Ah], dx ;~ 274D:0ECE
cs=0x274d;eip=0x000ed2; 	T(SUB(di, 4));	// 72216                  sub     di, 4 ;~ 274D:0ED2
cs=0x274d;eip=0x000ed5; 	T(SUB(bx, 2));	// 72217                  sub     bx, 2 ;~ 274D:0ED5
cs=0x274d;eip=0x000ed8; 	J(JNS(loc_3694b));	// 72218                  jns     short loc_3694B ;~ 274D:0ED8
cs=0x274d;eip=0x000eda; 	T(si = word_4a046;);	// 72219                  mov     si, word_4A046 ;~ 274D:0EDA
cs=0x274d;eip=0x000ede; 	T(DEC(si));	// 72220                  dec     si ;~ 274D:0EDE
loc_3698f:
	// 6980 
cs=0x274d;eip=0x000edf; 	T(MOV(bx, *(dw*)(raddr(ds,si-0x79A2))));	// 72223                  mov     bx, [si-79A2h] ;~ 274D:0EDF
cs=0x274d;eip=0x000ee3; 	T(AND(bx, 0x0FF));	// 72224                  and     bx, 0FFh ;~ 274D:0EE3
cs=0x274d;eip=0x000ee7; 	T(SHL(bx, 1));	// 72225                  shl     bx, 1 ;~ 274D:0EE7
cs=0x274d;eip=0x000ee9; 	T(SHL(bx, 1));	// 72226                  shl     bx, 1 ;~ 274D:0EE9
cs=0x274d;eip=0x000eeb; 	T(MOV(di, *(dw*)(raddr(ds,si-0x7802))));	// 72227                  mov     di, [si-7802h] ;~ 274D:0EEB
cs=0x274d;eip=0x000eef; 	T(AND(di, 0x0FF));	// 72228                  and     di, 0FFh ;~ 274D:0EEF
cs=0x274d;eip=0x000ef3; 	T(SHL(di, 1));	// 72229                  shl     di, 1 ;~ 274D:0EF3
cs=0x274d;eip=0x000ef5; 	T(SHL(di, 1));	// 72230                  shl     di, 1 ;~ 274D:0EF5
cs=0x274d;eip=0x000ef7; 	T(MOV(bp, *(dw*)(raddr(ds,si-0x7748))));	// 72231                  mov     bp, [si-7748h] ;~ 274D:0EF7
cs=0x274d;eip=0x000efb; 	T(AND(bp, 0x0FF));	// 72232                  and     bp, 0FFh ;~ 274D:0EFB
cs=0x274d;eip=0x000eff; 	T(SHL(bp, 1));	// 72233                  shl     bp, 1 ;~ 274D:0EFF
cs=0x274d;eip=0x000f01; 	T(SHL(bp, 1));	// 72234                  shl     bp, 1 ;~ 274D:0F01
cs=0x274d;eip=0x000f03; 	T(LES(ax, *(dw*)(raddr(ds,bx+0x2A88))));	// 72235                  les     ax, [bx+2A88h] ;~ 274D:0F03
cs=0x274d;eip=0x000f07; 	T(dx = es;);	// 72237                  mov     dx, es ;~ 274D:0F07
cs=0x274d;eip=0x000f09; 	T(LES(cx, *(dw*)(raddr(ss,bp+0x2C08))));	// 72238                  les     cx, [bp+2C08h] ;~ 274D:0F09
cs=0x274d;eip=0x000f0d; 	T(ADD(ax, cx));	// 72239                  add     ax, cx ;~ 274D:0F0D
cs=0x274d;eip=0x000f0f; 	T(cx = es;);	// 72240                  mov     cx, es ;~ 274D:0F0F
cs=0x274d;eip=0x000f11; 	T(ADC(dx, cx));	// 72241                  adc     dx, cx ;~ 274D:0F11
cs=0x274d;eip=0x000f13; 	T(LES(cx, *(dw*)(raddr(ds,di+0x2C68))));	// 72242                  les     cx, [di+2C68h] ;~ 274D:0F13
cs=0x274d;eip=0x000f17; 	T(ADD(ax, cx));	// 72243                  add     ax, cx ;~ 274D:0F17
cs=0x274d;eip=0x000f19; 	T(cx = es;);	// 72244                  mov     cx, es ;~ 274D:0F19
cs=0x274d;eip=0x000f1b; 	T(ADC(dx, cx));	// 72245                  adc     dx, cx ;~ 274D:0F1B
cs=0x274d;eip=0x000f1d; 	T(SHL(si, 1));	// 72246                  shl     si, 1 ;~ 274D:0F1D
cs=0x274d;eip=0x000f1f; 	T(SHL(si, 1));	// 72247                  shl     si, 1 ;~ 274D:0F1F
cs=0x274d;eip=0x000f21; 	X(MOV(*(dw*)(raddr(ds,si+0x2380)), ax));	// 72248                  mov     [si+2380h], ax ;~ 274D:0F21
cs=0x274d;eip=0x000f25; 	X(MOV(*(dw*)(raddr(ds,si+0x2382)), dx));	// 72249                  mov     [si+2382h], dx ;~ 274D:0F25
cs=0x274d;eip=0x000f29; 	T(LES(ax, *(dw*)(raddr(ds,bx+0x2B08))));	// 72250                  les     ax, [bx+2B08h] ;~ 274D:0F29
cs=0x274d;eip=0x000f2d; 	T(dx = es;);	// 72251                  mov     dx, es ;~ 274D:0F2D
cs=0x274d;eip=0x000f2f; 	T(LES(cx, *(dw*)(raddr(ss,bp+0x2C28))));	// 72252                  les     cx, [bp+2C28h] ;~ 274D:0F2F
cs=0x274d;eip=0x000f33; 	T(ADD(ax, cx));	// 72253                  add     ax, cx ;~ 274D:0F33
cs=0x274d;eip=0x000f35; 	T(cx = es;);	// 72254                  mov     cx, es ;~ 274D:0F35
cs=0x274d;eip=0x000f37; 	T(ADC(dx, cx));	// 72255                  adc     dx, cx ;~ 274D:0F37
cs=0x274d;eip=0x000f39; 	T(LES(cx, *(dw*)(raddr(ds,di+0x2CE8))));	// 72256                  les     cx, [di+2CE8h] ;~ 274D:0F39
cs=0x274d;eip=0x000f3d; 	T(ADD(ax, cx));	// 72257                  add     ax, cx ;~ 274D:0F3D
cs=0x274d;eip=0x000f3f; 	T(cx = es;);	// 72258                  mov     cx, es ;~ 274D:0F3F
cs=0x274d;eip=0x000f41; 	T(ADC(dx, cx));	// 72259                  adc     dx, cx ;~ 274D:0F41
cs=0x274d;eip=0x000f43; 	X(MOV(*(dw*)(raddr(ds,si+0x25D8)), ax));	// 72260                  mov     [si+25D8h], ax ;~ 274D:0F43
cs=0x274d;eip=0x000f47; 	X(MOV(*(dw*)(raddr(ds,si+0x25DA)), dx));	// 72261                  mov     [si+25DAh], dx ;~ 274D:0F47
cs=0x274d;eip=0x000f4b; 	T(LES(ax, *(dw*)(raddr(ds,bx+0x2B88))));	// 72262                  les     ax, [bx+2B88h] ;~ 274D:0F4B
cs=0x274d;eip=0x000f4f; 	T(dx = es;);	// 72263                  mov     dx, es ;~ 274D:0F4F
cs=0x274d;eip=0x000f51; 	T(LES(cx, *(dw*)(raddr(ss,bp+0x2C48))));	// 72264                  les     cx, [bp+2C48h] ;~ 274D:0F51
cs=0x274d;eip=0x000f55; 	T(ADD(ax, cx));	// 72265                  add     ax, cx ;~ 274D:0F55
cs=0x274d;eip=0x000f57; 	T(cx = es;);	// 72266                  mov     cx, es ;~ 274D:0F57
cs=0x274d;eip=0x000f59; 	T(ADC(dx, cx));	// 72267                  adc     dx, cx ;~ 274D:0F59
cs=0x274d;eip=0x000f5b; 	T(LES(cx, *(dw*)(raddr(ds,di+0x2D68))));	// 72268                  les     cx, [di+2D68h] ;~ 274D:0F5B
cs=0x274d;eip=0x000f5f; 	T(ADD(ax, cx));	// 72269                  add     ax, cx ;~ 274D:0F5F
cs=0x274d;eip=0x000f61; 	T(cx = es;);	// 72270                  mov     cx, es ;~ 274D:0F61
cs=0x274d;eip=0x000f63; 	T(ADC(dx, cx));	// 72271                  adc     dx, cx ;~ 274D:0F63
cs=0x274d;eip=0x000f65; 	X(MOV(*(dw*)(raddr(ds,si+0x2830)), ax));	// 72272                  mov     [si+2830h], ax ;~ 274D:0F65
cs=0x274d;eip=0x000f69; 	X(MOV(*(dw*)(raddr(ds,si+0x2832)), dx));	// 72273                  mov     [si+2832h], dx ;~ 274D:0F69
cs=0x274d;eip=0x000f6d; 	T(SHR(si, 1));	// 72274                  shr     si, 1 ;~ 274D:0F6D
cs=0x274d;eip=0x000f6f; 	T(SHR(si, 1));	// 72275                  shr     si, 1 ;~ 274D:0F6F
cs=0x274d;eip=0x000f71; 	T(DEC(si));	// 72276                  dec     si ;~ 274D:0F71
cs=0x274d;eip=0x000f72; 	J(JS(locret_36a27));	// 72277                  js      short locret_36A27 ;~ 274D:0F72
cs=0x274d;eip=0x000f74; 	J(JMP(loc_3698f));	// 72278                  jmp     loc_3698F ;~ 274D:0F74
locret_36a27:
	// 6981 
cs=0x274d;eip=0x000f77; 	J(RETN(0));	// 72282                  retn ;~ 274D:0F77

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_368ac: 	goto loc_368ac;
        case m2c::kloc_368b7: 	goto loc_368b7;
        case m2c::kloc_36901: 	goto loc_36901;
        case m2c::kloc_3694b: 	goto loc_3694b;
        case m2c::kloc_3698f: 	goto loc_3698f;
        case m2c::klocret_36a27: 	goto locret_36a27;
        case m2c::ksub_368a4: 	goto sub_368a4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group79(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group79:
    _begin:
seg35ab_f78_proc:
	// 72288 
loc_36a28:
	// 6982 
cs=0x274d;eip=0x000f78; 	T(bl = al;);	// 72289                  mov     bl, al ;~ 274D:0F78
cs=0x274d;eip=0x000f7a; 	T(AND(bx, 0x7F));	// 72290                  and     bx, 7Fh ;~ 274D:0F7A
cs=0x274d;eip=0x000f7d; 	T(SHL(bx, 1));	// 72291                  shl     bx, 1 ;~ 274D:0F7D
cs=0x274d;eip=0x000f7f; 	T(SHL(bx, 1));	// 72292                  shl     bx, 1 ;~ 274D:0F7F
cs=0x274d;eip=0x000f81; 	X(word_4cdb9 = bx;);	// 72293                  mov     word_4CDB9, bx ;~ 274D:0F81
cs=0x274d;eip=0x000f85; 	T(bx = 0x0FFFC;);	// 72294                  mov     bx, 0FFFCh ;~ 274D:0F85
loc_36a38:
	// 6983 
cs=0x274d;eip=0x000f88; 	T(ADD(bx, 4));	// 72298                  add     bx, 4 ;~ 274D:0F88
cs=0x274d;eip=0x000f8b; 	T(CMP(bx, word_4cdb9));	// 72299                  cmp     bx, word_4CDB9 ;~ 274D:0F8B
cs=0x274d;eip=0x000f8f; 	J(JL(loc_36a42));	// 72300                  jl      short loc_36A42 ;~ 274D:0F8F
cs=0x274d;eip=0x000f91; 	J(RETN(0));	// 72301                  retn ;~ 274D:0F91
loc_36a42:
	// 6984 
cs=0x274d;eip=0x000f92; 	J(CALL(sub_37652,0));	// 72305                  call    sub_37652 ;~ 274D:0F92
cs=0x274d;eip=0x000f95; 	T(INC(si));	// 72306                  inc     si ;~ 274D:0F95
cs=0x274d;eip=0x000f96; 	T(OR(ax, ax));	// 72307                  or      ax, ax ;~ 274D:0F96
cs=0x274d;eip=0x000f98; 	J(JZ(loc_36a38));	// 72308                  jz      short loc_36A38 ;~ 274D:0F98
cs=0x274d;eip=0x000f9a; 	T(MOV(bp, *(dw*)(raddr(es,si-1))));	// 72309                  mov     bp, es:[si-1] ;~ 274D:0F9A
cs=0x274d;eip=0x000f9e; 	T(AND(bp, 0x0FF));	// 72310                  and     bp, 0FFh ;~ 274D:0F9E
cs=0x274d;eip=0x000fa2; 	T(MOV(al, *(raddr(ss,bp-0x7748))));	// 72311                  mov     al, [bp-7748h] ;~ 274D:0FA2
cs=0x274d;eip=0x000fa6; 	T(SUB(ah, ah));	// 72312                  sub     ah, ah ;~ 274D:0FA6
cs=0x274d;eip=0x000fa8; 	T(SHL(ax, 1));	// 72313                  shl     ax, 1 ;~ 274D:0FA8
cs=0x274d;eip=0x000faa; 	T(bp = ax;);	// 72314                  mov     bp, ax ;~ 274D:0FAA
cs=0x274d;eip=0x000fac; 	T(MOV(cx, *(dw*)(raddr(ss,bp-0x6A30))));	// 72315                  mov     cx, [bp-6A30h] ;~ 274D:0FAC
cs=0x274d;eip=0x000fb0; 	T(MOV(bp, *(dw*)(raddr(es,si-1))));	// 72316                  mov     bp, es:[si-1] ;~ 274D:0FB0
cs=0x274d;eip=0x000fb4; 	T(AND(bp, 0x0FF));	// 72317                  and     bp, 0FFh ;~ 274D:0FB4
cs=0x274d;eip=0x000fb8; 	T(MOV(al, *(raddr(ss,bp-0x7802))));	// 72318                  mov     al, [bp-7802h] ;~ 274D:0FB8
cs=0x274d;eip=0x000fbc; 	T(SUB(ah, ah));	// 72319                  sub     ah, ah ;~ 274D:0FBC
cs=0x274d;eip=0x000fbe; 	T(SHL(ax, 1));	// 72320                  shl     ax, 1 ;~ 274D:0FBE
cs=0x274d;eip=0x000fc0; 	T(bp = ax;);	// 72321                  mov     bp, ax ;~ 274D:0FC0
cs=0x274d;eip=0x000fc2; 	T(MOV(ax, *(dw*)(raddr(ss,bp-0x6A72))));	// 72322                  mov     ax, [bp-6A72h] ;~ 274D:0FC2
cs=0x274d;eip=0x000fc6; 	X(word_4cdbb = ax;);	// 72323                  mov     word_4CDBB, ax ;~ 274D:0FC6
cs=0x274d;eip=0x000fc9; 	T(MOV(bp, *(dw*)(raddr(es,si-1))));	// 72324                  mov     bp, es:[si-1] ;~ 274D:0FC9
cs=0x274d;eip=0x000fcd; 	T(AND(bp, 0x0FF));	// 72325                  and     bp, 0FFh ;~ 274D:0FCD
cs=0x274d;eip=0x000fd1; 	T(MOV(al, *(raddr(ss,bp-0x79A2))));	// 72326                  mov     al, [bp-79A2h] ;~ 274D:0FD1
cs=0x274d;eip=0x000fd5; 	T(SUB(ah, ah));	// 72327                  sub     ah, ah ;~ 274D:0FD5
cs=0x274d;eip=0x000fd7; 	T(SHL(ax, 1));	// 72328                  shl     ax, 1 ;~ 274D:0FD7
cs=0x274d;eip=0x000fd9; 	T(bp = ax;);	// 72329                  mov     bp, ax ;~ 274D:0FD9
cs=0x274d;eip=0x000fdb; 	T(MOV(bp, *(dw*)(raddr(ss,bp-0x6AB4))));	// 72330                  mov     bp, [bp-6AB4h] ;~ 274D:0FDB
cs=0x274d;eip=0x000fdf; 	X(PUSH(si));	// 72331                  push    si ;~ 274D:0FDF
cs=0x274d;eip=0x000fe0; 	T(ax = word_4cdbb;);	// 72332                  mov     ax, word_4CDBB ;~ 274D:0FE0
cs=0x274d;eip=0x000fe3; 	X(IMUL1_2(word_4a4d6));	// 72333                  imul    word_4A4D6 ;~ 274D:0FE3
cs=0x274d;eip=0x000fe7; 	T(di = dx;);	// 72334                  mov     di, dx ;~ 274D:0FE7
cs=0x274d;eip=0x000fe9; 	T(si = ax;);	// 72335                  mov     si, ax ;~ 274D:0FE9
cs=0x274d;eip=0x000feb; 	T(ax = word_4a4d0;);	// 72336                  mov     ax, word_4A4D0 ;~ 274D:0FEB
cs=0x274d;eip=0x000fee; 	T(IMUL1_2(cx));	// 72337                  imul    cx ;~ 274D:0FEE
cs=0x274d;eip=0x000ff0; 	T(ADD(si, ax));	// 72338                  add     si, ax ;~ 274D:0FF0
cs=0x274d;eip=0x000ff2; 	T(ADC(di, dx));	// 72339                  adc     di, dx ;~ 274D:0FF2
cs=0x274d;eip=0x000ff4; 	T(ax = word_4a4ca;);	// 72340                  mov     ax, word_4A4CA ;~ 274D:0FF4
cs=0x274d;eip=0x000ff7; 	T(IMUL1_2(bp));	// 72341                  imul    bp ;~ 274D:0FF7
cs=0x274d;eip=0x000ff9; 	T(ADD(si, ax));	// 72342                  add     si, ax ;~ 274D:0FF9
cs=0x274d;eip=0x000ffb; 	T(ADC(di, dx));	// 72343                  adc     di, dx ;~ 274D:0FFB
cs=0x274d;eip=0x000ffd; 	T(SHL(si, 1));	// 72344                  shl     si, 1 ;~ 274D:0FFD
cs=0x274d;eip=0x000fff; 	T(RCL(di, 1));	// 72345                  rcl     di, 1 ;~ 274D:0FFF
cs=0x274d;eip=0x001001; 	T(ADD(si, word_4a47c));	// 72346                  add     si, word_4A47C ;~ 274D:1001
cs=0x274d;eip=0x001005; 	T(ADC(di, word_4a47e));	// 72347                  adc     di, word_4A47E ;~ 274D:1005
cs=0x274d;eip=0x001009; 	X(MOV(*(dw*)(raddr(ds,bx+0x1A0C)), si));	// 72348                  mov     [bx+1A0Ch], si ;~ 274D:1009
cs=0x274d;eip=0x00100d; 	X(MOV(*(dw*)(raddr(ds,bx+0x1A0E)), di));	// 72349                  mov     [bx+1A0Eh], di ;~ 274D:100D
cs=0x274d;eip=0x001011; 	T(ax = word_4cdbb;);	// 72350                  mov     ax, word_4CDBB ;~ 274D:1011
cs=0x274d;eip=0x001014; 	X(IMUL1_2(word_4a4d8));	// 72351                  imul    word_4A4D8 ;~ 274D:1014
cs=0x274d;eip=0x001018; 	T(di = dx;);	// 72352                  mov     di, dx ;~ 274D:1018
cs=0x274d;eip=0x00101a; 	T(si = ax;);	// 72353                  mov     si, ax ;~ 274D:101A
cs=0x274d;eip=0x00101c; 	T(ax = word_4a4d2;);	// 72354                  mov     ax, word_4A4D2 ;~ 274D:101C
cs=0x274d;eip=0x00101f; 	T(IMUL1_2(cx));	// 72355                  imul    cx ;~ 274D:101F
cs=0x274d;eip=0x001021; 	T(ADD(si, ax));	// 72356                  add     si, ax ;~ 274D:1021
cs=0x274d;eip=0x001023; 	T(ADC(di, dx));	// 72357                  adc     di, dx ;~ 274D:1023
cs=0x274d;eip=0x001025; 	T(ax = word_4a4cc;);	// 72358                  mov     ax, word_4A4CC ;~ 274D:1025
cs=0x274d;eip=0x001028; 	T(IMUL1_2(bp));	// 72359                  imul    bp ;~ 274D:1028
cs=0x274d;eip=0x00102a; 	T(ADD(si, ax));	// 72360                  add     si, ax ;~ 274D:102A
cs=0x274d;eip=0x00102c; 	T(ADC(di, dx));	// 72361                  adc     di, dx ;~ 274D:102C
cs=0x274d;eip=0x00102e; 	T(SHL(si, 1));	// 72362                  shl     si, 1 ;~ 274D:102E
cs=0x274d;eip=0x001030; 	T(RCL(di, 1));	// 72363                  rcl     di, 1 ;~ 274D:1030
cs=0x274d;eip=0x001032; 	T(ADD(si, word_4a480));	// 72364                  add     si, word_4A480 ;~ 274D:1032
cs=0x274d;eip=0x001036; 	T(ADC(di, word_4a482));	// 72365                  adc     di, word_4A482 ;~ 274D:1036
cs=0x274d;eip=0x00103a; 	X(MOV(*(dw*)(raddr(ds,bx+0x1BF0)), si));	// 72366                  mov     [bx+1BF0h], si ;~ 274D:103A
cs=0x274d;eip=0x00103e; 	X(MOV(*(dw*)(raddr(ds,bx+0x1BF2)), di));	// 72367                  mov     [bx+1BF2h], di ;~ 274D:103E
cs=0x274d;eip=0x001042; 	T(ax = word_4cdbb;);	// 72368                  mov     ax, word_4CDBB ;~ 274D:1042
cs=0x274d;eip=0x001045; 	X(IMUL1_2(word_4a4da));	// 72369                  imul    word_4A4DA ;~ 274D:1045
cs=0x274d;eip=0x001049; 	T(di = dx;);	// 72370                  mov     di, dx ;~ 274D:1049
cs=0x274d;eip=0x00104b; 	T(si = ax;);	// 72371                  mov     si, ax ;~ 274D:104B
cs=0x274d;eip=0x00104d; 	T(ax = word_4a4d4;);	// 72372                  mov     ax, word_4A4D4 ;~ 274D:104D
cs=0x274d;eip=0x001050; 	T(IMUL1_2(cx));	// 72373                  imul    cx ;~ 274D:1050
cs=0x274d;eip=0x001052; 	T(ADD(si, ax));	// 72374                  add     si, ax ;~ 274D:1052
cs=0x274d;eip=0x001054; 	T(ADC(di, dx));	// 72375                  adc     di, dx ;~ 274D:1054
cs=0x274d;eip=0x001056; 	T(ax = word_4a4ce;);	// 72376                  mov     ax, word_4A4CE ;~ 274D:1056
cs=0x274d;eip=0x001059; 	T(IMUL1_2(bp));	// 72377                  imul    bp ;~ 274D:1059
cs=0x274d;eip=0x00105b; 	T(ADD(si, ax));	// 72378                  add     si, ax ;~ 274D:105B
cs=0x274d;eip=0x00105d; 	T(ADC(di, dx));	// 72379                  adc     di, dx ;~ 274D:105D
cs=0x274d;eip=0x00105f; 	T(SHL(si, 1));	// 72380                  shl     si, 1 ;~ 274D:105F
cs=0x274d;eip=0x001061; 	T(RCL(di, 1));	// 72381                  rcl     di, 1 ;~ 274D:1061
cs=0x274d;eip=0x001063; 	T(ADD(si, word_4a484));	// 72382                  add     si, word_4A484 ;~ 274D:1063
cs=0x274d;eip=0x001067; 	T(ADC(di, word_4a486));	// 72383                  adc     di, word_4A486 ;~ 274D:1067
cs=0x274d;eip=0x00106b; 	X(MOV(*(dw*)(raddr(ds,bx+0x1DD4)), si));	// 72384                  mov     [bx+1DD4h], si ;~ 274D:106B
cs=0x274d;eip=0x00106f; 	X(MOV(*(dw*)(raddr(ds,bx+0x1DD6)), di));	// 72385                  mov     [bx+1DD6h], di ;~ 274D:106F
cs=0x274d;eip=0x001073; 	J(CALL(sub_35b28,0));	// 72386                  call    sub_35B28 ;~ 274D:1073
cs=0x274d;eip=0x001076; 	X(POP(si));	// 72387                  pop     si ;~ 274D:1076
cs=0x274d;eip=0x001077; 	J(JMP(loc_36a38));	// 72388                  jmp     loc_36A38 ;~ 274D:1077
loc_36b2a:
	// 6985 
cs=0x274d;eip=0x00107a; 	J(JMP(loc_36a28));	// 72392                  jmp     loc_36A28 ;~ 274D:107A
loc_36b2d:
	// 6986 
cs=0x274d;eip=0x00107d; 	T(CMP(byte_4cdb8, 0));	// 72397                  cmp     byte_4CDB8, 0 ;~ 274D:107D
cs=0x274d;eip=0x001082; 	J(JNZ(loc_36b2a));	// 72398                  jnz     short loc_36B2A ;~ 274D:1082
cs=0x274d;eip=0x001084; 	T(cl = al;);	// 72399                  mov     cl, al ;~ 274D:1084
cs=0x274d;eip=0x001086; 	T(AND(cx, 0x7F));	// 72400                  and     cx, 7Fh ;~ 274D:1086
cs=0x274d;eip=0x001089; 	T(SUB(bx, bx));	// 72401                  sub     bx, bx ;~ 274D:1089
loc_36b3b:
	// 6987 
cs=0x274d;eip=0x00108b; 	J(CALL(sub_37652,0));	// 72405                  call    sub_37652 ;~ 274D:108B
cs=0x274d;eip=0x00108e; 	J(JNZ(loc_36b47));	// 72406                  jnz     short loc_36B47 ;~ 274D:108E
cs=0x274d;eip=0x001090; 	T(INC(si));	// 72407                  inc     si ;~ 274D:1090
cs=0x274d;eip=0x001091; 	T(ADD(bx, 4));	// 72408                  add     bx, 4 ;~ 274D:1091
cs=0x274d;eip=0x001094; 	J(LOOP(loc_36b3b));	// 72409                  loop    loc_36B3B ;~ 274D:1094
cs=0x274d;eip=0x001096; 	J(RETN(0));	// 72410                  retn ;~ 274D:1096
loc_36b47:
	// 6988 
cs=0x274d;eip=0x001097; 	X(LODS(*(raddr(es,si)),si,1));	// 72414                  lods    byte ptr es:[si] ;~ 274D:1097
cs=0x274d;eip=0x001099; 	T(SUB(ah, ah));	// 72415                  sub     ah, ah ;~ 274D:1099
cs=0x274d;eip=0x00109b; 	T(SHL(ax, 1));	// 72416                  shl     ax, 1 ;~ 274D:109B
cs=0x274d;eip=0x00109d; 	T(SHL(ax, 1));	// 72417                  shl     ax, 1 ;~ 274D:109D
cs=0x274d;eip=0x00109f; 	T(di = ax;);	// 72418                  mov     di, ax ;~ 274D:109F
cs=0x274d;eip=0x0010a1; 	T(ax = word_4a47c;);	// 72419                  mov     ax, word_4A47C ;~ 274D:10A1
cs=0x274d;eip=0x0010a4; 	T(ADD(ax, *(dw*)(raddr(ds,di+0x2380))));	// 72420                  add     ax, [di+2380h] ;~ 274D:10A4
cs=0x274d;eip=0x0010a8; 	X(MOV(*(dw*)(raddr(ds,bx+0x1A0C)), ax));	// 72421                  mov     [bx+1A0Ch], ax ;~ 274D:10A8
cs=0x274d;eip=0x0010ac; 	T(ax = word_4a47e;);	// 72422                  mov     ax, word_4A47E ;~ 274D:10AC
cs=0x274d;eip=0x0010af; 	T(ADC(ax, *(dw*)(raddr(ds,di+0x2382))));	// 72423                  adc     ax, [di+2382h] ;~ 274D:10AF
cs=0x274d;eip=0x0010b3; 	X(MOV(*(dw*)(raddr(ds,bx+0x1A0E)), ax));	// 72424                  mov     [bx+1A0Eh], ax ;~ 274D:10B3
cs=0x274d;eip=0x0010b7; 	T(ax = word_4a480;);	// 72425                  mov     ax, word_4A480 ;~ 274D:10B7
cs=0x274d;eip=0x0010ba; 	T(ADD(ax, *(dw*)(raddr(ds,di+0x25D8))));	// 72426                  add     ax, [di+25D8h] ;~ 274D:10BA
cs=0x274d;eip=0x0010be; 	X(MOV(*(dw*)(raddr(ds,bx+0x1BF0)), ax));	// 72427                  mov     [bx+1BF0h], ax ;~ 274D:10BE
cs=0x274d;eip=0x0010c2; 	T(ax = word_4a482;);	// 72428                  mov     ax, word_4A482 ;~ 274D:10C2
cs=0x274d;eip=0x0010c5; 	T(ADC(ax, *(dw*)(raddr(ds,di+0x25DA))));	// 72429                  adc     ax, [di+25DAh] ;~ 274D:10C5
cs=0x274d;eip=0x0010c9; 	X(MOV(*(dw*)(raddr(ds,bx+0x1BF2)), ax));	// 72430                  mov     [bx+1BF2h], ax ;~ 274D:10C9
cs=0x274d;eip=0x0010cd; 	T(ax = word_4a484;);	// 72431                  mov     ax, word_4A484 ;~ 274D:10CD
cs=0x274d;eip=0x0010d0; 	T(ADD(ax, *(dw*)(raddr(ds,di+0x2830))));	// 72432                  add     ax, [di+2830h] ;~ 274D:10D0
cs=0x274d;eip=0x0010d4; 	X(MOV(*(dw*)(raddr(ds,bx+0x1DD4)), ax));	// 72433                  mov     [bx+1DD4h], ax ;~ 274D:10D4
cs=0x274d;eip=0x0010d8; 	T(ax = word_4a486;);	// 72434                  mov     ax, word_4A486 ;~ 274D:10D8
cs=0x274d;eip=0x0010db; 	T(ADC(ax, *(dw*)(raddr(ds,di+0x2832))));	// 72435                  adc     ax, [di+2832h] ;~ 274D:10DB
cs=0x274d;eip=0x0010df; 	X(MOV(*(dw*)(raddr(ds,bx+0x1DD6)), ax));	// 72436                  mov     [bx+1DD6h], ax ;~ 274D:10DF
cs=0x274d;eip=0x0010e3; 	X(PUSH(cx));	// 72437                  push    cx ;~ 274D:10E3
cs=0x274d;eip=0x0010e4; 	X(PUSH(si));	// 72438                  push    si ;~ 274D:10E4
cs=0x274d;eip=0x0010e5; 	J(CALL(sub_35b28,0));	// 72439                  call    sub_35B28 ;~ 274D:10E5
cs=0x274d;eip=0x0010e8; 	X(POP(si));	// 72440                  pop     si ;~ 274D:10E8
cs=0x274d;eip=0x0010e9; 	X(POP(cx));	// 72441                  pop     cx ;~ 274D:10E9
cs=0x274d;eip=0x0010ea; 	T(ADD(bx, 4));	// 72442                  add     bx, 4 ;~ 274D:10EA
cs=0x274d;eip=0x0010ed; 	J(LOOP(loc_36b3b));	// 72443                  loop    loc_36B3B ;~ 274D:10ED
cs=0x274d;eip=0x0010ef; 	J(RETN(0));	// 72444                  retn ;~ 274D:10EF
sub_36ba0:
	// 72450 
cs=0x274d;eip=0x0010f0; 	X(LODS(*(raddr(es,si)),si,1));	// 72455                  lods    byte ptr es:[si] ;~ 274D:10F0
cs=0x274d;eip=0x0010f2; 	T(TEST(al, 0x80));	// 72456                  test    al, 80h ;~ 274D:10F2
cs=0x274d;eip=0x0010f4; 	J(JNZ(loc_36b2d));	// 72457                  jnz     short loc_36B2D ;~ 274D:10F4
cs=0x274d;eip=0x0010f6; 	T(TEST(al, 0x7F));	// 72458                  test    al, 7Fh ;~ 274D:10F6
cs=0x274d;eip=0x0010f8; 	J(JZ(locret_36bc3));	// 72459                  jz      short locret_36BC3 ;~ 274D:10F8
cs=0x274d;eip=0x0010fa; 	T(bl = al;);	// 72460                  mov     bl, al ;~ 274D:10FA
cs=0x274d;eip=0x0010fc; 	T(AND(bx, 0x7F));	// 72461                  and     bx, 7Fh ;~ 274D:10FC
cs=0x274d;eip=0x0010ff; 	T(SHL(bx, 1));	// 72462                  shl     bx, 1 ;~ 274D:10FF
cs=0x274d;eip=0x001101; 	T(SHL(bx, 1));	// 72463                  shl     bx, 1 ;~ 274D:1101
cs=0x274d;eip=0x001103; 	X(word_4cdb9 = bx;);	// 72464                  mov     word_4CDB9, bx ;~ 274D:1103
cs=0x274d;eip=0x001107; 	T(bx = 0x0FFFC;);	// 72465                  mov     bx, 0FFFCh ;~ 274D:1107
loc_36bba:
	// 6989 
cs=0x274d;eip=0x00110a; 	T(ADD(bx, 4));	// 72469                  add     bx, 4 ;~ 274D:110A
cs=0x274d;eip=0x00110d; 	T(CMP(bx, word_4cdb9));	// 72470                  cmp     bx, word_4CDB9 ;~ 274D:110D
cs=0x274d;eip=0x001111; 	J(JL(loc_36bc4));	// 72471                  jl      short loc_36BC4 ;~ 274D:1111
locret_36bc3:
	// 6990 
cs=0x274d;eip=0x001113; 	J(RETN(0));	// 72474                  retn ;~ 274D:1113
loc_36bc4:
	// 6991 
cs=0x274d;eip=0x001114; 	J(CALL(sub_37652,0));	// 72478                  call    sub_37652 ;~ 274D:1114
cs=0x274d;eip=0x001117; 	T(ADD(si, 6));	// 72479                  add     si, 6 ;~ 274D:1117
cs=0x274d;eip=0x00111a; 	T(OR(ax, ax));	// 72480                  or      ax, ax ;~ 274D:111A
cs=0x274d;eip=0x00111c; 	J(JZ(loc_36bba));	// 72481                  jz      short loc_36BBA ;~ 274D:111C
cs=0x274d;eip=0x00111e; 	T(MOV(bp, *(dw*)(raddr(es,si-6))));	// 72482                  mov     bp, es:[si-6] ;~ 274D:111E
cs=0x274d;eip=0x001122; 	T(MOV(cx, *(dw*)(raddr(es,si-2))));	// 72483                  mov     cx, es:[si-2] ;~ 274D:1122
cs=0x274d;eip=0x001126; 	T(MOV(ax, *(dw*)(raddr(es,si-4))));	// 72484                  mov     ax, es:[si-4] ;~ 274D:1126
cs=0x274d;eip=0x00112a; 	X(word_4cdbb = ax;);	// 72485                  mov     word_4CDBB, ax ;~ 274D:112A
cs=0x274d;eip=0x00112d; 	X(PUSH(si));	// 72486                  push    si ;~ 274D:112D
cs=0x274d;eip=0x00112e; 	X(IMUL1_2(word_4a4d6));	// 72487                  imul    word_4A4D6 ;~ 274D:112E
cs=0x274d;eip=0x001132; 	T(di = dx;);	// 72488                  mov     di, dx ;~ 274D:1132
cs=0x274d;eip=0x001134; 	T(si = ax;);	// 72489                  mov     si, ax ;~ 274D:1134
cs=0x274d;eip=0x001136; 	T(ax = word_4a4d0;);	// 72490                  mov     ax, word_4A4D0 ;~ 274D:1136
cs=0x274d;eip=0x001139; 	T(IMUL1_2(cx));	// 72491                  imul    cx ;~ 274D:1139
cs=0x274d;eip=0x00113b; 	T(ADD(si, ax));	// 72492                  add     si, ax ;~ 274D:113B
cs=0x274d;eip=0x00113d; 	T(ADC(di, dx));	// 72493                  adc     di, dx ;~ 274D:113D
cs=0x274d;eip=0x00113f; 	T(ax = word_4a4ca;);	// 72494                  mov     ax, word_4A4CA ;~ 274D:113F
cs=0x274d;eip=0x001142; 	T(IMUL1_2(bp));	// 72495                  imul    bp ;~ 274D:1142
cs=0x274d;eip=0x001144; 	T(ADD(si, ax));	// 72496                  add     si, ax ;~ 274D:1144
cs=0x274d;eip=0x001146; 	T(ADC(di, dx));	// 72497                  adc     di, dx ;~ 274D:1146
cs=0x274d;eip=0x001148; 	T(SHL(si, 1));	// 72498                  shl     si, 1 ;~ 274D:1148
cs=0x274d;eip=0x00114a; 	T(RCL(di, 1));	// 72499                  rcl     di, 1 ;~ 274D:114A
cs=0x274d;eip=0x00114c; 	T(ADD(si, word_4a47c));	// 72500                  add     si, word_4A47C ;~ 274D:114C
cs=0x274d;eip=0x001150; 	T(ADC(di, word_4a47e));	// 72501                  adc     di, word_4A47E ;~ 274D:1150
cs=0x274d;eip=0x001154; 	X(MOV(*(dw*)(raddr(ds,bx+0x1A0C)), si));	// 72502                  mov     [bx+1A0Ch], si ;~ 274D:1154
cs=0x274d;eip=0x001158; 	X(MOV(*(dw*)(raddr(ds,bx+0x1A0E)), di));	// 72503                  mov     [bx+1A0Eh], di ;~ 274D:1158
cs=0x274d;eip=0x00115c; 	T(ax = word_4cdbb;);	// 72504                  mov     ax, word_4CDBB ;~ 274D:115C
cs=0x274d;eip=0x00115f; 	X(IMUL1_2(word_4a4d8));	// 72505                  imul    word_4A4D8 ;~ 274D:115F
cs=0x274d;eip=0x001163; 	T(di = dx;);	// 72506                  mov     di, dx ;~ 274D:1163
cs=0x274d;eip=0x001165; 	T(si = ax;);	// 72507                  mov     si, ax ;~ 274D:1165
cs=0x274d;eip=0x001167; 	T(ax = word_4a4d2;);	// 72508                  mov     ax, word_4A4D2 ;~ 274D:1167
cs=0x274d;eip=0x00116a; 	T(IMUL1_2(cx));	// 72509                  imul    cx ;~ 274D:116A
cs=0x274d;eip=0x00116c; 	T(ADD(si, ax));	// 72510                  add     si, ax ;~ 274D:116C
cs=0x274d;eip=0x00116e; 	T(ADC(di, dx));	// 72511                  adc     di, dx ;~ 274D:116E
cs=0x274d;eip=0x001170; 	T(ax = word_4a4cc;);	// 72512                  mov     ax, word_4A4CC ;~ 274D:1170
cs=0x274d;eip=0x001173; 	T(IMUL1_2(bp));	// 72513                  imul    bp ;~ 274D:1173
cs=0x274d;eip=0x001175; 	T(ADD(si, ax));	// 72514                  add     si, ax ;~ 274D:1175
cs=0x274d;eip=0x001177; 	T(ADC(di, dx));	// 72515                  adc     di, dx ;~ 274D:1177
cs=0x274d;eip=0x001179; 	T(SHL(si, 1));	// 72516                  shl     si, 1 ;~ 274D:1179
cs=0x274d;eip=0x00117b; 	T(RCL(di, 1));	// 72517                  rcl     di, 1 ;~ 274D:117B
cs=0x274d;eip=0x00117d; 	T(ADD(si, word_4a480));	// 72518                  add     si, word_4A480 ;~ 274D:117D
cs=0x274d;eip=0x001181; 	T(ADC(di, word_4a482));	// 72519                  adc     di, word_4A482 ;~ 274D:1181
cs=0x274d;eip=0x001185; 	X(MOV(*(dw*)(raddr(ds,bx+0x1BF0)), si));	// 72520                  mov     [bx+1BF0h], si ;~ 274D:1185
cs=0x274d;eip=0x001189; 	X(MOV(*(dw*)(raddr(ds,bx+0x1BF2)), di));	// 72521                  mov     [bx+1BF2h], di ;~ 274D:1189
cs=0x274d;eip=0x00118d; 	T(ax = word_4cdbb;);	// 72522                  mov     ax, word_4CDBB ;~ 274D:118D
cs=0x274d;eip=0x001190; 	X(IMUL1_2(word_4a4da));	// 72523                  imul    word_4A4DA ;~ 274D:1190
cs=0x274d;eip=0x001194; 	T(di = dx;);	// 72524                  mov     di, dx ;~ 274D:1194
cs=0x274d;eip=0x001196; 	T(si = ax;);	// 72525                  mov     si, ax ;~ 274D:1196
cs=0x274d;eip=0x001198; 	T(ax = word_4a4d4;);	// 72526                  mov     ax, word_4A4D4 ;~ 274D:1198
cs=0x274d;eip=0x00119b; 	T(IMUL1_2(cx));	// 72527                  imul    cx ;~ 274D:119B
cs=0x274d;eip=0x00119d; 	T(ADD(si, ax));	// 72528                  add     si, ax ;~ 274D:119D
cs=0x274d;eip=0x00119f; 	T(ADC(di, dx));	// 72529                  adc     di, dx ;~ 274D:119F
cs=0x274d;eip=0x0011a1; 	T(ax = word_4a4ce;);	// 72530                  mov     ax, word_4A4CE ;~ 274D:11A1
cs=0x274d;eip=0x0011a4; 	T(IMUL1_2(bp));	// 72531                  imul    bp ;~ 274D:11A4
cs=0x274d;eip=0x0011a6; 	T(ADD(si, ax));	// 72532                  add     si, ax ;~ 274D:11A6
cs=0x274d;eip=0x0011a8; 	T(ADC(di, dx));	// 72533                  adc     di, dx ;~ 274D:11A8
cs=0x274d;eip=0x0011aa; 	T(SHL(si, 1));	// 72534                  shl     si, 1 ;~ 274D:11AA
cs=0x274d;eip=0x0011ac; 	T(RCL(di, 1));	// 72535                  rcl     di, 1 ;~ 274D:11AC
cs=0x274d;eip=0x0011ae; 	T(ADD(si, word_4a484));	// 72536                  add     si, word_4A484 ;~ 274D:11AE
cs=0x274d;eip=0x0011b2; 	T(ADC(di, word_4a486));	// 72537                  adc     di, word_4A486 ;~ 274D:11B2
cs=0x274d;eip=0x0011b6; 	X(MOV(*(dw*)(raddr(ds,bx+0x1DD4)), si));	// 72538                  mov     [bx+1DD4h], si ;~ 274D:11B6
cs=0x274d;eip=0x0011ba; 	X(MOV(*(dw*)(raddr(ds,bx+0x1DD6)), di));	// 72539                  mov     [bx+1DD6h], di ;~ 274D:11BA
cs=0x274d;eip=0x0011be; 	J(CALL(sub_35b28,0));	// 72540                  call    sub_35B28 ;~ 274D:11BE
cs=0x274d;eip=0x0011c1; 	X(POP(si));	// 72541                  pop     si ;~ 274D:11C1
cs=0x274d;eip=0x0011c2; 	J(JMP(loc_36bba));	// 72542                  jmp     loc_36BBA ;~ 274D:11C2

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_36a38: 	goto loc_36a38;
        case m2c::kloc_36a42: 	goto loc_36a42;
        case m2c::kloc_36b2a: 	goto loc_36b2a;
        case m2c::kloc_36b2d: 	goto loc_36b2d;
        case m2c::kloc_36b3b: 	goto loc_36b3b;
        case m2c::kloc_36b47: 	goto loc_36b47;
        case m2c::kloc_36bba: 	goto loc_36bba;
        case m2c::kloc_36bc4: 	goto loc_36bc4;
        case m2c::klocret_36bc3: 	goto locret_36bc3;
        case m2c::kseg35ab_f78_proc: 	goto seg35ab_f78_proc;
        case m2c::ksub_36ba0: 	goto sub_36ba0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36c76(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36c76:
    _begin:
cs=0x274d;eip=0x0011c6; 	X(PUSH(bp));	// 72552                  push    bp ;~ 274D:11C6
cs=0x274d;eip=0x0011c7; 	X(PUSH(si));	// 72553                  push    si ;~ 274D:11C7
cs=0x274d;eip=0x0011c8; 	X(PUSH(di));	// 72554                  push    di ;~ 274D:11C8
cs=0x274d;eip=0x0011c9; 	T(LES(si, dword_4a46c));	// 72555                  les     si, dword_4A46C ;~ 274D:11C9
cs=0x274d;eip=0x0011cd; 	J(CALL(sub_36c88,0));	// 72556                  call    sub_36C88 ;~ 274D:11CD
cs=0x274d;eip=0x0011d0; 	X(*(dw*)(&dword_4a46c) = si;);	// 72557                  mov     word ptr dword_4A46C, si ;~ 274D:11D0
cs=0x274d;eip=0x0011d4; 	X(POP(di));	// 72558                  pop     di ;~ 274D:11D4
cs=0x274d;eip=0x0011d5; 	X(POP(si));	// 72559                  pop     si ;~ 274D:11D5
cs=0x274d;eip=0x0011d6; 	X(POP(bp));	// 72560                  pop     bp ;~ 274D:11D6
cs=0x274d;eip=0x0011d7; 	J(RETF(0));	// 72561                  retf ;~ 274D:11D7

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_36c76: 	goto sub_36c76;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36c88(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36c88:
    _begin:
cs=0x274d;eip=0x0011d8; 	T(SUB(ah, ah));	// 72570                  sub     ah, ah ;~ 274D:11D8
cs=0x274d;eip=0x0011da; 	X(LODS(*(raddr(es,si)),si,1));	// 72571                  lods    byte ptr es:[si] ;~ 274D:11DA
cs=0x274d;eip=0x0011dc; 	T(OR(ax, ax));	// 72572                  or      ax, ax ;~ 274D:11DC
cs=0x274d;eip=0x0011de; 	J(JZ(locret_36ca5));	// 72573                  jz      short locret_36CA5 ;~ 274D:11DE
cs=0x274d;eip=0x0011e0; 	T(cx = ax;);	// 72574                  mov     cx, ax ;~ 274D:11E0
cs=0x274d;eip=0x0011e2; 	T(SUB(di, di));	// 72575                  sub     di, di ;~ 274D:11E2
cs=0x274d;eip=0x0011e4; 	T(ADD(di, 0x328E));	// 72576                  add     di, 328Eh ;~ 274D:11E4
loc_36c98:
	// 6992 
cs=0x274d;eip=0x0011e8; 	J(CALL(sub_37652,0));	// 72580                  call    sub_37652 ;~ 274D:11E8
cs=0x274d;eip=0x0011eb; 	J(JNZ(loc_36ca6));	// 72581                  jnz     short loc_36CA6 ;~ 274D:11EB
cs=0x274d;eip=0x0011ed; 	T(ADD(si, 2));	// 72582                  add     si, 2 ;~ 274D:11ED
cs=0x274d;eip=0x0011f0; 	T(ADD(di, 0x1A));	// 72583                  add     di, 1Ah ;~ 274D:11F0
cs=0x274d;eip=0x0011f3; 	J(LOOP(loc_36c98));	// 72584                  loop    loc_36C98 ;~ 274D:11F3
locret_36ca5:
	// 6993 
cs=0x274d;eip=0x0011f5; 	J(RETN(0));	// 72587                  retn ;~ 274D:11F5
loc_36ca6:
	// 6994 
cs=0x274d;eip=0x0011f6; 	T(SUB(ah, ah));	// 72591                  sub     ah, ah ;~ 274D:11F6
cs=0x274d;eip=0x0011f8; 	X(LODS(*(raddr(es,si)),si,1));	// 72592                  lods    byte ptr es:[si] ;~ 274D:11F8
cs=0x274d;eip=0x0011fa; 	T(bx = ax;);	// 72593                  mov     bx, ax ;~ 274D:11FA
cs=0x274d;eip=0x0011fc; 	T(SHL(bx, 1));	// 72594                  shl     bx, 1 ;~ 274D:11FC
cs=0x274d;eip=0x0011fe; 	T(SHL(bx, 1));	// 72595                  shl     bx, 1 ;~ 274D:11FE
cs=0x274d;eip=0x001200; 	X(LODS(*(raddr(es,si)),si,1));	// 72596                  lods    byte ptr es:[si] ;~ 274D:1200
cs=0x274d;eip=0x001202; 	T(bp = ax;);	// 72597                  mov     bp, ax ;~ 274D:1202
cs=0x274d;eip=0x001204; 	T(SHL(bp, 1));	// 72598                  shl     bp, 1 ;~ 274D:1204
cs=0x274d;eip=0x001206; 	T(SHL(bp, 1));	// 72599                  shl     bp, 1 ;~ 274D:1206
cs=0x274d;eip=0x001208; 	X(MOV(*(raddr(ds,di+0x18)), 0));	// 72600                  mov     byte ptr [di+18h], 0 ;~ 274D:1208
cs=0x274d;eip=0x00120c; 	T(CMP(*(dw*)(raddr(ds,bx+0x1DD6)), 1));	// 72601                  cmp     word ptr [bx+1DD6h], 1 ;~ 274D:120C
cs=0x274d;eip=0x001211; 	J(JL(loc_36cf0));	// 72602                  jl      short loc_36CF0 ;~ 274D:1211
cs=0x274d;eip=0x001213; 	T(CMP(*(dw*)(raddr(ss,bp+0x1DD6)), 1));	// 72603                  cmp     word ptr [bp+1DD6h], 1 ;~ 274D:1213
cs=0x274d;eip=0x001218; 	J(JL(loc_36ce8));	// 72604                  jl      short loc_36CE8 ;~ 274D:1218
cs=0x274d;eip=0x00121a; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1FB8))));	// 72605                  mov     ax, [bx+1FB8h] ;~ 274D:121A
cs=0x274d;eip=0x00121e; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 72606                  mov     [di], ax ;~ 274D:121E
cs=0x274d;eip=0x001220; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1FBA))));	// 72607                  mov     ax, [bx+1FBAh] ;~ 274D:1220
cs=0x274d;eip=0x001224; 	X(MOV(*(dw*)(raddr(ds,di+2)), ax));	// 72608                  mov     [di+2], ax ;~ 274D:1224
cs=0x274d;eip=0x001227; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x219C))));	// 72609                  mov     ax, [bx+219Ch] ;~ 274D:1227
cs=0x274d;eip=0x00122b; 	X(MOV(*(dw*)(raddr(ds,di+4)), ax));	// 72610                  mov     [di+4], ax ;~ 274D:122B
cs=0x274d;eip=0x00122e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x219E))));	// 72611                  mov     ax, [bx+219Eh] ;~ 274D:122E
cs=0x274d;eip=0x001232; 	X(MOV(*(dw*)(raddr(ds,di+6)), ax));	// 72612                  mov     [di+6], ax ;~ 274D:1232
cs=0x274d;eip=0x001235; 	J(JMP(loc_36d01));	// 72613                  jmp     short loc_36D01 ;~ 274D:1235
loc_36ce8:
	// 6995 
cs=0x274d;eip=0x001238; 	T(XCHG(bp, bx));	// 72619                  xchg    bp, bx ;~ 274D:1238
cs=0x274d;eip=0x00123a; 	J(CALL(sub_36d32,0));	// 72620                  call    sub_36D32 ;~ 274D:123A
cs=0x274d;eip=0x00123d; 	J(JMP(loc_36d01));	// 72621                  jmp     short loc_36D01 ;~ 274D:123D
loc_36cf0:
	// 6996 
cs=0x274d;eip=0x001240; 	T(CMP(*(dw*)(raddr(ss,bp+0x1DD6)), 1));	// 72627                  cmp     word ptr [bp+1DD6h], 1 ;~ 274D:1240
cs=0x274d;eip=0x001245; 	J(JGE(loc_36cfe));	// 72628                  jge     short loc_36CFE ;~ 274D:1245
cs=0x274d;eip=0x001247; 	X(OR(*(raddr(ds,di+0x18)), 0x80));	// 72629                  or      byte ptr [di+18h], 80h ;~ 274D:1247
cs=0x274d;eip=0x00124b; 	J(JMP(loc_36d28));	// 72630                  jmp     short loc_36D28 ;~ 274D:124B
loc_36cfe:
	// 6997 
cs=0x274d;eip=0x00124e; 	J(CALL(sub_36d32,0));	// 72636                  call    sub_36D32 ;~ 274D:124E
loc_36d01:
	// 6998 
cs=0x274d;eip=0x001251; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x1FB8))));	// 72640                  mov     ax, [bp+1FB8h] ;~ 274D:1251
cs=0x274d;eip=0x001255; 	X(MOV(*(dw*)(raddr(ds,di+8)), ax));	// 72641                  mov     [di+8], ax ;~ 274D:1255
cs=0x274d;eip=0x001258; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x1FBA))));	// 72642                  mov     ax, [bp+1FBAh] ;~ 274D:1258
cs=0x274d;eip=0x00125c; 	X(MOV(*(dw*)(raddr(ds,di+0x0A)), ax));	// 72643                  mov     [di+0Ah], ax ;~ 274D:125C
cs=0x274d;eip=0x00125f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x219C))));	// 72644                  mov     ax, [bp+219Ch] ;~ 274D:125F
cs=0x274d;eip=0x001263; 	X(MOV(*(dw*)(raddr(ds,di+0x0C)), ax));	// 72645                  mov     [di+0Ch], ax ;~ 274D:1263
cs=0x274d;eip=0x001266; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x219E))));	// 72646                  mov     ax, [bp+219Eh] ;~ 274D:1266
cs=0x274d;eip=0x00126a; 	X(MOV(*(dw*)(raddr(ds,di+0x0E)), ax));	// 72647                  mov     [di+0Eh], ax ;~ 274D:126A
cs=0x274d;eip=0x00126d; 	X(PUSH(cx));	// 72648                  push    cx ;~ 274D:126D
cs=0x274d;eip=0x00126e; 	X(PUSH(si));	// 72649                  push    si ;~ 274D:126E
cs=0x274d;eip=0x00126f; 	J(CALL(sub_35c0d,0));	// 72650                  call    sub_35C0D ;~ 274D:126F
cs=0x274d;eip=0x001272; 	T(es = *(dw*)(((db*)&dword_4a46c)+2););	// 72651                  mov     es, word ptr dword_4A46C+2 ;~ 274D:1272
cs=0x274d;eip=0x001276; 	X(POP(si));	// 72652                  pop     si ;~ 274D:1276
cs=0x274d;eip=0x001277; 	X(POP(cx));	// 72653                  pop     cx ;~ 274D:1277
loc_36d28:
	// 6999 
cs=0x274d;eip=0x001278; 	T(ADD(di, 0x1A));	// 72656                  add     di, 1Ah ;~ 274D:1278
cs=0x274d;eip=0x00127b; 	T(DEC(cx));	// 72657                  dec     cx ;~ 274D:127B
cs=0x274d;eip=0x00127c; 	J(JZ(locret_36d31));	// 72658                  jz      short locret_36D31 ;~ 274D:127C
cs=0x274d;eip=0x00127e; 	J(JMP(loc_36c98));	// 72659                  jmp     loc_36C98 ;~ 274D:127E
locret_36d31:
	// 7000 
cs=0x274d;eip=0x001281; 	J(RETN(0));	// 72663                  retn ;~ 274D:1281

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_36c98: 	goto loc_36c98;
        case m2c::kloc_36ca6: 	goto loc_36ca6;
        case m2c::kloc_36ce8: 	goto loc_36ce8;
        case m2c::kloc_36cf0: 	goto loc_36cf0;
        case m2c::kloc_36cfe: 	goto loc_36cfe;
        case m2c::kloc_36d01: 	goto loc_36d01;
        case m2c::kloc_36d28: 	goto loc_36d28;
        case m2c::klocret_36ca5: 	goto locret_36ca5;
        case m2c::klocret_36d31: 	goto locret_36d31;
        case m2c::ksub_36c88: 	goto sub_36c88;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36d32(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36d32:
    _begin:
cs=0x274d;eip=0x001282; 	X(PUSH(es));	// 72672                  push    es ;~ 274D:1282
cs=0x274d;eip=0x001283; 	X(PUSH(cx));	// 72673                  push    cx ;~ 274D:1283
cs=0x274d;eip=0x001284; 	X(PUSH(si));	// 72674                  push    si ;~ 274D:1284
cs=0x274d;eip=0x001285; 	X(PUSH(di));	// 72675                  push    di ;~ 274D:1285
cs=0x274d;eip=0x001286; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x1DD4))));	// 72676                  mov     ax, [bp+1DD4h] ;~ 274D:1286
cs=0x274d;eip=0x00128a; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x1DD6))));	// 72677                  mov     dx, [bp+1DD6h] ;~ 274D:128A
cs=0x274d;eip=0x00128e; 	T(cx = dx;);	// 72678                  mov     cx, dx ;~ 274D:128E
cs=0x274d;eip=0x001290; 	T(SUB(cx, *(dw*)(raddr(ds,bx+0x1DD6))));	// 72679                  sub     cx, [bx+1DD6h] ;~ 274D:1290
cs=0x274d;eip=0x001294; 	T(DEC(dx));	// 72680                  dec     dx ;~ 274D:1294
cs=0x274d;eip=0x001295; 	T(DIV2(cx));	// 72681                  div     cx ;~ 274D:1295
cs=0x274d;eip=0x001297; 	T(SHR(ax, 1));	// 72682                  shr     ax, 1 ;~ 274D:1297
cs=0x274d;eip=0x001299; 	T(cx = ax;);	// 72683                  mov     cx, ax ;~ 274D:1299
cs=0x274d;eip=0x00129b; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x1A0C))));	// 72684                  mov     dx, [bp+1A0Ch] ;~ 274D:129B
cs=0x274d;eip=0x00129f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x1A0E))));	// 72685                  mov     ax, [bp+1A0Eh] ;~ 274D:129F
cs=0x274d;eip=0x0012a3; 	T(si = dx;);	// 72686                  mov     si, dx ;~ 274D:12A3
cs=0x274d;eip=0x0012a5; 	T(di = ax;);	// 72687                  mov     di, ax ;~ 274D:12A5
cs=0x274d;eip=0x0012a7; 	T(SUB(dx, *(dw*)(raddr(ds,bx+0x1A0C))));	// 72688                  sub     dx, [bx+1A0Ch] ;~ 274D:12A7
cs=0x274d;eip=0x0012ab; 	T(SBB(ax, *(dw*)(raddr(ds,bx+0x1A0E))));	// 72689                  sbb     ax, [bx+1A0Eh] ;~ 274D:12AB
cs=0x274d;eip=0x0012af; 	T(SHL(dx, 1));	// 72690                  shl     dx, 1 ;~ 274D:12AF
cs=0x274d;eip=0x0012b1; 	T(ADC(ax, 0));	// 72691                  adc     ax, 0 ;~ 274D:12B1
cs=0x274d;eip=0x0012b4; 	T(IMUL1_2(cx));	// 72692                  imul    cx ;~ 274D:12B4
cs=0x274d;eip=0x0012b6; 	T(SHL(ax, 1));	// 72693                  shl     ax, 1 ;~ 274D:12B6
cs=0x274d;eip=0x0012b8; 	T(RCL(dx, 1));	// 72694                  rcl     dx, 1 ;~ 274D:12B8
cs=0x274d;eip=0x0012ba; 	T(SUB(si, ax));	// 72695                  sub     si, ax ;~ 274D:12BA
cs=0x274d;eip=0x0012bc; 	T(SBB(di, dx));	// 72696                  sbb     di, dx ;~ 274D:12BC
cs=0x274d;eip=0x0012be; 	X(word_4a6cc = si;);	// 72697                  mov     word_4A6CC, si ;~ 274D:12BE
cs=0x274d;eip=0x0012c2; 	X(word_4a6ce = di;);	// 72698                  mov     word_4A6CE, di ;~ 274D:12C2
cs=0x274d;eip=0x0012c6; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x1BF0))));	// 72699                  mov     dx, [bp+1BF0h] ;~ 274D:12C6
cs=0x274d;eip=0x0012ca; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x1BF2))));	// 72700                  mov     ax, [bp+1BF2h] ;~ 274D:12CA
cs=0x274d;eip=0x0012ce; 	T(si = dx;);	// 72701                  mov     si, dx ;~ 274D:12CE
cs=0x274d;eip=0x0012d0; 	T(di = ax;);	// 72702                  mov     di, ax ;~ 274D:12D0
cs=0x274d;eip=0x0012d2; 	T(SUB(dx, *(dw*)(raddr(ds,bx+0x1BF0))));	// 72703                  sub     dx, [bx+1BF0h] ;~ 274D:12D2
cs=0x274d;eip=0x0012d6; 	T(SBB(ax, *(dw*)(raddr(ds,bx+0x1BF2))));	// 72704                  sbb     ax, [bx+1BF2h] ;~ 274D:12D6
cs=0x274d;eip=0x0012da; 	T(SHL(dx, 1));	// 72705                  shl     dx, 1 ;~ 274D:12DA
cs=0x274d;eip=0x0012dc; 	T(ADC(ax, 0));	// 72706                  adc     ax, 0 ;~ 274D:12DC
cs=0x274d;eip=0x0012df; 	T(IMUL1_2(cx));	// 72707                  imul    cx ;~ 274D:12DF
cs=0x274d;eip=0x0012e1; 	T(SHL(ax, 1));	// 72708                  shl     ax, 1 ;~ 274D:12E1
cs=0x274d;eip=0x0012e3; 	T(RCL(dx, 1));	// 72709                  rcl     dx, 1 ;~ 274D:12E3
cs=0x274d;eip=0x0012e5; 	T(SUB(si, ax));	// 72710                  sub     si, ax ;~ 274D:12E5
cs=0x274d;eip=0x0012e7; 	T(SBB(di, dx));	// 72711                  sbb     di, dx ;~ 274D:12E7
cs=0x274d;eip=0x0012e9; 	X(word_4a8b0 = si;);	// 72712                  mov     word_4A8B0, si ;~ 274D:12E9
cs=0x274d;eip=0x0012ed; 	X(word_4a8b2 = di;);	// 72713                  mov     word_4A8B2, di ;~ 274D:12ED
cs=0x274d;eip=0x0012f1; 	X(word_4aa94 = 0;);	// 72714                  mov     word_4AA94, 0 ;~ 274D:12F1
cs=0x274d;eip=0x0012f7; 	X(word_4aa96 = 1;);	// 72715                  mov     word_4AA96, 1 ;~ 274D:12F7
cs=0x274d;eip=0x0012fd; 	X(PUSH(bx));	// 72716                  push    bx ;~ 274D:12FD
cs=0x274d;eip=0x0012fe; 	T(bx = 0x1E0;);	// 72717                  mov     bx, 1E0h ;~ 274D:12FE
cs=0x274d;eip=0x001301; 	J(CALL(sub_35b28,0));	// 72718                  call    sub_35B28 ;~ 274D:1301
cs=0x274d;eip=0x001304; 	X(POP(bx));	// 72719                  pop     bx ;~ 274D:1304
cs=0x274d;eip=0x001305; 	X(POP(di));	// 72720                  pop     di ;~ 274D:1305
cs=0x274d;eip=0x001306; 	T(LES(ax, *(dd*)(word_4ac78)));	// 72721                  les     ax, dword ptr word_4AC78 ;~ 274D:1306
cs=0x274d;eip=0x00130a; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 72723                  mov     [di], ax ;~ 274D:130A
cs=0x274d;eip=0x00130c; 	X(MOV(*(dw*)(raddr(ds,di+2)), es));	// 72724                  mov     word ptr [di+2], es ;~ 274D:130C
cs=0x274d;eip=0x00130f; 	X(MOV(*(dw*)(raddr(ds,di+0x10)), ax));	// 72725                  mov     [di+10h], ax ;~ 274D:130F
cs=0x274d;eip=0x001312; 	X(MOV(*(dw*)(raddr(ds,di+0x12)), es));	// 72726                  mov     word ptr [di+12h], es ;~ 274D:1312
cs=0x274d;eip=0x001315; 	T(LES(ax, *(dd*)(word_4ae5c)));	// 72727                  les     ax, dword ptr word_4AE5C ;~ 274D:1315
cs=0x274d;eip=0x001319; 	X(MOV(*(dw*)(raddr(ds,di+4)), ax));	// 72728                  mov     [di+4], ax ;~ 274D:1319
cs=0x274d;eip=0x00131c; 	X(MOV(*(dw*)(raddr(ds,di+6)), es));	// 72729                  mov     word ptr [di+6], es ;~ 274D:131C
cs=0x274d;eip=0x00131f; 	X(MOV(*(dw*)(raddr(ds,di+0x14)), ax));	// 72730                  mov     [di+14h], ax ;~ 274D:131F
cs=0x274d;eip=0x001322; 	X(MOV(*(dw*)(raddr(ds,di+0x16)), es));	// 72731                  mov     word ptr [di+16h], es ;~ 274D:1322
cs=0x274d;eip=0x001325; 	X(OR(*(dw*)(raddr(ds,di+0x18)), 0x40));	// 72732                  or      word ptr [di+18h], 40h ;~ 274D:1325
cs=0x274d;eip=0x001329; 	X(POP(si));	// 72733                  pop     si ;~ 274D:1329
cs=0x274d;eip=0x00132a; 	X(POP(cx));	// 72734                  pop     cx ;~ 274D:132A
cs=0x274d;eip=0x00132b; 	X(POP(es));	// 72735                  pop     es ;~ 274D:132B
cs=0x274d;eip=0x00132c; 	J(RETN(0));	// 72737                  retn ;~ 274D:132C

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_36d32: 	goto sub_36d32;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36dde(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36dde:
    _begin:
#undef arg_0
#define arg_0 6
	// 72750 arg_0           = word ptr  6 ;~ 274D:132E
#undef arg_2
#define arg_2 8
	// 72751 arg_2           = word ptr  8 ;~ 274D:132E
#undef arg_4
#define arg_4 0x0A
	// 72752 arg_4           = word ptr  0Ah ;~ 274D:132E
#undef arg_6
#define arg_6 0x0C
	// 72753 arg_6           = word ptr  0Ch ;~ 274D:132E
cs=0x274d;eip=0x00132e; 	X(PUSH(bp));	// 72755                  push    bp ;~ 274D:132E
cs=0x274d;eip=0x00132f; 	T(bp = sp;);	// 72756                  mov     bp, sp ;~ 274D:132F
cs=0x274d;eip=0x001331; 	X(PUSH(si));	// 72757                  push    si ;~ 274D:1331
cs=0x274d;eip=0x001332; 	X(PUSH(di));	// 72758                  push    di ;~ 274D:1332
cs=0x274d;eip=0x001333; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 72759                  mov     di, [bp+arg_0] ;~ 274D:1333
cs=0x274d;eip=0x001336; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_2))));	// 72760                  mov     cx, [bp+arg_2] ;~ 274D:1336
cs=0x274d;eip=0x001339; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 72761                  mov     si, [bp+arg_4] ;~ 274D:1339
cs=0x274d;eip=0x00133c; 	T(MOV(bp, *(dw*)(raddr(ss,bp+arg_6))));	// 72762                  mov     bp, [bp+arg_6] ;~ 274D:133C
cs=0x274d;eip=0x00133f; 	J(CALL(sub_36e0f,0));	// 72763                  call    sub_36E0F ;~ 274D:133F
cs=0x274d;eip=0x001342; 	X(POP(di));	// 72764                  pop     di ;~ 274D:1342
cs=0x274d;eip=0x001343; 	X(POP(si));	// 72765                  pop     si ;~ 274D:1343
cs=0x274d;eip=0x001344; 	X(POP(bp));	// 72766                  pop     bp ;~ 274D:1344
cs=0x274d;eip=0x001345; 	J(RETF(0));	// 72767                  retf ;~ 274D:1345

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_36dde: 	goto sub_36dde;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg35ab_1346_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg35ab_1346_proc:
    _begin:
cs=0x274d;eip=0x001346; 	X(PUSH(bp));	// 72771                  push    bp ;~ 274D:1346
cs=0x274d;eip=0x001347; 	X(PUSH(si));	// 72772                  push    si ;~ 274D:1347
cs=0x274d;eip=0x001348; 	X(PUSH(di));	// 72773                  push    di ;~ 274D:1348
cs=0x274d;eip=0x001349; 	T(di = 0x19D8;);	// 72774                  mov     di, 19D8h ;~ 274D:1349
cs=0x274d;eip=0x00134c; 	T(cx = word_4a476;);	// 72775                  mov     cx, word_4A476 ;~ 274D:134C
cs=0x274d;eip=0x001350; 	T(si = word_4a478;);	// 72776                  mov     si, word_4A478 ;~ 274D:1350
cs=0x274d;eip=0x001354; 	T(bp = word_4a47a;);	// 72777                  mov     bp, word_4A47A ;~ 274D:1354
cs=0x274d;eip=0x001358; 	J(CALL(sub_36f2b,0));	// 72778                  call    sub_36F2B ;~ 274D:1358
cs=0x274d;eip=0x00135b; 	X(POP(di));	// 72779                  pop     di ;~ 274D:135B
cs=0x274d;eip=0x00135c; 	X(POP(si));	// 72780                  pop     si ;~ 274D:135C
cs=0x274d;eip=0x00135d; 	X(POP(bp));	// 72781                  pop     bp ;~ 274D:135D
cs=0x274d;eip=0x00135e; 	J(RETN(0));	// 72782                  retn ;~ 274D:135E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg35ab_1346_proc: 	goto seg35ab_1346_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36e0f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36e0f:
    _begin:
cs=0x274d;eip=0x00135f; 	T(bx = cx;);	// 72788                  mov     bx, cx ;~ 274D:135F
cs=0x274d;eip=0x001361; 	J(CALLF(sub_29df1,0));	// 72789                  call    sub_29DF1 ;~ 274D:1361
cs=0x274d;eip=0x001366; 	X(word_4a49a = bx;);	// 72790                  mov     word_4A49A, bx ;~ 274D:1366
cs=0x274d;eip=0x00136a; 	T(bx = cx;);	// 72791                  mov     bx, cx ;~ 274D:136A
cs=0x274d;eip=0x00136c; 	J(CALLF(sub_29df5,0));	// 72792                  call    sub_29DF5 ;~ 274D:136C
cs=0x274d;eip=0x001371; 	X(word_4a49c = bx;);	// 72793                  mov     word_4A49C, bx ;~ 274D:1371
cs=0x274d;eip=0x001375; 	T(bx = bp;);	// 72794                  mov     bx, bp ;~ 274D:1375
cs=0x274d;eip=0x001377; 	J(CALLF(sub_29df1,0));	// 72795                  call    sub_29DF1 ;~ 274D:1377
cs=0x274d;eip=0x00137c; 	X(word_4a4a2 = bx;);	// 72796                  mov     word_4A4A2, bx ;~ 274D:137C
cs=0x274d;eip=0x001380; 	T(bx = bp;);	// 72797                  mov     bx, bp ;~ 274D:1380
cs=0x274d;eip=0x001382; 	J(CALLF(sub_29df5,0));	// 72798                  call    sub_29DF5 ;~ 274D:1382
cs=0x274d;eip=0x001387; 	X(word_4a4a4 = bx;);	// 72799                  mov     word_4A4A4, bx ;~ 274D:1387
cs=0x274d;eip=0x00138b; 	T(bx = si;);	// 72800                  mov     bx, si ;~ 274D:138B
cs=0x274d;eip=0x00138d; 	J(CALLF(sub_29df1,0));	// 72801                  call    sub_29DF1 ;~ 274D:138D
cs=0x274d;eip=0x001392; 	X(word_4a49e = bx;);	// 72802                  mov     word_4A49E, bx ;~ 274D:1392
cs=0x274d;eip=0x001396; 	T(bx = si;);	// 72803                  mov     bx, si ;~ 274D:1396
cs=0x274d;eip=0x001398; 	J(CALLF(sub_29df5,0));	// 72804                  call    sub_29DF5 ;~ 274D:1398
cs=0x274d;eip=0x00139d; 	X(word_4a4a0 = bx;);	// 72805                  mov     word_4A4A0, bx ;~ 274D:139D
cs=0x274d;eip=0x0013a1; 	T(ax = word_4a49e;);	// 72806                  mov     ax, word_4A49E ;~ 274D:13A1
cs=0x274d;eip=0x0013a4; 	X(IMUL1_2(word_4a4a2));	// 72807                  imul    word_4A4A2 ;~ 274D:13A4
cs=0x274d;eip=0x0013a8; 	T(SHL(ax, 1));	// 72808                  shl     ax, 1 ;~ 274D:13A8
cs=0x274d;eip=0x0013aa; 	T(RCL(dx, 1));	// 72809                  rcl     dx, 1 ;~ 274D:13AA
cs=0x274d;eip=0x0013ac; 	T(si = dx;);	// 72810                  mov     si, dx ;~ 274D:13AC
cs=0x274d;eip=0x0013ae; 	T(ax = dx;);	// 72811                  mov     ax, dx ;~ 274D:13AE
cs=0x274d;eip=0x0013b0; 	X(IMUL1_2(word_4a49a));	// 72812                  imul    word_4A49A ;~ 274D:13B0
cs=0x274d;eip=0x0013b4; 	T(SHL(ax, 1));	// 72813                  shl     ax, 1 ;~ 274D:13B4
cs=0x274d;eip=0x0013b6; 	T(RCL(dx, 1));	// 72814                  rcl     dx, 1 ;~ 274D:13B6
cs=0x274d;eip=0x0013b8; 	T(bx = ax;);	// 72815                  mov     bx, ax ;~ 274D:13B8
cs=0x274d;eip=0x0013ba; 	T(cx = dx;);	// 72816                  mov     cx, dx ;~ 274D:13BA
cs=0x274d;eip=0x0013bc; 	T(ax = word_4a49c;);	// 72817                  mov     ax, word_4A49C ;~ 274D:13BC
cs=0x274d;eip=0x0013bf; 	X(IMUL1_2(word_4a4a4));	// 72818                  imul    word_4A4A4 ;~ 274D:13BF
cs=0x274d;eip=0x0013c3; 	T(SHL(ax, 1));	// 72819                  shl     ax, 1 ;~ 274D:13C3
cs=0x274d;eip=0x0013c5; 	T(RCL(dx, 1));	// 72820                  rcl     dx, 1 ;~ 274D:13C5
cs=0x274d;eip=0x0013c7; 	T(ADD(ax, bx));	// 72821                  add     ax, bx ;~ 274D:13C7
cs=0x274d;eip=0x0013c9; 	T(ADC(dx, cx));	// 72822                  adc     dx, cx ;~ 274D:13C9
cs=0x274d;eip=0x0013cb; 	X(MOV(*(dw*)(raddr(ds,di)), dx));	// 72823                  mov     [di], dx ;~ 274D:13CB
cs=0x274d;eip=0x0013cd; 	T(ax = word_4a49e;);	// 72824                  mov     ax, word_4A49E ;~ 274D:13CD
cs=0x274d;eip=0x0013d0; 	X(IMUL1_2(word_4a4a4));	// 72825                  imul    word_4A4A4 ;~ 274D:13D0
cs=0x274d;eip=0x0013d4; 	T(SHL(ax, 1));	// 72826                  shl     ax, 1 ;~ 274D:13D4
cs=0x274d;eip=0x0013d6; 	T(RCL(dx, 1));	// 72827                  rcl     dx, 1 ;~ 274D:13D6
cs=0x274d;eip=0x0013d8; 	T(bp = dx;);	// 72828                  mov     bp, dx ;~ 274D:13D8
cs=0x274d;eip=0x0013da; 	T(ax = dx;);	// 72829                  mov     ax, dx ;~ 274D:13DA
cs=0x274d;eip=0x0013dc; 	X(IMUL1_2(word_4a49a));	// 72830                  imul    word_4A49A ;~ 274D:13DC
cs=0x274d;eip=0x0013e0; 	T(SHL(ax, 1));	// 72831                  shl     ax, 1 ;~ 274D:13E0
cs=0x274d;eip=0x0013e2; 	T(RCL(dx, 1));	// 72832                  rcl     dx, 1 ;~ 274D:13E2
cs=0x274d;eip=0x0013e4; 	T(bx = ax;);	// 72833                  mov     bx, ax ;~ 274D:13E4
cs=0x274d;eip=0x0013e6; 	T(cx = dx;);	// 72834                  mov     cx, dx ;~ 274D:13E6
cs=0x274d;eip=0x0013e8; 	T(ax = word_4a49c;);	// 72835                  mov     ax, word_4A49C ;~ 274D:13E8
cs=0x274d;eip=0x0013eb; 	X(IMUL1_2(word_4a4a2));	// 72836                  imul    word_4A4A2 ;~ 274D:13EB
cs=0x274d;eip=0x0013ef; 	T(SHL(ax, 1));	// 72837                  shl     ax, 1 ;~ 274D:13EF
cs=0x274d;eip=0x0013f1; 	T(RCL(dx, 1));	// 72838                  rcl     dx, 1 ;~ 274D:13F1
cs=0x274d;eip=0x0013f3; 	T(SUB(bx, ax));	// 72839                  sub     bx, ax ;~ 274D:13F3
cs=0x274d;eip=0x0013f5; 	T(SBB(cx, dx));	// 72840                  sbb     cx, dx ;~ 274D:13F5
cs=0x274d;eip=0x0013f7; 	X(MOV(*(dw*)(raddr(ds,di+2)), cx));	// 72841                  mov     [di+2], cx ;~ 274D:13F7
cs=0x274d;eip=0x0013fa; 	T(ax = word_4a49a;);	// 72842                  mov     ax, word_4A49A ;~ 274D:13FA
cs=0x274d;eip=0x0013fd; 	X(IMUL1_2(word_4a4a0));	// 72843                  imul    word_4A4A0 ;~ 274D:13FD
cs=0x274d;eip=0x001401; 	T(SHL(ax, 1));	// 72844                  shl     ax, 1 ;~ 274D:1401
cs=0x274d;eip=0x001403; 	T(RCL(dx, 1));	// 72845                  rcl     dx, 1 ;~ 274D:1403
cs=0x274d;eip=0x001405; 	X(MOV(*(dw*)(raddr(ds,di+4)), dx));	// 72846                  mov     [di+4], dx ;~ 274D:1405
cs=0x274d;eip=0x001408; 	T(ax = word_4a4a2;);	// 72847                  mov     ax, word_4A4A2 ;~ 274D:1408
cs=0x274d;eip=0x00140b; 	X(IMUL1_2(word_4a4a0));	// 72848                  imul    word_4A4A0 ;~ 274D:140B
cs=0x274d;eip=0x00140f; 	T(SHL(ax, 1));	// 72849                  shl     ax, 1 ;~ 274D:140F
cs=0x274d;eip=0x001411; 	T(RCL(dx, 1));	// 72850                  rcl     dx, 1 ;~ 274D:1411
cs=0x274d;eip=0x001413; 	X(MOV(*(dw*)(raddr(ds,di+6)), dx));	// 72851                  mov     [di+6], dx ;~ 274D:1413
cs=0x274d;eip=0x001416; 	T(ax = word_4a4a4;);	// 72852                  mov     ax, word_4A4A4 ;~ 274D:1416
cs=0x274d;eip=0x001419; 	X(IMUL1_2(word_4a4a0));	// 72853                  imul    word_4A4A0 ;~ 274D:1419
cs=0x274d;eip=0x00141d; 	T(SHL(ax, 1));	// 72854                  shl     ax, 1 ;~ 274D:141D
cs=0x274d;eip=0x00141f; 	T(RCL(dx, 1));	// 72855                  rcl     dx, 1 ;~ 274D:141F
cs=0x274d;eip=0x001421; 	X(MOV(*(dw*)(raddr(ds,di+8)), dx));	// 72856                  mov     [di+8], dx ;~ 274D:1421
cs=0x274d;eip=0x001424; 	T(ax = word_4a49e;);	// 72857                  mov     ax, word_4A49E ;~ 274D:1424
cs=0x274d;eip=0x001427; 	T(NEG(ax));	// 72858                  neg     ax ;~ 274D:1427
cs=0x274d;eip=0x001429; 	X(MOV(*(dw*)(raddr(ds,di+0x0A)), ax));	// 72859                  mov     [di+0Ah], ax ;~ 274D:1429
cs=0x274d;eip=0x00142c; 	T(ax = si;);	// 72860                  mov     ax, si ;~ 274D:142C
cs=0x274d;eip=0x00142e; 	X(IMUL1_2(word_4a49c));	// 72861                  imul    word_4A49C ;~ 274D:142E
cs=0x274d;eip=0x001432; 	T(SHL(ax, 1));	// 72862                  shl     ax, 1 ;~ 274D:1432
cs=0x274d;eip=0x001434; 	T(RCL(dx, 1));	// 72863                  rcl     dx, 1 ;~ 274D:1434
cs=0x274d;eip=0x001436; 	T(bx = ax;);	// 72864                  mov     bx, ax ;~ 274D:1436
cs=0x274d;eip=0x001438; 	T(cx = dx;);	// 72865                  mov     cx, dx ;~ 274D:1438
cs=0x274d;eip=0x00143a; 	T(ax = word_4a49a;);	// 72866                  mov     ax, word_4A49A ;~ 274D:143A
cs=0x274d;eip=0x00143d; 	X(IMUL1_2(word_4a4a4));	// 72867                  imul    word_4A4A4 ;~ 274D:143D
cs=0x274d;eip=0x001441; 	T(SHL(ax, 1));	// 72868                  shl     ax, 1 ;~ 274D:1441
cs=0x274d;eip=0x001443; 	T(RCL(dx, 1));	// 72869                  rcl     dx, 1 ;~ 274D:1443
cs=0x274d;eip=0x001445; 	T(SUB(bx, ax));	// 72870                  sub     bx, ax ;~ 274D:1445
cs=0x274d;eip=0x001447; 	T(SBB(cx, dx));	// 72871                  sbb     cx, dx ;~ 274D:1447
cs=0x274d;eip=0x001449; 	X(MOV(*(dw*)(raddr(ds,di+0x0C)), cx));	// 72872                  mov     [di+0Ch], cx ;~ 274D:1449
cs=0x274d;eip=0x00144c; 	T(ax = bp;);	// 72873                  mov     ax, bp ;~ 274D:144C
cs=0x274d;eip=0x00144e; 	X(IMUL1_2(word_4a49c));	// 72874                  imul    word_4A49C ;~ 274D:144E
cs=0x274d;eip=0x001452; 	T(SHL(ax, 1));	// 72875                  shl     ax, 1 ;~ 274D:1452
cs=0x274d;eip=0x001454; 	T(RCL(dx, 1));	// 72876                  rcl     dx, 1 ;~ 274D:1454
cs=0x274d;eip=0x001456; 	T(bx = ax;);	// 72877                  mov     bx, ax ;~ 274D:1456
cs=0x274d;eip=0x001458; 	T(cx = dx;);	// 72878                  mov     cx, dx ;~ 274D:1458
cs=0x274d;eip=0x00145a; 	T(ax = word_4a49a;);	// 72879                  mov     ax, word_4A49A ;~ 274D:145A
cs=0x274d;eip=0x00145d; 	X(IMUL1_2(word_4a4a2));	// 72880                  imul    word_4A4A2 ;~ 274D:145D
cs=0x274d;eip=0x001461; 	T(SHL(ax, 1));	// 72881                  shl     ax, 1 ;~ 274D:1461
cs=0x274d;eip=0x001463; 	T(RCL(dx, 1));	// 72882                  rcl     dx, 1 ;~ 274D:1463
cs=0x274d;eip=0x001465; 	T(ADD(ax, bx));	// 72883                  add     ax, bx ;~ 274D:1465
cs=0x274d;eip=0x001467; 	T(ADC(dx, cx));	// 72884                  adc     dx, cx ;~ 274D:1467
cs=0x274d;eip=0x001469; 	X(MOV(*(dw*)(raddr(ds,di+0x0E)), dx));	// 72885                  mov     [di+0Eh], dx ;~ 274D:1469
cs=0x274d;eip=0x00146c; 	T(ax = word_4a49c;);	// 72886                  mov     ax, word_4A49C ;~ 274D:146C
cs=0x274d;eip=0x00146f; 	X(IMUL1_2(word_4a4a0));	// 72887                  imul    word_4A4A0 ;~ 274D:146F
cs=0x274d;eip=0x001473; 	T(SHL(ax, 1));	// 72888                  shl     ax, 1 ;~ 274D:1473
cs=0x274d;eip=0x001475; 	T(RCL(dx, 1));	// 72889                  rcl     dx, 1 ;~ 274D:1475
cs=0x274d;eip=0x001477; 	X(MOV(*(dw*)(raddr(ds,di+0x10)), dx));	// 72890                  mov     [di+10h], dx ;~ 274D:1477
cs=0x274d;eip=0x00147a; 	J(RETN(0));	// 72891                  retn ;~ 274D:147A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_36e0f: 	goto sub_36e0f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_36f2b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_36f2b:
    _begin:
cs=0x274d;eip=0x00147b; 	T(bx = cx;);	// 72900                  mov     bx, cx ;~ 274D:147B
cs=0x274d;eip=0x00147d; 	J(CALLF(sub_29df1,0));	// 72901                  call    sub_29DF1 ;~ 274D:147D
cs=0x274d;eip=0x001482; 	X(word_4a49a = bx;);	// 72902                  mov     word_4A49A, bx ;~ 274D:1482
cs=0x274d;eip=0x001486; 	T(bx = cx;);	// 72903                  mov     bx, cx ;~ 274D:1486
cs=0x274d;eip=0x001488; 	J(CALLF(sub_29df5,0));	// 72904                  call    sub_29DF5 ;~ 274D:1488
cs=0x274d;eip=0x00148d; 	X(word_4a49c = bx;);	// 72905                  mov     word_4A49C, bx ;~ 274D:148D
cs=0x274d;eip=0x001491; 	T(bx = bp;);	// 72906                  mov     bx, bp ;~ 274D:1491
cs=0x274d;eip=0x001493; 	J(CALLF(sub_29df1,0));	// 72907                  call    sub_29DF1 ;~ 274D:1493
cs=0x274d;eip=0x001498; 	X(word_4a4a2 = bx;);	// 72908                  mov     word_4A4A2, bx ;~ 274D:1498
cs=0x274d;eip=0x00149c; 	T(bx = bp;);	// 72909                  mov     bx, bp ;~ 274D:149C
cs=0x274d;eip=0x00149e; 	J(CALLF(sub_29df5,0));	// 72910                  call    sub_29DF5 ;~ 274D:149E
cs=0x274d;eip=0x0014a3; 	X(word_4a4a4 = bx;);	// 72911                  mov     word_4A4A4, bx ;~ 274D:14A3
cs=0x274d;eip=0x0014a7; 	T(bx = si;);	// 72912                  mov     bx, si ;~ 274D:14A7
cs=0x274d;eip=0x0014a9; 	J(CALLF(sub_29df1,0));	// 72913                  call    sub_29DF1 ;~ 274D:14A9
cs=0x274d;eip=0x0014ae; 	X(word_4a49e = bx;);	// 72914                  mov     word_4A49E, bx ;~ 274D:14AE
cs=0x274d;eip=0x0014b2; 	T(bx = si;);	// 72915                  mov     bx, si ;~ 274D:14B2
cs=0x274d;eip=0x0014b4; 	J(CALLF(sub_29df5,0));	// 72916                  call    sub_29DF5 ;~ 274D:14B4
cs=0x274d;eip=0x0014b9; 	X(word_4a4a0 = bx;);	// 72917                  mov     word_4A4A0, bx ;~ 274D:14B9
cs=0x274d;eip=0x0014bd; 	T(ax = word_4a49e;);	// 72918                  mov     ax, word_4A49E ;~ 274D:14BD
cs=0x274d;eip=0x0014c0; 	X(IMUL1_2(word_4a4a2));	// 72919                  imul    word_4A4A2 ;~ 274D:14C0
cs=0x274d;eip=0x0014c4; 	T(SHL(ax, 1));	// 72920                  shl     ax, 1 ;~ 274D:14C4
cs=0x274d;eip=0x0014c6; 	T(RCL(dx, 1));	// 72921                  rcl     dx, 1 ;~ 274D:14C6
cs=0x274d;eip=0x0014c8; 	T(si = dx;);	// 72922                  mov     si, dx ;~ 274D:14C8
cs=0x274d;eip=0x0014ca; 	T(ax = dx;);	// 72923                  mov     ax, dx ;~ 274D:14CA
cs=0x274d;eip=0x0014cc; 	X(IMUL1_2(word_4a49a));	// 72924                  imul    word_4A49A ;~ 274D:14CC
cs=0x274d;eip=0x0014d0; 	T(SHL(ax, 1));	// 72925                  shl     ax, 1 ;~ 274D:14D0
cs=0x274d;eip=0x0014d2; 	T(RCL(dx, 1));	// 72926                  rcl     dx, 1 ;~ 274D:14D2
cs=0x274d;eip=0x0014d4; 	T(bx = ax;);	// 72927                  mov     bx, ax ;~ 274D:14D4
cs=0x274d;eip=0x0014d6; 	T(cx = dx;);	// 72928                  mov     cx, dx ;~ 274D:14D6
cs=0x274d;eip=0x0014d8; 	T(ax = word_4a49c;);	// 72929                  mov     ax, word_4A49C ;~ 274D:14D8
cs=0x274d;eip=0x0014db; 	X(IMUL1_2(word_4a4a4));	// 72930                  imul    word_4A4A4 ;~ 274D:14DB
cs=0x274d;eip=0x0014df; 	T(SHL(ax, 1));	// 72931                  shl     ax, 1 ;~ 274D:14DF
cs=0x274d;eip=0x0014e1; 	T(RCL(dx, 1));	// 72932                  rcl     dx, 1 ;~ 274D:14E1
cs=0x274d;eip=0x0014e3; 	T(SUB(ax, bx));	// 72933                  sub     ax, bx ;~ 274D:14E3
cs=0x274d;eip=0x0014e5; 	T(SBB(dx, cx));	// 72934                  sbb     dx, cx ;~ 274D:14E5
cs=0x274d;eip=0x0014e7; 	X(MOV(*(dw*)(raddr(ds,di)), dx));	// 72935                  mov     [di], dx ;~ 274D:14E7
cs=0x274d;eip=0x0014e9; 	T(ax = word_4a49e;);	// 72936                  mov     ax, word_4A49E ;~ 274D:14E9
cs=0x274d;eip=0x0014ec; 	X(IMUL1_2(word_4a4a4));	// 72937                  imul    word_4A4A4 ;~ 274D:14EC
cs=0x274d;eip=0x0014f0; 	T(SHL(ax, 1));	// 72938                  shl     ax, 1 ;~ 274D:14F0
cs=0x274d;eip=0x0014f2; 	T(RCL(dx, 1));	// 72939                  rcl     dx, 1 ;~ 274D:14F2
cs=0x274d;eip=0x0014f4; 	T(bp = dx;);	// 72940                  mov     bp, dx ;~ 274D:14F4
cs=0x274d;eip=0x0014f6; 	T(ax = dx;);	// 72941                  mov     ax, dx ;~ 274D:14F6
cs=0x274d;eip=0x0014f8; 	X(IMUL1_2(word_4a49a));	// 72942                  imul    word_4A49A ;~ 274D:14F8
cs=0x274d;eip=0x0014fc; 	T(SHL(ax, 1));	// 72943                  shl     ax, 1 ;~ 274D:14FC
cs=0x274d;eip=0x0014fe; 	T(RCL(dx, 1));	// 72944                  rcl     dx, 1 ;~ 274D:14FE
cs=0x274d;eip=0x001500; 	T(bx = ax;);	// 72945                  mov     bx, ax ;~ 274D:1500
cs=0x274d;eip=0x001502; 	T(cx = dx;);	// 72946                  mov     cx, dx ;~ 274D:1502
cs=0x274d;eip=0x001504; 	T(ax = word_4a49c;);	// 72947                  mov     ax, word_4A49C ;~ 274D:1504
cs=0x274d;eip=0x001507; 	X(IMUL1_2(word_4a4a2));	// 72948                  imul    word_4A4A2 ;~ 274D:1507
cs=0x274d;eip=0x00150b; 	T(SHL(ax, 1));	// 72949                  shl     ax, 1 ;~ 274D:150B
cs=0x274d;eip=0x00150d; 	T(RCL(dx, 1));	// 72950                  rcl     dx, 1 ;~ 274D:150D
cs=0x274d;eip=0x00150f; 	T(ADD(bx, ax));	// 72951                  add     bx, ax ;~ 274D:150F
cs=0x274d;eip=0x001511; 	T(ADC(cx, dx));	// 72952                  adc     cx, dx ;~ 274D:1511
cs=0x274d;eip=0x001513; 	X(MOV(*(dw*)(raddr(ds,di+6)), cx));	// 72953                  mov     [di+6], cx ;~ 274D:1513
cs=0x274d;eip=0x001516; 	T(ax = word_4a49a;);	// 72954                  mov     ax, word_4A49A ;~ 274D:1516
cs=0x274d;eip=0x001519; 	X(IMUL1_2(word_4a4a0));	// 72955                  imul    word_4A4A0 ;~ 274D:1519
cs=0x274d;eip=0x00151d; 	T(SHL(ax, 1));	// 72956                  shl     ax, 1 ;~ 274D:151D
cs=0x274d;eip=0x00151f; 	T(RCL(dx, 1));	// 72957                  rcl     dx, 1 ;~ 274D:151F
cs=0x274d;eip=0x001521; 	T(NEG(dx));	// 72958                  neg     dx ;~ 274D:1521
cs=0x274d;eip=0x001523; 	X(MOV(*(dw*)(raddr(ds,di+0x0C)), dx));	// 72959                  mov     [di+0Ch], dx ;~ 274D:1523
cs=0x274d;eip=0x001526; 	T(ax = word_4a4a2;);	// 72960                  mov     ax, word_4A4A2 ;~ 274D:1526
cs=0x274d;eip=0x001529; 	X(IMUL1_2(word_4a4a0));	// 72961                  imul    word_4A4A0 ;~ 274D:1529
cs=0x274d;eip=0x00152d; 	T(SHL(ax, 1));	// 72962                  shl     ax, 1 ;~ 274D:152D
cs=0x274d;eip=0x00152f; 	T(RCL(dx, 1));	// 72963                  rcl     dx, 1 ;~ 274D:152F
cs=0x274d;eip=0x001531; 	T(NEG(dx));	// 72964                  neg     dx ;~ 274D:1531
cs=0x274d;eip=0x001533; 	X(MOV(*(dw*)(raddr(ds,di+2)), dx));	// 72965                  mov     [di+2], dx ;~ 274D:1533
cs=0x274d;eip=0x001536; 	T(ax = word_4a4a4;);	// 72966                  mov     ax, word_4A4A4 ;~ 274D:1536
cs=0x274d;eip=0x001539; 	X(IMUL1_2(word_4a4a0));	// 72967                  imul    word_4A4A0 ;~ 274D:1539
cs=0x274d;eip=0x00153d; 	T(SHL(ax, 1));	// 72968                  shl     ax, 1 ;~ 274D:153D
cs=0x274d;eip=0x00153f; 	T(RCL(dx, 1));	// 72969                  rcl     dx, 1 ;~ 274D:153F
cs=0x274d;eip=0x001541; 	X(MOV(*(dw*)(raddr(ds,di+8)), dx));	// 72970                  mov     [di+8], dx ;~ 274D:1541
cs=0x274d;eip=0x001544; 	T(ax = word_4a49e;);	// 72971                  mov     ax, word_4A49E ;~ 274D:1544
cs=0x274d;eip=0x001547; 	X(MOV(*(dw*)(raddr(ds,di+0x0E)), ax));	// 72972                  mov     [di+0Eh], ax ;~ 274D:1547
cs=0x274d;eip=0x00154a; 	T(ax = si;);	// 72973                  mov     ax, si ;~ 274D:154A
cs=0x274d;eip=0x00154c; 	X(IMUL1_2(word_4a49c));	// 72974                  imul    word_4A49C ;~ 274D:154C
cs=0x274d;eip=0x001550; 	T(SHL(ax, 1));	// 72975                  shl     ax, 1 ;~ 274D:1550
cs=0x274d;eip=0x001552; 	T(RCL(dx, 1));	// 72976                  rcl     dx, 1 ;~ 274D:1552
cs=0x274d;eip=0x001554; 	T(bx = ax;);	// 72977                  mov     bx, ax ;~ 274D:1554
cs=0x274d;eip=0x001556; 	T(cx = dx;);	// 72978                  mov     cx, dx ;~ 274D:1556
cs=0x274d;eip=0x001558; 	T(ax = word_4a49a;);	// 72979                  mov     ax, word_4A49A ;~ 274D:1558
cs=0x274d;eip=0x00155b; 	X(IMUL1_2(word_4a4a4));	// 72980                  imul    word_4A4A4 ;~ 274D:155B
cs=0x274d;eip=0x00155f; 	T(SHL(ax, 1));	// 72981                  shl     ax, 1 ;~ 274D:155F
cs=0x274d;eip=0x001561; 	T(RCL(dx, 1));	// 72982                  rcl     dx, 1 ;~ 274D:1561
cs=0x274d;eip=0x001563; 	T(ADD(bx, ax));	// 72983                  add     bx, ax ;~ 274D:1563
cs=0x274d;eip=0x001565; 	T(ADC(cx, dx));	// 72984                  adc     cx, dx ;~ 274D:1565
cs=0x274d;eip=0x001567; 	X(MOV(*(dw*)(raddr(ds,di+4)), cx));	// 72985                  mov     [di+4], cx ;~ 274D:1567
cs=0x274d;eip=0x00156a; 	T(ax = bp;);	// 72986                  mov     ax, bp ;~ 274D:156A
cs=0x274d;eip=0x00156c; 	X(IMUL1_2(word_4a49c));	// 72987                  imul    word_4A49C ;~ 274D:156C
cs=0x274d;eip=0x001570; 	T(SHL(ax, 1));	// 72988                  shl     ax, 1 ;~ 274D:1570
cs=0x274d;eip=0x001572; 	T(RCL(dx, 1));	// 72989                  rcl     dx, 1 ;~ 274D:1572
cs=0x274d;eip=0x001574; 	T(bx = ax;);	// 72990                  mov     bx, ax ;~ 274D:1574
cs=0x274d;eip=0x001576; 	T(cx = dx;);	// 72991                  mov     cx, dx ;~ 274D:1576
cs=0x274d;eip=0x001578; 	T(ax = word_4a49a;);	// 72992                  mov     ax, word_4A49A ;~ 274D:1578
cs=0x274d;eip=0x00157b; 	X(IMUL1_2(word_4a4a2));	// 72993                  imul    word_4A4A2 ;~ 274D:157B
cs=0x274d;eip=0x00157f; 	T(SHL(ax, 1));	// 72994                  shl     ax, 1 ;~ 274D:157F
cs=0x274d;eip=0x001581; 	T(RCL(dx, 1));	// 72995                  rcl     dx, 1 ;~ 274D:1581
cs=0x274d;eip=0x001583; 	T(SUB(ax, bx));	// 72996                  sub     ax, bx ;~ 274D:1583
cs=0x274d;eip=0x001585; 	T(SBB(dx, cx));	// 72997                  sbb     dx, cx ;~ 274D:1585
cs=0x274d;eip=0x001587; 	X(MOV(*(dw*)(raddr(ds,di+0x0A)), dx));	// 72998                  mov     [di+0Ah], dx ;~ 274D:1587
cs=0x274d;eip=0x00158a; 	T(ax = word_4a49c;);	// 72999                  mov     ax, word_4A49C ;~ 274D:158A
cs=0x274d;eip=0x00158d; 	X(IMUL1_2(word_4a4a0));	// 73000                  imul    word_4A4A0 ;~ 274D:158D
cs=0x274d;eip=0x001591; 	T(SHL(ax, 1));	// 73001                  shl     ax, 1 ;~ 274D:1591
cs=0x274d;eip=0x001593; 	T(RCL(dx, 1));	// 73002                  rcl     dx, 1 ;~ 274D:1593
cs=0x274d;eip=0x001595; 	X(MOV(*(dw*)(raddr(ds,di+0x10)), dx));	// 73003                  mov     [di+10h], dx ;~ 274D:1595
cs=0x274d;eip=0x001598; 	J(RETN(0));	// 73004                  retn ;~ 274D:1598

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_36f2b: 	goto sub_36f2b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_37049(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_37049:
    _begin:
cs=0x274d;eip=0x001599; 	T(bx = 0x19D8;);	// 73013                  mov     bx, 19D8h ;~ 274D:1599
cs=0x274d;eip=0x00159c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 73014                  mov     ax, [bx+2] ;~ 274D:159C
cs=0x274d;eip=0x00159f; 	X(XCHG(ax, *(dw*)(raddr(ds,bx+6))));	// 73015                  xchg    ax, [bx+6] ;~ 274D:159F
cs=0x274d;eip=0x0015a2; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 73016                  mov     [bx+2], ax ;~ 274D:15A2
cs=0x274d;eip=0x0015a5; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 73017                  mov     ax, [bx+4] ;~ 274D:15A5
cs=0x274d;eip=0x0015a8; 	X(XCHG(ax, *(dw*)(raddr(ds,bx+0x0C))));	// 73018                  xchg    ax, [bx+0Ch] ;~ 274D:15A8
cs=0x274d;eip=0x0015ab; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 73019                  mov     [bx+4], ax ;~ 274D:15AB
cs=0x274d;eip=0x0015ae; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0A))));	// 73020                  mov     ax, [bx+0Ah] ;~ 274D:15AE
cs=0x274d;eip=0x0015b1; 	X(XCHG(ax, *(dw*)(raddr(ds,bx+0x0E))));	// 73021                  xchg    ax, [bx+0Eh] ;~ 274D:15B1
cs=0x274d;eip=0x0015b4; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), ax));	// 73022                  mov     [bx+0Ah], ax ;~ 274D:15B4
cs=0x274d;eip=0x0015b7; 	J(RETN(0));	// 73023                  retn ;~ 274D:15B7

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_37049: 	goto sub_37049;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_37068(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_37068:
    _begin:
#undef arg_0
#define arg_0 6
	// 73034 arg_0           = word ptr  6 ;~ 274D:15B8
#undef arg_2
#define arg_2 8
	// 73035 arg_2           = word ptr  8 ;~ 274D:15B8
#undef arg_4
#define arg_4 0x0A
	// 73036 arg_4           = word ptr  0Ah ;~ 274D:15B8
cs=0x274d;eip=0x0015b8; 	X(PUSH(bp));	// 73038                  push    bp ;~ 274D:15B8
cs=0x274d;eip=0x0015b9; 	T(bp = sp;);	// 73039                  mov     bp, sp ;~ 274D:15B9
cs=0x274d;eip=0x0015bb; 	X(PUSH(si));	// 73040                  push    si ;~ 274D:15BB
cs=0x274d;eip=0x0015bc; 	X(PUSH(di));	// 73041                  push    di ;~ 274D:15BC
cs=0x274d;eip=0x0015bd; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 73042                  mov     bx, [bp+arg_0] ;~ 274D:15BD
cs=0x274d;eip=0x0015c0; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 73043                  mov     si, [bp+arg_2] ;~ 274D:15C0
cs=0x274d;eip=0x0015c3; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_4))));	// 73044                  mov     di, [bp+arg_4] ;~ 274D:15C3
cs=0x274d;eip=0x0015c6; 	J(CALL(sub_3707d,0));	// 73045                  call    sub_3707D ;~ 274D:15C6
cs=0x274d;eip=0x0015c9; 	X(POP(di));	// 73046                  pop     di ;~ 274D:15C9
cs=0x274d;eip=0x0015ca; 	X(POP(si));	// 73047                  pop     si ;~ 274D:15CA
cs=0x274d;eip=0x0015cb; 	X(POP(bp));	// 73048                  pop     bp ;~ 274D:15CB
cs=0x274d;eip=0x0015cc; 	J(RETF(0));	// 73049                  retf ;~ 274D:15CC

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_37068: 	goto sub_37068;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3707d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3707d:
    _begin:
cs=0x274d;eip=0x0015cd; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 73058                  mov     ax, [bx] ;~ 274D:15CD
cs=0x274d;eip=0x0015cf; 	X(IMUL1_2(*(dw*)(raddr(ds,si))));	// 73059                  imul    word ptr [si] ;~ 274D:15CF
cs=0x274d;eip=0x0015d1; 	T(SHL(ax, 1));	// 73060                  shl     ax, 1 ;~ 274D:15D1
cs=0x274d;eip=0x0015d3; 	T(RCL(dx, 1));	// 73061                  rcl     dx, 1 ;~ 274D:15D3
cs=0x274d;eip=0x0015d5; 	T(bp = ax;);	// 73062                  mov     bp, ax ;~ 274D:15D5
cs=0x274d;eip=0x0015d7; 	T(cx = dx;);	// 73063                  mov     cx, dx ;~ 274D:15D7
cs=0x274d;eip=0x0015d9; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 73064                  mov     ax, [bx+2] ;~ 274D:15D9
cs=0x274d;eip=0x0015dc; 	X(IMUL1_2(*(dw*)(raddr(ds,si+6))));	// 73065                  imul    word ptr [si+6] ;~ 274D:15DC
cs=0x274d;eip=0x0015df; 	T(SHL(ax, 1));	// 73066                  shl     ax, 1 ;~ 274D:15DF
cs=0x274d;eip=0x0015e1; 	T(RCL(dx, 1));	// 73067                  rcl     dx, 1 ;~ 274D:15E1
cs=0x274d;eip=0x0015e3; 	T(ADD(bp, ax));	// 73068                  add     bp, ax ;~ 274D:15E3
cs=0x274d;eip=0x0015e5; 	T(ADC(cx, dx));	// 73069                  adc     cx, dx ;~ 274D:15E5
cs=0x274d;eip=0x0015e7; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 73070                  mov     ax, [bx+4] ;~ 274D:15E7
cs=0x274d;eip=0x0015ea; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x0C))));	// 73071                  imul    word ptr [si+0Ch] ;~ 274D:15EA
cs=0x274d;eip=0x0015ed; 	T(SHL(ax, 1));	// 73072                  shl     ax, 1 ;~ 274D:15ED
cs=0x274d;eip=0x0015ef; 	T(RCL(dx, 1));	// 73073                  rcl     dx, 1 ;~ 274D:15EF
cs=0x274d;eip=0x0015f1; 	T(ADD(bp, ax));	// 73074                  add     bp, ax ;~ 274D:15F1
cs=0x274d;eip=0x0015f3; 	T(ADC(cx, dx));	// 73075                  adc     cx, dx ;~ 274D:15F3
cs=0x274d;eip=0x0015f5; 	X(MOV(*(dw*)(raddr(ds,di)), cx));	// 73076                  mov     [di], cx ;~ 274D:15F5
cs=0x274d;eip=0x0015f7; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 73077                  mov     ax, [bx] ;~ 274D:15F7
cs=0x274d;eip=0x0015f9; 	X(IMUL1_2(*(dw*)(raddr(ds,si+2))));	// 73078                  imul    word ptr [si+2] ;~ 274D:15F9
cs=0x274d;eip=0x0015fc; 	T(SHL(ax, 1));	// 73079                  shl     ax, 1 ;~ 274D:15FC
cs=0x274d;eip=0x0015fe; 	T(RCL(dx, 1));	// 73080                  rcl     dx, 1 ;~ 274D:15FE
cs=0x274d;eip=0x001600; 	T(bp = ax;);	// 73081                  mov     bp, ax ;~ 274D:1600
cs=0x274d;eip=0x001602; 	T(cx = dx;);	// 73082                  mov     cx, dx ;~ 274D:1602
cs=0x274d;eip=0x001604; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 73083                  mov     ax, [bx+2] ;~ 274D:1604
cs=0x274d;eip=0x001607; 	X(IMUL1_2(*(dw*)(raddr(ds,si+8))));	// 73084                  imul    word ptr [si+8] ;~ 274D:1607
cs=0x274d;eip=0x00160a; 	T(SHL(ax, 1));	// 73085                  shl     ax, 1 ;~ 274D:160A
cs=0x274d;eip=0x00160c; 	T(RCL(dx, 1));	// 73086                  rcl     dx, 1 ;~ 274D:160C
cs=0x274d;eip=0x00160e; 	T(ADD(bp, ax));	// 73087                  add     bp, ax ;~ 274D:160E
cs=0x274d;eip=0x001610; 	T(ADC(cx, dx));	// 73088                  adc     cx, dx ;~ 274D:1610
cs=0x274d;eip=0x001612; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 73089                  mov     ax, [bx+4] ;~ 274D:1612
cs=0x274d;eip=0x001615; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x0E))));	// 73090                  imul    word ptr [si+0Eh] ;~ 274D:1615
cs=0x274d;eip=0x001618; 	T(SHL(ax, 1));	// 73091                  shl     ax, 1 ;~ 274D:1618
cs=0x274d;eip=0x00161a; 	T(RCL(dx, 1));	// 73092                  rcl     dx, 1 ;~ 274D:161A
cs=0x274d;eip=0x00161c; 	T(ADD(bp, ax));	// 73093                  add     bp, ax ;~ 274D:161C
cs=0x274d;eip=0x00161e; 	T(ADC(cx, dx));	// 73094                  adc     cx, dx ;~ 274D:161E
cs=0x274d;eip=0x001620; 	X(MOV(*(dw*)(raddr(ds,di+2)), cx));	// 73095                  mov     [di+2], cx ;~ 274D:1620
cs=0x274d;eip=0x001623; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 73096                  mov     ax, [bx] ;~ 274D:1623
cs=0x274d;eip=0x001625; 	X(IMUL1_2(*(dw*)(raddr(ds,si+4))));	// 73097                  imul    word ptr [si+4] ;~ 274D:1625
cs=0x274d;eip=0x001628; 	T(SHL(ax, 1));	// 73098                  shl     ax, 1 ;~ 274D:1628
cs=0x274d;eip=0x00162a; 	T(RCL(dx, 1));	// 73099                  rcl     dx, 1 ;~ 274D:162A
cs=0x274d;eip=0x00162c; 	T(bp = ax;);	// 73100                  mov     bp, ax ;~ 274D:162C
cs=0x274d;eip=0x00162e; 	T(cx = dx;);	// 73101                  mov     cx, dx ;~ 274D:162E
cs=0x274d;eip=0x001630; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 73102                  mov     ax, [bx+2] ;~ 274D:1630
cs=0x274d;eip=0x001633; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x0A))));	// 73103                  imul    word ptr [si+0Ah] ;~ 274D:1633
cs=0x274d;eip=0x001636; 	T(SHL(ax, 1));	// 73104                  shl     ax, 1 ;~ 274D:1636
cs=0x274d;eip=0x001638; 	T(RCL(dx, 1));	// 73105                  rcl     dx, 1 ;~ 274D:1638
cs=0x274d;eip=0x00163a; 	T(ADD(bp, ax));	// 73106                  add     bp, ax ;~ 274D:163A
cs=0x274d;eip=0x00163c; 	T(ADC(cx, dx));	// 73107                  adc     cx, dx ;~ 274D:163C
cs=0x274d;eip=0x00163e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 73108                  mov     ax, [bx+4] ;~ 274D:163E
cs=0x274d;eip=0x001641; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x10))));	// 73109                  imul    word ptr [si+10h] ;~ 274D:1641
cs=0x274d;eip=0x001644; 	T(SHL(ax, 1));	// 73110                  shl     ax, 1 ;~ 274D:1644
cs=0x274d;eip=0x001646; 	T(RCL(dx, 1));	// 73111                  rcl     dx, 1 ;~ 274D:1646
cs=0x274d;eip=0x001648; 	T(ADD(bp, ax));	// 73112                  add     bp, ax ;~ 274D:1648
cs=0x274d;eip=0x00164a; 	T(ADC(cx, dx));	// 73113                  adc     cx, dx ;~ 274D:164A
cs=0x274d;eip=0x00164c; 	X(MOV(*(dw*)(raddr(ds,di+4)), cx));	// 73114                  mov     [di+4], cx ;~ 274D:164C
cs=0x274d;eip=0x00164f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 73115                  mov     ax, [bx+6] ;~ 274D:164F
cs=0x274d;eip=0x001652; 	X(IMUL1_2(*(dw*)(raddr(ds,si))));	// 73116                  imul    word ptr [si] ;~ 274D:1652
cs=0x274d;eip=0x001654; 	T(SHL(ax, 1));	// 73117                  shl     ax, 1 ;~ 274D:1654
cs=0x274d;eip=0x001656; 	T(RCL(dx, 1));	// 73118                  rcl     dx, 1 ;~ 274D:1656
cs=0x274d;eip=0x001658; 	T(bp = ax;);	// 73119                  mov     bp, ax ;~ 274D:1658
cs=0x274d;eip=0x00165a; 	T(cx = dx;);	// 73120                  mov     cx, dx ;~ 274D:165A
cs=0x274d;eip=0x00165c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 73121                  mov     ax, [bx+8] ;~ 274D:165C
cs=0x274d;eip=0x00165f; 	X(IMUL1_2(*(dw*)(raddr(ds,si+6))));	// 73122                  imul    word ptr [si+6] ;~ 274D:165F
cs=0x274d;eip=0x001662; 	T(SHL(ax, 1));	// 73123                  shl     ax, 1 ;~ 274D:1662
cs=0x274d;eip=0x001664; 	T(RCL(dx, 1));	// 73124                  rcl     dx, 1 ;~ 274D:1664
cs=0x274d;eip=0x001666; 	T(ADD(bp, ax));	// 73125                  add     bp, ax ;~ 274D:1666
cs=0x274d;eip=0x001668; 	T(ADC(cx, dx));	// 73126                  adc     cx, dx ;~ 274D:1668
cs=0x274d;eip=0x00166a; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0A))));	// 73127                  mov     ax, [bx+0Ah] ;~ 274D:166A
cs=0x274d;eip=0x00166d; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x0C))));	// 73128                  imul    word ptr [si+0Ch] ;~ 274D:166D
cs=0x274d;eip=0x001670; 	T(SHL(ax, 1));	// 73129                  shl     ax, 1 ;~ 274D:1670
cs=0x274d;eip=0x001672; 	T(RCL(dx, 1));	// 73130                  rcl     dx, 1 ;~ 274D:1672
cs=0x274d;eip=0x001674; 	T(ADD(bp, ax));	// 73131                  add     bp, ax ;~ 274D:1674
cs=0x274d;eip=0x001676; 	T(ADC(cx, dx));	// 73132                  adc     cx, dx ;~ 274D:1676
cs=0x274d;eip=0x001678; 	X(MOV(*(dw*)(raddr(ds,di+6)), cx));	// 73133                  mov     [di+6], cx ;~ 274D:1678
cs=0x274d;eip=0x00167b; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 73134                  mov     ax, [bx+6] ;~ 274D:167B
cs=0x274d;eip=0x00167e; 	X(IMUL1_2(*(dw*)(raddr(ds,si+2))));	// 73135                  imul    word ptr [si+2] ;~ 274D:167E
cs=0x274d;eip=0x001681; 	T(SHL(ax, 1));	// 73136                  shl     ax, 1 ;~ 274D:1681
cs=0x274d;eip=0x001683; 	T(RCL(dx, 1));	// 73137                  rcl     dx, 1 ;~ 274D:1683
cs=0x274d;eip=0x001685; 	T(bp = ax;);	// 73138                  mov     bp, ax ;~ 274D:1685
cs=0x274d;eip=0x001687; 	T(cx = dx;);	// 73139                  mov     cx, dx ;~ 274D:1687
cs=0x274d;eip=0x001689; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 73140                  mov     ax, [bx+8] ;~ 274D:1689
cs=0x274d;eip=0x00168c; 	X(IMUL1_2(*(dw*)(raddr(ds,si+8))));	// 73141                  imul    word ptr [si+8] ;~ 274D:168C
cs=0x274d;eip=0x00168f; 	T(SHL(ax, 1));	// 73142                  shl     ax, 1 ;~ 274D:168F
cs=0x274d;eip=0x001691; 	T(RCL(dx, 1));	// 73143                  rcl     dx, 1 ;~ 274D:1691
cs=0x274d;eip=0x001693; 	T(ADD(bp, ax));	// 73144                  add     bp, ax ;~ 274D:1693
cs=0x274d;eip=0x001695; 	T(ADC(cx, dx));	// 73145                  adc     cx, dx ;~ 274D:1695
cs=0x274d;eip=0x001697; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0A))));	// 73146                  mov     ax, [bx+0Ah] ;~ 274D:1697
cs=0x274d;eip=0x00169a; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x0E))));	// 73147                  imul    word ptr [si+0Eh] ;~ 274D:169A
cs=0x274d;eip=0x00169d; 	T(SHL(ax, 1));	// 73148                  shl     ax, 1 ;~ 274D:169D
cs=0x274d;eip=0x00169f; 	T(RCL(dx, 1));	// 73149                  rcl     dx, 1 ;~ 274D:169F
cs=0x274d;eip=0x0016a1; 	T(ADD(bp, ax));	// 73150                  add     bp, ax ;~ 274D:16A1
cs=0x274d;eip=0x0016a3; 	T(ADC(cx, dx));	// 73151                  adc     cx, dx ;~ 274D:16A3
cs=0x274d;eip=0x0016a5; 	X(MOV(*(dw*)(raddr(ds,di+8)), cx));	// 73152                  mov     [di+8], cx ;~ 274D:16A5
cs=0x274d;eip=0x0016a8; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 73153                  mov     ax, [bx+6] ;~ 274D:16A8
cs=0x274d;eip=0x0016ab; 	X(IMUL1_2(*(dw*)(raddr(ds,si+4))));	// 73154                  imul    word ptr [si+4] ;~ 274D:16AB
cs=0x274d;eip=0x0016ae; 	T(SHL(ax, 1));	// 73155                  shl     ax, 1 ;~ 274D:16AE
cs=0x274d;eip=0x0016b0; 	T(RCL(dx, 1));	// 73156                  rcl     dx, 1 ;~ 274D:16B0
cs=0x274d;eip=0x0016b2; 	T(bp = ax;);	// 73157                  mov     bp, ax ;~ 274D:16B2
cs=0x274d;eip=0x0016b4; 	T(cx = dx;);	// 73158                  mov     cx, dx ;~ 274D:16B4
cs=0x274d;eip=0x0016b6; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 73159                  mov     ax, [bx+8] ;~ 274D:16B6
cs=0x274d;eip=0x0016b9; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x0A))));	// 73160                  imul    word ptr [si+0Ah] ;~ 274D:16B9
cs=0x274d;eip=0x0016bc; 	T(SHL(ax, 1));	// 73161                  shl     ax, 1 ;~ 274D:16BC
cs=0x274d;eip=0x0016be; 	T(RCL(dx, 1));	// 73162                  rcl     dx, 1 ;~ 274D:16BE
cs=0x274d;eip=0x0016c0; 	T(ADD(bp, ax));	// 73163                  add     bp, ax ;~ 274D:16C0
cs=0x274d;eip=0x0016c2; 	T(ADC(cx, dx));	// 73164                  adc     cx, dx ;~ 274D:16C2
cs=0x274d;eip=0x0016c4; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0A))));	// 73165                  mov     ax, [bx+0Ah] ;~ 274D:16C4
cs=0x274d;eip=0x0016c7; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x10))));	// 73166                  imul    word ptr [si+10h] ;~ 274D:16C7
cs=0x274d;eip=0x0016ca; 	T(SHL(ax, 1));	// 73167                  shl     ax, 1 ;~ 274D:16CA
cs=0x274d;eip=0x0016cc; 	T(RCL(dx, 1));	// 73168                  rcl     dx, 1 ;~ 274D:16CC
cs=0x274d;eip=0x0016ce; 	T(ADD(bp, ax));	// 73169                  add     bp, ax ;~ 274D:16CE
cs=0x274d;eip=0x0016d0; 	T(ADC(cx, dx));	// 73170                  adc     cx, dx ;~ 274D:16D0
cs=0x274d;eip=0x0016d2; 	X(MOV(*(dw*)(raddr(ds,di+0x0A)), cx));	// 73171                  mov     [di+0Ah], cx ;~ 274D:16D2
cs=0x274d;eip=0x0016d5; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0C))));	// 73172                  mov     ax, [bx+0Ch] ;~ 274D:16D5
cs=0x274d;eip=0x0016d8; 	X(IMUL1_2(*(dw*)(raddr(ds,si))));	// 73173                  imul    word ptr [si] ;~ 274D:16D8
cs=0x274d;eip=0x0016da; 	T(SHL(ax, 1));	// 73174                  shl     ax, 1 ;~ 274D:16DA
cs=0x274d;eip=0x0016dc; 	T(RCL(dx, 1));	// 73175                  rcl     dx, 1 ;~ 274D:16DC
cs=0x274d;eip=0x0016de; 	T(bp = ax;);	// 73176                  mov     bp, ax ;~ 274D:16DE
cs=0x274d;eip=0x0016e0; 	T(cx = dx;);	// 73177                  mov     cx, dx ;~ 274D:16E0
cs=0x274d;eip=0x0016e2; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0E))));	// 73178                  mov     ax, [bx+0Eh] ;~ 274D:16E2
cs=0x274d;eip=0x0016e5; 	X(IMUL1_2(*(dw*)(raddr(ds,si+6))));	// 73179                  imul    word ptr [si+6] ;~ 274D:16E5
cs=0x274d;eip=0x0016e8; 	T(SHL(ax, 1));	// 73180                  shl     ax, 1 ;~ 274D:16E8
cs=0x274d;eip=0x0016ea; 	T(RCL(dx, 1));	// 73181                  rcl     dx, 1 ;~ 274D:16EA
cs=0x274d;eip=0x0016ec; 	T(ADD(bp, ax));	// 73182                  add     bp, ax ;~ 274D:16EC
cs=0x274d;eip=0x0016ee; 	T(ADC(cx, dx));	// 73183                  adc     cx, dx ;~ 274D:16EE
cs=0x274d;eip=0x0016f0; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x10))));	// 73184                  mov     ax, [bx+10h] ;~ 274D:16F0
cs=0x274d;eip=0x0016f3; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x0C))));	// 73185                  imul    word ptr [si+0Ch] ;~ 274D:16F3
cs=0x274d;eip=0x0016f6; 	T(SHL(ax, 1));	// 73186                  shl     ax, 1 ;~ 274D:16F6
cs=0x274d;eip=0x0016f8; 	T(RCL(dx, 1));	// 73187                  rcl     dx, 1 ;~ 274D:16F8
cs=0x274d;eip=0x0016fa; 	T(ADD(bp, ax));	// 73188                  add     bp, ax ;~ 274D:16FA
cs=0x274d;eip=0x0016fc; 	T(ADC(cx, dx));	// 73189                  adc     cx, dx ;~ 274D:16FC
cs=0x274d;eip=0x0016fe; 	X(MOV(*(dw*)(raddr(ds,di+0x0C)), cx));	// 73190                  mov     [di+0Ch], cx ;~ 274D:16FE
cs=0x274d;eip=0x001701; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0C))));	// 73191                  mov     ax, [bx+0Ch] ;~ 274D:1701
cs=0x274d;eip=0x001704; 	X(IMUL1_2(*(dw*)(raddr(ds,si+2))));	// 73192                  imul    word ptr [si+2] ;~ 274D:1704
cs=0x274d;eip=0x001707; 	T(SHL(ax, 1));	// 73193                  shl     ax, 1 ;~ 274D:1707
cs=0x274d;eip=0x001709; 	T(RCL(dx, 1));	// 73194                  rcl     dx, 1 ;~ 274D:1709
cs=0x274d;eip=0x00170b; 	T(bp = ax;);	// 73195                  mov     bp, ax ;~ 274D:170B
cs=0x274d;eip=0x00170d; 	T(cx = dx;);	// 73196                  mov     cx, dx ;~ 274D:170D
cs=0x274d;eip=0x00170f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0E))));	// 73197                  mov     ax, [bx+0Eh] ;~ 274D:170F
cs=0x274d;eip=0x001712; 	X(IMUL1_2(*(dw*)(raddr(ds,si+8))));	// 73198                  imul    word ptr [si+8] ;~ 274D:1712
cs=0x274d;eip=0x001715; 	T(SHL(ax, 1));	// 73199                  shl     ax, 1 ;~ 274D:1715
cs=0x274d;eip=0x001717; 	T(RCL(dx, 1));	// 73200                  rcl     dx, 1 ;~ 274D:1717
cs=0x274d;eip=0x001719; 	T(ADD(bp, ax));	// 73201                  add     bp, ax ;~ 274D:1719
cs=0x274d;eip=0x00171b; 	T(ADC(cx, dx));	// 73202                  adc     cx, dx ;~ 274D:171B
cs=0x274d;eip=0x00171d; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x10))));	// 73203                  mov     ax, [bx+10h] ;~ 274D:171D
cs=0x274d;eip=0x001720; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x0E))));	// 73204                  imul    word ptr [si+0Eh] ;~ 274D:1720
cs=0x274d;eip=0x001723; 	T(SHL(ax, 1));	// 73205                  shl     ax, 1 ;~ 274D:1723
cs=0x274d;eip=0x001725; 	T(RCL(dx, 1));	// 73206                  rcl     dx, 1 ;~ 274D:1725
cs=0x274d;eip=0x001727; 	T(ADD(bp, ax));	// 73207                  add     bp, ax ;~ 274D:1727
cs=0x274d;eip=0x001729; 	T(ADC(cx, dx));	// 73208                  adc     cx, dx ;~ 274D:1729
cs=0x274d;eip=0x00172b; 	X(MOV(*(dw*)(raddr(ds,di+0x0E)), cx));	// 73209                  mov     [di+0Eh], cx ;~ 274D:172B
cs=0x274d;eip=0x00172e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0C))));	// 73210                  mov     ax, [bx+0Ch] ;~ 274D:172E
cs=0x274d;eip=0x001731; 	X(IMUL1_2(*(dw*)(raddr(ds,si+4))));	// 73211                  imul    word ptr [si+4] ;~ 274D:1731
cs=0x274d;eip=0x001734; 	T(SHL(ax, 1));	// 73212                  shl     ax, 1 ;~ 274D:1734
cs=0x274d;eip=0x001736; 	T(RCL(dx, 1));	// 73213                  rcl     dx, 1 ;~ 274D:1736
cs=0x274d;eip=0x001738; 	T(bp = ax;);	// 73214                  mov     bp, ax ;~ 274D:1738
cs=0x274d;eip=0x00173a; 	T(cx = dx;);	// 73215                  mov     cx, dx ;~ 274D:173A
cs=0x274d;eip=0x00173c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0E))));	// 73216                  mov     ax, [bx+0Eh] ;~ 274D:173C
cs=0x274d;eip=0x00173f; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x0A))));	// 73217                  imul    word ptr [si+0Ah] ;~ 274D:173F
cs=0x274d;eip=0x001742; 	T(SHL(ax, 1));	// 73218                  shl     ax, 1 ;~ 274D:1742
cs=0x274d;eip=0x001744; 	T(RCL(dx, 1));	// 73219                  rcl     dx, 1 ;~ 274D:1744
cs=0x274d;eip=0x001746; 	T(ADD(bp, ax));	// 73220                  add     bp, ax ;~ 274D:1746
cs=0x274d;eip=0x001748; 	T(ADC(cx, dx));	// 73221                  adc     cx, dx ;~ 274D:1748
cs=0x274d;eip=0x00174a; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x10))));	// 73222                  mov     ax, [bx+10h] ;~ 274D:174A
cs=0x274d;eip=0x00174d; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x10))));	// 73223                  imul    word ptr [si+10h] ;~ 274D:174D
cs=0x274d;eip=0x001750; 	T(SHL(ax, 1));	// 73224                  shl     ax, 1 ;~ 274D:1750
cs=0x274d;eip=0x001752; 	T(RCL(dx, 1));	// 73225                  rcl     dx, 1 ;~ 274D:1752
cs=0x274d;eip=0x001754; 	T(ADD(bp, ax));	// 73226                  add     bp, ax ;~ 274D:1754
cs=0x274d;eip=0x001756; 	T(ADC(cx, dx));	// 73227                  adc     cx, dx ;~ 274D:1756
cs=0x274d;eip=0x001758; 	X(MOV(*(dw*)(raddr(ds,di+0x10)), cx));	// 73228                  mov     [di+10h], cx ;~ 274D:1758
cs=0x274d;eip=0x00175b; 	J(RETN(0));	// 73229                  retn ;~ 274D:175B

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_3707d: 	goto sub_3707d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3720c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3720c:
    _begin:
cs=0x274d;eip=0x00175c; 	X(PUSH(bp));	// 73238                  push    bp ;~ 274D:175C
cs=0x274d;eip=0x00175d; 	X(PUSH(si));	// 73239                  push    si ;~ 274D:175D
cs=0x274d;eip=0x00175e; 	X(PUSH(di));	// 73240                  push    di ;~ 274D:175E
cs=0x274d;eip=0x00175f; 	T(LES(si, dword_4a46c));	// 73241                  les     si, dword_4A46C ;~ 274D:175F
cs=0x274d;eip=0x001763; 	J(CALL(sub_3721a,0));	// 73242                  call    sub_3721A ;~ 274D:1763
cs=0x274d;eip=0x001766; 	X(POP(di));	// 73243                  pop     di ;~ 274D:1766
cs=0x274d;eip=0x001767; 	X(POP(si));	// 73244                  pop     si ;~ 274D:1767
cs=0x274d;eip=0x001768; 	X(POP(bp));	// 73245                  pop     bp ;~ 274D:1768
cs=0x274d;eip=0x001769; 	J(RETF(0));	// 73246                  retf ;~ 274D:1769

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_3720c: 	goto sub_3720c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3721a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3721a:
    _begin:
cs=0x274d;eip=0x00176a; 	X(LODS(*(raddr(es,si)),si,1));	// 73255                  lods    byte ptr es:[si] ;~ 274D:176A
cs=0x274d;eip=0x00176c; 	T(OR(al, al));	// 73256                  or      al, al ;~ 274D:176C
cs=0x274d;eip=0x00176e; 	J(JZ(locret_37230));	// 73257                  jz      short locret_37230 ;~ 274D:176E
cs=0x274d;eip=0x001770; 	T(CMP(al, 0x0FF));	// 73258                  cmp     al, 0FFh ;~ 274D:1770
cs=0x274d;eip=0x001772; 	J(JZ(loc_37231));	// 73259                  jz      short loc_37231 ;~ 274D:1772
cs=0x274d;eip=0x001774; 	X(*(byte_4cdde) = al;);	// 73260                  mov     byte_4CDDE, al ;~ 274D:1774
loc_37227:
	// 7001 
cs=0x274d;eip=0x001777; 	J(CALL(sub_372a5,0));	// 73263                  call    sub_372A5 ;~ 274D:1777
cs=0x274d;eip=0x00177a; 	X(DEC(*(byte_4cdde)));	// 73264                  dec     byte_4CDDE ;~ 274D:177A
cs=0x274d;eip=0x00177e; 	J(JNZ(loc_37227));	// 73265                  jnz     short loc_37227 ;~ 274D:177E
locret_37230:
	// 7002 
cs=0x274d;eip=0x001780; 	J(RETN(0));	// 73268                  retn ;~ 274D:1780
loc_37231:
	// 7003 
cs=0x274d;eip=0x001781; 	T(ax = word_4a4e6;);	// 73272                  mov     ax, word_4A4E6 ;~ 274D:1781
cs=0x274d;eip=0x001784; 	T(bp = word_4a4e8;);	// 73273                  mov     bp, word_4A4E8 ;~ 274D:1784
cs=0x274d;eip=0x001788; 	T(cx = *(word_4a4e0););	// 73274                  mov     cx, word_4A4E0 ;~ 274D:1788
cs=0x274d;eip=0x00178c; 	T(di = 0x4340;);	// 73275                  mov     di, 4340h ;~ 274D:178C
cs=0x274d;eip=0x00178f; 	T(bx = di;);	// 73276                  mov     bx, di ;~ 274D:178F
loc_37241:
	// 7004 
cs=0x274d;eip=0x001791; 	T(SHR(bp, 1));	// 73279                  shr     bp, 1 ;~ 274D:1791
cs=0x274d;eip=0x001793; 	T(RCR(ax, 1));	// 73280                  rcr     ax, 1 ;~ 274D:1793
cs=0x274d;eip=0x001795; 	T(dl = 0x0FF;);	// 73281                  mov     dl, 0FFh ;~ 274D:1795
cs=0x274d;eip=0x001797; 	T(ADC(dl, 0));	// 73282                  adc     dl, 0 ;~ 274D:1797
cs=0x274d;eip=0x00179a; 	X(MOV(*(raddr(ds,di)), dl));	// 73283                  mov     [di], dl ;~ 274D:179A
cs=0x274d;eip=0x00179c; 	T(INC(di));	// 73284                  inc     di ;~ 274D:179C
cs=0x274d;eip=0x00179d; 	J(LOOP(loc_37241));	// 73285                  loop    loc_37241 ;~ 274D:179D
cs=0x274d;eip=0x00179f; 	T(di = 0x42FF;);	// 73286                  mov     di, 42FFh ;~ 274D:179F
cs=0x274d;eip=0x0017a2; 	X(PUSH(si));	// 73287                  push    si ;~ 274D:17A2
cs=0x274d;eip=0x0017a3; 	J(CALL(sub_3608c,0));	// 73288                  call    sub_3608C ;~ 274D:17A3
cs=0x274d;eip=0x0017a6; 	X(POP(si));	// 73289                  pop     si ;~ 274D:17A6
cs=0x274d;eip=0x0017a7; 	T(bx = *(word_4a4e0););	// 73290                  mov     bx, word_4A4E0 ;~ 274D:17A7
cs=0x274d;eip=0x0017ab; 	T(ax = bx;);	// 73291                  mov     ax, bx ;~ 274D:17AB
cs=0x274d;eip=0x0017ad; 	T(SHL(ax, 1));	// 73292                  shl     ax, 1 ;~ 274D:17AD
cs=0x274d;eip=0x0017af; 	T(ADD(si, ax));	// 73293                  add     si, ax ;~ 274D:17AF
cs=0x274d;eip=0x0017b1; 	T(INC(si));	// 73294                  inc     si ;~ 274D:17B1
cs=0x274d;eip=0x0017b2; 	X(word_4ce40 = si;);	// 73295                  mov     word_4CE40, si ;~ 274D:17B2
cs=0x274d;eip=0x0017b6; 	T(ADD(si, ax));	// 73296                  add     si, ax ;~ 274D:17B6
cs=0x274d;eip=0x0017b8; 	X(word_4ce42 = si;);	// 73297                  mov     word_4CE42, si ;~ 274D:17B8
cs=0x274d;eip=0x0017bc; 	T(ADD(si, bx));	// 73298                  add     si, bx ;~ 274D:17BC
cs=0x274d;eip=0x0017be; 	X(word_4ce44 = si;);	// 73299                  mov     word_4CE44, si ;~ 274D:17BE
cs=0x274d;eip=0x0017c2; 	T(si = 0x42FF;);	// 73300                  mov     si, 42FFh ;~ 274D:17C2
cs=0x274d;eip=0x0017c5; 	T(LODSB);	// 73301                  lodsb ;~ 274D:17C5
loc_37276:
	// 7005 
cs=0x274d;eip=0x0017c6; 	T(SUB(ah, ah));	// 73304                  sub     ah, ah ;~ 274D:17C6
cs=0x274d;eip=0x0017c8; 	X(PUSH(si));	// 73305                  push    si ;~ 274D:17C8
cs=0x274d;eip=0x0017c9; 	T(di = word_4ce42;);	// 73306                  mov     di, word_4CE42 ;~ 274D:17C9
cs=0x274d;eip=0x0017cd; 	T(ADD(di, ax));	// 73307                  add     di, ax ;~ 274D:17CD
cs=0x274d;eip=0x0017cf; 	T(MOV(bl, *(raddr(es,di))));	// 73308                  mov     bl, es:[di] ;~ 274D:17CF
cs=0x274d;eip=0x0017d2; 	X(byte_4ce46 = bl;);	// 73309                  mov     byte_4CE46, bl ;~ 274D:17D2
cs=0x274d;eip=0x0017d6; 	T(si = word_4ce40;);	// 73310                  mov     si, word_4CE40 ;~ 274D:17D6
cs=0x274d;eip=0x0017da; 	T(SHL(ax, 1));	// 73311                  shl     ax, 1 ;~ 274D:17DA
cs=0x274d;eip=0x0017dc; 	T(ADD(si, ax));	// 73312                  add     si, ax ;~ 274D:17DC
cs=0x274d;eip=0x0017de; 	T(MOV(si, *(dw*)(raddr(es,si))));	// 73313                  mov     si, es:[si] ;~ 274D:17DE
cs=0x274d;eip=0x0017e1; 	T(ADD(si, word_4ce44));	// 73314                  add     si, word_4CE44 ;~ 274D:17E1
loc_37295:
	// 7006 
cs=0x274d;eip=0x0017e5; 	J(CALL(sub_372a5,0));	// 73317                  call    sub_372A5 ;~ 274D:17E5
cs=0x274d;eip=0x0017e8; 	X(DEC(byte_4ce46));	// 73318                  dec     byte_4CE46 ;~ 274D:17E8
cs=0x274d;eip=0x0017ec; 	J(JNZ(loc_37295));	// 73319                  jnz     short loc_37295 ;~ 274D:17EC
cs=0x274d;eip=0x0017ee; 	X(POP(si));	// 73320                  pop     si ;~ 274D:17EE
cs=0x274d;eip=0x0017ef; 	T(LODSB);	// 73321                  lodsb ;~ 274D:17EF
cs=0x274d;eip=0x0017f0; 	T(CMP(al, 0x0FF));	// 73322                  cmp     al, 0FFh ;~ 274D:17F0
cs=0x274d;eip=0x0017f2; 	J(JNZ(loc_37276));	// 73323                  jnz     short loc_37276 ;~ 274D:17F2
cs=0x274d;eip=0x0017f4; 	J(RETN(0));	// 73324                  retn ;~ 274D:17F4

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_37227: 	goto loc_37227;
        case m2c::kloc_37231: 	goto loc_37231;
        case m2c::kloc_37241: 	goto loc_37241;
        case m2c::kloc_37276: 	goto loc_37276;
        case m2c::kloc_37295: 	goto loc_37295;
        case m2c::klocret_37230: 	goto locret_37230;
        case m2c::ksub_3721a: 	goto sub_3721a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group80(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group80:
    _begin:
sub_372a5:
	// 73331 
cs=0x274d;eip=0x0017f5; 	X(LODS(*(raddr(es,si)),si,1));	// 73333                  lods    byte ptr es:[si] ;~ 274D:17F5
cs=0x274d;eip=0x0017f7; 	T(bl = al;);	// 73334                  mov     bl, al ;~ 274D:17F7
cs=0x274d;eip=0x0017f9; 	T(AND(al, 3));	// 73335                  and     al, 3 ;~ 274D:17F9
cs=0x274d;eip=0x0017fb; 	T(CMP(al, 1));	// 73336                  cmp     al, 1 ;~ 274D:17FB
cs=0x274d;eip=0x0017fd; 	J(JZ(loc_372fe));	// 73337                  jz      short loc_372FE ;~ 274D:17FD
cs=0x274d;eip=0x0017ff; 	J(CALL(sub_37652,0));	// 73338                  call    sub_37652 ;~ 274D:17FF
cs=0x274d;eip=0x001802; 	J(JNZ(loc_372b8));	// 73339                  jnz     short loc_372B8 ;~ 274D:1802
cs=0x274d;eip=0x001804; 	T(ADD(si, 2));	// 73340                  add     si, 2 ;~ 274D:1804
cs=0x274d;eip=0x001807; 	J(RETN(0));	// 73341                  retn ;~ 274D:1807
loc_372b8:
	// 7007 
cs=0x274d;eip=0x001808; 	X(LODS(*(raddr(es,si)),si,1));	// 73345                  lods    byte ptr es:[si] ;~ 274D:1808
cs=0x274d;eip=0x00180a; 	T(SUB(ah, ah));	// 73346                  sub     ah, ah ;~ 274D:180A
cs=0x274d;eip=0x00180c; 	T(SHL(ax, 1));	// 73347                  shl     ax, 1 ;~ 274D:180C
cs=0x274d;eip=0x00180e; 	T(bx = ax;);	// 73348                  mov     bx, ax ;~ 274D:180E
cs=0x274d;eip=0x001810; 	T(SHL(bx, 1));	// 73349                  shl     bx, 1 ;~ 274D:1810
cs=0x274d;eip=0x001812; 	T(SHL(bx, 1));	// 73350                  shl     bx, 1 ;~ 274D:1812
cs=0x274d;eip=0x001814; 	T(cx = bx;);	// 73351                  mov     cx, bx ;~ 274D:1814
cs=0x274d;eip=0x001816; 	T(SHL(cx, 1));	// 73352                  shl     cx, 1 ;~ 274D:1816
cs=0x274d;eip=0x001818; 	T(ADD(bx, cx));	// 73353                  add     bx, cx ;~ 274D:1818
cs=0x274d;eip=0x00181a; 	T(ADD(bx, ax));	// 73354                  add     bx, ax ;~ 274D:181A
cs=0x274d;eip=0x00181c; 	T(ADD(bx, 0x328E));	// 73355                  add     bx, 328Eh ;~ 274D:181C
cs=0x274d;eip=0x001820; 	T(TEST(*(raddr(ds,bx+0x18)), 0x80));	// 73356                  test    byte ptr [bx+18h], 80h ;~ 274D:1820
cs=0x274d;eip=0x001824; 	J(JZ(loc_372d8));	// 73357                  jz      short loc_372D8 ;~ 274D:1824
cs=0x274d;eip=0x001826; 	T(INC(si));	// 73358                  inc     si ;~ 274D:1826
cs=0x274d;eip=0x001827; 	J(RETN(0));	// 73359                  retn ;~ 274D:1827
loc_372d8:
	// 7008 
cs=0x274d;eip=0x001828; 	X(LODS(*(raddr(es,si)),si,1));	// 73363                  lods    byte ptr es:[si] ;~ 274D:1828
cs=0x274d;eip=0x00182a; 	T(SUB(ah, ah));	// 73364                  sub     ah, ah ;~ 274D:182A
cs=0x274d;eip=0x00182c; 	T(di = ax;);	// 73365                  mov     di, ax ;~ 274D:182C
cs=0x274d;eip=0x00182e; 	T(MOV(ah, *(raddr(ds,di+0x18EC))));	// 73366                  mov     ah, [di+18ECh] ;~ 274D:182E
cs=0x274d;eip=0x001832; 	T(ADD(ah, *(byte_4a3ca)));	// 73367                  add     ah, byte_4A3CA ;~ 274D:1832
cs=0x274d;eip=0x001836; 	J(CALLF(sub_49a3e,0));	// 73368                  call    far ptr sub_49A3E ;~ 274D:1836
cs=0x274d;eip=0x00183b; 	T(MOV(cx, *(dw*)(raddr(ds,bx+8))));	// 73370                  mov     cx, [bx+8] ;~ 274D:183B
cs=0x274d;eip=0x00183e; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0C))));	// 73371                  mov     dx, [bx+0Ch] ;~ 274D:183E
cs=0x274d;eip=0x001841; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 73372                  mov     ax, [bx] ;~ 274D:1841
cs=0x274d;eip=0x001843; 	T(MOV(bx, *(dw*)(raddr(ds,bx+4))));	// 73373                  mov     bx, [bx+4] ;~ 274D:1843
cs=0x274d;eip=0x001846; 	X(PUSH(si));	// 73374                  push    si ;~ 274D:1846
cs=0x274d;eip=0x001847; 	J(CALLF(sub_49a39,0));	// 73375                  call    far ptr sub_49A39 ;~ 274D:1847
cs=0x274d;eip=0x00184c; 	X(POP(si));	// 73377                  pop     si ;~ 274D:184C
cs=0x274d;eip=0x00184d; 	J(RETN(0));	// 73378                  retn ;~ 274D:184D
loc_372fe:
	// 7009 
cs=0x274d;eip=0x00184e; 	X(LODS(*(raddr(es,si)),si,1));	// 73382                  lods    byte ptr es:[si] ;~ 274D:184E
cs=0x274d;eip=0x001850; 	T(SHR(bl, 1));	// 73383                  shr     bl, 1 ;~ 274D:1850
cs=0x274d;eip=0x001852; 	T(SHR(bl, 1));	// 73384                  shr     bl, 1 ;~ 274D:1852
cs=0x274d;eip=0x001854; 	T(cl = bl;);	// 73385                  mov     cl, bl ;~ 274D:1854
cs=0x274d;eip=0x001856; 	T(AND(bx, 0x1E));	// 73386                  and     bx, 1Eh ;~ 274D:1856
cs=0x274d;eip=0x001859; 	T(MOV(bx, *(dw*)(raddr(ds,bx+0x42DE))));	// 73387                  mov     bx, [bx+42DEh] ;~ 274D:1859
cs=0x274d;eip=0x00185d; 	T(TEST(cl, 0x20));	// 73388                  test    cl, 20h ;~ 274D:185D
cs=0x274d;eip=0x001860; 	J(JNZ(loc_3731e));	// 73389                  jnz     short loc_3731E ;~ 274D:1860
cs=0x274d;eip=0x001862; 	T(TEST(word_4a4e6, bx));	// 73390                  test    word_4A4E6, bx ;~ 274D:1862
cs=0x274d;eip=0x001866; 	J(JNZ(loc_37324));	// 73391                  jnz     short loc_37324 ;~ 274D:1866
loc_37318:
	// 7010 
cs=0x274d;eip=0x001868; 	T(SUB(ah, ah));	// 73395                  sub     ah, ah ;~ 274D:1868
cs=0x274d;eip=0x00186a; 	T(ADD(si, ax));	// 73396                  add     si, ax ;~ 274D:186A
cs=0x274d;eip=0x00186c; 	T(INC(si));	// 73397                  inc     si ;~ 274D:186C
cs=0x274d;eip=0x00186d; 	J(RETN(0));	// 73398                  retn ;~ 274D:186D
loc_3731e:
	// 7011 
cs=0x274d;eip=0x00186e; 	T(TEST(word_4a4e8, bx));	// 73402                  test    word_4A4E8, bx ;~ 274D:186E
cs=0x274d;eip=0x001872; 	J(JZ(loc_37318));	// 73403                  jz      short loc_37318 ;~ 274D:1872
loc_37324:
	// 7012 
cs=0x274d;eip=0x001874; 	X(byte_4ce47 = al;);	// 73406                  mov     byte_4CE47, al ;~ 274D:1874
cs=0x274d;eip=0x001877; 	T(bl = al;);	// 73407                  mov     bl, al ;~ 274D:1877
cs=0x274d;eip=0x001879; 	T(SUB(bh, bh));	// 73408                  sub     bh, bh ;~ 274D:1879
cs=0x274d;eip=0x00187b; 	T(MOV(bl, *(raddr(es,bx+si))));	// 73409                  mov     bl, es:[bx+si] ;~ 274D:187B
cs=0x274d;eip=0x00187e; 	T(CMP(bl, 0x0FF));	// 73410                  cmp     bl, 0FFh ;~ 274D:187E
cs=0x274d;eip=0x001881; 	J(JZ(loc_37318));	// 73411                  jz      short loc_37318 ;~ 274D:1881
cs=0x274d;eip=0x001883; 	T(CMP(word_49ddc, 0x400));	// 73412                  cmp     word_49DDC, 400h ;~ 274D:1883
cs=0x274d;eip=0x001889; 	J(JNZ(loc_37340));	// 73413                  jnz     short loc_37340 ;~ 274D:1889
cs=0x274d;eip=0x00188b; 	T(CMP(bl, 1));	// 73414                  cmp     bl, 1 ;~ 274D:188B
cs=0x274d;eip=0x00188e; 	J(JNZ(loc_37318));	// 73415                  jnz     short loc_37318 ;~ 274D:188E
loc_37340:
	// 7013 
cs=0x274d;eip=0x001890; 	T(di = bx;);	// 73418                  mov     di, bx ;~ 274D:1890
cs=0x274d;eip=0x001892; 	T(MOV(ah, *(raddr(ds,di+0x18EC))));	// 73419                  mov     ah, [di+18ECh] ;~ 274D:1892
cs=0x274d;eip=0x001896; 	T(ADD(ah, *(byte_4a3ca)));	// 73420                  add     ah, byte_4A3CA ;~ 274D:1896
cs=0x274d;eip=0x00189a; 	J(CALLF(sub_49a3e,0));	// 73421                  call    far ptr sub_49A3E ;~ 274D:189A
cs=0x274d;eip=0x00189f; 	J(CALL(sub_37950,0));	// 73423                  call    sub_37950 ;~ 274D:189F
cs=0x274d;eip=0x0018a2; 	T(es = *(dw*)(((db*)&dword_4a46c)+2););	// 73424                  mov     es, word ptr dword_4A46C+2 ;~ 274D:18A2
cs=0x274d;eip=0x0018a6; 	X(byte_4ce48 = 0;);	// 73426                  mov     byte_4CE48, 0 ;~ 274D:18A6
loc_3735b:
	// 7014 
cs=0x274d;eip=0x0018ab; 	X(LODS(*(raddr(es,si)),si,1));	// 73429                  lods    byte ptr es:[si] ;~ 274D:18AB
cs=0x274d;eip=0x0018ad; 	T(SUB(ah, ah));	// 73431                  sub     ah, ah ;~ 274D:18AD
cs=0x274d;eip=0x0018af; 	T(SHL(ax, 1));	// 73432                  shl     ax, 1 ;~ 274D:18AF
cs=0x274d;eip=0x0018b1; 	T(bx = ax;);	// 73433                  mov     bx, ax ;~ 274D:18B1
cs=0x274d;eip=0x0018b3; 	T(SHL(bx, 1));	// 73434                  shl     bx, 1 ;~ 274D:18B3
cs=0x274d;eip=0x0018b5; 	T(SHL(bx, 1));	// 73435                  shl     bx, 1 ;~ 274D:18B5
cs=0x274d;eip=0x0018b7; 	T(cx = bx;);	// 73436                  mov     cx, bx ;~ 274D:18B7
cs=0x274d;eip=0x0018b9; 	T(SHL(cx, 1));	// 73437                  shl     cx, 1 ;~ 274D:18B9
cs=0x274d;eip=0x0018bb; 	T(ADD(bx, cx));	// 73438                  add     bx, cx ;~ 274D:18BB
cs=0x274d;eip=0x0018bd; 	T(ADD(bx, ax));	// 73439                  add     bx, ax ;~ 274D:18BD
cs=0x274d;eip=0x0018bf; 	T(ADD(bx, 0x328E));	// 73440                  add     bx, 328Eh ;~ 274D:18BF
cs=0x274d;eip=0x0018c3; 	T(TEST(*(raddr(ds,bx+0x18)), 0x40));	// 73441                  test    byte ptr [bx+18h], 40h ;~ 274D:18C3
cs=0x274d;eip=0x0018c7; 	J(JZ(loc_373b1));	// 73442                  jz      short loc_373B1 ;~ 274D:18C7
cs=0x274d;eip=0x0018c9; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x10))));	// 73443                  mov     ax, [bx+10h] ;~ 274D:18C9
cs=0x274d;eip=0x0018cc; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x12))));	// 73444                  mov     dx, [bx+12h] ;~ 274D:18CC
cs=0x274d;eip=0x0018cf; 	T(MOV(cx, *(dw*)(raddr(ds,bx+0x14))));	// 73445                  mov     cx, [bx+14h] ;~ 274D:18CF
cs=0x274d;eip=0x0018d2; 	T(MOV(di, *(dw*)(raddr(ds,bx+0x16))));	// 73446                  mov     di, [bx+16h] ;~ 274D:18D2
cs=0x274d;eip=0x0018d5; 	T(CMP(byte_4ce48, 0));	// 73447                  cmp     byte_4CE48, 0 ;~ 274D:18D5
cs=0x274d;eip=0x0018da; 	J(JNZ(loc_3739e));	// 73448                  jnz     short loc_3739E ;~ 274D:18DA
cs=0x274d;eip=0x0018dc; 	X(word_4ce49 = ax;);	// 73449                  mov     word_4CE49, ax ;~ 274D:18DC
cs=0x274d;eip=0x0018df; 	X(word_4ce4b = dx;);	// 73450                  mov     word_4CE4B, dx ;~ 274D:18DF
cs=0x274d;eip=0x0018e3; 	X(word_4ce4d = cx;);	// 73451                  mov     word_4CE4D, cx ;~ 274D:18E3
cs=0x274d;eip=0x0018e7; 	X(word_4ce4f = di;);	// 73452                  mov     word_4CE4F, di ;~ 274D:18E7
cs=0x274d;eip=0x0018eb; 	J(JMP(loc_373ad));	// 73453                  jmp     short loc_373AD ;~ 274D:18EB
loc_3739e:
	// 7015 
cs=0x274d;eip=0x0018ee; 	X(word_4ce51 = ax;);	// 73459                  mov     word_4CE51, ax ;~ 274D:18EE
cs=0x274d;eip=0x0018f1; 	X(word_4ce53 = dx;);	// 73460                  mov     word_4CE53, dx ;~ 274D:18F1
cs=0x274d;eip=0x0018f5; 	X(word_4ce55 = cx;);	// 73461                  mov     word_4CE55, cx ;~ 274D:18F5
cs=0x274d;eip=0x0018f9; 	X(word_4ce57 = di;);	// 73462                  mov     word_4CE57, di ;~ 274D:18F9
loc_373ad:
	// 7016 
cs=0x274d;eip=0x0018fd; 	X(INC(byte_4ce48));	// 73465                  inc     byte_4CE48 ;~ 274D:18FD
loc_373b1:
	// 7017 
cs=0x274d;eip=0x001901; 	X(PUSH(si));	// 73468                  push    si ;~ 274D:1901
cs=0x274d;eip=0x001902; 	J(CALL(sub_373ea,0));	// 73469                  call    sub_373EA ;~ 274D:1902
cs=0x274d;eip=0x001905; 	X(POP(si));	// 73470                  pop     si ;~ 274D:1905
cs=0x274d;eip=0x001906; 	X(DEC(byte_4ce47));	// 73471                  dec     byte_4CE47 ;~ 274D:1906
cs=0x274d;eip=0x00190a; 	J(JNZ(loc_3735b));	// 73472                  jnz     short loc_3735B ;~ 274D:190A
cs=0x274d;eip=0x00190c; 	T(INC(si));	// 73473                  inc     si ;~ 274D:190C
cs=0x274d;eip=0x00190d; 	X(PUSH(si));	// 73474                  push    si ;~ 274D:190D
cs=0x274d;eip=0x00190e; 	T(CMP(byte_4ce48, 2));	// 73475                  cmp     byte_4CE48, 2 ;~ 274D:190E
cs=0x274d;eip=0x001913; 	J(JL(loc_373d9));	// 73476                  jl      short loc_373D9 ;~ 274D:1913
cs=0x274d;eip=0x001915; 	X(byte_4ce61 = 0;);	// 73477                  mov     byte_4CE61, 0 ;~ 274D:1915
cs=0x274d;eip=0x00191a; 	T(di = 0x4369;);	// 73478                  mov     di, 4369h ;~ 274D:191A
cs=0x274d;eip=0x00191d; 	J(CALL(sub_35c0d,0));	// 73479                  call    sub_35C0D ;~ 274D:191D
cs=0x274d;eip=0x001920; 	T(es = *(dw*)(((db*)&dword_4a46c)+2););	// 73480                  mov     es, word ptr dword_4A46C+2 ;~ 274D:1920
cs=0x274d;eip=0x001924; 	T(bx = di;);	// 73481                  mov     bx, di ;~ 274D:1924
cs=0x274d;eip=0x001926; 	J(CALL(sub_373ea,0));	// 73482                  call    sub_373EA ;~ 274D:1926
loc_373d9:
	// 7018 
cs=0x274d;eip=0x001929; 	T(ax = word_4db09;);	// 73485                  mov     ax, word_4DB09 ;~ 274D:1929
cs=0x274d;eip=0x00192c; 	T(cx = word_4db0b;);	// 73486                  mov     cx, word_4DB0B ;~ 274D:192C
cs=0x274d;eip=0x001930; 	T(bx = 0x4CB5;);	// 73487                  mov     bx, 4CB5h ;~ 274D:1930
cs=0x274d;eip=0x001933; 	J(CALLF(sub_49a57,0));	// 73488                  call    far ptr sub_49A57 ;~ 274D:1933
seg35ab_1938_proc:
	// 73492 
cs=0x274d;eip=0x001938; 	X(POP(si));	// 73492                  pop     si ;~ 274D:1938
cs=0x274d;eip=0x001939; 	J(RETN(0));	// 73493                  retn ;~ 274D:1939

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_372b8: 	goto loc_372b8;
        case m2c::kloc_372d8: 	goto loc_372d8;
        case m2c::kloc_372fe: 	goto loc_372fe;
        case m2c::kloc_37318: 	goto loc_37318;
        case m2c::kloc_3731e: 	goto loc_3731e;
        case m2c::kloc_37324: 	goto loc_37324;
        case m2c::kloc_37340: 	goto loc_37340;
        case m2c::kloc_3735b: 	goto loc_3735b;
        case m2c::kloc_3739e: 	goto loc_3739e;
        case m2c::kloc_373ad: 	goto loc_373ad;
        case m2c::kloc_373b1: 	goto loc_373b1;
        case m2c::kloc_373d9: 	goto loc_373d9;
        case m2c::kseg35ab_1938_proc: 	goto seg35ab_1938_proc;
        case m2c::ksub_372a5: 	goto sub_372a5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_373ea(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_373ea:
    _begin:
cs=0x274d;eip=0x00193a; 	T(TEST(*(raddr(ds,bx+0x18)), 0x80));	// 73500                  test    byte ptr [bx+18h], 80h ;~ 274D:193A
cs=0x274d;eip=0x00193e; 	J(JNZ(loc_3740c));	// 73501                  jnz     short loc_3740C ;~ 274D:193E
cs=0x274d;eip=0x001940; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 73502                  mov     ax, [bx] ;~ 274D:1940
cs=0x274d;eip=0x001942; 	X(word_4d78d = ax;);	// 73503                  mov     word_4D78D, ax ;~ 274D:1942
cs=0x274d;eip=0x001945; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 73504                  mov     ax, [bx+4] ;~ 274D:1945
cs=0x274d;eip=0x001948; 	X(word_4d791 = ax;);	// 73505                  mov     word_4D791, ax ;~ 274D:1948
cs=0x274d;eip=0x00194b; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 73506                  mov     ax, [bx+8] ;~ 274D:194B
cs=0x274d;eip=0x00194e; 	X(word_4d78f = ax;);	// 73507                  mov     word_4D78F, ax ;~ 274D:194E
cs=0x274d;eip=0x001951; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0C))));	// 73508                  mov     ax, [bx+0Ch] ;~ 274D:1951
cs=0x274d;eip=0x001954; 	X(word_4d793 = ax;);	// 73509                  mov     word_4D793, ax ;~ 274D:1954
cs=0x274d;eip=0x001957; 	X(PUSH(bx));	// 73510                  push    bx ;~ 274D:1957
cs=0x274d;eip=0x001958; 	J(CALL(sub_379e4,0));	// 73511                  call    sub_379E4 ;~ 274D:1958
cs=0x274d;eip=0x00195b; 	X(POP(bx));	// 73512                  pop     bx ;~ 274D:195B
loc_3740c:
	// 7019 
cs=0x274d;eip=0x00195c; 	T(TEST(*(raddr(ds,bx+0x18)), 0x20));	// 73515                  test    byte ptr [bx+18h], 20h ;~ 274D:195C
cs=0x274d;eip=0x001960; 	J(JZ(loc_37423));	// 73516                  jz      short loc_37423 ;~ 274D:1960
cs=0x274d;eip=0x001962; 	T(MOV(si, *(dw*)(raddr(ds,bx))));	// 73517                  mov     si, [bx] ;~ 274D:1962
cs=0x274d;eip=0x001964; 	T(MOV(di, *(dw*)(raddr(ds,bx+4))));	// 73518                  mov     di, [bx+4] ;~ 274D:1964
cs=0x274d;eip=0x001967; 	T(MOV(dx, *(dw*)(raddr(ds,bx+6))));	// 73519                  mov     dx, [bx+6] ;~ 274D:1967
cs=0x274d;eip=0x00196a; 	X(PUSH(bx));	// 73520                  push    bx ;~ 274D:196A
cs=0x274d;eip=0x00196b; 	J(CALL(sub_37986,0));	// 73521                  call    sub_37986 ;~ 274D:196B
cs=0x274d;eip=0x00196e; 	T(es = *(dw*)(((db*)&dword_4a46c)+2););	// 73523                  mov     es, word ptr dword_4A46C+2 ;~ 274D:196E
cs=0x274d;eip=0x001972; 	X(POP(bx));	// 73525                  pop     bx ;~ 274D:1972
loc_37423:
	// 7020 
cs=0x274d;eip=0x001973; 	T(TEST(*(raddr(ds,bx+0x18)), 0x10));	// 73528                  test    byte ptr [bx+18h], 10h ;~ 274D:1973
cs=0x274d;eip=0x001977; 	J(JZ(locret_37439));	// 73529                  jz      short locret_37439 ;~ 274D:1977
cs=0x274d;eip=0x001979; 	T(MOV(si, *(dw*)(raddr(ds,bx+8))));	// 73530                  mov     si, [bx+8] ;~ 274D:1979
cs=0x274d;eip=0x00197c; 	T(MOV(di, *(dw*)(raddr(ds,bx+0x0C))));	// 73531                  mov     di, [bx+0Ch] ;~ 274D:197C
cs=0x274d;eip=0x00197f; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0E))));	// 73532                  mov     dx, [bx+0Eh] ;~ 274D:197F
cs=0x274d;eip=0x001982; 	J(CALL(sub_37986,0));	// 73533                  call    sub_37986 ;~ 274D:1982
cs=0x274d;eip=0x001985; 	T(es = *(dw*)(((db*)&dword_4a46c)+2););	// 73535                  mov     es, word ptr dword_4A46C+2 ;~ 274D:1985
locret_37439:
	// 7021 
cs=0x274d;eip=0x001989; 	J(RETN(0));	// 73539                  retn ;~ 274D:1989

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_3740c: 	goto loc_3740c;
        case m2c::kloc_37423: 	goto loc_37423;
        case m2c::klocret_37439: 	goto locret_37439;
        case m2c::ksub_373ea: 	goto sub_373ea;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg35ab_198a_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg35ab_198a_proc:
    _begin:
loc_3743a:
	// 7022 
cs=0x274d;eip=0x00198a; 	T(ax = word_4a486;);	// 73546                  mov     ax, word_4A486 ;~ 274D:198A
cs=0x274d;eip=0x00198d; 	T(CMP(ax, 1));	// 73547                  cmp     ax, 1 ;~ 274D:198D
cs=0x274d;eip=0x001990; 	J(JL(locret_37497));	// 73548                  jl      short locret_37497 ;~ 274D:1990
cs=0x274d;eip=0x001992; 	X(*(word_4a8b6) = ax;);	// 73549                  mov     word_4A8B6, ax ;~ 274D:1992
cs=0x274d;eip=0x001995; 	T(ax = word_4a484;);	// 73550                  mov     ax, word_4A484 ;~ 274D:1995
cs=0x274d;eip=0x001998; 	X(word_4a8b4 = ax;);	// 73551                  mov     word_4A8B4, ax ;~ 274D:1998
cs=0x274d;eip=0x00199b; 	T(ax = word_4a47c;);	// 73552                  mov     ax, word_4A47C ;~ 274D:199B
cs=0x274d;eip=0x00199e; 	X(word_4a4ec = ax;);	// 73553                  mov     word_4A4EC, ax ;~ 274D:199E
cs=0x274d;eip=0x0019a1; 	T(ax = word_4a47e;);	// 73554                  mov     ax, word_4A47E ;~ 274D:19A1
cs=0x274d;eip=0x0019a4; 	X(*(word_4a4ee) = ax;);	// 73555                  mov     word_4A4EE, ax ;~ 274D:19A4
cs=0x274d;eip=0x0019a7; 	T(ax = word_4a480;);	// 73556                  mov     ax, word_4A480 ;~ 274D:19A7
cs=0x274d;eip=0x0019aa; 	X(word_4a6d0 = ax;);	// 73557                  mov     word_4A6D0, ax ;~ 274D:19AA
cs=0x274d;eip=0x0019ad; 	T(ax = word_4a482;);	// 73558                  mov     ax, word_4A482 ;~ 274D:19AD
cs=0x274d;eip=0x0019b0; 	X(*(word_4a6d2) = ax;);	// 73559                  mov     word_4A6D2, ax ;~ 274D:19B0
cs=0x274d;eip=0x0019b3; 	T(INC(si));	// 73560                  inc     si ;~ 274D:19B3
cs=0x274d;eip=0x0019b4; 	X(LODS(*(raddr(es,si)),si,1));	// 73561                  lods    byte ptr es:[si] ;~ 274D:19B4
cs=0x274d;eip=0x0019b6; 	T(SUB(ah, ah));	// 73562                  sub     ah, ah ;~ 274D:19B6
cs=0x274d;eip=0x0019b8; 	T(di = ax;);	// 73563                  mov     di, ax ;~ 274D:19B8
cs=0x274d;eip=0x0019ba; 	T(MOV(ah, *(raddr(ds,di+0x18EC))));	// 73564                  mov     ah, [di+18ECh] ;~ 274D:19BA
cs=0x274d;eip=0x0019be; 	T(ADD(ah, *(byte_4a3ca)));	// 73565                  add     ah, byte_4A3CA ;~ 274D:19BE
cs=0x274d;eip=0x0019c2; 	J(CALLF(sub_49a3e,0));	// 73566                  call    far ptr sub_49A3E ;~ 274D:19C2
cs=0x274d;eip=0x0019c7; 	J(CALL(sub_35bc3,0));	// 73568                  call    sub_35BC3 ;~ 274D:19C7
cs=0x274d;eip=0x0019ca; 	T(SUB(bx, bx));	// 73569                  sub     bx, bx ;~ 274D:19CA
cs=0x274d;eip=0x0019cc; 	J(CALL(sub_35b28,0));	// 73570                  call    sub_35B28 ;~ 274D:19CC
cs=0x274d;eip=0x0019cf; 	J(CALL(sub_35be7,0));	// 73571                  call    sub_35BE7 ;~ 274D:19CF
cs=0x274d;eip=0x0019d2; 	T(ax = *(word_4aa98););	// 73572                  mov     ax, word_4AA98 ;~ 274D:19D2
cs=0x274d;eip=0x0019d5; 	X(word_4d78d = ax;);	// 73573                  mov     word_4D78D, ax ;~ 274D:19D5
cs=0x274d;eip=0x0019d8; 	X(word_4d78f = ax;);	// 73574                  mov     word_4D78F, ax ;~ 274D:19D8
cs=0x274d;eip=0x0019db; 	T(ax = *(word_4ac7c););	// 73575                  mov     ax, word_4AC7C ;~ 274D:19DB
cs=0x274d;eip=0x0019de; 	X(word_4d791 = ax;);	// 73576                  mov     word_4D791, ax ;~ 274D:19DE
cs=0x274d;eip=0x0019e1; 	X(word_4d793 = ax;);	// 73577                  mov     word_4D793, ax ;~ 274D:19E1
cs=0x274d;eip=0x0019e4; 	J(CALL(sub_37766,0));	// 73578                  call    sub_37766 ;~ 274D:19E4
locret_37497:
	// 7023 
cs=0x274d;eip=0x0019e7; 	J(RETN(0));	// 73581                  retn ;~ 274D:19E7
loc_37498:
	// 7024 
cs=0x274d;eip=0x0019e8; 	X(LODS(*(raddr(es,si)),si,1));	// 73586                  lods    byte ptr es:[si] ;~ 274D:19E8
cs=0x274d;eip=0x0019ea; 	T(SUB(ah, ah));	// 73587                  sub     ah, ah ;~ 274D:19EA
cs=0x274d;eip=0x0019ec; 	T(di = ax;);	// 73588                  mov     di, ax ;~ 274D:19EC
cs=0x274d;eip=0x0019ee; 	T(MOV(bl, *(raddr(ds,di-0x7748))));	// 73589                  mov     bl, [di-7748h] ;~ 274D:19EE
cs=0x274d;eip=0x0019f2; 	T(SUB(bh, bh));	// 73590                  sub     bh, bh ;~ 274D:19F2
cs=0x274d;eip=0x0019f4; 	T(SHL(bx, 1));	// 73591                  shl     bx, 1 ;~ 274D:19F4
cs=0x274d;eip=0x0019f6; 	T(MOV(cx, *(dw*)(raddr(ds,bx-0x6A30))));	// 73592                  mov     cx, [bx-6A30h] ;~ 274D:19F6
cs=0x274d;eip=0x0019fa; 	T(MOV(bl, *(raddr(ds,di-0x7802))));	// 73593                  mov     bl, [di-7802h] ;~ 274D:19FA
cs=0x274d;eip=0x0019fe; 	T(SUB(bh, bh));	// 73594                  sub     bh, bh ;~ 274D:19FE
cs=0x274d;eip=0x001a00; 	T(SHL(bx, 1));	// 73595                  shl     bx, 1 ;~ 274D:1A00
cs=0x274d;eip=0x001a02; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x6A72))));	// 73596                  mov     ax, [bx-6A72h] ;~ 274D:1A02
cs=0x274d;eip=0x001a06; 	X(word_4ce63 = ax;);	// 73597                  mov     word_4CE63, ax ;~ 274D:1A06
cs=0x274d;eip=0x001a09; 	T(MOV(bl, *(raddr(ds,di-0x79A2))));	// 73598                  mov     bl, [di-79A2h] ;~ 274D:1A09
cs=0x274d;eip=0x001a0d; 	T(SUB(bh, bh));	// 73599                  sub     bh, bh ;~ 274D:1A0D
cs=0x274d;eip=0x001a0f; 	T(SHL(bx, 1));	// 73600                  shl     bx, 1 ;~ 274D:1A0F
cs=0x274d;eip=0x001a11; 	T(MOV(bx, *(dw*)(raddr(ds,bx-0x6AB4))));	// 73601                  mov     bx, [bx-6AB4h] ;~ 274D:1A11
cs=0x274d;eip=0x001a15; 	X(PUSH(si));	// 73602                  push    si ;~ 274D:1A15
cs=0x274d;eip=0x001a16; 	T(ax = word_4ce63;);	// 73603                  mov     ax, word_4CE63 ;~ 274D:1A16
cs=0x274d;eip=0x001a19; 	X(IMUL1_2(word_4a4d6));	// 73604                  imul    word_4A4D6 ;~ 274D:1A19
cs=0x274d;eip=0x001a1d; 	T(di = dx;);	// 73605                  mov     di, dx ;~ 274D:1A1D
cs=0x274d;eip=0x001a1f; 	T(si = ax;);	// 73606                  mov     si, ax ;~ 274D:1A1F
cs=0x274d;eip=0x001a21; 	T(ax = word_4a4d0;);	// 73607                  mov     ax, word_4A4D0 ;~ 274D:1A21
cs=0x274d;eip=0x001a24; 	T(IMUL1_2(cx));	// 73608                  imul    cx ;~ 274D:1A24
cs=0x274d;eip=0x001a26; 	T(ADD(si, ax));	// 73609                  add     si, ax ;~ 274D:1A26
cs=0x274d;eip=0x001a28; 	T(ADC(di, dx));	// 73610                  adc     di, dx ;~ 274D:1A28
cs=0x274d;eip=0x001a2a; 	T(ax = word_4a4ca;);	// 73611                  mov     ax, word_4A4CA ;~ 274D:1A2A
cs=0x274d;eip=0x001a2d; 	T(IMUL1_2(bx));	// 73612                  imul    bx ;~ 274D:1A2D
cs=0x274d;eip=0x001a2f; 	T(ADD(si, ax));	// 73613                  add     si, ax ;~ 274D:1A2F
cs=0x274d;eip=0x001a31; 	T(ADC(di, dx));	// 73614                  adc     di, dx ;~ 274D:1A31
cs=0x274d;eip=0x001a33; 	T(SHL(si, 1));	// 73615                  shl     si, 1 ;~ 274D:1A33
cs=0x274d;eip=0x001a35; 	T(RCL(di, 1));	// 73616                  rcl     di, 1 ;~ 274D:1A35
cs=0x274d;eip=0x001a37; 	T(ADD(si, word_4a47c));	// 73617                  add     si, word_4A47C ;~ 274D:1A37
cs=0x274d;eip=0x001a3b; 	T(ADC(di, word_4a47e));	// 73618                  adc     di, word_4A47E ;~ 274D:1A3B
cs=0x274d;eip=0x001a3f; 	X(word_4a4ec = si;);	// 73619                  mov     word_4A4EC, si ;~ 274D:1A3F
cs=0x274d;eip=0x001a43; 	X(*(word_4a4ee) = di;);	// 73620                  mov     word_4A4EE, di ;~ 274D:1A43
cs=0x274d;eip=0x001a47; 	T(ax = word_4ce63;);	// 73621                  mov     ax, word_4CE63 ;~ 274D:1A47
cs=0x274d;eip=0x001a4a; 	X(IMUL1_2(word_4a4d8));	// 73622                  imul    word_4A4D8 ;~ 274D:1A4A
cs=0x274d;eip=0x001a4e; 	T(di = dx;);	// 73623                  mov     di, dx ;~ 274D:1A4E
cs=0x274d;eip=0x001a50; 	T(si = ax;);	// 73624                  mov     si, ax ;~ 274D:1A50
cs=0x274d;eip=0x001a52; 	T(ax = word_4a4d2;);	// 73625                  mov     ax, word_4A4D2 ;~ 274D:1A52
cs=0x274d;eip=0x001a55; 	T(IMUL1_2(cx));	// 73626                  imul    cx ;~ 274D:1A55
cs=0x274d;eip=0x001a57; 	T(ADD(si, ax));	// 73627                  add     si, ax ;~ 274D:1A57
cs=0x274d;eip=0x001a59; 	T(ADC(di, dx));	// 73628                  adc     di, dx ;~ 274D:1A59
cs=0x274d;eip=0x001a5b; 	T(ax = word_4a4cc;);	// 73629                  mov     ax, word_4A4CC ;~ 274D:1A5B
cs=0x274d;eip=0x001a5e; 	T(IMUL1_2(bx));	// 73630                  imul    bx ;~ 274D:1A5E
cs=0x274d;eip=0x001a60; 	T(ADD(si, ax));	// 73631                  add     si, ax ;~ 274D:1A60
cs=0x274d;eip=0x001a62; 	T(ADC(di, dx));	// 73632                  adc     di, dx ;~ 274D:1A62
cs=0x274d;eip=0x001a64; 	T(SHL(si, 1));	// 73633                  shl     si, 1 ;~ 274D:1A64
cs=0x274d;eip=0x001a66; 	T(RCL(di, 1));	// 73634                  rcl     di, 1 ;~ 274D:1A66
cs=0x274d;eip=0x001a68; 	T(ADD(si, word_4a480));	// 73635                  add     si, word_4A480 ;~ 274D:1A68
cs=0x274d;eip=0x001a6c; 	T(ADC(di, word_4a482));	// 73636                  adc     di, word_4A482 ;~ 274D:1A6C
cs=0x274d;eip=0x001a70; 	X(word_4a6d0 = si;);	// 73637                  mov     word_4A6D0, si ;~ 274D:1A70
cs=0x274d;eip=0x001a74; 	X(*(word_4a6d2) = di;);	// 73638                  mov     word_4A6D2, di ;~ 274D:1A74
cs=0x274d;eip=0x001a78; 	T(ax = word_4ce63;);	// 73639                  mov     ax, word_4CE63 ;~ 274D:1A78
cs=0x274d;eip=0x001a7b; 	X(IMUL1_2(word_4a4da));	// 73640                  imul    word_4A4DA ;~ 274D:1A7B
cs=0x274d;eip=0x001a7f; 	T(di = dx;);	// 73641                  mov     di, dx ;~ 274D:1A7F
cs=0x274d;eip=0x001a81; 	T(si = ax;);	// 73642                  mov     si, ax ;~ 274D:1A81
cs=0x274d;eip=0x001a83; 	T(ax = word_4a4d4;);	// 73643                  mov     ax, word_4A4D4 ;~ 274D:1A83
cs=0x274d;eip=0x001a86; 	T(IMUL1_2(cx));	// 73644                  imul    cx ;~ 274D:1A86
cs=0x274d;eip=0x001a88; 	T(ADD(si, ax));	// 73645                  add     si, ax ;~ 274D:1A88
cs=0x274d;eip=0x001a8a; 	T(ADC(di, dx));	// 73646                  adc     di, dx ;~ 274D:1A8A
cs=0x274d;eip=0x001a8c; 	T(ax = word_4a4ce;);	// 73647                  mov     ax, word_4A4CE ;~ 274D:1A8C
cs=0x274d;eip=0x001a8f; 	T(IMUL1_2(bx));	// 73648                  imul    bx ;~ 274D:1A8F
cs=0x274d;eip=0x001a91; 	T(ADD(si, ax));	// 73649                  add     si, ax ;~ 274D:1A91
cs=0x274d;eip=0x001a93; 	T(ADC(di, dx));	// 73650                  adc     di, dx ;~ 274D:1A93
cs=0x274d;eip=0x001a95; 	T(SHL(si, 1));	// 73651                  shl     si, 1 ;~ 274D:1A95
cs=0x274d;eip=0x001a97; 	T(RCL(di, 1));	// 73652                  rcl     di, 1 ;~ 274D:1A97
cs=0x274d;eip=0x001a99; 	T(ADD(si, word_4a484));	// 73653                  add     si, word_4A484 ;~ 274D:1A99
cs=0x274d;eip=0x001a9d; 	T(ADC(di, word_4a486));	// 73654                  adc     di, word_4A486 ;~ 274D:1A9D
cs=0x274d;eip=0x001aa1; 	X(word_4a8b4 = si;);	// 73655                  mov     word_4A8B4, si ;~ 274D:1AA1
cs=0x274d;eip=0x001aa5; 	X(*(word_4a8b6) = di;);	// 73656                  mov     word_4A8B6, di ;~ 274D:1AA5
cs=0x274d;eip=0x001aa9; 	T(bx = 8;);	// 73657                  mov     bx, 8 ;~ 274D:1AA9
cs=0x274d;eip=0x001aac; 	T(CMP(di, 0x1388));	// 73658                  cmp     di, 1388h ;~ 274D:1AAC
cs=0x274d;eip=0x001ab0; 	J(JG(loc_3756c));	// 73659                  jg      short loc_3756C ;~ 274D:1AB0
cs=0x274d;eip=0x001ab2; 	T(DEC(bx));	// 73660                  dec     bx ;~ 274D:1AB2
cs=0x274d;eip=0x001ab3; 	T(CMP(di, 0x9C4));	// 73661                  cmp     di, 9C4h ;~ 274D:1AB3
cs=0x274d;eip=0x001ab7; 	J(JG(loc_3756c));	// 73662                  jg      short loc_3756C ;~ 274D:1AB7
cs=0x274d;eip=0x001ab9; 	T(bx = 0x0F;);	// 73663                  mov     bx, 0Fh ;~ 274D:1AB9
loc_3756c:
	// 7025 
cs=0x274d;eip=0x001abc; 	T(MOV(ah, *(raddr(ds,bx+0x18EC))));	// 73667                  mov     ah, [bx+18ECh] ;~ 274D:1ABC
cs=0x274d;eip=0x001ac0; 	J(CALLF(sub_49a3e,0));	// 73668                  call    far ptr sub_49A3E ;~ 274D:1AC0
cs=0x274d;eip=0x001ac5; 	T(SUB(bx, bx));	// 73670                  sub     bx, bx ;~ 274D:1AC5
cs=0x274d;eip=0x001ac7; 	J(CALL(sub_35b28,0));	// 73671                  call    sub_35B28 ;~ 274D:1AC7
cs=0x274d;eip=0x001aca; 	T(ax = *(word_4aa98););	// 73672                  mov     ax, word_4AA98 ;~ 274D:1ACA
cs=0x274d;eip=0x001acd; 	X(word_4d78d = ax;);	// 73673                  mov     word_4D78D, ax ;~ 274D:1ACD
cs=0x274d;eip=0x001ad0; 	X(word_4d78f = ax;);	// 73674                  mov     word_4D78F, ax ;~ 274D:1AD0
cs=0x274d;eip=0x001ad3; 	T(ax = *(word_4ac7c););	// 73675                  mov     ax, word_4AC7C ;~ 274D:1AD3
cs=0x274d;eip=0x001ad6; 	X(word_4d791 = ax;);	// 73676                  mov     word_4D791, ax ;~ 274D:1AD6
cs=0x274d;eip=0x001ad9; 	X(word_4d793 = ax;);	// 73677                  mov     word_4D793, ax ;~ 274D:1AD9
cs=0x274d;eip=0x001adc; 	J(CALL(sub_37766,0));	// 73678                  call    sub_37766 ;~ 274D:1ADC
cs=0x274d;eip=0x001adf; 	X(POP(si));	// 73679                  pop     si ;~ 274D:1ADF
cs=0x274d;eip=0x001ae0; 	T(es = *(dw*)(((db*)&dword_4a46c)+2););	// 73680                  mov     es, word ptr dword_4A46C+2 ;~ 274D:1AE0
cs=0x274d;eip=0x001ae4; 	X(DEC(byte_4ce62));	// 73682                  dec     byte_4CE62 ;~ 274D:1AE4
cs=0x274d;eip=0x001ae8; 	J(JZ(loc_3759d));	// 73683                  jz      short loc_3759D ;~ 274D:1AE8
cs=0x274d;eip=0x001aea; 	J(JMP(loc_37498));	// 73684                  jmp     loc_37498 ;~ 274D:1AEA
loc_3759d:
	// 7026 
cs=0x274d;eip=0x001aed; 	J(CALL(sub_35be7,0));	// 73688                  call    sub_35BE7 ;~ 274D:1AED
cs=0x274d;eip=0x001af0; 	J(RETN(0));	// 73689                  retn ;~ 274D:1AF0
loc_375a1:
	// 7027 
cs=0x274d;eip=0x001af1; 	J(JMP(loc_37498));	// 73693                  jmp     loc_37498 ;~ 274D:1AF1
loc_375a4:
	// 7028 
cs=0x274d;eip=0x001af4; 	J(CALL(sub_35bc3,0));	// 73698                  call    sub_35BC3 ;~ 274D:1AF4
cs=0x274d;eip=0x001af7; 	T(ADD(si, 2));	// 73699                  add     si, 2 ;~ 274D:1AF7
cs=0x274d;eip=0x001afa; 	X(LODS(*(raddr(es,si)),si,1));	// 73700                  lods    byte ptr es:[si] ;~ 274D:1AFA
cs=0x274d;eip=0x001afc; 	X(byte_4ce62 = al;);	// 73701                  mov     byte_4CE62, al ;~ 274D:1AFC
cs=0x274d;eip=0x001aff; 	T(CMP(byte_4cdb8, 0));	// 73702                  cmp     byte_4CDB8, 0 ;~ 274D:1AFF
cs=0x274d;eip=0x001b04; 	J(JNZ(loc_375a1));	// 73703                  jnz     short loc_375A1 ;~ 274D:1B04
loc_375b6:
	// 7029 
cs=0x274d;eip=0x001b06; 	X(LODS(*(raddr(es,si)),si,1));	// 73706                  lods    byte ptr es:[si] ;~ 274D:1B06
cs=0x274d;eip=0x001b08; 	T(SUB(ah, ah));	// 73707                  sub     ah, ah ;~ 274D:1B08
cs=0x274d;eip=0x001b0a; 	T(SHL(ax, 1));	// 73708                  shl     ax, 1 ;~ 274D:1B0A
cs=0x274d;eip=0x001b0c; 	T(SHL(ax, 1));	// 73709                  shl     ax, 1 ;~ 274D:1B0C
cs=0x274d;eip=0x001b0e; 	T(di = ax;);	// 73710                  mov     di, ax ;~ 274D:1B0E
cs=0x274d;eip=0x001b10; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x2830))));	// 73711                  mov     ax, [di+2830h] ;~ 274D:1B10
cs=0x274d;eip=0x001b14; 	T(ADD(ax, word_4a484));	// 73712                  add     ax, word_4A484 ;~ 274D:1B14
cs=0x274d;eip=0x001b18; 	X(word_4a8b4 = ax;);	// 73713                  mov     word_4A8B4, ax ;~ 274D:1B18
cs=0x274d;eip=0x001b1b; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x2832))));	// 73714                  mov     ax, [di+2832h] ;~ 274D:1B1B
cs=0x274d;eip=0x001b1f; 	T(ADC(ax, word_4a486));	// 73715                  adc     ax, word_4A486 ;~ 274D:1B1F
cs=0x274d;eip=0x001b23; 	T(CMP(ax, 1));	// 73716                  cmp     ax, 1 ;~ 274D:1B23
cs=0x274d;eip=0x001b26; 	J(JL(loc_37645));	// 73717                  jl      short loc_37645 ;~ 274D:1B26
cs=0x274d;eip=0x001b28; 	X(*(word_4a8b6) = ax;);	// 73718                  mov     word_4A8B6, ax ;~ 274D:1B28
cs=0x274d;eip=0x001b2b; 	T(dx = ax;);	// 73719                  mov     dx, ax ;~ 274D:1B2B
cs=0x274d;eip=0x001b2d; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x2380))));	// 73720                  mov     ax, [di+2380h] ;~ 274D:1B2D
cs=0x274d;eip=0x001b31; 	T(ADD(ax, word_4a47c));	// 73721                  add     ax, word_4A47C ;~ 274D:1B31
cs=0x274d;eip=0x001b35; 	X(word_4a4ec = ax;);	// 73722                  mov     word_4A4EC, ax ;~ 274D:1B35
cs=0x274d;eip=0x001b38; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x2382))));	// 73723                  mov     ax, [di+2382h] ;~ 274D:1B38
cs=0x274d;eip=0x001b3c; 	T(ADC(ax, word_4a47e));	// 73724                  adc     ax, word_4A47E ;~ 274D:1B3C
cs=0x274d;eip=0x001b40; 	X(*(word_4a4ee) = ax;);	// 73725                  mov     word_4A4EE, ax ;~ 274D:1B40
cs=0x274d;eip=0x001b43; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x25D8))));	// 73726                  mov     ax, [di+25D8h] ;~ 274D:1B43
cs=0x274d;eip=0x001b47; 	T(ADD(ax, word_4a480));	// 73727                  add     ax, word_4A480 ;~ 274D:1B47
cs=0x274d;eip=0x001b4b; 	X(word_4a6d0 = ax;);	// 73728                  mov     word_4A6D0, ax ;~ 274D:1B4B
cs=0x274d;eip=0x001b4e; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x25DA))));	// 73729                  mov     ax, [di+25DAh] ;~ 274D:1B4E
cs=0x274d;eip=0x001b52; 	T(ADC(ax, word_4a482));	// 73730                  adc     ax, word_4A482 ;~ 274D:1B52
cs=0x274d;eip=0x001b56; 	X(*(word_4a6d2) = ax;);	// 73731                  mov     word_4A6D2, ax ;~ 274D:1B56
cs=0x274d;eip=0x001b59; 	T(bx = 8;);	// 73732                  mov     bx, 8 ;~ 274D:1B59
cs=0x274d;eip=0x001b5c; 	T(CMP(dx, 0x1388));	// 73733                  cmp     dx, 1388h ;~ 274D:1B5C
cs=0x274d;eip=0x001b60; 	J(JG(loc_3761c));	// 73734                  jg      short loc_3761C ;~ 274D:1B60
cs=0x274d;eip=0x001b62; 	T(DEC(bx));	// 73735                  dec     bx ;~ 274D:1B62
cs=0x274d;eip=0x001b63; 	T(CMP(dx, 0x9C4));	// 73736                  cmp     dx, 9C4h ;~ 274D:1B63
cs=0x274d;eip=0x001b67; 	J(JG(loc_3761c));	// 73737                  jg      short loc_3761C ;~ 274D:1B67
cs=0x274d;eip=0x001b69; 	T(bx = 0x0F;);	// 73738                  mov     bx, 0Fh ;~ 274D:1B69
loc_3761c:
	// 7030 
cs=0x274d;eip=0x001b6c; 	T(MOV(ah, *(raddr(ds,bx+0x18EC))));	// 73742                  mov     ah, [bx+18ECh] ;~ 274D:1B6C
cs=0x274d;eip=0x001b70; 	J(CALLF(sub_49a3e,0));	// 73743                  call    far ptr sub_49A3E ;~ 274D:1B70
cs=0x274d;eip=0x001b75; 	X(PUSH(si));	// 73745                  push    si ;~ 274D:1B75
cs=0x274d;eip=0x001b76; 	T(SUB(bx, bx));	// 73746                  sub     bx, bx ;~ 274D:1B76
cs=0x274d;eip=0x001b78; 	J(CALL(sub_35b28,0));	// 73747                  call    sub_35B28 ;~ 274D:1B78
cs=0x274d;eip=0x001b7b; 	T(ax = *(word_4aa98););	// 73748                  mov     ax, word_4AA98 ;~ 274D:1B7B
cs=0x274d;eip=0x001b7e; 	X(word_4d78d = ax;);	// 73749                  mov     word_4D78D, ax ;~ 274D:1B7E
cs=0x274d;eip=0x001b81; 	X(word_4d78f = ax;);	// 73750                  mov     word_4D78F, ax ;~ 274D:1B81
cs=0x274d;eip=0x001b84; 	T(ax = *(word_4ac7c););	// 73751                  mov     ax, word_4AC7C ;~ 274D:1B84
cs=0x274d;eip=0x001b87; 	X(word_4d791 = ax;);	// 73752                  mov     word_4D791, ax ;~ 274D:1B87
cs=0x274d;eip=0x001b8a; 	X(word_4d793 = ax;);	// 73753                  mov     word_4D793, ax ;~ 274D:1B8A
cs=0x274d;eip=0x001b8d; 	J(CALL(sub_37766,0));	// 73754                  call    sub_37766 ;~ 274D:1B8D
cs=0x274d;eip=0x001b90; 	X(POP(si));	// 73755                  pop     si ;~ 274D:1B90
cs=0x274d;eip=0x001b91; 	T(es = *(dw*)(((db*)&dword_4a46c)+2););	// 73756                  mov     es, word ptr dword_4A46C+2 ;~ 274D:1B91
loc_37645:
	// 7031 
cs=0x274d;eip=0x001b95; 	X(DEC(byte_4ce62));	// 73760                  dec     byte_4CE62 ;~ 274D:1B95
cs=0x274d;eip=0x001b99; 	J(JZ(loc_3764e));	// 73762                  jz      short loc_3764E ;~ 274D:1B99
cs=0x274d;eip=0x001b9b; 	J(JMP(loc_375b6));	// 73763                  jmp     loc_375B6 ;~ 274D:1B9B
loc_3764e:
	// 7032 
cs=0x274d;eip=0x001b9e; 	J(CALL(sub_35be7,0));	// 73767                  call    sub_35BE7 ;~ 274D:1B9E
cs=0x274d;eip=0x001ba1; 	J(RETN(0));	// 73768                  retn ;~ 274D:1BA1

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_37498: 	goto loc_37498;
        case m2c::kloc_3756c: 	goto loc_3756c;
        case m2c::kloc_3759d: 	goto loc_3759d;
        case m2c::kloc_375a1: 	goto loc_375a1;
        case m2c::kloc_375a4: 	goto loc_375a4;
        case m2c::kloc_375b6: 	goto loc_375b6;
        case m2c::kloc_3761c: 	goto loc_3761c;
        case m2c::kloc_37645: 	goto loc_37645;
        case m2c::kloc_3764e: 	goto loc_3764e;
        case m2c::klocret_37497: 	goto locret_37497;
        case m2c::kseg35ab_198a_proc: 	goto seg35ab_198a_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_37652(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_37652:
    _begin:
cs=0x274d;eip=0x001ba2; 	T(CMP(*(byte_4a4e4), 0));	// 73776                  cmp     byte_4A4E4, 0 ;~ 274D:1BA2
cs=0x274d;eip=0x001ba7; 	J(JNZ(loc_37660));	// 73777                  jnz     short loc_37660 ;~ 274D:1BA7
cs=0x274d;eip=0x001ba9; 	X(LODS(*(dw*)(raddr(es,si)),si,2));	// 73778                  lods    word ptr es:[si] ;~ 274D:1BA9
cs=0x274d;eip=0x001bab; 	T(AND(ax, word_4a4e6));	// 73779                  and     ax, word_4A4E6 ;~ 274D:1BAB
cs=0x274d;eip=0x001baf; 	J(RETN(0));	// 73780                  retn ;~ 274D:1BAF
loc_37660:
	// 7033 
cs=0x274d;eip=0x001bb0; 	X(LODS(*(dw*)(raddr(es,si)),si,2));	// 73784                  lods    word ptr es:[si] ;~ 274D:1BB0
cs=0x274d;eip=0x001bb2; 	T(MOV(dx, *(dw*)(raddr(es,si))));	// 73785                  mov     dx, es:[si] ;~ 274D:1BB2
cs=0x274d;eip=0x001bb5; 	T(ADD(si, 2));	// 73786                  add     si, 2 ;~ 274D:1BB5
cs=0x274d;eip=0x001bb8; 	T(AND(ax, word_4a4e6));	// 73787                  and     ax, word_4A4E6 ;~ 274D:1BB8
cs=0x274d;eip=0x001bbc; 	T(AND(dx, word_4a4e8));	// 73788                  and     dx, word_4A4E8 ;~ 274D:1BBC
cs=0x274d;eip=0x001bc0; 	T(OR(ax, dx));	// 73789                  or      ax, dx ;~ 274D:1BC0
cs=0x274d;eip=0x001bc2; 	J(RETN(0));	// 73790                  retn ;~ 274D:1BC2

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_37660: 	goto loc_37660;
        case m2c::ksub_37652: 	goto sub_37652;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group81(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group81:
    _begin:
sub_37674:
	// 73800 
cs=0x274d;eip=0x001bc4; 	X(PUSH(bp));	// 73802                  push    bp ;~ 274D:1BC4
cs=0x274d;eip=0x001bc5; 	T(bp = sp;);	// 73803                  mov     bp, sp ;~ 274D:1BC5
cs=0x274d;eip=0x001bc7; 	X(PUSH(di));	// 73804                  push    di ;~ 274D:1BC7
cs=0x274d;eip=0x001bc8; 	X(PUSH(si));	// 73805                  push    si ;~ 274D:1BC8
cs=0x274d;eip=0x001bc9; 	X(PUSH(bp));	// 73806                  push    bp ;~ 274D:1BC9
cs=0x274d;eip=0x001bca; 	X(PUSH(ds));	// 73807                  push    ds ;~ 274D:1BCA
cs=0x274d;eip=0x001bcb; 	X(POP(es));	// 73808                  pop     es ;~ 274D:1BCB
cs=0x274d;eip=0x001bcc; 	J(CALLF(sub_499ee,0));	// 73810                  call    far ptr sub_499EE ;~ 274D:1BCC
seg35ab_1bd1_proc:
	// 73814 
cs=0x274d;eip=0x001bd1; 	X(PUSH(ax));	// 73814                  push    ax ;~ 274D:1BD1
cs=0x274d;eip=0x001bd2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 73815                  mov     bx, [bp+6] ;~ 274D:1BD2
cs=0x274d;eip=0x001bd5; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 73816                  mov     ax, [bx] ;~ 274D:1BD5
cs=0x274d;eip=0x001bd7; 	J(CALLF(sub_499df,0));	// 73817                  call    far ptr sub_499DF ;~ 274D:1BD7
cs=0x274d;eip=0x001bdc; 	T(MOV(ah, *(raddr(ds,bx+4))));	// 73819                  mov     ah, [bx+4] ;~ 274D:1BDC
cs=0x274d;eip=0x001bdf; 	J(CALLF(sub_49a3e,0));	// 73820                  call    far ptr sub_49A3E ;~ 274D:1BDF
cs=0x274d;eip=0x001be4; 	J(CALL(sub_37950,0));	// 73822                  call    sub_37950 ;~ 274D:1BE4
cs=0x274d;eip=0x001be7; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0E))));	// 73823                  mov     cx, [bp+0Eh] ;~ 274D:1BE7
cs=0x274d;eip=0x001bea; 	T(MOV(si, *(dw*)(raddr(ss,bp+0x0A))));	// 73824                  mov     si, [bp+0Ah] ;~ 274D:1BEA
cs=0x274d;eip=0x001bed; 	X(word_4db0b = cx;);	// 73825                  mov     word_4DB0B, cx ;~ 274D:1BED
cs=0x274d;eip=0x001bf1; 	X(word_4db09 = si;);	// 73826                  mov     word_4DB09, si ;~ 274D:1BF1
cs=0x274d;eip=0x001bf5; 	T(SUB(cx, si));	// 73827                  sub     cx, si ;~ 274D:1BF5
cs=0x274d;eip=0x001bf7; 	T(INC(cx));	// 73828                  inc     cx ;~ 274D:1BF7
cs=0x274d;eip=0x001bf8; 	T(di = offset(seg48ae,byte_4d795));	// 73829                  lea     di, byte_4D795 ;~ 274D:1BF8
cs=0x274d;eip=0x001bfc; 	T(SHL(si, 1));	// 73830                  shl     si, 1 ;~ 274D:1BFC
cs=0x274d;eip=0x001bfe; 	T(ADD(di, si));	// 73831                  add     di, si ;~ 274D:1BFE
cs=0x274d;eip=0x001c00; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 73832                  mov     ax, [bp+8] ;~ 274D:1C00
cs=0x274d;eip=0x001c03; 	T(dx = cx;);	// 73833                  mov     dx, cx ;~ 274D:1C03
	// 73834                  rep stosw ;~ 274D:1C05
cs=0x274d;eip=0x001c05; 	X(	REP STOSW);	// 73834                  rep stosw ;~ 274D:1C05
cs=0x274d;eip=0x001c07; 	T(cx = dx;);	// 73835                  mov     cx, dx ;~ 274D:1C07
cs=0x274d;eip=0x001c09; 	T(di = offset(seg48ae,byte_4d94d));	// 73836                  lea     di, byte_4D94D ;~ 274D:1C09
cs=0x274d;eip=0x001c0d; 	T(ADD(di, si));	// 73837                  add     di, si ;~ 274D:1C0D
cs=0x274d;eip=0x001c0f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0C))));	// 73838                  mov     ax, [bp+0Ch] ;~ 274D:1C0F
	// 73839                  rep stosw ;~ 274D:1C12
cs=0x274d;eip=0x001c12; 	X(	REP STOSW);	// 73839                  rep stosw ;~ 274D:1C12
cs=0x274d;eip=0x001c14; 	T(bx = 0x4CB5;);	// 73840                  mov     bx, 4CB5h ;~ 274D:1C14
cs=0x274d;eip=0x001c17; 	T(ax = word_4db09;);	// 73841                  mov     ax, word_4DB09 ;~ 274D:1C17
cs=0x274d;eip=0x001c1a; 	T(cx = word_4db0b;);	// 73842                  mov     cx, word_4DB0B ;~ 274D:1C1A
cs=0x274d;eip=0x001c1e; 	J(CALLF(sub_49a66,0));	// 73843                  call    far ptr sub_49A66 ;~ 274D:1C1E
cs=0x274d;eip=0x001c23; 	J(CALLF(sub_49a48,0));	// 73845                  call    far ptr sub_49A48 ;~ 274D:1C23
cs=0x274d;eip=0x001c28; 	X(POP(ax));	// 73847                  pop     ax ;~ 274D:1C28
cs=0x274d;eip=0x001c29; 	J(CALLF(sub_499e9,0));	// 73848                  call    far ptr sub_499E9 ;~ 274D:1C29
cs=0x274d;eip=0x001c2e; 	X(POP(bp));	// 73850                  pop     bp ;~ 274D:1C2E
cs=0x274d;eip=0x001c2f; 	X(POP(si));	// 73851                  pop     si ;~ 274D:1C2F
cs=0x274d;eip=0x001c30; 	X(POP(di));	// 73852                  pop     di ;~ 274D:1C30
cs=0x274d;eip=0x001c31; 	T(sp = bp;);	// 73853                  mov     sp, bp ;~ 274D:1C31
cs=0x274d;eip=0x001c33; 	X(POP(bp));	// 73854                  pop     bp ;~ 274D:1C33
cs=0x274d;eip=0x001c34; 	J(RETF(0));	// 73855                  retf ;~ 274D:1C34

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg35ab_1bd1_proc: 	goto seg35ab_1bd1_proc;
        case m2c::ksub_37674: 	goto sub_37674;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_37756(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_37756:
    _begin:
cs=0x274d;eip=0x001ca6; 	J(CALL(sub_37766,0));	// 73975                  call    sub_37766 ;~ 274D:1CA6
cs=0x274d;eip=0x001ca9; 	J(RETF(0));	// 73976                  retf ;~ 274D:1CA9

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_37756: 	goto sub_37756;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3775a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3775a:
    _begin:
cs=0x274d;eip=0x001caa; 	X(PUSH(bp));	// 73985                  push    bp ;~ 274D:1CAA
cs=0x274d;eip=0x001cab; 	X(PUSH(si));	// 73986                  push    si ;~ 274D:1CAB
cs=0x274d;eip=0x001cac; 	X(PUSH(di));	// 73987                  push    di ;~ 274D:1CAC
cs=0x274d;eip=0x001cad; 	X(PUSH(es));	// 73988                  push    es ;~ 274D:1CAD
cs=0x274d;eip=0x001cae; 	J(CALL(sub_37766,0));	// 73989                  call    sub_37766 ;~ 274D:1CAE
cs=0x274d;eip=0x001cb1; 	X(POP(es));	// 73990                  pop     es ;~ 274D:1CB1
cs=0x274d;eip=0x001cb2; 	X(POP(di));	// 73992                  pop     di ;~ 274D:1CB2
cs=0x274d;eip=0x001cb3; 	X(POP(si));	// 73993                  pop     si ;~ 274D:1CB3
cs=0x274d;eip=0x001cb4; 	X(POP(bp));	// 73994                  pop     bp ;~ 274D:1CB4
cs=0x274d;eip=0x001cb5; 	J(RETF(0));	// 73995                  retf ;~ 274D:1CB5

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_3775a: 	goto sub_3775a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_37766(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_37766:
    _begin:
cs=0x274d;eip=0x001cb6; 	T(SUB(ax, ax));	// 74004                  sub     ax, ax ;~ 274D:1CB6
cs=0x274d;eip=0x001cb8; 	T(es = ax;);	// 74005                  mov     es, ax ;~ 274D:1CB8
cs=0x274d;eip=0x001cba; 	X(PUSH(*(dw*)(raddr(es,0))));	// 74007                  push    word ptr es:0 ;~ 274D:1CBA
cs=0x274d;eip=0x001cbf; 	X(PUSH(*(dw*)(raddr(es,2))));	// 74008                  push    word ptr es:2 ;~ 274D:1CBF
cs=0x274d;eip=0x001cc4; 	T(ax = offset(seg48ae,word_4a8b6)+0x8D);	// 74009                  lea     ax, word_4A8B6+8Dh ;~ 274D:1CC4
cs=0x274d;eip=0x001cc8; 	X(MOV(*(dw*)(raddr(es,0)), ax));	// 74010                  mov     es:0, ax ;~ 274D:1CC8
cs=0x274d;eip=0x001ccc; 	X(MOV(*(dw*)(raddr(es,2)), seg_offset(seg35ab)));	// 74011                  mov     word ptr es:2, seg seg35ab ;~ 274D:1CCC
cs=0x274d;eip=0x001cd3; 	X(PUSH(ds));	// 74012                  push    ds ;~ 274D:1CD3
cs=0x274d;eip=0x001cd4; 	X(POP(es));	// 74013                  pop     es ;~ 274D:1CD4
cs=0x274d;eip=0x001cd5; 	J(JMP(loc_377ee));	// 74015                  jmp     short loc_377EE ;~ 274D:1CD5
loc_37788:
	// 7034 
cs=0x274d;eip=0x001cd8; 	T(SUB(ax, ax));	// 74022                  sub     ax, ax ;~ 274D:1CD8
cs=0x274d;eip=0x001cda; 	T(es = ax;);	// 74023                  mov     es, ax ;~ 274D:1CDA
cs=0x274d;eip=0x001cdc; 	X(POP(*(dw*)(raddr(es,2))));	// 74025                  pop     word ptr es:2 ;~ 274D:1CDC
cs=0x274d;eip=0x001ce1; 	X(POP(*(dw*)(raddr(es,0))));	// 74026                  pop     word ptr es:0 ;~ 274D:1CE1
cs=0x274d;eip=0x001ce6; 	X(PUSH(ds));	// 74027                  push    ds ;~ 274D:1CE6
cs=0x274d;eip=0x001ce7; 	X(POP(es));	// 74028                  pop     es ;~ 274D:1CE7
cs=0x274d;eip=0x001ce8; 	T(ax = word_4d78d;);	// 74030                  mov     ax, word_4D78D ;~ 274D:1CE8
cs=0x274d;eip=0x001ceb; 	T(bx = word_4d791;);	// 74031                  mov     bx, word_4D791 ;~ 274D:1CEB
cs=0x274d;eip=0x001cef; 	T(cx = word_4d78f;);	// 74032                  mov     cx, word_4D78F ;~ 274D:1CEF
cs=0x274d;eip=0x001cf3; 	T(dx = word_4d793;);	// 74033                  mov     dx, word_4D793 ;~ 274D:1CF3
cs=0x274d;eip=0x001cf7; 	J(CALLF(sub_49a39,0));	// 74034                  call    far ptr sub_49A39 ;~ 274D:1CF7
cs=0x274d;eip=0x001cfc; 	T(CLC);	// 74036                  clc ;~ 274D:1CFC
cs=0x274d;eip=0x001cfd; 	J(RETN(0));	// 74037                  retn ;~ 274D:1CFD
loc_377ae:
	// 7035 
cs=0x274d;eip=0x001cfe; 	T(SUB(ax, ax));	// 74042                  sub     ax, ax ;~ 274D:1CFE
cs=0x274d;eip=0x001d00; 	T(es = ax;);	// 74043                  mov     es, ax ;~ 274D:1D00
cs=0x274d;eip=0x001d02; 	X(POP(*(dw*)(raddr(es,2))));	// 74045                  pop     word ptr es:2 ;~ 274D:1D02
cs=0x274d;eip=0x001d07; 	X(POP(*(dw*)(raddr(es,0))));	// 74046                  pop     word ptr es:0 ;~ 274D:1D07
cs=0x274d;eip=0x001d0c; 	X(PUSH(ds));	// 74047                  push    ds ;~ 274D:1D0C
cs=0x274d;eip=0x001d0d; 	X(POP(es));	// 74048                  pop     es ;~ 274D:1D0D
cs=0x274d;eip=0x001d0e; 	T(STC);	// 74050                  stc ;~ 274D:1D0E
cs=0x274d;eip=0x001d0f; 	J(RETN(0));	// 74051                  retn ;~ 274D:1D0F
loc_377c0:
	// 7036 
cs=0x274d;eip=0x001d10; 	T(CMC);	// 74055                  cmc ;~ 274D:1D10
cs=0x274d;eip=0x001d11; 	T(RCR(dx, 1));	// 74056                  rcr     dx, 1 ;~ 274D:1D11
cs=0x274d;eip=0x001d13; 	X(word_4d77f = dx;);	// 74057                  mov     word_4D77F, dx ;~ 274D:1D13
cs=0x274d;eip=0x001d17; 	T(SAR(dx, 1));	// 74058                  sar     dx, 1 ;~ 274D:1D17
cs=0x274d;eip=0x001d19; 	X(word_4d783 = dx;);	// 74059                  mov     word_4D783, dx ;~ 274D:1D19
cs=0x274d;eip=0x001d1d; 	T(dx = di;);	// 74060                  mov     dx, di ;~ 274D:1D1D
cs=0x274d;eip=0x001d1f; 	T(SUB(dx, bp));	// 74061                  sub     dx, bp ;~ 274D:1D1F
cs=0x274d;eip=0x001d21; 	J(JNO(loc_377d9));	// 74062                  jno     short loc_377D9 ;~ 274D:1D21
cs=0x274d;eip=0x001d23; 	T(CMC);	// 74063                  cmc ;~ 274D:1D23
cs=0x274d;eip=0x001d24; 	T(RCR(dx, 1));	// 74064                  rcr     dx, 1 ;~ 274D:1D24
cs=0x274d;eip=0x001d26; 	J(JMP(loc_37849));	// 74065                  jmp     short loc_37849 ;~ 274D:1D26
loc_377d9:
	// 7037 
cs=0x274d;eip=0x001d29; 	T(SAR(dx, 1));	// 74071                  sar     dx, 1 ;~ 274D:1D29
cs=0x274d;eip=0x001d2b; 	J(JMP(loc_37849));	// 74072                  jmp     short loc_37849 ;~ 274D:1D2B
loc_377de:
	// 7038 
cs=0x274d;eip=0x001d2e; 	T(CMC);	// 74078                  cmc ;~ 274D:1D2E
cs=0x274d;eip=0x001d2f; 	T(RCR(dx, 1));	// 74079                  rcr     dx, 1 ;~ 274D:1D2F
cs=0x274d;eip=0x001d31; 	X(SAR(word_4d77f, 1));	// 74080                  sar     word_4D77F, 1 ;~ 274D:1D31
cs=0x274d;eip=0x001d35; 	X(SAR(word_4d783, 1));	// 74081                  sar     word_4D783, 1 ;~ 274D:1D35
cs=0x274d;eip=0x001d39; 	J(JMP(loc_37849));	// 74082                  jmp     short loc_37849 ;~ 274D:1D39
loc_377ec:
	// 7039 
cs=0x274d;eip=0x001d3c; 	J(JMP(loc_377ae));	// 74088                  jmp     short loc_377AE ;~ 274D:1D3C
loc_377ee:
	// 7040 
cs=0x274d;eip=0x001d3e; 	T(cx = word_4d78d;);	// 74092                  mov     cx, word_4D78D ;~ 274D:1D3E
cs=0x274d;eip=0x001d42; 	T(dx = word_4d791;);	// 74093                  mov     dx, word_4D791 ;~ 274D:1D42
cs=0x274d;eip=0x001d46; 	T(si = word_4d78f;);	// 74094                  mov     si, word_4D78F ;~ 274D:1D46
cs=0x274d;eip=0x001d4a; 	T(di = word_4d793;);	// 74095                  mov     di, word_4D793 ;~ 274D:1D4A
cs=0x274d;eip=0x001d4e; 	T(bx = cx;);	// 74096                  mov     bx, cx ;~ 274D:1D4E
cs=0x274d;eip=0x001d50; 	T(bp = dx;);	// 74097                  mov     bp, dx ;~ 274D:1D50
cs=0x274d;eip=0x001d52; 	J(CALL(sub_378f2,0));	// 74098                  call    sub_378F2 ;~ 274D:1D52
cs=0x274d;eip=0x001d55; 	X(byte_4d77e = al;);	// 74099                  mov     byte_4D77E, al ;~ 274D:1D55
cs=0x274d;eip=0x001d58; 	T(bx = si;);	// 74100                  mov     bx, si ;~ 274D:1D58
cs=0x274d;eip=0x001d5a; 	T(bp = di;);	// 74101                  mov     bp, di ;~ 274D:1D5A
cs=0x274d;eip=0x001d5c; 	J(CALL(sub_378f2,0));	// 74102                  call    sub_378F2 ;~ 274D:1D5C
cs=0x274d;eip=0x001d5f; 	J(JNZ(loc_3782b));	// 74103                  jnz     short loc_3782B ;~ 274D:1D5F
cs=0x274d;eip=0x001d61; 	T(CMP(byte_4d77e, 0));	// 74104                  cmp     byte_4D77E, 0 ;~ 274D:1D61
cs=0x274d;eip=0x001d66; 	J(JNZ(loc_3781b));	// 74105                  jnz     short loc_3781B ;~ 274D:1D66
cs=0x274d;eip=0x001d68; 	J(JMP(loc_37788));	// 74106                  jmp     loc_37788 ;~ 274D:1D68
loc_3781b:
	// 7041 
cs=0x274d;eip=0x001d6b; 	T(XCHG(cx, si));	// 74110                  xchg    cx, si ;~ 274D:1D6B
cs=0x274d;eip=0x001d6d; 	T(XCHG(dx, di));	// 74111                  xchg    dx, di ;~ 274D:1D6D
cs=0x274d;eip=0x001d6f; 	X(XCHG(al, byte_4d77e));	// 74112                  xchg    al, byte_4D77E ;~ 274D:1D6F
cs=0x274d;eip=0x001d73; 	X(word_4d78d = cx;);	// 74113                  mov     word_4D78D, cx ;~ 274D:1D73
cs=0x274d;eip=0x001d77; 	X(word_4d791 = dx;);	// 74114                  mov     word_4D791, dx ;~ 274D:1D77
loc_3782b:
	// 7042 
cs=0x274d;eip=0x001d7b; 	T(TEST(byte_4d77e, al));	// 74117                  test    byte_4D77E, al ;~ 274D:1D7B
cs=0x274d;eip=0x001d7f; 	J(JNZ(loc_377ec));	// 74118                  jnz     short loc_377EC ;~ 274D:1D7F
cs=0x274d;eip=0x001d81; 	T(bp = dx;);	// 74119                  mov     bp, dx ;~ 274D:1D81
cs=0x274d;eip=0x001d83; 	T(dx = si;);	// 74120                  mov     dx, si ;~ 274D:1D83
cs=0x274d;eip=0x001d85; 	T(SUB(dx, cx));	// 74121                  sub     dx, cx ;~ 274D:1D85
cs=0x274d;eip=0x001d87; 	J(JO(loc_377c0));	// 74122                  jo      short loc_377C0 ;~ 274D:1D87
cs=0x274d;eip=0x001d89; 	X(word_4d77f = dx;);	// 74123                  mov     word_4D77F, dx ;~ 274D:1D89
cs=0x274d;eip=0x001d8d; 	T(SAR(dx, 1));	// 74124                  sar     dx, 1 ;~ 274D:1D8D
cs=0x274d;eip=0x001d8f; 	X(word_4d783 = dx;);	// 74125                  mov     word_4D783, dx ;~ 274D:1D8F
cs=0x274d;eip=0x001d93; 	T(dx = di;);	// 74126                  mov     dx, di ;~ 274D:1D93
cs=0x274d;eip=0x001d95; 	T(SUB(dx, bp));	// 74127                  sub     dx, bp ;~ 274D:1D95
cs=0x274d;eip=0x001d97; 	J(JO(loc_377de));	// 74128                  jo      short loc_377DE ;~ 274D:1D97
loc_37849:
	// 7043 
cs=0x274d;eip=0x001d99; 	X(word_4d781 = dx;);	// 74132                  mov     word_4D781, dx ;~ 274D:1D99
cs=0x274d;eip=0x001d9d; 	T(SAR(dx, 1));	// 74133                  sar     dx, 1 ;~ 274D:1D9D
cs=0x274d;eip=0x001d9f; 	X(word_4d785 = dx;);	// 74134                  mov     word_4D785, dx ;~ 274D:1D9F
loc_37853:
	// 7044 
cs=0x274d;eip=0x001da3; 	T(TEST(al, 9));	// 74137                  test    al, 9 ;~ 274D:1DA3
cs=0x274d;eip=0x001da5; 	J(JZ(loc_3788f));	// 74138                  jz      short loc_3788F ;~ 274D:1DA5
cs=0x274d;eip=0x001da7; 	T(SUB(bx, bx));	// 74139                  sub     bx, bx ;~ 274D:1DA7
cs=0x274d;eip=0x001da9; 	T(OR(si, si));	// 74140                  or      si, si ;~ 274D:1DA9
cs=0x274d;eip=0x001dab; 	J(JS(loc_37861));	// 74141                  js      short loc_37861 ;~ 274D:1DAB
cs=0x274d;eip=0x001dad; 	T(bx = word_4d787;);	// 74142                  mov     bx, word_4D787 ;~ 274D:1DAD
loc_37861:
	// 7045 
cs=0x274d;eip=0x001db1; 	T(ax = bx;);	// 74145                  mov     ax, bx ;~ 274D:1DB1
cs=0x274d;eip=0x001db3; 	T(SUB(ax, cx));	// 74146                  sub     ax, cx ;~ 274D:1DB3
cs=0x274d;eip=0x001db5; 	X(IMUL1_2(word_4d781));	// 74147                  imul    word_4D781 ;~ 274D:1DB5
cs=0x274d;eip=0x001db9; 	X(PUSH(bx));	// 74148                  push    bx ;~ 274D:1DB9
cs=0x274d;eip=0x001dba; 	T(bx = dx;);	// 74149                  mov     bx, dx ;~ 274D:1DBA
cs=0x274d;eip=0x001dbc; 	X(IDIV2(word_4d77f));	// 74150                  idiv    word_4D77F ;~ 274D:1DBC
cs=0x274d;eip=0x001dc0; 	T(bl = bh;);	// 74151                  mov     bl, bh ;~ 274D:1DC0
cs=0x274d;eip=0x001dc2; 	T(XOR(bl, *(db*)(((db*)&word_4d77f)+1)));	// 74152                  xor     bl, byte ptr word_4D77F+1 ;~ 274D:1DC2
cs=0x274d;eip=0x001dc6; 	J(JNS(loc_3787b));	// 74153                  jns     short loc_3787B ;~ 274D:1DC6
cs=0x274d;eip=0x001dc8; 	T(NEG(dx));	// 74154                  neg     dx ;~ 274D:1DC8
cs=0x274d;eip=0x001dca; 	T(DEC(ax));	// 74155                  dec     ax ;~ 274D:1DCA
loc_3787b:
	// 7046 
cs=0x274d;eip=0x001dcb; 	T(SUB(dx, word_4d783));	// 74158                  sub     dx, word_4D783 ;~ 274D:1DCB
cs=0x274d;eip=0x001dcf; 	T(XOR(dh, bh));	// 74159                  xor     dh, bh ;~ 274D:1DCF
cs=0x274d;eip=0x001dd1; 	J(JS(loc_37884));	// 74160                  js      short loc_37884 ;~ 274D:1DD1
cs=0x274d;eip=0x001dd3; 	T(INC(ax));	// 74161                  inc     ax ;~ 274D:1DD3
loc_37884:
	// 7047 
cs=0x274d;eip=0x001dd4; 	X(POP(bx));	// 74164                  pop     bx ;~ 274D:1DD4
cs=0x274d;eip=0x001dd5; 	T(ADD(ax, bp));	// 74165                  add     ax, bp ;~ 274D:1DD5
cs=0x274d;eip=0x001dd7; 	J(JS(loc_37897));	// 74166                  js      short loc_37897 ;~ 274D:1DD7
cs=0x274d;eip=0x001dd9; 	T(CMP(ax, word_4d789));	// 74167                  cmp     ax, word_4D789 ;~ 274D:1DD9
cs=0x274d;eip=0x001ddd; 	J(JLE(loc_378c8));	// 74168                  jle     short loc_378C8 ;~ 274D:1DDD
loc_3788f:
	// 7048 
cs=0x274d;eip=0x001ddf; 	T(bx = word_4d789;);	// 74171                  mov     bx, word_4D789 ;~ 274D:1DDF
cs=0x274d;eip=0x001de3; 	T(CMP(di, bx));	// 74172                  cmp     di, bx ;~ 274D:1DE3
cs=0x274d;eip=0x001de5; 	J(JG(loc_37899));	// 74173                  jg      short loc_37899 ;~ 274D:1DE5
loc_37897:
	// 7049 
cs=0x274d;eip=0x001de7; 	T(SUB(bx, bx));	// 74176                  sub     bx, bx ;~ 274D:1DE7
loc_37899:
	// 7050 
cs=0x274d;eip=0x001de9; 	T(ax = bx;);	// 74179                  mov     ax, bx ;~ 274D:1DE9
cs=0x274d;eip=0x001deb; 	T(SUB(ax, bp));	// 74180                  sub     ax, bp ;~ 274D:1DEB
cs=0x274d;eip=0x001ded; 	X(IMUL1_2(word_4d77f));	// 74181                  imul    word_4D77F ;~ 274D:1DED
cs=0x274d;eip=0x001df1; 	X(PUSH(bx));	// 74182                  push    bx ;~ 274D:1DF1
cs=0x274d;eip=0x001df2; 	T(bx = dx;);	// 74183                  mov     bx, dx ;~ 274D:1DF2
cs=0x274d;eip=0x001df4; 	X(IDIV2(word_4d781));	// 74184                  idiv    word_4D781 ;~ 274D:1DF4
cs=0x274d;eip=0x001df8; 	T(bl = bh;);	// 74185                  mov     bl, bh ;~ 274D:1DF8
cs=0x274d;eip=0x001dfa; 	T(XOR(bl, *(db*)(((db*)&word_4d781)+1)));	// 74186                  xor     bl, byte ptr word_4D781+1 ;~ 274D:1DFA
cs=0x274d;eip=0x001dfe; 	J(JNS(loc_378b3));	// 74187                  jns     short loc_378B3 ;~ 274D:1DFE
cs=0x274d;eip=0x001e00; 	T(NEG(dx));	// 74188                  neg     dx ;~ 274D:1E00
cs=0x274d;eip=0x001e02; 	T(DEC(ax));	// 74189                  dec     ax ;~ 274D:1E02
loc_378b3:
	// 7051 
cs=0x274d;eip=0x001e03; 	T(SUB(dx, word_4d785));	// 74192                  sub     dx, word_4D785 ;~ 274D:1E03
cs=0x274d;eip=0x001e07; 	T(XOR(dh, bh));	// 74193                  xor     dh, bh ;~ 274D:1E07
cs=0x274d;eip=0x001e09; 	J(JS(loc_378bc));	// 74194                  js      short loc_378BC ;~ 274D:1E09
cs=0x274d;eip=0x001e0b; 	T(INC(ax));	// 74195                  inc     ax ;~ 274D:1E0B
loc_378bc:
	// 7052 
cs=0x274d;eip=0x001e0c; 	X(POP(bx));	// 74198                  pop     bx ;~ 274D:1E0C
cs=0x274d;eip=0x001e0d; 	T(ADD(ax, cx));	// 74199                  add     ax, cx ;~ 274D:1E0D
cs=0x274d;eip=0x001e0f; 	J(JS(loc_378d9));	// 74200                  js      short loc_378D9 ;~ 274D:1E0F
cs=0x274d;eip=0x001e11; 	T(CMP(ax, word_4d787));	// 74201                  cmp     ax, word_4D787 ;~ 274D:1E11
cs=0x274d;eip=0x001e15; 	J(JG(loc_378d9));	// 74202                  jg      short loc_378D9 ;~ 274D:1E15
cs=0x274d;eip=0x001e17; 	T(XCHG(ax, bx));	// 74203                  xchg    ax, bx ;~ 274D:1E17
loc_378c8:
	// 7053 
cs=0x274d;eip=0x001e18; 	T(CMP(byte_4d77e, 0));	// 74206                  cmp     byte_4D77E, 0 ;~ 274D:1E18
cs=0x274d;eip=0x001e1d; 	J(JNZ(loc_378dc));	// 74207                  jnz     short loc_378DC ;~ 274D:1E1D
cs=0x274d;eip=0x001e1f; 	X(word_4d793 = ax;);	// 74208                  mov     word_4D793, ax ;~ 274D:1E1F
cs=0x274d;eip=0x001e22; 	X(word_4d78f = bx;);	// 74209                  mov     word_4D78F, bx ;~ 274D:1E22
cs=0x274d;eip=0x001e26; 	J(JMP(loc_37788));	// 74210                  jmp     loc_37788 ;~ 274D:1E26
loc_378d9:
	// 7054 
cs=0x274d;eip=0x001e29; 	J(JMP(loc_377ae));	// 74215                  jmp     loc_377AE ;~ 274D:1E29
loc_378dc:
	// 7055 
cs=0x274d;eip=0x001e2c; 	X(word_4d791 = ax;);	// 74219                  mov     word_4D791, ax ;~ 274D:1E2C
cs=0x274d;eip=0x001e2f; 	X(word_4d78d = bx;);	// 74220                  mov     word_4D78D, bx ;~ 274D:1E2F
cs=0x274d;eip=0x001e33; 	T(XCHG(cx, si));	// 74221                  xchg    cx, si ;~ 274D:1E33
cs=0x274d;eip=0x001e35; 	T(XCHG(bp, di));	// 74222                  xchg    bp, di ;~ 274D:1E35
cs=0x274d;eip=0x001e37; 	T(al = byte_4d77e;);	// 74223                  mov     al, byte_4D77E ;~ 274D:1E37
cs=0x274d;eip=0x001e3a; 	X(byte_4d77e = 0;);	// 74224                  mov     byte_4D77E, 0 ;~ 274D:1E3A
cs=0x274d;eip=0x001e3f; 	J(JMP(loc_37853));	// 74225                  jmp     loc_37853 ;~ 274D:1E3F

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_37788: 	goto loc_37788;
        case m2c::kloc_377ae: 	goto loc_377ae;
        case m2c::kloc_377c0: 	goto loc_377c0;
        case m2c::kloc_377d9: 	goto loc_377d9;
        case m2c::kloc_377de: 	goto loc_377de;
        case m2c::kloc_377ec: 	goto loc_377ec;
        case m2c::kloc_377ee: 	goto loc_377ee;
        case m2c::kloc_3781b: 	goto loc_3781b;
        case m2c::kloc_3782b: 	goto loc_3782b;
        case m2c::kloc_37849: 	goto loc_37849;
        case m2c::kloc_37853: 	goto loc_37853;
        case m2c::kloc_37861: 	goto loc_37861;
        case m2c::kloc_3787b: 	goto loc_3787b;
        case m2c::kloc_37884: 	goto loc_37884;
        case m2c::kloc_3788f: 	goto loc_3788f;
        case m2c::kloc_37897: 	goto loc_37897;
        case m2c::kloc_37899: 	goto loc_37899;
        case m2c::kloc_378b3: 	goto loc_378b3;
        case m2c::kloc_378bc: 	goto loc_378bc;
        case m2c::kloc_378c8: 	goto loc_378c8;
        case m2c::kloc_378d9: 	goto loc_378d9;
        case m2c::kloc_378dc: 	goto loc_378dc;
        case m2c::ksub_37766: 	goto sub_37766;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_378f2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_378f2:
    _begin:
cs=0x274d;eip=0x001e42; 	T(al = 0x0F;);	// 74234                  mov     al, 0Fh ;~ 274D:1E42
cs=0x274d;eip=0x001e44; 	T(OR(bx, bx));	// 74235                  or      bx, bx ;~ 274D:1E44
cs=0x274d;eip=0x001e46; 	J(JS(loc_378fa));	// 74236                  js      short loc_378FA ;~ 274D:1E46
cs=0x274d;eip=0x001e48; 	T(AND(al, 0x0F7));	// 74237                  and     al, 0F7h ;~ 274D:1E48
loc_378fa:
	// 7056 
cs=0x274d;eip=0x001e4a; 	T(CMP(bx, word_4d787));	// 74240                  cmp     bx, word_4D787 ;~ 274D:1E4A
cs=0x274d;eip=0x001e4e; 	J(JG(loc_37902));	// 74241                  jg      short loc_37902 ;~ 274D:1E4E
cs=0x274d;eip=0x001e50; 	T(AND(al, 0x0FE));	// 74242                  and     al, 0FEh ;~ 274D:1E50
loc_37902:
	// 7057 
cs=0x274d;eip=0x001e52; 	T(OR(bp, bp));	// 74245                  or      bp, bp ;~ 274D:1E52
cs=0x274d;eip=0x001e54; 	J(JS(loc_37908));	// 74246                  js      short loc_37908 ;~ 274D:1E54
cs=0x274d;eip=0x001e56; 	T(AND(al, 0x0FB));	// 74247                  and     al, 0FBh ;~ 274D:1E56
loc_37908:
	// 7058 
cs=0x274d;eip=0x001e58; 	T(CMP(bp, word_4d789));	// 74250                  cmp     bp, word_4D789 ;~ 274D:1E58
cs=0x274d;eip=0x001e5c; 	J(JG(loc_37910));	// 74251                  jg      short loc_37910 ;~ 274D:1E5C
cs=0x274d;eip=0x001e5e; 	T(AND(al, 0x0FD));	// 74252                  and     al, 0FDh ;~ 274D:1E5E
loc_37910:
	// 7059 
cs=0x274d;eip=0x001e60; 	T(OR(al, al));	// 74255                  or      al, al ;~ 274D:1E60
cs=0x274d;eip=0x001e62; 	J(RETN(0));	// 74256                  retn ;~ 274D:1E62

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_378fa: 	goto loc_378fa;
        case m2c::kloc_37902: 	goto loc_37902;
        case m2c::kloc_37908: 	goto loc_37908;
        case m2c::kloc_37910: 	goto loc_37910;
        case m2c::ksub_378f2: 	goto sub_378f2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg35ab_1e63_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg35ab_1e63_proc:
    _begin:
cs=0x274d;eip=0x001e63; 	X(PUSH(bp));	// 74260                  push    bp ;~ 274D:1E63
cs=0x274d;eip=0x001e64; 	T(bp = sp;);	// 74261                  mov     bp, sp ;~ 274D:1E64
cs=0x274d;eip=0x001e66; 	T(CMP(*(dw*)(raddr(ss,bp+2)), 0x1DF4));	// 74262                  cmp     word ptr [bp+2], 1DF4h ;~ 274D:1E66
cs=0x274d;eip=0x001e6b; 	T(ax = word_4d781;);	// 74263                  mov     ax, word_4D781 ;~ 274D:1E6B
cs=0x274d;eip=0x001e6e; 	J(JZ(loc_37923));	// 74264                  jz      short loc_37923 ;~ 274D:1E6E
cs=0x274d;eip=0x001e70; 	T(ax = word_4d77f;);	// 74265                  mov     ax, word_4D77F ;~ 274D:1E70
loc_37923:
	// 7060 
cs=0x274d;eip=0x001e73; 	T(XOR(dx, ax));	// 74268                  xor     dx, ax ;~ 274D:1E73
cs=0x274d;eip=0x001e75; 	T(ax = 0x7F00;);	// 74269                  mov     ax, 7F00h ;~ 274D:1E75
cs=0x274d;eip=0x001e78; 	J(JNS(loc_3792c));	// 74270                  jns     short loc_3792C ;~ 274D:1E78
cs=0x274d;eip=0x001e7a; 	T(NEG(ax));	// 74271                  neg     ax ;~ 274D:1E7A
loc_3792c:
	// 7061 
cs=0x274d;eip=0x001e7c; 	X(ADD(*(dw*)(raddr(ss,bp+2)), 4));	// 74274                  add     word ptr [bp+2], 4 ;~ 274D:1E7C
cs=0x274d;eip=0x001e80; 	T(SUB(dx, dx));	// 74275                  sub     dx, dx ;~ 274D:1E80
cs=0x274d;eip=0x001e82; 	X(POP(bp));	// 74276                  pop     bp ;~ 274D:1E82
cs=0x274d;eip=0x001e83; 	J(IRET);	// 74277                  iret ;~ 274D:1E83

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_37923: 	goto loc_37923;
        case m2c::kloc_3792c: 	goto loc_3792c;
        case m2c::kseg35ab_1e63_proc: 	goto seg35ab_1e63_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group82(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group82:
    _begin:
sub_37934:
	// 74283 
cs=0x274d;eip=0x001e84; 	X(PUSH(di));	// 74284                  push    di ;~ 274D:1E84
cs=0x274d;eip=0x001e85; 	X(PUSH(si));	// 74285                  push    si ;~ 274D:1E85
cs=0x274d;eip=0x001e86; 	X(PUSH(bp));	// 74286                  push    bp ;~ 274D:1E86
cs=0x274d;eip=0x001e87; 	T(ax = word_4db09;);	// 74287                  mov     ax, word_4DB09 ;~ 274D:1E87
cs=0x274d;eip=0x001e8a; 	T(cx = word_4db0b;);	// 74288                  mov     cx, word_4DB0B ;~ 274D:1E8A
cs=0x274d;eip=0x001e8e; 	T(bx = 0x4CB5;);	// 74289                  mov     bx, 4CB5h ;~ 274D:1E8E
cs=0x274d;eip=0x001e91; 	J(CALLF(sub_49a57,0));	// 74290                  call    far ptr sub_49A57 ;~ 274D:1E91
seg35ab_1e96_proc:
	// 74294 
cs=0x274d;eip=0x001e96; 	X(POP(bp));	// 74294                  pop     bp ;~ 274D:1E96
cs=0x274d;eip=0x001e97; 	X(POP(si));	// 74295                  pop     si ;~ 274D:1E97
cs=0x274d;eip=0x001e98; 	X(POP(di));	// 74296                  pop     di ;~ 274D:1E98
cs=0x274d;eip=0x001e99; 	J(RETF(0));	// 74297                  retf ;~ 274D:1E99

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg35ab_1e96_proc: 	goto seg35ab_1e96_proc;
        case m2c::ksub_37934: 	goto sub_37934;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3794a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3794a:
    _begin:
cs=0x274d;eip=0x001e9a; 	X(PUSH(di));	// 74303                  push    di ;~ 274D:1E9A
cs=0x274d;eip=0x001e9b; 	J(CALL(sub_37950,0));	// 74304                  call    sub_37950 ;~ 274D:1E9B
cs=0x274d;eip=0x001e9e; 	X(POP(di));	// 74305                  pop     di ;~ 274D:1E9E
cs=0x274d;eip=0x001e9f; 	J(RETF(0));	// 74306                  retf ;~ 274D:1E9F

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_3794a: 	goto sub_3794a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_37950(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_37950:
    _begin:
cs=0x274d;eip=0x001ea0; 	T(di = word_4db09;);	// 74315                  mov     di, word_4DB09 ;~ 274D:1EA0
cs=0x274d;eip=0x001ea4; 	T(OR(di, di));	// 74316                  or      di, di ;~ 274D:1EA4
cs=0x274d;eip=0x001ea6; 	J(JS(locret_37985));	// 74317                  js      short locret_37985 ;~ 274D:1EA6
cs=0x274d;eip=0x001ea8; 	T(ax = seg_offset(seg48ae););	// 74318                  mov     ax, seg seg48ae ;~ 274D:1EA8
cs=0x274d;eip=0x001eab; 	T(es = ax;);	// 74319                  mov     es, ax ;~ 274D:1EAB
cs=0x274d;eip=0x001ead; 	T(cx = word_4db0b;);	// 74320                  mov     cx, word_4DB0B ;~ 274D:1EAD
cs=0x274d;eip=0x001eb1; 	T(INC(cx));	// 74321                  inc     cx ;~ 274D:1EB1
cs=0x274d;eip=0x001eb2; 	T(SUB(cx, di));	// 74322                  sub     cx, di ;~ 274D:1EB2
cs=0x274d;eip=0x001eb4; 	T(SHL(di, 1));	// 74323                  shl     di, 1 ;~ 274D:1EB4
cs=0x274d;eip=0x001eb6; 	T(bx = cx;);	// 74324                  mov     bx, cx ;~ 274D:1EB6
cs=0x274d;eip=0x001eb8; 	T(dx = di;);	// 74325                  mov     dx, di ;~ 274D:1EB8
cs=0x274d;eip=0x001eba; 	T(ADD(di, 0x4CB5));	// 74326                  add     di, 4CB5h ;~ 274D:1EBA
cs=0x274d;eip=0x001ebe; 	T(ax = 0x0FFFF;);	// 74327                  mov     ax, 0FFFFh ;~ 274D:1EBE
	// 74328                  rep stosw ;~ 274D:1EC1
cs=0x274d;eip=0x001ec1; 	X(	REP STOSW);	// 74328                  rep stosw ;~ 274D:1EC1
cs=0x274d;eip=0x001ec3; 	X(word_4db09 = ax;);	// 74329                  mov     word_4DB09, ax ;~ 274D:1EC3
cs=0x274d;eip=0x001ec6; 	T(cx = bx;);	// 74330                  mov     cx, bx ;~ 274D:1EC6
cs=0x274d;eip=0x001ec8; 	T(di = dx;);	// 74331                  mov     di, dx ;~ 274D:1EC8
cs=0x274d;eip=0x001eca; 	T(ADD(di, 0x4E6D));	// 74332                  add     di, 4E6Dh ;~ 274D:1ECA
cs=0x274d;eip=0x001ece; 	T(SUB(ax, ax));	// 74333                  sub     ax, ax ;~ 274D:1ECE
	// 74334                  rep stosw ;~ 274D:1ED0
cs=0x274d;eip=0x001ed0; 	X(	REP STOSW);	// 74334                  rep stosw ;~ 274D:1ED0
cs=0x274d;eip=0x001ed2; 	X(word_4db0b = ax;);	// 74335                  mov     word_4DB0B, ax ;~ 274D:1ED2
locret_37985:
	// 7062 
cs=0x274d;eip=0x001ed5; 	J(RETN(0));	// 74338                  retn ;~ 274D:1ED5

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::klocret_37985: 	goto locret_37985;
        case m2c::ksub_37950: 	goto sub_37950;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group83(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group83:
    _begin:
sub_37986:
	// 74345 
cs=0x274d;eip=0x001ed6; 	T(ax = seg_offset(seg48ae););	// 74347                  mov     ax, seg seg48ae ;~ 274D:1ED6
cs=0x274d;eip=0x001ed9; 	T(es = ax;);	// 74348                  mov     es, ax ;~ 274D:1ED9
cs=0x274d;eip=0x001edb; 	T(cx = di;);	// 74349                  mov     cx, di ;~ 274D:1EDB
cs=0x274d;eip=0x001edd; 	T(OR(si, si));	// 74350                  or      si, si ;~ 274D:1EDD
cs=0x274d;eip=0x001edf; 	T(di = offset(seg48ae,byte_4d795));	// 74351                  lea     di, byte_4D795 ;~ 274D:1EDF
cs=0x274d;eip=0x001ee3; 	J(JZ(loc_3799f));	// 74352                  jz      short loc_3799F ;~ 274D:1EE3
cs=0x274d;eip=0x001ee5; 	T(CMP(si, word_4d787));	// 74353                  cmp     si, word_4D787 ;~ 274D:1EE5
cs=0x274d;eip=0x001ee9; 	J(JNZ(locret_379d4));	// 74354                  jnz     short locret_379D4 ;~ 274D:1EE9
cs=0x274d;eip=0x001eeb; 	T(di = offset(seg48ae,byte_4d94d));	// 74355                  lea     di, byte_4D94D ;~ 274D:1EEB
loc_3799f:
	// 7063 
cs=0x274d;eip=0x001eef; 	T(CMP(cx, dx));	// 74358                  cmp     cx, dx ;~ 274D:1EEF
cs=0x274d;eip=0x001ef1; 	J(JGE(loc_379a5));	// 74359                  jge     short loc_379A5 ;~ 274D:1EF1
cs=0x274d;eip=0x001ef3; 	T(XCHG(cx, dx));	// 74360                  xchg    cx, dx ;~ 274D:1EF3
loc_379a5:
	// 7064 
cs=0x274d;eip=0x001ef5; 	T(OR(dx, dx));	// 74363                  or      dx, dx ;~ 274D:1EF5
cs=0x274d;eip=0x001ef7; 	J(JNS(loc_379ab));	// 74364                  jns     short loc_379AB ;~ 274D:1EF7
cs=0x274d;eip=0x001ef9; 	T(SUB(dx, dx));	// 74365                  sub     dx, dx ;~ 274D:1EF9
loc_379ab:
	// 7065 
cs=0x274d;eip=0x001efb; 	T(CMP(cx, word_4d789));	// 74368                  cmp     cx, word_4D789 ;~ 274D:1EFB
cs=0x274d;eip=0x001eff; 	J(JLE(loc_379b5));	// 74369                  jle     short loc_379B5 ;~ 274D:1EFF
cs=0x274d;eip=0x001f01; 	T(cx = word_4d789;);	// 74370                  mov     cx, word_4D789 ;~ 274D:1F01
loc_379b5:
	// 7066 
cs=0x274d;eip=0x001f05; 	T(CMP(cx, word_4db0b));	// 74373                  cmp     cx, word_4DB0B ;~ 274D:1F05
cs=0x274d;eip=0x001f09; 	J(JBE(loc_379bf));	// 74374                  jbe     short loc_379BF ;~ 274D:1F09
cs=0x274d;eip=0x001f0b; 	X(word_4db0b = cx;);	// 74375                  mov     word_4DB0B, cx ;~ 274D:1F0B
loc_379bf:
	// 7067 
cs=0x274d;eip=0x001f0f; 	T(CMP(dx, word_4db09));	// 74378                  cmp     dx, word_4DB09 ;~ 274D:1F0F
cs=0x274d;eip=0x001f13; 	J(JNC(loc_379c9));	// 74379                  jnb     short loc_379C9 ;~ 274D:1F13
cs=0x274d;eip=0x001f15; 	X(word_4db09 = dx;);	// 74380                  mov     word_4DB09, dx ;~ 274D:1F15
loc_379c9:
	// 7068 
cs=0x274d;eip=0x001f19; 	T(ADD(di, dx));	// 74383                  add     di, dx ;~ 274D:1F19
cs=0x274d;eip=0x001f1b; 	T(ADD(di, dx));	// 74384                  add     di, dx ;~ 274D:1F1B
cs=0x274d;eip=0x001f1d; 	T(SUB(cx, dx));	// 74385                  sub     cx, dx ;~ 274D:1F1D
cs=0x274d;eip=0x001f1f; 	T(INC(cx));	// 74386                  inc     cx ;~ 274D:1F1F
cs=0x274d;eip=0x001f20; 	T(ax = si;);	// 74387                  mov     ax, si ;~ 274D:1F20
	// 74388                  rep stosw ;~ 274D:1F22
cs=0x274d;eip=0x001f22; 	X(	REP STOSW);	// 74388                  rep stosw ;~ 274D:1F22
locret_379d4:
	// 7069 
cs=0x274d;eip=0x001f24; 	J(RETN(0));	// 74391                  retn ;~ 274D:1F24
seg35ab_1f25_proc:
	// 74397 
loc_379d5:
	// 7070 
cs=0x274d;eip=0x001f25; 	T(SUB(si, si));	// 74398                  sub     si, si ;~ 274D:1F25
cs=0x274d;eip=0x001f27; 	T(OR(bx, bx));	// 74399                  or      bx, bx ;~ 274D:1F27
cs=0x274d;eip=0x001f29; 	J(JS(sub_37986));	// 74400                  js      short sub_37986 ;~ 274D:1F29
cs=0x274d;eip=0x001f2b; 	T(si = word_4d787;);	// 74401                  mov     si, word_4D787 ;~ 274D:1F2B
cs=0x274d;eip=0x001f2f; 	T(CMP(bx, si));	// 74402                  cmp     bx, si ;~ 274D:1F2F
cs=0x274d;eip=0x001f31; 	J(JG(sub_37986));	// 74403                  jg      short sub_37986 ;~ 274D:1F31
cs=0x274d;eip=0x001f33; 	J(RETN(0));	// 74404                  retn ;~ 274D:1F33

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_3799f: 	goto loc_3799f;
        case m2c::kloc_379a5: 	goto loc_379a5;
        case m2c::kloc_379ab: 	goto loc_379ab;
        case m2c::kloc_379b5: 	goto loc_379b5;
        case m2c::kloc_379bf: 	goto loc_379bf;
        case m2c::kloc_379c9: 	goto loc_379c9;
        case m2c::klocret_379d4: 	goto locret_379d4;
        case m2c::kseg35ab_1f25_proc: 	goto seg35ab_1f25_proc;
        case m2c::ksub_37986: 	goto sub_37986;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_379e4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_379e4:
    _begin:
cs=0x274d;eip=0x001f34; 	T(ax = word_4d78f;);	// 74412                  mov     ax, word_4D78F ;~ 274D:1F34
cs=0x274d;eip=0x001f37; 	T(CMP(ax, word_4d78d));	// 74413                  cmp     ax, word_4D78D ;~ 274D:1F37
cs=0x274d;eip=0x001f3b; 	J(JNC(loc_37a06));	// 74414                  jnb     short loc_37A06 ;~ 274D:1F3B
cs=0x274d;eip=0x001f3d; 	T(bx = word_4d78d;);	// 74415                  mov     bx, word_4D78D ;~ 274D:1F3D
cs=0x274d;eip=0x001f41; 	X(word_4d78f = bx;);	// 74416                  mov     word_4D78F, bx ;~ 274D:1F41
cs=0x274d;eip=0x001f45; 	X(word_4d78d = ax;);	// 74417                  mov     word_4D78D, ax ;~ 274D:1F45
cs=0x274d;eip=0x001f48; 	T(ax = word_4d793;);	// 74418                  mov     ax, word_4D793 ;~ 274D:1F48
cs=0x274d;eip=0x001f4b; 	T(bx = word_4d791;);	// 74419                  mov     bx, word_4D791 ;~ 274D:1F4B
cs=0x274d;eip=0x001f4f; 	X(word_4d793 = bx;);	// 74420                  mov     word_4D793, bx ;~ 274D:1F4F
cs=0x274d;eip=0x001f53; 	X(word_4d791 = ax;);	// 74421                  mov     word_4D791, ax ;~ 274D:1F53
loc_37a06:
	// 7071 
cs=0x274d;eip=0x001f56; 	T(bx = word_4d78f;);	// 74424                  mov     bx, word_4D78F ;~ 274D:1F56
cs=0x274d;eip=0x001f5a; 	T(SUB(bx, word_4d78d));	// 74425                  sub     bx, word_4D78D ;~ 274D:1F5A
cs=0x274d;eip=0x001f5e; 	X(word_4db05 = bx;);	// 74426                  mov     word_4DB05, bx ;~ 274D:1F5E
cs=0x274d;eip=0x001f62; 	T(ax = word_4d793;);	// 74427                  mov     ax, word_4D793 ;~ 274D:1F62
cs=0x274d;eip=0x001f65; 	T(dx = ax;);	// 74428                  mov     dx, ax ;~ 274D:1F65
cs=0x274d;eip=0x001f67; 	T(cx = word_4d791;);	// 74429                  mov     cx, word_4D791 ;~ 274D:1F67
cs=0x274d;eip=0x001f6b; 	T(SUB(ax, cx));	// 74430                  sub     ax, cx ;~ 274D:1F6B
cs=0x274d;eip=0x001f6d; 	T(bp = 2;);	// 74431                  mov     bp, 2 ;~ 274D:1F6D
cs=0x274d;eip=0x001f70; 	J(JNS(loc_37a28));	// 74432                  jns     short loc_37A28 ;~ 274D:1F70
cs=0x274d;eip=0x001f72; 	T(XCHG(cx, dx));	// 74433                  xchg    cx, dx ;~ 274D:1F72
cs=0x274d;eip=0x001f74; 	T(NEG(bp));	// 74434                  neg     bp ;~ 274D:1F74
cs=0x274d;eip=0x001f76; 	T(NEG(ax));	// 74435                  neg     ax ;~ 274D:1F76
loc_37a28:
	// 7072 
cs=0x274d;eip=0x001f78; 	X(word_4db07 = ax;);	// 74438                  mov     word_4DB07, ax ;~ 274D:1F78
cs=0x274d;eip=0x001f7b; 	T(CMP(dx, word_4db0b));	// 74439                  cmp     dx, word_4DB0B ;~ 274D:1F7B
cs=0x274d;eip=0x001f7f; 	J(JBE(loc_37a35));	// 74440                  jbe     short loc_37A35 ;~ 274D:1F7F
cs=0x274d;eip=0x001f81; 	X(word_4db0b = dx;);	// 74441                  mov     word_4DB0B, dx ;~ 274D:1F81
loc_37a35:
	// 7073 
cs=0x274d;eip=0x001f85; 	T(CMP(cx, word_4db09));	// 74444                  cmp     cx, word_4DB09 ;~ 274D:1F85
cs=0x274d;eip=0x001f89; 	J(JNC(loc_37a3f));	// 74445                  jnb     short loc_37A3F ;~ 274D:1F89
cs=0x274d;eip=0x001f8b; 	X(word_4db09 = cx;);	// 74446                  mov     word_4DB09, cx ;~ 274D:1F8B
loc_37a3f:
	// 7074 
cs=0x274d;eip=0x001f8f; 	T(CMP(ax, bx));	// 74449                  cmp     ax, bx ;~ 274D:1F8F
cs=0x274d;eip=0x001f91; 	J(JNC(loc_37a8e));	// 74450                  jnb     short loc_37A8E ;~ 274D:1F91
cs=0x274d;eip=0x001f93; 	T(di = word_4d791;);	// 74451                  mov     di, word_4D791 ;~ 274D:1F93
cs=0x274d;eip=0x001f97; 	T(SHL(di, 1));	// 74452                  shl     di, 1 ;~ 274D:1F97
cs=0x274d;eip=0x001f99; 	T(ax = word_4d78d;);	// 74453                  mov     ax, word_4D78D ;~ 274D:1F99
cs=0x274d;eip=0x001f9c; 	T(dx = word_4db05;);	// 74454                  mov     dx, word_4DB05 ;~ 274D:1F9C
cs=0x274d;eip=0x001fa0; 	T(cx = dx;);	// 74455                  mov     cx, dx ;~ 274D:1FA0
cs=0x274d;eip=0x001fa2; 	T(bx = cx;);	// 74456                  mov     bx, cx ;~ 274D:1FA2
cs=0x274d;eip=0x001fa4; 	T(INC(bx));	// 74457                  inc     bx ;~ 274D:1FA4
cs=0x274d;eip=0x001fa5; 	T(SHR(bx, 1));	// 74458                  shr     bx, 1 ;~ 274D:1FA5
cs=0x274d;eip=0x001fa7; 	T(NEG(bx));	// 74459                  neg     bx ;~ 274D:1FA7
cs=0x274d;eip=0x001fa9; 	T(si = word_4db07;);	// 74460                  mov     si, word_4DB07 ;~ 274D:1FA9
cs=0x274d;eip=0x001fad; 	J(JMP(loc_37a6f));	// 74461                  jmp     short loc_37A6F ;~ 274D:1FAD
loc_37a60:
	// 7075 
cs=0x274d;eip=0x001fb0; 	T(CMP(ax, *(dw*)(raddr(ds,di+0x4E6D))));	// 74467                  cmp     ax, [di+4E6Dh] ;~ 274D:1FB0
cs=0x274d;eip=0x001fb4; 	J(JBE(loc_37a6a));	// 74468                  jbe     short loc_37A6A ;~ 274D:1FB4
cs=0x274d;eip=0x001fb6; 	X(MOV(*(dw*)(raddr(ds,di+0x4E6D)), ax));	// 74469                  mov     [di+4E6Dh], ax ;~ 274D:1FB6
loc_37a6a:
	// 7076 
cs=0x274d;eip=0x001fba; 	T(INC(ax));	// 74472                  inc     ax ;~ 274D:1FBA
cs=0x274d;eip=0x001fbb; 	T(SUB(bx, dx));	// 74473                  sub     bx, dx ;~ 274D:1FBB
cs=0x274d;eip=0x001fbd; 	T(ADD(di, bp));	// 74474                  add     di, bp ;~ 274D:1FBD
loc_37a6f:
	// 7077 
cs=0x274d;eip=0x001fbf; 	T(CMP(ax, *(dw*)(raddr(ds,di+0x4CB5))));	// 74477                  cmp     ax, [di+4CB5h] ;~ 274D:1FBF
cs=0x274d;eip=0x001fc3; 	J(JNC(loc_37a79));	// 74478                  jnb     short loc_37A79 ;~ 274D:1FC3
cs=0x274d;eip=0x001fc5; 	X(MOV(*(dw*)(raddr(ds,di+0x4CB5)), ax));	// 74479                  mov     [di+4CB5h], ax ;~ 274D:1FC5
loc_37a79:
	// 7078 
cs=0x274d;eip=0x001fc9; 	T(DEC(cx));	// 74483                  dec     cx ;~ 274D:1FC9
cs=0x274d;eip=0x001fca; 	J(JS(loc_37a83));	// 74484                  js      short loc_37A83 ;~ 274D:1FCA
cs=0x274d;eip=0x001fcc; 	T(ADD(bx, si));	// 74485                  add     bx, si ;~ 274D:1FCC
cs=0x274d;eip=0x001fce; 	J(JNS(loc_37a60));	// 74486                  jns     short loc_37A60 ;~ 274D:1FCE
cs=0x274d;eip=0x001fd0; 	T(INC(ax));	// 74487                  inc     ax ;~ 274D:1FD0
cs=0x274d;eip=0x001fd1; 	J(JMP(loc_37a79));	// 74488                  jmp     short loc_37A79 ;~ 274D:1FD1
loc_37a83:
	// 7079 
cs=0x274d;eip=0x001fd3; 	T(CMP(ax, *(dw*)(raddr(ds,di+0x4E6D))));	// 74492                  cmp     ax, [di+4E6Dh] ;~ 274D:1FD3
cs=0x274d;eip=0x001fd7; 	J(JBE(locret_37a8d));	// 74493                  jbe     short locret_37A8D ;~ 274D:1FD7
cs=0x274d;eip=0x001fd9; 	X(MOV(*(dw*)(raddr(ds,di+0x4E6D)), ax));	// 74494                  mov     [di+4E6Dh], ax ;~ 274D:1FD9
locret_37a8d:
	// 7080 
cs=0x274d;eip=0x001fdd; 	J(RETN(0));	// 74497                  retn ;~ 274D:1FDD
loc_37a8e:
	// 7081 
cs=0x274d;eip=0x001fde; 	T(di = word_4d791;);	// 74501                  mov     di, word_4D791 ;~ 274D:1FDE
cs=0x274d;eip=0x001fe2; 	T(SHL(di, 1));	// 74502                  shl     di, 1 ;~ 274D:1FE2
cs=0x274d;eip=0x001fe4; 	T(ax = word_4d78d;);	// 74503                  mov     ax, word_4D78D ;~ 274D:1FE4
cs=0x274d;eip=0x001fe7; 	T(dx = word_4db07;);	// 74504                  mov     dx, word_4DB07 ;~ 274D:1FE7
cs=0x274d;eip=0x001feb; 	T(cx = dx;);	// 74505                  mov     cx, dx ;~ 274D:1FEB
cs=0x274d;eip=0x001fed; 	T(bx = cx;);	// 74506                  mov     bx, cx ;~ 274D:1FED
cs=0x274d;eip=0x001fef; 	T(INC(bx));	// 74507                  inc     bx ;~ 274D:1FEF
cs=0x274d;eip=0x001ff0; 	T(SHR(bx, 1));	// 74508                  shr     bx, 1 ;~ 274D:1FF0
cs=0x274d;eip=0x001ff2; 	T(NEG(bx));	// 74509                  neg     bx ;~ 274D:1FF2
cs=0x274d;eip=0x001ff4; 	T(si = word_4db05;);	// 74510                  mov     si, word_4DB05 ;~ 274D:1FF4
loc_37aa8:
	// 7082 
cs=0x274d;eip=0x001ff8; 	T(CMP(ax, *(dw*)(raddr(ds,di+0x4CB5))));	// 74514                  cmp     ax, [di+4CB5h] ;~ 274D:1FF8
cs=0x274d;eip=0x001ffc; 	J(JNC(loc_37ab2));	// 74515                  jnb     short loc_37AB2 ;~ 274D:1FFC
cs=0x274d;eip=0x001ffe; 	X(MOV(*(dw*)(raddr(ds,di+0x4CB5)), ax));	// 74516                  mov     [di+4CB5h], ax ;~ 274D:1FFE
loc_37ab2:
	// 7083 
cs=0x274d;eip=0x002002; 	T(CMP(ax, *(dw*)(raddr(ds,di+0x4E6D))));	// 74519                  cmp     ax, [di+4E6Dh] ;~ 274D:2002
cs=0x274d;eip=0x002006; 	J(JBE(loc_37abc));	// 74520                  jbe     short loc_37ABC ;~ 274D:2006
cs=0x274d;eip=0x002008; 	X(MOV(*(dw*)(raddr(ds,di+0x4E6D)), ax));	// 74521                  mov     [di+4E6Dh], ax ;~ 274D:2008
loc_37abc:
	// 7084 
cs=0x274d;eip=0x00200c; 	T(DEC(cx));	// 74524                  dec     cx ;~ 274D:200C
cs=0x274d;eip=0x00200d; 	J(JS(locret_37aca));	// 74525                  js      short locret_37ACA ;~ 274D:200D
cs=0x274d;eip=0x00200f; 	T(ADD(di, bp));	// 74526                  add     di, bp ;~ 274D:200F
cs=0x274d;eip=0x002011; 	T(ADD(bx, si));	// 74527                  add     bx, si ;~ 274D:2011
cs=0x274d;eip=0x002013; 	J(JS(loc_37aa8));	// 74528                  js      short loc_37AA8 ;~ 274D:2013
cs=0x274d;eip=0x002015; 	T(SUB(bx, dx));	// 74529                  sub     bx, dx ;~ 274D:2015
cs=0x274d;eip=0x002017; 	T(INC(ax));	// 74530                  inc     ax ;~ 274D:2017
cs=0x274d;eip=0x002018; 	J(JMP(loc_37aa8));	// 74531                  jmp     short loc_37AA8 ;~ 274D:2018
locret_37aca:
	// 7085 
cs=0x274d;eip=0x00201a; 	J(RETN(0));	// 74535                  retn ;~ 274D:201A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_37a06: 	goto loc_37a06;
        case m2c::kloc_37a28: 	goto loc_37a28;
        case m2c::kloc_37a35: 	goto loc_37a35;
        case m2c::kloc_37a3f: 	goto loc_37a3f;
        case m2c::kloc_37a60: 	goto loc_37a60;
        case m2c::kloc_37a6a: 	goto loc_37a6a;
        case m2c::kloc_37a6f: 	goto loc_37a6f;
        case m2c::kloc_37a79: 	goto loc_37a79;
        case m2c::kloc_37a83: 	goto loc_37a83;
        case m2c::kloc_37a8e: 	goto loc_37a8e;
        case m2c::kloc_37aa8: 	goto loc_37aa8;
        case m2c::kloc_37ab2: 	goto loc_37ab2;
        case m2c::kloc_37abc: 	goto loc_37abc;
        case m2c::klocret_37a8d: 	goto locret_37a8d;
        case m2c::klocret_37aca: 	goto locret_37aca;
        case m2c::ksub_379e4: 	goto sub_379e4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_37acc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_37acc:
    _begin:
cs=0x274d;eip=0x00201c; 	X(PUSH(es));	// 74545                  push    es ;~ 274D:201C
cs=0x274d;eip=0x00201d; 	X(PUSH(si));	// 74546                  push    si ;~ 274D:201D
cs=0x274d;eip=0x00201e; 	X(PUSH(di));	// 74547                  push    di ;~ 274D:201E
cs=0x274d;eip=0x00201f; 	X(PUSH(bp));	// 74548                  push    bp ;~ 274D:201F
cs=0x274d;eip=0x002020; 	J(CALL(sub_37ad8,0));	// 74549                  call    sub_37AD8 ;~ 274D:2020
cs=0x274d;eip=0x002023; 	X(POP(bp));	// 74550                  pop     bp ;~ 274D:2023
cs=0x274d;eip=0x002024; 	X(POP(di));	// 74551                  pop     di ;~ 274D:2024
cs=0x274d;eip=0x002025; 	X(POP(si));	// 74552                  pop     si ;~ 274D:2025
cs=0x274d;eip=0x002026; 	X(POP(es));	// 74553                  pop     es ;~ 274D:2026
cs=0x274d;eip=0x002027; 	J(RETF(0));	// 74554                  retf ;~ 274D:2027

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_37acc: 	goto sub_37acc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_37ad8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_37ad8:
    _begin:
cs=0x274d;eip=0x002028; 	T(SUB(ax, ax));	// 74566                  sub     ax, ax ;~ 274D:2028
cs=0x274d;eip=0x00202a; 	T(es = ax;);	// 74567                  mov     es, ax ;~ 274D:202A
cs=0x274d;eip=0x00202c; 	X(PUSH(*(dw*)(raddr(es,0))));	// 74569                  push    word ptr es:0 ;~ 274D:202C
cs=0x274d;eip=0x002031; 	X(PUSH(*(dw*)(raddr(es,2))));	// 74570                  push    word ptr es:2 ;~ 274D:2031
cs=0x274d;eip=0x002036; 	T(ax = offset(seg48ae,word_4ac7c)+0x3C);	// 74571                  lea     ax, word_4AC7C+3Ch ;~ 274D:2036
cs=0x274d;eip=0x00203a; 	X(MOV(*(dw*)(raddr(es,0)), ax));	// 74572                  mov     es:0, ax ;~ 274D:203A
cs=0x274d;eip=0x00203e; 	X(MOV(*(dw*)(raddr(es,2)), seg_offset(seg35ab)));	// 74573                  mov     word ptr es:2, seg seg35ab ;~ 274D:203E
cs=0x274d;eip=0x002045; 	X(PUSH(ds));	// 74574                  push    ds ;~ 274D:2045
cs=0x274d;eip=0x002046; 	X(POP(es));	// 74575                  pop     es ;~ 274D:2046
cs=0x274d;eip=0x002047; 	J(JMP(loc_37b47));	// 74577                  jmp     short loc_37B47 ;~ 274D:2047
loc_37afa:
	// 7086 
cs=0x274d;eip=0x00204a; 	T(SUB(ax, ax));	// 74583                  sub     ax, ax ;~ 274D:204A
cs=0x274d;eip=0x00204c; 	T(es = ax;);	// 74584                  mov     es, ax ;~ 274D:204C
cs=0x274d;eip=0x00204e; 	X(POP(*(dw*)(raddr(es,2))));	// 74586                  pop     word ptr es:2 ;~ 274D:204E
cs=0x274d;eip=0x002053; 	X(POP(*(dw*)(raddr(es,0))));	// 74587                  pop     word ptr es:0 ;~ 274D:2053
cs=0x274d;eip=0x002058; 	X(PUSH(ds));	// 74588                  push    ds ;~ 274D:2058
cs=0x274d;eip=0x002059; 	X(POP(es));	// 74589                  pop     es ;~ 274D:2059
cs=0x274d;eip=0x00205a; 	J(RETN(0));	// 74591                  retn ;~ 274D:205A
loc_37b0b:
	// 7087 
cs=0x274d;eip=0x00205b; 	T(AND(al, byte_4db0e));	// 74595                  and     al, byte_4DB0E ;~ 274D:205B
cs=0x274d;eip=0x00205f; 	T(TEST(al, 6));	// 74596                  test    al, 6 ;~ 274D:205F
cs=0x274d;eip=0x002061; 	J(JNZ(loc_37afa));	// 74597                  jnz     short loc_37AFA ;~ 274D:2061
cs=0x274d;eip=0x002063; 	T(bx = cx;);	// 74598                  mov     bx, cx ;~ 274D:2063
cs=0x274d;eip=0x002065; 	J(JMP(loc_37c4a));	// 74599                  jmp     loc_37C4A ;~ 274D:2065
loc_37b18:
	// 7088 
cs=0x274d;eip=0x002068; 	J(JMP(loc_37c75));	// 74603                  jmp     loc_37C75 ;~ 274D:2068
loc_37b1b:
	// 7089 
cs=0x274d;eip=0x00206b; 	T(CMC);	// 74607                  cmc ;~ 274D:206B
cs=0x274d;eip=0x00206c; 	T(RCR(dx, 1));	// 74608                  rcr     dx, 1 ;~ 274D:206C
cs=0x274d;eip=0x00206e; 	X(word_4db0f = dx;);	// 74609                  mov     word_4DB0F, dx ;~ 274D:206E
cs=0x274d;eip=0x002072; 	T(SAR(dx, 1));	// 74610                  sar     dx, 1 ;~ 274D:2072
cs=0x274d;eip=0x002074; 	X(word_4db13 = dx;);	// 74611                  mov     word_4DB13, dx ;~ 274D:2074
cs=0x274d;eip=0x002078; 	T(dx = di;);	// 74612                  mov     dx, di ;~ 274D:2078
cs=0x274d;eip=0x00207a; 	T(SUB(dx, bp));	// 74613                  sub     dx, bp ;~ 274D:207A
cs=0x274d;eip=0x00207c; 	J(JNO(loc_37b34));	// 74614                  jno     short loc_37B34 ;~ 274D:207C
cs=0x274d;eip=0x00207e; 	T(CMC);	// 74615                  cmc ;~ 274D:207E
cs=0x274d;eip=0x00207f; 	T(RCR(dx, 1));	// 74616                  rcr     dx, 1 ;~ 274D:207F
cs=0x274d;eip=0x002081; 	J(JMP(loc_37b9f));	// 74617                  jmp     short loc_37B9F ;~ 274D:2081
loc_37b34:
	// 7090 
cs=0x274d;eip=0x002084; 	T(SAR(dx, 1));	// 74623                  sar     dx, 1 ;~ 274D:2084
cs=0x274d;eip=0x002086; 	J(JMP(loc_37b9f));	// 74624                  jmp     short loc_37B9F ;~ 274D:2086
loc_37b39:
	// 7091 
cs=0x274d;eip=0x002089; 	T(CMC);	// 74630                  cmc ;~ 274D:2089
cs=0x274d;eip=0x00208a; 	T(RCR(dx, 1));	// 74631                  rcr     dx, 1 ;~ 274D:208A
cs=0x274d;eip=0x00208c; 	X(SAR(word_4db0f, 1));	// 74632                  sar     word_4DB0F, 1 ;~ 274D:208C
cs=0x274d;eip=0x002090; 	X(SAR(word_4db13, 1));	// 74633                  sar     word_4DB13, 1 ;~ 274D:2090
cs=0x274d;eip=0x002094; 	J(JMP(loc_37b9f));	// 74634                  jmp     short loc_37B9F ;~ 274D:2094
loc_37b47:
	// 7092 
cs=0x274d;eip=0x002097; 	T(cx = word_4d78d;);	// 74640                  mov     cx, word_4D78D ;~ 274D:2097
cs=0x274d;eip=0x00209b; 	T(dx = word_4d791;);	// 74641                  mov     dx, word_4D791 ;~ 274D:209B
cs=0x274d;eip=0x00209f; 	T(si = word_4d78f;);	// 74642                  mov     si, word_4D78F ;~ 274D:209F
cs=0x274d;eip=0x0020a3; 	T(di = word_4d793;);	// 74643                  mov     di, word_4D793 ;~ 274D:20A3
cs=0x274d;eip=0x0020a7; 	T(bx = cx;);	// 74644                  mov     bx, cx ;~ 274D:20A7
cs=0x274d;eip=0x0020a9; 	T(bp = dx;);	// 74645                  mov     bp, dx ;~ 274D:20A9
cs=0x274d;eip=0x0020ab; 	J(CALL(sub_378f2,0));	// 74646                  call    sub_378F2 ;~ 274D:20AB
cs=0x274d;eip=0x0020ae; 	X(byte_4db0e = al;);	// 74647                  mov     byte_4DB0E, al ;~ 274D:20AE
cs=0x274d;eip=0x0020b1; 	T(bx = si;);	// 74648                  mov     bx, si ;~ 274D:20B1
cs=0x274d;eip=0x0020b3; 	T(bp = di;);	// 74649                  mov     bp, di ;~ 274D:20B3
cs=0x274d;eip=0x0020b5; 	J(CALL(sub_378f2,0));	// 74650                  call    sub_378F2 ;~ 274D:20B5
cs=0x274d;eip=0x0020b8; 	J(JNZ(loc_37b81));	// 74651                  jnz     short loc_37B81 ;~ 274D:20B8
cs=0x274d;eip=0x0020ba; 	T(CMP(byte_4db0e, 0));	// 74652                  cmp     byte_4DB0E, 0 ;~ 274D:20BA
cs=0x274d;eip=0x0020bf; 	J(JZ(loc_37b18));	// 74653                  jz      short loc_37B18 ;~ 274D:20BF
cs=0x274d;eip=0x0020c1; 	T(XCHG(cx, si));	// 74654                  xchg    cx, si ;~ 274D:20C1
cs=0x274d;eip=0x0020c3; 	T(XCHG(dx, di));	// 74655                  xchg    dx, di ;~ 274D:20C3
cs=0x274d;eip=0x0020c5; 	X(XCHG(al, byte_4db0e));	// 74656                  xchg    al, byte_4DB0E ;~ 274D:20C5
cs=0x274d;eip=0x0020c9; 	X(word_4d78d = cx;);	// 74657                  mov     word_4D78D, cx ;~ 274D:20C9
cs=0x274d;eip=0x0020cd; 	X(word_4d791 = dx;);	// 74658                  mov     word_4D791, dx ;~ 274D:20CD
loc_37b81:
	// 7093 
cs=0x274d;eip=0x0020d1; 	T(bp = dx;);	// 74661                  mov     bp, dx ;~ 274D:20D1
cs=0x274d;eip=0x0020d3; 	T(TEST(byte_4db0e, al));	// 74662                  test    byte_4DB0E, al ;~ 274D:20D3
cs=0x274d;eip=0x0020d7; 	J(JNZ(loc_37b0b));	// 74663                  jnz     short loc_37B0B ;~ 274D:20D7
cs=0x274d;eip=0x0020d9; 	T(dx = si;);	// 74664                  mov     dx, si ;~ 274D:20D9
cs=0x274d;eip=0x0020db; 	T(SUB(dx, cx));	// 74665                  sub     dx, cx ;~ 274D:20DB
cs=0x274d;eip=0x0020dd; 	J(JO(loc_37b1b));	// 74666                  jo      short loc_37B1B ;~ 274D:20DD
cs=0x274d;eip=0x0020df; 	X(word_4db0f = dx;);	// 74667                  mov     word_4DB0F, dx ;~ 274D:20DF
cs=0x274d;eip=0x0020e3; 	T(SAR(dx, 1));	// 74668                  sar     dx, 1 ;~ 274D:20E3
cs=0x274d;eip=0x0020e5; 	X(word_4db13 = dx;);	// 74669                  mov     word_4DB13, dx ;~ 274D:20E5
cs=0x274d;eip=0x0020e9; 	T(dx = di;);	// 74670                  mov     dx, di ;~ 274D:20E9
cs=0x274d;eip=0x0020eb; 	T(SUB(dx, bp));	// 74671                  sub     dx, bp ;~ 274D:20EB
cs=0x274d;eip=0x0020ed; 	J(JO(loc_37b39));	// 74672                  jo      short loc_37B39 ;~ 274D:20ED
loc_37b9f:
	// 7094 
cs=0x274d;eip=0x0020ef; 	X(word_4db11 = dx;);	// 74676                  mov     word_4DB11, dx ;~ 274D:20EF
cs=0x274d;eip=0x0020f3; 	T(SAR(dx, 1));	// 74677                  sar     dx, 1 ;~ 274D:20F3
cs=0x274d;eip=0x0020f5; 	X(word_4db15 = dx;);	// 74678                  mov     word_4DB15, dx ;~ 274D:20F5
loc_37ba9:
	// 7095 
cs=0x274d;eip=0x0020f9; 	T(TEST(al, 9));	// 74681                  test    al, 9 ;~ 274D:20F9
cs=0x274d;eip=0x0020fb; 	J(JZ(loc_37be9));	// 74682                  jz      short loc_37BE9 ;~ 274D:20FB
cs=0x274d;eip=0x0020fd; 	T(SUB(bx, bx));	// 74683                  sub     bx, bx ;~ 274D:20FD
cs=0x274d;eip=0x0020ff; 	T(OR(si, si));	// 74684                  or      si, si ;~ 274D:20FF
cs=0x274d;eip=0x002101; 	J(JS(loc_37bb7));	// 74685                  js      short loc_37BB7 ;~ 274D:2101
cs=0x274d;eip=0x002103; 	T(bx = word_4d787;);	// 74686                  mov     bx, word_4D787 ;~ 274D:2103
loc_37bb7:
	// 7096 
cs=0x274d;eip=0x002107; 	T(ax = bx;);	// 74689                  mov     ax, bx ;~ 274D:2107
cs=0x274d;eip=0x002109; 	T(SUB(ax, cx));	// 74690                  sub     ax, cx ;~ 274D:2109
cs=0x274d;eip=0x00210b; 	X(IMUL1_2(word_4db11));	// 74691                  imul    word_4DB11 ;~ 274D:210B
cs=0x274d;eip=0x00210f; 	X(PUSH(bx));	// 74692                  push    bx ;~ 274D:210F
cs=0x274d;eip=0x002110; 	T(bx = dx;);	// 74693                  mov     bx, dx ;~ 274D:2110
cs=0x274d;eip=0x002112; 	X(IDIV2(word_4db0f));	// 74694                  idiv    word_4DB0F ;~ 274D:2112
cs=0x274d;eip=0x002116; 	T(OR(ax, ax));	// 74695                  or      ax, ax ;~ 274D:2116
cs=0x274d;eip=0x002118; 	T(OR(ax, ax));	// 74696                  or      ax, ax ;~ 274D:2118
cs=0x274d;eip=0x00211a; 	T(bl = bh;);	// 74697                  mov     bl, bh ;~ 274D:211A
cs=0x274d;eip=0x00211c; 	T(XOR(bl, *(db*)(((db*)&word_4db0f)+1)));	// 74698                  xor     bl, byte ptr word_4DB0F+1 ;~ 274D:211C
cs=0x274d;eip=0x002120; 	J(JNS(loc_37bd5));	// 74699                  jns     short loc_37BD5 ;~ 274D:2120
cs=0x274d;eip=0x002122; 	T(NEG(dx));	// 74700                  neg     dx ;~ 274D:2122
cs=0x274d;eip=0x002124; 	T(DEC(ax));	// 74701                  dec     ax ;~ 274D:2124
loc_37bd5:
	// 7097 
cs=0x274d;eip=0x002125; 	T(SUB(dx, word_4db13));	// 74704                  sub     dx, word_4DB13 ;~ 274D:2125
cs=0x274d;eip=0x002129; 	T(XOR(dh, bh));	// 74705                  xor     dh, bh ;~ 274D:2129
cs=0x274d;eip=0x00212b; 	J(JS(loc_37bde));	// 74706                  js      short loc_37BDE ;~ 274D:212B
cs=0x274d;eip=0x00212d; 	T(INC(ax));	// 74707                  inc     ax ;~ 274D:212D
loc_37bde:
	// 7098 
cs=0x274d;eip=0x00212e; 	X(POP(bx));	// 74710                  pop     bx ;~ 274D:212E
cs=0x274d;eip=0x00212f; 	T(ADD(ax, bp));	// 74711                  add     ax, bp ;~ 274D:212F
cs=0x274d;eip=0x002131; 	J(JS(loc_37bf1));	// 74712                  js      short loc_37BF1 ;~ 274D:2131
cs=0x274d;eip=0x002133; 	T(CMP(ax, word_4d789));	// 74713                  cmp     ax, word_4D789 ;~ 274D:2133
cs=0x274d;eip=0x002137; 	J(JLE(loc_37c26));	// 74714                  jle     short loc_37C26 ;~ 274D:2137
loc_37be9:
	// 7099 
cs=0x274d;eip=0x002139; 	T(bx = word_4d789;);	// 74717                  mov     bx, word_4D789 ;~ 274D:2139
cs=0x274d;eip=0x00213d; 	T(CMP(di, bx));	// 74718                  cmp     di, bx ;~ 274D:213D
cs=0x274d;eip=0x00213f; 	J(JG(loc_37bf3));	// 74719                  jg      short loc_37BF3 ;~ 274D:213F
loc_37bf1:
	// 7100 
cs=0x274d;eip=0x002141; 	T(SUB(bx, bx));	// 74722                  sub     bx, bx ;~ 274D:2141
loc_37bf3:
	// 7101 
cs=0x274d;eip=0x002143; 	T(ax = bx;);	// 74725                  mov     ax, bx ;~ 274D:2143
cs=0x274d;eip=0x002145; 	T(SUB(ax, bp));	// 74726                  sub     ax, bp ;~ 274D:2145
cs=0x274d;eip=0x002147; 	X(IMUL1_2(word_4db0f));	// 74727                  imul    word_4DB0F ;~ 274D:2147
cs=0x274d;eip=0x00214b; 	X(PUSH(bx));	// 74728                  push    bx ;~ 274D:214B
cs=0x274d;eip=0x00214c; 	T(bx = dx;);	// 74729                  mov     bx, dx ;~ 274D:214C
cs=0x274d;eip=0x00214e; 	X(IDIV2(word_4db11));	// 74730                  idiv    word_4DB11 ;~ 274D:214E
cs=0x274d;eip=0x002152; 	T(OR(ax, ax));	// 74731                  or      ax, ax ;~ 274D:2152
cs=0x274d;eip=0x002154; 	T(OR(ax, ax));	// 74732                  or      ax, ax ;~ 274D:2154
cs=0x274d;eip=0x002156; 	T(bl = bh;);	// 74733                  mov     bl, bh ;~ 274D:2156
cs=0x274d;eip=0x002158; 	T(XOR(bl, *(db*)(((db*)&word_4db11)+1)));	// 74734                  xor     bl, byte ptr word_4DB11+1 ;~ 274D:2158
cs=0x274d;eip=0x00215c; 	J(JNS(loc_37c11));	// 74735                  jns     short loc_37C11 ;~ 274D:215C
cs=0x274d;eip=0x00215e; 	T(NEG(dx));	// 74736                  neg     dx ;~ 274D:215E
cs=0x274d;eip=0x002160; 	T(DEC(ax));	// 74737                  dec     ax ;~ 274D:2160
loc_37c11:
	// 7102 
cs=0x274d;eip=0x002161; 	T(SUB(dx, word_4db15));	// 74740                  sub     dx, word_4DB15 ;~ 274D:2161
cs=0x274d;eip=0x002165; 	T(XOR(dh, bh));	// 74741                  xor     dh, bh ;~ 274D:2165
cs=0x274d;eip=0x002167; 	J(JS(loc_37c1a));	// 74742                  js      short loc_37C1A ;~ 274D:2167
cs=0x274d;eip=0x002169; 	T(INC(ax));	// 74743                  inc     ax ;~ 274D:2169
loc_37c1a:
	// 7103 
cs=0x274d;eip=0x00216a; 	X(POP(bx));	// 74746                  pop     bx ;~ 274D:216A
cs=0x274d;eip=0x00216b; 	T(ADD(ax, cx));	// 74747                  add     ax, cx ;~ 274D:216B
cs=0x274d;eip=0x00216d; 	T(XCHG(ax, bx));	// 74748                  xchg    ax, bx ;~ 274D:216D
cs=0x274d;eip=0x00216e; 	J(JS(loc_37c4a));	// 74749                  js      short loc_37C4A ;~ 274D:216E
cs=0x274d;eip=0x002170; 	T(CMP(bx, word_4d787));	// 74750                  cmp     bx, word_4D787 ;~ 274D:2170
cs=0x274d;eip=0x002174; 	J(JG(loc_37c4a));	// 74751                  jg      short loc_37C4A ;~ 274D:2174
loc_37c26:
	// 7104 
cs=0x274d;eip=0x002176; 	X(PUSH(ax));	// 74754                  push    ax ;~ 274D:2176
cs=0x274d;eip=0x002177; 	X(PUSH(bx));	// 74755                  push    bx ;~ 274D:2177
cs=0x274d;eip=0x002178; 	X(PUSH(cx));	// 74756                  push    cx ;~ 274D:2178
cs=0x274d;eip=0x002179; 	X(PUSH(si));	// 74757                  push    si ;~ 274D:2179
cs=0x274d;eip=0x00217a; 	X(PUSH(di));	// 74758                  push    di ;~ 274D:217A
cs=0x274d;eip=0x00217b; 	T(dx = di;);	// 74759                  mov     dx, di ;~ 274D:217B
cs=0x274d;eip=0x00217d; 	T(di = ax;);	// 74760                  mov     di, ax ;~ 274D:217D
cs=0x274d;eip=0x00217f; 	T(si = bx;);	// 74761                  mov     si, bx ;~ 274D:217F
cs=0x274d;eip=0x002181; 	J(CALL(sub_37986,0));	// 74762                  call    sub_37986 ;~ 274D:2181
cs=0x274d;eip=0x002184; 	X(POP(di));	// 74763                  pop     di ;~ 274D:2184
cs=0x274d;eip=0x002185; 	X(POP(si));	// 74764                  pop     si ;~ 274D:2185
cs=0x274d;eip=0x002186; 	X(POP(cx));	// 74765                  pop     cx ;~ 274D:2186
cs=0x274d;eip=0x002187; 	X(POP(bx));	// 74766                  pop     bx ;~ 274D:2187
cs=0x274d;eip=0x002188; 	X(POP(ax));	// 74767                  pop     ax ;~ 274D:2188
cs=0x274d;eip=0x002189; 	T(CMP(byte_4db0e, 0));	// 74768                  cmp     byte_4DB0E, 0 ;~ 274D:2189
cs=0x274d;eip=0x00218e; 	J(JNZ(loc_37c5f));	// 74769                  jnz     short loc_37C5F ;~ 274D:218E
cs=0x274d;eip=0x002190; 	X(word_4d793 = ax;);	// 74770                  mov     word_4D793, ax ;~ 274D:2190
cs=0x274d;eip=0x002193; 	X(word_4d78f = bx;);	// 74771                  mov     word_4D78F, bx ;~ 274D:2193
cs=0x274d;eip=0x002197; 	J(JMP(loc_37c75));	// 74772                  jmp     short loc_37C75 ;~ 274D:2197
loc_37c4a:
	// 7105 
cs=0x274d;eip=0x00219a; 	T(dx = bp;);	// 74779                  mov     dx, bp ;~ 274D:219A
cs=0x274d;eip=0x00219c; 	T(SUB(ax, ax));	// 74780                  sub     ax, ax ;~ 274D:219C
cs=0x274d;eip=0x00219e; 	T(es = ax;);	// 74781                  mov     es, ax ;~ 274D:219E
cs=0x274d;eip=0x0021a0; 	X(POP(*(dw*)(raddr(es,2))));	// 74783                  pop     word ptr es:2 ;~ 274D:21A0
cs=0x274d;eip=0x0021a5; 	X(POP(*(dw*)(raddr(es,0))));	// 74784                  pop     word ptr es:0 ;~ 274D:21A5
cs=0x274d;eip=0x0021aa; 	X(PUSH(ds));	// 74785                  push    ds ;~ 274D:21AA
cs=0x274d;eip=0x0021ab; 	X(POP(es));	// 74786                  pop     es ;~ 274D:21AB
cs=0x274d;eip=0x0021ac; 	J(return _group83(m2c::kloc_379d5, _state););	// 74788                  jmp     loc_379D5 ;~ 274D:21AC
loc_37c5f:
	// 7106 
cs=0x274d;eip=0x0021af; 	X(word_4d791 = ax;);	// 74792                  mov     word_4D791, ax ;~ 274D:21AF
cs=0x274d;eip=0x0021b2; 	X(word_4d78d = bx;);	// 74793                  mov     word_4D78D, bx ;~ 274D:21B2
cs=0x274d;eip=0x0021b6; 	T(XCHG(cx, si));	// 74794                  xchg    cx, si ;~ 274D:21B6
cs=0x274d;eip=0x0021b8; 	T(XCHG(bp, di));	// 74795                  xchg    bp, di ;~ 274D:21B8
cs=0x274d;eip=0x0021ba; 	T(al = byte_4db0e;);	// 74796                  mov     al, byte_4DB0E ;~ 274D:21BA
cs=0x274d;eip=0x0021bd; 	X(byte_4db0e = 0;);	// 74797                  mov     byte_4DB0E, 0 ;~ 274D:21BD
cs=0x274d;eip=0x0021c2; 	J(JMP(loc_37ba9));	// 74798                  jmp     loc_37BA9 ;~ 274D:21C2
loc_37c75:
	// 7107 
cs=0x274d;eip=0x0021c5; 	T(SUB(ax, ax));	// 74803                  sub     ax, ax ;~ 274D:21C5
cs=0x274d;eip=0x0021c7; 	T(es = ax;);	// 74804                  mov     es, ax ;~ 274D:21C7
cs=0x274d;eip=0x0021c9; 	X(POP(*(dw*)(raddr(es,2))));	// 74806                  pop     word ptr es:2 ;~ 274D:21C9
cs=0x274d;eip=0x0021ce; 	X(POP(*(dw*)(raddr(es,0))));	// 74807                  pop     word ptr es:0 ;~ 274D:21CE
cs=0x274d;eip=0x0021d3; 	X(PUSH(ds));	// 74808                  push    ds ;~ 274D:21D3
cs=0x274d;eip=0x0021d4; 	X(POP(es));	// 74809                  pop     es ;~ 274D:21D4
cs=0x274d;eip=0x0021d5; 	J(return sub_379e4(0, _state););	// 74811                  jmp     sub_379E4 ;~ 274D:21D5

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_37afa: 	goto loc_37afa;
        case m2c::kloc_37b0b: 	goto loc_37b0b;
        case m2c::kloc_37b18: 	goto loc_37b18;
        case m2c::kloc_37b1b: 	goto loc_37b1b;
        case m2c::kloc_37b34: 	goto loc_37b34;
        case m2c::kloc_37b39: 	goto loc_37b39;
        case m2c::kloc_37b47: 	goto loc_37b47;
        case m2c::kloc_37b81: 	goto loc_37b81;
        case m2c::kloc_37b9f: 	goto loc_37b9f;
        case m2c::kloc_37ba9: 	goto loc_37ba9;
        case m2c::kloc_37bb7: 	goto loc_37bb7;
        case m2c::kloc_37bd5: 	goto loc_37bd5;
        case m2c::kloc_37bde: 	goto loc_37bde;
        case m2c::kloc_37be9: 	goto loc_37be9;
        case m2c::kloc_37bf1: 	goto loc_37bf1;
        case m2c::kloc_37bf3: 	goto loc_37bf3;
        case m2c::kloc_37c11: 	goto loc_37c11;
        case m2c::kloc_37c1a: 	goto loc_37c1a;
        case m2c::kloc_37c26: 	goto loc_37c26;
        case m2c::kloc_37c4a: 	goto loc_37c4a;
        case m2c::kloc_37c5f: 	goto loc_37c5f;
        case m2c::kloc_37c75: 	goto loc_37c75;
        case m2c::ksub_37ad8: 	goto sub_37ad8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}


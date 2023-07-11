/* THIS IS GENERATED FILE */

        
#include "f.exe.h"

                

 bool _group69(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group69:
    _begin:
sub_35ab2:
	// 69218 
#undef arg_2
#define arg_2 8
	// 69221 arg_2           = word ptr  8 ;~ 274D:0002
#undef arg_4
#define arg_4 0x0A
	// 69222 arg_4           = word ptr  0Ah ;~ 274D:0002
#undef arg_6
#define arg_6 0x0C
	// 69223 arg_6           = byte ptr  0Ch ;~ 274D:0002
cs=0x274d;eip=0x000002; 	X(PUSH(bp));	// 69225                  push    bp ;~ 274D:0002
cs=0x274d;eip=0x000003; 	T(bp = sp;);	// 69226                  mov     bp, sp ;~ 274D:0003
cs=0x274d;eip=0x000005; 	X(PUSH(es));	// 69227                  push    es ;~ 274D:0005
cs=0x274d;eip=0x000006; 	X(PUSH(ds));	// 69228                  push    ds ;~ 274D:0006
cs=0x274d;eip=0x000007; 	X(PUSH(si));	// 69229                  push    si ;~ 274D:0007
cs=0x274d;eip=0x000008; 	X(PUSH(di));	// 69230                  push    di ;~ 274D:0008
cs=0x274d;eip=0x000009; 	T(MOV(ah, *(raddr(ss,bp+arg_6))));	// 69231                  mov     ah, [bp+arg_6] ;~ 274D:0009
cs=0x274d;eip=0x00000c; 	J(CALLF(sub_49a3e,0));	// 69232                  call    far ptr sub_49A3E ;~ 274D:000C
cs=0x274d;eip=0x000011; 	J(CALL(sub_37950,0));	// 69234                  call    sub_37950 ;~ 274D:0011
cs=0x274d;eip=0x000014; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 69235                  mov     si, [bp+arg_4] ;~ 274D:0014
cs=0x274d;eip=0x000017; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_2))));	// 69236                  mov     cx, [bp+arg_2] ;~ 274D:0017
cs=0x274d;eip=0x00001a; 	T(DEC(cx));	// 69237                  dec     cx ;~ 274D:001A
cs=0x274d;eip=0x00001b; 	T(LODSW);	// 69238                  lodsw ;~ 274D:001B
cs=0x274d;eip=0x00001c; 	X(word_4d78d = ax;);	// 69239                  mov     word_4D78D, ax ;~ 274D:001C
cs=0x274d;eip=0x00001f; 	X(PUSH(ax));	// 69240                  push    ax ;~ 274D:001F
cs=0x274d;eip=0x000020; 	T(LODSW);	// 69241                  lodsw ;~ 274D:0020
cs=0x274d;eip=0x000021; 	X(word_4d791 = ax;);	// 69242                  mov     word_4D791, ax ;~ 274D:0021
cs=0x274d;eip=0x000024; 	X(PUSH(ax));	// 69243                  push    ax ;~ 274D:0024
loc_35ad5:
	// 6988 
cs=0x274d;eip=0x000025; 	X(PUSH(cx));	// 69246                  push    cx ;~ 274D:0025
cs=0x274d;eip=0x000026; 	T(LODSW);	// 69247                  lodsw ;~ 274D:0026
cs=0x274d;eip=0x000027; 	X(word_4d78f = ax;);	// 69248                  mov     word_4D78F, ax ;~ 274D:0027
cs=0x274d;eip=0x00002a; 	X(PUSH(ax));	// 69249                  push    ax ;~ 274D:002A
cs=0x274d;eip=0x00002b; 	T(LODSW);	// 69250                  lodsw ;~ 274D:002B
cs=0x274d;eip=0x00002c; 	X(word_4d793 = ax;);	// 69251                  mov     word_4D793, ax ;~ 274D:002C
cs=0x274d;eip=0x00002f; 	X(PUSH(ax));	// 69252                  push    ax ;~ 274D:002F
cs=0x274d;eip=0x000030; 	X(PUSH(si));	// 69253                  push    si ;~ 274D:0030
cs=0x274d;eip=0x000031; 	J(CALL(sub_37ad8,0));	// 69254                  call    sub_37AD8 ;~ 274D:0031
cs=0x274d;eip=0x000034; 	X(POP(si));	// 69256                  pop     si ;~ 274D:0034
cs=0x274d;eip=0x000035; 	X(POP(word_4d791));	// 69257                  pop     word_4D791 ;~ 274D:0035
cs=0x274d;eip=0x000039; 	X(POP(word_4d78d));	// 69258                  pop     word_4D78D ;~ 274D:0039
cs=0x274d;eip=0x00003d; 	X(POP(cx));	// 69259                  pop     cx ;~ 274D:003D
cs=0x274d;eip=0x00003e; 	J(LOOP(loc_35ad5));	// 69260                  loop    loc_35AD5 ;~ 274D:003E
cs=0x274d;eip=0x000040; 	X(POP(word_4d793));	// 69261                  pop     word_4D793 ;~ 274D:0040
cs=0x274d;eip=0x000044; 	X(POP(word_4d78f));	// 69262                  pop     word_4D78F ;~ 274D:0044
cs=0x274d;eip=0x000048; 	J(CALL(sub_37ad8,0));	// 69263                  call    sub_37AD8 ;~ 274D:0048
cs=0x274d;eip=0x00004b; 	T(ax = word_4db09;);	// 69264                  mov     ax, word_4DB09 ;~ 274D:004B
cs=0x274d;eip=0x00004e; 	T(cx = word_4db0b;);	// 69265                  mov     cx, word_4DB0B ;~ 274D:004E
cs=0x274d;eip=0x000052; 	T(bx = 0x4CB5;);	// 69266                  mov     bx, 4CB5h ;~ 274D:0052
cs=0x274d;eip=0x000055; 	J(CALLF(sub_49a57,0));	// 69267                  call    far ptr sub_49A57 ;~ 274D:0055
seg35ab_5a_proc:
	// 69271 
cs=0x274d;eip=0x00005a; 	J(CALLF(sub_49a48,0));	// 69271                  call    far ptr sub_49A48 ;~ 274D:005A
cs=0x274d;eip=0x00005f; 	X(POP(di));	// 69273                  pop     di ;~ 274D:005F
cs=0x274d;eip=0x000060; 	X(POP(si));	// 69274                  pop     si ;~ 274D:0060
cs=0x274d;eip=0x000061; 	X(POP(ds));	// 69275                  pop     ds ;~ 274D:0061
cs=0x274d;eip=0x000062; 	X(POP(es));	// 69277                  pop     es ;~ 274D:0062
cs=0x274d;eip=0x000063; 	X(POP(bp));	// 69279                  pop     bp ;~ 274D:0063
cs=0x274d;eip=0x000064; 	J(RETF(0));	// 69280                  retf ;~ 274D:0064
ret_274d_66:
	// 6989 
cs=0x274d;eip=0x000066; 	T(bx = sp;);	// 69284                  mov     bx, sp ;~ 274D:0066
cs=0x274d;eip=0x000068; 	X(PUSH(si));	// 69285                  push    si ;~ 274D:0068
cs=0x274d;eip=0x000069; 	X(PUSH(di));	// 69286                  push    di ;~ 274D:0069
cs=0x274d;eip=0x00006a; 	T(MOV(bx, *(dw*)(raddr(ss,bx+2))));	// 69287                  mov     bx, ss:[bx+2] ;~ 274D:006A
cs=0x274d;eip=0x00006e; 	T(SHL(bx, 1));	// 69288                  shl     bx, 1 ;~ 274D:006E
cs=0x274d;eip=0x000070; 	T(SHL(bx, 1));	// 69289                  shl     bx, 1 ;~ 274D:0070
cs=0x274d;eip=0x000072; 	J(CALL(sub_35b28,0));	// 69290                  call    sub_35B28 ;~ 274D:0072
cs=0x274d;eip=0x000075; 	X(POP(di));	// 69291                  pop     di ;~ 274D:0075
cs=0x274d;eip=0x000076; 	X(POP(si));	// 69292                  pop     si ;~ 274D:0076
cs=0x274d;eip=0x000077; 	J(RETN(0));	// 69293                  retn ;~ 274D:0077

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
cs=0x274d;eip=0x000078; 	T(MOV(cx, *(dw*)(raddr(ds,bx+0x1DD6))));	// 69301                  mov     cx, [bx+1DD6h] ;~ 274D:0078
cs=0x274d;eip=0x00007c; 	T(CMP(byte_4de54, 0));	// 69302                  cmp     byte_4DE54, 0 ;~ 274D:007C
cs=0x274d;eip=0x000081; 	J(JZ(loc_35b35));	// 69303                  jz      short loc_35B35 ;~ 274D:0081
cs=0x274d;eip=0x000083; 	T(SHL(cx, 1));	// 69304                  shl     cx, 1 ;~ 274D:0083
loc_35b35:
	// 6990 
cs=0x274d;eip=0x000085; 	T(CMP(*(db*)(&word_4e73e), 0));	// 69307                  cmp     byte ptr word_4E73E, 0 ;~ 274D:0085
cs=0x274d;eip=0x00008a; 	J(JZ(loc_35b46));	// 69308                  jz      short loc_35B46 ;~ 274D:008A
cs=0x274d;eip=0x00008c; 	T(XCHG(dx, cx));	// 69309                  xchg    dx, cx ;~ 274D:008C
cs=0x274d;eip=0x00008e; 	T(cl = *(db*)(&word_4e73e););	// 69310                  mov     cl, byte ptr word_4E73E ;~ 274D:008E
cs=0x274d;eip=0x000092; 	T(SAR(dx, cl));	// 69311                  sar     dx, cl ;~ 274D:0092
cs=0x274d;eip=0x000094; 	T(XCHG(dx, cx));	// 69312                  xchg    dx, cx ;~ 274D:0094
loc_35b46:
	// 6991 
cs=0x274d;eip=0x000096; 	T(OR(cx, cx));	// 69315                  or      cx, cx ;~ 274D:0096
cs=0x274d;eip=0x000098; 	J(JLE(loc_35b97));	// 69316                  jle     short loc_35B97 ;~ 274D:0098
cs=0x274d;eip=0x00009a; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x1A0D))));	// 69317                  mov     dx, [bx+1A0Dh] ;~ 274D:009A
cs=0x274d;eip=0x00009e; 	T(MOV(al, *(raddr(ds,bx+0x1A0F))));	// 69318                  mov     al, [bx+1A0Fh] ;~ 274D:009E
cs=0x274d;eip=0x0000a2; 	T(CBW);	// 69319                  cbw ;~ 274D:00A2
cs=0x274d;eip=0x0000a3; 	T(XCHG(ax, dx));	// 69320                  xchg    ax, dx ;~ 274D:00A3
cs=0x274d;eip=0x0000a4; 	T(IDIV2(cx));	// 69321                  idiv    cx ;~ 274D:00A4
cs=0x274d;eip=0x0000a6; 	T(CWD);	// 69322                  cwd ;~ 274D:00A6
cs=0x274d;eip=0x0000a7; 	T(OR(ax, ax));	// 69323                  or      ax, ax ;~ 274D:00A7
cs=0x274d;eip=0x0000a9; 	T(ADD(ax, word_48bbc));	// 69324                  add     ax, word_48BBC ;~ 274D:00A9
cs=0x274d;eip=0x0000ad; 	T(ADC(dx, 0));	// 69325                  adc     dx, 0 ;~ 274D:00AD
cs=0x274d;eip=0x0000b0; 	X(MOV(*(dw*)(raddr(ds,bx+0x1FBA)), dx));	// 69326                  mov     [bx+1FBAh], dx ;~ 274D:00B0
cs=0x274d;eip=0x0000b4; 	X(MOV(*(dw*)(raddr(ds,bx+0x1FB8)), ax));	// 69327                  mov     [bx+1FB8h], ax ;~ 274D:00B4
cs=0x274d;eip=0x0000b8; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x1BF1))));	// 69328                  mov     dx, [bx+1BF1h] ;~ 274D:00B8
cs=0x274d;eip=0x0000bc; 	T(MOV(al, *(raddr(ds,bx+0x1BF3))));	// 69329                  mov     al, [bx+1BF3h] ;~ 274D:00BC
cs=0x274d;eip=0x0000c0; 	T(CBW);	// 69330                  cbw ;~ 274D:00C0
cs=0x274d;eip=0x0000c1; 	T(XCHG(ax, dx));	// 69331                  xchg    ax, dx ;~ 274D:00C1
cs=0x274d;eip=0x0000c2; 	T(si = dx;);	// 69332                  mov     si, dx ;~ 274D:00C2
cs=0x274d;eip=0x0000c4; 	T(di = ax;);	// 69333                  mov     di, ax ;~ 274D:00C4
cs=0x274d;eip=0x0000c6; 	T(SAR(dx, 1));	// 69334                  sar     dx, 1 ;~ 274D:00C6
cs=0x274d;eip=0x0000c8; 	T(RCR(ax, 1));	// 69335                  rcr     ax, 1 ;~ 274D:00C8
cs=0x274d;eip=0x0000ca; 	T(SAR(dx, 1));	// 69336                  sar     dx, 1 ;~ 274D:00CA
cs=0x274d;eip=0x0000cc; 	T(RCR(ax, 1));	// 69337                  rcr     ax, 1 ;~ 274D:00CC
cs=0x274d;eip=0x0000ce; 	T(SUB(ax, di));	// 69338                  sub     ax, di ;~ 274D:00CE
cs=0x274d;eip=0x0000d0; 	T(SBB(dx, si));	// 69339                  sbb     dx, si ;~ 274D:00D0
cs=0x274d;eip=0x0000d2; 	T(IDIV2(cx));	// 69340                  idiv    cx ;~ 274D:00D2
cs=0x274d;eip=0x0000d4; 	T(CWD);	// 69341                  cwd ;~ 274D:00D4
cs=0x274d;eip=0x0000d5; 	T(OR(ax, ax));	// 69342                  or      ax, ax ;~ 274D:00D5
cs=0x274d;eip=0x0000d7; 	T(ADD(ax, *(word_48bbe)));	// 69343                  add     ax, word_48BBE ;~ 274D:00D7
cs=0x274d;eip=0x0000db; 	T(ADC(dx, 0));	// 69344                  adc     dx, 0 ;~ 274D:00DB
cs=0x274d;eip=0x0000de; 	X(MOV(*(dw*)(raddr(ds,bx+0x219E)), dx));	// 69345                  mov     [bx+219Eh], dx ;~ 274D:00DE
cs=0x274d;eip=0x0000e2; 	X(MOV(*(dw*)(raddr(ds,bx+0x219C)), ax));	// 69346                  mov     [bx+219Ch], ax ;~ 274D:00E2
cs=0x274d;eip=0x0000e6; 	J(RETN(0));	// 69347                  retn ;~ 274D:00E6
loc_35b97:
	// 6992 
cs=0x274d;eip=0x0000e7; 	T(ax = 0x8000;);	// 69351                  mov     ax, 8000h ;~ 274D:00E7
cs=0x274d;eip=0x0000ea; 	X(MOV(*(dw*)(raddr(ds,bx+0x1FB8)), ax));	// 69352                  mov     [bx+1FB8h], ax ;~ 274D:00EA
cs=0x274d;eip=0x0000ee; 	X(MOV(*(dw*)(raddr(ds,bx+0x1FBA)), ax));	// 69353                  mov     [bx+1FBAh], ax ;~ 274D:00EE
cs=0x274d;eip=0x0000f2; 	X(MOV(*(dw*)(raddr(ds,bx+0x219C)), ax));	// 69354                  mov     [bx+219Ch], ax ;~ 274D:00F2
cs=0x274d;eip=0x0000f6; 	X(MOV(*(dw*)(raddr(ds,bx+0x219E)), ax));	// 69355                  mov     [bx+219Eh], ax ;~ 274D:00F6
cs=0x274d;eip=0x0000fa; 	J(RETN(0));	// 69356                  retn ;~ 274D:00FA

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
cs=0x274d;eip=0x0000fb; 	X(PUSH(bp));	// 69360                  push    bp ;~ 274D:00FB
cs=0x274d;eip=0x0000fc; 	T(bp = sp;);	// 69361                  mov     bp, sp ;~ 274D:00FC
cs=0x274d;eip=0x0000fe; 	X(ADD(*(dw*)(raddr(ss,bp+2)), 3));	// 69362                  add     word ptr [bp+2], 3 ;~ 274D:00FE
cs=0x274d;eip=0x000102; 	T(al = ah;);	// 69363                  mov     al, ah ;~ 274D:0102
cs=0x274d;eip=0x000104; 	T(ah = dl;);	// 69364                  mov     ah, dl ;~ 274D:0104
cs=0x274d;eip=0x000106; 	T(dl = dh;);	// 69365                  mov     dl, dh ;~ 274D:0106
cs=0x274d;eip=0x000108; 	T(IDIV2(cx));	// 69366                  idiv    cx ;~ 274D:0108
cs=0x274d;eip=0x00010a; 	T(CWD);	// 69367                  cwd ;~ 274D:010A
cs=0x274d;eip=0x00010b; 	T(dl = ah;);	// 69368                  mov     dl, ah ;~ 274D:010B
cs=0x274d;eip=0x00010d; 	T(ah = al;);	// 69369                  mov     ah, al ;~ 274D:010D
cs=0x274d;eip=0x00010f; 	T(SUB(al, al));	// 69370                  sub     al, al ;~ 274D:010F
cs=0x274d;eip=0x000111; 	X(POP(bp));	// 69371                  pop     bp ;~ 274D:0111
cs=0x274d;eip=0x000112; 	J(IRET);	// 69372                  iret ;~ 274D:0112

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
cs=0x274d;eip=0x000113; 	X(PUSH(es));	// 69379                  push    es ;~ 274D:0113
cs=0x274d;eip=0x000114; 	T(SUB(ax, ax));	// 69380                  sub     ax, ax ;~ 274D:0114
cs=0x274d;eip=0x000116; 	T(es = ax;);	// 69381                  mov     es, ax ;~ 274D:0116
cs=0x274d;eip=0x000118; 	T(MOV(ax, *(dw*)(raddr(es,0))));	// 69383                  mov     ax, es:0 ;~ 274D:0118
cs=0x274d;eip=0x00011c; 	X(word_4a380 = ax;);	// 69384                  mov     word_4A380, ax ;~ 274D:011C
cs=0x274d;eip=0x00011f; 	T(ax = offset(seg48ae,byte_48bc2)+0x19);	// 69385                  lea     ax, byte_48BC2+19h ;~ 274D:011F
cs=0x274d;eip=0x000123; 	X(MOV(*(dw*)(raddr(es,0)), ax));	// 69386                  mov     es:0, ax ;~ 274D:0123
cs=0x274d;eip=0x000127; 	T(MOV(ax, *(dw*)(raddr(es,2))));	// 69387                  mov     ax, es:2 ;~ 274D:0127
cs=0x274d;eip=0x00012b; 	X(*(word_4a382) = ax;);	// 69388                  mov     word_4A382, ax ;~ 274D:012B
cs=0x274d;eip=0x00012e; 	T(ax = seg_offset(seg35ab););	// 69389                  mov     ax, seg seg35ab ;~ 274D:012E
cs=0x274d;eip=0x000131; 	X(MOV(*(dw*)(raddr(es,2)), ax));	// 69390                  mov     es:2, ax ;~ 274D:0131
cs=0x274d;eip=0x000135; 	X(POP(es));	// 69391                  pop     es ;~ 274D:0135
cs=0x274d;eip=0x000136; 	J(RETN(0));	// 69393                  retn ;~ 274D:0136

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
cs=0x274d;eip=0x000137; 	X(PUSH(es));	// 69402                  push    es ;~ 274D:0137
cs=0x274d;eip=0x000138; 	T(SUB(ax, ax));	// 69403                  sub     ax, ax ;~ 274D:0138
cs=0x274d;eip=0x00013a; 	T(es = ax;);	// 69404                  mov     es, ax ;~ 274D:013A
cs=0x274d;eip=0x00013c; 	T(ax = word_4a380;);	// 69406                  mov     ax, word_4A380 ;~ 274D:013C
cs=0x274d;eip=0x00013f; 	X(MOV(*(dw*)(raddr(es,0)), ax));	// 69407                  mov     es:0, ax ;~ 274D:013F
cs=0x274d;eip=0x000143; 	T(ax = *(word_4a382););	// 69408                  mov     ax, word_4A382 ;~ 274D:0143
cs=0x274d;eip=0x000146; 	X(MOV(*(dw*)(raddr(es,2)), ax));	// 69409                  mov     es:2, ax ;~ 274D:0146
cs=0x274d;eip=0x00014a; 	X(POP(es));	// 69410                  pop     es ;~ 274D:014A
cs=0x274d;eip=0x00014b; 	J(RETN(0));	// 69412                  retn ;~ 274D:014B

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
cs=0x274d;eip=0x00014c; 	X(PUSH(bp));	// 69416                  push    bp ;~ 274D:014C
cs=0x274d;eip=0x00014d; 	T(bp = sp;);	// 69417                  mov     bp, sp ;~ 274D:014D
cs=0x274d;eip=0x00014f; 	X(PUSH(si));	// 69418                  push    si ;~ 274D:014F
cs=0x274d;eip=0x000150; 	X(PUSH(di));	// 69419                  push    di ;~ 274D:0150
cs=0x274d;eip=0x000151; 	X(PUSH(es));	// 69420                  push    es ;~ 274D:0151
cs=0x274d;eip=0x000152; 	T(MOV(di, *(dw*)(raddr(ss,bp+6))));	// 69421                  mov     di, [bp+6] ;~ 274D:0152
cs=0x274d;eip=0x000155; 	J(CALL(sub_35c0d,0));	// 69422                  call    sub_35C0D ;~ 274D:0155
cs=0x274d;eip=0x000158; 	X(POP(es));	// 69423                  pop     es ;~ 274D:0158
cs=0x274d;eip=0x000159; 	X(POP(di));	// 69425                  pop     di ;~ 274D:0159
cs=0x274d;eip=0x00015a; 	X(POP(si));	// 69426                  pop     si ;~ 274D:015A
cs=0x274d;eip=0x00015b; 	X(POP(bp));	// 69427                  pop     bp ;~ 274D:015B
cs=0x274d;eip=0x00015c; 	J(RETN(0));	// 69428                  retn ;~ 274D:015C

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
cs=0x274d;eip=0x00015d; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 69436                  mov     ax, [di] ;~ 274D:015D
cs=0x274d;eip=0x00015f; 	T(MOV(cx, *(dw*)(raddr(ds,di+2))));	// 69437                  mov     cx, [di+2] ;~ 274D:015F
cs=0x274d;eip=0x000162; 	T(CWD);	// 69438                  cwd ;~ 274D:0162
cs=0x274d;eip=0x000163; 	T(CMP(dx, cx));	// 69439                  cmp     dx, cx ;~ 274D:0163
cs=0x274d;eip=0x000165; 	J(JNZ(loc_35c57));	// 69440                  jnz     short loc_35C57 ;~ 274D:0165
cs=0x274d;eip=0x000167; 	T(si = ax;);	// 69441                  mov     si, ax ;~ 274D:0167
cs=0x274d;eip=0x000169; 	T(MOV(ax, *(dw*)(raddr(ds,di+4))));	// 69442                  mov     ax, [di+4] ;~ 274D:0169
cs=0x274d;eip=0x00016c; 	T(MOV(cx, *(dw*)(raddr(ds,di+6))));	// 69443                  mov     cx, [di+6] ;~ 274D:016C
cs=0x274d;eip=0x00016f; 	T(CWD);	// 69444                  cwd ;~ 274D:016F
cs=0x274d;eip=0x000170; 	T(CMP(dx, cx));	// 69445                  cmp     dx, cx ;~ 274D:0170
cs=0x274d;eip=0x000172; 	J(JNZ(loc_35c57));	// 69446                  jnz     short loc_35C57 ;~ 274D:0172
cs=0x274d;eip=0x000174; 	T(cx = ax;);	// 69447                  mov     cx, ax ;~ 274D:0174
cs=0x274d;eip=0x000176; 	T(MOV(ax, *(dw*)(raddr(ds,di+8))));	// 69448                  mov     ax, [di+8] ;~ 274D:0176
cs=0x274d;eip=0x000179; 	T(MOV(bx, *(dw*)(raddr(ds,di+0x0A))));	// 69449                  mov     bx, [di+0Ah] ;~ 274D:0179
cs=0x274d;eip=0x00017c; 	T(CWD);	// 69450                  cwd ;~ 274D:017C
cs=0x274d;eip=0x00017d; 	T(CMP(dx, bx));	// 69451                  cmp     dx, bx ;~ 274D:017D
cs=0x274d;eip=0x00017f; 	J(JNZ(loc_35c57));	// 69452                  jnz     short loc_35C57 ;~ 274D:017F
cs=0x274d;eip=0x000181; 	T(bp = ax;);	// 69453                  mov     bp, ax ;~ 274D:0181
cs=0x274d;eip=0x000183; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x0C))));	// 69454                  mov     ax, [di+0Ch] ;~ 274D:0183
cs=0x274d;eip=0x000186; 	T(MOV(bx, *(dw*)(raddr(ds,di+0x0E))));	// 69455                  mov     bx, [di+0Eh] ;~ 274D:0186
cs=0x274d;eip=0x000189; 	T(CWD);	// 69456                  cwd ;~ 274D:0189
cs=0x274d;eip=0x00018a; 	T(CMP(dx, bx));	// 69457                  cmp     dx, bx ;~ 274D:018A
cs=0x274d;eip=0x00018c; 	J(JNZ(loc_35c57));	// 69458                  jnz     short loc_35C57 ;~ 274D:018C
cs=0x274d;eip=0x00018e; 	T(dx = ax;);	// 69459                  mov     dx, ax ;~ 274D:018E
cs=0x274d;eip=0x000190; 	T(ax = word_4d787;);	// 69460                  mov     ax, word_4D787 ;~ 274D:0190
cs=0x274d;eip=0x000193; 	T(CMP(si, ax));	// 69461                  cmp     si, ax ;~ 274D:0193
cs=0x274d;eip=0x000195; 	J(JA(loc_35c57));	// 69462                  ja      short loc_35C57 ;~ 274D:0195
cs=0x274d;eip=0x000197; 	T(CMP(bp, ax));	// 69463                  cmp     bp, ax ;~ 274D:0197
cs=0x274d;eip=0x000199; 	J(JA(loc_35c57));	// 69464                  ja      short loc_35C57 ;~ 274D:0199
cs=0x274d;eip=0x00019b; 	T(ax = word_4d789;);	// 69465                  mov     ax, word_4D789 ;~ 274D:019B
cs=0x274d;eip=0x00019e; 	T(CMP(cx, ax));	// 69466                  cmp     cx, ax ;~ 274D:019E
cs=0x274d;eip=0x0001a0; 	J(JA(loc_35c57));	// 69467                  ja      short loc_35C57 ;~ 274D:01A0
cs=0x274d;eip=0x0001a2; 	T(CMP(dx, ax));	// 69468                  cmp     dx, ax ;~ 274D:01A2
cs=0x274d;eip=0x0001a4; 	J(JA(loc_35c57));	// 69469                  ja      short loc_35C57 ;~ 274D:01A4
cs=0x274d;eip=0x0001a6; 	J(RETN(0));	// 69470                  retn ;~ 274D:01A6
loc_35c57:
	// 6993 
cs=0x274d;eip=0x0001a7; 	T(SUB(al, al));	// 69475                  sub     al, al ;~ 274D:01A7
cs=0x274d;eip=0x0001a9; 	X(byte_4a3a0 = al;);	// 69476                  mov     byte_4A3A0, al ;~ 274D:01A9
cs=0x274d;eip=0x0001ac; 	T(MOV(bx, *(dw*)(raddr(ds,di))));	// 69477                  mov     bx, [di] ;~ 274D:01AC
cs=0x274d;eip=0x0001ae; 	X(word_4a386 = bx;);	// 69478                  mov     word_4A386, bx ;~ 274D:01AE
cs=0x274d;eip=0x0001b2; 	T(MOV(cx, *(dw*)(raddr(ds,di+2))));	// 69479                  mov     cx, [di+2] ;~ 274D:01B2
cs=0x274d;eip=0x0001b5; 	X(word_4a388 = cx;);	// 69480                  mov     word_4A388, cx ;~ 274D:01B5
cs=0x274d;eip=0x0001b9; 	T(MOV(si, *(dw*)(raddr(ds,di+4))));	// 69481                  mov     si, [di+4] ;~ 274D:01B9
cs=0x274d;eip=0x0001bc; 	X(word_4a38a = si;);	// 69482                  mov     word_4A38A, si ;~ 274D:01BC
cs=0x274d;eip=0x0001c0; 	T(MOV(dx, *(dw*)(raddr(ds,di+6))));	// 69483                  mov     dx, [di+6] ;~ 274D:01C0
cs=0x274d;eip=0x0001c3; 	X(word_4a38c = dx;);	// 69484                  mov     word_4A38C, dx ;~ 274D:01C3
cs=0x274d;eip=0x0001c7; 	J(CALL(sub_35e33,0));	// 69485                  call    sub_35E33 ;~ 274D:01C7
cs=0x274d;eip=0x0001ca; 	X(byte_4a39e = al;);	// 69486                  mov     byte_4A39E, al ;~ 274D:01CA
cs=0x274d;eip=0x0001cd; 	J(JZ(loc_35c88));	// 69487                  jz      short loc_35C88 ;~ 274D:01CD
cs=0x274d;eip=0x0001cf; 	J(CALL(sub_35e6a,0));	// 69488                  call    sub_35E6A ;~ 274D:01CF
cs=0x274d;eip=0x0001d2; 	X(MOV(*(dw*)(raddr(ds,di+2)), ax));	// 69489                  mov     [di+2], ax ;~ 274D:01D2
cs=0x274d;eip=0x0001d5; 	X(MOV(*(dw*)(raddr(ds,di+6)), bp));	// 69490                  mov     [di+6], bp ;~ 274D:01D5
loc_35c88:
	// 6994 
cs=0x274d;eip=0x0001d8; 	T(MOV(bx, *(dw*)(raddr(ds,di+8))));	// 69493                  mov     bx, [di+8] ;~ 274D:01D8
cs=0x274d;eip=0x0001db; 	X(word_4a38e = bx;);	// 69494                  mov     word_4A38E, bx ;~ 274D:01DB
cs=0x274d;eip=0x0001df; 	T(MOV(cx, *(dw*)(raddr(ds,di+0x0A))));	// 69495                  mov     cx, [di+0Ah] ;~ 274D:01DF
cs=0x274d;eip=0x0001e2; 	X(word_4a390 = cx;);	// 69496                  mov     word_4A390, cx ;~ 274D:01E2
cs=0x274d;eip=0x0001e6; 	T(MOV(si, *(dw*)(raddr(ds,di+0x0C))));	// 69497                  mov     si, [di+0Ch] ;~ 274D:01E6
cs=0x274d;eip=0x0001e9; 	X(word_4a392 = si;);	// 69498                  mov     word_4A392, si ;~ 274D:01E9
cs=0x274d;eip=0x0001ed; 	T(MOV(dx, *(dw*)(raddr(ds,di+0x0E))));	// 69499                  mov     dx, [di+0Eh] ;~ 274D:01ED
cs=0x274d;eip=0x0001f0; 	X(word_4a394 = dx;);	// 69500                  mov     word_4A394, dx ;~ 274D:01F0
cs=0x274d;eip=0x0001f4; 	J(CALL(sub_35e33,0));	// 69501                  call    sub_35E33 ;~ 274D:01F4
cs=0x274d;eip=0x0001f7; 	X(byte_4a39f = al;);	// 69502                  mov     byte_4A39F, al ;~ 274D:01F7
cs=0x274d;eip=0x0001fa; 	J(JZ(loc_35cb5));	// 69503                  jz      short loc_35CB5 ;~ 274D:01FA
cs=0x274d;eip=0x0001fc; 	J(CALL(sub_35e6a,0));	// 69504                  call    sub_35E6A ;~ 274D:01FC
cs=0x274d;eip=0x0001ff; 	X(MOV(*(dw*)(raddr(ds,di+0x0A)), ax));	// 69505                  mov     [di+0Ah], ax ;~ 274D:01FF
cs=0x274d;eip=0x000202; 	X(MOV(*(dw*)(raddr(ds,di+0x0E)), bp));	// 69506                  mov     [di+0Eh], bp ;~ 274D:0202
loc_35cb5:
	// 6995 
cs=0x274d;eip=0x000205; 	T(ah = byte_4a39e;);	// 69509                  mov     ah, byte_4A39E ;~ 274D:0205
cs=0x274d;eip=0x000209; 	T(al = byte_4a39f;);	// 69510                  mov     al, byte_4A39F ;~ 274D:0209
cs=0x274d;eip=0x00020c; 	T(OR(ah, al));	// 69511                  or      ah, al ;~ 274D:020C
cs=0x274d;eip=0x00020e; 	T(TEST(byte_4a39e, al));	// 69512                  test    byte_4A39E, al ;~ 274D:020E
cs=0x274d;eip=0x000212; 	J(JNZ(loc_35ceb));	// 69513                  jnz     short loc_35CEB ;~ 274D:0212
cs=0x274d;eip=0x000214; 	T(OR(al, al));	// 69514                  or      al, al ;~ 274D:0214
cs=0x274d;eip=0x000216; 	J(JZ(loc_35cd3));	// 69515                  jz      short loc_35CD3 ;~ 274D:0216
cs=0x274d;eip=0x000218; 	T(al = byte_4a39e;);	// 69516                  mov     al, byte_4A39E ;~ 274D:0218
cs=0x274d;eip=0x00021b; 	T(OR(al, al));	// 69517                  or      al, al ;~ 274D:021B
cs=0x274d;eip=0x00021d; 	J(JZ(loc_35cd7));	// 69518                  jz      short loc_35CD7 ;~ 274D:021D
cs=0x274d;eip=0x00021f; 	J(CALL(sub_35cef,0));	// 69519                  call    sub_35CEF ;~ 274D:021F
cs=0x274d;eip=0x000222; 	J(RETN(0));	// 69520                  retn ;~ 274D:0222
loc_35cd3:
	// 6996 
cs=0x274d;eip=0x000223; 	J(CALL(sub_35d4d,0));	// 69524                  call    sub_35D4D ;~ 274D:0223
cs=0x274d;eip=0x000226; 	J(RETN(0));	// 69525                  retn ;~ 274D:0226
loc_35cd7:
	// 6997 
cs=0x274d;eip=0x000227; 	T(bx = word_4a386;);	// 69529                  mov     bx, word_4A386 ;~ 274D:0227
cs=0x274d;eip=0x00022b; 	T(cx = word_4a388;);	// 69530                  mov     cx, word_4A388 ;~ 274D:022B
cs=0x274d;eip=0x00022f; 	T(si = word_4a38a;);	// 69531                  mov     si, word_4A38A ;~ 274D:022F
cs=0x274d;eip=0x000233; 	T(dx = word_4a38c;);	// 69532                  mov     dx, word_4A38C ;~ 274D:0233
cs=0x274d;eip=0x000237; 	J(CALL(sub_35d82,0));	// 69533                  call    sub_35D82 ;~ 274D:0237
cs=0x274d;eip=0x00023a; 	J(RETN(0));	// 69534                  retn ;~ 274D:023A
loc_35ceb:
	// 6998 
cs=0x274d;eip=0x00023b; 	J(CALL(sub_35db8,0));	// 69538                  call    sub_35DB8 ;~ 274D:023B
cs=0x274d;eip=0x00023e; 	J(RETN(0));	// 69539                  retn ;~ 274D:023E

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
cs=0x274d;eip=0x00023f; 	T(ax = word_4a386;);	// 69547                  mov     ax, word_4A386 ;~ 274D:023F
cs=0x274d;eip=0x000242; 	X(word_4a396 = ax;);	// 69548                  mov     word_4A396, ax ;~ 274D:0242
cs=0x274d;eip=0x000245; 	T(ax = word_4a388;);	// 69549                  mov     ax, word_4A388 ;~ 274D:0245
cs=0x274d;eip=0x000248; 	X(word_4a398 = ax;);	// 69550                  mov     word_4A398, ax ;~ 274D:0248
cs=0x274d;eip=0x00024b; 	T(ax = word_4a38a;);	// 69551                  mov     ax, word_4A38A ;~ 274D:024B
cs=0x274d;eip=0x00024e; 	X(word_4a39a = ax;);	// 69552                  mov     word_4A39A, ax ;~ 274D:024E
cs=0x274d;eip=0x000251; 	T(ax = word_4a38c;);	// 69553                  mov     ax, word_4A38C ;~ 274D:0251
cs=0x274d;eip=0x000254; 	X(word_4a39c = ax;);	// 69554                  mov     word_4A39C, ax ;~ 274D:0254
cs=0x274d;eip=0x000257; 	T(bx = word_4a38e;);	// 69555                  mov     bx, word_4A38E ;~ 274D:0257
cs=0x274d;eip=0x00025b; 	T(cx = word_4a390;);	// 69556                  mov     cx, word_4A390 ;~ 274D:025B
cs=0x274d;eip=0x00025f; 	T(si = word_4a392;);	// 69557                  mov     si, word_4A392 ;~ 274D:025F
cs=0x274d;eip=0x000263; 	T(dx = word_4a394;);	// 69558                  mov     dx, word_4A394 ;~ 274D:0263
cs=0x274d;eip=0x000267; 	J(CALL(sub_35f34,0));	// 69559                  call    sub_35F34 ;~ 274D:0267
cs=0x274d;eip=0x00026a; 	J(JZ(loc_35d26));	// 69560                  jz      short loc_35D26 ;~ 274D:026A
cs=0x274d;eip=0x00026c; 	T(MOV(dx, *(dw*)(raddr(ds,di+0x0E))));	// 69561                  mov     dx, [di+0Eh] ;~ 274D:026C
cs=0x274d;eip=0x00026f; 	X(MOV(*(dw*)(raddr(ds,di+4)), dx));	// 69562                  mov     [di+4], dx ;~ 274D:026F
cs=0x274d;eip=0x000272; 	J(CALL(sub_35db8,0));	// 69563                  call    sub_35DB8 ;~ 274D:0272
cs=0x274d;eip=0x000275; 	J(RETN(0));	// 69564                  retn ;~ 274D:0275
loc_35d26:
	// 6999 
cs=0x274d;eip=0x000276; 	X(word_4a3a9 = bx;);	// 69568                  mov     word_4A3A9, bx ;~ 274D:0276
cs=0x274d;eip=0x00027a; 	X(word_4a3ab = cx;);	// 69569                  mov     word_4A3AB, cx ;~ 274D:027A
cs=0x274d;eip=0x00027e; 	X(word_4a3ad = si;);	// 69570                  mov     word_4A3AD, si ;~ 274D:027E
cs=0x274d;eip=0x000282; 	X(word_4a3af = dx;);	// 69571                  mov     word_4A3AF, dx ;~ 274D:0282
cs=0x274d;eip=0x000286; 	J(CALL(sub_35d4d,0));	// 69572                  call    sub_35D4D ;~ 274D:0286
cs=0x274d;eip=0x000289; 	T(bx = word_4a3a9;);	// 69573                  mov     bx, word_4A3A9 ;~ 274D:0289
cs=0x274d;eip=0x00028d; 	T(cx = word_4a3ab;);	// 69574                  mov     cx, word_4A3AB ;~ 274D:028D
cs=0x274d;eip=0x000291; 	T(si = word_4a3ad;);	// 69575                  mov     si, word_4A3AD ;~ 274D:0291
cs=0x274d;eip=0x000295; 	T(dx = word_4a3af;);	// 69576                  mov     dx, word_4A3AF ;~ 274D:0295
cs=0x274d;eip=0x000299; 	J(CALL(sub_35d82,0));	// 69577                  call    sub_35D82 ;~ 274D:0299
cs=0x274d;eip=0x00029c; 	J(RETN(0));	// 69578                  retn ;~ 274D:029C

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
cs=0x274d;eip=0x00029d; 	X(word_4a396 = bx;);	// 69587                  mov     word_4A396, bx ;~ 274D:029D
cs=0x274d;eip=0x0002a1; 	X(word_4a398 = cx;);	// 69588                  mov     word_4A398, cx ;~ 274D:02A1
cs=0x274d;eip=0x0002a5; 	X(word_4a39a = si;);	// 69589                  mov     word_4A39A, si ;~ 274D:02A5
cs=0x274d;eip=0x0002a9; 	X(word_4a39c = dx;);	// 69590                  mov     word_4A39C, dx ;~ 274D:02A9
cs=0x274d;eip=0x0002ad; 	T(bx = word_4a386;);	// 69591                  mov     bx, word_4A386 ;~ 274D:02AD
cs=0x274d;eip=0x0002b1; 	T(cx = word_4a388;);	// 69592                  mov     cx, word_4A388 ;~ 274D:02B1
cs=0x274d;eip=0x0002b5; 	T(si = word_4a38a;);	// 69593                  mov     si, word_4A38A ;~ 274D:02B5
cs=0x274d;eip=0x0002b9; 	T(dx = word_4a38c;);	// 69594                  mov     dx, word_4A38C ;~ 274D:02B9
cs=0x274d;eip=0x0002bd; 	J(CALL(sub_35ebe,0));	// 69595                  call    sub_35EBE ;~ 274D:02BD
cs=0x274d;eip=0x0002c0; 	X(MOV(*(dw*)(raddr(ds,di)), bx));	// 69596                  mov     [di], bx ;~ 274D:02C0
cs=0x274d;eip=0x0002c2; 	X(MOV(*(dw*)(raddr(ds,di+4)), si));	// 69597                  mov     [di+4], si ;~ 274D:02C2
cs=0x274d;eip=0x0002c5; 	T(MOV(ax, *(dw*)(raddr(ds,di+4))));	// 69598                  mov     ax, [di+4] ;~ 274D:02C5
cs=0x274d;eip=0x0002c8; 	T(CMP(ax, *(dw*)(raddr(ds,di+6))));	// 69599                  cmp     ax, [di+6] ;~ 274D:02C8
cs=0x274d;eip=0x0002cb; 	J(JZ(locret_35d81));	// 69600                  jz      short locret_35D81 ;~ 274D:02CB
cs=0x274d;eip=0x0002cd; 	X(OR(*(raddr(ds,di+0x18)), 0x20));	// 69601                  or      byte ptr [di+18h], 20h ;~ 274D:02CD
locret_35d81:
	// 7000 
cs=0x274d;eip=0x0002d1; 	J(RETN(0));	// 69604                  retn ;~ 274D:02D1

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
cs=0x274d;eip=0x0002d2; 	X(word_4a396 = bx;);	// 69613                  mov     word_4A396, bx ;~ 274D:02D2
cs=0x274d;eip=0x0002d6; 	X(word_4a398 = cx;);	// 69614                  mov     word_4A398, cx ;~ 274D:02D6
cs=0x274d;eip=0x0002da; 	X(word_4a39a = si;);	// 69615                  mov     word_4A39A, si ;~ 274D:02DA
cs=0x274d;eip=0x0002de; 	X(word_4a39c = dx;);	// 69616                  mov     word_4A39C, dx ;~ 274D:02DE
cs=0x274d;eip=0x0002e2; 	T(bx = word_4a38e;);	// 69617                  mov     bx, word_4A38E ;~ 274D:02E2
cs=0x274d;eip=0x0002e6; 	T(cx = word_4a390;);	// 69618                  mov     cx, word_4A390 ;~ 274D:02E6
cs=0x274d;eip=0x0002ea; 	T(si = word_4a392;);	// 69619                  mov     si, word_4A392 ;~ 274D:02EA
cs=0x274d;eip=0x0002ee; 	T(dx = word_4a394;);	// 69620                  mov     dx, word_4A394 ;~ 274D:02EE
cs=0x274d;eip=0x0002f2; 	J(CALL(sub_35ebe,0));	// 69621                  call    sub_35EBE ;~ 274D:02F2
cs=0x274d;eip=0x0002f5; 	X(MOV(*(dw*)(raddr(ds,di+8)), bx));	// 69622                  mov     [di+8], bx ;~ 274D:02F5
cs=0x274d;eip=0x0002f8; 	X(MOV(*(dw*)(raddr(ds,di+0x0C)), si));	// 69623                  mov     [di+0Ch], si ;~ 274D:02F8
cs=0x274d;eip=0x0002fb; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x0C))));	// 69624                  mov     ax, [di+0Ch] ;~ 274D:02FB
cs=0x274d;eip=0x0002fe; 	T(CMP(ax, *(dw*)(raddr(ds,di+0x0E))));	// 69625                  cmp     ax, [di+0Eh] ;~ 274D:02FE
cs=0x274d;eip=0x000301; 	J(JZ(locret_35db7));	// 69626                  jz      short locret_35DB7 ;~ 274D:0301
cs=0x274d;eip=0x000303; 	X(OR(*(raddr(ds,di+0x18)), 0x10));	// 69627                  or      byte ptr [di+18h], 10h ;~ 274D:0303
locret_35db7:
	// 7001 
cs=0x274d;eip=0x000307; 	J(RETN(0));	// 69630                  retn ;~ 274D:0307

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
cs=0x274d;eip=0x000308; 	T(MOV(cl, *(raddr(ds,di+0x18))));	// 69639                  mov     cl, [di+18h] ;~ 274D:0308
cs=0x274d;eip=0x00030b; 	T(OR(cl, 0x80));	// 69640                  or      cl, 80h ;~ 274D:030B
cs=0x274d;eip=0x00030e; 	T(MOV(dx, *(dw*)(raddr(ds,di+0x0E))));	// 69641                  mov     dx, [di+0Eh] ;~ 274D:030E
cs=0x274d;eip=0x000311; 	X(MOV(*(dw*)(raddr(ds,di+4)), dx));	// 69642                  mov     [di+4], dx ;~ 274D:0311
cs=0x274d;eip=0x000314; 	T(TEST(al, 9));	// 69643                  test    al, 9 ;~ 274D:0314
cs=0x274d;eip=0x000316; 	J(JZ(loc_35de0));	// 69644                  jz      short loc_35DE0 ;~ 274D:0316
cs=0x274d;eip=0x000318; 	T(dx = 0;);	// 69645                  mov     dx, 0 ;~ 274D:0318
cs=0x274d;eip=0x00031b; 	T(TEST(al, 8));	// 69646                  test    al, 8 ;~ 274D:031B
cs=0x274d;eip=0x00031d; 	J(JNZ(loc_35dd3));	// 69647                  jnz     short loc_35DD3 ;~ 274D:031D
cs=0x274d;eip=0x00031f; 	T(dx = word_4d787;);	// 69648                  mov     dx, word_4D787 ;~ 274D:031F
loc_35dd3:
	// 7002 
cs=0x274d;eip=0x000323; 	X(MOV(*(dw*)(raddr(ds,di)), dx));	// 69651                  mov     [di], dx ;~ 274D:0323
cs=0x274d;eip=0x000325; 	T(MOV(ax, *(dw*)(raddr(ds,di+4))));	// 69652                  mov     ax, [di+4] ;~ 274D:0325
cs=0x274d;eip=0x000328; 	T(CMP(ax, *(dw*)(raddr(ds,di+6))));	// 69653                  cmp     ax, [di+6] ;~ 274D:0328
cs=0x274d;eip=0x00032b; 	J(JZ(loc_35de0));	// 69654                  jz      short loc_35DE0 ;~ 274D:032B
cs=0x274d;eip=0x00032d; 	T(OR(cl, 0x20));	// 69655                  or      cl, 20h ;~ 274D:032D
loc_35de0:
	// 7003 
cs=0x274d;eip=0x000330; 	X(MOV(*(raddr(ds,di+0x18)), cl));	// 69659                  mov     [di+18h], cl ;~ 274D:0330
cs=0x274d;eip=0x000333; 	J(RETN(0));	// 69660                  retn ;~ 274D:0333

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
cs=0x274d;eip=0x000334; 	T(OR(cx, cx));	// 69668                  or      cx, cx ;~ 274D:0334
cs=0x274d;eip=0x000336; 	J(JNZ(loc_35df3));	// 69669                  jnz     short loc_35DF3 ;~ 274D:0336
cs=0x274d;eip=0x000338; 	T(CMP(bx, 0));	// 69670                  cmp     bx, 0 ;~ 274D:0338
cs=0x274d;eip=0x00033b; 	J(JZ(loc_35e05));	// 69671                  jz      short loc_35E05 ;~ 274D:033B
cs=0x274d;eip=0x00033d; 	T(CMP(bx, word_4d787));	// 69672                  cmp     bx, word_4D787 ;~ 274D:033D
cs=0x274d;eip=0x000341; 	J(JZ(loc_35e05));	// 69673                  jz      short loc_35E05 ;~ 274D:0341
loc_35df3:
	// 7004 
cs=0x274d;eip=0x000343; 	T(OR(dx, dx));	// 69676                  or      dx, dx ;~ 274D:0343
cs=0x274d;eip=0x000345; 	J(JNZ(loc_35e02));	// 69677                  jnz     short loc_35E02 ;~ 274D:0345
cs=0x274d;eip=0x000347; 	T(CMP(si, 0));	// 69678                  cmp     si, 0 ;~ 274D:0347
cs=0x274d;eip=0x00034a; 	J(JZ(loc_35e1c));	// 69679                  jz      short loc_35E1C ;~ 274D:034A
cs=0x274d;eip=0x00034c; 	T(CMP(si, word_4d789));	// 69680                  cmp     si, word_4D789 ;~ 274D:034C
cs=0x274d;eip=0x000350; 	J(JZ(loc_35e1c));	// 69681                  jz      short loc_35E1C ;~ 274D:0350
loc_35e02:
	// 7005 
cs=0x274d;eip=0x000352; 	T(SUB(ax, ax));	// 69684                  sub     ax, ax ;~ 274D:0352
cs=0x274d;eip=0x000354; 	J(RETN(0));	// 69685                  retn ;~ 274D:0354
loc_35e05:
	// 7006 
cs=0x274d;eip=0x000355; 	T(SUB(ax, ax));	// 69690                  sub     ax, ax ;~ 274D:0355
cs=0x274d;eip=0x000357; 	T(OR(dx, dx));	// 69691                  or      dx, dx ;~ 274D:0357
cs=0x274d;eip=0x000359; 	J(JS(loc_35e19));	// 69692                  js      short loc_35E19 ;~ 274D:0359
cs=0x274d;eip=0x00035b; 	J(JNZ(loc_35e19));	// 69693                  jnz     short loc_35E19 ;~ 274D:035B
cs=0x274d;eip=0x00035d; 	T(CMP(si, 0));	// 69694                  cmp     si, 0 ;~ 274D:035D
cs=0x274d;eip=0x000360; 	J(JC(loc_35e19));	// 69695                  jb      short loc_35E19 ;~ 274D:0360
cs=0x274d;eip=0x000362; 	T(CMP(si, word_4d789));	// 69696                  cmp     si, word_4D789 ;~ 274D:0362
cs=0x274d;eip=0x000366; 	J(JA(loc_35e19));	// 69697                  ja      short loc_35E19 ;~ 274D:0366
cs=0x274d;eip=0x000368; 	T(INC(ax));	// 69698                  inc     ax ;~ 274D:0368
loc_35e19:
	// 7007 
cs=0x274d;eip=0x000369; 	T(OR(ax, ax));	// 69702                  or      ax, ax ;~ 274D:0369
cs=0x274d;eip=0x00036b; 	J(RETN(0));	// 69703                  retn ;~ 274D:036B
loc_35e1c:
	// 7008 
cs=0x274d;eip=0x00036c; 	T(SUB(ax, ax));	// 69708                  sub     ax, ax ;~ 274D:036C
cs=0x274d;eip=0x00036e; 	T(OR(cx, cx));	// 69709                  or      cx, cx ;~ 274D:036E
cs=0x274d;eip=0x000370; 	J(JS(loc_35e30));	// 69710                  js      short loc_35E30 ;~ 274D:0370
cs=0x274d;eip=0x000372; 	J(JNZ(loc_35e30));	// 69711                  jnz     short loc_35E30 ;~ 274D:0372
cs=0x274d;eip=0x000374; 	T(CMP(bx, 0));	// 69712                  cmp     bx, 0 ;~ 274D:0374
cs=0x274d;eip=0x000377; 	J(JC(loc_35e30));	// 69713                  jb      short loc_35E30 ;~ 274D:0377
cs=0x274d;eip=0x000379; 	T(CMP(bx, word_4d787));	// 69714                  cmp     bx, word_4D787 ;~ 274D:0379
cs=0x274d;eip=0x00037d; 	J(JA(loc_35e30));	// 69715                  ja      short loc_35E30 ;~ 274D:037D
cs=0x274d;eip=0x00037f; 	T(INC(ax));	// 69716                  inc     ax ;~ 274D:037F
loc_35e30:
	// 7009 
cs=0x274d;eip=0x000380; 	T(OR(ax, ax));	// 69720                  or      ax, ax ;~ 274D:0380
cs=0x274d;eip=0x000382; 	J(RETN(0));	// 69721                  retn ;~ 274D:0382

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
cs=0x274d;eip=0x000383; 	T(al = 0x0C;);	// 69730                  mov     al, 0Ch ;~ 274D:0383
cs=0x274d;eip=0x000385; 	T(OR(cx, cx));	// 69731                  or      cx, cx ;~ 274D:0385
cs=0x274d;eip=0x000387; 	J(JS(loc_35e4e));	// 69732                  js      short loc_35E4E ;~ 274D:0387
cs=0x274d;eip=0x000389; 	J(JNZ(loc_35e40));	// 69733                  jnz     short loc_35E40 ;~ 274D:0389
cs=0x274d;eip=0x00038b; 	T(CMP(bx, 0));	// 69734                  cmp     bx, 0 ;~ 274D:038B
cs=0x274d;eip=0x00038e; 	J(JC(loc_35e4e));	// 69735                  jb      short loc_35E4E ;~ 274D:038E
loc_35e40:
	// 7010 
cs=0x274d;eip=0x000390; 	T(XOR(al, 9));	// 69738                  xor     al, 9 ;~ 274D:0390
cs=0x274d;eip=0x000392; 	T(OR(cx, cx));	// 69739                  or      cx, cx ;~ 274D:0392
cs=0x274d;eip=0x000394; 	J(JNZ(loc_35e4e));	// 69740                  jnz     short loc_35E4E ;~ 274D:0394
cs=0x274d;eip=0x000396; 	T(CMP(bx, word_4d787));	// 69741                  cmp     bx, word_4D787 ;~ 274D:0396
cs=0x274d;eip=0x00039a; 	J(JA(loc_35e4e));	// 69742                  ja      short loc_35E4E ;~ 274D:039A
cs=0x274d;eip=0x00039c; 	T(XOR(al, 1));	// 69743                  xor     al, 1 ;~ 274D:039C
loc_35e4e:
	// 7011 
cs=0x274d;eip=0x00039e; 	T(OR(dx, dx));	// 69747                  or      dx, dx ;~ 274D:039E
cs=0x274d;eip=0x0003a0; 	J(JS(loc_35e67));	// 69748                  js      short loc_35E67 ;~ 274D:03A0
cs=0x274d;eip=0x0003a2; 	J(JNZ(loc_35e59));	// 69749                  jnz     short loc_35E59 ;~ 274D:03A2
cs=0x274d;eip=0x0003a4; 	T(CMP(si, 0));	// 69750                  cmp     si, 0 ;~ 274D:03A4
cs=0x274d;eip=0x0003a7; 	J(JC(loc_35e67));	// 69751                  jb      short loc_35E67 ;~ 274D:03A7
loc_35e59:
	// 7012 
cs=0x274d;eip=0x0003a9; 	T(XOR(al, 6));	// 69754                  xor     al, 6 ;~ 274D:03A9
cs=0x274d;eip=0x0003ab; 	T(OR(dx, dx));	// 69755                  or      dx, dx ;~ 274D:03AB
cs=0x274d;eip=0x0003ad; 	J(JNZ(loc_35e67));	// 69756                  jnz     short loc_35E67 ;~ 274D:03AD
cs=0x274d;eip=0x0003af; 	T(CMP(si, word_4d789));	// 69757                  cmp     si, word_4D789 ;~ 274D:03AF
cs=0x274d;eip=0x0003b3; 	J(JA(loc_35e67));	// 69758                  ja      short loc_35E67 ;~ 274D:03B3
cs=0x274d;eip=0x0003b5; 	T(XOR(al, 2));	// 69759                  xor     al, 2 ;~ 274D:03B5
loc_35e67:
	// 7013 
cs=0x274d;eip=0x0003b7; 	T(OR(al, al));	// 69763                  or      al, al ;~ 274D:03B7
cs=0x274d;eip=0x0003b9; 	J(RETN(0));	// 69764                  retn ;~ 274D:03B9

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
cs=0x274d;eip=0x0003ba; 	T(ah = 1;);	// 69773                  mov     ah, 1 ;~ 274D:03BA
cs=0x274d;eip=0x0003bc; 	T(bp = cx;);	// 69774                  mov     bp, cx ;~ 274D:03BC
cs=0x274d;eip=0x0003be; 	T(INC(bp));	// 69775                  inc     bp ;~ 274D:03BE
cs=0x274d;eip=0x0003bf; 	T(CMP(bp, 1));	// 69776                  cmp     bp, 1 ;~ 274D:03BF
cs=0x274d;eip=0x0003c2; 	J(JA(loc_35e96));	// 69777                  ja      short loc_35E96 ;~ 274D:03C2
cs=0x274d;eip=0x0003c4; 	T(bp = cx;);	// 69778                  mov     bp, cx ;~ 274D:03C4
cs=0x274d;eip=0x0003c6; 	T(SAR(bp, 1));	// 69779                  sar     bp, 1 ;~ 274D:03C6
cs=0x274d;eip=0x0003c8; 	T(XOR(bp, bx));	// 69780                  xor     bp, bx ;~ 274D:03C8
cs=0x274d;eip=0x0003ca; 	T(AND(bp, 0x0C000));	// 69781                  and     bp, 0C000h ;~ 274D:03CA
cs=0x274d;eip=0x0003ce; 	J(JNZ(loc_35e96));	// 69782                  jnz     short loc_35E96 ;~ 274D:03CE
cs=0x274d;eip=0x0003d0; 	T(bp = dx;);	// 69783                  mov     bp, dx ;~ 274D:03D0
cs=0x274d;eip=0x0003d2; 	T(INC(bp));	// 69784                  inc     bp ;~ 274D:03D2
cs=0x274d;eip=0x0003d3; 	T(CMP(bp, 1));	// 69785                  cmp     bp, 1 ;~ 274D:03D3
cs=0x274d;eip=0x0003d6; 	J(JA(loc_35e96));	// 69786                  ja      short loc_35E96 ;~ 274D:03D6
cs=0x274d;eip=0x0003d8; 	T(bp = dx;);	// 69787                  mov     bp, dx ;~ 274D:03D8
cs=0x274d;eip=0x0003da; 	T(SAR(bp, 1));	// 69788                  sar     bp, 1 ;~ 274D:03DA
cs=0x274d;eip=0x0003dc; 	T(XOR(bp, si));	// 69789                  xor     bp, si ;~ 274D:03DC
cs=0x274d;eip=0x0003de; 	T(AND(bp, 0x0C000));	// 69790                  and     bp, 0C000h ;~ 274D:03DE
cs=0x274d;eip=0x0003e2; 	J(JNZ(loc_35e96));	// 69791                  jnz     short loc_35E96 ;~ 274D:03E2
cs=0x274d;eip=0x0003e4; 	T(SUB(ah, ah));	// 69792                  sub     ah, ah ;~ 274D:03E4
loc_35e96:
	// 7014 
cs=0x274d;eip=0x0003e6; 	X(OR(byte_4a3a0, ah));	// 69796                  or      byte_4A3A0, ah ;~ 274D:03E6
cs=0x274d;eip=0x0003ea; 	T(bp = si;);	// 69797                  mov     bp, si ;~ 274D:03EA
cs=0x274d;eip=0x0003ec; 	T(TEST(al, 4));	// 69798                  test    al, 4 ;~ 274D:03EC
cs=0x274d;eip=0x0003ee; 	J(JZ(loc_35ea3));	// 69799                  jz      short loc_35EA3 ;~ 274D:03EE
cs=0x274d;eip=0x0003f0; 	T(bp = 0;);	// 69800                  mov     bp, 0 ;~ 274D:03F0
loc_35ea3:
	// 7015 
cs=0x274d;eip=0x0003f3; 	T(TEST(al, 2));	// 69803                  test    al, 2 ;~ 274D:03F3
cs=0x274d;eip=0x0003f5; 	J(JZ(loc_35eab));	// 69804                  jz      short loc_35EAB ;~ 274D:03F5
cs=0x274d;eip=0x0003f7; 	T(bp = word_4d789;);	// 69805                  mov     bp, word_4D789 ;~ 274D:03F7
loc_35eab:
	// 7016 
cs=0x274d;eip=0x0003fb; 	T(TEST(al, 8));	// 69808                  test    al, 8 ;~ 274D:03FB
cs=0x274d;eip=0x0003fd; 	J(JZ(loc_35eb3));	// 69809                  jz      short loc_35EB3 ;~ 274D:03FD
cs=0x274d;eip=0x0003ff; 	T(ax = 0;);	// 69810                  mov     ax, 0 ;~ 274D:03FF
cs=0x274d;eip=0x000402; 	J(RETN(0));	// 69811                  retn ;~ 274D:0402
loc_35eb3:
	// 7017 
cs=0x274d;eip=0x000403; 	T(TEST(al, 1));	// 69815                  test    al, 1 ;~ 274D:0403
cs=0x274d;eip=0x000405; 	J(JZ(loc_35ebb));	// 69816                  jz      short loc_35EBB ;~ 274D:0405
cs=0x274d;eip=0x000407; 	T(ax = word_4d787;);	// 69817                  mov     ax, word_4D787 ;~ 274D:0407
cs=0x274d;eip=0x00040a; 	J(RETN(0));	// 69818                  retn ;~ 274D:040A
loc_35ebb:
	// 7018 
cs=0x274d;eip=0x00040b; 	T(ax = bx;);	// 69822                  mov     ax, bx ;~ 274D:040B
cs=0x274d;eip=0x00040d; 	J(RETN(0));	// 69823                  retn ;~ 274D:040D

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
cs=0x274d;eip=0x00040e; 	T(al = byte_4a3a0;);	// 69835                  mov     al, byte_4A3A0 ;~ 274D:040E
cs=0x274d;eip=0x000411; 	T(OR(al, al));	// 69836                  or      al, al ;~ 274D:0411
cs=0x274d;eip=0x000413; 	J(JNZ(loc_35ec8));	// 69837                  jnz     short loc_35EC8 ;~ 274D:0413
cs=0x274d;eip=0x000415; 	J(return seg35ab_550_proc(m2c::kloc_3603a, _state););	// 69838                  jmp     loc_3603A ;~ 274D:0415
loc_35ec8:
	// 7019 
cs=0x274d;eip=0x000418; 	T(bp = 0x20;);	// 69842                  mov     bp, 20h ; ' ' ;~ 274D:0418
loc_35ecb:
	// 7020 
cs=0x274d;eip=0x00041b; 	X(word_4a3a1 = bx;);	// 69845                  mov     word_4A3A1, bx ;~ 274D:041B
cs=0x274d;eip=0x00041f; 	X(word_4a3a3 = cx;);	// 69846                  mov     word_4A3A3, cx ;~ 274D:041F
cs=0x274d;eip=0x000423; 	X(word_4a3a5 = si;);	// 69847                  mov     word_4A3A5, si ;~ 274D:0423
cs=0x274d;eip=0x000427; 	X(word_4a3a7 = dx;);	// 69848                  mov     word_4A3A7, dx ;~ 274D:0427
loc_35edb:
	// 7021 
cs=0x274d;eip=0x00042b; 	T(ADD(bx, word_4a396));	// 69851                  add     bx, word_4A396 ;~ 274D:042B
cs=0x274d;eip=0x00042f; 	T(ADC(cx, word_4a398));	// 69852                  adc     cx, word_4A398 ;~ 274D:042F
cs=0x274d;eip=0x000433; 	T(SAR(cx, 1));	// 69853                  sar     cx, 1 ;~ 274D:0433
cs=0x274d;eip=0x000435; 	T(RCR(bx, 1));	// 69854                  rcr     bx, 1 ;~ 274D:0435
cs=0x274d;eip=0x000437; 	T(ADD(si, word_4a39a));	// 69855                  add     si, word_4A39A ;~ 274D:0437
cs=0x274d;eip=0x00043b; 	T(ADC(dx, word_4a39c));	// 69856                  adc     dx, word_4A39C ;~ 274D:043B
cs=0x274d;eip=0x00043f; 	T(SAR(dx, 1));	// 69857                  sar     dx, 1 ;~ 274D:043F
cs=0x274d;eip=0x000441; 	T(RCR(si, 1));	// 69858                  rcr     si, 1 ;~ 274D:0441
cs=0x274d;eip=0x000443; 	J(CALL(sub_35de4,0));	// 69859                  call    sub_35DE4 ;~ 274D:0443
cs=0x274d;eip=0x000446; 	J(JNZ(locret_35f22));	// 69860                  jnz     short locret_35F22 ;~ 274D:0446
cs=0x274d;eip=0x000448; 	T(DEC(bp));	// 69861                  dec     bp ;~ 274D:0448
cs=0x274d;eip=0x000449; 	J(JZ(loc_35f23));	// 69862                  jz      short loc_35F23 ;~ 274D:0449
cs=0x274d;eip=0x00044b; 	J(CALL(sub_35e33,0));	// 69863                  call    sub_35E33 ;~ 274D:044B
cs=0x274d;eip=0x00044e; 	J(JNZ(loc_35ecb));	// 69864                  jnz     short loc_35ECB ;~ 274D:044E
cs=0x274d;eip=0x000450; 	X(word_4a396 = bx;);	// 69865                  mov     word_4A396, bx ;~ 274D:0450
cs=0x274d;eip=0x000454; 	X(word_4a398 = cx;);	// 69866                  mov     word_4A398, cx ;~ 274D:0454
cs=0x274d;eip=0x000458; 	X(word_4a39a = si;);	// 69867                  mov     word_4A39A, si ;~ 274D:0458
cs=0x274d;eip=0x00045c; 	X(word_4a39c = dx;);	// 69868                  mov     word_4A39C, dx ;~ 274D:045C
cs=0x274d;eip=0x000460; 	T(bx = word_4a3a1;);	// 69869                  mov     bx, word_4A3A1 ;~ 274D:0460
cs=0x274d;eip=0x000464; 	T(cx = word_4a3a3;);	// 69870                  mov     cx, word_4A3A3 ;~ 274D:0464
cs=0x274d;eip=0x000468; 	T(si = word_4a3a5;);	// 69871                  mov     si, word_4A3A5 ;~ 274D:0468
cs=0x274d;eip=0x00046c; 	T(dx = word_4a3a7;);	// 69872                  mov     dx, word_4A3A7 ;~ 274D:046C
cs=0x274d;eip=0x000470; 	J(JMP(loc_35edb));	// 69873                  jmp     short loc_35EDB ;~ 274D:0470
locret_35f22:
	// 7022 
cs=0x274d;eip=0x000472; 	J(RETN(0));	// 69877                  retn ;~ 274D:0472
loc_35f23:
	// 7023 
cs=0x274d;eip=0x000473; 	T(bx = word_4a396;);	// 69881                  mov     bx, word_4A396 ;~ 274D:0473
cs=0x274d;eip=0x000477; 	T(cx = word_4a398;);	// 69882                  mov     cx, word_4A398 ;~ 274D:0477
cs=0x274d;eip=0x00047b; 	T(si = word_4a39a;);	// 69883                  mov     si, word_4A39A ;~ 274D:047B
cs=0x274d;eip=0x00047f; 	T(dx = word_4a39c;);	// 69884                  mov     dx, word_4A39C ;~ 274D:047F
cs=0x274d;eip=0x000483; 	J(RETN(0));	// 69885                  retn ;~ 274D:0483

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
cs=0x274d;eip=0x000484; 	T(al = byte_4a3a0;);	// 69896                  mov     al, byte_4A3A0 ;~ 274D:0484
cs=0x274d;eip=0x000487; 	T(OR(al, al));	// 69897                  or      al, al ;~ 274D:0487
cs=0x274d;eip=0x000489; 	J(JNZ(loc_35f3e));	// 69898                  jnz     short loc_35F3E ;~ 274D:0489
cs=0x274d;eip=0x00048b; 	J(return seg35ab_550_proc(m2c::kloc_36000, _state););	// 69899                  jmp     loc_36000 ;~ 274D:048B
loc_35f3e:
	// 7024 
cs=0x274d;eip=0x00048e; 	T(bp = 0x20;);	// 69903                  mov     bp, 20h ; ' ' ;~ 274D:048E
loc_35f41:
	// 7025 
cs=0x274d;eip=0x000491; 	X(word_4a3a1 = bx;);	// 69906                  mov     word_4A3A1, bx ;~ 274D:0491
cs=0x274d;eip=0x000495; 	X(word_4a3a3 = cx;);	// 69907                  mov     word_4A3A3, cx ;~ 274D:0495
cs=0x274d;eip=0x000499; 	X(word_4a3a5 = si;);	// 69908                  mov     word_4A3A5, si ;~ 274D:0499
cs=0x274d;eip=0x00049d; 	X(word_4a3a7 = dx;);	// 69909                  mov     word_4A3A7, dx ;~ 274D:049D
loc_35f51:
	// 7026 
cs=0x274d;eip=0x0004a1; 	T(ADD(bx, word_4a396));	// 69912                  add     bx, word_4A396 ;~ 274D:04A1
cs=0x274d;eip=0x0004a5; 	T(ADC(cx, word_4a398));	// 69913                  adc     cx, word_4A398 ;~ 274D:04A5
cs=0x274d;eip=0x0004a9; 	T(SAR(cx, 1));	// 69914                  sar     cx, 1 ;~ 274D:04A9
cs=0x274d;eip=0x0004ab; 	T(RCR(bx, 1));	// 69915                  rcr     bx, 1 ;~ 274D:04AB
cs=0x274d;eip=0x0004ad; 	T(ADD(si, word_4a39a));	// 69916                  add     si, word_4A39A ;~ 274D:04AD
cs=0x274d;eip=0x0004b1; 	T(ADC(dx, word_4a39c));	// 69917                  adc     dx, word_4A39C ;~ 274D:04B1
cs=0x274d;eip=0x0004b5; 	T(SAR(dx, 1));	// 69918                  sar     dx, 1 ;~ 274D:04B5
cs=0x274d;eip=0x0004b7; 	T(RCR(si, 1));	// 69919                  rcr     si, 1 ;~ 274D:04B7
cs=0x274d;eip=0x0004b9; 	J(CALL(sub_35e33,0));	// 69920                  call    sub_35E33 ;~ 274D:04B9
cs=0x274d;eip=0x0004bc; 	J(JZ(loc_35f9f));	// 69921                  jz      short loc_35F9F ;~ 274D:04BC
cs=0x274d;eip=0x0004be; 	T(DEC(bp));	// 69922                  dec     bp ;~ 274D:04BE
cs=0x274d;eip=0x0004bf; 	J(JZ(loc_35f9f));	// 69923                  jz      short loc_35F9F ;~ 274D:04BF
cs=0x274d;eip=0x0004c1; 	T(TEST(byte_4a39e, al));	// 69924                  test    byte_4A39E, al ;~ 274D:04C1
cs=0x274d;eip=0x0004c5; 	J(JZ(loc_35f41));	// 69925                  jz      short loc_35F41 ;~ 274D:04C5
cs=0x274d;eip=0x0004c7; 	T(TEST(byte_4a39f, al));	// 69926                  test    byte_4A39F, al ;~ 274D:04C7
cs=0x274d;eip=0x0004cb; 	J(JNZ(loc_35f9f));	// 69927                  jnz     short loc_35F9F ;~ 274D:04CB
cs=0x274d;eip=0x0004cd; 	X(word_4a396 = bx;);	// 69928                  mov     word_4A396, bx ;~ 274D:04CD
cs=0x274d;eip=0x0004d1; 	X(word_4a398 = cx;);	// 69929                  mov     word_4A398, cx ;~ 274D:04D1
cs=0x274d;eip=0x0004d5; 	X(word_4a39a = si;);	// 69930                  mov     word_4A39A, si ;~ 274D:04D5
cs=0x274d;eip=0x0004d9; 	X(word_4a39c = dx;);	// 69931                  mov     word_4A39C, dx ;~ 274D:04D9
cs=0x274d;eip=0x0004dd; 	T(bx = word_4a3a1;);	// 69932                  mov     bx, word_4A3A1 ;~ 274D:04DD
cs=0x274d;eip=0x0004e1; 	T(cx = word_4a3a3;);	// 69933                  mov     cx, word_4A3A3 ;~ 274D:04E1
cs=0x274d;eip=0x0004e5; 	T(si = word_4a3a5;);	// 69934                  mov     si, word_4A3A5 ;~ 274D:04E5
cs=0x274d;eip=0x0004e9; 	T(dx = word_4a3a7;);	// 69935                  mov     dx, word_4A3A7 ;~ 274D:04E9
cs=0x274d;eip=0x0004ed; 	J(JMP(loc_35f51));	// 69936                  jmp     short loc_35F51 ;~ 274D:04ED
loc_35f9f:
	// 7027 
cs=0x274d;eip=0x0004ef; 	T(OR(al, al));	// 69941                  or      al, al ;~ 274D:04EF
cs=0x274d;eip=0x0004f1; 	J(RETN(0));	// 69942                  retn ;~ 274D:04F1

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
cs=0x274d;eip=0x0004f2; 	T(CMP(bx, 0));	// 69950                  cmp     bx, 0 ;~ 274D:04F2
cs=0x274d;eip=0x0004f5; 	J(JZ(loc_35fbb));	// 69951                  jz      short loc_35FBB ;~ 274D:04F5
cs=0x274d;eip=0x0004f7; 	T(CMP(bx, word_4d787));	// 69952                  cmp     bx, word_4D787 ;~ 274D:04F7
cs=0x274d;eip=0x0004fb; 	J(JZ(loc_35fbb));	// 69953                  jz      short loc_35FBB ;~ 274D:04FB
cs=0x274d;eip=0x0004fd; 	T(CMP(si, 0));	// 69954                  cmp     si, 0 ;~ 274D:04FD
cs=0x274d;eip=0x000500; 	J(JZ(loc_35fcc));	// 69955                  jz      short loc_35FCC ;~ 274D:0500
cs=0x274d;eip=0x000502; 	T(CMP(si, word_4d789));	// 69956                  cmp     si, word_4D789 ;~ 274D:0502
cs=0x274d;eip=0x000506; 	J(JZ(loc_35fcc));	// 69957                  jz      short loc_35FCC ;~ 274D:0506
cs=0x274d;eip=0x000508; 	T(SUB(ax, ax));	// 69958                  sub     ax, ax ;~ 274D:0508
cs=0x274d;eip=0x00050a; 	J(RETN(0));	// 69959                  retn ;~ 274D:050A
loc_35fbb:
	// 7028 
cs=0x274d;eip=0x00050b; 	T(SUB(ax, ax));	// 69964                  sub     ax, ax ;~ 274D:050B
cs=0x274d;eip=0x00050d; 	T(CMP(si, 0));	// 69965                  cmp     si, 0 ;~ 274D:050D
cs=0x274d;eip=0x000510; 	J(JL(loc_35fc9));	// 69966                  jl      short loc_35FC9 ;~ 274D:0510
cs=0x274d;eip=0x000512; 	T(CMP(si, word_4d789));	// 69967                  cmp     si, word_4D789 ;~ 274D:0512
cs=0x274d;eip=0x000516; 	J(JG(loc_35fc9));	// 69968                  jg      short loc_35FC9 ;~ 274D:0516
cs=0x274d;eip=0x000518; 	T(INC(ax));	// 69969                  inc     ax ;~ 274D:0518
loc_35fc9:
	// 7029 
cs=0x274d;eip=0x000519; 	T(OR(ax, ax));	// 69973                  or      ax, ax ;~ 274D:0519
cs=0x274d;eip=0x00051b; 	J(RETN(0));	// 69974                  retn ;~ 274D:051B
loc_35fcc:
	// 7030 
cs=0x274d;eip=0x00051c; 	T(SUB(ax, ax));	// 69979                  sub     ax, ax ;~ 274D:051C
cs=0x274d;eip=0x00051e; 	T(CMP(bx, 0));	// 69980                  cmp     bx, 0 ;~ 274D:051E
cs=0x274d;eip=0x000521; 	J(JL(loc_35fda));	// 69981                  jl      short loc_35FDA ;~ 274D:0521
cs=0x274d;eip=0x000523; 	T(CMP(bx, word_4d787));	// 69982                  cmp     bx, word_4D787 ;~ 274D:0523
cs=0x274d;eip=0x000527; 	J(JG(loc_35fda));	// 69983                  jg      short loc_35FDA ;~ 274D:0527
cs=0x274d;eip=0x000529; 	T(INC(ax));	// 69984                  inc     ax ;~ 274D:0529
loc_35fda:
	// 7031 
cs=0x274d;eip=0x00052a; 	T(OR(ax, ax));	// 69988                  or      ax, ax ;~ 274D:052A
cs=0x274d;eip=0x00052c; 	J(RETN(0));	// 69989                  retn ;~ 274D:052C

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
cs=0x274d;eip=0x00052d; 	T(al = 0x0C;);	// 69998                  mov     al, 0Ch ;~ 274D:052D
cs=0x274d;eip=0x00052f; 	T(CMP(bx, 0));	// 69999                  cmp     bx, 0 ;~ 274D:052F
cs=0x274d;eip=0x000532; 	J(JL(loc_35fee));	// 70000                  jl      short loc_35FEE ;~ 274D:0532
cs=0x274d;eip=0x000534; 	T(XOR(al, 9));	// 70001                  xor     al, 9 ;~ 274D:0534
cs=0x274d;eip=0x000536; 	T(CMP(bx, word_4d787));	// 70002                  cmp     bx, word_4D787 ;~ 274D:0536
cs=0x274d;eip=0x00053a; 	J(JG(loc_35fee));	// 70003                  jg      short loc_35FEE ;~ 274D:053A
cs=0x274d;eip=0x00053c; 	T(XOR(al, 1));	// 70004                  xor     al, 1 ;~ 274D:053C
loc_35fee:
	// 7032 
cs=0x274d;eip=0x00053e; 	T(CMP(si, 0));	// 70008                  cmp     si, 0 ;~ 274D:053E
cs=0x274d;eip=0x000541; 	J(JL(loc_35ffd));	// 70009                  jl      short loc_35FFD ;~ 274D:0541
cs=0x274d;eip=0x000543; 	T(XOR(al, 6));	// 70010                  xor     al, 6 ;~ 274D:0543
cs=0x274d;eip=0x000545; 	T(CMP(si, word_4d789));	// 70011                  cmp     si, word_4D789 ;~ 274D:0545
cs=0x274d;eip=0x000549; 	J(JG(loc_35ffd));	// 70012                  jg      short loc_35FFD ;~ 274D:0549
cs=0x274d;eip=0x00054b; 	T(XOR(al, 2));	// 70013                  xor     al, 2 ;~ 274D:054B
loc_35ffd:
	// 7033 
cs=0x274d;eip=0x00054d; 	T(OR(al, al));	// 70017                  or      al, al ;~ 274D:054D
cs=0x274d;eip=0x00054f; 	J(RETN(0));	// 70018                  retn ;~ 274D:054F

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
	// 7034 
cs=0x274d;eip=0x000550; 	X(PUSH(di));	// 70025                  push    di ;~ 274D:0550
cs=0x274d;eip=0x000551; 	T(cx = word_4a396;);	// 70026                  mov     cx, word_4A396 ;~ 274D:0551
cs=0x274d;eip=0x000555; 	T(dx = word_4a39a;);	// 70027                  mov     dx, word_4A39A ;~ 274D:0555
cs=0x274d;eip=0x000559; 	T(bp = 0x10;);	// 70028                  mov     bp, 10h ;~ 274D:0559
loc_3600c:
	// 7035 
cs=0x274d;eip=0x00055c; 	T(di = bx;);	// 70031                  mov     di, bx ;~ 274D:055C
cs=0x274d;eip=0x00055e; 	T(es = si;);	// 70032                  mov     es, si ;~ 274D:055E
loc_36010:
	// 7036 
cs=0x274d;eip=0x000560; 	T(ADD(bx, cx));	// 70036                  add     bx, cx ;~ 274D:0560
cs=0x274d;eip=0x000562; 	T(SAR(bx, 1));	// 70037                  sar     bx, 1 ;~ 274D:0562
cs=0x274d;eip=0x000564; 	T(ADD(si, dx));	// 70038                  add     si, dx ;~ 274D:0564
cs=0x274d;eip=0x000566; 	T(SAR(si, 1));	// 70039                  sar     si, 1 ;~ 274D:0566
cs=0x274d;eip=0x000568; 	J(CALL(sub_35fdd,0));	// 70040                  call    sub_35FDD ;~ 274D:0568
cs=0x274d;eip=0x00056b; 	J(JZ(loc_36036));	// 70041                  jz      short loc_36036 ;~ 274D:056B
cs=0x274d;eip=0x00056d; 	T(DEC(bp));	// 70042                  dec     bp ;~ 274D:056D
cs=0x274d;eip=0x00056e; 	J(JZ(loc_36036));	// 70043                  jz      short loc_36036 ;~ 274D:056E
cs=0x274d;eip=0x000570; 	T(TEST(byte_4a39e, al));	// 70044                  test    byte_4A39E, al ;~ 274D:0570
cs=0x274d;eip=0x000574; 	J(JZ(loc_3600c));	// 70045                  jz      short loc_3600C ;~ 274D:0574
cs=0x274d;eip=0x000576; 	T(TEST(byte_4a39f, al));	// 70046                  test    byte_4A39F, al ;~ 274D:0576
cs=0x274d;eip=0x00057a; 	J(JNZ(loc_36036));	// 70047                  jnz     short loc_36036 ;~ 274D:057A
cs=0x274d;eip=0x00057c; 	T(cx = bx;);	// 70049                  mov     cx, bx ;~ 274D:057C
cs=0x274d;eip=0x00057e; 	T(dx = si;);	// 70050                  mov     dx, si ;~ 274D:057E
cs=0x274d;eip=0x000580; 	T(bx = di;);	// 70051                  mov     bx, di ;~ 274D:0580
cs=0x274d;eip=0x000582; 	T(si = es;);	// 70052                  mov     si, es ;~ 274D:0582
cs=0x274d;eip=0x000584; 	J(JMP(loc_36010));	// 70053                  jmp     short loc_36010 ;~ 274D:0584
loc_36036:
	// 7037 
cs=0x274d;eip=0x000586; 	X(POP(di));	// 70058                  pop     di ;~ 274D:0586
cs=0x274d;eip=0x000587; 	T(OR(al, al));	// 70059                  or      al, al ;~ 274D:0587
cs=0x274d;eip=0x000589; 	J(RETN(0));	// 70060                  retn ;~ 274D:0589
loc_3603a:
	// 7038 
cs=0x274d;eip=0x00058a; 	X(PUSH(di));	// 70066                  push    di ;~ 274D:058A
cs=0x274d;eip=0x00058b; 	T(cx = word_4a396;);	// 70067                  mov     cx, word_4A396 ;~ 274D:058B
cs=0x274d;eip=0x00058f; 	T(dx = word_4a39a;);	// 70068                  mov     dx, word_4A39A ;~ 274D:058F
cs=0x274d;eip=0x000593; 	T(bp = 0x10;);	// 70069                  mov     bp, 10h ;~ 274D:0593
loc_36046:
	// 7039 
cs=0x274d;eip=0x000596; 	T(di = bx;);	// 70072                  mov     di, bx ;~ 274D:0596
cs=0x274d;eip=0x000598; 	T(es = si;);	// 70073                  mov     es, si ;~ 274D:0598
loc_3604a:
	// 7040 
cs=0x274d;eip=0x00059a; 	T(ADD(bx, cx));	// 70077                  add     bx, cx ;~ 274D:059A
cs=0x274d;eip=0x00059c; 	T(SAR(bx, 1));	// 70078                  sar     bx, 1 ;~ 274D:059C
cs=0x274d;eip=0x00059e; 	T(ADD(si, dx));	// 70079                  add     si, dx ;~ 274D:059E
cs=0x274d;eip=0x0005a0; 	T(SAR(si, 1));	// 70080                  sar     si, 1 ;~ 274D:05A0
cs=0x274d;eip=0x0005a2; 	J(CALL(sub_35fa2,0));	// 70081                  call    sub_35FA2 ;~ 274D:05A2
cs=0x274d;eip=0x0005a5; 	J(JNZ(loc_36069));	// 70082                  jnz     short loc_36069 ;~ 274D:05A5
cs=0x274d;eip=0x0005a7; 	T(DEC(bp));	// 70083                  dec     bp ;~ 274D:05A7
cs=0x274d;eip=0x0005a8; 	J(JZ(loc_3606b));	// 70084                  jz      short loc_3606B ;~ 274D:05A8
cs=0x274d;eip=0x0005aa; 	J(CALL(sub_35fdd,0));	// 70085                  call    sub_35FDD ;~ 274D:05AA
cs=0x274d;eip=0x0005ad; 	J(JNZ(loc_36046));	// 70086                  jnz     short loc_36046 ;~ 274D:05AD
cs=0x274d;eip=0x0005af; 	T(cx = bx;);	// 70087                  mov     cx, bx ;~ 274D:05AF
cs=0x274d;eip=0x0005b1; 	T(dx = si;);	// 70088                  mov     dx, si ;~ 274D:05B1
cs=0x274d;eip=0x0005b3; 	T(bx = di;);	// 70089                  mov     bx, di ;~ 274D:05B3
cs=0x274d;eip=0x0005b5; 	T(si = es;);	// 70090                  mov     si, es ;~ 274D:05B5
cs=0x274d;eip=0x0005b7; 	J(JMP(loc_3604a));	// 70091                  jmp     short loc_3604A ;~ 274D:05B7
loc_36069:
	// 7041 
cs=0x274d;eip=0x0005b9; 	X(POP(di));	// 70095                  pop     di ;~ 274D:05B9
cs=0x274d;eip=0x0005ba; 	J(RETN(0));	// 70096                  retn ;~ 274D:05BA
loc_3606b:
	// 7042 
cs=0x274d;eip=0x0005bb; 	T(bx = cx;);	// 70100                  mov     bx, cx ;~ 274D:05BB
cs=0x274d;eip=0x0005bd; 	T(si = dx;);	// 70101                  mov     si, dx ;~ 274D:05BD
cs=0x274d;eip=0x0005bf; 	X(POP(di));	// 70102                  pop     di ;~ 274D:05BF
cs=0x274d;eip=0x0005c0; 	J(RETN(0));	// 70103                  retn ;~ 274D:05C0
ret_274d_5c2:
	// 7043 
cs=0x274d;eip=0x0005c2; 	X(PUSH(bp));	// 70108                  push    bp ;~ 274D:05C2
cs=0x274d;eip=0x0005c3; 	T(bp = sp;);	// 70109                  mov     bp, sp ;~ 274D:05C3
cs=0x274d;eip=0x0005c5; 	X(PUSH(si));	// 70110                  push    si ;~ 274D:05C5
cs=0x274d;eip=0x0005c6; 	X(PUSH(di));	// 70111                  push    di ;~ 274D:05C6
cs=0x274d;eip=0x0005c7; 	T(MOV(si, *(dw*)(raddr(ss,bp+4))));	// 70112                  mov     si, [bp+4] ;~ 274D:05C7
cs=0x274d;eip=0x0005ca; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 70113                  mov     ax, [bp+6] ;~ 274D:05CA
cs=0x274d;eip=0x0005cd; 	T(es = ax;);	// 70114                  mov     es, ax ;~ 274D:05CD
cs=0x274d;eip=0x0005cf; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 70115                  mov     di, [bp+8] ;~ 274D:05CF
cs=0x274d;eip=0x0005d2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0A))));	// 70116                  mov     bx, [bp+0Ah] ;~ 274D:05D2
cs=0x274d;eip=0x0005d5; 	J(CALL(sub_3608c,0));	// 70117                  call    sub_3608C ;~ 274D:05D5
cs=0x274d;eip=0x0005d8; 	X(POP(di));	// 70118                  pop     di ;~ 274D:05D8
cs=0x274d;eip=0x0005d9; 	X(POP(si));	// 70119                  pop     si ;~ 274D:05D9
cs=0x274d;eip=0x0005da; 	X(POP(bp));	// 70120                  pop     bp ;~ 274D:05DA
cs=0x274d;eip=0x0005db; 	J(RETN(0));	// 70121                  retn ;~ 274D:05DB

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_3600c: 	goto loc_3600c;
        case m2c::kloc_36010: 	goto loc_36010;
        case m2c::kloc_36036: 	goto loc_36036;
        case m2c::kloc_3603a: 	goto loc_3603a;
        case m2c::kloc_36046: 	goto loc_36046;
        case m2c::kloc_3604a: 	goto loc_3604a;
        case m2c::kloc_36069: 	goto loc_36069;
        case m2c::kloc_3606b: 	goto loc_3606b;
        case m2c::kret_274d_5c2: 	goto ret_274d_5c2;
        case m2c::kseg35ab_550_proc: 	goto seg35ab_550_proc;
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
cs=0x274d;eip=0x0005dc; 	X(word_4a3c0 = bx;);	// 70129                  mov     word_4A3C0, bx ;~ 274D:05DC
cs=0x274d;eip=0x0005e0; 	T(SUB(bp, bp));	// 70130                  sub     bp, bp ;~ 274D:05E0
cs=0x274d;eip=0x0005e2; 	T(MOV(al, *(raddr(es,si))));	// 70131                  mov     al, es:[si] ;~ 274D:05E2
cs=0x274d;eip=0x0005e5; 	T(INC(si));	// 70132                  inc     si ;~ 274D:05E5
cs=0x274d;eip=0x0005e6; 	T(SUB(ah, ah));	// 70133                  sub     ah, ah ;~ 274D:05E6
cs=0x274d;eip=0x0005e8; 	T(cx = ax;);	// 70134                  mov     cx, ax ;~ 274D:05E8
loc_3609a:
	// 7044 
cs=0x274d;eip=0x0005ea; 	T(bx = word_4a3c0;);	// 70137                  mov     bx, word_4A3C0 ;~ 274D:05EA
cs=0x274d;eip=0x0005ee; 	T(ADD(bx, cx));	// 70138                  add     bx, cx ;~ 274D:05EE
cs=0x274d;eip=0x0005f0; 	T(MOV(al, *(raddr(ds,bx))));	// 70139                  mov     al, [bx] ;~ 274D:05F0
cs=0x274d;eip=0x0005f2; 	T(bx = cx;);	// 70140                  mov     bx, cx ;~ 274D:05F2
cs=0x274d;eip=0x0005f4; 	T(SHL(bx, 1));	// 70141                  shl     bx, 1 ;~ 274D:05F4
cs=0x274d;eip=0x0005f6; 	T(SUB(dx, dx));	// 70142                  sub     dx, dx ;~ 274D:05F6
cs=0x274d;eip=0x0005f8; 	T(CMP(al, 0x0FF));	// 70143                  cmp     al, 0FFh ;~ 274D:05F8
cs=0x274d;eip=0x0005fa; 	J(JNZ(loc_360af));	// 70144                  jnz     short loc_360AF ;~ 274D:05FA
cs=0x274d;eip=0x0005fc; 	T(dx = 2;);	// 70145                  mov     dx, 2 ;~ 274D:05FC
loc_360af:
	// 7045 
cs=0x274d;eip=0x0005ff; 	T(CMP(dx, 0));	// 70149                  cmp     dx, 0 ;~ 274D:05FF
cs=0x274d;eip=0x000602; 	J(JZ(loc_360c6));	// 70150                  jz      short loc_360C6 ;~ 274D:0602
cs=0x274d;eip=0x000604; 	T(CMP(dx, 1));	// 70151                  cmp     dx, 1 ;~ 274D:0604
cs=0x274d;eip=0x000607; 	J(JZ(loc_360cc));	// 70152                  jz      short loc_360CC ;~ 274D:0607
cs=0x274d;eip=0x000609; 	T(CMP(dx, 2));	// 70153                  cmp     dx, 2 ;~ 274D:0609
cs=0x274d;eip=0x00060c; 	J(JZ(loc_360d5));	// 70154                  jz      short loc_360D5 ;~ 274D:060C
cs=0x274d;eip=0x00060e; 	T(CMP(dx, 3));	// 70155                  cmp     dx, 3 ;~ 274D:060E
cs=0x274d;eip=0x000611; 	J(JZ(loc_360db));	// 70156                  jz      short loc_360DB ;~ 274D:0611
cs=0x274d;eip=0x000613; 	J(JMP(loc_360e4));	// 70157                  jmp     short loc_360E4 ;~ 274D:0613
loc_360c6:
	// 7046 
cs=0x274d;eip=0x000616; 	T(dx = 1;);	// 70163                  mov     dx, 1 ;~ 274D:0616
cs=0x274d;eip=0x000619; 	J(JMP(loc_36108));	// 70164                  jmp     short loc_36108 ;~ 274D:0619
loc_360cc:
	// 7047 
cs=0x274d;eip=0x00061c; 	X(MOV(*(raddr(ds,di)), cl));	// 70170                  mov     [di], cl ;~ 274D:061C
cs=0x274d;eip=0x00061e; 	T(INC(di));	// 70171                  inc     di ;~ 274D:061E
cs=0x274d;eip=0x00061f; 	T(dx = 4;);	// 70172                  mov     dx, 4 ;~ 274D:061F
cs=0x274d;eip=0x000622; 	J(JMP(loc_360fc));	// 70173                  jmp     short loc_360FC ;~ 274D:0622
loc_360d5:
	// 7048 
cs=0x274d;eip=0x000625; 	T(dx = 3;);	// 70179                  mov     dx, 3 ;~ 274D:0625
cs=0x274d;eip=0x000628; 	J(JMP(loc_360fc));	// 70180                  jmp     short loc_360FC ;~ 274D:0628
loc_360db:
	// 7049 
cs=0x274d;eip=0x00062b; 	X(MOV(*(raddr(ds,di)), cl));	// 70186                  mov     [di], cl ;~ 274D:062B
cs=0x274d;eip=0x00062d; 	T(INC(di));	// 70187                  inc     di ;~ 274D:062D
cs=0x274d;eip=0x00062e; 	T(dx = 4;);	// 70188                  mov     dx, 4 ;~ 274D:062E
cs=0x274d;eip=0x000631; 	J(JMP(loc_36108));	// 70189                  jmp     short loc_36108 ;~ 274D:0631
loc_360e4:
	// 7050 
cs=0x274d;eip=0x000634; 	T(SUB(bp, 1));	// 70195                  sub     bp, 1 ;~ 274D:0634
cs=0x274d;eip=0x000637; 	J(JS(loc_360f8));	// 70196                  js      short loc_360F8 ;~ 274D:0637
cs=0x274d;eip=0x000639; 	X(POP(ax));	// 70197                  pop     ax ;~ 274D:0639
cs=0x274d;eip=0x00063a; 	T(dl = al;);	// 70198                  mov     dl, al ;~ 274D:063A
cs=0x274d;eip=0x00063c; 	T(SUB(dh, dh));	// 70199                  sub     dh, dh ;~ 274D:063C
cs=0x274d;eip=0x00063e; 	T(cl = ah;);	// 70200                  mov     cl, ah ;~ 274D:063E
cs=0x274d;eip=0x000640; 	T(SUB(ch, ch));	// 70201                  sub     ch, ch ;~ 274D:0640
cs=0x274d;eip=0x000642; 	T(bx = cx;);	// 70202                  mov     bx, cx ;~ 274D:0642
cs=0x274d;eip=0x000644; 	T(SHL(bx, 1));	// 70203                  shl     bx, 1 ;~ 274D:0644
cs=0x274d;eip=0x000646; 	J(JMP(loc_360af));	// 70204                  jmp     short loc_360AF ;~ 274D:0646
loc_360f8:
	// 7051 
cs=0x274d;eip=0x000648; 	X(MOV(*(raddr(ds,di)), 0x0FF));	// 70208                  mov     byte ptr [di], 0FFh ;~ 274D:0648
cs=0x274d;eip=0x00064b; 	J(RETN(0));	// 70209                  retn ;~ 274D:064B
loc_360fc:
	// 7052 
cs=0x274d;eip=0x00064c; 	T(MOV(al, *(raddr(es,bx+si))));	// 70214                  mov     al, es:[bx+si] ;~ 274D:064C
cs=0x274d;eip=0x00064f; 	T(CMP(al, 0x0FF));	// 70215                  cmp     al, 0FFh ;~ 274D:064F
cs=0x274d;eip=0x000651; 	J(JZ(loc_36106));	// 70216                  jz      short loc_36106 ;~ 274D:0651
cs=0x274d;eip=0x000653; 	J(JMP(loc_36110));	// 70217                  jmp     short loc_36110 ;~ 274D:0653
loc_36106:
	// 7053 
cs=0x274d;eip=0x000656; 	J(JMP(loc_360af));	// 70224                  jmp     short loc_360AF ;~ 274D:0656
loc_36108:
	// 7054 
cs=0x274d;eip=0x000658; 	T(MOV(al, *(raddr(es,bx+si+1))));	// 70229                  mov     al, es:[bx+si+1] ;~ 274D:0658
cs=0x274d;eip=0x00065c; 	T(CMP(al, 0x0FF));	// 70230                  cmp     al, 0FFh ;~ 274D:065C
cs=0x274d;eip=0x00065e; 	J(JZ(loc_36106));	// 70231                  jz      short loc_36106 ;~ 274D:065E
loc_36110:
	// 7055 
cs=0x274d;eip=0x000660; 	T(SUB(ah, ah));	// 70234                  sub     ah, ah ;~ 274D:0660
cs=0x274d;eip=0x000662; 	T(XCHG(ax, cx));	// 70235                  xchg    ax, cx ;~ 274D:0662
cs=0x274d;eip=0x000663; 	T(ah = al;);	// 70236                  mov     ah, al ;~ 274D:0663
cs=0x274d;eip=0x000665; 	T(al = dl;);	// 70237                  mov     al, dl ;~ 274D:0665
cs=0x274d;eip=0x000667; 	X(PUSH(ax));	// 70238                  push    ax ;~ 274D:0667
cs=0x274d;eip=0x000668; 	T(INC(bp));	// 70239                  inc     bp ;~ 274D:0668
cs=0x274d;eip=0x000669; 	J(JMP(loc_3609a));	// 70240                  jmp     loc_3609A ;~ 274D:0669

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



 bool _group70(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group70:
    _begin:
sub_3611c:
	// 70249 
#undef arg_0
#define arg_0 6
	// 70251 arg_0           = byte ptr  6 ;~ 274D:066C
cs=0x274d;eip=0x00066c; 	X(PUSH(bp));	// 70253                  push    bp ;~ 274D:066C
cs=0x274d;eip=0x00066d; 	T(bp = sp;);	// 70254                  mov     bp, sp ;~ 274D:066D
cs=0x274d;eip=0x00066f; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 70255                  mov     al, [bp+arg_0] ;~ 274D:066F
cs=0x274d;eip=0x000672; 	X(byte_4a3c6 = al;);	// 70256                  mov     byte_4A3C6, al ;~ 274D:0672
cs=0x274d;eip=0x000675; 	X(PUSH(si));	// 70257                  push    si ;~ 274D:0675
cs=0x274d;eip=0x000676; 	X(PUSH(di));	// 70258                  push    di ;~ 274D:0676
cs=0x274d;eip=0x000677; 	J(CALL(sub_3612e,0));	// 70259                  call    sub_3612E ;~ 274D:0677
seg35ab_67a_proc:
	// 70263 
cs=0x274d;eip=0x00067a; 	X(POP(di));	// 70263                  pop     di ;~ 274D:067A
cs=0x274d;eip=0x00067b; 	X(POP(si));	// 70264                  pop     si ;~ 274D:067B
cs=0x274d;eip=0x00067c; 	X(POP(bp));	// 70265                  pop     bp ;~ 274D:067C
cs=0x274d;eip=0x00067d; 	J(RETF(0));	// 70266                  retf ;~ 274D:067D

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



 bool _group71(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group71:
    _begin:
sub_3612e:
	// 70272 
cs=0x274d;eip=0x00067e; 	T(ax = word_4a4a2;);	// 70273                  mov     ax, word_4A4A2 ;~ 274D:067E
cs=0x274d;eip=0x000681; 	T(NEG(ax));	// 70274                  neg     ax ;~ 274D:0681
cs=0x274d;eip=0x000683; 	X(word_4a3c4 = ax;);	// 70275                  mov     word_4A3C4, ax ;~ 274D:0683
cs=0x274d;eip=0x000686; 	T(ax = word_4a49e;);	// 70276                  mov     ax, word_4A49E ;~ 274D:0686
cs=0x274d;eip=0x000689; 	T(CWD);	// 70277                  cwd ;~ 274D:0689
cs=0x274d;eip=0x00068a; 	T(dl = ah;);	// 70278                  mov     dl, ah ;~ 274D:068A
cs=0x274d;eip=0x00068c; 	T(ah = al;);	// 70279                  mov     ah, al ;~ 274D:068C
cs=0x274d;eip=0x00068e; 	T(SUB(al, al));	// 70280                  sub     al, al ;~ 274D:068E
cs=0x274d;eip=0x000690; 	T(cx = word_4a4a0;);	// 70281                  mov     cx, word_4A4A0 ;~ 274D:0690
cs=0x274d;eip=0x000694; 	T(CMP(cx, 0x1F0B));	// 70282                  cmp     cx, 1F0Bh ;~ 274D:0694
cs=0x274d;eip=0x000698; 	J(JG(loc_36150));	// 70283                  jg      short loc_36150 ;~ 274D:0698
cs=0x274d;eip=0x00069a; 	T(ax = 0x3FF;);	// 70284                  mov     ax, 3FFh ;~ 274D:069A
cs=0x274d;eip=0x00069d; 	J(JMP(loc_3616e));	// 70285                  jmp     short loc_3616E ;~ 274D:069D
loc_36150:
	// 7056 
cs=0x274d;eip=0x0006a0; 	T(IDIV2(cx));	// 70291                  idiv    cx ;~ 274D:06A0
cs=0x274d;eip=0x0006a2; 	T(CMP(*(byte_4f20c), 2));	// 70292                  cmp     byte_4F20C, 2 ;~ 274D:06A2
cs=0x274d;eip=0x0006a7; 	J(JNZ(loc_3616e));	// 70293                  jnz     short loc_3616E ;~ 274D:06A7
cs=0x274d;eip=0x0006a9; 	T(dl = *(db*)(((db*)&word_4a498)+1););	// 70294                  mov     dl, byte ptr word_4A498+1 ;~ 274D:06A9
cs=0x274d;eip=0x0006ad; 	T(SUB(dh, dh));	// 70295                  sub     dh, dh ;~ 274D:06AD
cs=0x274d;eip=0x0006af; 	T(cx = dx;);	// 70296                  mov     cx, dx ;~ 274D:06AF
cs=0x274d;eip=0x0006b1; 	T(SHR(cx, 1));	// 70297                  shr     cx, 1 ;~ 274D:06B1
cs=0x274d;eip=0x0006b3; 	T(ADD(dx, cx));	// 70298                  add     dx, cx ;~ 274D:06B3
cs=0x274d;eip=0x0006b5; 	T(cl = 3;);	// 70299                  mov     cl, 3 ;~ 274D:06B5
cs=0x274d;eip=0x0006b7; 	T(SHR(dx, cl));	// 70300                  shr     dx, cl ;~ 274D:06B7
cs=0x274d;eip=0x0006b9; 	T(ADD(dx, 4));	// 70301                  add     dx, 4 ;~ 274D:06B9
cs=0x274d;eip=0x0006bc; 	T(SUB(ax, dx));	// 70302                  sub     ax, dx ;~ 274D:06BC
loc_3616e:
	// 7057 
cs=0x274d;eip=0x0006be; 	T(CMP(*(db*)(&word_4e73e), 0));	// 70306                  cmp     byte ptr word_4E73E, 0 ;~ 274D:06BE
cs=0x274d;eip=0x0006c3; 	J(JZ(loc_3617b));	// 70307                  jz      short loc_3617B ;~ 274D:06C3
cs=0x274d;eip=0x0006c5; 	T(cl = *(db*)(&word_4e73e););	// 70308                  mov     cl, byte ptr word_4E73E ;~ 274D:06C5
cs=0x274d;eip=0x0006c9; 	T(SHL(ax, cl));	// 70309                  shl     ax, cl ;~ 274D:06C9
loc_3617b:
	// 7058 
cs=0x274d;eip=0x0006cb; 	T(CMP(byte_4de54, 0));	// 70312                  cmp     byte_4DE54, 0 ;~ 274D:06CB
cs=0x274d;eip=0x0006d0; 	J(JZ(loc_36184));	// 70313                  jz      short loc_36184 ;~ 274D:06D0
cs=0x274d;eip=0x0006d2; 	T(SAR(ax, 1));	// 70314                  sar     ax, 1 ;~ 274D:06D2
loc_36184:
	// 7059 
cs=0x274d;eip=0x0006d4; 	T(bp = ax;);	// 70317                  mov     bp, ax ;~ 274D:06D4
cs=0x274d;eip=0x0006d6; 	X(IMUL1_2(word_4a3c4));	// 70318                  imul    word_4A3C4 ;~ 274D:06D6
cs=0x274d;eip=0x0006da; 	T(SHL(ax, 1));	// 70319                  shl     ax, 1 ;~ 274D:06DA
cs=0x274d;eip=0x0006dc; 	T(RCL(dx, 1));	// 70320                  rcl     dx, 1 ;~ 274D:06DC
cs=0x274d;eip=0x0006de; 	T(bx = ax;);	// 70321                  mov     bx, ax ;~ 274D:06DE
cs=0x274d;eip=0x0006e0; 	T(cx = dx;);	// 70322                  mov     cx, dx ;~ 274D:06E0
cs=0x274d;eip=0x0006e2; 	T(ax = word_48bbc;);	// 70323                  mov     ax, word_48BBC ;~ 274D:06E2
cs=0x274d;eip=0x0006e5; 	T(SHL(ax, 1));	// 70324                  shl     ax, 1 ;~ 274D:06E5
cs=0x274d;eip=0x0006e7; 	X(IMUL1_2(word_4a4a4));	// 70325                  imul    word_4A4A4 ;~ 274D:06E7
cs=0x274d;eip=0x0006eb; 	T(SHL(ax, 1));	// 70326                  shl     ax, 1 ;~ 274D:06EB
cs=0x274d;eip=0x0006ed; 	T(RCL(dx, 1));	// 70327                  rcl     dx, 1 ;~ 274D:06ED
cs=0x274d;eip=0x0006ef; 	T(si = ax;);	// 70328                  mov     si, ax ;~ 274D:06EF
cs=0x274d;eip=0x0006f1; 	T(di = dx;);	// 70329                  mov     di, dx ;~ 274D:06F1
cs=0x274d;eip=0x0006f3; 	T(SUB(ax, bx));	// 70330                  sub     ax, bx ;~ 274D:06F3
cs=0x274d;eip=0x0006f5; 	T(SBB(dx, cx));	// 70331                  sbb     dx, cx ;~ 274D:06F5
cs=0x274d;eip=0x0006f7; 	T(SHL(ax, 1));	// 70332                  shl     ax, 1 ;~ 274D:06F7
cs=0x274d;eip=0x0006f9; 	T(ADC(dx, word_48bbc));	// 70333                  adc     dx, word_48BBC ;~ 274D:06F9
cs=0x274d;eip=0x0006fd; 	X(word_4d78d = dx;);	// 70334                  mov     word_4D78D, dx ;~ 274D:06FD
cs=0x274d;eip=0x000701; 	T(ADD(bx, si));	// 70335                  add     bx, si ;~ 274D:0701
cs=0x274d;eip=0x000703; 	T(ADC(cx, di));	// 70336                  adc     cx, di ;~ 274D:0703
cs=0x274d;eip=0x000705; 	T(SHL(bx, 1));	// 70337                  shl     bx, 1 ;~ 274D:0705
cs=0x274d;eip=0x000707; 	T(ADC(cx, 0));	// 70338                  adc     cx, 0 ;~ 274D:0707
cs=0x274d;eip=0x00070a; 	T(dx = word_48bbc;);	// 70339                  mov     dx, word_48BBC ;~ 274D:070A
cs=0x274d;eip=0x00070e; 	T(SUB(dx, cx));	// 70340                  sub     dx, cx ;~ 274D:070E
cs=0x274d;eip=0x000710; 	X(word_4d78f = dx;);	// 70341                  mov     word_4D78F, dx ;~ 274D:0710
cs=0x274d;eip=0x000714; 	T(ax = bp;);	// 70342                  mov     ax, bp ;~ 274D:0714
cs=0x274d;eip=0x000716; 	X(IMUL1_2(word_4a4a4));	// 70343                  imul    word_4A4A4 ;~ 274D:0716
cs=0x274d;eip=0x00071a; 	T(SHL(ax, 1));	// 70344                  shl     ax, 1 ;~ 274D:071A
cs=0x274d;eip=0x00071c; 	T(RCL(dx, 1));	// 70345                  rcl     dx, 1 ;~ 274D:071C
cs=0x274d;eip=0x00071e; 	T(si = ax;);	// 70346                  mov     si, ax ;~ 274D:071E
cs=0x274d;eip=0x000720; 	T(di = dx;);	// 70347                  mov     di, dx ;~ 274D:0720
cs=0x274d;eip=0x000722; 	T(ax = word_48bbc;);	// 70348                  mov     ax, word_48BBC ;~ 274D:0722
cs=0x274d;eip=0x000725; 	T(SHL(ax, 1));	// 70349                  shl     ax, 1 ;~ 274D:0725
cs=0x274d;eip=0x000727; 	X(IMUL1_2(word_4a3c4));	// 70350                  imul    word_4A3C4 ;~ 274D:0727
cs=0x274d;eip=0x00072b; 	T(SHL(ax, 1));	// 70351                  shl     ax, 1 ;~ 274D:072B
cs=0x274d;eip=0x00072d; 	T(RCL(dx, 1));	// 70352                  rcl     dx, 1 ;~ 274D:072D
cs=0x274d;eip=0x00072f; 	T(bx = ax;);	// 70353                  mov     bx, ax ;~ 274D:072F
cs=0x274d;eip=0x000731; 	T(cx = dx;);	// 70354                  mov     cx, dx ;~ 274D:0731
cs=0x274d;eip=0x000733; 	T(SUB(ax, si));	// 70355                  sub     ax, si ;~ 274D:0733
cs=0x274d;eip=0x000735; 	T(SBB(dx, di));	// 70356                  sbb     dx, di ;~ 274D:0735
cs=0x274d;eip=0x000737; 	T(SHL(ax, 1));	// 70357                  shl     ax, 1 ;~ 274D:0737
cs=0x274d;eip=0x000739; 	T(ADC(dx, 0));	// 70358                  adc     dx, 0 ;~ 274D:0739
cs=0x274d;eip=0x00073c; 	T(ax = dx;);	// 70359                  mov     ax, dx ;~ 274D:073C
cs=0x274d;eip=0x00073e; 	T(SAR(ax, 1));	// 70360                  sar     ax, 1 ;~ 274D:073E
cs=0x274d;eip=0x000740; 	T(SAR(ax, 1));	// 70361                  sar     ax, 1 ;~ 274D:0740
cs=0x274d;eip=0x000742; 	T(SUB(dx, ax));	// 70362                  sub     dx, ax ;~ 274D:0742
cs=0x274d;eip=0x000744; 	T(ADD(dx, *(word_48bbe)));	// 70363                  add     dx, word_48BBE ;~ 274D:0744
cs=0x274d;eip=0x000748; 	X(word_4d793 = dx;);	// 70364                  mov     word_4D793, dx ;~ 274D:0748
cs=0x274d;eip=0x00074c; 	T(ADD(si, bx));	// 70365                  add     si, bx ;~ 274D:074C
cs=0x274d;eip=0x00074e; 	T(ADC(di, cx));	// 70366                  adc     di, cx ;~ 274D:074E
cs=0x274d;eip=0x000750; 	T(SHL(si, 1));	// 70367                  shl     si, 1 ;~ 274D:0750
cs=0x274d;eip=0x000752; 	T(ADC(di, 0));	// 70368                  adc     di, 0 ;~ 274D:0752
cs=0x274d;eip=0x000755; 	T(si = di;);	// 70369                  mov     si, di ;~ 274D:0755
cs=0x274d;eip=0x000757; 	T(SAR(si, 1));	// 70370                  sar     si, 1 ;~ 274D:0757
cs=0x274d;eip=0x000759; 	T(SAR(si, 1));	// 70371                  sar     si, 1 ;~ 274D:0759
cs=0x274d;eip=0x00075b; 	T(SUB(di, si));	// 70372                  sub     di, si ;~ 274D:075B
cs=0x274d;eip=0x00075d; 	T(dx = *(word_48bbe););	// 70373                  mov     dx, word_48BBE ;~ 274D:075D
cs=0x274d;eip=0x000761; 	T(SUB(dx, di));	// 70374                  sub     dx, di ;~ 274D:0761
cs=0x274d;eip=0x000763; 	X(word_4d791 = dx;);	// 70375                  mov     word_4D791, dx ;~ 274D:0763
cs=0x274d;eip=0x000767; 	X(word_4a3c8 = 0;);	// 70376                  mov     word_4A3C8, 0 ;~ 274D:0767
cs=0x274d;eip=0x00076d; 	T(ah = byte_4a3c6;);	// 70377                  mov     ah, byte_4A3C6 ;~ 274D:076D
cs=0x274d;eip=0x000771; 	J(CALLF(sub_49a3e,0));	// 70378                  call    far ptr sub_49A3E ;~ 274D:0771
seg35ab_776_proc:
	// 70382 
cs=0x274d;eip=0x000776; 	J(CALL(sub_37950,0));	// 70382                  call    sub_37950 ;~ 274D:0776
cs=0x274d;eip=0x000779; 	J(CALL(sub_37766,0));	// 70383                  call    sub_37766 ;~ 274D:0779
cs=0x274d;eip=0x00077c; 	J(JNC(loc_36272));	// 70384                  jnb     short loc_36272 ;~ 274D:077C
loc_3622e:
	// 7060 
cs=0x274d;eip=0x00077e; 	T(CMP(word_4a49e, 0));	// 70388                  cmp     word_4A49E, 0 ;~ 274D:077E
cs=0x274d;eip=0x000783; 	J(JS(loc_36248));	// 70389                  js      short loc_36248 ;~ 274D:0783
cs=0x274d;eip=0x000785; 	T(ah = byte_4a3c7;);	// 70390                  mov     ah, byte_4A3C7 ;~ 274D:0785
cs=0x274d;eip=0x000789; 	J(CALLF(sub_49a3e,0));	// 70391                  call    far ptr sub_49A3E ;~ 274D:0789
cs=0x274d;eip=0x00078e; 	T(CMP(*(byte_4f20c), 2));	// 70393                  cmp     byte_4F20C, 2 ;~ 274D:078E
cs=0x274d;eip=0x000793; 	J(JNZ(loc_36248));	// 70394                  jnz     short loc_36248 ;~ 274D:0793
cs=0x274d;eip=0x000795; 	J(JMP(loc_3632e));	// 70395                  jmp     loc_3632E ;~ 274D:0795
loc_36248:
	// 7061 
cs=0x274d;eip=0x000798; 	T(SUB(si, si));	// 70400                  sub     si, si ;~ 274D:0798
cs=0x274d;eip=0x00079a; 	T(di = si;);	// 70401                  mov     di, si ;~ 274D:079A
cs=0x274d;eip=0x00079c; 	T(dx = word_4d789;);	// 70402                  mov     dx, word_4D789 ;~ 274D:079C
cs=0x274d;eip=0x0007a0; 	J(CALL(sub_37986,0));	// 70403                  call    sub_37986 ;~ 274D:07A0
cs=0x274d;eip=0x0007a3; 	T(si = word_4d787;);	// 70404                  mov     si, word_4D787 ;~ 274D:07A3
cs=0x274d;eip=0x0007a7; 	T(SUB(di, di));	// 70405                  sub     di, di ;~ 274D:07A7
cs=0x274d;eip=0x0007a9; 	T(dx = word_4d789;);	// 70406                  mov     dx, word_4D789 ;~ 274D:07A9
cs=0x274d;eip=0x0007ad; 	J(CALL(sub_37986,0));	// 70407                  call    sub_37986 ;~ 274D:07AD
cs=0x274d;eip=0x0007b0; 	T(ax = word_4db09;);	// 70408                  mov     ax, word_4DB09 ;~ 274D:07B0
cs=0x274d;eip=0x0007b3; 	T(cx = word_4db0b;);	// 70409                  mov     cx, word_4DB0B ;~ 274D:07B3
cs=0x274d;eip=0x0007b7; 	T(bx = 0x4CB5;);	// 70410                  mov     bx, 4CB5h ;~ 274D:07B7
cs=0x274d;eip=0x0007ba; 	J(CALLF(sub_49a57,0));	// 70411                  call    far ptr sub_49A57 ;~ 274D:07BA
cs=0x274d;eip=0x0007bf; 	J(JMP(loc_3632e));	// 70413                  jmp     loc_3632E ;~ 274D:07BF
loc_36272:
	// 7062 
cs=0x274d;eip=0x0007c2; 	T(ax = word_4d791;);	// 70417                  mov     ax, word_4D791 ;~ 274D:07C2
cs=0x274d;eip=0x0007c5; 	T(CMP(ax, word_4d793));	// 70418                  cmp     ax, word_4D793 ;~ 274D:07C5
cs=0x274d;eip=0x0007c9; 	J(JNZ(loc_36285));	// 70419                  jnz     short loc_36285 ;~ 274D:07C9
cs=0x274d;eip=0x0007cb; 	T(OR(ax, ax));	// 70420                  or      ax, ax ;~ 274D:07CB
cs=0x274d;eip=0x0007cd; 	J(JZ(loc_3622e));	// 70421                  jz      short loc_3622E ;~ 274D:07CD
cs=0x274d;eip=0x0007cf; 	T(CMP(ax, word_4d789));	// 70422                  cmp     ax, word_4D789 ;~ 274D:07CF
cs=0x274d;eip=0x0007d3; 	J(JZ(loc_3622e));	// 70423                  jz      short loc_3622E ;~ 274D:07D3
loc_36285:
	// 7063 
cs=0x274d;eip=0x0007d5; 	X(PUSH(word_4d78d));	// 70427                  push    word_4D78D ;~ 274D:07D5
cs=0x274d;eip=0x0007d9; 	X(PUSH(word_4d791));	// 70428                  push    word_4D791 ;~ 274D:07D9
cs=0x274d;eip=0x0007dd; 	X(PUSH(word_4d78f));	// 70429                  push    word_4D78F ;~ 274D:07DD
cs=0x274d;eip=0x0007e1; 	X(PUSH(word_4d793));	// 70430                  push    word_4D793 ;~ 274D:07E1
cs=0x274d;eip=0x0007e5; 	J(CALL(sub_37ad8,0));	// 70431                  call    sub_37AD8 ;~ 274D:07E5
cs=0x274d;eip=0x0007e8; 	X(POP(word_4d793));	// 70432                  pop     word_4D793 ;~ 274D:07E8
cs=0x274d;eip=0x0007ec; 	X(POP(word_4d78f));	// 70433                  pop     word_4D78F ;~ 274D:07EC
cs=0x274d;eip=0x0007f0; 	X(POP(word_4d791));	// 70434                  pop     word_4D791 ;~ 274D:07F0
cs=0x274d;eip=0x0007f4; 	X(POP(word_4d78d));	// 70435                  pop     word_4D78D ;~ 274D:07F4
cs=0x274d;eip=0x0007f8; 	T(SUB(ax, ax));	// 70436                  sub     ax, ax ;~ 274D:07F8
cs=0x274d;eip=0x0007fa; 	T(si = word_4a3c8;);	// 70437                  mov     si, word_4A3C8 ;~ 274D:07FA
cs=0x274d;eip=0x0007fe; 	T(XOR(si, word_4a3c4));	// 70438                  xor     si, word_4A3C4 ;~ 274D:07FE
cs=0x274d;eip=0x000802; 	J(JNS(loc_362b7));	// 70439                  jns     short loc_362B7 ;~ 274D:0802
cs=0x274d;eip=0x000804; 	T(ax = word_4d787;);	// 70440                  mov     ax, word_4D787 ;~ 274D:0804
loc_362b7:
	// 7064 
cs=0x274d;eip=0x000807; 	X(word_4a3c2 = ax;);	// 70443                  mov     word_4A3C2, ax ;~ 274D:0807
cs=0x274d;eip=0x00080a; 	T(SUB(bx, bx));	// 70444                  sub     bx, bx ;~ 274D:080A
cs=0x274d;eip=0x00080c; 	T(bp = word_4d789;);	// 70445                  mov     bp, word_4D789 ;~ 274D:080C
cs=0x274d;eip=0x000810; 	T(si = word_4a3c8;);	// 70446                  mov     si, word_4A3C8 ;~ 274D:0810
cs=0x274d;eip=0x000814; 	T(XOR(si, word_4a4a4));	// 70447                  xor     si, word_4A4A4 ;~ 274D:0814
cs=0x274d;eip=0x000818; 	J(JNS(loc_362cc));	// 70448                  jns     short loc_362CC ;~ 274D:0818
cs=0x274d;eip=0x00081a; 	T(XCHG(bx, bp));	// 70449                  xchg    bx, bp ;~ 274D:081A
loc_362cc:
	// 7065 
cs=0x274d;eip=0x00081c; 	T(si = word_4d78d;);	// 70452                  mov     si, word_4D78D ;~ 274D:081C
cs=0x274d;eip=0x000820; 	T(di = word_4d791;);	// 70453                  mov     di, word_4D791 ;~ 274D:0820
cs=0x274d;eip=0x000824; 	T(CMP(di, bx));	// 70454                  cmp     di, bx ;~ 274D:0824
cs=0x274d;eip=0x000826; 	J(JZ(loc_362e7));	// 70455                  jz      short loc_362E7 ;~ 274D:0826
cs=0x274d;eip=0x000828; 	T(CMP(di, bp));	// 70456                  cmp     di, bp ;~ 274D:0828
cs=0x274d;eip=0x00082a; 	J(JNZ(loc_362e2));	// 70457                  jnz     short loc_362E2 ;~ 274D:082A
cs=0x274d;eip=0x00082c; 	T(di = bp;);	// 70458                  mov     di, bp ;~ 274D:082C
cs=0x274d;eip=0x00082e; 	T(si = word_4a3c2;);	// 70459                  mov     si, word_4A3C2 ;~ 274D:082E
loc_362e2:
	// 7066 
cs=0x274d;eip=0x000832; 	T(dx = bx;);	// 70462                  mov     dx, bx ;~ 274D:0832
cs=0x274d;eip=0x000834; 	J(CALL(sub_37986,0));	// 70463                  call    sub_37986 ;~ 274D:0834
loc_362e7:
	// 7067 
cs=0x274d;eip=0x000837; 	T(si = word_4d78f;);	// 70466                  mov     si, word_4D78F ;~ 274D:0837
cs=0x274d;eip=0x00083b; 	T(di = word_4d793;);	// 70467                  mov     di, word_4D793 ;~ 274D:083B
cs=0x274d;eip=0x00083f; 	T(CMP(di, bx));	// 70468                  cmp     di, bx ;~ 274D:083F
cs=0x274d;eip=0x000841; 	J(JZ(loc_36302));	// 70469                  jz      short loc_36302 ;~ 274D:0841
cs=0x274d;eip=0x000843; 	T(CMP(di, bp));	// 70470                  cmp     di, bp ;~ 274D:0843
cs=0x274d;eip=0x000845; 	J(JNZ(loc_362fd));	// 70471                  jnz     short loc_362FD ;~ 274D:0845
cs=0x274d;eip=0x000847; 	T(di = bp;);	// 70472                  mov     di, bp ;~ 274D:0847
cs=0x274d;eip=0x000849; 	T(si = word_4a3c2;);	// 70473                  mov     si, word_4A3C2 ;~ 274D:0849
loc_362fd:
	// 7068 
cs=0x274d;eip=0x00084d; 	T(dx = bx;);	// 70476                  mov     dx, bx ;~ 274D:084D
cs=0x274d;eip=0x00084f; 	J(CALL(sub_37986,0));	// 70477                  call    sub_37986 ;~ 274D:084F
loc_36302:
	// 7069 
cs=0x274d;eip=0x000852; 	T(ax = word_4db09;);	// 70480                  mov     ax, word_4DB09 ;~ 274D:0852
cs=0x274d;eip=0x000855; 	T(cx = word_4db0b;);	// 70481                  mov     cx, word_4DB0B ;~ 274D:0855
cs=0x274d;eip=0x000859; 	T(bx = 0x4CB5;);	// 70482                  mov     bx, 4CB5h ;~ 274D:0859
cs=0x274d;eip=0x00085c; 	J(CALLF(sub_49a57,0));	// 70483                  call    far ptr sub_49A57 ;~ 274D:085C
cs=0x274d;eip=0x000861; 	T(CMP(*(byte_4f20c), 2));	// 70485                  cmp     byte_4F20C, 2 ;~ 274D:0861
cs=0x274d;eip=0x000866; 	J(JZ(loc_3632e));	// 70486                  jz      short loc_3632E ;~ 274D:0866
cs=0x274d;eip=0x000868; 	X(XOR(word_4a3c8, 0x0FFFF));	// 70487                  xor     word_4A3C8, 0FFFFh ;~ 274D:0868
cs=0x274d;eip=0x00086d; 	J(JZ(loc_3632e));	// 70488                  jz      short loc_3632E ;~ 274D:086D
cs=0x274d;eip=0x00086f; 	T(ah = byte_4a3c7;);	// 70489                  mov     ah, byte_4A3C7 ;~ 274D:086F
cs=0x274d;eip=0x000873; 	J(CALLF(sub_49a3e,0));	// 70490                  call    far ptr sub_49A3E ;~ 274D:0873
cs=0x274d;eip=0x000878; 	J(CALL(sub_37950,0));	// 70492                  call    sub_37950 ;~ 274D:0878
cs=0x274d;eip=0x00087b; 	J(JMP(loc_36285));	// 70493                  jmp     loc_36285 ;~ 274D:087B
loc_3632e:
	// 7070 
cs=0x274d;eip=0x00087e; 	J(CALLF(sub_49a48,0));	// 70498                  call    far ptr sub_49A48 ;~ 274D:087E
cs=0x274d;eip=0x000883; 	J(RETN(0));	// 70500                  retn ;~ 274D:0883

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
	// 70509 arg_0           = dword ptr  6 ;~ 274D:0884
#undef arg_4
#define arg_4 0x0A
	// 70510 arg_4           = word ptr  0Ah ;~ 274D:0884
#undef arg_6
#define arg_6 0x0C
	// 70511 arg_6           = word ptr  0Ch ;~ 274D:0884
#undef arg_8
#define arg_8 0x0E
	// 70512 arg_8           = word ptr  0Eh ;~ 274D:0884
#undef arg_a
#define arg_a 0x10
	// 70513 arg_A           = word ptr  10h ;~ 274D:0884
#undef arg_c
#define arg_c 0x12
	// 70514 arg_C           = word ptr  12h ;~ 274D:0884
#undef arg_e
#define arg_e 0x14
	// 70515 arg_E           = word ptr  14h ;~ 274D:0884
cs=0x274d;eip=0x000884; 	X(PUSH(bp));	// 70517                  push    bp ;~ 274D:0884
cs=0x274d;eip=0x000885; 	T(bp = sp;);	// 70518                  mov     bp, sp ;~ 274D:0885
cs=0x274d;eip=0x000887; 	X(PUSH(si));	// 70519                  push    si ;~ 274D:0887
cs=0x274d;eip=0x000888; 	X(PUSH(di));	// 70520                  push    di ;~ 274D:0888
cs=0x274d;eip=0x000889; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 70521                  mov     ax, [bp+arg_4] ;~ 274D:0889
cs=0x274d;eip=0x00088c; 	X(word_4a476 = ax;);	// 70522                  mov     word_4A476, ax ;~ 274D:088C
cs=0x274d;eip=0x00088f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 70523                  mov     ax, [bp+arg_6] ;~ 274D:088F
cs=0x274d;eip=0x000892; 	X(word_4a478 = ax;);	// 70524                  mov     word_4A478, ax ;~ 274D:0892
cs=0x274d;eip=0x000895; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 70525                  mov     ax, [bp+arg_8] ;~ 274D:0895
cs=0x274d;eip=0x000898; 	X(word_4a47a = ax;);	// 70526                  mov     word_4A47A, ax ;~ 274D:0898
cs=0x274d;eip=0x00089b; 	T(LES(si, *(dd*)(raddr(ss,bp+arg_0))));	// 70527                  les     si, [bp+arg_0] ;~ 274D:089B
cs=0x274d;eip=0x00089e; 	X(*(dw*)(&dword_4a46c) = si;);	// 70529                  mov     word ptr dword_4A46C, si ;~ 274D:089E
cs=0x274d;eip=0x0008a2; 	X(*(dw*)(((db*)&dword_4a46c)+2) = es;);	// 70530                  mov     word ptr dword_4A46C+2, es ;~ 274D:08A2
cs=0x274d;eip=0x0008a6; 	X(LODS(*(raddr(es,si)),si,1));	// 70531                  lods    byte ptr es:[si] ;~ 274D:08A6
cs=0x274d;eip=0x0008a8; 	X(*(db*)(&word_4a492) = al;);	// 70532                  mov     byte ptr word_4A492, al ;~ 274D:08A8
cs=0x274d;eip=0x0008ab; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_c))));	// 70533                  mov     bx, [bp+arg_C] ;~ 274D:08AB
cs=0x274d;eip=0x0008ae; 	T(SUB(bx, word_4a496));	// 70534                  sub     bx, word_4A496 ;~ 274D:08AE
cs=0x274d;eip=0x0008b2; 	X(word_4a472 = bx;);	// 70535                  mov     word_4A472, bx ;~ 274D:08B2
cs=0x274d;eip=0x0008b6; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_e))));	// 70536                  mov     cx, [bp+arg_E] ;~ 274D:08B6
cs=0x274d;eip=0x0008b9; 	T(SUB(cx, word_4a498));	// 70537                  sub     cx, word_4A498 ;~ 274D:08B9
cs=0x274d;eip=0x0008bd; 	X(word_4a474 = cx;);	// 70538                  mov     word_4A474, cx ;~ 274D:08BD
cs=0x274d;eip=0x0008c1; 	T(MOV(bp, *(dw*)(raddr(ss,bp+arg_a))));	// 70539                  mov     bp, [bp+arg_A] ;~ 274D:08C1
cs=0x274d;eip=0x0008c4; 	T(SUB(bp, word_4a494));	// 70540                  sub     bp, word_4A494 ;~ 274D:08C4
cs=0x274d;eip=0x0008c8; 	X(word_4a470 = bp;);	// 70541                  mov     word_4A470, bp ;~ 274D:08C8
cs=0x274d;eip=0x0008cc; 	J(CALL(sub_363b8,0));	// 70542                  call    sub_363B8 ;~ 274D:08CC
cs=0x274d;eip=0x0008cf; 	J(JNZ(loc_363b4));	// 70543                  jnz     short loc_363B4 ;~ 274D:08CF
cs=0x274d;eip=0x0008d1; 	J(CALL(sub_364b9,0));	// 70544                  call    sub_364B9 ;~ 274D:08D1
cs=0x274d;eip=0x0008d4; 	T(CMP(si, 1));	// 70545                  cmp     si, 1 ;~ 274D:08D4
cs=0x274d;eip=0x0008d7; 	J(JNZ(loc_36390));	// 70546                  jnz     short loc_36390 ;~ 274D:08D7
cs=0x274d;eip=0x0008d9; 	T(CMP(*(dw*)(byte_4f20c), 2));	// 70547                  cmp     word ptr byte_4F20C, 2 ;~ 274D:08D9
cs=0x274d;eip=0x0008de; 	J(JNZ(loc_363b4));	// 70548                  jnz     short loc_363B4 ;~ 274D:08DE
loc_36390:
	// 7071 
cs=0x274d;eip=0x0008e0; 	T(cl = al;);	// 70551                  mov     cl, al ;~ 274D:08E0
cs=0x274d;eip=0x0008e2; 	T(AND(al, 0x60));	// 70552                  and     al, 60h ;~ 274D:08E2
cs=0x274d;eip=0x0008e4; 	T(CMP(al, 0x60));	// 70553                  cmp     al, 60h ; '`' ;~ 274D:08E4
cs=0x274d;eip=0x0008e6; 	J(JNZ(loc_3639b));	// 70554                  jnz     short loc_3639B ;~ 274D:08E6
cs=0x274d;eip=0x0008e8; 	J(CALL(sub_364e6,0));	// 70555                  call    sub_364E6 ;~ 274D:08E8
loc_3639b:
	// 7072 
cs=0x274d;eip=0x0008eb; 	T(TEST(cl, 0x40));	// 70558                  test    cl, 40h ;~ 274D:08EB
cs=0x274d;eip=0x0008ee; 	J(JNZ(loc_363ab));	// 70559                  jnz     short loc_363AB ;~ 274D:08EE
cs=0x274d;eip=0x0008f0; 	T(ax = word_4a498;);	// 70560                  mov     ax, word_4A498 ;~ 274D:08F0
cs=0x274d;eip=0x0008f3; 	T(NEG(ax));	// 70561                  neg     ax ;~ 274D:08F3
cs=0x274d;eip=0x0008f5; 	T(CMP(ax, word_4a474));	// 70562                  cmp     ax, word_4A474 ;~ 274D:08F5
cs=0x274d;eip=0x0008f9; 	J(JZ(loc_363b1));	// 70563                  jz      short loc_363B1 ;~ 274D:08F9
loc_363ab:
	// 7073 
cs=0x274d;eip=0x0008fb; 	J(CALL(sub_36530,0));	// 70566                  call    sub_36530 ;~ 274D:08FB
cs=0x274d;eip=0x0008fe; 	J(JMP(loc_363b4));	// 70568                  jmp     short loc_363B4 ;~ 274D:08FE
loc_363b1:
	// 7074 
cs=0x274d;eip=0x000901; 	J(CALL(sub_36697,0));	// 70575                  call    sub_36697 ;~ 274D:0901
loc_363b4:
	// 7075 
cs=0x274d;eip=0x000904; 	X(POP(di));	// 70579                  pop     di ;~ 274D:0904
cs=0x274d;eip=0x000905; 	X(POP(si));	// 70580                  pop     si ;~ 274D:0905
cs=0x274d;eip=0x000906; 	X(POP(bp));	// 70581                  pop     bp ;~ 274D:0906
cs=0x274d;eip=0x000907; 	J(RETF(0));	// 70582                  retf ;~ 274D:0907

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
cs=0x274d;eip=0x000908; 	X(PUSH(si));	// 70591                  push    si ;~ 274D:0908
cs=0x274d;eip=0x000909; 	T(ax = word_4a4b2;);	// 70592                  mov     ax, word_4A4B2 ;~ 274D:0909
cs=0x274d;eip=0x00090c; 	T(IMUL1_2(bx));	// 70593                  imul    bx ;~ 274D:090C
cs=0x274d;eip=0x00090e; 	T(di = dx;);	// 70594                  mov     di, dx ;~ 274D:090E
cs=0x274d;eip=0x000910; 	T(si = ax;);	// 70595                  mov     si, ax ;~ 274D:0910
cs=0x274d;eip=0x000912; 	T(ax = word_4a4ac;);	// 70596                  mov     ax, word_4A4AC ;~ 274D:0912
cs=0x274d;eip=0x000915; 	T(IMUL1_2(cx));	// 70597                  imul    cx ;~ 274D:0915
cs=0x274d;eip=0x000917; 	T(ADD(si, ax));	// 70598                  add     si, ax ;~ 274D:0917
cs=0x274d;eip=0x000919; 	T(ADC(di, dx));	// 70599                  adc     di, dx ;~ 274D:0919
cs=0x274d;eip=0x00091b; 	T(ax = word_4a4a6;);	// 70600                  mov     ax, word_4A4A6 ;~ 274D:091B
cs=0x274d;eip=0x00091e; 	T(IMUL1_2(bp));	// 70601                  imul    bp ;~ 274D:091E
cs=0x274d;eip=0x000920; 	T(ADD(si, ax));	// 70602                  add     si, ax ;~ 274D:0920
cs=0x274d;eip=0x000922; 	T(ADC(di, dx));	// 70603                  adc     di, dx ;~ 274D:0922
cs=0x274d;eip=0x000924; 	T(SHL(si, 1));	// 70604                  shl     si, 1 ;~ 274D:0924
cs=0x274d;eip=0x000926; 	T(RCL(di, 1));	// 70605                  rcl     di, 1 ;~ 274D:0926
cs=0x274d;eip=0x000928; 	X(word_4a47c = si;);	// 70606                  mov     word_4A47C, si ;~ 274D:0928
cs=0x274d;eip=0x00092c; 	X(word_4a47e = di;);	// 70607                  mov     word_4A47E, di ;~ 274D:092C
cs=0x274d;eip=0x000930; 	T(ax = word_4a4b4;);	// 70608                  mov     ax, word_4A4B4 ;~ 274D:0930
cs=0x274d;eip=0x000933; 	T(IMUL1_2(bx));	// 70609                  imul    bx ;~ 274D:0933
cs=0x274d;eip=0x000935; 	T(di = dx;);	// 70610                  mov     di, dx ;~ 274D:0935
cs=0x274d;eip=0x000937; 	T(si = ax;);	// 70611                  mov     si, ax ;~ 274D:0937
cs=0x274d;eip=0x000939; 	T(ax = word_4a4ae;);	// 70612                  mov     ax, word_4A4AE ;~ 274D:0939
cs=0x274d;eip=0x00093c; 	T(IMUL1_2(cx));	// 70613                  imul    cx ;~ 274D:093C
cs=0x274d;eip=0x00093e; 	T(ADD(si, ax));	// 70614                  add     si, ax ;~ 274D:093E
cs=0x274d;eip=0x000940; 	T(ADC(di, dx));	// 70615                  adc     di, dx ;~ 274D:0940
cs=0x274d;eip=0x000942; 	T(ax = word_4a4a8;);	// 70616                  mov     ax, word_4A4A8 ;~ 274D:0942
cs=0x274d;eip=0x000945; 	T(IMUL1_2(bp));	// 70617                  imul    bp ;~ 274D:0945
cs=0x274d;eip=0x000947; 	T(ADD(si, ax));	// 70618                  add     si, ax ;~ 274D:0947
cs=0x274d;eip=0x000949; 	T(ADC(di, dx));	// 70619                  adc     di, dx ;~ 274D:0949
cs=0x274d;eip=0x00094b; 	T(SHL(si, 1));	// 70620                  shl     si, 1 ;~ 274D:094B
cs=0x274d;eip=0x00094d; 	T(RCL(di, 1));	// 70621                  rcl     di, 1 ;~ 274D:094D
cs=0x274d;eip=0x00094f; 	X(word_4a480 = si;);	// 70622                  mov     word_4A480, si ;~ 274D:094F
cs=0x274d;eip=0x000953; 	X(word_4a482 = di;);	// 70623                  mov     word_4A482, di ;~ 274D:0953
cs=0x274d;eip=0x000957; 	T(ax = word_4a4b6;);	// 70624                  mov     ax, word_4A4B6 ;~ 274D:0957
cs=0x274d;eip=0x00095a; 	T(IMUL1_2(bx));	// 70625                  imul    bx ;~ 274D:095A
cs=0x274d;eip=0x00095c; 	T(di = dx;);	// 70626                  mov     di, dx ;~ 274D:095C
cs=0x274d;eip=0x00095e; 	T(si = ax;);	// 70627                  mov     si, ax ;~ 274D:095E
cs=0x274d;eip=0x000960; 	T(ax = word_4a4b0;);	// 70628                  mov     ax, word_4A4B0 ;~ 274D:0960
cs=0x274d;eip=0x000963; 	T(IMUL1_2(cx));	// 70629                  imul    cx ;~ 274D:0963
cs=0x274d;eip=0x000965; 	T(ADD(si, ax));	// 70630                  add     si, ax ;~ 274D:0965
cs=0x274d;eip=0x000967; 	T(ADC(di, dx));	// 70631                  adc     di, dx ;~ 274D:0967
cs=0x274d;eip=0x000969; 	T(ax = word_4a4aa;);	// 70632                  mov     ax, word_4A4AA ;~ 274D:0969
cs=0x274d;eip=0x00096c; 	T(IMUL1_2(bp));	// 70633                  imul    bp ;~ 274D:096C
cs=0x274d;eip=0x00096e; 	T(ADD(si, ax));	// 70634                  add     si, ax ;~ 274D:096E
cs=0x274d;eip=0x000970; 	T(ADC(di, dx));	// 70635                  adc     di, dx ;~ 274D:0970
cs=0x274d;eip=0x000972; 	T(SHL(si, 1));	// 70636                  shl     si, 1 ;~ 274D:0972
cs=0x274d;eip=0x000974; 	T(RCL(di, 1));	// 70637                  rcl     di, 1 ;~ 274D:0974
cs=0x274d;eip=0x000976; 	X(word_4a484 = si;);	// 70638                  mov     word_4A484, si ;~ 274D:0976
cs=0x274d;eip=0x00097a; 	X(word_4a486 = di;);	// 70639                  mov     word_4A486, di ;~ 274D:097A
cs=0x274d;eip=0x00097e; 	T(CMP(di, *(word_4a3ec)));	// 70640                  cmp     di, word_4A3EC ;~ 274D:097E
cs=0x274d;eip=0x000982; 	J(JG(loc_364b2));	// 70641                  jg      short loc_364B2 ;~ 274D:0982
cs=0x274d;eip=0x000984; 	T(bx = word_4a492;);	// 70642                  mov     bx, word_4A492 ;~ 274D:0984
cs=0x274d;eip=0x000988; 	T(SHL(bx, 1));	// 70643                  shl     bx, 1 ;~ 274D:0988
cs=0x274d;eip=0x00098a; 	T(CMP(di, *(dw*)(raddr(ds,bx+0x191C))));	// 70644                  cmp     di, [bx+191Ch] ;~ 274D:098A
cs=0x274d;eip=0x00098e; 	J(JL(loc_364b2));	// 70645                  jl      short loc_364B2 ;~ 274D:098E
cs=0x274d;eip=0x000990; 	T(si = word_528cc;);	// 70646                  mov     si, word_528CC ;~ 274D:0990
cs=0x274d;eip=0x000994; 	T(bp = word_528d2;);	// 70647                  mov     bp, word_528D2 ;~ 274D:0994
cs=0x274d;eip=0x000998; 	T(ADD(si, bx));	// 70648                  add     si, bx ;~ 274D:0998
cs=0x274d;eip=0x00099a; 	T(ADD(bp, bx));	// 70649                  add     bp, bx ;~ 274D:099A
cs=0x274d;eip=0x00099c; 	T(cl = byte_4de54;);	// 70650                  mov     cl, byte_4DE54 ;~ 274D:099C
cs=0x274d;eip=0x0009a0; 	T(XOR(cl, 1));	// 70651                  xor     cl, 1 ;~ 274D:09A0
cs=0x274d;eip=0x0009a3; 	T(ax = di;);	// 70652                  mov     ax, di ;~ 274D:09A3
cs=0x274d;eip=0x0009a5; 	T(CWD);	// 70653                  cwd ;~ 274D:09A5
cs=0x274d;eip=0x0009a6; 	T(XOR(ax, dx));	// 70654                  xor     ax, dx ;~ 274D:09A6
cs=0x274d;eip=0x0009a8; 	T(SUB(ax, dx));	// 70655                  sub     ax, dx ;~ 274D:09A8
cs=0x274d;eip=0x0009aa; 	T(di = ax;);	// 70656                  mov     di, ax ;~ 274D:09AA
cs=0x274d;eip=0x0009ac; 	T(ADD(ax, *(dw*)(raddr(ds,si))));	// 70657                  add     ax, [si] ;~ 274D:09AC
cs=0x274d;eip=0x0009ae; 	T(SAR(ax, cl));	// 70658                  sar     ax, cl ;~ 274D:09AE
cs=0x274d;eip=0x0009b0; 	T(si = ax;);	// 70659                  mov     si, ax ;~ 274D:09B0
cs=0x274d;eip=0x0009b2; 	T(SAR(si, 1));	// 70660                  sar     si, 1 ;~ 274D:09B2
cs=0x274d;eip=0x0009b4; 	T(SAR(si, 1));	// 70661                  sar     si, 1 ;~ 274D:09B4
cs=0x274d;eip=0x0009b6; 	T(ADD(si, ax));	// 70662                  add     si, ax ;~ 274D:09B6
cs=0x274d;eip=0x0009b8; 	T(ax = word_4a47e;);	// 70663                  mov     ax, word_4A47E ;~ 274D:09B8
cs=0x274d;eip=0x0009bb; 	T(CWD);	// 70664                  cwd ;~ 274D:09BB
cs=0x274d;eip=0x0009bc; 	T(XOR(ax, dx));	// 70665                  xor     ax, dx ;~ 274D:09BC
cs=0x274d;eip=0x0009be; 	T(SUB(ax, dx));	// 70666                  sub     ax, dx ;~ 274D:09BE
cs=0x274d;eip=0x0009c0; 	T(CMP(ax, si));	// 70667                  cmp     ax, si ;~ 274D:09C0
cs=0x274d;eip=0x0009c2; 	J(JG(loc_364b2));	// 70668                  jg      short loc_364B2 ;~ 274D:09C2
cs=0x274d;eip=0x0009c4; 	T(si = ax;);	// 70669                  mov     si, ax ;~ 274D:09C4
cs=0x274d;eip=0x0009c6; 	T(ax = di;);	// 70670                  mov     ax, di ;~ 274D:09C6
cs=0x274d;eip=0x0009c8; 	T(ADD(ax, *(dw*)(raddr(ss,bp+0))));	// 70671                  add     ax, [bp+0] ;~ 274D:09C8
cs=0x274d;eip=0x0009cb; 	T(SAR(ax, cl));	// 70672                  sar     ax, cl ;~ 274D:09CB
cs=0x274d;eip=0x0009cd; 	T(bx = ax;);	// 70673                  mov     bx, ax ;~ 274D:09CD
cs=0x274d;eip=0x0009cf; 	T(CMP(*(db*)(&word_492f2), 0));	// 70674                  cmp     byte ptr word_492F2, 0 ;~ 274D:09CF
cs=0x274d;eip=0x0009d4; 	J(JZ(loc_36490));	// 70675                  jz      short loc_36490 ;~ 274D:09D4
cs=0x274d;eip=0x0009d6; 	T(SAR(bx, 1));	// 70676                  sar     bx, 1 ;~ 274D:09D6
cs=0x274d;eip=0x0009d8; 	T(SAR(bx, 1));	// 70677                  sar     bx, 1 ;~ 274D:09D8
cs=0x274d;eip=0x0009da; 	T(SAR(bx, 1));	// 70678                  sar     bx, 1 ;~ 274D:09DA
cs=0x274d;eip=0x0009dc; 	T(ADD(bx, ax));	// 70679                  add     bx, ax ;~ 274D:09DC
cs=0x274d;eip=0x0009de; 	T(SAR(bx, 1));	// 70680                  sar     bx, 1 ;~ 274D:09DE
loc_36490:
	// 7076 
cs=0x274d;eip=0x0009e0; 	T(ax = word_4a482;);	// 70683                  mov     ax, word_4A482 ;~ 274D:09E0
cs=0x274d;eip=0x0009e3; 	T(CWD);	// 70684                  cwd ;~ 274D:09E3
cs=0x274d;eip=0x0009e4; 	T(XOR(ax, dx));	// 70685                  xor     ax, dx ;~ 274D:09E4
cs=0x274d;eip=0x0009e6; 	T(SUB(ax, dx));	// 70686                  sub     ax, dx ;~ 274D:09E6
cs=0x274d;eip=0x0009e8; 	T(CMP(ax, bx));	// 70687                  cmp     ax, bx ;~ 274D:09E8
cs=0x274d;eip=0x0009ea; 	J(JG(loc_364b2));	// 70688                  jg      short loc_364B2 ;~ 274D:09EA
cs=0x274d;eip=0x0009ec; 	T(ADD(si, ax));	// 70689                  add     si, ax ;~ 274D:09EC
cs=0x274d;eip=0x0009ee; 	T(SAR(si, 1));	// 70690                  sar     si, 1 ;~ 274D:09EE
cs=0x274d;eip=0x0009f0; 	T(SAR(si, 1));	// 70691                  sar     si, 1 ;~ 274D:09F0
cs=0x274d;eip=0x0009f2; 	T(ADD(si, di));	// 70692                  add     si, di ;~ 274D:09F2
cs=0x274d;eip=0x0009f4; 	X(word_4a490 = si;);	// 70693                  mov     word_4A490, si ;~ 274D:09F4
cs=0x274d;eip=0x0009f8; 	T(CMP(si, *(word_4a3ec)));	// 70694                  cmp     si, word_4A3EC ;~ 274D:09F8
cs=0x274d;eip=0x0009fc; 	J(JG(loc_364b2));	// 70695                  jg      short loc_364B2 ;~ 274D:09FC
cs=0x274d;eip=0x0009fe; 	T(SUB(ax, ax));	// 70696                  sub     ax, ax ;~ 274D:09FE
cs=0x274d;eip=0x000a00; 	X(POP(si));	// 70697                  pop     si ;~ 274D:0A00
cs=0x274d;eip=0x000a01; 	J(RETN(0));	// 70698                  retn ;~ 274D:0A01
loc_364b2:
	// 7077 
cs=0x274d;eip=0x000a02; 	T(ax = 1;);	// 70703                  mov     ax, 1 ;~ 274D:0A02
cs=0x274d;eip=0x000a05; 	T(OR(ax, ax));	// 70704                  or      ax, ax ;~ 274D:0A05
cs=0x274d;eip=0x000a07; 	X(POP(si));	// 70705                  pop     si ;~ 274D:0A07
cs=0x274d;eip=0x000a08; 	J(RETN(0));	// 70706                  retn ;~ 274D:0A08

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
cs=0x274d;eip=0x000a09; 	T(MOV(al, *(raddr(es,si))));	// 70715                  mov     al, es:[si] ;~ 274D:0A09
cs=0x274d;eip=0x000a0c; 	T(TEST(al, 0x80));	// 70716                  test    al, 80h ;~ 274D:0A0C
cs=0x274d;eip=0x000a0e; 	J(JZ(locret_364e1));	// 70717                  jz      short locret_364E1 ;~ 274D:0A0E
cs=0x274d;eip=0x000a10; 	T(AND(ax, 7));	// 70718                  and     ax, 7 ;~ 274D:0A10
cs=0x274d;eip=0x000a13; 	T(SHL(ax, 1));	// 70719                  shl     ax, 1 ;~ 274D:0A13
cs=0x274d;eip=0x000a15; 	T(bx = ax;);	// 70720                  mov     bx, ax ;~ 274D:0A15
cs=0x274d;eip=0x000a17; 	T(ax = word_4a490;);	// 70721                  mov     ax, word_4A490 ;~ 274D:0A17
cs=0x274d;eip=0x000a1a; 	T(cl = *(db*)(&word_4e73e););	// 70722                  mov     cl, byte ptr word_4E73E ;~ 274D:0A1A
cs=0x274d;eip=0x000a1e; 	T(SAR(ax, cl));	// 70723                  sar     ax, cl ;~ 274D:0A1E
cs=0x274d;eip=0x000a20; 	T(CMP(ax, *(dw*)(raddr(ds,bx+0x18FC))));	// 70724                  cmp     ax, [bx+18FCh] ;~ 274D:0A20
cs=0x274d;eip=0x000a24; 	J(JLE(loc_364dc));	// 70725                  jle     short loc_364DC ;~ 274D:0A24
cs=0x274d;eip=0x000a26; 	T(ADD(si, *(dw*)(raddr(es,si+1))));	// 70726                  add     si, es:[si+1] ;~ 274D:0A26
cs=0x274d;eip=0x000a2a; 	J(JMP(sub_364b9));	// 70727                  jmp     short sub_364B9 ;~ 274D:0A2A
loc_364dc:
	// 7078 
cs=0x274d;eip=0x000a2c; 	T(ADD(si, 3));	// 70731                  add     si, 3 ;~ 274D:0A2C
cs=0x274d;eip=0x000a2f; 	J(JMP(sub_364b9));	// 70732                  jmp     short sub_364B9 ;~ 274D:0A2F
locret_364e1:
	// 7079 
cs=0x274d;eip=0x000a31; 	J(RETN(0));	// 70736                  retn ;~ 274D:0A31

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



 bool _group72(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group72:
    _begin:
seg35ab_a32_proc:
	// 70740 
cs=0x274d;eip=0x000a32; 	T(LES(si, dword_4a46c));	// 70740                  les     si, dword_4A46C ;~ 274D:0A32
sub_364e6:
	// 70746 
cs=0x274d;eip=0x000a36; 	X(LODS(*(raddr(es,si)),si,1));	// 70747                  lods    byte ptr es:[si] ;~ 274D:0A36
cs=0x274d;eip=0x000a38; 	T(AND(ax, 3));	// 70748                  and     ax, 3 ;~ 274D:0A38
cs=0x274d;eip=0x000a3b; 	T(SHL(ax, 1));	// 70749                  shl     ax, 1 ;~ 274D:0A3B
cs=0x274d;eip=0x000a3d; 	T(bx = ax;);	// 70750                  mov     bx, ax ;~ 274D:0A3D
cs=0x274d;eip=0x000a3f; 	T(ax = word_4a4ea;);	// 70751                  mov     ax, word_4A4EA ;~ 274D:0A3F
cs=0x274d;eip=0x000a42; 	X(MOV(*(dw*)(raddr(ds,bx+0x1994)), ax));	// 70752                  mov     [bx+1994h], ax ;~ 274D:0A42
cs=0x274d;eip=0x000a46; 	J(RETN(0));	// 70753                  retn ;~ 274D:0A46

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
	// 70763 arg_0           = word ptr  6 ;~ 274D:0A47
#undef arg_2
#define arg_2 8
	// 70764 arg_2           = word ptr  8 ;~ 274D:0A47
#undef arg_4
#define arg_4 0x0A
	// 70765 arg_4           = word ptr  0Ah ;~ 274D:0A47
cs=0x274d;eip=0x000a47; 	X(PUSH(bp));	// 70767                  push    bp ;~ 274D:0A47
cs=0x274d;eip=0x000a48; 	T(bp = sp;);	// 70768                  mov     bp, sp ;~ 274D:0A48
cs=0x274d;eip=0x000a4a; 	X(PUSH(di));	// 70769                  push    di ;~ 274D:0A4A
cs=0x274d;eip=0x000a4b; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_4))));	// 70770                  mov     cx, [bp+arg_4] ;~ 274D:0A4B
cs=0x274d;eip=0x000a4e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 70771                  mov     bx, [bp+arg_2] ;~ 274D:0A4E
cs=0x274d;eip=0x000a51; 	T(MOV(bp, *(dw*)(raddr(ss,bp+arg_0))));	// 70772                  mov     bp, [bp+arg_0] ;~ 274D:0A51
cs=0x274d;eip=0x000a54; 	J(CALL(sub_363b8,0));	// 70773                  call    sub_363B8 ;~ 274D:0A54
cs=0x274d;eip=0x000a57; 	X(POP(di));	// 70774                  pop     di ;~ 274D:0A57
cs=0x274d;eip=0x000a58; 	X(POP(bp));	// 70775                  pop     bp ;~ 274D:0A58
cs=0x274d;eip=0x000a59; 	J(RETF(0));	// 70776                  retf ;~ 274D:0A59

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
cs=0x274d;eip=0x000a5a; 	X(PUSH(si));	// 70785                  push    si ;~ 274D:0A5A
cs=0x274d;eip=0x000a5b; 	T(LES(si, dword_4a46c));	// 70786                  les     si, dword_4A46C ;~ 274D:0A5B
cs=0x274d;eip=0x000a5f; 	J(CALL(sub_364b9,0));	// 70788                  call    sub_364B9 ;~ 274D:0A5F
cs=0x274d;eip=0x000a62; 	X(*(dw*)(&dword_4a46c) = si;);	// 70789                  mov     word ptr dword_4A46C, si ;~ 274D:0A62
cs=0x274d;eip=0x000a66; 	X(POP(si));	// 70790                  pop     si ;~ 274D:0A66
cs=0x274d;eip=0x000a67; 	J(RETF(0));	// 70791                  retf ;~ 274D:0A67

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
cs=0x274d;eip=0x000a68; 	X(PUSH(bp));	// 70795                  push    bp ;~ 274D:0A68
cs=0x274d;eip=0x000a69; 	X(PUSH(si));	// 70796                  push    si ;~ 274D:0A69
cs=0x274d;eip=0x000a6a; 	X(PUSH(di));	// 70797                  push    di ;~ 274D:0A6A
cs=0x274d;eip=0x000a6b; 	T(LES(si, dword_4a46c));	// 70798                  les     si, dword_4A46C ;~ 274D:0A6B
cs=0x274d;eip=0x000a6f; 	J(CALL(sub_36530,0));	// 70800                  call    sub_36530 ;~ 274D:0A6F
cs=0x274d;eip=0x000a72; 	X(POP(di));	// 70801                  pop     di ;~ 274D:0A72
cs=0x274d;eip=0x000a73; 	X(POP(si));	// 70802                  pop     si ;~ 274D:0A73
cs=0x274d;eip=0x000a74; 	X(POP(bp));	// 70803                  pop     bp ;~ 274D:0A74
cs=0x274d;eip=0x000a75; 	J(RETN(0));	// 70804                  retn ;~ 274D:0A75

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
cs=0x274d;eip=0x000a76; 	X(PUSH(bp));	// 70810                  push    bp ;~ 274D:0A76
cs=0x274d;eip=0x000a77; 	X(PUSH(si));	// 70811                  push    si ;~ 274D:0A77
cs=0x274d;eip=0x000a78; 	X(PUSH(di));	// 70812                  push    di ;~ 274D:0A78
cs=0x274d;eip=0x000a79; 	J(CALL(sub_36610,0));	// 70813                  call    sub_36610 ;~ 274D:0A79
cs=0x274d;eip=0x000a7c; 	X(POP(di));	// 70815                  pop     di ;~ 274D:0A7C
cs=0x274d;eip=0x000a7d; 	X(POP(si));	// 70816                  pop     si ;~ 274D:0A7D
cs=0x274d;eip=0x000a7e; 	X(POP(bp));	// 70817                  pop     bp ;~ 274D:0A7E
cs=0x274d;eip=0x000a7f; 	J(RETF(0));	// 70818                  retf ;~ 274D:0A7F

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
cs=0x274d;eip=0x000a80; 	X(*(dw*)(&dword_4a46c) = si;);	// 70827                  mov     word ptr dword_4A46C, si ;~ 274D:0A80
cs=0x274d;eip=0x000a84; 	X(*(dw*)(((db*)&dword_4a46c)+2) = es;);	// 70828                  mov     word ptr dword_4A46C+2, es ;~ 274D:0A84
cs=0x274d;eip=0x000a88; 	T(ax = ds;);	// 70829                  mov     ax, ds ;~ 274D:0A88
cs=0x274d;eip=0x000a8a; 	T(es = ax;);	// 70830                  mov     es, ax ;~ 274D:0A8A
cs=0x274d;eip=0x000a8c; 	T(ax = word_4a4dc;);	// 70832                  mov     ax, word_4A4DC ;~ 274D:0A8C
cs=0x274d;eip=0x000a8f; 	T(CMP(ax, 0x23));	// 70833                  cmp     ax, 23h ; '#' ;~ 274D:0A8F
cs=0x274d;eip=0x000a92; 	J(JL(loc_3655c));	// 70834                  jl      short loc_3655C ;~ 274D:0A92
cs=0x274d;eip=0x000a94; 	T(bx = *(_unk_4bd28););	// 70835                  mov     bx, _unk_4BD28 ;~ 274D:0A94
cs=0x274d;eip=0x000a98; 	T(cx = 0x22;);	// 70836                  mov     cx, 22h ; '"' ;~ 274D:0A98
cs=0x274d;eip=0x000a9b; 	T(si = 0x324A;);	// 70837                  mov     si, 324Ah ;~ 274D:0A9B
cs=0x274d;eip=0x000a9e; 	T(di = 0x3248;);	// 70838                  mov     di, 3248h ;~ 274D:0A9E
	// 70839                  rep movsw ;~ 274D:0AA1
cs=0x274d;eip=0x000aa1; 	X(	REP MOVSW);	// 70839                  rep movsw ;~ 274D:0AA1
cs=0x274d;eip=0x000aa3; 	T(di = bx;);	// 70840                  mov     di, bx ;~ 274D:0AA3
cs=0x274d;eip=0x000aa5; 	T(DEC(ax));	// 70841                  dec     ax ;~ 274D:0AA5
cs=0x274d;eip=0x000aa6; 	X(word_4a4dc = ax;);	// 70842                  mov     word_4A4DC, ax ;~ 274D:0AA6
cs=0x274d;eip=0x000aa9; 	J(JMP(loc_36565));	// 70843                  jmp     short loc_36565 ;~ 274D:0AA9
loc_3655c:
	// 7080 
cs=0x274d;eip=0x000aac; 	T(di = 0x2DE8;);	// 70849                  mov     di, 2DE8h ;~ 274D:0AAC
cs=0x274d;eip=0x000aaf; 	T(cl = 5;);	// 70850                  mov     cl, 5 ;~ 274D:0AAF
cs=0x274d;eip=0x000ab1; 	T(SHL(ax, cl));	// 70851                  shl     ax, cl ;~ 274D:0AB1
cs=0x274d;eip=0x000ab3; 	T(ADD(di, ax));	// 70852                  add     di, ax ;~ 274D:0AB3
loc_36565:
	// 7081 
cs=0x274d;eip=0x000ab5; 	T(ax = word_4a484;);	// 70855                  mov     ax, word_4A484 ;~ 274D:0AB5
cs=0x274d;eip=0x000ab8; 	T(dx = word_4a486;);	// 70856                  mov     dx, word_4A486 ;~ 274D:0AB8
cs=0x274d;eip=0x000abc; 	T(cx = *(word_5239c););	// 70857                  mov     cx, word_5239C ;~ 274D:0ABC
cs=0x274d;eip=0x000ac0; 	T(bx = cx;);	// 70858                  mov     bx, cx ;~ 274D:0AC0
cs=0x274d;eip=0x000ac2; 	T(SHL(cx, 1));	// 70859                  shl     cx, 1 ;~ 274D:0AC2
cs=0x274d;eip=0x000ac4; 	T(NEG(cx));	// 70860                  neg     cx ;~ 274D:0AC4
cs=0x274d;eip=0x000ac6; 	T(ADD(cx, 8));	// 70861                  add     cx, 8 ;~ 274D:0AC6
cs=0x274d;eip=0x000ac9; 	J(JZ(loc_36581));	// 70862                  jz      short loc_36581 ;~ 274D:0AC9
loc_3657b:
	// 7082 
cs=0x274d;eip=0x000acb; 	T(SAR(dx, 1));	// 70865                  sar     dx, 1 ;~ 274D:0ACB
cs=0x274d;eip=0x000acd; 	T(RCR(ax, 1));	// 70866                  rcr     ax, 1 ;~ 274D:0ACD
cs=0x274d;eip=0x000acf; 	J(LOOP(loc_3657b));	// 70867                  loop    loc_3657B ;~ 274D:0ACF
loc_36581:
	// 7083 
cs=0x274d;eip=0x000ad1; 	T(CMP(bx, 2));	// 70870                  cmp     bx, 2 ;~ 274D:0AD1
cs=0x274d;eip=0x000ad4; 	J(JNZ(loc_36590));	// 70871                  jnz     short loc_36590 ;~ 274D:0AD4
cs=0x274d;eip=0x000ad6; 	T(CMP(word_4a492, 5));	// 70872                  cmp     word_4A492, 5 ;~ 274D:0AD6
cs=0x274d;eip=0x000adb; 	J(JNZ(loc_36590));	// 70873                  jnz     short loc_36590 ;~ 274D:0ADB
cs=0x274d;eip=0x000add; 	T(ADD(dx, 0x20));	// 70874                  add     dx, 20h ; ' ' ;~ 274D:0ADD
loc_36590:
	// 7084 
cs=0x274d;eip=0x000ae0; 	T(bp = di;);	// 70878                  mov     bp, di ;~ 274D:0AE0
cs=0x274d;eip=0x000ae2; 	X(PUSH(ax));	// 70879                  push    ax ;~ 274D:0AE2
cs=0x274d;eip=0x000ae3; 	X(PUSH(dx));	// 70880                  push    dx ;~ 274D:0AE3
cs=0x274d;eip=0x000ae4; 	X(STOSW);	// 70881                  stosw ;~ 274D:0AE4
cs=0x274d;eip=0x000ae5; 	T(ax = dx;);	// 70882                  mov     ax, dx ;~ 274D:0AE5
cs=0x274d;eip=0x000ae7; 	X(STOSW);	// 70883                  stosw ;~ 274D:0AE7
cs=0x274d;eip=0x000ae8; 	T(ax = *(dw*)(&dword_4a46c););	// 70884                  mov     ax, word ptr dword_4A46C ;~ 274D:0AE8
cs=0x274d;eip=0x000aeb; 	X(STOSW);	// 70885                  stosw ;~ 274D:0AEB
cs=0x274d;eip=0x000aec; 	T(ax = *(dw*)(((db*)&dword_4a46c)+2););	// 70886                  mov     ax, word ptr dword_4A46C+2 ;~ 274D:0AEC
cs=0x274d;eip=0x000aef; 	X(STOSW);	// 70887                  stosw ;~ 274D:0AEF
cs=0x274d;eip=0x000af0; 	T(ax = word_4a470;);	// 70888                  mov     ax, word_4A470 ;~ 274D:0AF0
cs=0x274d;eip=0x000af3; 	X(STOSW);	// 70889                  stosw ;~ 274D:0AF3
cs=0x274d;eip=0x000af4; 	T(ax = word_4a472;);	// 70890                  mov     ax, word_4A472 ;~ 274D:0AF4
cs=0x274d;eip=0x000af7; 	X(STOSW);	// 70891                  stosw ;~ 274D:0AF7
cs=0x274d;eip=0x000af8; 	T(ax = word_4a474;);	// 70892                  mov     ax, word_4A474 ;~ 274D:0AF8
cs=0x274d;eip=0x000afb; 	X(STOSW);	// 70893                  stosw ;~ 274D:0AFB
cs=0x274d;eip=0x000afc; 	T(ax = word_4a476;);	// 70894                  mov     ax, word_4A476 ;~ 274D:0AFC
cs=0x274d;eip=0x000aff; 	X(STOSW);	// 70895                  stosw ;~ 274D:0AFF
cs=0x274d;eip=0x000b00; 	T(ax = word_4a478;);	// 70896                  mov     ax, word_4A478 ;~ 274D:0B00
cs=0x274d;eip=0x000b03; 	X(STOSW);	// 70897                  stosw ;~ 274D:0B03
cs=0x274d;eip=0x000b04; 	T(ax = word_4a47a;);	// 70898                  mov     ax, word_4A47A ;~ 274D:0B04
cs=0x274d;eip=0x000b07; 	X(STOSW);	// 70899                  stosw ;~ 274D:0B07
cs=0x274d;eip=0x000b08; 	T(ax = word_4a47c;);	// 70900                  mov     ax, word_4A47C ;~ 274D:0B08
cs=0x274d;eip=0x000b0b; 	X(STOSW);	// 70901                  stosw ;~ 274D:0B0B
cs=0x274d;eip=0x000b0c; 	T(ax = word_4a47e;);	// 70902                  mov     ax, word_4A47E ;~ 274D:0B0C
cs=0x274d;eip=0x000b0f; 	X(STOSW);	// 70903                  stosw ;~ 274D:0B0F
cs=0x274d;eip=0x000b10; 	T(ax = word_4a480;);	// 70904                  mov     ax, word_4A480 ;~ 274D:0B10
cs=0x274d;eip=0x000b13; 	X(STOSW);	// 70905                  stosw ;~ 274D:0B13
cs=0x274d;eip=0x000b14; 	T(ax = word_4a482;);	// 70906                  mov     ax, word_4A482 ;~ 274D:0B14
cs=0x274d;eip=0x000b17; 	X(STOSW);	// 70907                  stosw ;~ 274D:0B17
cs=0x274d;eip=0x000b18; 	T(ax = word_4a484;);	// 70908                  mov     ax, word_4A484 ;~ 274D:0B18
cs=0x274d;eip=0x000b1b; 	X(STOSW);	// 70909                  stosw ;~ 274D:0B1B
cs=0x274d;eip=0x000b1c; 	T(ax = word_4a486;);	// 70910                  mov     ax, word_4A486 ;~ 274D:0B1C
cs=0x274d;eip=0x000b1f; 	X(STOSW);	// 70911                  stosw ;~ 274D:0B1F
cs=0x274d;eip=0x000b20; 	X(POP(dx));	// 70912                  pop     dx ;~ 274D:0B20
cs=0x274d;eip=0x000b21; 	X(POP(ax));	// 70913                  pop     ax ;~ 274D:0B21
cs=0x274d;eip=0x000b22; 	T(bx = word_4a4dc;);	// 70914                  mov     bx, word_4A4DC ;~ 274D:0B22
cs=0x274d;eip=0x000b26; 	T(SHL(bx, 1));	// 70915                  shl     bx, 1 ;~ 274D:0B26
cs=0x274d;eip=0x000b28; 	T(cx = bx;);	// 70916                  mov     cx, bx ;~ 274D:0B28
loc_365da:
	// 7085 
cs=0x274d;eip=0x000b2a; 	T(SUB(bx, 2));	// 70920                  sub     bx, 2 ;~ 274D:0B2A
cs=0x274d;eip=0x000b2d; 	J(JS(loc_365ee));	// 70921                  js      short loc_365EE ;~ 274D:0B2D
cs=0x274d;eip=0x000b2f; 	T(MOV(di, *(dw*)(raddr(ds,bx+0x3248))));	// 70922                  mov     di, [bx+3248h] ;~ 274D:0B2F
cs=0x274d;eip=0x000b33; 	T(CMP(dx, *(dw*)(raddr(ds,di+2))));	// 70923                  cmp     dx, [di+2] ;~ 274D:0B33
cs=0x274d;eip=0x000b36; 	J(JG(loc_365da));	// 70924                  jg      short loc_365DA ;~ 274D:0B36
cs=0x274d;eip=0x000b38; 	J(JL(loc_365ee));	// 70925                  jl      short loc_365EE ;~ 274D:0B38
cs=0x274d;eip=0x000b3a; 	T(CMP(ax, *(dw*)(raddr(ds,di))));	// 70926                  cmp     ax, [di] ;~ 274D:0B3A
cs=0x274d;eip=0x000b3c; 	J(JA(loc_365da));	// 70927                  ja      short loc_365DA ;~ 274D:0B3C
loc_365ee:
	// 7086 
cs=0x274d;eip=0x000b3e; 	T(SUB(cx, 2));	// 70931                  sub     cx, 2 ;~ 274D:0B3E
cs=0x274d;eip=0x000b41; 	T(di = cx;);	// 70932                  mov     di, cx ;~ 274D:0B41
cs=0x274d;eip=0x000b43; 	T(ADD(di, 0x324A));	// 70933                  add     di, 324Ah ;~ 274D:0B43
cs=0x274d;eip=0x000b47; 	T(si = cx;);	// 70934                  mov     si, cx ;~ 274D:0B47
cs=0x274d;eip=0x000b49; 	T(ADD(si, 0x3248));	// 70935                  add     si, 3248h ;~ 274D:0B49
cs=0x274d;eip=0x000b4d; 	T(SUB(cx, bx));	// 70936                  sub     cx, bx ;~ 274D:0B4D
cs=0x274d;eip=0x000b4f; 	J(JLE(loc_36609));	// 70937                  jle     short loc_36609 ;~ 274D:0B4F
cs=0x274d;eip=0x000b51; 	T(SHR(cx, 1));	// 70938                  shr     cx, 1 ;~ 274D:0B51
cs=0x274d;eip=0x000b53; 	T(CLI);	// 70939                  cli ;~ 274D:0B53
cs=0x274d;eip=0x000b54; 	T(STD);	// 70940                  std ;~ 274D:0B54
	// 70941                  rep movsw ;~ 274D:0B55
cs=0x274d;eip=0x000b55; 	X(	REP MOVSW);	// 70941                  rep movsw ;~ 274D:0B55
cs=0x274d;eip=0x000b57; 	T(CLD);	// 70942                  cld ;~ 274D:0B57
cs=0x274d;eip=0x000b58; 	T(STI);	// 70943                  sti ;~ 274D:0B58
loc_36609:
	// 7087 
cs=0x274d;eip=0x000b59; 	X(MOV(*(dw*)(raddr(ds,di)), bp));	// 70946                  mov     [di], bp ;~ 274D:0B59
cs=0x274d;eip=0x000b5b; 	X(INC(word_4a4dc));	// 70947                  inc     word_4A4DC ;~ 274D:0B5B
cs=0x274d;eip=0x000b5f; 	J(RETN(0));	// 70948                  retn ;~ 274D:0B5F

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
cs=0x274d;eip=0x000b60; 	T(CMP(word_4a4dc, 0));	// 70956                  cmp     word_4A4DC, 0 ;~ 274D:0B60
cs=0x274d;eip=0x000b65; 	J(JZ(locret_3666b));	// 70957                  jz      short locret_3666B ;~ 274D:0B65
cs=0x274d;eip=0x000b67; 	T(si = 0x3246;);	// 70958                  mov     si, 3246h ;~ 274D:0B67
loc_3661a:
	// 7088 
cs=0x274d;eip=0x000b6a; 	T(ADD(si, 2));	// 70961                  add     si, 2 ;~ 274D:0B6A
cs=0x274d;eip=0x000b6d; 	X(PUSH(si));	// 70962                  push    si ;~ 274D:0B6D
cs=0x274d;eip=0x000b6e; 	T(MOV(si, *(dw*)(raddr(ds,si))));	// 70963                  mov     si, [si] ;~ 274D:0B6E
cs=0x274d;eip=0x000b70; 	T(ADD(si, 4));	// 70964                  add     si, 4 ;~ 274D:0B70
cs=0x274d;eip=0x000b73; 	T(LODSW);	// 70965                  lodsw ;~ 274D:0B73
cs=0x274d;eip=0x000b74; 	X(*(dw*)(&dword_4a46c) = ax;);	// 70966                  mov     word ptr dword_4A46C, ax ;~ 274D:0B74
cs=0x274d;eip=0x000b77; 	T(LODSW);	// 70967                  lodsw ;~ 274D:0B77
cs=0x274d;eip=0x000b78; 	X(*(dw*)(((db*)&dword_4a46c)+2) = ax;);	// 70968                  mov     word ptr dword_4A46C+2, ax ;~ 274D:0B78
cs=0x274d;eip=0x000b7b; 	T(LODSW);	// 70969                  lodsw ;~ 274D:0B7B
cs=0x274d;eip=0x000b7c; 	X(word_4a470 = ax;);	// 70970                  mov     word_4A470, ax ;~ 274D:0B7C
cs=0x274d;eip=0x000b7f; 	T(LODSW);	// 70971                  lodsw ;~ 274D:0B7F
cs=0x274d;eip=0x000b80; 	X(word_4a472 = ax;);	// 70972                  mov     word_4A472, ax ;~ 274D:0B80
cs=0x274d;eip=0x000b83; 	T(LODSW);	// 70973                  lodsw ;~ 274D:0B83
cs=0x274d;eip=0x000b84; 	X(word_4a474 = ax;);	// 70974                  mov     word_4A474, ax ;~ 274D:0B84
cs=0x274d;eip=0x000b87; 	T(LODSW);	// 70975                  lodsw ;~ 274D:0B87
cs=0x274d;eip=0x000b88; 	X(word_4a476 = ax;);	// 70976                  mov     word_4A476, ax ;~ 274D:0B88
cs=0x274d;eip=0x000b8b; 	T(LODSW);	// 70977                  lodsw ;~ 274D:0B8B
cs=0x274d;eip=0x000b8c; 	X(word_4a478 = ax;);	// 70978                  mov     word_4A478, ax ;~ 274D:0B8C
cs=0x274d;eip=0x000b8f; 	T(LODSW);	// 70979                  lodsw ;~ 274D:0B8F
cs=0x274d;eip=0x000b90; 	X(word_4a47a = ax;);	// 70980                  mov     word_4A47A, ax ;~ 274D:0B90
cs=0x274d;eip=0x000b93; 	T(LODSW);	// 70981                  lodsw ;~ 274D:0B93
cs=0x274d;eip=0x000b94; 	X(word_4a47c = ax;);	// 70982                  mov     word_4A47C, ax ;~ 274D:0B94
cs=0x274d;eip=0x000b97; 	T(LODSW);	// 70983                  lodsw ;~ 274D:0B97
cs=0x274d;eip=0x000b98; 	X(word_4a47e = ax;);	// 70984                  mov     word_4A47E, ax ;~ 274D:0B98
cs=0x274d;eip=0x000b9b; 	T(LODSW);	// 70985                  lodsw ;~ 274D:0B9B
cs=0x274d;eip=0x000b9c; 	X(word_4a480 = ax;);	// 70986                  mov     word_4A480, ax ;~ 274D:0B9C
cs=0x274d;eip=0x000b9f; 	T(LODSW);	// 70987                  lodsw ;~ 274D:0B9F
cs=0x274d;eip=0x000ba0; 	X(word_4a482 = ax;);	// 70988                  mov     word_4A482, ax ;~ 274D:0BA0
cs=0x274d;eip=0x000ba3; 	T(LODSW);	// 70989                  lodsw ;~ 274D:0BA3
cs=0x274d;eip=0x000ba4; 	X(word_4a484 = ax;);	// 70990                  mov     word_4A484, ax ;~ 274D:0BA4
cs=0x274d;eip=0x000ba7; 	T(LODSW);	// 70991                  lodsw ;~ 274D:0BA7
cs=0x274d;eip=0x000ba8; 	X(word_4a486 = ax;);	// 70992                  mov     word_4A486, ax ;~ 274D:0BA8
cs=0x274d;eip=0x000bab; 	T(LES(si, dword_4a46c));	// 70993                  les     si, dword_4A46C ;~ 274D:0BAB
cs=0x274d;eip=0x000baf; 	J(CALL(sub_36697,0));	// 70995                  call    sub_36697 ;~ 274D:0BAF
cs=0x274d;eip=0x000bb2; 	X(POP(si));	// 70996                  pop     si ;~ 274D:0BB2
cs=0x274d;eip=0x000bb3; 	X(DEC(word_4a4dc));	// 70997                  dec     word_4A4DC ;~ 274D:0BB3
cs=0x274d;eip=0x000bb7; 	J(JZ(locret_3666b));	// 70998                  jz      short locret_3666B ;~ 274D:0BB7
cs=0x274d;eip=0x000bb9; 	J(JMP(loc_3661a));	// 70999                  jmp     short loc_3661A ;~ 274D:0BB9
locret_3666b:
	// 7089 
cs=0x274d;eip=0x000bbb; 	J(RETN(0));	// 71004                  retn ;~ 274D:0BBB

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
cs=0x274d;eip=0x000bbc; 	X(PUSH(bp));	// 71008                  push    bp ;~ 274D:0BBC
cs=0x274d;eip=0x000bbd; 	X(PUSH(si));	// 71009                  push    si ;~ 274D:0BBD
cs=0x274d;eip=0x000bbe; 	X(PUSH(di));	// 71010                  push    di ;~ 274D:0BBE
cs=0x274d;eip=0x000bbf; 	T(LES(si, dword_4a46c));	// 71011                  les     si, dword_4A46C ;~ 274D:0BBF
cs=0x274d;eip=0x000bc3; 	J(CALL(sub_36697,0));	// 71013                  call    sub_36697 ;~ 274D:0BC3
cs=0x274d;eip=0x000bc6; 	X(POP(di));	// 71014                  pop     di ;~ 274D:0BC6
cs=0x274d;eip=0x000bc7; 	X(POP(si));	// 71015                  pop     si ;~ 274D:0BC7
cs=0x274d;eip=0x000bc8; 	X(POP(bp));	// 71016                  pop     bp ;~ 274D:0BC8
cs=0x274d;eip=0x000bc9; 	J(RETN(0));	// 71017                  retn ;~ 274D:0BC9

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
cs=0x274d;eip=0x000bca; 	X(PUSH(bp));	// 71023                  push    bp ;~ 274D:0BCA
cs=0x274d;eip=0x000bcb; 	X(PUSH(si));	// 71024                  push    si ;~ 274D:0BCB
cs=0x274d;eip=0x000bcc; 	X(PUSH(di));	// 71025                  push    di ;~ 274D:0BCC
cs=0x274d;eip=0x000bcd; 	T(cx = word_4a474;);	// 71026                  mov     cx, word_4A474 ;~ 274D:0BCD
cs=0x274d;eip=0x000bd1; 	T(ax = word_4a472;);	// 71027                  mov     ax, word_4A472 ;~ 274D:0BD1
cs=0x274d;eip=0x000bd4; 	T(bp = word_4a470;);	// 71028                  mov     bp, word_4A470 ;~ 274D:0BD4
cs=0x274d;eip=0x000bd8; 	T(LES(si, dword_4a46c));	// 71029                  les     si, dword_4A46C ;~ 274D:0BD8
cs=0x274d;eip=0x000bdc; 	J(CALL(sub_36764,0));	// 71030                  call    sub_36764 ;~ 274D:0BDC
cs=0x274d;eip=0x000bdf; 	X(*(dw*)(&dword_4a46c) = si;);	// 71031                  mov     word ptr dword_4A46C, si ;~ 274D:0BDF
cs=0x274d;eip=0x000be3; 	X(POP(di));	// 71032                  pop     di ;~ 274D:0BE3
cs=0x274d;eip=0x000be4; 	X(POP(si));	// 71033                  pop     si ;~ 274D:0BE4
cs=0x274d;eip=0x000be5; 	X(POP(bp));	// 71034                  pop     bp ;~ 274D:0BE5
cs=0x274d;eip=0x000be6; 	J(RETF(0));	// 71035                  retf ;~ 274D:0BE6

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
cs=0x274d;eip=0x000be7; 	T(ah = byte_48b63;);	// 71048                  mov     ah, byte_48B63 ;~ 274D:0BE7
cs=0x274d;eip=0x000beb; 	T(OR(ah, ah));	// 71049                  or      ah, ah ;~ 274D:0BEB
cs=0x274d;eip=0x000bed; 	J(JZ(loc_366c6));	// 71050                  jz      short loc_366C6 ;~ 274D:0BED
cs=0x274d;eip=0x000bef; 	T(al = *(db*)(((db*)&word_4a486)+1););	// 71051                  mov     al, byte ptr word_4A486+1 ;~ 274D:0BEF
cs=0x274d;eip=0x000bf2; 	T(CBW);	// 71052                  cbw ;~ 274D:0BF2
cs=0x274d;eip=0x000bf3; 	T(NOT(ah));	// 71053                  not     ah ;~ 274D:0BF3
cs=0x274d;eip=0x000bf5; 	T(AND(al, ah));	// 71054                  and     al, ah ;~ 274D:0BF5
cs=0x274d;eip=0x000bf7; 	T(SUB(ah, ah));	// 71055                  sub     ah, ah ;~ 274D:0BF7
cs=0x274d;eip=0x000bf9; 	T(SHR(ax, 1));	// 71056                  shr     ax, 1 ;~ 274D:0BF9
cs=0x274d;eip=0x000bfb; 	T(ah = al;);	// 71057                  mov     ah, al ;~ 274D:0BFB
cs=0x274d;eip=0x000bfd; 	T(SUB(ah, 0));	// 71058                  sub     ah, 0 ;~ 274D:0BFD
cs=0x274d;eip=0x000c00; 	J(JNS(loc_366b4));	// 71059                  jns     short loc_366B4 ;~ 274D:0C00
cs=0x274d;eip=0x000c02; 	T(SUB(ah, ah));	// 71060                  sub     ah, ah ;~ 274D:0C02
loc_366b4:
	// 7090 
cs=0x274d;eip=0x000c04; 	T(CMP(ah, 7));	// 71063                  cmp     ah, 7 ;~ 274D:0C04
cs=0x274d;eip=0x000c07; 	J(JLE(loc_366bb));	// 71064                  jle     short loc_366BB ;~ 274D:0C07
cs=0x274d;eip=0x000c09; 	T(ah = 7;);	// 71065                  mov     ah, 7 ;~ 274D:0C09
loc_366bb:
	// 7091 
cs=0x274d;eip=0x000c0b; 	T(SHL(ah, 1));	// 71068                  shl     ah, 1 ;~ 274D:0C0B
cs=0x274d;eip=0x000c0d; 	T(SHL(ah, 1));	// 71069                  shl     ah, 1 ;~ 274D:0C0D
cs=0x274d;eip=0x000c0f; 	T(SHL(ah, 1));	// 71070                  shl     ah, 1 ;~ 274D:0C0F
cs=0x274d;eip=0x000c11; 	T(SHL(ah, 1));	// 71071                  shl     ah, 1 ;~ 274D:0C11
cs=0x274d;eip=0x000c13; 	T(ADD(ah, 0x80));	// 71072                  add     ah, 80h ;~ 274D:0C13
loc_366c6:
	// 7092 
cs=0x274d;eip=0x000c16; 	X(*(byte_4a3ca) = ah;);	// 71075                  mov     byte_4A3CA, ah ;~ 274D:0C16
cs=0x274d;eip=0x000c1a; 	T(MOV(al, *(raddr(es,si))));	// 71076                  mov     al, es:[si] ;~ 274D:0C1A
cs=0x274d;eip=0x000c1d; 	T(AND(al, 0x3F));	// 71077                  and     al, 3Fh ;~ 274D:0C1D
cs=0x274d;eip=0x000c1f; 	T(CMP(al, 0x3E));	// 71078                  cmp     al, 3Eh ; '>' ;~ 274D:0C1F
cs=0x274d;eip=0x000c21; 	J(JL(loc_366db));	// 71079                  jl      short loc_366DB ;~ 274D:0C21
cs=0x274d;eip=0x000c23; 	J(JZ(loc_366d8));	// 71080                  jz      short loc_366D8 ;~ 274D:0C23
cs=0x274d;eip=0x000c25; 	J(return seg35ab_198a_proc(m2c::kloc_3743a, _state););	// 71081                  jmp     loc_3743A ;~ 274D:0C25
loc_366d8:
	// 7093 
cs=0x274d;eip=0x000c28; 	J(return seg35ab_198a_proc(m2c::kloc_375a4, _state););	// 71085                  jmp     loc_375A4 ;~ 274D:0C28
loc_366db:
	// 7094 
cs=0x274d;eip=0x000c2b; 	T(ax = word_4a476;);	// 71089                  mov     ax, word_4A476 ;~ 274D:0C2B
cs=0x274d;eip=0x000c2e; 	T(OR(ax, word_4a478));	// 71090                  or      ax, word_4A478 ;~ 274D:0C2E
cs=0x274d;eip=0x000c32; 	T(OR(ax, word_4a47a));	// 71091                  or      ax, word_4A47A ;~ 274D:0C32
cs=0x274d;eip=0x000c36; 	T(OR(al, ah));	// 71092                  or      al, ah ;~ 274D:0C36
cs=0x274d;eip=0x000c38; 	X(*(byte_4a488) = al;);	// 71093                  mov     byte_4A488, al ;~ 274D:0C38
cs=0x274d;eip=0x000c3b; 	J(JZ(loc_36710));	// 71094                  jz      short loc_36710 ;~ 274D:0C3B
cs=0x274d;eip=0x000c3d; 	X(PUSH(si));	// 71095                  push    si ;~ 274D:0C3D
cs=0x274d;eip=0x000c3e; 	T(di = 0x19D8;);	// 71096                  mov     di, 19D8h ;~ 274D:0C3E
cs=0x274d;eip=0x000c41; 	T(cx = word_4a476;);	// 71097                  mov     cx, word_4A476 ;~ 274D:0C41
cs=0x274d;eip=0x000c45; 	T(si = word_4a478;);	// 71098                  mov     si, word_4A478 ;~ 274D:0C45
cs=0x274d;eip=0x000c49; 	T(bp = word_4a47a;);	// 71099                  mov     bp, word_4A47A ;~ 274D:0C49
cs=0x274d;eip=0x000c4d; 	J(CALL(sub_36f2b,0));	// 71100                  call    sub_36F2B ;~ 274D:0C4D
cs=0x274d;eip=0x000c50; 	T(bx = 0x19D8;);	// 71101                  mov     bx, 19D8h ;~ 274D:0C50
cs=0x274d;eip=0x000c53; 	T(si = 0x19C6;);	// 71102                  mov     si, 19C6h ;~ 274D:0C53
cs=0x274d;eip=0x000c56; 	T(di = 0x19EA;);	// 71103                  mov     di, 19EAh ;~ 274D:0C56
cs=0x274d;eip=0x000c59; 	J(CALL(sub_3707d,0));	// 71104                  call    sub_3707D ;~ 274D:0C59
cs=0x274d;eip=0x000c5c; 	X(POP(si));	// 71105                  pop     si ;~ 274D:0C5C
cs=0x274d;eip=0x000c5d; 	J(JMP(loc_36746));	// 71106                  jmp     short loc_36746 ;~ 274D:0C5D
loc_36710:
	// 7095 
cs=0x274d;eip=0x000c60; 	T(ax = word_4a4a6;);	// 71112                  mov     ax, word_4A4A6 ;~ 274D:0C60
cs=0x274d;eip=0x000c63; 	X(word_4a4ca = ax;);	// 71113                  mov     word_4A4CA, ax ;~ 274D:0C63
cs=0x274d;eip=0x000c66; 	T(ax = word_4a4a8;);	// 71114                  mov     ax, word_4A4A8 ;~ 274D:0C66
cs=0x274d;eip=0x000c69; 	X(word_4a4cc = ax;);	// 71115                  mov     word_4A4CC, ax ;~ 274D:0C69
cs=0x274d;eip=0x000c6c; 	T(ax = word_4a4aa;);	// 71116                  mov     ax, word_4A4AA ;~ 274D:0C6C
cs=0x274d;eip=0x000c6f; 	X(word_4a4ce = ax;);	// 71117                  mov     word_4A4CE, ax ;~ 274D:0C6F
cs=0x274d;eip=0x000c72; 	T(ax = word_4a4ac;);	// 71118                  mov     ax, word_4A4AC ;~ 274D:0C72
cs=0x274d;eip=0x000c75; 	X(word_4a4d0 = ax;);	// 71119                  mov     word_4A4D0, ax ;~ 274D:0C75
cs=0x274d;eip=0x000c78; 	T(ax = word_4a4ae;);	// 71120                  mov     ax, word_4A4AE ;~ 274D:0C78
cs=0x274d;eip=0x000c7b; 	X(word_4a4d2 = ax;);	// 71121                  mov     word_4A4D2, ax ;~ 274D:0C7B
cs=0x274d;eip=0x000c7e; 	T(ax = word_4a4b0;);	// 71122                  mov     ax, word_4A4B0 ;~ 274D:0C7E
cs=0x274d;eip=0x000c81; 	X(word_4a4d4 = ax;);	// 71123                  mov     word_4A4D4, ax ;~ 274D:0C81
cs=0x274d;eip=0x000c84; 	T(ax = word_4a4b2;);	// 71124                  mov     ax, word_4A4B2 ;~ 274D:0C84
cs=0x274d;eip=0x000c87; 	X(word_4a4d6 = ax;);	// 71125                  mov     word_4A4D6, ax ;~ 274D:0C87
cs=0x274d;eip=0x000c8a; 	T(ax = word_4a4b4;);	// 71126                  mov     ax, word_4A4B4 ;~ 274D:0C8A
cs=0x274d;eip=0x000c8d; 	X(word_4a4d8 = ax;);	// 71127                  mov     word_4A4D8, ax ;~ 274D:0C8D
cs=0x274d;eip=0x000c90; 	T(ax = word_4a4b6;);	// 71128                  mov     ax, word_4A4B6 ;~ 274D:0C90
cs=0x274d;eip=0x000c93; 	X(word_4a4da = ax;);	// 71129                  mov     word_4A4DA, ax ;~ 274D:0C93
loc_36746:
	// 7096 
cs=0x274d;eip=0x000c96; 	T(cx = word_4a474;);	// 71132                  mov     cx, word_4A474 ;~ 274D:0C96
cs=0x274d;eip=0x000c9a; 	T(ax = word_4a472;);	// 71133                  mov     ax, word_4A472 ;~ 274D:0C9A
cs=0x274d;eip=0x000c9d; 	T(bp = word_4a470;);	// 71134                  mov     bp, word_4A470 ;~ 274D:0C9D
cs=0x274d;eip=0x000ca1; 	J(CALL(sub_36764,0));	// 71135                  call    sub_36764 ;~ 274D:0CA1
cs=0x274d;eip=0x000ca4; 	J(CALL(sub_35bc3,0));	// 71136                  call    sub_35BC3 ;~ 274D:0CA4
cs=0x274d;eip=0x000ca7; 	J(CALL(sub_36ba0,0));	// 71137                  call    sub_36BA0 ;~ 274D:0CA7
cs=0x274d;eip=0x000caa; 	J(CALL(sub_36c88,0));	// 71138                  call    sub_36C88 ;~ 274D:0CAA
cs=0x274d;eip=0x000cad; 	J(CALL(sub_3721a,0));	// 71139                  call    sub_3721A ;~ 274D:0CAD
cs=0x274d;eip=0x000cb0; 	J(CALL(sub_35be7,0));	// 71140                  call    sub_35BE7 ;~ 274D:0CB0
cs=0x274d;eip=0x000cb3; 	J(RETN(0));	// 71141                  retn ;~ 274D:0CB3

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
cs=0x274d;eip=0x000cb4; 	T(NEG(bp));	// 71150                  neg     bp ;~ 274D:0CB4
cs=0x274d;eip=0x000cb6; 	T(NEG(ax));	// 71151                  neg     ax ;~ 274D:0CB6
cs=0x274d;eip=0x000cb8; 	T(NEG(cx));	// 71152                  neg     cx ;~ 274D:0CB8
cs=0x274d;eip=0x000cba; 	T(CMP(*(byte_4a488), 0));	// 71153                  cmp     byte_4A488, 0 ;~ 274D:0CBA
cs=0x274d;eip=0x000cbf; 	J(JNZ(loc_3677f));	// 71154                  jnz     short loc_3677F ;~ 274D:0CBF
cs=0x274d;eip=0x000cc1; 	X(word_4cdae = bp;);	// 71155                  mov     word_4CDAE, bp ;~ 274D:0CC1
cs=0x274d;eip=0x000cc5; 	X(word_4cdb0 = cx;);	// 71156                  mov     word_4CDB0, cx ;~ 274D:0CC5
cs=0x274d;eip=0x000cc9; 	X(word_4cdb2 = ax;);	// 71157                  mov     word_4CDB2, ax ;~ 274D:0CC9
cs=0x274d;eip=0x000ccc; 	J(JMP(loc_3680e));	// 71158                  jmp     loc_3680E ;~ 274D:0CCC
loc_3677f:
	// 7097 
cs=0x274d;eip=0x000ccf; 	X(word_4cdb4 = ax;);	// 71162                  mov     word_4CDB4, ax ;~ 274D:0CCF
cs=0x274d;eip=0x000cd2; 	J(CALL(sub_37049,0));	// 71163                  call    sub_37049 ;~ 274D:0CD2
cs=0x274d;eip=0x000cd5; 	X(PUSH(si));	// 71164                  push    si ;~ 274D:0CD5
cs=0x274d;eip=0x000cd6; 	T(ax = word_4cdb4;);	// 71165                  mov     ax, word_4CDB4 ;~ 274D:0CD6
cs=0x274d;eip=0x000cd9; 	X(IMUL1_2(word_4a4c4));	// 71166                  imul    word_4A4C4 ;~ 274D:0CD9
cs=0x274d;eip=0x000cdd; 	T(di = dx;);	// 71167                  mov     di, dx ;~ 274D:0CDD
cs=0x274d;eip=0x000cdf; 	T(si = ax;);	// 71168                  mov     si, ax ;~ 274D:0CDF
cs=0x274d;eip=0x000ce1; 	T(ax = cx;);	// 71169                  mov     ax, cx ;~ 274D:0CE1
cs=0x274d;eip=0x000ce3; 	X(IMUL1_2(word_4a4be));	// 71170                  imul    word_4A4BE ;~ 274D:0CE3
cs=0x274d;eip=0x000ce7; 	T(ADD(si, ax));	// 71171                  add     si, ax ;~ 274D:0CE7
cs=0x274d;eip=0x000ce9; 	T(ADC(di, dx));	// 71172                  adc     di, dx ;~ 274D:0CE9
cs=0x274d;eip=0x000ceb; 	T(ax = bp;);	// 71173                  mov     ax, bp ;~ 274D:0CEB
cs=0x274d;eip=0x000ced; 	X(IMUL1_2(word_4a4b8));	// 71174                  imul    word_4A4B8 ;~ 274D:0CED
cs=0x274d;eip=0x000cf1; 	T(ADD(si, ax));	// 71175                  add     si, ax ;~ 274D:0CF1
cs=0x274d;eip=0x000cf3; 	T(ADC(di, dx));	// 71176                  adc     di, dx ;~ 274D:0CF3
cs=0x274d;eip=0x000cf5; 	T(SHL(si, 1));	// 71177                  shl     si, 1 ;~ 274D:0CF5
cs=0x274d;eip=0x000cf7; 	T(RCL(di, 1));	// 71178                  rcl     di, 1 ;~ 274D:0CF7
cs=0x274d;eip=0x000cf9; 	T(SHL(si, 1));	// 71179                  shl     si, 1 ;~ 274D:0CF9
cs=0x274d;eip=0x000cfb; 	T(ADC(di, 0));	// 71180                  adc     di, 0 ;~ 274D:0CFB
cs=0x274d;eip=0x000cfe; 	X(word_4cdae = di;);	// 71181                  mov     word_4CDAE, di ;~ 274D:0CFE
cs=0x274d;eip=0x000d02; 	T(ax = word_4cdb4;);	// 71182                  mov     ax, word_4CDB4 ;~ 274D:0D02
cs=0x274d;eip=0x000d05; 	X(IMUL1_2(word_4a4c6));	// 71183                  imul    word_4A4C6 ;~ 274D:0D05
cs=0x274d;eip=0x000d09; 	T(di = dx;);	// 71184                  mov     di, dx ;~ 274D:0D09
cs=0x274d;eip=0x000d0b; 	T(si = ax;);	// 71185                  mov     si, ax ;~ 274D:0D0B
cs=0x274d;eip=0x000d0d; 	T(ax = cx;);	// 71186                  mov     ax, cx ;~ 274D:0D0D
cs=0x274d;eip=0x000d0f; 	X(IMUL1_2(word_4a4c0));	// 71187                  imul    word_4A4C0 ;~ 274D:0D0F
cs=0x274d;eip=0x000d13; 	T(ADD(si, ax));	// 71188                  add     si, ax ;~ 274D:0D13
cs=0x274d;eip=0x000d15; 	T(ADC(di, dx));	// 71189                  adc     di, dx ;~ 274D:0D15
cs=0x274d;eip=0x000d17; 	T(ax = bp;);	// 71190                  mov     ax, bp ;~ 274D:0D17
cs=0x274d;eip=0x000d19; 	X(IMUL1_2(word_4a4ba));	// 71191                  imul    word_4A4BA ;~ 274D:0D19
cs=0x274d;eip=0x000d1d; 	T(ADD(si, ax));	// 71192                  add     si, ax ;~ 274D:0D1D
cs=0x274d;eip=0x000d1f; 	T(ADC(di, dx));	// 71193                  adc     di, dx ;~ 274D:0D1F
cs=0x274d;eip=0x000d21; 	T(SHL(si, 1));	// 71194                  shl     si, 1 ;~ 274D:0D21
cs=0x274d;eip=0x000d23; 	T(RCL(di, 1));	// 71195                  rcl     di, 1 ;~ 274D:0D23
cs=0x274d;eip=0x000d25; 	T(SHL(si, 1));	// 71196                  shl     si, 1 ;~ 274D:0D25
cs=0x274d;eip=0x000d27; 	T(ADC(di, 0));	// 71197                  adc     di, 0 ;~ 274D:0D27
cs=0x274d;eip=0x000d2a; 	X(word_4cdb0 = di;);	// 71198                  mov     word_4CDB0, di ;~ 274D:0D2A
cs=0x274d;eip=0x000d2e; 	T(ax = word_4cdb4;);	// 71199                  mov     ax, word_4CDB4 ;~ 274D:0D2E
cs=0x274d;eip=0x000d31; 	X(IMUL1_2(word_4a4c8));	// 71200                  imul    word_4A4C8 ;~ 274D:0D31
cs=0x274d;eip=0x000d35; 	T(di = dx;);	// 71201                  mov     di, dx ;~ 274D:0D35
cs=0x274d;eip=0x000d37; 	T(si = ax;);	// 71202                  mov     si, ax ;~ 274D:0D37
cs=0x274d;eip=0x000d39; 	T(ax = cx;);	// 71203                  mov     ax, cx ;~ 274D:0D39
cs=0x274d;eip=0x000d3b; 	X(IMUL1_2(word_4a4c2));	// 71204                  imul    word_4A4C2 ;~ 274D:0D3B
cs=0x274d;eip=0x000d3f; 	T(ADD(si, ax));	// 71205                  add     si, ax ;~ 274D:0D3F
cs=0x274d;eip=0x000d41; 	T(ADC(di, dx));	// 71206                  adc     di, dx ;~ 274D:0D41
cs=0x274d;eip=0x000d43; 	T(ax = bp;);	// 71207                  mov     ax, bp ;~ 274D:0D43
cs=0x274d;eip=0x000d45; 	X(IMUL1_2(word_4a4bc));	// 71208                  imul    word_4A4BC ;~ 274D:0D45
cs=0x274d;eip=0x000d49; 	T(ADD(si, ax));	// 71209                  add     si, ax ;~ 274D:0D49
cs=0x274d;eip=0x000d4b; 	T(ADC(di, dx));	// 71210                  adc     di, dx ;~ 274D:0D4B
cs=0x274d;eip=0x000d4d; 	T(SHL(si, 1));	// 71211                  shl     si, 1 ;~ 274D:0D4D
cs=0x274d;eip=0x000d4f; 	T(RCL(di, 1));	// 71212                  rcl     di, 1 ;~ 274D:0D4F
cs=0x274d;eip=0x000d51; 	T(SHL(si, 1));	// 71213                  shl     si, 1 ;~ 274D:0D51
cs=0x274d;eip=0x000d53; 	T(ADC(di, 0));	// 71214                  adc     di, 0 ;~ 274D:0D53
cs=0x274d;eip=0x000d56; 	X(word_4cdb2 = di;);	// 71215                  mov     word_4CDB2, di ;~ 274D:0D56
cs=0x274d;eip=0x000d5a; 	X(POP(si));	// 71216                  pop     si ;~ 274D:0D5A
cs=0x274d;eip=0x000d5b; 	J(CALL(sub_37049,0));	// 71217                  call    sub_37049 ;~ 274D:0D5B
loc_3680e:
	// 7098 
cs=0x274d;eip=0x000d5e; 	X(LODS(*(raddr(es,si)),si,1));	// 71220                  lods    byte ptr es:[si] ;~ 274D:0D5E
cs=0x274d;eip=0x000d60; 	T(AND(ax, 0x1F));	// 71221                  and     ax, 1Fh ;~ 274D:0D60
cs=0x274d;eip=0x000d63; 	X(*(word_4a4e0) = ax;);	// 71222                  mov     word_4A4E0, ax ;~ 274D:0D63
cs=0x274d;eip=0x000d66; 	T(cx = ax;);	// 71223                  mov     cx, ax ;~ 274D:0D66
cs=0x274d;eip=0x000d68; 	T(SUB(ax, ax));	// 71224                  sub     ax, ax ;~ 274D:0D68
cs=0x274d;eip=0x000d6a; 	T(CMP(cx, 0x10));	// 71225                  cmp     cx, 10h ;~ 274D:0D6A
cs=0x274d;eip=0x000d6d; 	J(JLE(loc_36820));	// 71226                  jle     short loc_36820 ;~ 274D:0D6D
cs=0x274d;eip=0x000d6f; 	T(INC(ax));	// 71227                  inc     ax ;~ 274D:0D6F
loc_36820:
	// 7099 
cs=0x274d;eip=0x000d70; 	X(*(byte_4a4e4) = al;);	// 71230                  mov     byte_4A4E4, al ;~ 274D:0D70
cs=0x274d;eip=0x000d73; 	X(word_4a4e6 = 0x0FFFF;);	// 71231                  mov     word_4A4E6, 0FFFFh ;~ 274D:0D73
cs=0x274d;eip=0x000d79; 	X(word_4a4e8 = 0x0FFFF;);	// 71232                  mov     word_4A4E8, 0FFFFh ;~ 274D:0D79
cs=0x274d;eip=0x000d7f; 	T(OR(cx, cx));	// 71233                  or      cx, cx ;~ 274D:0D7F
cs=0x274d;eip=0x000d81; 	J(JZ(loc_36877));	// 71234                  jz      short loc_36877 ;~ 274D:0D81
cs=0x274d;eip=0x000d83; 	T(bx = 1;);	// 71235                  mov     bx, 1 ;~ 274D:0D83
cs=0x274d;eip=0x000d86; 	T(SUB(di, di));	// 71236                  sub     di, di ;~ 274D:0D86
loc_36838:
	// 7100 
cs=0x274d;eip=0x000d88; 	X(PUSH(bx));	// 71239                  push    bx ;~ 274D:0D88
cs=0x274d;eip=0x000d89; 	X(LODS(*(dw*)(raddr(es,si)),si,2));	// 71240                  lods    word ptr es:[si] ;~ 274D:0D89
cs=0x274d;eip=0x000d8b; 	X(IMUL1_2(word_4cdae));	// 71241                  imul    word_4CDAE ;~ 274D:0D8B
cs=0x274d;eip=0x000d8f; 	T(bp = ax;);	// 71242                  mov     bp, ax ;~ 274D:0D8F
cs=0x274d;eip=0x000d91; 	T(bx = dx;);	// 71243                  mov     bx, dx ;~ 274D:0D91
cs=0x274d;eip=0x000d93; 	X(LODS(*(dw*)(raddr(es,si)),si,2));	// 71244                  lods    word ptr es:[si] ;~ 274D:0D93
cs=0x274d;eip=0x000d95; 	X(IMUL1_2(word_4cdb2));	// 71245                  imul    word_4CDB2 ;~ 274D:0D95
cs=0x274d;eip=0x000d99; 	T(ADD(bp, ax));	// 71246                  add     bp, ax ;~ 274D:0D99
cs=0x274d;eip=0x000d9b; 	T(ADC(bx, dx));	// 71247                  adc     bx, dx ;~ 274D:0D9B
cs=0x274d;eip=0x000d9d; 	X(LODS(*(dw*)(raddr(es,si)),si,2));	// 71248                  lods    word ptr es:[si] ;~ 274D:0D9D
cs=0x274d;eip=0x000d9f; 	X(IMUL1_2(word_4cdb0));	// 71249                  imul    word_4CDB0 ;~ 274D:0D9F
cs=0x274d;eip=0x000da3; 	T(ADD(bp, ax));	// 71250                  add     bp, ax ;~ 274D:0DA3
cs=0x274d;eip=0x000da5; 	T(ADC(bx, dx));	// 71251                  adc     bx, dx ;~ 274D:0DA5
cs=0x274d;eip=0x000da7; 	X(LODS(*(dw*)(raddr(es,si)),si,2));	// 71252                  lods    word ptr es:[si] ;~ 274D:0DA7
cs=0x274d;eip=0x000da9; 	T(CWD);	// 71253                  cwd ;~ 274D:0DA9
cs=0x274d;eip=0x000daa; 	T(CMP(bx, dx));	// 71254                  cmp     bx, dx ;~ 274D:0DAA
cs=0x274d;eip=0x000dac; 	X(POP(bx));	// 71255                  pop     bx ;~ 274D:0DAC
cs=0x274d;eip=0x000dad; 	J(JG(loc_3686f));	// 71256                  jg      short loc_3686F ;~ 274D:0DAD
cs=0x274d;eip=0x000daf; 	J(JL(loc_36865));	// 71257                  jl      short loc_36865 ;~ 274D:0DAF
cs=0x274d;eip=0x000db1; 	T(CMP(bp, ax));	// 71258                  cmp     bp, ax ;~ 274D:0DB1
cs=0x274d;eip=0x000db3; 	J(JNC(loc_3686f));	// 71259                  jnb     short loc_3686F ;~ 274D:0DB3
loc_36865:
	// 7101 
cs=0x274d;eip=0x000db5; 	X(XOR(word_4a4e6, bx));	// 71262                  xor     word_4A4E6, bx ;~ 274D:0DB5
cs=0x274d;eip=0x000db9; 	X(XOR(word_4a4e8, di));	// 71263                  xor     word_4A4E8, di ;~ 274D:0DB9
cs=0x274d;eip=0x000dbd; 	T(INC(ch));	// 71264                  inc     ch ;~ 274D:0DBD
loc_3686f:
	// 7102 
cs=0x274d;eip=0x000dbf; 	T(SHL(bx, 1));	// 71268                  shl     bx, 1 ;~ 274D:0DBF
cs=0x274d;eip=0x000dc1; 	T(RCL(di, 1));	// 71269                  rcl     di, 1 ;~ 274D:0DC1
cs=0x274d;eip=0x000dc3; 	T(DEC(cl));	// 71270                  dec     cl ;~ 274D:0DC3
cs=0x274d;eip=0x000dc5; 	J(JNZ(loc_36838));	// 71271                  jnz     short loc_36838 ;~ 274D:0DC5
loc_36877:
	// 7103 
cs=0x274d;eip=0x000dc7; 	T(al = *(db*)(word_4a4e0););	// 71274                  mov     al, byte ptr word_4A4E0 ;~ 274D:0DC7
cs=0x274d;eip=0x000dca; 	T(CMP(al, 4));	// 71275                  cmp     al, 4 ;~ 274D:0DCA
cs=0x274d;eip=0x000dcc; 	J(JL(locret_36886));	// 71276                  jl      short locret_36886 ;~ 274D:0DCC
cs=0x274d;eip=0x000dce; 	T(CMP(al, ch));	// 71277                  cmp     al, ch ;~ 274D:0DCE
cs=0x274d;eip=0x000dd0; 	J(JNZ(locret_36886));	// 71278                  jnz     short locret_36886 ;~ 274D:0DD0
cs=0x274d;eip=0x000dd2; 	X(INC(*(dw*)(byte_4cdb6)));	// 71279                  inc     word ptr byte_4CDB6 ;~ 274D:0DD2
locret_36886:
	// 7104 
cs=0x274d;eip=0x000dd6; 	J(RETN(0));	// 71283                  retn ;~ 274D:0DD6

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
cs=0x274d;eip=0x000dd7; 	J(RETN(0));	// 71287                  retn ;~ 274D:0DD7

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
cs=0x274d;eip=0x000dd8; 	X(PUSH(bp));	// 71294                  push    bp ;~ 274D:0DD8
cs=0x274d;eip=0x000dd9; 	X(PUSH(si));	// 71295                  push    si ;~ 274D:0DD9
cs=0x274d;eip=0x000dda; 	X(PUSH(di));	// 71296                  push    di ;~ 274D:0DDA
cs=0x274d;eip=0x000ddb; 	J(CALL(sub_368a4,0));	// 71297                  call    sub_368A4 ;~ 274D:0DDB
cs=0x274d;eip=0x000dde; 	X(POP(di));	// 71298                  pop     di ;~ 274D:0DDE
cs=0x274d;eip=0x000ddf; 	X(POP(si));	// 71299                  pop     si ;~ 274D:0DDF
cs=0x274d;eip=0x000de0; 	X(POP(bp));	// 71300                  pop     bp ;~ 274D:0DE0
cs=0x274d;eip=0x000de1; 	J(RETF(0));	// 71301                  retf ;~ 274D:0DE1

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
cs=0x274d;eip=0x000de2; 	X(PUSH(bp));	// 71305                  push    bp ;~ 274D:0DE2
cs=0x274d;eip=0x000de3; 	X(PUSH(si));	// 71306                  push    si ;~ 274D:0DE3
cs=0x274d;eip=0x000de4; 	X(PUSH(di));	// 71307                  push    di ;~ 274D:0DE4
cs=0x274d;eip=0x000de5; 	T(LES(si, dword_4a46c));	// 71308                  les     si, dword_4A46C ;~ 274D:0DE5
cs=0x274d;eip=0x000de9; 	J(CALL(sub_36ba0,0));	// 71310                  call    sub_36BA0 ;~ 274D:0DE9
cs=0x274d;eip=0x000dec; 	X(*(dw*)(&dword_4a46c) = si;);	// 71311                  mov     word ptr dword_4A46C, si ;~ 274D:0DEC
cs=0x274d;eip=0x000df0; 	X(POP(di));	// 71312                  pop     di ;~ 274D:0DF0
cs=0x274d;eip=0x000df1; 	X(POP(si));	// 71313                  pop     si ;~ 274D:0DF1
cs=0x274d;eip=0x000df2; 	X(POP(bp));	// 71314                  pop     bp ;~ 274D:0DF2
cs=0x274d;eip=0x000df3; 	J(RETN(0));	// 71315                  retn ;~ 274D:0DF3

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
cs=0x274d;eip=0x000df4; 	T(CMP(word_4a046, 0));	// 71322                  cmp     word_4A046, 0 ;~ 274D:0DF4
cs=0x274d;eip=0x000df9; 	J(JNZ(loc_368ac));	// 71323                  jnz     short loc_368AC ;~ 274D:0DF9
cs=0x274d;eip=0x000dfb; 	J(RETN(0));	// 71324                  retn ;~ 274D:0DFB
loc_368ac:
	// 7105 
cs=0x274d;eip=0x000dfc; 	T(bx = word_4a040;);	// 71328                  mov     bx, word_4A040 ;~ 274D:0DFC
cs=0x274d;eip=0x000e00; 	T(DEC(bx));	// 71329                  dec     bx ;~ 274D:0E00
cs=0x274d;eip=0x000e01; 	T(SHL(bx, 1));	// 71330                  shl     bx, 1 ;~ 274D:0E01
cs=0x274d;eip=0x000e03; 	T(di = bx;);	// 71331                  mov     di, bx ;~ 274D:0E03
cs=0x274d;eip=0x000e05; 	T(SHL(di, 1));	// 71332                  shl     di, 1 ;~ 274D:0E05
loc_368b7:
	// 7106 
cs=0x274d;eip=0x000e07; 	T(MOV(cx, *(dw*)(raddr(ds,bx-0x6AB4))));	// 71335                  mov     cx, [bx-6AB4h] ;~ 274D:0E07
cs=0x274d;eip=0x000e0b; 	T(ax = word_4a4a6;);	// 71336                  mov     ax, word_4A4A6 ;~ 274D:0E0B
cs=0x274d;eip=0x000e0e; 	T(IMUL1_2(cx));	// 71337                  imul    cx ;~ 274D:0E0E
cs=0x274d;eip=0x000e10; 	T(SHL(ax, 1));	// 71338                  shl     ax, 1 ;~ 274D:0E10
cs=0x274d;eip=0x000e12; 	T(RCL(dx, 1));	// 71339                  rcl     dx, 1 ;~ 274D:0E12
cs=0x274d;eip=0x000e14; 	X(MOV(*(dw*)(raddr(ds,di+0x2A88)), ax));	// 71340                  mov     [di+2A88h], ax ;~ 274D:0E14
cs=0x274d;eip=0x000e18; 	X(MOV(*(dw*)(raddr(ds,di+0x2A8A)), dx));	// 71341                  mov     [di+2A8Ah], dx ;~ 274D:0E18
cs=0x274d;eip=0x000e1c; 	T(ax = word_4a4a8;);	// 71342                  mov     ax, word_4A4A8 ;~ 274D:0E1C
cs=0x274d;eip=0x000e1f; 	T(IMUL1_2(cx));	// 71343                  imul    cx ;~ 274D:0E1F
cs=0x274d;eip=0x000e21; 	T(SHL(ax, 1));	// 71344                  shl     ax, 1 ;~ 274D:0E21
cs=0x274d;eip=0x000e23; 	T(RCL(dx, 1));	// 71345                  rcl     dx, 1 ;~ 274D:0E23
cs=0x274d;eip=0x000e25; 	X(MOV(*(dw*)(raddr(ds,di+0x2B08)), ax));	// 71346                  mov     [di+2B08h], ax ;~ 274D:0E25
cs=0x274d;eip=0x000e29; 	X(MOV(*(dw*)(raddr(ds,di+0x2B0A)), dx));	// 71347                  mov     [di+2B0Ah], dx ;~ 274D:0E29
cs=0x274d;eip=0x000e2d; 	T(ax = word_4a4aa;);	// 71348                  mov     ax, word_4A4AA ;~ 274D:0E2D
cs=0x274d;eip=0x000e30; 	T(IMUL1_2(cx));	// 71349                  imul    cx ;~ 274D:0E30
cs=0x274d;eip=0x000e32; 	T(SHL(ax, 1));	// 71350                  shl     ax, 1 ;~ 274D:0E32
cs=0x274d;eip=0x000e34; 	T(RCL(dx, 1));	// 71351                  rcl     dx, 1 ;~ 274D:0E34
cs=0x274d;eip=0x000e36; 	X(MOV(*(dw*)(raddr(ds,di+0x2B88)), ax));	// 71352                  mov     [di+2B88h], ax ;~ 274D:0E36
cs=0x274d;eip=0x000e3a; 	X(MOV(*(dw*)(raddr(ds,di+0x2B8A)), dx));	// 71353                  mov     [di+2B8Ah], dx ;~ 274D:0E3A
cs=0x274d;eip=0x000e3e; 	T(SUB(di, 4));	// 71354                  sub     di, 4 ;~ 274D:0E3E
cs=0x274d;eip=0x000e41; 	T(SUB(bx, 2));	// 71355                  sub     bx, 2 ;~ 274D:0E41
cs=0x274d;eip=0x000e44; 	J(JNS(loc_368b7));	// 71356                  jns     short loc_368B7 ;~ 274D:0E44
cs=0x274d;eip=0x000e46; 	T(bx = word_4a044;);	// 71357                  mov     bx, word_4A044 ;~ 274D:0E46
cs=0x274d;eip=0x000e4a; 	T(DEC(bx));	// 71358                  dec     bx ;~ 274D:0E4A
cs=0x274d;eip=0x000e4b; 	T(SHL(bx, 1));	// 71359                  shl     bx, 1 ;~ 274D:0E4B
cs=0x274d;eip=0x000e4d; 	T(di = bx;);	// 71360                  mov     di, bx ;~ 274D:0E4D
cs=0x274d;eip=0x000e4f; 	T(SHL(di, 1));	// 71361                  shl     di, 1 ;~ 274D:0E4F
loc_36901:
	// 7107 
cs=0x274d;eip=0x000e51; 	T(MOV(cx, *(dw*)(raddr(ds,bx-0x6A30))));	// 71364                  mov     cx, [bx-6A30h] ;~ 274D:0E51
cs=0x274d;eip=0x000e55; 	T(ax = word_4a4ac;);	// 71365                  mov     ax, word_4A4AC ;~ 274D:0E55
cs=0x274d;eip=0x000e58; 	T(IMUL1_2(cx));	// 71366                  imul    cx ;~ 274D:0E58
cs=0x274d;eip=0x000e5a; 	T(SHL(ax, 1));	// 71367                  shl     ax, 1 ;~ 274D:0E5A
cs=0x274d;eip=0x000e5c; 	T(RCL(dx, 1));	// 71368                  rcl     dx, 1 ;~ 274D:0E5C
cs=0x274d;eip=0x000e5e; 	X(MOV(*(dw*)(raddr(ds,di+0x2C08)), ax));	// 71369                  mov     [di+2C08h], ax ;~ 274D:0E5E
cs=0x274d;eip=0x000e62; 	X(MOV(*(dw*)(raddr(ds,di+0x2C0A)), dx));	// 71370                  mov     [di+2C0Ah], dx ;~ 274D:0E62
cs=0x274d;eip=0x000e66; 	T(ax = word_4a4ae;);	// 71371                  mov     ax, word_4A4AE ;~ 274D:0E66
cs=0x274d;eip=0x000e69; 	T(IMUL1_2(cx));	// 71372                  imul    cx ;~ 274D:0E69
cs=0x274d;eip=0x000e6b; 	T(SHL(ax, 1));	// 71373                  shl     ax, 1 ;~ 274D:0E6B
cs=0x274d;eip=0x000e6d; 	T(RCL(dx, 1));	// 71374                  rcl     dx, 1 ;~ 274D:0E6D
cs=0x274d;eip=0x000e6f; 	X(MOV(*(dw*)(raddr(ds,di+0x2C28)), ax));	// 71375                  mov     [di+2C28h], ax ;~ 274D:0E6F
cs=0x274d;eip=0x000e73; 	X(MOV(*(dw*)(raddr(ds,di+0x2C2A)), dx));	// 71376                  mov     [di+2C2Ah], dx ;~ 274D:0E73
cs=0x274d;eip=0x000e77; 	T(ax = word_4a4b0;);	// 71377                  mov     ax, word_4A4B0 ;~ 274D:0E77
cs=0x274d;eip=0x000e7a; 	T(IMUL1_2(cx));	// 71378                  imul    cx ;~ 274D:0E7A
cs=0x274d;eip=0x000e7c; 	T(SHL(ax, 1));	// 71379                  shl     ax, 1 ;~ 274D:0E7C
cs=0x274d;eip=0x000e7e; 	T(RCL(dx, 1));	// 71380                  rcl     dx, 1 ;~ 274D:0E7E
cs=0x274d;eip=0x000e80; 	X(MOV(*(dw*)(raddr(ds,di+0x2C48)), ax));	// 71381                  mov     [di+2C48h], ax ;~ 274D:0E80
cs=0x274d;eip=0x000e84; 	X(MOV(*(dw*)(raddr(ds,di+0x2C4A)), dx));	// 71382                  mov     [di+2C4Ah], dx ;~ 274D:0E84
cs=0x274d;eip=0x000e88; 	T(SUB(di, 4));	// 71383                  sub     di, 4 ;~ 274D:0E88
cs=0x274d;eip=0x000e8b; 	T(SUB(bx, 2));	// 71384                  sub     bx, 2 ;~ 274D:0E8B
cs=0x274d;eip=0x000e8e; 	J(JNS(loc_36901));	// 71385                  jns     short loc_36901 ;~ 274D:0E8E
cs=0x274d;eip=0x000e90; 	T(bx = word_4a042;);	// 71386                  mov     bx, word_4A042 ;~ 274D:0E90
cs=0x274d;eip=0x000e94; 	T(DEC(bx));	// 71387                  dec     bx ;~ 274D:0E94
cs=0x274d;eip=0x000e95; 	T(SHL(bx, 1));	// 71388                  shl     bx, 1 ;~ 274D:0E95
cs=0x274d;eip=0x000e97; 	T(di = bx;);	// 71389                  mov     di, bx ;~ 274D:0E97
cs=0x274d;eip=0x000e99; 	T(SHL(di, 1));	// 71390                  shl     di, 1 ;~ 274D:0E99
loc_3694b:
	// 7108 
cs=0x274d;eip=0x000e9b; 	T(MOV(cx, *(dw*)(raddr(ds,bx-0x6A72))));	// 71393                  mov     cx, [bx-6A72h] ;~ 274D:0E9B
cs=0x274d;eip=0x000e9f; 	T(ax = word_4a4b2;);	// 71394                  mov     ax, word_4A4B2 ;~ 274D:0E9F
cs=0x274d;eip=0x000ea2; 	T(IMUL1_2(cx));	// 71395                  imul    cx ;~ 274D:0EA2
cs=0x274d;eip=0x000ea4; 	T(SHL(ax, 1));	// 71396                  shl     ax, 1 ;~ 274D:0EA4
cs=0x274d;eip=0x000ea6; 	T(RCL(dx, 1));	// 71397                  rcl     dx, 1 ;~ 274D:0EA6
cs=0x274d;eip=0x000ea8; 	X(MOV(*(dw*)(raddr(ds,di+0x2C68)), ax));	// 71398                  mov     [di+2C68h], ax ;~ 274D:0EA8
cs=0x274d;eip=0x000eac; 	X(MOV(*(dw*)(raddr(ds,di+0x2C6A)), dx));	// 71399                  mov     [di+2C6Ah], dx ;~ 274D:0EAC
cs=0x274d;eip=0x000eb0; 	T(ax = word_4a4b4;);	// 71400                  mov     ax, word_4A4B4 ;~ 274D:0EB0
cs=0x274d;eip=0x000eb3; 	T(IMUL1_2(cx));	// 71401                  imul    cx ;~ 274D:0EB3
cs=0x274d;eip=0x000eb5; 	T(SHL(ax, 1));	// 71402                  shl     ax, 1 ;~ 274D:0EB5
cs=0x274d;eip=0x000eb7; 	T(RCL(dx, 1));	// 71403                  rcl     dx, 1 ;~ 274D:0EB7
cs=0x274d;eip=0x000eb9; 	X(MOV(*(dw*)(raddr(ds,di+0x2CE8)), ax));	// 71404                  mov     [di+2CE8h], ax ;~ 274D:0EB9
cs=0x274d;eip=0x000ebd; 	X(MOV(*(dw*)(raddr(ds,di+0x2CEA)), dx));	// 71405                  mov     [di+2CEAh], dx ;~ 274D:0EBD
cs=0x274d;eip=0x000ec1; 	T(ax = word_4a4b6;);	// 71406                  mov     ax, word_4A4B6 ;~ 274D:0EC1
cs=0x274d;eip=0x000ec4; 	T(IMUL1_2(cx));	// 71407                  imul    cx ;~ 274D:0EC4
cs=0x274d;eip=0x000ec6; 	T(SHL(ax, 1));	// 71408                  shl     ax, 1 ;~ 274D:0EC6
cs=0x274d;eip=0x000ec8; 	T(RCL(dx, 1));	// 71409                  rcl     dx, 1 ;~ 274D:0EC8
cs=0x274d;eip=0x000eca; 	X(MOV(*(dw*)(raddr(ds,di+0x2D68)), ax));	// 71410                  mov     [di+2D68h], ax ;~ 274D:0ECA
cs=0x274d;eip=0x000ece; 	X(MOV(*(dw*)(raddr(ds,di+0x2D6A)), dx));	// 71411                  mov     [di+2D6Ah], dx ;~ 274D:0ECE
cs=0x274d;eip=0x000ed2; 	T(SUB(di, 4));	// 71412                  sub     di, 4 ;~ 274D:0ED2
cs=0x274d;eip=0x000ed5; 	T(SUB(bx, 2));	// 71413                  sub     bx, 2 ;~ 274D:0ED5
cs=0x274d;eip=0x000ed8; 	J(JNS(loc_3694b));	// 71414                  jns     short loc_3694B ;~ 274D:0ED8
cs=0x274d;eip=0x000eda; 	T(si = word_4a046;);	// 71415                  mov     si, word_4A046 ;~ 274D:0EDA
cs=0x274d;eip=0x000ede; 	T(DEC(si));	// 71416                  dec     si ;~ 274D:0EDE
loc_3698f:
	// 7109 
cs=0x274d;eip=0x000edf; 	T(MOV(bx, *(dw*)(raddr(ds,si-0x79A2))));	// 71419                  mov     bx, [si-79A2h] ;~ 274D:0EDF
cs=0x274d;eip=0x000ee3; 	T(AND(bx, 0x0FF));	// 71420                  and     bx, 0FFh ;~ 274D:0EE3
cs=0x274d;eip=0x000ee7; 	T(SHL(bx, 1));	// 71421                  shl     bx, 1 ;~ 274D:0EE7
cs=0x274d;eip=0x000ee9; 	T(SHL(bx, 1));	// 71422                  shl     bx, 1 ;~ 274D:0EE9
cs=0x274d;eip=0x000eeb; 	T(MOV(di, *(dw*)(raddr(ds,si-0x7802))));	// 71423                  mov     di, [si-7802h] ;~ 274D:0EEB
cs=0x274d;eip=0x000eef; 	T(AND(di, 0x0FF));	// 71424                  and     di, 0FFh ;~ 274D:0EEF
cs=0x274d;eip=0x000ef3; 	T(SHL(di, 1));	// 71425                  shl     di, 1 ;~ 274D:0EF3
cs=0x274d;eip=0x000ef5; 	T(SHL(di, 1));	// 71426                  shl     di, 1 ;~ 274D:0EF5
cs=0x274d;eip=0x000ef7; 	T(MOV(bp, *(dw*)(raddr(ds,si-0x7748))));	// 71427                  mov     bp, [si-7748h] ;~ 274D:0EF7
cs=0x274d;eip=0x000efb; 	T(AND(bp, 0x0FF));	// 71428                  and     bp, 0FFh ;~ 274D:0EFB
cs=0x274d;eip=0x000eff; 	T(SHL(bp, 1));	// 71429                  shl     bp, 1 ;~ 274D:0EFF
cs=0x274d;eip=0x000f01; 	T(SHL(bp, 1));	// 71430                  shl     bp, 1 ;~ 274D:0F01
cs=0x274d;eip=0x000f03; 	T(LES(ax, *(dw*)(raddr(ds,bx+0x2A88))));	// 71431                  les     ax, [bx+2A88h] ;~ 274D:0F03
cs=0x274d;eip=0x000f07; 	T(dx = es;);	// 71433                  mov     dx, es ;~ 274D:0F07
cs=0x274d;eip=0x000f09; 	T(LES(cx, *(dw*)(raddr(ss,bp+0x2C08))));	// 71434                  les     cx, [bp+2C08h] ;~ 274D:0F09
cs=0x274d;eip=0x000f0d; 	T(ADD(ax, cx));	// 71435                  add     ax, cx ;~ 274D:0F0D
cs=0x274d;eip=0x000f0f; 	T(cx = es;);	// 71436                  mov     cx, es ;~ 274D:0F0F
cs=0x274d;eip=0x000f11; 	T(ADC(dx, cx));	// 71437                  adc     dx, cx ;~ 274D:0F11
cs=0x274d;eip=0x000f13; 	T(LES(cx, *(dw*)(raddr(ds,di+0x2C68))));	// 71438                  les     cx, [di+2C68h] ;~ 274D:0F13
cs=0x274d;eip=0x000f17; 	T(ADD(ax, cx));	// 71439                  add     ax, cx ;~ 274D:0F17
cs=0x274d;eip=0x000f19; 	T(cx = es;);	// 71440                  mov     cx, es ;~ 274D:0F19
cs=0x274d;eip=0x000f1b; 	T(ADC(dx, cx));	// 71441                  adc     dx, cx ;~ 274D:0F1B
cs=0x274d;eip=0x000f1d; 	T(SHL(si, 1));	// 71442                  shl     si, 1 ;~ 274D:0F1D
cs=0x274d;eip=0x000f1f; 	T(SHL(si, 1));	// 71443                  shl     si, 1 ;~ 274D:0F1F
cs=0x274d;eip=0x000f21; 	X(MOV(*(dw*)(raddr(ds,si+0x2380)), ax));	// 71444                  mov     [si+2380h], ax ;~ 274D:0F21
cs=0x274d;eip=0x000f25; 	X(MOV(*(dw*)(raddr(ds,si+0x2382)), dx));	// 71445                  mov     [si+2382h], dx ;~ 274D:0F25
cs=0x274d;eip=0x000f29; 	T(LES(ax, *(dw*)(raddr(ds,bx+0x2B08))));	// 71446                  les     ax, [bx+2B08h] ;~ 274D:0F29
cs=0x274d;eip=0x000f2d; 	T(dx = es;);	// 71447                  mov     dx, es ;~ 274D:0F2D
cs=0x274d;eip=0x000f2f; 	T(LES(cx, *(dw*)(raddr(ss,bp+0x2C28))));	// 71448                  les     cx, [bp+2C28h] ;~ 274D:0F2F
cs=0x274d;eip=0x000f33; 	T(ADD(ax, cx));	// 71449                  add     ax, cx ;~ 274D:0F33
cs=0x274d;eip=0x000f35; 	T(cx = es;);	// 71450                  mov     cx, es ;~ 274D:0F35
cs=0x274d;eip=0x000f37; 	T(ADC(dx, cx));	// 71451                  adc     dx, cx ;~ 274D:0F37
cs=0x274d;eip=0x000f39; 	T(LES(cx, *(dw*)(raddr(ds,di+0x2CE8))));	// 71452                  les     cx, [di+2CE8h] ;~ 274D:0F39
cs=0x274d;eip=0x000f3d; 	T(ADD(ax, cx));	// 71453                  add     ax, cx ;~ 274D:0F3D
cs=0x274d;eip=0x000f3f; 	T(cx = es;);	// 71454                  mov     cx, es ;~ 274D:0F3F
cs=0x274d;eip=0x000f41; 	T(ADC(dx, cx));	// 71455                  adc     dx, cx ;~ 274D:0F41
cs=0x274d;eip=0x000f43; 	X(MOV(*(dw*)(raddr(ds,si+0x25D8)), ax));	// 71456                  mov     [si+25D8h], ax ;~ 274D:0F43
cs=0x274d;eip=0x000f47; 	X(MOV(*(dw*)(raddr(ds,si+0x25DA)), dx));	// 71457                  mov     [si+25DAh], dx ;~ 274D:0F47
cs=0x274d;eip=0x000f4b; 	T(LES(ax, *(dw*)(raddr(ds,bx+0x2B88))));	// 71458                  les     ax, [bx+2B88h] ;~ 274D:0F4B
cs=0x274d;eip=0x000f4f; 	T(dx = es;);	// 71459                  mov     dx, es ;~ 274D:0F4F
cs=0x274d;eip=0x000f51; 	T(LES(cx, *(dw*)(raddr(ss,bp+0x2C48))));	// 71460                  les     cx, [bp+2C48h] ;~ 274D:0F51
cs=0x274d;eip=0x000f55; 	T(ADD(ax, cx));	// 71461                  add     ax, cx ;~ 274D:0F55
cs=0x274d;eip=0x000f57; 	T(cx = es;);	// 71462                  mov     cx, es ;~ 274D:0F57
cs=0x274d;eip=0x000f59; 	T(ADC(dx, cx));	// 71463                  adc     dx, cx ;~ 274D:0F59
cs=0x274d;eip=0x000f5b; 	T(LES(cx, *(dw*)(raddr(ds,di+0x2D68))));	// 71464                  les     cx, [di+2D68h] ;~ 274D:0F5B
cs=0x274d;eip=0x000f5f; 	T(ADD(ax, cx));	// 71465                  add     ax, cx ;~ 274D:0F5F
cs=0x274d;eip=0x000f61; 	T(cx = es;);	// 71466                  mov     cx, es ;~ 274D:0F61
cs=0x274d;eip=0x000f63; 	T(ADC(dx, cx));	// 71467                  adc     dx, cx ;~ 274D:0F63
cs=0x274d;eip=0x000f65; 	X(MOV(*(dw*)(raddr(ds,si+0x2830)), ax));	// 71468                  mov     [si+2830h], ax ;~ 274D:0F65
cs=0x274d;eip=0x000f69; 	X(MOV(*(dw*)(raddr(ds,si+0x2832)), dx));	// 71469                  mov     [si+2832h], dx ;~ 274D:0F69
cs=0x274d;eip=0x000f6d; 	T(SHR(si, 1));	// 71470                  shr     si, 1 ;~ 274D:0F6D
cs=0x274d;eip=0x000f6f; 	T(SHR(si, 1));	// 71471                  shr     si, 1 ;~ 274D:0F6F
cs=0x274d;eip=0x000f71; 	T(DEC(si));	// 71472                  dec     si ;~ 274D:0F71
cs=0x274d;eip=0x000f72; 	J(JS(locret_36a27));	// 71473                  js      short locret_36A27 ;~ 274D:0F72
cs=0x274d;eip=0x000f74; 	J(JMP(loc_3698f));	// 71474                  jmp     loc_3698F ;~ 274D:0F74
locret_36a27:
	// 7110 
cs=0x274d;eip=0x000f77; 	J(RETN(0));	// 71478                  retn ;~ 274D:0F77

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



 bool _group73(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group73:
    _begin:
seg35ab_f78_proc:
	// 71484 
loc_36a28:
	// 7111 
cs=0x274d;eip=0x000f78; 	T(bl = al;);	// 71485                  mov     bl, al ;~ 274D:0F78
cs=0x274d;eip=0x000f7a; 	T(AND(bx, 0x7F));	// 71486                  and     bx, 7Fh ;~ 274D:0F7A
cs=0x274d;eip=0x000f7d; 	T(SHL(bx, 1));	// 71487                  shl     bx, 1 ;~ 274D:0F7D
cs=0x274d;eip=0x000f7f; 	T(SHL(bx, 1));	// 71488                  shl     bx, 1 ;~ 274D:0F7F
cs=0x274d;eip=0x000f81; 	X(word_4cdb9 = bx;);	// 71489                  mov     word_4CDB9, bx ;~ 274D:0F81
cs=0x274d;eip=0x000f85; 	T(bx = 0x0FFFC;);	// 71490                  mov     bx, 0FFFCh ;~ 274D:0F85
loc_36a38:
	// 7112 
cs=0x274d;eip=0x000f88; 	T(ADD(bx, 4));	// 71494                  add     bx, 4 ;~ 274D:0F88
cs=0x274d;eip=0x000f8b; 	T(CMP(bx, word_4cdb9));	// 71495                  cmp     bx, word_4CDB9 ;~ 274D:0F8B
cs=0x274d;eip=0x000f8f; 	J(JL(loc_36a42));	// 71496                  jl      short loc_36A42 ;~ 274D:0F8F
cs=0x274d;eip=0x000f91; 	J(RETN(0));	// 71497                  retn ;~ 274D:0F91
loc_36a42:
	// 7113 
cs=0x274d;eip=0x000f92; 	J(CALL(sub_37652,0));	// 71501                  call    sub_37652 ;~ 274D:0F92
cs=0x274d;eip=0x000f95; 	T(INC(si));	// 71502                  inc     si ;~ 274D:0F95
cs=0x274d;eip=0x000f96; 	T(OR(ax, ax));	// 71503                  or      ax, ax ;~ 274D:0F96
cs=0x274d;eip=0x000f98; 	J(JZ(loc_36a38));	// 71504                  jz      short loc_36A38 ;~ 274D:0F98
cs=0x274d;eip=0x000f9a; 	T(MOV(bp, *(dw*)(raddr(es,si-1))));	// 71505                  mov     bp, es:[si-1] ;~ 274D:0F9A
cs=0x274d;eip=0x000f9e; 	T(AND(bp, 0x0FF));	// 71506                  and     bp, 0FFh ;~ 274D:0F9E
cs=0x274d;eip=0x000fa2; 	T(MOV(al, *(raddr(ss,bp-0x7748))));	// 71507                  mov     al, [bp-7748h] ;~ 274D:0FA2
cs=0x274d;eip=0x000fa6; 	T(SUB(ah, ah));	// 71508                  sub     ah, ah ;~ 274D:0FA6
cs=0x274d;eip=0x000fa8; 	T(SHL(ax, 1));	// 71509                  shl     ax, 1 ;~ 274D:0FA8
cs=0x274d;eip=0x000faa; 	T(bp = ax;);	// 71510                  mov     bp, ax ;~ 274D:0FAA
cs=0x274d;eip=0x000fac; 	T(MOV(cx, *(dw*)(raddr(ss,bp-0x6A30))));	// 71511                  mov     cx, [bp-6A30h] ;~ 274D:0FAC
cs=0x274d;eip=0x000fb0; 	T(MOV(bp, *(dw*)(raddr(es,si-1))));	// 71512                  mov     bp, es:[si-1] ;~ 274D:0FB0
cs=0x274d;eip=0x000fb4; 	T(AND(bp, 0x0FF));	// 71513                  and     bp, 0FFh ;~ 274D:0FB4
cs=0x274d;eip=0x000fb8; 	T(MOV(al, *(raddr(ss,bp-0x7802))));	// 71514                  mov     al, [bp-7802h] ;~ 274D:0FB8
cs=0x274d;eip=0x000fbc; 	T(SUB(ah, ah));	// 71515                  sub     ah, ah ;~ 274D:0FBC
cs=0x274d;eip=0x000fbe; 	T(SHL(ax, 1));	// 71516                  shl     ax, 1 ;~ 274D:0FBE
cs=0x274d;eip=0x000fc0; 	T(bp = ax;);	// 71517                  mov     bp, ax ;~ 274D:0FC0
cs=0x274d;eip=0x000fc2; 	T(MOV(ax, *(dw*)(raddr(ss,bp-0x6A72))));	// 71518                  mov     ax, [bp-6A72h] ;~ 274D:0FC2
cs=0x274d;eip=0x000fc6; 	X(word_4cdbb = ax;);	// 71519                  mov     word_4CDBB, ax ;~ 274D:0FC6
cs=0x274d;eip=0x000fc9; 	T(MOV(bp, *(dw*)(raddr(es,si-1))));	// 71520                  mov     bp, es:[si-1] ;~ 274D:0FC9
cs=0x274d;eip=0x000fcd; 	T(AND(bp, 0x0FF));	// 71521                  and     bp, 0FFh ;~ 274D:0FCD
cs=0x274d;eip=0x000fd1; 	T(MOV(al, *(raddr(ss,bp-0x79A2))));	// 71522                  mov     al, [bp-79A2h] ;~ 274D:0FD1
cs=0x274d;eip=0x000fd5; 	T(SUB(ah, ah));	// 71523                  sub     ah, ah ;~ 274D:0FD5
cs=0x274d;eip=0x000fd7; 	T(SHL(ax, 1));	// 71524                  shl     ax, 1 ;~ 274D:0FD7
cs=0x274d;eip=0x000fd9; 	T(bp = ax;);	// 71525                  mov     bp, ax ;~ 274D:0FD9
cs=0x274d;eip=0x000fdb; 	T(MOV(bp, *(dw*)(raddr(ss,bp-0x6AB4))));	// 71526                  mov     bp, [bp-6AB4h] ;~ 274D:0FDB
cs=0x274d;eip=0x000fdf; 	X(PUSH(si));	// 71527                  push    si ;~ 274D:0FDF
cs=0x274d;eip=0x000fe0; 	T(ax = word_4cdbb;);	// 71528                  mov     ax, word_4CDBB ;~ 274D:0FE0
cs=0x274d;eip=0x000fe3; 	X(IMUL1_2(word_4a4d6));	// 71529                  imul    word_4A4D6 ;~ 274D:0FE3
cs=0x274d;eip=0x000fe7; 	T(di = dx;);	// 71530                  mov     di, dx ;~ 274D:0FE7
cs=0x274d;eip=0x000fe9; 	T(si = ax;);	// 71531                  mov     si, ax ;~ 274D:0FE9
cs=0x274d;eip=0x000feb; 	T(ax = word_4a4d0;);	// 71532                  mov     ax, word_4A4D0 ;~ 274D:0FEB
cs=0x274d;eip=0x000fee; 	T(IMUL1_2(cx));	// 71533                  imul    cx ;~ 274D:0FEE
cs=0x274d;eip=0x000ff0; 	T(ADD(si, ax));	// 71534                  add     si, ax ;~ 274D:0FF0
cs=0x274d;eip=0x000ff2; 	T(ADC(di, dx));	// 71535                  adc     di, dx ;~ 274D:0FF2
cs=0x274d;eip=0x000ff4; 	T(ax = word_4a4ca;);	// 71536                  mov     ax, word_4A4CA ;~ 274D:0FF4
cs=0x274d;eip=0x000ff7; 	T(IMUL1_2(bp));	// 71537                  imul    bp ;~ 274D:0FF7
cs=0x274d;eip=0x000ff9; 	T(ADD(si, ax));	// 71538                  add     si, ax ;~ 274D:0FF9
cs=0x274d;eip=0x000ffb; 	T(ADC(di, dx));	// 71539                  adc     di, dx ;~ 274D:0FFB
cs=0x274d;eip=0x000ffd; 	T(SHL(si, 1));	// 71540                  shl     si, 1 ;~ 274D:0FFD
cs=0x274d;eip=0x000fff; 	T(RCL(di, 1));	// 71541                  rcl     di, 1 ;~ 274D:0FFF
cs=0x274d;eip=0x001001; 	T(ADD(si, word_4a47c));	// 71542                  add     si, word_4A47C ;~ 274D:1001
cs=0x274d;eip=0x001005; 	T(ADC(di, word_4a47e));	// 71543                  adc     di, word_4A47E ;~ 274D:1005
cs=0x274d;eip=0x001009; 	X(MOV(*(dw*)(raddr(ds,bx+0x1A0C)), si));	// 71544                  mov     [bx+1A0Ch], si ;~ 274D:1009
cs=0x274d;eip=0x00100d; 	X(MOV(*(dw*)(raddr(ds,bx+0x1A0E)), di));	// 71545                  mov     [bx+1A0Eh], di ;~ 274D:100D
cs=0x274d;eip=0x001011; 	T(ax = word_4cdbb;);	// 71546                  mov     ax, word_4CDBB ;~ 274D:1011
cs=0x274d;eip=0x001014; 	X(IMUL1_2(word_4a4d8));	// 71547                  imul    word_4A4D8 ;~ 274D:1014
cs=0x274d;eip=0x001018; 	T(di = dx;);	// 71548                  mov     di, dx ;~ 274D:1018
cs=0x274d;eip=0x00101a; 	T(si = ax;);	// 71549                  mov     si, ax ;~ 274D:101A
cs=0x274d;eip=0x00101c; 	T(ax = word_4a4d2;);	// 71550                  mov     ax, word_4A4D2 ;~ 274D:101C
cs=0x274d;eip=0x00101f; 	T(IMUL1_2(cx));	// 71551                  imul    cx ;~ 274D:101F
cs=0x274d;eip=0x001021; 	T(ADD(si, ax));	// 71552                  add     si, ax ;~ 274D:1021
cs=0x274d;eip=0x001023; 	T(ADC(di, dx));	// 71553                  adc     di, dx ;~ 274D:1023
cs=0x274d;eip=0x001025; 	T(ax = word_4a4cc;);	// 71554                  mov     ax, word_4A4CC ;~ 274D:1025
cs=0x274d;eip=0x001028; 	T(IMUL1_2(bp));	// 71555                  imul    bp ;~ 274D:1028
cs=0x274d;eip=0x00102a; 	T(ADD(si, ax));	// 71556                  add     si, ax ;~ 274D:102A
cs=0x274d;eip=0x00102c; 	T(ADC(di, dx));	// 71557                  adc     di, dx ;~ 274D:102C
cs=0x274d;eip=0x00102e; 	T(SHL(si, 1));	// 71558                  shl     si, 1 ;~ 274D:102E
cs=0x274d;eip=0x001030; 	T(RCL(di, 1));	// 71559                  rcl     di, 1 ;~ 274D:1030
cs=0x274d;eip=0x001032; 	T(ADD(si, word_4a480));	// 71560                  add     si, word_4A480 ;~ 274D:1032
cs=0x274d;eip=0x001036; 	T(ADC(di, word_4a482));	// 71561                  adc     di, word_4A482 ;~ 274D:1036
cs=0x274d;eip=0x00103a; 	X(MOV(*(dw*)(raddr(ds,bx+0x1BF0)), si));	// 71562                  mov     [bx+1BF0h], si ;~ 274D:103A
cs=0x274d;eip=0x00103e; 	X(MOV(*(dw*)(raddr(ds,bx+0x1BF2)), di));	// 71563                  mov     [bx+1BF2h], di ;~ 274D:103E
cs=0x274d;eip=0x001042; 	T(ax = word_4cdbb;);	// 71564                  mov     ax, word_4CDBB ;~ 274D:1042
cs=0x274d;eip=0x001045; 	X(IMUL1_2(word_4a4da));	// 71565                  imul    word_4A4DA ;~ 274D:1045
cs=0x274d;eip=0x001049; 	T(di = dx;);	// 71566                  mov     di, dx ;~ 274D:1049
cs=0x274d;eip=0x00104b; 	T(si = ax;);	// 71567                  mov     si, ax ;~ 274D:104B
cs=0x274d;eip=0x00104d; 	T(ax = word_4a4d4;);	// 71568                  mov     ax, word_4A4D4 ;~ 274D:104D
cs=0x274d;eip=0x001050; 	T(IMUL1_2(cx));	// 71569                  imul    cx ;~ 274D:1050
cs=0x274d;eip=0x001052; 	T(ADD(si, ax));	// 71570                  add     si, ax ;~ 274D:1052
cs=0x274d;eip=0x001054; 	T(ADC(di, dx));	// 71571                  adc     di, dx ;~ 274D:1054
cs=0x274d;eip=0x001056; 	T(ax = word_4a4ce;);	// 71572                  mov     ax, word_4A4CE ;~ 274D:1056
cs=0x274d;eip=0x001059; 	T(IMUL1_2(bp));	// 71573                  imul    bp ;~ 274D:1059
cs=0x274d;eip=0x00105b; 	T(ADD(si, ax));	// 71574                  add     si, ax ;~ 274D:105B
cs=0x274d;eip=0x00105d; 	T(ADC(di, dx));	// 71575                  adc     di, dx ;~ 274D:105D
cs=0x274d;eip=0x00105f; 	T(SHL(si, 1));	// 71576                  shl     si, 1 ;~ 274D:105F
cs=0x274d;eip=0x001061; 	T(RCL(di, 1));	// 71577                  rcl     di, 1 ;~ 274D:1061
cs=0x274d;eip=0x001063; 	T(ADD(si, word_4a484));	// 71578                  add     si, word_4A484 ;~ 274D:1063
cs=0x274d;eip=0x001067; 	T(ADC(di, word_4a486));	// 71579                  adc     di, word_4A486 ;~ 274D:1067
cs=0x274d;eip=0x00106b; 	X(MOV(*(dw*)(raddr(ds,bx+0x1DD4)), si));	// 71580                  mov     [bx+1DD4h], si ;~ 274D:106B
cs=0x274d;eip=0x00106f; 	X(MOV(*(dw*)(raddr(ds,bx+0x1DD6)), di));	// 71581                  mov     [bx+1DD6h], di ;~ 274D:106F
cs=0x274d;eip=0x001073; 	J(CALL(sub_35b28,0));	// 71582                  call    sub_35B28 ;~ 274D:1073
cs=0x274d;eip=0x001076; 	X(POP(si));	// 71583                  pop     si ;~ 274D:1076
cs=0x274d;eip=0x001077; 	J(JMP(loc_36a38));	// 71584                  jmp     loc_36A38 ;~ 274D:1077
loc_36b2a:
	// 7114 
cs=0x274d;eip=0x00107a; 	J(JMP(loc_36a28));	// 71588                  jmp     loc_36A28 ;~ 274D:107A
loc_36b2d:
	// 7115 
cs=0x274d;eip=0x00107d; 	T(CMP(byte_4cdb8, 0));	// 71593                  cmp     byte_4CDB8, 0 ;~ 274D:107D
cs=0x274d;eip=0x001082; 	J(JNZ(loc_36b2a));	// 71594                  jnz     short loc_36B2A ;~ 274D:1082
cs=0x274d;eip=0x001084; 	T(cl = al;);	// 71595                  mov     cl, al ;~ 274D:1084
cs=0x274d;eip=0x001086; 	T(AND(cx, 0x7F));	// 71596                  and     cx, 7Fh ;~ 274D:1086
cs=0x274d;eip=0x001089; 	T(SUB(bx, bx));	// 71597                  sub     bx, bx ;~ 274D:1089
loc_36b3b:
	// 7116 
cs=0x274d;eip=0x00108b; 	J(CALL(sub_37652,0));	// 71601                  call    sub_37652 ;~ 274D:108B
cs=0x274d;eip=0x00108e; 	J(JNZ(loc_36b47));	// 71602                  jnz     short loc_36B47 ;~ 274D:108E
cs=0x274d;eip=0x001090; 	T(INC(si));	// 71603                  inc     si ;~ 274D:1090
cs=0x274d;eip=0x001091; 	T(ADD(bx, 4));	// 71604                  add     bx, 4 ;~ 274D:1091
cs=0x274d;eip=0x001094; 	J(LOOP(loc_36b3b));	// 71605                  loop    loc_36B3B ;~ 274D:1094
cs=0x274d;eip=0x001096; 	J(RETN(0));	// 71606                  retn ;~ 274D:1096
loc_36b47:
	// 7117 
cs=0x274d;eip=0x001097; 	X(LODS(*(raddr(es,si)),si,1));	// 71610                  lods    byte ptr es:[si] ;~ 274D:1097
cs=0x274d;eip=0x001099; 	T(SUB(ah, ah));	// 71611                  sub     ah, ah ;~ 274D:1099
cs=0x274d;eip=0x00109b; 	T(SHL(ax, 1));	// 71612                  shl     ax, 1 ;~ 274D:109B
cs=0x274d;eip=0x00109d; 	T(SHL(ax, 1));	// 71613                  shl     ax, 1 ;~ 274D:109D
cs=0x274d;eip=0x00109f; 	T(di = ax;);	// 71614                  mov     di, ax ;~ 274D:109F
cs=0x274d;eip=0x0010a1; 	T(ax = word_4a47c;);	// 71615                  mov     ax, word_4A47C ;~ 274D:10A1
cs=0x274d;eip=0x0010a4; 	T(ADD(ax, *(dw*)(raddr(ds,di+0x2380))));	// 71616                  add     ax, [di+2380h] ;~ 274D:10A4
cs=0x274d;eip=0x0010a8; 	X(MOV(*(dw*)(raddr(ds,bx+0x1A0C)), ax));	// 71617                  mov     [bx+1A0Ch], ax ;~ 274D:10A8
cs=0x274d;eip=0x0010ac; 	T(ax = word_4a47e;);	// 71618                  mov     ax, word_4A47E ;~ 274D:10AC
cs=0x274d;eip=0x0010af; 	T(ADC(ax, *(dw*)(raddr(ds,di+0x2382))));	// 71619                  adc     ax, [di+2382h] ;~ 274D:10AF
cs=0x274d;eip=0x0010b3; 	X(MOV(*(dw*)(raddr(ds,bx+0x1A0E)), ax));	// 71620                  mov     [bx+1A0Eh], ax ;~ 274D:10B3
cs=0x274d;eip=0x0010b7; 	T(ax = word_4a480;);	// 71621                  mov     ax, word_4A480 ;~ 274D:10B7
cs=0x274d;eip=0x0010ba; 	T(ADD(ax, *(dw*)(raddr(ds,di+0x25D8))));	// 71622                  add     ax, [di+25D8h] ;~ 274D:10BA
cs=0x274d;eip=0x0010be; 	X(MOV(*(dw*)(raddr(ds,bx+0x1BF0)), ax));	// 71623                  mov     [bx+1BF0h], ax ;~ 274D:10BE
cs=0x274d;eip=0x0010c2; 	T(ax = word_4a482;);	// 71624                  mov     ax, word_4A482 ;~ 274D:10C2
cs=0x274d;eip=0x0010c5; 	T(ADC(ax, *(dw*)(raddr(ds,di+0x25DA))));	// 71625                  adc     ax, [di+25DAh] ;~ 274D:10C5
cs=0x274d;eip=0x0010c9; 	X(MOV(*(dw*)(raddr(ds,bx+0x1BF2)), ax));	// 71626                  mov     [bx+1BF2h], ax ;~ 274D:10C9
cs=0x274d;eip=0x0010cd; 	T(ax = word_4a484;);	// 71627                  mov     ax, word_4A484 ;~ 274D:10CD
cs=0x274d;eip=0x0010d0; 	T(ADD(ax, *(dw*)(raddr(ds,di+0x2830))));	// 71628                  add     ax, [di+2830h] ;~ 274D:10D0
cs=0x274d;eip=0x0010d4; 	X(MOV(*(dw*)(raddr(ds,bx+0x1DD4)), ax));	// 71629                  mov     [bx+1DD4h], ax ;~ 274D:10D4
cs=0x274d;eip=0x0010d8; 	T(ax = word_4a486;);	// 71630                  mov     ax, word_4A486 ;~ 274D:10D8
cs=0x274d;eip=0x0010db; 	T(ADC(ax, *(dw*)(raddr(ds,di+0x2832))));	// 71631                  adc     ax, [di+2832h] ;~ 274D:10DB
cs=0x274d;eip=0x0010df; 	X(MOV(*(dw*)(raddr(ds,bx+0x1DD6)), ax));	// 71632                  mov     [bx+1DD6h], ax ;~ 274D:10DF
cs=0x274d;eip=0x0010e3; 	X(PUSH(cx));	// 71633                  push    cx ;~ 274D:10E3
cs=0x274d;eip=0x0010e4; 	X(PUSH(si));	// 71634                  push    si ;~ 274D:10E4
cs=0x274d;eip=0x0010e5; 	J(CALL(sub_35b28,0));	// 71635                  call    sub_35B28 ;~ 274D:10E5
cs=0x274d;eip=0x0010e8; 	X(POP(si));	// 71636                  pop     si ;~ 274D:10E8
cs=0x274d;eip=0x0010e9; 	X(POP(cx));	// 71637                  pop     cx ;~ 274D:10E9
cs=0x274d;eip=0x0010ea; 	T(ADD(bx, 4));	// 71638                  add     bx, 4 ;~ 274D:10EA
cs=0x274d;eip=0x0010ed; 	J(LOOP(loc_36b3b));	// 71639                  loop    loc_36B3B ;~ 274D:10ED
cs=0x274d;eip=0x0010ef; 	J(RETN(0));	// 71640                  retn ;~ 274D:10EF
sub_36ba0:
	// 71646 
cs=0x274d;eip=0x0010f0; 	X(LODS(*(raddr(es,si)),si,1));	// 71651                  lods    byte ptr es:[si] ;~ 274D:10F0
cs=0x274d;eip=0x0010f2; 	T(TEST(al, 0x80));	// 71652                  test    al, 80h ;~ 274D:10F2
cs=0x274d;eip=0x0010f4; 	J(JNZ(loc_36b2d));	// 71653                  jnz     short loc_36B2D ;~ 274D:10F4
cs=0x274d;eip=0x0010f6; 	T(TEST(al, 0x7F));	// 71654                  test    al, 7Fh ;~ 274D:10F6
cs=0x274d;eip=0x0010f8; 	J(JZ(locret_36bc3));	// 71655                  jz      short locret_36BC3 ;~ 274D:10F8
cs=0x274d;eip=0x0010fa; 	T(bl = al;);	// 71656                  mov     bl, al ;~ 274D:10FA
cs=0x274d;eip=0x0010fc; 	T(AND(bx, 0x7F));	// 71657                  and     bx, 7Fh ;~ 274D:10FC
cs=0x274d;eip=0x0010ff; 	T(SHL(bx, 1));	// 71658                  shl     bx, 1 ;~ 274D:10FF
cs=0x274d;eip=0x001101; 	T(SHL(bx, 1));	// 71659                  shl     bx, 1 ;~ 274D:1101
cs=0x274d;eip=0x001103; 	X(word_4cdb9 = bx;);	// 71660                  mov     word_4CDB9, bx ;~ 274D:1103
cs=0x274d;eip=0x001107; 	T(bx = 0x0FFFC;);	// 71661                  mov     bx, 0FFFCh ;~ 274D:1107
loc_36bba:
	// 7118 
cs=0x274d;eip=0x00110a; 	T(ADD(bx, 4));	// 71665                  add     bx, 4 ;~ 274D:110A
cs=0x274d;eip=0x00110d; 	T(CMP(bx, word_4cdb9));	// 71666                  cmp     bx, word_4CDB9 ;~ 274D:110D
cs=0x274d;eip=0x001111; 	J(JL(loc_36bc4));	// 71667                  jl      short loc_36BC4 ;~ 274D:1111
locret_36bc3:
	// 7119 
cs=0x274d;eip=0x001113; 	J(RETN(0));	// 71670                  retn ;~ 274D:1113
loc_36bc4:
	// 7120 
cs=0x274d;eip=0x001114; 	J(CALL(sub_37652,0));	// 71674                  call    sub_37652 ;~ 274D:1114
cs=0x274d;eip=0x001117; 	T(ADD(si, 6));	// 71675                  add     si, 6 ;~ 274D:1117
cs=0x274d;eip=0x00111a; 	T(OR(ax, ax));	// 71676                  or      ax, ax ;~ 274D:111A
cs=0x274d;eip=0x00111c; 	J(JZ(loc_36bba));	// 71677                  jz      short loc_36BBA ;~ 274D:111C
cs=0x274d;eip=0x00111e; 	T(MOV(bp, *(dw*)(raddr(es,si-6))));	// 71678                  mov     bp, es:[si-6] ;~ 274D:111E
cs=0x274d;eip=0x001122; 	T(MOV(cx, *(dw*)(raddr(es,si-2))));	// 71679                  mov     cx, es:[si-2] ;~ 274D:1122
cs=0x274d;eip=0x001126; 	T(MOV(ax, *(dw*)(raddr(es,si-4))));	// 71680                  mov     ax, es:[si-4] ;~ 274D:1126
cs=0x274d;eip=0x00112a; 	X(word_4cdbb = ax;);	// 71681                  mov     word_4CDBB, ax ;~ 274D:112A
cs=0x274d;eip=0x00112d; 	X(PUSH(si));	// 71682                  push    si ;~ 274D:112D
cs=0x274d;eip=0x00112e; 	X(IMUL1_2(word_4a4d6));	// 71683                  imul    word_4A4D6 ;~ 274D:112E
cs=0x274d;eip=0x001132; 	T(di = dx;);	// 71684                  mov     di, dx ;~ 274D:1132
cs=0x274d;eip=0x001134; 	T(si = ax;);	// 71685                  mov     si, ax ;~ 274D:1134
cs=0x274d;eip=0x001136; 	T(ax = word_4a4d0;);	// 71686                  mov     ax, word_4A4D0 ;~ 274D:1136
cs=0x274d;eip=0x001139; 	T(IMUL1_2(cx));	// 71687                  imul    cx ;~ 274D:1139
cs=0x274d;eip=0x00113b; 	T(ADD(si, ax));	// 71688                  add     si, ax ;~ 274D:113B
cs=0x274d;eip=0x00113d; 	T(ADC(di, dx));	// 71689                  adc     di, dx ;~ 274D:113D
cs=0x274d;eip=0x00113f; 	T(ax = word_4a4ca;);	// 71690                  mov     ax, word_4A4CA ;~ 274D:113F
cs=0x274d;eip=0x001142; 	T(IMUL1_2(bp));	// 71691                  imul    bp ;~ 274D:1142
cs=0x274d;eip=0x001144; 	T(ADD(si, ax));	// 71692                  add     si, ax ;~ 274D:1144
cs=0x274d;eip=0x001146; 	T(ADC(di, dx));	// 71693                  adc     di, dx ;~ 274D:1146
cs=0x274d;eip=0x001148; 	T(SHL(si, 1));	// 71694                  shl     si, 1 ;~ 274D:1148
cs=0x274d;eip=0x00114a; 	T(RCL(di, 1));	// 71695                  rcl     di, 1 ;~ 274D:114A
cs=0x274d;eip=0x00114c; 	T(ADD(si, word_4a47c));	// 71696                  add     si, word_4A47C ;~ 274D:114C
cs=0x274d;eip=0x001150; 	T(ADC(di, word_4a47e));	// 71697                  adc     di, word_4A47E ;~ 274D:1150
cs=0x274d;eip=0x001154; 	X(MOV(*(dw*)(raddr(ds,bx+0x1A0C)), si));	// 71698                  mov     [bx+1A0Ch], si ;~ 274D:1154
cs=0x274d;eip=0x001158; 	X(MOV(*(dw*)(raddr(ds,bx+0x1A0E)), di));	// 71699                  mov     [bx+1A0Eh], di ;~ 274D:1158
cs=0x274d;eip=0x00115c; 	T(ax = word_4cdbb;);	// 71700                  mov     ax, word_4CDBB ;~ 274D:115C
cs=0x274d;eip=0x00115f; 	X(IMUL1_2(word_4a4d8));	// 71701                  imul    word_4A4D8 ;~ 274D:115F
cs=0x274d;eip=0x001163; 	T(di = dx;);	// 71702                  mov     di, dx ;~ 274D:1163
cs=0x274d;eip=0x001165; 	T(si = ax;);	// 71703                  mov     si, ax ;~ 274D:1165
cs=0x274d;eip=0x001167; 	T(ax = word_4a4d2;);	// 71704                  mov     ax, word_4A4D2 ;~ 274D:1167
cs=0x274d;eip=0x00116a; 	T(IMUL1_2(cx));	// 71705                  imul    cx ;~ 274D:116A
cs=0x274d;eip=0x00116c; 	T(ADD(si, ax));	// 71706                  add     si, ax ;~ 274D:116C
cs=0x274d;eip=0x00116e; 	T(ADC(di, dx));	// 71707                  adc     di, dx ;~ 274D:116E
cs=0x274d;eip=0x001170; 	T(ax = word_4a4cc;);	// 71708                  mov     ax, word_4A4CC ;~ 274D:1170
cs=0x274d;eip=0x001173; 	T(IMUL1_2(bp));	// 71709                  imul    bp ;~ 274D:1173
cs=0x274d;eip=0x001175; 	T(ADD(si, ax));	// 71710                  add     si, ax ;~ 274D:1175
cs=0x274d;eip=0x001177; 	T(ADC(di, dx));	// 71711                  adc     di, dx ;~ 274D:1177
cs=0x274d;eip=0x001179; 	T(SHL(si, 1));	// 71712                  shl     si, 1 ;~ 274D:1179
cs=0x274d;eip=0x00117b; 	T(RCL(di, 1));	// 71713                  rcl     di, 1 ;~ 274D:117B
cs=0x274d;eip=0x00117d; 	T(ADD(si, word_4a480));	// 71714                  add     si, word_4A480 ;~ 274D:117D
cs=0x274d;eip=0x001181; 	T(ADC(di, word_4a482));	// 71715                  adc     di, word_4A482 ;~ 274D:1181
cs=0x274d;eip=0x001185; 	X(MOV(*(dw*)(raddr(ds,bx+0x1BF0)), si));	// 71716                  mov     [bx+1BF0h], si ;~ 274D:1185
cs=0x274d;eip=0x001189; 	X(MOV(*(dw*)(raddr(ds,bx+0x1BF2)), di));	// 71717                  mov     [bx+1BF2h], di ;~ 274D:1189
cs=0x274d;eip=0x00118d; 	T(ax = word_4cdbb;);	// 71718                  mov     ax, word_4CDBB ;~ 274D:118D
cs=0x274d;eip=0x001190; 	X(IMUL1_2(word_4a4da));	// 71719                  imul    word_4A4DA ;~ 274D:1190
cs=0x274d;eip=0x001194; 	T(di = dx;);	// 71720                  mov     di, dx ;~ 274D:1194
cs=0x274d;eip=0x001196; 	T(si = ax;);	// 71721                  mov     si, ax ;~ 274D:1196
cs=0x274d;eip=0x001198; 	T(ax = word_4a4d4;);	// 71722                  mov     ax, word_4A4D4 ;~ 274D:1198
cs=0x274d;eip=0x00119b; 	T(IMUL1_2(cx));	// 71723                  imul    cx ;~ 274D:119B
cs=0x274d;eip=0x00119d; 	T(ADD(si, ax));	// 71724                  add     si, ax ;~ 274D:119D
cs=0x274d;eip=0x00119f; 	T(ADC(di, dx));	// 71725                  adc     di, dx ;~ 274D:119F
cs=0x274d;eip=0x0011a1; 	T(ax = word_4a4ce;);	// 71726                  mov     ax, word_4A4CE ;~ 274D:11A1
cs=0x274d;eip=0x0011a4; 	T(IMUL1_2(bp));	// 71727                  imul    bp ;~ 274D:11A4
cs=0x274d;eip=0x0011a6; 	T(ADD(si, ax));	// 71728                  add     si, ax ;~ 274D:11A6
cs=0x274d;eip=0x0011a8; 	T(ADC(di, dx));	// 71729                  adc     di, dx ;~ 274D:11A8
cs=0x274d;eip=0x0011aa; 	T(SHL(si, 1));	// 71730                  shl     si, 1 ;~ 274D:11AA
cs=0x274d;eip=0x0011ac; 	T(RCL(di, 1));	// 71731                  rcl     di, 1 ;~ 274D:11AC
cs=0x274d;eip=0x0011ae; 	T(ADD(si, word_4a484));	// 71732                  add     si, word_4A484 ;~ 274D:11AE
cs=0x274d;eip=0x0011b2; 	T(ADC(di, word_4a486));	// 71733                  adc     di, word_4A486 ;~ 274D:11B2
cs=0x274d;eip=0x0011b6; 	X(MOV(*(dw*)(raddr(ds,bx+0x1DD4)), si));	// 71734                  mov     [bx+1DD4h], si ;~ 274D:11B6
cs=0x274d;eip=0x0011ba; 	X(MOV(*(dw*)(raddr(ds,bx+0x1DD6)), di));	// 71735                  mov     [bx+1DD6h], di ;~ 274D:11BA
cs=0x274d;eip=0x0011be; 	J(CALL(sub_35b28,0));	// 71736                  call    sub_35B28 ;~ 274D:11BE
cs=0x274d;eip=0x0011c1; 	X(POP(si));	// 71737                  pop     si ;~ 274D:11C1
cs=0x274d;eip=0x0011c2; 	J(JMP(loc_36bba));	// 71738                  jmp     loc_36BBA ;~ 274D:11C2

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_36a28: 	goto loc_36a28;
        case m2c::kloc_36a38: 	goto loc_36a38;
        case m2c::kloc_36a42: 	goto loc_36a42;
        case m2c::kloc_36b2a: 	goto loc_36b2a;
        case m2c::kloc_36b2d: 	goto loc_36b2d;
        case m2c::kloc_36b3b: 	goto loc_36b3b;
        case m2c::kloc_36b47: 	goto loc_36b47;
        case m2c::kloc_36bba: 	goto loc_36bba;
        case m2c::kloc_36bc4: 	goto loc_36bc4;
        case m2c::klocret_36bc3: 	goto locret_36bc3;
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
cs=0x274d;eip=0x0011c6; 	X(PUSH(bp));	// 71748                  push    bp ;~ 274D:11C6
cs=0x274d;eip=0x0011c7; 	X(PUSH(si));	// 71749                  push    si ;~ 274D:11C7
cs=0x274d;eip=0x0011c8; 	X(PUSH(di));	// 71750                  push    di ;~ 274D:11C8
cs=0x274d;eip=0x0011c9; 	T(LES(si, dword_4a46c));	// 71751                  les     si, dword_4A46C ;~ 274D:11C9
cs=0x274d;eip=0x0011cd; 	J(CALL(sub_36c88,0));	// 71752                  call    sub_36C88 ;~ 274D:11CD
cs=0x274d;eip=0x0011d0; 	X(*(dw*)(&dword_4a46c) = si;);	// 71753                  mov     word ptr dword_4A46C, si ;~ 274D:11D0
cs=0x274d;eip=0x0011d4; 	X(POP(di));	// 71754                  pop     di ;~ 274D:11D4
cs=0x274d;eip=0x0011d5; 	X(POP(si));	// 71755                  pop     si ;~ 274D:11D5
cs=0x274d;eip=0x0011d6; 	X(POP(bp));	// 71756                  pop     bp ;~ 274D:11D6
cs=0x274d;eip=0x0011d7; 	J(RETF(0));	// 71757                  retf ;~ 274D:11D7

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
cs=0x274d;eip=0x0011d8; 	T(SUB(ah, ah));	// 71766                  sub     ah, ah ;~ 274D:11D8
cs=0x274d;eip=0x0011da; 	X(LODS(*(raddr(es,si)),si,1));	// 71767                  lods    byte ptr es:[si] ;~ 274D:11DA
cs=0x274d;eip=0x0011dc; 	T(OR(ax, ax));	// 71768                  or      ax, ax ;~ 274D:11DC
cs=0x274d;eip=0x0011de; 	J(JZ(locret_36ca5));	// 71769                  jz      short locret_36CA5 ;~ 274D:11DE
cs=0x274d;eip=0x0011e0; 	T(cx = ax;);	// 71770                  mov     cx, ax ;~ 274D:11E0
cs=0x274d;eip=0x0011e2; 	T(SUB(di, di));	// 71771                  sub     di, di ;~ 274D:11E2
cs=0x274d;eip=0x0011e4; 	T(ADD(di, 0x328E));	// 71772                  add     di, 328Eh ;~ 274D:11E4
loc_36c98:
	// 7121 
cs=0x274d;eip=0x0011e8; 	J(CALL(sub_37652,0));	// 71776                  call    sub_37652 ;~ 274D:11E8
cs=0x274d;eip=0x0011eb; 	J(JNZ(loc_36ca6));	// 71777                  jnz     short loc_36CA6 ;~ 274D:11EB
cs=0x274d;eip=0x0011ed; 	T(ADD(si, 2));	// 71778                  add     si, 2 ;~ 274D:11ED
cs=0x274d;eip=0x0011f0; 	T(ADD(di, 0x1A));	// 71779                  add     di, 1Ah ;~ 274D:11F0
cs=0x274d;eip=0x0011f3; 	J(LOOP(loc_36c98));	// 71780                  loop    loc_36C98 ;~ 274D:11F3
locret_36ca5:
	// 7122 
cs=0x274d;eip=0x0011f5; 	J(RETN(0));	// 71783                  retn ;~ 274D:11F5
loc_36ca6:
	// 7123 
cs=0x274d;eip=0x0011f6; 	T(SUB(ah, ah));	// 71787                  sub     ah, ah ;~ 274D:11F6
cs=0x274d;eip=0x0011f8; 	X(LODS(*(raddr(es,si)),si,1));	// 71788                  lods    byte ptr es:[si] ;~ 274D:11F8
cs=0x274d;eip=0x0011fa; 	T(bx = ax;);	// 71789                  mov     bx, ax ;~ 274D:11FA
cs=0x274d;eip=0x0011fc; 	T(SHL(bx, 1));	// 71790                  shl     bx, 1 ;~ 274D:11FC
cs=0x274d;eip=0x0011fe; 	T(SHL(bx, 1));	// 71791                  shl     bx, 1 ;~ 274D:11FE
cs=0x274d;eip=0x001200; 	X(LODS(*(raddr(es,si)),si,1));	// 71792                  lods    byte ptr es:[si] ;~ 274D:1200
cs=0x274d;eip=0x001202; 	T(bp = ax;);	// 71793                  mov     bp, ax ;~ 274D:1202
cs=0x274d;eip=0x001204; 	T(SHL(bp, 1));	// 71794                  shl     bp, 1 ;~ 274D:1204
cs=0x274d;eip=0x001206; 	T(SHL(bp, 1));	// 71795                  shl     bp, 1 ;~ 274D:1206
cs=0x274d;eip=0x001208; 	X(MOV(*(raddr(ds,di+0x18)), 0));	// 71796                  mov     byte ptr [di+18h], 0 ;~ 274D:1208
cs=0x274d;eip=0x00120c; 	T(CMP(*(dw*)(raddr(ds,bx+0x1DD6)), 1));	// 71797                  cmp     word ptr [bx+1DD6h], 1 ;~ 274D:120C
cs=0x274d;eip=0x001211; 	J(JL(loc_36cf0));	// 71798                  jl      short loc_36CF0 ;~ 274D:1211
cs=0x274d;eip=0x001213; 	T(CMP(*(dw*)(raddr(ss,bp+0x1DD6)), 1));	// 71799                  cmp     word ptr [bp+1DD6h], 1 ;~ 274D:1213
cs=0x274d;eip=0x001218; 	J(JL(loc_36ce8));	// 71800                  jl      short loc_36CE8 ;~ 274D:1218
cs=0x274d;eip=0x00121a; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1FB8))));	// 71801                  mov     ax, [bx+1FB8h] ;~ 274D:121A
cs=0x274d;eip=0x00121e; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 71802                  mov     [di], ax ;~ 274D:121E
cs=0x274d;eip=0x001220; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1FBA))));	// 71803                  mov     ax, [bx+1FBAh] ;~ 274D:1220
cs=0x274d;eip=0x001224; 	X(MOV(*(dw*)(raddr(ds,di+2)), ax));	// 71804                  mov     [di+2], ax ;~ 274D:1224
cs=0x274d;eip=0x001227; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x219C))));	// 71805                  mov     ax, [bx+219Ch] ;~ 274D:1227
cs=0x274d;eip=0x00122b; 	X(MOV(*(dw*)(raddr(ds,di+4)), ax));	// 71806                  mov     [di+4], ax ;~ 274D:122B
cs=0x274d;eip=0x00122e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x219E))));	// 71807                  mov     ax, [bx+219Eh] ;~ 274D:122E
cs=0x274d;eip=0x001232; 	X(MOV(*(dw*)(raddr(ds,di+6)), ax));	// 71808                  mov     [di+6], ax ;~ 274D:1232
cs=0x274d;eip=0x001235; 	J(JMP(loc_36d01));	// 71809                  jmp     short loc_36D01 ;~ 274D:1235
loc_36ce8:
	// 7124 
cs=0x274d;eip=0x001238; 	T(XCHG(bp, bx));	// 71815                  xchg    bp, bx ;~ 274D:1238
cs=0x274d;eip=0x00123a; 	J(CALL(sub_36d32,0));	// 71816                  call    sub_36D32 ;~ 274D:123A
cs=0x274d;eip=0x00123d; 	J(JMP(loc_36d01));	// 71817                  jmp     short loc_36D01 ;~ 274D:123D
loc_36cf0:
	// 7125 
cs=0x274d;eip=0x001240; 	T(CMP(*(dw*)(raddr(ss,bp+0x1DD6)), 1));	// 71823                  cmp     word ptr [bp+1DD6h], 1 ;~ 274D:1240
cs=0x274d;eip=0x001245; 	J(JGE(loc_36cfe));	// 71824                  jge     short loc_36CFE ;~ 274D:1245
cs=0x274d;eip=0x001247; 	X(OR(*(raddr(ds,di+0x18)), 0x80));	// 71825                  or      byte ptr [di+18h], 80h ;~ 274D:1247
cs=0x274d;eip=0x00124b; 	J(JMP(loc_36d28));	// 71826                  jmp     short loc_36D28 ;~ 274D:124B
loc_36cfe:
	// 7126 
cs=0x274d;eip=0x00124e; 	J(CALL(sub_36d32,0));	// 71832                  call    sub_36D32 ;~ 274D:124E
loc_36d01:
	// 7127 
cs=0x274d;eip=0x001251; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x1FB8))));	// 71836                  mov     ax, [bp+1FB8h] ;~ 274D:1251
cs=0x274d;eip=0x001255; 	X(MOV(*(dw*)(raddr(ds,di+8)), ax));	// 71837                  mov     [di+8], ax ;~ 274D:1255
cs=0x274d;eip=0x001258; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x1FBA))));	// 71838                  mov     ax, [bp+1FBAh] ;~ 274D:1258
cs=0x274d;eip=0x00125c; 	X(MOV(*(dw*)(raddr(ds,di+0x0A)), ax));	// 71839                  mov     [di+0Ah], ax ;~ 274D:125C
cs=0x274d;eip=0x00125f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x219C))));	// 71840                  mov     ax, [bp+219Ch] ;~ 274D:125F
cs=0x274d;eip=0x001263; 	X(MOV(*(dw*)(raddr(ds,di+0x0C)), ax));	// 71841                  mov     [di+0Ch], ax ;~ 274D:1263
cs=0x274d;eip=0x001266; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x219E))));	// 71842                  mov     ax, [bp+219Eh] ;~ 274D:1266
cs=0x274d;eip=0x00126a; 	X(MOV(*(dw*)(raddr(ds,di+0x0E)), ax));	// 71843                  mov     [di+0Eh], ax ;~ 274D:126A
cs=0x274d;eip=0x00126d; 	X(PUSH(cx));	// 71844                  push    cx ;~ 274D:126D
cs=0x274d;eip=0x00126e; 	X(PUSH(si));	// 71845                  push    si ;~ 274D:126E
cs=0x274d;eip=0x00126f; 	J(CALL(sub_35c0d,0));	// 71846                  call    sub_35C0D ;~ 274D:126F
cs=0x274d;eip=0x001272; 	T(es = *(dw*)(((db*)&dword_4a46c)+2););	// 71847                  mov     es, word ptr dword_4A46C+2 ;~ 274D:1272
cs=0x274d;eip=0x001276; 	X(POP(si));	// 71848                  pop     si ;~ 274D:1276
cs=0x274d;eip=0x001277; 	X(POP(cx));	// 71849                  pop     cx ;~ 274D:1277
loc_36d28:
	// 7128 
cs=0x274d;eip=0x001278; 	T(ADD(di, 0x1A));	// 71852                  add     di, 1Ah ;~ 274D:1278
cs=0x274d;eip=0x00127b; 	T(DEC(cx));	// 71853                  dec     cx ;~ 274D:127B
cs=0x274d;eip=0x00127c; 	J(JZ(locret_36d31));	// 71854                  jz      short locret_36D31 ;~ 274D:127C
cs=0x274d;eip=0x00127e; 	J(JMP(loc_36c98));	// 71855                  jmp     loc_36C98 ;~ 274D:127E
locret_36d31:
	// 7129 
cs=0x274d;eip=0x001281; 	J(RETN(0));	// 71859                  retn ;~ 274D:1281

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
cs=0x274d;eip=0x001282; 	X(PUSH(es));	// 71868                  push    es ;~ 274D:1282
cs=0x274d;eip=0x001283; 	X(PUSH(cx));	// 71869                  push    cx ;~ 274D:1283
cs=0x274d;eip=0x001284; 	X(PUSH(si));	// 71870                  push    si ;~ 274D:1284
cs=0x274d;eip=0x001285; 	X(PUSH(di));	// 71871                  push    di ;~ 274D:1285
cs=0x274d;eip=0x001286; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x1DD4))));	// 71872                  mov     ax, [bp+1DD4h] ;~ 274D:1286
cs=0x274d;eip=0x00128a; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x1DD6))));	// 71873                  mov     dx, [bp+1DD6h] ;~ 274D:128A
cs=0x274d;eip=0x00128e; 	T(cx = dx;);	// 71874                  mov     cx, dx ;~ 274D:128E
cs=0x274d;eip=0x001290; 	T(SUB(cx, *(dw*)(raddr(ds,bx+0x1DD6))));	// 71875                  sub     cx, [bx+1DD6h] ;~ 274D:1290
cs=0x274d;eip=0x001294; 	T(DEC(dx));	// 71876                  dec     dx ;~ 274D:1294
cs=0x274d;eip=0x001295; 	T(DIV2(cx));	// 71877                  div     cx ;~ 274D:1295
cs=0x274d;eip=0x001297; 	T(SHR(ax, 1));	// 71878                  shr     ax, 1 ;~ 274D:1297
cs=0x274d;eip=0x001299; 	T(cx = ax;);	// 71879                  mov     cx, ax ;~ 274D:1299
cs=0x274d;eip=0x00129b; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x1A0C))));	// 71880                  mov     dx, [bp+1A0Ch] ;~ 274D:129B
cs=0x274d;eip=0x00129f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x1A0E))));	// 71881                  mov     ax, [bp+1A0Eh] ;~ 274D:129F
cs=0x274d;eip=0x0012a3; 	T(si = dx;);	// 71882                  mov     si, dx ;~ 274D:12A3
cs=0x274d;eip=0x0012a5; 	T(di = ax;);	// 71883                  mov     di, ax ;~ 274D:12A5
cs=0x274d;eip=0x0012a7; 	T(SUB(dx, *(dw*)(raddr(ds,bx+0x1A0C))));	// 71884                  sub     dx, [bx+1A0Ch] ;~ 274D:12A7
cs=0x274d;eip=0x0012ab; 	T(SBB(ax, *(dw*)(raddr(ds,bx+0x1A0E))));	// 71885                  sbb     ax, [bx+1A0Eh] ;~ 274D:12AB
cs=0x274d;eip=0x0012af; 	T(SHL(dx, 1));	// 71886                  shl     dx, 1 ;~ 274D:12AF
cs=0x274d;eip=0x0012b1; 	T(ADC(ax, 0));	// 71887                  adc     ax, 0 ;~ 274D:12B1
cs=0x274d;eip=0x0012b4; 	T(IMUL1_2(cx));	// 71888                  imul    cx ;~ 274D:12B4
cs=0x274d;eip=0x0012b6; 	T(SHL(ax, 1));	// 71889                  shl     ax, 1 ;~ 274D:12B6
cs=0x274d;eip=0x0012b8; 	T(RCL(dx, 1));	// 71890                  rcl     dx, 1 ;~ 274D:12B8
cs=0x274d;eip=0x0012ba; 	T(SUB(si, ax));	// 71891                  sub     si, ax ;~ 274D:12BA
cs=0x274d;eip=0x0012bc; 	T(SBB(di, dx));	// 71892                  sbb     di, dx ;~ 274D:12BC
cs=0x274d;eip=0x0012be; 	X(word_4a6cc = si;);	// 71893                  mov     word_4A6CC, si ;~ 274D:12BE
cs=0x274d;eip=0x0012c2; 	X(word_4a6ce = di;);	// 71894                  mov     word_4A6CE, di ;~ 274D:12C2
cs=0x274d;eip=0x0012c6; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x1BF0))));	// 71895                  mov     dx, [bp+1BF0h] ;~ 274D:12C6
cs=0x274d;eip=0x0012ca; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x1BF2))));	// 71896                  mov     ax, [bp+1BF2h] ;~ 274D:12CA
cs=0x274d;eip=0x0012ce; 	T(si = dx;);	// 71897                  mov     si, dx ;~ 274D:12CE
cs=0x274d;eip=0x0012d0; 	T(di = ax;);	// 71898                  mov     di, ax ;~ 274D:12D0
cs=0x274d;eip=0x0012d2; 	T(SUB(dx, *(dw*)(raddr(ds,bx+0x1BF0))));	// 71899                  sub     dx, [bx+1BF0h] ;~ 274D:12D2
cs=0x274d;eip=0x0012d6; 	T(SBB(ax, *(dw*)(raddr(ds,bx+0x1BF2))));	// 71900                  sbb     ax, [bx+1BF2h] ;~ 274D:12D6
cs=0x274d;eip=0x0012da; 	T(SHL(dx, 1));	// 71901                  shl     dx, 1 ;~ 274D:12DA
cs=0x274d;eip=0x0012dc; 	T(ADC(ax, 0));	// 71902                  adc     ax, 0 ;~ 274D:12DC
cs=0x274d;eip=0x0012df; 	T(IMUL1_2(cx));	// 71903                  imul    cx ;~ 274D:12DF
cs=0x274d;eip=0x0012e1; 	T(SHL(ax, 1));	// 71904                  shl     ax, 1 ;~ 274D:12E1
cs=0x274d;eip=0x0012e3; 	T(RCL(dx, 1));	// 71905                  rcl     dx, 1 ;~ 274D:12E3
cs=0x274d;eip=0x0012e5; 	T(SUB(si, ax));	// 71906                  sub     si, ax ;~ 274D:12E5
cs=0x274d;eip=0x0012e7; 	T(SBB(di, dx));	// 71907                  sbb     di, dx ;~ 274D:12E7
cs=0x274d;eip=0x0012e9; 	X(word_4a8b0 = si;);	// 71908                  mov     word_4A8B0, si ;~ 274D:12E9
cs=0x274d;eip=0x0012ed; 	X(word_4a8b2 = di;);	// 71909                  mov     word_4A8B2, di ;~ 274D:12ED
cs=0x274d;eip=0x0012f1; 	X(word_4aa94 = 0;);	// 71910                  mov     word_4AA94, 0 ;~ 274D:12F1
cs=0x274d;eip=0x0012f7; 	X(word_4aa96 = 1;);	// 71911                  mov     word_4AA96, 1 ;~ 274D:12F7
cs=0x274d;eip=0x0012fd; 	X(PUSH(bx));	// 71912                  push    bx ;~ 274D:12FD
cs=0x274d;eip=0x0012fe; 	T(bx = 0x1E0;);	// 71913                  mov     bx, 1E0h ;~ 274D:12FE
cs=0x274d;eip=0x001301; 	J(CALL(sub_35b28,0));	// 71914                  call    sub_35B28 ;~ 274D:1301
cs=0x274d;eip=0x001304; 	X(POP(bx));	// 71915                  pop     bx ;~ 274D:1304
cs=0x274d;eip=0x001305; 	X(POP(di));	// 71916                  pop     di ;~ 274D:1305
cs=0x274d;eip=0x001306; 	T(LES(ax, *(dd*)(word_4ac78)));	// 71917                  les     ax, dword ptr word_4AC78 ;~ 274D:1306
cs=0x274d;eip=0x00130a; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 71919                  mov     [di], ax ;~ 274D:130A
cs=0x274d;eip=0x00130c; 	X(MOV(*(dw*)(raddr(ds,di+2)), es));	// 71920                  mov     word ptr [di+2], es ;~ 274D:130C
cs=0x274d;eip=0x00130f; 	X(MOV(*(dw*)(raddr(ds,di+0x10)), ax));	// 71921                  mov     [di+10h], ax ;~ 274D:130F
cs=0x274d;eip=0x001312; 	X(MOV(*(dw*)(raddr(ds,di+0x12)), es));	// 71922                  mov     word ptr [di+12h], es ;~ 274D:1312
cs=0x274d;eip=0x001315; 	T(LES(ax, *(dd*)(word_4ae5c)));	// 71923                  les     ax, dword ptr word_4AE5C ;~ 274D:1315
cs=0x274d;eip=0x001319; 	X(MOV(*(dw*)(raddr(ds,di+4)), ax));	// 71924                  mov     [di+4], ax ;~ 274D:1319
cs=0x274d;eip=0x00131c; 	X(MOV(*(dw*)(raddr(ds,di+6)), es));	// 71925                  mov     word ptr [di+6], es ;~ 274D:131C
cs=0x274d;eip=0x00131f; 	X(MOV(*(dw*)(raddr(ds,di+0x14)), ax));	// 71926                  mov     [di+14h], ax ;~ 274D:131F
cs=0x274d;eip=0x001322; 	X(MOV(*(dw*)(raddr(ds,di+0x16)), es));	// 71927                  mov     word ptr [di+16h], es ;~ 274D:1322
cs=0x274d;eip=0x001325; 	X(OR(*(dw*)(raddr(ds,di+0x18)), 0x40));	// 71928                  or      word ptr [di+18h], 40h ;~ 274D:1325
cs=0x274d;eip=0x001329; 	X(POP(si));	// 71929                  pop     si ;~ 274D:1329
cs=0x274d;eip=0x00132a; 	X(POP(cx));	// 71930                  pop     cx ;~ 274D:132A
cs=0x274d;eip=0x00132b; 	X(POP(es));	// 71931                  pop     es ;~ 274D:132B
cs=0x274d;eip=0x00132c; 	J(RETN(0));	// 71933                  retn ;~ 274D:132C

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
	// 71946 arg_0           = word ptr  6 ;~ 274D:132E
#undef arg_2
#define arg_2 8
	// 71947 arg_2           = word ptr  8 ;~ 274D:132E
#undef arg_4
#define arg_4 0x0A
	// 71948 arg_4           = word ptr  0Ah ;~ 274D:132E
#undef arg_6
#define arg_6 0x0C
	// 71949 arg_6           = word ptr  0Ch ;~ 274D:132E
cs=0x274d;eip=0x00132e; 	X(PUSH(bp));	// 71951                  push    bp ;~ 274D:132E
cs=0x274d;eip=0x00132f; 	T(bp = sp;);	// 71952                  mov     bp, sp ;~ 274D:132F
cs=0x274d;eip=0x001331; 	X(PUSH(si));	// 71953                  push    si ;~ 274D:1331
cs=0x274d;eip=0x001332; 	X(PUSH(di));	// 71954                  push    di ;~ 274D:1332
cs=0x274d;eip=0x001333; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 71955                  mov     di, [bp+arg_0] ;~ 274D:1333
cs=0x274d;eip=0x001336; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_2))));	// 71956                  mov     cx, [bp+arg_2] ;~ 274D:1336
cs=0x274d;eip=0x001339; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 71957                  mov     si, [bp+arg_4] ;~ 274D:1339
cs=0x274d;eip=0x00133c; 	T(MOV(bp, *(dw*)(raddr(ss,bp+arg_6))));	// 71958                  mov     bp, [bp+arg_6] ;~ 274D:133C
cs=0x274d;eip=0x00133f; 	J(CALL(sub_36e0f,0));	// 71959                  call    sub_36E0F ;~ 274D:133F
cs=0x274d;eip=0x001342; 	X(POP(di));	// 71960                  pop     di ;~ 274D:1342
cs=0x274d;eip=0x001343; 	X(POP(si));	// 71961                  pop     si ;~ 274D:1343
cs=0x274d;eip=0x001344; 	X(POP(bp));	// 71962                  pop     bp ;~ 274D:1344
cs=0x274d;eip=0x001345; 	J(RETF(0));	// 71963                  retf ;~ 274D:1345

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
cs=0x274d;eip=0x001346; 	X(PUSH(bp));	// 71967                  push    bp ;~ 274D:1346
cs=0x274d;eip=0x001347; 	X(PUSH(si));	// 71968                  push    si ;~ 274D:1347
cs=0x274d;eip=0x001348; 	X(PUSH(di));	// 71969                  push    di ;~ 274D:1348
cs=0x274d;eip=0x001349; 	T(di = 0x19D8;);	// 71970                  mov     di, 19D8h ;~ 274D:1349
cs=0x274d;eip=0x00134c; 	T(cx = word_4a476;);	// 71971                  mov     cx, word_4A476 ;~ 274D:134C
cs=0x274d;eip=0x001350; 	T(si = word_4a478;);	// 71972                  mov     si, word_4A478 ;~ 274D:1350
cs=0x274d;eip=0x001354; 	T(bp = word_4a47a;);	// 71973                  mov     bp, word_4A47A ;~ 274D:1354
cs=0x274d;eip=0x001358; 	J(CALL(sub_36f2b,0));	// 71974                  call    sub_36F2B ;~ 274D:1358
cs=0x274d;eip=0x00135b; 	X(POP(di));	// 71975                  pop     di ;~ 274D:135B
cs=0x274d;eip=0x00135c; 	X(POP(si));	// 71976                  pop     si ;~ 274D:135C
cs=0x274d;eip=0x00135d; 	X(POP(bp));	// 71977                  pop     bp ;~ 274D:135D
cs=0x274d;eip=0x00135e; 	J(RETN(0));	// 71978                  retn ;~ 274D:135E

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
cs=0x274d;eip=0x00135f; 	T(bx = cx;);	// 71984                  mov     bx, cx ;~ 274D:135F
cs=0x274d;eip=0x001361; 	J(CALLF(sub_29df1,0));	// 71985                  call    sub_29DF1 ;~ 274D:1361
cs=0x274d;eip=0x001366; 	X(word_4a49a = bx;);	// 71986                  mov     word_4A49A, bx ;~ 274D:1366
cs=0x274d;eip=0x00136a; 	T(bx = cx;);	// 71987                  mov     bx, cx ;~ 274D:136A
cs=0x274d;eip=0x00136c; 	J(CALLF(sub_29df5,0));	// 71988                  call    sub_29DF5 ;~ 274D:136C
cs=0x274d;eip=0x001371; 	X(word_4a49c = bx;);	// 71989                  mov     word_4A49C, bx ;~ 274D:1371
cs=0x274d;eip=0x001375; 	T(bx = bp;);	// 71990                  mov     bx, bp ;~ 274D:1375
cs=0x274d;eip=0x001377; 	J(CALLF(sub_29df1,0));	// 71991                  call    sub_29DF1 ;~ 274D:1377
cs=0x274d;eip=0x00137c; 	X(word_4a4a2 = bx;);	// 71992                  mov     word_4A4A2, bx ;~ 274D:137C
cs=0x274d;eip=0x001380; 	T(bx = bp;);	// 71993                  mov     bx, bp ;~ 274D:1380
cs=0x274d;eip=0x001382; 	J(CALLF(sub_29df5,0));	// 71994                  call    sub_29DF5 ;~ 274D:1382
cs=0x274d;eip=0x001387; 	X(word_4a4a4 = bx;);	// 71995                  mov     word_4A4A4, bx ;~ 274D:1387
cs=0x274d;eip=0x00138b; 	T(bx = si;);	// 71996                  mov     bx, si ;~ 274D:138B
cs=0x274d;eip=0x00138d; 	J(CALLF(sub_29df1,0));	// 71997                  call    sub_29DF1 ;~ 274D:138D
cs=0x274d;eip=0x001392; 	X(word_4a49e = bx;);	// 71998                  mov     word_4A49E, bx ;~ 274D:1392
cs=0x274d;eip=0x001396; 	T(bx = si;);	// 71999                  mov     bx, si ;~ 274D:1396
cs=0x274d;eip=0x001398; 	J(CALLF(sub_29df5,0));	// 72000                  call    sub_29DF5 ;~ 274D:1398
cs=0x274d;eip=0x00139d; 	X(word_4a4a0 = bx;);	// 72001                  mov     word_4A4A0, bx ;~ 274D:139D
cs=0x274d;eip=0x0013a1; 	T(ax = word_4a49e;);	// 72002                  mov     ax, word_4A49E ;~ 274D:13A1
cs=0x274d;eip=0x0013a4; 	X(IMUL1_2(word_4a4a2));	// 72003                  imul    word_4A4A2 ;~ 274D:13A4
cs=0x274d;eip=0x0013a8; 	T(SHL(ax, 1));	// 72004                  shl     ax, 1 ;~ 274D:13A8
cs=0x274d;eip=0x0013aa; 	T(RCL(dx, 1));	// 72005                  rcl     dx, 1 ;~ 274D:13AA
cs=0x274d;eip=0x0013ac; 	T(si = dx;);	// 72006                  mov     si, dx ;~ 274D:13AC
cs=0x274d;eip=0x0013ae; 	T(ax = dx;);	// 72007                  mov     ax, dx ;~ 274D:13AE
cs=0x274d;eip=0x0013b0; 	X(IMUL1_2(word_4a49a));	// 72008                  imul    word_4A49A ;~ 274D:13B0
cs=0x274d;eip=0x0013b4; 	T(SHL(ax, 1));	// 72009                  shl     ax, 1 ;~ 274D:13B4
cs=0x274d;eip=0x0013b6; 	T(RCL(dx, 1));	// 72010                  rcl     dx, 1 ;~ 274D:13B6
cs=0x274d;eip=0x0013b8; 	T(bx = ax;);	// 72011                  mov     bx, ax ;~ 274D:13B8
cs=0x274d;eip=0x0013ba; 	T(cx = dx;);	// 72012                  mov     cx, dx ;~ 274D:13BA
cs=0x274d;eip=0x0013bc; 	T(ax = word_4a49c;);	// 72013                  mov     ax, word_4A49C ;~ 274D:13BC
cs=0x274d;eip=0x0013bf; 	X(IMUL1_2(word_4a4a4));	// 72014                  imul    word_4A4A4 ;~ 274D:13BF
cs=0x274d;eip=0x0013c3; 	T(SHL(ax, 1));	// 72015                  shl     ax, 1 ;~ 274D:13C3
cs=0x274d;eip=0x0013c5; 	T(RCL(dx, 1));	// 72016                  rcl     dx, 1 ;~ 274D:13C5
cs=0x274d;eip=0x0013c7; 	T(ADD(ax, bx));	// 72017                  add     ax, bx ;~ 274D:13C7
cs=0x274d;eip=0x0013c9; 	T(ADC(dx, cx));	// 72018                  adc     dx, cx ;~ 274D:13C9
cs=0x274d;eip=0x0013cb; 	X(MOV(*(dw*)(raddr(ds,di)), dx));	// 72019                  mov     [di], dx ;~ 274D:13CB
cs=0x274d;eip=0x0013cd; 	T(ax = word_4a49e;);	// 72020                  mov     ax, word_4A49E ;~ 274D:13CD
cs=0x274d;eip=0x0013d0; 	X(IMUL1_2(word_4a4a4));	// 72021                  imul    word_4A4A4 ;~ 274D:13D0
cs=0x274d;eip=0x0013d4; 	T(SHL(ax, 1));	// 72022                  shl     ax, 1 ;~ 274D:13D4
cs=0x274d;eip=0x0013d6; 	T(RCL(dx, 1));	// 72023                  rcl     dx, 1 ;~ 274D:13D6
cs=0x274d;eip=0x0013d8; 	T(bp = dx;);	// 72024                  mov     bp, dx ;~ 274D:13D8
cs=0x274d;eip=0x0013da; 	T(ax = dx;);	// 72025                  mov     ax, dx ;~ 274D:13DA
cs=0x274d;eip=0x0013dc; 	X(IMUL1_2(word_4a49a));	// 72026                  imul    word_4A49A ;~ 274D:13DC
cs=0x274d;eip=0x0013e0; 	T(SHL(ax, 1));	// 72027                  shl     ax, 1 ;~ 274D:13E0
cs=0x274d;eip=0x0013e2; 	T(RCL(dx, 1));	// 72028                  rcl     dx, 1 ;~ 274D:13E2
cs=0x274d;eip=0x0013e4; 	T(bx = ax;);	// 72029                  mov     bx, ax ;~ 274D:13E4
cs=0x274d;eip=0x0013e6; 	T(cx = dx;);	// 72030                  mov     cx, dx ;~ 274D:13E6
cs=0x274d;eip=0x0013e8; 	T(ax = word_4a49c;);	// 72031                  mov     ax, word_4A49C ;~ 274D:13E8
cs=0x274d;eip=0x0013eb; 	X(IMUL1_2(word_4a4a2));	// 72032                  imul    word_4A4A2 ;~ 274D:13EB
cs=0x274d;eip=0x0013ef; 	T(SHL(ax, 1));	// 72033                  shl     ax, 1 ;~ 274D:13EF
cs=0x274d;eip=0x0013f1; 	T(RCL(dx, 1));	// 72034                  rcl     dx, 1 ;~ 274D:13F1
cs=0x274d;eip=0x0013f3; 	T(SUB(bx, ax));	// 72035                  sub     bx, ax ;~ 274D:13F3
cs=0x274d;eip=0x0013f5; 	T(SBB(cx, dx));	// 72036                  sbb     cx, dx ;~ 274D:13F5
cs=0x274d;eip=0x0013f7; 	X(MOV(*(dw*)(raddr(ds,di+2)), cx));	// 72037                  mov     [di+2], cx ;~ 274D:13F7
cs=0x274d;eip=0x0013fa; 	T(ax = word_4a49a;);	// 72038                  mov     ax, word_4A49A ;~ 274D:13FA
cs=0x274d;eip=0x0013fd; 	X(IMUL1_2(word_4a4a0));	// 72039                  imul    word_4A4A0 ;~ 274D:13FD
cs=0x274d;eip=0x001401; 	T(SHL(ax, 1));	// 72040                  shl     ax, 1 ;~ 274D:1401
cs=0x274d;eip=0x001403; 	T(RCL(dx, 1));	// 72041                  rcl     dx, 1 ;~ 274D:1403
cs=0x274d;eip=0x001405; 	X(MOV(*(dw*)(raddr(ds,di+4)), dx));	// 72042                  mov     [di+4], dx ;~ 274D:1405
cs=0x274d;eip=0x001408; 	T(ax = word_4a4a2;);	// 72043                  mov     ax, word_4A4A2 ;~ 274D:1408
cs=0x274d;eip=0x00140b; 	X(IMUL1_2(word_4a4a0));	// 72044                  imul    word_4A4A0 ;~ 274D:140B
cs=0x274d;eip=0x00140f; 	T(SHL(ax, 1));	// 72045                  shl     ax, 1 ;~ 274D:140F
cs=0x274d;eip=0x001411; 	T(RCL(dx, 1));	// 72046                  rcl     dx, 1 ;~ 274D:1411
cs=0x274d;eip=0x001413; 	X(MOV(*(dw*)(raddr(ds,di+6)), dx));	// 72047                  mov     [di+6], dx ;~ 274D:1413
cs=0x274d;eip=0x001416; 	T(ax = word_4a4a4;);	// 72048                  mov     ax, word_4A4A4 ;~ 274D:1416
cs=0x274d;eip=0x001419; 	X(IMUL1_2(word_4a4a0));	// 72049                  imul    word_4A4A0 ;~ 274D:1419
cs=0x274d;eip=0x00141d; 	T(SHL(ax, 1));	// 72050                  shl     ax, 1 ;~ 274D:141D
cs=0x274d;eip=0x00141f; 	T(RCL(dx, 1));	// 72051                  rcl     dx, 1 ;~ 274D:141F
cs=0x274d;eip=0x001421; 	X(MOV(*(dw*)(raddr(ds,di+8)), dx));	// 72052                  mov     [di+8], dx ;~ 274D:1421
cs=0x274d;eip=0x001424; 	T(ax = word_4a49e;);	// 72053                  mov     ax, word_4A49E ;~ 274D:1424
cs=0x274d;eip=0x001427; 	T(NEG(ax));	// 72054                  neg     ax ;~ 274D:1427
cs=0x274d;eip=0x001429; 	X(MOV(*(dw*)(raddr(ds,di+0x0A)), ax));	// 72055                  mov     [di+0Ah], ax ;~ 274D:1429
cs=0x274d;eip=0x00142c; 	T(ax = si;);	// 72056                  mov     ax, si ;~ 274D:142C
cs=0x274d;eip=0x00142e; 	X(IMUL1_2(word_4a49c));	// 72057                  imul    word_4A49C ;~ 274D:142E
cs=0x274d;eip=0x001432; 	T(SHL(ax, 1));	// 72058                  shl     ax, 1 ;~ 274D:1432
cs=0x274d;eip=0x001434; 	T(RCL(dx, 1));	// 72059                  rcl     dx, 1 ;~ 274D:1434
cs=0x274d;eip=0x001436; 	T(bx = ax;);	// 72060                  mov     bx, ax ;~ 274D:1436
cs=0x274d;eip=0x001438; 	T(cx = dx;);	// 72061                  mov     cx, dx ;~ 274D:1438
cs=0x274d;eip=0x00143a; 	T(ax = word_4a49a;);	// 72062                  mov     ax, word_4A49A ;~ 274D:143A
cs=0x274d;eip=0x00143d; 	X(IMUL1_2(word_4a4a4));	// 72063                  imul    word_4A4A4 ;~ 274D:143D
cs=0x274d;eip=0x001441; 	T(SHL(ax, 1));	// 72064                  shl     ax, 1 ;~ 274D:1441
cs=0x274d;eip=0x001443; 	T(RCL(dx, 1));	// 72065                  rcl     dx, 1 ;~ 274D:1443
cs=0x274d;eip=0x001445; 	T(SUB(bx, ax));	// 72066                  sub     bx, ax ;~ 274D:1445
cs=0x274d;eip=0x001447; 	T(SBB(cx, dx));	// 72067                  sbb     cx, dx ;~ 274D:1447
cs=0x274d;eip=0x001449; 	X(MOV(*(dw*)(raddr(ds,di+0x0C)), cx));	// 72068                  mov     [di+0Ch], cx ;~ 274D:1449
cs=0x274d;eip=0x00144c; 	T(ax = bp;);	// 72069                  mov     ax, bp ;~ 274D:144C
cs=0x274d;eip=0x00144e; 	X(IMUL1_2(word_4a49c));	// 72070                  imul    word_4A49C ;~ 274D:144E
cs=0x274d;eip=0x001452; 	T(SHL(ax, 1));	// 72071                  shl     ax, 1 ;~ 274D:1452
cs=0x274d;eip=0x001454; 	T(RCL(dx, 1));	// 72072                  rcl     dx, 1 ;~ 274D:1454
cs=0x274d;eip=0x001456; 	T(bx = ax;);	// 72073                  mov     bx, ax ;~ 274D:1456
cs=0x274d;eip=0x001458; 	T(cx = dx;);	// 72074                  mov     cx, dx ;~ 274D:1458
cs=0x274d;eip=0x00145a; 	T(ax = word_4a49a;);	// 72075                  mov     ax, word_4A49A ;~ 274D:145A
cs=0x274d;eip=0x00145d; 	X(IMUL1_2(word_4a4a2));	// 72076                  imul    word_4A4A2 ;~ 274D:145D
cs=0x274d;eip=0x001461; 	T(SHL(ax, 1));	// 72077                  shl     ax, 1 ;~ 274D:1461
cs=0x274d;eip=0x001463; 	T(RCL(dx, 1));	// 72078                  rcl     dx, 1 ;~ 274D:1463
cs=0x274d;eip=0x001465; 	T(ADD(ax, bx));	// 72079                  add     ax, bx ;~ 274D:1465
cs=0x274d;eip=0x001467; 	T(ADC(dx, cx));	// 72080                  adc     dx, cx ;~ 274D:1467
cs=0x274d;eip=0x001469; 	X(MOV(*(dw*)(raddr(ds,di+0x0E)), dx));	// 72081                  mov     [di+0Eh], dx ;~ 274D:1469
cs=0x274d;eip=0x00146c; 	T(ax = word_4a49c;);	// 72082                  mov     ax, word_4A49C ;~ 274D:146C
cs=0x274d;eip=0x00146f; 	X(IMUL1_2(word_4a4a0));	// 72083                  imul    word_4A4A0 ;~ 274D:146F
cs=0x274d;eip=0x001473; 	T(SHL(ax, 1));	// 72084                  shl     ax, 1 ;~ 274D:1473
cs=0x274d;eip=0x001475; 	T(RCL(dx, 1));	// 72085                  rcl     dx, 1 ;~ 274D:1475
cs=0x274d;eip=0x001477; 	X(MOV(*(dw*)(raddr(ds,di+0x10)), dx));	// 72086                  mov     [di+10h], dx ;~ 274D:1477
cs=0x274d;eip=0x00147a; 	J(RETN(0));	// 72087                  retn ;~ 274D:147A

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
cs=0x274d;eip=0x00147b; 	T(bx = cx;);	// 72096                  mov     bx, cx ;~ 274D:147B
cs=0x274d;eip=0x00147d; 	J(CALLF(sub_29df1,0));	// 72097                  call    sub_29DF1 ;~ 274D:147D
cs=0x274d;eip=0x001482; 	X(word_4a49a = bx;);	// 72098                  mov     word_4A49A, bx ;~ 274D:1482
cs=0x274d;eip=0x001486; 	T(bx = cx;);	// 72099                  mov     bx, cx ;~ 274D:1486
cs=0x274d;eip=0x001488; 	J(CALLF(sub_29df5,0));	// 72100                  call    sub_29DF5 ;~ 274D:1488
cs=0x274d;eip=0x00148d; 	X(word_4a49c = bx;);	// 72101                  mov     word_4A49C, bx ;~ 274D:148D
cs=0x274d;eip=0x001491; 	T(bx = bp;);	// 72102                  mov     bx, bp ;~ 274D:1491
cs=0x274d;eip=0x001493; 	J(CALLF(sub_29df1,0));	// 72103                  call    sub_29DF1 ;~ 274D:1493
cs=0x274d;eip=0x001498; 	X(word_4a4a2 = bx;);	// 72104                  mov     word_4A4A2, bx ;~ 274D:1498
cs=0x274d;eip=0x00149c; 	T(bx = bp;);	// 72105                  mov     bx, bp ;~ 274D:149C
cs=0x274d;eip=0x00149e; 	J(CALLF(sub_29df5,0));	// 72106                  call    sub_29DF5 ;~ 274D:149E
cs=0x274d;eip=0x0014a3; 	X(word_4a4a4 = bx;);	// 72107                  mov     word_4A4A4, bx ;~ 274D:14A3
cs=0x274d;eip=0x0014a7; 	T(bx = si;);	// 72108                  mov     bx, si ;~ 274D:14A7
cs=0x274d;eip=0x0014a9; 	J(CALLF(sub_29df1,0));	// 72109                  call    sub_29DF1 ;~ 274D:14A9
cs=0x274d;eip=0x0014ae; 	X(word_4a49e = bx;);	// 72110                  mov     word_4A49E, bx ;~ 274D:14AE
cs=0x274d;eip=0x0014b2; 	T(bx = si;);	// 72111                  mov     bx, si ;~ 274D:14B2
cs=0x274d;eip=0x0014b4; 	J(CALLF(sub_29df5,0));	// 72112                  call    sub_29DF5 ;~ 274D:14B4
cs=0x274d;eip=0x0014b9; 	X(word_4a4a0 = bx;);	// 72113                  mov     word_4A4A0, bx ;~ 274D:14B9
cs=0x274d;eip=0x0014bd; 	T(ax = word_4a49e;);	// 72114                  mov     ax, word_4A49E ;~ 274D:14BD
cs=0x274d;eip=0x0014c0; 	X(IMUL1_2(word_4a4a2));	// 72115                  imul    word_4A4A2 ;~ 274D:14C0
cs=0x274d;eip=0x0014c4; 	T(SHL(ax, 1));	// 72116                  shl     ax, 1 ;~ 274D:14C4
cs=0x274d;eip=0x0014c6; 	T(RCL(dx, 1));	// 72117                  rcl     dx, 1 ;~ 274D:14C6
cs=0x274d;eip=0x0014c8; 	T(si = dx;);	// 72118                  mov     si, dx ;~ 274D:14C8
cs=0x274d;eip=0x0014ca; 	T(ax = dx;);	// 72119                  mov     ax, dx ;~ 274D:14CA
cs=0x274d;eip=0x0014cc; 	X(IMUL1_2(word_4a49a));	// 72120                  imul    word_4A49A ;~ 274D:14CC
cs=0x274d;eip=0x0014d0; 	T(SHL(ax, 1));	// 72121                  shl     ax, 1 ;~ 274D:14D0
cs=0x274d;eip=0x0014d2; 	T(RCL(dx, 1));	// 72122                  rcl     dx, 1 ;~ 274D:14D2
cs=0x274d;eip=0x0014d4; 	T(bx = ax;);	// 72123                  mov     bx, ax ;~ 274D:14D4
cs=0x274d;eip=0x0014d6; 	T(cx = dx;);	// 72124                  mov     cx, dx ;~ 274D:14D6
cs=0x274d;eip=0x0014d8; 	T(ax = word_4a49c;);	// 72125                  mov     ax, word_4A49C ;~ 274D:14D8
cs=0x274d;eip=0x0014db; 	X(IMUL1_2(word_4a4a4));	// 72126                  imul    word_4A4A4 ;~ 274D:14DB
cs=0x274d;eip=0x0014df; 	T(SHL(ax, 1));	// 72127                  shl     ax, 1 ;~ 274D:14DF
cs=0x274d;eip=0x0014e1; 	T(RCL(dx, 1));	// 72128                  rcl     dx, 1 ;~ 274D:14E1
cs=0x274d;eip=0x0014e3; 	T(SUB(ax, bx));	// 72129                  sub     ax, bx ;~ 274D:14E3
cs=0x274d;eip=0x0014e5; 	T(SBB(dx, cx));	// 72130                  sbb     dx, cx ;~ 274D:14E5
cs=0x274d;eip=0x0014e7; 	X(MOV(*(dw*)(raddr(ds,di)), dx));	// 72131                  mov     [di], dx ;~ 274D:14E7
cs=0x274d;eip=0x0014e9; 	T(ax = word_4a49e;);	// 72132                  mov     ax, word_4A49E ;~ 274D:14E9
cs=0x274d;eip=0x0014ec; 	X(IMUL1_2(word_4a4a4));	// 72133                  imul    word_4A4A4 ;~ 274D:14EC
cs=0x274d;eip=0x0014f0; 	T(SHL(ax, 1));	// 72134                  shl     ax, 1 ;~ 274D:14F0
cs=0x274d;eip=0x0014f2; 	T(RCL(dx, 1));	// 72135                  rcl     dx, 1 ;~ 274D:14F2
cs=0x274d;eip=0x0014f4; 	T(bp = dx;);	// 72136                  mov     bp, dx ;~ 274D:14F4
cs=0x274d;eip=0x0014f6; 	T(ax = dx;);	// 72137                  mov     ax, dx ;~ 274D:14F6
cs=0x274d;eip=0x0014f8; 	X(IMUL1_2(word_4a49a));	// 72138                  imul    word_4A49A ;~ 274D:14F8
cs=0x274d;eip=0x0014fc; 	T(SHL(ax, 1));	// 72139                  shl     ax, 1 ;~ 274D:14FC
cs=0x274d;eip=0x0014fe; 	T(RCL(dx, 1));	// 72140                  rcl     dx, 1 ;~ 274D:14FE
cs=0x274d;eip=0x001500; 	T(bx = ax;);	// 72141                  mov     bx, ax ;~ 274D:1500
cs=0x274d;eip=0x001502; 	T(cx = dx;);	// 72142                  mov     cx, dx ;~ 274D:1502
cs=0x274d;eip=0x001504; 	T(ax = word_4a49c;);	// 72143                  mov     ax, word_4A49C ;~ 274D:1504
cs=0x274d;eip=0x001507; 	X(IMUL1_2(word_4a4a2));	// 72144                  imul    word_4A4A2 ;~ 274D:1507
cs=0x274d;eip=0x00150b; 	T(SHL(ax, 1));	// 72145                  shl     ax, 1 ;~ 274D:150B
cs=0x274d;eip=0x00150d; 	T(RCL(dx, 1));	// 72146                  rcl     dx, 1 ;~ 274D:150D
cs=0x274d;eip=0x00150f; 	T(ADD(bx, ax));	// 72147                  add     bx, ax ;~ 274D:150F
cs=0x274d;eip=0x001511; 	T(ADC(cx, dx));	// 72148                  adc     cx, dx ;~ 274D:1511
cs=0x274d;eip=0x001513; 	X(MOV(*(dw*)(raddr(ds,di+6)), cx));	// 72149                  mov     [di+6], cx ;~ 274D:1513
cs=0x274d;eip=0x001516; 	T(ax = word_4a49a;);	// 72150                  mov     ax, word_4A49A ;~ 274D:1516
cs=0x274d;eip=0x001519; 	X(IMUL1_2(word_4a4a0));	// 72151                  imul    word_4A4A0 ;~ 274D:1519
cs=0x274d;eip=0x00151d; 	T(SHL(ax, 1));	// 72152                  shl     ax, 1 ;~ 274D:151D
cs=0x274d;eip=0x00151f; 	T(RCL(dx, 1));	// 72153                  rcl     dx, 1 ;~ 274D:151F
cs=0x274d;eip=0x001521; 	T(NEG(dx));	// 72154                  neg     dx ;~ 274D:1521
cs=0x274d;eip=0x001523; 	X(MOV(*(dw*)(raddr(ds,di+0x0C)), dx));	// 72155                  mov     [di+0Ch], dx ;~ 274D:1523
cs=0x274d;eip=0x001526; 	T(ax = word_4a4a2;);	// 72156                  mov     ax, word_4A4A2 ;~ 274D:1526
cs=0x274d;eip=0x001529; 	X(IMUL1_2(word_4a4a0));	// 72157                  imul    word_4A4A0 ;~ 274D:1529
cs=0x274d;eip=0x00152d; 	T(SHL(ax, 1));	// 72158                  shl     ax, 1 ;~ 274D:152D
cs=0x274d;eip=0x00152f; 	T(RCL(dx, 1));	// 72159                  rcl     dx, 1 ;~ 274D:152F
cs=0x274d;eip=0x001531; 	T(NEG(dx));	// 72160                  neg     dx ;~ 274D:1531
cs=0x274d;eip=0x001533; 	X(MOV(*(dw*)(raddr(ds,di+2)), dx));	// 72161                  mov     [di+2], dx ;~ 274D:1533
cs=0x274d;eip=0x001536; 	T(ax = word_4a4a4;);	// 72162                  mov     ax, word_4A4A4 ;~ 274D:1536
cs=0x274d;eip=0x001539; 	X(IMUL1_2(word_4a4a0));	// 72163                  imul    word_4A4A0 ;~ 274D:1539
cs=0x274d;eip=0x00153d; 	T(SHL(ax, 1));	// 72164                  shl     ax, 1 ;~ 274D:153D
cs=0x274d;eip=0x00153f; 	T(RCL(dx, 1));	// 72165                  rcl     dx, 1 ;~ 274D:153F
cs=0x274d;eip=0x001541; 	X(MOV(*(dw*)(raddr(ds,di+8)), dx));	// 72166                  mov     [di+8], dx ;~ 274D:1541
cs=0x274d;eip=0x001544; 	T(ax = word_4a49e;);	// 72167                  mov     ax, word_4A49E ;~ 274D:1544
cs=0x274d;eip=0x001547; 	X(MOV(*(dw*)(raddr(ds,di+0x0E)), ax));	// 72168                  mov     [di+0Eh], ax ;~ 274D:1547
cs=0x274d;eip=0x00154a; 	T(ax = si;);	// 72169                  mov     ax, si ;~ 274D:154A
cs=0x274d;eip=0x00154c; 	X(IMUL1_2(word_4a49c));	// 72170                  imul    word_4A49C ;~ 274D:154C
cs=0x274d;eip=0x001550; 	T(SHL(ax, 1));	// 72171                  shl     ax, 1 ;~ 274D:1550
cs=0x274d;eip=0x001552; 	T(RCL(dx, 1));	// 72172                  rcl     dx, 1 ;~ 274D:1552
cs=0x274d;eip=0x001554; 	T(bx = ax;);	// 72173                  mov     bx, ax ;~ 274D:1554
cs=0x274d;eip=0x001556; 	T(cx = dx;);	// 72174                  mov     cx, dx ;~ 274D:1556
cs=0x274d;eip=0x001558; 	T(ax = word_4a49a;);	// 72175                  mov     ax, word_4A49A ;~ 274D:1558
cs=0x274d;eip=0x00155b; 	X(IMUL1_2(word_4a4a4));	// 72176                  imul    word_4A4A4 ;~ 274D:155B
cs=0x274d;eip=0x00155f; 	T(SHL(ax, 1));	// 72177                  shl     ax, 1 ;~ 274D:155F
cs=0x274d;eip=0x001561; 	T(RCL(dx, 1));	// 72178                  rcl     dx, 1 ;~ 274D:1561
cs=0x274d;eip=0x001563; 	T(ADD(bx, ax));	// 72179                  add     bx, ax ;~ 274D:1563
cs=0x274d;eip=0x001565; 	T(ADC(cx, dx));	// 72180                  adc     cx, dx ;~ 274D:1565
cs=0x274d;eip=0x001567; 	X(MOV(*(dw*)(raddr(ds,di+4)), cx));	// 72181                  mov     [di+4], cx ;~ 274D:1567
cs=0x274d;eip=0x00156a; 	T(ax = bp;);	// 72182                  mov     ax, bp ;~ 274D:156A
cs=0x274d;eip=0x00156c; 	X(IMUL1_2(word_4a49c));	// 72183                  imul    word_4A49C ;~ 274D:156C
cs=0x274d;eip=0x001570; 	T(SHL(ax, 1));	// 72184                  shl     ax, 1 ;~ 274D:1570
cs=0x274d;eip=0x001572; 	T(RCL(dx, 1));	// 72185                  rcl     dx, 1 ;~ 274D:1572
cs=0x274d;eip=0x001574; 	T(bx = ax;);	// 72186                  mov     bx, ax ;~ 274D:1574
cs=0x274d;eip=0x001576; 	T(cx = dx;);	// 72187                  mov     cx, dx ;~ 274D:1576
cs=0x274d;eip=0x001578; 	T(ax = word_4a49a;);	// 72188                  mov     ax, word_4A49A ;~ 274D:1578
cs=0x274d;eip=0x00157b; 	X(IMUL1_2(word_4a4a2));	// 72189                  imul    word_4A4A2 ;~ 274D:157B
cs=0x274d;eip=0x00157f; 	T(SHL(ax, 1));	// 72190                  shl     ax, 1 ;~ 274D:157F
cs=0x274d;eip=0x001581; 	T(RCL(dx, 1));	// 72191                  rcl     dx, 1 ;~ 274D:1581
cs=0x274d;eip=0x001583; 	T(SUB(ax, bx));	// 72192                  sub     ax, bx ;~ 274D:1583
cs=0x274d;eip=0x001585; 	T(SBB(dx, cx));	// 72193                  sbb     dx, cx ;~ 274D:1585
cs=0x274d;eip=0x001587; 	X(MOV(*(dw*)(raddr(ds,di+0x0A)), dx));	// 72194                  mov     [di+0Ah], dx ;~ 274D:1587
cs=0x274d;eip=0x00158a; 	T(ax = word_4a49c;);	// 72195                  mov     ax, word_4A49C ;~ 274D:158A
cs=0x274d;eip=0x00158d; 	X(IMUL1_2(word_4a4a0));	// 72196                  imul    word_4A4A0 ;~ 274D:158D
cs=0x274d;eip=0x001591; 	T(SHL(ax, 1));	// 72197                  shl     ax, 1 ;~ 274D:1591
cs=0x274d;eip=0x001593; 	T(RCL(dx, 1));	// 72198                  rcl     dx, 1 ;~ 274D:1593
cs=0x274d;eip=0x001595; 	X(MOV(*(dw*)(raddr(ds,di+0x10)), dx));	// 72199                  mov     [di+10h], dx ;~ 274D:1595
cs=0x274d;eip=0x001598; 	J(RETN(0));	// 72200                  retn ;~ 274D:1598

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
cs=0x274d;eip=0x001599; 	T(bx = 0x19D8;);	// 72209                  mov     bx, 19D8h ;~ 274D:1599
cs=0x274d;eip=0x00159c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 72210                  mov     ax, [bx+2] ;~ 274D:159C
cs=0x274d;eip=0x00159f; 	X(XCHG(ax, *(dw*)(raddr(ds,bx+6))));	// 72211                  xchg    ax, [bx+6] ;~ 274D:159F
cs=0x274d;eip=0x0015a2; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 72212                  mov     [bx+2], ax ;~ 274D:15A2
cs=0x274d;eip=0x0015a5; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 72213                  mov     ax, [bx+4] ;~ 274D:15A5
cs=0x274d;eip=0x0015a8; 	X(XCHG(ax, *(dw*)(raddr(ds,bx+0x0C))));	// 72214                  xchg    ax, [bx+0Ch] ;~ 274D:15A8
cs=0x274d;eip=0x0015ab; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 72215                  mov     [bx+4], ax ;~ 274D:15AB
cs=0x274d;eip=0x0015ae; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0A))));	// 72216                  mov     ax, [bx+0Ah] ;~ 274D:15AE
cs=0x274d;eip=0x0015b1; 	X(XCHG(ax, *(dw*)(raddr(ds,bx+0x0E))));	// 72217                  xchg    ax, [bx+0Eh] ;~ 274D:15B1
cs=0x274d;eip=0x0015b4; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), ax));	// 72218                  mov     [bx+0Ah], ax ;~ 274D:15B4
cs=0x274d;eip=0x0015b7; 	J(RETN(0));	// 72219                  retn ;~ 274D:15B7

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
	// 72230 arg_0           = word ptr  6 ;~ 274D:15B8
#undef arg_2
#define arg_2 8
	// 72231 arg_2           = word ptr  8 ;~ 274D:15B8
#undef arg_4
#define arg_4 0x0A
	// 72232 arg_4           = word ptr  0Ah ;~ 274D:15B8
cs=0x274d;eip=0x0015b8; 	X(PUSH(bp));	// 72234                  push    bp ;~ 274D:15B8
cs=0x274d;eip=0x0015b9; 	T(bp = sp;);	// 72235                  mov     bp, sp ;~ 274D:15B9
cs=0x274d;eip=0x0015bb; 	X(PUSH(si));	// 72236                  push    si ;~ 274D:15BB
cs=0x274d;eip=0x0015bc; 	X(PUSH(di));	// 72237                  push    di ;~ 274D:15BC
cs=0x274d;eip=0x0015bd; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 72238                  mov     bx, [bp+arg_0] ;~ 274D:15BD
cs=0x274d;eip=0x0015c0; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 72239                  mov     si, [bp+arg_2] ;~ 274D:15C0
cs=0x274d;eip=0x0015c3; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_4))));	// 72240                  mov     di, [bp+arg_4] ;~ 274D:15C3
cs=0x274d;eip=0x0015c6; 	J(CALL(sub_3707d,0));	// 72241                  call    sub_3707D ;~ 274D:15C6
cs=0x274d;eip=0x0015c9; 	X(POP(di));	// 72242                  pop     di ;~ 274D:15C9
cs=0x274d;eip=0x0015ca; 	X(POP(si));	// 72243                  pop     si ;~ 274D:15CA
cs=0x274d;eip=0x0015cb; 	X(POP(bp));	// 72244                  pop     bp ;~ 274D:15CB
cs=0x274d;eip=0x0015cc; 	J(RETF(0));	// 72245                  retf ;~ 274D:15CC

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
cs=0x274d;eip=0x0015cd; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 72254                  mov     ax, [bx] ;~ 274D:15CD
cs=0x274d;eip=0x0015cf; 	X(IMUL1_2(*(dw*)(raddr(ds,si))));	// 72255                  imul    word ptr [si] ;~ 274D:15CF
cs=0x274d;eip=0x0015d1; 	T(SHL(ax, 1));	// 72256                  shl     ax, 1 ;~ 274D:15D1
cs=0x274d;eip=0x0015d3; 	T(RCL(dx, 1));	// 72257                  rcl     dx, 1 ;~ 274D:15D3
cs=0x274d;eip=0x0015d5; 	T(bp = ax;);	// 72258                  mov     bp, ax ;~ 274D:15D5
cs=0x274d;eip=0x0015d7; 	T(cx = dx;);	// 72259                  mov     cx, dx ;~ 274D:15D7
cs=0x274d;eip=0x0015d9; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 72260                  mov     ax, [bx+2] ;~ 274D:15D9
cs=0x274d;eip=0x0015dc; 	X(IMUL1_2(*(dw*)(raddr(ds,si+6))));	// 72261                  imul    word ptr [si+6] ;~ 274D:15DC
cs=0x274d;eip=0x0015df; 	T(SHL(ax, 1));	// 72262                  shl     ax, 1 ;~ 274D:15DF
cs=0x274d;eip=0x0015e1; 	T(RCL(dx, 1));	// 72263                  rcl     dx, 1 ;~ 274D:15E1
cs=0x274d;eip=0x0015e3; 	T(ADD(bp, ax));	// 72264                  add     bp, ax ;~ 274D:15E3
cs=0x274d;eip=0x0015e5; 	T(ADC(cx, dx));	// 72265                  adc     cx, dx ;~ 274D:15E5
cs=0x274d;eip=0x0015e7; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 72266                  mov     ax, [bx+4] ;~ 274D:15E7
cs=0x274d;eip=0x0015ea; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x0C))));	// 72267                  imul    word ptr [si+0Ch] ;~ 274D:15EA
cs=0x274d;eip=0x0015ed; 	T(SHL(ax, 1));	// 72268                  shl     ax, 1 ;~ 274D:15ED
cs=0x274d;eip=0x0015ef; 	T(RCL(dx, 1));	// 72269                  rcl     dx, 1 ;~ 274D:15EF
cs=0x274d;eip=0x0015f1; 	T(ADD(bp, ax));	// 72270                  add     bp, ax ;~ 274D:15F1
cs=0x274d;eip=0x0015f3; 	T(ADC(cx, dx));	// 72271                  adc     cx, dx ;~ 274D:15F3
cs=0x274d;eip=0x0015f5; 	X(MOV(*(dw*)(raddr(ds,di)), cx));	// 72272                  mov     [di], cx ;~ 274D:15F5
cs=0x274d;eip=0x0015f7; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 72273                  mov     ax, [bx] ;~ 274D:15F7
cs=0x274d;eip=0x0015f9; 	X(IMUL1_2(*(dw*)(raddr(ds,si+2))));	// 72274                  imul    word ptr [si+2] ;~ 274D:15F9
cs=0x274d;eip=0x0015fc; 	T(SHL(ax, 1));	// 72275                  shl     ax, 1 ;~ 274D:15FC
cs=0x274d;eip=0x0015fe; 	T(RCL(dx, 1));	// 72276                  rcl     dx, 1 ;~ 274D:15FE
cs=0x274d;eip=0x001600; 	T(bp = ax;);	// 72277                  mov     bp, ax ;~ 274D:1600
cs=0x274d;eip=0x001602; 	T(cx = dx;);	// 72278                  mov     cx, dx ;~ 274D:1602
cs=0x274d;eip=0x001604; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 72279                  mov     ax, [bx+2] ;~ 274D:1604
cs=0x274d;eip=0x001607; 	X(IMUL1_2(*(dw*)(raddr(ds,si+8))));	// 72280                  imul    word ptr [si+8] ;~ 274D:1607
cs=0x274d;eip=0x00160a; 	T(SHL(ax, 1));	// 72281                  shl     ax, 1 ;~ 274D:160A
cs=0x274d;eip=0x00160c; 	T(RCL(dx, 1));	// 72282                  rcl     dx, 1 ;~ 274D:160C
cs=0x274d;eip=0x00160e; 	T(ADD(bp, ax));	// 72283                  add     bp, ax ;~ 274D:160E
cs=0x274d;eip=0x001610; 	T(ADC(cx, dx));	// 72284                  adc     cx, dx ;~ 274D:1610
cs=0x274d;eip=0x001612; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 72285                  mov     ax, [bx+4] ;~ 274D:1612
cs=0x274d;eip=0x001615; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x0E))));	// 72286                  imul    word ptr [si+0Eh] ;~ 274D:1615
cs=0x274d;eip=0x001618; 	T(SHL(ax, 1));	// 72287                  shl     ax, 1 ;~ 274D:1618
cs=0x274d;eip=0x00161a; 	T(RCL(dx, 1));	// 72288                  rcl     dx, 1 ;~ 274D:161A
cs=0x274d;eip=0x00161c; 	T(ADD(bp, ax));	// 72289                  add     bp, ax ;~ 274D:161C
cs=0x274d;eip=0x00161e; 	T(ADC(cx, dx));	// 72290                  adc     cx, dx ;~ 274D:161E
cs=0x274d;eip=0x001620; 	X(MOV(*(dw*)(raddr(ds,di+2)), cx));	// 72291                  mov     [di+2], cx ;~ 274D:1620
cs=0x274d;eip=0x001623; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 72292                  mov     ax, [bx] ;~ 274D:1623
cs=0x274d;eip=0x001625; 	X(IMUL1_2(*(dw*)(raddr(ds,si+4))));	// 72293                  imul    word ptr [si+4] ;~ 274D:1625
cs=0x274d;eip=0x001628; 	T(SHL(ax, 1));	// 72294                  shl     ax, 1 ;~ 274D:1628
cs=0x274d;eip=0x00162a; 	T(RCL(dx, 1));	// 72295                  rcl     dx, 1 ;~ 274D:162A
cs=0x274d;eip=0x00162c; 	T(bp = ax;);	// 72296                  mov     bp, ax ;~ 274D:162C
cs=0x274d;eip=0x00162e; 	T(cx = dx;);	// 72297                  mov     cx, dx ;~ 274D:162E
cs=0x274d;eip=0x001630; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 72298                  mov     ax, [bx+2] ;~ 274D:1630
cs=0x274d;eip=0x001633; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x0A))));	// 72299                  imul    word ptr [si+0Ah] ;~ 274D:1633
cs=0x274d;eip=0x001636; 	T(SHL(ax, 1));	// 72300                  shl     ax, 1 ;~ 274D:1636
cs=0x274d;eip=0x001638; 	T(RCL(dx, 1));	// 72301                  rcl     dx, 1 ;~ 274D:1638
cs=0x274d;eip=0x00163a; 	T(ADD(bp, ax));	// 72302                  add     bp, ax ;~ 274D:163A
cs=0x274d;eip=0x00163c; 	T(ADC(cx, dx));	// 72303                  adc     cx, dx ;~ 274D:163C
cs=0x274d;eip=0x00163e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 72304                  mov     ax, [bx+4] ;~ 274D:163E
cs=0x274d;eip=0x001641; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x10))));	// 72305                  imul    word ptr [si+10h] ;~ 274D:1641
cs=0x274d;eip=0x001644; 	T(SHL(ax, 1));	// 72306                  shl     ax, 1 ;~ 274D:1644
cs=0x274d;eip=0x001646; 	T(RCL(dx, 1));	// 72307                  rcl     dx, 1 ;~ 274D:1646
cs=0x274d;eip=0x001648; 	T(ADD(bp, ax));	// 72308                  add     bp, ax ;~ 274D:1648
cs=0x274d;eip=0x00164a; 	T(ADC(cx, dx));	// 72309                  adc     cx, dx ;~ 274D:164A
cs=0x274d;eip=0x00164c; 	X(MOV(*(dw*)(raddr(ds,di+4)), cx));	// 72310                  mov     [di+4], cx ;~ 274D:164C
cs=0x274d;eip=0x00164f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 72311                  mov     ax, [bx+6] ;~ 274D:164F
cs=0x274d;eip=0x001652; 	X(IMUL1_2(*(dw*)(raddr(ds,si))));	// 72312                  imul    word ptr [si] ;~ 274D:1652
cs=0x274d;eip=0x001654; 	T(SHL(ax, 1));	// 72313                  shl     ax, 1 ;~ 274D:1654
cs=0x274d;eip=0x001656; 	T(RCL(dx, 1));	// 72314                  rcl     dx, 1 ;~ 274D:1656
cs=0x274d;eip=0x001658; 	T(bp = ax;);	// 72315                  mov     bp, ax ;~ 274D:1658
cs=0x274d;eip=0x00165a; 	T(cx = dx;);	// 72316                  mov     cx, dx ;~ 274D:165A
cs=0x274d;eip=0x00165c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 72317                  mov     ax, [bx+8] ;~ 274D:165C
cs=0x274d;eip=0x00165f; 	X(IMUL1_2(*(dw*)(raddr(ds,si+6))));	// 72318                  imul    word ptr [si+6] ;~ 274D:165F
cs=0x274d;eip=0x001662; 	T(SHL(ax, 1));	// 72319                  shl     ax, 1 ;~ 274D:1662
cs=0x274d;eip=0x001664; 	T(RCL(dx, 1));	// 72320                  rcl     dx, 1 ;~ 274D:1664
cs=0x274d;eip=0x001666; 	T(ADD(bp, ax));	// 72321                  add     bp, ax ;~ 274D:1666
cs=0x274d;eip=0x001668; 	T(ADC(cx, dx));	// 72322                  adc     cx, dx ;~ 274D:1668
cs=0x274d;eip=0x00166a; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0A))));	// 72323                  mov     ax, [bx+0Ah] ;~ 274D:166A
cs=0x274d;eip=0x00166d; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x0C))));	// 72324                  imul    word ptr [si+0Ch] ;~ 274D:166D
cs=0x274d;eip=0x001670; 	T(SHL(ax, 1));	// 72325                  shl     ax, 1 ;~ 274D:1670
cs=0x274d;eip=0x001672; 	T(RCL(dx, 1));	// 72326                  rcl     dx, 1 ;~ 274D:1672
cs=0x274d;eip=0x001674; 	T(ADD(bp, ax));	// 72327                  add     bp, ax ;~ 274D:1674
cs=0x274d;eip=0x001676; 	T(ADC(cx, dx));	// 72328                  adc     cx, dx ;~ 274D:1676
cs=0x274d;eip=0x001678; 	X(MOV(*(dw*)(raddr(ds,di+6)), cx));	// 72329                  mov     [di+6], cx ;~ 274D:1678
cs=0x274d;eip=0x00167b; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 72330                  mov     ax, [bx+6] ;~ 274D:167B
cs=0x274d;eip=0x00167e; 	X(IMUL1_2(*(dw*)(raddr(ds,si+2))));	// 72331                  imul    word ptr [si+2] ;~ 274D:167E
cs=0x274d;eip=0x001681; 	T(SHL(ax, 1));	// 72332                  shl     ax, 1 ;~ 274D:1681
cs=0x274d;eip=0x001683; 	T(RCL(dx, 1));	// 72333                  rcl     dx, 1 ;~ 274D:1683
cs=0x274d;eip=0x001685; 	T(bp = ax;);	// 72334                  mov     bp, ax ;~ 274D:1685
cs=0x274d;eip=0x001687; 	T(cx = dx;);	// 72335                  mov     cx, dx ;~ 274D:1687
cs=0x274d;eip=0x001689; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 72336                  mov     ax, [bx+8] ;~ 274D:1689
cs=0x274d;eip=0x00168c; 	X(IMUL1_2(*(dw*)(raddr(ds,si+8))));	// 72337                  imul    word ptr [si+8] ;~ 274D:168C
cs=0x274d;eip=0x00168f; 	T(SHL(ax, 1));	// 72338                  shl     ax, 1 ;~ 274D:168F
cs=0x274d;eip=0x001691; 	T(RCL(dx, 1));	// 72339                  rcl     dx, 1 ;~ 274D:1691
cs=0x274d;eip=0x001693; 	T(ADD(bp, ax));	// 72340                  add     bp, ax ;~ 274D:1693
cs=0x274d;eip=0x001695; 	T(ADC(cx, dx));	// 72341                  adc     cx, dx ;~ 274D:1695
cs=0x274d;eip=0x001697; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0A))));	// 72342                  mov     ax, [bx+0Ah] ;~ 274D:1697
cs=0x274d;eip=0x00169a; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x0E))));	// 72343                  imul    word ptr [si+0Eh] ;~ 274D:169A
cs=0x274d;eip=0x00169d; 	T(SHL(ax, 1));	// 72344                  shl     ax, 1 ;~ 274D:169D
cs=0x274d;eip=0x00169f; 	T(RCL(dx, 1));	// 72345                  rcl     dx, 1 ;~ 274D:169F
cs=0x274d;eip=0x0016a1; 	T(ADD(bp, ax));	// 72346                  add     bp, ax ;~ 274D:16A1
cs=0x274d;eip=0x0016a3; 	T(ADC(cx, dx));	// 72347                  adc     cx, dx ;~ 274D:16A3
cs=0x274d;eip=0x0016a5; 	X(MOV(*(dw*)(raddr(ds,di+8)), cx));	// 72348                  mov     [di+8], cx ;~ 274D:16A5
cs=0x274d;eip=0x0016a8; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 72349                  mov     ax, [bx+6] ;~ 274D:16A8
cs=0x274d;eip=0x0016ab; 	X(IMUL1_2(*(dw*)(raddr(ds,si+4))));	// 72350                  imul    word ptr [si+4] ;~ 274D:16AB
cs=0x274d;eip=0x0016ae; 	T(SHL(ax, 1));	// 72351                  shl     ax, 1 ;~ 274D:16AE
cs=0x274d;eip=0x0016b0; 	T(RCL(dx, 1));	// 72352                  rcl     dx, 1 ;~ 274D:16B0
cs=0x274d;eip=0x0016b2; 	T(bp = ax;);	// 72353                  mov     bp, ax ;~ 274D:16B2
cs=0x274d;eip=0x0016b4; 	T(cx = dx;);	// 72354                  mov     cx, dx ;~ 274D:16B4
cs=0x274d;eip=0x0016b6; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 72355                  mov     ax, [bx+8] ;~ 274D:16B6
cs=0x274d;eip=0x0016b9; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x0A))));	// 72356                  imul    word ptr [si+0Ah] ;~ 274D:16B9
cs=0x274d;eip=0x0016bc; 	T(SHL(ax, 1));	// 72357                  shl     ax, 1 ;~ 274D:16BC
cs=0x274d;eip=0x0016be; 	T(RCL(dx, 1));	// 72358                  rcl     dx, 1 ;~ 274D:16BE
cs=0x274d;eip=0x0016c0; 	T(ADD(bp, ax));	// 72359                  add     bp, ax ;~ 274D:16C0
cs=0x274d;eip=0x0016c2; 	T(ADC(cx, dx));	// 72360                  adc     cx, dx ;~ 274D:16C2
cs=0x274d;eip=0x0016c4; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0A))));	// 72361                  mov     ax, [bx+0Ah] ;~ 274D:16C4
cs=0x274d;eip=0x0016c7; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x10))));	// 72362                  imul    word ptr [si+10h] ;~ 274D:16C7
cs=0x274d;eip=0x0016ca; 	T(SHL(ax, 1));	// 72363                  shl     ax, 1 ;~ 274D:16CA
cs=0x274d;eip=0x0016cc; 	T(RCL(dx, 1));	// 72364                  rcl     dx, 1 ;~ 274D:16CC
cs=0x274d;eip=0x0016ce; 	T(ADD(bp, ax));	// 72365                  add     bp, ax ;~ 274D:16CE
cs=0x274d;eip=0x0016d0; 	T(ADC(cx, dx));	// 72366                  adc     cx, dx ;~ 274D:16D0
cs=0x274d;eip=0x0016d2; 	X(MOV(*(dw*)(raddr(ds,di+0x0A)), cx));	// 72367                  mov     [di+0Ah], cx ;~ 274D:16D2
cs=0x274d;eip=0x0016d5; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0C))));	// 72368                  mov     ax, [bx+0Ch] ;~ 274D:16D5
cs=0x274d;eip=0x0016d8; 	X(IMUL1_2(*(dw*)(raddr(ds,si))));	// 72369                  imul    word ptr [si] ;~ 274D:16D8
cs=0x274d;eip=0x0016da; 	T(SHL(ax, 1));	// 72370                  shl     ax, 1 ;~ 274D:16DA
cs=0x274d;eip=0x0016dc; 	T(RCL(dx, 1));	// 72371                  rcl     dx, 1 ;~ 274D:16DC
cs=0x274d;eip=0x0016de; 	T(bp = ax;);	// 72372                  mov     bp, ax ;~ 274D:16DE
cs=0x274d;eip=0x0016e0; 	T(cx = dx;);	// 72373                  mov     cx, dx ;~ 274D:16E0
cs=0x274d;eip=0x0016e2; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0E))));	// 72374                  mov     ax, [bx+0Eh] ;~ 274D:16E2
cs=0x274d;eip=0x0016e5; 	X(IMUL1_2(*(dw*)(raddr(ds,si+6))));	// 72375                  imul    word ptr [si+6] ;~ 274D:16E5
cs=0x274d;eip=0x0016e8; 	T(SHL(ax, 1));	// 72376                  shl     ax, 1 ;~ 274D:16E8
cs=0x274d;eip=0x0016ea; 	T(RCL(dx, 1));	// 72377                  rcl     dx, 1 ;~ 274D:16EA
cs=0x274d;eip=0x0016ec; 	T(ADD(bp, ax));	// 72378                  add     bp, ax ;~ 274D:16EC
cs=0x274d;eip=0x0016ee; 	T(ADC(cx, dx));	// 72379                  adc     cx, dx ;~ 274D:16EE
cs=0x274d;eip=0x0016f0; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x10))));	// 72380                  mov     ax, [bx+10h] ;~ 274D:16F0
cs=0x274d;eip=0x0016f3; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x0C))));	// 72381                  imul    word ptr [si+0Ch] ;~ 274D:16F3
cs=0x274d;eip=0x0016f6; 	T(SHL(ax, 1));	// 72382                  shl     ax, 1 ;~ 274D:16F6
cs=0x274d;eip=0x0016f8; 	T(RCL(dx, 1));	// 72383                  rcl     dx, 1 ;~ 274D:16F8
cs=0x274d;eip=0x0016fa; 	T(ADD(bp, ax));	// 72384                  add     bp, ax ;~ 274D:16FA
cs=0x274d;eip=0x0016fc; 	T(ADC(cx, dx));	// 72385                  adc     cx, dx ;~ 274D:16FC
cs=0x274d;eip=0x0016fe; 	X(MOV(*(dw*)(raddr(ds,di+0x0C)), cx));	// 72386                  mov     [di+0Ch], cx ;~ 274D:16FE
cs=0x274d;eip=0x001701; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0C))));	// 72387                  mov     ax, [bx+0Ch] ;~ 274D:1701
cs=0x274d;eip=0x001704; 	X(IMUL1_2(*(dw*)(raddr(ds,si+2))));	// 72388                  imul    word ptr [si+2] ;~ 274D:1704
cs=0x274d;eip=0x001707; 	T(SHL(ax, 1));	// 72389                  shl     ax, 1 ;~ 274D:1707
cs=0x274d;eip=0x001709; 	T(RCL(dx, 1));	// 72390                  rcl     dx, 1 ;~ 274D:1709
cs=0x274d;eip=0x00170b; 	T(bp = ax;);	// 72391                  mov     bp, ax ;~ 274D:170B
cs=0x274d;eip=0x00170d; 	T(cx = dx;);	// 72392                  mov     cx, dx ;~ 274D:170D
cs=0x274d;eip=0x00170f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0E))));	// 72393                  mov     ax, [bx+0Eh] ;~ 274D:170F
cs=0x274d;eip=0x001712; 	X(IMUL1_2(*(dw*)(raddr(ds,si+8))));	// 72394                  imul    word ptr [si+8] ;~ 274D:1712
cs=0x274d;eip=0x001715; 	T(SHL(ax, 1));	// 72395                  shl     ax, 1 ;~ 274D:1715
cs=0x274d;eip=0x001717; 	T(RCL(dx, 1));	// 72396                  rcl     dx, 1 ;~ 274D:1717
cs=0x274d;eip=0x001719; 	T(ADD(bp, ax));	// 72397                  add     bp, ax ;~ 274D:1719
cs=0x274d;eip=0x00171b; 	T(ADC(cx, dx));	// 72398                  adc     cx, dx ;~ 274D:171B
cs=0x274d;eip=0x00171d; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x10))));	// 72399                  mov     ax, [bx+10h] ;~ 274D:171D
cs=0x274d;eip=0x001720; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x0E))));	// 72400                  imul    word ptr [si+0Eh] ;~ 274D:1720
cs=0x274d;eip=0x001723; 	T(SHL(ax, 1));	// 72401                  shl     ax, 1 ;~ 274D:1723
cs=0x274d;eip=0x001725; 	T(RCL(dx, 1));	// 72402                  rcl     dx, 1 ;~ 274D:1725
cs=0x274d;eip=0x001727; 	T(ADD(bp, ax));	// 72403                  add     bp, ax ;~ 274D:1727
cs=0x274d;eip=0x001729; 	T(ADC(cx, dx));	// 72404                  adc     cx, dx ;~ 274D:1729
cs=0x274d;eip=0x00172b; 	X(MOV(*(dw*)(raddr(ds,di+0x0E)), cx));	// 72405                  mov     [di+0Eh], cx ;~ 274D:172B
cs=0x274d;eip=0x00172e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0C))));	// 72406                  mov     ax, [bx+0Ch] ;~ 274D:172E
cs=0x274d;eip=0x001731; 	X(IMUL1_2(*(dw*)(raddr(ds,si+4))));	// 72407                  imul    word ptr [si+4] ;~ 274D:1731
cs=0x274d;eip=0x001734; 	T(SHL(ax, 1));	// 72408                  shl     ax, 1 ;~ 274D:1734
cs=0x274d;eip=0x001736; 	T(RCL(dx, 1));	// 72409                  rcl     dx, 1 ;~ 274D:1736
cs=0x274d;eip=0x001738; 	T(bp = ax;);	// 72410                  mov     bp, ax ;~ 274D:1738
cs=0x274d;eip=0x00173a; 	T(cx = dx;);	// 72411                  mov     cx, dx ;~ 274D:173A
cs=0x274d;eip=0x00173c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0E))));	// 72412                  mov     ax, [bx+0Eh] ;~ 274D:173C
cs=0x274d;eip=0x00173f; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x0A))));	// 72413                  imul    word ptr [si+0Ah] ;~ 274D:173F
cs=0x274d;eip=0x001742; 	T(SHL(ax, 1));	// 72414                  shl     ax, 1 ;~ 274D:1742
cs=0x274d;eip=0x001744; 	T(RCL(dx, 1));	// 72415                  rcl     dx, 1 ;~ 274D:1744
cs=0x274d;eip=0x001746; 	T(ADD(bp, ax));	// 72416                  add     bp, ax ;~ 274D:1746
cs=0x274d;eip=0x001748; 	T(ADC(cx, dx));	// 72417                  adc     cx, dx ;~ 274D:1748
cs=0x274d;eip=0x00174a; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x10))));	// 72418                  mov     ax, [bx+10h] ;~ 274D:174A
cs=0x274d;eip=0x00174d; 	X(IMUL1_2(*(dw*)(raddr(ds,si+0x10))));	// 72419                  imul    word ptr [si+10h] ;~ 274D:174D
cs=0x274d;eip=0x001750; 	T(SHL(ax, 1));	// 72420                  shl     ax, 1 ;~ 274D:1750
cs=0x274d;eip=0x001752; 	T(RCL(dx, 1));	// 72421                  rcl     dx, 1 ;~ 274D:1752
cs=0x274d;eip=0x001754; 	T(ADD(bp, ax));	// 72422                  add     bp, ax ;~ 274D:1754
cs=0x274d;eip=0x001756; 	T(ADC(cx, dx));	// 72423                  adc     cx, dx ;~ 274D:1756
cs=0x274d;eip=0x001758; 	X(MOV(*(dw*)(raddr(ds,di+0x10)), cx));	// 72424                  mov     [di+10h], cx ;~ 274D:1758
cs=0x274d;eip=0x00175b; 	J(RETN(0));	// 72425                  retn ;~ 274D:175B

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
cs=0x274d;eip=0x00175c; 	X(PUSH(bp));	// 72434                  push    bp ;~ 274D:175C
cs=0x274d;eip=0x00175d; 	X(PUSH(si));	// 72435                  push    si ;~ 274D:175D
cs=0x274d;eip=0x00175e; 	X(PUSH(di));	// 72436                  push    di ;~ 274D:175E
cs=0x274d;eip=0x00175f; 	T(LES(si, dword_4a46c));	// 72437                  les     si, dword_4A46C ;~ 274D:175F
cs=0x274d;eip=0x001763; 	J(CALL(sub_3721a,0));	// 72438                  call    sub_3721A ;~ 274D:1763
cs=0x274d;eip=0x001766; 	X(POP(di));	// 72439                  pop     di ;~ 274D:1766
cs=0x274d;eip=0x001767; 	X(POP(si));	// 72440                  pop     si ;~ 274D:1767
cs=0x274d;eip=0x001768; 	X(POP(bp));	// 72441                  pop     bp ;~ 274D:1768
cs=0x274d;eip=0x001769; 	J(RETF(0));	// 72442                  retf ;~ 274D:1769

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
cs=0x274d;eip=0x00176a; 	X(LODS(*(raddr(es,si)),si,1));	// 72451                  lods    byte ptr es:[si] ;~ 274D:176A
cs=0x274d;eip=0x00176c; 	T(OR(al, al));	// 72452                  or      al, al ;~ 274D:176C
cs=0x274d;eip=0x00176e; 	J(JZ(locret_37230));	// 72453                  jz      short locret_37230 ;~ 274D:176E
cs=0x274d;eip=0x001770; 	T(CMP(al, 0x0FF));	// 72454                  cmp     al, 0FFh ;~ 274D:1770
cs=0x274d;eip=0x001772; 	J(JZ(loc_37231));	// 72455                  jz      short loc_37231 ;~ 274D:1772
cs=0x274d;eip=0x001774; 	X(*(byte_4cdde) = al;);	// 72456                  mov     byte_4CDDE, al ;~ 274D:1774
loc_37227:
	// 7130 
cs=0x274d;eip=0x001777; 	J(CALL(sub_372a5,0));	// 72459                  call    sub_372A5 ;~ 274D:1777
cs=0x274d;eip=0x00177a; 	X(DEC(*(byte_4cdde)));	// 72460                  dec     byte_4CDDE ;~ 274D:177A
cs=0x274d;eip=0x00177e; 	J(JNZ(loc_37227));	// 72461                  jnz     short loc_37227 ;~ 274D:177E
locret_37230:
	// 7131 
cs=0x274d;eip=0x001780; 	J(RETN(0));	// 72464                  retn ;~ 274D:1780
loc_37231:
	// 7132 
cs=0x274d;eip=0x001781; 	T(ax = word_4a4e6;);	// 72468                  mov     ax, word_4A4E6 ;~ 274D:1781
cs=0x274d;eip=0x001784; 	T(bp = word_4a4e8;);	// 72469                  mov     bp, word_4A4E8 ;~ 274D:1784
cs=0x274d;eip=0x001788; 	T(cx = *(word_4a4e0););	// 72470                  mov     cx, word_4A4E0 ;~ 274D:1788
cs=0x274d;eip=0x00178c; 	T(di = 0x4340;);	// 72471                  mov     di, 4340h ;~ 274D:178C
cs=0x274d;eip=0x00178f; 	T(bx = di;);	// 72472                  mov     bx, di ;~ 274D:178F
loc_37241:
	// 7133 
cs=0x274d;eip=0x001791; 	T(SHR(bp, 1));	// 72475                  shr     bp, 1 ;~ 274D:1791
cs=0x274d;eip=0x001793; 	T(RCR(ax, 1));	// 72476                  rcr     ax, 1 ;~ 274D:1793
cs=0x274d;eip=0x001795; 	T(dl = 0x0FF;);	// 72477                  mov     dl, 0FFh ;~ 274D:1795
cs=0x274d;eip=0x001797; 	T(ADC(dl, 0));	// 72478                  adc     dl, 0 ;~ 274D:1797
cs=0x274d;eip=0x00179a; 	X(MOV(*(raddr(ds,di)), dl));	// 72479                  mov     [di], dl ;~ 274D:179A
cs=0x274d;eip=0x00179c; 	T(INC(di));	// 72480                  inc     di ;~ 274D:179C
cs=0x274d;eip=0x00179d; 	J(LOOP(loc_37241));	// 72481                  loop    loc_37241 ;~ 274D:179D
cs=0x274d;eip=0x00179f; 	T(di = 0x42FF;);	// 72482                  mov     di, 42FFh ;~ 274D:179F
cs=0x274d;eip=0x0017a2; 	X(PUSH(si));	// 72483                  push    si ;~ 274D:17A2
cs=0x274d;eip=0x0017a3; 	J(CALL(sub_3608c,0));	// 72484                  call    sub_3608C ;~ 274D:17A3
cs=0x274d;eip=0x0017a6; 	X(POP(si));	// 72485                  pop     si ;~ 274D:17A6
cs=0x274d;eip=0x0017a7; 	T(bx = *(word_4a4e0););	// 72486                  mov     bx, word_4A4E0 ;~ 274D:17A7
cs=0x274d;eip=0x0017ab; 	T(ax = bx;);	// 72487                  mov     ax, bx ;~ 274D:17AB
cs=0x274d;eip=0x0017ad; 	T(SHL(ax, 1));	// 72488                  shl     ax, 1 ;~ 274D:17AD
cs=0x274d;eip=0x0017af; 	T(ADD(si, ax));	// 72489                  add     si, ax ;~ 274D:17AF
cs=0x274d;eip=0x0017b1; 	T(INC(si));	// 72490                  inc     si ;~ 274D:17B1
cs=0x274d;eip=0x0017b2; 	X(word_4ce40 = si;);	// 72491                  mov     word_4CE40, si ;~ 274D:17B2
cs=0x274d;eip=0x0017b6; 	T(ADD(si, ax));	// 72492                  add     si, ax ;~ 274D:17B6
cs=0x274d;eip=0x0017b8; 	X(word_4ce42 = si;);	// 72493                  mov     word_4CE42, si ;~ 274D:17B8
cs=0x274d;eip=0x0017bc; 	T(ADD(si, bx));	// 72494                  add     si, bx ;~ 274D:17BC
cs=0x274d;eip=0x0017be; 	X(word_4ce44 = si;);	// 72495                  mov     word_4CE44, si ;~ 274D:17BE
cs=0x274d;eip=0x0017c2; 	T(si = 0x42FF;);	// 72496                  mov     si, 42FFh ;~ 274D:17C2
cs=0x274d;eip=0x0017c5; 	T(LODSB);	// 72497                  lodsb ;~ 274D:17C5
loc_37276:
	// 7134 
cs=0x274d;eip=0x0017c6; 	T(SUB(ah, ah));	// 72500                  sub     ah, ah ;~ 274D:17C6
cs=0x274d;eip=0x0017c8; 	X(PUSH(si));	// 72501                  push    si ;~ 274D:17C8
cs=0x274d;eip=0x0017c9; 	T(di = word_4ce42;);	// 72502                  mov     di, word_4CE42 ;~ 274D:17C9
cs=0x274d;eip=0x0017cd; 	T(ADD(di, ax));	// 72503                  add     di, ax ;~ 274D:17CD
cs=0x274d;eip=0x0017cf; 	T(MOV(bl, *(raddr(es,di))));	// 72504                  mov     bl, es:[di] ;~ 274D:17CF
cs=0x274d;eip=0x0017d2; 	X(byte_4ce46 = bl;);	// 72505                  mov     byte_4CE46, bl ;~ 274D:17D2
cs=0x274d;eip=0x0017d6; 	T(si = word_4ce40;);	// 72506                  mov     si, word_4CE40 ;~ 274D:17D6
cs=0x274d;eip=0x0017da; 	T(SHL(ax, 1));	// 72507                  shl     ax, 1 ;~ 274D:17DA
cs=0x274d;eip=0x0017dc; 	T(ADD(si, ax));	// 72508                  add     si, ax ;~ 274D:17DC
cs=0x274d;eip=0x0017de; 	T(MOV(si, *(dw*)(raddr(es,si))));	// 72509                  mov     si, es:[si] ;~ 274D:17DE
cs=0x274d;eip=0x0017e1; 	T(ADD(si, word_4ce44));	// 72510                  add     si, word_4CE44 ;~ 274D:17E1
loc_37295:
	// 7135 
cs=0x274d;eip=0x0017e5; 	J(CALL(sub_372a5,0));	// 72513                  call    sub_372A5 ;~ 274D:17E5
cs=0x274d;eip=0x0017e8; 	X(DEC(byte_4ce46));	// 72514                  dec     byte_4CE46 ;~ 274D:17E8
cs=0x274d;eip=0x0017ec; 	J(JNZ(loc_37295));	// 72515                  jnz     short loc_37295 ;~ 274D:17EC
cs=0x274d;eip=0x0017ee; 	X(POP(si));	// 72516                  pop     si ;~ 274D:17EE
cs=0x274d;eip=0x0017ef; 	T(LODSB);	// 72517                  lodsb ;~ 274D:17EF
cs=0x274d;eip=0x0017f0; 	T(CMP(al, 0x0FF));	// 72518                  cmp     al, 0FFh ;~ 274D:17F0
cs=0x274d;eip=0x0017f2; 	J(JNZ(loc_37276));	// 72519                  jnz     short loc_37276 ;~ 274D:17F2
cs=0x274d;eip=0x0017f4; 	J(RETN(0));	// 72520                  retn ;~ 274D:17F4

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



 bool _group74(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group74:
    _begin:
sub_372a5:
	// 72527 
cs=0x274d;eip=0x0017f5; 	X(LODS(*(raddr(es,si)),si,1));	// 72529                  lods    byte ptr es:[si] ;~ 274D:17F5
cs=0x274d;eip=0x0017f7; 	T(bl = al;);	// 72530                  mov     bl, al ;~ 274D:17F7
cs=0x274d;eip=0x0017f9; 	T(AND(al, 3));	// 72531                  and     al, 3 ;~ 274D:17F9
cs=0x274d;eip=0x0017fb; 	T(CMP(al, 1));	// 72532                  cmp     al, 1 ;~ 274D:17FB
cs=0x274d;eip=0x0017fd; 	J(JZ(loc_372fe));	// 72533                  jz      short loc_372FE ;~ 274D:17FD
cs=0x274d;eip=0x0017ff; 	J(CALL(sub_37652,0));	// 72534                  call    sub_37652 ;~ 274D:17FF
cs=0x274d;eip=0x001802; 	J(JNZ(loc_372b8));	// 72535                  jnz     short loc_372B8 ;~ 274D:1802
cs=0x274d;eip=0x001804; 	T(ADD(si, 2));	// 72536                  add     si, 2 ;~ 274D:1804
cs=0x274d;eip=0x001807; 	J(RETN(0));	// 72537                  retn ;~ 274D:1807
loc_372b8:
	// 7136 
cs=0x274d;eip=0x001808; 	X(LODS(*(raddr(es,si)),si,1));	// 72541                  lods    byte ptr es:[si] ;~ 274D:1808
cs=0x274d;eip=0x00180a; 	T(SUB(ah, ah));	// 72542                  sub     ah, ah ;~ 274D:180A
cs=0x274d;eip=0x00180c; 	T(SHL(ax, 1));	// 72543                  shl     ax, 1 ;~ 274D:180C
cs=0x274d;eip=0x00180e; 	T(bx = ax;);	// 72544                  mov     bx, ax ;~ 274D:180E
cs=0x274d;eip=0x001810; 	T(SHL(bx, 1));	// 72545                  shl     bx, 1 ;~ 274D:1810
cs=0x274d;eip=0x001812; 	T(SHL(bx, 1));	// 72546                  shl     bx, 1 ;~ 274D:1812
cs=0x274d;eip=0x001814; 	T(cx = bx;);	// 72547                  mov     cx, bx ;~ 274D:1814
cs=0x274d;eip=0x001816; 	T(SHL(cx, 1));	// 72548                  shl     cx, 1 ;~ 274D:1816
cs=0x274d;eip=0x001818; 	T(ADD(bx, cx));	// 72549                  add     bx, cx ;~ 274D:1818
cs=0x274d;eip=0x00181a; 	T(ADD(bx, ax));	// 72550                  add     bx, ax ;~ 274D:181A
cs=0x274d;eip=0x00181c; 	T(ADD(bx, 0x328E));	// 72551                  add     bx, 328Eh ;~ 274D:181C
cs=0x274d;eip=0x001820; 	T(TEST(*(raddr(ds,bx+0x18)), 0x80));	// 72552                  test    byte ptr [bx+18h], 80h ;~ 274D:1820
cs=0x274d;eip=0x001824; 	J(JZ(loc_372d8));	// 72553                  jz      short loc_372D8 ;~ 274D:1824
cs=0x274d;eip=0x001826; 	T(INC(si));	// 72554                  inc     si ;~ 274D:1826
cs=0x274d;eip=0x001827; 	J(RETN(0));	// 72555                  retn ;~ 274D:1827
loc_372d8:
	// 7137 
cs=0x274d;eip=0x001828; 	X(LODS(*(raddr(es,si)),si,1));	// 72559                  lods    byte ptr es:[si] ;~ 274D:1828
cs=0x274d;eip=0x00182a; 	T(SUB(ah, ah));	// 72560                  sub     ah, ah ;~ 274D:182A
cs=0x274d;eip=0x00182c; 	T(di = ax;);	// 72561                  mov     di, ax ;~ 274D:182C
cs=0x274d;eip=0x00182e; 	T(MOV(ah, *(raddr(ds,di+0x18EC))));	// 72562                  mov     ah, [di+18ECh] ;~ 274D:182E
cs=0x274d;eip=0x001832; 	T(ADD(ah, *(byte_4a3ca)));	// 72563                  add     ah, byte_4A3CA ;~ 274D:1832
cs=0x274d;eip=0x001836; 	J(CALLF(sub_49a3e,0));	// 72564                  call    far ptr sub_49A3E ;~ 274D:1836
cs=0x274d;eip=0x00183b; 	T(MOV(cx, *(dw*)(raddr(ds,bx+8))));	// 72566                  mov     cx, [bx+8] ;~ 274D:183B
cs=0x274d;eip=0x00183e; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0C))));	// 72567                  mov     dx, [bx+0Ch] ;~ 274D:183E
cs=0x274d;eip=0x001841; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 72568                  mov     ax, [bx] ;~ 274D:1841
cs=0x274d;eip=0x001843; 	T(MOV(bx, *(dw*)(raddr(ds,bx+4))));	// 72569                  mov     bx, [bx+4] ;~ 274D:1843
cs=0x274d;eip=0x001846; 	X(PUSH(si));	// 72570                  push    si ;~ 274D:1846
cs=0x274d;eip=0x001847; 	J(CALLF(sub_49a39,0));	// 72571                  call    far ptr sub_49A39 ;~ 274D:1847
cs=0x274d;eip=0x00184c; 	X(POP(si));	// 72573                  pop     si ;~ 274D:184C
cs=0x274d;eip=0x00184d; 	J(RETN(0));	// 72574                  retn ;~ 274D:184D
loc_372fe:
	// 7138 
cs=0x274d;eip=0x00184e; 	X(LODS(*(raddr(es,si)),si,1));	// 72578                  lods    byte ptr es:[si] ;~ 274D:184E
cs=0x274d;eip=0x001850; 	T(SHR(bl, 1));	// 72579                  shr     bl, 1 ;~ 274D:1850
cs=0x274d;eip=0x001852; 	T(SHR(bl, 1));	// 72580                  shr     bl, 1 ;~ 274D:1852
cs=0x274d;eip=0x001854; 	T(cl = bl;);	// 72581                  mov     cl, bl ;~ 274D:1854
cs=0x274d;eip=0x001856; 	T(AND(bx, 0x1E));	// 72582                  and     bx, 1Eh ;~ 274D:1856
cs=0x274d;eip=0x001859; 	T(MOV(bx, *(dw*)(raddr(ds,bx+0x42DE))));	// 72583                  mov     bx, [bx+42DEh] ;~ 274D:1859
cs=0x274d;eip=0x00185d; 	T(TEST(cl, 0x20));	// 72584                  test    cl, 20h ;~ 274D:185D
cs=0x274d;eip=0x001860; 	J(JNZ(loc_3731e));	// 72585                  jnz     short loc_3731E ;~ 274D:1860
cs=0x274d;eip=0x001862; 	T(TEST(word_4a4e6, bx));	// 72586                  test    word_4A4E6, bx ;~ 274D:1862
cs=0x274d;eip=0x001866; 	J(JNZ(loc_37324));	// 72587                  jnz     short loc_37324 ;~ 274D:1866
loc_37318:
	// 7139 
cs=0x274d;eip=0x001868; 	T(SUB(ah, ah));	// 72591                  sub     ah, ah ;~ 274D:1868
cs=0x274d;eip=0x00186a; 	T(ADD(si, ax));	// 72592                  add     si, ax ;~ 274D:186A
cs=0x274d;eip=0x00186c; 	T(INC(si));	// 72593                  inc     si ;~ 274D:186C
cs=0x274d;eip=0x00186d; 	J(RETN(0));	// 72594                  retn ;~ 274D:186D
loc_3731e:
	// 7140 
cs=0x274d;eip=0x00186e; 	T(TEST(word_4a4e8, bx));	// 72598                  test    word_4A4E8, bx ;~ 274D:186E
cs=0x274d;eip=0x001872; 	J(JZ(loc_37318));	// 72599                  jz      short loc_37318 ;~ 274D:1872
loc_37324:
	// 7141 
cs=0x274d;eip=0x001874; 	X(byte_4ce47 = al;);	// 72602                  mov     byte_4CE47, al ;~ 274D:1874
cs=0x274d;eip=0x001877; 	T(bl = al;);	// 72603                  mov     bl, al ;~ 274D:1877
cs=0x274d;eip=0x001879; 	T(SUB(bh, bh));	// 72604                  sub     bh, bh ;~ 274D:1879
cs=0x274d;eip=0x00187b; 	T(MOV(bl, *(raddr(es,bx+si))));	// 72605                  mov     bl, es:[bx+si] ;~ 274D:187B
cs=0x274d;eip=0x00187e; 	T(CMP(bl, 0x0FF));	// 72606                  cmp     bl, 0FFh ;~ 274D:187E
cs=0x274d;eip=0x001881; 	J(JZ(loc_37318));	// 72607                  jz      short loc_37318 ;~ 274D:1881
cs=0x274d;eip=0x001883; 	T(CMP(word_49ddc, 0x400));	// 72608                  cmp     word_49DDC, 400h ;~ 274D:1883
cs=0x274d;eip=0x001889; 	J(JNZ(loc_37340));	// 72609                  jnz     short loc_37340 ;~ 274D:1889
cs=0x274d;eip=0x00188b; 	T(CMP(bl, 1));	// 72610                  cmp     bl, 1 ;~ 274D:188B
cs=0x274d;eip=0x00188e; 	J(JNZ(loc_37318));	// 72611                  jnz     short loc_37318 ;~ 274D:188E
loc_37340:
	// 7142 
cs=0x274d;eip=0x001890; 	T(di = bx;);	// 72614                  mov     di, bx ;~ 274D:1890
cs=0x274d;eip=0x001892; 	T(MOV(ah, *(raddr(ds,di+0x18EC))));	// 72615                  mov     ah, [di+18ECh] ;~ 274D:1892
cs=0x274d;eip=0x001896; 	T(ADD(ah, *(byte_4a3ca)));	// 72616                  add     ah, byte_4A3CA ;~ 274D:1896
cs=0x274d;eip=0x00189a; 	J(CALLF(sub_49a3e,0));	// 72617                  call    far ptr sub_49A3E ;~ 274D:189A
cs=0x274d;eip=0x00189f; 	J(CALL(sub_37950,0));	// 72619                  call    sub_37950 ;~ 274D:189F
cs=0x274d;eip=0x0018a2; 	T(es = *(dw*)(((db*)&dword_4a46c)+2););	// 72620                  mov     es, word ptr dword_4A46C+2 ;~ 274D:18A2
cs=0x274d;eip=0x0018a6; 	X(byte_4ce48 = 0;);	// 72622                  mov     byte_4CE48, 0 ;~ 274D:18A6
loc_3735b:
	// 7143 
cs=0x274d;eip=0x0018ab; 	X(LODS(*(raddr(es,si)),si,1));	// 72625                  lods    byte ptr es:[si] ;~ 274D:18AB
cs=0x274d;eip=0x0018ad; 	T(SUB(ah, ah));	// 72627                  sub     ah, ah ;~ 274D:18AD
cs=0x274d;eip=0x0018af; 	T(SHL(ax, 1));	// 72628                  shl     ax, 1 ;~ 274D:18AF
cs=0x274d;eip=0x0018b1; 	T(bx = ax;);	// 72629                  mov     bx, ax ;~ 274D:18B1
cs=0x274d;eip=0x0018b3; 	T(SHL(bx, 1));	// 72630                  shl     bx, 1 ;~ 274D:18B3
cs=0x274d;eip=0x0018b5; 	T(SHL(bx, 1));	// 72631                  shl     bx, 1 ;~ 274D:18B5
cs=0x274d;eip=0x0018b7; 	T(cx = bx;);	// 72632                  mov     cx, bx ;~ 274D:18B7
cs=0x274d;eip=0x0018b9; 	T(SHL(cx, 1));	// 72633                  shl     cx, 1 ;~ 274D:18B9
cs=0x274d;eip=0x0018bb; 	T(ADD(bx, cx));	// 72634                  add     bx, cx ;~ 274D:18BB
cs=0x274d;eip=0x0018bd; 	T(ADD(bx, ax));	// 72635                  add     bx, ax ;~ 274D:18BD
cs=0x274d;eip=0x0018bf; 	T(ADD(bx, 0x328E));	// 72636                  add     bx, 328Eh ;~ 274D:18BF
cs=0x274d;eip=0x0018c3; 	T(TEST(*(raddr(ds,bx+0x18)), 0x40));	// 72637                  test    byte ptr [bx+18h], 40h ;~ 274D:18C3
cs=0x274d;eip=0x0018c7; 	J(JZ(loc_373b1));	// 72638                  jz      short loc_373B1 ;~ 274D:18C7
cs=0x274d;eip=0x0018c9; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x10))));	// 72639                  mov     ax, [bx+10h] ;~ 274D:18C9
cs=0x274d;eip=0x0018cc; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x12))));	// 72640                  mov     dx, [bx+12h] ;~ 274D:18CC
cs=0x274d;eip=0x0018cf; 	T(MOV(cx, *(dw*)(raddr(ds,bx+0x14))));	// 72641                  mov     cx, [bx+14h] ;~ 274D:18CF
cs=0x274d;eip=0x0018d2; 	T(MOV(di, *(dw*)(raddr(ds,bx+0x16))));	// 72642                  mov     di, [bx+16h] ;~ 274D:18D2
cs=0x274d;eip=0x0018d5; 	T(CMP(byte_4ce48, 0));	// 72643                  cmp     byte_4CE48, 0 ;~ 274D:18D5
cs=0x274d;eip=0x0018da; 	J(JNZ(loc_3739e));	// 72644                  jnz     short loc_3739E ;~ 274D:18DA
cs=0x274d;eip=0x0018dc; 	X(word_4ce49 = ax;);	// 72645                  mov     word_4CE49, ax ;~ 274D:18DC
cs=0x274d;eip=0x0018df; 	X(word_4ce4b = dx;);	// 72646                  mov     word_4CE4B, dx ;~ 274D:18DF
cs=0x274d;eip=0x0018e3; 	X(word_4ce4d = cx;);	// 72647                  mov     word_4CE4D, cx ;~ 274D:18E3
cs=0x274d;eip=0x0018e7; 	X(word_4ce4f = di;);	// 72648                  mov     word_4CE4F, di ;~ 274D:18E7
cs=0x274d;eip=0x0018eb; 	J(JMP(loc_373ad));	// 72649                  jmp     short loc_373AD ;~ 274D:18EB
loc_3739e:
	// 7144 
cs=0x274d;eip=0x0018ee; 	X(word_4ce51 = ax;);	// 72655                  mov     word_4CE51, ax ;~ 274D:18EE
cs=0x274d;eip=0x0018f1; 	X(word_4ce53 = dx;);	// 72656                  mov     word_4CE53, dx ;~ 274D:18F1
cs=0x274d;eip=0x0018f5; 	X(word_4ce55 = cx;);	// 72657                  mov     word_4CE55, cx ;~ 274D:18F5
cs=0x274d;eip=0x0018f9; 	X(word_4ce57 = di;);	// 72658                  mov     word_4CE57, di ;~ 274D:18F9
loc_373ad:
	// 7145 
cs=0x274d;eip=0x0018fd; 	X(INC(byte_4ce48));	// 72661                  inc     byte_4CE48 ;~ 274D:18FD
loc_373b1:
	// 7146 
cs=0x274d;eip=0x001901; 	X(PUSH(si));	// 72664                  push    si ;~ 274D:1901
cs=0x274d;eip=0x001902; 	J(CALL(sub_373ea,0));	// 72665                  call    sub_373EA ;~ 274D:1902
cs=0x274d;eip=0x001905; 	X(POP(si));	// 72666                  pop     si ;~ 274D:1905
cs=0x274d;eip=0x001906; 	X(DEC(byte_4ce47));	// 72667                  dec     byte_4CE47 ;~ 274D:1906
cs=0x274d;eip=0x00190a; 	J(JNZ(loc_3735b));	// 72668                  jnz     short loc_3735B ;~ 274D:190A
cs=0x274d;eip=0x00190c; 	T(INC(si));	// 72669                  inc     si ;~ 274D:190C
cs=0x274d;eip=0x00190d; 	X(PUSH(si));	// 72670                  push    si ;~ 274D:190D
cs=0x274d;eip=0x00190e; 	T(CMP(byte_4ce48, 2));	// 72671                  cmp     byte_4CE48, 2 ;~ 274D:190E
cs=0x274d;eip=0x001913; 	J(JL(loc_373d9));	// 72672                  jl      short loc_373D9 ;~ 274D:1913
cs=0x274d;eip=0x001915; 	X(byte_4ce61 = 0;);	// 72673                  mov     byte_4CE61, 0 ;~ 274D:1915
cs=0x274d;eip=0x00191a; 	T(di = 0x4369;);	// 72674                  mov     di, 4369h ;~ 274D:191A
cs=0x274d;eip=0x00191d; 	J(CALL(sub_35c0d,0));	// 72675                  call    sub_35C0D ;~ 274D:191D
cs=0x274d;eip=0x001920; 	T(es = *(dw*)(((db*)&dword_4a46c)+2););	// 72676                  mov     es, word ptr dword_4A46C+2 ;~ 274D:1920
cs=0x274d;eip=0x001924; 	T(bx = di;);	// 72677                  mov     bx, di ;~ 274D:1924
cs=0x274d;eip=0x001926; 	J(CALL(sub_373ea,0));	// 72678                  call    sub_373EA ;~ 274D:1926
loc_373d9:
	// 7147 
cs=0x274d;eip=0x001929; 	T(ax = word_4db09;);	// 72681                  mov     ax, word_4DB09 ;~ 274D:1929
cs=0x274d;eip=0x00192c; 	T(cx = word_4db0b;);	// 72682                  mov     cx, word_4DB0B ;~ 274D:192C
cs=0x274d;eip=0x001930; 	T(bx = 0x4CB5;);	// 72683                  mov     bx, 4CB5h ;~ 274D:1930
cs=0x274d;eip=0x001933; 	J(CALLF(sub_49a57,0));	// 72684                  call    far ptr sub_49A57 ;~ 274D:1933
seg35ab_1938_proc:
	// 72688 
cs=0x274d;eip=0x001938; 	X(POP(si));	// 72688                  pop     si ;~ 274D:1938
cs=0x274d;eip=0x001939; 	J(RETN(0));	// 72689                  retn ;~ 274D:1939

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
cs=0x274d;eip=0x00193a; 	T(TEST(*(raddr(ds,bx+0x18)), 0x80));	// 72696                  test    byte ptr [bx+18h], 80h ;~ 274D:193A
cs=0x274d;eip=0x00193e; 	J(JNZ(loc_3740c));	// 72697                  jnz     short loc_3740C ;~ 274D:193E
cs=0x274d;eip=0x001940; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 72698                  mov     ax, [bx] ;~ 274D:1940
cs=0x274d;eip=0x001942; 	X(word_4d78d = ax;);	// 72699                  mov     word_4D78D, ax ;~ 274D:1942
cs=0x274d;eip=0x001945; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 72700                  mov     ax, [bx+4] ;~ 274D:1945
cs=0x274d;eip=0x001948; 	X(word_4d791 = ax;);	// 72701                  mov     word_4D791, ax ;~ 274D:1948
cs=0x274d;eip=0x00194b; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 72702                  mov     ax, [bx+8] ;~ 274D:194B
cs=0x274d;eip=0x00194e; 	X(word_4d78f = ax;);	// 72703                  mov     word_4D78F, ax ;~ 274D:194E
cs=0x274d;eip=0x001951; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0C))));	// 72704                  mov     ax, [bx+0Ch] ;~ 274D:1951
cs=0x274d;eip=0x001954; 	X(word_4d793 = ax;);	// 72705                  mov     word_4D793, ax ;~ 274D:1954
cs=0x274d;eip=0x001957; 	X(PUSH(bx));	// 72706                  push    bx ;~ 274D:1957
cs=0x274d;eip=0x001958; 	J(CALL(sub_379e4,0));	// 72707                  call    sub_379E4 ;~ 274D:1958
cs=0x274d;eip=0x00195b; 	X(POP(bx));	// 72708                  pop     bx ;~ 274D:195B
loc_3740c:
	// 7148 
cs=0x274d;eip=0x00195c; 	T(TEST(*(raddr(ds,bx+0x18)), 0x20));	// 72711                  test    byte ptr [bx+18h], 20h ;~ 274D:195C
cs=0x274d;eip=0x001960; 	J(JZ(loc_37423));	// 72712                  jz      short loc_37423 ;~ 274D:1960
cs=0x274d;eip=0x001962; 	T(MOV(si, *(dw*)(raddr(ds,bx))));	// 72713                  mov     si, [bx] ;~ 274D:1962
cs=0x274d;eip=0x001964; 	T(MOV(di, *(dw*)(raddr(ds,bx+4))));	// 72714                  mov     di, [bx+4] ;~ 274D:1964
cs=0x274d;eip=0x001967; 	T(MOV(dx, *(dw*)(raddr(ds,bx+6))));	// 72715                  mov     dx, [bx+6] ;~ 274D:1967
cs=0x274d;eip=0x00196a; 	X(PUSH(bx));	// 72716                  push    bx ;~ 274D:196A
cs=0x274d;eip=0x00196b; 	J(CALL(sub_37986,0));	// 72717                  call    sub_37986 ;~ 274D:196B
cs=0x274d;eip=0x00196e; 	T(es = *(dw*)(((db*)&dword_4a46c)+2););	// 72719                  mov     es, word ptr dword_4A46C+2 ;~ 274D:196E
cs=0x274d;eip=0x001972; 	X(POP(bx));	// 72721                  pop     bx ;~ 274D:1972
loc_37423:
	// 7149 
cs=0x274d;eip=0x001973; 	T(TEST(*(raddr(ds,bx+0x18)), 0x10));	// 72724                  test    byte ptr [bx+18h], 10h ;~ 274D:1973
cs=0x274d;eip=0x001977; 	J(JZ(locret_37439));	// 72725                  jz      short locret_37439 ;~ 274D:1977
cs=0x274d;eip=0x001979; 	T(MOV(si, *(dw*)(raddr(ds,bx+8))));	// 72726                  mov     si, [bx+8] ;~ 274D:1979
cs=0x274d;eip=0x00197c; 	T(MOV(di, *(dw*)(raddr(ds,bx+0x0C))));	// 72727                  mov     di, [bx+0Ch] ;~ 274D:197C
cs=0x274d;eip=0x00197f; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0E))));	// 72728                  mov     dx, [bx+0Eh] ;~ 274D:197F
cs=0x274d;eip=0x001982; 	J(CALL(sub_37986,0));	// 72729                  call    sub_37986 ;~ 274D:1982
cs=0x274d;eip=0x001985; 	T(es = *(dw*)(((db*)&dword_4a46c)+2););	// 72731                  mov     es, word ptr dword_4A46C+2 ;~ 274D:1985
locret_37439:
	// 7150 
cs=0x274d;eip=0x001989; 	J(RETN(0));	// 72735                  retn ;~ 274D:1989

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
	// 7151 
cs=0x274d;eip=0x00198a; 	T(ax = word_4a486;);	// 72742                  mov     ax, word_4A486 ;~ 274D:198A
cs=0x274d;eip=0x00198d; 	T(CMP(ax, 1));	// 72743                  cmp     ax, 1 ;~ 274D:198D
cs=0x274d;eip=0x001990; 	J(JL(locret_37497));	// 72744                  jl      short locret_37497 ;~ 274D:1990
cs=0x274d;eip=0x001992; 	X(*(word_4a8b6) = ax;);	// 72745                  mov     word_4A8B6, ax ;~ 274D:1992
cs=0x274d;eip=0x001995; 	T(ax = word_4a484;);	// 72746                  mov     ax, word_4A484 ;~ 274D:1995
cs=0x274d;eip=0x001998; 	X(word_4a8b4 = ax;);	// 72747                  mov     word_4A8B4, ax ;~ 274D:1998
cs=0x274d;eip=0x00199b; 	T(ax = word_4a47c;);	// 72748                  mov     ax, word_4A47C ;~ 274D:199B
cs=0x274d;eip=0x00199e; 	X(word_4a4ec = ax;);	// 72749                  mov     word_4A4EC, ax ;~ 274D:199E
cs=0x274d;eip=0x0019a1; 	T(ax = word_4a47e;);	// 72750                  mov     ax, word_4A47E ;~ 274D:19A1
cs=0x274d;eip=0x0019a4; 	X(*(word_4a4ee) = ax;);	// 72751                  mov     word_4A4EE, ax ;~ 274D:19A4
cs=0x274d;eip=0x0019a7; 	T(ax = word_4a480;);	// 72752                  mov     ax, word_4A480 ;~ 274D:19A7
cs=0x274d;eip=0x0019aa; 	X(word_4a6d0 = ax;);	// 72753                  mov     word_4A6D0, ax ;~ 274D:19AA
cs=0x274d;eip=0x0019ad; 	T(ax = word_4a482;);	// 72754                  mov     ax, word_4A482 ;~ 274D:19AD
cs=0x274d;eip=0x0019b0; 	X(*(word_4a6d2) = ax;);	// 72755                  mov     word_4A6D2, ax ;~ 274D:19B0
cs=0x274d;eip=0x0019b3; 	T(INC(si));	// 72756                  inc     si ;~ 274D:19B3
cs=0x274d;eip=0x0019b4; 	X(LODS(*(raddr(es,si)),si,1));	// 72757                  lods    byte ptr es:[si] ;~ 274D:19B4
cs=0x274d;eip=0x0019b6; 	T(SUB(ah, ah));	// 72758                  sub     ah, ah ;~ 274D:19B6
cs=0x274d;eip=0x0019b8; 	T(di = ax;);	// 72759                  mov     di, ax ;~ 274D:19B8
cs=0x274d;eip=0x0019ba; 	T(MOV(ah, *(raddr(ds,di+0x18EC))));	// 72760                  mov     ah, [di+18ECh] ;~ 274D:19BA
cs=0x274d;eip=0x0019be; 	T(ADD(ah, *(byte_4a3ca)));	// 72761                  add     ah, byte_4A3CA ;~ 274D:19BE
cs=0x274d;eip=0x0019c2; 	J(CALLF(sub_49a3e,0));	// 72762                  call    far ptr sub_49A3E ;~ 274D:19C2
cs=0x274d;eip=0x0019c7; 	J(CALL(sub_35bc3,0));	// 72764                  call    sub_35BC3 ;~ 274D:19C7
cs=0x274d;eip=0x0019ca; 	T(SUB(bx, bx));	// 72765                  sub     bx, bx ;~ 274D:19CA
cs=0x274d;eip=0x0019cc; 	J(CALL(sub_35b28,0));	// 72766                  call    sub_35B28 ;~ 274D:19CC
cs=0x274d;eip=0x0019cf; 	J(CALL(sub_35be7,0));	// 72767                  call    sub_35BE7 ;~ 274D:19CF
cs=0x274d;eip=0x0019d2; 	T(ax = *(word_4aa98););	// 72768                  mov     ax, word_4AA98 ;~ 274D:19D2
cs=0x274d;eip=0x0019d5; 	X(word_4d78d = ax;);	// 72769                  mov     word_4D78D, ax ;~ 274D:19D5
cs=0x274d;eip=0x0019d8; 	X(word_4d78f = ax;);	// 72770                  mov     word_4D78F, ax ;~ 274D:19D8
cs=0x274d;eip=0x0019db; 	T(ax = *(word_4ac7c););	// 72771                  mov     ax, word_4AC7C ;~ 274D:19DB
cs=0x274d;eip=0x0019de; 	X(word_4d791 = ax;);	// 72772                  mov     word_4D791, ax ;~ 274D:19DE
cs=0x274d;eip=0x0019e1; 	X(word_4d793 = ax;);	// 72773                  mov     word_4D793, ax ;~ 274D:19E1
cs=0x274d;eip=0x0019e4; 	J(CALL(sub_37766,0));	// 72774                  call    sub_37766 ;~ 274D:19E4
locret_37497:
	// 7152 
cs=0x274d;eip=0x0019e7; 	J(RETN(0));	// 72777                  retn ;~ 274D:19E7
loc_37498:
	// 7153 
cs=0x274d;eip=0x0019e8; 	X(LODS(*(raddr(es,si)),si,1));	// 72782                  lods    byte ptr es:[si] ;~ 274D:19E8
cs=0x274d;eip=0x0019ea; 	T(SUB(ah, ah));	// 72783                  sub     ah, ah ;~ 274D:19EA
cs=0x274d;eip=0x0019ec; 	T(di = ax;);	// 72784                  mov     di, ax ;~ 274D:19EC
cs=0x274d;eip=0x0019ee; 	T(MOV(bl, *(raddr(ds,di-0x7748))));	// 72785                  mov     bl, [di-7748h] ;~ 274D:19EE
cs=0x274d;eip=0x0019f2; 	T(SUB(bh, bh));	// 72786                  sub     bh, bh ;~ 274D:19F2
cs=0x274d;eip=0x0019f4; 	T(SHL(bx, 1));	// 72787                  shl     bx, 1 ;~ 274D:19F4
cs=0x274d;eip=0x0019f6; 	T(MOV(cx, *(dw*)(raddr(ds,bx-0x6A30))));	// 72788                  mov     cx, [bx-6A30h] ;~ 274D:19F6
cs=0x274d;eip=0x0019fa; 	T(MOV(bl, *(raddr(ds,di-0x7802))));	// 72789                  mov     bl, [di-7802h] ;~ 274D:19FA
cs=0x274d;eip=0x0019fe; 	T(SUB(bh, bh));	// 72790                  sub     bh, bh ;~ 274D:19FE
cs=0x274d;eip=0x001a00; 	T(SHL(bx, 1));	// 72791                  shl     bx, 1 ;~ 274D:1A00
cs=0x274d;eip=0x001a02; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x6A72))));	// 72792                  mov     ax, [bx-6A72h] ;~ 274D:1A02
cs=0x274d;eip=0x001a06; 	X(word_4ce63 = ax;);	// 72793                  mov     word_4CE63, ax ;~ 274D:1A06
cs=0x274d;eip=0x001a09; 	T(MOV(bl, *(raddr(ds,di-0x79A2))));	// 72794                  mov     bl, [di-79A2h] ;~ 274D:1A09
cs=0x274d;eip=0x001a0d; 	T(SUB(bh, bh));	// 72795                  sub     bh, bh ;~ 274D:1A0D
cs=0x274d;eip=0x001a0f; 	T(SHL(bx, 1));	// 72796                  shl     bx, 1 ;~ 274D:1A0F
cs=0x274d;eip=0x001a11; 	T(MOV(bx, *(dw*)(raddr(ds,bx-0x6AB4))));	// 72797                  mov     bx, [bx-6AB4h] ;~ 274D:1A11
cs=0x274d;eip=0x001a15; 	X(PUSH(si));	// 72798                  push    si ;~ 274D:1A15
cs=0x274d;eip=0x001a16; 	T(ax = word_4ce63;);	// 72799                  mov     ax, word_4CE63 ;~ 274D:1A16
cs=0x274d;eip=0x001a19; 	X(IMUL1_2(word_4a4d6));	// 72800                  imul    word_4A4D6 ;~ 274D:1A19
cs=0x274d;eip=0x001a1d; 	T(di = dx;);	// 72801                  mov     di, dx ;~ 274D:1A1D
cs=0x274d;eip=0x001a1f; 	T(si = ax;);	// 72802                  mov     si, ax ;~ 274D:1A1F
cs=0x274d;eip=0x001a21; 	T(ax = word_4a4d0;);	// 72803                  mov     ax, word_4A4D0 ;~ 274D:1A21
cs=0x274d;eip=0x001a24; 	T(IMUL1_2(cx));	// 72804                  imul    cx ;~ 274D:1A24
cs=0x274d;eip=0x001a26; 	T(ADD(si, ax));	// 72805                  add     si, ax ;~ 274D:1A26
cs=0x274d;eip=0x001a28; 	T(ADC(di, dx));	// 72806                  adc     di, dx ;~ 274D:1A28
cs=0x274d;eip=0x001a2a; 	T(ax = word_4a4ca;);	// 72807                  mov     ax, word_4A4CA ;~ 274D:1A2A
cs=0x274d;eip=0x001a2d; 	T(IMUL1_2(bx));	// 72808                  imul    bx ;~ 274D:1A2D
cs=0x274d;eip=0x001a2f; 	T(ADD(si, ax));	// 72809                  add     si, ax ;~ 274D:1A2F
cs=0x274d;eip=0x001a31; 	T(ADC(di, dx));	// 72810                  adc     di, dx ;~ 274D:1A31
cs=0x274d;eip=0x001a33; 	T(SHL(si, 1));	// 72811                  shl     si, 1 ;~ 274D:1A33
cs=0x274d;eip=0x001a35; 	T(RCL(di, 1));	// 72812                  rcl     di, 1 ;~ 274D:1A35
cs=0x274d;eip=0x001a37; 	T(ADD(si, word_4a47c));	// 72813                  add     si, word_4A47C ;~ 274D:1A37
cs=0x274d;eip=0x001a3b; 	T(ADC(di, word_4a47e));	// 72814                  adc     di, word_4A47E ;~ 274D:1A3B
cs=0x274d;eip=0x001a3f; 	X(word_4a4ec = si;);	// 72815                  mov     word_4A4EC, si ;~ 274D:1A3F
cs=0x274d;eip=0x001a43; 	X(*(word_4a4ee) = di;);	// 72816                  mov     word_4A4EE, di ;~ 274D:1A43
cs=0x274d;eip=0x001a47; 	T(ax = word_4ce63;);	// 72817                  mov     ax, word_4CE63 ;~ 274D:1A47
cs=0x274d;eip=0x001a4a; 	X(IMUL1_2(word_4a4d8));	// 72818                  imul    word_4A4D8 ;~ 274D:1A4A
cs=0x274d;eip=0x001a4e; 	T(di = dx;);	// 72819                  mov     di, dx ;~ 274D:1A4E
cs=0x274d;eip=0x001a50; 	T(si = ax;);	// 72820                  mov     si, ax ;~ 274D:1A50
cs=0x274d;eip=0x001a52; 	T(ax = word_4a4d2;);	// 72821                  mov     ax, word_4A4D2 ;~ 274D:1A52
cs=0x274d;eip=0x001a55; 	T(IMUL1_2(cx));	// 72822                  imul    cx ;~ 274D:1A55
cs=0x274d;eip=0x001a57; 	T(ADD(si, ax));	// 72823                  add     si, ax ;~ 274D:1A57
cs=0x274d;eip=0x001a59; 	T(ADC(di, dx));	// 72824                  adc     di, dx ;~ 274D:1A59
cs=0x274d;eip=0x001a5b; 	T(ax = word_4a4cc;);	// 72825                  mov     ax, word_4A4CC ;~ 274D:1A5B
cs=0x274d;eip=0x001a5e; 	T(IMUL1_2(bx));	// 72826                  imul    bx ;~ 274D:1A5E
cs=0x274d;eip=0x001a60; 	T(ADD(si, ax));	// 72827                  add     si, ax ;~ 274D:1A60
cs=0x274d;eip=0x001a62; 	T(ADC(di, dx));	// 72828                  adc     di, dx ;~ 274D:1A62
cs=0x274d;eip=0x001a64; 	T(SHL(si, 1));	// 72829                  shl     si, 1 ;~ 274D:1A64
cs=0x274d;eip=0x001a66; 	T(RCL(di, 1));	// 72830                  rcl     di, 1 ;~ 274D:1A66
cs=0x274d;eip=0x001a68; 	T(ADD(si, word_4a480));	// 72831                  add     si, word_4A480 ;~ 274D:1A68
cs=0x274d;eip=0x001a6c; 	T(ADC(di, word_4a482));	// 72832                  adc     di, word_4A482 ;~ 274D:1A6C
cs=0x274d;eip=0x001a70; 	X(word_4a6d0 = si;);	// 72833                  mov     word_4A6D0, si ;~ 274D:1A70
cs=0x274d;eip=0x001a74; 	X(*(word_4a6d2) = di;);	// 72834                  mov     word_4A6D2, di ;~ 274D:1A74
cs=0x274d;eip=0x001a78; 	T(ax = word_4ce63;);	// 72835                  mov     ax, word_4CE63 ;~ 274D:1A78
cs=0x274d;eip=0x001a7b; 	X(IMUL1_2(word_4a4da));	// 72836                  imul    word_4A4DA ;~ 274D:1A7B
cs=0x274d;eip=0x001a7f; 	T(di = dx;);	// 72837                  mov     di, dx ;~ 274D:1A7F
cs=0x274d;eip=0x001a81; 	T(si = ax;);	// 72838                  mov     si, ax ;~ 274D:1A81
cs=0x274d;eip=0x001a83; 	T(ax = word_4a4d4;);	// 72839                  mov     ax, word_4A4D4 ;~ 274D:1A83
cs=0x274d;eip=0x001a86; 	T(IMUL1_2(cx));	// 72840                  imul    cx ;~ 274D:1A86
cs=0x274d;eip=0x001a88; 	T(ADD(si, ax));	// 72841                  add     si, ax ;~ 274D:1A88
cs=0x274d;eip=0x001a8a; 	T(ADC(di, dx));	// 72842                  adc     di, dx ;~ 274D:1A8A
cs=0x274d;eip=0x001a8c; 	T(ax = word_4a4ce;);	// 72843                  mov     ax, word_4A4CE ;~ 274D:1A8C
cs=0x274d;eip=0x001a8f; 	T(IMUL1_2(bx));	// 72844                  imul    bx ;~ 274D:1A8F
cs=0x274d;eip=0x001a91; 	T(ADD(si, ax));	// 72845                  add     si, ax ;~ 274D:1A91
cs=0x274d;eip=0x001a93; 	T(ADC(di, dx));	// 72846                  adc     di, dx ;~ 274D:1A93
cs=0x274d;eip=0x001a95; 	T(SHL(si, 1));	// 72847                  shl     si, 1 ;~ 274D:1A95
cs=0x274d;eip=0x001a97; 	T(RCL(di, 1));	// 72848                  rcl     di, 1 ;~ 274D:1A97
cs=0x274d;eip=0x001a99; 	T(ADD(si, word_4a484));	// 72849                  add     si, word_4A484 ;~ 274D:1A99
cs=0x274d;eip=0x001a9d; 	T(ADC(di, word_4a486));	// 72850                  adc     di, word_4A486 ;~ 274D:1A9D
cs=0x274d;eip=0x001aa1; 	X(word_4a8b4 = si;);	// 72851                  mov     word_4A8B4, si ;~ 274D:1AA1
cs=0x274d;eip=0x001aa5; 	X(*(word_4a8b6) = di;);	// 72852                  mov     word_4A8B6, di ;~ 274D:1AA5
cs=0x274d;eip=0x001aa9; 	T(bx = 8;);	// 72853                  mov     bx, 8 ;~ 274D:1AA9
cs=0x274d;eip=0x001aac; 	T(CMP(di, 0x1388));	// 72854                  cmp     di, 1388h ;~ 274D:1AAC
cs=0x274d;eip=0x001ab0; 	J(JG(loc_3756c));	// 72855                  jg      short loc_3756C ;~ 274D:1AB0
cs=0x274d;eip=0x001ab2; 	T(DEC(bx));	// 72856                  dec     bx ;~ 274D:1AB2
cs=0x274d;eip=0x001ab3; 	T(CMP(di, 0x9C4));	// 72857                  cmp     di, 9C4h ;~ 274D:1AB3
cs=0x274d;eip=0x001ab7; 	J(JG(loc_3756c));	// 72858                  jg      short loc_3756C ;~ 274D:1AB7
cs=0x274d;eip=0x001ab9; 	T(bx = 0x0F;);	// 72859                  mov     bx, 0Fh ;~ 274D:1AB9
loc_3756c:
	// 7154 
cs=0x274d;eip=0x001abc; 	T(MOV(ah, *(raddr(ds,bx+0x18EC))));	// 72863                  mov     ah, [bx+18ECh] ;~ 274D:1ABC
cs=0x274d;eip=0x001ac0; 	J(CALLF(sub_49a3e,0));	// 72864                  call    far ptr sub_49A3E ;~ 274D:1AC0
cs=0x274d;eip=0x001ac5; 	T(SUB(bx, bx));	// 72866                  sub     bx, bx ;~ 274D:1AC5
cs=0x274d;eip=0x001ac7; 	J(CALL(sub_35b28,0));	// 72867                  call    sub_35B28 ;~ 274D:1AC7
cs=0x274d;eip=0x001aca; 	T(ax = *(word_4aa98););	// 72868                  mov     ax, word_4AA98 ;~ 274D:1ACA
cs=0x274d;eip=0x001acd; 	X(word_4d78d = ax;);	// 72869                  mov     word_4D78D, ax ;~ 274D:1ACD
cs=0x274d;eip=0x001ad0; 	X(word_4d78f = ax;);	// 72870                  mov     word_4D78F, ax ;~ 274D:1AD0
cs=0x274d;eip=0x001ad3; 	T(ax = *(word_4ac7c););	// 72871                  mov     ax, word_4AC7C ;~ 274D:1AD3
cs=0x274d;eip=0x001ad6; 	X(word_4d791 = ax;);	// 72872                  mov     word_4D791, ax ;~ 274D:1AD6
cs=0x274d;eip=0x001ad9; 	X(word_4d793 = ax;);	// 72873                  mov     word_4D793, ax ;~ 274D:1AD9
cs=0x274d;eip=0x001adc; 	J(CALL(sub_37766,0));	// 72874                  call    sub_37766 ;~ 274D:1ADC
cs=0x274d;eip=0x001adf; 	X(POP(si));	// 72875                  pop     si ;~ 274D:1ADF
cs=0x274d;eip=0x001ae0; 	T(es = *(dw*)(((db*)&dword_4a46c)+2););	// 72876                  mov     es, word ptr dword_4A46C+2 ;~ 274D:1AE0
cs=0x274d;eip=0x001ae4; 	X(DEC(byte_4ce62));	// 72878                  dec     byte_4CE62 ;~ 274D:1AE4
cs=0x274d;eip=0x001ae8; 	J(JZ(loc_3759d));	// 72879                  jz      short loc_3759D ;~ 274D:1AE8
cs=0x274d;eip=0x001aea; 	J(JMP(loc_37498));	// 72880                  jmp     loc_37498 ;~ 274D:1AEA
loc_3759d:
	// 7155 
cs=0x274d;eip=0x001aed; 	J(CALL(sub_35be7,0));	// 72884                  call    sub_35BE7 ;~ 274D:1AED
cs=0x274d;eip=0x001af0; 	J(RETN(0));	// 72885                  retn ;~ 274D:1AF0
loc_375a1:
	// 7156 
cs=0x274d;eip=0x001af1; 	J(JMP(loc_37498));	// 72889                  jmp     loc_37498 ;~ 274D:1AF1
loc_375a4:
	// 7157 
cs=0x274d;eip=0x001af4; 	J(CALL(sub_35bc3,0));	// 72894                  call    sub_35BC3 ;~ 274D:1AF4
cs=0x274d;eip=0x001af7; 	T(ADD(si, 2));	// 72895                  add     si, 2 ;~ 274D:1AF7
cs=0x274d;eip=0x001afa; 	X(LODS(*(raddr(es,si)),si,1));	// 72896                  lods    byte ptr es:[si] ;~ 274D:1AFA
cs=0x274d;eip=0x001afc; 	X(byte_4ce62 = al;);	// 72897                  mov     byte_4CE62, al ;~ 274D:1AFC
cs=0x274d;eip=0x001aff; 	T(CMP(byte_4cdb8, 0));	// 72898                  cmp     byte_4CDB8, 0 ;~ 274D:1AFF
cs=0x274d;eip=0x001b04; 	J(JNZ(loc_375a1));	// 72899                  jnz     short loc_375A1 ;~ 274D:1B04
loc_375b6:
	// 7158 
cs=0x274d;eip=0x001b06; 	X(LODS(*(raddr(es,si)),si,1));	// 72902                  lods    byte ptr es:[si] ;~ 274D:1B06
cs=0x274d;eip=0x001b08; 	T(SUB(ah, ah));	// 72903                  sub     ah, ah ;~ 274D:1B08
cs=0x274d;eip=0x001b0a; 	T(SHL(ax, 1));	// 72904                  shl     ax, 1 ;~ 274D:1B0A
cs=0x274d;eip=0x001b0c; 	T(SHL(ax, 1));	// 72905                  shl     ax, 1 ;~ 274D:1B0C
cs=0x274d;eip=0x001b0e; 	T(di = ax;);	// 72906                  mov     di, ax ;~ 274D:1B0E
cs=0x274d;eip=0x001b10; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x2830))));	// 72907                  mov     ax, [di+2830h] ;~ 274D:1B10
cs=0x274d;eip=0x001b14; 	T(ADD(ax, word_4a484));	// 72908                  add     ax, word_4A484 ;~ 274D:1B14
cs=0x274d;eip=0x001b18; 	X(word_4a8b4 = ax;);	// 72909                  mov     word_4A8B4, ax ;~ 274D:1B18
cs=0x274d;eip=0x001b1b; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x2832))));	// 72910                  mov     ax, [di+2832h] ;~ 274D:1B1B
cs=0x274d;eip=0x001b1f; 	T(ADC(ax, word_4a486));	// 72911                  adc     ax, word_4A486 ;~ 274D:1B1F
cs=0x274d;eip=0x001b23; 	T(CMP(ax, 1));	// 72912                  cmp     ax, 1 ;~ 274D:1B23
cs=0x274d;eip=0x001b26; 	J(JL(loc_37645));	// 72913                  jl      short loc_37645 ;~ 274D:1B26
cs=0x274d;eip=0x001b28; 	X(*(word_4a8b6) = ax;);	// 72914                  mov     word_4A8B6, ax ;~ 274D:1B28
cs=0x274d;eip=0x001b2b; 	T(dx = ax;);	// 72915                  mov     dx, ax ;~ 274D:1B2B
cs=0x274d;eip=0x001b2d; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x2380))));	// 72916                  mov     ax, [di+2380h] ;~ 274D:1B2D
cs=0x274d;eip=0x001b31; 	T(ADD(ax, word_4a47c));	// 72917                  add     ax, word_4A47C ;~ 274D:1B31
cs=0x274d;eip=0x001b35; 	X(word_4a4ec = ax;);	// 72918                  mov     word_4A4EC, ax ;~ 274D:1B35
cs=0x274d;eip=0x001b38; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x2382))));	// 72919                  mov     ax, [di+2382h] ;~ 274D:1B38
cs=0x274d;eip=0x001b3c; 	T(ADC(ax, word_4a47e));	// 72920                  adc     ax, word_4A47E ;~ 274D:1B3C
cs=0x274d;eip=0x001b40; 	X(*(word_4a4ee) = ax;);	// 72921                  mov     word_4A4EE, ax ;~ 274D:1B40
cs=0x274d;eip=0x001b43; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x25D8))));	// 72922                  mov     ax, [di+25D8h] ;~ 274D:1B43
cs=0x274d;eip=0x001b47; 	T(ADD(ax, word_4a480));	// 72923                  add     ax, word_4A480 ;~ 274D:1B47
cs=0x274d;eip=0x001b4b; 	X(word_4a6d0 = ax;);	// 72924                  mov     word_4A6D0, ax ;~ 274D:1B4B
cs=0x274d;eip=0x001b4e; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x25DA))));	// 72925                  mov     ax, [di+25DAh] ;~ 274D:1B4E
cs=0x274d;eip=0x001b52; 	T(ADC(ax, word_4a482));	// 72926                  adc     ax, word_4A482 ;~ 274D:1B52
cs=0x274d;eip=0x001b56; 	X(*(word_4a6d2) = ax;);	// 72927                  mov     word_4A6D2, ax ;~ 274D:1B56
cs=0x274d;eip=0x001b59; 	T(bx = 8;);	// 72928                  mov     bx, 8 ;~ 274D:1B59
cs=0x274d;eip=0x001b5c; 	T(CMP(dx, 0x1388));	// 72929                  cmp     dx, 1388h ;~ 274D:1B5C
cs=0x274d;eip=0x001b60; 	J(JG(loc_3761c));	// 72930                  jg      short loc_3761C ;~ 274D:1B60
cs=0x274d;eip=0x001b62; 	T(DEC(bx));	// 72931                  dec     bx ;~ 274D:1B62
cs=0x274d;eip=0x001b63; 	T(CMP(dx, 0x9C4));	// 72932                  cmp     dx, 9C4h ;~ 274D:1B63
cs=0x274d;eip=0x001b67; 	J(JG(loc_3761c));	// 72933                  jg      short loc_3761C ;~ 274D:1B67
cs=0x274d;eip=0x001b69; 	T(bx = 0x0F;);	// 72934                  mov     bx, 0Fh ;~ 274D:1B69
loc_3761c:
	// 7159 
cs=0x274d;eip=0x001b6c; 	T(MOV(ah, *(raddr(ds,bx+0x18EC))));	// 72938                  mov     ah, [bx+18ECh] ;~ 274D:1B6C
cs=0x274d;eip=0x001b70; 	J(CALLF(sub_49a3e,0));	// 72939                  call    far ptr sub_49A3E ;~ 274D:1B70
cs=0x274d;eip=0x001b75; 	X(PUSH(si));	// 72941                  push    si ;~ 274D:1B75
cs=0x274d;eip=0x001b76; 	T(SUB(bx, bx));	// 72942                  sub     bx, bx ;~ 274D:1B76
cs=0x274d;eip=0x001b78; 	J(CALL(sub_35b28,0));	// 72943                  call    sub_35B28 ;~ 274D:1B78
cs=0x274d;eip=0x001b7b; 	T(ax = *(word_4aa98););	// 72944                  mov     ax, word_4AA98 ;~ 274D:1B7B
cs=0x274d;eip=0x001b7e; 	X(word_4d78d = ax;);	// 72945                  mov     word_4D78D, ax ;~ 274D:1B7E
cs=0x274d;eip=0x001b81; 	X(word_4d78f = ax;);	// 72946                  mov     word_4D78F, ax ;~ 274D:1B81
cs=0x274d;eip=0x001b84; 	T(ax = *(word_4ac7c););	// 72947                  mov     ax, word_4AC7C ;~ 274D:1B84
cs=0x274d;eip=0x001b87; 	X(word_4d791 = ax;);	// 72948                  mov     word_4D791, ax ;~ 274D:1B87
cs=0x274d;eip=0x001b8a; 	X(word_4d793 = ax;);	// 72949                  mov     word_4D793, ax ;~ 274D:1B8A
cs=0x274d;eip=0x001b8d; 	J(CALL(sub_37766,0));	// 72950                  call    sub_37766 ;~ 274D:1B8D
cs=0x274d;eip=0x001b90; 	X(POP(si));	// 72951                  pop     si ;~ 274D:1B90
cs=0x274d;eip=0x001b91; 	T(es = *(dw*)(((db*)&dword_4a46c)+2););	// 72952                  mov     es, word ptr dword_4A46C+2 ;~ 274D:1B91
loc_37645:
	// 7160 
cs=0x274d;eip=0x001b95; 	X(DEC(byte_4ce62));	// 72956                  dec     byte_4CE62 ;~ 274D:1B95
cs=0x274d;eip=0x001b99; 	J(JZ(loc_3764e));	// 72958                  jz      short loc_3764E ;~ 274D:1B99
cs=0x274d;eip=0x001b9b; 	J(JMP(loc_375b6));	// 72959                  jmp     loc_375B6 ;~ 274D:1B9B
loc_3764e:
	// 7161 
cs=0x274d;eip=0x001b9e; 	J(CALL(sub_35be7,0));	// 72963                  call    sub_35BE7 ;~ 274D:1B9E
cs=0x274d;eip=0x001ba1; 	J(RETN(0));	// 72964                  retn ;~ 274D:1BA1

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
cs=0x274d;eip=0x001ba2; 	T(CMP(*(byte_4a4e4), 0));	// 72972                  cmp     byte_4A4E4, 0 ;~ 274D:1BA2
cs=0x274d;eip=0x001ba7; 	J(JNZ(loc_37660));	// 72973                  jnz     short loc_37660 ;~ 274D:1BA7
cs=0x274d;eip=0x001ba9; 	X(LODS(*(dw*)(raddr(es,si)),si,2));	// 72974                  lods    word ptr es:[si] ;~ 274D:1BA9
cs=0x274d;eip=0x001bab; 	T(AND(ax, word_4a4e6));	// 72975                  and     ax, word_4A4E6 ;~ 274D:1BAB
cs=0x274d;eip=0x001baf; 	J(RETN(0));	// 72976                  retn ;~ 274D:1BAF
loc_37660:
	// 7162 
cs=0x274d;eip=0x001bb0; 	X(LODS(*(dw*)(raddr(es,si)),si,2));	// 72980                  lods    word ptr es:[si] ;~ 274D:1BB0
cs=0x274d;eip=0x001bb2; 	T(MOV(dx, *(dw*)(raddr(es,si))));	// 72981                  mov     dx, es:[si] ;~ 274D:1BB2
cs=0x274d;eip=0x001bb5; 	T(ADD(si, 2));	// 72982                  add     si, 2 ;~ 274D:1BB5
cs=0x274d;eip=0x001bb8; 	T(AND(ax, word_4a4e6));	// 72983                  and     ax, word_4A4E6 ;~ 274D:1BB8
cs=0x274d;eip=0x001bbc; 	T(AND(dx, word_4a4e8));	// 72984                  and     dx, word_4A4E8 ;~ 274D:1BBC
cs=0x274d;eip=0x001bc0; 	T(OR(ax, dx));	// 72985                  or      ax, dx ;~ 274D:1BC0
cs=0x274d;eip=0x001bc2; 	J(RETN(0));	// 72986                  retn ;~ 274D:1BC2

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



 bool _group75(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group75:
    _begin:
sub_37674:
	// 72996 
cs=0x274d;eip=0x001bc4; 	X(PUSH(bp));	// 72998                  push    bp ;~ 274D:1BC4
cs=0x274d;eip=0x001bc5; 	T(bp = sp;);	// 72999                  mov     bp, sp ;~ 274D:1BC5
cs=0x274d;eip=0x001bc7; 	X(PUSH(di));	// 73000                  push    di ;~ 274D:1BC7
cs=0x274d;eip=0x001bc8; 	X(PUSH(si));	// 73001                  push    si ;~ 274D:1BC8
cs=0x274d;eip=0x001bc9; 	X(PUSH(bp));	// 73002                  push    bp ;~ 274D:1BC9
cs=0x274d;eip=0x001bca; 	X(PUSH(ds));	// 73003                  push    ds ;~ 274D:1BCA
cs=0x274d;eip=0x001bcb; 	X(POP(es));	// 73004                  pop     es ;~ 274D:1BCB
cs=0x274d;eip=0x001bcc; 	J(CALLF(sub_499ee,0));	// 73006                  call    far ptr sub_499EE ;~ 274D:1BCC
seg35ab_1bd1_proc:
	// 73010 
cs=0x274d;eip=0x001bd1; 	X(PUSH(ax));	// 73010                  push    ax ;~ 274D:1BD1
cs=0x274d;eip=0x001bd2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 73011                  mov     bx, [bp+6] ;~ 274D:1BD2
cs=0x274d;eip=0x001bd5; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 73012                  mov     ax, [bx] ;~ 274D:1BD5
cs=0x274d;eip=0x001bd7; 	J(CALLF(sub_499df,0));	// 73013                  call    far ptr sub_499DF ;~ 274D:1BD7
cs=0x274d;eip=0x001bdc; 	T(MOV(ah, *(raddr(ds,bx+4))));	// 73015                  mov     ah, [bx+4] ;~ 274D:1BDC
cs=0x274d;eip=0x001bdf; 	J(CALLF(sub_49a3e,0));	// 73016                  call    far ptr sub_49A3E ;~ 274D:1BDF
cs=0x274d;eip=0x001be4; 	J(CALL(sub_37950,0));	// 73018                  call    sub_37950 ;~ 274D:1BE4
cs=0x274d;eip=0x001be7; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0E))));	// 73019                  mov     cx, [bp+0Eh] ;~ 274D:1BE7
cs=0x274d;eip=0x001bea; 	T(MOV(si, *(dw*)(raddr(ss,bp+0x0A))));	// 73020                  mov     si, [bp+0Ah] ;~ 274D:1BEA
cs=0x274d;eip=0x001bed; 	X(word_4db0b = cx;);	// 73021                  mov     word_4DB0B, cx ;~ 274D:1BED
cs=0x274d;eip=0x001bf1; 	X(word_4db09 = si;);	// 73022                  mov     word_4DB09, si ;~ 274D:1BF1
cs=0x274d;eip=0x001bf5; 	T(SUB(cx, si));	// 73023                  sub     cx, si ;~ 274D:1BF5
cs=0x274d;eip=0x001bf7; 	T(INC(cx));	// 73024                  inc     cx ;~ 274D:1BF7
cs=0x274d;eip=0x001bf8; 	T(di = offset(seg48ae,byte_4d795));	// 73025                  lea     di, byte_4D795 ;~ 274D:1BF8
cs=0x274d;eip=0x001bfc; 	T(SHL(si, 1));	// 73026                  shl     si, 1 ;~ 274D:1BFC
cs=0x274d;eip=0x001bfe; 	T(ADD(di, si));	// 73027                  add     di, si ;~ 274D:1BFE
cs=0x274d;eip=0x001c00; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 73028                  mov     ax, [bp+8] ;~ 274D:1C00
cs=0x274d;eip=0x001c03; 	T(dx = cx;);	// 73029                  mov     dx, cx ;~ 274D:1C03
	// 73030                  rep stosw ;~ 274D:1C05
cs=0x274d;eip=0x001c05; 	X(	REP STOSW);	// 73030                  rep stosw ;~ 274D:1C05
cs=0x274d;eip=0x001c07; 	T(cx = dx;);	// 73031                  mov     cx, dx ;~ 274D:1C07
cs=0x274d;eip=0x001c09; 	T(di = offset(seg48ae,byte_4d94d));	// 73032                  lea     di, byte_4D94D ;~ 274D:1C09
cs=0x274d;eip=0x001c0d; 	T(ADD(di, si));	// 73033                  add     di, si ;~ 274D:1C0D
cs=0x274d;eip=0x001c0f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0C))));	// 73034                  mov     ax, [bp+0Ch] ;~ 274D:1C0F
	// 73035                  rep stosw ;~ 274D:1C12
cs=0x274d;eip=0x001c12; 	X(	REP STOSW);	// 73035                  rep stosw ;~ 274D:1C12
cs=0x274d;eip=0x001c14; 	T(bx = 0x4CB5;);	// 73036                  mov     bx, 4CB5h ;~ 274D:1C14
cs=0x274d;eip=0x001c17; 	T(ax = word_4db09;);	// 73037                  mov     ax, word_4DB09 ;~ 274D:1C17
cs=0x274d;eip=0x001c1a; 	T(cx = word_4db0b;);	// 73038                  mov     cx, word_4DB0B ;~ 274D:1C1A
cs=0x274d;eip=0x001c1e; 	J(CALLF(sub_49a66,0));	// 73039                  call    far ptr sub_49A66 ;~ 274D:1C1E
cs=0x274d;eip=0x001c23; 	J(CALLF(sub_49a48,0));	// 73041                  call    far ptr sub_49A48 ;~ 274D:1C23
cs=0x274d;eip=0x001c28; 	X(POP(ax));	// 73043                  pop     ax ;~ 274D:1C28
cs=0x274d;eip=0x001c29; 	J(CALLF(sub_499e9,0));	// 73044                  call    far ptr sub_499E9 ;~ 274D:1C29
cs=0x274d;eip=0x001c2e; 	X(POP(bp));	// 73046                  pop     bp ;~ 274D:1C2E
cs=0x274d;eip=0x001c2f; 	X(POP(si));	// 73047                  pop     si ;~ 274D:1C2F
cs=0x274d;eip=0x001c30; 	X(POP(di));	// 73048                  pop     di ;~ 274D:1C30
cs=0x274d;eip=0x001c31; 	T(sp = bp;);	// 73049                  mov     sp, bp ;~ 274D:1C31
cs=0x274d;eip=0x001c33; 	X(POP(bp));	// 73050                  pop     bp ;~ 274D:1C33
cs=0x274d;eip=0x001c34; 	J(RETF(0));	// 73051                  retf ;~ 274D:1C34
ret_274d_1c35:
	// 7163 
cs=0x274d;eip=0x001c35; 	X(PUSH(bp));	// 73053                  push    bp ;~ 274D:1C35
cs=0x274d;eip=0x001c36; 	T(bp = sp;);	// 73054                  mov     bp, sp ;~ 274D:1C36
cs=0x274d;eip=0x001c38; 	X(PUSH(di));	// 73055                  push    di ;~ 274D:1C38
cs=0x274d;eip=0x001c39; 	X(PUSH(si));	// 73056                  push    si ;~ 274D:1C39
cs=0x274d;eip=0x001c3a; 	X(PUSH(bp));	// 73057                  push    bp ;~ 274D:1C3A
cs=0x274d;eip=0x001c3b; 	X(PUSH(ds));	// 73058                  push    ds ;~ 274D:1C3B
cs=0x274d;eip=0x001c3c; 	X(POP(es));	// 73059                  pop     es ;~ 274D:1C3C
cs=0x274d;eip=0x001c3d; 	J(CALLF(sub_499ee,0));	// 73060                  call    far ptr sub_499EE ;~ 274D:1C3D
cs=0x274d;eip=0x001c42; 	X(PUSH(ax));	// 73062                  push    ax ;~ 274D:1C42
cs=0x274d;eip=0x001c43; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 73063                  mov     bx, [bp+6] ;~ 274D:1C43
cs=0x274d;eip=0x001c46; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 73064                  mov     ax, [bx] ;~ 274D:1C46
cs=0x274d;eip=0x001c48; 	J(CALLF(sub_499df,0));	// 73065                  call    far ptr sub_499DF ;~ 274D:1C48
cs=0x274d;eip=0x001c4d; 	T(MOV(ah, *(raddr(ds,bx+6))));	// 73067                  mov     ah, [bx+6] ;~ 274D:1C4D
cs=0x274d;eip=0x001c50; 	J(CALLF(sub_49a3e,0));	// 73068                  call    far ptr sub_49A3E ;~ 274D:1C50
cs=0x274d;eip=0x001c55; 	J(CALL(sub_37950,0));	// 73070                  call    sub_37950 ;~ 274D:1C55
cs=0x274d;eip=0x001c58; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0E))));	// 73071                  mov     cx, [bp+0Eh] ;~ 274D:1C58
cs=0x274d;eip=0x001c5b; 	T(MOV(si, *(dw*)(raddr(ss,bp+0x0A))));	// 73072                  mov     si, [bp+0Ah] ;~ 274D:1C5B
cs=0x274d;eip=0x001c5e; 	X(word_4db0b = cx;);	// 73073                  mov     word_4DB0B, cx ;~ 274D:1C5E
cs=0x274d;eip=0x001c62; 	X(word_4db09 = si;);	// 73074                  mov     word_4DB09, si ;~ 274D:1C62
cs=0x274d;eip=0x001c66; 	T(SUB(cx, si));	// 73075                  sub     cx, si ;~ 274D:1C66
cs=0x274d;eip=0x001c68; 	T(INC(cx));	// 73076                  inc     cx ;~ 274D:1C68
cs=0x274d;eip=0x001c69; 	T(di = offset(seg48ae,byte_4d795));	// 73077                  lea     di, byte_4D795 ;~ 274D:1C69
cs=0x274d;eip=0x001c6d; 	T(SHL(si, 1));	// 73078                  shl     si, 1 ;~ 274D:1C6D
cs=0x274d;eip=0x001c6f; 	T(ADD(di, si));	// 73079                  add     di, si ;~ 274D:1C6F
cs=0x274d;eip=0x001c71; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 73080                  mov     ax, [bp+8] ;~ 274D:1C71
cs=0x274d;eip=0x001c74; 	T(dx = cx;);	// 73081                  mov     dx, cx ;~ 274D:1C74
	// 73082                  rep stosw ;~ 274D:1C76
cs=0x274d;eip=0x001c76; 	X(	REP STOSW);	// 73082                  rep stosw ;~ 274D:1C76
cs=0x274d;eip=0x001c78; 	T(cx = dx;);	// 73083                  mov     cx, dx ;~ 274D:1C78
cs=0x274d;eip=0x001c7a; 	T(di = offset(seg48ae,byte_4d94d));	// 73084                  lea     di, byte_4D94D ;~ 274D:1C7A
cs=0x274d;eip=0x001c7e; 	T(ADD(di, si));	// 73085                  add     di, si ;~ 274D:1C7E
cs=0x274d;eip=0x001c80; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0C))));	// 73086                  mov     ax, [bp+0Ch] ;~ 274D:1C80
	// 73087                  rep stosw ;~ 274D:1C83
cs=0x274d;eip=0x001c83; 	X(	REP STOSW);	// 73087                  rep stosw ;~ 274D:1C83
cs=0x274d;eip=0x001c85; 	T(bx = 0x4CB5;);	// 73088                  mov     bx, 4CB5h ;~ 274D:1C85
cs=0x274d;eip=0x001c88; 	T(ax = word_4db09;);	// 73089                  mov     ax, word_4DB09 ;~ 274D:1C88
cs=0x274d;eip=0x001c8b; 	T(cx = word_4db0b;);	// 73090                  mov     cx, word_4DB0B ;~ 274D:1C8B
cs=0x274d;eip=0x001c8f; 	J(CALLF(sub_49a66,0));	// 73091                  call    far ptr sub_49A66 ;~ 274D:1C8F
cs=0x274d;eip=0x001c94; 	J(CALLF(sub_49a48,0));	// 73093                  call    far ptr sub_49A48 ;~ 274D:1C94
cs=0x274d;eip=0x001c99; 	X(POP(ax));	// 73095                  pop     ax ;~ 274D:1C99
cs=0x274d;eip=0x001c9a; 	J(CALLF(sub_499e9,0));	// 73096                  call    far ptr sub_499E9 ;~ 274D:1C9A
cs=0x274d;eip=0x001c9f; 	X(POP(bp));	// 73098                  pop     bp ;~ 274D:1C9F
cs=0x274d;eip=0x001ca0; 	X(POP(si));	// 73099                  pop     si ;~ 274D:1CA0
cs=0x274d;eip=0x001ca1; 	X(POP(di));	// 73100                  pop     di ;~ 274D:1CA1
cs=0x274d;eip=0x001ca2; 	T(sp = bp;);	// 73101                  mov     sp, bp ;~ 274D:1CA2
cs=0x274d;eip=0x001ca4; 	X(POP(bp));	// 73102                  pop     bp ;~ 274D:1CA4
cs=0x274d;eip=0x001ca5; 	J(RETN(0));	// 73103                  retn ;~ 274D:1CA5

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kret_274d_1c35: 	goto ret_274d_1c35;
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
cs=0x274d;eip=0x001ca6; 	J(CALL(sub_37766,0));	// 73109                  call    sub_37766 ;~ 274D:1CA6
cs=0x274d;eip=0x001ca9; 	J(RETF(0));	// 73110                  retf ;~ 274D:1CA9

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
cs=0x274d;eip=0x001caa; 	X(PUSH(bp));	// 73119                  push    bp ;~ 274D:1CAA
cs=0x274d;eip=0x001cab; 	X(PUSH(si));	// 73120                  push    si ;~ 274D:1CAB
cs=0x274d;eip=0x001cac; 	X(PUSH(di));	// 73121                  push    di ;~ 274D:1CAC
cs=0x274d;eip=0x001cad; 	X(PUSH(es));	// 73122                  push    es ;~ 274D:1CAD
cs=0x274d;eip=0x001cae; 	J(CALL(sub_37766,0));	// 73123                  call    sub_37766 ;~ 274D:1CAE
cs=0x274d;eip=0x001cb1; 	X(POP(es));	// 73124                  pop     es ;~ 274D:1CB1
cs=0x274d;eip=0x001cb2; 	X(POP(di));	// 73126                  pop     di ;~ 274D:1CB2
cs=0x274d;eip=0x001cb3; 	X(POP(si));	// 73127                  pop     si ;~ 274D:1CB3
cs=0x274d;eip=0x001cb4; 	X(POP(bp));	// 73128                  pop     bp ;~ 274D:1CB4
cs=0x274d;eip=0x001cb5; 	J(RETF(0));	// 73129                  retf ;~ 274D:1CB5

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
cs=0x274d;eip=0x001cb6; 	T(SUB(ax, ax));	// 73138                  sub     ax, ax ;~ 274D:1CB6
cs=0x274d;eip=0x001cb8; 	T(es = ax;);	// 73139                  mov     es, ax ;~ 274D:1CB8
cs=0x274d;eip=0x001cba; 	X(PUSH(*(dw*)(raddr(es,0))));	// 73141                  push    word ptr es:0 ;~ 274D:1CBA
cs=0x274d;eip=0x001cbf; 	X(PUSH(*(dw*)(raddr(es,2))));	// 73142                  push    word ptr es:2 ;~ 274D:1CBF
cs=0x274d;eip=0x001cc4; 	T(ax = offset(seg48ae,word_4a8b6)+0x8D);	// 73143                  lea     ax, word_4A8B6+8Dh ;~ 274D:1CC4
cs=0x274d;eip=0x001cc8; 	X(MOV(*(dw*)(raddr(es,0)), ax));	// 73144                  mov     es:0, ax ;~ 274D:1CC8
cs=0x274d;eip=0x001ccc; 	X(MOV(*(dw*)(raddr(es,2)), seg_offset(seg35ab)));	// 73145                  mov     word ptr es:2, seg seg35ab ;~ 274D:1CCC
cs=0x274d;eip=0x001cd3; 	X(PUSH(ds));	// 73146                  push    ds ;~ 274D:1CD3
cs=0x274d;eip=0x001cd4; 	X(POP(es));	// 73147                  pop     es ;~ 274D:1CD4
cs=0x274d;eip=0x001cd5; 	J(JMP(loc_377ee));	// 73149                  jmp     short loc_377EE ;~ 274D:1CD5
loc_37788:
	// 7164 
cs=0x274d;eip=0x001cd8; 	T(SUB(ax, ax));	// 73156                  sub     ax, ax ;~ 274D:1CD8
cs=0x274d;eip=0x001cda; 	T(es = ax;);	// 73157                  mov     es, ax ;~ 274D:1CDA
cs=0x274d;eip=0x001cdc; 	X(POP(*(dw*)(raddr(es,2))));	// 73159                  pop     word ptr es:2 ;~ 274D:1CDC
cs=0x274d;eip=0x001ce1; 	X(POP(*(dw*)(raddr(es,0))));	// 73160                  pop     word ptr es:0 ;~ 274D:1CE1
cs=0x274d;eip=0x001ce6; 	X(PUSH(ds));	// 73161                  push    ds ;~ 274D:1CE6
cs=0x274d;eip=0x001ce7; 	X(POP(es));	// 73162                  pop     es ;~ 274D:1CE7
cs=0x274d;eip=0x001ce8; 	T(ax = word_4d78d;);	// 73164                  mov     ax, word_4D78D ;~ 274D:1CE8
cs=0x274d;eip=0x001ceb; 	T(bx = word_4d791;);	// 73165                  mov     bx, word_4D791 ;~ 274D:1CEB
cs=0x274d;eip=0x001cef; 	T(cx = word_4d78f;);	// 73166                  mov     cx, word_4D78F ;~ 274D:1CEF
cs=0x274d;eip=0x001cf3; 	T(dx = word_4d793;);	// 73167                  mov     dx, word_4D793 ;~ 274D:1CF3
cs=0x274d;eip=0x001cf7; 	J(CALLF(sub_49a39,0));	// 73168                  call    far ptr sub_49A39 ;~ 274D:1CF7
cs=0x274d;eip=0x001cfc; 	T(CLC);	// 73170                  clc ;~ 274D:1CFC
cs=0x274d;eip=0x001cfd; 	J(RETN(0));	// 73171                  retn ;~ 274D:1CFD
loc_377ae:
	// 7165 
cs=0x274d;eip=0x001cfe; 	T(SUB(ax, ax));	// 73176                  sub     ax, ax ;~ 274D:1CFE
cs=0x274d;eip=0x001d00; 	T(es = ax;);	// 73177                  mov     es, ax ;~ 274D:1D00
cs=0x274d;eip=0x001d02; 	X(POP(*(dw*)(raddr(es,2))));	// 73179                  pop     word ptr es:2 ;~ 274D:1D02
cs=0x274d;eip=0x001d07; 	X(POP(*(dw*)(raddr(es,0))));	// 73180                  pop     word ptr es:0 ;~ 274D:1D07
cs=0x274d;eip=0x001d0c; 	X(PUSH(ds));	// 73181                  push    ds ;~ 274D:1D0C
cs=0x274d;eip=0x001d0d; 	X(POP(es));	// 73182                  pop     es ;~ 274D:1D0D
cs=0x274d;eip=0x001d0e; 	T(STC);	// 73184                  stc ;~ 274D:1D0E
cs=0x274d;eip=0x001d0f; 	J(RETN(0));	// 73185                  retn ;~ 274D:1D0F
loc_377c0:
	// 7166 
cs=0x274d;eip=0x001d10; 	T(CMC);	// 73189                  cmc ;~ 274D:1D10
cs=0x274d;eip=0x001d11; 	T(RCR(dx, 1));	// 73190                  rcr     dx, 1 ;~ 274D:1D11
cs=0x274d;eip=0x001d13; 	X(word_4d77f = dx;);	// 73191                  mov     word_4D77F, dx ;~ 274D:1D13
cs=0x274d;eip=0x001d17; 	T(SAR(dx, 1));	// 73192                  sar     dx, 1 ;~ 274D:1D17
cs=0x274d;eip=0x001d19; 	X(word_4d783 = dx;);	// 73193                  mov     word_4D783, dx ;~ 274D:1D19
cs=0x274d;eip=0x001d1d; 	T(dx = di;);	// 73194                  mov     dx, di ;~ 274D:1D1D
cs=0x274d;eip=0x001d1f; 	T(SUB(dx, bp));	// 73195                  sub     dx, bp ;~ 274D:1D1F
cs=0x274d;eip=0x001d21; 	J(JNO(loc_377d9));	// 73196                  jno     short loc_377D9 ;~ 274D:1D21
cs=0x274d;eip=0x001d23; 	T(CMC);	// 73197                  cmc ;~ 274D:1D23
cs=0x274d;eip=0x001d24; 	T(RCR(dx, 1));	// 73198                  rcr     dx, 1 ;~ 274D:1D24
cs=0x274d;eip=0x001d26; 	J(JMP(loc_37849));	// 73199                  jmp     short loc_37849 ;~ 274D:1D26
loc_377d9:
	// 7167 
cs=0x274d;eip=0x001d29; 	T(SAR(dx, 1));	// 73205                  sar     dx, 1 ;~ 274D:1D29
cs=0x274d;eip=0x001d2b; 	J(JMP(loc_37849));	// 73206                  jmp     short loc_37849 ;~ 274D:1D2B
loc_377de:
	// 7168 
cs=0x274d;eip=0x001d2e; 	T(CMC);	// 73212                  cmc ;~ 274D:1D2E
cs=0x274d;eip=0x001d2f; 	T(RCR(dx, 1));	// 73213                  rcr     dx, 1 ;~ 274D:1D2F
cs=0x274d;eip=0x001d31; 	X(SAR(word_4d77f, 1));	// 73214                  sar     word_4D77F, 1 ;~ 274D:1D31
cs=0x274d;eip=0x001d35; 	X(SAR(word_4d783, 1));	// 73215                  sar     word_4D783, 1 ;~ 274D:1D35
cs=0x274d;eip=0x001d39; 	J(JMP(loc_37849));	// 73216                  jmp     short loc_37849 ;~ 274D:1D39
loc_377ec:
	// 7169 
cs=0x274d;eip=0x001d3c; 	J(JMP(loc_377ae));	// 73222                  jmp     short loc_377AE ;~ 274D:1D3C
loc_377ee:
	// 7170 
cs=0x274d;eip=0x001d3e; 	T(cx = word_4d78d;);	// 73226                  mov     cx, word_4D78D ;~ 274D:1D3E
cs=0x274d;eip=0x001d42; 	T(dx = word_4d791;);	// 73227                  mov     dx, word_4D791 ;~ 274D:1D42
cs=0x274d;eip=0x001d46; 	T(si = word_4d78f;);	// 73228                  mov     si, word_4D78F ;~ 274D:1D46
cs=0x274d;eip=0x001d4a; 	T(di = word_4d793;);	// 73229                  mov     di, word_4D793 ;~ 274D:1D4A
cs=0x274d;eip=0x001d4e; 	T(bx = cx;);	// 73230                  mov     bx, cx ;~ 274D:1D4E
cs=0x274d;eip=0x001d50; 	T(bp = dx;);	// 73231                  mov     bp, dx ;~ 274D:1D50
cs=0x274d;eip=0x001d52; 	J(CALL(sub_378f2,0));	// 73232                  call    sub_378F2 ;~ 274D:1D52
cs=0x274d;eip=0x001d55; 	X(byte_4d77e = al;);	// 73233                  mov     byte_4D77E, al ;~ 274D:1D55
cs=0x274d;eip=0x001d58; 	T(bx = si;);	// 73234                  mov     bx, si ;~ 274D:1D58
cs=0x274d;eip=0x001d5a; 	T(bp = di;);	// 73235                  mov     bp, di ;~ 274D:1D5A
cs=0x274d;eip=0x001d5c; 	J(CALL(sub_378f2,0));	// 73236                  call    sub_378F2 ;~ 274D:1D5C
cs=0x274d;eip=0x001d5f; 	J(JNZ(loc_3782b));	// 73237                  jnz     short loc_3782B ;~ 274D:1D5F
cs=0x274d;eip=0x001d61; 	T(CMP(byte_4d77e, 0));	// 73238                  cmp     byte_4D77E, 0 ;~ 274D:1D61
cs=0x274d;eip=0x001d66; 	J(JNZ(loc_3781b));	// 73239                  jnz     short loc_3781B ;~ 274D:1D66
cs=0x274d;eip=0x001d68; 	J(JMP(loc_37788));	// 73240                  jmp     loc_37788 ;~ 274D:1D68
loc_3781b:
	// 7171 
cs=0x274d;eip=0x001d6b; 	T(XCHG(cx, si));	// 73244                  xchg    cx, si ;~ 274D:1D6B
cs=0x274d;eip=0x001d6d; 	T(XCHG(dx, di));	// 73245                  xchg    dx, di ;~ 274D:1D6D
cs=0x274d;eip=0x001d6f; 	X(XCHG(al, byte_4d77e));	// 73246                  xchg    al, byte_4D77E ;~ 274D:1D6F
cs=0x274d;eip=0x001d73; 	X(word_4d78d = cx;);	// 73247                  mov     word_4D78D, cx ;~ 274D:1D73
cs=0x274d;eip=0x001d77; 	X(word_4d791 = dx;);	// 73248                  mov     word_4D791, dx ;~ 274D:1D77
loc_3782b:
	// 7172 
cs=0x274d;eip=0x001d7b; 	T(TEST(byte_4d77e, al));	// 73251                  test    byte_4D77E, al ;~ 274D:1D7B
cs=0x274d;eip=0x001d7f; 	J(JNZ(loc_377ec));	// 73252                  jnz     short loc_377EC ;~ 274D:1D7F
cs=0x274d;eip=0x001d81; 	T(bp = dx;);	// 73253                  mov     bp, dx ;~ 274D:1D81
cs=0x274d;eip=0x001d83; 	T(dx = si;);	// 73254                  mov     dx, si ;~ 274D:1D83
cs=0x274d;eip=0x001d85; 	T(SUB(dx, cx));	// 73255                  sub     dx, cx ;~ 274D:1D85
cs=0x274d;eip=0x001d87; 	J(JO(loc_377c0));	// 73256                  jo      short loc_377C0 ;~ 274D:1D87
cs=0x274d;eip=0x001d89; 	X(word_4d77f = dx;);	// 73257                  mov     word_4D77F, dx ;~ 274D:1D89
cs=0x274d;eip=0x001d8d; 	T(SAR(dx, 1));	// 73258                  sar     dx, 1 ;~ 274D:1D8D
cs=0x274d;eip=0x001d8f; 	X(word_4d783 = dx;);	// 73259                  mov     word_4D783, dx ;~ 274D:1D8F
cs=0x274d;eip=0x001d93; 	T(dx = di;);	// 73260                  mov     dx, di ;~ 274D:1D93
cs=0x274d;eip=0x001d95; 	T(SUB(dx, bp));	// 73261                  sub     dx, bp ;~ 274D:1D95
cs=0x274d;eip=0x001d97; 	J(JO(loc_377de));	// 73262                  jo      short loc_377DE ;~ 274D:1D97
loc_37849:
	// 7173 
cs=0x274d;eip=0x001d99; 	X(word_4d781 = dx;);	// 73266                  mov     word_4D781, dx ;~ 274D:1D99
cs=0x274d;eip=0x001d9d; 	T(SAR(dx, 1));	// 73267                  sar     dx, 1 ;~ 274D:1D9D
cs=0x274d;eip=0x001d9f; 	X(word_4d785 = dx;);	// 73268                  mov     word_4D785, dx ;~ 274D:1D9F
loc_37853:
	// 7174 
cs=0x274d;eip=0x001da3; 	T(TEST(al, 9));	// 73271                  test    al, 9 ;~ 274D:1DA3
cs=0x274d;eip=0x001da5; 	J(JZ(loc_3788f));	// 73272                  jz      short loc_3788F ;~ 274D:1DA5
cs=0x274d;eip=0x001da7; 	T(SUB(bx, bx));	// 73273                  sub     bx, bx ;~ 274D:1DA7
cs=0x274d;eip=0x001da9; 	T(OR(si, si));	// 73274                  or      si, si ;~ 274D:1DA9
cs=0x274d;eip=0x001dab; 	J(JS(loc_37861));	// 73275                  js      short loc_37861 ;~ 274D:1DAB
cs=0x274d;eip=0x001dad; 	T(bx = word_4d787;);	// 73276                  mov     bx, word_4D787 ;~ 274D:1DAD
loc_37861:
	// 7175 
cs=0x274d;eip=0x001db1; 	T(ax = bx;);	// 73279                  mov     ax, bx ;~ 274D:1DB1
cs=0x274d;eip=0x001db3; 	T(SUB(ax, cx));	// 73280                  sub     ax, cx ;~ 274D:1DB3
cs=0x274d;eip=0x001db5; 	X(IMUL1_2(word_4d781));	// 73281                  imul    word_4D781 ;~ 274D:1DB5
cs=0x274d;eip=0x001db9; 	X(PUSH(bx));	// 73282                  push    bx ;~ 274D:1DB9
cs=0x274d;eip=0x001dba; 	T(bx = dx;);	// 73283                  mov     bx, dx ;~ 274D:1DBA
cs=0x274d;eip=0x001dbc; 	X(IDIV2(word_4d77f));	// 73284                  idiv    word_4D77F ;~ 274D:1DBC
cs=0x274d;eip=0x001dc0; 	T(bl = bh;);	// 73285                  mov     bl, bh ;~ 274D:1DC0
cs=0x274d;eip=0x001dc2; 	T(XOR(bl, *(db*)(((db*)&word_4d77f)+1)));	// 73286                  xor     bl, byte ptr word_4D77F+1 ;~ 274D:1DC2
cs=0x274d;eip=0x001dc6; 	J(JNS(loc_3787b));	// 73287                  jns     short loc_3787B ;~ 274D:1DC6
cs=0x274d;eip=0x001dc8; 	T(NEG(dx));	// 73288                  neg     dx ;~ 274D:1DC8
cs=0x274d;eip=0x001dca; 	T(DEC(ax));	// 73289                  dec     ax ;~ 274D:1DCA
loc_3787b:
	// 7176 
cs=0x274d;eip=0x001dcb; 	T(SUB(dx, word_4d783));	// 73292                  sub     dx, word_4D783 ;~ 274D:1DCB
cs=0x274d;eip=0x001dcf; 	T(XOR(dh, bh));	// 73293                  xor     dh, bh ;~ 274D:1DCF
cs=0x274d;eip=0x001dd1; 	J(JS(loc_37884));	// 73294                  js      short loc_37884 ;~ 274D:1DD1
cs=0x274d;eip=0x001dd3; 	T(INC(ax));	// 73295                  inc     ax ;~ 274D:1DD3
loc_37884:
	// 7177 
cs=0x274d;eip=0x001dd4; 	X(POP(bx));	// 73298                  pop     bx ;~ 274D:1DD4
cs=0x274d;eip=0x001dd5; 	T(ADD(ax, bp));	// 73299                  add     ax, bp ;~ 274D:1DD5
cs=0x274d;eip=0x001dd7; 	J(JS(loc_37897));	// 73300                  js      short loc_37897 ;~ 274D:1DD7
cs=0x274d;eip=0x001dd9; 	T(CMP(ax, word_4d789));	// 73301                  cmp     ax, word_4D789 ;~ 274D:1DD9
cs=0x274d;eip=0x001ddd; 	J(JLE(loc_378c8));	// 73302                  jle     short loc_378C8 ;~ 274D:1DDD
loc_3788f:
	// 7178 
cs=0x274d;eip=0x001ddf; 	T(bx = word_4d789;);	// 73305                  mov     bx, word_4D789 ;~ 274D:1DDF
cs=0x274d;eip=0x001de3; 	T(CMP(di, bx));	// 73306                  cmp     di, bx ;~ 274D:1DE3
cs=0x274d;eip=0x001de5; 	J(JG(loc_37899));	// 73307                  jg      short loc_37899 ;~ 274D:1DE5
loc_37897:
	// 7179 
cs=0x274d;eip=0x001de7; 	T(SUB(bx, bx));	// 73310                  sub     bx, bx ;~ 274D:1DE7
loc_37899:
	// 7180 
cs=0x274d;eip=0x001de9; 	T(ax = bx;);	// 73313                  mov     ax, bx ;~ 274D:1DE9
cs=0x274d;eip=0x001deb; 	T(SUB(ax, bp));	// 73314                  sub     ax, bp ;~ 274D:1DEB
cs=0x274d;eip=0x001ded; 	X(IMUL1_2(word_4d77f));	// 73315                  imul    word_4D77F ;~ 274D:1DED
cs=0x274d;eip=0x001df1; 	X(PUSH(bx));	// 73316                  push    bx ;~ 274D:1DF1
cs=0x274d;eip=0x001df2; 	T(bx = dx;);	// 73317                  mov     bx, dx ;~ 274D:1DF2
cs=0x274d;eip=0x001df4; 	X(IDIV2(word_4d781));	// 73318                  idiv    word_4D781 ;~ 274D:1DF4
cs=0x274d;eip=0x001df8; 	T(bl = bh;);	// 73319                  mov     bl, bh ;~ 274D:1DF8
cs=0x274d;eip=0x001dfa; 	T(XOR(bl, *(db*)(((db*)&word_4d781)+1)));	// 73320                  xor     bl, byte ptr word_4D781+1 ;~ 274D:1DFA
cs=0x274d;eip=0x001dfe; 	J(JNS(loc_378b3));	// 73321                  jns     short loc_378B3 ;~ 274D:1DFE
cs=0x274d;eip=0x001e00; 	T(NEG(dx));	// 73322                  neg     dx ;~ 274D:1E00
cs=0x274d;eip=0x001e02; 	T(DEC(ax));	// 73323                  dec     ax ;~ 274D:1E02
loc_378b3:
	// 7181 
cs=0x274d;eip=0x001e03; 	T(SUB(dx, word_4d785));	// 73326                  sub     dx, word_4D785 ;~ 274D:1E03
cs=0x274d;eip=0x001e07; 	T(XOR(dh, bh));	// 73327                  xor     dh, bh ;~ 274D:1E07
cs=0x274d;eip=0x001e09; 	J(JS(loc_378bc));	// 73328                  js      short loc_378BC ;~ 274D:1E09
cs=0x274d;eip=0x001e0b; 	T(INC(ax));	// 73329                  inc     ax ;~ 274D:1E0B
loc_378bc:
	// 7182 
cs=0x274d;eip=0x001e0c; 	X(POP(bx));	// 73332                  pop     bx ;~ 274D:1E0C
cs=0x274d;eip=0x001e0d; 	T(ADD(ax, cx));	// 73333                  add     ax, cx ;~ 274D:1E0D
cs=0x274d;eip=0x001e0f; 	J(JS(loc_378d9));	// 73334                  js      short loc_378D9 ;~ 274D:1E0F
cs=0x274d;eip=0x001e11; 	T(CMP(ax, word_4d787));	// 73335                  cmp     ax, word_4D787 ;~ 274D:1E11
cs=0x274d;eip=0x001e15; 	J(JG(loc_378d9));	// 73336                  jg      short loc_378D9 ;~ 274D:1E15
cs=0x274d;eip=0x001e17; 	T(XCHG(ax, bx));	// 73337                  xchg    ax, bx ;~ 274D:1E17
loc_378c8:
	// 7183 
cs=0x274d;eip=0x001e18; 	T(CMP(byte_4d77e, 0));	// 73340                  cmp     byte_4D77E, 0 ;~ 274D:1E18
cs=0x274d;eip=0x001e1d; 	J(JNZ(loc_378dc));	// 73341                  jnz     short loc_378DC ;~ 274D:1E1D
cs=0x274d;eip=0x001e1f; 	X(word_4d793 = ax;);	// 73342                  mov     word_4D793, ax ;~ 274D:1E1F
cs=0x274d;eip=0x001e22; 	X(word_4d78f = bx;);	// 73343                  mov     word_4D78F, bx ;~ 274D:1E22
cs=0x274d;eip=0x001e26; 	J(JMP(loc_37788));	// 73344                  jmp     loc_37788 ;~ 274D:1E26
loc_378d9:
	// 7184 
cs=0x274d;eip=0x001e29; 	J(JMP(loc_377ae));	// 73349                  jmp     loc_377AE ;~ 274D:1E29
loc_378dc:
	// 7185 
cs=0x274d;eip=0x001e2c; 	X(word_4d791 = ax;);	// 73353                  mov     word_4D791, ax ;~ 274D:1E2C
cs=0x274d;eip=0x001e2f; 	X(word_4d78d = bx;);	// 73354                  mov     word_4D78D, bx ;~ 274D:1E2F
cs=0x274d;eip=0x001e33; 	T(XCHG(cx, si));	// 73355                  xchg    cx, si ;~ 274D:1E33
cs=0x274d;eip=0x001e35; 	T(XCHG(bp, di));	// 73356                  xchg    bp, di ;~ 274D:1E35
cs=0x274d;eip=0x001e37; 	T(al = byte_4d77e;);	// 73357                  mov     al, byte_4D77E ;~ 274D:1E37
cs=0x274d;eip=0x001e3a; 	X(byte_4d77e = 0;);	// 73358                  mov     byte_4D77E, 0 ;~ 274D:1E3A
cs=0x274d;eip=0x001e3f; 	J(JMP(loc_37853));	// 73359                  jmp     loc_37853 ;~ 274D:1E3F

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
cs=0x274d;eip=0x001e42; 	T(al = 0x0F;);	// 73368                  mov     al, 0Fh ;~ 274D:1E42
cs=0x274d;eip=0x001e44; 	T(OR(bx, bx));	// 73369                  or      bx, bx ;~ 274D:1E44
cs=0x274d;eip=0x001e46; 	J(JS(loc_378fa));	// 73370                  js      short loc_378FA ;~ 274D:1E46
cs=0x274d;eip=0x001e48; 	T(AND(al, 0x0F7));	// 73371                  and     al, 0F7h ;~ 274D:1E48
loc_378fa:
	// 7186 
cs=0x274d;eip=0x001e4a; 	T(CMP(bx, word_4d787));	// 73374                  cmp     bx, word_4D787 ;~ 274D:1E4A
cs=0x274d;eip=0x001e4e; 	J(JG(loc_37902));	// 73375                  jg      short loc_37902 ;~ 274D:1E4E
cs=0x274d;eip=0x001e50; 	T(AND(al, 0x0FE));	// 73376                  and     al, 0FEh ;~ 274D:1E50
loc_37902:
	// 7187 
cs=0x274d;eip=0x001e52; 	T(OR(bp, bp));	// 73379                  or      bp, bp ;~ 274D:1E52
cs=0x274d;eip=0x001e54; 	J(JS(loc_37908));	// 73380                  js      short loc_37908 ;~ 274D:1E54
cs=0x274d;eip=0x001e56; 	T(AND(al, 0x0FB));	// 73381                  and     al, 0FBh ;~ 274D:1E56
loc_37908:
	// 7188 
cs=0x274d;eip=0x001e58; 	T(CMP(bp, word_4d789));	// 73384                  cmp     bp, word_4D789 ;~ 274D:1E58
cs=0x274d;eip=0x001e5c; 	J(JG(loc_37910));	// 73385                  jg      short loc_37910 ;~ 274D:1E5C
cs=0x274d;eip=0x001e5e; 	T(AND(al, 0x0FD));	// 73386                  and     al, 0FDh ;~ 274D:1E5E
loc_37910:
	// 7189 
cs=0x274d;eip=0x001e60; 	T(OR(al, al));	// 73389                  or      al, al ;~ 274D:1E60
cs=0x274d;eip=0x001e62; 	J(RETN(0));	// 73390                  retn ;~ 274D:1E62

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
cs=0x274d;eip=0x001e63; 	X(PUSH(bp));	// 73394                  push    bp ;~ 274D:1E63
cs=0x274d;eip=0x001e64; 	T(bp = sp;);	// 73395                  mov     bp, sp ;~ 274D:1E64
cs=0x274d;eip=0x001e66; 	T(CMP(*(dw*)(raddr(ss,bp+2)), 0x1DF4));	// 73396                  cmp     word ptr [bp+2], 1DF4h ;~ 274D:1E66
cs=0x274d;eip=0x001e6b; 	T(ax = word_4d781;);	// 73397                  mov     ax, word_4D781 ;~ 274D:1E6B
cs=0x274d;eip=0x001e6e; 	J(JZ(loc_37923));	// 73398                  jz      short loc_37923 ;~ 274D:1E6E
cs=0x274d;eip=0x001e70; 	T(ax = word_4d77f;);	// 73399                  mov     ax, word_4D77F ;~ 274D:1E70
loc_37923:
	// 7190 
cs=0x274d;eip=0x001e73; 	T(XOR(dx, ax));	// 73402                  xor     dx, ax ;~ 274D:1E73
cs=0x274d;eip=0x001e75; 	T(ax = 0x7F00;);	// 73403                  mov     ax, 7F00h ;~ 274D:1E75
cs=0x274d;eip=0x001e78; 	J(JNS(loc_3792c));	// 73404                  jns     short loc_3792C ;~ 274D:1E78
cs=0x274d;eip=0x001e7a; 	T(NEG(ax));	// 73405                  neg     ax ;~ 274D:1E7A
loc_3792c:
	// 7191 
cs=0x274d;eip=0x001e7c; 	X(ADD(*(dw*)(raddr(ss,bp+2)), 4));	// 73408                  add     word ptr [bp+2], 4 ;~ 274D:1E7C
cs=0x274d;eip=0x001e80; 	T(SUB(dx, dx));	// 73409                  sub     dx, dx ;~ 274D:1E80
cs=0x274d;eip=0x001e82; 	X(POP(bp));	// 73410                  pop     bp ;~ 274D:1E82
cs=0x274d;eip=0x001e83; 	J(IRET);	// 73411                  iret ;~ 274D:1E83

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



 bool _group76(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group76:
    _begin:
sub_37934:
	// 73417 
cs=0x274d;eip=0x001e84; 	X(PUSH(di));	// 73418                  push    di ;~ 274D:1E84
cs=0x274d;eip=0x001e85; 	X(PUSH(si));	// 73419                  push    si ;~ 274D:1E85
cs=0x274d;eip=0x001e86; 	X(PUSH(bp));	// 73420                  push    bp ;~ 274D:1E86
cs=0x274d;eip=0x001e87; 	T(ax = word_4db09;);	// 73421                  mov     ax, word_4DB09 ;~ 274D:1E87
cs=0x274d;eip=0x001e8a; 	T(cx = word_4db0b;);	// 73422                  mov     cx, word_4DB0B ;~ 274D:1E8A
cs=0x274d;eip=0x001e8e; 	T(bx = 0x4CB5;);	// 73423                  mov     bx, 4CB5h ;~ 274D:1E8E
cs=0x274d;eip=0x001e91; 	J(CALLF(sub_49a57,0));	// 73424                  call    far ptr sub_49A57 ;~ 274D:1E91
seg35ab_1e96_proc:
	// 73428 
cs=0x274d;eip=0x001e96; 	X(POP(bp));	// 73428                  pop     bp ;~ 274D:1E96
cs=0x274d;eip=0x001e97; 	X(POP(si));	// 73429                  pop     si ;~ 274D:1E97
cs=0x274d;eip=0x001e98; 	X(POP(di));	// 73430                  pop     di ;~ 274D:1E98
cs=0x274d;eip=0x001e99; 	J(RETF(0));	// 73431                  retf ;~ 274D:1E99

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
cs=0x274d;eip=0x001e9a; 	X(PUSH(di));	// 73437                  push    di ;~ 274D:1E9A
cs=0x274d;eip=0x001e9b; 	J(CALL(sub_37950,0));	// 73438                  call    sub_37950 ;~ 274D:1E9B
cs=0x274d;eip=0x001e9e; 	X(POP(di));	// 73439                  pop     di ;~ 274D:1E9E
cs=0x274d;eip=0x001e9f; 	J(RETF(0));	// 73440                  retf ;~ 274D:1E9F

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
cs=0x274d;eip=0x001ea0; 	T(di = word_4db09;);	// 73449                  mov     di, word_4DB09 ;~ 274D:1EA0
cs=0x274d;eip=0x001ea4; 	T(OR(di, di));	// 73450                  or      di, di ;~ 274D:1EA4
cs=0x274d;eip=0x001ea6; 	J(JS(locret_37985));	// 73451                  js      short locret_37985 ;~ 274D:1EA6
cs=0x274d;eip=0x001ea8; 	T(ax = seg_offset(seg48ae););	// 73452                  mov     ax, seg seg48ae ;~ 274D:1EA8
cs=0x274d;eip=0x001eab; 	T(es = ax;);	// 73453                  mov     es, ax ;~ 274D:1EAB
cs=0x274d;eip=0x001ead; 	T(cx = word_4db0b;);	// 73454                  mov     cx, word_4DB0B ;~ 274D:1EAD
cs=0x274d;eip=0x001eb1; 	T(INC(cx));	// 73455                  inc     cx ;~ 274D:1EB1
cs=0x274d;eip=0x001eb2; 	T(SUB(cx, di));	// 73456                  sub     cx, di ;~ 274D:1EB2
cs=0x274d;eip=0x001eb4; 	T(SHL(di, 1));	// 73457                  shl     di, 1 ;~ 274D:1EB4
cs=0x274d;eip=0x001eb6; 	T(bx = cx;);	// 73458                  mov     bx, cx ;~ 274D:1EB6
cs=0x274d;eip=0x001eb8; 	T(dx = di;);	// 73459                  mov     dx, di ;~ 274D:1EB8
cs=0x274d;eip=0x001eba; 	T(ADD(di, 0x4CB5));	// 73460                  add     di, 4CB5h ;~ 274D:1EBA
cs=0x274d;eip=0x001ebe; 	T(ax = 0x0FFFF;);	// 73461                  mov     ax, 0FFFFh ;~ 274D:1EBE
	// 73462                  rep stosw ;~ 274D:1EC1
cs=0x274d;eip=0x001ec1; 	X(	REP STOSW);	// 73462                  rep stosw ;~ 274D:1EC1
cs=0x274d;eip=0x001ec3; 	X(word_4db09 = ax;);	// 73463                  mov     word_4DB09, ax ;~ 274D:1EC3
cs=0x274d;eip=0x001ec6; 	T(cx = bx;);	// 73464                  mov     cx, bx ;~ 274D:1EC6
cs=0x274d;eip=0x001ec8; 	T(di = dx;);	// 73465                  mov     di, dx ;~ 274D:1EC8
cs=0x274d;eip=0x001eca; 	T(ADD(di, 0x4E6D));	// 73466                  add     di, 4E6Dh ;~ 274D:1ECA
cs=0x274d;eip=0x001ece; 	T(SUB(ax, ax));	// 73467                  sub     ax, ax ;~ 274D:1ECE
	// 73468                  rep stosw ;~ 274D:1ED0
cs=0x274d;eip=0x001ed0; 	X(	REP STOSW);	// 73468                  rep stosw ;~ 274D:1ED0
cs=0x274d;eip=0x001ed2; 	X(word_4db0b = ax;);	// 73469                  mov     word_4DB0B, ax ;~ 274D:1ED2
locret_37985:
	// 7192 
cs=0x274d;eip=0x001ed5; 	J(RETN(0));	// 73472                  retn ;~ 274D:1ED5

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



 bool _group77(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group77:
    _begin:
sub_37986:
	// 73479 
cs=0x274d;eip=0x001ed6; 	T(ax = seg_offset(seg48ae););	// 73481                  mov     ax, seg seg48ae ;~ 274D:1ED6
cs=0x274d;eip=0x001ed9; 	T(es = ax;);	// 73482                  mov     es, ax ;~ 274D:1ED9
cs=0x274d;eip=0x001edb; 	T(cx = di;);	// 73483                  mov     cx, di ;~ 274D:1EDB
cs=0x274d;eip=0x001edd; 	T(OR(si, si));	// 73484                  or      si, si ;~ 274D:1EDD
cs=0x274d;eip=0x001edf; 	T(di = offset(seg48ae,byte_4d795));	// 73485                  lea     di, byte_4D795 ;~ 274D:1EDF
cs=0x274d;eip=0x001ee3; 	J(JZ(loc_3799f));	// 73486                  jz      short loc_3799F ;~ 274D:1EE3
cs=0x274d;eip=0x001ee5; 	T(CMP(si, word_4d787));	// 73487                  cmp     si, word_4D787 ;~ 274D:1EE5
cs=0x274d;eip=0x001ee9; 	J(JNZ(locret_379d4));	// 73488                  jnz     short locret_379D4 ;~ 274D:1EE9
cs=0x274d;eip=0x001eeb; 	T(di = offset(seg48ae,byte_4d94d));	// 73489                  lea     di, byte_4D94D ;~ 274D:1EEB
loc_3799f:
	// 7193 
cs=0x274d;eip=0x001eef; 	T(CMP(cx, dx));	// 73492                  cmp     cx, dx ;~ 274D:1EEF
cs=0x274d;eip=0x001ef1; 	J(JGE(loc_379a5));	// 73493                  jge     short loc_379A5 ;~ 274D:1EF1
cs=0x274d;eip=0x001ef3; 	T(XCHG(cx, dx));	// 73494                  xchg    cx, dx ;~ 274D:1EF3
loc_379a5:
	// 7194 
cs=0x274d;eip=0x001ef5; 	T(OR(dx, dx));	// 73497                  or      dx, dx ;~ 274D:1EF5
cs=0x274d;eip=0x001ef7; 	J(JNS(loc_379ab));	// 73498                  jns     short loc_379AB ;~ 274D:1EF7
cs=0x274d;eip=0x001ef9; 	T(SUB(dx, dx));	// 73499                  sub     dx, dx ;~ 274D:1EF9
loc_379ab:
	// 7195 
cs=0x274d;eip=0x001efb; 	T(CMP(cx, word_4d789));	// 73502                  cmp     cx, word_4D789 ;~ 274D:1EFB
cs=0x274d;eip=0x001eff; 	J(JLE(loc_379b5));	// 73503                  jle     short loc_379B5 ;~ 274D:1EFF
cs=0x274d;eip=0x001f01; 	T(cx = word_4d789;);	// 73504                  mov     cx, word_4D789 ;~ 274D:1F01
loc_379b5:
	// 7196 
cs=0x274d;eip=0x001f05; 	T(CMP(cx, word_4db0b));	// 73507                  cmp     cx, word_4DB0B ;~ 274D:1F05
cs=0x274d;eip=0x001f09; 	J(JBE(loc_379bf));	// 73508                  jbe     short loc_379BF ;~ 274D:1F09
cs=0x274d;eip=0x001f0b; 	X(word_4db0b = cx;);	// 73509                  mov     word_4DB0B, cx ;~ 274D:1F0B
loc_379bf:
	// 7197 
cs=0x274d;eip=0x001f0f; 	T(CMP(dx, word_4db09));	// 73512                  cmp     dx, word_4DB09 ;~ 274D:1F0F
cs=0x274d;eip=0x001f13; 	J(JNC(loc_379c9));	// 73513                  jnb     short loc_379C9 ;~ 274D:1F13
cs=0x274d;eip=0x001f15; 	X(word_4db09 = dx;);	// 73514                  mov     word_4DB09, dx ;~ 274D:1F15
loc_379c9:
	// 7198 
cs=0x274d;eip=0x001f19; 	T(ADD(di, dx));	// 73517                  add     di, dx ;~ 274D:1F19
cs=0x274d;eip=0x001f1b; 	T(ADD(di, dx));	// 73518                  add     di, dx ;~ 274D:1F1B
cs=0x274d;eip=0x001f1d; 	T(SUB(cx, dx));	// 73519                  sub     cx, dx ;~ 274D:1F1D
cs=0x274d;eip=0x001f1f; 	T(INC(cx));	// 73520                  inc     cx ;~ 274D:1F1F
cs=0x274d;eip=0x001f20; 	T(ax = si;);	// 73521                  mov     ax, si ;~ 274D:1F20
	// 73522                  rep stosw ;~ 274D:1F22
cs=0x274d;eip=0x001f22; 	X(	REP STOSW);	// 73522                  rep stosw ;~ 274D:1F22
locret_379d4:
	// 7199 
cs=0x274d;eip=0x001f24; 	J(RETN(0));	// 73525                  retn ;~ 274D:1F24
seg35ab_1f25_proc:
	// 73531 
loc_379d5:
	// 7200 
cs=0x274d;eip=0x001f25; 	T(SUB(si, si));	// 73532                  sub     si, si ;~ 274D:1F25
cs=0x274d;eip=0x001f27; 	T(OR(bx, bx));	// 73533                  or      bx, bx ;~ 274D:1F27
cs=0x274d;eip=0x001f29; 	J(JS(sub_37986));	// 73534                  js      short sub_37986 ;~ 274D:1F29
cs=0x274d;eip=0x001f2b; 	T(si = word_4d787;);	// 73535                  mov     si, word_4D787 ;~ 274D:1F2B
cs=0x274d;eip=0x001f2f; 	T(CMP(bx, si));	// 73536                  cmp     bx, si ;~ 274D:1F2F
cs=0x274d;eip=0x001f31; 	J(JG(sub_37986));	// 73537                  jg      short sub_37986 ;~ 274D:1F31
cs=0x274d;eip=0x001f33; 	J(RETN(0));	// 73538                  retn ;~ 274D:1F33

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
cs=0x274d;eip=0x001f34; 	T(ax = word_4d78f;);	// 73546                  mov     ax, word_4D78F ;~ 274D:1F34
cs=0x274d;eip=0x001f37; 	T(CMP(ax, word_4d78d));	// 73547                  cmp     ax, word_4D78D ;~ 274D:1F37
cs=0x274d;eip=0x001f3b; 	J(JNC(loc_37a06));	// 73548                  jnb     short loc_37A06 ;~ 274D:1F3B
cs=0x274d;eip=0x001f3d; 	T(bx = word_4d78d;);	// 73549                  mov     bx, word_4D78D ;~ 274D:1F3D
cs=0x274d;eip=0x001f41; 	X(word_4d78f = bx;);	// 73550                  mov     word_4D78F, bx ;~ 274D:1F41
cs=0x274d;eip=0x001f45; 	X(word_4d78d = ax;);	// 73551                  mov     word_4D78D, ax ;~ 274D:1F45
cs=0x274d;eip=0x001f48; 	T(ax = word_4d793;);	// 73552                  mov     ax, word_4D793 ;~ 274D:1F48
cs=0x274d;eip=0x001f4b; 	T(bx = word_4d791;);	// 73553                  mov     bx, word_4D791 ;~ 274D:1F4B
cs=0x274d;eip=0x001f4f; 	X(word_4d793 = bx;);	// 73554                  mov     word_4D793, bx ;~ 274D:1F4F
cs=0x274d;eip=0x001f53; 	X(word_4d791 = ax;);	// 73555                  mov     word_4D791, ax ;~ 274D:1F53
loc_37a06:
	// 7201 
cs=0x274d;eip=0x001f56; 	T(bx = word_4d78f;);	// 73558                  mov     bx, word_4D78F ;~ 274D:1F56
cs=0x274d;eip=0x001f5a; 	T(SUB(bx, word_4d78d));	// 73559                  sub     bx, word_4D78D ;~ 274D:1F5A
cs=0x274d;eip=0x001f5e; 	X(word_4db05 = bx;);	// 73560                  mov     word_4DB05, bx ;~ 274D:1F5E
cs=0x274d;eip=0x001f62; 	T(ax = word_4d793;);	// 73561                  mov     ax, word_4D793 ;~ 274D:1F62
cs=0x274d;eip=0x001f65; 	T(dx = ax;);	// 73562                  mov     dx, ax ;~ 274D:1F65
cs=0x274d;eip=0x001f67; 	T(cx = word_4d791;);	// 73563                  mov     cx, word_4D791 ;~ 274D:1F67
cs=0x274d;eip=0x001f6b; 	T(SUB(ax, cx));	// 73564                  sub     ax, cx ;~ 274D:1F6B
cs=0x274d;eip=0x001f6d; 	T(bp = 2;);	// 73565                  mov     bp, 2 ;~ 274D:1F6D
cs=0x274d;eip=0x001f70; 	J(JNS(loc_37a28));	// 73566                  jns     short loc_37A28 ;~ 274D:1F70
cs=0x274d;eip=0x001f72; 	T(XCHG(cx, dx));	// 73567                  xchg    cx, dx ;~ 274D:1F72
cs=0x274d;eip=0x001f74; 	T(NEG(bp));	// 73568                  neg     bp ;~ 274D:1F74
cs=0x274d;eip=0x001f76; 	T(NEG(ax));	// 73569                  neg     ax ;~ 274D:1F76
loc_37a28:
	// 7202 
cs=0x274d;eip=0x001f78; 	X(word_4db07 = ax;);	// 73572                  mov     word_4DB07, ax ;~ 274D:1F78
cs=0x274d;eip=0x001f7b; 	T(CMP(dx, word_4db0b));	// 73573                  cmp     dx, word_4DB0B ;~ 274D:1F7B
cs=0x274d;eip=0x001f7f; 	J(JBE(loc_37a35));	// 73574                  jbe     short loc_37A35 ;~ 274D:1F7F
cs=0x274d;eip=0x001f81; 	X(word_4db0b = dx;);	// 73575                  mov     word_4DB0B, dx ;~ 274D:1F81
loc_37a35:
	// 7203 
cs=0x274d;eip=0x001f85; 	T(CMP(cx, word_4db09));	// 73578                  cmp     cx, word_4DB09 ;~ 274D:1F85
cs=0x274d;eip=0x001f89; 	J(JNC(loc_37a3f));	// 73579                  jnb     short loc_37A3F ;~ 274D:1F89
cs=0x274d;eip=0x001f8b; 	X(word_4db09 = cx;);	// 73580                  mov     word_4DB09, cx ;~ 274D:1F8B
loc_37a3f:
	// 7204 
cs=0x274d;eip=0x001f8f; 	T(CMP(ax, bx));	// 73583                  cmp     ax, bx ;~ 274D:1F8F
cs=0x274d;eip=0x001f91; 	J(JNC(loc_37a8e));	// 73584                  jnb     short loc_37A8E ;~ 274D:1F91
cs=0x274d;eip=0x001f93; 	T(di = word_4d791;);	// 73585                  mov     di, word_4D791 ;~ 274D:1F93
cs=0x274d;eip=0x001f97; 	T(SHL(di, 1));	// 73586                  shl     di, 1 ;~ 274D:1F97
cs=0x274d;eip=0x001f99; 	T(ax = word_4d78d;);	// 73587                  mov     ax, word_4D78D ;~ 274D:1F99
cs=0x274d;eip=0x001f9c; 	T(dx = word_4db05;);	// 73588                  mov     dx, word_4DB05 ;~ 274D:1F9C
cs=0x274d;eip=0x001fa0; 	T(cx = dx;);	// 73589                  mov     cx, dx ;~ 274D:1FA0
cs=0x274d;eip=0x001fa2; 	T(bx = cx;);	// 73590                  mov     bx, cx ;~ 274D:1FA2
cs=0x274d;eip=0x001fa4; 	T(INC(bx));	// 73591                  inc     bx ;~ 274D:1FA4
cs=0x274d;eip=0x001fa5; 	T(SHR(bx, 1));	// 73592                  shr     bx, 1 ;~ 274D:1FA5
cs=0x274d;eip=0x001fa7; 	T(NEG(bx));	// 73593                  neg     bx ;~ 274D:1FA7
cs=0x274d;eip=0x001fa9; 	T(si = word_4db07;);	// 73594                  mov     si, word_4DB07 ;~ 274D:1FA9
cs=0x274d;eip=0x001fad; 	J(JMP(loc_37a6f));	// 73595                  jmp     short loc_37A6F ;~ 274D:1FAD
loc_37a60:
	// 7205 
cs=0x274d;eip=0x001fb0; 	T(CMP(ax, *(dw*)(raddr(ds,di+0x4E6D))));	// 73601                  cmp     ax, [di+4E6Dh] ;~ 274D:1FB0
cs=0x274d;eip=0x001fb4; 	J(JBE(loc_37a6a));	// 73602                  jbe     short loc_37A6A ;~ 274D:1FB4
cs=0x274d;eip=0x001fb6; 	X(MOV(*(dw*)(raddr(ds,di+0x4E6D)), ax));	// 73603                  mov     [di+4E6Dh], ax ;~ 274D:1FB6
loc_37a6a:
	// 7206 
cs=0x274d;eip=0x001fba; 	T(INC(ax));	// 73606                  inc     ax ;~ 274D:1FBA
cs=0x274d;eip=0x001fbb; 	T(SUB(bx, dx));	// 73607                  sub     bx, dx ;~ 274D:1FBB
cs=0x274d;eip=0x001fbd; 	T(ADD(di, bp));	// 73608                  add     di, bp ;~ 274D:1FBD
loc_37a6f:
	// 7207 
cs=0x274d;eip=0x001fbf; 	T(CMP(ax, *(dw*)(raddr(ds,di+0x4CB5))));	// 73611                  cmp     ax, [di+4CB5h] ;~ 274D:1FBF
cs=0x274d;eip=0x001fc3; 	J(JNC(loc_37a79));	// 73612                  jnb     short loc_37A79 ;~ 274D:1FC3
cs=0x274d;eip=0x001fc5; 	X(MOV(*(dw*)(raddr(ds,di+0x4CB5)), ax));	// 73613                  mov     [di+4CB5h], ax ;~ 274D:1FC5
loc_37a79:
	// 7208 
cs=0x274d;eip=0x001fc9; 	T(DEC(cx));	// 73617                  dec     cx ;~ 274D:1FC9
cs=0x274d;eip=0x001fca; 	J(JS(loc_37a83));	// 73618                  js      short loc_37A83 ;~ 274D:1FCA
cs=0x274d;eip=0x001fcc; 	T(ADD(bx, si));	// 73619                  add     bx, si ;~ 274D:1FCC
cs=0x274d;eip=0x001fce; 	J(JNS(loc_37a60));	// 73620                  jns     short loc_37A60 ;~ 274D:1FCE
cs=0x274d;eip=0x001fd0; 	T(INC(ax));	// 73621                  inc     ax ;~ 274D:1FD0
cs=0x274d;eip=0x001fd1; 	J(JMP(loc_37a79));	// 73622                  jmp     short loc_37A79 ;~ 274D:1FD1
loc_37a83:
	// 7209 
cs=0x274d;eip=0x001fd3; 	T(CMP(ax, *(dw*)(raddr(ds,di+0x4E6D))));	// 73626                  cmp     ax, [di+4E6Dh] ;~ 274D:1FD3
cs=0x274d;eip=0x001fd7; 	J(JBE(locret_37a8d));	// 73627                  jbe     short locret_37A8D ;~ 274D:1FD7
cs=0x274d;eip=0x001fd9; 	X(MOV(*(dw*)(raddr(ds,di+0x4E6D)), ax));	// 73628                  mov     [di+4E6Dh], ax ;~ 274D:1FD9
locret_37a8d:
	// 7210 
cs=0x274d;eip=0x001fdd; 	J(RETN(0));	// 73631                  retn ;~ 274D:1FDD
loc_37a8e:
	// 7211 
cs=0x274d;eip=0x001fde; 	T(di = word_4d791;);	// 73635                  mov     di, word_4D791 ;~ 274D:1FDE
cs=0x274d;eip=0x001fe2; 	T(SHL(di, 1));	// 73636                  shl     di, 1 ;~ 274D:1FE2
cs=0x274d;eip=0x001fe4; 	T(ax = word_4d78d;);	// 73637                  mov     ax, word_4D78D ;~ 274D:1FE4
cs=0x274d;eip=0x001fe7; 	T(dx = word_4db07;);	// 73638                  mov     dx, word_4DB07 ;~ 274D:1FE7
cs=0x274d;eip=0x001feb; 	T(cx = dx;);	// 73639                  mov     cx, dx ;~ 274D:1FEB
cs=0x274d;eip=0x001fed; 	T(bx = cx;);	// 73640                  mov     bx, cx ;~ 274D:1FED
cs=0x274d;eip=0x001fef; 	T(INC(bx));	// 73641                  inc     bx ;~ 274D:1FEF
cs=0x274d;eip=0x001ff0; 	T(SHR(bx, 1));	// 73642                  shr     bx, 1 ;~ 274D:1FF0
cs=0x274d;eip=0x001ff2; 	T(NEG(bx));	// 73643                  neg     bx ;~ 274D:1FF2
cs=0x274d;eip=0x001ff4; 	T(si = word_4db05;);	// 73644                  mov     si, word_4DB05 ;~ 274D:1FF4
loc_37aa8:
	// 7212 
cs=0x274d;eip=0x001ff8; 	T(CMP(ax, *(dw*)(raddr(ds,di+0x4CB5))));	// 73648                  cmp     ax, [di+4CB5h] ;~ 274D:1FF8
cs=0x274d;eip=0x001ffc; 	J(JNC(loc_37ab2));	// 73649                  jnb     short loc_37AB2 ;~ 274D:1FFC
cs=0x274d;eip=0x001ffe; 	X(MOV(*(dw*)(raddr(ds,di+0x4CB5)), ax));	// 73650                  mov     [di+4CB5h], ax ;~ 274D:1FFE
loc_37ab2:
	// 7213 
cs=0x274d;eip=0x002002; 	T(CMP(ax, *(dw*)(raddr(ds,di+0x4E6D))));	// 73653                  cmp     ax, [di+4E6Dh] ;~ 274D:2002
cs=0x274d;eip=0x002006; 	J(JBE(loc_37abc));	// 73654                  jbe     short loc_37ABC ;~ 274D:2006
cs=0x274d;eip=0x002008; 	X(MOV(*(dw*)(raddr(ds,di+0x4E6D)), ax));	// 73655                  mov     [di+4E6Dh], ax ;~ 274D:2008
loc_37abc:
	// 7214 
cs=0x274d;eip=0x00200c; 	T(DEC(cx));	// 73658                  dec     cx ;~ 274D:200C
cs=0x274d;eip=0x00200d; 	J(JS(locret_37aca));	// 73659                  js      short locret_37ACA ;~ 274D:200D
cs=0x274d;eip=0x00200f; 	T(ADD(di, bp));	// 73660                  add     di, bp ;~ 274D:200F
cs=0x274d;eip=0x002011; 	T(ADD(bx, si));	// 73661                  add     bx, si ;~ 274D:2011
cs=0x274d;eip=0x002013; 	J(JS(loc_37aa8));	// 73662                  js      short loc_37AA8 ;~ 274D:2013
cs=0x274d;eip=0x002015; 	T(SUB(bx, dx));	// 73663                  sub     bx, dx ;~ 274D:2015
cs=0x274d;eip=0x002017; 	T(INC(ax));	// 73664                  inc     ax ;~ 274D:2017
cs=0x274d;eip=0x002018; 	J(JMP(loc_37aa8));	// 73665                  jmp     short loc_37AA8 ;~ 274D:2018
locret_37aca:
	// 7215 
cs=0x274d;eip=0x00201a; 	J(RETN(0));	// 73669                  retn ;~ 274D:201A

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
cs=0x274d;eip=0x00201c; 	X(PUSH(es));	// 73679                  push    es ;~ 274D:201C
cs=0x274d;eip=0x00201d; 	X(PUSH(si));	// 73680                  push    si ;~ 274D:201D
cs=0x274d;eip=0x00201e; 	X(PUSH(di));	// 73681                  push    di ;~ 274D:201E
cs=0x274d;eip=0x00201f; 	X(PUSH(bp));	// 73682                  push    bp ;~ 274D:201F
cs=0x274d;eip=0x002020; 	J(CALL(sub_37ad8,0));	// 73683                  call    sub_37AD8 ;~ 274D:2020
cs=0x274d;eip=0x002023; 	X(POP(bp));	// 73684                  pop     bp ;~ 274D:2023
cs=0x274d;eip=0x002024; 	X(POP(di));	// 73685                  pop     di ;~ 274D:2024
cs=0x274d;eip=0x002025; 	X(POP(si));	// 73686                  pop     si ;~ 274D:2025
cs=0x274d;eip=0x002026; 	X(POP(es));	// 73687                  pop     es ;~ 274D:2026
cs=0x274d;eip=0x002027; 	J(RETF(0));	// 73688                  retf ;~ 274D:2027

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
cs=0x274d;eip=0x002028; 	T(SUB(ax, ax));	// 73700                  sub     ax, ax ;~ 274D:2028
cs=0x274d;eip=0x00202a; 	T(es = ax;);	// 73701                  mov     es, ax ;~ 274D:202A
cs=0x274d;eip=0x00202c; 	X(PUSH(*(dw*)(raddr(es,0))));	// 73703                  push    word ptr es:0 ;~ 274D:202C
cs=0x274d;eip=0x002031; 	X(PUSH(*(dw*)(raddr(es,2))));	// 73704                  push    word ptr es:2 ;~ 274D:2031
cs=0x274d;eip=0x002036; 	T(ax = offset(seg48ae,word_4ac7c)+0x3C);	// 73705                  lea     ax, word_4AC7C+3Ch ;~ 274D:2036
cs=0x274d;eip=0x00203a; 	X(MOV(*(dw*)(raddr(es,0)), ax));	// 73706                  mov     es:0, ax ;~ 274D:203A
cs=0x274d;eip=0x00203e; 	X(MOV(*(dw*)(raddr(es,2)), seg_offset(seg35ab)));	// 73707                  mov     word ptr es:2, seg seg35ab ;~ 274D:203E
cs=0x274d;eip=0x002045; 	X(PUSH(ds));	// 73708                  push    ds ;~ 274D:2045
cs=0x274d;eip=0x002046; 	X(POP(es));	// 73709                  pop     es ;~ 274D:2046
cs=0x274d;eip=0x002047; 	J(JMP(loc_37b47));	// 73711                  jmp     short loc_37B47 ;~ 274D:2047
loc_37afa:
	// 7216 
cs=0x274d;eip=0x00204a; 	T(SUB(ax, ax));	// 73717                  sub     ax, ax ;~ 274D:204A
cs=0x274d;eip=0x00204c; 	T(es = ax;);	// 73718                  mov     es, ax ;~ 274D:204C
cs=0x274d;eip=0x00204e; 	X(POP(*(dw*)(raddr(es,2))));	// 73720                  pop     word ptr es:2 ;~ 274D:204E
cs=0x274d;eip=0x002053; 	X(POP(*(dw*)(raddr(es,0))));	// 73721                  pop     word ptr es:0 ;~ 274D:2053
cs=0x274d;eip=0x002058; 	X(PUSH(ds));	// 73722                  push    ds ;~ 274D:2058
cs=0x274d;eip=0x002059; 	X(POP(es));	// 73723                  pop     es ;~ 274D:2059
cs=0x274d;eip=0x00205a; 	J(RETN(0));	// 73725                  retn ;~ 274D:205A
loc_37b0b:
	// 7217 
cs=0x274d;eip=0x00205b; 	T(AND(al, byte_4db0e));	// 73729                  and     al, byte_4DB0E ;~ 274D:205B
cs=0x274d;eip=0x00205f; 	T(TEST(al, 6));	// 73730                  test    al, 6 ;~ 274D:205F
cs=0x274d;eip=0x002061; 	J(JNZ(loc_37afa));	// 73731                  jnz     short loc_37AFA ;~ 274D:2061
cs=0x274d;eip=0x002063; 	T(bx = cx;);	// 73732                  mov     bx, cx ;~ 274D:2063
cs=0x274d;eip=0x002065; 	J(JMP(loc_37c4a));	// 73733                  jmp     loc_37C4A ;~ 274D:2065
loc_37b18:
	// 7218 
cs=0x274d;eip=0x002068; 	J(JMP(loc_37c75));	// 73737                  jmp     loc_37C75 ;~ 274D:2068
loc_37b1b:
	// 7219 
cs=0x274d;eip=0x00206b; 	T(CMC);	// 73741                  cmc ;~ 274D:206B
cs=0x274d;eip=0x00206c; 	T(RCR(dx, 1));	// 73742                  rcr     dx, 1 ;~ 274D:206C
cs=0x274d;eip=0x00206e; 	X(word_4db0f = dx;);	// 73743                  mov     word_4DB0F, dx ;~ 274D:206E
cs=0x274d;eip=0x002072; 	T(SAR(dx, 1));	// 73744                  sar     dx, 1 ;~ 274D:2072
cs=0x274d;eip=0x002074; 	X(word_4db13 = dx;);	// 73745                  mov     word_4DB13, dx ;~ 274D:2074
cs=0x274d;eip=0x002078; 	T(dx = di;);	// 73746                  mov     dx, di ;~ 274D:2078
cs=0x274d;eip=0x00207a; 	T(SUB(dx, bp));	// 73747                  sub     dx, bp ;~ 274D:207A
cs=0x274d;eip=0x00207c; 	J(JNO(loc_37b34));	// 73748                  jno     short loc_37B34 ;~ 274D:207C
cs=0x274d;eip=0x00207e; 	T(CMC);	// 73749                  cmc ;~ 274D:207E
cs=0x274d;eip=0x00207f; 	T(RCR(dx, 1));	// 73750                  rcr     dx, 1 ;~ 274D:207F
cs=0x274d;eip=0x002081; 	J(JMP(loc_37b9f));	// 73751                  jmp     short loc_37B9F ;~ 274D:2081
loc_37b34:
	// 7220 
cs=0x274d;eip=0x002084; 	T(SAR(dx, 1));	// 73757                  sar     dx, 1 ;~ 274D:2084
cs=0x274d;eip=0x002086; 	J(JMP(loc_37b9f));	// 73758                  jmp     short loc_37B9F ;~ 274D:2086
loc_37b39:
	// 7221 
cs=0x274d;eip=0x002089; 	T(CMC);	// 73764                  cmc ;~ 274D:2089
cs=0x274d;eip=0x00208a; 	T(RCR(dx, 1));	// 73765                  rcr     dx, 1 ;~ 274D:208A
cs=0x274d;eip=0x00208c; 	X(SAR(word_4db0f, 1));	// 73766                  sar     word_4DB0F, 1 ;~ 274D:208C
cs=0x274d;eip=0x002090; 	X(SAR(word_4db13, 1));	// 73767                  sar     word_4DB13, 1 ;~ 274D:2090
cs=0x274d;eip=0x002094; 	J(JMP(loc_37b9f));	// 73768                  jmp     short loc_37B9F ;~ 274D:2094
loc_37b47:
	// 7222 
cs=0x274d;eip=0x002097; 	T(cx = word_4d78d;);	// 73774                  mov     cx, word_4D78D ;~ 274D:2097
cs=0x274d;eip=0x00209b; 	T(dx = word_4d791;);	// 73775                  mov     dx, word_4D791 ;~ 274D:209B
cs=0x274d;eip=0x00209f; 	T(si = word_4d78f;);	// 73776                  mov     si, word_4D78F ;~ 274D:209F
cs=0x274d;eip=0x0020a3; 	T(di = word_4d793;);	// 73777                  mov     di, word_4D793 ;~ 274D:20A3
cs=0x274d;eip=0x0020a7; 	T(bx = cx;);	// 73778                  mov     bx, cx ;~ 274D:20A7
cs=0x274d;eip=0x0020a9; 	T(bp = dx;);	// 73779                  mov     bp, dx ;~ 274D:20A9
cs=0x274d;eip=0x0020ab; 	J(CALL(sub_378f2,0));	// 73780                  call    sub_378F2 ;~ 274D:20AB
cs=0x274d;eip=0x0020ae; 	X(byte_4db0e = al;);	// 73781                  mov     byte_4DB0E, al ;~ 274D:20AE
cs=0x274d;eip=0x0020b1; 	T(bx = si;);	// 73782                  mov     bx, si ;~ 274D:20B1
cs=0x274d;eip=0x0020b3; 	T(bp = di;);	// 73783                  mov     bp, di ;~ 274D:20B3
cs=0x274d;eip=0x0020b5; 	J(CALL(sub_378f2,0));	// 73784                  call    sub_378F2 ;~ 274D:20B5
cs=0x274d;eip=0x0020b8; 	J(JNZ(loc_37b81));	// 73785                  jnz     short loc_37B81 ;~ 274D:20B8
cs=0x274d;eip=0x0020ba; 	T(CMP(byte_4db0e, 0));	// 73786                  cmp     byte_4DB0E, 0 ;~ 274D:20BA
cs=0x274d;eip=0x0020bf; 	J(JZ(loc_37b18));	// 73787                  jz      short loc_37B18 ;~ 274D:20BF
cs=0x274d;eip=0x0020c1; 	T(XCHG(cx, si));	// 73788                  xchg    cx, si ;~ 274D:20C1
cs=0x274d;eip=0x0020c3; 	T(XCHG(dx, di));	// 73789                  xchg    dx, di ;~ 274D:20C3
cs=0x274d;eip=0x0020c5; 	X(XCHG(al, byte_4db0e));	// 73790                  xchg    al, byte_4DB0E ;~ 274D:20C5
cs=0x274d;eip=0x0020c9; 	X(word_4d78d = cx;);	// 73791                  mov     word_4D78D, cx ;~ 274D:20C9
cs=0x274d;eip=0x0020cd; 	X(word_4d791 = dx;);	// 73792                  mov     word_4D791, dx ;~ 274D:20CD
loc_37b81:
	// 7223 
cs=0x274d;eip=0x0020d1; 	T(bp = dx;);	// 73795                  mov     bp, dx ;~ 274D:20D1
cs=0x274d;eip=0x0020d3; 	T(TEST(byte_4db0e, al));	// 73796                  test    byte_4DB0E, al ;~ 274D:20D3
cs=0x274d;eip=0x0020d7; 	J(JNZ(loc_37b0b));	// 73797                  jnz     short loc_37B0B ;~ 274D:20D7
cs=0x274d;eip=0x0020d9; 	T(dx = si;);	// 73798                  mov     dx, si ;~ 274D:20D9
cs=0x274d;eip=0x0020db; 	T(SUB(dx, cx));	// 73799                  sub     dx, cx ;~ 274D:20DB
cs=0x274d;eip=0x0020dd; 	J(JO(loc_37b1b));	// 73800                  jo      short loc_37B1B ;~ 274D:20DD
cs=0x274d;eip=0x0020df; 	X(word_4db0f = dx;);	// 73801                  mov     word_4DB0F, dx ;~ 274D:20DF
cs=0x274d;eip=0x0020e3; 	T(SAR(dx, 1));	// 73802                  sar     dx, 1 ;~ 274D:20E3
cs=0x274d;eip=0x0020e5; 	X(word_4db13 = dx;);	// 73803                  mov     word_4DB13, dx ;~ 274D:20E5
cs=0x274d;eip=0x0020e9; 	T(dx = di;);	// 73804                  mov     dx, di ;~ 274D:20E9
cs=0x274d;eip=0x0020eb; 	T(SUB(dx, bp));	// 73805                  sub     dx, bp ;~ 274D:20EB
cs=0x274d;eip=0x0020ed; 	J(JO(loc_37b39));	// 73806                  jo      short loc_37B39 ;~ 274D:20ED
loc_37b9f:
	// 7224 
cs=0x274d;eip=0x0020ef; 	X(word_4db11 = dx;);	// 73810                  mov     word_4DB11, dx ;~ 274D:20EF
cs=0x274d;eip=0x0020f3; 	T(SAR(dx, 1));	// 73811                  sar     dx, 1 ;~ 274D:20F3
cs=0x274d;eip=0x0020f5; 	X(word_4db15 = dx;);	// 73812                  mov     word_4DB15, dx ;~ 274D:20F5
loc_37ba9:
	// 7225 
cs=0x274d;eip=0x0020f9; 	T(TEST(al, 9));	// 73815                  test    al, 9 ;~ 274D:20F9
cs=0x274d;eip=0x0020fb; 	J(JZ(loc_37be9));	// 73816                  jz      short loc_37BE9 ;~ 274D:20FB
cs=0x274d;eip=0x0020fd; 	T(SUB(bx, bx));	// 73817                  sub     bx, bx ;~ 274D:20FD
cs=0x274d;eip=0x0020ff; 	T(OR(si, si));	// 73818                  or      si, si ;~ 274D:20FF
cs=0x274d;eip=0x002101; 	J(JS(loc_37bb7));	// 73819                  js      short loc_37BB7 ;~ 274D:2101
cs=0x274d;eip=0x002103; 	T(bx = word_4d787;);	// 73820                  mov     bx, word_4D787 ;~ 274D:2103
loc_37bb7:
	// 7226 
cs=0x274d;eip=0x002107; 	T(ax = bx;);	// 73823                  mov     ax, bx ;~ 274D:2107
cs=0x274d;eip=0x002109; 	T(SUB(ax, cx));	// 73824                  sub     ax, cx ;~ 274D:2109
cs=0x274d;eip=0x00210b; 	X(IMUL1_2(word_4db11));	// 73825                  imul    word_4DB11 ;~ 274D:210B
cs=0x274d;eip=0x00210f; 	X(PUSH(bx));	// 73826                  push    bx ;~ 274D:210F
cs=0x274d;eip=0x002110; 	T(bx = dx;);	// 73827                  mov     bx, dx ;~ 274D:2110
cs=0x274d;eip=0x002112; 	X(IDIV2(word_4db0f));	// 73828                  idiv    word_4DB0F ;~ 274D:2112
cs=0x274d;eip=0x002116; 	T(OR(ax, ax));	// 73829                  or      ax, ax ;~ 274D:2116
cs=0x274d;eip=0x002118; 	T(OR(ax, ax));	// 73830                  or      ax, ax ;~ 274D:2118
cs=0x274d;eip=0x00211a; 	T(bl = bh;);	// 73831                  mov     bl, bh ;~ 274D:211A
cs=0x274d;eip=0x00211c; 	T(XOR(bl, *(db*)(((db*)&word_4db0f)+1)));	// 73832                  xor     bl, byte ptr word_4DB0F+1 ;~ 274D:211C
cs=0x274d;eip=0x002120; 	J(JNS(loc_37bd5));	// 73833                  jns     short loc_37BD5 ;~ 274D:2120
cs=0x274d;eip=0x002122; 	T(NEG(dx));	// 73834                  neg     dx ;~ 274D:2122
cs=0x274d;eip=0x002124; 	T(DEC(ax));	// 73835                  dec     ax ;~ 274D:2124
loc_37bd5:
	// 7227 
cs=0x274d;eip=0x002125; 	T(SUB(dx, word_4db13));	// 73838                  sub     dx, word_4DB13 ;~ 274D:2125
cs=0x274d;eip=0x002129; 	T(XOR(dh, bh));	// 73839                  xor     dh, bh ;~ 274D:2129
cs=0x274d;eip=0x00212b; 	J(JS(loc_37bde));	// 73840                  js      short loc_37BDE ;~ 274D:212B
cs=0x274d;eip=0x00212d; 	T(INC(ax));	// 73841                  inc     ax ;~ 274D:212D
loc_37bde:
	// 7228 
cs=0x274d;eip=0x00212e; 	X(POP(bx));	// 73844                  pop     bx ;~ 274D:212E
cs=0x274d;eip=0x00212f; 	T(ADD(ax, bp));	// 73845                  add     ax, bp ;~ 274D:212F
cs=0x274d;eip=0x002131; 	J(JS(loc_37bf1));	// 73846                  js      short loc_37BF1 ;~ 274D:2131
cs=0x274d;eip=0x002133; 	T(CMP(ax, word_4d789));	// 73847                  cmp     ax, word_4D789 ;~ 274D:2133
cs=0x274d;eip=0x002137; 	J(JLE(loc_37c26));	// 73848                  jle     short loc_37C26 ;~ 274D:2137
loc_37be9:
	// 7229 
cs=0x274d;eip=0x002139; 	T(bx = word_4d789;);	// 73851                  mov     bx, word_4D789 ;~ 274D:2139
cs=0x274d;eip=0x00213d; 	T(CMP(di, bx));	// 73852                  cmp     di, bx ;~ 274D:213D
cs=0x274d;eip=0x00213f; 	J(JG(loc_37bf3));	// 73853                  jg      short loc_37BF3 ;~ 274D:213F
loc_37bf1:
	// 7230 
cs=0x274d;eip=0x002141; 	T(SUB(bx, bx));	// 73856                  sub     bx, bx ;~ 274D:2141
loc_37bf3:
	// 7231 
cs=0x274d;eip=0x002143; 	T(ax = bx;);	// 73859                  mov     ax, bx ;~ 274D:2143
cs=0x274d;eip=0x002145; 	T(SUB(ax, bp));	// 73860                  sub     ax, bp ;~ 274D:2145
cs=0x274d;eip=0x002147; 	X(IMUL1_2(word_4db0f));	// 73861                  imul    word_4DB0F ;~ 274D:2147
cs=0x274d;eip=0x00214b; 	X(PUSH(bx));	// 73862                  push    bx ;~ 274D:214B
cs=0x274d;eip=0x00214c; 	T(bx = dx;);	// 73863                  mov     bx, dx ;~ 274D:214C
cs=0x274d;eip=0x00214e; 	X(IDIV2(word_4db11));	// 73864                  idiv    word_4DB11 ;~ 274D:214E
cs=0x274d;eip=0x002152; 	T(OR(ax, ax));	// 73865                  or      ax, ax ;~ 274D:2152
cs=0x274d;eip=0x002154; 	T(OR(ax, ax));	// 73866                  or      ax, ax ;~ 274D:2154
cs=0x274d;eip=0x002156; 	T(bl = bh;);	// 73867                  mov     bl, bh ;~ 274D:2156
cs=0x274d;eip=0x002158; 	T(XOR(bl, *(db*)(((db*)&word_4db11)+1)));	// 73868                  xor     bl, byte ptr word_4DB11+1 ;~ 274D:2158
cs=0x274d;eip=0x00215c; 	J(JNS(loc_37c11));	// 73869                  jns     short loc_37C11 ;~ 274D:215C
cs=0x274d;eip=0x00215e; 	T(NEG(dx));	// 73870                  neg     dx ;~ 274D:215E
cs=0x274d;eip=0x002160; 	T(DEC(ax));	// 73871                  dec     ax ;~ 274D:2160
loc_37c11:
	// 7232 
cs=0x274d;eip=0x002161; 	T(SUB(dx, word_4db15));	// 73874                  sub     dx, word_4DB15 ;~ 274D:2161
cs=0x274d;eip=0x002165; 	T(XOR(dh, bh));	// 73875                  xor     dh, bh ;~ 274D:2165
cs=0x274d;eip=0x002167; 	J(JS(loc_37c1a));	// 73876                  js      short loc_37C1A ;~ 274D:2167
cs=0x274d;eip=0x002169; 	T(INC(ax));	// 73877                  inc     ax ;~ 274D:2169
loc_37c1a:
	// 7233 
cs=0x274d;eip=0x00216a; 	X(POP(bx));	// 73880                  pop     bx ;~ 274D:216A
cs=0x274d;eip=0x00216b; 	T(ADD(ax, cx));	// 73881                  add     ax, cx ;~ 274D:216B
cs=0x274d;eip=0x00216d; 	T(XCHG(ax, bx));	// 73882                  xchg    ax, bx ;~ 274D:216D
cs=0x274d;eip=0x00216e; 	J(JS(loc_37c4a));	// 73883                  js      short loc_37C4A ;~ 274D:216E
cs=0x274d;eip=0x002170; 	T(CMP(bx, word_4d787));	// 73884                  cmp     bx, word_4D787 ;~ 274D:2170
cs=0x274d;eip=0x002174; 	J(JG(loc_37c4a));	// 73885                  jg      short loc_37C4A ;~ 274D:2174
loc_37c26:
	// 7234 
cs=0x274d;eip=0x002176; 	X(PUSH(ax));	// 73888                  push    ax ;~ 274D:2176
cs=0x274d;eip=0x002177; 	X(PUSH(bx));	// 73889                  push    bx ;~ 274D:2177
cs=0x274d;eip=0x002178; 	X(PUSH(cx));	// 73890                  push    cx ;~ 274D:2178
cs=0x274d;eip=0x002179; 	X(PUSH(si));	// 73891                  push    si ;~ 274D:2179
cs=0x274d;eip=0x00217a; 	X(PUSH(di));	// 73892                  push    di ;~ 274D:217A
cs=0x274d;eip=0x00217b; 	T(dx = di;);	// 73893                  mov     dx, di ;~ 274D:217B
cs=0x274d;eip=0x00217d; 	T(di = ax;);	// 73894                  mov     di, ax ;~ 274D:217D
cs=0x274d;eip=0x00217f; 	T(si = bx;);	// 73895                  mov     si, bx ;~ 274D:217F
cs=0x274d;eip=0x002181; 	J(CALL(sub_37986,0));	// 73896                  call    sub_37986 ;~ 274D:2181
cs=0x274d;eip=0x002184; 	X(POP(di));	// 73897                  pop     di ;~ 274D:2184
cs=0x274d;eip=0x002185; 	X(POP(si));	// 73898                  pop     si ;~ 274D:2185
cs=0x274d;eip=0x002186; 	X(POP(cx));	// 73899                  pop     cx ;~ 274D:2186
cs=0x274d;eip=0x002187; 	X(POP(bx));	// 73900                  pop     bx ;~ 274D:2187
cs=0x274d;eip=0x002188; 	X(POP(ax));	// 73901                  pop     ax ;~ 274D:2188
cs=0x274d;eip=0x002189; 	T(CMP(byte_4db0e, 0));	// 73902                  cmp     byte_4DB0E, 0 ;~ 274D:2189
cs=0x274d;eip=0x00218e; 	J(JNZ(loc_37c5f));	// 73903                  jnz     short loc_37C5F ;~ 274D:218E
cs=0x274d;eip=0x002190; 	X(word_4d793 = ax;);	// 73904                  mov     word_4D793, ax ;~ 274D:2190
cs=0x274d;eip=0x002193; 	X(word_4d78f = bx;);	// 73905                  mov     word_4D78F, bx ;~ 274D:2193
cs=0x274d;eip=0x002197; 	J(JMP(loc_37c75));	// 73906                  jmp     short loc_37C75 ;~ 274D:2197
loc_37c4a:
	// 7235 
cs=0x274d;eip=0x00219a; 	T(dx = bp;);	// 73913                  mov     dx, bp ;~ 274D:219A
cs=0x274d;eip=0x00219c; 	T(SUB(ax, ax));	// 73914                  sub     ax, ax ;~ 274D:219C
cs=0x274d;eip=0x00219e; 	T(es = ax;);	// 73915                  mov     es, ax ;~ 274D:219E
cs=0x274d;eip=0x0021a0; 	X(POP(*(dw*)(raddr(es,2))));	// 73917                  pop     word ptr es:2 ;~ 274D:21A0
cs=0x274d;eip=0x0021a5; 	X(POP(*(dw*)(raddr(es,0))));	// 73918                  pop     word ptr es:0 ;~ 274D:21A5
cs=0x274d;eip=0x0021aa; 	X(PUSH(ds));	// 73919                  push    ds ;~ 274D:21AA
cs=0x274d;eip=0x0021ab; 	X(POP(es));	// 73920                  pop     es ;~ 274D:21AB
cs=0x274d;eip=0x0021ac; 	J(return _group77(m2c::kloc_379d5, _state););	// 73922                  jmp     loc_379D5 ;~ 274D:21AC
loc_37c5f:
	// 7236 
cs=0x274d;eip=0x0021af; 	X(word_4d791 = ax;);	// 73926                  mov     word_4D791, ax ;~ 274D:21AF
cs=0x274d;eip=0x0021b2; 	X(word_4d78d = bx;);	// 73927                  mov     word_4D78D, bx ;~ 274D:21B2
cs=0x274d;eip=0x0021b6; 	T(XCHG(cx, si));	// 73928                  xchg    cx, si ;~ 274D:21B6
cs=0x274d;eip=0x0021b8; 	T(XCHG(bp, di));	// 73929                  xchg    bp, di ;~ 274D:21B8
cs=0x274d;eip=0x0021ba; 	T(al = byte_4db0e;);	// 73930                  mov     al, byte_4DB0E ;~ 274D:21BA
cs=0x274d;eip=0x0021bd; 	X(byte_4db0e = 0;);	// 73931                  mov     byte_4DB0E, 0 ;~ 274D:21BD
cs=0x274d;eip=0x0021c2; 	J(JMP(loc_37ba9));	// 73932                  jmp     loc_37BA9 ;~ 274D:21C2
loc_37c75:
	// 7237 
cs=0x274d;eip=0x0021c5; 	T(SUB(ax, ax));	// 73937                  sub     ax, ax ;~ 274D:21C5
cs=0x274d;eip=0x0021c7; 	T(es = ax;);	// 73938                  mov     es, ax ;~ 274D:21C7
cs=0x274d;eip=0x0021c9; 	X(POP(*(dw*)(raddr(es,2))));	// 73940                  pop     word ptr es:2 ;~ 274D:21C9
cs=0x274d;eip=0x0021ce; 	X(POP(*(dw*)(raddr(es,0))));	// 73941                  pop     word ptr es:0 ;~ 274D:21CE
cs=0x274d;eip=0x0021d3; 	X(PUSH(ds));	// 73942                  push    ds ;~ 274D:21D3
cs=0x274d;eip=0x0021d4; 	X(POP(es));	// 73943                  pop     es ;~ 274D:21D4
cs=0x274d;eip=0x0021d5; 	J(return sub_379e4(0, _state););	// 73945                  jmp     sub_379E4 ;~ 274D:21D5

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



 bool seg35ab_21d8_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg35ab_21d8_proc:
    _begin:
cs=0x274d;eip=0x0021d8; 	X(PUSH(bp));	// 73949                  push    bp ;~ 274D:21D8
cs=0x274d;eip=0x0021d9; 	T(bp = sp;);	// 73950                  mov     bp, sp ;~ 274D:21D9
cs=0x274d;eip=0x0021db; 	T(CMP(*(dw*)(raddr(ss,bp+2)), 0x214E));	// 73951                  cmp     word ptr [bp+2], 214Eh ;~ 274D:21DB
cs=0x274d;eip=0x0021e0; 	T(ax = word_4db11;);	// 73952                  mov     ax, word_4DB11 ;~ 274D:21E0
cs=0x274d;eip=0x0021e3; 	J(JZ(loc_37c98));	// 73953                  jz      short loc_37C98 ;~ 274D:21E3
cs=0x274d;eip=0x0021e5; 	T(ax = word_4db0f;);	// 73954                  mov     ax, word_4DB0F ;~ 274D:21E5
loc_37c98:
	// 7238 
cs=0x274d;eip=0x0021e8; 	T(XOR(dx, ax));	// 73957                  xor     dx, ax ;~ 274D:21E8
cs=0x274d;eip=0x0021ea; 	T(ax = 0x7F00;);	// 73958                  mov     ax, 7F00h ;~ 274D:21EA
cs=0x274d;eip=0x0021ed; 	J(JNS(loc_37ca1));	// 73959                  jns     short loc_37CA1 ;~ 274D:21ED
cs=0x274d;eip=0x0021ef; 	T(NEG(ax));	// 73960                  neg     ax ;~ 274D:21EF
loc_37ca1:
	// 7239 
cs=0x274d;eip=0x0021f1; 	X(ADD(*(dw*)(raddr(ss,bp+2)), 4));	// 73964                  add     word ptr [bp+2], 4 ;~ 274D:21F1
cs=0x274d;eip=0x0021f5; 	T(SUB(dx, dx));	// 73965                  sub     dx, dx ;~ 274D:21F5
cs=0x274d;eip=0x0021f7; 	X(POP(bp));	// 73966                  pop     bp ;~ 274D:21F7
cs=0x274d;eip=0x0021f8; 	J(IRET);	// 73967                  iret ;~ 274D:21F8

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_37c98: 	goto loc_37c98;
        case m2c::kloc_37ca1: 	goto loc_37ca1;
        case m2c::kseg35ab_21d8_proc: 	goto seg35ab_21d8_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}


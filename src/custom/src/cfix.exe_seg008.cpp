/* THIS IS GENERATED FILE */

        
#include "cfix.exe.h"

                

 bool sub_2f160(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_2f160:
    _begin:
cs=0x176a;eip=0x000000; 	J(CALL(sub_2f199,0));	// 103804                  call    sub_2F199 ;~ 176A:0000
cs=0x176a;eip=0x000003; 	J(RETF(0));	// 103805                  retf ;~ 176A:0003

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_2f160: 	goto sub_2f160;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_2f164(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_2f164:
    _begin:
cs=0x176a;eip=0x000004; 	J(CALL(sub_2f56b,0));	// 103815                  call    sub_2F56B ;~ 176A:0004
cs=0x176a;eip=0x000007; 	J(RETF(0));	// 103816                  retf ;~ 176A:0007

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_2f164: 	goto sub_2f164;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group34(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group34:
    _begin:
sub_2f199:
	// 103874 
cs=0x176a;eip=0x000039; 	X(PUSH(ax));	// 103875                  push    ax ;~ 176A:0039
cs=0x176a;eip=0x00003a; 	X(PUSH(bx));	// 103876                  push    bx ;~ 176A:003A
cs=0x176a;eip=0x00003b; 	X(PUSH(cx));	// 103877                  push    cx ;~ 176A:003B
cs=0x176a;eip=0x00003c; 	X(PUSH(dx));	// 103878                  push    dx ;~ 176A:003C
cs=0x176a;eip=0x00003d; 	X(PUSH(di));	// 103879                  push    di ;~ 176A:003D
cs=0x176a;eip=0x00003e; 	X(PUSH(si));	// 103880                  push    si ;~ 176A:003E
sub_2f19f:
	// 103887 
cs=0x176a;eip=0x00003f; 	X(PUSH(ds));	// 103888                  push    ds ;~ 176A:003F
cs=0x176a;eip=0x000040; 	X(PUSH(es));	// 103889                  push    es ;~ 176A:0040
cs=0x176a;eip=0x000041; 	X(PUSH(cs));	// 103890                  push    cs ;~ 176A:0041
cs=0x176a;eip=0x000042; 	X(PUSH(cs));	// 103891                  push    cs ;~ 176A:0042
cs=0x176a;eip=0x000043; 	X(POP(ds));	// 103892                  pop     ds ;~ 176A:0043
cs=0x176a;eip=0x000044; 	X(POP(es));	// 103894                  pop     es ;~ 176A:0044
cs=0x176a;eip=0x000045; 	J(CALL(sub_2f50c,0));	// 103896                  call    sub_2F50C ;~ 176A:0045
cs=0x176a;eip=0x000048; 	J(CALL(sub_2f544,0));	// 103897                  call    sub_2F544 ;~ 176A:0048
cs=0x176a;eip=0x00004b; 	J(CALL(sub_2f47a,0));	// 103898                  call    sub_2F47A ;~ 176A:004B
cs=0x176a;eip=0x00004e; 	X(DEC(*(db*)(&seg_2f16f)));	// 103899                  dec     byte ptr seg_2F16F ;~ 176A:004E
cs=0x176a;eip=0x000052; 	T(di = 0x49C;);	// 103900                  mov     di, 49Ch ;~ 176A:0052
cs=0x176a;eip=0x000055; 	J(CALL(sub_2f1fe,0));	// 103901                  call    sub_2F1FE ;~ 176A:0055
cs=0x176a;eip=0x000058; 	T(di = 0x4B1;);	// 103902                  mov     di, 4B1h ;~ 176A:0058
cs=0x176a;eip=0x00005b; 	J(CALL(sub_2f1fe,0));	// 103903                  call    sub_2F1FE ;~ 176A:005B
cs=0x176a;eip=0x00005e; 	T(di = 0x4C6;);	// 103904                  mov     di, 4C6h ;~ 176A:005E
cs=0x176a;eip=0x000061; 	J(CALL(sub_2f1fe,0));	// 103905                  call    sub_2F1FE ;~ 176A:0061
cs=0x176a;eip=0x000064; 	T(di = 0x4DB;);	// 103906                  mov     di, 4DBh ;~ 176A:0064
cs=0x176a;eip=0x000067; 	J(CALL(sub_2f1fe,0));	// 103907                  call    sub_2F1FE ;~ 176A:0067
cs=0x176a;eip=0x00006a; 	T(di = 0x4F0;);	// 103908                  mov     di, 4F0h ;~ 176A:006A
cs=0x176a;eip=0x00006d; 	J(CALL(sub_2f1fe,0));	// 103909                  call    sub_2F1FE ;~ 176A:006D
cs=0x176a;eip=0x000070; 	T(di = 0x505;);	// 103910                  mov     di, 505h ;~ 176A:0070
cs=0x176a;eip=0x000073; 	J(CALL(sub_2f1fe,0));	// 103911                  call    sub_2F1FE ;~ 176A:0073
cs=0x176a;eip=0x000076; 	T(di = 0x51A;);	// 103912                  mov     di, 51Ah ;~ 176A:0076
cs=0x176a;eip=0x000079; 	J(CALL(sub_2f1fe,0));	// 103913                  call    sub_2F1FE ;~ 176A:0079
cs=0x176a;eip=0x00007c; 	T(di = 0x52F;);	// 103914                  mov     di, 52Fh ;~ 176A:007C
cs=0x176a;eip=0x00007f; 	J(CALL(sub_2f1fe,0));	// 103915                  call    sub_2F1FE ;~ 176A:007F
cs=0x176a;eip=0x000082; 	T(di = 0x544;);	// 103916                  mov     di, 544h ;~ 176A:0082
cs=0x176a;eip=0x000085; 	J(CALL(sub_2f1fe,0));	// 103917                  call    sub_2F1FE ;~ 176A:0085
cs=0x176a;eip=0x000088; 	T(CMP(*(db*)(&seg_2f16f), 0));	// 103918                  cmp     byte ptr seg_2F16F, 0 ;~ 176A:0088
cs=0x176a;eip=0x00008d; 	J(JNZ(loc_2f1f5));	// 103919                  jnz     short loc_2F1F5 ;~ 176A:008D
cs=0x176a;eip=0x00008f; 	T(al = *(db*)(((db*)&word_2f16d)+1););	// 103920                  mov     al, byte ptr word_2F16D+1 ;~ 176A:008F
cs=0x176a;eip=0x000092; 	X(*(db*)(&seg_2f16f) = al;);	// 103921                  mov     byte ptr seg_2F16F, al ;~ 176A:0092
loc_2f1f5:
	// 6580 
cs=0x176a;eip=0x000095; 	X(POP(es));	// 103924                  pop     es ;~ 176A:0095
cs=0x176a;eip=0x000096; 	X(POP(ds));	// 103926                  pop     ds ;~ 176A:0096
cs=0x176a;eip=0x000097; 	X(POP(si));	// 103928                  pop     si ;~ 176A:0097
cs=0x176a;eip=0x000098; 	X(POP(di));	// 103929                  pop     di ;~ 176A:0098
cs=0x176a;eip=0x000099; 	X(POP(dx));	// 103930                  pop     dx ;~ 176A:0099
cs=0x176a;eip=0x00009a; 	X(POP(cx));	// 103931                  pop     cx ;~ 176A:009A
cs=0x176a;eip=0x00009b; 	X(POP(bx));	// 103932                  pop     bx ;~ 176A:009B
cs=0x176a;eip=0x00009c; 	X(POP(ax));	// 103933                  pop     ax ;~ 176A:009C
cs=0x176a;eip=0x00009d; 	J(RETN(0));	// 103934                  retn ;~ 176A:009D

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_2f1f5: 	goto loc_2f1f5;
        case m2c::ksub_2f199: 	goto sub_2f199;
        case m2c::ksub_2f19f: 	goto sub_2f19f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_2f1fe(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_2f1fe:
    _begin:
cs=0x176a;eip=0x00009e; 	T(CMP(*(raddr(ds,di+0x10)), 0));	// 103944                  cmp     byte ptr [di+10h], 0 ;~ 176A:009E
cs=0x176a;eip=0x0000a2; 	J(JZ(locret_2f220));	// 103945                  jz      short locret_2F220 ;~ 176A:00A2
cs=0x176a;eip=0x0000a4; 	T(MOV(bx, *(dw*)(raddr(ds,di+0x0C))));	// 103946                  mov     bx, [di+0Ch] ;~ 176A:00A4
cs=0x176a;eip=0x0000a7; 	T(CMP(*(raddr(ds,di+0x10)), 2));	// 103947                  cmp     byte ptr [di+10h], 2 ;~ 176A:00A7
cs=0x176a;eip=0x0000ab; 	J(JZ(loc_2f214));	// 103948                  jz      short loc_2F214 ;~ 176A:00AB
cs=0x176a;eip=0x0000ad; 	T(CMP(*(db*)(&seg_2f16f), 0));	// 103949                  cmp     byte ptr seg_2F16F, 0 ;~ 176A:00AD
cs=0x176a;eip=0x0000b2; 	J(JNZ(loc_2f21f));	// 103950                  jnz     short loc_2F21F ;~ 176A:00B2
loc_2f214:
	// 6581 
cs=0x176a;eip=0x0000b4; 	X(DEC(*(raddr(ds,di+1))));	// 103953                  dec     byte ptr [di+1] ;~ 176A:00B4
cs=0x176a;eip=0x0000b7; 	J(JZ(loc_2f221));	// 103954                  jz      short loc_2F221 ;~ 176A:00B7
cs=0x176a;eip=0x0000b9; 	J(CALL(sub_2f371,0));	// 103955                  call    sub_2F371 ;~ 176A:00B9
cs=0x176a;eip=0x0000bc; 	J(CALL(sub_2f3f1,0));	// 103956                  call    sub_2F3F1 ;~ 176A:00BC
loc_2f21f:
	// 6582 
cs=0x176a;eip=0x0000bf; 	T(NOP);	// 103959                  nop ;~ 176A:00BF
locret_2f220:
	// 6583 
cs=0x176a;eip=0x0000c0; 	J(RETN(0));	// 103962                  retn ;~ 176A:00C0
loc_2f221:
	// 6584 
cs=0x176a;eip=0x0000c1; 	T(MOV(al, *(raddr(ds,bx))));	// 103967                  mov     al, [bx] ;~ 176A:00C1
cs=0x176a;eip=0x0000c3; 	T(INC(bx));	// 103968                  inc     bx ;~ 176A:00C3
cs=0x176a;eip=0x0000c4; 	T(OR(al, al));	// 103969                  or      al, al ;~ 176A:00C4
cs=0x176a;eip=0x0000c6; 	J(JS(loc_2f245));	// 103970                  js      short loc_2F245 ;~ 176A:00C6
cs=0x176a;eip=0x0000c8; 	X(MOV(*(raddr(ds,di)), al));	// 103971                  mov     [di], al ;~ 176A:00C8
cs=0x176a;eip=0x0000ca; 	T(MOV(ax, *(dw*)(raddr(ds,di+8))));	// 103972                  mov     ax, [di+8] ;~ 176A:00CA
cs=0x176a;eip=0x0000cd; 	J(CALL(sub_2f5bf,0));	// 103973                  call    sub_2F5BF ;~ 176A:00CD
cs=0x176a;eip=0x0000d0; 	J(CALL(sub_2f37c,0));	// 103974                  call    sub_2F37C ;~ 176A:00D0
loc_2f233:
	// 6585 
cs=0x176a;eip=0x0000d3; 	X(MOV(*(dw*)(raddr(ds,di+0x0C)), bx));	// 103977                  mov     [di+0Ch], bx ;~ 176A:00D3
cs=0x176a;eip=0x0000d6; 	T(MOV(al, *(raddr(ds,di+0x11))));	// 103978                  mov     al, [di+11h] ;~ 176A:00D6
cs=0x176a;eip=0x0000d9; 	X(MOV(*(raddr(ds,di+1)), al));	// 103979                  mov     [di+1], al ;~ 176A:00D9
cs=0x176a;eip=0x0000dc; 	J(RETN(0));	// 103980                  retn ;~ 176A:00DC
ret_176a_dd:
	// 6586 
cs=0x176a;eip=0x0000dd; 	T(MOV(ax, *(dw*)(raddr(ds,di+8))));	// 103982                  mov     ax, [di+8] ;~ 176A:00DD
cs=0x176a;eip=0x0000e0; 	J(CALL(sub_2f5bf,0));	// 103983                  call    sub_2F5BF ;~ 176A:00E0
cs=0x176a;eip=0x0000e3; 	J(JMP(loc_2f233));	// 103984                  jmp     short loc_2F233 ;~ 176A:00E3
loc_2f245:
	// 6587 
cs=0x176a;eip=0x0000e5; 	T(CMP(al, 0x0E0));	// 103988                  cmp     al, 0E0h ;~ 176A:00E5
cs=0x176a;eip=0x0000e7; 	J(JNC(loc_2f259));	// 103989                  jnb     short loc_2F259 ;~ 176A:00E7
cs=0x176a;eip=0x0000e9; 	T(CMP(al, 0x0A0));	// 103990                  cmp     al, 0A0h ;~ 176A:00E9
cs=0x176a;eip=0x0000eb; 	J(JNC(loc_2f2ad));	// 103991                  jnb     short loc_2F2AD ;~ 176A:00EB
cs=0x176a;eip=0x0000ed; 	T(SHL(al, 1));	// 103992                  shl     al, 1 ;~ 176A:00ED
cs=0x176a;eip=0x0000ef; 	T(XOR(ah, ah));	// 103993                  xor     ah, ah ;~ 176A:00EF
cs=0x176a;eip=0x0000f1; 	T(si = ax;);	// 103994                  mov     si, ax ;~ 176A:00F1
cs=0x176a;eip=0x0000f3; 	T(ADD(si, 0x2AC));	// 103995                  add     si, 2ACh ;~ 176A:00F3
cs=0x176a;eip=0x0000f7; __disp=*(dw*)(raddr(ds,si));
	J(return __dispatch_call(__disp, _state););	// 103996                  jmp     word ptr [si] ;~ 176A:00F7
loc_2f259:
	// 6588 
cs=0x176a;eip=0x0000f9; 	T(SUB(al, 0x0DF));	// 104000                  sub     al, 0DFh ;~ 176A:00F9
cs=0x176a;eip=0x0000fb; 	X(MOV(*(raddr(ds,di+0x11)), al));	// 104001                  mov     [di+11h], al ;~ 176A:00FB
cs=0x176a;eip=0x0000fe; 	J(JMP(loc_2f221));	// 104002                  jmp     short loc_2F221 ;~ 176A:00FE
ret_176a_100:
	// 6589 
cs=0x176a;eip=0x000100; 	T(MOV(al, *(raddr(ds,bx))));	// 104004                  mov     al, [bx] ;~ 176A:0100
cs=0x176a;eip=0x000102; 	T(INC(bx));	// 104005                  inc     bx ;~ 176A:0102
cs=0x176a;eip=0x000103; 	X(MOV(*(raddr(ds,di+0x0E)), al));	// 104006                  mov     [di+0Eh], al ;~ 176A:0103
cs=0x176a;eip=0x000106; 	X(PUSH(bx));	// 104007                  push    bx ;~ 176A:0106
cs=0x176a;eip=0x000107; 	X(PUSH(si));	// 104008                  push    si ;~ 176A:0107
cs=0x176a;eip=0x000108; 	T(MOV(si, *(dw*)(raddr(ds,di+2))));	// 104009                  mov     si, [di+2] ;~ 176A:0108
cs=0x176a;eip=0x00010b; 	T(bl = al;);	// 104010                  mov     bl, al ;~ 176A:010B
cs=0x176a;eip=0x00010d; 	T(XOR(bh, bh));	// 104011                  xor     bh, bh ;~ 176A:010D
cs=0x176a;eip=0x00010f; 	T(AND(bl, 0x7F));	// 104012                  and     bl, 7Fh ;~ 176A:010F
cs=0x176a;eip=0x000112; 	T(MOV(ah, *(raddr(ds,bx+0x55B))));	// 104013                  mov     ah, [bx+55Bh] ;~ 176A:0112
cs=0x176a;eip=0x000116; 	T(MOV(al, *(raddr(ds,si+0x0C))));	// 104014                  mov     al, [si+0Ch] ;~ 176A:0116
cs=0x176a;eip=0x000119; 	T(SHL(al, 1));	// 104015                  shl     al, 1 ;~ 176A:0119
cs=0x176a;eip=0x00011b; 	T(SHL(al, 1));	// 104016                  shl     al, 1 ;~ 176A:011B
cs=0x176a;eip=0x00011d; 	T(AND(al, 0x0C0));	// 104017                  and     al, 0C0h ;~ 176A:011D
cs=0x176a;eip=0x00011f; 	T(OR(ah, al));	// 104018                  or      ah, al ;~ 176A:011F
cs=0x176a;eip=0x000121; 	T(MOV(al, *(raddr(ds,di+6))));	// 104019                  mov     al, [di+6] ;~ 176A:0121
cs=0x176a;eip=0x000124; 	T(ADD(al, 0x40));	// 104020                  add     al, 40h ; '@' ;~ 176A:0124
cs=0x176a;eip=0x000126; 	J(CALL(sub_2f5bf,0));	// 104021                  call    sub_2F5BF ;~ 176A:0126
cs=0x176a;eip=0x000129; 	T(MOV(bl, *(raddr(ds,di+0x0F))));	// 104022                  mov     bl, [di+0Fh] ;~ 176A:0129
cs=0x176a;eip=0x00012c; 	T(AND(bl, 0x7F));	// 104023                  and     bl, 7Fh ;~ 176A:012C
cs=0x176a;eip=0x00012f; 	T(XOR(bh, bh));	// 104024                  xor     bh, bh ;~ 176A:012F
cs=0x176a;eip=0x000131; 	T(MOV(ah, *(raddr(ds,bx+0x55B))));	// 104025                  mov     ah, [bx+55Bh] ;~ 176A:0131
cs=0x176a;eip=0x000135; 	T(MOV(al, *(raddr(ds,si+0x0C))));	// 104026                  mov     al, [si+0Ch] ;~ 176A:0135
cs=0x176a;eip=0x000138; 	T(ROR(al, 1));	// 104027                  ror     al, 1 ;~ 176A:0138
cs=0x176a;eip=0x00013a; 	T(ROR(al, 1));	// 104028                  ror     al, 1 ;~ 176A:013A
cs=0x176a;eip=0x00013c; 	T(AND(al, 0x0C0));	// 104029                  and     al, 0C0h ;~ 176A:013C
cs=0x176a;eip=0x00013e; 	T(OR(ah, al));	// 104030                  or      ah, al ;~ 176A:013E
cs=0x176a;eip=0x000140; 	T(MOV(al, *(raddr(ds,di+5))));	// 104031                  mov     al, [di+5] ;~ 176A:0140
cs=0x176a;eip=0x000143; 	T(ADD(al, 0x40));	// 104032                  add     al, 40h ; '@' ;~ 176A:0143
cs=0x176a;eip=0x000145; 	J(CALL(sub_2f5bf,0));	// 104033                  call    sub_2F5BF ;~ 176A:0145
cs=0x176a;eip=0x000148; 	X(POP(si));	// 104034                  pop     si ;~ 176A:0148
cs=0x176a;eip=0x000149; 	X(POP(bx));	// 104035                  pop     bx ;~ 176A:0149
cs=0x176a;eip=0x00014a; 	J(JMP(loc_2f221));	// 104036                  jmp     loc_2F221 ;~ 176A:014A
loc_2f2ad:
	// 6590 
cs=0x176a;eip=0x00014d; 	T(SUB(al, 0x0A0));	// 104040                  sub     al, 0A0h ;~ 176A:014D
cs=0x176a;eip=0x00014f; 	X(PUSH(bx));	// 104041                  push    bx ;~ 176A:014F
cs=0x176a;eip=0x000150; 	X(MOV(*(raddr(ds,di+4)), al));	// 104042                  mov     [di+4], al ;~ 176A:0150
cs=0x176a;eip=0x000153; 	T(XOR(ah, ah));	// 104043                  xor     ah, ah ;~ 176A:0153
cs=0x176a;eip=0x000155; 	T(SHL(al, 1));	// 104044                  shl     al, 1 ;~ 176A:0155
cs=0x176a;eip=0x000157; 	T(SHL(al, 1));	// 104045                  shl     al, 1 ;~ 176A:0157
cs=0x176a;eip=0x000159; 	T(SHL(ax, 1));	// 104046                  shl     ax, 1 ;~ 176A:0159
cs=0x176a;eip=0x00015b; 	T(SHL(ax, 1));	// 104047                  shl     ax, 1 ;~ 176A:015B
cs=0x176a;eip=0x00015d; 	T(si = 0x80C;);	// 104048                  mov     si, 80Ch ;~ 176A:015D
cs=0x176a;eip=0x000160; 	T(ADD(si, ax));	// 104049                  add     si, ax ;~ 176A:0160
cs=0x176a;eip=0x000162; 	X(MOV(*(dw*)(raddr(ds,di+2)), si));	// 104050                  mov     [di+2], si ;~ 176A:0162
cs=0x176a;eip=0x000165; 	T(MOV(dx, *(dw*)(raddr(ds,di+5))));	// 104051                  mov     dx, [di+5] ;~ 176A:0165
cs=0x176a;eip=0x000168; 	T(MOV(ah, *(raddr(ds,si))));	// 104052                  mov     ah, [si] ;~ 176A:0168
cs=0x176a;eip=0x00016a; 	T(al = dl;);	// 104053                  mov     al, dl ;~ 176A:016A
cs=0x176a;eip=0x00016c; 	T(ADD(al, 0x60));	// 104054                  add     al, 60h ; '`' ;~ 176A:016C
cs=0x176a;eip=0x00016e; 	J(CALL(sub_2f5bf,0));	// 104055                  call    sub_2F5BF ;~ 176A:016E
cs=0x176a;eip=0x000171; 	T(MOV(ah, *(raddr(ds,si+1))));	// 104056                  mov     ah, [si+1] ;~ 176A:0171
cs=0x176a;eip=0x000174; 	T(al = dh;);	// 104057                  mov     al, dh ;~ 176A:0174
cs=0x176a;eip=0x000176; 	T(ADD(al, 0x60));	// 104058                  add     al, 60h ; '`' ;~ 176A:0176
cs=0x176a;eip=0x000178; 	J(CALL(sub_2f5bf,0));	// 104059                  call    sub_2F5BF ;~ 176A:0178
cs=0x176a;eip=0x00017b; 	T(MOV(ah, *(raddr(ds,si+2))));	// 104060                  mov     ah, [si+2] ;~ 176A:017B
cs=0x176a;eip=0x00017e; 	T(al = dl;);	// 104061                  mov     al, dl ;~ 176A:017E
cs=0x176a;eip=0x000180; 	T(ADD(al, 0x80));	// 104062                  add     al, 80h ;~ 176A:0180
cs=0x176a;eip=0x000182; 	J(CALL(sub_2f5bf,0));	// 104063                  call    sub_2F5BF ;~ 176A:0182
cs=0x176a;eip=0x000185; 	T(MOV(ah, *(raddr(ds,si+3))));	// 104064                  mov     ah, [si+3] ;~ 176A:0185
cs=0x176a;eip=0x000188; 	T(al = dh;);	// 104065                  mov     al, dh ;~ 176A:0188
cs=0x176a;eip=0x00018a; 	T(ADD(al, 0x80));	// 104066                  add     al, 80h ;~ 176A:018A
cs=0x176a;eip=0x00018c; 	J(CALL(sub_2f5bf,0));	// 104067                  call    sub_2F5BF ;~ 176A:018C
cs=0x176a;eip=0x00018f; 	T(MOV(ah, *(raddr(ds,si+6))));	// 104068                  mov     ah, [si+6] ;~ 176A:018F
cs=0x176a;eip=0x000192; 	T(al = dl;);	// 104069                  mov     al, dl ;~ 176A:0192
cs=0x176a;eip=0x000194; 	T(ADD(al, 0x0E0));	// 104070                  add     al, 0E0h ;~ 176A:0194
cs=0x176a;eip=0x000196; 	J(CALL(sub_2f5bf,0));	// 104071                  call    sub_2F5BF ;~ 176A:0196
cs=0x176a;eip=0x000199; 	T(MOV(ah, *(raddr(ds,si+7))));	// 104072                  mov     ah, [si+7] ;~ 176A:0199
cs=0x176a;eip=0x00019c; 	T(al = dh;);	// 104073                  mov     al, dh ;~ 176A:019C
cs=0x176a;eip=0x00019e; 	T(ADD(al, 0x0E0));	// 104074                  add     al, 0E0h ;~ 176A:019E
cs=0x176a;eip=0x0001a0; 	J(CALL(sub_2f5bf,0));	// 104075                  call    sub_2F5BF ;~ 176A:01A0
cs=0x176a;eip=0x0001a3; 	T(MOV(ah, *(raddr(ds,si+9))));	// 104076                  mov     ah, [si+9] ;~ 176A:01A3
cs=0x176a;eip=0x0001a6; 	T(MOV(al, *(raddr(ds,di+7))));	// 104077                  mov     al, [di+7] ;~ 176A:01A6
cs=0x176a;eip=0x0001a9; 	T(ADD(al, 0x0C0));	// 104078                  add     al, 0C0h ;~ 176A:01A9
cs=0x176a;eip=0x0001ab; 	J(CALL(sub_2f5bf,0));	// 104079                  call    sub_2F5BF ;~ 176A:01AB
cs=0x176a;eip=0x0001ae; 	T(MOV(ah, *(raddr(ds,si+4))));	// 104080                  mov     ah, [si+4] ;~ 176A:01AE
cs=0x176a;eip=0x0001b1; 	T(al = dl;);	// 104081                  mov     al, dl ;~ 176A:01B1
cs=0x176a;eip=0x0001b3; 	T(ADD(al, 0x20));	// 104082                  add     al, 20h ; ' ' ;~ 176A:01B3
cs=0x176a;eip=0x0001b5; 	J(CALL(sub_2f5bf,0));	// 104083                  call    sub_2F5BF ;~ 176A:01B5
cs=0x176a;eip=0x0001b8; 	T(MOV(ah, *(raddr(ds,si+5))));	// 104084                  mov     ah, [si+5] ;~ 176A:01B8
cs=0x176a;eip=0x0001bb; 	T(al = dh;);	// 104085                  mov     al, dh ;~ 176A:01BB
cs=0x176a;eip=0x0001bd; 	T(ADD(al, 0x20));	// 104086                  add     al, 20h ; ' ' ;~ 176A:01BD
cs=0x176a;eip=0x0001bf; 	J(CALL(sub_2f5bf,0));	// 104087                  call    sub_2F5BF ;~ 176A:01BF
cs=0x176a;eip=0x0001c2; 	T(MOV(bl, *(raddr(ds,si+0x0A))));	// 104088                  mov     bl, [si+0Ah] ;~ 176A:01C2
cs=0x176a;eip=0x0001c5; 	X(MOV(*(raddr(ds,di+0x0E)), bl));	// 104089                  mov     [di+0Eh], bl ;~ 176A:01C5
cs=0x176a;eip=0x0001c8; 	T(XOR(bh, bh));	// 104090                  xor     bh, bh ;~ 176A:01C8
cs=0x176a;eip=0x0001ca; 	T(AND(bl, 0x7F));	// 104091                  and     bl, 7Fh ;~ 176A:01CA
cs=0x176a;eip=0x0001cd; 	T(MOV(ah, *(raddr(ds,bx+0x55B))));	// 104092                  mov     ah, [bx+55Bh] ;~ 176A:01CD
cs=0x176a;eip=0x0001d1; 	T(MOV(al, *(raddr(ds,si+0x0C))));	// 104093                  mov     al, [si+0Ch] ;~ 176A:01D1
cs=0x176a;eip=0x0001d4; 	T(SHL(al, 1));	// 104094                  shl     al, 1 ;~ 176A:01D4
cs=0x176a;eip=0x0001d6; 	T(SHL(al, 1));	// 104095                  shl     al, 1 ;~ 176A:01D6
cs=0x176a;eip=0x0001d8; 	T(AND(al, 0x0C0));	// 104096                  and     al, 0C0h ;~ 176A:01D8
cs=0x176a;eip=0x0001da; 	T(OR(ah, al));	// 104097                  or      ah, al ;~ 176A:01DA
cs=0x176a;eip=0x0001dc; 	T(al = dh;);	// 104098                  mov     al, dh ;~ 176A:01DC
cs=0x176a;eip=0x0001de; 	T(ADD(al, 0x40));	// 104099                  add     al, 40h ; '@' ;~ 176A:01DE
cs=0x176a;eip=0x0001e0; 	J(CALL(sub_2f5bf,0));	// 104100                  call    sub_2F5BF ;~ 176A:01E0
cs=0x176a;eip=0x0001e3; 	T(MOV(bl, *(raddr(ds,si+0x0B))));	// 104101                  mov     bl, [si+0Bh] ;~ 176A:01E3
cs=0x176a;eip=0x0001e6; 	X(MOV(*(raddr(ds,di+0x0F)), bl));	// 104102                  mov     [di+0Fh], bl ;~ 176A:01E6
cs=0x176a;eip=0x0001e9; 	T(AND(bl, 0x7F));	// 104103                  and     bl, 7Fh ;~ 176A:01E9
cs=0x176a;eip=0x0001ec; 	T(XOR(bh, bh));	// 104104                  xor     bh, bh ;~ 176A:01EC
cs=0x176a;eip=0x0001ee; 	X(MOV(*(raddr(ds,di+0x13)), bh));	// 104105                  mov     [di+13h], bh ;~ 176A:01EE
cs=0x176a;eip=0x0001f1; 	T(MOV(ah, *(raddr(ds,bx+0x55B))));	// 104106                  mov     ah, [bx+55Bh] ;~ 176A:01F1
cs=0x176a;eip=0x0001f5; 	T(MOV(al, *(raddr(ds,si+0x0C))));	// 104107                  mov     al, [si+0Ch] ;~ 176A:01F5
cs=0x176a;eip=0x0001f8; 	T(ROR(al, 1));	// 104108                  ror     al, 1 ;~ 176A:01F8
cs=0x176a;eip=0x0001fa; 	T(ROR(al, 1));	// 104109                  ror     al, 1 ;~ 176A:01FA
cs=0x176a;eip=0x0001fc; 	T(AND(al, 0x0C0));	// 104110                  and     al, 0C0h ;~ 176A:01FC
cs=0x176a;eip=0x0001fe; 	T(OR(ah, al));	// 104111                  or      ah, al ;~ 176A:01FE
cs=0x176a;eip=0x000200; 	T(al = dl;);	// 104112                  mov     al, dl ;~ 176A:0200
cs=0x176a;eip=0x000202; 	T(ADD(al, 0x40));	// 104113                  add     al, 40h ; '@' ;~ 176A:0202
cs=0x176a;eip=0x000204; 	J(CALL(sub_2f5bf,0));	// 104114                  call    sub_2F5BF ;~ 176A:0204
cs=0x176a;eip=0x000207; 	T(MOV(al, *(raddr(ds,si+8))));	// 104115                  mov     al, [si+8] ;~ 176A:0207
cs=0x176a;eip=0x00020a; 	X(MOV(*(raddr(ds,di+0x12)), al));	// 104116                  mov     [di+12h], al ;~ 176A:020A
cs=0x176a;eip=0x00020d; 	X(POP(bx));	// 104117                  pop     bx ;~ 176A:020D
cs=0x176a;eip=0x00020e; 	J(JMP(loc_2f221));	// 104118                  jmp     loc_2F221 ;~ 176A:020E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_2f214: 	goto loc_2f214;
        case m2c::kloc_2f21f: 	goto loc_2f21f;
        case m2c::kloc_2f221: 	goto loc_2f221;
        case m2c::kloc_2f233: 	goto loc_2f233;
        case m2c::kloc_2f245: 	goto loc_2f245;
        case m2c::kloc_2f259: 	goto loc_2f259;
        case m2c::kloc_2f2ad: 	goto loc_2f2ad;
        case m2c::klocret_2f220: 	goto locret_2f220;
        case m2c::kret_176a_100: 	goto ret_176a_100;
        case m2c::kret_176a_dd: 	goto ret_176a_dd;
        case m2c::ksub_2f1fe: 	goto sub_2f1fe;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group35(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group35:
    _begin:
sub_2f371:
	// 104125 
cs=0x176a;eip=0x000211; 	T(MOV(al, *(raddr(ds,di+0x13))));	// 104126                  mov     al, [di+13h] ;~ 176A:0211
cs=0x176a;eip=0x000214; 	T(OR(al, al));	// 104127                  or      al, al ;~ 176A:0214
cs=0x176a;eip=0x000216; 	J(JZ(locret_2f3d4));	// 104128                  jz      short locret_2F3D4 ;~ 176A:0216
cs=0x176a;eip=0x000218; 	T(ADD(al, *(raddr(ds,di))));	// 104129                  add     al, [di] ;~ 176A:0218
cs=0x176a;eip=0x00021a; 	X(MOV(*(raddr(ds,di)), al));	// 104130                  mov     [di], al ;~ 176A:021A
sub_2f37c:
	// 104137 
cs=0x176a;eip=0x00021c; 	X(PUSH(bx));	// 104138                  push    bx ;~ 176A:021C
cs=0x176a;eip=0x00021d; 	X(PUSH(si));	// 104139                  push    si ;~ 176A:021D
cs=0x176a;eip=0x00021e; 	T(MOV(al, *(raddr(ds,di))));	// 104140                  mov     al, [di] ;~ 176A:021E
cs=0x176a;eip=0x000220; 	T(ADD(al, *(raddr(ds,di+0x12))));	// 104141                  add     al, [di+12h] ;~ 176A:0220
cs=0x176a;eip=0x000223; 	T(XOR(ah, ah));	// 104142                  xor     ah, ah ;~ 176A:0223
cs=0x176a;eip=0x000225; 	T(si = ax;);	// 104143                  mov     si, ax ;~ 176A:0225
cs=0x176a;eip=0x000227; 	T(MOV(bl, *(raddr(ds,si+0x75B))));	// 104144                  mov     bl, [si+75Bh] ;~ 176A:0227
cs=0x176a;eip=0x00022b; 	T(MOV(al, *(raddr(ds,si+0x7BB))));	// 104145                  mov     al, [si+7BBh] ;~ 176A:022B
cs=0x176a;eip=0x00022f; 	T(SHL(al, 1));	// 104146                  shl     al, 1 ;~ 176A:022F
cs=0x176a;eip=0x000231; 	T(SHL(al, 1));	// 104147                  shl     al, 1 ;~ 176A:0231
cs=0x176a;eip=0x000233; 	T(SHL(al, 1));	// 104148                  shl     al, 1 ;~ 176A:0233
cs=0x176a;eip=0x000235; 	T(SHL(al, 1));	// 104149                  shl     al, 1 ;~ 176A:0235
cs=0x176a;eip=0x000237; 	T(SHL(ax, 1));	// 104150                  shl     ax, 1 ;~ 176A:0237
cs=0x176a;eip=0x000239; 	T(si = 0x5DB;);	// 104151                  mov     si, 5DBh ;~ 176A:0239
cs=0x176a;eip=0x00023c; 	T(ADD(si, ax));	// 104152                  add     si, ax ;~ 176A:023C
cs=0x176a;eip=0x00023e; 	T(LODSW);	// 104153                  lodsw ;~ 176A:023E
cs=0x176a;eip=0x00023f; 	T(DEC(bl));	// 104154                  dec     bl ;~ 176A:023F
cs=0x176a;eip=0x000241; 	T(OR(ax, ax));	// 104155                  or      ax, ax ;~ 176A:0241
cs=0x176a;eip=0x000243; 	J(JGE(loc_2f3a7));	// 104156                  jge     short loc_2F3A7 ;~ 176A:0243
cs=0x176a;eip=0x000245; 	T(INC(bl));	// 104157                  inc     bl ;~ 176A:0245
loc_2f3a7:
	// 6591 
cs=0x176a;eip=0x000247; 	T(OR(bl, bl));	// 104160                  or      bl, bl ;~ 176A:0247
cs=0x176a;eip=0x000249; 	J(JGE(loc_2f3af));	// 104161                  jge     short loc_2F3AF ;~ 176A:0249
cs=0x176a;eip=0x00024b; 	T(INC(bl));	// 104162                  inc     bl ;~ 176A:024B
cs=0x176a;eip=0x00024d; 	T(SAR(ax, 1));	// 104163                  sar     ax, 1 ;~ 176A:024D
loc_2f3af:
	// 6592 
cs=0x176a;eip=0x00024f; 	X(PUSH(ax));	// 104166                  push    ax ;~ 176A:024F
cs=0x176a;eip=0x000250; 	T(ah = al;);	// 104167                  mov     ah, al ;~ 176A:0250
cs=0x176a;eip=0x000252; 	T(MOV(al, *(raddr(ds,di+7))));	// 104168                  mov     al, [di+7] ;~ 176A:0252
cs=0x176a;eip=0x000255; 	T(ADD(al, 0x0A0));	// 104169                  add     al, 0A0h ;~ 176A:0255
cs=0x176a;eip=0x000257; 	J(CALL(sub_2f5bf,0));	// 104170                  call    sub_2F5BF ;~ 176A:0257
cs=0x176a;eip=0x00025a; 	X(POP(ax));	// 104171                  pop     ax ;~ 176A:025A
cs=0x176a;eip=0x00025b; 	T(AND(ah, 3));	// 104172                  and     ah, 3 ;~ 176A:025B
cs=0x176a;eip=0x00025e; 	T(SHL(bl, 1));	// 104173                  shl     bl, 1 ;~ 176A:025E
cs=0x176a;eip=0x000260; 	T(SHL(bl, 1));	// 104174                  shl     bl, 1 ;~ 176A:0260
cs=0x176a;eip=0x000262; 	T(OR(ah, bl));	// 104175                  or      ah, bl ;~ 176A:0262
cs=0x176a;eip=0x000264; 	T(MOV(al, *(raddr(ds,di+7))));	// 104176                  mov     al, [di+7] ;~ 176A:0264
cs=0x176a;eip=0x000267; 	T(ADD(al, 0x0B0));	// 104177                  add     al, 0B0h ;~ 176A:0267
cs=0x176a;eip=0x000269; 	X(MOV(*(dw*)(raddr(ds,di+8)), ax));	// 104178                  mov     [di+8], ax ;~ 176A:0269
cs=0x176a;eip=0x00026c; 	T(OR(ah, 0x20));	// 104179                  or      ah, 20h ;~ 176A:026C
cs=0x176a;eip=0x00026f; 	J(CALL(sub_2f5bf,0));	// 104180                  call    sub_2F5BF ;~ 176A:026F
cs=0x176a;eip=0x000272; 	X(POP(si));	// 104181                  pop     si ;~ 176A:0272
cs=0x176a;eip=0x000273; 	X(POP(bx));	// 104182                  pop     bx ;~ 176A:0273
locret_2f3d4:
	// 6593 
cs=0x176a;eip=0x000274; 	J(RETN(0));	// 104185                  retn ;~ 176A:0274

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_2f3a7: 	goto loc_2f3a7;
        case m2c::kloc_2f3af: 	goto loc_2f3af;
        case m2c::klocret_2f3d4: 	goto locret_2f3d4;
        case m2c::ksub_2f371: 	goto sub_2f371;
        case m2c::ksub_2f37c: 	goto sub_2f37c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_2f3d5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_2f3d5:
    _begin:
cs=0x176a;eip=0x000275; 	T(di = 0x49C;);	// 104194                  mov     di, 49Ch ;~ 176A:0275
cs=0x176a;eip=0x000278; 	T(cx = 9;);	// 104195                  mov     cx, 9 ;~ 176A:0278
loc_2f3db:
	// 6594 
cs=0x176a;eip=0x00027b; 	T(MOV(ax, *(dw*)(raddr(ds,di+8))));	// 104198                  mov     ax, [di+8] ;~ 176A:027B
cs=0x176a;eip=0x00027e; 	J(CALL(sub_2f5bf,0));	// 104199                  call    sub_2F5BF ;~ 176A:027E
cs=0x176a;eip=0x000281; 	X(MOV(*(raddr(ds,di+0x10)), ch));	// 104200                  mov     [di+10h], ch ;~ 176A:0281
cs=0x176a;eip=0x000284; 	X(MOV(*(raddr(ds,di+0x14)), ch));	// 104201                  mov     [di+14h], ch ;~ 176A:0284
cs=0x176a;eip=0x000287; 	T(ADD(di, 0x15));	// 104202                  add     di, 15h ;~ 176A:0287
cs=0x176a;eip=0x00028a; 	J(LOOP(loc_2f3db));	// 104203                  loop    loc_2F3DB ;~ 176A:028A
cs=0x176a;eip=0x00028c; 	X(word_2f168 = cx;);	// 104204                  mov     word_2F168, cx ;~ 176A:028C
cs=0x176a;eip=0x000290; 	J(RETN(0));	// 104205                  retn ;~ 176A:0290

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_2f3db: 	goto loc_2f3db;
        case m2c::ksub_2f3d5: 	goto sub_2f3d5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_2f3f1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_2f3f1:
    _begin:
cs=0x176a;eip=0x000291; 	T(CMP(*(raddr(ds,bx)), 0x82));	// 104213                  cmp     byte ptr [bx], 82h ;~ 176A:0291
cs=0x176a;eip=0x000294; 	J(JZ(locret_2f40b));	// 104214                  jz      short locret_2F40B ;~ 176A:0294
cs=0x176a;eip=0x000296; 	T(MOV(si, *(dw*)(raddr(ds,di+2))));	// 104215                  mov     si, [di+2] ;~ 176A:0296
cs=0x176a;eip=0x000299; 	T(MOV(al, *(raddr(ds,si+0x0E))));	// 104216                  mov     al, [si+0Eh] ;~ 176A:0299
cs=0x176a;eip=0x00029c; 	T(CMP(al, *(raddr(ds,di+1))));	// 104217                  cmp     al, [di+1] ;~ 176A:029C
cs=0x176a;eip=0x00029f; 	J(JNZ(locret_2f40b));	// 104218                  jnz     short locret_2F40B ;~ 176A:029F
cs=0x176a;eip=0x0002a1; 	T(MOV(ax, *(dw*)(raddr(ds,di+8))));	// 104219                  mov     ax, [di+8] ;~ 176A:02A1
cs=0x176a;eip=0x0002a4; 	J(CALL(sub_2f5bf,0));	// 104220                  call    sub_2F5BF ;~ 176A:02A4
cs=0x176a;eip=0x0002a7; 	X(MOV(*(raddr(ds,di+0x13)), 0));	// 104221                  mov     byte ptr [di+13h], 0 ;~ 176A:02A7
locret_2f40b:
	// 6595 
cs=0x176a;eip=0x0002ab; 	J(RETN(0));	// 104225                  retn ;~ 176A:02AB

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::klocret_2f40b: 	goto locret_2f40b;
        case m2c::ksub_2f3f1: 	goto sub_2f3f1;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg008_2f8_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg008_2f8_proc:
    _begin:
loc_2f458:
	// 6596 
cs=0x176a;eip=0x0002f8; 	T(MOV(ax, *(dw*)(raddr(ds,di+8))));	// 104309                  mov     ax, [di+8] ;~ 176A:02F8
cs=0x176a;eip=0x0002fb; 	J(CALL(sub_2f5bf,0));	// 104310                  call    sub_2F5BF ;~ 176A:02FB
cs=0x176a;eip=0x0002fe; 	X(MOV(*(raddr(ds,di+0x10)), 0));	// 104311                  mov     byte ptr [di+10h], 0 ;~ 176A:02FE
cs=0x176a;eip=0x000302; 	X(MOV(*(raddr(ds,di+0x14)), 0));	// 104312                  mov     byte ptr [di+14h], 0 ;~ 176A:0302
cs=0x176a;eip=0x000306; 	J(RETN(0));	// 104313                  retn ;~ 176A:0306

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_2f458: 	goto loc_2f458;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_2f467(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_2f467:
    _begin:
cs=0x176a;eip=0x000307; 	X(MOV(*(raddr(ds,di+0x13)), 1));	// 104320                  mov     byte ptr [di+13h], 1 ;~ 176A:0307
cs=0x176a;eip=0x00030b; 	J(return sub_2f1fe(m2c::kloc_2f221, _state););	// 104321                  jmp     loc_2F221 ;~ 176A:030B

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_2f467: 	goto sub_2f467;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_2f46e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_2f46e:
    _begin:
cs=0x176a;eip=0x00030e; 	X(MOV(*(raddr(ds,di+0x13)), 0x0FF));	// 104329                  mov     byte ptr [di+13h], 0FFh ;~ 176A:030E
cs=0x176a;eip=0x000312; 	J(return sub_2f1fe(m2c::kloc_2f221, _state););	// 104330                  jmp     loc_2F221 ;~ 176A:0312

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_2f46e: 	goto sub_2f46e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_2f475(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_2f475:
    _begin:
cs=0x176a;eip=0x000315; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 104338                  mov     bx, [bx] ;~ 176A:0315
cs=0x176a;eip=0x000317; 	J(return sub_2f1fe(m2c::kloc_2f221, _state););	// 104339                  jmp     loc_2F221 ;~ 176A:0317

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_2f475: 	goto sub_2f475;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_2f47a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_2f47a:
    _begin:
cs=0x176a;eip=0x00031a; 	T(CMP(*(db*)(((db*)&word_2f168)+1), 0));	// 104347                  cmp     byte ptr word_2F168+1, 0 ;~ 176A:031A
cs=0x176a;eip=0x00031f; 	J(JNZ(loc_2f487));	// 104348                  jnz     short loc_2F487 ;~ 176A:031F
cs=0x176a;eip=0x000321; 	T(al = *(db*)(&word_2f168););	// 104349                  mov     al, byte ptr word_2F168 ;~ 176A:0321
cs=0x176a;eip=0x000324; 	X(byte_2f174 = al;);	// 104350                  mov     byte_2F174, al ;~ 176A:0324
loc_2f487:
	// 6597 
cs=0x176a;eip=0x000327; 	T(CMP(byte_2f174, 0));	// 104353                  cmp     byte_2F174, 0 ;~ 176A:0327
cs=0x176a;eip=0x00032c; 	J(JZ(locret_2f50b));	// 104354                  jz      short locret_2F50B ;~ 176A:032C
cs=0x176a;eip=0x00032e; 	X(*(db*)(&word_2f168) = 0;);	// 104355                  mov     byte ptr word_2F168, 0 ;~ 176A:032E
cs=0x176a;eip=0x000333; 	X(byte_2f174 = 0;);	// 104356                  mov     byte_2F174, 0 ;~ 176A:0333
cs=0x176a;eip=0x000338; 	T(CMP(al, 4));	// 104357                  cmp     al, 4 ;~ 176A:0338
cs=0x176a;eip=0x00033a; 	J(JC(loc_2f49f));	// 104358                  jb      short loc_2F49F ;~ 176A:033A
cs=0x176a;eip=0x00033c; 	J(return sub_2f3d5(0, _state););	// 104359                  jmp     sub_2F3D5 ;~ 176A:033C
loc_2f49f:
	// 6598 
cs=0x176a;eip=0x00033f; 	X(PUSH(ax));	// 104363                  push    ax ;~ 176A:033F
cs=0x176a;eip=0x000340; 	J(CALL(sub_2f3d5,0));	// 104364                  call    sub_2F3D5 ;~ 176A:0340
cs=0x176a;eip=0x000343; 	X(POP(ax));	// 104365                  pop     ax ;~ 176A:0343
cs=0x176a;eip=0x000344; 	X(*(db*)(((db*)&word_2f168)+1) = al;);	// 104366                  mov     byte ptr word_2F168+1, al ;~ 176A:0344
cs=0x176a;eip=0x000347; 	T(SHL(al, 1));	// 104367                  shl     al, 1 ;~ 176A:0347
cs=0x176a;eip=0x000349; 	T(si = 0x0B9C;);	// 104368                  mov     si, 0B9Ch ;~ 176A:0349
cs=0x176a;eip=0x00034c; 	T(XOR(ah, ah));	// 104369                  xor     ah, ah ;~ 176A:034C
cs=0x176a;eip=0x00034e; 	T(ADD(si, ax));	// 104370                  add     si, ax ;~ 176A:034E
cs=0x176a;eip=0x000350; 	T(LODSW);	// 104371                  lodsw ;~ 176A:0350
cs=0x176a;eip=0x000351; 	T(si = ax;);	// 104372                  mov     si, ax ;~ 176A:0351
cs=0x176a;eip=0x000353; 	T(LODSB);	// 104373                  lodsb ;~ 176A:0353
cs=0x176a;eip=0x000354; 	X(*(db*)(((db*)&word_2f16d)+1) = al;);	// 104374                  mov     byte ptr word_2F16D+1, al ;~ 176A:0354
cs=0x176a;eip=0x000357; 	T(LODSB);	// 104375                  lodsb ;~ 176A:0357
cs=0x176a;eip=0x000358; 	T(cl = al;);	// 104376                  mov     cl, al ;~ 176A:0358
cs=0x176a;eip=0x00035a; 	T(XOR(ch, ch));	// 104377                  xor     ch, ch ;~ 176A:035A
cs=0x176a;eip=0x00035c; 	X(*(dw*)(&byte_2fcfc) = cx;);	// 104378                  mov     word ptr byte_2FCFC, cx ;~ 176A:035C
cs=0x176a;eip=0x000360; 	T(di = 0x49C;);	// 104379                  mov     di, 49Ch ;~ 176A:0360
loc_2f4c3:
	// 6599 
cs=0x176a;eip=0x000363; 	T(LODSW);	// 104382                  lodsw ;~ 176A:0363
cs=0x176a;eip=0x000364; 	T(bx = ax;);	// 104383                  mov     bx, ax ;~ 176A:0364
cs=0x176a;eip=0x000366; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 104384                  mov     ax, [bx] ;~ 176A:0366
cs=0x176a;eip=0x000368; 	T(INC(bx));	// 104385                  inc     bx ;~ 176A:0368
cs=0x176a;eip=0x000369; 	T(INC(bx));	// 104386                  inc     bx ;~ 176A:0369
cs=0x176a;eip=0x00036a; 	X(MOV(*(dw*)(raddr(ds,di+0x0A)), bx));	// 104387                  mov     [di+0Ah], bx ;~ 176A:036A
cs=0x176a;eip=0x00036d; 	X(MOV(*(dw*)(raddr(ds,di+0x0C)), ax));	// 104388                  mov     [di+0Ch], ax ;~ 176A:036D
cs=0x176a;eip=0x000370; 	X(MOV(*(raddr(ds,di+1)), 1));	// 104389                  mov     byte ptr [di+1], 1 ;~ 176A:0370
cs=0x176a;eip=0x000374; 	X(MOV(*(raddr(ds,di+0x10)), 1));	// 104390                  mov     byte ptr [di+10h], 1 ;~ 176A:0374
cs=0x176a;eip=0x000378; 	T(ADD(di, 0x15));	// 104391                  add     di, 15h ;~ 176A:0378
cs=0x176a;eip=0x00037b; 	J(LOOP(loc_2f4c3));	// 104392                  loop    loc_2F4C3 ;~ 176A:037B
cs=0x176a;eip=0x00037d; 	T(di = 0x49C;);	// 104393                  mov     di, 49Ch ;~ 176A:037D
cs=0x176a;eip=0x000380; 	T(cx = 9;);	// 104394                  mov     cx, 9 ;~ 176A:0380
loc_2f4e3:
	// 6600 
cs=0x176a;eip=0x000383; 	T(MOV(ax, *(dw*)(raddr(ds,di+8))));	// 104397                  mov     ax, [di+8] ;~ 176A:0383
cs=0x176a;eip=0x000386; 	J(CALL(sub_2f5bf,0));	// 104398                  call    sub_2F5BF ;~ 176A:0386
cs=0x176a;eip=0x000389; 	T(ADD(di, 0x15));	// 104399                  add     di, 15h ;~ 176A:0389
cs=0x176a;eip=0x00038c; 	J(LOOP(loc_2f4e3));	// 104400                  loop    loc_2F4E3 ;~ 176A:038C
cs=0x176a;eip=0x00038e; 	T(ax = 0x2001;);	// 104401                  mov     ax, 2001h ;~ 176A:038E
cs=0x176a;eip=0x000391; 	J(CALL(sub_2f5bf,0));	// 104402                  call    sub_2F5BF ;~ 176A:0391
cs=0x176a;eip=0x000394; 	T(ax = 0x0BD;);	// 104403                  mov     ax, 0BDh ;~ 176A:0394
cs=0x176a;eip=0x000397; 	J(CALL(sub_2f5bf,0));	// 104404                  call    sub_2F5BF ;~ 176A:0397
cs=0x176a;eip=0x00039a; 	T(ax = 8;);	// 104405                  mov     ax, 8 ;~ 176A:039A
cs=0x176a;eip=0x00039d; 	J(CALL(sub_2f5bf,0));	// 104406                  call    sub_2F5BF ;~ 176A:039D
cs=0x176a;eip=0x0003a0; 	T(ax = 0x2104;);	// 104407                  mov     ax, 2104h ;~ 176A:03A0
cs=0x176a;eip=0x0003a3; 	J(CALL(sub_2f5bf,0));	// 104408                  call    sub_2F5BF ;~ 176A:03A3
cs=0x176a;eip=0x0003a6; 	X(*(db*)(&seg_2f16f) = 1;);	// 104409                  mov     byte ptr seg_2F16F, 1 ;~ 176A:03A6
locret_2f50b:
	// 6601 
cs=0x176a;eip=0x0003ab; 	J(RETN(0));	// 104412                  retn ;~ 176A:03AB

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_2f487: 	goto loc_2f487;
        case m2c::kloc_2f49f: 	goto loc_2f49f;
        case m2c::kloc_2f4c3: 	goto loc_2f4c3;
        case m2c::kloc_2f4e3: 	goto loc_2f4e3;
        case m2c::klocret_2f50b: 	goto locret_2f50b;
        case m2c::ksub_2f47a: 	goto sub_2f47a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_2f50c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_2f50c:
    _begin:
cs=0x176a;eip=0x0003ac; 	T(bl = *(db*)(&word_2f16a););	// 104420                  mov     bl, byte ptr word_2F16A ;~ 176A:03AC
cs=0x176a;eip=0x0003b0; 	T(OR(bl, bl));	// 104421                  or      bl, bl ;~ 176A:03B0
cs=0x176a;eip=0x0003b2; 	J(JZ(locret_2f52a));	// 104422                  jz      short locret_2F52A ;~ 176A:03B2
cs=0x176a;eip=0x0003b4; 	T(CMP(bl, 0x46));	// 104423                  cmp     bl, 46h ; 'F' ;~ 176A:03B4
cs=0x176a;eip=0x0003b7; 	J(JNC(locret_2f52a));	// 104424                  jnb     short locret_2F52A ;~ 176A:03B7
cs=0x176a;eip=0x0003b9; 	T(di = 0x544;);	// 104425                  mov     di, 544h ;~ 176A:03B9
cs=0x176a;eip=0x0003bc; 	T(cx = 9;);	// 104426                  mov     cx, 9 ;~ 176A:03BC
loc_2f51f:
	// 6602 
cs=0x176a;eip=0x0003bf; 	T(CMP(*(raddr(ds,di+0x10)), 0));	// 104429                  cmp     byte ptr [di+10h], 0 ;~ 176A:03BF
cs=0x176a;eip=0x0003c3; 	J(JZ(loc_2f52b));	// 104430                  jz      short loc_2F52B ;~ 176A:03C3
cs=0x176a;eip=0x0003c5; 	T(SUB(di, 0x15));	// 104431                  sub     di, 15h ;~ 176A:03C5
cs=0x176a;eip=0x0003c8; 	J(LOOP(loc_2f51f));	// 104432                  loop    loc_2F51F ;~ 176A:03C8
locret_2f52a:
	// 6603 
cs=0x176a;eip=0x0003ca; 	J(RETN(0));	// 104436                  retn ;~ 176A:03CA
loc_2f52b:
	// 6604 
cs=0x176a;eip=0x0003cb; 	X(MOV(*(raddr(ds,di+0x10)), 2));	// 104440                  mov     byte ptr [di+10h], 2 ;~ 176A:03CB
cs=0x176a;eip=0x0003cf; 	X(MOV(*(raddr(ds,di+0x14)), bl));	// 104441                  mov     [di+14h], bl ;~ 176A:03CF
cs=0x176a;eip=0x0003d2; 	T(SHL(bl, 1));	// 104442                  shl     bl, 1 ;~ 176A:03D2
cs=0x176a;eip=0x0003d4; 	T(XOR(bh, bh));	// 104443                  xor     bh, bh ;~ 176A:03D4
cs=0x176a;eip=0x0003d6; 	X(*(db*)(&word_2f16a) = bh;);	// 104444                  mov     byte ptr word_2F16A, bh ;~ 176A:03D6
cs=0x176a;eip=0x0003da; 	X(MOV(*(raddr(ds,di+0x13)), bh));	// 104445                  mov     [di+13h], bh ;~ 176A:03DA
cs=0x176a;eip=0x0003dd; 	T(MOV(bx, *(dw*)(raddr(ds,bx+0x112F))));	// 104446                  mov     bx, [bx+112Fh] ;~ 176A:03DD
cs=0x176a;eip=0x0003e1; 	J(return sub_2f1fe(m2c::kloc_2f221, _state););	// 104447                  jmp     loc_2F221 ;~ 176A:03E1

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_2f51f: 	goto loc_2f51f;
        case m2c::kloc_2f52b: 	goto loc_2f52b;
        case m2c::klocret_2f52a: 	goto locret_2f52a;
        case m2c::ksub_2f50c: 	goto sub_2f50c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group36(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group36:
    _begin:
sub_2f544:
	// 104454 
cs=0x176a;eip=0x0003e4; 	T(si = 0x0C;);	// 104455                  mov     si, 0Ch ;~ 176A:03E4
cs=0x176a;eip=0x0003e7; 	J(CALL(sub_2f54d,0));	// 104456                  call    sub_2F54D ;~ 176A:03E7
cs=0x176a;eip=0x0003ea; 	T(si = 0x0D;);	// 104457                  mov     si, 0Dh ;~ 176A:03EA
sub_2f54d:
	// 104464 
cs=0x176a;eip=0x0003ed; 	T(MOV(al, *(raddr(ds,si))));	// 104468                  mov     al, [si] ;~ 176A:03ED
cs=0x176a;eip=0x0003ef; 	X(MOV(*(raddr(ds,si)), 0));	// 104469                  mov     byte ptr [si], 0 ;~ 176A:03EF
cs=0x176a;eip=0x0003f2; 	T(OR(al, al));	// 104470                  or      al, al ;~ 176A:03F2
cs=0x176a;eip=0x0003f4; 	J(JZ(locret_2f56a));	// 104471                  jz      short locret_2F56A ;~ 176A:03F4
cs=0x176a;eip=0x0003f6; 	T(di = 0x49C;);	// 104472                  mov     di, 49Ch ;~ 176A:03F6
cs=0x176a;eip=0x0003f9; 	T(cx = 9;);	// 104473                  mov     cx, 9 ;~ 176A:03F9
loc_2f55c:
	// 6605 
cs=0x176a;eip=0x0003fc; 	T(CMP(al, *(raddr(ds,di+0x14))));	// 104476                  cmp     al, [di+14h] ;~ 176A:03FC
cs=0x176a;eip=0x0003ff; 	J(JNZ(loc_2f564));	// 104477                  jnz     short loc_2F564 ;~ 176A:03FF
cs=0x176a;eip=0x000401; 	J(return seg008_2f8_proc(m2c::kloc_2f458, _state););	// 104478                  jmp     loc_2F458 ;~ 176A:0401
loc_2f564:
	// 6606 
cs=0x176a;eip=0x000404; 	T(ADD(di, 0x15));	// 104482                  add     di, 15h ;~ 176A:0404
cs=0x176a;eip=0x000407; 	J(LOOP(loc_2f55c));	// 104483                  loop    loc_2F55C ;~ 176A:0407
cs=0x176a;eip=0x000409; 	J(RETN(0));	// 104484                  retn ;~ 176A:0409
locret_2f56a:
	// 6607 
cs=0x176a;eip=0x00040a; 	J(RETN(0));	// 104488                  retn ;~ 176A:040A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_2f55c: 	goto loc_2f55c;
        case m2c::kloc_2f564: 	goto loc_2f564;
        case m2c::klocret_2f56a: 	goto locret_2f56a;
        case m2c::ksub_2f544: 	goto sub_2f544;
        case m2c::ksub_2f54d: 	goto sub_2f54d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_2f56b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_2f56b:
    _begin:
cs=0x176a;eip=0x00040b; 	X(PUSH(bx));	// 104497                  push    bx ;~ 176A:040B
cs=0x176a;eip=0x00040c; 	X(PUSH(cx));	// 104498                  push    cx ;~ 176A:040C
cs=0x176a;eip=0x00040d; 	X(PUSH(dx));	// 104499                  push    dx ;~ 176A:040D
cs=0x176a;eip=0x00040e; 	X(PUSH(ds));	// 104500                  push    ds ;~ 176A:040E
cs=0x176a;eip=0x00040f; 	X(PUSH(cs));	// 104501                  push    cs ;~ 176A:040F
cs=0x176a;eip=0x000410; 	X(POP(ds));	// 104502                  pop     ds ;~ 176A:0410
cs=0x176a;eip=0x000411; 	T(dx = *(dw*)(((db*)&seg_2f16f)+1););	// 104504                  mov     dx, seg_2F16F+1 ;~ 176A:0411
cs=0x176a;eip=0x000415; 	T(ax = 0x6004;);	// 104505                  mov     ax, 6004h ;~ 176A:0415
cs=0x176a;eip=0x000418; 	J(CALL(sub_2f5bf,0));	// 104506                  call    sub_2F5BF ;~ 176A:0418
cs=0x176a;eip=0x00041b; 	T(ax = 0x8004;);	// 104507                  mov     ax, 8004h ;~ 176A:041B
cs=0x176a;eip=0x00041e; 	J(CALL(sub_2f5bf,0));	// 104508                  call    sub_2F5BF ;~ 176A:041E
cs=0x176a;eip=0x000421; 	S(IN(al, dx));	// 104509                  in      al, dx ;~ 176A:0421
cs=0x176a;eip=0x000422; 	X(PUSH(ax));	// 104510                  push    ax ;~ 176A:0422
cs=0x176a;eip=0x000423; 	T(ax = 0x0FF02;);	// 104511                  mov     ax, 0FF02h ;~ 176A:0423
cs=0x176a;eip=0x000426; 	J(CALL(sub_2f5bf,0));	// 104512                  call    sub_2F5BF ;~ 176A:0426
cs=0x176a;eip=0x000429; 	T(ax = 0x2104;);	// 104513                  mov     ax, 2104h ;~ 176A:0429
cs=0x176a;eip=0x00042c; 	J(CALL(sub_2f5bf,0));	// 104514                  call    sub_2F5BF ;~ 176A:042C
cs=0x176a;eip=0x00042f; 	T(cx = 0x12C;);	// 104515                  mov     cx, 12Ch ;~ 176A:042F
loc_2f592:
	// 6608 
cs=0x176a;eip=0x000432; 	J(LOOP(loc_2f592));	// 104518                  loop    loc_2F592 ;~ 176A:0432
cs=0x176a;eip=0x000434; 	S(IN(al, dx));	// 104519                  in      al, dx ;~ 176A:0434
cs=0x176a;eip=0x000435; 	X(PUSH(ax));	// 104520                  push    ax ;~ 176A:0435
cs=0x176a;eip=0x000436; 	T(ax = 0x6004;);	// 104521                  mov     ax, 6004h ;~ 176A:0436
cs=0x176a;eip=0x000439; 	J(CALL(sub_2f5bf,0));	// 104522                  call    sub_2F5BF ;~ 176A:0439
cs=0x176a;eip=0x00043c; 	T(ax = 0x8004;);	// 104523                  mov     ax, 8004h ;~ 176A:043C
cs=0x176a;eip=0x00043f; 	J(CALL(sub_2f5bf,0));	// 104524                  call    sub_2F5BF ;~ 176A:043F
cs=0x176a;eip=0x000442; 	X(POP(ax));	// 104525                  pop     ax ;~ 176A:0442
cs=0x176a;eip=0x000443; 	X(POP(bx));	// 104526                  pop     bx ;~ 176A:0443
cs=0x176a;eip=0x000444; 	T(AND(al, 0x0E0));	// 104527                  and     al, 0E0h ;~ 176A:0444
cs=0x176a;eip=0x000446; 	T(AND(bl, 0x0E0));	// 104528                  and     bl, 0E0h ;~ 176A:0446
cs=0x176a;eip=0x000449; 	T(AND(bl, bl));	// 104529                  and     bl, bl ;~ 176A:0449
cs=0x176a;eip=0x00044b; 	J(JNZ(loc_2f5b8));	// 104530                  jnz     short loc_2F5B8 ;~ 176A:044B
cs=0x176a;eip=0x00044d; 	T(CMP(al, 0x0C0));	// 104531                  cmp     al, 0C0h ;~ 176A:044D
cs=0x176a;eip=0x00044f; 	J(JNZ(loc_2f5b8));	// 104532                  jnz     short loc_2F5B8 ;~ 176A:044F
cs=0x176a;eip=0x000451; 	T(al = 1;);	// 104533                  mov     al, 1 ;~ 176A:0451
cs=0x176a;eip=0x000453; 	X(POP(ds));	// 104534                  pop     ds ;~ 176A:0453
cs=0x176a;eip=0x000454; 	X(POP(dx));	// 104536                  pop     dx ;~ 176A:0454
cs=0x176a;eip=0x000455; 	X(POP(cx));	// 104537                  pop     cx ;~ 176A:0455
cs=0x176a;eip=0x000456; 	X(POP(bx));	// 104538                  pop     bx ;~ 176A:0456
cs=0x176a;eip=0x000457; 	J(RETN(0));	// 104539                  retn ;~ 176A:0457
loc_2f5b8:
	// 6609 
cs=0x176a;eip=0x000458; 	T(XOR(al, al));	// 104544                  xor     al, al ;~ 176A:0458
cs=0x176a;eip=0x00045a; 	X(POP(ds));	// 104545                  pop     ds ;~ 176A:045A
cs=0x176a;eip=0x00045b; 	X(POP(dx));	// 104547                  pop     dx ;~ 176A:045B
cs=0x176a;eip=0x00045c; 	X(POP(cx));	// 104548                  pop     cx ;~ 176A:045C
cs=0x176a;eip=0x00045d; 	X(POP(bx));	// 104549                  pop     bx ;~ 176A:045D
cs=0x176a;eip=0x00045e; 	J(RETN(0));	// 104550                  retn ;~ 176A:045E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_2f592: 	goto loc_2f592;
        case m2c::kloc_2f5b8: 	goto loc_2f5b8;
        case m2c::ksub_2f56b: 	goto sub_2f56b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_2f5bf(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_2f5bf:
    _begin:
cs=0x176a;eip=0x00045f; 	X(PUSH(dx));	// 104560                  push    dx ;~ 176A:045F
cs=0x176a;eip=0x000460; 	T(dx = *(dw*)(((db*)&seg_2f16f)+1););	// 104561                  mov     dx, seg_2F16F+1 ;~ 176A:0460
cs=0x176a;eip=0x000464; 	S(OUT(dx, al));	// 104562                  out     dx, al ;~ 176A:0464
cs=0x176a;eip=0x000465; 	S(IN(al, dx));	// 104563                  in      al, dx ;~ 176A:0465
cs=0x176a;eip=0x000466; 	S(IN(al, dx));	// 104564                  in      al, dx ;~ 176A:0466
cs=0x176a;eip=0x000467; 	S(IN(al, dx));	// 104565                  in      al, dx ;~ 176A:0467
cs=0x176a;eip=0x000468; 	S(IN(al, dx));	// 104566                  in      al, dx ;~ 176A:0468
cs=0x176a;eip=0x000469; 	S(IN(al, dx));	// 104567                  in      al, dx ;~ 176A:0469
cs=0x176a;eip=0x00046a; 	S(IN(al, dx));	// 104568                  in      al, dx ;~ 176A:046A
cs=0x176a;eip=0x00046b; 	T(al = ah;);	// 104569                  mov     al, ah ;~ 176A:046B
cs=0x176a;eip=0x00046d; 	T(INC(dx));	// 104570                  inc     dx ;~ 176A:046D
cs=0x176a;eip=0x00046e; 	S(OUT(dx, al));	// 104571                  out     dx, al ;~ 176A:046E
cs=0x176a;eip=0x00046f; 	S(IN(al, dx));	// 104572                  in      al, dx ;~ 176A:046F
cs=0x176a;eip=0x000470; 	S(IN(al, dx));	// 104573                  in      al, dx ;~ 176A:0470
cs=0x176a;eip=0x000471; 	S(IN(al, dx));	// 104574                  in      al, dx ;~ 176A:0471
cs=0x176a;eip=0x000472; 	S(IN(al, dx));	// 104575                  in      al, dx ;~ 176A:0472
cs=0x176a;eip=0x000473; 	S(IN(al, dx));	// 104576                  in      al, dx ;~ 176A:0473
cs=0x176a;eip=0x000474; 	S(IN(al, dx));	// 104577                  in      al, dx ;~ 176A:0474
cs=0x176a;eip=0x000475; 	S(IN(al, dx));	// 104578                  in      al, dx ;~ 176A:0475
cs=0x176a;eip=0x000476; 	S(IN(al, dx));	// 104579                  in      al, dx ;~ 176A:0476
cs=0x176a;eip=0x000477; 	S(IN(al, dx));	// 104580                  in      al, dx ;~ 176A:0477
cs=0x176a;eip=0x000478; 	S(IN(al, dx));	// 104581                  in      al, dx ;~ 176A:0478
cs=0x176a;eip=0x000479; 	S(IN(al, dx));	// 104582                  in      al, dx ;~ 176A:0479
cs=0x176a;eip=0x00047a; 	S(IN(al, dx));	// 104583                  in      al, dx ;~ 176A:047A
cs=0x176a;eip=0x00047b; 	S(IN(al, dx));	// 104584                  in      al, dx ;~ 176A:047B
cs=0x176a;eip=0x00047c; 	S(IN(al, dx));	// 104585                  in      al, dx ;~ 176A:047C
cs=0x176a;eip=0x00047d; 	S(IN(al, dx));	// 104586                  in      al, dx ;~ 176A:047D
cs=0x176a;eip=0x00047e; 	S(IN(al, dx));	// 104587                  in      al, dx ;~ 176A:047E
cs=0x176a;eip=0x00047f; 	S(IN(al, dx));	// 104588                  in      al, dx ;~ 176A:047F
cs=0x176a;eip=0x000480; 	S(IN(al, dx));	// 104589                  in      al, dx ;~ 176A:0480
cs=0x176a;eip=0x000481; 	S(IN(al, dx));	// 104590                  in      al, dx ;~ 176A:0481
cs=0x176a;eip=0x000482; 	S(IN(al, dx));	// 104591                  in      al, dx ;~ 176A:0482
cs=0x176a;eip=0x000483; 	S(IN(al, dx));	// 104592                  in      al, dx ;~ 176A:0483
cs=0x176a;eip=0x000484; 	S(IN(al, dx));	// 104593                  in      al, dx ;~ 176A:0484
cs=0x176a;eip=0x000485; 	S(IN(al, dx));	// 104594                  in      al, dx ;~ 176A:0485
cs=0x176a;eip=0x000486; 	S(IN(al, dx));	// 104595                  in      al, dx ;~ 176A:0486
cs=0x176a;eip=0x000487; 	S(IN(al, dx));	// 104596                  in      al, dx ;~ 176A:0487
cs=0x176a;eip=0x000488; 	S(IN(al, dx));	// 104597                  in      al, dx ;~ 176A:0488
cs=0x176a;eip=0x000489; 	S(IN(al, dx));	// 104598                  in      al, dx ;~ 176A:0489
cs=0x176a;eip=0x00048a; 	S(IN(al, dx));	// 104599                  in      al, dx ;~ 176A:048A
cs=0x176a;eip=0x00048b; 	S(IN(al, dx));	// 104600                  in      al, dx ;~ 176A:048B
cs=0x176a;eip=0x00048c; 	S(IN(al, dx));	// 104601                  in      al, dx ;~ 176A:048C
cs=0x176a;eip=0x00048d; 	S(IN(al, dx));	// 104602                  in      al, dx ;~ 176A:048D
cs=0x176a;eip=0x00048e; 	S(IN(al, dx));	// 104603                  in      al, dx ;~ 176A:048E
cs=0x176a;eip=0x00048f; 	S(IN(al, dx));	// 104604                  in      al, dx ;~ 176A:048F
cs=0x176a;eip=0x000490; 	S(IN(al, dx));	// 104605                  in      al, dx ;~ 176A:0490
cs=0x176a;eip=0x000491; 	S(IN(al, dx));	// 104606                  in      al, dx ;~ 176A:0491
cs=0x176a;eip=0x000492; 	X(POP(dx));	// 104607                  pop     dx ;~ 176A:0492
cs=0x176a;eip=0x000493; 	J(RETN(0));	// 104608                  retn ;~ 176A:0493

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_2f5bf: 	goto sub_2f5bf;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg008_494_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg008_494_proc:
    _begin:
cs=0x176a;eip=0x000494; 	X(PUSH(dx));	// 104612                  push    dx ;~ 176A:0494
cs=0x176a;eip=0x000495; 	T(dx = *(dw*)(((db*)&seg_2f16f)+1););	// 104613                  mov     dx, seg_2F16F+1 ;~ 176A:0495
cs=0x176a;eip=0x000499; 	S(IN(al, dx));	// 104614                  in      al, dx ;~ 176A:0499
cs=0x176a;eip=0x00049a; 	X(POP(dx));	// 104615                  pop     dx ;~ 176A:049A
cs=0x176a;eip=0x00049b; 	J(RETN(0));	// 104616                  retn ;~ 176A:049B
ret_176a_69b:
	// 6610 
cs=0x176a;eip=0x00069b; 	J(IRET);	// 105103                  iret ;~ 176A:069B
ret_176a_8bc:
	// 6611 
cs=0x176a;eip=0x0008bc; __disp=unk_38308;
	J(return __dispatch_call(__disp, _state););	// 105649                  jmp     near ptr unk_38308 ;~ 176A:08BC
ret_176a_a0c:
	// 6612 
cs=0x176a;eip=0x000a0c; 	J(RETN(0));	// 105954                  retn ;~ 176A:0A0C
ret_176a_adc:
	// 6613 
cs=0x176a;eip=0x000adc; 	J(RETN(0));	// 106164                  retn ;~ 176A:0ADC
ret_176a_12bd:
	// 6614 
cs=0x176a;eip=0x0012bd; 	T(SHL(bl, 0x18));	// 108162                  shl     bl, 18h ;~ 176A:12BD
cs=0x176a;eip=0x0012c0; __disp=unk_38c3e;
	J(return __dispatch_call(__disp, _state););	// 108163                  jmp     near ptr unk_38C3E ;~ 176A:12C0
ret_176a_1442:
	// 6615 
cs=0x176a;eip=0x001442; 	T(LODSW);	// 108544                  lodsw ;~ 176A:1442
cs=0x176a;eip=0x001443; __disp=unk_38aa6;
	J(return __dispatch_call(__disp, _state););	// 108545                  jmp     near ptr unk_38AA6 ;~ 176A:1443

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kret_176a_12bd: 	goto ret_176a_12bd;
        case m2c::kret_176a_1442: 	goto ret_176a_1442;
        case m2c::kret_176a_69b: 	goto ret_176a_69b;
        case m2c::kret_176a_8bc: 	goto ret_176a_8bc;
        case m2c::kret_176a_a0c: 	goto ret_176a_a0c;
        case m2c::kret_176a_adc: 	goto ret_176a_adc;
        case m2c::kseg008_494_proc: 	goto seg008_494_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}


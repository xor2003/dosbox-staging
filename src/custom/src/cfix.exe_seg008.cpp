/* THIS IS GENERATED FILE */

        
#include "cfix.exe.h"

                

 bool sub_2f160(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_2f160:
    _begin:
cs=0x20b8;eip=0x000000; 	J(CALL(sub_2f199,0));	// 103745                  call    sub_2F199 ;~ 20B8:0000
cs=0x20b8;eip=0x000003; 	J(RETF(0));	// 103746                  retf ;~ 20B8:0003

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
cs=0x20b8;eip=0x000004; 	J(CALL(sub_2f56b,0));	// 103756                  call    sub_2F56B ;~ 20B8:0004
cs=0x20b8;eip=0x000007; 	J(RETF(0));	// 103757                  retf ;~ 20B8:0007

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



 bool _group38(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group38:
    _begin:
sub_2f199:
	// 103815 
cs=0x20b8;eip=0x000039; 	X(PUSH(ax));	// 103816                  push    ax ;~ 20B8:0039
cs=0x20b8;eip=0x00003a; 	X(PUSH(bx));	// 103817                  push    bx ;~ 20B8:003A
cs=0x20b8;eip=0x00003b; 	X(PUSH(cx));	// 103818                  push    cx ;~ 20B8:003B
cs=0x20b8;eip=0x00003c; 	X(PUSH(dx));	// 103819                  push    dx ;~ 20B8:003C
cs=0x20b8;eip=0x00003d; 	X(PUSH(di));	// 103820                  push    di ;~ 20B8:003D
cs=0x20b8;eip=0x00003e; 	X(PUSH(si));	// 103821                  push    si ;~ 20B8:003E
sub_2f19f:
	// 103828 
cs=0x20b8;eip=0x00003f; 	X(PUSH(ds));	// 103829                  push    ds ;~ 20B8:003F
cs=0x20b8;eip=0x000040; 	X(PUSH(es));	// 103830                  push    es ;~ 20B8:0040
cs=0x20b8;eip=0x000041; 	X(PUSH(cs));	// 103831                  push    cs ;~ 20B8:0041
cs=0x20b8;eip=0x000042; 	X(PUSH(cs));	// 103832                  push    cs ;~ 20B8:0042
cs=0x20b8;eip=0x000043; 	X(POP(ds));	// 103833                  pop     ds ;~ 20B8:0043
cs=0x20b8;eip=0x000044; 	X(POP(es));	// 103835                  pop     es ;~ 20B8:0044
cs=0x20b8;eip=0x000045; 	J(CALL(sub_2f50c,0));	// 103837                  call    sub_2F50C ;~ 20B8:0045
cs=0x20b8;eip=0x000048; 	J(CALL(sub_2f544,0));	// 103838                  call    sub_2F544 ;~ 20B8:0048
cs=0x20b8;eip=0x00004b; 	J(CALL(sub_2f47a,0));	// 103839                  call    sub_2F47A ;~ 20B8:004B
cs=0x20b8;eip=0x00004e; 	X(DEC(*(db*)(&seg_2f16f)));	// 103840                  dec     byte ptr seg_2F16F ;~ 20B8:004E
cs=0x20b8;eip=0x000052; 	T(di = 0x49C;);	// 103841                  mov     di, 49Ch ;~ 20B8:0052
cs=0x20b8;eip=0x000055; 	J(CALL(sub_2f1fe,0));	// 103842                  call    sub_2F1FE ;~ 20B8:0055
cs=0x20b8;eip=0x000058; 	T(di = 0x4B1;);	// 103843                  mov     di, 4B1h ;~ 20B8:0058
cs=0x20b8;eip=0x00005b; 	J(CALL(sub_2f1fe,0));	// 103844                  call    sub_2F1FE ;~ 20B8:005B
cs=0x20b8;eip=0x00005e; 	T(di = 0x4C6;);	// 103845                  mov     di, 4C6h ;~ 20B8:005E
cs=0x20b8;eip=0x000061; 	J(CALL(sub_2f1fe,0));	// 103846                  call    sub_2F1FE ;~ 20B8:0061
cs=0x20b8;eip=0x000064; 	T(di = 0x4DB;);	// 103847                  mov     di, 4DBh ;~ 20B8:0064
cs=0x20b8;eip=0x000067; 	J(CALL(sub_2f1fe,0));	// 103848                  call    sub_2F1FE ;~ 20B8:0067
cs=0x20b8;eip=0x00006a; 	T(di = 0x4F0;);	// 103849                  mov     di, 4F0h ;~ 20B8:006A
cs=0x20b8;eip=0x00006d; 	J(CALL(sub_2f1fe,0));	// 103850                  call    sub_2F1FE ;~ 20B8:006D
cs=0x20b8;eip=0x000070; 	T(di = 0x505;);	// 103851                  mov     di, 505h ;~ 20B8:0070
cs=0x20b8;eip=0x000073; 	J(CALL(sub_2f1fe,0));	// 103852                  call    sub_2F1FE ;~ 20B8:0073
cs=0x20b8;eip=0x000076; 	T(di = 0x51A;);	// 103853                  mov     di, 51Ah ;~ 20B8:0076
cs=0x20b8;eip=0x000079; 	J(CALL(sub_2f1fe,0));	// 103854                  call    sub_2F1FE ;~ 20B8:0079
cs=0x20b8;eip=0x00007c; 	T(di = 0x52F;);	// 103855                  mov     di, 52Fh ;~ 20B8:007C
cs=0x20b8;eip=0x00007f; 	J(CALL(sub_2f1fe,0));	// 103856                  call    sub_2F1FE ;~ 20B8:007F
cs=0x20b8;eip=0x000082; 	T(di = 0x544;);	// 103857                  mov     di, 544h ;~ 20B8:0082
cs=0x20b8;eip=0x000085; 	J(CALL(sub_2f1fe,0));	// 103858                  call    sub_2F1FE ;~ 20B8:0085
cs=0x20b8;eip=0x000088; 	T(CMP(*(db*)(&seg_2f16f), 0));	// 103859                  cmp     byte ptr seg_2F16F, 0 ;~ 20B8:0088
cs=0x20b8;eip=0x00008d; 	J(JNZ(loc_2f1f5));	// 103860                  jnz     short loc_2F1F5 ;~ 20B8:008D
cs=0x20b8;eip=0x00008f; 	T(al = *(db*)(((db*)&word_2f16d)+1););	// 103861                  mov     al, byte ptr word_2F16D+1 ;~ 20B8:008F
cs=0x20b8;eip=0x000092; 	X(*(db*)(&seg_2f16f) = al;);	// 103862                  mov     byte ptr seg_2F16F, al ;~ 20B8:0092
loc_2f1f5:
	// 6594 
cs=0x20b8;eip=0x000095; 	X(POP(es));	// 103865                  pop     es ;~ 20B8:0095
cs=0x20b8;eip=0x000096; 	X(POP(ds));	// 103867                  pop     ds ;~ 20B8:0096
cs=0x20b8;eip=0x000097; 	X(POP(si));	// 103869                  pop     si ;~ 20B8:0097
cs=0x20b8;eip=0x000098; 	X(POP(di));	// 103870                  pop     di ;~ 20B8:0098
cs=0x20b8;eip=0x000099; 	X(POP(dx));	// 103871                  pop     dx ;~ 20B8:0099
cs=0x20b8;eip=0x00009a; 	X(POP(cx));	// 103872                  pop     cx ;~ 20B8:009A
cs=0x20b8;eip=0x00009b; 	X(POP(bx));	// 103873                  pop     bx ;~ 20B8:009B
cs=0x20b8;eip=0x00009c; 	X(POP(ax));	// 103874                  pop     ax ;~ 20B8:009C
cs=0x20b8;eip=0x00009d; 	J(RETN(0));	// 103875                  retn ;~ 20B8:009D

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
cs=0x20b8;eip=0x00009e; 	T(CMP(*(raddr(ds,di+0x10)), 0));	// 103885                  cmp     byte ptr [di+10h], 0 ;~ 20B8:009E
cs=0x20b8;eip=0x0000a2; 	J(JZ(locret_2f220));	// 103886                  jz      short locret_2F220 ;~ 20B8:00A2
cs=0x20b8;eip=0x0000a4; 	T(MOV(bx, *(dw*)(raddr(ds,di+0x0C))));	// 103887                  mov     bx, [di+0Ch] ;~ 20B8:00A4
cs=0x20b8;eip=0x0000a7; 	T(CMP(*(raddr(ds,di+0x10)), 2));	// 103888                  cmp     byte ptr [di+10h], 2 ;~ 20B8:00A7
cs=0x20b8;eip=0x0000ab; 	J(JZ(loc_2f214));	// 103889                  jz      short loc_2F214 ;~ 20B8:00AB
cs=0x20b8;eip=0x0000ad; 	T(CMP(*(db*)(&seg_2f16f), 0));	// 103890                  cmp     byte ptr seg_2F16F, 0 ;~ 20B8:00AD
cs=0x20b8;eip=0x0000b2; 	J(JNZ(loc_2f21f));	// 103891                  jnz     short loc_2F21F ;~ 20B8:00B2
loc_2f214:
	// 6595 
cs=0x20b8;eip=0x0000b4; 	X(DEC(*(raddr(ds,di+1))));	// 103894                  dec     byte ptr [di+1] ;~ 20B8:00B4
cs=0x20b8;eip=0x0000b7; 	J(JZ(loc_2f221));	// 103895                  jz      short loc_2F221 ;~ 20B8:00B7
cs=0x20b8;eip=0x0000b9; 	J(CALL(sub_2f371,0));	// 103896                  call    sub_2F371 ;~ 20B8:00B9
cs=0x20b8;eip=0x0000bc; 	J(CALL(sub_2f3f1,0));	// 103897                  call    sub_2F3F1 ;~ 20B8:00BC
loc_2f21f:
	// 6596 
cs=0x20b8;eip=0x0000bf; 	T(NOP);	// 103900                  nop ;~ 20B8:00BF
locret_2f220:
	// 6597 
cs=0x20b8;eip=0x0000c0; 	J(RETN(0));	// 103903                  retn ;~ 20B8:00C0
loc_2f221:
	// 6598 
cs=0x20b8;eip=0x0000c1; 	T(MOV(al, *(raddr(ds,bx))));	// 103908                  mov     al, [bx] ;~ 20B8:00C1
cs=0x20b8;eip=0x0000c3; 	T(INC(bx));	// 103909                  inc     bx ;~ 20B8:00C3
cs=0x20b8;eip=0x0000c4; 	T(OR(al, al));	// 103910                  or      al, al ;~ 20B8:00C4
cs=0x20b8;eip=0x0000c6; 	J(JS(loc_2f245));	// 103911                  js      short loc_2F245 ;~ 20B8:00C6
cs=0x20b8;eip=0x0000c8; 	X(MOV(*(raddr(ds,di)), al));	// 103912                  mov     [di], al ;~ 20B8:00C8
cs=0x20b8;eip=0x0000ca; 	T(MOV(ax, *(dw*)(raddr(ds,di+8))));	// 103913                  mov     ax, [di+8] ;~ 20B8:00CA
cs=0x20b8;eip=0x0000cd; 	J(CALL(sub_2f5bf,0));	// 103914                  call    sub_2F5BF ;~ 20B8:00CD
cs=0x20b8;eip=0x0000d0; 	J(CALL(sub_2f37c,0));	// 103915                  call    sub_2F37C ;~ 20B8:00D0
loc_2f233:
	// 6599 
cs=0x20b8;eip=0x0000d3; 	X(MOV(*(dw*)(raddr(ds,di+0x0C)), bx));	// 103918                  mov     [di+0Ch], bx ;~ 20B8:00D3
cs=0x20b8;eip=0x0000d6; 	T(MOV(al, *(raddr(ds,di+0x11))));	// 103919                  mov     al, [di+11h] ;~ 20B8:00D6
cs=0x20b8;eip=0x0000d9; 	X(MOV(*(raddr(ds,di+1)), al));	// 103920                  mov     [di+1], al ;~ 20B8:00D9
cs=0x20b8;eip=0x0000dc; 	J(RETN(0));	// 103921                  retn ;~ 20B8:00DC
ret_20b8_dd:
	// 6600 
cs=0x20b8;eip=0x0000dd; 	T(MOV(ax, *(dw*)(raddr(ds,di+8))));	// 103923                  mov     ax, [di+8] ;~ 20B8:00DD
cs=0x20b8;eip=0x0000e0; 	J(CALL(sub_2f5bf,0));	// 103924                  call    sub_2F5BF ;~ 20B8:00E0
cs=0x20b8;eip=0x0000e3; 	J(JMP(loc_2f233));	// 103925                  jmp     short loc_2F233 ;~ 20B8:00E3
loc_2f245:
	// 6601 
cs=0x20b8;eip=0x0000e5; 	T(CMP(al, 0x0E0));	// 103929                  cmp     al, 0E0h ;~ 20B8:00E5
cs=0x20b8;eip=0x0000e7; 	J(JNC(loc_2f259));	// 103930                  jnb     short loc_2F259 ;~ 20B8:00E7
cs=0x20b8;eip=0x0000e9; 	T(CMP(al, 0x0A0));	// 103931                  cmp     al, 0A0h ;~ 20B8:00E9
cs=0x20b8;eip=0x0000eb; 	J(JNC(loc_2f2ad));	// 103932                  jnb     short loc_2F2AD ;~ 20B8:00EB
cs=0x20b8;eip=0x0000ed; 	T(SHL(al, 1));	// 103933                  shl     al, 1 ;~ 20B8:00ED
cs=0x20b8;eip=0x0000ef; 	T(XOR(ah, ah));	// 103934                  xor     ah, ah ;~ 20B8:00EF
cs=0x20b8;eip=0x0000f1; 	T(si = ax;);	// 103935                  mov     si, ax ;~ 20B8:00F1
cs=0x20b8;eip=0x0000f3; 	T(ADD(si, 0x2AC));	// 103936                  add     si, 2ACh ;~ 20B8:00F3
cs=0x20b8;eip=0x0000f7; __disp=*(dw*)(raddr(ds,si));
	J(return __dispatch_call(__disp, _state););	// 103937                  jmp     word ptr [si] ;~ 20B8:00F7
loc_2f259:
	// 6602 
cs=0x20b8;eip=0x0000f9; 	T(SUB(al, 0x0DF));	// 103941                  sub     al, 0DFh ;~ 20B8:00F9
cs=0x20b8;eip=0x0000fb; 	X(MOV(*(raddr(ds,di+0x11)), al));	// 103942                  mov     [di+11h], al ;~ 20B8:00FB
cs=0x20b8;eip=0x0000fe; 	J(JMP(loc_2f221));	// 103943                  jmp     short loc_2F221 ;~ 20B8:00FE
ret_20b8_100:
	// 6603 
cs=0x20b8;eip=0x000100; 	T(MOV(al, *(raddr(ds,bx))));	// 103945                  mov     al, [bx] ;~ 20B8:0100
cs=0x20b8;eip=0x000102; 	T(INC(bx));	// 103946                  inc     bx ;~ 20B8:0102
cs=0x20b8;eip=0x000103; 	X(MOV(*(raddr(ds,di+0x0E)), al));	// 103947                  mov     [di+0Eh], al ;~ 20B8:0103
cs=0x20b8;eip=0x000106; 	X(PUSH(bx));	// 103948                  push    bx ;~ 20B8:0106
cs=0x20b8;eip=0x000107; 	X(PUSH(si));	// 103949                  push    si ;~ 20B8:0107
cs=0x20b8;eip=0x000108; 	T(MOV(si, *(dw*)(raddr(ds,di+2))));	// 103950                  mov     si, [di+2] ;~ 20B8:0108
cs=0x20b8;eip=0x00010b; 	T(bl = al;);	// 103951                  mov     bl, al ;~ 20B8:010B
cs=0x20b8;eip=0x00010d; 	T(XOR(bh, bh));	// 103952                  xor     bh, bh ;~ 20B8:010D
cs=0x20b8;eip=0x00010f; 	T(AND(bl, 0x7F));	// 103953                  and     bl, 7Fh ;~ 20B8:010F
cs=0x20b8;eip=0x000112; 	T(MOV(ah, *(raddr(ds,bx+0x55B))));	// 103954                  mov     ah, [bx+55Bh] ;~ 20B8:0112
cs=0x20b8;eip=0x000116; 	T(MOV(al, *(raddr(ds,si+0x0C))));	// 103955                  mov     al, [si+0Ch] ;~ 20B8:0116
cs=0x20b8;eip=0x000119; 	T(SHL(al, 1));	// 103956                  shl     al, 1 ;~ 20B8:0119
cs=0x20b8;eip=0x00011b; 	T(SHL(al, 1));	// 103957                  shl     al, 1 ;~ 20B8:011B
cs=0x20b8;eip=0x00011d; 	T(AND(al, 0x0C0));	// 103958                  and     al, 0C0h ;~ 20B8:011D
cs=0x20b8;eip=0x00011f; 	T(OR(ah, al));	// 103959                  or      ah, al ;~ 20B8:011F
cs=0x20b8;eip=0x000121; 	T(MOV(al, *(raddr(ds,di+6))));	// 103960                  mov     al, [di+6] ;~ 20B8:0121
cs=0x20b8;eip=0x000124; 	T(ADD(al, 0x40));	// 103961                  add     al, 40h ; '@' ;~ 20B8:0124
cs=0x20b8;eip=0x000126; 	J(CALL(sub_2f5bf,0));	// 103962                  call    sub_2F5BF ;~ 20B8:0126
cs=0x20b8;eip=0x000129; 	T(MOV(bl, *(raddr(ds,di+0x0F))));	// 103963                  mov     bl, [di+0Fh] ;~ 20B8:0129
cs=0x20b8;eip=0x00012c; 	T(AND(bl, 0x7F));	// 103964                  and     bl, 7Fh ;~ 20B8:012C
cs=0x20b8;eip=0x00012f; 	T(XOR(bh, bh));	// 103965                  xor     bh, bh ;~ 20B8:012F
cs=0x20b8;eip=0x000131; 	T(MOV(ah, *(raddr(ds,bx+0x55B))));	// 103966                  mov     ah, [bx+55Bh] ;~ 20B8:0131
cs=0x20b8;eip=0x000135; 	T(MOV(al, *(raddr(ds,si+0x0C))));	// 103967                  mov     al, [si+0Ch] ;~ 20B8:0135
cs=0x20b8;eip=0x000138; 	T(ROR(al, 1));	// 103968                  ror     al, 1 ;~ 20B8:0138
cs=0x20b8;eip=0x00013a; 	T(ROR(al, 1));	// 103969                  ror     al, 1 ;~ 20B8:013A
cs=0x20b8;eip=0x00013c; 	T(AND(al, 0x0C0));	// 103970                  and     al, 0C0h ;~ 20B8:013C
cs=0x20b8;eip=0x00013e; 	T(OR(ah, al));	// 103971                  or      ah, al ;~ 20B8:013E
cs=0x20b8;eip=0x000140; 	T(MOV(al, *(raddr(ds,di+5))));	// 103972                  mov     al, [di+5] ;~ 20B8:0140
cs=0x20b8;eip=0x000143; 	T(ADD(al, 0x40));	// 103973                  add     al, 40h ; '@' ;~ 20B8:0143
cs=0x20b8;eip=0x000145; 	J(CALL(sub_2f5bf,0));	// 103974                  call    sub_2F5BF ;~ 20B8:0145
cs=0x20b8;eip=0x000148; 	X(POP(si));	// 103975                  pop     si ;~ 20B8:0148
cs=0x20b8;eip=0x000149; 	X(POP(bx));	// 103976                  pop     bx ;~ 20B8:0149
cs=0x20b8;eip=0x00014a; 	J(JMP(loc_2f221));	// 103977                  jmp     loc_2F221 ;~ 20B8:014A
loc_2f2ad:
	// 6604 
cs=0x20b8;eip=0x00014d; 	T(SUB(al, 0x0A0));	// 103981                  sub     al, 0A0h ;~ 20B8:014D
cs=0x20b8;eip=0x00014f; 	X(PUSH(bx));	// 103982                  push    bx ;~ 20B8:014F
cs=0x20b8;eip=0x000150; 	X(MOV(*(raddr(ds,di+4)), al));	// 103983                  mov     [di+4], al ;~ 20B8:0150
cs=0x20b8;eip=0x000153; 	T(XOR(ah, ah));	// 103984                  xor     ah, ah ;~ 20B8:0153
cs=0x20b8;eip=0x000155; 	T(SHL(al, 1));	// 103985                  shl     al, 1 ;~ 20B8:0155
cs=0x20b8;eip=0x000157; 	T(SHL(al, 1));	// 103986                  shl     al, 1 ;~ 20B8:0157
cs=0x20b8;eip=0x000159; 	T(SHL(ax, 1));	// 103987                  shl     ax, 1 ;~ 20B8:0159
cs=0x20b8;eip=0x00015b; 	T(SHL(ax, 1));	// 103988                  shl     ax, 1 ;~ 20B8:015B
cs=0x20b8;eip=0x00015d; 	T(si = 0x80C;);	// 103989                  mov     si, 80Ch ;~ 20B8:015D
cs=0x20b8;eip=0x000160; 	T(ADD(si, ax));	// 103990                  add     si, ax ;~ 20B8:0160
cs=0x20b8;eip=0x000162; 	X(MOV(*(dw*)(raddr(ds,di+2)), si));	// 103991                  mov     [di+2], si ;~ 20B8:0162
cs=0x20b8;eip=0x000165; 	T(MOV(dx, *(dw*)(raddr(ds,di+5))));	// 103992                  mov     dx, [di+5] ;~ 20B8:0165
cs=0x20b8;eip=0x000168; 	T(MOV(ah, *(raddr(ds,si))));	// 103993                  mov     ah, [si] ;~ 20B8:0168
cs=0x20b8;eip=0x00016a; 	T(al = dl;);	// 103994                  mov     al, dl ;~ 20B8:016A
cs=0x20b8;eip=0x00016c; 	T(ADD(al, 0x60));	// 103995                  add     al, 60h ; '`' ;~ 20B8:016C
cs=0x20b8;eip=0x00016e; 	J(CALL(sub_2f5bf,0));	// 103996                  call    sub_2F5BF ;~ 20B8:016E
cs=0x20b8;eip=0x000171; 	T(MOV(ah, *(raddr(ds,si+1))));	// 103997                  mov     ah, [si+1] ;~ 20B8:0171
cs=0x20b8;eip=0x000174; 	T(al = dh;);	// 103998                  mov     al, dh ;~ 20B8:0174
cs=0x20b8;eip=0x000176; 	T(ADD(al, 0x60));	// 103999                  add     al, 60h ; '`' ;~ 20B8:0176
cs=0x20b8;eip=0x000178; 	J(CALL(sub_2f5bf,0));	// 104000                  call    sub_2F5BF ;~ 20B8:0178
cs=0x20b8;eip=0x00017b; 	T(MOV(ah, *(raddr(ds,si+2))));	// 104001                  mov     ah, [si+2] ;~ 20B8:017B
cs=0x20b8;eip=0x00017e; 	T(al = dl;);	// 104002                  mov     al, dl ;~ 20B8:017E
cs=0x20b8;eip=0x000180; 	T(ADD(al, 0x80));	// 104003                  add     al, 80h ;~ 20B8:0180
cs=0x20b8;eip=0x000182; 	J(CALL(sub_2f5bf,0));	// 104004                  call    sub_2F5BF ;~ 20B8:0182
cs=0x20b8;eip=0x000185; 	T(MOV(ah, *(raddr(ds,si+3))));	// 104005                  mov     ah, [si+3] ;~ 20B8:0185
cs=0x20b8;eip=0x000188; 	T(al = dh;);	// 104006                  mov     al, dh ;~ 20B8:0188
cs=0x20b8;eip=0x00018a; 	T(ADD(al, 0x80));	// 104007                  add     al, 80h ;~ 20B8:018A
cs=0x20b8;eip=0x00018c; 	J(CALL(sub_2f5bf,0));	// 104008                  call    sub_2F5BF ;~ 20B8:018C
cs=0x20b8;eip=0x00018f; 	T(MOV(ah, *(raddr(ds,si+6))));	// 104009                  mov     ah, [si+6] ;~ 20B8:018F
cs=0x20b8;eip=0x000192; 	T(al = dl;);	// 104010                  mov     al, dl ;~ 20B8:0192
cs=0x20b8;eip=0x000194; 	T(ADD(al, 0x0E0));	// 104011                  add     al, 0E0h ;~ 20B8:0194
cs=0x20b8;eip=0x000196; 	J(CALL(sub_2f5bf,0));	// 104012                  call    sub_2F5BF ;~ 20B8:0196
cs=0x20b8;eip=0x000199; 	T(MOV(ah, *(raddr(ds,si+7))));	// 104013                  mov     ah, [si+7] ;~ 20B8:0199
cs=0x20b8;eip=0x00019c; 	T(al = dh;);	// 104014                  mov     al, dh ;~ 20B8:019C
cs=0x20b8;eip=0x00019e; 	T(ADD(al, 0x0E0));	// 104015                  add     al, 0E0h ;~ 20B8:019E
cs=0x20b8;eip=0x0001a0; 	J(CALL(sub_2f5bf,0));	// 104016                  call    sub_2F5BF ;~ 20B8:01A0
cs=0x20b8;eip=0x0001a3; 	T(MOV(ah, *(raddr(ds,si+9))));	// 104017                  mov     ah, [si+9] ;~ 20B8:01A3
cs=0x20b8;eip=0x0001a6; 	T(MOV(al, *(raddr(ds,di+7))));	// 104018                  mov     al, [di+7] ;~ 20B8:01A6
cs=0x20b8;eip=0x0001a9; 	T(ADD(al, 0x0C0));	// 104019                  add     al, 0C0h ;~ 20B8:01A9
cs=0x20b8;eip=0x0001ab; 	J(CALL(sub_2f5bf,0));	// 104020                  call    sub_2F5BF ;~ 20B8:01AB
cs=0x20b8;eip=0x0001ae; 	T(MOV(ah, *(raddr(ds,si+4))));	// 104021                  mov     ah, [si+4] ;~ 20B8:01AE
cs=0x20b8;eip=0x0001b1; 	T(al = dl;);	// 104022                  mov     al, dl ;~ 20B8:01B1
cs=0x20b8;eip=0x0001b3; 	T(ADD(al, 0x20));	// 104023                  add     al, 20h ; ' ' ;~ 20B8:01B3
cs=0x20b8;eip=0x0001b5; 	J(CALL(sub_2f5bf,0));	// 104024                  call    sub_2F5BF ;~ 20B8:01B5
cs=0x20b8;eip=0x0001b8; 	T(MOV(ah, *(raddr(ds,si+5))));	// 104025                  mov     ah, [si+5] ;~ 20B8:01B8
cs=0x20b8;eip=0x0001bb; 	T(al = dh;);	// 104026                  mov     al, dh ;~ 20B8:01BB
cs=0x20b8;eip=0x0001bd; 	T(ADD(al, 0x20));	// 104027                  add     al, 20h ; ' ' ;~ 20B8:01BD
cs=0x20b8;eip=0x0001bf; 	J(CALL(sub_2f5bf,0));	// 104028                  call    sub_2F5BF ;~ 20B8:01BF
cs=0x20b8;eip=0x0001c2; 	T(MOV(bl, *(raddr(ds,si+0x0A))));	// 104029                  mov     bl, [si+0Ah] ;~ 20B8:01C2
cs=0x20b8;eip=0x0001c5; 	X(MOV(*(raddr(ds,di+0x0E)), bl));	// 104030                  mov     [di+0Eh], bl ;~ 20B8:01C5
cs=0x20b8;eip=0x0001c8; 	T(XOR(bh, bh));	// 104031                  xor     bh, bh ;~ 20B8:01C8
cs=0x20b8;eip=0x0001ca; 	T(AND(bl, 0x7F));	// 104032                  and     bl, 7Fh ;~ 20B8:01CA
cs=0x20b8;eip=0x0001cd; 	T(MOV(ah, *(raddr(ds,bx+0x55B))));	// 104033                  mov     ah, [bx+55Bh] ;~ 20B8:01CD
cs=0x20b8;eip=0x0001d1; 	T(MOV(al, *(raddr(ds,si+0x0C))));	// 104034                  mov     al, [si+0Ch] ;~ 20B8:01D1
cs=0x20b8;eip=0x0001d4; 	T(SHL(al, 1));	// 104035                  shl     al, 1 ;~ 20B8:01D4
cs=0x20b8;eip=0x0001d6; 	T(SHL(al, 1));	// 104036                  shl     al, 1 ;~ 20B8:01D6
cs=0x20b8;eip=0x0001d8; 	T(AND(al, 0x0C0));	// 104037                  and     al, 0C0h ;~ 20B8:01D8
cs=0x20b8;eip=0x0001da; 	T(OR(ah, al));	// 104038                  or      ah, al ;~ 20B8:01DA
cs=0x20b8;eip=0x0001dc; 	T(al = dh;);	// 104039                  mov     al, dh ;~ 20B8:01DC
cs=0x20b8;eip=0x0001de; 	T(ADD(al, 0x40));	// 104040                  add     al, 40h ; '@' ;~ 20B8:01DE
cs=0x20b8;eip=0x0001e0; 	J(CALL(sub_2f5bf,0));	// 104041                  call    sub_2F5BF ;~ 20B8:01E0
cs=0x20b8;eip=0x0001e3; 	T(MOV(bl, *(raddr(ds,si+0x0B))));	// 104042                  mov     bl, [si+0Bh] ;~ 20B8:01E3
cs=0x20b8;eip=0x0001e6; 	X(MOV(*(raddr(ds,di+0x0F)), bl));	// 104043                  mov     [di+0Fh], bl ;~ 20B8:01E6
cs=0x20b8;eip=0x0001e9; 	T(AND(bl, 0x7F));	// 104044                  and     bl, 7Fh ;~ 20B8:01E9
cs=0x20b8;eip=0x0001ec; 	T(XOR(bh, bh));	// 104045                  xor     bh, bh ;~ 20B8:01EC
cs=0x20b8;eip=0x0001ee; 	X(MOV(*(raddr(ds,di+0x13)), bh));	// 104046                  mov     [di+13h], bh ;~ 20B8:01EE
cs=0x20b8;eip=0x0001f1; 	T(MOV(ah, *(raddr(ds,bx+0x55B))));	// 104047                  mov     ah, [bx+55Bh] ;~ 20B8:01F1
cs=0x20b8;eip=0x0001f5; 	T(MOV(al, *(raddr(ds,si+0x0C))));	// 104048                  mov     al, [si+0Ch] ;~ 20B8:01F5
cs=0x20b8;eip=0x0001f8; 	T(ROR(al, 1));	// 104049                  ror     al, 1 ;~ 20B8:01F8
cs=0x20b8;eip=0x0001fa; 	T(ROR(al, 1));	// 104050                  ror     al, 1 ;~ 20B8:01FA
cs=0x20b8;eip=0x0001fc; 	T(AND(al, 0x0C0));	// 104051                  and     al, 0C0h ;~ 20B8:01FC
cs=0x20b8;eip=0x0001fe; 	T(OR(ah, al));	// 104052                  or      ah, al ;~ 20B8:01FE
cs=0x20b8;eip=0x000200; 	T(al = dl;);	// 104053                  mov     al, dl ;~ 20B8:0200
cs=0x20b8;eip=0x000202; 	T(ADD(al, 0x40));	// 104054                  add     al, 40h ; '@' ;~ 20B8:0202
cs=0x20b8;eip=0x000204; 	J(CALL(sub_2f5bf,0));	// 104055                  call    sub_2F5BF ;~ 20B8:0204
cs=0x20b8;eip=0x000207; 	T(MOV(al, *(raddr(ds,si+8))));	// 104056                  mov     al, [si+8] ;~ 20B8:0207
cs=0x20b8;eip=0x00020a; 	X(MOV(*(raddr(ds,di+0x12)), al));	// 104057                  mov     [di+12h], al ;~ 20B8:020A
cs=0x20b8;eip=0x00020d; 	X(POP(bx));	// 104058                  pop     bx ;~ 20B8:020D
cs=0x20b8;eip=0x00020e; 	J(JMP(loc_2f221));	// 104059                  jmp     loc_2F221 ;~ 20B8:020E

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
        case m2c::kret_20b8_100: 	goto ret_20b8_100;
        case m2c::kret_20b8_dd: 	goto ret_20b8_dd;
        case m2c::ksub_2f1fe: 	goto sub_2f1fe;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group39(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group39:
    _begin:
sub_2f371:
	// 104066 
cs=0x20b8;eip=0x000211; 	T(MOV(al, *(raddr(ds,di+0x13))));	// 104067                  mov     al, [di+13h] ;~ 20B8:0211
cs=0x20b8;eip=0x000214; 	T(OR(al, al));	// 104068                  or      al, al ;~ 20B8:0214
cs=0x20b8;eip=0x000216; 	J(JZ(locret_2f3d4));	// 104069                  jz      short locret_2F3D4 ;~ 20B8:0216
cs=0x20b8;eip=0x000218; 	T(ADD(al, *(raddr(ds,di))));	// 104070                  add     al, [di] ;~ 20B8:0218
cs=0x20b8;eip=0x00021a; 	X(MOV(*(raddr(ds,di)), al));	// 104071                  mov     [di], al ;~ 20B8:021A
sub_2f37c:
	// 104078 
cs=0x20b8;eip=0x00021c; 	X(PUSH(bx));	// 104079                  push    bx ;~ 20B8:021C
cs=0x20b8;eip=0x00021d; 	X(PUSH(si));	// 104080                  push    si ;~ 20B8:021D
cs=0x20b8;eip=0x00021e; 	T(MOV(al, *(raddr(ds,di))));	// 104081                  mov     al, [di] ;~ 20B8:021E
cs=0x20b8;eip=0x000220; 	T(ADD(al, *(raddr(ds,di+0x12))));	// 104082                  add     al, [di+12h] ;~ 20B8:0220
cs=0x20b8;eip=0x000223; 	T(XOR(ah, ah));	// 104083                  xor     ah, ah ;~ 20B8:0223
cs=0x20b8;eip=0x000225; 	T(si = ax;);	// 104084                  mov     si, ax ;~ 20B8:0225
cs=0x20b8;eip=0x000227; 	T(MOV(bl, *(raddr(ds,si+0x75B))));	// 104085                  mov     bl, [si+75Bh] ;~ 20B8:0227
cs=0x20b8;eip=0x00022b; 	T(MOV(al, *(raddr(ds,si+0x7BB))));	// 104086                  mov     al, [si+7BBh] ;~ 20B8:022B
cs=0x20b8;eip=0x00022f; 	T(SHL(al, 1));	// 104087                  shl     al, 1 ;~ 20B8:022F
cs=0x20b8;eip=0x000231; 	T(SHL(al, 1));	// 104088                  shl     al, 1 ;~ 20B8:0231
cs=0x20b8;eip=0x000233; 	T(SHL(al, 1));	// 104089                  shl     al, 1 ;~ 20B8:0233
cs=0x20b8;eip=0x000235; 	T(SHL(al, 1));	// 104090                  shl     al, 1 ;~ 20B8:0235
cs=0x20b8;eip=0x000237; 	T(SHL(ax, 1));	// 104091                  shl     ax, 1 ;~ 20B8:0237
cs=0x20b8;eip=0x000239; 	T(si = 0x5DB;);	// 104092                  mov     si, 5DBh ;~ 20B8:0239
cs=0x20b8;eip=0x00023c; 	T(ADD(si, ax));	// 104093                  add     si, ax ;~ 20B8:023C
cs=0x20b8;eip=0x00023e; 	T(LODSW);	// 104094                  lodsw ;~ 20B8:023E
cs=0x20b8;eip=0x00023f; 	T(DEC(bl));	// 104095                  dec     bl ;~ 20B8:023F
cs=0x20b8;eip=0x000241; 	T(OR(ax, ax));	// 104096                  or      ax, ax ;~ 20B8:0241
cs=0x20b8;eip=0x000243; 	J(JGE(loc_2f3a7));	// 104097                  jge     short loc_2F3A7 ;~ 20B8:0243
cs=0x20b8;eip=0x000245; 	T(INC(bl));	// 104098                  inc     bl ;~ 20B8:0245
loc_2f3a7:
	// 6605 
cs=0x20b8;eip=0x000247; 	T(OR(bl, bl));	// 104101                  or      bl, bl ;~ 20B8:0247
cs=0x20b8;eip=0x000249; 	J(JGE(loc_2f3af));	// 104102                  jge     short loc_2F3AF ;~ 20B8:0249
cs=0x20b8;eip=0x00024b; 	T(INC(bl));	// 104103                  inc     bl ;~ 20B8:024B
cs=0x20b8;eip=0x00024d; 	T(SAR(ax, 1));	// 104104                  sar     ax, 1 ;~ 20B8:024D
loc_2f3af:
	// 6606 
cs=0x20b8;eip=0x00024f; 	X(PUSH(ax));	// 104107                  push    ax ;~ 20B8:024F
cs=0x20b8;eip=0x000250; 	T(ah = al;);	// 104108                  mov     ah, al ;~ 20B8:0250
cs=0x20b8;eip=0x000252; 	T(MOV(al, *(raddr(ds,di+7))));	// 104109                  mov     al, [di+7] ;~ 20B8:0252
cs=0x20b8;eip=0x000255; 	T(ADD(al, 0x0A0));	// 104110                  add     al, 0A0h ;~ 20B8:0255
cs=0x20b8;eip=0x000257; 	J(CALL(sub_2f5bf,0));	// 104111                  call    sub_2F5BF ;~ 20B8:0257
cs=0x20b8;eip=0x00025a; 	X(POP(ax));	// 104112                  pop     ax ;~ 20B8:025A
cs=0x20b8;eip=0x00025b; 	T(AND(ah, 3));	// 104113                  and     ah, 3 ;~ 20B8:025B
cs=0x20b8;eip=0x00025e; 	T(SHL(bl, 1));	// 104114                  shl     bl, 1 ;~ 20B8:025E
cs=0x20b8;eip=0x000260; 	T(SHL(bl, 1));	// 104115                  shl     bl, 1 ;~ 20B8:0260
cs=0x20b8;eip=0x000262; 	T(OR(ah, bl));	// 104116                  or      ah, bl ;~ 20B8:0262
cs=0x20b8;eip=0x000264; 	T(MOV(al, *(raddr(ds,di+7))));	// 104117                  mov     al, [di+7] ;~ 20B8:0264
cs=0x20b8;eip=0x000267; 	T(ADD(al, 0x0B0));	// 104118                  add     al, 0B0h ;~ 20B8:0267
cs=0x20b8;eip=0x000269; 	X(MOV(*(dw*)(raddr(ds,di+8)), ax));	// 104119                  mov     [di+8], ax ;~ 20B8:0269
cs=0x20b8;eip=0x00026c; 	T(OR(ah, 0x20));	// 104120                  or      ah, 20h ;~ 20B8:026C
cs=0x20b8;eip=0x00026f; 	J(CALL(sub_2f5bf,0));	// 104121                  call    sub_2F5BF ;~ 20B8:026F
cs=0x20b8;eip=0x000272; 	X(POP(si));	// 104122                  pop     si ;~ 20B8:0272
cs=0x20b8;eip=0x000273; 	X(POP(bx));	// 104123                  pop     bx ;~ 20B8:0273
locret_2f3d4:
	// 6607 
cs=0x20b8;eip=0x000274; 	J(RETN(0));	// 104126                  retn ;~ 20B8:0274

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
cs=0x20b8;eip=0x000275; 	T(di = 0x49C;);	// 104135                  mov     di, 49Ch ;~ 20B8:0275
cs=0x20b8;eip=0x000278; 	T(cx = 9;);	// 104136                  mov     cx, 9 ;~ 20B8:0278
loc_2f3db:
	// 6608 
cs=0x20b8;eip=0x00027b; 	T(MOV(ax, *(dw*)(raddr(ds,di+8))));	// 104139                  mov     ax, [di+8] ;~ 20B8:027B
cs=0x20b8;eip=0x00027e; 	J(CALL(sub_2f5bf,0));	// 104140                  call    sub_2F5BF ;~ 20B8:027E
cs=0x20b8;eip=0x000281; 	X(MOV(*(raddr(ds,di+0x10)), ch));	// 104141                  mov     [di+10h], ch ;~ 20B8:0281
cs=0x20b8;eip=0x000284; 	X(MOV(*(raddr(ds,di+0x14)), ch));	// 104142                  mov     [di+14h], ch ;~ 20B8:0284
cs=0x20b8;eip=0x000287; 	T(ADD(di, 0x15));	// 104143                  add     di, 15h ;~ 20B8:0287
cs=0x20b8;eip=0x00028a; 	J(LOOP(loc_2f3db));	// 104144                  loop    loc_2F3DB ;~ 20B8:028A
cs=0x20b8;eip=0x00028c; 	X(word_2f168 = cx;);	// 104145                  mov     word_2F168, cx ;~ 20B8:028C
cs=0x20b8;eip=0x000290; 	J(RETN(0));	// 104146                  retn ;~ 20B8:0290

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
cs=0x20b8;eip=0x000291; 	T(CMP(*(raddr(ds,bx)), 0x82));	// 104154                  cmp     byte ptr [bx], 82h ;~ 20B8:0291
cs=0x20b8;eip=0x000294; 	J(JZ(locret_2f40b));	// 104155                  jz      short locret_2F40B ;~ 20B8:0294
cs=0x20b8;eip=0x000296; 	T(MOV(si, *(dw*)(raddr(ds,di+2))));	// 104156                  mov     si, [di+2] ;~ 20B8:0296
cs=0x20b8;eip=0x000299; 	T(MOV(al, *(raddr(ds,si+0x0E))));	// 104157                  mov     al, [si+0Eh] ;~ 20B8:0299
cs=0x20b8;eip=0x00029c; 	T(CMP(al, *(raddr(ds,di+1))));	// 104158                  cmp     al, [di+1] ;~ 20B8:029C
cs=0x20b8;eip=0x00029f; 	J(JNZ(locret_2f40b));	// 104159                  jnz     short locret_2F40B ;~ 20B8:029F
cs=0x20b8;eip=0x0002a1; 	T(MOV(ax, *(dw*)(raddr(ds,di+8))));	// 104160                  mov     ax, [di+8] ;~ 20B8:02A1
cs=0x20b8;eip=0x0002a4; 	J(CALL(sub_2f5bf,0));	// 104161                  call    sub_2F5BF ;~ 20B8:02A4
cs=0x20b8;eip=0x0002a7; 	X(MOV(*(raddr(ds,di+0x13)), 0));	// 104162                  mov     byte ptr [di+13h], 0 ;~ 20B8:02A7
locret_2f40b:
	// 6609 
cs=0x20b8;eip=0x0002ab; 	J(RETN(0));	// 104166                  retn ;~ 20B8:02AB

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
	// 6610 
cs=0x20b8;eip=0x0002f8; 	T(MOV(ax, *(dw*)(raddr(ds,di+8))));	// 104250                  mov     ax, [di+8] ;~ 20B8:02F8
cs=0x20b8;eip=0x0002fb; 	J(CALL(sub_2f5bf,0));	// 104251                  call    sub_2F5BF ;~ 20B8:02FB
cs=0x20b8;eip=0x0002fe; 	X(MOV(*(raddr(ds,di+0x10)), 0));	// 104252                  mov     byte ptr [di+10h], 0 ;~ 20B8:02FE
cs=0x20b8;eip=0x000302; 	X(MOV(*(raddr(ds,di+0x14)), 0));	// 104253                  mov     byte ptr [di+14h], 0 ;~ 20B8:0302
cs=0x20b8;eip=0x000306; 	J(RETN(0));	// 104254                  retn ;~ 20B8:0306

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
cs=0x20b8;eip=0x000307; 	X(MOV(*(raddr(ds,di+0x13)), 1));	// 104261                  mov     byte ptr [di+13h], 1 ;~ 20B8:0307
cs=0x20b8;eip=0x00030b; 	J(return sub_2f1fe(m2c::kloc_2f221, _state););	// 104262                  jmp     loc_2F221 ;~ 20B8:030B

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
cs=0x20b8;eip=0x00030e; 	X(MOV(*(raddr(ds,di+0x13)), 0x0FF));	// 104270                  mov     byte ptr [di+13h], 0FFh ;~ 20B8:030E
cs=0x20b8;eip=0x000312; 	J(return sub_2f1fe(m2c::kloc_2f221, _state););	// 104271                  jmp     loc_2F221 ;~ 20B8:0312

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
cs=0x20b8;eip=0x000315; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 104279                  mov     bx, [bx] ;~ 20B8:0315
cs=0x20b8;eip=0x000317; 	J(return sub_2f1fe(m2c::kloc_2f221, _state););	// 104280                  jmp     loc_2F221 ;~ 20B8:0317

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
cs=0x20b8;eip=0x00031a; 	T(CMP(*(db*)(((db*)&word_2f168)+1), 0));	// 104288                  cmp     byte ptr word_2F168+1, 0 ;~ 20B8:031A
cs=0x20b8;eip=0x00031f; 	J(JNZ(loc_2f487));	// 104289                  jnz     short loc_2F487 ;~ 20B8:031F
cs=0x20b8;eip=0x000321; 	T(al = *(db*)(&word_2f168););	// 104290                  mov     al, byte ptr word_2F168 ;~ 20B8:0321
cs=0x20b8;eip=0x000324; 	X(byte_2f174 = al;);	// 104291                  mov     byte_2F174, al ;~ 20B8:0324
loc_2f487:
	// 6611 
cs=0x20b8;eip=0x000327; 	T(CMP(byte_2f174, 0));	// 104294                  cmp     byte_2F174, 0 ;~ 20B8:0327
cs=0x20b8;eip=0x00032c; 	J(JZ(locret_2f50b));	// 104295                  jz      short locret_2F50B ;~ 20B8:032C
cs=0x20b8;eip=0x00032e; 	X(*(db*)(&word_2f168) = 0;);	// 104296                  mov     byte ptr word_2F168, 0 ;~ 20B8:032E
cs=0x20b8;eip=0x000333; 	X(byte_2f174 = 0;);	// 104297                  mov     byte_2F174, 0 ;~ 20B8:0333
cs=0x20b8;eip=0x000338; 	T(CMP(al, 4));	// 104298                  cmp     al, 4 ;~ 20B8:0338
cs=0x20b8;eip=0x00033a; 	J(JC(loc_2f49f));	// 104299                  jb      short loc_2F49F ;~ 20B8:033A
cs=0x20b8;eip=0x00033c; 	J(return sub_2f3d5(0, _state););	// 104300                  jmp     sub_2F3D5 ;~ 20B8:033C
loc_2f49f:
	// 6612 
cs=0x20b8;eip=0x00033f; 	X(PUSH(ax));	// 104304                  push    ax ;~ 20B8:033F
cs=0x20b8;eip=0x000340; 	J(CALL(sub_2f3d5,0));	// 104305                  call    sub_2F3D5 ;~ 20B8:0340
cs=0x20b8;eip=0x000343; 	X(POP(ax));	// 104306                  pop     ax ;~ 20B8:0343
cs=0x20b8;eip=0x000344; 	X(*(db*)(((db*)&word_2f168)+1) = al;);	// 104307                  mov     byte ptr word_2F168+1, al ;~ 20B8:0344
cs=0x20b8;eip=0x000347; 	T(SHL(al, 1));	// 104308                  shl     al, 1 ;~ 20B8:0347
cs=0x20b8;eip=0x000349; 	T(si = 0x0B9C;);	// 104309                  mov     si, 0B9Ch ;~ 20B8:0349
cs=0x20b8;eip=0x00034c; 	T(XOR(ah, ah));	// 104310                  xor     ah, ah ;~ 20B8:034C
cs=0x20b8;eip=0x00034e; 	T(ADD(si, ax));	// 104311                  add     si, ax ;~ 20B8:034E
cs=0x20b8;eip=0x000350; 	T(LODSW);	// 104312                  lodsw ;~ 20B8:0350
cs=0x20b8;eip=0x000351; 	T(si = ax;);	// 104313                  mov     si, ax ;~ 20B8:0351
cs=0x20b8;eip=0x000353; 	T(LODSB);	// 104314                  lodsb ;~ 20B8:0353
cs=0x20b8;eip=0x000354; 	X(*(db*)(((db*)&word_2f16d)+1) = al;);	// 104315                  mov     byte ptr word_2F16D+1, al ;~ 20B8:0354
cs=0x20b8;eip=0x000357; 	T(LODSB);	// 104316                  lodsb ;~ 20B8:0357
cs=0x20b8;eip=0x000358; 	T(cl = al;);	// 104317                  mov     cl, al ;~ 20B8:0358
cs=0x20b8;eip=0x00035a; 	T(XOR(ch, ch));	// 104318                  xor     ch, ch ;~ 20B8:035A
cs=0x20b8;eip=0x00035c; 	X(*(dw*)(&byte_2fcfc) = cx;);	// 104319                  mov     word ptr byte_2FCFC, cx ;~ 20B8:035C
cs=0x20b8;eip=0x000360; 	T(di = 0x49C;);	// 104320                  mov     di, 49Ch ;~ 20B8:0360
loc_2f4c3:
	// 6613 
cs=0x20b8;eip=0x000363; 	T(LODSW);	// 104323                  lodsw ;~ 20B8:0363
cs=0x20b8;eip=0x000364; 	T(bx = ax;);	// 104324                  mov     bx, ax ;~ 20B8:0364
cs=0x20b8;eip=0x000366; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 104325                  mov     ax, [bx] ;~ 20B8:0366
cs=0x20b8;eip=0x000368; 	T(INC(bx));	// 104326                  inc     bx ;~ 20B8:0368
cs=0x20b8;eip=0x000369; 	T(INC(bx));	// 104327                  inc     bx ;~ 20B8:0369
cs=0x20b8;eip=0x00036a; 	X(MOV(*(dw*)(raddr(ds,di+0x0A)), bx));	// 104328                  mov     [di+0Ah], bx ;~ 20B8:036A
cs=0x20b8;eip=0x00036d; 	X(MOV(*(dw*)(raddr(ds,di+0x0C)), ax));	// 104329                  mov     [di+0Ch], ax ;~ 20B8:036D
cs=0x20b8;eip=0x000370; 	X(MOV(*(raddr(ds,di+1)), 1));	// 104330                  mov     byte ptr [di+1], 1 ;~ 20B8:0370
cs=0x20b8;eip=0x000374; 	X(MOV(*(raddr(ds,di+0x10)), 1));	// 104331                  mov     byte ptr [di+10h], 1 ;~ 20B8:0374
cs=0x20b8;eip=0x000378; 	T(ADD(di, 0x15));	// 104332                  add     di, 15h ;~ 20B8:0378
cs=0x20b8;eip=0x00037b; 	J(LOOP(loc_2f4c3));	// 104333                  loop    loc_2F4C3 ;~ 20B8:037B
cs=0x20b8;eip=0x00037d; 	T(di = 0x49C;);	// 104334                  mov     di, 49Ch ;~ 20B8:037D
cs=0x20b8;eip=0x000380; 	T(cx = 9;);	// 104335                  mov     cx, 9 ;~ 20B8:0380
loc_2f4e3:
	// 6614 
cs=0x20b8;eip=0x000383; 	T(MOV(ax, *(dw*)(raddr(ds,di+8))));	// 104338                  mov     ax, [di+8] ;~ 20B8:0383
cs=0x20b8;eip=0x000386; 	J(CALL(sub_2f5bf,0));	// 104339                  call    sub_2F5BF ;~ 20B8:0386
cs=0x20b8;eip=0x000389; 	T(ADD(di, 0x15));	// 104340                  add     di, 15h ;~ 20B8:0389
cs=0x20b8;eip=0x00038c; 	J(LOOP(loc_2f4e3));	// 104341                  loop    loc_2F4E3 ;~ 20B8:038C
cs=0x20b8;eip=0x00038e; 	T(ax = 0x2001;);	// 104342                  mov     ax, 2001h ;~ 20B8:038E
cs=0x20b8;eip=0x000391; 	J(CALL(sub_2f5bf,0));	// 104343                  call    sub_2F5BF ;~ 20B8:0391
cs=0x20b8;eip=0x000394; 	T(ax = 0x0BD;);	// 104344                  mov     ax, 0BDh ;~ 20B8:0394
cs=0x20b8;eip=0x000397; 	J(CALL(sub_2f5bf,0));	// 104345                  call    sub_2F5BF ;~ 20B8:0397
cs=0x20b8;eip=0x00039a; 	T(ax = 8;);	// 104346                  mov     ax, 8 ;~ 20B8:039A
cs=0x20b8;eip=0x00039d; 	J(CALL(sub_2f5bf,0));	// 104347                  call    sub_2F5BF ;~ 20B8:039D
cs=0x20b8;eip=0x0003a0; 	T(ax = 0x2104;);	// 104348                  mov     ax, 2104h ;~ 20B8:03A0
cs=0x20b8;eip=0x0003a3; 	J(CALL(sub_2f5bf,0));	// 104349                  call    sub_2F5BF ;~ 20B8:03A3
cs=0x20b8;eip=0x0003a6; 	X(*(db*)(&seg_2f16f) = 1;);	// 104350                  mov     byte ptr seg_2F16F, 1 ;~ 20B8:03A6
locret_2f50b:
	// 6615 
cs=0x20b8;eip=0x0003ab; 	J(RETN(0));	// 104353                  retn ;~ 20B8:03AB

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
cs=0x20b8;eip=0x0003ac; 	T(bl = *(db*)(&word_2f16a););	// 104361                  mov     bl, byte ptr word_2F16A ;~ 20B8:03AC
cs=0x20b8;eip=0x0003b0; 	T(OR(bl, bl));	// 104362                  or      bl, bl ;~ 20B8:03B0
cs=0x20b8;eip=0x0003b2; 	J(JZ(locret_2f52a));	// 104363                  jz      short locret_2F52A ;~ 20B8:03B2
cs=0x20b8;eip=0x0003b4; 	T(CMP(bl, 0x46));	// 104364                  cmp     bl, 46h ; 'F' ;~ 20B8:03B4
cs=0x20b8;eip=0x0003b7; 	J(JNC(locret_2f52a));	// 104365                  jnb     short locret_2F52A ;~ 20B8:03B7
cs=0x20b8;eip=0x0003b9; 	T(di = 0x544;);	// 104366                  mov     di, 544h ;~ 20B8:03B9
cs=0x20b8;eip=0x0003bc; 	T(cx = 9;);	// 104367                  mov     cx, 9 ;~ 20B8:03BC
loc_2f51f:
	// 6616 
cs=0x20b8;eip=0x0003bf; 	T(CMP(*(raddr(ds,di+0x10)), 0));	// 104370                  cmp     byte ptr [di+10h], 0 ;~ 20B8:03BF
cs=0x20b8;eip=0x0003c3; 	J(JZ(loc_2f52b));	// 104371                  jz      short loc_2F52B ;~ 20B8:03C3
cs=0x20b8;eip=0x0003c5; 	T(SUB(di, 0x15));	// 104372                  sub     di, 15h ;~ 20B8:03C5
cs=0x20b8;eip=0x0003c8; 	J(LOOP(loc_2f51f));	// 104373                  loop    loc_2F51F ;~ 20B8:03C8
locret_2f52a:
	// 6617 
cs=0x20b8;eip=0x0003ca; 	J(RETN(0));	// 104377                  retn ;~ 20B8:03CA
loc_2f52b:
	// 6618 
cs=0x20b8;eip=0x0003cb; 	X(MOV(*(raddr(ds,di+0x10)), 2));	// 104381                  mov     byte ptr [di+10h], 2 ;~ 20B8:03CB
cs=0x20b8;eip=0x0003cf; 	X(MOV(*(raddr(ds,di+0x14)), bl));	// 104382                  mov     [di+14h], bl ;~ 20B8:03CF
cs=0x20b8;eip=0x0003d2; 	T(SHL(bl, 1));	// 104383                  shl     bl, 1 ;~ 20B8:03D2
cs=0x20b8;eip=0x0003d4; 	T(XOR(bh, bh));	// 104384                  xor     bh, bh ;~ 20B8:03D4
cs=0x20b8;eip=0x0003d6; 	X(*(db*)(&word_2f16a) = bh;);	// 104385                  mov     byte ptr word_2F16A, bh ;~ 20B8:03D6
cs=0x20b8;eip=0x0003da; 	X(MOV(*(raddr(ds,di+0x13)), bh));	// 104386                  mov     [di+13h], bh ;~ 20B8:03DA
cs=0x20b8;eip=0x0003dd; 	T(MOV(bx, *(dw*)(raddr(ds,bx+0x112F))));	// 104387                  mov     bx, [bx+112Fh] ;~ 20B8:03DD
cs=0x20b8;eip=0x0003e1; 	J(return sub_2f1fe(m2c::kloc_2f221, _state););	// 104388                  jmp     loc_2F221 ;~ 20B8:03E1

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



 bool _group40(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group40:
    _begin:
sub_2f544:
	// 104395 
cs=0x20b8;eip=0x0003e4; 	T(si = 0x0C;);	// 104396                  mov     si, 0Ch ;~ 20B8:03E4
cs=0x20b8;eip=0x0003e7; 	J(CALL(sub_2f54d,0));	// 104397                  call    sub_2F54D ;~ 20B8:03E7
cs=0x20b8;eip=0x0003ea; 	T(si = 0x0D;);	// 104398                  mov     si, 0Dh ;~ 20B8:03EA
sub_2f54d:
	// 104405 
cs=0x20b8;eip=0x0003ed; 	T(MOV(al, *(raddr(ds,si))));	// 104409                  mov     al, [si] ;~ 20B8:03ED
cs=0x20b8;eip=0x0003ef; 	X(MOV(*(raddr(ds,si)), 0));	// 104410                  mov     byte ptr [si], 0 ;~ 20B8:03EF
cs=0x20b8;eip=0x0003f2; 	T(OR(al, al));	// 104411                  or      al, al ;~ 20B8:03F2
cs=0x20b8;eip=0x0003f4; 	J(JZ(locret_2f56a));	// 104412                  jz      short locret_2F56A ;~ 20B8:03F4
cs=0x20b8;eip=0x0003f6; 	T(di = 0x49C;);	// 104413                  mov     di, 49Ch ;~ 20B8:03F6
cs=0x20b8;eip=0x0003f9; 	T(cx = 9;);	// 104414                  mov     cx, 9 ;~ 20B8:03F9
loc_2f55c:
	// 6619 
cs=0x20b8;eip=0x0003fc; 	T(CMP(al, *(raddr(ds,di+0x14))));	// 104417                  cmp     al, [di+14h] ;~ 20B8:03FC
cs=0x20b8;eip=0x0003ff; 	J(JNZ(loc_2f564));	// 104418                  jnz     short loc_2F564 ;~ 20B8:03FF
cs=0x20b8;eip=0x000401; 	J(return seg008_2f8_proc(m2c::kloc_2f458, _state););	// 104419                  jmp     loc_2F458 ;~ 20B8:0401
loc_2f564:
	// 6620 
cs=0x20b8;eip=0x000404; 	T(ADD(di, 0x15));	// 104423                  add     di, 15h ;~ 20B8:0404
cs=0x20b8;eip=0x000407; 	J(LOOP(loc_2f55c));	// 104424                  loop    loc_2F55C ;~ 20B8:0407
cs=0x20b8;eip=0x000409; 	J(RETN(0));	// 104425                  retn ;~ 20B8:0409
locret_2f56a:
	// 6621 
cs=0x20b8;eip=0x00040a; 	J(RETN(0));	// 104429                  retn ;~ 20B8:040A

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
cs=0x20b8;eip=0x00040b; 	X(PUSH(bx));	// 104438                  push    bx ;~ 20B8:040B
cs=0x20b8;eip=0x00040c; 	X(PUSH(cx));	// 104439                  push    cx ;~ 20B8:040C
cs=0x20b8;eip=0x00040d; 	X(PUSH(dx));	// 104440                  push    dx ;~ 20B8:040D
cs=0x20b8;eip=0x00040e; 	X(PUSH(ds));	// 104441                  push    ds ;~ 20B8:040E
cs=0x20b8;eip=0x00040f; 	X(PUSH(cs));	// 104442                  push    cs ;~ 20B8:040F
cs=0x20b8;eip=0x000410; 	X(POP(ds));	// 104443                  pop     ds ;~ 20B8:0410
cs=0x20b8;eip=0x000411; 	T(dx = *(dw*)(((db*)&seg_2f16f)+1););	// 104445                  mov     dx, seg_2F16F+1 ;~ 20B8:0411
cs=0x20b8;eip=0x000415; 	T(ax = 0x6004;);	// 104446                  mov     ax, 6004h ;~ 20B8:0415
cs=0x20b8;eip=0x000418; 	J(CALL(sub_2f5bf,0));	// 104447                  call    sub_2F5BF ;~ 20B8:0418
cs=0x20b8;eip=0x00041b; 	T(ax = 0x8004;);	// 104448                  mov     ax, 8004h ;~ 20B8:041B
cs=0x20b8;eip=0x00041e; 	J(CALL(sub_2f5bf,0));	// 104449                  call    sub_2F5BF ;~ 20B8:041E
cs=0x20b8;eip=0x000421; 	S(IN(al, dx));	// 104450                  in      al, dx ;~ 20B8:0421
cs=0x20b8;eip=0x000422; 	X(PUSH(ax));	// 104451                  push    ax ;~ 20B8:0422
cs=0x20b8;eip=0x000423; 	T(ax = 0x0FF02;);	// 104452                  mov     ax, 0FF02h ;~ 20B8:0423
cs=0x20b8;eip=0x000426; 	J(CALL(sub_2f5bf,0));	// 104453                  call    sub_2F5BF ;~ 20B8:0426
cs=0x20b8;eip=0x000429; 	T(ax = 0x2104;);	// 104454                  mov     ax, 2104h ;~ 20B8:0429
cs=0x20b8;eip=0x00042c; 	J(CALL(sub_2f5bf,0));	// 104455                  call    sub_2F5BF ;~ 20B8:042C
cs=0x20b8;eip=0x00042f; 	T(cx = 0x12C;);	// 104456                  mov     cx, 12Ch ;~ 20B8:042F
loc_2f592:
	// 6622 
cs=0x20b8;eip=0x000432; 	S(LOOP(loc_2f592));	// 104459                  loop    loc_2F592 ;~ 20B8:0432
cs=0x20b8;eip=0x000434; 	S(IN(al, dx));	// 104460                  in      al, dx ;~ 20B8:0434
cs=0x20b8;eip=0x000435; 	X(PUSH(ax));	// 104461                  push    ax ;~ 20B8:0435
cs=0x20b8;eip=0x000436; 	T(ax = 0x6004;);	// 104462                  mov     ax, 6004h ;~ 20B8:0436
cs=0x20b8;eip=0x000439; 	J(CALL(sub_2f5bf,0));	// 104463                  call    sub_2F5BF ;~ 20B8:0439
cs=0x20b8;eip=0x00043c; 	T(ax = 0x8004;);	// 104464                  mov     ax, 8004h ;~ 20B8:043C
cs=0x20b8;eip=0x00043f; 	J(CALL(sub_2f5bf,0));	// 104465                  call    sub_2F5BF ;~ 20B8:043F
cs=0x20b8;eip=0x000442; 	X(POP(ax));	// 104466                  pop     ax ;~ 20B8:0442
cs=0x20b8;eip=0x000443; 	X(POP(bx));	// 104467                  pop     bx ;~ 20B8:0443
cs=0x20b8;eip=0x000444; 	T(AND(al, 0x0E0));	// 104468                  and     al, 0E0h ;~ 20B8:0444
cs=0x20b8;eip=0x000446; 	T(AND(bl, 0x0E0));	// 104469                  and     bl, 0E0h ;~ 20B8:0446
cs=0x20b8;eip=0x000449; 	T(AND(bl, bl));	// 104470                  and     bl, bl ;~ 20B8:0449
cs=0x20b8;eip=0x00044b; 	J(JNZ(loc_2f5b8));	// 104471                  jnz     short loc_2F5B8 ;~ 20B8:044B
cs=0x20b8;eip=0x00044d; 	T(CMP(al, 0x0C0));	// 104472                  cmp     al, 0C0h ;~ 20B8:044D
cs=0x20b8;eip=0x00044f; 	J(JNZ(loc_2f5b8));	// 104473                  jnz     short loc_2F5B8 ;~ 20B8:044F
cs=0x20b8;eip=0x000451; 	T(al = 1;);	// 104474                  mov     al, 1 ;~ 20B8:0451
cs=0x20b8;eip=0x000453; 	X(POP(ds));	// 104475                  pop     ds ;~ 20B8:0453
cs=0x20b8;eip=0x000454; 	X(POP(dx));	// 104477                  pop     dx ;~ 20B8:0454
cs=0x20b8;eip=0x000455; 	X(POP(cx));	// 104478                  pop     cx ;~ 20B8:0455
cs=0x20b8;eip=0x000456; 	X(POP(bx));	// 104479                  pop     bx ;~ 20B8:0456
cs=0x20b8;eip=0x000457; 	J(RETN(0));	// 104480                  retn ;~ 20B8:0457
loc_2f5b8:
	// 6623 
cs=0x20b8;eip=0x000458; 	T(XOR(al, al));	// 104485                  xor     al, al ;~ 20B8:0458
cs=0x20b8;eip=0x00045a; 	X(POP(ds));	// 104486                  pop     ds ;~ 20B8:045A
cs=0x20b8;eip=0x00045b; 	X(POP(dx));	// 104488                  pop     dx ;~ 20B8:045B
cs=0x20b8;eip=0x00045c; 	X(POP(cx));	// 104489                  pop     cx ;~ 20B8:045C
cs=0x20b8;eip=0x00045d; 	X(POP(bx));	// 104490                  pop     bx ;~ 20B8:045D
cs=0x20b8;eip=0x00045e; 	J(RETN(0));	// 104491                  retn ;~ 20B8:045E

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
cs=0x20b8;eip=0x00045f; 	X(PUSH(dx));	// 104501                  push    dx ;~ 20B8:045F
cs=0x20b8;eip=0x000460; 	T(dx = *(dw*)(((db*)&seg_2f16f)+1););	// 104502                  mov     dx, seg_2F16F+1 ;~ 20B8:0460
cs=0x20b8;eip=0x000464; 	S(OUT(dx, al));	// 104503                  out     dx, al ;~ 20B8:0464
cs=0x20b8;eip=0x000465; 	S(IN(al, dx));	// 104504                  in      al, dx ;~ 20B8:0465
cs=0x20b8;eip=0x000466; 	S(IN(al, dx));	// 104505                  in      al, dx ;~ 20B8:0466
cs=0x20b8;eip=0x000467; 	S(IN(al, dx));	// 104506                  in      al, dx ;~ 20B8:0467
cs=0x20b8;eip=0x000468; 	S(IN(al, dx));	// 104507                  in      al, dx ;~ 20B8:0468
cs=0x20b8;eip=0x000469; 	S(IN(al, dx));	// 104508                  in      al, dx ;~ 20B8:0469
cs=0x20b8;eip=0x00046a; 	S(IN(al, dx));	// 104509                  in      al, dx ;~ 20B8:046A
cs=0x20b8;eip=0x00046b; 	T(al = ah;);	// 104510                  mov     al, ah ;~ 20B8:046B
cs=0x20b8;eip=0x00046d; 	T(INC(dx));	// 104511                  inc     dx ;~ 20B8:046D
cs=0x20b8;eip=0x00046e; 	S(OUT(dx, al));	// 104512                  out     dx, al ;~ 20B8:046E
cs=0x20b8;eip=0x00046f; 	S(IN(al, dx));	// 104513                  in      al, dx ;~ 20B8:046F
cs=0x20b8;eip=0x000470; 	S(IN(al, dx));	// 104514                  in      al, dx ;~ 20B8:0470
cs=0x20b8;eip=0x000471; 	S(IN(al, dx));	// 104515                  in      al, dx ;~ 20B8:0471
cs=0x20b8;eip=0x000472; 	S(IN(al, dx));	// 104516                  in      al, dx ;~ 20B8:0472
cs=0x20b8;eip=0x000473; 	S(IN(al, dx));	// 104517                  in      al, dx ;~ 20B8:0473
cs=0x20b8;eip=0x000474; 	S(IN(al, dx));	// 104518                  in      al, dx ;~ 20B8:0474
cs=0x20b8;eip=0x000475; 	S(IN(al, dx));	// 104519                  in      al, dx ;~ 20B8:0475
cs=0x20b8;eip=0x000476; 	S(IN(al, dx));	// 104520                  in      al, dx ;~ 20B8:0476
cs=0x20b8;eip=0x000477; 	S(IN(al, dx));	// 104521                  in      al, dx ;~ 20B8:0477
cs=0x20b8;eip=0x000478; 	S(IN(al, dx));	// 104522                  in      al, dx ;~ 20B8:0478
cs=0x20b8;eip=0x000479; 	S(IN(al, dx));	// 104523                  in      al, dx ;~ 20B8:0479
cs=0x20b8;eip=0x00047a; 	S(IN(al, dx));	// 104524                  in      al, dx ;~ 20B8:047A
cs=0x20b8;eip=0x00047b; 	S(IN(al, dx));	// 104525                  in      al, dx ;~ 20B8:047B
cs=0x20b8;eip=0x00047c; 	S(IN(al, dx));	// 104526                  in      al, dx ;~ 20B8:047C
cs=0x20b8;eip=0x00047d; 	S(IN(al, dx));	// 104527                  in      al, dx ;~ 20B8:047D
cs=0x20b8;eip=0x00047e; 	S(IN(al, dx));	// 104528                  in      al, dx ;~ 20B8:047E
cs=0x20b8;eip=0x00047f; 	S(IN(al, dx));	// 104529                  in      al, dx ;~ 20B8:047F
cs=0x20b8;eip=0x000480; 	S(IN(al, dx));	// 104530                  in      al, dx ;~ 20B8:0480
cs=0x20b8;eip=0x000481; 	S(IN(al, dx));	// 104531                  in      al, dx ;~ 20B8:0481
cs=0x20b8;eip=0x000482; 	S(IN(al, dx));	// 104532                  in      al, dx ;~ 20B8:0482
cs=0x20b8;eip=0x000483; 	S(IN(al, dx));	// 104533                  in      al, dx ;~ 20B8:0483
cs=0x20b8;eip=0x000484; 	S(IN(al, dx));	// 104534                  in      al, dx ;~ 20B8:0484
cs=0x20b8;eip=0x000485; 	S(IN(al, dx));	// 104535                  in      al, dx ;~ 20B8:0485
cs=0x20b8;eip=0x000486; 	S(IN(al, dx));	// 104536                  in      al, dx ;~ 20B8:0486
cs=0x20b8;eip=0x000487; 	S(IN(al, dx));	// 104537                  in      al, dx ;~ 20B8:0487
cs=0x20b8;eip=0x000488; 	S(IN(al, dx));	// 104538                  in      al, dx ;~ 20B8:0488
cs=0x20b8;eip=0x000489; 	S(IN(al, dx));	// 104539                  in      al, dx ;~ 20B8:0489
cs=0x20b8;eip=0x00048a; 	S(IN(al, dx));	// 104540                  in      al, dx ;~ 20B8:048A
cs=0x20b8;eip=0x00048b; 	S(IN(al, dx));	// 104541                  in      al, dx ;~ 20B8:048B
cs=0x20b8;eip=0x00048c; 	S(IN(al, dx));	// 104542                  in      al, dx ;~ 20B8:048C
cs=0x20b8;eip=0x00048d; 	S(IN(al, dx));	// 104543                  in      al, dx ;~ 20B8:048D
cs=0x20b8;eip=0x00048e; 	S(IN(al, dx));	// 104544                  in      al, dx ;~ 20B8:048E
cs=0x20b8;eip=0x00048f; 	S(IN(al, dx));	// 104545                  in      al, dx ;~ 20B8:048F
cs=0x20b8;eip=0x000490; 	S(IN(al, dx));	// 104546                  in      al, dx ;~ 20B8:0490
cs=0x20b8;eip=0x000491; 	S(IN(al, dx));	// 104547                  in      al, dx ;~ 20B8:0491
cs=0x20b8;eip=0x000492; 	X(POP(dx));	// 104548                  pop     dx ;~ 20B8:0492
cs=0x20b8;eip=0x000493; 	J(RETN(0));	// 104549                  retn ;~ 20B8:0493

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
cs=0x20b8;eip=0x000494; 	X(PUSH(dx));	// 104553                  push    dx ;~ 20B8:0494
cs=0x20b8;eip=0x000495; 	T(dx = *(dw*)(((db*)&seg_2f16f)+1););	// 104554                  mov     dx, seg_2F16F+1 ;~ 20B8:0495
cs=0x20b8;eip=0x000499; 	S(IN(al, dx));	// 104555                  in      al, dx ;~ 20B8:0499
cs=0x20b8;eip=0x00049a; 	X(POP(dx));	// 104556                  pop     dx ;~ 20B8:049A
cs=0x20b8;eip=0x00049b; 	J(RETN(0));	// 104557                  retn ;~ 20B8:049B
ret_20b8_69b:
	// 6624 
cs=0x20b8;eip=0x00069b; 	J(IRET);	// 105044                  iret ;~ 20B8:069B
ret_20b8_8bc:
	// 6625 
cs=0x20b8;eip=0x0008bc; __disp=unk_38308;
	J(return __dispatch_call(__disp, _state););	// 105590                  jmp     near ptr unk_38308 ;~ 20B8:08BC
ret_20b8_a0c:
	// 6626 
cs=0x20b8;eip=0x000a0c; 	J(RETN(0));	// 105895                  retn ;~ 20B8:0A0C
ret_20b8_adc:
	// 6627 
cs=0x20b8;eip=0x000adc; 	J(RETN(0));	// 106105                  retn ;~ 20B8:0ADC
ret_20b8_12bd:
	// 6628 
cs=0x20b8;eip=0x0012bd; 	T(SHL(bl, 0x18));	// 108103                  shl     bl, 18h ;~ 20B8:12BD
cs=0x20b8;eip=0x0012c0; __disp=unk_38c3e;
	J(return __dispatch_call(__disp, _state););	// 108104                  jmp     near ptr unk_38C3E ;~ 20B8:12C0
ret_20b8_1442:
	// 6629 
cs=0x20b8;eip=0x001442; 	T(LODSW);	// 108485                  lodsw ;~ 20B8:1442
cs=0x20b8;eip=0x001443; __disp=unk_38aa6;
	J(return __dispatch_call(__disp, _state););	// 108486                  jmp     near ptr unk_38AA6 ;~ 20B8:1443

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kret_20b8_12bd: 	goto ret_20b8_12bd;
        case m2c::kret_20b8_1442: 	goto ret_20b8_1442;
        case m2c::kret_20b8_69b: 	goto ret_20b8_69b;
        case m2c::kret_20b8_8bc: 	goto ret_20b8_8bc;
        case m2c::kret_20b8_a0c: 	goto ret_20b8_a0c;
        case m2c::kret_20b8_adc: 	goto ret_20b8_adc;
        case m2c::kseg008_494_proc: 	goto seg008_494_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}


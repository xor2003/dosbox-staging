/* THIS IS GENERATED FILE */

        
#include "cfix.exe.h"

                

 bool sub_4a470(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_4a470:
    _begin:
cs=0x3be8;eip=0x000010; 	T(NOP);	// 214729                  nop ;~ 3BE8:0010
cs=0x3be8;eip=0x000011; 	T(NOP);	// 214730                  nop ;~ 3BE8:0011
cs=0x3be8;eip=0x000012; 	X(PUSH(ds));	// 214731                  push    ds ;~ 3BE8:0012
cs=0x3be8;eip=0x000013; 	T(ax = cs;);	// 214732                  mov     ax, cs ;~ 3BE8:0013
cs=0x3be8;eip=0x000015; 	T(ds = ax;);	// 214733                  mov     ds, ax ;~ 3BE8:0015
cs=0x3be8;eip=0x000017; 	T(si = 0x0E5D;);	// 214735                  mov     si, 0E5Dh ;~ 3BE8:0017
cs=0x3be8;eip=0x00001a; 	T(cx = 0x10;);	// 214736                  mov     cx, 10h ;~ 3BE8:001A
	// 214737                  rep movsw ;~ 3BE8:001D
cs=0x3be8;eip=0x00001d; 	X(	REP MOVSW);	// 214737                  rep movsw ;~ 3BE8:001D
cs=0x3be8;eip=0x00001f; 	X(POP(ds));	// 214738                  pop     ds ;~ 3BE8:001F
cs=0x3be8;eip=0x000020; 	T(bx = 0x27;);	// 214740                  mov     bx, 27h ; ''' ;~ 3BE8:0020
cs=0x3be8;eip=0x000023; 	T(ax = 0x2C;);	// 214741                  mov     ax, 2Ch ; ',' ;~ 3BE8:0023
cs=0x3be8;eip=0x000026; 	J(RETF(0));	// 214742                  retf ;~ 3BE8:0026

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_4a470: 	goto sub_4a470;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_4a487(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_4a487:
    _begin:
cs=0x3be8;eip=0x000027; 	J(CALL(__dispatch_call,word_1f8fc));	// 214751                  call    ds:word_1F8FC ;~ 3BE8:0027
cs=0x3be8;eip=0x00002b; 	J(RETF(0));	// 214752                  retf ;~ 3BE8:002B

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_4a487: 	goto sub_4a487;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg015_9d_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg015_9d_proc:
    _begin:
cs=0x3be8;eip=0x00009d; 	T(ax = 0x3E00;);	// 214870                  mov     ax, 3E00h ;~ 3BE8:009D
cs=0x3be8;eip=0x0000a0; 	T(MOV(al, *(raddr(ss,bp+0x0E))));	// 214871                  mov     al, [bp+0Eh] ;~ 3BE8:00A0
cs=0x3be8;eip=0x0000a3; 	T(OR(al, al));	// 214872                  or      al, al ;~ 3BE8:00A3
cs=0x3be8;eip=0x0000a5; 	J(JNZ(loc_4a50a));	// 214873                  jnz     short loc_4A50A ;~ 3BE8:00A5
cs=0x3be8;eip=0x0000a7; 	J(JMP(locret_4a5b7));	// 214874                  jmp     locret_4A5B7 ;~ 3BE8:00A7
loc_4a50a:
	// 6630 
cs=0x3be8;eip=0x0000aa; 	T(CMP(al, 2));	// 214878                  cmp     al, 2 ;~ 3BE8:00AA
cs=0x3be8;eip=0x0000ac; 	J(JZ(loc_4a561));	// 214879                  jz      short loc_4A561 ;~ 3BE8:00AC
cs=0x3be8;eip=0x0000ae; 	X(PUSH(si));	// 214880                  push    si ;~ 3BE8:00AE
cs=0x3be8;eip=0x0000af; 	T(ax = 0x40;);	// 214881                  mov     ax, 40h ; '@' ;~ 3BE8:00AF
cs=0x3be8;eip=0x0000b2; 	T(si = 0x24;);	// 214882                  mov     si, 24h ; '$' ;~ 3BE8:00B2
cs=0x3be8;eip=0x0000b5; 	T(ADD(si, word_1f226));	// 214883                  add     si, word_1F226 ;~ 3BE8:00B5
cs=0x3be8;eip=0x0000b9; 	T(MOV(si, *(dw*)(raddr(ss,si))));	// 214884                  mov     si, ss:[si] ;~ 3BE8:00B9
cs=0x3be8;eip=0x0000bc; 	X(word_1f902 = si;);	// 214885                  mov     ds:word_1F902, si ;~ 3BE8:00BC
cs=0x3be8;eip=0x0000c0; 	J(CALL(__dispatch_call,off_1f8fe));	// 214886                  call    ds:off_1F8FE ;~ 3BE8:00C0
cs=0x3be8;eip=0x0000c4; 	T(MOV(si, *(dw*)(raddr(ds,bp+0x0A))));	// 214887                  mov     si, ds:[bp+0Ah] ;~ 3BE8:00C4
cs=0x3be8;eip=0x0000c8; 	X(LODS(*(raddr(cs,si)),si,1));	// 214888                  lods    byte ptr cs:[si] ;~ 3BE8:00C8
cs=0x3be8;eip=0x0000ca; 	X(MOV(*(dw*)(raddr(ds,bp+0x0A)), si));	// 214889                  mov     ds:[bp+0Ah], si ;~ 3BE8:00CA
cs=0x3be8;eip=0x0000ce; 	X(POP(si));	// 214890                  pop     si ;~ 3BE8:00CE
cs=0x3be8;eip=0x0000cf; 	T(CMP(al, 0x81));	// 214891                  cmp     al, 81h ;~ 3BE8:00CF
cs=0x3be8;eip=0x0000d1; 	J(JNZ(loc_4a536));	// 214892                  jnz     short loc_4A536 ;~ 3BE8:00D1
cs=0x3be8;eip=0x0000d3; 	J(JMP(locret_4a5b7));	// 214893                  jmp     locret_4A5B7 ;~ 3BE8:00D3
loc_4a536:
	// 6631 
cs=0x3be8;eip=0x0000d6; 	T(CMP(al, 0x80));	// 214897                  cmp     al, 80h ;~ 3BE8:00D6
cs=0x3be8;eip=0x0000d8; 	J(JNZ(loc_4a54f));	// 214898                  jnz     short loc_4A54F ;~ 3BE8:00D8
cs=0x3be8;eip=0x0000da; 	X(MOV(*(raddr(ds,bx)), 0));	// 214899                  mov     byte ptr [bx], 0 ;~ 3BE8:00DA
cs=0x3be8;eip=0x0000dd; 	X(INC(*(raddr(ds,bx+3))));	// 214900                  inc     byte ptr [bx+3] ;~ 3BE8:00DD
cs=0x3be8;eip=0x0000e0; 	T(TEST(*(raddr(ds,di+0x0F)), 1));	// 214901                  test    byte ptr [di+0Fh], 1 ;~ 3BE8:00E0
cs=0x3be8;eip=0x0000e4; 	X(PUSHF);	// 214902                  pushf ;~ 3BE8:00E4
cs=0x3be8;eip=0x0000e5; 	X(AND(*(raddr(ds,di+0x0F)), 0x0FE));	// 214903                  and     byte ptr [di+0Fh], 0FEh ;~ 3BE8:00E5
cs=0x3be8;eip=0x0000e9; 	X(POPF);	// 214904                  popf ;~ 3BE8:00E9
cs=0x3be8;eip=0x0000ea; 	X(MOV(*(raddr(ds,si)), 1));	// 214905                  mov     byte ptr [si], 1 ;~ 3BE8:00EA
cs=0x3be8;eip=0x0000ed; 	J(JMP(loc_4a55f));	// 214906                  jmp     short loc_4A55F ;~ 3BE8:00ED
loc_4a54f:
	// 6632 
cs=0x3be8;eip=0x0000ef; 	X(MOV(*(raddr(ds,si)), 3));	// 214910                  mov     byte ptr [si], 3 ;~ 3BE8:00EF
cs=0x3be8;eip=0x0000f2; 	T(TEST(*(raddr(ds,si+0x0D)), 1));	// 214911                  test    byte ptr [si+0Dh], 1 ;~ 3BE8:00F2
cs=0x3be8;eip=0x0000f6; 	X(PUSHF);	// 214912                  pushf ;~ 3BE8:00F6
cs=0x3be8;eip=0x0000f7; 	X(OR(*(raddr(ds,si+0x0D)), 1));	// 214913                  or      byte ptr [si+0Dh], 1 ;~ 3BE8:00F7
cs=0x3be8;eip=0x0000fb; 	X(POPF);	// 214914                  popf ;~ 3BE8:00FB
cs=0x3be8;eip=0x0000fc; 	X(MOV(*(raddr(ds,si+0x0C)), al));	// 214915                  mov     [si+0Ch], al ;~ 3BE8:00FC
loc_4a55f:
	// 6633 
cs=0x3be8;eip=0x0000ff; 	J(JMP(locret_4a5b7));	// 214918                  jmp     short locret_4A5B7 ;~ 3BE8:00FF
loc_4a561:
	// 6634 
cs=0x3be8;eip=0x000101; 	X(MOV(*(raddr(ds,si)), 3));	// 214922                  mov     byte ptr [si], 3 ;~ 3BE8:0101
cs=0x3be8;eip=0x000104; 	X(MOV(*(raddr(ds,bp+0x0E)), 0));	// 214923                  mov     byte ptr ds:[bp+0Eh], 0 ;~ 3BE8:0104
cs=0x3be8;eip=0x000109; 	X(MOV(*(dw*)(raddr(ds,bp+0x0A)), 0));	// 214924                  mov     word ptr ds:[bp+0Ah], 0 ;~ 3BE8:0109
cs=0x3be8;eip=0x00010f; 	T(TEST(*(raddr(ds,di+0x0F)), 8));	// 214925                  test    byte ptr [di+0Fh], 8 ;~ 3BE8:010F
cs=0x3be8;eip=0x000113; 	X(PUSHF);	// 214926                  pushf ;~ 3BE8:0113
cs=0x3be8;eip=0x000114; 	X(AND(*(raddr(ds,di+0x0F)), 0x0F7));	// 214927                  and     byte ptr [di+0Fh], 0F7h ;~ 3BE8:0114
cs=0x3be8;eip=0x000118; 	X(POPF);	// 214928                  popf ;~ 3BE8:0118
cs=0x3be8;eip=0x000119; 	J(CALL(sub_4a852,0));	// 214929                  call    sub_4A852 ;~ 3BE8:0119
cs=0x3be8;eip=0x00011c; 	T(CMP(*(raddr(ds,bp+8)), 0));	// 214930                  cmp     byte ptr ds:[bp+8], 0 ;~ 3BE8:011C
cs=0x3be8;eip=0x000121; 	J(JNZ(loc_4a5a5));	// 214931                  jnz     short loc_4A5A5 ;~ 3BE8:0121
cs=0x3be8;eip=0x000123; 	T(MOV(al, *(raddr(ds,bp+9))));	// 214932                  mov     al, ds:[bp+9] ;~ 3BE8:0123
cs=0x3be8;eip=0x000127; 	X(MOV(*(raddr(ds,bp+8)), al));	// 214933                  mov     ds:[bp+8], al ;~ 3BE8:0127
cs=0x3be8;eip=0x00012b; 	T(al = 1;);	// 214934                  mov     al, 1 ;~ 3BE8:012B
cs=0x3be8;eip=0x00012d; 	X(MOV(*(raddr(ds,si)), al));	// 214935                  mov     [si], al ;~ 3BE8:012D
cs=0x3be8;eip=0x00012f; 	T(ax = 0x0DB3;);	// 214936                  mov     ax, 0DB3h ;~ 3BE8:012F
cs=0x3be8;eip=0x000132; 	X(MOV(*(dw*)(raddr(ds,bp+0x0A)), ax));	// 214937                  mov     ds:[bp+0Ah], ax ;~ 3BE8:0132
cs=0x3be8;eip=0x000136; 	T(si = 0x2DD;);	// 214938                  mov     si, 2DDh ;~ 3BE8:0136
cs=0x3be8;eip=0x000139; 	T(TEST(*(raddr(ds,di+0x0F)), 8));	// 214939                  test    byte ptr [di+0Fh], 8 ;~ 3BE8:0139
cs=0x3be8;eip=0x00013d; 	X(PUSHF);	// 214940                  pushf ;~ 3BE8:013D
cs=0x3be8;eip=0x00013e; 	X(OR(*(raddr(ds,di+0x0F)), 8));	// 214941                  or      byte ptr [di+0Fh], 8 ;~ 3BE8:013E
cs=0x3be8;eip=0x000142; 	X(POPF);	// 214942                  popf ;~ 3BE8:0142
cs=0x3be8;eip=0x000143; 	J(JMP(loc_4a5a8));	// 214943                  jmp     short loc_4A5A8 ;~ 3BE8:0143
loc_4a5a5:
	// 6635 
cs=0x3be8;eip=0x000145; 	T(si = 0x2D5;);	// 214947                  mov     si, 2D5h ;~ 3BE8:0145
loc_4a5a8:
	// 6636 
cs=0x3be8;eip=0x000148; 	T(dl = ch;);	// 214950                  mov     dl, ch ;~ 3BE8:0148
cs=0x3be8;eip=0x00014a; 	T(XOR(dh, dh));	// 214951                  xor     dh, dh ;~ 3BE8:014A
cs=0x3be8;eip=0x00014c; 	T(ADD(si, dx));	// 214952                  add     si, dx ;~ 3BE8:014C
cs=0x3be8;eip=0x00014e; 	T(MOV(al, *(raddr(cs,si))));	// 214953                  mov     al, cs:[si] ;~ 3BE8:014E
cs=0x3be8;eip=0x000151; 	X(MOV(*(raddr(ds,bx+3)), al));	// 214954                  mov     [bx+3], al ;~ 3BE8:0151
cs=0x3be8;eip=0x000154; 	X(MOV(*(raddr(ds,bx)), 0));	// 214955                  mov     byte ptr [bx], 0 ;~ 3BE8:0154
locret_4a5b7:
	// 6637 
cs=0x3be8;eip=0x000157; 	J(RETN(0));	// 214959                  retn ;~ 3BE8:0157
ret_3be8_158:
	// 6638 
cs=0x3be8;eip=0x000158; 	T(CMP(al, *(raddr(ds,bx+si))));	// 214961                  cmp     al, [bx+si] ;~ 3BE8:0158
cs=0x3be8;eip=0x00015a; 	T(si = 0x2E5;);	// 214962                  mov     si, 2E5h ;~ 3BE8:015A
cs=0x3be8;eip=0x00015d; 	T(ax = cs;);	// 214963                  mov     ax, cs ;~ 3BE8:015D
cs=0x3be8;eip=0x00015f; 	T(es = ax;);	// 214964                  mov     es, ax ;~ 3BE8:015F
cs=0x3be8;eip=0x000161; 	J(CALL(sub_4a7da,0));	// 214966                  call    sub_4A7DA ;~ 3BE8:0161
cs=0x3be8;eip=0x000164; 	T(CMP(*(raddr(ds,bp+9)), 0));	// 214967                  cmp     byte ptr ds:[bp+9], 0 ;~ 3BE8:0164
cs=0x3be8;eip=0x000169; 	J(JNZ(locret_4a5f1));	// 214968                  jnz     short locret_4A5F1 ;~ 3BE8:0169
cs=0x3be8;eip=0x00016b; 	T(MOV(al, *(raddr(ds,bp+0x0A))));	// 214969                  mov     al, ds:[bp+0Ah] ;~ 3BE8:016B
cs=0x3be8;eip=0x00016f; 	X(MOV(*(raddr(ds,bp+9)), al));	// 214970                  mov     ds:[bp+9], al ;~ 3BE8:016F
cs=0x3be8;eip=0x000173; 	T(OR(cl, cl));	// 214971                  or      cl, cl ;~ 3BE8:0173
cs=0x3be8;eip=0x000175; 	J(JS(locret_4a5f1));	// 214972                  js      short locret_4A5F1 ;~ 3BE8:0175
cs=0x3be8;eip=0x000177; 	X(PUSH(si));	// 214973                  push    si ;~ 3BE8:0177
cs=0x3be8;eip=0x000178; 	T(ax = 0x23;);	// 214974                  mov     ax, 23h ; '#' ;~ 3BE8:0178
cs=0x3be8;eip=0x00017b; 	T(si = 0x24;);	// 214975                  mov     si, 24h ; '$' ;~ 3BE8:017B
cs=0x3be8;eip=0x00017e; 	T(ADD(si, word_1f226));	// 214976                  add     si, word_1F226 ;~ 3BE8:017E
cs=0x3be8;eip=0x000182; 	T(MOV(si, *(dw*)(raddr(ss,si))));	// 214977                  mov     si, ss:[si] ;~ 3BE8:0182
cs=0x3be8;eip=0x000185; 	X(word_1f902 = si;);	// 214978                  mov     ds:word_1F902, si ;~ 3BE8:0185
cs=0x3be8;eip=0x000189; 	J(CALL(__dispatch_call,off_1f8fe));	// 214979                  call    ds:off_1F8FE ;~ 3BE8:0189
cs=0x3be8;eip=0x00018d; 	X(POP(si));	// 214980                  pop     si ;~ 3BE8:018D
cs=0x3be8;eip=0x00018e; 	J(CALL(sub_4a76b,0));	// 214981                  call    sub_4A76B ;~ 3BE8:018E
locret_4a5f1:
	// 6639 
cs=0x3be8;eip=0x000191; 	J(RETN(0));	// 214985                  retn ;~ 3BE8:0191

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_4a50a: 	goto loc_4a50a;
        case m2c::kloc_4a536: 	goto loc_4a536;
        case m2c::kloc_4a54f: 	goto loc_4a54f;
        case m2c::kloc_4a55f: 	goto loc_4a55f;
        case m2c::kloc_4a561: 	goto loc_4a561;
        case m2c::kloc_4a5a5: 	goto loc_4a5a5;
        case m2c::kloc_4a5a8: 	goto loc_4a5a8;
        case m2c::klocret_4a5b7: 	goto locret_4a5b7;
        case m2c::klocret_4a5f1: 	goto locret_4a5f1;
        case m2c::kret_3be8_158: 	goto ret_3be8_158;
        case m2c::kseg015_9d_proc: 	goto seg015_9d_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool nullsub_4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    nullsub_4:
    _begin:
cs=0x3be8;eip=0x0001a1; 	J(RETN(0));	// 215007                  retn ;~ 3BE8:01A1

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::knullsub_4: 	goto nullsub_4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg015_1a6_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg015_1a6_proc:
    _begin:
cs=0x3be8;eip=0x0001a6; 	T(si = 0x305;);	// 215016                  mov     si, 305h ;~ 3BE8:01A6
cs=0x3be8;eip=0x0001a9; 	T(XOR(ah, ah));	// 215017                  xor     ah, ah ;~ 3BE8:01A9
cs=0x3be8;eip=0x0001ab; 	T(MOV(al, *(raddr(ds,bp+8))));	// 215018                  mov     al, ds:[bp+8] ;~ 3BE8:01AB
cs=0x3be8;eip=0x0001af; 	T(OR(al, al));	// 215019                  or      al, al ;~ 3BE8:01AF
cs=0x3be8;eip=0x0001b1; 	J(JNS(loc_4a62c));	// 215020                  jns     short loc_4A62C ;~ 3BE8:01B1
cs=0x3be8;eip=0x0001b3; 	T(XOR(ax, ax));	// 215021                  xor     ax, ax ;~ 3BE8:01B3
cs=0x3be8;eip=0x0001b5; 	T(dx = 2;);	// 215022                  mov     dx, 2 ;~ 3BE8:01B5
cs=0x3be8;eip=0x0001b8; 	X(PUSH(si));	// 215023                  push    si ;~ 3BE8:01B8
cs=0x3be8;eip=0x0001b9; 	T(si = 0x20;);	// 215024                  mov     si, 20h ; ' ' ;~ 3BE8:01B9
cs=0x3be8;eip=0x0001bc; 	T(ADD(si, word_1f226));	// 215025                  add     si, word_1F226 ;~ 3BE8:01BC
cs=0x3be8;eip=0x0001c0; 	T(MOV(si, *(dw*)(raddr(ss,si))));	// 215026                  mov     si, ss:[si] ;~ 3BE8:01C0
cs=0x3be8;eip=0x0001c3; 	X(word_1f902 = si;);	// 215027                  mov     ds:word_1F902, si ;~ 3BE8:01C3
cs=0x3be8;eip=0x0001c7; 	J(CALL(__dispatch_call,off_1f8fe));	// 215028                  call    ds:off_1F8FE ;~ 3BE8:01C7
cs=0x3be8;eip=0x0001cb; 	X(POP(si));	// 215029                  pop     si ;~ 3BE8:01CB
loc_4a62c:
	// 6640 
cs=0x3be8;eip=0x0001cc; 	T(ADD(ax, ax));	// 215032                  add     ax, ax ;~ 3BE8:01CC
cs=0x3be8;eip=0x0001ce; 	T(ADD(si, ax));	// 215033                  add     si, ax ;~ 3BE8:01CE
cs=0x3be8;eip=0x0001d0; 	T(MOV(al, *(raddr(ds,di+0x0E))));	// 215034                  mov     al, [di+0Eh] ;~ 3BE8:01D0
cs=0x3be8;eip=0x0001d3; 	T(ADD(di, ax));	// 215035                  add     di, ax ;~ 3BE8:01D3
cs=0x3be8;eip=0x0001d5; 	T(MOV(ax, *(dw*)(raddr(cs,si))));	// 215036                  mov     ax, cs:[si] ;~ 3BE8:01D5
cs=0x3be8;eip=0x0001d8; 	X(MOV(*(raddr(ds,di+3)), al));	// 215037                  mov     [di+3], al ;~ 3BE8:01D8
cs=0x3be8;eip=0x0001db; 	X(MOV(*(raddr(ds,bp+9)), ah));	// 215038                  mov     ds:[bp+9], ah ;~ 3BE8:01DB
cs=0x3be8;eip=0x0001df; 	J(RETN(0));	// 215039                  retn ;~ 3BE8:01DF

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_4a62c: 	goto loc_4a62c;
        case m2c::kseg015_1a6_proc: 	goto seg015_1a6_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_4a668(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_4a668:
    _begin:
cs=0x3be8;eip=0x000208; 	T(si = 0x2FD;);	// 215086                  mov     si, 2FDh ;~ 3BE8:0208
cs=0x3be8;eip=0x00020b; 	T(ax = cs;);	// 215087                  mov     ax, cs ;~ 3BE8:020B
cs=0x3be8;eip=0x00020d; 	T(es = ax;);	// 215088                  mov     es, ax ;~ 3BE8:020D
cs=0x3be8;eip=0x00020f; 	J(return sub_4a7da(0, _state););	// 215089                  jmp     sub_4A7DA ;~ 3BE8:020F

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_4a668: 	goto sub_4a668;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg015_217_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg015_217_proc:
    _begin:
cs=0x3be8;eip=0x000217; 	J(CALL(sub_4a800,0));	// 215099                  call    sub_4A800 ;~ 3BE8:0217
cs=0x3be8;eip=0x00021a; 	T(cx = 0x52;);	// 215100                  mov     cx, 52h ; 'R' ;~ 3BE8:021A
cs=0x3be8;eip=0x00021d; 	J(CALL(sub_4a915,0));	// 215101                  call    sub_4A915 ;~ 3BE8:021D
cs=0x3be8;eip=0x000220; 	J(JZ(loc_4a687));	// 215102                  jz      short loc_4A687 ;~ 3BE8:0220
cs=0x3be8;eip=0x000222; 	J(CALL(sub_4a876,0));	// 215103                  call    sub_4A876 ;~ 3BE8:0222
cs=0x3be8;eip=0x000225; 	J(JMP(loc_4a68a));	// 215104                  jmp     short loc_4A68A ;~ 3BE8:0225
loc_4a687:
	// 6641 
cs=0x3be8;eip=0x000227; 	J(CALL(sub_4a867,0));	// 215108                  call    sub_4A867 ;~ 3BE8:0227
loc_4a68a:
	// 6642 
cs=0x3be8;eip=0x00022a; 	X(PUSH(si));	// 215111                  push    si ;~ 3BE8:022A
cs=0x3be8;eip=0x00022b; 	T(ax = cs;);	// 215112                  mov     ax, cs ;~ 3BE8:022B
cs=0x3be8;eip=0x00022d; 	T(es = ax;);	// 215113                  mov     es, ax ;~ 3BE8:022D
cs=0x3be8;eip=0x00022f; 	T(ax = 0x2F5;);	// 215114                  mov     ax, 2F5h ;~ 3BE8:022F
cs=0x3be8;eip=0x000232; 	J(CALL(sub_4a7e0,0));	// 215115                  call    sub_4A7E0 ;~ 3BE8:0232
cs=0x3be8;eip=0x000235; 	X(POP(si));	// 215116                  pop     si ;~ 3BE8:0235
cs=0x3be8;eip=0x000236; 	T(CMP(*(raddr(ds,bp+0x0B)), 0));	// 215117                  cmp     byte ptr ds:[bp+0Bh], 0 ;~ 3BE8:0236
cs=0x3be8;eip=0x00023b; 	J(JNZ(loc_4a6b8));	// 215118                  jnz     short loc_4A6B8 ;~ 3BE8:023B
cs=0x3be8;eip=0x00023d; 	T(CMP(*(raddr(ds,bp+9)), 0));	// 215119                  cmp     byte ptr ds:[bp+9], 0 ;~ 3BE8:023D
cs=0x3be8;eip=0x000242; 	J(JNZ(locret_4a6b7));	// 215120                  jnz     short locret_4A6B7 ;~ 3BE8:0242
cs=0x3be8;eip=0x000244; 	T(MOV(al, *(raddr(ds,bp+0x0C))));	// 215121                  mov     al, ds:[bp+0Ch] ;~ 3BE8:0244
cs=0x3be8;eip=0x000248; 	X(MOV(*(raddr(ds,bp+0x0B)), al));	// 215122                  mov     ds:[bp+0Bh], al ;~ 3BE8:0248
cs=0x3be8;eip=0x00024c; 	T(MOV(al, *(raddr(ds,si+6))));	// 215123                  mov     al, [si+6] ;~ 3BE8:024C
cs=0x3be8;eip=0x00024f; 	T(ADD(al, al));	// 215124                  add     al, al ;~ 3BE8:024F
cs=0x3be8;eip=0x000251; 	X(MOV(*(raddr(ds,si+6)), al));	// 215125                  mov     [si+6], al ;~ 3BE8:0251
cs=0x3be8;eip=0x000254; 	X(MOV(*(raddr(ds,si+7)), al));	// 215126                  mov     [si+7], al ;~ 3BE8:0254
locret_4a6b7:
	// 6643 
cs=0x3be8;eip=0x000257; 	J(RETN(0));	// 215130                  retn ;~ 3BE8:0257
loc_4a6b8:
	// 6644 
cs=0x3be8;eip=0x000258; 	X(DEC(*(raddr(ds,bp+0x0B))));	// 215134                  dec     byte ptr ds:[bp+0Bh] ;~ 3BE8:0258
cs=0x3be8;eip=0x00025c; 	J(JNZ(locret_4a6b7));	// 215135                  jnz     short locret_4A6B7 ;~ 3BE8:025C
cs=0x3be8;eip=0x00025e; 	T(MOV(al, *(raddr(ds,bp+0x0D))));	// 215136                  mov     al, ds:[bp+0Dh] ;~ 3BE8:025E
cs=0x3be8;eip=0x000262; 	X(MOV(*(raddr(ds,si+6)), al));	// 215137                  mov     [si+6], al ;~ 3BE8:0262
cs=0x3be8;eip=0x000265; 	T(MOV(al, *(raddr(ds,bp+0x0D))));	// 215138                  mov     al, ds:[bp+0Dh] ;~ 3BE8:0265
cs=0x3be8;eip=0x000269; 	X(MOV(*(raddr(ds,si+7)), al));	// 215139                  mov     [si+7], al ;~ 3BE8:0269
cs=0x3be8;eip=0x00026c; 	T(MOV(al, *(raddr(ds,bp+0x0A))));	// 215140                  mov     al, ds:[bp+0Ah] ;~ 3BE8:026C
cs=0x3be8;eip=0x000270; 	X(MOV(*(raddr(ds,bp+9)), al));	// 215141                  mov     ds:[bp+9], al ;~ 3BE8:0270
cs=0x3be8;eip=0x000274; 	J(JMP(locret_4a6b7));	// 215142                  jmp     short locret_4A6B7 ;~ 3BE8:0274

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_4a687: 	goto loc_4a687;
        case m2c::kloc_4a68a: 	goto loc_4a68a;
        case m2c::kloc_4a6b8: 	goto loc_4a6b8;
        case m2c::klocret_4a6b7: 	goto locret_4a6b7;
        case m2c::kseg015_217_proc: 	goto seg015_217_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_4a6d8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_4a6d8:
    _begin:
cs=0x3be8;eip=0x000278; 	J(CALL(sub_4a800,0));	// 215151                  call    sub_4A800 ;~ 3BE8:0278
cs=0x3be8;eip=0x00027b; 	J(CALL(sub_4a867,0));	// 215152                  call    sub_4A867 ;~ 3BE8:027B
cs=0x3be8;eip=0x00027e; 	J(RETN(0));	// 215153                  retn ;~ 3BE8:027E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_4a6d8: 	goto sub_4a6d8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool nullsub_3(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    nullsub_3:
    _begin:
cs=0x3be8;eip=0x000281; 	J(RETN(0));	// 215164                  retn ;~ 3BE8:0281

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::knullsub_3: 	goto nullsub_3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_4a76b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_4a76b:
    _begin:
cs=0x3be8;eip=0x00030b; 	X(PUSH(si));	// 215310                  push    si ;~ 3BE8:030B
cs=0x3be8;eip=0x00030c; 	X(PUSH(di));	// 215311                  push    di ;~ 3BE8:030C
cs=0x3be8;eip=0x00030d; 	X(PUSH(bp));	// 215312                  push    bp ;~ 3BE8:030D
cs=0x3be8;eip=0x00030e; 	X(PUSH(bx));	// 215313                  push    bx ;~ 3BE8:030E
cs=0x3be8;eip=0x00030f; 	X(word_1f20c = di;);	// 215314                  mov     word_1F20C, di ;~ 3BE8:030F
cs=0x3be8;eip=0x000313; 	T(MOV(dx, *(dw*)(raddr(ds,bp+2))));	// 215315                  mov     dx, ds:[bp+2] ;~ 3BE8:0313
cs=0x3be8;eip=0x000317; 	T(XCHG(dl, dh));	// 215316                  xchg    dl, dh ;~ 3BE8:0317
cs=0x3be8;eip=0x000319; 	X(word_1f6ee = dx;);	// 215317                  mov     ds:word_1F6EE, dx ;~ 3BE8:0319
cs=0x3be8;eip=0x00031d; 	T(ax = 4;);	// 215318                  mov     ax, 4 ;~ 3BE8:031D
cs=0x3be8;eip=0x000320; 	T(ADD(ax, word_1f226));	// 215319                  add     ax, word_1F226 ;~ 3BE8:0320
cs=0x3be8;eip=0x000324; 	X(PUSH(si));	// 215320                  push    si ;~ 3BE8:0324
cs=0x3be8;eip=0x000325; 	T(si = ax;);	// 215321                  mov     si, ax ;~ 3BE8:0325
cs=0x3be8;eip=0x000327; 	T(MOV(ax, *(dw*)(raddr(ss,si))));	// 215322                  mov     ax, ss:[si] ;~ 3BE8:0327
cs=0x3be8;eip=0x00032a; 	X(POP(si));	// 215323                  pop     si ;~ 3BE8:032A
cs=0x3be8;eip=0x00032b; 	X(word_1f902 = ax;);	// 215324                  mov     ds:word_1F902, ax ;~ 3BE8:032B
cs=0x3be8;eip=0x00032e; 	J(CALL(__dispatch_call,off_1f8fe));	// 215325                  call    ds:off_1F8FE ;~ 3BE8:032E
cs=0x3be8;eip=0x000332; 	T(bp = di;);	// 215326                  mov     bp, di ;~ 3BE8:0332
cs=0x3be8;eip=0x000334; 	T(si = 0x0E11;);	// 215327                  mov     si, 0E11h ;~ 3BE8:0334
cs=0x3be8;eip=0x000337; 	T(CMP(cl, 0x0F));	// 215328                  cmp     cl, 0Fh ;~ 3BE8:0337
cs=0x3be8;eip=0x00033a; 	J(JLE(loc_4a7ac));	// 215329                  jle     short loc_4A7AC ;~ 3BE8:033A
cs=0x3be8;eip=0x00033c; 	T(al = cl;);	// 215330                  mov     al, cl ;~ 3BE8:033C
cs=0x3be8;eip=0x00033e; 	T(AND(al, 0x0F0));	// 215331                  and     al, 0F0h ;~ 3BE8:033E
cs=0x3be8;eip=0x000340; 	T(AND(cx, 0x0F));	// 215332                  and     cx, 0Fh ;~ 3BE8:0340
cs=0x3be8;eip=0x000343; 	T(ADD(si, cx));	// 215333                  add     si, cx ;~ 3BE8:0343
cs=0x3be8;eip=0x000345; 	T(MOV(cl, *(raddr(cs,si))));	// 215334                  mov     cl, cs:[si] ;~ 3BE8:0345
cs=0x3be8;eip=0x000348; 	T(OR(cl, al));	// 215335                  or      cl, al ;~ 3BE8:0348
cs=0x3be8;eip=0x00034a; 	J(JMP(loc_4a7b1));	// 215336                  jmp     short loc_4A7B1 ;~ 3BE8:034A
loc_4a7ac:
	// 6645 
cs=0x3be8;eip=0x00034c; 	T(ADD(si, cx));	// 215340                  add     si, cx ;~ 3BE8:034C
cs=0x3be8;eip=0x00034e; 	T(MOV(cl, *(raddr(cs,si))));	// 215341                  mov     cl, cs:[si] ;~ 3BE8:034E
loc_4a7b1:
	// 6646 
cs=0x3be8;eip=0x000351; 	T(AND(cx, 0x0F));	// 215344                  and     cx, 0Fh ;~ 3BE8:0351
cs=0x3be8;eip=0x000354; 	T(XOR(ah, ah));	// 215345                  xor     ah, ah ;~ 3BE8:0354
cs=0x3be8;eip=0x000356; 	T(MOV(al, *(raddr(ds,di+0x0C))));	// 215346                  mov     al, [di+0Ch] ;~ 3BE8:0356
cs=0x3be8;eip=0x000359; 	T(ADD(bp, ax));	// 215347                  add     bp, ax ;~ 3BE8:0359
cs=0x3be8;eip=0x00035b; 	T(XCHG(bx, bp));	// 215348                  xchg    bx, bp ;~ 3BE8:035B
cs=0x3be8;eip=0x00035d; 	T(bp = di;);	// 215349                  mov     bp, di ;~ 3BE8:035D
cs=0x3be8;eip=0x00035f; 	T(dx = 0x22;);	// 215350                  mov     dx, 22h ; '"' ;~ 3BE8:035F
cs=0x3be8;eip=0x000362; 	T(ADD(dx, word_1f226));	// 215351                  add     dx, word_1F226 ;~ 3BE8:0362
cs=0x3be8;eip=0x000366; 	X(PUSH(si));	// 215352                  push    si ;~ 3BE8:0366
cs=0x3be8;eip=0x000367; 	T(si = dx;);	// 215353                  mov     si, dx ;~ 3BE8:0367
cs=0x3be8;eip=0x000369; 	T(MOV(dx, *(dw*)(raddr(ss,si))));	// 215354                  mov     dx, ss:[si] ;~ 3BE8:0369
cs=0x3be8;eip=0x00036c; 	X(POP(si));	// 215355                  pop     si ;~ 3BE8:036C
cs=0x3be8;eip=0x00036d; 	X(word_1f902 = dx;);	// 215356                  mov     ds:word_1F902, dx ;~ 3BE8:036D
cs=0x3be8;eip=0x000371; 	J(CALL(__dispatch_call,off_1f8fe));	// 215357                  call    ds:off_1F8FE ;~ 3BE8:0371
cs=0x3be8;eip=0x000375; 	X(POP(bx));	// 215358                  pop     bx ;~ 3BE8:0375
cs=0x3be8;eip=0x000376; 	X(POP(bp));	// 215359                  pop     bp ;~ 3BE8:0376
cs=0x3be8;eip=0x000377; 	X(POP(di));	// 215360                  pop     di ;~ 3BE8:0377
cs=0x3be8;eip=0x000378; 	X(POP(si));	// 215361                  pop     si ;~ 3BE8:0378
cs=0x3be8;eip=0x000379; 	J(RETN(0));	// 215362                  retn ;~ 3BE8:0379

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_4a7ac: 	goto loc_4a7ac;
        case m2c::kloc_4a7b1: 	goto loc_4a7b1;
        case m2c::ksub_4a76b: 	goto sub_4a76b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_4a7da(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_4a7da:
    _begin:
cs=0x3be8;eip=0x00037a; 	X(PUSH(si));	// 215371                  push    si ;~ 3BE8:037A
cs=0x3be8;eip=0x00037b; 	J(CALL(sub_4a800,0));	// 215372                  call    sub_4A800 ;~ 3BE8:037B
cs=0x3be8;eip=0x00037e; 	J(return sub_4a7e0(m2c::kloc_4a7e1, _state););	// 215373                  jmp     short loc_4A7E1 ;~ 3BE8:037E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_4a7da: 	goto sub_4a7da;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_4a7e0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_4a7e0:
    _begin:
cs=0x3be8;eip=0x000380; 	X(PUSH(ax));	// 215381                  push    ax ;~ 3BE8:0380
loc_4a7e1:
	// 6647 
cs=0x3be8;eip=0x000381; 	J(CALL(sub_4a811,0));	// 215384                  call    sub_4A811 ;~ 3BE8:0381
cs=0x3be8;eip=0x000384; 	X(POP(ax));	// 215385                  pop     ax ;~ 3BE8:0384
cs=0x3be8;eip=0x000385; 	T(CMP(*(raddr(ds,bp+8)), cl));	// 215386                  cmp     ds:[bp+8], cl ;~ 3BE8:0385
cs=0x3be8;eip=0x000389; 	J(JZ(locret_4a7ff));	// 215387                  jz      short locret_4A7FF ;~ 3BE8:0389
cs=0x3be8;eip=0x00038b; 	T(OR(cl, cl));	// 215388                  or      cl, cl ;~ 3BE8:038B
cs=0x3be8;eip=0x00038d; 	J(JS(locret_4a7ff));	// 215389                  js      short locret_4A7FF ;~ 3BE8:038D
cs=0x3be8;eip=0x00038f; 	X(PUSH(si));	// 215390                  push    si ;~ 3BE8:038F
cs=0x3be8;eip=0x000390; 	T(si = ax;);	// 215391                  mov     si, ax ;~ 3BE8:0390
cs=0x3be8;eip=0x000392; 	T(ADD(si, cx));	// 215392                  add     si, cx ;~ 3BE8:0392
cs=0x3be8;eip=0x000394; 	T(MOV(al, *(raddr(es,si))));	// 215393                  mov     al, es:[si] ;~ 3BE8:0394
cs=0x3be8;eip=0x000397; 	X(MOV(*(raddr(ds,bx+3)), al));	// 215394                  mov     [bx+3], al ;~ 3BE8:0397
cs=0x3be8;eip=0x00039a; 	X(POP(si));	// 215395                  pop     si ;~ 3BE8:039A
cs=0x3be8;eip=0x00039b; 	X(MOV(*(raddr(ds,bp+8)), cl));	// 215396                  mov     ds:[bp+8], cl ;~ 3BE8:039B
locret_4a7ff:
	// 6648 
cs=0x3be8;eip=0x00039f; 	J(RETN(0));	// 215400                  retn ;~ 3BE8:039F

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_4a7e1: 	goto loc_4a7e1;
        case m2c::klocret_4a7ff: 	goto locret_4a7ff;
        case m2c::ksub_4a7e0: 	goto sub_4a7e0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_4a800(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_4a800:
    _begin:
cs=0x3be8;eip=0x0003a0; 	T(si = di;);	// 215409                  mov     si, di ;~ 3BE8:03A0
cs=0x3be8;eip=0x0003a2; 	T(bx = di;);	// 215410                  mov     bx, di ;~ 3BE8:03A2
cs=0x3be8;eip=0x0003a4; 	T(XOR(ah, ah));	// 215411                  xor     ah, ah ;~ 3BE8:03A4
cs=0x3be8;eip=0x0003a6; 	T(MOV(al, *(raddr(ds,si+0x0D))));	// 215412                  mov     al, [si+0Dh] ;~ 3BE8:03A6
cs=0x3be8;eip=0x0003a9; 	T(ADD(si, ax));	// 215413                  add     si, ax ;~ 3BE8:03A9
cs=0x3be8;eip=0x0003ab; 	T(MOV(al, *(raddr(ds,bx+0x0E))));	// 215414                  mov     al, [bx+0Eh] ;~ 3BE8:03AB
cs=0x3be8;eip=0x0003ae; 	T(ADD(bx, ax));	// 215415                  add     bx, ax ;~ 3BE8:03AE
cs=0x3be8;eip=0x0003b0; 	J(RETN(0));	// 215416                  retn ;~ 3BE8:03B0

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_4a800: 	goto sub_4a800;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_4a811(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_4a811:
    _begin:
cs=0x3be8;eip=0x0003b1; 	T(XOR(cx, cx));	// 215424                  xor     cx, cx ;~ 3BE8:03B1
cs=0x3be8;eip=0x0003b3; 	T(CMP(*(raddr(ds,si+3)), 0));	// 215425                  cmp     byte ptr [si+3], 0 ;~ 3BE8:03B3
cs=0x3be8;eip=0x0003b7; 	J(JZ(loc_4a82d));	// 215426                  jz      short loc_4A82D ;~ 3BE8:03B7
cs=0x3be8;eip=0x0003b9; 	J(JNS(loc_4a825));	// 215427                  jns     short loc_4A825 ;~ 3BE8:03B9
cs=0x3be8;eip=0x0003bb; 	T(TEST(cl, 4));	// 215428                  test    cl, 4 ;~ 3BE8:03BB
cs=0x3be8;eip=0x0003be; 	X(PUSHF);	// 215429                  pushf ;~ 3BE8:03BE
cs=0x3be8;eip=0x0003bf; 	T(OR(cl, 4));	// 215430                  or      cl, 4 ;~ 3BE8:03BF
cs=0x3be8;eip=0x0003c2; 	X(POPF);	// 215431                  popf ;~ 3BE8:03C2
cs=0x3be8;eip=0x0003c3; 	J(JMP(loc_4a82d));	// 215432                  jmp     short loc_4A82D ;~ 3BE8:03C3
loc_4a825:
	// 6649 
cs=0x3be8;eip=0x0003c5; 	T(TEST(cl, 8));	// 215436                  test    cl, 8 ;~ 3BE8:03C5
cs=0x3be8;eip=0x0003c8; 	X(PUSHF);	// 215437                  pushf ;~ 3BE8:03C8
cs=0x3be8;eip=0x0003c9; 	T(OR(cl, 8));	// 215438                  or      cl, 8 ;~ 3BE8:03C9
cs=0x3be8;eip=0x0003cc; 	X(POPF);	// 215439                  popf ;~ 3BE8:03CC
loc_4a82d:
	// 6650 
cs=0x3be8;eip=0x0003cd; 	T(CMP(*(raddr(ds,si+4)), 0));	// 215443                  cmp     byte ptr [si+4], 0 ;~ 3BE8:03CD
cs=0x3be8;eip=0x0003d1; 	J(JZ(loc_4a847));	// 215444                  jz      short loc_4A847 ;~ 3BE8:03D1
cs=0x3be8;eip=0x0003d3; 	J(JNS(loc_4a83f));	// 215445                  jns     short loc_4A83F ;~ 3BE8:03D3
cs=0x3be8;eip=0x0003d5; 	T(TEST(cl, 1));	// 215446                  test    cl, 1 ;~ 3BE8:03D5
cs=0x3be8;eip=0x0003d8; 	X(PUSHF);	// 215447                  pushf ;~ 3BE8:03D8
cs=0x3be8;eip=0x0003d9; 	T(OR(cl, 1));	// 215448                  or      cl, 1 ;~ 3BE8:03D9
cs=0x3be8;eip=0x0003dc; 	X(POPF);	// 215449                  popf ;~ 3BE8:03DC
cs=0x3be8;eip=0x0003dd; 	J(JMP(loc_4a847));	// 215450                  jmp     short loc_4A847 ;~ 3BE8:03DD
loc_4a83f:
	// 6651 
cs=0x3be8;eip=0x0003df; 	T(TEST(cl, 2));	// 215454                  test    cl, 2 ;~ 3BE8:03DF
cs=0x3be8;eip=0x0003e2; 	X(PUSHF);	// 215455                  pushf ;~ 3BE8:03E2
cs=0x3be8;eip=0x0003e3; 	T(OR(cl, 2));	// 215456                  or      cl, 2 ;~ 3BE8:03E3
cs=0x3be8;eip=0x0003e6; 	X(POPF);	// 215457                  popf ;~ 3BE8:03E6
loc_4a847:
	// 6652 
cs=0x3be8;eip=0x0003e7; 	X(PUSH(si));	// 215461                  push    si ;~ 3BE8:03E7
cs=0x3be8;eip=0x0003e8; 	T(si = 0x0E06;);	// 215462                  mov     si, 0E06h ;~ 3BE8:03E8
cs=0x3be8;eip=0x0003eb; 	T(ADD(si, cx));	// 215463                  add     si, cx ;~ 3BE8:03EB
cs=0x3be8;eip=0x0003ed; 	T(MOV(cl, *(raddr(cs,si))));	// 215464                  mov     cl, cs:[si] ;~ 3BE8:03ED
cs=0x3be8;eip=0x0003f0; 	X(POP(si));	// 215465                  pop     si ;~ 3BE8:03F0
cs=0x3be8;eip=0x0003f1; 	J(RETN(0));	// 215466                  retn ;~ 3BE8:03F1

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_4a825: 	goto loc_4a825;
        case m2c::kloc_4a82d: 	goto loc_4a82d;
        case m2c::kloc_4a83f: 	goto loc_4a83f;
        case m2c::kloc_4a847: 	goto loc_4a847;
        case m2c::ksub_4a811: 	goto sub_4a811;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_4a852(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_4a852:
    _begin:
cs=0x3be8;eip=0x0003f2; 	X(PUSH(si));	// 215474                  push    si ;~ 3BE8:03F2
cs=0x3be8;eip=0x0003f3; 	X(PUSH(ax));	// 215475                  push    ax ;~ 3BE8:03F3
cs=0x3be8;eip=0x0003f4; 	T(ax = word_1f1cc;);	// 215476                  mov     ax, word_1F1CC ;~ 3BE8:03F4
cs=0x3be8;eip=0x0003f7; 	X(word_4ab3a = ax;);	// 215477                  mov     cs:word_4AB3A, ax ;~ 3BE8:03F7
cs=0x3be8;eip=0x0003fb; 	X(POP(ax));	// 215478                  pop     ax ;~ 3BE8:03FB
cs=0x3be8;eip=0x0003fc; 	J(CALL(sub_4a861,0));	// 215479                  call    sub_4A861 ;~ 3BE8:03FC
cs=0x3be8;eip=0x0003ff; 	X(POP(si));	// 215480                  pop     si ;~ 3BE8:03FF
cs=0x3be8;eip=0x000400; 	J(RETN(0));	// 215481                  retn ;~ 3BE8:0400

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_4a852: 	goto sub_4a852;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_4a861(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_4a861:
    _begin:
cs=0x3be8;eip=0x000401; 	X(PUSH(bx));	// 215489                  push    bx ;~ 3BE8:0401
cs=0x3be8;eip=0x000402; 	T(bx = 0x0DE8;);	// 215490                  mov     bx, 0DE8h ;~ 3BE8:0402
cs=0x3be8;eip=0x000405; 	J(return sub_4a876(m2c::kloc_4a87a, _state););	// 215491                  jmp     short loc_4A87A ;~ 3BE8:0405

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_4a861: 	goto sub_4a861;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_4a867(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_4a867:
    _begin:
cs=0x3be8;eip=0x000407; 	X(PUSH(si));	// 215500                  push    si ;~ 3BE8:0407
cs=0x3be8;eip=0x000408; 	X(PUSH(ax));	// 215501                  push    ax ;~ 3BE8:0408
cs=0x3be8;eip=0x000409; 	T(ax = word_1f1cc;);	// 215502                  mov     ax, word_1F1CC ;~ 3BE8:0409
cs=0x3be8;eip=0x00040c; 	X(word_4ab3a = ax;);	// 215503                  mov     cs:word_4AB3A, ax ;~ 3BE8:040C
cs=0x3be8;eip=0x000410; 	X(POP(ax));	// 215504                  pop     ax ;~ 3BE8:0410
cs=0x3be8;eip=0x000411; 	J(CALL(sub_4a876,0));	// 215505                  call    sub_4A876 ;~ 3BE8:0411
cs=0x3be8;eip=0x000414; 	X(POP(si));	// 215506                  pop     si ;~ 3BE8:0414
cs=0x3be8;eip=0x000415; 	J(RETN(0));	// 215507                  retn ;~ 3BE8:0415

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_4a867: 	goto sub_4a867;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_4a876(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_4a876:
    _begin:
cs=0x3be8;eip=0x000416; 	X(PUSH(bx));	// 215516                  push    bx ;~ 3BE8:0416
cs=0x3be8;eip=0x000417; 	T(bx = 0x0DD2;);	// 215517                  mov     bx, 0DD2h ;~ 3BE8:0417
loc_4a87a:
	// 6653 
cs=0x3be8;eip=0x00041a; 	X(PUSH(si));	// 215520                  push    si ;~ 3BE8:041A
cs=0x3be8;eip=0x00041b; 	T(si = word_4ab3a;);	// 215521                  mov     si, cs:word_4AB3A ;~ 3BE8:041B
cs=0x3be8;eip=0x000420; 	T(MOV(dl, *(raddr(ds,si))));	// 215522                  mov     dl, [si] ;~ 3BE8:0420
cs=0x3be8;eip=0x000422; 	T(MOV(dh, *(raddr(ds,si+1))));	// 215523                  mov     dh, [si+1] ;~ 3BE8:0422
cs=0x3be8;eip=0x000425; 	X(POP(si));	// 215524                  pop     si ;~ 3BE8:0425
cs=0x3be8;eip=0x000426; 	T(MOV(al, *(raddr(ds,di))));	// 215525                  mov     al, [di] ;~ 3BE8:0426
cs=0x3be8;eip=0x000428; 	T(MOV(ah, *(raddr(ds,di+1))));	// 215526                  mov     ah, [di+1] ;~ 3BE8:0428
cs=0x3be8;eip=0x00042b; 	J(CALL(sub_4a9be,0));	// 215527                  call    sub_4A9BE ;~ 3BE8:042B
cs=0x3be8;eip=0x00042e; 	T(ADD(cl, cl));	// 215528                  add     cl, cl ;~ 3BE8:042E
cs=0x3be8;eip=0x000430; 	T(ADD(bl, cl));	// 215529                  add     bl, cl ;~ 3BE8:0430
cs=0x3be8;eip=0x000432; 	T(ADC(bh, 0));	// 215530                  adc     bh, 0 ;~ 3BE8:0432
cs=0x3be8;eip=0x000435; 	T(MOV(bx, *(dw*)(raddr(cs,bx))));	// 215531                  mov     bx, cs:[bx] ;~ 3BE8:0435
cs=0x3be8;eip=0x000438; 	X(MOV(*(raddr(ds,si+3)), bl));	// 215532                  mov     [si+3], bl ;~ 3BE8:0438
cs=0x3be8;eip=0x00043b; 	X(MOV(*(raddr(ds,si+4)), bh));	// 215533                  mov     [si+4], bh ;~ 3BE8:043B
cs=0x3be8;eip=0x00043e; 	X(POP(bx));	// 215534                  pop     bx ;~ 3BE8:043E
cs=0x3be8;eip=0x00043f; 	J(RETN(0));	// 215535                  retn ;~ 3BE8:043F

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_4a87a: 	goto loc_4a87a;
        case m2c::ksub_4a876: 	goto sub_4a876;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group41(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group41:
    _begin:
seg015_490_proc:
	// 215622 
loc_4a8f0:
	// 6654 
cs=0x3be8;eip=0x000490; 	T(MOV(dx, *(dw*)(raddr(ds,si-2))));	// 215623                  mov     dx, [si-2] ;~ 3BE8:0490
cs=0x3be8;eip=0x000493; 	T(ax = 4;);	// 215624                  mov     ax, 4 ;~ 3BE8:0493
cs=0x3be8;eip=0x000496; 	T(ADD(ax, word_1f226));	// 215625                  add     ax, word_1F226 ;~ 3BE8:0496
cs=0x3be8;eip=0x00049a; 	X(PUSH(si));	// 215626                  push    si ;~ 3BE8:049A
cs=0x3be8;eip=0x00049b; 	T(si = ax;);	// 215627                  mov     si, ax ;~ 3BE8:049B
cs=0x3be8;eip=0x00049d; 	T(MOV(ax, *(dw*)(raddr(ss,si))));	// 215628                  mov     ax, ss:[si] ;~ 3BE8:049D
cs=0x3be8;eip=0x0004a0; 	X(POP(si));	// 215629                  pop     si ;~ 3BE8:04A0
cs=0x3be8;eip=0x0004a1; 	X(word_1f902 = ax;);	// 215630                  mov     ds:word_1F902, ax ;~ 3BE8:04A1
cs=0x3be8;eip=0x0004a4; 	J(CALL(__dispatch_call,off_1f8fe));	// 215631                  call    ds:off_1F8FE ;~ 3BE8:04A4
cs=0x3be8;eip=0x0004a8; 	X(word_4ab3a = di;);	// 215632                  mov     cs:word_4AB3A, di ;~ 3BE8:04A8
cs=0x3be8;eip=0x0004ad; 	X(POP(si));	// 215633                  pop     si ;~ 3BE8:04AD
cs=0x3be8;eip=0x0004ae; 	X(POP(di));	// 215634                  pop     di ;~ 3BE8:04AE
cs=0x3be8;eip=0x0004af; 	T(ax = 1;);	// 215635                  mov     ax, 1 ;~ 3BE8:04AF
cs=0x3be8;eip=0x0004b2; 	T(OR(ax, ax));	// 215636                  or      ax, ax ;~ 3BE8:04B2
cs=0x3be8;eip=0x0004b4; 	J(RETN(0));	// 215637                  retn ;~ 3BE8:04B4
sub_4a915:
	// 215643 
cs=0x3be8;eip=0x0004b5; 	X(PUSH(di));	// 215647                  push    di ;~ 3BE8:04B5
cs=0x3be8;eip=0x0004b6; 	X(PUSH(si));	// 215648                  push    si ;~ 3BE8:04B6
cs=0x3be8;eip=0x0004b7; 	J(CALL(sub_4a993,0));	// 215649                  call    sub_4A993 ;~ 3BE8:04B7
cs=0x3be8;eip=0x0004ba; 	T(si = di;);	// 215650                  mov     si, di ;~ 3BE8:04BA
loc_4a91c:
	// 6655 
cs=0x3be8;eip=0x0004bc; 	X(PUSH(dx));	// 215653                  push    dx ;~ 3BE8:04BC
cs=0x3be8;eip=0x0004bd; 	T(LODSW);	// 215654                  lodsw ;~ 3BE8:04BD
cs=0x3be8;eip=0x0004be; 	T(dx = ax;);	// 215655                  mov     dx, ax ;~ 3BE8:04BE
cs=0x3be8;eip=0x0004c0; 	T(ax = 4;);	// 215656                  mov     ax, 4 ;~ 3BE8:04C0
cs=0x3be8;eip=0x0004c3; 	T(ADD(ax, word_1f226));	// 215657                  add     ax, word_1F226 ;~ 3BE8:04C3
cs=0x3be8;eip=0x0004c7; 	X(PUSH(si));	// 215658                  push    si ;~ 3BE8:04C7
cs=0x3be8;eip=0x0004c8; 	T(si = ax;);	// 215659                  mov     si, ax ;~ 3BE8:04C8
cs=0x3be8;eip=0x0004ca; 	T(MOV(ax, *(dw*)(raddr(ss,si))));	// 215660                  mov     ax, ss:[si] ;~ 3BE8:04CA
cs=0x3be8;eip=0x0004cd; 	X(POP(si));	// 215661                  pop     si ;~ 3BE8:04CD
cs=0x3be8;eip=0x0004ce; 	X(word_1f902 = ax;);	// 215662                  mov     ds:word_1F902, ax ;~ 3BE8:04CE
cs=0x3be8;eip=0x0004d1; 	J(CALL(__dispatch_call,off_1f8fe));	// 215663                  call    ds:off_1F8FE ;~ 3BE8:04D1
cs=0x3be8;eip=0x0004d5; 	X(POP(dx));	// 215664                  pop     dx ;~ 3BE8:04D5
cs=0x3be8;eip=0x0004d6; 	T(CMP(cx, *(dw*)(raddr(ds,di+6))));	// 215665                  cmp     cx, [di+6] ;~ 3BE8:04D6
cs=0x3be8;eip=0x0004d9; 	J(JZ(loc_4a8f0));	// 215666                  jz      short loc_4A8F0 ;~ 3BE8:04D9
cs=0x3be8;eip=0x0004db; 	T(DEC(dl));	// 215667                  dec     dl ;~ 3BE8:04DB
cs=0x3be8;eip=0x0004dd; 	J(JNZ(loc_4a91c));	// 215668                  jnz     short loc_4A91C ;~ 3BE8:04DD
cs=0x3be8;eip=0x0004df; 	X(POP(si));	// 215669                  pop     si ;~ 3BE8:04DF
cs=0x3be8;eip=0x0004e0; 	X(POP(di));	// 215670                  pop     di ;~ 3BE8:04E0
cs=0x3be8;eip=0x0004e1; 	T(XOR(ax, ax));	// 215671                  xor     ax, ax ;~ 3BE8:04E1
cs=0x3be8;eip=0x0004e3; 	J(RETN(0));	// 215672                  retn ;~ 3BE8:04E3

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_4a8f0: 	goto loc_4a8f0;
        case m2c::kloc_4a91c: 	goto loc_4a91c;
        case m2c::ksub_4a915: 	goto sub_4a915;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_4a993(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_4a993:
    _begin:
cs=0x3be8;eip=0x000533; 	T(si = word_1f1ce;);	// 215760                  mov     si, word_1F1CE ;~ 3BE8:0533
cs=0x3be8;eip=0x000537; 	T(MOV(dl, *(raddr(ds,si+0x1D))));	// 215761                  mov     dl, [si+1Dh] ;~ 3BE8:0537
cs=0x3be8;eip=0x00053a; 	X(PUSH(dx));	// 215762                  push    dx ;~ 3BE8:053A
cs=0x3be8;eip=0x00053b; 	T(dx = word_1f3a2;);	// 215763                  mov     dx, ds:word_1F3A2 ;~ 3BE8:053B
cs=0x3be8;eip=0x00053f; 	T(ax = 5;);	// 215764                  mov     ax, 5 ;~ 3BE8:053F
cs=0x3be8;eip=0x000542; 	X(PUSH(cx));	// 215765                  push    cx ;~ 3BE8:0542
cs=0x3be8;eip=0x000543; 	T(cx = 0;);	// 215766                  mov     cx, 0 ;~ 3BE8:0543
cs=0x3be8;eip=0x000546; 	T(ADD(cx, word_1f226));	// 215767                  add     cx, word_1F226 ;~ 3BE8:0546
cs=0x3be8;eip=0x00054a; 	X(PUSH(si));	// 215768                  push    si ;~ 3BE8:054A
cs=0x3be8;eip=0x00054b; 	T(si = cx;);	// 215769                  mov     si, cx ;~ 3BE8:054B
cs=0x3be8;eip=0x00054d; 	T(MOV(cx, *(dw*)(raddr(ss,si))));	// 215770                  mov     cx, ss:[si] ;~ 3BE8:054D
cs=0x3be8;eip=0x000550; 	X(POP(si));	// 215771                  pop     si ;~ 3BE8:0550
cs=0x3be8;eip=0x000551; 	X(word_1f902 = cx;);	// 215772                  mov     ds:word_1F902, cx ;~ 3BE8:0551
cs=0x3be8;eip=0x000555; 	J(CALL(__dispatch_call,off_1f8fe));	// 215773                  call    ds:off_1F8FE ;~ 3BE8:0555
cs=0x3be8;eip=0x000559; 	X(POP(cx));	// 215774                  pop     cx ;~ 3BE8:0559
cs=0x3be8;eip=0x00055a; 	X(POP(dx));	// 215775                  pop     dx ;~ 3BE8:055A
cs=0x3be8;eip=0x00055b; 	T(si = di;);	// 215776                  mov     si, di ;~ 3BE8:055B
cs=0x3be8;eip=0x00055d; 	J(RETN(0));	// 215777                  retn ;~ 3BE8:055D

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_4a993: 	goto sub_4a993;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_4a9be(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_4a9be:
    _begin:
cs=0x3be8;eip=0x00055e; 	T(XOR(cx, cx));	// 215785                  xor     cx, cx ;~ 3BE8:055E
cs=0x3be8;eip=0x000560; 	X(PUSH(ax));	// 215786                  push    ax ;~ 3BE8:0560
cs=0x3be8;eip=0x000561; 	T(CMP(byte_1f7c0, 0));	// 215787                  cmp     ds:byte_1F7C0, 0 ;~ 3BE8:0561
cs=0x3be8;eip=0x000566; 	J(JZ(loc_4a9fc));	// 215788                  jz      short loc_4A9FC ;~ 3BE8:0566
cs=0x3be8;eip=0x000568; 	X(PUSH(ax));	// 215789                  push    ax ;~ 3BE8:0568
cs=0x3be8;eip=0x000569; 	X(PUSH(dx));	// 215790                  push    dx ;~ 3BE8:0569
cs=0x3be8;eip=0x00056a; 	X(PUSH(bx));	// 215791                  push    bx ;~ 3BE8:056A
cs=0x3be8;eip=0x00056b; 	X(PUSH(si));	// 215792                  push    si ;~ 3BE8:056B
cs=0x3be8;eip=0x00056c; 	X(PUSH(di));	// 215793                  push    di ;~ 3BE8:056C
cs=0x3be8;eip=0x00056d; 	X(PUSH(bp));	// 215794                  push    bp ;~ 3BE8:056D
cs=0x3be8;eip=0x00056e; 	T(ax = 0;);	// 215795                  mov     ax, 0 ;~ 3BE8:056E
cs=0x3be8;eip=0x000571; 	T(dx = 7;);	// 215796                  mov     dx, 7 ;~ 3BE8:0571
cs=0x3be8;eip=0x000574; 	T(cx = 0x20;);	// 215797                  mov     cx, 20h ; ' ' ;~ 3BE8:0574
cs=0x3be8;eip=0x000577; 	T(ADD(cx, word_1f226));	// 215798                  add     cx, word_1F226 ;~ 3BE8:0577
cs=0x3be8;eip=0x00057b; 	X(PUSH(si));	// 215799                  push    si ;~ 3BE8:057B
cs=0x3be8;eip=0x00057c; 	T(si = cx;);	// 215800                  mov     si, cx ;~ 3BE8:057C
cs=0x3be8;eip=0x00057e; 	T(MOV(cx, *(dw*)(raddr(ss,si))));	// 215801                  mov     cx, ss:[si] ;~ 3BE8:057E
cs=0x3be8;eip=0x000581; 	X(POP(si));	// 215802                  pop     si ;~ 3BE8:0581
cs=0x3be8;eip=0x000582; 	X(word_1f902 = cx;);	// 215803                  mov     ds:word_1F902, cx ;~ 3BE8:0582
cs=0x3be8;eip=0x000586; 	J(CALL(__dispatch_call,off_1f8fe));	// 215804                  call    ds:off_1F8FE ;~ 3BE8:0586
cs=0x3be8;eip=0x00058a; 	T(si = 0x0E11;);	// 215805                  mov     si, 0E11h ;~ 3BE8:058A
cs=0x3be8;eip=0x00058d; 	T(ADD(si, ax));	// 215806                  add     si, ax ;~ 3BE8:058D
cs=0x3be8;eip=0x00058f; 	T(ch = al;);	// 215807                  mov     ch, al ;~ 3BE8:058F
cs=0x3be8;eip=0x000591; 	T(MOV(cl, *(raddr(cs,si))));	// 215808                  mov     cl, cs:[si] ;~ 3BE8:0591
cs=0x3be8;eip=0x000594; 	X(POP(bp));	// 215809                  pop     bp ;~ 3BE8:0594
cs=0x3be8;eip=0x000595; 	X(POP(di));	// 215810                  pop     di ;~ 3BE8:0595
cs=0x3be8;eip=0x000596; 	X(POP(si));	// 215811                  pop     si ;~ 3BE8:0596
cs=0x3be8;eip=0x000597; 	X(POP(bx));	// 215812                  pop     bx ;~ 3BE8:0597
cs=0x3be8;eip=0x000598; 	X(POP(dx));	// 215813                  pop     dx ;~ 3BE8:0598
cs=0x3be8;eip=0x000599; 	X(POP(ax));	// 215814                  pop     ax ;~ 3BE8:0599
cs=0x3be8;eip=0x00059a; 	X(POP(ax));	// 215815                  pop     ax ;~ 3BE8:059A
cs=0x3be8;eip=0x00059b; 	J(RETN(0));	// 215816                  retn ;~ 3BE8:059B
loc_4a9fc:
	// 6656 
cs=0x3be8;eip=0x00059c; 	T(SUB(al, dl));	// 215820                  sub     al, dl ;~ 3BE8:059C
cs=0x3be8;eip=0x00059e; 	J(JNS(loc_4aa58));	// 215821                  jns     short loc_4AA58 ;~ 3BE8:059E
cs=0x3be8;eip=0x0005a0; 	T(NEG(al));	// 215822                  neg     al ;~ 3BE8:05A0
cs=0x3be8;eip=0x0005a2; 	T(SUB(ah, dh));	// 215823                  sub     ah, dh ;~ 3BE8:05A2
cs=0x3be8;eip=0x0005a4; 	J(JNS(loc_4aa31));	// 215824                  jns     short loc_4AA31 ;~ 3BE8:05A4
cs=0x3be8;eip=0x0005a6; 	T(NEG(ah));	// 215825                  neg     ah ;~ 3BE8:05A6
cs=0x3be8;eip=0x0005a8; 	T(CMP(al, 2));	// 215826                  cmp     al, 2 ;~ 3BE8:05A8
cs=0x3be8;eip=0x0005aa; 	J(JG(loc_4aa14));	// 215827                  jg      short loc_4AA14 ;~ 3BE8:05AA
cs=0x3be8;eip=0x0005ac; 	T(CMP(ah, 2));	// 215829                  cmp     ah, 2 ;~ 3BE8:05AC
cs=0x3be8;eip=0x0005af; 	J(JG(loc_4aa14));	// 215830                  jg      short loc_4AA14 ;~ 3BE8:05AF
cs=0x3be8;eip=0x0005b1; 	J(JMP(loc_4aaa4));	// 215831                  jmp     loc_4AAA4 ;~ 3BE8:05B1
loc_4aa14:
	// 6657 
cs=0x3be8;eip=0x0005b4; 	T(SUB(ah, al));	// 215836                  sub     ah, al ;~ 3BE8:05B4
cs=0x3be8;eip=0x0005b6; 	J(JL(loc_4aa22));	// 215837                  jl      short loc_4AA22 ;~ 3BE8:05B6
cs=0x3be8;eip=0x0005b8; 	T(CMP(ah, 2));	// 215838                  cmp     ah, 2 ;~ 3BE8:05B8
cs=0x3be8;eip=0x0005bb; 	J(JL(loc_4aa2c));	// 215839                  jl      short loc_4AA2C ;~ 3BE8:05BB
cs=0x3be8;eip=0x0005bd; 	T(ch = 4;);	// 215840                  mov     ch, 4 ;~ 3BE8:05BD
cs=0x3be8;eip=0x0005bf; 	J(JMP(loc_4aaa8));	// 215841                  jmp     loc_4AAA8 ;~ 3BE8:05BF
loc_4aa22:
	// 6658 
cs=0x3be8;eip=0x0005c2; 	T(CMP(ah, 0x0FE));	// 215845                  cmp     ah, 0FEh ;~ 3BE8:05C2
cs=0x3be8;eip=0x0005c5; 	J(JG(loc_4aa2c));	// 215846                  jg      short loc_4AA2C ;~ 3BE8:05C5
cs=0x3be8;eip=0x0005c7; 	T(ch = 2;);	// 215847                  mov     ch, 2 ;~ 3BE8:05C7
cs=0x3be8;eip=0x0005c9; 	J(JMP(loc_4aaa8));	// 215848                  jmp     short loc_4AAA8 ;~ 3BE8:05C9
loc_4aa2c:
	// 6659 
cs=0x3be8;eip=0x0005cc; 	T(ch = 3;);	// 215855                  mov     ch, 3 ;~ 3BE8:05CC
cs=0x3be8;eip=0x0005ce; 	J(JMP(loc_4aaa8));	// 215856                  jmp     short loc_4AAA8 ;~ 3BE8:05CE
loc_4aa31:
	// 6660 
cs=0x3be8;eip=0x0005d1; 	T(CMP(al, 2));	// 215862                  cmp     al, 2 ;~ 3BE8:05D1
cs=0x3be8;eip=0x0005d3; 	J(JG(loc_4aa3d));	// 215863                  jg      short loc_4AA3D ;~ 3BE8:05D3
cs=0x3be8;eip=0x0005d5; 	T(CMP(ah, 2));	// 215864                  cmp     ah, 2 ;~ 3BE8:05D5
cs=0x3be8;eip=0x0005d8; 	J(JLE(loc_4aaa4));	// 215865                  jle     short loc_4AAA4 ;~ 3BE8:05D8
cs=0x3be8;eip=0x0005da; 	T(NOP);	// 215866                  nop ;~ 3BE8:05DA
cs=0x3be8;eip=0x0005db; 	T(NOP);	// 215867                  nop ;~ 3BE8:05DB
cs=0x3be8;eip=0x0005dc; 	T(NOP);	// 215868                  nop ;~ 3BE8:05DC
loc_4aa3d:
	// 6661 
cs=0x3be8;eip=0x0005dd; 	T(SUB(ah, al));	// 215871                  sub     ah, al ;~ 3BE8:05DD
cs=0x3be8;eip=0x0005df; 	J(JL(loc_4aa4b));	// 215872                  jl      short loc_4AA4B ;~ 3BE8:05DF
cs=0x3be8;eip=0x0005e1; 	T(CMP(ah, 2));	// 215873                  cmp     ah, 2 ;~ 3BE8:05E1
cs=0x3be8;eip=0x0005e4; 	J(JL(loc_4aa54));	// 215874                  jl      short loc_4AA54 ;~ 3BE8:05E4
cs=0x3be8;eip=0x0005e6; 	T(XOR(ch, ch));	// 215875                  xor     ch, ch ;~ 3BE8:05E6
cs=0x3be8;eip=0x0005e8; 	J(JMP(loc_4aaa8));	// 215876                  jmp     short loc_4AAA8 ;~ 3BE8:05E8
loc_4aa4b:
	// 6662 
cs=0x3be8;eip=0x0005eb; 	T(CMP(ah, 0x0FE));	// 215882                  cmp     ah, 0FEh ;~ 3BE8:05EB
cs=0x3be8;eip=0x0005ee; 	J(JG(loc_4aa54));	// 215883                  jg      short loc_4AA54 ;~ 3BE8:05EE
cs=0x3be8;eip=0x0005f0; 	T(ch = 2;);	// 215884                  mov     ch, 2 ;~ 3BE8:05F0
cs=0x3be8;eip=0x0005f2; 	J(JMP(loc_4aaa8));	// 215885                  jmp     short loc_4AAA8 ;~ 3BE8:05F2
loc_4aa54:
	// 6663 
cs=0x3be8;eip=0x0005f4; 	T(ch = 1;);	// 215890                  mov     ch, 1 ;~ 3BE8:05F4
cs=0x3be8;eip=0x0005f6; 	J(JMP(loc_4aaa8));	// 215891                  jmp     short loc_4AAA8 ;~ 3BE8:05F6
loc_4aa58:
	// 6664 
cs=0x3be8;eip=0x0005f8; 	T(SUB(ah, dh));	// 215895                  sub     ah, dh ;~ 3BE8:05F8
cs=0x3be8;eip=0x0005fa; 	J(JNS(loc_4aa81));	// 215896                  jns     short loc_4AA81 ;~ 3BE8:05FA
cs=0x3be8;eip=0x0005fc; 	T(NEG(ah));	// 215897                  neg     ah ;~ 3BE8:05FC
cs=0x3be8;eip=0x0005fe; 	T(CMP(al, 2));	// 215898                  cmp     al, 2 ;~ 3BE8:05FE
cs=0x3be8;eip=0x000600; 	J(JG(loc_4aa67));	// 215899                  jg      short loc_4AA67 ;~ 3BE8:0600
cs=0x3be8;eip=0x000602; 	T(CMP(ah, 2));	// 215900                  cmp     ah, 2 ;~ 3BE8:0602
cs=0x3be8;eip=0x000605; 	J(JLE(loc_4aaa4));	// 215901                  jle     short loc_4AAA4 ;~ 3BE8:0605
loc_4aa67:
	// 6665 
cs=0x3be8;eip=0x000607; 	T(SUB(ah, al));	// 215904                  sub     ah, al ;~ 3BE8:0607
cs=0x3be8;eip=0x000609; 	J(JL(loc_4aa74));	// 215905                  jl      short loc_4AA74 ;~ 3BE8:0609
cs=0x3be8;eip=0x00060b; 	T(CMP(ah, 2));	// 215906                  cmp     ah, 2 ;~ 3BE8:060B
cs=0x3be8;eip=0x00060e; 	J(JL(loc_4aa7d));	// 215907                  jl      short loc_4AA7D ;~ 3BE8:060E
cs=0x3be8;eip=0x000610; 	T(ch = 4;);	// 215908                  mov     ch, 4 ;~ 3BE8:0610
cs=0x3be8;eip=0x000612; 	J(JMP(loc_4aaa8));	// 215909                  jmp     short loc_4AAA8 ;~ 3BE8:0612
loc_4aa74:
	// 6666 
cs=0x3be8;eip=0x000614; 	T(CMP(ah, 0x0FE));	// 215913                  cmp     ah, 0FEh ;~ 3BE8:0614
cs=0x3be8;eip=0x000617; 	J(JG(loc_4aa7d));	// 215914                  jg      short loc_4AA7D ;~ 3BE8:0617
cs=0x3be8;eip=0x000619; 	T(ch = 6;);	// 215915                  mov     ch, 6 ;~ 3BE8:0619
cs=0x3be8;eip=0x00061b; 	J(JMP(loc_4aaa8));	// 215916                  jmp     short loc_4AAA8 ;~ 3BE8:061B
loc_4aa7d:
	// 6667 
cs=0x3be8;eip=0x00061d; 	T(ch = 5;);	// 215921                  mov     ch, 5 ;~ 3BE8:061D
cs=0x3be8;eip=0x00061f; 	J(JMP(loc_4aaa8));	// 215922                  jmp     short loc_4AAA8 ;~ 3BE8:061F
loc_4aa81:
	// 6668 
cs=0x3be8;eip=0x000621; 	T(CMP(al, 2));	// 215926                  cmp     al, 2 ;~ 3BE8:0621
cs=0x3be8;eip=0x000623; 	J(JG(loc_4aa8a));	// 215927                  jg      short loc_4AA8A ;~ 3BE8:0623
cs=0x3be8;eip=0x000625; 	T(CMP(ah, 2));	// 215928                  cmp     ah, 2 ;~ 3BE8:0625
cs=0x3be8;eip=0x000628; 	J(JLE(loc_4aaa4));	// 215929                  jle     short loc_4AAA4 ;~ 3BE8:0628
loc_4aa8a:
	// 6669 
cs=0x3be8;eip=0x00062a; 	T(SUB(ah, al));	// 215932                  sub     ah, al ;~ 3BE8:062A
cs=0x3be8;eip=0x00062c; 	J(JL(loc_4aa97));	// 215933                  jl      short loc_4AA97 ;~ 3BE8:062C
cs=0x3be8;eip=0x00062e; 	T(CMP(ah, 2));	// 215934                  cmp     ah, 2 ;~ 3BE8:062E
cs=0x3be8;eip=0x000631; 	J(JL(loc_4aaa0));	// 215935                  jl      short loc_4AAA0 ;~ 3BE8:0631
cs=0x3be8;eip=0x000633; 	T(ch = 0;);	// 215936                  mov     ch, 0 ;~ 3BE8:0633
cs=0x3be8;eip=0x000635; 	J(JMP(loc_4aaa8));	// 215937                  jmp     short loc_4AAA8 ;~ 3BE8:0635
loc_4aa97:
	// 6670 
cs=0x3be8;eip=0x000637; 	T(CMP(ah, 2));	// 215941                  cmp     ah, 2 ;~ 3BE8:0637
cs=0x3be8;eip=0x00063a; 	J(JL(loc_4aaa0));	// 215942                  jl      short loc_4AAA0 ;~ 3BE8:063A
cs=0x3be8;eip=0x00063c; 	T(ch = 6;);	// 215943                  mov     ch, 6 ;~ 3BE8:063C
cs=0x3be8;eip=0x00063e; 	J(JMP(loc_4aaa8));	// 215944                  jmp     short loc_4AAA8 ;~ 3BE8:063E
loc_4aaa0:
	// 6671 
cs=0x3be8;eip=0x000640; 	T(ch = 7;);	// 215949                  mov     ch, 7 ;~ 3BE8:0640
cs=0x3be8;eip=0x000642; 	J(JMP(loc_4aaa8));	// 215950                  jmp     short loc_4AAA8 ;~ 3BE8:0642
loc_4aaa4:
	// 6672 
cs=0x3be8;eip=0x000644; 	T(XOR(cx, cx));	// 215955                  xor     cx, cx ;~ 3BE8:0644
cs=0x3be8;eip=0x000646; 	X(POP(ax));	// 215956                  pop     ax ;~ 3BE8:0646
cs=0x3be8;eip=0x000647; 	J(RETN(0));	// 215957                  retn ;~ 3BE8:0647
loc_4aaa8:
	// 6673 
cs=0x3be8;eip=0x000648; 	X(PUSH(si));	// 215962                  push    si ;~ 3BE8:0648
cs=0x3be8;eip=0x000649; 	T(CMP(byte_1f7c1, 0));	// 215963                  cmp     ds:byte_1F7C1, 0 ;~ 3BE8:0649
cs=0x3be8;eip=0x00064e; 	J(JNZ(loc_4aabe));	// 215964                  jnz     short loc_4AABE ;~ 3BE8:064E
cs=0x3be8;eip=0x000650; 	T(CMP(byte_1f847, 0));	// 215965                  cmp     ds:byte_1F847, 0 ;~ 3BE8:0650
cs=0x3be8;eip=0x000655; 	J(JZ(loc_4aad3));	// 215966                  jz      short loc_4AAD3 ;~ 3BE8:0655
cs=0x3be8;eip=0x000657; 	T(TEST(*(raddr(ds,bp+6)), 8));	// 215967                  test    byte ptr ds:[bp+6], 8 ;~ 3BE8:0657
cs=0x3be8;eip=0x00065c; 	J(JNZ(loc_4aad3));	// 215968                  jnz     short loc_4AAD3 ;~ 3BE8:065C
loc_4aabe:
	// 6674 
cs=0x3be8;eip=0x00065e; 	T(si = 0x0E15;);	// 215971                  mov     si, 0E15h ;~ 3BE8:065E
cs=0x3be8;eip=0x000661; 	T(al = ch;);	// 215972                  mov     al, ch ;~ 3BE8:0661
cs=0x3be8;eip=0x000663; 	T(XOR(ah, ah));	// 215973                  xor     ah, ah ;~ 3BE8:0663
cs=0x3be8;eip=0x000665; 	T(ADD(si, ax));	// 215974                  add     si, ax ;~ 3BE8:0665
cs=0x3be8;eip=0x000667; 	T(MOV(cl, *(raddr(cs,si))));	// 215975                  mov     cl, cs:[si] ;~ 3BE8:0667
cs=0x3be8;eip=0x00066a; 	T(ADD(ch, 4));	// 215976                  add     ch, 4 ;~ 3BE8:066A
cs=0x3be8;eip=0x00066d; 	T(AND(ch, 7));	// 215977                  and     ch, 7 ;~ 3BE8:066D
cs=0x3be8;eip=0x000670; 	X(POP(si));	// 215978                  pop     si ;~ 3BE8:0670
cs=0x3be8;eip=0x000671; 	X(POP(ax));	// 215979                  pop     ax ;~ 3BE8:0671
cs=0x3be8;eip=0x000672; 	J(RETN(0));	// 215980                  retn ;~ 3BE8:0672
loc_4aad3:
	// 6675 
cs=0x3be8;eip=0x000673; 	T(si = 0x0E11;);	// 215985                  mov     si, 0E11h ;~ 3BE8:0673
cs=0x3be8;eip=0x000676; 	T(al = ch;);	// 215986                  mov     al, ch ;~ 3BE8:0676
cs=0x3be8;eip=0x000678; 	T(XOR(ah, ah));	// 215987                  xor     ah, ah ;~ 3BE8:0678
cs=0x3be8;eip=0x00067a; 	T(ADD(si, ax));	// 215988                  add     si, ax ;~ 3BE8:067A
cs=0x3be8;eip=0x00067c; 	T(MOV(cl, *(raddr(cs,si))));	// 215989                  mov     cl, cs:[si] ;~ 3BE8:067C
cs=0x3be8;eip=0x00067f; 	X(POP(si));	// 215990                  pop     si ;~ 3BE8:067F
cs=0x3be8;eip=0x000680; 	X(POP(ax));	// 215991                  pop     ax ;~ 3BE8:0680
cs=0x3be8;eip=0x000681; 	J(RETN(0));	// 215992                  retn ;~ 3BE8:0681

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_4a9fc: 	goto loc_4a9fc;
        case m2c::kloc_4aa14: 	goto loc_4aa14;
        case m2c::kloc_4aa22: 	goto loc_4aa22;
        case m2c::kloc_4aa2c: 	goto loc_4aa2c;
        case m2c::kloc_4aa31: 	goto loc_4aa31;
        case m2c::kloc_4aa3d: 	goto loc_4aa3d;
        case m2c::kloc_4aa4b: 	goto loc_4aa4b;
        case m2c::kloc_4aa54: 	goto loc_4aa54;
        case m2c::kloc_4aa58: 	goto loc_4aa58;
        case m2c::kloc_4aa67: 	goto loc_4aa67;
        case m2c::kloc_4aa74: 	goto loc_4aa74;
        case m2c::kloc_4aa7d: 	goto loc_4aa7d;
        case m2c::kloc_4aa81: 	goto loc_4aa81;
        case m2c::kloc_4aa8a: 	goto loc_4aa8a;
        case m2c::kloc_4aa97: 	goto loc_4aa97;
        case m2c::kloc_4aaa0: 	goto loc_4aaa0;
        case m2c::kloc_4aaa4: 	goto loc_4aaa4;
        case m2c::kloc_4aaa8: 	goto loc_4aaa8;
        case m2c::kloc_4aabe: 	goto loc_4aabe;
        case m2c::kloc_4aad3: 	goto loc_4aad3;
        case m2c::ksub_4a9be: 	goto sub_4a9be;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_4ab70(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_4ab70:
    _begin:
cs=0x3be8;eip=0x000710; 	T(XOR(ah, ah));	// 216144                  xor     ah, ah ;~ 3BE8:0710
cs=0x3be8;eip=0x000712; 	T(MOV(al, *(raddr(ds,bx+1))));	// 216145                  mov     al, [bx+1] ;~ 3BE8:0712
cs=0x3be8;eip=0x000715; 	T(cx = 6;);	// 216146                  mov     cx, 6 ;~ 3BE8:0715
cs=0x3be8;eip=0x000718; 	T(ADD(cx, word_1f226));	// 216147                  add     cx, word_1F226 ;~ 3BE8:0718
cs=0x3be8;eip=0x00071c; 	X(PUSH(si));	// 216148                  push    si ;~ 3BE8:071C
cs=0x3be8;eip=0x00071d; 	T(si = cx;);	// 216149                  mov     si, cx ;~ 3BE8:071D
cs=0x3be8;eip=0x00071f; 	T(MOV(cx, *(dw*)(raddr(ss,si))));	// 216150                  mov     cx, ss:[si] ;~ 3BE8:071F
cs=0x3be8;eip=0x000722; 	X(POP(si));	// 216151                  pop     si ;~ 3BE8:0722
cs=0x3be8;eip=0x000723; 	X(word_1f902 = cx;);	// 216152                  mov     ds:word_1F902, cx ;~ 3BE8:0723
cs=0x3be8;eip=0x000727; 	J(CALL(__dispatch_call,off_1f8fe));	// 216153                  call    ds:off_1F8FE ;~ 3BE8:0727
cs=0x3be8;eip=0x00072b; 	J(RETN(0));	// 216154                  retn ;~ 3BE8:072B

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_4ab70: 	goto sub_4ab70;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}


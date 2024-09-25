/* THIS IS GENERATED FILE */

        
#include "cfix.exe.h"

                

 bool sub_4a470(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_4a470:
    _begin:
cs=0x2b76;eip=0x000010; 	T(NOP);	// 214789                  nop ;~ 2B76:0010
cs=0x2b76;eip=0x000011; 	T(NOP);	// 214790                  nop ;~ 2B76:0011
cs=0x2b76;eip=0x000012; 	X(PUSH(ds));	// 214791                  push    ds ;~ 2B76:0012
cs=0x2b76;eip=0x000013; 	T(ax = cs;);	// 214792                  mov     ax, cs ;~ 2B76:0013
cs=0x2b76;eip=0x000015; 	T(ds = ax;);	// 214793                  mov     ds, ax ;~ 2B76:0015
cs=0x2b76;eip=0x000017; 	T(si = 0x0E5D;);	// 214795                  mov     si, 0E5Dh ;~ 2B76:0017
cs=0x2b76;eip=0x00001a; 	T(cx = 0x10;);	// 214796                  mov     cx, 10h ;~ 2B76:001A
	// 214797                  rep movsw ;~ 2B76:001D
cs=0x2b76;eip=0x00001d; 	X(	REP MOVSW);	// 214797                  rep movsw ;~ 2B76:001D
cs=0x2b76;eip=0x00001f; 	X(POP(ds));	// 214798                  pop     ds ;~ 2B76:001F
cs=0x2b76;eip=0x000020; 	T(bx = 0x27;);	// 214800                  mov     bx, 27h ; ''' ;~ 2B76:0020
cs=0x2b76;eip=0x000023; 	T(ax = 0x2C;);	// 214801                  mov     ax, 2Ch ; ',' ;~ 2B76:0023
cs=0x2b76;eip=0x000026; 	J(RETF(0));	// 214802                  retf ;~ 2B76:0026

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
cs=0x2b76;eip=0x000027; 	J(CALL(__dispatch_call,word_1f8fc));	// 214811                  call    ds:word_1F8FC ;~ 2B76:0027
cs=0x2b76;eip=0x00002b; 	J(RETF(0));	// 214812                  retf ;~ 2B76:002B

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



 bool nullsub_4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    nullsub_4:
    _begin:
cs=0x2b76;eip=0x0001a1; 	J(RETN(0));	// 215194                  retn ;~ 2B76:01A1

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
cs=0x2b76;eip=0x0001a6; 	T(si = 0x305;);	// 215203                  mov     si, 305h ;~ 2B76:01A6
cs=0x2b76;eip=0x0001a9; 	T(XOR(ah, ah));	// 215204                  xor     ah, ah ;~ 2B76:01A9
cs=0x2b76;eip=0x0001ab; 	T(MOV(al, *(raddr(ds,bp+8))));	// 215205                  mov     al, ds:[bp+8] ;~ 2B76:01AB
cs=0x2b76;eip=0x0001af; 	T(OR(al, al));	// 215206                  or      al, al ;~ 2B76:01AF
cs=0x2b76;eip=0x0001b1; 	J(JNS(loc_4a62c));	// 215207                  jns     short loc_4A62C ;~ 2B76:01B1
cs=0x2b76;eip=0x0001b3; 	T(XOR(ax, ax));	// 215208                  xor     ax, ax ;~ 2B76:01B3
cs=0x2b76;eip=0x0001b5; 	T(dx = 2;);	// 215209                  mov     dx, 2 ;~ 2B76:01B5
cs=0x2b76;eip=0x0001b8; 	X(PUSH(si));	// 215210                  push    si ;~ 2B76:01B8
cs=0x2b76;eip=0x0001b9; 	T(si = 0x20;);	// 215211                  mov     si, 20h ; ' ' ;~ 2B76:01B9
cs=0x2b76;eip=0x0001bc; 	T(ADD(si, word_1f226));	// 215212                  add     si, word_1F226 ;~ 2B76:01BC
cs=0x2b76;eip=0x0001c0; 	T(MOV(si, *(dw*)(raddr(ss,si))));	// 215213                  mov     si, ss:[si] ;~ 2B76:01C0
cs=0x2b76;eip=0x0001c3; 	X(word_1f902 = si;);	// 215214                  mov     ds:word_1F902, si ;~ 2B76:01C3
cs=0x2b76;eip=0x0001c7; 	J(CALL(__dispatch_call,off_1f8fe));	// 215215                  call    ds:off_1F8FE ;~ 2B76:01C7
cs=0x2b76;eip=0x0001cb; 	X(POP(si));	// 215216                  pop     si ;~ 2B76:01CB
loc_4a62c:
	// 6616 
cs=0x2b76;eip=0x0001cc; 	T(ADD(ax, ax));	// 215219                  add     ax, ax ;~ 2B76:01CC
cs=0x2b76;eip=0x0001ce; 	T(ADD(si, ax));	// 215220                  add     si, ax ;~ 2B76:01CE
cs=0x2b76;eip=0x0001d0; 	T(MOV(al, *(raddr(ds,di+0x0E))));	// 215221                  mov     al, [di+0Eh] ;~ 2B76:01D0
cs=0x2b76;eip=0x0001d3; 	T(ADD(di, ax));	// 215222                  add     di, ax ;~ 2B76:01D3
cs=0x2b76;eip=0x0001d5; 	T(MOV(ax, *(dw*)(raddr(cs,si))));	// 215223                  mov     ax, cs:[si] ;~ 2B76:01D5
cs=0x2b76;eip=0x0001d8; 	X(MOV(*(raddr(ds,di+3)), al));	// 215224                  mov     [di+3], al ;~ 2B76:01D8
cs=0x2b76;eip=0x0001db; 	X(MOV(*(raddr(ds,bp+9)), ah));	// 215225                  mov     ds:[bp+9], ah ;~ 2B76:01DB
cs=0x2b76;eip=0x0001df; 	J(RETN(0));	// 215226                  retn ;~ 2B76:01DF

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
cs=0x2b76;eip=0x000208; 	T(si = 0x2FD;);	// 215276                  mov     si, 2FDh ;~ 2B76:0208
cs=0x2b76;eip=0x00020b; 	T(ax = cs;);	// 215277                  mov     ax, cs ;~ 2B76:020B
cs=0x2b76;eip=0x00020d; 	T(es = ax;);	// 215278                  mov     es, ax ;~ 2B76:020D
cs=0x2b76;eip=0x00020f; 	J(return seg015_37a_proc(m2c::kloc_4a7da, _state););	// 215280                  jmp     loc_4A7DA ;~ 2B76:020F

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
cs=0x2b76;eip=0x000217; 	J(CALL(sub_4a800,0));	// 215290                  call    sub_4A800 ;~ 2B76:0217
cs=0x2b76;eip=0x00021a; 	T(cx = 0x52;);	// 215291                  mov     cx, 52h ; 'R' ;~ 2B76:021A
cs=0x2b76;eip=0x00021d; 	J(CALL(sub_4a915,0));	// 215292                  call    sub_4A915 ;~ 2B76:021D
cs=0x2b76;eip=0x000220; 	J(JZ(loc_4a687));	// 215293                  jz      short loc_4A687 ;~ 2B76:0220
cs=0x2b76;eip=0x000222; 	J(CALL(sub_4a876,0));	// 215294                  call    sub_4A876 ;~ 2B76:0222
cs=0x2b76;eip=0x000225; 	J(JMP(loc_4a68a));	// 215295                  jmp     short loc_4A68A ;~ 2B76:0225
loc_4a687:
	// 6617 
cs=0x2b76;eip=0x000227; 	J(CALL(sub_4a867,0));	// 215299                  call    sub_4A867 ;~ 2B76:0227
loc_4a68a:
	// 6618 
cs=0x2b76;eip=0x00022a; 	X(PUSH(si));	// 215302                  push    si ;~ 2B76:022A
cs=0x2b76;eip=0x00022b; 	T(ax = cs;);	// 215303                  mov     ax, cs ;~ 2B76:022B
cs=0x2b76;eip=0x00022d; 	T(es = ax;);	// 215304                  mov     es, ax ;~ 2B76:022D
cs=0x2b76;eip=0x00022f; 	T(ax = 0x2F5;);	// 215305                  mov     ax, 2F5h ;~ 2B76:022F
cs=0x2b76;eip=0x000232; 	J(CALL(sub_4a7e0,0));	// 215306                  call    sub_4A7E0 ;~ 2B76:0232
cs=0x2b76;eip=0x000235; 	X(POP(si));	// 215307                  pop     si ;~ 2B76:0235
cs=0x2b76;eip=0x000236; 	T(CMP(*(raddr(ds,bp+0x0B)), 0));	// 215308                  cmp     byte ptr ds:[bp+0Bh], 0 ;~ 2B76:0236
cs=0x2b76;eip=0x00023b; 	J(JNZ(loc_4a6b8));	// 215309                  jnz     short loc_4A6B8 ;~ 2B76:023B
cs=0x2b76;eip=0x00023d; 	T(CMP(*(raddr(ds,bp+9)), 0));	// 215310                  cmp     byte ptr ds:[bp+9], 0 ;~ 2B76:023D
cs=0x2b76;eip=0x000242; 	J(JNZ(locret_4a6b7));	// 215311                  jnz     short locret_4A6B7 ;~ 2B76:0242
cs=0x2b76;eip=0x000244; 	T(MOV(al, *(raddr(ds,bp+0x0C))));	// 215312                  mov     al, ds:[bp+0Ch] ;~ 2B76:0244
cs=0x2b76;eip=0x000248; 	X(MOV(*(raddr(ds,bp+0x0B)), al));	// 215313                  mov     ds:[bp+0Bh], al ;~ 2B76:0248
cs=0x2b76;eip=0x00024c; 	T(MOV(al, *(raddr(ds,si+6))));	// 215314                  mov     al, [si+6] ;~ 2B76:024C
cs=0x2b76;eip=0x00024f; 	T(ADD(al, al));	// 215315                  add     al, al ;~ 2B76:024F
cs=0x2b76;eip=0x000251; 	X(MOV(*(raddr(ds,si+6)), al));	// 215316                  mov     [si+6], al ;~ 2B76:0251
cs=0x2b76;eip=0x000254; 	X(MOV(*(raddr(ds,si+7)), al));	// 215317                  mov     [si+7], al ;~ 2B76:0254
locret_4a6b7:
	// 6619 
cs=0x2b76;eip=0x000257; 	J(RETN(0));	// 215321                  retn ;~ 2B76:0257
loc_4a6b8:
	// 6620 
cs=0x2b76;eip=0x000258; 	X(DEC(*(raddr(ds,bp+0x0B))));	// 215325                  dec     byte ptr ds:[bp+0Bh] ;~ 2B76:0258
cs=0x2b76;eip=0x00025c; 	J(JNZ(locret_4a6b7));	// 215326                  jnz     short locret_4A6B7 ;~ 2B76:025C
cs=0x2b76;eip=0x00025e; 	T(MOV(al, *(raddr(ds,bp+0x0D))));	// 215327                  mov     al, ds:[bp+0Dh] ;~ 2B76:025E
cs=0x2b76;eip=0x000262; 	X(MOV(*(raddr(ds,si+6)), al));	// 215328                  mov     [si+6], al ;~ 2B76:0262
cs=0x2b76;eip=0x000265; 	T(MOV(al, *(raddr(ds,bp+0x0D))));	// 215329                  mov     al, ds:[bp+0Dh] ;~ 2B76:0265
cs=0x2b76;eip=0x000269; 	X(MOV(*(raddr(ds,si+7)), al));	// 215330                  mov     [si+7], al ;~ 2B76:0269
cs=0x2b76;eip=0x00026c; 	T(MOV(al, *(raddr(ds,bp+0x0A))));	// 215331                  mov     al, ds:[bp+0Ah] ;~ 2B76:026C
cs=0x2b76;eip=0x000270; 	X(MOV(*(raddr(ds,bp+9)), al));	// 215332                  mov     ds:[bp+9], al ;~ 2B76:0270
cs=0x2b76;eip=0x000274; 	J(JMP(locret_4a6b7));	// 215333                  jmp     short locret_4A6B7 ;~ 2B76:0274

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
cs=0x2b76;eip=0x000278; 	J(CALL(sub_4a800,0));	// 215342                  call    sub_4A800 ;~ 2B76:0278
cs=0x2b76;eip=0x00027b; 	J(CALL(sub_4a867,0));	// 215343                  call    sub_4A867 ;~ 2B76:027B
cs=0x2b76;eip=0x00027e; 	J(RETN(0));	// 215344                  retn ;~ 2B76:027E

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
cs=0x2b76;eip=0x000281; 	J(RETN(0));	// 215355                  retn ;~ 2B76:0281

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



 bool seg015_37a_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg015_37a_proc:
    _begin:
loc_4a7da:
	// 6621 
cs=0x2b76;eip=0x00037a; 	X(PUSH(si));	// 215611                  push    si ;~ 2B76:037A
cs=0x2b76;eip=0x00037b; 	J(CALL(sub_4a800,0));	// 215612                  call    sub_4A800 ;~ 2B76:037B
cs=0x2b76;eip=0x00037e; 	J(return sub_4a7e0(m2c::kloc_4a7e1, _state););	// 215613                  jmp     short loc_4A7E1 ;~ 2B76:037E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg015_37a_proc: 	goto seg015_37a_proc;
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
cs=0x2b76;eip=0x000380; 	X(PUSH(ax));	// 215620                  push    ax ;~ 2B76:0380
loc_4a7e1:
	// 6622 
cs=0x2b76;eip=0x000381; 	J(CALL(sub_4a811,0));	// 215623                  call    sub_4A811 ;~ 2B76:0381
cs=0x2b76;eip=0x000384; 	X(POP(ax));	// 215624                  pop     ax ;~ 2B76:0384
cs=0x2b76;eip=0x000385; 	T(CMP(*(raddr(ds,bp+8)), cl));	// 215625                  cmp     ds:[bp+8], cl ;~ 2B76:0385
cs=0x2b76;eip=0x000389; 	J(JZ(locret_4a7ff));	// 215626                  jz      short locret_4A7FF ;~ 2B76:0389
cs=0x2b76;eip=0x00038b; 	T(OR(cl, cl));	// 215627                  or      cl, cl ;~ 2B76:038B
cs=0x2b76;eip=0x00038d; 	J(JS(locret_4a7ff));	// 215628                  js      short locret_4A7FF ;~ 2B76:038D
cs=0x2b76;eip=0x00038f; 	X(PUSH(si));	// 215629                  push    si ;~ 2B76:038F
cs=0x2b76;eip=0x000390; 	T(si = ax;);	// 215630                  mov     si, ax ;~ 2B76:0390
cs=0x2b76;eip=0x000392; 	T(ADD(si, cx));	// 215631                  add     si, cx ;~ 2B76:0392
cs=0x2b76;eip=0x000394; 	T(MOV(al, *(raddr(es,si))));	// 215632                  mov     al, es:[si] ;~ 2B76:0394
cs=0x2b76;eip=0x000397; 	X(MOV(*(raddr(ds,bx+3)), al));	// 215633                  mov     [bx+3], al ;~ 2B76:0397
cs=0x2b76;eip=0x00039a; 	X(POP(si));	// 215634                  pop     si ;~ 2B76:039A
cs=0x2b76;eip=0x00039b; 	X(MOV(*(raddr(ds,bp+8)), cl));	// 215635                  mov     ds:[bp+8], cl ;~ 2B76:039B
locret_4a7ff:
	// 6623 
cs=0x2b76;eip=0x00039f; 	J(RETN(0));	// 215639                  retn ;~ 2B76:039F

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
cs=0x2b76;eip=0x0003a0; 	T(si = di;);	// 215648                  mov     si, di ;~ 2B76:03A0
cs=0x2b76;eip=0x0003a2; 	T(bx = di;);	// 215649                  mov     bx, di ;~ 2B76:03A2
cs=0x2b76;eip=0x0003a4; 	T(XOR(ah, ah));	// 215650                  xor     ah, ah ;~ 2B76:03A4
cs=0x2b76;eip=0x0003a6; 	T(MOV(al, *(raddr(ds,si+0x0D))));	// 215651                  mov     al, [si+0Dh] ;~ 2B76:03A6
cs=0x2b76;eip=0x0003a9; 	T(ADD(si, ax));	// 215652                  add     si, ax ;~ 2B76:03A9
cs=0x2b76;eip=0x0003ab; 	T(MOV(al, *(raddr(ds,bx+0x0E))));	// 215653                  mov     al, [bx+0Eh] ;~ 2B76:03AB
cs=0x2b76;eip=0x0003ae; 	T(ADD(bx, ax));	// 215654                  add     bx, ax ;~ 2B76:03AE
cs=0x2b76;eip=0x0003b0; 	J(RETN(0));	// 215655                  retn ;~ 2B76:03B0

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
cs=0x2b76;eip=0x0003b1; 	T(XOR(cx, cx));	// 215663                  xor     cx, cx ;~ 2B76:03B1
cs=0x2b76;eip=0x0003b3; 	T(CMP(*(raddr(ds,si+3)), 0));	// 215664                  cmp     byte ptr [si+3], 0 ;~ 2B76:03B3
cs=0x2b76;eip=0x0003b7; 	J(JZ(loc_4a82d));	// 215665                  jz      short loc_4A82D ;~ 2B76:03B7
cs=0x2b76;eip=0x0003b9; 	J(JNS(loc_4a825));	// 215666                  jns     short loc_4A825 ;~ 2B76:03B9
cs=0x2b76;eip=0x0003bb; 	T(TEST(cl, 4));	// 215667                  test    cl, 4 ;~ 2B76:03BB
cs=0x2b76;eip=0x0003be; 	X(PUSHF);	// 215668                  pushf ;~ 2B76:03BE
cs=0x2b76;eip=0x0003bf; 	T(OR(cl, 4));	// 215669                  or      cl, 4 ;~ 2B76:03BF
cs=0x2b76;eip=0x0003c2; 	X(POPF);	// 215670                  popf ;~ 2B76:03C2
cs=0x2b76;eip=0x0003c3; 	J(JMP(loc_4a82d));	// 215671                  jmp     short loc_4A82D ;~ 2B76:03C3
loc_4a825:
	// 6624 
cs=0x2b76;eip=0x0003c5; 	T(TEST(cl, 8));	// 215675                  test    cl, 8 ;~ 2B76:03C5
cs=0x2b76;eip=0x0003c8; 	X(PUSHF);	// 215676                  pushf ;~ 2B76:03C8
cs=0x2b76;eip=0x0003c9; 	T(OR(cl, 8));	// 215677                  or      cl, 8 ;~ 2B76:03C9
cs=0x2b76;eip=0x0003cc; 	X(POPF);	// 215678                  popf ;~ 2B76:03CC
loc_4a82d:
	// 6625 
cs=0x2b76;eip=0x0003cd; 	T(CMP(*(raddr(ds,si+4)), 0));	// 215682                  cmp     byte ptr [si+4], 0 ;~ 2B76:03CD
cs=0x2b76;eip=0x0003d1; 	J(JZ(loc_4a847));	// 215683                  jz      short loc_4A847 ;~ 2B76:03D1
cs=0x2b76;eip=0x0003d3; 	J(JNS(loc_4a83f));	// 215684                  jns     short loc_4A83F ;~ 2B76:03D3
cs=0x2b76;eip=0x0003d5; 	T(TEST(cl, 1));	// 215685                  test    cl, 1 ;~ 2B76:03D5
cs=0x2b76;eip=0x0003d8; 	X(PUSHF);	// 215686                  pushf ;~ 2B76:03D8
cs=0x2b76;eip=0x0003d9; 	T(OR(cl, 1));	// 215687                  or      cl, 1 ;~ 2B76:03D9
cs=0x2b76;eip=0x0003dc; 	X(POPF);	// 215688                  popf ;~ 2B76:03DC
cs=0x2b76;eip=0x0003dd; 	J(JMP(loc_4a847));	// 215689                  jmp     short loc_4A847 ;~ 2B76:03DD
loc_4a83f:
	// 6626 
cs=0x2b76;eip=0x0003df; 	T(TEST(cl, 2));	// 215693                  test    cl, 2 ;~ 2B76:03DF
cs=0x2b76;eip=0x0003e2; 	X(PUSHF);	// 215694                  pushf ;~ 2B76:03E2
cs=0x2b76;eip=0x0003e3; 	T(OR(cl, 2));	// 215695                  or      cl, 2 ;~ 2B76:03E3
cs=0x2b76;eip=0x0003e6; 	X(POPF);	// 215696                  popf ;~ 2B76:03E6
loc_4a847:
	// 6627 
cs=0x2b76;eip=0x0003e7; 	X(PUSH(si));	// 215700                  push    si ;~ 2B76:03E7
cs=0x2b76;eip=0x0003e8; 	T(si = 0x0E06;);	// 215701                  mov     si, 0E06h ;~ 2B76:03E8
cs=0x2b76;eip=0x0003eb; 	T(ADD(si, cx));	// 215702                  add     si, cx ;~ 2B76:03EB
cs=0x2b76;eip=0x0003ed; 	T(MOV(cl, *(raddr(cs,si))));	// 215703                  mov     cl, cs:[si] ;~ 2B76:03ED
cs=0x2b76;eip=0x0003f0; 	X(POP(si));	// 215704                  pop     si ;~ 2B76:03F0
cs=0x2b76;eip=0x0003f1; 	J(RETN(0));	// 215705                  retn ;~ 2B76:03F1

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



 bool sub_4a867(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_4a867:
    _begin:
cs=0x2b76;eip=0x000407; 	X(PUSH(si));	// 215736                  push    si ;~ 2B76:0407
cs=0x2b76;eip=0x000408; 	X(PUSH(ax));	// 215737                  push    ax ;~ 2B76:0408
cs=0x2b76;eip=0x000409; 	T(ax = word_1f1cc;);	// 215738                  mov     ax, word_1F1CC ;~ 2B76:0409
cs=0x2b76;eip=0x00040c; 	X(*(dw*)(&byte_4ab3a) = ax;);	// 215739                  mov     word ptr cs:byte_4AB3A, ax ;~ 2B76:040C
cs=0x2b76;eip=0x000410; 	X(POP(ax));	// 215740                  pop     ax ;~ 2B76:0410
cs=0x2b76;eip=0x000411; 	J(CALL(sub_4a876,0));	// 215741                  call    sub_4A876 ;~ 2B76:0411
cs=0x2b76;eip=0x000414; 	X(POP(si));	// 215742                  pop     si ;~ 2B76:0414
cs=0x2b76;eip=0x000415; 	J(RETN(0));	// 215743                  retn ;~ 2B76:0415

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
cs=0x2b76;eip=0x000416; 	X(PUSH(bx));	// 215752                  push    bx ;~ 2B76:0416
cs=0x2b76;eip=0x000417; 	T(bx = 0x0DD2;);	// 215753                  mov     bx, 0DD2h ;~ 2B76:0417
cs=0x2b76;eip=0x00041a; 	X(PUSH(si));	// 215754                  push    si ;~ 2B76:041A
cs=0x2b76;eip=0x00041b; 	T(si = *(dw*)(&byte_4ab3a););	// 215755                  mov     si, word ptr cs:byte_4AB3A ;~ 2B76:041B
cs=0x2b76;eip=0x000420; 	T(MOV(dl, *(raddr(ds,si))));	// 215756                  mov     dl, [si] ;~ 2B76:0420
cs=0x2b76;eip=0x000422; 	T(MOV(dh, *(raddr(ds,si+1))));	// 215757                  mov     dh, [si+1] ;~ 2B76:0422
cs=0x2b76;eip=0x000425; 	X(POP(si));	// 215758                  pop     si ;~ 2B76:0425
cs=0x2b76;eip=0x000426; 	T(MOV(al, *(raddr(ds,di))));	// 215759                  mov     al, [di] ;~ 2B76:0426
cs=0x2b76;eip=0x000428; 	T(MOV(ah, *(raddr(ds,di+1))));	// 215760                  mov     ah, [di+1] ;~ 2B76:0428
cs=0x2b76;eip=0x00042b; 	J(CALL(sub_4a9be,0));	// 215761                  call    sub_4A9BE ;~ 2B76:042B
cs=0x2b76;eip=0x00042e; 	T(ADD(cl, cl));	// 215762                  add     cl, cl ;~ 2B76:042E
cs=0x2b76;eip=0x000430; 	T(ADD(bl, cl));	// 215763                  add     bl, cl ;~ 2B76:0430
cs=0x2b76;eip=0x000432; 	T(ADC(bh, 0));	// 215764                  adc     bh, 0 ;~ 2B76:0432
cs=0x2b76;eip=0x000435; 	T(MOV(bx, *(dw*)(raddr(cs,bx))));	// 215765                  mov     bx, cs:[bx] ;~ 2B76:0435
cs=0x2b76;eip=0x000438; 	X(MOV(*(raddr(ds,si+3)), bl));	// 215766                  mov     [si+3], bl ;~ 2B76:0438
cs=0x2b76;eip=0x00043b; 	X(MOV(*(raddr(ds,si+4)), bh));	// 215767                  mov     [si+4], bh ;~ 2B76:043B
cs=0x2b76;eip=0x00043e; 	X(POP(bx));	// 215768                  pop     bx ;~ 2B76:043E
cs=0x2b76;eip=0x00043f; 	J(RETN(0));	// 215769                  retn ;~ 2B76:043F

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_4a876: 	goto sub_4a876;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group37(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group37:
    _begin:
seg015_490_proc:
	// 215856 
loc_4a8f0:
	// 6628 
cs=0x2b76;eip=0x000490; 	T(MOV(dx, *(dw*)(raddr(ds,si-2))));	// 215857                  mov     dx, [si-2] ;~ 2B76:0490
cs=0x2b76;eip=0x000493; 	T(ax = 4;);	// 215858                  mov     ax, 4 ;~ 2B76:0493
cs=0x2b76;eip=0x000496; 	T(ADD(ax, word_1f226));	// 215859                  add     ax, word_1F226 ;~ 2B76:0496
cs=0x2b76;eip=0x00049a; 	X(PUSH(si));	// 215860                  push    si ;~ 2B76:049A
cs=0x2b76;eip=0x00049b; 	T(si = ax;);	// 215861                  mov     si, ax ;~ 2B76:049B
cs=0x2b76;eip=0x00049d; 	T(MOV(ax, *(dw*)(raddr(ss,si))));	// 215862                  mov     ax, ss:[si] ;~ 2B76:049D
cs=0x2b76;eip=0x0004a0; 	X(POP(si));	// 215863                  pop     si ;~ 2B76:04A0
cs=0x2b76;eip=0x0004a1; 	X(word_1f902 = ax;);	// 215864                  mov     ds:word_1F902, ax ;~ 2B76:04A1
cs=0x2b76;eip=0x0004a4; 	J(CALL(__dispatch_call,off_1f8fe));	// 215865                  call    ds:off_1F8FE ;~ 2B76:04A4
cs=0x2b76;eip=0x0004a8; 	X(*(dw*)(&byte_4ab3a) = di;);	// 215866                  mov     word ptr cs:byte_4AB3A, di ;~ 2B76:04A8
cs=0x2b76;eip=0x0004ad; 	X(POP(si));	// 215867                  pop     si ;~ 2B76:04AD
cs=0x2b76;eip=0x0004ae; 	X(POP(di));	// 215868                  pop     di ;~ 2B76:04AE
cs=0x2b76;eip=0x0004af; 	T(ax = 1;);	// 215869                  mov     ax, 1 ;~ 2B76:04AF
cs=0x2b76;eip=0x0004b2; 	T(OR(ax, ax));	// 215870                  or      ax, ax ;~ 2B76:04B2
cs=0x2b76;eip=0x0004b4; 	J(RETN(0));	// 215871                  retn ;~ 2B76:04B4
sub_4a915:
	// 215877 
cs=0x2b76;eip=0x0004b5; 	X(PUSH(di));	// 215881                  push    di ;~ 2B76:04B5
cs=0x2b76;eip=0x0004b6; 	X(PUSH(si));	// 215882                  push    si ;~ 2B76:04B6
cs=0x2b76;eip=0x0004b7; 	J(CALL(sub_4a993,0));	// 215883                  call    sub_4A993 ;~ 2B76:04B7
cs=0x2b76;eip=0x0004ba; 	T(si = di;);	// 215884                  mov     si, di ;~ 2B76:04BA
loc_4a91c:
	// 6629 
cs=0x2b76;eip=0x0004bc; 	X(PUSH(dx));	// 215887                  push    dx ;~ 2B76:04BC
cs=0x2b76;eip=0x0004bd; 	T(LODSW);	// 215888                  lodsw ;~ 2B76:04BD
cs=0x2b76;eip=0x0004be; 	T(dx = ax;);	// 215889                  mov     dx, ax ;~ 2B76:04BE
cs=0x2b76;eip=0x0004c0; 	T(ax = 4;);	// 215890                  mov     ax, 4 ;~ 2B76:04C0
cs=0x2b76;eip=0x0004c3; 	T(ADD(ax, word_1f226));	// 215891                  add     ax, word_1F226 ;~ 2B76:04C3
cs=0x2b76;eip=0x0004c7; 	X(PUSH(si));	// 215892                  push    si ;~ 2B76:04C7
cs=0x2b76;eip=0x0004c8; 	T(si = ax;);	// 215893                  mov     si, ax ;~ 2B76:04C8
cs=0x2b76;eip=0x0004ca; 	T(MOV(ax, *(dw*)(raddr(ss,si))));	// 215894                  mov     ax, ss:[si] ;~ 2B76:04CA
cs=0x2b76;eip=0x0004cd; 	X(POP(si));	// 215895                  pop     si ;~ 2B76:04CD
cs=0x2b76;eip=0x0004ce; 	X(word_1f902 = ax;);	// 215896                  mov     ds:word_1F902, ax ;~ 2B76:04CE
cs=0x2b76;eip=0x0004d1; 	J(CALL(__dispatch_call,off_1f8fe));	// 215897                  call    ds:off_1F8FE ;~ 2B76:04D1
cs=0x2b76;eip=0x0004d5; 	X(POP(dx));	// 215898                  pop     dx ;~ 2B76:04D5
cs=0x2b76;eip=0x0004d6; 	T(CMP(cx, *(dw*)(raddr(ds,di+6))));	// 215899                  cmp     cx, [di+6] ;~ 2B76:04D6
cs=0x2b76;eip=0x0004d9; 	J(JZ(loc_4a8f0));	// 215900                  jz      short loc_4A8F0 ;~ 2B76:04D9
cs=0x2b76;eip=0x0004db; 	T(DEC(dl));	// 215901                  dec     dl ;~ 2B76:04DB
cs=0x2b76;eip=0x0004dd; 	J(JNZ(loc_4a91c));	// 215902                  jnz     short loc_4A91C ;~ 2B76:04DD
cs=0x2b76;eip=0x0004df; 	X(POP(si));	// 215903                  pop     si ;~ 2B76:04DF
cs=0x2b76;eip=0x0004e0; 	X(POP(di));	// 215904                  pop     di ;~ 2B76:04E0
cs=0x2b76;eip=0x0004e1; 	T(XOR(ax, ax));	// 215905                  xor     ax, ax ;~ 2B76:04E1
cs=0x2b76;eip=0x0004e3; 	J(RETN(0));	// 215906                  retn ;~ 2B76:04E3

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_4a91c: 	goto loc_4a91c;
        case m2c::kseg015_490_proc: 	goto seg015_490_proc;
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
cs=0x2b76;eip=0x000533; 	T(si = word_1f1ce;);	// 215994                  mov     si, word_1F1CE ;~ 2B76:0533
cs=0x2b76;eip=0x000537; 	T(MOV(dl, *(raddr(ds,si+0x1D))));	// 215995                  mov     dl, [si+1Dh] ;~ 2B76:0537
cs=0x2b76;eip=0x00053a; 	X(PUSH(dx));	// 215996                  push    dx ;~ 2B76:053A
cs=0x2b76;eip=0x00053b; 	T(dx = word_1f3a2;);	// 215997                  mov     dx, ds:word_1F3A2 ;~ 2B76:053B
cs=0x2b76;eip=0x00053f; 	T(ax = 5;);	// 215998                  mov     ax, 5 ;~ 2B76:053F
cs=0x2b76;eip=0x000542; 	X(PUSH(cx));	// 215999                  push    cx ;~ 2B76:0542
cs=0x2b76;eip=0x000543; 	T(cx = 0;);	// 216000                  mov     cx, 0 ;~ 2B76:0543
cs=0x2b76;eip=0x000546; 	T(ADD(cx, word_1f226));	// 216001                  add     cx, word_1F226 ;~ 2B76:0546
cs=0x2b76;eip=0x00054a; 	X(PUSH(si));	// 216002                  push    si ;~ 2B76:054A
cs=0x2b76;eip=0x00054b; 	T(si = cx;);	// 216003                  mov     si, cx ;~ 2B76:054B
cs=0x2b76;eip=0x00054d; 	T(MOV(cx, *(dw*)(raddr(ss,si))));	// 216004                  mov     cx, ss:[si] ;~ 2B76:054D
cs=0x2b76;eip=0x000550; 	X(POP(si));	// 216005                  pop     si ;~ 2B76:0550
cs=0x2b76;eip=0x000551; 	X(word_1f902 = cx;);	// 216006                  mov     ds:word_1F902, cx ;~ 2B76:0551
cs=0x2b76;eip=0x000555; 	J(CALL(__dispatch_call,off_1f8fe));	// 216007                  call    ds:off_1F8FE ;~ 2B76:0555
cs=0x2b76;eip=0x000559; 	X(POP(cx));	// 216008                  pop     cx ;~ 2B76:0559
cs=0x2b76;eip=0x00055a; 	X(POP(dx));	// 216009                  pop     dx ;~ 2B76:055A
cs=0x2b76;eip=0x00055b; 	T(si = di;);	// 216010                  mov     si, di ;~ 2B76:055B
cs=0x2b76;eip=0x00055d; 	J(RETN(0));	// 216011                  retn ;~ 2B76:055D

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
cs=0x2b76;eip=0x00055e; 	T(XOR(cx, cx));	// 216019                  xor     cx, cx ;~ 2B76:055E
cs=0x2b76;eip=0x000560; 	X(PUSH(ax));	// 216020                  push    ax ;~ 2B76:0560
cs=0x2b76;eip=0x000561; 	T(CMP(byte_1f7c0, 0));	// 216021                  cmp     ds:byte_1F7C0, 0 ;~ 2B76:0561
cs=0x2b76;eip=0x000566; 	J(JZ(loc_4a9fc));	// 216022                  jz      short loc_4A9FC ;~ 2B76:0566
cs=0x2b76;eip=0x000568; 	X(PUSH(ax));	// 216023                  push    ax ;~ 2B76:0568
cs=0x2b76;eip=0x000569; 	X(PUSH(dx));	// 216024                  push    dx ;~ 2B76:0569
cs=0x2b76;eip=0x00056a; 	X(PUSH(bx));	// 216025                  push    bx ;~ 2B76:056A
cs=0x2b76;eip=0x00056b; 	X(PUSH(si));	// 216026                  push    si ;~ 2B76:056B
cs=0x2b76;eip=0x00056c; 	X(PUSH(di));	// 216027                  push    di ;~ 2B76:056C
cs=0x2b76;eip=0x00056d; 	X(PUSH(bp));	// 216028                  push    bp ;~ 2B76:056D
cs=0x2b76;eip=0x00056e; 	T(ax = 0;);	// 216029                  mov     ax, 0 ;~ 2B76:056E
cs=0x2b76;eip=0x000571; 	T(dx = 7;);	// 216030                  mov     dx, 7 ;~ 2B76:0571
cs=0x2b76;eip=0x000574; 	T(cx = 0x20;);	// 216031                  mov     cx, 20h ; ' ' ;~ 2B76:0574
cs=0x2b76;eip=0x000577; 	T(ADD(cx, word_1f226));	// 216032                  add     cx, word_1F226 ;~ 2B76:0577
cs=0x2b76;eip=0x00057b; 	X(PUSH(si));	// 216033                  push    si ;~ 2B76:057B
cs=0x2b76;eip=0x00057c; 	T(si = cx;);	// 216034                  mov     si, cx ;~ 2B76:057C
cs=0x2b76;eip=0x00057e; 	T(MOV(cx, *(dw*)(raddr(ss,si))));	// 216035                  mov     cx, ss:[si] ;~ 2B76:057E
cs=0x2b76;eip=0x000581; 	X(POP(si));	// 216036                  pop     si ;~ 2B76:0581
cs=0x2b76;eip=0x000582; 	X(word_1f902 = cx;);	// 216037                  mov     ds:word_1F902, cx ;~ 2B76:0582
cs=0x2b76;eip=0x000586; 	J(CALL(__dispatch_call,off_1f8fe));	// 216038                  call    ds:off_1F8FE ;~ 2B76:0586
cs=0x2b76;eip=0x00058a; 	T(si = 0x0E11;);	// 216039                  mov     si, 0E11h ;~ 2B76:058A
cs=0x2b76;eip=0x00058d; 	T(ADD(si, ax));	// 216040                  add     si, ax ;~ 2B76:058D
cs=0x2b76;eip=0x00058f; 	T(ch = al;);	// 216041                  mov     ch, al ;~ 2B76:058F
cs=0x2b76;eip=0x000591; 	T(MOV(cl, *(raddr(cs,si))));	// 216042                  mov     cl, cs:[si] ;~ 2B76:0591
cs=0x2b76;eip=0x000594; 	X(POP(bp));	// 216043                  pop     bp ;~ 2B76:0594
cs=0x2b76;eip=0x000595; 	X(POP(di));	// 216044                  pop     di ;~ 2B76:0595
cs=0x2b76;eip=0x000596; 	X(POP(si));	// 216045                  pop     si ;~ 2B76:0596
cs=0x2b76;eip=0x000597; 	X(POP(bx));	// 216046                  pop     bx ;~ 2B76:0597
cs=0x2b76;eip=0x000598; 	X(POP(dx));	// 216047                  pop     dx ;~ 2B76:0598
cs=0x2b76;eip=0x000599; 	X(POP(ax));	// 216048                  pop     ax ;~ 2B76:0599
cs=0x2b76;eip=0x00059a; 	X(POP(ax));	// 216049                  pop     ax ;~ 2B76:059A
cs=0x2b76;eip=0x00059b; 	J(RETN(0));	// 216050                  retn ;~ 2B76:059B
loc_4a9fc:
	// 6630 
cs=0x2b76;eip=0x00059c; 	T(SUB(al, dl));	// 216054                  sub     al, dl ;~ 2B76:059C
cs=0x2b76;eip=0x00059e; 	J(JNS(loc_4aa58));	// 216055                  jns     short loc_4AA58 ;~ 2B76:059E
cs=0x2b76;eip=0x0005a0; 	T(NEG(al));	// 216056                  neg     al ;~ 2B76:05A0
cs=0x2b76;eip=0x0005a2; 	T(SUB(ah, dh));	// 216057                  sub     ah, dh ;~ 2B76:05A2
cs=0x2b76;eip=0x0005a4; 	J(JNS(loc_4aa31));	// 216058                  jns     short loc_4AA31 ;~ 2B76:05A4
cs=0x2b76;eip=0x0005a6; 	T(NEG(ah));	// 216059                  neg     ah ;~ 2B76:05A6
cs=0x2b76;eip=0x0005a8; 	T(CMP(al, 2));	// 216060                  cmp     al, 2 ;~ 2B76:05A8
cs=0x2b76;eip=0x0005aa; 	J(JG(loc_4aa14));	// 216061                  jg      short loc_4AA14 ;~ 2B76:05AA
cs=0x2b76;eip=0x0005ac; 	T(CMP(ah, 2));	// 216063                  cmp     ah, 2 ;~ 2B76:05AC
cs=0x2b76;eip=0x0005af; 	J(JG(loc_4aa14));	// 216064                  jg      short loc_4AA14 ;~ 2B76:05AF
cs=0x2b76;eip=0x0005b1; 	J(JMP(loc_4aaa4));	// 216065                  jmp     loc_4AAA4 ;~ 2B76:05B1
loc_4aa14:
	// 6631 
cs=0x2b76;eip=0x0005b4; 	T(SUB(ah, al));	// 216070                  sub     ah, al ;~ 2B76:05B4
cs=0x2b76;eip=0x0005b6; 	J(JL(loc_4aa22));	// 216071                  jl      short loc_4AA22 ;~ 2B76:05B6
cs=0x2b76;eip=0x0005b8; 	T(CMP(ah, 2));	// 216072                  cmp     ah, 2 ;~ 2B76:05B8
cs=0x2b76;eip=0x0005bb; 	J(JL(loc_4aa2c));	// 216073                  jl      short loc_4AA2C ;~ 2B76:05BB
cs=0x2b76;eip=0x0005bd; 	T(ch = 4;);	// 216074                  mov     ch, 4 ;~ 2B76:05BD
cs=0x2b76;eip=0x0005bf; 	J(JMP(loc_4aaa8));	// 216075                  jmp     loc_4AAA8 ;~ 2B76:05BF
loc_4aa22:
	// 6632 
cs=0x2b76;eip=0x0005c2; 	T(CMP(ah, 0x0FE));	// 216079                  cmp     ah, 0FEh ;~ 2B76:05C2
cs=0x2b76;eip=0x0005c5; 	J(JG(loc_4aa2c));	// 216080                  jg      short loc_4AA2C ;~ 2B76:05C5
cs=0x2b76;eip=0x0005c7; 	T(ch = 2;);	// 216081                  mov     ch, 2 ;~ 2B76:05C7
cs=0x2b76;eip=0x0005c9; 	J(JMP(loc_4aaa8));	// 216082                  jmp     short loc_4AAA8 ;~ 2B76:05C9
loc_4aa2c:
	// 6633 
cs=0x2b76;eip=0x0005cc; 	T(ch = 3;);	// 216089                  mov     ch, 3 ;~ 2B76:05CC
cs=0x2b76;eip=0x0005ce; 	J(JMP(loc_4aaa8));	// 216090                  jmp     short loc_4AAA8 ;~ 2B76:05CE
loc_4aa31:
	// 6634 
cs=0x2b76;eip=0x0005d1; 	T(CMP(al, 2));	// 216096                  cmp     al, 2 ;~ 2B76:05D1
cs=0x2b76;eip=0x0005d3; 	J(JG(loc_4aa3d));	// 216097                  jg      short loc_4AA3D ;~ 2B76:05D3
cs=0x2b76;eip=0x0005d5; 	T(CMP(ah, 2));	// 216098                  cmp     ah, 2 ;~ 2B76:05D5
cs=0x2b76;eip=0x0005d8; 	J(JLE(loc_4aaa4));	// 216099                  jle     short loc_4AAA4 ;~ 2B76:05D8
cs=0x2b76;eip=0x0005da; 	T(NOP);	// 216100                  nop ;~ 2B76:05DA
cs=0x2b76;eip=0x0005db; 	T(NOP);	// 216101                  nop ;~ 2B76:05DB
cs=0x2b76;eip=0x0005dc; 	T(NOP);	// 216102                  nop ;~ 2B76:05DC
loc_4aa3d:
	// 6635 
cs=0x2b76;eip=0x0005dd; 	T(SUB(ah, al));	// 216105                  sub     ah, al ;~ 2B76:05DD
cs=0x2b76;eip=0x0005df; 	J(JL(loc_4aa4b));	// 216106                  jl      short loc_4AA4B ;~ 2B76:05DF
cs=0x2b76;eip=0x0005e1; 	T(CMP(ah, 2));	// 216107                  cmp     ah, 2 ;~ 2B76:05E1
cs=0x2b76;eip=0x0005e4; 	J(JL(loc_4aa54));	// 216108                  jl      short loc_4AA54 ;~ 2B76:05E4
cs=0x2b76;eip=0x0005e6; 	T(XOR(ch, ch));	// 216109                  xor     ch, ch ;~ 2B76:05E6
cs=0x2b76;eip=0x0005e8; 	J(JMP(loc_4aaa8));	// 216110                  jmp     short loc_4AAA8 ;~ 2B76:05E8
loc_4aa4b:
	// 6636 
cs=0x2b76;eip=0x0005eb; 	T(CMP(ah, 0x0FE));	// 216116                  cmp     ah, 0FEh ;~ 2B76:05EB
cs=0x2b76;eip=0x0005ee; 	J(JG(loc_4aa54));	// 216117                  jg      short loc_4AA54 ;~ 2B76:05EE
cs=0x2b76;eip=0x0005f0; 	T(ch = 2;);	// 216118                  mov     ch, 2 ;~ 2B76:05F0
cs=0x2b76;eip=0x0005f2; 	J(JMP(loc_4aaa8));	// 216119                  jmp     short loc_4AAA8 ;~ 2B76:05F2
loc_4aa54:
	// 6637 
cs=0x2b76;eip=0x0005f4; 	T(ch = 1;);	// 216124                  mov     ch, 1 ;~ 2B76:05F4
cs=0x2b76;eip=0x0005f6; 	J(JMP(loc_4aaa8));	// 216125                  jmp     short loc_4AAA8 ;~ 2B76:05F6
loc_4aa58:
	// 6638 
cs=0x2b76;eip=0x0005f8; 	T(SUB(ah, dh));	// 216129                  sub     ah, dh ;~ 2B76:05F8
cs=0x2b76;eip=0x0005fa; 	J(JNS(loc_4aa81));	// 216130                  jns     short loc_4AA81 ;~ 2B76:05FA
cs=0x2b76;eip=0x0005fc; 	T(NEG(ah));	// 216131                  neg     ah ;~ 2B76:05FC
cs=0x2b76;eip=0x0005fe; 	T(CMP(al, 2));	// 216132                  cmp     al, 2 ;~ 2B76:05FE
cs=0x2b76;eip=0x000600; 	J(JG(loc_4aa67));	// 216133                  jg      short loc_4AA67 ;~ 2B76:0600
cs=0x2b76;eip=0x000602; 	T(CMP(ah, 2));	// 216134                  cmp     ah, 2 ;~ 2B76:0602
cs=0x2b76;eip=0x000605; 	J(JLE(loc_4aaa4));	// 216135                  jle     short loc_4AAA4 ;~ 2B76:0605
loc_4aa67:
	// 6639 
cs=0x2b76;eip=0x000607; 	T(SUB(ah, al));	// 216138                  sub     ah, al ;~ 2B76:0607
cs=0x2b76;eip=0x000609; 	J(JL(loc_4aa74));	// 216139                  jl      short loc_4AA74 ;~ 2B76:0609
cs=0x2b76;eip=0x00060b; 	T(CMP(ah, 2));	// 216140                  cmp     ah, 2 ;~ 2B76:060B
cs=0x2b76;eip=0x00060e; 	J(JL(loc_4aa7d));	// 216141                  jl      short loc_4AA7D ;~ 2B76:060E
cs=0x2b76;eip=0x000610; 	T(ch = 4;);	// 216142                  mov     ch, 4 ;~ 2B76:0610
cs=0x2b76;eip=0x000612; 	J(JMP(loc_4aaa8));	// 216143                  jmp     short loc_4AAA8 ;~ 2B76:0612
loc_4aa74:
	// 6640 
cs=0x2b76;eip=0x000614; 	T(CMP(ah, 0x0FE));	// 216147                  cmp     ah, 0FEh ;~ 2B76:0614
cs=0x2b76;eip=0x000617; 	J(JG(loc_4aa7d));	// 216148                  jg      short loc_4AA7D ;~ 2B76:0617
cs=0x2b76;eip=0x000619; 	T(ch = 6;);	// 216149                  mov     ch, 6 ;~ 2B76:0619
cs=0x2b76;eip=0x00061b; 	J(JMP(loc_4aaa8));	// 216150                  jmp     short loc_4AAA8 ;~ 2B76:061B
loc_4aa7d:
	// 6641 
cs=0x2b76;eip=0x00061d; 	T(ch = 5;);	// 216155                  mov     ch, 5 ;~ 2B76:061D
cs=0x2b76;eip=0x00061f; 	J(JMP(loc_4aaa8));	// 216156                  jmp     short loc_4AAA8 ;~ 2B76:061F
loc_4aa81:
	// 6642 
cs=0x2b76;eip=0x000621; 	T(CMP(al, 2));	// 216160                  cmp     al, 2 ;~ 2B76:0621
cs=0x2b76;eip=0x000623; 	J(JG(loc_4aa8a));	// 216161                  jg      short loc_4AA8A ;~ 2B76:0623
cs=0x2b76;eip=0x000625; 	T(CMP(ah, 2));	// 216162                  cmp     ah, 2 ;~ 2B76:0625
cs=0x2b76;eip=0x000628; 	J(JLE(loc_4aaa4));	// 216163                  jle     short loc_4AAA4 ;~ 2B76:0628
loc_4aa8a:
	// 6643 
cs=0x2b76;eip=0x00062a; 	T(SUB(ah, al));	// 216166                  sub     ah, al ;~ 2B76:062A
cs=0x2b76;eip=0x00062c; 	J(JL(loc_4aa97));	// 216167                  jl      short loc_4AA97 ;~ 2B76:062C
cs=0x2b76;eip=0x00062e; 	T(CMP(ah, 2));	// 216168                  cmp     ah, 2 ;~ 2B76:062E
cs=0x2b76;eip=0x000631; 	J(JL(loc_4aaa0));	// 216169                  jl      short loc_4AAA0 ;~ 2B76:0631
cs=0x2b76;eip=0x000633; 	T(ch = 0;);	// 216170                  mov     ch, 0 ;~ 2B76:0633
cs=0x2b76;eip=0x000635; 	J(JMP(loc_4aaa8));	// 216171                  jmp     short loc_4AAA8 ;~ 2B76:0635
loc_4aa97:
	// 6644 
cs=0x2b76;eip=0x000637; 	T(CMP(ah, 2));	// 216175                  cmp     ah, 2 ;~ 2B76:0637
cs=0x2b76;eip=0x00063a; 	J(JL(loc_4aaa0));	// 216176                  jl      short loc_4AAA0 ;~ 2B76:063A
cs=0x2b76;eip=0x00063c; 	T(ch = 6;);	// 216177                  mov     ch, 6 ;~ 2B76:063C
cs=0x2b76;eip=0x00063e; 	J(JMP(loc_4aaa8));	// 216178                  jmp     short loc_4AAA8 ;~ 2B76:063E
loc_4aaa0:
	// 6645 
cs=0x2b76;eip=0x000640; 	T(ch = 7;);	// 216183                  mov     ch, 7 ;~ 2B76:0640
cs=0x2b76;eip=0x000642; 	J(JMP(loc_4aaa8));	// 216184                  jmp     short loc_4AAA8 ;~ 2B76:0642
loc_4aaa4:
	// 6646 
cs=0x2b76;eip=0x000644; 	T(XOR(cx, cx));	// 216189                  xor     cx, cx ;~ 2B76:0644
cs=0x2b76;eip=0x000646; 	X(POP(ax));	// 216190                  pop     ax ;~ 2B76:0646
cs=0x2b76;eip=0x000647; 	J(RETN(0));	// 216191                  retn ;~ 2B76:0647
loc_4aaa8:
	// 6647 
cs=0x2b76;eip=0x000648; 	X(PUSH(si));	// 216196                  push    si ;~ 2B76:0648
cs=0x2b76;eip=0x000649; 	T(CMP(byte_1f7c1, 0));	// 216197                  cmp     ds:byte_1F7C1, 0 ;~ 2B76:0649
cs=0x2b76;eip=0x00064e; 	J(JNZ(loc_4aabe));	// 216198                  jnz     short loc_4AABE ;~ 2B76:064E
cs=0x2b76;eip=0x000650; 	T(CMP(byte_1f847, 0));	// 216199                  cmp     ds:byte_1F847, 0 ;~ 2B76:0650
cs=0x2b76;eip=0x000655; 	J(JZ(loc_4aad3));	// 216200                  jz      short loc_4AAD3 ;~ 2B76:0655
cs=0x2b76;eip=0x000657; 	T(TEST(*(raddr(ds,bp+6)), 8));	// 216201                  test    byte ptr ds:[bp+6], 8 ;~ 2B76:0657
cs=0x2b76;eip=0x00065c; 	J(JNZ(loc_4aad3));	// 216202                  jnz     short loc_4AAD3 ;~ 2B76:065C
loc_4aabe:
	// 6648 
cs=0x2b76;eip=0x00065e; 	T(si = 0x0E15;);	// 216205                  mov     si, 0E15h ;~ 2B76:065E
cs=0x2b76;eip=0x000661; 	T(al = ch;);	// 216206                  mov     al, ch ;~ 2B76:0661
cs=0x2b76;eip=0x000663; 	T(XOR(ah, ah));	// 216207                  xor     ah, ah ;~ 2B76:0663
cs=0x2b76;eip=0x000665; 	T(ADD(si, ax));	// 216208                  add     si, ax ;~ 2B76:0665
cs=0x2b76;eip=0x000667; 	T(MOV(cl, *(raddr(cs,si))));	// 216209                  mov     cl, cs:[si] ;~ 2B76:0667
cs=0x2b76;eip=0x00066a; 	T(ADD(ch, 4));	// 216210                  add     ch, 4 ;~ 2B76:066A
cs=0x2b76;eip=0x00066d; 	T(AND(ch, 7));	// 216211                  and     ch, 7 ;~ 2B76:066D
cs=0x2b76;eip=0x000670; 	X(POP(si));	// 216212                  pop     si ;~ 2B76:0670
cs=0x2b76;eip=0x000671; 	X(POP(ax));	// 216213                  pop     ax ;~ 2B76:0671
cs=0x2b76;eip=0x000672; 	J(RETN(0));	// 216214                  retn ;~ 2B76:0672
loc_4aad3:
	// 6649 
cs=0x2b76;eip=0x000673; 	T(si = 0x0E11;);	// 216219                  mov     si, 0E11h ;~ 2B76:0673
cs=0x2b76;eip=0x000676; 	T(al = ch;);	// 216220                  mov     al, ch ;~ 2B76:0676
cs=0x2b76;eip=0x000678; 	T(XOR(ah, ah));	// 216221                  xor     ah, ah ;~ 2B76:0678
cs=0x2b76;eip=0x00067a; 	T(ADD(si, ax));	// 216222                  add     si, ax ;~ 2B76:067A
cs=0x2b76;eip=0x00067c; 	T(MOV(cl, *(raddr(cs,si))));	// 216223                  mov     cl, cs:[si] ;~ 2B76:067C
cs=0x2b76;eip=0x00067f; 	X(POP(si));	// 216224                  pop     si ;~ 2B76:067F
cs=0x2b76;eip=0x000680; 	X(POP(ax));	// 216225                  pop     ax ;~ 2B76:0680
cs=0x2b76;eip=0x000681; 	J(RETN(0));	// 216226                  retn ;~ 2B76:0681

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
cs=0x2b76;eip=0x000710; 	T(XOR(ah, ah));	// 216379                  xor     ah, ah ;~ 2B76:0710
cs=0x2b76;eip=0x000712; 	T(MOV(al, *(raddr(ds,bx+1))));	// 216380                  mov     al, [bx+1] ;~ 2B76:0712
cs=0x2b76;eip=0x000715; 	T(cx = 6;);	// 216381                  mov     cx, 6 ;~ 2B76:0715
cs=0x2b76;eip=0x000718; 	T(ADD(cx, word_1f226));	// 216382                  add     cx, word_1F226 ;~ 2B76:0718
cs=0x2b76;eip=0x00071c; 	X(PUSH(si));	// 216383                  push    si ;~ 2B76:071C
cs=0x2b76;eip=0x00071d; 	T(si = cx;);	// 216384                  mov     si, cx ;~ 2B76:071D
cs=0x2b76;eip=0x00071f; 	T(MOV(cx, *(dw*)(raddr(ss,si))));	// 216385                  mov     cx, ss:[si] ;~ 2B76:071F
cs=0x2b76;eip=0x000722; 	X(POP(si));	// 216386                  pop     si ;~ 2B76:0722
cs=0x2b76;eip=0x000723; 	X(word_1f902 = cx;);	// 216387                  mov     ds:word_1F902, cx ;~ 2B76:0723
cs=0x2b76;eip=0x000727; 	J(CALL(__dispatch_call,off_1f8fe));	// 216388                  call    ds:off_1F8FE ;~ 2B76:0727
cs=0x2b76;eip=0x00072b; 	J(RETN(0));	// 216389                  retn ;~ 2B76:072B

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


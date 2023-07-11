/* THIS IS GENERATED FILE */

        
#include "f.exe.h"

                

 bool sub_4999e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_4999e:
    _begin:
cs=0x3a50;eip=0x000ebe; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79285                  jmp     far ptr 0:0 ;~ 3A50:0EBE

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_4999e: 	goto sub_4999e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_499a3(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_499a3:
    _begin:
cs=0x3a50;eip=0x000ec3; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79296                  jmp     far ptr 0:0 ;~ 3A50:0EC3

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_499a3: 	goto sub_499a3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_499a8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_499a8:
    _begin:
cs=0x3a50;eip=0x000ec8; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79305                  jmp     far ptr 0:0 ;~ 3A50:0EC8

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_499a8: 	goto sub_499a8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_499ad(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_499ad:
    _begin:
cs=0x3a50;eip=0x000ecd; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79314                  jmp     far ptr 0:0 ;~ 3A50:0ECD

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_499ad: 	goto sub_499ad;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_499b2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_499b2:
    _begin:
cs=0x3a50;eip=0x000ed2; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79324                  jmp     far ptr 0:0 ;~ 3A50:0ED2

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_499b2: 	goto sub_499b2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_499b7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_499b7:
    _begin:
cs=0x3a50;eip=0x000ed7; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79333                  jmp     far ptr 0:0 ;~ 3A50:0ED7

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_499b7: 	goto sub_499b7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_499bc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_499bc:
    _begin:
cs=0x3a50;eip=0x000edc; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79343                  jmp     far ptr 0:0 ;~ 3A50:0EDC

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_499bc: 	goto sub_499bc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg48ae_ee1_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg48ae_ee1_proc:
    _begin:
cs=0x3a50;eip=0x000ee1; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79347                  jmp     far ptr 0:0 ;~ 3A50:0EE1
ret_3a50_ee6:
	// 7190 
cs=0x3a50;eip=0x000ee6; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79349                  jmp     far ptr 0:0 ;~ 3A50:0EE6
ret_3a50_eeb:
	// 7191 
cs=0x3a50;eip=0x000eeb; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79351                  jmp     far ptr 0:0 ;~ 3A50:0EEB
ret_3a50_ef0:
	// 7192 
cs=0x3a50;eip=0x000ef0; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79353                  jmp     far ptr 0:0 ;~ 3A50:0EF0

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kret_3a50_ee6: 	goto ret_3a50_ee6;
        case m2c::kret_3a50_eeb: 	goto ret_3a50_eeb;
        case m2c::kret_3a50_ef0: 	goto ret_3a50_ef0;
        case m2c::kseg48ae_ee1_proc: 	goto seg48ae_ee1_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_499d5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_499d5:
    _begin:
cs=0x3a50;eip=0x000ef5; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79361                  jmp     far ptr 0:0 ;~ 3A50:0EF5

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_499d5: 	goto sub_499d5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_499da(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_499da:
    _begin:
cs=0x3a50;eip=0x000efa; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79371                  jmp     far ptr 0:0 ;~ 3A50:0EFA

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_499da: 	goto sub_499da;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_499df(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_499df:
    _begin:
cs=0x3a50;eip=0x000eff; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79382                  jmp     far ptr 0:0 ;~ 3A50:0EFF

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_499df: 	goto sub_499df;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_499e4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_499e4:
    _begin:
cs=0x3a50;eip=0x000f04; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79392                  jmp     far ptr 0:0 ;~ 3A50:0F04

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_499e4: 	goto sub_499e4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_499e9(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_499e9:
    _begin:
cs=0x3a50;eip=0x000f09; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79402                  jmp     far ptr 0:0 ;~ 3A50:0F09

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_499e9: 	goto sub_499e9;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_499ee(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_499ee:
    _begin:
cs=0x3a50;eip=0x000f0e; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79412                  jmp     far ptr 0:0 ;~ 3A50:0F0E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_499ee: 	goto sub_499ee;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg48ae_f13_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg48ae_f13_proc:
    _begin:
cs=0x3a50;eip=0x000f13; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79416                  jmp     far ptr 0:0 ;~ 3A50:0F13

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg48ae_f13_proc: 	goto seg48ae_f13_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_499f8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_499f8:
    _begin:
cs=0x3a50;eip=0x000f18; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79424                  jmp     far ptr 0:0 ;~ 3A50:0F18

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_499f8: 	goto sub_499f8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg48ae_f1d_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg48ae_f1d_proc:
    _begin:
cs=0x3a50;eip=0x000f1d; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79428                  jmp     far ptr 0:0 ;~ 3A50:0F1D
ret_3a50_f22:
	// 7193 
cs=0x3a50;eip=0x000f22; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79430                  jmp     far ptr 0:0 ;~ 3A50:0F22
ret_3a50_f27:
	// 7194 
cs=0x3a50;eip=0x000f27; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79432                  jmp     far ptr 0:0 ;~ 3A50:0F27
ret_3a50_f2c:
	// 7195 
cs=0x3a50;eip=0x000f2c; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79434                  jmp     far ptr 0:0 ;~ 3A50:0F2C
ret_3a50_f31:
	// 7196 
cs=0x3a50;eip=0x000f31; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79436                  jmp     far ptr 0:0 ;~ 3A50:0F31

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kret_3a50_f22: 	goto ret_3a50_f22;
        case m2c::kret_3a50_f27: 	goto ret_3a50_f27;
        case m2c::kret_3a50_f2c: 	goto ret_3a50_f2c;
        case m2c::kret_3a50_f31: 	goto ret_3a50_f31;
        case m2c::kseg48ae_f1d_proc: 	goto seg48ae_f1d_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a16(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a16:
    _begin:
cs=0x3a50;eip=0x000f36; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79444                  jmp     far ptr 0:0 ;~ 3A50:0F36

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a16: 	goto sub_49a16;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a1b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a1b:
    _begin:
cs=0x3a50;eip=0x000f3b; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79454                  jmp     far ptr 0:0 ;~ 3A50:0F3B

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a1b: 	goto sub_49a1b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a20(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a20:
    _begin:
cs=0x3a50;eip=0x000f40; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79464                  jmp     far ptr 0:0 ;~ 3A50:0F40

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a20: 	goto sub_49a20;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a25(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a25:
    _begin:
cs=0x3a50;eip=0x000f45; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79473                  jmp     far ptr 0:0 ;~ 3A50:0F45

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a25: 	goto sub_49a25;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a2a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a2a:
    _begin:
cs=0x3a50;eip=0x000f4a; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79482                  jmp     far ptr 0:0 ;~ 3A50:0F4A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a2a: 	goto sub_49a2a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a2f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a2f:
    _begin:
cs=0x3a50;eip=0x000f4f; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79492                  jmp     far ptr 0:0 ;~ 3A50:0F4F

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a2f: 	goto sub_49a2f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg48ae_f54_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg48ae_f54_proc:
    _begin:
cs=0x3a50;eip=0x000f54; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79496                  jmp     far ptr 0:0 ;~ 3A50:0F54

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg48ae_f54_proc: 	goto seg48ae_f54_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a39(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a39:
    _begin:
cs=0x3a50;eip=0x000f59; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79504                  jmp     far ptr 0:0 ;~ 3A50:0F59

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a39: 	goto sub_49a39;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a3e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a3e:
    _begin:
cs=0x3a50;eip=0x000f5e; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79514                  jmp     far ptr 0:0 ;~ 3A50:0F5E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a3e: 	goto sub_49a3e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a43(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a43:
    _begin:
cs=0x3a50;eip=0x000f63; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79524                  jmp     far ptr 0:0 ;~ 3A50:0F63

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a43: 	goto sub_49a43;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a48(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a48:
    _begin:
cs=0x3a50;eip=0x000f68; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79535                  jmp     far ptr 0:0 ;~ 3A50:0F68

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a48: 	goto sub_49a48;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a4d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a4d:
    _begin:
cs=0x3a50;eip=0x000f6d; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79545                  jmp     far ptr 0:0 ;~ 3A50:0F6D

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a4d: 	goto sub_49a4d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a52(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a52:
    _begin:
cs=0x3a50;eip=0x000f72; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79554                  jmp     far ptr 0:0 ;~ 3A50:0F72

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a52: 	goto sub_49a52;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a57(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a57:
    _begin:
cs=0x3a50;eip=0x000f77; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79564                  jmp     far ptr 0:0 ;~ 3A50:0F77

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a57: 	goto sub_49a57;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg48ae_f7c_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg48ae_f7c_proc:
    _begin:
cs=0x3a50;eip=0x000f7c; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79568                  jmp     far ptr 0:0 ;~ 3A50:0F7C
ret_3a50_f81:
	// 7197 
cs=0x3a50;eip=0x000f81; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79570                  jmp     far ptr 0:0 ;~ 3A50:0F81

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kret_3a50_f81: 	goto ret_3a50_f81;
        case m2c::kseg48ae_f7c_proc: 	goto seg48ae_f7c_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a66(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a66:
    _begin:
cs=0x3a50;eip=0x000f86; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79577                  jmp     far ptr 0:0 ;~ 3A50:0F86

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a66: 	goto sub_49a66;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a6b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a6b:
    _begin:
cs=0x3a50;eip=0x000f8b; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79588                  jmp     far ptr 0:0 ;~ 3A50:0F8B

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a6b: 	goto sub_49a6b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a70(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a70:
    _begin:
cs=0x3a50;eip=0x000f90; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79598                  jmp     far ptr 0:0 ;~ 3A50:0F90

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a70: 	goto sub_49a70;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg48ae_f95_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg48ae_f95_proc:
    _begin:
cs=0x3a50;eip=0x000f95; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79602                  jmp     far ptr 0:0 ;~ 3A50:0F95

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg48ae_f95_proc: 	goto seg48ae_f95_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a7a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a7a:
    _begin:
cs=0x3a50;eip=0x000f9a; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79609                  jmp     far ptr 0:0 ;~ 3A50:0F9A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a7a: 	goto sub_49a7a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a7f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a7f:
    _begin:
cs=0x3a50;eip=0x000f9f; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79619                  jmp     far ptr 0:0 ;~ 3A50:0F9F

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a7f: 	goto sub_49a7f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a84(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a84:
    _begin:
cs=0x3a50;eip=0x000fa4; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79628                  jmp     far ptr 0:0 ;~ 3A50:0FA4

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a84: 	goto sub_49a84;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg48ae_fa9_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg48ae_fa9_proc:
    _begin:
cs=0x3a50;eip=0x000fa9; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79632                  jmp     far ptr 0:0 ;~ 3A50:0FA9
ret_3a50_fae:
	// 7198 
cs=0x3a50;eip=0x000fae; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79634                  jmp     far ptr 0:0 ;~ 3A50:0FAE
ret_3a50_fb3:
	// 7199 
cs=0x3a50;eip=0x000fb3; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79636                  jmp     far ptr 0:0 ;~ 3A50:0FB3

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kret_3a50_fae: 	goto ret_3a50_fae;
        case m2c::kret_3a50_fb3: 	goto ret_3a50_fb3;
        case m2c::kseg48ae_fa9_proc: 	goto seg48ae_fa9_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a98(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a98:
    _begin:
cs=0x3a50;eip=0x000fb8; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79644                  jmp     far ptr 0:0 ;~ 3A50:0FB8

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a98: 	goto sub_49a98;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49a9d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a9d:
    _begin:
cs=0x3a50;eip=0x000fbd; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79654                  jmp     far ptr 0:0 ;~ 3A50:0FBD

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a9d: 	goto sub_49a9d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49aa2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49aa2:
    _begin:
cs=0x3a50;eip=0x000fc2; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79663                  jmp     far ptr 0:0 ;~ 3A50:0FC2

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49aa2: 	goto sub_49aa2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49aa7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49aa7:
    _begin:
cs=0x3a50;eip=0x000fc7; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79672                  jmp     far ptr 0:0 ;~ 3A50:0FC7

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49aa7: 	goto sub_49aa7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49aac(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49aac:
    _begin:
cs=0x3a50;eip=0x000fcc; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79681                  jmp     far ptr 0:0 ;~ 3A50:0FCC

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49aac: 	goto sub_49aac;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49ab1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49ab1:
    _begin:
cs=0x3a50;eip=0x000fd1; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79691                  jmp     far ptr 0:0 ;~ 3A50:0FD1

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49ab1: 	goto sub_49ab1;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49ab6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49ab6:
    _begin:
cs=0x3a50;eip=0x000fd6; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79700                  jmp     far ptr 0:0 ;~ 3A50:0FD6

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49ab6: 	goto sub_49ab6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg48ae_fdb_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg48ae_fdb_proc:
    _begin:
cs=0x3a50;eip=0x000fdb; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79704                  jmp     far ptr 0:0 ;~ 3A50:0FDB

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg48ae_fdb_proc: 	goto seg48ae_fdb_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49ac0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49ac0:
    _begin:
cs=0x3a50;eip=0x000fe0; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79712                  jmp     far ptr 0:0 ;~ 3A50:0FE0

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49ac0: 	goto sub_49ac0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49ac5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49ac5:
    _begin:
cs=0x3a50;eip=0x000fe5; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79722                  jmp     far ptr 0:0 ;~ 3A50:0FE5

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49ac5: 	goto sub_49ac5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg48ae_fea_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg48ae_fea_proc:
    _begin:
cs=0x3a50;eip=0x000fea; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79726                  jmp     far ptr 0:0 ;~ 3A50:0FEA

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg48ae_fea_proc: 	goto seg48ae_fea_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49acf(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49acf:
    _begin:
cs=0x3a50;eip=0x000fef; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79734                  jmp     far ptr 0:0 ;~ 3A50:0FEF

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49acf: 	goto sub_49acf;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49ad4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49ad4:
    _begin:
cs=0x3a50;eip=0x000ff4; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79744                  jmp     far ptr 0:0 ;~ 3A50:0FF4

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49ad4: 	goto sub_49ad4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49ad9(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49ad9:
    _begin:
cs=0x3a50;eip=0x000ff9; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79754                  jmp     far ptr 0:0 ;~ 3A50:0FF9

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49ad9: 	goto sub_49ad9;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49ae3(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49ae3:
    _begin:
cs=0x3a50;eip=0x001003; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79769                  jmp     far ptr 0:0 ;~ 3A50:1003

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49ae3: 	goto sub_49ae3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49af2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49af2:
    _begin:
cs=0x3a50;eip=0x001012; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79790                  jmp     far ptr 0:0 ;~ 3A50:1012

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49af2: 	goto sub_49af2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49af7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49af7:
    _begin:
cs=0x3a50;eip=0x001017; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79800                  jmp     far ptr 0:0 ;~ 3A50:1017

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49af7: 	goto sub_49af7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49afc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49afc:
    _begin:
cs=0x3a50;eip=0x00101c; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79810                  jmp     far ptr 0:0 ;~ 3A50:101C

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49afc: 	goto sub_49afc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49b01(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49b01:
    _begin:
cs=0x3a50;eip=0x001021; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79820                  jmp     far ptr 0:0 ;~ 3A50:1021

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49b01: 	goto sub_49b01;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49b0b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49b0b:
    _begin:
cs=0x3a50;eip=0x00102b; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79835                  jmp     far ptr 0:0 ;~ 3A50:102B

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49b0b: 	goto sub_49b0b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49b15(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49b15:
    _begin:
cs=0x3a50;eip=0x001035; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79852                  jmp     far ptr 0:0 ;~ 3A50:1035

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49b15: 	goto sub_49b15;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49b1a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49b1a:
    _begin:
cs=0x3a50;eip=0x00103a; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79862                  jmp     far ptr 0:0 ;~ 3A50:103A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49b1a: 	goto sub_49b1a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49b29(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49b29:
    _begin:
cs=0x3a50;eip=0x001049; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79883                  jmp     far ptr 0:0 ;~ 3A50:1049

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49b29: 	goto sub_49b29;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49b38(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49b38:
    _begin:
cs=0x3a50;eip=0x001058; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79904                  jmp     far ptr 0:0 ;~ 3A50:1058

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49b38: 	goto sub_49b38;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49b65(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49b65:
    _begin:
cs=0x3a50;eip=0x001085; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79955                  jmp     far ptr 0:0 ;~ 3A50:1085

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49b65: 	goto sub_49b65;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49b6f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49b6f:
    _begin:
cs=0x3a50;eip=0x00108f; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 79970                  jmp     far ptr 0:0 ;~ 3A50:108F

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49b6f: 	goto sub_49b6f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49b92(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49b92:
    _begin:
cs=0x3a50;eip=0x0010b2; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 80011                  jmp     far ptr 0:0 ;~ 3A50:10B2

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49b92: 	goto sub_49b92;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49b97(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49b97:
    _begin:
cs=0x3a50;eip=0x0010b7; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 80021                  jmp     far ptr 0:0 ;~ 3A50:10B7

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49b97: 	goto sub_49b97;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49b9c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49b9c:
    _begin:
cs=0x3a50;eip=0x0010bc; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 80030                  jmp     far ptr 0:0 ;~ 3A50:10BC

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49b9c: 	goto sub_49b9c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49ba6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49ba6:
    _begin:
cs=0x3a50;eip=0x0010c6; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 80045                  jmp     far ptr 0:0 ;~ 3A50:10C6

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49ba6: 	goto sub_49ba6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49bab(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49bab:
    _begin:
cs=0x3a50;eip=0x0010cb; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 80055                  jmp     far ptr 0:0 ;~ 3A50:10CB

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49bab: 	goto sub_49bab;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49bb0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49bb0:
    _begin:
cs=0x3a50;eip=0x0010d0; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 80064                  jmp     far ptr 0:0 ;~ 3A50:10D0

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49bb0: 	goto sub_49bb0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49bb5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49bb5:
    _begin:
cs=0x3a50;eip=0x0010d5; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 80073                  jmp     far ptr 0:0 ;~ 3A50:10D5

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49bb5: 	goto sub_49bb5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49bba(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49bba:
    _begin:
cs=0x3a50;eip=0x0010da; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 80082                  jmp     far ptr 0:0 ;~ 3A50:10DA

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49bba: 	goto sub_49bba;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_49bbf(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49bbf:
    _begin:
cs=0x3a50;eip=0x0010df; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 80092                  jmp     far ptr 0:0 ;~ 3A50:10DF

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49bbf: 	goto sub_49bbf;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg48ae_1300_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg48ae_1300_proc:
    _begin:
cs=0x3a50;eip=0x001300; 	X(ADD(*(raddr(ds,bx+di)), al));	// 80167                  add     [bx+di], al ;~ 3A50:1300
cs=0x3a50;eip=0x001302; 	T(INC(ax));	// 80168                  inc     ax ;~ 3A50:1302
cs=0x3a50;eip=0x001303; 	X(ADD(*(raddr(ds,bx+si)), dl));	// 80169                  add     [bx+si], dl ;~ 3A50:1303
cs=0x3a50;eip=0x001305; 	X(ADD(*(raddr(ds,bx+si)), cl));	// 80170                  add     [bx+si], cl ;~ 3A50:1305
cs=0x3a50;eip=0x00597a; 	J(RETF(0));	// 83892                  retf ;~ 3A50:597A
ret_3a50_674e:
	// 7200 
cs=0x3a50;eip=0x00674e; 	T(SUB(al, al));	// 84942                  sub     al, al ;~ 3A50:674E
cs=0x3a50;eip=0x006750; 	X(*((amsruntimelibra)+3) = ah;);	// 84943                  mov     byte ptr cs:aMsRunTimeLibra+3, ah ; "Run-Time Library - Copyright (c) 1988, "... ;~ 3A50:6750
cs=0x3a50;eip=0x006755; 	S(OUT(dx, ax));	// 84944                  out     dx, ax ;~ 3A50:6755
cs=0x3a50;eip=0x006756; 	T(al = 8;);	// 84945                  mov     al, 8 ;~ 3A50:6756
cs=0x3a50;eip=0x006758; 	S(OUT(dx, al));	// 84946                  out     dx, al ;~ 3A50:6758
cs=0x3a50;eip=0x006759; 	T(CLI);	// 84947                  cli ;~ 3A50:6759
cs=0x3a50;eip=0x00675a; 	T(INC(dx));	// 84948                  inc     dx ;~ 3A50:675A
cs=0x3a50;eip=0x00675b; 	T(CMP(*(db*)(((db*)word_4aa98)+3), 1));	// 84949                  cmp     byte ptr word_4AA98+3, 1 ;~ 3A50:675B
cs=0x3a50;eip=0x006760; 	J(JNZ(loc_4f248));	// 84950                  jnz     short loc_4F248 ;~ 3A50:6760
cs=0x3a50;eip=0x006762; 	T(ADD(si, 4));	// 84951                  add     si, 4 ;~ 3A50:6762
cs=0x3a50;eip=0x006765; 	J(JMP(loc_4f2ef));	// 84952                  jmp     loc_4F2EF ;~ 3A50:6765
loc_4f248:
	// 7201 
cs=0x3a50;eip=0x006768; 	T(di = 0x410;);	// 84956                  mov     di, 410h ;~ 3A50:6768
cs=0x3a50;eip=0x00676b; 	T(ADD(di, *(dw*)(raddr(ds,si+0x1F9C))));	// 84957                  add     di, [si+1F9Ch] ;~ 3A50:676B
cs=0x3a50;eip=0x00676f; 	T(al = 0x28;);	// 84958                  mov     al, 28h ; '(' ;~ 3A50:676F
cs=0x3a50;eip=0x006771; 	T(cl = *(db*)(word_4aa98););	// 84959                  mov     cl, byte ptr word_4AA98 ;~ 3A50:6771
cs=0x3a50;eip=0x006775; 	T(SUB(cl, 0x1B));	// 84960                  sub     cl, 1Bh ;~ 3A50:6775
cs=0x3a50;eip=0x006778; 	T(MUL1_1(cl));	// 84961                  mul     cl ;~ 3A50:6778
cs=0x3a50;eip=0x00677a; 	T(ADD(di, ax));	// 84962                  add     di, ax ;~ 3A50:677A
cs=0x3a50;eip=0x00677c; 	T(bx = di;);	// 84963                  mov     bx, di ;~ 3A50:677C
cs=0x3a50;eip=0x00677e; 	T(bp = di;);	// 84964                  mov     bp, di ;~ 3A50:677E
cs=0x3a50;eip=0x006780; 	T(CMP(*(db*)(((db*)word_4aa98)+2), 1));	// 84965                  cmp     byte ptr word_4AA98+2, 1 ;~ 3A50:6780
cs=0x3a50;eip=0x006785; 	J(JL(loc_4f26f));	// 84966                  jl      short loc_4F26F ;~ 3A50:6785
cs=0x3a50;eip=0x006787; 	T(ADD(bx, 0x320));	// 84967                  add     bx, 320h ;~ 3A50:6787
cs=0x3a50;eip=0x00678b; 	T(ADD(di, 0x190));	// 84968                  add     di, 190h ;~ 3A50:678B
loc_4f26f:
	// 7202 
cs=0x3a50;eip=0x00678f; 	T(bp = bx;);	// 84971                  mov     bp, bx ;~ 3A50:678F
cs=0x3a50;eip=0x006791; 	T(SUB(bp, 0x190));	// 84972                  sub     bp, 190h ;~ 3A50:6791
cs=0x3a50;eip=0x006795; 	T(cx = 0;);	// 84973                  mov     cx, 0 ;~ 3A50:6795
cs=0x3a50;eip=0x006798; 	T(MOV(al, *(raddr(ds,si+0x1FA4))));	// 84974                  mov     al, [si+1FA4h] ;~ 3A50:6798
cs=0x3a50;eip=0x00679c; 	S(OUT(dx, al));	// 84975                  out     dx, al ;~ 3A50:679C
cs=0x3a50;eip=0x00679d; 	J(JCXZ(loc_4f295));	// 84976                  jcxz    short loc_4F295 ;~ 3A50:679D
loc_4f27f:
	// 7203 
cs=0x3a50;eip=0x00679f; 	T(CMP(di, 0x410));	// 84980                  cmp     di, 410h ;~ 3A50:679F
cs=0x3a50;eip=0x0067a3; 	J(JC(loc_4f29d));	// 84981                  jb      short loc_4F29D ;~ 3A50:67A3
cs=0x3a50;eip=0x0067a5; 	T(CMP(di, 0x0D70));	// 84982                  cmp     di, 0D70h ;~ 3A50:67A5
cs=0x3a50;eip=0x0067a9; 	J(JA(loc_4f290));	// 84983                  ja      short loc_4F290 ;~ 3A50:67A9
cs=0x3a50;eip=0x0067ab; 	T(CMP(*(raddr(es,di)), al));	// 84984                  cmp     es:[di], al ;~ 3A50:67AB
cs=0x3a50;eip=0x0067ae; 	X(STOSB);	// 84985                  stosb ;~ 3A50:67AE
cs=0x3a50;eip=0x0067af; 	T(DEC(di));	// 84986                  dec     di ;~ 3A50:67AF
loc_4f290:
	// 7204 
cs=0x3a50;eip=0x0067b0; 	T(SUB(di, 0x50));	// 84989                  sub     di, 50h ; 'P' ;~ 3A50:67B0
cs=0x3a50;eip=0x0067b3; 	J(LOOP(loc_4f27f));	// 84990                  loop    loc_4F27F ;~ 3A50:67B3
loc_4f295:
	// 7205 
cs=0x3a50;eip=0x0067b5; 	T(SUB(di, 0x50));	// 84993                  sub     di, 50h ; 'P' ;~ 3A50:67B5
cs=0x3a50;eip=0x0067b8; 	T(cx = 4;);	// 84994                  mov     cx, 4 ;~ 3A50:67B8
cs=0x3a50;eip=0x0067bb; 	J(JNZ(loc_4f27f));	// 84995                  jnz     short loc_4F27F ;~ 3A50:67BB
loc_4f29d:
	// 7206 
cs=0x3a50;eip=0x0067bd; 	T(di = bx;);	// 84998                  mov     di, bx ;~ 3A50:67BD
cs=0x3a50;eip=0x0067bf; 	T(MOV(al, *(raddr(ds,si+0x1FB0))));	// 84999                  mov     al, [si+1FB0h] ;~ 3A50:67BF
cs=0x3a50;eip=0x0067c3; 	S(OUT(dx, al));	// 85000                  out     dx, al ;~ 3A50:67C3
loc_4f2a4:
	// 7207 
cs=0x3a50;eip=0x0067c4; 	T(CMP(di, 0x410));	// 85003                  cmp     di, 410h ;~ 3A50:67C4
cs=0x3a50;eip=0x0067c8; 	J(JC(loc_4f2bb));	// 85004                  jb      short loc_4F2BB ;~ 3A50:67C8
cs=0x3a50;eip=0x0067ca; 	T(CMP(di, 0x0D70));	// 85005                  cmp     di, 0D70h ;~ 3A50:67CA
cs=0x3a50;eip=0x0067ce; 	J(JA(loc_4f2b5));	// 85006                  ja      short loc_4F2B5 ;~ 3A50:67CE
cs=0x3a50;eip=0x0067d0; 	T(CMP(*(raddr(es,di)), al));	// 85007                  cmp     es:[di], al ;~ 3A50:67D0
cs=0x3a50;eip=0x0067d3; 	X(STOSB);	// 85008                  stosb ;~ 3A50:67D3
cs=0x3a50;eip=0x0067d4; 	T(DEC(di));	// 85009                  dec     di ;~ 3A50:67D4
loc_4f2b5:
	// 7208 
cs=0x3a50;eip=0x0067d5; 	T(SUB(di, 0x320));	// 85012                  sub     di, 320h ;~ 3A50:67D5
cs=0x3a50;eip=0x0067d9; 	J(JMP(loc_4f2a4));	// 85013                  jmp     short loc_4F2A4 ;~ 3A50:67D9
loc_4f2bb:
	// 7209 
cs=0x3a50;eip=0x0067db; 	T(di = bp;);	// 85017                  mov     di, bp ;~ 3A50:67DB
cs=0x3a50;eip=0x0067dd; 	T(MOV(al, *(raddr(ds,si+0x1FAC))));	// 85018                  mov     al, [si+1FACh] ;~ 3A50:67DD
cs=0x3a50;eip=0x0067e1; 	S(OUT(dx, al));	// 85019                  out     dx, al ;~ 3A50:67E1
loc_4f2c2:
	// 7210 
cs=0x3a50;eip=0x0067e2; 	T(CMP(di, 0x410));	// 85022                  cmp     di, 410h ;~ 3A50:67E2
cs=0x3a50;eip=0x0067e6; 	J(JC(loc_4f2d9));	// 85023                  jb      short loc_4F2D9 ;~ 3A50:67E6
cs=0x3a50;eip=0x0067e8; 	T(CMP(di, 0x0D70));	// 85024                  cmp     di, 0D70h ;~ 3A50:67E8
cs=0x3a50;eip=0x0067ec; 	J(JA(loc_4f2d3));	// 85025                  ja      short loc_4F2D3 ;~ 3A50:67EC
cs=0x3a50;eip=0x0067ee; 	T(CMP(*(raddr(es,di)), al));	// 85026                  cmp     es:[di], al ;~ 3A50:67EE
cs=0x3a50;eip=0x0067f1; 	X(STOSB);	// 85027                  stosb ;~ 3A50:67F1
cs=0x3a50;eip=0x0067f2; 	T(DEC(di));	// 85028                  dec     di ;~ 3A50:67F2
loc_4f2d3:
	// 7211 
cs=0x3a50;eip=0x0067f3; 	T(SUB(di, 0x320));	// 85031                  sub     di, 320h ;~ 3A50:67F3
cs=0x3a50;eip=0x0067f7; 	J(JMP(loc_4f2c2));	// 85032                  jmp     short loc_4F2C2 ;~ 3A50:67F7
loc_4f2d9:
	// 7212 
cs=0x3a50;eip=0x0067f9; 	T(STI);	// 85037                  sti ;~ 3A50:67F9
cs=0x3a50;eip=0x0067fa; 	T(ax = 1;);	// 85038                  mov     ax, 1 ;~ 3A50:67FA
cs=0x3a50;eip=0x0067fd; 	X(*((amsruntimelibra)+4) = ah;);	// 85039                  mov     byte ptr cs:aMsRunTimeLibra+4, ah ; "un-Time Library - Copyright (c) 1988, M"... ;~ 3A50:67FD
cs=0x3a50;eip=0x006802; 	S(OUT(dx, ax));	// 85040                  out     dx, ax ;~ 3A50:6802
cs=0x3a50;eip=0x006803; 	T(ax = 0x0FF08;);	// 85041                  mov     ax, 0FF08h ;~ 3A50:6803
cs=0x3a50;eip=0x006806; 	X(*((amsruntimelibra)+9) = ah;);	// 85042                  mov     byte ptr cs:aMsRunTimeLibra+9, ah ; "me Library - Copyright (c) 1988, Micros"... ;~ 3A50:6806
cs=0x3a50;eip=0x00680b; 	S(OUT(dx, ax));	// 85043                  out     dx, ax ;~ 3A50:680B
cs=0x3a50;eip=0x00680c; 	X(POP(ds));	// 85044                  pop     ds ;~ 3A50:680C
cs=0x3a50;eip=0x00680d; 	X(POP(es));	// 85046                  pop     es ;~ 3A50:680D
cs=0x3a50;eip=0x00680e; 	J(RETF(0));	// 85048                  retf ;~ 3A50:680E
loc_4f2ef:
	// 7213 
cs=0x3a50;eip=0x00680f; 	T(di = 0x0A50;);	// 85052                  mov     di, 0A50h ;~ 3A50:680F
cs=0x3a50;eip=0x006812; 	T(ADD(di, *(dw*)(raddr(ds,si+0x1F9C))));	// 85053                  add     di, [si+1F9Ch] ;~ 3A50:6812
cs=0x3a50;eip=0x006816; 	T(al = 0x28;);	// 85054                  mov     al, 28h ; '(' ;~ 3A50:6816
cs=0x3a50;eip=0x006818; 	T(MOV(cl, *(raddr(ds,0x1FB8))));	// 85055                  mov     cl, ds:1FB8h ;~ 3A50:6818
cs=0x3a50;eip=0x00681c; 	T(SUB(cl, 0x42));	// 85056                  sub     cl, 42h ; 'B' ;~ 3A50:681C
cs=0x3a50;eip=0x00681f; 	T(MUL1_1(cl));	// 85057                  mul     cl ;~ 3A50:681F
cs=0x3a50;eip=0x006821; 	T(ADD(di, ax));	// 85058                  add     di, ax ;~ 3A50:6821
cs=0x3a50;eip=0x006823; 	T(bx = di;);	// 85059                  mov     bx, di ;~ 3A50:6823
cs=0x3a50;eip=0x006825; 	T(bp = di;);	// 85060                  mov     bp, di ;~ 3A50:6825
cs=0x3a50;eip=0x006827; 	T(CMP(*(raddr(ds,0x1FBA)), 1));	// 85061                  cmp     byte ptr ds:1FBAh, 1 ;~ 3A50:6827
cs=0x3a50;eip=0x00682c; 	J(JL(loc_4f316));	// 85062                  jl      short loc_4F316 ;~ 3A50:682C
cs=0x3a50;eip=0x00682e; 	T(ADD(bx, 0x320));	// 85063                  add     bx, 320h ;~ 3A50:682E
cs=0x3a50;eip=0x006832; 	T(ADD(di, 0x190));	// 85064                  add     di, 190h ;~ 3A50:6832
loc_4f316:
	// 7214 
cs=0x3a50;eip=0x006836; 	T(bp = bx;);	// 85067                  mov     bp, bx ;~ 3A50:6836
cs=0x3a50;eip=0x006838; 	T(SUB(bp, 0x0C8));	// 85068                  sub     bp, 0C8h ;~ 3A50:6838
cs=0x3a50;eip=0x00683c; 	T(cx = 0;);	// 85069                  mov     cx, 0 ;~ 3A50:683C
cs=0x3a50;eip=0x00683f; 	T(MOV(al, *(raddr(ds,si+0x1FA4))));	// 85070                  mov     al, [si+1FA4h] ;~ 3A50:683F
cs=0x3a50;eip=0x006843; 	S(OUT(dx, al));	// 85071                  out     dx, al ;~ 3A50:6843
cs=0x3a50;eip=0x006844; 	J(JCXZ(loc_4f33c));	// 85072                  jcxz    short loc_4F33C ;~ 3A50:6844
loc_4f326:
	// 7215 
cs=0x3a50;eip=0x006846; 	T(CMP(di, 0x0AA0));	// 85076                  cmp     di, 0AA0h ;~ 3A50:6846
cs=0x3a50;eip=0x00684a; 	J(JC(loc_4f344));	// 85077                  jb      short loc_4F344 ;~ 3A50:684A
cs=0x3a50;eip=0x00684c; 	T(CMP(di, 0x0F00));	// 85078                  cmp     di, 0F00h ;~ 3A50:684C
cs=0x3a50;eip=0x006850; 	J(JA(loc_4f337));	// 85079                  ja      short loc_4F337 ;~ 3A50:6850
cs=0x3a50;eip=0x006852; 	T(CMP(*(raddr(es,di)), al));	// 85080                  cmp     es:[di], al ;~ 3A50:6852
cs=0x3a50;eip=0x006855; 	X(STOSB);	// 85081                  stosb ;~ 3A50:6855
cs=0x3a50;eip=0x006856; 	T(DEC(di));	// 85082                  dec     di ;~ 3A50:6856
loc_4f337:
	// 7216 
cs=0x3a50;eip=0x006857; 	T(SUB(di, 0x50));	// 85085                  sub     di, 50h ; 'P' ;~ 3A50:6857
cs=0x3a50;eip=0x00685a; 	J(LOOP(loc_4f326));	// 85086                  loop    loc_4F326 ;~ 3A50:685A
loc_4f33c:
	// 7217 
cs=0x3a50;eip=0x00685c; 	T(SUB(di, 0x50));	// 85089                  sub     di, 50h ; 'P' ;~ 3A50:685C
cs=0x3a50;eip=0x00685f; 	T(cx = 4;);	// 85090                  mov     cx, 4 ;~ 3A50:685F
cs=0x3a50;eip=0x006862; 	J(JNZ(loc_4f326));	// 85091                  jnz     short loc_4F326 ;~ 3A50:6862
loc_4f344:
	// 7218 
cs=0x3a50;eip=0x006864; 	T(di = bx;);	// 85094                  mov     di, bx ;~ 3A50:6864
cs=0x3a50;eip=0x006866; 	T(MOV(al, *(raddr(ds,si+0x1FB0))));	// 85095                  mov     al, [si+1FB0h] ;~ 3A50:6866
cs=0x3a50;eip=0x00686a; 	S(OUT(dx, al));	// 85096                  out     dx, al ;~ 3A50:686A
loc_4f34b:
	// 7219 
cs=0x3a50;eip=0x00686b; 	T(CMP(di, 0x0AA0));	// 85099                  cmp     di, 0AA0h ;~ 3A50:686B
cs=0x3a50;eip=0x00686f; 	J(JC(loc_4f2d9));	// 85100                  jb      short loc_4F2D9 ;~ 3A50:686F
cs=0x3a50;eip=0x006871; 	T(CMP(di, 0x0F00));	// 85101                  cmp     di, 0F00h ;~ 3A50:6871
cs=0x3a50;eip=0x006875; 	J(JA(loc_4f35c));	// 85102                  ja      short loc_4F35C ;~ 3A50:6875
cs=0x3a50;eip=0x006877; 	T(CMP(*(raddr(es,di)), al));	// 85103                  cmp     es:[di], al ;~ 3A50:6877
cs=0x3a50;eip=0x00687a; 	X(STOSB);	// 85104                  stosb ;~ 3A50:687A
cs=0x3a50;eip=0x00687b; 	T(DEC(di));	// 85105                  dec     di ;~ 3A50:687B
loc_4f35c:
	// 7220 
cs=0x3a50;eip=0x00687c; 	T(SUB(di, 0x190));	// 85108                  sub     di, 190h ;~ 3A50:687C
cs=0x3a50;eip=0x006880; 	J(JMP(loc_4f34b));	// 85109                  jmp     short loc_4F34B ;~ 3A50:6880
ret_3a50_690d:
	// 7221 
cs=0x3a50;eip=0x00690d; 	T(ds = dx;);	// 85126                  mov     ds, dx ;~ 3A50:690D
cs=0x3a50;eip=0x00690f; 	X(MOV(*(dw*)(raddr(ds,0x464)), ax));	// 85127                  mov     ds:464h, ax ;~ 3A50:690F
cs=0x3a50;eip=0x006912; 	X(POP(ds));	// 85128                  pop     ds ;~ 3A50:6912
cs=0x3a50;eip=0x006913; 	J(RETF(0));	// 85129                  retf ;~ 3A50:6913
ret_3a50_6914:
	// 7222 
cs=0x3a50;eip=0x006914; 	X(PUSH(bp));	// 85131                  push    bp ;~ 3A50:6914
cs=0x3a50;eip=0x006915; 	T(bp = sp;);	// 85132                  mov     bp, sp ;~ 3A50:6915
cs=0x3a50;eip=0x006917; 	X(PUSH(ds));	// 85133                  push    ds ;~ 3A50:6917
cs=0x3a50;eip=0x006918; 	T(ax = 0x4C7A;);	// 85134                  mov     ax, 4C7Ah ;~ 3A50:6918
cs=0x3a50;eip=0x00691b; 	T(ds = ax;);	// 85135                  mov     ds, ax ;~ 3A50:691B
cs=0x3a50;eip=0x00691d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 85137                  mov     ax, [bp+6] ;~ 3A50:691D
cs=0x3a50;eip=0x006920; 	X(*(dw*)(((db*)_unk_4bd28)+0x0EDC) = ax;);	// 85138                  mov     ds:_unk_4BD28+0EDCh, ax ;~ 3A50:6920
cs=0x3a50;eip=0x006923; 	X(POP(ds));	// 85139                  pop     ds ;~ 3A50:6923
cs=0x3a50;eip=0x006924; 	T(sp = bp;);	// 85141                  mov     sp, bp ;~ 3A50:6924
cs=0x3a50;eip=0x006926; 	X(POP(bp));	// 85142                  pop     bp ;~ 3A50:6926
cs=0x3a50;eip=0x006927; 	J(RETF(0));	// 85143                  retf ;~ 3A50:6927
ret_3a50_692c:
	// 7223 
cs=0x3a50;eip=0x00692c; 	T(ds = dx;);	// 85147                  mov     ds, dx ;~ 3A50:692C
cs=0x3a50;eip=0x00692e; 	X(MOV(*(dw*)(raddr(ds,0x466)), ax));	// 85148                  mov     ds:466h, ax ;~ 3A50:692E
cs=0x3a50;eip=0x006931; 	X(POP(ds));	// 85149                  pop     ds ;~ 3A50:6931
cs=0x3a50;eip=0x006932; 	J(RETF(0));	// 85150                  retf ;~ 3A50:6932
ret_3a50_6933:
	// 7224 
cs=0x3a50;eip=0x006933; 	X(PUSH(bp));	// 85152                  push    bp ;~ 3A50:6933
cs=0x3a50;eip=0x006934; 	T(bp = sp;);	// 85153                  mov     bp, sp ;~ 3A50:6934
cs=0x3a50;eip=0x006936; 	X(PUSH(ds));	// 85154                  push    ds ;~ 3A50:6936
cs=0x3a50;eip=0x006937; 	T(ax = 0x4C7A;);	// 85155                  mov     ax, 4C7Ah ;~ 3A50:6937
cs=0x3a50;eip=0x00693a; 	T(ds = ax;);	// 85156                  mov     ds, ax ;~ 3A50:693A
cs=0x3a50;eip=0x00693c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 85158                  mov     ax, [bp+6] ;~ 3A50:693C
cs=0x3a50;eip=0x00693f; 	X(*(dw*)(((db*)_unk_4bd28)+0x0EDE) = ax;);	// 85159                  mov     ds:_unk_4BD28+0EDEh, ax ;~ 3A50:693F
cs=0x3a50;eip=0x006942; 	X(POP(ds));	// 85160                  pop     ds ;~ 3A50:6942
cs=0x3a50;eip=0x006943; 	T(sp = bp;);	// 85162                  mov     sp, bp ;~ 3A50:6943
cs=0x3a50;eip=0x006945; 	X(POP(bp));	// 85163                  pop     bp ;~ 3A50:6945
cs=0x3a50;eip=0x006946; 	J(RETF(0));	// 85164                  retf ;~ 3A50:6946
ret_3a50_6947:
	// 7225 
cs=0x3a50;eip=0x006947; 	T(al = *((amsruntimelibra)+0x0A););	// 85166                  mov     al, byte ptr cs:aMsRunTimeLibra+0Ah ; "e Library - Copyright (c) 1988, Microso"... ;~ 3A50:6947
cs=0x3a50;eip=0x00694b; 	J(RETF(0));	// 85167                  retf ;~ 3A50:694B
ret_3a50_6952:
	// 7226 
cs=0x3a50;eip=0x006952; 	T(bl = 0x28;);	// 85175                  mov     bl, 28h ; '(' ;~ 3A50:6952
cs=0x3a50;eip=0x006954; 	T(MUL1_1(bl));	// 85176                  mul     bl ;~ 3A50:6954
cs=0x3a50;eip=0x006956; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 85177                  mov     bx, [bp+6] ;~ 3A50:6956
cs=0x3a50;eip=0x006959; 	T(SHR(bx, 1));	// 85178                  shr     bx, 1 ;~ 3A50:6959
cs=0x3a50;eip=0x00695b; 	T(SHR(bx, 1));	// 85179                  shr     bx, 1 ;~ 3A50:695B
cs=0x3a50;eip=0x00695d; 	T(SHR(bx, 1));	// 85180                  shr     bx, 1 ;~ 3A50:695D
cs=0x3a50;eip=0x00695f; 	T(ADD(ax, bx));	// 85181                  add     ax, bx ;~ 3A50:695F
cs=0x3a50;eip=0x006961; 	T(sp = bp;);	// 85182                  mov     sp, bp ;~ 3A50:6961
cs=0x3a50;eip=0x006963; 	X(POP(bp));	// 85183                  pop     bp ;~ 3A50:6963
cs=0x3a50;eip=0x006964; 	J(RETF(0));	// 85184                  retf ;~ 3A50:6964
ret_3a50_6965:
	// 7227 
cs=0x3a50;eip=0x006965; 	T(ax = 2;);	// 85186                  mov     ax, 2 ;~ 3A50:6965
cs=0x3a50;eip=0x006968; 	J(RETF(0));	// 85187                  retf ;~ 3A50:6968
ret_3a50_6977:
	// 7228 
cs=0x3a50;eip=0x006977; 	T(ds = ax;);	// 85193                  mov     ds, ax ;~ 3A50:6977
cs=0x3a50;eip=0x006979; 	X(MOV(*(raddr(ds,0x1FCF)), 0));	// 85194                  mov     byte ptr ds:1FCFh, 0 ;~ 3A50:6979
cs=0x3a50;eip=0x00697e; 	T(MOV(bp, *(dw*)(raddr(ss,bp+6))));	// 85195                  mov     bp, [bp+6] ;~ 3A50:697E
cs=0x3a50;eip=0x006981; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0C))));	// 85196                  push    word ptr [bp+0Ch] ;~ 3A50:6981
cs=0x3a50;eip=0x006984; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0E))));	// 85197                  push    word ptr [bp+0Eh] ;~ 3A50:6984
cs=0x3a50;eip=0x006987; 	J(JMP(loc_4f47c));	// 85198                  jmp     short loc_4F47C ;~ 3A50:6987
ret_3a50_698a:
	// 7229 
cs=0x3a50;eip=0x00698a; 	X(PUSH(es));	// 85201                  push    es ;~ 3A50:698A
cs=0x3a50;eip=0x00698b; 	X(PUSH(ds));	// 85202                  push    ds ;~ 3A50:698B
cs=0x3a50;eip=0x00698c; 	T(ax = 0x4C7A;);	// 85203                  mov     ax, 4C7Ah ;~ 3A50:698C
cs=0x3a50;eip=0x00698f; 	T(ds = ax;);	// 85204                  mov     ds, ax ;~ 3A50:698F
cs=0x3a50;eip=0x006991; 	X(*(adetaillevel) = 1;);	// 85206                  mov     byte ptr ds:aDetailLevel, 1 ; "Detail Level " ;~ 3A50:6991
cs=0x3a50;eip=0x006996; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0C))));	// 85207                  push    word ptr [bp+0Ch] ;~ 3A50:6996
cs=0x3a50;eip=0x006999; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0E))));	// 85208                  push    word ptr [bp+0Eh] ;~ 3A50:6999
loc_4f47c:
	// 7230 
cs=0x3a50;eip=0x00699c; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x14))));	// 85211                  mov     cx, [bp+14h] ;~ 3A50:699C
cs=0x3a50;eip=0x00699f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 85212                  mov     ax, [bp+8] ;~ 3A50:699F
cs=0x3a50;eip=0x0069a2; 	T(CMP(ax, cx));	// 85213                  cmp     ax, cx ;~ 3A50:69A2
cs=0x3a50;eip=0x0069a4; 	J(JGE(loc_4f4a1));	// 85214                  jge     short loc_4F4A1 ;~ 3A50:69A4
cs=0x3a50;eip=0x0069a6; 	T(bx = ax;);	// 85215                  mov     bx, ax ;~ 3A50:69A6
cs=0x3a50;eip=0x0069a8; 	T(ADD(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 85216                  add     bx, [bp+0Ch] ;~ 3A50:69A8
cs=0x3a50;eip=0x0069ab; 	T(DEC(bx));	// 85217                  dec     bx ;~ 3A50:69AB
cs=0x3a50;eip=0x0069ac; 	T(CMP(bx, cx));	// 85218                  cmp     bx, cx ;~ 3A50:69AC
cs=0x3a50;eip=0x0069ae; 	J(JGE(loc_4f493));	// 85219                  jge     short loc_4F493 ;~ 3A50:69AE
cs=0x3a50;eip=0x0069b0; 	J(JMP(loc_4f4ff));	// 85220                  jmp     short loc_4F4FF ;~ 3A50:69B0
loc_4f493:
	// 7231 
cs=0x3a50;eip=0x0069b3; 	T(SUB(cx, ax));	// 85226                  sub     cx, ax ;~ 3A50:69B3
cs=0x3a50;eip=0x0069b5; 	X(ADD(*(dw*)(raddr(ss,bp+8)), cx));	// 85227                  add     [bp+8], cx ;~ 3A50:69B5
cs=0x3a50;eip=0x0069b8; 	X(ADD(*(dw*)(raddr(ss,bp+2)), cx));	// 85228                  add     [bp+2], cx ;~ 3A50:69B8
cs=0x3a50;eip=0x0069bb; 	X(SUB(*(dw*)(raddr(ss,bp+0x0C)), cx));	// 85229                  sub     [bp+0Ch], cx ;~ 3A50:69BB
cs=0x3a50;eip=0x0069be; 	J(JMP(loc_4f4a7));	// 85230                  jmp     short loc_4F4A7 ;~ 3A50:69BE
loc_4f4a1:
	// 7232 
cs=0x3a50;eip=0x0069c1; 	T(bx = ax;);	// 85236                  mov     bx, ax ;~ 3A50:69C1
cs=0x3a50;eip=0x0069c3; 	T(ADD(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 85237                  add     bx, [bp+0Ch] ;~ 3A50:69C3
cs=0x3a50;eip=0x0069c6; 	T(DEC(bx));	// 85238                  dec     bx ;~ 3A50:69C6
loc_4f4a7:
	// 7233 
cs=0x3a50;eip=0x0069c7; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x16))));	// 85241                  mov     cx, [bp+16h] ;~ 3A50:69C7
cs=0x3a50;eip=0x0069ca; 	T(CMP(bx, cx));	// 85242                  cmp     bx, cx ;~ 3A50:69CA
cs=0x3a50;eip=0x0069cc; 	J(JLE(loc_4f4ba));	// 85243                  jle     short loc_4F4BA ;~ 3A50:69CC
cs=0x3a50;eip=0x0069ce; 	T(CMP(ax, cx));	// 85244                  cmp     ax, cx ;~ 3A50:69CE
cs=0x3a50;eip=0x0069d0; 	J(JLE(loc_4f4b5));	// 85245                  jle     short loc_4F4B5 ;~ 3A50:69D0
cs=0x3a50;eip=0x0069d2; 	J(JMP(loc_4f4ff));	// 85246                  jmp     short loc_4F4FF ;~ 3A50:69D2
loc_4f4b5:
	// 7234 
cs=0x3a50;eip=0x0069d5; 	T(SUB(bx, cx));	// 85252                  sub     bx, cx ;~ 3A50:69D5
cs=0x3a50;eip=0x0069d7; 	X(SUB(*(dw*)(raddr(ss,bp+0x0C)), bx));	// 85253                  sub     [bp+0Ch], bx ;~ 3A50:69D7
loc_4f4ba:
	// 7235 
cs=0x3a50;eip=0x0069da; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x10))));	// 85256                  mov     cx, [bp+10h] ;~ 3A50:69DA
cs=0x3a50;eip=0x0069dd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 85257                  mov     ax, [bp+0Ah] ;~ 3A50:69DD
cs=0x3a50;eip=0x0069e0; 	T(CMP(ax, cx));	// 85258                  cmp     ax, cx ;~ 3A50:69E0
cs=0x3a50;eip=0x0069e2; 	J(JGE(loc_4f4df));	// 85259                  jge     short loc_4F4DF ;~ 3A50:69E2
cs=0x3a50;eip=0x0069e4; 	T(bx = ax;);	// 85260                  mov     bx, ax ;~ 3A50:69E4
cs=0x3a50;eip=0x0069e6; 	T(ADD(bx, *(dw*)(raddr(ss,bp+0x0E))));	// 85261                  add     bx, [bp+0Eh] ;~ 3A50:69E6
cs=0x3a50;eip=0x0069e9; 	T(DEC(bx));	// 85262                  dec     bx ;~ 3A50:69E9
cs=0x3a50;eip=0x0069ea; 	T(CMP(bx, cx));	// 85263                  cmp     bx, cx ;~ 3A50:69EA
cs=0x3a50;eip=0x0069ec; 	J(JGE(loc_4f4d1));	// 85264                  jge     short loc_4F4D1 ;~ 3A50:69EC
cs=0x3a50;eip=0x0069ee; 	J(JMP(loc_4f4ff));	// 85265                  jmp     short loc_4F4FF ;~ 3A50:69EE
loc_4f4d1:
	// 7236 
cs=0x3a50;eip=0x0069f1; 	T(SUB(cx, ax));	// 85271                  sub     cx, ax ;~ 3A50:69F1
cs=0x3a50;eip=0x0069f3; 	X(ADD(*(dw*)(raddr(ss,bp+0x0A)), cx));	// 85272                  add     [bp+0Ah], cx ;~ 3A50:69F3
cs=0x3a50;eip=0x0069f6; 	X(ADD(*(dw*)(raddr(ss,bp+4)), cx));	// 85273                  add     [bp+4], cx ;~ 3A50:69F6
cs=0x3a50;eip=0x0069f9; 	X(SUB(*(dw*)(raddr(ss,bp+0x0E)), cx));	// 85274                  sub     [bp+0Eh], cx ;~ 3A50:69F9
cs=0x3a50;eip=0x0069fc; 	J(JMP(loc_4f4e5));	// 85275                  jmp     short loc_4F4E5 ;~ 3A50:69FC
loc_4f4df:
	// 7237 
cs=0x3a50;eip=0x0069ff; 	T(bx = ax;);	// 85281                  mov     bx, ax ;~ 3A50:69FF
cs=0x3a50;eip=0x006a01; 	T(ADD(bx, *(dw*)(raddr(ss,bp+0x0E))));	// 85282                  add     bx, [bp+0Eh] ;~ 3A50:6A01
cs=0x3a50;eip=0x006a04; 	T(DEC(bx));	// 85283                  dec     bx ;~ 3A50:6A04
loc_4f4e5:
	// 7238 
cs=0x3a50;eip=0x006a05; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x12))));	// 85286                  mov     cx, [bp+12h] ;~ 3A50:6A05
cs=0x3a50;eip=0x006a08; 	T(CMP(bx, cx));	// 85287                  cmp     bx, cx ;~ 3A50:6A08
cs=0x3a50;eip=0x006a0a; 	J(JLE(loc_4f4f8));	// 85288                  jle     short loc_4F4F8 ;~ 3A50:6A0A
cs=0x3a50;eip=0x006a0c; 	T(CMP(ax, cx));	// 85289                  cmp     ax, cx ;~ 3A50:6A0C
cs=0x3a50;eip=0x006a0e; 	J(JLE(loc_4f4f3));	// 85290                  jle     short loc_4F4F3 ;~ 3A50:6A0E
cs=0x3a50;eip=0x006a10; 	J(JMP(loc_4f4ff));	// 85291                  jmp     short loc_4F4FF ;~ 3A50:6A10
loc_4f4f3:
	// 7239 
cs=0x3a50;eip=0x006a13; 	T(SUB(bx, cx));	// 85297                  sub     bx, cx ;~ 3A50:6A13
cs=0x3a50;eip=0x006a15; 	X(SUB(*(dw*)(raddr(ss,bp+0x0E)), bx));	// 85298                  sub     [bp+0Eh], bx ;~ 3A50:6A15
loc_4f4f8:
	// 7240 
cs=0x3a50;eip=0x006a18; 	X(PUSH(bp));	// 85301                  push    bp ;~ 3A50:6A18
cs=0x3a50;eip=0x006a19; 	J(CALLF(seg48ae_1300_proc,m2c::kloc_4f530));	// 85302                  call    far ptr loc_4F530 ;~ 3A50:6A19
cs=0x3a50;eip=0x006a1e; 	X(POP(bp));	// 85303                  pop     bp ;~ 3A50:6A1E
loc_4f4ff:
	// 7241 
cs=0x3a50;eip=0x006a1f; 	X(POP(*(dw*)(raddr(ss,bp+0x0E))));	// 85307                  pop     word ptr [bp+0Eh] ;~ 3A50:6A1F
cs=0x3a50;eip=0x006a22; 	X(POP(*(dw*)(raddr(ss,bp+0x0C))));	// 85308                  pop     word ptr [bp+0Ch] ;~ 3A50:6A22
cs=0x3a50;eip=0x006a25; 	T(CMP(*(adetaillevel), 0));	// 85309                  cmp     byte ptr ds:aDetailLevel, 0 ; "Detail Level " ;~ 3A50:6A25
cs=0x3a50;eip=0x006a2a; 	J(JNZ(loc_4f515));	// 85310                  jnz     short loc_4F515 ;~ 3A50:6A2A
cs=0x3a50;eip=0x006a2c; 	X(POP(bp));	// 85311                  pop     bp ;~ 3A50:6A2C
cs=0x3a50;eip=0x006a2d; 	X(POP(ds));	// 85312                  pop     ds ;~ 3A50:6A2D
cs=0x3a50;eip=0x006a2e; 	X(POP(es));	// 85314                  pop     es ;~ 3A50:6A2E
cs=0x3a50;eip=0x006a2f; 	X(POP(si));	// 85315                  pop     si ;~ 3A50:6A2F
cs=0x3a50;eip=0x006a30; 	X(POP(di));	// 85316                  pop     di ;~ 3A50:6A30
cs=0x3a50;eip=0x006a31; 	T(sp = bp;);	// 85317                  mov     sp, bp ;~ 3A50:6A31
cs=0x3a50;eip=0x006a33; 	X(POP(bp));	// 85318                  pop     bp ;~ 3A50:6A33
cs=0x3a50;eip=0x006a34; 	J(RETF(0));	// 85319                  retf ;~ 3A50:6A34
loc_4f515:
	// 7242 
cs=0x3a50;eip=0x006a35; 	X(POP(ds));	// 85323                  pop     ds ;~ 3A50:6A35
cs=0x3a50;eip=0x006a36; 	X(POP(es));	// 85324                  pop     es ;~ 3A50:6A36
cs=0x3a50;eip=0x006a37; 	J(RETF(0));	// 85325                  retf ;~ 3A50:6A37
ret_3a50_6a38:
	// 7243 
cs=0x3a50;eip=0x006a38; 	X(PUSH(bp));	// 85327                  push    bp ;~ 3A50:6A38
cs=0x3a50;eip=0x006a39; 	T(bp = sp;);	// 85328                  mov     bp, sp ;~ 3A50:6A39
cs=0x3a50;eip=0x006a3b; 	X(PUSH(di));	// 85329                  push    di ;~ 3A50:6A3B
cs=0x3a50;eip=0x006a3c; 	X(PUSH(si));	// 85330                  push    si ;~ 3A50:6A3C
cs=0x3a50;eip=0x006a3d; 	X(PUSH(es));	// 85331                  push    es ;~ 3A50:6A3D
cs=0x3a50;eip=0x006a3e; 	X(PUSH(ds));	// 85332                  push    ds ;~ 3A50:6A3E
cs=0x3a50;eip=0x006a3f; 	X(PUSH(bp));	// 85333                  push    bp ;~ 3A50:6A3F
cs=0x3a50;eip=0x006a40; 	T(ax = 0x4C7A;);	// 85334                  mov     ax, 4C7Ah ;~ 3A50:6A40
cs=0x3a50;eip=0x006a43; 	T(ds = ax;);	// 85335                  mov     ds, ax ;~ 3A50:6A43
cs=0x3a50;eip=0x006a45; 	X(*((arangeradar)+0x0B) = 0;);	// 85337                  mov     byte ptr ds:aRangeRadar+0Bh, 0 ; "r" ;~ 3A50:6A45
cs=0x3a50;eip=0x006a4a; 	T(MOV(bp, *(dw*)(raddr(ss,bp+6))));	// 85338                  mov     bp, [bp+6] ;~ 3A50:6A4A
cs=0x3a50;eip=0x006a4d; 	J(JMP(loc_4f53c));	// 85339                  jmp     short loc_4F53C ;~ 3A50:6A4D
loc_4f530:
	// 7244 
cs=0x3a50;eip=0x006a50; 	X(PUSH(es));	// 85344                  push    es ;~ 3A50:6A50
cs=0x3a50;eip=0x006a51; 	X(PUSH(ds));	// 85345                  push    ds ;~ 3A50:6A51
cs=0x3a50;eip=0x006a52; 	T(ax = 0x4C7A;);	// 85346                  mov     ax, 4C7Ah ;~ 3A50:6A52
cs=0x3a50;eip=0x006a55; 	T(ds = ax;);	// 85347                  mov     ds, ax ;~ 3A50:6A55
cs=0x3a50;eip=0x006a57; 	X(*((arangeradar)+0x0B) = 1;);	// 85348                  mov     byte ptr ds:aRangeRadar+0Bh, 1 ; "r" ;~ 3A50:6A57
loc_4f53c:
	// 7245 
cs=0x3a50;eip=0x006a5c; 	T(MOV(di, *(dw*)(raddr(ss,bp+6))));	// 85351                  mov     di, [bp+6] ;~ 3A50:6A5C
cs=0x3a50;eip=0x006a5f; 	T(SHL(di, 1));	// 85352                  shl     di, 1 ;~ 3A50:6A5F
cs=0x3a50;eip=0x006a61; 	T(MOV(es, *(dw*)(raddr(cs,di+0x0A72))));	// 85353                  mov     es, word ptr cs:[di+0A72h] ;~ 3A50:6A61
cs=0x3a50;eip=0x006a66; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0A))));	// 85354                  mov     bx, [bp+0Ah] ;~ 3A50:6A66
cs=0x3a50;eip=0x006a69; 	T(SHL(bx, 1));	// 85355                  shl     bx, 1 ;~ 3A50:6A69
cs=0x3a50;eip=0x006a6b; 	T(MOV(di, *(dw*)(raddr(ds,bx+0x2CC))));	// 85356                  mov     di, [bx+2CCh] ;~ 3A50:6A6B
cs=0x3a50;eip=0x006a6f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 85357                  mov     ax, [bp+8] ;~ 3A50:6A6F
cs=0x3a50;eip=0x006a72; 	T(SHR(ax, 1));	// 85358                  shr     ax, 1 ;~ 3A50:6A72
cs=0x3a50;eip=0x006a74; 	T(SHR(ax, 1));	// 85359                  shr     ax, 1 ;~ 3A50:6A74
cs=0x3a50;eip=0x006a76; 	T(SHR(ax, 1));	// 85360                  shr     ax, 1 ;~ 3A50:6A76
cs=0x3a50;eip=0x006a78; 	T(ADD(di, ax));	// 85361                  add     di, ax ;~ 3A50:6A78
cs=0x3a50;eip=0x006a7a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+4))));	// 85362                  mov     bx, [bp+4] ;~ 3A50:6A7A
cs=0x3a50;eip=0x006a7d; 	T(SHL(bx, 1));	// 85363                  shl     bx, 1 ;~ 3A50:6A7D
cs=0x3a50;eip=0x006a7f; 	T(MOV(si, *(dw*)(raddr(ds,bx+0x2CC))));	// 85364                  mov     si, [bx+2CCh] ;~ 3A50:6A7F
cs=0x3a50;eip=0x006a83; 	T(MOV(ax, *(dw*)(raddr(ss,bp+2))));	// 85365                  mov     ax, [bp+2] ;~ 3A50:6A83
cs=0x3a50;eip=0x006a86; 	T(SHR(ax, 1));	// 85366                  shr     ax, 1 ;~ 3A50:6A86
cs=0x3a50;eip=0x006a88; 	T(SHR(ax, 1));	// 85367                  shr     ax, 1 ;~ 3A50:6A88
cs=0x3a50;eip=0x006a8a; 	T(SHR(ax, 1));	// 85368                  shr     ax, 1 ;~ 3A50:6A8A
cs=0x3a50;eip=0x006a8c; 	T(ADD(si, ax));	// 85369                  add     si, ax ;~ 3A50:6A8C
cs=0x3a50;eip=0x006a8e; 	T(DEC(si));	// 85370                  dec     si ;~ 3A50:6A8E
cs=0x3a50;eip=0x006a8f; 	T(MOV(cx, *(dw*)(raddr(ss,bp+8))));	// 85371                  mov     cx, [bp+8] ;~ 3A50:6A8F
cs=0x3a50;eip=0x006a92; 	T(AND(cl, 7));	// 85372                  and     cl, 7 ;~ 3A50:6A92
cs=0x3a50;eip=0x006a95; 	T(bl = 0x0FF;);	// 85373                  mov     bl, 0FFh ;~ 3A50:6A95
cs=0x3a50;eip=0x006a97; 	T(SHR(bl, cl));	// 85374                  shr     bl, cl ;~ 3A50:6A97
cs=0x3a50;eip=0x006a99; 	T(MOV(cx, *(dw*)(raddr(ss,bp+8))));	// 85375                  mov     cx, [bp+8] ;~ 3A50:6A99
cs=0x3a50;eip=0x006a9c; 	T(ADD(cx, *(dw*)(raddr(ss,bp+0x0C))));	// 85376                  add     cx, [bp+0Ch] ;~ 3A50:6A9C
cs=0x3a50;eip=0x006a9f; 	T(DEC(cx));	// 85377                  dec     cx ;~ 3A50:6A9F
cs=0x3a50;eip=0x006aa0; 	T(AND(cl, 7));	// 85378                  and     cl, 7 ;~ 3A50:6AA0
cs=0x3a50;eip=0x006aa3; 	T(ax = 0x0FF80;);	// 85379                  mov     ax, 0FF80h ;~ 3A50:6AA3
cs=0x3a50;eip=0x006aa6; 	T(SHR(ax, cl));	// 85380                  shr     ax, cl ;~ 3A50:6AA6
cs=0x3a50;eip=0x006aa8; 	T(bh = al;);	// 85381                  mov     bh, al ;~ 3A50:6AA8
cs=0x3a50;eip=0x006aaa; 	X(*(dw*)(((db*)word_4960a)+0x2F) = bx;);	// 85382                  mov     cs:word_4960A+2Fh, bx ;~ 3A50:6AAA
cs=0x3a50;eip=0x006aaf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 85383                  mov     ax, [bp+8] ;~ 3A50:6AAF
cs=0x3a50;eip=0x006ab2; 	T(AND(ax, 7));	// 85384                  and     ax, 7 ;~ 3A50:6AB2
cs=0x3a50;eip=0x006ab5; 	T(ADD(ax, *(dw*)(raddr(ss,bp+0x0C))));	// 85385                  add     ax, [bp+0Ch] ;~ 3A50:6AB5
cs=0x3a50;eip=0x006ab8; 	T(DEC(ax));	// 85386                  dec     ax ;~ 3A50:6AB8
cs=0x3a50;eip=0x006ab9; 	T(SHR(ax, 1));	// 85387                  shr     ax, 1 ;~ 3A50:6AB9
cs=0x3a50;eip=0x006abb; 	T(SHR(ax, 1));	// 85388                  shr     ax, 1 ;~ 3A50:6ABB
cs=0x3a50;eip=0x006abd; 	T(SHR(ax, 1));	// 85389                  shr     ax, 1 ;~ 3A50:6ABD
cs=0x3a50;eip=0x006abf; 	T(ch = al;);	// 85390                  mov     ch, al ;~ 3A50:6ABF
cs=0x3a50;eip=0x006ac1; 	T(CMP(*(raddr(ss,bp+0x18)), 1));	// 85391                  cmp     byte ptr [bp+18h], 1 ;~ 3A50:6AC1
cs=0x3a50;eip=0x006ac5; 	J(JZ(loc_4f5aa));	// 85392                  jz      short loc_4F5AA ;~ 3A50:6AC5
cs=0x3a50;eip=0x006ac7; __disp=*(dw*)(((db*)seg_4f632)+0x0A8);
	J(return __dispatch_call(__disp, _state););	// 85393                  jmp     near ptr seg_4F632+0A8h ;~ 3A50:6AC7
loc_4f5aa:
	// 7246 
cs=0x3a50;eip=0x006aca; 	T(dx = 0x3C4;);	// 85397                  mov     dx, 3C4h ;~ 3A50:6ACA
cs=0x3a50;eip=0x006acd; 	T(ax = 0x0F02;);	// 85398                  mov     ax, 0F02h ;~ 3A50:6ACD
cs=0x3a50;eip=0x006ad0; 	X(*((amsruntimelibra)+2) = ah;);	// 85399                  mov     byte ptr cs:aMsRunTimeLibra+2, ah ; " Run-Time Library - Copyright (c) 1988,"... ;~ 3A50:6AD0
cs=0x3a50;eip=0x006ad5; 	S(OUT(dx, ax));	// 85400                  out     dx, ax          ; EGA: sequencer address reg ;~ 3A50:6AD5
cs=0x3a50;eip=0x006ad6; 	T(dx = 0x3CE;);	// 85402                  mov     dx, 3CEh ;~ 3A50:6AD6
cs=0x3a50;eip=0x006ad9; 	T(ax = 0x0FF01;);	// 85403                  mov     ax, 0FF01h ;~ 3A50:6AD9
cs=0x3a50;eip=0x006adc; 	X(*((amsruntimelibra)+4) = ah;);	// 85404                  mov     byte ptr cs:aMsRunTimeLibra+4, ah ; "un-Time Library - Copyright (c) 1988, M"... ;~ 3A50:6ADC
cs=0x3a50;eip=0x006ae1; 	S(OUT(dx, ax));	// 85405                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:6AE1
cs=0x3a50;eip=0x006ae2; 	T(MOV(ah, *(raddr(ss,bp+0x19))));	// 85407                  mov     ah, [bp+19h] ;~ 3A50:6AE2
cs=0x3a50;eip=0x006ae5; 	T(SUB(al, al));	// 85408                  sub     al, al ;~ 3A50:6AE5
cs=0x3a50;eip=0x006ae7; 	X(*((amsruntimelibra)+3) = ah;);	// 85409                  mov     byte ptr cs:aMsRunTimeLibra+3, ah ; "Run-Time Library - Copyright (c) 1988, "... ;~ 3A50:6AE7
cs=0x3a50;eip=0x006aec; 	S(OUT(dx, ax));	// 85410                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:6AEC
cs=0x3a50;eip=0x006aed; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 85413                  mov     ax, [bp+8] ;~ 3A50:6AED
cs=0x3a50;eip=0x006af0; 	T(AND(al, 7));	// 85414                  and     al, 7 ;~ 3A50:6AF0
cs=0x3a50;eip=0x006af2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+2))));	// 85415                  mov     bx, [bp+2] ;~ 3A50:6AF2
cs=0x3a50;eip=0x006af5; 	T(AND(bl, 7));	// 85416                  and     bl, 7 ;~ 3A50:6AF5
cs=0x3a50;eip=0x006af8; 	T(SUB(al, bl));	// 85417                  sub     al, bl ;~ 3A50:6AF8
cs=0x3a50;eip=0x006afa; 	J(JS(loc_4f5df));	// 85418                  js      short loc_4F5DF ;~ 3A50:6AFA
cs=0x3a50;eip=0x006afc; __disp=*(dw*)(((db*)seg_4f632)+0x49);
	J(return __dispatch_call(__disp, _state););	// 85419                  jmp     near ptr seg_4F632+49h ;~ 3A50:6AFC
loc_4f5df:
	// 7247 
cs=0x3a50;eip=0x006aff; 	T(NEG(al));	// 85423                  neg     al ;~ 3A50:6AFF
cs=0x3a50;eip=0x006b01; 	T(INC(si));	// 85424                  inc     si ;~ 3A50:6B01
cs=0x3a50;eip=0x006b02; 	T(cl = al;);	// 85425                  mov     cl, al ;~ 3A50:6B02
cs=0x3a50;eip=0x006b04; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 85426                  mov     ax, [bp+0] ;~ 3A50:6B04
cs=0x3a50;eip=0x006b07; 	T(ds = ax;);	// 85427                  mov     ds, ax ;~ 3A50:6B07
cs=0x3a50;eip=0x006b09; 	T(MOV(bp, *(dw*)(raddr(ss,bp+0x0E))));	// 85429                  mov     bp, [bp+0Eh] ;~ 3A50:6B09
cs=0x3a50;eip=0x006b0c; 	T(al = 8;);	// 85430                  mov     al, 8 ;~ 3A50:6B0C
cs=0x3a50;eip=0x006b0e; 	T(CLI);	// 85431                  cli ;~ 3A50:6B0E
cs=0x3a50;eip=0x006b0f; 	S(OUT(dx, al));	// 85432                  out     dx, al          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:6B0F
cs=0x3a50;eip=0x006b10; 	T(INC(dx));	// 85435                  inc     dx ;~ 3A50:6B10
cs=0x3a50;eip=0x006b11; 	X(PUSH(si));	// 85436                  push    si ;~ 3A50:6B11
cs=0x3a50;eip=0x006b12; 	X(PUSH(di));	// 85437                  push    di ;~ 3A50:6B12
cs=0x3a50;eip=0x006b13; 	X(PUSH(cx));	// 85438                  push    cx ;~ 3A50:6B13
cs=0x3a50;eip=0x006b14; 	T(bh = *(db*)(((db*)word_4960a)+0x2F););	// 85439                  mov     bh, byte ptr cs:word_4960A+2Fh ;~ 3A50:6B14
cs=0x3a50;eip=0x006b19; 	T(OR(ch, ch));	// 85440                  or      ch, ch ;~ 3A50:6B19
cs=0x3a50;eip=0x006b1b; 	J(JZ(loc_4f621));	// 85441                  jz      short loc_4F621 ;~ 3A50:6B1B
cs=0x3a50;eip=0x006b1d; 	T(LODSW);	// 85442                  lodsw ;~ 3A50:6B1D
cs=0x3a50;eip=0x006b1e; 	T(XCHG(al, ah));	// 85443                  xchg    al, ah ;~ 3A50:6B1E
cs=0x3a50;eip=0x006b20; 	T(SHL(ax, cl));	// 85444                  shl     ax, cl ;~ 3A50:6B20
cs=0x3a50;eip=0x006b22; 	T(AND(ah, bh));	// 85445                  and     ah, bh ;~ 3A50:6B22
cs=0x3a50;eip=0x006b24; 	T(CMP(ah, *(raddr(es,di))));	// 85446                  cmp     ah, es:[di] ;~ 3A50:6B24
cs=0x3a50;eip=0x006b27; 	T(al = ah;);	// 85447                  mov     al, ah ;~ 3A50:6B27
cs=0x3a50;eip=0x006b29; 	S(OUT(dx, al));	// 85448                  out     dx, al          ; EGA port: graphics controller data register ;~ 3A50:6B29
cs=0x3a50;eip=0x006b2a; 	X(STOSB);	// 85449                  stosb ;~ 3A50:6B2A
cs=0x3a50;eip=0x006b2b; 	J(JMP(loc_4f61a));	// 85450                  jmp     short loc_4F61A ;~ 3A50:6B2B
loc_4f60e:
	// 7248 
cs=0x3a50;eip=0x006b2e; 	T(LODSW);	// 85455                  lodsw ;~ 3A50:6B2E
cs=0x3a50;eip=0x006b2f; 	T(XCHG(ah, al));	// 85456                  xchg    ah, al ;~ 3A50:6B2F
cs=0x3a50;eip=0x006b31; 	T(SHL(ax, cl));	// 85457                  shl     ax, cl ;~ 3A50:6B31
cs=0x3a50;eip=0x006b33; 	T(al = ah;);	// 85458                  mov     al, ah ;~ 3A50:6B33
cs=0x3a50;eip=0x006b35; 	S(OUT(dx, al));	// 85459                  out     dx, al          ; EGA port: graphics controller data register ;~ 3A50:6B35
cs=0x3a50;eip=0x006b36; 	T(CMP(al, *(raddr(es,di))));	// 85460                  cmp     al, es:[di] ;~ 3A50:6B36
cs=0x3a50;eip=0x006b39; 	X(STOSB);	// 85461                  stosb ;~ 3A50:6B39
loc_4f61a:
	// 7249 
cs=0x3a50;eip=0x006b3a; 	T(DEC(si));	// 85464                  dec     si ;~ 3A50:6B3A
cs=0x3a50;eip=0x006b3b; 	T(DEC(ch));	// 85465                  dec     ch ;~ 3A50:6B3B
cs=0x3a50;eip=0x006b3d; 	J(JNZ(loc_4f60e));	// 85466                  jnz     short loc_4F60E ;~ 3A50:6B3D
cs=0x3a50;eip=0x006b3f; 	T(bh = 0x0FF;);	// 85467                  mov     bh, 0FFh ;~ 3A50:6B3F
loc_4f621:
	// 7250 
cs=0x3a50;eip=0x006b41; 	T(AND(bh, *(db*)(((db*)word_4960a)+0x30)));	// 85470                  and     bh, byte ptr cs:word_4960A+30h ;~ 3A50:6B41
cs=0x3a50;eip=0x006b46; 	T(LODSW);	// 85471                  lodsw ;~ 3A50:6B46
cs=0x3a50;eip=0x006b47; 	T(DEC(si));	// 85472                  dec     si ;~ 3A50:6B47
cs=0x3a50;eip=0x006b48; 	T(XCHG(ah, al));	// 85473                  xchg    ah, al ;~ 3A50:6B48
cs=0x3a50;eip=0x006b4a; 	T(SHL(ax, cl));	// 85474                  shl     ax, cl ;~ 3A50:6B4A
cs=0x3a50;eip=0x006b4c; 	T(AND(ah, bh));	// 85475                  and     ah, bh ;~ 3A50:6B4C
cs=0x3a50;eip=0x006b4e; 	T(CMP(ah, *(raddr(es,di))));	// 85476                  cmp     ah, es:[di] ;~ 3A50:6B4E
cs=0x3a50;eip=0x007738; 	T(cx = 0x0FA0;);	// 85690                  mov     cx, 0FA0h ;~ 3A50:7738
	// 85691                  rep movsw ;~ 3A50:773B
cs=0x3a50;eip=0x00773b; 	X(	REP MOVSW);	// 85691                  rep movsw ;~ 3A50:773B
cs=0x3a50;eip=0x00773d; 	T(al = 4;);	// 85692                  mov     al, 4 ;~ 3A50:773D
cs=0x3a50;eip=0x00773f; 	S(OUT(dx, al));	// 85693                  out     dx, al          ; EGA port: graphics controller data register ;~ 3A50:773F
cs=0x3a50;eip=0x007740; 	T(di = 0;);	// 85694                  mov     di, 0 ;~ 3A50:7740
cs=0x3a50;eip=0x007743; 	T(cx = 0x0FA0;);	// 85695                  mov     cx, 0FA0h ;~ 3A50:7743
	// 85696                  rep movsw ;~ 3A50:7746
cs=0x3a50;eip=0x007746; 	X(	REP MOVSW);	// 85696                  rep movsw ;~ 3A50:7746
cs=0x3a50;eip=0x007748; 	T(al = 8;);	// 85697                  mov     al, 8 ;~ 3A50:7748
cs=0x3a50;eip=0x00774a; 	S(OUT(dx, al));	// 85698                  out     dx, al          ; EGA port: graphics controller data register ;~ 3A50:774A
cs=0x3a50;eip=0x00774b; 	T(di = 0;);	// 85699                  mov     di, 0 ;~ 3A50:774B
cs=0x3a50;eip=0x00774e; 	T(cx = 0x0FA0;);	// 85700                  mov     cx, 0FA0h ;~ 3A50:774E
	// 85701                  rep movsw ;~ 3A50:7751
cs=0x3a50;eip=0x007751; 	X(	REP MOVSW);	// 85701                  rep movsw ;~ 3A50:7751
cs=0x3a50;eip=0x007753; 	T(al = 0x0F;);	// 85702                  mov     al, 0Fh ;~ 3A50:7753
cs=0x3a50;eip=0x007755; 	S(OUT(dx, al));	// 85703                  out     dx, al          ; EGA port: graphics controller data register ;~ 3A50:7755
cs=0x3a50;eip=0x007756; 	T(STI);	// 85704                  sti ;~ 3A50:7756
cs=0x3a50;eip=0x007757; 	X(POP(es));	// 85705                  pop     es ;~ 3A50:7757
cs=0x3a50;eip=0x007758; 	X(POP(ds));	// 85706                  pop     ds ;~ 3A50:7758
cs=0x3a50;eip=0x007759; 	X(POP(di));	// 85707                  pop     di ;~ 3A50:7759
cs=0x3a50;eip=0x00775a; 	X(POP(si));	// 85708                  pop     si ;~ 3A50:775A
cs=0x3a50;eip=0x00775b; 	X(POP(bp));	// 85709                  pop     bp ;~ 3A50:775B
cs=0x3a50;eip=0x00775c; 	J(RETF(0));	// 85710                  retf ;~ 3A50:775C
ret_3a50_775d:
	// 7251 
cs=0x3a50;eip=0x00775d; 	X(PUSH(ds));	// 85712                  push    ds ;~ 3A50:775D
cs=0x3a50;eip=0x00775e; 	T(ax = 0x4C7A;);	// 85713                  mov     ax, 4C7Ah ;~ 3A50:775E
cs=0x3a50;eip=0x007761; 	T(ds = ax;);	// 85714                  mov     ds, ax ;~ 3A50:7761
cs=0x3a50;eip=0x007763; 	T(SHL(di, 1));	// 85716                  shl     di, 1 ;~ 3A50:7763
cs=0x3a50;eip=0x007765; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x2CC))));	// 85717                  mov     ax, [di+2CCh] ;~ 3A50:7765
cs=0x3a50;eip=0x007769; 	X(POP(ds));	// 85718                  pop     ds ;~ 3A50:7769
cs=0x3a50;eip=0x00776a; 	J(RETF(0));	// 85720                  retf ;~ 3A50:776A
ret_3a50_776b:
	// 7252 
cs=0x3a50;eip=0x00776b; 	J(RETF(0));	// 85722                  retf ;~ 3A50:776B
ret_3a50_776c:
	// 7253 
cs=0x3a50;eip=0x00776c; 	J(RETF(0));	// 85724                  retf ;~ 3A50:776C
ret_3a50_776d:
	// 7254 
cs=0x3a50;eip=0x00776d; 	T(SHL(si, 1));	// 85726                  shl     si, 1 ;~ 3A50:776D
cs=0x3a50;eip=0x00776f; 	T(MOV(ax, *(dw*)(raddr(cs,si+0x0A72))));	// 85727                  mov     ax, cs:[si+0A72h] ;~ 3A50:776F
cs=0x3a50;eip=0x007774; 	T(es = ax;);	// 85728                  mov     es, ax ;~ 3A50:7774
cs=0x3a50;eip=0x007776; 	J(RETF(0));	// 85729                  retf ;~ 3A50:7776
ret_3a50_7777:
	// 7255 
cs=0x3a50;eip=0x007777; 	J(RETF(0));	// 85731                  retf ;~ 3A50:7777
ret_3a50_7778:
	// 7256 
cs=0x3a50;eip=0x007778; 	X(PUSH(ds));	// 85733                  push    ds ;~ 3A50:7778
cs=0x3a50;eip=0x007779; 	T(ax = 0x4C7A;);	// 85734                  mov     ax, 4C7Ah ;~ 3A50:7779
cs=0x3a50;eip=0x00777c; 	T(ds = ax;);	// 85735                  mov     ds, ax ;~ 3A50:777C
cs=0x3a50;eip=0x00777e; 	T(di = 0x204C;);	// 85737                  mov     di, 204Ch ;~ 3A50:777E
cs=0x3a50;eip=0x007781; 	T(cx = 0x140;);	// 85738                  mov     cx, 140h ;~ 3A50:7781
cs=0x3a50;eip=0x007784; 	T(ah = 0x80;);	// 85739                  mov     ah, 80h ;~ 3A50:7784
cs=0x3a50;eip=0x007786; 	T(XOR(bx, bx));	// 85740                  xor     bx, bx ;~ 3A50:7786
cs=0x3a50;eip=0x007788; 	T(XOR(dx, dx));	// 85741                  xor     dx, dx ;~ 3A50:7788
loc_5026a:
	// 7257 
cs=0x3a50;eip=0x00778a; 	T(MOV(al, *(raddr(ss,bp+0))));	// 85744                  mov     al, [bp+0] ;~ 3A50:778A
cs=0x3a50;eip=0x00778d; 	T(INC(bp));	// 85745                  inc     bp ;~ 3A50:778D
cs=0x3a50;eip=0x00778e; 	T(SHR(al, 1));	// 85746                  shr     al, 1 ;~ 3A50:778E
cs=0x3a50;eip=0x007790; 	J(JNC(loc_50274));	// 85747                  jnb     short loc_50274 ;~ 3A50:7790
cs=0x3a50;eip=0x007792; 	T(OR(bl, ah));	// 85748                  or      bl, ah ;~ 3A50:7792
loc_50274:
	// 7258 
cs=0x3a50;eip=0x007794; 	T(SHR(al, 1));	// 85751                  shr     al, 1 ;~ 3A50:7794
cs=0x3a50;eip=0x007796; 	J(JNC(loc_5027a));	// 85752                  jnb     short loc_5027A ;~ 3A50:7796
cs=0x3a50;eip=0x007798; 	T(OR(bh, ah));	// 85753                  or      bh, ah ;~ 3A50:7798
loc_5027a:
	// 7259 
cs=0x3a50;eip=0x00779a; 	T(SHR(al, 1));	// 85756                  shr     al, 1 ;~ 3A50:779A
cs=0x3a50;eip=0x00779c; 	J(JNC(loc_50280));	// 85757                  jnb     short loc_50280 ;~ 3A50:779C
cs=0x3a50;eip=0x00779e; 	T(OR(dl, ah));	// 85758                  or      dl, ah ;~ 3A50:779E
loc_50280:
	// 7260 
cs=0x3a50;eip=0x0077a0; 	T(SHR(al, 1));	// 85761                  shr     al, 1 ;~ 3A50:77A0
cs=0x3a50;eip=0x0077a2; 	J(JNC(loc_50286));	// 85762                  jnb     short loc_50286 ;~ 3A50:77A2
cs=0x3a50;eip=0x0077a4; 	T(OR(dh, ah));	// 85763                  or      dh, ah ;~ 3A50:77A4
loc_50286:
	// 7261 
cs=0x3a50;eip=0x0077a6; 	T(ROR(ah, 1));	// 85766                  ror     ah, 1 ;~ 3A50:77A6
cs=0x3a50;eip=0x0077a8; 	J(JNC(loc_5029a));	// 85767                  jnb     short loc_5029A ;~ 3A50:77A8
cs=0x3a50;eip=0x0077aa; 	X(MOV(*(raddr(ds,di)), bl));	// 85768                  mov     [di], bl ;~ 3A50:77AA
cs=0x3a50;eip=0x0077ac; 	X(MOV(*(raddr(ds,di+0x28)), bh));	// 85769                  mov     [di+28h], bh ;~ 3A50:77AC
cs=0x3a50;eip=0x0077af; 	X(MOV(*(raddr(ds,di+0x50)), dl));	// 85770                  mov     [di+50h], dl ;~ 3A50:77AF
cs=0x3a50;eip=0x0077b2; 	X(MOV(*(raddr(ds,di+0x78)), dh));	// 85771                  mov     [di+78h], dh ;~ 3A50:77B2
cs=0x3a50;eip=0x0077b5; 	T(INC(di));	// 85772                  inc     di ;~ 3A50:77B5
cs=0x3a50;eip=0x0077b6; 	T(XOR(bx, bx));	// 85773                  xor     bx, bx ;~ 3A50:77B6
cs=0x3a50;eip=0x0077b8; 	T(XOR(dx, dx));	// 85774                  xor     dx, dx ;~ 3A50:77B8
loc_5029a:
	// 7262 
cs=0x3a50;eip=0x0077ba; 	J(LOOP(loc_5026a));	// 85777                  loop    loc_5026A ;~ 3A50:77BA
cs=0x3a50;eip=0x0077bc; 	X(POP(ds));	// 85778                  pop     ds ;~ 3A50:77BC
cs=0x3a50;eip=0x0077bd; 	J(RETF(0));	// 85780                  retf ;~ 3A50:77BD
ret_3a50_77be:
	// 7263 
cs=0x3a50;eip=0x0077be; 	X(PUSH(ds));	// 85782                  push    ds ;~ 3A50:77BE
cs=0x3a50;eip=0x0077bf; 	T(ax = 0x4C7A;);	// 85783                  mov     ax, 4C7Ah ;~ 3A50:77BF
cs=0x3a50;eip=0x0077c2; 	T(ds = ax;);	// 85784                  mov     ds, ax ;~ 3A50:77C2
cs=0x3a50;eip=0x0077c4; 	T(di = 0x204C;);	// 85786                  mov     di, 204Ch ;~ 3A50:77C4
cs=0x3a50;eip=0x0077c7; 	T(cx = 0x140;);	// 85787                  mov     cx, 140h ;~ 3A50:77C7
cs=0x3a50;eip=0x0077ca; 	T(ah = 0x80;);	// 85788                  mov     ah, 80h ;~ 3A50:77CA
cs=0x3a50;eip=0x0077cc; 	T(XOR(bx, bx));	// 85789                  xor     bx, bx ;~ 3A50:77CC
cs=0x3a50;eip=0x0077ce; 	T(XOR(dx, dx));	// 85790                  xor     dx, dx ;~ 3A50:77CE
cs=0x3a50;eip=0x0077d0; 	X(MOV(*(raddr(ds,di+0x0A0)), bl));	// 85791                  mov     [di+0A0h], bl ;~ 3A50:77D0
loc_502b4:
	// 7264 
cs=0x3a50;eip=0x0077d4; 	T(MOV(al, *(raddr(ss,bp+0))));	// 85794                  mov     al, [bp+0] ;~ 3A50:77D4
cs=0x3a50;eip=0x0077d7; 	T(INC(bp));	// 85795                  inc     bp ;~ 3A50:77D7
cs=0x3a50;eip=0x0077d8; 	T(OR(al, al));	// 85796                  or      al, al ;~ 3A50:77D8
cs=0x3a50;eip=0x0077da; 	J(JZ(loc_502c0));	// 85797                  jz      short loc_502C0 ;~ 3A50:77DA
cs=0x3a50;eip=0x0077dc; 	X(OR(*(raddr(ds,di+0x0A0)), ah));	// 85798                  or      [di+0A0h], ah ;~ 3A50:77DC
loc_502c0:
	// 7265 
cs=0x3a50;eip=0x0077e0; 	T(ROR(al, 1));	// 85801                  ror     al, 1 ;~ 3A50:77E0
cs=0x3a50;eip=0x0077e2; 	J(JNC(loc_502c6));	// 85802                  jnb     short loc_502C6 ;~ 3A50:77E2
cs=0x3a50;eip=0x0077e4; 	T(OR(bl, ah));	// 85803                  or      bl, ah ;~ 3A50:77E4
loc_502c6:
	// 7266 
cs=0x3a50;eip=0x0077e6; 	T(ROR(al, 1));	// 85806                  ror     al, 1 ;~ 3A50:77E6
cs=0x3a50;eip=0x0077e8; 	J(JNC(loc_502cc));	// 85807                  jnb     short loc_502CC ;~ 3A50:77E8
cs=0x3a50;eip=0x0077ea; 	T(OR(bh, ah));	// 85808                  or      bh, ah ;~ 3A50:77EA
loc_502cc:
	// 7267 
cs=0x3a50;eip=0x0077ec; 	T(ROR(al, 1));	// 85811                  ror     al, 1 ;~ 3A50:77EC
cs=0x3a50;eip=0x0077ee; 	J(JNC(loc_502d2));	// 85812                  jnb     short loc_502D2 ;~ 3A50:77EE
cs=0x3a50;eip=0x0077f0; 	T(OR(dl, ah));	// 85813                  or      dl, ah ;~ 3A50:77F0
loc_502d2:
	// 7268 
cs=0x3a50;eip=0x0077f2; 	T(ROR(al, 1));	// 85816                  ror     al, 1 ;~ 3A50:77F2
cs=0x3a50;eip=0x0077f4; 	J(JNC(loc_502d8));	// 85817                  jnb     short loc_502D8 ;~ 3A50:77F4
cs=0x3a50;eip=0x0077f6; 	T(OR(dh, ah));	// 85818                  or      dh, ah ;~ 3A50:77F6
loc_502d8:
	// 7269 
cs=0x3a50;eip=0x0077f8; 	T(ROR(ah, 1));	// 85821                  ror     ah, 1 ;~ 3A50:77F8
cs=0x3a50;eip=0x0077fa; 	J(JNC(loc_502f0));	// 85822                  jnb     short loc_502F0 ;~ 3A50:77FA
cs=0x3a50;eip=0x0077fc; 	X(MOV(*(raddr(ds,di)), bl));	// 85823                  mov     [di], bl ;~ 3A50:77FC
cs=0x3a50;eip=0x0077fe; 	X(MOV(*(raddr(ds,di+0x28)), bh));	// 85824                  mov     [di+28h], bh ;~ 3A50:77FE
cs=0x3a50;eip=0x007801; 	X(MOV(*(raddr(ds,di+0x50)), dl));	// 85825                  mov     [di+50h], dl ;~ 3A50:7801
cs=0x3a50;eip=0x007804; 	X(MOV(*(raddr(ds,di+0x78)), dh));	// 85826                  mov     [di+78h], dh ;~ 3A50:7804
cs=0x3a50;eip=0x007807; 	T(INC(di));	// 85827                  inc     di ;~ 3A50:7807
cs=0x3a50;eip=0x007808; 	T(XOR(bx, bx));	// 85828                  xor     bx, bx ;~ 3A50:7808
cs=0x3a50;eip=0x00780a; 	T(XOR(dx, dx));	// 85829                  xor     dx, dx ;~ 3A50:780A
cs=0x3a50;eip=0x00780c; 	X(MOV(*(raddr(ds,di+0x0A0)), bl));	// 85830                  mov     [di+0A0h], bl ;~ 3A50:780C
loc_502f0:
	// 7270 
cs=0x3a50;eip=0x007810; 	J(LOOP(loc_502b4));	// 85833                  loop    loc_502B4 ;~ 3A50:7810
cs=0x3a50;eip=0x007812; 	X(POP(ds));	// 85834                  pop     ds ;~ 3A50:7812
cs=0x3a50;eip=0x007813; 	J(RETF(0));	// 85836                  retf ;~ 3A50:7813
ret_3a50_7814:
	// 7271 
cs=0x3a50;eip=0x007814; 	X(PUSH(ds));	// 85838                  push    ds ;~ 3A50:7814
cs=0x3a50;eip=0x007815; 	X(PUSH(bx));	// 85839                  push    bx ;~ 3A50:7815
cs=0x3a50;eip=0x007816; 	T(ax = 0x4C7A;);	// 85840                  mov     ax, 4C7Ah ;~ 3A50:7816
cs=0x3a50;eip=0x007819; 	T(ds = ax;);	// 85841                  mov     ds, ax ;~ 3A50:7819
cs=0x3a50;eip=0x00781b; 	T(si = 0x204C;);	// 85843                  mov     si, 204Ch ;~ 3A50:781B
cs=0x3a50;eip=0x00781e; 	T(bx = di;);	// 85844                  mov     bx, di ;~ 3A50:781E
cs=0x3a50;eip=0x007820; 	T(dx = 0x3C4;);	// 85845                  mov     dx, 3C4h ;~ 3A50:7820
cs=0x3a50;eip=0x007823; 	T(al = 2;);	// 85846                  mov     al, 2 ;~ 3A50:7823
cs=0x3a50;eip=0x007825; 	T(CLI);	// 85847                  cli ;~ 3A50:7825
cs=0x3a50;eip=0x007826; 	S(OUT(dx, al));	// 85848                  out     dx, al          ; EGA: sequencer address reg ;~ 3A50:7826
cs=0x3a50;eip=0x007827; 	T(INC(dx));	// 85850                  inc     dx ;~ 3A50:7827
cs=0x3a50;eip=0x007828; 	T(al = 1;);	// 85851                  mov     al, 1 ;~ 3A50:7828
cs=0x3a50;eip=0x00782a; 	S(OUT(dx, al));	// 85852                  out     dx, al          ; EGA port: sequencer data register ;~ 3A50:782A
cs=0x3a50;eip=0x00782b; 	T(cx = 0x14;);	// 85853                  mov     cx, 14h ;~ 3A50:782B
	// 85854                  rep movsw ;~ 3A50:782E
cs=0x3a50;eip=0x00782e; 	X(	REP MOVSW);	// 85854                  rep movsw ;~ 3A50:782E
cs=0x3a50;eip=0x007830; 	T(al = 2;);	// 85855                  mov     al, 2 ;~ 3A50:7830
cs=0x3a50;eip=0x007832; 	S(OUT(dx, al));	// 85856                  out     dx, al          ; EGA port: sequencer data register ;~ 3A50:7832
cs=0x3a50;eip=0x007833; 	T(cx = 0x14;);	// 85857                  mov     cx, 14h ;~ 3A50:7833
cs=0x3a50;eip=0x007836; 	T(di = bx;);	// 85858                  mov     di, bx ;~ 3A50:7836
	// 85859                  rep movsw ;~ 3A50:7838
cs=0x3a50;eip=0x007838; 	X(	REP MOVSW);	// 85859                  rep movsw ;~ 3A50:7838
cs=0x3a50;eip=0x00783a; 	T(al = 4;);	// 85860                  mov     al, 4 ;~ 3A50:783A
cs=0x3a50;eip=0x00783c; 	S(OUT(dx, al));	// 85861                  out     dx, al          ; EGA port: sequencer data register ;~ 3A50:783C
cs=0x3a50;eip=0x00783d; 	T(cx = 0x14;);	// 85862                  mov     cx, 14h ;~ 3A50:783D
cs=0x3a50;eip=0x007840; 	T(di = bx;);	// 85863                  mov     di, bx ;~ 3A50:7840
	// 85864                  rep movsw ;~ 3A50:7842
cs=0x3a50;eip=0x007842; 	X(	REP MOVSW);	// 85864                  rep movsw ;~ 3A50:7842
cs=0x3a50;eip=0x007844; 	T(al = 8;);	// 85865                  mov     al, 8 ;~ 3A50:7844
cs=0x3a50;eip=0x007846; 	S(OUT(dx, al));	// 85866                  out     dx, al          ; EGA port: sequencer data register ;~ 3A50:7846
cs=0x3a50;eip=0x007847; 	T(cx = 0x14;);	// 85867                  mov     cx, 14h ;~ 3A50:7847
cs=0x3a50;eip=0x00784a; 	T(di = bx;);	// 85868                  mov     di, bx ;~ 3A50:784A
	// 85869                  rep movsw ;~ 3A50:784C
cs=0x3a50;eip=0x00784c; 	X(	REP MOVSW);	// 85869                  rep movsw ;~ 3A50:784C
cs=0x3a50;eip=0x00784e; 	T(al = 0x0F;);	// 85870                  mov     al, 0Fh ;~ 3A50:784E
cs=0x3a50;eip=0x007850; 	S(OUT(dx, al));	// 85871                  out     dx, al          ; EGA port: sequencer data register ;~ 3A50:7850
cs=0x3a50;eip=0x007851; 	T(STI);	// 85872                  sti ;~ 3A50:7851
cs=0x3a50;eip=0x007852; 	X(POP(bx));	// 85873                  pop     bx ;~ 3A50:7852
cs=0x3a50;eip=0x007853; 	X(POP(ds));	// 85874                  pop     ds ;~ 3A50:7853
cs=0x3a50;eip=0x007854; 	J(RETF(0));	// 85876                  retf ;~ 3A50:7854
ret_3a50_7855:
	// 7272 
cs=0x3a50;eip=0x007855; 	X(PUSH(ds));	// 85878                  push    ds ;~ 3A50:7855
cs=0x3a50;eip=0x007856; 	T(ax = 0x4C7A;);	// 85879                  mov     ax, 4C7Ah ;~ 3A50:7856
cs=0x3a50;eip=0x007859; 	T(ds = ax;);	// 85880                  mov     ds, ax ;~ 3A50:7859
cs=0x3a50;eip=0x00785b; 	T(si = 0x204C;);	// 85882                  mov     si, 204Ch ;~ 3A50:785B
cs=0x3a50;eip=0x00785e; 	T(ax = di;);	// 85883                  mov     ax, di ;~ 3A50:785E
cs=0x3a50;eip=0x007860; 	T(cx = 0x14;);	// 85884                  mov     cx, 14h ;~ 3A50:7860
	// 85885                  rep movsw ;~ 3A50:7863
cs=0x3a50;eip=0x007863; 	X(	REP MOVSW);	// 85885                  rep movsw ;~ 3A50:7863
cs=0x3a50;eip=0x007865; 	T(di = ax;);	// 85886                  mov     di, ax ;~ 3A50:7865
cs=0x3a50;eip=0x007867; 	T(ADD(di, 0x1F40));	// 85887                  add     di, 1F40h ;~ 3A50:7867
cs=0x3a50;eip=0x00786b; 	T(cx = 0x14;);	// 85888                  mov     cx, 14h ;~ 3A50:786B
	// 85889                  rep movsw ;~ 3A50:786E
cs=0x3a50;eip=0x00786e; 	X(	REP MOVSW);	// 85889                  rep movsw ;~ 3A50:786E
cs=0x3a50;eip=0x007870; 	T(di = ax;);	// 85890                  mov     di, ax ;~ 3A50:7870
cs=0x3a50;eip=0x007872; 	T(ADD(di, 0x3E80));	// 85891                  add     di, 3E80h ;~ 3A50:7872
cs=0x3a50;eip=0x007876; 	T(cx = 0x14;);	// 85892                  mov     cx, 14h ;~ 3A50:7876
	// 85893                  rep movsw ;~ 3A50:7879
cs=0x3a50;eip=0x007879; 	X(	REP MOVSW);	// 85893                  rep movsw ;~ 3A50:7879
cs=0x3a50;eip=0x00787b; 	T(di = ax;);	// 85894                  mov     di, ax ;~ 3A50:787B
cs=0x3a50;eip=0x00787d; 	T(ADD(di, 0x5DC0));	// 85895                  add     di, 5DC0h ;~ 3A50:787D
cs=0x3a50;eip=0x007881; 	T(cx = 0x14;);	// 85896                  mov     cx, 14h ;~ 3A50:7881
	// 85897                  rep movsw ;~ 3A50:7884
cs=0x3a50;eip=0x007884; 	X(	REP MOVSW);	// 85897                  rep movsw ;~ 3A50:7884
cs=0x3a50;eip=0x007886; 	T(di = ax;);	// 85898                  mov     di, ax ;~ 3A50:7886
cs=0x3a50;eip=0x007888; 	T(ADD(di, 0x7D00));	// 85899                  add     di, 7D00h ;~ 3A50:7888
cs=0x3a50;eip=0x00788c; 	T(cx = 0x14;);	// 85900                  mov     cx, 14h ;~ 3A50:788C
	// 85901                  rep movsw ;~ 3A50:788F
cs=0x3a50;eip=0x00788f; 	X(	REP MOVSW);	// 85901                  rep movsw ;~ 3A50:788F
cs=0x3a50;eip=0x007891; 	X(POP(ds));	// 85902                  pop     ds ;~ 3A50:7891
cs=0x3a50;eip=0x007892; 	J(RETF(0));	// 85904                  retf ;~ 3A50:7892
ret_3a50_7893:
	// 7273 
cs=0x3a50;eip=0x007893; 	X(PUSH(ds));	// 85906                  push    ds ;~ 3A50:7893
cs=0x3a50;eip=0x007894; 	T(ax = 0x3C7A;);	// 85907                  mov     ax, 3C7Ah ;~ 3A50:7894
cs=0x3a50;eip=0x007897; 	T(ds = ax;);	// 85908                  mov     ds, ax ;~ 3A50:7897
cs=0x3a50;eip=0x007899; 	T(si = 0x204C;);	// 85910                  mov     si, 204Ch ;~ 3A50:7899
cs=0x3a50;eip=0x00789c; 	T(ax = di;);	// 85911                  mov     ax, di ;~ 3A50:789C
cs=0x3a50;eip=0x00789e; 	T(cx = 0x14;);	// 85912                  mov     cx, 14h ;~ 3A50:789E
	// 85913                  rep movsw ;~ 3A50:78A1
cs=0x3a50;eip=0x0078a1; 	X(	REP MOVSW);	// 85913                  rep movsw ;~ 3A50:78A1
cs=0x3a50;eip=0x0078a3; 	T(di = ax;);	// 85914                  mov     di, ax ;~ 3A50:78A3
cs=0x3a50;eip=0x0078a5; 	T(ADD(di, 0x1F40));	// 85915                  add     di, 1F40h ;~ 3A50:78A5
cs=0x3a50;eip=0x0078a9; 	T(cx = 0x14;);	// 85916                  mov     cx, 14h ;~ 3A50:78A9
	// 85917                  rep movsw ;~ 3A50:78AC
cs=0x3a50;eip=0x0078ac; 	X(	REP MOVSW);	// 85917                  rep movsw ;~ 3A50:78AC
cs=0x3a50;eip=0x0078ae; 	T(di = ax;);	// 85918                  mov     di, ax ;~ 3A50:78AE
cs=0x3a50;eip=0x0078b0; 	T(ADD(di, 0x3E80));	// 85919                  add     di, 3E80h ;~ 3A50:78B0
cs=0x3a50;eip=0x0078b4; 	T(cx = 0x14;);	// 85920                  mov     cx, 14h ;~ 3A50:78B4
	// 85921                  rep movsw ;~ 3A50:78B7
cs=0x3a50;eip=0x0078b7; 	X(	REP MOVSW);	// 85921                  rep movsw ;~ 3A50:78B7
cs=0x3a50;eip=0x0078b9; 	T(di = ax;);	// 85922                  mov     di, ax ;~ 3A50:78B9
cs=0x3a50;eip=0x0078bb; 	T(ADD(di, 0x5DC0));	// 85923                  add     di, 5DC0h ;~ 3A50:78BB
cs=0x3a50;eip=0x0078bf; 	T(cx = 0x14;);	// 85924                  mov     cx, 14h ;~ 3A50:78BF
	// 85925                  rep movsw ;~ 3A50:78C2
cs=0x3a50;eip=0x0078c2; 	X(	REP MOVSW);	// 85925                  rep movsw ;~ 3A50:78C2
cs=0x3a50;eip=0x0078c4; 	X(POP(ds));	// 85926                  pop     ds ;~ 3A50:78C4
cs=0x3a50;eip=0x0078c5; 	J(RETF(0));	// 85928                  retf ;~ 3A50:78C5
ret_3a50_78c6:
	// 7274 
cs=0x3a50;eip=0x0078c6; 	J(RETF(0));	// 85930                  retf ;~ 3A50:78C6
ret_3a50_78c7:
	// 7275 
cs=0x3a50;eip=0x0078c7; 	J(RETF(0));	// 85932                  retf ;~ 3A50:78C7
ret_3a50_78c8:
	// 7276 
cs=0x3a50;eip=0x0078c8; 	J(RETF(0));	// 85934                  retf ;~ 3A50:78C8
ret_3a50_a01c:
	// 7277 
cs=0x3a50;eip=0x00a01c; 	T(OR(cx, *(dw*)(raddr(ss,bp+di))));	// 86332                  or      cx, [bp+di] ;~ 3A50:A01C
cs=0x3a50;eip=0x00a01e; 	T(OR(cx, *(dw*)(raddr(ss,bp+di))));	// 86333                  or      cx, [bp+di] ;~ 3A50:A01E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_4f248: 	goto loc_4f248;
        case m2c::kloc_4f26f: 	goto loc_4f26f;
        case m2c::kloc_4f27f: 	goto loc_4f27f;
        case m2c::kloc_4f290: 	goto loc_4f290;
        case m2c::kloc_4f295: 	goto loc_4f295;
        case m2c::kloc_4f29d: 	goto loc_4f29d;
        case m2c::kloc_4f2a4: 	goto loc_4f2a4;
        case m2c::kloc_4f2b5: 	goto loc_4f2b5;
        case m2c::kloc_4f2bb: 	goto loc_4f2bb;
        case m2c::kloc_4f2c2: 	goto loc_4f2c2;
        case m2c::kloc_4f2d3: 	goto loc_4f2d3;
        case m2c::kloc_4f2d9: 	goto loc_4f2d9;
        case m2c::kloc_4f2ef: 	goto loc_4f2ef;
        case m2c::kloc_4f316: 	goto loc_4f316;
        case m2c::kloc_4f326: 	goto loc_4f326;
        case m2c::kloc_4f337: 	goto loc_4f337;
        case m2c::kloc_4f33c: 	goto loc_4f33c;
        case m2c::kloc_4f344: 	goto loc_4f344;
        case m2c::kloc_4f34b: 	goto loc_4f34b;
        case m2c::kloc_4f35c: 	goto loc_4f35c;
        case m2c::kloc_4f47c: 	goto loc_4f47c;
        case m2c::kloc_4f493: 	goto loc_4f493;
        case m2c::kloc_4f4a1: 	goto loc_4f4a1;
        case m2c::kloc_4f4a7: 	goto loc_4f4a7;
        case m2c::kloc_4f4b5: 	goto loc_4f4b5;
        case m2c::kloc_4f4ba: 	goto loc_4f4ba;
        case m2c::kloc_4f4d1: 	goto loc_4f4d1;
        case m2c::kloc_4f4df: 	goto loc_4f4df;
        case m2c::kloc_4f4e5: 	goto loc_4f4e5;
        case m2c::kloc_4f4f3: 	goto loc_4f4f3;
        case m2c::kloc_4f4f8: 	goto loc_4f4f8;
        case m2c::kloc_4f4ff: 	goto loc_4f4ff;
        case m2c::kloc_4f515: 	goto loc_4f515;
        case m2c::kloc_4f530: 	goto loc_4f530;
        case m2c::kloc_4f53c: 	goto loc_4f53c;
        case m2c::kloc_4f5aa: 	goto loc_4f5aa;
        case m2c::kloc_4f5df: 	goto loc_4f5df;
        case m2c::kloc_4f60e: 	goto loc_4f60e;
        case m2c::kloc_4f61a: 	goto loc_4f61a;
        case m2c::kloc_4f621: 	goto loc_4f621;
        case m2c::kloc_5026a: 	goto loc_5026a;
        case m2c::kloc_50274: 	goto loc_50274;
        case m2c::kloc_5027a: 	goto loc_5027a;
        case m2c::kloc_50280: 	goto loc_50280;
        case m2c::kloc_50286: 	goto loc_50286;
        case m2c::kloc_5029a: 	goto loc_5029a;
        case m2c::kloc_502b4: 	goto loc_502b4;
        case m2c::kloc_502c0: 	goto loc_502c0;
        case m2c::kloc_502c6: 	goto loc_502c6;
        case m2c::kloc_502cc: 	goto loc_502cc;
        case m2c::kloc_502d2: 	goto loc_502d2;
        case m2c::kloc_502d8: 	goto loc_502d8;
        case m2c::kloc_502f0: 	goto loc_502f0;
        case m2c::kret_3a50_674e: 	goto ret_3a50_674e;
        case m2c::kret_3a50_690d: 	goto ret_3a50_690d;
        case m2c::kret_3a50_6914: 	goto ret_3a50_6914;
        case m2c::kret_3a50_692c: 	goto ret_3a50_692c;
        case m2c::kret_3a50_6933: 	goto ret_3a50_6933;
        case m2c::kret_3a50_6947: 	goto ret_3a50_6947;
        case m2c::kret_3a50_6952: 	goto ret_3a50_6952;
        case m2c::kret_3a50_6965: 	goto ret_3a50_6965;
        case m2c::kret_3a50_6977: 	goto ret_3a50_6977;
        case m2c::kret_3a50_698a: 	goto ret_3a50_698a;
        case m2c::kret_3a50_6a38: 	goto ret_3a50_6a38;
        case m2c::kret_3a50_775d: 	goto ret_3a50_775d;
        case m2c::kret_3a50_776b: 	goto ret_3a50_776b;
        case m2c::kret_3a50_776c: 	goto ret_3a50_776c;
        case m2c::kret_3a50_776d: 	goto ret_3a50_776d;
        case m2c::kret_3a50_7777: 	goto ret_3a50_7777;
        case m2c::kret_3a50_7778: 	goto ret_3a50_7778;
        case m2c::kret_3a50_77be: 	goto ret_3a50_77be;
        case m2c::kret_3a50_7814: 	goto ret_3a50_7814;
        case m2c::kret_3a50_7855: 	goto ret_3a50_7855;
        case m2c::kret_3a50_7893: 	goto ret_3a50_7893;
        case m2c::kret_3a50_78c6: 	goto ret_3a50_78c6;
        case m2c::kret_3a50_78c7: 	goto ret_3a50_78c7;
        case m2c::kret_3a50_78c8: 	goto ret_3a50_78c8;
        case m2c::kret_3a50_a01c: 	goto ret_3a50_a01c;
        case m2c::kseg48ae_1300_proc: 	goto seg48ae_1300_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}


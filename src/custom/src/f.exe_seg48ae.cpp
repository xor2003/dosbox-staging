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
	J(return __dispatch_call(__disp, _state););	// 78157                  jmp     far ptr 0:0 ;~ 3A50:0EBE

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
	J(return __dispatch_call(__disp, _state););	// 78168                  jmp     far ptr 0:0 ;~ 3A50:0EC3

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
	J(return __dispatch_call(__disp, _state););	// 78177                  jmp     far ptr 0:0 ;~ 3A50:0EC8

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
	J(return __dispatch_call(__disp, _state););	// 78186                  jmp     far ptr 0:0 ;~ 3A50:0ECD

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
	J(return __dispatch_call(__disp, _state););	// 78196                  jmp     far ptr 0:0 ;~ 3A50:0ED2

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
	J(return __dispatch_call(__disp, _state););	// 78205                  jmp     far ptr 0:0 ;~ 3A50:0ED7

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
	J(return __dispatch_call(__disp, _state););	// 78215                  jmp     far ptr 0:0 ;~ 3A50:0EDC

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
	J(return __dispatch_call(__disp, _state););	// 78219                  jmp     far ptr 0:0 ;~ 3A50:0EE1
ret_3a50_ee6:
	// 7323 
cs=0x3a50;eip=0x000ee6; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 78221                  jmp     far ptr 0:0 ;~ 3A50:0EE6
ret_3a50_eeb:
	// 7324 
cs=0x3a50;eip=0x000eeb; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 78223                  jmp     far ptr 0:0 ;~ 3A50:0EEB
ret_3a50_ef0:
	// 7325 
cs=0x3a50;eip=0x000ef0; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 78225                  jmp     far ptr 0:0 ;~ 3A50:0EF0

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
	J(return __dispatch_call(__disp, _state););	// 78233                  jmp     far ptr 0:0 ;~ 3A50:0EF5

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
	J(return __dispatch_call(__disp, _state););	// 78243                  jmp     far ptr 0:0 ;~ 3A50:0EFA

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
	J(return __dispatch_call(__disp, _state););	// 78254                  jmp     far ptr 0:0 ;~ 3A50:0EFF

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
	J(return __dispatch_call(__disp, _state););	// 78264                  jmp     far ptr 0:0 ;~ 3A50:0F04

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
	J(return __dispatch_call(__disp, _state););	// 78274                  jmp     far ptr 0:0 ;~ 3A50:0F09

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
	J(return __dispatch_call(__disp, _state););	// 78284                  jmp     far ptr 0:0 ;~ 3A50:0F0E

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
	J(return __dispatch_call(__disp, _state););	// 78288                  jmp     far ptr 0:0 ;~ 3A50:0F13

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
	J(return __dispatch_call(__disp, _state););	// 78296                  jmp     far ptr 0:0 ;~ 3A50:0F18

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
	J(return __dispatch_call(__disp, _state););	// 78300                  jmp     far ptr 0:0 ;~ 3A50:0F1D
ret_3a50_f22:
	// 7326 
cs=0x3a50;eip=0x000f22; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 78302                  jmp     far ptr 0:0 ;~ 3A50:0F22
ret_3a50_f27:
	// 7327 
cs=0x3a50;eip=0x000f27; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 78304                  jmp     far ptr 0:0 ;~ 3A50:0F27
ret_3a50_f2c:
	// 7328 
cs=0x3a50;eip=0x000f2c; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 78306                  jmp     far ptr 0:0 ;~ 3A50:0F2C
ret_3a50_f31:
	// 7329 
cs=0x3a50;eip=0x000f31; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 78308                  jmp     far ptr 0:0 ;~ 3A50:0F31

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
	J(return __dispatch_call(__disp, _state););	// 78316                  jmp     far ptr 0:0 ;~ 3A50:0F36

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
	J(return __dispatch_call(__disp, _state););	// 78326                  jmp     far ptr 0:0 ;~ 3A50:0F3B

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
	J(return __dispatch_call(__disp, _state););	// 78336                  jmp     far ptr 0:0 ;~ 3A50:0F40

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
	J(return __dispatch_call(__disp, _state););	// 78345                  jmp     far ptr 0:0 ;~ 3A50:0F45

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
	J(return __dispatch_call(__disp, _state););	// 78354                  jmp     far ptr 0:0 ;~ 3A50:0F4A

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
	J(return __dispatch_call(__disp, _state););	// 78364                  jmp     far ptr 0:0 ;~ 3A50:0F4F

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
	J(return __dispatch_call(__disp, _state););	// 78368                  jmp     far ptr 0:0 ;~ 3A50:0F54

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
	J(return __dispatch_call(__disp, _state););	// 78376                  jmp     far ptr 0:0 ;~ 3A50:0F59

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
	J(return __dispatch_call(__disp, _state););	// 78386                  jmp     far ptr 0:0 ;~ 3A50:0F5E

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
	J(return __dispatch_call(__disp, _state););	// 78396                  jmp     far ptr 0:0 ;~ 3A50:0F63

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
	J(return __dispatch_call(__disp, _state););	// 78407                  jmp     far ptr 0:0 ;~ 3A50:0F68

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
	J(return __dispatch_call(__disp, _state););	// 78417                  jmp     far ptr 0:0 ;~ 3A50:0F6D

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
	J(return __dispatch_call(__disp, _state););	// 78426                  jmp     far ptr 0:0 ;~ 3A50:0F72

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
	J(return __dispatch_call(__disp, _state););	// 78436                  jmp     far ptr 0:0 ;~ 3A50:0F77

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
	J(return __dispatch_call(__disp, _state););	// 78440                  jmp     far ptr 0:0 ;~ 3A50:0F7C
ret_3a50_f81:
	// 7330 
cs=0x3a50;eip=0x000f81; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 78442                  jmp     far ptr 0:0 ;~ 3A50:0F81

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
	J(return __dispatch_call(__disp, _state););	// 78450                  jmp     far ptr 0:0 ;~ 3A50:0F86

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
	J(return __dispatch_call(__disp, _state););	// 78461                  jmp     far ptr 0:0 ;~ 3A50:0F8B

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
	J(return __dispatch_call(__disp, _state););	// 78471                  jmp     far ptr 0:0 ;~ 3A50:0F90

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



 bool sub_49a75(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_49a75:
    _begin:
cs=0x3a50;eip=0x000f95; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 78480                  jmp     far ptr 0:0 ;~ 3A50:0F95

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_49a75: 	goto sub_49a75;
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
	J(return __dispatch_call(__disp, _state););	// 78489                  jmp     far ptr 0:0 ;~ 3A50:0F9A

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
	J(return __dispatch_call(__disp, _state););	// 78499                  jmp     far ptr 0:0 ;~ 3A50:0F9F

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
	J(return __dispatch_call(__disp, _state););	// 78508                  jmp     far ptr 0:0 ;~ 3A50:0FA4

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
	J(return __dispatch_call(__disp, _state););	// 78512                  jmp     far ptr 0:0 ;~ 3A50:0FA9
ret_3a50_fae:
	// 7331 
cs=0x3a50;eip=0x000fae; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 78514                  jmp     far ptr 0:0 ;~ 3A50:0FAE
ret_3a50_fb3:
	// 7332 
cs=0x3a50;eip=0x000fb3; __disp=*(dd*)(raddr(cs,eip+1));
	J(return __dispatch_call(__disp, _state););	// 78516                  jmp     far ptr 0:0 ;~ 3A50:0FB3

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
	J(return __dispatch_call(__disp, _state););	// 78524                  jmp     far ptr 0:0 ;~ 3A50:0FB8

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
	J(return __dispatch_call(__disp, _state););	// 78534                  jmp     far ptr 0:0 ;~ 3A50:0FBD

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
	J(return __dispatch_call(__disp, _state););	// 78543                  jmp     far ptr 0:0 ;~ 3A50:0FC2

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
	J(return __dispatch_call(__disp, _state););	// 78552                  jmp     far ptr 0:0 ;~ 3A50:0FC7

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
	J(return __dispatch_call(__disp, _state););	// 78561                  jmp     far ptr 0:0 ;~ 3A50:0FCC

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
	J(return __dispatch_call(__disp, _state););	// 78571                  jmp     far ptr 0:0 ;~ 3A50:0FD1

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
	J(return __dispatch_call(__disp, _state););	// 78580                  jmp     far ptr 0:0 ;~ 3A50:0FD6

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
	J(return __dispatch_call(__disp, _state););	// 78584                  jmp     far ptr 0:0 ;~ 3A50:0FDB

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
	J(return __dispatch_call(__disp, _state););	// 78592                  jmp     far ptr 0:0 ;~ 3A50:0FE0

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
	J(return __dispatch_call(__disp, _state););	// 78602                  jmp     far ptr 0:0 ;~ 3A50:0FE5

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
	J(return __dispatch_call(__disp, _state););	// 78606                  jmp     far ptr 0:0 ;~ 3A50:0FEA

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
	J(return __dispatch_call(__disp, _state););	// 78614                  jmp     far ptr 0:0 ;~ 3A50:0FEF

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
	J(return __dispatch_call(__disp, _state););	// 78624                  jmp     far ptr 0:0 ;~ 3A50:0FF4

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
	J(return __dispatch_call(__disp, _state););	// 78634                  jmp     far ptr 0:0 ;~ 3A50:0FF9

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
	J(return __dispatch_call(__disp, _state););	// 78649                  jmp     far ptr 0:0 ;~ 3A50:1003

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
	J(return __dispatch_call(__disp, _state););	// 78670                  jmp     far ptr 0:0 ;~ 3A50:1012

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
	J(return __dispatch_call(__disp, _state););	// 78680                  jmp     far ptr 0:0 ;~ 3A50:1017

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
	J(return __dispatch_call(__disp, _state););	// 78690                  jmp     far ptr 0:0 ;~ 3A50:101C

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
	J(return __dispatch_call(__disp, _state););	// 78700                  jmp     far ptr 0:0 ;~ 3A50:1021

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
	J(return __dispatch_call(__disp, _state););	// 78715                  jmp     far ptr 0:0 ;~ 3A50:102B

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
	J(return __dispatch_call(__disp, _state););	// 78732                  jmp     far ptr 0:0 ;~ 3A50:1035

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
	J(return __dispatch_call(__disp, _state););	// 78742                  jmp     far ptr 0:0 ;~ 3A50:103A

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
	J(return __dispatch_call(__disp, _state););	// 78763                  jmp     far ptr 0:0 ;~ 3A50:1049

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
	J(return __dispatch_call(__disp, _state););	// 78784                  jmp     far ptr 0:0 ;~ 3A50:1058

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
	J(return __dispatch_call(__disp, _state););	// 78835                  jmp     far ptr 0:0 ;~ 3A50:1085

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
	J(return __dispatch_call(__disp, _state););	// 78850                  jmp     far ptr 0:0 ;~ 3A50:108F

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
	J(return __dispatch_call(__disp, _state););	// 78891                  jmp     far ptr 0:0 ;~ 3A50:10B2

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
	J(return __dispatch_call(__disp, _state););	// 78901                  jmp     far ptr 0:0 ;~ 3A50:10B7

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
	J(return __dispatch_call(__disp, _state););	// 78910                  jmp     far ptr 0:0 ;~ 3A50:10BC

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
	J(return __dispatch_call(__disp, _state););	// 78925                  jmp     far ptr 0:0 ;~ 3A50:10C6

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
	J(return __dispatch_call(__disp, _state););	// 78935                  jmp     far ptr 0:0 ;~ 3A50:10CB

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
	J(return __dispatch_call(__disp, _state););	// 78944                  jmp     far ptr 0:0 ;~ 3A50:10D0

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
	J(return __dispatch_call(__disp, _state););	// 78953                  jmp     far ptr 0:0 ;~ 3A50:10D5

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
	J(return __dispatch_call(__disp, _state););	// 78962                  jmp     far ptr 0:0 ;~ 3A50:10DA

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
	J(return __dispatch_call(__disp, _state););	// 78972                  jmp     far ptr 0:0 ;~ 3A50:10DF

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
cs=0x3a50;eip=0x001300; 	X(ADD(*(raddr(ds,bx+di)), al));	// 79047                  add     [bx+di], al ;~ 3A50:1300
cs=0x3a50;eip=0x001302; 	T(INC(ax));	// 79048                  inc     ax ;~ 3A50:1302
cs=0x3a50;eip=0x001303; 	X(ADD(*(raddr(ds,bx+si)), dl));	// 79049                  add     [bx+si], dl ;~ 3A50:1303
cs=0x3a50;eip=0x001305; 	X(ADD(*(raddr(ds,bx+si)), cl));	// 79050                  add     [bx+si], cl ;~ 3A50:1305
cs=0x3a50;eip=0x00597a; 	J(RETF(0));	// 82773                  retf ;~ 3A50:597A
ret_3a50_674e:
	// 7333 
cs=0x3a50;eip=0x00674e; 	T(SUB(al, al));	// 83831                  sub     al, al ;~ 3A50:674E
cs=0x3a50;eip=0x006750; 	X(*((amsruntimelibra)+3) = ah;);	// 83832                  mov     byte ptr cs:aMsRunTimeLibra+3, ah ; "Run-Time Library - Copyright (c) 1988, "... ;~ 3A50:6750
cs=0x3a50;eip=0x006755; 	S(OUT(dx, ax));	// 83833                  out     dx, ax ;~ 3A50:6755
cs=0x3a50;eip=0x006756; 	T(al = 8;);	// 83834                  mov     al, 8 ;~ 3A50:6756
cs=0x3a50;eip=0x006758; 	S(OUT(dx, al));	// 83835                  out     dx, al ;~ 3A50:6758
cs=0x3a50;eip=0x006759; 	T(CLI);	// 83836                  cli ;~ 3A50:6759
cs=0x3a50;eip=0x00675a; 	T(INC(dx));	// 83837                  inc     dx ;~ 3A50:675A
cs=0x3a50;eip=0x00675b; 	T(CMP(*(db*)(((db*)word_4aa98)+3), 1));	// 83838                  cmp     byte ptr word_4AA98+3, 1 ;~ 3A50:675B
cs=0x3a50;eip=0x006760; 	J(JNZ(loc_4f248));	// 83839                  jnz     short loc_4F248 ;~ 3A50:6760
cs=0x3a50;eip=0x006762; 	T(ADD(si, 4));	// 83840                  add     si, 4 ;~ 3A50:6762
cs=0x3a50;eip=0x006765; 	J(JMP(loc_4f2ef));	// 83841                  jmp     loc_4F2EF ;~ 3A50:6765
loc_4f248:
	// 7334 
cs=0x3a50;eip=0x006768; 	T(di = 0x410;);	// 83845                  mov     di, 410h ;~ 3A50:6768
cs=0x3a50;eip=0x00676b; 	T(ADD(di, *(dw*)(raddr(ds,si+0x1F9C))));	// 83846                  add     di, [si+1F9Ch] ;~ 3A50:676B
cs=0x3a50;eip=0x00676f; 	T(al = 0x28;);	// 83847                  mov     al, 28h ; '(' ;~ 3A50:676F
cs=0x3a50;eip=0x006771; 	T(cl = *(db*)(word_4aa98););	// 83848                  mov     cl, byte ptr word_4AA98 ;~ 3A50:6771
cs=0x3a50;eip=0x006775; 	T(SUB(cl, 0x1B));	// 83849                  sub     cl, 1Bh ;~ 3A50:6775
cs=0x3a50;eip=0x006778; 	T(MUL1_1(cl));	// 83850                  mul     cl ;~ 3A50:6778
cs=0x3a50;eip=0x00677a; 	T(ADD(di, ax));	// 83851                  add     di, ax ;~ 3A50:677A
cs=0x3a50;eip=0x00677c; 	T(bx = di;);	// 83852                  mov     bx, di ;~ 3A50:677C
cs=0x3a50;eip=0x00677e; 	T(bp = di;);	// 83853                  mov     bp, di ;~ 3A50:677E
cs=0x3a50;eip=0x006780; 	T(CMP(*(db*)(((db*)word_4aa98)+2), 1));	// 83854                  cmp     byte ptr word_4AA98+2, 1 ;~ 3A50:6780
cs=0x3a50;eip=0x006785; 	J(JL(loc_4f26f));	// 83855                  jl      short loc_4F26F ;~ 3A50:6785
cs=0x3a50;eip=0x006787; 	T(ADD(bx, 0x320));	// 83856                  add     bx, 320h ;~ 3A50:6787
cs=0x3a50;eip=0x00678b; 	T(ADD(di, 0x190));	// 83857                  add     di, 190h ;~ 3A50:678B
loc_4f26f:
	// 7335 
cs=0x3a50;eip=0x00678f; 	T(bp = bx;);	// 83860                  mov     bp, bx ;~ 3A50:678F
cs=0x3a50;eip=0x006791; 	T(SUB(bp, 0x190));	// 83861                  sub     bp, 190h ;~ 3A50:6791
cs=0x3a50;eip=0x006795; 	T(cx = 0;);	// 83862                  mov     cx, 0 ;~ 3A50:6795
cs=0x3a50;eip=0x006798; 	T(MOV(al, *(raddr(ds,si+0x1FA4))));	// 83863                  mov     al, [si+1FA4h] ;~ 3A50:6798
cs=0x3a50;eip=0x00679c; 	S(OUT(dx, al));	// 83864                  out     dx, al ;~ 3A50:679C
cs=0x3a50;eip=0x00679d; 	J(JCXZ(loc_4f295));	// 83865                  jcxz    short loc_4F295 ;~ 3A50:679D
loc_4f27f:
	// 7336 
cs=0x3a50;eip=0x00679f; 	T(CMP(di, 0x410));	// 83869                  cmp     di, 410h ;~ 3A50:679F
cs=0x3a50;eip=0x0067a3; 	J(JC(loc_4f29d));	// 83870                  jb      short loc_4F29D ;~ 3A50:67A3
cs=0x3a50;eip=0x0067a5; 	T(CMP(di, 0x0D70));	// 83871                  cmp     di, 0D70h ;~ 3A50:67A5
cs=0x3a50;eip=0x0067a9; 	J(JA(loc_4f290));	// 83872                  ja      short loc_4F290 ;~ 3A50:67A9
cs=0x3a50;eip=0x0067ab; 	T(CMP(*(raddr(es,di)), al));	// 83873                  cmp     es:[di], al ;~ 3A50:67AB
cs=0x3a50;eip=0x0067ae; 	X(STOSB);	// 83874                  stosb ;~ 3A50:67AE
cs=0x3a50;eip=0x0067af; 	T(DEC(di));	// 83875                  dec     di ;~ 3A50:67AF
loc_4f290:
	// 7337 
cs=0x3a50;eip=0x0067b0; 	T(SUB(di, 0x50));	// 83878                  sub     di, 50h ; 'P' ;~ 3A50:67B0
cs=0x3a50;eip=0x0067b3; 	J(LOOP(loc_4f27f));	// 83879                  loop    loc_4F27F ;~ 3A50:67B3
loc_4f295:
	// 7338 
cs=0x3a50;eip=0x0067b5; 	T(SUB(di, 0x50));	// 83882                  sub     di, 50h ; 'P' ;~ 3A50:67B5
cs=0x3a50;eip=0x0067b8; 	T(cx = 4;);	// 83883                  mov     cx, 4 ;~ 3A50:67B8
cs=0x3a50;eip=0x0067bb; 	J(JNZ(loc_4f27f));	// 83884                  jnz     short loc_4F27F ;~ 3A50:67BB
loc_4f29d:
	// 7339 
cs=0x3a50;eip=0x0067bd; 	T(di = bx;);	// 83887                  mov     di, bx ;~ 3A50:67BD
cs=0x3a50;eip=0x0067bf; 	T(MOV(al, *(raddr(ds,si+0x1FB0))));	// 83888                  mov     al, [si+1FB0h] ;~ 3A50:67BF
cs=0x3a50;eip=0x0067c3; 	S(OUT(dx, al));	// 83889                  out     dx, al ;~ 3A50:67C3
loc_4f2a4:
	// 7340 
cs=0x3a50;eip=0x0067c4; 	T(CMP(di, 0x410));	// 83892                  cmp     di, 410h ;~ 3A50:67C4
cs=0x3a50;eip=0x0067c8; 	J(JC(loc_4f2bb));	// 83893                  jb      short loc_4F2BB ;~ 3A50:67C8
cs=0x3a50;eip=0x0067ca; 	T(CMP(di, 0x0D70));	// 83894                  cmp     di, 0D70h ;~ 3A50:67CA
cs=0x3a50;eip=0x0067ce; 	J(JA(loc_4f2b5));	// 83895                  ja      short loc_4F2B5 ;~ 3A50:67CE
cs=0x3a50;eip=0x0067d0; 	T(CMP(*(raddr(es,di)), al));	// 83896                  cmp     es:[di], al ;~ 3A50:67D0
cs=0x3a50;eip=0x0067d3; 	X(STOSB);	// 83897                  stosb ;~ 3A50:67D3
cs=0x3a50;eip=0x0067d4; 	T(DEC(di));	// 83898                  dec     di ;~ 3A50:67D4
loc_4f2b5:
	// 7341 
cs=0x3a50;eip=0x0067d5; 	T(SUB(di, 0x320));	// 83901                  sub     di, 320h ;~ 3A50:67D5
cs=0x3a50;eip=0x0067d9; 	J(JMP(loc_4f2a4));	// 83902                  jmp     short loc_4F2A4 ;~ 3A50:67D9
loc_4f2bb:
	// 7342 
cs=0x3a50;eip=0x0067db; 	T(di = bp;);	// 83906                  mov     di, bp ;~ 3A50:67DB
cs=0x3a50;eip=0x0067dd; 	T(MOV(al, *(raddr(ds,si+0x1FAC))));	// 83907                  mov     al, [si+1FACh] ;~ 3A50:67DD
cs=0x3a50;eip=0x0067e1; 	S(OUT(dx, al));	// 83908                  out     dx, al ;~ 3A50:67E1
loc_4f2c2:
	// 7343 
cs=0x3a50;eip=0x0067e2; 	T(CMP(di, 0x410));	// 83911                  cmp     di, 410h ;~ 3A50:67E2
cs=0x3a50;eip=0x0067e6; 	J(JC(loc_4f2d9));	// 83912                  jb      short loc_4F2D9 ;~ 3A50:67E6
cs=0x3a50;eip=0x0067e8; 	T(CMP(di, 0x0D70));	// 83913                  cmp     di, 0D70h ;~ 3A50:67E8
cs=0x3a50;eip=0x0067ec; 	J(JA(loc_4f2d3));	// 83914                  ja      short loc_4F2D3 ;~ 3A50:67EC
cs=0x3a50;eip=0x0067ee; 	T(CMP(*(raddr(es,di)), al));	// 83915                  cmp     es:[di], al ;~ 3A50:67EE
cs=0x3a50;eip=0x0067f1; 	X(STOSB);	// 83916                  stosb ;~ 3A50:67F1
cs=0x3a50;eip=0x0067f2; 	T(DEC(di));	// 83917                  dec     di ;~ 3A50:67F2
loc_4f2d3:
	// 7344 
cs=0x3a50;eip=0x0067f3; 	T(SUB(di, 0x320));	// 83920                  sub     di, 320h ;~ 3A50:67F3
cs=0x3a50;eip=0x0067f7; 	J(JMP(loc_4f2c2));	// 83921                  jmp     short loc_4F2C2 ;~ 3A50:67F7
loc_4f2d9:
	// 7345 
cs=0x3a50;eip=0x0067f9; 	T(STI);	// 83926                  sti ;~ 3A50:67F9
cs=0x3a50;eip=0x0067fa; 	T(ax = 1;);	// 83927                  mov     ax, 1 ;~ 3A50:67FA
cs=0x3a50;eip=0x0067fd; 	X(*((amsruntimelibra)+4) = ah;);	// 83928                  mov     byte ptr cs:aMsRunTimeLibra+4, ah ; "un-Time Library - Copyright (c) 1988, M"... ;~ 3A50:67FD
cs=0x3a50;eip=0x006802; 	S(OUT(dx, ax));	// 83929                  out     dx, ax ;~ 3A50:6802
cs=0x3a50;eip=0x006803; 	T(ax = 0x0FF08;);	// 83930                  mov     ax, 0FF08h ;~ 3A50:6803
cs=0x3a50;eip=0x006806; 	X(*((amsruntimelibra)+9) = ah;);	// 83931                  mov     byte ptr cs:aMsRunTimeLibra+9, ah ; "me Library - Copyright (c) 1988, Micros"... ;~ 3A50:6806
cs=0x3a50;eip=0x00680b; 	S(OUT(dx, ax));	// 83932                  out     dx, ax ;~ 3A50:680B
cs=0x3a50;eip=0x00680c; 	X(POP(ds));	// 83933                  pop     ds ;~ 3A50:680C
cs=0x3a50;eip=0x00680d; 	X(POP(es));	// 83935                  pop     es ;~ 3A50:680D
cs=0x3a50;eip=0x00680e; 	J(RETF(0));	// 83937                  retf ;~ 3A50:680E
loc_4f2ef:
	// 7346 
cs=0x3a50;eip=0x00680f; 	T(di = 0x0A50;);	// 83941                  mov     di, 0A50h ;~ 3A50:680F
cs=0x3a50;eip=0x006812; 	T(ADD(di, *(dw*)(raddr(ds,si+0x1F9C))));	// 83942                  add     di, [si+1F9Ch] ;~ 3A50:6812
cs=0x3a50;eip=0x006816; 	T(al = 0x28;);	// 83943                  mov     al, 28h ; '(' ;~ 3A50:6816
cs=0x3a50;eip=0x006818; 	T(MOV(cl, *(raddr(ds,0x1FB8))));	// 83944                  mov     cl, ds:1FB8h ;~ 3A50:6818
cs=0x3a50;eip=0x00681c; 	T(SUB(cl, 0x42));	// 83945                  sub     cl, 42h ; 'B' ;~ 3A50:681C
cs=0x3a50;eip=0x00681f; 	T(MUL1_1(cl));	// 83946                  mul     cl ;~ 3A50:681F
cs=0x3a50;eip=0x006821; 	T(ADD(di, ax));	// 83947                  add     di, ax ;~ 3A50:6821
cs=0x3a50;eip=0x006823; 	T(bx = di;);	// 83948                  mov     bx, di ;~ 3A50:6823
cs=0x3a50;eip=0x006825; 	T(bp = di;);	// 83949                  mov     bp, di ;~ 3A50:6825
cs=0x3a50;eip=0x006827; 	T(CMP(*(raddr(ds,0x1FBA)), 1));	// 83950                  cmp     byte ptr ds:1FBAh, 1 ;~ 3A50:6827
cs=0x3a50;eip=0x00682c; 	J(JL(loc_4f316));	// 83951                  jl      short loc_4F316 ;~ 3A50:682C
cs=0x3a50;eip=0x00682e; 	T(ADD(bx, 0x320));	// 83952                  add     bx, 320h ;~ 3A50:682E
cs=0x3a50;eip=0x006832; 	T(ADD(di, 0x190));	// 83953                  add     di, 190h ;~ 3A50:6832
loc_4f316:
	// 7347 
cs=0x3a50;eip=0x006836; 	T(bp = bx;);	// 83956                  mov     bp, bx ;~ 3A50:6836
cs=0x3a50;eip=0x006838; 	T(SUB(bp, 0x0C8));	// 83957                  sub     bp, 0C8h ;~ 3A50:6838
cs=0x3a50;eip=0x00683c; 	T(cx = 0;);	// 83958                  mov     cx, 0 ;~ 3A50:683C
cs=0x3a50;eip=0x00683f; 	T(MOV(al, *(raddr(ds,si+0x1FA4))));	// 83959                  mov     al, [si+1FA4h] ;~ 3A50:683F
cs=0x3a50;eip=0x006843; 	S(OUT(dx, al));	// 83960                  out     dx, al ;~ 3A50:6843
cs=0x3a50;eip=0x006844; 	J(JCXZ(loc_4f33c));	// 83961                  jcxz    short loc_4F33C ;~ 3A50:6844
loc_4f326:
	// 7348 
cs=0x3a50;eip=0x006846; 	T(CMP(di, 0x0AA0));	// 83965                  cmp     di, 0AA0h ;~ 3A50:6846
cs=0x3a50;eip=0x00684a; 	J(JC(loc_4f344));	// 83966                  jb      short loc_4F344 ;~ 3A50:684A
cs=0x3a50;eip=0x00684c; 	T(CMP(di, 0x0F00));	// 83967                  cmp     di, 0F00h ;~ 3A50:684C
cs=0x3a50;eip=0x006850; 	J(JA(loc_4f337));	// 83968                  ja      short loc_4F337 ;~ 3A50:6850
cs=0x3a50;eip=0x006852; 	T(CMP(*(raddr(es,di)), al));	// 83969                  cmp     es:[di], al ;~ 3A50:6852
cs=0x3a50;eip=0x006855; 	X(STOSB);	// 83970                  stosb ;~ 3A50:6855
cs=0x3a50;eip=0x006856; 	T(DEC(di));	// 83971                  dec     di ;~ 3A50:6856
loc_4f337:
	// 7349 
cs=0x3a50;eip=0x006857; 	T(SUB(di, 0x50));	// 83974                  sub     di, 50h ; 'P' ;~ 3A50:6857
cs=0x3a50;eip=0x00685a; 	J(LOOP(loc_4f326));	// 83975                  loop    loc_4F326 ;~ 3A50:685A
loc_4f33c:
	// 7350 
cs=0x3a50;eip=0x00685c; 	T(SUB(di, 0x50));	// 83978                  sub     di, 50h ; 'P' ;~ 3A50:685C
cs=0x3a50;eip=0x00685f; 	T(cx = 4;);	// 83979                  mov     cx, 4 ;~ 3A50:685F
cs=0x3a50;eip=0x006862; 	J(JNZ(loc_4f326));	// 83980                  jnz     short loc_4F326 ;~ 3A50:6862
loc_4f344:
	// 7351 
cs=0x3a50;eip=0x006864; 	T(di = bx;);	// 83983                  mov     di, bx ;~ 3A50:6864
cs=0x3a50;eip=0x006866; 	T(MOV(al, *(raddr(ds,si+0x1FB0))));	// 83984                  mov     al, [si+1FB0h] ;~ 3A50:6866
cs=0x3a50;eip=0x00686a; 	S(OUT(dx, al));	// 83985                  out     dx, al ;~ 3A50:686A
loc_4f34b:
	// 7352 
cs=0x3a50;eip=0x00686b; 	T(CMP(di, 0x0AA0));	// 83988                  cmp     di, 0AA0h ;~ 3A50:686B
cs=0x3a50;eip=0x00686f; 	J(JC(loc_4f2d9));	// 83989                  jb      short loc_4F2D9 ;~ 3A50:686F
cs=0x3a50;eip=0x006871; 	T(CMP(di, 0x0F00));	// 83990                  cmp     di, 0F00h ;~ 3A50:6871
cs=0x3a50;eip=0x006875; 	J(JA(loc_4f35c));	// 83991                  ja      short loc_4F35C ;~ 3A50:6875
cs=0x3a50;eip=0x006877; 	T(CMP(*(raddr(es,di)), al));	// 83992                  cmp     es:[di], al ;~ 3A50:6877
cs=0x3a50;eip=0x00687a; 	X(STOSB);	// 83993                  stosb ;~ 3A50:687A
cs=0x3a50;eip=0x00687b; 	T(DEC(di));	// 83994                  dec     di ;~ 3A50:687B
loc_4f35c:
	// 7353 
cs=0x3a50;eip=0x00687c; 	T(SUB(di, 0x190));	// 83997                  sub     di, 190h ;~ 3A50:687C
cs=0x3a50;eip=0x006880; 	J(JMP(loc_4f34b));	// 83998                  jmp     short loc_4F34B ;~ 3A50:6880
ret_3a50_690d:
	// 7354 
cs=0x3a50;eip=0x00690d; 	T(ds = dx;);	// 84015                  mov     ds, dx ;~ 3A50:690D
cs=0x3a50;eip=0x00690f; 	X(MOV(*(dw*)(raddr(ds,0x464)), ax));	// 84016                  mov     ds:464h, ax ;~ 3A50:690F
cs=0x3a50;eip=0x006912; 	X(POP(ds));	// 84017                  pop     ds ;~ 3A50:6912
cs=0x3a50;eip=0x006913; 	J(RETF(0));	// 84018                  retf ;~ 3A50:6913
ret_3a50_6914:
	// 7355 
cs=0x3a50;eip=0x006914; 	X(PUSH(bp));	// 84020                  push    bp ;~ 3A50:6914
cs=0x3a50;eip=0x006915; 	T(bp = sp;);	// 84021                  mov     bp, sp ;~ 3A50:6915
cs=0x3a50;eip=0x006917; 	X(PUSH(ds));	// 84022                  push    ds ;~ 3A50:6917
cs=0x3a50;eip=0x006918; 	T(ax = 0x4C7A;);	// 84023                  mov     ax, 4C7Ah ;~ 3A50:6918
cs=0x3a50;eip=0x00691b; 	T(ds = ax;);	// 84024                  mov     ds, ax ;~ 3A50:691B
cs=0x3a50;eip=0x00691d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 84026                  mov     ax, [bp+6] ;~ 3A50:691D
cs=0x3a50;eip=0x006920; 	X(*(dw*)(((db*)_unk_4bd28)+0x0EDC) = ax;);	// 84027                  mov     ds:_unk_4BD28+0EDCh, ax ;~ 3A50:6920
cs=0x3a50;eip=0x006923; 	X(POP(ds));	// 84028                  pop     ds ;~ 3A50:6923
cs=0x3a50;eip=0x006924; 	T(sp = bp;);	// 84030                  mov     sp, bp ;~ 3A50:6924
cs=0x3a50;eip=0x006926; 	X(POP(bp));	// 84031                  pop     bp ;~ 3A50:6926
cs=0x3a50;eip=0x006927; 	J(RETF(0));	// 84032                  retf ;~ 3A50:6927
ret_3a50_692c:
	// 7356 
cs=0x3a50;eip=0x00692c; 	T(ds = dx;);	// 84036                  mov     ds, dx ;~ 3A50:692C
cs=0x3a50;eip=0x00692e; 	X(MOV(*(dw*)(raddr(ds,0x466)), ax));	// 84037                  mov     ds:466h, ax ;~ 3A50:692E
cs=0x3a50;eip=0x006931; 	X(POP(ds));	// 84038                  pop     ds ;~ 3A50:6931
cs=0x3a50;eip=0x006932; 	J(RETF(0));	// 84039                  retf ;~ 3A50:6932
ret_3a50_6933:
	// 7357 
cs=0x3a50;eip=0x006933; 	X(PUSH(bp));	// 84041                  push    bp ;~ 3A50:6933
cs=0x3a50;eip=0x006934; 	T(bp = sp;);	// 84042                  mov     bp, sp ;~ 3A50:6934
cs=0x3a50;eip=0x006936; 	X(PUSH(ds));	// 84043                  push    ds ;~ 3A50:6936
cs=0x3a50;eip=0x006937; 	T(ax = 0x4C7A;);	// 84044                  mov     ax, 4C7Ah ;~ 3A50:6937
cs=0x3a50;eip=0x00693a; 	T(ds = ax;);	// 84045                  mov     ds, ax ;~ 3A50:693A
cs=0x3a50;eip=0x00693c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 84047                  mov     ax, [bp+6] ;~ 3A50:693C
cs=0x3a50;eip=0x00693f; 	X(*(dw*)(((db*)_unk_4bd28)+0x0EDE) = ax;);	// 84048                  mov     ds:_unk_4BD28+0EDEh, ax ;~ 3A50:693F
cs=0x3a50;eip=0x006942; 	X(POP(ds));	// 84049                  pop     ds ;~ 3A50:6942
cs=0x3a50;eip=0x006943; 	T(sp = bp;);	// 84051                  mov     sp, bp ;~ 3A50:6943
cs=0x3a50;eip=0x006945; 	X(POP(bp));	// 84052                  pop     bp ;~ 3A50:6945
cs=0x3a50;eip=0x006946; 	J(RETF(0));	// 84053                  retf ;~ 3A50:6946
ret_3a50_6947:
	// 7358 
cs=0x3a50;eip=0x006947; 	T(al = *((amsruntimelibra)+0x0A););	// 84055                  mov     al, byte ptr cs:aMsRunTimeLibra+0Ah ; "e Library - Copyright (c) 1988, Microso"... ;~ 3A50:6947
cs=0x3a50;eip=0x00694b; 	J(RETF(0));	// 84056                  retf ;~ 3A50:694B
ret_3a50_6952:
	// 7359 
cs=0x3a50;eip=0x006952; 	T(bl = 0x28;);	// 84064                  mov     bl, 28h ; '(' ;~ 3A50:6952
cs=0x3a50;eip=0x006954; 	T(MUL1_1(bl));	// 84065                  mul     bl ;~ 3A50:6954
cs=0x3a50;eip=0x006956; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 84066                  mov     bx, [bp+6] ;~ 3A50:6956
cs=0x3a50;eip=0x006959; 	T(SHR(bx, 1));	// 84067                  shr     bx, 1 ;~ 3A50:6959
cs=0x3a50;eip=0x00695b; 	T(SHR(bx, 1));	// 84068                  shr     bx, 1 ;~ 3A50:695B
cs=0x3a50;eip=0x00695d; 	T(SHR(bx, 1));	// 84069                  shr     bx, 1 ;~ 3A50:695D
cs=0x3a50;eip=0x00695f; 	T(ADD(ax, bx));	// 84070                  add     ax, bx ;~ 3A50:695F
cs=0x3a50;eip=0x006961; 	T(sp = bp;);	// 84071                  mov     sp, bp ;~ 3A50:6961
cs=0x3a50;eip=0x006963; 	X(POP(bp));	// 84072                  pop     bp ;~ 3A50:6963
cs=0x3a50;eip=0x006964; 	J(RETF(0));	// 84073                  retf ;~ 3A50:6964
ret_3a50_6965:
	// 7360 
cs=0x3a50;eip=0x006965; 	T(ax = 2;);	// 84075                  mov     ax, 2 ;~ 3A50:6965
cs=0x3a50;eip=0x006968; 	J(RETF(0));	// 84076                  retf ;~ 3A50:6968
ret_3a50_6977:
	// 7361 
cs=0x3a50;eip=0x006977; 	T(ds = ax;);	// 84082                  mov     ds, ax ;~ 3A50:6977
cs=0x3a50;eip=0x006979; 	X(MOV(*(raddr(ds,0x1FCF)), 0));	// 84083                  mov     byte ptr ds:1FCFh, 0 ;~ 3A50:6979
cs=0x3a50;eip=0x00697e; 	T(MOV(bp, *(dw*)(raddr(ss,bp+6))));	// 84084                  mov     bp, [bp+6] ;~ 3A50:697E
cs=0x3a50;eip=0x006981; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0C))));	// 84085                  push    word ptr [bp+0Ch] ;~ 3A50:6981
cs=0x3a50;eip=0x006984; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0E))));	// 84086                  push    word ptr [bp+0Eh] ;~ 3A50:6984
cs=0x3a50;eip=0x006987; 	J(JMP(loc_4f47c));	// 84087                  jmp     short loc_4F47C ;~ 3A50:6987
ret_3a50_698a:
	// 7362 
cs=0x3a50;eip=0x00698a; 	X(PUSH(es));	// 84090                  push    es ;~ 3A50:698A
cs=0x3a50;eip=0x00698b; 	X(PUSH(ds));	// 84091                  push    ds ;~ 3A50:698B
cs=0x3a50;eip=0x00698c; 	T(ax = 0x4C7A;);	// 84092                  mov     ax, 4C7Ah ;~ 3A50:698C
cs=0x3a50;eip=0x00698f; 	T(ds = ax;);	// 84093                  mov     ds, ax ;~ 3A50:698F
cs=0x3a50;eip=0x006991; 	X(*(adetaillevel) = 1;);	// 84095                  mov     byte ptr ds:aDetailLevel, 1 ; "Detail Level " ;~ 3A50:6991
cs=0x3a50;eip=0x006996; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0C))));	// 84096                  push    word ptr [bp+0Ch] ;~ 3A50:6996
cs=0x3a50;eip=0x006999; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0E))));	// 84097                  push    word ptr [bp+0Eh] ;~ 3A50:6999
loc_4f47c:
	// 7363 
cs=0x3a50;eip=0x00699c; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x14))));	// 84100                  mov     cx, [bp+14h] ;~ 3A50:699C
cs=0x3a50;eip=0x00699f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 84101                  mov     ax, [bp+8] ;~ 3A50:699F
cs=0x3a50;eip=0x0069a2; 	T(CMP(ax, cx));	// 84102                  cmp     ax, cx ;~ 3A50:69A2
cs=0x3a50;eip=0x0069a4; 	J(JGE(loc_4f4a1));	// 84103                  jge     short loc_4F4A1 ;~ 3A50:69A4
cs=0x3a50;eip=0x0069a6; 	T(bx = ax;);	// 84104                  mov     bx, ax ;~ 3A50:69A6
cs=0x3a50;eip=0x0069a8; 	T(ADD(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 84105                  add     bx, [bp+0Ch] ;~ 3A50:69A8
cs=0x3a50;eip=0x0069ab; 	T(DEC(bx));	// 84106                  dec     bx ;~ 3A50:69AB
cs=0x3a50;eip=0x0069ac; 	T(CMP(bx, cx));	// 84107                  cmp     bx, cx ;~ 3A50:69AC
cs=0x3a50;eip=0x0069ae; 	J(JGE(loc_4f493));	// 84108                  jge     short loc_4F493 ;~ 3A50:69AE
cs=0x3a50;eip=0x0069b0; 	J(JMP(loc_4f4ff));	// 84109                  jmp     short loc_4F4FF ;~ 3A50:69B0
loc_4f493:
	// 7364 
cs=0x3a50;eip=0x0069b3; 	T(SUB(cx, ax));	// 84115                  sub     cx, ax ;~ 3A50:69B3
cs=0x3a50;eip=0x0069b5; 	X(ADD(*(dw*)(raddr(ss,bp+8)), cx));	// 84116                  add     [bp+8], cx ;~ 3A50:69B5
cs=0x3a50;eip=0x0069b8; 	X(ADD(*(dw*)(raddr(ss,bp+2)), cx));	// 84117                  add     [bp+2], cx ;~ 3A50:69B8
cs=0x3a50;eip=0x0069bb; 	X(SUB(*(dw*)(raddr(ss,bp+0x0C)), cx));	// 84118                  sub     [bp+0Ch], cx ;~ 3A50:69BB
cs=0x3a50;eip=0x0069be; 	J(JMP(loc_4f4a7));	// 84119                  jmp     short loc_4F4A7 ;~ 3A50:69BE
loc_4f4a1:
	// 7365 
cs=0x3a50;eip=0x0069c1; 	T(bx = ax;);	// 84125                  mov     bx, ax ;~ 3A50:69C1
cs=0x3a50;eip=0x0069c3; 	T(ADD(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 84126                  add     bx, [bp+0Ch] ;~ 3A50:69C3
cs=0x3a50;eip=0x0069c6; 	T(DEC(bx));	// 84127                  dec     bx ;~ 3A50:69C6
loc_4f4a7:
	// 7366 
cs=0x3a50;eip=0x0069c7; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x16))));	// 84130                  mov     cx, [bp+16h] ;~ 3A50:69C7
cs=0x3a50;eip=0x0069ca; 	T(CMP(bx, cx));	// 84131                  cmp     bx, cx ;~ 3A50:69CA
cs=0x3a50;eip=0x0069cc; 	J(JLE(loc_4f4ba));	// 84132                  jle     short loc_4F4BA ;~ 3A50:69CC
cs=0x3a50;eip=0x0069ce; 	T(CMP(ax, cx));	// 84133                  cmp     ax, cx ;~ 3A50:69CE
cs=0x3a50;eip=0x0069d0; 	J(JLE(loc_4f4b5));	// 84134                  jle     short loc_4F4B5 ;~ 3A50:69D0
cs=0x3a50;eip=0x0069d2; 	J(JMP(loc_4f4ff));	// 84135                  jmp     short loc_4F4FF ;~ 3A50:69D2
loc_4f4b5:
	// 7367 
cs=0x3a50;eip=0x0069d5; 	T(SUB(bx, cx));	// 84141                  sub     bx, cx ;~ 3A50:69D5
cs=0x3a50;eip=0x0069d7; 	X(SUB(*(dw*)(raddr(ss,bp+0x0C)), bx));	// 84142                  sub     [bp+0Ch], bx ;~ 3A50:69D7
loc_4f4ba:
	// 7368 
cs=0x3a50;eip=0x0069da; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x10))));	// 84145                  mov     cx, [bp+10h] ;~ 3A50:69DA
cs=0x3a50;eip=0x0069dd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 84146                  mov     ax, [bp+0Ah] ;~ 3A50:69DD
cs=0x3a50;eip=0x0069e0; 	T(CMP(ax, cx));	// 84147                  cmp     ax, cx ;~ 3A50:69E0
cs=0x3a50;eip=0x0069e2; 	J(JGE(loc_4f4df));	// 84148                  jge     short loc_4F4DF ;~ 3A50:69E2
cs=0x3a50;eip=0x0069e4; 	T(bx = ax;);	// 84149                  mov     bx, ax ;~ 3A50:69E4
cs=0x3a50;eip=0x0069e6; 	T(ADD(bx, *(dw*)(raddr(ss,bp+0x0E))));	// 84150                  add     bx, [bp+0Eh] ;~ 3A50:69E6
cs=0x3a50;eip=0x0069e9; 	T(DEC(bx));	// 84151                  dec     bx ;~ 3A50:69E9
cs=0x3a50;eip=0x0069ea; 	T(CMP(bx, cx));	// 84152                  cmp     bx, cx ;~ 3A50:69EA
cs=0x3a50;eip=0x0069ec; 	J(JGE(loc_4f4d1));	// 84153                  jge     short loc_4F4D1 ;~ 3A50:69EC
cs=0x3a50;eip=0x0069ee; 	J(JMP(loc_4f4ff));	// 84154                  jmp     short loc_4F4FF ;~ 3A50:69EE
loc_4f4d1:
	// 7369 
cs=0x3a50;eip=0x0069f1; 	T(SUB(cx, ax));	// 84160                  sub     cx, ax ;~ 3A50:69F1
cs=0x3a50;eip=0x0069f3; 	X(ADD(*(dw*)(raddr(ss,bp+0x0A)), cx));	// 84161                  add     [bp+0Ah], cx ;~ 3A50:69F3
cs=0x3a50;eip=0x0069f6; 	X(ADD(*(dw*)(raddr(ss,bp+4)), cx));	// 84162                  add     [bp+4], cx ;~ 3A50:69F6
cs=0x3a50;eip=0x0069f9; 	X(SUB(*(dw*)(raddr(ss,bp+0x0E)), cx));	// 84163                  sub     [bp+0Eh], cx ;~ 3A50:69F9
cs=0x3a50;eip=0x0069fc; 	J(JMP(loc_4f4e5));	// 84164                  jmp     short loc_4F4E5 ;~ 3A50:69FC
loc_4f4df:
	// 7370 
cs=0x3a50;eip=0x0069ff; 	T(bx = ax;);	// 84170                  mov     bx, ax ;~ 3A50:69FF
cs=0x3a50;eip=0x006a01; 	T(ADD(bx, *(dw*)(raddr(ss,bp+0x0E))));	// 84171                  add     bx, [bp+0Eh] ;~ 3A50:6A01
cs=0x3a50;eip=0x006a04; 	T(DEC(bx));	// 84172                  dec     bx ;~ 3A50:6A04
loc_4f4e5:
	// 7371 
cs=0x3a50;eip=0x006a05; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x12))));	// 84175                  mov     cx, [bp+12h] ;~ 3A50:6A05
cs=0x3a50;eip=0x006a08; 	T(CMP(bx, cx));	// 84176                  cmp     bx, cx ;~ 3A50:6A08
cs=0x3a50;eip=0x006a0a; 	J(JLE(loc_4f4f8));	// 84177                  jle     short loc_4F4F8 ;~ 3A50:6A0A
cs=0x3a50;eip=0x006a0c; 	T(CMP(ax, cx));	// 84178                  cmp     ax, cx ;~ 3A50:6A0C
cs=0x3a50;eip=0x006a0e; 	J(JLE(loc_4f4f3));	// 84179                  jle     short loc_4F4F3 ;~ 3A50:6A0E
cs=0x3a50;eip=0x006a10; 	J(JMP(loc_4f4ff));	// 84180                  jmp     short loc_4F4FF ;~ 3A50:6A10
loc_4f4f3:
	// 7372 
cs=0x3a50;eip=0x006a13; 	T(SUB(bx, cx));	// 84186                  sub     bx, cx ;~ 3A50:6A13
cs=0x3a50;eip=0x006a15; 	X(SUB(*(dw*)(raddr(ss,bp+0x0E)), bx));	// 84187                  sub     [bp+0Eh], bx ;~ 3A50:6A15
loc_4f4f8:
	// 7373 
cs=0x3a50;eip=0x006a18; 	X(PUSH(bp));	// 84190                  push    bp ;~ 3A50:6A18
cs=0x3a50;eip=0x006a19; 	J(CALLF(seg48ae_1300_proc,m2c::kloc_4f530));	// 84191                  call    far ptr loc_4F530 ;~ 3A50:6A19
cs=0x3a50;eip=0x006a1e; 	X(POP(bp));	// 84192                  pop     bp ;~ 3A50:6A1E
loc_4f4ff:
	// 7374 
cs=0x3a50;eip=0x006a1f; 	X(POP(*(dw*)(raddr(ss,bp+0x0E))));	// 84196                  pop     word ptr [bp+0Eh] ;~ 3A50:6A1F
cs=0x3a50;eip=0x006a22; 	X(POP(*(dw*)(raddr(ss,bp+0x0C))));	// 84197                  pop     word ptr [bp+0Ch] ;~ 3A50:6A22
cs=0x3a50;eip=0x006a25; 	T(CMP(*(adetaillevel), 0));	// 84198                  cmp     byte ptr ds:aDetailLevel, 0 ; "Detail Level " ;~ 3A50:6A25
cs=0x3a50;eip=0x006a2a; 	J(JNZ(loc_4f515));	// 84199                  jnz     short loc_4F515 ;~ 3A50:6A2A
cs=0x3a50;eip=0x006a2c; 	X(POP(bp));	// 84200                  pop     bp ;~ 3A50:6A2C
cs=0x3a50;eip=0x006a2d; 	X(POP(ds));	// 84201                  pop     ds ;~ 3A50:6A2D
cs=0x3a50;eip=0x006a2e; 	X(POP(es));	// 84203                  pop     es ;~ 3A50:6A2E
cs=0x3a50;eip=0x006a2f; 	X(POP(si));	// 84204                  pop     si ;~ 3A50:6A2F
cs=0x3a50;eip=0x006a30; 	X(POP(di));	// 84205                  pop     di ;~ 3A50:6A30
cs=0x3a50;eip=0x006a31; 	T(sp = bp;);	// 84206                  mov     sp, bp ;~ 3A50:6A31
cs=0x3a50;eip=0x006a33; 	X(POP(bp));	// 84207                  pop     bp ;~ 3A50:6A33
cs=0x3a50;eip=0x006a34; 	J(RETF(0));	// 84208                  retf ;~ 3A50:6A34
loc_4f515:
	// 7375 
cs=0x3a50;eip=0x006a35; 	X(POP(ds));	// 84212                  pop     ds ;~ 3A50:6A35
cs=0x3a50;eip=0x006a36; 	X(POP(es));	// 84213                  pop     es ;~ 3A50:6A36
cs=0x3a50;eip=0x006a37; 	J(RETF(0));	// 84214                  retf ;~ 3A50:6A37
ret_3a50_6a38:
	// 7376 
cs=0x3a50;eip=0x006a38; 	X(PUSH(bp));	// 84216                  push    bp ;~ 3A50:6A38
cs=0x3a50;eip=0x006a39; 	T(bp = sp;);	// 84217                  mov     bp, sp ;~ 3A50:6A39
cs=0x3a50;eip=0x006a3b; 	X(PUSH(di));	// 84218                  push    di ;~ 3A50:6A3B
cs=0x3a50;eip=0x006a3c; 	X(PUSH(si));	// 84219                  push    si ;~ 3A50:6A3C
cs=0x3a50;eip=0x006a3d; 	X(PUSH(es));	// 84220                  push    es ;~ 3A50:6A3D
cs=0x3a50;eip=0x006a3e; 	X(PUSH(ds));	// 84221                  push    ds ;~ 3A50:6A3E
cs=0x3a50;eip=0x006a3f; 	X(PUSH(bp));	// 84222                  push    bp ;~ 3A50:6A3F
cs=0x3a50;eip=0x006a40; 	T(ax = 0x4C7A;);	// 84223                  mov     ax, 4C7Ah ;~ 3A50:6A40
cs=0x3a50;eip=0x006a43; 	T(ds = ax;);	// 84224                  mov     ds, ax ;~ 3A50:6A43
cs=0x3a50;eip=0x006a45; 	X(*((arangeradar)+0x0B) = 0;);	// 84226                  mov     byte ptr ds:aRangeRadar+0Bh, 0 ; "r" ;~ 3A50:6A45
cs=0x3a50;eip=0x006a4a; 	T(MOV(bp, *(dw*)(raddr(ss,bp+6))));	// 84227                  mov     bp, [bp+6] ;~ 3A50:6A4A
cs=0x3a50;eip=0x006a4d; 	J(JMP(loc_4f53c));	// 84228                  jmp     short loc_4F53C ;~ 3A50:6A4D
loc_4f530:
	// 7377 
cs=0x3a50;eip=0x006a50; 	X(PUSH(es));	// 84233                  push    es ;~ 3A50:6A50
cs=0x3a50;eip=0x006a51; 	X(PUSH(ds));	// 84234                  push    ds ;~ 3A50:6A51
cs=0x3a50;eip=0x006a52; 	T(ax = 0x4C7A;);	// 84235                  mov     ax, 4C7Ah ;~ 3A50:6A52
cs=0x3a50;eip=0x006a55; 	T(ds = ax;);	// 84236                  mov     ds, ax ;~ 3A50:6A55
cs=0x3a50;eip=0x006a57; 	X(*((arangeradar)+0x0B) = 1;);	// 84237                  mov     byte ptr ds:aRangeRadar+0Bh, 1 ; "r" ;~ 3A50:6A57
loc_4f53c:
	// 7378 
cs=0x3a50;eip=0x006a5c; 	T(MOV(di, *(dw*)(raddr(ss,bp+6))));	// 84240                  mov     di, [bp+6] ;~ 3A50:6A5C
cs=0x3a50;eip=0x006a5f; 	T(SHL(di, 1));	// 84241                  shl     di, 1 ;~ 3A50:6A5F
cs=0x3a50;eip=0x006a61; 	T(MOV(es, *(dw*)(raddr(cs,di+0x0A72))));	// 84242                  mov     es, word ptr cs:[di+0A72h] ;~ 3A50:6A61
cs=0x3a50;eip=0x006a66; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0A))));	// 84243                  mov     bx, [bp+0Ah] ;~ 3A50:6A66
cs=0x3a50;eip=0x006a69; 	T(SHL(bx, 1));	// 84244                  shl     bx, 1 ;~ 3A50:6A69
cs=0x3a50;eip=0x006a6b; 	T(MOV(di, *(dw*)(raddr(ds,bx+0x2CC))));	// 84245                  mov     di, [bx+2CCh] ;~ 3A50:6A6B
cs=0x3a50;eip=0x006a6f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 84246                  mov     ax, [bp+8] ;~ 3A50:6A6F
cs=0x3a50;eip=0x006a72; 	T(SHR(ax, 1));	// 84247                  shr     ax, 1 ;~ 3A50:6A72
cs=0x3a50;eip=0x006a74; 	T(SHR(ax, 1));	// 84248                  shr     ax, 1 ;~ 3A50:6A74
cs=0x3a50;eip=0x006a76; 	T(SHR(ax, 1));	// 84249                  shr     ax, 1 ;~ 3A50:6A76
cs=0x3a50;eip=0x006a78; 	T(ADD(di, ax));	// 84250                  add     di, ax ;~ 3A50:6A78
cs=0x3a50;eip=0x006a7a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+4))));	// 84251                  mov     bx, [bp+4] ;~ 3A50:6A7A
cs=0x3a50;eip=0x006a7d; 	T(SHL(bx, 1));	// 84252                  shl     bx, 1 ;~ 3A50:6A7D
cs=0x3a50;eip=0x006a7f; 	T(MOV(si, *(dw*)(raddr(ds,bx+0x2CC))));	// 84253                  mov     si, [bx+2CCh] ;~ 3A50:6A7F
cs=0x3a50;eip=0x006a83; 	T(MOV(ax, *(dw*)(raddr(ss,bp+2))));	// 84254                  mov     ax, [bp+2] ;~ 3A50:6A83
cs=0x3a50;eip=0x006a86; 	T(SHR(ax, 1));	// 84255                  shr     ax, 1 ;~ 3A50:6A86
cs=0x3a50;eip=0x006a88; 	T(SHR(ax, 1));	// 84256                  shr     ax, 1 ;~ 3A50:6A88
cs=0x3a50;eip=0x006a8a; 	T(SHR(ax, 1));	// 84257                  shr     ax, 1 ;~ 3A50:6A8A
cs=0x3a50;eip=0x006a8c; 	T(ADD(si, ax));	// 84258                  add     si, ax ;~ 3A50:6A8C
cs=0x3a50;eip=0x006a8e; 	T(DEC(si));	// 84259                  dec     si ;~ 3A50:6A8E
cs=0x3a50;eip=0x006a8f; 	T(MOV(cx, *(dw*)(raddr(ss,bp+8))));	// 84260                  mov     cx, [bp+8] ;~ 3A50:6A8F
cs=0x3a50;eip=0x006a92; 	T(AND(cl, 7));	// 84261                  and     cl, 7 ;~ 3A50:6A92
cs=0x3a50;eip=0x006a95; 	T(bl = 0x0FF;);	// 84262                  mov     bl, 0FFh ;~ 3A50:6A95
cs=0x3a50;eip=0x006a97; 	T(SHR(bl, cl));	// 84263                  shr     bl, cl ;~ 3A50:6A97
cs=0x3a50;eip=0x006a99; 	T(MOV(cx, *(dw*)(raddr(ss,bp+8))));	// 84264                  mov     cx, [bp+8] ;~ 3A50:6A99
cs=0x3a50;eip=0x006a9c; 	T(ADD(cx, *(dw*)(raddr(ss,bp+0x0C))));	// 84265                  add     cx, [bp+0Ch] ;~ 3A50:6A9C
cs=0x3a50;eip=0x006a9f; 	T(DEC(cx));	// 84266                  dec     cx ;~ 3A50:6A9F
cs=0x3a50;eip=0x006aa0; 	T(AND(cl, 7));	// 84267                  and     cl, 7 ;~ 3A50:6AA0
cs=0x3a50;eip=0x006aa3; 	T(ax = 0x0FF80;);	// 84268                  mov     ax, 0FF80h ;~ 3A50:6AA3
cs=0x3a50;eip=0x006aa6; 	T(SHR(ax, cl));	// 84269                  shr     ax, cl ;~ 3A50:6AA6
cs=0x3a50;eip=0x006aa8; 	T(bh = al;);	// 84270                  mov     bh, al ;~ 3A50:6AA8
cs=0x3a50;eip=0x006aaa; 	X(*(dw*)(((db*)word_4960a)+0x2F) = bx;);	// 84271                  mov     cs:word_4960A+2Fh, bx ;~ 3A50:6AAA
cs=0x3a50;eip=0x006aaf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 84272                  mov     ax, [bp+8] ;~ 3A50:6AAF
cs=0x3a50;eip=0x006ab2; 	T(AND(ax, 7));	// 84273                  and     ax, 7 ;~ 3A50:6AB2
cs=0x3a50;eip=0x006ab5; 	T(ADD(ax, *(dw*)(raddr(ss,bp+0x0C))));	// 84274                  add     ax, [bp+0Ch] ;~ 3A50:6AB5
cs=0x3a50;eip=0x006ab8; 	T(DEC(ax));	// 84275                  dec     ax ;~ 3A50:6AB8
cs=0x3a50;eip=0x006ab9; 	T(SHR(ax, 1));	// 84276                  shr     ax, 1 ;~ 3A50:6AB9
cs=0x3a50;eip=0x006abb; 	T(SHR(ax, 1));	// 84277                  shr     ax, 1 ;~ 3A50:6ABB
cs=0x3a50;eip=0x006abd; 	T(SHR(ax, 1));	// 84278                  shr     ax, 1 ;~ 3A50:6ABD
cs=0x3a50;eip=0x006abf; 	T(ch = al;);	// 84279                  mov     ch, al ;~ 3A50:6ABF
cs=0x3a50;eip=0x006ac1; 	T(CMP(*(raddr(ss,bp+0x18)), 1));	// 84280                  cmp     byte ptr [bp+18h], 1 ;~ 3A50:6AC1
cs=0x3a50;eip=0x006ac5; 	J(JZ(loc_4f5aa));	// 84281                  jz      short loc_4F5AA ;~ 3A50:6AC5
cs=0x3a50;eip=0x006ac7; 	J(JMP(loc_4f6da));	// 84282                  jmp     loc_4F6DA ;~ 3A50:6AC7
loc_4f5aa:
	// 7379 
cs=0x3a50;eip=0x006aca; 	T(dx = 0x3C4;);	// 84286                  mov     dx, 3C4h ;~ 3A50:6ACA
cs=0x3a50;eip=0x006acd; 	T(ax = 0x0F02;);	// 84287                  mov     ax, 0F02h ;~ 3A50:6ACD
cs=0x3a50;eip=0x006ad0; 	X(*((amsruntimelibra)+2) = ah;);	// 84288                  mov     byte ptr cs:aMsRunTimeLibra+2, ah ; " Run-Time Library - Copyright (c) 1988,"... ;~ 3A50:6AD0
cs=0x3a50;eip=0x006ad5; 	S(OUT(dx, ax));	// 84289                  out     dx, ax          ; EGA: sequencer address reg ;~ 3A50:6AD5
cs=0x3a50;eip=0x006ad6; 	T(dx = 0x3CE;);	// 84291                  mov     dx, 3CEh ;~ 3A50:6AD6
cs=0x3a50;eip=0x006ad9; 	T(ax = 0x0FF01;);	// 84292                  mov     ax, 0FF01h ;~ 3A50:6AD9
cs=0x3a50;eip=0x006adc; 	X(*((amsruntimelibra)+4) = ah;);	// 84293                  mov     byte ptr cs:aMsRunTimeLibra+4, ah ; "un-Time Library - Copyright (c) 1988, M"... ;~ 3A50:6ADC
cs=0x3a50;eip=0x006ae1; 	S(OUT(dx, ax));	// 84294                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:6AE1
cs=0x3a50;eip=0x006ae2; 	T(MOV(ah, *(raddr(ss,bp+0x19))));	// 84296                  mov     ah, [bp+19h] ;~ 3A50:6AE2
cs=0x3a50;eip=0x006ae5; 	T(SUB(al, al));	// 84297                  sub     al, al ;~ 3A50:6AE5
cs=0x3a50;eip=0x006ae7; 	X(*((amsruntimelibra)+3) = ah;);	// 84298                  mov     byte ptr cs:aMsRunTimeLibra+3, ah ; "Run-Time Library - Copyright (c) 1988, "... ;~ 3A50:6AE7
cs=0x3a50;eip=0x006aec; 	S(OUT(dx, ax));	// 84299                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:6AEC
cs=0x3a50;eip=0x006aed; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 84302                  mov     ax, [bp+8] ;~ 3A50:6AED
cs=0x3a50;eip=0x006af0; 	T(AND(al, 7));	// 84303                  and     al, 7 ;~ 3A50:6AF0
cs=0x3a50;eip=0x006af2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+2))));	// 84304                  mov     bx, [bp+2] ;~ 3A50:6AF2
cs=0x3a50;eip=0x006af5; 	T(AND(bl, 7));	// 84305                  and     bl, 7 ;~ 3A50:6AF5
cs=0x3a50;eip=0x006af8; 	T(SUB(al, bl));	// 84306                  sub     al, bl ;~ 3A50:6AF8
cs=0x3a50;eip=0x006afa; 	J(JS(loc_4f5df));	// 84307                  js      short loc_4F5DF ;~ 3A50:6AFA
cs=0x3a50;eip=0x006afc; 	J(JMP(loc_4f67b));	// 84308                  jmp     loc_4F67B ;~ 3A50:6AFC
loc_4f5df:
	// 7380 
cs=0x3a50;eip=0x006aff; 	T(NEG(al));	// 84312                  neg     al ;~ 3A50:6AFF
cs=0x3a50;eip=0x006b01; 	T(INC(si));	// 84313                  inc     si ;~ 3A50:6B01
cs=0x3a50;eip=0x006b02; 	T(cl = al;);	// 84314                  mov     cl, al ;~ 3A50:6B02
cs=0x3a50;eip=0x006b04; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 84315                  mov     ax, [bp+0] ;~ 3A50:6B04
cs=0x3a50;eip=0x006b07; 	T(ds = ax;);	// 84316                  mov     ds, ax ;~ 3A50:6B07
cs=0x3a50;eip=0x006b09; 	T(MOV(bp, *(dw*)(raddr(ss,bp+0x0E))));	// 84318                  mov     bp, [bp+0Eh] ;~ 3A50:6B09
cs=0x3a50;eip=0x006b0c; 	T(al = 8;);	// 84319                  mov     al, 8 ;~ 3A50:6B0C
cs=0x3a50;eip=0x006b0e; 	T(CLI);	// 84320                  cli ;~ 3A50:6B0E
cs=0x3a50;eip=0x006b0f; 	S(OUT(dx, al));	// 84321                  out     dx, al          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:6B0F
cs=0x3a50;eip=0x006b10; 	T(INC(dx));	// 84324                  inc     dx ;~ 3A50:6B10
loc_4f5f1:
	// 7381 
cs=0x3a50;eip=0x006b11; 	X(PUSH(si));	// 84327                  push    si ;~ 3A50:6B11
cs=0x3a50;eip=0x006b12; 	X(PUSH(di));	// 84328                  push    di ;~ 3A50:6B12
cs=0x3a50;eip=0x006b13; 	X(PUSH(cx));	// 84329                  push    cx ;~ 3A50:6B13
cs=0x3a50;eip=0x006b14; 	T(bh = *(db*)(((db*)word_4960a)+0x2F););	// 84330                  mov     bh, byte ptr cs:word_4960A+2Fh ;~ 3A50:6B14
cs=0x3a50;eip=0x006b19; 	T(OR(ch, ch));	// 84331                  or      ch, ch ;~ 3A50:6B19
cs=0x3a50;eip=0x006b1b; 	J(JZ(loc_4f621));	// 84332                  jz      short loc_4F621 ;~ 3A50:6B1B
cs=0x3a50;eip=0x006b1d; 	T(LODSW);	// 84333                  lodsw ;~ 3A50:6B1D
cs=0x3a50;eip=0x006b1e; 	T(XCHG(al, ah));	// 84334                  xchg    al, ah ;~ 3A50:6B1E
cs=0x3a50;eip=0x006b20; 	T(SHL(ax, cl));	// 84335                  shl     ax, cl ;~ 3A50:6B20
cs=0x3a50;eip=0x006b22; 	T(AND(ah, bh));	// 84336                  and     ah, bh ;~ 3A50:6B22
cs=0x3a50;eip=0x006b24; 	T(CMP(ah, *(raddr(es,di))));	// 84337                  cmp     ah, es:[di] ;~ 3A50:6B24
cs=0x3a50;eip=0x006b27; 	T(al = ah;);	// 84338                  mov     al, ah ;~ 3A50:6B27
cs=0x3a50;eip=0x006b29; 	S(OUT(dx, al));	// 84339                  out     dx, al          ; EGA port: graphics controller data register ;~ 3A50:6B29
cs=0x3a50;eip=0x006b2a; 	X(STOSB);	// 84340                  stosb ;~ 3A50:6B2A
cs=0x3a50;eip=0x006b2b; 	J(JMP(loc_4f61a));	// 84341                  jmp     short loc_4F61A ;~ 3A50:6B2B
loc_4f60e:
	// 7382 
cs=0x3a50;eip=0x006b2e; 	T(LODSW);	// 84346                  lodsw ;~ 3A50:6B2E
cs=0x3a50;eip=0x006b2f; 	T(XCHG(ah, al));	// 84347                  xchg    ah, al ;~ 3A50:6B2F
cs=0x3a50;eip=0x006b31; 	T(SHL(ax, cl));	// 84348                  shl     ax, cl ;~ 3A50:6B31
cs=0x3a50;eip=0x006b33; 	T(al = ah;);	// 84349                  mov     al, ah ;~ 3A50:6B33
cs=0x3a50;eip=0x006b35; 	S(OUT(dx, al));	// 84350                  out     dx, al          ; EGA port: graphics controller data register ;~ 3A50:6B35
cs=0x3a50;eip=0x006b36; 	T(CMP(al, *(raddr(es,di))));	// 84351                  cmp     al, es:[di] ;~ 3A50:6B36
cs=0x3a50;eip=0x006b39; 	X(STOSB);	// 84352                  stosb ;~ 3A50:6B39
loc_4f61a:
	// 7383 
cs=0x3a50;eip=0x006b3a; 	T(DEC(si));	// 84355                  dec     si ;~ 3A50:6B3A
cs=0x3a50;eip=0x006b3b; 	T(DEC(ch));	// 84356                  dec     ch ;~ 3A50:6B3B
cs=0x3a50;eip=0x006b3d; 	J(JNZ(loc_4f60e));	// 84357                  jnz     short loc_4F60E ;~ 3A50:6B3D
cs=0x3a50;eip=0x006b3f; 	T(bh = 0x0FF;);	// 84358                  mov     bh, 0FFh ;~ 3A50:6B3F
loc_4f621:
	// 7384 
cs=0x3a50;eip=0x006b41; 	T(AND(bh, *(db*)(((db*)word_4960a)+0x30)));	// 84361                  and     bh, byte ptr cs:word_4960A+30h ;~ 3A50:6B41
cs=0x3a50;eip=0x006b46; 	T(LODSW);	// 84362                  lodsw ;~ 3A50:6B46
cs=0x3a50;eip=0x006b47; 	T(DEC(si));	// 84363                  dec     si ;~ 3A50:6B47
cs=0x3a50;eip=0x006b48; 	T(XCHG(ah, al));	// 84364                  xchg    ah, al ;~ 3A50:6B48
cs=0x3a50;eip=0x006b4a; 	T(SHL(ax, cl));	// 84365                  shl     ax, cl ;~ 3A50:6B4A
cs=0x3a50;eip=0x006b4c; 	T(AND(ah, bh));	// 84366                  and     ah, bh ;~ 3A50:6B4C
cs=0x3a50;eip=0x006b4e; 	T(CMP(ah, *(raddr(es,di))));	// 84367                  cmp     ah, es:[di] ;~ 3A50:6B4E
loc_4f631:
	// 7385 
cs=0x3a50;eip=0x006b51; 	T(XCHG(al, ah));	// 84371                  xchg    al, ah ;~ 3A50:6B51
cs=0x3a50;eip=0x006b53; 	S(OUT(dx, al));	// 84372                  out     dx, al ;~ 3A50:6B53
cs=0x3a50;eip=0x006b54; 	X(STOSB);	// 84373                  stosb ;~ 3A50:6B54
cs=0x3a50;eip=0x006b55; 	X(POP(cx));	// 84374                  pop     cx ;~ 3A50:6B55
cs=0x3a50;eip=0x006b56; 	X(POP(di));	// 84375                  pop     di ;~ 3A50:6B56
cs=0x3a50;eip=0x006b57; 	X(POP(si));	// 84376                  pop     si ;~ 3A50:6B57
cs=0x3a50;eip=0x006b58; 	T(ADD(di, 0x28));	// 84377                  add     di, 28h ; '(' ;~ 3A50:6B58
cs=0x3a50;eip=0x006b5b; 	T(ADD(si, 0x28));	// 84378                  add     si, 28h ; '(' ;~ 3A50:6B5B
cs=0x3a50;eip=0x006b5e; 	T(DEC(bp));	// 84379                  dec     bp ;~ 3A50:6B5E
cs=0x3a50;eip=0x006b5f; 	J(JNZ(loc_4f5f1));	// 84380                  jnz     short loc_4F5F1 ;~ 3A50:6B5F
loc_4f641:
	// 7386 
cs=0x3a50;eip=0x006b61; 	T(STI);	// 84384                  sti ;~ 3A50:6B61
cs=0x3a50;eip=0x006b62; 	T(ax = 0x4C7A;);	// 84385                  mov     ax, 4C7Ah ;~ 3A50:6B62
cs=0x3a50;eip=0x006b65; 	T(ds = ax;);	// 84386                  mov     ds, ax ;~ 3A50:6B65
cs=0x3a50;eip=0x006b67; 	T(dx = 0x3CE;);	// 84388                  mov     dx, 3CEh ;~ 3A50:6B67
cs=0x3a50;eip=0x006b6a; 	T(ax = 1;);	// 84389                  mov     ax, 1 ;~ 3A50:6B6A
cs=0x3a50;eip=0x006b6d; 	X(*((amsruntimelibra)+4) = ah;);	// 84390                  mov     byte ptr cs:aMsRunTimeLibra+4, ah ; "un-Time Library - Copyright (c) 1988, M"... ;~ 3A50:6B6D
cs=0x3a50;eip=0x006b72; 	S(OUT(dx, ax));	// 84391                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:6B72
cs=0x3a50;eip=0x006b73; 	T(ax = 0x0FF08;);	// 84393                  mov     ax, 0FF08h ;~ 3A50:6B73
cs=0x3a50;eip=0x006b76; 	X(*((amsruntimelibra)+9) = ah;);	// 84394                  mov     byte ptr cs:aMsRunTimeLibra+9, ah ; "me Library - Copyright (c) 1988, Micros"... ;~ 3A50:6B76
cs=0x3a50;eip=0x006b7b; 	S(OUT(dx, ax));	// 84395                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:6B7B
cs=0x3a50;eip=0x006b7c; 	T(dx = 0x3C4;);	// 84397                  mov     dx, 3C4h ;~ 3A50:6B7C
cs=0x3a50;eip=0x006b7f; 	T(ax = 0x0F02;);	// 84398                  mov     ax, 0F02h ;~ 3A50:6B7F
cs=0x3a50;eip=0x006b82; 	X(*((amsruntimelibra)+2) = ah;);	// 84399                  mov     byte ptr cs:aMsRunTimeLibra+2, ah ; " Run-Time Library - Copyright (c) 1988,"... ;~ 3A50:6B82
cs=0x3a50;eip=0x006b87; 	S(OUT(dx, ax));	// 84400                  out     dx, ax          ; EGA: sequencer address reg ;~ 3A50:6B87
cs=0x3a50;eip=0x006b88; 	T(CMP(*((arangeradar)+0x0B), 0));	// 84402                  cmp     byte ptr ds:aRangeRadar+0Bh, 0 ; "r" ;~ 3A50:6B88
cs=0x3a50;eip=0x006b8d; 	J(JNZ(loc_4f678));	// 84403                  jnz     short loc_4F678 ;~ 3A50:6B8D
cs=0x3a50;eip=0x006b8f; 	X(POP(bp));	// 84404                  pop     bp ;~ 3A50:6B8F
cs=0x3a50;eip=0x006b90; 	X(POP(ds));	// 84405                  pop     ds ;~ 3A50:6B90
cs=0x3a50;eip=0x006b91; 	X(POP(es));	// 84407                  pop     es ;~ 3A50:6B91
cs=0x3a50;eip=0x006b92; 	X(POP(si));	// 84408                  pop     si ;~ 3A50:6B92
cs=0x3a50;eip=0x006b93; 	X(POP(di));	// 84409                  pop     di ;~ 3A50:6B93
cs=0x3a50;eip=0x006b94; 	T(sp = bp;);	// 84410                  mov     sp, bp ;~ 3A50:6B94
cs=0x3a50;eip=0x006b96; 	X(POP(bp));	// 84411                  pop     bp ;~ 3A50:6B96
cs=0x3a50;eip=0x006b97; 	J(RETF(0));	// 84412                  retf ;~ 3A50:6B97
loc_4f678:
	// 7387 
cs=0x3a50;eip=0x006b98; 	X(POP(ds));	// 84416                  pop     ds ;~ 3A50:6B98
cs=0x3a50;eip=0x006b99; 	X(POP(es));	// 84417                  pop     es ;~ 3A50:6B99
cs=0x3a50;eip=0x006b9a; 	J(RETF(0));	// 84418                  retf ;~ 3A50:6B9A
loc_4f67b:
	// 7388 
cs=0x3a50;eip=0x006b9b; 	T(cl = al;);	// 84422                  mov     cl, al ;~ 3A50:6B9B
cs=0x3a50;eip=0x006b9d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 84423                  mov     ax, [bp+0] ;~ 3A50:6B9D
cs=0x3a50;eip=0x006ba0; 	T(ds = ax;);	// 84424                  mov     ds, ax ;~ 3A50:6BA0
cs=0x3a50;eip=0x006ba2; 	T(MOV(bp, *(dw*)(raddr(ss,bp+0x0E))));	// 84425                  mov     bp, [bp+0Eh] ;~ 3A50:6BA2
cs=0x3a50;eip=0x006ba5; 	T(al = 8;);	// 84426                  mov     al, 8 ;~ 3A50:6BA5
cs=0x3a50;eip=0x006ba7; 	T(CLI);	// 84427                  cli ;~ 3A50:6BA7
cs=0x3a50;eip=0x006ba8; 	S(OUT(dx, al));	// 84428                  out     dx, al ;~ 3A50:6BA8
cs=0x3a50;eip=0x006ba9; 	T(INC(dx));	// 84429                  inc     dx ;~ 3A50:6BA9
loc_4f68a:
	// 7389 
cs=0x3a50;eip=0x006baa; 	X(PUSH(si));	// 84432                  push    si ;~ 3A50:6BAA
cs=0x3a50;eip=0x006bab; 	X(PUSH(di));	// 84433                  push    di ;~ 3A50:6BAB
cs=0x3a50;eip=0x006bac; 	X(PUSH(cx));	// 84434                  push    cx ;~ 3A50:6BAC
cs=0x3a50;eip=0x006bad; 	T(bl = *(db*)(((db*)word_4960a)+0x2F););	// 84435                  mov     bl, byte ptr cs:word_4960A+2Fh ;~ 3A50:6BAD
cs=0x3a50;eip=0x006bb2; 	T(OR(ch, ch));	// 84436                  or      ch, ch ;~ 3A50:6BB2
cs=0x3a50;eip=0x006bb4; 	J(JZ(loc_4f6b9));	// 84437                  jz      short loc_4F6B9 ;~ 3A50:6BB4
cs=0x3a50;eip=0x006bb6; 	T(MOV(ah, *(raddr(ds,si))));	// 84438                  mov     ah, [si] ;~ 3A50:6BB6
cs=0x3a50;eip=0x006bb8; 	T(MOV(al, *(raddr(ds,si+1))));	// 84439                  mov     al, [si+1] ;~ 3A50:6BB8
cs=0x3a50;eip=0x006bbb; 	T(INC(si));	// 84440                  inc     si ;~ 3A50:6BBB
cs=0x3a50;eip=0x006bbc; 	T(SHR(ax, cl));	// 84441                  shr     ax, cl ;~ 3A50:6BBC
cs=0x3a50;eip=0x006bbe; 	T(AND(al, bl));	// 84442                  and     al, bl ;~ 3A50:6BBE
cs=0x3a50;eip=0x006bc0; 	T(CMP(al, *(raddr(es,di))));	// 84443                  cmp     al, es:[di] ;~ 3A50:6BC0
cs=0x3a50;eip=0x006bc3; 	S(OUT(dx, al));	// 84444                  out     dx, al ;~ 3A50:6BC3
cs=0x3a50;eip=0x006bc4; 	X(STOSB);	// 84445                  stosb ;~ 3A50:6BC4
cs=0x3a50;eip=0x006bc5; 	J(JMP(loc_4f6b3));	// 84446                  jmp     short loc_4F6B3 ;~ 3A50:6BC5
loc_4f6a8:
	// 7390 
cs=0x3a50;eip=0x006bc8; 	T(LODSW);	// 84452                  lodsw ;~ 3A50:6BC8
cs=0x3a50;eip=0x006bc9; 	T(XCHG(ah, al));	// 84453                  xchg    ah, al ;~ 3A50:6BC9
cs=0x3a50;eip=0x006bcb; 	T(SHR(ax, cl));	// 84454                  shr     ax, cl ;~ 3A50:6BCB
cs=0x3a50;eip=0x006bcd; 	S(OUT(dx, al));	// 84455                  out     dx, al ;~ 3A50:6BCD
cs=0x3a50;eip=0x006bce; 	T(CMP(al, *(raddr(es,di))));	// 84456                  cmp     al, es:[di] ;~ 3A50:6BCE
cs=0x3a50;eip=0x006bd1; 	X(STOSB);	// 84457                  stosb ;~ 3A50:6BD1
cs=0x3a50;eip=0x006bd2; 	T(DEC(si));	// 84458                  dec     si ;~ 3A50:6BD2
loc_4f6b3:
	// 7391 
cs=0x3a50;eip=0x006bd3; 	T(DEC(ch));	// 84461                  dec     ch ;~ 3A50:6BD3
cs=0x3a50;eip=0x006bd5; 	J(JNZ(loc_4f6a8));	// 84462                  jnz     short loc_4F6A8 ;~ 3A50:6BD5
cs=0x3a50;eip=0x006bd7; 	T(bl = 0x0FF;);	// 84463                  mov     bl, 0FFh ;~ 3A50:6BD7
loc_4f6b9:
	// 7392 
cs=0x3a50;eip=0x006bd9; 	T(AND(bl, *(db*)(((db*)word_4960a)+0x30)));	// 84466                  and     bl, byte ptr cs:word_4960A+30h ;~ 3A50:6BD9
cs=0x3a50;eip=0x006bde; 	T(LODSW);	// 84467                  lodsw ;~ 3A50:6BDE
cs=0x3a50;eip=0x006bdf; 	T(DEC(si));	// 84468                  dec     si ;~ 3A50:6BDF
cs=0x3a50;eip=0x006be0; 	T(XCHG(ah, al));	// 84469                  xchg    ah, al ;~ 3A50:6BE0
cs=0x3a50;eip=0x006be2; 	T(SHR(ax, cl));	// 84470                  shr     ax, cl ;~ 3A50:6BE2
cs=0x3a50;eip=0x006be4; 	T(AND(al, bl));	// 84471                  and     al, bl ;~ 3A50:6BE4
cs=0x3a50;eip=0x006be6; 	T(CMP(al, *(raddr(es,di))));	// 84472                  cmp     al, es:[di] ;~ 3A50:6BE6
cs=0x3a50;eip=0x006be9; 	S(OUT(dx, al));	// 84473                  out     dx, al ;~ 3A50:6BE9
cs=0x3a50;eip=0x006bea; 	X(STOSB);	// 84474                  stosb ;~ 3A50:6BEA
cs=0x3a50;eip=0x006beb; 	X(POP(cx));	// 84475                  pop     cx ;~ 3A50:6BEB
cs=0x3a50;eip=0x006bec; 	X(POP(di));	// 84476                  pop     di ;~ 3A50:6BEC
cs=0x3a50;eip=0x006bed; 	X(POP(si));	// 84477                  pop     si ;~ 3A50:6BED
cs=0x3a50;eip=0x006bee; 	T(ADD(di, 0x28));	// 84478                  add     di, 28h ; '(' ;~ 3A50:6BEE
cs=0x3a50;eip=0x006bf1; 	T(ADD(si, 0x28));	// 84479                  add     si, 28h ; '(' ;~ 3A50:6BF1
cs=0x3a50;eip=0x006bf4; 	T(DEC(bp));	// 84480                  dec     bp ;~ 3A50:6BF4
cs=0x3a50;eip=0x006bf5; 	J(JNZ(loc_4f68a));	// 84481                  jnz     short loc_4F68A ;~ 3A50:6BF5
cs=0x3a50;eip=0x006bf7; 	J(JMP(loc_4f641));	// 84482                  jmp     loc_4F641 ;~ 3A50:6BF7
loc_4f6da:
	// 7393 
cs=0x3a50;eip=0x006bfa; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 84486                  mov     ax, [bp+8] ;~ 3A50:6BFA
cs=0x3a50;eip=0x006bfd; 	T(AND(al, 7));	// 84487                  and     al, 7 ;~ 3A50:6BFD
cs=0x3a50;eip=0x006bff; 	T(MOV(bx, *(dw*)(raddr(ss,bp+2))));	// 84488                  mov     bx, [bp+2] ;~ 3A50:6BFF
cs=0x3a50;eip=0x006c02; 	T(AND(bl, 7));	// 84489                  and     bl, 7 ;~ 3A50:6C02
cs=0x3a50;eip=0x006c05; 	T(SUB(al, bl));	// 84490                  sub     al, bl ;~ 3A50:6C05
cs=0x3a50;eip=0x006c07; 	J(JS(loc_4f6ec));	// 84491                  js      short loc_4F6EC ;~ 3A50:6C07
cs=0x3a50;eip=0x006c09; 	J(JMP(loc_4f837));	// 84492                  jmp     loc_4F837 ;~ 3A50:6C09
loc_4f6ec:
	// 7394 
cs=0x3a50;eip=0x006c0c; 	T(NEG(al));	// 84496                  neg     al ;~ 3A50:6C0C
cs=0x3a50;eip=0x006c0e; 	T(INC(si));	// 84497                  inc     si ;~ 3A50:6C0E
cs=0x3a50;eip=0x006c0f; 	T(cl = al;);	// 84498                  mov     cl, al ;~ 3A50:6C0F
cs=0x3a50;eip=0x006c11; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 84499                  mov     ax, [bp+0] ;~ 3A50:6C11
cs=0x3a50;eip=0x006c14; 	T(ds = ax;);	// 84500                  mov     ds, ax ;~ 3A50:6C14
cs=0x3a50;eip=0x006c16; 	T(MOV(bp, *(dw*)(raddr(ss,bp+0x0E))));	// 84501                  mov     bp, [bp+0Eh] ;~ 3A50:6C16
loc_4f6f9:
	// 7395 
cs=0x3a50;eip=0x006c19; 	X(PUSH(si));	// 84504                  push    si ;~ 3A50:6C19
cs=0x3a50;eip=0x006c1a; 	X(PUSH(di));	// 84505                  push    di ;~ 3A50:6C1A
cs=0x3a50;eip=0x006c1b; 	X(PUSH(cx));	// 84506                  push    cx ;~ 3A50:6C1B
cs=0x3a50;eip=0x006c1c; 	T(bh = *(db*)(((db*)word_4960a)+0x2F););	// 84507                  mov     bh, byte ptr cs:word_4960A+2Fh ;~ 3A50:6C1C
cs=0x3a50;eip=0x006c21; 	T(OR(ch, ch));	// 84508                  or      ch, ch ;~ 3A50:6C21
cs=0x3a50;eip=0x006c23; 	J(JNZ(loc_4f708));	// 84509                  jnz     short loc_4F708 ;~ 3A50:6C23
cs=0x3a50;eip=0x006c25; 	J(JMP(loc_4f7c3));	// 84510                  jmp     loc_4F7C3 ;~ 3A50:6C25
loc_4f708:
	// 7396 
cs=0x3a50;eip=0x006c28; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x7D00))));	// 84514                  mov     ax, [si+7D00h] ;~ 3A50:6C28
cs=0x3a50;eip=0x006c2c; 	T(XCHG(al, ah));	// 84515                  xchg    al, ah ;~ 3A50:6C2C
cs=0x3a50;eip=0x006c2e; 	T(SHL(ax, cl));	// 84516                  shl     ax, cl ;~ 3A50:6C2E
cs=0x3a50;eip=0x006c30; 	T(AND(ah, bh));	// 84517                  and     ah, bh ;~ 3A50:6C30
cs=0x3a50;eip=0x006c32; 	T(al = 8;);	// 84518                  mov     al, 8 ;~ 3A50:6C32
cs=0x3a50;eip=0x006c34; 	T(dx = 0x3CE;);	// 84519                  mov     dx, 3CEh ;~ 3A50:6C34
cs=0x3a50;eip=0x006c37; 	X(*((amsruntimelibra)+9) = ah;);	// 84520                  mov     byte ptr cs:aMsRunTimeLibra+9, ah ; "me Library - Copyright (c) 1988, Micros"... ;~ 3A50:6C37
cs=0x3a50;eip=0x006c3c; 	S(OUT(dx, ax));	// 84521                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:6C3C
cs=0x3a50;eip=0x006c3d; 	T(CMP(ah, *(raddr(es,di))));	// 84524                  cmp     ah, es:[di] ;~ 3A50:6C3D
cs=0x3a50;eip=0x006c40; 	T(dx = 0x3C4;);	// 84525                  mov     dx, 3C4h ;~ 3A50:6C40
cs=0x3a50;eip=0x006c43; 	T(ax = 0x102;);	// 84526                  mov     ax, 102h ;~ 3A50:6C43
cs=0x3a50;eip=0x006c46; 	T(CLI);	// 84527                  cli ;~ 3A50:6C46
cs=0x3a50;eip=0x006c47; 	S(OUT(dx, ax));	// 84528                  out     dx, ax          ; EGA: sequencer address reg ;~ 3A50:6C47
cs=0x3a50;eip=0x006c48; 	T(INC(dx));	// 84530                  inc     dx ;~ 3A50:6C48
cs=0x3a50;eip=0x006c49; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 84531                  mov     ax, [si] ;~ 3A50:6C49
cs=0x3a50;eip=0x006c4b; 	T(XCHG(al, ah));	// 84532                  xchg    al, ah ;~ 3A50:6C4B
cs=0x3a50;eip=0x006c4d; 	T(SHL(ax, cl));	// 84533                  shl     ax, cl ;~ 3A50:6C4D
cs=0x3a50;eip=0x006c4f; 	T(AND(ah, bh));	// 84534                  and     ah, bh ;~ 3A50:6C4F
cs=0x3a50;eip=0x006c51; 	X(MOV(*(raddr(es,di)), ah));	// 84535                  mov     es:[di], ah ;~ 3A50:6C51
cs=0x3a50;eip=0x006c54; 	T(al = 2;);	// 84536                  mov     al, 2 ;~ 3A50:6C54
cs=0x3a50;eip=0x006c56; 	S(OUT(dx, al));	// 84537                  out     dx, al          ; EGA port: sequencer data register ;~ 3A50:6C56
cs=0x3a50;eip=0x006c57; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x1F40))));	// 84538                  mov     ax, [si+1F40h] ;~ 3A50:6C57
cs=0x3a50;eip=0x006c5b; 	T(XCHG(al, ah));	// 84539                  xchg    al, ah ;~ 3A50:6C5B
cs=0x3a50;eip=0x006c5d; 	T(SHL(ax, cl));	// 84540                  shl     ax, cl ;~ 3A50:6C5D
cs=0x3a50;eip=0x006c5f; 	T(AND(ah, bh));	// 84541                  and     ah, bh ;~ 3A50:6C5F
cs=0x3a50;eip=0x006c61; 	X(MOV(*(raddr(es,di)), ah));	// 84542                  mov     es:[di], ah ;~ 3A50:6C61
cs=0x3a50;eip=0x006c64; 	T(al = 4;);	// 84543                  mov     al, 4 ;~ 3A50:6C64
cs=0x3a50;eip=0x006c66; 	S(OUT(dx, al));	// 84544                  out     dx, al          ; EGA port: sequencer data register ;~ 3A50:6C66
cs=0x3a50;eip=0x006c67; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x3E80))));	// 84545                  mov     ax, [si+3E80h] ;~ 3A50:6C67
cs=0x3a50;eip=0x006c6b; 	T(XCHG(al, ah));	// 84546                  xchg    al, ah ;~ 3A50:6C6B
cs=0x3a50;eip=0x006c6d; 	T(SHL(ax, cl));	// 84547                  shl     ax, cl ;~ 3A50:6C6D
cs=0x3a50;eip=0x006c6f; 	T(AND(ah, bh));	// 84548                  and     ah, bh ;~ 3A50:6C6F
cs=0x3a50;eip=0x006c71; 	X(MOV(*(raddr(es,di)), ah));	// 84549                  mov     es:[di], ah ;~ 3A50:6C71
cs=0x3a50;eip=0x006c74; 	T(al = 8;);	// 84550                  mov     al, 8 ;~ 3A50:6C74
cs=0x3a50;eip=0x006c76; 	S(OUT(dx, al));	// 84551                  out     dx, al          ; EGA port: sequencer data register ;~ 3A50:6C76
cs=0x3a50;eip=0x006c77; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x5DC0))));	// 84552                  mov     ax, [si+5DC0h] ;~ 3A50:6C77
cs=0x3a50;eip=0x006c7b; 	T(XCHG(al, ah));	// 84553                  xchg    al, ah ;~ 3A50:6C7B
cs=0x3a50;eip=0x006c7d; 	T(SHL(ax, cl));	// 84554                  shl     ax, cl ;~ 3A50:6C7D
cs=0x3a50;eip=0x006c7f; 	T(AND(ah, bh));	// 84555                  and     ah, bh ;~ 3A50:6C7F
cs=0x3a50;eip=0x006c81; 	X(MOV(*(raddr(es,di)), ah));	// 84556                  mov     es:[di], ah ;~ 3A50:6C81
cs=0x3a50;eip=0x006c84; 	T(STI);	// 84557                  sti ;~ 3A50:6C84
cs=0x3a50;eip=0x006c85; 	J(JMP(loc_4f7bb));	// 84558                  jmp     short loc_4F7BB ;~ 3A50:6C85
loc_4f768:
	// 7397 
cs=0x3a50;eip=0x006c88; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x7D00))));	// 84564                  mov     ax, [si+7D00h] ;~ 3A50:6C88
cs=0x3a50;eip=0x006c8c; 	T(XCHG(al, ah));	// 84565                  xchg    al, ah ;~ 3A50:6C8C
cs=0x3a50;eip=0x006c8e; 	T(SHL(ax, cl));	// 84566                  shl     ax, cl ;~ 3A50:6C8E
cs=0x3a50;eip=0x006c90; 	T(al = 8;);	// 84567                  mov     al, 8 ;~ 3A50:6C90
cs=0x3a50;eip=0x006c92; 	T(dx = 0x3CE;);	// 84568                  mov     dx, 3CEh ;~ 3A50:6C92
cs=0x3a50;eip=0x006c95; 	X(*((amsruntimelibra)+9) = ah;);	// 84569                  mov     byte ptr cs:aMsRunTimeLibra+9, ah ; "me Library - Copyright (c) 1988, Micros"... ;~ 3A50:6C95
cs=0x3a50;eip=0x006c9a; 	S(OUT(dx, ax));	// 84570                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:6C9A
cs=0x3a50;eip=0x006c9b; 	T(CMP(ah, *(raddr(es,di))));	// 84573                  cmp     ah, es:[di] ;~ 3A50:6C9B
cs=0x3a50;eip=0x006c9e; 	T(dx = 0x3C4;);	// 84574                  mov     dx, 3C4h ;~ 3A50:6C9E
cs=0x3a50;eip=0x006ca1; 	T(ax = 0x102;);	// 84575                  mov     ax, 102h ;~ 3A50:6CA1
cs=0x3a50;eip=0x006ca4; 	T(CLI);	// 84576                  cli ;~ 3A50:6CA4
cs=0x3a50;eip=0x006ca5; 	S(OUT(dx, ax));	// 84577                  out     dx, ax          ; EGA: sequencer address reg ;~ 3A50:6CA5
cs=0x3a50;eip=0x006ca6; 	T(INC(dx));	// 84579                  inc     dx ;~ 3A50:6CA6
cs=0x3a50;eip=0x006ca7; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 84580                  mov     ax, [si] ;~ 3A50:6CA7
cs=0x3a50;eip=0x006ca9; 	T(XCHG(ah, al));	// 84581                  xchg    ah, al ;~ 3A50:6CA9
cs=0x3a50;eip=0x006cab; 	T(SHL(ax, cl));	// 84582                  shl     ax, cl ;~ 3A50:6CAB
cs=0x3a50;eip=0x006cad; 	X(MOV(*(raddr(es,di)), ah));	// 84583                  mov     es:[di], ah ;~ 3A50:6CAD
cs=0x3a50;eip=0x006cb0; 	T(al = 2;);	// 84584                  mov     al, 2 ;~ 3A50:6CB0
cs=0x3a50;eip=0x006cb2; 	S(OUT(dx, al));	// 84585                  out     dx, al          ; EGA port: sequencer data register ;~ 3A50:6CB2
cs=0x3a50;eip=0x006cb3; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x1F40))));	// 84586                  mov     ax, [si+1F40h] ;~ 3A50:6CB3
cs=0x3a50;eip=0x006cb7; 	T(XCHG(ah, al));	// 84587                  xchg    ah, al ;~ 3A50:6CB7
cs=0x3a50;eip=0x006cb9; 	T(SHL(ax, cl));	// 84588                  shl     ax, cl ;~ 3A50:6CB9
cs=0x3a50;eip=0x006cbb; 	X(MOV(*(raddr(es,di)), ah));	// 84589                  mov     es:[di], ah ;~ 3A50:6CBB
cs=0x3a50;eip=0x006cbe; 	T(al = 4;);	// 84590                  mov     al, 4 ;~ 3A50:6CBE
cs=0x3a50;eip=0x006cc0; 	S(OUT(dx, al));	// 84591                  out     dx, al          ; EGA port: sequencer data register ;~ 3A50:6CC0
cs=0x3a50;eip=0x006cc1; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x3E80))));	// 84592                  mov     ax, [si+3E80h] ;~ 3A50:6CC1
cs=0x3a50;eip=0x006cc5; 	T(XCHG(ah, al));	// 84593                  xchg    ah, al ;~ 3A50:6CC5
cs=0x3a50;eip=0x006cc7; 	T(SHL(ax, cl));	// 84594                  shl     ax, cl ;~ 3A50:6CC7
cs=0x3a50;eip=0x006cc9; 	X(MOV(*(raddr(es,di)), ah));	// 84595                  mov     es:[di], ah ;~ 3A50:6CC9
cs=0x3a50;eip=0x006ccc; 	T(al = 8;);	// 84596                  mov     al, 8 ;~ 3A50:6CCC
cs=0x3a50;eip=0x006cce; 	S(OUT(dx, al));	// 84597                  out     dx, al          ; EGA port: sequencer data register ;~ 3A50:6CCE
cs=0x3a50;eip=0x006ccf; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x5DC0))));	// 84598                  mov     ax, [si+5DC0h] ;~ 3A50:6CCF
cs=0x3a50;eip=0x006cd3; 	T(XCHG(ah, al));	// 84599                  xchg    ah, al ;~ 3A50:6CD3
cs=0x3a50;eip=0x006cd5; 	T(SHL(ax, cl));	// 84600                  shl     ax, cl ;~ 3A50:6CD5
cs=0x3a50;eip=0x006cd7; 	X(MOV(*(raddr(es,di)), ah));	// 84601                  mov     es:[di], ah ;~ 3A50:6CD7
cs=0x3a50;eip=0x006cda; 	T(STI);	// 84602                  sti ;~ 3A50:6CDA
loc_4f7bb:
	// 7398 
cs=0x3a50;eip=0x006cdb; 	T(INC(si));	// 84605                  inc     si ;~ 3A50:6CDB
cs=0x3a50;eip=0x006cdc; 	T(INC(di));	// 84606                  inc     di ;~ 3A50:6CDC
cs=0x3a50;eip=0x006cdd; 	T(DEC(ch));	// 84607                  dec     ch ;~ 3A50:6CDD
cs=0x3a50;eip=0x006cdf; 	J(JNZ(loc_4f768));	// 84608                  jnz     short loc_4F768 ;~ 3A50:6CDF
cs=0x3a50;eip=0x006ce1; 	T(bh = 0x0FF;);	// 84609                  mov     bh, 0FFh ;~ 3A50:6CE1
loc_4f7c3:
	// 7399 
cs=0x3a50;eip=0x006ce3; 	T(AND(bh, *(db*)(((db*)word_4960a)+0x30)));	// 84612                  and     bh, byte ptr cs:word_4960A+30h ;~ 3A50:6CE3
cs=0x3a50;eip=0x006ce8; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x7D00))));	// 84613                  mov     ax, [si+7D00h] ;~ 3A50:6CE8
cs=0x3a50;eip=0x006cec; 	T(XCHG(al, ah));	// 84614                  xchg    al, ah ;~ 3A50:6CEC
cs=0x3a50;eip=0x006cee; 	T(SHL(ax, cl));	// 84615                  shl     ax, cl ;~ 3A50:6CEE
cs=0x3a50;eip=0x006cf0; 	T(AND(ah, bh));	// 84616                  and     ah, bh ;~ 3A50:6CF0
cs=0x3a50;eip=0x006cf2; 	T(al = 8;);	// 84617                  mov     al, 8 ;~ 3A50:6CF2
cs=0x3a50;eip=0x006cf4; 	T(dx = 0x3CE;);	// 84618                  mov     dx, 3CEh ;~ 3A50:6CF4
cs=0x3a50;eip=0x006cf7; 	X(*((amsruntimelibra)+9) = ah;);	// 84619                  mov     byte ptr cs:aMsRunTimeLibra+9, ah ; "me Library - Copyright (c) 1988, Micros"... ;~ 3A50:6CF7
cs=0x3a50;eip=0x006cfc; 	S(OUT(dx, ax));	// 84620                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:6CFC
cs=0x3a50;eip=0x006cfd; 	T(CMP(ah, *(raddr(es,di))));	// 84623                  cmp     ah, es:[di] ;~ 3A50:6CFD
cs=0x3a50;eip=0x006d00; 	T(dx = 0x3C4;);	// 84624                  mov     dx, 3C4h ;~ 3A50:6D00
cs=0x3a50;eip=0x006d03; 	T(ax = 0x102;);	// 84625                  mov     ax, 102h ;~ 3A50:6D03
cs=0x3a50;eip=0x006d06; 	T(CLI);	// 84626                  cli ;~ 3A50:6D06
cs=0x3a50;eip=0x006d07; 	S(OUT(dx, ax));	// 84627                  out     dx, ax          ; EGA: sequencer address reg ;~ 3A50:6D07
cs=0x3a50;eip=0x006d08; 	T(INC(dx));	// 84629                  inc     dx ;~ 3A50:6D08
cs=0x3a50;eip=0x006d09; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 84630                  mov     ax, [si] ;~ 3A50:6D09
cs=0x3a50;eip=0x006d0b; 	T(XCHG(al, ah));	// 84631                  xchg    al, ah ;~ 3A50:6D0B
cs=0x3a50;eip=0x006d0d; 	T(SHL(ax, cl));	// 84632                  shl     ax, cl ;~ 3A50:6D0D
cs=0x3a50;eip=0x006d0f; 	T(AND(ah, bh));	// 84633                  and     ah, bh ;~ 3A50:6D0F
cs=0x3a50;eip=0x006d11; 	X(MOV(*(raddr(es,di)), ah));	// 84634                  mov     es:[di], ah ;~ 3A50:6D11
cs=0x3a50;eip=0x006d14; 	T(al = 2;);	// 84635                  mov     al, 2 ;~ 3A50:6D14
cs=0x3a50;eip=0x006d16; 	S(OUT(dx, al));	// 84636                  out     dx, al          ; EGA port: sequencer data register ;~ 3A50:6D16
cs=0x3a50;eip=0x006d17; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x1F40))));	// 84637                  mov     ax, [si+1F40h] ;~ 3A50:6D17
cs=0x3a50;eip=0x006d1b; 	T(XCHG(al, ah));	// 84638                  xchg    al, ah ;~ 3A50:6D1B
cs=0x3a50;eip=0x006d1d; 	T(SHL(ax, cl));	// 84639                  shl     ax, cl ;~ 3A50:6D1D
cs=0x3a50;eip=0x006d1f; 	T(AND(ah, bh));	// 84640                  and     ah, bh ;~ 3A50:6D1F
cs=0x3a50;eip=0x006d21; 	X(MOV(*(raddr(es,di)), ah));	// 84641                  mov     es:[di], ah ;~ 3A50:6D21
cs=0x3a50;eip=0x006d24; 	T(al = 4;);	// 84642                  mov     al, 4 ;~ 3A50:6D24
cs=0x3a50;eip=0x006d26; 	S(OUT(dx, al));	// 84643                  out     dx, al          ; EGA port: sequencer data register ;~ 3A50:6D26
cs=0x3a50;eip=0x006d27; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x3E80))));	// 84644                  mov     ax, [si+3E80h] ;~ 3A50:6D27
cs=0x3a50;eip=0x006d2b; 	T(XCHG(al, ah));	// 84645                  xchg    al, ah ;~ 3A50:6D2B
cs=0x3a50;eip=0x006d2d; 	T(SHL(ax, cl));	// 84646                  shl     ax, cl ;~ 3A50:6D2D
cs=0x3a50;eip=0x006d2f; 	T(AND(ah, bh));	// 84647                  and     ah, bh ;~ 3A50:6D2F
cs=0x3a50;eip=0x006d31; 	X(MOV(*(raddr(es,di)), ah));	// 84648                  mov     es:[di], ah ;~ 3A50:6D31
cs=0x3a50;eip=0x006d34; 	T(al = 8;);	// 84649                  mov     al, 8 ;~ 3A50:6D34
cs=0x3a50;eip=0x006d36; 	S(OUT(dx, al));	// 84650                  out     dx, al          ; EGA port: sequencer data register ;~ 3A50:6D36
cs=0x3a50;eip=0x006d37; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x5DC0))));	// 84651                  mov     ax, [si+5DC0h] ;~ 3A50:6D37
cs=0x3a50;eip=0x006d3b; 	T(XCHG(al, ah));	// 84652                  xchg    al, ah ;~ 3A50:6D3B
cs=0x3a50;eip=0x006d3d; 	T(SHL(ax, cl));	// 84653                  shl     ax, cl ;~ 3A50:6D3D
cs=0x3a50;eip=0x006d3f; 	T(AND(ah, bh));	// 84654                  and     ah, bh ;~ 3A50:6D3F
cs=0x3a50;eip=0x006d41; 	X(MOV(*(raddr(es,di)), ah));	// 84655                  mov     es:[di], ah ;~ 3A50:6D41
cs=0x3a50;eip=0x006d44; 	T(STI);	// 84656                  sti ;~ 3A50:6D44
cs=0x3a50;eip=0x006d45; 	X(POP(cx));	// 84657                  pop     cx ;~ 3A50:6D45
cs=0x3a50;eip=0x006d46; 	X(POP(di));	// 84658                  pop     di ;~ 3A50:6D46
cs=0x3a50;eip=0x006d47; 	X(POP(si));	// 84659                  pop     si ;~ 3A50:6D47
cs=0x3a50;eip=0x006d48; 	T(ADD(di, 0x28));	// 84660                  add     di, 28h ; '(' ;~ 3A50:6D48
cs=0x3a50;eip=0x006d4b; 	T(ADD(si, 0x28));	// 84661                  add     si, 28h ; '(' ;~ 3A50:6D4B
cs=0x3a50;eip=0x006d4e; 	T(DEC(bp));	// 84662                  dec     bp ;~ 3A50:6D4E
cs=0x3a50;eip=0x006d4f; 	J(JZ(loc_4f834));	// 84663                  jz      short loc_4F834 ;~ 3A50:6D4F
cs=0x3a50;eip=0x006d51; 	J(JMP(loc_4f6f9));	// 84664                  jmp     loc_4F6F9 ;~ 3A50:6D51
loc_4f834:
	// 7400 
cs=0x3a50;eip=0x006d54; 	J(JMP(loc_4f641));	// 84669                  jmp     loc_4F641 ;~ 3A50:6D54
loc_4f837:
	// 7401 
cs=0x3a50;eip=0x006d57; 	T(cl = al;);	// 84673                  mov     cl, al ;~ 3A50:6D57
cs=0x3a50;eip=0x006d59; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0))));	// 84674                  mov     ax, [bp+0] ;~ 3A50:6D59
cs=0x3a50;eip=0x006d5c; 	T(ds = ax;);	// 84675                  mov     ds, ax ;~ 3A50:6D5C
cs=0x3a50;eip=0x006d5e; 	T(MOV(bp, *(dw*)(raddr(ss,bp+0x0E))));	// 84676                  mov     bp, [bp+0Eh] ;~ 3A50:6D5E
loc_4f841:
	// 7402 
cs=0x3a50;eip=0x006d61; 	X(PUSH(si));	// 84679                  push    si ;~ 3A50:6D61
cs=0x3a50;eip=0x006d62; 	X(PUSH(di));	// 84680                  push    di ;~ 3A50:6D62
cs=0x3a50;eip=0x006d63; 	X(PUSH(cx));	// 84681                  push    cx ;~ 3A50:6D63
cs=0x3a50;eip=0x006d64; 	T(bh = *(db*)(((db*)word_4960a)+0x2F););	// 84682                  mov     bh, byte ptr cs:word_4960A+2Fh ;~ 3A50:6D64
cs=0x3a50;eip=0x006d69; 	T(OR(ch, ch));	// 84683                  or      ch, ch ;~ 3A50:6D69
cs=0x3a50;eip=0x006d6b; 	J(JNZ(loc_4f850));	// 84684                  jnz     short loc_4F850 ;~ 3A50:6D6B
cs=0x3a50;eip=0x006d6d; 	J(JMP(loc_4f908));	// 84685                  jmp     loc_4F908 ;~ 3A50:6D6D
loc_4f850:
	// 7403 
cs=0x3a50;eip=0x006d70; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x7D00))));	// 84689                  mov     ax, [si+7D00h] ;~ 3A50:6D70
cs=0x3a50;eip=0x006d74; 	T(XCHG(al, ah));	// 84690                  xchg    al, ah ;~ 3A50:6D74
cs=0x3a50;eip=0x006d76; 	T(SHR(ax, cl));	// 84691                  shr     ax, cl ;~ 3A50:6D76
cs=0x3a50;eip=0x006d78; 	T(AND(al, bh));	// 84692                  and     al, bh ;~ 3A50:6D78
cs=0x3a50;eip=0x006d7a; 	T(XCHG(al, ah));	// 84693                  xchg    al, ah ;~ 3A50:6D7A
cs=0x3a50;eip=0x006d7c; 	T(al = 8;);	// 84694                  mov     al, 8 ;~ 3A50:6D7C
cs=0x3a50;eip=0x006d7e; 	T(dx = 0x3CE;);	// 84695                  mov     dx, 3CEh ;~ 3A50:6D7E
cs=0x3a50;eip=0x006d81; 	X(*((amsruntimelibra)+9) = ah;);	// 84696                  mov     byte ptr cs:aMsRunTimeLibra+9, ah ; "me Library - Copyright (c) 1988, Micros"... ;~ 3A50:6D81
cs=0x3a50;eip=0x006d86; 	S(OUT(dx, ax));	// 84697                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:6D86
cs=0x3a50;eip=0x006d87; 	T(CMP(ah, *(raddr(es,di))));	// 84700                  cmp     ah, es:[di] ;~ 3A50:6D87
cs=0x3a50;eip=0x006d8a; 	T(dx = 0x3C4;);	// 84701                  mov     dx, 3C4h ;~ 3A50:6D8A
cs=0x3a50;eip=0x006d8d; 	T(ax = 0x102;);	// 84702                  mov     ax, 102h ;~ 3A50:6D8D
cs=0x3a50;eip=0x006d90; 	T(CLI);	// 84703                  cli ;~ 3A50:6D90
cs=0x3a50;eip=0x006d91; 	S(OUT(dx, ax));	// 84704                  out     dx, ax          ; EGA: sequencer address reg ;~ 3A50:6D91
cs=0x3a50;eip=0x006d92; 	T(INC(dx));	// 84706                  inc     dx ;~ 3A50:6D92
cs=0x3a50;eip=0x006d93; 	T(MOV(ah, *(raddr(ds,si))));	// 84707                  mov     ah, [si] ;~ 3A50:6D93
cs=0x3a50;eip=0x006d95; 	T(MOV(al, *(raddr(ds,si+1))));	// 84708                  mov     al, [si+1] ;~ 3A50:6D95
cs=0x3a50;eip=0x006d98; 	T(SHR(ax, cl));	// 84709                  shr     ax, cl ;~ 3A50:6D98
cs=0x3a50;eip=0x006d9a; 	X(MOV(*(raddr(es,di)), al));	// 84710                  mov     es:[di], al ;~ 3A50:6D9A
cs=0x3a50;eip=0x006d9d; 	T(al = 2;);	// 84711                  mov     al, 2 ;~ 3A50:6D9D
cs=0x3a50;eip=0x006d9f; 	S(OUT(dx, al));	// 84712                  out     dx, al          ; EGA port: sequencer data register ;~ 3A50:6D9F
cs=0x3a50;eip=0x006da0; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x1F40))));	// 84713                  mov     ax, [si+1F40h] ;~ 3A50:6DA0
cs=0x3a50;eip=0x006da4; 	T(XCHG(al, ah));	// 84714                  xchg    al, ah ;~ 3A50:6DA4
cs=0x3a50;eip=0x006da6; 	T(SHR(ax, cl));	// 84715                  shr     ax, cl ;~ 3A50:6DA6
cs=0x3a50;eip=0x006da8; 	X(MOV(*(raddr(es,di)), al));	// 84716                  mov     es:[di], al ;~ 3A50:6DA8
cs=0x3a50;eip=0x006dab; 	T(al = 4;);	// 84717                  mov     al, 4 ;~ 3A50:6DAB
cs=0x3a50;eip=0x006dad; 	S(OUT(dx, al));	// 84718                  out     dx, al          ; EGA port: sequencer data register ;~ 3A50:6DAD
cs=0x3a50;eip=0x006dae; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x3E80))));	// 84719                  mov     ax, [si+3E80h] ;~ 3A50:6DAE
cs=0x3a50;eip=0x006db2; 	T(XCHG(al, ah));	// 84720                  xchg    al, ah ;~ 3A50:6DB2
cs=0x3a50;eip=0x006db4; 	T(SHR(ax, cl));	// 84721                  shr     ax, cl ;~ 3A50:6DB4
cs=0x3a50;eip=0x006db6; 	X(MOV(*(raddr(es,di)), al));	// 84722                  mov     es:[di], al ;~ 3A50:6DB6
cs=0x3a50;eip=0x006db9; 	T(al = 8;);	// 84723                  mov     al, 8 ;~ 3A50:6DB9
cs=0x3a50;eip=0x006dbb; 	S(OUT(dx, al));	// 84724                  out     dx, al          ; EGA port: sequencer data register ;~ 3A50:6DBB
cs=0x3a50;eip=0x006dbc; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x5DC0))));	// 84725                  mov     ax, [si+5DC0h] ;~ 3A50:6DBC
cs=0x3a50;eip=0x006dc0; 	T(XCHG(al, ah));	// 84726                  xchg    al, ah ;~ 3A50:6DC0
cs=0x3a50;eip=0x006dc2; 	T(SHR(ax, cl));	// 84727                  shr     ax, cl ;~ 3A50:6DC2
cs=0x3a50;eip=0x006dc4; 	X(MOV(*(raddr(es,di)), al));	// 84728                  mov     es:[di], al ;~ 3A50:6DC4
cs=0x3a50;eip=0x006dc7; 	T(STI);	// 84729                  sti ;~ 3A50:6DC7
cs=0x3a50;eip=0x006dc8; 	J(JMP(loc_4f900));	// 84730                  jmp     short loc_4F900 ;~ 3A50:6DC8
loc_4f8ab:
	// 7404 
cs=0x3a50;eip=0x006dcb; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x7D00))));	// 84736                  mov     ax, [si+7D00h] ;~ 3A50:6DCB
cs=0x3a50;eip=0x006dcf; 	T(XCHG(al, ah));	// 84737                  xchg    al, ah ;~ 3A50:6DCF
cs=0x3a50;eip=0x006dd1; 	T(SHR(ax, cl));	// 84738                  shr     ax, cl ;~ 3A50:6DD1
cs=0x3a50;eip=0x006dd3; 	T(XCHG(al, ah));	// 84739                  xchg    al, ah ;~ 3A50:6DD3
cs=0x3a50;eip=0x006dd5; 	T(al = 8;);	// 84740                  mov     al, 8 ;~ 3A50:6DD5
cs=0x3a50;eip=0x006dd7; 	T(dx = 0x3CE;);	// 84741                  mov     dx, 3CEh ;~ 3A50:6DD7
cs=0x3a50;eip=0x006dda; 	X(*((amsruntimelibra)+9) = ah;);	// 84742                  mov     byte ptr cs:aMsRunTimeLibra+9, ah ; "me Library - Copyright (c) 1988, Micros"... ;~ 3A50:6DDA
cs=0x3a50;eip=0x006ddf; 	S(OUT(dx, ax));	// 84743                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:6DDF
cs=0x3a50;eip=0x006de0; 	T(CMP(ah, *(raddr(es,di))));	// 84746                  cmp     ah, es:[di] ;~ 3A50:6DE0
cs=0x3a50;eip=0x006de3; 	T(dx = 0x3C4;);	// 84747                  mov     dx, 3C4h ;~ 3A50:6DE3
cs=0x3a50;eip=0x006de6; 	T(ax = 0x102;);	// 84748                  mov     ax, 102h ;~ 3A50:6DE6
cs=0x3a50;eip=0x006de9; 	T(CLI);	// 84749                  cli ;~ 3A50:6DE9
cs=0x3a50;eip=0x006dea; 	S(OUT(dx, ax));	// 84750                  out     dx, ax          ; EGA: sequencer address reg ;~ 3A50:6DEA
cs=0x3a50;eip=0x006deb; 	T(INC(dx));	// 84752                  inc     dx ;~ 3A50:6DEB
cs=0x3a50;eip=0x006dec; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 84753                  mov     ax, [si] ;~ 3A50:6DEC
cs=0x3a50;eip=0x006dee; 	T(XCHG(ah, al));	// 84754                  xchg    ah, al ;~ 3A50:6DEE
cs=0x3a50;eip=0x006df0; 	T(SHR(ax, cl));	// 84755                  shr     ax, cl ;~ 3A50:6DF0
cs=0x3a50;eip=0x006df2; 	X(MOV(*(raddr(es,di)), al));	// 84756                  mov     es:[di], al ;~ 3A50:6DF2
cs=0x3a50;eip=0x006df5; 	T(al = 2;);	// 84757                  mov     al, 2 ;~ 3A50:6DF5
cs=0x3a50;eip=0x006df7; 	S(OUT(dx, al));	// 84758                  out     dx, al          ; EGA port: sequencer data register ;~ 3A50:6DF7
cs=0x3a50;eip=0x006df8; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x1F40))));	// 84759                  mov     ax, [si+1F40h] ;~ 3A50:6DF8
cs=0x3a50;eip=0x006dfc; 	T(XCHG(ah, al));	// 84760                  xchg    ah, al ;~ 3A50:6DFC
cs=0x3a50;eip=0x006dfe; 	T(SHR(ax, cl));	// 84761                  shr     ax, cl ;~ 3A50:6DFE
cs=0x3a50;eip=0x006e00; 	X(MOV(*(raddr(es,di)), al));	// 84762                  mov     es:[di], al ;~ 3A50:6E00
cs=0x3a50;eip=0x006e03; 	T(al = 4;);	// 84763                  mov     al, 4 ;~ 3A50:6E03
cs=0x3a50;eip=0x006e05; 	S(OUT(dx, al));	// 84764                  out     dx, al          ; EGA port: sequencer data register ;~ 3A50:6E05
cs=0x3a50;eip=0x006e06; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x3E80))));	// 84765                  mov     ax, [si+3E80h] ;~ 3A50:6E06
cs=0x3a50;eip=0x006e0a; 	T(XCHG(ah, al));	// 84766                  xchg    ah, al ;~ 3A50:6E0A
cs=0x3a50;eip=0x006e0c; 	T(SHR(ax, cl));	// 84767                  shr     ax, cl ;~ 3A50:6E0C
cs=0x3a50;eip=0x006e0e; 	X(MOV(*(raddr(es,di)), al));	// 84768                  mov     es:[di], al ;~ 3A50:6E0E
cs=0x3a50;eip=0x006e11; 	T(al = 8;);	// 84769                  mov     al, 8 ;~ 3A50:6E11
cs=0x3a50;eip=0x006e13; 	S(OUT(dx, al));	// 84770                  out     dx, al          ; EGA port: sequencer data register ;~ 3A50:6E13
cs=0x3a50;eip=0x006e14; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x5DC0))));	// 84771                  mov     ax, [si+5DC0h] ;~ 3A50:6E14
cs=0x3a50;eip=0x006e18; 	T(XCHG(ah, al));	// 84772                  xchg    ah, al ;~ 3A50:6E18
cs=0x3a50;eip=0x006e1a; 	T(SHR(ax, cl));	// 84773                  shr     ax, cl ;~ 3A50:6E1A
cs=0x3a50;eip=0x006e1c; 	X(MOV(*(raddr(es,di)), al));	// 84774                  mov     es:[di], al ;~ 3A50:6E1C
cs=0x3a50;eip=0x006e1f; 	T(STI);	// 84775                  sti ;~ 3A50:6E1F
loc_4f900:
	// 7405 
cs=0x3a50;eip=0x006e20; 	T(INC(si));	// 84778                  inc     si ;~ 3A50:6E20
cs=0x3a50;eip=0x006e21; 	T(INC(di));	// 84779                  inc     di ;~ 3A50:6E21
cs=0x3a50;eip=0x006e22; 	T(DEC(ch));	// 84780                  dec     ch ;~ 3A50:6E22
cs=0x3a50;eip=0x006e24; 	J(JNZ(loc_4f8ab));	// 84781                  jnz     short loc_4F8AB ;~ 3A50:6E24
cs=0x3a50;eip=0x006e26; 	T(bh = 0x0FF;);	// 84782                  mov     bh, 0FFh ;~ 3A50:6E26
loc_4f908:
	// 7406 
cs=0x3a50;eip=0x006e28; 	T(AND(bh, *(db*)(((db*)word_4960a)+0x30)));	// 84785                  and     bh, byte ptr cs:word_4960A+30h ;~ 3A50:6E28
cs=0x3a50;eip=0x006e2d; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x7D00))));	// 84786                  mov     ax, [si+7D00h] ;~ 3A50:6E2D
cs=0x3a50;eip=0x006e31; 	T(XCHG(al, ah));	// 84787                  xchg    al, ah ;~ 3A50:6E31
cs=0x3a50;eip=0x006e33; 	T(SHR(ax, cl));	// 84788                  shr     ax, cl ;~ 3A50:6E33
cs=0x3a50;eip=0x006e35; 	T(AND(al, bh));	// 84789                  and     al, bh ;~ 3A50:6E35
cs=0x3a50;eip=0x006e37; 	T(XCHG(al, ah));	// 84790                  xchg    al, ah ;~ 3A50:6E37
cs=0x3a50;eip=0x006e39; 	T(al = 8;);	// 84791                  mov     al, 8 ;~ 3A50:6E39
cs=0x3a50;eip=0x006e3b; 	T(dx = 0x3CE;);	// 84792                  mov     dx, 3CEh ;~ 3A50:6E3B
cs=0x3a50;eip=0x006e3e; 	X(*((amsruntimelibra)+9) = ah;);	// 84793                  mov     byte ptr cs:aMsRunTimeLibra+9, ah ; "me Library - Copyright (c) 1988, Micros"... ;~ 3A50:6E3E
cs=0x3a50;eip=0x006e43; 	S(OUT(dx, ax));	// 84794                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:6E43
cs=0x3a50;eip=0x006e44; 	T(CMP(ah, *(raddr(es,di))));	// 84797                  cmp     ah, es:[di] ;~ 3A50:6E44
cs=0x3a50;eip=0x006e47; 	T(dx = 0x3C4;);	// 84798                  mov     dx, 3C4h ;~ 3A50:6E47
cs=0x3a50;eip=0x006e4a; 	T(ax = 0x102;);	// 84799                  mov     ax, 102h ;~ 3A50:6E4A
cs=0x3a50;eip=0x006e4d; 	T(CLI);	// 84800                  cli ;~ 3A50:6E4D
cs=0x3a50;eip=0x006e4e; 	S(OUT(dx, ax));	// 84801                  out     dx, ax          ; EGA: sequencer address reg ;~ 3A50:6E4E
cs=0x3a50;eip=0x006e4f; 	T(INC(dx));	// 84803                  inc     dx ;~ 3A50:6E4F
cs=0x3a50;eip=0x006e50; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 84804                  mov     ax, [si] ;~ 3A50:6E50
cs=0x3a50;eip=0x006e52; 	T(XCHG(al, ah));	// 84805                  xchg    al, ah ;~ 3A50:6E52
cs=0x3a50;eip=0x006e54; 	T(SHR(ax, cl));	// 84806                  shr     ax, cl ;~ 3A50:6E54
cs=0x3a50;eip=0x006e56; 	T(AND(al, bh));	// 84807                  and     al, bh ;~ 3A50:6E56
cs=0x3a50;eip=0x006e58; 	X(MOV(*(raddr(es,di)), al));	// 84808                  mov     es:[di], al ;~ 3A50:6E58
cs=0x3a50;eip=0x006e5b; 	T(al = 2;);	// 84809                  mov     al, 2 ;~ 3A50:6E5B
cs=0x3a50;eip=0x006e5d; 	S(OUT(dx, al));	// 84810                  out     dx, al          ; EGA port: sequencer data register ;~ 3A50:6E5D
cs=0x3a50;eip=0x006e5e; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x1F40))));	// 84811                  mov     ax, [si+1F40h] ;~ 3A50:6E5E
cs=0x3a50;eip=0x006e62; 	T(XCHG(al, ah));	// 84812                  xchg    al, ah ;~ 3A50:6E62
cs=0x3a50;eip=0x006e64; 	T(SHR(ax, cl));	// 84813                  shr     ax, cl ;~ 3A50:6E64
cs=0x3a50;eip=0x006e66; 	T(AND(al, bh));	// 84814                  and     al, bh ;~ 3A50:6E66
cs=0x3a50;eip=0x006e68; 	X(MOV(*(raddr(es,di)), al));	// 84815                  mov     es:[di], al ;~ 3A50:6E68
cs=0x3a50;eip=0x006e6b; 	T(al = 4;);	// 84816                  mov     al, 4 ;~ 3A50:6E6B
cs=0x3a50;eip=0x006e6d; 	S(OUT(dx, al));	// 84817                  out     dx, al          ; EGA port: sequencer data register ;~ 3A50:6E6D
cs=0x3a50;eip=0x006e6e; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x3E80))));	// 84818                  mov     ax, [si+3E80h] ;~ 3A50:6E6E
cs=0x3a50;eip=0x006e72; 	T(XCHG(al, ah));	// 84819                  xchg    al, ah ;~ 3A50:6E72
cs=0x3a50;eip=0x006e74; 	T(SHR(ax, cl));	// 84820                  shr     ax, cl ;~ 3A50:6E74
cs=0x3a50;eip=0x006e76; 	T(AND(al, bh));	// 84821                  and     al, bh ;~ 3A50:6E76
cs=0x3a50;eip=0x006e78; 	X(MOV(*(raddr(es,di)), al));	// 84822                  mov     es:[di], al ;~ 3A50:6E78
cs=0x3a50;eip=0x006e7b; 	T(al = 8;);	// 84823                  mov     al, 8 ;~ 3A50:6E7B
cs=0x3a50;eip=0x006e7d; 	S(OUT(dx, al));	// 84824                  out     dx, al          ; EGA port: sequencer data register ;~ 3A50:6E7D
cs=0x3a50;eip=0x006e7e; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x5DC0))));	// 84825                  mov     ax, [si+5DC0h] ;~ 3A50:6E7E
cs=0x3a50;eip=0x006e82; 	T(XCHG(al, ah));	// 84826                  xchg    al, ah ;~ 3A50:6E82
cs=0x3a50;eip=0x006e84; 	T(SHR(ax, cl));	// 84827                  shr     ax, cl ;~ 3A50:6E84
cs=0x3a50;eip=0x006e86; 	T(AND(al, bh));	// 84828                  and     al, bh ;~ 3A50:6E86
cs=0x3a50;eip=0x006e88; 	X(MOV(*(raddr(es,di)), al));	// 84829                  mov     es:[di], al ;~ 3A50:6E88
cs=0x3a50;eip=0x006e8b; 	T(STI);	// 84830                  sti ;~ 3A50:6E8B
cs=0x3a50;eip=0x006e8c; 	X(POP(cx));	// 84831                  pop     cx ;~ 3A50:6E8C
cs=0x3a50;eip=0x006e8d; 	X(POP(di));	// 84832                  pop     di ;~ 3A50:6E8D
cs=0x3a50;eip=0x006e8e; 	X(POP(si));	// 84833                  pop     si ;~ 3A50:6E8E
cs=0x3a50;eip=0x006e8f; 	T(ADD(di, 0x28));	// 84834                  add     di, 28h ; '(' ;~ 3A50:6E8F
cs=0x3a50;eip=0x006e92; 	T(ADD(si, 0x28));	// 84835                  add     si, 28h ; '(' ;~ 3A50:6E92
cs=0x3a50;eip=0x006e95; 	T(DEC(bp));	// 84836                  dec     bp ;~ 3A50:6E95
cs=0x3a50;eip=0x006e96; 	J(JZ(loc_4f97b));	// 84837                  jz      short loc_4F97B ;~ 3A50:6E96
cs=0x3a50;eip=0x006e98; 	J(JMP(loc_4f841));	// 84838                  jmp     loc_4F841 ;~ 3A50:6E98
loc_4f97b:
	// 7407 
cs=0x3a50;eip=0x006e9b; 	J(JMP(loc_4f641));	// 84842                  jmp     loc_4F641 ;~ 3A50:6E9B
ret_3a50_6ea2:
	// 7408 
cs=0x3a50;eip=0x006ea2; 	X(PUSH(bp));	// 84849                  push    bp ;~ 3A50:6EA2
cs=0x3a50;eip=0x006ea3; 	T(bp = sp;);	// 84850                  mov     bp, sp ;~ 3A50:6EA3
cs=0x3a50;eip=0x006ea5; 	X(PUSH(di));	// 84851                  push    di ;~ 3A50:6EA5
cs=0x3a50;eip=0x006ea6; 	X(PUSH(si));	// 84852                  push    si ;~ 3A50:6EA6
cs=0x3a50;eip=0x006ea7; 	X(PUSH(es));	// 84853                  push    es ;~ 3A50:6EA7
cs=0x3a50;eip=0x006ea8; 	X(PUSH(ds));	// 84854                  push    ds ;~ 3A50:6EA8
cs=0x3a50;eip=0x006ea9; 	X(PUSH(bp));	// 84855                  push    bp ;~ 3A50:6EA9
cs=0x3a50;eip=0x006eaa; 	T(ax = 0x4C7A;);	// 84856                  mov     ax, 4C7Ah ;~ 3A50:6EAA
cs=0x3a50;eip=0x006ead; 	T(ds = ax;);	// 84857                  mov     ds, ax ;~ 3A50:6EAD
cs=0x3a50;eip=0x006eaf; 	X(*(adetaillevel) = 0;);	// 84859                  mov     byte ptr ds:aDetailLevel, 0 ; "Detail Level " ;~ 3A50:6EAF
cs=0x3a50;eip=0x006eb4; 	T(MOV(bp, *(dw*)(raddr(ss,bp+6))));	// 84860                  mov     bp, [bp+6] ;~ 3A50:6EB4
cs=0x3a50;eip=0x006eb7; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0C))));	// 84861                  push    word ptr [bp+0Ch] ;~ 3A50:6EB7
cs=0x3a50;eip=0x006eba; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0E))));	// 84862                  push    word ptr [bp+0Eh] ;~ 3A50:6EBA
cs=0x3a50;eip=0x006ebd; 	J(JMP(loc_4f9b2));	// 84863                  jmp     short loc_4F9B2 ;~ 3A50:6EBD
ret_3a50_6ec0:
	// 7409 
cs=0x3a50;eip=0x006ec0; 	X(PUSH(es));	// 84867                  push    es ;~ 3A50:6EC0
cs=0x3a50;eip=0x006ec1; 	X(PUSH(ds));	// 84868                  push    ds ;~ 3A50:6EC1
cs=0x3a50;eip=0x006ec2; 	T(ax = 0x4C7A;);	// 84869                  mov     ax, 4C7Ah ;~ 3A50:6EC2
cs=0x3a50;eip=0x006ec5; 	T(ds = ax;);	// 84870                  mov     ds, ax ;~ 3A50:6EC5
cs=0x3a50;eip=0x006ec7; 	X(*(adetaillevel) = 1;);	// 84871                  mov     byte ptr ds:aDetailLevel, 1 ; "Detail Level " ;~ 3A50:6EC7
cs=0x3a50;eip=0x006ecc; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0C))));	// 84872                  push    word ptr [bp+0Ch] ;~ 3A50:6ECC
cs=0x3a50;eip=0x006ecf; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0E))));	// 84873                  push    word ptr [bp+0Eh] ;~ 3A50:6ECF
loc_4f9b2:
	// 7410 
cs=0x3a50;eip=0x006ed2; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x14))));	// 84876                  mov     cx, [bp+14h] ;~ 3A50:6ED2
cs=0x3a50;eip=0x006ed5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 84877                  mov     ax, [bp+8] ;~ 3A50:6ED5
cs=0x3a50;eip=0x006ed8; 	T(CMP(ax, cx));	// 84878                  cmp     ax, cx ;~ 3A50:6ED8
cs=0x3a50;eip=0x006eda; 	J(JGE(loc_4f9d7));	// 84879                  jge     short loc_4F9D7 ;~ 3A50:6EDA
cs=0x3a50;eip=0x006edc; 	T(bx = ax;);	// 84880                  mov     bx, ax ;~ 3A50:6EDC
cs=0x3a50;eip=0x006ede; 	T(ADD(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 84881                  add     bx, [bp+0Ch] ;~ 3A50:6EDE
cs=0x3a50;eip=0x006ee1; 	T(DEC(bx));	// 84882                  dec     bx ;~ 3A50:6EE1
cs=0x3a50;eip=0x006ee2; 	T(CMP(bx, cx));	// 84883                  cmp     bx, cx ;~ 3A50:6EE2
cs=0x3a50;eip=0x006ee4; 	J(JGE(loc_4f9c9));	// 84884                  jge     short loc_4F9C9 ;~ 3A50:6EE4
cs=0x3a50;eip=0x006ee6; 	J(JMP(loc_4f4ff));	// 84885                  jmp     loc_4F4FF ;~ 3A50:6EE6
loc_4f9c9:
	// 7411 
cs=0x3a50;eip=0x006ee9; 	T(SUB(cx, ax));	// 84889                  sub     cx, ax ;~ 3A50:6EE9
cs=0x3a50;eip=0x006eeb; 	X(ADD(*(dw*)(raddr(ss,bp+8)), cx));	// 84890                  add     [bp+8], cx ;~ 3A50:6EEB
cs=0x3a50;eip=0x006eee; 	X(ADD(*(dw*)(raddr(ss,bp+2)), cx));	// 84891                  add     [bp+2], cx ;~ 3A50:6EEE
cs=0x3a50;eip=0x006ef1; 	X(SUB(*(dw*)(raddr(ss,bp+0x0C)), cx));	// 84892                  sub     [bp+0Ch], cx ;~ 3A50:6EF1
cs=0x3a50;eip=0x006ef4; 	J(JMP(loc_4f9dd));	// 84893                  jmp     short loc_4F9DD ;~ 3A50:6EF4
loc_4f9d7:
	// 7412 
cs=0x3a50;eip=0x006ef7; 	T(bx = ax;);	// 84899                  mov     bx, ax ;~ 3A50:6EF7
cs=0x3a50;eip=0x006ef9; 	T(ADD(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 84900                  add     bx, [bp+0Ch] ;~ 3A50:6EF9
cs=0x3a50;eip=0x006efc; 	T(DEC(bx));	// 84901                  dec     bx ;~ 3A50:6EFC
loc_4f9dd:
	// 7413 
cs=0x3a50;eip=0x006efd; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x16))));	// 84904                  mov     cx, [bp+16h] ;~ 3A50:6EFD
cs=0x3a50;eip=0x006f00; 	T(CMP(bx, cx));	// 84905                  cmp     bx, cx ;~ 3A50:6F00
cs=0x3a50;eip=0x006f02; 	J(JLE(loc_4f9f0));	// 84906                  jle     short loc_4F9F0 ;~ 3A50:6F02
cs=0x3a50;eip=0x006f04; 	T(CMP(ax, cx));	// 84907                  cmp     ax, cx ;~ 3A50:6F04
cs=0x3a50;eip=0x006f06; 	J(JLE(loc_4f9eb));	// 84908                  jle     short loc_4F9EB ;~ 3A50:6F06
cs=0x3a50;eip=0x006f08; 	J(JMP(loc_4f4ff));	// 84909                  jmp     loc_4F4FF ;~ 3A50:6F08
loc_4f9eb:
	// 7414 
cs=0x3a50;eip=0x006f0b; 	T(SUB(bx, cx));	// 84913                  sub     bx, cx ;~ 3A50:6F0B
cs=0x3a50;eip=0x006f0d; 	X(SUB(*(dw*)(raddr(ss,bp+0x0C)), bx));	// 84914                  sub     [bp+0Ch], bx ;~ 3A50:6F0D
loc_4f9f0:
	// 7415 
cs=0x3a50;eip=0x006f10; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x10))));	// 84917                  mov     cx, [bp+10h] ;~ 3A50:6F10
cs=0x3a50;eip=0x006f13; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 84918                  mov     ax, [bp+0Ah] ;~ 3A50:6F13
cs=0x3a50;eip=0x006f16; 	T(CMP(ax, cx));	// 84919                  cmp     ax, cx ;~ 3A50:6F16
cs=0x3a50;eip=0x006f18; 	J(JGE(loc_4fa15));	// 84920                  jge     short loc_4FA15 ;~ 3A50:6F18
cs=0x3a50;eip=0x006f1a; 	T(bx = ax;);	// 84921                  mov     bx, ax ;~ 3A50:6F1A
cs=0x3a50;eip=0x006f1c; 	T(ADD(bx, *(dw*)(raddr(ss,bp+0x0E))));	// 84922                  add     bx, [bp+0Eh] ;~ 3A50:6F1C
cs=0x3a50;eip=0x006f1f; 	T(DEC(bx));	// 84923                  dec     bx ;~ 3A50:6F1F
cs=0x3a50;eip=0x006f20; 	T(CMP(bx, cx));	// 84924                  cmp     bx, cx ;~ 3A50:6F20
cs=0x3a50;eip=0x006f22; 	J(JGE(loc_4fa07));	// 84925                  jge     short loc_4FA07 ;~ 3A50:6F22
cs=0x3a50;eip=0x006f24; 	J(JMP(loc_4f4ff));	// 84926                  jmp     loc_4F4FF ;~ 3A50:6F24
loc_4fa07:
	// 7416 
cs=0x3a50;eip=0x006f27; 	T(SUB(cx, ax));	// 84930                  sub     cx, ax ;~ 3A50:6F27
cs=0x3a50;eip=0x006f29; 	X(ADD(*(dw*)(raddr(ss,bp+0x0A)), cx));	// 84931                  add     [bp+0Ah], cx ;~ 3A50:6F29
cs=0x3a50;eip=0x006f2c; 	X(ADD(*(dw*)(raddr(ss,bp+4)), cx));	// 84932                  add     [bp+4], cx ;~ 3A50:6F2C
cs=0x3a50;eip=0x006f2f; 	X(SUB(*(dw*)(raddr(ss,bp+0x0E)), cx));	// 84933                  sub     [bp+0Eh], cx ;~ 3A50:6F2F
cs=0x3a50;eip=0x006f32; 	J(JMP(loc_4fa1b));	// 84934                  jmp     short loc_4FA1B ;~ 3A50:6F32
loc_4fa15:
	// 7417 
cs=0x3a50;eip=0x006f35; 	T(bx = ax;);	// 84940                  mov     bx, ax ;~ 3A50:6F35
cs=0x3a50;eip=0x006f37; 	T(ADD(bx, *(dw*)(raddr(ss,bp+0x0E))));	// 84941                  add     bx, [bp+0Eh] ;~ 3A50:6F37
cs=0x3a50;eip=0x006f3a; 	T(DEC(bx));	// 84942                  dec     bx ;~ 3A50:6F3A
loc_4fa1b:
	// 7418 
cs=0x3a50;eip=0x006f3b; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x12))));	// 84945                  mov     cx, [bp+12h] ;~ 3A50:6F3B
cs=0x3a50;eip=0x006f3e; 	T(CMP(bx, cx));	// 84946                  cmp     bx, cx ;~ 3A50:6F3E
cs=0x3a50;eip=0x006f40; 	J(JLE(loc_4fa2e));	// 84947                  jle     short loc_4FA2E ;~ 3A50:6F40
cs=0x3a50;eip=0x006f42; 	T(CMP(ax, cx));	// 84948                  cmp     ax, cx ;~ 3A50:6F42
cs=0x3a50;eip=0x006f44; 	J(JLE(loc_4fa29));	// 84949                  jle     short loc_4FA29 ;~ 3A50:6F44
cs=0x3a50;eip=0x006f46; 	J(JMP(loc_4fa35));	// 84950                  jmp     short loc_4FA35 ;~ 3A50:6F46
loc_4fa29:
	// 7419 
cs=0x3a50;eip=0x006f49; 	T(SUB(bx, cx));	// 84956                  sub     bx, cx ;~ 3A50:6F49
cs=0x3a50;eip=0x006f4b; 	X(SUB(*(dw*)(raddr(ss,bp+0x0E)), bx));	// 84957                  sub     [bp+0Eh], bx ;~ 3A50:6F4B
loc_4fa2e:
	// 7420 
cs=0x3a50;eip=0x006f4e; 	X(PUSH(bp));	// 84960                  push    bp ;~ 3A50:6F4E
cs=0x3a50;eip=0x006f4f; 	J(CALLF(seg48ae_1300_proc,m2c::kloc_4fa66));	// 84961                  call    far ptr loc_4FA66 ;~ 3A50:6F4F
cs=0x3a50;eip=0x006f54; 	X(POP(bp));	// 84962                  pop     bp ;~ 3A50:6F54
loc_4fa35:
	// 7421 
cs=0x3a50;eip=0x006f55; 	X(POP(*(dw*)(raddr(ss,bp+0x0E))));	// 84965                  pop     word ptr [bp+0Eh] ;~ 3A50:6F55
loc_4fa38:
	// 7422 
cs=0x3a50;eip=0x006f58; 	X(POP(*(dw*)(raddr(ss,bp+0x0C))));	// 84969                  pop     word ptr [bp+0Ch] ;~ 3A50:6F58
cs=0x3a50;eip=0x006f5b; 	T(CMP(*(adetaillevel), 0));	// 84970                  cmp     byte ptr ds:aDetailLevel, 0 ; "Detail Level " ;~ 3A50:6F5B
cs=0x3a50;eip=0x006f60; 	J(JNZ(loc_4fa4b));	// 84971                  jnz     short loc_4FA4B ;~ 3A50:6F60
cs=0x3a50;eip=0x006f62; 	X(POP(bp));	// 84972                  pop     bp ;~ 3A50:6F62
cs=0x3a50;eip=0x006f63; 	X(POP(ds));	// 84973                  pop     ds ;~ 3A50:6F63
cs=0x3a50;eip=0x006f64; 	X(POP(es));	// 84975                  pop     es ;~ 3A50:6F64
cs=0x3a50;eip=0x006f65; 	X(POP(si));	// 84976                  pop     si ;~ 3A50:6F65
cs=0x3a50;eip=0x006f66; 	X(POP(di));	// 84977                  pop     di ;~ 3A50:6F66
cs=0x3a50;eip=0x006f67; 	T(sp = bp;);	// 84978                  mov     sp, bp ;~ 3A50:6F67
cs=0x3a50;eip=0x006f69; 	X(POP(bp));	// 84979                  pop     bp ;~ 3A50:6F69
cs=0x3a50;eip=0x006f6a; 	J(RETF(0));	// 84980                  retf ;~ 3A50:6F6A
loc_4fa4b:
	// 7423 
cs=0x3a50;eip=0x006f6b; 	X(POP(ds));	// 84984                  pop     ds ;~ 3A50:6F6B
cs=0x3a50;eip=0x006f6c; 	X(POP(es));	// 84985                  pop     es ;~ 3A50:6F6C
cs=0x3a50;eip=0x006f6d; 	J(RETF(0));	// 84986                  retf ;~ 3A50:6F6D
ret_3a50_6f6e:
	// 7424 
cs=0x3a50;eip=0x006f6e; 	X(PUSH(bp));	// 84988                  push    bp ;~ 3A50:6F6E
cs=0x3a50;eip=0x006f6f; 	T(bp = sp;);	// 84989                  mov     bp, sp ;~ 3A50:6F6F
cs=0x3a50;eip=0x006f71; 	X(PUSH(di));	// 84990                  push    di ;~ 3A50:6F71
cs=0x3a50;eip=0x006f72; 	X(PUSH(si));	// 84991                  push    si ;~ 3A50:6F72
cs=0x3a50;eip=0x006f73; 	X(PUSH(es));	// 84992                  push    es ;~ 3A50:6F73
cs=0x3a50;eip=0x006f74; 	X(PUSH(ds));	// 84993                  push    ds ;~ 3A50:6F74
cs=0x3a50;eip=0x006f75; 	X(PUSH(bp));	// 84994                  push    bp ;~ 3A50:6F75
cs=0x3a50;eip=0x006f76; 	T(ax = 0x4C7A;);	// 84995                  mov     ax, 4C7Ah ;~ 3A50:6F76
cs=0x3a50;eip=0x006f79; 	T(ds = ax;);	// 84996                  mov     ds, ax ;~ 3A50:6F79
cs=0x3a50;eip=0x006f7b; 	X(*((arangeradar)+0x0B) = 0;);	// 84998                  mov     byte ptr ds:aRangeRadar+0Bh, 0 ; "r" ;~ 3A50:6F7B
cs=0x3a50;eip=0x006f80; 	T(MOV(bp, *(dw*)(raddr(ss,bp+6))));	// 84999                  mov     bp, [bp+6] ;~ 3A50:6F80
cs=0x3a50;eip=0x006f83; 	J(JMP(loc_4fa72));	// 85000                  jmp     short loc_4FA72 ;~ 3A50:6F83
loc_4fa66:
	// 7425 
cs=0x3a50;eip=0x006f86; 	X(PUSH(es));	// 85006                  push    es ;~ 3A50:6F86
cs=0x3a50;eip=0x006f87; 	X(PUSH(ds));	// 85007                  push    ds ;~ 3A50:6F87
cs=0x3a50;eip=0x006f88; 	T(ax = 0x4C7A;);	// 85008                  mov     ax, 4C7Ah ;~ 3A50:6F88
cs=0x3a50;eip=0x006f8b; 	T(ds = ax;);	// 85009                  mov     ds, ax ;~ 3A50:6F8B
cs=0x3a50;eip=0x006f8d; 	X(*((arangeradar)+0x0B) = 1;);	// 85010                  mov     byte ptr ds:aRangeRadar+0Bh, 1 ; "r" ;~ 3A50:6F8D
loc_4fa72:
	// 7426 
cs=0x3a50;eip=0x006f92; 	T(dx = 0x3CE;);	// 85013                  mov     dx, 3CEh ;~ 3A50:6F92
cs=0x3a50;eip=0x006f95; 	T(ax = 2;);	// 85014                  mov     ax, 2 ;~ 3A50:6F95
cs=0x3a50;eip=0x006f98; 	X(*((amsruntimelibra)+5) = ah;);	// 85015                  mov     byte ptr cs:aMsRunTimeLibra+5, ah ; "n-Time Library - Copyright (c) 1988, Mi"... ;~ 3A50:6F98
cs=0x3a50;eip=0x006f9d; 	S(OUT(dx, ax));	// 85016                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:6F9D
cs=0x3a50;eip=0x006f9e; 	T(ax = 3;);	// 85019                  mov     ax, 3 ;~ 3A50:6F9E
cs=0x3a50;eip=0x006fa1; 	S(OUT(dx, ax));	// 85020                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:6FA1
cs=0x3a50;eip=0x006fa2; 	T(cl = 3;);	// 85025                  mov     cl, 3 ;~ 3A50:6FA2
cs=0x3a50;eip=0x006fa4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0A))));	// 85026                  mov     bx, [bp+0Ah] ;~ 3A50:6FA4
cs=0x3a50;eip=0x006fa7; 	T(SHL(bx, 1));	// 85027                  shl     bx, 1 ;~ 3A50:6FA7
cs=0x3a50;eip=0x006fa9; 	T(MOV(di, *(dw*)(raddr(ds,bx+0x2CC))));	// 85028                  mov     di, [bx+2CCh] ;~ 3A50:6FA9
cs=0x3a50;eip=0x006fad; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 85029                  mov     ax, [bp+8] ;~ 3A50:6FAD
cs=0x3a50;eip=0x006fb0; 	T(SHR(ax, cl));	// 85030                  shr     ax, cl ;~ 3A50:6FB0
cs=0x3a50;eip=0x006fb2; 	T(ADD(di, ax));	// 85031                  add     di, ax ;~ 3A50:6FB2
cs=0x3a50;eip=0x006fb4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+4))));	// 85032                  mov     bx, [bp+4] ;~ 3A50:6FB4
cs=0x3a50;eip=0x006fb7; 	T(SHL(bx, 1));	// 85033                  shl     bx, 1 ;~ 3A50:6FB7
cs=0x3a50;eip=0x006fb9; 	T(MOV(si, *(dw*)(raddr(ds,bx+0x2CC))));	// 85034                  mov     si, [bx+2CCh] ;~ 3A50:6FB9
cs=0x3a50;eip=0x006fbd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+2))));	// 85035                  mov     ax, [bp+2] ;~ 3A50:6FBD
cs=0x3a50;eip=0x006fc0; 	T(SHR(ax, cl));	// 85036                  shr     ax, cl ;~ 3A50:6FC0
cs=0x3a50;eip=0x006fc2; 	T(ADD(si, ax));	// 85037                  add     si, ax ;~ 3A50:6FC2
cs=0x3a50;eip=0x006fc4; 	T(DEC(si));	// 85038                  dec     si ;~ 3A50:6FC4
cs=0x3a50;eip=0x006fc5; 	T(MOV(cx, *(dw*)(raddr(ss,bp+8))));	// 85039                  mov     cx, [bp+8] ;~ 3A50:6FC5
cs=0x3a50;eip=0x006fc8; 	T(AND(cl, 7));	// 85040                  and     cl, 7 ;~ 3A50:6FC8
cs=0x3a50;eip=0x006fcb; 	T(bl = 0x0FF;);	// 85041                  mov     bl, 0FFh ;~ 3A50:6FCB
cs=0x3a50;eip=0x006fcd; 	T(SHR(bl, cl));	// 85042                  shr     bl, cl ;~ 3A50:6FCD
cs=0x3a50;eip=0x006fcf; 	T(MOV(cx, *(dw*)(raddr(ss,bp+8))));	// 85043                  mov     cx, [bp+8] ;~ 3A50:6FCF
cs=0x3a50;eip=0x006fd2; 	T(ADD(cx, *(dw*)(raddr(ss,bp+0x0C))));	// 85044                  add     cx, [bp+0Ch] ;~ 3A50:6FD2
cs=0x3a50;eip=0x006fd5; 	T(DEC(cx));	// 85045                  dec     cx ;~ 3A50:6FD5
cs=0x3a50;eip=0x006fd6; 	T(AND(cl, 7));	// 85046                  and     cl, 7 ;~ 3A50:6FD6
cs=0x3a50;eip=0x006fd9; 	T(ax = 0x0FF80;);	// 85047                  mov     ax, 0FF80h ;~ 3A50:6FD9
cs=0x3a50;eip=0x006fdc; 	T(SHR(ax, cl));	// 85048                  shr     ax, cl ;~ 3A50:6FDC
cs=0x3a50;eip=0x006fde; 	T(bh = al;);	// 85049                  mov     bh, al ;~ 3A50:6FDE
cs=0x3a50;eip=0x006fe0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 85050                  mov     ax, [bp+8] ;~ 3A50:6FE0
cs=0x3a50;eip=0x006fe3; 	T(AND(ax, 7));	// 85051                  and     ax, 7 ;~ 3A50:6FE3
cs=0x3a50;eip=0x006fe6; 	T(ADD(ax, *(dw*)(raddr(ss,bp+0x0C))));	// 85052                  add     ax, [bp+0Ch] ;~ 3A50:6FE6
cs=0x3a50;eip=0x006fe9; 	T(DEC(ax));	// 85053                  dec     ax ;~ 3A50:6FE9
cs=0x3a50;eip=0x006fea; 	T(SHR(ax, 1));	// 85054                  shr     ax, 1 ;~ 3A50:6FEA
cs=0x3a50;eip=0x006fec; 	T(SHR(ax, 1));	// 85055                  shr     ax, 1 ;~ 3A50:6FEC
cs=0x3a50;eip=0x006fee; 	T(SHR(ax, 1));	// 85056                  shr     ax, 1 ;~ 3A50:6FEE
cs=0x3a50;eip=0x006ff0; 	T(ch = al;);	// 85057                  mov     ch, al ;~ 3A50:6FF0
cs=0x3a50;eip=0x006ff2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 85058                  mov     ax, [bp+8] ;~ 3A50:6FF2
cs=0x3a50;eip=0x006ff5; 	T(AND(al, 7));	// 85059                  and     al, 7 ;~ 3A50:6FF5
cs=0x3a50;eip=0x006ff7; 	T(MOV(dx, *(dw*)(raddr(ss,bp+2))));	// 85060                  mov     dx, [bp+2] ;~ 3A50:6FF7
cs=0x3a50;eip=0x006ffa; 	T(AND(dl, 7));	// 85061                  and     dl, 7 ;~ 3A50:6FFA
cs=0x3a50;eip=0x006ffd; 	T(SUB(al, dl));	// 85062                  sub     al, dl ;~ 3A50:6FFD
cs=0x3a50;eip=0x006fff; 	J(JS(loc_4fae4));	// 85063                  js      short loc_4FAE4 ;~ 3A50:6FFF
cs=0x3a50;eip=0x007001; 	J(JMP(loc_4fc3d));	// 85064                  jmp     loc_4FC3D ;~ 3A50:7001
loc_4fae4:
	// 7427 
cs=0x3a50;eip=0x007004; 	T(NEG(al));	// 85068                  neg     al ;~ 3A50:7004
cs=0x3a50;eip=0x007006; 	T(INC(si));	// 85069                  inc     si ;~ 3A50:7006
cs=0x3a50;eip=0x007007; 	T(cl = al;);	// 85070                  mov     cl, al ;~ 3A50:7007
cs=0x3a50;eip=0x007009; 	X(PUSH(di));	// 85071                  push    di ;~ 3A50:7009
cs=0x3a50;eip=0x00700a; 	T(MOV(di, *(dw*)(raddr(ss,bp+0))));	// 85072                  mov     di, [bp+0] ;~ 3A50:700A
cs=0x3a50;eip=0x00700d; 	T(ds = di;);	// 85073                  mov     ds, di ;~ 3A50:700D
cs=0x3a50;eip=0x00700f; 	T(MOV(di, *(dw*)(raddr(ss,bp+6))));	// 85075                  mov     di, [bp+6] ;~ 3A50:700F
cs=0x3a50;eip=0x007012; 	T(SHL(di, 1));	// 85076                  shl     di, 1 ;~ 3A50:7012
cs=0x3a50;eip=0x007014; 	T(MOV(es, *(dw*)(raddr(cs,di+0x0A72))));	// 85077                  mov     es, word ptr cs:[di+0A72h] ;~ 3A50:7014
cs=0x3a50;eip=0x007019; 	X(POP(di));	// 85078                  pop     di ;~ 3A50:7019
cs=0x3a50;eip=0x00701a; 	T(ah = 3;);	// 85079                  mov     ah, 3 ;~ 3A50:701A
loc_4fafc:
	// 7428 
cs=0x3a50;eip=0x00701c; 	X(PUSH(ax));	// 85082                  push    ax ;~ 3A50:701C
cs=0x3a50;eip=0x00701d; 	X(PUSH(bp));	// 85083                  push    bp ;~ 3A50:701D
cs=0x3a50;eip=0x00701e; 	X(PUSH(si));	// 85084                  push    si ;~ 3A50:701E
cs=0x3a50;eip=0x00701f; 	X(PUSH(di));	// 85085                  push    di ;~ 3A50:701F
cs=0x3a50;eip=0x007020; 	T(dx = 0x3CE;);	// 85086                  mov     dx, 3CEh ;~ 3A50:7020
cs=0x3a50;eip=0x007023; 	T(al = 4;);	// 85087                  mov     al, 4 ;~ 3A50:7023
cs=0x3a50;eip=0x007025; 	X(*((amsruntimelibra)+7) = ah;);	// 85088                  mov     byte ptr cs:aMsRunTimeLibra+7, ah ; "Time Library - Copyright (c) 1988, Micr"... ;~ 3A50:7025
cs=0x3a50;eip=0x00702a; 	S(OUT(dx, ax));	// 85089                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:702A
cs=0x3a50;eip=0x00702b; 	T(XCHG(dx, bx));	// 85091                  xchg    dx, bx ;~ 3A50:702B
cs=0x3a50;eip=0x00702d; 	T(bl = ah;);	// 85092                  mov     bl, ah ;~ 3A50:702D
cs=0x3a50;eip=0x00702f; 	T(SUB(bh, bh));	// 85093                  sub     bh, bh ;~ 3A50:702F
cs=0x3a50;eip=0x007031; 	T(al = 2;);	// 85094                  mov     al, 2 ;~ 3A50:7031
cs=0x3a50;eip=0x007033; 	T(MOV(ah, *(raddr(cs,bx+0x108E))));	// 85095                  mov     ah, cs:[bx+108Eh] ;~ 3A50:7033
cs=0x3a50;eip=0x007038; 	T(XCHG(dx, bx));	// 85096                  xchg    dx, bx ;~ 3A50:7038
cs=0x3a50;eip=0x00703a; 	T(dx = 0x3C4;);	// 85097                  mov     dx, 3C4h ;~ 3A50:703A
cs=0x3a50;eip=0x00703d; 	X(*((amsruntimelibra)+2) = ah;);	// 85098                  mov     byte ptr cs:aMsRunTimeLibra+2, ah ; " Run-Time Library - Copyright (c) 1988,"... ;~ 3A50:703D
cs=0x3a50;eip=0x007042; 	S(OUT(dx, ax));	// 85099                  out     dx, ax          ; EGA: sequencer address reg ;~ 3A50:7042
cs=0x3a50;eip=0x007043; 	T(MOV(bp, *(dw*)(raddr(ss,bp+0x0E))));	// 85102                  mov     bp, [bp+0Eh] ;~ 3A50:7043
loc_4fb26:
	// 7429 
cs=0x3a50;eip=0x007046; 	X(PUSH(si));	// 85105                  push    si ;~ 3A50:7046
cs=0x3a50;eip=0x007047; 	X(PUSH(di));	// 85106                  push    di ;~ 3A50:7047
cs=0x3a50;eip=0x007048; 	X(PUSH(cx));	// 85107                  push    cx ;~ 3A50:7048
cs=0x3a50;eip=0x007049; 	T(ah = bl;);	// 85108                  mov     ah, bl ;~ 3A50:7049
cs=0x3a50;eip=0x00704b; 	T(OR(ch, ch));	// 85109                  or      ch, ch ;~ 3A50:704B
cs=0x3a50;eip=0x00704d; 	J(JZ(loc_4fba7));	// 85110                  jz      short loc_4FBA7 ;~ 3A50:704D
cs=0x3a50;eip=0x00704f; 	T(dx = 0x3CE;);	// 85111                  mov     dx, 3CEh ;~ 3A50:704F
cs=0x3a50;eip=0x007052; 	T(ax = 0x805;);	// 85112                  mov     ax, 805h ;~ 3A50:7052
cs=0x3a50;eip=0x007055; 	X(*((amsruntimelibra)+8) = ah;);	// 85113                  mov     byte ptr cs:aMsRunTimeLibra+8, ah ; "ime Library - Copyright (c) 1988, Micro"... ;~ 3A50:7055
cs=0x3a50;eip=0x00705a; 	S(OUT(dx, ax));	// 85114                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:705A
cs=0x3a50;eip=0x00705b; 	T(MOV(ah, *(raddr(ds,si))));	// 85116                  mov     ah, [si] ;~ 3A50:705B
cs=0x3a50;eip=0x00705d; 	T(MOV(al, *(raddr(ds,si+1))));	// 85117                  mov     al, [si+1] ;~ 3A50:705D
cs=0x3a50;eip=0x007060; 	T(SHL(ax, cl));	// 85118                  shl     ax, cl ;~ 3A50:7060
cs=0x3a50;eip=0x007062; 	T(NOT(ah));	// 85119                  not     ah ;~ 3A50:7062
cs=0x3a50;eip=0x007064; 	T(AND(ah, bl));	// 85120                  and     ah, bl ;~ 3A50:7064
cs=0x3a50;eip=0x007066; 	T(al = 8;);	// 85121                  mov     al, 8 ;~ 3A50:7066
cs=0x3a50;eip=0x007068; 	X(*((amsruntimelibra)+9) = ah;);	// 85122                  mov     byte ptr cs:aMsRunTimeLibra+9, ah ; "me Library - Copyright (c) 1988, Micros"... ;~ 3A50:7068
cs=0x3a50;eip=0x00706d; 	S(OUT(dx, ax));	// 85123                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:706D
cs=0x3a50;eip=0x00706e; 	T(ax = 5;);	// 85126                  mov     ax, 5 ;~ 3A50:706E
cs=0x3a50;eip=0x007071; 	X(*((amsruntimelibra)+8) = ah;);	// 85127                  mov     byte ptr cs:aMsRunTimeLibra+8, ah ; "ime Library - Copyright (c) 1988, Micro"... ;~ 3A50:7071
cs=0x3a50;eip=0x007076; 	S(OUT(dx, ax));	// 85128                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:7076
cs=0x3a50;eip=0x007077; 	T(ah = bl;);	// 85135                  mov     ah, bl ;~ 3A50:7077
cs=0x3a50;eip=0x007079; 	T(MOV(dx, *(dw*)(raddr(ds,si))));	// 85136                  mov     dx, [si] ;~ 3A50:7079
cs=0x3a50;eip=0x00707b; 	T(XCHG(dl, dh));	// 85137                  xchg    dl, dh ;~ 3A50:707B
cs=0x3a50;eip=0x00707d; 	T(SHL(dx, cl));	// 85138                  shl     dx, cl ;~ 3A50:707D
cs=0x3a50;eip=0x00707f; 	T(AND(dh, ah));	// 85139                  and     dh, ah ;~ 3A50:707F
cs=0x3a50;eip=0x007081; 	T(NOT(ah));	// 85140                  not     ah ;~ 3A50:7081
cs=0x3a50;eip=0x007083; 	T(AND(ah, *(raddr(es,di))));	// 85141                  and     ah, es:[di] ;~ 3A50:7083
cs=0x3a50;eip=0x007086; 	T(OR(ah, dh));	// 85142                  or      ah, dh ;~ 3A50:7086
cs=0x3a50;eip=0x007088; 	T(al = ah;);	// 85143                  mov     al, ah ;~ 3A50:7088
cs=0x3a50;eip=0x00708a; 	X(STOSB);	// 85144                  stosb ;~ 3A50:708A
cs=0x3a50;eip=0x00708b; 	J(JMP(loc_4fba0));	// 85145                  jmp     short loc_4FBA0 ;~ 3A50:708B
loc_4fb6e:
	// 7430 
cs=0x3a50;eip=0x00708e; 	T(dx = 0x3CE;);	// 85151                  mov     dx, 3CEh ;~ 3A50:708E
cs=0x3a50;eip=0x007091; 	T(ax = 0x805;);	// 85152                  mov     ax, 805h ;~ 3A50:7091
cs=0x3a50;eip=0x007094; 	X(*((amsruntimelibra)+8) = ah;);	// 85153                  mov     byte ptr cs:aMsRunTimeLibra+8, ah ; "ime Library - Copyright (c) 1988, Micro"... ;~ 3A50:7094
cs=0x3a50;eip=0x007099; 	S(OUT(dx, ax));	// 85154                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:7099
cs=0x3a50;eip=0x00709a; 	T(MOV(ah, *(raddr(ds,si))));	// 85156                  mov     ah, [si] ;~ 3A50:709A
cs=0x3a50;eip=0x00709c; 	T(MOV(al, *(raddr(ds,si+1))));	// 85157                  mov     al, [si+1] ;~ 3A50:709C
cs=0x3a50;eip=0x00709f; 	T(SHL(ax, cl));	// 85158                  shl     ax, cl ;~ 3A50:709F
cs=0x3a50;eip=0x0070a1; 	T(NOT(ah));	// 85159                  not     ah ;~ 3A50:70A1
cs=0x3a50;eip=0x0070a3; 	T(al = 8;);	// 85160                  mov     al, 8 ;~ 3A50:70A3
cs=0x3a50;eip=0x0070a5; 	X(*((amsruntimelibra)+9) = ah;);	// 85161                  mov     byte ptr cs:aMsRunTimeLibra+9, ah ; "me Library - Copyright (c) 1988, Micros"... ;~ 3A50:70A5
loc_4fb8a:
	// 7431 
cs=0x3a50;eip=0x0070aa; 	S(OUT(dx, ax));	// 85165                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:70AA
loc_4fb8b:
	// 7432 
cs=0x3a50;eip=0x0070ab; 	T(ax = 5;);	// 85171                  mov     ax, 5 ;~ 3A50:70AB
cs=0x3a50;eip=0x0070ae; 	X(*((amsruntimelibra)+8) = ah;);	// 85172                  mov     byte ptr cs:aMsRunTimeLibra+8, ah ; "ime Library - Copyright (c) 1988, Micro"... ;~ 3A50:70AE
cs=0x3a50;eip=0x0070b3; 	S(OUT(dx, ax));	// 85173                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:70B3
cs=0x3a50;eip=0x0070b4; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 85180                  mov     ax, [si] ;~ 3A50:70B4
cs=0x3a50;eip=0x0070b6; 	T(XCHG(ah, al));	// 85181                  xchg    ah, al ;~ 3A50:70B6
cs=0x3a50;eip=0x0070b8; 	T(SHL(ax, cl));	// 85182                  shl     ax, cl ;~ 3A50:70B8
cs=0x3a50;eip=0x0070ba; 	T(al = ah;);	// 85183                  mov     al, ah ;~ 3A50:70BA
cs=0x3a50;eip=0x0070bc; 	T(TEST(*(raddr(es,di)), al));	// 85184                  test    es:[di], al ;~ 3A50:70BC
cs=0x3a50;eip=0x0070bf; 	X(STOSB);	// 85185                  stosb ;~ 3A50:70BF
loc_4fba0:
	// 7433 
cs=0x3a50;eip=0x0070c0; 	T(INC(si));	// 85188                  inc     si ;~ 3A50:70C0
cs=0x3a50;eip=0x0070c1; 	T(DEC(ch));	// 85189                  dec     ch ;~ 3A50:70C1
cs=0x3a50;eip=0x0070c3; 	J(JNZ(loc_4fb6e));	// 85190                  jnz     short loc_4FB6E ;~ 3A50:70C3
cs=0x3a50;eip=0x0070c5; 	T(ah = 0x0FF;);	// 85191                  mov     ah, 0FFh ;~ 3A50:70C5
loc_4fba7:
	// 7434 
cs=0x3a50;eip=0x0070c7; 	T(AND(ah, bh));	// 85194                  and     ah, bh ;~ 3A50:70C7
cs=0x3a50;eip=0x0070c9; 	X(PUSH(ax));	// 85195                  push    ax ;~ 3A50:70C9
cs=0x3a50;eip=0x0070ca; 	X(PUSH(bx));	// 85196                  push    bx ;~ 3A50:70CA
cs=0x3a50;eip=0x0070cb; 	T(bl = ah;);	// 85197                  mov     bl, ah ;~ 3A50:70CB
cs=0x3a50;eip=0x0070cd; 	T(dx = 0x3CE;);	// 85198                  mov     dx, 3CEh ;~ 3A50:70CD
cs=0x3a50;eip=0x0070d0; 	T(ax = 0x805;);	// 85199                  mov     ax, 805h ;~ 3A50:70D0
cs=0x3a50;eip=0x0070d3; 	X(*((amsruntimelibra)+8) = ah;);	// 85200                  mov     byte ptr cs:aMsRunTimeLibra+8, ah ; "ime Library - Copyright (c) 1988, Micro"... ;~ 3A50:70D3
cs=0x3a50;eip=0x0070d8; 	S(OUT(dx, ax));	// 85201                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:70D8
cs=0x3a50;eip=0x0070d9; 	T(MOV(ah, *(raddr(ds,si))));	// 85203                  mov     ah, [si] ;~ 3A50:70D9
cs=0x3a50;eip=0x0070db; 	T(MOV(al, *(raddr(ds,si+1))));	// 85204                  mov     al, [si+1] ;~ 3A50:70DB
cs=0x3a50;eip=0x0070de; 	T(SHL(ax, cl));	// 85205                  shl     ax, cl ;~ 3A50:70DE
cs=0x3a50;eip=0x0070e0; 	T(NOT(ah));	// 85206                  not     ah ;~ 3A50:70E0
cs=0x3a50;eip=0x0070e2; 	T(AND(ah, bl));	// 85207                  and     ah, bl ;~ 3A50:70E2
cs=0x3a50;eip=0x0070e4; 	T(al = 8;);	// 85208                  mov     al, 8 ;~ 3A50:70E4
cs=0x3a50;eip=0x0070e6; 	X(*((amsruntimelibra)+9) = ah;);	// 85209                  mov     byte ptr cs:aMsRunTimeLibra+9, ah ; "me Library - Copyright (c) 1988, Micros"... ;~ 3A50:70E6
cs=0x3a50;eip=0x0070eb; 	S(OUT(dx, ax));	// 85210                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:70EB
cs=0x3a50;eip=0x0070ec; 	T(ax = 5;);	// 85213                  mov     ax, 5 ;~ 3A50:70EC
cs=0x3a50;eip=0x0070ef; 	X(*((amsruntimelibra)+8) = ah;);	// 85214                  mov     byte ptr cs:aMsRunTimeLibra+8, ah ; "ime Library - Copyright (c) 1988, Micro"... ;~ 3A50:70EF
cs=0x3a50;eip=0x0070f4; 	S(OUT(dx, ax));	// 85215                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:70F4
cs=0x3a50;eip=0x0070f5; 	X(POP(bx));	// 85222                  pop     bx ;~ 3A50:70F5
cs=0x3a50;eip=0x0070f6; 	X(POP(ax));	// 85223                  pop     ax ;~ 3A50:70F6
cs=0x3a50;eip=0x0070f7; 	T(MOV(dx, *(dw*)(raddr(ds,si))));	// 85224                  mov     dx, [si] ;~ 3A50:70F7
cs=0x3a50;eip=0x0070f9; 	T(XCHG(dh, dl));	// 85225                  xchg    dh, dl ;~ 3A50:70F9
cs=0x3a50;eip=0x0070fb; 	T(SHL(dx, cl));	// 85226                  shl     dx, cl ;~ 3A50:70FB
cs=0x3a50;eip=0x0070fd; 	T(AND(dh, ah));	// 85227                  and     dh, ah ;~ 3A50:70FD
cs=0x3a50;eip=0x0070ff; 	T(NOT(ah));	// 85228                  not     ah ;~ 3A50:70FF
cs=0x3a50;eip=0x007101; 	T(AND(ah, *(raddr(es,di))));	// 85229                  and     ah, es:[di] ;~ 3A50:7101
cs=0x3a50;eip=0x007104; 	T(OR(ah, dh));	// 85230                  or      ah, dh ;~ 3A50:7104
cs=0x3a50;eip=0x007106; 	T(al = ah;);	// 85231                  mov     al, ah ;~ 3A50:7106
cs=0x3a50;eip=0x007108; 	X(STOSB);	// 85232                  stosb ;~ 3A50:7108
cs=0x3a50;eip=0x007109; 	X(POP(cx));	// 85233                  pop     cx ;~ 3A50:7109
cs=0x3a50;eip=0x00710a; 	X(POP(di));	// 85234                  pop     di ;~ 3A50:710A
cs=0x3a50;eip=0x00710b; 	X(POP(si));	// 85235                  pop     si ;~ 3A50:710B
cs=0x3a50;eip=0x00710c; 	T(ADD(di, 0x28));	// 85236                  add     di, 28h ; '(' ;~ 3A50:710C
cs=0x3a50;eip=0x00710f; 	T(ADD(si, 0x28));	// 85237                  add     si, 28h ; '(' ;~ 3A50:710F
cs=0x3a50;eip=0x007112; 	T(DEC(bp));	// 85238                  dec     bp ;~ 3A50:7112
cs=0x3a50;eip=0x007113; 	J(JZ(loc_4fbf8));	// 85239                  jz      short loc_4FBF8 ;~ 3A50:7113
cs=0x3a50;eip=0x007115; 	J(JMP(loc_4fb26));	// 85240                  jmp     loc_4FB26 ;~ 3A50:7115
loc_4fbf8:
	// 7435 
cs=0x3a50;eip=0x007118; 	X(POP(di));	// 85244                  pop     di ;~ 3A50:7118
cs=0x3a50;eip=0x007119; 	X(POP(si));	// 85245                  pop     si ;~ 3A50:7119
cs=0x3a50;eip=0x00711a; 	X(POP(bp));	// 85246                  pop     bp ;~ 3A50:711A
cs=0x3a50;eip=0x00711b; 	X(POP(ax));	// 85247                  pop     ax ;~ 3A50:711B
cs=0x3a50;eip=0x00711c; 	T(DEC(ah));	// 85248                  dec     ah ;~ 3A50:711C
cs=0x3a50;eip=0x00711e; 	J(JS(loc_4fc03));	// 85249                  js      short loc_4FC03 ;~ 3A50:711E
cs=0x3a50;eip=0x007120; 	J(JMP(loc_4fafc));	// 85250                  jmp     loc_4FAFC ;~ 3A50:7120
loc_4fc03:
	// 7436 
cs=0x3a50;eip=0x007123; 	T(STI);	// 85255                  sti ;~ 3A50:7123
cs=0x3a50;eip=0x007124; 	T(ax = 0x4C7A;);	// 85256                  mov     ax, 4C7Ah ;~ 3A50:7124
cs=0x3a50;eip=0x007127; 	T(ds = ax;);	// 85257                  mov     ds, ax ;~ 3A50:7127
cs=0x3a50;eip=0x007129; 	T(dx = 0x3CE;);	// 85259                  mov     dx, 3CEh ;~ 3A50:7129
cs=0x3a50;eip=0x00712c; 	T(ax = 1;);	// 85260                  mov     ax, 1 ;~ 3A50:712C
cs=0x3a50;eip=0x00712f; 	X(*((amsruntimelibra)+4) = ah;);	// 85261                  mov     byte ptr cs:aMsRunTimeLibra+4, ah ; "un-Time Library - Copyright (c) 1988, M"... ;~ 3A50:712F
cs=0x3a50;eip=0x007134; 	S(OUT(dx, ax));	// 85262                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:7134
cs=0x3a50;eip=0x007135; 	T(ax = 0x0FF08;);	// 85264                  mov     ax, 0FF08h ;~ 3A50:7135
cs=0x3a50;eip=0x007138; 	X(*((amsruntimelibra)+9) = ah;);	// 85265                  mov     byte ptr cs:aMsRunTimeLibra+9, ah ; "me Library - Copyright (c) 1988, Micros"... ;~ 3A50:7138
cs=0x3a50;eip=0x00713d; 	S(OUT(dx, ax));	// 85266                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:713D
cs=0x3a50;eip=0x00713e; 	T(dx = 0x3C4;);	// 85268                  mov     dx, 3C4h ;~ 3A50:713E
cs=0x3a50;eip=0x007141; 	T(ax = 0x0F02;);	// 85269                  mov     ax, 0F02h ;~ 3A50:7141
cs=0x3a50;eip=0x007144; 	X(*((amsruntimelibra)+2) = ah;);	// 85270                  mov     byte ptr cs:aMsRunTimeLibra+2, ah ; " Run-Time Library - Copyright (c) 1988,"... ;~ 3A50:7144
cs=0x3a50;eip=0x007149; 	S(OUT(dx, ax));	// 85271                  out     dx, ax          ; EGA: sequencer address reg ;~ 3A50:7149
cs=0x3a50;eip=0x00714a; 	T(CMP(*((arangeradar)+0x0B), 0));	// 85273                  cmp     byte ptr ds:aRangeRadar+0Bh, 0 ; "r" ;~ 3A50:714A
cs=0x3a50;eip=0x00714f; 	J(JNZ(loc_4fc3a));	// 85274                  jnz     short loc_4FC3A ;~ 3A50:714F
cs=0x3a50;eip=0x007151; 	X(POP(bp));	// 85275                  pop     bp ;~ 3A50:7151
cs=0x3a50;eip=0x007152; 	X(POP(ds));	// 85276                  pop     ds ;~ 3A50:7152
cs=0x3a50;eip=0x007153; 	X(POP(es));	// 85278                  pop     es ;~ 3A50:7153
cs=0x3a50;eip=0x007154; 	X(POP(si));	// 85279                  pop     si ;~ 3A50:7154
cs=0x3a50;eip=0x007155; 	X(POP(di));	// 85280                  pop     di ;~ 3A50:7155
cs=0x3a50;eip=0x007156; 	T(sp = bp;);	// 85281                  mov     sp, bp ;~ 3A50:7156
cs=0x3a50;eip=0x007158; 	X(POP(bp));	// 85282                  pop     bp ;~ 3A50:7158
cs=0x3a50;eip=0x007159; 	J(RETF(0));	// 85283                  retf ;~ 3A50:7159
loc_4fc3a:
	// 7437 
cs=0x3a50;eip=0x00715a; 	X(POP(ds));	// 85287                  pop     ds ;~ 3A50:715A
cs=0x3a50;eip=0x00715b; 	X(POP(es));	// 85288                  pop     es ;~ 3A50:715B
cs=0x3a50;eip=0x00715c; 	J(RETF(0));	// 85289                  retf ;~ 3A50:715C
loc_4fc3d:
	// 7438 
cs=0x3a50;eip=0x00715d; 	T(cl = al;);	// 85293                  mov     cl, al ;~ 3A50:715D
cs=0x3a50;eip=0x00715f; 	X(PUSH(di));	// 85294                  push    di ;~ 3A50:715F
cs=0x3a50;eip=0x007160; 	T(MOV(di, *(dw*)(raddr(ss,bp+0))));	// 85295                  mov     di, [bp+0] ;~ 3A50:7160
cs=0x3a50;eip=0x007163; 	T(ds = di;);	// 85296                  mov     ds, di ;~ 3A50:7163
cs=0x3a50;eip=0x007165; 	T(MOV(di, *(dw*)(raddr(ss,bp+6))));	// 85297                  mov     di, [bp+6] ;~ 3A50:7165
cs=0x3a50;eip=0x007168; 	T(SHL(di, 1));	// 85298                  shl     di, 1 ;~ 3A50:7168
cs=0x3a50;eip=0x00716a; 	T(MOV(es, *(dw*)(raddr(cs,di+0x0A72))));	// 85299                  mov     es, word ptr cs:[di+0A72h] ;~ 3A50:716A
cs=0x3a50;eip=0x00716f; 	X(POP(di));	// 85300                  pop     di ;~ 3A50:716F
cs=0x3a50;eip=0x007170; 	T(ah = 3;);	// 85301                  mov     ah, 3 ;~ 3A50:7170
loc_4fc52:
	// 7439 
cs=0x3a50;eip=0x007172; 	X(PUSH(ax));	// 85304                  push    ax ;~ 3A50:7172
cs=0x3a50;eip=0x007173; 	X(PUSH(bp));	// 85305                  push    bp ;~ 3A50:7173
cs=0x3a50;eip=0x007174; 	X(PUSH(si));	// 85306                  push    si ;~ 3A50:7174
cs=0x3a50;eip=0x007175; 	X(PUSH(di));	// 85307                  push    di ;~ 3A50:7175
cs=0x3a50;eip=0x007176; 	T(dx = 0x3CE;);	// 85308                  mov     dx, 3CEh ;~ 3A50:7176
cs=0x3a50;eip=0x007179; 	T(al = 4;);	// 85309                  mov     al, 4 ;~ 3A50:7179
cs=0x3a50;eip=0x00717b; 	X(*((amsruntimelibra)+7) = ah;);	// 85310                  mov     byte ptr cs:aMsRunTimeLibra+7, ah ; "Time Library - Copyright (c) 1988, Micr"... ;~ 3A50:717B
cs=0x3a50;eip=0x007180; 	S(OUT(dx, ax));	// 85311                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:7180
cs=0x3a50;eip=0x007181; 	T(XCHG(dx, bx));	// 85313                  xchg    dx, bx ;~ 3A50:7181
cs=0x3a50;eip=0x007183; 	T(bl = ah;);	// 85314                  mov     bl, ah ;~ 3A50:7183
cs=0x3a50;eip=0x007185; 	T(SUB(bh, bh));	// 85315                  sub     bh, bh ;~ 3A50:7185
cs=0x3a50;eip=0x007187; 	T(al = 2;);	// 85316                  mov     al, 2 ;~ 3A50:7187
cs=0x3a50;eip=0x007189; 	T(MOV(ah, *(raddr(cs,bx+0x108E))));	// 85317                  mov     ah, cs:[bx+108Eh] ;~ 3A50:7189
cs=0x3a50;eip=0x00718e; 	T(XCHG(dx, bx));	// 85318                  xchg    dx, bx ;~ 3A50:718E
cs=0x3a50;eip=0x007190; 	T(dx = 0x3C4;);	// 85319                  mov     dx, 3C4h ;~ 3A50:7190
cs=0x3a50;eip=0x007193; 	X(*((amsruntimelibra)+2) = ah;);	// 85320                  mov     byte ptr cs:aMsRunTimeLibra+2, ah ; " Run-Time Library - Copyright (c) 1988,"... ;~ 3A50:7193
cs=0x3a50;eip=0x007198; 	S(OUT(dx, ax));	// 85321                  out     dx, ax          ; EGA: sequencer address reg ;~ 3A50:7198
cs=0x3a50;eip=0x007199; 	T(MOV(bp, *(dw*)(raddr(ss,bp+0x0E))));	// 85324                  mov     bp, [bp+0Eh] ;~ 3A50:7199
loc_4fc7c:
	// 7440 
cs=0x3a50;eip=0x00719c; 	X(PUSH(si));	// 85327                  push    si ;~ 3A50:719C
cs=0x3a50;eip=0x00719d; 	X(PUSH(di));	// 85328                  push    di ;~ 3A50:719D
cs=0x3a50;eip=0x00719e; 	X(PUSH(cx));	// 85329                  push    cx ;~ 3A50:719E
cs=0x3a50;eip=0x00719f; 	T(al = bl;);	// 85330                  mov     al, bl ;~ 3A50:719F
cs=0x3a50;eip=0x0071a1; 	T(OR(ch, ch));	// 85331                  or      ch, ch ;~ 3A50:71A1
cs=0x3a50;eip=0x0071a3; 	J(JZ(loc_4fcfe));	// 85332                  jz      short loc_4FCFE ;~ 3A50:71A3
cs=0x3a50;eip=0x0071a5; 	T(dx = 0x3CE;);	// 85333                  mov     dx, 3CEh ;~ 3A50:71A5
cs=0x3a50;eip=0x0071a8; 	T(ax = 0x805;);	// 85334                  mov     ax, 805h ;~ 3A50:71A8
cs=0x3a50;eip=0x0071ab; 	X(*((amsruntimelibra)+8) = ah;);	// 85335                  mov     byte ptr cs:aMsRunTimeLibra+8, ah ; "ime Library - Copyright (c) 1988, Micro"... ;~ 3A50:71AB
cs=0x3a50;eip=0x0071b0; 	S(OUT(dx, ax));	// 85336                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:71B0
cs=0x3a50;eip=0x0071b1; 	T(MOV(ah, *(raddr(ds,si))));	// 85338                  mov     ah, [si] ;~ 3A50:71B1
cs=0x3a50;eip=0x0071b3; 	T(MOV(al, *(raddr(ds,si+1))));	// 85339                  mov     al, [si+1] ;~ 3A50:71B3
cs=0x3a50;eip=0x0071b6; 	T(SHR(ax, cl));	// 85340                  shr     ax, cl ;~ 3A50:71B6
cs=0x3a50;eip=0x0071b8; 	T(NOT(al));	// 85341                  not     al ;~ 3A50:71B8
cs=0x3a50;eip=0x0071ba; 	T(AND(al, bl));	// 85342                  and     al, bl ;~ 3A50:71BA
cs=0x3a50;eip=0x0071bc; 	T(ah = al;);	// 85343                  mov     ah, al ;~ 3A50:71BC
cs=0x3a50;eip=0x0071be; 	T(al = 8;);	// 85344                  mov     al, 8 ;~ 3A50:71BE
cs=0x3a50;eip=0x0071c0; 	X(*((amsruntimelibra)+9) = ah;);	// 85345                  mov     byte ptr cs:aMsRunTimeLibra+9, ah ; "me Library - Copyright (c) 1988, Micros"... ;~ 3A50:71C0
cs=0x3a50;eip=0x0071c5; 	S(OUT(dx, ax));	// 85346                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:71C5
cs=0x3a50;eip=0x0071c6; 	T(ax = 5;);	// 85349                  mov     ax, 5 ;~ 3A50:71C6
cs=0x3a50;eip=0x0071c9; 	X(*((amsruntimelibra)+8) = ah;);	// 85350                  mov     byte ptr cs:aMsRunTimeLibra+8, ah ; "ime Library - Copyright (c) 1988, Micro"... ;~ 3A50:71C9
cs=0x3a50;eip=0x0071ce; 	S(OUT(dx, ax));	// 85351                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:71CE
cs=0x3a50;eip=0x0071cf; 	T(al = bl;);	// 85358                  mov     al, bl ;~ 3A50:71CF
cs=0x3a50;eip=0x0071d1; 	T(MOV(dh, *(raddr(ds,si))));	// 85359                  mov     dh, [si] ;~ 3A50:71D1
cs=0x3a50;eip=0x0071d3; 	T(MOV(dl, *(raddr(ds,si+1))));	// 85360                  mov     dl, [si+1] ;~ 3A50:71D3
cs=0x3a50;eip=0x0071d6; 	T(SHR(dx, cl));	// 85361                  shr     dx, cl ;~ 3A50:71D6
cs=0x3a50;eip=0x0071d8; 	T(AND(dl, al));	// 85362                  and     dl, al ;~ 3A50:71D8
cs=0x3a50;eip=0x0071da; 	T(NOT(al));	// 85363                  not     al ;~ 3A50:71DA
cs=0x3a50;eip=0x0071dc; 	T(AND(al, *(raddr(es,di))));	// 85364                  and     al, es:[di] ;~ 3A50:71DC
cs=0x3a50;eip=0x0071df; 	T(OR(al, dl));	// 85365                  or      al, dl ;~ 3A50:71DF
cs=0x3a50;eip=0x0071e1; 	X(STOSB);	// 85366                  stosb ;~ 3A50:71E1
cs=0x3a50;eip=0x0071e2; 	J(JMP(loc_4fcf7));	// 85367                  jmp     short loc_4FCF7 ;~ 3A50:71E2
loc_4fcc5:
	// 7441 
cs=0x3a50;eip=0x0071e5; 	T(dx = 0x3CE;);	// 85373                  mov     dx, 3CEh ;~ 3A50:71E5
cs=0x3a50;eip=0x0071e8; 	T(ax = 0x805;);	// 85374                  mov     ax, 805h ;~ 3A50:71E8
cs=0x3a50;eip=0x0071eb; 	X(*((amsruntimelibra)+8) = ah;);	// 85375                  mov     byte ptr cs:aMsRunTimeLibra+8, ah ; "ime Library - Copyright (c) 1988, Micro"... ;~ 3A50:71EB
cs=0x3a50;eip=0x0071f0; 	S(OUT(dx, ax));	// 85376                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:71F0
cs=0x3a50;eip=0x0071f1; 	T(MOV(ah, *(raddr(ds,si))));	// 85378                  mov     ah, [si] ;~ 3A50:71F1
cs=0x3a50;eip=0x0071f3; 	T(MOV(al, *(raddr(ds,si+1))));	// 85379                  mov     al, [si+1] ;~ 3A50:71F3
cs=0x3a50;eip=0x0071f6; 	T(SHR(ax, cl));	// 85380                  shr     ax, cl ;~ 3A50:71F6
cs=0x3a50;eip=0x0071f8; 	T(NOT(al));	// 85381                  not     al ;~ 3A50:71F8
cs=0x3a50;eip=0x0071fa; 	T(ah = al;);	// 85382                  mov     ah, al ;~ 3A50:71FA
cs=0x3a50;eip=0x0071fc; 	T(al = 8;);	// 85383                  mov     al, 8 ;~ 3A50:71FC
cs=0x3a50;eip=0x0071fe; 	X(*((amsruntimelibra)+9) = ah;);	// 85384                  mov     byte ptr cs:aMsRunTimeLibra+9, ah ; "me Library - Copyright (c) 1988, Micros"... ;~ 3A50:71FE
cs=0x3a50;eip=0x007203; 	S(OUT(dx, ax));	// 85385                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:7203
cs=0x3a50;eip=0x007204; 	T(ax = 5;);	// 85388                  mov     ax, 5 ;~ 3A50:7204
cs=0x3a50;eip=0x007207; 	X(*((amsruntimelibra)+8) = ah;);	// 85389                  mov     byte ptr cs:aMsRunTimeLibra+8, ah ; "ime Library - Copyright (c) 1988, Micro"... ;~ 3A50:7207
cs=0x3a50;eip=0x00720c; 	S(OUT(dx, ax));	// 85390                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:720C
cs=0x3a50;eip=0x00720d; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 85397                  mov     ax, [si] ;~ 3A50:720D
cs=0x3a50;eip=0x00720f; 	T(XCHG(ah, al));	// 85398                  xchg    ah, al ;~ 3A50:720F
cs=0x3a50;eip=0x007211; 	T(SHR(ax, cl));	// 85399                  shr     ax, cl ;~ 3A50:7211
cs=0x3a50;eip=0x007213; 	T(TEST(*(raddr(es,di)), al));	// 85400                  test    es:[di], al ;~ 3A50:7213
cs=0x3a50;eip=0x007216; 	X(STOSB);	// 85401                  stosb ;~ 3A50:7216
loc_4fcf7:
	// 7442 
cs=0x3a50;eip=0x007217; 	T(INC(si));	// 85404                  inc     si ;~ 3A50:7217
cs=0x3a50;eip=0x007218; 	T(DEC(ch));	// 85405                  dec     ch ;~ 3A50:7218
cs=0x3a50;eip=0x00721a; 	J(JNZ(loc_4fcc5));	// 85406                  jnz     short loc_4FCC5 ;~ 3A50:721A
cs=0x3a50;eip=0x00721c; 	T(al = 0x0FF;);	// 85407                  mov     al, 0FFh ;~ 3A50:721C
loc_4fcfe:
	// 7443 
cs=0x3a50;eip=0x00721e; 	T(AND(al, bh));	// 85410                  and     al, bh ;~ 3A50:721E
cs=0x3a50;eip=0x007220; 	X(PUSH(ax));	// 85411                  push    ax ;~ 3A50:7220
cs=0x3a50;eip=0x007221; 	X(PUSH(bx));	// 85412                  push    bx ;~ 3A50:7221
cs=0x3a50;eip=0x007222; 	T(bl = al;);	// 85413                  mov     bl, al ;~ 3A50:7222
cs=0x3a50;eip=0x007224; 	T(dx = 0x3CE;);	// 85414                  mov     dx, 3CEh ;~ 3A50:7224
cs=0x3a50;eip=0x007227; 	T(ax = 0x805;);	// 85415                  mov     ax, 805h ;~ 3A50:7227
cs=0x3a50;eip=0x00722a; 	X(*((amsruntimelibra)+8) = ah;);	// 85416                  mov     byte ptr cs:aMsRunTimeLibra+8, ah ; "ime Library - Copyright (c) 1988, Micro"... ;~ 3A50:722A
cs=0x3a50;eip=0x00722f; 	S(OUT(dx, ax));	// 85417                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:722F
cs=0x3a50;eip=0x007230; 	T(MOV(ah, *(raddr(ds,si))));	// 85419                  mov     ah, [si] ;~ 3A50:7230
cs=0x3a50;eip=0x007232; 	T(MOV(al, *(raddr(ds,si+1))));	// 85420                  mov     al, [si+1] ;~ 3A50:7232
cs=0x3a50;eip=0x007235; 	T(SHR(ax, cl));	// 85421                  shr     ax, cl ;~ 3A50:7235
cs=0x3a50;eip=0x007237; 	T(NOT(al));	// 85422                  not     al ;~ 3A50:7237
cs=0x3a50;eip=0x007239; 	T(AND(al, bl));	// 85423                  and     al, bl ;~ 3A50:7239
cs=0x3a50;eip=0x00723b; 	T(ah = al;);	// 85424                  mov     ah, al ;~ 3A50:723B
cs=0x3a50;eip=0x00723d; 	T(al = 8;);	// 85425                  mov     al, 8 ;~ 3A50:723D
cs=0x3a50;eip=0x00723f; 	X(*((amsruntimelibra)+9) = ah;);	// 85426                  mov     byte ptr cs:aMsRunTimeLibra+9, ah ; "me Library - Copyright (c) 1988, Micros"... ;~ 3A50:723F
cs=0x3a50;eip=0x007244; 	S(OUT(dx, ax));	// 85427                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:7244
cs=0x3a50;eip=0x007245; 	T(ax = 5;);	// 85430                  mov     ax, 5 ;~ 3A50:7245
cs=0x3a50;eip=0x007248; 	X(*((amsruntimelibra)+8) = ah;);	// 85431                  mov     byte ptr cs:aMsRunTimeLibra+8, ah ; "ime Library - Copyright (c) 1988, Micro"... ;~ 3A50:7248
cs=0x3a50;eip=0x00724d; 	S(OUT(dx, ax));	// 85432                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:724D
cs=0x3a50;eip=0x00724e; 	X(POP(bx));	// 85439                  pop     bx ;~ 3A50:724E
cs=0x3a50;eip=0x00724f; 	X(POP(ax));	// 85440                  pop     ax ;~ 3A50:724F
cs=0x3a50;eip=0x007250; 	T(MOV(dh, *(raddr(ds,si))));	// 85441                  mov     dh, [si] ;~ 3A50:7250
cs=0x3a50;eip=0x007252; 	T(MOV(dl, *(raddr(ds,si+1))));	// 85442                  mov     dl, [si+1] ;~ 3A50:7252
cs=0x3a50;eip=0x007255; 	T(SHR(dx, cl));	// 85443                  shr     dx, cl ;~ 3A50:7255
cs=0x3a50;eip=0x007257; 	T(AND(dl, al));	// 85444                  and     dl, al ;~ 3A50:7257
cs=0x3a50;eip=0x007259; 	T(NOT(al));	// 85445                  not     al ;~ 3A50:7259
cs=0x3a50;eip=0x00725b; 	T(AND(al, *(raddr(es,di))));	// 85446                  and     al, es:[di] ;~ 3A50:725B
cs=0x3a50;eip=0x00725e; 	T(OR(al, dl));	// 85447                  or      al, dl ;~ 3A50:725E
cs=0x3a50;eip=0x007260; 	X(STOSB);	// 85448                  stosb ;~ 3A50:7260
cs=0x3a50;eip=0x007261; 	X(POP(cx));	// 85449                  pop     cx ;~ 3A50:7261
cs=0x3a50;eip=0x007262; 	X(POP(di));	// 85450                  pop     di ;~ 3A50:7262
cs=0x3a50;eip=0x007263; 	X(POP(si));	// 85451                  pop     si ;~ 3A50:7263
cs=0x3a50;eip=0x007264; 	T(ADD(di, 0x28));	// 85452                  add     di, 28h ; '(' ;~ 3A50:7264
cs=0x3a50;eip=0x007267; 	T(ADD(si, 0x28));	// 85453                  add     si, 28h ; '(' ;~ 3A50:7267
cs=0x3a50;eip=0x00726a; 	T(DEC(bp));	// 85454                  dec     bp ;~ 3A50:726A
cs=0x3a50;eip=0x00726b; 	J(JZ(loc_4fd50));	// 85455                  jz      short loc_4FD50 ;~ 3A50:726B
cs=0x3a50;eip=0x00726d; 	J(JMP(loc_4fc7c));	// 85456                  jmp     loc_4FC7C ;~ 3A50:726D
loc_4fd50:
	// 7444 
cs=0x3a50;eip=0x007270; 	X(POP(di));	// 85460                  pop     di ;~ 3A50:7270
cs=0x3a50;eip=0x007271; 	X(POP(si));	// 85461                  pop     si ;~ 3A50:7271
cs=0x3a50;eip=0x007272; 	X(POP(bp));	// 85462                  pop     bp ;~ 3A50:7272
cs=0x3a50;eip=0x007273; 	X(POP(ax));	// 85463                  pop     ax ;~ 3A50:7273
cs=0x3a50;eip=0x007274; 	T(DEC(ah));	// 85464                  dec     ah ;~ 3A50:7274
cs=0x3a50;eip=0x007276; 	J(JS(loc_4fd5b));	// 85465                  js      short loc_4FD5B ;~ 3A50:7276
cs=0x3a50;eip=0x007278; 	J(JMP(loc_4fc52));	// 85466                  jmp     loc_4FC52 ;~ 3A50:7278
loc_4fd5b:
	// 7445 
cs=0x3a50;eip=0x00727b; 	J(JMP(loc_4fc03));	// 85470                  jmp     loc_4FC03 ;~ 3A50:727B
loc_4fd5e:
	// 7446 
cs=0x3a50;eip=0x00727e; 	X(POP(es));	// 85474                  pop     es ;~ 3A50:727E
loc_4fd5f:
	// 7447 
cs=0x3a50;eip=0x00727f; 	X(POP(ds));	// 85477                  pop     ds ;~ 3A50:727F
cs=0x3a50;eip=0x007280; 	J(RETF(0));	// 85478                  retf ;~ 3A50:7280
ret_3a50_7281:
	// 7448 
cs=0x3a50;eip=0x007281; 	X(PUSH(ds));	// 85480                  push    ds ;~ 3A50:7281
cs=0x3a50;eip=0x007282; 	T(dx = 0x4C7A;);	// 85481                  mov     dx, 4C7Ah ;~ 3A50:7282
cs=0x3a50;eip=0x007285; 	T(ds = dx;);	// 85482                  mov     ds, dx ;~ 3A50:7285
cs=0x3a50;eip=0x007287; 	X(*(dw*)((akybdsensitivit)+5) = ax;);	// 85484                  mov     word ptr ds:aKybdSensitivit+5, ax ; "Sensitivity" ;~ 3A50:7287
cs=0x3a50;eip=0x00728a; 	X(*(dw*)((akybdsensitivit)+7) = cx;);	// 85485                  mov     word ptr ds:aKybdSensitivit+7, cx ; "nsitivity" ;~ 3A50:728A
cs=0x3a50;eip=0x00728e; 	T(CMP(*(dw*)((akybdsensitivit)+5), 0));	// 85486                  cmp     word ptr ds:aKybdSensitivit+5, 0 ; "Sensitivity" ;~ 3A50:728E
cs=0x3a50;eip=0x007293; 	J(JS(loc_4fd5f));	// 85487                  js      short loc_4FD5F ;~ 3A50:7293
cs=0x3a50;eip=0x007295; 	X(PUSH(es));	// 85488                  push    es ;~ 3A50:7295
cs=0x3a50;eip=0x007296; 	T(ax = word_48ae6;);	// 85489                  mov     ax, cs:word_48AE6 ;~ 3A50:7296
cs=0x3a50;eip=0x00729a; 	T(es = ax;);	// 85490                  mov     es, ax ;~ 3A50:729A
cs=0x3a50;eip=0x00729c; 	T(dx = 0x3CE;);	// 85492                  mov     dx, 3CEh ;~ 3A50:729C
cs=0x3a50;eip=0x00729f; 	T(al = 8;);	// 85493                  mov     al, 8 ;~ 3A50:729F
cs=0x3a50;eip=0x0072a1; 	S(OUT(dx, al));	// 85494                  out     dx, al          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:72A1
cs=0x3a50;eip=0x0072a2; 	T(INC(dx));	// 85497                  inc     dx ;~ 3A50:72A2
cs=0x3a50;eip=0x0072a3; 	T(si = *(dw*)((akybdsensitivit)+7););	// 85498                  mov     si, word ptr ds:aKybdSensitivit+7 ; "nsitivity" ;~ 3A50:72A3
cs=0x3a50;eip=0x0072a7; 	T(INC(si));	// 85499                  inc     si ;~ 3A50:72A7
cs=0x3a50;eip=0x0072a8; 	T(SHL(si, 1));	// 85500                  shl     si, 1 ;~ 3A50:72A8
loc_4fd8a:
	// 7449 
cs=0x3a50;eip=0x0072aa; 	T(SHR(si, 1));	// 85504                  shr     si, 1 ;~ 3A50:72AA
cs=0x3a50;eip=0x0072ac; 	T(CMP(si, *(dw*)((akybdsensitivit)+5)));	// 85505                  cmp     si, word ptr ds:aKybdSensitivit+5 ; "Sensitivity" ;~ 3A50:72AC
cs=0x3a50;eip=0x0072b0; 	J(JZ(loc_4fd5e));	// 85506                  jz      short loc_4FD5E ;~ 3A50:72B0
cs=0x3a50;eip=0x0072b2; 	T(DEC(si));	// 85507                  dec     si ;~ 3A50:72B2
cs=0x3a50;eip=0x0072b3; 	T(SHL(si, 1));	// 85508                  shl     si, 1 ;~ 3A50:72B3
cs=0x3a50;eip=0x0072b5; 	T(MOV(cx, *(dw*)(raddr(ss,bx+si+0x1B8))));	// 85509                  mov     cx, ss:[bx+si+1B8h] ;~ 3A50:72B5
cs=0x3a50;eip=0x0072ba; 	T(MOV(bp, *(dw*)(raddr(ss,bx+si))));	// 85510                  mov     bp, ss:[bx+si] ;~ 3A50:72BA
cs=0x3a50;eip=0x0072bd; 	T(CMP(cx, bp));	// 85511                  cmp     cx, bp ;~ 3A50:72BD
cs=0x3a50;eip=0x0072bf; 	J(JC(loc_4fd8a));	// 85512                  jb      short loc_4FD8A ;~ 3A50:72BF
cs=0x3a50;eip=0x0072c1; 	J(JA(loc_4fdad));	// 85513                  ja      short loc_4FDAD ;~ 3A50:72C1
cs=0x3a50;eip=0x0072c3; 	T(OR(cx, cx));	// 85514                  or      cx, cx ;~ 3A50:72C3
cs=0x3a50;eip=0x0072c5; 	J(JZ(loc_4fd8a));	// 85515                  jz      short loc_4FD8A ;~ 3A50:72C5
cs=0x3a50;eip=0x0072c7; 	T(CMP(cx, *(dw*)(((db*)_unk_4bd28)+0x0EDE)));	// 85516                  cmp     cx, ds:_unk_4BD28+0EDEh ;~ 3A50:72C7
cs=0x3a50;eip=0x0072cb; 	J(JZ(loc_4fd8a));	// 85517                  jz      short loc_4FD8A ;~ 3A50:72CB
loc_4fdad:
	// 7450 
cs=0x3a50;eip=0x0072cd; 	T(MOV(di, *(dw*)(raddr(ds,si+0x2CC))));	// 85520                  mov     di, [si+2CCh] ;~ 3A50:72CD
cs=0x3a50;eip=0x0072d1; 	X(PUSH(bx));	// 85521                  push    bx ;~ 3A50:72D1
cs=0x3a50;eip=0x0072d2; 	T(bx = cx;);	// 85522                  mov     bx, cx ;~ 3A50:72D2
cs=0x3a50;eip=0x0072d4; 	T(AND(bx, 0x0F));	// 85523                  and     bx, 0Fh ;~ 3A50:72D4
cs=0x3a50;eip=0x0072d7; 	T(SHL(bx, 1));	// 85524                  shl     bx, 1 ;~ 3A50:72D7
cs=0x3a50;eip=0x0072d9; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x2006))));	// 85525                  mov     ax, [bx+2006h] ;~ 3A50:72D9
cs=0x3a50;eip=0x0072dd; 	X(*(dw*)((awaypointprimar)+1) = ax;);	// 85526                  mov     word ptr ds:aWaypointPrimar+1, ax ; "aypoint: Primary Target" ;~ 3A50:72DD
cs=0x3a50;eip=0x0072e0; 	T(bx = bp;);	// 85527                  mov     bx, bp ;~ 3A50:72E0
cs=0x3a50;eip=0x0072e2; 	T(AND(bx, 0x0F));	// 85528                  and     bx, 0Fh ;~ 3A50:72E2
cs=0x3a50;eip=0x0072e5; 	T(SHL(bx, 1));	// 85529                  shl     bx, 1 ;~ 3A50:72E5
cs=0x3a50;eip=0x0072e7; 	T(MOV(bx, *(dw*)(raddr(ds,bx+0x1FE6))));	// 85530                  mov     bx, [bx+1FE6h] ;~ 3A50:72E7
cs=0x3a50;eip=0x0072eb; 	T(SHR(cx, 1));	// 85531                  shr     cx, 1 ;~ 3A50:72EB
cs=0x3a50;eip=0x0072ed; 	T(SHR(cx, 1));	// 85532                  shr     cx, 1 ;~ 3A50:72ED
cs=0x3a50;eip=0x0072ef; 	T(SHR(cx, 1));	// 85533                  shr     cx, 1 ;~ 3A50:72EF
cs=0x3a50;eip=0x0072f1; 	T(SHR(cx, 1));	// 85534                  shr     cx, 1 ;~ 3A50:72F1
cs=0x3a50;eip=0x0072f3; 	T(SHR(bp, 1));	// 85535                  shr     bp, 1 ;~ 3A50:72F3
cs=0x3a50;eip=0x0072f5; 	T(SHR(bp, 1));	// 85536                  shr     bp, 1 ;~ 3A50:72F5
cs=0x3a50;eip=0x0072f7; 	T(SHR(bp, 1));	// 85537                  shr     bp, 1 ;~ 3A50:72F7
cs=0x3a50;eip=0x0072f9; 	T(SHR(bp, 1));	// 85538                  shr     bp, 1 ;~ 3A50:72F9
cs=0x3a50;eip=0x0072fb; 	T(ax = bp;);	// 85539                  mov     ax, bp ;~ 3A50:72FB
cs=0x3a50;eip=0x0072fd; 	T(SHL(ax, 1));	// 85540                  shl     ax, 1 ;~ 3A50:72FD
cs=0x3a50;eip=0x0072ff; 	T(ADD(di, ax));	// 85541                  add     di, ax ;~ 3A50:72FF
cs=0x3a50;eip=0x007301; 	T(ADD(di, *(dw*)(amsruntimelibra)));	// 85542                  add     di, word ptr cs:aMsRunTimeLibra ; "MS Run-Time Library - Copyright (c) 198"... ;~ 3A50:7301
cs=0x3a50;eip=0x007306; 	T(SUB(cx, bp));	// 85543                  sub     cx, bp ;~ 3A50:7306
cs=0x3a50;eip=0x007308; 	T(CLI);	// 85544                  cli ;~ 3A50:7308
cs=0x3a50;eip=0x007309; 	J(JZ(loc_4fe06));	// 85545                  jz      short loc_4FE06 ;~ 3A50:7309
cs=0x3a50;eip=0x00730b; 	T(ax = bx;);	// 85546                  mov     ax, bx ;~ 3A50:730B
cs=0x3a50;eip=0x00730d; 	T(bx = 0x0FFFF;);	// 85547                  mov     bx, 0FFFFh ;~ 3A50:730D
cs=0x3a50;eip=0x007310; 	S(OUT(dx, al));	// 85548                  out     dx, al          ; EGA port: graphics controller data register ;~ 3A50:7310
cs=0x3a50;eip=0x007311; 	T(MOV(ch, *(raddr(es,di))));	// 85549                  mov     ch, es:[di] ;~ 3A50:7311
cs=0x3a50;eip=0x007314; 	X(STOSB);	// 85550                  stosb ;~ 3A50:7314
cs=0x3a50;eip=0x007315; 	T(al = ah;);	// 85551                  mov     al, ah ;~ 3A50:7315
cs=0x3a50;eip=0x007317; 	S(OUT(dx, al));	// 85552                  out     dx, al          ; EGA port: graphics controller data register ;~ 3A50:7317
cs=0x3a50;eip=0x007318; 	T(MOV(ch, *(raddr(es,di))));	// 85553                  mov     ch, es:[di] ;~ 3A50:7318
cs=0x3a50;eip=0x00731b; 	X(STOSB);	// 85554                  stosb ;~ 3A50:731B
cs=0x3a50;eip=0x00731c; 	T(SUB(ch, ch));	// 85555                  sub     ch, ch ;~ 3A50:731C
cs=0x3a50;eip=0x00731e; 	T(DEC(cx));	// 85556                  dec     cx ;~ 3A50:731E
cs=0x3a50;eip=0x00731f; 	J(JZ(loc_4fe06));	// 85557                  jz      short loc_4FE06 ;~ 3A50:731F
cs=0x3a50;eip=0x007321; 	T(al = 0x0FF;);	// 85558                  mov     al, 0FFh ;~ 3A50:7321
cs=0x3a50;eip=0x007323; 	S(OUT(dx, al));	// 85559                  out     dx, al          ; EGA port: graphics controller data register ;~ 3A50:7323
	// 85560                  rep stosw ;~ 3A50:7324
cs=0x3a50;eip=0x007324; 	X(	REP STOSW);	// 85560                  rep stosw ;~ 3A50:7324
loc_4fe06:
	// 7451 
cs=0x3a50;eip=0x007326; 	T(AND(bx, *(dw*)((awaypointprimar)+1)));	// 85564                  and     bx, word ptr ds:aWaypointPrimar+1 ; "aypoint: Primary Target" ;~ 3A50:7326
cs=0x3a50;eip=0x00732a; 	T(ax = bx;);	// 85565                  mov     ax, bx ;~ 3A50:732A
cs=0x3a50;eip=0x00732c; 	S(OUT(dx, al));	// 85566                  out     dx, al          ; EGA port: graphics controller data register ;~ 3A50:732C
cs=0x3a50;eip=0x00732d; 	T(MOV(cl, *(raddr(es,di))));	// 85567                  mov     cl, es:[di] ;~ 3A50:732D
cs=0x3a50;eip=0x007330; 	X(STOSB);	// 85568                  stosb ;~ 3A50:7330
cs=0x3a50;eip=0x007331; 	T(al = ah;);	// 85569                  mov     al, ah ;~ 3A50:7331
cs=0x3a50;eip=0x007333; 	S(OUT(dx, al));	// 85570                  out     dx, al          ; EGA port: graphics controller data register ;~ 3A50:7333
cs=0x3a50;eip=0x007334; 	T(MOV(cl, *(raddr(es,di))));	// 85571                  mov     cl, es:[di] ;~ 3A50:7334
cs=0x3a50;eip=0x007337; 	X(STOSB);	// 85572                  stosb ;~ 3A50:7337
cs=0x3a50;eip=0x007338; 	T(STI);	// 85573                  sti ;~ 3A50:7338
cs=0x3a50;eip=0x007339; 	X(POP(bx));	// 85574                  pop     bx ;~ 3A50:7339
cs=0x3a50;eip=0x00733a; 	J(JMP(loc_4fd8a));	// 85575                  jmp     loc_4FD8A ;~ 3A50:733A
loc_4fe1d:
	// 7452 
cs=0x3a50;eip=0x00733d; 	X(POP(es));	// 85579                  pop     es ;~ 3A50:733D
cs=0x3a50;eip=0x00733e; 	X(POP(ds));	// 85581                  pop     ds ;~ 3A50:733E
cs=0x3a50;eip=0x00733f; 	J(RETF(0));	// 85583                  retf ;~ 3A50:733F
ret_3a50_7340:
	// 7453 
cs=0x3a50;eip=0x007340; 	X(PUSH(ds));	// 85585                  push    ds ;~ 3A50:7340
cs=0x3a50;eip=0x007341; 	T(dx = 0x4C7A;);	// 85586                  mov     dx, 4C7Ah ;~ 3A50:7341
cs=0x3a50;eip=0x007344; 	T(ds = dx;);	// 85587                  mov     ds, dx ;~ 3A50:7344
cs=0x3a50;eip=0x007346; 	X(PUSH(es));	// 85589                  push    es ;~ 3A50:7346
cs=0x3a50;eip=0x007347; 	T(ax = word_48ae6;);	// 85590                  mov     ax, cs:word_48AE6 ;~ 3A50:7347
cs=0x3a50;eip=0x00734b; 	T(es = ax;);	// 85591                  mov     es, ax ;~ 3A50:734B
cs=0x3a50;eip=0x00734d; 	T(dx = 0x3CE;);	// 85593                  mov     dx, 3CEh ;~ 3A50:734D
cs=0x3a50;eip=0x007350; 	T(al = 8;);	// 85594                  mov     al, 8 ;~ 3A50:7350
cs=0x3a50;eip=0x007352; 	S(OUT(dx, al));	// 85595                  out     dx, al          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:7352
cs=0x3a50;eip=0x007353; 	T(INC(dx));	// 85598                  inc     dx ;~ 3A50:7353
cs=0x3a50;eip=0x007354; 	T(si = 0x0DB;);	// 85599                  mov     si, 0DBh ;~ 3A50:7354
cs=0x3a50;eip=0x007357; 	T(INC(si));	// 85600                  inc     si ;~ 3A50:7357
cs=0x3a50;eip=0x007358; 	T(SHL(si, 1));	// 85601                  shl     si, 1 ;~ 3A50:7358
loc_4fe3a:
	// 7454 
cs=0x3a50;eip=0x00735a; 	T(SUB(si, 2));	// 85605                  sub     si, 2 ;~ 3A50:735A
cs=0x3a50;eip=0x00735d; 	J(JS(loc_4fe1d));	// 85606                  js      short loc_4FE1D ;~ 3A50:735D
cs=0x3a50;eip=0x00735f; 	T(MOV(cx, *(dw*)(raddr(ss,bx+si+0x1B8))));	// 85607                  mov     cx, ss:[bx+si+1B8h] ;~ 3A50:735F
cs=0x3a50;eip=0x007364; 	T(MOV(bp, *(dw*)(raddr(ss,bx+si))));	// 85608                  mov     bp, ss:[bx+si] ;~ 3A50:7364
cs=0x3a50;eip=0x007367; 	T(CMP(cx, bp));	// 85609                  cmp     cx, bp ;~ 3A50:7367
cs=0x3a50;eip=0x007369; 	J(JC(loc_4fe3a));	// 85610                  jb      short loc_4FE3A ;~ 3A50:7369
cs=0x3a50;eip=0x00736b; 	J(JA(loc_4fe57));	// 85611                  ja      short loc_4FE57 ;~ 3A50:736B
cs=0x3a50;eip=0x00736d; 	T(OR(cx, cx));	// 85612                  or      cx, cx ;~ 3A50:736D
cs=0x3a50;eip=0x00736f; 	J(JZ(loc_4fe3a));	// 85613                  jz      short loc_4FE3A ;~ 3A50:736F
cs=0x3a50;eip=0x007371; 	T(CMP(cx, 0x13F));	// 85614                  cmp     cx, 13Fh ;~ 3A50:7371
cs=0x3a50;eip=0x007375; 	J(JZ(loc_4fe3a));	// 85615                  jz      short loc_4FE3A ;~ 3A50:7375
loc_4fe57:
	// 7455 
cs=0x3a50;eip=0x007377; 	X(PUSH(bx));	// 85618                  push    bx ;~ 3A50:7377
cs=0x3a50;eip=0x007378; 	T(bx = si;);	// 85619                  mov     bx, si ;~ 3A50:7378
cs=0x3a50;eip=0x00737a; 	T(MOV(di, *(dw*)(raddr(ds,bx+0x2CC))));	// 85620                  mov     di, [bx+2CCh] ;~ 3A50:737A
cs=0x3a50;eip=0x00737e; 	T(bx = cx;);	// 85621                  mov     bx, cx ;~ 3A50:737E
cs=0x3a50;eip=0x007380; 	T(AND(bx, 0x0F));	// 85622                  and     bx, 0Fh ;~ 3A50:7380
cs=0x3a50;eip=0x007383; 	T(SHL(bx, 1));	// 85623                  shl     bx, 1 ;~ 3A50:7383
cs=0x3a50;eip=0x007385; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x2006))));	// 85624                  mov     ax, [bx+2006h] ;~ 3A50:7385
cs=0x3a50;eip=0x007389; 	X(*(dw*)((awaypointprimar)+1) = ax;);	// 85625                  mov     word ptr ds:aWaypointPrimar+1, ax ; "aypoint: Primary Target" ;~ 3A50:7389
cs=0x3a50;eip=0x00738c; 	T(bx = bp;);	// 85626                  mov     bx, bp ;~ 3A50:738C
cs=0x3a50;eip=0x00738e; 	T(AND(bx, 0x0F));	// 85627                  and     bx, 0Fh ;~ 3A50:738E
cs=0x3a50;eip=0x007391; 	T(SHL(bx, 1));	// 85628                  shl     bx, 1 ;~ 3A50:7391
cs=0x3a50;eip=0x007393; 	T(MOV(bx, *(dw*)(raddr(ds,bx+0x1FE6))));	// 85629                  mov     bx, [bx+1FE6h] ;~ 3A50:7393
cs=0x3a50;eip=0x007397; 	T(SHR(cx, 1));	// 85630                  shr     cx, 1 ;~ 3A50:7397
cs=0x3a50;eip=0x007399; 	T(SHR(cx, 1));	// 85631                  shr     cx, 1 ;~ 3A50:7399
cs=0x3a50;eip=0x00739b; 	T(SHR(cx, 1));	// 85632                  shr     cx, 1 ;~ 3A50:739B
cs=0x3a50;eip=0x00739d; 	T(SHR(cx, 1));	// 85633                  shr     cx, 1 ;~ 3A50:739D
cs=0x3a50;eip=0x00739f; 	T(SHR(bp, 1));	// 85634                  shr     bp, 1 ;~ 3A50:739F
cs=0x3a50;eip=0x0073a1; 	T(SHR(bp, 1));	// 85635                  shr     bp, 1 ;~ 3A50:73A1
cs=0x3a50;eip=0x0073a3; 	T(SHR(bp, 1));	// 85636                  shr     bp, 1 ;~ 3A50:73A3
cs=0x3a50;eip=0x0073a5; 	T(SHR(bp, 1));	// 85637                  shr     bp, 1 ;~ 3A50:73A5
cs=0x3a50;eip=0x0073a7; 	T(ax = bp;);	// 85638                  mov     ax, bp ;~ 3A50:73A7
cs=0x3a50;eip=0x0073a9; 	T(SHL(ax, 1));	// 85639                  shl     ax, 1 ;~ 3A50:73A9
cs=0x3a50;eip=0x0073ab; 	T(ADD(di, ax));	// 85640                  add     di, ax ;~ 3A50:73AB
cs=0x3a50;eip=0x0073ad; 	T(ADD(di, *(dw*)(amsruntimelibra)));	// 85641                  add     di, word ptr cs:aMsRunTimeLibra ; "MS Run-Time Library - Copyright (c) 198"... ;~ 3A50:73AD
cs=0x3a50;eip=0x0073b2; 	T(SUB(cx, bp));	// 85642                  sub     cx, bp ;~ 3A50:73B2
cs=0x3a50;eip=0x0073b4; 	T(CLI);	// 85643                  cli ;~ 3A50:73B4
cs=0x3a50;eip=0x0073b5; 	J(JZ(loc_4feb2));	// 85644                  jz      short loc_4FEB2 ;~ 3A50:73B5
cs=0x3a50;eip=0x0073b7; 	T(ax = bx;);	// 85645                  mov     ax, bx ;~ 3A50:73B7
cs=0x3a50;eip=0x0073b9; 	T(bx = 0x0FFFF;);	// 85646                  mov     bx, 0FFFFh ;~ 3A50:73B9
cs=0x3a50;eip=0x0073bc; 	S(OUT(dx, al));	// 85647                  out     dx, al          ; EGA port: graphics controller data register ;~ 3A50:73BC
cs=0x3a50;eip=0x0073bd; 	T(MOV(ch, *(raddr(es,di))));	// 85648                  mov     ch, es:[di] ;~ 3A50:73BD
cs=0x3a50;eip=0x0073c0; 	X(STOSB);	// 85649                  stosb ;~ 3A50:73C0
cs=0x3a50;eip=0x0073c1; 	T(al = ah;);	// 85650                  mov     al, ah ;~ 3A50:73C1
cs=0x3a50;eip=0x0073c3; 	S(OUT(dx, al));	// 85651                  out     dx, al          ; EGA port: graphics controller data register ;~ 3A50:73C3
cs=0x3a50;eip=0x0073c4; 	T(MOV(ch, *(raddr(es,di))));	// 85652                  mov     ch, es:[di] ;~ 3A50:73C4
cs=0x3a50;eip=0x0073c7; 	X(STOSB);	// 85653                  stosb ;~ 3A50:73C7
cs=0x3a50;eip=0x0073c8; 	T(SUB(ch, ch));	// 85654                  sub     ch, ch ;~ 3A50:73C8
cs=0x3a50;eip=0x0073ca; 	T(DEC(cx));	// 85655                  dec     cx ;~ 3A50:73CA
cs=0x3a50;eip=0x0073cb; 	J(JZ(loc_4feb2));	// 85656                  jz      short loc_4FEB2 ;~ 3A50:73CB
cs=0x3a50;eip=0x0073cd; 	T(al = 0x0FF;);	// 85657                  mov     al, 0FFh ;~ 3A50:73CD
cs=0x3a50;eip=0x0073cf; 	S(OUT(dx, al));	// 85658                  out     dx, al          ; EGA port: graphics controller data register ;~ 3A50:73CF
	// 85659                  rep stosw ;~ 3A50:73D0
cs=0x3a50;eip=0x0073d0; 	X(	REP STOSW);	// 85659                  rep stosw ;~ 3A50:73D0
loc_4feb2:
	// 7456 
cs=0x3a50;eip=0x0073d2; 	T(AND(bx, *(dw*)((awaypointprimar)+1)));	// 85663                  and     bx, word ptr ds:aWaypointPrimar+1 ; "aypoint: Primary Target" ;~ 3A50:73D2
cs=0x3a50;eip=0x0073d6; 	T(ax = bx;);	// 85664                  mov     ax, bx ;~ 3A50:73D6
cs=0x3a50;eip=0x0073d8; 	S(OUT(dx, al));	// 85665                  out     dx, al          ; EGA port: graphics controller data register ;~ 3A50:73D8
cs=0x3a50;eip=0x0073d9; 	T(MOV(cl, *(raddr(es,di))));	// 85666                  mov     cl, es:[di] ;~ 3A50:73D9
cs=0x3a50;eip=0x0073dc; 	X(STOSB);	// 85667                  stosb ;~ 3A50:73DC
cs=0x3a50;eip=0x0073dd; 	T(al = ah;);	// 85668                  mov     al, ah ;~ 3A50:73DD
cs=0x3a50;eip=0x0073df; 	S(OUT(dx, al));	// 85669                  out     dx, al          ; EGA port: graphics controller data register ;~ 3A50:73DF
cs=0x3a50;eip=0x0073e0; 	T(MOV(cl, *(raddr(es,di))));	// 85670                  mov     cl, es:[di] ;~ 3A50:73E0
cs=0x3a50;eip=0x0073e3; 	X(STOSB);	// 85671                  stosb ;~ 3A50:73E3
cs=0x3a50;eip=0x0073e4; 	T(STI);	// 85672                  sti ;~ 3A50:73E4
cs=0x3a50;eip=0x0073e5; 	X(POP(bx));	// 85673                  pop     bx ;~ 3A50:73E5
cs=0x3a50;eip=0x0073e6; 	J(JMP(loc_4fe3a));	// 85674                  jmp     loc_4FE3A ;~ 3A50:73E6
ret_3a50_73ed:
	// 7457 
cs=0x3a50;eip=0x0073ed; 	X(PUSH(bp));	// 85681                  push    bp ;~ 3A50:73ED
cs=0x3a50;eip=0x0073ee; 	T(bp = sp;);	// 85682                  mov     bp, sp ;~ 3A50:73EE
cs=0x3a50;eip=0x0073f0; 	X(PUSH(di));	// 85683                  push    di ;~ 3A50:73F0
cs=0x3a50;eip=0x0073f1; 	X(PUSH(si));	// 85684                  push    si ;~ 3A50:73F1
cs=0x3a50;eip=0x0073f2; 	X(PUSH(es));	// 85685                  push    es ;~ 3A50:73F2
cs=0x3a50;eip=0x0073f3; 	X(PUSH(ds));	// 85686                  push    ds ;~ 3A50:73F3
cs=0x3a50;eip=0x0073f4; 	T(dx = 0x4C7A;);	// 85687                  mov     dx, 4C7Ah ;~ 3A50:73F4
cs=0x3a50;eip=0x0073f7; 	T(ds = dx;);	// 85688                  mov     ds, dx ;~ 3A50:73F7
cs=0x3a50;eip=0x0073f9; 	T(cl = 3;);	// 85689                  mov     cl, 3 ;~ 3A50:73F9
cs=0x3a50;eip=0x0073fb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x10))));	// 85690                  mov     bx, [bp+10h] ;~ 3A50:73FB
cs=0x3a50;eip=0x0073fe; 	T(SHL(bx, 1));	// 85691                  shl     bx, 1 ;~ 3A50:73FE
cs=0x3a50;eip=0x007400; 	T(MOV(di, *(dw*)(raddr(ds,bx+0x2CC))));	// 85692                  mov     di, [bx+2CCh] ;~ 3A50:7400
cs=0x3a50;eip=0x007404; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0E))));	// 85693                  mov     ax, [bp+0Eh] ;~ 3A50:7404
cs=0x3a50;eip=0x007407; 	T(SHR(ax, cl));	// 85694                  shr     ax, cl ;~ 3A50:7407
cs=0x3a50;eip=0x007409; 	T(ADD(di, ax));	// 85695                  add     di, ax ;~ 3A50:7409
cs=0x3a50;eip=0x00740b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0A))));	// 85696                  mov     bx, [bp+0Ah] ;~ 3A50:740B
cs=0x3a50;eip=0x00740e; 	T(SHL(bx, 1));	// 85697                  shl     bx, 1 ;~ 3A50:740E
cs=0x3a50;eip=0x007410; 	T(MOV(si, *(dw*)(raddr(ds,bx+0x2CC))));	// 85698                  mov     si, [bx+2CCh] ;~ 3A50:7410
cs=0x3a50;eip=0x007414; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 85699                  mov     ax, [bp+8] ;~ 3A50:7414
cs=0x3a50;eip=0x007417; 	T(SHR(ax, cl));	// 85700                  shr     ax, cl ;~ 3A50:7417
cs=0x3a50;eip=0x007419; 	T(ADD(si, ax));	// 85701                  add     si, ax ;~ 3A50:7419
cs=0x3a50;eip=0x00741b; 	T(DEC(si));	// 85702                  dec     si ;~ 3A50:741B
cs=0x3a50;eip=0x00741c; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0E))));	// 85703                  mov     cx, [bp+0Eh] ;~ 3A50:741C
cs=0x3a50;eip=0x00741f; 	T(AND(cl, 7));	// 85704                  and     cl, 7 ;~ 3A50:741F
cs=0x3a50;eip=0x007422; 	T(bl = 0x0FF;);	// 85705                  mov     bl, 0FFh ;~ 3A50:7422
cs=0x3a50;eip=0x007424; 	T(SHR(bl, cl));	// 85706                  shr     bl, cl ;~ 3A50:7424
cs=0x3a50;eip=0x007426; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0E))));	// 85707                  mov     cx, [bp+0Eh] ;~ 3A50:7426
cs=0x3a50;eip=0x007429; 	T(ADD(cx, *(dw*)(raddr(ss,bp+0x12))));	// 85708                  add     cx, [bp+12h] ;~ 3A50:7429
cs=0x3a50;eip=0x00742c; 	T(DEC(cx));	// 85709                  dec     cx ;~ 3A50:742C
cs=0x3a50;eip=0x00742d; 	T(AND(cl, 7));	// 85710                  and     cl, 7 ;~ 3A50:742D
cs=0x3a50;eip=0x007430; 	T(ax = 0x0FF80;);	// 85711                  mov     ax, 0FF80h ;~ 3A50:7430
cs=0x3a50;eip=0x007433; 	T(SHR(ax, cl));	// 85712                  shr     ax, cl ;~ 3A50:7433
cs=0x3a50;eip=0x007435; 	T(bh = al;);	// 85713                  mov     bh, al ;~ 3A50:7435
cs=0x3a50;eip=0x007437; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0E))));	// 85714                  mov     ax, [bp+0Eh] ;~ 3A50:7437
cs=0x3a50;eip=0x00743a; 	T(AND(ax, 7));	// 85715                  and     ax, 7 ;~ 3A50:743A
cs=0x3a50;eip=0x00743d; 	T(ADD(ax, *(dw*)(raddr(ss,bp+0x12))));	// 85716                  add     ax, [bp+12h] ;~ 3A50:743D
cs=0x3a50;eip=0x007440; 	T(DEC(ax));	// 85717                  dec     ax ;~ 3A50:7440
cs=0x3a50;eip=0x007441; 	T(SHR(ax, 1));	// 85718                  shr     ax, 1 ;~ 3A50:7441
cs=0x3a50;eip=0x007443; 	T(SHR(ax, 1));	// 85719                  shr     ax, 1 ;~ 3A50:7443
cs=0x3a50;eip=0x007445; 	T(SHR(ax, 1));	// 85720                  shr     ax, 1 ;~ 3A50:7445
cs=0x3a50;eip=0x007447; 	T(ch = al;);	// 85721                  mov     ch, al ;~ 3A50:7447
cs=0x3a50;eip=0x007449; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0E))));	// 85722                  mov     ax, [bp+0Eh] ;~ 3A50:7449
cs=0x3a50;eip=0x00744c; 	T(AND(al, 7));	// 85723                  and     al, 7 ;~ 3A50:744C
cs=0x3a50;eip=0x00744e; 	T(MOV(dx, *(dw*)(raddr(ss,bp+8))));	// 85724                  mov     dx, [bp+8] ;~ 3A50:744E
cs=0x3a50;eip=0x007451; 	T(AND(dl, 7));	// 85725                  and     dl, 7 ;~ 3A50:7451
cs=0x3a50;eip=0x007454; 	T(SUB(al, dl));	// 85726                  sub     al, dl ;~ 3A50:7454
cs=0x3a50;eip=0x007456; 	J(JS(loc_4ff3b));	// 85727                  js      short loc_4FF3B ;~ 3A50:7456
cs=0x3a50;eip=0x007458; 	J(JMP(loc_4ffec));	// 85728                  jmp     loc_4FFEC ;~ 3A50:7458
loc_4ff3b:
	// 7458 
cs=0x3a50;eip=0x00745b; 	T(NEG(al));	// 85732                  neg     al ;~ 3A50:745B
cs=0x3a50;eip=0x00745d; 	T(INC(si));	// 85733                  inc     si ;~ 3A50:745D
cs=0x3a50;eip=0x00745e; 	T(cl = al;);	// 85734                  mov     cl, al ;~ 3A50:745E
cs=0x3a50;eip=0x007460; 	X(PUSH(di));	// 85735                  push    di ;~ 3A50:7460
cs=0x3a50;eip=0x007461; 	T(MOV(di, *(dw*)(raddr(ss,bp+6))));	// 85736                  mov     di, [bp+6] ;~ 3A50:7461
cs=0x3a50;eip=0x007464; 	T(SHL(di, 1));	// 85737                  shl     di, 1 ;~ 3A50:7464
cs=0x3a50;eip=0x007466; 	T(MOV(ds, *(dw*)(raddr(cs,di+0x0A72))));	// 85738                  mov     ds, word ptr cs:[di+0A72h] ;~ 3A50:7466
cs=0x3a50;eip=0x00746b; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0C))));	// 85740                  mov     di, [bp+0Ch] ;~ 3A50:746B
cs=0x3a50;eip=0x00746e; 	T(SHL(di, 1));	// 85741                  shl     di, 1 ;~ 3A50:746E
cs=0x3a50;eip=0x007470; 	T(MOV(es, *(dw*)(raddr(cs,di+0x0A72))));	// 85742                  mov     es, word ptr cs:[di+0A72h] ;~ 3A50:7470
cs=0x3a50;eip=0x007475; 	X(POP(di));	// 85744                  pop     di ;~ 3A50:7475
cs=0x3a50;eip=0x007476; 	T(ah = 3;);	// 85745                  mov     ah, 3 ;~ 3A50:7476
loc_4ff58:
	// 7459 
cs=0x3a50;eip=0x007478; 	X(PUSH(ax));	// 85748                  push    ax ;~ 3A50:7478
cs=0x3a50;eip=0x007479; 	X(PUSH(bp));	// 85749                  push    bp ;~ 3A50:7479
cs=0x3a50;eip=0x00747a; 	X(PUSH(si));	// 85750                  push    si ;~ 3A50:747A
cs=0x3a50;eip=0x00747b; 	X(PUSH(di));	// 85751                  push    di ;~ 3A50:747B
cs=0x3a50;eip=0x00747c; 	T(dx = 0x3CE;);	// 85752                  mov     dx, 3CEh ;~ 3A50:747C
cs=0x3a50;eip=0x00747f; 	T(al = 4;);	// 85753                  mov     al, 4 ;~ 3A50:747F
cs=0x3a50;eip=0x007481; 	X(*((amsruntimelibra)+7) = ah;);	// 85754                  mov     byte ptr cs:aMsRunTimeLibra+7, ah ; "Time Library - Copyright (c) 1988, Micr"... ;~ 3A50:7481
cs=0x3a50;eip=0x007486; 	S(OUT(dx, ax));	// 85755                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:7486
cs=0x3a50;eip=0x007487; 	T(XCHG(dx, bx));	// 85757                  xchg    dx, bx ;~ 3A50:7487
cs=0x3a50;eip=0x007489; 	T(bl = ah;);	// 85758                  mov     bl, ah ;~ 3A50:7489
cs=0x3a50;eip=0x00748b; 	T(SUB(bh, bh));	// 85759                  sub     bh, bh ;~ 3A50:748B
cs=0x3a50;eip=0x00748d; 	T(al = 2;);	// 85760                  mov     al, 2 ;~ 3A50:748D
cs=0x3a50;eip=0x00748f; 	T(MOV(ah, *(raddr(cs,bx+0x15D9))));	// 85761                  mov     ah, cs:[bx+15D9h] ;~ 3A50:748F
cs=0x3a50;eip=0x007494; 	T(XCHG(dx, bx));	// 85762                  xchg    dx, bx ;~ 3A50:7494
cs=0x3a50;eip=0x007496; 	T(dx = 0x3C4;);	// 85763                  mov     dx, 3C4h ;~ 3A50:7496
cs=0x3a50;eip=0x007499; 	X(*((amsruntimelibra)+2) = ah;);	// 85764                  mov     byte ptr cs:aMsRunTimeLibra+2, ah ; " Run-Time Library - Copyright (c) 1988,"... ;~ 3A50:7499
cs=0x3a50;eip=0x00749e; 	S(OUT(dx, ax));	// 85765                  out     dx, ax          ; EGA: sequencer address reg ;~ 3A50:749E
cs=0x3a50;eip=0x00749f; 	T(MOV(bp, *(dw*)(raddr(ss,bp+0x14))));	// 85768                  mov     bp, [bp+14h] ;~ 3A50:749F
loc_4ff82:
	// 7460 
cs=0x3a50;eip=0x0074a2; 	X(PUSH(si));	// 85771                  push    si ;~ 3A50:74A2
cs=0x3a50;eip=0x0074a3; 	X(PUSH(di));	// 85772                  push    di ;~ 3A50:74A3
cs=0x3a50;eip=0x0074a4; 	X(PUSH(cx));	// 85773                  push    cx ;~ 3A50:74A4
cs=0x3a50;eip=0x0074a5; 	T(ah = bl;);	// 85774                  mov     ah, bl ;~ 3A50:74A5
cs=0x3a50;eip=0x0074a7; 	T(OR(ch, ch));	// 85775                  or      ch, ch ;~ 3A50:74A7
cs=0x3a50;eip=0x0074a9; 	J(JZ(loc_4ffb0));	// 85776                  jz      short loc_4FFB0 ;~ 3A50:74A9
cs=0x3a50;eip=0x0074ab; 	T(MOV(dx, *(dw*)(raddr(ds,si))));	// 85777                  mov     dx, [si] ;~ 3A50:74AB
cs=0x3a50;eip=0x0074ad; 	T(XCHG(dl, dh));	// 85778                  xchg    dl, dh ;~ 3A50:74AD
cs=0x3a50;eip=0x0074af; 	T(SHL(dx, cl));	// 85779                  shl     dx, cl ;~ 3A50:74AF
cs=0x3a50;eip=0x0074b1; 	T(AND(dh, ah));	// 85780                  and     dh, ah ;~ 3A50:74B1
cs=0x3a50;eip=0x0074b3; 	T(NOT(ah));	// 85781                  not     ah ;~ 3A50:74B3
cs=0x3a50;eip=0x0074b5; 	T(AND(ah, *(raddr(es,di))));	// 85782                  and     ah, es:[di] ;~ 3A50:74B5
cs=0x3a50;eip=0x0074b8; 	T(OR(ah, dh));	// 85783                  or      ah, dh ;~ 3A50:74B8
cs=0x3a50;eip=0x0074ba; 	T(al = ah;);	// 85784                  mov     al, ah ;~ 3A50:74BA
cs=0x3a50;eip=0x0074bc; 	X(STOSB);	// 85785                  stosb ;~ 3A50:74BC
cs=0x3a50;eip=0x0074bd; 	J(JMP(loc_4ffa9));	// 85786                  jmp     short loc_4FFA9 ;~ 3A50:74BD
loc_4ffa0:
	// 7461 
cs=0x3a50;eip=0x0074c0; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 85792                  mov     ax, [si] ;~ 3A50:74C0
cs=0x3a50;eip=0x0074c2; 	T(XCHG(ah, al));	// 85793                  xchg    ah, al ;~ 3A50:74C2
cs=0x3a50;eip=0x0074c4; 	T(SHL(ax, cl));	// 85794                  shl     ax, cl ;~ 3A50:74C4
cs=0x3a50;eip=0x0074c6; 	T(al = ah;);	// 85795                  mov     al, ah ;~ 3A50:74C6
cs=0x3a50;eip=0x0074c8; 	X(STOSB);	// 85796                  stosb ;~ 3A50:74C8
loc_4ffa9:
	// 7462 
cs=0x3a50;eip=0x0074c9; 	T(INC(si));	// 85799                  inc     si ;~ 3A50:74C9
cs=0x3a50;eip=0x0074ca; 	T(DEC(ch));	// 85800                  dec     ch ;~ 3A50:74CA
cs=0x3a50;eip=0x0074cc; 	J(JNZ(loc_4ffa0));	// 85801                  jnz     short loc_4FFA0 ;~ 3A50:74CC
cs=0x3a50;eip=0x0074ce; 	T(ah = 0x0FF;);	// 85802                  mov     ah, 0FFh ;~ 3A50:74CE
loc_4ffb0:
	// 7463 
cs=0x3a50;eip=0x0074d0; 	T(AND(ah, bh));	// 85805                  and     ah, bh ;~ 3A50:74D0
cs=0x3a50;eip=0x0074d2; 	T(MOV(dx, *(dw*)(raddr(ds,si))));	// 85806                  mov     dx, [si] ;~ 3A50:74D2
cs=0x3a50;eip=0x0074d4; 	T(XCHG(dh, dl));	// 85807                  xchg    dh, dl ;~ 3A50:74D4
cs=0x3a50;eip=0x0074d6; 	T(SHL(dx, cl));	// 85808                  shl     dx, cl ;~ 3A50:74D6
cs=0x3a50;eip=0x0074d8; 	T(AND(dh, ah));	// 85809                  and     dh, ah ;~ 3A50:74D8
cs=0x3a50;eip=0x0074da; 	T(NOT(ah));	// 85810                  not     ah ;~ 3A50:74DA
cs=0x3a50;eip=0x0074dc; 	T(AND(ah, *(raddr(es,di))));	// 85811                  and     ah, es:[di] ;~ 3A50:74DC
cs=0x3a50;eip=0x0074df; 	T(OR(ah, dh));	// 85812                  or      ah, dh ;~ 3A50:74DF
cs=0x3a50;eip=0x0074e1; 	T(al = ah;);	// 85813                  mov     al, ah ;~ 3A50:74E1
cs=0x3a50;eip=0x0074e3; 	X(STOSB);	// 85814                  stosb ;~ 3A50:74E3
cs=0x3a50;eip=0x0074e4; 	X(POP(cx));	// 85815                  pop     cx ;~ 3A50:74E4
cs=0x3a50;eip=0x0074e5; 	X(POP(di));	// 85816                  pop     di ;~ 3A50:74E5
cs=0x3a50;eip=0x0074e6; 	X(POP(si));	// 85817                  pop     si ;~ 3A50:74E6
cs=0x3a50;eip=0x0074e7; 	T(ADD(di, 0x28));	// 85818                  add     di, 28h ; '(' ;~ 3A50:74E7
cs=0x3a50;eip=0x0074ea; 	T(ADD(si, 0x28));	// 85819                  add     si, 28h ; '(' ;~ 3A50:74EA
cs=0x3a50;eip=0x0074ed; 	T(DEC(bp));	// 85820                  dec     bp ;~ 3A50:74ED
cs=0x3a50;eip=0x0074ee; 	J(JNZ(loc_4ff82));	// 85821                  jnz     short loc_4FF82 ;~ 3A50:74EE
cs=0x3a50;eip=0x0074f0; 	X(POP(di));	// 85822                  pop     di ;~ 3A50:74F0
cs=0x3a50;eip=0x0074f1; 	X(POP(si));	// 85823                  pop     si ;~ 3A50:74F1
cs=0x3a50;eip=0x0074f2; 	X(POP(bp));	// 85824                  pop     bp ;~ 3A50:74F2
cs=0x3a50;eip=0x0074f3; 	X(POP(ax));	// 85825                  pop     ax ;~ 3A50:74F3
cs=0x3a50;eip=0x0074f4; 	T(DEC(ah));	// 85826                  dec     ah ;~ 3A50:74F4
cs=0x3a50;eip=0x0074f6; 	J(JNS(loc_4ff58));	// 85827                  jns     short loc_4FF58 ;~ 3A50:74F6
loc_4ffd8:
	// 7464 
cs=0x3a50;eip=0x0074f8; 	T(dx = 0x3C4;);	// 85830                  mov     dx, 3C4h ;~ 3A50:74F8
cs=0x3a50;eip=0x0074fb; 	T(ax = 0x0F02;);	// 85831                  mov     ax, 0F02h ;~ 3A50:74FB
cs=0x3a50;eip=0x0074fe; 	X(*((amsruntimelibra)+2) = ah;);	// 85832                  mov     byte ptr cs:aMsRunTimeLibra+2, ah ; " Run-Time Library - Copyright (c) 1988,"... ;~ 3A50:74FE
cs=0x3a50;eip=0x007503; 	S(OUT(dx, ax));	// 85833                  out     dx, ax          ; EGA: sequencer address reg ;~ 3A50:7503
cs=0x3a50;eip=0x007504; 	X(POP(ds));	// 85835                  pop     ds ;~ 3A50:7504
cs=0x3a50;eip=0x007505; 	X(POP(es));	// 85836                  pop     es ;~ 3A50:7505
cs=0x3a50;eip=0x007506; 	X(POP(si));	// 85837                  pop     si ;~ 3A50:7506
cs=0x3a50;eip=0x007507; 	X(POP(di));	// 85838                  pop     di ;~ 3A50:7507
cs=0x3a50;eip=0x007508; 	T(sp = bp;);	// 85839                  mov     sp, bp ;~ 3A50:7508
cs=0x3a50;eip=0x00750a; 	X(POP(bp));	// 85840                  pop     bp ;~ 3A50:750A
cs=0x3a50;eip=0x00750b; 	J(RETF(0));	// 85841                  retf ;~ 3A50:750B
loc_4ffec:
	// 7465 
cs=0x3a50;eip=0x00750c; 	T(cl = al;);	// 85845                  mov     cl, al ;~ 3A50:750C
cs=0x3a50;eip=0x00750e; 	X(PUSH(di));	// 85846                  push    di ;~ 3A50:750E
cs=0x3a50;eip=0x00750f; 	T(MOV(di, *(dw*)(raddr(ss,bp+6))));	// 85847                  mov     di, [bp+6] ;~ 3A50:750F
cs=0x3a50;eip=0x007512; 	T(SHL(di, 1));	// 85848                  shl     di, 1 ;~ 3A50:7512
cs=0x3a50;eip=0x007514; 	T(MOV(ds, *(dw*)(raddr(cs,di+0x0A72))));	// 85849                  mov     ds, word ptr cs:[di+0A72h] ;~ 3A50:7514
cs=0x3a50;eip=0x007519; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0C))));	// 85850                  mov     di, [bp+0Ch] ;~ 3A50:7519
cs=0x3a50;eip=0x00751c; 	T(SHL(di, 1));	// 85851                  shl     di, 1 ;~ 3A50:751C
cs=0x3a50;eip=0x00751e; 	T(MOV(es, *(dw*)(raddr(cs,di+0x0A72))));	// 85852                  mov     es, word ptr cs:[di+0A72h] ;~ 3A50:751E
cs=0x3a50;eip=0x007523; 	X(POP(di));	// 85853                  pop     di ;~ 3A50:7523
cs=0x3a50;eip=0x007524; 	T(ah = 3;);	// 85854                  mov     ah, 3 ;~ 3A50:7524
loc_50006:
	// 7466 
cs=0x3a50;eip=0x007526; 	X(PUSH(ax));	// 85857                  push    ax ;~ 3A50:7526
cs=0x3a50;eip=0x007527; 	X(PUSH(bp));	// 85858                  push    bp ;~ 3A50:7527
cs=0x3a50;eip=0x007528; 	X(PUSH(si));	// 85859                  push    si ;~ 3A50:7528
cs=0x3a50;eip=0x007529; 	X(PUSH(di));	// 85860                  push    di ;~ 3A50:7529
cs=0x3a50;eip=0x00752a; 	T(dx = 0x3CE;);	// 85861                  mov     dx, 3CEh ;~ 3A50:752A
cs=0x3a50;eip=0x00752d; 	T(al = 4;);	// 85862                  mov     al, 4 ;~ 3A50:752D
cs=0x3a50;eip=0x00752f; 	X(*((amsruntimelibra)+7) = ah;);	// 85863                  mov     byte ptr cs:aMsRunTimeLibra+7, ah ; "Time Library - Copyright (c) 1988, Micr"... ;~ 3A50:752F
cs=0x3a50;eip=0x007534; 	S(OUT(dx, ax));	// 85864                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:7534
cs=0x3a50;eip=0x007535; 	T(XCHG(dx, bx));	// 85866                  xchg    dx, bx ;~ 3A50:7535
cs=0x3a50;eip=0x007537; 	T(bl = ah;);	// 85867                  mov     bl, ah ;~ 3A50:7537
cs=0x3a50;eip=0x007539; 	T(SUB(bh, bh));	// 85868                  sub     bh, bh ;~ 3A50:7539
cs=0x3a50;eip=0x00753b; 	T(al = 2;);	// 85869                  mov     al, 2 ;~ 3A50:753B
cs=0x3a50;eip=0x00753d; 	T(MOV(ah, *(raddr(cs,bx+0x15D9))));	// 85870                  mov     ah, cs:[bx+15D9h] ;~ 3A50:753D
cs=0x3a50;eip=0x007542; 	T(XCHG(dx, bx));	// 85871                  xchg    dx, bx ;~ 3A50:7542
cs=0x3a50;eip=0x007544; 	T(dx = 0x3C4;);	// 85872                  mov     dx, 3C4h ;~ 3A50:7544
cs=0x3a50;eip=0x007547; 	X(*((amsruntimelibra)+2) = ah;);	// 85873                  mov     byte ptr cs:aMsRunTimeLibra+2, ah ; " Run-Time Library - Copyright (c) 1988,"... ;~ 3A50:7547
cs=0x3a50;eip=0x00754c; 	S(OUT(dx, ax));	// 85874                  out     dx, ax          ; EGA: sequencer address reg ;~ 3A50:754C
cs=0x3a50;eip=0x00754d; 	T(MOV(bp, *(dw*)(raddr(ss,bp+0x14))));	// 85877                  mov     bp, [bp+14h] ;~ 3A50:754D
loc_50030:
	// 7467 
cs=0x3a50;eip=0x007550; 	X(PUSH(si));	// 85880                  push    si ;~ 3A50:7550
cs=0x3a50;eip=0x007551; 	X(PUSH(di));	// 85881                  push    di ;~ 3A50:7551
cs=0x3a50;eip=0x007552; 	X(PUSH(cx));	// 85882                  push    cx ;~ 3A50:7552
cs=0x3a50;eip=0x007553; 	T(al = bl;);	// 85883                  mov     al, bl ;~ 3A50:7553
cs=0x3a50;eip=0x007555; 	T(OR(ch, ch));	// 85884                  or      ch, ch ;~ 3A50:7555
cs=0x3a50;eip=0x007557; 	J(JZ(loc_5005b));	// 85885                  jz      short loc_5005B ;~ 3A50:7557
cs=0x3a50;eip=0x007559; 	T(MOV(dh, *(raddr(ds,si))));	// 85886                  mov     dh, [si] ;~ 3A50:7559
cs=0x3a50;eip=0x00755b; 	T(MOV(dl, *(raddr(ds,si+1))));	// 85887                  mov     dl, [si+1] ;~ 3A50:755B
cs=0x3a50;eip=0x00755e; 	T(SHR(dx, cl));	// 85888                  shr     dx, cl ;~ 3A50:755E
cs=0x3a50;eip=0x007560; 	T(AND(dl, al));	// 85889                  and     dl, al ;~ 3A50:7560
cs=0x3a50;eip=0x007562; 	T(NOT(al));	// 85890                  not     al ;~ 3A50:7562
cs=0x3a50;eip=0x007564; 	T(AND(al, *(raddr(es,di))));	// 85891                  and     al, es:[di] ;~ 3A50:7564
cs=0x3a50;eip=0x007567; 	T(OR(al, dl));	// 85892                  or      al, dl ;~ 3A50:7567
cs=0x3a50;eip=0x007569; 	X(STOSB);	// 85893                  stosb ;~ 3A50:7569
cs=0x3a50;eip=0x00756a; 	J(JMP(loc_50054));	// 85894                  jmp     short loc_50054 ;~ 3A50:756A
loc_5004d:
	// 7468 
cs=0x3a50;eip=0x00756d; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 85900                  mov     ax, [si] ;~ 3A50:756D
cs=0x3a50;eip=0x00756f; 	T(XCHG(ah, al));	// 85901                  xchg    ah, al ;~ 3A50:756F
cs=0x3a50;eip=0x007571; 	T(SHR(ax, cl));	// 85902                  shr     ax, cl ;~ 3A50:7571
cs=0x3a50;eip=0x007573; 	X(STOSB);	// 85903                  stosb ;~ 3A50:7573
loc_50054:
	// 7469 
cs=0x3a50;eip=0x007574; 	T(INC(si));	// 85906                  inc     si ;~ 3A50:7574
cs=0x3a50;eip=0x007575; 	T(DEC(ch));	// 85907                  dec     ch ;~ 3A50:7575
cs=0x3a50;eip=0x007577; 	J(JNZ(loc_5004d));	// 85908                  jnz     short loc_5004D ;~ 3A50:7577
cs=0x3a50;eip=0x007579; 	T(al = 0x0FF;);	// 85909                  mov     al, 0FFh ;~ 3A50:7579
loc_5005b:
	// 7470 
cs=0x3a50;eip=0x00757b; 	T(AND(al, bh));	// 85912                  and     al, bh ;~ 3A50:757B
cs=0x3a50;eip=0x00757d; 	T(MOV(dh, *(raddr(ds,si))));	// 85913                  mov     dh, [si] ;~ 3A50:757D
cs=0x3a50;eip=0x00757f; 	T(MOV(dl, *(raddr(ds,si+1))));	// 85914                  mov     dl, [si+1] ;~ 3A50:757F
cs=0x3a50;eip=0x007582; 	T(SHR(dx, cl));	// 85915                  shr     dx, cl ;~ 3A50:7582
cs=0x3a50;eip=0x007584; 	T(AND(dl, al));	// 85916                  and     dl, al ;~ 3A50:7584
cs=0x3a50;eip=0x007586; 	T(NOT(al));	// 85917                  not     al ;~ 3A50:7586
cs=0x3a50;eip=0x007588; 	T(AND(al, *(raddr(es,di))));	// 85918                  and     al, es:[di] ;~ 3A50:7588
cs=0x3a50;eip=0x00758b; 	T(OR(al, dl));	// 85919                  or      al, dl ;~ 3A50:758B
cs=0x3a50;eip=0x00758d; 	X(STOSB);	// 85920                  stosb ;~ 3A50:758D
cs=0x3a50;eip=0x00758e; 	X(POP(cx));	// 85921                  pop     cx ;~ 3A50:758E
cs=0x3a50;eip=0x00758f; 	X(POP(di));	// 85922                  pop     di ;~ 3A50:758F
cs=0x3a50;eip=0x007590; 	X(POP(si));	// 85923                  pop     si ;~ 3A50:7590
cs=0x3a50;eip=0x007591; 	T(ADD(di, 0x28));	// 85924                  add     di, 28h ; '(' ;~ 3A50:7591
cs=0x3a50;eip=0x007594; 	T(ADD(si, 0x28));	// 85925                  add     si, 28h ; '(' ;~ 3A50:7594
cs=0x3a50;eip=0x007597; 	T(DEC(bp));	// 85926                  dec     bp ;~ 3A50:7597
cs=0x3a50;eip=0x007598; 	J(JNZ(loc_50030));	// 85927                  jnz     short loc_50030 ;~ 3A50:7598
cs=0x3a50;eip=0x00759a; 	X(POP(di));	// 85928                  pop     di ;~ 3A50:759A
cs=0x3a50;eip=0x00759b; 	X(POP(si));	// 85929                  pop     si ;~ 3A50:759B
cs=0x3a50;eip=0x00759c; 	X(POP(bp));	// 85930                  pop     bp ;~ 3A50:759C
cs=0x3a50;eip=0x00759d; 	X(POP(ax));	// 85931                  pop     ax ;~ 3A50:759D
cs=0x3a50;eip=0x00759e; 	T(DEC(ah));	// 85932                  dec     ah ;~ 3A50:759E
cs=0x3a50;eip=0x0075a0; 	J(JNS(loc_50006));	// 85933                  jns     short loc_50006 ;~ 3A50:75A0
cs=0x3a50;eip=0x0075a2; 	J(JMP(loc_4ffd8));	// 85934                  jmp     loc_4FFD8 ;~ 3A50:75A2
ret_3a50_75a5:
	// 7471 
cs=0x3a50;eip=0x0075a5; 	T(CLI);	// 85936                  cli ;~ 3A50:75A5
cs=0x3a50;eip=0x0075a6; 	X(PUSH(bp));	// 85937                  push    bp ;~ 3A50:75A6
cs=0x3a50;eip=0x0075a7; 	T(bp = sp;);	// 85938                  mov     bp, sp ;~ 3A50:75A7
cs=0x3a50;eip=0x0075a9; 	X(PUSH(di));	// 85939                  push    di ;~ 3A50:75A9
cs=0x3a50;eip=0x0075aa; 	X(PUSH(si));	// 85940                  push    si ;~ 3A50:75AA
cs=0x3a50;eip=0x0075ab; 	X(PUSH(es));	// 85941                  push    es ;~ 3A50:75AB
cs=0x3a50;eip=0x0075ac; 	X(PUSH(ds));	// 85942                  push    ds ;~ 3A50:75AC
cs=0x3a50;eip=0x0075ad; 	X(PUSH(bp));	// 85943                  push    bp ;~ 3A50:75AD
cs=0x3a50;eip=0x0075ae; 	T(dx = 0x4C7A;);	// 85944                  mov     dx, 4C7Ah ;~ 3A50:75AE
cs=0x3a50;eip=0x0075b1; 	T(ds = dx;);	// 85945                  mov     ds, dx ;~ 3A50:75B1
cs=0x3a50;eip=0x0075b3; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 85947                  mov     di, [bp+8] ;~ 3A50:75B3
cs=0x3a50;eip=0x0075b6; 	T(cl = 3;);	// 85948                  mov     cl, 3 ;~ 3A50:75B6
cs=0x3a50;eip=0x0075b8; 	T(SHR(di, cl));	// 85949                  shr     di, cl ;~ 3A50:75B8
cs=0x3a50;eip=0x0075ba; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0A))));	// 85950                  mov     bx, [bp+0Ah] ;~ 3A50:75BA
cs=0x3a50;eip=0x0075bd; 	T(SHL(bx, 1));	// 85951                  shl     bx, 1 ;~ 3A50:75BD
cs=0x3a50;eip=0x0075bf; 	T(ADD(di, *(dw*)(raddr(ds,bx+0x2CC))));	// 85952                  add     di, [bx+2CCh] ;~ 3A50:75BF
cs=0x3a50;eip=0x0075c3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 85953                  mov     bx, [bp+6] ;~ 3A50:75C3
cs=0x3a50;eip=0x0075c6; 	T(MOV(si, *(dw*)(raddr(ss,bx))));	// 85954                  mov     si, ss:[bx] ;~ 3A50:75C6
cs=0x3a50;eip=0x0075c9; 	T(SHL(si, 1));	// 85955                  shl     si, 1 ;~ 3A50:75C9
cs=0x3a50;eip=0x0075cb; 	T(MOV(ax, *(dw*)(raddr(cs,si+0x0A72))));	// 85956                  mov     ax, cs:[si+0A72h] ;~ 3A50:75CB
cs=0x3a50;eip=0x0075d0; 	T(es = ax;);	// 85957                  mov     es, ax ;~ 3A50:75D0
cs=0x3a50;eip=0x0075d2; 	T(ds = ax;);	// 85958                  mov     ds, ax ;~ 3A50:75D2
cs=0x3a50;eip=0x0075d4; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x0C))));	// 85960                  mov     dx, [bp+0Ch] ;~ 3A50:75D4
cs=0x3a50;eip=0x0075d7; 	T(SHR(dx, cl));	// 85961                  shr     dx, cl ;~ 3A50:75D7
cs=0x3a50;eip=0x0075d9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+8))));	// 85962                  mov     bx, [bp+8] ;~ 3A50:75D9
cs=0x3a50;eip=0x0075dc; 	T(SHR(bx, cl));	// 85963                  shr     bx, cl ;~ 3A50:75DC
cs=0x3a50;eip=0x0075de; 	T(SUB(dx, bx));	// 85964                  sub     dx, bx ;~ 3A50:75DE
cs=0x3a50;eip=0x0075e0; 	T(INC(dx));	// 85965                  inc     dx ;~ 3A50:75E0
cs=0x3a50;eip=0x0075e1; 	T(MOV(si, *(dw*)(raddr(ss,bp+0x0E))));	// 85966                  mov     si, [bp+0Eh] ;~ 3A50:75E1
cs=0x3a50;eip=0x0075e4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0A))));	// 85967                  mov     bx, [bp+0Ah] ;~ 3A50:75E4
cs=0x3a50;eip=0x0075e7; 	T(SUB(si, bx));	// 85968                  sub     si, bx ;~ 3A50:75E7
cs=0x3a50;eip=0x0075e9; 	T(INC(si));	// 85969                  inc     si ;~ 3A50:75E9
cs=0x3a50;eip=0x0075ea; 	T(MOV(cl, *(raddr(ss,bp+0x0C))));	// 85970                  mov     cl, [bp+0Ch] ;~ 3A50:75EA
cs=0x3a50;eip=0x0075ed; 	T(AND(cl, 7));	// 85971                  and     cl, 7 ;~ 3A50:75ED
cs=0x3a50;eip=0x0075f0; 	T(bx = 0x0FF80;);	// 85972                  mov     bx, 0FF80h ;~ 3A50:75F0
cs=0x3a50;eip=0x0075f3; 	T(SHR(bx, cl));	// 85973                  shr     bx, cl ;~ 3A50:75F3
cs=0x3a50;eip=0x0075f5; 	T(MOV(cl, *(raddr(ss,bp+8))));	// 85974                  mov     cl, [bp+8] ;~ 3A50:75F5
cs=0x3a50;eip=0x0075f8; 	T(AND(cl, 7));	// 85975                  and     cl, 7 ;~ 3A50:75F8
cs=0x3a50;eip=0x0075fb; 	T(bh = 0x0FF;);	// 85976                  mov     bh, 0FFh ;~ 3A50:75FB
cs=0x3a50;eip=0x0075fd; 	T(SHR(bh, cl));	// 85977                  shr     bh, cl ;~ 3A50:75FD
cs=0x3a50;eip=0x0075ff; 	T(cx = dx;);	// 85978                  mov     cx, dx ;~ 3A50:75FF
cs=0x3a50;eip=0x007601; 	T(dx = 0x3C4;);	// 85979                  mov     dx, 3C4h ;~ 3A50:7601
cs=0x3a50;eip=0x007604; 	T(ax = 0x0F02;);	// 85980                  mov     ax, 0F02h ;~ 3A50:7604
cs=0x3a50;eip=0x007607; 	S(OUT(dx, ax));	// 85981                  out     dx, ax          ; EGA: sequencer address reg ;~ 3A50:7607
cs=0x3a50;eip=0x007608; 	T(dx = 0x3CE;);	// 85983                  mov     dx, 3CEh ;~ 3A50:7608
cs=0x3a50;eip=0x00760b; 	T(MOV(ah, *(raddr(ss,bp+0x10))));	// 85984                  mov     ah, [bp+10h] ;~ 3A50:760B
cs=0x3a50;eip=0x00760e; 	T(al = 2;);	// 85985                  mov     al, 2 ;~ 3A50:760E
cs=0x3a50;eip=0x007610; 	S(OUT(dx, ax));	// 85986                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:7610
cs=0x3a50;eip=0x007611; 	T(MOV(ah, *(raddr(ss,bp+0x12))));	// 85989                  mov     ah, [bp+12h] ;~ 3A50:7611
cs=0x3a50;eip=0x007614; 	T(al = 0;);	// 85990                  mov     al, 0 ;~ 3A50:7614
cs=0x3a50;eip=0x007616; 	S(OUT(dx, ax));	// 85991                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:7616
cs=0x3a50;eip=0x007617; 	T(ax = 0x0FF01;);	// 85994                  mov     ax, 0FF01h ;~ 3A50:7617
cs=0x3a50;eip=0x00761a; 	S(OUT(dx, ax));	// 85995                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:761A
cs=0x3a50;eip=0x00761b; 	T(ax = 0x805;);	// 85997                  mov     ax, 805h ;~ 3A50:761B
cs=0x3a50;eip=0x00761e; 	S(OUT(dx, ax));	// 85998                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:761E
cs=0x3a50;eip=0x00761f; 	T(al = 8;);	// 86000                  mov     al, 8 ;~ 3A50:761F
cs=0x3a50;eip=0x007621; 	S(OUT(dx, al));	// 86001                  out     dx, al          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:7621
cs=0x3a50;eip=0x007622; 	T(INC(dx));	// 86004                  inc     dx ;~ 3A50:7622
cs=0x3a50;eip=0x007623; 	T(bp = si;);	// 86005                  mov     bp, si ;~ 3A50:7623
loc_50105:
	// 7472 
cs=0x3a50;eip=0x007625; 	X(PUSH(di));	// 86008                  push    di ;~ 3A50:7625
cs=0x3a50;eip=0x007626; 	T(si = di;);	// 86009                  mov     si, di ;~ 3A50:7626
cs=0x3a50;eip=0x007628; 	X(PUSH(cx));	// 86010                  push    cx ;~ 3A50:7628
cs=0x3a50;eip=0x007629; 	T(ah = bh;);	// 86011                  mov     ah, bh ;~ 3A50:7629
cs=0x3a50;eip=0x00762b; 	T(DEC(cx));	// 86012                  dec     cx ;~ 3A50:762B
cs=0x3a50;eip=0x00762c; 	J(JZ(loc_5011d));	// 86013                  jz      short loc_5011D ;~ 3A50:762C
cs=0x3a50;eip=0x00762e; 	T(LODSB);	// 86014                  lodsb ;~ 3A50:762E
cs=0x3a50;eip=0x00762f; 	T(AND(al, ah));	// 86015                  and     al, ah ;~ 3A50:762F
cs=0x3a50;eip=0x007631; 	S(OUT(dx, al));	// 86016                  out     dx, al          ; EGA port: graphics controller data register ;~ 3A50:7631
cs=0x3a50;eip=0x007632; 	X(STOSB);	// 86017                  stosb ;~ 3A50:7632
cs=0x3a50;eip=0x007633; 	J(JMP(loc_50119));	// 86018                  jmp     short loc_50119 ;~ 3A50:7633
loc_50116:
	// 7473 
cs=0x3a50;eip=0x007636; 	T(LODSB);	// 86024                  lodsb ;~ 3A50:7636
cs=0x3a50;eip=0x007637; 	S(OUT(dx, al));	// 86025                  out     dx, al          ; EGA port: graphics controller data register ;~ 3A50:7637
cs=0x3a50;eip=0x007638; 	X(STOSB);	// 86026                  stosb ;~ 3A50:7638
loc_50119:
	// 7474 
cs=0x3a50;eip=0x007639; 	J(LOOP(loc_50116));	// 86029                  loop    loc_50116 ;~ 3A50:7639
cs=0x3a50;eip=0x00763b; 	T(ah = 0x0FF;);	// 86030                  mov     ah, 0FFh ;~ 3A50:763B
loc_5011d:
	// 7475 
cs=0x3a50;eip=0x00763d; 	T(AND(ah, bl));	// 86033                  and     ah, bl ;~ 3A50:763D
cs=0x3a50;eip=0x00763f; 	T(LODSB);	// 86034                  lodsb ;~ 3A50:763F
cs=0x3a50;eip=0x007640; 	T(AND(al, ah));	// 86035                  and     al, ah ;~ 3A50:7640
cs=0x3a50;eip=0x007642; 	S(OUT(dx, al));	// 86036                  out     dx, al          ; EGA port: graphics controller data register ;~ 3A50:7642
cs=0x3a50;eip=0x007643; 	X(STOSB);	// 86037                  stosb ;~ 3A50:7643
cs=0x3a50;eip=0x007644; 	X(POP(cx));	// 86038                  pop     cx ;~ 3A50:7644
cs=0x3a50;eip=0x007645; 	X(POP(di));	// 86039                  pop     di ;~ 3A50:7645
cs=0x3a50;eip=0x007646; 	T(ADD(di, 0x28));	// 86040                  add     di, 28h ; '(' ;~ 3A50:7646
cs=0x3a50;eip=0x007649; 	T(DEC(bp));	// 86041                  dec     bp ;~ 3A50:7649
cs=0x3a50;eip=0x00764a; 	J(JNZ(loc_50105));	// 86042                  jnz     short loc_50105 ;~ 3A50:764A
cs=0x3a50;eip=0x00764c; 	T(DEC(dx));	// 86043                  dec     dx ;~ 3A50:764C
cs=0x3a50;eip=0x00764d; 	T(ax = 1;);	// 86044                  mov     ax, 1 ;~ 3A50:764D
cs=0x3a50;eip=0x007650; 	S(OUT(dx, ax));	// 86045                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:7650
cs=0x3a50;eip=0x007651; 	T(ax = 5;);	// 86047                  mov     ax, 5 ;~ 3A50:7651
cs=0x3a50;eip=0x007654; 	S(OUT(dx, ax));	// 86048                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:7654
cs=0x3a50;eip=0x007655; 	T(ax = 0x0FF08;);	// 86055                  mov     ax, 0FF08h ;~ 3A50:7655
cs=0x3a50;eip=0x007658; 	S(OUT(dx, ax));	// 86056                  out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 3A50:7658
cs=0x3a50;eip=0x007659; 	X(POP(bp));	// 86058                  pop     bp ;~ 3A50:7659
cs=0x3a50;eip=0x00765a; 	X(POP(ds));	// 86059                  pop     ds ;~ 3A50:765A
cs=0x3a50;eip=0x00765b; 	X(POP(es));	// 86060                  pop     es ;~ 3A50:765B
cs=0x3a50;eip=0x00765c; 	X(POP(si));	// 86061                  pop     si ;~ 3A50:765C
cs=0x3a50;eip=0x00765d; 	X(POP(di));	// 86062                  pop     di ;~ 3A50:765D
cs=0x3a50;eip=0x00765e; 	T(sp = bp;);	// 86063                  mov     sp, bp ;~ 3A50:765E
cs=0x3a50;eip=0x007660; 	X(POP(bp));	// 86064                  pop     bp ;~ 3A50:7660
cs=0x3a50;eip=0x007661; 	T(STI);	// 86065                  sti ;~ 3A50:7661
cs=0x3a50;eip=0x007662; 	J(RETF(0));	// 86066                  retf ;~ 3A50:7662
ret_3a50_7663:
	// 7476 
cs=0x3a50;eip=0x007663; 	X(PUSH(es));	// 86068                  push    es ;~ 3A50:7663
cs=0x3a50;eip=0x007664; 	X(PUSH(di));	// 86069                  push    di ;~ 3A50:7664
cs=0x3a50;eip=0x007665; 	T(dx = 0x3C4;);	// 86070                  mov     dx, 3C4h ;~ 3A50:7665
cs=0x3a50;eip=0x007668; 	T(al = 2;);	// 86071                  mov     al, 2 ;~ 3A50:7668
cs=0x3a50;eip=0x00766a; 	T(ah = 0x0FF;);	// 86072                  mov     ah, 0FFh ;~ 3A50:766A
cs=0x3a50;eip=0x00766c; 	X(*((amsruntimelibra)+2) = ah;);	// 86073                  mov     byte ptr cs:aMsRunTimeLibra+2, ah ; " Run-Time Library - Copyright (c) 1988,"... ;~ 3A50:766C
cs=0x3a50;eip=0x007671; 	S(OUT(dx, ax));	// 86074                  out     dx, ax          ; EGA: sequencer address reg ;~ 3A50:7671
cs=0x3a50;eip=0x007672; 	T(ax = 0x0A000;);	// 86076                  mov     ax, 0A000h ;~ 3A50:7672
cs=0x3a50;eip=0x007675; 	T(es = ax;);	// 86077                  mov     es, ax ;~ 3A50:7675
cs=0x3a50;eip=0x007677; 	T(XOR(di, di));	// 86079                  xor     di, di ;~ 3A50:7677
cs=0x3a50;eip=0x007679; 	T(cx = 0x0FA0;);	// 86080                  mov     cx, 0FA0h ;~ 3A50:7679
cs=0x3a50;eip=0x00767c; 	T(ax = di;);	// 86081                  mov     ax, di ;~ 3A50:767C
	// 86082                  rep stosw ;~ 3A50:767E
cs=0x3a50;eip=0x00767e; 	X(	REP STOSW);	// 86082                  rep stosw ;~ 3A50:767E
cs=0x3a50;eip=0x007680; 	X(POP(di));	// 86083                  pop     di ;~ 3A50:7680
cs=0x3a50;eip=0x007681; 	X(POP(es));	// 86084                  pop     es ;~ 3A50:7681
cs=0x3a50;eip=0x007682; 	J(RETF(0));	// 86086                  retf ;~ 3A50:7682
ret_3a50_7683:
	// 7477 
cs=0x3a50;eip=0x007683; 	T(CLI);	// 86088                  cli ;~ 3A50:7683
cs=0x3a50;eip=0x007684; 	T(ax = word_48ae6;);	// 86089                  mov     ax, cs:word_48AE6 ;~ 3A50:7684
cs=0x3a50;eip=0x007688; 	T(cl = 4;);	// 86090                  mov     cl, 4 ;~ 3A50:7688
cs=0x3a50;eip=0x00768a; 	T(SHL(ax, cl));	// 86091                  shl     ax, cl ;~ 3A50:768A
cs=0x3a50;eip=0x00768c; 	T(CMP(bx, 0));	// 86092                  cmp     bx, 0 ;~ 3A50:768C
cs=0x3a50;eip=0x00768f; 	J(JNZ(loc_50177));	// 86093                  jnz     short loc_50177 ;~ 3A50:768F
cs=0x3a50;eip=0x007691; 	T(al = 0x0C;);	// 86094                  mov     al, 0Ch ;~ 3A50:7691
cs=0x3a50;eip=0x007693; 	T(dx = 0x3D4;);	// 86095                  mov     dx, 3D4h ;~ 3A50:7693
cs=0x3a50;eip=0x007696; 	S(OUT(dx, ax));	// 86096                  out     dx, ax          ; Video: CRT cntrlr addr ;~ 3A50:7696
loc_50177:
	// 7478 
cs=0x3a50;eip=0x007697; 	X(XOR(word_48ae6, 0x200));	// 86100                  xor     cs:word_48AE6, 200h ;~ 3A50:7697
cs=0x3a50;eip=0x00769e; 	X(XOR(*((amsruntimelibra)+0x0A), 1));	// 86101                  xor     byte ptr cs:aMsRunTimeLibra+0Ah, 1 ; "e Library - Copyright (c) 1988, Microso"... ;~ 3A50:769E
cs=0x3a50;eip=0x0076a4; 	T(STI);	// 86102                  sti ;~ 3A50:76A4
cs=0x3a50;eip=0x0076a5; 	J(RETF(0));	// 86103                  retf ;~ 3A50:76A5
ret_3a50_76a7:
	// 7479 
cs=0x3a50;eip=0x0076a7; 	T(CLI);	// 86107                  cli ;~ 3A50:76A7
cs=0x3a50;eip=0x0076a8; 	X(PUSH(ds));	// 86108                  push    ds ;~ 3A50:76A8
cs=0x3a50;eip=0x0076a9; 	T(bx = 0x4C7A;);	// 86109                  mov     bx, 4C7Ah ;~ 3A50:76A9
cs=0x3a50;eip=0x0076ac; 	T(ds = bx;);	// 86110                  mov     ds, bx ;~ 3A50:76AC
cs=0x3a50;eip=0x0076ae; 	T(bp = sp;);	// 86112                  mov     bp, sp ;~ 3A50:76AE
cs=0x3a50;eip=0x0076b0; 	T(bx = *(dw*)((awaypointsecond)+0x0A););	// 86113                  mov     bx, word ptr ds:aWaypointSecond+0Ah ; "Secondary Target" ;~ 3A50:76B0
cs=0x3a50;eip=0x0076b4; 	T(SHL(bx, 1));	// 86114                  shl     bx, 1 ;~ 3A50:76B4
cs=0x3a50;eip=0x0076b6; 	T(SHL(bx, 1));	// 86115                  shl     bx, 1 ;~ 3A50:76B6
cs=0x3a50;eip=0x0076b8; 	T(ADD(bx, *(dw*)((awaypointsecond)+0x0A)));	// 86116                  add     bx, word ptr ds:aWaypointSecond+0Ah ; "Secondary Target" ;~ 3A50:76B8
cs=0x3a50;eip=0x0076bc; 	T(INC(bx));	// 86117                  inc     bx ;~ 3A50:76BC
cs=0x3a50;eip=0x0076bd; 	X(*(dw*)((awaypointsecond)+0x0A) = bx;);	// 86118                  mov     word ptr ds:aWaypointSecond+0Ah, bx ; "Secondary Target" ;~ 3A50:76BD
cs=0x3a50;eip=0x0076c1; 	T(AND(bx, 0x0F));	// 86119                  and     bx, 0Fh ;~ 3A50:76C1
cs=0x3a50;eip=0x0076c4; 	T(MOV(cx, *(dw*)(raddr(ds,bx+0x2028))));	// 86120                  mov     cx, [bx+2028h] ;~ 3A50:76C4
cs=0x3a50;eip=0x0076c8; 	T(dx = 0x3DA;);	// 86121                  mov     dx, 3DAh ;~ 3A50:76C8
cs=0x3a50;eip=0x0076cb; 	S(IN(al, dx));	// 86122                  in      al, dx          ; Video status bits: ;~ 3A50:76CB
cs=0x3a50;eip=0x0076cc; 	T(TEST(al, 8));	// 86127                  test    al, 8 ;~ 3A50:76CC
cs=0x3a50;eip=0x0076ce; 	J(JZ(loc_501db));	// 86128                  jz      short loc_501DB ;~ 3A50:76CE
cs=0x3a50;eip=0x0076d0; 	T(dx = 0x3C0;);	// 86129                  mov     dx, 3C0h ;~ 3A50:76D0
cs=0x3a50;eip=0x0076d3; 	T(al = 0x0D;);	// 86130                  mov     al, 0Dh ;~ 3A50:76D3
cs=0x3a50;eip=0x0076d5; 	S(OUT(dx, al));	// 86131                  out     dx, al          ; EGA: palette register: select colors for attribute AL: ;~ 3A50:76D5
cs=0x3a50;eip=0x0076d6; 	T(al = cl;);	// 86138                  mov     al, cl ;~ 3A50:76D6
cs=0x3a50;eip=0x0076d8; 	S(OUT(dx, al));	// 86139                  out     dx, al          ; EGA: palette register: select colors for attribute AL: ;~ 3A50:76D8
cs=0x3a50;eip=0x0076d9; 	T(CMP(*((awaypointsecond)+0x0C), 0));	// 86146                  cmp     byte ptr ds:aWaypointSecond+0Ch, 0 ; "condary Target" ;~ 3A50:76D9
cs=0x3a50;eip=0x0076de; 	J(JZ(loc_501d0));	// 86147                  jz      short loc_501D0 ;~ 3A50:76DE
cs=0x3a50;eip=0x0076e0; 	X(DEC(*((awaypointsecond)+0x0C)));	// 86148                  dec     byte ptr ds:aWaypointSecond+0Ch ; "condary Target" ;~ 3A50:76E0
cs=0x3a50;eip=0x0076e4; 	J(JNZ(loc_501c8));	// 86149                  jnz     short loc_501C8 ;~ 3A50:76E4
cs=0x3a50;eip=0x0076e6; 	T(SUB(bl, bl));	// 86150                  sub     bl, bl ;~ 3A50:76E6
loc_501c8:
	// 7480 
cs=0x3a50;eip=0x0076e8; 	T(al = 0x13;);	// 86153                  mov     al, 13h ;~ 3A50:76E8
cs=0x3a50;eip=0x0076ea; 	S(OUT(dx, al));	// 86154                  out     dx, al          ; EGA: horizontal pixel panning: ;~ 3A50:76EA
cs=0x3a50;eip=0x0076eb; 	T(al = bl;);	// 86157                  mov     al, bl ;~ 3A50:76EB
cs=0x3a50;eip=0x0076ed; 	T(AND(al, 7));	// 86158                  and     al, 7 ;~ 3A50:76ED
cs=0x3a50;eip=0x0076ef; 	S(OUT(dx, al));	// 86159                  out     dx, al          ; EGA: palette register: select colors for attribute AL: ;~ 3A50:76EF
loc_501d0:
	// 7481 
cs=0x3a50;eip=0x0076f0; 	T(CMP(*((abadgridfilefor)+0x0C), 0));	// 86168                  cmp     byte ptr cs:aBadGridFileFor+0Ch, 0 ; "e format." ;~ 3A50:76F0
cs=0x3a50;eip=0x0076f6; 	J(JZ(loc_501db));	// 86169                  jz      short loc_501DB ;~ 3A50:76F6
cs=0x3a50;eip=0x0076f8; 	T(al = 0x20;);	// 86170                  mov     al, 20h ; ' ' ;~ 3A50:76F8
cs=0x3a50;eip=0x0076fa; 	S(OUT(dx, al));	// 86171                  out     dx, al          ; EGA: palette register: select colors for attribute AL: ;~ 3A50:76FA
loc_501db:
	// 7482 
cs=0x3a50;eip=0x0076fb; 	X(POP(ds));	// 86181                  pop     ds ;~ 3A50:76FB
cs=0x3a50;eip=0x0076fc; 	T(STI);	// 86183                  sti ;~ 3A50:76FC
cs=0x3a50;eip=0x0076fd; 	J(RETF(0));	// 86184                  retf ;~ 3A50:76FD
ret_3a50_76fe:
	// 7483 
cs=0x3a50;eip=0x0076fe; 	X(PUSH(bp));	// 86186                  push    bp ;~ 3A50:76FE
cs=0x3a50;eip=0x0076ff; 	T(bp = sp;);	// 86187                  mov     bp, sp ;~ 3A50:76FF
cs=0x3a50;eip=0x007701; 	X(PUSH(ds));	// 86188                  push    ds ;~ 3A50:7701
cs=0x3a50;eip=0x007702; 	T(bx = 0x4C7A;);	// 86189                  mov     bx, 4C7Ah ;~ 3A50:7702
cs=0x3a50;eip=0x007705; 	T(ds = bx;);	// 86190                  mov     ds, bx ;~ 3A50:7705
cs=0x3a50;eip=0x007707; 	T(MOV(al, *(raddr(ss,bp+6))));	// 86192                  mov     al, [bp+6] ;~ 3A50:7707
cs=0x3a50;eip=0x00770a; 	X(*((awaypointsecond)+0x0C) = al;);	// 86193                  mov     byte ptr ds:aWaypointSecond+0Ch, al ; "condary Target" ;~ 3A50:770A
cs=0x3a50;eip=0x00770d; 	X(POP(ds));	// 86194                  pop     ds ;~ 3A50:770D
cs=0x3a50;eip=0x00770e; 	X(POP(bp));	// 86196                  pop     bp ;~ 3A50:770E
cs=0x3a50;eip=0x00770f; 	J(RETF(0));	// 86197                  retf ;~ 3A50:770F
ret_3a50_7710:
	// 7484 
cs=0x3a50;eip=0x007710; 	T(CLI);	// 86199                  cli ;~ 3A50:7710
cs=0x3a50;eip=0x007711; 	X(PUSH(bp));	// 86200                  push    bp ;~ 3A50:7711
cs=0x3a50;eip=0x007712; 	T(bp = sp;);	// 86201                  mov     bp, sp ;~ 3A50:7712
cs=0x3a50;eip=0x007714; 	X(PUSH(si));	// 86202                  push    si ;~ 3A50:7714
cs=0x3a50;eip=0x007715; 	X(PUSH(di));	// 86203                  push    di ;~ 3A50:7715
cs=0x3a50;eip=0x007716; 	X(PUSH(ds));	// 86204                  push    ds ;~ 3A50:7716
cs=0x3a50;eip=0x007717; 	X(PUSH(es));	// 86205                  push    es ;~ 3A50:7717
cs=0x3a50;eip=0x007718; 	T(es = word_48ae6;);	// 86206                  mov     es, cs:word_48AE6 ;~ 3A50:7718
cs=0x3a50;eip=0x00771d; 	T(MOV(ds, *(dw*)(raddr(ss,bp+6))));	// 86207                  mov     ds, word ptr [bp+6] ;~ 3A50:771D
cs=0x3a50;eip=0x007720; 	T(dx = 0x3C4;);	// 86208                  mov     dx, 3C4h ;~ 3A50:7720
cs=0x3a50;eip=0x007723; 	T(ax = 0x102;);	// 86209                  mov     ax, 102h ;~ 3A50:7723
cs=0x3a50;eip=0x007726; 	S(OUT(dx, ax));	// 86210                  out     dx, ax          ; EGA: sequencer address reg ;~ 3A50:7726
cs=0x3a50;eip=0x007727; 	T(INC(dx));	// 86212                  inc     dx ;~ 3A50:7727
cs=0x3a50;eip=0x007728; 	T(si = 0;);	// 86213                  mov     si, 0 ;~ 3A50:7728
cs=0x3a50;eip=0x00772b; 	T(di = si;);	// 86214                  mov     di, si ;~ 3A50:772B
cs=0x3a50;eip=0x00772d; 	T(cx = 0x0FA0;);	// 86215                  mov     cx, 0FA0h ;~ 3A50:772D
	// 86216                  rep movsw ;~ 3A50:7730
cs=0x3a50;eip=0x007730; 	X(	REP MOVSW);	// 86216                  rep movsw ;~ 3A50:7730
cs=0x3a50;eip=0x007732; 	T(al = 2;);	// 86217                  mov     al, 2 ;~ 3A50:7732
cs=0x3a50;eip=0x007734; 	S(OUT(dx, al));	// 86218                  out     dx, al          ; EGA port: sequencer data register ;~ 3A50:7734
cs=0x3a50;eip=0x007735; 	T(di = 0;);	// 86219                  mov     di, 0 ;~ 3A50:7735
cs=0x3a50;eip=0x007738; 	T(cx = 0x0FA0;);	// 86220                  mov     cx, 0FA0h ;~ 3A50:7738
	// 86221                  rep movsw ;~ 3A50:773B
cs=0x3a50;eip=0x00773b; 	X(	REP MOVSW);	// 86221                  rep movsw ;~ 3A50:773B
cs=0x3a50;eip=0x00773d; 	T(al = 4;);	// 86222                  mov     al, 4 ;~ 3A50:773D
cs=0x3a50;eip=0x00773f; 	S(OUT(dx, al));	// 86223                  out     dx, al          ; EGA port: graphics controller data register ;~ 3A50:773F
cs=0x3a50;eip=0x007740; 	T(di = 0;);	// 86224                  mov     di, 0 ;~ 3A50:7740
cs=0x3a50;eip=0x007743; 	T(cx = 0x0FA0;);	// 86225                  mov     cx, 0FA0h ;~ 3A50:7743
	// 86226                  rep movsw ;~ 3A50:7746
cs=0x3a50;eip=0x007746; 	X(	REP MOVSW);	// 86226                  rep movsw ;~ 3A50:7746
cs=0x3a50;eip=0x007748; 	T(al = 8;);	// 86227                  mov     al, 8 ;~ 3A50:7748
cs=0x3a50;eip=0x00774a; 	S(OUT(dx, al));	// 86228                  out     dx, al          ; EGA port: graphics controller data register ;~ 3A50:774A
cs=0x3a50;eip=0x00774b; 	T(di = 0;);	// 86229                  mov     di, 0 ;~ 3A50:774B
cs=0x3a50;eip=0x00774e; 	T(cx = 0x0FA0;);	// 86230                  mov     cx, 0FA0h ;~ 3A50:774E
	// 86231                  rep movsw ;~ 3A50:7751
cs=0x3a50;eip=0x007751; 	X(	REP MOVSW);	// 86231                  rep movsw ;~ 3A50:7751
cs=0x3a50;eip=0x007753; 	T(al = 0x0F;);	// 86232                  mov     al, 0Fh ;~ 3A50:7753
cs=0x3a50;eip=0x007755; 	S(OUT(dx, al));	// 86233                  out     dx, al          ; EGA port: graphics controller data register ;~ 3A50:7755
cs=0x3a50;eip=0x007756; 	T(STI);	// 86234                  sti ;~ 3A50:7756
cs=0x3a50;eip=0x007757; 	X(POP(es));	// 86235                  pop     es ;~ 3A50:7757
cs=0x3a50;eip=0x007758; 	X(POP(ds));	// 86236                  pop     ds ;~ 3A50:7758
cs=0x3a50;eip=0x007759; 	X(POP(di));	// 86237                  pop     di ;~ 3A50:7759
cs=0x3a50;eip=0x00775a; 	X(POP(si));	// 86238                  pop     si ;~ 3A50:775A
cs=0x3a50;eip=0x00775b; 	X(POP(bp));	// 86239                  pop     bp ;~ 3A50:775B
cs=0x3a50;eip=0x00775c; 	J(RETF(0));	// 86240                  retf ;~ 3A50:775C
ret_3a50_775d:
	// 7485 
cs=0x3a50;eip=0x00775d; 	X(PUSH(ds));	// 86242                  push    ds ;~ 3A50:775D
cs=0x3a50;eip=0x00775e; 	T(ax = 0x4C7A;);	// 86243                  mov     ax, 4C7Ah ;~ 3A50:775E
cs=0x3a50;eip=0x007761; 	T(ds = ax;);	// 86244                  mov     ds, ax ;~ 3A50:7761
cs=0x3a50;eip=0x007763; 	T(SHL(di, 1));	// 86246                  shl     di, 1 ;~ 3A50:7763
cs=0x3a50;eip=0x007765; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x2CC))));	// 86247                  mov     ax, [di+2CCh] ;~ 3A50:7765
cs=0x3a50;eip=0x007769; 	X(POP(ds));	// 86248                  pop     ds ;~ 3A50:7769
cs=0x3a50;eip=0x00776a; 	J(RETF(0));	// 86250                  retf ;~ 3A50:776A
ret_3a50_776b:
	// 7486 
cs=0x3a50;eip=0x00776b; 	J(RETF(0));	// 86252                  retf ;~ 3A50:776B
ret_3a50_776c:
	// 7487 
cs=0x3a50;eip=0x00776c; 	J(RETF(0));	// 86254                  retf ;~ 3A50:776C
ret_3a50_776d:
	// 7488 
cs=0x3a50;eip=0x00776d; 	T(SHL(si, 1));	// 86256                  shl     si, 1 ;~ 3A50:776D
cs=0x3a50;eip=0x00776f; 	T(MOV(ax, *(dw*)(raddr(cs,si+0x0A72))));	// 86257                  mov     ax, cs:[si+0A72h] ;~ 3A50:776F
cs=0x3a50;eip=0x007774; 	T(es = ax;);	// 86258                  mov     es, ax ;~ 3A50:7774
cs=0x3a50;eip=0x007776; 	J(RETF(0));	// 86259                  retf ;~ 3A50:7776
ret_3a50_7777:
	// 7489 
cs=0x3a50;eip=0x007777; 	J(RETF(0));	// 86261                  retf ;~ 3A50:7777
ret_3a50_7778:
	// 7490 
cs=0x3a50;eip=0x007778; 	X(PUSH(ds));	// 86263                  push    ds ;~ 3A50:7778
cs=0x3a50;eip=0x007779; 	T(ax = 0x4C7A;);	// 86264                  mov     ax, 4C7Ah ;~ 3A50:7779
cs=0x3a50;eip=0x00777c; 	T(ds = ax;);	// 86265                  mov     ds, ax ;~ 3A50:777C
cs=0x3a50;eip=0x00777e; 	T(di = 0x204C;);	// 86267                  mov     di, 204Ch ;~ 3A50:777E
cs=0x3a50;eip=0x007781; 	T(cx = 0x140;);	// 86268                  mov     cx, 140h ;~ 3A50:7781
cs=0x3a50;eip=0x007784; 	T(ah = 0x80;);	// 86269                  mov     ah, 80h ;~ 3A50:7784
cs=0x3a50;eip=0x007786; 	T(XOR(bx, bx));	// 86270                  xor     bx, bx ;~ 3A50:7786
cs=0x3a50;eip=0x007788; 	T(XOR(dx, dx));	// 86271                  xor     dx, dx ;~ 3A50:7788
loc_5026a:
	// 7491 
cs=0x3a50;eip=0x00778a; 	T(MOV(al, *(raddr(ss,bp+0))));	// 86274                  mov     al, [bp+0] ;~ 3A50:778A
cs=0x3a50;eip=0x00778d; 	T(INC(bp));	// 86275                  inc     bp ;~ 3A50:778D
cs=0x3a50;eip=0x00778e; 	T(SHR(al, 1));	// 86276                  shr     al, 1 ;~ 3A50:778E
cs=0x3a50;eip=0x007790; 	J(JNC(loc_50274));	// 86277                  jnb     short loc_50274 ;~ 3A50:7790
cs=0x3a50;eip=0x007792; 	T(OR(bl, ah));	// 86278                  or      bl, ah ;~ 3A50:7792
loc_50274:
	// 7492 
cs=0x3a50;eip=0x007794; 	T(SHR(al, 1));	// 86281                  shr     al, 1 ;~ 3A50:7794
cs=0x3a50;eip=0x007796; 	J(JNC(loc_5027a));	// 86282                  jnb     short loc_5027A ;~ 3A50:7796
cs=0x3a50;eip=0x007798; 	T(OR(bh, ah));	// 86283                  or      bh, ah ;~ 3A50:7798
loc_5027a:
	// 7493 
cs=0x3a50;eip=0x00779a; 	T(SHR(al, 1));	// 86286                  shr     al, 1 ;~ 3A50:779A
cs=0x3a50;eip=0x00779c; 	J(JNC(loc_50280));	// 86287                  jnb     short loc_50280 ;~ 3A50:779C
cs=0x3a50;eip=0x00779e; 	T(OR(dl, ah));	// 86288                  or      dl, ah ;~ 3A50:779E
loc_50280:
	// 7494 
cs=0x3a50;eip=0x0077a0; 	T(SHR(al, 1));	// 86291                  shr     al, 1 ;~ 3A50:77A0
cs=0x3a50;eip=0x0077a2; 	J(JNC(loc_50286));	// 86292                  jnb     short loc_50286 ;~ 3A50:77A2
cs=0x3a50;eip=0x0077a4; 	T(OR(dh, ah));	// 86293                  or      dh, ah ;~ 3A50:77A4
loc_50286:
	// 7495 
cs=0x3a50;eip=0x0077a6; 	T(ROR(ah, 1));	// 86296                  ror     ah, 1 ;~ 3A50:77A6
cs=0x3a50;eip=0x0077a8; 	J(JNC(loc_5029a));	// 86297                  jnb     short loc_5029A ;~ 3A50:77A8
cs=0x3a50;eip=0x0077aa; 	X(MOV(*(raddr(ds,di)), bl));	// 86298                  mov     [di], bl ;~ 3A50:77AA
cs=0x3a50;eip=0x0077ac; 	X(MOV(*(raddr(ds,di+0x28)), bh));	// 86299                  mov     [di+28h], bh ;~ 3A50:77AC
cs=0x3a50;eip=0x0077af; 	X(MOV(*(raddr(ds,di+0x50)), dl));	// 86300                  mov     [di+50h], dl ;~ 3A50:77AF
cs=0x3a50;eip=0x0077b2; 	X(MOV(*(raddr(ds,di+0x78)), dh));	// 86301                  mov     [di+78h], dh ;~ 3A50:77B2
cs=0x3a50;eip=0x0077b5; 	T(INC(di));	// 86302                  inc     di ;~ 3A50:77B5
cs=0x3a50;eip=0x0077b6; 	T(XOR(bx, bx));	// 86303                  xor     bx, bx ;~ 3A50:77B6
cs=0x3a50;eip=0x0077b8; 	T(XOR(dx, dx));	// 86304                  xor     dx, dx ;~ 3A50:77B8
loc_5029a:
	// 7496 
cs=0x3a50;eip=0x0077ba; 	J(LOOP(loc_5026a));	// 86307                  loop    loc_5026A ;~ 3A50:77BA
cs=0x3a50;eip=0x0077bc; 	X(POP(ds));	// 86308                  pop     ds ;~ 3A50:77BC
cs=0x3a50;eip=0x0077bd; 	J(RETF(0));	// 86310                  retf ;~ 3A50:77BD
ret_3a50_77be:
	// 7497 
cs=0x3a50;eip=0x0077be; 	X(PUSH(ds));	// 86312                  push    ds ;~ 3A50:77BE
cs=0x3a50;eip=0x0077bf; 	T(ax = 0x4C7A;);	// 86313                  mov     ax, 4C7Ah ;~ 3A50:77BF
cs=0x3a50;eip=0x0077c2; 	T(ds = ax;);	// 86314                  mov     ds, ax ;~ 3A50:77C2
cs=0x3a50;eip=0x0077c4; 	T(di = 0x204C;);	// 86316                  mov     di, 204Ch ;~ 3A50:77C4
cs=0x3a50;eip=0x0077c7; 	T(cx = 0x140;);	// 86317                  mov     cx, 140h ;~ 3A50:77C7
cs=0x3a50;eip=0x0077ca; 	T(ah = 0x80;);	// 86318                  mov     ah, 80h ;~ 3A50:77CA
cs=0x3a50;eip=0x0077cc; 	T(XOR(bx, bx));	// 86319                  xor     bx, bx ;~ 3A50:77CC
cs=0x3a50;eip=0x0077ce; 	T(XOR(dx, dx));	// 86320                  xor     dx, dx ;~ 3A50:77CE
cs=0x3a50;eip=0x0077d0; 	X(MOV(*(raddr(ds,di+0x0A0)), bl));	// 86321                  mov     [di+0A0h], bl ;~ 3A50:77D0
loc_502b4:
	// 7498 
cs=0x3a50;eip=0x0077d4; 	T(MOV(al, *(raddr(ss,bp+0))));	// 86324                  mov     al, [bp+0] ;~ 3A50:77D4
cs=0x3a50;eip=0x0077d7; 	T(INC(bp));	// 86325                  inc     bp ;~ 3A50:77D7
cs=0x3a50;eip=0x0077d8; 	T(OR(al, al));	// 86326                  or      al, al ;~ 3A50:77D8
cs=0x3a50;eip=0x0077da; 	J(JZ(loc_502c0));	// 86327                  jz      short loc_502C0 ;~ 3A50:77DA
cs=0x3a50;eip=0x0077dc; 	X(OR(*(raddr(ds,di+0x0A0)), ah));	// 86328                  or      [di+0A0h], ah ;~ 3A50:77DC
loc_502c0:
	// 7499 
cs=0x3a50;eip=0x0077e0; 	T(ROR(al, 1));	// 86331                  ror     al, 1 ;~ 3A50:77E0
cs=0x3a50;eip=0x0077e2; 	J(JNC(loc_502c6));	// 86332                  jnb     short loc_502C6 ;~ 3A50:77E2
cs=0x3a50;eip=0x0077e4; 	T(OR(bl, ah));	// 86333                  or      bl, ah ;~ 3A50:77E4
loc_502c6:
	// 7500 
cs=0x3a50;eip=0x0077e6; 	T(ROR(al, 1));	// 86336                  ror     al, 1 ;~ 3A50:77E6
cs=0x3a50;eip=0x0077e8; 	J(JNC(loc_502cc));	// 86337                  jnb     short loc_502CC ;~ 3A50:77E8
cs=0x3a50;eip=0x0077ea; 	T(OR(bh, ah));	// 86338                  or      bh, ah ;~ 3A50:77EA
loc_502cc:
	// 7501 
cs=0x3a50;eip=0x0077ec; 	T(ROR(al, 1));	// 86341                  ror     al, 1 ;~ 3A50:77EC
cs=0x3a50;eip=0x0077ee; 	J(JNC(loc_502d2));	// 86342                  jnb     short loc_502D2 ;~ 3A50:77EE
cs=0x3a50;eip=0x0077f0; 	T(OR(dl, ah));	// 86343                  or      dl, ah ;~ 3A50:77F0
loc_502d2:
	// 7502 
cs=0x3a50;eip=0x0077f2; 	T(ROR(al, 1));	// 86346                  ror     al, 1 ;~ 3A50:77F2
cs=0x3a50;eip=0x0077f4; 	J(JNC(loc_502d8));	// 86347                  jnb     short loc_502D8 ;~ 3A50:77F4
cs=0x3a50;eip=0x0077f6; 	T(OR(dh, ah));	// 86348                  or      dh, ah ;~ 3A50:77F6
loc_502d8:
	// 7503 
cs=0x3a50;eip=0x0077f8; 	T(ROR(ah, 1));	// 86351                  ror     ah, 1 ;~ 3A50:77F8
cs=0x3a50;eip=0x0077fa; 	J(JNC(loc_502f0));	// 86352                  jnb     short loc_502F0 ;~ 3A50:77FA
cs=0x3a50;eip=0x0077fc; 	X(MOV(*(raddr(ds,di)), bl));	// 86353                  mov     [di], bl ;~ 3A50:77FC
cs=0x3a50;eip=0x0077fe; 	X(MOV(*(raddr(ds,di+0x28)), bh));	// 86354                  mov     [di+28h], bh ;~ 3A50:77FE
cs=0x3a50;eip=0x007801; 	X(MOV(*(raddr(ds,di+0x50)), dl));	// 86355                  mov     [di+50h], dl ;~ 3A50:7801
cs=0x3a50;eip=0x007804; 	X(MOV(*(raddr(ds,di+0x78)), dh));	// 86356                  mov     [di+78h], dh ;~ 3A50:7804
cs=0x3a50;eip=0x007807; 	T(INC(di));	// 86357                  inc     di ;~ 3A50:7807
cs=0x3a50;eip=0x007808; 	T(XOR(bx, bx));	// 86358                  xor     bx, bx ;~ 3A50:7808
cs=0x3a50;eip=0x00780a; 	T(XOR(dx, dx));	// 86359                  xor     dx, dx ;~ 3A50:780A
cs=0x3a50;eip=0x00780c; 	X(MOV(*(raddr(ds,di+0x0A0)), bl));	// 86360                  mov     [di+0A0h], bl ;~ 3A50:780C
loc_502f0:
	// 7504 
cs=0x3a50;eip=0x007810; 	J(LOOP(loc_502b4));	// 86363                  loop    loc_502B4 ;~ 3A50:7810
cs=0x3a50;eip=0x007812; 	X(POP(ds));	// 86364                  pop     ds ;~ 3A50:7812
cs=0x3a50;eip=0x007813; 	J(RETF(0));	// 86366                  retf ;~ 3A50:7813
ret_3a50_7814:
	// 7505 
cs=0x3a50;eip=0x007814; 	X(PUSH(ds));	// 86368                  push    ds ;~ 3A50:7814
cs=0x3a50;eip=0x007815; 	X(PUSH(bx));	// 86369                  push    bx ;~ 3A50:7815
cs=0x3a50;eip=0x007816; 	T(ax = 0x4C7A;);	// 86370                  mov     ax, 4C7Ah ;~ 3A50:7816
cs=0x3a50;eip=0x007819; 	T(ds = ax;);	// 86371                  mov     ds, ax ;~ 3A50:7819
cs=0x3a50;eip=0x00781b; 	T(si = 0x204C;);	// 86373                  mov     si, 204Ch ;~ 3A50:781B
cs=0x3a50;eip=0x00781e; 	T(bx = di;);	// 86374                  mov     bx, di ;~ 3A50:781E
cs=0x3a50;eip=0x007820; 	T(dx = 0x3C4;);	// 86375                  mov     dx, 3C4h ;~ 3A50:7820
cs=0x3a50;eip=0x007823; 	T(al = 2;);	// 86376                  mov     al, 2 ;~ 3A50:7823
cs=0x3a50;eip=0x007825; 	T(CLI);	// 86377                  cli ;~ 3A50:7825
cs=0x3a50;eip=0x007826; 	S(OUT(dx, al));	// 86378                  out     dx, al          ; EGA: sequencer address reg ;~ 3A50:7826
cs=0x3a50;eip=0x007827; 	T(INC(dx));	// 86380                  inc     dx ;~ 3A50:7827
cs=0x3a50;eip=0x007828; 	T(al = 1;);	// 86381                  mov     al, 1 ;~ 3A50:7828
cs=0x3a50;eip=0x00782a; 	S(OUT(dx, al));	// 86382                  out     dx, al          ; EGA port: sequencer data register ;~ 3A50:782A
cs=0x3a50;eip=0x00782b; 	T(cx = 0x14;);	// 86383                  mov     cx, 14h ;~ 3A50:782B
	// 86384                  rep movsw ;~ 3A50:782E
cs=0x3a50;eip=0x00782e; 	X(	REP MOVSW);	// 86384                  rep movsw ;~ 3A50:782E
cs=0x3a50;eip=0x007830; 	T(al = 2;);	// 86385                  mov     al, 2 ;~ 3A50:7830
cs=0x3a50;eip=0x007832; 	S(OUT(dx, al));	// 86386                  out     dx, al          ; EGA port: sequencer data register ;~ 3A50:7832
cs=0x3a50;eip=0x007833; 	T(cx = 0x14;);	// 86387                  mov     cx, 14h ;~ 3A50:7833
cs=0x3a50;eip=0x007836; 	T(di = bx;);	// 86388                  mov     di, bx ;~ 3A50:7836
	// 86389                  rep movsw ;~ 3A50:7838
cs=0x3a50;eip=0x007838; 	X(	REP MOVSW);	// 86389                  rep movsw ;~ 3A50:7838
cs=0x3a50;eip=0x00783a; 	T(al = 4;);	// 86390                  mov     al, 4 ;~ 3A50:783A
cs=0x3a50;eip=0x00783c; 	S(OUT(dx, al));	// 86391                  out     dx, al          ; EGA port: sequencer data register ;~ 3A50:783C
cs=0x3a50;eip=0x00783d; 	T(cx = 0x14;);	// 86392                  mov     cx, 14h ;~ 3A50:783D
cs=0x3a50;eip=0x007840; 	T(di = bx;);	// 86393                  mov     di, bx ;~ 3A50:7840
	// 86394                  rep movsw ;~ 3A50:7842
cs=0x3a50;eip=0x007842; 	X(	REP MOVSW);	// 86394                  rep movsw ;~ 3A50:7842
cs=0x3a50;eip=0x007844; 	T(al = 8;);	// 86395                  mov     al, 8 ;~ 3A50:7844
cs=0x3a50;eip=0x007846; 	S(OUT(dx, al));	// 86396                  out     dx, al          ; EGA port: sequencer data register ;~ 3A50:7846
cs=0x3a50;eip=0x007847; 	T(cx = 0x14;);	// 86397                  mov     cx, 14h ;~ 3A50:7847
cs=0x3a50;eip=0x00784a; 	T(di = bx;);	// 86398                  mov     di, bx ;~ 3A50:784A
	// 86399                  rep movsw ;~ 3A50:784C
cs=0x3a50;eip=0x00784c; 	X(	REP MOVSW);	// 86399                  rep movsw ;~ 3A50:784C
cs=0x3a50;eip=0x00784e; 	T(al = 0x0F;);	// 86400                  mov     al, 0Fh ;~ 3A50:784E
cs=0x3a50;eip=0x007850; 	S(OUT(dx, al));	// 86401                  out     dx, al          ; EGA port: sequencer data register ;~ 3A50:7850
cs=0x3a50;eip=0x007851; 	T(STI);	// 86402                  sti ;~ 3A50:7851
cs=0x3a50;eip=0x007852; 	X(POP(bx));	// 86403                  pop     bx ;~ 3A50:7852
cs=0x3a50;eip=0x007853; 	X(POP(ds));	// 86404                  pop     ds ;~ 3A50:7853
cs=0x3a50;eip=0x007854; 	J(RETF(0));	// 86406                  retf ;~ 3A50:7854
ret_3a50_7855:
	// 7506 
cs=0x3a50;eip=0x007855; 	X(PUSH(ds));	// 86408                  push    ds ;~ 3A50:7855
cs=0x3a50;eip=0x007856; 	T(ax = 0x4C7A;);	// 86409                  mov     ax, 4C7Ah ;~ 3A50:7856
cs=0x3a50;eip=0x007859; 	T(ds = ax;);	// 86410                  mov     ds, ax ;~ 3A50:7859
cs=0x3a50;eip=0x00785b; 	T(si = 0x204C;);	// 86412                  mov     si, 204Ch ;~ 3A50:785B
cs=0x3a50;eip=0x00785e; 	T(ax = di;);	// 86413                  mov     ax, di ;~ 3A50:785E
cs=0x3a50;eip=0x007860; 	T(cx = 0x14;);	// 86414                  mov     cx, 14h ;~ 3A50:7860
	// 86415                  rep movsw ;~ 3A50:7863
cs=0x3a50;eip=0x007863; 	X(	REP MOVSW);	// 86415                  rep movsw ;~ 3A50:7863
cs=0x3a50;eip=0x007865; 	T(di = ax;);	// 86416                  mov     di, ax ;~ 3A50:7865
cs=0x3a50;eip=0x007867; 	T(ADD(di, 0x1F40));	// 86417                  add     di, 1F40h ;~ 3A50:7867
cs=0x3a50;eip=0x00786b; 	T(cx = 0x14;);	// 86418                  mov     cx, 14h ;~ 3A50:786B
	// 86419                  rep movsw ;~ 3A50:786E
cs=0x3a50;eip=0x00786e; 	X(	REP MOVSW);	// 86419                  rep movsw ;~ 3A50:786E
cs=0x3a50;eip=0x007870; 	T(di = ax;);	// 86420                  mov     di, ax ;~ 3A50:7870
cs=0x3a50;eip=0x007872; 	T(ADD(di, 0x3E80));	// 86421                  add     di, 3E80h ;~ 3A50:7872
cs=0x3a50;eip=0x007876; 	T(cx = 0x14;);	// 86422                  mov     cx, 14h ;~ 3A50:7876
	// 86423                  rep movsw ;~ 3A50:7879
cs=0x3a50;eip=0x007879; 	X(	REP MOVSW);	// 86423                  rep movsw ;~ 3A50:7879
cs=0x3a50;eip=0x00787b; 	T(di = ax;);	// 86424                  mov     di, ax ;~ 3A50:787B
cs=0x3a50;eip=0x00787d; 	T(ADD(di, 0x5DC0));	// 86425                  add     di, 5DC0h ;~ 3A50:787D
cs=0x3a50;eip=0x007881; 	T(cx = 0x14;);	// 86426                  mov     cx, 14h ;~ 3A50:7881
	// 86427                  rep movsw ;~ 3A50:7884
cs=0x3a50;eip=0x007884; 	X(	REP MOVSW);	// 86427                  rep movsw ;~ 3A50:7884
cs=0x3a50;eip=0x007886; 	T(di = ax;);	// 86428                  mov     di, ax ;~ 3A50:7886
cs=0x3a50;eip=0x007888; 	T(ADD(di, 0x7D00));	// 86429                  add     di, 7D00h ;~ 3A50:7888
cs=0x3a50;eip=0x00788c; 	T(cx = 0x14;);	// 86430                  mov     cx, 14h ;~ 3A50:788C
	// 86431                  rep movsw ;~ 3A50:788F
cs=0x3a50;eip=0x00788f; 	X(	REP MOVSW);	// 86431                  rep movsw ;~ 3A50:788F
cs=0x3a50;eip=0x007891; 	X(POP(ds));	// 86432                  pop     ds ;~ 3A50:7891
cs=0x3a50;eip=0x007892; 	J(RETF(0));	// 86434                  retf ;~ 3A50:7892
ret_3a50_7893:
	// 7507 
cs=0x3a50;eip=0x007893; 	X(PUSH(ds));	// 86436                  push    ds ;~ 3A50:7893
cs=0x3a50;eip=0x007894; 	T(ax = 0x3C7A;);	// 86437                  mov     ax, 3C7Ah ;~ 3A50:7894
cs=0x3a50;eip=0x007897; 	T(ds = ax;);	// 86438                  mov     ds, ax ;~ 3A50:7897
cs=0x3a50;eip=0x007899; 	T(si = 0x204C;);	// 86440                  mov     si, 204Ch ;~ 3A50:7899
cs=0x3a50;eip=0x00789c; 	T(ax = di;);	// 86441                  mov     ax, di ;~ 3A50:789C
cs=0x3a50;eip=0x00789e; 	T(cx = 0x14;);	// 86442                  mov     cx, 14h ;~ 3A50:789E
	// 86443                  rep movsw ;~ 3A50:78A1
cs=0x3a50;eip=0x0078a1; 	X(	REP MOVSW);	// 86443                  rep movsw ;~ 3A50:78A1
cs=0x3a50;eip=0x0078a3; 	T(di = ax;);	// 86444                  mov     di, ax ;~ 3A50:78A3
cs=0x3a50;eip=0x0078a5; 	T(ADD(di, 0x1F40));	// 86445                  add     di, 1F40h ;~ 3A50:78A5
cs=0x3a50;eip=0x0078a9; 	T(cx = 0x14;);	// 86446                  mov     cx, 14h ;~ 3A50:78A9
	// 86447                  rep movsw ;~ 3A50:78AC
cs=0x3a50;eip=0x0078ac; 	X(	REP MOVSW);	// 86447                  rep movsw ;~ 3A50:78AC
cs=0x3a50;eip=0x0078ae; 	T(di = ax;);	// 86448                  mov     di, ax ;~ 3A50:78AE
cs=0x3a50;eip=0x0078b0; 	T(ADD(di, 0x3E80));	// 86449                  add     di, 3E80h ;~ 3A50:78B0
cs=0x3a50;eip=0x0078b4; 	T(cx = 0x14;);	// 86450                  mov     cx, 14h ;~ 3A50:78B4
	// 86451                  rep movsw ;~ 3A50:78B7
cs=0x3a50;eip=0x0078b7; 	X(	REP MOVSW);	// 86451                  rep movsw ;~ 3A50:78B7
cs=0x3a50;eip=0x0078b9; 	T(di = ax;);	// 86452                  mov     di, ax ;~ 3A50:78B9
cs=0x3a50;eip=0x0078bb; 	T(ADD(di, 0x5DC0));	// 86453                  add     di, 5DC0h ;~ 3A50:78BB
cs=0x3a50;eip=0x0078bf; 	T(cx = 0x14;);	// 86454                  mov     cx, 14h ;~ 3A50:78BF
	// 86455                  rep movsw ;~ 3A50:78C2
cs=0x3a50;eip=0x0078c2; 	X(	REP MOVSW);	// 86455                  rep movsw ;~ 3A50:78C2
cs=0x3a50;eip=0x0078c4; 	X(POP(ds));	// 86456                  pop     ds ;~ 3A50:78C4
cs=0x3a50;eip=0x0078c5; 	J(RETF(0));	// 86458                  retf ;~ 3A50:78C5
ret_3a50_78c6:
	// 7508 
cs=0x3a50;eip=0x0078c6; 	J(RETF(0));	// 86460                  retf ;~ 3A50:78C6
ret_3a50_78c7:
	// 7509 
cs=0x3a50;eip=0x0078c7; 	J(RETF(0));	// 86462                  retf ;~ 3A50:78C7
ret_3a50_78c8:
	// 7510 
cs=0x3a50;eip=0x0078c8; 	J(RETF(0));	// 86464                  retf ;~ 3A50:78C8

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
        case m2c::kloc_4f5f1: 	goto loc_4f5f1;
        case m2c::kloc_4f60e: 	goto loc_4f60e;
        case m2c::kloc_4f61a: 	goto loc_4f61a;
        case m2c::kloc_4f621: 	goto loc_4f621;
        case m2c::kloc_4f631: 	goto loc_4f631;
        case m2c::kloc_4f641: 	goto loc_4f641;
        case m2c::kloc_4f678: 	goto loc_4f678;
        case m2c::kloc_4f67b: 	goto loc_4f67b;
        case m2c::kloc_4f68a: 	goto loc_4f68a;
        case m2c::kloc_4f6a8: 	goto loc_4f6a8;
        case m2c::kloc_4f6b3: 	goto loc_4f6b3;
        case m2c::kloc_4f6b9: 	goto loc_4f6b9;
        case m2c::kloc_4f6da: 	goto loc_4f6da;
        case m2c::kloc_4f6ec: 	goto loc_4f6ec;
        case m2c::kloc_4f6f9: 	goto loc_4f6f9;
        case m2c::kloc_4f708: 	goto loc_4f708;
        case m2c::kloc_4f768: 	goto loc_4f768;
        case m2c::kloc_4f7bb: 	goto loc_4f7bb;
        case m2c::kloc_4f7c3: 	goto loc_4f7c3;
        case m2c::kloc_4f834: 	goto loc_4f834;
        case m2c::kloc_4f837: 	goto loc_4f837;
        case m2c::kloc_4f841: 	goto loc_4f841;
        case m2c::kloc_4f850: 	goto loc_4f850;
        case m2c::kloc_4f8ab: 	goto loc_4f8ab;
        case m2c::kloc_4f900: 	goto loc_4f900;
        case m2c::kloc_4f908: 	goto loc_4f908;
        case m2c::kloc_4f97b: 	goto loc_4f97b;
        case m2c::kloc_4f9b2: 	goto loc_4f9b2;
        case m2c::kloc_4f9c9: 	goto loc_4f9c9;
        case m2c::kloc_4f9d7: 	goto loc_4f9d7;
        case m2c::kloc_4f9dd: 	goto loc_4f9dd;
        case m2c::kloc_4f9eb: 	goto loc_4f9eb;
        case m2c::kloc_4f9f0: 	goto loc_4f9f0;
        case m2c::kloc_4fa07: 	goto loc_4fa07;
        case m2c::kloc_4fa15: 	goto loc_4fa15;
        case m2c::kloc_4fa1b: 	goto loc_4fa1b;
        case m2c::kloc_4fa29: 	goto loc_4fa29;
        case m2c::kloc_4fa2e: 	goto loc_4fa2e;
        case m2c::kloc_4fa35: 	goto loc_4fa35;
        case m2c::kloc_4fa38: 	goto loc_4fa38;
        case m2c::kloc_4fa4b: 	goto loc_4fa4b;
        case m2c::kloc_4fa66: 	goto loc_4fa66;
        case m2c::kloc_4fa72: 	goto loc_4fa72;
        case m2c::kloc_4fae4: 	goto loc_4fae4;
        case m2c::kloc_4fafc: 	goto loc_4fafc;
        case m2c::kloc_4fb26: 	goto loc_4fb26;
        case m2c::kloc_4fb6e: 	goto loc_4fb6e;
        case m2c::kloc_4fb8a: 	goto loc_4fb8a;
        case m2c::kloc_4fb8b: 	goto loc_4fb8b;
        case m2c::kloc_4fba0: 	goto loc_4fba0;
        case m2c::kloc_4fba7: 	goto loc_4fba7;
        case m2c::kloc_4fbf8: 	goto loc_4fbf8;
        case m2c::kloc_4fc03: 	goto loc_4fc03;
        case m2c::kloc_4fc3a: 	goto loc_4fc3a;
        case m2c::kloc_4fc3d: 	goto loc_4fc3d;
        case m2c::kloc_4fc52: 	goto loc_4fc52;
        case m2c::kloc_4fc7c: 	goto loc_4fc7c;
        case m2c::kloc_4fcc5: 	goto loc_4fcc5;
        case m2c::kloc_4fcf7: 	goto loc_4fcf7;
        case m2c::kloc_4fcfe: 	goto loc_4fcfe;
        case m2c::kloc_4fd50: 	goto loc_4fd50;
        case m2c::kloc_4fd5b: 	goto loc_4fd5b;
        case m2c::kloc_4fd5e: 	goto loc_4fd5e;
        case m2c::kloc_4fd5f: 	goto loc_4fd5f;
        case m2c::kloc_4fd8a: 	goto loc_4fd8a;
        case m2c::kloc_4fdad: 	goto loc_4fdad;
        case m2c::kloc_4fe06: 	goto loc_4fe06;
        case m2c::kloc_4fe1d: 	goto loc_4fe1d;
        case m2c::kloc_4fe3a: 	goto loc_4fe3a;
        case m2c::kloc_4fe57: 	goto loc_4fe57;
        case m2c::kloc_4feb2: 	goto loc_4feb2;
        case m2c::kloc_4ff3b: 	goto loc_4ff3b;
        case m2c::kloc_4ff58: 	goto loc_4ff58;
        case m2c::kloc_4ff82: 	goto loc_4ff82;
        case m2c::kloc_4ffa0: 	goto loc_4ffa0;
        case m2c::kloc_4ffa9: 	goto loc_4ffa9;
        case m2c::kloc_4ffb0: 	goto loc_4ffb0;
        case m2c::kloc_4ffd8: 	goto loc_4ffd8;
        case m2c::kloc_4ffec: 	goto loc_4ffec;
        case m2c::kloc_50006: 	goto loc_50006;
        case m2c::kloc_50030: 	goto loc_50030;
        case m2c::kloc_5004d: 	goto loc_5004d;
        case m2c::kloc_50054: 	goto loc_50054;
        case m2c::kloc_5005b: 	goto loc_5005b;
        case m2c::kloc_50105: 	goto loc_50105;
        case m2c::kloc_50116: 	goto loc_50116;
        case m2c::kloc_50119: 	goto loc_50119;
        case m2c::kloc_5011d: 	goto loc_5011d;
        case m2c::kloc_50177: 	goto loc_50177;
        case m2c::kloc_501c8: 	goto loc_501c8;
        case m2c::kloc_501d0: 	goto loc_501d0;
        case m2c::kloc_501db: 	goto loc_501db;
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
        case m2c::kret_3a50_6ea2: 	goto ret_3a50_6ea2;
        case m2c::kret_3a50_6ec0: 	goto ret_3a50_6ec0;
        case m2c::kret_3a50_6f6e: 	goto ret_3a50_6f6e;
        case m2c::kret_3a50_7281: 	goto ret_3a50_7281;
        case m2c::kret_3a50_7340: 	goto ret_3a50_7340;
        case m2c::kret_3a50_73ed: 	goto ret_3a50_73ed;
        case m2c::kret_3a50_75a5: 	goto ret_3a50_75a5;
        case m2c::kret_3a50_7663: 	goto ret_3a50_7663;
        case m2c::kret_3a50_7683: 	goto ret_3a50_7683;
        case m2c::kret_3a50_76a7: 	goto ret_3a50_76a7;
        case m2c::kret_3a50_76fe: 	goto ret_3a50_76fe;
        case m2c::kret_3a50_7710: 	goto ret_3a50_7710;
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
        case m2c::kseg48ae_1300_proc: 	goto seg48ae_1300_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}


/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */
#include <algorithm>
#include <iterator>

#include "int8.h"
#include <curses.h>

#include "callback.h"
#include <unistd.h>
//namespace int8_ {
namespace m2c{ m2cf* _ENTRY_POINT_ = &mainproc;}


 bool _main(m2c::_offsets, struct m2c::_STATE* _state){return _group1(m2c::k_main, _state);}

 bool _int8(m2c::_offsets, struct m2c::_STATE* _state){return _group1(m2c::k_int8, _state);}


 bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    mainproc:
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _begin:
cs=0x192;eip=0x0000; _main:	// 12 
//	R(PUSH(cs));
	R(CALL(_main,0));
printf("exit %d\n", __LINE__);
exit(0);
    return true;
    __dispatch_call:
    switch (__disp) {
        case m2c::kmainproc: 	goto mainproc;
        default: printf("Jump to nowhere to 0x%x. See line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    _group1:
    X86_REGREF
    __disp = _i;

    if (__disp ==0) goto _begin;
    else goto __dispatch_call;
    _begin:

_main:	// 12 
cs=0x192;eip=0x000100; 
printf("begin %d\n", __LINE__);

//	R(PUSH(cs));
	R(CALL(_int8,0));
printf("begin2!!! %d\n", __LINE__);

cs=0x192;eip=0x00012a; 	R(RETN(0));	// 32 RETN(0) ;~ 0192:012A


_int8:	// 40 
printf("int8 %d\n", __LINE__);
cs=0x192;eip=0x00012b; 	R(POP(ax));	// 32 RETN(0) ;~ 0192:012A
//cs=0x192;eip=0x00012b; 	R(POP(ax));	// 32 RETN(0) ;~ 0192:012A
//cs=0x192;eip=0x00012b; 	R(ADD(sp,4));	// 32 RETN(0) ;~ 0192:012A
cs=0x192;eip=0x00012c; 	R(RETN(0));	// 32 RETN(0) ;~ 0192:012A

    return true;
    __dispatch_call:
    switch (__disp) {
        case m2c::k_int8: 	goto _int8;
        case m2c::k_main: 	goto _main;
        default: printf("Jump to nowhere to 0x%x. See line %d\n", __disp, __LINE__);/*stackDump();*/ abort();
    };
}



bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state){
    switch (__disp) {
        case m2c::k_main: 	_group1(__disp, _state); break;
        case m2c::k_int8: 	_group1(__disp, _state); break;
        case m2c::kmainproc: 	mainproc(0, _state); break;
        default: return false;//printf("Call to nowhere to 0x%x. See line %d\n", __disp, __LINE__);stackDump(); abort();
     };
     return true;
}

#include <algorithm>
#include <iterator>
#ifdef DOSBOX_CUSTOM
#include <numeric>

 #define MYCOPY(x) {m2c::set_type(x);m2c::mycopy((db*)&x,(db*)&tmp999,sizeof(tmp999),#x);}

 namespace m2c {
  void   Initializer()
#else
 #define MYCOPY(x) std::copy(std::begin(tmp999),std::end(tmp999),std::begin(x));
 namespace {
  struct Initializer {
   Initializer()
#endif
  {
    {char tmp999[1]={'A'};MYCOPY(byte_10164)}

   }


#ifndef DOSBOX_CUSTOM
  };
 static const Initializer i;
#endif


 }


//} // End of namespace

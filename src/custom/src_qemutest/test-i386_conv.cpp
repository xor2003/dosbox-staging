/*
 *  x86 CPU test
 *
 *  Copyright (c) 2003 Fabrice Bellard
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, see <http://www.gnu.org/licenses/>.
 */
#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
/*
#include <string.h>
#include <inttypes.h>
#include <math.h>
#include <signal.h>
#include <setjmp.h>
#include <errno.h>
#include <sys/ucontext.h>
#include <sys/mman.h>
*/
#include <iostream>
#include <ios>

#undef __x86_64__
#undef __SSE__

#if !defined(__x86_64__)
//#define TEST_VM86
//#define TEST_SEGS
#endif
//#define LINUX_VM86_IOPL_FIX
//#define TEST_P4_FLAGS
#ifdef __SSE__
#define TEST_SSE
#define TEST_CMOV  1
#define TEST_FCOMI 1
#else
#undef TEST_SSE
#define TEST_CMOV  1
#define TEST_FCOMI 1
#endif

#if defined(__x86_64__)
#define FMT64X "%016lx"
#define FMTLX "%016lx"
#define X86_64_ONLY(x) x
#else
#define FMT64X "%016" PRIx64
#define FMTLX "%08lx"
#define X86_64_ONLY(x)
#endif


#define xglue(x, y) x ## y
#define glue(x, y) xglue(x, y)
#define stringify(s)	tostring(s)
#define tostring(s)	#s

#define CC_C   	0x0001
#define CC_P 	0x0004
#define CC_A	0x0010
#define CC_Z	0x0040
#define CC_S    0x0080
#define CC_O    0x0800

#define __init_call	__attribute__ ((unused,__section__ ("initcall")))

//#define CC_MASK (CC_C | CC_P | CC_Z | CC_S | CC_O | CC_A)
#define CC_MASK (CC_C | CC_Z | CC_S | CC_O)


//--------------------------------------------
#define _BITS 32
#define _PROTECTED_MODE 1

#include <asm.h>

namespace m2c{
struct Memory{
db dummya_0[6688];
uint8_t str_buffer[4096];
    char table[256];

#ifdef DOSBOX_CUSTOM
    db filll[1024*1024*16];
#endif
                        db stack[STACK_SIZE];
                        db heap[HEAP_SIZE];
                };
db(& stack)[STACK_SIZE]=m.stack;
db(& heap)[HEAP_SIZE]=m.heap;
}
db(& str_buffer)[4096]=m2c::m.str_buffer;
    char(& table)[256]=m2c::m.table;

namespace m2c{
static struct Memory mm;
struct Memory& m = mm;
}


m2c::_STATE sstate;
m2c::_STATE* _state=&sstate;

namespace m2c{
//void log_debug(const char *fmt, ...){printf("unimp ");}
X86_REGREF

//--------------------------------------------
#define __init_call	__attribute__ ((unused,__section__ ("initcall")))

#if defined(__x86_64__)
static inline dq i2l(dd v)
{
    return v | ((v ^ 0xabcd) << 32);
}
#else
static inline dd i2l(dd v)
{
    return v;
}
#endif

void exec_addl(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags; 
    PUSH(iflags);POPF;ADD(*(dd*)&res, (dd)s1);PUSHF;POP(flags);
 printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n", "addl", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));;
}

void exec_addw(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;ADD(*(dw*)&res, (dw)s1);PUSHF;POP(flags);
 printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n", "addw", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));;
}

void exec_addb(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;ADD(*(db*)&res, (db)s1);PUSHF;POP(flags);
 printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n", "addb", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));;
}


void exec_add(dd s0, dd s1)
{
    s0 = i2l(s0);
    s1 = i2l(s1);



    exec_addl(s0, s1, 0);
    exec_addw(s0, s1, 0);
    exec_addb(s0, s1, 0);

}

void test_add(void)
{
    exec_add(0x12345678, 0x812FADA);
    exec_add(0x12341, 0x12341);
    exec_add(0x12341, -0x12341);
    exec_add(0xffffffff, 0);
    exec_add(0xffffffff, -1);
    exec_add(0xffffffff, 1);
    exec_add(0xffffffff, 2);
    exec_add(0x7fffffff, 0);
    exec_add(0x7fffffff, 1);
    exec_add(0x7fffffff, -1);
    exec_add(0x80000000, -1);
    exec_add(0x80000000, 1);
    exec_add(0x80000000, -2);
    exec_add(0x12347fff, 0);
    exec_add(0x12347fff, 1);
    exec_add(0x12347fff, -1);
    exec_add(0x12348000, -1);
    exec_add(0x12348000, 1);
    exec_add(0x12348000, -2);
    exec_add(0x12347f7f, 0);
    exec_add(0x12347f7f, 1);
    exec_add(0x12347f7f, -1);
    exec_add(0x12348080, -1);
    exec_add(0x12348080, 1);
    exec_add(0x12348080, -2);
}

void *_test_add __attribute__ ((unused,__section__ ("initcall"))) = test_add;





void exec_subl(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;SUB(*(dd*)&res, (dd)s1);PUSHF;POP(flags);
 printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n", "subl", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));;
}

void exec_subw(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;SUB(*(dw*)&res, (dw)s1);PUSHF;POP(flags);
 printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n", "subw", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));;
}

void exec_subb(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;SUB(*(db*)&res, (db)s1);PUSHF;POP(flags);
 printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n", "subb", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));;
}


void exec_sub(dd s0, dd s1)
{
    s0 = i2l(s0);
    s1 = i2l(s1);



    exec_subl(s0, s1, 0);
    exec_subw(s0, s1, 0);
    exec_subb(s0, s1, 0);

}

void test_sub(void)
{
    exec_sub(0x12345678, 0x812FADA);
    exec_sub(0x12341, 0x12341);
    exec_sub(0x12341, -0x12341);
    exec_sub(0xffffffff, 0);
    exec_sub(0xffffffff, -1);
    exec_sub(0xffffffff, 1);
    exec_sub(0xffffffff, 2);
    exec_sub(0x7fffffff, 0);
    exec_sub(0x7fffffff, 1);
    exec_sub(0x7fffffff, -1);
    exec_sub(0x80000000, -1);
    exec_sub(0x80000000, 1);
    exec_sub(0x80000000, -2);
    exec_sub(0x12347fff, 0);
    exec_sub(0x12347fff, 1);
    exec_sub(0x12347fff, -1);
    exec_sub(0x12348000, -1);
    exec_sub(0x12348000, 1);
    exec_sub(0x12348000, -2);
    exec_sub(0x12347f7f, 0);
    exec_sub(0x12347f7f, 1);
    exec_sub(0x12347f7f, -1);
    exec_sub(0x12348080, -1);
    exec_sub(0x12348080, 1);
    exec_sub(0x12348080, -2);
}

void *_test_sub __attribute__ ((unused,__section__ ("initcall"))) = test_sub;





void exec_xorl(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;XOR(*(dd*)&res, (dd)s1);PUSHF;POP(flags);
 printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n", "xorl", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));;
}

void exec_xorw(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;XOR(*(dw*)&res, (dw)s1);PUSHF;POP(flags);
 printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n", "xorw", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));;
}

void exec_xorb(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;XOR(*(db*)&res, (db)s1);PUSHF;POP(flags);
 printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n", "xorb", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));;
}


void exec_xor(dd s0, dd s1)
{
    s0 = i2l(s0);
    s1 = i2l(s1);



    exec_xorl(s0, s1, 0);
    exec_xorw(s0, s1, 0);
    exec_xorb(s0, s1, 0);

}

void test_xor(void)
{
    exec_xor(0x12345678, 0x812FADA);
    exec_xor(0x12341, 0x12341);
    exec_xor(0x12341, -0x12341);
    exec_xor(0xffffffff, 0);
    exec_xor(0xffffffff, -1);
    exec_xor(0xffffffff, 1);
    exec_xor(0xffffffff, 2);
    exec_xor(0x7fffffff, 0);
    exec_xor(0x7fffffff, 1);
    exec_xor(0x7fffffff, -1);
    exec_xor(0x80000000, -1);
    exec_xor(0x80000000, 1);
    exec_xor(0x80000000, -2);
    exec_xor(0x12347fff, 0);
    exec_xor(0x12347fff, 1);
    exec_xor(0x12347fff, -1);
    exec_xor(0x12348000, -1);
    exec_xor(0x12348000, 1);
    exec_xor(0x12348000, -2);
    exec_xor(0x12347f7f, 0);
    exec_xor(0x12347f7f, 1);
    exec_xor(0x12347f7f, -1);
    exec_xor(0x12348080, -1);
    exec_xor(0x12348080, 1);
    exec_xor(0x12348080, -2);
}

void *_test_xor __attribute__ ((unused,__section__ ("initcall"))) = test_xor;





void exec_andl(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;AND(*(dd*)&res, (dd)s1);PUSHF;POP(flags);
 printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n", "andl", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));;
}

void exec_andw(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;AND(*(dw*)&res, (dw)s1);PUSHF;POP(flags);
 printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n", "andw", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));;
}

void exec_andb(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;AND(*(db*)&res, (db)s1);PUSHF;POP(flags);
 printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n", "andb", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));;
}


void exec_and(dd s0, dd s1)
{
    s0 = i2l(s0);
    s1 = i2l(s1);



    exec_andl(s0, s1, 0);
    exec_andw(s0, s1, 0);
    exec_andb(s0, s1, 0);

}

void test_and(void)
{
    exec_and(0x12345678, 0x812FADA);
    exec_and(0x12341, 0x12341);
    exec_and(0x12341, -0x12341);
    exec_and(0xffffffff, 0);
    exec_and(0xffffffff, -1);
    exec_and(0xffffffff, 1);
    exec_and(0xffffffff, 2);
    exec_and(0x7fffffff, 0);
    exec_and(0x7fffffff, 1);
    exec_and(0x7fffffff, -1);
    exec_and(0x80000000, -1);
    exec_and(0x80000000, 1);
    exec_and(0x80000000, -2);
    exec_and(0x12347fff, 0);
    exec_and(0x12347fff, 1);
    exec_and(0x12347fff, -1);
    exec_and(0x12348000, -1);
    exec_and(0x12348000, 1);
    exec_and(0x12348000, -2);
    exec_and(0x12347f7f, 0);
    exec_and(0x12347f7f, 1);
    exec_and(0x12347f7f, -1);
    exec_and(0x12348080, -1);
    exec_and(0x12348080, 1);
    exec_and(0x12348080, -2);
}

void *_test_and __attribute__ ((unused,__section__ ("initcall"))) = test_and;





void exec_orl(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;OR(*(dd*)&res, (dd)s1);PUSHF;POP(flags);
 printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n", "orl", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));;
}

void exec_orw(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;OR(*(dw*)&res, (dw)s1);PUSHF;POP(flags);
 printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n", "orw", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));;
}

void exec_orb(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;OR(*(db*)&res, (db)s1);PUSHF;POP(flags);
 printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n", "orb", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));;
}


void exec_or(dd s0, dd s1)
{
    s0 = i2l(s0);
    s1 = i2l(s1);



    exec_orl(s0, s1, 0);
    exec_orw(s0, s1, 0);
    exec_orb(s0, s1, 0);

}

void test_or(void)
{
    exec_or(0x12345678, 0x812FADA);
    exec_or(0x12341, 0x12341);
    exec_or(0x12341, -0x12341);
    exec_or(0xffffffff, 0);
    exec_or(0xffffffff, -1);
    exec_or(0xffffffff, 1);
    exec_or(0xffffffff, 2);
    exec_or(0x7fffffff, 0);
    exec_or(0x7fffffff, 1);
    exec_or(0x7fffffff, -1);
    exec_or(0x80000000, -1);
    exec_or(0x80000000, 1);
    exec_or(0x80000000, -2);
    exec_or(0x12347fff, 0);
    exec_or(0x12347fff, 1);
    exec_or(0x12347fff, -1);
    exec_or(0x12348000, -1);
    exec_or(0x12348000, 1);
    exec_or(0x12348000, -2);
    exec_or(0x12347f7f, 0);
    exec_or(0x12347f7f, 1);
    exec_or(0x12347f7f, -1);
    exec_or(0x12348080, -1);
    exec_or(0x12348080, 1);
    exec_or(0x12348080, -2);
}

void *_test_or __attribute__ ((unused,__section__ ("initcall"))) = test_or;





void exec_cmpl(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;CMP(*(dd*)&res, (dd)s1);PUSHF;POP(flags);
 printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n", "cmpl", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));;
}

void exec_cmpw(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;CMP(*(dw*)&res, (dw)s1);PUSHF;POP(flags);
 printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n", "cmpw", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));;
}

void exec_cmpb(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;CMP(*(db*)&res, (db)s1);PUSHF;POP(flags);
 printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n", "cmpb", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));;
}


void exec_cmp(dd s0, dd s1)
{
    s0 = i2l(s0);
    s1 = i2l(s1);



    exec_cmpl(s0, s1, 0);
    exec_cmpw(s0, s1, 0);
    exec_cmpb(s0, s1, 0);

}

void test_cmp(void)
{
    exec_cmp(0x12345678, 0x812FADA);
    exec_cmp(0x12341, 0x12341);
    exec_cmp(0x12341, -0x12341);
    exec_cmp(0xffffffff, 0);
    exec_cmp(0xffffffff, -1);
    exec_cmp(0xffffffff, 1);
    exec_cmp(0xffffffff, 2);
    exec_cmp(0x7fffffff, 0);
    exec_cmp(0x7fffffff, 1);
    exec_cmp(0x7fffffff, -1);
    exec_cmp(0x80000000, -1);
    exec_cmp(0x80000000, 1);
    exec_cmp(0x80000000, -2);
    exec_cmp(0x12347fff, 0);
    exec_cmp(0x12347fff, 1);
    exec_cmp(0x12347fff, -1);
    exec_cmp(0x12348000, -1);
    exec_cmp(0x12348000, 1);
    exec_cmp(0x12348000, -2);
    exec_cmp(0x12347f7f, 0);
    exec_cmp(0x12347f7f, 1);
    exec_cmp(0x12347f7f, -1);
    exec_cmp(0x12348080, -1);
    exec_cmp(0x12348080, 1);
    exec_cmp(0x12348080, -2);
}

void *_test_cmp __attribute__ ((unused,__section__ ("initcall"))) = test_cmp;






void exec_adcl(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;ADC(*(dd*)&res, (dd)s1);PUSHF;POP(flags);
 printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n", "adcl", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));;
}

void exec_adcw(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;ADC(*(dw*)&res, (dw)s1);PUSHF;POP(flags);
 printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n", "adcw", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));;
}

void exec_adcb(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;ADC(*(db*)&res, (db)s1);PUSHF;POP(flags);
 printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n", "adcb", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));;
}


void exec_adc(dd s0, dd s1)
{
    s0 = i2l(s0);
    s1 = i2l(s1);



    exec_adcl(s0, s1, 0);
    exec_adcw(s0, s1, 0);
    exec_adcb(s0, s1, 0);




    exec_adcl(s0, s1, 0x0001);
    exec_adcw(s0, s1, 0x0001);
    exec_adcb(s0, s1, 0x0001);

}

void test_adc(void)
{
    exec_adc(0x12345678, 0x812FADA);
    exec_adc(0x12341, 0x12341);
    exec_adc(0x12341, -0x12341);
    exec_adc(0xffffffff, 0);
    exec_adc(0xffffffff, -1);
    exec_adc(0xffffffff, 1);
    exec_adc(0xffffffff, 2);
    exec_adc(0x7fffffff, 0);
    exec_adc(0x7fffffff, 1);
    exec_adc(0x7fffffff, -1);
    exec_adc(0x80000000, -1);
    exec_adc(0x80000000, 1);
    exec_adc(0x80000000, -2);
    exec_adc(0x12347fff, 0);
    exec_adc(0x12347fff, 1);
    exec_adc(0x12347fff, -1);
    exec_adc(0x12348000, -1);
    exec_adc(0x12348000, 1);
    exec_adc(0x12348000, -2);
    exec_adc(0x12347f7f, 0);
    exec_adc(0x12347f7f, 1);
    exec_adc(0x12347f7f, -1);
    exec_adc(0x12348080, -1);
    exec_adc(0x12348080, 1);
    exec_adc(0x12348080, -2);
}

void *_test_adc __attribute__ ((unused,__section__ ("initcall"))) = test_adc;






void exec_sbbl(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;SBB(*(dd*)&res, (dd)s1);PUSHF;POP(flags);
 printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n", "sbbl", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));;
}

void exec_sbbw(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;SBB(*(dw*)&res, (dw)s1);PUSHF;POP(flags);
 printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n", "sbbw", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));;
}

void exec_sbbb(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;SBB(*(db*)&res, (db)s1);PUSHF;POP(flags);
 printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n", "sbbb", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));;
}


void exec_sbb(dd s0, dd s1)
{
    s0 = i2l(s0);
    s1 = i2l(s1);



    exec_sbbl(s0, s1, 0);
    exec_sbbw(s0, s1, 0);
    exec_sbbb(s0, s1, 0);




    exec_sbbl(s0, s1, 0x0001);
    exec_sbbw(s0, s1, 0x0001);
    exec_sbbb(s0, s1, 0x0001);

}

void test_sbb(void)
{
    exec_sbb(0x12345678, 0x812FADA);
    exec_sbb(0x12341, 0x12341);
    exec_sbb(0x12341, -0x12341);
    exec_sbb(0xffffffff, 0);
    exec_sbb(0xffffffff, -1);
    exec_sbb(0xffffffff, 1);
    exec_sbb(0xffffffff, 2);
    exec_sbb(0x7fffffff, 0);
    exec_sbb(0x7fffffff, 1);
    exec_sbb(0x7fffffff, -1);
    exec_sbb(0x80000000, -1);
    exec_sbb(0x80000000, 1);
    exec_sbb(0x80000000, -2);
    exec_sbb(0x12347fff, 0);
    exec_sbb(0x12347fff, 1);
    exec_sbb(0x12347fff, -1);
    exec_sbb(0x12348000, -1);
    exec_sbb(0x12348000, 1);
    exec_sbb(0x12348000, -2);
    exec_sbb(0x12347f7f, 0);
    exec_sbb(0x12347f7f, 1);
    exec_sbb(0x12347f7f, -1);
    exec_sbb(0x12348080, -1);
    exec_sbb(0x12348080, 1);
    exec_sbb(0x12348080, -2);
}

void *_test_sbb __attribute__ ((unused,__section__ ("initcall"))) = test_sbb;







void exec_incl(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;INC(*(dd*)&res);PUSHF;POP(flags);
 printf("%-10s A=%08x R=%08x CCIN=%04x CC=%04x\n", "incl", s0, res, iflags, flags & (CC_MASK));;
}

void exec_incw(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;INC(*(dw*)&res);PUSHF;POP(flags);
 printf("%-10s A=%08x R=%08x CCIN=%04x CC=%04x\n", "incw", s0, res, iflags, flags & (CC_MASK));;
}

void exec_incb(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;INC(*(db*)&res);PUSHF;POP(flags);
 printf("%-10s A=%08x R=%08x CCIN=%04x CC=%04x\n", "incb", s0, res, iflags, flags & (CC_MASK));;
}

void exec_inc(dd s0, dd s1)
{
    s0 = i2l(s0);
    s1 = i2l(s1);



    exec_incl(s0, s1, 0);
    exec_incw(s0, s1, 0);
    exec_incb(s0, s1, 0);




    exec_incl(s0, s1, 0x0001);
    exec_incw(s0, s1, 0x0001);
    exec_incb(s0, s1, 0x0001);

}

void test_inc(void)
{
    exec_inc(0x12345678, 0x812FADA);
    exec_inc(0x12341, 0x12341);
    exec_inc(0x12341, -0x12341);
    exec_inc(0xffffffff, 0);
    exec_inc(0xffffffff, -1);
    exec_inc(0xffffffff, 1);
    exec_inc(0xffffffff, 2);
    exec_inc(0x7fffffff, 0);
    exec_inc(0x7fffffff, 1);
    exec_inc(0x7fffffff, -1);
    exec_inc(0x80000000, -1);
    exec_inc(0x80000000, 1);
    exec_inc(0x80000000, -2);
    exec_inc(0x12347fff, 0);
    exec_inc(0x12347fff, 1);
    exec_inc(0x12347fff, -1);
    exec_inc(0x12348000, -1);
    exec_inc(0x12348000, 1);
    exec_inc(0x12348000, -2);
    exec_inc(0x12347f7f, 0);
    exec_inc(0x12347f7f, 1);
    exec_inc(0x12347f7f, -1);
    exec_inc(0x12348080, -1);
    exec_inc(0x12348080, 1);
    exec_inc(0x12348080, -2);
}

void *_test_inc __attribute__ ((unused,__section__ ("initcall"))) = test_inc;







void exec_decl(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;DEC(*(dd*)&res);PUSHF;POP(flags);
 printf("%-10s A=%08x R=%08x CCIN=%04x CC=%04x\n", "decl", s0, res, iflags, flags & (CC_MASK));;
}

void exec_decw(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;DEC(*(dw*)&res);PUSHF;POP(flags);
 printf("%-10s A=%08x R=%08x CCIN=%04x CC=%04x\n", "decw", s0, res, iflags, flags & (CC_MASK));;
}

void exec_decb(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;DEC(*(db*)&res);PUSHF;POP(flags);
 printf("%-10s A=%08x R=%08x CCIN=%04x CC=%04x\n", "decb", s0, res, iflags, flags & (CC_MASK));;
}

void exec_dec(dd s0, dd s1)
{
    s0 = i2l(s0);
    s1 = i2l(s1);



    exec_decl(s0, s1, 0);
    exec_decw(s0, s1, 0);
    exec_decb(s0, s1, 0);




    exec_decl(s0, s1, 0x0001);
    exec_decw(s0, s1, 0x0001);
    exec_decb(s0, s1, 0x0001);

}

void test_dec(void)
{
    exec_dec(0x12345678, 0x812FADA);
    exec_dec(0x12341, 0x12341);
    exec_dec(0x12341, -0x12341);
    exec_dec(0xffffffff, 0);
    exec_dec(0xffffffff, -1);
    exec_dec(0xffffffff, 1);
    exec_dec(0xffffffff, 2);
    exec_dec(0x7fffffff, 0);
    exec_dec(0x7fffffff, 1);
    exec_dec(0x7fffffff, -1);
    exec_dec(0x80000000, -1);
    exec_dec(0x80000000, 1);
    exec_dec(0x80000000, -2);
    exec_dec(0x12347fff, 0);
    exec_dec(0x12347fff, 1);
    exec_dec(0x12347fff, -1);
    exec_dec(0x12348000, -1);
    exec_dec(0x12348000, 1);
    exec_dec(0x12348000, -2);
    exec_dec(0x12347f7f, 0);
    exec_dec(0x12347f7f, 1);
    exec_dec(0x12347f7f, -1);
    exec_dec(0x12348080, -1);
    exec_dec(0x12348080, 1);
    exec_dec(0x12348080, -2);
}

void *_test_dec __attribute__ ((unused,__section__ ("initcall"))) = test_dec;







void exec_negl(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;NEG(*(dd*)&res);PUSHF;POP(flags);
 printf("%-10s A=%08x R=%08x CCIN=%04x CC=%04x\n", "negl", s0, res, iflags, flags & (CC_MASK));;
}

void exec_negw(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;NEG(*(dw*)&res);PUSHF;POP(flags);
 printf("%-10s A=%08x R=%08x CCIN=%04x CC=%04x\n", "negw", s0, res, iflags, flags & (CC_MASK));;
}

void exec_negb(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;NEG(*(db*)&res);PUSHF;POP(flags);
 printf("%-10s A=%08x R=%08x CCIN=%04x CC=%04x\n", "negb", s0, res, iflags, flags & (CC_MASK));;
}

void exec_neg(dd s0, dd s1)
{
    s0 = i2l(s0);
    s1 = i2l(s1);



    exec_negl(s0, s1, 0);
    exec_negw(s0, s1, 0);
    exec_negb(s0, s1, 0);




    exec_negl(s0, s1, 0x0001);
    exec_negw(s0, s1, 0x0001);
    exec_negb(s0, s1, 0x0001);

}

void test_neg(void)
{
    exec_neg(0x12345678, 0x812FADA);
    exec_neg(0x12341, 0x12341);
    exec_neg(0x12341, -0x12341);
    exec_neg(0xffffffff, 0);
    exec_neg(0xffffffff, -1);
    exec_neg(0xffffffff, 1);
    exec_neg(0xffffffff, 2);
    exec_neg(0x7fffffff, 0);
    exec_neg(0x7fffffff, 1);
    exec_neg(0x7fffffff, -1);
    exec_neg(0x80000000, -1);
    exec_neg(0x80000000, 1);
    exec_neg(0x80000000, -2);
    exec_neg(0x12347fff, 0);
    exec_neg(0x12347fff, 1);
    exec_neg(0x12347fff, -1);
    exec_neg(0x12348000, -1);
    exec_neg(0x12348000, 1);
    exec_neg(0x12348000, -2);
    exec_neg(0x12347f7f, 0);
    exec_neg(0x12347f7f, 1);
    exec_neg(0x12347f7f, -1);
    exec_neg(0x12348080, -1);
    exec_neg(0x12348080, 1);
    exec_neg(0x12348080, -2);
}

void *_test_neg __attribute__ ((unused,__section__ ("initcall"))) = test_neg;







void exec_notl(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;NOT(*(dd*)&res);PUSHF;POP(flags);
 printf("%-10s A=%08x R=%08x CCIN=%04x CC=%04x\n", "notl", s0, res, iflags, flags & (CC_MASK));;
}

void exec_notw(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;NOT(*(dw*)&res);PUSHF;POP(flags);
 printf("%-10s A=%08x R=%08x CCIN=%04x CC=%04x\n", "notw", s0, res, iflags, flags & (CC_MASK));;
}

void exec_notb(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;NOT(*(db*)&res);PUSHF;POP(flags);
 printf("%-10s A=%08x R=%08x CCIN=%04x CC=%04x\n", "notb", s0, res, iflags, flags & (CC_MASK));;
}

void exec_not(dd s0, dd s1)
{
    s0 = i2l(s0);
    s1 = i2l(s1);



    exec_notl(s0, s1, 0);
    exec_notw(s0, s1, 0);
    exec_notb(s0, s1, 0);




    exec_notl(s0, s1, 0x0001);
    exec_notw(s0, s1, 0x0001);
    exec_notb(s0, s1, 0x0001);

}

void test_not(void)
{
    exec_not(0x12345678, 0x812FADA);
    exec_not(0x12341, 0x12341);
    exec_not(0x12341, -0x12341);
    exec_not(0xffffffff, 0);
    exec_not(0xffffffff, -1);
    exec_not(0xffffffff, 1);
    exec_not(0xffffffff, 2);
    exec_not(0x7fffffff, 0);
    exec_not(0x7fffffff, 1);
    exec_not(0x7fffffff, -1);
    exec_not(0x80000000, -1);
    exec_not(0x80000000, 1);
    exec_not(0x80000000, -2);
    exec_not(0x12347fff, 0);
    exec_not(0x12347fff, 1);
    exec_not(0x12347fff, -1);
    exec_not(0x12348000, -1);
    exec_not(0x12348000, 1);
    exec_not(0x12348000, -2);
    exec_not(0x12347f7f, 0);
    exec_not(0x12347f7f, 1);
    exec_not(0x12347f7f, -1);
    exec_not(0x12348080, -1);
    exec_not(0x12348080, 1);
    exec_not(0x12348080, -2);
}

void *_test_not __attribute__ ((unused,__section__ ("initcall"))) = test_not;








void exec_shll(dd s2, dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;SHL(*(dd*)&res, (dd)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n",
           "shll", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));
}

void exec_shlw(dd s2, dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;SHL(*(dw*)&res, (dw)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n",
           "shlw", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));
}

void exec_shlb(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;SHL(*(db*)&res, (db)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n",
           "shlb", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));
}


void exec_shl(dd s2, dd s0, dd s1)
{
    s2 = i2l(s2);
    s0 = i2l(s0);



    exec_shll(s2, s0, s1, 0);



    exec_shlw(s2, s0, s1, 0);


    exec_shlb(s0, s1, 0);

}

void test_shl(void)
{
    int i, n;



    n = 32;

    for(i = 0; i < n; i++)
        exec_shl(0x21ad3d34, 0x12345678, i);
    for(i = 0; i < n; i++)
        exec_shl(0x813f3421, 0x82345679, i);
}

void *_test_shl __attribute__ ((unused,__section__ ("initcall"))) = test_shl;





void exec_shrl(dd s2, dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;SHR(*(dd*)&res, (dd)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n",
           "shrl", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));
}

void exec_shrw(dd s2, dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;SHR(*(dw*)&res, (dw)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n",
           "shrw", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));
}

void exec_shrb(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;SHR(*(db*)&res, (db)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n",
           "shrb", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));
}


void exec_shr(dd s2, dd s0, dd s1)
{
    s2 = i2l(s2);
    s0 = i2l(s0);



    exec_shrl(s2, s0, s1, 0);



    exec_shrw(s2, s0, s1, 0);


    exec_shrb(s0, s1, 0);

}

void test_shr(void)
{
    int i, n;



    n = 32;

    for(i = 0; i < n; i++)
        exec_shr(0x21ad3d34, 0x12345678, i);
    for(i = 0; i < n; i++)
        exec_shr(0x813f3421, 0x82345679, i);
}

void *_test_shr __attribute__ ((unused,__section__ ("initcall"))) = test_shr;


void exec_sall(dd s2, dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;SAL(*(dd*)&res, (dd)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n",
           "sall", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));
}

void exec_salw(dd s2, dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;SAL(*(dw*)&res, (dw)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n",
           "salw", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));
}

void exec_salb(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;SAL(*(db*)&res, (db)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n",
           "salb", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));
}


void exec_sal(dd s2, dd s0, dd s1)
{
    s2 = i2l(s2);
    s0 = i2l(s0);



    exec_sall(s2, s0, s1, 0);



    exec_salw(s2, s0, s1, 0);


    exec_salb(s0, s1, 0);

}

void test_sal(void)
{
    int i, n;



    n = 32;

    for(i = 0; i < n; i++)
        exec_sal(0x21ad3d34, 0x12345678, i);
    for(i = 0; i < n; i++)
        exec_sal(0x813f3421, 0x82345679, i);
}

void *_test_sal __attribute__ ((unused,__section__ ("initcall"))) = test_sal;



void exec_sarl(dd s2, dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;SAR(*(dd*)&res, (dd)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n",
           "sarl", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));
}

void exec_sarw(dd s2, dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;SAR(*(dw*)&res, (dw)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n",
           "sarw", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));
}

void exec_sarb(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;SAR(*(db*)&res, (db)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n",
           "sarb", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));
}


void exec_sar(dd s2, dd s0, dd s1)
{
    s2 = i2l(s2);
    s0 = i2l(s0);



    exec_sarl(s2, s0, s1, 0);



    exec_sarw(s2, s0, s1, 0);


    exec_sarb(s0, s1, 0);

}

void test_sar(void)
{
    int i, n;



    n = 32;

    for(i = 0; i < n; i++)
        exec_sar(0x21ad3d34, 0x12345678, i);
    for(i = 0; i < n; i++)
        exec_sar(0x813f3421, 0x82345679, i);
}

void *_test_sar __attribute__ ((unused,__section__ ("initcall"))) = test_sar;





void exec_roll(dd s2, dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;ROL(*(dd*)&res, (dd)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n",
           "roll", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));
}

void exec_rolw(dd s2, dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;ROL(*(dw*)&res, (dw)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n",
           "rolw", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));
}

void exec_rolb(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;ROL(*(db*)&res, (db)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n",
           "rolb", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));
}


void exec_rol(dd s2, dd s0, dd s1)
{
    s2 = i2l(s2);
    s0 = i2l(s0);



    exec_roll(s2, s0, s1, 0);



    exec_rolw(s2, s0, s1, 0);


    exec_rolb(s0, s1, 0);

}

void test_rol(void)
{
    int i, n;



    n = 32;

    for(i = 0; i < n; i++)
        exec_rol(0x21ad3d34, 0x12345678, i);
    for(i = 0; i < n; i++)
        exec_rol(0x813f3421, 0x82345679, i);
}

void *_test_rol __attribute__ ((unused,__section__ ("initcall"))) = test_rol;





void exec_rorl(dd s2, dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;ROR(*(dd*)&res, (dd)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n",
           "rorl", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));
}

void exec_rorw(dd s2, dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;ROR(*(dw*)&res, (dw)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n",
           "rorw", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));
}

void exec_rorb(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;ROR(*(db*)&res, (db)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n",
           "rorb", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));
}


void exec_ror(dd s2, dd s0, dd s1)
{
    s2 = i2l(s2);
    s0 = i2l(s0);



    exec_rorl(s2, s0, s1, 0);



    exec_rorw(s2, s0, s1, 0);


    exec_rorb(s0, s1, 0);

}

void test_ror(void)
{
    int i, n;



    n = 32;

    for(i = 0; i < n; i++)
        exec_ror(0x21ad3d34, 0x12345678, i);
    for(i = 0; i < n; i++)
        exec_ror(0x813f3421, 0x82345679, i);
}

void *_test_ror __attribute__ ((unused,__section__ ("initcall"))) = test_ror;






void exec_rcrl(dd s2, dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;RCR(*(dd*)&res, (dd)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n",
           "rcrl", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));
}

void exec_rcrw(dd s2, dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;RCR(*(dw*)&res, (dw)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n",
           "rcrw", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));
}

void exec_rcrb(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;RCR(*(db*)&res, (db)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n",
           "rcrb", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));
}


void exec_rcr(dd s2, dd s0, dd s1)
{
    s2 = i2l(s2);
    s0 = i2l(s0);



    exec_rcrl(s2, s0, s1, 0);



    exec_rcrw(s2, s0, s1, 0);


    exec_rcrb(s0, s1, 0);





    exec_rcrl(s2, s0, s1, 0x0001);
    exec_rcrw(s2, s0, s1, 0x0001);
    exec_rcrb(s0, s1, 0x0001);

}

void test_rcr(void)
{
    int i, n;



    n = 32;

    for(i = 0; i < n; i++)
        exec_rcr(0x21ad3d34, 0x12345678, i);
    for(i = 0; i < n; i++)
        exec_rcr(0x813f3421, 0x82345679, i);
}

void *_test_rcr __attribute__ ((unused,__section__ ("initcall"))) = test_rcr;






void exec_rcll(dd s2, dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;RCL(*(dd*)&res, (dd)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n",
           "rcll", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));
}

void exec_rclw(dd s2, dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;RCL(*(dw*)&res, (dw)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n",
           "rclw", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));
}

void exec_rclb(dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;RCL(*(db*)&res, (db)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n",
           "rclb", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_MASK));
}


void exec_rcl(dd s2, dd s0, dd s1)
{
    s2 = i2l(s2);
    s0 = i2l(s0);



    exec_rcll(s2, s0, s1, 0);



    exec_rclw(s2, s0, s1, 0);


    exec_rclb(s0, s1, 0);





    exec_rcll(s2, s0, s1, 0x0001);
    exec_rclw(s2, s0, s1, 0x0001);
    exec_rclb(s0, s1, 0x0001);

}

void test_rcl(void)
{
    int i, n;



    n = 32;

    for(i = 0; i < n; i++)
        exec_rcl(0x21ad3d34, 0x12345678, i);
    for(i = 0; i < n; i++)
        exec_rcl(0x813f3421, 0x82345679, i);
}

void *_test_rcl __attribute__ ((unused,__section__ ("initcall"))) = test_rcl;







void exec_shldl(dd s2, dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;SHLD(*(dd*)&res, (dd)s2, (dd)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x C=%08x R=%08x CCIN=%04x CC=%04x\n",
           "shldl", s0, s2, s1, res, iflags, flags & (CC_MASK));
}

void exec_shldw(dd s2, dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;SHLD(*(dw*)&res, (dw)s2, (dw)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x C=%08x R=%08x CCIN=%04x CC=%04x\n",
           "shldw", s0, s2, s1, res, iflags, flags & (CC_MASK));
}

void exec_shld(dd s2, dd s0, dd s1)
{
    s2 = i2l(s2);
    s0 = i2l(s0);



    exec_shldl(s2, s0, s1, 0);

    exec_shldw(s2, s0, s1, 0);

}

void test_shld(void)
{
    int i, n;



    n = 32;

    for(i = 0; i < n; i++)
        exec_shld(0x21ad3d34, 0x12345678, i);
    for(i = 0; i < n; i++)
        exec_shld(0x813f3421, 0x82345679, i);
}

void *_test_shld __attribute__ ((unused,__section__ ("initcall"))) = test_shld;







void exec_shrdl(dd s2, dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;SHRD(*(dd*)&res, (dd)s2, (dd)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x C=%08x R=%08x CCIN=%04x CC=%04x\n",
           "shrdl", s0, s2, s1, res, iflags, flags & (CC_MASK));
}

void exec_shrdw(dd s2, dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;SHRD(*(dw*)&res, (dw)s2, (dw)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x C=%08x R=%08x CCIN=%04x CC=%04x\n",
           "shrdw", s0, s2, s1, res, iflags, flags & (CC_MASK));
}

void exec_shrd(dd s2, dd s0, dd s1)
{
    s2 = i2l(s2);
    s0 = i2l(s0);



    exec_shrdl(s2, s0, s1, 0);

    exec_shrdw(s2, s0, s1, 0);

}

void test_shrd(void)
{
    int i, n;



    n = 32;

    for(i = 0; i < n; i++)
        exec_shrd(0x21ad3d34, 0x12345678, i);
    for(i = 0; i < n; i++)
        exec_shrd(0x813f3421, 0x82345679, i);
}

void *_test_shrd __attribute__ ((unused,__section__ ("initcall"))) = test_shrd;










void exec_btl(dd s2, dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;BT(*(dd*)&res, (dd)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n",
           "btl", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_C));
}

void exec_btw(dd s2, dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;BT(*(dw*)&res, (dw)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n",
           "btw", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_C));
}

void exec_bt(dd s2, dd s0, dd s1)
{
    s2 = i2l(s2);
    s0 = i2l(s0);



    exec_btl(s2, s0, s1, 0);



    exec_btw(s2, s0, s1, 0);

}

void test_bt(void)
{
    int i, n;



    n = 32;

    for(i = 0; i < n; i++)
        exec_bt(0x21ad3d34, 0x12345678, i);
    for(i = 0; i < n; i++)
        exec_bt(0x813f3421, 0x82345679, i);
}

void *_test_bt __attribute__ ((unused,__section__ ("initcall"))) = test_bt;






void exec_btsl(dd s2, dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;BTS(*(dd*)&res, (dd)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n",
           "btsl", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_C));
}

void exec_btsw(dd s2, dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;BTS(*(dw*)&res, (dw)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n",
           "btsw", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_C));
}

void exec_bts(dd s2, dd s0, dd s1)
{
    s2 = i2l(s2);
    s0 = i2l(s0);



    exec_btsl(s2, s0, s1, 0);



    exec_btsw(s2, s0, s1, 0);

}

void test_bts(void)
{
    int i, n;



    n = 32;

    for(i = 0; i < n; i++)
        exec_bts(0x21ad3d34, 0x12345678, i);
    for(i = 0; i < n; i++)
        exec_bts(0x813f3421, 0x82345679, i);
}

void *_test_bts __attribute__ ((unused,__section__ ("initcall"))) = test_bts;






void exec_btrl(dd s2, dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;BTR(*(dd*)&res, (dd)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n",
           "btrl", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_C));
}

void exec_btrw(dd s2, dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;BTR(*(dw*)&res, (dw)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n",
           "btrw", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_C));
}

void exec_btr(dd s2, dd s0, dd s1)
{
    s2 = i2l(s2);
    s0 = i2l(s0);



    exec_btrl(s2, s0, s1, 0);



    exec_btrw(s2, s0, s1, 0);

}

void test_btr(void)
{
    int i, n;



    n = 32;

    for(i = 0; i < n; i++)
        exec_btr(0x21ad3d34, 0x12345678, i);
    for(i = 0; i < n; i++)
        exec_btr(0x813f3421, 0x82345679, i);
}

void *_test_btr __attribute__ ((unused,__section__ ("initcall"))) = test_btr;






void exec_btcl(dd s2, dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;BTC(*(dd*)&res, (dd)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n",
           "btcl", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_C));
}

void exec_btcw(dd s2, dd s0, dd s1, dd iflags)
{
    dd res, flags;
    res = s0;
    flags = iflags;
    PUSH(iflags);POPF;BTC(*(dw*)&res, (dw)s1);PUSHF;POP(flags);

    if (s1 != 1)
      flags &= ~0x0800;
    printf("%-10s A=%08x B=%08x R=%08x CCIN=%04x CC=%04x\n",
           "btcw", (dd)s0, (dd)s1, (dd)res, iflags, flags & (CC_C));
}

void exec_btc(dd s2, dd s0, dd s1)
{
    s2 = i2l(s2);
    s0 = i2l(s0);



    exec_btcl(s2, s0, s1, 0);



    exec_btcw(s2, s0, s1, 0);

}

void test_btc(void)
{
    int i, n;



    n = 32;

    for(i = 0; i < n; i++)
        exec_btc(0x21ad3d34, 0x12345678, i);
    for(i = 0; i < n; i++)
        exec_btc(0x813f3421, 0x82345679, i);
}

void *_test_btc __attribute__ ((unused,__section__ ("initcall"))) = test_btc;


void test_lea(void)
{
}

void test_jcc(void)
{
}

void test_loop(void)
{
    dd ecx, zf;
    const dd ecx_vals[] = {
        0,
        1,
        0x10000,
        0x10001,




    };
    int i, res;


}



void test_mulb(dd op0, dd op1)
{
    dd res, s1, s0, flags;
    s0 = op0;
    s1 = op1;
    res = s0;
    flags = 0;
        eax=res;
	R(PUSH(flags));	// 8688 push    edx
	R(POPF);	// 8689 popf
	R(MUL1_1((db)s1));	// 8690 mul     cl
	R(PUSHF);	// 8691 pushf
	R(POP(flags));	// 8692 pop     edx
        res=eax;

    printf("%-10s A=%08x B=%08x R=%08x CC=%04x\n",
           "mulb", (dd)s0, (dd)s1, (dd)res, flags & (CC_MASK));
}

void test_mulw(dd op0h, dd op0, dd op1)
{
    dd res, s1, flags, resh;
    s1 = op1;
    resh = op0h;
    res = op0;
    flags = 0;
        edx=resh;
        eax=res;
	R(PUSH(flags));	// 8688 push    edx
	R(POPF);	// 8689 popf
	R(MUL1_2((dw)s1));	// 8690 mul     cl
	R(PUSHF);	// 8691 pushf
	R(POP(flags));	// 8692 pop     edx
        resh=edx;
        res=eax;
    printf("%-10s AH=%08x AL=%08x B=%08x RH=%08x RL=%08x CC=%04x\n",
           "mulw", op0h, op0, s1, resh, res, flags & (CC_MASK));
}

void test_mull(dd op0h, dd op0, dd op1)
{
    dd res, s1, flags, resh;
    s1 = op1;
    resh = op0h;
    res = op0;
    flags = 0;
        edx=resh;
        eax=res;
	R(PUSH(flags));	// 8688 push    edx
	R(POPF);	// 8689 popf
	R(MUL1_4((dd)s1));	// 8690 mul     cl
	R(PUSHF);	// 8691 pushf
	R(POP(flags));	// 8692 pop     edx
        resh=edx;
        res=eax;
    printf("%-10s AH=%08x AL=%08x B=%08x RH=%08x RL=%08x CC=%04x\n",
           "mull", op0h, op0, s1, resh, res, flags & (CC_MASK));
}





void test_imulb(dd op0, dd op1)
{
    dd res, s1, s0, flags;
    s0 = op0;
    s1 = op1;
    res = s0;
    flags = 0;
/*
    asm ("push %4\n"
         "POPF;"
         "imul""b %b2\n"
         "PUSHF;"
         "pop %1\n"
         : "=a" (res), "=g" (flags)
         : "q" (s1), "0" (res), "1" (flags));
*/
        eax=res;
	R(PUSH(flags));	// 8688 push    edx
	R(POPF);	// 8689 popf
	R(IMUL1_1((db)s1));	// 8690 mul     cl
	R(PUSHF);	// 8691 pushf
	R(POP(flags));	// 8692 pop     edx
        res=eax;

    printf("%-10s A=%08x B=%08x R=%08x CC=%04x\n",
           "imulb", (dd)s0, (dd)s1, (dd)res, flags & (CC_MASK));
}

void test_imulw(dd op0h, dd op0, dd op1)
{
    dd res, s1, flags, resh;
    s1 = op1;
    resh = op0h;
    res = op0;
    flags = 0;
/*
    asm ("push %5\n"
         "POPF;"
         "imulw %w3\n"
         "PUSHF;"
         "pop %1\n"
         : "=a" (res), "=g" (flags), "=d" (resh)
         : "q" (s1), "0" (res), "1" (flags), "2" (resh));
*/
        edx=resh;
        eax=res;
	R(PUSH(flags));	// 8688 push    edx
	R(POPF);	// 8689 popf
	R(IMUL1_2((dw)s1));	// 8690 mul     cl
	R(PUSHF);	// 8691 pushf
	R(POP(flags));	// 8692 pop     edx
        resh=edx;
        res=eax;
    printf("%-10s AH=%08x AL=%08x B=%08x RH=%08x RL=%08x CC=%04x\n",
           "imulw", op0h, op0, s1, resh, res, flags & (CC_MASK));
}

void test_imull(dd op0h, dd op0, dd op1)
{
    dd res, s1, flags, resh;
    s1 = op1;
    resh = op0h;
    res = op0;
    flags = 0;
        edx=resh;
        eax=res;
	R(PUSH(flags));	// 8688 push    edx
	R(POPF);	// 8689 popf
	R(IMUL1_4((dd)s1));	// 8690 mul     cl
	R(PUSHF);	// 8691 pushf
	R(POP(flags));	// 8692 pop     edx
        resh=edx;
        res=eax;
    printf("%-10s AH=%08x AL=%08x B=%08x RH=%08x RL=%08x CC=%04x\n",
           "imull", op0h, op0, s1, resh, res, flags & (CC_MASK));
}


void test_imulw2(dd op0, dd op1)
{
    dd res, s1, s0, flags;
    s0 = op0;
    s1 = op1;
    res = s0;
    flags = 0;
/*
    asm volatile ("push %4\n"
         "POPF;"
         "imulw %w2, %w0\n"
         "PUSHF;"
         "pop %1\n"
         : "=q" (res), "=g" (flags)
         : "q" (s1), "0" (res), "1" (flags));
*/
	R(PUSH(flags));	// 8688 push    edx
	R(POPF);	// 8689 popf
	R(IMUL2_2(*(dw*)&res,(dw)s1));	// 8690 mul     cl
	R(PUSHF);	// 8691 pushf
	R(POP(flags));	// 8692 pop     edx

    printf("%-10s A=%08x B=%08x R=%08x CC=%04x\n",
           "imulw", (dd)s0, (dd)s1, (dd)res, flags & (CC_MASK));
}

void test_imull2(dd op0, dd op1)
{
    dd res, s1, s0, flags;
    s0 = op0;
    s1 = op1;
    res = s0;
    flags = 0;
/*
    asm volatile ("push %4\n"
         "POPF;"
         "imull %k2, %k0\n"
         "PUSHF;"
         "pop %1\n"
         : "=q" (res), "=g" (flags)
         : "q" (s1), "0" (res), "1" (flags));
*/
	R(PUSH(flags));	// 8688 push    edx
	R(POPF);	// 8689 popf
	R(IMUL2_4(*(dd*)&res,(dd)s1));	// 8690 mul     cl
	R(PUSHF);	// 8691 pushf
	R(POP(flags));	// 8692 pop     edx

    printf("%-10s A=%08x B=%08x R=%08x CC=%04x\n",
           "imull", (dd)s0, (dd)s1, (dd)res, flags & (CC_MASK));
}



void test_divb(dd op0, dd op1)
{
    dd res, s1, s0, flags;
    s0 = op0;
    s1 = op1;
    res = s0;
    flags = 0;
/*
    asm ("push %4\n"
         "POPF;"
         "div""b %b2\n"
         "PUSHF;"
         "pop %1\n"
         : "=a" (res), "=g" (flags)
         : "q" (s1), "0" (res), "1" (flags));
*/
	eax=res;
	R(PUSH(flags));	// 8688 push    edx
	R(POPF);	// 8689 popf
	R(DIV1((db)s1));	// 9094 div     dl
	R(PUSHF);	// 8691 pushf
	R(POP(flags));	// 8692 pop     edx
	res=eax;

    printf("%-10s A=%08x B=%08x R=%08x CC=%04x\n",
           "divb", (dd)s0, (dd)s1, (dd)res, flags & (0));
}

void test_divw(dd op0h, dd op0, dd op1)
{
    dd res, s1, flags, resh;
    s1 = op1;
    resh = op0h;
    res = op0;
    flags = 0;
/*
    asm ("push %5\n"
         "POPF;"
         "divw %w3\n"
         "PUSHF;"
         "pop %1\n"
         : "=a" (res), "=g" (flags), "=d" (resh)
         : "q" (s1), "0" (res), "1" (flags), "2" (resh));
*/
	edx=resh;
	eax=res;
	R(PUSH(flags));	// 8688 push    edx
	R(POPF);	// 8689 popf
	R(DIV2((dw)s1));	// 9094 div     dl
	R(PUSHF);	// 8691 pushf
	R(POP(flags));	// 8692 pop     edx
	res=eax;
	resh=edx;

    printf("%-10s AH=%08x AL=%08x B=%08x RH=%08x RL=%08x CC=%04x\n",
           "divw", op0h, op0, s1, resh, res, flags & (0));
}

void test_divl(dd op0h, dd op0, dd op1)
{
    dd res, s1, flags, resh;
    s1 = op1;
    resh = op0h;
    res = op0;
    flags = 0;
/*
    asm ("push %5\n"
         "POPF;"
         "divl %k3\n"
         "PUSHF;"
         "pop %1\n"
         : "=a" (res), "=g" (flags), "=d" (resh)
         : "q" (s1), "0" (res), "1" (flags), "2" (resh));
*/
	edx=resh;
	eax=res;
	R(PUSH(flags));	// 8688 push    edx
	R(POPF);	// 8689 popf
	R(DIV4((dd)s1));	// 9094 div     dl
	R(PUSHF);	// 8691 pushf
	R(POP(flags));	// 8692 pop     edx
	res=eax;
	resh=edx;

    printf("%-10s AH=%08x AL=%08x B=%08x RH=%08x RL=%08x CC=%04x\n",
           "divl", op0h, op0, s1, resh, res, flags & (0));
}





void test_idivb(dd op0, dd op1)
{
    dd res, s1, s0, flags;
    s0 = op0;
    s1 = op1;
    res = s0;
    flags = 0;
	eax=res;
	R(PUSH(flags));	// 8688 push    edx
	R(POPF);	// 8689 popf
	R(IDIV1((db)s1));	// 9094 div     dl
	R(PUSHF);	// 8691 pushf
	R(POP(flags));	// 8692 pop     edx
	res=eax;
    printf("%-10s A=%08x B=%08x R=%08x CC=%04x\n",
           "idivb", (dd)s0, (dd)s1, (dd)res, flags & (0));
}

void test_idivw(dd op0h, dd op0, dd op1)
{
    dd res, s1, flags, resh;
    s1 = op1;
    resh = op0h;
    res = op0;
    flags = 0;
	edx=resh;
	eax=res;
	R(PUSH(flags));	// 8688 push    edx
	R(POPF);	// 8689 popf
	R(IDIV2((dd)s1));	// 9094 div     dl
	R(PUSHF);	// 8691 pushf
	R(POP(flags));	// 8692 pop     edx
	res=eax;
	resh=edx;
    printf("%-10s AH=%08x AL=%08x B=%08x RH=%08x RL=%08x CC=%04x\n",
           "idivw", op0h, op0, s1, resh, res, flags & (0));
}

void test_idivl(dd op0h, dd op0, dd op1)
{
    dd res, s1, flags, resh;
    s1 = op1;
    resh = op0h;
    res = op0;
    flags = 0;

	edx=resh;
	eax=res;
	R(PUSH(flags));	// 8688 push    edx
	R(POPF);	// 8689 popf
	R(IDIV4((dd)s1));	// 9094 div     dl
	R(PUSHF);	// 8691 pushf
	R(POP(flags));	// 8692 pop     edx
	res=eax;
	resh=edx;
    printf("%-10s AH=%08x AL=%08x B=%08x RH=%08x RL=%08x CC=%04x\n",
           "idivl", op0h, op0, s1, resh, res, flags & (0));
}


void test_mul(void)
{
    test_imulb(0x1234561d, 4);
    test_imulb(3, -4);
    test_imulb(0x80, 0x80);
    test_imulb(0x10, 0x10);

    test_imulw(0, 0x1234001d, 45);
    test_imulw(0, 23, -45);
    test_imulw(0, 0x8000, 0x8000);
    test_imulw(0, 0x100, 0x100);

    test_imull(0, 0x1234001d, 45);
    test_imull(0, 23, -45);
    test_imull(0, 0x80000000, 0x80000000);
    test_imull(0, 0x10000, 0x10000);

    test_mulb(0x1234561d, 4);
    test_mulb(3, -4);
    test_mulb(0x80, 0x80);
    test_mulb(0x10, 0x10);

    test_mulw(0, 0x1234001d, 45);
    test_mulw(0, 23, -45);
    test_mulw(0, 0x8000, 0x8000);
    test_mulw(0, 0x100, 0x100);

    test_mull(0, 0x1234001d, 45);
    test_mull(0, 23, -45);
    test_mull(0, 0x80000000, 0x80000000);
    test_mull(0, 0x10000, 0x10000);

    test_imulw2(0x1234001d, 45);
    test_imulw2(23, -45);
    test_imulw2(0x8000, 0x8000);
    test_imulw2(0x100, 0x100);

    test_imull2(0x1234001d, 45);
    test_imull2(23, -45);
    test_imull2(0x80000000, 0x80000000);
    test_imull2(0x10000, 0x10000);


    { dd res, flags, s1; flags = 0; res = 0; s1 = 0x1234; dd op0=45;
	R(PUSH(flags));R(POPF);R(IMUL3_2( *(dw *)&res,s1,op0 ));R(PUSHF);R(POP(flags));
 printf("%-10s A=%08x B=%08x R=%08x CC=%04x\n", "imulw im", (dd)45, (dd)0x1234, res, flags & (0));};
    { dd res, flags, s1; flags = 0; res = 0; s1 = 23; dd op0=-45;
	R(PUSH(flags));R(POPF);R(IMUL3_2( *(dw *)&res,s1,op0 ));R(PUSHF);R(POP(flags));
 printf("%-10s A=%08x B=%08x R=%08x CC=%04x\n", "imulw im", (dd)-45, (dd)23, res, flags & (0));};
    { dd res, flags, s1; flags = 0; res = 0; s1 = 0x80000000; dd op0=0x8000;
	R(PUSH(flags));R(POPF);R(IMUL3_2( *(dw *)&res,s1,op0 ));R(PUSHF);R(POP(flags));
 printf("%-10s A=%08x B=%08x R=%08x CC=%04x\n", "imulw im", (dd)0x8000, (dd)0x80000000, res, flags & (0));};
    { dd res, flags, s1; flags = 0; res = 0; s1 = 0x1000; dd op0=0x7fff;
	R(PUSH(flags));R(POPF);R(IMUL3_2( *(dw *)&res,s1,op0 ));R(PUSHF);R(POP(flags));
 printf("%-10s A=%08x B=%08x R=%08x CC=%04x\n", "imulw im", (dd)0x7fff, (dd)0x1000, res, flags & (0));};

    { dd res, flags, s1; flags = 0; res = 0; s1 = 0x1234;dd op0=45;
	R(PUSH(flags));R(POPF);R(IMUL3_4( *(dd *)&res,s1,op0 ));R(PUSHF);R(POP(flags));
 printf("%-10s A=%08x B=%08x R=%08x CC=%04x\n", "imull im", (dd)45, (dd)0x1234, res, flags & (0));};
    { dd res, flags, s1; flags = 0; res = 0; s1 = 23;dd op0=-45;
	R(PUSH(flags));R(POPF);R(IMUL3_4( *(dd *)&res,s1,op0 ));R(PUSHF);R(POP(flags));
 printf("%-10s A=%08x B=%08x R=%08x CC=%04x\n", "imull im", (dd)-45, (dd)23, res, flags & (0));};
    { dd res, flags, s1; flags = 0; res = 0; s1 = 0x80000000; dd op0=0x8000;
	R(PUSH(flags));R(POPF);R(IMUL3_4( *(dd *)&res,s1,op0 ));R(PUSHF);R(POP(flags));
 printf("%-10s A=%08x B=%08x R=%08x CC=%04x\n", "imull im", (dd)0x8000, (dd)0x80000000, res, flags & (0));};
    { dd res, flags, s1; flags = 0; res = 0; s1 = 0x1000; dd op0=0x7fff;
	R(PUSH(flags));R(POPF);R(IMUL3_4( *(dd *)&res,s1,op0 ));R(PUSHF);R(POP(flags));
 printf("%-10s A=%08x B=%08x R=%08x CC=%04x\n", "imull im", (dd)0x7fff, (dd)0x1000, res, flags & (0));};

    test_idivb(0x12341678, 0x127e);
    test_idivb(0x43210123, -5);
    test_idivb(0x12340004, -1);

    test_idivw(0, 0x12345678, 12347);
    test_idivw(0, -23223, -45);
    test_idivw(0, 0x12348000, -1);
    test_idivw(0x12343, 0x12345678, 0x81238567);

    test_idivl(0, 0x12345678, 12347);
    test_idivl(0, -233223, -45);
    test_idivl(0, 0x80000000, -1);
    test_idivl(0x12343, 0x12345678, 0x81234567);

    test_divb(0x12341678, 0x127e);
    test_divb(0x43210123, -5);
    test_divb(0x12340004, -1);

    test_divw(0, 0x12345678, 12347);
    test_divw(0, -23223, -45);
    test_divw(0, 0x12348000, -1);
    test_divw(0x12343, 0x12345678, 0x81238567);

    test_divl(0, 0x12345678, 12347);
    test_divl(0, -233223, -45);
    test_divl(0, 0x80000000, -1);
    test_divl(0x12343, 0x12345678, 0x81234567);

}

void test_bsx(void)
{
}


#if 0
union float64u {
    double d;
    uint64_t l;
};

union float64u q_nan = { .l = 0xFFF8000000000000LL };
union float64u s_nan = { .l = 0xFFF0000000000000LL };

void test_fops(double a, double b)
{
    printf("a=%f b=%f a+b=%f\n", a, b, a + b);
    printf("a=%f b=%f a-b=%f\n", a, b, a - b);
    printf("a=%f b=%f a*b=%f\n", a, b, a * b);
    printf("a=%f b=%f a/b=%f\n", a, b, a / b);
    printf("a=%f b=%f fmod(a, b)=%f\n", a, b, fmod(a, b));
    printf("a=%f sqrt(a)=%f\n", a, sqrt(a));
    printf("a=%f sin(a)=%f\n", a, sin(a));
    printf("a=%f cos(a)=%f\n", a, cos(a));
    printf("a=%f tan(a)=%f\n", a, tan(a));
    printf("a=%f log(a)=%f\n", a, log(a));
    printf("a=%f exp(a)=%f\n", a, exp(a));
    printf("a=%f b=%f atan2(a, b)=%f\n", a, b, atan2(a, b));

    printf("a=%f asin(sin(a))=%f\n", a, asin(sin(a)));
    printf("a=%f acos(cos(a))=%f\n", a, acos(cos(a)));
    printf("a=%f atan(tan(a))=%f\n", a, atan(tan(a)));

}

void fpu_clear_exceptions(void)
{
    struct QEMU_PACKED {
        uint16_t fpuc;
        uint16_t dummy1;
        uint16_t fpus;
        uint16_t dummy2;
        uint16_t fptag;
        uint16_t dummy3;
        uint32_t ignored[4];
        dd double fpregs[8];
    } float_env32;

    asm volatile ("fnstenv %0\n" : "=m" (float_env32));
    float_env32.fpus &= ~0x7f;
    asm volatile ("fldenv %0\n" : : "m" (float_env32));
}





void test_fcmp(double a, double b)
{
    dd eflags, fpus;

    fpu_clear_exceptions();
    asm("fcom %2\n"
        "fstsw %%ax\n"
        : "=a" (fpus)
        : "t" (a), "u" (b));
    printf("fcom(%f %f)=%04lx\n",
           a, b, fpus & (0x4500 | 0x0000));
    fpu_clear_exceptions();
    asm("fucom %2\n"
        "fstsw %%ax\n"
        : "=a" (fpus)
        : "t" (a), "u" (b));
    printf("fucom(%f %f)=%04lx\n",
           a, b, fpus & (0x4500 | 0x0000));
    if (1) {

        fpu_clear_exceptions();
        asm("fcomi %3, %2\n"
            "fstsw %%ax\n"
            "PUSHF;"
            "pop %0\n"
            : "=r" (eflags), "=a" (fpus)
            : "t" (a), "u" (b));
        printf("fcomi(%f %f)=%04lx %02lx\n",
               a, b, fpus & 0x0000, eflags & (0x0040 | 0x0004 | 0x0001));
        fpu_clear_exceptions();
        asm("fucomi %3, %2\n"
            "fstsw %%ax\n"
            "PUSHF;"
            "pop %0\n"
            : "=r" (eflags), "=a" (fpus)
            : "t" (a), "u" (b));
        printf("fucomi(%f %f)=%04lx %02lx\n",
               a, b, fpus & 0x0000, eflags & (0x0040 | 0x0004 | 0x0001));
    }
    fpu_clear_exceptions();
    asm volatile("fxam\n"
                 "fstsw %%ax\n"
                 : "=a" (fpus)
                 : "t" (a));
    printf("fxam(%f)=%04lx\n", a, fpus & 0x4700);
    fpu_clear_exceptions();
}

void test_fcvt(double a)
{
    float fa;
    dd double la;
    int16_t fpuc;
    int i;
    int64_t lla;
    int ia;
    int16_t wa;
    double ra;

    fa = a;
    la = a;
    printf("(float)%f = %f\n", a, fa);
    printf("(dd double)%f = %Lf\n", a, la);
    printf("a=%016" 

               "ll" 

               "x\n", *(uint64_t *)&a);
    printf("la=%016" 

                "ll" 

                "x %04x\n", *(uint64_t *)&la,
           *(unsigned short *)((char *)(&la) + 8));


    asm volatile ("fstcw %0" : "=m" (fpuc));
    for(i=0;i<4;i++) {
        uint16_t val16;
        val16 = (fpuc & ~0x0c00) | (i << 10);
        asm volatile ("fldcw %0" : : "m" (val16));
        asm volatile ("fist %0" : "=m" (wa) : "t" (a));
        asm volatile ("fistl %0" : "=m" (ia) : "t" (a));
        asm volatile ("fistpll %0" : "=m" (lla) : "t" (a) : "st");
        asm volatile ("frndint ; fstl %0" : "=m" (ra) : "t" (a));
        asm volatile ("fldcw %0" : : "m" (fpuc));
        printf("(short)a = %d\n", wa);
        printf("(int)a = %d\n", ia);
        printf("(int64_t)a = " "%016" 

                              "ll" 

                              "x\n", lla);
        printf("rint(a) = %f\n", ra);
    }
}





void test_fconst(void)
{
    double a;
    asm("fld1" : "=t" (a));
 printf("fld1= %f\n", a);;
    asm("fldl2t" : "=t" (a));
 printf("fldl2t= %f\n", a);;
    asm("fldl2e" : "=t" (a));
 printf("fldl2e= %f\n", a);;
    asm("fldpi" : "=t" (a));
 printf("fldpi= %f\n", a);;
    asm("fldlg2" : "=t" (a));
 printf("fldlg2= %f\n", a);;
    asm("fldln2" : "=t" (a));
 printf("fldln2= %f\n", a);;
    asm("fldz" : "=t" (a));
 printf("fldz= %f\n", a);;
}

void test_fbcd(double a)
{
    unsigned short bcd[5];
    double b;

    asm("fbstp %0" : "=m" (bcd[0]) : "t" (a) : "st");
    asm("fbld %1" : "=t" (b) : "m" (bcd[0]));
    printf("a=%f bcd=%04x%04x%04x%04x%04x b=%f\n",
           a, bcd[4], bcd[3], bcd[2], bcd[1], bcd[0], b);
}

void test_fenv(void)
{
    struct __attribute__((__packed__)) {
        uint16_t fpuc;
        uint16_t dummy1;
        uint16_t fpus;
        uint16_t dummy2;
        uint16_t fptag;
        uint16_t dummy3;
        uint32_t ignored[4];
        dd double fpregs[8];
    } float_env32;
    struct __attribute__((__packed__)) {
        uint16_t fpuc;
        uint16_t fpus;
        uint16_t fptag;
        uint16_t ignored[4];
        dd double fpregs[8];
    } float_env16;
    double dtab[8];
    double rtab[8];
    int i;

    for(i=0;i<8;i++)
        dtab[i] = i + 1;

    { memset((&float_env16), 0xaa, sizeof(*(&float_env16))); for(i=0;i<5;i++) asm volatile ("fldl %0" : : "m" (dtab[i]));
asm volatile ("data16 fnstenv %0\n" : : "m" (*(&float_env16)));
asm volatile ("data16 fldenv %0\n": : "m" (*(&float_env16))); for(i=0;i<5;i++) asm volatile ("fstpl %0" : "=m" (rtab[i])); for(i=0;i<5;i++) printf("res[%d]=%f\n", i, rtab[i]);
 printf("fpuc=%04x fpus=%04x fptag=%04x\n", (&float_env16)->fpuc, (&float_env16)->fpus & 0xff00, (&float_env16)->fptag);};
    { memset((&float_env16), 0xaa, sizeof(*(&float_env16))); for(i=0;i<5;i++) asm volatile ("fldl %0" : : "m" (dtab[i]));
asm volatile ("data16 fnsave %0\n" : : "m" (*(&float_env16)));
asm volatile ("data16 frstor %0\n": : "m" (*(&float_env16))); for(i=0;i<5;i++) asm volatile ("fstpl %0" : "=m" (rtab[i])); for(i=0;i<5;i++) printf("res[%d]=%f\n", i, rtab[i]);
 printf("fpuc=%04x fpus=%04x fptag=%04x\n", (&float_env16)->fpuc, (&float_env16)->fpus & 0xff00, (&float_env16)->fptag);};
    { memset((&float_env32), 0xaa, sizeof(*(&float_env32))); for(i=0;i<5;i++) asm volatile ("fldl %0" : : "m" (dtab[i]));
asm volatile ("fnstenv %0\n" : : "m" (*(&float_env32)));
asm volatile ("fldenv %0\n": : "m" (*(&float_env32))); for(i=0;i<5;i++) asm volatile ("fstpl %0" : "=m" (rtab[i])); for(i=0;i<5;i++) printf("res[%d]=%f\n", i, rtab[i]);
 printf("fpuc=%04x fpus=%04x fptag=%04x\n", (&float_env32)->fpuc, (&float_env32)->fpus & 0xff00, (&float_env32)->fptag);};
    { memset((&float_env32), 0xaa, sizeof(*(&float_env32))); for(i=0;i<5;i++) asm volatile ("fldl %0" : : "m" (dtab[i]));
asm volatile ("fnsave %0\n" : : "m" (*(&float_env32)));
asm volatile ("frstor %0\n": : "m" (*(&float_env32))); for(i=0;i<5;i++) asm volatile ("fstpl %0" : "=m" (rtab[i])); for(i=0;i<5;i++) printf("res[%d]=%f\n", i, rtab[i]);
 printf("fpuc=%04x fpus=%04x fptag=%04x\n", (&float_env32)->fpuc, (&float_env32)->fpus & 0xff00, (&float_env32)->fptag);};


    for(i=0;i<5;i++)
        asm volatile ("fldl %0" : : "m" (dtab[i]));
    asm volatile("ffree %st(2)");
    asm volatile ("fnstenv %0\n" : : "m" (float_env32));
    asm volatile ("fninit");
    printf("fptag=%04x\n", float_env32.fptag);
}

void test_fcmov(void)
{
    double a, b;
    dd eflags, i;

    a = 1.0;
    b = 2.0;
    for(i = 0; i < 4; i++) {
        eflags = 0;
        if (i & 1)
            eflags |= 0x0001;
        if (i & 2)
            eflags |= 0x0040;
        { double res;
asm("push %3\nPOPF;fcmovb %2, %0\n" : "=t" (res) : "0" (a), "u" (b), "g" (eflags));
 printf("fcmov%s eflags=0x%04lx-> %f\n", "b", (dd)eflags, res);};
        { double res;
asm("push %3\nPOPF;fcmove %2, %0\n" : "=t" (res) : "0" (a), "u" (b), "g" (eflags));
 printf("fcmov%s eflags=0x%04lx-> %f\n", "e", (dd)eflags, res);};
        { double res;
asm("push %3\nPOPF;fcmovbe %2, %0\n" : "=t" (res) : "0" (a), "u" (b), "g" (eflags));
 printf("fcmov%s eflags=0x%04lx-> %f\n", "be", (dd)eflags, res);};
        { double res;
asm("push %3\nPOPF;fcmovnb %2, %0\n" : "=t" (res) : "0" (a), "u" (b), "g" (eflags));
 printf("fcmov%s eflags=0x%04lx-> %f\n", "nb", (dd)eflags, res);};
        { double res;
asm("push %3\nPOPF;fcmovne %2, %0\n" : "=t" (res) : "0" (a), "u" (b), "g" (eflags));
 printf("fcmov%s eflags=0x%04lx-> %f\n", "ne", (dd)eflags, res);};
        { double res;
asm("push %3\nPOPF;fcmovnbe %2, %0\n" : "=t" (res) : "0" (a), "u" (b), "g" (eflags));
 printf("fcmov%s eflags=0x%04lx-> %f\n", "nbe", (dd)eflags, res);};
    }
    { double res;
asm("push %3\nPOPF;fcmovu %2, %0\n" : "=t" (res) : "0" (a), "u" (b), "g" (0));
 printf("fcmov%s eflags=0x%04lx-> %f\n", "u", (dd)0, res);};
    { double res;
asm("push %3\nPOPF;fcmovu %2, %0\n" : "=t" (res) : "0" (a), "u" (b), "g" (0x0004));
 printf("fcmov%s eflags=0x%04lx-> %f\n", "u", (dd)0x0004, res);};
    { double res;
asm("push %3\nPOPF;fcmovnu %2, %0\n" : "=t" (res) : "0" (a), "u" (b), "g" (0));
 printf("fcmov%s eflags=0x%04lx-> %f\n", "nu", (dd)0, res);};
    { double res;
asm("push %3\nPOPF;fcmovnu %2, %0\n" : "=t" (res) : "0" (a), "u" (b), "g" (0x0004));
 printf("fcmov%s eflags=0x%04lx-> %f\n", "nu", (dd)0x0004, res);};
}

void test_floats(void)
{
    test_fops(2, 3);
    test_fops(1.4, -5);
    test_fcmp(2, -1);
    test_fcmp(2, 2);
    test_fcmp(2, 3);
    test_fcmp(2, q_nan.d);
    test_fcmp(q_nan.d, -1);
    test_fcmp(-1.0/0.0, -1);
    test_fcmp(1.0/0.0, -1);
    test_fcvt(0.5);
    test_fcvt(-0.5);
    test_fcvt(1.0/7.0);
    test_fcvt(-1.0/9.0);
    test_fcvt(32768);
    test_fcvt(-1e20);
    test_fcvt(-1.0/0.0);
    test_fcvt(1.0/0.0);
    test_fcvt(q_nan.d);
    test_fconst();
    test_fbcd(1234567890123456.0);
    test_fbcd(-123451234567890.0);
    test_fenv();
    if (1) {
        test_fcmov();
    }
}
#endif

#define TEST_BCD(op, op0, cc_in, cc_mask)\
    { int res, flags; res = op0; flags = cc_in; \
    eax=res;PUSH(flags);POPF;op;PUSHF;POP(flags);res=eax; \
printf("%-10s A=%08x R=%08x CCIN=%04x CC=%04x\n", #op, op0, res, cc_in, flags & (cc_mask));};

void test_bcd(void)
{
    TEST_BCD(DAA, 0x12340503, CC_A, (CC_C | CC_Z | CC_S | CC_A));
    TEST_BCD(DAA, 0x12340506, CC_A, (CC_C | CC_Z | CC_S | CC_A));
    TEST_BCD(DAA, 0x12340507, CC_A, (CC_C | CC_Z | CC_S | CC_A));
    TEST_BCD(DAA, 0x12340559, CC_A, (CC_C | CC_Z | CC_S | CC_A));
    TEST_BCD(DAA, 0x12340560, CC_A, (CC_C | CC_Z | CC_S | CC_A));
    TEST_BCD(DAA, 0x1234059f, CC_A, (CC_C | CC_Z | CC_S | CC_A));
    TEST_BCD(DAA, 0x123405a0, CC_A, (CC_C | CC_Z | CC_S | CC_A));
    TEST_BCD(DAA, 0x12340503, 0, (CC_C | CC_Z | CC_S | CC_A));
    TEST_BCD(DAA, 0x12340506, 0, (CC_C | CC_Z | CC_S | CC_A));
    TEST_BCD(DAA, 0x12340503, CC_C, (CC_C | CC_Z | CC_S | CC_A));
    TEST_BCD(DAA, 0x12340506, CC_C, (CC_C | CC_Z | CC_S | CC_A));
    TEST_BCD(DAA, 0x12340503, CC_C | CC_A, (CC_C | CC_Z | CC_S | CC_A));
    TEST_BCD(DAA, 0x12340506, CC_C | CC_A, (CC_C | CC_Z | CC_S | CC_A));

    TEST_BCD(DAS, 0x12340503, CC_A, (CC_C | CC_Z | CC_S | CC_A));
    TEST_BCD(DAS, 0x12340506, CC_A, (CC_C | CC_Z | CC_S | CC_A));
    TEST_BCD(DAS, 0x12340507, CC_A, (CC_C | CC_Z | CC_S | CC_A));
    TEST_BCD(DAS, 0x12340559, CC_A, (CC_C | CC_Z | CC_S | CC_A));
    TEST_BCD(DAS, 0x12340560, CC_A, (CC_C | CC_Z | CC_S | CC_A));
    TEST_BCD(DAS, 0x1234059f, CC_A, (CC_C | CC_Z | CC_S | CC_A));
    TEST_BCD(DAS, 0x123405a0, CC_A, (CC_C | CC_Z | CC_S | CC_A));
    TEST_BCD(DAS, 0x12340503, 0, (CC_C | CC_Z | CC_S | CC_A));
    TEST_BCD(DAS, 0x12340506, 0, (CC_C | CC_Z | CC_S | CC_A));
    TEST_BCD(DAS, 0x12340503, CC_C, (CC_C | CC_Z | CC_S | CC_A));
    TEST_BCD(DAS, 0x12340506, CC_C, (CC_C | CC_Z | CC_S | CC_A));
    TEST_BCD(DAS, 0x12340503, CC_C | CC_A, (CC_C | CC_Z | CC_S | CC_A));
    TEST_BCD(DAS, 0x12340506, CC_C | CC_A, (CC_C | CC_Z | CC_S | CC_A));

    TEST_BCD(AAA, 0x12340205, CC_A, (CC_C | CC_A));
    TEST_BCD(AAA, 0x12340306, CC_A, (CC_C | CC_A));
    TEST_BCD(AAA, 0x1234040a, CC_A, (CC_C | CC_A));
    TEST_BCD(AAA, 0x123405fa, CC_A, (CC_C | CC_A));
    TEST_BCD(AAA, 0x12340205, 0, (CC_C | CC_A));
    TEST_BCD(AAA, 0x12340306, 0, (CC_C | CC_A));
    TEST_BCD(AAA, 0x1234040a, 0, (CC_C | CC_A));
    TEST_BCD(AAA, 0x123405fa, 0, (CC_C | CC_A));

    TEST_BCD(AAS, 0x12340205, CC_A, (CC_C | CC_A));
    TEST_BCD(AAS, 0x12340306, CC_A, (CC_C | CC_A));
    TEST_BCD(AAS, 0x1234040a, CC_A, (CC_C | CC_A));
    TEST_BCD(AAS, 0x123405fa, CC_A, (CC_C | CC_A));
    TEST_BCD(AAS, 0x12340205, 0, (CC_C | CC_A));
    TEST_BCD(AAS, 0x12340306, 0, (CC_C | CC_A));
    TEST_BCD(AAS, 0x1234040a, 0, (CC_C | CC_A));
    TEST_BCD(AAS, 0x123405fa, 0, (CC_C | CC_A));

    TEST_BCD(AAM, 0x12340547, CC_A, (CC_C | CC_Z | CC_S | CC_O | CC_A));
    TEST_BCD(AAD, 0x12340407, CC_A, (CC_C | CC_Z | CC_S | CC_O | CC_A));

}

void test_xchg(void)
{



}

void test_misc(void)
{
//    char table[256];
    dd res, i;

    for(i=0;i<256;i++) table[i] = 256 - i;
    res = 0x12345678;
    ds=0;ebx=&table;
    eax=res; XLAT; res=eax;
    // asm ("xlat" : "=a" (res) : "b" (table), "0" (res));
    printf("xlat: EAX=%08x\n", res);

    // asm volatile ("pushl $12345432 ; pushl $0x9abcdef ; popl (%%esp) ; popl %0" : "=g" (res));
    printf("popl esp=%08x\n", res);


    // asm volatile ("pushl $12345432 ; pushl $0x9abcdef ; popw (%%esp) ; addl $2, %%esp ; popl %0" : "=g" (res));
    printf("popw esp=%08x\n", res);

}

//uint8_t str_buffer[4096];

void print_buffer(void) { /*for(int j = 0; j < sizeof(str_buffer); j++) printf("%02X", str_buffer[j]); */}
void print_buf(db* p, int s) { for(int j = 0; j < s; j++) printf("%02X", *(p+j)); }

void test_string(void)
{
    int i;
    for(i = 0;i < sizeof(str_buffer); i++)
        str_buffer[i] = i + 0x56;



print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STOSB;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "stosb", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STOSW;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "stosw", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STOSD;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "stosl", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};

print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;STOSB;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "stosb", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;STOSW;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "stosw", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;STOSD;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "stosl", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));}; ;
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;REP STOSB;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "rep stosb", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;REP STOSW;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "rep stosw", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;REP STOSD;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "rep stosl", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;REP STOSB;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "rep stosb", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;REP STOSW;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "rep stosw", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;REP STOSD;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "rep stosl", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));}; ;

print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;LODSB;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "lodsb", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;LODSW;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "lodsw", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;LODSD;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "lodsl", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;LODSB;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "lodsb", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;LODSW;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "lodsw", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;LODSD;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "lodsl", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));}; ;
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;REP LODSB;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "rep lodsb", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;REP LODSW;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "rep lodsw", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;REP LODSD;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "rep lodsl", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;REP LODSB;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "rep lodsb", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;REP LODSW;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "rep lodsw", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;REP LODSD;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "rep lodsl", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));}; ;

print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;MOVSB;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "movsb", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;MOVSW;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "movsw", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;MOVSD;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "movsl", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;MOVSB;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "movsb", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;MOVSW;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "movsw", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;MOVSD;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "movsl", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));}; ;
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;REP MOVSB;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "rep movsb", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;REP MOVSW;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "rep movsw", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;REP MOVSD;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "rep movsl", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;REP MOVSB;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "rep movsb", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;REP MOVSW;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "rep movsw", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;REP MOVSD;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "rep movsl", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};

print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;LODSB;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "lodsb", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;LODSW;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "lodsw", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;LODSD;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "lodsl", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;LODSB;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "lodsb", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;LODSW;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "lodsw", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;LODSD;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "lodsl", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));}; ;

print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
//print_buf(reinterpret_cast<db*>(edi),1);print_buf(reinterpret_cast<db*>(&eax),1);
    PUSH((dd)0);POPF;SCASB;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "scasb", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;SCASW;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "scasw", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;SCASD;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "scasl", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};

print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
    PUSH((dd)0);POPF;STD;SCASB;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "scasb", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};

print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;SCASW;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "scasw", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;SCASD;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "scasl", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));}; ;
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;REPE SCASB;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "repz scasb", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;REPE SCASW;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "repz scasw", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;REPE SCASD;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "repz scasl", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;REPE SCASB;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "repz scasb", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;REPE SCASW;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "repz scasw", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;REPE SCASD;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "repz scasl", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));}; ;
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;REPNE SCASB;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "repnz scasb", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;REPNE SCASW;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "repnz scasw", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;REPNE SCASD;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "repnz scasl", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;REPNE SCASB;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "repnz scasb", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;REPNE SCASW;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "repnz scasw", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;REPNE SCASD;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "repnz scasl", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));}; ;
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
//PUSH((dd)0);POPF;CMPSB;CLD;PUSHF;POP(eflags);
PUSH((dd)0);POPF;CMPSB;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "cmpsb", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;CMPSW;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "cmpsw", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;CMPSD;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "cmpsl", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
//PUSH((dd)0);POPF;STD;CMPSB;CLD;PUSHF;POP(eflags);
PUSH((dd)0);POPF;STD;CMPSB;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "cmpsb", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;CMPSW;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "cmpsw", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;CMPSD;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "cmpsl", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));}; ;

//print_buf((long)(str_buffer + sizeof(str_buffer) / 2)-17*4, 18*4);printf("~");
//print_buf((long)(str_buffer + sizeof(str_buffer) / 2)-17*4+16, 18*4);

print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
//PUSH((dd)0);POPF;REPE CMPSB;CLD;PUSHF;POP(eflags);
PUSH((dd)0);POPF; REPE CMPSB;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "repz cmpsb", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;REPE CMPSW;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "repz cmpsw", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;REPE CMPSD;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "repz cmpsl", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
//PUSH((dd)0);POPF;STD;REPE CMPSB;CLD;PUSHF;POP(eflags);
PUSH((dd)0);POPF;STD;REPE CMPSB;CLD;PUSHF;POP(eflags);

 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "repz cmpsb", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;REPE CMPSW;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "repz cmpsw", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};

print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;REPE CMPSD;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "repz cmpsl", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));}; ;
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;REPNE CMPSB;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "repnz cmpsb", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;REPNE CMPSW;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "repnz cmpsw", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;REPNE CMPSD;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "repnz cmpsl", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;REPNE CMPSB;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "repnz cmpsb", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;REPNE CMPSW;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "repnz cmpsw", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));};
print_buffer(); { /*dd esi, edi, eax, ecx,*/ dd eflags; esi = (dd)(str_buffer + sizeof(str_buffer) / 2); edi = (dd)(str_buffer + sizeof(str_buffer) / 2) + 16; eax = i2l(0x12345678); ecx = 17;
PUSH((dd)0);POPF;STD;REPNE CMPSD;CLD;PUSHF;POP(eflags);
 printf("%-10s ESI=%08x EDI=%08x EAX=%08x ECX=%08x EFL=%04x\n", "repnz cmpsl", esi - (dd)(str_buffer), edi - (dd)(str_buffer), eax, ecx, (int)(eflags & (CC_MASK)));}; ;
}

dd enter_stack[4096];

static void test_enter(void)
{






    ;
    ;
    ;
    ;


    ;
    ;
    ;
    ;
}

void test_conv(void)
{
    { unsigned long a, r; a = i2l(0x8234a6f8); eax = a;
CBW;
r=eax;
 printf("%-10s A=%08x R=%08x\n", "cbw", a, r);};
    { unsigned long a, r; a = i2l(0x8234a6f8); eax = a;
CWDE;
r=eax;
 printf("%-10s A=%08x R=%08x\n", "cwde", a, r);};




    { unsigned long a, d, r, rh; a = i2l(0x8234a6f8); d = i2l(0x8345a1f2); eax = a; edx = d;
CWD;
rh=edx;r=eax;
 printf("%-10s A=%08x R=%08x:%08x\n", "cwd", a, r, rh); };
    { unsigned long a, d, r, rh; a = i2l(0x8234a6f8); d = i2l(0x8345a1f2); eax = a; edx = d;
//asm volatile("cdq" : "=a" (r), "=d" (rh) : "0" (r), "1" (rh));
CDQ;
rh=edx;r=eax;
 printf("%-10s A=%08x R=%08x:%08x\n", "cdq", a, r, rh); };




    {
        dd a, r;
        r= a = i2l(0x12345678);
        BSWAP(r);
        printf("%-10s: A=%08x R=%08x\n", "bswapl", a, r);
    }

}

extern void *__start_initcall;
extern void *__stop_initcall;


int start()
{
    void **ptr;
    void (*func)(void);

  R(MOV(ss, seg_offset(stack)));
  esp = ((dd)(db*)&m2c::m.stack[STACK_SIZE - 4]);


/*
    ptr = &__start_initcall;
    while (ptr != &__stop_initcall) {
        func = *ptr++;
        func();
    }
*/
AFFECT_IF(0);
test_add();
test_sub();
test_xor();
test_and();
test_or();
test_cmp();
test_adc();
test_sbb();
test_inc();
test_dec();
test_neg();
test_not();
test_shl();
test_shr();
test_sal();
test_sar();
test_rol();
test_ror();
test_rcr();
test_rcl();
test_shld();
test_shrd();
test_bt();
test_bts();
test_btr();
test_btc();

    test_bsx();
    test_mul();
    test_jcc();
    test_loop();
//    test_floats();

    test_bcd();

    test_xchg();
    test_string();
    test_misc();
    test_lea();

    test_enter();
    test_conv();
    exit(0);
    return 0;
}
}
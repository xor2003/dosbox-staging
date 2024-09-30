#include "dosbox.h"

#include "json.hpp"

#include "circular_buffer.h"

#include "setup.h"
#include "regs.h"
#include "custom.h"
#include "custom_hooks.h"

#include "asm.h"

#include <stdio.h>
#include <unistd.h>
#include <sstream>

// -- configuration start

bool trace_instructions = false;       // write instruction trace to circular buffer
bool trace_instructions_to_stdout = false; // write instrucitons to stdout (slow)
bool compare_instructions = false; // compare emulated and translated instructions

bool complex_self_modifications = false;  // handle complex self-modified code
bool collect_rt_info = false;  // Collect run-time info
bool collect_rt_info_vars = false;  // Collect vars too

// -- configuration end

extern Bitu DasmI386(char *buffer, PhysPt pc, Bitu cur_ip, bool bit32);

namespace m2c {
extern size_t debug;
extern void load_drivers();
extern std::string exename;
} // namespace m2c

static const size_t COMPARE_SIZE = 0xf0000;

Bit32u last_ip = 0xffff; // to control last ip for interpreter and detect we changed it

extern Bitu Normal_Loop(void);

int custom_runs = 0;

Bitu old_cycles; // to stop interpretation but remmember the cycles remain
std::stack<Bit32u> return_point;

volatile bool defered_custom_call = false;
bool from_callf = false;
volatile bool from_interpreter = false;

volatile bool compare_jump = false;
volatile bool doing_single_step = false;

static int init_runs = 0;
static int init = 0;

void init_entrypoint(Bit16u relocate);

extern bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE *_state);
#ifndef _WIN32
extern void print_backtrace(uintptr_t pc);
#endif

namespace m2c {
extern void Initializer();
ShadowMemory shadow_memory;
} // namespace m2c

#if _WIN32
void *memmem(const void *haystack,
             size_t haystack_len,
             const void *const needle,
             const size_t needle_len)
{
	if (haystack == NULL)
		return NULL; // or assert(haystack != NULL);
	if (haystack_len == 0)
		return NULL;
	if (needle == NULL)
		return NULL; // or assert(needle != NULL);
	if (needle_len == 0)
		return NULL;

	for (const char *h = (const char *)haystack; haystack_len >= needle_len;
	     ++h, --haystack_len) {
		if (!memcmp(h, needle, needle_len)) {
			return (void *)h;
		}
	}
	return NULL;
}
#endif

void masm2c_exit(unsigned char exit)
{
	init++;
	printf("masm2c_exit Exiting\n");
	// m2c::stackDump();
}

// Is the game running?
/**
        init_get_fname - copies the filename from src to dst
        @src:	pathname to a file
        @dst:	string where the filename shoukld be stored
*/
void init_get_fname(char *dst, char *src)
{
	char *initial_dst = dst;
	char *p = NULL;
	char *c = src;

	while (*c != '\0') {
		if (*c == '\\')
			p = c + 1;
		c++;
	}

	/* No backslash in src */
	if (p == NULL)
		p = src;

	while ((*dst++ = tolower(*p++)))
		;
	*dst = '\0';
	m2c::exename = initial_dst;
}

namespace m2c {
bool defered_irqs = false;
std::string exename;
static void print_traces();

void stackDumpZ()
{
	printf("Executing at exit\n");
	m2c::shadow_memory.dump();
	stackDump(0);
}

} // namespace m2c

void loguru_fatal(const loguru::Message &message)
{
	m2c::stackDumpZ();
}

void custom_init_prog(char *name, Bit16u relocate, Bit16u init_cs, Bit16u init_ip)
{
	static bool registered = false;
	if (!registered) {
		loguru::set_fatal_handler(loguru_fatal);
		atexit(m2c::stackDumpZ);
		registered = true;
	}
	/* run all detectors */
	if (masm2c_init(name, relocate, init_cs, init_ip)) {
		printf("It is target binary. Rise binary enter flags\n");
		custom_runs++;
		init_runs++;
	}
}

void custom_exit_prog(Bit8u exitcode)
{
	if (!custom_runs) {
		printf("It wasn't a target binary. Ignoring\n");
		return;
	}

	custom_runs--;
	if (init_runs) {
		printf("Doing deinit\n");
		masm2c_exit(exitcode);
		exit(0);

		init_runs--;
	}
	m2c::shadow_memory.dump();
}

int custom_callf(Bitu CS, Bitu IP)
{
	if (!custom_runs)
		return 0;

	if (init_runs) {
		if (CS >= 0xa000 || (CS == 0 && cs == 0xf000))
			return 0;

		m2c::_STATE _state;
		_state.call_source = 3;
		return __dispatch_call((CS << 16) + IP, &_state);
	}

	return 0;
}

static void custom_exit(Section *sec)
{
	custom_exit_prog(0);
}

void custom_init(Section *sec)
{
	sec->AddDestroyFunction(&custom_exit);
	fprintf(stderr, "Masm2c/DOSBOX lib, build date %s\n", __DATE__);

	X86_REGREF m2c::_STATE *_state = 0;
	/*
	    fedisableexcept(FE_INVALID   |
	                   FE_DIVBYZERO |
	                   FE_OVERFLOW  |
	                   FE_UNDERFLOW);

	  struct sigaction my_action;

	  my_action.sa_handler = SIG_IGN;
	  my_action.sa_flags = SA_RESTART;
	  sigaction(SIGFPE, &my_action, NULL);
	*/
//	R(MOV(ax, 0x3000));
//	R(_INT(0x21));
	fprintf(stderr, "DOS ver:%d\n", al);
}

void custom_init_entrypoint(char *name, Bit16u relocate)
{
	if (!custom_runs)
		return;
last_ip=0xffff;

	if (init_runs) {
		init_entrypoint(relocate);
	}
}

namespace m2c {

#ifdef M2CDEBUG
size_t debug = M2CDEBUG;
#else
size_t debug = 0;
#endif

size_t counter = 0;
ShadowStack shadow_stack;

db om[COMPARE_SIZE]; // for instruction trace compare
db rm[COMPARE_SIZE];
dd oldip;
Segments oldSegs;
CPU_Regs oldcpu_regs;
Bitu dbx_result_flags;
Segments dbx_result_segs;
CPU_Regs dbx_result_regs;
bool already_checked[COMPARE_SIZE] = {0};

db lm[COMPARE_SIZE]; // memory after load to trace self-modified code

db _indent = 0;
const char *_str = "";

const char *log_spaces(int n)
{
	static const char s[] = "                                                                                          ";
	return n <= 84 ? s + (84 - n) : "";
}

bool fix_segs()
{
	for (size_t i = 0; i < 7; i++) {
		Segs.phys[i] = Segs.val[i] << 4;
	}
	return true;
}

void execute_irqs()
{
	X86_REGREF
	//    log_debug ("CPU_CycleLeft %d\n", CPU_CycleLeft);
	static volatile bool already_in_hw_int = false;
	if (!already_in_hw_int && GET_IF()) // Do not call from IRQs
	{
		already_in_hw_int = true;

		{
#if M2CDEBUG
//              log_debug ("Start hw int\n");
#endif
			fix_segs();
			bool oldCPU_CycleAutoAdjust = CPU_CycleAutoAdjust;
			CPU_CycleAutoAdjust = true; // So the CPU_Cycles won't
			                            // be set to 0
			CALLBACK_Idle();
			CPU_CycleAutoAdjust = oldCPU_CycleAutoAdjust;
#if M2CDEBUG
//              log_debug ("Stop hw int\n");
#endif
		}
		already_in_hw_int = false;
	} else if (!GET_IF() && fix_segs() && !PIC_RunQueue()) // Can only call
	                                                       // PIC_RunQueue()
	                                                       // separatelly if
	                                                       // IF=0
	{ // So no IRQ interrupts will be started
		GFX_Events();
		if (ticksRemain > 0) {
			TIMER_AddTick();
			ticksRemain--;
		} else {
			increaseticks();
		}
	}
}

void run_hw_interrupts()
{
	if (collect_rt_info)
		shadow_memory.collect_segs();
	//    X86_REGREF
	// printf("CPU_Cycles %d\n", CPU_Cycles);
	if (!defered_irqs && CPU_Cycles > 0) {
		CPU_Cycles--;
	}

	if (defered_irqs || CPU_Cycles == 0) {
		defered_irqs = false;
		//    log_debug ("CPU_CycleLeft %d\n", CPU_CycleLeft);
		execute_irqs();
	}
}

void dbx_single_step()
{
	m2c::fix_segs();

	if (*raddr(Segs.val[1], cpu_regs.ip.word[0]) == 0xcd) // int x
	{
		log_debug("Inside single step cur cs:ip %x:%x executing int %x\n",
		          Segs.val[1], cpu_regs.ip.word[0],
		          *raddr(Segs.val[1], cpu_regs.ip.word[0] + 1));
		++cpu_regs.ip.word[0];
		_INT(*raddr(Segs.val[1], cpu_regs.ip.word[0]++));
		log_debug("Finished single step cur cs:ip %x:%x\n", Segs.val[1],
		          cpu_regs.ip.word[0]);
		return;
	} else if (*raddr(Segs.val[1], cpu_regs.ip.word[0]) == 0xcc) // int3?
	{
		log_debug("Inside single step cur cs:ip %x:%x executing int 3\n",
		          Segs.val[1], cpu_regs.ip.word[0]);
		++cpu_regs.ip.word[0];
		_INT(3);
		log_debug("Finished single step cur cs:ip %x:%x\n", Segs.val[1],
		          cpu_regs.ip.word[0]);
		return;
	}

	X86_REGREF

	old_cycles = CPU_Cycles;
	dd oldeip = (Segs.val[1] << 16) + cpu_regs.ip.word[0];
	dd neweip(oldeip);

	Bits nc_retcode;
	doing_single_step = true;
	shadow_stack.disable();
	try {
		// printf("~~s1 %x:%x\n",Segs.val[1],cpu_regs.ip.word[0]);
		do {
			CPU_Cycles = 1;
			nc_retcode = CPU_Core_Normal_Run();
			neweip = (Segs.val[1] << 16) + cpu_regs.ip.word[0];
		} while (neweip == oldeip); // to handle REP*
	} catch (...) {
		printf("~~!exception catched %x:%x\n", Segs.val[1],
		       cpu_regs.ip.word[0]);
		log_error("~~!exception catched %x:%x\n", Segs.val[1],
		          cpu_regs.ip.word[0]);
		shadow_stack.enable();
		doing_single_step = false;
		CPU_Cycles = old_cycles;

		compare_jump = false;
		throw;
	}
	shadow_stack.enable();
	doing_single_step = false;
	CPU_Cycles = old_cycles;
	// printf("~~s2 %x:%x\n",Segs.val[1],cpu_regs.ip.word[0]);
	// // log_debug ("CPU_Cycles=%d CPU_CycleLeft=%d\n", CPU_Cycles,
	// CPU_CycleLeft);
}

void mycopy(db *d, db *s, size_t size, const char *name)
{
#if M2CDEBUG
	int res = memcmp(d, s, size);
	if (res) {
		printf("non-equal %s addr=%x size=%d", name,
		       d - ((db *)&m2c::m), size);
		void *p = memmem(((db *)&m2c::m) + 0x1920, COMPARE_SIZE, s, size);
		if (size > 3 && p) {
			printf(" found at %x", ((db *)p) - d);
		}
		printf("\nm2c ");
		hexDump(s, size);
		printf("memory ");
		hexDump(d, size);
	}
#else
	//      printf("Init %zx %zd\n", d - ((db*)&m), size);
	memcpy(d, s, size);
//    memset (((db *) & types) + (d - ((db *) & m)), 0xff, size);
#endif
}

// thanks to paxdiablo http://stackoverflow.com/users/14860/paxdiablo for the
// hexDump function
void hexDump(void *addr, int len)
{
	int i;
	unsigned char buff[17];
	unsigned char *pc = (unsigned char *)addr;
	(void)buff;
	printf("hexDump %p:\n", addr);

	if (len == 0) {
		printf("  ZERO LENGTH\n");
		return;
	}
	if (len < 0) {
		printf("  NEGATIVE LENGTH: %i\n", len);
		return;
	}

	// Process every byte in the data.
	for (i = 0; i < len; i++) {
		// Multiple of 16 means new line (with line offset).

		if ((i % 16) == 0) {
			// Just don't print ASCII for the zeroth line.
			if (i != 0)
				printf("  %s\n", buff);

			// Output the offset.
			printf("  %04x ", i);
		}

		// Now the hex code for the specific character.
		printf(" %02x", pc[i]);

		// And store a printable ASCII character for later.
		if ((pc[i] < 0x20) || (pc[i] > 0x7e))
			buff[i % 16] = '.';
		else
			buff[i % 16] = pc[i];
		buff[(i % 16) + 1] = '\0';
	}

	// Pad out last line if not exactly 16 characters.
	while ((i % 16) != 0) {
		printf("   ");
		i++;
	}

	// And print the final ASCII bit.
	printf("  %s\n", buff);
}

size_t countEqual(const db *addr1, const db *addr2, int len)
{
	size_t bytes = 0;
	while (len && *(addr1++) == *(addr2++)) {
		++bytes;
	}
	return bytes;
}

void cmpHexDump(void *addr1, void *addr2, int len)
{
	int i, j;
	unsigned char buff1[17];
	unsigned char buff2[17];
	unsigned char *pc1 = (unsigned char *)addr1;
	unsigned char *pc2 = (unsigned char *)addr2;
	printf("cmpHexDump %p %p:\n", pc1, pc2);

	if (len == 0) {
		printf("  ZERO LENGTH\n");
		return;
	}
	if (len < 0) {
		printf("  NEGATIVE LENGTH: %i\n", len);
		return;
	}
	// Process every byte in the data.
	for (i = 0; i < len; i++) {
		// Multiple of 16 means new line (with line offset).
		size_t size = i + 16 <= len ? 16 : len - i;
		if (memcmp(&pc1[i], &pc2[i], size) != 0) {
			// Output the offset.
			printf("  %04x ", i);

			for (j = 0; j < size; j++) {
				// Now the hex code for the specific character.
				printf(" %02x", pc1[i + j]);

				// And store a printable ASCII character for later.
				if ((pc1[i + j] < 0x20) || (pc1[i + j] > 0x7e))
					buff1[j] = '.';
				else
					buff1[j] = pc1[i + j];
			}
			buff1[j] = '\0';

			printf("  %s\n", buff1);
			printf("       ");
			for (j = 0; j < size; j++) {
				// Now the hex code for the specific character.
				printf(" %02x", pc2[i + j]);

				// And store a printable ASCII character for later.
				if ((pc2[i + j] < 0x20) || (pc2[i + j] > 0x7e))
					buff2[j] = '.';
				else
					buff2[j] = pc2[i + j];
			}
			buff2[j + 1] = '\0';

			// And print the final ASCII bit.
			printf("  %s\n", buff2);
		}
		i += size;
	}
}

void stackDump(_STATE *_state)
{
	static bool already = false;
	if (already)
		return;
	already = true;

	m2c::print_traces();
#ifndef _WIN32
	print_backtrace(0);
#endif
	shadow_stack.print(0);
}

void log_regs_dbx_direct(size_t counter_,
                         const char *file,
                         int line,
                         db indent,
                         const char *instr,
                         const CPU_Regs &r,
                         const Segments &s)
{
	/*
	enum SegNames { es=0,cs=1,ss=2,ds=3,fs=4,gs=5};
	struct Segments {
	        Bit16u val[8];
	};
	union GenReg32 {
	        Bit32u dword[1];
	};
	struct CPU_Regs {
	        GenReg32 regs[8],ip;
	        Bitu flags;
	        REGI_AX=0, REGI_CX=1, REGI_DX=2, REGI_BX=3,
	        REGI_SP=4, REGI_BP=5, REGI_SI=6, REGI_DI=7
	};
	#define reg_32(reg) (cpu_regs.regs[(reg)].dword[DW_INDEX])
	};*/
	//   if (trace_instructions)
	printf("%8x %s:%06d %04X:%04X %s%s%s AX:%04X BX:%04X CX:%04X DX:%04X SI:%04X DI:%04X BP:%04X SP:%04X DS:%04X ES:%04X FS:%04X GS:%04X SS:%04X CF:%x ZF:%x SF:%x OF:%x AF:%x PF:%x IF:%x\n",
	       counter_, file, line, s.val[1], r.ip, log_spaces(indent), instr,
	       log_spaces(84 - indent - strlen(instr)), r.regs[0].dword[0],
	       r.regs[3].dword[0], r.regs[1].dword[0], r.regs[2].dword[0],
	       r.regs[6].dword[0], r.regs[7].dword[0], r.regs[5].dword[0],
	       r.regs[4].dword[0], s.val[3], s.val[0], s.val[4], s.val[5],
	       s.val[2], (r.flags & FLAG_CF) != 0, (r.flags & FLAG_ZF) != 0,
	       (r.flags & FLAG_SF) != 0, (r.flags & FLAG_OF) != 0,
	       (r.flags & FLAG_AF) != 0, (r.flags & FLAG_PF) != 0,
	       (r.flags & FLAG_IF) != 0);
}

struct CPU_State { /*
	            CPU_State(size_t counter,
	            const char *file,
	            int line,
	            db indent,
	            const char* instr,
	            CPU_Regs regs,
	            Segments segs):
	            counter(counter),
	            file(file),
	            line(line),
	            indent(indent),
	            instr(instr),
	            regs(regs),
	            segs(segs)
	            {}*/

	size_t counter;
	const char *file;
	int line;
	db indent;
	std::string instr;
	CPU_Regs regs;
	Segments segs;
};

CircularBuffer<CPU_State> trace_store(50000);

static void print_traces()
{
	while (!trace_store.empty()) {
		CPU_State &cs = trace_store.front();
		log_regs_dbx_direct(cs.counter, cs.file, cs.line, cs.indent,
		                    cs.instr.c_str(), cs.regs, cs.segs);
		trace_store.pop_front();
	}
}

void log_regs_dbx(const char *file,
                  int line,
                  const char *instr,
                  const CPU_Regs &r,
                  const Segments &s)
{
	++counter;
	// if (counter==0x1ea9fa4) assert(0);

	if (trace_instructions) {
		if (!trace_instructions_to_stdout) {
			CPU_State cs = {counter, file, line, _indent,
			                instr,   r,    s};

			trace_store.push_back(cs);
		} else {
			log_regs_dbx_direct(counter, file, line, _indent, instr,
			                    r, s);
		}
	}
}

size_t inst_size(dw cs, dd eip)
{
	char dline[120];
	return DasmI386(dline, (cs << 4) + eip, eip, false);
}

size_t inst_size(db *b)
{
	size_t instr_size = 0;
	db op1 = *b;
	// printf("op1 %x\n", op1);

	switch (op1) {
	case 0x26:
	case 0x2E:
	case 0x36:
	case 0x3E:
	case 0x64:
	case 0x65:
	case 0x66:
	case 0x67:
	case 0xF0:
	case 0xF2:
	case 0xF3: {
		++b;
		++instr_size;
		op1 = *b;
		// printf("op1 %x\n", op1);
	}
	}

	if (op1 >= 0x70 && op1 <= 0x7f) // j
		instr_size += 2;
	else if (op1 == 0x9a) // callf
		instr_size += 5;
	else if (op1 == 0xc2) // retn n
		instr_size += 3;
	else if (op1 == 0xc3) // retn
		instr_size += 1;
	else if (op1 == 0xca) // retf n
		instr_size += 3;
	else if (op1 == 0xcb) // retf
		instr_size += 1;
	else if (op1 == 0xcf) // iret
		instr_size += 1;
	else if (op1 >= 0xe0 && op1 <= 0xe3) // loop
		instr_size += 2;
	else if (op1 == 0xe8 || op1 == 0xe9) // jmp
		instr_size += 3;
	else if (op1 == 0xea) // jmpf
		instr_size += 5;
	else if (op1 == 0xeb) // jmpf
		instr_size += 2;
	else if (op1 == 0xff) // jmpf
	{
		db op2 = *(b + 1);
		// printf("op2 %x\n", op2);
		if (op2 >= 0x10 && op2 <= 0x2f) // call/jmp
			instr_size += 4;
		else if (op2 >= 0x50 && op2 <= 0x6f) // call/jmp
			instr_size += 3;
		else if (op2 >= 0x90 && op2 <= 0xAf) // call/jmp
			instr_size += 4;
		else if (op2 >= 0xd0 && op2 <= 0xef) // call/jmp
			instr_size += 2;
	} else if (op1 == 0x0f) // j
	{
		db op2 = *(b + 1);
		if (op2 >= 0x80 && op2 <= 0x8f) // call/jmp r/m16
			instr_size += 4;
	}
	log_debug("instr size %x\n", instr_size);

	if (instr_size == 0) {
		X86_REGREF

		printf("Could not identify instruction size %x:%x %x\n", cs,
		       eip, op1);
		exit(1);
	}
	return instr_size;
}

void process_self_mod(dw seg, dd ip, size_t size)
{
	printf("~self-modified instruction at %x:%x\n", seg, ip);
	::print_instruction_direct(seg, ip);
	cmpHexDump(m2c::lm + (seg << 4) + ip, (db *)&m2c::m + (seg << 4) + ip, size);
	if (collect_rt_info) {
		memcpy(raddr(0xc000, 0xf000), m2c::lm + (seg << 4) + ip, size);

		char ins_old[120];
		DasmI386(ins_old, 0xcf000, 0xf000, false);
		char ins_new[120];
		DasmI386(ins_new, (seg << 4) + ip, ip, false);
		size_t equal_bytes = countEqual(m2c::lm + (seg << 4) + ip,
		                                (db *)&m2c::m + (seg << 4) + ip,
		                                size);
		shadow_memory.collect_selfmod(seg, ip, equal_bytes, size,
		                              ins_old, ins_new);
	}
}

char jump_name[100] = "";

bool Jstart(const char *file, int line, const char *instr)
{
	if (compare_jump)
		Jend();

	run_hw_interrupts();
	log_regs_dbx(file, line, instr, cpu_regs, Segs);
	if (!compare_instructions)
		return true;

	oldip = cpu_regs.ip.word[0];

	dd ip1 = cpu_regs.ip.word[0];
	dw seg = Segs.val[1];

	bool compare(compare_instructions && !already_checked[(seg << 4) + ip1]);

	oldSegs = Segs;
	oldcpu_regs = cpu_regs;

	if (compare) {
		memcpy(om, &m, COMPARE_SIZE);

		strcpy(jump_name, instr);
		compare_jump = true;
	}

	dbx_single_step();

	already_checked[(seg << 4) + ip1] = true;

	size_t instr_size = inst_size(seg, ip1);

	if (memcmp(m2c::lm + (seg << 4) + ip1,
	           ((db *)&m2c::m) + (seg << 4) + ip1, instr_size) != 0) {
		process_self_mod(seg, ip1, instr_size);
		compare_jump = false;
	} else {
		dbx_result_segs = Segs;
		dbx_result_regs = cpu_regs;
		if (compare)
			memcpy(rm, &m, COMPARE_SIZE);
	}
	Segs = oldSegs;
	cpu_regs = oldcpu_regs;

	if (compare)
		memcpy(&m, om, COMPARE_SIZE);

	cpu_regs.ip.word[0] += instr_size; // for call
	return true;
}

void Jend()
{
	if (!compare_instructions || !compare_jump)
		return;

	const char *instr = jump_name;
	compare_jump = false;
	fix_segs();
	Bitu bckpflags = cpu_regs.flags;

	dbx_result_regs.flags &= FLAG_CF | FLAG_SF | FLAG_ZF | FLAG_OF;
	cpu_regs.flags &= FLAG_CF | FLAG_SF | FLAG_ZF | FLAG_OF;
	//    cpu_regs.ip = dbx_result_regs.ip;

	if (memcmp(&cpu_regs, &dbx_result_regs, sizeof(CPU_Regs)) != 0 ||
	    memcmp(&Segs, &dbx_result_segs, sizeof(Segments)) != 0 ||
	    memcmp(&m, rm, COMPARE_SIZE) != 0) {
		stackDump();
		trace_instructions = true;
		bool regs_ch = memcmp(&cpu_regs, &dbx_result_regs, sizeof(CPU_Regs));
		bool segs_ch = memcmp(&Segs, &dbx_result_segs, sizeof(Segments));
		bool mem_ch = memcmp(&m, rm, COMPARE_SIZE);
		printf("before ");
		log_regs_dbx_direct(0, "", 0, 0, instr, oldcpu_regs, oldSegs);
		printf("/j-------------Error-during-jump-or-call-result-was-different-to-dosbox-interpreter-------------\\\n");
		//        cpu_regs.ip.word[0] = oldip;
		printf("cs:ip: ");
		::print_instruction_direct(oldSegs.val[1], oldip);
		hexDump(raddr(Segs.val[1], oldip), 8);

		printf("~m2c ");
		log_regs_dbx_direct(0, "", 0, 0, instr, cpu_regs, Segs);

		if (regs_ch) {
			printf("reg ");
			hexDump(&cpu_regs, sizeof(CPU_Regs));
		}
		if (segs_ch) {
			printf("seg ");
			hexDump(&Segs, sizeof(Segments));
		}

		Segs = dbx_result_segs;
		cpu_regs = dbx_result_regs;

		printf("~dbx ");
		log_regs_dbx_direct(0, "", 0, 0, instr, dbx_result_regs, dbx_result_segs);
		if (regs_ch) {
			printf("reg ");
			hexDump(&cpu_regs, sizeof(CPU_Regs));
		}
		if (segs_ch) {
			printf("seg ");
			hexDump(&Segs, sizeof(Segments));
		}
		if (mem_ch) {
			printf("~mem m2c / dbx\n");
			cmpHexDump(&m, rm, COMPARE_SIZE);
		}
		printf("\\j-----------------------------Error-----------------------------------------/\n");
		exit(1);
	}
	cpu_regs.flags = bckpflags;
}

bool Sstart(const char *file, int line, const char *instr)
{
	if (compare_jump)
		Jend();

	run_hw_interrupts();

	log_regs_dbx(file, line, instr, cpu_regs, Segs);
	if (!compare_instructions)
		return true;

	oldip = cpu_regs.ip.word[0];

	dd ip1 = cpu_regs.ip.word[0];
	dw seg = Segs.val[1];

	bool compare(compare_instructions && !already_checked[(seg << 4) + ip1]);

	dbx_single_step();

	if (!compare) {
		if (CPU_Cycles > 0)
			--CPU_Cycles;
		if (!complex_self_modifications)
			return false;
	}
	already_checked[(seg << 4) + ip1] = true;

	dd ip2 = cpu_regs.ip.word[0];
	size_t instr_size = ip2 - ip1;
	// printf("~ %x %x\n",ip1,ip2);
	if (memcmp(m2c::lm + (seg << 4) + ip1,
	           ((db *)&m2c::m) + (seg << 4) + ip1, instr_size) != 0) {
		process_self_mod(seg, ip1, instr_size);
		return false;
	}
	return false;
}

bool Tstart(const char *file, int line, const char *instr)
{
	if (compare_jump)
		Jend();

	run_hw_interrupts();

	log_regs_dbx(file, line, instr, cpu_regs, Segs);
	if (!compare_instructions)
		return true;

	oldip = cpu_regs.ip.word[0];

	dd ip1 = cpu_regs.ip.word[0];
	dw seg = Segs.val[1];

	bool compare(compare_instructions && !already_checked[(seg << 4) + ip1]);
	if (compare) {
		oldSegs = Segs;
		oldcpu_regs = cpu_regs;
	}

	dbx_single_step();

	if (!compare) {
		if (CPU_Cycles > 0)
			--CPU_Cycles;
		if (!complex_self_modifications)
			return false;
	}
	already_checked[(seg << 4) + ip1] = true;

	dd ip2 = cpu_regs.ip.word[0];
	size_t instr_size = ip2 - ip1;

	if (memcmp(m2c::lm + (seg << 4) + ip1,
	           ((db *)&m2c::m) + (seg << 4) + ip1, instr_size) != 0) {
		process_self_mod(seg, ip1, instr_size);
		return false;
	} else {
		if (!compare) {
			return false;
		}
		dbx_result_flags = cpu_regs.flags;
		cpu_regs.flags &= FLAG_CF | FLAG_SF | FLAG_ZF | FLAG_OF;
		dbx_result_segs = Segs;
		dbx_result_regs = cpu_regs;
		Segs = oldSegs;
		cpu_regs = oldcpu_regs;
		return true;
	}
}

void Tend(const char *file, int line, const char *instr)
{
	if (!compare_instructions)
		return;

	fix_segs();
	cpu_regs.flags &= FLAG_CF | FLAG_SF | FLAG_ZF | FLAG_OF;
	cpu_regs.ip = dbx_result_regs.ip;

	if (memcmp(&cpu_regs, &dbx_result_regs, sizeof(CPU_Regs)) != 0 ||
	    memcmp(&Segs, &dbx_result_segs, sizeof(Segments)) != 0) {
		stackDump();
		trace_instructions = true;
		bool regs_ch = memcmp(&cpu_regs, &dbx_result_regs, sizeof(CPU_Regs));
		bool segs_ch = memcmp(&Segs, &dbx_result_segs, sizeof(Segments));
		printf("before ");
		log_regs_dbx_direct(0, "", line, 0, instr, oldcpu_regs, oldSegs);
		printf("/t-----------------Error-results-of-instruction-was-different-within-regs-if-compare-with-dosbox-interpreter------\\\n");
		//        cpu_regs.ip.word[0] = oldip;
		printf("cs:ip: ");
		::print_instruction_direct(oldSegs.val[1], oldip);
		hexDump(raddr(Segs.val[1], oldip), 8);

		printf("~m2c ");
		log_regs_dbx_direct(0, file, line, 0, instr, cpu_regs, Segs);

		if (regs_ch) {
			printf("reg ");
			hexDump(&cpu_regs, sizeof(CPU_Regs));
		}
		if (segs_ch) {
			printf("seg ");
			hexDump(&Segs, sizeof(Segments));
		}

		Segs = dbx_result_segs;
		cpu_regs = dbx_result_regs;

		printf("~dbx ");
		log_regs_dbx_direct(0, file, line, 0, instr, dbx_result_regs, dbx_result_segs);
		if (regs_ch) {
			printf("reg ");
			hexDump(&cpu_regs, sizeof(CPU_Regs));
		}
		if (segs_ch) {
			printf("seg ");
			hexDump(&Segs, sizeof(Segments));
		}
		printf("\\t-----------------------------Error-----------------------------------------/\n");
		exit(1);
	}
	cpu_regs.flags = dbx_result_flags;
}

bool Xstart(const char *file, int line, const char *instr)
{
	if (compare_jump)
		Jend();

	run_hw_interrupts();
	log_regs_dbx(file, line, instr, cpu_regs, Segs);
	if (!compare_instructions)
		return true;

	oldip = cpu_regs.ip.word[0];

	dd ip1 = cpu_regs.ip.word[0];
	dw seg = Segs.val[1];
	bool already = !already_checked[(seg << 4) + ip1];
	bool compare(compare_instructions && !already);
	if (compare) {
		oldSegs = Segs;
		oldcpu_regs = cpu_regs;
		memcpy(om, &m, COMPARE_SIZE);
	}

	if (already)
		shadow_stack.forceenable(); // So if instruction was already
		                            // compare then make .push/.pop
		                            // execute anyway
	dbx_single_step();
	if (already)
		shadow_stack.forcedisable();

	if (!compare) {
		if (CPU_Cycles > 0)
			--CPU_Cycles;
		if (!complex_self_modifications)
			return false;
	}
	already_checked[(seg << 4) + ip1] = true;

	dd ip2 = cpu_regs.ip.word[0];
	size_t instr_size = ip2 - ip1;

	if (memcmp(m2c::lm + (seg << 4) + ip1,
	           ((db *)&m2c::m) + (seg << 4) + ip1, instr_size) != 0) {
		process_self_mod(seg, ip1, instr_size);
		return false;
	} else {
		if (!compare) {
			return false;
		}
		dbx_result_flags = cpu_regs.flags;
		cpu_regs.flags &= FLAG_CF | FLAG_SF | FLAG_ZF | FLAG_OF;
		dbx_result_segs = Segs;
		dbx_result_regs = cpu_regs;
		memcpy(rm, &m, COMPARE_SIZE);

		Segs = oldSegs;
		cpu_regs = oldcpu_regs;
		memcpy(&m, om, COMPARE_SIZE);
		return true;
	}
}

void Xend(const char *file, int line, const char *instr)
{
	if (!compare_instructions)
		return;

	fix_segs();
	cpu_regs.flags &= FLAG_CF | FLAG_SF | FLAG_ZF | FLAG_OF;
	cpu_regs.ip = dbx_result_regs.ip;

	if (memcmp(&cpu_regs, &dbx_result_regs, sizeof(CPU_Regs)) != 0 ||
	    memcmp(&Segs, &dbx_result_segs, sizeof(Segments)) != 0 ||
	    memcmp(&m, rm, COMPARE_SIZE) != 0) {
		stackDump();
		trace_instructions = true;
		bool regs_ch = memcmp(&cpu_regs, &dbx_result_regs, sizeof(CPU_Regs));
		bool segs_ch = memcmp(&Segs, &dbx_result_segs, sizeof(Segments));
		bool mem_ch = memcmp(&m, rm, COMPARE_SIZE);
		printf("before ");
		log_regs_dbx_direct(0, "", line, 0, instr, oldcpu_regs, oldSegs);
		printf("/x------Error-results-of-instruction-was-different-within-regs--or-memory-if-compare-with-dosbox-interpreter------\\\n");
		//        cpu_regs.ip.word[0] = oldip;
		printf("cs:ip: ");
		::print_instruction_direct(oldSegs.val[1], oldip);
		hexDump(raddr(Segs.val[1], oldip), 8);
		printf("~m2c ");
		log_regs_dbx_direct(0, file, line, 0, instr, cpu_regs, Segs);
		if (regs_ch) {
			printf("reg ");
			hexDump(&cpu_regs, sizeof(CPU_Regs));
		}
		if (segs_ch) {
			printf("seg ");
			hexDump(&Segs, sizeof(Segments));
		}

		Segs = dbx_result_segs;
		cpu_regs = dbx_result_regs;
		printf("~dbx ");
		log_regs_dbx_direct(0, file, line, 0, instr, dbx_result_regs, dbx_result_segs);
		if (regs_ch) {
			printf("reg ");
			hexDump(&cpu_regs, sizeof(CPU_Regs));
		}
		if (segs_ch) {
			printf("seg ");
			hexDump(&Segs, sizeof(Segments));
		}
		if (mem_ch) {
			printf("~mem m2c / dbx\n");
			cmpHexDump(&m, rm, COMPARE_SIZE);
		}
		printf("\\x-----------------------------Error-----------------------------------------/\n");
		exit(1);
	}
	cpu_regs.flags = dbx_result_flags;
}

void interpret_unknown_callf(dw newcs, dd newip, db source)
{
	X86_REGREF
	if (cs == newcs && newip == eip) {
		printf("Called from interpreter. return1");
		return; // Most probably a call of interpreter int from interpreter
	}
	cs = newcs;
	eip = newip;

	if (from_interpreter) {
		from_interpreter = false;
		printf("Called from interpreter. return2");
		return;
	}
	compare_jump = false;

	dw oldsp = sp;
	fix_segs();
	return_point.push(*(dd *)raddr(ss, sp));
	/*
	if (debug > 0)
	    printf ("Enter interp current cs=%x ip=%x sp=%x ret_point:%x
	retp.size()=%d\n", cs, ip, sp, return_point.top (), return_point.size
	());
	*/
	do {
		//  log_debug("start\n");
		Normal_Loop();
		//  log_debug("stop\n");
	} while (return_point.top() != (cs << 16) + ip);
	if (return_point.top() != (cs << 16) + ip) {
		log_error("Error cs:ip != return_point %x\n", return_point.top());
	}
	/*
	if (debug > 0)
	    printf ("Exit interp cs=%x ip=%x sp=%x\n", cs, ip, sp);
	*/
	if (oldsp + 4 != sp && cs != 0xf000) {
		log_error("Error it should consume 4 bytes from stack\n"); 
    // callf to bios consumes 0 bytes
		// stackDump ();
		//        exit (1);
	}
	return_point.pop();
}

int log_debug(const char *format, ...)
{
	int result;
	va_list args;

	va_start(args, format);
	char str[256];
	result = vsprintf(str, format, args);
	//        result = vprintf(format, args);
	log_regs_dbx("", 0, str, cpu_regs, Segs);
	va_end(args);

	return result;
}

using json = nlohmann::json;
void ShadowMemory::collect_segs()
{
	X86_REGREF
	if (cs >= 0x192 && cs < 0xa000) {
		dd target = (cs << 4) + eip;
		if (m_code.find(target) == m_code.end())
			m_code[target] = std::make_shared<Code>();
		Code &c(*static_cast<Code *>(m_code.find(target)->second.get()));
		c.m_segs[(size_t)Byte::SegNames::cs].insert(cs);
		c.m_segs[(size_t)Byte::SegNames::es].insert(es);
		c.m_segs[(size_t)Byte::SegNames::ss].insert(ss);
		c.m_segs[(size_t)Byte::SegNames::ds].insert(ds);
		if (fs)
			c.m_segs[(size_t)Byte::SegNames::fs].insert(fs);
		if (gs)
			c.m_segs[(size_t)Byte::SegNames::gs].insert(gs);
	}
}

void ShadowMemory::collect_selfmod(dw seg,
                                   dd ip,
                                   size_t modsize,
                                   size_t size,
                                   const char *insold,
                                   const char *insnew)
{
	if (seg >= 0x192 && seg < 0xa000) {
		dd target = (seg << 4) + ip;
		bool created = false;
		if (m_code.find(target) == m_code.end()) {
			m_code[target] = std::make_shared<Code>();
			created = true;
		}
		Code &c(*static_cast<Code *>(m_code.find(target)->second.get()));
		c.m_selfmodified = true;
		c.size = size;
		c.m_modsize = modsize;
		c.m_selfvariants.insert(insold);
		c.m_selfvariants.insert(insnew);
	}
}

void ShadowMemory::collect_cross_jumps(dw newcs, dd newip)
{
	X86_REGREF
	if (newcs >= 0x192 && newcs < 0xa000) {
		dd target = (newcs << 4) + newip;
		m_jumps.insert(target);
	}
}

void ShadowMemory::collect_data(dd b, size_t size)
{
	X86_REGREF

	dd target = b; // - (db*)&m2c::m;
	if (target >= 0x1920 && target < 0xa0000) {
		if (m_data.find(target) == m_data.end())
			m_data[target] = std::make_shared<Data>();
		Data &d(*static_cast<Data *>(m_data.find(target)->second.get()));
		d.sizes.insert(size);
	}

	if (cs >= 0x192 && cs < 0xa000) {
		dd csip = (cs << 4) + eip;
		if (m_code.find(csip) == m_code.end())
			m_code[csip] = std::make_shared<Code>();
		Code &c(*static_cast<Code *>(m_code.find(csip)->second.get()));
		c.m_video = isaddrbelongtovga(b);

		c.accessingdata.insert(target);
	}
}

void ShadowMemory::dump()
{
	for (auto &[key, value] : m_code) {
		const Byte *b = value.get();
		const Code *c = static_cast<const Code *>(b);
		if (c->accessingdata.size() > 1)
			for (auto &i : c->accessingdata)
				try {
					m_data.at(i)->m_array = true;
				} catch (...) {
				}
	}

	json j;
	j = *this;

	std::string s = j.dump();
	std::string json_file_name = exename + ".json";
	printf("Dumping run-time info into %s\n", json_file_name.c_str());
	FILE *f = fopen(json_file_name.c_str(), "w");
	fwrite(s.c_str(), s.size(), 1, f);
	fclose(f);
	printf("Saved json\n");
	//       printf("%s\n",j.dump(3).c_str());
}

void to_json(nlohmann::json &nlohmann_json_j, const Code &c)
{
	nlohmann_json_j["es"] = c.m_segs[(size_t)Byte::SegNames::es];
	nlohmann_json_j["cs"] = c.m_segs[(size_t)Byte::SegNames::cs];
	nlohmann_json_j["ss"] = c.m_segs[(size_t)Byte::SegNames::ss];
	nlohmann_json_j["ds"] = c.m_segs[(size_t)Byte::SegNames::ds];
	nlohmann_json_j["ss"] = c.m_segs[(size_t)Byte::SegNames::ss];
	//        if (!c.m_segs[(size_t)Byte::SegNames::fs].empty())
	nlohmann_json_j["fs"] = c.m_segs[(size_t)Byte::SegNames::fs];
	//        if (!c.m_segs[(size_t)Byte::SegNames::gs].empty())
	nlohmann_json_j["gs"] = c.m_segs[(size_t)Byte::SegNames::gs];

	//        if (c.m_video)
	nlohmann_json_j["Video"] = c.m_video;
	//        if (c.m_selfmodified)
	nlohmann_json_j["Self"] = c.m_selfmodified;
	nlohmann_json_j["SelfVar"] = c.m_selfvariants;
	//        if (c.size)
	nlohmann_json_j["Size"] = c.size;
	//        if (c.m_modsize)
	nlohmann_json_j["Modsize"] = c.m_modsize;
	//        nlohmann_json_j["Accdat"] = c.accessingdata;
}

void to_json(nlohmann::json &nlohmann_json_j, const Data &nlohmann_json_t)
{
	nlohmann_json_j["Sizes"] = nlohmann_json_t.sizes;
	//	if (nlohmann_json_t.m_array)
	nlohmann_json_j["Array"] = nlohmann_json_t.m_array;
}

template <typename T>
std::string int_to_hex(T i)
{
	std::stringstream stream;
	stream << "0x"
	       //         << std::setfill ('0') << std::setw(sizeof(T)*2)
	       << std::hex << i;
	return stream.str();
}

void to_json(nlohmann::json &nlohmann_json_j, const ShadowMemory &nlohmann_json_t)
{
	for (auto &[key, value] : nlohmann_json_t.m_code) {
		const Byte *b = value.get();
		const Code *c = static_cast<const Code *>(b);
		nlohmann_json_j["Code"][int_to_hex(key)] = *c;
	}
	for (auto &[key, value] : nlohmann_json_t.m_data) {
		const Byte *b = value.get();
		const Data *d = static_cast<const Data *>(b);
		nlohmann_json_j["Data"][int_to_hex(key)] = *d;
	}
	nlohmann_json_j["Jumps"] = nlohmann_json_t.m_jumps;
}

} // namespace m2c

//#include <cstdio>
void init_entrypoint(Bit16u relocate)
{
	X86_REGREF
	printf("Starting m2c\n");
	printf("\n\nCS:IP 0x%x:0x%x\tMemBase: %p\n", cs, eip, MemBase);

	//   memset(((db*)&m2c::m)+0x1920+0x100,0,0xfef0);
	m2c::Initializer();

	m2c::load_drivers();

	memcpy(m2c::lm, &m2c::m, COMPARE_SIZE); // backup memory after program
	                                        // loaded
  /*
  FILE* file_to_write = 0;
  if((file_to_write = fopen("goody.com", "wb")) != 0){

      fwrite(((db*)&m2c::m)+0x1920+0x100, 0xff00, 1, file_to_write);
      fclose(file_to_write);
  }
  */
	m2c::_STATE _state;
	(*m2c::_ENTRY_POINT_)(0, &_state);
}

#ifndef DOSBOX_CUSTOM_H
#define DOSBOX_CUSTOM_H

#include "dosbox.h"
#include <stack>
#include <vector>

typedef Bit16u dw;
typedef Bit32u dd;

namespace m2c {

class _STATE;
    extern int log_debug(const char *format, ...);

    class ShadowStack {
        struct Frame {
            const char *file;
            size_t line;
            dd sp;
            dw cs;
            dd ip;
            dd value;
            dw *pointer_;
            size_t addcounter;
            size_t remcounter;
//            bool itwascall;
            size_t call_deep;
        };

        std::vector<Frame> m_ss;
        size_t m_current;
        bool m_itiscall;
        size_t m_deep;
        int m_needtoskipcall;
        bool m_active;
    public:
        size_t m_currentdeep;

        ShadowStack() : m_current(0),m_itiscall(false),
m_needtoskipcall(0),m_deep(1),m_currentdeep(0),m_active(true) {}

        void enable() {m_active=true;}
        void disable() {m_active=false;}

        void push(_STATE *_state, dd value);

        void pop(_STATE *_state);

        void print(_STATE *_state);
        void itiscall() {m_itiscall=true;}

        void decreasedeep();
        bool needtoskipcalls();
        size_t getneedtoskipcall(){return m_needtoskipcall;}

    };

    extern ShadowStack shadow_stack;

}



class custom_prog {
	public:
		virtual bool probe(char *name, Bit16u relocate,
				Bit16u init_cs, Bit16u init_ip) = 0;
		virtual void remove(Bit8u exitcode) = 0;
		virtual void suspend() = 0;
		virtual void resume() = 0;

		virtual int fcall_handler(Bitu seg, Bitu off) = 0;
		virtual int ncall_handler(Bit16u off) = 0;
	private:
};

extern bool trace_instructions;
extern volatile bool defered_custom_call; // int was called by interpreter which m2c have to execute later
extern volatile bool from_callf; // check if m2c's interrupt called from interpreter or callf from m2c to interperter's bios
extern volatile bool from_interpreter;
extern volatile bool doing_single_step;
extern volatile bool compare_jump;
extern Bitu old_cycles; // backup remaining cycles
extern std::stack<Bit32u> return_point; // where interpreter should return cntrol to m2c
extern void print_instruction(Bit16u newcs, Bit32u newip);

#if DOSBOX_CUSTOM
// old values of CS:IP (directly before the call), usable for diagnosis
extern Bit16u custom_oldCS, custom_oldIP;


void custom_init(Section *sec);

/* prototypes for Execution operations */
void custom_init_prog(char *, Bit16u, Bit16u, Bit16u);
void custom_exit_prog(Bit8u);
void custom_init_entrypoint(char *, Bit16u);

/* prototypes for CPU operations */
int custom_callf(Bitu, Bitu);

#else /* DOSBOX_CUSTOM */

static inline void custom_init(Section *sec) { }

/* prototypes for Execution operations */
static inline void
custom_init_prog(char *name, Bit16u relocate, Bit16u init_cs, Bit16u init_ip) { }
static inline void custom_init_entrypoint(char *, Bit16u) { }

static inline void custom_exit_prog(Bit8u exitcode) { }

/* prototypes for CPU operations */
static inline int custom_callf(Bitu seg, Bitu off) { return 0; }

#endif /* DOSBOX_CUSTOM */

#endif /* DOSBOX_CUSTOM_H */

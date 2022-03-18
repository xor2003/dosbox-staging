#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "init.h"

//#include "iplay.h"
extern bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
namespace m2c{
extern void   Initializer();
}
// Is the game running?
static int init = 0;

//Segment relocation of the game
Bitu reloc_game; // in paragraphs from MemBase

//Datasegment
unsigned short datseg = 0;
Bit8u *p_datseg = NULL;
//Datesegment relocation from game if gen is called
unsigned short datseg_bak = 0;
Bit8u *p_datseg_bak = NULL;




/**
	init_get_fname - copies the filename from src to dst
	@src:	pathname to a file
	@dst:	string where the filename shoukld be stored
*/
void init_get_fname(char *dst, char *src) {
	char *p = NULL;
	char *c = src;

	while (*c != '\0') {
		if (*c == '\\')
			p = c + 1;
		c++;
	}

	/* No backslash in src*/
	if (p == NULL)
		p = src;

	while ((*dst++ = tolower(*p++)));
	*dst = '\0';
}

//Initializer - is startet if executed file is SCHICKM.EXE/BLADEM.EXE or GEN.EXE
//Returns true if the desired programm is started
bool masm2c_init(char *name, unsigned short reloc, unsigned short _cs, unsigned short ip)
{

	char fname[81];
	int ver;

	init_get_fname(fname, name);

	if (strcmp(fname, "iplay.exe")) return false;

	/* Check CS:IP in the EXE-Header are 0:0
	 * and the first executed instruction is mov dx,i16 */
	//if (_cs != 0 || ip != 0 || real_readb(reloc+_cs, ip) != 0xba)
//		return false;

	/* Show CS:IP on the virtual machine and the pointer to 0:0 */
	m2c::log_debug("\n\nCS:IP 0x%x:0x%x\tMemBase: %p\n", reloc, ip, MemBase);

	/* Read and show the Datasegment */
	datseg_bak = datseg;
	datseg = real_readw(reloc, ip+1);
	p_datseg_bak = p_datseg;
	p_datseg = MemBase + PhysMake(datseg, 0);
	m2c::log_debug("Dseg: 0x%X\n", datseg);

	return true;
}


void masm2c_exit(unsigned char exit)
{
		init++;
		datseg = datseg_bak;
		datseg_bak = 0;
		p_datseg = p_datseg_bak;
		p_datseg_bak = NULL;
		m2c::log_info("masm2c_exit Exiting\n");

}

int init_callf(unsigned selector, unsigned offs)
{
//	if (selector == ss)
//		return 0;
	if (selector >= 0xa000)
		return 0;

	{
                return __dispatch_call((selector<<16) + offs, 0);
	}

	return 0;
}


//namespace m2c{ m2cf* _ENTRY_POINT_; }
void init_entrypoint(Bit16u relocate)
{
   m2c::log_debug("Starting program\n");
   m2c::Initializer();
  (*m2c::_ENTRY_POINT_)(0,0);
}
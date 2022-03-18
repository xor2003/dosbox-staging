#ifndef __asm_16_h__
#define __asm_16_h__

 typedef dw MWORDSIZE;

#if defined(_PROTECTED_MODE)
//  #define raddr(segment,offset) ((db *)&m2c::m+(db)(offset)+selectors[segment])
static inline db* raddr_(dw segment,dw offset) {return ((db *)&m+(dw)(offset)+selectors[segment]);}
#else
 //#define raddr(segment,offset) (((db *)&m2c::m + ((segment)<<4) + (offset) ))
static inline db* raddr_(dw segment,dw offset) {return (db *)&m + (segment<<4) + offset;}
#endif

 #define offset(segment,name) (static_cast<dw>((db*)(&name)-(db*)(&segment)))
 #define far_offset(segment,name) (offset(segment,name)+(seg_offset(segment)<<16))
/*
 #define MOVSS(a) {void * dest;void * src;src=realAddress(si,ds); dest=realAddress(di,es); \
		memmove(dest,src,a); di+=(GET_DF()==0)?a:-a; si+=(GET_DF()==0)?a:-a; }
 #define STOS(a,b) {memcpy (realAddress(di,es), ((db *)&eax)+b, a); di+=(GET_DF()==0)?a:-a;}
*/

 #define REP cx++;while (--cx != 0)
 #define REPE if (cx) {AFFECT_ZFifz(0);};cx++;while (--cx != 0 && GET_ZF())
 #define REPNE if (cx) {m2c::oldZF=GET_ZF();m2c::repForMov=true;AFFECT_ZFifz(1);};cx++;while (--cx != 0 && !GET_ZF())

 #define XLAT {al = *m2c::raddr_(ds,bx+al);}
 #define CMPSB \
	{ \
			db* src=realAddress(si,ds); db* dest=realAddress(di,es); \
			CMP(*src, *dest); di+=(GET_DF()==0)?1:-1; si+=(GET_DF()==0)?1:-1; \
	} {m2c::repForMov=false;}
 #define CMPSW \
	{ \
			dw* src=(dw*)realAddress(si,ds); dw* dest=(dw*)realAddress(di,es); \
			CMP(*src, *dest); di+=(GET_DF()==0)?2:-2; si+=(GET_DF()==0)?2:-2; \
	} {m2c::repForMov=false;}
 #define CMPSD \
	{  \
			dd* src=(dd*)realAddress(si,ds); dd* dest=(dd*)realAddress(di,es); \
			CMP(*src, *dest); di+=(GET_DF()==0)?4:-4; si+=(GET_DF()==0)?4:-4; \
	} {m2c::repForMov=false;}

 #define SCASB \
	{ \
			CMP(al, *realAddress(di,es)); di+=(GET_DF()==0)?1:-1; \
	} {m2c::repForMov=false;}
 #define SCASW \
	{  \
			CMP(ax, *(dw*)realAddress(di,es)); di+=(GET_DF()==0)?2:-2; \
	} {m2c::repForMov=false;}
 #define SCASD \
	{  \
			CMP(eax, *(dd*)realAddress(di,es)); di+=(GET_DF()==0)?4:-4; \
	} {m2c::repForMov=false;}

 #define LODS(addr,destreg,s) {memcpy (((db *)&eax), &(addr), s);; destreg+=(GET_DF()==0)?s:-s;}

// #define LODSS(a,b) {memcpy (((db *)&eax)+b, realAddress(si,ds), a); si+=(GET_DF()==0)?a:-a;}
#define LODSB {al = mem_readb((db*)m2c::raddr_(ds,si)-(db*)&m2c::m); si+=(GET_DF()==0)?1:-1;}
#define LODSW {ax = mem_readw((db*)m2c::raddr_(ds,si)-(db*)&m2c::m); si+=(GET_DF()==0)?2:-2;}
#define LODSD {eax = mem_readd((db*)m2c::raddr_(ds,si)-(db*)&m2c::m); si+=(GET_DF()==0)?4:-4;}


 #ifdef MSB_FIRST
  #define STOSB STOS(1,3)
  #define STOSW STOS(2,2)
 #else
/*
 //SDL2 VGA
  #if SDL_MAJOR_VERSION == 2 && !defined(NOSDL)
   #define STOSB { \
	if (es==0xa000)\
		{ \
	  SDL_SetRenderDrawColor(renderer, vgaPalette[3*al+2], vgaPalette[3*al+1], vgaPalette[3*al], 255); \
          SDL_RenderDrawPoint(renderer, di%320, di/320); \
  	  SDL_RenderPresent(renderer); \
	  di+=(GET_DF()==0)?1:-1;} \
	else \
		{STOS(1,0);} \
	}
  #else
   #define STOSB STOS(1,0)
  #endif
   #ifdef A_NORMAL
    #define STOSW { \
	if (es==0xB800)  \
		{dd averytemporary=(di>>1);attrset(COLOR_PAIR(ah)); mvaddch(averytemporary/80, averytemporary%80, al); ;di+=(GET_DF()==0)?2:-2;refresh();} \
	else \
		{STOS(2,0);} \
	}
   #else
    #define STOSW STOS(2,0)
   #endif
*/
 #define MOVSS(a) {void * dest;void * src;src=realAddress(si,ds); dest=realAddress(di,es); \
		memmove(dest,src,a); di+=(GET_DF()==0)?a:-a; si+=(GET_DF()==0)?a:-a; }

   #define MOVSB {mem_writeb((db*)m2c::raddr_(es,di)-(db*)&m2c::m, mem_readb(realAddress(si,ds)-(db*)&m2c::m));si+=(GET_DF()==0)?1:-1;di+=(GET_DF()==0)?1:-1;} {if (m2c::repForMov) AFFECT_ZF(m2c::oldZF); m2c::repForMov=false;}
   #define MOVSW {mem_writew((db*)m2c::raddr_(es,di)-(db*)&m2c::m, mem_readw(realAddress(si,ds)-(db*)&m2c::m));si+=(GET_DF()==0)?2:-2;di+=(GET_DF()==0)?2:-2;} {if (m2c::repForMov) AFFECT_ZF(m2c::oldZF); m2c::repForMov=false;}
   #define MOVSD {mem_writed((db*)m2c::raddr_(es,di)-(db*)&m2c::m, mem_readd(realAddress(si,ds)-(db*)&m2c::m));si+=(GET_DF()==0)?4:-4;di+=(GET_DF()==0)?4:-4;} {if (m2c::repForMov) AFFECT_ZF(m2c::oldZF); m2c::repForMov=false;}

   #define STOSB {mem_writeb((db*)m2c::raddr_(es,di)-(db*)&m2c::m, al);di+=(GET_DF()==0)?1:-1;} {m2c::repForMov=false;}
   #define STOSW {mem_writew((db*)m2c::raddr_(es,di)-(db*)&m2c::m, ax);di+=(GET_DF()==0)?2:-2;} {m2c::repForMov=false;}
   #define STOSD {mem_writed((db*)m2c::raddr_(es,di)-(db*)&m2c::m, eax);di+=(GET_DF()==0)?4:-4;} {m2c::repForMov=false;}
 #endif
// #define STOSD STOS(4,0)

 #define INSB {db averytemporary3; IN(averytemporary3,dx);*realAddress(di,es)=averytemporary3;di+=(GET_DF()==0)?1:-1;} {m2c::repForMov=false;}
 #define INSW {dw averytemporary3; IN(averytemporary3,dx);*realAddress(di,es)=averytemporary3;di+=(GET_DF()==0)?2:-2;} {m2c::repForMov=false;}

#define LOOP(label) if (--cx) GOTOLABEL(label)
#define LOOPE(label) if (--cx && GET_ZF()) GOTOLABEL(label)
#define LOOPNE(label) if (--cx && !GET_ZF()) GOTOLABEL(label)


#endif


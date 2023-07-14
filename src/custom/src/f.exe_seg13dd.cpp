/* THIS IS GENERATED FILE */

        
#include "f.exe.h"

                

 bool seg13dd_0_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg13dd_0_proc:
    _begin:
loc_13dd0:
	// 4662 
cs=0x57f;eip=0x000000; 	T(ah = 1;);	// 9525                  mov     ah, 1 ;~ 057F:0000
cs=0x57f;eip=0x000002; 	S(_INT(0x21));	// 9526                  int     21h             ; DOS - KEYBOARD INPUT ;~ 057F:0002
cs=0x57f;eip=0x000004; 	J(RETF(0));	// 9528                  retf ;~ 057F:0004
ret_57f_5:
	// 4663 
cs=0x57f;eip=0x000005; 	T(SUB(ah, ah));	// 9530                  sub     ah, ah ;~ 057F:0005
cs=0x57f;eip=0x000007; 	S(_INT(0x16));	// 9531                  int     16h             ; KEYBOARD - READ CHAR FROM BUFFER, WAIT IF EMPTY ;~ 057F:0007
cs=0x57f;eip=0x000009; 	J(RETF(0));	// 9533                  retf ;~ 057F:0009
ret_57f_a:
	// 4664 
cs=0x57f;eip=0x00000a; 	T(ah = 1;);	// 9535                  mov     ah, 1 ;~ 057F:000A
cs=0x57f;eip=0x00000c; 	S(_INT(0x16));	// 9536                  int     16h             ; KEYBOARD - CHECK BUFFER, DO NOT CLEAR ;~ 057F:000C
cs=0x57f;eip=0x00000e; 	J(JZ(loc_13de3));	// 9540                  jz      short loc_13DE3 ;~ 057F:000E
cs=0x57f;eip=0x000010; 	T(SUB(ax, ax));	// 9541                  sub     ax, ax ;~ 057F:0010
cs=0x57f;eip=0x000012; 	J(RETF(0));	// 9542                  retf ;~ 057F:0012
loc_13de3:
	// 4665 
cs=0x57f;eip=0x000013; 	T(SUB(ax, ax));	// 9546                  sub     ax, ax ;~ 057F:0013
cs=0x57f;eip=0x000015; 	T(NOT(ax));	// 9547                  not     ax ;~ 057F:0015
cs=0x57f;eip=0x000017; 	J(RETF(0));	// 9548                  retf ;~ 057F:0017
ret_57f_18:
	// 4666 
cs=0x57f;eip=0x000018; 	X(PUSH(es));	// 9550                  push    es ;~ 057F:0018
loc_13de9:
	// 4667 
cs=0x57f;eip=0x000019; 	T(SUB(ax, ax));	// 9553                  sub     ax, ax ;~ 057F:0019
cs=0x57f;eip=0x00001b; 	T(es = ax;);	// 9554                  mov     es, ax ;~ 057F:001B
cs=0x57f;eip=0x00001d; 	T(MOV(al, *(raddr(es,0x417))));	// 9555                  mov     al, es:417h ;~ 057F:001D
cs=0x57f;eip=0x000021; 	T(AND(al, 0x0F0));	// 9556                  and     al, 0F0h ;~ 057F:0021
cs=0x57f;eip=0x000023; 	X(MOV(*(raddr(es,0x417)), al));	// 9557                  mov     es:417h, al ;~ 057F:0023
cs=0x57f;eip=0x000027; 	X(POP(es));	// 9558                  pop     es ;~ 057F:0027
cs=0x57f;eip=0x000028; 	J(RETF(0));	// 9559                  retf ;~ 057F:0028
ret_57f_29:
	// 4668 
cs=0x57f;eip=0x000029; 	X(PUSH(bp));	// 9561                  push    bp ;~ 057F:0029
cs=0x57f;eip=0x00002a; 	T(bp = sp;);	// 9562                  mov     bp, sp ;~ 057F:002A
cs=0x57f;eip=0x00002c; 	T(dx = 0x201;);	// 9563                  mov     dx, 201h ;~ 057F:002C
cs=0x57f;eip=0x00002f; 	S(IN(al, dx));	// 9564                  in      al, dx          ; Game I/O port ;~ 057F:002F
cs=0x57f;eip=0x000030; 	T(MOV(cx, *(dw*)(raddr(ss,bp+6))));	// 9567                  mov     cx, [bp+6] ;~ 057F:0030
cs=0x57f;eip=0x000033; 	T(ADD(cx, 4));	// 9568                  add     cx, 4 ;~ 057F:0033
cs=0x57f;eip=0x000036; 	T(SHR(al, cl));	// 9569                  shr     al, cl ;~ 057F:0036
cs=0x57f;eip=0x000038; 	T(AND(al, 1));	// 9570                  and     al, 1 ;~ 057F:0038
cs=0x57f;eip=0x00003a; 	T(SUB(ah, ah));	// 9571                  sub     ah, ah ;~ 057F:003A
cs=0x57f;eip=0x00003c; 	T(XOR(ax, 1));	// 9572                  xor     ax, 1 ;~ 057F:003C
cs=0x57f;eip=0x00003f; 	X(POP(bp));	// 9573                  pop     bp ;~ 057F:003F
cs=0x57f;eip=0x000040; 	J(RETF(0));	// 9574                  retf ;~ 057F:0040
ret_57f_41:
	// 4669 
cs=0x57f;eip=0x000041; 	X(POP(bp));	// 9576                  pop     bp ;~ 057F:0041
cs=0x57f;eip=0x000042; 	J(RETN(2));	// 9577                  retn    2 ;~ 057F:0042
ret_57f_45:
	// 4670 
cs=0x57f;eip=0x000045; 	X(PUSH(bp));	// 9579                  push    bp ;~ 057F:0045
cs=0x57f;eip=0x000046; 	T(bp = sp;);	// 9580                  mov     bp, sp ;~ 057F:0046
cs=0x57f;eip=0x000048; 	X(PUSH(di));	// 9581                  push    di ;~ 057F:0048
cs=0x57f;eip=0x000049; 	X(PUSH(*(dw*)(raddr(ss,bp+4))));	// 9582                  push    word ptr [bp+4] ;~ 057F:0049
//cs=0x57f;eip=0x00004c; 	J(CALL(__dispatch_call,loc_13de9+1));	// 9583                  call    near ptr loc_13DE9+1 ;~ 057F:004C
cs=0x57f;eip=0x00004f; 	T(OR(ax, ax));	// 9584                  or      ax, ax ;~ 057F:004F
cs=0x57f;eip=0x000051; 	J(JZ(loc_13e37));	// 9585                  jz      short loc_13E37 ;~ 057F:0051
cs=0x57f;eip=0x000053; 	T(XCHG(ax, dx));	// 9586                  xchg    ax, dx ;~ 057F:0053
cs=0x57f;eip=0x000054; 	T(di = dx;);	// 9587                  mov     di, dx ;~ 057F:0054
cs=0x57f;eip=0x000056; 	T(XOR(ax, ax));	// 9588                  xor     ax, ax ;~ 057F:0056
cs=0x57f;eip=0x000058; 	T(cx = 0x0FFFF;);	// 9589                  mov     cx, 0FFFFh ;~ 057F:0058
	// 9590                  repne scasb ;~ 057F:005B
cs=0x57f;eip=0x00005b; 	T(	REPNE SCASB);	// 9590                  repne scasb ;~ 057F:005B
cs=0x57f;eip=0x00005d; 	T(NOT(cx));	// 9591                  not     cx ;~ 057F:005D
cs=0x57f;eip=0x00005f; 	T(DEC(cx));	// 9592                  dec     cx ;~ 057F:005F
cs=0x57f;eip=0x000060; 	T(bx = 2;);	// 9593                  mov     bx, 2 ;~ 057F:0060
cs=0x57f;eip=0x000063; 	T(ah = 0x40;);	// 9594                  mov     ah, 40h ;~ 057F:0063
cs=0x57f;eip=0x000065; 	S(_INT(0x21));	// 9595                  int     21h             ; DOS - 2+ - WRITE TO FILE WITH HANDLE ;~ 057F:0065
loc_13e37:
	// 4671 
cs=0x57f;eip=0x000067; 	X(POP(di));	// 9599                  pop     di ;~ 057F:0067
cs=0x57f;eip=0x000068; 	T(sp = bp;);	// 9600                  mov     sp, bp ;~ 057F:0068
cs=0x57f;eip=0x00006a; 	X(POP(bp));	// 9601                  pop     bp ;~ 057F:006A
cs=0x57f;eip=0x00006b; 	J(RETN(2));	// 9602                  retn    2 ;~ 057F:006B
ret_57f_6e:
	// 4672 
cs=0x57f;eip=0x00006e; 	X(PUSH(bp));	// 9604                  push    bp ;~ 057F:006E
cs=0x57f;eip=0x00006f; 	T(bp = sp;);	// 9605                  mov     bp, sp ;~ 057F:006F
cs=0x57f;eip=0x000071; 	X(PUSH(si));	// 9606                  push    si ;~ 057F:0071
cs=0x57f;eip=0x000072; 	T(MOV(si, *(dw*)(raddr(ss,bp+4))));	// 9607                  mov     si, [bp+4] ;~ 057F:0072
cs=0x57f;eip=0x000075; 	T(TEST(*(raddr(ds,si+6)), 0x83));	// 9608                  test    byte ptr [si+6], 83h ;~ 057F:0075
cs=0x57f;eip=0x000079; 	J(JZ(loc_13e68));	// 9609                  jz      short loc_13E68 ;~ 057F:0079
cs=0x57f;eip=0x00007b; 	T(TEST(*(raddr(ds,si+6)), 8));	// 9610                  test    byte ptr [si+6], 8 ;~ 057F:007B
cs=0x57f;eip=0x00007f; 	J(JZ(loc_13e68));	// 9611                  jz      short loc_13E68 ;~ 057F:007F
cs=0x57f;eip=0x000081; 	X(PUSH(*(dw*)(raddr(ds,si+4))));	// 9612                  push    word ptr [si+4] ;~ 057F:0081
cs=0x57f;eip=0x000084; 	J(CALL(__dispatch_call,byte_1448c));	// 9613                  call    near ptr byte_1448C ;~ 057F:0084
cs=0x57f;eip=0x000087; 	T(ADD(sp, 2));	// 9614                  add     sp, 2 ;~ 057F:0087
cs=0x57f;eip=0x00008a; 	X(AND(*(raddr(ds,si+6)), 0x0F7));	// 9615                  and     byte ptr [si+6], 0F7h ;~ 057F:008A
cs=0x57f;eip=0x00008e; 	T(SUB(ax, ax));	// 9616                  sub     ax, ax ;~ 057F:008E
cs=0x57f;eip=0x000090; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 9617                  mov     [si], ax ;~ 057F:0090
cs=0x57f;eip=0x000092; 	X(MOV(*(dw*)(raddr(ds,si+4)), ax));	// 9618                  mov     [si+4], ax ;~ 057F:0092
cs=0x57f;eip=0x000095; 	X(MOV(*(dw*)(raddr(ds,si+2)), ax));	// 9619                  mov     [si+2], ax ;~ 057F:0095
loc_13e68:
	// 4673 
cs=0x57f;eip=0x000098; 	X(POP(si));	// 9623                  pop     si ;~ 057F:0098
cs=0x57f;eip=0x000099; 	X(POP(bp));	// 9624                  pop     bp ;~ 057F:0099
cs=0x57f;eip=0x00009a; 	J(RETN(0));	// 9625                  retn ;~ 057F:009A
ret_57f_9b:
	// 4674 
cs=0x57f;eip=0x00009b; 	T(NOP);	// 9627                  nop ;~ 057F:009B
cs=0x57f;eip=0x00009c; 	X(PUSH(bp));	// 9628                  push    bp ;~ 057F:009C
cs=0x57f;eip=0x00009d; 	T(bp = sp;);	// 9629                  mov     bp, sp ;~ 057F:009D
cs=0x57f;eip=0x00009f; 	T(SUB(sp, 0x0A));	// 9630                  sub     sp, 0Ah ;~ 057F:009F
cs=0x57f;eip=0x0000a2; 	X(PUSH(di));	// 9631                  push    di ;~ 057F:00A2
cs=0x57f;eip=0x0000a3; 	X(PUSH(si));	// 9632                  push    si ;~ 057F:00A3
cs=0x57f;eip=0x0000a4; 	T(MOV(si, *(dw*)(raddr(ss,bp+8))));	// 9633                  mov     si, [bp+8] ;~ 057F:00A4
cs=0x57f;eip=0x0000a7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 9634                  mov     bx, [bp+6] ;~ 057F:00A7
cs=0x57f;eip=0x0000aa; 	T(MOV(al, *(raddr(ds,bx))));	// 9635                  mov     al, [bx] ;~ 057F:00AA
cs=0x57f;eip=0x0000ac; 	T(CBW);	// 9636                  cbw ;~ 057F:00AC
cs=0x57f;eip=0x0000ad; 	T(CMP(ax, 0x61));	// 9637                  cmp     ax, 61h ; 'a' ;~ 057F:00AD
cs=0x57f;eip=0x0000b0; 	T(DEC(bp));	// 9638                  dec     bp ;~ 057F:00B0

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_13de3: 	goto loc_13de3;
        case m2c::kloc_13de9: 	goto loc_13de9;
        case m2c::kloc_13e37: 	goto loc_13e37;
        case m2c::kloc_13e68: 	goto loc_13e68;
        case m2c::kret_57f_18: 	goto ret_57f_18;
        case m2c::kret_57f_29: 	goto ret_57f_29;
        case m2c::kret_57f_41: 	goto ret_57f_41;
        case m2c::kret_57f_45: 	goto ret_57f_45;
        case m2c::kret_57f_5: 	goto ret_57f_5;
        case m2c::kret_57f_6e: 	goto ret_57f_6e;
        case m2c::kret_57f_9b: 	goto ret_57f_9b;
        case m2c::kret_57f_a: 	goto ret_57f_a;
        case m2c::kseg13dd_0_proc: 	goto seg13dd_0_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}


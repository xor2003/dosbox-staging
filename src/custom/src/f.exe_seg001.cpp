/* THIS IS GENERATED FILE */

        
#include "f.exe.h"

                

 bool sub_10f7a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_10f7a:
    _begin:
#undef var_32
#define var_32 -0x32
	// 1165 var_32          = byte ptr -32h ;~ 0204:095A
#undef var_16
#define var_16 -0x16
	// 1166 var_16          = word ptr -16h ;~ 0204:095A
#undef var_12
#define var_12 -0x12
	// 1167 var_12          = word ptr -12h ;~ 0204:095A
#undef var_10
#define var_10 -0x10
	// 1168 var_10          = word ptr -10h ;~ 0204:095A
#undef var_4
#define var_4 -4
	// 1169 var_4           = word ptr -4 ;~ 0204:095A
#undef var_2
#define var_2 -2
	// 1170 var_2           = word ptr -2 ;~ 0204:095A
#undef arg_0
#define arg_0 4
	// 1171 arg_0           = word ptr  4 ;~ 0204:095A
cs=0x204;eip=0x00095a; 	X(ENTER(0x32, 0));	// 1173                  enter   32h, 0 ;~ 0204:095A
cs=0x204;eip=0x00095e; 	X(PUSH(es));	// 1174                  push    es ;~ 0204:095E
cs=0x204;eip=0x00095f; 	X(PUSH(di));	// 1175                  push    di ;~ 0204:095F
cs=0x204;eip=0x000960; 	X(PUSH(bx));	// 1176                  push    bx ;~ 0204:0960
cs=0x204;eip=0x000961; 	X(PUSH(cx));	// 1177                  push    cx ;~ 0204:0961
cs=0x204;eip=0x000962; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), 0x4900));	// 1178                  mov     [bp+var_16], 4900h ;~ 0204:0962
cs=0x204;eip=0x000967; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 1179                  mov     ax, [bp+arg_0] ;~ 0204:0967
cs=0x204;eip=0x00096a; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 1180                  mov     [bp+var_10], ax ;~ 0204:096A
cs=0x204;eip=0x00096d; 	T(ax = ss;);	// 1181                  mov     ax, ss ;~ 0204:096D
cs=0x204;eip=0x00096f; 	T(es = ax;);	// 1182                  mov     es, ax ;~ 0204:096F
cs=0x204;eip=0x000971; 	T(di = bp+var_32);	// 1183                  lea     di, [bp+var_32] ;~ 0204:0971
cs=0x204;eip=0x000974; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 1184                  mov     [bp+var_2], 0 ;~ 0204:0974
cs=0x204;eip=0x000979; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 1185                  mov     [bp+var_4], 0 ;~ 0204:0979
cs=0x204;eip=0x00097e; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), 0));	// 1186                  mov     [bp+var_12], 0 ;~ 0204:097E
cs=0x204;eip=0x000983; 	T(ax = 0x300;);	// 1187                  mov     ax, 300h ;~ 0204:0983
cs=0x204;eip=0x000986; 	T(bx = 0x21;);	// 1188                  mov     bx, 21h ; '!' ;~ 0204:0986
cs=0x204;eip=0x000989; 	T(XOR(cx, cx));	// 1189                  xor     cx, cx ;~ 0204:0989
cs=0x204;eip=0x00098b; 	J(CALL(__dispatch_call,_unk_1f35f));	// 1190                  call    near ptr _unk_1F35F ;~ 0204:098B
cs=0x204;eip=0x00098e; 	J(JC(loc_10fc5));	// 1191                  jb      short loc_10FC5 ;~ 0204:098E
cs=0x204;eip=0x000990; 	T(TEST(*(dw*)(raddr(ss,bp+var_12)), 1));	// 1192                  test    [bp+var_12], 1 ;~ 0204:0990
cs=0x204;eip=0x000995; 	J(JNZ(loc_10fbc));	// 1193                  jnz     short loc_10FBC ;~ 0204:0995
cs=0x204;eip=0x000997; 	T(ax = 0;);	// 1194                  mov     ax, 0 ;~ 0204:0997
cs=0x204;eip=0x00099a; 	J(JMP(loc_10fbf));	// 1195                  jmp     short loc_10FBF ;~ 0204:099A
loc_10fbc:
	// 4397 
cs=0x204;eip=0x00099c; 	T(ax = 1;);	// 1199                  mov     ax, 1 ;~ 0204:099C
loc_10fbf:
	// 4398 
cs=0x204;eip=0x00099f; 	X(POP(cx));	// 1203                  pop     cx ;~ 0204:099F
cs=0x204;eip=0x0009a0; 	X(POP(bx));	// 1204                  pop     bx ;~ 0204:09A0
cs=0x204;eip=0x0009a1; 	X(POP(di));	// 1205                  pop     di ;~ 0204:09A1
cs=0x204;eip=0x0009a2; 	X(POP(es));	// 1206                  pop     es ;~ 0204:09A2
cs=0x204;eip=0x0009a3; 	T(LEAVE);	// 1207                  leave ;~ 0204:09A3
cs=0x204;eip=0x0009a4; 	J(RETN(0));	// 1208                  retn ;~ 0204:09A4
loc_10fc5:
	// 4399 
cs=0x204;eip=0x0009a5; 	T(ax = 0x21;);	// 1212                  mov     ax, 21h ; '!' ;~ 0204:09A5
cs=0x204;eip=0x0009a8; 	J(JMP(loc_10fbf));	// 1213                  jmp     short loc_10FBF ;~ 0204:09A8

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_10fbc: 	goto loc_10fbc;
        case m2c::kloc_10fbf: 	goto loc_10fbf;
        case m2c::kloc_10fc5: 	goto loc_10fc5;
        case m2c::ksub_10f7a: 	goto sub_10f7a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_10fca(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_10fca:
    _begin:
#undef var_32
#define var_32 -0x32
	// 1224 var_32          = byte ptr -32h ;~ 0204:09AA
#undef var_22
#define var_22 -0x22
	// 1225 var_22          = word ptr -22h ;~ 0204:09AA
#undef var_16
#define var_16 -0x16
	// 1226 var_16          = word ptr -16h ;~ 0204:09AA
#undef var_12
#define var_12 -0x12
	// 1227 var_12          = word ptr -12h ;~ 0204:09AA
#undef var_10
#define var_10 -0x10
	// 1228 var_10          = word ptr -10h ;~ 0204:09AA
#undef var_4
#define var_4 -4
	// 1229 var_4           = word ptr -4 ;~ 0204:09AA
#undef var_2
#define var_2 -2
	// 1230 var_2           = word ptr -2 ;~ 0204:09AA
#undef arg_0
#define arg_0 4
	// 1231 arg_0           = word ptr  4 ;~ 0204:09AA
#undef arg_2
#define arg_2 6
	// 1232 arg_2           = word ptr  6 ;~ 0204:09AA
cs=0x204;eip=0x0009aa; 	X(ENTER(0x32, 0));	// 1234                  enter   32h, 0 ;~ 0204:09AA
cs=0x204;eip=0x0009ae; 	X(PUSH(es));	// 1235                  push    es ;~ 0204:09AE
cs=0x204;eip=0x0009af; 	X(PUSH(di));	// 1236                  push    di ;~ 0204:09AF
cs=0x204;eip=0x0009b0; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), 0x4A00));	// 1237                  mov     [bp+var_16], 4A00h ;~ 0204:09B0
cs=0x204;eip=0x0009b5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 1238                  mov     ax, [bp+arg_0] ;~ 0204:09B5
cs=0x204;eip=0x0009b8; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 1239                  mov     [bp+var_10], ax ;~ 0204:09B8
cs=0x204;eip=0x0009bb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 1240                  mov     ax, [bp+arg_2] ;~ 0204:09BB
cs=0x204;eip=0x0009be; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 1241                  mov     [bp+var_22], ax ;~ 0204:09BE
cs=0x204;eip=0x0009c1; 	T(ax = ss;);	// 1242                  mov     ax, ss ;~ 0204:09C1
cs=0x204;eip=0x0009c3; 	T(es = ax;);	// 1243                  mov     es, ax ;~ 0204:09C3
cs=0x204;eip=0x0009c5; 	T(di = bp+var_32);	// 1244                  lea     di, [bp+var_32] ;~ 0204:09C5
cs=0x204;eip=0x0009c8; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 1245                  mov     [bp+var_2], 0 ;~ 0204:09C8
cs=0x204;eip=0x0009cd; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 1246                  mov     [bp+var_4], 0 ;~ 0204:09CD
cs=0x204;eip=0x0009d2; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), 0));	// 1247                  mov     [bp+var_12], 0 ;~ 0204:09D2
cs=0x204;eip=0x0009d7; 	T(ax = 0x300;);	// 1248                  mov     ax, 300h ;~ 0204:09D7
cs=0x204;eip=0x0009da; 	T(bx = 0x21;);	// 1249                  mov     bx, 21h ; '!' ;~ 0204:09DA
cs=0x204;eip=0x0009dd; 	T(XOR(cx, cx));	// 1250                  xor     cx, cx ;~ 0204:09DD
cs=0x204;eip=0x0009df; 	X(PUSH(ax));	// 1251                  push    ax ;~ 0204:09DF
cs=0x204;eip=0x0009e0; 	X(PUSH(ax));	// 1252                  push    ax ;~ 0204:09E0
cs=0x204;eip=0x0009e1; 	X(PUSH(bx));	// 1253                  push    bx ;~ 0204:09E1
cs=0x204;eip=0x0009e2; 	X(PUSHF);	// 1254                  pushf ;~ 0204:09E2
cs=0x204;eip=0x0009e3; 	T(ax = 0x5100;);	// 1255                  mov     ax, 5100h ;~ 0204:09E3
cs=0x204;eip=0x0009e6; 	S(_INT(0x21));	// 1256                  int     21h             ; DOS - 2+ internal - GET PSP SEGMENT ;~ 0204:09E6
cs=0x204;eip=0x0009e8; 	T(ax = bx;);	// 1258                  mov     ax, bx ;~ 0204:09E8
cs=0x204;eip=0x0009ea; 	T(bx = sp;);	// 1259                  mov     bx, sp ;~ 0204:09EA
cs=0x204;eip=0x0009ec; 	X(MOV(*(dw*)(raddr(ss,bx+6)), ax));	// 1260                  mov     ss:[bx+6], ax ;~ 0204:09EC
cs=0x204;eip=0x0009f0; 	T(bx = word_2623b;);	// 1261                  mov     bx, word_2623B ;~ 0204:09F0
cs=0x204;eip=0x0009f4; 	T(ax = 0x5000;);	// 1262                  mov     ax, 5000h ;~ 0204:09F4
cs=0x204;eip=0x0009f7; 	S(_INT(0x21));	// 1263                  int     21h             ; DOS - 2+ internal - SET PSP SEGMENT ;~ 0204:09F7
cs=0x204;eip=0x0009f9; 	X(POPF);	// 1265                  popf ;~ 0204:09F9
cs=0x204;eip=0x0009fa; 	X(POP(bx));	// 1266                  pop     bx ;~ 0204:09FA
cs=0x204;eip=0x0009fb; 	X(POP(ax));	// 1267                  pop     ax ;~ 0204:09FB
cs=0x204;eip=0x0009fc; 	J(CALL(__dispatch_call,_unk_1f35f));	// 1268                  call    near ptr _unk_1F35F ;~ 0204:09FC
cs=0x204;eip=0x0009ff; 	X(PUSH(ax));	// 1269                  push    ax ;~ 0204:09FF
cs=0x204;eip=0x000a00; 	X(PUSH(bx));	// 1270                  push    bx ;~ 0204:0A00
cs=0x204;eip=0x000a01; 	X(PUSHF);	// 1271                  pushf ;~ 0204:0A01
cs=0x204;eip=0x000a02; 	T(bx = sp;);	// 1272                  mov     bx, sp ;~ 0204:0A02
cs=0x204;eip=0x000a04; 	T(MOV(bx, *(dw*)(raddr(ss,bx+6))));	// 1273                  mov     bx, ss:[bx+6] ;~ 0204:0A04
cs=0x204;eip=0x000a08; 	T(ax = 0x5000;);	// 1274                  mov     ax, 5000h ;~ 0204:0A08
cs=0x204;eip=0x000a0b; 	S(_INT(0x21));	// 1275                  int     21h             ; DOS - 2+ internal - SET PSP SEGMENT ;~ 0204:0A0B
cs=0x204;eip=0x000a0d; 	X(POPF);	// 1277                  popf ;~ 0204:0A0D
cs=0x204;eip=0x000a0e; 	X(POP(bx));	// 1278                  pop     bx ;~ 0204:0A0E
cs=0x204;eip=0x000a0f; 	X(POP(ax));	// 1279                  pop     ax ;~ 0204:0A0F
cs=0x204;eip=0x000a10; 	T(ADD(sp, 2));	// 1280                  add     sp, 2 ;~ 0204:0A10
cs=0x204;eip=0x000a13; 	J(JC(loc_1104b));	// 1281                  jb      short loc_1104B ;~ 0204:0A13
cs=0x204;eip=0x000a15; 	T(TEST(*(dw*)(raddr(ss,bp+var_12)), 1));	// 1282                  test    [bp+var_12], 1 ;~ 0204:0A15
cs=0x204;eip=0x000a1a; 	J(JNZ(loc_11041));	// 1283                  jnz     short loc_11041 ;~ 0204:0A1A
cs=0x204;eip=0x000a1c; 	T(ax = 0;);	// 1284                  mov     ax, 0 ;~ 0204:0A1C
cs=0x204;eip=0x000a1f; 	J(JMP(loc_11044));	// 1285                  jmp     short loc_11044 ;~ 0204:0A1F
loc_11041:
	// 4400 
cs=0x204;eip=0x000a21; 	T(ax = 1;);	// 1289                  mov     ax, 1 ;~ 0204:0A21
loc_11044:
	// 4401 
cs=0x204;eip=0x000a24; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_22))));	// 1293                  mov     bx, [bp+var_22] ;~ 0204:0A24
cs=0x204;eip=0x000a27; 	X(POP(di));	// 1294                  pop     di ;~ 0204:0A27
cs=0x204;eip=0x000a28; 	X(POP(es));	// 1295                  pop     es ;~ 0204:0A28
cs=0x204;eip=0x000a29; 	T(LEAVE);	// 1296                  leave ;~ 0204:0A29
cs=0x204;eip=0x000a2a; 	J(RETN(0));	// 1297                  retn ;~ 0204:0A2A
loc_1104b:
	// 4402 
cs=0x204;eip=0x000a2b; 	T(ax = 0x21;);	// 1301                  mov     ax, 21h ; '!' ;~ 0204:0A2B
cs=0x204;eip=0x000a2e; 	J(JMP(loc_11044));	// 1302                  jmp     short loc_11044 ;~ 0204:0A2E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_11041: 	goto loc_11041;
        case m2c::kloc_11044: 	goto loc_11044;
        case m2c::kloc_1104b: 	goto loc_1104b;
        case m2c::ksub_10fca: 	goto sub_10fca;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group2:
    _begin:
sub_11050:
	// 1310 
#undef var_2
#define var_2 -2
	// 1312 var_2           = byte ptr -2 ;~ 0204:0A30
cs=0x204;eip=0x000a30; 	X(ENTER(2, 0));	// 1314                  enter   2, 0 ;~ 0204:0A30
cs=0x204;eip=0x000a34; 	X(PUSH(es));	// 1315                  push    es ;~ 0204:0A34
cs=0x204;eip=0x000a35; 	X(PUSH(si));	// 1316                  push    si ;~ 0204:0A35
cs=0x204;eip=0x000a36; 	X(PUSH(di));	// 1317                  push    di ;~ 0204:0A36
loc_11057:
	// 4403 
cs=0x204;eip=0x000a37; 	T(MOV(cx, *(dw*)(raddr(ds,m2c::kloc_28a2f+1))));	// 1320                  mov     cx, word ptr loc_28A2F+1 ;~ 0204:0A37
cs=0x204;eip=0x000a3b; 	T(CMP(cx, *(dw*)(raddr(ds,m2c::kloc_28a27+1))));	// 1321                  cmp     cx, word ptr loc_28A27+1 ;~ 0204:0A3B
cs=0x204;eip=0x000a3f; 	J(JNC(loc_11066));	// 1322                  jnb     short loc_11066 ;~ 0204:0A3F
cs=0x204;eip=0x000a41; 	T(ax = 1;);	// 1323                  mov     ax, 1 ;~ 0204:0A41
cs=0x204;eip=0x000a44; 	J(JMP(loc_110ab));	// 1324                  jmp     short loc_110AB ;~ 0204:0A44
loc_11066:
	// 4404 
cs=0x204;eip=0x000a46; 	T(bx = cx;);	// 1328                  mov     bx, cx ;~ 0204:0A46
cs=0x204;eip=0x000a48; 	T(SHL(cx, 0x0A));	// 1329                  shl     cx, 0Ah ;~ 0204:0A48
cs=0x204;eip=0x000a4b; 	T(SHR(bx, 6));	// 1330                  shr     bx, 6 ;~ 0204:0A4B
cs=0x204;eip=0x000a4e; 	T(ax = 0x501;);	// 1331                  mov     ax, 501h ;~ 0204:0A4E
cs=0x204;eip=0x000a51; 	J(CALL(__dispatch_call,_unk_1f35f));	// 1332                  call    near ptr _unk_1F35F ;~ 0204:0A51
cs=0x204;eip=0x000a54; 	J(JNC(loc_11084));	// 1333                  jnb     short loc_11084 ;~ 0204:0A54
cs=0x204;eip=0x000a56; 	T(CMP(*(dw*)(raddr(ds,m2c::kloc_28a2f+1)), 0x40));	// 1334                  cmp     word ptr loc_28A2F+1, 40h ; '@' ;~ 0204:0A56
cs=0x204;eip=0x000a5b; 	J(JBE(loc_110ab));	// 1335                  jbe     short loc_110AB ;~ 0204:0A5B
cs=0x204;eip=0x000a5d; 	X(SUB(*(dw*)(raddr(ds,m2c::kloc_28a2f+1)), 0x40));	// 1336                  sub     word ptr loc_28A2F+1, 40h ; '@' ;~ 0204:0A5D
cs=0x204;eip=0x000a62; 	J(JMP(loc_11057));	// 1337                  jmp     short loc_11057 ;~ 0204:0A62
loc_11084:
	// 4405 
cs=0x204;eip=0x000a64; 	X(MOV(*(dw*)(raddr(ds,m2c::kloc_28a36)), di));	// 1341                  mov     word ptr loc_28A36, di ;~ 0204:0A64
cs=0x204;eip=0x000a68; 	X(MOV(*(dw*)(raddr(ds,m2c::kloc_28a36+2)), si));	// 1342                  mov     word ptr loc_28A36+2, si ;~ 0204:0A68
cs=0x204;eip=0x000a6c; 	T(MOV(ax, *(dw*)(raddr(ds,m2c::kloc_28a2f+1))));	// 1343                  mov     ax, word ptr loc_28A2F+1 ;~ 0204:0A6C
cs=0x204;eip=0x000a6f; 	X(ADD(*(dw*)(raddr(ds,m2c::kloc_28a33+1)), ax));	// 1344                  add     word ptr loc_28A33+1, ax ;~ 0204:0A6F
cs=0x204;eip=0x000a73; 	T(dx = ax;);	// 1345                  mov     dx, ax ;~ 0204:0A73
cs=0x204;eip=0x000a75; 	T(SHL(ax, 0x0A));	// 1346                  shl     ax, 0Ah ;~ 0204:0A75
cs=0x204;eip=0x000a78; 	T(SHR(dx, 6));	// 1347                  shr     dx, 6 ;~ 0204:0A78
cs=0x204;eip=0x000a7b; 	T(si = bp+var_2);	// 1348                  lea     si, [bp+var_2] ;~ 0204:0A7B
cs=0x204;eip=0x000a7e; 	X(PUSH(bx));	// 1349                  push    bx ;~ 0204:0A7E
cs=0x204;eip=0x000a7f; 	X(PUSH(cx));	// 1350                  push    cx ;~ 0204:0A7F
cs=0x204;eip=0x000a80; 	X(PUSH(dx));	// 1351                  push    dx ;~ 0204:0A80
cs=0x204;eip=0x000a81; 	X(PUSH(ax));	// 1352                  push    ax ;~ 0204:0A81
cs=0x204;eip=0x000a82; 	X(PUSH(0));	// 1353                  push    0 ;~ 0204:0A82
cs=0x204;eip=0x000a84; 	X(PUSH(ss));	// 1354                  push    ss ;~ 0204:0A84
cs=0x204;eip=0x000a85; 	X(PUSH(si));	// 1355                  push    si ;~ 0204:0A85
cs=0x204;eip=0x000a86; 	T(NOP);	// 1356                  nop ;~ 0204:0A86
cs=0x204;eip=0x000a87; 	X(PUSH(cs));	// 1357                  push    cs ;~ 0204:0A87
cs=0x204;eip=0x000a88; 	J(CALL(__dispatch_call,*((byte_18fb6)+0x22)));	// 1358                  call    near ptr byte_18FB6+22h ;~ 0204:0A88
loc_110ab:
	// 4406 
cs=0x204;eip=0x000a8b; 	X(POP(di));	// 1362                  pop     di ;~ 0204:0A8B
cs=0x204;eip=0x000a8c; 	X(POP(si));	// 1363                  pop     si ;~ 0204:0A8C
cs=0x204;eip=0x000a8d; 	X(POP(es));	// 1364                  pop     es ;~ 0204:0A8D
cs=0x204;eip=0x000a8e; 	T(LEAVE);	// 1365                  leave ;~ 0204:0A8E
cs=0x204;eip=0x000a8f; 	J(RETN(0));	// 1366                  retn ;~ 0204:0A8F
sub_111c6:
	// 1561 
#undef var_54
#define var_54 -0x54
	// 1563 var_54          = word ptr -54h ;~ 0204:0BA6
#undef var_52
#define var_52 -0x52
	// 1564 var_52          = word ptr -52h ;~ 0204:0BA6
cs=0x204;eip=0x000ba6; 	X(ENTER(0x54, 0));	// 1566                  enter   54h, 0 ;~ 0204:0BA6
cs=0x204;eip=0x000baa; 	X(PUSH(es));	// 1567                  push    es ;~ 0204:0BAA
cs=0x204;eip=0x000bab; 	T(ax = ss;);	// 1568                  mov     ax, ss ;~ 0204:0BAB
cs=0x204;eip=0x000bad; 	T(es = ax;);	// 1569                  mov     es, ax ;~ 0204:0BAD
cs=0x204;eip=0x000baf; 	T(di = bp+var_54);	// 1570                  lea     di, [bp+var_54] ;~ 0204:0BAF
cs=0x204;eip=0x000bb2; 	T(ax = 0x500;);	// 1571                  mov     ax, 500h ;~ 0204:0BB2
cs=0x204;eip=0x000bb5; 	J(CALL(__dispatch_call,_unk_1f35f));	// 1572                  call    near ptr _unk_1F35F ;~ 0204:0BB5
cs=0x204;eip=0x000bb8; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_52))));	// 1573                  mov     dx, [bp+var_52] ;~ 0204:0BB8
cs=0x204;eip=0x000bbb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_54))));	// 1574                  mov     ax, [bp+var_54] ;~ 0204:0BBB
cs=0x204;eip=0x000bbe; 	X(PUSH(dx));	// 1575                  push    dx ;~ 0204:0BBE
cs=0x204;eip=0x000bbf; 	X(PUSH(ax));	// 1576                  push    ax ;~ 0204:0BBF
cs=0x204;eip=0x000bc0; 	T(ax = 0x1600;);	// 1577                  mov     ax, 1600h ;~ 0204:0BC0
cs=0x204;eip=0x000bc3; 	S(_INT(0x2F));	// 1578                  int     2Fh             ; - Multiplex - MS WINDOWS - ENHANCED WINDOWS INSTALLATION CHECK ;~ 0204:0BC3
cs=0x204;eip=0x000bc5; 	T(TEST(al, 0x7F));	// 1582                  test    al, 7Fh ;~ 0204:0BC5
cs=0x204;eip=0x000bc7; 	X(POP(ax));	// 1583                  pop     ax ;~ 0204:0BC7
cs=0x204;eip=0x000bc8; 	X(POP(dx));	// 1584                  pop     dx ;~ 0204:0BC8
cs=0x204;eip=0x000bc9; 	J(JZ(loc_11254));	// 1585                  jz      short loc_11254 ;~ 0204:0BC9
cs=0x204;eip=0x000bcb; 	X(PUSH(es));	// 1586                  push    es ;~ 0204:0BCB
cs=0x204;eip=0x000bcc; 	T(SUB(sp, 0x38));	// 1587                  sub     sp, 38h ;~ 0204:0BCC
cs=0x204;eip=0x000bcf; 	T(di = sp;);	// 1588                  mov     di, sp ;~ 0204:0BCF
cs=0x204;eip=0x000bd1; 	X(PUSH(ss));	// 1589                  push    ss ;~ 0204:0BD1
cs=0x204;eip=0x000bd2; 	X(POP(es));	// 1590                  pop     es ;~ 0204:0BD2
cs=0x204;eip=0x000bd3; 	T(CLD);	// 1591                  cld ;~ 0204:0BD3
cs=0x204;eip=0x000bd4; 	T(cx = 0x38;);	// 1592                  mov     cx, 38h ; '8' ;~ 0204:0BD4
cs=0x204;eip=0x000bd7; 	T(XOR(al, al));	// 1593                  xor     al, al ;~ 0204:0BD7
	// 1594                  rep stosb ;~ 0204:0BD9
cs=0x204;eip=0x000bd9; 	X(	REP STOSB);	// 1594                  rep stosb ;~ 0204:0BD9
cs=0x204;eip=0x000bdb; 	T(di = sp;);	// 1595                  mov     di, sp ;~ 0204:0BDB
cs=0x204;eip=0x000bdd; 	X(MOV(*(dw*)(raddr(es,di+0x1C)), 0x4300));	// 1596                  mov     word ptr es:[di+1Ch], 4300h ;~ 0204:0BDD
cs=0x204;eip=0x000be3; 	T(ax = 0x300;);	// 1597                  mov     ax, 300h ;~ 0204:0BE3
cs=0x204;eip=0x000be6; 	T(bx = 0x2F;);	// 1598                  mov     bx, 2Fh ; '/' ;~ 0204:0BE6
cs=0x204;eip=0x000be9; 	T(XOR(cx, cx));	// 1599                  xor     cx, cx ;~ 0204:0BE9
cs=0x204;eip=0x000beb; 	S(_INT(0x31));	// 1600                  int     31h             ; DPMI Services   ax=func xxxxh ;~ 0204:0BEB
cs=0x204;eip=0x000bed; 	T(CMP(*(raddr(es,di+0x1C)), 0x80));	// 1607                  cmp     byte ptr es:[di+1Ch], 80h ;~ 0204:0BED
cs=0x204;eip=0x000bf2; 	J(JNZ(loc_11250));	// 1608                  jnz     short loc_11250 ;~ 0204:0BF2
cs=0x204;eip=0x000bf4; 	X(MOV(*(dw*)(raddr(es,di+0x1C)), 0x4310));	// 1609                  mov     word ptr es:[di+1Ch], 4310h ;~ 0204:0BF4
cs=0x204;eip=0x000bfa; 	T(ax = 0x300;);	// 1610                  mov     ax, 300h ;~ 0204:0BFA
cs=0x204;eip=0x000bfd; 	T(bx = 0x2F;);	// 1611                  mov     bx, 2Fh ; '/' ;~ 0204:0BFD
cs=0x204;eip=0x000c00; 	T(XOR(cx, cx));	// 1612                  xor     cx, cx ;~ 0204:0C00
cs=0x204;eip=0x000c02; 	S(_INT(0x31));	// 1613                  int     31h             ; DPMI Services   ax=func xxxxh ;~ 0204:0C02
cs=0x204;eip=0x000c04; 	T(bx = 0;);	// 1620                  mov     bx, 0 ;~ 0204:0C04
cs=0x204;eip=0x000c07; 	T(MOV(ax, *(dw*)(raddr(es,di+0x22))));	// 1621                  mov     ax, es:[di+22h] ;~ 0204:0C07
cs=0x204;eip=0x000c0b; 	X(MOV(*(dw*)(raddr(es,di+0x2C)), ax));	// 1622                  mov     es:[di+2Ch], ax ;~ 0204:0C0B
cs=0x204;eip=0x000c0f; 	T(MOV(ax, *(dw*)(raddr(es,di+0x10))));	// 1623                  mov     ax, es:[di+10h] ;~ 0204:0C0F
cs=0x204;eip=0x000c13; 	X(MOV(*(dw*)(raddr(es,di+0x2A)), ax));	// 1624                  mov     es:[di+2Ah], ax ;~ 0204:0C13
cs=0x204;eip=0x000c17; 	X(MOV(*(dw*)(raddr(es,di+0x1C)), 0x800));	// 1625                  mov     word ptr es:[di+1Ch], 800h ;~ 0204:0C17
cs=0x204;eip=0x000c1d; 	T(ax = 0x301;);	// 1626                  mov     ax, 301h ;~ 0204:0C1D
cs=0x204;eip=0x000c20; 	T(XOR(cx, cx));	// 1627                  xor     cx, cx ;~ 0204:0C20
cs=0x204;eip=0x000c22; 	S(_INT(0x31));	// 1628                  int     31h             ; DPMI Services   ax=func xxxxh ;~ 0204:0C22
cs=0x204;eip=0x000c24; 	T(MOV(ax, *(dw*)(raddr(es,di+0x14))));	// 1634                  mov     ax, es:[di+14h] ;~ 0204:0C24
cs=0x204;eip=0x000c28; 	T(dx = ax;);	// 1635                  mov     dx, ax ;~ 0204:0C28
cs=0x204;eip=0x000c2a; 	T(SHR(dx, 6));	// 1636                  shr     dx, 6 ;~ 0204:0C2A
cs=0x204;eip=0x000c2d; 	T(SHL(ax, 0x0A));	// 1637                  shl     ax, 0Ah ;~ 0204:0C2D
loc_11250:
	// 4426 
cs=0x204;eip=0x000c30; 	T(ADD(sp, 0x38));	// 1640                  add     sp, 38h ;~ 0204:0C30
cs=0x204;eip=0x000c33; 	X(POP(es));	// 1641                  pop     es ;~ 0204:0C33
loc_11254:
	// 4427 
cs=0x204;eip=0x000c34; 	T(TEST(dx, 0x0FC00));	// 1644                  test    dx, 0FC00h ;~ 0204:0C34
cs=0x204;eip=0x000c38; 	J(JNZ(loc_11264));	// 1645                  jnz     short loc_11264 ;~ 0204:0C38
cs=0x204;eip=0x000c3a; 	T(SHR(ax, 0x0A));	// 1646                  shr     ax, 0Ah ;~ 0204:0C3A
cs=0x204;eip=0x000c3d; 	T(SHL(dx, 6));	// 1647                  shl     dx, 6 ;~ 0204:0C3D
cs=0x204;eip=0x000c40; 	T(OR(ax, dx));	// 1648                  or      ax, dx ;~ 0204:0C40
cs=0x204;eip=0x000c42; 	J(JMP(loc_11267));	// 1649                  jmp     short loc_11267 ;~ 0204:0C42
loc_11264:
	// 4428 
cs=0x204;eip=0x000c44; 	T(ax = 0x0FFFF;);	// 1653                  mov     ax, 0FFFFh ;~ 0204:0C44
loc_11267:
	// 4429 
cs=0x204;eip=0x000c47; 	T(CMP(ax, *(dw*)(raddr(ds,m2c::kloc_28a2a))));	// 1656                  cmp     ax, word ptr loc_28A2A ;~ 0204:0C47
cs=0x204;eip=0x000c4b; 	J(JA(loc_11275));	// 1657                  ja      short loc_11275 ;~ 0204:0C4B
cs=0x204;eip=0x000c4d; 	X(MOV(*(dw*)(raddr(ds,m2c::kloc_28a25+1)), 0));	// 1658                  mov     word ptr loc_28A25+1, 0 ;~ 0204:0C4D
cs=0x204;eip=0x000c53; 	J(JMP(loc_11282));	// 1659                  jmp     short loc_11282 ;~ 0204:0C53
loc_11275:
	// 4430 
cs=0x204;eip=0x000c55; 	T(SUB(ax, *(dw*)(raddr(ds,m2c::kloc_28a2a))));	// 1663                  sub     ax, word ptr loc_28A2A ;~ 0204:0C55
cs=0x204;eip=0x000c59; 	T(CMP(ax, *(dw*)(raddr(ds,m2c::kloc_28a25+1))));	// 1664                  cmp     ax, word ptr loc_28A25+1 ;~ 0204:0C59
cs=0x204;eip=0x000c5d; 	J(JNC(loc_11282));	// 1665                  jnb     short loc_11282 ;~ 0204:0C5D
cs=0x204;eip=0x000c5f; 	X(MOV(*(dw*)(raddr(ds,m2c::kloc_28a25+1)), ax));	// 1666                  mov     word ptr loc_28A25+1, ax ;~ 0204:0C5F
loc_11282:
	// 4431 
cs=0x204;eip=0x000c62; 	X(POP(es));	// 1670                  pop     es ;~ 0204:0C62
cs=0x204;eip=0x000c63; 	T(LEAVE);	// 1671                  leave ;~ 0204:0C63
cs=0x204;eip=0x000c64; 	J(RETN(0));	// 1672                  retn ;~ 0204:0C64
sub_11285:
	// 1679 
cs=0x204;eip=0x000c65; 	X(PUSH(ax));	// 1680                  push    ax ;~ 0204:0C65
cs=0x204;eip=0x000c66; 	X(PUSH(bx));	// 1681                  push    bx ;~ 0204:0C66
cs=0x204;eip=0x000c67; 	X(PUSH(0x0FFFF));	// 1682                  push    0FFFFh ;~ 0204:0C67
cs=0x204;eip=0x000c69; 	J(CALL(__dispatch_call,byte_10ef4));	// 1683                  call    near ptr byte_10EF4 ;~ 0204:0C69
cs=0x204;eip=0x000c6c; 	T(ADD(sp, 2));	// 1684                  add     sp, 2 ;~ 0204:0C6C
cs=0x204;eip=0x000c6f; 	T(CMP(bx, *(dw*)(raddr(ds,m2c::kloc_28a23+1))));	// 1685                  cmp     bx, word ptr loc_28A23+1 ;~ 0204:0C6F
cs=0x204;eip=0x000c73; 	J(JA(loc_1129d));	// 1686                  ja      short loc_1129D ;~ 0204:0C73
cs=0x204;eip=0x000c75; 	X(MOV(*(dw*)(raddr(ds,m2c::kloc_28a20)), 0));	// 1687                  mov     word ptr loc_28A20, 0 ;~ 0204:0C75
cs=0x204;eip=0x000c7b; 	J(JMP(loc_112ab));	// 1688                  jmp     short loc_112AB ;~ 0204:0C7B
loc_1129d:
	// 4432 
cs=0x204;eip=0x000c7d; 	T(SUB(bx, *(dw*)(raddr(ds,m2c::kloc_28a23+1))));	// 1692                  sub     bx, word ptr loc_28A23+1 ;~ 0204:0C7D
cs=0x204;eip=0x000c81; 	T(CMP(bx, *(dw*)(raddr(ds,m2c::kloc_28a20))));	// 1693                  cmp     bx, word ptr loc_28A20 ;~ 0204:0C81
cs=0x204;eip=0x000c85; 	J(JNC(loc_112ab));	// 1694                  jnb     short loc_112AB ;~ 0204:0C85
cs=0x204;eip=0x000c87; 	X(MOV(*(dw*)(raddr(ds,m2c::kloc_28a20)), bx));	// 1695                  mov     word ptr loc_28A20, bx ;~ 0204:0C87
loc_112ab:
	// 4433 
cs=0x204;eip=0x000c8b; 	X(POP(bx));	// 1699                  pop     bx ;~ 0204:0C8B
cs=0x204;eip=0x000c8c; 	X(POP(ax));	// 1700                  pop     ax ;~ 0204:0C8C
cs=0x204;eip=0x000c8d; 	J(RETN(0));	// 1701                  retn ;~ 0204:0C8D
sub_112ae:
	// 1709 
#undef arg_0
#define arg_0 4
	// 1711 arg_0           = word ptr  4 ;~ 0204:0C8E
cs=0x204;eip=0x000c8e; 	X(ENTER(0, 0));	// 1713                  enter   0, 0 ;~ 0204:0C8E
cs=0x204;eip=0x000c92; 	X(PUSH(si));	// 1714                  push    si ;~ 0204:0C92
cs=0x204;eip=0x000c93; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 1715                  mov     si, [bp+arg_0] ;~ 0204:0C93
cs=0x204;eip=0x000c96; 	T(MOV(ax, *(dw*)(raddr(ds,m2c::kloc_28a2d+1))));	// 1716                  mov     ax, word ptr loc_28A2D+1 ;~ 0204:0C96
cs=0x204;eip=0x000c99; 	T(SUB(ax, *(dw*)(raddr(ds,m2c::kloc_28a31+1))));	// 1717                  sub     ax, word ptr loc_28A31+1 ;~ 0204:0C99
cs=0x204;eip=0x000c9d; 	X(PUSH(ax));	// 1718                  push    ax ;~ 0204:0C9D
cs=0x204;eip=0x000c9e; 	J(CALL(__dispatch_call,byte_10ef4));	// 1719                  call    near ptr byte_10EF4 ;~ 0204:0C9E
cs=0x204;eip=0x000ca1; 	T(ADD(sp, 2));	// 1720                  add     sp, 2 ;~ 0204:0CA1
cs=0x204;eip=0x000ca4; 	T(TEST(ax, ax));	// 1721                  test    ax, ax ;~ 0204:0CA4
cs=0x204;eip=0x000ca6; 	J(JZ(loc_112da));	// 1722                  jz      short loc_112DA ;~ 0204:0CA6
cs=0x204;eip=0x000ca8; 	T(AND(bx, 0x0FFC0));	// 1723                  and     bx, 0FFC0h ;~ 0204:0CA8
cs=0x204;eip=0x000cab; 	T(OR(bx, bx));	// 1724                  or      bx, bx ;~ 0204:0CAB
cs=0x204;eip=0x000cad; 	J(JZ(loc_112ea));	// 1725                  jz      short loc_112EA ;~ 0204:0CAD
cs=0x204;eip=0x000caf; 	X(PUSH(bx));	// 1726                  push    bx ;~ 0204:0CAF
cs=0x204;eip=0x000cb0; 	J(CALL(__dispatch_call,byte_10ef4));	// 1727                  call    near ptr byte_10EF4 ;~ 0204:0CB0
cs=0x204;eip=0x000cb3; 	T(ADD(sp, 2));	// 1728                  add     sp, 2 ;~ 0204:0CB3
cs=0x204;eip=0x000cb6; 	T(TEST(ax, ax));	// 1729                  test    ax, ax ;~ 0204:0CB6
cs=0x204;eip=0x000cb8; 	J(JNZ(loc_112ea));	// 1730                  jnz     short loc_112EA ;~ 0204:0CB8
loc_112da:
	// 4434 
cs=0x204;eip=0x000cba; 	X(MOV(*(dw*)(raddr(ds,si)), cx));	// 1733                  mov     [si], cx ;~ 0204:0CBA
cs=0x204;eip=0x000cbc; 	X(MOV(*(dw*)(raddr(ds,si+2)), bx));	// 1734                  mov     [si+2], bx ;~ 0204:0CBC
cs=0x204;eip=0x000cbf; 	X(ADD(*(dw*)(raddr(ds,m2c::kloc_28a31+1)), bx));	// 1735                  add     word ptr loc_28A31+1, bx ;~ 0204:0CBF
cs=0x204;eip=0x000cc3; 	X(PUSH(si));	// 1736                  push    si ;~ 0204:0CC3
cs=0x204;eip=0x000cc4; 	J(CALL(sub_11337,0));	// 1737                  call    sub_11337 ;~ 0204:0CC4
cs=0x204;eip=0x000cc7; 	T(ADD(sp, 2));	// 1738                  add     sp, 2 ;~ 0204:0CC7
loc_112ea:
	// 4435 
cs=0x204;eip=0x000cca; 	X(POP(si));	// 1742                  pop     si ;~ 0204:0CCA
cs=0x204;eip=0x000ccb; 	T(LEAVE);	// 1743                  leave ;~ 0204:0CCB
cs=0x204;eip=0x000ccc; 	J(RETN(0));	// 1744                  retn ;~ 0204:0CCC
sub_112ed:
	// 1752 
#undef arg_0
#define arg_0 4
	// 1754 arg_0           = word ptr  4 ;~ 0204:0CCD
cs=0x204;eip=0x000ccd; 	X(ENTER(0, 0));	// 1756                  enter   0, 0 ;~ 0204:0CCD
cs=0x204;eip=0x000cd1; 	X(PUSH(si));	// 1757                  push    si ;~ 0204:0CD1
cs=0x204;eip=0x000cd2; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 1758                  mov     si, [bp+arg_0] ;~ 0204:0CD2
cs=0x204;eip=0x000cd5; 	T(MOV(ax, *(dw*)(raddr(ds,m2c::kloc_28a2d+1))));	// 1759                  mov     ax, word ptr loc_28A2D+1 ;~ 0204:0CD5
cs=0x204;eip=0x000cd8; 	T(SUB(ax, *(dw*)(raddr(ds,m2c::kloc_28a31+1))));	// 1760                  sub     ax, word ptr loc_28A31+1 ;~ 0204:0CD8
cs=0x204;eip=0x000cdc; 	T(ADD(ax, *(dw*)(raddr(ds,si+2))));	// 1761                  add     ax, [si+2] ;~ 0204:0CDC
cs=0x204;eip=0x000cdf; 	X(PUSH(ax));	// 1762                  push    ax ;~ 0204:0CDF
cs=0x204;eip=0x000ce0; 	X(PUSH(*(dw*)(raddr(ds,si))));	// 1763                  push    word ptr [si] ;~ 0204:0CE0
cs=0x204;eip=0x000ce2; 	J(CALL(sub_10fca,0));	// 1764                  call    sub_10FCA ;~ 0204:0CE2
cs=0x204;eip=0x000ce5; 	T(ADD(sp, 4));	// 1765                  add     sp, 4 ;~ 0204:0CE5
cs=0x204;eip=0x000ce8; 	T(TEST(ax, ax));	// 1766                  test    ax, ax ;~ 0204:0CE8
cs=0x204;eip=0x000cea; 	J(JZ(loc_11321));	// 1767                  jz      short loc_11321 ;~ 0204:0CEA
cs=0x204;eip=0x000cec; 	T(AND(bx, 0x0FFC0));	// 1768                  and     bx, 0FFC0h ;~ 0204:0CEC
cs=0x204;eip=0x000cef; 	T(CMP(bx, *(dw*)(raddr(ds,si+2))));	// 1769                  cmp     bx, [si+2] ;~ 0204:0CEF
cs=0x204;eip=0x000cf2; 	J(JBE(loc_11334));	// 1770                  jbe     short loc_11334 ;~ 0204:0CF2
cs=0x204;eip=0x000cf4; 	X(PUSH(bx));	// 1771                  push    bx ;~ 0204:0CF4
cs=0x204;eip=0x000cf5; 	X(PUSH(*(dw*)(raddr(ds,si))));	// 1772                  push    word ptr [si] ;~ 0204:0CF5
cs=0x204;eip=0x000cf7; 	J(CALL(sub_10fca,0));	// 1773                  call    sub_10FCA ;~ 0204:0CF7
cs=0x204;eip=0x000cfa; 	T(ADD(sp, 4));	// 1774                  add     sp, 4 ;~ 0204:0CFA
cs=0x204;eip=0x000cfd; 	T(TEST(ax, ax));	// 1775                  test    ax, ax ;~ 0204:0CFD
cs=0x204;eip=0x000cff; 	J(JNZ(loc_11334));	// 1776                  jnz     short loc_11334 ;~ 0204:0CFF
loc_11321:
	// 4436 
cs=0x204;eip=0x000d01; 	T(MOV(cx, *(dw*)(raddr(ds,si+2))));	// 1779                  mov     cx, [si+2] ;~ 0204:0D01
cs=0x204;eip=0x000d04; 	X(MOV(*(dw*)(raddr(ds,si+2)), bx));	// 1780                  mov     [si+2], bx ;~ 0204:0D04
cs=0x204;eip=0x000d07; 	T(SUB(bx, cx));	// 1781                  sub     bx, cx ;~ 0204:0D07
cs=0x204;eip=0x000d09; 	X(ADD(*(dw*)(raddr(ds,m2c::kloc_28a31+1)), bx));	// 1782                  add     word ptr loc_28A31+1, bx ;~ 0204:0D09
cs=0x204;eip=0x000d0d; 	X(PUSH(si));	// 1783                  push    si ;~ 0204:0D0D
cs=0x204;eip=0x000d0e; 	J(CALL(sub_11337,0));	// 1784                  call    sub_11337 ;~ 0204:0D0E
cs=0x204;eip=0x000d11; 	T(ADD(sp, 2));	// 1785                  add     sp, 2 ;~ 0204:0D11
loc_11334:
	// 4437 
cs=0x204;eip=0x000d14; 	X(POP(si));	// 1789                  pop     si ;~ 0204:0D14
cs=0x204;eip=0x000d15; 	T(LEAVE);	// 1790                  leave ;~ 0204:0D15
cs=0x204;eip=0x000d16; 	J(RETN(0));	// 1791                  retn ;~ 0204:0D16
sub_11337:
	// 1799 
#undef var_4
#define var_4 -4
	// 1802 var_4           = byte ptr -4 ;~ 0204:0D17
#undef arg_0
#define arg_0 4
	// 1803 arg_0           = word ptr  4 ;~ 0204:0D17
cs=0x204;eip=0x000d17; 	X(ENTER(4, 0));	// 1805                  enter   4, 0 ;~ 0204:0D17
cs=0x204;eip=0x000d1b; 	X(PUSH(es));	// 1806                  push    es ;~ 0204:0D1B
cs=0x204;eip=0x000d1c; 	X(PUSH(si));	// 1807                  push    si ;~ 0204:0D1C
cs=0x204;eip=0x000d1d; 	X(PUSH(di));	// 1808                  push    di ;~ 0204:0D1D
cs=0x204;eip=0x000d1e; 	X(PUSH(bx));	// 1809                  push    bx ;~ 0204:0D1E
cs=0x204;eip=0x000d1f; 	X(PUSH(cx));	// 1810                  push    cx ;~ 0204:0D1F
cs=0x204;eip=0x000d20; 	X(PUSH(dx));	// 1811                  push    dx ;~ 0204:0D20
cs=0x204;eip=0x000d21; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 1812                  mov     si, [bp+arg_0] ;~ 0204:0D21
cs=0x204;eip=0x000d24; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 1813                  mov     ax, [si] ;~ 0204:0D24
cs=0x204;eip=0x000d26; 	T(dx = ax;);	// 1814                  mov     dx, ax ;~ 0204:0D26
cs=0x204;eip=0x000d28; 	T(SHL(ax, 4));	// 1815                  shl     ax, 4 ;~ 0204:0D28
cs=0x204;eip=0x000d2b; 	T(SHR(dx, 0x0C));	// 1816                  shr     dx, 0Ch ;~ 0204:0D2B
cs=0x204;eip=0x000d2e; 	T(MOV(bx, *(dw*)(raddr(ds,si+2))));	// 1817                  mov     bx, [si+2] ;~ 0204:0D2E
cs=0x204;eip=0x000d31; 	T(cx = bx;);	// 1818                  mov     cx, bx ;~ 0204:0D31
cs=0x204;eip=0x000d33; 	T(SHL(bx, 4));	// 1819                  shl     bx, 4 ;~ 0204:0D33
cs=0x204;eip=0x000d36; 	T(SHR(cx, 0x0C));	// 1820                  shr     cx, 0Ch ;~ 0204:0D36
cs=0x204;eip=0x000d39; 	T(CMP(*(dw*)(raddr(ds,si+4)), 0));	// 1821                  cmp     word ptr [si+4], 0 ;~ 0204:0D39
cs=0x204;eip=0x000d3d; 	J(JZ(loc_11373));	// 1822                  jz      short loc_11373 ;~ 0204:0D3D
cs=0x204;eip=0x000d3f; 	T(di = bp+var_4);	// 1823                  lea     di, [bp+var_4] ;~ 0204:0D3F
cs=0x204;eip=0x000d42; 	X(PUSH(*(dw*)(raddr(ds,m2c::kloc_28a2a+2))));	// 1824                  push    word ptr loc_28A2A+2 ;~ 0204:0D42
cs=0x204;eip=0x000d46; 	X(PUSH(dx));	// 1825                  push    dx ;~ 0204:0D46
cs=0x204;eip=0x000d47; 	X(PUSH(ax));	// 1826                  push    ax ;~ 0204:0D47
cs=0x204;eip=0x000d48; 	X(PUSH(cx));	// 1827                  push    cx ;~ 0204:0D48
cs=0x204;eip=0x000d49; 	X(PUSH(bx));	// 1828                  push    bx ;~ 0204:0D49
cs=0x204;eip=0x000d4a; 	X(PUSH(ss));	// 1829                  push    ss ;~ 0204:0D4A
cs=0x204;eip=0x000d4b; 	X(PUSH(di));	// 1830                  push    di ;~ 0204:0D4B
cs=0x204;eip=0x000d4c; 	T(NOP);	// 1831                  nop ;~ 0204:0D4C
cs=0x204;eip=0x000d4d; 	X(PUSH(cs));	// 1832                  push    cs ;~ 0204:0D4D
cs=0x204;eip=0x000d4e; 	J(CALL(__dispatch_call,*((byte_18fb6)+0x3D7)));	// 1833                  call    near ptr byte_18FB6+3D7h ;~ 0204:0D4E
cs=0x204;eip=0x000d51; 	J(JMP(loc_11380));	// 1834                  jmp     short loc_11380 ;~ 0204:0D51
loc_11373:
	// 4438 
cs=0x204;eip=0x000d53; 	X(PUSH(*(dw*)(raddr(ds,m2c::kloc_28a2a+2))));	// 1838                  push    word ptr loc_28A2A+2 ;~ 0204:0D53
cs=0x204;eip=0x000d57; 	X(PUSH(dx));	// 1839                  push    dx ;~ 0204:0D57
cs=0x204;eip=0x000d58; 	X(PUSH(ax));	// 1840                  push    ax ;~ 0204:0D58
cs=0x204;eip=0x000d59; 	X(PUSH(cx));	// 1841                  push    cx ;~ 0204:0D59
cs=0x204;eip=0x000d5a; 	X(PUSH(bx));	// 1842                  push    bx ;~ 0204:0D5A
cs=0x204;eip=0x000d5b; 	T(NOP);	// 1843                  nop ;~ 0204:0D5B
cs=0x204;eip=0x000d5c; 	X(PUSH(cs));	// 1844                  push    cs ;~ 0204:0D5C
cs=0x204;eip=0x000d5d; 	J(CALL(__dispatch_call,*((byte_18fb6)+0x374)));	// 1845                  call    near ptr byte_18FB6+374h ;~ 0204:0D5D
loc_11380:
	// 4439 
cs=0x204;eip=0x000d60; 	T(MOV(ax, *(dw*)(raddr(ds,si+2))));	// 1848                  mov     ax, [si+2] ;~ 0204:0D60
cs=0x204;eip=0x000d63; 	X(MOV(*(dw*)(raddr(ds,si+4)), ax));	// 1849                  mov     [si+4], ax ;~ 0204:0D63
cs=0x204;eip=0x000d66; 	X(POP(dx));	// 1850                  pop     dx ;~ 0204:0D66
cs=0x204;eip=0x000d67; 	X(POP(cx));	// 1851                  pop     cx ;~ 0204:0D67
cs=0x204;eip=0x000d68; 	X(POP(bx));	// 1852                  pop     bx ;~ 0204:0D68
cs=0x204;eip=0x000d69; 	X(POP(di));	// 1853                  pop     di ;~ 0204:0D69
cs=0x204;eip=0x000d6a; 	X(POP(si));	// 1854                  pop     si ;~ 0204:0D6A
cs=0x204;eip=0x000d6b; 	X(POP(es));	// 1855                  pop     es ;~ 0204:0D6B
cs=0x204;eip=0x000d6c; 	T(LEAVE);	// 1856                  leave ;~ 0204:0D6C
cs=0x204;eip=0x000d6d; 	J(RETN(0));	// 1857                  retn ;~ 0204:0D6D
seg001_d6e_proc:
	// 1861 
cs=0x204;eip=0x000d6e; 	X(PUSH(ds));	// 1861                  push    ds ;~ 0204:0D6E
cs=0x204;eip=0x000d6f; 	X(POP(ax));	// 1862                  pop     ax ;~ 0204:0D6F
cs=0x204;eip=0x000d70; 	T(NOP);	// 1863                  nop ;~ 0204:0D70
cs=0x204;eip=0x000d71; 	T(INC(bp));	// 1864                  inc     bp ;~ 0204:0D71
cs=0x204;eip=0x000d72; 	X(PUSH(bp));	// 1865                  push    bp ;~ 0204:0D72
cs=0x204;eip=0x000d73; 	T(bp = sp;);	// 1866                  mov     bp, sp ;~ 0204:0D73
cs=0x204;eip=0x000d75; 	X(PUSH(ds));	// 1867                  push    ds ;~ 0204:0D75
cs=0x204;eip=0x000d76; 	T(ds = ax;);	// 1868                  mov     ds, ax ;~ 0204:0D76
cs=0x204;eip=0x000d78; 	X(PUSH(si));	// 1869                  push    si ;~ 0204:0D78
cs=0x204;eip=0x000d79; 	X(PUSH(di));	// 1870                  push    di ;~ 0204:0D79
cs=0x204;eip=0x000d7a; 	X(PUSH(bx));	// 1871                  push    bx ;~ 0204:0D7A
cs=0x204;eip=0x000d7b; 	X(PUSH(cx));	// 1872                  push    cx ;~ 0204:0D7B
cs=0x204;eip=0x000d7c; 	X(PUSH(dx));	// 1873                  push    dx ;~ 0204:0D7C
cs=0x204;eip=0x000d7d; 	T(MOV(si, *(dw*)(raddr(ds,m2c::kloc_28a2d+1))));	// 1874                  mov     si, word ptr loc_28A2D+1 ;~ 0204:0D7D
cs=0x204;eip=0x000d81; 	T(CMP(si, *(dw*)(raddr(ds,m2c::kloc_28a31+1))));	// 1875                  cmp     si, word ptr loc_28A31+1 ;~ 0204:0D81
cs=0x204;eip=0x000d85; 	J(JBE(loc_113ed));	// 1876                  jbe     short loc_113ED ;~ 0204:0D85
cs=0x204;eip=0x000d87; 	T(SUB(si, *(dw*)(raddr(ds,m2c::kloc_28a31+1))));	// 1877                  sub     si, word ptr loc_28A31+1 ;~ 0204:0D87
cs=0x204;eip=0x000d8b; 	T(di = 0x280A;);	// 1878                  mov     di, 280Ah ;~ 0204:0D8B
cs=0x204;eip=0x000d8e; 	T(dx = 0x0A;);	// 1879                  mov     dx, 0Ah ;~ 0204:0D8E
loc_113b1:
	// 4440 
cs=0x204;eip=0x000d91; 	T(MOV(ax, *(dw*)(raddr(ds,m2c::kloc_28a2d+1))));	// 1882                  mov     ax, word ptr loc_28A2D+1 ;~ 0204:0D91
cs=0x204;eip=0x000d94; 	T(CMP(ax, *(dw*)(raddr(ds,m2c::kloc_28a31+1))));	// 1883                  cmp     ax, word ptr loc_28A31+1 ;~ 0204:0D94
cs=0x204;eip=0x000d98; 	J(JBE(loc_113ed));	// 1884                  jbe     short loc_113ED ;~ 0204:0D98
cs=0x204;eip=0x000d9a; 	T(CMP(*(dw*)(raddr(ds,di)), 0));	// 1885                  cmp     word ptr [di], 0 ;~ 0204:0D9A
cs=0x204;eip=0x000d9d; 	J(JZ(loc_113c6));	// 1886                  jz      short loc_113C6 ;~ 0204:0D9D
cs=0x204;eip=0x000d9f; 	X(PUSH(di));	// 1887                  push    di ;~ 0204:0D9F
cs=0x204;eip=0x000da0; 	J(CALL(sub_112ed,0));	// 1888                  call    sub_112ED ;~ 0204:0DA0
cs=0x204;eip=0x000da3; 	T(ADD(sp, 2));	// 1889                  add     sp, 2 ;~ 0204:0DA3
loc_113c6:
	// 4441 
cs=0x204;eip=0x000da6; 	T(ADD(di, 6));	// 1892                  add     di, 6 ;~ 0204:0DA6
cs=0x204;eip=0x000da9; 	T(DEC(dx));	// 1893                  dec     dx ;~ 0204:0DA9
cs=0x204;eip=0x000daa; 	J(JNZ(loc_113b1));	// 1894                  jnz     short loc_113B1 ;~ 0204:0DAA
cs=0x204;eip=0x000dac; 	T(di = 0x280A;);	// 1895                  mov     di, 280Ah ;~ 0204:0DAC
cs=0x204;eip=0x000daf; 	T(dx = 0x0A;);	// 1896                  mov     dx, 0Ah ;~ 0204:0DAF
loc_113d2:
	// 4442 
cs=0x204;eip=0x000db2; 	T(MOV(ax, *(dw*)(raddr(ds,m2c::kloc_28a2d+1))));	// 1899                  mov     ax, word ptr loc_28A2D+1 ;~ 0204:0DB2
cs=0x204;eip=0x000db5; 	T(CMP(ax, *(dw*)(raddr(ds,m2c::kloc_28a31+1))));	// 1900                  cmp     ax, word ptr loc_28A31+1 ;~ 0204:0DB5
cs=0x204;eip=0x000db9; 	J(JBE(loc_113ed));	// 1901                  jbe     short loc_113ED ;~ 0204:0DB9
cs=0x204;eip=0x000dbb; 	T(CMP(*(dw*)(raddr(ds,di)), 0));	// 1902                  cmp     word ptr [di], 0 ;~ 0204:0DBB
cs=0x204;eip=0x000dbe; 	J(JNZ(loc_113e7));	// 1903                  jnz     short loc_113E7 ;~ 0204:0DBE
cs=0x204;eip=0x000dc0; 	X(PUSH(di));	// 1904                  push    di ;~ 0204:0DC0
cs=0x204;eip=0x000dc1; 	J(CALL(sub_112ae,0));	// 1905                  call    sub_112AE ;~ 0204:0DC1
cs=0x204;eip=0x000dc4; 	T(ADD(sp, 2));	// 1906                  add     sp, 2 ;~ 0204:0DC4
loc_113e7:
	// 4443 
cs=0x204;eip=0x000dc7; 	T(ADD(di, 6));	// 1909                  add     di, 6 ;~ 0204:0DC7
cs=0x204;eip=0x000dca; 	T(DEC(dx));	// 1910                  dec     dx ;~ 0204:0DCA
cs=0x204;eip=0x000dcb; 	J(JNZ(loc_113d2));	// 1911                  jnz     short loc_113D2 ;~ 0204:0DCB
loc_113ed:
	// 4444 
cs=0x204;eip=0x000dcd; 	T(XOR(ax, ax));	// 1915                  xor     ax, ax ;~ 0204:0DCD
cs=0x204;eip=0x000dcf; 	X(POP(dx));	// 1916                  pop     dx ;~ 0204:0DCF
cs=0x204;eip=0x000dd0; 	X(POP(cx));	// 1917                  pop     cx ;~ 0204:0DD0
cs=0x204;eip=0x000dd1; 	X(POP(bx));	// 1918                  pop     bx ;~ 0204:0DD1
cs=0x204;eip=0x000dd2; 	X(POP(di));	// 1919                  pop     di ;~ 0204:0DD2
cs=0x204;eip=0x000dd3; 	X(POP(si));	// 1920                  pop     si ;~ 0204:0DD3
cs=0x204;eip=0x000dd4; 	X(POP(ds));	// 1921                  pop     ds ;~ 0204:0DD4
cs=0x204;eip=0x000dd5; 	X(POP(bp));	// 1922                  pop     bp ;~ 0204:0DD5
cs=0x204;eip=0x000dd6; 	T(DEC(bp));	// 1923                  dec     bp ;~ 0204:0DD6
cs=0x204;eip=0x000dd7; 	J(RETF(0));	// 1924                  retf ;~ 0204:0DD7
ret_204_dd8:
	// 4445 
cs=0x204;eip=0x000dd8; 	X(PUSH(ds));	// 1926                  push    ds ;~ 0204:0DD8
cs=0x204;eip=0x000dd9; 	X(POP(ax));	// 1927                  pop     ax ;~ 0204:0DD9
cs=0x204;eip=0x000dda; 	T(NOP);	// 1928                  nop ;~ 0204:0DDA
cs=0x204;eip=0x000ddb; 	T(INC(bp));	// 1929                  inc     bp ;~ 0204:0DDB
cs=0x204;eip=0x000ddc; 	X(PUSH(bp));	// 1930                  push    bp ;~ 0204:0DDC
cs=0x204;eip=0x000ddd; 	T(bp = sp;);	// 1931                  mov     bp, sp ;~ 0204:0DDD
cs=0x204;eip=0x000ddf; 	X(PUSH(ds));	// 1932                  push    ds ;~ 0204:0DDF
cs=0x204;eip=0x000de0; 	T(ds = ax;);	// 1933                  mov     ds, ax ;~ 0204:0DE0
cs=0x204;eip=0x000de2; 	T(SUB(sp, 8));	// 1934                  sub     sp, 8 ;~ 0204:0DE2
cs=0x204;eip=0x000de5; 	X(PUSH(es));	// 1935                  push    es ;~ 0204:0DE5
cs=0x204;eip=0x000de6; 	X(PUSH(di));	// 1936                  push    di ;~ 0204:0DE6
cs=0x204;eip=0x000de7; 	X(PUSH(cx));	// 1937                  push    cx ;~ 0204:0DE7
cs=0x204;eip=0x000de8; 	T(di = 0x2840;);	// 1938                  mov     di, 2840h ;~ 0204:0DE8
cs=0x204;eip=0x000deb; 	T(cx = 0x0A;);	// 1939                  mov     cx, 0Ah ;~ 0204:0DEB
loc_1140e:
	// 4446 
cs=0x204;eip=0x000dee; 	X(PUSH(cx));	// 1942                  push    cx ;~ 0204:0DEE
cs=0x204;eip=0x000def; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 1943                  mov     ax, [di] ;~ 0204:0DEF
cs=0x204;eip=0x000df1; 	T(TEST(ax, ax));	// 1944                  test    ax, ax ;~ 0204:0DF1
cs=0x204;eip=0x000df3; 	J(JZ(loc_1148b));	// 1945                  jz      short loc_1148B ;~ 0204:0DF3
cs=0x204;eip=0x000df5; 	T(dx = ax;);	// 1946                  mov     dx, ax ;~ 0204:0DF5
cs=0x204;eip=0x000df7; 	T(SHL(ax, 4));	// 1947                  shl     ax, 4 ;~ 0204:0DF7
cs=0x204;eip=0x000dfa; 	T(SHR(dx, 0x0C));	// 1948                  shr     dx, 0Ch ;~ 0204:0DFA
cs=0x204;eip=0x000dfd; 	X(MOV(*(dw*)(raddr(ss,bp-4)), dx));	// 1949                  mov     [bp-4], dx ;~ 0204:0DFD
cs=0x204;eip=0x000e00; 	X(MOV(*(dw*)(raddr(ss,bp-6)), ax));	// 1950                  mov     [bp-6], ax ;~ 0204:0E00
cs=0x204;eip=0x000e03; 	T(bx = bp-0x0A);	// 1951                  lea     bx, [bp-0Ah] ;~ 0204:0E03
cs=0x204;eip=0x000e06; 	X(PUSH(*(dw*)(raddr(ds,m2c::kloc_28a2a+2))));	// 1952                  push    word ptr loc_28A2A+2 ;~ 0204:0E06
cs=0x204;eip=0x000e0a; 	X(PUSH(*(dw*)(raddr(ss,bp-4))));	// 1953                  push    word ptr [bp-4] ;~ 0204:0E0A
cs=0x204;eip=0x000e0d; 	X(PUSH(*(dw*)(raddr(ss,bp-6))));	// 1954                  push    word ptr [bp-6] ;~ 0204:0E0D
cs=0x204;eip=0x000e10; 	X(PUSH(0));	// 1955                  push    0 ;~ 0204:0E10
cs=0x204;eip=0x000e12; 	X(PUSH(0));	// 1956                  push    0 ;~ 0204:0E12
cs=0x204;eip=0x000e14; 	X(PUSH(ss));	// 1957                  push    ss ;~ 0204:0E14
cs=0x204;eip=0x000e15; 	X(PUSH(bx));	// 1958                  push    bx ;~ 0204:0E15
cs=0x204;eip=0x000e16; 	T(NOP);	// 1959                  nop ;~ 0204:0E16
cs=0x204;eip=0x000e17; 	X(PUSH(cs));	// 1960                  push    cs ;~ 0204:0E17
cs=0x204;eip=0x000e18; 	J(CALL(__dispatch_call,*((byte_18fb6)+0x3D7)));	// 1961                  call    near ptr byte_18FB6+3D7h ;~ 0204:0E18
cs=0x204;eip=0x000e1b; 	T(MOV(cx, *(dw*)(raddr(ss,bp-0x0A))));	// 1962                  mov     cx, [bp-0Ah] ;~ 0204:0E1B
cs=0x204;eip=0x000e1e; 	T(MOV(bx, *(dw*)(raddr(ss,bp-8))));	// 1963                  mov     bx, [bp-8] ;~ 0204:0E1E
cs=0x204;eip=0x000e21; 	T(SHR(cx, 4));	// 1964                  shr     cx, 4 ;~ 0204:0E21
cs=0x204;eip=0x000e24; 	T(SHL(bx, 0x0C));	// 1965                  shl     bx, 0Ch ;~ 0204:0E24
cs=0x204;eip=0x000e27; 	T(OR(cx, bx));	// 1966                  or      cx, bx ;~ 0204:0E27
cs=0x204;eip=0x000e29; 	T(MOV(bx, *(dw*)(raddr(ds,di+2))));	// 1967                  mov     bx, [di+2] ;~ 0204:0E29
cs=0x204;eip=0x000e2c; 	T(SUB(bx, cx));	// 1968                  sub     bx, cx ;~ 0204:0E2C
cs=0x204;eip=0x000e2e; 	X(SUB(*(dw*)(raddr(ds,m2c::kloc_28a31+1)), bx));	// 1969                  sub     word ptr loc_28A31+1, bx ;~ 0204:0E2E
cs=0x204;eip=0x000e32; 	T(TEST(cx, cx));	// 1970                  test    cx, cx ;~ 0204:0E32
cs=0x204;eip=0x000e34; 	J(JZ(loc_11466));	// 1971                  jz      short loc_11466 ;~ 0204:0E34
cs=0x204;eip=0x000e36; 	X(PUSH(cx));	// 1972                  push    cx ;~ 0204:0E36
cs=0x204;eip=0x000e37; 	X(PUSH(cx));	// 1973                  push    cx ;~ 0204:0E37
cs=0x204;eip=0x000e38; 	X(PUSH(*(dw*)(raddr(ds,di))));	// 1974                  push    word ptr [di] ;~ 0204:0E38
cs=0x204;eip=0x000e3a; 	J(CALL(sub_10fca,0));	// 1975                  call    sub_10FCA ;~ 0204:0E3A
cs=0x204;eip=0x000e3d; 	T(ADD(sp, 4));	// 1976                  add     sp, 4 ;~ 0204:0E3D
cs=0x204;eip=0x000e40; 	X(POP(cx));	// 1977                  pop     cx ;~ 0204:0E40
cs=0x204;eip=0x000e41; 	X(MOV(*(dw*)(raddr(ds,di+2)), cx));	// 1978                  mov     [di+2], cx ;~ 0204:0E41
cs=0x204;eip=0x000e44; 	J(JMP(loc_1148b));	// 1979                  jmp     short loc_1148B ;~ 0204:0E44
loc_11466:
	// 4447 
cs=0x204;eip=0x000e46; 	X(PUSH(*(dw*)(raddr(ds,di))));	// 1983                  push    word ptr [di] ;~ 0204:0E46
cs=0x204;eip=0x000e48; 	J(CALL(sub_10f7a,0));	// 1984                  call    sub_10F7A ;~ 0204:0E48
cs=0x204;eip=0x000e4b; 	T(ADD(sp, 2));	// 1985                  add     sp, 2 ;~ 0204:0E4B
cs=0x204;eip=0x000e4e; 	X(PUSH(*(dw*)(raddr(ds,m2c::kloc_28a2a+2))));	// 1986                  push    word ptr loc_28A2A+2 ;~ 0204:0E4E
cs=0x204;eip=0x000e52; 	X(PUSH(*(dw*)(raddr(ss,bp-4))));	// 1987                  push    word ptr [bp-4] ;~ 0204:0E52
cs=0x204;eip=0x000e55; 	X(PUSH(*(dw*)(raddr(ss,bp-6))));	// 1988                  push    word ptr [bp-6] ;~ 0204:0E55
cs=0x204;eip=0x000e58; 	T(NOP);	// 1989                  nop ;~ 0204:0E58
cs=0x204;eip=0x000e59; 	X(PUSH(cs));	// 1990                  push    cs ;~ 0204:0E59
cs=0x204;eip=0x000e5a; 	J(CALL(__dispatch_call,*((byte_18fb6)+0x519)));	// 1991                  call    near ptr byte_18FB6+519h ;~ 0204:0E5A
cs=0x204;eip=0x000e5d; 	X(MOV(*(dw*)(raddr(ds,di)), 0));	// 1992                  mov     word ptr [di], 0 ;~ 0204:0E5D
cs=0x204;eip=0x000e61; 	X(MOV(*(dw*)(raddr(ds,di+2)), 0));	// 1993                  mov     word ptr [di+2], 0 ;~ 0204:0E61
cs=0x204;eip=0x000e66; 	X(MOV(*(dw*)(raddr(ds,di+4)), 0));	// 1994                  mov     word ptr [di+4], 0 ;~ 0204:0E66
loc_1148b:
	// 4448 
cs=0x204;eip=0x000e6b; 	T(SUB(di, 6));	// 1998                  sub     di, 6 ;~ 0204:0E6B
cs=0x204;eip=0x000e6e; 	X(POP(cx));	// 1999                  pop     cx ;~ 0204:0E6E
cs=0x204;eip=0x000e6f; 	J(LOOP(loc_11493));	// 2000                  loop    loc_11493 ;~ 0204:0E6F
cs=0x204;eip=0x000e71; 	J(JMP(loc_11496));	// 2001                  jmp     short loc_11496 ;~ 0204:0E71
loc_11493:
	// 4449 
cs=0x204;eip=0x000e73; 	J(JMP(loc_1140e));	// 2005                  jmp     loc_1140E ;~ 0204:0E73
loc_11496:
	// 4450 
cs=0x204;eip=0x000e76; 	X(POP(cx));	// 2009                  pop     cx ;~ 0204:0E76
cs=0x204;eip=0x000e77; 	X(POP(di));	// 2010                  pop     di ;~ 0204:0E77
cs=0x204;eip=0x000e78; 	X(POP(es));	// 2011                  pop     es ;~ 0204:0E78
cs=0x204;eip=0x000e79; 	T(SUB(bp, 2));	// 2012                  sub     bp, 2 ;~ 0204:0E79
cs=0x204;eip=0x000e7c; 	T(sp = bp;);	// 2013                  mov     sp, bp ;~ 0204:0E7C
cs=0x204;eip=0x000e7e; 	X(POP(ds));	// 2014                  pop     ds ;~ 0204:0E7E
cs=0x204;eip=0x000e7f; 	X(POP(bp));	// 2015                  pop     bp ;~ 0204:0E7F
cs=0x204;eip=0x000e80; 	T(DEC(bp));	// 2016                  dec     bp ;~ 0204:0E80
cs=0x204;eip=0x000e81; 	J(RETF(0));	// 2017                  retf ;~ 0204:0E81
sub_114a2:
	// 2022 
cs=0x204;eip=0x000e82; 	X(PUSH(es));	// 2023                  push    es ;~ 0204:0E82
cs=0x204;eip=0x000e83; 	J(CALL(sub_11285,0));	// 2024                  call    sub_11285 ;~ 0204:0E83
cs=0x204;eip=0x000e86; 	T(MOV(ax, *(dw*)(raddr(ds,m2c::kloc_28a20))));	// 2025                  mov     ax, word ptr loc_28A20 ;~ 0204:0E86
cs=0x204;eip=0x000e89; 	T(CMP(ax, *(dw*)(raddr(ds,m2c::kloc_28a20+2))));	// 2026                  cmp     ax, word ptr loc_28A20+2 ;~ 0204:0E89
cs=0x204;eip=0x000e8d; 	J(JC(loc_114d9));	// 2027                  jb      short loc_114D9 ;~ 0204:0E8D
cs=0x204;eip=0x000e8f; 	X(MOV(*(dw*)(raddr(ds,m2c::kloc_28a2d+1)), ax));	// 2028                  mov     word ptr loc_28A2D+1, ax ;~ 0204:0E8F
cs=0x204;eip=0x000e92; 	X(PUSH(0));	// 2029                  push    0 ;~ 0204:0E92
cs=0x204;eip=0x000e94; 	X(PUSH(0));	// 2030                  push    0 ;~ 0204:0E94
cs=0x204;eip=0x000e96; 	X(PUSH(0));	// 2031                  push    0 ;~ 0204:0E96
cs=0x204;eip=0x000e98; 	X(PUSH(0));	// 2032                  push    0 ;~ 0204:0E98
cs=0x204;eip=0x000e9a; 	X(PUSH(0));	// 2033                  push    0 ;~ 0204:0E9A
cs=0x204;eip=0x000e9c; 	X(PUSH(ds));	// 2034                  push    ds ;~ 0204:0E9C
cs=0x204;eip=0x000e9d; 	X(PUSH(m2c::kloc_28a2a+2));	// 2035                  push    (offset loc_28A2A+2) ;~ 0204:0E9D
cs=0x204;eip=0x000ea0; 	T(NOP);	// 2036                  nop ;~ 0204:0EA0
cs=0x204;eip=0x000ea1; 	X(PUSH(cs));	// 2037                  push    cs ;~ 0204:0EA1
cs=0x204;eip=0x000ea2; 	J(CALL(__dispatch_call,*((byte_18fb6)+0x22)));	// 2038                  call    near ptr byte_18FB6+22h ;~ 0204:0EA2
cs=0x204;eip=0x000ea5; 	T(CMP(ax, 0));	// 2039                  cmp     ax, 0 ;~ 0204:0EA5
cs=0x204;eip=0x000ea8; 	J(JNZ(loc_114d7));	// 2040                  jnz     short loc_114D7 ;~ 0204:0EA8
cs=0x204;eip=0x000eaa; 	X(PUSH(*(dw*)(raddr(ds,m2c::kloc_28a2a+2))));	// 2041                  push    word ptr loc_28A2A+2 ;~ 0204:0EAA
cs=0x204;eip=0x000eae; 	X(PUSH(0));	// 2042                  push    0 ;~ 0204:0EAE
cs=0x204;eip=0x000eb0; 	X(PUSH(0));	// 2043                  push    0 ;~ 0204:0EB0
cs=0x204;eip=0x000eb2; 	T(NOP);	// 2044                  nop ;~ 0204:0EB2
cs=0x204;eip=0x000eb3; 	X(PUSH(cs));	// 2045                  push    cs ;~ 0204:0EB3
cs=0x204;eip=0x000eb4; 	J(CALL(__dispatch_call,*((byte_18fb6)+0x519)));	// 2046                  call    near ptr byte_18FB6+519h ;~ 0204:0EB4
loc_114d7:
	// 4451 
cs=0x204;eip=0x000eb7; 	X(POP(es));	// 2050                  pop     es ;~ 0204:0EB7
cs=0x204;eip=0x000eb8; 	J(RETN(0));	// 2051                  retn ;~ 0204:0EB8
loc_114d9:
	// 4452 
cs=0x204;eip=0x000eb9; 	T(ax = 1;);	// 2055                  mov     ax, 1 ;~ 0204:0EB9
cs=0x204;eip=0x000ebc; 	J(JMP(loc_114d7));	// 2056                  jmp     short loc_114D7 ;~ 0204:0EBC
sub_114de:
	// 2063 
cs=0x204;eip=0x000ebe; 	J(CALL(sub_111c6,0));	// 2064                  call    sub_111C6 ;~ 0204:0EBE
cs=0x204;eip=0x000ec1; 	T(MOV(ax, *(dw*)(raddr(ds,m2c::kloc_28a25+1))));	// 2065                  mov     ax, word ptr loc_28A25+1 ;~ 0204:0EC1
cs=0x204;eip=0x000ec4; 	T(CMP(ax, *(dw*)(raddr(ds,m2c::kloc_28a27+1))));	// 2066                  cmp     ax, word ptr loc_28A27+1 ;~ 0204:0EC4
cs=0x204;eip=0x000ec8; 	J(JNC(loc_114ef));	// 2067                  jnb     short loc_114EF ;~ 0204:0EC8
loc_114ea:
	// 4453 
cs=0x204;eip=0x000eca; 	T(ax = 1;);	// 2070                  mov     ax, 1 ;~ 0204:0ECA
cs=0x204;eip=0x000ecd; 	J(JMP(locret_114fa));	// 2071                  jmp     short locret_114FA ;~ 0204:0ECD
loc_114ef:
	// 4454 
cs=0x204;eip=0x000ecf; 	T(CMP(ax, 0x118));	// 2075                  cmp     ax, 118h ;~ 0204:0ECF
cs=0x204;eip=0x000ed2; 	J(JC(loc_114ea));	// 2076                  jb      short loc_114EA ;~ 0204:0ED2
cs=0x204;eip=0x000ed4; 	X(MOV(*(dw*)(raddr(ds,m2c::kloc_28a2f+1)), ax));	// 2077                  mov     word ptr loc_28A2F+1, ax ;~ 0204:0ED4
cs=0x204;eip=0x000ed7; 	T(ax = 0;);	// 2078                  mov     ax, 0 ;~ 0204:0ED7
locret_114fa:
	// 4455 
cs=0x204;eip=0x000eda; 	J(RETN(0));	// 2081                  retn ;~ 0204:0EDA
seg001_edb_proc:
	// 2085 
cs=0x204;eip=0x000edb; 	J(CALL(sub_110b0,0));	// 2085                  call    sub_110B0 ;~ 0204:0EDB
cs=0x204;eip=0x000ede; 	J(CALL(sub_114de,0));	// 2086                  call    sub_114DE ;~ 0204:0EDE
cs=0x204;eip=0x000ee1; 	T(TEST(ax, ax));	// 2087                  test    ax, ax ;~ 0204:0EE1
cs=0x204;eip=0x000ee3; 	J(JNZ(locret_1150f));	// 2088                  jnz     short locret_1150F ;~ 0204:0EE3
cs=0x204;eip=0x000ee5; 	J(CALL(sub_11050,0));	// 2089                  call    sub_11050 ;~ 0204:0EE5
cs=0x204;eip=0x000ee8; 	T(TEST(ax, ax));	// 2090                  test    ax, ax ;~ 0204:0EE8
cs=0x204;eip=0x000eea; 	J(JNZ(locret_1150f));	// 2091                  jnz     short locret_1150F ;~ 0204:0EEA
cs=0x204;eip=0x000eec; 	J(CALL(sub_114a2,0));	// 2092                  call    sub_114A2 ;~ 0204:0EEC
locret_1150f:
	// 4456 
cs=0x204;eip=0x000eef; 	J(RETN(0));	// 2096                  retn ;~ 0204:0EEF
ret_204_ef0:
	// 4457 
cs=0x204;eip=0x000ef0; 	T(MOV(si, *(dw*)(raddr(ds,m2c::kloc_28a36+2))));	// 2098                  mov     si, word ptr loc_28A36+2 ;~ 0204:0EF0
cs=0x204;eip=0x000ef4; 	T(MOV(di, *(dw*)(raddr(ds,m2c::kloc_28a36))));	// 2099                  mov     di, word ptr loc_28A36 ;~ 0204:0EF4
cs=0x204;eip=0x000ef8; 	T(ax = 0x502;);	// 2100                  mov     ax, 502h ;~ 0204:0EF8
cs=0x204;eip=0x000efb; 	J(CALL(__dispatch_call,_unk_1f35f));	// 2101                  call    near ptr _unk_1F35F ;~ 0204:0EFB
cs=0x204;eip=0x000efe; 	J(RETN(0));	// 2102                  retn ;~ 0204:0EFE

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_11057: 	goto loc_11057;
        case m2c::kloc_11066: 	goto loc_11066;
        case m2c::kloc_11084: 	goto loc_11084;
        case m2c::kloc_110ab: 	goto loc_110ab;
        case m2c::kloc_11250: 	goto loc_11250;
        case m2c::kloc_11254: 	goto loc_11254;
        case m2c::kloc_11264: 	goto loc_11264;
        case m2c::kloc_11267: 	goto loc_11267;
        case m2c::kloc_11275: 	goto loc_11275;
        case m2c::kloc_11282: 	goto loc_11282;
        case m2c::kloc_1129d: 	goto loc_1129d;
        case m2c::kloc_112ab: 	goto loc_112ab;
        case m2c::kloc_112da: 	goto loc_112da;
        case m2c::kloc_112ea: 	goto loc_112ea;
        case m2c::kloc_11321: 	goto loc_11321;
        case m2c::kloc_11334: 	goto loc_11334;
        case m2c::kloc_11373: 	goto loc_11373;
        case m2c::kloc_11380: 	goto loc_11380;
        case m2c::kloc_113b1: 	goto loc_113b1;
        case m2c::kloc_113c6: 	goto loc_113c6;
        case m2c::kloc_113d2: 	goto loc_113d2;
        case m2c::kloc_113e7: 	goto loc_113e7;
        case m2c::kloc_113ed: 	goto loc_113ed;
        case m2c::kloc_1140e: 	goto loc_1140e;
        case m2c::kloc_11466: 	goto loc_11466;
        case m2c::kloc_1148b: 	goto loc_1148b;
        case m2c::kloc_11493: 	goto loc_11493;
        case m2c::kloc_11496: 	goto loc_11496;
        case m2c::kloc_114d7: 	goto loc_114d7;
        case m2c::kloc_114d9: 	goto loc_114d9;
        case m2c::kloc_114ea: 	goto loc_114ea;
        case m2c::kloc_114ef: 	goto loc_114ef;
        case m2c::klocret_114fa: 	goto locret_114fa;
        case m2c::klocret_1150f: 	goto locret_1150f;
        case m2c::kret_204_dd8: 	goto ret_204_dd8;
        case m2c::kret_204_ef0: 	goto ret_204_ef0;
        case m2c::kseg001_d6e_proc: 	goto seg001_d6e_proc;
        case m2c::kseg001_edb_proc: 	goto seg001_edb_proc;
        case m2c::ksub_11050: 	goto sub_11050;
        case m2c::ksub_111c6: 	goto sub_111c6;
        case m2c::ksub_11285: 	goto sub_11285;
        case m2c::ksub_112ae: 	goto sub_112ae;
        case m2c::ksub_112ed: 	goto sub_112ed;
        case m2c::ksub_11337: 	goto sub_11337;
        case m2c::ksub_114a2: 	goto sub_114a2;
        case m2c::ksub_114de: 	goto sub_114de;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_110b0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_110b0:
    _begin:
cs=0x204;eip=0x000a90; 	T(es = word_2623b;);	// 1374                  mov     es, word_2623B ;~ 0204:0A90
cs=0x204;eip=0x000a94; 	T(MOV(es, *(dw*)(raddr(es,0x2C))));	// 1376                  mov     es, word ptr es:2Ch ;~ 0204:0A94
cs=0x204;eip=0x000a99; 	T(XOR(di, di));	// 1378                  xor     di, di ;~ 0204:0A99
cs=0x204;eip=0x000a9b; 	T(XOR(ax, ax));	// 1379                  xor     ax, ax ;~ 0204:0A9B
cs=0x204;eip=0x000a9d; 	T(CLD);	// 1380                  cld ;~ 0204:0A9D
loc_110be:
	// 4407 
cs=0x204;eip=0x000a9e; 	X(PUSH(di));	// 1383                  push    di ;~ 0204:0A9E
cs=0x204;eip=0x000a9f; 	T(si = 0x2846;);	// 1384                  mov     si, 2846h ;~ 0204:0A9F
cs=0x204;eip=0x000aa2; 	T(cx = 4;);	// 1385                  mov     cx, 4 ;~ 0204:0AA2
	// 1386                  repe cmpsb ;~ 0204:0AA5
cs=0x204;eip=0x000aa5; 	T(	REPE CMPSB);	// 1386                  repe cmpsb ;~ 0204:0AA5
cs=0x204;eip=0x000aa7; 	X(POP(di));	// 1387                  pop     di ;~ 0204:0AA7
cs=0x204;eip=0x000aa8; 	J(JZ(loc_110d8));	// 1388                  jz      short loc_110D8 ;~ 0204:0AA8
cs=0x204;eip=0x000aaa; 	T(cx = 0x0FFFF;);	// 1389                  mov     cx, 0FFFFh ;~ 0204:0AAA
	// 1390                  repne scasb ;~ 0204:0AAD
cs=0x204;eip=0x000aad; 	T(	REPNE SCASB);	// 1390                  repne scasb ;~ 0204:0AAD
cs=0x204;eip=0x000aaf; 	T(CMP(*(raddr(es,di)), 0));	// 1391                  cmp     byte ptr es:[di], 0 ;~ 0204:0AAF
cs=0x204;eip=0x000ab3; 	J(JNZ(loc_110be));	// 1392                  jnz     short loc_110BE ;~ 0204:0AB3
cs=0x204;eip=0x000ab5; 	T(XOR(ax, ax));	// 1393                  xor     ax, ax ;~ 0204:0AB5
cs=0x204;eip=0x000ab7; 	J(RETN(0));	// 1394                  retn ;~ 0204:0AB7
loc_110d8:
	// 4408 
cs=0x204;eip=0x000ab8; 	T(ADD(di, 4));	// 1398                  add     di, 4 ;~ 0204:0AB8
cs=0x204;eip=0x000abb; 	X(PUSH(di));	// 1399                  push    di ;~ 0204:0ABB
loc_110dc:
	// 4409 
cs=0x204;eip=0x000abc; 	T(MOV(al, *(raddr(es,di))));	// 1402                  mov     al, es:[di] ;~ 0204:0ABC
cs=0x204;eip=0x000abf; 	T(CMP(al, 0x61));	// 1403                  cmp     al, 61h ; 'a' ;~ 0204:0ABF
cs=0x204;eip=0x000ac1; 	J(JC(loc_110ec));	// 1404                  jb      short loc_110EC ;~ 0204:0AC1
cs=0x204;eip=0x000ac3; 	T(CMP(al, 0x7A));	// 1405                  cmp     al, 7Ah ; 'z' ;~ 0204:0AC3
cs=0x204;eip=0x000ac5; 	J(JA(loc_110ec));	// 1406                  ja      short loc_110EC ;~ 0204:0AC5
cs=0x204;eip=0x000ac7; 	T(ADD(al, 0x0E0));	// 1407                  add     al, 0E0h ;~ 0204:0AC7
cs=0x204;eip=0x000ac9; 	X(MOV(*(raddr(es,di)), al));	// 1408                  mov     es:[di], al ;~ 0204:0AC9
loc_110ec:
	// 4410 
cs=0x204;eip=0x000acc; 	T(INC(di));	// 1412                  inc     di ;~ 0204:0ACC
cs=0x204;eip=0x000acd; 	T(CMP(al, 0));	// 1413                  cmp     al, 0 ;~ 0204:0ACD
cs=0x204;eip=0x000acf; 	J(JNZ(loc_110dc));	// 1414                  jnz     short loc_110DC ;~ 0204:0ACF
cs=0x204;eip=0x000ad1; 	X(POP(di));	// 1415                  pop     di ;~ 0204:0AD1
loc_110f2:
	// 4411 
cs=0x204;eip=0x000ad2; 	T(MOV(al, *(raddr(es,di))));	// 1419                  mov     al, es:[di] ;~ 0204:0AD2
cs=0x204;eip=0x000ad5; 	T(INC(di));	// 1420                  inc     di ;~ 0204:0AD5
cs=0x204;eip=0x000ad6; 	T(CMP(al, 0));	// 1421                  cmp     al, 0 ;~ 0204:0AD6
cs=0x204;eip=0x000ad8; 	J(JNZ(loc_110fd));	// 1422                  jnz     short loc_110FD ;~ 0204:0AD8
cs=0x204;eip=0x000ada; 	J(JMP(loc_111c3));	// 1423                  jmp     loc_111C3 ;~ 0204:0ADA
loc_110fd:
	// 4412 
cs=0x204;eip=0x000add; 	T(CMP(al, 0x20));	// 1427                  cmp     al, 20h ; ' ' ;~ 0204:0ADD
cs=0x204;eip=0x000adf; 	J(JBE(loc_110f2));	// 1428                  jbe     short loc_110F2 ;~ 0204:0ADF
cs=0x204;eip=0x000ae1; 	T(DEC(di));	// 1429                  dec     di ;~ 0204:0AE1
cs=0x204;eip=0x000ae2; 	T(dx = di;);	// 1430                  mov     dx, di ;~ 0204:0AE2
cs=0x204;eip=0x000ae4; 	T(bx = 0x287C;);	// 1431                  mov     bx, 287Ch ;~ 0204:0AE4
loc_11107:
	// 4413 
cs=0x204;eip=0x000ae7; 	T(MOV(si, *(dw*)(raddr(ds,bx))));	// 1434                  mov     si, [bx] ;~ 0204:0AE7
cs=0x204;eip=0x000ae9; 	T(MOV(cx, *(dw*)(raddr(ds,bx+2))));	// 1435                  mov     cx, [bx+2] ;~ 0204:0AE9
cs=0x204;eip=0x000aec; 	T(di = dx;);	// 1436                  mov     di, dx ;~ 0204:0AEC
	// 1437                  repe cmpsb ;~ 0204:0AEE
cs=0x204;eip=0x000aee; 	T(	REPE CMPSB);	// 1437                  repe cmpsb ;~ 0204:0AEE
cs=0x204;eip=0x000af0; 	J(JZ(loc_11144));	// 1438                  jz      short loc_11144 ;~ 0204:0AF0
cs=0x204;eip=0x000af2; 	T(ADD(bx, 6));	// 1439                  add     bx, 6 ;~ 0204:0AF2
cs=0x204;eip=0x000af5; 	T(CMP(*(dw*)(raddr(ds,bx)), 0));	// 1440                  cmp     word ptr [bx], 0 ;~ 0204:0AF5
cs=0x204;eip=0x000af8; 	J(JNZ(loc_11107));	// 1441                  jnz     short loc_11107 ;~ 0204:0AF8
cs=0x204;eip=0x000afa; 	T(di = dx;);	// 1442                  mov     di, dx ;~ 0204:0AFA
loc_1111c:
	// 4414 
cs=0x204;eip=0x000afc; 	T(MOV(al, *(raddr(es,di))));	// 1446                  mov     al, es:[di] ;~ 0204:0AFC
cs=0x204;eip=0x000aff; 	T(INC(di));	// 1447                  inc     di ;~ 0204:0AFF
cs=0x204;eip=0x000b00; 	T(CMP(al, 0));	// 1448                  cmp     al, 0 ;~ 0204:0B00
cs=0x204;eip=0x000b02; 	J(JNZ(loc_11127));	// 1449                  jnz     short loc_11127 ;~ 0204:0B02
cs=0x204;eip=0x000b04; 	J(JMP(loc_111c3));	// 1450                  jmp     loc_111C3 ;~ 0204:0B04
loc_11127:
	// 4415 
cs=0x204;eip=0x000b07; 	T(CMP(al, 0x20));	// 1454                  cmp     al, 20h ; ' ' ;~ 0204:0B07
cs=0x204;eip=0x000b09; 	J(JA(loc_1111c));	// 1455                  ja      short loc_1111C ;~ 0204:0B09
cs=0x204;eip=0x000b0b; 	T(DEC(di));	// 1456                  dec     di ;~ 0204:0B0B
cs=0x204;eip=0x000b0c; 	X(PUSH(ax));	// 1457                  push    ax ;~ 0204:0B0C
cs=0x204;eip=0x000b0d; 	X(PUSH(bx));	// 1458                  push    bx ;~ 0204:0B0D
cs=0x204;eip=0x000b0e; 	X(PUSH(cx));	// 1459                  push    cx ;~ 0204:0B0E
cs=0x204;eip=0x000b0f; 	X(PUSH(dx));	// 1460                  push    dx ;~ 0204:0B0F
cs=0x204;eip=0x000b10; 	T(cx = 0x38;);	// 1461                  mov     cx, 38h ; '8' ;~ 0204:0B10
cs=0x204;eip=0x000b13; 	T(dx = 0x28A8;);	// 1462                  mov     dx, 28A8h ;~ 0204:0B13
cs=0x204;eip=0x000b16; 	T(bx = 2;);	// 1463                  mov     bx, 2 ;~ 0204:0B16
cs=0x204;eip=0x000b19; 	T(ax = 0x4000;);	// 1464                  mov     ax, 4000h ;~ 0204:0B19
cs=0x204;eip=0x000b1c; 	S(_INT(0x21));	// 1465                  int     21h             ; DOS - 2+ - WRITE TO FILE WITH HANDLE ;~ 0204:0B1C
cs=0x204;eip=0x000b1e; 	X(POP(dx));	// 1467                  pop     dx ;~ 0204:0B1E
cs=0x204;eip=0x000b1f; 	X(POP(cx));	// 1468                  pop     cx ;~ 0204:0B1F
cs=0x204;eip=0x000b20; 	X(POP(bx));	// 1469                  pop     bx ;~ 0204:0B20
cs=0x204;eip=0x000b21; 	X(POP(ax));	// 1470                  pop     ax ;~ 0204:0B21
cs=0x204;eip=0x000b22; 	J(JMP(loc_110f2));	// 1471                  jmp     short loc_110F2 ;~ 0204:0B22
loc_11144:
	// 4416 
cs=0x204;eip=0x000b24; 	T(MOV(al, *(raddr(es,di))));	// 1476                  mov     al, es:[di] ;~ 0204:0B24
cs=0x204;eip=0x000b27; 	T(INC(di));	// 1477                  inc     di ;~ 0204:0B27
cs=0x204;eip=0x000b28; 	T(CMP(al, 0));	// 1478                  cmp     al, 0 ;~ 0204:0B28
cs=0x204;eip=0x000b2a; 	J(JZ(loc_111c3));	// 1479                  jz      short loc_111C3 ;~ 0204:0B2A
cs=0x204;eip=0x000b2c; 	T(CMP(al, 0x20));	// 1480                  cmp     al, 20h ; ' ' ;~ 0204:0B2C
cs=0x204;eip=0x000b2e; 	J(JBE(loc_11144));	// 1481                  jbe     short loc_11144 ;~ 0204:0B2E
cs=0x204;eip=0x000b30; 	T(DEC(di));	// 1482                  dec     di ;~ 0204:0B30
cs=0x204;eip=0x000b31; 	X(word_28ad6 = 0x0A;);	// 1483                  mov     word_28AD6, 0Ah ;~ 0204:0B31
cs=0x204;eip=0x000b37; 	T(CMP(*(raddr(es,di)), 0x78));	// 1484                  cmp     byte ptr es:[di], 78h ; 'x' ;~ 0204:0B37
cs=0x204;eip=0x000b3b; 	J(JZ(loc_1117a));	// 1485                  jz      short loc_1117A ;~ 0204:0B3B
cs=0x204;eip=0x000b3d; 	T(CMP(*(raddr(es,di)), 0x58));	// 1486                  cmp     byte ptr es:[di], 58h ; 'X' ;~ 0204:0B3D
cs=0x204;eip=0x000b41; 	J(JZ(loc_1117a));	// 1487                  jz      short loc_1117A ;~ 0204:0B41
cs=0x204;eip=0x000b43; 	T(CMP(*(raddr(es,di)), 0x24));	// 1488                  cmp     byte ptr es:[di], 24h ; '$' ;~ 0204:0B43
cs=0x204;eip=0x000b47; 	J(JZ(loc_1117a));	// 1489                  jz      short loc_1117A ;~ 0204:0B47
cs=0x204;eip=0x000b49; 	T(CMP(*(dw*)(raddr(es,di)), 0x7830));	// 1490                  cmp     word ptr es:[di], 7830h ;~ 0204:0B49
cs=0x204;eip=0x000b4e; 	J(JZ(loc_11179));	// 1491                  jz      short loc_11179 ;~ 0204:0B4E
cs=0x204;eip=0x000b50; 	T(CMP(*(dw*)(raddr(es,di)), 0x5830));	// 1492                  cmp     word ptr es:[di], 5830h ;~ 0204:0B50
cs=0x204;eip=0x000b55; 	J(JZ(loc_11179));	// 1493                  jz      short loc_11179 ;~ 0204:0B55
cs=0x204;eip=0x000b57; 	J(JNZ(loc_11181));	// 1494                  jnz     short loc_11181 ;~ 0204:0B57
loc_11179:
	// 4417 
cs=0x204;eip=0x000b59; 	T(INC(di));	// 1498                  inc     di ;~ 0204:0B59
loc_1117a:
	// 4418 
cs=0x204;eip=0x000b5a; 	X(word_28ad6 = 0x10;);	// 1502                  mov     word_28AD6, 10h ;~ 0204:0B5A
cs=0x204;eip=0x000b60; 	T(INC(di));	// 1503                  inc     di ;~ 0204:0B60
loc_11181:
	// 4419 
cs=0x204;eip=0x000b61; 	T(MOV(si, *(dw*)(raddr(ds,bx+4))));	// 1506                  mov     si, [bx+4] ;~ 0204:0B61
cs=0x204;eip=0x000b64; 	X(MOV(*(dw*)(raddr(ds,si)), 0));	// 1507                  mov     word ptr [si], 0 ;~ 0204:0B64
loc_11188:
	// 4420 
cs=0x204;eip=0x000b68; 	T(MOV(al, *(raddr(es,di))));	// 1510                  mov     al, es:[di] ;~ 0204:0B68
cs=0x204;eip=0x000b6b; 	T(INC(di));	// 1511                  inc     di ;~ 0204:0B6B
cs=0x204;eip=0x000b6c; 	T(CMP(al, 0));	// 1512                  cmp     al, 0 ;~ 0204:0B6C
cs=0x204;eip=0x000b6e; 	J(JZ(loc_111c3));	// 1513                  jz      short loc_111C3 ;~ 0204:0B6E
cs=0x204;eip=0x000b70; 	T(CMP(al, 0x20));	// 1514                  cmp     al, 20h ; ' ' ;~ 0204:0B70
cs=0x204;eip=0x000b72; 	J(JA(loc_11197));	// 1515                  ja      short loc_11197 ;~ 0204:0B72
cs=0x204;eip=0x000b74; 	J(JMP(loc_110f2));	// 1516                  jmp     loc_110F2 ;~ 0204:0B74
loc_11197:
	// 4421 
cs=0x204;eip=0x000b77; 	T(CMP(al, 0x61));	// 1520                  cmp     al, 61h ; 'a' ;~ 0204:0B77
cs=0x204;eip=0x000b79; 	J(JC(loc_1119d));	// 1521                  jb      short loc_1119D ;~ 0204:0B79
cs=0x204;eip=0x000b7b; 	T(SUB(al, 0x20));	// 1522                  sub     al, 20h ; ' ' ;~ 0204:0B7B
loc_1119d:
	// 4422 
cs=0x204;eip=0x000b7d; 	T(SUB(al, 0x30));	// 1525                  sub     al, 30h ; '0' ;~ 0204:0B7D
cs=0x204;eip=0x000b7f; 	T(CMP(al, 0x0A));	// 1526                  cmp     al, 0Ah ;~ 0204:0B7F
cs=0x204;eip=0x000b81; 	J(JC(loc_111b3));	// 1527                  jb      short loc_111B3 ;~ 0204:0B81
cs=0x204;eip=0x000b83; 	T(CMP(word_28ad6, 0x10));	// 1528                  cmp     word_28AD6, 10h ;~ 0204:0B83
cs=0x204;eip=0x000b88; 	J(JNZ(loc_111b0));	// 1529                  jnz     short loc_111B0 ;~ 0204:0B88
cs=0x204;eip=0x000b8a; 	T(SUB(al, 7));	// 1530                  sub     al, 7 ;~ 0204:0B8A
cs=0x204;eip=0x000b8c; 	T(CMP(al, 0x0F));	// 1531                  cmp     al, 0Fh ;~ 0204:0B8C
cs=0x204;eip=0x000b8e; 	J(JC(loc_111b3));	// 1532                  jb      short loc_111B3 ;~ 0204:0B8E
loc_111b0:
	// 4423 
cs=0x204;eip=0x000b90; 	J(JMP(loc_1111c));	// 1535                  jmp     loc_1111C ;~ 0204:0B90
loc_111b3:
	// 4424 
cs=0x204;eip=0x000b93; 	X(PUSH(ax));	// 1540                  push    ax ;~ 0204:0B93
cs=0x204;eip=0x000b94; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 1541                  mov     ax, [si] ;~ 0204:0B94
cs=0x204;eip=0x000b96; 	X(MUL1_2(word_28ad6));	// 1542                  mul     word_28AD6 ;~ 0204:0B96
cs=0x204;eip=0x000b9a; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 1543                  mov     [si], ax ;~ 0204:0B9A
cs=0x204;eip=0x000b9c; 	X(POP(ax));	// 1544                  pop     ax ;~ 0204:0B9C
cs=0x204;eip=0x000b9d; 	T(XOR(ah, ah));	// 1545                  xor     ah, ah ;~ 0204:0B9D
cs=0x204;eip=0x000b9f; 	X(ADD(*(dw*)(raddr(ds,si)), ax));	// 1546                  add     [si], ax ;~ 0204:0B9F
cs=0x204;eip=0x000ba1; 	J(JMP(loc_11188));	// 1547                  jmp     short loc_11188 ;~ 0204:0BA1
loc_111c3:
	// 4425 
cs=0x204;eip=0x000ba3; 	T(XOR(ax, ax));	// 1552                  xor     ax, ax ;~ 0204:0BA3
cs=0x204;eip=0x000ba5; 	J(RETN(0));	// 1553                  retn ;~ 0204:0BA5

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_110be: 	goto loc_110be;
        case m2c::kloc_110d8: 	goto loc_110d8;
        case m2c::kloc_110dc: 	goto loc_110dc;
        case m2c::kloc_110ec: 	goto loc_110ec;
        case m2c::kloc_110f2: 	goto loc_110f2;
        case m2c::kloc_110fd: 	goto loc_110fd;
        case m2c::kloc_11107: 	goto loc_11107;
        case m2c::kloc_1111c: 	goto loc_1111c;
        case m2c::kloc_11127: 	goto loc_11127;
        case m2c::kloc_11144: 	goto loc_11144;
        case m2c::kloc_11179: 	goto loc_11179;
        case m2c::kloc_1117a: 	goto loc_1117a;
        case m2c::kloc_11181: 	goto loc_11181;
        case m2c::kloc_11188: 	goto loc_11188;
        case m2c::kloc_11197: 	goto loc_11197;
        case m2c::kloc_1119d: 	goto loc_1119d;
        case m2c::kloc_111b0: 	goto loc_111b0;
        case m2c::kloc_111b3: 	goto loc_111b3;
        case m2c::kloc_111c3: 	goto loc_111c3;
        case m2c::ksub_110b0: 	goto sub_110b0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_11520(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11520:
    _begin:
#undef var_6
#define var_6 -6
	// 2113 var_6           = word ptr -6 ;~ 0204:0F00
#undef var_4
#define var_4 -4
	// 2114 var_4           = word ptr -4 ;~ 0204:0F00
#undef var_2
#define var_2 -2
	// 2115 var_2           = word ptr -2 ;~ 0204:0F00
#undef arg_0
#define arg_0 4
	// 2116 arg_0           = word ptr  4 ;~ 0204:0F00
cs=0x204;eip=0x000f00; 	X(PUSH(bp));	// 2118                  push    bp ;~ 0204:0F00
cs=0x204;eip=0x000f01; 	T(bp = sp;);	// 2119                  mov     bp, sp ;~ 0204:0F01
cs=0x204;eip=0x000f03; 	T(SUB(sp, 6));	// 2120                  sub     sp, 6 ;~ 0204:0F03
cs=0x204;eip=0x000f06; 	X(PUSH(si));	// 2121                  push    si ;~ 0204:0F06
cs=0x204;eip=0x000f07; 	X(PUSH(di));	// 2122                  push    di ;~ 0204:0F07
cs=0x204;eip=0x000f08; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 2123                  mov     si, [bp+arg_0] ;~ 0204:0F08
cs=0x204;eip=0x000f0b; 	T(XOR(di, di));	// 2124                  xor     di, di ;~ 0204:0F0B
cs=0x204;eip=0x000f0d; 	X(PUSH(si));	// 2125                  push    si ;~ 0204:0F0D
cs=0x204;eip=0x000f0e; 	X(PUSH(ss));	// 2126                  push    ss ;~ 0204:0F0E
cs=0x204;eip=0x000f0f; 	T(ax = bp+var_4);	// 2127                  lea     ax, [bp+var_4] ;~ 0204:0F0F
cs=0x204;eip=0x000f12; 	X(PUSH(ax));	// 2128                  push    ax ;~ 0204:0F12
cs=0x204;eip=0x000f13; 	T(NOP);	// 2129                  nop ;~ 0204:0F13
cs=0x204;eip=0x000f14; 	X(PUSH(cs));	// 2130                  push    cs ;~ 0204:0F14
cs=0x204;eip=0x000f15; 	J(CALL(__dispatch_call,byte_1b050));	// 2131                  call    near ptr byte_1B050 ;~ 0204:0F15
cs=0x204;eip=0x000f18; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 2132                  cmp     [bp+var_4], 0 ;~ 0204:0F18
cs=0x204;eip=0x000f1c; 	J(JNZ(loc_11579));	// 2133                  jnz     short loc_11579 ;~ 0204:0F1C
cs=0x204;eip=0x000f1e; 	X(PUSH(si));	// 2134                  push    si ;~ 0204:0F1E
cs=0x204;eip=0x000f1f; 	X(PUSH(ss));	// 2135                  push    ss ;~ 0204:0F1F
cs=0x204;eip=0x000f20; 	T(ax = bp+var_6);	// 2136                  lea     ax, [bp+var_6] ;~ 0204:0F20
cs=0x204;eip=0x000f23; 	X(PUSH(ax));	// 2137                  push    ax ;~ 0204:0F23
cs=0x204;eip=0x000f24; 	T(NOP);	// 2138                  nop ;~ 0204:0F24
cs=0x204;eip=0x000f25; 	X(PUSH(cs));	// 2139                  push    cs ;~ 0204:0F25
cs=0x204;eip=0x000f26; 	J(CALL(__dispatch_call,byte_1aecc));	// 2140                  call    near ptr byte_1AECC ;~ 0204:0F26
cs=0x204;eip=0x000f29; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_6))));	// 2141                  mov     di, [bp+var_6] ;~ 0204:0F29
cs=0x204;eip=0x000f2c; 	T(AND(di, 0x20));	// 2142                  and     di, 20h ;~ 0204:0F2C
cs=0x204;eip=0x000f2f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 2143                  mov     ax, [bp+var_6] ;~ 0204:0F2F
cs=0x204;eip=0x000f32; 	T(OR(ax, 0x1000));	// 2144                  or      ax, 1000h ;~ 0204:0F32
cs=0x204;eip=0x000f35; 	T(AND(ax, 0x0FFDF));	// 2145                  and     ax, 0FFDFh ;~ 0204:0F35
cs=0x204;eip=0x000f38; 	T(OR(ax, 0x8000));	// 2146                  or      ax, 8000h ;~ 0204:0F38
cs=0x204;eip=0x000f3b; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 2147                  mov     [bp+var_6], ax ;~ 0204:0F3B
cs=0x204;eip=0x000f3e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 2148                  mov     ax, [bp+var_2] ;~ 0204:0F3E
cs=0x204;eip=0x000f41; 	T(XOR(dx, dx));	// 2149                  xor     dx, dx ;~ 0204:0F41
cs=0x204;eip=0x000f43; 	T(OR(dx, *(dw*)(raddr(ss,bp+var_6))));	// 2150                  or      dx, [bp+var_6] ;~ 0204:0F43
cs=0x204;eip=0x000f46; 	T(AND(ax, 0x0FFFF));	// 2151                  and     ax, 0FFFFh ;~ 0204:0F46
cs=0x204;eip=0x000f49; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 2152                  mov     [bp+var_2], ax ;~ 0204:0F49
cs=0x204;eip=0x000f4c; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 2153                  mov     [bp+var_4], dx ;~ 0204:0F4C
cs=0x204;eip=0x000f4f; 	X(PUSH(si));	// 2154                  push    si ;~ 0204:0F4F
cs=0x204;eip=0x000f50; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 2155                  push    [bp+var_2] ;~ 0204:0F50
cs=0x204;eip=0x000f53; 	X(PUSH(dx));	// 2156                  push    dx ;~ 0204:0F53
cs=0x204;eip=0x000f54; 	T(NOP);	// 2157                  nop ;~ 0204:0F54
cs=0x204;eip=0x000f55; 	X(PUSH(cs));	// 2158                  push    cs ;~ 0204:0F55
cs=0x204;eip=0x000f56; 	J(CALL(__dispatch_call,byte_1b0a8));	// 2159                  call    near ptr byte_1B0A8 ;~ 0204:0F56
loc_11579:
	// 4458 
cs=0x204;eip=0x000f59; 	T(ax = di;);	// 2162                  mov     ax, di ;~ 0204:0F59
cs=0x204;eip=0x000f5b; 	X(POP(di));	// 2163                  pop     di ;~ 0204:0F5B
cs=0x204;eip=0x000f5c; 	X(POP(si));	// 2164                  pop     si ;~ 0204:0F5C
cs=0x204;eip=0x000f5d; 	T(LEAVE);	// 2165                  leave ;~ 0204:0F5D
cs=0x204;eip=0x000f5e; 	J(RETN(0));	// 2166                  retn ;~ 0204:0F5E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_11579: 	goto loc_11579;
        case m2c::ksub_11520: 	goto sub_11520;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1157f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1157f:
    _begin:
#undef var_4
#define var_4 -4
	// 2177 var_4           = word ptr -4 ;~ 0204:0F5F
#undef var_2
#define var_2 -2
	// 2178 var_2           = word ptr -2 ;~ 0204:0F5F
#undef arg_0
#define arg_0 4
	// 2179 arg_0           = word ptr  4 ;~ 0204:0F5F
cs=0x204;eip=0x000f5f; 	X(PUSH(bp));	// 2181                  push    bp ;~ 0204:0F5F
cs=0x204;eip=0x000f60; 	T(bp = sp;);	// 2182                  mov     bp, sp ;~ 0204:0F60
cs=0x204;eip=0x000f62; 	T(SUB(sp, 4));	// 2183                  sub     sp, 4 ;~ 0204:0F62
cs=0x204;eip=0x000f65; 	X(PUSH(si));	// 2184                  push    si ;~ 0204:0F65
cs=0x204;eip=0x000f66; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 2185                  mov     si, [bp+arg_0] ;~ 0204:0F66
cs=0x204;eip=0x000f69; 	X(PUSH(si));	// 2186                  push    si ;~ 0204:0F69
cs=0x204;eip=0x000f6a; 	X(PUSH(ss));	// 2187                  push    ss ;~ 0204:0F6A
cs=0x204;eip=0x000f6b; 	T(ax = bp+var_4);	// 2188                  lea     ax, [bp+var_4] ;~ 0204:0F6B
cs=0x204;eip=0x000f6e; 	X(PUSH(ax));	// 2189                  push    ax ;~ 0204:0F6E
cs=0x204;eip=0x000f6f; 	T(NOP);	// 2190                  nop ;~ 0204:0F6F
cs=0x204;eip=0x000f70; 	X(PUSH(cs));	// 2191                  push    cs ;~ 0204:0F70
cs=0x204;eip=0x000f71; 	J(CALL(__dispatch_call,byte_1b050));	// 2192                  call    near ptr byte_1B050 ;~ 0204:0F71
cs=0x204;eip=0x000f74; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4))));	// 2193                  mov     dx, [bp+var_4] ;~ 0204:0F74
cs=0x204;eip=0x000f77; 	T(TEST(dx, 0x8000));	// 2194                  test    dx, 8000h ;~ 0204:0F77
cs=0x204;eip=0x000f7b; 	J(JZ(loc_115b8));	// 2195                  jz      short loc_115B8 ;~ 0204:0F7B
cs=0x204;eip=0x000f7d; 	X(PUSH(si));	// 2196                  push    si ;~ 0204:0F7D
cs=0x204;eip=0x000f7e; 	X(PUSH(dx));	// 2197                  push    dx ;~ 0204:0F7E
cs=0x204;eip=0x000f7f; 	T(NOP);	// 2198                  nop ;~ 0204:0F7F
cs=0x204;eip=0x000f80; 	X(PUSH(cs));	// 2199                  push    cs ;~ 0204:0F80
cs=0x204;eip=0x000f81; 	J(CALL(__dispatch_call,byte_1a81b));	// 2200                  call    near ptr byte_1A81B ;~ 0204:0F81
cs=0x204;eip=0x000f84; 	X(AND(*(dw*)(raddr(ss,bp+var_4)), 0));	// 2201                  and     [bp+var_4], 0 ;~ 0204:0F84
cs=0x204;eip=0x000f88; 	X(AND(*(dw*)(raddr(ss,bp+var_2)), 0x0FFFF));	// 2202                  and     [bp+var_2], 0FFFFh ;~ 0204:0F88
cs=0x204;eip=0x000f8c; 	X(PUSH(si));	// 2203                  push    si ;~ 0204:0F8C
cs=0x204;eip=0x000f8d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 2204                  push    [bp+var_2] ;~ 0204:0F8D
cs=0x204;eip=0x000f90; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 2205                  push    [bp+var_4] ;~ 0204:0F90
cs=0x204;eip=0x000f93; 	T(NOP);	// 2206                  nop ;~ 0204:0F93
cs=0x204;eip=0x000f94; 	X(PUSH(cs));	// 2207                  push    cs ;~ 0204:0F94
cs=0x204;eip=0x000f95; 	J(CALL(__dispatch_call,byte_1b0a8));	// 2208                  call    near ptr byte_1B0A8 ;~ 0204:0F95
loc_115b8:
	// 4459 
cs=0x204;eip=0x000f98; 	X(POP(si));	// 2211                  pop     si ;~ 0204:0F98
cs=0x204;eip=0x000f99; 	T(LEAVE);	// 2212                  leave ;~ 0204:0F99
cs=0x204;eip=0x000f9a; 	J(RETN(0));	// 2213                  retn ;~ 0204:0F9A

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_115b8: 	goto loc_115b8;
        case m2c::ksub_1157f: 	goto sub_1157f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_115bb(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_115bb:
    _begin:
#undef var_6
#define var_6 -6
	// 2224 var_6           = word ptr -6 ;~ 0204:0F9B
#undef var_4
#define var_4 -4
	// 2225 var_4           = word ptr -4 ;~ 0204:0F9B
#undef arg_0
#define arg_0 4
	// 2226 arg_0           = word ptr  4 ;~ 0204:0F9B
cs=0x204;eip=0x000f9b; 	X(PUSH(bp));	// 2228                  push    bp ;~ 0204:0F9B
cs=0x204;eip=0x000f9c; 	T(bp = sp;);	// 2229                  mov     bp, sp ;~ 0204:0F9C
cs=0x204;eip=0x000f9e; 	T(SUB(sp, 6));	// 2230                  sub     sp, 6 ;~ 0204:0F9E
cs=0x204;eip=0x000fa1; 	X(PUSH(si));	// 2231                  push    si ;~ 0204:0FA1
cs=0x204;eip=0x000fa2; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 2232                  mov     si, [bp+arg_0] ;~ 0204:0FA2
cs=0x204;eip=0x000fa5; 	X(PUSH(si));	// 2233                  push    si ;~ 0204:0FA5
cs=0x204;eip=0x000fa6; 	X(PUSH(ss));	// 2234                  push    ss ;~ 0204:0FA6
cs=0x204;eip=0x000fa7; 	T(ax = bp+var_4);	// 2235                  lea     ax, [bp+var_4] ;~ 0204:0FA7
cs=0x204;eip=0x000faa; 	X(PUSH(ax));	// 2236                  push    ax ;~ 0204:0FAA
cs=0x204;eip=0x000fab; 	T(NOP);	// 2237                  nop ;~ 0204:0FAB
cs=0x204;eip=0x000fac; 	X(PUSH(cs));	// 2238                  push    cs ;~ 0204:0FAC
cs=0x204;eip=0x000fad; 	J(CALL(__dispatch_call,byte_1b050));	// 2239                  call    near ptr byte_1B050 ;~ 0204:0FAD
cs=0x204;eip=0x000fb0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 2240                  mov     ax, [bp+var_4] ;~ 0204:0FB0
cs=0x204;eip=0x000fb3; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 2241                  mov     [bp+var_6], ax ;~ 0204:0FB3
cs=0x204;eip=0x000fb6; 	T(TEST(*(dw*)(raddr(ss,bp+var_6)), 0x8000));	// 2242                  test    [bp+var_6], 8000h ;~ 0204:0FB6
cs=0x204;eip=0x000fbb; 	J(JNZ(loc_115e8));	// 2243                  jnz     short loc_115E8 ;~ 0204:0FBB
cs=0x204;eip=0x000fbd; 	X(PUSH(si));	// 2244                  push    si ;~ 0204:0FBD
cs=0x204;eip=0x000fbe; 	X(PUSH(ss));	// 2245                  push    ss ;~ 0204:0FBE
cs=0x204;eip=0x000fbf; 	T(ax = bp+var_6);	// 2246                  lea     ax, [bp+var_6] ;~ 0204:0FBF
cs=0x204;eip=0x000fc2; 	X(PUSH(ax));	// 2247                  push    ax ;~ 0204:0FC2
cs=0x204;eip=0x000fc3; 	T(NOP);	// 2248                  nop ;~ 0204:0FC3
cs=0x204;eip=0x000fc4; 	X(PUSH(cs));	// 2249                  push    cs ;~ 0204:0FC4
cs=0x204;eip=0x000fc5; 	J(CALL(__dispatch_call,byte_1aecc));	// 2250                  call    near ptr byte_1AECC ;~ 0204:0FC5
loc_115e8:
	// 4460 
cs=0x204;eip=0x000fc8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 2253                  mov     ax, [bp+var_6] ;~ 0204:0FC8
cs=0x204;eip=0x000fcb; 	X(POP(si));	// 2254                  pop     si ;~ 0204:0FCB
cs=0x204;eip=0x000fcc; 	T(LEAVE);	// 2255                  leave ;~ 0204:0FCC
cs=0x204;eip=0x000fcd; 	J(RETN(0));	// 2256                  retn ;~ 0204:0FCD

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_115e8: 	goto loc_115e8;
        case m2c::ksub_115bb: 	goto sub_115bb;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_115ee(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_115ee:
    _begin:
#undef var_4
#define var_4 -4
	// 2266 var_4           = byte ptr -4 ;~ 0204:0FCE
#undef var_2
#define var_2 -2
	// 2267 var_2           = word ptr -2 ;~ 0204:0FCE
#undef arg_0
#define arg_0 4
	// 2268 arg_0           = word ptr  4 ;~ 0204:0FCE
cs=0x204;eip=0x000fce; 	X(PUSH(bp));	// 2270                  push    bp ;~ 0204:0FCE
cs=0x204;eip=0x000fcf; 	T(bp = sp;);	// 2271                  mov     bp, sp ;~ 0204:0FCF
cs=0x204;eip=0x000fd1; 	T(SUB(sp, 4));	// 2272                  sub     sp, 4 ;~ 0204:0FD1
cs=0x204;eip=0x000fd4; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 2273                  push    [bp+arg_0] ;~ 0204:0FD4
cs=0x204;eip=0x000fd7; 	X(PUSH(ss));	// 2274                  push    ss ;~ 0204:0FD7
cs=0x204;eip=0x000fd8; 	T(ax = bp+var_4);	// 2275                  lea     ax, [bp+var_4] ;~ 0204:0FD8
cs=0x204;eip=0x000fdb; 	X(PUSH(ax));	// 2276                  push    ax ;~ 0204:0FDB
cs=0x204;eip=0x000fdc; 	T(NOP);	// 2277                  nop ;~ 0204:0FDC
cs=0x204;eip=0x000fdd; 	X(PUSH(cs));	// 2278                  push    cs ;~ 0204:0FDD
cs=0x204;eip=0x000fde; 	J(CALL(__dispatch_call,byte_1b050));	// 2279                  call    near ptr byte_1B050 ;~ 0204:0FDE
cs=0x204;eip=0x000fe1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 2280                  mov     ax, [bp+var_2] ;~ 0204:0FE1
cs=0x204;eip=0x000fe4; 	T(LEAVE);	// 2281                  leave ;~ 0204:0FE4
cs=0x204;eip=0x000fe5; 	J(RETN(0));	// 2282                  retn ;~ 0204:0FE5

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_115ee: 	goto sub_115ee;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_11606(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_11606:
    _begin:
#undef var_4
#define var_4 -4
	// 2292 var_4           = word ptr -4 ;~ 0204:0FE6
#undef var_2
#define var_2 -2
	// 2293 var_2           = word ptr -2 ;~ 0204:0FE6
#undef arg_0
#define arg_0 4
	// 2294 arg_0           = word ptr  4 ;~ 0204:0FE6
cs=0x204;eip=0x000fe6; 	X(PUSH(bp));	// 2296                  push    bp ;~ 0204:0FE6
cs=0x204;eip=0x000fe7; 	T(bp = sp;);	// 2297                  mov     bp, sp ;~ 0204:0FE7
cs=0x204;eip=0x000fe9; 	T(SUB(sp, 4));	// 2298                  sub     sp, 4 ;~ 0204:0FE9
cs=0x204;eip=0x000fec; 	X(PUSH(si));	// 2299                  push    si ;~ 0204:0FEC
cs=0x204;eip=0x000fed; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 2300                  mov     si, [bp+arg_0] ;~ 0204:0FED
cs=0x204;eip=0x000ff0; 	X(PUSH(si));	// 2301                  push    si ;~ 0204:0FF0
cs=0x204;eip=0x000ff1; 	X(PUSH(ss));	// 2302                  push    ss ;~ 0204:0FF1
cs=0x204;eip=0x000ff2; 	T(ax = bp+var_4);	// 2303                  lea     ax, [bp+var_4] ;~ 0204:0FF2
cs=0x204;eip=0x000ff5; 	X(PUSH(ax));	// 2304                  push    ax ;~ 0204:0FF5
cs=0x204;eip=0x000ff6; 	T(NOP);	// 2305                  nop ;~ 0204:0FF6
cs=0x204;eip=0x000ff7; 	X(PUSH(cs));	// 2306                  push    cs ;~ 0204:0FF7
cs=0x204;eip=0x000ff8; 	J(CALL(__dispatch_call,byte_1b050));	// 2307                  call    near ptr byte_1B050 ;~ 0204:0FF8
cs=0x204;eip=0x000ffb; 	X(PUSH(si));	// 2308                  push    si ;~ 0204:0FFB
cs=0x204;eip=0x000ffc; 	J(CALL(sub_115bb,0));	// 2309                  call    sub_115BB ;~ 0204:0FFC
cs=0x204;eip=0x000fff; 	X(POP(cx));	// 2310                  pop     cx ;~ 0204:0FFF
cs=0x204;eip=0x001000; 	T(TEST(ax, 7));	// 2311                  test    ax, 7 ;~ 0204:1000
cs=0x204;eip=0x001003; 	J(JNZ(loc_11639));	// 2312                  jnz     short loc_11639 ;~ 0204:1003
cs=0x204;eip=0x001005; 	X(ADD(*(dw*)(raddr(ss,bp+var_4)), 0));	// 2313                  add     [bp+var_4], 0 ;~ 0204:1005
cs=0x204;eip=0x001009; 	X(ADC(*(dw*)(raddr(ss,bp+var_2)), 1));	// 2314                  adc     [bp+var_2], 1 ;~ 0204:1009
cs=0x204;eip=0x00100d; 	X(PUSH(si));	// 2315                  push    si ;~ 0204:100D
cs=0x204;eip=0x00100e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 2316                  push    [bp+var_2] ;~ 0204:100E
cs=0x204;eip=0x001011; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 2317                  push    [bp+var_4] ;~ 0204:1011
cs=0x204;eip=0x001014; 	T(NOP);	// 2318                  nop ;~ 0204:1014
cs=0x204;eip=0x001015; 	X(PUSH(cs));	// 2319                  push    cs ;~ 0204:1015
cs=0x204;eip=0x001016; 	J(CALL(__dispatch_call,byte_1b0a8));	// 2320                  call    near ptr byte_1B0A8 ;~ 0204:1016
loc_11639:
	// 4461 
cs=0x204;eip=0x001019; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 2323                  mov     ax, [bp+var_2] ;~ 0204:1019
cs=0x204;eip=0x00101c; 	X(POP(si));	// 2324                  pop     si ;~ 0204:101C
cs=0x204;eip=0x00101d; 	T(LEAVE);	// 2325                  leave ;~ 0204:101D
cs=0x204;eip=0x00101e; 	J(RETN(0));	// 2326                  retn ;~ 0204:101E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_11639: 	goto loc_11639;
        case m2c::ksub_11606: 	goto sub_11606;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1163f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1163f:
    _begin:
#undef var_4
#define var_4 -4
	// 2336 var_4           = word ptr -4 ;~ 0204:101F
#undef var_2
#define var_2 -2
	// 2337 var_2           = word ptr -2 ;~ 0204:101F
#undef arg_0
#define arg_0 4
	// 2338 arg_0           = word ptr  4 ;~ 0204:101F
cs=0x204;eip=0x00101f; 	X(PUSH(bp));	// 2340                  push    bp ;~ 0204:101F
cs=0x204;eip=0x001020; 	T(bp = sp;);	// 2341                  mov     bp, sp ;~ 0204:1020
cs=0x204;eip=0x001022; 	T(SUB(sp, 4));	// 2342                  sub     sp, 4 ;~ 0204:1022
cs=0x204;eip=0x001025; 	X(PUSH(si));	// 2343                  push    si ;~ 0204:1025
cs=0x204;eip=0x001026; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 2344                  mov     si, [bp+arg_0] ;~ 0204:1026
cs=0x204;eip=0x001029; 	X(PUSH(si));	// 2345                  push    si ;~ 0204:1029
cs=0x204;eip=0x00102a; 	X(PUSH(ss));	// 2346                  push    ss ;~ 0204:102A
cs=0x204;eip=0x00102b; 	T(ax = bp+var_4);	// 2347                  lea     ax, [bp+var_4] ;~ 0204:102B
cs=0x204;eip=0x00102e; 	X(PUSH(ax));	// 2348                  push    ax ;~ 0204:102E
cs=0x204;eip=0x00102f; 	T(NOP);	// 2349                  nop ;~ 0204:102F
cs=0x204;eip=0x001030; 	X(PUSH(cs));	// 2350                  push    cs ;~ 0204:1030
cs=0x204;eip=0x001031; 	J(CALL(__dispatch_call,byte_1b050));	// 2351                  call    near ptr byte_1B050 ;~ 0204:1031
cs=0x204;eip=0x001034; 	X(PUSH(si));	// 2352                  push    si ;~ 0204:1034
cs=0x204;eip=0x001035; 	J(CALL(sub_115bb,0));	// 2353                  call    sub_115BB ;~ 0204:1035
cs=0x204;eip=0x001038; 	X(POP(cx));	// 2354                  pop     cx ;~ 0204:1038
cs=0x204;eip=0x001039; 	T(TEST(ax, 7));	// 2355                  test    ax, 7 ;~ 0204:1039
cs=0x204;eip=0x00103c; 	J(JNZ(loc_11679));	// 2356                  jnz     short loc_11679 ;~ 0204:103C
cs=0x204;eip=0x00103e; 	T(XOR(ax, ax));	// 2357                  xor     ax, ax ;~ 0204:103E
cs=0x204;eip=0x001040; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_2))));	// 2358                  or      ax, [bp+var_2] ;~ 0204:1040
cs=0x204;eip=0x001043; 	J(JZ(loc_1166d));	// 2359                  jz      short loc_1166D ;~ 0204:1043
cs=0x204;eip=0x001045; 	X(SUB(*(dw*)(raddr(ss,bp+var_4)), 0));	// 2360                  sub     [bp+var_4], 0 ;~ 0204:1045
cs=0x204;eip=0x001049; 	X(SBB(*(dw*)(raddr(ss,bp+var_2)), 1));	// 2361                  sbb     [bp+var_2], 1 ;~ 0204:1049
loc_1166d:
	// 4462 
cs=0x204;eip=0x00104d; 	X(PUSH(si));	// 2364                  push    si ;~ 0204:104D
cs=0x204;eip=0x00104e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 2365                  push    [bp+var_2] ;~ 0204:104E
cs=0x204;eip=0x001051; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 2366                  push    [bp+var_4] ;~ 0204:1051
cs=0x204;eip=0x001054; 	T(NOP);	// 2367                  nop ;~ 0204:1054
cs=0x204;eip=0x001055; 	X(PUSH(cs));	// 2368                  push    cs ;~ 0204:1055
cs=0x204;eip=0x001056; 	J(CALL(__dispatch_call,byte_1b0a8));	// 2369                  call    near ptr byte_1B0A8 ;~ 0204:1056
loc_11679:
	// 4463 
cs=0x204;eip=0x001059; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 2372                  mov     ax, [bp+var_2] ;~ 0204:1059
cs=0x204;eip=0x00105c; 	X(POP(si));	// 2373                  pop     si ;~ 0204:105C
cs=0x204;eip=0x00105d; 	T(LEAVE);	// 2374                  leave ;~ 0204:105D
cs=0x204;eip=0x00105e; 	J(RETN(0));	// 2375                  retn ;~ 0204:105E

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1166d: 	goto loc_1166d;
        case m2c::kloc_11679: 	goto loc_11679;
        case m2c::ksub_1163f: 	goto sub_1163f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1167f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1167f:
    _begin:
#undef var_2
#define var_2 -2
	// 2385 var_2           = word ptr -2 ;~ 0204:105F
#undef arg_0
#define arg_0 6
	// 2386 arg_0           = word ptr  6 ;~ 0204:105F
#undef arg_2
#define arg_2 8
	// 2387 arg_2           = word ptr  8 ;~ 0204:105F
cs=0x204;eip=0x00105f; 	T(INC(bp));	// 2389                  inc     bp ;~ 0204:105F
cs=0x204;eip=0x001060; 	X(PUSH(bp));	// 2390                  push    bp ;~ 0204:1060
cs=0x204;eip=0x001061; 	T(bp = sp;);	// 2391                  mov     bp, sp ;~ 0204:1061
cs=0x204;eip=0x001063; 	T(SUB(sp, 2));	// 2392                  sub     sp, 2 ;~ 0204:1063
cs=0x204;eip=0x001066; 	X(PUSH(si));	// 2393                  push    si ;~ 0204:1066
cs=0x204;eip=0x001067; 	X(PUSH(di));	// 2394                  push    di ;~ 0204:1067
cs=0x204;eip=0x001068; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_2))));	// 2395                  mov     di, [bp+arg_2] ;~ 0204:1068
cs=0x204;eip=0x00106b; 	T(ds = *(dw*)(amgraphicexe););	// 2396                  mov     ds, word ptr cs:aMgraphicExe ; "Mgraphic.exe" ;~ 0204:106B
cs=0x204;eip=0x001070; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 2));	// 2398                  cmp     [bp+arg_0], 2 ;~ 0204:1070
cs=0x204;eip=0x001074; 	J(JNZ(loc_116cb));	// 2399                  jnz     short loc_116CB ;~ 0204:1074
cs=0x204;eip=0x001076; 	X(PUSH(di));	// 2400                  push    di ;~ 0204:1076
cs=0x204;eip=0x001077; 	X(PUSH(ss));	// 2401                  push    ss ;~ 0204:1077
cs=0x204;eip=0x001078; 	T(ax = bp+var_2);	// 2402                  lea     ax, [bp+var_2] ;~ 0204:1078
cs=0x204;eip=0x00107b; 	X(PUSH(ax));	// 2403                  push    ax ;~ 0204:107B
cs=0x204;eip=0x00107c; 	T(NOP);	// 2404                  nop ;~ 0204:107C
cs=0x204;eip=0x00107d; 	X(PUSH(cs));	// 2405                  push    cs ;~ 0204:107D
cs=0x204;eip=0x00107e; 	J(CALL(__dispatch_call,byte_1af56));	// 2406                  call    near ptr byte_1AF56 ;~ 0204:107E
cs=0x204;eip=0x001081; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 2407                  push    [bp+var_2] ;~ 0204:1081
cs=0x204;eip=0x001084; 	X(PUSH(ss));	// 2408                  push    ss ;~ 0204:1084
cs=0x204;eip=0x001085; 	T(ax = bp+var_2);	// 2409                  lea     ax, [bp+var_2] ;~ 0204:1085
cs=0x204;eip=0x001088; 	X(PUSH(ax));	// 2410                  push    ax ;~ 0204:1088
cs=0x204;eip=0x001089; 	T(NOP);	// 2411                  nop ;~ 0204:1089
cs=0x204;eip=0x00108a; 	X(PUSH(cs));	// 2412                  push    cs ;~ 0204:108A
cs=0x204;eip=0x00108b; 	J(CALL(__dispatch_call,_unk_1e745));	// 2413                  call    near ptr _unk_1E745 ;~ 0204:108B
cs=0x204;eip=0x00108e; 	T(XOR(dx, dx));	// 2414                  xor     dx, dx ;~ 0204:108E
cs=0x204;eip=0x001090; 	T(si = 0x3AA4;);	// 2415                  mov     si, 3AA4h ;~ 0204:1090
cs=0x204;eip=0x001093; 	J(JMP(loc_116c6));	// 2416                  jmp     short loc_116C6 ;~ 0204:1093
loc_116b5:
	// 4464 
cs=0x204;eip=0x001095; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 2420                  mov     ax, [si] ;~ 0204:1095
cs=0x204;eip=0x001097; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_2))));	// 2421                  cmp     ax, [bp+var_2] ;~ 0204:1097
cs=0x204;eip=0x00109a; 	J(JNZ(loc_116c2));	// 2422                  jnz     short loc_116C2 ;~ 0204:109A
cs=0x204;eip=0x00109c; 	X(PUSH(di));	// 2423                  push    di ;~ 0204:109C
cs=0x204;eip=0x00109d; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ds,si+2))));	// 2424                  call    dword ptr [si+2] ;~ 0204:109D
cs=0x204;eip=0x0010a0; 	J(JMP(loc_116ce));	// 2425                  jmp     short loc_116CE ;~ 0204:10A0
loc_116c2:
	// 4465 
cs=0x204;eip=0x0010a2; 	T(INC(dx));	// 2429                  inc     dx ;~ 0204:10A2
cs=0x204;eip=0x0010a3; 	T(ADD(si, 6));	// 2430                  add     si, 6 ;~ 0204:10A3
loc_116c6:
	// 4466 
cs=0x204;eip=0x0010a6; 	T(CMP(dx, 0x40));	// 2433                  cmp     dx, 40h ; '@' ;~ 0204:10A6
cs=0x204;eip=0x0010a9; 	J(JL(loc_116b5));	// 2434                  jl      short loc_116B5 ;~ 0204:10A9
loc_116cb:
	// 4467 
cs=0x204;eip=0x0010ab; 	T(ax = 1;);	// 2437                  mov     ax, 1 ;~ 0204:10AB
loc_116ce:
	// 4468 
cs=0x204;eip=0x0010ae; 	X(POP(di));	// 2440                  pop     di ;~ 0204:10AE
cs=0x204;eip=0x0010af; 	X(POP(si));	// 2441                  pop     si ;~ 0204:10AF
cs=0x204;eip=0x0010b0; 	T(LEAVE);	// 2442                  leave ;~ 0204:10B0
cs=0x204;eip=0x0010b1; 	T(DEC(bp));	// 2443                  dec     bp ;~ 0204:10B1
cs=0x204;eip=0x0010b2; 	J(RETF(4));	// 2444                  retf    4 ;~ 0204:10B2

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_116b5: 	goto loc_116b5;
        case m2c::kloc_116c2: 	goto loc_116c2;
        case m2c::kloc_116c6: 	goto loc_116c6;
        case m2c::kloc_116cb: 	goto loc_116cb;
        case m2c::kloc_116ce: 	goto loc_116ce;
        case m2c::ksub_1167f: 	goto sub_1167f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_116d5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_116d5:
    _begin:
#undef arg_0
#define arg_0 4
	// 2455 arg_0           = word ptr  4 ;~ 0204:10B5
cs=0x204;eip=0x0010b5; 	X(PUSH(bp));	// 2457                  push    bp ;~ 0204:10B5
cs=0x204;eip=0x0010b6; 	T(bp = sp;);	// 2458                  mov     bp, sp ;~ 0204:10B6
cs=0x204;eip=0x0010b8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 2459                  mov     ax, [bp+arg_0] ;~ 0204:10B8
cs=0x204;eip=0x0010bb; 	T(TEST(ax, 0x100));	// 2460                  test    ax, 100h ;~ 0204:10BB
cs=0x204;eip=0x0010be; 	J(JZ(loc_116e5));	// 2461                  jz      short loc_116E5 ;~ 0204:10BE
cs=0x204;eip=0x0010c0; 	T(TEST(ax, 2));	// 2462                  test    ax, 2 ;~ 0204:10C0
cs=0x204;eip=0x0010c3; 	J(JZ(loc_116ef));	// 2463                  jz      short loc_116EF ;~ 0204:10C3
loc_116e5:
	// 4469 
cs=0x204;eip=0x0010c5; 	T(TEST(ax, 0x1000));	// 2466                  test    ax, 1000h ;~ 0204:10C5
cs=0x204;eip=0x0010c8; 	J(JZ(loc_116f8));	// 2467                  jz      short loc_116F8 ;~ 0204:10C8
cs=0x204;eip=0x0010ca; 	T(TEST(ax, 0x4000));	// 2468                  test    ax, 4000h ;~ 0204:10CA
cs=0x204;eip=0x0010cd; 	J(JZ(loc_116f8));	// 2469                  jz      short loc_116F8 ;~ 0204:10CD
loc_116ef:
	// 4470 
cs=0x204;eip=0x0010cf; 	T(TEST(ax, 0x80));	// 2472                  test    ax, 80h ;~ 0204:10CF
cs=0x204;eip=0x0010d2; 	J(JNZ(loc_116f8));	// 2473                  jnz     short loc_116F8 ;~ 0204:10D2
cs=0x204;eip=0x0010d4; 	T(XOR(ax, ax));	// 2474                  xor     ax, ax ;~ 0204:10D4
cs=0x204;eip=0x0010d6; 	J(JMP(loc_116fb));	// 2475                  jmp     short loc_116FB ;~ 0204:10D6
loc_116f8:
	// 4471 
cs=0x204;eip=0x0010d8; 	T(ax = 1;);	// 2480                  mov     ax, 1 ;~ 0204:10D8
loc_116fb:
	// 4472 
cs=0x204;eip=0x0010db; 	X(POP(bp));	// 2483                  pop     bp ;~ 0204:10DB
cs=0x204;eip=0x0010dc; 	J(RETN(0));	// 2484                  retn ;~ 0204:10DC

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_116e5: 	goto loc_116e5;
        case m2c::kloc_116ef: 	goto loc_116ef;
        case m2c::kloc_116f8: 	goto loc_116f8;
        case m2c::kloc_116fb: 	goto loc_116fb;
        case m2c::ksub_116d5: 	goto sub_116d5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg001_10dd_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg001_10dd_proc:
    _begin:
cs=0x204;eip=0x0010dd; 	X(PUSH(bp));	// 2488                  push    bp ;~ 0204:10DD
cs=0x204;eip=0x0010de; 	T(bp = sp;);	// 2489                  mov     bp, sp ;~ 0204:10DE
cs=0x204;eip=0x0010e0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+4))));	// 2490                  mov     ax, [bp+4] ;~ 0204:10E0
cs=0x204;eip=0x0010e3; 	T(TEST(ax, 0));	// 2491                  test    ax, 0 ;~ 0204:10E3
cs=0x204;eip=0x0010e6; 	J(JZ(loc_1170d));	// 2492                  jz      short loc_1170D ;~ 0204:10E6
cs=0x204;eip=0x0010e8; 	T(dx = 6;);	// 2493                  mov     dx, 6 ;~ 0204:10E8
cs=0x204;eip=0x0010eb; 	J(JMP(loc_11719));	// 2494                  jmp     short loc_11719 ;~ 0204:10EB
loc_1170d:
	// 4473 
cs=0x204;eip=0x0010ed; 	T(TEST(ax, 0x100));	// 2498                  test    ax, 100h ;~ 0204:10ED
cs=0x204;eip=0x0010f0; 	J(JZ(loc_11716));	// 2499                  jz      short loc_11716 ;~ 0204:10F0
cs=0x204;eip=0x0010f2; 	T(XOR(dx, dx));	// 2500                  xor     dx, dx ;~ 0204:10F2
cs=0x204;eip=0x0010f4; 	J(JMP(loc_11719));	// 2501                  jmp     short loc_11719 ;~ 0204:10F4
loc_11716:
	// 4474 
cs=0x204;eip=0x0010f6; 	T(dx = 2;);	// 2505                  mov     dx, 2 ;~ 0204:10F6
loc_11719:
	// 4475 
cs=0x204;eip=0x0010f9; 	T(ax = dx;);	// 2509                  mov     ax, dx ;~ 0204:10F9
cs=0x204;eip=0x0010fb; 	X(POP(bp));	// 2510                  pop     bp ;~ 0204:10FB
cs=0x204;eip=0x0010fc; 	J(RETN(0));	// 2511                  retn ;~ 0204:10FC

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_1170d: 	goto loc_1170d;
        case m2c::kloc_11716: 	goto loc_11716;
        case m2c::kloc_11719: 	goto loc_11719;
        case m2c::kseg001_10dd_proc: 	goto seg001_10dd_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1171d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1171d:
    _begin:
#undef arg_0
#define arg_0 4
	// 2519 arg_0           = word ptr  4 ;~ 0204:10FD
#undef arg_2
#define arg_2 6
	// 2520 arg_2           = word ptr  6 ;~ 0204:10FD
#undef arg_4
#define arg_4 8
	// 2521 arg_4           = word ptr  8 ;~ 0204:10FD
cs=0x204;eip=0x0010fd; 	X(PUSH(bp));	// 2523                  push    bp ;~ 0204:10FD
cs=0x204;eip=0x0010fe; 	T(bp = sp;);	// 2524                  mov     bp, sp ;~ 0204:10FE
cs=0x204;eip=0x001100; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 2525                  push    [bp+arg_4] ;~ 0204:1100
cs=0x204;eip=0x001103; 	X(PUSH(0));	// 2526                  push    0 ;~ 0204:1103
cs=0x204;eip=0x001105; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 2527                  push    [bp+arg_2] ;~ 0204:1105
cs=0x204;eip=0x001108; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 2528                  push    [bp+arg_0] ;~ 0204:1108
cs=0x204;eip=0x00110b; 	T(NOP);	// 2529                  nop ;~ 0204:110B
cs=0x204;eip=0x00110c; 	X(PUSH(cs));	// 2530                  push    cs ;~ 0204:110C
cs=0x204;eip=0x00110d; 	J(CALL(__dispatch_call,byte_1b969));	// 2531                  call    near ptr byte_1B969 ;~ 0204:110D
cs=0x204;eip=0x001110; 	T(ADD(sp, 8));	// 2532                  add     sp, 8 ;~ 0204:1110
cs=0x204;eip=0x001113; 	X(POP(bp));	// 2533                  pop     bp ;~ 0204:1113
cs=0x204;eip=0x001114; 	J(RETN(0));	// 2534                  retn ;~ 0204:1114

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_1171d: 	goto sub_1171d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg001_1115_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg001_1115_proc:
    _begin:
cs=0x204;eip=0x001115; 	X(PUSH(bp));	// 2538                  push    bp ;~ 0204:1115
cs=0x204;eip=0x001116; 	T(bp = sp;);	// 2539                  mov     bp, sp ;~ 0204:1116
cs=0x204;eip=0x001118; 	T(SUB(sp, 2));	// 2540                  sub     sp, 2 ;~ 0204:1118
cs=0x204;eip=0x00111b; 	X(PUSH(di));	// 2541                  push    di ;~ 0204:111B
cs=0x204;eip=0x00111c; 	T(NOP);	// 2542                  nop ;~ 0204:111C
cs=0x204;eip=0x00111d; 	X(PUSH(cs));	// 2543                  push    cs ;~ 0204:111D
cs=0x204;eip=0x00111e; 	J(CALL(__dispatch_call,*((byte_182de)+0x668)));	// 2544                  call    near ptr byte_182DE+668h ;~ 0204:111E
cs=0x204;eip=0x001121; 	X(MOV(*(dw*)(raddr(ss,bp-2)), ax));	// 2545                  mov     [bp-2], ax ;~ 0204:1121
loc_11744:
	// 4476 
cs=0x204;eip=0x001124; 	T(CMP(*(dw*)(raddr(ss,bp+0x0A)), 0));	// 2548                  cmp     word ptr [bp+0Ah], 0 ;~ 0204:1124
cs=0x204;eip=0x001128; 	J(JC(loc_1176a));	// 2549                  jb      short loc_1176A ;~ 0204:1128
cs=0x204;eip=0x00112a; 	J(JA(loc_11753));	// 2550                  ja      short loc_11753 ;~ 0204:112A
cs=0x204;eip=0x00112c; 	T(CMP(*(dw*)(raddr(ss,bp+8)), 0x0FFFF));	// 2551                  cmp     word ptr [bp+8], 0FFFFh ;~ 0204:112C
cs=0x204;eip=0x001131; 	J(JBE(loc_1176a));	// 2552                  jbe     short loc_1176A ;~ 0204:1131
loc_11753:
	// 4477 
cs=0x204;eip=0x001133; 	X(PUSH(di));	// 2555                  push    di ;~ 0204:1133
cs=0x204;eip=0x001134; 	T(LES(di, *(dw*)(raddr(ss,bp+4))));	// 2556                  les     di, [bp+4] ;~ 0204:1134
cs=0x204;eip=0x001137; 	T(cx = 0x8000;);	// 2557                  mov     cx, 8000h ;~ 0204:1137
cs=0x204;eip=0x00113a; 	T(XOR(ax, ax));	// 2558                  xor     ax, ax ;~ 0204:113A
cs=0x204;eip=0x00113c; 	T(CLD);	// 2559                  cld ;~ 0204:113C
	// 2560                  rep stosw ;~ 0204:113D
cs=0x204;eip=0x00113d; 	X(	REP STOSW);	// 2560                  rep stosw ;~ 0204:113D
cs=0x204;eip=0x00113f; 	X(POP(di));	// 2561                  pop     di ;~ 0204:113F
cs=0x204;eip=0x001140; 	X(SUB(*(dw*)(raddr(ss,bp+8)), 0));	// 2562                  sub     word ptr [bp+8], 0 ;~ 0204:1140
cs=0x204;eip=0x001144; 	X(SBB(*(dw*)(raddr(ss,bp+0x0A)), 1));	// 2563                  sbb     word ptr [bp+0Ah], 1 ;~ 0204:1144
cs=0x204;eip=0x001148; 	J(JMP(loc_11787));	// 2564                  jmp     short loc_11787 ;~ 0204:1148
loc_1176a:
	// 4478 
cs=0x204;eip=0x00114a; 	X(PUSH(*(dw*)(raddr(ss,bp+8))));	// 2569                  push    word ptr [bp+8] ;~ 0204:114A
cs=0x204;eip=0x00114d; 	X(PUSH(0));	// 2570                  push    0 ;~ 0204:114D
cs=0x204;eip=0x00114f; 	X(PUSH(*(dw*)(raddr(ss,bp+6))));	// 2571                  push    word ptr [bp+6] ;~ 0204:114F
cs=0x204;eip=0x001152; 	X(PUSH(*(dw*)(raddr(ss,bp+4))));	// 2572                  push    word ptr [bp+4] ;~ 0204:1152
cs=0x204;eip=0x001155; 	T(NOP);	// 2573                  nop ;~ 0204:1155
cs=0x204;eip=0x001156; 	X(PUSH(cs));	// 2574                  push    cs ;~ 0204:1156
cs=0x204;eip=0x001157; 	J(CALL(__dispatch_call,byte_1b969));	// 2575                  call    near ptr byte_1B969 ;~ 0204:1157
cs=0x204;eip=0x00115a; 	T(ADD(sp, 8));	// 2576                  add     sp, 8 ;~ 0204:115A
cs=0x204;eip=0x00115d; 	X(MOV(*(dw*)(raddr(ss,bp+0x0A)), 0));	// 2577                  mov     word ptr [bp+0Ah], 0 ;~ 0204:115D
cs=0x204;eip=0x001162; 	X(MOV(*(dw*)(raddr(ss,bp+8)), 0));	// 2578                  mov     word ptr [bp+8], 0 ;~ 0204:1162
loc_11787:
	// 4479 
cs=0x204;eip=0x001167; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 2581                  mov     ax, [bp+8] ;~ 0204:1167
cs=0x204;eip=0x00116a; 	T(OR(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 2582                  or      ax, [bp+0Ah] ;~ 0204:116A
cs=0x204;eip=0x00116d; 	J(JZ(loc_1179d));	// 2583                  jz      short loc_1179D ;~ 0204:116D
cs=0x204;eip=0x00116f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 2584                  mov     ax, [bp+6] ;~ 0204:116F
cs=0x204;eip=0x001172; 	T(ADD(ax, *(dw*)(raddr(ss,bp-2))));	// 2585                  add     ax, [bp-2] ;~ 0204:1172
cs=0x204;eip=0x001175; 	X(MOV(*(dw*)(raddr(ss,bp+6)), ax));	// 2586                  mov     [bp+6], ax ;~ 0204:1175
cs=0x204;eip=0x001178; 	X(MOV(*(dw*)(raddr(ss,bp+4)), 0));	// 2587                  mov     word ptr [bp+4], 0 ;~ 0204:1178
loc_1179d:
	// 4480 
cs=0x204;eip=0x00117d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 2590                  mov     ax, [bp+8] ;~ 0204:117D
cs=0x204;eip=0x001180; 	T(OR(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 2591                  or      ax, [bp+0Ah] ;~ 0204:1180
cs=0x204;eip=0x001183; 	J(JNZ(loc_11744));	// 2592                  jnz     short loc_11744 ;~ 0204:1183
cs=0x204;eip=0x001185; 	X(POP(di));	// 2593                  pop     di ;~ 0204:1185
cs=0x204;eip=0x001186; 	T(LEAVE);	// 2594                  leave ;~ 0204:1186
cs=0x204;eip=0x001187; 	J(RETN(0));	// 2595                  retn ;~ 0204:1187
ret_204_1188:
	// 4481 
cs=0x204;eip=0x001188; 	X(PUSH(bp));	// 2597                  push    bp ;~ 0204:1188
cs=0x204;eip=0x001189; 	T(bp = sp;);	// 2598                  mov     bp, sp ;~ 0204:1189
cs=0x204;eip=0x00118b; 	X(PUSH(si));	// 2599                  push    si ;~ 0204:118B
cs=0x204;eip=0x00118c; 	X(PUSH(di));	// 2600                  push    di ;~ 0204:118C
cs=0x204;eip=0x00118d; 	T(NOP);	// 2601                  nop ;~ 0204:118D
cs=0x204;eip=0x00118e; 	X(PUSH(cs));	// 2602                  push    cs ;~ 0204:118E
cs=0x204;eip=0x00118f; 	J(CALL(__dispatch_call,*((byte_182de)+0x668)));	// 2603                  call    near ptr byte_182DE+668h ;~ 0204:118F
cs=0x204;eip=0x001192; 	T(dx = ax;);	// 2604                  mov     dx, ax ;~ 0204:1192
loc_117b4:
	// 4482 
cs=0x204;eip=0x001194; 	T(CMP(*(dw*)(raddr(ss,bp+0x0E)), 0));	// 2607                  cmp     word ptr [bp+0Eh], 0 ;~ 0204:1194
cs=0x204;eip=0x001198; 	J(JC(loc_117df));	// 2608                  jb      short loc_117DF ;~ 0204:1198
cs=0x204;eip=0x00119a; 	J(JA(loc_117c3));	// 2609                  ja      short loc_117C3 ;~ 0204:119A
cs=0x204;eip=0x00119c; 	T(CMP(*(dw*)(raddr(ss,bp+0x0C)), 0x0FFFF));	// 2610                  cmp     word ptr [bp+0Ch], 0FFFFh ;~ 0204:119C
cs=0x204;eip=0x0011a1; 	J(JBE(loc_117df));	// 2611                  jbe     short loc_117DF ;~ 0204:11A1
loc_117c3:
	// 4483 
cs=0x204;eip=0x0011a3; 	X(PUSH(ds));	// 2614                  push    ds ;~ 0204:11A3
cs=0x204;eip=0x0011a4; 	X(PUSH(di));	// 2615                  push    di ;~ 0204:11A4
cs=0x204;eip=0x0011a5; 	X(PUSH(si));	// 2616                  push    si ;~ 0204:11A5
cs=0x204;eip=0x0011a6; 	T(cx = 0x8000;);	// 2617                  mov     cx, 8000h ;~ 0204:11A6
cs=0x204;eip=0x0011a9; 	T(LES(di, *(dw*)(raddr(ss,bp+4))));	// 2618                  les     di, [bp+4] ;~ 0204:11A9
cs=0x204;eip=0x0011ac; 	T(LDS(si, *(dw*)(raddr(ss,bp+8))));	// 2619                  lds     si, [bp+8] ;~ 0204:11AC
cs=0x204;eip=0x0011af; 	T(CLD);	// 2621                  cld ;~ 0204:11AF
	// 2622                  rep movsw ;~ 0204:11B0
cs=0x204;eip=0x0011b0; 	X(	REP MOVSW);	// 2622                  rep movsw ;~ 0204:11B0
cs=0x204;eip=0x0011b2; 	X(POP(si));	// 2623                  pop     si ;~ 0204:11B2
cs=0x204;eip=0x0011b3; 	X(POP(di));	// 2624                  pop     di ;~ 0204:11B3
cs=0x204;eip=0x0011b4; 	X(POP(ds));	// 2625                  pop     ds ;~ 0204:11B4
cs=0x204;eip=0x0011b5; 	X(SUB(*(dw*)(raddr(ss,bp+0x0C)), 0));	// 2626                  sub     word ptr [bp+0Ch], 0 ;~ 0204:11B5
cs=0x204;eip=0x0011b9; 	X(SBB(*(dw*)(raddr(ss,bp+0x0E)), 1));	// 2627                  sbb     word ptr [bp+0Eh], 1 ;~ 0204:11B9
cs=0x204;eip=0x0011bd; 	J(JMP(loc_117f8));	// 2628                  jmp     short loc_117F8 ;~ 0204:11BD
loc_117df:
	// 4484 
cs=0x204;eip=0x0011bf; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0C))));	// 2633                  push    word ptr [bp+0Ch] ;~ 0204:11BF
cs=0x204;eip=0x0011c2; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0A))));	// 2634                  push    word ptr [bp+0Ah] ;~ 0204:11C2
cs=0x204;eip=0x0011c5; 	X(PUSH(*(dw*)(raddr(ss,bp+8))));	// 2635                  push    word ptr [bp+8] ;~ 0204:11C5
cs=0x204;eip=0x0011c8; 	X(PUSH(*(dw*)(raddr(ss,bp+6))));	// 2636                  push    word ptr [bp+6] ;~ 0204:11C8
cs=0x204;eip=0x0011cb; 	X(PUSH(*(dw*)(raddr(ss,bp+4))));	// 2637                  push    word ptr [bp+4] ;~ 0204:11CB
cs=0x204;eip=0x0011ce; 	T(NOP);	// 2638                  nop ;~ 0204:11CE
cs=0x204;eip=0x0011cf; 	X(PUSH(cs));	// 2639                  push    cs ;~ 0204:11CF
cs=0x204;eip=0x0011d0; 	J(CALL(__dispatch_call,byte_1b921));	// 2640                  call    near ptr byte_1B921 ;~ 0204:11D0
cs=0x204;eip=0x0011d3; 	T(ADD(sp, 0x0A));	// 2641                  add     sp, 0Ah ;~ 0204:11D3
cs=0x204;eip=0x0011d6; 	J(JMP(loc_11814));	// 2642                  jmp     short loc_11814 ;~ 0204:11D6
loc_117f8:
	// 4485 
cs=0x204;eip=0x0011d8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 2646                  mov     ax, [bp+6] ;~ 0204:11D8
cs=0x204;eip=0x0011db; 	T(ADD(ax, dx));	// 2647                  add     ax, dx ;~ 0204:11DB
cs=0x204;eip=0x0011dd; 	X(MOV(*(dw*)(raddr(ss,bp+6)), ax));	// 2648                  mov     [bp+6], ax ;~ 0204:11DD
cs=0x204;eip=0x0011e0; 	X(MOV(*(dw*)(raddr(ss,bp+4)), 0));	// 2649                  mov     word ptr [bp+4], 0 ;~ 0204:11E0
cs=0x204;eip=0x0011e5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 2650                  mov     ax, [bp+0Ah] ;~ 0204:11E5
cs=0x204;eip=0x0011e8; 	T(ADD(ax, dx));	// 2651                  add     ax, dx ;~ 0204:11E8
cs=0x204;eip=0x0011ea; 	X(MOV(*(dw*)(raddr(ss,bp+0x0A)), ax));	// 2652                  mov     [bp+0Ah], ax ;~ 0204:11EA
cs=0x204;eip=0x0011ed; 	X(MOV(*(dw*)(raddr(ss,bp+8)), 0));	// 2653                  mov     word ptr [bp+8], 0 ;~ 0204:11ED
cs=0x204;eip=0x0011f2; 	J(JMP(loc_117b4));	// 2654                  jmp     short loc_117B4 ;~ 0204:11F2
loc_11814:
	// 4486 
cs=0x204;eip=0x0011f4; 	X(POP(di));	// 2658                  pop     di ;~ 0204:11F4
cs=0x204;eip=0x0011f5; 	X(POP(si));	// 2659                  pop     si ;~ 0204:11F5
cs=0x204;eip=0x0011f6; 	X(POP(bp));	// 2660                  pop     bp ;~ 0204:11F6
cs=0x204;eip=0x0011f7; 	J(RETN(0));	// 2661                  retn ;~ 0204:11F7
ret_204_11f8:
	// 4487 
cs=0x204;eip=0x0011f8; 	T(ax = 0x1CE4;);	// 2663                  mov     ax, 1CE4h ;~ 0204:11F8
cs=0x204;eip=0x0011fb; 	T(INC(bp));	// 2664                  inc     bp ;~ 0204:11FB
cs=0x204;eip=0x0011fc; 	X(PUSH(bp));	// 2665                  push    bp ;~ 0204:11FC
cs=0x204;eip=0x0011fd; 	T(bp = sp;);	// 2666                  mov     bp, sp ;~ 0204:11FD
cs=0x204;eip=0x0011ff; 	X(PUSH(ds));	// 2667                  push    ds ;~ 0204:11FF
cs=0x204;eip=0x001200; 	T(ds = ax;);	// 2668                  mov     ds, ax ;~ 0204:1200
cs=0x204;eip=0x001202; 	T(SUB(sp, 6));	// 2670                  sub     sp, 6 ;~ 0204:1202
cs=0x204;eip=0x001205; 	X(PUSH(si));	// 2671                  push    si ;~ 0204:1205
cs=0x204;eip=0x001206; 	T(MOV(si, *(dw*)(raddr(ss,bp+0x0A))));	// 2672                  mov     si, [bp+0Ah] ;~ 0204:1206
cs=0x204;eip=0x001209; 	X(PUSH(si));	// 2673                  push    si ;~ 0204:1209
cs=0x204;eip=0x00120a; 	J(CALL(sub_116d5,0));	// 2674                  call    sub_116D5 ;~ 0204:120A
cs=0x204;eip=0x00120d; 	X(POP(cx));	// 2675                  pop     cx ;~ 0204:120D
cs=0x204;eip=0x00120e; 	X(POP(es));	// 2676                  pop     es ;~ 0204:120E
loc_118b3:
	// 4488 
cs=0x204;eip=0x001293; 	T(MOV(ax, *(dw*)(raddr(ss,bp-4))));	// 2813                  mov     ax, [bp-4] ;~ 0204:1293
cs=0x204;eip=0x001296; 	J(JMP(loc_118fa));	// 2814                  jmp     short loc_118FA ;~ 0204:1296
ret_204_12b8:
	// 4489 
cs=0x204;eip=0x0012b8; 	X(PUSH(*(dw*)(raddr(ss,bp+6))));	// 2849                  push    word ptr [bp+6] ;~ 0204:12B8
cs=0x204;eip=0x0012bb; 	X(PUSH(*(dw*)(raddr(ss,bp-4))));	// 2850                  push    word ptr [bp-4] ;~ 0204:12BB
cs=0x204;eip=0x0012be; 	X(PUSH(0));	// 2851                  push    0 ;~ 0204:12BE
cs=0x204;eip=0x0012c0; 	J(CALL(sub_1171d,0));	// 2852                  call    sub_1171D ;~ 0204:12C0
cs=0x204;eip=0x0012c3; 	T(ADD(sp, 6));	// 2853                  add     sp, 6 ;~ 0204:12C3
cs=0x204;eip=0x0012c6; 	X(PUSH(*(dw*)(raddr(ss,bp-4))));	// 2854                  push    word ptr [bp-4] ;~ 0204:12C6
cs=0x204;eip=0x0012c9; 	J(CALL(sub_11520,0));	// 2855                  call    sub_11520 ;~ 0204:12C9
cs=0x204;eip=0x0012cc; 	X(POP(cx));	// 2856                  pop     cx ;~ 0204:12CC
cs=0x204;eip=0x0012cd; 	T(MOV(es, *(dw*)(raddr(ss,bp-4))));	// 2857                  mov     es, word ptr [bp-4] ;~ 0204:12CD
cs=0x204;eip=0x0012d0; 	X(MOV(*(raddr(es,0)), 0));	// 2858                  mov     byte ptr es:0, 0 ;~ 0204:12D0
cs=0x204;eip=0x0012d6; 	J(JMP(loc_118b3));	// 2859                  jmp     short loc_118B3 ;~ 0204:12D6
ret_204_12d8:
	// 4490 
cs=0x204;eip=0x0012d8; 	T(XOR(ax, ax));	// 2861                  xor     ax, ax ;~ 0204:12D8
loc_118fa:
	// 4491 
cs=0x204;eip=0x0012da; 	X(POP(si));	// 2864                  pop     si ;~ 0204:12DA
cs=0x204;eip=0x0012db; 	T(sp = bp-2);	// 2865                  lea     sp, [bp-2] ;~ 0204:12DB
cs=0x204;eip=0x0012de; 	X(POP(ds));	// 2866                  pop     ds ;~ 0204:12DE
cs=0x204;eip=0x0012df; 	X(POP(bp));	// 2868                  pop     bp ;~ 0204:12DF
cs=0x204;eip=0x0012e0; 	T(DEC(bp));	// 2869                  dec     bp ;~ 0204:12E0
cs=0x204;eip=0x0012e1; 	J(RETF(6));	// 2870                  retf    6 ;~ 0204:12E1
ret_204_12e4:
	// 4492 
cs=0x204;eip=0x0012e4; 	T(ax = 0x1CE4;);	// 2872                  mov     ax, 1CE4h ;~ 0204:12E4
cs=0x204;eip=0x0012e7; 	T(INC(bp));	// 2873                  inc     bp ;~ 0204:12E7
cs=0x204;eip=0x0012e8; 	X(PUSH(bp));	// 2874                  push    bp ;~ 0204:12E8
cs=0x204;eip=0x0012e9; 	T(bp = sp;);	// 2875                  mov     bp, sp ;~ 0204:12E9
cs=0x204;eip=0x0012eb; 	X(PUSH(ds));	// 2876                  push    ds ;~ 0204:12EB
cs=0x204;eip=0x0012ec; 	T(ds = ax;);	// 2877                  mov     ds, ax ;~ 0204:12EC
cs=0x204;eip=0x0012ee; 	T(SUB(sp, 2));	// 2879                  sub     sp, 2 ;~ 0204:12EE
cs=0x204;eip=0x0012f1; 	X(PUSH(si));	// 2880                  push    si ;~ 0204:12F1
cs=0x204;eip=0x0012f2; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 2881                  mov     si, [bp+6] ;~ 0204:12F2
cs=0x204;eip=0x0012f5; 	X(PUSH(si));	// 2882                  push    si ;~ 0204:12F5
cs=0x204;eip=0x0012f6; 	X(PUSH(ss));	// 2883                  push    ss ;~ 0204:12F6
cs=0x204;eip=0x0012f7; 	T(ax = bp-4);	// 2884                  lea     ax, [bp-4] ;~ 0204:12F7
cs=0x204;eip=0x0012fa; 	X(PUSH(ax));	// 2885                  push    ax ;~ 0204:12FA
cs=0x204;eip=0x0012fb; 	T(NOP);	// 2886                  nop ;~ 0204:12FB
cs=0x204;eip=0x0012fc; 	X(PUSH(cs));	// 2887                  push    cs ;~ 0204:12FC
cs=0x204;eip=0x0012fd; 	J(CALL(__dispatch_call,byte_1aecc));	// 2888                  call    near ptr byte_1AECC ;~ 0204:12FD
cs=0x204;eip=0x001300; 	T(OR(ax, ax));	// 2889                  or      ax, ax ;~ 0204:1300
cs=0x204;eip=0x001302; 	J(JNZ(loc_1195b));	// 2890                  jnz     short loc_1195B ;~ 0204:1302
cs=0x204;eip=0x001304; 	X(PUSH(si));	// 2891                  push    si ;~ 0204:1304
cs=0x204;eip=0x001305; 	J(CALL(sub_115ee,0));	// 2892                  call    sub_115EE ;~ 0204:1305
cs=0x204;eip=0x001308; 	X(POP(cx));	// 2893                  pop     cx ;~ 0204:1308
cs=0x204;eip=0x001309; 	T(OR(ax, ax));	// 2894                  or      ax, ax ;~ 0204:1309
cs=0x204;eip=0x00130b; 	J(JNZ(loc_1195b));	// 2895                  jnz     short loc_1195B ;~ 0204:130B
cs=0x204;eip=0x00130d; 	T(MOV(ax, *(dw*)(raddr(ss,bp-4))));	// 2896                  mov     ax, [bp-4] ;~ 0204:130D
cs=0x204;eip=0x001310; 	T(AND(ax, 0x3000));	// 2897                  and     ax, 3000h ;~ 0204:1310
cs=0x204;eip=0x001313; 	T(CMP(ax, 0x3000));	// 2898                  cmp     ax, 3000h ;~ 0204:1313
cs=0x204;eip=0x001316; 	J(JZ(loc_1194d));	// 2899                  jz      short loc_1194D ;~ 0204:1316
cs=0x204;eip=0x001318; 	T(TEST(*(dw*)(raddr(ss,bp-4)), 0x3000));	// 2900                  test    word ptr [bp-4], 3000h ;~ 0204:1318
cs=0x204;eip=0x00131d; 	J(JZ(loc_1194d));	// 2901                  jz      short loc_1194D ;~ 0204:131D
cs=0x204;eip=0x00131f; 	T(TEST(*(dw*)(raddr(ss,bp-4)), 7));	// 2902                  test    word ptr [bp-4], 7 ;~ 0204:131F
cs=0x204;eip=0x001324; 	J(JNZ(loc_1194d));	// 2903                  jnz     short loc_1194D ;~ 0204:1324
cs=0x204;eip=0x001326; 	X(PUSH(si));	// 2904                  push    si ;~ 0204:1326
cs=0x204;eip=0x001327; 	X(PUSH(2));	// 2905                  push    2 ;~ 0204:1327
cs=0x204;eip=0x001329; 	X(PUSH(cs));	// 2906                  push    cs ;~ 0204:1329
cs=0x204;eip=0x00132a; 	J(CALL(sub_1167f,0));	// 2907                  call    near ptr sub_1167F ;~ 0204:132A
loc_1194d:
	// 4493 
cs=0x204;eip=0x00132d; 	X(PUSH(si));	// 2911                  push    si ;~ 0204:132D
cs=0x204;eip=0x00132e; 	T(NOP);	// 2912                  nop ;~ 0204:132E
cs=0x204;eip=0x00132f; 	X(PUSH(cs));	// 2913                  push    cs ;~ 0204:132F
cs=0x204;eip=0x001330; 	J(CALL(__dispatch_call,byte_1a4e7));	// 2914                  call    near ptr byte_1A4E7 ;~ 0204:1330
cs=0x204;eip=0x001333; 	T(OR(ax, ax));	// 2915                  or      ax, ax ;~ 0204:1333
cs=0x204;eip=0x001335; 	J(JNZ(loc_1195b));	// 2916                  jnz     short loc_1195B ;~ 0204:1335
cs=0x204;eip=0x001337; 	T(XOR(ax, ax));	// 2917                  xor     ax, ax ;~ 0204:1337
cs=0x204;eip=0x001339; 	J(JMP(loc_1195d));	// 2918                  jmp     short loc_1195D ;~ 0204:1339
loc_1195b:
	// 4494 
cs=0x204;eip=0x00133b; 	T(ax = si;);	// 2923                  mov     ax, si ;~ 0204:133B
loc_1195d:
	// 4495 
cs=0x204;eip=0x00133d; 	X(POP(si));	// 2926                  pop     si ;~ 0204:133D
cs=0x204;eip=0x00133e; 	X(POP(cx));	// 2927                  pop     cx ;~ 0204:133E
cs=0x204;eip=0x00133f; 	X(POP(ds));	// 2928                  pop     ds ;~ 0204:133F
cs=0x204;eip=0x001340; 	X(POP(bp));	// 2930                  pop     bp ;~ 0204:1340
cs=0x204;eip=0x001341; 	T(DEC(bp));	// 2931                  dec     bp ;~ 0204:1341
cs=0x204;eip=0x001342; 	J(RETF(2));	// 2932                  retf    2 ;~ 0204:1342
ret_204_1345:
	// 4496 
cs=0x204;eip=0x001345; 	T(ax = 0x1CE4;);	// 2934                  mov     ax, 1CE4h ;~ 0204:1345
cs=0x204;eip=0x001348; 	T(INC(bp));	// 2935                  inc     bp ;~ 0204:1348
cs=0x204;eip=0x001349; 	X(PUSH(bp));	// 2936                  push    bp ;~ 0204:1349
cs=0x204;eip=0x00134a; 	T(bp = sp;);	// 2937                  mov     bp, sp ;~ 0204:134A
cs=0x204;eip=0x00134c; 	X(PUSH(ds));	// 2938                  push    ds ;~ 0204:134C
cs=0x204;eip=0x00134d; 	T(ds = ax;);	// 2939                  mov     ds, ax ;~ 0204:134D
cs=0x204;eip=0x00134f; 	T(SUB(sp, 2));	// 2941                  sub     sp, 2 ;~ 0204:134F
cs=0x204;eip=0x001352; 	X(PUSH(si));	// 2942                  push    si ;~ 0204:1352
cs=0x204;eip=0x001353; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 2943                  mov     si, [bp+6] ;~ 0204:1353
cs=0x204;eip=0x001356; 	X(PUSH(si));	// 2944                  push    si ;~ 0204:1356
cs=0x204;eip=0x001357; 	X(PUSH(ss));	// 2945                  push    ss ;~ 0204:1357
cs=0x204;eip=0x001358; 	T(ax = bp-4);	// 2946                  lea     ax, [bp-4] ;~ 0204:1358
cs=0x204;eip=0x00135b; 	X(PUSH(ax));	// 2947                  push    ax ;~ 0204:135B
cs=0x204;eip=0x00135c; 	T(NOP);	// 2948                  nop ;~ 0204:135C
cs=0x204;eip=0x00135d; 	X(PUSH(cs));	// 2949                  push    cs ;~ 0204:135D
cs=0x204;eip=0x00135e; 	J(CALL(__dispatch_call,byte_1aecc));	// 2950                  call    near ptr byte_1AECC ;~ 0204:135E
cs=0x204;eip=0x001361; 	T(OR(ax, ax));	// 2951                  or      ax, ax ;~ 0204:1361
cs=0x204;eip=0x001363; 	J(JZ(loc_11989));	// 2952                  jz      short loc_11989 ;~ 0204:1363
loc_11985:
	// 4497 
cs=0x204;eip=0x001365; 	T(XOR(dx, dx));	// 2955                  xor     dx, dx ;~ 0204:1365
cs=0x204;eip=0x001367; 	J(JMP(loc_119c3));	// 2956                  jmp     short loc_119C3 ;~ 0204:1367
loc_11989:
	// 4498 
cs=0x204;eip=0x001369; 	T(TEST(*(dw*)(raddr(ss,bp-4)), 0x700));	// 2960                  test    word ptr [bp-4], 700h ;~ 0204:1369
cs=0x204;eip=0x00136e; 	J(JNZ(loc_119bc));	// 2961                  jnz     short loc_119BC ;~ 0204:136E
cs=0x204;eip=0x001370; 	X(PUSH(si));	// 2962                  push    si ;~ 0204:1370
cs=0x204;eip=0x001371; 	J(CALL(sub_11520,0));	// 2963                  call    sub_11520 ;~ 0204:1371
cs=0x204;eip=0x001374; 	X(POP(cx));	// 2964                  pop     cx ;~ 0204:1374
cs=0x204;eip=0x001375; 	T(OR(ax, ax));	// 2965                  or      ax, ax ;~ 0204:1375
cs=0x204;eip=0x001377; 	J(JZ(loc_119a1));	// 2966                  jz      short loc_119A1 ;~ 0204:1377
cs=0x204;eip=0x001379; 	T(es = si;);	// 2967                  mov     es, si ;~ 0204:1379
cs=0x204;eip=0x00137b; 	X(MOV(*(raddr(es,0)), 0));	// 2968                  mov     byte ptr es:0, 0 ;~ 0204:137B
loc_119a1:
	// 4499 
cs=0x204;eip=0x001381; 	X(PUSH(si));	// 2971                  push    si ;~ 0204:1381
cs=0x204;eip=0x001382; 	T(MOV(ax, *(dw*)(raddr(ss,bp-4))));	// 2972                  mov     ax, [bp-4] ;~ 0204:1382
cs=0x204;eip=0x001385; 	T(AND(ax, 0x0FFF8));	// 2973                  and     ax, 0FFF8h ;~ 0204:1385
cs=0x204;eip=0x001388; 	T(OR(ax, 2));	// 2974                  or      ax, 2 ;~ 0204:1388
cs=0x204;eip=0x00138b; 	X(PUSH(ax));	// 2975                  push    ax ;~ 0204:138B
cs=0x204;eip=0x00138c; 	T(NOP);	// 2976                  nop ;~ 0204:138C
cs=0x204;eip=0x00138d; 	X(PUSH(cs));	// 2977                  push    cs ;~ 0204:138D
cs=0x204;eip=0x00138e; 	J(CALL(__dispatch_call,byte_1a81b));	// 2978                  call    near ptr byte_1A81B ;~ 0204:138E
cs=0x204;eip=0x001391; 	T(OR(ax, ax));	// 2979                  or      ax, ax ;~ 0204:1391
cs=0x204;eip=0x001393; 	J(JZ(loc_119bc));	// 2980                  jz      short loc_119BC ;~ 0204:1393
cs=0x204;eip=0x001395; 	X(PUSH(si));	// 2981                  push    si ;~ 0204:1395
cs=0x204;eip=0x001396; 	J(CALL(sub_1157f,0));	// 2982                  call    sub_1157F ;~ 0204:1396
cs=0x204;eip=0x001399; 	X(POP(cx));	// 2983                  pop     cx ;~ 0204:1399
cs=0x204;eip=0x00139a; 	J(JMP(loc_11985));	// 2984                  jmp     short loc_11985 ;~ 0204:139A
loc_119bc:
	// 4500 
cs=0x204;eip=0x00139c; 	X(PUSH(si));	// 2989                  push    si ;~ 0204:139C
cs=0x204;eip=0x00139d; 	J(CALL(sub_11606,0));	// 2990                  call    sub_11606 ;~ 0204:139D
cs=0x204;eip=0x0013a0; 	X(POP(cx));	// 2991                  pop     cx ;~ 0204:13A0
cs=0x204;eip=0x0013a1; 	T(dx = si;);	// 2992                  mov     dx, si ;~ 0204:13A1
loc_119c3:
	// 4501 
cs=0x204;eip=0x0013a3; 	T(XOR(ax, ax));	// 2995                  xor     ax, ax ;~ 0204:13A3
cs=0x204;eip=0x0013a5; 	X(POP(si));	// 2996                  pop     si ;~ 0204:13A5
cs=0x204;eip=0x0013a6; 	X(POP(cx));	// 2997                  pop     cx ;~ 0204:13A6
cs=0x204;eip=0x0013a7; 	X(POP(ds));	// 2998                  pop     ds ;~ 0204:13A7
cs=0x204;eip=0x0013a8; 	X(POP(bp));	// 3000                  pop     bp ;~ 0204:13A8
cs=0x204;eip=0x0013a9; 	T(DEC(bp));	// 3001                  dec     bp ;~ 0204:13A9
cs=0x204;eip=0x0013aa; 	J(RETF(2));	// 3002                  retf    2 ;~ 0204:13AA
ret_204_13ad:
	// 4502 
cs=0x204;eip=0x0013ad; 	T(ax = 0x1CE4;);	// 3004                  mov     ax, 1CE4h ;~ 0204:13AD
cs=0x204;eip=0x0013b0; 	T(INC(bp));	// 3005                  inc     bp ;~ 0204:13B0
cs=0x204;eip=0x0013b1; 	X(PUSH(bp));	// 3006                  push    bp ;~ 0204:13B1
cs=0x204;eip=0x0013b2; 	T(bp = sp;);	// 3007                  mov     bp, sp ;~ 0204:13B2
cs=0x204;eip=0x0013b4; 	X(PUSH(ds));	// 3008                  push    ds ;~ 0204:13B4
cs=0x204;eip=0x0013b5; 	T(ds = ax;);	// 3009                  mov     ds, ax ;~ 0204:13B5
cs=0x204;eip=0x0013b7; 	X(PUSH(*(dw*)(raddr(ss,bp+6))));	// 3011                  push    word ptr [bp+6] ;~ 0204:13B7
cs=0x204;eip=0x0013ba; 	T(NOP);	// 3012                  nop ;~ 0204:13BA
cs=0x204;eip=0x0013bb; 	X(PUSH(cs));	// 3013                  push    cs ;~ 0204:13BB
cs=0x204;eip=0x0013bc; 	J(CALL(sub_119e5,0));	// 3014                  call    near ptr sub_119E5 ;~ 0204:13BC
cs=0x204;eip=0x0013bf; 	X(POP(ds));	// 3015                  pop     ds ;~ 0204:13BF
cs=0x204;eip=0x0013c0; 	X(POP(bp));	// 3017                  pop     bp ;~ 0204:13C0
cs=0x204;eip=0x0013c1; 	T(DEC(bp));	// 3018                  dec     bp ;~ 0204:13C1
cs=0x204;eip=0x0013c2; 	J(RETF(2));	// 3019                  retf    2 ;~ 0204:13C2

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kloc_11744: 	goto loc_11744;
        case m2c::kloc_11753: 	goto loc_11753;
        case m2c::kloc_1176a: 	goto loc_1176a;
        case m2c::kloc_11787: 	goto loc_11787;
        case m2c::kloc_1179d: 	goto loc_1179d;
        case m2c::kloc_117b4: 	goto loc_117b4;
        case m2c::kloc_117c3: 	goto loc_117c3;
        case m2c::kloc_117df: 	goto loc_117df;
        case m2c::kloc_117f8: 	goto loc_117f8;
        case m2c::kloc_11814: 	goto loc_11814;
        case m2c::kloc_118b3: 	goto loc_118b3;
        case m2c::kloc_118fa: 	goto loc_118fa;
        case m2c::kloc_1194d: 	goto loc_1194d;
        case m2c::kloc_1195b: 	goto loc_1195b;
        case m2c::kloc_1195d: 	goto loc_1195d;
        case m2c::kloc_11985: 	goto loc_11985;
        case m2c::kloc_11989: 	goto loc_11989;
        case m2c::kloc_119a1: 	goto loc_119a1;
        case m2c::kloc_119bc: 	goto loc_119bc;
        case m2c::kloc_119c3: 	goto loc_119c3;
        case m2c::kret_204_1188: 	goto ret_204_1188;
        case m2c::kret_204_11f8: 	goto ret_204_11f8;
        case m2c::kret_204_12b8: 	goto ret_204_12b8;
        case m2c::kret_204_12d8: 	goto ret_204_12d8;
        case m2c::kret_204_12e4: 	goto ret_204_12e4;
        case m2c::kret_204_1345: 	goto ret_204_1345;
        case m2c::kret_204_13ad: 	goto ret_204_13ad;
        case m2c::kseg001_1115_proc: 	goto seg001_1115_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_119e5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_119e5:
    _begin:
#undef arg_0
#define arg_0 6
	// 3027 arg_0           = word ptr  6 ;~ 0204:13C5
cs=0x204;eip=0x0013c5; 	T(ax = 0x1CE4;);	// 3029                  mov     ax, 1CE4h ;~ 0204:13C5
cs=0x204;eip=0x0013c8; 	T(INC(bp));	// 3030                  inc     bp ;~ 0204:13C8
cs=0x204;eip=0x0013c9; 	X(PUSH(bp));	// 3031                  push    bp ;~ 0204:13C9
cs=0x204;eip=0x0013ca; 	T(bp = sp;);	// 3032                  mov     bp, sp ;~ 0204:13CA
cs=0x204;eip=0x0013cc; 	X(PUSH(ds));	// 3033                  push    ds ;~ 0204:13CC
cs=0x204;eip=0x0013cd; 	T(ds = ax;);	// 3034                  mov     ds, ax ;~ 0204:13CD
cs=0x204;eip=0x0013cf; 	X(PUSH(si));	// 3036                  push    si ;~ 0204:13CF
cs=0x204;eip=0x0013d0; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 3037                  mov     si, [bp+arg_0] ;~ 0204:13D0
cs=0x204;eip=0x0013d3; 	X(PUSH(si));	// 3038                  push    si ;~ 0204:13D3
cs=0x204;eip=0x0013d4; 	J(CALL(sub_1157f,0));	// 3039                  call    sub_1157F ;~ 0204:13D4
cs=0x204;eip=0x0013d7; 	X(POP(cx));	// 3040                  pop     cx ;~ 0204:13D7
cs=0x204;eip=0x0013d8; 	X(PUSH(si));	// 3041                  push    si ;~ 0204:13D8
cs=0x204;eip=0x0013d9; 	J(CALL(sub_1163f,0));	// 3042                  call    sub_1163F ;~ 0204:13D9
cs=0x204;eip=0x0013dc; 	X(POP(cx));	// 3043                  pop     cx ;~ 0204:13DC
cs=0x204;eip=0x0013dd; 	X(POP(si));	// 3044                  pop     si ;~ 0204:13DD
cs=0x204;eip=0x0013de; 	X(POP(ds));	// 3045                  pop     ds ;~ 0204:13DE
cs=0x204;eip=0x0013df; 	X(POP(bp));	// 3047                  pop     bp ;~ 0204:13DF
cs=0x204;eip=0x0013e0; 	T(DEC(bp));	// 3048                  dec     bp ;~ 0204:13E0
cs=0x204;eip=0x0013e1; 	J(RETF(2));	// 3049                  retf    2 ;~ 0204:13E1

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::ksub_119e5: 	goto sub_119e5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg001_13e4_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg001_13e4_proc:
    _begin:
cs=0x204;eip=0x0013e4; 	T(ax = 0x1CE4;);	// 3053                  mov     ax, 1CE4h ;~ 0204:13E4
cs=0x204;eip=0x0013e7; 	T(INC(bp));	// 3054                  inc     bp ;~ 0204:13E7
cs=0x204;eip=0x0013e8; 	X(PUSH(bp));	// 3055                  push    bp ;~ 0204:13E8
cs=0x204;eip=0x0013e9; 	T(bp = sp;);	// 3056                  mov     bp, sp ;~ 0204:13E9
cs=0x204;eip=0x0013eb; 	X(PUSH(ds));	// 3057                  push    ds ;~ 0204:13EB
cs=0x204;eip=0x0013ec; 	T(ds = ax;);	// 3058                  mov     ds, ax ;~ 0204:13EC
cs=0x204;eip=0x0013ee; 	T(SUB(sp, 6));	// 3060                  sub     sp, 6 ;~ 0204:13EE
cs=0x204;eip=0x0013f1; 	X(PUSH(si));	// 3061                  push    si ;~ 0204:13F1
cs=0x204;eip=0x0013f2; 	X(PUSH(di));	// 3062                  push    di ;~ 0204:13F2
cs=0x204;eip=0x0013f3; 	T(MOV(si, *(dw*)(raddr(ss,bp+0x0C))));	// 3063                  mov     si, [bp+0Ch] ;~ 0204:13F3
cs=0x204;eip=0x0013f6; 	T(MOV(di, *(dw*)(raddr(ss,bp+6))));	// 3064                  mov     di, [bp+6] ;~ 0204:13F6
cs=0x204;eip=0x0013f9; 	X(PUSH(di));	// 3065                  push    di ;~ 0204:13F9
cs=0x204;eip=0x0013fa; 	J(CALL(sub_116d5,0));	// 3066                  call    sub_116D5 ;~ 0204:13FA
cs=0x204;eip=0x0013fd; 	X(POP(cx));	// 3067                  pop     cx ;~ 0204:13FD
cs=0x204;eip=0x0013fe; 	T(OR(ax, ax));	// 3068                  or      ax, ax ;~ 0204:13FE
cs=0x204;eip=0x001400; 	T(DEC(bp));	// 3069                  dec     bp ;~ 0204:1400

            assert(0);
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
            switch (__disp) {
                case m2c::kseg001_13e4_proc: 	goto seg001_13e4_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}


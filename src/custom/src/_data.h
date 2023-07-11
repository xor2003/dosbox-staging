
#ifndef ___DATA_H__
#define ___DATA_H__
#include "../asm.h"


#pragma pack(push, 1)
namespace m2c{
struct Memory{
db dummyf_0[6688];
db dummyf_1a20[26];
db byte_1001a; // 01a2:001a
db dummyf_1a3b[820];
db byte_1034f; // 01a2:034f
char accloakend[9]; // 01a2:0350
dw dummyf_1d79; // 01a2:0359
db dummyf_1d7b; // 01a2:035b
db dummyf_1d7c; // 01a2:035c
dw dummyf_1d7d; // 01a2:035d
dw dummyf_1d7f; // 01a2:035f
char aalloc1mb[11]; // 01a2:0361
char adosliedaboutme[25]; // 01a2:036c
char afilenamenotfou[19]; // 01a2:0385
char anotenoughmemto[28]; // 01a2:0398
char aoverlayloadfai[20]; // 01a2:03b4
char aoverrunallocme[18]; // 01a2:03c8
char acantshrinkallo[19]; // 01a2:03da
char aerrorreleasing_0[28]; // 01a2:03ed
db dummyf_1e29;
db dummyf_1e2a;
db dummyf_1e2b; // 01a2:040b
db dummyf_1e2c; // 01a2:040c
db dummyf_1e2d; // 01a2:040d
db dummyf_1e2e; // 01a2:040e
db dummyf_1e2f; // 01a2:040f
db dummyf_1e30; // 01a2:0410
char af15a[5]; // 01a2:0411
char accbincvexe[16]; // 01a2:0416
char amcvexe[8]; // 01a2:0426
char asuexe[7]; // 01a2:042e
char astartexe[10]; // 01a2:0435
char amissionsexe[13]; // 01a2:043f
char aegameexe[10]; // 01a2:044c
char aendexe[8]; // 01a2:0456
char adsexe[7]; // 01a2:045e
char amiscexe[9]; // 01a2:0465
char amgraphicexe_0[13]; // 01a2:046e
db dummyf_1e9b; // 01a2:047b
db dummyf_1e9c; // 01a2:047c
db dummyf_1e9d; // 01a2:047d
dw dummyf_1e9e; // 01a2:047e
dw dummyf_1ea0; // 01a2:0480
db dummyf_1ea2; // 01a2:0482
db dummyf_1ea3; // 01a2:0483
db dummyf_1ea4;
db dummyf_1ea5;
db dummyf_1ea6; // 01a2:0486
db dummyf_1ea7; // 01a2:0487
db dummyf_1ea8; // 01a2:0488
db dummyf_1ea9; // 01a2:0489
db dummyf_1eaa; // 01a2:048a
db dummyf_1eab;
db dummyf_1eac; // 01a2:048c
db dummyf_1ead; // 01a2:048d
db dummyf_1eae; // 01a2:048e
db dummyf_1eaf;
db dummyf_1eb0; // 01a2:0490
db dummyf_1eb1; // 01a2:0491
db dummyf_1eb2;
db dummyf_1eb3; // 01a2:0493
char a2su[5]; // 01a2:0494
db dummyf_1eb9[32]; // 01a2:0499
db dummyf_1ed9[32]; // 01a2:04b9
db dummyf_1ef9[32]; // 01a2:04d9
db dummyf_1f19;
db dummyf_1f1a;
db dummyf_1f1b;
db dummyf_1f1c;
db dummyf_1f1d;
db dummyf_1f1e;
db dummyf_1f1f;
db dummyf_1f20;
db dummyf_1f21;
db dummyf_1f22;
db dummyf_1f23;
db dummyf_1f24;
db dummyf_1f25;
db dummyf_1f26;
db dummyf_1f27;
db dummyf_1f28;
db dummyf_1f29;
db dummyf_1f2a;
db dummyf_1f2b;
db dummyf_1f2c;
db dummyf_1f2d;
db dummyf_1f2e;
db dummyf_1f2f;
db dummyf_1f30; // 01a2:0510
char a2endexe[13]; // 01a2:0511
char a2egameexe[16]; // 01a2:051e
char a2startexe[16]; // 01a2:052e
db dummyf_1f5e; // 01a2:053e
char a0_0[4]; // 01a2:053f
db dummyf_1f63[32]; // 01a2:0543
db dummyf_1f83; // 01a2:0563
db dummyf_1f84; // 01a2:0564
db dummyf_1f85; // 01a2:0565
db dummyf_1f86; // 01a2:0566
db dummyf_1f87; // 01a2:0567
db dummyf_1f88; // 01a2:0568
db dummyf_1f89; // 01a2:0569
db dummyf_1f8a; // 01a2:056a
db dummyf_1f8b; // 01a2:056b
db dummyf_1f8c; // 01a2:056c
db dummyf_1f8d; // 01a2:056d
db dummyf_1f8e; // 01a2:056e
db dummyf_1f8f; // 01a2:056f
db dummyf_1f90; // 01a2:0570
db dummyf_1f91; // 01a2:0571
db dummyf_1f92; // 01a2:0572
db dummyf_1f93; // 01a2:0573
db dummyf_1f94; // 01a2:0574
db dummyf_1f95; // 01a2:0575
db dummyf_1f96; // 01a2:0576
db dummyf_1f97; // 01a2:0577
db dummyf_1f98; // 01a2:0578
db dummyf_1f99; // 01a2:0579
db dummyf_1f9a; // 01a2:057a
db dummyf_1f9b; // 01a2:057b
dd dword_1057c; // 01a2:057c
dw word_10580; // 01a2:0580
dw word_10582; // 01a2:0582
db dummyf_1fa4; // 01a2:0584
db dummyf_1fa5; // 01a2:0585
dw word_10586; // 01a2:0586
db dummyf_1fa8[32]; // 01a2:0588
db dummyf_1fc8[32]; // 01a2:05a8
db dummyf_1fe8[32]; // 01a2:05c8
db dummyf_2008[32]; // 01a2:05e8
db dummyf_2028; // 01a2:0608
db dummyf_2029; // 01a2:0609
db dummyf_202a; // 01a2:060a
db dummyf_202b; // 01a2:060b
db dummyf_202c; // 01a2:060c
db dummyf_202d; // 01a2:060d
db dummyf_202e; // 01a2:060e
db dummyf_202f; // 01a2:060f
db dummyf_2030; // 01a2:0610
db dummyf_2031; // 01a2:0611
db dummyf_2032; // 01a2:0612
db dummyf_2033; // 01a2:0613
db dummyf_2034; // 01a2:0614
db dummyf_2035; // 01a2:0615
db dummyf_2036; // 01a2:0616
db dummyf_2037; // 01a2:0617
db dummyf_2038; // 01a2:0618
db dummyf_2039; // 01a2:0619
db dummyf_203a; // 01a2:061a
db dummyf_203b;
db dummyf_203c; // 01a2:061c
db dummyf_203d; // 01a2:061d
db dummyf_203e; // 01a2:061e
db dummyf_203f; // 01a2:061f
char amgraphicexe[13]; // 0204:0000
char __aasoundexe[11]; // 0204:000d
db dummyf_2058;
db dummyf_2059; // 0204:0019
dw dummyf_205a; // 0204:001a
dw dummyf_205c; // 0204:001c
dw dummyf_205e; // 0204:001e
dw dummyf_2060; // 0204:0020
db dummyf_2062[32]; // 0204:0022
db dummyf_2082[32]; // 0204:0042
db dummyf_20a2; // 0204:0062
db dummyf_20a3; // 0204:0063
db dummyf_20a4; // 0204:0064
db dummyf_20a5; // 0204:0065
db dummyf_20a6;
db dummyf_20a7;
db dummyf_20a8; // 0204:0068
db dummyf_20a9; // 0204:0069
db dummyf_20aa; // 0204:006a
db dummyf_20ab; // 0204:006b
db dummyf_20ac; // 0204:006c
db dummyf_20ad; // 0204:006d
db dummyf_20ae; // 0204:006e
db dummyf_20af; // 0204:006f
db dummyf_20b0;
db dummyf_20b1;
db dummyf_20b2;
db dummyf_20b3;
db dummyf_20b4; // 0204:0074
db dummyf_20b5; // 0204:0075
db dummyf_20b6; // 0204:0076
db dummyf_20b7; // 0204:0077
db dummyf_20b8; // 0204:0078
db dummyf_20b9;
db dummyf_20ba[27]; // 0204:007a
db dummyf_20d5[32]; // 0204:007a
db dummyf_20f5[17]; // 0204:007a
db dummyf_2106[17]; // 0204:007a
db dummyf_2117[17]; // 0204:007a
db dummyf_2128[24]; // 0204:007a
db dummyf_2140[17]; // 0204:007a
db dummyf_2151[17]; // 0204:007a
db dummyf_2162[17]; // 0204:007a
db dummyf_2173[17]; // 0204:007a
db dummyf_2184[14]; // 0204:007a
db dummyf_2192[14]; // 0204:007a
db dummyf_21a0[11]; // 0204:007a
db dummyf_21ab[15]; // 0204:007a
db dummyf_21ba[14]; // 0204:007a
db dummyf_21c8[14]; // 0204:007a
db dummyf_21d6[15]; // 0204:007a
db dummyf_21e5[15]; // 0204:007a
db dummyf_21f4[13]; // 0204:007a
db dummyf_2201[13]; // 0204:007a
db dummyf_220e[13]; // 0204:007a
db dummyf_221b[15]; // 0204:007a
db dummyf_222a[14]; // 0204:007a
db dummyf_2238[14]; // 0204:007a
db dummyf_2246[13]; // 0204:007a
db dummyf_2253[14]; // 0204:007a
db dummyf_2261[15]; // 0204:007a
db dummyf_2270[17]; // 0204:007a
db dummyf_2281[18]; // 0204:007a
db dummyf_2293[18]; // 0204:007a
db dummyf_22a5[17]; // 0204:007a
db dummyf_22b6[17]; // 0204:007a
db dummyf_22c7[19]; // 0204:007a
db dummyf_22da[14]; // 0204:007a
db dummyf_22e8[14]; // 0204:007a
db dummyf_22f6[15]; // 0204:007a
db dummyf_2305[37]; // 0204:007a
db dummyf_232a[21]; // 0204:007a
db dummyf_233f[11]; // 0204:007a
db dummyf_234a[42]; // 0204:007a
db dummyf_2374[16]; // 0204:007a
db dummyf_2384[13]; // 0204:007a
db dummyf_2391[14]; // 0204:007a
db dummyf_239f[15]; // 0204:007a
db dummyf_23ae[13]; // 0204:007a
db dummyf_23bb[9]; // 0204:007a
dw dummyf_23c4;
db dummyf_23c6[26];
db dummyf_23e0[42]; // 0204:03a0
db dummyf_240a[100]; // 0204:03a0
db dummyf_246e[80]; // 0204:03a0
db dummyf_24be[14]; // 0204:03a0
db dummyf_24cc[14]; // 0204:03a0
db dummyf_24da[20]; // 0204:03a0
db dummyf_24ee[11]; // 0204:03a0
db dummyf_24f9[112]; // 0204:03a0
char atripoli[8]; // 0204:0529
char aportbrega[11]; // 0204:0531
char amisratah[9]; // 0204:053c
char asirt[5]; // 0204:0545
char araslanuf[10]; // 0204:054a
char abenghazi[9]; // 0204:0554
char asabha[6]; // 0204:055d
char acrete[6]; // 0204:0563
char asicily[7]; // 0204:0569
char amalta[6]; // 0204:0570
char asigonella[10]; // 0204:0576
char asudabay[9]; // 0204:0580
char ahalfar[7]; // 0204:0589
char aidris[6]; // 0204:0590
char aalbayda[9]; // 0204:0596
char ayafran[7]; // 0204:059f
char aalmukhayli[12]; // 0204:05a6
char abeda[5]; // 0204:05b2
char asarir[6]; // 0204:05b7
char agialo[6]; // 0204:05bd
char araguba[7]; // 0204:05c3
char aamal[5]; // 0204:05ca
char aoiltanker[11]; // 0204:05cf
char ajalooasis[11]; // 0204:05da
char amaradah[8]; // 0204:05e5
char abenina[7]; // 0204:05ed
db dummyf_2634[3]; // 0204:05f4
char aairbase[8]; // 0204:05f7
db dummyf_263f[4]; // 0204:05ff
char aoilrig[8]; // 0204:0603
db dummyf_264b[3]; // 0204:060b
char avillage[8]; // 0204:060e
char aheadquarters[13]; // 0204:0616
char atankfarm[10]; // 0204:0623
db dummyf_266d[2]; // 0204:062d
char asamissile[11]; // 0204:062f
db dummyf_267a[4]; // 0204:063a
char asamradar[10]; // 0204:063e
char atower[6]; // 0204:0648
char ahangar[7]; // 0204:064e
db dummyf_2695[1];
char arefinery[9]; // 0204:0656
char amissileboat[13]; // 0204:065f
db dummyf_26ac[2]; // 0204:066c
char apumpstation[13]; // 0204:066e
db dummyf_26bb[5]; // 0204:067b
char __aussamerica[12]; // 0204:0680
dw dummyf_26cc;
db dummyf_26ce[3]; // 0204:068e
char adestroyer[10]; // 0204:0691
db dummyf_26db[4]; // 0204:069b
char afire[5]; // 0204:069f
char amissile[8]; // 0204:06a4
char amobilesam[11]; // 0204:06ac
char atank[5]; // 0204:06b7
db dummyf_26fc[2]; // 0204:06bc
char aairplane[9]; // 0204:06be
char anuclearplant[14]; // 0204:06c7
char acamp[5]; // 0204:06d5
char amissileboat_0[13]; // 0204:06da
char aairstrip[9]; // 0204:06e7
db dummyf_2730;
char arefinery_0[9]; // 0204:06f1
char aussamerica[12]; // 0204:06fa
char awreck[6]; // 0204:0706
char aspecialobject1[17]; // 0204:070c
char aspecialobject2[17]; // 0204:071d
db dummyf_276e[37]; // 0204:072e
dw dummyf_2793;
db dummyf_2795[209]; // 0204:0755
db dummyf_2866[84]; // 0204:0755
db dummyf_28ba[34]; // 0204:0755
db dummyf_28dc[56]; // 0204:0755
db byte_10ef4; // 0204:08d4
db dummyf_2915[34]; // 0204:08d5
db dummyf_2937[31]; // 0204:08d5
db dummyf_2956; // 0204:0916
db dummyf_2957[11]; // 0204:0917
db dummyf_2962[13]; // 0204:0917
db dummyf_296f[14]; // 0204:0917
db dummyf_297d[13]; // 0204:0917
db dummyf_298a[12]; // 0204:0917
db dummyf_2996[4]; // 0204:0917
db dummyf_299a[1445];
db dummyf_2f3f;
db dummyf_2f40[783];
db dummyf_324f[32]; // 0204:120f
db dummyf_326f[32]; // 0204:122f
db dummyf_328f[32]; // 0204:124f
db dummyf_32af[32]; // 0204:126f
db dummyf_32cf; // 0204:128f
db dummyf_32d0; // 0204:1290
db dummyf_32d1; // 0204:1291
db dummyf_32d2; // 0204:1292
db dummyf_32d3[5];
db dummyf_32d8; // 0204:1298
db dummyf_32d9;
db dummyf_32da; // 0204:129a
db dummyf_32db; // 0204:129b
db dummyf_32dc; // 0204:129c
db dummyf_32dd; // 0204:129d
db dummyf_32de; // 0204:129e
db dummyf_32df; // 0204:129f
db dummyf_32e0; // 0204:12a0
db dummyf_32e1; // 0204:12a1
db dummyf_32e2; // 0204:12a2
db dummyf_32e3; // 0204:12a3
db dummyf_32e4; // 0204:12a4
db dummyf_32e5; // 0204:12a5
db dummyf_32e6; // 0204:12a6
db dummyf_32e7; // 0204:12a7
db dummyf_32e8; // 0204:12a8
db dummyf_32e9; // 0204:12a9
db dummyf_32ea; // 0204:12aa
db dummyf_32eb; // 0204:12ab
db dummyf_32ec; // 0204:12ac
db dummyf_32ed; // 0204:12ad
db dummyf_32ee; // 0204:12ae
db dummyf_32ef; // 0204:12af
db dummyf_32f0; // 0204:12b0
db dummyf_32f1; // 0204:12b1
db dummyf_32f2; // 0204:12b2
db dummyf_32f3; // 0204:12b3
db __jpt_13a6f; // 0204:12b4
db dummyf_32f5;
db dummyf_32f6; // 0204:12b6
db dummyf_32f7; // 0204:12b7
db dummyf_32f8[329];
db dummyf_3441; // 0204:1401
db dummyf_3442; // 0204:1402
db dummyf_3443; // 0204:1403
db dummyf_3444; // 0204:1404
db dummyf_3445;
db dummyf_3446; // 0204:1406
db dummyf_3447; // 0204:1407
db dummyf_3448; // 0204:1408
db dummyf_3449; // 0204:1409
db dummyf_344a; // 0204:140a
db dummyf_344b;
db dummyf_344c;
db dummyf_344d;
db dummyf_344e;
db dummyf_344f;
char __af15iiadlib3149[21]; // 0204:1410
db dummyf_3465;
db dummyf_3466;
db dummyf_3467;
dw dummyf_3468; // 0204:1428
dw dummyf_346a; // 0204:142a
dw dummyf_346c; // 0204:142c
dw dummyf_346e; // 0204:142e
dw dummyf_3470;
dw dummyf_3472; // 0204:1432
dw dummyf_3474; // 0204:1434
dw dummyf_3476; // 0204:1436
dw dummyf_3478; // 0204:1438
dw dummyf_347a; // 0204:143a
dw dummyf_347c; // 0204:143c
dw dummyf_347e; // 0204:143e
dw dummyf_3480; // 0204:1440
dw dummyf_3482; // 0204:1442
dw dummyf_3484; // 0204:1444
dw dummyf_3486; // 0204:1446
db dummyf_3488[32]; // 0204:1448
db dummyf_34a8[32]; // 0204:1468
db dummyf_34c8[32]; // 0204:1488
db dummyf_34e8[32]; // 0204:14a8
db dummyf_3508[32]; // 0204:14c8
db dummyf_3528[32]; // 0204:14e8
db dummyf_3548[32]; // 0204:1508
db dummyf_3568[32]; // 0204:1528
db dummyf_3588[32]; // 0204:1548
db dummyf_35a8[32]; // 0204:1568
db dummyf_35c8[32]; // 0204:1588
db dummyf_35e8[32]; // 0204:15a8
db dummyf_3608[32]; // 0204:15c8
db dummyf_3628; // 0204:15e8
db dummyf_3629; // 0204:15e9
db dummyf_362a; // 0204:15ea
db dummyf_362b; // 0204:15eb
db dummyf_362c; // 0204:15ec
db dummyf_362d; // 0204:15ed
db dummyf_362e; // 0204:15ee
db dummyf_362f; // 0204:15ef
db dummyf_3630; // 0204:15f0
db dummyf_3631; // 0204:15f1
db dummyf_3632; // 0204:15f2
db dummyf_3633; // 0204:15f3
db dummyf_3634; // 0204:15f4
db dummyf_3635; // 0204:15f5
db dummyf_3636; // 0204:15f6
db dummyf_3637; // 0204:15f7
db dummyf_3638; // 0204:15f8
db dummyf_3639; // 0204:15f9
db dummyf_363a; // 0204:15fa
db dummyf_363b; // 0204:15fb
db dummyf_363c; // 0204:15fc
db dummyf_363d; // 0204:15fd
db dummyf_363e; // 0204:15fe
db dummyf_363f; // 0204:15ff
db dummyf_3640;
db dummyf_3641;
db seg_11c22[11]; // 0204:1602
db dummyf_364d[11]; // 0204:1602
db dummyf_3658[10]; // 0204:1602
db dummyf_3662[12]; // 0204:1602
db dummyf_366e[12]; // 0204:1602
db dummyf_367a[11]; // 0204:1602
db dummyf_3685[7]; // 0204:1602
char __anoadlibboardpr[33]; // 0204:164c
db unk_11c8d; // 0204:166d
db dummyf_36ae;
db _unk_11c8f; // 0204:166f
db dummyf_36b0; // 0204:1670
db dummyf_36b1;
db dummyf_36b2;
db _unk_11c93; // 0204:1673
db dummyf_36b4; // 0204:1674
db byte_11c95; // 0204:1675
db byte_11c96; // 0204:1676
db _unk_11c97; // 0204:1677
db dummyf_36b8;
db _unk_11c99; // 0204:1679
db dummyf_36ba;
db dummyf_36bb;
db dummyf_36bc;
db byte_11c9d; // 0204:167d
db dummyf_36be; // 0204:167e
db dummyf_36bf; // 0204:167f
db dummyf_36c0; // 0204:1680
db dummyf_36c1; // 0204:1681
db dummyf_36c2; // 0204:1682
db dummyf_36c3; // 0204:1683
db dummyf_36c4; // 0204:1684
db dummyf_36c5; // 0204:1685
db dummyf_36c6; // 0204:1686
db dummyf_36c7; // 0204:1687
db dummyf_36c8; // 0204:1688
dw word_11ca9; // 0204:1689
db byte_11cab; // 0204:168b
db _unk_11cac; // 0204:168c
db dummyf_36cd;
dw _unk_11cae; // 0204:168e
db _unk_11cb0; // 0204:1690
db dummyf_36d1;
db dummyf_36d2;
db dummyf_36d3;
dw _unk_11cb4; // 0204:1694
db byte_11cb6; // 0204:1696
db byte_11cb7; // 0204:1697
dw _unk_11cb8; // 0204:1698
db dummyf_36da[32]; // 0204:169a
db byte_11cda; // 0204:16ba
db byte_11cdb; // 0204:16bb
db byte_11cdc; // 0204:16bc
db dummyf_36fd;
db dummyf_36fe[6]; // 0204:16be
db dummyf_3704; // 0204:16c4
db dummyf_3705; // 0204:16c5
db dummyf_3706; // 0204:16c6
db dummyf_3707; // 0204:16c7
db dummyf_3708[4]; // 0204:16c8
db dummyf_370c; // 0204:16cc
db dummyf_370d; // 0204:16cd
db dummyf_370e; // 0204:16ce
db dummyf_370f; // 0204:16cf
db dummyf_3710; // 0204:16d0
db dummyf_3711; // 0204:16d1
db dummyf_3712; // 0204:16d2
db dummyf_3713; // 0204:16d3
db dummyf_3714[6]; // 0204:16d4
db dummyf_371a; // 0204:16da
db dummyf_371b; // 0204:16db
db dummyf_371c; // 0204:16dc
db dummyf_371d; // 0204:16dd
db dummyf_371e; // 0204:16de
db dummyf_371f[2]; // 0204:16df
db dummyf_3721[32]; // 0204:16e1
db dummyf_3741;
db dummyf_3742; // 0204:1702
db dummyf_3743;
db dummyf_3744;
db dummyf_3745; // 0204:1705
db dummyf_3746; // 0204:1706
db dummyf_3747;
db dummyf_3748;
db dummyf_3749; // 0204:1709
db dummyf_374a;
db dummyf_374b;
db dummyf_374c;
db dummyf_374d;
db dummyf_374e;
db dummyf_374f;
db dummyf_3750;
db dummyf_3751;
db dummyf_3752[13]; // 0204:1712
db dummyf_375f[2]; // 0204:1712
db dummyf_3761;
db dummyf_3762;
db dummyf_3763;
db dummyf_3764;
db dummyf_3765;
db dummyf_3766;
db dummyf_3767;
db dummyf_3768[13]; // 0204:1728
db dummyf_3775; // 0204:1728
db dummyf_3776;
db dummyf_3777;
db dummyf_3778;
db dummyf_3779;
db dummyf_377a;
db dummyf_377b;
db dummyf_377c;
db dummyf_377d;
db dummyf_377e[13]; // 0204:173e
db dummyf_378b[2]; // 0204:173e
db dummyf_378d;
db dummyf_378e; // 0204:174e
db dummyf_378f; // 0204:174f
db dummyf_3790; // 0204:1750
db dummyf_3791; // 0204:1751
db dummyf_3792;
db dummyf_3793;
db dummyf_3794[13]; // 0204:1754
db dummyf_37a1; // 0204:1754
db dummyf_37a2[32]; // 0204:1762
db dummyf_37c2; // 0204:1782
db dummyf_37c3; // 0204:1783
db dummyf_37c4;
db dummyf_37c5;
db dummyf_37c6; // 0204:1786
db dummyf_37c7;
db dummyf_37c8;
db dummyf_37c9; // 0204:1789
db dummyf_37ca; // 0204:178a
db dummyf_37cb;
db dummyf_37cc;
db dummyf_37cd; // 0204:178d
db dummyf_37ce;
db dummyf_37cf;
db dummyf_37d0;
db dummyf_37d1;
db dummyf_37d2;
db dummyf_37d3;
db dummyf_37d4;
db dummyf_37d5;
db dummyf_37d6[13]; // 0204:1796
db dummyf_37e3[2]; // 0204:1796
db dummyf_37e5;
db dummyf_37e6; // 0204:17a6
db dummyf_37e7; // 0204:17a7
db dummyf_37e8;
db dummyf_37e9;
db dummyf_37ea;
db dummyf_37eb;
db dummyf_37ec[13]; // 0204:17ac
db dummyf_37f9; // 0204:17ac
db dummyf_37fa;
db dummyf_37fb;
db dummyf_37fc;
db dummyf_37fd;
db dummyf_37fe;
db dummyf_37ff;
db dummyf_3800;
db dummyf_3801;
db dummyf_3802[13]; // 0204:17c2
db dummyf_380f[2]; // 0204:17c2
db dummyf_3811;
db dummyf_3812;
db dummyf_3813;
db dummyf_3814; // 0204:17d4
db dummyf_3815; // 0204:17d5
db dummyf_3816; // 0204:17d6
db dummyf_3817; // 0204:17d7
db dummyf_3818[13]; // 0204:17d8
db dummyf_3825; // 0204:17d8
db dummyf_3826;
db dummyf_3827;
db dummyf_3828;
db dummyf_3829;
db dummyf_382a;
db dummyf_382b;
db dummyf_382c;
db dummyf_382d;
db dummyf_382e[15]; // 0204:17ee
db dummyf_383d;
db dummyf_383e;
db dummyf_383f;
db dummyf_3840;
db dummyf_3841;
db dummyf_3842;
db dummyf_3843;
db dummyf_3844[14]; // 0204:1804
db dummyf_3852[32]; // 0204:1812
db dummyf_3872[32]; // 0204:1832
db dummyf_3892[32]; // 0204:1852
db dummyf_38b2[32]; // 0204:1872
db dummyf_38d2[32]; // 0204:1892
db dummyf_38f2[32]; // 0204:18b2
db dummyf_3912[32]; // 0204:18d2
db dummyf_3932[32]; // 0204:18f2
db dummyf_3952[32]; // 0204:1912
db dummyf_3972[32]; // 0204:1932
db dummyf_3992[32]; // 0204:1952
db dummyf_39b2[32]; // 0204:1972
db dummyf_39d2[32]; // 0204:1992
db dummyf_39f2[32]; // 0204:19b2
db dummyf_3a12[32]; // 0204:19d2
db dummyf_3a32[32]; // 0204:19f2
db dummyf_3a52[32]; // 0204:1a12
db dummyf_3a72[32]; // 0204:1a32
db dummyf_3a92[32]; // 0204:1a52
db dummyf_3ab2[32]; // 0204:1a72
db dummyf_3ad2[32]; // 0204:1a92
db dummyf_3af2[32]; // 0204:1ab2
db dummyf_3b12[32]; // 0204:1ad2
db dummyf_3b32[32]; // 0204:1af2
db dummyf_3b52[32]; // 0204:1b12
db dummyf_3b72[32]; // 0204:1b32
db dummyf_3b92[32]; // 0204:1b52
db dummyf_3bb2[32]; // 0204:1b72
db dummyf_3bd2[32]; // 0204:1b92
db dummyf_3bf2;
db dummyf_3bf3;
db dummyf_3bf4;
db dummyf_3bf5;
db byte_121d6; // 0204:1bb6
db dummyf_3bf7; // 0204:1bb7
db dummyf_3bf8[9]; // 0204:1bb8
db dummyf_3c01[32]; // 0204:1bc1
db dummyf_3c21; // 0204:1be1
db dummyf_3c22; // 0204:1be2
db dummyf_3c23; // 0204:1be3
db dummyf_3c24; // 0204:1be4
db dummyf_3c25; // 0204:1be5
db dummyf_3c26;
db dummyf_3c27;
db dummyf_3c28; // 0204:1be8
db dummyf_3c29; // 0204:1be9
db dummyf_3c2a; // 0204:1bea
db dummyf_3c2b; // 0204:1beb
db dummyf_3c2c; // 0204:1bec
db dummyf_3c2d; // 0204:1bed
db dummyf_3c2e;
db dummyf_3c2f;
db dummyf_3c30; // 0204:1bf0
db dummyf_3c31; // 0204:1bf1
db dummyf_3c32; // 0204:1bf2
db dummyf_3c33; // 0204:1bf3
db dummyf_3c34; // 0204:1bf4
db dummyf_3c35; // 0204:1bf5
db dummyf_3c36;
db dummyf_3c37;
db _unk_12218[9]; // 0204:1bf8
db dummyf_3c41;
db dummyf_3c42;
db dummyf_3c43;
db _unk_12224[8]; // 0204:1c04
db dummyf_3c4c;
db dummyf_3c4d;
db byte_1222e; // 0204:1c0e
db dummyf_3c4f; // 0204:1c0f
db dummyf_3c50; // 0204:1c10
db dummyf_3c51; // 0204:1c11
db dummyf_3c52; // 0204:1c12
db dummyf_3c53; // 0204:1c13
db dummyf_3c54; // 0204:1c14
db dummyf_3c55; // 0204:1c15
db dummyf_3c56; // 0204:1c16
db dummyf_3c57; // 0204:1c17
db dummyf_3c58; // 0204:1c18
db dummyf_3c59;
db dummyf_3c5a;
db dummyf_3c5b;
db byte_1223c; // 0204:1c1c
db dummyf_3c5d; // 0204:1c1d
db dummyf_3c5e; // 0204:1c1e
db dummyf_3c5f; // 0204:1c1f
db dummyf_3c60; // 0204:1c20
db dummyf_3c61; // 0204:1c21
db dummyf_3c62; // 0204:1c22
db dummyf_3c63; // 0204:1c23
db dummyf_3c64;
db dummyf_3c65;
db byte_12246; // 0204:1c26
db dummyf_3c67; // 0204:1c27
db dummyf_3c68; // 0204:1c28
db dummyf_3c69; // 0204:1c29
db dummyf_3c6a; // 0204:1c2a
db dummyf_3c6b; // 0204:1c2b
db dummyf_3c6c; // 0204:1c2c
db dummyf_3c6d; // 0204:1c2d
db dummyf_3c6e;
db dummyf_3c6f;
db byte_12250; // 0204:1c30
db dummyf_3c71; // 0204:1c31
db dummyf_3c72; // 0204:1c32
db dummyf_3c73; // 0204:1c33
db dummyf_3c74; // 0204:1c34
db dummyf_3c75; // 0204:1c35
db dummyf_3c76;
db dummyf_3c77;
db byte_12258; // 0204:1c38
db dummyf_3c79; // 0204:1c39
db dummyf_3c7a; // 0204:1c3a
db dummyf_3c7b; // 0204:1c3b
db dummyf_3c7c; // 0204:1c3c
db dummyf_3c7d; // 0204:1c3d
db dummyf_3c7e;
db dummyf_3c7f;
db byte_12260; // 0204:1c40
db dummyf_3c81; // 0204:1c41
db dummyf_3c82; // 0204:1c42
db dummyf_3c83; // 0204:1c43
db dummyf_3c84; // 0204:1c44
db dummyf_3c85; // 0204:1c45
db dummyf_3c86;
db dummyf_3c87;
db byte_12268; // 0204:1c48
db dummyf_3c89;
db dummyf_3c8a; // 0204:1c4a
db dummyf_3c8b; // 0204:1c4b
db dummyf_3c8c; // 0204:1c4c
db dummyf_3c8d; // 0204:1c4d
db dummyf_3c8e; // 0204:1c4e
db dummyf_3c8f; // 0204:1c4f
db dummyf_3c90;
db dummyf_3c91;
db byte_12272; // 0204:1c52
db dummyf_3c93;
db byte_12274; // 0204:1c54
db dummyf_3c95; // 0204:1c55
db dummyf_3c96; // 0204:1c56
db dummyf_3c97; // 0204:1c57
db dummyf_3c98; // 0204:1c58
db dummyf_3c99; // 0204:1c59
db dummyf_3c9a; // 0204:1c5a
db dummyf_3c9b; // 0204:1c5b
db dummyf_3c9c;
db dummyf_3c9d;
db byte_1227e; // 0204:1c5e
db dummyf_3c9f; // 0204:1c5f
db dummyf_3ca0; // 0204:1c60
db dummyf_3ca1; // 0204:1c61
db dummyf_3ca2; // 0204:1c62
db dummyf_3ca3; // 0204:1c63
db dummyf_3ca4; // 0204:1c64
db dummyf_3ca5; // 0204:1c65
db dummyf_3ca6;
db dummyf_3ca7;
db _unk_12288[12]; // 0204:1c68
db dummyf_3cb4[6]; // 0204:1c68
db byte_1229a; // 0204:1c7a
db dummyf_3cbb; // 0204:1c7b
db dummyf_3cbc; // 0204:1c7c
db dummyf_3cbd; // 0204:1c7d
db dummyf_3cbe; // 0204:1c7e
db dummyf_3cbf; // 0204:1c7f
db dummyf_3cc0; // 0204:1c80
db dummyf_3cc1; // 0204:1c81
db dummyf_3cc2; // 0204:1c82
db dummyf_3cc3; // 0204:1c83
db dummyf_3cc4; // 0204:1c84
db dummyf_3cc5; // 0204:1c85
db dummyf_3cc6;
db dummyf_3cc7; // 0204:1c87
db dummyf_3cc8;
db dummyf_3cc9;
db dummyf_3cca;
db dummyf_3ccb;
db byte_122ac; // 0204:1c8c
db dummyf_3ccd; // 0204:1c8d
db dummyf_3cce; // 0204:1c8e
db dummyf_3ccf; // 0204:1c8f
db dummyf_3cd0; // 0204:1c90
db dummyf_3cd1; // 0204:1c91
db dummyf_3cd2;
db dummyf_3cd3;
db byte_122b4; // 0204:1c94
db dummyf_3cd5; // 0204:1c95
db dummyf_3cd6; // 0204:1c96
db dummyf_3cd7; // 0204:1c97
db dummyf_3cd8; // 0204:1c98
db dummyf_3cd9; // 0204:1c99
db dummyf_3cda;
db dummyf_3cdb;
db byte_122bc; // 0204:1c9c
db dummyf_3cdd[32]; // 0204:1c9d
db dummyf_3cfd[32]; // 0204:1cbd
db dummyf_3d1d[32]; // 0204:1cdd
db dummyf_3d3d; // 0204:1cfd
db dummyf_3d3e; // 0204:1cfe
db dummyf_3d3f; // 0204:1cff
db dummyf_3d40; // 0204:1d00
db dummyf_3d41; // 0204:1d01
db dummyf_3d42; // 0204:1d02
db dummyf_3d43; // 0204:1d03
db dummyf_3d44; // 0204:1d04
db dummyf_3d45; // 0204:1d05
db dummyf_3d46; // 0204:1d06
db dummyf_3d47; // 0204:1d07
db dummyf_3d48; // 0204:1d08
db dummyf_3d49; // 0204:1d09
db dummyf_3d4a; // 0204:1d0a
db dummyf_3d4b; // 0204:1d0b
db dummyf_3d4c; // 0204:1d0c
db dummyf_3d4d; // 0204:1d0d
db dummyf_3d4e; // 0204:1d0e
db dummyf_3d4f; // 0204:1d0f
db dummyf_3d50; // 0204:1d10
db dummyf_3d51; // 0204:1d11
db dummyf_3d52; // 0204:1d12
db dummyf_3d53;
db dummyf_3d54;
db dummyf_3d55;
db byte_12336; // 0204:1d16
db dummyf_3d57[32]; // 0204:1d17
db dummyf_3d77[32]; // 0204:1d37
db dummyf_3d97[32]; // 0204:1d57
db dummyf_3db7; // 0204:1d77
db dummyf_3db8; // 0204:1d78
db dummyf_3db9; // 0204:1d79
db dummyf_3dba; // 0204:1d7a
db dummyf_3dbb; // 0204:1d7b
db dummyf_3dbc; // 0204:1d7c
db dummyf_3dbd; // 0204:1d7d
db dummyf_3dbe; // 0204:1d7e
db dummyf_3dbf; // 0204:1d7f
db dummyf_3dc0; // 0204:1d80
db dummyf_3dc1; // 0204:1d81
db dummyf_3dc2; // 0204:1d82
db dummyf_3dc3; // 0204:1d83
db dummyf_3dc4; // 0204:1d84
db dummyf_3dc5; // 0204:1d85
db dummyf_3dc6; // 0204:1d86
db dummyf_3dc7; // 0204:1d87
db dummyf_3dc8; // 0204:1d88
db dummyf_3dc9; // 0204:1d89
db dummyf_3dca; // 0204:1d8a
db dummyf_3dcb; // 0204:1d8b
db dummyf_3dcc; // 0204:1d8c
db dummyf_3dcd;
db dummyf_3dce;
db dummyf_3dcf;
db byte_123b0; // 0204:1d90
db dummyf_3dd1[32]; // 0204:1d91
db dummyf_3df1[32]; // 0204:1db1
db dummyf_3e11;
db dummyf_3e12; // 0204:1dd2
db dummyf_3e13; // 0204:1dd3
db dummyf_3e14; // 0204:1dd4
db dummyf_3e15; // 0204:1dd5
db dummyf_3e16; // 0204:1dd6
db dummyf_3e17; // 0204:1dd7
db dummyf_3e18; // 0204:1dd8
db dummyf_3e19; // 0204:1dd9
db dummyf_3e1a; // 0204:1dda
db dummyf_3e1b; // 0204:1ddb
db dummyf_3e1c; // 0204:1ddc
db dummyf_3e1d;
db dummyf_3e1e;
db dummyf_3e1f;
db byte_12400; // 0204:1de0
db dummyf_3e21[32]; // 0204:1de1
db dummyf_3e41; // 0204:1e01
db dummyf_3e42; // 0204:1e02
db dummyf_3e43; // 0204:1e03
db dummyf_3e44; // 0204:1e04
db dummyf_3e45; // 0204:1e05
db dummyf_3e46; // 0204:1e06
db dummyf_3e47; // 0204:1e07
db dummyf_3e48; // 0204:1e08
db dummyf_3e49; // 0204:1e09
db dummyf_3e4a; // 0204:1e0a
db dummyf_3e4b; // 0204:1e0b
db dummyf_3e4c; // 0204:1e0c
db dummyf_3e4d; // 0204:1e0d
db dummyf_3e4e; // 0204:1e0e
db dummyf_3e4f; // 0204:1e0f
db dummyf_3e50; // 0204:1e10
db dummyf_3e51; // 0204:1e11
db dummyf_3e52; // 0204:1e12
db dummyf_3e53; // 0204:1e13
db dummyf_3e54; // 0204:1e14
db dummyf_3e55; // 0204:1e15
db dummyf_3e56; // 0204:1e16
db dummyf_3e57; // 0204:1e17
db dummyf_3e58; // 0204:1e18
db dummyf_3e59; // 0204:1e19
db dummyf_3e5a; // 0204:1e1a
db dummyf_3e5b; // 0204:1e1b
db dummyf_3e5c; // 0204:1e1c
db dummyf_3e5d;
db dummyf_3e5e;
db dummyf_3e5f;
db byte_12440; // 0204:1e20
db dummyf_3e61[32]; // 0204:1e21
db dummyf_3e81[32]; // 0204:1e41
db dummyf_3ea1; // 0204:1e61
db dummyf_3ea2; // 0204:1e62
db dummyf_3ea3; // 0204:1e63
db dummyf_3ea4; // 0204:1e64
db dummyf_3ea5; // 0204:1e65
db dummyf_3ea6; // 0204:1e66
db dummyf_3ea7; // 0204:1e67
db dummyf_3ea8; // 0204:1e68
db dummyf_3ea9; // 0204:1e69
db dummyf_3eaa; // 0204:1e6a
db dummyf_3eab; // 0204:1e6b
db dummyf_3eac; // 0204:1e6c
db dummyf_3ead; // 0204:1e6d
db dummyf_3eae; // 0204:1e6e
db dummyf_3eaf; // 0204:1e6f
db dummyf_3eb0; // 0204:1e70
db dummyf_3eb1;
db dummyf_3eb2;
db dummyf_3eb3;
db byte_12494; // 0204:1e74
db dummyf_3eb5[32]; // 0204:1e75
db dummyf_3ed5[32]; // 0204:1e95
db dummyf_3ef5[32]; // 0204:1eb5
db dummyf_3f15[32]; // 0204:1ed5
db dummyf_3f35; // 0204:1ef5
db dummyf_3f36; // 0204:1ef6
db dummyf_3f37; // 0204:1ef7
db dummyf_3f38; // 0204:1ef8
db dummyf_3f39; // 0204:1ef9
db dummyf_3f3a; // 0204:1efa
db dummyf_3f3b; // 0204:1efb
db dummyf_3f3c; // 0204:1efc
db dummyf_3f3d; // 0204:1efd
db dummyf_3f3e; // 0204:1efe
db dummyf_3f3f; // 0204:1eff
db dummyf_3f40; // 0204:1f00
db dummyf_3f41;
db dummyf_3f42; // 0204:1f02
db dummyf_3f43;
db dummyf_3f44;
db dummyf_3f45;
db byte_12526; // 0204:1f06
db dummyf_3f47; // 0204:1f07
db dummyf_3f48; // 0204:1f08
db dummyf_3f49; // 0204:1f09
db dummyf_3f4a; // 0204:1f0a
db dummyf_3f4b; // 0204:1f0b
db dummyf_3f4c; // 0204:1f0c
db dummyf_3f4d; // 0204:1f0d
db dummyf_3f4e; // 0204:1f0e
db dummyf_3f4f; // 0204:1f0f
db dummyf_3f50; // 0204:1f10
db dummyf_3f51; // 0204:1f11
db dummyf_3f52;
db dummyf_3f53;
db byte_12534; // 0204:1f14
db dummyf_3f55; // 0204:1f15
db dummyf_3f56; // 0204:1f16
db dummyf_3f57; // 0204:1f17
db dummyf_3f58; // 0204:1f18
db dummyf_3f59; // 0204:1f19
db dummyf_3f5a; // 0204:1f1a
db dummyf_3f5b; // 0204:1f1b
db dummyf_3f5c; // 0204:1f1c
db dummyf_3f5d; // 0204:1f1d
db dummyf_3f5e; // 0204:1f1e
db dummyf_3f5f; // 0204:1f1f
db dummyf_3f60;
db dummyf_3f61;
db byte_12542; // 0204:1f22
db dummyf_3f63; // 0204:1f23
db dummyf_3f64; // 0204:1f24
db dummyf_3f65; // 0204:1f25
db dummyf_3f66; // 0204:1f26
db dummyf_3f67; // 0204:1f27
db dummyf_3f68; // 0204:1f28
db dummyf_3f69; // 0204:1f29
db dummyf_3f6a; // 0204:1f2a
db dummyf_3f6b; // 0204:1f2b
db dummyf_3f6c; // 0204:1f2c
db dummyf_3f6d; // 0204:1f2d
db dummyf_3f6e;
db dummyf_3f6f;
db byte_12550; // 0204:1f30
db dummyf_3f71; // 0204:1f31
db dummyf_3f72; // 0204:1f32
db dummyf_3f73; // 0204:1f33
db dummyf_3f74; // 0204:1f34
db dummyf_3f75; // 0204:1f35
db dummyf_3f76; // 0204:1f36
db dummyf_3f77; // 0204:1f37
db dummyf_3f78; // 0204:1f38
db dummyf_3f79; // 0204:1f39
db dummyf_3f7a; // 0204:1f3a
db dummyf_3f7b; // 0204:1f3b
db dummyf_3f7c;
db dummyf_3f7d;
db byte_1255e; // 0204:1f3e
db dummyf_3f7f; // 0204:1f3f
db dummyf_3f80; // 0204:1f40
db dummyf_3f81; // 0204:1f41
db dummyf_3f82; // 0204:1f42
db dummyf_3f83; // 0204:1f43
db dummyf_3f84; // 0204:1f44
db dummyf_3f85; // 0204:1f45
db dummyf_3f86; // 0204:1f46
db dummyf_3f87; // 0204:1f47
db dummyf_3f88; // 0204:1f48
db dummyf_3f89; // 0204:1f49
db dummyf_3f8a;
db dummyf_3f8b;
db byte_1256c; // 0204:1f4c
db dummyf_3f8d; // 0204:1f4d
db dummyf_3f8e; // 0204:1f4e
db dummyf_3f8f; // 0204:1f4f
db dummyf_3f90; // 0204:1f50
db dummyf_3f91; // 0204:1f51
db dummyf_3f92; // 0204:1f52
db dummyf_3f93; // 0204:1f53
db dummyf_3f94; // 0204:1f54
db dummyf_3f95; // 0204:1f55
db dummyf_3f96; // 0204:1f56
db dummyf_3f97; // 0204:1f57
db dummyf_3f98;
db dummyf_3f99;
char __acopyrightc1989[64]; // 0204:1f5a
db dummyf_3fda;
db dummyf_3fdb;
db dummyf_3fdc;
db dummyf_3fdd;
db dummyf_3fde;
db dummyf_3fdf;
db dummyf_3fe0;
db dummyf_3fe1;
db _unk_125c2; // 0204:1fa2
db dummyf_3fe3;
dw word_125c4; // 0204:1fa4
db _unk_125c6; // 0204:1fa6
db dummyf_3fe7;
db _unk_125c8; // 0204:1fa8
db dummyf_3fe9;
db byte_125ca; // 0204:1faa
db dummyf_3feb;
db byte_125cc; // 0204:1fac
db dummyf_3fed[3];
db dummyf_3ff0[7]; // 0204:1fb0
db dummyf_3ff7; // 0204:1fb7
db dummyf_3ff8; // 0204:1fb8
db dummyf_3ff9;
db dummyf_3ffa;
db dummyf_3ffb;
db dummyf_3ffc;
db dummyf_3ffd;
db dummyf_3ffe;
db dummyf_3fff;
db byte_125e0; // 0204:1fc0
db dummyf_4001[3];
db dummyf_4004[7]; // 0204:1fc4
db dummyf_400b; // 0204:1fcb
db dummyf_400c; // 0204:1fcc
db dummyf_400d;
db dummyf_400e;
db dummyf_400f;
db dummyf_4010;
db dummyf_4011;
db dummyf_4012;
db dummyf_4013;
db byte_125f4; // 0204:1fd4
db dummyf_4015[3];
db dummyf_4018[7]; // 0204:1fd8
db dummyf_401f; // 0204:1fdf
db dummyf_4020; // 0204:1fe0
db dummyf_4021;
db dummyf_4022;
db dummyf_4023;
db dummyf_4024;
db dummyf_4025;
db dummyf_4026;
db dummyf_4027;
db byte_12608[3]; // 0204:1fe8
db dummyf_402b;
db dummyf_402c; // 0204:1fec
db dummyf_402d; // 0204:1fed
db dummyf_402e; // 0204:1fee
db dummyf_402f;
db dummyf_4030[2]; // 0204:1ff0
db dummyf_4032; // 0204:1ff2
db dummyf_4033; // 0204:1ff3
db dummyf_4034; // 0204:1ff4
db dummyf_4035;
db dummyf_4036;
db dummyf_4037;
db dummyf_4038;
db dummyf_4039;
db dummyf_403a;
db dummyf_403b;
db byte_1261c[3]; // 0204:1ffc
db dummyf_403f;
db dummyf_4040; // 0204:2000
db dummyf_4041; // 0204:2001
db dummyf_4042; // 0204:2002
db dummyf_4043;
db dummyf_4044[2]; // 0204:2004
db dummyf_4046; // 0204:2006
db dummyf_4047; // 0204:2007
db dummyf_4048; // 0204:2008
db dummyf_4049;
db dummyf_404a;
db dummyf_404b;
db dummyf_404c;
db dummyf_404d;
db dummyf_404e;
db dummyf_404f;
db byte_12630[3]; // 0204:2010
db dummyf_4053;
db dummyf_4054; // 0204:2014
db dummyf_4055; // 0204:2015
db dummyf_4056; // 0204:2016
db dummyf_4057;
db dummyf_4058[2]; // 0204:2018
db dummyf_405a; // 0204:201a
db dummyf_405b; // 0204:201b
db dummyf_405c; // 0204:201c
db dummyf_405d;
db dummyf_405e;
db dummyf_405f;
db dummyf_4060;
db dummyf_4061;
db dummyf_4062;
db dummyf_4063;
db dummyf_4064;
db dummyf_4065;
db dummyf_4066;
db dummyf_4067;
db dummyf_4068;
db dummyf_4069;
db dummyf_406a;
db dummyf_406b;
db dummyf_406c;
db dummyf_406d;
db dummyf_406e;
db dummyf_406f;
db dummyf_4070;
db dummyf_4071;
db dummyf_4072;
db dummyf_4073;
db dummyf_4074;
db dummyf_4075;
db dummyf_4076;
db dummyf_4077;
db byte_12658; // 0204:2038
db byte_12659; // 0204:2039
db _unk_1265a; // 0204:203a
db dummyf_407b;
dw word_1265c; // 0204:203c
db byte_1265e; // 0204:203e
db byte_1265f; // 0204:203f
db byte_12660; // 0204:2040
db dummyf_4081;
db dummyf_4082;
db dummyf_4083[39]; // 0204:2043
db dummyf_40aa[30]; // 0204:2043
db dummyf_40c8[29]; // 0204:2043
db dummyf_40e5[29]; // 0204:2043
db dummyf_4102[14]; // 0204:2043
db dummyf_4110[39]; // 0204:2043
db dummyf_4137[8]; // 0204:2043
db byte_1271f; // 0204:20ff
db dummyf_4140[40]; // 0204:2100
db dummyf_4168[27]; // 0204:2100
db dummyf_4183[32]; // 0204:2143
db dummyf_41a3[32]; // 0204:2163
db dummyf_41c3;
db dummyf_41c4;
db dummyf_41c5;
db dummyf_41c6;
db dummyf_41c7;
db dummyf_41c8;
db dummyf_41c9;
db dummyf_41ca;
db dummyf_41cb;
db dummyf_41cc;
db dummyf_41cd;
db dummyf_41ce;
db dummyf_41cf;
db dummyf_41d0;
db dummyf_41d1;
db dummyf_41d2;
db dummyf_41d3;
db dummyf_41d4;
db dummyf_41d5;
db dummyf_41d6;
db dummyf_41d7;
db dummyf_41d8;
db dummyf_41d9;
db _unk_127ba; // 0204:219a
db dummyf_41db;
db _unk_127bc; // 0204:219c
db dummyf_41dd;
db _unk_127be; // 0204:219e
db dummyf_41df; // 0204:219f
db dummyf_41e0[8]; // 041e:0000
db dummyf_41e8;
db unk_127c9; // 041e:0009
db dummyf_41ea; // 041e:000a
db byte_127cb; // 041e:000b
db dummyf_41ec[32]; // 041e:000c
db dummyf_420c; // 041e:002c
db dummyf_420d; // 041e:002d
db dummyf_420e; // 041e:002e
db dummyf_420f; // 041e:002f
db dummyf_4210; // 041e:0030
db dummyf_4211; // 041e:0031
db dummyf_4212; // 041e:0032
db dummyf_4213; // 041e:0033
db dummyf_4214; // 041e:0034
db dummyf_4215; // 041e:0035
db dummyf_4216; // 041e:0036
db dummyf_4217; // 041e:0037
db dummyf_4218; // 041e:0038
db dummyf_4219; // 041e:0039
db dummyf_421a; // 041e:003a
db dummyf_421b; // 041e:003b
db dummyf_421c; // 041e:003c
db dummyf_421d; // 041e:003d
db dummyf_421e; // 041e:003e
db dummyf_421f; // 041e:003f
db dummyf_4220; // 041e:0040
db dummyf_4221; // 041e:0041
db dummyf_4222; // 041e:0042
db dummyf_4223; // 041e:0043
db dummyf_4224; // 041e:0044
db dummyf_4225; // 041e:0045
db dummyf_4226; // 041e:0046
db dummyf_4227; // 041e:0047
db dummyf_4228; // 041e:0048
db dummyf_4229;
db dummyf_422a[3]; // 041e:004a
dw word_1280d; // 041e:004d
dw word_1280f; // 041e:004f
db dummyf_4231[1114];
dw dummyf_468b; // 041e:04ab
dw dummyf_468d; // 041e:04ad
dw dummyf_468f; // 041e:04af
dw dummyf_4691; // 041e:04b1
db dummyf_4693[26];
dw dummyf_46ad; // 041e:04cd
dw dummyf_46af; // 041e:04cf
dw dummyf_46b1; // 041e:04d1
dw dummyf_46b3; // 041e:04d3
dw word_12c95; // 041e:04d5
dw dummyf_46b7; // 041e:04d7
db dummyf_46b9; // 041e:04d9
db dummyf_46ba; // 041e:04da
db dummyf_46bb; // 041e:04db
db dummyf_46bc; // 041e:04dc
db dummyf_46bd; // 041e:04dd
db dummyf_46be; // 041e:04de
db dummyf_46bf; // 041e:04df
db dummyf_46c0; // 041e:04e0
db dummyf_46c1; // 041e:04e1
db dummyf_46c2; // 041e:04e2
db dummyf_46c3; // 041e:04e3
db dummyf_46c4; // 041e:04e4
db dummyf_46c5; // 041e:04e5
db dummyf_46c6; // 041e:04e6
db dummyf_46c7; // 041e:04e7
db dummyf_46c8;
db dummyf_46c9;
db dummyf_46ca; // 041e:04ea
db dummyf_46cb; // 041e:04eb
db dummyf_46cc; // 041e:04ec
db dummyf_46cd; // 041e:04ed
db dummyf_46ce; // 041e:04ee
db dummyf_46cf; // 041e:04ef
db dummyf_46d0; // 041e:04f0
db dummyf_46d1[243];
dw dummyf_47c4; // 041e:05e4
dw dummyf_47c6; // 041e:05e6
dw dummyf_47c8; // 041e:05e8
dw dummyf_47ca; // 041e:05ea
dw dummyf_47cc; // 041e:05ec
dw dummyf_47ce; // 041e:05ee
dw dummyf_47d0; // 041e:05f0
dw dummyf_47d2; // 041e:05f2
dw dummyf_47d4; // 041e:05f4
dw dummyf_47d6; // 041e:05f6
dw dummyf_47d8; // 041e:05f8
dw dummyf_47da; // 041e:05fa
dw dummyf_47dc; // 041e:05fc
dw dummyf_47de; // 041e:05fe
dw dummyf_47e0; // 041e:0600
dw dummyf_47e2; // 041e:0602
dw dummyf_47e4; // 041e:0604
dw dummyf_47e6; // 041e:0606
dw dummyf_47e8; // 041e:0608
dw dummyf_47ea; // 041e:060a
dw dummyf_47ec; // 041e:060c
db dummyf_47ee[15];
db dummyf_47fd; // 041e:061d
db dummyf_47fe[38];
db dummyf_4824; // 041e:0644
db dummyf_4825[31];
db dummyf_4844; // 041e:0664
db dummyf_4845[1270];
db dummyf_4d3b; // 041e:0b5b
db dummyf_4d3c[67];
db dummyf_4d7f; // 041e:0b9f
db dummyf_4d80[513];
db dummyf_4f81; // 041e:0da1
db dummyf_4f82[57];
db dummyf_4fbb; // 041e:0ddb
db dummyf_4fbc[83];
db dummyf_500f; // 041e:0e2f
db dummyf_5010[47];
db dummyf_503f; // 041e:0e5f
db dummyf_5040[23];
db dummyf_5057; // 041e:0e77
db dummyf_5058[133];
db dummyf_50dd; // 041e:0efd
db dummyf_50de[33];
db dummyf_50ff; // 041e:0f1f
db dummyf_5100[101];
db dummyf_5165; // 041e:0f85
db dummyf_5166[65];
db dummyf_51a7; // 041e:0fc7
db dummyf_51a8[277];
db dummyf_52bd; // 041e:10dd
db dummyf_52be[207];
db dummyf_538d; // 041e:11ad
db dummyf_538e[37];
db dummyf_53b3; // 041e:11d3
db dummyf_53b4[9];
db dummyf_53bd; // 041e:11dd
db dummyf_53be[47];
db dummyf_53ed; // 041e:120d
db dummyf_53ee[95];
db dummyf_544d; // 041e:126d
db dummyf_544e[45];
db dummyf_547b; // 041e:129b
db dummyf_547c; // 041e:129c
db dummyf_547d; // 041e:129d
db dummyf_547e;
db dummyf_547f; // 041e:129f
db dummyf_5480[20];
dw jpt_13a6f; // 041e:12b4
dw dummyf_5496; // 041e:12b4
dw dummyf_5498; // 041e:12b4
dw dummyf_549a; // 041e:12b4
dw dummyf_549c; // 041e:12b4
dw dummyf_549e; // 041e:12b4
dw dummyf_54a0; // 041e:12b4
db dummyf_54a2;
db dummyf_54a3;
db dummyf_54a4[3];
db dummyf_54a7; // 041e:12c7
db dummyf_54a8[391];
db dummyf_562f; // 041e:144f
db dummyf_5630[29];
db dummyf_564d; // 041e:146d
db dummyf_564e[93];
db dummyf_56ab; // 041e:14cb
db dummyf_56ac[79];
db dummyf_56fb;
db dummyf_56fc; // 041e:151c
db dummyf_56fd; // 041e:151d
db dummyf_56fe[25];
db dummyf_5717; // 041e:1537
db dummyf_5718; // 041e:1538
db dummyf_5719; // 041e:1539
db dummyf_571a[17];
db dummyf_572b; // 041e:154b
db dummyf_572c; // 041e:154c
db dummyf_572d[2];
db dummyf_572f; // 041e:154f
db dummyf_5730; // 041e:1550
db dummyf_5731[42];
db dummyf_575b; // 041e:157b
db dummyf_575c[3];
db dummyf_575f; // 041e:157f
db dummyf_5760; // 041e:1580
db dummyf_5761[2];
db dummyf_5763; // 041e:1583
db dummyf_5764; // 041e:1584
db dummyf_5765[6];
db dummyf_576b; // 041e:158b
db dummyf_576c; // 041e:158c
db dummyf_576d[3];
db dummyf_5770; // 041e:1590
db dummyf_5771; // 041e:1591
db dummyf_5772; // 041e:1592
db dummyf_5773; // 041e:1593
db dummyf_5774;
db dummyf_5775; // 041e:1595
db dummyf_5776; // 041e:1596
db dummyf_5777; // 041e:1597
db dummyf_5778; // 041e:1598
db dummyf_5779; // 041e:1599
db dummyf_577a; // 041e:159a
db dummyf_577b;
db dummyf_577c;
db dummyf_577d;
db dummyf_577e;
db dummyf_577f;
db __amiscovrexe0511; // 041e:15a0
db dummyf_5781; // 041e:15a1
db dummyf_5782; // 041e:15a2
db dummyf_5783; // 041e:15a3
db dummyf_5784; // 041e:15a4
db dummyf_5785; // 041e:15a5
db dummyf_5786; // 041e:15a6
db dummyf_5787; // 041e:15a7
db dummyf_5788; // 041e:15a8
db dummyf_5789; // 041e:15a9
db dummyf_578a; // 041e:15aa
db dummyf_578b; // 041e:15ab
db dummyf_578c; // 041e:15ac
db dummyf_578d; // 041e:15ad
db dummyf_578e; // 041e:15ae
db dummyf_578f; // 041e:15af
db dummyf_5790; // 041e:15b0
db dummyf_5791; // 041e:15b1
db byte_13d72; // 041e:15b2
db dummyf_5793; // 041e:15b3
dw dummyf_5794;
dw dummyf_5796;
dw dummyf_5798; // 041e:15b8
dw dummyf_579a; // 041e:15ba
dw dummyf_579c; // 041e:15bc
dw dummyf_579e; // 041e:15be
dw dummyf_57a0; // 041e:15c0
dw dummyf_57a2; // 041e:15c2
dw dummyf_57a4; // 041e:15c4
dw dummyf_57a6; // 041e:15c6
dw dummyf_57a8;
dw dummyf_57aa; // 041e:15ca
dw dummyf_57ac; // 041e:15cc
dw dummyf_57ae; // 041e:15ce
char __acopyrightc1988[64]; // 041e:15d0
db dummyf_57f0[155];
db dummyf_588b; // 041e:16ab
db dummyf_588c[21];
db dummyf_58a1; // 041e:16c1
db dummyf_58a2; // 041e:16c2
db dummyf_58a3; // 041e:16c3
db dummyf_58a4; // 041e:16c4
db dummyf_58a5; // 041e:16c5
db dummyf_58a6; // 041e:16c6
db dummyf_58a7; // 041e:16c7
db dummyf_58a8; // 041e:16c8
db dummyf_58a9; // 041e:16c9
db dummyf_58aa; // 041e:16ca
db dummyf_58ab;
db dummyf_58ac;
db dummyf_58ad;
db dummyf_58ae;
db dummyf_58af;
char __amgraphicexe091[21]; // 058b:0000
db dummyf_58c5;
db dummyf_58c6;
db dummyf_58c7;
db dummyf_58c8; // 058b:0018
db dummyf_58c9; // 058b:0019
db dummyf_58ca; // 058b:001a
db dummyf_58cb; // 058b:001b
db dummyf_58cc;
db dummyf_58cd;
db dummyf_58ce; // 058b:001e
db dummyf_58cf; // 058b:001f
db dummyf_58d0; // 058b:0020
db dummyf_58d1; // 058b:0021
dw dummyf_58d2; // 058b:0022
dw dummyf_58d4; // 058b:0024
dw dummyf_58d6; // 058b:0026
dw dummyf_58d8; // 058b:0028
dw dummyf_58da; // 058b:002a
dw dummyf_58dc; // 058b:002c
dw dummyf_58de; // 058b:002e
dw dummyf_58e0; // 058b:0030
dw dummyf_58e2; // 058b:0032
dw dummyf_58e4; // 058b:0034
dw dummyf_58e6; // 058b:0036
dw dummyf_58e8; // 058b:0038
dw dummyf_58ea; // 058b:003a
dw dummyf_58ec; // 058b:003c
dw dummyf_58ee; // 058b:003e
dw dummyf_58f0; // 058b:0040
dw dummyf_58f2; // 058b:0042
dw dummyf_58f4; // 058b:0044
dw dummyf_58f6; // 058b:0046
dw dummyf_58f8; // 058b:0048
dw dummyf_58fa; // 058b:004a
dw dummyf_58fc; // 058b:004c
dw dummyf_58fe; // 058b:004e
dw dummyf_5900; // 058b:0050
db dummyf_5902; // 058b:0052
db dummyf_5903; // 058b:0053
dw word_13ee4; // 058b:0054
dw dummyf_5906; // 058b:0056
dw dummyf_5908; // 058b:0058
dw dummyf_590a; // 058b:005a
dw dummyf_590c; // 058b:005c
dw dummyf_590e; // 058b:005e
dw dummyf_5910; // 058b:0060
dw dummyf_5912; // 058b:0062
dw dummyf_5914; // 058b:0064
dw dummyf_5916; // 058b:0066
dw dummyf_5918; // 058b:0068
dw dummyf_591a; // 058b:006a
dw dummyf_591c; // 058b:006c
dw dummyf_591e; // 058b:006e
dw dummyf_5920; // 058b:0070
dw dummyf_5922; // 058b:0072
dw dummyf_5924; // 058b:0074
dw dummyf_5926; // 058b:0076
dw dummyf_5928; // 058b:0078
db dummyf_592a[32]; // 058b:007a
db dummyf_594a[32]; // 058b:009a
db dummyf_596a; // 058b:00ba
db dummyf_596b; // 058b:00bb
db dummyf_596c; // 058b:00bc
db dummyf_596d; // 058b:00bd
db dummyf_596e; // 058b:00be
db dummyf_596f; // 058b:00bf
db dummyf_5970; // 058b:00c0
db dummyf_5971; // 058b:00c1
db dummyf_5972; // 058b:00c2
db dummyf_5973; // 058b:00c3
db dummyf_5974; // 058b:00c4
db dummyf_5975; // 058b:00c5
db dummyf_5976; // 058b:00c6
db dummyf_5977; // 058b:00c7
db dummyf_5978; // 058b:00c8
db dummyf_5979; // 058b:00c9
db dummyf_597a; // 058b:00ca
db dummyf_597b; // 058b:00cb
dw word_13f5c; // 058b:00cc
dw word_13f5e; // 058b:00ce
db dummyf_5980[32]; // 058b:00d0
db dummyf_59a0[32]; // 058b:00f0
db dummyf_59c0[32]; // 058b:0110
db dummyf_59e0[32]; // 058b:0130
db dummyf_5a00[32]; // 058b:0150
db dummyf_5a20[32]; // 058b:0170
db dummyf_5a40[32]; // 058b:0190
db dummyf_5a60[32]; // 058b:01b0
db dummyf_5a80[32]; // 058b:01d0
db dummyf_5aa0[32]; // 058b:01f0
db dummyf_5ac0[32]; // 058b:0210
db dummyf_5ae0[32]; // 058b:0230
db dummyf_5b00; // 058b:0250
db dummyf_5b01; // 058b:0251
db dummyf_5b02; // 058b:0252
db dummyf_5b03; // 058b:0253
db dummyf_5b04; // 058b:0254
db dummyf_5b05; // 058b:0255
db dummyf_5b06; // 058b:0256
db dummyf_5b07; // 058b:0257
db dummyf_5b08; // 058b:0258
db dummyf_5b09; // 058b:0259
db dummyf_5b0a; // 058b:025a
db dummyf_5b0b; // 058b:025b
db dummyf_5b0c; // 058b:025c
db dummyf_5b0d; // 058b:025d
db byte_140ee; // 058b:025e
db dummyf_5b0f[32]; // 058b:025f
db dummyf_5b2f[32]; // 058b:027f
db dummyf_5b4f[32]; // 058b:029f
db dummyf_5b6f[32]; // 058b:02bf
db dummyf_5b8f[32]; // 058b:02df
db dummyf_5baf[32]; // 058b:02ff
db dummyf_5bcf[32]; // 058b:031f
db dummyf_5bef; // 058b:033f
db dummyf_5bf0; // 058b:0340
db dummyf_5bf1; // 058b:0341
db dummyf_5bf2;
db dummyf_5bf3;
db dummyf_5bf4; // 058b:0344
db dummyf_5bf5;
db dummyf_5bf6; // 058b:0346
db dummyf_5bf7;
db dummyf_5bf8; // 058b:0348
db dummyf_5bf9; // 058b:0349
db dummyf_5bfa;
db dummyf_5bfb;
db dummyf_5bfc;
db dummyf_5bfd;
db dummyf_5bfe;
db dummyf_5bff[2]; // 058b:034f
db dummyf_5c01; // 058b:0351
db dummyf_5c02[10]; // 058b:0352
db dummyf_5c0c;
db dummyf_5c0d;
db dummyf_5c0e; // 058b:035e
db dummyf_5c0f;
db dummyf_5c10; // 058b:0360
db dummyf_5c11;
db dummyf_5c12;
db dummyf_5c13[6]; // 058b:0363
db byte_141f9[3]; // 058b:0369
db dummyf_5c1c; // 058b:036c
db dummyf_5c1d[6]; // 058b:036d
db dummyf_5c23; // 058b:0373
db dummyf_5c24[3]; // 058b:0374
db dummyf_5c27; // 058b:0377
db dummyf_5c28; // 058b:0378
db dummyf_5c29; // 058b:0379
db dummyf_5c2a; // 058b:037a
db dummyf_5c2b; // 058b:037b
db dummyf_5c2c; // 058b:037c
db byte_1420d; // 058b:037d
db dummyf_5c2e;
db dummyf_5c2f;
db dummyf_5c30;
db dummyf_5c31;
db dummyf_5c32; // 058b:0382
db dummyf_5c33;
db dummyf_5c34; // 058b:0384
db dummyf_5c35;
db dummyf_5c36; // 058b:0386
db dummyf_5c37;
db dummyf_5c38; // 058b:0388
db dummyf_5c39;
db dummyf_5c3a; // 058b:038a
db dummyf_5c3b; // 058b:038b
db dummyf_5c3c; // 058b:038c
db dummyf_5c3d; // 058b:038d
db dummyf_5c3e; // 058b:038e
db dummyf_5c3f;
db dummyf_5c40;
db byte_14221; // 058b:0391
db dummyf_5c42;
db dummyf_5c43;
db dummyf_5c44;
db dummyf_5c45;
db dummyf_5c46; // 058b:0396
db dummyf_5c47;
db dummyf_5c48;
db dummyf_5c49;
db dummyf_5c4a;
db dummyf_5c4b;
db dummyf_5c4c;
db dummyf_5c4d;
db dummyf_5c4e; // 058b:039e
db dummyf_5c4f;
db dummyf_5c50; // 058b:03a0
db dummyf_5c51; // 058b:03a1
db dummyf_5c52;
db dummyf_5c53; // 058b:03a3
db dummyf_5c54;
db byte_14235; // 058b:03a5
db dummyf_5c56;
db dummyf_5c57;
db dummyf_5c58;
db dummyf_5c59;
db dummyf_5c5a;
db dummyf_5c5b;
db dummyf_5c5c;
db dummyf_5c5d;
db dummyf_5c5e;
db dummyf_5c5f;
db dummyf_5c60;
db dummyf_5c61;
db dummyf_5c62;
db dummyf_5c63;
db dummyf_5c64;
db dummyf_5c65;
db dummyf_5c66;
db dummyf_5c67;
db dummyf_5c68;
db byte_14249; // 058b:03b9
db dummyf_5c6a;
db dummyf_5c6b;
db dummyf_5c6c;
db dummyf_5c6d;
db dummyf_5c6e;
db dummyf_5c6f;
db dummyf_5c70;
db dummyf_5c71;
db dummyf_5c72;
db dummyf_5c73; // 058b:03c3
db dummyf_5c74; // 058b:03c4
db dummyf_5c75;
db dummyf_5c76; // 058b:03c6
db dummyf_5c77; // 058b:03c7
db dummyf_5c78; // 058b:03c8
db dummyf_5c79; // 058b:03c9
db dummyf_5c7a; // 058b:03ca
db dummyf_5c7b; // 058b:03cb
db dummyf_5c7c;
db byte_1425d; // 058b:03cd
db dummyf_5c7e;
db dummyf_5c7f;
db dummyf_5c80;
db dummyf_5c81; // 058b:03d1
db dummyf_5c82; // 058b:03d2
db dummyf_5c83; // 058b:03d3
db dummyf_5c84; // 058b:03d4
db dummyf_5c85; // 058b:03d5
db dummyf_5c86; // 058b:03d6
db dummyf_5c87; // 058b:03d7
db dummyf_5c88; // 058b:03d8
db dummyf_5c89; // 058b:03d9
db dummyf_5c8a; // 058b:03da
db dummyf_5c8b; // 058b:03db
db byte_1426c; // 058b:03dc
db dummyf_5c8d[32]; // 058b:03dd
db dummyf_5cad; // 058b:03fd
db dummyf_5cae; // 058b:03fe
db dummyf_5caf; // 058b:03ff
db dummyf_5cb0; // 058b:0400
db dummyf_5cb1;
db dummyf_5cb2; // 058b:0402
db dummyf_5cb3;
db dummyf_5cb4; // 058b:0404
db dummyf_5cb5;
db dummyf_5cb6; // 058b:0406
db dummyf_5cb7;
db dummyf_5cb8; // 058b:0408
db dummyf_5cb9;
db dummyf_5cba; // 058b:040a
db dummyf_5cbb; // 058b:040b
db dummyf_5cbc; // 058b:040c
db dummyf_5cbd; // 058b:040d
db dummyf_5cbe; // 058b:040e
db dummyf_5cbf;
db dummyf_5cc0;
db dummyf_5cc1;
db dummyf_5cc2;
db dummyf_5cc3;
db dummyf_5cc4;
db dummyf_5cc5;
db dummyf_5cc6;
db dummyf_5cc7;
db byte_142a8; // 058b:0418
db dummyf_5cc9[32]; // 058b:0419
db dummyf_5ce9; // 058b:0439
db dummyf_5cea; // 058b:043a
db dummyf_5ceb;
db dummyf_5cec; // 058b:043c
db dummyf_5ced;
db dummyf_5cee; // 058b:043e
db dummyf_5cef; // 058b:043f
db dummyf_5cf0; // 058b:0440
db dummyf_5cf1;
db dummyf_5cf2;
db dummyf_5cf3; // 058b:0443
db dummyf_5cf4; // 058b:0444
db dummyf_5cf5; // 058b:0445
db dummyf_5cf6; // 058b:0446
db dummyf_5cf7; // 058b:0447
db dummyf_5cf8; // 058b:0448
db dummyf_5cf9; // 058b:0449
db dummyf_5cfa; // 058b:044a
db dummyf_5cfb; // 058b:044b
db dummyf_5cfc; // 058b:044c
db dummyf_5cfd; // 058b:044d
db dummyf_5cfe;
db dummyf_5cff[2]; // 058b:044f
db dummyf_5d01; // 058b:0451
db dummyf_5d02[10]; // 058b:0452
db dummyf_5d0c; // 058b:0452
db dummyf_5d0d; // 058b:045d
db dummyf_5d0e; // 058b:045e
db dummyf_5d0f;
db dummyf_5d10; // 058b:0460
db byte_142f1; // 058b:0461
db dummyf_5d12; // 058b:0462
db dummyf_5d13[10]; // 058b:0463
db dummyf_5d1d[10]; // 058b:0463
db dummyf_5d27[32]; // 058b:0477
db dummyf_5d47;
db dummyf_5d48;
db dummyf_5d49;
db dummyf_5d4a;
db dummyf_5d4b;
db dummyf_5d4c;
db dummyf_5d4d; // 058b:049d
db dummyf_5d4e; // 058b:049e
db dummyf_5d4f;
db dummyf_5d50; // 058b:04a0
db dummyf_5d51;
db dummyf_5d52;
db dummyf_5d53; // 058b:04a3
db dummyf_5d54;
db dummyf_5d55;
db dummyf_5d56;
db dummyf_5d57;
db dummyf_5d58;
db dummyf_5d59;
db dummyf_5d5a;
db byte_1433b; // 058b:04ab
db dummyf_5d5c[32]; // 058b:04ac
db dummyf_5d7c[32]; // 058b:04cc
db dummyf_5d9c[32]; // 058b:04ec
db dummyf_5dbc[32]; // 058b:050c
db dummyf_5ddc[32]; // 058b:052c
db dummyf_5dfc; // 058b:054c
db dummyf_5dfd; // 058b:054d
db dummyf_5dfe;
db dummyf_5dff[2]; // 058b:054f
db dummyf_5e01; // 058b:0551
db dummyf_5e02[10]; // 058b:0552
db dummyf_5e0c;
db dummyf_5e0d;
db dummyf_5e0e; // 058b:055e
db dummyf_5e0f; // 058b:055f
db dummyf_5e10; // 058b:0560
db dummyf_5e11; // 058b:0561
db dummyf_5e12; // 058b:0562
db dummyf_5e13[9]; // 058b:0563
db dummyf_5e1c; // 058b:056c
db dummyf_5e1d[5]; // 058b:056d
db dummyf_5e22; // 058b:0572
db dummyf_5e23; // 058b:0573
db dummyf_5e24[3]; // 058b:0574
db dummyf_5e27[32]; // 058b:0577
db dummyf_5e47[32]; // 058b:0597
db dummyf_5e67[32]; // 058b:05b7
db dummyf_5e87[32]; // 058b:05d7
db dummyf_5ea7; // 058b:05f7
db dummyf_5ea8; // 058b:05f8
db dummyf_5ea9; // 058b:05f9
db dummyf_5eaa; // 058b:05fa
db dummyf_5eab; // 058b:05fb
db byte_1448c; // 058b:05fc
db dummyf_5ead; // 058b:05fd
db dummyf_5eae; // 058b:05fe
db dummyf_5eaf; // 058b:05ff
db dummyf_5eb0; // 058b:0600
db dummyf_5eb1;
db dummyf_5eb2;
db dummyf_5eb3; // 058b:0603
db dummyf_5eb4; // 058b:0604
db dummyf_5eb5; // 058b:0605
db dummyf_5eb6; // 058b:0606
db dummyf_5eb7; // 058b:0607
db dummyf_5eb8; // 058b:0608
db dummyf_5eb9; // 058b:0609
db dummyf_5eba; // 058b:060a
db dummyf_5ebb; // 058b:060b
db dummyf_5ebc; // 058b:060c
db dummyf_5ebd; // 058b:060d
db dummyf_5ebe; // 058b:060e
db dummyf_5ebf; // 058b:060f
db dummyf_5ec0; // 058b:0610
db dummyf_5ec1; // 058b:0611
db dummyf_5ec2; // 058b:0612
db dummyf_5ec3; // 058b:0613
db dummyf_5ec4; // 058b:0614
db byte_144a5; // 058b:0615
db dummyf_5ec6[32]; // 058b:0616
db dummyf_5ee6; // 058b:0636
db dummyf_5ee7; // 058b:0637
db dummyf_5ee8; // 058b:0638
db dummyf_5ee9;
db dummyf_5eea;
db dummyf_5eeb;
db dummyf_5eec; // 058b:063c
db dummyf_5eed;
db dummyf_5eee; // 058b:063e
db dummyf_5eef; // 058b:063f
db dummyf_5ef0; // 058b:0640
db dummyf_5ef1;
db dummyf_5ef2;
db dummyf_5ef3; // 058b:0643
db dummyf_5ef4; // 058b:0644
db dummyf_5ef5; // 058b:0645
db dummyf_5ef6; // 058b:0646
db dummyf_5ef7; // 058b:0647
db dummyf_5ef8; // 058b:0648
db dummyf_5ef9; // 058b:0649
db dummyf_5efa; // 058b:064a
db dummyf_5efb; // 058b:064b
db dummyf_5efc; // 058b:064c
db dummyf_5efd; // 058b:064d
db dummyf_5efe;
db dummyf_5eff[2]; // 058b:064f
db dummyf_5f01; // 058b:0651
db dummyf_5f02[12]; // 058b:0652
db dummyf_5f0e; // 058b:065e
db dummyf_5f0f;
db dummyf_5f10; // 058b:0660
db dummyf_5f11; // 058b:0661
db dummyf_5f12; // 058b:0662
db dummyf_5f13[9]; // 058b:0663
db dummyf_5f1c; // 058b:066c
db dummyf_5f1d[6]; // 058b:066d
db dummyf_5f23; // 058b:0673
db dummyf_5f24[3]; // 058b:0674
db dummyf_5f27[32]; // 058b:0677
db dummyf_5f47; // 058b:0697
db dummyf_5f48; // 058b:0698
db dummyf_5f49; // 058b:0699
db dummyf_5f4a; // 058b:069a
db dummyf_5f4b; // 058b:069b
db dummyf_5f4c; // 058b:069c
db byte_1452d; // 058b:069d
db dummyf_5f4e; // 058b:069e
db dummyf_5f4f; // 058b:069f
db dummyf_5f50; // 058b:06a0
db dummyf_5f51;
db dummyf_5f52;
db dummyf_5f53; // 058b:06a3
db dummyf_5f54;
db dummyf_5f55;
db byte_14536; // 058b:06a6
db dummyf_5f57;
db dummyf_5f58;
db dummyf_5f59;
db dummyf_5f5a;
db dummyf_5f5b;
db byte_1453c; // 058b:06ac
db dummyf_5f5d;
db dummyf_5f5e;
db dummyf_5f5f;
db dummyf_5f60;
db dummyf_5f61;
db dummyf_5f62;
db dummyf_5f63;
db dummyf_5f64;
db dummyf_5f65;
db dummyf_5f66;
db dummyf_5f67;
db dummyf_5f68;
db dummyf_5f69;
db dummyf_5f6a;
db dummyf_5f6b;
db dummyf_5f6c;
db byte_1454d; // 058b:06bd
db dummyf_5f6e;
db dummyf_5f6f;
db dummyf_5f70;
db dummyf_5f71;
db byte_14552; // 058b:06c2
db dummyf_5f73[32]; // 058b:06c3
db dummyf_5f93[32]; // 058b:06e3
db dummyf_5fb3[32]; // 058b:0703
db dummyf_5fd3; // 058b:0723
db byte_145b4; // 058b:0724
db byte_145b5; // 058b:0725
db dummyf_5fd6; // 058b:0726
db dummyf_5fd7; // 058b:0727
db dummyf_5fd8; // 058b:0728
db dummyf_5fd9; // 058b:0729
db dummyf_5fda;
db dummyf_5fdb; // 058b:072b
db dummyf_5fdc; // 058b:072c
db dummyf_5fdd; // 058b:072d
db dummyf_5fde; // 058b:072e
db dummyf_5fdf; // 058b:072f
db dummyf_5fe0;
db dummyf_5fe1; // 058b:0731
db dummyf_5fe2; // 058b:0732
db dummyf_5fe3; // 058b:0733
db dummyf_5fe4; // 058b:0734
db dummyf_5fe5; // 058b:0735
db byte_145c6; // 058b:0736
db dummyf_5fe7; // 058b:0737
db dummyf_5fe8; // 058b:0738
db dummyf_5fe9;
db dummyf_5fea;
db dummyf_5feb;
db dummyf_5fec; // 058b:073c
db dummyf_5fed; // 058b:073d
db dummyf_5fee;
db dummyf_5fef; // 058b:073f
db dummyf_5ff0;
db dummyf_5ff1;
db dummyf_5ff2;
db dummyf_5ff3; // 058b:0743
db dummyf_5ff4;
db dummyf_5ff5; // 058b:0745
db dummyf_5ff6;
db dummyf_5ff7; // 058b:0747
db dummyf_5ff8; // 058b:0748
db dummyf_5ff9;
db dummyf_5ffa; // 058b:074a
db dummyf_5ffb; // 058b:074b
db dummyf_5ffc; // 058b:074c
db dummyf_5ffd; // 058b:074d
db dummyf_5ffe;
db dummyf_5fff[1];
db dummyf_6000; // 058b:0750
db dummyf_6001;
db dummyf_6002[9]; // 058b:0752
db dummyf_600b[2]; // 058b:0752
db dummyf_600d; // 058b:075d
db dummyf_600e; // 058b:075e
db dummyf_600f;
db dummyf_6010; // 058b:0760
db dummyf_6011; // 058b:0761
db dummyf_6012; // 058b:0762
db dummyf_6013[9]; // 058b:0763
db dummyf_601c; // 058b:076c
db dummyf_601d[6]; // 058b:076d
db dummyf_6023; // 058b:0773
db dummyf_6024[3]; // 058b:0774
db dummyf_6027[32]; // 058b:0777
db dummyf_6047[32]; // 058b:0797
db dummyf_6067;
db dummyf_6068;
db dummyf_6069;
db dummyf_606a;
db dummyf_606b;
db dummyf_606c;
db dummyf_606d;
db dummyf_606e;
db dummyf_606f;
db dummyf_6070;
db dummyf_6071;
db dummyf_6072;
db dummyf_6073; // 058b:07c3
db dummyf_6074;
db dummyf_6075; // 058b:07c5
db dummyf_6076; // 058b:07c6
db dummyf_6077; // 058b:07c7
db dummyf_6078; // 058b:07c8
db dummyf_6079;
db byte_1465a; // 058b:07ca
db dummyf_607b; // 058b:07cb
db dummyf_607c; // 058b:07cc
db dummyf_607d; // 058b:07cd
db dummyf_607e;
db dummyf_607f;
db dummyf_6080;
db dummyf_6081; // 058b:07d1
db dummyf_6082; // 058b:07d2
db dummyf_6083; // 058b:07d3
db dummyf_6084; // 058b:07d4
db dummyf_6085; // 058b:07d5
db dummyf_6086; // 058b:07d6
db dummyf_6087; // 058b:07d7
db dummyf_6088; // 058b:07d8
db dummyf_6089; // 058b:07d9
db dummyf_608a; // 058b:07da
db byte_1466b; // 058b:07db
db dummyf_608c[32]; // 058b:07dc
db dummyf_60ac[32]; // 058b:07fc
db dummyf_60cc[32]; // 058b:081c
db dummyf_60ec[32]; // 058b:083c
db dummyf_610c[32]; // 058b:085c
db dummyf_612c[32]; // 058b:087c
db dummyf_614c[32]; // 058b:089c
db dummyf_616c[32]; // 058b:08bc
db dummyf_618c; // 058b:08dc
db dummyf_618d; // 058b:08dd
db dummyf_618e; // 058b:08de
db dummyf_618f;
db dummyf_6190; // 058b:08e0
db dummyf_6191;
db dummyf_6192; // 058b:08e2
db dummyf_6193; // 058b:08e3
db dummyf_6194; // 058b:08e4
db dummyf_6195; // 058b:08e5
db dummyf_6196; // 058b:08e6
db dummyf_6197; // 058b:08e7
db dummyf_6198; // 058b:08e8
db dummyf_6199; // 058b:08e9
db dummyf_619a; // 058b:08ea
db dummyf_619b; // 058b:08eb
db dummyf_619c; // 058b:08ec
db dummyf_619d[1];
db dummyf_619e[32]; // 058b:08ee
db dummyf_61be[32]; // 058b:090e
db dummyf_61de[32]; // 058b:092e
db dummyf_61fe[32]; // 058b:094e
db dummyf_621e[32]; // 058b:096e
db dummyf_623e[32]; // 058b:098e
db dummyf_625e[32]; // 058b:09ae
db dummyf_627e[32]; // 058b:09ce
db dummyf_629e[32]; // 058b:09ee
db dummyf_62be[32]; // 058b:0a0e
db dummyf_62de[32]; // 058b:0a2e
db dummyf_62fe[32]; // 058b:0a4e
db dummyf_631e[32]; // 058b:0a6e
db dummyf_633e[32]; // 058b:0a8e
db dummyf_635e[32]; // 058b:0aae
db dummyf_637e[32]; // 058b:0ace
db dummyf_639e[32]; // 058b:0aee
db dummyf_63be[32]; // 058b:0b0e
db dummyf_63de[32]; // 058b:0b2e
db dummyf_63fe[32]; // 058b:0b4e
db dummyf_641e[32]; // 058b:0b6e
db dummyf_643e[32]; // 058b:0b8e
db dummyf_645e[32]; // 058b:0bae
db dummyf_647e[32]; // 058b:0bce
db dummyf_649e[32]; // 058b:0bee
db dummyf_64be[32]; // 058b:0c0e
db dummyf_64de[32]; // 058b:0c2e
db dummyf_64fe[32]; // 058b:0c4e
db dummyf_651e[32]; // 058b:0c6e
db dummyf_653e[32]; // 058b:0c8e
db dummyf_655e[32]; // 058b:0cae
db dummyf_657e[32]; // 058b:0cce
db dummyf_659e[32]; // 058b:0cee
db dummyf_65be[32]; // 058b:0d0e
db dummyf_65de[32]; // 058b:0d2e
db dummyf_65fe[32]; // 058b:0d4e
db dummyf_661e[32]; // 058b:0d6e
db dummyf_663e[32]; // 058b:0d8e
db dummyf_665e[32]; // 058b:0dae
db dummyf_667e;
db dummyf_667f; // 058b:0dcf
db dummyf_6680;
db dummyf_6681; // 058b:0dd1
db dummyf_6682; // 058b:0dd2
db dummyf_6683; // 058b:0dd3
db dummyf_6684; // 058b:0dd4
db dummyf_6685; // 058b:0dd5
db dummyf_6686; // 058b:0dd6
db dummyf_6687; // 058b:0dd7
db dummyf_6688; // 058b:0dd8
db dummyf_6689; // 058b:0dd9
db dummyf_668a; // 058b:0dda
db dummyf_668b; // 058b:0ddb
db dummyf_668c;
db dummyf_668d;
db dummyf_668e; // 058b:0dde
db byte_14c6f; // 058b:0ddf
db dummyf_6690[32]; // 058b:0de0
db dummyf_66b0[32]; // 058b:0e00
db dummyf_66d0[32]; // 058b:0e20
db dummyf_66f0[32]; // 058b:0e40
db dummyf_6710[32]; // 058b:0e60
db dummyf_6730[32]; // 058b:0e80
db dummyf_6750[32]; // 058b:0ea0
db dummyf_6770[32]; // 058b:0ec0
db dummyf_6790[32]; // 058b:0ee0
db dummyf_67b0[32]; // 058b:0f00
db dummyf_67d0[32]; // 058b:0f20
db dummyf_67f0[32]; // 058b:0f40
db dummyf_6810[32]; // 058b:0f60
db dummyf_6830[32]; // 058b:0f80
db dummyf_6850[32]; // 058b:0fa0
db dummyf_6870[32]; // 058b:0fc0
db dummyf_6890[32]; // 058b:0fe0
db dummyf_68b0[32]; // 058b:1000
db dummyf_68d0[32]; // 058b:1020
db dummyf_68f0[32]; // 058b:1040
db dummyf_6910[32]; // 058b:1060
db dummyf_6930[32]; // 058b:1080
db dummyf_6950[32]; // 058b:10a0
db dummyf_6970[32]; // 058b:10c0
db dummyf_6990[32]; // 058b:10e0
db dummyf_69b0[32]; // 058b:1100
db dummyf_69d0[32]; // 058b:1120
db dummyf_69f0[32]; // 058b:1140
db dummyf_6a10[32]; // 058b:1160
db dummyf_6a30[32]; // 058b:1180
db dummyf_6a50[32]; // 058b:11a0
db dummyf_6a70[32]; // 058b:11c0
db dummyf_6a90[32]; // 058b:11e0
db dummyf_6ab0[32]; // 058b:1200
db dummyf_6ad0[32]; // 058b:1220
db dummyf_6af0[32]; // 058b:1240
db dummyf_6b10[32]; // 058b:1260
db dummyf_6b30[32]; // 058b:1280
db dummyf_6b50[32]; // 058b:12a0
db dummyf_6b70[32]; // 058b:12c0
db dummyf_6b90[32]; // 058b:12e0
db dummyf_6bb0[32]; // 058b:1300
db dummyf_6bd0[32]; // 058b:1320
db dummyf_6bf0[32]; // 058b:1340
db dummyf_6c10[32]; // 058b:1360
db dummyf_6c30[32]; // 058b:1380
db dummyf_6c50[32]; // 058b:13a0
db dummyf_6c70[32]; // 058b:13c0
db dummyf_6c90[32]; // 058b:13e0
db dummyf_6cb0[32]; // 058b:1400
db dummyf_6cd0[32]; // 058b:1420
db dummyf_6cf0[32]; // 058b:1440
db dummyf_6d10[32]; // 058b:1460
db dummyf_6d30[32]; // 058b:1480
db dummyf_6d50[32]; // 058b:14a0
db dummyf_6d70[32]; // 058b:14c0
db dummyf_6d90[32]; // 058b:14e0
db dummyf_6db0[32]; // 058b:1500
db dummyf_6dd0[32]; // 058b:1520
db dummyf_6df0[32]; // 058b:1540
db dummyf_6e10[32]; // 058b:1560
db dummyf_6e30[32]; // 058b:1580
db dummyf_6e50[32]; // 058b:15a0
db dummyf_6e70[32]; // 058b:15c0
db dummyf_6e90[32]; // 058b:15e0
db dummyf_6eb0[32]; // 058b:1600
db dummyf_6ed0[32]; // 058b:1620
db dummyf_6ef0[32]; // 058b:1640
db dummyf_6f10[32]; // 058b:1660
db dummyf_6f30[32]; // 058b:1680
db dummyf_6f50[32]; // 058b:16a0
db dummyf_6f70[32]; // 058b:16c0
db dummyf_6f90[32]; // 058b:16e0
db dummyf_6fb0[32]; // 058b:1700
db dummyf_6fd0[32]; // 058b:1720
db dummyf_6ff0[32]; // 058b:1740
db dummyf_7010[32]; // 058b:1760
db dummyf_7030[32]; // 058b:1780
db dummyf_7050[32]; // 058b:17a0
db dummyf_7070[32]; // 058b:17c0
db dummyf_7090[32]; // 058b:17e0
db dummyf_70b0[32]; // 058b:1800
db dummyf_70d0[32]; // 058b:1820
db dummyf_70f0[32]; // 058b:1840
db dummyf_7110[32]; // 058b:1860
db dummyf_7130[32]; // 058b:1880
db dummyf_7150[32]; // 058b:18a0
db dummyf_7170[32]; // 058b:18c0
db dummyf_7190[32]; // 058b:18e0
db dummyf_71b0[32]; // 058b:1900
db dummyf_71d0[32]; // 058b:1920
db dummyf_71f0[32]; // 058b:1940
db dummyf_7210[32]; // 058b:1960
db dummyf_7230[32]; // 058b:1980
db dummyf_7250[32]; // 058b:19a0
db dummyf_7270[32]; // 058b:19c0
db dummyf_7290[32]; // 058b:19e0
db dummyf_72b0[32]; // 058b:1a00
db dummyf_72d0[32]; // 058b:1a20
db dummyf_72f0[32]; // 058b:1a40
db dummyf_7310[32]; // 058b:1a60
db dummyf_7330[32]; // 058b:1a80
db dummyf_7350[32]; // 058b:1aa0
db dummyf_7370[32]; // 058b:1ac0
db dummyf_7390[32]; // 058b:1ae0
db dummyf_73b0[32]; // 058b:1b00
db dummyf_73d0;
db dummyf_73d1;
char ainsufficientme[65]; // 058b:1b22
char dummyf_7413[11]; // 058b:1b22
dw word_159fe; // 058b:1b6e
dw word_15a00; // 058b:1b70
dw word_15a02; // 058b:1b72
dw word_15a04; // 058b:1b74
dw word_15a06; // 058b:1b76
dw word_15a08; // 058b:1b78
db byte_15a0a; // 058b:1b7a
db dummyf_742b; // 058b:1b7b
db dummyf_742c; // 058b:1b7c
db dummyf_742d; // 058b:1b7d
db dummyf_742e; // 058b:1b7e
db dummyf_742f; // 058b:1b7f
db dummyf_7430; // 058b:1b80
db dummyf_7431; // 058b:1b81
db dummyf_7432; // 058b:1b82
db dummyf_7433; // 058b:1b83
db dummyf_7434; // 058b:1b84
db dummyf_7435;
db dummyf_7436;
db dummyf_7437;
db dummyf_7438;
db dummyf_7439;
db dummyf_743a; // 058b:1b8a
db dummyf_743b;
db dummyf_743c; // 058b:1b8c
db dummyf_743d;
db dummyf_743e;
db dummyf_743f; // 058b:1b8f
db dummyf_7440; // 058b:1b90
db dummyf_7441[4]; // 058b:1b91
db dummyf_7445;
db dummyf_7446; // 058b:1b96
db dummyf_7447; // 058b:1b97
db dummyf_7448; // 058b:1b98
db dummyf_7449;
db dummyf_744a; // 058b:1b9a
db dummyf_744b; // 058b:1b9b
db dummyf_744c; // 058b:1b9c
db dummyf_744d; // 058b:1b9d
db dummyf_744e; // 058b:1b9e
db dummyf_744f; // 058b:1b9f
db dummyf_7450; // 058b:1ba0
db dummyf_7451; // 058b:1ba1
db dummyf_7452; // 058b:1ba2
db dummyf_7453; // 058b:1ba3
db dummyf_7454; // 058b:1ba4
db dummyf_7455; // 058b:1ba5
db dummyf_7456; // 058b:1ba6
db dummyf_7457; // 058b:1ba7
db dummyf_7458; // 058b:1ba8
db dummyf_7459[4]; // 058b:1ba9
db dummyf_745d; // 058b:1bad
db dummyf_745e; // 058b:1bae
db dummyf_745f[5]; // 058b:1baf
db dummyf_7464[32]; // 058b:1bb4
db dummyf_7484[32]; // 058b:1bd4
db dummyf_74a4[32]; // 058b:1bf4
db dummyf_74c4[32]; // 058b:1c14
db dummyf_74e4[32]; // 058b:1c34
db dummyf_7504[32]; // 058b:1c54
db dummyf_7524; // 058b:1c74
db dummyf_7525;
db byte_15b06; // 058b:1c76
db byte_15b07; // 058b:1c77
dw word_15b08; // 058b:1c78
dw word_15b0a; // 058b:1c7a
db byte_15b0c; // 058b:1c7c
db byte_15b0d; // 058b:1c7d
db byte_15b0e; // 058b:1c7e
db byte_15b0f; // 058b:1c7f
dw word_15b10; // 058b:1c80
dw word_15b12; // 058b:1c82
db dummyf_7534[32]; // 058b:1c84
db dummyf_7554[32]; // 058b:1ca4
db dummyf_7574; // 058b:1cc4
db dummyf_7575;
db dummyf_7576; // 058b:1cc6
db dummyf_7577;
db byte_15b58[6]; // 058b:1cc8
char acopyrightc1988[63]; // 058b:1cce
db dummyf_75bd[1];
db dummyf_75be[2]; // 075b:000e
db dummyf_75c0[13]; // 075b:0010
db dummyf_75cd[12]; // 075b:0010
db dummyf_75d9[11]; // 075b:0010
db dummyf_75e4[11]; // 075b:0010
db dummyf_75ef[11]; // 075b:0010
db dummyf_75fa[11]; // 075b:0010
db dummyf_7605[11]; // 075b:0010
db dummyf_7610[11]; // 075b:0010
db dummyf_761b[11]; // 075b:0010
db dummyf_7626[11]; // 075b:0010
db dummyf_7631[11]; // 075b:0010
db dummyf_763c[11]; // 075b:0010
db dummyf_7647[11]; // 075b:0010
db dummyf_7652[11]; // 075b:0010
db dummyf_765d[11]; // 075b:0010
db dummyf_7668[11]; // 075b:0010
db dummyf_7673[11]; // 075b:0010
db dummyf_767e[11]; // 075b:0010
db dummyf_7689[11]; // 075b:0010
db dummyf_7694[11]; // 075b:0010
db dummyf_769f[11]; // 075b:0010
db dummyf_76aa[11]; // 075b:0010
db dummyf_76b5[11]; // 075b:0010
db dummyf_76c0[10]; // 075b:0010
db dummyf_76ca[10]; // 075b:0010
db dummyf_76d4[10]; // 075b:0010
db dummyf_76de[10]; // 075b:0010
db dummyf_76e8[10]; // 075b:0010
db dummyf_76f2[10]; // 075b:0010
db dummyf_76fc[10]; // 075b:0010
db dummyf_7706[10]; // 075b:0010
db dummyf_7710[10]; // 075b:0010
db dummyf_771a[10]; // 075b:0010
db dummyf_7724[10]; // 075b:0010
db dummyf_772e[10]; // 075b:0010
db dummyf_7738[10]; // 075b:0010
db dummyf_7742[10]; // 075b:0010
db dummyf_774c[2]; // 075b:0010
dw word_15d2e; // 075b:019e
dw word_15d30; // 075b:01a0
db byte_15d32; // 075b:01a2
db dummyf_7753[33];
db dummyf_7774; // 075b:01c4
db dummyf_7775[13];
dw word_15d62; // 075b:01d2
db _unk_15d64; // 075b:01d4
db dummyf_7785; // 075b:01d5
dw word_15d66; // 075b:01d6
dw word_15d68; // 075b:01d8
db byte_15d6a; // 075b:01da
db dummyf_778b;
dw word_15d6c; // 075b:01dc
dw word_15d6e; // 075b:01de
db dummyf_7790[73];
db dummyf_77d9; // 075b:0229
db dummyf_77da[575];
db dummyf_7a19; // 075b:0469
db dummyf_7a1a[242];
db dummyf_7b0c; // 075b:055c
db dummyf_7b0d[261];
db dummyf_7c12; // 075b:0662
db dummyf_7c13[30];
dw word_16211; // 075b:0681
dw seg_16213; // 075b:0683
dw dummyf_7c35; // 075b:0685
db dummyf_7c37;
db dummyf_7c38;
db dummyf_7c39;
db dummyf_7c3a;
db dummyf_7c3b[201];
db dummyf_7d04; // 075b:0754
db dummyf_7d05[13];
db dummyf_7d12; // 075b:0762
db dummyf_7d13[19];
db dummyf_7d26; // 075b:0776
db dummyf_7d27[27];
db dummyf_7d42; // 075b:0792
db dummyf_7d43[13];
db dummyf_7d50; // 075b:07a0
db dummyf_7d51[19];
db dummyf_7d64; // 075b:07b4
db dummyf_7d65[429];
db dummyf_7f12; // 075b:0962
db dummyf_7f13[79];
db byte_16542; // 075b:09b2
db dummyf_7f63[167];
dw dummyf_800a; // 075b:0a5a
db dummyf_800c[122];
db dummyf_8086; // 075b:0ad6
db dummyf_8087; // 075b:0ad7
char af15[3]; // 075b:0ad8
db dummyf_808b[32]; // 075b:0adb
db dummyf_80ab[32]; // 075b:0afb
db dummyf_80cb[32]; // 075b:0b1b
db dummyf_80eb;
db dummyf_80ec;
db dummyf_80ed;
db dummyf_80ee;
db dummyf_80ef;
db dummyf_80f0;
db dummyf_80f1;
db dummyf_80f2;
db dummyf_80f3;
db dummyf_80f4; // 075b:0b44
db dummyf_80f5;
db dummyf_80f6;
db dummyf_80f7;
db dummyf_80f8;
db dummyf_80f9;
db dummyf_80fa;
db dummyf_80fb;
db dummyf_80fc;
db dummyf_80fd;
db dummyf_80fe; // 075b:0b4e
db dummyf_80ff;
db dummyf_8100;
db unk_166e1; // 075b:0b51
db dummyf_8102[32]; // 075b:0b52
db dummyf_8122[32]; // 075b:0b72
db dummyf_8142[32]; // 075b:0b92
db dummyf_8162[32]; // 075b:0bb2
db dummyf_8182[32]; // 075b:0bd2
db dummyf_81a2[32]; // 075b:0bf2
db dummyf_81c2[32]; // 075b:0c12
db dummyf_81e2[32]; // 075b:0c32
db dummyf_8202[32]; // 075b:0c52
db dummyf_8222[32]; // 075b:0c72
db dummyf_8242[32]; // 075b:0c92
db dummyf_8262[32]; // 075b:0cb2
db dummyf_8282[32]; // 075b:0cd2
db dummyf_82a2[32]; // 075b:0cf2
db dummyf_82c2[32]; // 075b:0d12
db dummyf_82e2[32]; // 075b:0d32
db dummyf_8302[32]; // 075b:0d52
db dummyf_8322[32]; // 075b:0d72
db dummyf_8342[32]; // 075b:0d92
db dummyf_8362[32]; // 075b:0db2
db dummyf_8382[32]; // 075b:0dd2
db dummyf_83a2[32]; // 075b:0df2
db dummyf_83c2[32]; // 075b:0e12
db dummyf_83e2[32]; // 075b:0e32
db dummyf_8402[32]; // 075b:0e52
db dummyf_8422[32]; // 075b:0e72
db dummyf_8442[32]; // 075b:0e92
db dummyf_8462[32]; // 075b:0eb2
db dummyf_8482[32]; // 075b:0ed2
db dummyf_84a2[32]; // 075b:0ef2
db dummyf_84c2[32]; // 075b:0f12
db dummyf_84e2[32]; // 075b:0f32
db dummyf_8502[32]; // 075b:0f52
db dummyf_8522[32]; // 075b:0f72
db dummyf_8542[32]; // 075b:0f92
db dummyf_8562[32]; // 075b:0fb2
db dummyf_8582[32]; // 075b:0fd2
db dummyf_85a2[32]; // 075b:0ff2
db dummyf_85c2[32]; // 075b:1012
db dummyf_85e2[32]; // 075b:1032
db dummyf_8602[32]; // 075b:1052
db dummyf_8622;
db dummyf_8623;
db dummyf_8624;
db dummyf_8625; // 075b:1075
db dummyf_8626; // 075b:1076
db dummyf_8627; // 075b:1077
db dummyf_8628; // 075b:1078
db dummyf_8629; // 075b:1079
db dummyf_862a;
db dummyf_862b[23]; // 075b:107b
db dummyf_8642[13]; // 075b:107b
db dummyf_864f[95]; // 075b:107b
db dummyf_86ae[50]; // 075b:107b
db dummyf_86e0[20]; // 075b:107b
db dummyf_86f4[20]; // 075b:107b
db dummyf_8708[20]; // 075b:107b
db dummyf_871c[20]; // 075b:107b
db dummyf_8730[20]; // 075b:107b
db dummyf_8744[20]; // 075b:107b
db dummyf_8758[29]; // 075b:107b
db dummyf_8775[11]; // 075b:107b
db dummyf_8780[12]; // 075b:107b
db dummyf_878c[75]; // 075b:107b
db dummyf_87d7[70]; // 075b:107b
db dummyf_881d[39]; // 075b:107b
db dummyf_8844[40]; // 075b:107b
db dummyf_886c[40]; // 075b:107b
db dummyf_8894[33]; // 075b:107b
db dummyf_88b5[14]; // 075b:107b
db dummyf_88c3[15]; // 075b:107b
db dummyf_88d2[128]; // 075b:107b
db dummyf_8952[40]; // 075b:107b
db dummyf_897a[40]; // 075b:107b
db dummyf_89a2[40]; // 075b:107b
db dummyf_89ca[35]; // 075b:107b
db dummyf_89ed[165]; // 075b:107b
db dummyf_8a92[20]; // 075b:107b
db dummyf_8aa6[20]; // 075b:107b
db dummyf_8aba[20]; // 075b:107b
db dummyf_8ace[20]; // 075b:107b
db dummyf_8ae2[20]; // 075b:107b
db dummyf_8af6[20]; // 075b:107b
db dummyf_8b0a[23]; // 075b:107b
db dummyf_8b21[120]; // 075b:107b
db dummyf_8b99[78]; // 075b:107b
db dummyf_8be7[40]; // 075b:107b
db dummyf_8c0f[40]; // 075b:107b
db dummyf_8c37[42]; // 075b:107b
db dummyf_8c61[118]; // 075b:107b
db dummyf_8cd7[60]; // 075b:107b
db dummyf_8d13[40]; // 075b:107b
db dummyf_8d3b[40]; // 075b:107b
db dummyf_8d63[40]; // 075b:107b
db dummyf_8d8b[35]; // 075b:107b
db dummyf_8dae[130]; // 075b:107b
db dummyf_8e30[45]; // 075b:107b
db dummyf_8e5d[20]; // 075b:107b
db dummyf_8e71[20]; // 075b:107b
db dummyf_8e85[20]; // 075b:107b
db dummyf_8e99[20]; // 075b:107b
db dummyf_8ead[20]; // 075b:107b
db dummyf_8ec1[20]; // 075b:107b
db dummyf_8ed5[98]; // 075b:107b
db dummyf_8f37[66]; // 075b:107b
db dummyf_8f79[48]; // 075b:107b
db dummyf_8fa9[39]; // 075b:107b
db dummyf_8fd0[40]; // 075b:107b
db dummyf_8ff8[42]; // 075b:107b
db dummyf_9022[120]; // 075b:107b
db dummyf_909a[59]; // 075b:107b
db dummyf_90d5[39]; // 075b:107b
db dummyf_90fc[40]; // 075b:107b
db dummyf_9124[40]; // 075b:107b
db dummyf_914c[30]; // 075b:107b
db dummyf_916a[130]; // 075b:107b
db dummyf_91ec[45]; // 075b:107b
db dummyf_9219[20]; // 075b:107b
db dummyf_922d; // 075b:107b
db dummyf_922e[19]; // 075b:1c7e
db dummyf_9241[20]; // 075b:1c7e
db dummyf_9255[20]; // 075b:1c7e
db dummyf_9269[20]; // 075b:1c7e
db dummyf_927d[20]; // 075b:1c7e
db dummyf_9291[25]; // 075b:1c7e
db dummyf_92aa[142]; // 075b:1c7e
db dummyf_9338[40]; // 075b:1c7e
db dummyf_9360[39]; // 075b:1c7e
db dummyf_9387[40]; // 075b:1c7e
db dummyf_93af[40]; // 075b:1c7e
db dummyf_93d7[152]; // 075b:1c7e
db dummyf_946f[48]; // 075b:1c7e
db dummyf_949f[40]; // 075b:1c7e
db dummyf_94c7[40]; // 075b:1c7e
db dummyf_94ef[40]; // 075b:1c7e
db dummyf_9517[152]; // 075b:1c7e
db dummyf_95af[16]; // 075b:1c7e
db dummyf_95bf[28]; // 075b:1c7e
db dummyf_95db[19]; // 075b:1c7e
db dummyf_95ee[20]; // 075b:1c7e
db dummyf_9602[20]; // 075b:1c7e
db dummyf_9616[20]; // 075b:1c7e
db dummyf_962a[20]; // 075b:1c7e
db dummyf_963e[20]; // 075b:1c7e
db dummyf_9652[133]; // 075b:1c7e
db dummyf_96d7[30]; // 075b:1c7e
db dummyf_96f5[33]; // 075b:1c7e
db dummyf_9716[40]; // 075b:1c7e
db dummyf_973e[40]; // 075b:1c7e
db dummyf_9766[40]; // 075b:1c7e
db dummyf_978e[140]; // 075b:1c7e
db dummyf_981a[30]; // 075b:1c7e
db dummyf_9838[40]; // 075b:1c7e
db dummyf_9860[40]; // 075b:1c7e
db dummyf_9888[40]; // 075b:1c7e
db dummyf_98b0[40]; // 075b:1c7e
db dummyf_98d8[159]; // 075b:1c7e
db dummyf_9977[27]; // 075b:1c7e
db dummyf_9992[19]; // 075b:1c7e
db dummyf_99a5[20]; // 075b:1c7e
db dummyf_99b9[20]; // 075b:1c7e
db dummyf_99cd[20]; // 075b:1c7e
db dummyf_99e1[20]; // 075b:1c7e
db dummyf_99f5[20]; // 075b:1c7e
db dummyf_9a09[100]; // 075b:1c7e
db dummyf_9a6d[82]; // 075b:1c7e
db dummyf_9abf[44]; // 075b:1c7e
db dummyf_9aeb[40]; // 075b:1c7e
db dummyf_9b13[40]; // 075b:1c7e
db dummyf_9b3b[46]; // 075b:1c7e
db dummyf_9b69[136]; // 075b:1c7e
db dummyf_9bf1[38]; // 075b:1c7e
db dummyf_9c17[40]; // 075b:1c7e
db dummyf_9c3f[40]; // 075b:1c7e
db dummyf_9c67[40]; // 075b:1c7e
db dummyf_9c8f[111]; // 075b:1c7e
db byte_182de[62]; // 075b:274e
db dummyf_9d3c[23]; // 075b:274e
db dummyf_9d53[19]; // 075b:274e
db dummyf_9d66[20]; // 075b:274e
db dummyf_9d7a[20]; // 075b:274e
db dummyf_9d8e[20]; // 075b:274e
db dummyf_9da2[20]; // 075b:274e
db dummyf_9db6[20]; // 075b:274e
db dummyf_9dca[30]; // 075b:274e
db dummyf_9de8[115]; // 075b:274e
db dummyf_9e5b[44]; // 075b:274e
db dummyf_9e87[47]; // 075b:274e
db dummyf_9eb6[40]; // 075b:274e
db dummyf_9ede[40]; // 075b:274e
db dummyf_9f06[34]; // 075b:274e
db dummyf_9f28[114]; // 075b:274e
db dummyf_9f9a[45]; // 075b:274e
db dummyf_9fc7[38]; // 075b:274e
db dummyf_9fed[39]; // 075b:274e
db dummyf_a014[40]; // 075b:274e
db dummyf_a03c[40]; // 075b:274e
db dummyf_a064[111]; // 075b:274e
db dummyf_a0d3[47]; // 075b:274e
db dummyf_a102[27]; // 075b:274e
db dummyf_a11d[20]; // 075b:274e
db dummyf_a131[20]; // 075b:274e
db dummyf_a145[20]; // 075b:274e
db dummyf_a159[20]; // 075b:274e
db dummyf_a16d[20]; // 075b:274e
db dummyf_a181[20]; // 075b:274e
db dummyf_a195[23]; // 075b:274e
db dummyf_a1ac[114]; // 075b:274e
db dummyf_a21e[60]; // 075b:274e
db dummyf_a25a[39]; // 075b:274e
db dummyf_a281[40]; // 075b:274e
db dummyf_a2a9[40]; // 075b:274e
db dummyf_a2d1[86]; // 075b:274e
db dummyf_a327[55]; // 075b:274e
db dummyf_a35e[60]; // 075b:274e
db dummyf_a39a[39]; // 075b:274e
db dummyf_a3c1[40]; // 075b:274e
db dummyf_a3e9[40]; // 075b:274e
db dummyf_a411[130]; // 075b:274e
db dummyf_a493[55]; // 075b:274e
db dummyf_a4ca[25]; // 075b:274e
db dummyf_a4e3[20]; // 075b:274e
db dummyf_a4f7[20]; // 075b:274e
db dummyf_a50b[20]; // 075b:274e
db dummyf_a51f[20]; // 075b:274e
db dummyf_a533[20]; // 075b:274e
db dummyf_a547[20]; // 075b:274e
db dummyf_a55b[124]; // 075b:274e
db dummyf_a5d7[57]; // 075b:274e
db dummyf_a610[32]; // 075b:274e
db dummyf_a630[32]; // 075b:274e
db dummyf_a650[32]; // 075b:274e
db dummyf_a670[117]; // 075b:274e
db dummyf_a6e5[102]; // 075b:274e
db dummyf_a74b[29]; // 075b:274e
db dummyf_a768[69]; // 075b:274e
db dummyf_a7ad[29]; // 075b:274e
db dummyf_a7ca[144]; // 075b:274e
db dummyf_a85a[69]; // 075b:274e
db dummyf_a89f[14]; // 075b:274e
db dummyf_a8ad[16]; // 075b:274e
db dummyf_a8bd[23]; // 075b:274e
db dummyf_a8d4[24]; // 075b:274e
db dummyf_a8ec[16]; // 075b:274e
db dummyf_a8fc[14]; // 075b:274e
db dummyf_a90a[142]; // 075b:274e
db dummyf_a998[62]; // 075b:274e
db byte_18fb6[15]; // 075b:3426
db dummyf_a9e5[13]; // 075b:3426
db dummyf_a9f2[21]; // 075b:3426
db dummyf_aa07[14]; // 075b:3426
db dummyf_aa15[16]; // 075b:3426
db dummyf_aa25[20]; // 075b:3426
db dummyf_aa39[13]; // 075b:3426
db dummyf_aa46[142]; // 075b:3426
db dummyf_aad4[62]; // 075b:3426
db dummyf_ab12[18]; // 075b:3426
db dummyf_ab24[14]; // 075b:3426
db dummyf_ab32[10]; // 075b:3426
db dummyf_ab3c[14]; // 075b:3426
db dummyf_ab4a[20]; // 075b:3426
db dummyf_ab5e[15]; // 075b:3426
db dummyf_ab6d[10]; // 075b:3426
db dummyf_ab77[13]; // 075b:3426
db dummyf_ab84[98]; // 075b:3426
db dummyf_abe6[110]; // 075b:3426
db dummyf_ac54[15]; // 075b:3426
db dummyf_ac63[19]; // 075b:3426
db dummyf_ac76[15]; // 075b:3426
db dummyf_ac85[15]; // 075b:3426
db dummyf_ac94[15]; // 075b:3426
db dummyf_aca3[11]; // 075b:3426
db dummyf_acae[20]; // 075b:3426
db dummyf_acc2[97]; // 075b:3426
db dummyf_ad23[114]; // 075b:3426
db dummyf_ad95[22]; // 075b:3426
db dummyf_adab[18]; // 075b:3426
db dummyf_adbd[15]; // 075b:3426
db dummyf_adcc[21]; // 075b:3426
db dummyf_ade1[14]; // 075b:3426
db dummyf_adef[20]; // 075b:3426
db dummyf_ae03[200]; // 075b:3426
db dummyf_aecb[47]; // 075b:3426
db dummyf_aefa[26]; // 075b:3426
db dummyf_af14[26]; // 075b:3426
db dummyf_af2e[120]; // 075b:3426
db dummyf_afa6[122]; // 075b:3426
db dummyf_b020[32]; // 075b:3426
db dummyf_b040[32]; // 075b:3426
db dummyf_b060[32]; // 075b:3426
db dummyf_b080[212]; // 075b:3426
db dummyf_b154[31]; // 075b:3426
db dummyf_b173[75]; // 075b:3426
db dummyf_b1be[151]; // 075b:3426
db dummyf_b255[38]; // 075b:3426
db dummyf_b27b[36]; // 075b:3426
db dummyf_b29f[16]; // 075b:3426
db dummyf_b2af[24]; // 075b:3426
db dummyf_b2c7[19]; // 075b:3426
db dummyf_b2da[26]; // 075b:3426
db dummyf_b2f4[13]; // 075b:3426
db dummyf_b301[97]; // 075b:3426
db dummyf_b362[106]; // 075b:3426
db dummyf_b3cc[17]; // 075b:3426
db dummyf_b3dd[16]; // 075b:3426
db dummyf_b3ed[17]; // 075b:3426
db dummyf_b3fe[19]; // 075b:3426
db dummyf_b411[17]; // 075b:3426
db dummyf_b422[21]; // 075b:3426
db dummyf_b437[13]; // 075b:3426
db dummyf_b444[27]; // 075b:3426
db dummyf_b45f[156]; // 075b:3426
db dummyf_b4fb[28]; // 075b:3426
db dummyf_b517[19]; // 075b:3426
db dummyf_b52a[13]; // 075b:3426
db dummyf_b537[16]; // 075b:3426
db dummyf_b547[19]; // 075b:3426
db dummyf_b55a[19]; // 075b:3426
db dummyf_b56d[14]; // 075b:3426
db dummyf_b57b[8]; // 075b:3426
db dummyf_b583; // 075b:3fd3
db dummyf_b584; // 075b:3fd4
db dummyf_b585; // 075b:3fd5
db dummyf_b586;
db dummyf_b587;
db dummyf_b588;
db dummyf_b589;
db dummyf_b58a; // 075b:3fda
db dummyf_b58b; // 075b:3fdb
db dummyf_b58c; // 075b:3fdc
db dummyf_b58d; // 075b:3fdd
db dummyf_b58e; // 075b:3fde
db dummyf_b58f;
db dummyf_b590;
db dummyf_b591;
db dummyf_b592[25]; // 075b:3fe2
db dummyf_b5ab[32]; // 075b:3ffb
db dummyf_b5cb;
db dummyf_b5cc;
db dummyf_b5cd;
db dummyf_b5ce;
db dummyf_b5cf;
db dummyf_b5d0;
db dummyf_b5d1;
db dummyf_b5d2;
db dummyf_b5d3;
db dummyf_b5d4;
db dummyf_b5d5;
db dummyf_b5d6;
db dummyf_b5d7;
db dummyf_b5d8;
db dummyf_b5d9;
db dummyf_b5da;
db dummyf_b5db;
db dummyf_b5dc;
db dummyf_b5dd;
db dummyf_b5de;
db dummyf_b5df;
db dummyf_b5e0;
db dummyf_b5e1[107]; // 075b:4031
db dummyf_b64c[5]; // 075b:4031
db dummyf_b651[32]; // 075b:40a1
db dummyf_b671[32]; // 075b:40c1
db dummyf_b691[32]; // 075b:40e1
db dummyf_b6b1[32]; // 075b:4101
db dummyf_b6d1;
db dummyf_b6d2[25]; // 075b:4122
db dummyf_b6eb[32]; // 075b:413b
db dummyf_b70b;
db dummyf_b70c;
db dummyf_b70d;
db dummyf_b70e;
db dummyf_b70f;
db dummyf_b710;
db dummyf_b711;
db dummyf_b712;
db dummyf_b713;
db dummyf_b714;
db dummyf_b715;
db dummyf_b716;
db dummyf_b717;
db dummyf_b718;
db dummyf_b719;
db dummyf_b71a;
db dummyf_b71b;
db dummyf_b71c;
db dummyf_b71d;
db dummyf_b71e;
db dummyf_b71f;
db dummyf_b720;
db dummyf_b721[108]; // 075b:4171
db dummyf_b78d[4]; // 075b:4171
db dummyf_b791[32]; // 075b:41e1
db dummyf_b7b1[32]; // 075b:4201
db dummyf_b7d1[32]; // 075b:4221
db dummyf_b7f1[32]; // 075b:4241
db dummyf_b811;
db dummyf_b812[3]; // 075b:4262
db _unk_19df5[22]; // 075b:4265
db dummyf_b82b[32]; // 075b:427b
db dummyf_b84b;
db dummyf_b84c;
db dummyf_b84d;
db dummyf_b84e;
db dummyf_b84f;
db dummyf_b850;
db dummyf_b851;
db dummyf_b852;
db dummyf_b853;
db dummyf_b854;
db dummyf_b855;
db dummyf_b856;
db dummyf_b857;
db dummyf_b858;
db dummyf_b859;
db dummyf_b85a;
db dummyf_b85b;
db dummyf_b85c;
db dummyf_b85d;
db dummyf_b85e;
db dummyf_b85f;
db dummyf_b860;
db dummyf_b861[108]; // 075b:42b1
db dummyf_b8cd[4]; // 075b:42b1
db dummyf_b8d1[32]; // 075b:4321
db dummyf_b8f1[32]; // 075b:4341
db dummyf_b911[32]; // 075b:4361
db dummyf_b931[32]; // 075b:4381
db dummyf_b951;
db dummyf_b952[25]; // 075b:43a2
db dummyf_b96b[32]; // 075b:43bb
db dummyf_b98b;
db dummyf_b98c;
db dummyf_b98d;
db dummyf_b98e;
db dummyf_b98f;
db dummyf_b990;
db dummyf_b991;
db dummyf_b992;
db dummyf_b993;
db dummyf_b994;
db dummyf_b995;
db dummyf_b996;
db dummyf_b997;
db dummyf_b998;
db dummyf_b999;
db dummyf_b99a;
db dummyf_b99b;
db dummyf_b99c;
db dummyf_b99d;
db dummyf_b99e;
db dummyf_b99f;
db dummyf_b9a0;
db dummyf_b9a1[108]; // 075b:43f1
db dummyf_ba0d[4]; // 075b:43f1
db dummyf_ba11[32]; // 075b:4461
db dummyf_ba31[32]; // 075b:4481
db dummyf_ba51[32]; // 075b:44a1
db dummyf_ba71[32]; // 075b:44c1
db dummyf_ba91;
db dummyf_ba92[2];
db dummyf_ba94[23]; // 075b:44e4
db dummyf_baab[32]; // 075b:44fb
db dummyf_bacb;
db dummyf_bacc;
db dummyf_bacd;
db dummyf_bace;
db dummyf_bacf;
db dummyf_bad0;
db dummyf_bad1;
db dummyf_bad2;
db dummyf_bad3;
db dummyf_bad4;
db dummyf_bad5;
db dummyf_bad6;
db dummyf_bad7;
db dummyf_bad8;
db dummyf_bad9;
db dummyf_bada;
db dummyf_badb;
db dummyf_badc;
db dummyf_badd;
db dummyf_bade;
db dummyf_badf;
db dummyf_bae0;
db dummyf_bae1[88]; // 075b:4531
db dummyf_bb39[27]; // 075b:4531
db dummyf_bb54[4]; // 075b:4531
db dummyf_bb58[32]; // 075b:45a8
db dummyf_bb78;
db dummyf_bb79;
db dummyf_bb7a;
db dummyf_bb7b;
db dummyf_bb7c; // 075b:45cc
db dummyf_bb7d;
db dummyf_bb7e;
db dummyf_bb7f;
db dummyf_bb80;
db dummyf_bb81;
db dummyf_bb82;
db dummyf_bb83;
db dummyf_bb84;
db dummyf_bb85;
db dummyf_bb86;
db dummyf_bb87;
db dummyf_bb88;
db dummyf_bb89;
db dummyf_bb8a;
db dummyf_bb8b;
db dummyf_bb8c;
db dummyf_bb8d;
db dummyf_bb8e;
db dummyf_bb8f;
db dummyf_bb90;
db dummyf_bb91[7];
db dummyf_bb98[32]; // 075b:45e8
db dummyf_bbb8;
db dummyf_bbb9;
db dummyf_bbba;
db dummyf_bbbb;
db dummyf_bbbc;
db dummyf_bbbd;
db dummyf_bbbe; // 075b:460e
db dummyf_bbbf;
db dummyf_bbc0;
db dummyf_bbc1; // 075b:4611
db dummyf_bbc2; // 075b:4612
db dummyf_bbc3;
db dummyf_bbc4;
db dummyf_bbc5;
db dummyf_bbc6;
db dummyf_bbc7;
db dummyf_bbc8;
db dummyf_bbc9;
db dummyf_bbca; // 075b:461a
db dummyf_bbcb;
db dummyf_bbcc;
db dummyf_bbcd;
db dummyf_bbce;
db dummyf_bbcf;
db dummyf_bbd0;
db dummyf_bbd1;
db dummyf_bbd2[25]; // 075b:4622
db dummyf_bbeb[32]; // 075b:463b
db dummyf_bc0b[32]; // 075b:465b
db dummyf_bc2b[32]; // 075b:467b
db dummyf_bc4b[32]; // 075b:469b
db dummyf_bc6b[32]; // 075b:46bb
db dummyf_bc8b;
db dummyf_bc8c;
db dummyf_bc8d;
db dummyf_bc8e;
db dummyf_bc8f;
db dummyf_bc90;
db dummyf_bc91[3];
db dummyf_bc94[4]; // 075b:46e4
db dummyf_bc98[32]; // 075b:46e8
db dummyf_bcb8;
db dummyf_bcb9;
db dummyf_bcba;
db dummyf_bcbb; // 075b:470b
db dummyf_bcbc; // 075b:470c
db dummyf_bcbd;
db dummyf_bcbe;
db dummyf_bcbf;
db dummyf_bcc0;
db dummyf_bcc1;
db dummyf_bcc2;
db dummyf_bcc3;
db dummyf_bcc4;
db dummyf_bcc5;
db dummyf_bcc6; // 075b:4716
db dummyf_bcc7;
db dummyf_bcc8;
db dummyf_bcc9;
db dummyf_bcca;
db dummyf_bccb;
db dummyf_bccc; // 075b:471c
db dummyf_bccd; // 075b:471d
db dummyf_bcce; // 075b:471e
db dummyf_bccf;
db dummyf_bcd0;
db dummyf_bcd1[7]; // 075b:4721
db dummyf_bcd8[32]; // 075b:4728
db dummyf_bcf8;
db dummyf_bcf9; // 075b:4749
db dummyf_bcfa;
db dummyf_bcfb;
db dummyf_bcfc; // 075b:474c
db dummyf_bcfd; // 075b:474d
db dummyf_bcfe; // 075b:474e
db dummyf_bcff;
db dummyf_bd00;
db dummyf_bd01; // 075b:4751
db dummyf_bd02; // 075b:4752
db dummyf_bd03; // 075b:4753
db dummyf_bd04; // 075b:4754
db dummyf_bd05; // 075b:4755
db dummyf_bd06; // 075b:4756
db dummyf_bd07;
db dummyf_bd08;
db dummyf_bd09;
db dummyf_bd0a; // 075b:475a
db dummyf_bd0b; // 075b:475b
db dummyf_bd0c; // 075b:475c
db dummyf_bd0d;
db dummyf_bd0e;
db dummyf_bd0f;
db dummyf_bd10;
db dummyf_bd11;
db dummyf_bd12[25]; // 075b:4762
db dummyf_bd2b[32]; // 075b:477b
db dummyf_bd4b[32]; // 075b:479b
db dummyf_bd6b[32]; // 075b:47bb
db dummyf_bd8b[32]; // 075b:47db
db dummyf_bdab[32]; // 075b:47fb
db dummyf_bdcb;
db dummyf_bdcc;
db dummyf_bdcd;
db dummyf_bdce;
db dummyf_bdcf;
db dummyf_bdd0;
db dummyf_bdd1[7]; // 075b:4821
db dummyf_bdd8[32]; // 075b:4828
db dummyf_bdf8;
db dummyf_bdf9;
db dummyf_bdfa;
db dummyf_bdfb; // 075b:484b
db dummyf_bdfc; // 075b:484c
db dummyf_bdfd; // 075b:484d
db dummyf_bdfe;
db dummyf_bdff;
db dummyf_be00;
db dummyf_be01;
db dummyf_be02;
db dummyf_be03; // 075b:4853
db dummyf_be04; // 075b:4854
db dummyf_be05; // 075b:4855
db dummyf_be06; // 075b:4856
db dummyf_be07;
db dummyf_be08;
db dummyf_be09;
db dummyf_be0a;
db dummyf_be0b; // 075b:485b
db dummyf_be0c; // 075b:485c
db dummyf_be0d; // 075b:485d
db dummyf_be0e; // 075b:485e
db dummyf_be0f;
db dummyf_be10;
db dummyf_be11[7]; // 075b:4861
db dummyf_be18[32]; // 075b:4868
db dummyf_be38;
db dummyf_be39; // 075b:4889
db dummyf_be3a; // 075b:488a
db dummyf_be3b; // 075b:488b
db dummyf_be3c; // 075b:488c
db dummyf_be3d; // 075b:488d
db dummyf_be3e;
db dummyf_be3f;
db dummyf_be40;
db dummyf_be41;
db dummyf_be42; // 075b:4892
db dummyf_be43; // 075b:4893
db dummyf_be44; // 075b:4894
db dummyf_be45; // 075b:4895
db dummyf_be46;
db dummyf_be47;
db dummyf_be48;
db dummyf_be49;
db dummyf_be4a; // 075b:489a
db dummyf_be4b; // 075b:489b
db dummyf_be4c; // 075b:489c
db dummyf_be4d; // 075b:489d
db dummyf_be4e; // 075b:489e
db dummyf_be4f;
db dummyf_be50;
db dummyf_be51;
db dummyf_be52[25]; // 075b:48a2
db dummyf_be6b[32]; // 075b:48bb
db dummyf_be8b[32]; // 075b:48db
db dummyf_beab[32]; // 075b:48fb
db dummyf_becb[32]; // 075b:491b
db dummyf_beeb;
db dummyf_beec;
db dummyf_beed;
db dummyf_beee;
db dummyf_beef;
db dummyf_bef0;
db dummyf_bef1;
db dummyf_bef2;
db dummyf_bef3;
db dummyf_bef4;
db dummyf_bef5;
db dummyf_bef6;
db dummyf_bef7;
db dummyf_bef8;
db dummyf_bef9;
db dummyf_befa;
db dummyf_befb;
db dummyf_befc;
db dummyf_befd;
db dummyf_befe;
db dummyf_beff;
db dummyf_bf00;
db dummyf_bf01;
db dummyf_bf02;
db dummyf_bf03;
db dummyf_bf04;
db dummyf_bf05;
db dummyf_bf06;
db byte_1a4e7; // 075b:4957
db dummyf_bf08;
db dummyf_bf09;
db dummyf_bf0a;
db dummyf_bf0b;
db dummyf_bf0c;
db dummyf_bf0d;
db dummyf_bf0e;
db dummyf_bf0f;
db dummyf_bf10;
db dummyf_bf11[1];
db dummyf_bf12[6]; // 075b:4962
db dummyf_bf18[32]; // 075b:4968
db dummyf_bf38;
db dummyf_bf39;
db dummyf_bf3a; // 075b:498a
db dummyf_bf3b; // 075b:498b
db dummyf_bf3c; // 075b:498c
db dummyf_bf3d; // 075b:498d
db dummyf_bf3e;
db dummyf_bf3f;
db dummyf_bf40;
db dummyf_bf41;
db dummyf_bf42;
db dummyf_bf43; // 075b:4993
db dummyf_bf44; // 075b:4994
db dummyf_bf45; // 075b:4995
db dummyf_bf46; // 075b:4996
db dummyf_bf47;
db dummyf_bf48;
db dummyf_bf49;
db dummyf_bf4a; // 075b:499a
db dummyf_bf4b; // 075b:499b
db dummyf_bf4c; // 075b:499c
db dummyf_bf4d; // 075b:499d
db dummyf_bf4e; // 075b:499e
db dummyf_bf4f;
db dummyf_bf50;
db dummyf_bf51[1];
db dummyf_bf52[6]; // 075b:49a2
db dummyf_bf58[32]; // 075b:49a8
db dummyf_bf78;
db dummyf_bf79;
db dummyf_bf7a;
db dummyf_bf7b; // 075b:49cb
db dummyf_bf7c; // 075b:49cc
db dummyf_bf7d; // 075b:49cd
db dummyf_bf7e; // 075b:49ce
db dummyf_bf7f;
db dummyf_bf80;
db dummyf_bf81;
db dummyf_bf82; // 075b:49d2
db dummyf_bf83; // 075b:49d3
db dummyf_bf84; // 075b:49d4
db dummyf_bf85; // 075b:49d5
db dummyf_bf86;
db dummyf_bf87;
db dummyf_bf88;
db dummyf_bf89;
db dummyf_bf8a; // 075b:49da
db dummyf_bf8b; // 075b:49db
db dummyf_bf8c; // 075b:49dc
db dummyf_bf8d; // 075b:49dd
db dummyf_bf8e; // 075b:49de
db dummyf_bf8f;
db dummyf_bf90;
db dummyf_bf91;
db dummyf_bf92[25]; // 075b:49e2
db dummyf_bfab[32]; // 075b:49fb
db dummyf_bfcb[32]; // 075b:4a1b
db dummyf_bfeb[32]; // 075b:4a3b
db dummyf_c00b[32]; // 075b:4a5b
db dummyf_c02b[32]; // 075b:4a7b
db dummyf_c04b;
db dummyf_c04c;
db dummyf_c04d;
db dummyf_c04e;
db dummyf_c04f;
db dummyf_c050;
db dummyf_c051[7]; // 075b:4aa1
db dummyf_c058[32]; // 075b:4aa8
db dummyf_c078;
db dummyf_c079;
db dummyf_c07a;
db dummyf_c07b; // 075b:4acb
db dummyf_c07c; // 075b:4acc
db dummyf_c07d; // 075b:4acd
db dummyf_c07e; // 075b:4ace
db dummyf_c07f; // 075b:4acf
db dummyf_c080;
db dummyf_c081;
db dummyf_c082;
db dummyf_c083; // 075b:4ad3
db dummyf_c084; // 075b:4ad4
db dummyf_c085; // 075b:4ad5
db dummyf_c086; // 075b:4ad6
db dummyf_c087;
db dummyf_c088;
db dummyf_c089;
db dummyf_c08a; // 075b:4ada
db dummyf_c08b; // 075b:4adb
db dummyf_c08c; // 075b:4adc
db dummyf_c08d; // 075b:4add
db dummyf_c08e; // 075b:4ade
db dummyf_c08f;
db dummyf_c090;
db dummyf_c091[7]; // 075b:4ae1
db dummyf_c098[32]; // 075b:4ae8
db dummyf_c0b8;
db dummyf_c0b9;
db dummyf_c0ba;
db dummyf_c0bb; // 075b:4b0b
db dummyf_c0bc; // 075b:4b0c
db dummyf_c0bd; // 075b:4b0d
db dummyf_c0be;
db dummyf_c0bf;
db dummyf_c0c0;
db dummyf_c0c1;
db dummyf_c0c2; // 075b:4b12
db dummyf_c0c3; // 075b:4b13
db dummyf_c0c4; // 075b:4b14
db dummyf_c0c5; // 075b:4b15
db dummyf_c0c6;
db dummyf_c0c7;
db dummyf_c0c8;
db dummyf_c0c9;
db dummyf_c0ca; // 075b:4b1a
db dummyf_c0cb; // 075b:4b1b
db dummyf_c0cc; // 075b:4b1c
db dummyf_c0cd; // 075b:4b1d
db dummyf_c0ce;
db dummyf_c0cf;
db dummyf_c0d0;
db dummyf_c0d1;
db dummyf_c0d2[25]; // 075b:4b22
db dummyf_c0eb[32]; // 075b:4b3b
db dummyf_c10b[32]; // 075b:4b5b
db dummyf_c12b[32]; // 075b:4b7b
db dummyf_c14b[32]; // 075b:4b9b
db dummyf_c16b[32]; // 075b:4bbb
db dummyf_c18b;
db dummyf_c18c;
db dummyf_c18d;
db dummyf_c18e;
db dummyf_c18f;
db dummyf_c190;
db dummyf_c191[7]; // 075b:4be1
db dummyf_c198[32]; // 075b:4be8
db dummyf_c1b8;
db dummyf_c1b9;
db dummyf_c1ba; // 075b:4c0a
db dummyf_c1bb; // 075b:4c0b
db dummyf_c1bc; // 075b:4c0c
db dummyf_c1bd;
db dummyf_c1be;
db dummyf_c1bf; // 075b:4c0f
db dummyf_c1c0;
db dummyf_c1c1;
db dummyf_c1c2; // 075b:4c12
db dummyf_c1c3; // 075b:4c13
db dummyf_c1c4; // 075b:4c14
db dummyf_c1c5; // 075b:4c15
db dummyf_c1c6; // 075b:4c16
db dummyf_c1c7; // 075b:4c17
db dummyf_c1c8;
db dummyf_c1c9;
db dummyf_c1ca;
db dummyf_c1cb;
db dummyf_c1cc; // 075b:4c1c
db dummyf_c1cd; // 075b:4c1d
db dummyf_c1ce; // 075b:4c1e
db dummyf_c1cf;
db dummyf_c1d0;
db dummyf_c1d1[3];
db dummyf_c1d4[4]; // 075b:4c24
db dummyf_c1d8[32]; // 075b:4c28
db dummyf_c1f8;
db dummyf_c1f9;
db dummyf_c1fa;
db dummyf_c1fb;
db dummyf_c1fc; // 075b:4c4c
db dummyf_c1fd; // 075b:4c4d
db dummyf_c1fe;
db dummyf_c1ff;
db dummyf_c200;
db dummyf_c201;
db dummyf_c202; // 075b:4c52
db dummyf_c203;
db dummyf_c204;
db dummyf_c205;
db dummyf_c206;
db dummyf_c207;
db dummyf_c208;
db dummyf_c209;
db dummyf_c20a; // 075b:4c5a
db dummyf_c20b; // 075b:4c5b
db dummyf_c20c; // 075b:4c5c
db dummyf_c20d;
db dummyf_c20e;
db dummyf_c20f;
db dummyf_c210;
db dummyf_c211;
db dummyf_c212[25]; // 075b:4c62
db dummyf_c22b;
db dummyf_c22c;
db dummyf_c22d;
db dummyf_c22e;
db dummyf_c22f;
db dummyf_c230;
db dummyf_c231;
db dummyf_c232;
db dummyf_c233;
db dummyf_c234;
db dummyf_c235;
db dummyf_c236;
db dummyf_c237;
db dummyf_c238;
db dummyf_c239;
db dummyf_c23a;
db byte_1a81b; // 075b:4c8b
db dummyf_c23c[32]; // 075b:4c8c
db dummyf_c25c[32]; // 075b:4cac
db dummyf_c27c[32]; // 075b:4ccc
db dummyf_c29c[32]; // 075b:4cec
db dummyf_c2bc;
db dummyf_c2bd;
db dummyf_c2be;
db dummyf_c2bf;
db dummyf_c2c0;
db dummyf_c2c1;
db dummyf_c2c2;
db dummyf_c2c3;
db dummyf_c2c4;
db dummyf_c2c5;
db dummyf_c2c6;
db dummyf_c2c7;
db dummyf_c2c8;
db dummyf_c2c9;
db dummyf_c2ca;
db dummyf_c2cb;
db dummyf_c2cc;
db dummyf_c2cd;
db dummyf_c2ce;
db dummyf_c2cf;
db dummyf_c2d0;
db dummyf_c2d1[7];
db dummyf_c2d8[32]; // 075b:4d28
db dummyf_c2f8;
db dummyf_c2f9;
db dummyf_c2fa; // 075b:4d4a
db dummyf_c2fb;
db dummyf_c2fc;
db dummyf_c2fd;
db dummyf_c2fe;
db dummyf_c2ff;
db dummyf_c300;
db dummyf_c301;
db dummyf_c302;
db dummyf_c303;
db dummyf_c304;
db dummyf_c305;
db dummyf_c306; // 075b:4d56
db dummyf_c307; // 075b:4d57
db dummyf_c308;
db dummyf_c309;
db dummyf_c30a;
db dummyf_c30b;
db dummyf_c30c;
db dummyf_c30d;
db dummyf_c30e; // 075b:4d5e
db dummyf_c30f;
db dummyf_c310;
db dummyf_c311[3];
db dummyf_c314[4]; // 075b:4d64
db dummyf_c318[32]; // 075b:4d68
db dummyf_c338[32]; // 075b:4d88
db dummyf_c358[32]; // 075b:4da8
db dummyf_c378[32]; // 075b:4dc8
db dummyf_c398[32]; // 075b:4de8
db dummyf_c3b8[32]; // 075b:4e08
db dummyf_c3d8[32]; // 075b:4e28
db dummyf_c3f8[32]; // 075b:4e48
db dummyf_c418[32]; // 075b:4e68
db dummyf_c438[32]; // 075b:4e88
db dummyf_c458[32]; // 075b:4ea8
db dummyf_c478; // 075b:4ec8
db dummyf_c479;
db dummyf_c47a;
db dummyf_c47b;
db dummyf_c47c;
db dummyf_c47d;
db dummyf_c47e;
db dummyf_c47f;
db dummyf_c480; // 075b:4ed0
db dummyf_c481;
db dummyf_c482;
db dummyf_c483;
db dummyf_c484;
db dummyf_c485;
db dummyf_c486;
db dummyf_c487;
db dummyf_c488; // 075b:4ed8
db dummyf_c489;
db dummyf_c48a;
db dummyf_c48b;
db dummyf_c48c;
db dummyf_c48d[3];
db dummyf_c490[45]; // 075b:4ee0
db dummyf_c4bd[83]; // 075b:4ee0
db dummyf_c510[45]; // 075b:4ee0
db dummyf_c53d[19]; // 075b:4ee0
db dummyf_c550;
db dummyf_c551[3];
db dummyf_c554[4]; // 075b:4fa4
db dummyf_c558;
db dummyf_c559[7]; // 075b:4fa9
db dummyf_c560[32]; // 075b:4fb0
db dummyf_c580;
db dummyf_c581[3];
db dummyf_c584[4]; // 075b:4fd4
db dummyf_c588[32]; // 075b:4fd8
db dummyf_c5a8[32]; // 075b:4ff8
db dummyf_c5c8;
db dummyf_c5c9; // 075b:5019
db dummyf_c5ca;
db dummyf_c5cb;
db dummyf_c5cc;
db dummyf_c5cd[45]; // 075b:501d
db dummyf_c5fa[86]; // 075b:501d
db dummyf_c650[47]; // 075b:501d
db dummyf_c67f[17]; // 075b:501d
db dummyf_c690;
db dummyf_c691[3];
db dummyf_c694[4]; // 075b:50e4
db dummyf_c698;
db dummyf_c699[7]; // 075b:50e9
db dummyf_c6a0[32]; // 075b:50f0
db dummyf_c6c0;
db dummyf_c6c1[3];
db dummyf_c6c4[4]; // 075b:5114
db dummyf_c6c8[32]; // 075b:5118
db dummyf_c6e8[32]; // 075b:5138
db dummyf_c708[32]; // 075b:5158
db dummyf_c728[32]; // 075b:5178
db dummyf_c748[32]; // 075b:5198
db dummyf_c768[32]; // 075b:51b8
db dummyf_c788[32]; // 075b:51d8
db dummyf_c7a8[32]; // 075b:51f8
db dummyf_c7c8;
db dummyf_c7c9;
db dummyf_c7ca;
db dummyf_c7cb;
db dummyf_c7cc;
db dummyf_c7cd;
db dummyf_c7ce;
db dummyf_c7cf;
db dummyf_c7d0;
db dummyf_c7d1[7]; // 075b:5221
db dummyf_c7d8;
db dummyf_c7d9[3];
db dummyf_c7dc[4]; // 075b:522c
db dummyf_c7e0[32]; // 075b:5230
db dummyf_c800;
db dummyf_c801[7]; // 075b:5251
db dummyf_c808[32]; // 075b:5258
db dummyf_c828[32]; // 075b:5278
db dummyf_c848[32]; // 075b:5298
db dummyf_c868[32]; // 075b:52b8
db dummyf_c888[32]; // 075b:52d8
db dummyf_c8a8[32]; // 075b:52f8
db dummyf_c8c8[32]; // 075b:5318
db dummyf_c8e8;
db dummyf_c8e9;
db dummyf_c8ea;
db dummyf_c8eb;
db byte_1aecc; // 075b:533c
db dummyf_c8ed[32]; // 075b:533d
db dummyf_c90d;
db dummyf_c90e;
db dummyf_c90f;
db dummyf_c910;
db dummyf_c911[1];
db dummyf_c912[6]; // 075b:5362
db dummyf_c918;
db dummyf_c919[3];
db dummyf_c91c[4]; // 075b:536c
db dummyf_c920[32]; // 075b:5370
db dummyf_c940;
db dummyf_c941[8]; // 075b:5391
db dummyf_c949[1];
db dummyf_c94a[32]; // 075b:539a
db dummyf_c96a; // 075b:53ba
db dummyf_c96b; // 075b:53bb
db dummyf_c96c; // 075b:53bc
db dummyf_c96d; // 075b:53bd
db dummyf_c96e; // 075b:53be
db dummyf_c96f;
db dummyf_c970;
db dummyf_c971;
db dummyf_c972;
db dummyf_c973;
db dummyf_c974;
db dummyf_c975;
db byte_1af56; // 075b:53c6
db dummyf_c977[32]; // 075b:53c7
db dummyf_c997[32]; // 075b:53e7
db dummyf_c9b7[32]; // 075b:5407
db dummyf_c9d7[32]; // 075b:5427
db dummyf_c9f7[32]; // 075b:5447
db dummyf_ca17[32]; // 075b:5467
db dummyf_ca37;
db dummyf_ca38;
db dummyf_ca39;
db dummyf_ca3a;
db dummyf_ca3b;
db dummyf_ca3c;
db dummyf_ca3d;
db dummyf_ca3e;
db dummyf_ca3f;
db dummyf_ca40;
db dummyf_ca41;
db dummyf_ca42;
db dummyf_ca43;
db dummyf_ca44;
db dummyf_ca45;
db dummyf_ca46;
db dummyf_ca47;
db dummyf_ca48;
db dummyf_ca49;
db dummyf_ca4a;
db dummyf_ca4b;
db dummyf_ca4c;
db dummyf_ca4d;
db dummyf_ca4e;
db dummyf_ca4f;
db dummyf_ca50;
db dummyf_ca51[7]; // 075b:54a1
db dummyf_ca58;
db dummyf_ca59[3];
db dummyf_ca5c[4]; // 075b:54ac
db dummyf_ca60;
db dummyf_ca61;
db dummyf_ca62;
db dummyf_ca63; // 075b:54b3
db dummyf_ca64; // 075b:54b4
db dummyf_ca65;
db dummyf_ca66;
db dummyf_ca67;
db dummyf_ca68;
db dummyf_ca69;
db dummyf_ca6a; // 075b:54ba
db dummyf_ca6b;
db dummyf_ca6c;
db dummyf_ca6d;
db dummyf_ca6e;
db dummyf_ca6f;
db byte_1b050; // 075b:54c0
db dummyf_ca71;
db dummyf_ca72;
db dummyf_ca73; // 075b:54c3
db dummyf_ca74; // 075b:54c4
db dummyf_ca75; // 075b:54c5
db dummyf_ca76;
db dummyf_ca77;
db dummyf_ca78;
db dummyf_ca79; // 075b:54c9
db dummyf_ca7a;
db dummyf_ca7b;
db dummyf_ca7c; // 075b:54cc
db dummyf_ca7d;
db dummyf_ca7e;
db dummyf_ca7f; // 075b:54cf
db dummyf_ca80;
db dummyf_ca81[7]; // 075b:54d1
db dummyf_ca88[32]; // 075b:54d8
db dummyf_caa8[32]; // 075b:54f8
db byte_1b0a8; // 075b:5518
db dummyf_cac9[32]; // 075b:5519
db dummyf_cae9[32]; // 075b:5539
db dummyf_cb09[32]; // 075b:5559
db dummyf_cb29[32]; // 075b:5579
db dummyf_cb49[32]; // 075b:5599
db dummyf_cb69[32]; // 075b:55b9
db dummyf_cb89;
db dummyf_cb8a;
db dummyf_cb8b;
db dummyf_cb8c;
db dummyf_cb8d;
db dummyf_cb8e;
db dummyf_cb8f;
db dummyf_cb90;
db dummyf_cb91[7]; // 075b:55e1
db dummyf_cb98;
db dummyf_cb99[7]; // 075b:55e9
db dummyf_cba0[32]; // 075b:55f0
db dummyf_cbc0;
db dummyf_cbc1[3];
db dummyf_cbc4[4]; // 075b:5614
db dummyf_cbc8[32]; // 075b:5618
db dummyf_cbe8[32]; // 075b:5638
db dummyf_cc08[32]; // 075b:5658
db dummyf_cc28[32]; // 075b:5678
db dummyf_cc48[32]; // 075b:5698
db dummyf_cc68[32]; // 075b:56b8
db dummyf_cc88[32]; // 075b:56d8
db dummyf_cca8[32]; // 075b:56f8
db dummyf_ccc8;
db dummyf_ccc9;
db dummyf_ccca;
db dummyf_cccb;
db dummyf_cccc;
db dummyf_cccd;
db dummyf_ccce;
db dummyf_cccf;
db dummyf_ccd0;
db dummyf_ccd1[1];
db dummyf_ccd2[6]; // 075b:5722
db dummyf_ccd8;
db dummyf_ccd9[1];
db dummyf_ccda[6]; // 075b:572a
db dummyf_cce0[32]; // 075b:5730
db dummyf_cd00;
db dummyf_cd01[3];
db dummyf_cd04[4]; // 075b:5754
db dummyf_cd08[32]; // 075b:5758
db dummyf_cd28[32]; // 075b:5778
db dummyf_cd48[32]; // 075b:5798
db dummyf_cd68[32]; // 075b:57b8
db dummyf_cd88[32]; // 075b:57d8
db dummyf_cda8[32]; // 075b:57f8
db dummyf_cdc8[32]; // 075b:5818
db dummyf_cde8[32]; // 075b:5838
db dummyf_ce08[32]; // 075b:5858
db dummyf_ce28[32]; // 075b:5878
db dummyf_ce48[32]; // 075b:5898
db dummyf_ce68[32]; // 075b:58b8
db dummyf_ce88[32]; // 075b:58d8
db dummyf_cea8[32]; // 075b:58f8
db dummyf_cec8[32]; // 075b:5918
db dummyf_cee8[32]; // 075b:5938
db dummyf_cf08[32]; // 075b:5958
db dummyf_cf28[32]; // 075b:5978
db dummyf_cf48[32]; // 075b:5998
db dummyf_cf68[32]; // 075b:59b8
db dummyf_cf88[32]; // 075b:59d8
db dummyf_cfa8[32]; // 075b:59f8
db dummyf_cfc8[32]; // 075b:5a18
db dummyf_cfe8[32]; // 075b:5a38
db dummyf_d008[32]; // 075b:5a58
db dummyf_d028[32]; // 075b:5a78
db dummyf_d048[32]; // 075b:5a98
db dummyf_d068[32]; // 075b:5ab8
db dummyf_d088[32]; // 075b:5ad8
db dummyf_d0a8[32]; // 075b:5af8
db dummyf_d0c8[32]; // 075b:5b18
db dummyf_d0e8[32]; // 075b:5b38
db dummyf_d108[32]; // 075b:5b58
db dummyf_d128[32]; // 075b:5b78
db dummyf_d148[32]; // 075b:5b98
db dummyf_d168[32]; // 075b:5bb8
db dummyf_d188[32]; // 075b:5bd8
db dummyf_d1a8[32]; // 075b:5bf8
db dummyf_d1c8[32]; // 075b:5c18
db dummyf_d1e8[32]; // 075b:5c38
db dummyf_d208[32]; // 075b:5c58
db dummyf_d228[32]; // 075b:5c78
db dummyf_d248[32]; // 075b:5c98
db dummyf_d268[32]; // 075b:5cb8
db dummyf_d288[32]; // 075b:5cd8
db dummyf_d2a8[32]; // 075b:5cf8
db dummyf_d2c8[32]; // 075b:5d18
db dummyf_d2e8[32]; // 075b:5d38
db dummyf_d308[32]; // 075b:5d58
db dummyf_d328;
db dummyf_d329;
db dummyf_d32a;
db dummyf_d32b;
db dummyf_d32c;
db dummyf_d32d;
db dummyf_d32e;
db dummyf_d32f;
db dummyf_d330;
db dummyf_d331;
db dummyf_d332;
db dummyf_d333;
db dummyf_d334;
db dummyf_d335;
db dummyf_d336;
db dummyf_d337;
db dummyf_d338;
db dummyf_d339;
db dummyf_d33a;
db dummyf_d33b;
db dummyf_d33c;
db dummyf_d33d;
db dummyf_d33e;
db dummyf_d33f;
db dummyf_d340;
db byte_1b921; // 075b:5d91
db dummyf_d342[32]; // 075b:5d92
db dummyf_d362[32]; // 075b:5db2
db dummyf_d382;
db dummyf_d383;
db dummyf_d384;
db dummyf_d385;
db dummyf_d386;
db dummyf_d387;
db dummyf_d388;
db byte_1b969; // 075b:5dd9
db dummyf_d38a[32]; // 075b:5dda
db dummyf_d3aa[32]; // 075b:5dfa
db dummyf_d3ca[32]; // 075b:5e1a
db dummyf_d3ea[32]; // 075b:5e3a
db dummyf_d40a[32]; // 075b:5e5a
db dummyf_d42a[32]; // 075b:5e7a
db dummyf_d44a[32]; // 075b:5e9a
db dummyf_d46a[32]; // 075b:5eba
db dummyf_d48a[32]; // 075b:5eda
db dummyf_d4aa[32]; // 075b:5efa
db dummyf_d4ca[32]; // 075b:5f1a
db dummyf_d4ea[32]; // 075b:5f3a
db dummyf_d50a[32]; // 075b:5f5a
db dummyf_d52a[32]; // 075b:5f7a
db dummyf_d54a[32]; // 075b:5f9a
db dummyf_d56a[32]; // 075b:5fba
db dummyf_d58a[32]; // 075b:5fda
db dummyf_d5aa[32]; // 075b:5ffa
db dummyf_d5ca[32]; // 075b:601a
db dummyf_d5ea[32]; // 075b:603a
db dummyf_d60a[32]; // 075b:605a
db dummyf_d62a[32]; // 075b:607a
db dummyf_d64a[32]; // 075b:609a
db dummyf_d66a[32]; // 075b:60ba
db dummyf_d68a[32]; // 075b:60da
db dummyf_d6aa[32]; // 075b:60fa
db dummyf_d6ca[32]; // 075b:611a
db dummyf_d6ea[32]; // 075b:613a
db dummyf_d70a[32]; // 075b:615a
db dummyf_d72a[32]; // 075b:617a
db dummyf_d74a[32]; // 075b:619a
db dummyf_d76a[32]; // 075b:61ba
db dummyf_d78a[32]; // 075b:61da
db dummyf_d7aa[32]; // 075b:61fa
db dummyf_d7ca[32]; // 075b:621a
db dummyf_d7ea[32]; // 075b:623a
db dummyf_d80a[32]; // 075b:625a
db dummyf_d82a[32]; // 075b:627a
db dummyf_d84a[32]; // 075b:629a
db dummyf_d86a[32]; // 075b:62ba
db dummyf_d88a[32]; // 075b:62da
db dummyf_d8aa[32]; // 075b:62fa
db dummyf_d8ca[32]; // 075b:631a
db dummyf_d8ea[32]; // 075b:633a
db dummyf_d90a[32]; // 075b:635a
db dummyf_d92a[32]; // 075b:637a
db dummyf_d94a[32]; // 075b:639a
db dummyf_d96a[32]; // 075b:63ba
db dummyf_d98a[32]; // 075b:63da
db dummyf_d9aa[32]; // 075b:63fa
db dummyf_d9ca[32]; // 075b:641a
db dummyf_d9ea[32]; // 075b:643a
db dummyf_da0a[32]; // 075b:645a
db dummyf_da2a[32]; // 075b:647a
db dummyf_da4a[32]; // 075b:649a
db dummyf_da6a[32]; // 075b:64ba
db dummyf_da8a[32]; // 075b:64da
db dummyf_daaa[32]; // 075b:64fa
db dummyf_daca[32]; // 075b:651a
db dummyf_daea[32]; // 075b:653a
db dummyf_db0a[32]; // 075b:655a
db dummyf_db2a[32]; // 075b:657a
db dummyf_db4a[32]; // 075b:659a
db dummyf_db6a[32]; // 075b:65ba
db dummyf_db8a[32]; // 075b:65da
db dummyf_dbaa[32]; // 075b:65fa
db dummyf_dbca[32]; // 075b:661a
db dummyf_dbea[32]; // 075b:663a
db dummyf_dc0a[32]; // 075b:665a
db dummyf_dc2a[32]; // 075b:667a
db dummyf_dc4a[32]; // 075b:669a
db dummyf_dc6a[32]; // 075b:66ba
db dummyf_dc8a[32]; // 075b:66da
db dummyf_dcaa[32]; // 075b:66fa
db dummyf_dcca[32]; // 075b:671a
db dummyf_dcea[32]; // 075b:673a
db dummyf_dd0a[32]; // 075b:675a
db dummyf_dd2a[32]; // 075b:677a
db dummyf_dd4a[32]; // 075b:679a
db dummyf_dd6a[32]; // 075b:67ba
db dummyf_dd8a[32]; // 075b:67da
db dummyf_ddaa[32]; // 075b:67fa
db dummyf_ddca[32]; // 075b:681a
db dummyf_ddea[32]; // 075b:683a
db dummyf_de0a[32]; // 075b:685a
db dummyf_de2a[32]; // 075b:687a
db dummyf_de4a[32]; // 075b:689a
db dummyf_de6a[32]; // 075b:68ba
db dummyf_de8a[32]; // 075b:68da
db dummyf_deaa[32]; // 075b:68fa
db dummyf_deca[32]; // 075b:691a
db dummyf_deea[32]; // 075b:693a
db dummyf_df0a[32]; // 075b:695a
db dummyf_df2a[32]; // 075b:697a
db dummyf_df4a[32]; // 075b:699a
db dummyf_df6a[32]; // 075b:69ba
db dummyf_df8a[32]; // 075b:69da
db dummyf_dfaa[32]; // 075b:69fa
db dummyf_dfca[32]; // 075b:6a1a
db dummyf_dfea[32]; // 075b:6a3a
db dummyf_e00a[32]; // 075b:6a5a
db dummyf_e02a[32]; // 075b:6a7a
db dummyf_e04a[32]; // 075b:6a9a
db dummyf_e06a[32]; // 075b:6aba
db dummyf_e08a[32]; // 075b:6ada
db dummyf_e0aa[32]; // 075b:6afa
db dummyf_e0ca[32]; // 075b:6b1a
db dummyf_e0ea[32]; // 075b:6b3a
db dummyf_e10a[32]; // 075b:6b5a
db dummyf_e12a[32]; // 075b:6b7a
db dummyf_e14a[32]; // 075b:6b9a
db dummyf_e16a[32]; // 075b:6bba
db dummyf_e18a[32]; // 075b:6bda
db dummyf_e1aa[32]; // 075b:6bfa
db dummyf_e1ca[32]; // 075b:6c1a
db dummyf_e1ea[32]; // 075b:6c3a
db dummyf_e20a[32]; // 075b:6c5a
db dummyf_e22a[32]; // 075b:6c7a
db dummyf_e24a[32]; // 075b:6c9a
db dummyf_e26a[32]; // 075b:6cba
db dummyf_e28a[32]; // 075b:6cda
db dummyf_e2aa[32]; // 075b:6cfa
db dummyf_e2ca[32]; // 075b:6d1a
db dummyf_e2ea[32]; // 075b:6d3a
db dummyf_e30a[32]; // 075b:6d5a
db dummyf_e32a[32]; // 075b:6d7a
db dummyf_e34a[32]; // 075b:6d9a
db dummyf_e36a[32]; // 075b:6dba
db dummyf_e38a[32]; // 075b:6dda
db dummyf_e3aa[32]; // 075b:6dfa
db dummyf_e3ca[32]; // 075b:6e1a
db dummyf_e3ea[32]; // 075b:6e3a
db dummyf_e40a[32]; // 075b:6e5a
db dummyf_e42a[32]; // 075b:6e7a
db dummyf_e44a[32]; // 075b:6e9a
db dummyf_e46a[32]; // 075b:6eba
db dummyf_e48a[32]; // 075b:6eda
db dummyf_e4aa[32]; // 075b:6efa
db dummyf_e4ca[32]; // 075b:6f1a
db dummyf_e4ea[32]; // 075b:6f3a
db dummyf_e50a[32]; // 075b:6f5a
db dummyf_e52a[32]; // 075b:6f7a
db dummyf_e54a[32]; // 075b:6f9a
db dummyf_e56a[32]; // 075b:6fba
db dummyf_e58a[32]; // 075b:6fda
db dummyf_e5aa[32]; // 075b:6ffa
db dummyf_e5ca[32]; // 075b:701a
db dummyf_e5ea[32]; // 075b:703a
db dummyf_e60a[32]; // 075b:705a
db dummyf_e62a[32]; // 075b:707a
db dummyf_e64a[32]; // 075b:709a
db dummyf_e66a[32]; // 075b:70ba
db dummyf_e68a[32]; // 075b:70da
db dummyf_e6aa[32]; // 075b:70fa
db dummyf_e6ca[32]; // 075b:711a
db dummyf_e6ea[32]; // 075b:713a
db dummyf_e70a[32]; // 075b:715a
db dummyf_e72a[32]; // 075b:717a
db dummyf_e74a[32]; // 075b:719a
db dummyf_e76a[32]; // 075b:71ba
db dummyf_e78a[32]; // 075b:71da
db dummyf_e7aa[32]; // 075b:71fa
db dummyf_e7ca[32]; // 075b:721a
db dummyf_e7ea[32]; // 075b:723a
db dummyf_e80a[32]; // 075b:725a
db dummyf_e82a[32]; // 075b:727a
db dummyf_e84a[32]; // 075b:729a
db dummyf_e86a[32]; // 075b:72ba
db dummyf_e88a[32]; // 075b:72da
db dummyf_e8aa[32]; // 075b:72fa
db dummyf_e8ca[32]; // 075b:731a
db dummyf_e8ea[32]; // 075b:733a
db dummyf_e90a[32]; // 075b:735a
db dummyf_e92a[32]; // 075b:737a
db dummyf_e94a[32]; // 075b:739a
db dummyf_e96a[32]; // 075b:73ba
db dummyf_e98a[32]; // 075b:73da
db dummyf_e9aa[32]; // 075b:73fa
db dummyf_e9ca[32]; // 075b:741a
db dummyf_e9ea[32]; // 075b:743a
db dummyf_ea0a[32]; // 075b:745a
db dummyf_ea2a[32]; // 075b:747a
db dummyf_ea4a[32]; // 075b:749a
db dummyf_ea6a[32]; // 075b:74ba
db dummyf_ea8a[32]; // 075b:74da
db dummyf_eaaa[32]; // 075b:74fa
db dummyf_eaca[32]; // 075b:751a
db dummyf_eaea[32]; // 075b:753a
db dummyf_eb0a[32]; // 075b:755a
db dummyf_eb2a[32]; // 075b:757a
db dummyf_eb4a[32]; // 075b:759a
db dummyf_eb6a[32]; // 075b:75ba
db dummyf_eb8a[32]; // 075b:75da
db dummyf_ebaa[32]; // 075b:75fa
db dummyf_ebca[32]; // 075b:761a
db dummyf_ebea[32]; // 075b:763a
db dummyf_ec0a[32]; // 075b:765a
db dummyf_ec2a[32]; // 075b:767a
db dummyf_ec4a[32]; // 075b:769a
db dummyf_ec6a[32]; // 075b:76ba
db dummyf_ec8a[32]; // 075b:76da
db dummyf_ecaa[32]; // 075b:76fa
db dummyf_ecca[32]; // 075b:771a
db dummyf_ecea[32]; // 075b:773a
db dummyf_ed0a[32]; // 075b:775a
db dummyf_ed2a[32]; // 075b:777a
db dummyf_ed4a[32]; // 075b:779a
db dummyf_ed6a[32]; // 075b:77ba
db dummyf_ed8a[32]; // 075b:77da
db dummyf_edaa[32]; // 075b:77fa
db dummyf_edca[32]; // 075b:781a
db dummyf_edea[32]; // 075b:783a
db dummyf_ee0a[32]; // 075b:785a
db dummyf_ee2a[32]; // 075b:787a
db dummyf_ee4a[32]; // 075b:789a
db dummyf_ee6a[32]; // 075b:78ba
db dummyf_ee8a[32]; // 075b:78da
db dummyf_eeaa[32]; // 075b:78fa
db dummyf_eeca[32]; // 075b:791a
db dummyf_eeea[32]; // 075b:793a
db dummyf_ef0a[32]; // 075b:795a
db dummyf_ef2a[32]; // 075b:797a
db dummyf_ef4a[32]; // 075b:799a
db dummyf_ef6a[32]; // 075b:79ba
db dummyf_ef8a[32]; // 075b:79da
db dummyf_efaa[32]; // 075b:79fa
db dummyf_efca[32]; // 075b:7a1a
db dummyf_efea[32]; // 075b:7a3a
db dummyf_f00a[32]; // 075b:7a5a
db dummyf_f02a[32]; // 075b:7a7a
db dummyf_f04a[32]; // 075b:7a9a
db dummyf_f06a[32]; // 075b:7aba
db dummyf_f08a[32]; // 075b:7ada
db dummyf_f0aa[32]; // 075b:7afa
db dummyf_f0ca[32]; // 075b:7b1a
db dummyf_f0ea[32]; // 075b:7b3a
db dummyf_f10a[32]; // 075b:7b5a
db dummyf_f12a[32]; // 075b:7b7a
db dummyf_f14a[32]; // 075b:7b9a
db dummyf_f16a[32]; // 075b:7bba
db dummyf_f18a[32]; // 075b:7bda
db dummyf_f1aa[32]; // 075b:7bfa
db dummyf_f1ca[32]; // 075b:7c1a
db dummyf_f1ea[32]; // 075b:7c3a
db dummyf_f20a[32]; // 075b:7c5a
db dummyf_f22a[32]; // 075b:7c7a
db dummyf_f24a[32]; // 075b:7c9a
db dummyf_f26a[32]; // 075b:7cba
db dummyf_f28a[32]; // 075b:7cda
db dummyf_f2aa[32]; // 075b:7cfa
db dummyf_f2ca[32]; // 075b:7d1a
db dummyf_f2ea[32]; // 075b:7d3a
db dummyf_f30a[32]; // 075b:7d5a
db dummyf_f32a;
db dummyf_f32b;
db dummyf_f32c;
db dummyf_f32d;
db dummyf_f32e;
db dummyf_f32f;
db dummyf_f330;
db dummyf_f331;
db dummyf_f332;
db dummyf_f333;
db dummyf_f334;
db dummyf_f335;
db dummyf_f336;
db dummyf_f337;
db dummyf_f338;
db dummyf_f339; // 075b:7d89
db dummyf_f33a;
db dummyf_f33b;
db dummyf_f33c; // 075b:7d8c
db dummyf_f33d; // 075b:7d8d
db dummyf_f33e; // 075b:7d8e
db dummyf_f33f; // 075b:7d8f
db dummyf_f340;
db dummyf_f341;
db dummyf_f342[1358]; // 075b:7d92
db dummyf_f890[2261]; // 075b:82e0
db _unk_1e745; // 075b:8bb5
db dummyf_10166[3097]; // 075b:8bb6
db _unk_1f35f; // 075b:97cf
db byte_1f360[26450]; // 075b:97d0
db dummyf_174d2[1480]; // 075b:ff22
db dummyf_17a9a[438];
db dummyf_17c50;
db dummyf_17c51;
db dummyf_17c52;
db dummyf_17c53;
db dummyf_17c54;
db dummyf_17c55;
db dummyf_17c56;
db dummyf_17c57;
db dummyf_17c58;
db dummyf_17c59;
db dummyf_17c5a;
dw word_2623b; // 17c5:000b
db dummyf_17c5d;
db dummyf_17c5e;
db dummyf_17c5f;
db dummyf_17c60[721];
db dummyf_17f31; // 17c5:02e1
db dummyf_17f32[217];
db dummyf_1800b; // 17c5:03bb
db dummyf_1800c[599];
db dummyf_18263; // 17c5:0613
db dummyf_18264[113];
db dummyf_182d5; // 17c5:0685
db dummyf_182d6;
db dummyf_182d7;
db dummyf_182d8[18];
db dummyf_182ea; // 17c5:069a
db dummyf_182eb[88];
db dummyf_18343; // 17c5:06f3
db dummyf_18344[22];
db dummyf_1835a; // 17c5:070a
db dummyf_1835b[6842];
db dummyf_19e15; // 17c5:21c5
db dummyf_19e16[177];
db dummyf_19ec7; // 17c5:2277
db dummyf_19ec8[1531];
db dummyf_1a4c3; // 17c5:2873
db dummyf_1a4c4[50];
dw word_28ad6; // 17c5:28a6
db dummyf_1a4f8[2165];
db dummyf_1ad6d; // 17c5:311d
db dummyf_1ad6e[217];
db dummyf_1ae47; // 17c5:31f7
db dummyf_1ae48[17];
db dummyf_1ae59; // 17c5:3209
db dummyf_1ae5a[17];
db dummyf_1ae6b; // 17c5:321b
db dummyf_1ae6c[73];
db dummyf_1aeb5; // 17c5:3265
db dummyf_1aeb6[13];
db dummyf_1aec3; // 17c5:3273
db dummyf_1aec4[69];
db dummyf_1af09; // 17c5:32b9
db dummyf_1af0a[497];
db dummyf_1b0fb; // 17c5:34ab
db dummyf_1b0fc[329];
db dummyf_1b245; // 17c5:35f5
db dummyf_1b246[19];
db dummyf_1b259; // 17c5:3609
db dummyf_1b25a[137];
db dummyf_1b2e3; // 17c5:3693
db dummyf_1b2e4[61];
db dummyf_1b321; // 17c5:36d1
db dummyf_1b322[83];
db dummyf_1b375; // 17c5:3725
db dummyf_1b376[507];
db dummyf_1b571; // 17c5:3921
db dummyf_1b572[135];
db dummyf_1b5f9; // 17c5:39a9
db dummyf_1b5fa[21];
db dummyf_1b60f; // 17c5:39bf
db dummyf_1b610[67];
db dummyf_1b653; // 17c5:3a03
db dummyf_1b654[139];
db dummyf_1b6df; // 17c5:3a8f
db dummyf_1b6e0[23];
db dummyf_1b6f7; // 17c5:3aa7
db dummyf_1b6f8[43];
db dummyf_1b723; // 17c5:3ad3
db dummyf_1b724[3];
db dummyf_1b727; // 17c5:3ad7
db dummyf_1b728[21];
db dummyf_1b73d; // 17c5:3aed
db dummyf_1b73e[393];
db dummyf_1b8c7;
db dummyf_1b8c8[137];
dd off_29f31; // 17c5:3d01
db dummyf_1b955[341];
db dummyf_1baaa; // 17c5:3e5a
db dummyf_1baab[86];
db dummyf_1bb01; // 17c5:3eb1
db dummyf_1bb02[91];
db dummyf_1bb5d; // 17c5:3f0d
db dummyf_1bb5e[7445];
dw __jpt_2be4e; // 17c5:5c23
dw dummyf_1d875; // 17c5:5c23
dw dummyf_1d877; // 17c5:5c23
dw dummyf_1d879; // 17c5:5c23
dw dummyf_1d87b; // 17c5:5c23
dw dummyf_1d87d; // 17c5:5c23
dw dummyf_1d87f; // 17c5:5c23
dw dummyf_1d881; // 17c5:5c23
db dummyf_1d883[1410];
db dummyf_1de05; // 17c5:61b5
db dummyf_1de06[799];
db dummyf_1e125; // 17c5:64d5
db dummyf_1e126[311];
db dummyf_1e25d; // 17c5:660d
db dummyf_1e25e[207];
db dummyf_1e32d; // 17c5:66dd
db dummyf_1e32e[37];
db dummyf_1e353; // 17c5:6703
db dummyf_1e354[61];
db dummyf_1e391; // 17c5:6741
db dummyf_1e392[19];
db dummyf_1e3a5; // 17c5:6755
db dummyf_1e3a6[332];
db dummyf_1e4f2; // 17c5:68a2
db dummyf_1e4f3; // 17c5:68a3
db dummyf_1e4f4[170];
dw dummyf_1e59e; // 17c5:694e
db dummyf_1e5a0[173];
db dummyf_1e64d; // 17c5:69fd
db dummyf_1e64e[87];
db dummyf_1e6a5; // 17c5:6a55
db dummyf_1e6a6[1275];
db dummyf_1eba1; // 17c5:6f51
db dummyf_1eba2[745];
db dummyf_1ee8b; // 17c5:723b
db dummyf_1ee8c[77];
db dummyf_1eed9; // 17c5:7289
db dummyf_1eeda[770];
db dummyf_1f1dc; // 17c5:758c
db dummyf_1f1dd; // 17c5:758d
db dummyf_1f1de[683];
db dummyf_1f489; // 17c5:7839
db dummyf_1f48a[435];
db dummyf_1f63d; // 17c5:79ed
db dummyf_1f63e[53];
db dummyf_1f673; // 17c5:7a23
db dummyf_1f674[895];
db dummyf_1f9f3; // 17c5:7da3
db dummyf_1f9f4[39];
db dummyf_1fa1b; // 17c5:7dcb
db dummyf_1fa1c[123];
db dummyf_1fa97; // 17c5:7e47
db dummyf_1fa98[323];
db dummyf_1fbdb; // 17c5:7f8b
db dummyf_1fbdc[485];
db dummyf_1fdc1; // 17c5:8171
db dummyf_1fdc2[403];
db dummyf_1ff55; // 17c5:8305
db dummyf_1ff56[69];
db dummyf_1ff9b; // 17c5:834b
db dummyf_1ff9c[619];
db dummyf_20207; // 17c5:85b7
db dummyf_20208[113];
db dummyf_20279; // 17c5:8629
db dummyf_2027a[333];
db dummyf_203c7; // 17c5:8777
db dummyf_203c8[113];
db dummyf_20439; // 17c5:87e9
db dummyf_2043a[167];
db dummyf_204e1; // 17c5:8891
db dummyf_204e2[75];
db dummyf_2052d; // 17c5:88dd
db dummyf_2052e[203];
db dummyf_205f9; // 17c5:89a9
db dummyf_205fa[23];
db dummyf_20611; // 17c5:89c1
db dummyf_20612[35];
db dummyf_20635; // 17c5:89e5
db dummyf_20636[191];
db dummyf_206f5; // 17c5:8aa5
db dummyf_206f6[123];
db dummyf_20771; // 17c5:8b21
db dummyf_20772[675];
db dummyf_20a15; // 17c5:8dc5
db dummyf_20a16[113];
db dummyf_20a87; // 17c5:8e37
db dummyf_20a88[5155];
db dummyf_21eab; // 17c5:a25b
db dummyf_21eac[143];
db dummyf_21f3b; // 17c5:a2eb
db dummyf_21f3c[123];
db dummyf_21fb7; // 17c5:a367
db dummyf_21fb8[121];
db dummyf_22031; // 17c5:a3e1
db dummyf_22032[855];
db dummyf_22389; // 17c5:a739
db dummyf_2238a[5];
db dummyf_2238f; // 17c5:a73f
db dummyf_22390[305];
db dummyf_224c1; // 17c5:a871
db dummyf_224c2[173];
db dummyf_2256f; // 17c5:a91f
db dummyf_22570[19];
db dummyf_22583; // 17c5:a933
db dummyf_22584[45];
db dummyf_225b1; // 17c5:a961
db dummyf_225b2[89];
db dummyf_2260b; // 17c5:a9bb
db dummyf_2260c[29];
db dummyf_22629; // 17c5:a9d9
db dummyf_2262a[8183];
db dummyf_24621; // 17c5:c9d1
db dummyf_24622[167];
db dummyf_246c9; // 17c5:ca79
db dummyf_246ca[455];
db dummyf_24891; // 17c5:cc41
db dummyf_24892[261];
db dummyf_24997; // 17c5:cd47
db dummyf_24998[489];
db dummyf_24b81; // 17c5:cf31
db dummyf_24b82[79];
db dummyf_24bd1; // 17c5:cf81
db dummyf_24bd2[265];
db dummyf_24cdb; // 17c5:d08b
db dummyf_24cdc[161];
db dummyf_24d7d; // 17c5:d12d
db dummyf_24d7e[19];
db dummyf_24d91; // 17c5:d141
db dummyf_24d92[27];
db dummyf_24dad; // 17c5:d15d
db dummyf_24dae[11];
db dummyf_24db9; // 17c5:d169
db dummyf_24dba[59];
db dummyf_24df5; // 17c5:d1a5
db dummyf_24df6[19];
db dummyf_24e09; // 17c5:d1b9
db dummyf_24e0a[13];
db dummyf_24e17; // 17c5:d1c7
db dummyf_24e18[13];
db dummyf_24e25; // 17c5:d1d5
db dummyf_24e26[11];
db dummyf_24e31; // 17c5:d1e1
db dummyf_24e32[5];
db dummyf_24e37; // 17c5:d1e7
db dummyf_24e38[119];
db dummyf_24eaf; // 17c5:d25f
db dummyf_24eb0[2683];
db dummyf_2592b; // 17c5:dcdb
db dummyf_2592c[129];
db dummyf_259ad; // 17c5:dd5d
db dummyf_259ae[17];
db dummyf_259bf; // 17c5:dd6f
db dummyf_259c0[57];
db dummyf_259f9; // 17c5:dda9
db dummyf_259fa[394];
db dummyf_25b84; // 17c5:df34
db dummyf_25b85[66];
db dummyf_25bc7; // 17c5:df77
db dummyf_25bc8[745];
db dummyf_25eb1;
db dummyf_25eb2[210];
db dummyf_25f84; // 17c5:e334
db dummyf_25f85[14];
db dummyf_25f93; // 17c5:e343
db dummyf_25f94[40];
db dummyf_25fbc; // 17c5:e36c
db dummyf_25fbd[196];
db dummyf_26081;
db dummyf_26082[545];
db dummyf_262a3;
db dummyf_262a4[239];
db dummyf_26393; // 17c5:e743
db dummyf_26394[7];
db dummyf_2639b; // 17c5:e74b
db dummyf_2639c[41];
db dummyf_263c5; // 17c5:e775
db dummyf_263c6[119];
db dummyf_2643d; // 17c5:e7ed
db dummyf_2643e[15];
db dummyf_2644d; // 17c5:e7fd
db dummyf_2644e[17];
db dummyf_2645f; // 17c5:e80f
db dummyf_26460[213];
db dummyf_26535; // 17c5:e8e5
db dummyf_26536[69];
db dummyf_2657b; // 17c5:e92b
db dummyf_2657c[191];
db dummyf_2663b;
db dummyf_2663c[77];
db dummyf_26689;
db dummyf_2668a[27];
db dummyf_266a5;
db dummyf_266a6[43];
db dummyf_266d1;
db dummyf_266d2[177];
db dummyf_26783;
db dummyf_26784[113];
db dummyf_267f5; // 17c5:eba5
db dummyf_267f6[17];
db dummyf_26807; // 17c5:ebb7
db dummyf_26808[15];
db dummyf_26817; // 17c5:ebc7
db dummyf_26818[17];
db dummyf_26829; // 17c5:ebd9
db dummyf_2682a[297];
db dummyf_26953;
db dummyf_26954[31];
db dummyf_26973;
db dummyf_26974[97];
db dummyf_269d5;
db dummyf_269d6[220];
db dummyf_26ab2; // 17c5:ee62
db dummyf_26ab3[70];
db dummyf_26af9; // 17c5:eea9
db dummyf_26afa[109];
db dummyf_26b67; // 17c5:ef17
db dummyf_26b68[13];
db dummyf_26b75; // 17c5:ef25
db dummyf_26b76[61];
db dummyf_26bb3; // 17c5:ef63
db dummyf_26bb4[37];
db dummyf_26bd9; // 17c5:ef89
db dummyf_26bda[23];
db dummyf_26bf1; // 17c5:efa1
db dummyf_26bf2[5];
db dummyf_26bf7; // 17c5:efa7
db dummyf_26bf8[61];
db dummyf_26c35; // 17c5:efe5
db dummyf_26c36[11];
db dummyf_26c41; // 17c5:eff1
db dummyf_26c42[257];
db dummyf_26d43; // 17c5:f0f3
db dummyf_26d44[269];
db dummyf_26e51;
db dummyf_26e52[95];
db dummyf_26eb1;
db dummyf_26eb2[13];
db dummyf_26ebf;
db dummyf_26ec0[11];
db dummyf_26ecb;
db dummyf_26ecc[11];
db dummyf_26ed7;
db dummyf_26ed8[65];
db dummyf_26f19; // 17c5:f2c9
db dummyf_26f1a[197];
db dummyf_26fdf; // 17c5:f38f
db dummyf_26fe0[72];
db dummyf_27028; // 17c5:f3d8
db dummyf_27029[590];
db dummyf_27277; // 17c5:f627
db dummyf_27278[405];
db dummyf_2740d;
db dummyf_2740e[194];
db dummyf_274d0[101];
db dummyf_27535;
db dummyf_27536[1371];
db dummyf_27a91;
db dummyf_27a92[83];
db dummyf_27ae5; // 274d:0615
db dummyf_27ae6[5];
db dummyf_27aeb; // 274d:061b
db dummyf_27aec[8];
db dummyf_27af4; // 274d:0624
db dummyf_27af5[5];
db dummyf_27afa; // 274d:062a
db dummyf_27afb[8];
db dummyf_27b03; // 274d:0633
db dummyf_27b04[33];
db dummyf_27b25; // 274d:0655
db dummyf_27b26[73];
db dummyf_27b6f; // 274d:069f
db dummyf_27b70[608];
db dummyf_27dd0; // 274d:0900
db dummyf_27dd1[426];
db dummyf_27f7b; // 274d:0aab
db dummyf_27f7c[435];
db dummyf_2812f; // 274d:0c5f
db dummyf_28130[1381];
db dummyf_28695;
db dummyf_28696[113];
db dummyf_28707; // 274d:1237
db dummyf_28708[7];
db dummyf_2870f; // 274d:123f
db dummyf_28710[13];
db dummyf_2871d; // 274d:124d
db dummyf_2871e[223];
db dummyf_287fd;
db dummyf_287fe[1471];
db dummyf_28dbd; // 274d:18ed
db dummyf_28dbe[725];
db dummyf_29093;
db dummyf_29094[275];
db dummyf_291a7; // 274d:1cd7
db dummyf_291a8[80];
db dummyf_291f8; // 274d:1d28
db dummyf_291f9[4];
db dummyf_291fd; // 274d:1d2d
db dummyf_291fe[13];
db dummyf_2920b; // 274d:1d3b
db dummyf_2920c[627];
db dummyf_2947f; // 274d:1faf
db dummyf_29480[107];
db dummyf_294eb;
db dummyf_294ec[45];
db dummyf_29519; // 274d:2049
db dummyf_2951a[57];
db dummyf_29553; // 274d:2083
db dummyf_29554[4];
db dummyf_29558; // 274d:2088
db dummyf_29559[13];
db dummyf_29566; // 274d:2096
db dummyf_29567[258];
db dummyf_29669; // 274d:2199
db dummyf_2966a[86];
db dummyf_296c0[262];
db dummyf_297c6; // 296c:0106
db dummyf_297c7[222];
db dummyf_298a5; // 296c:01e5
db dummyf_298a6[42];
db dummyf_298d0; // 296c:0210
db dummyf_298d1[304];
db dummyf_29a01; // 296c:0341
db dummyf_29a02[153];
db dummyf_29a9b; // 296c:03db
db dummyf_29a9c[754];
db dummyf_29d8e; // 296c:06ce
db dummyf_29d8f[548];
db dummyf_29fb3; // 296c:08f3
db dummyf_29fb4[26];
db dummyf_29fce; // 296c:090e
db dummyf_29fcf[69];
db dummyf_2a014; // 296c:0954
db dummyf_2a015[26];
db dummyf_2a02f; // 296c:096f
db dummyf_2a030[754];
db dummyf_2a322; // 296c:0c62
db dummyf_2a323[20];
db dummyf_2a337; // 296c:0c77
db dummyf_2a338[12];
db dummyf_2a344; // 296c:0c84
db dummyf_2a345[18];
db dummyf_2a357; // 296c:0c97
db dummyf_2a358[56];
db dummyf_2a390[393];
db dummyf_2a519;
db dummyf_2a51a;
db dummyf_2a51b;
db dummyf_2a51c;
db dummyf_2a51d;
db dummyf_2a51e;
db dummyf_2a51f;
db byte_38b00[47]; // 2a39:0190
db byte_38b2f[3695]; // 2a39:01bf
db __unk_3999e[5]; // 2a39:102e
db _unk_399a3[20]; // 2a39:1033
db __unk_399b7[5]; // 2a39:1047
db dummyf_2b3dc[25]; // 2a39:104c
db _unk_399d5[5]; // 2a39:1065
db _unk_399da[5]; // 2a39:106a
db __unk_399df[5]; // 2a39:106f
db __unk_399e4[5]; // 2a39:1074
db __unk_399e9[5]; // 2a39:1079
db __unk_399ee[10]; // 2a39:107e
db _unk_399f8[30]; // 2a39:1088
db __unk_39a16[5]; // 2a39:10a6
db _unk_39a1b[5]; // 2a39:10ab
db __unk_39a20[5]; // 2a39:10b0
db dummyf_2b445[5]; // 2a39:10b5
db dummyf_2b44a[5]; // 2a39:10ba
db _unk_39a2f[10]; // 2a39:10bf
db __unk_39a39[5]; // 2a39:10c9
db __unk_39a3e[5]; // 2a39:10ce
db __unk_39a43[5]; // 2a39:10d3
db __unk_39a48[5]; // 2a39:10d8
db __unk_39a4d[5]; // 2a39:10dd
db __unk_39a52[5]; // 2a39:10e2
db __unk_39a57[15]; // 2a39:10e7
db __unk_39a66[5]; // 2a39:10f6
db __unk_39a6b[5]; // 2a39:10fb
db __unk_39a70[10]; // 2a39:1100
db _unk_39a7a[5]; // 2a39:110a
db __unk_39a7f[5]; // 2a39:110f
db _unk_39a84[20]; // 2a39:1114
db __unk_39a98[5]; // 2a39:1128
db __unk_39a9d[5]; // 2a39:112d
db __unk_39aa2[5]; // 2a39:1132
db __unk_39aa7[5]; // 2a39:1137
db __unk_39aac[5]; // 2a39:113c
db __unk_39ab1[5]; // 2a39:1141
db __unk_39ab6[10]; // 2a39:1146
db __unk_39ac0[5]; // 2a39:1150
db __unk_39ac5[10]; // 2a39:1155
db _unk_39acf[5]; // 2a39:115f
db __unk_39ad4[5]; // 2a39:1164
db __unk_39ad9[10]; // 2a39:1169
db __unk_39ae3[15]; // 2a39:1173
db __unk_39af2[5]; // 2a39:1182
db __unk_39af7[5]; // 2a39:1187
db __unk_39afc[5]; // 2a39:118c
db __unk_39b01[10]; // 2a39:1191
db __unk_39b0b[10]; // 2a39:119b
db __unk_39b15[5]; // 2a39:11a5
db __unk_39b1a[15]; // 2a39:11aa
db __unk_39b29[15]; // 2a39:11b9
db _unk_39b38[45]; // 2a39:11c8
db __unk_39b65[10]; // 2a39:11f5
db __unk_39b6f[35]; // 2a39:11ff
db __unk_39b92[5]; // 2a39:1222
db __unk_39b97[5]; // 2a39:1227
db __unk_39b9c[10]; // 2a39:122c
db __unk_39ba6[5]; // 2a39:1236
db __unk_39bab[5]; // 2a39:123b
db _unk_39bb0[5]; // 2a39:1240
db _unk_39bb5[5]; // 2a39:1245
db _unk_39bba[5]; // 2a39:124a
db __unk_39bbf[17929]; // 2a39:124f
db dummyf_2fbe8;
db dummyf_2fbe9;
db dummyf_2fbea;
dw dummyf_2fbeb;
db dummyf_2fbed;
db dummyf_2fbee;
db dummyf_2fbef;
db byte_3e1d0[43280]; // 2a39:5860
db dummyf_3a500;
db dummyf_3a501;
db dummyf_3a502;
db dummyf_3a503;
db dummyf_3a504;
db dummyf_3a505;
dw word_48ae6; // 3a50:0006
char amsruntimelibra[56]; // 3a50:0008
db dummyf_3a540; // 3a50:0040
db dummyf_3a541;
char aregnxxx[9]; // 3a50:0042
char albxxx[7]; // 3a50:004b
char apgxxx[7]; // 3a50:0052
char avnxxx[7]; // 3a50:0059
char amexxx[7]; // 3a50:0060
char ancxxx[7]; // 3a50:0067
char acexxx[7]; // 3a50:006e
char ajpxxx[7]; // 3a50:0075
char anaxxx[7]; // 3a50:007c
db byte_48b63; // 3a50:0083
db byte_48b64; // 3a50:0084
db dummyf_3a585;
dw word_48b66; // 3a50:0086
dw word_48b68; // 3a50:0088
dw word_48b6a; // 3a50:008a
dw dummyf_3a58c; // 3a50:008c
dw dummyf_3a58e; // 3a50:008e
dw dummyf_3a590; // 3a50:0090
dw dummyf_3a592; // 3a50:0092
dw dummyf_3a594; // 3a50:0094
dw dummyf_3a596; // 3a50:0096
dw dummyf_3a598; // 3a50:0098
dw dummyf_3a59a; // 3a50:009a
char a256pitpic[11]; // 3a50:009c
char acockpitpic[12]; // 3a50:00a7
db dummyf_3a5b3[1];
char af15dgtlbin[12]; // 3a50:00b4
dw word_48ba0; // 3a50:00c0
dw word_48ba2; // 3a50:00c2
db dummyf_3a5c4; // 3a50:00c4
db dummyf_3a5c5;
db dummyf_3a5c6;
db dummyf_3a5c7;
db dummyf_3a5c8;
db dummyf_3a5c9;
db dummyf_3a5ca; // 3a50:00ca
db dummyf_3a5cb; // 3a50:00cb
db dummyf_3a5cc; // 3a50:00cc
db dummyf_3a5cd;
db dummyf_3a5ce;
db dummyf_3a5cf;
db dummyf_3a5d0; // 3a50:00d0
db dummyf_3a5d1;
db dummyf_3a5d2; // 3a50:00d2
db dummyf_3a5d3;
db dummyf_3a5d4;
db dummyf_3a5d5;
db dummyf_3a5d6;
db dummyf_3a5d7;
db dummyf_3a5d8;
db dummyf_3a5d9;
dw word_48bba; // 3a50:00da
dw word_48bbc; // 3a50:00dc
dw word_48bbe[2]; // 3a50:00de
db byte_48bc2[16]; // 3a50:00e2
db dummyf_3a5f2[13]; // 3a50:00e2
db dummyf_3a5ff[5]; // 3a50:00e2
db byte_48be4; // 3a50:0104
char aerrorreleasing[44]; // 3a50:0105
char areadyfortakeof[18]; // 3a50:0131
char aweaponsrepleni[20]; // 3a50:0143
char aautomaticlandi[26]; // 3a50:0157
db dummyf_3a671;
dw word_48c52; // 3a50:0172
dw word_48c54[2]; // 3a50:0174
dw word_48c58[3]; // 3a50:0178
dw word_48c5e; // 3a50:017e
dw word_48c60; // 3a50:0180
dw word_48c62; // 3a50:0182
dw word_48c64; // 3a50:0184
char anone[5]; // 3a50:0186
db dummyf_3a68b;
db dummyf_3a68c;
db dummyf_3a68d;
db dummyf_3a68e;
db dummyf_3a68f;
db dummyf_3a690;
db dummyf_3a691;
db dummyf_3a692;
db dummyf_3a693;
char asa2[5]; // 3a50:0194
db dummyf_3a699;
db dummyf_3a69a;
db dummyf_3a69b;
db dummyf_3a69c; // 3a50:019c
db dummyf_3a69d;
db dummyf_3a69e; // 3a50:019e
db dummyf_3a69f;
db dummyf_3a6a0;
db dummyf_3a6a1;
char asa5[5]; // 3a50:01a2
db dummyf_3a6a7;
db dummyf_3a6a8;
db dummyf_3a6a9;
db dummyf_3a6aa; // 3a50:01aa
db dummyf_3a6ab; // 3a50:01ab
db dummyf_3a6ac; // 3a50:01ac
db dummyf_3a6ad;
db dummyf_3a6ae;
db dummyf_3a6af;
char asa8b[6]; // 3a50:01b0
db dummyf_3a6b6;
db dummyf_3a6b7;
db dummyf_3a6b8; // 3a50:01b8
db dummyf_3a6b9;
db dummyf_3a6ba; // 3a50:01ba
db dummyf_3a6bb;
db dummyf_3a6bc;
db dummyf_3a6bd;
char asa10[6]; // 3a50:01be
db dummyf_3a6c4;
db dummyf_3a6c5;
db dummyf_3a6c6; // 3a50:01c6
db dummyf_3a6c7; // 3a50:01c7
db dummyf_3a6c8; // 3a50:01c8
db dummyf_3a6c9;
db dummyf_3a6ca; // 3a50:01ca
db dummyf_3a6cb;
char asa11[6]; // 3a50:01cc
db dummyf_3a6d2;
db dummyf_3a6d3;
db dummyf_3a6d4; // 3a50:01d4
db dummyf_3a6d5;
db dummyf_3a6d6; // 3a50:01d6
db dummyf_3a6d7;
db dummyf_3a6d8;
db dummyf_3a6d9;
char asa12[6]; // 3a50:01da
db dummyf_3a6e0;
db dummyf_3a6e1;
db dummyf_3a6e2; // 3a50:01e2
db dummyf_3a6e3; // 3a50:01e3
db dummyf_3a6e4; // 3a50:01e4
db dummyf_3a6e5;
db dummyf_3a6e6; // 3a50:01e6
db dummyf_3a6e7;
char asa13[6]; // 3a50:01e8
db dummyf_3a6ee;
db dummyf_3a6ef;
db dummyf_3a6f0; // 3a50:01f0
db dummyf_3a6f1;
db dummyf_3a6f2; // 3a50:01f2
db dummyf_3a6f3;
db dummyf_3a6f4;
db dummyf_3a6f5;
char asan4[7]; // 3a50:01f6
db dummyf_3a6fd;
db dummyf_3a6fe; // 3a50:01fe
db dummyf_3a6ff;
db dummyf_3a700; // 3a50:0200
db dummyf_3a701;
db dummyf_3a702; // 3a50:0202
db dummyf_3a703;
char asan5[7]; // 3a50:0204
db dummyf_3a70b;
db dummyf_3a70c; // 3a50:020c
db dummyf_3a70d;
db dummyf_3a70e; // 3a50:020e
db dummyf_3a70f;
db dummyf_3a710;
db dummyf_3a711;
char asan6[7]; // 3a50:0212
db dummyf_3a719;
db dummyf_3a71a; // 3a50:021a
db dummyf_3a71b; // 3a50:021b
db dummyf_3a71c; // 3a50:021c
db dummyf_3a71d;
db dummyf_3a71e; // 3a50:021e
db dummyf_3a71f;
char asan7[7]; // 3a50:0220
db dummyf_3a727;
db dummyf_3a728; // 3a50:0228
db dummyf_3a729;
db dummyf_3a72a; // 3a50:022a
db dummyf_3a72b;
db dummyf_3a72c;
db dummyf_3a72d;
char ahawk[5]; // 3a50:022e
db dummyf_3a733;
db dummyf_3a734;
db dummyf_3a735;
db dummyf_3a736; // 3a50:0236
db dummyf_3a737;
db dummyf_3a738; // 3a50:0238
db dummyf_3a739;
db dummyf_3a73a; // 3a50:023a
db dummyf_3a73b;
char arapier[7]; // 3a50:023c
db dummyf_3a743;
db dummyf_3a744; // 3a50:0244
db dummyf_3a745;
db dummyf_3a746; // 3a50:0246
db dummyf_3a747;
db dummyf_3a748;
db dummyf_3a749;
char atiger[6]; // 3a50:024a
db dummyf_3a750;
db dummyf_3a751;
db dummyf_3a752; // 3a50:0252
db dummyf_3a753;
db dummyf_3a754; // 3a50:0254
db dummyf_3a755;
db dummyf_3a756;
db dummyf_3a757;
char aseacat[7]; // 3a50:0258
db dummyf_3a75f;
db dummyf_3a760; // 3a50:0260
db dummyf_3a761;
db dummyf_3a762; // 3a50:0262
db dummyf_3a763;
db dummyf_3a764;
db dummyf_3a765;
char ail76[5]; // 3a50:0266
db dummyf_3a76b[32]; // 3a50:026b
db dummyf_3a78b[32]; // 3a50:028b
db dummyf_3a7ab;
db dummyf_3a7ac; // 3a50:02ac
db dummyf_3a7ad; // 3a50:02ad
db dummyf_3a7ae; // 3a50:02ae
db dummyf_3a7af;
db dummyf_3a7b0;
db dummyf_3a7b1;
db dummyf_3a7b2;
db dummyf_3a7b3;
db dummyf_3a7b4; // 3a50:02b4
db dummyf_3a7b5; // 3a50:02b5
db dummyf_3a7b6; // 3a50:02b6
db dummyf_3a7b7;
db dummyf_3a7b8; // 3a50:02b8
db dummyf_3a7b9;
db dummyf_3a7ba;
db dummyf_3a7bb;
db dummyf_3a7bc;
db dummyf_3a7bd;
db dummyf_3a7be;
db dummyf_3a7bf;
db dummyf_3a7c0;
db dummyf_3a7c1;
db dummyf_3a7c2; // 3a50:02c2
db dummyf_3a7c3;
db dummyf_3a7c4; // 3a50:02c4
db dummyf_3a7c5;
db dummyf_3a7c6;
db dummyf_3a7c7;
char amig23[7]; // 3a50:02c8
char aflogger[9]; // 3a50:02cf
db dummyf_3a7d8;
db dummyf_3a7d9;
db dummyf_3a7da; // 3a50:02da
db dummyf_3a7db; // 3a50:02db
db dummyf_3a7dc; // 3a50:02dc
db dummyf_3a7dd; // 3a50:02dd
db dummyf_3a7de; // 3a50:02de
db dummyf_3a7df;
db dummyf_3a7e0; // 3a50:02e0
db dummyf_3a7e1;
db dummyf_3a7e2; // 3a50:02e2
db dummyf_3a7e3;
db dummyf_3a7e4; // 3a50:02e4
db dummyf_3a7e5;
db dummyf_3a7e6;
db dummyf_3a7e7;
char amig25[7]; // 3a50:02e8
char afoxbat[8]; // 3a50:02ef
db dummyf_3a7f7;
db dummyf_3a7f8;
db dummyf_3a7f9;
db dummyf_3a7fa; // 3a50:02fa
db dummyf_3a7fb; // 3a50:02fb
db dummyf_3a7fc; // 3a50:02fc
db dummyf_3a7fd; // 3a50:02fd
db dummyf_3a7fe; // 3a50:02fe
db dummyf_3a7ff;
db dummyf_3a800; // 3a50:0300
db dummyf_3a801;
db dummyf_3a802;
db dummyf_3a803;
db dummyf_3a804; // 3a50:0304
db dummyf_3a805;
db dummyf_3a806;
db dummyf_3a807;
char amig29[7]; // 3a50:0308
char afulcrum[9]; // 3a50:030f
db dummyf_3a818;
db dummyf_3a819;
db dummyf_3a81a; // 3a50:031a
db dummyf_3a81b; // 3a50:031b
db dummyf_3a81c; // 3a50:031c
db dummyf_3a81d; // 3a50:031d
db dummyf_3a81e; // 3a50:031e
db dummyf_3a81f;
db dummyf_3a820; // 3a50:0320
db dummyf_3a821;
db dummyf_3a822; // 3a50:0322
db dummyf_3a823;
db dummyf_3a824; // 3a50:0324
db dummyf_3a825;
db dummyf_3a826;
db dummyf_3a827;
char af1[4]; // 3a50:0328
db dummyf_3a82c;
db dummyf_3a82d;
db dummyf_3a82e;
char amirage[8]; // 3a50:032f
db dummyf_3a837;
db dummyf_3a838;
db dummyf_3a839;
db dummyf_3a83a; // 3a50:033a
db dummyf_3a83b; // 3a50:033b
db dummyf_3a83c; // 3a50:033c
db dummyf_3a83d; // 3a50:033d
db dummyf_3a83e; // 3a50:033e
db dummyf_3a83f;
db dummyf_3a840; // 3a50:0340
db dummyf_3a841;
db dummyf_3a842;
db dummyf_3a843;
db dummyf_3a844; // 3a50:0344
db dummyf_3a845;
db dummyf_3a846;
db dummyf_3a847;
char asu27[6]; // 3a50:0348
db dummyf_3a84e;
char aflanker[9]; // 3a50:034f
db dummyf_3a858;
db dummyf_3a859;
db dummyf_3a85a; // 3a50:035a
db dummyf_3a85b; // 3a50:035b
db dummyf_3a85c; // 3a50:035c
db dummyf_3a85d; // 3a50:035d
db dummyf_3a85e; // 3a50:035e
db dummyf_3a85f;
db dummyf_3a860; // 3a50:0360
db dummyf_3a861;
db dummyf_3a862; // 3a50:0362
db dummyf_3a863;
db dummyf_3a864; // 3a50:0364
db dummyf_3a865;
db dummyf_3a866;
db dummyf_3a867;
char ail76_0[6]; // 3a50:0368
db dummyf_3a86e;
char amainstay[10]; // 3a50:036f
db dummyf_3a879[32]; // 3a50:0379
db dummyf_3a899[32]; // 3a50:0399
db dummyf_3a8b9[32]; // 3a50:03b9
db dummyf_3a8d9;
db dummyf_3a8da; // 3a50:03da
db dummyf_3a8db; // 3a50:03db
db dummyf_3a8dc; // 3a50:03dc
db dummyf_3a8dd; // 3a50:03dd
db dummyf_3a8de; // 3a50:03de
db dummyf_3a8df;
db dummyf_3a8e0; // 3a50:03e0
db dummyf_3a8e1; // 3a50:03e1
db dummyf_3a8e2;
db dummyf_3a8e3;
db dummyf_3a8e4; // 3a50:03e4
db dummyf_3a8e5;
db dummyf_3a8e6;
db dummyf_3a8e7;
char aan72[6]; // 3a50:03e8
db dummyf_3a8ee;
char acoaler[8]; // 3a50:03ef
db dummyf_3a8f7[32]; // 3a50:03f7
db dummyf_3a917[32]; // 3a50:0417
db dummyf_3a937[32]; // 3a50:0437
db dummyf_3a957;
db dummyf_3a958;
db dummyf_3a959;
db dummyf_3a95a; // 3a50:045a
db dummyf_3a95b; // 3a50:045b
db dummyf_3a95c; // 3a50:045c
db dummyf_3a95d; // 3a50:045d
db dummyf_3a95e; // 3a50:045e
db dummyf_3a95f;
db dummyf_3a960; // 3a50:0460
db dummyf_3a961; // 3a50:0461
db dummyf_3a962; // 3a50:0462
db dummyf_3a963;
db dummyf_3a964; // 3a50:0464
db dummyf_3a965;
db dummyf_3a966;
db dummyf_3a967;
char af4e[5]; // 3a50:0468
db dummyf_3a96d[32]; // 3a50:046d
db dummyf_3a98d[32]; // 3a50:048d
db dummyf_3a9ad[32]; // 3a50:04ad
db dummyf_3a9cd[32]; // 3a50:04cd
db dummyf_3a9ed[32]; // 3a50:04ed
db dummyf_3aa0d[32]; // 3a50:050d
db dummyf_3aa2d[32]; // 3a50:052d
db dummyf_3aa4d[32]; // 3a50:054d
db dummyf_3aa6d[32]; // 3a50:056d
db dummyf_3aa8d[32]; // 3a50:058d
db dummyf_3aaad[32]; // 3a50:05ad
db dummyf_3aacd[32]; // 3a50:05cd
db dummyf_3aaed[32]; // 3a50:05ed
db dummyf_3ab0d[32]; // 3a50:060d
db dummyf_3ab2d[32]; // 3a50:062d
db dummyf_3ab4d[32]; // 3a50:064d
db dummyf_3ab6d[32]; // 3a50:066d
db dummyf_3ab8d[32]; // 3a50:068d
db dummyf_3abad; // 3a50:06ad
db dummyf_3abae; // 3a50:06ae
db dummyf_3abaf;
db dummyf_3abb0; // 3a50:06b0
db dummyf_3abb1;
db dummyf_3abb2; // 3a50:06b2
db dummyf_3abb3;
db dummyf_3abb4; // 3a50:06b4
db dummyf_3abb5; // 3a50:06b5
db dummyf_3abb6; // 3a50:06b6
db dummyf_3abb7; // 3a50:06b7
db dummyf_3abb8; // 3a50:06b8
db dummyf_3abb9; // 3a50:06b9
db dummyf_3abba;
db dummyf_3abbb;
db dummyf_3abbc; // 3a50:06bc
db dummyf_3abbd;
db dummyf_3abbe; // 3a50:06be
db dummyf_3abbf; // 3a50:06bf
db dummyf_3abc0; // 3a50:06c0
db dummyf_3abc1;
db dummyf_3abc2; // 3a50:06c2
db dummyf_3abc3;
db dummyf_3abc4; // 3a50:06c4
db dummyf_3abc5;
char aaim9[6]; // 3a50:06c6
db dummyf_3abcc[32]; // 3a50:06cc
db dummyf_3abec[32]; // 3a50:06ec
db dummyf_3ac0c[32]; // 3a50:070c
db dummyf_3ac2c[32]; // 3a50:072c
db dummyf_3ac4c[32]; // 3a50:074c
db dummyf_3ac6c[32]; // 3a50:076c
db dummyf_3ac8c[32]; // 3a50:078c
db dummyf_3acac[32]; // 3a50:07ac
db dummyf_3accc; // 3a50:07cc
db dummyf_3accd; // 3a50:07cd
db dummyf_3acce;
db dummyf_3accf;
db dummyf_3acd0; // 3a50:07d0
db dummyf_3acd1;
db dummyf_3acd2; // 3a50:07d2
db dummyf_3acd3;
db dummyf_3acd4; // 3a50:07d4
db dummyf_3acd5; // 3a50:07d5
db dummyf_3acd6; // 3a50:07d6
db dummyf_3acd7; // 3a50:07d7
db dummyf_3acd8; // 3a50:07d8
db dummyf_3acd9; // 3a50:07d9
db dummyf_3acda;
db dummyf_3acdb;
db dummyf_3acdc;
db dummyf_3acdd;
db dummyf_3acde;
db dummyf_3acdf;
db dummyf_3ace0; // 3a50:07e0
db dummyf_3ace1;
db dummyf_3ace2;
db dummyf_3ace3;
db dummyf_3ace4; // 3a50:07e4
db dummyf_3ace5;
dw word_492c6; // 3a50:07e6
dw word_492c8[2]; // 3a50:07e8
dw word_492cc; // 3a50:07ec
dw word_492ce[3]; // 3a50:07ee
db dummyf_3acf4[14]; // 3a50:07f4
dw word_492e2; // 3a50:0802
dw word_492e4; // 3a50:0804
dw word_492e6; // 3a50:0806
dw word_492e8; // 3a50:0808
dw word_492ea; // 3a50:080a
dw word_492ec; // 3a50:080c
dw word_492ee; // 3a50:080e
db dummyf_3ad10; // 3a50:0810
db dummyf_3ad11;
dw word_492f2; // 3a50:0812
dw word_492f4; // 3a50:0814
char aaim9m[7]; // 3a50:0816
db dummyf_3ad1d[3];
char asidewinder[11]; // 3a50:0820
db dummyf_3ad2b;
db dummyf_3ad2c; // 3a50:082c
db dummyf_3ad2d[1];
db dummyf_3ad2e[2]; // 3a50:082e
char aaim120[8]; // 3a50:0830
db dummyf_3ad38[2]; // 3a50:0838
char aamraam[8]; // 3a50:083a
db dummyf_3ad42[8]; // 3a50:0842
char aagm88a[8]; // 3a50:084a
db dummyf_3ad52[2];
char aharm[5]; // 3a50:0854
db dummyf_3ad59[7];
db dummyf_3ad60[4]; // 3a50:0860
char aaim7m[7]; // 3a50:0864
db dummyf_3ad6b[3]; // 3a50:086b
char asparrow[8]; // 3a50:086e
db dummyf_3ad76[8]; // 3a50:0876
char aagm86a[8]; // 3a50:087e
db dummyf_3ad86[2];
char aharpoon[8]; // 3a50:0888
db dummyf_3ad90[8]; // 3a50:0890
char aagm65d[8]; // 3a50:0898
db dummyf_3ada0[2]; // 3a50:08a0
char amaverick[9]; // 3a50:08a2
db dummyf_3adab[7]; // 3a50:08ab
char agbu12[7]; // 3a50:08b2
db dummyf_3adb9[3];
char apaveway[8]; // 3a50:08bc
db dummyf_3adc4[4];
db dummyf_3adc8[4]; // 3a50:08c8
char amk20[6]; // 3a50:08cc
db dummyf_3add2[4]; // 3a50:08d2
char arockeye[8]; // 3a50:08d6
db dummyf_3adde[8]; // 3a50:08de
char adndl[5]; // 3a50:08e6
db dummyf_3adeb[5];
char adurandal[9]; // 3a50:08f0
db dummyf_3adf9[3];
db dummyf_3adfc[4]; // 3a50:08fc
char amk820[8]; // 3a50:0900
db dummyf_3ae08[2]; // 3a50:0908
char aslick[6]; // 3a50:090a
db dummyf_3ae10[10]; // 3a50:0910
char amk821[8]; // 3a50:091a
db dummyf_3ae22[2];
char asnakeye[8]; // 3a50:0924
db dummyf_3ae2c[4];
db dummyf_3ae30[4]; // 3a50:0930
char amk20_0[6]; // 3a50:0934
db dummyf_3ae3a[4]; // 3a50:093a
char arockeyeii[11]; // 3a50:093e
db dummyf_3ae49[1];
db dummyf_3ae4a[4]; // 3a50:094a
char amk122[7]; // 3a50:094e
db dummyf_3ae55[3];
char afireeye[8]; // 3a50:0958
db dummyf_3ae60[8]; // 3a50:0960
char acbu72[7]; // 3a50:0968
db dummyf_3ae6f[3]; // 3a50:096f
char afuelair[9]; // 3a50:0972
db dummyf_3ae7b[7]; // 3a50:097b
char amk35[6]; // 3a50:0982
db dummyf_3ae88[4]; // 3a50:0988
char aincluster[11]; // 3a50:098c
db dummyf_3ae97[1];
db dummyf_3ae98[4]; // 3a50:0998
char aiscb1[8]; // 3a50:099c
db dummyf_3aea4[2]; // 3a50:09a4
char aminelets[9]; // 3a50:09a6
db dummyf_3aeaf[7]; // 3a50:09af
char a135mm[7]; // 3a50:09b6
db dummyf_3aebd[3];
char acamera[7]; // 3a50:09c0
db dummyf_3aec7[9]; // 3a50:09c7
char a1900lbs[8]; // 3a50:09d0
db dummyf_3aed8[2]; // 3a50:09d8
char aextrafuel[11]; // 3a50:09da
db dummyf_3aee5[1];
db dummyf_3aee6[4]; // 3a50:09e6
char a20mm[6]; // 3a50:09ea
db dummyf_3aef0[4]; // 3a50:09f0
char aguns[5]; // 3a50:09f4
db dummyf_3aef9[11]; // 3a50:09f9
char aspecial[8]; // 3a50:0a04
db dummyf_3af0c[2]; // 3a50:0a0c
char aequip[6]; // 3a50:0a0e
db dummyf_3af14[74]; // 3a50:0a14
db dummyf_3af5e[15]; // 3a50:0a14
db dummyf_3af6d[14]; // 3a50:0a14
db dummyf_3af7b[12]; // 3a50:0a14
db dummyf_3af87[19]; // 3a50:0a14
db dummyf_3af9a[14]; // 3a50:0a14
db dummyf_3afa8[16]; // 3a50:0a14
db dummyf_3afb8[15]; // 3a50:0a14
db dummyf_3afc7[16]; // 3a50:0a14
db dummyf_3afd7[14]; // 3a50:0a14
db dummyf_3afe5[39]; // 3a50:0a14
db dummyf_3b00c[22]; // 3a50:0a14
dw word_49602; // 3a50:0b22
dw word_49604; // 3a50:0b24
db dummyf_3b026;
db dummyf_3b027;
db dummyf_3b028;
db dummyf_3b029;
dw word_4960a[52]; // 3a50:0b2a
dw word_49672; // 3a50:0b92
db dummyf_3b094[32]; // 3a50:0b94
db dummyf_3b0b4[32]; // 3a50:0bb4
db dummyf_3b0d4[32]; // 3a50:0bd4
db dummyf_3b0f4[32]; // 3a50:0bf4
db dummyf_3b114[32]; // 3a50:0c14
db dummyf_3b134[32]; // 3a50:0c34
db dummyf_3b154[32]; // 3a50:0c54
db dummyf_3b174[32]; // 3a50:0c74
db dummyf_3b194[32]; // 3a50:0c94
db dummyf_3b1b4[32]; // 3a50:0cb4
db dummyf_3b1d4[32]; // 3a50:0cd4
db dummyf_3b1f4[32]; // 3a50:0cf4
db dummyf_3b214[32]; // 3a50:0d14
db dummyf_3b234[32]; // 3a50:0d34
db dummyf_3b254[32]; // 3a50:0d54
db dummyf_3b274[32]; // 3a50:0d74
db dummyf_3b294[32]; // 3a50:0d94
db dummyf_3b2b4[32]; // 3a50:0db4
db dummyf_3b2d4[32]; // 3a50:0dd4
db dummyf_3b2f4[32]; // 3a50:0df4
db dummyf_3b314[32]; // 3a50:0e14
dw word_49914; // 3a50:0e34
dw word_49916; // 3a50:0e36
dw word_49918; // 3a50:0e38
dw word_4991a; // 3a50:0e3a
dw word_4991c; // 3a50:0e3c
dw _unk_4991e; // 3a50:0e3e
dw word_49920; // 3a50:0e40
dw word_49922; // 3a50:0e42
dw word_49924; // 3a50:0e44
dw word_49926; // 3a50:0e46
dw word_49928; // 3a50:0e48
dw word_4992a; // 3a50:0e4a
dw word_4992c; // 3a50:0e4c
dw word_4992e; // 3a50:0e4e
dw word_49930; // 3a50:0e50
dw word_49932; // 3a50:0e52
dw word_49934; // 3a50:0e54
dw word_49936; // 3a50:0e56
dw word_49938; // 3a50:0e58
dw word_4993a; // 3a50:0e5a
dw word_4993c; // 3a50:0e5c
dw word_4993e; // 3a50:0e5e
dw word_49940; // 3a50:0e60
dw word_49942; // 3a50:0e62
dw word_49944; // 3a50:0e64
char astoresexhauste[17]; // 3a50:0e66
char aflare[6]; // 3a50:0e77
char achaff[6]; // 3a50:0e7d
char areleased[10]; // 3a50:0e83
db dummyf_3b38d; // 3a50:0e8d
db dummyf_3b38e;
char agun[5]; // 3a50:0e8f
char dummyf_3b394[2]; // 3a50:0e94
db dummyf_3b396; // 3a50:0e96
db dummyf_3b397;
db as; // 3a50:0e98
db dummyf_3b399;
dw word_4997a; // 3a50:0e9a
char aonpatrol[11]; // 3a50:0e9c
char af15strikeeagle[17]; // 3a50:0ea7
char aat[5]; // 3a50:0eb8
db dummyf_3b3bd;
db dummyf_3b3be[320];
db dummyf_3b4fe; // 3a50:0ffe
db dummyf_3b4ff[1];
db dummyf_3b500;
db dummyf_3b501[1];
db dummyf_3b502;
db dummyf_3b503[5];
db dummyf_3b508; // 3a50:1008
db dummyf_3b509[1];
db dummyf_3b50a;
db dummyf_3b50b[1];
db dummyf_3b50c;
db dummyf_3b50d; // 3a50:100d
db dummyf_3b50e;
db dummyf_3b50f;
db dummyf_3b510;
db dummyf_3b511;
db dummyf_3b512[20];
db dummyf_3b526; // 3a50:1026
db dummyf_3b527[1];
db dummyf_3b528;
db dummyf_3b529[1];
db dummyf_3b52a;
db dummyf_3b52b[5];
db dummyf_3b530; // 3a50:1030
db dummyf_3b531[1];
db dummyf_3b532;
db dummyf_3b533[1];
db dummyf_3b534;
db dummyf_3b535[10];
db dummyf_3b53f; // 3a50:103f
db dummyf_3b540;
db dummyf_3b541;
db dummyf_3b542;
db dummyf_3b543;
db dummyf_3b544; // 3a50:1044
db dummyf_3b545[1];
db dummyf_3b546;
db dummyf_3b547[1];
db dummyf_3b548;
db dummyf_3b549[5];
db dummyf_3b54e; // 3a50:104e
db dummyf_3b54f[1];
db dummyf_3b550;
db dummyf_3b551[1];
db dummyf_3b552;
db dummyf_3b553; // 3a50:1053
db dummyf_3b554;
db dummyf_3b555;
db dummyf_3b556;
db dummyf_3b557;
db dummyf_3b558[5];
db dummyf_3b55d[32]; // 3a50:105d
db dummyf_3b57d;
db dummyf_3b57e;
db dummyf_3b57f;
db dummyf_3b580; // 3a50:1080
db dummyf_3b581[1];
db dummyf_3b582;
db dummyf_3b583[1];
db dummyf_3b584;
db dummyf_3b585[5];
db dummyf_3b58a; // 3a50:108a
db dummyf_3b58b[1];
db dummyf_3b58c;
db dummyf_3b58d[1];
db dummyf_3b58e;
db dummyf_3b58f[5];
db dummyf_3b594; // 3a50:1094
db dummyf_3b595[1];
db dummyf_3b596;
db dummyf_3b597[1];
db dummyf_3b598;
db dummyf_3b599; // 3a50:1099
db dummyf_3b59a;
db dummyf_3b59b;
db dummyf_3b59c;
db dummyf_3b59d;
db dummyf_3b59e;
db dummyf_3b59f;
db dummyf_3b5a0;
db dummyf_3b5a1;
db dummyf_3b5a2;
db dummyf_3b5a3;
db dummyf_3b5a4;
db dummyf_3b5a5;
db dummyf_3b5a6;
db dummyf_3b5a7;
db dummyf_3b5a8;
db dummyf_3b5a9;
db dummyf_3b5aa;
db dummyf_3b5ab;
db dummyf_3b5ac;
db dummyf_3b5ad;
db dummyf_3b5ae;
db dummyf_3b5af;
db dummyf_3b5b0;
db dummyf_3b5b1;
db dummyf_3b5b2[15];
db dummyf_3b5c1; // 3a50:10c1
db dummyf_3b5c2;
db dummyf_3b5c3;
db dummyf_3b5c4;
db dummyf_3b5c5;
db dummyf_3b5c6[30];
db dummyf_3b5e4;
db dummyf_3b5e5;
db dummyf_3b5e6;
db dummyf_3b5e7;
db dummyf_3b5e8;
db dummyf_3b5e9;
db dummyf_3b5ea;
db dummyf_3b5eb;
db dummyf_3b5ec; // 3a50:10ec
db dummyf_3b5ed;
db dummyf_3b5ee; // 3a50:10ee
db dummyf_3b5ef;
db dummyf_3b5f0;
db dummyf_3b5f1;
db dummyf_3b5f2;
db dummyf_3b5f3;
db dummyf_3b5f4;
db dummyf_3b5f5;
db dummyf_3b5f6; // 3a50:10f6
db dummyf_3b5f7;
db dummyf_3b5f8;
db dummyf_3b5f9;
db dummyf_3b5fa; // 3a50:10fa
db dummyf_3b5fb;
db dummyf_3b5fc;
db dummyf_3b5fd;
db dummyf_3b5fe; // 3a50:10fe
db dummyf_3b5ff; // 3a50:10ff
dw word_49be0; // 3a50:1100
db byte_49be2[15]; // 3a50:1102
db dummyf_3b611[12]; // 3a50:1102
db dummyf_3b61d[16]; // 3a50:1102
db dummyf_3b62d[23]; // 3a50:1102
db dummyf_3b644[12]; // 3a50:1102
db dummyf_3b650[15]; // 3a50:1102
db dummyf_3b65f[17]; // 3a50:1102
db dummyf_3b670[21]; // 3a50:1102
db dummyf_3b685[17]; // 3a50:1102
db dummyf_3b696[12]; // 3a50:1102
db dummyf_3b6a2[12]; // 3a50:1102
db dummyf_3b6ae[14]; // 3a50:1102
db dummyf_3b6bc[14]; // 3a50:1102
db dummyf_3b6ca[16]; // 3a50:1102
db dummyf_3b6da[14]; // 3a50:1102
db dummyf_3b6e8[13]; // 3a50:1102
db dummyf_3b6f5[15]; // 3a50:1102
db dummyf_3b704[13]; // 3a50:1102
db dummyf_3b711[18]; // 3a50:1102
db dummyf_3b723[24]; // 3a50:1102
db dummyf_3b73b[13]; // 3a50:1102
db dummyf_3b748[12]; // 3a50:1102
db dummyf_3b754[12]; // 3a50:1102
db dummyf_3b760[11]; // 3a50:1102
db dummyf_3b76b[11]; // 3a50:1102
db dummyf_3b776[11]; // 3a50:1102
db dummyf_3b781[10]; // 3a50:1102
db dummyf_3b78b[27]; // 3a50:1102
db dummyf_3b7a6[10]; // 3a50:1102
db dummyf_3b7b0[10]; // 3a50:1102
db dummyf_3b7ba[15]; // 3a50:1102
db dummyf_3b7c9[11]; // 3a50:1102
db dummyf_3b7d4[16]; // 3a50:1102
db dummyf_3b7e4[16]; // 3a50:1102
db dummyf_3b7f4[8]; // 3a50:1102
dw word_49ddc; // 3a50:12fc
db dummyf_3b7fe;
db dummyf_3b7ff; // 3a50:12ff
db dummyf_3b800[7];
db dummyf_3b807;
dw word_49de8[101]; // 3a50:1308
dw word_49eb2; // 3a50:13d2
dw word_49eb4[198]; // 3a50:13d4
dw word_4a040; // 3a50:1560
dw word_4a042; // 3a50:1562
dw word_4a044; // 3a50:1564
dw word_4a046; // 3a50:1566
dw word_4a048[15]; // 3a50:1568
dw dummyf_3ba86[8]; // 3a50:1568
dw dummyf_3ba96[9]; // 3a50:1568
dw dummyf_3baa8[10]; // 3a50:1568
dw dummyf_3babc[8]; // 3a50:1568
dw dummyf_3bacc[15]; // 3a50:1568
dw dummyf_3baea[15]; // 3a50:1568
dw dummyf_3bb08[8]; // 3a50:1568
dw dummyf_3bb18[15]; // 3a50:1568
dw dummyf_3bb36[8]; // 3a50:1568
dw dummyf_3bb46[8]; // 3a50:1568
dw dummyf_3bb56[19]; // 3a50:1568
dw dummyf_3bb7c[8]; // 3a50:1568
dw dummyf_3bb8c[15]; // 3a50:1568
dw dummyf_3bbaa[15]; // 3a50:1568
dw dummyf_3bbc8[8]; // 3a50:1568
dw dummyf_3bbd8[8]; // 3a50:1568
dw dummyf_3bbe8[9]; // 3a50:1568
dw dummyf_3bbfa[8]; // 3a50:1568
dw dummyf_3bc0a[12]; // 3a50:1568
dw dummyf_3bc22[8]; // 3a50:1568
dw dummyf_3bc32[9]; // 3a50:1568
dw dummyf_3bc44[8]; // 3a50:1568
dw dummyf_3bc54[10]; // 3a50:1568
dw dummyf_3bc68; // 3a50:1568
dw word_4a24a[2]; // 3a50:176a
char a3d3[5]; // 3a50:176e
char arb[3]; // 3a50:1773
char aopenerroron3d3[20]; // 3a50:1776
char abadobjfileform[21]; // 3a50:178a
char aobjectdatatoob[21]; // 3a50:179f
char arb_0[3]; // 3a50:17b4
char aphoto3d3[10]; // 3a50:17b7
char apleaseinsertf1[25]; // 3a50:17c1
char arb_1[3]; // 3a50:17da
char aphoto3d3_0[10]; // 3a50:17dd
char aobjdataoverflo[17]; // 3a50:17e7
char a3dt[5]; // 3a50:17f8
char arb_2[3]; // 3a50:17fd
char aopenerroron3dt[20]; // 3a50:1800
char abadtilefilefor[22]; // 3a50:1814
char atoomanytiles[16]; // 3a50:182a
char atoomuchtiledat[19]; // 3a50:183a
char a3dg[5]; // 3a50:184d
char arb_3[3]; // 3a50:1852
char apleaseinsertsc[28]; // 3a50:1855
char apressakeywhenr[25]; // 3a50:1871
char abadgridfilefor[22]; // 3a50:188a
dw word_4a380; // 3a50:18a0
dw word_4a382[2]; // 3a50:18a2
dw word_4a386; // 3a50:18a6
dw word_4a388; // 3a50:18a8
dw word_4a38a; // 3a50:18aa
dw word_4a38c; // 3a50:18ac
dw word_4a38e; // 3a50:18ae
dw word_4a390; // 3a50:18b0
dw word_4a392; // 3a50:18b2
dw word_4a394; // 3a50:18b4
dw word_4a396; // 3a50:18b6
dw word_4a398; // 3a50:18b8
dw word_4a39a; // 3a50:18ba
dw word_4a39c; // 3a50:18bc
db byte_4a39e; // 3a50:18be
db byte_4a39f; // 3a50:18bf
db byte_4a3a0; // 3a50:18c0
dw word_4a3a1; // 3a50:18c1
dw word_4a3a3; // 3a50:18c3
dw word_4a3a5; // 3a50:18c5
dw word_4a3a7; // 3a50:18c7
dw word_4a3a9; // 3a50:18c9
dw word_4a3ab; // 3a50:18cb
dw word_4a3ad; // 3a50:18cd
dw word_4a3af; // 3a50:18cf
db dummyf_3bdd1;
db dummyf_3bdd2; // 3a50:18d2
db dummyf_3bdd3;
db dummyf_3bdd4;
db dummyf_3bdd5;
db dummyf_3bdd6; // 3a50:18d6
db dummyf_3bdd7;
db dummyf_3bdd8; // 3a50:18d8
db dummyf_3bdd9;
db dummyf_3bdda; // 3a50:18da
db dummyf_3bddb;
db dummyf_3bddc; // 3a50:18dc
db dummyf_3bddd;
db dummyf_3bdde; // 3a50:18de
db dummyf_3bddf;
dw word_4a3c0; // 3a50:18e0
dw word_4a3c2; // 3a50:18e2
dw word_4a3c4; // 3a50:18e4
db byte_4a3c6; // 3a50:18e6
db byte_4a3c7; // 3a50:18e7
dw word_4a3c8; // 3a50:18e8
db byte_4a3ca[5]; // 3a50:18ea
db byte_4a3cf[14]; // 3a50:18ef
db dummyf_3bdfd[7]; // 3a50:18ef
dw word_4a3e4; // 3a50:1904
dw word_4a3e6; // 3a50:1906
dw word_4a3e8; // 3a50:1908
dw word_4a3ea; // 3a50:190a
dw word_4a3ec[13]; // 3a50:190c
dw dummyf_3be26[9]; // 3a50:190c
dw dummyf_3be38[10]; // 3a50:190c
dw dummyf_3be4c[10]; // 3a50:190c
dw dummyf_3be60[10]; // 3a50:190c
dw dummyf_3be74[9]; // 3a50:190c
dw dummyf_3be86[3]; // 3a50:190c
dd dword_4a46c; // 3a50:198c
dw word_4a470; // 3a50:1990
dw word_4a472; // 3a50:1992
dw word_4a474; // 3a50:1994
dw word_4a476; // 3a50:1996
dw word_4a478; // 3a50:1998
dw word_4a47a; // 3a50:199a
dw word_4a47c; // 3a50:199c
dw word_4a47e; // 3a50:199e
dw word_4a480; // 3a50:19a0
dw word_4a482; // 3a50:19a2
dw word_4a484; // 3a50:19a4
dw word_4a486; // 3a50:19a6
db byte_4a488[8]; // 3a50:19a8
dw word_4a490; // 3a50:19b0
dw word_4a492; // 3a50:19b2
dw word_4a494; // 3a50:19b4
dw word_4a496; // 3a50:19b6
dw word_4a498; // 3a50:19b8
dw word_4a49a; // 3a50:19ba
dw word_4a49c; // 3a50:19bc
dw word_4a49e; // 3a50:19be
dw word_4a4a0; // 3a50:19c0
dw word_4a4a2; // 3a50:19c2
dw word_4a4a4; // 3a50:19c4
dw word_4a4a6; // 3a50:19c6
dw word_4a4a8; // 3a50:19c8
dw word_4a4aa; // 3a50:19ca
dw word_4a4ac; // 3a50:19cc
dw word_4a4ae; // 3a50:19ce
dw word_4a4b0; // 3a50:19d0
dw word_4a4b2; // 3a50:19d2
dw word_4a4b4; // 3a50:19d4
dw word_4a4b6; // 3a50:19d6
dw word_4a4b8; // 3a50:19d8
dw word_4a4ba; // 3a50:19da
dw word_4a4bc; // 3a50:19dc
dw word_4a4be; // 3a50:19de
dw word_4a4c0; // 3a50:19e0
dw word_4a4c2; // 3a50:19e2
dw word_4a4c4; // 3a50:19e4
dw word_4a4c6; // 3a50:19e6
dw word_4a4c8; // 3a50:19e8
dw word_4a4ca; // 3a50:19ea
dw word_4a4cc; // 3a50:19ec
dw word_4a4ce; // 3a50:19ee
dw word_4a4d0; // 3a50:19f0
dw word_4a4d2; // 3a50:19f2
dw word_4a4d4; // 3a50:19f4
dw word_4a4d6; // 3a50:19f6
dw word_4a4d8; // 3a50:19f8
dw word_4a4da; // 3a50:19fa
dw word_4a4dc; // 3a50:19fc
dw word_4a4de; // 3a50:19fe
dw word_4a4e0[2]; // 3a50:1a00
db byte_4a4e4[2]; // 3a50:1a04
dw word_4a4e6; // 3a50:1a06
dw word_4a4e8; // 3a50:1a08
dw word_4a4ea; // 3a50:1a0a
dw word_4a4ec; // 3a50:1a0c
dw word_4a4ee[239]; // 3a50:1a0e
dw word_4a6cc; // 3a50:1bec
dw word_4a6ce; // 3a50:1bee
dw word_4a6d0; // 3a50:1bf0
dw word_4a6d2[239]; // 3a50:1bf2
dw word_4a8b0; // 3a50:1dd0
dw word_4a8b2; // 3a50:1dd2
dw word_4a8b4; // 3a50:1dd4
dw word_4a8b6[239]; // 3a50:1dd6
dw word_4aa94; // 3a50:1fb4
dw word_4aa96; // 3a50:1fb6
dw word_4aa98[240]; // 3a50:1fb8
dw word_4ac78[2]; // 3a50:2198
dw word_4ac7c[240]; // 3a50:219c
dw word_4ae5c[1894]; // 3a50:237c
dw _unk_4bd28[2115]; // 3a50:3248
dw word_4cdae; // 3a50:42ce
dw word_4cdb0; // 3a50:42d0
dw word_4cdb2; // 3a50:42d2
dw word_4cdb4; // 3a50:42d4
db byte_4cdb6[2]; // 3a50:42d6
db byte_4cdb8; // 3a50:42d8
dw word_4cdb9; // 3a50:42d9
dw word_4cdbb; // 3a50:42db
db dummyf_3e7dd[32]; // 3a50:42dd
db dummyf_3e7fd; // 3a50:42fd
db byte_4cdde[98]; // 3a50:42fe
dw word_4ce40; // 3a50:4360
dw word_4ce42; // 3a50:4362
dw word_4ce44; // 3a50:4364
db byte_4ce46; // 3a50:4366
db byte_4ce47; // 3a50:4367
db byte_4ce48; // 3a50:4368
dw word_4ce49; // 3a50:4369
dw word_4ce4b; // 3a50:436b
dw word_4ce4d; // 3a50:436d
dw word_4ce4f; // 3a50:436f
dw word_4ce51; // 3a50:4371
dw word_4ce53; // 3a50:4373
dw word_4ce55; // 3a50:4375
dw word_4ce57; // 3a50:4377
db dummyf_3e879;
db dummyf_3e87a;
db dummyf_3e87b;
db dummyf_3e87c;
db dummyf_3e87d;
db dummyf_3e87e;
db dummyf_3e87f;
db dummyf_3e880;
db byte_4ce61; // 3a50:4381
db byte_4ce62; // 3a50:4382
dw word_4ce63; // 3a50:4383
db dummyf_3e885[32]; // 3a50:4385
db dummyf_3e8a5[32]; // 3a50:43a5
db dummyf_3e8c5; // 3a50:43c5
db dummyf_3e8c6; // 3a50:43c6
db dummyf_3e8c7; // 3a50:43c7
db dummyf_3e8c8; // 3a50:43c8
db dummyf_3e8c9; // 3a50:43c9
db dummyf_3e8ca; // 3a50:43ca
db dummyf_3e8cb; // 3a50:43cb
db dummyf_3e8cc; // 3a50:43cc
db dummyf_3e8cd; // 3a50:43cd
db a000444888; // 3a50:43ce
db dummyf_3e8cf; // 3a50:43cf
db dummyf_3e8d0; // 3a50:43d0
db dummyf_3e8d1; // 3a50:43d1
db dummyf_3e8d2; // 3a50:43d2
db dummyf_3e8d3; // 3a50:43d3
db dummyf_3e8d4; // 3a50:43d4
db dummyf_3e8d5; // 3a50:43d5
db dummyf_3e8d6; // 3a50:43d6
db dummyf_3e8d7; // 3a50:43d7
db dummyf_3e8d8; // 3a50:43d8
db dummyf_3e8d9; // 3a50:43d9
db dummyf_3e8da; // 3a50:43da
db dummyf_3e8db; // 3a50:43db
db dummyf_3e8dc; // 3a50:43dc
db dummyf_3e8dd; // 3a50:43dd
db dummyf_3e8de; // 3a50:43de
db dummyf_3e8df; // 3a50:43df
db dummyf_3e8e0; // 3a50:43e0
db dummyf_3e8e1; // 3a50:43e1
db dummyf_3e8e2; // 3a50:43e2
db dummyf_3e8e3; // 3a50:43e3
db dummyf_3e8e4; // 3a50:43e4
db dummyf_3e8e5; // 3a50:43e5
db dummyf_3e8e6;
db dummyf_3e8e7; // 3a50:43e7
db dummyf_3e8e8;
db dummyf_3e8e9;
db a8; // 3a50:43ea
db dummyf_3e8eb[32]; // 3a50:43eb
db dummyf_3e90b; // 3a50:440b
db dummyf_3e90c;
db dummyf_3e90d; // 3a50:440d
db dummyf_3e90e; // 3a50:440e
db dummyf_3e90f;
db dummyf_3e910; // 3a50:4410
db dummyf_3e911; // 3a50:4411
db dummyf_3e912;
db dummyf_3e913; // 3a50:4413
db dummyf_3e914; // 3a50:4414
db dummyf_3e915;
db a75847351302807; // 3a50:4416
db dummyf_3e917[32]; // 3a50:4417
db dummyf_3e937[32]; // 3a50:4437
db dummyf_3e957[32]; // 3a50:4457
db dummyf_3e977[32]; // 3a50:4477
db dummyf_3e997[32]; // 3a50:4497
db dummyf_3e9b7; // 3a50:44b7
db dummyf_3e9b8; // 3a50:44b8
db dummyf_3e9b9; // 3a50:44b9
db dummyf_3e9ba; // 3a50:44ba
db dummyf_3e9bb; // 3a50:44bb
db dummyf_3e9bc; // 3a50:44bc
db dummyf_3e9bd; // 3a50:44bd
db dummyf_3e9be; // 3a50:44be
db dummyf_3e9bf; // 3a50:44bf
db dummyf_3e9c0; // 3a50:44c0
db dummyf_3e9c1; // 3a50:44c1
db dummyf_3e9c2; // 3a50:44c2
db dummyf_3e9c3; // 3a50:44c3
db dummyf_3e9c4; // 3a50:44c4
db dummyf_3e9c5; // 3a50:44c5
db dummyf_3e9c6; // 3a50:44c6
db dummyf_3e9c7; // 3a50:44c7
db dummyf_3e9c8; // 3a50:44c8
db dummyf_3e9c9; // 3a50:44c9
db dummyf_3e9ca; // 3a50:44ca
db dummyf_3e9cb; // 3a50:44cb
db dummyf_3e9cc; // 3a50:44cc
db dummyf_3e9cd; // 3a50:44cd
db dummyf_3e9ce; // 3a50:44ce
db dummyf_3e9cf; // 3a50:44cf
db dummyf_3e9d0; // 3a50:44d0
db dummyf_3e9d1; // 3a50:44d1
db dummyf_3e9d2; // 3a50:44d2
db dummyf_3e9d3;
db dummyf_3e9d4; // 3a50:44d4
db dummyf_3e9d5; // 3a50:44d5
db dummyf_3e9d6[11]; // 3a50:44d6
db dummyf_3e9e1[11]; // 3a50:44d6
db dummyf_3e9ec[11]; // 3a50:44d6
db dummyf_3e9f7[14]; // 3a50:44d6
db dummyf_3ea05;
db dummyf_3ea06[32]; // 3a50:4506
db dummyf_3ea26[32]; // 3a50:4526
db dummyf_3ea46[32]; // 3a50:4546
db dummyf_3ea66[32]; // 3a50:4566
db dummyf_3ea86[32]; // 3a50:4586
db dummyf_3eaa6[32]; // 3a50:45a6
db dummyf_3eac6[32]; // 3a50:45c6
db dummyf_3eae6[32]; // 3a50:45e6
db dummyf_3eb06[32]; // 3a50:4606
db dummyf_3eb26[32]; // 3a50:4626
db dummyf_3eb46[32]; // 3a50:4646
db dummyf_3eb66[32]; // 3a50:4666
db dummyf_3eb86[32]; // 3a50:4686
db dummyf_3eba6[32]; // 3a50:46a6
db dummyf_3ebc6[32]; // 3a50:46c6
db dummyf_3ebe6[32]; // 3a50:46e6
db dummyf_3ec06[32]; // 3a50:4706
db dummyf_3ec26[32]; // 3a50:4726
db dummyf_3ec46[32]; // 3a50:4746
db dummyf_3ec66[32]; // 3a50:4766
db dummyf_3ec86[32]; // 3a50:4786
db dummyf_3eca6[32]; // 3a50:47a6
db dummyf_3ecc6[32]; // 3a50:47c6
db dummyf_3ece6[32]; // 3a50:47e6
db dummyf_3ed06[32]; // 3a50:4806
db dummyf_3ed26[32]; // 3a50:4826
db dummyf_3ed46[32]; // 3a50:4846
db dummyf_3ed66[11]; // 3a50:4866
db dummyf_3ed71[11]; // 3a50:4866
db dummyf_3ed7c[11]; // 3a50:4866
db dummyf_3ed87[12]; // 3a50:4866
db dummyf_3ed93[4]; // 3a50:4866
db dummyf_3ed97[32]; // 3a50:4897
db dummyf_3edb7[32]; // 3a50:48b7
db dummyf_3edd7[32]; // 3a50:48d7
db dummyf_3edf7[32]; // 3a50:48f7
db dummyf_3ee17; // 3a50:4917
db dummyf_3ee18; // 3a50:4918
db dummyf_3ee19; // 3a50:4919
db dummyf_3ee1a; // 3a50:491a
db dummyf_3ee1b; // 3a50:491b
db dummyf_3ee1c; // 3a50:491c
db dummyf_3ee1d; // 3a50:491d
db dummyf_3ee1e; // 3a50:491e
db dummyf_3ee1f; // 3a50:491f
db dummyf_3ee20; // 3a50:4920
db dummyf_3ee21; // 3a50:4921
db dummyf_3ee22; // 3a50:4922
db dummyf_3ee23; // 3a50:4923
db dummyf_3ee24; // 3a50:4924
db dummyf_3ee25; // 3a50:4925
db dummyf_3ee26; // 3a50:4926
db dummyf_3ee27; // 3a50:4927
db dummyf_3ee28; // 3a50:4928
db dummyf_3ee29; // 3a50:4929
db dummyf_3ee2a[11]; // 3a50:492a
db dummyf_3ee35[11]; // 3a50:492a
db dummyf_3ee40[10]; // 3a50:492a
db dummyf_3ee4a[10]; // 3a50:492a
db dummyf_3ee54[10]; // 3a50:492a
db dummyf_3ee5e[10]; // 3a50:492a
db dummyf_3ee68[11]; // 3a50:492a
db dummyf_3ee73[10]; // 3a50:492a
db dummyf_3ee7d[10]; // 3a50:492a
db dummyf_3ee87[10]; // 3a50:492a
db dummyf_3ee91[11]; // 3a50:492a
db dummyf_3ee9c[10]; // 3a50:492a
db dummyf_3eea6[10]; // 3a50:492a
db dummyf_3eeb0[10]; // 3a50:492a
db dummyf_3eeba[10]; // 3a50:492a
db dummyf_3eec4[10]; // 3a50:492a
db dummyf_3eece[10]; // 3a50:492a
db dummyf_3eed8[10]; // 3a50:492a
db dummyf_3eee2[11]; // 3a50:492a
db dummyf_3eeed[10]; // 3a50:492a
db dummyf_3eef7[11]; // 3a50:492a
db dummyf_3ef02[10]; // 3a50:492a
db dummyf_3ef0c[11]; // 3a50:492a
db dummyf_3ef17[11]; // 3a50:492a
db dummyf_3ef22[10]; // 3a50:492a
db dummyf_3ef2c[11]; // 3a50:492a
db dummyf_3ef37[10]; // 3a50:492a
db dummyf_3ef41[11]; // 3a50:492a
db dummyf_3ef4c[10]; // 3a50:492a
db dummyf_3ef56[10]; // 3a50:492a
db dummyf_3ef60[10]; // 3a50:492a
db dummyf_3ef6a[10]; // 3a50:492a
db dummyf_3ef74[10]; // 3a50:492a
db dummyf_3ef7e[10]; // 3a50:492a
db dummyf_3ef88[10]; // 3a50:492a
db dummyf_3ef92[13]; // 3a50:492a
db dummyf_3ef9f[10]; // 3a50:492a
db dummyf_3efa9[11]; // 3a50:492a
db dummyf_3efb4[10]; // 3a50:492a
db dummyf_3efbe[11]; // 3a50:492a
db dummyf_3efc9[10]; // 3a50:492a
db dummyf_3efd3[10]; // 3a50:492a
db dummyf_3efdd[10]; // 3a50:492a
db dummyf_3efe7[10]; // 3a50:492a
db dummyf_3eff1[11]; // 3a50:492a
db dummyf_3effc[11]; // 3a50:492a
db dummyf_3f007[11]; // 3a50:492a
db dummyf_3f012[10]; // 3a50:492a
db dummyf_3f01c[10]; // 3a50:492a
db dummyf_3f026[9]; // 3a50:492a
db dummyf_3f02f[32]; // 3a50:4b2f
db dummyf_3f04f[32]; // 3a50:4b4f
db dummyf_3f06f[32]; // 3a50:4b6f
db dummyf_3f08f[32]; // 3a50:4b8f
db dummyf_3f0af[32]; // 3a50:4baf
db dummyf_3f0cf[32]; // 3a50:4bcf
db dummyf_3f0ef[32]; // 3a50:4bef
db dummyf_3f10f[32]; // 3a50:4c0f
db dummyf_3f12f[32]; // 3a50:4c2f
db dummyf_3f14f[32]; // 3a50:4c4f
db dummyf_3f16f[32]; // 3a50:4c6f
db dummyf_3f18f; // 3a50:4c8f
db dummyf_3f190; // 3a50:4c90
db dummyf_3f191; // 3a50:4c91
db dummyf_3f192; // 3a50:4c92
db dummyf_3f193; // 3a50:4c93
db dummyf_3f194; // 3a50:4c94
db dummyf_3f195; // 3a50:4c95
db dummyf_3f196; // 3a50:4c96
db dummyf_3f197; // 3a50:4c97
db dummyf_3f198;
db dummyf_3f199;
db dummyf_3f19a;
db dummyf_3f19b;
db dummyf_3f19c;
db dummyf_3f19d;
db byte_4d77e; // 3a50:4c9e
dw word_4d77f; // 3a50:4c9f
dw word_4d781; // 3a50:4ca1
dw word_4d783; // 3a50:4ca3
dw word_4d785; // 3a50:4ca5
dw word_4d787; // 3a50:4ca7
dw word_4d789; // 3a50:4ca9
db dummyf_3f1ab;
db dummyf_3f1ac;
dw word_4d78d; // 3a50:4cad
dw word_4d78f; // 3a50:4caf
dw word_4d791; // 3a50:4cb1
dw word_4d793; // 3a50:4cb3
db byte_4d795; // 3a50:4cb5
db dummyf_3f1b6[32]; // 3a50:4cb6
db dummyf_3f1d6[32]; // 3a50:4cd6
db dummyf_3f1f6[32]; // 3a50:4cf6
db dummyf_3f216[32]; // 3a50:4d16
db dummyf_3f236[32]; // 3a50:4d36
db dummyf_3f256[32]; // 3a50:4d56
db dummyf_3f276[32]; // 3a50:4d76
db dummyf_3f296[32]; // 3a50:4d96
db dummyf_3f2b6[32]; // 3a50:4db6
db dummyf_3f2d6[32]; // 3a50:4dd6
db dummyf_3f2f6[32]; // 3a50:4df6
db dummyf_3f316[32]; // 3a50:4e16
db dummyf_3f336[32]; // 3a50:4e36
db dummyf_3f356; // 3a50:4e56
db dummyf_3f357; // 3a50:4e57
db dummyf_3f358; // 3a50:4e58
db dummyf_3f359; // 3a50:4e59
db dummyf_3f35a; // 3a50:4e5a
db dummyf_3f35b; // 3a50:4e5b
db dummyf_3f35c; // 3a50:4e5c
db dummyf_3f35d; // 3a50:4e5d
db dummyf_3f35e; // 3a50:4e5e
db dummyf_3f35f; // 3a50:4e5f
db dummyf_3f360; // 3a50:4e60
db dummyf_3f361; // 3a50:4e61
db dummyf_3f362; // 3a50:4e62
db dummyf_3f363; // 3a50:4e63
db dummyf_3f364; // 3a50:4e64
db dummyf_3f365; // 3a50:4e65
db dummyf_3f366; // 3a50:4e66
db dummyf_3f367; // 3a50:4e67
db dummyf_3f368; // 3a50:4e68
db dummyf_3f369; // 3a50:4e69
db dummyf_3f36a; // 3a50:4e6a
db dummyf_3f36b; // 3a50:4e6b
db dummyf_3f36c; // 3a50:4e6c
db byte_4d94d; // 3a50:4e6d
db dummyf_3f36e;
db dummyf_3f36f[1];
db dummyf_3f370;
db dummyf_3f371[1];
db dummyf_3f372;
db dummyf_3f373[1];
db dummyf_3f374;
db dummyf_3f375[1];
db dummyf_3f376;
db dummyf_3f377[1];
db dummyf_3f378;
db dummyf_3f379[1];
db dummyf_3f37a;
db dummyf_3f37b[1];
db dummyf_3f37c;
db dummyf_3f37d[1];
db dummyf_3f37e;
db dummyf_3f37f[1];
db dummyf_3f380;
db dummyf_3f381[1];
db dummyf_3f382;
db dummyf_3f383[1];
db dummyf_3f384;
db dummyf_3f385[1];
db dummyf_3f386;
db dummyf_3f387[1];
db dummyf_3f388;
db dummyf_3f389[1];
db dummyf_3f38a;
db dummyf_3f38b[1];
db dummyf_3f38c;
db dummyf_3f38d[1];
db dummyf_3f38e;
db dummyf_3f38f[1];
db dummyf_3f390;
db dummyf_3f391[1];
db dummyf_3f392;
db dummyf_3f393[1];
db dummyf_3f394;
db dummyf_3f395[1];
db dummyf_3f396;
db dummyf_3f397[1];
db dummyf_3f398;
db dummyf_3f399[1];
db dummyf_3f39a;
db dummyf_3f39b[1];
db dummyf_3f39c;
db dummyf_3f39d[1];
db dummyf_3f39e;
db dummyf_3f39f[1];
db dummyf_3f3a0;
db dummyf_3f3a1[1];
db dummyf_3f3a2;
db dummyf_3f3a3[1];
db dummyf_3f3a4;
db dummyf_3f3a5[1];
db dummyf_3f3a6;
db dummyf_3f3a7[1];
db dummyf_3f3a8;
db dummyf_3f3a9[1];
db dummyf_3f3aa;
db dummyf_3f3ab[1];
db dummyf_3f3ac;
db dummyf_3f3ad[1];
db dummyf_3f3ae;
db dummyf_3f3af[1];
db dummyf_3f3b0;
db dummyf_3f3b1[1];
db dummyf_3f3b2;
db dummyf_3f3b3[1];
db dummyf_3f3b4;
db dummyf_3f3b5[1];
db dummyf_3f3b6;
db dummyf_3f3b7[1];
db dummyf_3f3b8;
db dummyf_3f3b9[1];
db dummyf_3f3ba;
db dummyf_3f3bb[1];
db dummyf_3f3bc;
db dummyf_3f3bd[1];
db dummyf_3f3be;
db dummyf_3f3bf[1];
db dummyf_3f3c0;
db dummyf_3f3c1[1];
db dummyf_3f3c2;
db dummyf_3f3c3[1];
db dummyf_3f3c4;
db dummyf_3f3c5[1];
db dummyf_3f3c6;
db dummyf_3f3c7[1];
db dummyf_3f3c8;
db dummyf_3f3c9[1];
db dummyf_3f3ca;
db dummyf_3f3cb[1];
db dummyf_3f3cc;
db dummyf_3f3cd[1];
db dummyf_3f3ce;
db dummyf_3f3cf[1];
db dummyf_3f3d0;
db dummyf_3f3d1[1];
db dummyf_3f3d2;
db dummyf_3f3d3[1];
db dummyf_3f3d4;
db dummyf_3f3d5[1];
db dummyf_3f3d6;
db dummyf_3f3d7[1];
db dummyf_3f3d8;
db dummyf_3f3d9[1];
db dummyf_3f3da;
db dummyf_3f3db[1];
db dummyf_3f3dc;
db dummyf_3f3dd[1];
db dummyf_3f3de;
db dummyf_3f3df[1];
db dummyf_3f3e0;
db dummyf_3f3e1[1];
db dummyf_3f3e2;
db dummyf_3f3e3[1];
db dummyf_3f3e4;
db dummyf_3f3e5[1];
db dummyf_3f3e6;
db dummyf_3f3e7[1];
db dummyf_3f3e8;
db dummyf_3f3e9[1];
db dummyf_3f3ea;
db dummyf_3f3eb[1];
db dummyf_3f3ec;
db dummyf_3f3ed[1];
db dummyf_3f3ee;
db dummyf_3f3ef[1];
db dummyf_3f3f0;
db dummyf_3f3f1[1];
db dummyf_3f3f2;
db dummyf_3f3f3[1];
db dummyf_3f3f4;
db dummyf_3f3f5[1];
db dummyf_3f3f6;
db dummyf_3f3f7[1];
db dummyf_3f3f8;
db dummyf_3f3f9[1];
db dummyf_3f3fa;
db dummyf_3f3fb[1];
db dummyf_3f3fc;
db dummyf_3f3fd[1];
db dummyf_3f3fe;
db dummyf_3f3ff[1];
db dummyf_3f400;
db dummyf_3f401[1];
db dummyf_3f402;
db dummyf_3f403[1];
db dummyf_3f404;
db dummyf_3f405[1];
db dummyf_3f406;
db dummyf_3f407[1];
db dummyf_3f408;
db dummyf_3f409[1];
db dummyf_3f40a;
db dummyf_3f40b[1];
db dummyf_3f40c;
db dummyf_3f40d[1];
db dummyf_3f40e;
db dummyf_3f40f[1];
db dummyf_3f410;
db dummyf_3f411[1];
db dummyf_3f412;
db dummyf_3f413[1];
db dummyf_3f414;
db dummyf_3f415[1];
db dummyf_3f416;
db dummyf_3f417[1];
db dummyf_3f418;
db dummyf_3f419[1];
db dummyf_3f41a;
db dummyf_3f41b[1];
db dummyf_3f41c;
db dummyf_3f41d[1];
db dummyf_3f41e;
db dummyf_3f41f[1];
db dummyf_3f420;
db dummyf_3f421[1];
db dummyf_3f422;
db dummyf_3f423[1];
db dummyf_3f424;
db dummyf_3f425[1];
db dummyf_3f426;
db dummyf_3f427[1];
db dummyf_3f428;
db dummyf_3f429[1];
db dummyf_3f42a;
db dummyf_3f42b[1];
db dummyf_3f42c;
db dummyf_3f42d[1];
db dummyf_3f42e;
db dummyf_3f42f[1];
db dummyf_3f430;
db dummyf_3f431[1];
db dummyf_3f432;
db dummyf_3f433[1];
db dummyf_3f434;
db dummyf_3f435[1];
db dummyf_3f436;
db dummyf_3f437[1];
db dummyf_3f438;
db dummyf_3f439[1];
db dummyf_3f43a;
db dummyf_3f43b[1];
db dummyf_3f43c;
db dummyf_3f43d[1];
db dummyf_3f43e;
db dummyf_3f43f[1];
db dummyf_3f440;
db dummyf_3f441[1];
db dummyf_3f442;
db dummyf_3f443[1];
db dummyf_3f444;
db dummyf_3f445[1];
db dummyf_3f446;
db dummyf_3f447[1];
db dummyf_3f448;
db dummyf_3f449[1];
db dummyf_3f44a;
db dummyf_3f44b[1];
db dummyf_3f44c;
db dummyf_3f44d[1];
db dummyf_3f44e;
db dummyf_3f44f[1];
db dummyf_3f450;
db dummyf_3f451[1];
db dummyf_3f452;
db dummyf_3f453[1];
db dummyf_3f454;
db dummyf_3f455[1];
db dummyf_3f456;
db dummyf_3f457[1];
db dummyf_3f458;
db dummyf_3f459[1];
db dummyf_3f45a;
db dummyf_3f45b[1];
db dummyf_3f45c;
db dummyf_3f45d[1];
db dummyf_3f45e;
db dummyf_3f45f[1];
db dummyf_3f460;
db dummyf_3f461[1];
db dummyf_3f462;
db dummyf_3f463[1];
db dummyf_3f464;
db dummyf_3f465[1];
db dummyf_3f466;
db dummyf_3f467[1];
db dummyf_3f468;
db dummyf_3f469[1];
db dummyf_3f46a;
db dummyf_3f46b[1];
db dummyf_3f46c;
db dummyf_3f46d[1];
db dummyf_3f46e;
db dummyf_3f46f[1];
db dummyf_3f470;
db dummyf_3f471[1];
db dummyf_3f472;
db dummyf_3f473[1];
db dummyf_3f474;
db dummyf_3f475[1];
db dummyf_3f476;
db dummyf_3f477[1];
db dummyf_3f478;
db dummyf_3f479[1];
db dummyf_3f47a;
db dummyf_3f47b[1];
db dummyf_3f47c;
db dummyf_3f47d[1];
db dummyf_3f47e;
db dummyf_3f47f[1];
db dummyf_3f480;
db dummyf_3f481[1];
db dummyf_3f482;
db dummyf_3f483[1];
db dummyf_3f484;
db dummyf_3f485[1];
db dummyf_3f486;
db dummyf_3f487[1];
db dummyf_3f488;
db dummyf_3f489[1];
db dummyf_3f48a;
db dummyf_3f48b[1];
db dummyf_3f48c;
db dummyf_3f48d[1];
db dummyf_3f48e;
db dummyf_3f48f[1];
db dummyf_3f490;
db dummyf_3f491[1];
db dummyf_3f492;
db dummyf_3f493[1];
db dummyf_3f494;
db dummyf_3f495[1];
db dummyf_3f496;
db dummyf_3f497[1];
db dummyf_3f498;
db dummyf_3f499[1];
db dummyf_3f49a;
db dummyf_3f49b[1];
db dummyf_3f49c;
db dummyf_3f49d[1];
db dummyf_3f49e;
db dummyf_3f49f[1];
db dummyf_3f4a0;
db dummyf_3f4a1[1];
db dummyf_3f4a2;
db dummyf_3f4a3[1];
db dummyf_3f4a4;
db dummyf_3f4a5[1];
db dummyf_3f4a6;
db dummyf_3f4a7[1];
db dummyf_3f4a8;
db dummyf_3f4a9[1];
db dummyf_3f4aa;
db dummyf_3f4ab[1];
db dummyf_3f4ac;
db dummyf_3f4ad[1];
db dummyf_3f4ae;
db dummyf_3f4af[1];
db dummyf_3f4b0;
db dummyf_3f4b1[1];
db dummyf_3f4b2;
db dummyf_3f4b3[1];
db dummyf_3f4b4;
db dummyf_3f4b5[1];
db dummyf_3f4b6;
db dummyf_3f4b7[1];
db dummyf_3f4b8;
db dummyf_3f4b9[1];
db dummyf_3f4ba;
db dummyf_3f4bb[1];
db dummyf_3f4bc;
db dummyf_3f4bd[1];
db dummyf_3f4be;
db dummyf_3f4bf[1];
db dummyf_3f4c0;
db dummyf_3f4c1[1];
db dummyf_3f4c2;
db dummyf_3f4c3[1];
db dummyf_3f4c4;
db dummyf_3f4c5[1];
db dummyf_3f4c6;
db dummyf_3f4c7[1];
db dummyf_3f4c8;
db dummyf_3f4c9[1];
db dummyf_3f4ca;
db dummyf_3f4cb[1];
db dummyf_3f4cc;
db dummyf_3f4cd[1];
db dummyf_3f4ce;
db dummyf_3f4cf[1];
db dummyf_3f4d0;
db dummyf_3f4d1[1];
db dummyf_3f4d2;
db dummyf_3f4d3[1];
db dummyf_3f4d4;
db dummyf_3f4d5[1];
db dummyf_3f4d6;
db dummyf_3f4d7[1];
db dummyf_3f4d8;
db dummyf_3f4d9[1];
db dummyf_3f4da;
db dummyf_3f4db[1];
db dummyf_3f4dc;
db dummyf_3f4dd[1];
db dummyf_3f4de;
db dummyf_3f4df[1];
db dummyf_3f4e0;
db dummyf_3f4e1[1];
db dummyf_3f4e2;
db dummyf_3f4e3[1];
db dummyf_3f4e4;
db dummyf_3f4e5[1];
db dummyf_3f4e6;
db dummyf_3f4e7[1];
db dummyf_3f4e8;
db dummyf_3f4e9[1];
db dummyf_3f4ea;
db dummyf_3f4eb[1];
db dummyf_3f4ec;
db dummyf_3f4ed[1];
db dummyf_3f4ee;
db dummyf_3f4ef[1];
db dummyf_3f4f0;
db dummyf_3f4f1[1];
db dummyf_3f4f2;
db dummyf_3f4f3[1];
db dummyf_3f4f4;
db dummyf_3f4f5[1];
db dummyf_3f4f6;
db dummyf_3f4f7[1];
db dummyf_3f4f8;
db dummyf_3f4f9[1];
db dummyf_3f4fa;
db dummyf_3f4fb[1];
db dummyf_3f4fc[32]; // 3a50:4ffc
db dummyf_3f51c;
db dummyf_3f51d;
db dummyf_3f51e;
db dummyf_3f51f;
db dummyf_3f520;
db dummyf_3f521;
db dummyf_3f522;
db dummyf_3f523;
db dummyf_3f524;
dw word_4db05; // 3a50:5025
dw word_4db07; // 3a50:5027
dw word_4db09; // 3a50:5029
dw word_4db0b; // 3a50:502b
db dummyf_3f52d;
db byte_4db0e; // 3a50:502e
dw word_4db0f; // 3a50:502f
dw word_4db11; // 3a50:5031
dw word_4db13; // 3a50:5033
dw word_4db15; // 3a50:5035
db dummyf_3f537;
db byte_4db18; // 3a50:5038
dw word_4db19; // 3a50:5039
dw word_4db1b; // 3a50:503b
db dummyf_3f53d;
db byte_4db1e; // 3a50:503e
db byte_4db1f; // 3a50:503f
dw word_4db20; // 3a50:5040
dw word_4db22; // 3a50:5042
dw word_4db24; // 3a50:5044
dw word_4db26; // 3a50:5046
dw word_4db28; // 3a50:5048
dw word_4db2a; // 3a50:504a
db byte_4db2c; // 3a50:504c
dw word_4db2d; // 3a50:504d
dw word_4db2f; // 3a50:504f
dw word_4db31; // 3a50:5051
db byte_4db33; // 3a50:5053
dw word_4db34; // 3a50:5054
dw word_4db36[2]; // 3a50:5056
dw word_4db3a; // 3a50:505a
db byte_4db3c[26]; // 3a50:505c
db dummyf_3f576[24]; // 3a50:505c
db dummyf_3f58e[11]; // 3a50:505c
db dummyf_3f599[9]; // 3a50:505c
db dummyf_3f5a2[9]; // 3a50:505c
db dummyf_3f5ab[9]; // 3a50:505c
db dummyf_3f5b4[9]; // 3a50:505c
db dummyf_3f5bd[9]; // 3a50:505c
db dummyf_3f5c6[9]; // 3a50:505c
db dummyf_3f5cf[9]; // 3a50:505c
db dummyf_3f5d8[20]; // 3a50:505c
db dummyf_3f5ec[14]; // 3a50:505c
db dummyf_3f5fa[9]; // 3a50:505c
db dummyf_3f603[9]; // 3a50:505c
db dummyf_3f60c[9]; // 3a50:505c
db dummyf_3f615[9]; // 3a50:505c
db dummyf_3f61e[9]; // 3a50:505c
db dummyf_3f627[9]; // 3a50:505c
db dummyf_3f630[16]; // 3a50:505c
db dummyf_3f640[18]; // 3a50:505c
db dummyf_3f652[18]; // 3a50:505c
db dummyf_3f664[38]; // 3a50:505c
db dummyf_3f68a[9]; // 3a50:505c
db dummyf_3f693[9]; // 3a50:505c
db dummyf_3f69c[9]; // 3a50:505c
db dummyf_3f6a5[9]; // 3a50:505c
db dummyf_3f6ae[9]; // 3a50:505c
db dummyf_3f6b7[9]; // 3a50:505c
db dummyf_3f6c0[9]; // 3a50:505c
db dummyf_3f6c9[9]; // 3a50:505c
db dummyf_3f6d2[9]; // 3a50:505c
db dummyf_3f6db[13]; // 3a50:505c
db dummyf_3f6e8[21]; // 3a50:505c
db dummyf_3f6fd[9]; // 3a50:505c
db dummyf_3f706[9]; // 3a50:505c
db dummyf_3f70f[9]; // 3a50:505c
db dummyf_3f718[9]; // 3a50:505c
db dummyf_3f721[9]; // 3a50:505c
db dummyf_3f72a[9]; // 3a50:505c
db dummyf_3f733[19]; // 3a50:505c
db dummyf_3f746[18]; // 3a50:505c
db dummyf_3f758[18]; // 3a50:505c
db dummyf_3f76a[12]; // 3a50:505c
dw word_4dd56; // 3a50:5276
db dummyf_3f778[6]; // 3a50:5278
dw word_4dd5e; // 3a50:527e
db byte_4dd60[2]; // 3a50:5280
dw word_4dd62; // 3a50:5282
dw word_4dd64; // 3a50:5284
dw word_4dd66[2]; // 3a50:5286
db dummyf_3f78a; // 3a50:528a
db dummyf_3f78b; // 3a50:528b
dw word_4dd6c; // 3a50:528c
db dummyf_3f78e[6]; // 3a50:528e
dw word_4dd74; // 3a50:5294
dw word_4dd76; // 3a50:5296
dw word_4dd78[2]; // 3a50:5298
db dummyf_3f79c; // 3a50:529c
db dummyf_3f79d;
dw word_4dd7e; // 3a50:529e
dw word_4dd80; // 3a50:52a0
dw word_4dd82; // 3a50:52a2
db dummyf_3f7a4; // 3a50:52a4
db dummyf_3f7a5;
db dummyf_3f7a6; // 3a50:52a6
db dummyf_3f7a7;
db dummyf_3f7a8;
db dummyf_3f7a9;
dw word_4dd8a; // 3a50:52aa
dw word_4dd8c; // 3a50:52ac
dw word_4dd8e; // 3a50:52ae
dw word_4dd90[2]; // 3a50:52b0
dw word_4dd94; // 3a50:52b4
dw word_4dd96; // 3a50:52b6
dw word_4dd98; // 3a50:52b8
db dummyf_3f7ba[6]; // 3a50:52ba
dw word_4dda0; // 3a50:52c0
dw word_4dda2; // 3a50:52c2
dw word_4dda4; // 3a50:52c4
db dummyf_3f7c6; // 3a50:52c6
db dummyf_3f7c7;
db dummyf_3f7c8; // 3a50:52c8
db dummyf_3f7c9;
db dummyf_3f7ca; // 3a50:52ca
db dummyf_3f7cb;
db dummyf_3f7cc; // 3a50:52cc
db dummyf_3f7cd; // 3a50:52cd
dw word_4ddae[2]; // 3a50:52ce
dw word_4ddb2; // 3a50:52d2
dw word_4ddb4; // 3a50:52d4
dw word_4ddb6; // 3a50:52d6
dw word_4ddb8; // 3a50:52d8
db byte_4ddba[2]; // 3a50:52da
dw word_4ddbc[2]; // 3a50:52dc
db dummyf_3f7e0; // 3a50:52e0
db dummyf_3f7e1;
db dummyf_3f7e2;
db dummyf_3f7e3;
db dummyf_3f7e4; // 3a50:52e4
db dummyf_3f7e5; // 3a50:52e5
db dummyf_3f7e6; // 3a50:52e6
db dummyf_3f7e7; // 3a50:52e7
db dummyf_3f7e8; // 3a50:52e8
db dummyf_3f7e9;
db dummyf_3f7ea; // 3a50:52ea
db dummyf_3f7eb;
dw word_4ddcc; // 3a50:52ec
dw word_4ddce; // 3a50:52ee
dw word_4ddd0; // 3a50:52f0
dw word_4ddd2; // 3a50:52f2
dw word_4ddd4; // 3a50:52f4
dw word_4ddd6; // 3a50:52f6
dw word_4ddd8; // 3a50:52f8
dw word_4ddda[2]; // 3a50:52fa
db dummyf_3f7fe; // 3a50:52fe
db dummyf_3f7ff;
db dummyf_3f800;
db dummyf_3f801;
db dummyf_3f802; // 3a50:5302
db dummyf_3f803; // 3a50:5303
db dummyf_3f804; // 3a50:5304
db dummyf_3f805; // 3a50:5305
db dummyf_3f806; // 3a50:5306
db dummyf_3f807;
db dummyf_3f808; // 3a50:5308
db dummyf_3f809;
dw word_4ddea; // 3a50:530a
db dummyf_3f80c; // 3a50:530c
db dummyf_3f80d;
db dummyf_3f80e; // 3a50:530e
db dummyf_3f80f;
dw word_4ddf0; // 3a50:5310
db dummyf_3f812; // 3a50:5312
db dummyf_3f813;
db dummyf_3f814; // 3a50:5314
db dummyf_3f815;
db dummyf_3f816; // 3a50:5316
db dummyf_3f817;
db dummyf_3f818; // 3a50:5318
db dummyf_3f819;
db dummyf_3f81a;
db dummyf_3f81b;
db dummyf_3f81c; // 3a50:531c
db dummyf_3f81d;
db dummyf_3f81e;
db dummyf_3f81f;
db dummyf_3f820; // 3a50:5320
db dummyf_3f821; // 3a50:5321
db dummyf_3f822; // 3a50:5322
db dummyf_3f823; // 3a50:5323
db dummyf_3f824; // 3a50:5324
db dummyf_3f825;
db dummyf_3f826; // 3a50:5326
db dummyf_3f827;
dw word_4de08; // 3a50:5328
db dummyf_3f82a; // 3a50:532a
db dummyf_3f82b;
db dummyf_3f82c; // 3a50:532c
db dummyf_3f82d;
dw word_4de0e; // 3a50:532e
db dummyf_3f830; // 3a50:5330
db dummyf_3f831;
db dummyf_3f832; // 3a50:5332
db dummyf_3f833;
db dummyf_3f834; // 3a50:5334
db dummyf_3f835;
db dummyf_3f836; // 3a50:5336
db dummyf_3f837;
db dummyf_3f838;
db dummyf_3f839;
db dummyf_3f83a; // 3a50:533a
db dummyf_3f83b;
db dummyf_3f83c;
db dummyf_3f83d;
db dummyf_3f83e; // 3a50:533e
db dummyf_3f83f; // 3a50:533f
db dummyf_3f840; // 3a50:5340
db dummyf_3f841; // 3a50:5341
db dummyf_3f842; // 3a50:5342
db dummyf_3f843;
db dummyf_3f844; // 3a50:5344
db dummyf_3f845;
db byte_4de26; // 3a50:5346
db byte_4de27[2]; // 3a50:5347
db byte_4de29; // 3a50:5349
db byte_4de2a[2]; // 3a50:534a
db byte_4de2c; // 3a50:534c
dw word_4de2d; // 3a50:534d
dw word_4de2f; // 3a50:534f
db byte_4de31[2]; // 3a50:5351
dw word_4de33; // 3a50:5353
db byte_4de35[2]; // 3a50:5355
dw word_4de37; // 3a50:5357
dw word_4de39; // 3a50:5359
dw word_4de3b; // 3a50:535b
dw word_4de3d; // 3a50:535d
dw word_4de3f; // 3a50:535f
db byte_4de41[2]; // 3a50:5361
db byte_4de43; // 3a50:5363
dw word_4de44; // 3a50:5364
dw word_4de46; // 3a50:5366
dw word_4de48; // 3a50:5368
dw word_4de4a; // 3a50:536a
dw word_4de4c; // 3a50:536c
dw word_4de4e; // 3a50:536e
dw word_4de50; // 3a50:5370
dw word_4de52; // 3a50:5372
db byte_4de54; // 3a50:5374
dw word_4de55; // 3a50:5375
dw word_4de57; // 3a50:5377
dw word_4de59; // 3a50:5379
db byte_4de5b[2]; // 3a50:537b
db byte_4de5d; // 3a50:537d
db byte_4de5e; // 3a50:537e
db byte_4de5f; // 3a50:537f
dw word_4de60; // 3a50:5380
dw word_4de62; // 3a50:5382
db dummyf_3f884;
db byte_4de65; // 3a50:5385
dw word_4de66; // 3a50:5386
db dummyf_3f888[2]; // 3a50:5388
db byte_4de6a[8]; // 3a50:538a
char a00112233445566[65]; // 3a50:5392
char dummyf_3f8d3[65]; // 3a50:5392
char dummyf_3f914[65]; // 3a50:5392
char dummyf_3f955[65]; // 3a50:5392
char dummyf_3f996[44]; // 3a50:5392
db dummyf_3f9c2; // 3a50:54c2
db dummyf_3f9c3; // 3a50:54c3
db dummyf_3f9c4; // 3a50:54c4
db dummyf_3f9c5;
char a045[4]; // 3a50:54c6
db dummyf_3f9ca; // 3a50:54ca
db dummyf_3f9cb; // 3a50:54cb
db dummyf_3f9cc; // 3a50:54cc
db dummyf_3f9cd;
char a090[4]; // 3a50:54ce
char dummyf_3f9d2[4]; // 3a50:54d2
char a135[4]; // 3a50:54d6
db dummyf_3f9da; // 3a50:54da
db dummyf_3f9db; // 3a50:54db
db dummyf_3f9dc; // 3a50:54dc
db dummyf_3f9dd;
char a180[4]; // 3a50:54de
db dummyf_3f9e2; // 3a50:54e2
db dummyf_3f9e3; // 3a50:54e3
db dummyf_3f9e4; // 3a50:54e4
db dummyf_3f9e5;
char a225[4]; // 3a50:54e6
db dummyf_3f9ea; // 3a50:54ea
db dummyf_3f9eb; // 3a50:54eb
db dummyf_3f9ec; // 3a50:54ec
db dummyf_3f9ed;
char a270[4]; // 3a50:54ee
char dummyf_3f9f2[4]; // 3a50:54f2
char a315[4]; // 3a50:54f6
db dummyf_3f9fa; // 3a50:54fa
db dummyf_3f9fb; // 3a50:54fb
db dummyf_3f9fc; // 3a50:54fc
db dummyf_3f9fd;
db dummyf_3f9fe[2]; // 3a50:54fe
db dummyf_3fa00[14]; // 3a50:5500
db dummyf_3fa0e[14]; // 3a50:5500
db dummyf_3fa1c[290]; // 3a50:5500
db byte_4e11e; // 3a50:563e
db byte_4e11f; // 3a50:563f
dw word_4e120; // 3a50:5640
dw word_4e122; // 3a50:5642
char a70[4]; // 3a50:5644
char a80[4]; // 3a50:5648
char a90[4]; // 3a50:564c
char a80_0[4]; // 3a50:5650
char a70_0[4]; // 3a50:5654
char a60[4]; // 3a50:5658
char a50[4]; // 3a50:565c
char a40[4]; // 3a50:5660
char a30[4]; // 3a50:5664
char a20[4]; // 3a50:5668
char a10[4]; // 3a50:566c
char a00[3]; // 3a50:5670
db dummyf_3fb73;
char a10_0[3]; // 3a50:5674
db dummyf_3fb77;
char a20_0[3]; // 3a50:5678
db dummyf_3fb7b;
char a30_0[3]; // 3a50:567c
db dummyf_3fb7f;
char a40_0[3]; // 3a50:5680
db dummyf_3fb83;
char a50_0[3]; // 3a50:5684
db dummyf_3fb87;
char a60_0[3]; // 3a50:5688
db dummyf_3fb8b;
char a70_1[3]; // 3a50:568c
db dummyf_3fb8f;
char a80_1[3]; // 3a50:5690
db dummyf_3fb93;
char a90_0[3]; // 3a50:5694
db dummyf_3fb97;
char a80_2[3]; // 3a50:5698
db dummyf_3fb9b;
char a70_2[3]; // 3a50:569c
db dummyf_3fb9f;
dw word_4e180; // 3a50:56a0
dw word_4e182; // 3a50:56a2
dw word_4e184; // 3a50:56a4
dw word_4e186; // 3a50:56a6
dw word_4e188; // 3a50:56a8
dw word_4e18a; // 3a50:56aa
dw word_4e18c; // 3a50:56ac
dw word_4e18e; // 3a50:56ae
dw word_4e190; // 3a50:56b0
dw word_4e192; // 3a50:56b2
db dummyf_3fbb4[32]; // 3a50:56b4
db dummyf_3fbd4;
db dummyf_3fbd5;
db dummyf_3fbd6;
db dummyf_3fbd7;
db dummyf_3fbd8;
db dummyf_3fbd9;
db dummyf_3fbda;
db dummyf_3fbdb;
dw word_4e1bc; // 3a50:56dc
dw word_4e1be; // 3a50:56de
db dummyf_3fbe0;
db dummyf_3fbe1;
db dummyf_3fbe2;
db dummyf_3fbe3;
dw word_4e1c4; // 3a50:56e4
db dummyf_3fbe6;
db dummyf_3fbe7;
db byte_4e1c8; // 3a50:56e8
db byte_4e1c9; // 3a50:56e9
db byte_4e1ca; // 3a50:56ea
dw word_4e1cb; // 3a50:56eb
db byte_4e1cd; // 3a50:56ed
db byte_4e1ce; // 3a50:56ee
db byte_4e1cf[39]; // 3a50:56ef
db dummyf_3fc16[4]; // 3a50:56ef
char alandinggearrai[20]; // 3a50:571a
char abrakeson[10]; // 3a50:572e
char dummyf_3fc38[2]; // 3a50:5738
char ag[2]; // 3a50:573a
db dummyf_3fc3c[25]; // 3a50:573c
db dummyf_3fc55[10]; // 3a50:573c
db dummyf_3fc5f[10]; // 3a50:573c
db dummyf_3fc69[11]; // 3a50:573c
db dummyf_3fc74[10]; // 3a50:573c
db dummyf_3fc7e[10]; // 3a50:573c
db dummyf_3fc88[11]; // 3a50:573c
db dummyf_3fc93[10]; // 3a50:573c
db dummyf_3fc9d[11]; // 3a50:573c
db dummyf_3fca8[24]; // 3a50:573c
dw _unk_4e2a0; // 3a50:57c0
dw word_4e2a2; // 3a50:57c2
dw word_4e2a4; // 3a50:57c4
dw word_4e2a6; // 3a50:57c6
dw word_4e2a8[3]; // 3a50:57c8
dw word_4e2ae; // 3a50:57ce
dw word_4e2b0[2]; // 3a50:57d0
dw word_4e2b4[2]; // 3a50:57d4
db dummyf_3fcd8[4]; // 3a50:57d8
dw word_4e2bc[2]; // 3a50:57dc
dw word_4e2c0; // 3a50:57e0
db dummyf_3fce2[8]; // 3a50:57e2
dw word_4e2ca; // 3a50:57ea
dw word_4e2cc[2]; // 3a50:57ec
dw word_4e2d0; // 3a50:57f0
dw word_4e2d2; // 3a50:57f2
dw word_4e2d4; // 3a50:57f4
dw word_4e2d6[2]; // 3a50:57f6
dw word_4e2da; // 3a50:57fa
dw word_4e2dc[4]; // 3a50:57fc
db dummyf_3fd04[20]; // 3a50:5804
dw word_4e2f8; // 3a50:5818
dw word_4e2fa; // 3a50:581a
dw word_4e2fc; // 3a50:581c
dw word_4e2fe; // 3a50:581e
dw word_4e300; // 3a50:5820
db dummyf_3fd22; // 3a50:5822
db dummyf_3fd23;
db dummyf_3fd24;
db dummyf_3fd25;
db dummyf_3fd26;
db dummyf_3fd27;
dw word_4e308; // 3a50:5828
db byte_4e30a[3]; // 3a50:582a
db byte_4e30d[3]; // 3a50:582d
dw word_4e310; // 3a50:5830
dw word_4e312; // 3a50:5832
char a256leftpic[12]; // 3a50:5834
char a256rightpic[13]; // 3a50:5840
char a256rearpic[12]; // 3a50:584d
char aleftpic[9]; // 3a50:5859
char arightpic[10]; // 3a50:5862
char arearpic[9]; // 3a50:586c
db dummyf_3fd75;
char asc_4e356[2]; // 3a50:5876
db dummyf_3fd78[2]; // 3a50:5878
char as_0[2]; // 3a50:587a
db dummyf_3fd7c[13]; // 3a50:587c
db dummyf_3fd89[12]; // 3a50:587c
db dummyf_3fd95[13]; // 3a50:587c
dw word_4e382; // 3a50:58a2
char afiring[9]; // 3a50:58a4
db dummyf_3fdad;
dw word_4e38e; // 3a50:58ae
char afiredby[11]; // 3a50:58b0
char dummyf_3fdbb[4]; // 3a50:58bb
char atakingoff[12]; // 3a50:58bf
db dummyf_3fdcb;
char amisses[9]; // 3a50:58cc
char adestroyedby[15]; // 3a50:58d5
char adestroyedby_0[15]; // 3a50:58e4
char agroundimpact[15]; // 3a50:58f3
char ahitby[8]; // 3a50:5902
char aineffective[12]; // 3a50:590a
char ahitby_0[9]; // 3a50:5916
db dummyf_3fe1f;
char aa[2]; // 3a50:5920
db dummyf_3fe22; // 3a50:5922
db dummyf_3fe23;
char ae[2]; // 3a50:5924
char asecondtarget[15]; // 3a50:5926
char aprimarytarget[15]; // 3a50:5935
char a0[3]; // 3a50:5944
char dummyf_3fe47[2]; // 3a50:5947
char afired[7]; // 3a50:5949
db dummyf_3fe50[32]; // 3a50:5950
db dummyf_3fe70; // 3a50:5970
db dummyf_3fe71;
db dummyf_3fe72; // 3a50:5972
db dummyf_3fe73;
db dummyf_3fe74; // 3a50:5974
db dummyf_3fe75;
db dummyf_3fe76; // 3a50:5976
db dummyf_3fe77;
db dummyf_3fe78; // 3a50:5978
db dummyf_3fe79;
db dummyf_3fe7a[1];
db dummyf_3fe7b[32]; // 3a50:597b
db dummyf_3fe9b[32]; // 3a50:599b
db dummyf_3febb[32]; // 3a50:59bb
db dummyf_3fedb[32]; // 3a50:59db
db dummyf_3fefb[32]; // 3a50:59fb
db dummyf_3ff1b[32]; // 3a50:5a1b
db dummyf_3ff3b[32]; // 3a50:5a3b
db dummyf_3ff5b[32]; // 3a50:5a5b
db dummyf_3ff7b;
db dummyf_3ff7c;
db dummyf_3ff7d;
db dummyf_3ff7e; // 3a50:5a7e
db dummyf_3ff7f;
db dummyf_3ff80;
db dummyf_3ff81;
db dummyf_3ff82; // 3a50:5a82
db dummyf_3ff83; // 3a50:5a83
dw word_4e564[7]; // 3a50:5a84
db dummyf_3ff92[10]; // 3a50:5a92
dw word_4e57c[9]; // 3a50:5a9c
db dummyf_3ffae; // 3a50:5aae
db dummyf_3ffaf;
db dummyf_3ffb0;
db dummyf_3ffb1;
db dummyf_3ffb2; // 3a50:5ab2
db dummyf_3ffb3; // 3a50:5ab3
dw word_4e594[2]; // 3a50:5ab4
db dummyf_3ffb8; // 3a50:5ab8
db dummyf_3ffb9;
db dummyf_3ffba; // 3a50:5aba
db dummyf_3ffbb;
db dummyf_3ffbc;
db dummyf_3ffbd;
db dummyf_3ffbe;
db dummyf_3ffbf;
db dummyf_3ffc0;
db dummyf_3ffc1;
db dummyf_3ffc2; // 3a50:5ac2
db dummyf_3ffc3;
db dummyf_3ffc4; // 3a50:5ac4
db dummyf_3ffc5;
db dummyf_3ffc6; // 3a50:5ac6
db dummyf_3ffc7;
db dummyf_3ffc8; // 3a50:5ac8
db dummyf_3ffc9;
db dummyf_3ffca; // 3a50:5aca
db dummyf_3ffcb;
dw word_4e5ac[2]; // 3a50:5acc
db dummyf_3ffd0[32]; // 3a50:5ad0
db dummyf_3fff0;
db dummyf_3fff1;
db dummyf_3fff2; // 3a50:5af2
db dummyf_3fff3;
db dummyf_3fff4; // 3a50:5af4
db dummyf_3fff5;
db dummyf_3fff6; // 3a50:5af6
db dummyf_3fff7;
db dummyf_3fff8; // 3a50:5af8
db dummyf_3fff9;
db dummyf_3fffa; // 3a50:5afa
db dummyf_3fffb; // 3a50:5afb
dw word_4e5dc; // 3a50:5afc
dw word_4e5de; // 3a50:5afe
dw word_4e5e0; // 3a50:5b00
dw word_4e5e2; // 3a50:5b02
dw word_4e5e4; // 3a50:5b04
dw word_4e5e6; // 3a50:5b06
dw word_4e5e8; // 3a50:5b08
dw word_4e5ea; // 3a50:5b0a
dw word_4e5ec[8]; // 3a50:5b0c
dw word_4e5fc; // 3a50:5b1c
dw word_4e5fe; // 3a50:5b1e
dw word_4e600; // 3a50:5b20
dw word_4e602; // 3a50:5b22
dw word_4e604; // 3a50:5b24
dw word_4e606; // 3a50:5b26
dw word_4e608; // 3a50:5b28
dw word_4e60a[2]; // 3a50:5b2a
db dummyf_4002e[6]; // 3a50:5b2e
db byte_4e614; // 3a50:5b34
db byte_4e615[5]; // 3a50:5b35
dw word_4e61a; // 3a50:5b3a
dw word_4e61c; // 3a50:5b3c
dw word_4e61e; // 3a50:5b3e
dw word_4e620; // 3a50:5b40
dw word_4e622; // 3a50:5b42
dw word_4e624; // 3a50:5b44
char astallwarning[14]; // 3a50:5b46
char aaccel[6]; // 3a50:5b54
char atraining[9]; // 3a50:5b5a
char aautopilot[10]; // 3a50:5b63
char apressanykeytop[22]; // 3a50:5b6d
char atac[4]; // 3a50:5b83
char atrackcam[10]; // 3a50:5b87
char aahead[6]; // 3a50:5b91
char arear[5]; // 3a50:5b97
char aright[6]; // 3a50:5b9c
char aleft[5]; // 3a50:5ba2
char amap[4]; // 3a50:5ba7
db dummyf_400ab;
db dummyf_400ac;
db dummyf_400ad;
db dummyf_400ae;
db dummyf_400af;
dw word_4e690; // 3a50:5bb0
char adestroyedbygun[22]; // 3a50:5bb2
char ahitbygunfire[15]; // 3a50:5bc8
char adestroyedbygun_0[22]; // 3a50:5bd7
char aat_0[5]; // 3a50:5bed
db dummyf_400f2;
char aprimarytarget_0[15]; // 3a50:5bf3
char asecondarytarge[17]; // 3a50:5c02
char anotarget[10]; // 3a50:5c13
char anotarget_0[10]; // 3a50:5c1d
char amissilelock[13]; // 3a50:5c27
char arange[7]; // 3a50:5c34
char dummyf_4013b[2]; // 3a50:5c3b
char akm[4]; // 3a50:5c3d
db dummyf_40141;
char a3d3_0[5]; // 3a50:5c42
char arb_4[3]; // 3a50:5c47
char aopenerroron3d3_0[20]; // 3a50:5c4a
dw word_4e73e; // 3a50:5c5e
char a15fltxxx[10]; // 3a50:5c60
char abrg[5]; // 3a50:5c6a
db dummyf_4016f[1];
char along[5]; // 3a50:5c70
char amedium[7]; // 3a50:5c75
char ashort[6]; // 3a50:5c7c
char arangeradar[13]; // 3a50:5c82
char adetaillevel[14]; // 3a50:5c8f
char akybdsensitivit[17]; // 3a50:5c9d
char amemoryavailabl[18]; // 3a50:5cae
char ajiffiesframe[15]; // 3a50:5cc0
char asounds[8]; // 3a50:5ccf
char adirector[10]; // 3a50:5cd7
char aoff[4]; // 3a50:5ce1
char awaypointprimar[25]; // 3a50:5ce5
char awaypointsecond[27]; // 3a50:5cfe
char awaypointfriend[27]; // 3a50:5d19
char aautopilotoff[14]; // 3a50:5d34
char aautopiloton[13]; // 3a50:5d42
db dummyf_4024f;
dw word_4e830; // 3a50:5d50
dw word_4e832; // 3a50:5d52
dw word_4e834; // 3a50:5d54
dw word_4e836; // 3a50:5d56
dw word_4e838; // 3a50:5d58
dw word_4e83a[2]; // 3a50:5d5a
char anotavailable[15]; // 3a50:5d5e
char aarmed[7]; // 3a50:5d6d
db dummyf_40274[522]; // 3a50:5d74
db dummyf_4047e[11]; // 3a50:5d74
db dummyf_40489[11]; // 3a50:5d74
db dummyf_40494[10]; // 3a50:5d74
db dummyf_4049e[11]; // 3a50:5d74
db dummyf_404a9[10]; // 3a50:5d74
db dummyf_404b3[11]; // 3a50:5d74
db dummyf_404be[10]; // 3a50:5d74
db dummyf_404c8[10]; // 3a50:5d74
db dummyf_404d2[10]; // 3a50:5d74
db dummyf_404dc[2]; // 3a50:5d74
dw word_4eabe; // 3a50:5fde
dw word_4eac0; // 3a50:5fe0
db dummyf_404e2;
db dummyf_404e3;
dw word_4eac4; // 3a50:5fe4
dw word_4eac6[161]; // 3a50:5fe6
dw word_4ec08; // 3a50:6128
dw word_4ec0a; // 3a50:612a
dw word_4ec0c[2]; // 3a50:612c
dw word_4ec10; // 3a50:6130
dw word_4ec12; // 3a50:6132
dw word_4ec14; // 3a50:6134
dw word_4ec16; // 3a50:6136
dw _off_4ec18; // 3a50:6138
dw word_4ec1a; // 3a50:613a
db dummyf_4063c[78]; // 3a50:613c
dw aacfileinfo; // 3a50:618a
db dummyf_4068c; // 3a50:618c
db dummyf_4068d; // 3a50:618d
db dummyf_4068e; // 3a50:618e
db dummyf_4068f; // 3a50:618f
db dummyf_40690; // 3a50:6190
db dummyf_40691; // 3a50:6191
db dummyf_40692; // 3a50:6192
db dummyf_40693; // 3a50:6193
db dummyf_40694; // 3a50:6194
db dummyf_40695; // 3a50:6195
db dummyf_40696; // 3a50:6196
db dummyf_40697; // 3a50:6197
db dummyf_40698;
dd dword_4ec79; // 3a50:6199
db dummyf_4069d;
db dummyf_4069e;
db dummyf_4069f;
db dummyf_406a0;
db dummyf_406a1;
db dummyf_406a2;
db dummyf_406a3;
db dummyf_406a4;
dw word_4ec85; // 3a50:61a5
dw word_4ec87; // 3a50:61a7
db dummyf_406a9;
db dummyf_406aa;
dw word_4ec8b; // 3a50:61ab
dw word_4ec8d; // 3a50:61ad
db dummyf_406af;
db byte_4ec90[2]; // 3a50:61b0
dw word_4ec92[11]; // 3a50:61b2
dw word_4eca8; // 3a50:61c8
dw word_4ecaa; // 3a50:61ca
dw word_4ecac; // 3a50:61cc
db dummyf_406ce; // 3a50:61ce
db dummyf_406cf; // 3a50:61cf
db dummyf_406d0; // 3a50:61d0
db dummyf_406d1; // 3a50:61d1
db dummyf_406d2; // 3a50:61d2
db dummyf_406d3;
db dummyf_406d4;
db dummyf_406d5;
db dummyf_406d6;
db dummyf_406d7;
db dummyf_406d8;
db dummyf_406d9;
db dummyf_406da;
db dummyf_406db;
dw word_4ecbc[3]; // 3a50:61dc
dw word_4ecc2; // 3a50:61e2
dw word_4ecc4; // 3a50:61e4
dw word_4ecc6; // 3a50:61e6
dw word_4ecc8; // 3a50:61e8
db dummyf_406ea[32]; // 3a50:61ea
db dummyf_4070a[32]; // 3a50:620a
db dummyf_4072a;
db dummyf_4072b;
db dummyf_4072c[3]; // 3a50:622c
db dummyf_4072f;
db dummyf_40730;
db dummyf_40731;
db dummyf_40732;
db dummyf_40733;
db dummyf_40734[2]; // 3a50:6234
db dummyf_40736[32]; // 3a50:6236
db dummyf_40756[32]; // 3a50:6256
db dummyf_40776[32]; // 3a50:6276
db dummyf_40796[32]; // 3a50:6296
db dummyf_407b6[32]; // 3a50:62b6
db dummyf_407d6[32]; // 3a50:62d6
db dummyf_407f6[32]; // 3a50:62f6
dw word_4edf6; // 3a50:6316
dw word_4edf8; // 3a50:6318
dw word_4edfa; // 3a50:631a
dw word_4edfc[2]; // 3a50:631c
dw word_4ee00[2]; // 3a50:6320
db dummyf_40824;
db byte_4ee05; // 3a50:6325
dw word_4ee06; // 3a50:6326
db dummyf_40828;
db dummyf_40829;
dw word_4ee0a; // 3a50:632a
dw word_4ee0c[2]; // 3a50:632c
db byte_4ee10[4]; // 3a50:6330
dd dword_4ee14; // 3a50:6334
dd dword_4ee18; // 3a50:6338
dd dword_4ee1c; // 3a50:633c
db dummyf_40840; // 3a50:6340
db dummyf_40841; // 3a50:6341
dw seg_4ee22; // 3a50:6342
dw seg_4ee24; // 3a50:6344
db seg_4ee26; // 3a50:6346
char anmsg[10]; // 3a50:6347
db dummyf_40851[1];
char ar6000stackover[7]; // 3a50:6352
char dummyf_40859[19]; // 3a50:6352
db dummyf_4086c; // 3a50:636c
db dummyf_4086d;
char ar6003integerdi[7]; // 3a50:636e
char dummyf_40875[24]; // 3a50:636e
db dummyf_4088d; // 3a50:638d
db dummyf_4088e;
char ar6009notenough[7]; // 3a50:638f
char dummyf_40896[37]; // 3a50:638f
db dummyf_408bb; // 3a50:63bb
db dummyf_408bc;
db dummyf_408bd; // 3a50:63bd
db dummyf_408be; // 3a50:63be
db dummyf_408bf;
db dummyf_408c0; // 3a50:63c0
db dummyf_408c1;
char aruntimeerror[16]; // 3a50:63c2
db dummyf_408d2; // 3a50:63d2
db dummyf_408d3;
char ar6002floatingp[7]; // 3a50:63d4
char dummyf_408db[30]; // 3a50:63d4
db dummyf_408f9; // 3a50:63f9
db dummyf_408fa;
char ar6001nullpoint[7]; // 3a50:63fb
char dummyf_40902[28]; // 3a50:63fb
db dummyf_4091e; // 3a50:641e
db dummyf_4091f; // 3a50:641f
db dummyf_40920; // 3a50:6420
db dummyf_40921;
dw word_4ef02; // 3a50:6422
dw word_4ef04; // 3a50:6424
dw word_4ef06; // 3a50:6426
dw word_4ef08; // 3a50:6428
dw word_4ef0a; // 3a50:642a
dw word_4ef0c; // 3a50:642c
dw word_4ef0e; // 3a50:642e
dw word_4ef10; // 3a50:6430
dw word_4ef12; // 3a50:6432
dw word_4ef14; // 3a50:6434
dw word_4ef16; // 3a50:6436
dw word_4ef18; // 3a50:6438
dw word_4ef1a; // 3a50:643a
dw word_4ef1c; // 3a50:643c
dw word_4ef1e; // 3a50:643e
dw word_4ef20; // 3a50:6440
dw word_4ef22[4]; // 3a50:6442
dw word_4ef2a; // 3a50:644a
dw word_4ef2c; // 3a50:644c
dw word_4ef2e; // 3a50:644e
dw word_4ef30; // 3a50:6450
dw word_4ef32; // 3a50:6452
dw word_4ef34; // 3a50:6454
dw word_4ef36[34]; // 3a50:6456
dw word_4ef7a; // 3a50:649a
dw word_4ef7c; // 3a50:649c
dw word_4ef7e; // 3a50:649e
dw word_4ef80; // 3a50:64a0
dw word_4ef82; // 3a50:64a2
dw word_4ef84; // 3a50:64a4
dw word_4ef86; // 3a50:64a6
dw word_4ef88; // 3a50:64a8
dw word_4ef8a; // 3a50:64aa
dw word_4ef8c; // 3a50:64ac
dw word_4ef8e; // 3a50:64ae
db byte_4ef90; // 3a50:64b0
db byte_4ef91; // 3a50:64b1
db byte_4ef92; // 3a50:64b2
db byte_4ef93; // 3a50:64b3
dw word_4ef94; // 3a50:64b4
dw word_4ef96; // 3a50:64b6
dw word_4ef98; // 3a50:64b8
db byte_4ef9a; // 3a50:64ba
db byte_4ef9b; // 3a50:64bb
dw word_4ef9c; // 3a50:64bc
db byte_4ef9e[514]; // 3a50:64be
dw word_4f1a0; // 3a50:66c0
dw word_4f1a2[8]; // 3a50:66c2
dw dummyf_40bd2[5]; // 3a50:66c2
db byte_4f1bc; // 3a50:66dc
db byte_4f1bd[12]; // 3a50:66dd
db dummyf_40be9[11]; // 3a50:66dd
db dummyf_40bf4[12]; // 3a50:66dd
db dummyf_40c00[11]; // 3a50:66dd
db dummyf_40c0b[9]; // 3a50:66dd
dw word_4f1f4; // 3a50:6714
dw word_4f1f6; // 3a50:6716
dw word_4f1f8[2]; // 3a50:6718
dw word_4f1fc; // 3a50:671c
dw seg_4f1fe[6]; // 3a50:671e
dw word_4f20a; // 3a50:672a
db byte_4f20c[2]; // 3a50:672c
dw word_4f20e; // 3a50:672e
dw word_4f210; // 3a50:6730
dd dword_4f212; // 3a50:6732
dw word_4f216; // 3a50:6736
dw word_4f218; // 3a50:6738
dw word_4f21a[2]; // 3a50:673a
dw word_4f21e; // 3a50:673e
dd dword_4f220; // 3a50:6740
db dummyf_40c44[2]; // 3a50:6744
dw word_4f226; // 3a50:6746
dw word_4f228; // 3a50:6748
dw word_4f22a; // 3a50:674a
dw word_4f22c; // 3a50:674c
db dummyf_40c4e[308];
db dummyf_40d82[12]; // 3a50:6882
db dummyf_40d8e[10]; // 3a50:6882
db dummyf_40d98[11]; // 3a50:6882
db dummyf_40da3[11]; // 3a50:6882
db dummyf_40dae[11]; // 3a50:6882
db dummyf_40db9[10]; // 3a50:6882
db dummyf_40dc3[10]; // 3a50:6882
db dummyf_40dcd[10]; // 3a50:6882
db dummyf_40dd7[12]; // 3a50:6882
db dummyf_40de3[13]; // 3a50:6882
db dummyf_40df0[11]; // 3a50:6882
db dummyf_40dfb[10]; // 3a50:6882
db dummyf_40e05[6]; // 3a50:6882
dw dummyf_40e0b; // 3a50:690b
db dummyf_40e0d[27];
dd dummyf_40e28; // 3a50:6928
db dummyf_40e2c[32];
db dummyf_40e4c[2]; // 3a50:694c
dw word_4f42e; // 3a50:694e
dw word_4f430; // 3a50:6950
db dummyf_40e52[23];
db dummyf_40e69[11]; // 3a50:6969
db dummyf_40e74; // 3a50:6969
dw dummyf_40e75; // 3a50:6975
db dummyf_40e77[59];
db dummyf_40eb2; // 3a50:69b2
db dummyf_40eb3[13];
db dummyf_40ec0; // 3a50:69c0
db dummyf_40ec1[19];
db dummyf_40ed4; // 3a50:69d4
db dummyf_40ed5[27];
db dummyf_40ef0; // 3a50:69f0
db dummyf_40ef1[13];
db dummyf_40efe; // 3a50:69fe
db dummyf_40eff[19];
db dummyf_40f12; // 3a50:6a12
db dummyf_40f13[436];
db dummyf_410c7; // 3a50:6bc7
db dummyf_410c8[191];
db dummyf_41187; // 3a50:6c87
db dummyf_41188[322];
db dummyf_412ca; // 3a50:6dca
db dummyf_412cb[211];
db dummyf_4139e; // 3a50:6e9e
db dummyf_4139f; // 3a50:6e9f
db dummyf_413a0; // 3a50:6ea0
db dummyf_413a1; // 3a50:6ea1
db dummyf_413a2[29];
db dummyf_413bf; // 3a50:6ebf
db dummyf_413c0[54];
db dummyf_413f6; // 3a50:6ef6
db dummyf_413f7[61];
db dummyf_41434; // 3a50:6f34
db dummyf_41435[19];
db dummyf_41448; // 3a50:6f48
db dummyf_41449[60];
db dummyf_41485; // 3a50:6f85
db dummyf_41486[263];
db dummyf_4158d; // 3a50:708d
db dummyf_4158e[342];
db dummyf_416e4; // 3a50:71e4
db dummyf_416e5[516];
db dummyf_418e9; // 3a50:73e9
db dummyf_418ea; // 3a50:73ea
db dummyf_418eb; // 3a50:73eb
db dummyf_418ec; // 3a50:73ec
db dummyf_418ed[210];
db dummyf_419bf; // 3a50:74bf
db dummyf_419c0[172];
db dummyf_41a6c; // 3a50:756c
db dummyf_41a6d[200];
db dummyf_41b35; // 3a50:7635
db dummyf_41b36[112];
db dummyf_41ba6; // 3a50:76a6
db dummyf_41ba7[546];
db dummyf_41dc9[128]; // 3a50:78c9
db dummyf_41e49[549]; // 3a50:78c9
db dummyf_4206e[317]; // 3a50:78c9
db dummyf_421ab[274]; // 3a50:78c9
db dummyf_422bd[224]; // 3a50:78c9
db dummyf_4239d[320]; // 3a50:78c9
db dummyf_424dd[113]; // 3a50:78c9
dw word_50b2e[14]; // 3a50:804e
db dummyf_4256a[38]; // 3a50:806a
dw word_50b70[2]; // 3a50:8090
dw word_50b74; // 3a50:8094
dw word_50b76[67]; // 3a50:8096
db dummyf_4261c[94]; // 3a50:811c
db dummyf_4267a[48]; // 3a50:811c
dw word_50c8a[2]; // 3a50:81aa
dw word_50c8e; // 3a50:81ae
dw word_50c90[5]; // 3a50:81b0
dw word_50c9a[81]; // 3a50:81ba
db dummyf_4275c[95]; // 3a50:825c
db dummyf_427bb[233]; // 3a50:825c
db dummyf_428a4[87]; // 3a50:825c
db dummyf_428fb[224]; // 3a50:825c
db dummyf_429db[28]; // 3a50:825c
db dummyf_429f7[124]; // 3a50:825c
db dummyf_42a73[170]; // 3a50:825c
db dummyf_42b1d[63]; // 3a50:825c
dw word_5113c[9]; // 3a50:865c
db dummyf_42b6e[134]; // 3a50:866e
dw word_511d4; // 3a50:86f4
dw word_511d6; // 3a50:86f6
dw word_511d8; // 3a50:86f8
dw word_511da[7]; // 3a50:86fa
db dummyf_42c08[114]; // 3a50:8708
db dummyf_42c7a[66]; // 3a50:8708
db dummyf_42cbc[64]; // 3a50:8708
dw word_512dc[38]; // 3a50:87fc
db dummyf_42d48[76]; // 3a50:8848
dw word_51374; // 3a50:8894
dw word_51376; // 3a50:8896
dw word_51378; // 3a50:8898
db dummyf_42d9a[2]; // 3a50:889a
dw word_5137c[6]; // 3a50:889c
dw word_51388; // 3a50:88a8
dw word_5138a[2]; // 3a50:88aa
dw word_5138e[30]; // 3a50:88ae
db dummyf_42dea[15]; // 3a50:88ea
db dummyf_42df9[85]; // 3a50:88ea
dw word_5142e; // 3a50:894e
dw word_51430[20]; // 3a50:8950
dw word_51458; // 3a50:8978
dw word_5145a; // 3a50:897a
dw word_5145c; // 3a50:897c
dw word_5145e; // 3a50:897e
dw word_51460; // 3a50:8980
dw word_51462; // 3a50:8982
dw word_51464; // 3a50:8984
dw word_51466[4]; // 3a50:8986
db byte_5146e[2]; // 3a50:898e
dw word_51470[37]; // 3a50:8990
db dummyf_42eda[34]; // 3a50:89da
db dummyf_42efc[58]; // 3a50:89da
db dummyf_42f36[83]; // 3a50:89da
db dummyf_42f89[143]; // 3a50:89da
db dummyf_43018[24]; // 3a50:89da
db dummyf_43030[71]; // 3a50:89da
db dummyf_43077[127]; // 3a50:89da
db dummyf_430f6[44]; // 3a50:89da
dw word_51702; // 3a50:8c22
dw word_51704; // 3a50:8c24
dw word_51706; // 3a50:8c26
dw word_51708; // 3a50:8c28
dw word_5170a; // 3a50:8c2a
dw word_5170c; // 3a50:8c2c
dw word_5170e; // 3a50:8c2e
dw word_51710; // 3a50:8c30
db byte_51712[2]; // 3a50:8c32
dw word_51714[16]; // 3a50:8c34
db dummyf_43154[13]; // 3a50:8c54
db dummyf_43161[82]; // 3a50:8c54
db dummyf_431b3[115]; // 3a50:8c54
dw word_51806[7]; // 3a50:8d26
db dummyf_43234[95]; // 3a50:8d34
db dummyf_43293[33]; // 3a50:8d34
db dummyf_432b4[64]; // 3a50:8d34
db dummyf_432f4[90]; // 3a50:8d34
db dummyf_4334e[51]; // 3a50:8d34
db dummyf_43381[89]; // 3a50:8d34
db dummyf_433da[76]; // 3a50:8d34
db dummyf_43426[4]; // 3a50:8d34
dw word_51a0a; // 3a50:8f2a
dw word_51a0c; // 3a50:8f2c
dw word_51a0e; // 3a50:8f2e
dw word_51a10; // 3a50:8f30
dw word_51a12; // 3a50:8f32
dw word_51a14; // 3a50:8f34
dw word_51a16; // 3a50:8f36
dw word_51a18; // 3a50:8f38
dw word_51a1a; // 3a50:8f3a
dw word_51a1c; // 3a50:8f3c
db byte_51a1e; // 3a50:8f3e
db byte_51a1f; // 3a50:8f3f
db byte_51a20; // 3a50:8f40
db byte_51a21[7]; // 3a50:8f41
dw word_51a28; // 3a50:8f48
dw word_51a2a[23]; // 3a50:8f4a
db dummyf_43478[74]; // 3a50:8f78
db dummyf_434c2[84]; // 3a50:8f78
db dummyf_43516[13]; // 3a50:8f78
db dummyf_43523[66]; // 3a50:8f78
db dummyf_43565[23]; // 3a50:8f78
db dummyf_4357c[127]; // 3a50:8f78
db dummyf_435fb[13]; // 3a50:8f78
db dummyf_43608[86]; // 3a50:8f78
db dummyf_4365e[25]; // 3a50:8f78
db dummyf_43677[58]; // 3a50:8f78
db dummyf_436b1[96]; // 3a50:8f78
db dummyf_43711[52]; // 3a50:8f78
db dummyf_43745[85]; // 3a50:8f78
db dummyf_4379a[29]; // 3a50:8f78
db dummyf_437b7[56]; // 3a50:8f78
db dummyf_437ef[81]; // 3a50:8f78
db dummyf_43840[60]; // 3a50:8f78
db dummyf_4387c[82]; // 3a50:8f78
db dummyf_438ce[21]; // 3a50:8f78
db dummyf_438e3[31]; // 3a50:8f78
db dummyf_43902[47]; // 3a50:8f78
db dummyf_43931[94]; // 3a50:8f78
db dummyf_4398f[48]; // 3a50:8f78
db dummyf_439bf[88]; // 3a50:8f78
db dummyf_43a17[32]; // 3a50:8f78
db dummyf_43a37[50]; // 3a50:8f78
db dummyf_43a69[15]; // 3a50:8f78
db dummyf_43a78[20]; // 3a50:8f78
dw word_5206c[23]; // 3a50:958c
db dummyf_43aba[20]; // 3a50:95ba
dw word_520ae[9]; // 3a50:95ce
dw word_520c0; // 3a50:95e0
dw word_520c2; // 3a50:95e2
dw word_520c4; // 3a50:95e4
dw word_520c6; // 3a50:95e6
dw word_520c8[2]; // 3a50:95e8
dw word_520cc[13]; // 3a50:95ec
dw dummyf_43b06[3]; // 3a50:95ec
dw word_520ec; // 3a50:960c
dw word_520ee; // 3a50:960e
dw word_520f0; // 3a50:9610
dw word_520f2; // 3a50:9612
db byte_520f4[4]; // 3a50:9614
dw word_520f8; // 3a50:9618
dw word_520fa; // 3a50:961a
dw word_520fc; // 3a50:961c
dw word_520fe; // 3a50:961e
dw word_52100; // 3a50:9620
dw word_52102; // 3a50:9622
dw word_52104; // 3a50:9624
dw word_52106[20]; // 3a50:9626
db dummyf_43b4e[21]; // 3a50:964e
db dummyf_43b63[31]; // 3a50:964e
db dummyf_43b82[10]; // 3a50:964e
dw word_5216c; // 3a50:968c
dw word_5216e[6]; // 3a50:968e
db dummyf_43b9a[70]; // 3a50:969a
dw word_521c0; // 3a50:96e0
db byte_521c2; // 3a50:96e2
db byte_521c3[2]; // 3a50:96e3
db byte_521c5; // 3a50:96e5
dw word_521c6; // 3a50:96e6
dw word_521c8[4]; // 3a50:96e8
dw word_521d0; // 3a50:96f0
dw word_521d2[4]; // 3a50:96f2
db dummyf_43bfa[63]; // 3a50:96fa
db dummyf_43c39[31]; // 3a50:96fa
dw word_52238; // 3a50:9758
dw word_5223a[2]; // 3a50:975a
dw word_5223e; // 3a50:975e
dw word_52240; // 3a50:9760
dw word_52242; // 3a50:9762
dw word_52244; // 3a50:9764
dw word_52246; // 3a50:9766
dw word_52248; // 3a50:9768
dw word_5224a; // 3a50:976a
dw word_5224c; // 3a50:976c
dw word_5224e; // 3a50:976e
dw word_52250[2]; // 3a50:9770
dw word_52254; // 3a50:9774
dw word_52256; // 3a50:9776
dw word_52258; // 3a50:9778
db byte_5225a[2]; // 3a50:977a
dw word_5225c; // 3a50:977c
dw word_5225e[6]; // 3a50:977e
dw word_5226a[2]; // 3a50:978a
dw word_5226e; // 3a50:978e
dw word_52270; // 3a50:9790
dw word_52272; // 3a50:9792
dw word_52274; // 3a50:9794
dw word_52276; // 3a50:9796
dw word_52278[14]; // 3a50:9798
db dummyf_43cb4[36]; // 3a50:97b4
db dummyf_43cd8[18]; // 3a50:97b4
dw word_522ca; // 3a50:97ea
dw word_522cc; // 3a50:97ec
dw word_522ce; // 3a50:97ee
dw word_522d0; // 3a50:97f0
dw word_522d2[36]; // 3a50:97f2
db dummyf_43d3a[62]; // 3a50:983a
db dummyf_43d78[31]; // 3a50:983a
db dummyf_43d97[35]; // 3a50:983a
dw word_5239a; // 3a50:98ba
dw word_5239c[9]; // 3a50:98bc
db dummyf_43dce[38]; // 3a50:98ce
db dummyf_43df4[18]; // 3a50:98ce
db dummyf_43e06[122]; // 3a50:98ce
db dummyf_43e80[49]; // 3a50:98ce
db dummyf_43eb1[20]; // 3a50:98ce
db dummyf_43ec5[82]; // 3a50:98ce
db dummyf_43f17[29]; // 3a50:98ce
db dummyf_43f34[15]; // 3a50:98ce
db dummyf_43f43[124]; // 3a50:98ce
db dummyf_43fbf[47]; // 3a50:98ce
db dummyf_43fee[42]; // 3a50:98ce
db dummyf_44018[65]; // 3a50:98ce
db dummyf_44059[31]; // 3a50:98ce
db dummyf_44078[16]; // 3a50:98ce
db dummyf_44088[36]; // 3a50:98ce
dw word_5268c; // 3a50:9bac
dw word_5268e[40]; // 3a50:9bae
db dummyf_440fe[46]; // 3a50:9bfe
db dummyf_4412c[23]; // 3a50:9bfe
db dummyf_44143[76]; // 3a50:9bfe
db dummyf_4418f[37]; // 3a50:9bfe
db dummyf_441b4[18]; // 3a50:9bfe
db dummyf_441c6[42]; // 3a50:9bfe
db byte_527d0[2]; // 3a50:9cf0
dw word_527d2; // 3a50:9cf2
dw word_527d4; // 3a50:9cf4
dw word_527d6; // 3a50:9cf6
dw word_527d8; // 3a50:9cf8
dw word_527da; // 3a50:9cfa
db dummyf_441fc[77]; // 3a50:9cfc
db dummyf_44249[54]; // 3a50:9cfc
db dummyf_4427f[88]; // 3a50:9cfc
db dummyf_442d7[21]; // 3a50:9cfc
dw word_528cc; // 3a50:9dec
dw word_528ce; // 3a50:9dee
db byte_528d0[2]; // 3a50:9df0
dw word_528d2; // 3a50:9df2
dw word_528d4; // 3a50:9df4
dd dword_528d6; // 3a50:9df6
dw word_528da; // 3a50:9dfa
dw word_528dc; // 3a50:9dfc
dw word_528de[19]; // 3a50:9dfe
dw dummyf_44324[45]; // 3a50:9dfe
db dummyf_4437e[41]; // 3a50:9e7e
db dummyf_443a7[111]; // 3a50:9e7e
db dummyf_44416[39]; // 3a50:9e7e
db dummyf_4443d[39]; // 3a50:9e7e
db dummyf_44464[103]; // 3a50:9e7e
db dummyf_444cb[53]; // 3a50:9e7e
db byte_52ae0[2]; // 3a50:a000
dw word_52ae2; // 3a50:a002
dw word_52ae4; // 3a50:a004
dw word_52ae6; // 3a50:a006
dw word_52ae8; // 3a50:a008
dw word_52aea; // 3a50:a00a
dw word_52aec; // 3a50:a00c
dw word_52aee; // 3a50:a00e
dw word_52af0; // 3a50:a010
dw word_52af2; // 3a50:a012
dw word_52af4[4]; // 3a50:a014
db dummyf_4451c; // 3a50:a01c
db dummyf_4451d; // 3a50:a01d
db dummyf_4451e; // 3a50:a01e
db dummyf_4451f; // 3a50:a01f
db dummyf_44520[2048]; // 4452:0000

#ifdef DOSBOX_CUSTOM
    db filll[1024*1024*16];
#endif
                        db stack[STACK_SIZE];
                        db heap[HEAP_SIZE];
                };
}
#pragma pack(pop)

#endif

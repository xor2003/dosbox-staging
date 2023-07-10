
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
db dummyf_1d70; // 01a2:0350
db dummyf_1d71; // 01a2:0351
db dummyf_1d72; // 01a2:0352
db dummyf_1d73; // 01a2:0353
db dummyf_1d74; // 01a2:0354
db dummyf_1d75; // 01a2:0355
db dummyf_1d76; // 01a2:0356
db dummyf_1d77; // 01a2:0357
db dummyf_1d78; // 01a2:0358
db dummyf_1d79; // 01a2:0359
db dummyf_1d7a; // 01a2:035a
db dummyf_1d7b; // 01a2:035b
db dummyf_1d7c; // 01a2:035c
db dummyf_1d7d; // 01a2:035d
db dummyf_1d7e; // 01a2:035e
dw dummyf_1d7f; // 01a2:035f
db __aalloc1mbdoslie; // 01a2:0361
db dummyf_1d82[32]; // 01a2:0362
db dummyf_1da2[32]; // 01a2:0382
db dummyf_1dc2[32]; // 01a2:03a2
db dummyf_1de2[32]; // 01a2:03c2
db dummyf_1e02[32]; // 01a2:03e2
db dummyf_1e22[32]; // 01a2:0402
db dummyf_1e42[32]; // 01a2:0422
db dummyf_1e62; // 01a2:0442
db dummyf_1e63; // 01a2:0443
db dummyf_1e64; // 01a2:0444
db dummyf_1e65; // 01a2:0445
db dummyf_1e66; // 01a2:0446
db dummyf_1e67; // 01a2:0447
db dummyf_1e68; // 01a2:0448
db dummyf_1e69; // 01a2:0449
db dummyf_1e6a; // 01a2:044a
db dummyf_1e6b;
db dummyf_1e6c; // 01a2:044c
db dummyf_1e6d; // 01a2:044d
db dummyf_1e6e; // 01a2:044e
db dummyf_1e6f; // 01a2:044f
db dummyf_1e70; // 01a2:0450
db dummyf_1e71; // 01a2:0451
db dummyf_1e72; // 01a2:0452
db dummyf_1e73; // 01a2:0453
db dummyf_1e74; // 01a2:0454
db dummyf_1e75;
db dummyf_1e76; // 01a2:0456
db dummyf_1e77; // 01a2:0457
db dummyf_1e78; // 01a2:0458
db byte_10459; // 01a2:0459
db dummyf_1e7a; // 01a2:045a
db byte_1045b; // 01a2:045b
db dummyf_1e7c; // 01a2:045c
db byte_1045d; // 01a2:045d
db dummyf_1e7e; // 01a2:045e
db byte_1045f; // 01a2:045f
db dummyf_1e80[32]; // 01a2:0460
dw dummyf_1ea0; // 01a2:0480
db dummyf_1ea2[32]; // 01a2:0482
db dummyf_1ec2[32]; // 01a2:04a2
db dummyf_1ee2[32]; // 01a2:04c2
db dummyf_1f02[32]; // 01a2:04e2
db dummyf_1f22[32]; // 01a2:0502
db dummyf_1f42[32]; // 01a2:0522
db dummyf_1f62[32]; // 01a2:0542
db dummyf_1f82; // 01a2:0562
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
db byte_1057c; // 01a2:057c
db dummyf_1f9d; // 01a2:057d
db byte_1057e; // 01a2:057e
db dummyf_1f9f; // 01a2:057f
db byte_10580; // 01a2:0580
db dummyf_1fa1; // 01a2:0581
db byte_10582; // 01a2:0582
db dummyf_1fa3; // 01a2:0583
db dummyf_1fa4; // 01a2:0584
db dummyf_1fa5; // 01a2:0585
db byte_10586; // 01a2:0586
db dummyf_1fa7[32]; // 01a2:0587
db dummyf_1fc7[32]; // 01a2:05a7
db dummyf_1fe7[32]; // 01a2:05c7
db dummyf_2007[32]; // 01a2:05e7
db dummyf_2027; // 01a2:0607
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
db amgraphicexe; // 0204:0000
db dummyf_2041; // 0204:0001
db __araphicexe; // 0204:0002
db dummyf_2043; // 0204:0003
db dummyf_2044; // 0204:0004
db dummyf_2045; // 0204:0005
db dummyf_2046; // 0204:0006
db dummyf_2047; // 0204:0007
db dummyf_2048; // 0204:0008
db dummyf_2049; // 0204:0009
db dummyf_204a; // 0204:000a
db dummyf_204b; // 0204:000b
db dummyf_204c;
char __aasoundexe[11]; // 0204:000d
db dummyf_2058[32]; // 0204:0018
db dummyf_2078;
db dummyf_2079;
db dummyf_207a; // 0204:003a
db dummyf_207b;
db dummyf_207c; // 0204:003c
db dummyf_207d;
db dummyf_207e; // 0204:003e
db dummyf_207f; // 0204:003f
db dummyf_2080[5];
db dummyf_2085[32]; // 0204:0045
db dummyf_20a5[32]; // 0204:0065
db dummyf_20c5[32]; // 0204:0085
db dummyf_20e5[32]; // 0204:00a5
db dummyf_2105[32]; // 0204:00c5
db dummyf_2125[32]; // 0204:00e5
db dummyf_2145[32]; // 0204:0105
db dummyf_2165[32]; // 0204:0125
db dummyf_2185[32]; // 0204:0145
db dummyf_21a5[32]; // 0204:0165
db dummyf_21c5[32]; // 0204:0185
db dummyf_21e5[32]; // 0204:01a5
db dummyf_2205[32]; // 0204:01c5
db dummyf_2225[32]; // 0204:01e5
db dummyf_2245[32]; // 0204:0205
db dummyf_2265[32]; // 0204:0225
db dummyf_2285[32]; // 0204:0245
db dummyf_22a5[32]; // 0204:0265
db dummyf_22c5[32]; // 0204:0285
db dummyf_22e5[32]; // 0204:02a5
db dummyf_2305[32]; // 0204:02c5
db dummyf_2325[32]; // 0204:02e5
db dummyf_2345[32]; // 0204:0305
db dummyf_2365[32]; // 0204:0325
db dummyf_2385[32]; // 0204:0345
db dummyf_23a5;
db dummyf_23a6; // 0204:0366
db dummyf_23a7; // 0204:0367
db dummyf_23a8; // 0204:0368
db dummyf_23a9; // 0204:0369
db dummyf_23aa; // 0204:036a
db dummyf_23ab;
db dummyf_23ac; // 0204:036c
db dummyf_23ad; // 0204:036d
db dummyf_23ae; // 0204:036e
db dummyf_23af;
db dummyf_23b0; // 0204:0370
db dummyf_23b1; // 0204:0371
db dummyf_23b2; // 0204:0372
db dummyf_23b3;
db dummyf_23b4;
db dummyf_23b5; // 0204:0375
db dummyf_23b6;
db dummyf_23b7;
db dummyf_23b8;
db dummyf_23b9;
db dummyf_23ba; // 0204:037a
db dummyf_23bb;
db dummyf_23bc; // 0204:037c
db dummyf_23bd; // 0204:037d
db dummyf_23be; // 0204:037e
db dummyf_23bf; // 0204:037f
db dummyf_23c0; // 0204:0380
db dummyf_23c1; // 0204:0381
db dummyf_23c2; // 0204:0382
db dummyf_23c3;
db dummyf_23c4[66]; // 0204:0384
db dummyf_2406[69]; // 0204:0384
db dummyf_244b[108]; // 0204:0384
db dummyf_24b7[17]; // 0204:0384
db dummyf_24c8[14]; // 0204:0384
db dummyf_24d6[21]; // 0204:0384
db dummyf_24eb[11]; // 0204:0384
db dummyf_24f6[120]; // 0204:0384
db dummyf_256e[11]; // 0204:0384
db dummyf_2579[11]; // 0204:0384
db dummyf_2584[12]; // 0204:0384
db dummyf_2590[11]; // 0204:0384
db dummyf_259b[12]; // 0204:0384
db dummyf_25a7[12]; // 0204:0384
db dummyf_25b3[11]; // 0204:0384
db dummyf_25be[12]; // 0204:0384
db dummyf_25ca[11]; // 0204:0384
db dummyf_25d5[12]; // 0204:0384
db dummyf_25e1[11]; // 0204:0384
db dummyf_25ec[12]; // 0204:0384
db dummyf_25f8[12]; // 0204:0384
db dummyf_2604[12]; // 0204:0384
db dummyf_2610[11]; // 0204:0384
db dummyf_261b[11]; // 0204:0384
db dummyf_2626[11]; // 0204:0384
db dummyf_2631[13]; // 0204:0384
db dummyf_263e[16]; // 0204:0384
db dummyf_264e[11]; // 0204:0384
db dummyf_2659[11]; // 0204:0384
db dummyf_2664[12]; // 0204:0384
db dummyf_2670[14]; // 0204:0384
db dummyf_267e[11]; // 0204:0384
db dummyf_2689[11]; // 0204:0384
db dummyf_2694[11]; // 0204:0384
db dummyf_269f[10]; // 0204:0384
db dummyf_26a9[10]; // 0204:0384
dw dummyf_26b3; // 0204:0673
char __aation[6]; // 0204:0675
db dummyf_26bb[5];
char __aussamerica[12]; // 0204:0680
db dummyf_26cc[14]; // 0204:068c
db dummyf_26da[14]; // 0204:068c
db dummyf_26e8[11]; // 0204:068c
db dummyf_26f3[12]; // 0204:068c
db dummyf_26ff[11]; // 0204:068c
db dummyf_270a[11]; // 0204:068c
db dummyf_2715[11]; // 0204:068c
db dummyf_2720[11]; // 0204:068c
db dummyf_272b[11]; // 0204:068c
db dummyf_2736[11]; // 0204:068c
db dummyf_2741[12]; // 0204:068c
db dummyf_274d[11]; // 0204:068c
db dummyf_2758[11]; // 0204:068c
db dummyf_2763[48]; // 0204:068c
dw dummyf_2793;
db dummyf_2795[209]; // 0204:0755
db dummyf_2866[84]; // 0204:0755
db dummyf_28ba[34]; // 0204:0755
db dummyf_28dc[56]; // 0204:0755
db dummyf_2914[67];
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
db dummyf_32f8[328];
db dummyf_3440; // 0204:1400
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
db __af15iiadlib3149; // 0204:1410
db dummyf_3451; // 0204:1411
db dummyf_3452; // 0204:1412
db dummyf_3453; // 0204:1413
db dummyf_3454; // 0204:1414
db dummyf_3455; // 0204:1415
db dummyf_3456; // 0204:1416
db dummyf_3457; // 0204:1417
db dummyf_3458; // 0204:1418
db dummyf_3459; // 0204:1419
db dummyf_345a; // 0204:141a
db dummyf_345b; // 0204:141b
db dummyf_345c; // 0204:141c
db dummyf_345d; // 0204:141d
db dummyf_345e; // 0204:141e
db dummyf_345f; // 0204:141f
db dummyf_3460; // 0204:1420
db dummyf_3461; // 0204:1421
db dummyf_3462; // 0204:1422
db dummyf_3463; // 0204:1423
db dummyf_3464;
db dummyf_3465;
db dummyf_3466;
db dummyf_3467;
db dummyf_3468[12]; // 0204:1428
db dummyf_3474[13]; // 0204:1428
db dummyf_3481[6]; // 0204:1428
db __assssssssssssss; // 0204:1447
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
db byte_11c22[11]; // 0204:1602
db dummyf_364d[11]; // 0204:1602
db dummyf_3658[10]; // 0204:1602
db dummyf_3662[12]; // 0204:1602
db dummyf_366e[12]; // 0204:1602
db dummyf_367a[11]; // 0204:1602
db dummyf_3685[7]; // 0204:1602
db __anoadlibboardpr; // 0204:164c
db dummyf_368d[32]; // 0204:164d
db _unk_11c8d; // 0204:166d
db byte_11c8e; // 0204:166e
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
db dummyf_36bd; // 0204:167d
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
db dummyf_36c9;
db dummyf_36ca;
db byte_11cab; // 0204:168b
db _unk_11cac; // 0204:168c
db dummyf_36cd;
db _unk_11cae; // 0204:168e
db dummyf_36cf;
db _unk_11cb0; // 0204:1690
db dummyf_36d1;
db dummyf_36d2;
db dummyf_36d3;
db _unk_11cb4; // 0204:1694
db dummyf_36d5; // 0204:1695
db byte_11cb6; // 0204:1696
db byte_11cb7; // 0204:1697
db _unk_11cb8; // 0204:1698
db dummyf_36d9[32]; // 0204:1699
db dummyf_36f9; // 0204:16b9
db byte_11cda; // 0204:16ba
db byte_11cdb; // 0204:16bb
db byte_11cdc; // 0204:16bc
db dummyf_36fd[32]; // 0204:16bd
db dummyf_371d[32]; // 0204:16dd
db dummyf_373d[32]; // 0204:16fd
db dummyf_375d[32]; // 0204:171d
db dummyf_377d[32]; // 0204:173d
db dummyf_379d[32]; // 0204:175d
db dummyf_37bd[32]; // 0204:177d
db dummyf_37dd[32]; // 0204:179d
db dummyf_37fd[32]; // 0204:17bd
db dummyf_381d[32]; // 0204:17dd
db dummyf_383d[32]; // 0204:17fd
db dummyf_385d[32]; // 0204:181d
db dummyf_387d[32]; // 0204:183d
db dummyf_389d[32]; // 0204:185d
db dummyf_38bd[32]; // 0204:187d
db dummyf_38dd[32]; // 0204:189d
db dummyf_38fd[32]; // 0204:18bd
db dummyf_391d[32]; // 0204:18dd
db dummyf_393d[32]; // 0204:18fd
db dummyf_395d[32]; // 0204:191d
db dummyf_397d[32]; // 0204:193d
db dummyf_399d[32]; // 0204:195d
db dummyf_39bd[32]; // 0204:197d
db dummyf_39dd[32]; // 0204:199d
db dummyf_39fd[32]; // 0204:19bd
db dummyf_3a1d[32]; // 0204:19dd
db dummyf_3a3d[32]; // 0204:19fd
db dummyf_3a5d[32]; // 0204:1a1d
db dummyf_3a7d[32]; // 0204:1a3d
db dummyf_3a9d[32]; // 0204:1a5d
db dummyf_3abd[32]; // 0204:1a7d
db dummyf_3add[32]; // 0204:1a9d
db dummyf_3afd[32]; // 0204:1abd
db dummyf_3b1d[32]; // 0204:1add
db dummyf_3b3d[32]; // 0204:1afd
db dummyf_3b5d[32]; // 0204:1b1d
db dummyf_3b7d[32]; // 0204:1b3d
db dummyf_3b9d[32]; // 0204:1b5d
db dummyf_3bbd[32]; // 0204:1b7d
db dummyf_3bdd[32]; // 0204:1b9d
db dummyf_3bfd[32]; // 0204:1bbd
db dummyf_3c1d; // 0204:1bdd
db dummyf_3c1e;
db dummyf_3c1f;
db dummyf_3c20; // 0204:1be0
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
db _unk_12218; // 0204:1bf8
db dummyf_3c39; // 0204:1bf9
db dummyf_3c3a; // 0204:1bfa
db dummyf_3c3b; // 0204:1bfb
db dummyf_3c3c; // 0204:1bfc
db dummyf_3c3d; // 0204:1bfd
db dummyf_3c3e; // 0204:1bfe
db dummyf_3c3f; // 0204:1bff
db dummyf_3c40; // 0204:1c00
db dummyf_3c41;
db dummyf_3c42;
db dummyf_3c43;
db _unk_12224; // 0204:1c04
db dummyf_3c45[32]; // 0204:1c05
db dummyf_3c65[32]; // 0204:1c25
db dummyf_3c85[32]; // 0204:1c45
db dummyf_3ca5; // 0204:1c65
db dummyf_3ca6;
db dummyf_3ca7;
db _unk_12288; // 0204:1c68
db dummyf_3ca9[32]; // 0204:1c69
db dummyf_3cc9[32]; // 0204:1c89
db dummyf_3ce9[32]; // 0204:1ca9
db dummyf_3d09[32]; // 0204:1cc9
db dummyf_3d29[32]; // 0204:1ce9
db dummyf_3d49[32]; // 0204:1d09
db dummyf_3d69[32]; // 0204:1d29
db dummyf_3d89[32]; // 0204:1d49
db dummyf_3da9[32]; // 0204:1d69
db dummyf_3dc9[32]; // 0204:1d89
db dummyf_3de9[32]; // 0204:1da9
db dummyf_3e09[32]; // 0204:1dc9
db dummyf_3e29[32]; // 0204:1de9
db dummyf_3e49[32]; // 0204:1e09
db dummyf_3e69[32]; // 0204:1e29
db dummyf_3e89[32]; // 0204:1e49
db dummyf_3ea9[32]; // 0204:1e69
db dummyf_3ec9[32]; // 0204:1e89
db dummyf_3ee9[32]; // 0204:1ea9
db dummyf_3f09[32]; // 0204:1ec9
db dummyf_3f29[32]; // 0204:1ee9
db dummyf_3f49[32]; // 0204:1f09
db dummyf_3f69[32]; // 0204:1f29
db dummyf_3f89; // 0204:1f49
db dummyf_3f8a;
db dummyf_3f8b;
db dummyf_3f8c; // 0204:1f4c
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
db __acopyrightc1989; // 0204:1f5a
db dummyf_3f9b[32]; // 0204:1f5b
db dummyf_3fbb; // 0204:1f7b
db dummyf_3fbc; // 0204:1f7c
db dummyf_3fbd; // 0204:1f7d
db dummyf_3fbe; // 0204:1f7e
db dummyf_3fbf; // 0204:1f7f
db dummyf_3fc0; // 0204:1f80
db dummyf_3fc1; // 0204:1f81
db dummyf_3fc2; // 0204:1f82
db dummyf_3fc3; // 0204:1f83
db dummyf_3fc4; // 0204:1f84
db dummyf_3fc5; // 0204:1f85
db dummyf_3fc6; // 0204:1f86
db dummyf_3fc7; // 0204:1f87
db dummyf_3fc8; // 0204:1f88
db dummyf_3fc9; // 0204:1f89
db dummyf_3fca; // 0204:1f8a
db dummyf_3fcb; // 0204:1f8b
db dummyf_3fcc; // 0204:1f8c
db dummyf_3fcd; // 0204:1f8d
db dummyf_3fce; // 0204:1f8e
db dummyf_3fcf; // 0204:1f8f
db dummyf_3fd0; // 0204:1f90
db dummyf_3fd1; // 0204:1f91
db dummyf_3fd2; // 0204:1f92
db dummyf_3fd3; // 0204:1f93
db dummyf_3fd4; // 0204:1f94
db dummyf_3fd5; // 0204:1f95
db dummyf_3fd6; // 0204:1f96
db dummyf_3fd7; // 0204:1f97
db dummyf_3fd8; // 0204:1f98
db dummyf_3fd9;
db byte_125ba; // 0204:1f9a
db dummyf_3fdb;
db dummyf_3fdc;
db dummyf_3fdd;
db dummyf_3fde;
db dummyf_3fdf;
db dummyf_3fe0;
db dummyf_3fe1;
db _unk_125c2; // 0204:1fa2
db dummyf_3fe3;
db byte_125c4; // 0204:1fa4
db dummyf_3fe5;
db _unk_125c6; // 0204:1fa6
db dummyf_3fe7;
db _unk_125c8; // 0204:1fa8
db dummyf_3fe9;
db byte_125ca; // 0204:1faa
db dummyf_3feb;
db byte_125cc; // 0204:1fac
db dummyf_3fed;
db dummyf_3fee;
db dummyf_3fef;
db dummyf_3ff0; // 0204:1fb0
db dummyf_3ff1; // 0204:1fb1
db dummyf_3ff2; // 0204:1fb2
db dummyf_3ff3;
db dummyf_3ff4; // 0204:1fb4
db dummyf_3ff5; // 0204:1fb5
db dummyf_3ff6; // 0204:1fb6
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
db dummyf_4001;
db dummyf_4002;
db dummyf_4003;
db dummyf_4004; // 0204:1fc4
db dummyf_4005; // 0204:1fc5
db dummyf_4006; // 0204:1fc6
db dummyf_4007;
db dummyf_4008; // 0204:1fc8
db dummyf_4009; // 0204:1fc9
db dummyf_400a; // 0204:1fca
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
db dummyf_4015;
db dummyf_4016;
db dummyf_4017;
db dummyf_4018; // 0204:1fd8
db dummyf_4019; // 0204:1fd9
db dummyf_401a; // 0204:1fda
db dummyf_401b;
db dummyf_401c; // 0204:1fdc
db dummyf_401d; // 0204:1fdd
db dummyf_401e; // 0204:1fde
db dummyf_401f; // 0204:1fdf
db dummyf_4020; // 0204:1fe0
db dummyf_4021;
db dummyf_4022;
db dummyf_4023;
db dummyf_4024;
db dummyf_4025;
db dummyf_4026;
db dummyf_4027;
db unk_12608; // 0204:1fe8
db dummyf_4029;
db dummyf_402a;
db dummyf_402b;
db dummyf_402c; // 0204:1fec
db dummyf_402d; // 0204:1fed
db dummyf_402e; // 0204:1fee
db dummyf_402f;
db dummyf_4030; // 0204:1ff0
db dummyf_4031; // 0204:1ff1
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
db unk_1261c; // 0204:1ffc
db dummyf_403d;
db dummyf_403e;
db dummyf_403f;
db dummyf_4040; // 0204:2000
db dummyf_4041; // 0204:2001
db dummyf_4042; // 0204:2002
db dummyf_4043;
db dummyf_4044; // 0204:2004
db dummyf_4045; // 0204:2005
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
db unk_12630; // 0204:2010
db dummyf_4051[32]; // 0204:2011
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
db byte_1265c; // 0204:203c
db dummyf_407d;
db byte_1265e; // 0204:203e
db byte_1265f; // 0204:203f
db byte_12660; // 0204:2040
db dummyf_4081[32]; // 0204:2041
db dummyf_40a1[32]; // 0204:2061
db dummyf_40c1[32]; // 0204:2081
db dummyf_40e1[32]; // 0204:20a1
db dummyf_4101[32]; // 0204:20c1
db dummyf_4121;
db dummyf_4122; // 0204:20e2
db dummyf_4123; // 0204:20e3
db dummyf_4124; // 0204:20e4
db dummyf_4125; // 0204:20e5
db dummyf_4126; // 0204:20e6
db dummyf_4127; // 0204:20e7
db dummyf_4128;
db dummyf_4129;
db dummyf_412a;
db dummyf_412b;
db dummyf_412c;
db dummyf_412d;
db dummyf_412e;
db dummyf_412f;
db dummyf_4130;
db dummyf_4131;
db dummyf_4132; // 0204:20f2
db dummyf_4133;
db dummyf_4134;
db dummyf_4135; // 0204:20f5
db dummyf_4136; // 0204:20f6
db dummyf_4137; // 0204:20f7
db dummyf_4138;
db dummyf_4139;
db dummyf_413a;
db dummyf_413b;
db dummyf_413c;
db dummyf_413d;
db dummyf_413e;
db byte_1271f; // 0204:20ff
db dummyf_4140[32]; // 0204:2100
db dummyf_4160[32]; // 0204:2120
db dummyf_4180[32]; // 0204:2140
db dummyf_41a0[32]; // 0204:2160
db dummyf_41c0;
db dummyf_41c1;
db dummyf_41c2;
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
db dummyf_41e0;
db dummyf_41e1;
db dummyf_41e2;
db dummyf_41e3;
db dummyf_41e4;
db dummyf_41e5;
db dummyf_41e6;
db dummyf_41e7;
db dummyf_41e8[2];
db dummyf_41ea; // 041e:000a
db dummyf_41eb[3];
db dummyf_41ee; // 041e:000e
db dummyf_41ef; // 041e:000f
db dummyf_41f0[58];
db dummyf_422a;
db dummyf_422b;
db dummyf_422c;
dw word_1280d; // 041e:004d
dw word_1280f; // 041e:004f
db dummyf_4231; // 041e:0051
db dummyf_4232[845];
db dummyf_457f; // 041e:039f
db dummyf_4580; // 041e:03a0
db dummyf_4581; // 041e:03a1
db dummyf_4582; // 041e:03a2
db dummyf_4583; // 041e:03a3
db dummyf_4584; // 041e:03a4
db dummyf_4585; // 041e:03a5
db dummyf_4586; // 041e:03a6
db dummyf_4587; // 041e:03a7
db dummyf_4588; // 041e:03a8
db dummyf_4589; // 041e:03a9
db dummyf_458a; // 041e:03aa
db dummyf_458b; // 041e:03ab
db dummyf_458c; // 041e:03ac
db dummyf_458d; // 041e:03ad
db dummyf_458e;
db dummyf_458f; // 041e:03af
db dummyf_4590[56];
db dummyf_45c8[32]; // 041e:03e8
db dummyf_45e8[32]; // 041e:0408
db dummyf_4608[32]; // 041e:0428
db dummyf_4628[32]; // 041e:0448
db dummyf_4648[32]; // 041e:0468
db dummyf_4668[32]; // 041e:0488
db dummyf_4688; // 041e:04a8
db dummyf_4689; // 041e:04a9
db dummyf_468a; // 041e:04aa
db dummyf_468b; // 041e:04ab
db dummyf_468c; // 041e:04ac
db dummyf_468d; // 041e:04ad
db dummyf_468e; // 041e:04ae
db dummyf_468f; // 041e:04af
db dummyf_4690; // 041e:04b0
db dummyf_4691; // 041e:04b1
db dummyf_4692; // 041e:04b2
db dummyf_4693[26];
db dummyf_46ad[32]; // 041e:04cd
db dummyf_46cd; // 041e:04ed
db dummyf_46ce; // 041e:04ee
db dummyf_46cf; // 041e:04ef
db dummyf_46d0; // 041e:04f0
db dummyf_46d1[28];
db dummyf_46ed[32]; // 041e:050d
db dummyf_470d[32]; // 041e:052d
db dummyf_472d[32]; // 041e:054d
db dummyf_474d[32]; // 041e:056d
db dummyf_476d[32]; // 041e:058d
db dummyf_478d; // 041e:05ad
db dummyf_478e; // 041e:05ae
db dummyf_478f[14];
db dummyf_479d[32]; // 041e:05bd
db dummyf_47bd[32]; // 041e:05dd
db dummyf_47dd; // 041e:05fd
db dummyf_47de; // 041e:05fe
db dummyf_47df; // 041e:05ff
db dummyf_47e0; // 041e:0600
db dummyf_47e1; // 041e:0601
db dummyf_47e2; // 041e:0602
db dummyf_47e3; // 041e:0603
db dummyf_47e4; // 041e:0604
db dummyf_47e5; // 041e:0605
db dummyf_47e6; // 041e:0606
db dummyf_47e7; // 041e:0607
db dummyf_47e8; // 041e:0608
db dummyf_47e9; // 041e:0609
db dummyf_47ea; // 041e:060a
db dummyf_47eb; // 041e:060b
db dummyf_47ec; // 041e:060c
db dummyf_47ed; // 041e:060d
db dummyf_47ee[15];
db dummyf_47fd; // 041e:061d
db dummyf_47fe[1];
db dummyf_47ff[32]; // 041e:061f
db dummyf_481f; // 041e:063f
db dummyf_4820; // 041e:0640
db dummyf_4821;
db dummyf_4822; // 041e:0642
db dummyf_4823; // 041e:0643
db dummyf_4824; // 041e:0644
db dummyf_4825; // 041e:0645
db dummyf_4826; // 041e:0646
db dummyf_4827; // 041e:0647
db dummyf_4828; // 041e:0648
db dummyf_4829; // 041e:0649
db dummyf_482a; // 041e:064a
db dummyf_482b[25];
db dummyf_4844; // 041e:0664
db dummyf_4845[427];
db dummyf_49f0; // 041e:0810
db dummyf_49f1; // 041e:0811
db dummyf_49f2; // 041e:0812
db dummyf_49f3; // 041e:0813
db dummyf_49f4; // 041e:0814
db dummyf_49f5; // 041e:0815
db dummyf_49f6; // 041e:0816
db dummyf_49f7; // 041e:0817
db dummyf_49f8; // 041e:0818
db dummyf_49f9; // 041e:0819
db dummyf_49fa; // 041e:081a
db dummyf_49fb; // 041e:081b
db dummyf_49fc; // 041e:081c
db dummyf_49fd; // 041e:081d
db dummyf_49fe;
db dummyf_49ff; // 041e:081f
db dummyf_4a00; // 041e:0820
db dummyf_4a01; // 041e:0821
db dummyf_4a02; // 041e:0822
db dummyf_4a03; // 041e:0823
db dummyf_4a04; // 041e:0824
db dummyf_4a05; // 041e:0825
db dummyf_4a06; // 041e:0826
db dummyf_4a07; // 041e:0827
db dummyf_4a08; // 041e:0828
db dummyf_4a09; // 041e:0829
db dummyf_4a0a[91];
db dummyf_4a65; // 041e:0885
db dummyf_4a66; // 041e:0886
db dummyf_4a67; // 041e:0887
db dummyf_4a68; // 041e:0888
db dummyf_4a69; // 041e:0889
db dummyf_4a6a; // 041e:088a
db dummyf_4a6b; // 041e:088b
db dummyf_4a6c; // 041e:088c
db dummyf_4a6d; // 041e:088d
db dummyf_4a6e; // 041e:088e
db dummyf_4a6f;
db dummyf_4a70; // 041e:0890
db dummyf_4a71; // 041e:0891
db dummyf_4a72[713];
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
db dummyf_52be[118];
db dummyf_5334[32]; // 041e:1154
db dummyf_5354[32]; // 041e:1174
db dummyf_5374; // 041e:1194
db dummyf_5375; // 041e:1195
db dummyf_5376; // 041e:1196
db dummyf_5377; // 041e:1197
db dummyf_5378; // 041e:1198
db dummyf_5379; // 041e:1199
db dummyf_537a; // 041e:119a
db dummyf_537b; // 041e:119b
db dummyf_537c; // 041e:119c
db dummyf_537d; // 041e:119d
db dummyf_537e; // 041e:119e
db dummyf_537f; // 041e:119f
db dummyf_5380; // 041e:11a0
db dummyf_5381; // 041e:11a1
db dummyf_5382; // 041e:11a2
db dummyf_5383; // 041e:11a3
db dummyf_5384; // 041e:11a4
db dummyf_5385; // 041e:11a5
db dummyf_5386; // 041e:11a6
db dummyf_5387; // 041e:11a7
db dummyf_5388; // 041e:11a8
db dummyf_5389; // 041e:11a9
db dummyf_538a; // 041e:11aa
db dummyf_538b; // 041e:11ab
db dummyf_538c; // 041e:11ac
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
db dummyf_56fb[32]; // 041e:151b
db dummyf_571b[32]; // 041e:153b
db dummyf_573b[32]; // 041e:155b
db dummyf_575b[32]; // 041e:157b
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
db dummyf_5792; // 041e:15b2
db dummyf_5793; // 041e:15b3
db dummyf_5794;
db dummyf_5795;
db dummyf_5796;
db dummyf_5797;
db dummyf_5798[13]; // 041e:15b8
db dummyf_57a5[11]; // 041e:15b8
db __acopyrightc1988; // 041e:15d0
db dummyf_57b1[32]; // 041e:15d1
db dummyf_57d1; // 041e:15f1
db dummyf_57d2; // 041e:15f2
db dummyf_57d3; // 041e:15f3
db dummyf_57d4; // 041e:15f4
db dummyf_57d5; // 041e:15f5
db dummyf_57d6; // 041e:15f6
db dummyf_57d7; // 041e:15f7
db dummyf_57d8; // 041e:15f8
db dummyf_57d9; // 041e:15f9
db dummyf_57da; // 041e:15fa
db dummyf_57db; // 041e:15fb
db dummyf_57dc; // 041e:15fc
db dummyf_57dd; // 041e:15fd
db dummyf_57de; // 041e:15fe
db dummyf_57df; // 041e:15ff
db dummyf_57e0; // 041e:1600
db dummyf_57e1; // 041e:1601
db dummyf_57e2; // 041e:1602
db dummyf_57e3; // 041e:1603
db dummyf_57e4; // 041e:1604
db dummyf_57e5; // 041e:1605
db dummyf_57e6; // 041e:1606
db dummyf_57e7; // 041e:1607
db dummyf_57e8; // 041e:1608
db dummyf_57e9; // 041e:1609
db dummyf_57ea; // 041e:160a
db dummyf_57eb; // 041e:160b
db dummyf_57ec; // 041e:160c
db dummyf_57ed; // 041e:160d
db dummyf_57ee; // 041e:160e
db dummyf_57ef;
db dummyf_57f0[69];
db dummyf_5835[32]; // 041e:1655
db dummyf_5855[32]; // 041e:1675
db dummyf_5875[32]; // 041e:1695
db dummyf_5895; // 041e:16b5
db dummyf_5896; // 041e:16b6
db dummyf_5897; // 041e:16b7
db dummyf_5898; // 041e:16b8
db dummyf_5899; // 041e:16b9
db dummyf_589a; // 041e:16ba
db dummyf_589b; // 041e:16bb
db dummyf_589c; // 041e:16bc
db dummyf_589d; // 041e:16bd
db dummyf_589e; // 041e:16be
db dummyf_589f;
db dummyf_58a0; // 041e:16c0
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
db __amgraphicexe091; // 058b:0000
db dummyf_58b1[32]; // 058b:0001
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
db dummyf_596a[32]; // 058b:00ba
db dummyf_598a[32]; // 058b:00da
db dummyf_59aa[32]; // 058b:00fa
db dummyf_59ca[32]; // 058b:011a
db dummyf_59ea[32]; // 058b:013a
db dummyf_5a0a[32]; // 058b:015a
db dummyf_5a2a[32]; // 058b:017a
db dummyf_5a4a[32]; // 058b:019a
db dummyf_5a6a[32]; // 058b:01ba
db dummyf_5a8a[32]; // 058b:01da
db dummyf_5aaa[32]; // 058b:01fa
db dummyf_5aca[32]; // 058b:021a
db dummyf_5aea[32]; // 058b:023a
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
db dummyf_5bef[32]; // 058b:033f
db dummyf_5c0f;
db dummyf_5c10; // 058b:0360
db dummyf_5c11;
db dummyf_5c12;
db dummyf_5c13; // 058b:0363
db dummyf_5c14; // 058b:0364
db dummyf_5c15; // 058b:0365
db dummyf_5c16; // 058b:0366
db dummyf_5c17; // 058b:0367
db dummyf_5c18; // 058b:0368
db unk_141f9; // 058b:0369
db dummyf_5c1a; // 058b:036a
db dummyf_5c1b; // 058b:036b
db dummyf_5c1c; // 058b:036c
db dummyf_5c1d; // 058b:036d
db dummyf_5c1e; // 058b:036e
db dummyf_5c1f; // 058b:036f
db dummyf_5c20; // 058b:0370
db dummyf_5c21; // 058b:0371
db dummyf_5c22; // 058b:0372
db dummyf_5c23; // 058b:0373
db dummyf_5c24; // 058b:0374
db dummyf_5c25; // 058b:0375
db dummyf_5c26; // 058b:0376
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
db dummyf_5ce9[32]; // 058b:0439
db dummyf_5d09; // 058b:0459
db dummyf_5d0a; // 058b:045a
db dummyf_5d0b; // 058b:045b
db dummyf_5d0c; // 058b:045c
db dummyf_5d0d; // 058b:045d
db dummyf_5d0e; // 058b:045e
db dummyf_5d0f;
db dummyf_5d10; // 058b:0460
db byte_142f1; // 058b:0461
db dummyf_5d12[32]; // 058b:0462
db dummyf_5d32[32]; // 058b:0482
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
db dummyf_5dfc[32]; // 058b:054c
db dummyf_5e1c[32]; // 058b:056c
db dummyf_5e3c[32]; // 058b:058c
db dummyf_5e5c[32]; // 058b:05ac
db dummyf_5e7c[32]; // 058b:05cc
db dummyf_5e9c; // 058b:05ec
db dummyf_5e9d; // 058b:05ed
db dummyf_5e9e; // 058b:05ee
db dummyf_5e9f; // 058b:05ef
db dummyf_5ea0; // 058b:05f0
db dummyf_5ea1; // 058b:05f1
db dummyf_5ea2; // 058b:05f2
db dummyf_5ea3; // 058b:05f3
db dummyf_5ea4; // 058b:05f4
db dummyf_5ea5; // 058b:05f5
db dummyf_5ea6; // 058b:05f6
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
db dummyf_5ee6[32]; // 058b:0636
db dummyf_5f06[32]; // 058b:0656
db dummyf_5f26[32]; // 058b:0676
db dummyf_5f46; // 058b:0696
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
db dummyf_5fe7[32]; // 058b:0737
db dummyf_6007[32]; // 058b:0757
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
db dummyf_618c[32]; // 058b:08dc
db dummyf_61ac[32]; // 058b:08fc
db dummyf_61cc[32]; // 058b:091c
db dummyf_61ec[32]; // 058b:093c
db dummyf_620c[32]; // 058b:095c
db dummyf_622c[32]; // 058b:097c
db dummyf_624c[32]; // 058b:099c
db dummyf_626c[32]; // 058b:09bc
db dummyf_628c[32]; // 058b:09dc
db dummyf_62ac[32]; // 058b:09fc
db dummyf_62cc[32]; // 058b:0a1c
db dummyf_62ec[32]; // 058b:0a3c
db dummyf_630c[32]; // 058b:0a5c
db dummyf_632c[32]; // 058b:0a7c
db dummyf_634c[32]; // 058b:0a9c
db dummyf_636c[32]; // 058b:0abc
db dummyf_638c[32]; // 058b:0adc
db dummyf_63ac[32]; // 058b:0afc
db dummyf_63cc[32]; // 058b:0b1c
db dummyf_63ec[32]; // 058b:0b3c
db dummyf_640c[32]; // 058b:0b5c
db dummyf_642c[32]; // 058b:0b7c
db dummyf_644c[32]; // 058b:0b9c
db dummyf_646c[32]; // 058b:0bbc
db dummyf_648c[32]; // 058b:0bdc
db dummyf_64ac[32]; // 058b:0bfc
db dummyf_64cc[32]; // 058b:0c1c
db dummyf_64ec[32]; // 058b:0c3c
db dummyf_650c[32]; // 058b:0c5c
db dummyf_652c[32]; // 058b:0c7c
db dummyf_654c[32]; // 058b:0c9c
db dummyf_656c[32]; // 058b:0cbc
db dummyf_658c[32]; // 058b:0cdc
db dummyf_65ac[32]; // 058b:0cfc
db dummyf_65cc[32]; // 058b:0d1c
db dummyf_65ec[32]; // 058b:0d3c
db dummyf_660c[32]; // 058b:0d5c
db dummyf_662c[32]; // 058b:0d7c
db dummyf_664c[32]; // 058b:0d9c
db dummyf_666c[32]; // 058b:0dbc
db dummyf_668c[32]; // 058b:0ddc
db dummyf_66ac[32]; // 058b:0dfc
db dummyf_66cc[32]; // 058b:0e1c
db dummyf_66ec[32]; // 058b:0e3c
db dummyf_670c[32]; // 058b:0e5c
db dummyf_672c[32]; // 058b:0e7c
db dummyf_674c[32]; // 058b:0e9c
db dummyf_676c[32]; // 058b:0ebc
db dummyf_678c[32]; // 058b:0edc
db dummyf_67ac[32]; // 058b:0efc
db dummyf_67cc[32]; // 058b:0f1c
db dummyf_67ec[32]; // 058b:0f3c
db dummyf_680c[32]; // 058b:0f5c
db dummyf_682c[32]; // 058b:0f7c
db dummyf_684c[32]; // 058b:0f9c
db dummyf_686c[32]; // 058b:0fbc
db dummyf_688c[32]; // 058b:0fdc
db dummyf_68ac[32]; // 058b:0ffc
db dummyf_68cc[32]; // 058b:101c
db dummyf_68ec[32]; // 058b:103c
db dummyf_690c[32]; // 058b:105c
db dummyf_692c[32]; // 058b:107c
db dummyf_694c[32]; // 058b:109c
db dummyf_696c[32]; // 058b:10bc
db dummyf_698c[32]; // 058b:10dc
db dummyf_69ac[32]; // 058b:10fc
db dummyf_69cc[32]; // 058b:111c
db dummyf_69ec[32]; // 058b:113c
db dummyf_6a0c[32]; // 058b:115c
db dummyf_6a2c[32]; // 058b:117c
db dummyf_6a4c[32]; // 058b:119c
db dummyf_6a6c[32]; // 058b:11bc
db dummyf_6a8c[32]; // 058b:11dc
db dummyf_6aac[32]; // 058b:11fc
db dummyf_6acc[32]; // 058b:121c
db dummyf_6aec[32]; // 058b:123c
db dummyf_6b0c[32]; // 058b:125c
db dummyf_6b2c[32]; // 058b:127c
db dummyf_6b4c[32]; // 058b:129c
db dummyf_6b6c[32]; // 058b:12bc
db dummyf_6b8c[32]; // 058b:12dc
db dummyf_6bac[32]; // 058b:12fc
db dummyf_6bcc[32]; // 058b:131c
db dummyf_6bec[32]; // 058b:133c
db dummyf_6c0c[32]; // 058b:135c
db dummyf_6c2c[32]; // 058b:137c
db dummyf_6c4c[32]; // 058b:139c
db dummyf_6c6c[32]; // 058b:13bc
db dummyf_6c8c[32]; // 058b:13dc
db dummyf_6cac[32]; // 058b:13fc
db dummyf_6ccc[32]; // 058b:141c
db dummyf_6cec[32]; // 058b:143c
db dummyf_6d0c[32]; // 058b:145c
db dummyf_6d2c[32]; // 058b:147c
db dummyf_6d4c[32]; // 058b:149c
db dummyf_6d6c[32]; // 058b:14bc
db dummyf_6d8c[32]; // 058b:14dc
db dummyf_6dac[32]; // 058b:14fc
db dummyf_6dcc[32]; // 058b:151c
db dummyf_6dec[32]; // 058b:153c
db dummyf_6e0c[32]; // 058b:155c
db dummyf_6e2c[32]; // 058b:157c
db dummyf_6e4c[32]; // 058b:159c
db dummyf_6e6c[32]; // 058b:15bc
db dummyf_6e8c[32]; // 058b:15dc
db dummyf_6eac[32]; // 058b:15fc
db dummyf_6ecc[32]; // 058b:161c
db dummyf_6eec[32]; // 058b:163c
db dummyf_6f0c[32]; // 058b:165c
db dummyf_6f2c[32]; // 058b:167c
db dummyf_6f4c[32]; // 058b:169c
db dummyf_6f6c[32]; // 058b:16bc
db dummyf_6f8c[32]; // 058b:16dc
db dummyf_6fac[32]; // 058b:16fc
db dummyf_6fcc[32]; // 058b:171c
db dummyf_6fec[32]; // 058b:173c
db dummyf_700c[32]; // 058b:175c
db dummyf_702c[32]; // 058b:177c
db dummyf_704c[32]; // 058b:179c
db dummyf_706c[32]; // 058b:17bc
db dummyf_708c[32]; // 058b:17dc
db dummyf_70ac[32]; // 058b:17fc
db dummyf_70cc[32]; // 058b:181c
db dummyf_70ec[32]; // 058b:183c
db dummyf_710c[32]; // 058b:185c
db dummyf_712c[32]; // 058b:187c
db dummyf_714c[32]; // 058b:189c
db dummyf_716c[32]; // 058b:18bc
db dummyf_718c[32]; // 058b:18dc
db dummyf_71ac[32]; // 058b:18fc
db dummyf_71cc[32]; // 058b:191c
db dummyf_71ec[32]; // 058b:193c
db dummyf_720c[32]; // 058b:195c
db dummyf_722c[32]; // 058b:197c
db dummyf_724c[32]; // 058b:199c
db dummyf_726c[32]; // 058b:19bc
db dummyf_728c[32]; // 058b:19dc
db dummyf_72ac[32]; // 058b:19fc
db dummyf_72cc[32]; // 058b:1a1c
db dummyf_72ec[32]; // 058b:1a3c
db dummyf_730c[32]; // 058b:1a5c
db dummyf_732c[32]; // 058b:1a7c
db dummyf_734c[32]; // 058b:1a9c
db dummyf_736c[32]; // 058b:1abc
db dummyf_738c[32]; // 058b:1adc
db dummyf_73ac[32]; // 058b:1afc
db dummyf_73cc[32]; // 058b:1b1c
db dummyf_73ec[32]; // 058b:1b3c
db dummyf_740c; // 058b:1b5c
db dummyf_740d; // 058b:1b5d
db dummyf_740e; // 058b:1b5e
db dummyf_740f; // 058b:1b5f
db dummyf_7410; // 058b:1b60
db dummyf_7411; // 058b:1b61
db dummyf_7412; // 058b:1b62
db dummyf_7413; // 058b:1b63
db dummyf_7414; // 058b:1b64
db dummyf_7415; // 058b:1b65
db dummyf_7416; // 058b:1b66
db dummyf_7417; // 058b:1b67
db dummyf_7418; // 058b:1b68
db dummyf_7419; // 058b:1b69
db dummyf_741a; // 058b:1b6a
db dummyf_741b; // 058b:1b6b
db dummyf_741c; // 058b:1b6c
db dummyf_741d; // 058b:1b6d
dw word_159fe; // 058b:1b6e
dw word_15a00; // 058b:1b70
dw word_15a02; // 058b:1b72
dw word_15a04; // 058b:1b74
dw word_15a06; // 058b:1b76
dw word_15a08; // 058b:1b78
db byte_15a0a; // 058b:1b7a
db dummyf_742b[32]; // 058b:1b7b
db dummyf_744b[32]; // 058b:1b9b
db dummyf_746b[32]; // 058b:1bbb
db dummyf_748b[32]; // 058b:1bdb
db dummyf_74ab[32]; // 058b:1bfb
db dummyf_74cb[32]; // 058b:1c1b
db dummyf_74eb[32]; // 058b:1c3b
db dummyf_750b; // 058b:1c5b
db dummyf_750c; // 058b:1c5c
db dummyf_750d; // 058b:1c5d
db dummyf_750e; // 058b:1c5e
db dummyf_750f; // 058b:1c5f
db dummyf_7510; // 058b:1c60
db dummyf_7511; // 058b:1c61
db dummyf_7512; // 058b:1c62
db dummyf_7513;
db dummyf_7514;
db dummyf_7515;
db dummyf_7516; // 058b:1c66
db dummyf_7517; // 058b:1c67
db dummyf_7518; // 058b:1c68
db dummyf_7519; // 058b:1c69
db dummyf_751a; // 058b:1c6a
db dummyf_751b; // 058b:1c6b
db dummyf_751c; // 058b:1c6c
db dummyf_751d; // 058b:1c6d
db dummyf_751e; // 058b:1c6e
db dummyf_751f; // 058b:1c6f
db dummyf_7520; // 058b:1c70
db dummyf_7521; // 058b:1c71
db dummyf_7522; // 058b:1c72
db dummyf_7523; // 058b:1c73
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
db dummyf_7574[32]; // 058b:1cc4
db dummyf_7594; // 058b:1ce4
db dummyf_7595; // 058b:1ce5
db dummyf_7596; // 058b:1ce6
db dummyf_7597; // 058b:1ce7
db dummyf_7598; // 058b:1ce8
db dummyf_7599; // 058b:1ce9
db dummyf_759a; // 058b:1cea
db dummyf_759b; // 058b:1ceb
db dummyf_759c; // 058b:1cec
db dummyf_759d; // 058b:1ced
db dummyf_759e; // 058b:1cee
db dummyf_759f; // 058b:1cef
db dummyf_75a0; // 058b:1cf0
db dummyf_75a1; // 058b:1cf1
db dummyf_75a2; // 058b:1cf2
db dummyf_75a3; // 058b:1cf3
db dummyf_75a4; // 058b:1cf4
db dummyf_75a5; // 058b:1cf5
db dummyf_75a6; // 058b:1cf6
db dummyf_75a7; // 058b:1cf7
db dummyf_75a8; // 058b:1cf8
db dummyf_75a9; // 058b:1cf9
db dummyf_75aa; // 058b:1cfa
db dummyf_75ab; // 058b:1cfb
db dummyf_75ac; // 058b:1cfc
db dummyf_75ad; // 058b:1cfd
db dummyf_75ae; // 058b:1cfe
db dummyf_75af; // 058b:1cff
db __ahtsreserved; // 075b:0000
db dummyf_75b1; // 075b:0001
db dummyf_75b2; // 075b:0002
db dummyf_75b3; // 075b:0003
db dummyf_75b4; // 075b:0004
db dummyf_75b5; // 075b:0005
db dummyf_75b6; // 075b:0006
db dummyf_75b7; // 075b:0007
db dummyf_75b8; // 075b:0008
db dummyf_75b9; // 075b:0009
db dummyf_75ba; // 075b:000a
db dummyf_75bb; // 075b:000b
db dummyf_75bc; // 075b:000c
db dummyf_75bd;
db dummyf_75be[2];
db byte_15ba0[13]; // 075b:0010
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
db dummyf_774c[7]; // 075b:0010
db dummyf_7753[33];
db dummyf_7774; // 075b:01c4
db dummyf_7775[13];
db byte_15d62; // 075b:01d2
db dummyf_7783; // 075b:01d3
db _unk_15d64; // 075b:01d4
db dummyf_7785; // 075b:01d5
db dummyf_7786;
db dummyf_7787;
db dummyf_7788; // 075b:01d8
db dummyf_7789;
db unk_15d6a; // 075b:01da
db dummyf_778b;
db dummyf_778c; // 075b:01dc
db dummyf_778d;
db dummyf_778e;
db dummyf_778f;
db dummyf_7790; // 075b:01e0
db dummyf_7791; // 075b:01e1
db dummyf_7792; // 075b:01e2
db dummyf_7793; // 075b:01e3
db dummyf_7794; // 075b:01e4
db dummyf_7795; // 075b:01e5
db dummyf_7796; // 075b:01e6
db dummyf_7797; // 075b:01e7
db dummyf_7798; // 075b:01e8
db dummyf_7799; // 075b:01e9
db dummyf_779a; // 075b:01ea
db dummyf_779b; // 075b:01eb
db dummyf_779c; // 075b:01ec
db dummyf_779d; // 075b:01ed
db dummyf_779e; // 075b:01ee
db dummyf_779f; // 075b:01ef
db dummyf_77a0; // 075b:01f0
db dummyf_77a1; // 075b:01f1
db dummyf_77a2; // 075b:01f2
db dummyf_77a3; // 075b:01f3
db dummyf_77a4; // 075b:01f4
db dummyf_77a5[5];
db dummyf_77aa; // 075b:01fa
db dummyf_77ab; // 075b:01fb
db dummyf_77ac; // 075b:01fc
db dummyf_77ad; // 075b:01fd
db dummyf_77ae; // 075b:01fe
db dummyf_77af; // 075b:01ff
db dummyf_77b0; // 075b:0200
db dummyf_77b1; // 075b:0201
db dummyf_77b2; // 075b:0202
db dummyf_77b3; // 075b:0203
db dummyf_77b4[18];
db dummyf_77c6; // 075b:0216
db dummyf_77c7; // 075b:0217
db dummyf_77c8;
db dummyf_77c9; // 075b:0219
db dummyf_77ca; // 075b:021a
db dummyf_77cb; // 075b:021b
db dummyf_77cc; // 075b:021c
db dummyf_77cd; // 075b:021d
db dummyf_77ce; // 075b:021e
db dummyf_77cf; // 075b:021f
db dummyf_77d0; // 075b:0220
db dummyf_77d1; // 075b:0221
db dummyf_77d2; // 075b:0222
db dummyf_77d3; // 075b:0223
db dummyf_77d4; // 075b:0224
db dummyf_77d5; // 075b:0225
db dummyf_77d6; // 075b:0226
db dummyf_77d7; // 075b:0227
db dummyf_77d8; // 075b:0228
db dummyf_77d9; // 075b:0229
db dummyf_77da[164];
db dummyf_787e; // 075b:02ce
db dummyf_787f; // 075b:02cf
db dummyf_7880; // 075b:02d0
db dummyf_7881; // 075b:02d1
db dummyf_7882; // 075b:02d2
db dummyf_7883; // 075b:02d3
db dummyf_7884; // 075b:02d4
db dummyf_7885; // 075b:02d5
db dummyf_7886; // 075b:02d6
db dummyf_7887; // 075b:02d7
db dummyf_7888; // 075b:02d8
db dummyf_7889; // 075b:02d9
db dummyf_788a[243];
db dummyf_797d; // 075b:03cd
db dummyf_797e; // 075b:03ce
db dummyf_797f; // 075b:03cf
db dummyf_7980; // 075b:03d0
db dummyf_7981; // 075b:03d1
db dummyf_7982;
db dummyf_7983; // 075b:03d3
db dummyf_7984; // 075b:03d4
db dummyf_7985;
db dummyf_7986; // 075b:03d6
db dummyf_7987; // 075b:03d7
db dummyf_7988;
db dummyf_7989; // 075b:03d9
db dummyf_798a; // 075b:03da
db dummyf_798b;
db dummyf_798c[141];
db dummyf_7a19; // 075b:0469
db dummyf_7a1a[242];
db dummyf_7b0c; // 075b:055c
db dummyf_7b0d[261];
db dummyf_7c12; // 075b:0662
db dummyf_7c13[30];
dw word_16211; // 075b:0681
db byte_16213[13]; // 075b:0683
db dummyf_7c40[11]; // 075b:0683
db dummyf_7c4b[11]; // 075b:0683
db dummyf_7c56[11]; // 075b:0683
db dummyf_7c61[12]; // 075b:0683
db dummyf_7c6d[11]; // 075b:0683
db dummyf_7c78[11]; // 075b:0683
db dummyf_7c83[11]; // 075b:0683
db dummyf_7c8e[10]; // 075b:0683
db dummyf_7c98[11]; // 075b:0683
db dummyf_7ca3[10]; // 075b:0683
db dummyf_7cad[11]; // 075b:0683
db dummyf_7cb8[10]; // 075b:0683
db dummyf_7cc2[12]; // 075b:0683
db dummyf_7cce[7]; // 075b:0683
db dummyf_7cd5[47];
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
db dummyf_7d65[228];
db dummyf_7e49; // 075b:0899
db dummyf_7e4a; // 075b:089a
db dummyf_7e4b; // 075b:089b
db dummyf_7e4c;
db dummyf_7e4d; // 075b:089d
db dummyf_7e4e; // 075b:089e
db dummyf_7e4f; // 075b:089f
db dummyf_7e50; // 075b:08a0
db dummyf_7e51; // 075b:08a1
db dummyf_7e52; // 075b:08a2
db dummyf_7e53; // 075b:08a3
db dummyf_7e54; // 075b:08a4
db dummyf_7e55; // 075b:08a5
db dummyf_7e56; // 075b:08a6
db dummyf_7e57; // 075b:08a7
db dummyf_7e58[186];
db dummyf_7f12; // 075b:0962
db dummyf_7f13[79];
db dummyf_7f62[11]; // 075b:09b2
db dummyf_7f6d[10]; // 075b:09b2
db dummyf_7f77[11]; // 075b:09b2
db dummyf_7f82[10]; // 075b:09b2
db dummyf_7f8c[11]; // 075b:09b2
db dummyf_7f97[10]; // 075b:09b2
db dummyf_7fa1[10]; // 075b:09b2
db dummyf_7fab[10]; // 075b:09b2
db dummyf_7fb5[11]; // 075b:09b2
db dummyf_7fc0[11]; // 075b:09b2
db dummyf_7fcb[10]; // 075b:09b2
db dummyf_7fd5[10]; // 075b:09b2
db dummyf_7fdf[11]; // 075b:09b2
db dummyf_7fea[10]; // 075b:09b2
db dummyf_7ff4[12]; // 075b:09b2
db dummyf_8000[10]; // 075b:09b2
db dummyf_800a[11]; // 075b:09b2
db dummyf_8015[11]; // 075b:09b2
db dummyf_8020[11]; // 075b:09b2
db dummyf_802b[11]; // 075b:09b2
db dummyf_8036[12]; // 075b:09b2
db dummyf_8042[9]; // 075b:09b2
db dummyf_804b[11]; // 075b:09b2
db dummyf_8056[12]; // 075b:09b2
db dummyf_8062[10]; // 075b:09b2
db dummyf_806c[10]; // 075b:09b2
db dummyf_8076[11]; // 075b:09b2
db dummyf_8081[10]; // 075b:09b2
db dummyf_808b[35]; // 075b:09b2
db dummyf_80ae[40]; // 075b:09b2
db dummyf_80d6[31]; // 075b:09b2
db dummyf_80f5[39]; // 075b:09b2
db dummyf_811c[34]; // 075b:09b2
db dummyf_813e[98]; // 075b:09b2
db dummyf_81a0[78]; // 075b:09b2
db dummyf_81ee[40]; // 075b:09b2
db dummyf_8216[31]; // 075b:09b2
db dummyf_8235[39]; // 075b:09b2
db dummyf_825c[34]; // 075b:09b2
db dummyf_827e[78]; // 075b:09b2
db dummyf_82cc[78]; // 075b:09b2
db dummyf_831a[20]; // 075b:09b2
db dummyf_832e[20]; // 075b:09b2
db dummyf_8342[20]; // 075b:09b2
db dummyf_8356[19]; // 075b:09b2
db dummyf_8369[21]; // 075b:09b2
db dummyf_837e[20]; // 075b:09b2
db dummyf_8392[36]; // 075b:09b2
db dummyf_83b6[12]; // 075b:09b2
db dummyf_83c2[103]; // 075b:09b2
db dummyf_8429[70]; // 075b:09b2
db dummyf_846f[40]; // 075b:09b2
db dummyf_8497[40]; // 075b:09b2
db dummyf_84bf[153]; // 075b:09b2
db dummyf_8558[77]; // 075b:09b2
db dummyf_85a5[40]; // 075b:09b2
db dummyf_85cd[40]; // 075b:09b2
db dummyf_85f5[48]; // 075b:09b2
db dummyf_8625[6]; // 075b:09b2
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
db byte_19b63; // 075b:3fd3
db dummyf_b584[32]; // 075b:3fd4
db dummyf_b5a4[32]; // 075b:3ff4
db dummyf_b5c4[32]; // 075b:4014
db dummyf_b5e4[32]; // 075b:4034
db dummyf_b604[32]; // 075b:4054
db dummyf_b624[32]; // 075b:4074
db dummyf_b644[32]; // 075b:4094
db dummyf_b664[32]; // 075b:40b4
db dummyf_b684[32]; // 075b:40d4
db dummyf_b6a4[32]; // 075b:40f4
db dummyf_b6c4[32]; // 075b:4114
db dummyf_b6e4[32]; // 075b:4134
db dummyf_b704[32]; // 075b:4154
db dummyf_b724[32]; // 075b:4174
db dummyf_b744[32]; // 075b:4194
db dummyf_b764[32]; // 075b:41b4
db dummyf_b784[32]; // 075b:41d4
db dummyf_b7a4[32]; // 075b:41f4
db dummyf_b7c4[32]; // 075b:4214
db dummyf_b7e4[32]; // 075b:4234
db dummyf_b804;
db dummyf_b805;
db dummyf_b806;
db dummyf_b807;
db dummyf_b808;
db dummyf_b809;
db dummyf_b80a; // 075b:425a
db dummyf_b80b; // 075b:425b
db dummyf_b80c; // 075b:425c
db dummyf_b80d;
db dummyf_b80e;
db dummyf_b80f;
db dummyf_b810;
db byte_19df1; // 075b:4261
db dummyf_b812;
db dummyf_b813;
db dummyf_b814;
db _unk_19df5; // 075b:4265
db dummyf_b816[32]; // 075b:4266
db dummyf_b836[32]; // 075b:4286
db dummyf_b856[32]; // 075b:42a6
db dummyf_b876[32]; // 075b:42c6
db dummyf_b896[32]; // 075b:42e6
db dummyf_b8b6[32]; // 075b:4306
db dummyf_b8d6[32]; // 075b:4326
db dummyf_b8f6[32]; // 075b:4346
db dummyf_b916[32]; // 075b:4366
db dummyf_b936[32]; // 075b:4386
db dummyf_b956[32]; // 075b:43a6
db dummyf_b976[32]; // 075b:43c6
db dummyf_b996[32]; // 075b:43e6
db dummyf_b9b6[32]; // 075b:4406
db dummyf_b9d6[32]; // 075b:4426
db dummyf_b9f6[32]; // 075b:4446
db dummyf_ba16[32]; // 075b:4466
db dummyf_ba36[32]; // 075b:4486
db dummyf_ba56[32]; // 075b:44a6
db dummyf_ba76[32]; // 075b:44c6
db dummyf_ba96[32]; // 075b:44e6
db dummyf_bab6[32]; // 075b:4506
db dummyf_bad6[32]; // 075b:4526
db dummyf_baf6[32]; // 075b:4546
db dummyf_bb16[32]; // 075b:4566
db dummyf_bb36[32]; // 075b:4586
db dummyf_bb56[32]; // 075b:45a6
db dummyf_bb76[32]; // 075b:45c6
db dummyf_bb96[32]; // 075b:45e6
db dummyf_bbb6[32]; // 075b:4606
db dummyf_bbd6[32]; // 075b:4626
db dummyf_bbf6[32]; // 075b:4646
db dummyf_bc16[32]; // 075b:4666
db dummyf_bc36[32]; // 075b:4686
db dummyf_bc56[32]; // 075b:46a6
db dummyf_bc76[32]; // 075b:46c6
db dummyf_bc96[32]; // 075b:46e6
db dummyf_bcb6[32]; // 075b:4706
db dummyf_bcd6[32]; // 075b:4726
db dummyf_bcf6[32]; // 075b:4746
db dummyf_bd16[32]; // 075b:4766
db dummyf_bd36[32]; // 075b:4786
db dummyf_bd56[32]; // 075b:47a6
db dummyf_bd76[32]; // 075b:47c6
db dummyf_bd96[32]; // 075b:47e6
db dummyf_bdb6[32]; // 075b:4806
db dummyf_bdd6[32]; // 075b:4826
db dummyf_bdf6[32]; // 075b:4846
db dummyf_be16[32]; // 075b:4866
db dummyf_be36[32]; // 075b:4886
db dummyf_be56[32]; // 075b:48a6
db dummyf_be76[32]; // 075b:48c6
db dummyf_be96[32]; // 075b:48e6
db dummyf_beb6[32]; // 075b:4906
db dummyf_bed6[32]; // 075b:4926
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
db dummyf_bf08[32]; // 075b:4958
db dummyf_bf28[32]; // 075b:4978
db dummyf_bf48[32]; // 075b:4998
db dummyf_bf68[32]; // 075b:49b8
db dummyf_bf88[32]; // 075b:49d8
db dummyf_bfa8[32]; // 075b:49f8
db dummyf_bfc8[32]; // 075b:4a18
db dummyf_bfe8[32]; // 075b:4a38
db dummyf_c008[32]; // 075b:4a58
db dummyf_c028[32]; // 075b:4a78
db dummyf_c048[32]; // 075b:4a98
db dummyf_c068[32]; // 075b:4ab8
db dummyf_c088[32]; // 075b:4ad8
db dummyf_c0a8[32]; // 075b:4af8
db dummyf_c0c8[32]; // 075b:4b18
db dummyf_c0e8[32]; // 075b:4b38
db dummyf_c108[32]; // 075b:4b58
db dummyf_c128[32]; // 075b:4b78
db dummyf_c148[32]; // 075b:4b98
db dummyf_c168[32]; // 075b:4bb8
db dummyf_c188[32]; // 075b:4bd8
db dummyf_c1a8[32]; // 075b:4bf8
db dummyf_c1c8[32]; // 075b:4c18
db dummyf_c1e8[32]; // 075b:4c38
db dummyf_c208[32]; // 075b:4c58
db dummyf_c228;
db dummyf_c229;
db dummyf_c22a;
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
db dummyf_c2bc[32]; // 075b:4d0c
db dummyf_c2dc[32]; // 075b:4d2c
db dummyf_c2fc[32]; // 075b:4d4c
db dummyf_c31c[32]; // 075b:4d6c
db dummyf_c33c[32]; // 075b:4d8c
db dummyf_c35c[32]; // 075b:4dac
db dummyf_c37c[32]; // 075b:4dcc
db dummyf_c39c[32]; // 075b:4dec
db dummyf_c3bc[32]; // 075b:4e0c
db dummyf_c3dc[32]; // 075b:4e2c
db dummyf_c3fc[32]; // 075b:4e4c
db dummyf_c41c[32]; // 075b:4e6c
db dummyf_c43c[32]; // 075b:4e8c
db dummyf_c45c[32]; // 075b:4eac
db dummyf_c47c[32]; // 075b:4ecc
db dummyf_c49c[32]; // 075b:4eec
db dummyf_c4bc[32]; // 075b:4f0c
db dummyf_c4dc[32]; // 075b:4f2c
db dummyf_c4fc[32]; // 075b:4f4c
db dummyf_c51c[32]; // 075b:4f6c
db dummyf_c53c[32]; // 075b:4f8c
db dummyf_c55c[32]; // 075b:4fac
db dummyf_c57c[32]; // 075b:4fcc
db dummyf_c59c[32]; // 075b:4fec
db dummyf_c5bc[32]; // 075b:500c
db dummyf_c5dc[32]; // 075b:502c
db dummyf_c5fc[32]; // 075b:504c
db dummyf_c61c[32]; // 075b:506c
db dummyf_c63c[32]; // 075b:508c
db dummyf_c65c[32]; // 075b:50ac
db dummyf_c67c[32]; // 075b:50cc
db dummyf_c69c[32]; // 075b:50ec
db dummyf_c6bc[32]; // 075b:510c
db dummyf_c6dc[32]; // 075b:512c
db dummyf_c6fc[32]; // 075b:514c
db dummyf_c71c[32]; // 075b:516c
db dummyf_c73c[32]; // 075b:518c
db dummyf_c75c[32]; // 075b:51ac
db dummyf_c77c[32]; // 075b:51cc
db dummyf_c79c[32]; // 075b:51ec
db dummyf_c7bc[32]; // 075b:520c
db dummyf_c7dc[32]; // 075b:522c
db dummyf_c7fc[32]; // 075b:524c
db dummyf_c81c[32]; // 075b:526c
db dummyf_c83c[32]; // 075b:528c
db dummyf_c85c[32]; // 075b:52ac
db dummyf_c87c[32]; // 075b:52cc
db dummyf_c89c[32]; // 075b:52ec
db dummyf_c8bc[32]; // 075b:530c
db dummyf_c8dc;
db dummyf_c8dd;
db dummyf_c8de;
db dummyf_c8df;
db dummyf_c8e0;
db dummyf_c8e1;
db dummyf_c8e2;
db dummyf_c8e3;
db dummyf_c8e4;
db dummyf_c8e5;
db dummyf_c8e6;
db dummyf_c8e7;
db dummyf_c8e8;
db dummyf_c8e9;
db dummyf_c8ea;
db dummyf_c8eb;
db byte_1aecc; // 075b:533c
db dummyf_c8ed[32]; // 075b:533d
db dummyf_c90d[32]; // 075b:535d
db dummyf_c92d[32]; // 075b:537d
db dummyf_c94d[32]; // 075b:539d
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
db dummyf_ca37[32]; // 075b:5487
db dummyf_ca57; // 075b:54a7
db dummyf_ca58;
db dummyf_ca59;
db dummyf_ca5a;
db dummyf_ca5b;
db dummyf_ca5c; // 075b:54ac
db dummyf_ca5d; // 075b:54ad
db dummyf_ca5e; // 075b:54ae
db dummyf_ca5f; // 075b:54af
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
db dummyf_ca71[32]; // 075b:54c1
db dummyf_ca91[32]; // 075b:54e1
db dummyf_cab1;
db dummyf_cab2;
db dummyf_cab3;
db dummyf_cab4;
db dummyf_cab5;
db dummyf_cab6;
db dummyf_cab7;
db dummyf_cab8;
db dummyf_cab9;
db dummyf_caba;
db dummyf_cabb;
db dummyf_cabc;
db dummyf_cabd;
db dummyf_cabe;
db dummyf_cabf;
db dummyf_cac0;
db dummyf_cac1; // 075b:5511
db dummyf_cac2;
db dummyf_cac3;
db dummyf_cac4; // 075b:5514
db dummyf_cac5;
db dummyf_cac6; // 075b:5516
db dummyf_cac7;
db byte_1b0a8; // 075b:5518
db dummyf_cac9[32]; // 075b:5519
db dummyf_cae9[32]; // 075b:5539
db dummyf_cb09[32]; // 075b:5559
db dummyf_cb29[32]; // 075b:5579
db dummyf_cb49[32]; // 075b:5599
db dummyf_cb69[32]; // 075b:55b9
db dummyf_cb89[32]; // 075b:55d9
db dummyf_cba9[32]; // 075b:55f9
db dummyf_cbc9[32]; // 075b:5619
db dummyf_cbe9[32]; // 075b:5639
db dummyf_cc09[32]; // 075b:5659
db dummyf_cc29[32]; // 075b:5679
db dummyf_cc49[32]; // 075b:5699
db dummyf_cc69[32]; // 075b:56b9
db dummyf_cc89[32]; // 075b:56d9
db dummyf_cca9[32]; // 075b:56f9
db dummyf_ccc9[32]; // 075b:5719
db dummyf_cce9[32]; // 075b:5739
db dummyf_cd09[32]; // 075b:5759
db dummyf_cd29[32]; // 075b:5779
db dummyf_cd49[32]; // 075b:5799
db dummyf_cd69[32]; // 075b:57b9
db dummyf_cd89[32]; // 075b:57d9
db dummyf_cda9[32]; // 075b:57f9
db dummyf_cdc9[32]; // 075b:5819
db dummyf_cde9[32]; // 075b:5839
db dummyf_ce09[32]; // 075b:5859
db dummyf_ce29[32]; // 075b:5879
db dummyf_ce49[32]; // 075b:5899
db dummyf_ce69[32]; // 075b:58b9
db dummyf_ce89[32]; // 075b:58d9
db dummyf_cea9[32]; // 075b:58f9
db dummyf_cec9[32]; // 075b:5919
db dummyf_cee9[32]; // 075b:5939
db dummyf_cf09[32]; // 075b:5959
db dummyf_cf29[32]; // 075b:5979
db dummyf_cf49[32]; // 075b:5999
db dummyf_cf69[32]; // 075b:59b9
db dummyf_cf89[32]; // 075b:59d9
db dummyf_cfa9[32]; // 075b:59f9
db dummyf_cfc9[32]; // 075b:5a19
db dummyf_cfe9[32]; // 075b:5a39
db dummyf_d009[32]; // 075b:5a59
db dummyf_d029[32]; // 075b:5a79
db dummyf_d049[32]; // 075b:5a99
db dummyf_d069[32]; // 075b:5ab9
db dummyf_d089[32]; // 075b:5ad9
db dummyf_d0a9[32]; // 075b:5af9
db dummyf_d0c9[32]; // 075b:5b19
db dummyf_d0e9[32]; // 075b:5b39
db dummyf_d109[32]; // 075b:5b59
db dummyf_d129[32]; // 075b:5b79
db dummyf_d149[32]; // 075b:5b99
db dummyf_d169[32]; // 075b:5bb9
db dummyf_d189[32]; // 075b:5bd9
db dummyf_d1a9[32]; // 075b:5bf9
db dummyf_d1c9[32]; // 075b:5c19
db dummyf_d1e9[32]; // 075b:5c39
db dummyf_d209[32]; // 075b:5c59
db dummyf_d229[32]; // 075b:5c79
db dummyf_d249[32]; // 075b:5c99
db dummyf_d269[32]; // 075b:5cb9
db dummyf_d289[32]; // 075b:5cd9
db dummyf_d2a9[32]; // 075b:5cf9
db dummyf_d2c9[32]; // 075b:5d19
db dummyf_d2e9[32]; // 075b:5d39
db dummyf_d309[32]; // 075b:5d59
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
db dummyf_f32a[32]; // 075b:7d7a
db dummyf_f34a[32]; // 075b:7d9a
db dummyf_f36a[32]; // 075b:7dba
db dummyf_f38a[32]; // 075b:7dda
db dummyf_f3aa[32]; // 075b:7dfa
db dummyf_f3ca[32]; // 075b:7e1a
db dummyf_f3ea[32]; // 075b:7e3a
db dummyf_f40a[32]; // 075b:7e5a
db dummyf_f42a[32]; // 075b:7e7a
db dummyf_f44a[32]; // 075b:7e9a
db dummyf_f46a[32]; // 075b:7eba
db dummyf_f48a[32]; // 075b:7eda
db dummyf_f4aa[32]; // 075b:7efa
db dummyf_f4ca[32]; // 075b:7f1a
db dummyf_f4ea[32]; // 075b:7f3a
db dummyf_f50a[32]; // 075b:7f5a
db dummyf_f52a[32]; // 075b:7f7a
db dummyf_f54a[32]; // 075b:7f9a
db dummyf_f56a[32]; // 075b:7fba
db dummyf_f58a[32]; // 075b:7fda
db dummyf_f5aa[32]; // 075b:7ffa
db dummyf_f5ca[32]; // 075b:801a
db dummyf_f5ea[32]; // 075b:803a
db dummyf_f60a[32]; // 075b:805a
db dummyf_f62a[32]; // 075b:807a
db dummyf_f64a[32]; // 075b:809a
db dummyf_f66a[32]; // 075b:80ba
db dummyf_f68a[32]; // 075b:80da
db dummyf_f6aa[32]; // 075b:80fa
db dummyf_f6ca[32]; // 075b:811a
db dummyf_f6ea[32]; // 075b:813a
db dummyf_f70a[32]; // 075b:815a
db dummyf_f72a[32]; // 075b:817a
db dummyf_f74a[32]; // 075b:819a
db dummyf_f76a[32]; // 075b:81ba
db dummyf_f78a[32]; // 075b:81da
db dummyf_f7aa[32]; // 075b:81fa
db dummyf_f7ca[32]; // 075b:821a
db dummyf_f7ea[32]; // 075b:823a
db dummyf_f80a[32]; // 075b:825a
db dummyf_f82a[32]; // 075b:827a
db dummyf_f84a[32]; // 075b:829a
db dummyf_f86a[32]; // 075b:82ba
db dummyf_f88a;
db dummyf_f88b;
db dummyf_f88c;
db dummyf_f88d;
db dummyf_f88e;
db dummyf_f88f;
db dummyf_f890[2261]; // 075b:82e0
db _unk_1e745; // 075b:8bb5
db dummyf_10166[3097]; // 075b:8bb6
db _unk_1f35f; // 075b:97cf
db dummyf_10d80[26450]; // 075b:97d0
db byte_25ab2[1480]; // 075b:ff22
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
db byte_2623b; // 17c5:000b
db dummyf_17c5c;
db dummyf_17c5d;
db dummyf_17c5e;
db dummyf_17c5f;
db dummyf_17c60[591];
db dummyf_17eaf; // 17c5:025f
db dummyf_17eb0[40];
db __unk_264b8; // 17c5:0288
db dummyf_17ed9[43];
db dummyf_17f04; // 17c5:02b4
db dummyf_17f05; // 17c5:02b5
db dummyf_17f06[16];
db dummyf_17f16; // 17c5:02c6
db dummyf_17f17[26];
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
db dummyf_182eb; // 17c5:069b
db dummyf_182ec; // 17c5:069c
db dummyf_182ed; // 17c5:069d
db dummyf_182ee; // 17c5:069e
db dummyf_182ef; // 17c5:069f
db dummyf_182f0[83];
db dummyf_18343; // 17c5:06f3
db dummyf_18344; // 17c5:06f4
db dummyf_18345; // 17c5:06f5
db dummyf_18346; // 17c5:06f6
db dummyf_18347; // 17c5:06f7
db dummyf_18348; // 17c5:06f8
db dummyf_18349[17];
db dummyf_1835a; // 17c5:070a
db dummyf_1835b[251];
dw dummyf_18456; // 17c5:0806
db dummyf_18458[7];
db dummyf_1845f; // 17c5:080f
db dummyf_18460; // 17c5:0810
db dummyf_18461; // 17c5:0811
db dummyf_18462[1];
db dummyf_18463;
db dummyf_18464;
db dummyf_18465; // 17c5:0815
db dummyf_18466; // 17c5:0816
db dummyf_18467; // 17c5:0817
db dummyf_18468; // 17c5:0818
db dummyf_18469[67];
db dummyf_184ac; // 17c5:085c
db dummyf_184ad[1181];
db dummyf_1894a; // 17c5:0cfa
db dummyf_1894b[362];
db dummyf_18ab5; // 17c5:0e65
db dummyf_18ab6[2];
db dummyf_18ab8; // 17c5:0e68
db dummyf_18ab9[70];
db dummyf_18aff; // 17c5:0eaf
db dummyf_18b00[299];
db dummyf_18c2b; // 17c5:0fdb
db dummyf_18c2c[291];
db dummyf_18d4f; // 17c5:10ff
db dummyf_18d50; // 17c5:1100
db dummyf_18d51;
db dummyf_18d52; // 17c5:1102
db dummyf_18d53; // 17c5:1103
db dummyf_18d54; // 17c5:1104
db dummyf_18d55; // 17c5:1105
db dummyf_18d56; // 17c5:1106
db dummyf_18d57; // 17c5:1107
db dummyf_18d58; // 17c5:1108
db dummyf_18d59[497];
db dummyf_18f4a; // 17c5:12fa
db dummyf_18f4b; // 17c5:12fb
db dummyf_18f4c; // 17c5:12fc
db dummyf_18f4d; // 17c5:12fd
db dummyf_18f4e; // 17c5:12fe
db dummyf_18f4f; // 17c5:12ff
db dummyf_18f50[7];
db dummyf_18f57; // 17c5:1307
db dummyf_18f58; // 17c5:1308
db dummyf_18f59; // 17c5:1309
db dummyf_18f5a[1500];
db dummyf_19536; // 17c5:18e6
db dummyf_19537; // 17c5:18e7
db dummyf_19538[2];
db dummyf_1953a; // 17c5:18ea
db dummyf_1953b[1033];
db dummyf_19944; // 17c5:1cf4
db dummyf_19945; // 17c5:1cf5
db dummyf_19946[1231];
db dummyf_19e15; // 17c5:21c5
db dummyf_19e16[177];
db dummyf_19ec7; // 17c5:2277
db dummyf_19ec8[1190];
db dummyf_1a36e; // 17c5:271e
db dummyf_1a36f; // 17c5:271f
db dummyf_1a370[218];
dw word_28a2a; // 17c5:27fa
dw word_28a2c; // 17c5:27fc
dw word_28a2e; // 17c5:27fe
dw word_28a30; // 17c5:2800
dw word_28a32; // 17c5:2802
dw word_28a34; // 17c5:2804
dw word_28a36; // 17c5:2806
dw word_28a38; // 17c5:2808
db dummyf_1a45a; // 17c5:280a
db dummyf_1a45b; // 17c5:280b
db dummyf_1a45c; // 17c5:280c
db dummyf_1a45d[60];
db dummyf_1a499; // 17c5:2849
db dummyf_1a49a; // 17c5:284a
db dummyf_1a49b[40];
db dummyf_1a4c3; // 17c5:2873
db dummyf_1a4c4[2217];
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
db dummyf_1b6f7[32]; // 17c5:3aa7
db dummyf_1b717[32]; // 17c5:3ac7
db dummyf_1b737; // 17c5:3ae7
db dummyf_1b738; // 17c5:3ae8
db dummyf_1b739; // 17c5:3ae9
db dummyf_1b73a; // 17c5:3aea
db dummyf_1b73b; // 17c5:3aeb
db dummyf_1b73c; // 17c5:3aec
db dummyf_1b73d; // 17c5:3aed
db dummyf_1b73e[87];
db dummyf_1b795[32]; // 17c5:3b45
db dummyf_1b7b5[32]; // 17c5:3b65
db dummyf_1b7d5; // 17c5:3b85
db dummyf_1b7d6[166];
db dummyf_1b87c; // 17c5:3c2c
db dummyf_1b87d; // 17c5:3c2d
db dummyf_1b87e; // 17c5:3c2e
db dummyf_1b87f; // 17c5:3c2f
db dummyf_1b880; // 17c5:3c30
db dummyf_1b881; // 17c5:3c31
db dummyf_1b882; // 17c5:3c32
db dummyf_1b883; // 17c5:3c33
db dummyf_1b884; // 17c5:3c34
db dummyf_1b885; // 17c5:3c35
db dummyf_1b886; // 17c5:3c36
db dummyf_1b887; // 17c5:3c37
db dummyf_1b888; // 17c5:3c38
db dummyf_1b889; // 17c5:3c39
db dummyf_1b88a; // 17c5:3c3a
db dummyf_1b88b[60];
db dummyf_1b8c7;
db dummyf_1b8c8[62];
db dummyf_1b906[32]; // 17c5:3cb6
db dummyf_1b926; // 17c5:3cd6
db dummyf_1b927[42];
dd dword_29f31; // 17c5:3d01
db dummyf_1b955[97];
db dummyf_1b9b6; // 17c5:3d66
dw word_29f97; // 17c5:3d67
dw word_29f99; // 17c5:3d69
db dummyf_1b9bb[239];
db dummyf_1baaa; // 17c5:3e5a
db dummyf_1baab[86];
db dummyf_1bb01; // 17c5:3eb1
db dummyf_1bb02[80];
db dummyf_1bb52; // 17c5:3f02
db dummyf_1bb53; // 17c5:3f03
db dummyf_1bb54; // 17c5:3f04
db dummyf_1bb55; // 17c5:3f05
db dummyf_1bb56; // 17c5:3f06
db dummyf_1bb57; // 17c5:3f07
db dummyf_1bb58; // 17c5:3f08
db dummyf_1bb59; // 17c5:3f09
db dummyf_1bb5a; // 17c5:3f0a
db dummyf_1bb5b; // 17c5:3f0b
db dummyf_1bb5c; // 17c5:3f0c
db dummyf_1bb5d; // 17c5:3f0d
db dummyf_1bb5e[731];
db dummyf_1be39; // 17c5:41e9
db dummyf_1be3a; // 17c5:41ea
db dummyf_1be3b[2761];
db dummyf_1c904; // 17c5:4cb4
db __unk_2aee5; // 17c5:4cb5
db dummyf_1c906; // 17c5:4cb6
db dummyf_1c907; // 17c5:4cb7
db dummyf_1c908[881];
db dummyf_1cc79; // 17c5:5029
db dummyf_1cc7a; // 17c5:502a
db dummyf_1cc7b; // 17c5:502b
db dummyf_1cc7c[44];
db dummyf_1cca8[32]; // 17c5:5058
db dummyf_1ccc8[32]; // 17c5:5078
db dummyf_1cce8[32]; // 17c5:5098
db dummyf_1cd08[32]; // 17c5:50b8
db dummyf_1cd28; // 17c5:50d8
db dummyf_1cd29[2821];
db dummyf_1d82e; // 17c5:5bde
db dummyf_1d82f; // 17c5:5bdf
db dummyf_1d830[67];
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
db dummyf_1de06[646];
db dummyf_1e08c[32]; // 17c5:643c
db dummyf_1e0ac[32]; // 17c5:645c
db dummyf_1e0cc[32]; // 17c5:647c
db dummyf_1e0ec[32]; // 17c5:649c
db dummyf_1e10c[32]; // 17c5:64bc
db dummyf_1e12c[32]; // 17c5:64dc
db dummyf_1e14c[32]; // 17c5:64fc
db dummyf_1e16c[32]; // 17c5:651c
db dummyf_1e18c[32]; // 17c5:653c
db dummyf_1e1ac[32]; // 17c5:655c
db dummyf_1e1cc[32]; // 17c5:657c
db dummyf_1e1ec[32]; // 17c5:659c
db dummyf_1e20c[32]; // 17c5:65bc
db dummyf_1e22c; // 17c5:65dc
db dummyf_1e22d; // 17c5:65dd
db dummyf_1e22e; // 17c5:65de
db dummyf_1e22f; // 17c5:65df
db dummyf_1e230; // 17c5:65e0
db dummyf_1e231; // 17c5:65e1
db dummyf_1e232; // 17c5:65e2
db dummyf_1e233; // 17c5:65e3
db dummyf_1e234; // 17c5:65e4
db dummyf_1e235; // 17c5:65e5
db dummyf_1e236; // 17c5:65e6
db dummyf_1e237; // 17c5:65e7
db dummyf_1e238; // 17c5:65e8
db dummyf_1e239; // 17c5:65e9
db dummyf_1e23a; // 17c5:65ea
db dummyf_1e23b; // 17c5:65eb
db dummyf_1e23c; // 17c5:65ec
db dummyf_1e23d; // 17c5:65ed
db dummyf_1e23e[31];
db dummyf_1e25d; // 17c5:660d
db dummyf_1e25e[179];
db dummyf_1e311[32]; // 17c5:66c1
db dummyf_1e331[32]; // 17c5:66e1
db dummyf_1e351[32]; // 17c5:6701
db dummyf_1e371[32]; // 17c5:6721
db dummyf_1e391; // 17c5:6741
db dummyf_1e392[7];
db dummyf_1e399; // 17c5:6749
dw dummyf_1e39a; // 17c5:674a
db __unk_2c97c; // 17c5:674c
db dummyf_1e39d;
db dummyf_1e39e[7];
db dummyf_1e3a5; // 17c5:6755
db dummyf_1e3a6[332];
db dummyf_1e4f2; // 17c5:68a2
db dummyf_1e4f3; // 17c5:68a3
db dummyf_1e4f4[170];
dw dummyf_1e59e; // 17c5:694e
db __unk_2cb80; // 17c5:6950
db dummyf_1e5a1[172];
db dummyf_1e64d; // 17c5:69fd
db dummyf_1e64e[87];
db dummyf_1e6a5; // 17c5:6a55
db dummyf_1e6a6[1275];
db dummyf_1eba1; // 17c5:6f51
db dummyf_1eba2[346];
db dummyf_1ecfc; // 17c5:70ac
db dummyf_1ecfd; // 17c5:70ad
db dummyf_1ecfe; // 17c5:70ae
db dummyf_1ecff; // 17c5:70af
db dummyf_1ed00; // 17c5:70b0
db dummyf_1ed01; // 17c5:70b1
db dummyf_1ed02; // 17c5:70b2
db dummyf_1ed03; // 17c5:70b3
db dummyf_1ed04[391];
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
db dummyf_2052e[112];
db dummyf_2059e; // 17c5:894e
db dummyf_2059f; // 17c5:894f
db dummyf_205a0; // 17c5:8950
db dummyf_205a1; // 17c5:8951
db dummyf_205a2; // 17c5:8952
db dummyf_205a3; // 17c5:8953
db dummyf_205a4; // 17c5:8954
db dummyf_205a5; // 17c5:8955
db dummyf_205a6; // 17c5:8956
db dummyf_205a7; // 17c5:8957
db dummyf_205a8; // 17c5:8958
db dummyf_205a9; // 17c5:8959
db dummyf_205aa; // 17c5:895a
db dummyf_205ab; // 17c5:895b
db dummyf_205ac; // 17c5:895c
db dummyf_205ad; // 17c5:895d
db dummyf_205ae; // 17c5:895e
db dummyf_205af[74];
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
db dummyf_20a88[2687];
db dummyf_21507[32]; // 17c5:98b7
db dummyf_21527[32]; // 17c5:98d7
db dummyf_21547; // 17c5:98f7
db dummyf_21548; // 17c5:98f8
db dummyf_21549; // 17c5:98f9
db dummyf_2154a[231];
db dummyf_21631; // 17c5:99e1
db dummyf_21632; // 17c5:99e2
db dummyf_21633[95];
db dummyf_21692; // 17c5:9a42
db dummyf_21693; // 17c5:9a43
db dummyf_21694[359];
db dummyf_217fb[32]; // 17c5:9bab
db dummyf_2181b; // 17c5:9bcb
db dummyf_2181c; // 17c5:9bcc
db dummyf_2181d; // 17c5:9bcd
db dummyf_2181e; // 17c5:9bce
db dummyf_2181f; // 17c5:9bcf
db dummyf_21820; // 17c5:9bd0
db dummyf_21821; // 17c5:9bd1
db dummyf_21822; // 17c5:9bd2
db dummyf_21823; // 17c5:9bd3
db dummyf_21824; // 17c5:9bd4
db dummyf_21825; // 17c5:9bd5
db dummyf_21826; // 17c5:9bd6
db dummyf_21827; // 17c5:9bd7
db dummyf_21828; // 17c5:9bd8
db dummyf_21829;
db dummyf_2182a; // 17c5:9bda
db dummyf_2182b; // 17c5:9bdb
db dummyf_2182c; // 17c5:9bdc
db dummyf_2182d; // 17c5:9bdd
db dummyf_2182e; // 17c5:9bde
db dummyf_2182f; // 17c5:9bdf
db dummyf_21830; // 17c5:9be0
db dummyf_21831[1112];
db dummyf_21c89[32]; // 17c5:a039
db dummyf_21ca9[32]; // 17c5:a059
db dummyf_21cc9[32]; // 17c5:a079
db dummyf_21ce9[32]; // 17c5:a099
db dummyf_21d09; // 17c5:a0b9
db dummyf_21d0a; // 17c5:a0ba
db dummyf_21d0b; // 17c5:a0bb
db dummyf_21d0c; // 17c5:a0bc
db dummyf_21d0d; // 17c5:a0bd
db dummyf_21d0e; // 17c5:a0be
db dummyf_21d0f; // 17c5:a0bf
db dummyf_21d10; // 17c5:a0c0
db dummyf_21d11; // 17c5:a0c1
db dummyf_21d12; // 17c5:a0c2
db dummyf_21d13;
db dummyf_21d14; // 17c5:a0c4
db dummyf_21d15; // 17c5:a0c5
db dummyf_21d16; // 17c5:a0c6
db dummyf_21d17[404];
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
db dummyf_2262a[7612];
db dummyf_243e6; // 17c5:c796
db dummyf_243e7; // 17c5:c797
db dummyf_243e8[249];
db dummyf_244e1; // 17c5:c891
db dummyf_244e2; // 17c5:c892
db dummyf_244e3[318];
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
db dummyf_24eb0[106];
db dummyf_24f1a; // 17c5:d2ca
db dummyf_24f1b; // 17c5:d2cb
db dummyf_24f1c[600];
db dummyf_25174; // 17c5:d524
db dummyf_25175; // 17c5:d525
db dummyf_25176; // 17c5:d526
db dummyf_25177; // 17c5:d527
db dummyf_25178;
db dummyf_25179;
db dummyf_2517a[197];
db dummyf_2523f; // 17c5:d5ef
db dummyf_25240; // 17c5:d5f0
db dummyf_25241[339];
db dummyf_25394; // 17c5:d744
db dummyf_25395; // 17c5:d745
db dummyf_25396; // 17c5:d746
db dummyf_25397[481];
db dummyf_25578; // 17c5:d928
db dummyf_25579; // 17c5:d929
db dummyf_2557a[945];
db dummyf_2592b; // 17c5:dcdb
db dummyf_2592c[129];
db dummyf_259ad; // 17c5:dd5d
db dummyf_259ae[17];
db dummyf_259bf; // 17c5:dd6f
db dummyf_259c0[57];
db dummyf_259f9; // 17c5:dda9
db dummyf_259fa[233];
db dummyf_25ae3; // 17c5:de93
db dummyf_25ae4[89];
db dummyf_25b3d[32]; // 17c5:deed
db dummyf_25b5d; // 17c5:df0d
db dummyf_25b5e; // 17c5:df0e
db dummyf_25b5f;
db dummyf_25b60; // 17c5:df10
db dummyf_25b61; // 17c5:df11
db dummyf_25b62; // 17c5:df12
db dummyf_25b63; // 17c5:df13
db dummyf_25b64; // 17c5:df14
db dummyf_25b65; // 17c5:df15
db dummyf_25b66[30];
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
db dummyf_26082[148];
db dummyf_26116; // 17c5:e4c6
db dummyf_26117; // 17c5:e4c7
db dummyf_26118; // 17c5:e4c8
db dummyf_26119; // 17c5:e4c9
db dummyf_2611a; // 17c5:e4ca
db dummyf_2611b; // 17c5:e4cb
db dummyf_2611c; // 17c5:e4cc
db dummyf_2611d;
db dummyf_2611e; // 17c5:e4ce
db dummyf_2611f; // 17c5:e4cf
db dummyf_26120; // 17c5:e4d0
db dummyf_26121; // 17c5:e4d1
db dummyf_26122; // 17c5:e4d2
db dummyf_26123; // 17c5:e4d3
db dummyf_26124; // 17c5:e4d4
db dummyf_26125[382];
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
db dummyf_266a6[16];
db dummyf_266b6; // 17c5:ea66
db dummyf_266b7; // 17c5:ea67
db dummyf_266b8; // 17c5:ea68
db dummyf_266b9; // 17c5:ea69
db dummyf_266ba[23];
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
db dummyf_269d6[164];
db dummyf_26a7a; // 17c5:ee2a
db dummyf_26a7b; // 17c5:ee2b
db dummyf_26a7c; // 17c5:ee2c
db dummyf_26a7d; // 17c5:ee2d
db dummyf_26a7e; // 17c5:ee2e
db dummyf_26a7f;
db dummyf_26a80; // 17c5:ee30
db dummyf_26a81; // 17c5:ee31
db dummyf_26a82; // 17c5:ee32
db dummyf_26a83; // 17c5:ee33
db dummyf_26a84; // 17c5:ee34
db dummyf_26a85[45];
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
db dummyf_26e52; // 17c5:f202
db dummyf_26e53; // 17c5:f203
db dummyf_26e54; // 17c5:f204
db dummyf_26e55; // 17c5:f205
db dummyf_26e56; // 17c5:f206
db dummyf_26e57; // 17c5:f207
db dummyf_26e58; // 17c5:f208
db dummyf_26e59; // 17c5:f209
db dummyf_26e5a; // 17c5:f20a
db dummyf_26e5b; // 17c5:f20b
db dummyf_26e5c; // 17c5:f20c
db dummyf_26e5d; // 17c5:f20d
db dummyf_26e5e[83];
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
db dummyf_29094[113];
db dummyf_29105[32]; // 274d:1c35
db dummyf_29125[32]; // 274d:1c55
db dummyf_29145[32]; // 274d:1c75
db dummyf_29165; // 274d:1c95
db dummyf_29166; // 274d:1c96
db dummyf_29167; // 274d:1c97
db dummyf_29168; // 274d:1c98
db dummyf_29169; // 274d:1c99
db dummyf_2916a; // 274d:1c9a
db dummyf_2916b; // 274d:1c9b
db dummyf_2916c; // 274d:1c9c
db dummyf_2916d; // 274d:1c9d
db dummyf_2916e; // 274d:1c9e
db dummyf_2916f; // 274d:1c9f
db dummyf_29170; // 274d:1ca0
db dummyf_29171; // 274d:1ca1
db dummyf_29172; // 274d:1ca2
db dummyf_29173; // 274d:1ca3
db dummyf_29174; // 274d:1ca4
db dummyf_29175; // 274d:1ca5
db dummyf_29176; // 274d:1ca6
db dummyf_29177; // 274d:1ca7
db dummyf_29178;
db dummyf_29179; // 274d:1ca9
db dummyf_2917a[45];
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
db dummyf_2966a[62];
db dummyf_296a8; // 274d:21d8
db dummyf_296a9; // 274d:21d9
db dummyf_296aa; // 274d:21da
db dummyf_296ab; // 274d:21db
db dummyf_296ac; // 274d:21dc
db dummyf_296ad; // 274d:21dd
db dummyf_296ae; // 274d:21de
db dummyf_296af; // 274d:21df
db dummyf_296b0; // 274d:21e0
db dummyf_296b1; // 274d:21e1
db dummyf_296b2; // 274d:21e2
db dummyf_296b3; // 274d:21e3
db dummyf_296b4; // 274d:21e4
db dummyf_296b5; // 274d:21e5
db dummyf_296b6; // 274d:21e6
db dummyf_296b7; // 274d:21e7
db dummyf_296b8; // 274d:21e8
db dummyf_296b9; // 274d:21e9
db dummyf_296ba; // 274d:21ea
db dummyf_296bb;
db dummyf_296bc; // 274d:21ec
db dummyf_296bd; // 274d:21ed
db dummyf_296be; // 274d:21ee
db dummyf_296bf; // 274d:21ef
db dummyf_296c0; // 296c:0000
db dummyf_296c1; // 296c:0001
db dummyf_296c2; // 296c:0002
db dummyf_296c3; // 296c:0003
db dummyf_296c4; // 296c:0004
db dummyf_296c5; // 296c:0005
db dummyf_296c6; // 296c:0006
db dummyf_296c7; // 296c:0007
db dummyf_296c8; // 296c:0008
db dummyf_296c9;
db dummyf_296ca[252];
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
db dummyf_2a358[38];
db dummyf_2a37e; // 296c:0cbe
db dummyf_2a37f; // 296c:0cbf
db dummyf_2a380; // 296c:0cc0
db dummyf_2a381; // 296c:0cc1
db dummyf_2a382; // 296c:0cc2
db dummyf_2a383; // 296c:0cc3
db dummyf_2a384; // 296c:0cc4
db dummyf_2a385; // 296c:0cc5
db dummyf_2a386; // 296c:0cc6
db dummyf_2a387; // 296c:0cc7
db dummyf_2a388; // 296c:0cc8
db dummyf_2a389; // 296c:0cc9
db dummyf_2a38a; // 296c:0cca
db dummyf_2a38b; // 296c:0ccb
db dummyf_2a38c; // 296c:0ccc
db dummyf_2a38d; // 296c:0ccd
db dummyf_2a38e;
db dummyf_2a38f; // 296c:0ccf
db dummyf_2a390[388];
db dummyf_2a514; // 2a39:0184
dw word_38af5; // 2a39:0185
dw word_38af7; // 2a39:0187
db dummyf_2a519[32]; // 2a39:0189
db dummyf_2a539;
db dummyf_2a53a;
db dummyf_2a53b;
db dummyf_2a53c;
db dummyf_2a53d;
db dummyf_2a53e;
db dummyf_2a53f;
db dummyf_2a540;
db dummyf_2a541;
db dummyf_2a542;
db dummyf_2a543;
db dummyf_2a544;
db dummyf_2a545;
db dummyf_2a546;
db dummyf_2a547;
db dummyf_2a548;
db dummyf_2a549;
db dummyf_2a54a;
db dummyf_2a54b;
db dummyf_2a54c;
db dummyf_2a54d;
db dummyf_2a54e;
db byte_38b2f[3695]; // 2a39:01bf
db __unk_3999e[5]; // 2a39:102e
db _unk_399a3[20]; // 2a39:1033
db __unk_399b7[5]; // 2a39:1047
db byte_399bc[25]; // 2a39:104c
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
db byte_39a25[5]; // 2a39:10b5
db byte_39a2a[5]; // 2a39:10ba
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
db dummyf_2fbf0[43280]; // 2a39:5860
db dummyf_3a500;
db dummyf_3a501;
db dummyf_3a502;
db dummyf_3a503;
db dummyf_3a504;
db dummyf_3a505;
db dummyf_3a506;
db dummyf_3a507;
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
db dummyf_3a5b3;
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
db aerrorreleasing; // 3a50:0105
db dummyf_3a606[32]; // 3a50:0106
db dummyf_3a626; // 3a50:0126
db dummyf_3a627; // 3a50:0127
db dummyf_3a628; // 3a50:0128
db dummyf_3a629; // 3a50:0129
db dummyf_3a62a; // 3a50:012a
db dummyf_3a62b; // 3a50:012b
db dummyf_3a62c; // 3a50:012c
db dummyf_3a62d; // 3a50:012d
db dummyf_3a62e; // 3a50:012e
db dummyf_3a62f; // 3a50:012f
db dummyf_3a630;
db areadyfortakeof; // 3a50:0131
db dummyf_3a632; // 3a50:0132
db dummyf_3a633; // 3a50:0133
db dummyf_3a634; // 3a50:0134
db dummyf_3a635; // 3a50:0135
db dummyf_3a636; // 3a50:0136
db dummyf_3a637; // 3a50:0137
db dummyf_3a638; // 3a50:0138
db dummyf_3a639; // 3a50:0139
db dummyf_3a63a; // 3a50:013a
db dummyf_3a63b; // 3a50:013b
db dummyf_3a63c; // 3a50:013c
db dummyf_3a63d; // 3a50:013d
db dummyf_3a63e; // 3a50:013e
db dummyf_3a63f; // 3a50:013f
db dummyf_3a640; // 3a50:0140
db dummyf_3a641; // 3a50:0141
db dummyf_3a642;
db aweaponsrepleni; // 3a50:0143
db dummyf_3a644; // 3a50:0144
db dummyf_3a645; // 3a50:0145
db dummyf_3a646; // 3a50:0146
db dummyf_3a647; // 3a50:0147
db dummyf_3a648; // 3a50:0148
db dummyf_3a649; // 3a50:0149
db dummyf_3a64a; // 3a50:014a
db dummyf_3a64b; // 3a50:014b
db dummyf_3a64c; // 3a50:014c
db dummyf_3a64d; // 3a50:014d
db dummyf_3a64e; // 3a50:014e
db dummyf_3a64f; // 3a50:014f
db dummyf_3a650; // 3a50:0150
db dummyf_3a651; // 3a50:0151
db dummyf_3a652; // 3a50:0152
db dummyf_3a653; // 3a50:0153
db dummyf_3a654; // 3a50:0154
db dummyf_3a655; // 3a50:0155
db dummyf_3a656;
db aautomaticlandi; // 3a50:0157
db dummyf_3a658; // 3a50:0158
db dummyf_3a659; // 3a50:0159
db dummyf_3a65a; // 3a50:015a
db dummyf_3a65b; // 3a50:015b
db dummyf_3a65c; // 3a50:015c
db dummyf_3a65d; // 3a50:015d
db dummyf_3a65e; // 3a50:015e
db dummyf_3a65f; // 3a50:015f
db dummyf_3a660; // 3a50:0160
db dummyf_3a661; // 3a50:0161
db dummyf_3a662; // 3a50:0162
db dummyf_3a663; // 3a50:0163
db dummyf_3a664; // 3a50:0164
db dummyf_3a665; // 3a50:0165
db dummyf_3a666; // 3a50:0166
db dummyf_3a667; // 3a50:0167
db dummyf_3a668; // 3a50:0168
db dummyf_3a669; // 3a50:0169
db dummyf_3a66a; // 3a50:016a
db dummyf_3a66b; // 3a50:016b
db dummyf_3a66c; // 3a50:016c
db dummyf_3a66d; // 3a50:016d
db dummyf_3a66e; // 3a50:016e
db dummyf_3a66f; // 3a50:016f
db dummyf_3a670;
db dummyf_3a671;
dw word_48c52; // 3a50:0172
dw word_48c54[2]; // 3a50:0174
dw word_48c58[3]; // 3a50:0178
dw word_48c5e; // 3a50:017e
dw word_48c60; // 3a50:0180
dw word_48c62; // 3a50:0182
dw word_48c64; // 3a50:0184
db anone; // 3a50:0186
db dummyf_3a687[32]; // 3a50:0187
db dummyf_3a6a7[32]; // 3a50:01a7
db dummyf_3a6c7[32]; // 3a50:01c7
db dummyf_3a6e7[32]; // 3a50:01e7
db dummyf_3a707[32]; // 3a50:0207
db dummyf_3a727[32]; // 3a50:0227
db dummyf_3a747[32]; // 3a50:0247
db dummyf_3a767[32]; // 3a50:0267
db dummyf_3a787[32]; // 3a50:0287
db dummyf_3a7a7[32]; // 3a50:02a7
db dummyf_3a7c7[32]; // 3a50:02c7
db dummyf_3a7e7[32]; // 3a50:02e7
db dummyf_3a807[32]; // 3a50:0307
db dummyf_3a827[32]; // 3a50:0327
db dummyf_3a847[32]; // 3a50:0347
db dummyf_3a867[32]; // 3a50:0367
db dummyf_3a887[32]; // 3a50:0387
db dummyf_3a8a7[32]; // 3a50:03a7
db dummyf_3a8c7[32]; // 3a50:03c7
db dummyf_3a8e7[32]; // 3a50:03e7
db dummyf_3a907[32]; // 3a50:0407
db dummyf_3a927[32]; // 3a50:0427
db dummyf_3a947[32]; // 3a50:0447
db dummyf_3a967[32]; // 3a50:0467
db dummyf_3a987[32]; // 3a50:0487
db dummyf_3a9a7[32]; // 3a50:04a7
db dummyf_3a9c7[32]; // 3a50:04c7
db dummyf_3a9e7[32]; // 3a50:04e7
db dummyf_3aa07[32]; // 3a50:0507
db dummyf_3aa27[32]; // 3a50:0527
db dummyf_3aa47[32]; // 3a50:0547
db dummyf_3aa67[32]; // 3a50:0567
db dummyf_3aa87[32]; // 3a50:0587
db dummyf_3aaa7[32]; // 3a50:05a7
db dummyf_3aac7[32]; // 3a50:05c7
db dummyf_3aae7[32]; // 3a50:05e7
db dummyf_3ab07[32]; // 3a50:0607
db dummyf_3ab27[32]; // 3a50:0627
db dummyf_3ab47[32]; // 3a50:0647
db dummyf_3ab67[32]; // 3a50:0667
db dummyf_3ab87[32]; // 3a50:0687
db dummyf_3aba7[32]; // 3a50:06a7
db dummyf_3abc7[32]; // 3a50:06c7
db dummyf_3abe7[32]; // 3a50:06e7
db dummyf_3ac07[32]; // 3a50:0707
db dummyf_3ac27[32]; // 3a50:0727
db dummyf_3ac47[32]; // 3a50:0747
db dummyf_3ac67[32]; // 3a50:0767
db dummyf_3ac87[32]; // 3a50:0787
db dummyf_3aca7[32]; // 3a50:07a7
db dummyf_3acc7;
db dummyf_3acc8;
db dummyf_3acc9;
db dummyf_3acca; // 3a50:07ca
db dummyf_3accb;
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
dw word_492f4[6]; // 3a50:0814
char asidewinder[11]; // 3a50:0820
db dummyf_3ad2b;
db dummyf_3ad2c[14]; // 3a50:082c
db dummyf_3ad3a[13]; // 3a50:082c
db dummyf_3ad47[13]; // 3a50:082c
db dummyf_3ad54[18]; // 3a50:082c
db dummyf_3ad66[13]; // 3a50:082c
db dummyf_3ad73[15]; // 3a50:082c
db dummyf_3ad82[12]; // 3a50:082c
db dummyf_3ad8e[15]; // 3a50:082c
db dummyf_3ad9d[12]; // 3a50:082c
db dummyf_3ada9[14]; // 3a50:082c
db dummyf_3adb7[17]; // 3a50:082c
db dummyf_3adc8[15]; // 3a50:082c
db dummyf_3add7[15]; // 3a50:082c
db dummyf_3ade6[15]; // 3a50:082c
db dummyf_3adf5[14]; // 3a50:082c
db dummyf_3ae03[12]; // 3a50:082c
db dummyf_3ae0f[17]; // 3a50:082c
db dummyf_3ae20[16]; // 3a50:082c
db dummyf_3ae30[15]; // 3a50:082c
db dummyf_3ae3f[11]; // 3a50:082c
db dummyf_3ae4a[14]; // 3a50:082c
db dummyf_3ae58[13]; // 3a50:082c
db dummyf_3ae65[14]; // 3a50:082c
db dummyf_3ae73[13]; // 3a50:082c
db dummyf_3ae80[15]; // 3a50:082c
db dummyf_3ae8f[11]; // 3a50:082c
db dummyf_3ae9a[13]; // 3a50:082c
db dummyf_3aea7[13]; // 3a50:082c
db dummyf_3aeb4[13]; // 3a50:082c
db dummyf_3aec1[15]; // 3a50:082c
db dummyf_3aed0[11]; // 3a50:082c
db dummyf_3aedb[11]; // 3a50:082c
db dummyf_3aee6[14]; // 3a50:082c
db dummyf_3aef4[19]; // 3a50:082c
db dummyf_3af07[12]; // 3a50:082c
db dummyf_3af13[75]; // 3a50:082c
db dummyf_3af5e[15]; // 3a50:082c
db dummyf_3af6d[14]; // 3a50:082c
db dummyf_3af7b[12]; // 3a50:082c
db dummyf_3af87[19]; // 3a50:082c
db dummyf_3af9a[14]; // 3a50:082c
db dummyf_3afa8[16]; // 3a50:082c
db dummyf_3afb8[15]; // 3a50:082c
db dummyf_3afc7[16]; // 3a50:082c
db dummyf_3afd7[14]; // 3a50:082c
db dummyf_3afe5[39]; // 3a50:082c
db dummyf_3b00c[22]; // 3a50:082c
db byte_49602; // 3a50:0b22
db dummyf_3b023;
db byte_49604; // 3a50:0b24
db dummyf_3b025;
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
db byte_4991c; // 3a50:0e3c
db dummyf_3b33d;
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
db byte_49940; // 3a50:0e60
db dummyf_3b361;
dw word_49942; // 3a50:0e62
dw word_49944; // 3a50:0e64
db astoresexhauste; // 3a50:0e66
db dummyf_3b367; // 3a50:0e67
db dummyf_3b368; // 3a50:0e68
db dummyf_3b369; // 3a50:0e69
db dummyf_3b36a; // 3a50:0e6a
db dummyf_3b36b; // 3a50:0e6b
db dummyf_3b36c; // 3a50:0e6c
db dummyf_3b36d; // 3a50:0e6d
db dummyf_3b36e; // 3a50:0e6e
db dummyf_3b36f; // 3a50:0e6f
db dummyf_3b370; // 3a50:0e70
db dummyf_3b371; // 3a50:0e71
db dummyf_3b372; // 3a50:0e72
db dummyf_3b373; // 3a50:0e73
db dummyf_3b374; // 3a50:0e74
db dummyf_3b375; // 3a50:0e75
db dummyf_3b376;
db aflare; // 3a50:0e77
db dummyf_3b378; // 3a50:0e78
db dummyf_3b379; // 3a50:0e79
db dummyf_3b37a; // 3a50:0e7a
db dummyf_3b37b; // 3a50:0e7b
db dummyf_3b37c;
db achaff; // 3a50:0e7d
db dummyf_3b37e; // 3a50:0e7e
db dummyf_3b37f; // 3a50:0e7f
db dummyf_3b380; // 3a50:0e80
db dummyf_3b381; // 3a50:0e81
db dummyf_3b382;
db areleased; // 3a50:0e83
db dummyf_3b384; // 3a50:0e84
db dummyf_3b385; // 3a50:0e85
db dummyf_3b386; // 3a50:0e86
db dummyf_3b387; // 3a50:0e87
db dummyf_3b388; // 3a50:0e88
db dummyf_3b389; // 3a50:0e89
db dummyf_3b38a; // 3a50:0e8a
db dummyf_3b38b; // 3a50:0e8b
db dummyf_3b38c;
db dummyf_3b38d; // 3a50:0e8d
db dummyf_3b38e;
char agun[5]; // 3a50:0e8f
char dummyf_3b394[2]; // 3a50:0e94
db dummyf_3b396; // 3a50:0e96
db dummyf_3b397;
db as; // 3a50:0e98
db dummyf_3b399;
dw word_4997a; // 3a50:0e9a
db aonpatrol; // 3a50:0e9c
db dummyf_3b39d; // 3a50:0e9d
db dummyf_3b39e; // 3a50:0e9e
db dummyf_3b39f; // 3a50:0e9f
db dummyf_3b3a0; // 3a50:0ea0
db dummyf_3b3a1; // 3a50:0ea1
db dummyf_3b3a2; // 3a50:0ea2
db dummyf_3b3a3; // 3a50:0ea3
db dummyf_3b3a4; // 3a50:0ea4
db dummyf_3b3a5; // 3a50:0ea5
db dummyf_3b3a6;
db af15strikeeagle; // 3a50:0ea7
db dummyf_3b3a8; // 3a50:0ea8
db dummyf_3b3a9; // 3a50:0ea9
db dummyf_3b3aa; // 3a50:0eaa
db dummyf_3b3ab; // 3a50:0eab
db dummyf_3b3ac; // 3a50:0eac
db dummyf_3b3ad; // 3a50:0ead
db dummyf_3b3ae; // 3a50:0eae
db dummyf_3b3af; // 3a50:0eaf
db dummyf_3b3b0; // 3a50:0eb0
db dummyf_3b3b1; // 3a50:0eb1
db dummyf_3b3b2; // 3a50:0eb2
db dummyf_3b3b3; // 3a50:0eb3
db dummyf_3b3b4; // 3a50:0eb4
db dummyf_3b3b5; // 3a50:0eb5
db dummyf_3b3b6; // 3a50:0eb6
db dummyf_3b3b7;
db aat; // 3a50:0eb8
db dummyf_3b3b9; // 3a50:0eb9
db dummyf_3b3ba; // 3a50:0eba
db dummyf_3b3bb; // 3a50:0ebb
db dummyf_3b3bc;
db dummyf_3b3bd;
db dummyf_3b3be[30];
db dummyf_3b3dc; // 3a50:0edc
db dummyf_3b3dd;
db dummyf_3b3de;
db dummyf_3b3df;
db dummyf_3b3e0;
db dummyf_3b3e1; // 3a50:0ee1
db dummyf_3b3e2;
db dummyf_3b3e3;
db dummyf_3b3e4;
db dummyf_3b3e5;
db dummyf_3b3e6; // 3a50:0ee6
db dummyf_3b3e7;
db dummyf_3b3e8;
db dummyf_3b3e9;
db dummyf_3b3ea;
db dummyf_3b3eb; // 3a50:0eeb
db dummyf_3b3ec;
db dummyf_3b3ed;
db dummyf_3b3ee;
db dummyf_3b3ef;
db dummyf_3b3f0; // 3a50:0ef0
db dummyf_3b3f1;
db dummyf_3b3f2;
db dummyf_3b3f3;
db dummyf_3b3f4;
db dummyf_3b3f5[30];
db dummyf_3b413; // 3a50:0f13
db dummyf_3b414;
db dummyf_3b415;
db dummyf_3b416;
db dummyf_3b417;
db dummyf_3b418[5];
db dummyf_3b41d; // 3a50:0f1d
db dummyf_3b41e;
db dummyf_3b41f;
db dummyf_3b420;
db dummyf_3b421;
db dummyf_3b422; // 3a50:0f22
db dummyf_3b423;
db dummyf_3b424;
db dummyf_3b425;
db dummyf_3b426;
db dummyf_3b427; // 3a50:0f27
db dummyf_3b428;
db dummyf_3b429;
db dummyf_3b42a;
db dummyf_3b42b;
db dummyf_3b42c; // 3a50:0f2c
db dummyf_3b42d;
db dummyf_3b42e;
db dummyf_3b42f;
db dummyf_3b430;
db dummyf_3b431; // 3a50:0f31
db dummyf_3b432;
db dummyf_3b433;
db dummyf_3b434;
db dummyf_3b435;
db dummyf_3b436[15];
db dummyf_3b445; // 3a50:0f45
db dummyf_3b446;
db dummyf_3b447;
db dummyf_3b448;
db dummyf_3b449;
db dummyf_3b44a; // 3a50:0f4a
db dummyf_3b44b;
db dummyf_3b44c;
db dummyf_3b44d;
db dummyf_3b44e;
db dummyf_3b44f[5];
db dummyf_3b454; // 3a50:0f54
db dummyf_3b455;
db dummyf_3b456;
db dummyf_3b457;
db dummyf_3b458;
db dummyf_3b459[25];
db dummyf_3b472; // 3a50:0f72
db dummyf_3b473;
db dummyf_3b474;
db dummyf_3b475;
db dummyf_3b476;
db dummyf_3b477[5];
db dummyf_3b47c; // 3a50:0f7c
db dummyf_3b47d;
db dummyf_3b47e;
db dummyf_3b47f;
db dummyf_3b480;
db dummyf_3b481; // 3a50:0f81
db dummyf_3b482;
db dummyf_3b483;
db dummyf_3b484;
db dummyf_3b485;
db dummyf_3b486[15];
db dummyf_3b495; // 3a50:0f95
db dummyf_3b496;
db dummyf_3b497;
db dummyf_3b498;
db dummyf_3b499;
db dummyf_3b49a[15];
db dummyf_3b4a9; // 3a50:0fa9
db dummyf_3b4aa;
db dummyf_3b4ab;
db dummyf_3b4ac;
db dummyf_3b4ad;
db dummyf_3b4ae; // 3a50:0fae
db dummyf_3b4af;
db dummyf_3b4b0;
db dummyf_3b4b1;
db dummyf_3b4b2;
db dummyf_3b4b3; // 3a50:0fb3
db dummyf_3b4b4;
db dummyf_3b4b5;
db dummyf_3b4b6;
db dummyf_3b4b7;
db dummyf_3b4b8[10];
db dummyf_3b4c2; // 3a50:0fc2
db dummyf_3b4c3;
db dummyf_3b4c4;
db dummyf_3b4c5;
db dummyf_3b4c6;
db dummyf_3b4c7[5];
db dummyf_3b4cc; // 3a50:0fcc
db dummyf_3b4cd;
db dummyf_3b4ce;
db dummyf_3b4cf;
db dummyf_3b4d0;
db dummyf_3b4d1; // 3a50:0fd1
db dummyf_3b4d2;
db dummyf_3b4d3;
db dummyf_3b4d4;
db dummyf_3b4d5;
db dummyf_3b4d6[5];
db dummyf_3b4db; // 3a50:0fdb
db dummyf_3b4dc;
db dummyf_3b4dd;
db dummyf_3b4de;
db dummyf_3b4df;
db dummyf_3b4e0[10];
db dummyf_3b4ea; // 3a50:0fea
db dummyf_3b4eb;
db dummyf_3b4ec;
db dummyf_3b4ed;
db dummyf_3b4ee;
db dummyf_3b4ef[15];
db dummyf_3b4fe; // 3a50:0ffe
db dummyf_3b4ff;
db dummyf_3b500;
db dummyf_3b501;
db dummyf_3b502;
db dummyf_3b503[5];
db dummyf_3b508; // 3a50:1008
db dummyf_3b509;
db dummyf_3b50a;
db dummyf_3b50b;
db dummyf_3b50c;
db dummyf_3b50d; // 3a50:100d
db dummyf_3b50e;
db dummyf_3b50f;
db dummyf_3b510;
db dummyf_3b511;
db dummyf_3b512[20];
db dummyf_3b526; // 3a50:1026
db dummyf_3b527;
db dummyf_3b528;
db dummyf_3b529;
db dummyf_3b52a;
db dummyf_3b52b[5];
db dummyf_3b530; // 3a50:1030
db dummyf_3b531;
db dummyf_3b532;
db dummyf_3b533;
db dummyf_3b534;
db dummyf_3b535[10];
db dummyf_3b53f; // 3a50:103f
db dummyf_3b540;
db dummyf_3b541;
db dummyf_3b542;
db dummyf_3b543;
db dummyf_3b544; // 3a50:1044
db dummyf_3b545;
db dummyf_3b546;
db dummyf_3b547;
db dummyf_3b548;
db dummyf_3b549; // 3a50:1049
db dummyf_3b54a;
db dummyf_3b54b;
db dummyf_3b54c;
db dummyf_3b54d;
db dummyf_3b54e; // 3a50:104e
db dummyf_3b54f;
db dummyf_3b550;
db dummyf_3b551;
db dummyf_3b552;
db dummyf_3b553; // 3a50:1053
db dummyf_3b554;
db dummyf_3b555;
db dummyf_3b556;
db dummyf_3b557;
db dummyf_3b558[5];
db dummyf_3b55d[32]; // 3a50:105d
db dummyf_3b57d[32]; // 3a50:107d
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
db dummyf_3b5c6[5];
db dummyf_3b5cb; // 3a50:10cb
db dummyf_3b5cc;
db dummyf_3b5cd;
db dummyf_3b5ce;
db dummyf_3b5cf;
db dummyf_3b5d0[20];
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
db aopenerroron3d3; // 3a50:1776
db dummyf_3bc77; // 3a50:1777
db dummyf_3bc78; // 3a50:1778
db dummyf_3bc79; // 3a50:1779
db dummyf_3bc7a; // 3a50:177a
db dummyf_3bc7b; // 3a50:177b
db dummyf_3bc7c; // 3a50:177c
db dummyf_3bc7d; // 3a50:177d
db dummyf_3bc7e; // 3a50:177e
db dummyf_3bc7f; // 3a50:177f
db dummyf_3bc80; // 3a50:1780
db dummyf_3bc81; // 3a50:1781
db dummyf_3bc82; // 3a50:1782
db dummyf_3bc83; // 3a50:1783
db dummyf_3bc84; // 3a50:1784
db dummyf_3bc85; // 3a50:1785
db dummyf_3bc86; // 3a50:1786
db dummyf_3bc87; // 3a50:1787
db dummyf_3bc88; // 3a50:1788
db dummyf_3bc89;
db abadobjfileform; // 3a50:178a
db dummyf_3bc8b; // 3a50:178b
db dummyf_3bc8c; // 3a50:178c
db dummyf_3bc8d; // 3a50:178d
db dummyf_3bc8e; // 3a50:178e
db dummyf_3bc8f; // 3a50:178f
db dummyf_3bc90; // 3a50:1790
db dummyf_3bc91; // 3a50:1791
db dummyf_3bc92; // 3a50:1792
db dummyf_3bc93; // 3a50:1793
db dummyf_3bc94; // 3a50:1794
db dummyf_3bc95; // 3a50:1795
db dummyf_3bc96; // 3a50:1796
db dummyf_3bc97; // 3a50:1797
db dummyf_3bc98; // 3a50:1798
db dummyf_3bc99; // 3a50:1799
db dummyf_3bc9a; // 3a50:179a
db dummyf_3bc9b; // 3a50:179b
db dummyf_3bc9c; // 3a50:179c
db dummyf_3bc9d; // 3a50:179d
db dummyf_3bc9e;
db aobjectdatatoob; // 3a50:179f
db dummyf_3bca0; // 3a50:17a0
db dummyf_3bca1; // 3a50:17a1
db dummyf_3bca2; // 3a50:17a2
db dummyf_3bca3; // 3a50:17a3
db dummyf_3bca4; // 3a50:17a4
db dummyf_3bca5; // 3a50:17a5
db dummyf_3bca6; // 3a50:17a6
db dummyf_3bca7; // 3a50:17a7
db dummyf_3bca8; // 3a50:17a8
db dummyf_3bca9; // 3a50:17a9
db dummyf_3bcaa; // 3a50:17aa
db dummyf_3bcab; // 3a50:17ab
db dummyf_3bcac; // 3a50:17ac
db dummyf_3bcad; // 3a50:17ad
db dummyf_3bcae; // 3a50:17ae
db dummyf_3bcaf; // 3a50:17af
db dummyf_3bcb0; // 3a50:17b0
db dummyf_3bcb1; // 3a50:17b1
db dummyf_3bcb2; // 3a50:17b2
db dummyf_3bcb3;
char arb_0[3]; // 3a50:17b4
db aphoto3d3; // 3a50:17b7
db dummyf_3bcb8; // 3a50:17b8
db dummyf_3bcb9; // 3a50:17b9
db dummyf_3bcba; // 3a50:17ba
db dummyf_3bcbb; // 3a50:17bb
db dummyf_3bcbc; // 3a50:17bc
db dummyf_3bcbd; // 3a50:17bd
db dummyf_3bcbe; // 3a50:17be
db dummyf_3bcbf; // 3a50:17bf
db dummyf_3bcc0;
db apleaseinsertf1; // 3a50:17c1
db dummyf_3bcc2; // 3a50:17c2
db dummyf_3bcc3; // 3a50:17c3
db dummyf_3bcc4; // 3a50:17c4
db dummyf_3bcc5; // 3a50:17c5
db dummyf_3bcc6; // 3a50:17c6
db dummyf_3bcc7; // 3a50:17c7
db dummyf_3bcc8; // 3a50:17c8
db dummyf_3bcc9; // 3a50:17c9
db dummyf_3bcca; // 3a50:17ca
db dummyf_3bccb; // 3a50:17cb
db dummyf_3bccc; // 3a50:17cc
db dummyf_3bccd; // 3a50:17cd
db dummyf_3bcce; // 3a50:17ce
db dummyf_3bccf; // 3a50:17cf
db dummyf_3bcd0; // 3a50:17d0
db dummyf_3bcd1; // 3a50:17d1
db dummyf_3bcd2; // 3a50:17d2
db dummyf_3bcd3; // 3a50:17d3
db dummyf_3bcd4; // 3a50:17d4
db dummyf_3bcd5; // 3a50:17d5
db dummyf_3bcd6; // 3a50:17d6
db dummyf_3bcd7; // 3a50:17d7
db dummyf_3bcd8; // 3a50:17d8
db dummyf_3bcd9;
char arb_1[3]; // 3a50:17da
db aphoto3d3_0; // 3a50:17dd
db dummyf_3bcde; // 3a50:17de
db dummyf_3bcdf; // 3a50:17df
db dummyf_3bce0; // 3a50:17e0
db dummyf_3bce1; // 3a50:17e1
db dummyf_3bce2; // 3a50:17e2
db dummyf_3bce3; // 3a50:17e3
db dummyf_3bce4; // 3a50:17e4
db dummyf_3bce5; // 3a50:17e5
db dummyf_3bce6;
db aobjdataoverflo; // 3a50:17e7
db dummyf_3bce8; // 3a50:17e8
db dummyf_3bce9; // 3a50:17e9
db dummyf_3bcea; // 3a50:17ea
db dummyf_3bceb; // 3a50:17eb
db dummyf_3bcec; // 3a50:17ec
db dummyf_3bced; // 3a50:17ed
db dummyf_3bcee; // 3a50:17ee
db dummyf_3bcef; // 3a50:17ef
db dummyf_3bcf0; // 3a50:17f0
db dummyf_3bcf1; // 3a50:17f1
db dummyf_3bcf2; // 3a50:17f2
db dummyf_3bcf3; // 3a50:17f3
db dummyf_3bcf4; // 3a50:17f4
db dummyf_3bcf5; // 3a50:17f5
db dummyf_3bcf6; // 3a50:17f6
db dummyf_3bcf7;
char a3dt[5]; // 3a50:17f8
char arb_2[3]; // 3a50:17fd
db aopenerroron3dt; // 3a50:1800
db dummyf_3bd01; // 3a50:1801
db dummyf_3bd02; // 3a50:1802
db dummyf_3bd03; // 3a50:1803
db dummyf_3bd04; // 3a50:1804
db dummyf_3bd05; // 3a50:1805
db dummyf_3bd06; // 3a50:1806
db dummyf_3bd07; // 3a50:1807
db dummyf_3bd08; // 3a50:1808
db dummyf_3bd09; // 3a50:1809
db dummyf_3bd0a; // 3a50:180a
db dummyf_3bd0b; // 3a50:180b
db dummyf_3bd0c; // 3a50:180c
db dummyf_3bd0d; // 3a50:180d
db dummyf_3bd0e; // 3a50:180e
db dummyf_3bd0f; // 3a50:180f
db dummyf_3bd10; // 3a50:1810
db dummyf_3bd11; // 3a50:1811
db dummyf_3bd12; // 3a50:1812
db dummyf_3bd13;
db abadtilefilefor; // 3a50:1814
db dummyf_3bd15; // 3a50:1815
db dummyf_3bd16; // 3a50:1816
db dummyf_3bd17; // 3a50:1817
db dummyf_3bd18; // 3a50:1818
db dummyf_3bd19; // 3a50:1819
db dummyf_3bd1a; // 3a50:181a
db dummyf_3bd1b; // 3a50:181b
db dummyf_3bd1c; // 3a50:181c
db dummyf_3bd1d; // 3a50:181d
db dummyf_3bd1e; // 3a50:181e
db dummyf_3bd1f; // 3a50:181f
db dummyf_3bd20; // 3a50:1820
db dummyf_3bd21; // 3a50:1821
db dummyf_3bd22; // 3a50:1822
db dummyf_3bd23; // 3a50:1823
db dummyf_3bd24; // 3a50:1824
db dummyf_3bd25; // 3a50:1825
db dummyf_3bd26; // 3a50:1826
db dummyf_3bd27; // 3a50:1827
db dummyf_3bd28; // 3a50:1828
db dummyf_3bd29;
db atoomanytiles; // 3a50:182a
db dummyf_3bd2b; // 3a50:182b
db dummyf_3bd2c; // 3a50:182c
db dummyf_3bd2d; // 3a50:182d
db dummyf_3bd2e; // 3a50:182e
db dummyf_3bd2f; // 3a50:182f
db dummyf_3bd30; // 3a50:1830
db dummyf_3bd31; // 3a50:1831
db dummyf_3bd32; // 3a50:1832
db dummyf_3bd33; // 3a50:1833
db dummyf_3bd34; // 3a50:1834
db dummyf_3bd35; // 3a50:1835
db dummyf_3bd36; // 3a50:1836
db dummyf_3bd37; // 3a50:1837
db dummyf_3bd38; // 3a50:1838
db dummyf_3bd39;
db atoomuchtiledat; // 3a50:183a
db dummyf_3bd3b; // 3a50:183b
db dummyf_3bd3c; // 3a50:183c
db dummyf_3bd3d; // 3a50:183d
db dummyf_3bd3e; // 3a50:183e
db dummyf_3bd3f; // 3a50:183f
db dummyf_3bd40; // 3a50:1840
db dummyf_3bd41; // 3a50:1841
db dummyf_3bd42; // 3a50:1842
db dummyf_3bd43; // 3a50:1843
db dummyf_3bd44; // 3a50:1844
db dummyf_3bd45; // 3a50:1845
db dummyf_3bd46; // 3a50:1846
db dummyf_3bd47; // 3a50:1847
db dummyf_3bd48; // 3a50:1848
db dummyf_3bd49; // 3a50:1849
db dummyf_3bd4a; // 3a50:184a
db dummyf_3bd4b; // 3a50:184b
db dummyf_3bd4c;
char a3dg[5]; // 3a50:184d
char arb_3[3]; // 3a50:1852
db apleaseinsertsc; // 3a50:1855
db dummyf_3bd56; // 3a50:1856
db dummyf_3bd57; // 3a50:1857
db dummyf_3bd58; // 3a50:1858
db dummyf_3bd59; // 3a50:1859
db dummyf_3bd5a; // 3a50:185a
db dummyf_3bd5b; // 3a50:185b
db dummyf_3bd5c; // 3a50:185c
db dummyf_3bd5d; // 3a50:185d
db dummyf_3bd5e; // 3a50:185e
db dummyf_3bd5f; // 3a50:185f
db dummyf_3bd60; // 3a50:1860
db dummyf_3bd61; // 3a50:1861
db dummyf_3bd62; // 3a50:1862
db dummyf_3bd63; // 3a50:1863
db dummyf_3bd64; // 3a50:1864
db dummyf_3bd65; // 3a50:1865
db dummyf_3bd66; // 3a50:1866
db dummyf_3bd67; // 3a50:1867
db dummyf_3bd68; // 3a50:1868
db dummyf_3bd69; // 3a50:1869
db dummyf_3bd6a; // 3a50:186a
db dummyf_3bd6b; // 3a50:186b
db dummyf_3bd6c; // 3a50:186c
db dummyf_3bd6d; // 3a50:186d
db dummyf_3bd6e; // 3a50:186e
db dummyf_3bd6f; // 3a50:186f
db dummyf_3bd70;
db apressakeywhenr; // 3a50:1871
db dummyf_3bd72; // 3a50:1872
db dummyf_3bd73; // 3a50:1873
db dummyf_3bd74; // 3a50:1874
db dummyf_3bd75; // 3a50:1875
db dummyf_3bd76; // 3a50:1876
db dummyf_3bd77; // 3a50:1877
db dummyf_3bd78; // 3a50:1878
db dummyf_3bd79; // 3a50:1879
db dummyf_3bd7a; // 3a50:187a
db dummyf_3bd7b; // 3a50:187b
db dummyf_3bd7c; // 3a50:187c
db dummyf_3bd7d; // 3a50:187d
db dummyf_3bd7e; // 3a50:187e
db dummyf_3bd7f; // 3a50:187f
db dummyf_3bd80; // 3a50:1880
db dummyf_3bd81; // 3a50:1881
db dummyf_3bd82; // 3a50:1882
db dummyf_3bd83; // 3a50:1883
db dummyf_3bd84; // 3a50:1884
db dummyf_3bd85; // 3a50:1885
db dummyf_3bd86; // 3a50:1886
db dummyf_3bd87; // 3a50:1887
db dummyf_3bd88; // 3a50:1888
db dummyf_3bd89;
db abadgridfilefor; // 3a50:188a
db dummyf_3bd8b; // 3a50:188b
db dummyf_3bd8c; // 3a50:188c
db dummyf_3bd8d; // 3a50:188d
db dummyf_3bd8e; // 3a50:188e
db dummyf_3bd8f; // 3a50:188f
db dummyf_3bd90; // 3a50:1890
db dummyf_3bd91; // 3a50:1891
db dummyf_3bd92; // 3a50:1892
db dummyf_3bd93; // 3a50:1893
db dummyf_3bd94; // 3a50:1894
db dummyf_3bd95; // 3a50:1895
db dummyf_3bd96; // 3a50:1896
db dummyf_3bd97; // 3a50:1897
db dummyf_3bd98; // 3a50:1898
db dummyf_3bd99; // 3a50:1899
db dummyf_3bd9a; // 3a50:189a
db dummyf_3bd9b; // 3a50:189b
db dummyf_3bd9c; // 3a50:189c
db dummyf_3bd9d; // 3a50:189d
db dummyf_3bd9e; // 3a50:189e
db dummyf_3bd9f;
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
db dummyf_3e9b7[32]; // 3a50:44b7
db dummyf_3e9d7[32]; // 3a50:44d7
db dummyf_3e9f7[32]; // 3a50:44f7
db dummyf_3ea17[32]; // 3a50:4517
db dummyf_3ea37[32]; // 3a50:4537
db dummyf_3ea57[32]; // 3a50:4557
db dummyf_3ea77[32]; // 3a50:4577
db dummyf_3ea97[32]; // 3a50:4597
db dummyf_3eab7[32]; // 3a50:45b7
db dummyf_3ead7[32]; // 3a50:45d7
db dummyf_3eaf7[32]; // 3a50:45f7
db dummyf_3eb17[32]; // 3a50:4617
db dummyf_3eb37[32]; // 3a50:4637
db dummyf_3eb57[32]; // 3a50:4657
db dummyf_3eb77[32]; // 3a50:4677
db dummyf_3eb97[32]; // 3a50:4697
db dummyf_3ebb7[32]; // 3a50:46b7
db dummyf_3ebd7[32]; // 3a50:46d7
db dummyf_3ebf7[32]; // 3a50:46f7
db dummyf_3ec17[32]; // 3a50:4717
db dummyf_3ec37[32]; // 3a50:4737
db dummyf_3ec57[32]; // 3a50:4757
db dummyf_3ec77[32]; // 3a50:4777
db dummyf_3ec97[32]; // 3a50:4797
db dummyf_3ecb7[32]; // 3a50:47b7
db dummyf_3ecd7[32]; // 3a50:47d7
db dummyf_3ecf7[32]; // 3a50:47f7
db dummyf_3ed17[32]; // 3a50:4817
db dummyf_3ed37[32]; // 3a50:4837
db dummyf_3ed57[32]; // 3a50:4857
db dummyf_3ed77[32]; // 3a50:4877
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
db unk_4d795; // 3a50:4cb5
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
db unk_4d94d; // 3a50:4e6d
db dummyf_3f36e[32]; // 3a50:4e6e
db dummyf_3f38e[32]; // 3a50:4e8e
db dummyf_3f3ae[32]; // 3a50:4eae
db dummyf_3f3ce[32]; // 3a50:4ece
db dummyf_3f3ee[32]; // 3a50:4eee
db dummyf_3f40e[32]; // 3a50:4f0e
db dummyf_3f42e[32]; // 3a50:4f2e
db dummyf_3f44e[32]; // 3a50:4f4e
db dummyf_3f46e[32]; // 3a50:4f6e
db dummyf_3f48e[32]; // 3a50:4f8e
db dummyf_3f4ae[32]; // 3a50:4fae
db dummyf_3f4ce[32]; // 3a50:4fce
db dummyf_3f4ee[32]; // 3a50:4fee
db dummyf_3f50e;
db dummyf_3f50f;
db dummyf_3f510;
db dummyf_3f511;
db dummyf_3f512;
db dummyf_3f513;
db dummyf_3f514;
db dummyf_3f515;
db dummyf_3f516;
db dummyf_3f517;
db dummyf_3f518;
db dummyf_3f519;
db dummyf_3f51a;
db dummyf_3f51b;
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
db dummyf_3f538;
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
db byte_4dd8a; // 3a50:52aa
db dummyf_3f7ab;
db byte_4dd8c; // 3a50:52ac
db dummyf_3f7ad;
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
db byte_4e122; // 3a50:5642
db dummyf_3fb43[32]; // 3a50:5643
db dummyf_3fb63[32]; // 3a50:5663
db dummyf_3fb83;
db dummyf_3fb84; // 3a50:5684
db dummyf_3fb85; // 3a50:5685
db dummyf_3fb86;
db dummyf_3fb87;
db dummyf_3fb88; // 3a50:5688
db dummyf_3fb89; // 3a50:5689
db dummyf_3fb8a;
db dummyf_3fb8b;
db dummyf_3fb8c; // 3a50:568c
db dummyf_3fb8d; // 3a50:568d
db dummyf_3fb8e;
db dummyf_3fb8f;
db dummyf_3fb90; // 3a50:5690
db dummyf_3fb91; // 3a50:5691
db dummyf_3fb92;
db dummyf_3fb93;
db dummyf_3fb94; // 3a50:5694
db dummyf_3fb95; // 3a50:5695
db dummyf_3fb96;
db dummyf_3fb97;
db dummyf_3fb98; // 3a50:5698
db dummyf_3fb99; // 3a50:5699
db dummyf_3fb9a;
db dummyf_3fb9b;
db dummyf_3fb9c; // 3a50:569c
db dummyf_3fb9d; // 3a50:569d
db dummyf_3fb9e;
db dummyf_3fb9f;
db byte_4e180; // 3a50:56a0
db dummyf_3fba1;
db byte_4e182; // 3a50:56a2
db dummyf_3fba3;
db byte_4e184; // 3a50:56a4
db dummyf_3fba5;
db byte_4e186; // 3a50:56a6
db dummyf_3fba7;
db byte_4e188; // 3a50:56a8
db dummyf_3fba9;
db byte_4e18a; // 3a50:56aa
db dummyf_3fbab;
db byte_4e18c; // 3a50:56ac
db dummyf_3fbad;
db byte_4e18e; // 3a50:56ae
db dummyf_3fbaf;
db byte_4e190; // 3a50:56b0
db dummyf_3fbb1;
db byte_4e192; // 3a50:56b2
db dummyf_3fbb3[32]; // 3a50:56b3
db dummyf_3fbd3;
db dummyf_3fbd4;
db dummyf_3fbd5;
db dummyf_3fbd6;
db dummyf_3fbd7;
db dummyf_3fbd8;
db dummyf_3fbd9;
db dummyf_3fbda;
db dummyf_3fbdb;
db byte_4e1bc; // 3a50:56dc
db dummyf_3fbdd;
db byte_4e1be; // 3a50:56de
db dummyf_3fbdf;
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
db alandinggearrai; // 3a50:571a
db dummyf_3fc1b; // 3a50:571b
db dummyf_3fc1c; // 3a50:571c
db dummyf_3fc1d; // 3a50:571d
db dummyf_3fc1e; // 3a50:571e
db dummyf_3fc1f; // 3a50:571f
db dummyf_3fc20; // 3a50:5720
db dummyf_3fc21; // 3a50:5721
db dummyf_3fc22; // 3a50:5722
db dummyf_3fc23; // 3a50:5723
db dummyf_3fc24; // 3a50:5724
db dummyf_3fc25; // 3a50:5725
db dummyf_3fc26; // 3a50:5726
db dummyf_3fc27; // 3a50:5727
db dummyf_3fc28; // 3a50:5728
db dummyf_3fc29; // 3a50:5729
db dummyf_3fc2a; // 3a50:572a
db dummyf_3fc2b; // 3a50:572b
db dummyf_3fc2c; // 3a50:572c
db dummyf_3fc2d;
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
db a256leftpic; // 3a50:5834
db dummyf_3fd35; // 3a50:5835
db dummyf_3fd36; // 3a50:5836
db dummyf_3fd37; // 3a50:5837
db dummyf_3fd38; // 3a50:5838
db dummyf_3fd39; // 3a50:5839
db dummyf_3fd3a; // 3a50:583a
db dummyf_3fd3b; // 3a50:583b
db dummyf_3fd3c; // 3a50:583c
db dummyf_3fd3d; // 3a50:583d
db dummyf_3fd3e; // 3a50:583e
db dummyf_3fd3f;
db a256rightpic; // 3a50:5840
db dummyf_3fd41; // 3a50:5841
db dummyf_3fd42; // 3a50:5842
db dummyf_3fd43; // 3a50:5843
db dummyf_3fd44; // 3a50:5844
db dummyf_3fd45; // 3a50:5845
db dummyf_3fd46; // 3a50:5846
db dummyf_3fd47; // 3a50:5847
db dummyf_3fd48; // 3a50:5848
db dummyf_3fd49; // 3a50:5849
db dummyf_3fd4a; // 3a50:584a
db dummyf_3fd4b; // 3a50:584b
db dummyf_3fd4c;
db a256rearpic; // 3a50:584d
db dummyf_3fd4e; // 3a50:584e
db dummyf_3fd4f; // 3a50:584f
db dummyf_3fd50; // 3a50:5850
db dummyf_3fd51; // 3a50:5851
db dummyf_3fd52; // 3a50:5852
db dummyf_3fd53; // 3a50:5853
db dummyf_3fd54; // 3a50:5854
db dummyf_3fd55; // 3a50:5855
db dummyf_3fd56; // 3a50:5856
db dummyf_3fd57; // 3a50:5857
db dummyf_3fd58;
db aleftpic; // 3a50:5859
db dummyf_3fd5a; // 3a50:585a
db dummyf_3fd5b; // 3a50:585b
db dummyf_3fd5c; // 3a50:585c
db dummyf_3fd5d; // 3a50:585d
db dummyf_3fd5e; // 3a50:585e
db dummyf_3fd5f; // 3a50:585f
db dummyf_3fd60; // 3a50:5860
db dummyf_3fd61;
db arightpic; // 3a50:5862
db dummyf_3fd63; // 3a50:5863
db dummyf_3fd64; // 3a50:5864
db dummyf_3fd65; // 3a50:5865
db dummyf_3fd66; // 3a50:5866
db dummyf_3fd67; // 3a50:5867
db dummyf_3fd68; // 3a50:5868
db dummyf_3fd69; // 3a50:5869
db dummyf_3fd6a; // 3a50:586a
db dummyf_3fd6b;
db arearpic; // 3a50:586c
db dummyf_3fd6d; // 3a50:586d
db dummyf_3fd6e; // 3a50:586e
db dummyf_3fd6f; // 3a50:586f
db dummyf_3fd70; // 3a50:5870
db dummyf_3fd71; // 3a50:5871
db dummyf_3fd72; // 3a50:5872
db dummyf_3fd73; // 3a50:5873
db dummyf_3fd74;
db dummyf_3fd75;
char asc_4e356[2]; // 3a50:5876
db dummyf_3fd78[2]; // 3a50:5878
char as_0[2]; // 3a50:587a
db dummyf_3fd7c[13]; // 3a50:587c
db dummyf_3fd89[12]; // 3a50:587c
db dummyf_3fd95[13]; // 3a50:587c
dw word_4e382; // 3a50:58a2
db afiring; // 3a50:58a4
db dummyf_3fda5; // 3a50:58a5
db dummyf_3fda6; // 3a50:58a6
db dummyf_3fda7; // 3a50:58a7
db dummyf_3fda8; // 3a50:58a8
db dummyf_3fda9; // 3a50:58a9
db dummyf_3fdaa; // 3a50:58aa
db dummyf_3fdab; // 3a50:58ab
db dummyf_3fdac;
db dummyf_3fdad;
dw word_4e38e; // 3a50:58ae
db afiredby; // 3a50:58b0
db dummyf_3fdb1; // 3a50:58b1
db dummyf_3fdb2; // 3a50:58b2
db dummyf_3fdb3; // 3a50:58b3
db dummyf_3fdb4; // 3a50:58b4
db dummyf_3fdb5; // 3a50:58b5
db dummyf_3fdb6; // 3a50:58b6
db dummyf_3fdb7; // 3a50:58b7
db dummyf_3fdb8; // 3a50:58b8
db dummyf_3fdb9; // 3a50:58b9
db dummyf_3fdba;
char dummyf_3fdbb[4]; // 3a50:58bb
char atakingoff[12]; // 3a50:58bf
db dummyf_3fdcb;
db amisses; // 3a50:58cc
db dummyf_3fdcd; // 3a50:58cd
db dummyf_3fdce; // 3a50:58ce
db dummyf_3fdcf; // 3a50:58cf
db dummyf_3fdd0; // 3a50:58d0
db dummyf_3fdd1; // 3a50:58d1
db dummyf_3fdd2; // 3a50:58d2
db dummyf_3fdd3; // 3a50:58d3
db dummyf_3fdd4;
db adestroyedby; // 3a50:58d5
db dummyf_3fdd6; // 3a50:58d6
db dummyf_3fdd7; // 3a50:58d7
db dummyf_3fdd8; // 3a50:58d8
db dummyf_3fdd9; // 3a50:58d9
db dummyf_3fdda; // 3a50:58da
db dummyf_3fddb; // 3a50:58db
db dummyf_3fddc; // 3a50:58dc
db dummyf_3fddd; // 3a50:58dd
db dummyf_3fdde; // 3a50:58de
db dummyf_3fddf; // 3a50:58df
db dummyf_3fde0; // 3a50:58e0
db dummyf_3fde1; // 3a50:58e1
db dummyf_3fde2; // 3a50:58e2
db dummyf_3fde3;
db adestroyedby_0; // 3a50:58e4
db dummyf_3fde5; // 3a50:58e5
db dummyf_3fde6; // 3a50:58e6
db dummyf_3fde7; // 3a50:58e7
db dummyf_3fde8; // 3a50:58e8
db dummyf_3fde9; // 3a50:58e9
db dummyf_3fdea; // 3a50:58ea
db dummyf_3fdeb; // 3a50:58eb
db dummyf_3fdec; // 3a50:58ec
db dummyf_3fded; // 3a50:58ed
db dummyf_3fdee; // 3a50:58ee
db dummyf_3fdef; // 3a50:58ef
db dummyf_3fdf0; // 3a50:58f0
db dummyf_3fdf1; // 3a50:58f1
db dummyf_3fdf2;
db agroundimpact; // 3a50:58f3
db dummyf_3fdf4; // 3a50:58f4
db dummyf_3fdf5; // 3a50:58f5
db dummyf_3fdf6; // 3a50:58f6
db dummyf_3fdf7; // 3a50:58f7
db dummyf_3fdf8; // 3a50:58f8
db dummyf_3fdf9; // 3a50:58f9
db dummyf_3fdfa; // 3a50:58fa
db dummyf_3fdfb; // 3a50:58fb
db dummyf_3fdfc; // 3a50:58fc
db dummyf_3fdfd; // 3a50:58fd
db dummyf_3fdfe; // 3a50:58fe
db dummyf_3fdff; // 3a50:58ff
db dummyf_3fe00; // 3a50:5900
db dummyf_3fe01;
db ahitby; // 3a50:5902
db dummyf_3fe03; // 3a50:5903
db dummyf_3fe04; // 3a50:5904
db dummyf_3fe05; // 3a50:5905
db dummyf_3fe06; // 3a50:5906
db dummyf_3fe07; // 3a50:5907
db dummyf_3fe08; // 3a50:5908
db dummyf_3fe09;
db aineffective; // 3a50:590a
db dummyf_3fe0b; // 3a50:590b
db dummyf_3fe0c; // 3a50:590c
db dummyf_3fe0d; // 3a50:590d
db dummyf_3fe0e; // 3a50:590e
db dummyf_3fe0f; // 3a50:590f
db dummyf_3fe10; // 3a50:5910
db dummyf_3fe11; // 3a50:5911
db dummyf_3fe12; // 3a50:5912
db dummyf_3fe13; // 3a50:5913
db dummyf_3fe14; // 3a50:5914
db dummyf_3fe15;
char ahitby_0[9]; // 3a50:5916
db dummyf_3fe1f;
char aa[2]; // 3a50:5920
db dummyf_3fe22[32]; // 3a50:5922
db dummyf_3fe42[32]; // 3a50:5942
db dummyf_3fe62[32]; // 3a50:5962
db dummyf_3fe82[32]; // 3a50:5982
db dummyf_3fea2[32]; // 3a50:59a2
db dummyf_3fec2[32]; // 3a50:59c2
db dummyf_3fee2[32]; // 3a50:59e2
db dummyf_3ff02[32]; // 3a50:5a02
db dummyf_3ff22[32]; // 3a50:5a22
db dummyf_3ff42[32]; // 3a50:5a42
db dummyf_3ff62[32]; // 3a50:5a62
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
db aaccel; // 3a50:5b54
db dummyf_40055; // 3a50:5b55
db dummyf_40056; // 3a50:5b56
db dummyf_40057; // 3a50:5b57
db dummyf_40058; // 3a50:5b58
db dummyf_40059;
db atraining; // 3a50:5b5a
db dummyf_4005b; // 3a50:5b5b
db dummyf_4005c; // 3a50:5b5c
db dummyf_4005d; // 3a50:5b5d
db dummyf_4005e; // 3a50:5b5e
db dummyf_4005f; // 3a50:5b5f
db dummyf_40060; // 3a50:5b60
db dummyf_40061; // 3a50:5b61
db dummyf_40062;
db aautopilot; // 3a50:5b63
db dummyf_40064; // 3a50:5b64
db dummyf_40065; // 3a50:5b65
db dummyf_40066; // 3a50:5b66
db dummyf_40067; // 3a50:5b67
db dummyf_40068; // 3a50:5b68
db dummyf_40069; // 3a50:5b69
db dummyf_4006a; // 3a50:5b6a
db dummyf_4006b; // 3a50:5b6b
db dummyf_4006c;
db apressanykeytop; // 3a50:5b6d
db dummyf_4006e; // 3a50:5b6e
db dummyf_4006f; // 3a50:5b6f
db dummyf_40070; // 3a50:5b70
db dummyf_40071; // 3a50:5b71
db dummyf_40072; // 3a50:5b72
db dummyf_40073; // 3a50:5b73
db dummyf_40074; // 3a50:5b74
db dummyf_40075; // 3a50:5b75
db dummyf_40076; // 3a50:5b76
db dummyf_40077; // 3a50:5b77
db dummyf_40078; // 3a50:5b78
db dummyf_40079; // 3a50:5b79
db dummyf_4007a; // 3a50:5b7a
db dummyf_4007b; // 3a50:5b7b
db dummyf_4007c; // 3a50:5b7c
db dummyf_4007d; // 3a50:5b7d
db dummyf_4007e; // 3a50:5b7e
db dummyf_4007f; // 3a50:5b7f
db dummyf_40080; // 3a50:5b80
db dummyf_40081; // 3a50:5b81
db dummyf_40082;
db atac; // 3a50:5b83
db dummyf_40084; // 3a50:5b84
db dummyf_40085; // 3a50:5b85
db dummyf_40086;
char atrackcam[10]; // 3a50:5b87
char aahead[6]; // 3a50:5b91
db arear; // 3a50:5b97
db dummyf_40098; // 3a50:5b98
db dummyf_40099; // 3a50:5b99
db dummyf_4009a; // 3a50:5b9a
db dummyf_4009b;
db aright; // 3a50:5b9c
db dummyf_4009d; // 3a50:5b9d
db dummyf_4009e; // 3a50:5b9e
db dummyf_4009f; // 3a50:5b9f
db dummyf_400a0; // 3a50:5ba0
db dummyf_400a1;
db aleft; // 3a50:5ba2
db dummyf_400a3; // 3a50:5ba3
db dummyf_400a4; // 3a50:5ba4
db dummyf_400a5; // 3a50:5ba5
db dummyf_400a6;
db amap; // 3a50:5ba7
db dummyf_400a8; // 3a50:5ba8
db dummyf_400a9; // 3a50:5ba9
db dummyf_400aa;
db dummyf_400ab;
db dummyf_400ac;
db dummyf_400ad;
db dummyf_400ae;
db dummyf_400af;
dw word_4e690; // 3a50:5bb0
db adestroyedbygun; // 3a50:5bb2
db dummyf_400b3; // 3a50:5bb3
db dummyf_400b4; // 3a50:5bb4
db dummyf_400b5; // 3a50:5bb5
db dummyf_400b6; // 3a50:5bb6
db dummyf_400b7; // 3a50:5bb7
db dummyf_400b8; // 3a50:5bb8
db dummyf_400b9; // 3a50:5bb9
db dummyf_400ba; // 3a50:5bba
db dummyf_400bb; // 3a50:5bbb
db dummyf_400bc; // 3a50:5bbc
db dummyf_400bd; // 3a50:5bbd
db dummyf_400be; // 3a50:5bbe
db dummyf_400bf; // 3a50:5bbf
db dummyf_400c0; // 3a50:5bc0
db dummyf_400c1; // 3a50:5bc1
db dummyf_400c2; // 3a50:5bc2
db dummyf_400c3; // 3a50:5bc3
db dummyf_400c4; // 3a50:5bc4
db dummyf_400c5; // 3a50:5bc5
db dummyf_400c6; // 3a50:5bc6
db dummyf_400c7;
db ahitbygunfire; // 3a50:5bc8
db dummyf_400c9; // 3a50:5bc9
db dummyf_400ca; // 3a50:5bca
db dummyf_400cb; // 3a50:5bcb
db dummyf_400cc; // 3a50:5bcc
db dummyf_400cd; // 3a50:5bcd
db dummyf_400ce; // 3a50:5bce
db dummyf_400cf; // 3a50:5bcf
db dummyf_400d0; // 3a50:5bd0
db dummyf_400d1; // 3a50:5bd1
db dummyf_400d2; // 3a50:5bd2
db dummyf_400d3; // 3a50:5bd3
db dummyf_400d4; // 3a50:5bd4
db dummyf_400d5; // 3a50:5bd5
db dummyf_400d6;
db adestroyedbygun_0; // 3a50:5bd7
db dummyf_400d8; // 3a50:5bd8
db dummyf_400d9; // 3a50:5bd9
db dummyf_400da; // 3a50:5bda
db dummyf_400db; // 3a50:5bdb
db dummyf_400dc; // 3a50:5bdc
db dummyf_400dd; // 3a50:5bdd
db dummyf_400de; // 3a50:5bde
db dummyf_400df; // 3a50:5bdf
db dummyf_400e0; // 3a50:5be0
db dummyf_400e1; // 3a50:5be1
db dummyf_400e2; // 3a50:5be2
db dummyf_400e3; // 3a50:5be3
db dummyf_400e4; // 3a50:5be4
db dummyf_400e5; // 3a50:5be5
db dummyf_400e6; // 3a50:5be6
db dummyf_400e7; // 3a50:5be7
db dummyf_400e8; // 3a50:5be8
db dummyf_400e9; // 3a50:5be9
db dummyf_400ea; // 3a50:5bea
db dummyf_400eb; // 3a50:5beb
db dummyf_400ec;
db aat_0; // 3a50:5bed
db dummyf_400ee[32]; // 3a50:5bee
db dummyf_4010e[32]; // 3a50:5c0e
db dummyf_4012e; // 3a50:5c2e
db dummyf_4012f; // 3a50:5c2f
db dummyf_40130; // 3a50:5c30
db dummyf_40131; // 3a50:5c31
db dummyf_40132; // 3a50:5c32
db dummyf_40133;
db dummyf_40134; // 3a50:5c34
db dummyf_40135; // 3a50:5c35
db dummyf_40136; // 3a50:5c36
db dummyf_40137; // 3a50:5c37
db dummyf_40138; // 3a50:5c38
db dummyf_40139; // 3a50:5c39
db dummyf_4013a;
db dummyf_4013b; // 3a50:5c3b
db dummyf_4013c;
db dummyf_4013d; // 3a50:5c3d
db dummyf_4013e; // 3a50:5c3e
db dummyf_4013f; // 3a50:5c3f
db dummyf_40140;
db dummyf_40141;
db dummyf_40142; // 3a50:5c42
db dummyf_40143; // 3a50:5c43
db dummyf_40144; // 3a50:5c44
db dummyf_40145; // 3a50:5c45
db dummyf_40146;
db dummyf_40147; // 3a50:5c47
db dummyf_40148; // 3a50:5c48
db dummyf_40149;
db aopenerroron3d3_0; // 3a50:5c4a
db dummyf_4014b; // 3a50:5c4b
db dummyf_4014c; // 3a50:5c4c
db dummyf_4014d; // 3a50:5c4d
db dummyf_4014e; // 3a50:5c4e
db dummyf_4014f; // 3a50:5c4f
db dummyf_40150; // 3a50:5c50
db dummyf_40151; // 3a50:5c51
db dummyf_40152; // 3a50:5c52
db dummyf_40153; // 3a50:5c53
db dummyf_40154; // 3a50:5c54
db dummyf_40155; // 3a50:5c55
db dummyf_40156; // 3a50:5c56
db dummyf_40157; // 3a50:5c57
db dummyf_40158; // 3a50:5c58
db dummyf_40159; // 3a50:5c59
db dummyf_4015a; // 3a50:5c5a
db dummyf_4015b; // 3a50:5c5b
db dummyf_4015c; // 3a50:5c5c
db dummyf_4015d;
db byte_4e73e[11]; // 3a50:5c5e
db dummyf_40169[11]; // 3a50:5c5e
db dummyf_40174[12]; // 3a50:5c5e
db dummyf_40180[11]; // 3a50:5c5e
db dummyf_4018b[11]; // 3a50:5c5e
db dummyf_40196[11]; // 3a50:5c5e
db dummyf_401a1[11]; // 3a50:5c5e
db dummyf_401ac[2]; // 3a50:5c5e
db amemoryavailabl; // 3a50:5cae
db dummyf_401af; // 3a50:5caf
db dummyf_401b0; // 3a50:5cb0
db dummyf_401b1; // 3a50:5cb1
db dummyf_401b2; // 3a50:5cb2
db dummyf_401b3; // 3a50:5cb3
db dummyf_401b4; // 3a50:5cb4
db dummyf_401b5; // 3a50:5cb5
db dummyf_401b6; // 3a50:5cb6
db dummyf_401b7; // 3a50:5cb7
db dummyf_401b8; // 3a50:5cb8
db dummyf_401b9; // 3a50:5cb9
db dummyf_401ba; // 3a50:5cba
db dummyf_401bb; // 3a50:5cbb
db dummyf_401bc; // 3a50:5cbc
db dummyf_401bd; // 3a50:5cbd
db dummyf_401be; // 3a50:5cbe
db dummyf_401bf;
db ajiffiesframe; // 3a50:5cc0
db dummyf_401c1; // 3a50:5cc1
db dummyf_401c2; // 3a50:5cc2
db dummyf_401c3; // 3a50:5cc3
db dummyf_401c4; // 3a50:5cc4
db dummyf_401c5; // 3a50:5cc5
db dummyf_401c6; // 3a50:5cc6
db dummyf_401c7; // 3a50:5cc7
db dummyf_401c8; // 3a50:5cc8
db dummyf_401c9; // 3a50:5cc9
db dummyf_401ca; // 3a50:5cca
db dummyf_401cb; // 3a50:5ccb
db dummyf_401cc; // 3a50:5ccc
db dummyf_401cd; // 3a50:5ccd
db dummyf_401ce;
db asounds; // 3a50:5ccf
db dummyf_401d0; // 3a50:5cd0
db dummyf_401d1; // 3a50:5cd1
db dummyf_401d2; // 3a50:5cd2
db dummyf_401d3; // 3a50:5cd3
db dummyf_401d4; // 3a50:5cd4
db dummyf_401d5; // 3a50:5cd5
db dummyf_401d6;
db adirector; // 3a50:5cd7
db dummyf_401d8; // 3a50:5cd8
db dummyf_401d9; // 3a50:5cd9
db dummyf_401da; // 3a50:5cda
db dummyf_401db; // 3a50:5cdb
db dummyf_401dc; // 3a50:5cdc
db dummyf_401dd; // 3a50:5cdd
db dummyf_401de; // 3a50:5cde
db dummyf_401df; // 3a50:5cdf
db dummyf_401e0;
db aoff; // 3a50:5ce1
db dummyf_401e2; // 3a50:5ce2
db dummyf_401e3; // 3a50:5ce3
db dummyf_401e4;
db awaypointprimar; // 3a50:5ce5
db dummyf_401e6; // 3a50:5ce6
db dummyf_401e7; // 3a50:5ce7
db dummyf_401e8; // 3a50:5ce8
db dummyf_401e9; // 3a50:5ce9
db dummyf_401ea; // 3a50:5cea
db dummyf_401eb; // 3a50:5ceb
db dummyf_401ec; // 3a50:5cec
db dummyf_401ed; // 3a50:5ced
db dummyf_401ee; // 3a50:5cee
db dummyf_401ef; // 3a50:5cef
db dummyf_401f0; // 3a50:5cf0
db dummyf_401f1; // 3a50:5cf1
db dummyf_401f2; // 3a50:5cf2
db dummyf_401f3; // 3a50:5cf3
db dummyf_401f4; // 3a50:5cf4
db dummyf_401f5; // 3a50:5cf5
db dummyf_401f6; // 3a50:5cf6
db dummyf_401f7; // 3a50:5cf7
db dummyf_401f8; // 3a50:5cf8
db dummyf_401f9; // 3a50:5cf9
db dummyf_401fa; // 3a50:5cfa
db dummyf_401fb; // 3a50:5cfb
db dummyf_401fc; // 3a50:5cfc
db dummyf_401fd;
db awaypointsecond; // 3a50:5cfe
db dummyf_401ff; // 3a50:5cff
db dummyf_40200; // 3a50:5d00
db dummyf_40201; // 3a50:5d01
db dummyf_40202; // 3a50:5d02
db dummyf_40203; // 3a50:5d03
db dummyf_40204; // 3a50:5d04
db dummyf_40205; // 3a50:5d05
db dummyf_40206; // 3a50:5d06
db dummyf_40207; // 3a50:5d07
db dummyf_40208; // 3a50:5d08
db dummyf_40209; // 3a50:5d09
db dummyf_4020a; // 3a50:5d0a
db dummyf_4020b; // 3a50:5d0b
db dummyf_4020c; // 3a50:5d0c
db dummyf_4020d; // 3a50:5d0d
db dummyf_4020e; // 3a50:5d0e
db dummyf_4020f; // 3a50:5d0f
db dummyf_40210; // 3a50:5d10
db dummyf_40211; // 3a50:5d11
db dummyf_40212; // 3a50:5d12
db dummyf_40213; // 3a50:5d13
db dummyf_40214; // 3a50:5d14
db dummyf_40215; // 3a50:5d15
db dummyf_40216; // 3a50:5d16
db dummyf_40217; // 3a50:5d17
db dummyf_40218;
db awaypointfriend; // 3a50:5d19
db dummyf_4021a; // 3a50:5d1a
db dummyf_4021b; // 3a50:5d1b
db dummyf_4021c; // 3a50:5d1c
db dummyf_4021d; // 3a50:5d1d
db dummyf_4021e; // 3a50:5d1e
db dummyf_4021f; // 3a50:5d1f
db dummyf_40220; // 3a50:5d20
db dummyf_40221; // 3a50:5d21
db dummyf_40222; // 3a50:5d22
db dummyf_40223; // 3a50:5d23
db dummyf_40224; // 3a50:5d24
db dummyf_40225; // 3a50:5d25
db dummyf_40226; // 3a50:5d26
db dummyf_40227; // 3a50:5d27
db dummyf_40228; // 3a50:5d28
db dummyf_40229; // 3a50:5d29
db dummyf_4022a; // 3a50:5d2a
db dummyf_4022b; // 3a50:5d2b
db dummyf_4022c; // 3a50:5d2c
db dummyf_4022d; // 3a50:5d2d
db dummyf_4022e; // 3a50:5d2e
db dummyf_4022f; // 3a50:5d2f
db dummyf_40230; // 3a50:5d30
db dummyf_40231; // 3a50:5d31
db dummyf_40232; // 3a50:5d32
db dummyf_40233;
db aautopilotoff; // 3a50:5d34
db dummyf_40235; // 3a50:5d35
db dummyf_40236; // 3a50:5d36
db dummyf_40237; // 3a50:5d37
db dummyf_40238; // 3a50:5d38
db dummyf_40239; // 3a50:5d39
db dummyf_4023a; // 3a50:5d3a
db dummyf_4023b; // 3a50:5d3b
db dummyf_4023c; // 3a50:5d3c
db dummyf_4023d; // 3a50:5d3d
db dummyf_4023e; // 3a50:5d3e
db dummyf_4023f; // 3a50:5d3f
db dummyf_40240; // 3a50:5d40
db dummyf_40241;
db aautopiloton; // 3a50:5d42
db dummyf_40243; // 3a50:5d43
db dummyf_40244; // 3a50:5d44
db dummyf_40245; // 3a50:5d45
db dummyf_40246; // 3a50:5d46
db dummyf_40247; // 3a50:5d47
db dummyf_40248; // 3a50:5d48
db dummyf_40249; // 3a50:5d49
db dummyf_4024a; // 3a50:5d4a
db dummyf_4024b; // 3a50:5d4b
db dummyf_4024c; // 3a50:5d4c
db dummyf_4024d; // 3a50:5d4d
db dummyf_4024e;
db dummyf_4024f;
dw word_4e830; // 3a50:5d50
dw word_4e832; // 3a50:5d52
dw word_4e834; // 3a50:5d54
dw word_4e836; // 3a50:5d56
dw word_4e838; // 3a50:5d58
dw word_4e83a[2]; // 3a50:5d5a
db anotavailable; // 3a50:5d5e
db dummyf_4025f; // 3a50:5d5f
db dummyf_40260; // 3a50:5d60
db dummyf_40261; // 3a50:5d61
db dummyf_40262; // 3a50:5d62
db dummyf_40263; // 3a50:5d63
db dummyf_40264; // 3a50:5d64
db dummyf_40265; // 3a50:5d65
db dummyf_40266; // 3a50:5d66
db dummyf_40267; // 3a50:5d67
db dummyf_40268; // 3a50:5d68
db dummyf_40269; // 3a50:5d69
db dummyf_4026a; // 3a50:5d6a
db dummyf_4026b; // 3a50:5d6b
db dummyf_4026c;
db aarmed; // 3a50:5d6d
db dummyf_4026e; // 3a50:5d6e
db dummyf_4026f; // 3a50:5d6f
db dummyf_40270; // 3a50:5d70
db dummyf_40271; // 3a50:5d71
db dummyf_40272; // 3a50:5d72
db dummyf_40273;
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
db byte_4eabe; // 3a50:5fde
db dummyf_404df;
db byte_4eac0; // 3a50:5fe0
db dummyf_404e1;
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
db _off_4ec18; // 3a50:6138
db dummyf_40639; // 3a50:6139
dw word_4ec1a; // 3a50:613a
db dummyf_4063c[78]; // 3a50:613c
db aacfileinfo; // 3a50:618a
db dummyf_4068b; // 3a50:618b
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
dw word_4ec79; // 3a50:6199
dw word_4ec7b; // 3a50:619b
db dummyf_4069d;
db dummyf_4069e;
db dummyf_4069f;
db dummyf_406a0;
db dummyf_406a1;
db dummyf_406a2;
db dummyf_406a3;
db dummyf_406a4;
dw word_4ec85; // 3a50:61a5
db byte_4ec87; // 3a50:61a7
db dummyf_406a8;
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
db byte_4ecc8; // 3a50:61e8
db dummyf_406e9[32]; // 3a50:61e9
db dummyf_40709[32]; // 3a50:6209
db dummyf_40729[32]; // 3a50:6229
db dummyf_40749[32]; // 3a50:6249
db dummyf_40769[32]; // 3a50:6269
db dummyf_40789[32]; // 3a50:6289
db dummyf_407a9[32]; // 3a50:62a9
db dummyf_407c9[32]; // 3a50:62c9
db dummyf_407e9[32]; // 3a50:62e9
db dummyf_40809;
db dummyf_4080a;
db dummyf_4080b;
db dummyf_4080c;
db dummyf_4080d;
db dummyf_4080e;
db dummyf_4080f;
db dummyf_40810;
db dummyf_40811;
db dummyf_40812;
db dummyf_40813;
db dummyf_40814;
db dummyf_40815;
dw word_4edf6; // 3a50:6316
dw word_4edf8; // 3a50:6318
dw word_4edfa; // 3a50:631a
dw word_4edfc[2]; // 3a50:631c
dw word_4ee00[2]; // 3a50:6320
db dummyf_40824;
db byte_4ee05; // 3a50:6325
db byte_4ee06; // 3a50:6326
db dummyf_40827;
db dummyf_40828;
db dummyf_40829;
db byte_4ee0a; // 3a50:632a
db dummyf_4082b;
dw word_4ee0c[2]; // 3a50:632c
db byte_4ee10[4]; // 3a50:6330
db byte_4ee14; // 3a50:6334
db dummyf_40835;
dw word_4ee16; // 3a50:6336
db byte_4ee18; // 3a50:6338
db dummyf_40839;
db dummyf_4083a;
db dummyf_4083b;
db byte_4ee1c; // 3a50:633c
db dummyf_4083d;
db dummyf_4083e;
db dummyf_4083f;
db dummyf_40840; // 3a50:6340
db dummyf_40841; // 3a50:6341
dw word_4ee22; // 3a50:6342
dw word_4ee24; // 3a50:6344
dw word_4ee26[6]; // 3a50:6346
db ar6000stackover; // 3a50:6352
db dummyf_40853; // 3a50:6353
db dummyf_40854; // 3a50:6354
db dummyf_40855; // 3a50:6355
db dummyf_40856; // 3a50:6356
db dummyf_40857; // 3a50:6357
db dummyf_40858; // 3a50:6358
db dummyf_40859; // 3a50:6359
db dummyf_4085a; // 3a50:635a
db dummyf_4085b; // 3a50:635b
db dummyf_4085c; // 3a50:635c
db dummyf_4085d; // 3a50:635d
db dummyf_4085e; // 3a50:635e
db dummyf_4085f; // 3a50:635f
db dummyf_40860; // 3a50:6360
db dummyf_40861; // 3a50:6361
db dummyf_40862; // 3a50:6362
db dummyf_40863; // 3a50:6363
db dummyf_40864; // 3a50:6364
db dummyf_40865; // 3a50:6365
db dummyf_40866; // 3a50:6366
db dummyf_40867; // 3a50:6367
db dummyf_40868; // 3a50:6368
db dummyf_40869; // 3a50:6369
db dummyf_4086a; // 3a50:636a
db dummyf_4086b;
db dummyf_4086c; // 3a50:636c
db dummyf_4086d;
db ar6003integerdi; // 3a50:636e
db dummyf_4086f[32]; // 3a50:636f
db ar6009notenough; // 3a50:638f
db dummyf_40890[32]; // 3a50:6390
db dummyf_408b0[32]; // 3a50:63b0
db dummyf_408d0; // 3a50:63d0
db dummyf_408d1;
db dummyf_408d2; // 3a50:63d2
db dummyf_408d3;
db ar6002floatingp; // 3a50:63d4
db dummyf_408d5[32]; // 3a50:63d5
db dummyf_408f5; // 3a50:63f5
db dummyf_408f6; // 3a50:63f6
db dummyf_408f7; // 3a50:63f7
db dummyf_408f8;
db dummyf_408f9; // 3a50:63f9
db dummyf_408fa;
db ar6001nullpoint; // 3a50:63fb
db dummyf_408fc[32]; // 3a50:63fc
db dummyf_4091c; // 3a50:641c
db dummyf_4091d;
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
dw word_4f1fe[6]; // 3a50:671e
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
db dummyf_40c44; // 3a50:6744
db dummyf_40c45; // 3a50:6745
dw word_4f226; // 3a50:6746
dw word_4f228; // 3a50:6748
dw word_4f22a; // 3a50:674a
dw word_4f22c; // 3a50:674c
db dummyf_40c4e[32]; // 3a50:674e
db dummyf_40c6e[32]; // 3a50:676e
db dummyf_40c8e[32]; // 3a50:678e
db dummyf_40cae[32]; // 3a50:67ae
db dummyf_40cce[32]; // 3a50:67ce
db dummyf_40cee[32]; // 3a50:67ee
db dummyf_40d0e[32]; // 3a50:680e
db dummyf_40d2e[32]; // 3a50:682e
db dummyf_40d4e[32]; // 3a50:684e
db dummyf_40d6e[32]; // 3a50:686e
db dummyf_40d8e[32]; // 3a50:688e
db dummyf_40dae[32]; // 3a50:68ae
db dummyf_40dce[32]; // 3a50:68ce
db dummyf_40dee[32]; // 3a50:68ee
db dummyf_40e0e[32]; // 3a50:690e
db dummyf_40e2e[32]; // 3a50:692e
dw word_4f42e; // 3a50:694e
dw word_4f430; // 3a50:6950
db dummyf_40e52[32]; // 3a50:6952
db dummyf_40e72[32]; // 3a50:6972
db dummyf_40e92[32]; // 3a50:6992
db dummyf_40eb2[32]; // 3a50:69b2
db dummyf_40ed2[32]; // 3a50:69d2
db dummyf_40ef2[32]; // 3a50:69f2
db dummyf_40f12[32]; // 3a50:6a12
db dummyf_40f32[32]; // 3a50:6a32
db dummyf_40f52[32]; // 3a50:6a52
db dummyf_40f72[32]; // 3a50:6a72
db dummyf_40f92[32]; // 3a50:6a92
db dummyf_40fb2[32]; // 3a50:6ab2
db dummyf_40fd2[32]; // 3a50:6ad2
db dummyf_40ff2[32]; // 3a50:6af2
db dummyf_41012[32]; // 3a50:6b12
db dummyf_41032[32]; // 3a50:6b32
dw word_4f632[8]; // 3a50:6b52
dw dummyf_41062[8]; // 3a50:6b52
dw dummyf_41072[7]; // 3a50:6b52
dw dummyf_41080[8]; // 3a50:6b52
dw dummyf_41090[8]; // 3a50:6b52
dw dummyf_410a0[7]; // 3a50:6b52
dw dummyf_410ae[8]; // 3a50:6b52
dw dummyf_410be[7]; // 3a50:6b52
dw dummyf_410cc[7]; // 3a50:6b52
dw dummyf_410da[7]; // 3a50:6b52
dw dummyf_410e8[8]; // 3a50:6b52
dw dummyf_410f8[8]; // 3a50:6b52
dw dummyf_41108[8]; // 3a50:6b52
dw dummyf_41118[8]; // 3a50:6b52
dw dummyf_41128[7]; // 3a50:6b52
dw dummyf_41136[8]; // 3a50:6b52
dw dummyf_41146[8]; // 3a50:6b52
dw dummyf_41156[8]; // 3a50:6b52
dw dummyf_41166[8]; // 3a50:6b52
dw dummyf_41176[8]; // 3a50:6b52
dw dummyf_41186[8]; // 3a50:6b52
dw dummyf_41196[8]; // 3a50:6b52
dw dummyf_411a6[8]; // 3a50:6b52
dw dummyf_411b6[8]; // 3a50:6b52
dw dummyf_411c6[8]; // 3a50:6b52
dw dummyf_411d6[8]; // 3a50:6b52
dw dummyf_411e6[8]; // 3a50:6b52
dw dummyf_411f6[8]; // 3a50:6b52
dw dummyf_41206[8]; // 3a50:6b52
dw dummyf_41216[8]; // 3a50:6b52
dw dummyf_41226[8]; // 3a50:6b52
dw dummyf_41236[8]; // 3a50:6b52
dw dummyf_41246[7]; // 3a50:6b52
dw word_4f834; // 3a50:6d54
dw word_4f836[8]; // 3a50:6d56
dw dummyf_41266[8]; // 3a50:6d56
dw dummyf_41276[7]; // 3a50:6d56
dw dummyf_41284[8]; // 3a50:6d56
dw dummyf_41294[8]; // 3a50:6d56
dw dummyf_412a4[7]; // 3a50:6d56
dw dummyf_412b2[7]; // 3a50:6d56
dw dummyf_412c0[8]; // 3a50:6d56
dw dummyf_412d0[8]; // 3a50:6d56
dw dummyf_412e0[8]; // 3a50:6d56
dw dummyf_412f0[7]; // 3a50:6d56
dw dummyf_412fe[7]; // 3a50:6d56
dw dummyf_4130c[7]; // 3a50:6d56
dw dummyf_4131a[7]; // 3a50:6d56
dw dummyf_41328[8]; // 3a50:6d56
dw dummyf_41338[8]; // 3a50:6d56
dw dummyf_41348[8]; // 3a50:6d56
dw dummyf_41358[7]; // 3a50:6d56
dw dummyf_41366[7]; // 3a50:6d56
dw dummyf_41374[7]; // 3a50:6d56
dw dummyf_41382[7]; // 3a50:6d56
dw dummyf_41390[7]; // 3a50:6d56
dw dummyf_4139e[8]; // 3a50:6d56
dw dummyf_413ae[8]; // 3a50:6d56
dw dummyf_413be[8]; // 3a50:6d56
dw dummyf_413ce[8]; // 3a50:6d56
dw dummyf_413de[8]; // 3a50:6d56
dw dummyf_413ee[8]; // 3a50:6d56
dw dummyf_413fe[8]; // 3a50:6d56
dw dummyf_4140e[8]; // 3a50:6d56
dw dummyf_4141e[8]; // 3a50:6d56
dw dummyf_4142e[8]; // 3a50:6d56
dw dummyf_4143e[8]; // 3a50:6d56
dw dummyf_4144e[5]; // 3a50:6d56
dw word_4fa38[8]; // 3a50:6f58
dw dummyf_41468[8]; // 3a50:6f58
dw dummyf_41478[8]; // 3a50:6f58
dw dummyf_41488[7]; // 3a50:6f58
dw dummyf_41496[8]; // 3a50:6f58
dw dummyf_414a6[7]; // 3a50:6f58
dw dummyf_414b4[8]; // 3a50:6f58
dw dummyf_414c4[8]; // 3a50:6f58
dw dummyf_414d4[7]; // 3a50:6f58
dw dummyf_414e2[9]; // 3a50:6f58
dw dummyf_414f4[8]; // 3a50:6f58
dw dummyf_41504[8]; // 3a50:6f58
dw dummyf_41514[8]; // 3a50:6f58
dw dummyf_41524[8]; // 3a50:6f58
dw dummyf_41534[8]; // 3a50:6f58
dw dummyf_41544[8]; // 3a50:6f58
dw dummyf_41554[8]; // 3a50:6f58
dw dummyf_41564[8]; // 3a50:6f58
dw dummyf_41574[8]; // 3a50:6f58
dw dummyf_41584[7]; // 3a50:6f58
dw dummyf_41592[8]; // 3a50:6f58
dw dummyf_415a2[4]; // 3a50:6f58
db byte_4fb8a[2]; // 3a50:70aa
dw word_4fb8c[8]; // 3a50:70ac
dw dummyf_415bc[7]; // 3a50:70ac
dw dummyf_415ca[8]; // 3a50:70ac
dw dummyf_415da[8]; // 3a50:70ac
dw dummyf_415ea[8]; // 3a50:70ac
dw dummyf_415fa[7]; // 3a50:70ac
dw dummyf_41608[8]; // 3a50:70ac
dw dummyf_41618[8]; // 3a50:70ac
dw dummyf_41628[8]; // 3a50:70ac
dw dummyf_41638[7]; // 3a50:70ac
dw dummyf_41646[8]; // 3a50:70ac
dw dummyf_41656[8]; // 3a50:70ac
dw dummyf_41666[8]; // 3a50:70ac
dw dummyf_41676[8]; // 3a50:70ac
dw dummyf_41686[7]; // 3a50:70ac
dw dummyf_41694[8]; // 3a50:70ac
dw dummyf_416a4[8]; // 3a50:70ac
dw dummyf_416b4[8]; // 3a50:70ac
dw dummyf_416c4[8]; // 3a50:70ac
dw dummyf_416d4[7]; // 3a50:70ac
dw dummyf_416e2[8]; // 3a50:70ac
dw dummyf_416f2[8]; // 3a50:70ac
dw dummyf_41702[8]; // 3a50:70ac
dw dummyf_41712[7]; // 3a50:70ac
dw dummyf_41720[8]; // 3a50:70ac
dw dummyf_41730[7]; // 3a50:70ac
dw dummyf_4173e[8]; // 3a50:70ac
dw dummyf_4174e[8]; // 3a50:70ac
dw dummyf_4175e[8]; // 3a50:70ac
dw dummyf_4176e[7]; // 3a50:70ac
dw dummyf_4177c[8]; // 3a50:70ac
dw dummyf_4178c[8]; // 3a50:70ac
dw dummyf_4179c[7]; // 3a50:70ac
dw dummyf_417aa[7]; // 3a50:70ac
dw dummyf_417b8[8]; // 3a50:70ac
dw dummyf_417c8[7]; // 3a50:70ac
dw dummyf_417d6[7]; // 3a50:70ac
dw dummyf_417e4[11]; // 3a50:70ac
dw dummyf_417fa[8]; // 3a50:70ac
dw dummyf_4180a[7]; // 3a50:70ac
dw dummyf_41818[7]; // 3a50:70ac
dw dummyf_41826[8]; // 3a50:70ac
dw dummyf_41836[8]; // 3a50:70ac
dw dummyf_41846[8]; // 3a50:70ac
dw dummyf_41856[8]; // 3a50:70ac
dw dummyf_41866[8]; // 3a50:70ac
dw dummyf_41876[7]; // 3a50:70ac
dw dummyf_41884[7]; // 3a50:70ac
dw dummyf_41892[10]; // 3a50:70ac
dw dummyf_418a6[8]; // 3a50:70ac
dw dummyf_418b6[7]; // 3a50:70ac
dw dummyf_418c4[7]; // 3a50:70ac
dw dummyf_418d2[8]; // 3a50:70ac
dw dummyf_418e2[8]; // 3a50:70ac
dw dummyf_418f2[8]; // 3a50:70ac
dw dummyf_41902[8]; // 3a50:70ac
dw dummyf_41912[8]; // 3a50:70ac
dw dummyf_41922[8]; // 3a50:70ac
dw dummyf_41932[8]; // 3a50:70ac
dw dummyf_41942[8]; // 3a50:70ac
dw dummyf_41952[8]; // 3a50:70ac
dw dummyf_41962[8]; // 3a50:70ac
dw dummyf_41972[8]; // 3a50:70ac
dw dummyf_41982[8]; // 3a50:70ac
dw dummyf_41992[8]; // 3a50:70ac
dw dummyf_419a2[8]; // 3a50:70ac
dw dummyf_419b2[7]; // 3a50:70ac
dw dummyf_419c0; // 3a50:70ac
dw dummyf_419c2[7]; // 3a50:74c2
dw dummyf_419d0[7]; // 3a50:74c2
dw dummyf_419de[8]; // 3a50:74c2
dw dummyf_419ee[7]; // 3a50:74c2
dw dummyf_419fc[8]; // 3a50:74c2
dw dummyf_41a0c[8]; // 3a50:74c2
dw dummyf_41a1c[8]; // 3a50:74c2
dw dummyf_41a2c[8]; // 3a50:74c2
dw dummyf_41a3c[7]; // 3a50:74c2
dw dummyf_41a4a[8]; // 3a50:74c2
dw dummyf_41a5a[8]; // 3a50:74c2
dw dummyf_41a6a[8]; // 3a50:74c2
dw dummyf_41a7a[8]; // 3a50:74c2
dw dummyf_41a8a[8]; // 3a50:74c2
dw dummyf_41a9a[8]; // 3a50:74c2
dw dummyf_41aaa[8]; // 3a50:74c2
dw dummyf_41aba[8]; // 3a50:74c2
dw dummyf_41aca[7]; // 3a50:74c2
dw dummyf_41ad8[8]; // 3a50:74c2
dw dummyf_41ae8[8]; // 3a50:74c2
dw dummyf_41af8[8]; // 3a50:74c2
dw dummyf_41b08[8]; // 3a50:74c2
dw dummyf_41b18[7]; // 3a50:74c2
dw dummyf_41b26[7]; // 3a50:74c2
dw dummyf_41b34[7]; // 3a50:74c2
dw dummyf_41b42[8]; // 3a50:74c2
dw dummyf_41b52[8]; // 3a50:74c2
dw dummyf_41b62[8]; // 3a50:74c2
dw dummyf_41b72[8]; // 3a50:74c2
dw dummyf_41b82[8]; // 3a50:74c2
dw dummyf_41b92[9]; // 3a50:74c2
dw dummyf_41ba4[7]; // 3a50:74c2
dw dummyf_41bb2[8]; // 3a50:74c2
dw dummyf_41bc2[8]; // 3a50:74c2
dw dummyf_41bd2[8]; // 3a50:74c2
dw dummyf_41be2[8]; // 3a50:74c2
dw dummyf_41bf2[8]; // 3a50:74c2
dw dummyf_41c02[8]; // 3a50:74c2
dw dummyf_41c12[8]; // 3a50:74c2
dw dummyf_41c22[8]; // 3a50:74c2
dw dummyf_41c32[3]; // 3a50:74c2
db dummyf_41c38[401];
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
db dummyf_441fc[32]; // 3a50:9cfc
db dummyf_4421c[32]; // 3a50:9d1c
db dummyf_4423c[32]; // 3a50:9d3c
db dummyf_4425c[32]; // 3a50:9d5c
db dummyf_4427c[32]; // 3a50:9d7c
db dummyf_4429c[32]; // 3a50:9d9c
db dummyf_442bc[32]; // 3a50:9dbc
db dummyf_442dc;
db dummyf_442dd;
db dummyf_442de;
db dummyf_442df;
db dummyf_442e0;
db dummyf_442e1;
db dummyf_442e2;
db dummyf_442e3;
db dummyf_442e4;
db dummyf_442e5;
db dummyf_442e6;
db dummyf_442e7;
db dummyf_442e8;
db dummyf_442e9;
db dummyf_442ea;
db dummyf_442eb;
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
db dummyf_4451c[4];
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


#ifndef ___DATA_H__
#define ___DATA_H__
#include "../asm.h"


#pragma pack(push, 1)
namespace m2c{
struct Memory{
db dummy7_0[6688];
db dummy7_1a20[404];
db dummy7_1bb4[11]; // 01a2:0194
db dummy7_1bbf[11]; // 01a2:0194
db dummy7_1bca[11]; // 01a2:0194
db dummy7_1bd5[9]; // 01a2:0194
db dummy7_1bde[111];
db dummy7_1c4d[2]; // 01a2:022d
dw word_1022f; // 01a2:022f
db dummy7_1c51[3]; // 01a2:0231
dw word_10234; // 01a2:0234
db dummy7_1c56[11]; // 01a2:0236
db dummy7_1c61; // 01a2:0236
db byte_10242; // 01a2:0242
db byte_10243; // 01a2:0243
db byte_10244; // 01a2:0244
db dummy7_1c65; // 01a2:0245
db dummy7_1c66; // 01a2:0246
db dummy7_1c67; // 01a2:0247
dw dummy7_1c68; // 01a2:0248
db dummy7_1c6a[4]; // 01a2:024a
dw word_1024e; // 01a2:024e
dw word_10250; // 01a2:0250
db dummy7_1c72[99];
db byte_102b5; // 01a2:02b5
dw word_102b6; // 01a2:02b6
dw word_102b8; // 01a2:02b8
db dummy7_1cda[8]; // 01a2:02ba
dw word_102c2; // 01a2:02c2
dw word_102c4; // 01a2:02c4
dw word_102c6; // 01a2:02c6
db dummy7_1ce8[4]; // 01a2:02c8
dw word_102cc; // 01a2:02cc
db dummy7_1cee[8]; // 01a2:02ce
dw dummy7_1cf6; // 01a2:02d6
dw word_102d8; // 01a2:02d8
dw word_102da; // 01a2:02da
dw word_102dc; // 01a2:02dc
dw word_102de; // 01a2:02de
db dummy7_1d00[16];
db dummy7_1d10[11]; // 01a2:02f0
db dummy7_1d1b[12]; // 01a2:02f0
db dummy7_1d27[10]; // 01a2:02f0
db dummy7_1d31[12]; // 01a2:02f0
db dummy7_1d3d[11]; // 01a2:02f0
db dummy7_1d48[10]; // 01a2:02f0
db dummy7_1d52[11]; // 01a2:02f0
db dummy7_1d5d[6]; // 01a2:02f0
dw word_10343; // 01a2:0343
dw word_10345; // 01a2:0345
db dummy7_1d67[3]; // 01a2:0347
db dummy7_1d6a[1590];
dw word_10980; // 01a2:0980
db dummy7_23a2[5900];
db dummy7_3aae; // 01a2:208e
dw word_1208f; // 01a2:208f
db dummy7_3ab1[11];
db dummy7_3abc; // 01a2:209c
db dummy7_3abd[976];
db dummy7_3e8d[11]; // 01a2:246d
db dummy7_3e98[11]; // 01a2:246d
db byte_12483; // 01a2:2483
db dummy7_3ea4[39];
dw dummy7_3ecb; // 01a2:24ab
dw word_124ad; // 01a2:24ad
db dummy7_3ecf[11]; // 01a2:24af
db byte_124ba; // 01a2:24ba
db dummy7_3edb[14];
dw word_124c9; // 01a2:24c9
db dummy7_3eeb[4]; // 01a2:24cb
db byte_124cf; // 01a2:24cf
db dummy7_3ef0[984];
db byte_128a8; // 01a2:28a8
db dummy7_42c9[442];
db dummy7_4483; // 01a2:2a63
dw word_12a64; // 01a2:2a64
db dummy7_4486[773];
dw word_12d6b; // 01a2:2d6b
db dummy7_478d[5]; // 01a2:2d6d
db byte_12d72[3]; // 01a2:2d72
dw dummy7_4795; // 01a2:2d75
dw dummy7_4797; // 01a2:2d77
dw dummy7_4799; // 01a2:2d79
dw dummy7_479b; // 01a2:2d7b
db dummy7_479d[1289];
db dummy7_4ca6; // 01a2:3286
db dummy7_4ca7[279];
db byte_1339e; // 01a2:339e
db dummy7_4dbf[462];
db byte_1356d; // 01a2:356d
db dummy7_4f8e[11976];
dw word_16436; // 01a2:6436
dw word_16438; // 01a2:6438
db dummy7_7e5a[4141];
dw word_17467; // 01a2:7467
dw word_17469; // 01a2:7469
db dummy7_8e8b[1289];
dw off_17974; // 01a2:7974
dw dummy7_9396; // 01a2:7976
dw dummy7_9398; // 01a2:7978
db dummy7_939a[230];
db dummy7_9480[32]; // 0948:0000
db dummy7_94a0[32]; // 0948:0020
db dummy7_94c0[32]; // 0948:0040
db dummy7_94e0[32]; // 0948:0060
db dummy7_9500[32]; // 0948:0080
db dummy7_9520[32]; // 0948:00a0
db dummy7_9540[32]; // 0948:00c0
db dummy7_9560[32]; // 0948:00e0
db dummy7_9580[32]; // 0948:0100
db dummy7_95a0[32]; // 0948:0120
db dummy7_95c0[32]; // 0948:0140
db dummy7_95e0[32]; // 0948:0160
db dummy7_9600[32]; // 0948:0180
db dummy7_9620[32]; // 0948:01a0
db dummy7_9640[32]; // 0948:01c0
db dummy7_9660[32]; // 0948:01e0
db dummy7_9680[32]; // 0948:0200
db dummy7_96a0[32]; // 0948:0220
db dummy7_96c0[32]; // 0948:0240
db dummy7_96e0[32]; // 0948:0260
db dummy7_9700[32]; // 0948:0280
db dummy7_9720[32]; // 0948:02a0
db dummy7_9740[32]; // 0948:02c0
db dummy7_9760[32]; // 0948:02e0
db dummy7_9780[32]; // 0948:0300
db dummy7_97a0[32]; // 0948:0320
db dummy7_97c0[32]; // 0948:0340
db dummy7_97e0[32]; // 0948:0360
db dummy7_9800; // 0948:0380
db dummy7_9801; // 0948:0381
db dummy7_9802; // 0948:0382
db dummy7_9803; // 0948:0383
db dummy7_9804; // 0948:0384
db dummy7_9805; // 0948:0385
db dummy7_9806; // 0948:0386
db dummy7_9807;
db dummy7_9808; // 0948:0388
db dummy7_9809; // 0948:0389
db dummy7_980a; // 0948:038a
db dummy7_980b; // 0948:038b
db dummy7_980c; // 0948:038c
db dummy7_980d; // 0948:038d
db dummy7_980e; // 0948:038e
db dummy7_980f; // 0948:038f
db dummy7_9810; // 0948:0390
db dummy7_9811; // 0948:0391
db dummy7_9812; // 0948:0392
db dummy7_9813; // 0948:0393
db dummy7_9814; // 0948:0394
db dummy7_9815; // 0948:0395
db dummy7_9816; // 0948:0396
db dummy7_9817; // 0948:0397
db dummy7_9818; // 0948:0398
db dummy7_9819; // 0948:0399
db dummy7_981a; // 0948:039a
db dummy7_981b; // 0948:039b
db dummy7_981c; // 0948:039c
db dummy7_981d; // 0948:039d
dw word_17dfe; // 0948:039e
dw dummy7_9820; // 0948:03a0
char avingme[9]; // 0948:03a2
db byte_17e0b; // 0948:03ab
db byte_17e0c; // 0948:03ac
db byte_17e0d; // 0948:03ad
char aoescapefromthi[53]; // 0948:03ae
char dummy7_9863[17]; // 0948:03ae
db dummy7_9874[32]; // 0948:03f4
db dummy7_9894[32]; // 0948:0414
db dummy7_98b4[32]; // 0948:0434
db dummy7_98d4[32]; // 0948:0454
db dummy7_98f4[32]; // 0948:0474
db dummy7_9914[32]; // 0948:0494
db dummy7_9934[32]; // 0948:04b4
db dummy7_9954[32]; // 0948:04d4
db dummy7_9974[32]; // 0948:04f4
db dummy7_9994[32]; // 0948:0514
db dummy7_99b4[32]; // 0948:0534
db dummy7_99d4[32]; // 0948:0554
db dummy7_99f4[32]; // 0948:0574
db dummy7_9a14[32]; // 0948:0594
db dummy7_9a34[32]; // 0948:05b4
db dummy7_9a54[32]; // 0948:05d4
db dummy7_9a74[32]; // 0948:05f4
db dummy7_9a94[32]; // 0948:0614
db dummy7_9ab4[32]; // 0948:0634
db dummy7_9ad4[32]; // 0948:0654
db dummy7_9af4[32]; // 0948:0674
db dummy7_9b14[32]; // 0948:0694
db dummy7_9b34[32]; // 0948:06b4
db dummy7_9b54[32]; // 0948:06d4
db dummy7_9b74[32]; // 0948:06f4
db dummy7_9b94[32]; // 0948:0714
db dummy7_9bb4[32]; // 0948:0734
db dummy7_9bd4[32]; // 0948:0754
db dummy7_9bf4[32]; // 0948:0774
db dummy7_9c14[32]; // 0948:0794
db dummy7_9c34[32]; // 0948:07b4
db dummy7_9c54[32]; // 0948:07d4
db dummy7_9c74[32]; // 0948:07f4
db dummy7_9c94[32]; // 0948:0814
db dummy7_9cb4[32]; // 0948:0834
db dummy7_9cd4[32]; // 0948:0854
db dummy7_9cf4[32]; // 0948:0874
db dummy7_9d14[32]; // 0948:0894
db dummy7_9d34[32]; // 0948:08b4
db dummy7_9d54[32]; // 0948:08d4
db dummy7_9d74[32]; // 0948:08f4
db dummy7_9d94[32]; // 0948:0914
db dummy7_9db4[32]; // 0948:0934
db dummy7_9dd4[32]; // 0948:0954
db dummy7_9df4[32]; // 0948:0974
db dummy7_9e14; // 0948:0994
db dummy7_9e15; // 0948:0995
db dummy7_9e16; // 0948:0996
db dummy7_9e17; // 0948:0997
db dummy7_9e18; // 0948:0998
db dummy7_9e19; // 0948:0999
db dummy7_9e1a; // 0948:099a
db dummy7_9e1b; // 0948:099b
db dummy7_9e1c; // 0948:099c
db dummy7_9e1d; // 0948:099d
db dummy7_9e1e; // 0948:099e
db dummy7_9e1f; // 0948:099f
db dummy7_9e20; // 0948:09a0
db dummy7_9e21; // 0948:09a1
db dummy7_9e22; // 0948:09a2
db dummy7_9e23; // 0948:09a3
dw word_18404; // 0948:09a4
db byte_18406; // 0948:09a6
char aviveifyouworka[28]; // 0948:09a7
db dummy7_9e43[32]; // 0948:09c3
db dummy7_9e63[32]; // 0948:09e3
db dummy7_9e83[32]; // 0948:0a03
db dummy7_9ea3[32]; // 0948:0a23
db dummy7_9ec3[32]; // 0948:0a43
db dummy7_9ee3[32]; // 0948:0a63
db dummy7_9f03[32]; // 0948:0a83
db dummy7_9f23[32]; // 0948:0aa3
db dummy7_9f43[32]; // 0948:0ac3
db dummy7_9f63[32]; // 0948:0ae3
db dummy7_9f83[32]; // 0948:0b03
db dummy7_9fa3[32]; // 0948:0b23
db dummy7_9fc3[32]; // 0948:0b43
db dummy7_9fe3; // 0948:0b63
db dummy7_9fe4; // 0948:0b64
db dummy7_9fe5; // 0948:0b65
db dummy7_9fe6; // 0948:0b66
db dummy7_9fe7; // 0948:0b67
db dummy7_9fe8; // 0948:0b68
db dummy7_9fe9; // 0948:0b69
db dummy7_9fea; // 0948:0b6a
db dummy7_9feb; // 0948:0b6b
db dummy7_9fec; // 0948:0b6c
db dummy7_9fed; // 0948:0b6d
db dummy7_9fee; // 0948:0b6e
db dummy7_9fef; // 0948:0b6f
db dummy7_9ff0; // 0948:0b70
db dummy7_9ff1; // 0948:0b71
db dummy7_9ff2;
db dummy7_9ff3; // 0948:0b73
db dummy7_9ff4; // 0948:0b74
db dummy7_9ff5; // 0948:0b75
db dummy7_9ff6; // 0948:0b76
db dummy7_9ff7; // 0948:0b77
db dummy7_9ff8; // 0948:0b78
db dummy7_9ff9; // 0948:0b79
db dummy7_9ffa; // 0948:0b7a
db dummy7_9ffb; // 0948:0b7b
dw dummy7_9ffc; // 0948:0b7c
dw dummy7_9ffe; // 0948:0b7e
char atomator[10]; // 0948:0b80
db dummy7_a00a[32]; // 0948:0b8a
db dummy7_a02a[32]; // 0948:0baa
db dummy7_a04a; // 0948:0bca
db dummy7_a04b; // 0948:0bcb
db dummy7_a04c; // 0948:0bcc
db dummy7_a04d; // 0948:0bcd
db dummy7_a04e; // 0948:0bce
db dummy7_a04f; // 0948:0bcf
db dummy7_a050; // 0948:0bd0
db dummy7_a051; // 0948:0bd1
db dummy7_a052; // 0948:0bd2
db dummy7_a053; // 0948:0bd3
dw word_18634; // 0948:0bd4
char arlivesyouwilln[47]; // 0948:0bd6
char dummy7_a085[2]; // 0948:0bd6
db dummy7_a087[32]; // 0948:0c07
db dummy7_a0a7[32]; // 0948:0c27
db dummy7_a0c7[32]; // 0948:0c47
db dummy7_a0e7[32]; // 0948:0c67
db dummy7_a107[32]; // 0948:0c87
db dummy7_a127[32]; // 0948:0ca7
db dummy7_a147[32]; // 0948:0cc7
db dummy7_a167[32]; // 0948:0ce7
db dummy7_a187[32]; // 0948:0d07
db dummy7_a1a7[32]; // 0948:0d27
db dummy7_a1c7[32]; // 0948:0d47
db dummy7_a1e7[32]; // 0948:0d67
db dummy7_a207[32]; // 0948:0d87
db dummy7_a227[32]; // 0948:0da7
db dummy7_a247[32]; // 0948:0dc7
db dummy7_a267[32]; // 0948:0de7
db dummy7_a287[32]; // 0948:0e07
db dummy7_a2a7[32]; // 0948:0e27
db dummy7_a2c7[32]; // 0948:0e47
db dummy7_a2e7[32]; // 0948:0e67
db dummy7_a307[32]; // 0948:0e87
db dummy7_a327[32]; // 0948:0ea7
db dummy7_a347[32]; // 0948:0ec7
db dummy7_a367[32]; // 0948:0ee7
db dummy7_a387[32]; // 0948:0f07
db dummy7_a3a7[32]; // 0948:0f27
db dummy7_a3c7[32]; // 0948:0f47
db dummy7_a3e7[32]; // 0948:0f67
db dummy7_a407[32]; // 0948:0f87
db dummy7_a427[32]; // 0948:0fa7
db dummy7_a447[32]; // 0948:0fc7
db dummy7_a467[32]; // 0948:0fe7
db dummy7_a487[32]; // 0948:1007
db dummy7_a4a7[32]; // 0948:1027
db dummy7_a4c7[32]; // 0948:1047
db dummy7_a4e7[32]; // 0948:1067
db dummy7_a507[32]; // 0948:1087
db dummy7_a527[32]; // 0948:10a7
db dummy7_a547[32]; // 0948:10c7
db dummy7_a567[32]; // 0948:10e7
db dummy7_a587[32]; // 0948:1107
db dummy7_a5a7[32]; // 0948:1127
db dummy7_a5c7[32]; // 0948:1147
db dummy7_a5e7[32]; // 0948:1167
db dummy7_a607[32]; // 0948:1187
db dummy7_a627[32]; // 0948:11a7
db dummy7_a647[32]; // 0948:11c7
db dummy7_a667[32]; // 0948:11e7
db dummy7_a687[32]; // 0948:1207
db dummy7_a6a7[32]; // 0948:1227
db dummy7_a6c7[32]; // 0948:1247
db dummy7_a6e7[32]; // 0948:1267
db dummy7_a707[32]; // 0948:1287
db dummy7_a727[32]; // 0948:12a7
db dummy7_a747[32]; // 0948:12c7
db dummy7_a767[32]; // 0948:12e7
db dummy7_a787[32]; // 0948:1307
db dummy7_a7a7[32]; // 0948:1327
db dummy7_a7c7[32]; // 0948:1347
db dummy7_a7e7[32]; // 0948:1367
db dummy7_a807[32]; // 0948:1387
db dummy7_a827[32]; // 0948:13a7
db dummy7_a847[32]; // 0948:13c7
db dummy7_a867[32]; // 0948:13e7
db dummy7_a887[32]; // 0948:1407
db dummy7_a8a7[32]; // 0948:1427
db dummy7_a8c7[32]; // 0948:1447
db dummy7_a8e7[32]; // 0948:1467
db dummy7_a907[32]; // 0948:1487
db dummy7_a927[32]; // 0948:14a7
db dummy7_a947[32]; // 0948:14c7
db dummy7_a967[32]; // 0948:14e7
db dummy7_a987[32]; // 0948:1507
db dummy7_a9a7[32]; // 0948:1527
db dummy7_a9c7[32]; // 0948:1547
db dummy7_a9e7[32]; // 0948:1567
db dummy7_aa07[32]; // 0948:1587
db dummy7_aa27[32]; // 0948:15a7
db dummy7_aa47[32]; // 0948:15c7
db dummy7_aa67[32]; // 0948:15e7
db dummy7_aa87; // 0948:1607
db dummy7_aa88; // 0948:1608
db dummy7_aa89;
db dummy7_aa8a; // 0948:160a
db dummy7_aa8b; // 0948:160b
db dummy7_aa8c; // 0948:160c
db dummy7_aa8d; // 0948:160d
db dummy7_aa8e; // 0948:160e
db dummy7_aa8f; // 0948:160f
db dummy7_aa90; // 0948:1610
db dummy7_aa91; // 0948:1611
db dummy7_aa92; // 0948:1612
db dummy7_aa93; // 0948:1613
db dummy7_aa94; // 0948:1614
db dummy7_aa95; // 0948:1615
db dummy7_aa96; // 0948:1616
db dummy7_aa97; // 0948:1617
db dummy7_aa98; // 0948:1618
db dummy7_aa99; // 0948:1619
db dummy7_aa9a; // 0948:161a
db dummy7_aa9b; // 0948:161b
db byte_1907c; // 0948:161c
db dummy7_aa9d; // 0948:161d
db dummy7_aa9e; // 0948:161e
db dummy7_aa9f; // 0948:161f
db dummy7_aaa0; // 0948:1620
db byte_19081; // 0948:1621
db dummy7_aaa2; // 0948:1622
db dummy7_aaa3; // 0948:1623
db dummy7_aaa4; // 0948:1624
db dummy7_aaa5; // 0948:1625
db dummy7_aaa6; // 0948:1626
db dummy7_aaa7; // 0948:1627
db dummy7_aaa8; // 0948:1628
db dummy7_aaa9; // 0948:1629
db dummy7_aaaa; // 0948:162a
db byte_1908b; // 0948:162b
db dummy7_aaac; // 0948:162c
db dummy7_aaad; // 0948:162d
db dummy7_aaae; // 0948:162e
db dummy7_aaaf; // 0948:162f
db dummy7_aab0; // 0948:1630
db dummy7_aab1; // 0948:1631
db dummy7_aab2; // 0948:1632
db dummy7_aab3; // 0948:1633
db dummy7_aab4; // 0948:1634
db dummy7_aab5; // 0948:1635
db dummy7_aab6; // 0948:1636
db dummy7_aab7; // 0948:1637
db dummy7_aab8; // 0948:1638
db byte_19099; // 0948:1639
db dummy7_aaba; // 0948:163a
db dummy7_aabb; // 0948:163b
db dummy7_aabc; // 0948:163c
db byte_1909d; // 0948:163d
db byte_1909e; // 0948:163e
db dummy7_aabf; // 0948:163f
db dummy7_aac0; // 0948:1640
db dummy7_aac1; // 0948:1641
db dummy7_aac2; // 0948:1642
db dummy7_aac3; // 0948:1643
db byte_190a4; // 0948:1644
char aers[5]; // 0948:1645
db byte_190aa; // 0948:164a
db byte_190ab; // 0948:164b
db byte_190ac; // 0948:164c
db dummy7_aacd; // 0948:164d
db dummy7_aace; // 0948:164e
db dummy7_aacf; // 0948:164f
db byte_190b0; // 0948:1650
char aurprisedthatbu[39]; // 0948:1651
db dummy7_aaf8[32]; // 0948:1678
db dummy7_ab18[32]; // 0948:1698
db dummy7_ab38[32]; // 0948:16b8
db dummy7_ab58[32]; // 0948:16d8
db dummy7_ab78[32]; // 0948:16f8
db dummy7_ab98[32]; // 0948:1718
db dummy7_abb8[32]; // 0948:1738
db dummy7_abd8[32]; // 0948:1758
db dummy7_abf8; // 0948:1778
db dummy7_abf9; // 0948:1779
db dummy7_abfa; // 0948:177a
db dummy7_abfb; // 0948:177b
db dummy7_abfc; // 0948:177c
db dummy7_abfd; // 0948:177d
db dummy7_abfe; // 0948:177e
db dummy7_abff; // 0948:177f
db dummy7_ac00; // 0948:1780
db dummy7_ac01; // 0948:1781
db dummy7_ac02; // 0948:1782
db dummy7_ac03; // 0948:1783
db dummy7_ac04; // 0948:1784
db dummy7_ac05; // 0948:1785
db dummy7_ac06; // 0948:1786
db dummy7_ac07; // 0948:1787
db dummy7_ac08; // 0948:1788
db dummy7_ac09; // 0948:1789
db dummy7_ac0a; // 0948:178a
db dummy7_ac0b; // 0948:178b
db dummy7_ac0c; // 0948:178c
db dummy7_ac0d; // 0948:178d
db dummy7_ac0e; // 0948:178e
db dummy7_ac0f; // 0948:178f
db dummy7_ac10; // 0948:1790
db dummy7_ac11; // 0948:1791
db dummy7_ac12; // 0948:1792
db dummy7_ac13; // 0948:1793
db dummy7_ac14; // 0948:1794
db dummy7_ac15; // 0948:1795
db dummy7_ac16; // 0948:1796
dw dummy7_ac17; // 0948:1797
dw dummy7_ac19; // 0948:1799
dw dummy7_ac1b; // 0948:179b
db dummy7_ac1d[32]; // 0948:179d
db dummy7_ac3d[32]; // 0948:17bd
db dummy7_ac5d[32]; // 0948:17dd
db dummy7_ac7d[32]; // 0948:17fd
db dummy7_ac9d[32]; // 0948:181d
db dummy7_acbd[32]; // 0948:183d
db dummy7_acdd[32]; // 0948:185d
db dummy7_acfd[32]; // 0948:187d
db dummy7_ad1d[32]; // 0948:189d
db dummy7_ad3d[32]; // 0948:18bd
db dummy7_ad5d[32]; // 0948:18dd
db dummy7_ad7d[32]; // 0948:18fd
db dummy7_ad9d[32]; // 0948:191d
db dummy7_adbd[32]; // 0948:193d
db dummy7_addd[32]; // 0948:195d
db dummy7_adfd[32]; // 0948:197d
db dummy7_ae1d[32]; // 0948:199d
db dummy7_ae3d[32]; // 0948:19bd
db dummy7_ae5d[32]; // 0948:19dd
db dummy7_ae7d; // 0948:19fd
db dummy7_ae7e; // 0948:19fe
db dummy7_ae7f; // 0948:19ff
db dummy7_ae80; // 0948:1a00
db dummy7_ae81; // 0948:1a01
db dummy7_ae82; // 0948:1a02
db dummy7_ae83; // 0948:1a03
db dummy7_ae84; // 0948:1a04
db dummy7_ae85; // 0948:1a05
db dummy7_ae86;
db dummy7_ae87; // 0948:1a07
db dummy7_ae88; // 0948:1a08
dw word_19469; // 0948:1a09
db byte_1946b; // 0948:1a0b
char aatfightingbale[21]; // 0948:1a0c
db dummy7_aea1[32]; // 0948:1a21
db dummy7_aec1[32]; // 0948:1a41
db dummy7_aee1[32]; // 0948:1a61
db dummy7_af01[32]; // 0948:1a81
db dummy7_af21[32]; // 0948:1aa1
db dummy7_af41[32]; // 0948:1ac1
db dummy7_af61[32]; // 0948:1ae1
db dummy7_af81[32]; // 0948:1b01
db dummy7_afa1[32]; // 0948:1b21
db dummy7_afc1[32]; // 0948:1b41
db dummy7_afe1[32]; // 0948:1b61
db dummy7_b001[32]; // 0948:1b81
db dummy7_b021[32]; // 0948:1ba1
db dummy7_b041[32]; // 0948:1bc1
db dummy7_b061[32]; // 0948:1be1
db dummy7_b081[32]; // 0948:1c01
db dummy7_b0a1[32]; // 0948:1c21
db dummy7_b0c1[32]; // 0948:1c41
db dummy7_b0e1[32]; // 0948:1c61
db dummy7_b101[32]; // 0948:1c81
db dummy7_b121[32]; // 0948:1ca1
db dummy7_b141[32]; // 0948:1cc1
db dummy7_b161[32]; // 0948:1ce1
db dummy7_b181[32]; // 0948:1d01
db dummy7_b1a1[32]; // 0948:1d21
db dummy7_b1c1[32]; // 0948:1d41
db dummy7_b1e1;
db dummy7_b1e2; // 0948:1d62
db dummy7_b1e3; // 0948:1d63
db dummy7_b1e4; // 0948:1d64
db dummy7_b1e5; // 0948:1d65
db dummy7_b1e6; // 0948:1d66
db dummy7_b1e7; // 0948:1d67
db dummy7_b1e8; // 0948:1d68
db dummy7_b1e9; // 0948:1d69
db dummy7_b1ea; // 0948:1d6a
db dummy7_b1eb; // 0948:1d6b
db dummy7_b1ec; // 0948:1d6c
db dummy7_b1ed; // 0948:1d6d
db dummy7_b1ee; // 0948:1d6e
db dummy7_b1ef; // 0948:1d6f
db dummy7_b1f0; // 0948:1d70
db dummy7_b1f1;
db dummy7_b1f2; // 0948:1d72
db dummy7_b1f3; // 0948:1d73
db dummy7_b1f4; // 0948:1d74
db dummy7_b1f5; // 0948:1d75
db dummy7_b1f6; // 0948:1d76
db dummy7_b1f7; // 0948:1d77
db dummy7_b1f8; // 0948:1d78
db dummy7_b1f9; // 0948:1d79
db dummy7_b1fa; // 0948:1d7a
db dummy7_b1fb; // 0948:1d7b
dw word_197dc; // 0948:1d7c
char aight[6]; // 0948:1d7e
db dummy7_b204; // 0948:1d84
db dummy7_b205; // 0948:1d85
dw word_197e6; // 0948:1d86
db dummy7_b208[32]; // 0948:1d88
db dummy7_b228; // 0948:1da8
db dummy7_b229; // 0948:1da9
db dummy7_b22a; // 0948:1daa
db dummy7_b22b; // 0948:1dab
dw word_1980c; // 0948:1dac
char abeingwatched[16]; // 0948:1dae
db dummy7_b23e[32]; // 0948:1dbe
db dummy7_b25e[32]; // 0948:1dde
db dummy7_b27e[32]; // 0948:1dfe
db dummy7_b29e[32]; // 0948:1e1e
db dummy7_b2be[32]; // 0948:1e3e
db dummy7_b2de[32]; // 0948:1e5e
db dummy7_b2fe[32]; // 0948:1e7e
db dummy7_b31e[32]; // 0948:1e9e
db dummy7_b33e[32]; // 0948:1ebe
db dummy7_b35e[32]; // 0948:1ede
db dummy7_b37e[32]; // 0948:1efe
db dummy7_b39e[32]; // 0948:1f1e
db dummy7_b3be[32]; // 0948:1f3e
db dummy7_b3de[32]; // 0948:1f5e
db dummy7_b3fe[32]; // 0948:1f7e
db dummy7_b41e[32]; // 0948:1f9e
db dummy7_b43e[32]; // 0948:1fbe
db dummy7_b45e[32]; // 0948:1fde
db dummy7_b47e[32]; // 0948:1ffe
db dummy7_b49e[32]; // 0948:201e
db dummy7_b4be[32]; // 0948:203e
db dummy7_b4de[32]; // 0948:205e
db dummy7_b4fe[32]; // 0948:207e
db dummy7_b51e[32]; // 0948:209e
db dummy7_b53e[32]; // 0948:20be
db dummy7_b55e[32]; // 0948:20de
db dummy7_b57e[32]; // 0948:20fe
db dummy7_b59e[32]; // 0948:211e
db dummy7_b5be[32]; // 0948:213e
db dummy7_b5de[32]; // 0948:215e
db dummy7_b5fe[32]; // 0948:217e
db dummy7_b61e[32]; // 0948:219e
db dummy7_b63e[32]; // 0948:21be
db dummy7_b65e[32]; // 0948:21de
db dummy7_b67e[32]; // 0948:21fe
db dummy7_b69e[32]; // 0948:221e
db dummy7_b6be[32]; // 0948:223e
db dummy7_b6de[32]; // 0948:225e
db dummy7_b6fe[32]; // 0948:227e
db dummy7_b71e[32]; // 0948:229e
db dummy7_b73e[32]; // 0948:22be
db dummy7_b75e[32]; // 0948:22de
db dummy7_b77e[32]; // 0948:22fe
db dummy7_b79e[32]; // 0948:231e
db dummy7_b7be[32]; // 0948:233e
db dummy7_b7de[32]; // 0948:235e
db dummy7_b7fe[32]; // 0948:237e
db dummy7_b81e[32]; // 0948:239e
db dummy7_b83e[32]; // 0948:23be
db dummy7_b85e[32]; // 0948:23de
db dummy7_b87e[32]; // 0948:23fe
db dummy7_b89e[32]; // 0948:241e
db dummy7_b8be[32]; // 0948:243e
db dummy7_b8de[32]; // 0948:245e
db dummy7_b8fe[32]; // 0948:247e
db dummy7_b91e[32]; // 0948:249e
db dummy7_b93e[32]; // 0948:24be
db dummy7_b95e[32]; // 0948:24de
db dummy7_b97e[32]; // 0948:24fe
db dummy7_b99e[32]; // 0948:251e
db dummy7_b9be[32]; // 0948:253e
db dummy7_b9de[32]; // 0948:255e
db dummy7_b9fe[32]; // 0948:257e
db dummy7_ba1e[32]; // 0948:259e
db dummy7_ba3e[32]; // 0948:25be
db dummy7_ba5e[32]; // 0948:25de
db dummy7_ba7e[32]; // 0948:25fe
db dummy7_ba9e[32]; // 0948:261e
db dummy7_babe[32]; // 0948:263e
db dummy7_bade[32]; // 0948:265e
db dummy7_bafe[32]; // 0948:267e
db dummy7_bb1e[32]; // 0948:269e
db dummy7_bb3e[32]; // 0948:26be
db dummy7_bb5e[32]; // 0948:26de
db dummy7_bb7e[32]; // 0948:26fe
db dummy7_bb9e[32]; // 0948:271e
db dummy7_bbbe[32]; // 0948:273e
db dummy7_bbde[32]; // 0948:275e
db dummy7_bbfe[32]; // 0948:277e
db dummy7_bc1e[32]; // 0948:279e
db dummy7_bc3e[32]; // 0948:27be
db dummy7_bc5e[32]; // 0948:27de
db dummy7_bc7e[32]; // 0948:27fe
db dummy7_bc9e; // 0948:281e
db dummy7_bc9f; // 0948:281f
db dummy7_bca0; // 0948:2820
db dummy7_bca1; // 0948:2821
db dummy7_bca2; // 0948:2822
db dummy7_bca3; // 0948:2823
db dummy7_bca4; // 0948:2824
db dummy7_bca5; // 0948:2825
db dummy7_bca6; // 0948:2826
db dummy7_bca7; // 0948:2827
db dummy7_bca8; // 0948:2828
db dummy7_bca9; // 0948:2829
db dummy7_bcaa; // 0948:282a
db dummy7_bcab; // 0948:282b
db dummy7_bcac; // 0948:282c
db dummy7_bcad; // 0948:282d
db dummy7_bcae; // 0948:282e
db dummy7_bcaf; // 0948:282f
db dummy7_bcb0; // 0948:2830
db dummy7_bcb1; // 0948:2831
db dummy7_bcb2; // 0948:2832
db dummy7_bcb3; // 0948:2833
db dummy7_bcb4; // 0948:2834
db dummy7_bcb5; // 0948:2835
db dummy7_bcb6; // 0948:2836
db dummy7_bcb7; // 0948:2837
db dummy7_bcb8; // 0948:2838
db dummy7_bcb9; // 0948:2839
db dummy7_bcba; // 0948:283a
db dummy7_bcbb; // 0948:283b
dw word_1a29c; // 0948:283c
db dummy7_bcbe[32]; // 0948:283e
db dummy7_bcde[32]; // 0948:285e
db dummy7_bcfe[32]; // 0948:287e
db dummy7_bd1e[32]; // 0948:289e
db dummy7_bd3e[32]; // 0948:28be
db dummy7_bd5e[32]; // 0948:28de
db dummy7_bd7e[32]; // 0948:28fe
db dummy7_bd9e[32]; // 0948:291e
db dummy7_bdbe[32]; // 0948:293e
db dummy7_bdde[32]; // 0948:295e
db dummy7_bdfe[32]; // 0948:297e
db dummy7_be1e[32]; // 0948:299e
db dummy7_be3e[32]; // 0948:29be
db dummy7_be5e[32]; // 0948:29de
db dummy7_be7e[32]; // 0948:29fe
db dummy7_be9e[32]; // 0948:2a1e
db dummy7_bebe[32]; // 0948:2a3e
db dummy7_bede[32]; // 0948:2a5e
db dummy7_befe[32]; // 0948:2a7e
db dummy7_bf1e[32]; // 0948:2a9e
db dummy7_bf3e[32]; // 0948:2abe
db dummy7_bf5e[32]; // 0948:2ade
db dummy7_bf7e[32]; // 0948:2afe
db dummy7_bf9e[32]; // 0948:2b1e
db dummy7_bfbe[32]; // 0948:2b3e
db dummy7_bfde[32]; // 0948:2b5e
db dummy7_bffe[32]; // 0948:2b7e
db dummy7_c01e[32]; // 0948:2b9e
db dummy7_c03e[32]; // 0948:2bbe
db dummy7_c05e[32]; // 0948:2bde
db dummy7_c07e[32]; // 0948:2bfe
db dummy7_c09e[32]; // 0948:2c1e
db dummy7_c0be[32]; // 0948:2c3e
db dummy7_c0de[32]; // 0948:2c5e
db dummy7_c0fe[32]; // 0948:2c7e
db dummy7_c11e[32]; // 0948:2c9e
db dummy7_c13e[32]; // 0948:2cbe
db dummy7_c15e[32]; // 0948:2cde
db dummy7_c17e[32]; // 0948:2cfe
db dummy7_c19e[32]; // 0948:2d1e
db dummy7_c1be[32]; // 0948:2d3e
db dummy7_c1de[32]; // 0948:2d5e
db dummy7_c1fe[32]; // 0948:2d7e
db dummy7_c21e[32]; // 0948:2d9e
db dummy7_c23e[32]; // 0948:2dbe
db dummy7_c25e[32]; // 0948:2dde
db dummy7_c27e[32]; // 0948:2dfe
db dummy7_c29e[32]; // 0948:2e1e
db dummy7_c2be[32]; // 0948:2e3e
db dummy7_c2de[32]; // 0948:2e5e
db dummy7_c2fe[32]; // 0948:2e7e
db dummy7_c31e[32]; // 0948:2e9e
db dummy7_c33e[32]; // 0948:2ebe
db dummy7_c35e[32]; // 0948:2ede
db dummy7_c37e[32]; // 0948:2efe
db dummy7_c39e[32]; // 0948:2f1e
db dummy7_c3be[32]; // 0948:2f3e
db dummy7_c3de[32]; // 0948:2f5e
db dummy7_c3fe[32]; // 0948:2f7e
db dummy7_c41e[32]; // 0948:2f9e
db dummy7_c43e[32]; // 0948:2fbe
db dummy7_c45e[32]; // 0948:2fde
db dummy7_c47e[32]; // 0948:2ffe
db dummy7_c49e[32]; // 0948:301e
db dummy7_c4be[32]; // 0948:303e
db dummy7_c4de[32]; // 0948:305e
db dummy7_c4fe[32]; // 0948:307e
db dummy7_c51e[32]; // 0948:309e
db dummy7_c53e[32]; // 0948:30be
db dummy7_c55e[32]; // 0948:30de
db dummy7_c57e[32]; // 0948:30fe
db dummy7_c59e[32]; // 0948:311e
db dummy7_c5be[32]; // 0948:313e
db dummy7_c5de[32]; // 0948:315e
db dummy7_c5fe[32]; // 0948:317e
db dummy7_c61e[32]; // 0948:319e
db dummy7_c63e[32]; // 0948:31be
db dummy7_c65e[32]; // 0948:31de
db dummy7_c67e[32]; // 0948:31fe
db dummy7_c69e[32]; // 0948:321e
db dummy7_c6be[32]; // 0948:323e
db dummy7_c6de[32]; // 0948:325e
db dummy7_c6fe[32]; // 0948:327e
db dummy7_c71e[32]; // 0948:329e
db dummy7_c73e[32]; // 0948:32be
db dummy7_c75e[32]; // 0948:32de
db dummy7_c77e[32]; // 0948:32fe
db dummy7_c79e[32]; // 0948:331e
db dummy7_c7be[32]; // 0948:333e
db dummy7_c7de[32]; // 0948:335e
db dummy7_c7fe[32]; // 0948:337e
db dummy7_c81e[32]; // 0948:339e
db dummy7_c83e[32]; // 0948:33be
db dummy7_c85e[32]; // 0948:33de
db dummy7_c87e[32]; // 0948:33fe
db dummy7_c89e[32]; // 0948:341e
db dummy7_c8be[32]; // 0948:343e
db dummy7_c8de[32]; // 0948:345e
db dummy7_c8fe[32]; // 0948:347e
db dummy7_c91e[32]; // 0948:349e
db dummy7_c93e[32]; // 0948:34be
db dummy7_c95e[32]; // 0948:34de
db dummy7_c97e[32]; // 0948:34fe
db dummy7_c99e[32]; // 0948:351e
db dummy7_c9be[32]; // 0948:353e
db dummy7_c9de[32]; // 0948:355e
db dummy7_c9fe[32]; // 0948:357e
db dummy7_ca1e[32]; // 0948:359e
db dummy7_ca3e[32]; // 0948:35be
db dummy7_ca5e[32]; // 0948:35de
db dummy7_ca7e[32]; // 0948:35fe
db dummy7_ca9e[32]; // 0948:361e
db dummy7_cabe[32]; // 0948:363e
db dummy7_cade[32]; // 0948:365e
db dummy7_cafe[32]; // 0948:367e
db dummy7_cb1e[32]; // 0948:369e
db dummy7_cb3e[32]; // 0948:36be
db dummy7_cb5e[32]; // 0948:36de
db dummy7_cb7e[32]; // 0948:36fe
db dummy7_cb9e[32]; // 0948:371e
db dummy7_cbbe[32]; // 0948:373e
db dummy7_cbde[32]; // 0948:375e
db dummy7_cbfe[32]; // 0948:377e
db dummy7_cc1e[32]; // 0948:379e
db dummy7_cc3e[32]; // 0948:37be
db dummy7_cc5e[32]; // 0948:37de
db dummy7_cc7e[32]; // 0948:37fe
db dummy7_cc9e[32]; // 0948:381e
db dummy7_ccbe[32]; // 0948:383e
db dummy7_ccde[32]; // 0948:385e
db dummy7_ccfe[32]; // 0948:387e
db dummy7_cd1e[32]; // 0948:389e
db dummy7_cd3e[32]; // 0948:38be
db dummy7_cd5e[32]; // 0948:38de
db dummy7_cd7e[32]; // 0948:38fe
db dummy7_cd9e[32]; // 0948:391e
db dummy7_cdbe[32]; // 0948:393e
db dummy7_cdde[32]; // 0948:395e
db dummy7_cdfe[32]; // 0948:397e
db dummy7_ce1e[32]; // 0948:399e
db dummy7_ce3e[32]; // 0948:39be
db dummy7_ce5e[32]; // 0948:39de
db dummy7_ce7e[32]; // 0948:39fe
db dummy7_ce9e[32]; // 0948:3a1e
db dummy7_cebe[32]; // 0948:3a3e
db dummy7_cede[32]; // 0948:3a5e
db dummy7_cefe[32]; // 0948:3a7e
db dummy7_cf1e[32]; // 0948:3a9e
db dummy7_cf3e[32]; // 0948:3abe
db dummy7_cf5e[32]; // 0948:3ade
db dummy7_cf7e[32]; // 0948:3afe
db dummy7_cf9e[32]; // 0948:3b1e
db dummy7_cfbe[32]; // 0948:3b3e
db dummy7_cfde[32]; // 0948:3b5e
db dummy7_cffe[32]; // 0948:3b7e
db dummy7_d01e[32]; // 0948:3b9e
db dummy7_d03e[32]; // 0948:3bbe
db dummy7_d05e[32]; // 0948:3bde
db dummy7_d07e[32]; // 0948:3bfe
db dummy7_d09e[32]; // 0948:3c1e
db dummy7_d0be[32]; // 0948:3c3e
db dummy7_d0de[32]; // 0948:3c5e
db dummy7_d0fe[32]; // 0948:3c7e
db dummy7_d11e[32]; // 0948:3c9e
db dummy7_d13e[32]; // 0948:3cbe
db dummy7_d15e[32]; // 0948:3cde
db dummy7_d17e[32]; // 0948:3cfe
db dummy7_d19e[32]; // 0948:3d1e
db dummy7_d1be[32]; // 0948:3d3e
db dummy7_d1de[32]; // 0948:3d5e
db dummy7_d1fe[32]; // 0948:3d7e
db dummy7_d21e[32]; // 0948:3d9e
db dummy7_d23e[32]; // 0948:3dbe
db dummy7_d25e[32]; // 0948:3dde
db dummy7_d27e[32]; // 0948:3dfe
db dummy7_d29e[32]; // 0948:3e1e
db dummy7_d2be[32]; // 0948:3e3e
db dummy7_d2de[32]; // 0948:3e5e
db dummy7_d2fe[32]; // 0948:3e7e
db dummy7_d31e[32]; // 0948:3e9e
db dummy7_d33e[32]; // 0948:3ebe
db dummy7_d35e[32]; // 0948:3ede
db dummy7_d37e[32]; // 0948:3efe
db dummy7_d39e[32]; // 0948:3f1e
db dummy7_d3be[32]; // 0948:3f3e
db dummy7_d3de[32]; // 0948:3f5e
db dummy7_d3fe[32]; // 0948:3f7e
db dummy7_d41e[32]; // 0948:3f9e
db dummy7_d43e[32]; // 0948:3fbe
db dummy7_d45e[32]; // 0948:3fde
db dummy7_d47e[32]; // 0948:3ffe
db dummy7_d49e[32]; // 0948:401e
db dummy7_d4be[32]; // 0948:403e
db dummy7_d4de; // 0948:405e
db dummy7_d4df; // 0948:405f
db dummy7_d4e0; // 0948:4060
db dummy7_d4e1;
db dummy7_d4e2;
db dummy7_d4e3;
db dummy7_d4e4;
db dummy7_d4e5;
db dummy7_d4e6;
db dummy7_d4e7;
db dummy7_d4e8;
db dummy7_d4e9;
db dummy7_d4ea;
db dummy7_d4eb;
db dummy7_d4ec;
db dummy7_d4ed;
db dummy7_d4ee;
db dummy7_d4ef;
dw word_1bad0; // 0d4f:0000
dw word_1bad2; // 0d4f:0002
db dummy7_d4f4[64]; // 0d4f:0004
dw word_1bb14; // 0d4f:0044
dw word_1bb16; // 0d4f:0046
db dummy7_d538[66]; // 0d4f:0048
dw word_1bb5a; // 0d4f:008a
db dummy7_d57c[136]; // 0d4f:008c
dw word_1bbe4; // 0d4f:0114
dw word_1bbe6; // 0d4f:0116
dd dword_1bbe8; // 0d4f:0118
dw word_1bbec; // 0d4f:011c
dw word_1bbee; // 0d4f:011e
dw word_1bbf0; // 0d4f:0120
dw word_1bbf2; // 0d4f:0122
db dummy7_d614[132]; // 0d4f:0124
dw word_1bc78; // 0d4f:01a8
db dummy7_d69a[4]; // 0d4f:01aa
dw word_1bc7e; // 0d4f:01ae
char atest[5]; // 0d4f:01b0
db byte_1bc85[515]; // 0d4f:01b5
dw word_1be88; // 0d4f:03b8
db dummy7_d8aa[1379];
db dummy7_de0d[11]; // 0d4f:091d
db dummy7_de18[10]; // 0d4f:091d
db dummy7_de22[9]; // 0d4f:091d
db dummy7_de2b[40];
db dummy7_de53[11]; // 0d4f:0963
db dummy7_de5e[10]; // 0d4f:0963
db dummy7_de68[9]; // 0d4f:0963
db dummy7_de71[210];
db dummy7_df43[11]; // 0d4f:0a53
db dummy7_df4e[9]; // 0d4f:0a53
db dummy7_df57[761];
dw word_1c830; // 0e25:0000
dw word_1c832; // 0e25:0002
dw word_1c834; // 0e25:0004
db byte_1c836[4]; // 0e25:0006
db byte_1c83a; // 0e25:000a
db dummy7_e25b[12]; // 0e25:000b
db dummy7_e267[14]; // 0e25:000b
db dummy7_e275[13]; // 0e25:000b
db dummy7_e282[13]; // 0e25:000b
db dummy7_e28f[14]; // 0e25:000b
db dummy7_e29d[13]; // 0e25:000b
db dummy7_e2aa[13]; // 0e25:000b
db dummy7_e2b7[12]; // 0e25:000b
db dummy7_e2c3[14]; // 0e25:000b
db dummy7_e2d1[14]; // 0e25:000b
db dummy7_e2df[13]; // 0e25:000b
db dummy7_e2ec[13]; // 0e25:000b
db dummy7_e2f9[13]; // 0e25:000b
db dummy7_e306[11]; // 0e25:000b
db dummy7_e311[197];
db dummy7_e3d6[11]; // 0e25:0186
db dummy7_e3e1[11]; // 0e25:0186
db dummy7_e3ec[11]; // 0e25:0186
db dummy7_e3f7[11]; // 0e25:0186
db dummy7_e402[10]; // 0e25:0186
db dummy7_e40c[11]; // 0e25:0186
db dummy7_e417[11]; // 0e25:0186
db dummy7_e422[11]; // 0e25:0186
db dummy7_e42d[12]; // 0e25:0186
db dummy7_e439[10]; // 0e25:0186
db dummy7_e443[11]; // 0e25:0186
db dummy7_e44e[11]; // 0e25:0186
db dummy7_e459[11]; // 0e25:0186
db dummy7_e464[12]; // 0e25:0186
db dummy7_e470[11]; // 0e25:0186
db dummy7_e47b[11]; // 0e25:0186
db dummy7_e486[11]; // 0e25:0186
db dummy7_e491[11]; // 0e25:0186
db dummy7_e49c[11]; // 0e25:0186
db dummy7_e4a7[10]; // 0e25:0186
db dummy7_e4b1[27];
db dummy7_e4cc[11]; // 0e25:027c
db dummy7_e4d7[11]; // 0e25:027c
db dummy7_e4e2[11]; // 0e25:027c
db dummy7_e4ed[12]; // 0e25:027c
db dummy7_e4f9[10]; // 0e25:027c
db dummy7_e503[11]; // 0e25:027c
db dummy7_e50e[11]; // 0e25:027c
db dummy7_e519[11]; // 0e25:027c
db dummy7_e524[11]; // 0e25:027c
db dummy7_e52f[10]; // 0e25:027c
db dummy7_e539[11]; // 0e25:027c
db dummy7_e544[11]; // 0e25:027c
db dummy7_e54f[11]; // 0e25:027c
db dummy7_e55a[12]; // 0e25:027c
db dummy7_e566[11]; // 0e25:027c
db dummy7_e571[11]; // 0e25:027c
db dummy7_e57c[11]; // 0e25:027c
db dummy7_e587[11]; // 0e25:027c
db dummy7_e592[11]; // 0e25:027c
db dummy7_e59d[10]; // 0e25:027c
db dummy7_e5a7[31];
db dummy7_e5c6[11]; // 0e25:0376
db dummy7_e5d1[11]; // 0e25:0376
db dummy7_e5dc[11]; // 0e25:0376
db dummy7_e5e7[11]; // 0e25:0376
db dummy7_e5f2[10]; // 0e25:0376
db dummy7_e5fc[11]; // 0e25:0376
db dummy7_e607[11]; // 0e25:0376
db dummy7_e612[11]; // 0e25:0376
db dummy7_e61d[12]; // 0e25:0376
db dummy7_e629[10]; // 0e25:0376
db dummy7_e633[11]; // 0e25:0376
db dummy7_e63e[11]; // 0e25:0376
db dummy7_e649[11]; // 0e25:0376
db dummy7_e654[12]; // 0e25:0376
db dummy7_e660[11]; // 0e25:0376
db dummy7_e66b[11]; // 0e25:0376
db dummy7_e676[11]; // 0e25:0376
db dummy7_e681[11]; // 0e25:0376
db dummy7_e68c[11]; // 0e25:0376
db dummy7_e697[10]; // 0e25:0376
db dummy7_e6a1[31];
db dummy7_e6c0[11]; // 0e25:0470
db dummy7_e6cb[11]; // 0e25:0470
db dummy7_e6d6[11]; // 0e25:0470
db dummy7_e6e1[12]; // 0e25:0470
db dummy7_e6ed[10]; // 0e25:0470
db dummy7_e6f7[11]; // 0e25:0470
db dummy7_e702[11]; // 0e25:0470
db dummy7_e70d[11]; // 0e25:0470
db dummy7_e718[11]; // 0e25:0470
db dummy7_e723[10]; // 0e25:0470
db dummy7_e72d[11]; // 0e25:0470
db dummy7_e738[11]; // 0e25:0470
db dummy7_e743[11]; // 0e25:0470
db dummy7_e74e[12]; // 0e25:0470
db dummy7_e75a[11]; // 0e25:0470
db dummy7_e765[11]; // 0e25:0470
db dummy7_e770[11]; // 0e25:0470
db dummy7_e77b[11]; // 0e25:0470
db dummy7_e786[11]; // 0e25:0470
db dummy7_e791[10]; // 0e25:0470
db dummy7_e79b[994];
dw jpt_1cf34; // 0e25:092d
dw dummy7_eb7f; // 0e25:092d
dw dummy7_eb81; // 0e25:092d
dw dummy7_eb83; // 0e25:092d
db dummy7_eb85[10]; // 0e25:0935
db dummy7_eb8f[6]; // 0e25:0935
db dummy7_eb95[565];
dw jpt_1d18b; // 0e25:0b7a
dw dummy7_edcc; // 0e25:0b7a
dw dummy7_edce; // 0e25:0b7a
dw dummy7_edd0; // 0e25:0b7a
dw dummy7_edd2; // 0e25:0b7a
db dummy7_edd4[774];
dw jpt_1d4fa; // 0e25:0e8a
dw dummy7_f0dc; // 0e25:0e8a
dw dummy7_f0de; // 0e25:0e8a
dw dummy7_f0e0; // 0e25:0e8a
db dummy7_f0e2[10]; // 0e25:0e92
db dummy7_f0ec[6]; // 0e25:0e92
db dummy7_f0f2[462];
dw jpt_1d6e8; // 0e25:1070
dw dummy7_f2c2; // 0e25:1070
dw dummy7_f2c4; // 0e25:1070
dw dummy7_f2c6; // 0e25:1070
dw dummy7_f2c8; // 0e25:1070
db dummy7_f2ca[759];
dw jpt_1d9e8; // 0e25:1371
dw dummy7_f5c3; // 0e25:1371
dw dummy7_f5c5; // 0e25:1371
dw dummy7_f5c7; // 0e25:1371
db dummy7_f5c9[9]; // 0e25:1379
db dummy7_f5d2[11]; // 0e25:1379
db dummy7_f5dd[10]; // 0e25:1379
db dummy7_f5e7[6]; // 0e25:1379
db dummy7_f5ed[455];
dw jpt_1dbe3; // 0e25:1564
dw dummy7_f7b6; // 0e25:1564
dw dummy7_f7b8; // 0e25:1564
dw dummy7_f7ba; // 0e25:1564
db dummy7_f7bc[95];
db dummy7_f81b[10]; // 0e25:15cb
db dummy7_f825[923];
dw jpt_1c9b1[3]; // 0e25:1970
dw dummy7_fbc6[3]; // 0e25:1970
dw dummy7_fbcc[3]; // 0e25:1970
dw dummy7_fbd2[3]; // 0e25:1970
dw dummy7_fbd8[3]; // 0e25:1970
dw dummy7_fbde[3]; // 0e25:1970
dw dummy7_fbe4[3]; // 0e25:1970
dw dummy7_fbea[3]; // 0e25:1970
dw dummy7_fbf0[3]; // 0e25:1970
dw dummy7_fbf6[3]; // 0e25:1970
dw dummy7_fbfc[3]; // 0e25:1970
dw dummy7_fc02[3]; // 0e25:1970
dw dummy7_fc08[3]; // 0e25:1970
dw dummy7_fc0e[3]; // 0e25:1970
dw dummy7_fc14[3]; // 0e25:1970
dw dummy7_fc1a[3]; // 0e25:1970
dw dummy7_fc20[3]; // 0e25:1970
dw dummy7_fc26[3]; // 0e25:1970
dw dummy7_fc2c[3]; // 0e25:1970
dw dummy7_fc32[3]; // 0e25:1970
dw dummy7_fc38[3]; // 0e25:1970
dw dummy7_fc3e[3]; // 0e25:1970
dw dummy7_fc44[3]; // 0e25:1970
dw dummy7_fc4a[3]; // 0e25:1970
dw dummy7_fc50[3]; // 0e25:1970
dw dummy7_fc56[3]; // 0e25:1970
dw dummy7_fc5c[3]; // 0e25:1970
dw dummy7_fc62[3]; // 0e25:1970
dw dummy7_fc68[3]; // 0e25:1970
dw dummy7_fc6e[3]; // 0e25:1970
dw dummy7_fc74[3]; // 0e25:1970
dw dummy7_fc7a[3]; // 0e25:1970
dw dummy7_fc80[3]; // 0e25:1970
dw dummy7_fc86[3]; // 0e25:1970
dw dummy7_fc8c[3]; // 0e25:1970
dw dummy7_fc92[3]; // 0e25:1970
dw dummy7_fc98[3]; // 0e25:1970
dw dummy7_fc9e[3]; // 0e25:1970
dw dummy7_fca4[3]; // 0e25:1970
dw dummy7_fcaa[3]; // 0e25:1970
dw dummy7_fcb0[3]; // 0e25:1970
dw dummy7_fcb6[3]; // 0e25:1970
dw dummy7_fcbc[3]; // 0e25:1970
dw dummy7_fcc2[3]; // 0e25:1970
dw dummy7_fcc8[3]; // 0e25:1970
dw dummy7_fcce[3]; // 0e25:1970
dw dummy7_fcd4[3]; // 0e25:1970
dw dummy7_fcda[3]; // 0e25:1970
dw dummy7_fce0[3]; // 0e25:1970
dw dummy7_fce6[3]; // 0e25:1970
dw dummy7_fcec[3]; // 0e25:1970
dw dummy7_fcf2[3]; // 0e25:1970
dw dummy7_fcf8[3]; // 0e25:1970
dw dummy7_fcfe[3]; // 0e25:1970
dw dummy7_fd04[3]; // 0e25:1970
dw dummy7_fd0a[3]; // 0e25:1970
dw dummy7_fd10[3]; // 0e25:1970
dw dummy7_fd16[3]; // 0e25:1970
dw dummy7_fd1c[3]; // 0e25:1970
dw dummy7_fd22[3]; // 0e25:1970
dw dummy7_fd28[3]; // 0e25:1970
dw dummy7_fd2e[3]; // 0e25:1970
dw dummy7_fd34[3]; // 0e25:1970
dw dummy7_fd3a[3]; // 0e25:1970
dw dummy7_fd40[3]; // 0e25:1970
dw dummy7_fd46[3]; // 0e25:1970
dw dummy7_fd4c[3]; // 0e25:1970
dw dummy7_fd52[3]; // 0e25:1970
dw dummy7_fd58[3]; // 0e25:1970
dw dummy7_fd5e[3]; // 0e25:1970
dw dummy7_fd64[3]; // 0e25:1970
dw dummy7_fd6a[3]; // 0e25:1970
dw dummy7_fd70[3]; // 0e25:1970
dw dummy7_fd76[3]; // 0e25:1970
dw dummy7_fd7c[3]; // 0e25:1970
dw dummy7_fd82[3]; // 0e25:1970
dw dummy7_fd88[3]; // 0e25:1970
dw dummy7_fd8e[3]; // 0e25:1970
dw dummy7_fd94[3]; // 0e25:1970
dw dummy7_fd9a[3]; // 0e25:1970
dw dummy7_fda0[3]; // 0e25:1970
dw dummy7_fda6[3]; // 0e25:1970
dw dummy7_fdac[3]; // 0e25:1970
dw dummy7_fdb2[3]; // 0e25:1970
dw dummy7_fdb8[3]; // 0e25:1970
dw dummy7_fdbe; // 0e25:1970
dw jpt_1caa7[3]; // 0e25:1b70
dw dummy7_fdc6[3]; // 0e25:1b70
dw dummy7_fdcc[3]; // 0e25:1b70
dw dummy7_fdd2[3]; // 0e25:1b70
dw dummy7_fdd8[3]; // 0e25:1b70
dw dummy7_fdde[3]; // 0e25:1b70
dw dummy7_fde4[3]; // 0e25:1b70
dw dummy7_fdea[3]; // 0e25:1b70
dw dummy7_fdf0[3]; // 0e25:1b70
dw dummy7_fdf6[3]; // 0e25:1b70
dw dummy7_fdfc[3]; // 0e25:1b70
dw dummy7_fe02[3]; // 0e25:1b70
dw dummy7_fe08[3]; // 0e25:1b70
dw dummy7_fe0e[3]; // 0e25:1b70
dw dummy7_fe14[3]; // 0e25:1b70
dw dummy7_fe1a[3]; // 0e25:1b70
dw dummy7_fe20[3]; // 0e25:1b70
dw dummy7_fe26[3]; // 0e25:1b70
dw dummy7_fe2c[3]; // 0e25:1b70
dw dummy7_fe32[3]; // 0e25:1b70
dw dummy7_fe38[3]; // 0e25:1b70
dw dummy7_fe3e[3]; // 0e25:1b70
dw dummy7_fe44[3]; // 0e25:1b70
dw dummy7_fe4a[3]; // 0e25:1b70
dw dummy7_fe50[3]; // 0e25:1b70
dw dummy7_fe56[3]; // 0e25:1b70
dw dummy7_fe5c[3]; // 0e25:1b70
dw dummy7_fe62[3]; // 0e25:1b70
dw dummy7_fe68[3]; // 0e25:1b70
dw dummy7_fe6e[3]; // 0e25:1b70
dw dummy7_fe74[3]; // 0e25:1b70
dw dummy7_fe7a[3]; // 0e25:1b70
dw dummy7_fe80[3]; // 0e25:1b70
dw dummy7_fe86[3]; // 0e25:1b70
dw dummy7_fe8c[3]; // 0e25:1b70
dw dummy7_fe92[3]; // 0e25:1b70
dw dummy7_fe98[3]; // 0e25:1b70
dw dummy7_fe9e[3]; // 0e25:1b70
dw dummy7_fea4[3]; // 0e25:1b70
dw dummy7_feaa[3]; // 0e25:1b70
dw dummy7_feb0[3]; // 0e25:1b70
dw dummy7_feb6[3]; // 0e25:1b70
dw dummy7_febc[3]; // 0e25:1b70
dw dummy7_fec2[3]; // 0e25:1b70
dw dummy7_fec8[3]; // 0e25:1b70
dw dummy7_fece[3]; // 0e25:1b70
dw dummy7_fed4[3]; // 0e25:1b70
dw dummy7_feda[3]; // 0e25:1b70
dw dummy7_fee0[3]; // 0e25:1b70
dw dummy7_fee6[3]; // 0e25:1b70
dw dummy7_feec[3]; // 0e25:1b70
dw dummy7_fef2[3]; // 0e25:1b70
dw dummy7_fef8[3]; // 0e25:1b70
dw dummy7_fefe[3]; // 0e25:1b70
dw dummy7_ff04[3]; // 0e25:1b70
dw dummy7_ff0a[3]; // 0e25:1b70
dw dummy7_ff10[3]; // 0e25:1b70
dw dummy7_ff16[3]; // 0e25:1b70
dw dummy7_ff1c[3]; // 0e25:1b70
dw dummy7_ff22[3]; // 0e25:1b70
dw dummy7_ff28[3]; // 0e25:1b70
dw dummy7_ff2e[3]; // 0e25:1b70
dw dummy7_ff34[3]; // 0e25:1b70
dw dummy7_ff3a[3]; // 0e25:1b70
dw dummy7_ff40[3]; // 0e25:1b70
dw dummy7_ff46[3]; // 0e25:1b70
dw dummy7_ff4c[3]; // 0e25:1b70
dw dummy7_ff52[3]; // 0e25:1b70
dw dummy7_ff58[3]; // 0e25:1b70
dw dummy7_ff5e[3]; // 0e25:1b70
dw dummy7_ff64[3]; // 0e25:1b70
dw dummy7_ff6a[3]; // 0e25:1b70
dw dummy7_ff70[3]; // 0e25:1b70
dw dummy7_ff76[3]; // 0e25:1b70
dw dummy7_ff7c[3]; // 0e25:1b70
dw dummy7_ff82[3]; // 0e25:1b70
dw dummy7_ff88[3]; // 0e25:1b70
dw dummy7_ff8e[3]; // 0e25:1b70
dw dummy7_ff94[3]; // 0e25:1b70
dw dummy7_ff9a[3]; // 0e25:1b70
dw dummy7_ffa0[3]; // 0e25:1b70
dw dummy7_ffa6[3]; // 0e25:1b70
dw dummy7_ffac[3]; // 0e25:1b70
dw dummy7_ffb2[3]; // 0e25:1b70
dw dummy7_ffb8[3]; // 0e25:1b70
dw dummy7_ffbe; // 0e25:1b70
dw jpt_1cba1; // 0e25:1d70
dw dummy7_ffc2; // 0e25:1d72
dw dummy7_ffc4; // 0e25:1d74
dw dummy7_ffc6; // 0e25:1d76
dw dummy7_ffc8; // 0e25:1d78
dw dummy7_ffca; // 0e25:1d7a
dw dummy7_ffcc; // 0e25:1d7c
dw dummy7_ffce; // 0e25:1d7e
dw dummy7_ffd0; // 0e25:1d80
dw dummy7_ffd2; // 0e25:1d82
dw dummy7_ffd4; // 0e25:1d84
dw dummy7_ffd6; // 0e25:1d86
dw dummy7_ffd8; // 0e25:1d88
dw dummy7_ffda; // 0e25:1d8a
dw dummy7_ffdc; // 0e25:1d8c
dw dummy7_ffde; // 0e25:1d8e
dw dummy7_ffe0; // 0e25:1d90
dw dummy7_ffe2; // 0e25:1d92
dw dummy7_ffe4; // 0e25:1d94
dw dummy7_ffe6; // 0e25:1d96
dw dummy7_ffe8; // 0e25:1d98
dw dummy7_ffea; // 0e25:1d9a
dw dummy7_ffec; // 0e25:1d9c
dw dummy7_ffee; // 0e25:1d9e
dw dummy7_fff0; // 0e25:1da0
dw dummy7_fff2; // 0e25:1da2
dw dummy7_fff4; // 0e25:1da4
dw dummy7_fff6; // 0e25:1da6
dw dummy7_fff8; // 0e25:1da8
dw dummy7_fffa; // 0e25:1daa
dw dummy7_fffc; // 0e25:1dac
dw dummy7_fffe; // 0e25:1dae
dw dummy7_10000; // 0e25:1db0
dw dummy7_10002; // 0e25:1db2
dw dummy7_10004; // 0e25:1db4
dw dummy7_10006; // 0e25:1db6
dw dummy7_10008; // 0e25:1db8
dw dummy7_1000a; // 0e25:1dba
dw dummy7_1000c; // 0e25:1dbc
dw dummy7_1000e; // 0e25:1dbe
dw dummy7_10010; // 0e25:1dc0
dw dummy7_10012; // 0e25:1dc2
dw dummy7_10014; // 0e25:1dc4
dw dummy7_10016; // 0e25:1dc6
dw dummy7_10018; // 0e25:1dc8
dw dummy7_1001a; // 0e25:1dca
dw dummy7_1001c; // 0e25:1dcc
dw dummy7_1001e; // 0e25:1dce
dw dummy7_10020; // 0e25:1dd0
dw dummy7_10022; // 0e25:1dd2
dw dummy7_10024; // 0e25:1dd4
dw dummy7_10026; // 0e25:1dd6
dw dummy7_10028; // 0e25:1dd8
dw dummy7_1002a; // 0e25:1dda
dw dummy7_1002c; // 0e25:1ddc
dw dummy7_1002e; // 0e25:1dde
dw dummy7_10030; // 0e25:1de0
dw dummy7_10032; // 0e25:1de2
dw dummy7_10034; // 0e25:1de4
dw dummy7_10036; // 0e25:1de6
dw dummy7_10038; // 0e25:1de8
dw dummy7_1003a; // 0e25:1dea
dw dummy7_1003c; // 0e25:1dec
dw dummy7_1003e; // 0e25:1dee
dw dummy7_10040; // 0e25:1df0
dw dummy7_10042; // 0e25:1df2
dw dummy7_10044; // 0e25:1df4
dw dummy7_10046; // 0e25:1df6
dw dummy7_10048; // 0e25:1df8
dw dummy7_1004a; // 0e25:1dfa
dw dummy7_1004c; // 0e25:1dfc
dw dummy7_1004e; // 0e25:1dfe
dw dummy7_10050; // 0e25:1e00
dw dummy7_10052; // 0e25:1e02
dw dummy7_10054; // 0e25:1e04
dw dummy7_10056; // 0e25:1e06
dw dummy7_10058; // 0e25:1e08
dw dummy7_1005a; // 0e25:1e0a
dw dummy7_1005c; // 0e25:1e0c
dw dummy7_1005e; // 0e25:1e0e
dw dummy7_10060; // 0e25:1e10
dw dummy7_10062; // 0e25:1e12
dw dummy7_10064; // 0e25:1e14
dw dummy7_10066; // 0e25:1e16
dw dummy7_10068; // 0e25:1e18
dw dummy7_1006a; // 0e25:1e1a
dw dummy7_1006c; // 0e25:1e1c
dw dummy7_1006e; // 0e25:1e1e
dw dummy7_10070; // 0e25:1e20
dw dummy7_10072; // 0e25:1e22
dw dummy7_10074; // 0e25:1e24
dw dummy7_10076; // 0e25:1e26
dw dummy7_10078; // 0e25:1e28
dw dummy7_1007a; // 0e25:1e2a
dw dummy7_1007c; // 0e25:1e2c
dw dummy7_1007e; // 0e25:1e2e
dw dummy7_10080; // 0e25:1e30
dw dummy7_10082; // 0e25:1e32
dw dummy7_10084; // 0e25:1e34
dw dummy7_10086; // 0e25:1e36
dw dummy7_10088; // 0e25:1e38
dw dummy7_1008a; // 0e25:1e3a
dw dummy7_1008c; // 0e25:1e3c
dw dummy7_1008e; // 0e25:1e3e
dw dummy7_10090; // 0e25:1e40
dw dummy7_10092; // 0e25:1e42
dw dummy7_10094; // 0e25:1e44
dw dummy7_10096; // 0e25:1e46
dw dummy7_10098; // 0e25:1e48
dw dummy7_1009a; // 0e25:1e4a
dw dummy7_1009c; // 0e25:1e4c
dw dummy7_1009e; // 0e25:1e4e
dw dummy7_100a0; // 0e25:1e50
dw dummy7_100a2; // 0e25:1e52
dw dummy7_100a4; // 0e25:1e54
dw dummy7_100a6; // 0e25:1e56
dw dummy7_100a8; // 0e25:1e58
dw dummy7_100aa; // 0e25:1e5a
dw dummy7_100ac; // 0e25:1e5c
dw dummy7_100ae; // 0e25:1e5e
dw dummy7_100b0; // 0e25:1e60
dw dummy7_100b2; // 0e25:1e62
dw dummy7_100b4; // 0e25:1e64
dw dummy7_100b6; // 0e25:1e66
dw dummy7_100b8; // 0e25:1e68
dw dummy7_100ba; // 0e25:1e6a
dw dummy7_100bc; // 0e25:1e6c
dw dummy7_100be; // 0e25:1e6e
dw dummy7_100c0; // 0e25:1e70
dw dummy7_100c2; // 0e25:1e72
dw dummy7_100c4; // 0e25:1e74
dw dummy7_100c6; // 0e25:1e76
dw dummy7_100c8; // 0e25:1e78
dw dummy7_100ca; // 0e25:1e7a
dw dummy7_100cc; // 0e25:1e7c
dw dummy7_100ce; // 0e25:1e7e
dw dummy7_100d0; // 0e25:1e80
dw dummy7_100d2; // 0e25:1e82
dw dummy7_100d4; // 0e25:1e84
dw dummy7_100d6; // 0e25:1e86
dw dummy7_100d8; // 0e25:1e88
dw dummy7_100da; // 0e25:1e8a
dw dummy7_100dc; // 0e25:1e8c
dw dummy7_100de; // 0e25:1e8e
dw dummy7_100e0; // 0e25:1e90
dw dummy7_100e2; // 0e25:1e92
dw dummy7_100e4; // 0e25:1e94
dw dummy7_100e6; // 0e25:1e96
dw dummy7_100e8; // 0e25:1e98
dw dummy7_100ea; // 0e25:1e9a
dw dummy7_100ec; // 0e25:1e9c
dw dummy7_100ee; // 0e25:1e9e
dw dummy7_100f0; // 0e25:1ea0
dw dummy7_100f2; // 0e25:1ea2
dw dummy7_100f4; // 0e25:1ea4
dw dummy7_100f6; // 0e25:1ea6
dw dummy7_100f8; // 0e25:1ea8
dw dummy7_100fa; // 0e25:1eaa
dw dummy7_100fc; // 0e25:1eac
dw dummy7_100fe; // 0e25:1eae
dw dummy7_10100; // 0e25:1eb0
dw dummy7_10102; // 0e25:1eb2
dw dummy7_10104; // 0e25:1eb4
dw dummy7_10106; // 0e25:1eb6
dw dummy7_10108; // 0e25:1eb8
dw dummy7_1010a; // 0e25:1eba
dw dummy7_1010c; // 0e25:1ebc
dw dummy7_1010e; // 0e25:1ebe
dw dummy7_10110; // 0e25:1ec0
dw dummy7_10112; // 0e25:1ec2
dw dummy7_10114; // 0e25:1ec4
dw dummy7_10116; // 0e25:1ec6
dw dummy7_10118; // 0e25:1ec8
dw dummy7_1011a; // 0e25:1eca
dw dummy7_1011c; // 0e25:1ecc
dw dummy7_1011e; // 0e25:1ece
dw dummy7_10120; // 0e25:1ed0
dw dummy7_10122; // 0e25:1ed2
dw dummy7_10124; // 0e25:1ed4
dw dummy7_10126; // 0e25:1ed6
dw dummy7_10128; // 0e25:1ed8
dw dummy7_1012a; // 0e25:1eda
dw dummy7_1012c; // 0e25:1edc
dw dummy7_1012e; // 0e25:1ede
dw dummy7_10130; // 0e25:1ee0
dw dummy7_10132; // 0e25:1ee2
dw dummy7_10134; // 0e25:1ee4
dw dummy7_10136; // 0e25:1ee6
dw dummy7_10138; // 0e25:1ee8
dw dummy7_1013a; // 0e25:1eea
dw dummy7_1013c; // 0e25:1eec
dw dummy7_1013e; // 0e25:1eee
dw dummy7_10140; // 0e25:1ef0
dw dummy7_10142; // 0e25:1ef2
dw dummy7_10144; // 0e25:1ef4
dw dummy7_10146; // 0e25:1ef6
dw dummy7_10148; // 0e25:1ef8
dw dummy7_1014a; // 0e25:1efa
dw dummy7_1014c; // 0e25:1efc
dw dummy7_1014e; // 0e25:1efe
dw dummy7_10150; // 0e25:1f00
dw dummy7_10152; // 0e25:1f02
dw dummy7_10154; // 0e25:1f04
dw dummy7_10156; // 0e25:1f06
dw dummy7_10158; // 0e25:1f08
dw dummy7_1015a; // 0e25:1f0a
dw dummy7_1015c; // 0e25:1f0c
dw dummy7_1015e; // 0e25:1f0e
dw dummy7_10160; // 0e25:1f10
dw dummy7_10162; // 0e25:1f12
dw dummy7_10164; // 0e25:1f14
dw dummy7_10166; // 0e25:1f16
dw dummy7_10168; // 0e25:1f18
dw dummy7_1016a; // 0e25:1f1a
dw dummy7_1016c; // 0e25:1f1c
dw dummy7_1016e; // 0e25:1f1e
dw dummy7_10170; // 0e25:1f20
dw dummy7_10172; // 0e25:1f22
dw dummy7_10174; // 0e25:1f24
dw dummy7_10176; // 0e25:1f26
dw dummy7_10178; // 0e25:1f28
dw dummy7_1017a; // 0e25:1f2a
dw dummy7_1017c; // 0e25:1f2c
dw dummy7_1017e; // 0e25:1f2e
dw dummy7_10180; // 0e25:1f30
dw dummy7_10182; // 0e25:1f32
dw dummy7_10184; // 0e25:1f34
dw dummy7_10186; // 0e25:1f36
dw dummy7_10188; // 0e25:1f38
dw dummy7_1018a; // 0e25:1f3a
dw dummy7_1018c; // 0e25:1f3c
dw dummy7_1018e; // 0e25:1f3e
dw dummy7_10190; // 0e25:1f40
dw dummy7_10192; // 0e25:1f42
dw dummy7_10194; // 0e25:1f44
dw dummy7_10196; // 0e25:1f46
dw dummy7_10198; // 0e25:1f48
dw dummy7_1019a; // 0e25:1f4a
dw dummy7_1019c; // 0e25:1f4c
dw dummy7_1019e; // 0e25:1f4e
dw dummy7_101a0; // 0e25:1f50
dw dummy7_101a2; // 0e25:1f52
dw dummy7_101a4; // 0e25:1f54
dw dummy7_101a6; // 0e25:1f56
dw dummy7_101a8; // 0e25:1f58
dw dummy7_101aa; // 0e25:1f5a
dw dummy7_101ac; // 0e25:1f5c
dw dummy7_101ae; // 0e25:1f5e
dw dummy7_101b0; // 0e25:1f60
dw dummy7_101b2; // 0e25:1f62
dw dummy7_101b4; // 0e25:1f64
dw dummy7_101b6; // 0e25:1f66
dw dummy7_101b8; // 0e25:1f68
dw dummy7_101ba; // 0e25:1f6a
dw dummy7_101bc; // 0e25:1f6c
dw dummy7_101be; // 0e25:1f6e
dw jpt_1cc9b; // 0e25:1f70
dw dummy7_101c2; // 0e25:1f72
dw dummy7_101c4; // 0e25:1f74
dw dummy7_101c6; // 0e25:1f76
dw dummy7_101c8; // 0e25:1f78
dw dummy7_101ca; // 0e25:1f7a
dw dummy7_101cc; // 0e25:1f7c
dw dummy7_101ce; // 0e25:1f7e
dw dummy7_101d0; // 0e25:1f80
dw dummy7_101d2; // 0e25:1f82
dw dummy7_101d4; // 0e25:1f84
dw dummy7_101d6; // 0e25:1f86
dw dummy7_101d8; // 0e25:1f88
dw dummy7_101da; // 0e25:1f8a
dw dummy7_101dc; // 0e25:1f8c
dw dummy7_101de; // 0e25:1f8e
dw dummy7_101e0; // 0e25:1f90
dw dummy7_101e2; // 0e25:1f92
dw dummy7_101e4; // 0e25:1f94
dw dummy7_101e6; // 0e25:1f96
dw dummy7_101e8; // 0e25:1f98
dw dummy7_101ea; // 0e25:1f9a
dw dummy7_101ec; // 0e25:1f9c
dw dummy7_101ee; // 0e25:1f9e
dw dummy7_101f0; // 0e25:1fa0
dw dummy7_101f2; // 0e25:1fa2
dw dummy7_101f4; // 0e25:1fa4
dw dummy7_101f6; // 0e25:1fa6
dw dummy7_101f8; // 0e25:1fa8
dw dummy7_101fa; // 0e25:1faa
dw dummy7_101fc; // 0e25:1fac
dw dummy7_101fe; // 0e25:1fae
dw dummy7_10200; // 0e25:1fb0
dw dummy7_10202; // 0e25:1fb2
dw dummy7_10204; // 0e25:1fb4
dw dummy7_10206; // 0e25:1fb6
dw dummy7_10208; // 0e25:1fb8
dw dummy7_1020a; // 0e25:1fba
dw dummy7_1020c; // 0e25:1fbc
dw dummy7_1020e; // 0e25:1fbe
dw dummy7_10210; // 0e25:1fc0
dw dummy7_10212; // 0e25:1fc2
dw dummy7_10214; // 0e25:1fc4
dw dummy7_10216; // 0e25:1fc6
dw dummy7_10218; // 0e25:1fc8
dw dummy7_1021a; // 0e25:1fca
dw dummy7_1021c; // 0e25:1fcc
dw dummy7_1021e; // 0e25:1fce
dw dummy7_10220; // 0e25:1fd0
dw dummy7_10222; // 0e25:1fd2
dw dummy7_10224; // 0e25:1fd4
dw dummy7_10226; // 0e25:1fd6
dw dummy7_10228; // 0e25:1fd8
dw dummy7_1022a; // 0e25:1fda
dw dummy7_1022c; // 0e25:1fdc
dw dummy7_1022e; // 0e25:1fde
dw dummy7_10230; // 0e25:1fe0
dw dummy7_10232; // 0e25:1fe2
dw dummy7_10234; // 0e25:1fe4
dw dummy7_10236; // 0e25:1fe6
dw dummy7_10238; // 0e25:1fe8
dw dummy7_1023a; // 0e25:1fea
dw dummy7_1023c; // 0e25:1fec
dw dummy7_1023e; // 0e25:1fee
dw dummy7_10240; // 0e25:1ff0
dw dummy7_10242; // 0e25:1ff2
dw dummy7_10244; // 0e25:1ff4
dw dummy7_10246; // 0e25:1ff6
dw dummy7_10248; // 0e25:1ff8
dw dummy7_1024a; // 0e25:1ffa
dw dummy7_1024c; // 0e25:1ffc
dw dummy7_1024e; // 0e25:1ffe
dw dummy7_10250; // 0e25:2000
dw dummy7_10252; // 0e25:2002
dw dummy7_10254; // 0e25:2004
dw dummy7_10256; // 0e25:2006
dw dummy7_10258; // 0e25:2008
dw dummy7_1025a; // 0e25:200a
dw dummy7_1025c; // 0e25:200c
dw dummy7_1025e; // 0e25:200e
dw dummy7_10260; // 0e25:2010
dw dummy7_10262; // 0e25:2012
dw dummy7_10264; // 0e25:2014
dw dummy7_10266; // 0e25:2016
dw dummy7_10268; // 0e25:2018
dw dummy7_1026a; // 0e25:201a
dw dummy7_1026c; // 0e25:201c
dw dummy7_1026e; // 0e25:201e
dw dummy7_10270; // 0e25:2020
dw dummy7_10272; // 0e25:2022
dw dummy7_10274; // 0e25:2024
dw dummy7_10276; // 0e25:2026
dw dummy7_10278; // 0e25:2028
dw dummy7_1027a; // 0e25:202a
dw dummy7_1027c; // 0e25:202c
dw dummy7_1027e; // 0e25:202e
dw dummy7_10280; // 0e25:2030
dw dummy7_10282; // 0e25:2032
dw dummy7_10284; // 0e25:2034
dw dummy7_10286; // 0e25:2036
dw dummy7_10288; // 0e25:2038
dw dummy7_1028a; // 0e25:203a
dw dummy7_1028c; // 0e25:203c
dw dummy7_1028e; // 0e25:203e
dw dummy7_10290; // 0e25:2040
dw dummy7_10292; // 0e25:2042
dw dummy7_10294; // 0e25:2044
dw dummy7_10296; // 0e25:2046
dw dummy7_10298; // 0e25:2048
dw dummy7_1029a; // 0e25:204a
dw dummy7_1029c; // 0e25:204c
dw dummy7_1029e; // 0e25:204e
dw dummy7_102a0; // 0e25:2050
dw dummy7_102a2; // 0e25:2052
dw dummy7_102a4; // 0e25:2054
dw dummy7_102a6; // 0e25:2056
dw dummy7_102a8; // 0e25:2058
dw dummy7_102aa; // 0e25:205a
dw dummy7_102ac; // 0e25:205c
dw dummy7_102ae; // 0e25:205e
dw dummy7_102b0; // 0e25:2060
dw dummy7_102b2; // 0e25:2062
dw dummy7_102b4; // 0e25:2064
dw dummy7_102b6; // 0e25:2066
dw dummy7_102b8; // 0e25:2068
dw dummy7_102ba; // 0e25:206a
dw dummy7_102bc; // 0e25:206c
dw dummy7_102be; // 0e25:206e
dw dummy7_102c0; // 0e25:2070
dw dummy7_102c2; // 0e25:2072
dw dummy7_102c4; // 0e25:2074
dw dummy7_102c6; // 0e25:2076
dw dummy7_102c8; // 0e25:2078
dw dummy7_102ca; // 0e25:207a
dw dummy7_102cc; // 0e25:207c
dw dummy7_102ce; // 0e25:207e
dw dummy7_102d0; // 0e25:2080
dw dummy7_102d2; // 0e25:2082
dw dummy7_102d4; // 0e25:2084
dw dummy7_102d6; // 0e25:2086
dw dummy7_102d8; // 0e25:2088
dw dummy7_102da; // 0e25:208a
dw dummy7_102dc; // 0e25:208c
dw dummy7_102de; // 0e25:208e
dw dummy7_102e0; // 0e25:2090
dw dummy7_102e2; // 0e25:2092
dw dummy7_102e4; // 0e25:2094
dw dummy7_102e6; // 0e25:2096
dw dummy7_102e8; // 0e25:2098
dw dummy7_102ea; // 0e25:209a
dw dummy7_102ec; // 0e25:209c
dw dummy7_102ee; // 0e25:209e
dw dummy7_102f0; // 0e25:20a0
dw dummy7_102f2; // 0e25:20a2
dw dummy7_102f4; // 0e25:20a4
dw dummy7_102f6; // 0e25:20a6
dw dummy7_102f8; // 0e25:20a8
dw dummy7_102fa; // 0e25:20aa
dw dummy7_102fc; // 0e25:20ac
dw dummy7_102fe; // 0e25:20ae
dw dummy7_10300; // 0e25:20b0
dw dummy7_10302; // 0e25:20b2
dw dummy7_10304; // 0e25:20b4
dw dummy7_10306; // 0e25:20b6
dw dummy7_10308; // 0e25:20b8
dw dummy7_1030a; // 0e25:20ba
dw dummy7_1030c; // 0e25:20bc
dw dummy7_1030e; // 0e25:20be
dw dummy7_10310; // 0e25:20c0
dw dummy7_10312; // 0e25:20c2
dw dummy7_10314; // 0e25:20c4
dw dummy7_10316; // 0e25:20c6
dw dummy7_10318; // 0e25:20c8
dw dummy7_1031a; // 0e25:20ca
dw dummy7_1031c; // 0e25:20cc
dw dummy7_1031e; // 0e25:20ce
dw dummy7_10320; // 0e25:20d0
dw dummy7_10322; // 0e25:20d2
dw dummy7_10324; // 0e25:20d4
dw dummy7_10326; // 0e25:20d6
dw dummy7_10328; // 0e25:20d8
dw dummy7_1032a; // 0e25:20da
dw dummy7_1032c; // 0e25:20dc
dw dummy7_1032e; // 0e25:20de
dw dummy7_10330; // 0e25:20e0
dw dummy7_10332; // 0e25:20e2
dw dummy7_10334; // 0e25:20e4
dw dummy7_10336; // 0e25:20e6
dw dummy7_10338; // 0e25:20e8
dw dummy7_1033a; // 0e25:20ea
dw dummy7_1033c; // 0e25:20ec
dw dummy7_1033e; // 0e25:20ee
dw dummy7_10340; // 0e25:20f0
dw dummy7_10342; // 0e25:20f2
dw dummy7_10344; // 0e25:20f4
dw dummy7_10346; // 0e25:20f6
dw dummy7_10348; // 0e25:20f8
dw dummy7_1034a; // 0e25:20fa
dw dummy7_1034c; // 0e25:20fc
dw dummy7_1034e; // 0e25:20fe
dw dummy7_10350; // 0e25:2100
dw dummy7_10352; // 0e25:2102
dw dummy7_10354; // 0e25:2104
dw dummy7_10356; // 0e25:2106
dw dummy7_10358; // 0e25:2108
dw dummy7_1035a; // 0e25:210a
dw dummy7_1035c; // 0e25:210c
dw dummy7_1035e; // 0e25:210e
dw dummy7_10360; // 0e25:2110
dw dummy7_10362; // 0e25:2112
dw dummy7_10364; // 0e25:2114
dw dummy7_10366; // 0e25:2116
dw dummy7_10368; // 0e25:2118
dw dummy7_1036a; // 0e25:211a
dw dummy7_1036c; // 0e25:211c
dw dummy7_1036e; // 0e25:211e
dw dummy7_10370; // 0e25:2120
dw dummy7_10372; // 0e25:2122
dw dummy7_10374; // 0e25:2124
dw dummy7_10376; // 0e25:2126
dw dummy7_10378; // 0e25:2128
dw dummy7_1037a; // 0e25:212a
dw dummy7_1037c; // 0e25:212c
dw dummy7_1037e; // 0e25:212e
dw dummy7_10380; // 0e25:2130
dw dummy7_10382; // 0e25:2132
dw dummy7_10384; // 0e25:2134
dw dummy7_10386; // 0e25:2136
dw dummy7_10388; // 0e25:2138
dw dummy7_1038a; // 0e25:213a
dw dummy7_1038c; // 0e25:213c
dw dummy7_1038e; // 0e25:213e
dw dummy7_10390; // 0e25:2140
dw dummy7_10392; // 0e25:2142
dw dummy7_10394; // 0e25:2144
dw dummy7_10396; // 0e25:2146
dw dummy7_10398; // 0e25:2148
dw dummy7_1039a; // 0e25:214a
dw dummy7_1039c; // 0e25:214c
dw dummy7_1039e; // 0e25:214e
dw dummy7_103a0; // 0e25:2150
dw dummy7_103a2; // 0e25:2152
dw dummy7_103a4; // 0e25:2154
dw dummy7_103a6; // 0e25:2156
dw dummy7_103a8; // 0e25:2158
dw dummy7_103aa; // 0e25:215a
dw dummy7_103ac; // 0e25:215c
dw dummy7_103ae; // 0e25:215e
dw dummy7_103b0; // 0e25:2160
dw dummy7_103b2; // 0e25:2162
dw dummy7_103b4; // 0e25:2164
dw dummy7_103b6; // 0e25:2166
dw dummy7_103b8; // 0e25:2168
dw dummy7_103ba; // 0e25:216a
dw dummy7_103bc; // 0e25:216c
dw dummy7_103be; // 0e25:216e
dw jpt_1d514[3]; // 0e25:2170
dw dummy7_103c6[3]; // 0e25:2170
dw dummy7_103cc[3]; // 0e25:2170
dw dummy7_103d2[3]; // 0e25:2170
dw dummy7_103d8[3]; // 0e25:2170
dw dummy7_103de[3]; // 0e25:2170
dw dummy7_103e4[3]; // 0e25:2170
dw dummy7_103ea[3]; // 0e25:2170
dw dummy7_103f0[3]; // 0e25:2170
dw dummy7_103f6[3]; // 0e25:2170
dw dummy7_103fc[3]; // 0e25:2170
dw dummy7_10402[3]; // 0e25:2170
dw dummy7_10408[3]; // 0e25:2170
dw dummy7_1040e[3]; // 0e25:2170
dw dummy7_10414[3]; // 0e25:2170
dw dummy7_1041a[3]; // 0e25:2170
dw dummy7_10420[3]; // 0e25:2170
dw dummy7_10426[3]; // 0e25:2170
dw dummy7_1042c[3]; // 0e25:2170
dw dummy7_10432[3]; // 0e25:2170
dw dummy7_10438[3]; // 0e25:2170
dw dummy7_1043e[3]; // 0e25:2170
dw dummy7_10444[3]; // 0e25:2170
dw dummy7_1044a[3]; // 0e25:2170
dw dummy7_10450[3]; // 0e25:2170
dw dummy7_10456[3]; // 0e25:2170
dw dummy7_1045c[3]; // 0e25:2170
dw dummy7_10462[3]; // 0e25:2170
dw dummy7_10468[3]; // 0e25:2170
dw dummy7_1046e[3]; // 0e25:2170
dw dummy7_10474[3]; // 0e25:2170
dw dummy7_1047a[3]; // 0e25:2170
dw dummy7_10480[3]; // 0e25:2170
dw dummy7_10486[3]; // 0e25:2170
dw dummy7_1048c[3]; // 0e25:2170
dw dummy7_10492[3]; // 0e25:2170
dw dummy7_10498[3]; // 0e25:2170
dw dummy7_1049e[3]; // 0e25:2170
dw dummy7_104a4[3]; // 0e25:2170
dw dummy7_104aa[3]; // 0e25:2170
dw dummy7_104b0[3]; // 0e25:2170
dw dummy7_104b6[3]; // 0e25:2170
dw dummy7_104bc[3]; // 0e25:2170
dw dummy7_104c2[3]; // 0e25:2170
dw dummy7_104c8[3]; // 0e25:2170
dw dummy7_104ce[3]; // 0e25:2170
dw dummy7_104d4[3]; // 0e25:2170
dw dummy7_104da[3]; // 0e25:2170
dw dummy7_104e0[3]; // 0e25:2170
dw dummy7_104e6[3]; // 0e25:2170
dw dummy7_104ec[3]; // 0e25:2170
dw dummy7_104f2[3]; // 0e25:2170
dw dummy7_104f8[3]; // 0e25:2170
dw dummy7_104fe[3]; // 0e25:2170
dw dummy7_10504[3]; // 0e25:2170
dw dummy7_1050a[3]; // 0e25:2170
dw dummy7_10510[3]; // 0e25:2170
dw dummy7_10516[3]; // 0e25:2170
dw dummy7_1051c[3]; // 0e25:2170
dw dummy7_10522[3]; // 0e25:2170
dw dummy7_10528[3]; // 0e25:2170
dw dummy7_1052e[3]; // 0e25:2170
dw dummy7_10534[3]; // 0e25:2170
dw dummy7_1053a[3]; // 0e25:2170
dw dummy7_10540[3]; // 0e25:2170
dw dummy7_10546[3]; // 0e25:2170
dw dummy7_1054c[3]; // 0e25:2170
dw dummy7_10552[3]; // 0e25:2170
dw dummy7_10558[3]; // 0e25:2170
dw dummy7_1055e[3]; // 0e25:2170
dw dummy7_10564[3]; // 0e25:2170
dw dummy7_1056a[3]; // 0e25:2170
dw dummy7_10570[3]; // 0e25:2170
dw dummy7_10576[3]; // 0e25:2170
dw dummy7_1057c[3]; // 0e25:2170
dw dummy7_10582[3]; // 0e25:2170
dw dummy7_10588[3]; // 0e25:2170
dw dummy7_1058e[3]; // 0e25:2170
dw dummy7_10594[3]; // 0e25:2170
dw dummy7_1059a[3]; // 0e25:2170
dw dummy7_105a0[3]; // 0e25:2170
dw dummy7_105a6[3]; // 0e25:2170
dw dummy7_105ac[3]; // 0e25:2170
dw dummy7_105b2[3]; // 0e25:2170
dw dummy7_105b8[3]; // 0e25:2170
dw dummy7_105be; // 0e25:2170
dw jpt_1d703[3]; // 0e25:2370
dw dummy7_105c6[3]; // 0e25:2370
dw dummy7_105cc[3]; // 0e25:2370
dw dummy7_105d2[3]; // 0e25:2370
dw dummy7_105d8[3]; // 0e25:2370
dw dummy7_105de[3]; // 0e25:2370
dw dummy7_105e4[3]; // 0e25:2370
dw dummy7_105ea[3]; // 0e25:2370
dw dummy7_105f0[3]; // 0e25:2370
dw dummy7_105f6[3]; // 0e25:2370
dw dummy7_105fc[3]; // 0e25:2370
dw dummy7_10602[3]; // 0e25:2370
dw dummy7_10608[3]; // 0e25:2370
dw dummy7_1060e[3]; // 0e25:2370
dw dummy7_10614[3]; // 0e25:2370
dw dummy7_1061a[3]; // 0e25:2370
dw dummy7_10620[3]; // 0e25:2370
dw dummy7_10626[3]; // 0e25:2370
dw dummy7_1062c[3]; // 0e25:2370
dw dummy7_10632[3]; // 0e25:2370
dw dummy7_10638[3]; // 0e25:2370
dw dummy7_1063e[3]; // 0e25:2370
dw dummy7_10644[3]; // 0e25:2370
dw dummy7_1064a[3]; // 0e25:2370
dw dummy7_10650[3]; // 0e25:2370
dw dummy7_10656[3]; // 0e25:2370
dw dummy7_1065c[3]; // 0e25:2370
dw dummy7_10662[3]; // 0e25:2370
dw dummy7_10668[3]; // 0e25:2370
dw dummy7_1066e[3]; // 0e25:2370
dw dummy7_10674[3]; // 0e25:2370
dw dummy7_1067a[3]; // 0e25:2370
dw dummy7_10680[3]; // 0e25:2370
dw dummy7_10686[3]; // 0e25:2370
dw dummy7_1068c[3]; // 0e25:2370
dw dummy7_10692[3]; // 0e25:2370
dw dummy7_10698[3]; // 0e25:2370
dw dummy7_1069e[3]; // 0e25:2370
dw dummy7_106a4[3]; // 0e25:2370
dw dummy7_106aa[3]; // 0e25:2370
dw dummy7_106b0[3]; // 0e25:2370
dw dummy7_106b6[3]; // 0e25:2370
dw dummy7_106bc[3]; // 0e25:2370
dw dummy7_106c2[3]; // 0e25:2370
dw dummy7_106c8[3]; // 0e25:2370
dw dummy7_106ce[3]; // 0e25:2370
dw dummy7_106d4[3]; // 0e25:2370
dw dummy7_106da[3]; // 0e25:2370
dw dummy7_106e0[3]; // 0e25:2370
dw dummy7_106e6[3]; // 0e25:2370
dw dummy7_106ec[3]; // 0e25:2370
dw dummy7_106f2[3]; // 0e25:2370
dw dummy7_106f8[3]; // 0e25:2370
dw dummy7_106fe[3]; // 0e25:2370
dw dummy7_10704[3]; // 0e25:2370
dw dummy7_1070a[3]; // 0e25:2370
dw dummy7_10710[3]; // 0e25:2370
dw dummy7_10716[3]; // 0e25:2370
dw dummy7_1071c[3]; // 0e25:2370
dw dummy7_10722[3]; // 0e25:2370
dw dummy7_10728[3]; // 0e25:2370
dw dummy7_1072e[3]; // 0e25:2370
dw dummy7_10734[3]; // 0e25:2370
dw dummy7_1073a[3]; // 0e25:2370
dw dummy7_10740[3]; // 0e25:2370
dw dummy7_10746[3]; // 0e25:2370
dw dummy7_1074c[3]; // 0e25:2370
dw dummy7_10752[3]; // 0e25:2370
dw dummy7_10758[3]; // 0e25:2370
dw dummy7_1075e[3]; // 0e25:2370
dw dummy7_10764[3]; // 0e25:2370
dw dummy7_1076a[3]; // 0e25:2370
dw dummy7_10770[3]; // 0e25:2370
dw dummy7_10776[3]; // 0e25:2370
dw dummy7_1077c[3]; // 0e25:2370
dw dummy7_10782[3]; // 0e25:2370
dw dummy7_10788[3]; // 0e25:2370
dw dummy7_1078e[3]; // 0e25:2370
dw dummy7_10794[3]; // 0e25:2370
dw dummy7_1079a[3]; // 0e25:2370
dw dummy7_107a0[3]; // 0e25:2370
dw dummy7_107a6[3]; // 0e25:2370
dw dummy7_107ac[3]; // 0e25:2370
dw dummy7_107b2[3]; // 0e25:2370
dw dummy7_107b8[3]; // 0e25:2370
dw dummy7_107be; // 0e25:2370
dw jpt_1da02[3]; // 0e25:2570
dw dummy7_107c6[3]; // 0e25:2570
dw dummy7_107cc[3]; // 0e25:2570
dw dummy7_107d2[3]; // 0e25:2570
dw dummy7_107d8[3]; // 0e25:2570
dw dummy7_107de[3]; // 0e25:2570
dw dummy7_107e4[3]; // 0e25:2570
dw dummy7_107ea[3]; // 0e25:2570
dw dummy7_107f0[3]; // 0e25:2570
dw dummy7_107f6[3]; // 0e25:2570
dw dummy7_107fc[3]; // 0e25:2570
dw dummy7_10802[3]; // 0e25:2570
dw dummy7_10808[3]; // 0e25:2570
dw dummy7_1080e[3]; // 0e25:2570
dw dummy7_10814[3]; // 0e25:2570
dw dummy7_1081a[3]; // 0e25:2570
dw dummy7_10820[3]; // 0e25:2570
dw dummy7_10826[3]; // 0e25:2570
dw dummy7_1082c[3]; // 0e25:2570
dw dummy7_10832[3]; // 0e25:2570
dw dummy7_10838[3]; // 0e25:2570
dw dummy7_1083e[3]; // 0e25:2570
dw dummy7_10844[3]; // 0e25:2570
dw dummy7_1084a[3]; // 0e25:2570
dw dummy7_10850[3]; // 0e25:2570
dw dummy7_10856[3]; // 0e25:2570
dw dummy7_1085c[3]; // 0e25:2570
dw dummy7_10862[3]; // 0e25:2570
dw dummy7_10868[3]; // 0e25:2570
dw dummy7_1086e[3]; // 0e25:2570
dw dummy7_10874[3]; // 0e25:2570
dw dummy7_1087a[3]; // 0e25:2570
dw dummy7_10880[3]; // 0e25:2570
dw dummy7_10886[3]; // 0e25:2570
dw dummy7_1088c[3]; // 0e25:2570
dw dummy7_10892[3]; // 0e25:2570
dw dummy7_10898[3]; // 0e25:2570
dw dummy7_1089e[3]; // 0e25:2570
dw dummy7_108a4[3]; // 0e25:2570
dw dummy7_108aa[3]; // 0e25:2570
dw dummy7_108b0[3]; // 0e25:2570
dw dummy7_108b6[3]; // 0e25:2570
dw dummy7_108bc[3]; // 0e25:2570
dw dummy7_108c2[3]; // 0e25:2570
dw dummy7_108c8[3]; // 0e25:2570
dw dummy7_108ce[3]; // 0e25:2570
dw dummy7_108d4[3]; // 0e25:2570
dw dummy7_108da[3]; // 0e25:2570
dw dummy7_108e0[3]; // 0e25:2570
dw dummy7_108e6[3]; // 0e25:2570
dw dummy7_108ec[3]; // 0e25:2570
dw dummy7_108f2[3]; // 0e25:2570
dw dummy7_108f8[3]; // 0e25:2570
dw dummy7_108fe[3]; // 0e25:2570
dw dummy7_10904[3]; // 0e25:2570
dw dummy7_1090a[3]; // 0e25:2570
dw dummy7_10910[3]; // 0e25:2570
dw dummy7_10916[3]; // 0e25:2570
dw dummy7_1091c[3]; // 0e25:2570
dw dummy7_10922[3]; // 0e25:2570
dw dummy7_10928[3]; // 0e25:2570
dw dummy7_1092e[3]; // 0e25:2570
dw dummy7_10934[3]; // 0e25:2570
dw dummy7_1093a[3]; // 0e25:2570
dw dummy7_10940[3]; // 0e25:2570
dw dummy7_10946[3]; // 0e25:2570
dw dummy7_1094c[3]; // 0e25:2570
dw dummy7_10952[3]; // 0e25:2570
dw dummy7_10958[3]; // 0e25:2570
dw dummy7_1095e[3]; // 0e25:2570
dw dummy7_10964[3]; // 0e25:2570
dw dummy7_1096a[3]; // 0e25:2570
dw dummy7_10970[3]; // 0e25:2570
dw dummy7_10976[3]; // 0e25:2570
dw dummy7_1097c[3]; // 0e25:2570
dw dummy7_10982[3]; // 0e25:2570
dw dummy7_10988[3]; // 0e25:2570
dw dummy7_1098e[3]; // 0e25:2570
dw dummy7_10994[3]; // 0e25:2570
dw dummy7_1099a[3]; // 0e25:2570
dw dummy7_109a0[3]; // 0e25:2570
dw dummy7_109a6[3]; // 0e25:2570
dw dummy7_109ac[3]; // 0e25:2570
dw dummy7_109b2[3]; // 0e25:2570
dw dummy7_109b8[3]; // 0e25:2570
dw dummy7_109be; // 0e25:2570
dw jpt_1dbfe[3]; // 0e25:2770
dw dummy7_109c6[3]; // 0e25:2770
dw dummy7_109cc[3]; // 0e25:2770
dw dummy7_109d2[3]; // 0e25:2770
dw dummy7_109d8[3]; // 0e25:2770
dw dummy7_109de[3]; // 0e25:2770
dw dummy7_109e4[3]; // 0e25:2770
dw dummy7_109ea[3]; // 0e25:2770
dw dummy7_109f0[3]; // 0e25:2770
dw dummy7_109f6[3]; // 0e25:2770
dw dummy7_109fc[3]; // 0e25:2770
dw dummy7_10a02[3]; // 0e25:2770
dw dummy7_10a08[3]; // 0e25:2770
dw dummy7_10a0e[3]; // 0e25:2770
dw dummy7_10a14[3]; // 0e25:2770
dw dummy7_10a1a[3]; // 0e25:2770
dw dummy7_10a20[3]; // 0e25:2770
dw dummy7_10a26[3]; // 0e25:2770
dw dummy7_10a2c[3]; // 0e25:2770
dw dummy7_10a32[3]; // 0e25:2770
dw dummy7_10a38[3]; // 0e25:2770
dw dummy7_10a3e[3]; // 0e25:2770
dw dummy7_10a44[3]; // 0e25:2770
dw dummy7_10a4a[3]; // 0e25:2770
dw dummy7_10a50[3]; // 0e25:2770
dw dummy7_10a56[3]; // 0e25:2770
dw dummy7_10a5c[3]; // 0e25:2770
dw dummy7_10a62[3]; // 0e25:2770
dw dummy7_10a68[3]; // 0e25:2770
dw dummy7_10a6e[3]; // 0e25:2770
dw dummy7_10a74[3]; // 0e25:2770
dw dummy7_10a7a[3]; // 0e25:2770
dw dummy7_10a80[3]; // 0e25:2770
dw dummy7_10a86[3]; // 0e25:2770
dw dummy7_10a8c[3]; // 0e25:2770
dw dummy7_10a92[3]; // 0e25:2770
dw dummy7_10a98[3]; // 0e25:2770
dw dummy7_10a9e[3]; // 0e25:2770
dw dummy7_10aa4[3]; // 0e25:2770
dw dummy7_10aaa[3]; // 0e25:2770
dw dummy7_10ab0[3]; // 0e25:2770
dw dummy7_10ab6[3]; // 0e25:2770
dw dummy7_10abc[3]; // 0e25:2770
dw dummy7_10ac2[3]; // 0e25:2770
dw dummy7_10ac8[3]; // 0e25:2770
dw dummy7_10ace[3]; // 0e25:2770
dw dummy7_10ad4[3]; // 0e25:2770
dw dummy7_10ada[3]; // 0e25:2770
dw dummy7_10ae0[3]; // 0e25:2770
dw dummy7_10ae6[3]; // 0e25:2770
dw dummy7_10aec[3]; // 0e25:2770
dw dummy7_10af2[3]; // 0e25:2770
dw dummy7_10af8[3]; // 0e25:2770
dw dummy7_10afe[3]; // 0e25:2770
dw dummy7_10b04[3]; // 0e25:2770
dw dummy7_10b0a[3]; // 0e25:2770
dw dummy7_10b10[3]; // 0e25:2770
dw dummy7_10b16[3]; // 0e25:2770
dw dummy7_10b1c[3]; // 0e25:2770
dw dummy7_10b22[3]; // 0e25:2770
dw dummy7_10b28[3]; // 0e25:2770
dw dummy7_10b2e[3]; // 0e25:2770
dw dummy7_10b34[3]; // 0e25:2770
dw dummy7_10b3a[3]; // 0e25:2770
dw dummy7_10b40[3]; // 0e25:2770
dw dummy7_10b46[3]; // 0e25:2770
dw dummy7_10b4c[3]; // 0e25:2770
dw dummy7_10b52[3]; // 0e25:2770
dw dummy7_10b58[3]; // 0e25:2770
dw dummy7_10b5e[3]; // 0e25:2770
dw dummy7_10b64[3]; // 0e25:2770
dw dummy7_10b6a[3]; // 0e25:2770
dw dummy7_10b70[3]; // 0e25:2770
dw dummy7_10b76[3]; // 0e25:2770
dw dummy7_10b7c[3]; // 0e25:2770
dw dummy7_10b82[3]; // 0e25:2770
dw dummy7_10b88[3]; // 0e25:2770
dw dummy7_10b8e[3]; // 0e25:2770
dw dummy7_10b94[3]; // 0e25:2770
dw dummy7_10b9a[3]; // 0e25:2770
dw dummy7_10ba0[3]; // 0e25:2770
dw dummy7_10ba6[3]; // 0e25:2770
dw dummy7_10bac[3]; // 0e25:2770
dw dummy7_10bb2[3]; // 0e25:2770
dw dummy7_10bb8[3]; // 0e25:2770
dw dummy7_10bbe; // 0e25:2770
db dummy7_10bc0[37696];
db dummy7_19f00[32]; // 19f0:0000
db dummy7_19f20;
db dummy7_19f21;
db dummy7_19f22;
db dummy7_19f23;
db dummy7_19f24;
db dummy7_19f25;
db dummy7_19f26;
db dummy7_19f27;
db dummy7_19f28;
db dummy7_19f29;
dw word_2850a; // 19f0:002a
db dummy7_19f2c;
db dummy7_19f2d;
db dummy7_19f2e;
db dummy7_19f2f;
db dummy7_19f30;
db dummy7_19f31;
dw word_28512; // 19f0:0032
dw word_28514; // 19f0:0034
dw word_28516; // 19f0:0036
dw word_28518; // 19f0:0038
dw word_2851a; // 19f0:003a
db dummy7_19f3c;
db dummy7_19f3d;
db dummy7_19f3e;
db dummy7_19f3f;
db dummy7_19f40;
db dummy7_19f41;
dw word_28522; // 19f0:0042
dw word_28524; // 19f0:0044
dw word_28526; // 19f0:0046
db dummy7_19f48[32]; // 19f0:0048
db dummy7_19f68;
db dummy7_19f69;
db dummy7_19f6a;
db dummy7_19f6b;
dw word_2854c; // 19f0:006c
dw word_2854e; // 19f0:006e
db dummy7_19f70[32]; // 19f0:0070
db dummy7_19f90[32]; // 19f0:0090
db dummy7_19fb0[32]; // 19f0:00b0
db dummy7_19fd0[32]; // 19f0:00d0
db dummy7_19ff0[32]; // 19f0:00f0
db dummy7_1a010[32]; // 19f0:0110
db dummy7_1a030[32]; // 19f0:0130
db dummy7_1a050[32]; // 19f0:0150
db dummy7_1a070[32]; // 19f0:0170
db dummy7_1a090[32]; // 19f0:0190
db dummy7_1a0b0[32]; // 19f0:01b0
db dummy7_1a0d0[32]; // 19f0:01d0
db dummy7_1a0f0[32]; // 19f0:01f0
db dummy7_1a110[32]; // 19f0:0210
db dummy7_1a130[32]; // 19f0:0230
db dummy7_1a150[32]; // 19f0:0250
db dummy7_1a170;
db dummy7_1a171;
db dummy7_1a172;
db dummy7_1a173;
db dummy7_1a174;
db dummy7_1a175;
db dummy7_1a176;
db dummy7_1a177;
db dummy7_1a178;
db dummy7_1a179;
db dummy7_1a17a;
db dummy7_1a17b;
db dummy7_1a17c;
db dummy7_1a17d;
db dummy7_1a17e;
db dummy7_1a17f;
db dummy7_1a180;
db dummy7_1a181;
db dummy7_1a182;
db dummy7_1a183;
db dummy7_1a184;
db dummy7_1a185;
db dummy7_1a186;
db dummy7_1a187;
db dummy7_1a188;
db dummy7_1a189;
db dummy7_1a18a;
db dummy7_1a18b;
dw word_2876c; // 19f0:028c
db dummy7_1a18e[32]; // 19f0:028e
db dummy7_1a1ae[32]; // 19f0:02ae
db dummy7_1a1ce[32]; // 19f0:02ce
db dummy7_1a1ee;
db dummy7_1a1ef;
db dummy7_1a1f0;
db dummy7_1a1f1;
db dummy7_1a1f2;
db dummy7_1a1f3;
db dummy7_1a1f4;
db dummy7_1a1f5;
db dummy7_1a1f6;
db dummy7_1a1f7;
db dummy7_1a1f8;
db dummy7_1a1f9;
db dummy7_1a1fa;
db dummy7_1a1fb;
db dummy7_1a1fc;
db dummy7_1a1fd;
db dummy7_1a1fe;
db dummy7_1a1ff;
db dummy7_1a200;
db dummy7_1a201;
db dummy7_1a202;
db dummy7_1a203;
db dummy7_1a204;
db dummy7_1a205;
db dummy7_1a206;
db dummy7_1a207;
db byte_287e8; // 19f0:0308
db dummy7_1a209[7];
dw word_287f0; // 19f0:0310
dw word_287f2; // 19f0:0312
dw word_287f4; // 19f0:0314
dw word_287f6; // 19f0:0316
db dummy7_1a218;
db dummy7_1a219;
db dummy7_1a21a;
db dummy7_1a21b;
db dummy7_1a21c;
db dummy7_1a21d;
db dummy7_1a21e;
db dummy7_1a21f;
db dummy7_1a220;
db dummy7_1a221;
db dummy7_1a222;
db dummy7_1a223;
db dummy7_1a224;
db dummy7_1a225;
db dummy7_1a226;
db dummy7_1a227;
db dummy7_1a228;
db dummy7_1a229;
db dummy7_1a22a;
db dummy7_1a22b;
db dummy7_1a22c;
db dummy7_1a22d;
db dummy7_1a22e;
dw word_2880f; // 19f0:032f
db dummy7_1a231[3];
dw word_28814; // 19f0:0334
db dummy7_1a236;
db dummy7_1a237;
db dummy7_1a238;
db dummy7_1a239;
db dummy7_1a23a;
db dummy7_1a23b;
dw word_2881c; // 19f0:033c
db dummy7_1a23e[2];
dw word_28820; // 19f0:0340
db byte_28822; // 19f0:0342
db byte_28823; // 19f0:0343
db byte_28824; // 19f0:0344
db byte_28825; // 19f0:0345
db byte_28826; // 19f0:0346
db byte_28827; // 19f0:0347
dw word_28828; // 19f0:0348
db dummy7_1a24a;
db dummy7_1a24b;
db dummy7_1a24c;
db dummy7_1a24d;
db dummy7_1a24e;
db dummy7_1a24f;
db dummy7_1a250;
db dummy7_1a251;
dw word_28832; // 19f0:0352
db dummy7_1a254;
db dummy7_1a255;
db dummy7_1a256;
db dummy7_1a257;
db dummy7_1a258;
db dummy7_1a259;
db dummy7_1a25a;
db dummy7_1a25b;
db dummy7_1a25c;
db dummy7_1a25d;
db dummy7_1a25e;
db dummy7_1a25f;
db dummy7_1a260;
db dummy7_1a261;
db dummy7_1a262;
db dummy7_1a263;
db dummy7_1a264;
db dummy7_1a265;
db dummy7_1a266;
db dummy7_1a267;
db dummy7_1a268;
db dummy7_1a269;
db dummy7_1a26a;
db dummy7_1a26b;
db dummy7_1a26c;
db dummy7_1a26d;
db dummy7_1a26e;
db dummy7_1a26f;
db dummy7_1a270;
db dummy7_1a271;
dw word_28852; // 19f0:0372
dw word_28854; // 19f0:0374
db dummy7_1a276;
db dummy7_1a277;
db dummy7_1a278;
db dummy7_1a279;
db dummy7_1a27a;
db dummy7_1a27b;
db dummy7_1a27c;
db dummy7_1a27d;
db dummy7_1a27e;
db dummy7_1a27f;
db dummy7_1a280;
db dummy7_1a281;
db dummy7_1a282;
db dummy7_1a283;
db dummy7_1a284;
db dummy7_1a285;
db dummy7_1a286;
db dummy7_1a287;
db dummy7_1a288;
db dummy7_1a289;
db dummy7_1a28a;
db dummy7_1a28b;
db dummy7_1a28c;
db dummy7_1a28d;
db dummy7_1a28e;
db dummy7_1a28f;
db dummy7_1a290;
db dummy7_1a291;
dw word_28872; // 19f0:0392
dw word_28874; // 19f0:0394
dw word_28876; // 19f0:0396
dw word_28878; // 19f0:0398
dw word_2887a; // 19f0:039a
dw word_2887c; // 19f0:039c
db dummy7_1a29e;
db dummy7_1a29f;
db dummy7_1a2a0;
db dummy7_1a2a1;
dw word_28882; // 19f0:03a2
dw word_28884; // 19f0:03a4
dw word_28886; // 19f0:03a6
dw word_28888; // 19f0:03a8
db dummy7_1a2aa;
db dummy7_1a2ab;
db dummy7_1a2ac;
db dummy7_1a2ad;
db dummy7_1a2ae;
db dummy7_1a2af;
db dummy7_1a2b0;
db dummy7_1a2b1;
db dummy7_1a2b2;
db dummy7_1a2b3;
db dummy7_1a2b4;
db dummy7_1a2b5;
dw word_28896; // 19f0:03b6
dw word_28898; // 19f0:03b8
dw word_2889a; // 19f0:03ba
db dummy7_1a2bc;
db dummy7_1a2bd;
db dummy7_1a2be;
db dummy7_1a2bf;
db dummy7_1a2c0;
db dummy7_1a2c1;
dw word_288a2; // 19f0:03c2
dw word_288a4; // 19f0:03c4
dw word_288a6; // 19f0:03c6
db dummy7_1a2c8;
db dummy7_1a2c9;
db dummy7_1a2ca;
db dummy7_1a2cb;
dw word_288ac; // 19f0:03cc
dw word_288ae; // 19f0:03ce
dw word_288b0; // 19f0:03d0
db dummy7_1a2d2[2];
dw word_288b4; // 19f0:03d4
dw word_288b6; // 19f0:03d6
db dummy7_1a2d8[32]; // 19f0:03d8
db dummy7_1a2f8;
db dummy7_1a2f9;
db dummy7_1a2fa;
db dummy7_1a2fb;
db dummy7_1a2fc;
db dummy7_1a2fd;
db dummy7_1a2fe;
db dummy7_1a2ff;
db dummy7_1a300;
db dummy7_1a301;
db dummy7_1a302;
db dummy7_1a303;
db dummy7_1a304;
db dummy7_1a305;
db dummy7_1a306;
db dummy7_1a307;
db dummy7_1a308;
db dummy7_1a309;
db dummy7_1a30a;
db dummy7_1a30b;
db dummy7_1a30c;
db dummy7_1a30d;
db dummy7_1a30e;
db dummy7_1a30f;
db dummy7_1a310;
db dummy7_1a311;
db dummy7_1a312;
db dummy7_1a313;
dw word_288f4; // 19f0:0414
dw word_288f6; // 19f0:0416
dw word_288f8; // 19f0:0418
dw word_288fa; // 19f0:041a
dw word_288fc; // 19f0:041c
dw word_288fe; // 19f0:041e
db dummy7_1a320;
dw word_28901; // 19f0:0421
dw word_28903; // 19f0:0423
dw word_28905; // 19f0:0425
dw word_28907; // 19f0:0427
dw word_28909; // 19f0:0429
dw word_2890b; // 19f0:042b
dw word_2890d; // 19f0:042d
dw word_2890f; // 19f0:042f
dw word_28911; // 19f0:0431
dw word_28913; // 19f0:0433
dw word_28915; // 19f0:0435
dw word_28917; // 19f0:0437
dw word_28919; // 19f0:0439
dw word_2891b; // 19f0:043b
dw word_2891d; // 19f0:043d
dw word_2891f; // 19f0:043f
dw word_28921; // 19f0:0441
dw word_28923; // 19f0:0443
dw word_28925; // 19f0:0445
dw word_28927; // 19f0:0447
dw word_28929; // 19f0:0449
db byte_2892b; // 19f0:044b
db dummy7_1a34c[32]; // 19f0:044c
db dummy7_1a36c[32]; // 19f0:046c
db dummy7_1a38c[32]; // 19f0:048c
db dummy7_1a3ac[32]; // 19f0:04ac
db dummy7_1a3cc[32]; // 19f0:04cc
db dummy7_1a3ec[32]; // 19f0:04ec
db dummy7_1a40c[32]; // 19f0:050c
db dummy7_1a42c[32]; // 19f0:052c
db dummy7_1a44c[32]; // 19f0:054c
db dummy7_1a46c[32]; // 19f0:056c
db dummy7_1a48c[32]; // 19f0:058c
db dummy7_1a4ac[32]; // 19f0:05ac
db dummy7_1a4cc[32]; // 19f0:05cc
db dummy7_1a4ec[32]; // 19f0:05ec
db dummy7_1a50c[32]; // 19f0:060c
db dummy7_1a52c[32]; // 19f0:062c
db dummy7_1a54c[32]; // 19f0:064c
db dummy7_1a56c[32]; // 19f0:066c
db dummy7_1a58c[32]; // 19f0:068c
db dummy7_1a5ac[32]; // 19f0:06ac
db dummy7_1a5cc[32]; // 19f0:06cc
db dummy7_1a5ec[32]; // 19f0:06ec
db dummy7_1a60c[32]; // 19f0:070c
db dummy7_1a62c[32]; // 19f0:072c
db dummy7_1a64c[32]; // 19f0:074c
db dummy7_1a66c[32]; // 19f0:076c
db dummy7_1a68c[32]; // 19f0:078c
db dummy7_1a6ac[32]; // 19f0:07ac
db dummy7_1a6cc[32]; // 19f0:07cc
db dummy7_1a6ec[32]; // 19f0:07ec
db dummy7_1a70c[32]; // 19f0:080c
db dummy7_1a72c[32]; // 19f0:082c
db dummy7_1a74c[32]; // 19f0:084c
db dummy7_1a76c[32]; // 19f0:086c
db dummy7_1a78c[32]; // 19f0:088c
db dummy7_1a7ac[32]; // 19f0:08ac
db dummy7_1a7cc[32]; // 19f0:08cc
db dummy7_1a7ec[32]; // 19f0:08ec
db dummy7_1a80c[32]; // 19f0:090c
db dummy7_1a82c[32]; // 19f0:092c
db dummy7_1a84c[32]; // 19f0:094c
db dummy7_1a86c[32]; // 19f0:096c
db dummy7_1a88c[32]; // 19f0:098c
db dummy7_1a8ac[32]; // 19f0:09ac
db dummy7_1a8cc[32]; // 19f0:09cc
db dummy7_1a8ec[32]; // 19f0:09ec
db dummy7_1a90c[32]; // 19f0:0a0c
db dummy7_1a92c[32]; // 19f0:0a2c
db dummy7_1a94c[32]; // 19f0:0a4c
db dummy7_1a96c[32]; // 19f0:0a6c
db dummy7_1a98c[32]; // 19f0:0a8c
db dummy7_1a9ac[32]; // 19f0:0aac
db dummy7_1a9cc[32]; // 19f0:0acc
db dummy7_1a9ec[32]; // 19f0:0aec
db dummy7_1aa0c[32]; // 19f0:0b0c
db dummy7_1aa2c[32]; // 19f0:0b2c
db dummy7_1aa4c[32]; // 19f0:0b4c
db dummy7_1aa6c[32]; // 19f0:0b6c
db dummy7_1aa8c[32]; // 19f0:0b8c
db dummy7_1aaac[32]; // 19f0:0bac
db dummy7_1aacc[32]; // 19f0:0bcc
db dummy7_1aaec[32]; // 19f0:0bec
db dummy7_1ab0c[32]; // 19f0:0c0c
db dummy7_1ab2c[32]; // 19f0:0c2c
db dummy7_1ab4c[32]; // 19f0:0c4c
db dummy7_1ab6c[32]; // 19f0:0c6c
db dummy7_1ab8c[32]; // 19f0:0c8c
db dummy7_1abac[32]; // 19f0:0cac
db dummy7_1abcc[32]; // 19f0:0ccc
db dummy7_1abec[32]; // 19f0:0cec
db dummy7_1ac0c[32]; // 19f0:0d0c
db dummy7_1ac2c[32]; // 19f0:0d2c
db dummy7_1ac4c[32]; // 19f0:0d4c
db dummy7_1ac6c[32]; // 19f0:0d6c
db dummy7_1ac8c[32]; // 19f0:0d8c
db dummy7_1acac[32]; // 19f0:0dac
db dummy7_1accc[32]; // 19f0:0dcc
db dummy7_1acec[32]; // 19f0:0dec
db dummy7_1ad0c[32]; // 19f0:0e0c
db dummy7_1ad2c[32]; // 19f0:0e2c
db dummy7_1ad4c[32]; // 19f0:0e4c
db dummy7_1ad6c[32]; // 19f0:0e6c
db dummy7_1ad8c[32]; // 19f0:0e8c
db dummy7_1adac[32]; // 19f0:0eac
db dummy7_1adcc[32]; // 19f0:0ecc
db dummy7_1adec[32]; // 19f0:0eec
db dummy7_1ae0c[32]; // 19f0:0f0c
db dummy7_1ae2c[32]; // 19f0:0f2c
db dummy7_1ae4c[32]; // 19f0:0f4c
db dummy7_1ae6c[32]; // 19f0:0f6c
db dummy7_1ae8c[32]; // 19f0:0f8c
db dummy7_1aeac[32]; // 19f0:0fac
db dummy7_1aecc[32]; // 19f0:0fcc
db dummy7_1aeec[32]; // 19f0:0fec
db dummy7_1af0c[32]; // 19f0:100c
db dummy7_1af2c[32]; // 19f0:102c
db dummy7_1af4c[32]; // 19f0:104c
db dummy7_1af6c[32]; // 19f0:106c
db dummy7_1af8c[32]; // 19f0:108c
db dummy7_1afac[32]; // 19f0:10ac
db dummy7_1afcc[32]; // 19f0:10cc
db dummy7_1afec[32]; // 19f0:10ec
db dummy7_1b00c[32]; // 19f0:110c
db dummy7_1b02c[32]; // 19f0:112c
db dummy7_1b04c[32]; // 19f0:114c
db dummy7_1b06c[32]; // 19f0:116c
db dummy7_1b08c[32]; // 19f0:118c
db dummy7_1b0ac[32]; // 19f0:11ac
db dummy7_1b0cc[32]; // 19f0:11cc
db dummy7_1b0ec[32]; // 19f0:11ec
db dummy7_1b10c[32]; // 19f0:120c
db dummy7_1b12c[32]; // 19f0:122c
db dummy7_1b14c[32]; // 19f0:124c
db dummy7_1b16c[32]; // 19f0:126c
db dummy7_1b18c[32]; // 19f0:128c
db dummy7_1b1ac[32]; // 19f0:12ac
db dummy7_1b1cc[32]; // 19f0:12cc
db dummy7_1b1ec[32]; // 19f0:12ec
db dummy7_1b20c[32]; // 19f0:130c
db dummy7_1b22c[32]; // 19f0:132c
db dummy7_1b24c[32]; // 19f0:134c
db dummy7_1b26c[32]; // 19f0:136c
db dummy7_1b28c[32]; // 19f0:138c
db dummy7_1b2ac[32]; // 19f0:13ac
db dummy7_1b2cc[32]; // 19f0:13cc
db dummy7_1b2ec[32]; // 19f0:13ec
db dummy7_1b30c[32]; // 19f0:140c
db dummy7_1b32c[32]; // 19f0:142c
db dummy7_1b34c[32]; // 19f0:144c
db dummy7_1b36c[32]; // 19f0:146c
db dummy7_1b38c[32]; // 19f0:148c
db dummy7_1b3ac[32]; // 19f0:14ac
db dummy7_1b3cc[32]; // 19f0:14cc
db dummy7_1b3ec[32]; // 19f0:14ec
db dummy7_1b40c[32]; // 19f0:150c
db dummy7_1b42c[32]; // 19f0:152c
db dummy7_1b44c[32]; // 19f0:154c
db dummy7_1b46c[32]; // 19f0:156c
db dummy7_1b48c[32]; // 19f0:158c
db dummy7_1b4ac;
dw word_29a8d; // 19f0:15ad
dw word_29a8f; // 19f0:15af
dw word_29a91; // 19f0:15b1
db dummy7_1b4b3[32]; // 19f0:15b3
db dummy7_1b4d3[32]; // 19f0:15d3
db dummy7_1b4f3[32]; // 19f0:15f3
db dummy7_1b513[32]; // 19f0:1613
db dummy7_1b533[32]; // 19f0:1633
db dummy7_1b553[32]; // 19f0:1653
db dummy7_1b573[32]; // 19f0:1673
db dummy7_1b593[32]; // 19f0:1693
db dummy7_1b5b3[32]; // 19f0:16b3
db dummy7_1b5d3;
db dummy7_1b5d4;
db dummy7_1b5d5;
db dummy7_1b5d6;
db dummy7_1b5d7;
db dummy7_1b5d8;
db dummy7_1b5d9;
db dummy7_1b5da;
db dummy7_1b5db;
db dummy7_1b5dc;
db dummy7_1b5dd;
db dummy7_1b5de;
db dummy7_1b5df;
db dummy7_1b5e0;
db dummy7_1b5e1;
db dummy7_1b5e2;
db dummy7_1b5e3;
db dummy7_1b5e4;
db dummy7_1b5e5;
db dummy7_1b5e6;
db dummy7_1b5e7;
db dummy7_1b5e8;
db dummy7_1b5e9;
db dummy7_1b5ea;
db dummy7_1b5eb;
db dummy7_1b5ec;
dw word_29bcd; // 19f0:16ed
dw word_29bcf; // 19f0:16ef
dw word_29bd1; // 19f0:16f1
db dummy7_1b5f3[32]; // 19f0:16f3
db dummy7_1b613[32]; // 19f0:1713
db dummy7_1b633[32]; // 19f0:1733
db dummy7_1b653[32]; // 19f0:1753
db dummy7_1b673[32]; // 19f0:1773
db dummy7_1b693[32]; // 19f0:1793
db dummy7_1b6b3[32]; // 19f0:17b3
db dummy7_1b6d3[32]; // 19f0:17d3
db dummy7_1b6f3[32]; // 19f0:17f3
db dummy7_1b713[32]; // 19f0:1813
db dummy7_1b733[32]; // 19f0:1833
db dummy7_1b753[32]; // 19f0:1853
db dummy7_1b773[32]; // 19f0:1873
db dummy7_1b793[32]; // 19f0:1893
db dummy7_1b7b3[32]; // 19f0:18b3
db dummy7_1b7d3[32]; // 19f0:18d3
db dummy7_1b7f3[32]; // 19f0:18f3
db dummy7_1b813[32]; // 19f0:1913
db dummy7_1b833[32]; // 19f0:1933
db dummy7_1b853[32]; // 19f0:1953
db dummy7_1b873[32]; // 19f0:1973
db dummy7_1b893[32]; // 19f0:1993
db dummy7_1b8b3[32]; // 19f0:19b3
db dummy7_1b8d3[32]; // 19f0:19d3
db dummy7_1b8f3[32]; // 19f0:19f3
db dummy7_1b913[32]; // 19f0:1a13
db dummy7_1b933[32]; // 19f0:1a33
db dummy7_1b953[32]; // 19f0:1a53
db dummy7_1b973[32]; // 19f0:1a73
db dummy7_1b993[32]; // 19f0:1a93
db dummy7_1b9b3[32]; // 19f0:1ab3
db dummy7_1b9d3[32]; // 19f0:1ad3
db dummy7_1b9f3[32]; // 19f0:1af3
db dummy7_1ba13[32]; // 19f0:1b13
db dummy7_1ba33[32]; // 19f0:1b33
db dummy7_1ba53[32]; // 19f0:1b53
db dummy7_1ba73[32]; // 19f0:1b73
db dummy7_1ba93[32]; // 19f0:1b93
db dummy7_1bab3[32]; // 19f0:1bb3
db dummy7_1bad3[32]; // 19f0:1bd3
db dummy7_1baf3[32]; // 19f0:1bf3
db dummy7_1bb13[32]; // 19f0:1c13
db dummy7_1bb33[32]; // 19f0:1c33
db dummy7_1bb53[32]; // 19f0:1c53
db dummy7_1bb73[32]; // 19f0:1c73
db dummy7_1bb93[32]; // 19f0:1c93
db dummy7_1bbb3[32]; // 19f0:1cb3
db dummy7_1bbd3[32]; // 19f0:1cd3
db dummy7_1bbf3[32]; // 19f0:1cf3
db dummy7_1bc13[32]; // 19f0:1d13
db dummy7_1bc33[32]; // 19f0:1d33
db dummy7_1bc53[32]; // 19f0:1d53
db dummy7_1bc73[32]; // 19f0:1d73
db dummy7_1bc93[32]; // 19f0:1d93
db dummy7_1bcb3[32]; // 19f0:1db3
db dummy7_1bcd3[32]; // 19f0:1dd3
db dummy7_1bcf3[32]; // 19f0:1df3
db dummy7_1bd13[32]; // 19f0:1e13
db dummy7_1bd33[32]; // 19f0:1e33
db dummy7_1bd53[32]; // 19f0:1e53
db dummy7_1bd73[32]; // 19f0:1e73
db dummy7_1bd93[32]; // 19f0:1e93
db dummy7_1bdb3[32]; // 19f0:1eb3
db dummy7_1bdd3[32]; // 19f0:1ed3
db dummy7_1bdf3[32]; // 19f0:1ef3
db dummy7_1be13[32]; // 19f0:1f13
db dummy7_1be33[32]; // 19f0:1f33
db dummy7_1be53[32]; // 19f0:1f53
db dummy7_1be73[32]; // 19f0:1f73
db dummy7_1be93[32]; // 19f0:1f93
db dummy7_1beb3[32]; // 19f0:1fb3
db dummy7_1bed3[32]; // 19f0:1fd3
db dummy7_1bef3[32]; // 19f0:1ff3
db dummy7_1bf13[32]; // 19f0:2013
db dummy7_1bf33[32]; // 19f0:2033
db dummy7_1bf53[32]; // 19f0:2053
db dummy7_1bf73[32]; // 19f0:2073
db dummy7_1bf93[32]; // 19f0:2093
db dummy7_1bfb3[32]; // 19f0:20b3
db dummy7_1bfd3[32]; // 19f0:20d3
db dummy7_1bff3[32]; // 19f0:20f3
db dummy7_1c013[32]; // 19f0:2113
db dummy7_1c033[32]; // 19f0:2133
db dummy7_1c053[32]; // 19f0:2153
db dummy7_1c073;
db dummy7_1c074;
db dummy7_1c075;
db dummy7_1c076;
db dummy7_1c077;
db dummy7_1c078;
db dummy7_1c079;
db dummy7_1c07a;
db dummy7_1c07b;
db dummy7_1c07c;
db dummy7_1c07d;
db dummy7_1c07e;
db dummy7_1c07f;
db dummy7_1c080;
db dummy7_1c081;
db dummy7_1c082;
db dummy7_1c083;
db dummy7_1c084;
db dummy7_1c085;
db dummy7_1c086;
db dummy7_1c087;
db dummy7_1c088;
db dummy7_1c089;
db dummy7_1c08a;
db dummy7_1c08b;
db dummy7_1c08c;
db dummy7_1c08d;
db dummy7_1c08e;
dw word_2a66f; // 19f0:218f
dw word_2a671; // 19f0:2191
db dummy7_1c093[32]; // 19f0:2193
db dummy7_1c0b3[32]; // 19f0:21b3
db dummy7_1c0d3[32]; // 19f0:21d3
db dummy7_1c0f3[32]; // 19f0:21f3
db dummy7_1c113[32]; // 19f0:2213
db dummy7_1c133[32]; // 19f0:2233
db dummy7_1c153[32]; // 19f0:2253
db dummy7_1c173[32]; // 19f0:2273
db dummy7_1c193[32]; // 19f0:2293
db dummy7_1c1b3[32]; // 19f0:22b3
db dummy7_1c1d3[32]; // 19f0:22d3
db dummy7_1c1f3[32]; // 19f0:22f3
db dummy7_1c213[32]; // 19f0:2313
db dummy7_1c233[32]; // 19f0:2333
db dummy7_1c253[32]; // 19f0:2353
db dummy7_1c273[32]; // 19f0:2373
db dummy7_1c293[32]; // 19f0:2393
db dummy7_1c2b3[32]; // 19f0:23b3
db dummy7_1c2d3[32]; // 19f0:23d3
db dummy7_1c2f3[32]; // 19f0:23f3
db dummy7_1c313[32]; // 19f0:2413
db dummy7_1c333[32]; // 19f0:2433
db dummy7_1c353[32]; // 19f0:2453
db dummy7_1c373[32]; // 19f0:2473
db dummy7_1c393[32]; // 19f0:2493
db dummy7_1c3b3[32]; // 19f0:24b3
db dummy7_1c3d3[32]; // 19f0:24d3
db dummy7_1c3f3[32]; // 19f0:24f3
db dummy7_1c413[32]; // 19f0:2513
db dummy7_1c433[32]; // 19f0:2533
db dummy7_1c453[32]; // 19f0:2553
db dummy7_1c473;
db dummy7_1c474;
db dummy7_1c475;
db dummy7_1c476;
db dummy7_1c477;
db dummy7_1c478;
db dummy7_1c479;
db dummy7_1c47a;
dw word_2aa5b; // 19f0:257b
dw word_2aa5d; // 19f0:257d
dw word_2aa5f; // 19f0:257f
dw word_2aa61; // 19f0:2581
db byte_2aa63; // 19f0:2583
db dummy7_1c484[32]; // 19f0:2584
dw word_2aa84; // 19f0:25a4
dw word_2aa86; // 19f0:25a6
dw word_2aa88; // 19f0:25a8
db byte_2aa8a; // 19f0:25aa
dw word_2aa8b; // 19f0:25ab
dw word_2aa8d; // 19f0:25ad
db dummy7_1c4af;
db dummy7_1c4b0;
db dummy7_1c4b1;
db dummy7_1c4b2;
db dummy7_1c4b3;
db dummy7_1c4b4;
db dummy7_1c4b5;
db dummy7_1c4b6;
db dummy7_1c4b7;
db dummy7_1c4b8;
db dummy7_1c4b9;
db byte_2aa9a; // 19f0:25ba
dw word_2aa9b; // 19f0:25bb
dw word_2aa9d; // 19f0:25bd
dw word_2aa9f; // 19f0:25bf
dw word_2aaa1; // 19f0:25c1
dw word_2aaa3; // 19f0:25c3
db dummy7_1c4c5;
db dummy7_1c4c6;
db dummy7_1c4c7;
db dummy7_1c4c8;
dw word_2aaa9; // 19f0:25c9
dw word_2aaab; // 19f0:25cb
db dummy7_1c4cd;
db dummy7_1c4ce;
db byte_2aaaf; // 19f0:25cf
db dummy7_1c4d0;
db dummy7_1c4d1;
db dummy7_1c4d2;
db dummy7_1c4d3;
db dummy7_1c4d4;
db dummy7_1c4d5;
db dummy7_1c4d6;
db dummy7_1c4d7;
db dummy7_1c4d8;
db dummy7_1c4d9;
db dummy7_1c4da;
db dummy7_1c4db;
dw word_2aabc; // 19f0:25dc
dw word_2aabe; // 19f0:25de
db dummy7_1c4e0;
dw word_2aac1; // 19f0:25e1
dw word_2aac3; // 19f0:25e3
dw word_2aac5; // 19f0:25e5
db dummy7_1c4e7[32]; // 19f0:25e7
db dummy7_1c507[32]; // 19f0:2607
db dummy7_1c527[32]; // 19f0:2627
db dummy7_1c547[32]; // 19f0:2647
db dummy7_1c567[32]; // 19f0:2667
db dummy7_1c587[32]; // 19f0:2687
db dummy7_1c5a7[32]; // 19f0:26a7
db dummy7_1c5c7[32]; // 19f0:26c7
db dummy7_1c5e7[32]; // 19f0:26e7
db dummy7_1c607[32]; // 19f0:2707
db dummy7_1c627[32]; // 19f0:2727
db dummy7_1c647[32]; // 19f0:2747
db dummy7_1c667[32]; // 19f0:2767
db dummy7_1c687[32]; // 19f0:2787
db dummy7_1c6a7[32]; // 19f0:27a7
db dummy7_1c6c7[32]; // 19f0:27c7
db dummy7_1c6e7[32]; // 19f0:27e7
db dummy7_1c707[32]; // 19f0:2807
db dummy7_1c727[32]; // 19f0:2827
db dummy7_1c747[32]; // 19f0:2847
db dummy7_1c767[32]; // 19f0:2867
db dummy7_1c787[32]; // 19f0:2887
db dummy7_1c7a7[32]; // 19f0:28a7
db dummy7_1c7c7[32]; // 19f0:28c7
db dummy7_1c7e7[32]; // 19f0:28e7
db dummy7_1c807[32]; // 19f0:2907
db dummy7_1c827[32]; // 19f0:2927
db dummy7_1c847[32]; // 19f0:2947
db dummy7_1c867[32]; // 19f0:2967
db dummy7_1c887[32]; // 19f0:2987
db dummy7_1c8a7[32]; // 19f0:29a7
db dummy7_1c8c7[32]; // 19f0:29c7
db dummy7_1c8e7[32]; // 19f0:29e7
db dummy7_1c907[32]; // 19f0:2a07
db dummy7_1c927[32]; // 19f0:2a27
db dummy7_1c947[32]; // 19f0:2a47
db dummy7_1c967[32]; // 19f0:2a67
db dummy7_1c987[32]; // 19f0:2a87
db dummy7_1c9a7[32]; // 19f0:2aa7
db dummy7_1c9c7[32]; // 19f0:2ac7
db dummy7_1c9e7[32]; // 19f0:2ae7
db dummy7_1ca07[32]; // 19f0:2b07
db dummy7_1ca27[32]; // 19f0:2b27
db dummy7_1ca47;
db dummy7_1ca48;
db dummy7_1ca49;
db dummy7_1ca4a;
db dummy7_1ca4b;
db dummy7_1ca4c;
db dummy7_1ca4d;
db dummy7_1ca4e;
db dummy7_1ca4f;
db dummy7_1ca50;
db dummy7_1ca51;
db dummy7_1ca52;
db dummy7_1ca53;
db dummy7_1ca54;
db dummy7_1ca55;
db dummy7_1ca56;
db dummy7_1ca57;
db dummy7_1ca58;
db dummy7_1ca59;
db dummy7_1ca5a;
db dummy7_1ca5b;
db dummy7_1ca5c;
db dummy7_1ca5d;
db dummy7_1ca5e;
db dummy7_1ca5f;
db dummy7_1ca60;
db dummy7_1ca61;
db dummy7_1ca62;
db dummy7_1ca63;
dw word_2b044; // 19f0:2b64
db dummy7_1ca66[32]; // 19f0:2b66
db dummy7_1ca86[32]; // 19f0:2b86
db dummy7_1caa6; // 19f0:2ba6
db dummy7_1caa7; // 19f0:2ba7
db dummy7_1caa8; // 19f0:2ba8
db dummy7_1caa9; // 19f0:2ba9
db dummy7_1caaa; // 19f0:2baa
db dummy7_1caab; // 19f0:2bab
db dummy7_1caac; // 19f0:2bac
db dummy7_1caad; // 19f0:2bad
db dummy7_1caae; // 19f0:2bae
db dummy7_1caaf; // 19f0:2baf
db dummy7_1cab0; // 19f0:2bb0
db dummy7_1cab1; // 19f0:2bb1
dw word_2b092; // 19f0:2bb2
db dummy7_1cab4[32]; // 19f0:2bb4
db dummy7_1cad4[32]; // 19f0:2bd4
db dummy7_1caf4[32]; // 19f0:2bf4
db dummy7_1cb14[32]; // 19f0:2c14
db dummy7_1cb34[32]; // 19f0:2c34
db dummy7_1cb54[32]; // 19f0:2c54
db dummy7_1cb74[32]; // 19f0:2c74
db dummy7_1cb94[32]; // 19f0:2c94
db dummy7_1cbb4[32]; // 19f0:2cb4
db dummy7_1cbd4[32]; // 19f0:2cd4
db dummy7_1cbf4[32]; // 19f0:2cf4
db dummy7_1cc14[32]; // 19f0:2d14
db dummy7_1cc34[32]; // 19f0:2d34
db dummy7_1cc54[32]; // 19f0:2d54
db dummy7_1cc74[32]; // 19f0:2d74
db dummy7_1cc94[32]; // 19f0:2d94
db dummy7_1ccb4[32]; // 19f0:2db4
db dummy7_1ccd4[32]; // 19f0:2dd4
db dummy7_1ccf4[32]; // 19f0:2df4
db dummy7_1cd14[32]; // 19f0:2e14
db dummy7_1cd34[32]; // 19f0:2e34
db dummy7_1cd54; // 19f0:2e54
db dummy7_1cd55; // 19f0:2e55
db byte_2b336; // 19f0:2e56
db byte_2b337; // 19f0:2e57
db byte_2b338; // 19f0:2e58
db byte_2b339; // 19f0:2e59
db dummy7_1cd5a; // 19f0:2e5a
db dummy7_1cd5b; // 19f0:2e5b
db dummy7_1cd5c; // 19f0:2e5c
dw word_2b33d; // 19f0:2e5d
dw word_2b33f; // 19f0:2e5f
dw word_2b341; // 19f0:2e61
dw word_2b343; // 19f0:2e63
dw word_2b345; // 19f0:2e65
dw word_2b347; // 19f0:2e67
db dummy7_1cd69;
db dummy7_1cd6a;
db dummy7_1cd6b;
db dummy7_1cd6c;
db dummy7_1cd6d;
db dummy7_1cd6e;
db dummy7_1cd6f;
db dummy7_1cd70;
dw word_2b351; // 19f0:2e71
dw word_2b353; // 19f0:2e73
dw word_2b355; // 19f0:2e75
dw word_2b357; // 19f0:2e77
dd dword_2b359; // 19f0:2e79
db dummy7_1cd7d[32]; // 19f0:2e7d
db dummy7_1cd9d[32]; // 19f0:2e9d
db dummy7_1cdbd[32]; // 19f0:2ebd
db dummy7_1cddd[32]; // 19f0:2edd
db dummy7_1cdfd[32]; // 19f0:2efd
db dummy7_1ce1d[32]; // 19f0:2f1d
db dummy7_1ce3d[32]; // 19f0:2f3d
db dummy7_1ce5d[32]; // 19f0:2f5d
db dummy7_1ce7d[32]; // 19f0:2f7d
db dummy7_1ce9d[32]; // 19f0:2f9d
db dummy7_1cebd[32]; // 19f0:2fbd
db dummy7_1cedd[32]; // 19f0:2fdd
db dummy7_1cefd[32]; // 19f0:2ffd
db dummy7_1cf1d[32]; // 19f0:301d
db dummy7_1cf3d[32]; // 19f0:303d
db dummy7_1cf5d[32]; // 19f0:305d
db dummy7_1cf7d[32]; // 19f0:307d
db dummy7_1cf9d[32]; // 19f0:309d
db dummy7_1cfbd[32]; // 19f0:30bd
db dummy7_1cfdd[32]; // 19f0:30dd
db dummy7_1cffd[32]; // 19f0:30fd
db dummy7_1d01d[32]; // 19f0:311d
db dummy7_1d03d[32]; // 19f0:313d
db dummy7_1d05d[32]; // 19f0:315d
db dummy7_1d07d[32]; // 19f0:317d
db dummy7_1d09d[32]; // 19f0:319d
db dummy7_1d0bd[32]; // 19f0:31bd
db dummy7_1d0dd[32]; // 19f0:31dd
db dummy7_1d0fd[32]; // 19f0:31fd
db dummy7_1d11d[32]; // 19f0:321d
db dummy7_1d13d[32]; // 19f0:323d
db dummy7_1d15d[32]; // 19f0:325d
db dummy7_1d17d[32]; // 19f0:327d
db dummy7_1d19d[32]; // 19f0:329d
db dummy7_1d1bd[32]; // 19f0:32bd
db dummy7_1d1dd[32]; // 19f0:32dd
db dummy7_1d1fd[32]; // 19f0:32fd
db dummy7_1d21d[32]; // 19f0:331d
db dummy7_1d23d[32]; // 19f0:333d
db dummy7_1d25d[32]; // 19f0:335d
db dummy7_1d27d[32]; // 19f0:337d
db dummy7_1d29d[32]; // 19f0:339d
db dummy7_1d2bd[32]; // 19f0:33bd
db dummy7_1d2dd[32]; // 19f0:33dd
db dummy7_1d2fd[32]; // 19f0:33fd
db dummy7_1d31d[32]; // 19f0:341d
db dummy7_1d33d[32]; // 19f0:343d
db dummy7_1d35d[32]; // 19f0:345d
db dummy7_1d37d[32]; // 19f0:347d
db dummy7_1d39d[32]; // 19f0:349d
db dummy7_1d3bd[32]; // 19f0:34bd
db dummy7_1d3dd[32]; // 19f0:34dd
db dummy7_1d3fd[32]; // 19f0:34fd
db dummy7_1d41d[32]; // 19f0:351d
db dummy7_1d43d[32]; // 19f0:353d
db dummy7_1d45d[32]; // 19f0:355d
db dummy7_1d47d[32]; // 19f0:357d
db dummy7_1d49d[32]; // 19f0:359d
db dummy7_1d4bd[32]; // 19f0:35bd
db dummy7_1d4dd[32]; // 19f0:35dd
db dummy7_1d4fd[32]; // 19f0:35fd
db dummy7_1d51d[32]; // 19f0:361d
db dummy7_1d53d[32]; // 19f0:363d
db dummy7_1d55d[32]; // 19f0:365d
db dummy7_1d57d[32]; // 19f0:367d
db dummy7_1d59d[32]; // 19f0:369d
db dummy7_1d5bd[32]; // 19f0:36bd
db dummy7_1d5dd[32]; // 19f0:36dd
db dummy7_1d5fd[32]; // 19f0:36fd
db dummy7_1d61d[32]; // 19f0:371d
db dummy7_1d63d[32]; // 19f0:373d
db dummy7_1d65d[32]; // 19f0:375d
db dummy7_1d67d[32]; // 19f0:377d
db dummy7_1d69d[32]; // 19f0:379d
db dummy7_1d6bd[32]; // 19f0:37bd
db dummy7_1d6dd[32]; // 19f0:37dd
db dummy7_1d6fd[32]; // 19f0:37fd
db dummy7_1d71d[32]; // 19f0:381d
db dummy7_1d73d[32]; // 19f0:383d
db dummy7_1d75d[32]; // 19f0:385d
db dummy7_1d77d[32]; // 19f0:387d
db dummy7_1d79d[32]; // 19f0:389d
db dummy7_1d7bd[32]; // 19f0:38bd
db dummy7_1d7dd[32]; // 19f0:38dd
db dummy7_1d7fd[32]; // 19f0:38fd
db dummy7_1d81d[32]; // 19f0:391d
db dummy7_1d83d[32]; // 19f0:393d
db dummy7_1d85d[32]; // 19f0:395d
db dummy7_1d87d[32]; // 19f0:397d
db dummy7_1d89d[32]; // 19f0:399d
db dummy7_1d8bd[32]; // 19f0:39bd
db dummy7_1d8dd[32]; // 19f0:39dd
db dummy7_1d8fd[32]; // 19f0:39fd
db dummy7_1d91d[32]; // 19f0:3a1d
db dummy7_1d93d[32]; // 19f0:3a3d
db dummy7_1d95d[32]; // 19f0:3a5d
db dummy7_1d97d[32]; // 19f0:3a7d
db dummy7_1d99d[32]; // 19f0:3a9d
db dummy7_1d9bd[32]; // 19f0:3abd
db dummy7_1d9dd[32]; // 19f0:3add
db dummy7_1d9fd[32]; // 19f0:3afd
db dummy7_1da1d[32]; // 19f0:3b1d
db dummy7_1da3d[32]; // 19f0:3b3d
db dummy7_1da5d[32]; // 19f0:3b5d
db dummy7_1da7d[32]; // 19f0:3b7d
db dummy7_1da9d[32]; // 19f0:3b9d
db dummy7_1dabd[32]; // 19f0:3bbd
db dummy7_1dadd[32]; // 19f0:3bdd
db dummy7_1dafd[32]; // 19f0:3bfd
db dummy7_1db1d[32]; // 19f0:3c1d
db dummy7_1db3d[32]; // 19f0:3c3d
db dummy7_1db5d[32]; // 19f0:3c5d
db dummy7_1db7d[32]; // 19f0:3c7d
db dummy7_1db9d[32]; // 19f0:3c9d
db dummy7_1dbbd[32]; // 19f0:3cbd
db dummy7_1dbdd[32]; // 19f0:3cdd
db dummy7_1dbfd[32]; // 19f0:3cfd
db dummy7_1dc1d[32]; // 19f0:3d1d
db dummy7_1dc3d[32]; // 19f0:3d3d
db dummy7_1dc5d[32]; // 19f0:3d5d
db dummy7_1dc7d[32]; // 19f0:3d7d
db dummy7_1dc9d[32]; // 19f0:3d9d
db dummy7_1dcbd[32]; // 19f0:3dbd
db dummy7_1dcdd[32]; // 19f0:3ddd
db dummy7_1dcfd[32]; // 19f0:3dfd
db dummy7_1dd1d[32]; // 19f0:3e1d
db dummy7_1dd3d[32]; // 19f0:3e3d
db dummy7_1dd5d[32]; // 19f0:3e5d
db dummy7_1dd7d[32]; // 19f0:3e7d
db dummy7_1dd9d[32]; // 19f0:3e9d
db dummy7_1ddbd[32]; // 19f0:3ebd
db dummy7_1dddd[32]; // 19f0:3edd
db dummy7_1ddfd[32]; // 19f0:3efd
db dummy7_1de1d[32]; // 19f0:3f1d
db dummy7_1de3d[32]; // 19f0:3f3d
db dummy7_1de5d[32]; // 19f0:3f5d
db dummy7_1de7d[32]; // 19f0:3f7d
db dummy7_1de9d[32]; // 19f0:3f9d
db dummy7_1debd[32]; // 19f0:3fbd
db dummy7_1dedd[32]; // 19f0:3fdd
db dummy7_1defd[32]; // 19f0:3ffd
db dummy7_1df1d[32]; // 19f0:401d
db dummy7_1df3d[32]; // 19f0:403d
db dummy7_1df5d[32]; // 19f0:405d
db dummy7_1df7d[32]; // 19f0:407d
db dummy7_1df9d[32]; // 19f0:409d
db dummy7_1dfbd[32]; // 19f0:40bd
db dummy7_1dfdd[32]; // 19f0:40dd
db dummy7_1dffd[32]; // 19f0:40fd
db dummy7_1e01d[32]; // 19f0:411d
db dummy7_1e03d[32]; // 19f0:413d
db dummy7_1e05d[32]; // 19f0:415d
db dummy7_1e07d[32]; // 19f0:417d
db dummy7_1e09d[32]; // 19f0:419d
db dummy7_1e0bd[32]; // 19f0:41bd
db dummy7_1e0dd[32]; // 19f0:41dd
db dummy7_1e0fd[32]; // 19f0:41fd
db dummy7_1e11d[32]; // 19f0:421d
db dummy7_1e13d[32]; // 19f0:423d
db dummy7_1e15d[32]; // 19f0:425d
db dummy7_1e17d[32]; // 19f0:427d
db dummy7_1e19d[32]; // 19f0:429d
db dummy7_1e1bd[32]; // 19f0:42bd
db dummy7_1e1dd[32]; // 19f0:42dd
db dummy7_1e1fd[32]; // 19f0:42fd
db dummy7_1e21d[32]; // 19f0:431d
db dummy7_1e23d[32]; // 19f0:433d
db dummy7_1e25d[32]; // 19f0:435d
db dummy7_1e27d[32]; // 19f0:437d
db dummy7_1e29d[32]; // 19f0:439d
db dummy7_1e2bd[32]; // 19f0:43bd
db dummy7_1e2dd[32]; // 19f0:43dd
db dummy7_1e2fd[32]; // 19f0:43fd
db dummy7_1e31d[32]; // 19f0:441d
db dummy7_1e33d[32]; // 19f0:443d
db dummy7_1e35d[32]; // 19f0:445d
db dummy7_1e37d[32]; // 19f0:447d
db dummy7_1e39d[32]; // 19f0:449d
db dummy7_1e3bd[32]; // 19f0:44bd
db dummy7_1e3dd[32]; // 19f0:44dd
db dummy7_1e3fd[32]; // 19f0:44fd
db dummy7_1e41d[32]; // 19f0:451d
db dummy7_1e43d[32]; // 19f0:453d
db dummy7_1e45d[32]; // 19f0:455d
db dummy7_1e47d[32]; // 19f0:457d
db dummy7_1e49d[32]; // 19f0:459d
db dummy7_1e4bd[32]; // 19f0:45bd
db dummy7_1e4dd[32]; // 19f0:45dd
db dummy7_1e4fd[32]; // 19f0:45fd
db dummy7_1e51d[32]; // 19f0:461d
db dummy7_1e53d[32]; // 19f0:463d
db dummy7_1e55d[32]; // 19f0:465d
db dummy7_1e57d[32]; // 19f0:467d
db dummy7_1e59d[32]; // 19f0:469d
db dummy7_1e5bd[32]; // 19f0:46bd
db dummy7_1e5dd[32]; // 19f0:46dd
db dummy7_1e5fd[32]; // 19f0:46fd
db dummy7_1e61d[32]; // 19f0:471d
db dummy7_1e63d[32]; // 19f0:473d
db dummy7_1e65d[32]; // 19f0:475d
db dummy7_1e67d[32]; // 19f0:477d
db dummy7_1e69d[32]; // 19f0:479d
db dummy7_1e6bd[32]; // 19f0:47bd
db dummy7_1e6dd[32]; // 19f0:47dd
db dummy7_1e6fd[32]; // 19f0:47fd
db dummy7_1e71d[32]; // 19f0:481d
db dummy7_1e73d[32]; // 19f0:483d
db dummy7_1e75d[32]; // 19f0:485d
db dummy7_1e77d[32]; // 19f0:487d
db dummy7_1e79d[32]; // 19f0:489d
db dummy7_1e7bd[32]; // 19f0:48bd
db dummy7_1e7dd[32]; // 19f0:48dd
db dummy7_1e7fd[32]; // 19f0:48fd
db dummy7_1e81d[32]; // 19f0:491d
db dummy7_1e83d[32]; // 19f0:493d
db dummy7_1e85d[32]; // 19f0:495d
db dummy7_1e87d[32]; // 19f0:497d
db dummy7_1e89d[32]; // 19f0:499d
db dummy7_1e8bd[32]; // 19f0:49bd
db dummy7_1e8dd[32]; // 19f0:49dd
db dummy7_1e8fd[32]; // 19f0:49fd
db dummy7_1e91d[32]; // 19f0:4a1d
db dummy7_1e93d[32]; // 19f0:4a3d
db dummy7_1e95d[32]; // 19f0:4a5d
db dummy7_1e97d[32]; // 19f0:4a7d
db dummy7_1e99d[32]; // 19f0:4a9d
db dummy7_1e9bd[32]; // 19f0:4abd
db dummy7_1e9dd[32]; // 19f0:4add
db dummy7_1e9fd[32]; // 19f0:4afd
db dummy7_1ea1d[32]; // 19f0:4b1d
db dummy7_1ea3d[32]; // 19f0:4b3d
db dummy7_1ea5d[32]; // 19f0:4b5d
db dummy7_1ea7d[32]; // 19f0:4b7d
db dummy7_1ea9d[32]; // 19f0:4b9d
db dummy7_1eabd[32]; // 19f0:4bbd
db dummy7_1eadd[32]; // 19f0:4bdd
db dummy7_1eafd[32]; // 19f0:4bfd
db dummy7_1eb1d[32]; // 19f0:4c1d
db dummy7_1eb3d[32]; // 19f0:4c3d
db dummy7_1eb5d[32]; // 19f0:4c5d
db dummy7_1eb7d[32]; // 19f0:4c7d
db dummy7_1eb9d[32]; // 19f0:4c9d
db dummy7_1ebbd[32]; // 19f0:4cbd
db dummy7_1ebdd[32]; // 19f0:4cdd
db dummy7_1ebfd[32]; // 19f0:4cfd
db dummy7_1ec1d[32]; // 19f0:4d1d
db dummy7_1ec3d[32]; // 19f0:4d3d
db dummy7_1ec5d[32]; // 19f0:4d5d
db dummy7_1ec7d[32]; // 19f0:4d7d
db dummy7_1ec9d[32]; // 19f0:4d9d
db dummy7_1ecbd[32]; // 19f0:4dbd
db dummy7_1ecdd[32]; // 19f0:4ddd
db dummy7_1ecfd[32]; // 19f0:4dfd
db dummy7_1ed1d[32]; // 19f0:4e1d
db dummy7_1ed3d[32]; // 19f0:4e3d
db dummy7_1ed5d[32]; // 19f0:4e5d
db dummy7_1ed7d[32]; // 19f0:4e7d
db dummy7_1ed9d[32]; // 19f0:4e9d
db dummy7_1edbd[32]; // 19f0:4ebd
db dummy7_1eddd[32]; // 19f0:4edd
db dummy7_1edfd[32]; // 19f0:4efd
db dummy7_1ee1d[32]; // 19f0:4f1d
db dummy7_1ee3d[32]; // 19f0:4f3d
db dummy7_1ee5d[32]; // 19f0:4f5d
db dummy7_1ee7d[32]; // 19f0:4f7d
db dummy7_1ee9d[32]; // 19f0:4f9d
db dummy7_1eebd[32]; // 19f0:4fbd
db dummy7_1eedd[32]; // 19f0:4fdd
db dummy7_1eefd[32]; // 19f0:4ffd
db dummy7_1ef1d[32]; // 19f0:501d
db dummy7_1ef3d[32]; // 19f0:503d
db dummy7_1ef5d[32]; // 19f0:505d
db dummy7_1ef7d[32]; // 19f0:507d
db dummy7_1ef9d[32]; // 19f0:509d
db dummy7_1efbd[32]; // 19f0:50bd
db dummy7_1efdd[32]; // 19f0:50dd
db dummy7_1effd[32]; // 19f0:50fd
db dummy7_1f01d[32]; // 19f0:511d
db dummy7_1f03d[32]; // 19f0:513d
db dummy7_1f05d[32]; // 19f0:515d
db dummy7_1f07d[32]; // 19f0:517d
db dummy7_1f09d[32]; // 19f0:519d
db dummy7_1f0bd[32]; // 19f0:51bd
db dummy7_1f0dd[32]; // 19f0:51dd
db dummy7_1f0fd[32]; // 19f0:51fd
db dummy7_1f11d[32]; // 19f0:521d
db dummy7_1f13d[32]; // 19f0:523d
db dummy7_1f15d[32]; // 19f0:525d
db dummy7_1f17d[32]; // 19f0:527d
db dummy7_1f19d[32]; // 19f0:529d
db dummy7_1f1bd[32]; // 19f0:52bd
db dummy7_1f1dd[32]; // 19f0:52dd
db dummy7_1f1fd[32]; // 19f0:52fd
db dummy7_1f21d[32]; // 19f0:531d
db dummy7_1f23d[32]; // 19f0:533d
db dummy7_1f25d[32]; // 19f0:535d
db dummy7_1f27d[32]; // 19f0:537d
db dummy7_1f29d[32]; // 19f0:539d
db dummy7_1f2bd[32]; // 19f0:53bd
db dummy7_1f2dd[32]; // 19f0:53dd
db dummy7_1f2fd[32]; // 19f0:53fd
db dummy7_1f31d[32]; // 19f0:541d
db dummy7_1f33d[32]; // 19f0:543d
db dummy7_1f35d[32]; // 19f0:545d
db dummy7_1f37d[32]; // 19f0:547d
db dummy7_1f39d[32]; // 19f0:549d
db dummy7_1f3bd[32]; // 19f0:54bd
db dummy7_1f3dd[32]; // 19f0:54dd
db dummy7_1f3fd[32]; // 19f0:54fd
db dummy7_1f41d[32]; // 19f0:551d
db dummy7_1f43d[32]; // 19f0:553d
db dummy7_1f45d[32]; // 19f0:555d
db dummy7_1f47d[32]; // 19f0:557d
db dummy7_1f49d[32]; // 19f0:559d
db dummy7_1f4bd[32]; // 19f0:55bd
db dummy7_1f4dd[32]; // 19f0:55dd
db dummy7_1f4fd[32]; // 19f0:55fd
db dummy7_1f51d[32]; // 19f0:561d
db dummy7_1f53d[32]; // 19f0:563d
db dummy7_1f55d[32]; // 19f0:565d
db dummy7_1f57d[32]; // 19f0:567d
db dummy7_1f59d[32]; // 19f0:569d
db dummy7_1f5bd[32]; // 19f0:56bd
db dummy7_1f5dd[32]; // 19f0:56dd
db dummy7_1f5fd[32]; // 19f0:56fd
db dummy7_1f61d[32]; // 19f0:571d
db dummy7_1f63d[32]; // 19f0:573d
db dummy7_1f65d[32]; // 19f0:575d
db dummy7_1f67d[32]; // 19f0:577d
db dummy7_1f69d[32]; // 19f0:579d
db dummy7_1f6bd[32]; // 19f0:57bd
db dummy7_1f6dd[32]; // 19f0:57dd
db dummy7_1f6fd[32]; // 19f0:57fd
db dummy7_1f71d[32]; // 19f0:581d
db dummy7_1f73d[32]; // 19f0:583d
db dummy7_1f75d[32]; // 19f0:585d
db dummy7_1f77d[32]; // 19f0:587d
db dummy7_1f79d[32]; // 19f0:589d
db dummy7_1f7bd[32]; // 19f0:58bd
db dummy7_1f7dd[32]; // 19f0:58dd
db dummy7_1f7fd[32]; // 19f0:58fd
db dummy7_1f81d[32]; // 19f0:591d
db dummy7_1f83d[32]; // 19f0:593d
db dummy7_1f85d[32]; // 19f0:595d
db dummy7_1f87d[32]; // 19f0:597d
db dummy7_1f89d[32]; // 19f0:599d
db dummy7_1f8bd[32]; // 19f0:59bd
db dummy7_1f8dd[32]; // 19f0:59dd
db dummy7_1f8fd[32]; // 19f0:59fd
db dummy7_1f91d[32]; // 19f0:5a1d
db dummy7_1f93d[32]; // 19f0:5a3d
db dummy7_1f95d[32]; // 19f0:5a5d
db dummy7_1f97d[32]; // 19f0:5a7d
db dummy7_1f99d[32]; // 19f0:5a9d
db dummy7_1f9bd[32]; // 19f0:5abd
db dummy7_1f9dd[32]; // 19f0:5add
db dummy7_1f9fd[32]; // 19f0:5afd
db dummy7_1fa1d[32]; // 19f0:5b1d
db dummy7_1fa3d[32]; // 19f0:5b3d
db dummy7_1fa5d[32]; // 19f0:5b5d
db dummy7_1fa7d[32]; // 19f0:5b7d
db dummy7_1fa9d[32]; // 19f0:5b9d
db dummy7_1fabd[32]; // 19f0:5bbd
db dummy7_1fadd[32]; // 19f0:5bdd
db dummy7_1fafd[32]; // 19f0:5bfd
db dummy7_1fb1d[32]; // 19f0:5c1d
db dummy7_1fb3d[32]; // 19f0:5c3d
db dummy7_1fb5d[32]; // 19f0:5c5d
db dummy7_1fb7d[32]; // 19f0:5c7d
db dummy7_1fb9d[32]; // 19f0:5c9d
db dummy7_1fbbd[32]; // 19f0:5cbd
db dummy7_1fbdd[32]; // 19f0:5cdd
db dummy7_1fbfd[32]; // 19f0:5cfd
db dummy7_1fc1d[32]; // 19f0:5d1d
db dummy7_1fc3d[32]; // 19f0:5d3d
db dummy7_1fc5d[32]; // 19f0:5d5d
db dummy7_1fc7d[32]; // 19f0:5d7d
db dummy7_1fc9d[32]; // 19f0:5d9d
db dummy7_1fcbd[32]; // 19f0:5dbd
db dummy7_1fcdd[32]; // 19f0:5ddd
db dummy7_1fcfd[32]; // 19f0:5dfd
db dummy7_1fd1d[32]; // 19f0:5e1d
db dummy7_1fd3d[32]; // 19f0:5e3d
db dummy7_1fd5d[32]; // 19f0:5e5d
db dummy7_1fd7d[32]; // 19f0:5e7d
db dummy7_1fd9d[32]; // 19f0:5e9d
db dummy7_1fdbd[32]; // 19f0:5ebd
db dummy7_1fddd[32]; // 19f0:5edd
db dummy7_1fdfd[32]; // 19f0:5efd
db dummy7_1fe1d[32]; // 19f0:5f1d
db dummy7_1fe3d[32]; // 19f0:5f3d
db dummy7_1fe5d[32]; // 19f0:5f5d
db dummy7_1fe7d[32]; // 19f0:5f7d
db dummy7_1fe9d[32]; // 19f0:5f9d
db dummy7_1febd[32]; // 19f0:5fbd
db dummy7_1fedd[32]; // 19f0:5fdd
db dummy7_1fefd[32]; // 19f0:5ffd
db dummy7_1ff1d[32]; // 19f0:601d
db dummy7_1ff3d[32]; // 19f0:603d
db dummy7_1ff5d[32]; // 19f0:605d
db dummy7_1ff7d[32]; // 19f0:607d
db dummy7_1ff9d[32]; // 19f0:609d
db dummy7_1ffbd[32]; // 19f0:60bd
db dummy7_1ffdd[32]; // 19f0:60dd
db dummy7_1fffd[32]; // 19f0:60fd
db dummy7_2001d[32]; // 19f0:611d
db dummy7_2003d[32]; // 19f0:613d
db dummy7_2005d[32]; // 19f0:615d
db dummy7_2007d[32]; // 19f0:617d
db dummy7_2009d[32]; // 19f0:619d
db dummy7_200bd[32]; // 19f0:61bd
db dummy7_200dd[32]; // 19f0:61dd
db dummy7_200fd[32]; // 19f0:61fd
db dummy7_2011d[32]; // 19f0:621d
db dummy7_2013d[32]; // 19f0:623d
db dummy7_2015d[32]; // 19f0:625d
db dummy7_2017d[32]; // 19f0:627d
db dummy7_2019d[32]; // 19f0:629d
db dummy7_201bd[32]; // 19f0:62bd
db dummy7_201dd[32]; // 19f0:62dd
db dummy7_201fd[32]; // 19f0:62fd
db dummy7_2021d[32]; // 19f0:631d
db dummy7_2023d[32]; // 19f0:633d
db dummy7_2025d[32]; // 19f0:635d
db dummy7_2027d[32]; // 19f0:637d
db dummy7_2029d[32]; // 19f0:639d
db dummy7_202bd[32]; // 19f0:63bd
db dummy7_202dd[32]; // 19f0:63dd
db dummy7_202fd[32]; // 19f0:63fd
db dummy7_2031d[32]; // 19f0:641d
db dummy7_2033d[32]; // 19f0:643d
db dummy7_2035d[32]; // 19f0:645d
db dummy7_2037d[32]; // 19f0:647d
db dummy7_2039d[32]; // 19f0:649d
db dummy7_203bd[32]; // 19f0:64bd
db dummy7_203dd[32]; // 19f0:64dd
db dummy7_203fd[32]; // 19f0:64fd
db dummy7_2041d[32]; // 19f0:651d
db dummy7_2043d[32]; // 19f0:653d
db dummy7_2045d[32]; // 19f0:655d
db dummy7_2047d[32]; // 19f0:657d
db dummy7_2049d[32]; // 19f0:659d
db dummy7_204bd[32]; // 19f0:65bd
db dummy7_204dd[32]; // 19f0:65dd
db dummy7_204fd[32]; // 19f0:65fd
db dummy7_2051d[32]; // 19f0:661d
db dummy7_2053d[32]; // 19f0:663d
db dummy7_2055d[32]; // 19f0:665d
db dummy7_2057d[32]; // 19f0:667d
db dummy7_2059d[32]; // 19f0:669d
db dummy7_205bd[32]; // 19f0:66bd
db dummy7_205dd[32]; // 19f0:66dd
db dummy7_205fd[32]; // 19f0:66fd
db dummy7_2061d[32]; // 19f0:671d
db dummy7_2063d[32]; // 19f0:673d
db dummy7_2065d[32]; // 19f0:675d
db dummy7_2067d[32]; // 19f0:677d
db dummy7_2069d[32]; // 19f0:679d
db dummy7_206bd[32]; // 19f0:67bd
db dummy7_206dd[32]; // 19f0:67dd
db dummy7_206fd[32]; // 19f0:67fd
db dummy7_2071d[32]; // 19f0:681d
db dummy7_2073d[32]; // 19f0:683d
db dummy7_2075d[32]; // 19f0:685d
db dummy7_2077d[32]; // 19f0:687d
db dummy7_2079d[32]; // 19f0:689d
db dummy7_207bd[32]; // 19f0:68bd
db dummy7_207dd[32]; // 19f0:68dd
db dummy7_207fd[32]; // 19f0:68fd
db dummy7_2081d[32]; // 19f0:691d
db dummy7_2083d[32]; // 19f0:693d
db dummy7_2085d[32]; // 19f0:695d
db dummy7_2087d[32]; // 19f0:697d
db dummy7_2089d[32]; // 19f0:699d
db dummy7_208bd[32]; // 19f0:69bd
db dummy7_208dd[32]; // 19f0:69dd
db dummy7_208fd[32]; // 19f0:69fd
db dummy7_2091d[32]; // 19f0:6a1d
db dummy7_2093d[32]; // 19f0:6a3d
db dummy7_2095d[32]; // 19f0:6a5d
db dummy7_2097d[32]; // 19f0:6a7d
db dummy7_2099d[32]; // 19f0:6a9d
db dummy7_209bd[32]; // 19f0:6abd
db dummy7_209dd[32]; // 19f0:6add
db dummy7_209fd[32]; // 19f0:6afd
db dummy7_20a1d[32]; // 19f0:6b1d
db dummy7_20a3d[32]; // 19f0:6b3d
db dummy7_20a5d[32]; // 19f0:6b5d
db dummy7_20a7d[32]; // 19f0:6b7d
db dummy7_20a9d[32]; // 19f0:6b9d
db dummy7_20abd[32]; // 19f0:6bbd
db dummy7_20add[32]; // 19f0:6bdd
db dummy7_20afd[32]; // 19f0:6bfd
db dummy7_20b1d[32]; // 19f0:6c1d
db dummy7_20b3d[32]; // 19f0:6c3d
db dummy7_20b5d[32]; // 19f0:6c5d
db dummy7_20b7d[32]; // 19f0:6c7d
db dummy7_20b9d[32]; // 19f0:6c9d
db dummy7_20bbd[32]; // 19f0:6cbd
db dummy7_20bdd[32]; // 19f0:6cdd
db dummy7_20bfd[32]; // 19f0:6cfd
db dummy7_20c1d[32]; // 19f0:6d1d
db dummy7_20c3d[32]; // 19f0:6d3d
db dummy7_20c5d[32]; // 19f0:6d5d
db dummy7_20c7d[32]; // 19f0:6d7d
db dummy7_20c9d[32]; // 19f0:6d9d
db dummy7_20cbd[32]; // 19f0:6dbd
db dummy7_20cdd[32]; // 19f0:6ddd
db dummy7_20cfd[32]; // 19f0:6dfd
db dummy7_20d1d[32]; // 19f0:6e1d
db dummy7_20d3d[32]; // 19f0:6e3d
db dummy7_20d5d[32]; // 19f0:6e5d
db dummy7_20d7d[32]; // 19f0:6e7d
db dummy7_20d9d[32]; // 19f0:6e9d
db dummy7_20dbd[32]; // 19f0:6ebd
db dummy7_20ddd[32]; // 19f0:6edd
db dummy7_20dfd[32]; // 19f0:6efd
db dummy7_20e1d[32]; // 19f0:6f1d
db dummy7_20e3d[32]; // 19f0:6f3d
db dummy7_20e5d[32]; // 19f0:6f5d
db dummy7_20e7d[32]; // 19f0:6f7d
db dummy7_20e9d[32]; // 19f0:6f9d
db dummy7_20ebd[32]; // 19f0:6fbd
db dummy7_20edd[32]; // 19f0:6fdd
db dummy7_20efd[32]; // 19f0:6ffd
db dummy7_20f1d[32]; // 19f0:701d
db dummy7_20f3d[32]; // 19f0:703d
db dummy7_20f5d[32]; // 19f0:705d
db dummy7_20f7d[32]; // 19f0:707d
db dummy7_20f9d[32]; // 19f0:709d
db dummy7_20fbd[32]; // 19f0:70bd
db dummy7_20fdd[32]; // 19f0:70dd
db dummy7_20ffd[32]; // 19f0:70fd
db dummy7_2101d[32]; // 19f0:711d
db dummy7_2103d[32]; // 19f0:713d
db dummy7_2105d[32]; // 19f0:715d
db dummy7_2107d[32]; // 19f0:717d
db dummy7_2109d[32]; // 19f0:719d
db dummy7_210bd[32]; // 19f0:71bd
db dummy7_210dd[32]; // 19f0:71dd
db dummy7_210fd[32]; // 19f0:71fd
db dummy7_2111d[32]; // 19f0:721d
db dummy7_2113d[32]; // 19f0:723d
db dummy7_2115d[32]; // 19f0:725d
db dummy7_2117d[32]; // 19f0:727d
db dummy7_2119d[32]; // 19f0:729d
db dummy7_211bd[32]; // 19f0:72bd
db dummy7_211dd[32]; // 19f0:72dd
db dummy7_211fd[32]; // 19f0:72fd
db dummy7_2121d[32]; // 19f0:731d
db dummy7_2123d[32]; // 19f0:733d
db dummy7_2125d[32]; // 19f0:735d
db dummy7_2127d[32]; // 19f0:737d
db dummy7_2129d[32]; // 19f0:739d
db dummy7_212bd[32]; // 19f0:73bd
db dummy7_212dd[32]; // 19f0:73dd
db dummy7_212fd[32]; // 19f0:73fd
db dummy7_2131d[32]; // 19f0:741d
db dummy7_2133d[32]; // 19f0:743d
db dummy7_2135d[32]; // 19f0:745d
db dummy7_2137d[32]; // 19f0:747d
db dummy7_2139d[32]; // 19f0:749d
db dummy7_213bd[32]; // 19f0:74bd
db dummy7_213dd[32]; // 19f0:74dd
db dummy7_213fd[32]; // 19f0:74fd
db dummy7_2141d[32]; // 19f0:751d
db dummy7_2143d[32]; // 19f0:753d
db dummy7_2145d[32]; // 19f0:755d
db dummy7_2147d[32]; // 19f0:757d
db dummy7_2149d[32]; // 19f0:759d
db dummy7_214bd[32]; // 19f0:75bd
db dummy7_214dd[32]; // 19f0:75dd
db dummy7_214fd[32]; // 19f0:75fd
db dummy7_2151d[32]; // 19f0:761d
db dummy7_2153d[32]; // 19f0:763d
db dummy7_2155d[32]; // 19f0:765d
db dummy7_2157d[32]; // 19f0:767d
db dummy7_2159d[32]; // 19f0:769d
db dummy7_215bd[32]; // 19f0:76bd
db dummy7_215dd[32]; // 19f0:76dd
db dummy7_215fd[32]; // 19f0:76fd
db dummy7_2161d[32]; // 19f0:771d
db dummy7_2163d[32]; // 19f0:773d
db dummy7_2165d[32]; // 19f0:775d
db dummy7_2167d[32]; // 19f0:777d
db dummy7_2169d[32]; // 19f0:779d
db dummy7_216bd[32]; // 19f0:77bd
db dummy7_216dd[32]; // 19f0:77dd
db dummy7_216fd[32]; // 19f0:77fd
db dummy7_2171d[32]; // 19f0:781d
db dummy7_2173d[32]; // 19f0:783d
db dummy7_2175d[32]; // 19f0:785d
db dummy7_2177d[32]; // 19f0:787d
db dummy7_2179d[32]; // 19f0:789d
db dummy7_217bd[32]; // 19f0:78bd
db dummy7_217dd[32]; // 19f0:78dd
db dummy7_217fd[32]; // 19f0:78fd
db dummy7_2181d[32]; // 19f0:791d
db dummy7_2183d[32]; // 19f0:793d
db dummy7_2185d[32]; // 19f0:795d
db dummy7_2187d[32]; // 19f0:797d
db dummy7_2189d[32]; // 19f0:799d
db dummy7_218bd[32]; // 19f0:79bd
db dummy7_218dd[32]; // 19f0:79dd
db dummy7_218fd[32]; // 19f0:79fd
db dummy7_2191d[32]; // 19f0:7a1d
db dummy7_2193d[32]; // 19f0:7a3d
db dummy7_2195d[32]; // 19f0:7a5d
db dummy7_2197d[32]; // 19f0:7a7d
db dummy7_2199d[32]; // 19f0:7a9d
db dummy7_219bd[32]; // 19f0:7abd
db dummy7_219dd[32]; // 19f0:7add
db dummy7_219fd[32]; // 19f0:7afd
db dummy7_21a1d[32]; // 19f0:7b1d
db dummy7_21a3d[32]; // 19f0:7b3d
db dummy7_21a5d[32]; // 19f0:7b5d
db dummy7_21a7d[32]; // 19f0:7b7d
db dummy7_21a9d[32]; // 19f0:7b9d
db dummy7_21abd[32]; // 19f0:7bbd
db dummy7_21add[32]; // 19f0:7bdd
db dummy7_21afd[32]; // 19f0:7bfd
db dummy7_21b1d[32]; // 19f0:7c1d
db dummy7_21b3d[32]; // 19f0:7c3d
db dummy7_21b5d[32]; // 19f0:7c5d
db dummy7_21b7d[32]; // 19f0:7c7d
db dummy7_21b9d[32]; // 19f0:7c9d
db dummy7_21bbd[32]; // 19f0:7cbd
db dummy7_21bdd[32]; // 19f0:7cdd
db dummy7_21bfd[32]; // 19f0:7cfd
db dummy7_21c1d[32]; // 19f0:7d1d
db dummy7_21c3d[32]; // 19f0:7d3d
db dummy7_21c5d[32]; // 19f0:7d5d
db dummy7_21c7d[32]; // 19f0:7d7d
db dummy7_21c9d[32]; // 19f0:7d9d
db dummy7_21cbd[32]; // 19f0:7dbd
db dummy7_21cdd[32]; // 19f0:7ddd
db dummy7_21cfd[32]; // 19f0:7dfd
db dummy7_21d1d[32]; // 19f0:7e1d
db dummy7_21d3d[32]; // 19f0:7e3d
db dummy7_21d5d[32]; // 19f0:7e5d
db dummy7_21d7d[32]; // 19f0:7e7d
db dummy7_21d9d[32]; // 19f0:7e9d
db dummy7_21dbd[32]; // 19f0:7ebd
db dummy7_21ddd[32]; // 19f0:7edd
db dummy7_21dfd;
dw word_303de; // 19f0:7efe
dw word_303e0; // 19f0:7f00
db dummy7_21e02;
db dummy7_21e03;
db dummy7_21e04;
db dummy7_21e05;
db dummy7_21e06;
db dummy7_21e07;
db dummy7_21e08;
db dummy7_21e09;
db dummy7_21e0a;
dw word_303eb; // 19f0:7f0b
db byte_303ed; // 19f0:7f0d
db dummy7_21e0e[32]; // 19f0:7f0e
db dummy7_21e2e;
db dummy7_21e2f;
db dummy7_21e30;
db dummy7_21e31;
dd dword_30412; // 19f0:7f32
db dummy7_21e36[32]; // 19f0:7f36
db dummy7_21e56;
db dummy7_21e57;
db dummy7_21e58;
db dummy7_21e59;
db dummy7_21e5a;
db dummy7_21e5b;
db dummy7_21e5c;
db dummy7_21e5d;
db dummy7_21e5e;
db dummy7_21e5f;
db dummy7_21e60;
db dummy7_21e61;
dd dword_30442; // 19f0:7f62
db dummy7_21e66[32]; // 19f0:7f66
db dummy7_21e86;
db dummy7_21e87;
db dummy7_21e88;
db dummy7_21e89;
db dummy7_21e8a;
db dummy7_21e8b;
db dummy7_21e8c;
db dummy7_21e8d;
db dummy7_21e8e;
db dummy7_21e8f;
db dummy7_21e90;
db dummy7_21e91;
dd dword_30472; // 19f0:7f92
db dummy7_21e96[32]; // 19f0:7f96
db dummy7_21eb6;
db dummy7_21eb7;
db dummy7_21eb8;
db dummy7_21eb9;
db dummy7_21eba;
db dummy7_21ebb;
db dummy7_21ebc;
db dummy7_21ebd;
db dummy7_21ebe;
db dummy7_21ebf;
db dummy7_21ec0;
db dummy7_21ec1;
dd dword_304a2; // 19f0:7fc2
db dummy7_21ec6[32]; // 19f0:7fc6
db dummy7_21ee6;
db dummy7_21ee7;
db dummy7_21ee8;
db dummy7_21ee9;
db dummy7_21eea;
db dummy7_21eeb;
db dummy7_21eec;
db dummy7_21eed;
db dummy7_21eee;
db dummy7_21eef;
db dummy7_21ef0;
db dummy7_21ef1;
dd dword_304d2; // 19f0:7ff2
db dummy7_21ef6[32]; // 19f0:7ff6
db dummy7_21f16;
db dummy7_21f17;
db dummy7_21f18;
db dummy7_21f19;
db dummy7_21f1a;
db dummy7_21f1b;
db dummy7_21f1c;
db dummy7_21f1d;
db dummy7_21f1e;
db dummy7_21f1f;
db dummy7_21f20;
db dummy7_21f21;
dd dword_30502; // 19f0:8022
db dummy7_21f26[32]; // 19f0:8026
db dummy7_21f46;
db dummy7_21f47;
db dummy7_21f48;
db dummy7_21f49;
db dummy7_21f4a;
db dummy7_21f4b;
db dummy7_21f4c;
db dummy7_21f4d;
db dummy7_21f4e;
db dummy7_21f4f;
db dummy7_21f50;
db dummy7_21f51;
dd dword_30532; // 19f0:8052
db dummy7_21f56[32]; // 19f0:8056
db dummy7_21f76;
db dummy7_21f77;
db dummy7_21f78;
db dummy7_21f79;
db dummy7_21f7a;
db dummy7_21f7b;
db dummy7_21f7c;
db dummy7_21f7d;
db dummy7_21f7e;
db dummy7_21f7f;
db dummy7_21f80;
db dummy7_21f81;
dd dword_30562; // 19f0:8082
db dummy7_21f86[32]; // 19f0:8086
db dummy7_21fa6;
db dummy7_21fa7;
db dummy7_21fa8;
db dummy7_21fa9;
db dummy7_21faa;
db dummy7_21fab;
db dummy7_21fac;
db dummy7_21fad;
db dummy7_21fae;
db dummy7_21faf;
db dummy7_21fb0;
db dummy7_21fb1;
dd dword_30592; // 19f0:80b2
db dummy7_21fb6[32]; // 19f0:80b6
db dummy7_21fd6;
db dummy7_21fd7;
db dummy7_21fd8;
db dummy7_21fd9;
db dummy7_21fda;
db dummy7_21fdb;
db dummy7_21fdc;
db dummy7_21fdd;
db dummy7_21fde;
db dummy7_21fdf;
db dummy7_21fe0;
db dummy7_21fe1;
dd dword_305c2; // 19f0:80e2
db dummy7_21fe6[32]; // 19f0:80e6
db dummy7_22006;
db dummy7_22007;
db dummy7_22008;
db dummy7_22009;
db dummy7_2200a;
db dummy7_2200b;
db dummy7_2200c;
db dummy7_2200d;
db dummy7_2200e;
db dummy7_2200f;
db dummy7_22010;
db dummy7_22011;
dd dword_305f2; // 19f0:8112
db dummy7_22016[32]; // 19f0:8116
db dummy7_22036;
db dummy7_22037;
db dummy7_22038;
db dummy7_22039;
db dummy7_2203a;
db dummy7_2203b;
db dummy7_2203c;
db dummy7_2203d;
db dummy7_2203e;
db dummy7_2203f;
db dummy7_22040;
db dummy7_22041;
dd dword_30622; // 19f0:8142
db dummy7_22046[32]; // 19f0:8146
db dummy7_22066;
db dummy7_22067;
db dummy7_22068;
db dummy7_22069;
db dummy7_2206a;
db dummy7_2206b;
db dummy7_2206c;
db dummy7_2206d;
db dummy7_2206e;
db dummy7_2206f;
db dummy7_22070;
db dummy7_22071;
dd dword_30652; // 19f0:8172
db dummy7_22076[32]; // 19f0:8176
db dummy7_22096;
db dummy7_22097;
db dummy7_22098;
db dummy7_22099;
db dummy7_2209a;
db dummy7_2209b;
db dummy7_2209c;
db dummy7_2209d;
db dummy7_2209e;
db dummy7_2209f;
db dummy7_220a0;
db dummy7_220a1;
dd dword_30682; // 19f0:81a2
db dummy7_220a6[32]; // 19f0:81a6
db dummy7_220c6;
db dummy7_220c7;
db dummy7_220c8;
db dummy7_220c9;
db dummy7_220ca;
db dummy7_220cb;
db dummy7_220cc;
db dummy7_220cd;
db dummy7_220ce;
db dummy7_220cf;
db dummy7_220d0;
db dummy7_220d1;
dd dword_306b2; // 19f0:81d2
db dummy7_220d6[32]; // 19f0:81d6
db dummy7_220f6[32]; // 19f0:81f6
db dummy7_22116[32]; // 19f0:8216
db dummy7_22136[32]; // 19f0:8236
db dummy7_22156[32]; // 19f0:8256
db dummy7_22176[32]; // 19f0:8276
db dummy7_22196[32]; // 19f0:8296
db dummy7_221b6[32]; // 19f0:82b6
db dummy7_221d6[32]; // 19f0:82d6
db dummy7_221f6[32]; // 19f0:82f6
db dummy7_22216[32]; // 19f0:8316
db dummy7_22236[32]; // 19f0:8336
db dummy7_22256[32]; // 19f0:8356
db dummy7_22276[32]; // 19f0:8376
db dummy7_22296[32]; // 19f0:8396
db dummy7_222b6[32]; // 19f0:83b6
db dummy7_222d6[32]; // 19f0:83d6
db dummy7_222f6[32]; // 19f0:83f6
db dummy7_22316[32]; // 19f0:8416
db dummy7_22336[32]; // 19f0:8436
db dummy7_22356[32]; // 19f0:8456
db dummy7_22376[32]; // 19f0:8476
db dummy7_22396[32]; // 19f0:8496
db dummy7_223b6[32]; // 19f0:84b6
db dummy7_223d6[32]; // 19f0:84d6
db dummy7_223f6[32]; // 19f0:84f6
db dummy7_22416[32]; // 19f0:8516
db dummy7_22436[32]; // 19f0:8536
db dummy7_22456[32]; // 19f0:8556
db dummy7_22476[32]; // 19f0:8576
db dummy7_22496[32]; // 19f0:8596
db dummy7_224b6[32]; // 19f0:85b6
db dummy7_224d6[32]; // 19f0:85d6
db dummy7_224f6[32]; // 19f0:85f6
db dummy7_22516[32]; // 19f0:8616
db dummy7_22536; // 19f0:8636
db dummy7_22537; // 19f0:8637
db dummy7_22538; // 19f0:8638
dd dword_30b19; // 19f0:8639
db dummy7_2253d[1];
db aanioerrorhasoc[2]; // 19f0:863e
char dummy7_22540[53]; // 19f0:863e
char dummy7_22575[41]; // 19f0:863e
char dummy7_2259e[4]; // 19f0:863e
char dummy7_225a2[10]; // 19f0:863e
dw word_30b8c; // 19f0:86ac
dw word_30b8e; // 19f0:86ae
db dummy7_225b0[32]; // 19f0:86b0
db dummy7_225d0;
db dummy7_225d1;
db dummy7_225d2;
db dummy7_225d3;
db dummy7_225d4;
db dummy7_225d5;
db dummy7_225d6;
db dummy7_225d7;
db dummy7_225d8;
db dummy7_225d9;
dw word_30bba; // 19f0:86da
dw word_30bbc; // 19f0:86dc
dw word_30bbe; // 19f0:86de
db dummy7_225e0[32]; // 19f0:86e0
db dummy7_22600[32]; // 19f0:8700
db dummy7_22620; // 19f0:8720
db dummy7_22621; // 19f0:8721
db dummy7_22622; // 19f0:8722
db dummy7_22623; // 19f0:8723
db dummy7_22624; // 19f0:8724
db dummy7_22625; // 19f0:8725
db dummy7_22626; // 19f0:8726
db dummy7_22627; // 19f0:8727
db dummy7_22628; // 19f0:8728
db dummy7_22629; // 19f0:8729
db dummy7_2262a; // 19f0:872a
db dummy7_2262b; // 19f0:872b
db dummy7_2262c; // 19f0:872c
db dummy7_2262d; // 19f0:872d
db dummy7_2262e; // 19f0:872e
db dummy7_2262f; // 19f0:872f
db dummy7_22630; // 19f0:8730
db dummy7_22631; // 19f0:8731
db dummy7_22632; // 19f0:8732
db dummy7_22633; // 19f0:8733
dw word_30c14; // 19f0:8734
db dummy7_22636[32]; // 19f0:8736
db dummy7_22656[32]; // 19f0:8756
db dummy7_22676[32]; // 19f0:8776
db dummy7_22696[32]; // 19f0:8796
db dummy7_226b6[32]; // 19f0:87b6
db dummy7_226d6[32]; // 19f0:87d6
db dummy7_226f6[32]; // 19f0:87f6
db dummy7_22716[32]; // 19f0:8816
db dummy7_22736[32]; // 19f0:8836
db dummy7_22756[32]; // 19f0:8856
db dummy7_22776[32]; // 19f0:8876
db dummy7_22796[32]; // 19f0:8896
db dummy7_227b6[32]; // 19f0:88b6
db dummy7_227d6[32]; // 19f0:88d6
db dummy7_227f6[32]; // 19f0:88f6
db dummy7_22816[32]; // 19f0:8916
db dummy7_22836[32]; // 19f0:8936
db dummy7_22856[32]; // 19f0:8956
db dummy7_22876[32]; // 19f0:8976
db dummy7_22896[32]; // 19f0:8996
db dummy7_228b6[32]; // 19f0:89b6
db dummy7_228d6[32]; // 19f0:89d6
db dummy7_228f6[32]; // 19f0:89f6
db dummy7_22916[32]; // 19f0:8a16
db dummy7_22936[32]; // 19f0:8a36
db dummy7_22956[32]; // 19f0:8a56
db dummy7_22976[32]; // 19f0:8a76
db dummy7_22996[32]; // 19f0:8a96
db dummy7_229b6[32]; // 19f0:8ab6
db dummy7_229d6[32]; // 19f0:8ad6
db dummy7_229f6[32]; // 19f0:8af6
db dummy7_22a16[32]; // 19f0:8b16
db dummy7_22a36[32]; // 19f0:8b36
db dummy7_22a56[32]; // 19f0:8b56
db dummy7_22a76[32]; // 19f0:8b76
db dummy7_22a96[32]; // 19f0:8b96
db dummy7_22ab6[32]; // 19f0:8bb6
db dummy7_22ad6[32]; // 19f0:8bd6
db dummy7_22af6[32]; // 19f0:8bf6
db dummy7_22b16[32]; // 19f0:8c16
db dummy7_22b36[32]; // 19f0:8c36
db dummy7_22b56[32]; // 19f0:8c56
db dummy7_22b76[32]; // 19f0:8c76
db dummy7_22b96[32]; // 19f0:8c96
db dummy7_22bb6[32]; // 19f0:8cb6
db dummy7_22bd6[32]; // 19f0:8cd6
db dummy7_22bf6[32]; // 19f0:8cf6
db dummy7_22c16[32]; // 19f0:8d16
db dummy7_22c36[32]; // 19f0:8d36
db dummy7_22c56[32]; // 19f0:8d56
db dummy7_22c76[32]; // 19f0:8d76
db dummy7_22c96[32]; // 19f0:8d96
db dummy7_22cb6[32]; // 19f0:8db6
db dummy7_22cd6[32]; // 19f0:8dd6
db dummy7_22cf6[32]; // 19f0:8df6
db dummy7_22d16[32]; // 19f0:8e16
db dummy7_22d36[32]; // 19f0:8e36
db dummy7_22d56[32]; // 19f0:8e56
db dummy7_22d76[32]; // 19f0:8e76
db dummy7_22d96[32]; // 19f0:8e96
db dummy7_22db6[32]; // 19f0:8eb6
db dummy7_22dd6[32]; // 19f0:8ed6
db dummy7_22df6[32]; // 19f0:8ef6
db dummy7_22e16[32]; // 19f0:8f16
db dummy7_22e36[32]; // 19f0:8f36
db dummy7_22e56[32]; // 19f0:8f56
db dummy7_22e76[32]; // 19f0:8f76
db dummy7_22e96[32]; // 19f0:8f96
db dummy7_22eb6[32]; // 19f0:8fb6
db dummy7_22ed6[32]; // 19f0:8fd6
db dummy7_22ef6[32]; // 19f0:8ff6
db dummy7_22f16[32]; // 19f0:9016
db dummy7_22f36[32]; // 19f0:9036
db dummy7_22f56[32]; // 19f0:9056
db dummy7_22f76[32]; // 19f0:9076
db dummy7_22f96[32]; // 19f0:9096
db dummy7_22fb6[32]; // 19f0:90b6
db dummy7_22fd6[32]; // 19f0:90d6
db dummy7_22ff6[32]; // 19f0:90f6
db dummy7_23016[32]; // 19f0:9116
db dummy7_23036[32]; // 19f0:9136
db dummy7_23056;
db dummy7_23057;
db dummy7_23058;
db dummy7_23059;
db dummy7_2305a;
db dummy7_2305b;
db dummy7_2305c;
db dummy7_2305d;
db dummy7_2305e;
db dummy7_2305f;
db dummy7_23060;
db dummy7_23061;
db dummy7_23062;
db dummy7_23063;
db dummy7_23064;
db dummy7_23065;
db dummy7_23066;
db dummy7_23067;
dw word_31648; // 19f0:9168
dw word_3164a; // 19f0:916a
db dummy7_2306c;
db dummy7_2306d;
db dummy7_2306e;
db dummy7_2306f;
db dummy7_23070;
db dummy7_23071;
db dummy7_23072;
db dummy7_23073;
db dummy7_23074;
db dummy7_23075;
db dummy7_23076;
db dummy7_23077;
db dummy7_23078;
db dummy7_23079;
db dummy7_2307a;
db dummy7_2307b;
db dummy7_2307c;
db dummy7_2307d;
db dummy7_2307e;
db byte_3165f; // 19f0:917f
db dummy7_23080;
db dummy7_23081;
db dummy7_23082;
db dummy7_23083;
db dummy7_23084;
db dummy7_23085;
db dummy7_23086;
db dummy7_23087;
db dummy7_23088;
db byte_31669; // 19f0:9189
db byte_3166a; // 19f0:918a
db dummy7_2308b;
db dummy7_2308c;
db dummy7_2308d;
db dummy7_2308e;
db dummy7_2308f;
db dummy7_23090;
db dummy7_23091;
db dummy7_23092;
db dummy7_23093;
db dummy7_23094;
db dummy7_23095;
db dummy7_23096;
db dummy7_23097;
db dummy7_23098;
db dummy7_23099;
db dummy7_2309a;
db dummy7_2309b;
db dummy7_2309c;
db dummy7_2309d;
db dummy7_2309e;
db dummy7_2309f;
db dummy7_230a0;
db dummy7_230a1;
db dummy7_230a2;
db dummy7_230a3;
db byte_31684; // 19f0:91a4
db dummy7_230a5;
db dummy7_230a6;
db dummy7_230a7;
db dummy7_230a8;
db dummy7_230a9;
db dummy7_230aa;
db dummy7_230ab;
db dummy7_230ac;
db dummy7_230ad;
db dummy7_230ae;
db dummy7_230af;
db dummy7_230b0;
db dummy7_230b1;
db dummy7_230b2;
db dummy7_230b3;
db dummy7_230b4;
db dummy7_230b5;
db dummy7_230b6;
db dummy7_230b7;
db dummy7_230b8;
db dummy7_230b9;
db dummy7_230ba;
db dummy7_230bb;
db dummy7_230bc;
db dummy7_230bd;
db dummy7_230be;
db byte_3169f; // 19f0:91bf
db dummy7_230c0[32]; // 19f0:91c0
db dummy7_230e0[32]; // 19f0:91e0
db dummy7_23100[32]; // 19f0:9200
db dummy7_23120[32]; // 19f0:9220
db dummy7_23140[32]; // 19f0:9240
db dummy7_23160[32]; // 19f0:9260
db dummy7_23180[32]; // 19f0:9280
db dummy7_231a0[32]; // 19f0:92a0
db dummy7_231c0[32]; // 19f0:92c0
db dummy7_231e0;
db dummy7_231e1;
db dummy7_231e2;
db dummy7_231e3;
db dummy7_231e4;
db dummy7_231e5;
db dummy7_231e6;
db dummy7_231e7;
db dummy7_231e8;
db dummy7_231e9;
db dummy7_231ea;
db dummy7_231eb;
db dummy7_231ec;
db dummy7_231ed;
db byte_317ce; // 19f0:92ee
dw word_317cf; // 19f0:92ef
dw word_317d1; // 19f0:92f1
dw word_317d3; // 19f0:92f3
dw word_317d5; // 19f0:92f5
dw word_317d7; // 19f0:92f7
dw word_317d9; // 19f0:92f9
dw word_317db; // 19f0:92fb
db dummy7_231fd;
db dummy7_231fe;
db byte_317df; // 19f0:92ff
db dummy7_23200[32]; // 19f0:9300
db dummy7_23220[32]; // 19f0:9320
db dummy7_23240[32]; // 19f0:9340
db dummy7_23260[32]; // 19f0:9360
db dummy7_23280[32]; // 19f0:9380
db dummy7_232a0[32]; // 19f0:93a0
db dummy7_232c0[32]; // 19f0:93c0
db dummy7_232e0[32]; // 19f0:93e0
db dummy7_23300[32]; // 19f0:9400
db dummy7_23320[32]; // 19f0:9420
db dummy7_23340[32]; // 19f0:9440
db dummy7_23360[32]; // 19f0:9460
db dummy7_23380[32]; // 19f0:9480
db dummy7_233a0[32]; // 19f0:94a0
db dummy7_233c0[32]; // 19f0:94c0
db dummy7_233e0[32]; // 19f0:94e0
db dummy7_23400[32]; // 19f0:9500
db dummy7_23420[32]; // 19f0:9520
db dummy7_23440[32]; // 19f0:9540
db dummy7_23460;
db dummy7_23461;
db dummy7_23462;
db dummy7_23463;
db dummy7_23464;
db dummy7_23465;
db dummy7_23466;
db dummy7_23467;
db dummy7_23468;
dw word_31a49; // 19f0:9569
db byte_31a4b; // 19f0:956b
db dummy7_2346c[32]; // 19f0:956c
db dummy7_2348c[32]; // 19f0:958c
db dummy7_234ac[32]; // 19f0:95ac
db dummy7_234cc[32]; // 19f0:95cc
db dummy7_234ec[32]; // 19f0:95ec
db dummy7_2350c[32]; // 19f0:960c
db dummy7_2352c[32]; // 19f0:962c
db dummy7_2354c[32]; // 19f0:964c
db dummy7_2356c[32]; // 19f0:966c
db dummy7_2358c[32]; // 19f0:968c
db dummy7_235ac[32]; // 19f0:96ac
db dummy7_235cc[32]; // 19f0:96cc
db dummy7_235ec[32]; // 19f0:96ec
db dummy7_2360c[32]; // 19f0:970c
db dummy7_2362c[32]; // 19f0:972c
db dummy7_2364c[32]; // 19f0:974c
db dummy7_2366c[32]; // 19f0:976c
db dummy7_2368c[32]; // 19f0:978c
db dummy7_236ac[32]; // 19f0:97ac
db dummy7_236cc[32]; // 19f0:97cc
db dummy7_236ec[32]; // 19f0:97ec
db dummy7_2370c[32]; // 19f0:980c
db dummy7_2372c[32]; // 19f0:982c
db dummy7_2374c[32]; // 19f0:984c
db dummy7_2376c[32]; // 19f0:986c
db dummy7_2378c[32]; // 19f0:988c
db dummy7_237ac[32]; // 19f0:98ac
db dummy7_237cc;
db dummy7_237cd;
db dummy7_237ce;
db dummy7_237cf;
db dummy7_237d0;
db dummy7_237d1;
db dummy7_237d2;
db dummy7_237d3;
db dummy7_237d4;
db dummy7_237d5;
db dummy7_237d6;
db dummy7_237d7;
db dummy7_237d8;
db dummy7_237d9;
db dummy7_237da;
db dummy7_237db;
dw word_31dbc; // 19f0:98dc
db dummy7_237de[32]; // 19f0:98de
db dummy7_237fe[32]; // 19f0:98fe
db dummy7_2381e[32]; // 19f0:991e
db dummy7_2383e[32]; // 19f0:993e
db dummy7_2385e[32]; // 19f0:995e
db dummy7_2387e[32]; // 19f0:997e
db dummy7_2389e[32]; // 19f0:999e
db dummy7_238be[32]; // 19f0:99be
db dummy7_238de[32]; // 19f0:99de
db dummy7_238fe[32]; // 19f0:99fe
db dummy7_2391e[32]; // 19f0:9a1e
db dummy7_2393e[32]; // 19f0:9a3e
db dummy7_2395e[32]; // 19f0:9a5e
db dummy7_2397e[32]; // 19f0:9a7e
db dummy7_2399e[32]; // 19f0:9a9e
db dummy7_239be[32]; // 19f0:9abe
db dummy7_239de[32]; // 19f0:9ade
db dummy7_239fe[32]; // 19f0:9afe
db dummy7_23a1e[32]; // 19f0:9b1e
db dummy7_23a3e[32]; // 19f0:9b3e
db dummy7_23a5e[32]; // 19f0:9b5e
db dummy7_23a7e[32]; // 19f0:9b7e
db dummy7_23a9e[32]; // 19f0:9b9e
db dummy7_23abe[32]; // 19f0:9bbe
db dummy7_23ade[32]; // 19f0:9bde
db dummy7_23afe[32]; // 19f0:9bfe
db dummy7_23b1e[32]; // 19f0:9c1e
db dummy7_23b3e[32]; // 19f0:9c3e
db dummy7_23b5e[32]; // 19f0:9c5e
db dummy7_23b7e[32]; // 19f0:9c7e
db dummy7_23b9e[32]; // 19f0:9c9e
db dummy7_23bbe[32]; // 19f0:9cbe
db dummy7_23bde[32]; // 19f0:9cde
db dummy7_23bfe[32]; // 19f0:9cfe
db dummy7_23c1e[32]; // 19f0:9d1e
db dummy7_23c3e[32]; // 19f0:9d3e
db dummy7_23c5e[32]; // 19f0:9d5e
db dummy7_23c7e[32]; // 19f0:9d7e
db dummy7_23c9e[32]; // 19f0:9d9e
db dummy7_23cbe[32]; // 19f0:9dbe
db dummy7_23cde[32]; // 19f0:9dde
db dummy7_23cfe[32]; // 19f0:9dfe
db dummy7_23d1e[32]; // 19f0:9e1e
db dummy7_23d3e[32]; // 19f0:9e3e
db dummy7_23d5e[32]; // 19f0:9e5e
db dummy7_23d7e[32]; // 19f0:9e7e
db dummy7_23d9e[32]; // 19f0:9e9e
db dummy7_23dbe[32]; // 19f0:9ebe
db dummy7_23dde[32]; // 19f0:9ede
db dummy7_23dfe[32]; // 19f0:9efe
db dummy7_23e1e[32]; // 19f0:9f1e
db dummy7_23e3e[32]; // 19f0:9f3e
db dummy7_23e5e[32]; // 19f0:9f5e
db dummy7_23e7e[32]; // 19f0:9f7e
db dummy7_23e9e[32]; // 19f0:9f9e
db dummy7_23ebe[32]; // 19f0:9fbe
db dummy7_23ede[32]; // 19f0:9fde
db dummy7_23efe[32]; // 19f0:9ffe
db dummy7_23f1e[32]; // 19f0:a01e
db dummy7_23f3e[32]; // 19f0:a03e
db dummy7_23f5e[32]; // 19f0:a05e
db dummy7_23f7e[32]; // 19f0:a07e
db dummy7_23f9e[32]; // 19f0:a09e
db dummy7_23fbe[32]; // 19f0:a0be
db dummy7_23fde[32]; // 19f0:a0de
db dummy7_23ffe[32]; // 19f0:a0fe
db dummy7_2401e[32]; // 19f0:a11e
db dummy7_2403e[32]; // 19f0:a13e
db dummy7_2405e[32]; // 19f0:a15e
db dummy7_2407e[32]; // 19f0:a17e
db dummy7_2409e[32]; // 19f0:a19e
db dummy7_240be[32]; // 19f0:a1be
db dummy7_240de[32]; // 19f0:a1de
db dummy7_240fe[32]; // 19f0:a1fe
db dummy7_2411e[32]; // 19f0:a21e
db dummy7_2413e[32]; // 19f0:a23e
db dummy7_2415e[32]; // 19f0:a25e
db dummy7_2417e[32]; // 19f0:a27e
db dummy7_2419e[32]; // 19f0:a29e
db dummy7_241be[32]; // 19f0:a2be
db dummy7_241de[32]; // 19f0:a2de
db dummy7_241fe[32]; // 19f0:a2fe
db dummy7_2421e[32]; // 19f0:a31e
db dummy7_2423e[32]; // 19f0:a33e
db dummy7_2425e[32]; // 19f0:a35e
db dummy7_2427e; // 19f0:a37e
db dummy7_2427f; // 19f0:a37f
db dummy7_24280; // 19f0:a380
db dummy7_24281; // 19f0:a381
db dummy7_24282; // 19f0:a382
db dummy7_24283; // 19f0:a383
db dummy7_24284; // 19f0:a384
db dummy7_24285; // 19f0:a385
db dummy7_24286; // 19f0:a386
db dummy7_24287; // 19f0:a387
db dummy7_24288; // 19f0:a388
db dummy7_24289; // 19f0:a389
db dummy7_2428a; // 19f0:a38a
db dummy7_2428b; // 19f0:a38b
db dummy7_2428c; // 19f0:a38c
db dummy7_2428d; // 19f0:a38d
db dummy7_2428e; // 19f0:a38e
db dummy7_2428f; // 19f0:a38f
db dummy7_24290; // 19f0:a390
db dummy7_24291; // 19f0:a391
db dummy7_24292; // 19f0:a392
db dummy7_24293; // 19f0:a393
db dummy7_24294; // 19f0:a394
db dummy7_24295; // 19f0:a395
db dummy7_24296; // 19f0:a396
db dummy7_24297; // 19f0:a397
db dummy7_24298; // 19f0:a398
db dummy7_24299; // 19f0:a399
db dummy7_2429a;
db dummy7_2429b;
dw word_3287c; // 19f0:a39c
dw word_3287e; // 19f0:a39e
dw word_32880; // 19f0:a3a0
dw word_32882; // 19f0:a3a2
db dummy7_242a4[12];
db dummy7_242b0[256]; // 242b:0000

#ifdef DOSBOX_CUSTOM
    db filll[1024*1024*16];
#endif
                        db stack[STACK_SIZE];
                        db heap[HEAP_SIZE];
                };
}
#pragma pack(pop)

#endif

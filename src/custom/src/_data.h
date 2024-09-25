
#ifndef ___DATA_H__
#define ___DATA_H__
#include "../asm.h"


#pragma pack(push, 1)
namespace m2c{
struct Memory{
db dummyd_0[6688];
db dummyd_1a20[581];
dw seg_10245; // 01a2:0245
db dummyd_1c67[3892];
dw word_1117b; // 01a2:117b
db dummyd_2b9d[273];
db dummyd_2cae[32]; // 01a2:128e
db dummyd_2cce[32]; // 01a2:12ae
db dummyd_2cee[32]; // 01a2:12ce
db dummyd_2d0e[32]; // 01a2:12ee
db dummyd_2d2e[32]; // 01a2:130e
db dummyd_2d4e[32]; // 01a2:132e
db dummyd_2d6e[32]; // 01a2:134e
db dummyd_2d8e[32]; // 01a2:136e
db dummyd_2dae[32]; // 01a2:138e
db dummyd_2dce[32]; // 01a2:13ae
db dummyd_2dee[32]; // 01a2:13ce
db dummyd_2e0e[32]; // 01a2:13ee
db dummyd_2e2e[32]; // 01a2:140e
db dummyd_2e4e[32]; // 01a2:142e
db dummyd_2e6e[32]; // 01a2:144e
db dummyd_2e8e;
db dummyd_2e8f;
db dummyd_2e90;
db dummyd_2e91;
db dummyd_2e92;
db dummyd_2e93;
db dummyd_2e94;
db dummyd_2e95;
db dummyd_2e96;
db dummyd_2e97;
db dummyd_2e98;
db dummyd_2e99;
db dummyd_2e9a;
db dummyd_2e9b;
db dummyd_2e9c;
db dummyd_2e9d;
db dummyd_2e9e;
db dummyd_2e9f;
db dummyd_2ea0;
db dummyd_2ea1;
db dummyd_2ea2;
db dummyd_2ea3;
db dummyd_2ea4;
db dummyd_2ea5;
db dummyd_2ea6;
db dummyd_2ea7;
db dummyd_2ea8;
db dummyd_2ea9;
db dummyd_2eaa;
db dummyd_2eab;
dd dword_1148c; // 01a2:148c
dd off_11490; // 01a2:1490
dd off_11494; // 01a2:1494
dw seg_11498; // 01a2:1498
dw seg_1149a; // 01a2:149a
db dummyd_2ebc[559];
db dummyd_30eb; // 01a2:16cb
db dummyd_30ec; // 01a2:16cc
db dummyd_30ed; // 01a2:16cd
db dummyd_30ee; // 01a2:16ce
db dummyd_30ef; // 01a2:16cf
db dummyd_30f0; // 01a2:16d0
db dummyd_30f1; // 01a2:16d1
db dummyd_30f2; // 01a2:16d2
db dummyd_30f3[916];
db dummyd_3487; // 01a2:1a67
db dummyd_3488; // 01a2:1a68
db dummyd_3489; // 01a2:1a69
db dummyd_348a; // 01a2:1a6a
db dummyd_348b; // 01a2:1a6b
db dummyd_348c; // 01a2:1a6c
db dummyd_348d; // 01a2:1a6d
db dummyd_348e; // 01a2:1a6e
db dummyd_348f[544];
db dummyd_36af[32]; // 01a2:1c8f
db dummyd_36cf; // 01a2:1caf
db dummyd_36d0;
db dummyd_36d1; // 01a2:1cb1
db dummyd_36d2; // 01a2:1cb2
db dummyd_36d3; // 01a2:1cb3
db dummyd_36d4;
db dummyd_36d5; // 01a2:1cb5
db dummyd_36d6; // 01a2:1cb6
db dummyd_36d7; // 01a2:1cb7
db dummyd_36d8;
db dummyd_36d9; // 01a2:1cb9
db dummyd_36da; // 01a2:1cba
db dummyd_36db; // 01a2:1cbb
db dummyd_36dc;
db dummyd_36dd; // 01a2:1cbd
db dummyd_36de; // 01a2:1cbe
db dummyd_36df; // 01a2:1cbf
db dummyd_36e0; // 01a2:1cc0
db dummyd_36e1[490];
db dummyd_38cb;
db dummyd_38cc;
db dummyd_38cd; // 01a2:1ead
db dummyd_38ce; // 01a2:1eae
db dummyd_38cf; // 01a2:1eaf
db dummyd_38d0; // 01a2:1eb0
db dummyd_38d1; // 01a2:1eb1
db dummyd_38d2; // 01a2:1eb2
db dummyd_38d3; // 01a2:1eb3
db dummyd_38d4; // 01a2:1eb4
db dummyd_38d5[3926];
db dummyd_482b[32]; // 01a2:2e0b
db dummyd_484b; // 01a2:2e2b
db dummyd_484c; // 01a2:2e2c
db dummyd_484d[15425];
db dummyd_848e; // 01a2:6a6e
db dummyd_848f[1257];
db byte_16f58; // 01a2:6f58
db dummyd_8979; // 01a2:6f59
db dummyd_897a; // 01a2:6f5a
db dummyd_897b; // 01a2:6f5b
db dummyd_897c; // 01a2:6f5c
db dummyd_897d; // 01a2:6f5d
db dummyd_897e; // 01a2:6f5e
db dummyd_897f; // 01a2:6f5f
db dummyd_8980; // 01a2:6f60
db dummyd_8981; // 01a2:6f61
db dummyd_8982[1184];
db dummyd_8e22; // 01a2:7402
db dummyd_8e23[263];
db dummyd_8f2a;
db dummyd_8f2b; // 01a2:750b
db dummyd_8f2c;
db dummyd_8f2d; // 01a2:750d
db dummyd_8f2e; // 01a2:750e
db dummyd_8f2f;
db dummyd_8f30; // 01a2:7510
db dummyd_8f31; // 01a2:7511
db dummyd_8f32;
db dummyd_8f33; // 01a2:7513
db dummyd_8f34;
db dummyd_8f35; // 01a2:7515
db dummyd_8f36; // 01a2:7516
db dummyd_8f37;
db dummyd_8f38; // 01a2:7518
db dummyd_8f39; // 01a2:7519
db dummyd_8f3a;
db dummyd_8f3b; // 01a2:751b
db dummyd_8f3c; // 01a2:751c
db dummyd_8f3d;
db dummyd_8f3e; // 01a2:751e
db dummyd_8f3f; // 01a2:751f
db dummyd_8f40;
db dummyd_8f41; // 01a2:7521
db dummyd_8f42; // 01a2:7522
db dummyd_8f43[473];
db dummyd_911c[32]; // 01a2:76fc
db dummyd_913c[32]; // 01a2:771c
db dummyd_915c[32]; // 01a2:773c
db dummyd_917c[32]; // 01a2:775c
db dummyd_919c[32]; // 01a2:777c
db dummyd_91bc; // 01a2:779c
db dummyd_91bd[124];
db dummyd_9239[32]; // 01a2:7819
db dummyd_9259[32]; // 01a2:7839
db dummyd_9279[32]; // 01a2:7859
db dummyd_9299[32]; // 01a2:7879
db dummyd_92b9[32]; // 01a2:7899
db dummyd_92d9; // 01a2:78b9
db dummyd_92da; // 01a2:78ba
db dummyd_92db; // 01a2:78bb
db dummyd_92dc; // 01a2:78bc
db dummyd_92dd; // 01a2:78bd
db dummyd_92de; // 01a2:78be
db dummyd_92df; // 01a2:78bf
db dummyd_92e0; // 01a2:78c0
db dummyd_92e1; // 01a2:78c1
db dummyd_92e2; // 01a2:78c2
db dummyd_92e3; // 01a2:78c3
db dummyd_92e4; // 01a2:78c4
db dummyd_92e5; // 01a2:78c5
db dummyd_92e6; // 01a2:78c6
db dummyd_92e7; // 01a2:78c7
db dummyd_92e8; // 01a2:78c8
db dummyd_92e9; // 01a2:78c9
db dummyd_92ea; // 01a2:78ca
db dummyd_92eb; // 01a2:78cb
db dummyd_92ec; // 01a2:78cc
db dummyd_92ed; // 01a2:78cd
db dummyd_92ee; // 01a2:78ce
db dummyd_92ef; // 01a2:78cf
db dummyd_92f0; // 01a2:78d0
db dummyd_92f1; // 01a2:78d1
db dummyd_92f2; // 01a2:78d2
db dummyd_92f3; // 01a2:78d3
db dummyd_92f4; // 01a2:78d4
db dummyd_92f5[3451];
db dummyd_a070; // 01a2:8650
db dummyd_a071[2060];
db dummyd_a87d[12]; // 01a2:8e5d
db dummyd_a889[8]; // 01a2:8e69
db dummyd_a891[4209];
db byte_19ee2[10]; // 01a2:9ee2
db dummyd_b90c[10]; // 01a2:9eec
db dummyd_b916[11]; // 01a2:9ef6
db dummyd_b921[10]; // 01a2:9f01
db dummyd_b92b[12]; // 01a2:9f0b
db dummyd_b937[10]; // 01a2:9f17
db dummyd_b941[11]; // 01a2:9f21
db dummyd_b94c[11]; // 01a2:9f2c
db dummyd_b957[12]; // 01a2:9f37
db dummyd_b963[9]; // 01a2:9f43
db dummyd_b96c[10]; // 01a2:9f4c
db dummyd_b976[10]; // 01a2:9f56
db dummyd_b980[10]; // 01a2:9f60
db dummyd_b98a[10]; // 01a2:9f6a
db dummyd_b994[10]; // 01a2:9f74
db dummyd_b99e[10]; // 01a2:9f7e
db dummyd_b9a8[12]; // 01a2:9f88
db dummyd_b9b4[10]; // 01a2:9f94
db dummyd_b9be[10]; // 01a2:9f9e
db dummyd_b9c8[10]; // 01a2:9fa8
db dummyd_b9d2[11]; // 01a2:9fb2
db dummyd_b9dd[10]; // 01a2:9fbd
db dummyd_b9e7[10]; // 01a2:9fc7
db dummyd_b9f1[10]; // 01a2:9fd1
db dummyd_b9fb[11]; // 01a2:9fdb
db dummyd_ba06[12]; // 01a2:9fe6
db dummyd_ba12[10]; // 01a2:9ff2
db dummyd_ba1c[10]; // 01a2:9ffc
db dummyd_ba26[11]; // 01a2:a006
db dummyd_ba31[10]; // 01a2:a011
db dummyd_ba3b[11]; // 01a2:a01b
db dummyd_ba46[11]; // 01a2:a026
db dummyd_ba51[10]; // 01a2:a031
db dummyd_ba5b[11]; // 01a2:a03b
db dummyd_ba66[10]; // 01a2:a046
db dummyd_ba70[11]; // 01a2:a050
db dummyd_ba7b[12]; // 01a2:a05b
db dummyd_ba87[11]; // 01a2:a067
db dummyd_ba92[12]; // 01a2:a072
db dummyd_ba9e[12]; // 01a2:a07e
db dummyd_baaa[11]; // 01a2:a08a
db dummyd_bab5[11]; // 01a2:a095
db dummyd_bac0[11]; // 01a2:a0a0
db dummyd_bacb[10]; // 01a2:a0ab
db dummyd_bad5[10]; // 01a2:a0b5
db dummyd_badf[10]; // 01a2:a0bf
db dummyd_bae9[11]; // 01a2:a0c9
db dummyd_baf4[11]; // 01a2:a0d4
db dummyd_baff[7]; // 01a2:a0df
db dummyd_bb06[12]; // 01a2:a0e6
db dummyd_bb12[11]; // 01a2:a0f2
db dummyd_bb1d[9]; // 01a2:a0fd
db dummyd_bb26[9]; // 01a2:a106
db dummyd_bb2f[10]; // 01a2:a10f
db dummyd_bb39[10]; // 01a2:a119
db dummyd_bb43[11]; // 01a2:a123
db dummyd_bb4e[11]; // 01a2:a12e
db dummyd_bb59[11]; // 01a2:a139
db dummyd_bb64[12]; // 01a2:a144
db dummyd_bb70[10]; // 01a2:a150
db dummyd_bb7a[9]; // 01a2:a15a
db dummyd_bb83[10]; // 01a2:a163
db dummyd_bb8d[10]; // 01a2:a16d
db dummyd_bb97[11]; // 01a2:a177
db dummyd_bba2[11]; // 01a2:a182
db dummyd_bbad[11]; // 01a2:a18d
db dummyd_bbb8[12]; // 01a2:a198
db dummyd_bbc4[11]; // 01a2:a1a4
db dummyd_bbcf[11]; // 01a2:a1af
db dummyd_bbda[11]; // 01a2:a1ba
db dummyd_bbe5[12]; // 01a2:a1c5
db dummyd_bbf1[11]; // 01a2:a1d1
db dummyd_bbfc[9]; // 01a2:a1dc
db dummyd_bc05[10]; // 01a2:a1e5
db dummyd_bc0f[10]; // 01a2:a1ef
db dummyd_bc19[10]; // 01a2:a1f9
db dummyd_bc23[10]; // 01a2:a203
db dummyd_bc2d[11]; // 01a2:a20d
db dummyd_bc38[10]; // 01a2:a218
db dummyd_bc42[10]; // 01a2:a222
db dummyd_bc4c[10]; // 01a2:a22c
db dummyd_bc56[10]; // 01a2:a236
db dummyd_bc60[10]; // 01a2:a240
db dummyd_bc6a[11]; // 01a2:a24a
db dummyd_bc75[11]; // 01a2:a255
db dummyd_bc80[10]; // 01a2:a260
db dummyd_bc8a[9]; // 01a2:a26a
db dummyd_bc93[10]; // 01a2:a273
db dummyd_bc9d[10]; // 01a2:a27d
db dummyd_bca7[10]; // 01a2:a287
db dummyd_bcb1[11]; // 01a2:a291
db dummyd_bcbc[11]; // 01a2:a29c
db dummyd_bcc7[10]; // 01a2:a2a7
db dummyd_bcd1[10]; // 01a2:a2b1
db dummyd_bcdb[9]; // 01a2:a2bb
db dummyd_bce4[10]; // 01a2:a2c4
db dummyd_bcee[10]; // 01a2:a2ce
db dummyd_bcf8[11]; // 01a2:a2d8
db dummyd_bd03[6]; // 01a2:a2e3
db dummyd_bd09[32]; // 01a2:a2e9
db dummyd_bd29[32]; // 01a2:a309
db dummyd_bd49[32]; // 01a2:a329
db dummyd_bd69[32]; // 01a2:a349
db dummyd_bd89; // 01a2:a369
db dummyd_bd8a; // 01a2:a36a
db dummyd_bd8b; // 01a2:a36b
db dummyd_bd8c; // 01a2:a36c
db dummyd_bd8d; // 01a2:a36d
db dummyd_bd8e; // 01a2:a36e
db dummyd_bd8f; // 01a2:a36f
db dummyd_bd90; // 01a2:a370
db dummyd_bd91; // 01a2:a371
db dummyd_bd92[665];
db dummyd_c02b; // 01a2:a60b
db dummyd_c02c; // 01a2:a60c
db dummyd_c02d; // 01a2:a60d
db dummyd_c02e; // 01a2:a60e
db dummyd_c02f; // 01a2:a60f
db dummyd_c030; // 01a2:a610
db dummyd_c031; // 01a2:a611
db dummyd_c032; // 01a2:a612
db dummyd_c033; // 01a2:a613
db dummyd_c034; // 01a2:a614
db dummyd_c035; // 01a2:a615
db dummyd_c036; // 01a2:a616
db dummyd_c037; // 01a2:a617
db dummyd_c038; // 01a2:a618
db dummyd_c039; // 01a2:a619
db dummyd_c03a; // 01a2:a61a
db dummyd_c03b; // 01a2:a61b
db dummyd_c03c; // 01a2:a61c
db dummyd_c03d; // 01a2:a61d
db dummyd_c03e; // 01a2:a61e
db dummyd_c03f; // 01a2:a61f
db dummyd_c040; // 01a2:a620
db dummyd_c041[316];
db dummyd_c17d[32]; // 01a2:a75d
db dummyd_c19d[32]; // 01a2:a77d
db dummyd_c1bd[32]; // 01a2:a79d
db dummyd_c1dd[32]; // 01a2:a7bd
db dummyd_c1fd[32]; // 01a2:a7dd
db dummyd_c21d[32]; // 01a2:a7fd
db dummyd_c23d; // 01a2:a81d
db dummyd_c23e[230];
db dummyd_c324; // 01a2:a904
db dummyd_c325; // 01a2:a905
db dummyd_c326; // 01a2:a906
db dummyd_c327; // 01a2:a907
db dummyd_c328; // 01a2:a908
db dummyd_c329; // 01a2:a909
db dummyd_c32a; // 01a2:a90a
db dummyd_c32b; // 01a2:a90b
db dummyd_c32c; // 01a2:a90c
db dummyd_c32d; // 01a2:a90d
db dummyd_c32e; // 01a2:a90e
db dummyd_c32f; // 01a2:a90f
db dummyd_c330; // 01a2:a910
db dummyd_c331; // 01a2:a911
db dummyd_c332; // 01a2:a912
db dummyd_c333; // 01a2:a913
db dummyd_c334; // 01a2:a914
db dummyd_c335; // 01a2:a915
db dummyd_c336; // 01a2:a916
db dummyd_c337; // 01a2:a917
db dummyd_c338; // 01a2:a918
db dummyd_c339; // 01a2:a919
db dummyd_c33a; // 01a2:a91a
db dummyd_c33b; // 01a2:a91b
db dummyd_c33c[28];
db dummyd_c358[32]; // 01a2:a938
db dummyd_c378[32]; // 01a2:a958
db dummyd_c398[32]; // 01a2:a978
db dummyd_c3b8[32]; // 01a2:a998
db dummyd_c3d8[32]; // 01a2:a9b8
db dummyd_c3f8[32]; // 01a2:a9d8
db dummyd_c418[32]; // 01a2:a9f8
db dummyd_c438[32]; // 01a2:aa18
db dummyd_c458[32]; // 01a2:aa38
db dummyd_c478[32]; // 01a2:aa58
db dummyd_c498[32]; // 01a2:aa78
db dummyd_c4b8[32]; // 01a2:aa98
db dummyd_c4d8[32]; // 01a2:aab8
db dummyd_c4f8[32]; // 01a2:aad8
db dummyd_c518; // 01a2:aaf8
db dummyd_c519; // 01a2:aaf9
db dummyd_c51a; // 01a2:aafa
db dummyd_c51b; // 01a2:aafb
db dummyd_c51c; // 01a2:aafc
db dummyd_c51d; // 01a2:aafd
db dummyd_c51e; // 01a2:aafe
db dummyd_c51f; // 01a2:aaff
db dummyd_c520; // 01a2:ab00
db dummyd_c521; // 01a2:ab01
db dummyd_c522; // 01a2:ab02
db dummyd_c523; // 01a2:ab03
db dummyd_c524; // 01a2:ab04
db dummyd_c525; // 01a2:ab05
db dummyd_c526; // 01a2:ab06
db dummyd_c527; // 01a2:ab07
db dummyd_c528; // 01a2:ab08
db dummyd_c529; // 01a2:ab09
db dummyd_c52a; // 01a2:ab0a
db dummyd_c52b; // 01a2:ab0b
db dummyd_c52c; // 01a2:ab0c
db dummyd_c52d; // 01a2:ab0d
db dummyd_c52e; // 01a2:ab0e
db dummyd_c52f; // 01a2:ab0f
db dummyd_c530; // 01a2:ab10
db dummyd_c531; // 01a2:ab11
db dummyd_c532; // 01a2:ab12
db dummyd_c533[649];
db dummyd_c7bc; // 01a2:ad9c
db dummyd_c7bd; // 01a2:ad9d
db dummyd_c7be; // 01a2:ad9e
db dummyd_c7bf; // 01a2:ad9f
db dummyd_c7c0; // 01a2:ada0
db dummyd_c7c1; // 01a2:ada1
db dummyd_c7c2; // 01a2:ada2
db dummyd_c7c3; // 01a2:ada3
db dummyd_c7c4; // 01a2:ada4
db dummyd_c7c5; // 01a2:ada5
db dummyd_c7c6; // 01a2:ada6
db dummyd_c7c7; // 01a2:ada7
db dummyd_c7c8; // 01a2:ada8
db dummyd_c7c9; // 01a2:ada9
db dummyd_c7ca; // 01a2:adaa
db dummyd_c7cb; // 01a2:adab
db dummyd_c7cc; // 01a2:adac
db dummyd_c7cd; // 01a2:adad
db dummyd_c7ce; // 01a2:adae
db dummyd_c7cf; // 01a2:adaf
db dummyd_c7d0; // 01a2:adb0
db dummyd_c7d1; // 01a2:adb1
db dummyd_c7d2; // 01a2:adb2
db dummyd_c7d3; // 01a2:adb3
db dummyd_c7d4[584];
db dummyd_ca1c; // 01a2:affc
db dummyd_ca1d; // 01a2:affd
db dummyd_ca1e; // 01a2:affe
db dummyd_ca1f; // 01a2:afff
db dummyd_ca20; // 01a2:b000
db dummyd_ca21; // 01a2:b001
db dummyd_ca22; // 01a2:b002
db dummyd_ca23; // 01a2:b003
db dummyd_ca24; // 01a2:b004
db dummyd_ca25; // 01a2:b005
db dummyd_ca26; // 01a2:b006
db dummyd_ca27; // 01a2:b007
db dummyd_ca28; // 01a2:b008
db dummyd_ca29; // 01a2:b009
db dummyd_ca2a; // 01a2:b00a
db dummyd_ca2b; // 01a2:b00b
db dummyd_ca2c; // 01a2:b00c
db dummyd_ca2d; // 01a2:b00d
db dummyd_ca2e; // 01a2:b00e
db dummyd_ca2f; // 01a2:b00f
db dummyd_ca30; // 01a2:b010
db dummyd_ca31; // 01a2:b011
db dummyd_ca32[6353];
dw word_1c8e3; // 01a2:c8e3
dw word_1c8e5; // 01a2:c8e5
dw word_1c8e7; // 01a2:c8e7
dw word_1c8e9; // 01a2:c8e9
dw seg_1c8eb; // 01a2:c8eb
dw word_1c8ed; // 01a2:c8ed
dw word_1c8ef; // 01a2:c8ef
db dummyd_e311; // 01a2:c8f1
db dummyd_e312; // 01a2:c8f2
dw word_1c8f3; // 01a2:c8f3
dw word_1c8f5; // 01a2:c8f5
dw seg_1c8f7; // 01a2:c8f7
dw word_1c8f9; // 01a2:c8f9
db dummyd_e31b[184];
db dummyd_e3d3[32]; // 01a2:c9b3
db dummyd_e3f3[32]; // 01a2:c9d3
db dummyd_e413[32]; // 01a2:c9f3
db dummyd_e433[32]; // 01a2:ca13
db dummyd_e453[32]; // 01a2:ca33
db dummyd_e473[32]; // 01a2:ca53
db dummyd_e493[32]; // 01a2:ca73
db dummyd_e4b3[32]; // 01a2:ca93
db dummyd_e4d3[32]; // 01a2:cab3
db dummyd_e4f3[32]; // 01a2:cad3
db dummyd_e513[32]; // 01a2:caf3
db dummyd_e533[32]; // 01a2:cb13
db dummyd_e553[32]; // 01a2:cb33
db dummyd_e573[32]; // 01a2:cb53
db dummyd_e593[32]; // 01a2:cb73
db dummyd_e5b3[32]; // 01a2:cb93
db dummyd_e5d3[32]; // 01a2:cbb3
db dummyd_e5f3[32]; // 01a2:cbd3
db dummyd_e613[32]; // 01a2:cbf3
db dummyd_e633[32]; // 01a2:cc13
db dummyd_e653[32]; // 01a2:cc33
db dummyd_e673[32]; // 01a2:cc53
db dummyd_e693[32]; // 01a2:cc73
db dummyd_e6b3[32]; // 01a2:cc93
db dummyd_e6d3[32]; // 01a2:ccb3
db dummyd_e6f3[32]; // 01a2:ccd3
db dummyd_e713[32]; // 01a2:ccf3
db dummyd_e733[32]; // 01a2:cd13
db dummyd_e753[32]; // 01a2:cd33
db dummyd_e773[32]; // 01a2:cd53
db dummyd_e793[32]; // 01a2:cd73
db dummyd_e7b3[32]; // 01a2:cd93
db dummyd_e7d3[32]; // 01a2:cdb3
db dummyd_e7f3[32]; // 01a2:cdd3
db dummyd_e813[32]; // 01a2:cdf3
db dummyd_e833[32]; // 01a2:ce13
db dummyd_e853[32]; // 01a2:ce33
db dummyd_e873[32]; // 01a2:ce53
db dummyd_e893[32]; // 01a2:ce73
db dummyd_e8b3[32]; // 01a2:ce93
db dummyd_e8d3[32]; // 01a2:ceb3
db dummyd_e8f3[32]; // 01a2:ced3
db dummyd_e913[32]; // 01a2:cef3
db dummyd_e933[32]; // 01a2:cf13
db dummyd_e953[32]; // 01a2:cf33
db dummyd_e973[32]; // 01a2:cf53
db dummyd_e993[32]; // 01a2:cf73
db dummyd_e9b3[32]; // 01a2:cf93
db dummyd_e9d3[32]; // 01a2:cfb3
db dummyd_e9f3[32]; // 01a2:cfd3
db dummyd_ea13[32]; // 01a2:cff3
db dummyd_ea33[32]; // 01a2:d013
db dummyd_ea53[32]; // 01a2:d033
db dummyd_ea73[32]; // 01a2:d053
db dummyd_ea93[32]; // 01a2:d073
db dummyd_eab3[32]; // 01a2:d093
db dummyd_ead3[32]; // 01a2:d0b3
db dummyd_eaf3[32]; // 01a2:d0d3
db dummyd_eb13[32]; // 01a2:d0f3
db dummyd_eb33[32]; // 01a2:d113
db dummyd_eb53[32]; // 01a2:d133
db dummyd_eb73[32]; // 01a2:d153
db dummyd_eb93[32]; // 01a2:d173
db dummyd_ebb3; // 01a2:d193
db dummyd_ebb4; // 01a2:d194
db dummyd_ebb5; // 01a2:d195
db dummyd_ebb6; // 01a2:d196
db dummyd_ebb7; // 01a2:d197
db dummyd_ebb8; // 01a2:d198
db dummyd_ebb9; // 01a2:d199
db dummyd_ebba; // 01a2:d19a
db dummyd_ebbb; // 01a2:d19b
db dummyd_ebbc; // 01a2:d19c
db dummyd_ebbd; // 01a2:d19d
db dummyd_ebbe; // 01a2:d19e
db dummyd_ebbf; // 01a2:d19f
db dummyd_ebc0; // 01a2:d1a0
db dummyd_ebc1; // 01a2:d1a1
db dummyd_ebc2; // 01a2:d1a2
db dummyd_ebc3; // 01a2:d1a3
db dummyd_ebc4; // 01a2:d1a4
db dummyd_ebc5; // 01a2:d1a5
db dummyd_ebc6; // 01a2:d1a6
db dummyd_ebc7; // 01a2:d1a7
db dummyd_ebc8; // 01a2:d1a8
db dummyd_ebc9; // 01a2:d1a9
db dummyd_ebca; // 01a2:d1aa
db dummyd_ebcb; // 01a2:d1ab
db dummyd_ebcc; // 01a2:d1ac
db dummyd_ebcd; // 01a2:d1ad
db dummyd_ebce; // 01a2:d1ae
db dummyd_ebcf; // 01a2:d1af
dw seg_1dfd3; // 0848:0003
db dummyd_ebd2[32]; // 0848:0005
db dummyd_ebf2[32]; // 0848:0025
db dummyd_ec12[32]; // 0848:0045
db dummyd_ec32; // 0848:0065
db dummyd_ec33; // 0848:0066
db dummyd_ec34; // 0848:0067
db dummyd_ec35; // 0848:0068
db dummyd_ec36; // 0848:0069
db dummyd_ec37; // 0848:006a
db dummyd_ec38; // 0848:006b
db dummyd_ec39; // 0848:006c
db dummyd_ec3a; // 0848:006d
db dummyd_ec3b; // 0848:006e
db dummyd_ec3c; // 0848:006f
db dummyd_ec3d; // 0848:0070
db dummyd_ec3e; // 0848:0071
db dummyd_ec3f; // 0848:0072
db dummyd_ec40; // 0848:0073
db dummyd_ec41; // 0848:0074
db dummyd_ec42; // 0848:0075
db dummyd_ec43; // 0848:0076
db dummyd_ec44; // 0848:0077
db dummyd_ec45; // 0848:0078
db dummyd_ec46; // 0848:0079
db dummyd_ec47; // 0848:007a
db dummyd_ec48; // 0848:007b
db dummyd_ec49; // 0848:007c
db dummyd_ec4a; // 0848:007d
db dummyd_ec4b; // 0848:007e
db dummyd_ec4c; // 0848:007f
db dummyd_ec4d; // 0848:0080
db dummyd_ec4e; // 0848:0081
db dummyd_ec4f[64]; // 0848:008a
db dummyd_ec8f[12]; // 0848:00ca
db dummyd_ec9b[11]; // 0848:00d6
db dummyd_eca6[11]; // 0848:00e1
db dummyd_ecb1[11]; // 0848:00ec
db dummyd_ecbc[11]; // 0848:00f7
db dummyd_ecc7[18]; // 0848:0102
db dummyd_ecd9[16]; // 0848:0114
db dummyd_ece9[15]; // 0848:0124
db dummyd_ecf8[18]; // 0848:0133
db dummyd_ed0a[14]; // 0848:0145
db dummyd_ed18[18]; // 0848:0153
db dummyd_ed2a[23]; // 0848:0165
db dummyd_ed41[14]; // 0848:017c
db dummyd_ed4f[14]; // 0848:018a
db dummyd_ed5d[13]; // 0848:0198
db dummyd_ed6a[15]; // 0848:01a5
db dummyd_ed79[15]; // 0848:01b4
db dummyd_ed88[17]; // 0848:01c3
db dummyd_ed99[102]; // 0848:01d4
db dummyd_edff[14]; // 0848:023a
db dummyd_ee0d[21]; // 0848:0248
db dummyd_ee22[11]; // 0848:025d
db dummyd_ee2d[11]; // 0848:0268
db dummyd_ee38[12]; // 0848:0273
db dummyd_ee44[12]; // 0848:027f
db dummyd_ee50[12]; // 0848:028b
db dummyd_ee5c[13]; // 0848:0297
db dummyd_ee69[13]; // 0848:02a4
db dummyd_ee76[14]; // 0848:02b1
db dummyd_ee84[14]; // 0848:02bf
db dummyd_ee92[13]; // 0848:02cd
db dummyd_ee9f[13]; // 0848:02da
db dummyd_eeac[14]; // 0848:02e7
db dummyd_eeba[14]; // 0848:02f5
db dummyd_eec8[13]; // 0848:0303
db dummyd_eed5[13]; // 0848:0310
db dummyd_eee2[14]; // 0848:031d
db dummyd_eef0[14]; // 0848:032b
db dummyd_eefe[14]; // 0848:0339
db dummyd_ef0c[13]; // 0848:0347
db dummyd_ef19[11]; // 0848:0354
db dummyd_ef24[12]; // 0848:035f
db dummyd_ef30[12]; // 0848:036b
db dummyd_ef3c[32]; // 0848:0377
db dummyd_ef5c[32]; // 0848:0397
db dummyd_ef7c[32]; // 0848:03b7
db dummyd_ef9c[32]; // 0848:03d7
db dummyd_efbc[32]; // 0848:03f7
db dummyd_efdc[32]; // 0848:0417
db dummyd_effc[32]; // 0848:0437
db dummyd_f01c; // 0848:0457
db dummyd_f01d;
db dummyd_f01e;
db dummyd_f01f; // 0848:04c1
db dummyd_f020; // 0848:04c2
db dummyd_f021; // 0848:04c3
db dummyd_f022; // 0848:04c4
db dummyd_f023; // 0848:04ce
db dummyd_f024; // 0848:0504
db dummyd_f025; // 0848:05a1
db dummyd_f026; // 0848:0633
db dummyd_f027; // 0848:06dc
db dummyd_f028; // 0848:077b
db dummyd_f029; // 0848:07b2
db dummyd_f02a; // 0848:080a
db dummyd_f02b; // 0848:085f
db dummyd_f02c; // 0848:087a
db dummyd_f02d; // 0848:08e5
db dummyd_f02e; // 0848:095c
db dummyd_f02f; // 0848:0963
db dummyd_f030; // 0848:0a09
db dummyd_f031; // 0848:0a55
db dummyd_f032; // 0848:0acc
db dummyd_f033; // 0848:0acd
db dummyd_f034; // 0848:0b28
db dummyd_f035; // 0848:0b44
db dummyd_f036; // 0848:0bd1
db dummyd_f037; // 0848:0bf9
db dummyd_f038; // 0848:0c1c
db dummyd_f039; // 0848:0c85
db dummyd_f03a; // 0848:0d02
db dummyd_f03b; // 0848:0d0f
db dummyd_f03c; // 0848:0dee
db dummyd_f03d; // 0848:0dfc
db dummyd_f03e; // 0848:0e9f
db dummyd_f03f; // 0848:0f3e
db dummyd_f040; // 0848:0fbd
db dummyd_f041; // 0848:1005
db dummyd_f042; // 0848:1066
db dummyd_f043; // 0848:106c
db dummyd_f044; // 0848:106d
db dummyd_f045; // 0848:10f0
db dummyd_f046; // 0848:1126
db dummyd_f047; // 0848:116c
db dummyd_f048;
db dummyd_f049;
db dummyd_f04a;
db dummyd_f04b;
db dummyd_f04c;
db dummyd_f04d;
db dummyd_f04e;
db dummyd_f04f;
db dummyd_f050;
db dummyd_f051;
db unk_1f170; // 0876:0000
dw seg_1f171; // 0876:0001
dw dummyd_f055; // 0876:0003
db dummyd_f057;
dw seg_1f176; // 0876:0006
dw word_1f178; // 0876:0008
dw seg_1f17a; // 0876:000a
dw word_1f17c; // 0876:000c
dw seg_1f17e; // 0876:000e
dw word_1f180; // 0876:0010
dw seg_1f182; // 0876:0012
dw word_1f184; // 0876:0014
dw word_1f186; // 0876:0016
dw word_1f188; // 0876:0018
dw word_1f18a; // 0876:001a
dw word_1f18c; // 0876:001c
dw word_1f18e; // 0876:001e
dw word_1f190; // 0876:0020
dd off_1f194; // 0876:0024
dw word_1f198; // 0876:0028
dw word_1f19a; // 0876:002a
dw word_1f19c; // 0876:002c
dw word_1f19e; // 0876:002e
dw word_1f1a0; // 0876:0030
dw word_1f1a2; // 0876:0032
dw word_1f1a4; // 0876:0034
dw word_1f1a8; // 0876:0038
dw word_1f1aa; // 0876:003a
dw word_1f1ac; // 0876:003c
dw word_1f1ae; // 0876:003e
dw word_1f1b0; // 0876:0040
dw word_1f1b2; // 0876:0042
dw word_1f1b4; // 0876:0044
dw word_1f1b6; // 0876:0046
dw word_1f1b8; // 0876:0048
dw word_1f1bc; // 0876:004c
dw word_1f1be; // 0876:004e
db dummyd_f09c;
db dummyd_f09d;
dw word_1f1c2; // 0876:0052
dw word_1f1c4; // 0876:0054
dw word_1f1c6; // 0876:0056
dw word_1f1c8; // 0876:0058
dw word_1f1ca; // 0876:005a
dw word_1f1cc; // 0876:005c
dw word_1f1ce; // 0876:005e
dw word_1f1d0; // 0876:0060
dw word_1f1d2; // 0876:0062
dw word_1f1d4; // 0876:0064
dw word_1f1d6; // 0876:0066
db dummyd_f0b4;
db dummyd_f0b5;
db dummyd_f0b6;
db dummyd_f0b7;
db dummyd_f0b8;
db dummyd_f0b9;
dw word_1f1de; // 0876:006e
dw word_1f1e0; // 0876:0070
dw word_1f1e2; // 0876:0072
dw word_1f1e4; // 0876:0074
db dummyd_f0c2;
db dummyd_f0c3;
db dummyd_f0c4;
db dummyd_f0c5;
db dummyd_f0c6;
db dummyd_f0c7;
db dummyd_f0c8;
db dummyd_f0c9;
dw word_1f1ee; // 0876:007e
dw word_1f1f0; // 0876:0080
dw word_1f1f2; // 0876:0082
dw word_1f1f4; // 0876:0084
dw word_1f1f6; // 0876:0086
dw word_1f1f8; // 0876:0088
dw word_1f1fa; // 0876:008a
dw word_1f1fc; // 0876:008c
dw word_1f1fe; // 0876:008e
dw word_1f200; // 0876:0090
db dummyd_f0de;
db dummyd_f0df;
dw word_1f204; // 0876:0094
dw word_1f206; // 0876:0096
dw word_1f208; // 0876:0098
dw word_1f20a; // 0876:009a
dw word_1f20c; // 0876:009c
dw word_1f20e; // 0876:009e
dw word_1f210; // 0876:00a0
dw word_1f214; // 0876:00a4
dw word_1f216; // 0876:00a6
dw word_1f218; // 0876:00a8
db dummyd_f0f4;
db dummyd_f0f5;
db dummyd_f0f6;
db dummyd_f0f7;
dw word_1f21e; // 0876:00ae
dw word_1f220; // 0876:00b0
dw word_1f222; // 0876:00b2
dw word_1f224; // 0876:00b4
dw word_1f226; // 0876:00b6
db dummyd_f102;
db dummyd_f103;
db dummyd_f104;
db dummyd_f105;
db dummyd_f106;
db dummyd_f107;
db dummyd_f108;
db dummyd_f109;
db dummyd_f10a;
db dummyd_f10b;
db dummyd_f10c;
db dummyd_f10d;
db dummyd_f10e;
db dummyd_f10f;
db dummyd_f110;
db dummyd_f111;
db dummyd_f112;
db dummyd_f113;
db dummyd_f114;
db dummyd_f115;
db dummyd_f116;
db dummyd_f117;
db dummyd_f118;
db dummyd_f119;
db dummyd_f11a;
db dummyd_f11b;
db dummyd_f11c;
db dummyd_f11d;
dw word_1f244; // 0876:00d4
dw word_1f246; // 0876:00d6
dw word_1f248; // 0876:00d8
db unk_1f24a; // 0876:00da
db dummyd_f125;
db unk_1f24c; // 0876:00dc
db dummyd_f127;
db unk_1f24e; // 0876:00de
db dummyd_f129;
db unk_1f250; // 0876:00e0
db dummyd_f12b;
db dummyd_f12c;
db dummyd_f12d;
db dummyd_f12e;
db dummyd_f12f;
db dummyd_f130;
db dummyd_f131;
db dummyd_f132;
db dummyd_f133;
dw word_1f25a; // 0876:00ea
db dummyd_f136; // 0876:00ec
db dummyd_f137; // 0876:00ed
dw word_1f25e; // 0876:00ee
db dummyd_f13a;
db dummyd_f13b;
db unk_1f262; // 0876:00f2
db dummyd_f13d;
db unk_1f264; // 0876:00f4
db dummyd_f13f;
db dummyd_f140;
db dummyd_f141;
db dummyd_f142;
db dummyd_f143;
db dummyd_f144;
db dummyd_f145;
db dummyd_f146;
db dummyd_f147;
db dummyd_f148;
db byte_1f26f; // 0876:00ff
db dummyd_f14a[32]; // 0876:0100
db dummyd_f16a[32]; // 0876:0120
db dummyd_f18a[32]; // 0876:0140
db dummyd_f1aa[32]; // 0876:0160
db dummyd_f1ca;
db dummyd_f1cb;
db dummyd_f1cc;
db dummyd_f1cd;
db dummyd_f1ce;
db dummyd_f1cf;
db dummyd_f1d0;
db dummyd_f1d1;
db dummyd_f1d2;
db dummyd_f1d3;
db dummyd_f1d4;
db dummyd_f1d5;
db dummyd_f1d6;
db dummyd_f1d7;
db dummyd_f1d8;
db dummyd_f1d9;
db unk_1f300; // 0876:0190
db dummyd_f1db[32]; // 0876:0191
db dummyd_f1fb;
db dummyd_f1fc;
db dummyd_f1fd;
db dummyd_f1fe;
db dummyd_f1ff;
db dummyd_f200;
db dummyd_f201;
db dummyd_f202;
db dummyd_f203;
db dummyd_f204;
db dummyd_f205;
db dummyd_f206;
db dummyd_f207;
db dummyd_f208;
db dummyd_f209;
db dummyd_f20a;
db dummyd_f20b;
db dummyd_f20c;
db dummyd_f20d;
db dummyd_f20e;
db dummyd_f20f;
db dummyd_f210;
db dummyd_f211;
db dummyd_f212;
db dummyd_f213;
db dummyd_f214;
db dummyd_f215;
db dummyd_f216;
db dummyd_f217;
db dummyd_f218;
db dummyd_f219;
db dummyd_f21a[32]; // 0df6:0000
db dummyd_f23a;
db dummyd_f23b;
db dummyd_f23c;
db dummyd_f23d;
db dummyd_f23e;
db dummyd_f23f;
db dummyd_f240;
db dummyd_f241;
dw seg_1f368; // 0df6:0028
dw word_1f36a; // 0df6:002a
dw word_1f36c; // 0df6:002c
db dummyd_f248;
db dummyd_f249;
db dummyd_f24a;
db dummyd_f24b;
dw word_1f372; // 0df6:0032
dw word_1f378; // 0df6:0038
dw word_1f37a; // 0df6:003a
dw word_1f37c; // 0df6:003c
dw word_1f37e; // 0df6:003e
dw word_1f380; // 0df6:0040
dw word_1f382; // 0df6:0042
db dummyd_f25a;
db dummyd_f25b;
dw word_1f386; // 0df6:0046
dw word_1f388; // 0df6:0048
dw word_1f38a; // 0df6:004a
dw word_1f38c; // 0df6:004c
db byte_1f38e; // 0df6:004e
db byte_1f38f; // 0df6:004f
dw word_1f390; // 0df6:0050
dw word_1f392; // 0df6:0052
dw word_1f394; // 0df6:0054
dw word_1f396; // 0df6:0056
dw word_1f398; // 0df6:0058
db dummyd_f270;
db dummyd_f271;
db dummyd_f272;
db dummyd_f273;
dw word_1f39e; // 0df6:005e
dw word_1f3a0; // 0df6:0060
dw word_1f3a2; // 0df6:0062
db byte_1f3a4; // 0df6:0064
db dummyd_f27b; // 0df6:0065
db dummyd_f27c;
db dummyd_f27d;
db dummyd_f27e;
db dummyd_f27f;
dw word_1f3aa; // 0df6:006a
dw word_1f3ac; // 0df6:006c
db dummyd_f284;
db dummyd_f285;
db dummyd_f286;
db dummyd_f287;
db dummyd_f288; // 0df6:0072
db dummyd_f289;
dw word_1f3b4; // 0df6:0074
dw word_1f3b6; // 0df6:0076
dw word_1f3b8; // 0df6:0078
dw word_1f3ba; // 0df6:007a
dw word_1f3bc; // 0df6:007c
dw word_1f3be; // 0df6:007e
dw word_1f3c0; // 0df6:0080
dw word_1f3c2; // 0df6:0082
dw word_1f3c4; // 0df6:0084
dw word_1f3c6; // 0df6:0086
dw word_1f3c8; // 0df6:0088
db dummyd_f2a0;
db dummyd_f2a1;
db dummyd_f2a2;
db dummyd_f2a3;
dw word_1f3ce; // 0df6:008e
dw word_1f3d0; // 0df6:0090
dw word_1f3d2; // 0df6:0092
db dummyd_f2aa;
db dummyd_f2ab;
dw word_1f3d6; // 0df6:0096
db dummyd_f2ae;
db dummyd_f2af;
db dummyd_f2b0;
db dummyd_f2b1;
db dummyd_f2b2;
db dummyd_f2b3;
dw word_1f3de; // 0df6:009e
dw word_1f3e0; // 0df6:00a0
dw word_1f3e2; // 0df6:00a2
dw word_1f3e4; // 0df6:00a4
db byte_1f3e6; // 0df6:00a6
dw word_1f3e8; // 0df6:00a8
dw word_1f3ea; // 0df6:00aa
dw word_1f3ec; // 0df6:00ac
db dummyd_f2c3[32]; // 0df6:00ae
db dummyd_f2e3[32]; // 0df6:00ce
db dummyd_f303[32]; // 0df6:00ee
db dummyd_f323;
db dummyd_f324;
db dummyd_f325;
db dummyd_f326;
db dummyd_f327;
db dummyd_f328;
db dummyd_f329;
db dummyd_f32a;
db dummyd_f32b;
db dummyd_f32c;
db dummyd_f32d;
db dummyd_f32e;
db dummyd_f32f;
db dummyd_f330;
db dummyd_f331;
db dummyd_f332;
db dummyd_f333;
db dummyd_f334;
db dummyd_f335;
db dummyd_f336;
db dummyd_f337;
db dummyd_f338;
db dummyd_f339;
db dummyd_f33a;
dw word_1f466; // 0df6:0126
db dummyd_f33d[32]; // 0df6:0128
db dummyd_f35d[32]; // 0df6:0148
db dummyd_f37d;
db dummyd_f37e;
db dummyd_f37f;
db dummyd_f380;
db dummyd_f381;
db dummyd_f382;
db dummyd_f383;
db dummyd_f384;
db dummyd_f385;
db dummyd_f386;
db dummyd_f387;
db dummyd_f388;
db dummyd_f389;
db dummyd_f38a;
dw word_1f4b6; // 0df6:0176
db dummyd_f38d[32]; // 0df6:0178
db dummyd_f3ad[32]; // 0df6:0198
db dummyd_f3cd[32]; // 0df6:01b8
db dummyd_f3ed[32]; // 0df6:01d8
db dummyd_f40d[32]; // 0df6:01f8
db unk_1f558; // 0df6:0218
db dummyd_f42e[32]; // 0df6:0219
db dummyd_f44e[32]; // 0df6:0239
db dummyd_f46e[32]; // 0df6:0259
db dummyd_f48e[32]; // 0df6:0279
db dummyd_f4ae[32]; // 0df6:0299
db dummyd_f4ce[32]; // 0df6:02b9
db dummyd_f4ee[32]; // 0df6:02d9
db dummyd_f50e[32]; // 0df6:02f9
db dummyd_f52e[32]; // 0df6:0319
db dummyd_f54e[32]; // 0df6:0339
db dummyd_f56e[32]; // 0df6:0359
db dummyd_f58e[32]; // 0df6:0379
db dummyd_f5ae;
db dummyd_f5af;
db dummyd_f5b0;
db dummyd_f5b1;
db dummyd_f5b2;
db dummyd_f5b3;
db dummyd_f5b4;
db dummyd_f5b5;
db dummyd_f5b6;
db dummyd_f5b7;
db dummyd_f5b8;
db dummyd_f5b9;
db dummyd_f5ba;
dw word_1f6e6; // 0df6:03a6
dw word_1f6e8; // 0df6:03a8
dw word_1f6ea; // 0df6:03aa
dw word_1f6ec; // 0df6:03ac
dw word_1f6ee; // 0df6:03ae
dw word_1f6f0; // 0df6:03b0
dw word_1f6f2; // 0df6:03b2
dw word_1f6f4; // 0df6:03b4
dw word_1f6f6; // 0df6:03b6
db dummyd_f5cd;
db dummyd_f5ce;
dw word_1f6fa; // 0df6:03ba
dw word_1f6fc; // 0df6:03bc
dw word_1f700; // 0df6:03c0
dw word_1f702; // 0df6:03c2
dw word_1f704; // 0df6:03c4
dw word_1f706; // 0df6:03c6
dw word_1f708; // 0df6:03c8
dw word_1f70a; // 0df6:03ca
dw word_1f70c; // 0df6:03cc
dw word_1f70e; // 0df6:03ce
dw word_1f710; // 0df6:03d0
dw word_1f714; // 0df6:03d4
db dummyd_f5e7;
db dummyd_f5e8;
db dummyd_f5e9;
db dummyd_f5ea;
dw word_1f71a; // 0df6:03da
dw word_1f71c; // 0df6:03dc
db dummyd_f5ef;
db dummyd_f5f0;
db dummyd_f5f1;
db dummyd_f5f2;
db byte_1f722; // 0df6:03e2
db byte_1f723; // 0df6:03e3
db byte_1f724; // 0df6:03e4
db byte_1f725; // 0df6:03e5
db byte_1f726; // 0df6:03e6
dw seg_1f727; // 0df6:03e7
dw word_1f72a; // 0df6:03ea
dw word_1f72c; // 0df6:03ec
dw word_1f72e; // 0df6:03ee
dw word_1f730; // 0df6:03f0
dw word_1f732; // 0df6:03f2
dw word_1f734; // 0df6:03f4
dd off_1f736; // 0df6:03f6
db dummyd_f60a;
db dummyd_f60b;
db dummyd_f60c;
db dummyd_f60d;
db dummyd_f60e;
db byte_1f73f; // 0df6:03ff
db byte_1f740; // 0df6:0400
db byte_1f741; // 0df6:0401
db byte_1f742; // 0df6:0402
db dummyd_f613;
db dummyd_f614;
db byte_1f745; // 0df6:0405
db byte_1f746; // 0df6:0406
db byte_1f747; // 0df6:0407
db dummyd_f618;
db byte_1f749; // 0df6:0409
db byte_1f74c; // 0df6:040c
db byte_1f74e; // 0df6:040e
db byte_1f74f; // 0df6:040f
db byte_1f750; // 0df6:0410
db byte_1f754; // 0df6:0414
db byte_1f755; // 0df6:0415
db byte_1f756; // 0df6:0416
db byte_1f757; // 0df6:0417
db byte_1f758; // 0df6:0418
db byte_1f759; // 0df6:0419
db byte_1f75a; // 0df6:041a
db byte_1f75b; // 0df6:041b
db byte_1f75c; // 0df6:041c
db byte_1f75d; // 0df6:041d
db byte_1f75e; // 0df6:041e
db byte_1f75f; // 0df6:041f
db byte_1f760; // 0df6:0420
db byte_1f761; // 0df6:0421
db byte_1f762; // 0df6:0422
db byte_1f763; // 0df6:0423
db byte_1f764; // 0df6:0424
db byte_1f765; // 0df6:0425
db byte_1f766; // 0df6:0426
db byte_1f768; // 0df6:0428
db byte_1f769; // 0df6:0429
db byte_1f76a; // 0df6:042a
db byte_1f76b; // 0df6:042b
db byte_1f76c; // 0df6:042c
db byte_1f76d; // 0df6:042d
db byte_1f76e; // 0df6:042e
db byte_1f76f; // 0df6:042f
db byte_1f770; // 0df6:0430
db byte_1f771; // 0df6:0431
db byte_1f772; // 0df6:0432
db byte_1f773; // 0df6:0433
db byte_1f774; // 0df6:0434
db byte_1f775; // 0df6:0435
db byte_1f776; // 0df6:0436
db byte_1f777; // 0df6:0437
db byte_1f778; // 0df6:0438
db byte_1f779; // 0df6:0439
db byte_1f77a; // 0df6:043a
db byte_1f77b; // 0df6:043b
db byte_1f77c; // 0df6:043c
db byte_1f77d; // 0df6:043d
db byte_1f77e; // 0df6:043e
db byte_1f77f; // 0df6:043f
db byte_1f780; // 0df6:0440
db dummyd_f64a;
db dummyd_f64b;
db dummyd_f64c;
db dummyd_f64d;
db dummyd_f64e;
db dummyd_f64f;
db dummyd_f650;
db dummyd_f651;
db dummyd_f652;
db dummyd_f653;
db dummyd_f654;
db dummyd_f655;
db dummyd_f656;
db dummyd_f657;
db dummyd_f658;
db dummyd_f659;
db dummyd_f65a;
db dummyd_f65b;
db dummyd_f65c;
db dummyd_f65d;
db byte_1f795; // 0df6:0455
db byte_1f796; // 0df6:0456
db byte_1f797; // 0df6:0457
db byte_1f798; // 0df6:0458
db byte_1f799; // 0df6:0459
db byte_1f79a; // 0df6:045a
db dummyd_f664[32]; // 0df6:045b
db byte_1f7bb; // 0df6:047b
db dummyd_f685;
db byte_1f7bd; // 0df6:047d
db byte_1f7c0; // 0df6:0480
db byte_1f7c1; // 0df6:0481
db byte_1f7c2; // 0df6:0482
db dummyd_f68a[32]; // 0df6:0483
db dummyd_f6aa[32]; // 0df6:04a3
db dummyd_f6ca; // 0df6:04c3
db dummyd_f6cb; // 0df6:04c4
db dummyd_f6cc; // 0df6:04c5
db dummyd_f6cd; // 0df6:04c6
db dummyd_f6ce; // 0df6:04c7
db dummyd_f6cf; // 0df6:04c8
db dummyd_f6d0; // 0df6:04c9
db dummyd_f6d1; // 0df6:04ca
db dummyd_f6d2; // 0df6:04cb
db dummyd_f6d3; // 0df6:04cc
db dummyd_f6d4; // 0df6:04cd
db dummyd_f6d5; // 0df6:04ce
db dummyd_f6d6; // 0df6:04cf
db dummyd_f6d7; // 0df6:04d0
db dummyd_f6d8; // 0df6:04d1
db dummyd_f6d9; // 0df6:04d2
db dummyd_f6da; // 0df6:04d3
db dummyd_f6db; // 0df6:04d4
db dummyd_f6dc; // 0df6:04d5
db dummyd_f6dd; // 0df6:04d6
db byte_1f817; // 0df6:04d7
db byte_1f818; // 0df6:04d8
db byte_1f819; // 0df6:04d9
db dummyd_f6e1;
db byte_1f81b; // 0df6:04db
db dummyd_f6e3;
db byte_1f81d; // 0df6:04dd
db byte_1f81e; // 0df6:04de
db byte_1f81f; // 0df6:04df
db byte_1f820; // 0df6:04e0
db byte_1f821; // 0df6:04e1
db byte_1f822; // 0df6:04e2
db byte_1f824; // 0df6:04e4
db byte_1f825; // 0df6:04e5
db byte_1f826; // 0df6:04e6
db byte_1f827; // 0df6:04e7
db dummyd_f6ee;
db byte_1f829; // 0df6:04e9
db byte_1f82a; // 0df6:04ea
db byte_1f82b; // 0df6:04eb
db byte_1f82c; // 0df6:04ec
db byte_1f82d; // 0df6:04ed
db byte_1f82e; // 0df6:04ee
db byte_1f82f; // 0df6:04ef
db byte_1f830; // 0df6:04f0
dd off_1f831; // 0df6:04f1
db byte_1f835; // 0df6:04f5
db byte_1f836; // 0df6:04f6
db byte_1f837; // 0df6:04f7
db dummyd_f6fe;
db byte_1f839; // 0df6:04f9
db byte_1f83a; // 0df6:04fa
db byte_1f83b; // 0df6:04fb
dd dword_1f83c; // 0df6:04fc
db byte_1f840; // 0df6:0500
db byte_1f841; // 0df6:0501
db byte_1f842; // 0df6:0502
db byte_1f843; // 0df6:0503
db byte_1f844; // 0df6:0504
db byte_1f845; // 0df6:0505
db byte_1f846; // 0df6:0506
db byte_1f847; // 0df6:0507
db byte_1f848; // 0df6:0508
db byte_1f849; // 0df6:0509
db byte_1f84a; // 0df6:050a
db byte_1f84b; // 0df6:050b
db byte_1f84c; // 0df6:050c
db byte_1f850; // 0df6:0510
db byte_1f851; // 0df6:0511
db byte_1f852; // 0df6:0512
db byte_1f853; // 0df6:0513
db byte_1f854; // 0df6:0514
db byte_1f855; // 0df6:0515
db byte_1f856; // 0df6:0516
db byte_1f857; // 0df6:0517
db dummyd_f71b;
db dummyd_f71c;
db byte_1f85a; // 0df6:051a
db byte_1f85b; // 0df6:051b
db byte_1f85c; // 0df6:051c
db byte_1f85d; // 0df6:051d
db byte_1f85e; // 0df6:051e
db byte_1f85f; // 0df6:051f
db byte_1f860; // 0df6:0520
db byte_1f861; // 0df6:0521
db byte_1f862; // 0df6:0522
db byte_1f863; // 0df6:0523
db byte_1f864; // 0df6:0524
db byte_1f865; // 0df6:0525
db byte_1f866; // 0df6:0526
db byte_1f867; // 0df6:0527
dw word_1f868; // 0df6:0528
dw word_1f86a; // 0df6:052a
db dummyd_f72f; // 0df6:052c
db dummyd_f730;
db dummyd_f731; // 0df6:052e
db dummyd_f732; // 0df6:052f
dw word_1f870; // 0df6:0530
db byte_1f872; // 0df6:0532
db byte_1f873; // 0df6:0533
db byte_1f874; // 0df6:0534
db dummyd_f738;
db dummyd_f739;
db dummyd_f73a;
db byte_1f878; // 0df6:0538
db byte_1f879; // 0df6:0539
db byte_1f87a; // 0df6:053a
db byte_1f87b; // 0df6:053b
db byte_1f87c; // 0df6:053c
db byte_1f87d; // 0df6:053d
db byte_1f87e; // 0df6:053e
db byte_1f87f; // 0df6:053f
db byte_1f880; // 0df6:0540
db dummyd_f744;
dw seg_1f882; // 0df6:0542
db byte_1f884; // 0df6:0544
db byte_1f885; // 0df6:0545
db byte_1f886; // 0df6:0546
db byte_1f887; // 0df6:0547
db dummyd_f74b;
db dummyd_f74c;
dd off_1f88a; // 0df6:054a
dw word_1f88e; // 0df6:054e
dw word_1f890; // 0df6:0550
dw word_1f892; // 0df6:0552
dw word_1f894; // 0df6:0554
dw word_1f896; // 0df6:0556
dw word_1f898; // 0df6:0558
dw word_1f89a; // 0df6:055a
dw word_1f89c; // 0df6:055c
dw word_1f89e; // 0df6:055e
dw word_1f8a0; // 0df6:0560
dw seg_1f8a2; // 0df6:0562
dw seg_1f8a4; // 0df6:0564
dw seg_1f8a6; // 0df6:0566
dw seg_1f8a8; // 0df6:0568
dw seg_1f8aa; // 0df6:056a
dw seg_1f8ac; // 0df6:056c
dw seg_1f8ae; // 0df6:056e
dw seg_1f8b0; // 0df6:0570
dw seg_1f8b2; // 0df6:0572
dw seg_1f8b4; // 0df6:0574
dw seg_1f8b6; // 0df6:0576
db unk_1f8b8; // 0df6:0578
db dummyd_f77c;
db dummyd_f77d;
db dummyd_f77e;
dw word_1f8bc; // 0df6:057c
dw word_1f8be; // 0df6:057e
dw word_1f8c0; // 0df6:0580
dw word_1f8c2; // 0df6:0582
db dummyd_f787;
db byte_1f8c5; // 0df6:0585
db byte_1f8c6; // 0df6:0586
db byte_1f8c7; // 0df6:0587
dd off_1f8c8; // 0df6:0588
dw word_1f8d0; // 0df6:0590
db unk_1f8d2; // 0df6:0592
db dummyd_f792; // 0df6:0593
dw word_1f8d4; // 0df6:0594
dw word_1f8d6; // 0df6:0596
dw word_1f8d8; // 0df6:0598
dw word_1f8da; // 0df6:059a
dw word_1f8dc; // 0df6:059c
db byte_1f8de; // 0df6:059e
db byte_1f8df; // 0df6:059f
db byte_1f8e0; // 0df6:05a0
db byte_1f8e1; // 0df6:05a1
db byte_1f8e2; // 0df6:05a2
db byte_1f8e3; // 0df6:05a3
db byte_1f8e4; // 0df6:05a4
db byte_1f8e5; // 0df6:05a5
dw word_1f8e6; // 0df6:05a6
dw word_1f8e8; // 0df6:05a8
dw word_1f8ea; // 0df6:05aa
dw word_1f8ec; // 0df6:05ac
dw word_1f8ee; // 0df6:05ae
dw word_1f8f0; // 0df6:05b0
dw word_1f8f2; // 0df6:05b2
dw seg_1f8f4; // 0df6:05b4
dw seg_1f8f6; // 0df6:05b6
dd off_1f8f8; // 0df6:05b8
dw word_1f8fc; // 0df6:05bc
dd off_1f8fe; // 0df6:05be
dw word_1f902; // 0df6:05c2
db dummyd_f7c3;
db dummyd_f7c4;
db dummyd_f7c5;
db dummyd_f7c6;
db dummyd_f7c7;
db dummyd_f7c8;
db dummyd_f7c9;
db dummyd_f7ca;
dd dword_1f90c; // 0df6:05cc
dw word_1f910; // 0df6:05d0
dw word_1f912; // 0df6:05d2
dw word_1f914; // 0df6:05d4
dw word_1f916; // 0df6:05d6
db dummyd_f7d7;
db byte_1f919; // 0df6:05d9
db byte_1f91a; // 0df6:05da
db byte_1f91b; // 0df6:05db
db dummyd_f7db;
db dummyd_f7dc;
dw word_1f91e; // 0df6:05de
char aloadingdataple[26]; // 0df6:05e0
char aeplaceadiskind[40]; // 0df6:05fa
char an[2]; // 0df6:0622
char ao9or[8]; // 0df6:0624
char asctostartatthe[41]; // 0df6:062c
db dummyd_f854[32]; // 0df6:0655
db dummyd_f874[32]; // 0df6:0675
db dummyd_f894[32]; // 0df6:0695
db dummyd_f8b4[32]; // 0df6:06b5
db dummyd_f8d4[32]; // 0df6:06d5
db dummyd_f8f4[32]; // 0df6:06f5
db dummyd_f914[32]; // 0df6:0715
db dummyd_f934[32]; // 0df6:0735
db dummyd_f954[32]; // 0df6:0755
db dummyd_f974[32]; // 0df6:0775
db dummyd_f994[32]; // 0df6:0795
db dummyd_f9b4[32]; // 0df6:07b5
db dummyd_f9d4[32]; // 0df6:07d5
db dummyd_f9f4[32]; // 0df6:07f5
db dummyd_fa14[32]; // 0df6:0815
db dummyd_fa34[32]; // 0df6:0835
db dummyd_fa54[32]; // 0df6:0855
db dummyd_fa74; // 0df6:0875
db dummyd_fa75;
db dummyd_fa76; // 0df6:0877
db dummyd_fa77;
db dummyd_fa78; // 0df6:0879
db dummyd_fa79;
db dummyd_fa7a; // 0df6:087b
db dummyd_fa7b;
db dummyd_fa7c; // 0df6:087d
db dummyd_fa7d;
db dummyd_fa7e;
db dummyd_fa7f;
db dummyd_fa80;
db dummyd_fa81;
db dummyd_fa82; // 0df6:0883
db dummyd_fa83;
db dummyd_fa84; // 0df6:0885
db dummyd_fa85;
db dummyd_fa86; // 0df6:0887
db dummyd_fa87;
db dummyd_fa88;
db dummyd_fa89;
db dummyd_fa8a; // 0df6:088b
db dummyd_fa8b;
db dummyd_fa8c; // 0df6:088d
db dummyd_fa8d;
db dummyd_fa8e;
db dummyd_fa8f;
db dummyd_fa90;
dw word_1fbd2; // 0df6:0892
db dummyd_fa93; // 0df6:0894
db dummyd_fa94;
db dummyd_fa95; // 0df6:0896
dd dummyd_fa96; // 0df6:0897
db dummyd_fa9a;
db dummyd_fa9b;
db dummyd_fa9c;
db dummyd_fa9d;
db dummyd_fa9e;
db dummyd_fa9f;
dd dummyd_faa0; // 0df6:08a1
dw dummyd_faa4; // 0df6:08a5
dw dummyd_faa6; // 0df6:08a7
dw dummyd_faa8; // 0df6:08a9
db dummyd_faaa;
db dummyd_faab;
db dummyd_faac;
db dummyd_faad;
db dummyd_faae;
db dummyd_faaf;
dd dummyd_fab0; // 0df6:08b1
dw dummyd_fab4; // 0df6:08b5
dw dummyd_fab6; // 0df6:08b7
dw dummyd_fab8; // 0df6:08b9
dw dummyd_faba; // 0df6:08bb
db dummyd_fabc;
db dummyd_fabd;
db dummyd_fabe;
db dummyd_fabf;
dd dummyd_fac0; // 0df6:08c1
dw dummyd_fac4; // 0df6:08c5
dw dummyd_fac6; // 0df6:08c7
dw dummyd_fac8; // 0df6:08c9
dw dummyd_faca; // 0df6:08cb
db dummyd_facc;
db dummyd_facd;
db dummyd_face;
db dummyd_facf;
dd dummyd_fad0; // 0df6:08d1
dw dummyd_fad4; // 0df6:08d5
dw dummyd_fad6; // 0df6:08d7
dw dummyd_fad8; // 0df6:08d9
dw dummyd_fada; // 0df6:08db
db dummyd_fadc;
db dummyd_fadd;
db dummyd_fade;
db dummyd_fadf;
dd dummyd_fae0; // 0df6:08e1
dw dummyd_fae4; // 0df6:08e5
dw dummyd_fae6; // 0df6:08e7
dw dummyd_fae8; // 0df6:08e9
dw dummyd_faea; // 0df6:08eb
db dummyd_faec;
db dummyd_faed;
db dummyd_faee;
db dummyd_faef;
dd dummyd_faf0; // 0df6:08f1
dw dummyd_faf4; // 0df6:08f5
dw dummyd_faf6; // 0df6:08f7
dw dummyd_faf8; // 0df6:08f9
dw dummyd_fafa; // 0df6:08fb
db dummyd_fafc;
db dummyd_fafd;
db dummyd_fafe;
db dummyd_faff;
dd dummyd_fb00; // 0df6:0901
db dummyd_fb04;
db dummyd_fb05;
db dummyd_fb06;
db dummyd_fb07;
db dummyd_fb08;
db dummyd_fb09;
db dummyd_fb0a;
db dummyd_fb0b;
db dummyd_fb0c;
db dummyd_fb0d;
db dummyd_fb0e;
db dummyd_fb0f;
dd dummyd_fb10; // 0df6:0911
db dummyd_fb14;
db dummyd_fb15;
db dummyd_fb16;
db dummyd_fb17;
db dummyd_fb18;
db dummyd_fb19;
db dummyd_fb1a;
db dummyd_fb1b;
db dummyd_fb1c;
db dummyd_fb1d;
db dummyd_fb1e;
db dummyd_fb1f;
dd dummyd_fb20; // 0df6:0921
db dummyd_fb24[32]; // 0df6:0925
db dummyd_fb44[32]; // 0df6:0945
db dummyd_fb64[32]; // 0df6:0965
db dummyd_fb84[32]; // 0df6:0985
db dummyd_fba4;
db dummyd_fba5;
db dummyd_fba6;
db dummyd_fba7;
db dummyd_fba8;
db dummyd_fba9;
db dummyd_fbaa;
db dummyd_fbab;
db dummyd_fbac;
db dummyd_fbad;
db dummyd_fbae;
db dummyd_fbaf;
db dummyd_fbb0;
db dummyd_fbb1;
db dummyd_fbb2;
db dummyd_fbb3;
db dummyd_fbb4;
db dummyd_fbb5;
db dummyd_fbb6;
db dummyd_fbb7;
db dummyd_fbb8;
db dummyd_fbb9;
db dummyd_fbba;
dd off_1fcfc; // 0df6:09bc
dw word_1fd00; // 0df6:09c0
db dummyd_fbc1[32]; // 0df6:09c2
db dummyd_fbe1[32]; // 0df6:09e2
db dummyd_fc01[32]; // 0df6:0a02
db dummyd_fc21[32]; // 0df6:0a22
db dummyd_fc41[32]; // 0df6:0a42
db dummyd_fc61[32]; // 0df6:0a62
db dummyd_fc81[32]; // 0df6:0a82
db dummyd_fca1[32]; // 0df6:0aa2
db dummyd_fcc1[32]; // 0df6:0ac2
db dummyd_fce1[32]; // 0df6:0ae2
db dummyd_fd01[32]; // 0df6:0b02
db dummyd_fd21[32]; // 0df6:0b22
db dummyd_fd41[32]; // 0df6:0b42
db dummyd_fd61[32]; // 0df6:0b62
db dummyd_fd81[32]; // 0df6:0b82
db dummyd_fda1[32]; // 0df6:0ba2
db dummyd_fdc1[32]; // 0df6:0bc2
db dummyd_fde1[32]; // 0df6:0be2
db dummyd_fe01[32]; // 0df6:0c02
db dummyd_fe21[32]; // 0df6:0c22
db dummyd_fe41[32]; // 0df6:0c42
db dummyd_fe61[32]; // 0df6:0c62
db dummyd_fe81[32]; // 0df6:0c82
db dummyd_fea1[32]; // 0df6:0ca2
db dummyd_fec1[32]; // 0df6:0cc2
db dummyd_fee1[32]; // 0df6:0ce2
db dummyd_ff01[32]; // 0df6:0d02
db dummyd_ff21;
db dummyd_ff22;
db dummyd_ff23;
db dummyd_ff24;
db dummyd_ff25;
db dummyd_ff26;
db dummyd_ff27;
db dummyd_ff28;
db dummyd_ff29;
db dummyd_ff2a;
db byte_2006c; // 0df6:0d2c
db dummyd_ff2c;
db dummyd_ff2d;
db dummyd_ff2e;
db dummyd_ff2f;
db byte_20071; // 0df6:0d31
db dummyd_ff31[32]; // 0df6:0d32
db dummyd_ff51;
db dummyd_ff52;
db dummyd_ff53;
db dummyd_ff54;
db dummyd_ff55;
db byte_20097; // 0df6:0d57
db dummyd_ff57[32]; // 0df6:0d58
db dummyd_ff77[32]; // 0df6:0d78
db dummyd_ff97[32]; // 0df6:0d98
db dummyd_ffb7[32]; // 0df6:0db8
db dummyd_ffd7[32]; // 0df6:0dd8
db dummyd_fff7[32]; // 0df6:0df8
db dummyd_10017[32]; // 0df6:0e18
db dummyd_10037[32]; // 0df6:0e38
db dummyd_10057[32]; // 0df6:0e58
db dummyd_10077[32]; // 0df6:0e78
db dummyd_10097[32]; // 0df6:0e98
db dummyd_100b7[32]; // 0df6:0eb8
db dummyd_100d7;
db dummyd_100d8;
db dummyd_100d9;
db dummyd_100da;
db dummyd_100db;
db dummyd_100dc;
db dummyd_100dd;
db dummyd_100de;
db dummyd_100df;
db dummyd_100e0;
db dummyd_100e1;
db dummyd_100e2;
db dummyd_100e3;
db dummyd_100e4;
dw word_20226; // 0df6:0ee6
dw word_20228; // 0df6:0ee8
db dummyd_100e9[32]; // 0df6:0eea
db dummyd_10109[32]; // 0df6:0f0a
db dummyd_10129[32]; // 0df6:0f2a
db dummyd_10149[32]; // 0df6:0f4a
db dummyd_10169[32]; // 0df6:0f6a
db dummyd_10189[32]; // 0df6:0f8a
db dummyd_101a9[32]; // 0df6:0faa
db dummyd_101c9[32]; // 0df6:0fca
db dummyd_101e9[32]; // 0df6:0fea
db dummyd_10209[32]; // 0df6:100a
db dummyd_10229[32]; // 0df6:102a
db dummyd_10249[32]; // 0df6:104a
db dummyd_10269[32]; // 0df6:106a
db dummyd_10289[32]; // 0df6:108a
db dummyd_102a9[32]; // 0df6:10aa
db dummyd_102c9[32]; // 0df6:10ca
db dummyd_102e9[32]; // 0df6:10ea
db dummyd_10309[32]; // 0df6:110a
db dummyd_10329[32]; // 0df6:112a
db dummyd_10349[32]; // 0df6:114a
db dummyd_10369[32]; // 0df6:116a
db dummyd_10389[32]; // 0df6:118a
db dummyd_103a9[32]; // 0df6:11aa
db dummyd_103c9[32]; // 0df6:11ca
db dummyd_103e9[32]; // 0df6:11ea
db dummyd_10409[32]; // 0df6:120a
db dummyd_10429[32]; // 0df6:122a
db dummyd_10449[32]; // 0df6:124a
db dummyd_10469[32]; // 0df6:126a
db dummyd_10489[32]; // 0df6:128a
db dummyd_104a9[32]; // 0df6:12aa
db dummyd_104c9[32]; // 0df6:12ca
db dummyd_104e9[32]; // 0df6:12ea
db dummyd_10509[32]; // 0df6:130a
db dummyd_10529[32]; // 0df6:132a
db dummyd_10549[32]; // 0df6:134a
db dummyd_10569[32]; // 0df6:136a
db dummyd_10589[32]; // 0df6:138a
db dummyd_105a9[32]; // 0df6:13aa
db dummyd_105c9[32]; // 0df6:13ca
db dummyd_105e9[32]; // 0df6:13ea
db dummyd_10609[32]; // 0df6:140a
db dummyd_10629[32]; // 0df6:142a
db dummyd_10649[32]; // 0df6:144a
db dummyd_10669[32]; // 0df6:146a
db dummyd_10689[32]; // 0df6:148a
db dummyd_106a9[32]; // 0df6:14aa
db dummyd_106c9[32]; // 0df6:14ca
db dummyd_106e9[32]; // 0df6:14ea
db dummyd_10709[32]; // 0df6:150a
db dummyd_10729[32]; // 0df6:152a
db dummyd_10749[32]; // 0df6:154a
db dummyd_10769[32]; // 0df6:156a
db dummyd_10789[32]; // 0df6:158a
db dummyd_107a9[32]; // 0df6:15aa
db dummyd_107c9[32]; // 0df6:15ca
db dummyd_107e9[32]; // 0df6:15ea
db dummyd_10809[32]; // 0df6:160a
db dummyd_10829[32]; // 0df6:162a
db dummyd_10849[32]; // 0df6:164a
db dummyd_10869[32]; // 0df6:166a
db dummyd_10889[32]; // 0df6:168a
db dummyd_108a9[32]; // 0df6:16aa
db dummyd_108c9[32]; // 0df6:16ca
db dummyd_108e9[32]; // 0df6:16ea
db dummyd_10909[32]; // 0df6:170a
db dummyd_10929[32]; // 0df6:172a
db dummyd_10949;
db dummyd_1094a;
db dummyd_1094b;
db dummyd_1094c;
db dummyd_1094d; // 0df6:174e
db dummyd_1094e; // 0df6:174f
db dummyd_1094f; // 0df6:1750
db dummyd_10950; // 0df6:1751
db dummyd_10951;
db dummyd_10952;
db dummyd_10953;
db dummyd_10954;
db dummyd_10955;
db dummyd_10956;
db dummyd_10957;
db dummyd_10958;
db dummyd_10959;
db dummyd_1095a;
db dummyd_1095b;
db dummyd_1095c;
db dummyd_1095d; // 0df6:175e
db dummyd_1095e; // 0df6:175f
db dummyd_1095f[32]; // 0f9f:0000
db dummyd_1097f[32]; // 0f9f:0020
db dummyd_1099f[32]; // 0f9f:0040
db dummyd_109bf[32]; // 0f9f:0060
db dummyd_109df[32]; // 0f9f:0080
db dummyd_109ff[32]; // 0f9f:00a0
db dummyd_10a1f[32]; // 0f9f:00c0
db dummyd_10a3f[32]; // 0f9f:00e0
db dummyd_10a5f[32]; // 0f9f:0100
db dummyd_10a7f[32]; // 0f9f:0120
db dummyd_10a9f[32]; // 0f9f:0140
db dummyd_10abf[32]; // 0f9f:0160
db dummyd_10adf[32]; // 0f9f:0180
db dummyd_10aff[32]; // 0f9f:01a0
db dummyd_10b1f[32]; // 0f9f:01c0
db dummyd_10b3f[32]; // 0f9f:01e0
db dummyd_10b5f[32]; // 0f9f:0200
db dummyd_10b7f[32]; // 0f9f:0220
db dummyd_10b9f[32]; // 0f9f:0240
db dummyd_10bbf[32]; // 0f9f:0260
db dummyd_10bdf[32]; // 0f9f:0280
db dummyd_10bff[32]; // 0f9f:02a0
db dummyd_10c1f[32]; // 0f9f:02c0
db dummyd_10c3f[32]; // 0f9f:02e0
db dummyd_10c5f[32]; // 0f9f:0300
db dummyd_10c7f[32]; // 0f9f:0320
db dummyd_10c9f[32]; // 0f9f:0340
db dummyd_10cbf[32]; // 0f9f:0360
db dummyd_10cdf[32]; // 0f9f:0380
db dummyd_10cff[32]; // 0f9f:03a0
db dummyd_10d1f[32]; // 0f9f:03c0
db dummyd_10d3f[32]; // 0f9f:03e0
db dummyd_10d5f[32]; // 0f9f:0400
db dummyd_10d7f[32]; // 0f9f:0420
db dummyd_10d9f[32]; // 0f9f:0440
db dummyd_10dbf[32]; // 0f9f:0460
db dummyd_10ddf[32]; // 0f9f:0480
db dummyd_10dff[32]; // 0f9f:04a0
db dummyd_10e1f[32]; // 0f9f:04c0
db dummyd_10e3f[32]; // 0f9f:04e0
db dummyd_10e5f;
db dummyd_10e60;
db dummyd_10e61;
db dummyd_10e62;
db dummyd_10e63;
db dummyd_10e64;
db dummyd_10e65;
db dummyd_10e66;
db dummyd_10e67;
db dummyd_10e68;
db dummyd_10e69;
db dummyd_10e6a;
db dummyd_10e6b;
db dummyd_10e6c;
db dummyd_10e6d;
db dummyd_10e6e;
db dummyd_10e6f; // 0f9f:0510
db dummyd_10e70; // 0f9f:0511
db dummyd_10e71; // 0f9f:0512
db dummyd_10e72; // 0f9f:0513
dd dummyd_10e73; // 0f9f:0514
db dummyd_10e77[32]; // 0f9f:0518
dd dummyd_10e97; // 0f9f:0538
db dummyd_10e9b; // 0f9f:053c
db dummyd_10e9c;
db dummyd_10e9d;
db dummyd_10e9e;
db dummyd_10e9f;
db dummyd_10ea0;
db dummyd_10ea1; // 0f9f:0542
db dummyd_10ea2; // 0f9f:0543
db dummyd_10ea3; // 0f9f:0544
db dummyd_10ea4; // 0f9f:0545
dd dummyd_10ea5; // 0f9f:0546
db dummyd_10ea9[32]; // 0f9f:054a
dd dummyd_10ec9; // 0f9f:056a
db dummyd_10ecd; // 0f9f:056e
db dummyd_10ece;
db dummyd_10ecf; // 0f9f:0570
db dummyd_10ed0;
db dummyd_10ed1;
db dummyd_10ed2;
db dummyd_10ed3; // 0f9f:0574
db dummyd_10ed4; // 0f9f:0575
db dummyd_10ed5; // 0f9f:0576
db dummyd_10ed6; // 0f9f:0577
dd dummyd_10ed7; // 0f9f:0578
db dummyd_10edb[32]; // 0f9f:057c
dd dummyd_10efb; // 0f9f:059c
db dummyd_10eff; // 0f9f:05a0
db dummyd_10f00;
db dummyd_10f01; // 0f9f:05a2
db byte_21043; // 0f9f:05a3
db dummyd_10f03;
db dummyd_10f04;
db dummyd_10f05; // 0f9f:05a6
db dummyd_10f06; // 0f9f:05a7
db dummyd_10f07; // 0f9f:05a8
db dummyd_10f08; // 0f9f:05a9
dd dummyd_10f09; // 0f9f:05aa
db dummyd_10f0d[32]; // 0f9f:05ae
dd dummyd_10f2d; // 0f9f:05ce
db dummyd_10f31; // 0f9f:05d2
db dummyd_10f32;
db dummyd_10f33; // 0f9f:05d4
db dummyd_10f34;
db dummyd_10f35;
db dummyd_10f36;
db dummyd_10f37; // 0f9f:05d8
db dummyd_10f38; // 0f9f:05d9
db dummyd_10f39; // 0f9f:05da
db dummyd_10f3a; // 0f9f:05db
dd dummyd_10f3b; // 0f9f:05dc
db dummyd_10f3f[32]; // 0f9f:05e0
dd dummyd_10f5f; // 0f9f:0600
db dummyd_10f63; // 0f9f:0604
db dummyd_10f64;
db dummyd_10f65; // 0f9f:0606
db dummyd_10f66;
db dummyd_10f67;
db dummyd_10f68;
db dummyd_10f69; // 0f9f:060a
db dummyd_10f6a; // 0f9f:060b
db dummyd_10f6b; // 0f9f:060c
db dummyd_10f6c; // 0f9f:060d
dd dummyd_10f6d; // 0f9f:060e
db dummyd_10f71[32]; // 0f9f:0612
dd dummyd_10f91; // 0f9f:0632
db dummyd_10f95; // 0f9f:0636
db dummyd_10f96;
db dummyd_10f97; // 0f9f:0638
db dummyd_10f98; // 0f9f:0639
db dummyd_10f99;
db dummyd_10f9a;
db dummyd_10f9b; // 0f9f:063c
db dummyd_10f9c; // 0f9f:063d
db dummyd_10f9d; // 0f9f:063e
db dummyd_10f9e; // 0f9f:063f
dd dummyd_10f9f; // 0f9f:0640
db dummyd_10fa3; // 0f9f:0644
db dummyd_10fa4;
db dummyd_10fa5; // 0f9f:0646
db dummyd_10fa6; // 0f9f:0647
db dummyd_10fa7;
db dummyd_10fa8; // 0f9f:0649
db dummyd_10fa9; // 0f9f:064a
db dummyd_10faa;
db dummyd_10fab; // 0f9f:064c
db dummyd_10fac;
db dummyd_10fad;
db dummyd_10fae; // 0f9f:064f
db dummyd_10faf; // 0f9f:0650
db dummyd_10fb0; // 0f9f:0651
db dummyd_10fb1; // 0f9f:0652
db dummyd_10fb2;
db dummyd_10fb3;
db dummyd_10fb4;
db dummyd_10fb5;
db dummyd_10fb6;
db dummyd_10fb7;
db dummyd_10fb8;
db dummyd_10fb9; // 0f9f:065a
db dummyd_10fba;
db dummyd_10fbb; // 0f9f:065c
db dummyd_10fbc;
db dummyd_10fbd; // 0f9f:065e
db dummyd_10fbe;
db dummyd_10fbf; // 0f9f:0660
db dummyd_10fc0;
dd dummyd_10fc1; // 0f9f:0664
db dummyd_10fc5; // 0f9f:0668
db dummyd_10fc6;
db dummyd_10fc7; // 0f9f:066a
db dummyd_10fc8; // 0f9f:066b
db dummyd_10fc9;
db dummyd_10fca;
db dummyd_10fcb; // 0f9f:066e
db dummyd_10fcc; // 0f9f:066f
db dummyd_10fcd; // 0f9f:0670
db dummyd_10fce; // 0f9f:0671
dd dummyd_10fcf; // 0f9f:0672
db dummyd_10fd3[32]; // 0f9f:0676
dd dummyd_10ff3; // 0f9f:0696
db dummyd_10ff7; // 0f9f:069a
db dummyd_10ff8;
db dummyd_10ff9; // 0f9f:069c
db dummyd_10ffa; // 0f9f:069d
db dummyd_10ffb;
db dummyd_10ffc;
db dummyd_10ffd; // 0f9f:06a0
db dummyd_10ffe; // 0f9f:06a1
db dummyd_10fff; // 0f9f:06a2
db dummyd_11000; // 0f9f:06a3
dd dummyd_11001; // 0f9f:06a4
db dummyd_11005; // 0f9f:06a8
db dummyd_11006;
db dummyd_11007; // 0f9f:06aa
db dummyd_11008; // 0f9f:06ab
db dummyd_11009; // 0f9f:06ac
db dummyd_1100a; // 0f9f:06ad
db dummyd_1100b; // 0f9f:06ae
db dummyd_1100c;
db dummyd_1100d; // 0f9f:06b0
db dummyd_1100e; // 0f9f:06b1
db dummyd_1100f;
db dummyd_11010; // 0f9f:06b3
db dummyd_11011; // 0f9f:06b4
db dummyd_11012; // 0f9f:06b5
db dummyd_11013; // 0f9f:06b6
db dummyd_11014;
db dummyd_11015;
db dummyd_11016;
db dummyd_11017;
db dummyd_11018;
db dummyd_11019;
db dummyd_1101a;
db dummyd_1101b; // 0f9f:06be
db dummyd_1101c;
db dummyd_1101d; // 0f9f:06c0
db dummyd_1101e;
db dummyd_1101f; // 0f9f:06c2
db dummyd_11020;
db dummyd_11021; // 0f9f:06c4
db dummyd_11022;
dd dummyd_11023; // 0f9f:06c8
db dummyd_11027; // 0f9f:06cc
db dummyd_11028;
db dummyd_11029; // 0f9f:06ce
db dummyd_1102a; // 0f9f:06cf
db dummyd_1102b;
db dummyd_1102c;
db dummyd_1102d; // 0f9f:06d2
db dummyd_1102e; // 0f9f:06d3
db dummyd_1102f; // 0f9f:06d4
db dummyd_11030; // 0f9f:06d5
dd dummyd_11031; // 0f9f:06d6
db dummyd_11035; // 0f9f:06da
db dummyd_11036;
db dummyd_11037; // 0f9f:06dc
db dummyd_11038; // 0f9f:06dd
db dummyd_11039; // 0f9f:06de
db dummyd_1103a; // 0f9f:06df
db dummyd_1103b; // 0f9f:06e0
db dummyd_1103c;
db dummyd_1103d; // 0f9f:06e2
db dummyd_1103e; // 0f9f:06e3
db dummyd_1103f;
db dummyd_11040; // 0f9f:06e5
db dummyd_11041; // 0f9f:06e6
db unk_21187; // 0f9f:06e7
db dummyd_11043; // 0f9f:06e8
db dummyd_11044;
db dummyd_11045;
db dummyd_11046;
db dummyd_11047;
db dummyd_11048;
db dummyd_11049;
db dummyd_1104a;
db dummyd_1104b; // 0f9f:06f0
db dummyd_1104c;
db dummyd_1104d; // 0f9f:06f2
db dummyd_1104e;
db dummyd_1104f; // 0f9f:06f4
db dummyd_11050;
db dummyd_11051; // 0f9f:06f6
db dummyd_11052;
db dummyd_11053;
db dummyd_11054;
dd dummyd_11055; // 0f9f:06fa
db dummyd_11059; // 0f9f:06fe
db dummyd_1105a;
db dummyd_1105b; // 0f9f:0700
db dummyd_1105c; // 0f9f:0701
db dummyd_1105d;
db dummyd_1105e;
db dummyd_1105f; // 0f9f:0704
db dummyd_11060; // 0f9f:0705
db dummyd_11061; // 0f9f:0706
db dummyd_11062; // 0f9f:0707
dd dummyd_11063; // 0f9f:0708
db dummyd_11067; // 0f9f:070c
db dummyd_11068;
db dummyd_11069; // 0f9f:070e
db dummyd_1106a; // 0f9f:070f
db dummyd_1106b; // 0f9f:0710
db dummyd_1106c; // 0f9f:0711
db dummyd_1106d; // 0f9f:0712
db dummyd_1106e;
db dummyd_1106f; // 0f9f:0714
db dummyd_11070; // 0f9f:0715
db dummyd_11071;
db dummyd_11072; // 0f9f:0717
db dummyd_11073; // 0f9f:0718
db dummyd_11074; // 0f9f:0719
db dummyd_11075; // 0f9f:071a
db dummyd_11076;
db dummyd_11077;
db dummyd_11078;
db dummyd_11079;
db dummyd_1107a;
db dummyd_1107b;
db dummyd_1107c;
db dummyd_1107d; // 0f9f:0722
db dummyd_1107e;
db dummyd_1107f; // 0f9f:0724
db dummyd_11080;
db dummyd_11081; // 0f9f:0726
db dummyd_11082;
db dummyd_11083; // 0f9f:0728
db dummyd_11084;
dd dummyd_11085; // 0f9f:072c
db dummyd_11089; // 0f9f:0730
db dummyd_1108a;
db dummyd_1108b; // 0f9f:0732
db dummyd_1108c; // 0f9f:0733
db dummyd_1108d;
db dummyd_1108e;
db dummyd_1108f; // 0f9f:0736
db dummyd_11090; // 0f9f:0737
db dummyd_11091; // 0f9f:0738
db dummyd_11092; // 0f9f:0739
dd dummyd_11093; // 0f9f:073a
db dummyd_11097[32]; // 0f9f:073e
dd dummyd_110b7; // 0f9f:075e
db dummyd_110bb; // 0f9f:0762
db dummyd_110bc;
db dummyd_110bd; // 0f9f:0764
db dummyd_110be; // 0f9f:0765
db dummyd_110bf;
db dummyd_110c0;
db dummyd_110c1; // 0f9f:0768
db dummyd_110c2; // 0f9f:0769
db dummyd_110c3; // 0f9f:076a
db dummyd_110c4; // 0f9f:076b
dd dummyd_110c5; // 0f9f:076c
db dummyd_110c9; // 0f9f:0770
db dummyd_110ca;
db dummyd_110cb; // 0f9f:0772
db dummyd_110cc; // 0f9f:0773
db dummyd_110cd; // 0f9f:0774
db dummyd_110ce; // 0f9f:0775
db dummyd_110cf; // 0f9f:0776
db dummyd_110d0;
db dummyd_110d1; // 0f9f:0778
db dummyd_110d2; // 0f9f:0779
db dummyd_110d3;
db dummyd_110d4; // 0f9f:077b
db dummyd_110d5; // 0f9f:077c
db dummyd_110d6; // 0f9f:077d
db dummyd_110d7; // 0f9f:077e
db dummyd_110d8;
db dummyd_110d9;
db dummyd_110da;
db dummyd_110db;
db dummyd_110dc;
db dummyd_110dd;
db dummyd_110de;
db dummyd_110df; // 0f9f:0786
db dummyd_110e0;
db dummyd_110e1; // 0f9f:0788
db dummyd_110e2;
db dummyd_110e3; // 0f9f:078a
db dummyd_110e4;
db dummyd_110e5; // 0f9f:078c
db dummyd_110e6;
dd dummyd_110e7; // 0f9f:0790
db dummyd_110eb; // 0f9f:0794
db dummyd_110ec;
db dummyd_110ed; // 0f9f:0796
db dummyd_110ee; // 0f9f:0797
db dummyd_110ef;
db dummyd_110f0;
db dummyd_110f1; // 0f9f:079a
db dummyd_110f2; // 0f9f:079b
db dummyd_110f3; // 0f9f:079c
db dummyd_110f4; // 0f9f:079d
dd dummyd_110f5; // 0f9f:079e
db dummyd_110f9; // 0f9f:07a4
db dummyd_110fa; // 0f9f:07a5
db dummyd_110fb; // 0f9f:07a6
db dummyd_110fc; // 0f9f:07a7
db dummyd_110fd; // 0f9f:07a8
db dummyd_110fe;
db dummyd_110ff; // 0f9f:07aa
db dummyd_11100; // 0f9f:07ab
db dummyd_11101;
db dummyd_11102; // 0f9f:07ad
db dummyd_11103; // 0f9f:07ae
db dummyd_11104; // 0f9f:07af
db dummyd_11105; // 0f9f:07b0
db dummyd_11106;
db dummyd_11107;
db dummyd_11108;
db dummyd_11109;
db dummyd_1110a;
db dummyd_1110b;
db dummyd_1110c;
db dummyd_1110d; // 0f9f:07b8
db dummyd_1110e;
db dummyd_1110f; // 0f9f:07ba
db dummyd_11110;
db dummyd_11111; // 0f9f:07bc
db dummyd_11112;
db dummyd_11113; // 0f9f:07be
db dummyd_11114;
db dummyd_11115;
db dummyd_11116; // 0f9f:07c1
dd dummyd_11117; // 0f9f:07c2
db dummyd_1111b; // 0f9f:07c6
db dummyd_1111c;
db dummyd_1111d; // 0f9f:07c8
db dummyd_1111e; // 0f9f:07c9
db dummyd_1111f;
db dummyd_11120;
db dummyd_11121; // 0f9f:07cc
db dummyd_11122; // 0f9f:07cd
db dummyd_11123; // 0f9f:07ce
db dummyd_11124; // 0f9f:07cf
dd dummyd_11125; // 0f9f:07d0
db dummyd_11129[32]; // 0f9f:07d4
dd dummyd_11149; // 0f9f:07f4
db dummyd_1114d; // 0f9f:07f8
db dummyd_1114e;
db dummyd_1114f; // 0f9f:07fa
db dummyd_11150; // 0f9f:07fb
db dummyd_11151;
db dummyd_11152;
db dummyd_11153; // 0f9f:07fe
db dummyd_11154; // 0f9f:07ff
db dummyd_11155; // 0f9f:0800
db dummyd_11156; // 0f9f:0801
dd dummyd_11157; // 0f9f:0802
db dummyd_1115b; // 0f9f:0808
db dummyd_1115c; // 0f9f:0809
db dummyd_1115d; // 0f9f:080a
db dummyd_1115e; // 0f9f:080b
db dummyd_1115f; // 0f9f:080c
db dummyd_11160;
db dummyd_11161; // 0f9f:080e
db dummyd_11162;
db dummyd_11163;
db dummyd_11164; // 0f9f:0811
db dummyd_11165; // 0f9f:0812
db dummyd_11166; // 0f9f:0813
db dummyd_11167; // 0f9f:0814
db dummyd_11168;
db dummyd_11169;
db dummyd_1116a;
db dummyd_1116b;
db dummyd_1116c;
db dummyd_1116d;
db dummyd_1116e;
db dummyd_1116f; // 0f9f:081c
db dummyd_11170;
db dummyd_11171; // 0f9f:081e
db dummyd_11172;
db dummyd_11173; // 0f9f:0820
db dummyd_11174;
db dummyd_11175; // 0f9f:0822
db dummyd_11176;
db dummyd_11177;
db dummyd_11178; // 0f9f:0825
dd dummyd_11179; // 0f9f:0826
db dummyd_1117d; // 0f9f:082a
db dummyd_1117e;
db dummyd_1117f; // 0f9f:082c
db dummyd_11180; // 0f9f:082d
db dummyd_11181;
db dummyd_11182;
db dummyd_11183; // 0f9f:0830
db dummyd_11184; // 0f9f:0831
db dummyd_11185; // 0f9f:0832
db dummyd_11186; // 0f9f:0833
dd dummyd_11187; // 0f9f:0834
db dummyd_1118b[32]; // 0f9f:0838
dd dummyd_111ab; // 0f9f:0858
db dummyd_111af; // 0f9f:085c
db dummyd_111b0; // 0f9f:085d
db dummyd_111b1; // 0f9f:085e
db dummyd_111b2; // 0f9f:085f
db dummyd_111b3;
db dummyd_111b4;
db dummyd_111b5; // 0f9f:0862
db dummyd_111b6; // 0f9f:0863
db dummyd_111b7; // 0f9f:0864
db dummyd_111b8; // 0f9f:0865
dd dummyd_111b9; // 0f9f:0866
db dummyd_111bd[32]; // 0f9f:086a
dd dummyd_111dd; // 0f9f:088a
db dummyd_111e1; // 0f9f:088e
db dummyd_111e2;
db dummyd_111e3; // 0f9f:0890
db dummyd_111e4; // 0f9f:0891
db dummyd_111e5;
db dummyd_111e6;
db dummyd_111e7; // 0f9f:0894
db dummyd_111e8; // 0f9f:0895
db dummyd_111e9; // 0f9f:0896
db dummyd_111ea; // 0f9f:0897
dd dummyd_111eb; // 0f9f:0898
db dummyd_111ef[32]; // 0f9f:089c
dd dummyd_1120f; // 0f9f:08bc
db dummyd_11213[32]; // 0f9f:08c0
db dummyd_11233;
db dummyd_11234;
db dummyd_11235;
db dummyd_11236;
db dummyd_11237;
db dummyd_11238;
db dummyd_11239; // 0f9f:08e6
db dummyd_1123a;
db dummyd_1123b;
db dummyd_1123c[32]; // 0f9f:08ea
db dummyd_1125c;
db dummyd_1125d;
db dummyd_1125e;
db dummyd_1125f;
db dummyd_11260;
db dummyd_11261;
db dummyd_11262;
db dummyd_11263;
db dummyd_11264;
db dummyd_11265;
db dummyd_11266;
db dummyd_11267;
db dummyd_11268;
db dummyd_11269;
db dummyd_1126a; // 0f9f:0918
db dummyd_1126b;
db dummyd_1126c;
db dummyd_1126d[32]; // 0f9f:091c
db dummyd_1128d;
db dummyd_1128e;
db dummyd_1128f;
db dummyd_11290;
db dummyd_11291;
db dummyd_11292;
db dummyd_11293;
db dummyd_11294;
db dummyd_11295;
db dummyd_11296;
db dummyd_11297;
db dummyd_11298;
db dummyd_11299;
db dummyd_1129a;
db dummyd_1129b; // 0f9f:094a
db dummyd_1129c;
db dummyd_1129d;
db dummyd_1129e[32]; // 0f9f:094e
db dummyd_112be;
db dummyd_112bf;
db dummyd_112c0;
db dummyd_112c1;
db dummyd_112c2;
db dummyd_112c3;
db dummyd_112c4;
db dummyd_112c5;
db dummyd_112c6;
db dummyd_112c7;
db dummyd_112c8;
db dummyd_112c9;
db dummyd_112ca;
db dummyd_112cb;
db dummyd_112cc; // 0f9f:097c
db dummyd_112cd;
db dummyd_112ce;
db dummyd_112cf[32]; // 0f9f:0980
db dummyd_112ef;
db dummyd_112f0;
db dummyd_112f1;
db dummyd_112f2;
db dummyd_112f3;
db dummyd_112f4;
db dummyd_112f5;
db dummyd_112f6;
db dummyd_112f7;
db dummyd_112f8;
db dummyd_112f9;
db dummyd_112fa;
db dummyd_112fb;
db dummyd_112fc;
db dummyd_112fd; // 0f9f:09ae
db dummyd_112fe;
db dummyd_112ff;
db dummyd_11300[32]; // 0f9f:09b2
db dummyd_11320;
db dummyd_11321;
db dummyd_11322;
db dummyd_11323;
db dummyd_11324;
db dummyd_11325;
db dummyd_11326;
db dummyd_11327;
db dummyd_11328;
db dummyd_11329;
db dummyd_1132a;
db dummyd_1132b;
db dummyd_1132c;
db dummyd_1132d;
db dummyd_1132e; // 0f9f:09e0
db dummyd_1132f;
db dummyd_11330;
db dummyd_11331[32]; // 0f9f:09e4
db dummyd_11351;
db dummyd_11352;
db dummyd_11353;
db dummyd_11354;
db dummyd_11355;
db dummyd_11356;
db dummyd_11357;
db dummyd_11358;
db dummyd_11359;
db dummyd_1135a;
db dummyd_1135b;
db dummyd_1135c;
db dummyd_1135d;
db dummyd_1135e;
db dummyd_1135f; // 0f9f:0a12
db dummyd_11360;
db dummyd_11361;
db dummyd_11362[32]; // 0f9f:0a16
db dummyd_11382;
db dummyd_11383;
db dummyd_11384;
db dummyd_11385;
db dummyd_11386;
db dummyd_11387;
db dummyd_11388;
db dummyd_11389;
db dummyd_1138a;
db dummyd_1138b;
db dummyd_1138c;
db dummyd_1138d;
db dummyd_1138e;
db dummyd_1138f;
db dummyd_11390; // 0f9f:0a44
db dummyd_11391;
db dummyd_11392;
db dummyd_11393[32]; // 0f9f:0a48
db dummyd_113b3;
db dummyd_113b4;
db dummyd_113b5;
db dummyd_113b6;
db dummyd_113b7;
db dummyd_113b8;
db dummyd_113b9;
db dummyd_113ba;
db dummyd_113bb;
db dummyd_113bc;
db dummyd_113bd;
db dummyd_113be;
db dummyd_113bf;
db dummyd_113c0;
db dummyd_113c1; // 0f9f:0a76
db dummyd_113c2;
db dummyd_113c3;
db dummyd_113c4[32]; // 0f9f:0a7a
db dummyd_113e4;
db dummyd_113e5;
db dummyd_113e6;
db dummyd_113e7;
db dummyd_113e8;
db dummyd_113e9;
db dummyd_113ea;
db dummyd_113eb;
db dummyd_113ec;
db dummyd_113ed;
db dummyd_113ee;
db dummyd_113ef;
db dummyd_113f0;
db dummyd_113f1;
db dummyd_113f2; // 0f9f:0aa8
db dummyd_113f3;
db dummyd_113f4;
db dummyd_113f5[32]; // 0f9f:0aac
db unk_2156c; // 0f9f:0acc
db dummyd_11416;
db dummyd_11417;
db dummyd_11418;
db dummyd_11419;
db dummyd_1141a;
db dummyd_1141b;
db dummyd_1141c;
db dummyd_1141d;
db dummyd_1141e;
db dummyd_1141f;
db dummyd_11420;
db dummyd_11421;
db dummyd_11422;
db dummyd_11423; // 0f9f:0ada
db dummyd_11424;
db dummyd_11425;
db dummyd_11426[32]; // 0f9f:0ade
db dummyd_11446;
db dummyd_11447;
db dummyd_11448;
db dummyd_11449;
db dummyd_1144a;
db dummyd_1144b;
db dummyd_1144c;
db dummyd_1144d;
db dummyd_1144e;
db dummyd_1144f;
db dummyd_11450;
db dummyd_11451;
db dummyd_11452;
db dummyd_11453;
db dummyd_11454; // 0f9f:0b0c
db dummyd_11455;
db dummyd_11456;
db dummyd_11457[32]; // 0f9f:0b10
db dummyd_11477;
db dummyd_11478;
db dummyd_11479;
db dummyd_1147a;
db dummyd_1147b;
db dummyd_1147c;
db dummyd_1147d;
db dummyd_1147e;
db dummyd_1147f;
db dummyd_11480;
db dummyd_11481;
db dummyd_11482;
db dummyd_11483;
db dummyd_11484;
db dummyd_11485; // 0f9f:0b3e
db dummyd_11486;
db dummyd_11487;
db dummyd_11488;
db dummyd_11489;
db dummyd_1148a;
db dummyd_1148b;
db dummyd_1148c;
db dummyd_1148d;
db dummyd_1148e;
db dummyd_1148f;
db dummyd_11490;
db byte_215eb; // 0f9f:0b4b
db dummyd_11492[32]; // 0f9f:0b4c
db dummyd_114b2;
db dummyd_114b3;
db dummyd_114b4;
db dummyd_114b5;
db dummyd_114b6; // 0f9f:0b70
db dummyd_114b7;
db dummyd_114b8;
db unk_21613; // 0f9f:0b73
db dummyd_114ba[32]; // 0f9f:0b74
db dummyd_114da;
db dummyd_114db;
db dummyd_114dc;
db dummyd_114dd;
db dummyd_114de;
db dummyd_114df;
db dummyd_114e0;
db dummyd_114e1;
db dummyd_114e2;
db dummyd_114e3;
db dummyd_114e4;
db dummyd_114e5;
db dummyd_114e6;
db dummyd_114e7;
db dummyd_114e8; // 0f9f:0ba2
db dummyd_114e9;
db dummyd_114ea;
db dummyd_114eb;
db dummyd_114ec;
db dummyd_114ed;
db dummyd_114ee;
db dummyd_114ef;
db dummyd_114f0;
db dummyd_114f1;
db dummyd_114f2;
db unk_2164e; // 0f9f:0bae
db dummyd_114f4;
db dummyd_114f5;
db dummyd_114f6;
db dummyd_114f7;
db dummyd_114f8;
db dummyd_114f9; // 0f9f:0bb4
db dummyd_114fa; // 0f9f:0bb5
db dummyd_114fb; // 0f9f:0bb6
db dummyd_114fc; // 0f9f:0bb7
db dummyd_114fd;
db dummyd_114fe;
db dummyd_114ff;
db dummyd_11500;
db dummyd_11501;
db dummyd_11502;
db dummyd_11503;
db dummyd_11504;
db dummyd_11505;
db dummyd_11506;
db dummyd_11507;
db dummyd_11508;
db byte_21664; // 0f9f:0bc4
db dummyd_1150a;
db dummyd_1150b;
db dummyd_1150c;
db dummyd_1150d;
db dummyd_1150e;
db dummyd_1150f;
db dummyd_11510;
db dummyd_11511;
db dummyd_11512;
db dummyd_11513;
db dummyd_11514;
db dummyd_11515;
db dummyd_11516;
db dummyd_11517;
db dummyd_11518;
db dummyd_11519; // 0f9f:0bd4
db dummyd_1151a;
db dummyd_1151b;
db dummyd_1151c;
db dummyd_1151d;
db dummyd_1151e;
db dummyd_1151f;
db dummyd_11520;
db dummyd_11521;
db dummyd_11522;
db dummyd_11523;
db dummyd_11524;
db dummyd_11525;
db dummyd_11526;
db dummyd_11527;
db dummyd_11528;
db byte_21685; // 0f9f:0be5
db dummyd_1152a[32]; // 0f9f:0be6
db dummyd_1154a; // 0f9f:0c06
db dummyd_1154b;
db dummyd_1154c;
db dummyd_1154d[32]; // 0f9f:0c0a
db dummyd_1156d;
db dummyd_1156e;
db dummyd_1156f;
db dummyd_11570;
db dummyd_11571;
db dummyd_11572;
db dummyd_11573;
db dummyd_11574;
db dummyd_11575;
db byte_216d3; // 0f9f:0c33
db dummyd_11577;
db dummyd_11578;
db dummyd_11579;
db dummyd_1157a;
db dummyd_1157b; // 0f9f:0c38
db dummyd_1157c;
db dummyd_1157d;
db dummyd_1157e;
db dummyd_1157f;
db dummyd_11580;
db dummyd_11581;
db byte_216e0; // 0f9f:0c40
db dummyd_11583[32]; // 0f9f:0c41
db dummyd_115a3;
db dummyd_115a4;
db dummyd_115a5;
db dummyd_115a6;
db dummyd_115a7;
db dummyd_115a8;
db dummyd_115a9;
db dummyd_115aa;
db dummyd_115ab;
db dummyd_115ac; // 0f9f:0c6a
db dummyd_115ad;
db dummyd_115ae;
db dummyd_115af[32]; // 0f9f:0c6e
db dummyd_115cf;
db dummyd_115d0;
db dummyd_115d1;
db dummyd_115d2;
db dummyd_115d3;
db dummyd_115d4;
db dummyd_115d5;
db dummyd_115d6;
db dummyd_115d7;
db dummyd_115d8;
db dummyd_115d9;
db dummyd_115da;
db dummyd_115db;
db dummyd_115dc;
db dummyd_115dd; // 0f9f:0c9c
db dummyd_115de;
db dummyd_115df;
db dummyd_115e0[32]; // 0f9f:0ca0
db dummyd_11600;
db dummyd_11601;
db dummyd_11602;
db dummyd_11603;
db dummyd_11604;
db dummyd_11605;
db dummyd_11606;
db dummyd_11607;
db dummyd_11608;
db dummyd_11609;
db dummyd_1160a;
db dummyd_1160b;
db dummyd_1160c;
db dummyd_1160d;
db dummyd_1160e; // 0f9f:0cce
db dummyd_1160f;
db dummyd_11610;
db dummyd_11611[32]; // 0f9f:0cd2
db dummyd_11631;
db dummyd_11632;
db dummyd_11633;
db dummyd_11634;
db dummyd_11635;
db dummyd_11636;
db dummyd_11637;
db dummyd_11638;
db dummyd_11639;
db dummyd_1163a;
db dummyd_1163b;
db dummyd_1163c;
db dummyd_1163d;
db dummyd_1163e;
db dummyd_1163f; // 0f9f:0d00
db dummyd_11640;
db dummyd_11641;
db dummyd_11642[32]; // 0f9f:0d04
db dummyd_11662;
db dummyd_11663;
db dummyd_11664;
db dummyd_11665;
db dummyd_11666;
db dummyd_11667;
db dummyd_11668;
db dummyd_11669;
db dummyd_1166a;
db dummyd_1166b;
db dummyd_1166c;
db dummyd_1166d;
db dummyd_1166e;
db dummyd_1166f;
db dummyd_11670; // 0f9f:0d32
db dummyd_11671;
db dummyd_11672;
db dummyd_11673[32]; // 0f9f:0d36
db dummyd_11693;
db dummyd_11694;
db dummyd_11695;
db dummyd_11696;
db dummyd_11697;
db dummyd_11698;
db dummyd_11699;
db dummyd_1169a;
db dummyd_1169b;
db dummyd_1169c;
db dummyd_1169d;
db dummyd_1169e;
db dummyd_1169f;
db dummyd_116a0;
db dummyd_116a1; // 0f9f:0d64
db dummyd_116a2;
db dummyd_116a3;
db dummyd_116a4[32]; // 0f9f:0d68
db dummyd_116c4;
db dummyd_116c5;
db dummyd_116c6;
db dummyd_116c7;
db dummyd_116c8;
db dummyd_116c9;
db dummyd_116ca;
db dummyd_116cb;
db dummyd_116cc;
db dummyd_116cd;
db dummyd_116ce;
db dummyd_116cf;
db dummyd_116d0;
db dummyd_116d1;
db dummyd_116d2; // 0f9f:0d96
db dummyd_116d3;
db dummyd_116d4;
db dummyd_116d5[32]; // 0f9f:0d9a
db dummyd_116f5;
db dummyd_116f6;
db dummyd_116f7;
db dummyd_116f8;
db dummyd_116f9;
db dummyd_116fa;
db dummyd_116fb;
db dummyd_116fc;
db dummyd_116fd;
db dummyd_116fe;
db dummyd_116ff;
db dummyd_11700;
db dummyd_11701;
db dummyd_11702;
db dummyd_11703; // 0f9f:0dc8
db dummyd_11704;
db dummyd_11705;
db dummyd_11706[32]; // 0f9f:0dcc
db dummyd_11726;
db dummyd_11727;
db dummyd_11728;
db dummyd_11729;
db dummyd_1172a;
db dummyd_1172b;
db dummyd_1172c;
db dummyd_1172d;
db dummyd_1172e;
db dummyd_1172f;
db dummyd_11730;
db dummyd_11731;
db dummyd_11732;
db dummyd_11733;
db dummyd_11734; // 0f9f:0dfa
db dummyd_11735;
db dummyd_11736;
db dummyd_11737[32]; // 0f9f:0dfe
db dummyd_11757;
db dummyd_11758;
db dummyd_11759;
db dummyd_1175a;
db dummyd_1175b;
db dummyd_1175c;
db dummyd_1175d;
db dummyd_1175e;
db dummyd_1175f;
db dummyd_11760;
db dummyd_11761;
db dummyd_11762;
db dummyd_11763;
db dummyd_11764;
db dummyd_11765; // 0f9f:0e2c
db dummyd_11766;
db dummyd_11767;
db dummyd_11768[32]; // 0f9f:0e30
db dummyd_11788;
db dummyd_11789;
db dummyd_1178a;
db dummyd_1178b;
db dummyd_1178c;
db dummyd_1178d;
db dummyd_1178e;
db dummyd_1178f;
db dummyd_11790;
db dummyd_11791;
db dummyd_11792;
db dummyd_11793;
db dummyd_11794;
db dummyd_11795;
db dummyd_11796; // 0f9f:0e5e
db dummyd_11797;
db dummyd_11798;
db dummyd_11799[32]; // 0f9f:0e62
db dummyd_117b9;
db dummyd_117ba;
db dummyd_117bb;
db dummyd_117bc;
db dummyd_117bd;
db dummyd_117be;
db dummyd_117bf;
db dummyd_117c0;
db dummyd_117c1;
db dummyd_117c2;
db dummyd_117c3;
db dummyd_117c4;
db dummyd_117c5;
db dummyd_117c6;
db dummyd_117c7; // 0f9f:0e90
db dummyd_117c8;
db dummyd_117c9;
db dummyd_117ca[32]; // 0f9f:0e94
db dummyd_117ea;
db dummyd_117eb;
db dummyd_117ec;
db dummyd_117ed;
db dummyd_117ee;
db dummyd_117ef;
db dummyd_117f0;
db dummyd_117f1;
db dummyd_117f2;
db dummyd_117f3;
db dummyd_117f4;
db dummyd_117f5;
db dummyd_117f6;
db dummyd_117f7;
db dummyd_117f8; // 0f9f:0ec2
db dummyd_117f9;
db dummyd_117fa;
db dummyd_117fb[32]; // 0f9f:0ec6
db dummyd_1181b;
db dummyd_1181c;
db dummyd_1181d;
db dummyd_1181e;
db dummyd_1181f;
db dummyd_11820;
db dummyd_11821;
db dummyd_11822;
db dummyd_11823;
db dummyd_11824;
db dummyd_11825;
db dummyd_11826;
db dummyd_11827;
db dummyd_11828;
db dummyd_11829; // 0f9f:0ef4
db dummyd_1182a;
db dummyd_1182b;
db dummyd_1182c[32]; // 0f9f:0ef8
db dummyd_1184c;
db dummyd_1184d;
db dummyd_1184e;
db dummyd_1184f;
db dummyd_11850;
db dummyd_11851;
db dummyd_11852;
db dummyd_11853;
db dummyd_11854;
db dummyd_11855;
db dummyd_11856;
db dummyd_11857;
db dummyd_11858;
db dummyd_11859;
db dummyd_1185a; // 0f9f:0f26
db dummyd_1185b;
db dummyd_1185c;
db dummyd_1185d[32]; // 0f9f:0f2a
db dummyd_1187d;
db dummyd_1187e;
db dummyd_1187f;
db dummyd_11880;
db dummyd_11881;
db dummyd_11882;
db dummyd_11883;
db dummyd_11884;
db dummyd_11885;
db dummyd_11886;
db dummyd_11887;
db dummyd_11888;
db dummyd_11889;
db dummyd_1188a;
db dummyd_1188b; // 0f9f:0f58
db dummyd_1188c;
db dummyd_1188d;
db dummyd_1188e[32]; // 0f9f:0f5c
db dummyd_118ae;
db dummyd_118af;
db dummyd_118b0;
db dummyd_118b1;
db dummyd_118b2;
db dummyd_118b3;
db dummyd_118b4;
db dummyd_118b5;
db dummyd_118b6;
db dummyd_118b7;
db dummyd_118b8;
db dummyd_118b9;
db dummyd_118ba;
db byte_21a29; // 0f9f:0f89
db dummyd_118bc; // 0f9f:0f8a
db dummyd_118bd;
db dummyd_118be;
db dummyd_118bf;
db dummyd_118c0;
db dummyd_118c1;
db dummyd_118c2;
db dummyd_118c3;
db dummyd_118c4;
db dummyd_118c5;
db dummyd_118c6;
db dummyd_118c7;
db dummyd_118c8;
db dummyd_118c9;
db dummyd_118ca;
db dummyd_118cb;
db dummyd_118cc;
db dummyd_118cd; // 0f9f:0f9c
db dummyd_118ce; // 0f9f:0f9d
db dummyd_118cf; // 0f9f:0f9e
db dummyd_118d0; // 0f9f:0f9f
db dummyd_118d1;
db dummyd_118d2;
db dummyd_118d3;
db dummyd_118d4;
db dummyd_118d5;
db dummyd_118d6;
db dummyd_118d7;
db dummyd_118d8;
db dummyd_118d9;
db byte_21a49; // 0f9f:0fa9
db dummyd_118db;
db dummyd_118dc;
db dummyd_118dd;
db dummyd_118de;
db dummyd_118df;
db dummyd_118e0;
db dummyd_118e1;
db dummyd_118e2;
db dummyd_118e3;
db dummyd_118e4;
db dummyd_118e5;
db dummyd_118e6;
db dummyd_118e7;
db dummyd_118e8;
db dummyd_118e9;
db dummyd_118ea;
db dummyd_118eb;
db dummyd_118ec;
db dummyd_118ed; // 0f9f:0fbc
db dummyd_118ee;
db dummyd_118ef;
db dummyd_118f0[32]; // 0f9f:0fc0
db dummyd_11910;
db dummyd_11911;
db dummyd_11912;
db dummyd_11913;
db dummyd_11914;
db dummyd_11915;
db dummyd_11916;
db dummyd_11917;
db dummyd_11918;
db dummyd_11919;
db dummyd_1191a;
db dummyd_1191b;
db dummyd_1191c;
db dummyd_1191d;
db dummyd_1191e; // 0f9f:0fee
db dummyd_1191f;
db dummyd_11920;
db dummyd_11921[32]; // 0f9f:0ff2
db dummyd_11941;
db dummyd_11942;
db dummyd_11943;
db dummyd_11944;
db dummyd_11945;
db dummyd_11946;
db dummyd_11947;
db dummyd_11948;
db dummyd_11949;
db dummyd_1194a;
db dummyd_1194b;
db dummyd_1194c;
db dummyd_1194d;
db dummyd_1194e;
db dummyd_1194f; // 0f9f:1020
db dummyd_11950;
db dummyd_11951;
db dummyd_11952[32]; // 0f9f:1024
db dummyd_11972;
db dummyd_11973;
db dummyd_11974;
db dummyd_11975;
db dummyd_11976;
db dummyd_11977;
db dummyd_11978;
db dummyd_11979;
db dummyd_1197a;
db dummyd_1197b;
db dummyd_1197c;
db dummyd_1197d;
db dummyd_1197e;
db dummyd_1197f;
db dummyd_11980; // 0f9f:1052
db dummyd_11981;
db dummyd_11982;
db dummyd_11983[32]; // 0f9f:1056
db dummyd_119a3;
db dummyd_119a4;
db dummyd_119a5;
db dummyd_119a6;
db dummyd_119a7;
db dummyd_119a8;
db dummyd_119a9;
db dummyd_119aa;
db dummyd_119ab;
db dummyd_119ac;
db dummyd_119ad;
db dummyd_119ae;
db dummyd_119af;
db dummyd_119b0;
db dummyd_119b1; // 0f9f:1084
db dummyd_119b2;
db dummyd_119b3;
db dummyd_119b4[32]; // 0f9f:1088
db dummyd_119d4;
db dummyd_119d5;
db dummyd_119d6;
db dummyd_119d7;
db dummyd_119d8;
db dummyd_119d9;
db dummyd_119da;
db dummyd_119db;
db dummyd_119dc;
db dummyd_119dd;
db dummyd_119de;
db dummyd_119df;
db dummyd_119e0;
db dummyd_119e1;
db dummyd_119e2; // 0f9f:10b6
db dummyd_119e3;
db dummyd_119e4;
db dummyd_119e5[32]; // 0f9f:10ba
db dummyd_11a05;
db dummyd_11a06;
db dummyd_11a07;
db dummyd_11a08;
db dummyd_11a09;
db dummyd_11a0a;
db dummyd_11a0b;
db dummyd_11a0c;
db dummyd_11a0d;
db dummyd_11a0e;
db dummyd_11a0f;
db dummyd_11a10;
db dummyd_11a11;
db dummyd_11a12;
db dummyd_11a13; // 0f9f:10e8
db dummyd_11a14;
db dummyd_11a15;
db dummyd_11a16[32]; // 0f9f:10ec
db dummyd_11a36;
db dummyd_11a37;
db dummyd_11a38;
db dummyd_11a39;
db dummyd_11a3a;
db dummyd_11a3b;
db dummyd_11a3c;
db dummyd_11a3d;
db dummyd_11a3e;
db dummyd_11a3f;
db dummyd_11a40;
db dummyd_11a41;
db dummyd_11a42;
db dummyd_11a43;
db dummyd_11a44; // 0f9f:111a
db dummyd_11a45;
db dummyd_11a46;
db dummyd_11a47[32]; // 0f9f:111e
db dummyd_11a67;
db dummyd_11a68;
db dummyd_11a69;
db dummyd_11a6a;
db dummyd_11a6b;
db dummyd_11a6c;
db dummyd_11a6d;
db dummyd_11a6e;
db dummyd_11a6f;
db dummyd_11a70;
db dummyd_11a71;
db dummyd_11a72;
db dummyd_11a73;
db dummyd_11a74;
db dummyd_11a75; // 0f9f:114c
db dummyd_11a76;
db dummyd_11a77;
db dummyd_11a78[32]; // 0f9f:1150
db dummyd_11a98;
db dummyd_11a99;
db dummyd_11a9a;
db dummyd_11a9b;
db dummyd_11a9c;
db dummyd_11a9d;
db dummyd_11a9e;
db dummyd_11a9f;
db dummyd_11aa0;
db dummyd_11aa1;
db dummyd_11aa2;
db dummyd_11aa3;
db dummyd_11aa4;
db dummyd_11aa5;
db dummyd_11aa6; // 0f9f:117e
db dummyd_11aa7;
db dummyd_11aa8;
db dummyd_11aa9[32]; // 0f9f:1182
db dummyd_11ac9;
db dummyd_11aca;
db dummyd_11acb;
db dummyd_11acc;
db dummyd_11acd;
db dummyd_11ace;
db dummyd_11acf;
db dummyd_11ad0;
db dummyd_11ad1;
db dummyd_11ad2;
db dummyd_11ad3;
db dummyd_11ad4;
db dummyd_11ad5;
db dummyd_11ad6;
db dummyd_11ad7; // 0f9f:11b0
db dummyd_11ad8;
db dummyd_11ad9;
db dummyd_11ada[32]; // 0f9f:11b4
db dummyd_11afa;
db dummyd_11afb;
db byte_21c76; // 0f9f:11d6
db dummyd_11afd;
db dummyd_11afe;
db dummyd_11aff;
db dummyd_11b00;
db dummyd_11b01;
db dummyd_11b02;
db dummyd_11b03;
db dummyd_11b04;
db dummyd_11b05;
db dummyd_11b06;
db dummyd_11b07;
db dummyd_11b08; // 0f9f:11e2
db dummyd_11b09;
db dummyd_11b0a;
db dummyd_11b0b[32]; // 0f9f:11e6
db dummyd_11b2b;
db dummyd_11b2c;
db dummyd_11b2d;
db dummyd_11b2e;
db dummyd_11b2f;
db dummyd_11b30;
db dummyd_11b31;
db dummyd_11b32;
db dummyd_11b33;
db dummyd_11b34;
db dummyd_11b35;
db dummyd_11b36;
db dummyd_11b37;
db dummyd_11b38;
db dummyd_11b39; // 0f9f:1214
db dummyd_11b3a;
db dummyd_11b3b;
db dummyd_11b3c;
db dummyd_11b3d;
db dummyd_11b3e;
db dummyd_11b3f;
db dummyd_11b40;
db dummyd_11b41;
db dummyd_11b42;
db dummyd_11b43;
db dummyd_11b44;
db byte_21cc1; // 0f9f:1221
db dummyd_11b46[32]; // 0f9f:1222
db dummyd_11b66;
db dummyd_11b67;
db dummyd_11b68;
db dummyd_11b69;
db dummyd_11b6a; // 0f9f:1246
db dummyd_11b6b;
db dummyd_11b6c;
db dummyd_11b6d[32]; // 0f9f:124a
db dummyd_11b8d;
db dummyd_11b8e;
db dummyd_11b8f;
db dummyd_11b90;
db dummyd_11b91;
db dummyd_11b92;
db dummyd_11b93;
db dummyd_11b94;
db dummyd_11b95;
db dummyd_11b96;
db dummyd_11b97;
db dummyd_11b98;
db dummyd_11b99;
db dummyd_11b9a;
db dummyd_11b9b; // 0f9f:1278
db dummyd_11b9c;
db dummyd_11b9d;
db dummyd_11b9e[32]; // 0f9f:127c
db dummyd_11bbe;
db dummyd_11bbf;
db dummyd_11bc0;
db dummyd_11bc1;
db dummyd_11bc2;
db dummyd_11bc3;
db dummyd_11bc4;
db dummyd_11bc5;
db dummyd_11bc6;
db dummyd_11bc7;
db dummyd_11bc8;
db dummyd_11bc9;
db dummyd_11bca;
db dummyd_11bcb;
db dummyd_11bcc; // 0f9f:12aa
db dummyd_11bcd;
db dummyd_11bce;
db dummyd_11bcf[32]; // 0f9f:12ae
db dummyd_11bef;
db dummyd_11bf0;
db dummyd_11bf1;
db dummyd_11bf2;
db dummyd_11bf3;
db dummyd_11bf4;
db dummyd_11bf5;
db dummyd_11bf6;
db dummyd_11bf7;
db dummyd_11bf8;
db dummyd_11bf9;
db dummyd_11bfa;
db dummyd_11bfb;
db dummyd_11bfc;
db dummyd_11bfd; // 0f9f:12dc
db dummyd_11bfe;
db dummyd_11bff;
db dummyd_11c00[32]; // 0f9f:12e0
db dummyd_11c20;
db dummyd_11c21;
db dummyd_11c22;
db dummyd_11c23;
db dummyd_11c24;
db dummyd_11c25;
db dummyd_11c26;
db dummyd_11c27;
db dummyd_11c28;
db dummyd_11c29;
db dummyd_11c2a;
db dummyd_11c2b;
db dummyd_11c2c;
db dummyd_11c2d;
db dummyd_11c2e; // 0f9f:130e
db dummyd_11c2f;
db dummyd_11c30;
db dummyd_11c31[32]; // 0f9f:1312
db dummyd_11c51;
db dummyd_11c52;
db dummyd_11c53;
db dummyd_11c54;
db dummyd_11c55;
db dummyd_11c56;
db dummyd_11c57;
db dummyd_11c58;
db dummyd_11c59;
db dummyd_11c5a;
db dummyd_11c5b;
db dummyd_11c5c;
db dummyd_11c5d;
db dummyd_11c5e;
db dummyd_11c5f; // 0f9f:1340
db dummyd_11c60;
db dummyd_11c61;
db dummyd_11c62[32]; // 0f9f:1344
db dummyd_11c82;
db dummyd_11c83;
db dummyd_11c84;
db dummyd_11c85;
db dummyd_11c86;
db dummyd_11c87;
db dummyd_11c88;
db dummyd_11c89;
db dummyd_11c8a;
db dummyd_11c8b;
db dummyd_11c8c;
db dummyd_11c8d;
db dummyd_11c8e;
db dummyd_11c8f;
db dummyd_11c90; // 0f9f:1372
db dummyd_11c91;
db dummyd_11c92;
db dummyd_11c93[32]; // 0f9f:1376
db dummyd_11cb3;
db dummyd_11cb4;
db dummyd_11cb5;
db dummyd_11cb6;
db dummyd_11cb7;
db dummyd_11cb8;
db dummyd_11cb9;
db dummyd_11cba;
db dummyd_11cbb;
db dummyd_11cbc;
db dummyd_11cbd;
db dummyd_11cbe;
db dummyd_11cbf;
db dummyd_11cc0;
db dummyd_11cc1; // 0f9f:13a4
db dummyd_11cc2;
db dummyd_11cc3;
db dummyd_11cc4[32]; // 0f9f:13a8
db dummyd_11ce4;
db dummyd_11ce5;
db dummyd_11ce6;
db dummyd_11ce7;
db dummyd_11ce8;
db dummyd_11ce9;
db dummyd_11cea;
db dummyd_11ceb;
db dummyd_11cec;
db dummyd_11ced;
db dummyd_11cee;
db dummyd_11cef;
db dummyd_11cf0;
db dummyd_11cf1;
db dummyd_11cf2; // 0f9f:13d6
db dummyd_11cf3;
db dummyd_11cf4;
db dummyd_11cf5[32]; // 0f9f:13da
db dummyd_11d15;
db dummyd_11d16;
db dummyd_11d17;
db dummyd_11d18;
db dummyd_11d19;
db dummyd_11d1a;
db dummyd_11d1b;
db dummyd_11d1c;
db dummyd_11d1d;
db dummyd_11d1e;
db dummyd_11d1f;
db dummyd_11d20;
db dummyd_11d21;
db dummyd_11d22;
db dummyd_11d23; // 0f9f:1408
db dummyd_11d24;
db dummyd_11d25;
db dummyd_11d26[32]; // 0f9f:140c
db dummyd_11d46;
db dummyd_11d47;
db dummyd_11d48;
db dummyd_11d49;
db dummyd_11d4a;
db dummyd_11d4b;
db dummyd_11d4c;
db dummyd_11d4d;
db dummyd_11d4e;
db dummyd_11d4f;
db dummyd_11d50;
db dummyd_11d51;
db dummyd_11d52;
db dummyd_11d53;
db dummyd_11d54; // 0f9f:143a
db dummyd_11d55;
db dummyd_11d56;
db dummyd_11d57[32]; // 0f9f:143e
db dummyd_11d77;
db dummyd_11d78;
db dummyd_11d79;
db dummyd_11d7a;
db dummyd_11d7b;
db dummyd_11d7c;
db dummyd_11d7d;
db dummyd_11d7e;
db dummyd_11d7f;
db dummyd_11d80;
db dummyd_11d81;
db dummyd_11d82;
db dummyd_11d83;
db dummyd_11d84;
db dummyd_11d85; // 0f9f:146c
db dummyd_11d86;
db dummyd_11d87;
db dummyd_11d88[32]; // 0f9f:1470
db dummyd_11da8;
db dummyd_11da9;
db dummyd_11daa;
db dummyd_11dab;
db dummyd_11dac;
db dummyd_11dad;
db dummyd_11dae;
db dummyd_11daf;
db dummyd_11db0;
db dummyd_11db1;
db dummyd_11db2;
db dummyd_11db3;
db dummyd_11db4;
db dummyd_11db5;
db dummyd_11db6; // 0f9f:149e
db dummyd_11db7;
db dummyd_11db8;
db dummyd_11db9[32]; // 0f9f:14a2
db dummyd_11dd9;
db dummyd_11dda;
db dummyd_11ddb;
db dummyd_11ddc;
db dummyd_11ddd;
db dummyd_11dde;
db dummyd_11ddf;
db dummyd_11de0;
db dummyd_11de1;
db dummyd_11de2;
db dummyd_11de3;
db dummyd_11de4;
db dummyd_11de5;
db dummyd_11de6;
db dummyd_11de7; // 0f9f:14d0
db dummyd_11de8;
db dummyd_11de9;
db dummyd_11dea[32]; // 0f9f:14d4
db dummyd_11e0a;
db dummyd_11e0b;
db dummyd_11e0c;
db dummyd_11e0d;
db dummyd_11e0e;
db dummyd_11e0f;
db dummyd_11e10;
db dummyd_11e11;
db dummyd_11e12;
db dummyd_11e13;
db dummyd_11e14;
db dummyd_11e15;
db dummyd_11e16;
db dummyd_11e17;
db dummyd_11e18; // 0f9f:1502
db dummyd_11e19;
db dummyd_11e1a;
db dummyd_11e1b[32]; // 0f9f:1506
db dummyd_11e3b;
db dummyd_11e3c;
db dummyd_11e3d;
db dummyd_11e3e;
db dummyd_11e3f;
db dummyd_11e40;
db dummyd_11e41;
db dummyd_11e42;
db dummyd_11e43;
db dummyd_11e44;
db dummyd_11e45;
db dummyd_11e46;
db dummyd_11e47;
db dummyd_11e48;
db dummyd_11e49; // 0f9f:1534
db dummyd_11e4a;
db dummyd_11e4b;
db dummyd_11e4c[32]; // 0f9f:1538
db dummyd_11e6c;
db dummyd_11e6d;
db dummyd_11e6e;
db dummyd_11e6f;
db dummyd_11e70;
db dummyd_11e71;
db dummyd_11e72;
db dummyd_11e73;
db dummyd_11e74;
db dummyd_11e75;
db dummyd_11e76;
db dummyd_11e77;
db dummyd_11e78;
db dummyd_11e79;
db dummyd_11e7a; // 0f9f:1566
db dummyd_11e7b;
db dummyd_11e7c;
db dummyd_11e7d[32]; // 0f9f:156a
db dummyd_11e9d;
db dummyd_11e9e;
db dummyd_11e9f;
db dummyd_11ea0;
db dummyd_11ea1;
db dummyd_11ea2;
db dummyd_11ea3;
db dummyd_11ea4;
db dummyd_11ea5;
db dummyd_11ea6;
db dummyd_11ea7;
db dummyd_11ea8;
db dummyd_11ea9;
db dummyd_11eaa;
db dummyd_11eab; // 0f9f:1598
db dummyd_11eac;
db dummyd_11ead;
db dummyd_11eae[32]; // 0f9f:159c
db dummyd_11ece;
db dummyd_11ecf;
db dummyd_11ed0;
db dummyd_11ed1;
db dummyd_11ed2;
db dummyd_11ed3;
db dummyd_11ed4;
db dummyd_11ed5;
db dummyd_11ed6;
db dummyd_11ed7;
db dummyd_11ed8;
db dummyd_11ed9;
db dummyd_11eda;
db dummyd_11edb;
db dummyd_11edc; // 0f9f:15ca
db dummyd_11edd;
db dummyd_11ede;
db dummyd_11edf[32]; // 0f9f:15ce
db dummyd_11eff;
db dummyd_11f00;
db dummyd_11f01;
db dummyd_11f02;
db dummyd_11f03;
db dummyd_11f04;
db dummyd_11f05;
db dummyd_11f06;
db dummyd_11f07;
db dummyd_11f08;
db dummyd_11f09;
db dummyd_11f0a;
db dummyd_11f0b;
db dummyd_11f0c;
db dummyd_11f0d; // 0f9f:15fc
db dummyd_11f0e;
db dummyd_11f0f;
db dummyd_11f10[32]; // 0f9f:1600
db dummyd_11f30;
db dummyd_11f31;
db dummyd_11f32;
db dummyd_11f33;
db dummyd_11f34;
db dummyd_11f35;
db dummyd_11f36;
db dummyd_11f37;
db dummyd_11f38;
db dummyd_11f39;
db dummyd_11f3a;
db dummyd_11f3b;
db dummyd_11f3c;
db dummyd_11f3d;
db dummyd_11f3e; // 0f9f:162e
db dummyd_11f3f;
db dummyd_11f40;
db dummyd_11f41[32]; // 0f9f:1632
db dummyd_11f61;
db dummyd_11f62;
db dummyd_11f63;
db dummyd_11f64;
db dummyd_11f65;
db dummyd_11f66;
db dummyd_11f67;
db dummyd_11f68;
db dummyd_11f69;
db dummyd_11f6a;
db dummyd_11f6b;
db dummyd_11f6c;
db dummyd_11f6d;
db dummyd_11f6e;
db dummyd_11f6f; // 0f9f:1660
db dummyd_11f70;
db dummyd_11f71;
db dummyd_11f72[32]; // 0f9f:1664
db dummyd_11f92;
db dummyd_11f93;
db dummyd_11f94;
db dummyd_11f95;
db dummyd_11f96;
db dummyd_11f97;
db dummyd_11f98;
db dummyd_11f99;
db dummyd_11f9a;
db dummyd_11f9b;
db dummyd_11f9c;
db dummyd_11f9d;
db dummyd_11f9e;
db dummyd_11f9f;
db dummyd_11fa0; // 0f9f:1692
db dummyd_11fa1;
db dummyd_11fa2;
db dummyd_11fa3[32]; // 0f9f:1696
db dummyd_11fc3;
db dummyd_11fc4;
db dummyd_11fc5;
db dummyd_11fc6;
db dummyd_11fc7;
db dummyd_11fc8;
db dummyd_11fc9;
db dummyd_11fca;
db dummyd_11fcb;
db dummyd_11fcc;
db dummyd_11fcd;
db dummyd_11fce;
db dummyd_11fcf;
db dummyd_11fd0;
db dummyd_11fd1; // 0f9f:16c4
db dummyd_11fd2;
db dummyd_11fd3;
db dummyd_11fd4[32]; // 0f9f:16c8
db unk_22188; // 0f9f:16e8
db dummyd_11ff5;
db dummyd_11ff6;
db dummyd_11ff7;
db dummyd_11ff8;
db dummyd_11ff9;
db dummyd_11ffa;
db dummyd_11ffb;
db dummyd_11ffc;
db dummyd_11ffd;
db dummyd_11ffe;
db dummyd_11fff;
db dummyd_12000;
db dummyd_12001;
db dummyd_12002; // 0f9f:16f6
db dummyd_12003;
db dummyd_12004;
db dummyd_12005[32]; // 0f9f:16fa
db dummyd_12025;
db dummyd_12026;
db dummyd_12027;
db dummyd_12028;
db dummyd_12029;
db dummyd_1202a;
db dummyd_1202b;
db dummyd_1202c;
db dummyd_1202d;
db dummyd_1202e;
db dummyd_1202f;
db dummyd_12030;
db dummyd_12031;
db dummyd_12032;
db dummyd_12033; // 0f9f:1728
db dummyd_12034;
db dummyd_12035;
db dummyd_12036[32]; // 0f9f:172c
db dummyd_12056;
db dummyd_12057;
db dummyd_12058;
db dummyd_12059;
db dummyd_1205a;
db dummyd_1205b;
db dummyd_1205c;
db dummyd_1205d;
db dummyd_1205e;
db dummyd_1205f;
db dummyd_12060;
db dummyd_12061;
db dummyd_12062;
db dummyd_12063;
db dummyd_12064; // 0f9f:175a
db dummyd_12065;
db dummyd_12066;
db dummyd_12067[32]; // 0f9f:175e
db dummyd_12087;
db dummyd_12088;
db dummyd_12089;
db dummyd_1208a;
db dummyd_1208b;
db dummyd_1208c;
db dummyd_1208d;
db dummyd_1208e;
db dummyd_1208f;
db dummyd_12090;
db dummyd_12091;
db dummyd_12092;
db dummyd_12093;
db dummyd_12094;
db dummyd_12095; // 0f9f:178c
db dummyd_12096;
db dummyd_12097;
db dummyd_12098[32]; // 0f9f:1790
db dummyd_120b8;
db dummyd_120b9;
db dummyd_120ba;
db dummyd_120bb;
db dummyd_120bc;
db dummyd_120bd;
db dummyd_120be;
db dummyd_120bf;
db dummyd_120c0;
db dummyd_120c1;
db dummyd_120c2;
db dummyd_120c3;
db dummyd_120c4;
db dummyd_120c5;
db dummyd_120c6; // 0f9f:17be
db dummyd_120c7;
db dummyd_120c8;
db dummyd_120c9[32]; // 0f9f:17c2
db dummyd_120e9[32]; // 0f9f:17e2
db dummyd_12109[32]; // 0f9f:1802
db dummyd_12129[32]; // 0f9f:1822
db dummyd_12149[32]; // 0f9f:1842
db dummyd_12169[32]; // 0f9f:1862
db dummyd_12189[32]; // 0f9f:1882
db dummyd_121a9[32]; // 0f9f:18a2
db dummyd_121c9[32]; // 0f9f:18c2
db dummyd_121e9[32]; // 0f9f:18e2
db dummyd_12209[32]; // 0f9f:1902
db dummyd_12229[32]; // 0f9f:1922
db dummyd_12249[32]; // 0f9f:1942
db dummyd_12269[32]; // 0f9f:1962
db dummyd_12289[32]; // 0f9f:1982
db dummyd_122a9[32]; // 0f9f:19a2
db dummyd_122c9[32]; // 0f9f:19c2
db dummyd_122e9[32]; // 0f9f:19e2
db dummyd_12309;
db dummyd_1230a;
db dummyd_1230b;
db dummyd_1230c;
db dummyd_1230d;
db dummyd_1230e;
db dummyd_1230f;
db dummyd_12310;
db byte_224aa; // 0f9f:1a0a
db dummyd_12312[32]; // 0f9f:1a0b
db dummyd_12332[32]; // 0f9f:1a2b
db dummyd_12352[32]; // 0f9f:1a4b
db dummyd_12372[32]; // 0f9f:1a6b
db dummyd_12392[32]; // 0f9f:1a8b
db dummyd_123b2[32]; // 0f9f:1aab
db dummyd_123d2[32]; // 0f9f:1acb
db dummyd_123f2[32]; // 0f9f:1aeb
db dummyd_12412[32]; // 0f9f:1b0b
db dummyd_12432[32]; // 0f9f:1b2b
db dummyd_12452[32]; // 0f9f:1b4b
db dummyd_12472[32]; // 0f9f:1b6b
db dummyd_12492[32]; // 0f9f:1b8b
db dummyd_124b2[32]; // 0f9f:1bab
db dummyd_124d2[32]; // 0f9f:1bcb
db dummyd_124f2[32]; // 0f9f:1beb
db dummyd_12512[32]; // 0f9f:1c0b
db dummyd_12532[32]; // 0f9f:1c2b
db dummyd_12552[32]; // 0f9f:1c4b
db dummyd_12572[32]; // 0f9f:1c6b
db dummyd_12592[32]; // 0f9f:1c8b
db dummyd_125b2[32]; // 0f9f:1cab
db dummyd_125d2[32]; // 0f9f:1ccb
db dummyd_125f2[32]; // 0f9f:1ceb
db dummyd_12612[32]; // 0f9f:1d0b
db dummyd_12632[32]; // 0f9f:1d2b
db dummyd_12652[32]; // 0f9f:1d4b
db dummyd_12672[32]; // 0f9f:1d6b
db dummyd_12692[32]; // 0f9f:1d8b
db dummyd_126b2[32]; // 0f9f:1dab
db dummyd_126d2[32]; // 0f9f:1dcb
db dummyd_126f2[32]; // 0f9f:1deb
db dummyd_12712[32]; // 0f9f:1e0b
db dummyd_12732[32]; // 0f9f:1e2b
db dummyd_12752[32]; // 0f9f:1e4b
db dummyd_12772[32]; // 0f9f:1e6b
db dummyd_12792[32]; // 0f9f:1e8b
db dummyd_127b2[32]; // 0f9f:1eab
db dummyd_127d2[32]; // 0f9f:1ecb
db dummyd_127f2; // 0f9f:1eeb
db dummyd_127f3;
db dummyd_127f4;
db dummyd_127f5;
db dummyd_127f6;
db dummyd_127f7;
db dummyd_127f8;
db dummyd_127f9;
db dummyd_127fa; // 0f9f:1ef3
db dummyd_127fb;
db dummyd_127fc;
db dummyd_127fd;
db unk_22997; // 0f9f:1ef7
db dummyd_127ff[32]; // 0f9f:1ef8
db dummyd_1281f[32]; // 0f9f:1f18
db dummyd_1283f[32]; // 0f9f:1f38
db dummyd_1285f[32]; // 0f9f:1f58
db dummyd_1287f[32]; // 0f9f:1f78
db dummyd_1289f[32]; // 0f9f:1f98
db dummyd_128bf[32]; // 0f9f:1fb8
db dummyd_128df[32]; // 0f9f:1fd8
db dummyd_128ff[32]; // 0f9f:1ff8
db dummyd_1291f[32]; // 0f9f:2018
db dummyd_1293f[32]; // 0f9f:2038
db dummyd_1295f[32]; // 0f9f:2058
db dummyd_1297f[32]; // 0f9f:2078
db dummyd_1299f[32]; // 0f9f:2098
db dummyd_129bf[32]; // 0f9f:20b8
db dummyd_129df[32]; // 0f9f:20d8
db dummyd_129ff[32]; // 0f9f:20f8
db dummyd_12a1f[32]; // 0f9f:2118
db dummyd_12a3f[32]; // 0f9f:2138
db dummyd_12a5f[32]; // 0f9f:2158
db dummyd_12a7f[32]; // 0f9f:2178
db dummyd_12a9f[32]; // 0f9f:2198
db dummyd_12abf[32]; // 0f9f:21b8
db dummyd_12adf[32]; // 0f9f:21d8
db dummyd_12aff[32]; // 0f9f:21f8
db dummyd_12b1f[32]; // 0f9f:2218
db dummyd_12b3f[32]; // 0f9f:2238
db dummyd_12b5f[32]; // 0f9f:2258
db dummyd_12b7f[32]; // 0f9f:2278
db dummyd_12b9f[32]; // 0f9f:2298
db dummyd_12bbf[32]; // 0f9f:22b8
db dummyd_12bdf[32]; // 0f9f:22d8
db dummyd_12bff[32]; // 0f9f:22f8
db dummyd_12c1f[32]; // 0f9f:2318
db dummyd_12c3f[32]; // 0f9f:2338
db dummyd_12c5f[32]; // 0f9f:2358
db dummyd_12c7f[32]; // 0f9f:2378
db dummyd_12c9f[32]; // 0f9f:2398
db dummyd_12cbf[32]; // 0f9f:23b8
db dummyd_12cdf[32]; // 0f9f:23d8
db dummyd_12cff[32]; // 0f9f:23f8
db dummyd_12d1f[32]; // 0f9f:2418
db dummyd_12d3f[32]; // 0f9f:2438
db dummyd_12d5f[32]; // 0f9f:2458
db dummyd_12d7f[32]; // 0f9f:2478
db dummyd_12d9f[32]; // 0f9f:2498
db dummyd_12dbf[32]; // 0f9f:24b8
db dummyd_12ddf[32]; // 0f9f:24d8
db dummyd_12dff[32]; // 0f9f:24f8
db dummyd_12e1f[32]; // 0f9f:2518
db dummyd_12e3f[32]; // 0f9f:2538
db dummyd_12e5f[32]; // 0f9f:2558
db dummyd_12e7f[32]; // 0f9f:2578
db dummyd_12e9f[32]; // 0f9f:2598
db dummyd_12ebf[32]; // 0f9f:25b8
db dummyd_12edf[32]; // 0f9f:25d8
db dummyd_12eff[32]; // 0f9f:25f8
db dummyd_12f1f[32]; // 0f9f:2618
db dummyd_12f3f[32]; // 0f9f:2638
db dummyd_12f5f[32]; // 0f9f:2658
db dummyd_12f7f[32]; // 0f9f:2678
db dummyd_12f9f[32]; // 0f9f:2698
db dummyd_12fbf[32]; // 0f9f:26b8
db dummyd_12fdf[32]; // 0f9f:26d8
db dummyd_12fff[32]; // 0f9f:26f8
db dummyd_1301f[32]; // 0f9f:2718
db dummyd_1303f[32]; // 0f9f:2738
db dummyd_1305f[32]; // 0f9f:2758
db dummyd_1307f[32]; // 0f9f:2778
db dummyd_1309f[32]; // 0f9f:2798
db dummyd_130bf[32]; // 0f9f:27b8
db dummyd_130df[32]; // 0f9f:27d8
db dummyd_130ff[32]; // 0f9f:27f8
db dummyd_1311f[32]; // 0f9f:2818
db dummyd_1313f[32]; // 0f9f:2838
db dummyd_1315f[32]; // 0f9f:2858
db dummyd_1317f[32]; // 0f9f:2878
db dummyd_1319f[32]; // 0f9f:2898
db dummyd_131bf[32]; // 0f9f:28b8
db dummyd_131df[32]; // 0f9f:28d8
db dummyd_131ff[32]; // 0f9f:28f8
db dummyd_1321f[32]; // 0f9f:2918
db dummyd_1323f[32]; // 0f9f:2938
db dummyd_1325f[32]; // 0f9f:2958
db dummyd_1327f[32]; // 0f9f:2978
db dummyd_1329f[32]; // 0f9f:2998
db dummyd_132bf[32]; // 0f9f:29b8
db dummyd_132df[32]; // 0f9f:29d8
db dummyd_132ff[32]; // 0f9f:29f8
db dummyd_1331f; // 0f9f:2a18
db dummyd_13320; // 0f9f:2a19
db dummyd_13321; // 0f9f:2a1a
db dummyd_13322; // 0f9f:2a1b
db dummyd_13323; // 0f9f:2a1c
db dummyd_13324; // 0f9f:2a1d
db dummyd_13325;
db unk_234bf; // 0f9f:2a1f
db dummyd_13327[32]; // 0f9f:2a20
db dummyd_13347[32]; // 0f9f:2a40
db dummyd_13367; // 0f9f:2a60
db dummyd_13368; // 0f9f:2a61
db dummyd_13369; // 0f9f:2a62
db dummyd_1336a; // 0f9f:2a63
db dummyd_1336b; // 0f9f:2a64
db dummyd_1336c; // 0f9f:2a65
db dummyd_1336d; // 0f9f:2a66
db dummyd_1336e; // 0f9f:2a67
db dummyd_1336f; // 0f9f:2a68
db dummyd_13370; // 0f9f:2a69
db dummyd_13371; // 0f9f:2a6a
db dummyd_13372; // 0f9f:2a6b
db dummyd_13373; // 0f9f:2a6c
db dummyd_13374; // 0f9f:2a6d
db dummyd_13375; // 0f9f:2a6e
db dummyd_13376; // 0f9f:2a6f
db dummyd_13377; // 0f9f:2a70
db dummyd_13378; // 0f9f:2a71
db dummyd_13379; // 0f9f:2a72
db dummyd_1337a;
db unk_23514; // 0f9f:2a74
db dummyd_1337c;
db dummyd_1337d; // 0f9f:2a76
db dummyd_1337e; // 0f9f:2a77
db dummyd_1337f; // 0f9f:2a78
db dummyd_13380; // 0f9f:2a79
db dummyd_13381; // 0f9f:2a7a
db dummyd_13382; // 0f9f:2a7b
db dummyd_13383; // 0f9f:2a7c
db dummyd_13384; // 0f9f:2a7d
db dummyd_13385;
db dummyd_13386; // 0f9f:2a7f
db dummyd_13387; // 0f9f:2a80
db dummyd_13388; // 0f9f:2a81
db dummyd_13389;
db dummyd_1338a; // 0f9f:2a83
db dummyd_1338b; // 0f9f:2a84
db dummyd_1338c; // 0f9f:2a85
db dummyd_1338d; // 0f9f:2a86
db dummyd_1338e;
db dummyd_1338f; // 0f9f:2a88
db dummyd_13390;
db dummyd_13391; // 0f9f:2a8a
db dummyd_13392; // 0f9f:2a8b
db dummyd_13393; // 0f9f:2a8c
db dummyd_13394; // 0f9f:2a8d
db dummyd_13395; // 0f9f:2a8e
db dummyd_13396; // 0f9f:2a8f
db dummyd_13397; // 0f9f:2a90
db dummyd_13398; // 0f9f:2a91
db dummyd_13399; // 0f9f:2a92
db unk_23533; // 0f9f:2a93
db dummyd_1339b; // 0f9f:2a94
db dummyd_1339c; // 0f9f:2a95
db dummyd_1339d; // 0f9f:2a96
db dummyd_1339e; // 0f9f:2a97
db dummyd_1339f; // 0f9f:2a98
db dummyd_133a0; // 0f9f:2a99
db dummyd_133a1; // 0f9f:2a9a
db dummyd_133a2; // 0f9f:2a9b
db dummyd_133a3; // 0f9f:2a9c
db dummyd_133a4; // 0f9f:2a9d
db dummyd_133a5;
db dummyd_133a6; // 0f9f:2a9f
db dummyd_133a7; // 0f9f:2aa0
db dummyd_133a8; // 0f9f:2aa1
db dummyd_133a9; // 0f9f:2aa2
db unk_23543; // 0f9f:2aa3
db dummyd_133ab; // 0f9f:2aa4
db dummyd_133ac; // 0f9f:2aa5
db dummyd_133ad; // 0f9f:2aa6
db dummyd_133ae; // 0f9f:2aa7
db dummyd_133af; // 0f9f:2aa8
db dummyd_133b0; // 0f9f:2aa9
db dummyd_133b1; // 0f9f:2aaa
db dummyd_133b2; // 0f9f:2aab
db dummyd_133b3; // 0f9f:2aac
db dummyd_133b4; // 0f9f:2aad
db dummyd_133b5; // 0f9f:2aae
db dummyd_133b6; // 0f9f:2aaf
db dummyd_133b7; // 0f9f:2ab0
db dummyd_133b8; // 0f9f:2ab1
db dummyd_133b9; // 0f9f:2ab2
db dummyd_133ba; // 0f9f:2ab3
db dummyd_133bb; // 0f9f:2ab4
db unk_23555; // 0f9f:2ab5
db dummyd_133bd[32]; // 0f9f:2ab6
db dummyd_133dd[32]; // 0f9f:2ad6
db dummyd_133fd[32]; // 0f9f:2af6
db dummyd_1341d[32]; // 0f9f:2b16
db dummyd_1343d[32]; // 0f9f:2b36
db dummyd_1345d[32]; // 0f9f:2b56
db dummyd_1347d; // 0f9f:2b76
db dummyd_1347e; // 0f9f:2b77
db unk_23618; // 0f9f:2b78
db dummyd_13480; // 0f9f:2b79
db dummyd_13481; // 0f9f:2b7a
db dummyd_13482; // 0f9f:2b7b
db dummyd_13483; // 0f9f:2b7c
db dummyd_13484; // 0f9f:2b7d
db dummyd_13485; // 0f9f:2b7e
db dummyd_13486; // 0f9f:2b7f
db dummyd_13487; // 0f9f:2b80
db dummyd_13488; // 0f9f:2b81
db dummyd_13489; // 0f9f:2b82
dw dummyd_1348a; // 0f9f:2b83
db dummyd_1348c[32]; // 0f9f:2b85
db dummyd_134ac[32]; // 0f9f:2ba5
db dummyd_134cc[32]; // 0f9f:2bc5
db dummyd_134ec[32]; // 0f9f:2be5
db dummyd_1350c[32]; // 0f9f:2c05
db dummyd_1352c[32]; // 0f9f:2c25
db dummyd_1354c[32]; // 0f9f:2c45
db dummyd_1356c[32]; // 0f9f:2c65
db dummyd_1358c[32]; // 0f9f:2c85
db dummyd_135ac[32]; // 0f9f:2ca5
db dummyd_135cc[32]; // 0f9f:2cc5
db dummyd_135ec[32]; // 0f9f:2ce5
db dummyd_1360c[32]; // 0f9f:2d05
db dummyd_1362c[32]; // 0f9f:2d25
db dummyd_1364c[32]; // 0f9f:2d45
db dummyd_1366c[32]; // 0f9f:2d65
db dummyd_1368c[32]; // 0f9f:2d85
db dummyd_136ac[32]; // 0f9f:2da5
db dummyd_136cc[32]; // 0f9f:2dc5
db dummyd_136ec[32]; // 0f9f:2de5
db dummyd_1370c[32]; // 0f9f:2e05
db dummyd_1372c[32]; // 0f9f:2e25
db dummyd_1374c[32]; // 0f9f:2e45
db dummyd_1376c[32]; // 0f9f:2e65
db dummyd_1378c[32]; // 0f9f:2e85
db dummyd_137ac[32]; // 0f9f:2ea5
db dummyd_137cc[32]; // 0f9f:2ec5
db dummyd_137ec[32]; // 0f9f:2ee5
db dummyd_1380c[32]; // 0f9f:2f05
db dummyd_1382c[32]; // 0f9f:2f25
db dummyd_1384c[32]; // 0f9f:2f45
db dummyd_1386c[32]; // 0f9f:2f65
db dummyd_1388c[32]; // 0f9f:2f85
db dummyd_138ac[32]; // 0f9f:2fa5
db dummyd_138cc[32]; // 0f9f:2fc5
db dummyd_138ec[32]; // 0f9f:2fe5
db dummyd_1390c[32]; // 0f9f:3005
db dummyd_1392c[32]; // 0f9f:3025
db dummyd_1394c[32]; // 0f9f:3045
db dummyd_1396c; // 0f9f:3065
db dummyd_1396d; // 0f9f:3066
db dummyd_1396e; // 0f9f:3067
db dummyd_1396f; // 0f9f:3068
db dummyd_13970; // 0f9f:3069
db dummyd_13971; // 0f9f:306a
db dummyd_13972; // 0f9f:306b
db dummyd_13973; // 0f9f:306c
db dummyd_13974;
db dummyd_13975; // 0f9f:306e
db dummyd_13976; // 0f9f:306f
db unk_23b10; // 0f9f:3070
db dummyd_13978[32]; // 0f9f:3071
db dummyd_13998[32]; // 0f9f:3091
db dummyd_139b8[32]; // 0f9f:30b1
db dummyd_139d8[32]; // 0f9f:30d1
db dummyd_139f8[32]; // 0f9f:30f1
db dummyd_13a18[32]; // 0f9f:3111
db dummyd_13a38[32]; // 0f9f:3131
db dummyd_13a58[32]; // 0f9f:3151
db dummyd_13a78[32]; // 0f9f:3171
db dummyd_13a98[32]; // 0f9f:3191
db dummyd_13ab8[32]; // 0f9f:31b1
db dummyd_13ad8[32]; // 0f9f:31d1
db dummyd_13af8[32]; // 0f9f:31f1
db dummyd_13b18[32]; // 0f9f:3211
db dummyd_13b38[32]; // 0f9f:3231
db dummyd_13b58[32]; // 0f9f:3251
db dummyd_13b78[32]; // 0f9f:3271
db dummyd_13b98[32]; // 0f9f:3291
db dummyd_13bb8;
db dummyd_13bb9;
db dummyd_13bba;
db dummyd_13bbb;
db dummyd_13bbc;
db dummyd_13bbd;
db dummyd_13bbe;
db dummyd_13bbf;
db dummyd_13bc0;
db dummyd_13bc1;
db dummyd_13bc2;
db dummyd_13bc3;
db dummyd_13bc4;
db dummyd_13bc5;
db dummyd_13bc6;
db dummyd_13bc7;
db dummyd_13bc8;
db dummyd_13bc9;
db dummyd_13bca;
db dummyd_13bcb;
db dummyd_13bcc;
db dummyd_13bcd;
db dummyd_13bce;
db dummyd_13bcf;
db dummyd_13bd0;
db dummyd_13bd1;
db dummyd_13bd2;
db dummyd_13bd3;
db dummyd_13bd4;
db dummyd_13bd5;
db dummyd_13bd6;
db byte_23d70; // 0f9f:32d0
db dummyd_13bd8[32]; // 0f9f:32d1
db dummyd_13bf8[32]; // 0f9f:32f1
db dummyd_13c18;
db dummyd_13c19;
db dummyd_13c1a;
db dummyd_13c1b;
db dummyd_13c1c;
db dummyd_13c1d;
db dummyd_13c1e;
db byte_23db8; // 0f9f:3318
db dummyd_13c20[32]; // 0f9f:3319
db dummyd_13c40;
db dummyd_13c41;
db dummyd_13c42;
db dummyd_13c43;
db dummyd_13c44;
db dummyd_13c45;
db dummyd_13c46;
db dummyd_13c47;
db dummyd_13c48;
db byte_23de2; // 0f9f:3342
db dummyd_13c4a[32]; // 0f9f:3343
db dummyd_13c6a[32]; // 0f9f:3363
db dummyd_13c8a[32]; // 0f9f:3383
db dummyd_13caa[32]; // 0f9f:33a3
db dummyd_13cca;
db dummyd_13ccb;
db dummyd_13ccc;
db dummyd_13ccd;
db dummyd_13cce;
db dummyd_13ccf;
db dummyd_13cd0;
db dummyd_13cd1;
db dummyd_13cd2;
db dummyd_13cd3;
db byte_23e6d; // 0f9f:33cd
db dummyd_13cd5[32]; // 0f9f:33ce
db dummyd_13cf5[32]; // 0f9f:33ee
db dummyd_13d15[32]; // 0f9f:340e
db dummyd_13d35[32]; // 0f9f:342e
db dummyd_13d55[32]; // 0f9f:344e
db dummyd_13d75;
db dummyd_13d76;
db dummyd_13d77;
db dummyd_13d78;
db dummyd_13d79;
db dummyd_13d7a;
db dummyd_13d7b;
db dummyd_13d7c;
db dummyd_13d7d;
db dummyd_13d7e;
db dummyd_13d7f;
db dummyd_13d80;
db dummyd_13d81;
db dummyd_13d82;
db dummyd_13d83;
db dummyd_13d84;
db dummyd_13d85;
db dummyd_13d86;
db dummyd_13d87;
db dummyd_13d88;
db dummyd_13d89;
db dummyd_13d8a;
db dummyd_13d8b;
db byte_23f25; // 0f9f:3485
db dummyd_13d8d;
db dummyd_13d8e;
db dummyd_13d8f;
db dummyd_13d90;
db dummyd_13d91;
db dummyd_13d92;
db dummyd_13d93;
db dummyd_13d94;
db dummyd_13d95;
db dummyd_13d96;
db dummyd_13d97;
db dummyd_13d98;
db dummyd_13d99;
db dummyd_13d9a;
db dummyd_13d9b;
db byte_23f35; // 0f9f:3495
db dummyd_13d9d[32]; // 0f9f:3496
db dummyd_13dbd[32]; // 0f9f:34b6
db dummyd_13ddd[32]; // 0f9f:34d6
db dummyd_13dfd[32]; // 0f9f:34f6
db dummyd_13e1d[32]; // 0f9f:3516
db dummyd_13e3d[32]; // 0f9f:3536
db dummyd_13e5d[32]; // 0f9f:3556
db dummyd_13e7d[32]; // 0f9f:3576
db dummyd_13e9d[32]; // 0f9f:3596
db dummyd_13ebd;
db dummyd_13ebe;
db dummyd_13ebf;
db dummyd_13ec0;
db dummyd_13ec1;
db dummyd_13ec2;
db dummyd_13ec3;
db dummyd_13ec4;
db dummyd_13ec5;
db dummyd_13ec6;
db byte_24060; // 0f9f:35c0
db dummyd_13ec8;
db dummyd_13ec9;
db dummyd_13eca;
db dummyd_13ecb;
db dummyd_13ecc;
db dummyd_13ecd;
db dummyd_13ece;
db dummyd_13ecf;
db dummyd_13ed0;
db dummyd_13ed1;
db dummyd_13ed2;
db dummyd_13ed3;
db dummyd_13ed4;
db dummyd_13ed5;
db dummyd_13ed6;
db dummyd_13ed7;
db dummyd_13ed8;
db dummyd_13ed9;
db dummyd_13eda;
db dummyd_13edb;
db dummyd_13edc;
db dummyd_13edd;
db dummyd_13ede;
db dummyd_13edf;
db dummyd_13ee0;
db dummyd_13ee1;
db dummyd_13ee2;
db dummyd_13ee3;
db dummyd_13ee4;
db dummyd_13ee5;
db byte_2407f; // 0f9f:35df
db dummyd_13ee7[32]; // 0f9f:35e0
db dummyd_13f07;
db dummyd_13f08;
db dummyd_13f09;
db dummyd_13f0a;
db dummyd_13f0b;
db dummyd_13f0c;
db dummyd_13f0d;
db dummyd_13f0e;
db dummyd_13f0f;
db byte_240a9; // 0f9f:3609
db dummyd_13f11[32]; // 0f9f:360a
db dummyd_13f31[32]; // 0f9f:362a
db dummyd_13f51[32]; // 0f9f:364a
db dummyd_13f71;
db dummyd_13f72;
db dummyd_13f73;
db dummyd_13f74;
db byte_2410e; // 0f9f:366e
db dummyd_13f76[32]; // 0f9f:366f
db dummyd_13f96;
db dummyd_13f97;
db dummyd_13f98;
db dummyd_13f99;
db dummyd_13f9a;
db dummyd_13f9b;
db dummyd_13f9c;
db dummyd_13f9d;
db dummyd_13f9e;
db dummyd_13f9f;
db dummyd_13fa0;
db dummyd_13fa1;
db dummyd_13fa2;
db dummyd_13fa3;
db byte_2413d; // 0f9f:369d
db dummyd_13fa5;
db dummyd_13fa6;
db dummyd_13fa7;
db dummyd_13fa8;
db dummyd_13fa9;
db dummyd_13faa;
db dummyd_13fab;
db dummyd_13fac;
db dummyd_13fad;
db dummyd_13fae;
db dummyd_13faf;
db dummyd_13fb0;
db dummyd_13fb1;
db dummyd_13fb2;
db dummyd_13fb3;
db dummyd_13fb4;
db dummyd_13fb5;
db dummyd_13fb6;
db dummyd_13fb7;
db dummyd_13fb8;
db dummyd_13fb9;
db dummyd_13fba;
db dummyd_13fbb;
db dummyd_13fbc;
db dummyd_13fbd;
db dummyd_13fbe;
db dummyd_13fbf;
db dummyd_13fc0;
db dummyd_13fc1;
db dummyd_13fc2;
db byte_2415c; // 0f9f:36bc
db dummyd_13fc4[32]; // 0f9f:36bd
db dummyd_13fe4[32]; // 0f9f:36dd
db dummyd_14004[32]; // 0f9f:36fd
db dummyd_14024[32]; // 0f9f:371d
db dummyd_14044[32]; // 0f9f:373d
db dummyd_14064[32]; // 0f9f:375d
db dummyd_14084;
db dummyd_14085;
db dummyd_14086;
db dummyd_14087;
db dummyd_14088;
db dummyd_14089;
db dummyd_1408a;
db byte_24224; // 0f9f:3784
db dummyd_1408c[32]; // 0f9f:3785
db dummyd_140ac[32]; // 0f9f:37a5
db dummyd_140cc;
db dummyd_140cd;
db dummyd_140ce;
db dummyd_140cf;
db dummyd_140d0;
db dummyd_140d1;
db dummyd_140d2;
db dummyd_140d3;
db dummyd_140d4;
db dummyd_140d5;
db dummyd_140d6;
db dummyd_140d7;
db dummyd_140d8;
db dummyd_140d9;
db dummyd_140da;
db dummyd_140db;
db byte_24275; // 0f9f:37d5
db dummyd_140dd[32]; // 0f9f:37d6
db dummyd_140fd;
db dummyd_140fe;
db dummyd_140ff;
db dummyd_14100;
db dummyd_14101;
db dummyd_14102;
db dummyd_14103;
db dummyd_14104;
db dummyd_14105;
db dummyd_14106;
db dummyd_14107;
db dummyd_14108;
db dummyd_14109;
db dummyd_1410a;
db dummyd_1410b;
db byte_242a5; // 0f9f:3805
db dummyd_1410d[32]; // 0f9f:3806
db dummyd_1412d[32]; // 0f9f:3826
db dummyd_1414d[32]; // 0f9f:3846
db dummyd_1416d[32]; // 0f9f:3866
db dummyd_1418d[32]; // 0f9f:3886
db dummyd_141ad[32]; // 0f9f:38a6
db dummyd_141cd[32]; // 0f9f:38c6
db dummyd_141ed;
db dummyd_141ee;
db dummyd_141ef; // 0f9f:38e8
db dummyd_141f0; // 0f9f:38e9
db unk_2438a; // 0f9f:38ea
db dummyd_141f2[32]; // 0f9f:38eb
db dummyd_14212[32]; // 0f9f:390b
db dummyd_14232[32]; // 0f9f:392b
db dummyd_14252;
db dummyd_14253; // 0f9f:394c
db dummyd_14254; // 0f9f:394d
db dummyd_14255;
db dummyd_14256;
db dummyd_14257; // 0f9f:3950
db dummyd_14258;
db dummyd_14259;
db dummyd_1425a;
db dummyd_1425b; // 0f9f:3954
db dummyd_1425c; // 0f9f:3955
db dummyd_1425d;
db dummyd_1425e;
db dummyd_1425f; // 0f9f:3958
db dummyd_14260; // 0f9f:3959
db dummyd_14261;
db dummyd_14262;
db dummyd_14263; // 0f9f:395c
db dummyd_14264; // 0f9f:395d
db dummyd_14265;
db dummyd_14266;
db dummyd_14267; // 0f9f:3960
db dummyd_14268;
db dummyd_14269;
db dummyd_1426a;
db dummyd_1426b; // 0f9f:3964
db dummyd_1426c; // 0f9f:3965
db dummyd_1426d;
db dummyd_1426e; // 0f9f:3967
db dummyd_1426f; // 0f9f:3968
db dummyd_14270;
db unk_2440a; // 0f9f:396a
db dummyd_14272[32]; // 0f9f:396b
db dummyd_14292[32]; // 0f9f:398b
db dummyd_142b2[32]; // 0f9f:39ab
db dummyd_142d2[32]; // 0f9f:39cb
db dummyd_142f2[32]; // 0f9f:39eb
db dummyd_14312[32]; // 0f9f:3a0b
db dummyd_14332[32]; // 0f9f:3a2b
db dummyd_14352[32]; // 0f9f:3a4b
db dummyd_14372[32]; // 0f9f:3a6b
db dummyd_14392[32]; // 0f9f:3a8b
db dummyd_143b2[32]; // 0f9f:3aab
db dummyd_143d2;
db dummyd_143d3;
db dummyd_143d4;
db dummyd_143d5;
db dummyd_143d6;
db dummyd_143d7;
db dummyd_143d8;
db dummyd_143d9;
db dummyd_143da;
db dummyd_143db;
db dummyd_143dc;
db dummyd_143dd;
db dummyd_143de;
db dummyd_143df;
db dummyd_143e0;
db dummyd_143e1;
db dummyd_143e2;
db dummyd_143e3;
db byte_2457d; // 0f9f:3add
db dummyd_143e5[32]; // 0f9f:3ade
db dummyd_14405[32]; // 0f9f:3afe
db dummyd_14425[32]; // 0f9f:3b1e
db dummyd_14445[32]; // 0f9f:3b3e
db dummyd_14465[32]; // 0f9f:3b5e
db dummyd_14485;
db dummyd_14486;
db dummyd_14487;
db dummyd_14488;
db dummyd_14489;
db dummyd_1448a;
db dummyd_1448b;
db dummyd_1448c;
db dummyd_1448d;
db dummyd_1448e;
db byte_24628; // 0f9f:3b88
db dummyd_14490[32]; // 0f9f:3b89
db dummyd_144b0[32]; // 0f9f:3ba9
db dummyd_144d0[32]; // 0f9f:3bc9
db dummyd_144f0[32]; // 0f9f:3be9
db dummyd_14510[32]; // 0f9f:3c09
db dummyd_14530[32]; // 0f9f:3c29
db dummyd_14550[32]; // 0f9f:3c49
db dummyd_14570[32]; // 0f9f:3c69
db dummyd_14590[32]; // 0f9f:3c89
db dummyd_145b0[32]; // 0f9f:3ca9
db dummyd_145d0[32]; // 0f9f:3cc9
db dummyd_145f0[32]; // 0f9f:3ce9
db dummyd_14610[32]; // 0f9f:3d09
db dummyd_14630[32]; // 0f9f:3d29
db dummyd_14650[32]; // 0f9f:3d49
db dummyd_14670[32]; // 0f9f:3d69
db dummyd_14690[32]; // 0f9f:3d89
db dummyd_146b0[32]; // 0f9f:3da9
db dummyd_146d0[32]; // 0f9f:3dc9
db dummyd_146f0[32]; // 0f9f:3de9
db dummyd_14710[32]; // 0f9f:3e09
db dummyd_14730[32]; // 0f9f:3e29
db dummyd_14750[32]; // 0f9f:3e49
db dummyd_14770[32]; // 0f9f:3e69
db dummyd_14790[32]; // 0f9f:3e89
db dummyd_147b0[32]; // 0f9f:3ea9
db dummyd_147d0[32]; // 0f9f:3ec9
db dummyd_147f0[32]; // 0f9f:3ee9
db dummyd_14810[32]; // 0f9f:3f09
db dummyd_14830[32]; // 0f9f:3f29
db dummyd_14850;
db dummyd_14851;
db dummyd_14852;
db dummyd_14853;
db dummyd_14854;
db dummyd_14855;
db dummyd_14856;
db dummyd_14857;
db dummyd_14858;
db dummyd_14859;
db dummyd_1485a;
db dummyd_1485b;
db dummyd_1485c;
db dummyd_1485d;
db dummyd_1485e;
db dummyd_1485f;
db dummyd_14860;
db dummyd_14861;
db dummyd_14862;
db dummyd_14863;
db dummyd_14864;
db dummyd_14865;
db dummyd_14866;
db byte_24a00; // 0f9f:3f60
db dummyd_14868[32]; // 0f9f:3f61
db dummyd_14888[32]; // 0f9f:3f81
db dummyd_148a8[32]; // 0f9f:3fa1
db dummyd_148c8[32]; // 0f9f:3fc1
db dummyd_148e8[32]; // 0f9f:3fe1
db dummyd_14908[32]; // 0f9f:4001
db dummyd_14928[32]; // 0f9f:4021
db dummyd_14948[32]; // 0f9f:4041
db dummyd_14968[32]; // 0f9f:4061
db dummyd_14988[32]; // 0f9f:4081
db dummyd_149a8[32]; // 0f9f:40a1
db dummyd_149c8[32]; // 0f9f:40c1
db dummyd_149e8[32]; // 0f9f:40e1
db dummyd_14a08[32]; // 0f9f:4101
db dummyd_14a28[32]; // 0f9f:4121
db dummyd_14a48[32]; // 0f9f:4141
db dummyd_14a68[32]; // 0f9f:4161
db dummyd_14a88[32]; // 0f9f:4181
db dummyd_14aa8[32]; // 0f9f:41a1
db dummyd_14ac8[32]; // 0f9f:41c1
db dummyd_14ae8[32]; // 0f9f:41e1
db dummyd_14b08[32]; // 0f9f:4201
db dummyd_14b28[32]; // 0f9f:4221
db dummyd_14b48[32]; // 0f9f:4241
db dummyd_14b68[32]; // 0f9f:4261
db dummyd_14b88[32]; // 0f9f:4281
db dummyd_14ba8[32]; // 0f9f:42a1
db dummyd_14bc8[32]; // 0f9f:42c1
db dummyd_14be8[32]; // 0f9f:42e1
db dummyd_14c08[32]; // 0f9f:4301
db dummyd_14c28[32]; // 0f9f:4321
db dummyd_14c48[32]; // 0f9f:4341
db dummyd_14c68[32]; // 0f9f:4361
db dummyd_14c88[32]; // 0f9f:4381
db dummyd_14ca8[32]; // 0f9f:43a1
db dummyd_14cc8[32]; // 0f9f:43c1
db dummyd_14ce8[32]; // 0f9f:43e1
db dummyd_14d08[32]; // 0f9f:4401
db dummyd_14d28[32]; // 0f9f:4421
db dummyd_14d48[32]; // 0f9f:4441
db dummyd_14d68[32]; // 0f9f:4461
db dummyd_14d88[32]; // 0f9f:4481
db dummyd_14da8[32]; // 0f9f:44a1
db dummyd_14dc8[32]; // 0f9f:44c1
db dummyd_14de8[32]; // 0f9f:44e1
db dummyd_14e08[32]; // 0f9f:4501
db dummyd_14e28[32]; // 0f9f:4521
db dummyd_14e48[32]; // 0f9f:4541
db dummyd_14e68[32]; // 0f9f:4561
db dummyd_14e88[32]; // 0f9f:4581
db dummyd_14ea8[32]; // 0f9f:45a1
db dummyd_14ec8[32]; // 0f9f:45c1
db dummyd_14ee8[32]; // 0f9f:45e1
db dummyd_14f08[32]; // 0f9f:4601
db dummyd_14f28; // 0f9f:4621
db dummyd_14f29; // 0f9f:4622
db dummyd_14f2a; // 0f9f:4623
db dummyd_14f2b;
db dummyd_14f2c;
db dummyd_14f2d; // 0f9f:4626
db dummyd_14f2e;
db dummyd_14f2f; // 0f9f:4628
db dummyd_14f30;
db dummyd_14f31; // 0f9f:462a
db dummyd_14f32;
db dummyd_14f33; // 0f9f:462c
db dummyd_14f34;
db dummyd_14f35; // 0f9f:462e
db dummyd_14f36;
db dummyd_14f37; // 0f9f:4630
db dummyd_14f38;
db dummyd_14f39; // 0f9f:4632
db dummyd_14f3a;
db dummyd_14f3b; // 0f9f:4634
db dummyd_14f3c; // 0f9f:4635
db dummyd_14f3d; // 0f9f:4636
db unk_250d7; // 0f9f:4637
db dummyd_14f3f[32]; // 0f9f:4638
db dummyd_14f5f; // 0f9f:4658
db dummyd_14f60; // 0f9f:4659
db dummyd_14f61; // 0f9f:465a
db dummyd_14f62; // 0f9f:465b
db dummyd_14f63; // 0f9f:465c
db dummyd_14f64; // 0f9f:465d
db dummyd_14f65; // 0f9f:465e
db dummyd_14f66; // 0f9f:465f
db dummyd_14f67; // 0f9f:4660
db dummyd_14f68; // 0f9f:4661
db dummyd_14f69; // 0f9f:4662
db dummyd_14f6a; // 0f9f:4663
db dummyd_14f6b; // 0f9f:4664
db dummyd_14f6c; // 0f9f:4665
db dummyd_14f6d; // 0f9f:4666
db dummyd_14f6e; // 0f9f:4667
db unk_25108; // 0f9f:4668
db dummyd_14f70; // 0f9f:4669
db dummyd_14f71; // 0f9f:466a
db dummyd_14f72; // 0f9f:466b
db dummyd_14f73; // 0f9f:466c
db dummyd_14f74; // 0f9f:466d
db dummyd_14f75; // 0f9f:466e
db dummyd_14f76; // 0f9f:466f
db dummyd_14f77; // 0f9f:4670
db dummyd_14f78; // 0f9f:4671
db dummyd_14f79; // 0f9f:4672
db dummyd_14f7a; // 0f9f:4673
db unk_25114; // 0f9f:4674
db dummyd_14f7c[32]; // 0f9f:4675
db dummyd_14f9c[32]; // 0f9f:4695
db dummyd_14fbc[32]; // 0f9f:46b5
db dummyd_14fdc[32]; // 0f9f:46d5
db dummyd_14ffc[32]; // 0f9f:46f5
db dummyd_1501c[32]; // 0f9f:4715
db dummyd_1503c;
db dummyd_1503d; // 0f9f:4736
db dummyd_1503e; // 0f9f:4737
db unk_251d8; // 0f9f:4738
db dummyd_15040; // 0f9f:4739
db dummyd_15041; // 0f9f:473a
db dummyd_15042; // 0f9f:473b
db dummyd_15043; // 0f9f:473c
db dummyd_15044; // 0f9f:473d
db dummyd_15045; // 0f9f:473e
db dummyd_15046; // 0f9f:473f
db dummyd_15047; // 0f9f:4740
db dummyd_15048; // 0f9f:4741
db unk_251e2; // 0f9f:4742
db dummyd_1504a[32]; // 0f9f:4743
db dummyd_1506a[32]; // 0f9f:4763
db dummyd_1508a[32]; // 0f9f:4783
db dummyd_150aa[32]; // 0f9f:47a3
db dummyd_150ca[32]; // 0f9f:47c3
db dummyd_150ea[32]; // 0f9f:47e3
db dummyd_1510a[32]; // 0f9f:4803
db dummyd_1512a[32]; // 0f9f:4823
db dummyd_1514a[32]; // 0f9f:4843
db dummyd_1516a;
db dummyd_1516b; // 0f9f:4864
db dummyd_1516c;
db dummyd_1516d; // 0f9f:4866
db dummyd_1516e; // 0f9f:4867
db dummyd_1516f; // 0f9f:4868
db dummyd_15170; // 0f9f:4869
db dummyd_15171; // 0f9f:486a
db dummyd_15172; // 0f9f:486b
db dummyd_15173; // 0f9f:486c
db dummyd_15174; // 0f9f:486d
db unk_2530e; // 0f9f:486e
db dummyd_15176[32]; // 0f9f:486f
db dummyd_15196[32]; // 0f9f:488f
db dummyd_151b6[32]; // 0f9f:48af
db dummyd_151d6[32]; // 0f9f:48cf
db dummyd_151f6[32]; // 0f9f:48ef
db dummyd_15216[32]; // 0f9f:490f
db dummyd_15236[32]; // 0f9f:492f
db dummyd_15256[32]; // 0f9f:494f
db dummyd_15276[32]; // 0f9f:496f
db dummyd_15296[32]; // 0f9f:498f
db dummyd_152b6[32]; // 0f9f:49af
db dummyd_152d6[32]; // 0f9f:49cf
db dummyd_152f6[32]; // 0f9f:49ef
db dummyd_15316[32]; // 0f9f:4a0f
db dummyd_15336[32]; // 0f9f:4a2f
db dummyd_15356[32]; // 0f9f:4a4f
db dummyd_15376[32]; // 0f9f:4a6f
db dummyd_15396[32]; // 0f9f:4a8f
db dummyd_153b6[32]; // 0f9f:4aaf
db dummyd_153d6[32]; // 0f9f:4acf
db dummyd_153f6[32]; // 0f9f:4aef
db dummyd_15416[32]; // 0f9f:4b0f
db dummyd_15436[32]; // 0f9f:4b2f
db dummyd_15456[32]; // 0f9f:4b4f
db dummyd_15476[32]; // 0f9f:4b6f
db dummyd_15496[32]; // 0f9f:4b8f
db dummyd_154b6[32]; // 0f9f:4baf
db dummyd_154d6[32]; // 0f9f:4bcf
db dummyd_154f6[32]; // 0f9f:4bef
db dummyd_15516[32]; // 0f9f:4c0f
db dummyd_15536[32]; // 0f9f:4c2f
db dummyd_15556;
db dummyd_15557;
db dummyd_15558;
db dummyd_15559;
db dummyd_1555a;
db dummyd_1555b;
db dummyd_1555c;
db dummyd_1555d;
db dummyd_1555e;
db dummyd_1555f;
db dummyd_15560;
db dummyd_15561;
db dummyd_15562;
db dummyd_15563;
db dummyd_15564;
db dummyd_15565;
db dummyd_15566;
db dummyd_15567;
db dummyd_15568;
db dummyd_15569;
db dummyd_1556a;
db dummyd_1556b;
db dummyd_1556c;
db dummyd_1556d;
db dummyd_1556e;
db dummyd_1556f;
db dummyd_15570;
db dummyd_15571;
db byte_2570b; // 0f9f:4c6b
db dummyd_15573[32]; // 0f9f:4c6c
db dummyd_15593[32]; // 0f9f:4c8c
db dummyd_155b3[32]; // 0f9f:4cac
db dummyd_155d3[32]; // 0f9f:4ccc
db dummyd_155f3[32]; // 0f9f:4cec
db dummyd_15613[32]; // 0f9f:4d0c
db dummyd_15633[32]; // 0f9f:4d2c
db dummyd_15653[32]; // 0f9f:4d4c
db dummyd_15673[32]; // 0f9f:4d6c
db dummyd_15693[32]; // 0f9f:4d8c
db dummyd_156b3[32]; // 0f9f:4dac
db dummyd_156d3[32]; // 0f9f:4dcc
db dummyd_156f3[32]; // 0f9f:4dec
db dummyd_15713[32]; // 0f9f:4e0c
db dummyd_15733[32]; // 0f9f:4e2c
db dummyd_15753[32]; // 0f9f:4e4c
db dummyd_15773[32]; // 0f9f:4e6c
db dummyd_15793[32]; // 0f9f:4e8c
db dummyd_157b3[32]; // 0f9f:4eac
db dummyd_157d3[32]; // 0f9f:4ecc
db dummyd_157f3[32]; // 0f9f:4eec
db dummyd_15813[32]; // 0f9f:4f0c
db dummyd_15833[32]; // 0f9f:4f2c
db dummyd_15853[32]; // 0f9f:4f4c
db dummyd_15873[32]; // 0f9f:4f6c
db dummyd_15893[32]; // 0f9f:4f8c
db dummyd_158b3[32]; // 0f9f:4fac
db dummyd_158d3[32]; // 0f9f:4fcc
db dummyd_158f3[32]; // 0f9f:4fec
db dummyd_15913[32]; // 0f9f:500c
db dummyd_15933[32]; // 0f9f:502c
db dummyd_15953[32]; // 0f9f:504c
db dummyd_15973[32]; // 0f9f:506c
db dummyd_15993[32]; // 0f9f:508c
db dummyd_159b3[32]; // 0f9f:50ac
db dummyd_159d3[32]; // 0f9f:50cc
db dummyd_159f3[32]; // 0f9f:50ec
db dummyd_15a13[32]; // 0f9f:510c
db dummyd_15a33[32]; // 0f9f:512c
db dummyd_15a53[32]; // 0f9f:514c
db dummyd_15a73[32]; // 0f9f:516c
db dummyd_15a93[32]; // 0f9f:518c
db dummyd_15ab3[32]; // 0f9f:51ac
db dummyd_15ad3;
db dummyd_15ad4;
db dummyd_15ad5; // 0f9f:51ce
db dummyd_15ad6;
db dummyd_15ad7; // 0f9f:51d0
db dummyd_15ad8;
db dummyd_15ad9;
db dummyd_15ada; // 0f9f:51d3
db dummyd_15adb; // 0f9f:51d4
db dummyd_15adc;
db dummyd_15add;
db dummyd_15ade;
db dummyd_15adf;
db dummyd_15ae0; // 0f9f:51d9
db dummyd_15ae1; // 0f9f:51da
db dummyd_15ae2; // 0f9f:51db
db dummyd_15ae3;
db dummyd_15ae4;
db dummyd_15ae5; // 0f9f:51de
db dummyd_15ae6;
db dummyd_15ae7; // 10b9:0000
db dummyd_15ae8;
db dummyd_15ae9; // 10b9:0002
db dummyd_15aea; // 10b9:0003
db dummyd_15aeb;
db dummyd_15aec;
db dummyd_15aed; // 10b9:0006
db dummyd_15aee; // 10b9:0007
db dummyd_15aef; // 10b9:0008
db dummyd_15af0;
db dummyd_15af1; // 10b9:000a
db dummyd_15af2; // 10b9:000b
db dummyd_15af3; // 10b9:000c
db dummyd_15af4;
db dummyd_15af5; // 10b9:000e
db dummyd_15af6; // 10b9:000f
db dummyd_15af7;
db dummyd_15af8;
db dummyd_15af9; // 10b9:0012
db dummyd_15afa;
db dummyd_15afb; // 10b9:0014
db dummyd_15afc;
db dummyd_15afd;
db dummyd_15afe;
db dummyd_15aff; // 10b9:0018
db dummyd_15b00;
db dummyd_15b01;
db dummyd_15b02;
db unk_25c9c; // 10b9:001c
db dummyd_15b04[32]; // 10b9:001d
db dummyd_15b24;
db dummyd_15b25;
db dummyd_15b26;
db dummyd_15b27;
db dummyd_15b28; // 10b9:0041
db dummyd_15b29; // 10b9:0042
db dummyd_15b2a; // 10b9:0043
db dummyd_15b2b;
db dummyd_15b2c;
db dummyd_15b2d; // 10b9:0046
db dummyd_15b2e;
db dummyd_15b2f; // 10b9:0048
db dummyd_15b30;
db dummyd_15b31;
db dummyd_15b32; // 10b9:004b
db dummyd_15b33; // 10b9:004c
db dummyd_15b34;
db dummyd_15b35;
db dummyd_15b36;
db dummyd_15b37;
db dummyd_15b38; // 10b9:0051
db dummyd_15b39; // 10b9:0052
db dummyd_15b3a; // 10b9:0053
db dummyd_15b3b;
db dummyd_15b3c;
db dummyd_15b3d; // 10b9:0056
db dummyd_15b3e;
db dummyd_15b3f; // 10b9:0058
db dummyd_15b40;
db dummyd_15b41;
db dummyd_15b42; // 10b9:005b
db unk_25cdc; // 10b9:005c
db dummyd_15b44[32]; // 10b9:005d
db dummyd_15b64[32]; // 10b9:007d
db dummyd_15b84[32]; // 10b9:009d
db dummyd_15ba4[32]; // 10b9:00bd
db dummyd_15bc4[32]; // 10b9:00dd
db dummyd_15be4; // 10b9:00fd
db dummyd_15be5; // 10b9:00fe
db dummyd_15be6; // 10b9:00ff
db unk_25d80; // 10b9:0100
db dummyd_15be8[32]; // 10b9:0101
db dummyd_15c08[32]; // 10b9:0121
db dummyd_15c28; // 10b9:0141
db dummyd_15c29; // 10b9:0142
db dummyd_15c2a; // 10b9:0143
db dummyd_15c2b; // 10b9:0144
db dummyd_15c2c;
db dummyd_15c2d; // 10b9:0146
db dummyd_15c2e; // 10b9:0147
db dummyd_15c2f; // 10b9:0148
db dummyd_15c30; // 10b9:0149
db dummyd_15c31; // 10b9:014a
db unk_25dcb; // 10b9:014b
db dummyd_15c33[32]; // 10b9:014c
db dummyd_15c53[32]; // 10b9:016c
db dummyd_15c73[32]; // 10b9:018c
db dummyd_15c93[32]; // 10b9:01ac
db dummyd_15cb3[32]; // 10b9:01cc
db dummyd_15cd3[32]; // 10b9:01ec
db dummyd_15cf3[32]; // 10b9:020c
db dummyd_15d13[32]; // 10b9:022c
db dummyd_15d33[32]; // 10b9:024c
db dummyd_15d53[32]; // 10b9:026c
db dummyd_15d73[32]; // 10b9:028c
db dummyd_15d93;
db dummyd_15d94;
db dummyd_15d95;
db unk_25f2f; // 10b9:02af
db dummyd_15d97[32]; // 10b9:02b0
db dummyd_15db7[32]; // 10b9:02d0
db dummyd_15dd7[32]; // 10b9:02f0
db dummyd_15df7[32]; // 10b9:0310
db dummyd_15e17[32]; // 10b9:0330
db dummyd_15e37[32]; // 10b9:0350
db dummyd_15e57[32]; // 10b9:0370
db dummyd_15e77[32]; // 10b9:0390
db dummyd_15e97[32]; // 10b9:03b0
db dummyd_15eb7[32]; // 10b9:03d0
db dummyd_15ed7[32]; // 10b9:03f0
db dummyd_15ef7[32]; // 10b9:0410
db dummyd_15f17[32]; // 10b9:0430
db dummyd_15f37[32]; // 10b9:0450
db dummyd_15f57[32]; // 10b9:0470
db dummyd_15f77[32]; // 10b9:0490
db dummyd_15f97[32]; // 10b9:04b0
db dummyd_15fb7; // 10b9:04d0
db dummyd_15fb8;
db dummyd_15fb9;
db dummyd_15fba; // 10b9:04d3
db unk_26154; // 10b9:04d4
db dummyd_15fbc[32]; // 10b9:04d5
db dummyd_15fdc[32]; // 10b9:04f5
db dummyd_15ffc[32]; // 10b9:0515
db dummyd_1601c[32]; // 10b9:0535
db dummyd_1603c[32]; // 10b9:0555
db dummyd_1605c[32]; // 10b9:0575
db dummyd_1607c[32]; // 10b9:0595
db dummyd_1609c[32]; // 10b9:05b5
db dummyd_160bc[32]; // 10b9:05d5
db dummyd_160dc[32]; // 10b9:05f5
db dummyd_160fc; // 10b9:0615
db dummyd_160fd; // 10b9:0616
db dummyd_160fe; // 10b9:0617
db dummyd_160ff; // 10b9:0618
db dummyd_16100;
db dummyd_16101; // 10b9:061a
db dummyd_16102; // 10b9:061b
db dummyd_16103; // 10b9:061c
db dummyd_16104; // 10b9:061d
db dummyd_16105; // 10b9:061e
db dummyd_16106; // 10b9:061f
db dummyd_16107; // 10b9:0620
db dummyd_16108; // 10b9:0621
db dummyd_16109;
db dummyd_1610a; // 10b9:0623
db dummyd_1610b; // 10b9:0624
db dummyd_1610c;
db dummyd_1610d; // 10b9:0626
db dummyd_1610e;
db dummyd_1610f;
db unk_262a9; // 10b9:0629
db dummyd_16111[32]; // 10b9:062a
db dummyd_16131[32]; // 10b9:064a
db dummyd_16151[32]; // 10b9:066a
db dummyd_16171[32]; // 10b9:068a
db dummyd_16191[32]; // 10b9:06aa
db dummyd_161b1[32]; // 10b9:06ca
db dummyd_161d1[32]; // 10b9:06ea
db dummyd_161f1[32]; // 10b9:070a
db dummyd_16211[32]; // 10b9:072a
db dummyd_16231[32]; // 10b9:074a
db dummyd_16251[32]; // 10b9:076a
db dummyd_16271[32]; // 10b9:078a
db dummyd_16291; // 10b9:07aa
db dummyd_16292; // 10b9:07ab
db dummyd_16293; // 10b9:07ac
db dummyd_16294; // 10b9:07ad
db dummyd_16295; // 10b9:07ae
db dummyd_16296; // 10b9:07af
db dummyd_16297; // 10b9:07b0
db dummyd_16298;
db dummyd_16299; // 10b9:07b2
db dummyd_1629a; // 10b9:07b3
db dummyd_1629b; // 10b9:07b4
db dummyd_1629c; // 10b9:07b5
db dummyd_1629d;
db dummyd_1629e; // 10b9:07b7
db dummyd_1629f; // 10b9:07b8
db dummyd_162a0; // 10b9:07b9
db dummyd_162a1; // 10b9:07ba
db dummyd_162a2; // 10b9:07bb
db dummyd_162a3; // 10b9:07bc
db dummyd_162a4; // 10b9:07bd
db dummyd_162a5; // 10b9:07be
db dummyd_162a6; // 10b9:07bf
db dummyd_162a7;
db unk_26441; // 10b9:07c1
db dummyd_162a9[32]; // 10b9:07c2
db dummyd_162c9[32]; // 10b9:07e2
db dummyd_162e9[32]; // 10b9:0802
db dummyd_16309[32]; // 10b9:0822
db dummyd_16329[32]; // 10b9:0842
db dummyd_16349[32]; // 10b9:0862
db dummyd_16369[32]; // 10b9:0882
db dummyd_16389[32]; // 10b9:08a2
db dummyd_163a9[32]; // 10b9:08c2
db dummyd_163c9[32]; // 10b9:08e2
db dummyd_163e9; // 10b9:0902
db dummyd_163ea; // 10b9:0903
db dummyd_163eb; // 10b9:0904
db dummyd_163ec; // 10b9:0905
db dummyd_163ed; // 10b9:0906
db dummyd_163ee;
db dummyd_163ef; // 10b9:0908
db dummyd_163f0; // 10b9:0909
db dummyd_163f1;
db dummyd_163f2; // 10b9:090b
db dummyd_163f3; // 10b9:090c
db dummyd_163f4;
db dummyd_163f5; // 10b9:090e
db dummyd_163f6;
db dummyd_163f7; // 10b9:0910
db dummyd_163f8; // 10b9:0911
db dummyd_163f9; // 10b9:0912
db dummyd_163fa; // 10b9:0913
db dummyd_163fb; // 10b9:0914
db dummyd_163fc; // 10b9:0915
db dummyd_163fd; // 10b9:0916
db dummyd_163fe;
db dummyd_163ff; // 10b9:0918
db dummyd_16400; // 10b9:0919
db dummyd_16401; // 10b9:091a
db dummyd_16402;
db dummyd_16403; // 10b9:091c
db dummyd_16404; // 10b9:091d
db dummyd_16405; // 10b9:091e
db dummyd_16406; // 10b9:091f
db dummyd_16407; // 10b9:0920
db unk_265a1; // 10b9:0921
db dummyd_16409[32]; // 10b9:0922
db dummyd_16429[32]; // 10b9:0942
db dummyd_16449[32]; // 10b9:0962
db dummyd_16469[32]; // 10b9:0982
db dummyd_16489[32]; // 10b9:09a2
db dummyd_164a9[32]; // 10b9:09c2
db dummyd_164c9[32]; // 10b9:09e2
db dummyd_164e9[32]; // 10b9:0a02
db dummyd_16509[32]; // 10b9:0a22
db dummyd_16529[32]; // 10b9:0a42
db dummyd_16549[32]; // 10b9:0a62
db dummyd_16569[32]; // 10b9:0a82
db dummyd_16589[32]; // 10b9:0aa2
db dummyd_165a9[32]; // 10b9:0ac2
db dummyd_165c9[32]; // 10b9:0ae2
db dummyd_165e9[32]; // 10b9:0b02
db dummyd_16609[32]; // 10b9:0b22
db dummyd_16629; // 10b9:0b42
db dummyd_1662a;
db dummyd_1662b; // 10b9:0b44
db dummyd_1662c;
db dummyd_1662d;
db dummyd_1662e; // 10b9:0b47
db dummyd_1662f; // 10b9:0b48
db dummyd_16630; // 10b9:0b49
db dummyd_16631; // 10b9:0b4a
db dummyd_16632; // 10b9:0b4b
db dummyd_16633; // 10b9:0b4c
db dummyd_16634;
db dummyd_16635; // 10b9:0b4e
db dummyd_16636; // 10b9:0b4f
db dummyd_16637;
db dummyd_16638; // 10b9:0b51
db dummyd_16639; // 10b9:0b52
db dummyd_1663a; // 10b9:0b53
db dummyd_1663b; // 10b9:0b54
db dummyd_1663c; // 10b9:0b55
db dummyd_1663d; // 10b9:0b56
db dummyd_1663e; // 10b9:0b57
db dummyd_1663f; // 10b9:0b58
db dummyd_16640; // 10b9:0b59
db dummyd_16641; // 10b9:0b5a
db dummyd_16642; // 10b9:0b5b
db dummyd_16643; // 10b9:0b5c
db dummyd_16644; // 10b9:0b5d
db dummyd_16645; // 10b9:0b5e
db unk_267df; // 10b9:0b5f
db dummyd_16647[32]; // 10b9:0b60
db dummyd_16667[32]; // 10b9:0b80
db dummyd_16687[32]; // 10b9:0ba0
db dummyd_166a7[32]; // 10b9:0bc0
db dummyd_166c7[32]; // 10b9:0be0
db dummyd_166e7[32]; // 10b9:0c00
db dummyd_16707[32]; // 10b9:0c20
db dummyd_16727[32]; // 10b9:0c40
db dummyd_16747[32]; // 10b9:0c60
db dummyd_16767[32]; // 10b9:0c80
db dummyd_16787[32]; // 10b9:0ca0
db dummyd_167a7[32]; // 10b9:0cc0
db dummyd_167c7[32]; // 10b9:0ce0
db dummyd_167e7[32]; // 10b9:0d00
db dummyd_16807[32]; // 10b9:0d20
db dummyd_16827[32]; // 10b9:0d40
db dummyd_16847[32]; // 10b9:0d60
db dummyd_16867[32]; // 10b9:0d80
db dummyd_16887[32]; // 10b9:0da0
db dummyd_168a7[32]; // 10b9:0dc0
db dummyd_168c7[32]; // 10b9:0de0
db dummyd_168e7[32]; // 10b9:0e00
db dummyd_16907[32]; // 10b9:0e20
db dummyd_16927[32]; // 10b9:0e40
db dummyd_16947[32]; // 10b9:0e60
db dummyd_16967; // 10b9:0e80
db dummyd_16968; // 10b9:0e81
db unk_26b02; // 10b9:0e82
db dummyd_1696a[32]; // 10b9:0e83
db dummyd_1698a;
db dummyd_1698b;
db dummyd_1698c; // 10b9:0ea5
db dummyd_1698d; // 10b9:0ea6
db dummyd_1698e; // 10b9:0ea7
db dummyd_1698f; // 10b9:0ea8
db dummyd_16990; // 10b9:0ea9
db dummyd_16991; // 10b9:0eaa
db dummyd_16992;
db dummyd_16993; // 10b9:0eac
db dummyd_16994; // 10b9:0ead
db dummyd_16995; // 10b9:0eae
db dummyd_16996; // 10b9:0eaf
db dummyd_16997; // 10b9:0eb0
db dummyd_16998; // 10b9:0eb1
db dummyd_16999; // 10b9:0eb2
db dummyd_1699a; // 10b9:0eb3
db dummyd_1699b;
db dummyd_1699c; // 10b9:0eb5
db dummyd_1699d; // 10b9:0eb6
db dummyd_1699e;
db dummyd_1699f; // 10b9:0eb8
db dummyd_169a0;
db dummyd_169a1;
db dummyd_169a2; // 10b9:0ebb
db dummyd_169a3; // 10b9:0ebc
db dummyd_169a4; // 10b9:0ebd
db dummyd_169a5; // 10b9:0ebe
db dummyd_169a6; // 10b9:0ebf
db dummyd_169a7[32]; // 10d6:0000
db dummyd_169c7[32]; // 10d6:0020
db dummyd_169e7[32]; // 10d6:0040
db dummyd_16a07[32]; // 10d6:0060
db dummyd_16a27[32]; // 10d6:0080
db dummyd_16a47;
db dummyd_16a48;
db dummyd_16a49;
db dummyd_16a4a; // 10d6:00a3
db dummyd_16a4b;
db dummyd_16a4c;
db dummyd_16a4d;
db dummyd_16a4e;
db dummyd_16a4f; // 10d6:00a8
db dummyd_16a50;
db dummyd_16a51;
db dummyd_16a52;
db dummyd_16a53; // 10d6:00ac
db dummyd_16a54;
db dummyd_16a55;
db dummyd_16a56; // 10d6:00af
db dummyd_16a57;
db dummyd_16a58;
db dummyd_16a59; // 10d6:00b2
db dummyd_16a5a; // 10d6:00b3
db dummyd_16a5b; // 10d6:00b4
db dummyd_16a5c; // 10d6:00b5
db dummyd_16a5d; // 10d6:00b6
db dummyd_16a5e; // 10d6:00b7
db dummyd_16a5f;
db dummyd_16a60; // 10d6:00b9
db dummyd_16a61; // 10d6:00ba
db dummyd_16a62;
db unk_26bfc; // 10d6:00bc
db dummyd_16a64[32]; // 10d6:00bd
db dummyd_16a84[32]; // 10d6:00dd
db dummyd_16aa4[32]; // 10d6:00fd
db dummyd_16ac4; // 10d6:011d
db dummyd_16ac5; // 10d6:011e
db dummyd_16ac6; // 10d6:011f
db dummyd_16ac7; // 10d6:0120
db dummyd_16ac8; // 10d6:0121
db dummyd_16ac9; // 10d6:0122
db dummyd_16aca; // 10d6:0123
db dummyd_16acb; // 10d6:0124
db dummyd_16acc; // 10d6:0125
db dummyd_16acd; // 10d6:0126
db dummyd_16ace; // 10d6:0127
db dummyd_16acf; // 10d6:0128
db dummyd_16ad0;
db dummyd_16ad1; // 10d6:012a
db dummyd_16ad2; // 10d6:012b
db dummyd_16ad3; // 10d6:012c
db dummyd_16ad4; // 10d6:012d
db dummyd_16ad5; // 10d6:012e
db dummyd_16ad6; // 10d6:012f
db dummyd_16ad7;
db dummyd_16ad8;
db unk_26c72; // 10d6:0132
db dummyd_16ada[32]; // 10d6:0133
db dummyd_16afa[32]; // 10d6:0153
db dummyd_16b1a[32]; // 10d6:0173
db dummyd_16b3a[32]; // 10d6:0193
db dummyd_16b5a[32]; // 10d6:01b3
db dummyd_16b7a[32]; // 10d6:01d3
db dummyd_16b9a;
db dummyd_16b9b; // 10d6:01f4
db dummyd_16b9c; // 10d6:01f5
db dummyd_16b9d; // 10d6:01f6
db dummyd_16b9e; // 10d6:01f7
db dummyd_16b9f; // 10d6:01f8
db dummyd_16ba0;
db unk_26d3a; // 10d6:01fa
db dummyd_16ba2[32]; // 10d6:01fb
db dummyd_16bc2[32]; // 10d6:021b
db dummyd_16be2[32]; // 10d6:023b
db dummyd_16c02[32]; // 10d6:025b
db dummyd_16c22[32]; // 10d6:027b
db dummyd_16c42[32]; // 10d6:029b
db dummyd_16c62[32]; // 10d6:02bb
db dummyd_16c82[32]; // 10d6:02db
db dummyd_16ca2[32]; // 10d6:02fb
db dummyd_16cc2[32]; // 10d6:031b
db dummyd_16ce2[32]; // 10d6:033b
db dummyd_16d02[32]; // 10d6:035b
db dummyd_16d22[32]; // 10d6:037b
db dummyd_16d42[32]; // 10d6:039b
db dummyd_16d62[32]; // 10d6:03bb
db dummyd_16d82[32]; // 10d6:03db
db dummyd_16da2[32]; // 10d6:03fb
db dummyd_16dc2[32]; // 10d6:041b
db dummyd_16de2[32]; // 10d6:043b
db dummyd_16e02[32]; // 10d6:045b
db dummyd_16e22[32]; // 10d6:047b
db dummyd_16e42[32]; // 10d6:049b
db dummyd_16e62[32]; // 10d6:04bb
db dummyd_16e82[32]; // 10d6:04db
db dummyd_16ea2[32]; // 10d6:04fb
db dummyd_16ec2[32]; // 10d6:051b
db dummyd_16ee2[32]; // 10d6:053b
db dummyd_16f02[32]; // 10d6:055b
db dummyd_16f22[32]; // 10d6:057b
db dummyd_16f42[32]; // 10d6:059b
db dummyd_16f62[32]; // 10d6:05bb
db dummyd_16f82[32]; // 10d6:05db
db dummyd_16fa2[32]; // 10d6:05fb
db dummyd_16fc2[32]; // 10d6:061b
db dummyd_16fe2[32]; // 10d6:063b
db dummyd_17002[32]; // 10d6:065b
db dummyd_17022[32]; // 10d6:067b
db dummyd_17042[32]; // 10d6:069b
db dummyd_17062[32]; // 10d6:06bb
db dummyd_17082[32]; // 10d6:06db
db dummyd_170a2[32]; // 10d6:06fb
db dummyd_170c2[32]; // 10d6:071b
db dummyd_170e2[32]; // 10d6:073b
db dummyd_17102[32]; // 10d6:075b
db dummyd_17122[32]; // 10d6:077b
db dummyd_17142[32]; // 10d6:079b
db dummyd_17162[32]; // 10d6:07bb
db dummyd_17182[32]; // 10d6:07db
db dummyd_171a2[32]; // 10d6:07fb
db dummyd_171c2[32]; // 10d6:081b
db dummyd_171e2[32]; // 10d6:083b
db dummyd_17202[32]; // 10d6:085b
db dummyd_17222[32]; // 10d6:087b
db dummyd_17242[32]; // 10d6:089b
db dummyd_17262[32]; // 10d6:08bb
db dummyd_17282[32]; // 10d6:08db
db dummyd_172a2[32]; // 10d6:08fb
db dummyd_172c2[32]; // 10d6:091b
db dummyd_172e2[32]; // 10d6:093b
db dummyd_17302[32]; // 10d6:095b
db dummyd_17322[32]; // 10d6:097b
db dummyd_17342[32]; // 10d6:099b
db dummyd_17362[32]; // 10d6:09bb
db dummyd_17382[32]; // 10d6:09db
db dummyd_173a2[32]; // 10d6:09fb
db dummyd_173c2[32]; // 10d6:0a1b
db dummyd_173e2[32]; // 10d6:0a3b
db dummyd_17402; // 10d6:0a5b
db dummyd_17403; // 10d6:0a5c
db dummyd_17404;
db dummyd_17405; // 10d6:0a5e
db dummyd_17406; // 10d6:0a5f
db dummyd_17407; // 10d6:0a60
db dummyd_17408;
db dummyd_17409;
db dummyd_1740a;
db dummyd_1740b;
db dummyd_1740c; // 10d6:0a65
db dummyd_1740d; // 10d6:0a66
db dummyd_1740e; // 10d6:0a67
db dummyd_1740f;
db dummyd_17410;
db dummyd_17411; // 10d6:0a6a
db dummyd_17412; // 10d6:0a6b
db dummyd_17413; // 10d6:0a6c
db dummyd_17414;
db dummyd_17415; // 10d6:0a6e
db unk_275af; // 10d6:0a6f
db dummyd_17417[32]; // 10d6:0a70
db dummyd_17437[32]; // 10d6:0a90
db dummyd_17457[32]; // 10d6:0ab0
db dummyd_17477[32]; // 10d6:0ad0
db dummyd_17497[32]; // 10d6:0af0
db dummyd_174b7[32]; // 10d6:0b10
db dummyd_174d7[32]; // 10d6:0b30
db dummyd_174f7[32]; // 10d6:0b50
db dummyd_17517[32]; // 10d6:0b70
db dummyd_17537[32]; // 10d6:0b90
db dummyd_17557[32]; // 10d6:0bb0
db dummyd_17577[32]; // 10d6:0bd0
db dummyd_17597[32]; // 10d6:0bf0
db dummyd_175b7[32]; // 10d6:0c10
db dummyd_175d7[32]; // 10d6:0c30
db dummyd_175f7[32]; // 10d6:0c50
db dummyd_17617[32]; // 10d6:0c70
db dummyd_17637[32]; // 10d6:0c90
db dummyd_17657[32]; // 10d6:0cb0
db dummyd_17677[32]; // 10d6:0cd0
db dummyd_17697[32]; // 10d6:0cf0
db dummyd_176b7[32]; // 10d6:0d10
db dummyd_176d7[32]; // 10d6:0d30
db dummyd_176f7[32]; // 10d6:0d50
db dummyd_17717[32]; // 10d6:0d70
db dummyd_17737[32]; // 10d6:0d90
db dummyd_17757[32]; // 10d6:0db0
db dummyd_17777[32]; // 10d6:0dd0
db dummyd_17797[32]; // 10d6:0df0
db dummyd_177b7[32]; // 10d6:0e10
db dummyd_177d7[32]; // 10d6:0e30
db dummyd_177f7[32]; // 10d6:0e50
db dummyd_17817[32]; // 10d6:0e70
db dummyd_17837[32]; // 10d6:0e90
db dummyd_17857[32]; // 10d6:0eb0
db dummyd_17877[32]; // 10d6:0ed0
db dummyd_17897[32]; // 10d6:0ef0
db dummyd_178b7[32]; // 10d6:0f10
db dummyd_178d7[32]; // 10d6:0f30
db dummyd_178f7[32]; // 10d6:0f50
db dummyd_17917[32]; // 10d6:0f70
db dummyd_17937[32]; // 10d6:0f90
db dummyd_17957[32]; // 10d6:0fb0
db dummyd_17977[32]; // 10d6:0fd0
db dummyd_17997[32]; // 10d6:0ff0
db dummyd_179b7[32]; // 10d6:1010
db dummyd_179d7[32]; // 10d6:1030
db dummyd_179f7[32]; // 10d6:1050
db dummyd_17a17[32]; // 10d6:1070
db dummyd_17a37[32]; // 10d6:1090
db dummyd_17a57[32]; // 10d6:10b0
db dummyd_17a77[32]; // 10d6:10d0
db dummyd_17a97[32]; // 10d6:10f0
db dummyd_17ab7[32]; // 10d6:1110
db dummyd_17ad7[32]; // 10d6:1130
db dummyd_17af7[32]; // 10d6:1150
db dummyd_17b17[32]; // 10d6:1170
db dummyd_17b37[32]; // 10d6:1190
db dummyd_17b57[32]; // 10d6:11b0
db dummyd_17b77[32]; // 10d6:11d0
db dummyd_17b97[32]; // 10d6:11f0
db dummyd_17bb7[32]; // 10d6:1210
db dummyd_17bd7[32]; // 10d6:1230
db dummyd_17bf7[32]; // 10d6:1250
db dummyd_17c17[32]; // 10d6:1270
db dummyd_17c37; // 10d6:1290
db dummyd_17c38;
db dummyd_17c39; // 10d6:1292
db dummyd_17c3a; // 10d6:1293
db dummyd_17c3b; // 10d6:1294
db dummyd_17c3c;
db dummyd_17c3d; // 10d6:1296
db dummyd_17c3e; // 10d6:1297
db dummyd_17c3f;
db dummyd_17c40;
db dummyd_17c41; // 10d6:129a
db dummyd_17c42; // 10d6:129b
db dummyd_17c43; // 10d6:129c
dd dummyd_17c44; // 10d6:129d
dw dummyd_17c48; // 10d6:12a1
dd dummyd_17c4a; // 10d6:12a4
db dummyd_17c4e[32]; // 10d6:12a8
db dummyd_17c6e[32]; // 10d6:12c8
db dummyd_17c8e[32]; // 10d6:12e8
db dummyd_17cae[32]; // 10d6:1308
db dummyd_17cce[32]; // 10d6:1328
db dummyd_17cee[32]; // 10d6:1348
db dummyd_17d0e[32]; // 10d6:1368
db dummyd_17d2e[32]; // 10d6:1388
db dummyd_17d4e[32]; // 10d6:13a8
db dummyd_17d6e[32]; // 10d6:13c8
db dummyd_17d8e[32]; // 10d6:13e8
db dummyd_17dae[32]; // 10d6:1408
db dummyd_17dce[32]; // 10d6:1428
db dummyd_17dee[32]; // 10d6:1448
db dummyd_17e0e[32]; // 10d6:1468
db dummyd_17e2e[32]; // 10d6:1488
db dummyd_17e4e[32]; // 10d6:14a8
db dummyd_17e6e[32]; // 10d6:14c8
db dummyd_17e8e[32]; // 10d6:14e8
db dummyd_17eae[32]; // 10d6:1508
db dummyd_17ece[32]; // 10d6:1528
db dummyd_17eee[32]; // 10d6:1548
db dummyd_17f0e[32]; // 10d6:1568
db dummyd_17f2e[32]; // 10d6:1588
db dummyd_17f4e[32]; // 10d6:15a8
db dummyd_17f6e[32]; // 10d6:15c8
db dummyd_17f8e[32]; // 10d6:15e8
db dummyd_17fae[32]; // 10d6:1608
db dummyd_17fce[32]; // 10d6:1628
db dummyd_17fee[32]; // 10d6:1648
db dummyd_1800e[32]; // 10d6:1668
db dummyd_1802e[32]; // 10d6:1688
db dummyd_1804e; // 10d6:16a8
db dummyd_1804f; // 10d6:16a9
db dummyd_18050; // 10d6:16aa
db dummyd_18051; // 10d6:16ab
db dummyd_18052; // 10d6:16ac
db dummyd_18053; // 10d6:16ad
db dummyd_18054;
db dummyd_18055;
db dummyd_18056; // 10d6:16b0
db dummyd_18057; // 10d6:16b1
db dummyd_18058; // 10d6:16b2
db dummyd_18059; // 10d6:16b3
db dummyd_1805a; // 10d6:16b4
db dummyd_1805b; // 10d6:16b5
db dummyd_1805c; // 10d6:16b6
db dummyd_1805d;
db dummyd_1805e; // 10d6:16b8
db dummyd_1805f; // 10d6:16b9
db dummyd_18060;
db dummyd_18061;
db dummyd_18062; // 10d6:16bc
db dummyd_18063;
db dummyd_18064;
db dummyd_18065;
db dummyd_18066;
db dummyd_18067;
db dummyd_18068;
db dummyd_18069;
db dummyd_1806a;
db dummyd_1806b;
db unk_28206; // 10d6:16c6
db dummyd_1806d[32]; // 10d6:16c7
db dummyd_1808d[32]; // 10d6:16e7
db dummyd_180ad[32]; // 10d6:1707
db dummyd_180cd[32]; // 10d6:1727
db dummyd_180ed[32]; // 10d6:1747
db dummyd_1810d[32]; // 10d6:1767
db dummyd_1812d[32]; // 10d6:1787
db dummyd_1814d[32]; // 10d6:17a7
db dummyd_1816d[32]; // 10d6:17c7
db dummyd_1818d[32]; // 10d6:17e7
db dummyd_181ad[32]; // 10d6:1807
db dummyd_181cd[32]; // 10d6:1827
db dummyd_181ed[32]; // 10d6:1847
db dummyd_1820d[32]; // 10d6:1867
db dummyd_1822d[32]; // 10d6:1887
db dummyd_1824d[32]; // 10d6:18a7
db dummyd_1826d[32]; // 10d6:18c7
db dummyd_1828d[32]; // 10d6:18e7
db dummyd_182ad[32]; // 10d6:1907
db dummyd_182cd[32]; // 10d6:1927
db dummyd_182ed[32]; // 10d6:1947
db dummyd_1830d[32]; // 10d6:1967
db dummyd_1832d[32]; // 10d6:1987
db dummyd_1834d[32]; // 10d6:19a7
db dummyd_1836d[32]; // 10d6:19c7
db dummyd_1838d[32]; // 10d6:19e7
db dummyd_183ad[32]; // 10d6:1a07
db dummyd_183cd[32]; // 10d6:1a27
db dummyd_183ed[32]; // 10d6:1a47
db dummyd_1840d[32]; // 10d6:1a67
db dummyd_1842d[32]; // 10d6:1a87
db dummyd_1844d[32]; // 10d6:1aa7
db dummyd_1846d[32]; // 10d6:1ac7
db dummyd_1848d[32]; // 10d6:1ae7
db dummyd_184ad[32]; // 10d6:1b07
db dummyd_184cd[32]; // 10d6:1b27
db dummyd_184ed[32]; // 10d6:1b47
db dummyd_1850d[32]; // 10d6:1b67
db dummyd_1852d[32]; // 10d6:1b87
db dummyd_1854d; // 10d6:1ba7
db dummyd_1854e; // 10d6:1ba8
db dummyd_1854f; // 10d6:1ba9
db dummyd_18550; // 10d6:1baa
db dummyd_18551; // 10d6:1bab
db dummyd_18552; // 10d6:1bac
db dummyd_18553; // 10d6:1bad
db dummyd_18554; // 10d6:1bae
db dummyd_18555; // 10d6:1baf
db dummyd_18556; // 10d6:1bb0
db dummyd_18557;
db unk_286f2; // 10d6:1bb2
db dummyd_18559[32]; // 10d6:1bb3
db dummyd_18579[32]; // 10d6:1bd3
db dummyd_18599;
db dummyd_1859a;
db dummyd_1859b; // 10d6:1bf5
db dummyd_1859c; // 10d6:1bf6
db dummyd_1859d;
db unk_28738; // 10d6:1bf8
db dummyd_1859f[32]; // 10d6:1bf9
db dummyd_185bf[32]; // 10d6:1c19
db dummyd_185df[32]; // 10d6:1c39
db dummyd_185ff[32]; // 10d6:1c59
db dummyd_1861f[32]; // 10d6:1c79
db dummyd_1863f[32]; // 10d6:1c99
db dummyd_1865f[32]; // 10d6:1cb9
db dummyd_1867f[32]; // 10d6:1cd9
db dummyd_1869f[32]; // 10d6:1cf9
db dummyd_186bf; // 10d6:1d19
db dummyd_186c0; // 10d6:1d1a
db dummyd_186c1; // 10d6:1d1b
db dummyd_186c2; // 10d6:1d1c
db dummyd_186c3; // 10d6:1d1d
db dummyd_186c4; // 10d6:1d1e
db dummyd_186c5;
db dummyd_186c6; // 10d6:1d20
db dummyd_186c7; // 10d6:1d21
db dummyd_186c8; // 10d6:1d22
db dummyd_186c9; // 10d6:1d23
db dummyd_186ca; // 10d6:1d24
db dummyd_186cb; // 10d6:1d25
db dummyd_186cc; // 10d6:1d26
db dummyd_186cd; // 10d6:1d27
db unk_28868; // 10d6:1d28
db dummyd_186cf; // 10d6:1d29
db dummyd_186d0; // 10d6:1d2a
db dummyd_186d1; // 10d6:1d2b
db dummyd_186d2; // 10d6:1d2c
db dummyd_186d3;
db dummyd_186d4; // 10d6:1d2e
db dummyd_186d5; // 10d6:1d2f
db dummyd_186d6; // 10d6:1d30
db dummyd_186d7; // 10d6:1d31
db dummyd_186d8; // 10d6:1d32
db dummyd_186d9; // 10d6:1d33
db dummyd_186da; // 10d6:1d34
db dummyd_186db;
db dummyd_186dc; // 10d6:1d36
db dummyd_186dd; // 10d6:1d37
db dummyd_186de; // 10d6:1d38
db dummyd_186df; // 10d6:1d39
db dummyd_186e0; // 10d6:1d3a
db unk_2887b; // 10d6:1d3b
db dummyd_186e2[32]; // 10d6:1d3c
db dummyd_18702; // 10d6:1d5c
db dummyd_18703; // 10d6:1d5d
db dummyd_18704; // 10d6:1d5e
db dummyd_18705; // 10d6:1d5f
db dummyd_18706; // 10d6:1d60
db dummyd_18707;
db dummyd_18708; // 10d6:1d62
db dummyd_18709; // 10d6:1d63
db dummyd_1870a; // 10d6:1d64
db dummyd_1870b; // 10d6:1d65
db dummyd_1870c; // 10d6:1d66
db dummyd_1870d; // 10d6:1d67
db dummyd_1870e; // 10d6:1d68
db dummyd_1870f; // 10d6:1d69
db dummyd_18710;
db dummyd_18711; // 10d6:1d6b
db unk_288ac; // 10d6:1d6c
db dummyd_18713[32]; // 10d6:1d6d
db dummyd_18733[32]; // 10d6:1d8d
db dummyd_18753[32]; // 10d6:1dad
db dummyd_18773[32]; // 10d6:1dcd
db dummyd_18793[32]; // 10d6:1ded
db dummyd_187b3[32]; // 10d6:1e0d
db dummyd_187d3[32]; // 10d6:1e2d
db dummyd_187f3[32]; // 10d6:1e4d
db dummyd_18813[32]; // 10d6:1e6d
db dummyd_18833[32]; // 10d6:1e8d
db dummyd_18853[32]; // 10d6:1ead
db dummyd_18873[32]; // 10d6:1ecd
db dummyd_18893[32]; // 10d6:1eed
db dummyd_188b3[32]; // 10d6:1f0d
db dummyd_188d3[32]; // 10d6:1f2d
db dummyd_188f3[32]; // 10d6:1f4d
db dummyd_18913[32]; // 10d6:1f6d
db dummyd_18933[32]; // 10d6:1f8d
db dummyd_18953[32]; // 10d6:1fad
db dummyd_18973[32]; // 10d6:1fcd
db dummyd_18993[32]; // 10d6:1fed
db dummyd_189b3[32]; // 10d6:200d
db dummyd_189d3[32]; // 10d6:202d
db dummyd_189f3[32]; // 10d6:204d
db dummyd_18a13[32]; // 10d6:206d
db dummyd_18a33[32]; // 10d6:208d
db dummyd_18a53[32]; // 10d6:20ad
db dummyd_18a73[32]; // 10d6:20cd
db dummyd_18a93[32]; // 10d6:20ed
db dummyd_18ab3[32]; // 10d6:210d
db dummyd_18ad3[32]; // 10d6:212d
db dummyd_18af3[32]; // 10d6:214d
db dummyd_18b13[32]; // 10d6:216d
db dummyd_18b33[32]; // 10d6:218d
db dummyd_18b53[32]; // 10d6:21ad
db dummyd_18b73[32]; // 10d6:21cd
db dummyd_18b93[32]; // 10d6:21ed
db dummyd_18bb3[32]; // 10d6:220d
db dummyd_18bd3[32]; // 10d6:222d
db dummyd_18bf3[32]; // 10d6:224d
db dummyd_18c13[32]; // 10d6:226d
db dummyd_18c33[32]; // 10d6:228d
db dummyd_18c53[32]; // 10d6:22ad
db dummyd_18c73;
db dummyd_18c74;
db dummyd_18c75;
db dummyd_18c76;
db dummyd_18c77;
db dummyd_18c78;
db dummyd_18c79;
db dummyd_18c7a;
db dummyd_18c7b;
db dummyd_18c7c;
db dummyd_18c7d;
db dummyd_18c7e;
db dummyd_18c7f;
db dummyd_18c80;
db dummyd_18c81;
db dummyd_18c82;
db dummyd_18c83;
db dummyd_18c84;
db dummyd_18c85;
db dummyd_18c86;
db dummyd_18c87;
db dummyd_18c88;
db dummyd_18c89;
db dummyd_18c8a;
db dummyd_18c8b;
db byte_28e26; // 10d6:22e6
db dummyd_18c8d[32]; // 10d6:22e7
db dummyd_18cad[32]; // 10d6:2307
db dummyd_18ccd[32]; // 10d6:2327
db dummyd_18ced[32]; // 10d6:2347
db dummyd_18d0d[32]; // 10d6:2367
db dummyd_18d2d;
db dummyd_18d2e;
db dummyd_18d2f;
db dummyd_18d30;
db dummyd_18d31;
db byte_28ecc; // 10d6:238c
db dummyd_18d33[32]; // 10d6:238d
db dummyd_18d53[32]; // 10d6:23ad
db dummyd_18d73[32]; // 10d6:23cd
db dummyd_18d93[32]; // 10d6:23ed
db dummyd_18db3[32]; // 10d6:240d
db dummyd_18dd3[32]; // 10d6:242d
db dummyd_18df3[32]; // 10d6:244d
db dummyd_18e13[32]; // 10d6:246d
db dummyd_18e33[32]; // 10d6:248d
db dummyd_18e53[32]; // 10d6:24ad
db dummyd_18e73[32]; // 10d6:24cd
db dummyd_18e93[32]; // 10d6:24ed
db dummyd_18eb3[32]; // 10d6:250d
db dummyd_18ed3;
db dummyd_18ed4;
db dummyd_18ed5;
db dummyd_18ed6;
db dummyd_18ed7;
db dummyd_18ed8;
db dummyd_18ed9;
db dummyd_18eda;
db dummyd_18edb;
db dummyd_18edc;
db dummyd_18edd;
db dummyd_18ede;
db dummyd_18edf;
db dummyd_18ee0;
db dummyd_18ee1;
db dummyd_18ee2;
db dummyd_18ee3;
db dummyd_18ee4;
db dummyd_18ee5;
db byte_29080; // 10d6:2540
db dummyd_18ee7[32]; // 10d6:2541
db dummyd_18f07[32]; // 10d6:2561
db dummyd_18f27[32]; // 10d6:2581
db dummyd_18f47[32]; // 10d6:25a1
db dummyd_18f67[32]; // 10d6:25c1
db dummyd_18f87[32]; // 10d6:25e1
db dummyd_18fa7[32]; // 10d6:2601
db dummyd_18fc7[32]; // 10d6:2621
db dummyd_18fe7[32]; // 10d6:2641
db dummyd_19007[32]; // 10d6:2661
db dummyd_19027[32]; // 10d6:2681
db dummyd_19047[32]; // 10d6:26a1
db dummyd_19067[32]; // 10d6:26c1
db dummyd_19087[32]; // 10d6:26e1
db dummyd_190a7[32]; // 10d6:2701
db dummyd_190c7[32]; // 10d6:2721
db dummyd_190e7[32]; // 10d6:2741
db dummyd_19107[32]; // 10d6:2761
db dummyd_19127[32]; // 10d6:2781
db dummyd_19147;
db dummyd_19148;
db dummyd_19149;
db dummyd_1914a;
db dummyd_1914b;
db dummyd_1914c;
db dummyd_1914d;
db dummyd_1914e;
db dummyd_1914f;
db dummyd_19150;
db dummyd_19151;
db dummyd_19152;
db dummyd_19153;
db dummyd_19154;
db dummyd_19155;
db dummyd_19156;
db dummyd_19157;
db dummyd_19158;
db dummyd_19159;
db dummyd_1915a;
db dummyd_1915b;
db dummyd_1915c;
db dummyd_1915d;
db dummyd_1915e;
db dummyd_1915f;
db dummyd_19160;
db dummyd_19161;
db dummyd_19162;
db dummyd_19163;
db dummyd_19164;
db byte_292ff; // 10d6:27bf
db dummyd_19166[32]; // 10d6:27c0
db dummyd_19186[32]; // 10d6:27e0
db dummyd_191a6[32]; // 10d6:2800
db dummyd_191c6[32]; // 10d6:2820
db dummyd_191e6[32]; // 10d6:2840
db dummyd_19206[32]; // 10d6:2860
db dummyd_19226[32]; // 10d6:2880
db dummyd_19246[32]; // 10d6:28a0
db dummyd_19266[32]; // 10d6:28c0
db dummyd_19286[32]; // 10d6:28e0
db dummyd_192a6[32]; // 10d6:2900
db dummyd_192c6[32]; // 10d6:2920
db dummyd_192e6[32]; // 10d6:2940
db dummyd_19306[32]; // 10d6:2960
db dummyd_19326[32]; // 10d6:2980
db dummyd_19346[32]; // 10d6:29a0
db dummyd_19366[32]; // 10d6:29c0
db dummyd_19386[32]; // 10d6:29e0
db dummyd_193a6[32]; // 10d6:2a00
db dummyd_193c6[32]; // 10d6:2a20
db dummyd_193e6[32]; // 10d6:2a40
db dummyd_19406[32]; // 10d6:2a60
db dummyd_19426[32]; // 10d6:2a80
db dummyd_19446[32]; // 10d6:2aa0
db dummyd_19466[32]; // 10d6:2ac0
db dummyd_19486[32]; // 10d6:2ae0
db dummyd_194a6[32]; // 10d6:2b00
db dummyd_194c6[32]; // 10d6:2b20
db dummyd_194e6[32]; // 10d6:2b40
db dummyd_19506[32]; // 10d6:2b60
db dummyd_19526[32]; // 10d6:2b80
db dummyd_19546[32]; // 10d6:2ba0
db dummyd_19566[32]; // 10d6:2bc0
db dummyd_19586[32]; // 10d6:2be0
db dummyd_195a6[32]; // 10d6:2c00
db dummyd_195c6[32]; // 10d6:2c20
db dummyd_195e6[32]; // 10d6:2c40
db dummyd_19606[32]; // 10d6:2c60
db dummyd_19626[32]; // 10d6:2c80
db dummyd_19646[32]; // 10d6:2ca0
db dummyd_19666[32]; // 10d6:2cc0
db dummyd_19686[32]; // 10d6:2ce0
db dummyd_196a6[32]; // 10d6:2d00
db dummyd_196c6[32]; // 10d6:2d20
db dummyd_196e6[32]; // 10d6:2d40
db dummyd_19706[32]; // 10d6:2d60
db dummyd_19726[32]; // 10d6:2d80
db dummyd_19746[32]; // 10d6:2da0
db dummyd_19766[32]; // 10d6:2dc0
db dummyd_19786[32]; // 10d6:2de0
db dummyd_197a6[32]; // 10d6:2e00
db dummyd_197c6[32]; // 10d6:2e20
db dummyd_197e6[32]; // 10d6:2e40
db dummyd_19806[32]; // 10d6:2e60
db dummyd_19826[32]; // 10d6:2e80
db dummyd_19846[32]; // 10d6:2ea0
db dummyd_19866[32]; // 10d6:2ec0
db dummyd_19886[32]; // 10d6:2ee0
db dummyd_198a6[32]; // 10d6:2f00
db dummyd_198c6[32]; // 10d6:2f20
db dummyd_198e6[32]; // 10d6:2f40
db dummyd_19906[32]; // 10d6:2f60
db dummyd_19926[32]; // 10d6:2f80
db dummyd_19946[32]; // 10d6:2fa0
db dummyd_19966[32]; // 10d6:2fc0
db dummyd_19986[32]; // 10d6:2fe0
db dummyd_199a6[32]; // 10d6:3000
db dummyd_199c6[32]; // 10d6:3020
db dummyd_199e6[32]; // 10d6:3040
db dummyd_19a06;
db dummyd_19a07;
db dummyd_19a08;
db dummyd_19a09;
db dummyd_19a0a;
db dummyd_19a0b;
db dummyd_19a0c;
db dummyd_19a0d;
db dummyd_19a0e;
db dummyd_19a0f;
db dummyd_19a10;
db dummyd_19a11;
db dummyd_19a12;
db dummyd_19a13;
db dummyd_19a14;
db dummyd_19a15;
db dummyd_19a16;
db dummyd_19a17;
db dummyd_19a18;
db dummyd_19a19;
db dummyd_19a1a;
db dummyd_19a1b;
db dummyd_19a1c;
db byte_29bb7; // 10d6:3077
db dummyd_19a1e[32]; // 10d6:3078
db dummyd_19a3e[32]; // 10d6:3098
db dummyd_19a5e[32]; // 10d6:30b8
db dummyd_19a7e[32]; // 10d6:30d8
db dummyd_19a9e[32]; // 10d6:30f8
db dummyd_19abe[32]; // 10d6:3118
db dummyd_19ade;
db dummyd_19adf;
db dummyd_19ae0;
db dummyd_19ae1;
db dummyd_19ae2;
db dummyd_19ae3;
db dummyd_19ae4;
db dummyd_19ae5;
db dummyd_19ae6;
db dummyd_19ae7;
db dummyd_19ae8;
db dummyd_19ae9;
db dummyd_19aea;
db dummyd_19aeb;
db dummyd_19aec;
db dummyd_19aed;
db dummyd_19aee;
db dummyd_19aef;
db dummyd_19af0;
db dummyd_19af1;
db dummyd_19af2;
db dummyd_19af3;
db dummyd_19af4;
db dummyd_19af5;
db dummyd_19af6;
db dummyd_19af7;
db dummyd_19af8;
db dummyd_19af9;
db dummyd_19afa;
db dummyd_19afb;
db dummyd_19afc;
db byte_29c97; // 10d6:3157
db dummyd_19afe[32]; // 10d6:3158
db dummyd_19b1e[32]; // 10d6:3178
db dummyd_19b3e[32]; // 10d6:3198
db dummyd_19b5e[32]; // 10d6:31b8
db dummyd_19b7e[32]; // 10d6:31d8
db dummyd_19b9e[32]; // 10d6:31f8
db dummyd_19bbe[32]; // 10d6:3218
db dummyd_19bde[32]; // 10d6:3238
db dummyd_19bfe[32]; // 10d6:3258
db dummyd_19c1e[32]; // 10d6:3278
db dummyd_19c3e[32]; // 10d6:3298
db dummyd_19c5e[32]; // 10d6:32b8
db dummyd_19c7e[32]; // 10d6:32d8
db dummyd_19c9e[32]; // 10d6:32f8
db dummyd_19cbe[32]; // 10d6:3318
db dummyd_19cde[32]; // 10d6:3338
db dummyd_19cfe[32]; // 10d6:3358
db dummyd_19d1e[32]; // 10d6:3378
db dummyd_19d3e[32]; // 10d6:3398
db dummyd_19d5e[32]; // 10d6:33b8
db dummyd_19d7e[32]; // 10d6:33d8
db dummyd_19d9e[32]; // 10d6:33f8
db dummyd_19dbe[32]; // 10d6:3418
db dummyd_19dde[32]; // 10d6:3438
db dummyd_19dfe[32]; // 10d6:3458
db dummyd_19e1e[32]; // 10d6:3478
db dummyd_19e3e[32]; // 10d6:3498
db dummyd_19e5e[32]; // 10d6:34b8
db dummyd_19e7e[32]; // 10d6:34d8
db dummyd_19e9e[32]; // 10d6:34f8
db dummyd_19ebe[32]; // 10d6:3518
db dummyd_19ede[32]; // 10d6:3538
db dummyd_19efe[32]; // 10d6:3558
db dummyd_19f1e[32]; // 10d6:3578
db dummyd_19f3e[32]; // 10d6:3598
db dummyd_19f5e[32]; // 10d6:35b8
db dummyd_19f7e[32]; // 10d6:35d8
db dummyd_19f9e[32]; // 10d6:35f8
db dummyd_19fbe[32]; // 10d6:3618
db dummyd_19fde[32]; // 10d6:3638
db dummyd_19ffe[32]; // 10d6:3658
db dummyd_1a01e[32]; // 10d6:3678
db dummyd_1a03e[32]; // 10d6:3698
db dummyd_1a05e[32]; // 10d6:36b8
db dummyd_1a07e[32]; // 10d6:36d8
db dummyd_1a09e[32]; // 10d6:36f8
db dummyd_1a0be[32]; // 10d6:3718
db dummyd_1a0de[32]; // 10d6:3738
db dummyd_1a0fe[32]; // 10d6:3758
db dummyd_1a11e[32]; // 10d6:3778
db dummyd_1a13e[32]; // 10d6:3798
db dummyd_1a15e[32]; // 10d6:37b8
db dummyd_1a17e[32]; // 10d6:37d8
db dummyd_1a19e[32]; // 10d6:37f8
db dummyd_1a1be[32]; // 10d6:3818
db dummyd_1a1de[32]; // 10d6:3838
db dummyd_1a1fe[32]; // 10d6:3858
db dummyd_1a21e[32]; // 10d6:3878
db dummyd_1a23e[32]; // 10d6:3898
db dummyd_1a25e[32]; // 10d6:38b8
db dummyd_1a27e[32]; // 10d6:38d8
db dummyd_1a29e[32]; // 10d6:38f8
db dummyd_1a2be[32]; // 10d6:3918
db dummyd_1a2de[32]; // 10d6:3938
db dummyd_1a2fe[32]; // 10d6:3958
db dummyd_1a31e[32]; // 10d6:3978
db dummyd_1a33e[32]; // 10d6:3998
db dummyd_1a35e[32]; // 10d6:39b8
db dummyd_1a37e[32]; // 10d6:39d8
db dummyd_1a39e[32]; // 10d6:39f8
db dummyd_1a3be[32]; // 10d6:3a18
db dummyd_1a3de[32]; // 10d6:3a38
db dummyd_1a3fe[32]; // 10d6:3a58
db dummyd_1a41e[32]; // 10d6:3a78
db dummyd_1a43e[32]; // 10d6:3a98
db dummyd_1a45e[32]; // 10d6:3ab8
db dummyd_1a47e[32]; // 10d6:3ad8
db dummyd_1a49e[32]; // 10d6:3af8
db dummyd_1a4be[32]; // 10d6:3b18
db dummyd_1a4de[32]; // 10d6:3b38
db dummyd_1a4fe[32]; // 10d6:3b58
db dummyd_1a51e[32]; // 10d6:3b78
db dummyd_1a53e[32]; // 10d6:3b98
db dummyd_1a55e[32]; // 10d6:3bb8
db dummyd_1a57e[32]; // 10d6:3bd8
db dummyd_1a59e[32]; // 10d6:3bf8
db dummyd_1a5be[32]; // 10d6:3c18
db dummyd_1a5de[32]; // 10d6:3c38
db dummyd_1a5fe[32]; // 10d6:3c58
db dummyd_1a61e[32]; // 10d6:3c78
db dummyd_1a63e[32]; // 10d6:3c98
db dummyd_1a65e[32]; // 10d6:3cb8
db dummyd_1a67e[32]; // 10d6:3cd8
db dummyd_1a69e[32]; // 10d6:3cf8
db dummyd_1a6be[32]; // 10d6:3d18
db dummyd_1a6de[32]; // 10d6:3d38
db dummyd_1a6fe[32]; // 10d6:3d58
db dummyd_1a71e[32]; // 10d6:3d78
db dummyd_1a73e[32]; // 10d6:3d98
db dummyd_1a75e[32]; // 10d6:3db8
db dummyd_1a77e[32]; // 10d6:3dd8
db dummyd_1a79e[32]; // 10d6:3df8
db dummyd_1a7be[32]; // 10d6:3e18
db dummyd_1a7de[32]; // 10d6:3e38
db dummyd_1a7fe[32]; // 10d6:3e58
db dummyd_1a81e[32]; // 10d6:3e78
db dummyd_1a83e[32]; // 10d6:3e98
db dummyd_1a85e[32]; // 10d6:3eb8
db dummyd_1a87e[32]; // 10d6:3ed8
db dummyd_1a89e[32]; // 10d6:3ef8
db dummyd_1a8be[32]; // 10d6:3f18
db dummyd_1a8de[32]; // 10d6:3f38
db dummyd_1a8fe[32]; // 10d6:3f58
db dummyd_1a91e[32]; // 10d6:3f78
db dummyd_1a93e[32]; // 10d6:3f98
db dummyd_1a95e[32]; // 10d6:3fb8
db dummyd_1a97e[32]; // 10d6:3fd8
db dummyd_1a99e[32]; // 10d6:3ff8
db dummyd_1a9be[32]; // 10d6:4018
db dummyd_1a9de[32]; // 10d6:4038
db dummyd_1a9fe[32]; // 10d6:4058
db dummyd_1aa1e[32]; // 10d6:4078
db dummyd_1aa3e[32]; // 10d6:4098
db dummyd_1aa5e[32]; // 10d6:40b8
db dummyd_1aa7e[32]; // 10d6:40d8
db dummyd_1aa9e[32]; // 10d6:40f8
db dummyd_1aabe[32]; // 10d6:4118
db dummyd_1aade[32]; // 10d6:4138
db dummyd_1aafe[32]; // 10d6:4158
db dummyd_1ab1e[32]; // 10d6:4178
db dummyd_1ab3e[32]; // 10d6:4198
db dummyd_1ab5e[32]; // 10d6:41b8
db dummyd_1ab7e[32]; // 10d6:41d8
db dummyd_1ab9e[32]; // 10d6:41f8
db dummyd_1abbe[32]; // 10d6:4218
db dummyd_1abde[32]; // 10d6:4238
db dummyd_1abfe[32]; // 10d6:4258
db dummyd_1ac1e[32]; // 10d6:4278
db dummyd_1ac3e[32]; // 10d6:4298
db dummyd_1ac5e[32]; // 10d6:42b8
db dummyd_1ac7e[32]; // 10d6:42d8
db dummyd_1ac9e[32]; // 10d6:42f8
db dummyd_1acbe[32]; // 10d6:4318
db dummyd_1acde[32]; // 10d6:4338
db dummyd_1acfe[32]; // 10d6:4358
db dummyd_1ad1e[32]; // 10d6:4378
db dummyd_1ad3e[32]; // 10d6:4398
db dummyd_1ad5e[32]; // 10d6:43b8
db dummyd_1ad7e[32]; // 10d6:43d8
db dummyd_1ad9e[32]; // 10d6:43f8
db dummyd_1adbe[32]; // 10d6:4418
db dummyd_1adde[32]; // 10d6:4438
db dummyd_1adfe[32]; // 10d6:4458
db dummyd_1ae1e[32]; // 10d6:4478
db dummyd_1ae3e[32]; // 10d6:4498
db dummyd_1ae5e[32]; // 10d6:44b8
db dummyd_1ae7e[32]; // 10d6:44d8
db dummyd_1ae9e[32]; // 10d6:44f8
db dummyd_1aebe[32]; // 10d6:4518
db dummyd_1aede[32]; // 10d6:4538
db dummyd_1aefe[32]; // 10d6:4558
db dummyd_1af1e[32]; // 10d6:4578
db dummyd_1af3e[32]; // 10d6:4598
db dummyd_1af5e[32]; // 10d6:45b8
db dummyd_1af7e[32]; // 10d6:45d8
db dummyd_1af9e[32]; // 10d6:45f8
db dummyd_1afbe[32]; // 10d6:4618
db dummyd_1afde[32]; // 10d6:4638
db dummyd_1affe[32]; // 10d6:4658
db dummyd_1b01e[32]; // 10d6:4678
db dummyd_1b03e[32]; // 10d6:4698
db dummyd_1b05e[32]; // 10d6:46b8
db dummyd_1b07e[32]; // 10d6:46d8
db dummyd_1b09e[32]; // 10d6:46f8
db dummyd_1b0be[32]; // 10d6:4718
db dummyd_1b0de[32]; // 10d6:4738
db dummyd_1b0fe[32]; // 10d6:4758
db dummyd_1b11e[32]; // 10d6:4778
db dummyd_1b13e[32]; // 10d6:4798
db dummyd_1b15e[32]; // 10d6:47b8
db dummyd_1b17e[32]; // 10d6:47d8
db dummyd_1b19e[32]; // 10d6:47f8
db dummyd_1b1be[32]; // 10d6:4818
db dummyd_1b1de[32]; // 10d6:4838
db dummyd_1b1fe[32]; // 10d6:4858
db dummyd_1b21e[32]; // 10d6:4878
db dummyd_1b23e[32]; // 10d6:4898
db dummyd_1b25e[32]; // 10d6:48b8
db dummyd_1b27e[32]; // 10d6:48d8
db dummyd_1b29e[32]; // 10d6:48f8
db dummyd_1b2be[32]; // 10d6:4918
db dummyd_1b2de[32]; // 10d6:4938
db dummyd_1b2fe[32]; // 10d6:4958
db dummyd_1b31e[32]; // 10d6:4978
db dummyd_1b33e[32]; // 10d6:4998
db dummyd_1b35e[32]; // 10d6:49b8
db dummyd_1b37e[32]; // 10d6:49d8
db dummyd_1b39e[32]; // 10d6:49f8
db dummyd_1b3be[32]; // 10d6:4a18
db dummyd_1b3de[32]; // 10d6:4a38
db dummyd_1b3fe[32]; // 10d6:4a58
db dummyd_1b41e[32]; // 10d6:4a78
db dummyd_1b43e[32]; // 10d6:4a98
db dummyd_1b45e[32]; // 10d6:4ab8
db dummyd_1b47e[32]; // 10d6:4ad8
db dummyd_1b49e[32]; // 10d6:4af8
db dummyd_1b4be[32]; // 10d6:4b18
db dummyd_1b4de[32]; // 10d6:4b38
db dummyd_1b4fe[32]; // 10d6:4b58
db dummyd_1b51e[32]; // 10d6:4b78
db dummyd_1b53e[32]; // 10d6:4b98
db dummyd_1b55e[32]; // 10d6:4bb8
db dummyd_1b57e[32]; // 10d6:4bd8
db dummyd_1b59e[32]; // 10d6:4bf8
db dummyd_1b5be[32]; // 10d6:4c18
db dummyd_1b5de[32]; // 10d6:4c38
db dummyd_1b5fe[32]; // 10d6:4c58
db dummyd_1b61e[32]; // 10d6:4c78
db dummyd_1b63e[32]; // 10d6:4c98
db dummyd_1b65e[32]; // 10d6:4cb8
db dummyd_1b67e[32]; // 10d6:4cd8
db dummyd_1b69e[32]; // 10d6:4cf8
db dummyd_1b6be[32]; // 10d6:4d18
db dummyd_1b6de[32]; // 10d6:4d38
db dummyd_1b6fe[32]; // 10d6:4d58
db dummyd_1b71e[32]; // 10d6:4d78
db dummyd_1b73e[32]; // 10d6:4d98
db dummyd_1b75e[32]; // 10d6:4db8
db dummyd_1b77e[32]; // 10d6:4dd8
db dummyd_1b79e[32]; // 10d6:4df8
db dummyd_1b7be[32]; // 10d6:4e18
db dummyd_1b7de[32]; // 10d6:4e38
db dummyd_1b7fe[32]; // 10d6:4e58
db dummyd_1b81e[32]; // 10d6:4e78
db dummyd_1b83e[32]; // 10d6:4e98
db dummyd_1b85e[32]; // 10d6:4eb8
db dummyd_1b87e[32]; // 10d6:4ed8
db dummyd_1b89e[32]; // 10d6:4ef8
db dummyd_1b8be[32]; // 10d6:4f18
db dummyd_1b8de[32]; // 10d6:4f38
db dummyd_1b8fe[32]; // 10d6:4f58
db dummyd_1b91e[32]; // 10d6:4f78
db dummyd_1b93e[32]; // 10d6:4f98
db dummyd_1b95e[32]; // 10d6:4fb8
db dummyd_1b97e[32]; // 10d6:4fd8
db dummyd_1b99e[32]; // 10d6:4ff8
db dummyd_1b9be[32]; // 10d6:5018
db dummyd_1b9de[32]; // 10d6:5038
db dummyd_1b9fe[32]; // 10d6:5058
db dummyd_1ba1e[32]; // 10d6:5078
db dummyd_1ba3e[32]; // 10d6:5098
db dummyd_1ba5e[32]; // 10d6:50b8
db dummyd_1ba7e[32]; // 10d6:50d8
db dummyd_1ba9e[32]; // 10d6:50f8
db dummyd_1babe[32]; // 10d6:5118
db dummyd_1bade;
db dummyd_1badf;
db dummyd_1bae0;
db dummyd_1bae1;
db dummyd_1bae2;
db dummyd_1bae3;
db dummyd_1bae4;
db dummyd_1bae5;
db dummyd_1bae6[32]; // 124c:0000
db dummyd_1bb06[32]; // 124c:0020
db dummyd_1bb26[32]; // 124c:0040
db dummyd_1bb46[32]; // 124c:0060
db dummyd_1bb66[32]; // 124c:0080
db dummyd_1bb86[32]; // 124c:00a0
db dummyd_1bba6[32]; // 124c:00c0
db dummyd_1bbc6[32]; // 124c:00e0
db dummyd_1bbe6[32]; // 124c:0100
db dummyd_1bc06[32]; // 124c:0120
db dummyd_1bc26[32]; // 124c:0140
db dummyd_1bc46[32]; // 124c:0160
db dummyd_1bc66[32]; // 124c:0180
db dummyd_1bc86[32]; // 124c:01a0
db dummyd_1bca6[32]; // 124c:01c0
db dummyd_1bcc6[32]; // 124c:01e0
db dummyd_1bce6[32]; // 124c:0200
db dummyd_1bd06[32]; // 124c:0220
db dummyd_1bd26[32]; // 124c:0240
db dummyd_1bd46[32]; // 124c:0260
db dummyd_1bd66[32]; // 124c:0280
db dummyd_1bd86[32]; // 124c:02a0
db dummyd_1bda6[32]; // 124c:02c0
db dummyd_1bdc6[32]; // 124c:02e0
db dummyd_1bde6[32]; // 124c:0300
db dummyd_1be06[32]; // 124c:0320
db dummyd_1be26[32]; // 124c:0340
db dummyd_1be46[32]; // 124c:0360
db dummyd_1be66[32]; // 124c:0380
db dummyd_1be86[32]; // 124c:03a0
db dummyd_1bea6[32]; // 124c:03c0
db dummyd_1bec6[32]; // 124c:03e0
db dummyd_1bee6[32]; // 124c:0400
db dummyd_1bf06[32]; // 124c:0420
db dummyd_1bf26[32]; // 124c:0440
db dummyd_1bf46[32]; // 124c:0460
db dummyd_1bf66[32]; // 124c:0480
db dummyd_1bf86[32]; // 124c:04a0
db dummyd_1bfa6[32]; // 124c:04c0
db dummyd_1bfc6[32]; // 124c:04e0
db dummyd_1bfe6[32]; // 124c:0500
db dummyd_1c006[32]; // 124c:0520
db dummyd_1c026[32]; // 124c:0540
db dummyd_1c046[32]; // 124c:0560
db dummyd_1c066[32]; // 124c:0580
db dummyd_1c086[32]; // 124c:05a0
db dummyd_1c0a6[32]; // 124c:05c0
db dummyd_1c0c6[32]; // 124c:05e0
db dummyd_1c0e6[32]; // 124c:0600
db dummyd_1c106[32]; // 124c:0620
db dummyd_1c126[32]; // 124c:0640
db dummyd_1c146[32]; // 124c:0660
db dummyd_1c166[32]; // 124c:0680
db dummyd_1c186[32]; // 124c:06a0
db dummyd_1c1a6[32]; // 124c:06c0
db dummyd_1c1c6[32]; // 124c:06e0
db dummyd_1c1e6[32]; // 124c:0700
db dummyd_1c206[32]; // 124c:0720
db dummyd_1c226[32]; // 124c:0740
db dummyd_1c246[32]; // 124c:0760
db dummyd_1c266[32]; // 124c:0780
db dummyd_1c286;
db dummyd_1c287;
db dummyd_1c288;
db dummyd_1c289;
db dummyd_1c28a;
db dummyd_1c28b;
db dummyd_1c28c; // 124c:07a6
db dummyd_1c28d; // 124c:07a7
dd dummyd_1c28e; // 124c:07a8
db dummyd_1c292; // 124c:07ac
db dummyd_1c293; // 124c:07ad
db dummyd_1c294; // 124c:07b0
db dummyd_1c295; // 124c:07b1
db dummyd_1c296; // 124c:07b2
db dummyd_1c297; // 124c:07b3
dd dummyd_1c298; // 124c:07b4
dd dummyd_1c29c; // 124c:07b8
db dummyd_1c2a0; // 124c:07bc
db dummyd_1c2a1; // 124c:07bd
db dummyd_1c2a2; // 124c:07c0
db dummyd_1c2a3; // 124c:07c1
db dummyd_1c2a4; // 124c:07c2
db dummyd_1c2a5; // 124c:07c3
dd dummyd_1c2a6; // 124c:07c4
dd dummyd_1c2aa; // 124c:07c8
db dummyd_1c2ae;
db dummyd_1c2af;
db dummyd_1c2b0; // 124c:07ce
db dummyd_1c2b1;
db dummyd_1c2b2; // 124c:07d0
db dummyd_1c2b3; // 124c:07d1
db dummyd_1c2b4; // 124c:07d2
db dummyd_1c2b5; // 124c:07d3
dd dummyd_1c2b6; // 124c:07d4
dd dummyd_1c2ba; // 124c:07d8
db dummyd_1c2be; // 124c:07dc
db dummyd_1c2bf; // 124c:07dd
db dummyd_1c2c0; // 124c:07e0
db dummyd_1c2c1; // 124c:07e1
db dummyd_1c2c2; // 124c:07e2
db dummyd_1c2c3; // 124c:07e3
dd dummyd_1c2c4; // 124c:07e4
dd dummyd_1c2c8; // 124c:07e8
db dummyd_1c2cc; // 124c:07ec
db dummyd_1c2cd; // 124c:07ed
db dummyd_1c2ce; // 124c:07f0
db dummyd_1c2cf; // 124c:07f1
db dummyd_1c2d0; // 124c:07f2
db dummyd_1c2d1; // 124c:07f3
dd dummyd_1c2d2; // 124c:07f4
dd dummyd_1c2d6; // 124c:07f8
db dummyd_1c2da; // 124c:07fc
db dummyd_1c2db; // 124c:07fd
db dummyd_1c2dc; // 124c:0800
db dummyd_1c2dd; // 124c:0801
db dummyd_1c2de; // 124c:0802
db dummyd_1c2df; // 124c:0803
dd dummyd_1c2e0; // 124c:0804
dd dummyd_1c2e4; // 124c:0808
db dummyd_1c2e8; // 124c:080c
db dummyd_1c2e9; // 124c:080d
db dummyd_1c2ea; // 124c:0810
db dummyd_1c2eb; // 124c:0811
db dummyd_1c2ec; // 124c:0812
db dummyd_1c2ed; // 124c:0813
dd dummyd_1c2ee; // 124c:0814
dd dummyd_1c2f2; // 124c:0818
db dummyd_1c2f6; // 124c:081c
db dummyd_1c2f7; // 124c:081d
db dummyd_1c2f8;
db dummyd_1c2f9;
db dummyd_1c2fa;
db dummyd_1c2fb;
db dummyd_1c2fc;
db dummyd_1c2fd;
dd dummyd_1c2fe; // 124c:0824
dd dummyd_1c302; // 124c:0828
db dummyd_1c306; // 124c:082c
db dummyd_1c307; // 124c:082d
db dummyd_1c308;
db dummyd_1c309;
db dummyd_1c30a;
db dummyd_1c30b;
db dummyd_1c30c;
db dummyd_1c30d; // 124c:0833
dd dummyd_1c30e; // 124c:0834
dd dummyd_1c312; // 124c:0838
db dummyd_1c316[32]; // 124c:083c
db dummyd_1c336[32]; // 124c:085c
db dummyd_1c356[32]; // 124c:087c
db dummyd_1c376[32]; // 124c:089c
db dummyd_1c396[32]; // 124c:08bc
db dummyd_1c3b6[32]; // 124c:08dc
db dummyd_1c3d6[32]; // 124c:08fc
db dummyd_1c3f6[32]; // 124c:091c
db dummyd_1c416[32]; // 124c:093c
db dummyd_1c436[32]; // 124c:095c
db dummyd_1c456[32]; // 124c:097c
db dummyd_1c476[32]; // 124c:099c
db dummyd_1c496[32]; // 124c:09bc
db dummyd_1c4b6[32]; // 124c:09dc
db dummyd_1c4d6[32]; // 124c:09fc
db dummyd_1c4f6[32]; // 124c:0a1c
db dummyd_1c516[32]; // 124c:0a3c
db dummyd_1c536[32]; // 124c:0a5c
db dummyd_1c556[32]; // 124c:0a7c
db dummyd_1c576[32]; // 124c:0a9c
db dummyd_1c596[32]; // 124c:0abc
db dummyd_1c5b6[32]; // 124c:0adc
db dummyd_1c5d6[32]; // 124c:0afc
db dummyd_1c5f6[32]; // 124c:0b1c
db dummyd_1c616[32]; // 124c:0b3c
db dummyd_1c636[32]; // 124c:0b5c
db dummyd_1c656[32]; // 124c:0b7c
db dummyd_1c676[32]; // 124c:0b9c
db dummyd_1c696[32]; // 124c:0bbc
db dummyd_1c6b6[32]; // 124c:0bdc
db dummyd_1c6d6[32]; // 124c:0bfc
db dummyd_1c6f6[32]; // 124c:0c1c
db dummyd_1c716[32]; // 124c:0c3c
db dummyd_1c736[32]; // 124c:0c5c
db dummyd_1c756[32]; // 124c:0c7c
db dummyd_1c776[32]; // 124c:0c9c
db dummyd_1c796[32]; // 124c:0cbc
db dummyd_1c7b6[32]; // 124c:0cdc
db dummyd_1c7d6[32]; // 124c:0cfc
db dummyd_1c7f6[32]; // 124c:0d1c
db dummyd_1c816[32]; // 124c:0d3c
db dummyd_1c836[32]; // 124c:0d5c
db dummyd_1c856[32]; // 124c:0d7c
db dummyd_1c876[32]; // 124c:0d9c
db dummyd_1c896[32]; // 124c:0dbc
db dummyd_1c8b6[32]; // 124c:0ddc
db dummyd_1c8d6[32]; // 124c:0dfc
db dummyd_1c8f6[32]; // 124c:0e1c
db dummyd_1c916[32]; // 124c:0e3c
db dummyd_1c936[32]; // 124c:0e5c
db dummyd_1c956[32]; // 124c:0e7c
db dummyd_1c976[32]; // 124c:0e9c
db dummyd_1c996[32]; // 124c:0ebc
db dummyd_1c9b6[32]; // 124c:0edc
db dummyd_1c9d6[32]; // 124c:0efc
db dummyd_1c9f6[32]; // 124c:0f1c
db dummyd_1ca16[32]; // 124c:0f3c
db dummyd_1ca36; // 124c:0f5c
db dummyd_1ca37; // 124c:0f5d
db dummyd_1ca38; // 124c:0f5e
db dummyd_1ca39;
db dummyd_1ca3a; // 124c:0f60
db dummyd_1ca3b; // 124c:0f61
db unk_2cbe2; // 124c:0f62
db dummyd_1ca3d[32]; // 124c:0f63
db dummyd_1ca5d[32]; // 124c:0f83
db dummyd_1ca7d[32]; // 124c:0fa3
db dummyd_1ca9d[32]; // 124c:0fc3
db dummyd_1cabd[32]; // 124c:0fe3
db dummyd_1cadd[32]; // 124c:1003
db dummyd_1cafd[32]; // 124c:1023
db dummyd_1cb1d[32]; // 124c:1043
db dummyd_1cb3d[32]; // 124c:1063
db dummyd_1cb5d[32]; // 124c:1083
db dummyd_1cb7d[32]; // 124c:10a3
db dummyd_1cb9d[32]; // 124c:10c3
db dummyd_1cbbd;
db dummyd_1cbbe; // 124c:10e4
db dummyd_1cbbf; // 124c:10e5
db dummyd_1cbc0;
db dummyd_1cbc1;
db dummyd_1cbc2; // 124c:10e8
db dummyd_1cbc3; // 124c:10e9
db dummyd_1cbc4;
db dummyd_1cbc5;
db dummyd_1cbc6; // 124c:10ec
db dummyd_1cbc7; // 124c:10ed
db dummyd_1cbc8;
db dummyd_1cbc9;
db dummyd_1cbca; // 124c:10f0
db dummyd_1cbcb; // 124c:10f1
db unk_2cd72; // 124c:10f2
db dummyd_1cbcd[32]; // 124c:10f3
db dummyd_1cbed[32]; // 124c:1113
db dummyd_1cc0d[32]; // 124c:1133
db dummyd_1cc2d[32]; // 124c:1153
db dummyd_1cc4d[32]; // 124c:1173
db dummyd_1cc6d[32]; // 124c:1193
db dummyd_1cc8d[32]; // 124c:11b3
db dummyd_1ccad[32]; // 124c:11d3
db dummyd_1cccd[32]; // 124c:11f3
db dummyd_1cced[32]; // 124c:1213
db dummyd_1cd0d[32]; // 124c:1233
db dummyd_1cd2d[32]; // 124c:1253
db dummyd_1cd4d[32]; // 124c:1273
db dummyd_1cd6d[32]; // 124c:1293
db dummyd_1cd8d[32]; // 124c:12b3
db dummyd_1cdad[32]; // 124c:12d3
db dummyd_1cdcd[32]; // 124c:12f3
db dummyd_1cded[32]; // 124c:1313
db dummyd_1ce0d[32]; // 124c:1333
db dummyd_1ce2d[32]; // 124c:1353
db dummyd_1ce4d[32]; // 124c:1373
db dummyd_1ce6d[32]; // 124c:1393
db dummyd_1ce8d[32]; // 124c:13b3
db dummyd_1cead[32]; // 124c:13d3
db dummyd_1cecd[32]; // 124c:13f3
db dummyd_1ceed[32]; // 124c:1413
db dummyd_1cf0d[32]; // 124c:1433
db dummyd_1cf2d[32]; // 124c:1453
db dummyd_1cf4d[32]; // 124c:1473
db dummyd_1cf6d[32]; // 124c:1493
db dummyd_1cf8d[32]; // 124c:14b3
db dummyd_1cfad[32]; // 124c:14d3
db dummyd_1cfcd[32]; // 124c:14f3
db dummyd_1cfed[32]; // 124c:1513
db dummyd_1d00d[32]; // 124c:1533
db dummyd_1d02d[32]; // 124c:1553
db dummyd_1d04d[32]; // 124c:1573
db dummyd_1d06d[32]; // 124c:1593
db dummyd_1d08d[32]; // 124c:15b3
db dummyd_1d0ad[32]; // 124c:15d3
db dummyd_1d0cd[32]; // 124c:15f3
db dummyd_1d0ed[32]; // 124c:1613
db dummyd_1d10d[32]; // 124c:1633
db dummyd_1d12d[32]; // 124c:1653
db dummyd_1d14d[32]; // 124c:1673
db dummyd_1d16d[32]; // 124c:1693
db dummyd_1d18d[32]; // 124c:16b3
db dummyd_1d1ad[32]; // 124c:16d3
db dummyd_1d1cd[32]; // 124c:16f3
db dummyd_1d1ed;
db dummyd_1d1ee; // 124c:1714
db dummyd_1d1ef; // 124c:1715
db dummyd_1d1f0;
db dummyd_1d1f1;
db dummyd_1d1f2; // 124c:1718
db dummyd_1d1f3; // 124c:1719
db dummyd_1d1f4;
db dummyd_1d1f5;
db dummyd_1d1f6; // 124c:171c
db dummyd_1d1f7; // 124c:171d
db dummyd_1d1f8;
db dummyd_1d1f9;
db dummyd_1d1fa; // 124c:1720
db dummyd_1d1fb; // 124c:1721
db dummyd_1d1fc;
db dummyd_1d1fd;
db dummyd_1d1fe; // 124c:1724
db dummyd_1d1ff; // 124c:1725
db dummyd_1d200;
db dummyd_1d201;
db dummyd_1d202; // 124c:1728
db dummyd_1d203; // 124c:1729
db dummyd_1d204;
db dummyd_1d205;
db dummyd_1d206; // 124c:172c
db dummyd_1d207; // 124c:172d
db dummyd_1d208;
db dummyd_1d209;
db dummyd_1d20a; // 124c:1730
db dummyd_1d20b; // 124c:1731
db unk_2d3b2; // 124c:1732
db dummyd_1d20d[32]; // 124c:1733
db dummyd_1d22d[32]; // 124c:1753
db dummyd_1d24d[32]; // 124c:1773
db dummyd_1d26d[32]; // 124c:1793
db dummyd_1d28d[32]; // 124c:17b3
db dummyd_1d2ad[32]; // 124c:17d3
db dummyd_1d2cd[32]; // 124c:17f3
db dummyd_1d2ed[32]; // 124c:1813
db dummyd_1d30d[32]; // 124c:1833
db dummyd_1d32d[32]; // 124c:1853
db dummyd_1d34d[32]; // 124c:1873
db dummyd_1d36d[32]; // 124c:1893
db dummyd_1d38d;
db dummyd_1d38e; // 124c:18b4
db dummyd_1d38f; // 124c:18b5
db dummyd_1d390;
db dummyd_1d391;
db dummyd_1d392; // 124c:18b8
db dummyd_1d393; // 124c:18b9
db dummyd_1d394;
db dummyd_1d395;
db dummyd_1d396; // 124c:18bc
db dummyd_1d397; // 124c:18bd
db dummyd_1d398;
db dummyd_1d399;
db dummyd_1d39a; // 124c:18c0
db dummyd_1d39b; // 124c:18c1
db unk_2d542; // 124c:18c2
db dummyd_1d39d[32]; // 124c:18c3
db dummyd_1d3bd[32]; // 124c:18e3
db dummyd_1d3dd[32]; // 124c:1903
db dummyd_1d3fd[32]; // 124c:1923
db dummyd_1d41d[32]; // 124c:1943
db dummyd_1d43d[32]; // 124c:1963
db dummyd_1d45d[32]; // 124c:1983
db dummyd_1d47d[32]; // 124c:19a3
db dummyd_1d49d[32]; // 124c:19c3
db dummyd_1d4bd[32]; // 124c:19e3
db dummyd_1d4dd[32]; // 124c:1a03
db dummyd_1d4fd[32]; // 124c:1a23
db dummyd_1d51d[32]; // 124c:1a43
db dummyd_1d53d[32]; // 124c:1a63
db dummyd_1d55d[32]; // 124c:1a83
db dummyd_1d57d[32]; // 124c:1aa3
db dummyd_1d59d[32]; // 124c:1ac3
db dummyd_1d5bd[32]; // 124c:1ae3
db dummyd_1d5dd[32]; // 124c:1b03
db dummyd_1d5fd[32]; // 124c:1b23
db dummyd_1d61d[32]; // 124c:1b43
db dummyd_1d63d[32]; // 124c:1b63
db dummyd_1d65d[32]; // 124c:1b83
db dummyd_1d67d[32]; // 124c:1ba3
db dummyd_1d69d[32]; // 124c:1bc3
db dummyd_1d6bd[32]; // 124c:1be3
db dummyd_1d6dd[32]; // 124c:1c03
db dummyd_1d6fd[32]; // 124c:1c23
db dummyd_1d71d[32]; // 124c:1c43
db dummyd_1d73d[32]; // 124c:1c63
db dummyd_1d75d[32]; // 124c:1c83
db dummyd_1d77d[32]; // 124c:1ca3
db dummyd_1d79d[32]; // 124c:1cc3
db dummyd_1d7bd[32]; // 124c:1ce3
db dummyd_1d7dd[32]; // 124c:1d03
db dummyd_1d7fd[32]; // 124c:1d23
db dummyd_1d81d[32]; // 124c:1d43
db dummyd_1d83d[32]; // 124c:1d63
db dummyd_1d85d[32]; // 124c:1d83
db dummyd_1d87d[32]; // 124c:1da3
db dummyd_1d89d[32]; // 124c:1dc3
db dummyd_1d8bd[32]; // 124c:1de3
db dummyd_1d8dd[32]; // 124c:1e03
db dummyd_1d8fd[32]; // 124c:1e23
db dummyd_1d91d[32]; // 124c:1e43
db dummyd_1d93d[32]; // 124c:1e63
db dummyd_1d95d[32]; // 124c:1e83
db dummyd_1d97d[32]; // 124c:1ea3
db dummyd_1d99d[32]; // 124c:1ec3
db dummyd_1d9bd[32]; // 124c:1ee3
db dummyd_1d9dd[32]; // 124c:1f03
db dummyd_1d9fd[32]; // 124c:1f23
db dummyd_1da1d[32]; // 124c:1f43
db dummyd_1da3d[32]; // 124c:1f63
db dummyd_1da5d[32]; // 124c:1f83
db dummyd_1da7d[32]; // 124c:1fa3
db dummyd_1da9d[32]; // 124c:1fc3
db dummyd_1dabd[32]; // 124c:1fe3
db dummyd_1dadd[32]; // 124c:2003
db dummyd_1dafd[32]; // 124c:2023
db dummyd_1db1d[32]; // 124c:2043
db dummyd_1db3d[32]; // 124c:2063
db dummyd_1db5d[32]; // 124c:2083
db dummyd_1db7d[32]; // 124c:20a3
db dummyd_1db9d[32]; // 124c:20c3
db dummyd_1dbbd[32]; // 124c:20e3
db dummyd_1dbdd[32]; // 124c:2103
db dummyd_1dbfd[32]; // 124c:2123
db dummyd_1dc1d[32]; // 124c:2143
db dummyd_1dc3d[32]; // 124c:2163
db dummyd_1dc5d[32]; // 124c:2183
db dummyd_1dc7d[32]; // 124c:21a3
db dummyd_1dc9d[32]; // 124c:21c3
db dummyd_1dcbd[32]; // 124c:21e3
db dummyd_1dcdd[32]; // 124c:2203
db dummyd_1dcfd[32]; // 124c:2223
db dummyd_1dd1d[32]; // 124c:2243
db dummyd_1dd3d[32]; // 124c:2263
db dummyd_1dd5d[32]; // 124c:2283
db dummyd_1dd7d[32]; // 124c:22a3
db dummyd_1dd9d[32]; // 124c:22c3
db dummyd_1ddbd[32]; // 124c:22e3
db dummyd_1dddd[32]; // 124c:2303
db dummyd_1ddfd[32]; // 124c:2323
db dummyd_1de1d[32]; // 124c:2343
db dummyd_1de3d[32]; // 124c:2363
db dummyd_1de5d[32]; // 124c:2383
db dummyd_1de7d[32]; // 124c:23a3
db dummyd_1de9d[32]; // 124c:23c3
db dummyd_1debd[32]; // 124c:23e3
db dummyd_1dedd[32]; // 124c:2403
db dummyd_1defd[32]; // 124c:2423
db dummyd_1df1d[32]; // 124c:2443
db dummyd_1df3d[32]; // 124c:2463
db dummyd_1df5d[32]; // 124c:2483
db dummyd_1df7d[32]; // 124c:24a3
db dummyd_1df9d[32]; // 124c:24c3
db dummyd_1dfbd[32]; // 124c:24e3
db dummyd_1dfdd[32]; // 124c:2503
db dummyd_1dffd[32]; // 124c:2523
db dummyd_1e01d[32]; // 124c:2543
db dummyd_1e03d[32]; // 124c:2563
db dummyd_1e05d[32]; // 124c:2583
db dummyd_1e07d[32]; // 124c:25a3
db dummyd_1e09d[32]; // 124c:25c3
db dummyd_1e0bd[32]; // 124c:25e3
db dummyd_1e0dd[32]; // 124c:2603
db dummyd_1e0fd[32]; // 124c:2623
db dummyd_1e11d[32]; // 124c:2643
db dummyd_1e13d[32]; // 124c:2663
db dummyd_1e15d[32]; // 124c:2683
db dummyd_1e17d[32]; // 124c:26a3
db dummyd_1e19d[32]; // 124c:26c3
db dummyd_1e1bd[32]; // 124c:26e3
db dummyd_1e1dd[32]; // 124c:2703
db dummyd_1e1fd[32]; // 124c:2723
db dummyd_1e21d[32]; // 124c:2743
db dummyd_1e23d[32]; // 124c:2763
db dummyd_1e25d[32]; // 124c:2783
db dummyd_1e27d[32]; // 124c:27a3
db dummyd_1e29d[32]; // 124c:27c3
db dummyd_1e2bd[32]; // 124c:27e3
db dummyd_1e2dd[32]; // 124c:2803
db dummyd_1e2fd[32]; // 124c:2823
db dummyd_1e31d;
db dummyd_1e31e; // 124c:2844
db dummyd_1e31f; // 124c:2845
db dummyd_1e320;
db dummyd_1e321;
db dummyd_1e322; // 124c:2848
db dummyd_1e323; // 124c:2849
db dummyd_1e324;
db dummyd_1e325;
db dummyd_1e326; // 124c:284c
db dummyd_1e327; // 124c:284d
db dummyd_1e328;
db dummyd_1e329;
db dummyd_1e32a; // 124c:2850
db dummyd_1e32b; // 124c:2851
db dummyd_1e32c;
db dummyd_1e32d;
db dummyd_1e32e; // 124c:2854
db dummyd_1e32f; // 124c:2855
db dummyd_1e330;
db dummyd_1e331;
db dummyd_1e332; // 124c:2858
db dummyd_1e333; // 124c:2859
db dummyd_1e334;
db dummyd_1e335;
db dummyd_1e336; // 124c:285c
db dummyd_1e337; // 124c:285d
db dummyd_1e338;
db dummyd_1e339;
db dummyd_1e33a; // 124c:2860
db dummyd_1e33b; // 124c:2861
db unk_2e4e2; // 124c:2862
db dummyd_1e33d[32]; // 124c:2863
db dummyd_1e35d[32]; // 124c:2883
db dummyd_1e37d[32]; // 124c:28a3
db dummyd_1e39d[32]; // 124c:28c3
db dummyd_1e3bd[32]; // 124c:28e3
db dummyd_1e3dd[32]; // 124c:2903
db dummyd_1e3fd[32]; // 124c:2923
db dummyd_1e41d;
db dummyd_1e41e;
db dummyd_1e41f;
db dummyd_1e420;
db dummyd_1e421;
db dummyd_1e422;
db dummyd_1e423;
db dummyd_1e424;
db dummyd_1e425;
db dummyd_1e426;
db dummyd_1e427;
db dummyd_1e428;
db dummyd_1e429;
db dummyd_1e42a;
db dummyd_1e42b;
db dummyd_1e42c;
db dummyd_1e42d;
db dummyd_1e42e;
db dummyd_1e42f;
db dummyd_1e430;
db dummyd_1e431;
db dummyd_1e432;
db dummyd_1e433;
db dummyd_1e434;
db dummyd_1e435;
db dummyd_1e436;
db dummyd_1e437;
db dummyd_1e438;
db dummyd_1e439;
db dummyd_1e43a;
db dummyd_1e43b;
db unk_2e5e2; // 124c:2962
db dummyd_1e43d[32]; // 124c:2963
db dummyd_1e45d[32]; // 124c:2983
db dummyd_1e47d[32]; // 124c:29a3
db dummyd_1e49d[32]; // 124c:29c3
db dummyd_1e4bd[32]; // 124c:29e3
db dummyd_1e4dd[32]; // 124c:2a03
db dummyd_1e4fd[32]; // 124c:2a23
db dummyd_1e51d[32]; // 124c:2a43
db dummyd_1e53d[32]; // 124c:2a63
db dummyd_1e55d[32]; // 124c:2a83
db dummyd_1e57d[32]; // 124c:2aa3
db dummyd_1e59d[32]; // 124c:2ac3
db dummyd_1e5bd[32]; // 124c:2ae3
db dummyd_1e5dd[32]; // 124c:2b03
db dummyd_1e5fd[32]; // 124c:2b23
db dummyd_1e61d[32]; // 124c:2b43
db dummyd_1e63d[32]; // 124c:2b63
db dummyd_1e65d[32]; // 124c:2b83
db dummyd_1e67d[32]; // 124c:2ba3
db dummyd_1e69d[32]; // 124c:2bc3
db dummyd_1e6bd[32]; // 124c:2be3
db dummyd_1e6dd[32]; // 124c:2c03
db dummyd_1e6fd[32]; // 124c:2c23
db dummyd_1e71d[32]; // 124c:2c43
db dummyd_1e73d[32]; // 124c:2c63
db dummyd_1e75d[32]; // 124c:2c83
db dummyd_1e77d[32]; // 124c:2ca3
db dummyd_1e79d;
db dummyd_1e79e;
db dummyd_1e79f;
db dummyd_1e7a0;
db dummyd_1e7a1;
db dummyd_1e7a2;
db dummyd_1e7a3;
db dummyd_1e7a4;
db dummyd_1e7a5;
db dummyd_1e7a6;
db dummyd_1e7a7;
db dummyd_1e7a8;
db dummyd_1e7a9;
db dummyd_1e7aa;
db dummyd_1e7ab;
db dummyd_1e7ac;
db dummyd_1e7ad;
db dummyd_1e7ae;
db dummyd_1e7af;
char apresskey1engli[44]; // 124c:2cd6
db dummyd_1e7dc[32]; // 124c:2d04
db dummyd_1e7fc[32]; // 124c:2d24
db dummyd_1e81c[32]; // 124c:2d44
db dummyd_1e83c[32]; // 124c:2d64
db dummyd_1e85c[32]; // 124c:2d84
db dummyd_1e87c;
db byte_2ea25; // 124c:2da5
db byte_2ea26; // 124c:2da6
db dummyd_1e87f; // 124c:2da7
db byte_2ea28; // 124c:2da8
db dummyd_1e881[32]; // 124c:2da9
db dummyd_1e8a1[32]; // 124c:2dc9
db dummyd_1e8c1[32]; // 124c:2de9
db dummyd_1e8e1[32]; // 124c:2e09
db dummyd_1e901[32]; // 124c:2e29
db dummyd_1e921[32]; // 124c:2e49
db dummyd_1e941[32]; // 124c:2e69
db dummyd_1e961[32]; // 124c:2e89
db dummyd_1e981[32]; // 124c:2ea9
db dummyd_1e9a1[32]; // 124c:2ec9
db dummyd_1e9c1[32]; // 124c:2ee9
db dummyd_1e9e1[32]; // 124c:2f09
db dummyd_1ea01[32]; // 124c:2f29
db dummyd_1ea21[32]; // 124c:2f49
db dummyd_1ea41[32]; // 124c:2f69
db dummyd_1ea61[32]; // 124c:2f89
db dummyd_1ea81[32]; // 124c:2fa9
db dummyd_1eaa1[32]; // 124c:2fc9
db dummyd_1eac1[32]; // 124c:2fe9
db dummyd_1eae1[32]; // 124c:3009
db dummyd_1eb01[32]; // 124c:3029
db dummyd_1eb21[32]; // 124c:3049
db dummyd_1eb41[32]; // 124c:3069
db dummyd_1eb61[32]; // 124c:3089
db dummyd_1eb81[32]; // 124c:30a9
db dummyd_1eba1[32]; // 124c:30c9
db dummyd_1ebc1[32]; // 124c:30e9
db dummyd_1ebe1[32]; // 124c:3109
db dummyd_1ec01[32]; // 124c:3129
db dummyd_1ec21[32]; // 124c:3149
db dummyd_1ec41[32]; // 124c:3169
db dummyd_1ec61[32]; // 124c:3189
db dummyd_1ec81[32]; // 124c:31a9
db dummyd_1eca1[32]; // 124c:31c9
db dummyd_1ecc1[32]; // 124c:31e9
db dummyd_1ece1[32]; // 124c:3209
db dummyd_1ed01[32]; // 124c:3229
db dummyd_1ed21[32]; // 124c:3249
db dummyd_1ed41[32]; // 124c:3269
db dummyd_1ed61[32]; // 124c:3289
db dummyd_1ed81[32]; // 124c:32a9
db dummyd_1eda1[32]; // 124c:32c9
db dummyd_1edc1[32]; // 124c:32e9
db dummyd_1ede1[32]; // 124c:3309
db dummyd_1ee01[32]; // 124c:3329
db dummyd_1ee21[32]; // 124c:3349
db dummyd_1ee41[32]; // 124c:3369
db dummyd_1ee61[32]; // 124c:3389
db dummyd_1ee81[32]; // 124c:33a9
db dummyd_1eea1; // 124c:33c9
db dummyd_1eea2; // 124c:33ca
db dummyd_1eea3; // 124c:33cb
db dummyd_1eea4; // 124c:33cc
db dummyd_1eea5; // 124c:33cd
db dummyd_1eea6; // 124c:33ce
db dummyd_1eea7; // 124c:33cf
db dummyd_1eea8; // 124c:33d0
db dummyd_1eea9; // 124c:33d1
db dummyd_1eeaa; // 124c:33d2
db dummyd_1eeab; // 124c:33d3
db dummyd_1eeac; // 124c:33d4
db dummyd_1eead; // 124c:33d5
db dummyd_1eeae; // 124c:33d6
db dummyd_1eeaf; // 124c:33d7
db dummyd_1eeb0; // 124c:33d8
db dummyd_1eeb1; // 124c:33d9
db dummyd_1eeb2; // 124c:33da
db dummyd_1eeb3; // 124c:33db
dw word_2f05c; // 124c:33dc
db dummyd_1eeb6[32]; // 124c:33de
db dummyd_1eed6[32]; // 124c:33fe
db dummyd_1eef6[32]; // 124c:341e
db dummyd_1ef16;
db dummyd_1ef17;
db dummyd_1ef18;
db dummyd_1ef19;
db dummyd_1ef1a;
db dummyd_1ef1b;
db dummyd_1ef1c;
db dummyd_1ef1d;
db dummyd_1ef1e; // 124c:3446
db dummyd_1ef1f; // 124c:3447
db dummyd_1ef20; // 124c:3448
db dummyd_1ef21; // 124c:3449
db dummyd_1ef22;
db dummyd_1ef23; // 124c:344b
db dummyd_1ef24; // 124c:344c
db dummyd_1ef25; // 124c:344d
db dummyd_1ef26; // 124c:344e
db byte_2f0cf; // 124c:344f
db byte_2f0d0; // 124c:3450
db dummyd_1ef29; // 124c:3451
db dummyd_1ef2a; // 124c:3452
db dummyd_1ef2b; // 124c:3453
db dummyd_1ef2c; // 124c:3454
db dummyd_1ef2d; // 124c:3455
db dummyd_1ef2e; // 124c:3456
db dummyd_1ef2f; // 124c:3457
db dummyd_1ef30; // 124c:3458
db dummyd_1ef31;
db dummyd_1ef32; // 124c:345a
db dummyd_1ef33;
db dummyd_1ef34;
db dummyd_1ef35;
db dummyd_1ef36;
db dummyd_1ef37;
db dummyd_1ef38;
db dummyd_1ef39; // 124c:3461
db dummyd_1ef3a; // 124c:3462
db dummyd_1ef3b; // 124c:3463
db dummyd_1ef3c; // 124c:3464
db dummyd_1ef3d;
db dummyd_1ef3e; // 124c:3466
db dummyd_1ef3f; // 124c:3467
db dummyd_1ef40; // 124c:3468
db dummyd_1ef41; // 124c:3469
db byte_2f0ea; // 124c:346a
db byte_2f0eb; // 124c:346b
db dummyd_1ef44[32]; // 124c:346c
db dummyd_1ef64[32]; // 124c:348c
db dummyd_1ef84[32]; // 124c:34ac
db dummyd_1efa4; // 124c:34cc
db dummyd_1efa5; // 124c:34cd
db dummyd_1efa6; // 124c:34ce
db dummyd_1efa7; // 124c:34cf
db dummyd_1efa8; // 124c:34d0
db dummyd_1efa9;
db dummyd_1efaa;
db dummyd_1efab;
db dummyd_1efac;
db dummyd_1efad;
db dummyd_1efae;
db dummyd_1efaf;
db dummyd_1efb0;
db dummyd_1efb1;
db dummyd_1efb2;
db dummyd_1efb3;
db dummyd_1efb4;
db dummyd_1efb5;
db dummyd_1efb6;
db dummyd_1efb7;
dw word_2f168; // 176a:0008
dw word_2f16a; // 176a:000a
db byte_2f16c; // 176a:000c
dw word_2f16d; // 176a:000d
dw seg_2f16f; // 176a:000f
db dummyd_1efc1; // 176a:0011
db dummyd_1efc2;
db dummyd_1efc3;
db byte_2f174; // 176a:0014
db dummyd_1efc5[32]; // 176a:0015
db dummyd_1efe5; // 176a:0035
db dummyd_1efe6; // 176a:0036
db dummyd_1efe7; // 176a:0037
db dummyd_1efe8; // 176a:0038
db dummyd_1efe9[32]; // 176a:02ac
db dummyd_1f009[32]; // 176a:02cc
db dummyd_1f029; // 176a:02ec
db dummyd_1f02a; // 176a:02ed
db dummyd_1f02b; // 176a:02ee
db dummyd_1f02c; // 176a:02ef
db dummyd_1f02d; // 176a:02f0
db dummyd_1f02e; // 176a:02f1
db dummyd_1f02f; // 176a:02f2
db dummyd_1f030; // 176a:02f3
db dummyd_1f031; // 176a:02f4
db dummyd_1f032; // 176a:02f5
db dummyd_1f033; // 176a:02f6
db dummyd_1f034;
db dummyd_1f035;
db dummyd_1f036;
db dummyd_1f037;
db dummyd_1f038;
db dummyd_1f039;
db dummyd_1f03a;
db dummyd_1f03b; // 176a:04a2
db dummyd_1f03c;
db dummyd_1f03d; // 176a:04a4
db dummyd_1f03e;
db dummyd_1f03f;
db dummyd_1f040;
db dummyd_1f041;
db dummyd_1f042;
db dummyd_1f043;
db dummyd_1f044;
db dummyd_1f045;
db dummyd_1f046;
db dummyd_1f047;
db dummyd_1f048;
db dummyd_1f049[4]; // 176a:04b0
db dummyd_1f04d[32]; // 176a:04b4
db dummyd_1f06d[32]; // 176a:04d4
db dummyd_1f08d[32]; // 176a:04f4
db dummyd_1f0ad;
db dummyd_1f0ae;
db dummyd_1f0af;
db dummyd_1f0b0;
db dummyd_1f0b1;
db dummyd_1f0b2;
db dummyd_1f0b3;
db dummyd_1f0b4;
db dummyd_1f0b5;
db dummyd_1f0b6;
db dummyd_1f0b7;
db dummyd_1f0b8; // 176a:051f
db dummyd_1f0b9; // 176a:0520
db dummyd_1f0ba; // 176a:0521
db dummyd_1f0bb; // 176a:0522
db dummyd_1f0bc;
db dummyd_1f0bd;
db dummyd_1f0be;
db dummyd_1f0bf;
db dummyd_1f0c0;
db dummyd_1f0c1;
db dummyd_1f0c2;
db dummyd_1f0c3;
db dummyd_1f0c4;
db dummyd_1f0c5;
db dummyd_1f0c6;
db dummyd_1f0c7;
db dummyd_1f0c8;
db dummyd_1f0c9;
db dummyd_1f0ca;
db dummyd_1f0cb;
db dummyd_1f0cc[5]; // 176a:0534
db dummyd_1f0d1;
db dummyd_1f0d2;
db dummyd_1f0d3;
db dummyd_1f0d4[10]; // 176a:053d
db dummyd_1f0de;
db dummyd_1f0df[5]; // 176a:0548
db dummyd_1f0e4;
db dummyd_1f0e5;
db dummyd_1f0e6;
db dummyd_1f0e7;
db dummyd_1f0e8;
db dummyd_1f0e9[7]; // 176a:0552
db dummyd_1f0f0[32]; // 176a:0559
db dummyd_1f110[32]; // 176a:0579
db dummyd_1f130[32]; // 176a:0599
db dummyd_1f150[32]; // 176a:05b9
db dummyd_1f170;
db dummyd_1f171[2]; // 176a:05da
db dummyd_1f173[32]; // 176a:05dc
db dummyd_1f193[32]; // 176a:05fc
db dummyd_1f1b3[32]; // 176a:061c
db dummyd_1f1d3[32]; // 176a:063c
db dummyd_1f1f3[32]; // 176a:065c
db dummyd_1f213; // 176a:067c
db dummyd_1f214; // 176a:067d
db dummyd_1f215; // 176a:067e
db dummyd_1f216; // 176a:067f
db dummyd_1f217; // 176a:0680
db dummyd_1f218; // 176a:0681
db dummyd_1f219; // 176a:0682
db dummyd_1f21a; // 176a:0683
db dummyd_1f21b; // 176a:0684
db dummyd_1f21c; // 176a:0685
db dummyd_1f21d; // 176a:0686
db dummyd_1f21e; // 176a:0687
db dummyd_1f21f; // 176a:0688
db dummyd_1f220; // 176a:0689
db dummyd_1f221; // 176a:068a
db dummyd_1f222; // 176a:068b
db dummyd_1f223; // 176a:068c
db dummyd_1f224; // 176a:068d
db dummyd_1f225; // 176a:068e
db dummyd_1f226; // 176a:068f
db dummyd_1f227; // 176a:0690
db dummyd_1f228; // 176a:0691
db dummyd_1f229; // 176a:0692
db dummyd_1f22a; // 176a:0693
db dummyd_1f22b; // 176a:0694
db dummyd_1f22c; // 176a:0695
db dummyd_1f22d; // 176a:0696
db dummyd_1f22e; // 176a:0697
db dummyd_1f22f; // 176a:0698
db dummyd_1f230; // 176a:0699
db dummyd_1f231; // 176a:069a
db dummyd_1f232[32]; // 176a:069c
db dummyd_1f252[32]; // 176a:06bc
db dummyd_1f272[32]; // 176a:06dc
db dummyd_1f292[32]; // 176a:06fc
db dummyd_1f2b2[32]; // 176a:071c
db dummyd_1f2d2; // 176a:073c
db dummyd_1f2d3; // 176a:073d
db dummyd_1f2d4; // 176a:073e
db dummyd_1f2d5; // 176a:073f
db dummyd_1f2d6; // 176a:0740
db dummyd_1f2d7; // 176a:0741
db dummyd_1f2d8; // 176a:0742
db dummyd_1f2d9; // 176a:0743
db dummyd_1f2da; // 176a:0744
db dummyd_1f2db; // 176a:0745
db dummyd_1f2dc; // 176a:0746
db dummyd_1f2dd; // 176a:0747
db dummyd_1f2de; // 176a:0748
db dummyd_1f2df; // 176a:0749
db dummyd_1f2e0; // 176a:074a
db dummyd_1f2e1; // 176a:074b
db dummyd_1f2e2; // 176a:074c
db dummyd_1f2e3; // 176a:074d
db dummyd_1f2e4; // 176a:074e
db dummyd_1f2e5; // 176a:074f
db dummyd_1f2e6; // 176a:0750
db dummyd_1f2e7; // 176a:0751
db dummyd_1f2e8; // 176a:0752
db dummyd_1f2e9; // 176a:0753
db dummyd_1f2ea; // 176a:0754
db dummyd_1f2eb; // 176a:0755
db dummyd_1f2ec; // 176a:0756
db dummyd_1f2ed; // 176a:0757
db dummyd_1f2ee; // 176a:0758
db dummyd_1f2ef; // 176a:0759
db dummyd_1f2f0; // 176a:075a
db dummyd_1f2f1[2]; // 176a:075b
db dummyd_1f2f3[32]; // 176a:075d
db dummyd_1f313[32]; // 176a:077d
db dummyd_1f333[32]; // 176a:079d
db dummyd_1f353[32]; // 176a:07bd
db dummyd_1f373[32]; // 176a:07dd
db dummyd_1f393[32]; // 176a:07fd
db dummyd_1f3b3[32]; // 176a:081d
db dummyd_1f3d3[32]; // 176a:083d
db dummyd_1f3f3[32]; // 176a:085d
db dummyd_1f413[32]; // 176a:087d
db dummyd_1f433; // 176a:089d
db dummyd_1f434; // 176a:089e
db dummyd_1f435; // 176a:089f
db dummyd_1f436; // 176a:08a0
db dummyd_1f437; // 176a:08a1
db dummyd_1f438; // 176a:08a2
db dummyd_1f439; // 176a:08a3
db dummyd_1f43a; // 176a:08a4
db dummyd_1f43b; // 176a:08a5
db dummyd_1f43c; // 176a:08a6
db dummyd_1f43d; // 176a:08a7
db dummyd_1f43e;
db dummyd_1f43f;
db dummyd_1f440;
db dummyd_1f441;
db dummyd_1f442; // 176a:08ac
db dummyd_1f443; // 176a:08ad
db dummyd_1f444; // 176a:08ae
db dummyd_1f445; // 176a:08af
db dummyd_1f446; // 176a:08b0
db dummyd_1f447; // 176a:08b1
db dummyd_1f448; // 176a:08b2
db dummyd_1f449; // 176a:08b3
db dummyd_1f44a; // 176a:08b4
db dummyd_1f44b; // 176a:08b5
db dummyd_1f44c; // 176a:08b6
db dummyd_1f44d; // 176a:08b7
db dummyd_1f44e;
db dummyd_1f44f;
db dummyd_1f450;
db dummyd_1f451;
db dummyd_1f452[10]; // 176a:08bf
db dummyd_1f45c[32]; // 176a:08c9
db dummyd_1f47c[32]; // 176a:08e9
db dummyd_1f49c[32]; // 176a:0909
db dummyd_1f4bc[32]; // 176a:0929
db dummyd_1f4dc[32]; // 176a:0949
db dummyd_1f4fc;
db dummyd_1f4fd;
db dummyd_1f4fe;
db dummyd_1f4ff; // 176a:096c
db dummyd_1f500; // 176a:096d
db dummyd_1f501; // 176a:096e
db dummyd_1f502; // 176a:096f
db dummyd_1f503; // 176a:0970
db dummyd_1f504; // 176a:0971
db dummyd_1f505;
db dummyd_1f506;
db dummyd_1f507;
db dummyd_1f508; // 176a:0975
db dummyd_1f509; // 176a:0976
db dummyd_1f50a; // 176a:0977
db dummyd_1f50b;
db dummyd_1f50c;
db dummyd_1f50d;
db dummyd_1f50e;
db dummyd_1f50f[11]; // 176a:097c
db dummyd_1f51a[2]; // 176a:0987
db dummyd_1f51c;
db dummyd_1f51d;
db dummyd_1f51e;
db dummyd_1f51f[12]; // 176a:098c
db dummyd_1f52b[32]; // 176a:0998
db dummyd_1f54b[32]; // 176a:09b8
db dummyd_1f56b[32]; // 176a:09d8
db dummyd_1f58b;
db dummyd_1f58c;
db dummyd_1f58d;
db dummyd_1f58e;
db dummyd_1f58f; // 176a:09fc
db dummyd_1f590; // 176a:09fd
db dummyd_1f591; // 176a:09fe
db dummyd_1f592; // 176a:09ff
db dummyd_1f593; // 176a:0a00
db dummyd_1f594; // 176a:0a01
db dummyd_1f595;
db dummyd_1f596; // 176a:0a03
db dummyd_1f597;
db dummyd_1f598; // 176a:0a05
db dummyd_1f599; // 176a:0a06
db dummyd_1f59a; // 176a:0a07
db dummyd_1f59b;
db dummyd_1f59c;
db dummyd_1f59d;
db dummyd_1f59e;
db dummyd_1f59f[32]; // 176a:0a0d
db dummyd_1f5bf[32]; // 176a:0a2d
db dummyd_1f5df[32]; // 176a:0a4d
db dummyd_1f5ff[32]; // 176a:0a6d
db dummyd_1f61f[32]; // 176a:0a8d
db dummyd_1f63f[32]; // 176a:0aad
db dummyd_1f65f; // 176a:0acd
db dummyd_1f660; // 176a:0ace
db dummyd_1f661; // 176a:0acf
db dummyd_1f662; // 176a:0ad0
db dummyd_1f663; // 176a:0ad1
db dummyd_1f664;
db dummyd_1f665;
db dummyd_1f666;
db dummyd_1f667;
db dummyd_1f668; // 176a:0ad6
db dummyd_1f669; // 176a:0ad7
db dummyd_1f66a;
db dummyd_1f66b;
db dummyd_1f66c;
db dummyd_1f66d;
db dummyd_1f66e[32]; // 176a:0add
db dummyd_1f68e[32]; // 176a:0afd
db dummyd_1f6ae; // 176a:0b1d
db dummyd_1f6af; // 176a:0b1e
db dummyd_1f6b0; // 176a:0b1f
db dummyd_1f6b1; // 176a:0b20
db dummyd_1f6b2; // 176a:0b21
db dummyd_1f6b3; // 176a:0b22
db dummyd_1f6b4; // 176a:0b23
db dummyd_1f6b5;
db dummyd_1f6b6; // 176a:0b25
db dummyd_1f6b7; // 176a:0b26
db dummyd_1f6b8; // 176a:0b27
db dummyd_1f6b9;
db dummyd_1f6ba;
db dummyd_1f6bb;
db dummyd_1f6bc;
db dummyd_1f6bd[11]; // 176a:0b2c
db dummyd_1f6c8[2]; // 176a:0b37
db dummyd_1f6ca[32]; // 176a:0b39
db dummyd_1f6ea[32]; // 176a:0b59
db dummyd_1f70a[32]; // 176a:0b79
db dummyd_1f72a;
db dummyd_1f72b;
db dummyd_1f72c;
db byte_2fcfc; // 176a:0b9c
db dummyd_1f72e[32]; // 176a:0b9d
db dummyd_1f74e[32]; // 176a:0bbd
db dummyd_1f76e[32]; // 176a:0bdd
db dummyd_1f78e[32]; // 176a:0bfd
db dummyd_1f7ae[32]; // 176a:0c1d
db dummyd_1f7ce[32]; // 176a:0c3d
db dummyd_1f7ee[32]; // 176a:0c5d
db dummyd_1f80e[32]; // 176a:0c7d
db dummyd_1f82e[32]; // 176a:0c9d
db dummyd_1f84e[32]; // 176a:0cbd
db dummyd_1f86e[32]; // 176a:0cdd
db dummyd_1f88e[32]; // 176a:0cfd
db dummyd_1f8ae[32]; // 176a:0d1d
db dummyd_1f8ce[32]; // 176a:0d3d
db dummyd_1f8ee[32]; // 176a:0d5d
db dummyd_1f90e[32]; // 176a:0d7d
db dummyd_1f92e[32]; // 176a:0d9d
db dummyd_1f94e[32]; // 176a:0dbd
db dummyd_1f96e[32]; // 176a:0ddd
db dummyd_1f98e[32]; // 176a:0dfd
db dummyd_1f9ae[32]; // 176a:0e1d
db dummyd_1f9ce[32]; // 176a:0e3d
db dummyd_1f9ee[32]; // 176a:0e5d
db dummyd_1fa0e[32]; // 176a:0e7d
db dummyd_1fa2e[32]; // 176a:0e9d
db dummyd_1fa4e[32]; // 176a:0ebd
db dummyd_1fa6e[32]; // 176a:0edd
db dummyd_1fa8e[32]; // 176a:0efd
db dummyd_1faae[32]; // 176a:0f1d
db dummyd_1face[32]; // 176a:0f3d
db dummyd_1faee[32]; // 176a:0f5d
db dummyd_1fb0e[32]; // 176a:0f7d
db dummyd_1fb2e[32]; // 176a:0f9d
db dummyd_1fb4e[32]; // 176a:0fbd
db dummyd_1fb6e[32]; // 176a:0fdd
db dummyd_1fb8e[32]; // 176a:0ffd
db dummyd_1fbae[32]; // 176a:101d
db dummyd_1fbce[32]; // 176a:103d
db dummyd_1fbee[32]; // 176a:105d
db dummyd_1fc0e[32]; // 176a:107d
db dummyd_1fc2e[32]; // 176a:109d
db dummyd_1fc4e[32]; // 176a:10bd
db dummyd_1fc6e[32]; // 176a:10dd
db dummyd_1fc8e[32]; // 176a:10fd
db dummyd_1fcae[32]; // 176a:111d
db dummyd_1fcce[32]; // 176a:113d
db dummyd_1fcee[32]; // 176a:115d
db dummyd_1fd0e[32]; // 176a:117d
db dummyd_1fd2e[32]; // 176a:119d
db dummyd_1fd4e[4]; // 176a:11bd
db dummyd_1fd52[32]; // 176a:11c1
db dummyd_1fd72[32]; // 176a:11e1
db dummyd_1fd92[32]; // 176a:1201
db dummyd_1fdb2[32]; // 176a:1221
db dummyd_1fdd2[32]; // 176a:1241
db dummyd_1fdf2[32]; // 176a:1261
db dummyd_1fe12; // 176a:1281
db dummyd_1fe13;
db dummyd_1fe14;
db dummyd_1fe15; // 176a:1284
db dummyd_1fe16;
db dummyd_1fe17; // 176a:1286
db dummyd_1fe18;
db dummyd_1fe19; // 176a:1288
db dummyd_1fe1a; // 176a:1289
db dummyd_1fe1b;
db dummyd_1fe1c; // 176a:128b
db dummyd_1fe1d; // 176a:128c
db dummyd_1fe1e; // 176a:128d
db dummyd_1fe1f[8]; // 176a:128e
db dummyd_1fe27[32]; // 176a:1296
db dummyd_1fe47; // 176a:12b6
db dummyd_1fe48; // 176a:12b7
db dummyd_1fe49; // 176a:12b8
db dummyd_1fe4a; // 176a:12b9
db dummyd_1fe4b; // 176a:12ba
db dummyd_1fe4c; // 176a:12bb
db dummyd_1fe4d; // 176a:12bc
db dummyd_1fe4e[32]; // 176a:12c3
db dummyd_1fe6e[32]; // 176a:12e3
db dummyd_1fe8e[32]; // 176a:1303
db dummyd_1feae[32]; // 176a:1323
db dummyd_1fece[32]; // 176a:1343
db dummyd_1feee[32]; // 176a:1363
db dummyd_1ff0e[32]; // 176a:1383
db dummyd_1ff2e[32]; // 176a:13a3
db dummyd_1ff4e[32]; // 176a:13c3
db dummyd_1ff6e[32]; // 176a:13e3
db dummyd_1ff8e; // 176a:1403
db dummyd_1ff8f; // 176a:1404
db dummyd_1ff90; // 176a:1405
db dummyd_1ff91; // 176a:1406
db dummyd_1ff92; // 176a:1407
db dummyd_1ff93; // 176a:1408
db dummyd_1ff94; // 176a:1409
db dummyd_1ff95; // 176a:140a
db dummyd_1ff96; // 176a:140b
db dummyd_1ff97; // 176a:140c
db dummyd_1ff98; // 176a:140d
db dummyd_1ff99; // 176a:140e
db dummyd_1ff9a;
db dummyd_1ff9b; // 176a:1410
db dummyd_1ff9c; // 176a:1411
db dummyd_1ff9d; // 176a:1412
db dummyd_1ff9e;
db dummyd_1ff9f; // 176a:1414
db dummyd_1ffa0; // 176a:1415
db dummyd_1ffa1; // 176a:1416
db dummyd_1ffa2; // 176a:1417
db dummyd_1ffa3; // 176a:1418
db dummyd_1ffa4; // 176a:1419
db dummyd_1ffa5; // 176a:141a
db dummyd_1ffa6[6]; // 176a:141b
db dummyd_1ffac[32]; // 176a:1421
db dummyd_1ffcc; // 176a:1441
db dummyd_1ffcd[32]; // 176a:1446
db dummyd_1ffed[32]; // 176a:1466
db dummyd_2000d[32]; // 176a:1486
db dummyd_2002d[32]; // 176a:14a6
db dummyd_2004d[32]; // 176a:14c6
db dummyd_2006d[32]; // 176a:14e6
db dummyd_2008d[32]; // 176a:1506
db dummyd_200ad[32]; // 176a:1526
db dummyd_200cd[32]; // 176a:1546
db dummyd_200ed[32]; // 176a:1566
db dummyd_2010d[32]; // 176a:1586
db dummyd_2012d[32]; // 176a:15a6
db dummyd_2014d[32]; // 176a:15c6
db dummyd_2016d[32]; // 176a:15e6
db dummyd_2018d[32]; // 176a:1606
db dummyd_201ad[32]; // 176a:1626
db dummyd_201cd[32]; // 176a:1646
db dummyd_201ed[32]; // 176a:1666
db dummyd_2020d[32]; // 176a:1686
db dummyd_2022d[32]; // 176a:16a6
db dummyd_2024d[32]; // 176a:16c6
db dummyd_2026d[32]; // 176a:16e6
db dummyd_2028d[32]; // 176a:1706
db dummyd_202ad[32]; // 176a:1726
db dummyd_202cd[32]; // 176a:1746
db dummyd_202ed[32]; // 176a:1766
db dummyd_2030d[32]; // 176a:1786
db dummyd_2032d[32]; // 176a:17a6
db dummyd_2034d[32]; // 176a:17c6
db dummyd_2036d[32]; // 176a:17e6
db dummyd_2038d[32]; // 176a:1806
db dummyd_203ad[32]; // 176a:1826
db dummyd_203cd[32]; // 176a:1846
db dummyd_203ed[32]; // 176a:1866
db dummyd_2040d[32]; // 176a:1886
db dummyd_2042d[32]; // 176a:18a6
db dummyd_2044d[32]; // 176a:18c6
db dummyd_2046d[32]; // 176a:18e6
db dummyd_2048d[32]; // 176a:1906
db dummyd_204ad[32]; // 176a:1926
db dummyd_204cd[32]; // 176a:1946
db dummyd_204ed[32]; // 176a:1966
db dummyd_2050d[32]; // 176a:1986
db dummyd_2052d[32]; // 176a:19a6
db dummyd_2054d[32]; // 176a:19c6
db dummyd_2056d[32]; // 176a:19e6
db dummyd_2058d[32]; // 176a:1a06
db dummyd_205ad[32]; // 176a:1a26
db dummyd_205cd[32]; // 176a:1a46
db dummyd_205ed[32]; // 176a:1a66
db dummyd_2060d[32]; // 176a:1a86
db dummyd_2062d[32]; // 176a:1aa6
db dummyd_2064d[32]; // 176a:1ac6
db dummyd_2066d[32]; // 176a:1ae6
db dummyd_2068d[32]; // 176a:1b06
db dummyd_206ad[32]; // 176a:1b26
db dummyd_206cd[32]; // 176a:1b46
db dummyd_206ed[32]; // 176a:1b66
db dummyd_2070d[32]; // 176a:1b86
db dummyd_2072d[32]; // 176a:1ba6
db dummyd_2074d[32]; // 176a:1bc6
db dummyd_2076d[32]; // 176a:1be6
db dummyd_2078d[32]; // 176a:1c06
db dummyd_207ad[32]; // 176a:1c26
db dummyd_207cd[32]; // 176a:1c46
db dummyd_207ed[32]; // 176a:1c66
db dummyd_2080d[32]; // 176a:1c86
db dummyd_2082d[32]; // 176a:1ca6
db dummyd_2084d[32]; // 176a:1cc6
db dummyd_2086d[32]; // 176a:1ce6
db dummyd_2088d[32]; // 176a:1d06
db dummyd_208ad[32]; // 176a:1d26
db dummyd_208cd[32]; // 176a:1d46
db dummyd_208ed[32]; // 176a:1d66
db dummyd_2090d[32]; // 176a:1d86
db dummyd_2092d[32]; // 176a:1da6
db dummyd_2094d[32]; // 176a:1dc6
db dummyd_2096d[32]; // 176a:1de6
db dummyd_2098d[32]; // 176a:1e06
db dummyd_209ad[32]; // 176a:1e26
db dummyd_209cd[32]; // 176a:1e46
db dummyd_209ed[32]; // 176a:1e66
db dummyd_20a0d[32]; // 176a:1e86
db dummyd_20a2d[32]; // 176a:1ea6
db dummyd_20a4d[32]; // 176a:1ec6
db dummyd_20a6d[32]; // 176a:1ee6
db dummyd_20a8d[32]; // 176a:1f06
db dummyd_20aad[32]; // 176a:1f26
db dummyd_20acd[32]; // 176a:1f46
db dummyd_20aed[32]; // 176a:1f66
db dummyd_20b0d[32]; // 176a:1f86
db dummyd_20b2d[32]; // 176a:1fa6
db dummyd_20b4d;
db dummyd_20b4e;
db dummyd_20b4f;
db dummyd_20b50;
db dummyd_20b51;
db dummyd_20b52;
db dummyd_20b53;
db dummyd_20b54;
db dummyd_20b55;
db dummyd_20b56;
db dummyd_20b57[32]; // 1856:0000
db dummyd_20b77[32]; // 1856:0020
db dummyd_20b97[32]; // 1856:0040
db dummyd_20bb7[32]; // 1856:0060
db dummyd_20bd7[32]; // 1856:0080
db dummyd_20bf7[32]; // 1856:00a0
db dummyd_20c17[32]; // 1856:00c0
db dummyd_20c37[32]; // 1856:00e0
db dummyd_20c57[32]; // 1856:0100
db dummyd_20c77[32]; // 1856:0120
db dummyd_20c97[32]; // 1856:0140
db dummyd_20cb7[32]; // 1856:0160
db dummyd_20cd7[32]; // 1856:0180
db dummyd_20cf7[32]; // 1856:01a0
db dummyd_20d17[32]; // 1856:01c0
db dummyd_20d37[32]; // 1856:01e0
db dummyd_20d57[32]; // 1856:0200
db dummyd_20d77[32]; // 1856:0220
db dummyd_20d97[32]; // 1856:0240
db dummyd_20db7[32]; // 1856:0260
db dummyd_20dd7[32]; // 1856:0280
db dummyd_20df7[32]; // 1856:02a0
db dummyd_20e17[32]; // 1856:02c0
db dummyd_20e37[32]; // 1856:02e0
db dummyd_20e57[32]; // 1856:0300
db dummyd_20e77[32]; // 1856:0320
db dummyd_20e97[32]; // 1856:0340
db dummyd_20eb7[32]; // 1856:0360
db dummyd_20ed7[32]; // 1856:0380
db dummyd_20ef7[32]; // 1856:03a0
db dummyd_20f17[32]; // 1856:03c0
db dummyd_20f37[32]; // 1856:03e0
db dummyd_20f57[32]; // 1856:0400
db dummyd_20f77[32]; // 1856:0420
db dummyd_20f97[32]; // 1856:0440
db dummyd_20fb7[32]; // 1856:0460
db dummyd_20fd7[32]; // 1856:0480
db dummyd_20ff7[32]; // 1856:04a0
db dummyd_21017[32]; // 1856:04c0
db dummyd_21037[32]; // 1856:04e0
db dummyd_21057[32]; // 1856:0500
db dummyd_21077[32]; // 1856:0520
db dummyd_21097[32]; // 1856:0540
db dummyd_210b7[32]; // 1856:0560
db dummyd_210d7[32]; // 1856:0580
db dummyd_210f7[32]; // 1856:05a0
db dummyd_21117[32]; // 1856:05c0
db dummyd_21137[32]; // 1856:05e0
db dummyd_21157[32]; // 1856:0600
db dummyd_21177[32]; // 1856:0620
db dummyd_21197[32]; // 1856:0640
db dummyd_211b7[32]; // 1856:0660
db dummyd_211d7[32]; // 1856:0680
db dummyd_211f7[32]; // 1856:06a0
db dummyd_21217[32]; // 1856:06c0
db dummyd_21237[32]; // 1856:06e0
db dummyd_21257[32]; // 1856:0700
db dummyd_21277[32]; // 1856:0720
db dummyd_21297[32]; // 1856:0740
db dummyd_212b7[32]; // 1856:0760
db dummyd_212d7[32]; // 1856:0780
db dummyd_212f7[32]; // 1856:07a0
db dummyd_21317[32]; // 1856:07c0
db dummyd_21337[32]; // 1856:07e0
db dummyd_21357[32]; // 1856:0800
db dummyd_21377[32]; // 1856:0820
db dummyd_21397[32]; // 1856:0840
db dummyd_213b7[32]; // 1856:0860
db dummyd_213d7[32]; // 1856:0880
db dummyd_213f7[32]; // 1856:08a0
db dummyd_21417[32]; // 1856:08c0
db dummyd_21437[32]; // 1856:08e0
db dummyd_21457[32]; // 1856:0900
db dummyd_21477[32]; // 1856:0920
db dummyd_21497[32]; // 1856:0940
db dummyd_214b7[32]; // 1856:0960
db dummyd_214d7[32]; // 1856:0980
db dummyd_214f7[32]; // 1856:09a0
db dummyd_21517[32]; // 1856:09c0
db dummyd_21537[32]; // 1856:09e0
db dummyd_21557[32]; // 1856:0a00
db dummyd_21577[32]; // 1856:0a20
db dummyd_21597[32]; // 1856:0a40
db dummyd_215b7[32]; // 1856:0a60
db dummyd_215d7[32]; // 1856:0a80
db dummyd_215f7[32]; // 1856:0aa0
db dummyd_21617[32]; // 1856:0ac0
db dummyd_21637[32]; // 1856:0ae0
db dummyd_21657[32]; // 1856:0b00
db dummyd_21677;
db dummyd_21678;
db dummyd_21679;
db dummyd_2167a;
db dummyd_2167b;
db dummyd_2167c;
db dummyd_2167d;
db dummyd_2167e;
db dummyd_2167f;
db dummyd_21680;
db dummyd_21681;
db dummyd_21682;
db dummyd_21683;
db dummyd_21684;
db dummyd_21685;
db dummyd_21686;
db dummyd_21687[32]; // 1d6a:0000
db dummyd_216a7[32]; // 1d6a:0020
db dummyd_216c7[32]; // 1d6a:0040
db dummyd_216e7[32]; // 1d6a:0060
db dummyd_21707[32]; // 1d6a:0080
db dummyd_21727[32]; // 1d6a:00a0
db dummyd_21747[32]; // 1d6a:00c0
db dummyd_21767[32]; // 1d6a:00e0
db dummyd_21787[32]; // 1d6a:0100
db dummyd_217a7[32]; // 1d6a:0120
db dummyd_217c7[32]; // 1d6a:0140
db dummyd_217e7[32]; // 1d6a:0160
db dummyd_21807[32]; // 1d6a:0180
db dummyd_21827[32]; // 1d6a:01a0
db dummyd_21847; // 1d6a:01c0
db dummyd_21848; // 1d6a:01c1
db dummyd_21849; // 1d6a:01c2
db dummyd_2184a; // 1d6a:01c3
db dummyd_2184b; // 1d6a:01c4
db dummyd_2184c; // 1d6a:01c5
db dummyd_2184d; // 1d6a:01c6
db dummyd_2184e; // 1d6a:01c7
db dummyd_2184f; // 1d6a:01c8
db dummyd_21850; // 1d6a:01c9
db dummyd_21851; // 1d6a:01ca
db dummyd_21852; // 1d6a:01cb
db dummyd_21853; // 1d6a:01cc
db dummyd_21854; // 1d6a:01cd
db dummyd_21855; // 1d6a:01ce
db dummyd_21856; // 1d6a:01cf
db dummyd_21857; // 1d6a:01d0
db dummyd_21858; // 1d6a:01d1
db dummyd_21859; // 1d6a:01d2
db dummyd_2185a; // 1d6a:01d3
db dummyd_2185b; // 1d6a:01d4
db dummyd_2185c; // 1d6a:01d5
db dummyd_2185d; // 1d6a:01d6
db dummyd_2185e; // 1d6a:01d7
db dummyd_2185f; // 1d6a:01d8
db dummyd_21860; // 1d6a:01d9
db dummyd_21861; // 1d6a:01da
db dummyd_21862; // 1d6a:01db
db dummyd_21863[32]; // 1d6a:01e0
db dummyd_21883[32]; // 1d6a:0200
db dummyd_218a3; // 1d6a:0220
db dummyd_218a4; // 1d6a:0221
db dummyd_218a5; // 1d6a:0222
db dummyd_218a6; // 1d6a:0223
db dummyd_218a7; // 1d6a:0224
db dummyd_218a8; // 1d6a:0225
db dummyd_218a9; // 1d6a:0226
db dummyd_218aa; // 1d6a:0227
db dummyd_218ab; // 1d6a:0228
db dummyd_218ac; // 1d6a:0229
db dummyd_218ad; // 1d6a:022a
db dummyd_218ae; // 1d6a:022b
db dummyd_218af; // 1d6a:022c
db dummyd_218b0; // 1d6a:022d
db dummyd_218b1; // 1d6a:022e
db dummyd_218b2; // 1d6a:022f
db dummyd_218b3; // 1d6a:0230
db dummyd_218b4; // 1d6a:0231
db dummyd_218b5; // 1d6a:0232
db dummyd_218b6; // 1d6a:0233
db dummyd_218b7; // 1d6a:0234
db dummyd_218b8; // 1d6a:0235
db dummyd_218b9; // 1d6a:0236
db dummyd_218ba; // 1d6a:0237
db dummyd_218bb; // 1d6a:0238
db dummyd_218bc; // 1d6a:0239
dw dummyd_218bd; // 1d6a:023a
db dummyd_218bf[32]; // 1d6a:023c
db dummyd_218df; // 1d6a:025c
db dummyd_218e0; // 1d6a:025d
db dummyd_218e1; // 1d6a:025e
db dummyd_218e2; // 1d6a:025f
db dummyd_218e3; // 1d6a:0260
db dummyd_218e4; // 1d6a:0261
db dummyd_218e5; // 1d6a:0262
db dummyd_218e6; // 1d6a:0263
db dummyd_218e7; // 1d6a:0264
db dummyd_218e8; // 1d6a:0265
dw dummyd_218e9; // 1d6a:0266
db dummyd_218eb[32]; // 1d6a:0268
db dummyd_2190b[32]; // 1d6a:0288
db dummyd_2192b[32]; // 1d6a:02a8
db dummyd_2194b[32]; // 1d6a:02c8
db dummyd_2196b[32]; // 1d6a:02e8
db dummyd_2198b[32]; // 1d6a:0308
db dummyd_219ab[32]; // 1d6a:0328
db dummyd_219cb[32]; // 1d6a:0348
db dummyd_219eb[32]; // 1d6a:0368
db dummyd_21a0b[32]; // 1d6a:0388
db dummyd_21a2b; // 1d6a:03a8
db dummyd_21a2c; // 1d6a:03a9
db dummyd_21a2d; // 1d6a:03aa
db dummyd_21a2e; // 1d6a:03ab
db dummyd_21a2f; // 1d6a:03ac
db dummyd_21a30; // 1d6a:03ad
db dummyd_21a31;
db dummyd_21a32; // 1d6a:03af
db dummyd_21a33; // 1d6a:03b0
db dummyd_21a34; // 1d6a:03b1
db dummyd_21a35; // 1d6a:03b2
db dummyd_21a36; // 1d6a:03b3
db dummyd_21a37;
db dummyd_21a38; // 1d6a:03b5
db dummyd_21a39;
db dummyd_21a3a;
db unk_32018; // 1d6a:03b8
db dummyd_21a3c[32]; // 1d6a:03b9
db dummyd_21a5c[32]; // 1d6a:03d9
db dummyd_21a7c[32]; // 1d6a:03f9
db dummyd_21a9c[32]; // 1d6a:0419
db dummyd_21abc[32]; // 1d6a:0439
db dummyd_21adc[32]; // 1d6a:0459
db dummyd_21afc[32]; // 1d6a:0479
db dummyd_21b1c[32]; // 1d6a:0499
db dummyd_21b3c[32]; // 1d6a:04b9
db dummyd_21b5c[32]; // 1d6a:04d9
db dummyd_21b7c[32]; // 1d6a:04f9
db dummyd_21b9c[32]; // 1d6a:0519
db dummyd_21bbc[32]; // 1d6a:0539
db dummyd_21bdc[32]; // 1d6a:0559
db dummyd_21bfc[32]; // 1d6a:0579
db dummyd_21c1c[32]; // 1d6a:0599
db dummyd_21c3c[32]; // 1d6a:05b9
db dummyd_21c5c[32]; // 1d6a:05d9
db dummyd_21c7c[32]; // 1d6a:05f9
db dummyd_21c9c[32]; // 1d6a:0619
db dummyd_21cbc[32]; // 1d6a:0639
db dummyd_21cdc[32]; // 1d6a:0659
db dummyd_21cfc[32]; // 1d6a:0679
db dummyd_21d1c[32]; // 1d6a:0699
db dummyd_21d3c[32]; // 1d6a:06b9
db dummyd_21d5c[32]; // 1d6a:06d9
db dummyd_21d7c; // 1d6a:06f9
db dummyd_21d7d; // 1d6a:06fa
db dummyd_21d7e; // 1d6a:06fb
db dummyd_21d7f; // 1d6a:06fc
db dummyd_21d80; // 1d6a:06fd
db dummyd_21d81;
db dummyd_21d82;
dw dummyd_21d83; // 1d6a:0700
db dummyd_21d85[32]; // 1d6a:0702
db dummyd_21da5[32]; // 1d6a:0722
db dummyd_21dc5[32]; // 1d6a:0742
db dummyd_21de5[32]; // 1d6a:0762
db dummyd_21e05[32]; // 1d6a:0782
db dummyd_21e25[32]; // 1d6a:07a2
db dummyd_21e45[32]; // 1d6a:07c2
db dummyd_21e65[32]; // 1d6a:07e2
db dummyd_21e85[32]; // 1d6a:0802
db dummyd_21ea5[32]; // 1d6a:0822
db dummyd_21ec5[32]; // 1d6a:0842
db dummyd_21ee5[32]; // 1d6a:0862
db dummyd_21f05[32]; // 1d6a:0882
db dummyd_21f25[32]; // 1d6a:08a2
db dummyd_21f45[32]; // 1d6a:08c2
db dummyd_21f65[32]; // 1d6a:08e2
db dummyd_21f85[32]; // 1d6a:0902
db dummyd_21fa5[32]; // 1d6a:0922
db dummyd_21fc5[32]; // 1d6a:0942
db dummyd_21fe5[32]; // 1d6a:0962
db dummyd_22005[32]; // 1d6a:0982
db dummyd_22025[32]; // 1d6a:09a2
db dummyd_22045[32]; // 1d6a:09c2
db dummyd_22065[32]; // 1d6a:09e2
db dummyd_22085[32]; // 1d6a:0a02
db dummyd_220a5[32]; // 1d6a:0a22
db dummyd_220c5[32]; // 1d6a:0a42
db dummyd_220e5[32]; // 1d6a:0a62
db dummyd_22105[32]; // 1d6a:0a82
db dummyd_22125[32]; // 1d6a:0aa2
db dummyd_22145[32]; // 1d6a:0ac2
db dummyd_22165[32]; // 1d6a:0ae2
db dummyd_22185[32]; // 1d6a:0b02
db dummyd_221a5[32]; // 1d6a:0b22
db dummyd_221c5[32]; // 1d6a:0b42
db dummyd_221e5[32]; // 1d6a:0b62
db dummyd_22205[32]; // 1d6a:0b82
db dummyd_22225[32]; // 1d6a:0ba2
db dummyd_22245[32]; // 1d6a:0bc2
db dummyd_22265[32]; // 1d6a:0be2
db dummyd_22285[32]; // 1d6a:0c02
db dummyd_222a5[32]; // 1d6a:0c22
db dummyd_222c5[32]; // 1d6a:0c42
db dummyd_222e5[32]; // 1d6a:0c62
db dummyd_22305[32]; // 1d6a:0c82
db dummyd_22325[32]; // 1d6a:0ca2
db dummyd_22345[32]; // 1d6a:0cc2
db dummyd_22365[32]; // 1d6a:0ce2
db dummyd_22385[32]; // 1d6a:0d02
db dummyd_223a5[32]; // 1d6a:0d22
db dummyd_223c5[32]; // 1d6a:0d42
db dummyd_223e5[32]; // 1d6a:0d62
db dummyd_22405[32]; // 1d6a:0d82
db dummyd_22425[32]; // 1d6a:0da2
db dummyd_22445[32]; // 1d6a:0dc2
db dummyd_22465[32]; // 1d6a:0de2
db dummyd_22485[32]; // 1d6a:0e02
db dummyd_224a5[32]; // 1d6a:0e22
db dummyd_224c5[32]; // 1d6a:0e42
db dummyd_224e5[32]; // 1d6a:0e62
db dummyd_22505[32]; // 1d6a:0e82
db dummyd_22525[32]; // 1d6a:0ea2
db dummyd_22545[32]; // 1d6a:0ec2
db dummyd_22565[32]; // 1d6a:0ee2
db dummyd_22585[32]; // 1d6a:0f02
db dummyd_225a5[32]; // 1d6a:0f22
db dummyd_225c5[32]; // 1d6a:0f42
db dummyd_225e5[32]; // 1d6a:0f62
db dummyd_22605[32]; // 1d6a:0f82
db dummyd_22625[32]; // 1d6a:0fa2
db dummyd_22645[32]; // 1d6a:0fc2
db dummyd_22665[32]; // 1d6a:0fe2
db dummyd_22685[32]; // 1d6a:1002
db dummyd_226a5[32]; // 1d6a:1022
db dummyd_226c5[32]; // 1d6a:1042
db dummyd_226e5[32]; // 1d6a:1062
db dummyd_22705[32]; // 1d6a:1082
db dummyd_22725[32]; // 1d6a:10a2
db dummyd_22745[32]; // 1d6a:10c2
db dummyd_22765[32]; // 1d6a:10e2
db dummyd_22785[32]; // 1d6a:1102
db dummyd_227a5[32]; // 1d6a:1122
db dummyd_227c5[32]; // 1d6a:1142
db dummyd_227e5[32]; // 1d6a:1162
db dummyd_22805[32]; // 1d6a:1182
db dummyd_22825[32]; // 1d6a:11a2
db dummyd_22845[32]; // 1d6a:11c2
db dummyd_22865[32]; // 1d6a:11e2
db dummyd_22885[32]; // 1d6a:1202
db dummyd_228a5[32]; // 1d6a:1222
db dummyd_228c5[32]; // 1d6a:1242
db dummyd_228e5[32]; // 1d6a:1262
db dummyd_22905[32]; // 1d6a:1282
db dummyd_22925[32]; // 1d6a:12a2
db dummyd_22945[32]; // 1d6a:12c2
db dummyd_22965[32]; // 1d6a:12e2
db dummyd_22985[32]; // 1d6a:1302
db dummyd_229a5[32]; // 1d6a:1322
db dummyd_229c5[32]; // 1d6a:1342
db dummyd_229e5[32]; // 1d6a:1362
db dummyd_22a05[32]; // 1d6a:1382
db dummyd_22a25[32]; // 1d6a:13a2
db dummyd_22a45[32]; // 1d6a:13c2
db dummyd_22a65[32]; // 1d6a:13e2
db dummyd_22a85[32]; // 1d6a:1402
db dummyd_22aa5[32]; // 1d6a:1422
db dummyd_22ac5[32]; // 1d6a:1442
db dummyd_22ae5[32]; // 1d6a:1462
db dummyd_22b05[32]; // 1d6a:1482
db dummyd_22b25[32]; // 1d6a:14a2
db dummyd_22b45[32]; // 1d6a:14c2
db dummyd_22b65[32]; // 1d6a:14e2
db dummyd_22b85[32]; // 1d6a:1502
db dummyd_22ba5[32]; // 1d6a:1522
db dummyd_22bc5[32]; // 1d6a:1542
db dummyd_22be5[32]; // 1d6a:1562
db dummyd_22c05[32]; // 1d6a:1582
db dummyd_22c25[32]; // 1d6a:15a2
db dummyd_22c45[32]; // 1d6a:15c2
db dummyd_22c65[32]; // 1d6a:15e2
db dummyd_22c85[32]; // 1d6a:1602
db dummyd_22ca5[32]; // 1d6a:1622
db dummyd_22cc5[32]; // 1d6a:1642
db dummyd_22ce5[32]; // 1d6a:1662
db dummyd_22d05[32]; // 1d6a:1682
db dummyd_22d25[32]; // 1d6a:16a2
db dummyd_22d45[32]; // 1d6a:16c2
db dummyd_22d65[32]; // 1d6a:16e2
db dummyd_22d85[32]; // 1d6a:1702
db dummyd_22da5[32]; // 1d6a:1722
db dummyd_22dc5[32]; // 1d6a:1742
db dummyd_22de5[32]; // 1d6a:1762
db dummyd_22e05[32]; // 1d6a:1782
db dummyd_22e25[32]; // 1d6a:17a2
db dummyd_22e45[32]; // 1d6a:17c2
db dummyd_22e65[32]; // 1d6a:17e2
db dummyd_22e85[32]; // 1d6a:1802
db dummyd_22ea5[32]; // 1d6a:1822
db dummyd_22ec5[32]; // 1d6a:1842
db dummyd_22ee5[32]; // 1d6a:1862
db dummyd_22f05[32]; // 1d6a:1882
db dummyd_22f25[32]; // 1d6a:18a2
db dummyd_22f45[32]; // 1d6a:18c2
db dummyd_22f65[32]; // 1d6a:18e2
db dummyd_22f85[32]; // 1d6a:1902
db dummyd_22fa5[32]; // 1d6a:1922
db dummyd_22fc5[32]; // 1d6a:1942
db dummyd_22fe5[32]; // 1d6a:1962
db dummyd_23005[32]; // 1d6a:1982
db dummyd_23025[32]; // 1d6a:19a2
db dummyd_23045[32]; // 1d6a:19c2
db dummyd_23065[32]; // 1d6a:19e2
db dummyd_23085[32]; // 1d6a:1a02
db dummyd_230a5[32]; // 1d6a:1a22
db dummyd_230c5[32]; // 1d6a:1a42
db dummyd_230e5[32]; // 1d6a:1a62
db dummyd_23105[32]; // 1d6a:1a82
db dummyd_23125[32]; // 1d6a:1aa2
db dummyd_23145[32]; // 1d6a:1ac2
db dummyd_23165[32]; // 1d6a:1ae2
db dummyd_23185[32]; // 1d6a:1b02
db dummyd_231a5[32]; // 1d6a:1b22
db dummyd_231c5[32]; // 1d6a:1b42
db dummyd_231e5[32]; // 1d6a:1b62
db dummyd_23205[32]; // 1d6a:1b82
db dummyd_23225[32]; // 1d6a:1ba2
db dummyd_23245[32]; // 1d6a:1bc2
db dummyd_23265[32]; // 1d6a:1be2
db dummyd_23285[32]; // 1d6a:1c02
db dummyd_232a5[32]; // 1d6a:1c22
db dummyd_232c5[32]; // 1d6a:1c42
db dummyd_232e5[32]; // 1d6a:1c62
db dummyd_23305[32]; // 1d6a:1c82
db dummyd_23325[32]; // 1d6a:1ca2
db dummyd_23345[32]; // 1d6a:1cc2
db dummyd_23365[32]; // 1d6a:1ce2
db dummyd_23385[32]; // 1d6a:1d02
db dummyd_233a5[32]; // 1d6a:1d22
db dummyd_233c5[32]; // 1d6a:1d42
db dummyd_233e5[32]; // 1d6a:1d62
db dummyd_23405[32]; // 1d6a:1d82
db dummyd_23425[32]; // 1d6a:1da2
db dummyd_23445[32]; // 1d6a:1dc2
db dummyd_23465[32]; // 1d6a:1de2
db dummyd_23485[32]; // 1d6a:1e02
db dummyd_234a5[32]; // 1d6a:1e22
db dummyd_234c5[32]; // 1d6a:1e42
db dummyd_234e5[32]; // 1d6a:1e62
db dummyd_23505[32]; // 1d6a:1e82
db dummyd_23525[32]; // 1d6a:1ea2
db dummyd_23545[32]; // 1d6a:1ec2
db dummyd_23565[32]; // 1d6a:1ee2
db dummyd_23585[32]; // 1d6a:1f02
db dummyd_235a5[32]; // 1d6a:1f22
db dummyd_235c5[32]; // 1d6a:1f42
db dummyd_235e5[32]; // 1d6a:1f62
db dummyd_23605[32]; // 1d6a:1f82
db dummyd_23625[32]; // 1d6a:1fa2
db dummyd_23645[32]; // 1d6a:1fc2
db dummyd_23665[32]; // 1d6a:1fe2
db dummyd_23685[32]; // 1d6a:2002
db dummyd_236a5[32]; // 1d6a:2022
db dummyd_236c5[32]; // 1d6a:2042
db dummyd_236e5[32]; // 1d6a:2062
db dummyd_23705[32]; // 1d6a:2082
db dummyd_23725[32]; // 1d6a:20a2
db dummyd_23745[32]; // 1d6a:20c2
db dummyd_23765[32]; // 1d6a:20e2
db dummyd_23785[32]; // 1d6a:2102
db dummyd_237a5[32]; // 1d6a:2122
db dummyd_237c5[32]; // 1d6a:2142
db dummyd_237e5[32]; // 1d6a:2162
db dummyd_23805[32]; // 1d6a:2182
db dummyd_23825[32]; // 1d6a:21a2
db dummyd_23845[32]; // 1d6a:21c2
db dummyd_23865[32]; // 1d6a:21e2
db dummyd_23885[32]; // 1d6a:2202
db dummyd_238a5[32]; // 1d6a:2222
db dummyd_238c5[32]; // 1d6a:2242
db dummyd_238e5[32]; // 1d6a:2262
db dummyd_23905[32]; // 1d6a:2282
db dummyd_23925[32]; // 1d6a:22a2
db dummyd_23945[32]; // 1d6a:22c2
db dummyd_23965[32]; // 1d6a:22e2
db dummyd_23985[32]; // 1d6a:2302
db dummyd_239a5[32]; // 1d6a:2322
db dummyd_239c5[32]; // 1d6a:2342
db dummyd_239e5[32]; // 1d6a:2362
db dummyd_23a05[32]; // 1d6a:2382
db dummyd_23a25[32]; // 1d6a:23a2
db dummyd_23a45[32]; // 1d6a:23c2
db dummyd_23a65[32]; // 1d6a:23e2
db dummyd_23a85[32]; // 1d6a:2402
db dummyd_23aa5[32]; // 1d6a:2422
db dummyd_23ac5[32]; // 1d6a:2442
db dummyd_23ae5[32]; // 1d6a:2462
db dummyd_23b05[32]; // 1d6a:2482
db dummyd_23b25[32]; // 1d6a:24a2
db dummyd_23b45[32]; // 1d6a:24c2
db dummyd_23b65[32]; // 1d6a:24e2
db dummyd_23b85[32]; // 1d6a:2502
db dummyd_23ba5[32]; // 1d6a:2522
db dummyd_23bc5[32]; // 1d6a:2542
db dummyd_23be5[32]; // 1d6a:2562
db dummyd_23c05[32]; // 1d6a:2582
db dummyd_23c25[32]; // 1d6a:25a2
db dummyd_23c45[32]; // 1d6a:25c2
db dummyd_23c65[32]; // 1d6a:25e2
db dummyd_23c85[32]; // 1d6a:2602
db dummyd_23ca5[32]; // 1d6a:2622
db dummyd_23cc5[32]; // 1d6a:2642
db dummyd_23ce5[32]; // 1d6a:2662
db dummyd_23d05[32]; // 1d6a:2682
db dummyd_23d25[32]; // 1d6a:26a2
db dummyd_23d45[32]; // 1d6a:26c2
db dummyd_23d65[32]; // 1d6a:26e2
db dummyd_23d85[32]; // 1d6a:2702
db dummyd_23da5[32]; // 1d6a:2722
db dummyd_23dc5[32]; // 1d6a:2742
db dummyd_23de5[32]; // 1d6a:2762
db dummyd_23e05[32]; // 1d6a:2782
db dummyd_23e25[32]; // 1d6a:27a2
db dummyd_23e45[32]; // 1d6a:27c2
db dummyd_23e65[32]; // 1d6a:27e2
db dummyd_23e85[32]; // 1d6a:2802
db dummyd_23ea5[32]; // 1d6a:2822
db dummyd_23ec5[32]; // 1d6a:2842
db dummyd_23ee5[32]; // 1d6a:2862
db dummyd_23f05[32]; // 1d6a:2882
db dummyd_23f25[32]; // 1d6a:28a2
db dummyd_23f45[32]; // 1d6a:28c2
db dummyd_23f65[32]; // 1d6a:28e2
db dummyd_23f85[32]; // 1d6a:2902
db dummyd_23fa5[32]; // 1d6a:2922
db dummyd_23fc5[32]; // 1d6a:2942
db dummyd_23fe5[32]; // 1d6a:2962
db dummyd_24005[32]; // 1d6a:2982
db dummyd_24025[32]; // 1d6a:29a2
db dummyd_24045[32]; // 1d6a:29c2
db dummyd_24065[32]; // 1d6a:29e2
db dummyd_24085[32]; // 1d6a:2a02
db dummyd_240a5[32]; // 1d6a:2a22
db dummyd_240c5[32]; // 1d6a:2a42
db dummyd_240e5[32]; // 1d6a:2a62
db dummyd_24105[32]; // 1d6a:2a82
db dummyd_24125[32]; // 1d6a:2aa2
db dummyd_24145[32]; // 1d6a:2ac2
db dummyd_24165[32]; // 1d6a:2ae2
db dummyd_24185[32]; // 1d6a:2b02
db dummyd_241a5[32]; // 1d6a:2b22
db dummyd_241c5[32]; // 1d6a:2b42
db dummyd_241e5[32]; // 1d6a:2b62
db dummyd_24205[32]; // 1d6a:2b82
db dummyd_24225[32]; // 1d6a:2ba2
db dummyd_24245[32]; // 1d6a:2bc2
db dummyd_24265[32]; // 1d6a:2be2
db dummyd_24285[32]; // 1d6a:2c02
db dummyd_242a5[32]; // 1d6a:2c22
db dummyd_242c5[32]; // 1d6a:2c42
db dummyd_242e5[32]; // 1d6a:2c62
db dummyd_24305[32]; // 1d6a:2c82
db dummyd_24325[32]; // 1d6a:2ca2
db dummyd_24345[32]; // 1d6a:2cc2
db dummyd_24365[32]; // 1d6a:2ce2
db dummyd_24385[32]; // 1d6a:2d02
db dummyd_243a5[32]; // 1d6a:2d22
db dummyd_243c5[32]; // 1d6a:2d42
db dummyd_243e5[32]; // 1d6a:2d62
db dummyd_24405[32]; // 1d6a:2d82
db dummyd_24425[32]; // 1d6a:2da2
db dummyd_24445[32]; // 1d6a:2dc2
db dummyd_24465[32]; // 1d6a:2de2
db dummyd_24485[32]; // 1d6a:2e02
db dummyd_244a5[32]; // 1d6a:2e22
db dummyd_244c5[32]; // 1d6a:2e42
db dummyd_244e5[32]; // 1d6a:2e62
db dummyd_24505[32]; // 1d6a:2e82
db dummyd_24525[32]; // 1d6a:2ea2
db dummyd_24545[32]; // 1d6a:2ec2
db dummyd_24565[32]; // 1d6a:2ee2
db dummyd_24585[32]; // 1d6a:2f02
db dummyd_245a5[32]; // 1d6a:2f22
db dummyd_245c5[32]; // 1d6a:2f42
db dummyd_245e5[32]; // 1d6a:2f62
db dummyd_24605[32]; // 1d6a:2f82
db dummyd_24625[32]; // 1d6a:2fa2
db dummyd_24645[32]; // 1d6a:2fc2
db dummyd_24665[32]; // 1d6a:2fe2
db dummyd_24685[32]; // 1d6a:3002
db dummyd_246a5[32]; // 1d6a:3022
db dummyd_246c5[32]; // 1d6a:3042
db dummyd_246e5[32]; // 1d6a:3062
db dummyd_24705[32]; // 1d6a:3082
db dummyd_24725[32]; // 1d6a:30a2
db dummyd_24745[32]; // 1d6a:30c2
db dummyd_24765[32]; // 1d6a:30e2
db dummyd_24785[32]; // 1d6a:3102
db dummyd_247a5[32]; // 1d6a:3122
db dummyd_247c5[32]; // 1d6a:3142
db dummyd_247e5[32]; // 1d6a:3162
db dummyd_24805[32]; // 1d6a:3182
db dummyd_24825[32]; // 1d6a:31a2
db dummyd_24845[32]; // 1d6a:31c2
db dummyd_24865[32]; // 1d6a:31e2
db dummyd_24885[32]; // 1d6a:3202
db dummyd_248a5[32]; // 1d6a:3222
db dummyd_248c5[32]; // 1d6a:3242
db dummyd_248e5[32]; // 1d6a:3262
db dummyd_24905[32]; // 1d6a:3282
db dummyd_24925[32]; // 1d6a:32a2
db dummyd_24945[32]; // 1d6a:32c2
db dummyd_24965[32]; // 1d6a:32e2
db dummyd_24985[32]; // 1d6a:3302
db dummyd_249a5[32]; // 1d6a:3322
db dummyd_249c5[32]; // 1d6a:3342
db dummyd_249e5[32]; // 1d6a:3362
db dummyd_24a05[32]; // 1d6a:3382
db dummyd_24a25[32]; // 1d6a:33a2
db dummyd_24a45[32]; // 1d6a:33c2
db dummyd_24a65[32]; // 1d6a:33e2
db dummyd_24a85[32]; // 1d6a:3402
db dummyd_24aa5[32]; // 1d6a:3422
db dummyd_24ac5[32]; // 1d6a:3442
db dummyd_24ae5[32]; // 1d6a:3462
db dummyd_24b05[32]; // 1d6a:3482
db dummyd_24b25[32]; // 1d6a:34a2
db dummyd_24b45[32]; // 1d6a:34c2
db dummyd_24b65[32]; // 1d6a:34e2
db dummyd_24b85[32]; // 1d6a:3502
db dummyd_24ba5[32]; // 1d6a:3522
db dummyd_24bc5[32]; // 1d6a:3542
db dummyd_24be5[32]; // 1d6a:3562
db dummyd_24c05[32]; // 1d6a:3582
db dummyd_24c25[32]; // 1d6a:35a2
db dummyd_24c45[32]; // 1d6a:35c2
db dummyd_24c65[32]; // 1d6a:35e2
db dummyd_24c85[32]; // 1d6a:3602
db dummyd_24ca5[32]; // 1d6a:3622
db dummyd_24cc5[32]; // 1d6a:3642
db dummyd_24ce5[32]; // 1d6a:3662
db dummyd_24d05[32]; // 1d6a:3682
db dummyd_24d25[32]; // 1d6a:36a2
db dummyd_24d45[32]; // 1d6a:36c2
db dummyd_24d65[32]; // 1d6a:36e2
db dummyd_24d85[32]; // 1d6a:3702
db dummyd_24da5[32]; // 1d6a:3722
db dummyd_24dc5[32]; // 1d6a:3742
db dummyd_24de5[32]; // 1d6a:3762
db dummyd_24e05[32]; // 1d6a:3782
db dummyd_24e25[32]; // 1d6a:37a2
db dummyd_24e45[32]; // 1d6a:37c2
db dummyd_24e65[32]; // 1d6a:37e2
db dummyd_24e85[32]; // 1d6a:3802
db dummyd_24ea5[32]; // 1d6a:3822
db dummyd_24ec5[32]; // 1d6a:3842
db dummyd_24ee5[32]; // 1d6a:3862
db dummyd_24f05[32]; // 1d6a:3882
db dummyd_24f25[32]; // 1d6a:38a2
db dummyd_24f45[32]; // 1d6a:38c2
db dummyd_24f65[32]; // 1d6a:38e2
db dummyd_24f85[32]; // 1d6a:3902
db dummyd_24fa5[32]; // 1d6a:3922
db dummyd_24fc5[32]; // 1d6a:3942
db dummyd_24fe5[32]; // 1d6a:3962
db dummyd_25005[32]; // 1d6a:3982
db dummyd_25025[32]; // 1d6a:39a2
db dummyd_25045[32]; // 1d6a:39c2
db dummyd_25065[32]; // 1d6a:39e2
db dummyd_25085[32]; // 1d6a:3a02
db dummyd_250a5[32]; // 1d6a:3a22
db dummyd_250c5[32]; // 1d6a:3a42
db dummyd_250e5[32]; // 1d6a:3a62
db dummyd_25105[32]; // 1d6a:3a82
db dummyd_25125[32]; // 1d6a:3aa2
db dummyd_25145[32]; // 1d6a:3ac2
db dummyd_25165[32]; // 1d6a:3ae2
db dummyd_25185[32]; // 1d6a:3b02
db dummyd_251a5[32]; // 1d6a:3b22
db dummyd_251c5[32]; // 1d6a:3b42
db dummyd_251e5[32]; // 1d6a:3b62
db dummyd_25205[32]; // 1d6a:3b82
db dummyd_25225[32]; // 1d6a:3ba2
db dummyd_25245[32]; // 1d6a:3bc2
db dummyd_25265[32]; // 1d6a:3be2
db dummyd_25285[32]; // 1d6a:3c02
db dummyd_252a5[32]; // 1d6a:3c22
db dummyd_252c5[32]; // 1d6a:3c42
db dummyd_252e5[32]; // 1d6a:3c62
db dummyd_25305[32]; // 1d6a:3c82
db dummyd_25325[32]; // 1d6a:3ca2
db dummyd_25345[32]; // 1d6a:3cc2
db dummyd_25365[32]; // 1d6a:3ce2
db dummyd_25385[32]; // 1d6a:3d02
db dummyd_253a5[32]; // 1d6a:3d22
db dummyd_253c5[32]; // 1d6a:3d42
db dummyd_253e5[32]; // 1d6a:3d62
db dummyd_25405[32]; // 1d6a:3d82
db dummyd_25425[32]; // 1d6a:3da2
db dummyd_25445[32]; // 1d6a:3dc2
db dummyd_25465[32]; // 1d6a:3de2
db dummyd_25485[32]; // 1d6a:3e02
db dummyd_254a5[32]; // 1d6a:3e22
db dummyd_254c5[32]; // 1d6a:3e42
db dummyd_254e5[32]; // 1d6a:3e62
db dummyd_25505[32]; // 1d6a:3e82
db dummyd_25525[32]; // 1d6a:3ea2
db dummyd_25545[32]; // 1d6a:3ec2
db dummyd_25565[32]; // 1d6a:3ee2
db dummyd_25585[32]; // 1d6a:3f02
db dummyd_255a5[32]; // 1d6a:3f22
db dummyd_255c5[32]; // 1d6a:3f42
db dummyd_255e5[32]; // 1d6a:3f62
db dummyd_25605[32]; // 1d6a:3f82
db dummyd_25625[32]; // 1d6a:3fa2
db dummyd_25645[32]; // 1d6a:3fc2
db dummyd_25665[32]; // 1d6a:3fe2
db dummyd_25685[32]; // 1d6a:4002
db dummyd_256a5[32]; // 1d6a:4022
db dummyd_256c5[32]; // 1d6a:4042
db dummyd_256e5[32]; // 1d6a:4062
db dummyd_25705[32]; // 1d6a:4082
db dummyd_25725[32]; // 1d6a:40a2
db dummyd_25745[32]; // 1d6a:40c2
db dummyd_25765[32]; // 1d6a:40e2
db dummyd_25785[32]; // 1d6a:4102
db dummyd_257a5[32]; // 1d6a:4122
db dummyd_257c5[32]; // 1d6a:4142
db dummyd_257e5[32]; // 1d6a:4162
db dummyd_25805[32]; // 1d6a:4182
db dummyd_25825[32]; // 1d6a:41a2
db dummyd_25845[32]; // 1d6a:41c2
db dummyd_25865[32]; // 1d6a:41e2
db dummyd_25885[32]; // 1d6a:4202
db dummyd_258a5[32]; // 1d6a:4222
db dummyd_258c5[32]; // 1d6a:4242
db dummyd_258e5[32]; // 1d6a:4262
db dummyd_25905[32]; // 1d6a:4282
db dummyd_25925[32]; // 1d6a:42a2
db dummyd_25945[32]; // 1d6a:42c2
db dummyd_25965[32]; // 1d6a:42e2
db dummyd_25985[32]; // 1d6a:4302
db dummyd_259a5[32]; // 1d6a:4322
db dummyd_259c5[32]; // 1d6a:4342
db dummyd_259e5[32]; // 1d6a:4362
db dummyd_25a05[32]; // 1d6a:4382
db dummyd_25a25[32]; // 1d6a:43a2
db dummyd_25a45[32]; // 1d6a:43c2
db dummyd_25a65[32]; // 1d6a:43e2
db dummyd_25a85[32]; // 1d6a:4402
db dummyd_25aa5[32]; // 1d6a:4422
db dummyd_25ac5[32]; // 1d6a:4442
db dummyd_25ae5[32]; // 1d6a:4462
db dummyd_25b05[32]; // 1d6a:4482
db dummyd_25b25[32]; // 1d6a:44a2
db dummyd_25b45[32]; // 1d6a:44c2
db dummyd_25b65[32]; // 1d6a:44e2
db dummyd_25b85[32]; // 1d6a:4502
db dummyd_25ba5[32]; // 1d6a:4522
db dummyd_25bc5[32]; // 1d6a:4542
db dummyd_25be5[32]; // 1d6a:4562
db dummyd_25c05[32]; // 1d6a:4582
db dummyd_25c25[32]; // 1d6a:45a2
db dummyd_25c45[32]; // 1d6a:45c2
db dummyd_25c65[32]; // 1d6a:45e2
db dummyd_25c85[32]; // 1d6a:4602
db dummyd_25ca5[32]; // 1d6a:4622
db dummyd_25cc5[32]; // 1d6a:4642
db dummyd_25ce5[32]; // 1d6a:4662
db dummyd_25d05[32]; // 1d6a:4682
db dummyd_25d25[32]; // 1d6a:46a2
db dummyd_25d45[32]; // 1d6a:46c2
db dummyd_25d65[32]; // 1d6a:46e2
db dummyd_25d85[32]; // 1d6a:4702
db dummyd_25da5[32]; // 1d6a:4722
db dummyd_25dc5[32]; // 1d6a:4742
db dummyd_25de5[32]; // 1d6a:4762
db dummyd_25e05[32]; // 1d6a:4782
db dummyd_25e25[32]; // 1d6a:47a2
db dummyd_25e45[32]; // 1d6a:47c2
db dummyd_25e65[32]; // 1d6a:47e2
db dummyd_25e85[32]; // 1d6a:4802
db dummyd_25ea5[32]; // 1d6a:4822
db dummyd_25ec5[32]; // 1d6a:4842
db dummyd_25ee5[32]; // 1d6a:4862
db dummyd_25f05[32]; // 1d6a:4882
db dummyd_25f25[32]; // 1d6a:48a2
db dummyd_25f45[32]; // 1d6a:48c2
db dummyd_25f65[32]; // 1d6a:48e2
db dummyd_25f85[32]; // 1d6a:4902
db dummyd_25fa5[32]; // 1d6a:4922
db dummyd_25fc5[32]; // 1d6a:4942
db dummyd_25fe5[32]; // 1d6a:4962
db dummyd_26005[32]; // 1d6a:4982
db dummyd_26025[32]; // 1d6a:49a2
db dummyd_26045[32]; // 1d6a:49c2
db dummyd_26065[32]; // 1d6a:49e2
db dummyd_26085[32]; // 1d6a:4a02
db dummyd_260a5[32]; // 1d6a:4a22
db dummyd_260c5[32]; // 1d6a:4a42
db dummyd_260e5[32]; // 1d6a:4a62
db dummyd_26105[32]; // 1d6a:4a82
db dummyd_26125[32]; // 1d6a:4aa2
db dummyd_26145[32]; // 1d6a:4ac2
db dummyd_26165[32]; // 1d6a:4ae2
db dummyd_26185[32]; // 1d6a:4b02
db dummyd_261a5[32]; // 1d6a:4b22
db dummyd_261c5[32]; // 1d6a:4b42
db dummyd_261e5[32]; // 1d6a:4b62
db dummyd_26205[32]; // 1d6a:4b82
db dummyd_26225[32]; // 1d6a:4ba2
db dummyd_26245[32]; // 1d6a:4bc2
db dummyd_26265[32]; // 1d6a:4be2
db dummyd_26285[32]; // 1d6a:4c02
db dummyd_262a5[32]; // 1d6a:4c22
db dummyd_262c5[32]; // 1d6a:4c42
db dummyd_262e5[32]; // 1d6a:4c62
db dummyd_26305[32]; // 1d6a:4c82
db dummyd_26325[32]; // 1d6a:4ca2
db dummyd_26345[32]; // 1d6a:4cc2
db dummyd_26365[32]; // 1d6a:4ce2
db dummyd_26385[32]; // 1d6a:4d02
db dummyd_263a5[32]; // 1d6a:4d22
db dummyd_263c5[32]; // 1d6a:4d42
db dummyd_263e5[32]; // 1d6a:4d62
db dummyd_26405[32]; // 1d6a:4d82
db dummyd_26425[32]; // 1d6a:4da2
db dummyd_26445[32]; // 1d6a:4dc2
db dummyd_26465[32]; // 1d6a:4de2
db dummyd_26485[32]; // 1d6a:4e02
db dummyd_264a5[32]; // 1d6a:4e22
db dummyd_264c5[32]; // 1d6a:4e42
db dummyd_264e5[32]; // 1d6a:4e62
db dummyd_26505[32]; // 1d6a:4e82
db dummyd_26525[32]; // 1d6a:4ea2
db dummyd_26545[32]; // 1d6a:4ec2
db dummyd_26565[32]; // 1d6a:4ee2
db dummyd_26585[32]; // 1d6a:4f02
db dummyd_265a5[32]; // 1d6a:4f22
db dummyd_265c5[32]; // 1d6a:4f42
db dummyd_265e5[32]; // 1d6a:4f62
db dummyd_26605[32]; // 1d6a:4f82
db dummyd_26625[32]; // 1d6a:4fa2
db dummyd_26645[32]; // 1d6a:4fc2
db dummyd_26665[32]; // 1d6a:4fe2
db dummyd_26685[32]; // 1d6a:5002
db dummyd_266a5[32]; // 1d6a:5022
db dummyd_266c5[32]; // 1d6a:5042
db dummyd_266e5[32]; // 1d6a:5062
db dummyd_26705[32]; // 1d6a:5082
db dummyd_26725[32]; // 1d6a:50a2
db dummyd_26745[32]; // 1d6a:50c2
db dummyd_26765[32]; // 1d6a:50e2
db dummyd_26785[32]; // 1d6a:5102
db dummyd_267a5[32]; // 1d6a:5122
db dummyd_267c5[32]; // 1d6a:5142
db dummyd_267e5[32]; // 1d6a:5162
db dummyd_26805[32]; // 1d6a:5182
db dummyd_26825[32]; // 1d6a:51a2
db dummyd_26845[32]; // 1d6a:51c2
db dummyd_26865[32]; // 1d6a:51e2
db dummyd_26885[32]; // 1d6a:5202
db dummyd_268a5[32]; // 1d6a:5222
db dummyd_268c5[32]; // 1d6a:5242
db dummyd_268e5[32]; // 1d6a:5262
db dummyd_26905;
db dummyd_26906;
db dummyd_26907;
db dummyd_26908;
db dummyd_26909;
db dummyd_2690a;
db dummyd_2690b;
db dummyd_2690c;
db dummyd_2690d;
db dummyd_2690e;
db dummyd_2690f;
db dummyd_26910;
db dummyd_26911;
db dummyd_26912;
db dummyd_26913[32]; // 20b8:0000
db dummyd_26933[32]; // 20b8:0020
db dummyd_26953[32]; // 20b8:0040
db dummyd_26973[32]; // 20b8:0060
db dummyd_26993[32]; // 20b8:0080
db dummyd_269b3[32]; // 20b8:00a0
db dummyd_269d3[32]; // 20b8:00c0
db dummyd_269f3[32]; // 20b8:00e0
db dummyd_26a13[32]; // 20b8:0100
db dummyd_26a33[32]; // 20b8:0120
db dummyd_26a53[32]; // 20b8:0140
db dummyd_26a73[32]; // 20b8:0160
db dummyd_26a93[32]; // 20b8:0180
db dummyd_26ab3[32]; // 20b8:01a0
db dummyd_26ad3[32]; // 20b8:01c0
db dummyd_26af3[32]; // 20b8:01e0
db dummyd_26b13[32]; // 20b8:0200
db dummyd_26b33[32]; // 20b8:0220
db dummyd_26b53[32]; // 20b8:0240
db dummyd_26b73[32]; // 20b8:0260
db dummyd_26b93[32]; // 20b8:0280
db dummyd_26bb3[32]; // 20b8:02a0
db dummyd_26bd3[32]; // 20b8:02c0
db dummyd_26bf3[32]; // 20b8:02e0
db dummyd_26c13[32]; // 20b8:0300
db dummyd_26c33[32]; // 20b8:0320
db dummyd_26c53[32]; // 20b8:0340
db dummyd_26c73[32]; // 20b8:0360
db dummyd_26c93[32]; // 20b8:0380
db dummyd_26cb3[32]; // 20b8:03a0
db dummyd_26cd3[32]; // 20b8:03c0
db dummyd_26cf3[32]; // 20b8:03e0
db dummyd_26d13[32]; // 20b8:0400
db dummyd_26d33[32]; // 20b8:0420
db dummyd_26d53[32]; // 20b8:0440
db dummyd_26d73[32]; // 20b8:0460
db dummyd_26d93[32]; // 20b8:0480
db dummyd_26db3[32]; // 20b8:04a0
db dummyd_26dd3[32]; // 20b8:04c0
db dummyd_26df3[32]; // 20b8:04e0
db dummyd_26e13[32]; // 20b8:0500
db dummyd_26e33[32]; // 20b8:0520
db dummyd_26e53[32]; // 20b8:0540
db dummyd_26e73[32]; // 20b8:0560
db dummyd_26e93[32]; // 20b8:0580
db dummyd_26eb3[32]; // 20b8:05a0
db dummyd_26ed3[32]; // 20b8:05c0
db dummyd_26ef3[32]; // 20b8:05e0
db dummyd_26f13[32]; // 20b8:0600
db dummyd_26f33[32]; // 20b8:0620
db dummyd_26f53[32]; // 20b8:0640
db dummyd_26f73[32]; // 20b8:0660
db dummyd_26f93[32]; // 20b8:0680
db dummyd_26fb3[32]; // 20b8:06a0
db dummyd_26fd3[32]; // 20b8:06c0
db dummyd_26ff3[32]; // 20b8:06e0
db dummyd_27013[32]; // 20b8:0700
db dummyd_27033[32]; // 20b8:0720
db dummyd_27053[32]; // 20b8:0740
db dummyd_27073[32]; // 20b8:0760
db dummyd_27093[32]; // 20b8:0780
db dummyd_270b3[32]; // 20b8:07a0
db dummyd_270d3[32]; // 20b8:07c0
db dummyd_270f3[32]; // 20b8:07e0
db dummyd_27113[32]; // 20b8:0800
db dummyd_27133[32]; // 20b8:0820
db dummyd_27153[32]; // 20b8:0840
db dummyd_27173[32]; // 20b8:0860
db dummyd_27193[32]; // 20b8:0880
db dummyd_271b3[32]; // 20b8:08a0
db dummyd_271d3[32]; // 20b8:08c0
db dummyd_271f3[32]; // 20b8:08e0
db dummyd_27213[32]; // 20b8:0900
db dummyd_27233[32]; // 20b8:0920
db dummyd_27253[32]; // 20b8:0940
db dummyd_27273[32]; // 20b8:0960
db dummyd_27293[32]; // 20b8:0980
db dummyd_272b3[32]; // 20b8:09a0
db dummyd_272d3[32]; // 20b8:09c0
db dummyd_272f3[32]; // 20b8:09e0
db dummyd_27313[32]; // 20b8:0a00
db dummyd_27333[32]; // 20b8:0a20
db dummyd_27353[32]; // 20b8:0a40
db dummyd_27373[32]; // 20b8:0a60
db dummyd_27393[32]; // 20b8:0a80
db dummyd_273b3[32]; // 20b8:0aa0
db dummyd_273d3[32]; // 20b8:0ac0
db dummyd_273f3[32]; // 20b8:0ae0
db dummyd_27413[32]; // 20b8:0b00
db dummyd_27433[32]; // 20b8:0b20
db dummyd_27453[32]; // 20b8:0b40
db dummyd_27473[32]; // 20b8:0b60
db dummyd_27493[32]; // 20b8:0b80
db dummyd_274b3[32]; // 20b8:0ba0
db dummyd_274d3[32]; // 20b8:0bc0
db dummyd_274f3[32]; // 20b8:0be0
db dummyd_27513[32]; // 20b8:0c00
db dummyd_27533[32]; // 20b8:0c20
db dummyd_27553[32]; // 20b8:0c40
db dummyd_27573[32]; // 20b8:0c60
db dummyd_27593[32]; // 20b8:0c80
db dummyd_275b3[32]; // 20b8:0ca0
db dummyd_275d3[32]; // 20b8:0cc0
db dummyd_275f3[32]; // 20b8:0ce0
db dummyd_27613[32]; // 20b8:0d00
db dummyd_27633[32]; // 20b8:0d20
db dummyd_27653[32]; // 20b8:0d40
db dummyd_27673[32]; // 20b8:0d60
db dummyd_27693[32]; // 20b8:0d80
db dummyd_276b3[32]; // 20b8:0da0
db dummyd_276d3[32]; // 20b8:0dc0
db dummyd_276f3[32]; // 20b8:0de0
db dummyd_27713[32]; // 20b8:0e00
db dummyd_27733[32]; // 20b8:0e20
db dummyd_27753[32]; // 20b8:0e40
db dummyd_27773[32]; // 20b8:0e60
db dummyd_27793[32]; // 20b8:0e80
db dummyd_277b3[32]; // 20b8:0ea0
db dummyd_277d3[32]; // 20b8:0ec0
db dummyd_277f3[32]; // 20b8:0ee0
db dummyd_27813[32]; // 20b8:0f00
db dummyd_27833[32]; // 20b8:0f20
db dummyd_27853[32]; // 20b8:0f40
db dummyd_27873[32]; // 20b8:0f60
db dummyd_27893[32]; // 20b8:0f80
db dummyd_278b3[32]; // 20b8:0fa0
db dummyd_278d3[32]; // 20b8:0fc0
db dummyd_278f3[32]; // 20b8:0fe0
db dummyd_27913[32]; // 20b8:1000
db dummyd_27933[32]; // 20b8:1020
db dummyd_27953[32]; // 20b8:1040
db dummyd_27973[32]; // 20b8:1060
db dummyd_27993[32]; // 20b8:1080
db dummyd_279b3[32]; // 20b8:10a0
db dummyd_279d3[32]; // 20b8:10c0
db dummyd_279f3[32]; // 20b8:10e0
db dummyd_27a13[32]; // 20b8:1100
db dummyd_27a33[32]; // 20b8:1120
db dummyd_27a53[32]; // 20b8:1140
db dummyd_27a73[32]; // 20b8:1160
db dummyd_27a93[32]; // 20b8:1180
db dummyd_27ab3[32]; // 20b8:11a0
db dummyd_27ad3[32]; // 20b8:11c0
db dummyd_27af3[32]; // 20b8:11e0
db dummyd_27b13[32]; // 20b8:1200
db dummyd_27b33[32]; // 20b8:1220
db dummyd_27b53[32]; // 20b8:1240
db dummyd_27b73[32]; // 20b8:1260
db dummyd_27b93[32]; // 20b8:1280
db dummyd_27bb3[32]; // 20b8:12a0
db dummyd_27bd3[32]; // 20b8:12c0
db dummyd_27bf3[32]; // 20b8:12e0
db dummyd_27c13[32]; // 20b8:1300
db dummyd_27c33[32]; // 20b8:1320
db dummyd_27c53[32]; // 20b8:1340
db dummyd_27c73[32]; // 20b8:1360
db dummyd_27c93[32]; // 20b8:1380
db dummyd_27cb3[32]; // 20b8:13a0
db dummyd_27cd3[32]; // 20b8:13c0
db dummyd_27cf3[32]; // 20b8:13e0
db dummyd_27d13; // 20b8:1400
db dummyd_27d14;
db dummyd_27d15;
db dummyd_27d16; // 20b8:1403
db dummyd_27d17; // 20b8:1404
db dummyd_27d18;
db dummyd_27d19;
db dummyd_27d1a; // 20b8:1407
db dummyd_27d1b; // 20b8:1408
db dummyd_27d1c;
db dummyd_27d1d;
db dummyd_27d1e; // 20b8:140b
db dummyd_27d1f; // 20b8:140c
db dummyd_27d20;
db dummyd_27d21;
db dummyd_27d22; // 20b8:140f
db dummyd_27d23;
db dummyd_27d24;
db dummyd_27d25;
db dummyd_27d26;
db dummyd_27d27; // 20b8:1414
db dummyd_27d28; // 20b8:1415
db dummyd_27d29; // 20b8:1416
db dummyd_27d2a; // 20b8:1417
db unk_38308; // 20b8:1418
db dummyd_27d2c[32]; // 20b8:1419
db dummyd_27d4c[32]; // 20b8:1439
db dummyd_27d6c[32]; // 20b8:1459
db dummyd_27d8c[32]; // 20b8:1479
db dummyd_27dac[32]; // 20b8:1499
db dummyd_27dcc[32]; // 20b8:14b9
db dummyd_27dec[32]; // 20b8:14d9
db dummyd_27e0c[32]; // 20b8:14f9
db dummyd_27e2c[32]; // 20b8:1519
db dummyd_27e4c[32]; // 20b8:1539
db dummyd_27e6c[32]; // 20b8:1559
db dummyd_27e8c[32]; // 20b8:1579
db dummyd_27eac[32]; // 20b8:1599
db dummyd_27ecc[32]; // 20b8:15b9
db dummyd_27eec[32]; // 20b8:15d9
db dummyd_27f0c[32]; // 20b8:15f9
db dummyd_27f2c[32]; // 20b8:1619
db dummyd_27f4c[32]; // 20b8:1639
db dummyd_27f6c[32]; // 20b8:1659
db dummyd_27f8c[32]; // 20b8:1679
db dummyd_27fac[32]; // 20b8:1699
db dummyd_27fcc[32]; // 20b8:16b9
db dummyd_27fec[32]; // 20b8:16d9
db dummyd_2800c[32]; // 20b8:16f9
db dummyd_2802c[32]; // 20b8:1719
db dummyd_2804c[32]; // 20b8:1739
db dummyd_2806c[32]; // 20b8:1759
db dummyd_2808c[32]; // 20b8:1779
db dummyd_280ac[32]; // 20b8:1799
db dummyd_280cc[32]; // 20b8:17b9
db dummyd_280ec[32]; // 20b8:17d9
db dummyd_2810c[32]; // 20b8:17f9
db dummyd_2812c[32]; // 20b8:1819
db dummyd_2814c[32]; // 20b8:1839
db dummyd_2816c[32]; // 20b8:1859
db dummyd_2818c[32]; // 20b8:1879
db dummyd_281ac[32]; // 20b8:1899
db dummyd_281cc[32]; // 20b8:18b9
db dummyd_281ec[32]; // 20b8:18d9
db dummyd_2820c[32]; // 20b8:18f9
db dummyd_2822c[32]; // 20b8:1919
db dummyd_2824c[32]; // 20b8:1939
db dummyd_2826c[32]; // 20b8:1959
db dummyd_2828c[32]; // 20b8:1979
db dummyd_282ac[32]; // 20b8:1999
db dummyd_282cc[32]; // 20b8:19b9
db dummyd_282ec[32]; // 20b8:19d9
db dummyd_2830c[32]; // 20b8:19f9
db dummyd_2832c[32]; // 20b8:1a19
db dummyd_2834c[32]; // 20b8:1a39
db dummyd_2836c[32]; // 20b8:1a59
db dummyd_2838c[32]; // 20b8:1a79
db dummyd_283ac[32]; // 20b8:1a99
db dummyd_283cc[32]; // 20b8:1ab9
db dummyd_283ec[32]; // 20b8:1ad9
db dummyd_2840c[32]; // 20b8:1af9
db dummyd_2842c[32]; // 20b8:1b19
db dummyd_2844c[32]; // 20b8:1b39
db dummyd_2846c[32]; // 20b8:1b59
db dummyd_2848c[32]; // 20b8:1b79
db dummyd_284ac;
db dummyd_284ad;
db dummyd_284ae; // 20b8:1b9b
db dummyd_284af; // 20b8:1b9c
db dummyd_284b0;
db dummyd_284b1;
db dummyd_284b2; // 20b8:1b9f
db dummyd_284b3; // 20b8:1ba0
db dummyd_284b4;
db dummyd_284b5;
db dummyd_284b6; // 20b8:1ba3
db dummyd_284b7; // 20b8:1ba4
db dummyd_284b8;
db dummyd_284b9;
db dummyd_284ba; // 20b8:1ba7
db dummyd_284bb; // 20b8:1ba8
db dummyd_284bc;
db dummyd_284bd; // 20b8:1baa
db dummyd_284be; // 20b8:1bab
db dummyd_284bf; // 20b8:1bac
db dummyd_284c0; // 20b8:1bad
db dummyd_284c1; // 20b8:1bae
db dummyd_284c2; // 20b8:1baf
db dummyd_284c3; // 20b8:1bb0
db dummyd_284c4; // 20b8:1bb1
db dummyd_284c5; // 20b8:1bb2
db dummyd_284c6; // 20b8:1bb3
db dummyd_284c7; // 20b8:1bb4
db dummyd_284c8; // 20b8:1bb5
db unk_38aa6; // 20b8:1bb6
db dummyd_284ca[32]; // 20b8:1bb7
db dummyd_284ea[32]; // 20b8:1bd7
db dummyd_2850a[32]; // 20b8:1bf7
db dummyd_2852a[32]; // 20b8:1c17
db dummyd_2854a[32]; // 20b8:1c37
db dummyd_2856a[32]; // 20b8:1c57
db dummyd_2858a[32]; // 20b8:1c77
db dummyd_285aa[32]; // 20b8:1c97
db dummyd_285ca[32]; // 20b8:1cb7
db dummyd_285ea[32]; // 20b8:1cd7
db dummyd_2860a[32]; // 20b8:1cf7
db dummyd_2862a[32]; // 20b8:1d17
db dummyd_2864a; // 20b8:1d37
db dummyd_2864b; // 20b8:1d38
db dummyd_2864c; // 20b8:1d39
db dummyd_2864d;
db dummyd_2864e; // 20b8:1d3b
db dummyd_2864f; // 20b8:1d3c
db dummyd_28650;
db dummyd_28651;
db dummyd_28652; // 20b8:1d3f
db dummyd_28653;
db dummyd_28654;
db dummyd_28655;
db dummyd_28656; // 20b8:1d43
db dummyd_28657;
db dummyd_28658;
db dummyd_28659;
db dummyd_2865a; // 20b8:1d47
db dummyd_2865b;
db dummyd_2865c;
db dummyd_2865d;
db dummyd_2865e; // 20b8:1d4b
db dummyd_2865f; // 20b8:1d4c
db dummyd_28660;
db unk_38c3e; // 20b8:1d4e
db dummyd_28662[32]; // 20b8:1d4f
db dummyd_28682[32]; // 20b8:1d6f
db dummyd_286a2[32]; // 20b8:1d8f
db dummyd_286c2[32]; // 20b8:1daf
db dummyd_286e2[32]; // 20b8:1dcf
db dummyd_28702[32]; // 20b8:1def
db dummyd_28722[32]; // 20b8:1e0f
db dummyd_28742[32]; // 20b8:1e2f
db dummyd_28762[32]; // 20b8:1e4f
db dummyd_28782[32]; // 20b8:1e6f
db dummyd_287a2[32]; // 20b8:1e8f
db dummyd_287c2[32]; // 20b8:1eaf
db dummyd_287e2[32]; // 20b8:1ecf
db dummyd_28802[32]; // 20b8:1eef
db dummyd_28822[32]; // 20b8:1f0f
db dummyd_28842[32]; // 20b8:1f2f
db dummyd_28862[32]; // 20b8:1f4f
db dummyd_28882[32]; // 20b8:1f6f
db dummyd_288a2[32]; // 20b8:1f8f
db dummyd_288c2[32]; // 20b8:1faf
db dummyd_288e2[32]; // 20b8:1fcf
db dummyd_28902[32]; // 20b8:1fef
db dummyd_28922[32]; // 20b8:200f
db dummyd_28942[32]; // 20b8:202f
db dummyd_28962[32]; // 20b8:204f
db dummyd_28982[32]; // 20b8:206f
db dummyd_289a2[32]; // 20b8:208f
db dummyd_289c2[32]; // 20b8:20af
db dummyd_289e2[32]; // 20b8:20cf
db dummyd_28a02[32]; // 20b8:20ef
db dummyd_28a22[32]; // 20b8:210f
db dummyd_28a42[32]; // 20b8:212f
db dummyd_28a62[32]; // 20b8:214f
db dummyd_28a82[32]; // 20b8:216f
db dummyd_28aa2[32]; // 20b8:218f
db dummyd_28ac2[32]; // 20b8:21af
db dummyd_28ae2[32]; // 20b8:21cf
db dummyd_28b02[32]; // 20b8:21ef
db dummyd_28b22[32]; // 20b8:220f
db dummyd_28b42[32]; // 20b8:222f
db dummyd_28b62[32]; // 20b8:224f
db dummyd_28b82[32]; // 20b8:226f
db dummyd_28ba2[32]; // 20b8:228f
db dummyd_28bc2[32]; // 20b8:22af
db dummyd_28be2[32]; // 20b8:22cf
db dummyd_28c02[32]; // 20b8:22ef
db dummyd_28c22[32]; // 20b8:230f
db dummyd_28c42[32]; // 20b8:232f
db dummyd_28c62[32]; // 20b8:234f
db dummyd_28c82[32]; // 20b8:236f
db dummyd_28ca2[32]; // 20b8:238f
db dummyd_28cc2[32]; // 20b8:23af
db dummyd_28ce2[32]; // 20b8:23cf
db dummyd_28d02[32]; // 20b8:23ef
db dummyd_28d22[32]; // 20b8:240f
db dummyd_28d42[32]; // 20b8:242f
db dummyd_28d62[32]; // 20b8:244f
db dummyd_28d82[32]; // 20b8:246f
db dummyd_28da2[32]; // 20b8:248f
db dummyd_28dc2[32]; // 20b8:24af
db dummyd_28de2[32]; // 20b8:24cf
db dummyd_28e02[32]; // 20b8:24ef
db dummyd_28e22[32]; // 20b8:250f
db dummyd_28e42[32]; // 20b8:252f
db dummyd_28e62[32]; // 20b8:254f
db dummyd_28e82[32]; // 20b8:256f
db dummyd_28ea2[32]; // 20b8:258f
db dummyd_28ec2[32]; // 20b8:25af
db dummyd_28ee2[32]; // 20b8:25cf
db dummyd_28f02[32]; // 20b8:25ef
db dummyd_28f22[32]; // 20b8:260f
db dummyd_28f42[32]; // 20b8:262f
db dummyd_28f62[32]; // 20b8:264f
db dummyd_28f82[32]; // 20b8:266f
db dummyd_28fa2[32]; // 20b8:268f
db dummyd_28fc2[32]; // 20b8:26af
db dummyd_28fe2[32]; // 20b8:26cf
db dummyd_29002[32]; // 20b8:26ef
db dummyd_29022[32]; // 20b8:270f
db dummyd_29042[32]; // 20b8:272f
db dummyd_29062[32]; // 20b8:274f
db dummyd_29082[32]; // 20b8:276f
db dummyd_290a2[32]; // 20b8:278f
db dummyd_290c2[32]; // 20b8:27af
db dummyd_290e2[32]; // 20b8:27cf
db dummyd_29102[32]; // 20b8:27ef
db dummyd_29122[32]; // 20b8:280f
db dummyd_29142[32]; // 20b8:282f
db dummyd_29162[32]; // 20b8:284f
db dummyd_29182[32]; // 20b8:286f
db dummyd_291a2[32]; // 20b8:288f
db dummyd_291c2[32]; // 20b8:28af
db dummyd_291e2[32]; // 20b8:28cf
db dummyd_29202[32]; // 20b8:28ef
db dummyd_29222[32]; // 20b8:290f
db dummyd_29242[32]; // 20b8:292f
db dummyd_29262[32]; // 20b8:294f
db dummyd_29282[32]; // 20b8:296f
db dummyd_292a2[32]; // 20b8:298f
db dummyd_292c2[32]; // 20b8:29af
db dummyd_292e2[32]; // 20b8:29cf
db dummyd_29302[32]; // 20b8:29ef
db dummyd_29322[32]; // 20b8:2a0f
db dummyd_29342[32]; // 20b8:2a2f
db dummyd_29362[32]; // 20b8:2a4f
db dummyd_29382[32]; // 20b8:2a6f
db dummyd_293a2[32]; // 20b8:2a8f
db dummyd_293c2[32]; // 20b8:2aaf
db dummyd_293e2[32]; // 20b8:2acf
db dummyd_29402[32]; // 20b8:2aef
db dummyd_29422[32]; // 20b8:2b0f
db dummyd_29442[32]; // 20b8:2b2f
db dummyd_29462[32]; // 20b8:2b4f
db dummyd_29482[32]; // 20b8:2b6f
db dummyd_294a2[32]; // 20b8:2b8f
db dummyd_294c2[32]; // 20b8:2baf
db dummyd_294e2[32]; // 20b8:2bcf
db dummyd_29502[32]; // 20b8:2bef
db dummyd_29522[32]; // 20b8:2c0f
db dummyd_29542[32]; // 20b8:2c2f
db dummyd_29562[32]; // 20b8:2c4f
db dummyd_29582[32]; // 20b8:2c6f
db dummyd_295a2[32]; // 20b8:2c8f
db dummyd_295c2[32]; // 20b8:2caf
db dummyd_295e2[32]; // 20b8:2ccf
db dummyd_29602[32]; // 20b8:2cef
db dummyd_29622[32]; // 20b8:2d0f
db dummyd_29642[32]; // 20b8:2d2f
db dummyd_29662[32]; // 20b8:2d4f
db dummyd_29682[32]; // 20b8:2d6f
db dummyd_296a2[32]; // 20b8:2d8f
db dummyd_296c2[32]; // 20b8:2daf
db dummyd_296e2[32]; // 20b8:2dcf
db dummyd_29702[32]; // 20b8:2def
db dummyd_29722[32]; // 20b8:2e0f
db dummyd_29742[32]; // 20b8:2e2f
db dummyd_29762;
db dummyd_29763[32]; // 22b5:0000
db dummyd_29783[32]; // 22b5:0020
db dummyd_297a3[32]; // 22b5:0040
db dummyd_297c3[32]; // 22b5:0060
db dummyd_297e3[32]; // 22b5:0080
db dummyd_29803[32]; // 22b5:00a0
db dummyd_29823[32]; // 22b5:00c0
db dummyd_29843[32]; // 22b5:00e0
db dummyd_29863[32]; // 22b5:0100
db dummyd_29883[32]; // 22b5:0120
db dummyd_298a3[32]; // 22b5:0140
db dummyd_298c3[32]; // 22b5:0160
db dummyd_298e3[32]; // 22b5:0180
db dummyd_29903[32]; // 22b5:01a0
db dummyd_29923[32]; // 22b5:01c0
db dummyd_29943[32]; // 22b5:01e0
db dummyd_29963[32]; // 22b5:0200
db dummyd_29983[32]; // 22b5:0220
db dummyd_299a3[32]; // 22b5:0240
db dummyd_299c3[32]; // 22b5:0260
db dummyd_299e3[32]; // 22b5:0280
db dummyd_29a03[32]; // 22b5:02a0
db dummyd_29a23[32]; // 22b5:02c0
db dummyd_29a43[32]; // 22b5:02e0
db dummyd_29a63[32]; // 22b5:0300
db dummyd_29a83[32]; // 22b5:0320
db dummyd_29aa3[32]; // 22b5:0340
db dummyd_29ac3[32]; // 22b5:0360
db dummyd_29ae3[32]; // 22b5:0380
db dummyd_29b03[32]; // 22b5:03a0
db dummyd_29b23[32]; // 22b5:03c0
db dummyd_29b43[32]; // 22b5:03e0
db dummyd_29b63[32]; // 22b5:0400
db dummyd_29b83[32]; // 22b5:0420
db dummyd_29ba3[32]; // 22b5:0440
db dummyd_29bc3[32]; // 22b5:0460
db dummyd_29be3[32]; // 22b5:0480
db dummyd_29c03[32]; // 22b5:04a0
db dummyd_29c23[32]; // 22b5:04c0
db dummyd_29c43[32]; // 22b5:04e0
db dummyd_29c63[32]; // 22b5:0500
db dummyd_29c83[32]; // 22b5:0520
db dummyd_29ca3[32]; // 22b5:0540
db dummyd_29cc3[32]; // 22b5:0560
db dummyd_29ce3[32]; // 22b5:0580
db dummyd_29d03[32]; // 22b5:05a0
db dummyd_29d23[32]; // 22b5:05c0
db dummyd_29d43[32]; // 22b5:05e0
db dummyd_29d63[32]; // 22b5:0600
db dummyd_29d83[32]; // 22b5:0620
db dummyd_29da3[32]; // 22b5:0640
db dummyd_29dc3[32]; // 22b5:0660
db dummyd_29de3[32]; // 22b5:0680
db dummyd_29e03[32]; // 22b5:06a0
db dummyd_29e23[32]; // 22b5:06c0
db dummyd_29e43[32]; // 22b5:06e0
db dummyd_29e63[32]; // 22b5:0700
db dummyd_29e83[32]; // 22b5:0720
db dummyd_29ea3[32]; // 22b5:0740
db dummyd_29ec3[32]; // 22b5:0760
db dummyd_29ee3[32]; // 22b5:0780
db dummyd_29f03[32]; // 22b5:07a0
db dummyd_29f23[32]; // 22b5:07c0
db dummyd_29f43[32]; // 22b5:07e0
db dummyd_29f63[32]; // 22b5:0800
db dummyd_29f83[32]; // 22b5:0820
db dummyd_29fa3[32]; // 22b5:0840
db dummyd_29fc3[32]; // 22b5:0860
db dummyd_29fe3[32]; // 22b5:0880
db dummyd_2a003[32]; // 22b5:08a0
db dummyd_2a023[32]; // 22b5:08c0
db dummyd_2a043[32]; // 22b5:08e0
db dummyd_2a063[32]; // 22b5:0900
db dummyd_2a083[32]; // 22b5:0920
db dummyd_2a0a3[32]; // 22b5:0940
db dummyd_2a0c3[32]; // 22b5:0960
db dummyd_2a0e3[32]; // 22b5:0980
db dummyd_2a103[32]; // 22b5:09a0
db dummyd_2a123[32]; // 22b5:09c0
db dummyd_2a143[32]; // 22b5:09e0
db dummyd_2a163[32]; // 22b5:0a00
db dummyd_2a183[32]; // 22b5:0a20
db dummyd_2a1a3[32]; // 22b5:0a40
db dummyd_2a1c3[32]; // 22b5:0a60
db dummyd_2a1e3[32]; // 22b5:0a80
db dummyd_2a203[32]; // 22b5:0aa0
db dummyd_2a223[32]; // 22b5:0ac0
db dummyd_2a243[32]; // 22b5:0ae0
db dummyd_2a263[32]; // 22b5:0b00
db dummyd_2a283[32]; // 22b5:0b20
db dummyd_2a2a3[32]; // 22b5:0b40
db dummyd_2a2c3[32]; // 22b5:0b60
db dummyd_2a2e3[32]; // 22b5:0b80
db dummyd_2a303[32]; // 22b5:0ba0
db dummyd_2a323[32]; // 22b5:0bc0
db dummyd_2a343[32]; // 22b5:0be0
db dummyd_2a363[32]; // 22b5:0c00
db dummyd_2a383[32]; // 22b5:0c20
db dummyd_2a3a3[32]; // 22b5:0c40
db dummyd_2a3c3[32]; // 22b5:0c60
db dummyd_2a3e3[32]; // 22b5:0c80
db dummyd_2a403[32]; // 22b5:0ca0
db dummyd_2a423[32]; // 22b5:0cc0
db dummyd_2a443[32]; // 22b5:0ce0
db dummyd_2a463[32]; // 22b5:0d00
db dummyd_2a483[32]; // 22b5:0d20
db dummyd_2a4a3[32]; // 22b5:0d40
db dummyd_2a4c3[32]; // 22b5:0d60
db dummyd_2a4e3[32]; // 22b5:0d80
db dummyd_2a503[32]; // 22b5:0da0
db dummyd_2a523[32]; // 22b5:0dc0
db dummyd_2a543[32]; // 22b5:0de0
db dummyd_2a563[32]; // 22b5:0e00
db dummyd_2a583[32]; // 22b5:0e20
db dummyd_2a5a3[32]; // 22b5:0e40
db dummyd_2a5c3[32]; // 22b5:0e60
db dummyd_2a5e3[32]; // 22b5:0e80
db dummyd_2a603[32]; // 22b5:0ea0
db dummyd_2a623[32]; // 22b5:0ec0
db dummyd_2a643[32]; // 22b5:0ee0
db dummyd_2a663[32]; // 22b5:0f00
db dummyd_2a683[32]; // 22b5:0f20
db dummyd_2a6a3[32]; // 22b5:0f40
db dummyd_2a6c3[32]; // 22b5:0f60
db dummyd_2a6e3[32]; // 22b5:0f80
db dummyd_2a703[32]; // 22b5:0fa0
db dummyd_2a723[32]; // 22b5:0fc0
db dummyd_2a743[32]; // 22b5:0fe0
db dummyd_2a763[32]; // 22b5:1000
db dummyd_2a783[32]; // 22b5:1020
db dummyd_2a7a3[32]; // 22b5:1040
db dummyd_2a7c3[32]; // 22b5:1060
db dummyd_2a7e3[32]; // 22b5:1080
db dummyd_2a803[32]; // 22b5:10a0
db dummyd_2a823[32]; // 22b5:10c0
db dummyd_2a843[32]; // 22b5:10e0
db dummyd_2a863[32]; // 22b5:1100
db dummyd_2a883[32]; // 22b5:1120
db dummyd_2a8a3[32]; // 22b5:1140
db dummyd_2a8c3[32]; // 22b5:1160
db dummyd_2a8e3[32]; // 22b5:1180
db dummyd_2a903[32]; // 22b5:11a0
db dummyd_2a923[32]; // 22b5:11c0
db dummyd_2a943[32]; // 22b5:11e0
db dummyd_2a963[32]; // 22b5:1200
db dummyd_2a983[32]; // 22b5:1220
db dummyd_2a9a3[32]; // 22b5:1240
db dummyd_2a9c3[32]; // 22b5:1260
db dummyd_2a9e3[32]; // 22b5:1280
db dummyd_2aa03[32]; // 22b5:12a0
db dummyd_2aa23[32]; // 22b5:12c0
db dummyd_2aa43[32]; // 22b5:12e0
db dummyd_2aa63[32]; // 22b5:1300
db dummyd_2aa83[32]; // 22b5:1320
db dummyd_2aaa3[32]; // 22b5:1340
db dummyd_2aac3[32]; // 22b5:1360
db dummyd_2aae3[32]; // 22b5:1380
db dummyd_2ab03[32]; // 22b5:13a0
db dummyd_2ab23[32]; // 22b5:13c0
db dummyd_2ab43[32]; // 22b5:13e0
db dummyd_2ab63[32]; // 22b5:1400
db dummyd_2ab83[32]; // 22b5:1420
db dummyd_2aba3[32]; // 22b5:1440
db dummyd_2abc3[32]; // 22b5:1460
db dummyd_2abe3[32]; // 22b5:1480
db dummyd_2ac03[32]; // 22b5:14a0
db dummyd_2ac23[32]; // 22b5:14c0
db dummyd_2ac43[32]; // 22b5:14e0
db dummyd_2ac63[32]; // 22b5:1500
db dummyd_2ac83[32]; // 22b5:1520
db dummyd_2aca3[32]; // 22b5:1540
db dummyd_2acc3[32]; // 22b5:1560
db dummyd_2ace3[32]; // 22b5:1580
db dummyd_2ad03[32]; // 22b5:15a0
db dummyd_2ad23[32]; // 22b5:15c0
db dummyd_2ad43[32]; // 22b5:15e0
db dummyd_2ad63[32]; // 22b5:1600
db dummyd_2ad83[32]; // 22b5:1620
db dummyd_2ada3[32]; // 22b5:1640
db dummyd_2adc3[32]; // 22b5:1660
db dummyd_2ade3[32]; // 22b5:1680
db dummyd_2ae03[32]; // 22b5:16a0
db dummyd_2ae23[32]; // 22b5:16c0
db dummyd_2ae43[32]; // 22b5:16e0
db dummyd_2ae63[32]; // 22b5:1700
db dummyd_2ae83[32]; // 22b5:1720
db dummyd_2aea3[32]; // 22b5:1740
db dummyd_2aec3[32]; // 22b5:1760
db dummyd_2aee3[32]; // 22b5:1780
db dummyd_2af03[32]; // 22b5:17a0
db dummyd_2af23[32]; // 22b5:17c0
db dummyd_2af43[32]; // 22b5:17e0
db dummyd_2af63[32]; // 22b5:1800
db dummyd_2af83[32]; // 22b5:1820
db dummyd_2afa3[32]; // 22b5:1840
db dummyd_2afc3[32]; // 22b5:1860
db dummyd_2afe3[32]; // 22b5:1880
db dummyd_2b003[32]; // 22b5:18a0
db dummyd_2b023[32]; // 22b5:18c0
db dummyd_2b043[32]; // 22b5:18e0
db dummyd_2b063[32]; // 22b5:1900
db dummyd_2b083[32]; // 22b5:1920
db dummyd_2b0a3[32]; // 22b5:1940
db dummyd_2b0c3[32]; // 22b5:1960
db dummyd_2b0e3[32]; // 22b5:1980
db dummyd_2b103[32]; // 22b5:19a0
db dummyd_2b123[32]; // 22b5:19c0
db dummyd_2b143[32]; // 22b5:19e0
db dummyd_2b163[32]; // 22b5:1a00
db dummyd_2b183[32]; // 22b5:1a20
db dummyd_2b1a3[32]; // 22b5:1a40
db dummyd_2b1c3[32]; // 22b5:1a60
db dummyd_2b1e3[32]; // 22b5:1a80
db dummyd_2b203[32]; // 22b5:1aa0
db dummyd_2b223[32]; // 22b5:1ac0
db dummyd_2b243[32]; // 22b5:1ae0
db dummyd_2b263[32]; // 22b5:1b00
db dummyd_2b283[32]; // 22b5:1b20
db dummyd_2b2a3[32]; // 22b5:1b40
db dummyd_2b2c3[32]; // 22b5:1b60
db dummyd_2b2e3[32]; // 22b5:1b80
db dummyd_2b303[32]; // 22b5:1ba0
db dummyd_2b323[32]; // 22b5:1bc0
db dummyd_2b343[32]; // 22b5:1be0
db dummyd_2b363[32]; // 22b5:1c00
db dummyd_2b383[32]; // 22b5:1c20
db dummyd_2b3a3[32]; // 22b5:1c40
db dummyd_2b3c3[32]; // 22b5:1c60
db dummyd_2b3e3[32]; // 22b5:1c80
db dummyd_2b403[32]; // 22b5:1ca0
db dummyd_2b423[32]; // 22b5:1cc0
db dummyd_2b443[32]; // 22b5:1ce0
db dummyd_2b463[32]; // 22b5:1d00
db dummyd_2b483[32]; // 22b5:1d20
db dummyd_2b4a3[32]; // 22b5:1d40
db dummyd_2b4c3[32]; // 22b5:1d60
db dummyd_2b4e3[32]; // 22b5:1d80
db dummyd_2b503[32]; // 22b5:1da0
db dummyd_2b523[32]; // 22b5:1dc0
db dummyd_2b543[32]; // 22b5:1de0
db dummyd_2b563[32]; // 22b5:1e00
db dummyd_2b583[32]; // 22b5:1e20
db dummyd_2b5a3[32]; // 22b5:1e40
db dummyd_2b5c3[32]; // 22b5:1e60
db dummyd_2b5e3[32]; // 22b5:1e80
db dummyd_2b603[32]; // 22b5:1ea0
db dummyd_2b623[32]; // 22b5:1ec0
db dummyd_2b643[32]; // 22b5:1ee0
db dummyd_2b663[32]; // 22b5:1f00
db dummyd_2b683[32]; // 22b5:1f20
db dummyd_2b6a3[32]; // 22b5:1f40
db dummyd_2b6c3[32]; // 22b5:1f60
db dummyd_2b6e3[32]; // 22b5:1f80
db dummyd_2b703[32]; // 22b5:1fa0
db dummyd_2b723[32]; // 22b5:1fc0
db dummyd_2b743[32]; // 22b5:1fe0
db dummyd_2b763[32]; // 22b5:2000
db dummyd_2b783[32]; // 22b5:2020
db dummyd_2b7a3[32]; // 22b5:2040
db dummyd_2b7c3[32]; // 22b5:2060
db dummyd_2b7e3[32]; // 22b5:2080
db dummyd_2b803[32]; // 22b5:20a0
db dummyd_2b823[32]; // 22b5:20c0
db dummyd_2b843[32]; // 22b5:20e0
db dummyd_2b863[32]; // 22b5:2100
db dummyd_2b883[32]; // 22b5:2120
db dummyd_2b8a3[32]; // 22b5:2140
db dummyd_2b8c3[32]; // 22b5:2160
db dummyd_2b8e3[32]; // 22b5:2180
db dummyd_2b903[32]; // 22b5:21a0
db dummyd_2b923[32]; // 22b5:21c0
db dummyd_2b943[32]; // 22b5:21e0
db dummyd_2b963[32]; // 22b5:2200
db dummyd_2b983[32]; // 22b5:2220
db dummyd_2b9a3[32]; // 22b5:2240
db dummyd_2b9c3[32]; // 22b5:2260
db dummyd_2b9e3[32]; // 22b5:2280
db dummyd_2ba03[32]; // 22b5:22a0
db dummyd_2ba23[32]; // 22b5:22c0
db dummyd_2ba43[32]; // 22b5:22e0
db dummyd_2ba63[32]; // 22b5:2300
db dummyd_2ba83[32]; // 22b5:2320
db dummyd_2baa3[32]; // 22b5:2340
db dummyd_2bac3[32]; // 22b5:2360
db dummyd_2bae3[32]; // 22b5:2380
db dummyd_2bb03[32]; // 22b5:23a0
db dummyd_2bb23[32]; // 22b5:23c0
db dummyd_2bb43[32]; // 22b5:23e0
db dummyd_2bb63[32]; // 22b5:2400
db dummyd_2bb83[32]; // 22b5:2420
db dummyd_2bba3[32]; // 22b5:2440
db dummyd_2bbc3[32]; // 22b5:2460
db dummyd_2bbe3[32]; // 22b5:2480
db dummyd_2bc03[32]; // 22b5:24a0
db dummyd_2bc23[32]; // 22b5:24c0
db dummyd_2bc43[32]; // 22b5:24e0
db dummyd_2bc63[32]; // 22b5:2500
db dummyd_2bc83[32]; // 22b5:2520
db dummyd_2bca3[32]; // 22b5:2540
db dummyd_2bcc3[32]; // 22b5:2560
db dummyd_2bce3[32]; // 22b5:2580
db dummyd_2bd03[32]; // 22b5:25a0
db dummyd_2bd23[32]; // 22b5:25c0
db dummyd_2bd43[32]; // 22b5:25e0
db dummyd_2bd63; // 22b5:2600
db dummyd_2bd64; // 22b5:2601
db dummyd_2bd65; // 22b5:2602
db dummyd_2bd66; // 22b5:2603
db dummyd_2bd67; // 22b5:2604
db dummyd_2bd68;
db dummyd_2bd69; // 22b5:2606
db dummyd_2bd6a; // 22b5:2607
db dummyd_2bd6b; // 22b5:2608
db dummyd_2bd6c;
db dummyd_2bd6d;
db dummyd_2bd6e; // 22b5:260b
db dummyd_2bd6f; // 22b5:260c
db dummyd_2bd70;
db dummyd_2bd71;
db dummyd_2bd72; // 22b5:260f
db dummyd_2bd73[32]; // 2368:0000
db dummyd_2bd93[32]; // 2368:0020
db dummyd_2bdb3[32]; // 2368:0040
db dummyd_2bdd3[32]; // 2368:0060
db dummyd_2bdf3[32]; // 2368:0080
db dummyd_2be13[32]; // 2368:00a0
db dummyd_2be33[32]; // 2368:00c0
db dummyd_2be53[32]; // 2368:00e0
db dummyd_2be73[32]; // 2368:0100
db dummyd_2be93[32]; // 2368:0120
db dummyd_2beb3[32]; // 2368:0140
db dummyd_2bed3[32]; // 2368:0160
db dummyd_2bef3[32]; // 2368:0180
db dummyd_2bf13[32]; // 2368:01a0
db dummyd_2bf33[32]; // 2368:01c0
db dummyd_2bf53[32]; // 2368:01e0
db dummyd_2bf73[32]; // 2368:0200
db dummyd_2bf93[32]; // 2368:0220
db dummyd_2bfb3[32]; // 2368:0240
db dummyd_2bfd3[32]; // 2368:0260
db dummyd_2bff3[32]; // 2368:0280
db dummyd_2c013[32]; // 2368:02a0
db dummyd_2c033[32]; // 2368:02c0
db dummyd_2c053[32]; // 2368:02e0
db dummyd_2c073[32]; // 2368:0300
db dummyd_2c093[32]; // 2368:0320
db dummyd_2c0b3[32]; // 2368:0340
db dummyd_2c0d3[32]; // 2368:0360
db dummyd_2c0f3[32]; // 2368:0380
db dummyd_2c113[32]; // 2368:03a0
db dummyd_2c133[32]; // 2368:03c0
db dummyd_2c153[32]; // 2368:03e0
db dummyd_2c173[32]; // 2368:0400
db dummyd_2c193[32]; // 2368:0420
db dummyd_2c1b3[32]; // 2368:0440
db dummyd_2c1d3[32]; // 2368:0460
db dummyd_2c1f3[32]; // 2368:0480
db dummyd_2c213[32]; // 2368:04a0
db dummyd_2c233[32]; // 2368:04c0
db dummyd_2c253[32]; // 2368:04e0
db dummyd_2c273[32]; // 2368:0500
db dummyd_2c293[32]; // 2368:0520
db dummyd_2c2b3[32]; // 2368:0540
db dummyd_2c2d3[32]; // 2368:0560
db dummyd_2c2f3[32]; // 2368:0580
db dummyd_2c313[32]; // 2368:05a0
db dummyd_2c333[32]; // 2368:05c0
db dummyd_2c353[32]; // 2368:05e0
db dummyd_2c373[32]; // 2368:0600
db dummyd_2c393[32]; // 2368:0620
db dummyd_2c3b3[32]; // 2368:0640
db dummyd_2c3d3[32]; // 2368:0660
db dummyd_2c3f3[32]; // 2368:0680
db dummyd_2c413[32]; // 2368:06a0
db dummyd_2c433[32]; // 2368:06c0
db dummyd_2c453[32]; // 2368:06e0
db dummyd_2c473[32]; // 2368:0700
db dummyd_2c493[32]; // 2368:0720
db dummyd_2c4b3[32]; // 2368:0740
db dummyd_2c4d3[32]; // 2368:0760
db dummyd_2c4f3[32]; // 2368:0780
db dummyd_2c513[32]; // 2368:07a0
db dummyd_2c533[32]; // 2368:07c0
db dummyd_2c553[32]; // 2368:07e0
db dummyd_2c573[32]; // 2368:0800
db dummyd_2c593[32]; // 2368:0820
db dummyd_2c5b3[32]; // 2368:0840
db dummyd_2c5d3[32]; // 2368:0860
db dummyd_2c5f3[32]; // 2368:0880
db dummyd_2c613[32]; // 2368:08a0
db dummyd_2c633[32]; // 2368:08c0
db dummyd_2c653[32]; // 2368:08e0
db dummyd_2c673[32]; // 2368:0900
db dummyd_2c693[32]; // 2368:0920
db dummyd_2c6b3[32]; // 2368:0940
db dummyd_2c6d3[32]; // 2368:0960
db dummyd_2c6f3[32]; // 2368:0980
db dummyd_2c713[32]; // 2368:09a0
db dummyd_2c733[32]; // 2368:09c0
db dummyd_2c753[32]; // 2368:09e0
db dummyd_2c773[32]; // 2368:0a00
db dummyd_2c793[32]; // 2368:0a20
db dummyd_2c7b3[32]; // 2368:0a40
db dummyd_2c7d3[32]; // 2368:0a60
db dummyd_2c7f3[32]; // 2368:0a80
db dummyd_2c813[32]; // 2368:0aa0
db dummyd_2c833[32]; // 2368:0ac0
db dummyd_2c853[32]; // 2368:0ae0
db dummyd_2c873[32]; // 2368:0b00
db dummyd_2c893[32]; // 2368:0b20
db dummyd_2c8b3[32]; // 2368:0b40
db dummyd_2c8d3[32]; // 2368:0b60
db dummyd_2c8f3[32]; // 2368:0b80
db dummyd_2c913[32]; // 2368:0ba0
db dummyd_2c933[32]; // 2368:0bc0
db dummyd_2c953[32]; // 2368:0be0
db dummyd_2c973[32]; // 2368:0c00
db dummyd_2c993[32]; // 2368:0c20
db dummyd_2c9b3[32]; // 2368:0c40
db dummyd_2c9d3[32]; // 2368:0c60
db dummyd_2c9f3[32]; // 2368:0c80
db dummyd_2ca13[32]; // 2368:0ca0
db dummyd_2ca33[32]; // 2368:0cc0
db dummyd_2ca53[32]; // 2368:0ce0
db dummyd_2ca73[32]; // 2368:0d00
db dummyd_2ca93[32]; // 2368:0d20
db dummyd_2cab3[32]; // 2368:0d40
db dummyd_2cad3[32]; // 2368:0d60
db dummyd_2caf3[32]; // 2368:0d80
db dummyd_2cb13[32]; // 2368:0da0
db dummyd_2cb33[32]; // 2368:0dc0
db dummyd_2cb53[32]; // 2368:0de0
db dummyd_2cb73[32]; // 2368:0e00
db dummyd_2cb93[32]; // 2368:0e20
db dummyd_2cbb3[32]; // 2368:0e40
db dummyd_2cbd3[32]; // 2368:0e60
db dummyd_2cbf3[32]; // 2368:0e80
db dummyd_2cc13[32]; // 2368:0ea0
db dummyd_2cc33[32]; // 2368:0ec0
db dummyd_2cc53[32]; // 2368:0ee0
db dummyd_2cc73[32]; // 2368:0f00
db dummyd_2cc93[32]; // 2368:0f20
db dummyd_2ccb3[32]; // 2368:0f40
db dummyd_2ccd3[32]; // 2368:0f60
db dummyd_2ccf3[32]; // 2368:0f80
db dummyd_2cd13[32]; // 2368:0fa0
db dummyd_2cd33[32]; // 2368:0fc0
db dummyd_2cd53[32]; // 2368:0fe0
db dummyd_2cd73[32]; // 2368:1000
db dummyd_2cd93[32]; // 2368:1020
db dummyd_2cdb3[32]; // 2368:1040
db dummyd_2cdd3[32]; // 2368:1060
db dummyd_2cdf3[32]; // 2368:1080
db dummyd_2ce13[32]; // 2368:10a0
db dummyd_2ce33[32]; // 2368:10c0
db dummyd_2ce53[32]; // 2368:10e0
db dummyd_2ce73[32]; // 2368:1100
db dummyd_2ce93[32]; // 2368:1120
db dummyd_2ceb3[32]; // 2368:1140
db dummyd_2ced3[32]; // 2368:1160
db dummyd_2cef3[32]; // 2368:1180
db dummyd_2cf13[32]; // 2368:11a0
db dummyd_2cf33[32]; // 2368:11c0
db dummyd_2cf53[32]; // 2368:11e0
db dummyd_2cf73[32]; // 2368:1200
db dummyd_2cf93[32]; // 2368:1220
db dummyd_2cfb3[32]; // 2368:1240
db dummyd_2cfd3[32]; // 2368:1260
db dummyd_2cff3[32]; // 2368:1280
db dummyd_2d013[32]; // 2368:12a0
db dummyd_2d033[32]; // 2368:12c0
db dummyd_2d053[32]; // 2368:12e0
db dummyd_2d073[32]; // 2368:1300
db dummyd_2d093[32]; // 2368:1320
db dummyd_2d0b3[32]; // 2368:1340
db dummyd_2d0d3[32]; // 2368:1360
db dummyd_2d0f3[32]; // 2368:1380
db dummyd_2d113[32]; // 2368:13a0
db dummyd_2d133[32]; // 2368:13c0
db dummyd_2d153[32]; // 2368:13e0
db dummyd_2d173[32]; // 2368:1400
db dummyd_2d193[32]; // 2368:1420
db dummyd_2d1b3[32]; // 2368:1440
db dummyd_2d1d3[32]; // 2368:1460
db dummyd_2d1f3[32]; // 2368:1480
db dummyd_2d213[32]; // 2368:14a0
db dummyd_2d233[32]; // 2368:14c0
db dummyd_2d253[32]; // 2368:14e0
db dummyd_2d273[32]; // 2368:1500
db dummyd_2d293[32]; // 2368:1520
db dummyd_2d2b3[32]; // 2368:1540
db dummyd_2d2d3[32]; // 2368:1560
db dummyd_2d2f3[32]; // 2368:1580
db dummyd_2d313[32]; // 2368:15a0
db dummyd_2d333[32]; // 2368:15c0
db dummyd_2d353[32]; // 2368:15e0
db dummyd_2d373[32]; // 2368:1600
db dummyd_2d393[32]; // 2368:1620
db dummyd_2d3b3[32]; // 2368:1640
db dummyd_2d3d3[32]; // 2368:1660
db dummyd_2d3f3[32]; // 2368:1680
db dummyd_2d413[32]; // 2368:16a0
db dummyd_2d433[32]; // 2368:16c0
db dummyd_2d453[32]; // 2368:16e0
db dummyd_2d473[32]; // 2368:1700
db dummyd_2d493[32]; // 2368:1720
db dummyd_2d4b3[32]; // 2368:1740
db dummyd_2d4d3[32]; // 2368:1760
db dummyd_2d4f3[32]; // 2368:1780
db dummyd_2d513[32]; // 2368:17a0
db dummyd_2d533[32]; // 2368:17c0
db dummyd_2d553[32]; // 2368:17e0
db dummyd_2d573[32]; // 2368:1800
db dummyd_2d593[32]; // 2368:1820
db dummyd_2d5b3[32]; // 2368:1840
db dummyd_2d5d3[32]; // 2368:1860
db dummyd_2d5f3[32]; // 2368:1880
db dummyd_2d613[32]; // 2368:18a0
db dummyd_2d633[32]; // 2368:18c0
db dummyd_2d653[32]; // 2368:18e0
db dummyd_2d673[32]; // 2368:1900
db dummyd_2d693[32]; // 2368:1920
db dummyd_2d6b3[32]; // 2368:1940
db dummyd_2d6d3[32]; // 2368:1960
db dummyd_2d6f3[32]; // 2368:1980
db dummyd_2d713[32]; // 2368:19a0
db dummyd_2d733[32]; // 2368:19c0
db dummyd_2d753[32]; // 2368:19e0
db dummyd_2d773[32]; // 2368:1a00
db dummyd_2d793[32]; // 2368:1a20
db dummyd_2d7b3[32]; // 2368:1a40
db dummyd_2d7d3[32]; // 2368:1a60
db dummyd_2d7f3[32]; // 2368:1a80
db dummyd_2d813[32]; // 2368:1aa0
db dummyd_2d833[32]; // 2368:1ac0
db dummyd_2d853[32]; // 2368:1ae0
db dummyd_2d873[32]; // 2368:1b00
db dummyd_2d893[32]; // 2368:1b20
db dummyd_2d8b3[32]; // 2368:1b40
db dummyd_2d8d3[32]; // 2368:1b60
db dummyd_2d8f3[32]; // 2368:1b80
db dummyd_2d913[32]; // 2368:1ba0
db dummyd_2d933[32]; // 2368:1bc0
db dummyd_2d953[32]; // 2368:1be0
db dummyd_2d973[32]; // 2368:1c00
db dummyd_2d993[32]; // 2368:1c20
db dummyd_2d9b3[32]; // 2368:1c40
db dummyd_2d9d3[32]; // 2368:1c60
db dummyd_2d9f3[32]; // 2368:1c80
db dummyd_2da13[32]; // 2368:1ca0
db dummyd_2da33[32]; // 2368:1cc0
db dummyd_2da53[32]; // 2368:1ce0
db dummyd_2da73[32]; // 2368:1d00
db dummyd_2da93[32]; // 2368:1d20
db dummyd_2dab3[32]; // 2368:1d40
db dummyd_2dad3[32]; // 2368:1d60
db dummyd_2daf3[32]; // 2368:1d80
db dummyd_2db13[32]; // 2368:1da0
db dummyd_2db33[32]; // 2368:1dc0
db dummyd_2db53[32]; // 2368:1de0
db dummyd_2db73[32]; // 2368:1e00
db dummyd_2db93[32]; // 2368:1e20
db dummyd_2dbb3[32]; // 2368:1e40
db dummyd_2dbd3[32]; // 2368:1e60
db dummyd_2dbf3[32]; // 2368:1e80
db dummyd_2dc13[32]; // 2368:1ea0
db dummyd_2dc33[32]; // 2368:1ec0
db dummyd_2dc53[32]; // 2368:1ee0
db dummyd_2dc73[32]; // 2368:1f00
db dummyd_2dc93[32]; // 2368:1f20
db dummyd_2dcb3[32]; // 2368:1f40
db dummyd_2dcd3[32]; // 2368:1f60
db dummyd_2dcf3[32]; // 2368:1f80
db dummyd_2dd13[32]; // 2368:1fa0
db dummyd_2dd33[32]; // 2368:1fc0
db dummyd_2dd53[32]; // 2368:1fe0
db dummyd_2dd73[32]; // 2368:2000
db dummyd_2dd93[32]; // 2368:2020
db dummyd_2ddb3[32]; // 2368:2040
db dummyd_2ddd3[32]; // 2368:2060
db dummyd_2ddf3[32]; // 2368:2080
db dummyd_2de13[32]; // 2368:20a0
db dummyd_2de33[32]; // 2368:20c0
db dummyd_2de53[32]; // 2368:20e0
db dummyd_2de73[32]; // 2368:2100
db dummyd_2de93[32]; // 2368:2120
db dummyd_2deb3[32]; // 2368:2140
db dummyd_2ded3[32]; // 2368:2160
db dummyd_2def3[32]; // 2368:2180
db dummyd_2df13[32]; // 2368:21a0
db dummyd_2df33[32]; // 2368:21c0
db dummyd_2df53[32]; // 2368:21e0
db dummyd_2df73[32]; // 2368:2200
db dummyd_2df93[32]; // 2368:2220
db dummyd_2dfb3[32]; // 2368:2240
db dummyd_2dfd3[32]; // 2368:2260
db dummyd_2dff3[32]; // 2368:2280
db dummyd_2e013[32]; // 2368:22a0
db dummyd_2e033[32]; // 2368:22c0
db dummyd_2e053[32]; // 2368:22e0
db dummyd_2e073[32]; // 2368:2300
db dummyd_2e093[32]; // 2368:2320
db dummyd_2e0b3[32]; // 2368:2340
db dummyd_2e0d3[32]; // 2368:2360
db dummyd_2e0f3[32]; // 2368:2380
db dummyd_2e113[32]; // 2368:23a0
db dummyd_2e133[32]; // 2368:23c0
db dummyd_2e153[32]; // 2368:23e0
db dummyd_2e173[32]; // 2368:2400
db dummyd_2e193[32]; // 2368:2420
db dummyd_2e1b3[32]; // 2368:2440
db dummyd_2e1d3[32]; // 2368:2460
db dummyd_2e1f3[32]; // 2368:2480
db dummyd_2e213[32]; // 2368:24a0
db dummyd_2e233[32]; // 2368:24c0
db dummyd_2e253[32]; // 2368:24e0
db dummyd_2e273[32]; // 2368:2500
db dummyd_2e293[32]; // 2368:2520
db dummyd_2e2b3[32]; // 2368:2540
db dummyd_2e2d3[32]; // 2368:2560
db dummyd_2e2f3[32]; // 2368:2580
db dummyd_2e313[32]; // 2368:25a0
db dummyd_2e333[32]; // 2368:25c0
db dummyd_2e353[32]; // 2368:25e0
db dummyd_2e373[32]; // 2368:2600
db dummyd_2e393[32]; // 2368:2620
db dummyd_2e3b3[32]; // 2368:2640
db dummyd_2e3d3[32]; // 2368:2660
db dummyd_2e3f3[32]; // 2368:2680
db dummyd_2e413[32]; // 2368:26a0
db dummyd_2e433[32]; // 2368:26c0
db dummyd_2e453[32]; // 2368:26e0
db dummyd_2e473[32]; // 2368:2700
db dummyd_2e493[32]; // 2368:2720
db dummyd_2e4b3[32]; // 2368:2740
db dummyd_2e4d3[32]; // 2368:2760
db dummyd_2e4f3[32]; // 2368:2780
db dummyd_2e513[32]; // 2368:27a0
db dummyd_2e533[32]; // 2368:27c0
db dummyd_2e553[32]; // 2368:27e0
db dummyd_2e573[32]; // 2368:2800
db dummyd_2e593[32]; // 2368:2820
db dummyd_2e5b3[32]; // 2368:2840
db dummyd_2e5d3[32]; // 2368:2860
db dummyd_2e5f3[32]; // 2368:2880
db dummyd_2e613[32]; // 2368:28a0
db dummyd_2e633[32]; // 2368:28c0
db dummyd_2e653[32]; // 2368:28e0
db dummyd_2e673[32]; // 2368:2900
db dummyd_2e693[32]; // 2368:2920
db dummyd_2e6b3[32]; // 2368:2940
db dummyd_2e6d3[32]; // 2368:2960
db dummyd_2e6f3[32]; // 2368:2980
db dummyd_2e713[32]; // 2368:29a0
db dummyd_2e733[32]; // 2368:29c0
db dummyd_2e753[32]; // 2368:29e0
db dummyd_2e773[32]; // 2368:2a00
db dummyd_2e793[32]; // 2368:2a20
db dummyd_2e7b3[32]; // 2368:2a40
db dummyd_2e7d3[32]; // 2368:2a60
db dummyd_2e7f3[32]; // 2368:2a80
db dummyd_2e813[32]; // 2368:2aa0
db dummyd_2e833[32]; // 2368:2ac0
db dummyd_2e853[32]; // 2368:2ae0
db dummyd_2e873[32]; // 2368:2b00
db dummyd_2e893[32]; // 2368:2b20
db dummyd_2e8b3[32]; // 2368:2b40
db dummyd_2e8d3[32]; // 2368:2b60
db dummyd_2e8f3[32]; // 2368:2b80
db dummyd_2e913[32]; // 2368:2ba0
db dummyd_2e933[32]; // 2368:2bc0
db dummyd_2e953[32]; // 2368:2be0
db dummyd_2e973[32]; // 2368:2c00
db dummyd_2e993[32]; // 2368:2c20
db dummyd_2e9b3[32]; // 2368:2c40
db dummyd_2e9d3[32]; // 2368:2c60
db dummyd_2e9f3[32]; // 2368:2c80
db dummyd_2ea13[32]; // 2368:2ca0
db dummyd_2ea33[32]; // 2368:2cc0
db dummyd_2ea53[32]; // 2368:2ce0
db dummyd_2ea73[32]; // 2368:2d00
db dummyd_2ea93[32]; // 2368:2d20
db dummyd_2eab3[32]; // 2368:2d40
db dummyd_2ead3[32]; // 2368:2d60
db dummyd_2eaf3[32]; // 2368:2d80
db dummyd_2eb13[32]; // 2368:2da0
db dummyd_2eb33[32]; // 2368:2dc0
db dummyd_2eb53[32]; // 2368:2de0
db dummyd_2eb73[32]; // 2368:2e00
db dummyd_2eb93[32]; // 2368:2e20
db dummyd_2ebb3[32]; // 2368:2e40
db dummyd_2ebd3[32]; // 2368:2e60
db dummyd_2ebf3[32]; // 2368:2e80
db dummyd_2ec13[32]; // 2368:2ea0
db dummyd_2ec33[32]; // 2368:2ec0
db dummyd_2ec53[32]; // 2368:2ee0
db dummyd_2ec73[32]; // 2368:2f00
db dummyd_2ec93[32]; // 2368:2f20
db dummyd_2ecb3[32]; // 2368:2f40
db dummyd_2ecd3[32]; // 2368:2f60
db dummyd_2ecf3[32]; // 2368:2f80
db dummyd_2ed13[32]; // 2368:2fa0
db dummyd_2ed33[32]; // 2368:2fc0
db dummyd_2ed53[32]; // 2368:2fe0
db dummyd_2ed73[32]; // 2368:3000
db dummyd_2ed93[32]; // 2368:3020
db dummyd_2edb3[32]; // 2368:3040
db dummyd_2edd3[32]; // 2368:3060
db dummyd_2edf3[32]; // 2368:3080
db dummyd_2ee13[32]; // 2368:30a0
db dummyd_2ee33[32]; // 2368:30c0
db dummyd_2ee53[32]; // 2368:30e0
db dummyd_2ee73[32]; // 2368:3100
db dummyd_2ee93[32]; // 2368:3120
db dummyd_2eeb3[32]; // 2368:3140
db dummyd_2eed3[32]; // 2368:3160
db dummyd_2eef3[32]; // 2368:3180
db dummyd_2ef13[32]; // 2368:31a0
db dummyd_2ef33[32]; // 2368:31c0
db dummyd_2ef53[32]; // 2368:31e0
db dummyd_2ef73[32]; // 2368:3200
db dummyd_2ef93[32]; // 2368:3220
db dummyd_2efb3[32]; // 2368:3240
db dummyd_2efd3[32]; // 2368:3260
db dummyd_2eff3[32]; // 2368:3280
db dummyd_2f013[32]; // 2368:32a0
db dummyd_2f033[32]; // 2368:32c0
db dummyd_2f053[32]; // 2368:32e0
db dummyd_2f073[32]; // 2368:3300
db dummyd_2f093[32]; // 2368:3320
db dummyd_2f0b3[32]; // 2368:3340
db dummyd_2f0d3[32]; // 2368:3360
db dummyd_2f0f3[32]; // 2368:3380
db dummyd_2f113[32]; // 2368:33a0
db dummyd_2f133[32]; // 2368:33c0
db dummyd_2f153[32]; // 2368:33e0
db dummyd_2f173[32]; // 2368:3400
db dummyd_2f193[32]; // 2368:3420
db dummyd_2f1b3[32]; // 2368:3440
db dummyd_2f1d3[32]; // 2368:3460
db dummyd_2f1f3[32]; // 2368:3480
db dummyd_2f213[32]; // 2368:34a0
db dummyd_2f233[32]; // 2368:34c0
db dummyd_2f253[32]; // 2368:34e0
db dummyd_2f273[32]; // 2368:3500
db dummyd_2f293[32]; // 2368:3520
db dummyd_2f2b3[32]; // 2368:3540
db dummyd_2f2d3[32]; // 2368:3560
db dummyd_2f2f3[32]; // 2368:3580
db dummyd_2f313[32]; // 2368:35a0
db dummyd_2f333[32]; // 2368:35c0
db dummyd_2f353[32]; // 2368:35e0
db dummyd_2f373[32]; // 2368:3600
db dummyd_2f393[32]; // 2368:3620
db dummyd_2f3b3[32]; // 2368:3640
db dummyd_2f3d3[32]; // 2368:3660
db dummyd_2f3f3[32]; // 2368:3680
db dummyd_2f413[32]; // 2368:36a0
db dummyd_2f433[32]; // 2368:36c0
db dummyd_2f453[32]; // 2368:36e0
db dummyd_2f473[32]; // 2368:3700
db dummyd_2f493[32]; // 2368:3720
db dummyd_2f4b3[32]; // 2368:3740
db dummyd_2f4d3[32]; // 2368:3760
db dummyd_2f4f3[32]; // 2368:3780
db dummyd_2f513[32]; // 2368:37a0
db dummyd_2f533[32]; // 2368:37c0
db dummyd_2f553[32]; // 2368:37e0
db dummyd_2f573[32]; // 2368:3800
db dummyd_2f593[32]; // 2368:3820
db dummyd_2f5b3[32]; // 2368:3840
db dummyd_2f5d3[32]; // 2368:3860
db dummyd_2f5f3[32]; // 2368:3880
db dummyd_2f613[32]; // 2368:38a0
db dummyd_2f633[32]; // 2368:38c0
db dummyd_2f653[32]; // 2368:38e0
db dummyd_2f673[32]; // 2368:3900
db dummyd_2f693[32]; // 2368:3920
db dummyd_2f6b3[32]; // 2368:3940
db dummyd_2f6d3[32]; // 2368:3960
db dummyd_2f6f3[32]; // 2368:3980
db dummyd_2f713[32]; // 2368:39a0
db dummyd_2f733[32]; // 2368:39c0
db dummyd_2f753[32]; // 2368:39e0
db dummyd_2f773[32]; // 2368:3a00
db dummyd_2f793[32]; // 2368:3a20
db dummyd_2f7b3[32]; // 2368:3a40
db dummyd_2f7d3[32]; // 2368:3a60
db dummyd_2f7f3[32]; // 2368:3a80
db dummyd_2f813[32]; // 2368:3aa0
db dummyd_2f833[32]; // 2368:3ac0
db dummyd_2f853[32]; // 2368:3ae0
db dummyd_2f873[32]; // 2368:3b00
db dummyd_2f893[32]; // 2368:3b20
db dummyd_2f8b3[32]; // 2368:3b40
db dummyd_2f8d3[32]; // 2368:3b60
db dummyd_2f8f3[32]; // 2368:3b80
db dummyd_2f913[32]; // 2368:3ba0
db dummyd_2f933[32]; // 2368:3bc0
db dummyd_2f953[32]; // 2368:3be0
db dummyd_2f973[32]; // 2368:3c00
db dummyd_2f993[32]; // 2368:3c20
db dummyd_2f9b3[32]; // 2368:3c40
db dummyd_2f9d3[32]; // 2368:3c60
db dummyd_2f9f3[32]; // 2368:3c80
db dummyd_2fa13[32]; // 2368:3ca0
db dummyd_2fa33[32]; // 2368:3cc0
db dummyd_2fa53[32]; // 2368:3ce0
db dummyd_2fa73[32]; // 2368:3d00
db dummyd_2fa93[32]; // 2368:3d20
db dummyd_2fab3[32]; // 2368:3d40
db dummyd_2fad3[32]; // 2368:3d60
db dummyd_2faf3[32]; // 2368:3d80
db dummyd_2fb13[32]; // 2368:3da0
db dummyd_2fb33[32]; // 2368:3dc0
db dummyd_2fb53[32]; // 2368:3de0
db dummyd_2fb73[32]; // 2368:3e00
db dummyd_2fb93[32]; // 2368:3e20
db dummyd_2fbb3[32]; // 2368:3e40
db dummyd_2fbd3[32]; // 2368:3e60
db dummyd_2fbf3[32]; // 2368:3e80
db dummyd_2fc13[32]; // 2368:3ea0
db dummyd_2fc33[32]; // 2368:3ec0
db dummyd_2fc53[32]; // 2368:3ee0
db dummyd_2fc73[32]; // 2368:3f00
db dummyd_2fc93[32]; // 2368:3f20
db dummyd_2fcb3[32]; // 2368:3f40
db dummyd_2fcd3[32]; // 2368:3f60
db dummyd_2fcf3[32]; // 2368:3f80
db dummyd_2fd13[32]; // 2368:3fa0
db dummyd_2fd33[32]; // 2368:3fc0
db dummyd_2fd53[32]; // 2368:3fe0
db dummyd_2fd73[32]; // 2368:4000
db dummyd_2fd93[32]; // 2368:4020
db dummyd_2fdb3[32]; // 2368:4040
db dummyd_2fdd3[32]; // 2368:4060
db dummyd_2fdf3[32]; // 2368:4080
db dummyd_2fe13[32]; // 2368:40a0
db dummyd_2fe33[32]; // 2368:40c0
db dummyd_2fe53[32]; // 2368:40e0
db dummyd_2fe73[32]; // 2368:4100
db dummyd_2fe93[32]; // 2368:4120
db dummyd_2feb3[32]; // 2368:4140
db dummyd_2fed3[32]; // 2368:4160
db dummyd_2fef3[32]; // 2368:4180
db dummyd_2ff13[32]; // 2368:41a0
db dummyd_2ff33[32]; // 2368:41c0
db dummyd_2ff53[32]; // 2368:41e0
db dummyd_2ff73[32]; // 2368:4200
db dummyd_2ff93[32]; // 2368:4220
db dummyd_2ffb3[32]; // 2368:4240
db dummyd_2ffd3[32]; // 2368:4260
db dummyd_2fff3[32]; // 2368:4280
db dummyd_30013[32]; // 2368:42a0
db dummyd_30033[32]; // 2368:42c0
db dummyd_30053[32]; // 2368:42e0
db dummyd_30073[32]; // 2368:4300
db dummyd_30093[32]; // 2368:4320
db dummyd_300b3[32]; // 2368:4340
db dummyd_300d3[32]; // 2368:4360
db dummyd_300f3[32]; // 2368:4380
db dummyd_30113[32]; // 2368:43a0
db dummyd_30133[32]; // 2368:43c0
db dummyd_30153[32]; // 2368:43e0
db dummyd_30173[32]; // 2368:4400
db dummyd_30193[32]; // 2368:4420
db dummyd_301b3[32]; // 2368:4440
db dummyd_301d3[32]; // 2368:4460
db dummyd_301f3[32]; // 2368:4480
db dummyd_30213[32]; // 2368:44a0
db dummyd_30233[32]; // 2891:0000
db dummyd_30253[32]; // 2891:0020
db dummyd_30273[32]; // 2891:0040
db dummyd_30293[32]; // 2891:0060
db dummyd_302b3[32]; // 2891:0080
db dummyd_302d3[32]; // 2891:00a0
db dummyd_302f3[32]; // 2891:00c0
db dummyd_30313[32]; // 2891:00e0
db dummyd_30333[32]; // 2891:0100
db dummyd_30353[32]; // 2891:0120
db dummyd_30373[32]; // 2891:0140
db dummyd_30393[32]; // 2891:0160
db dummyd_303b3[32]; // 2891:0180
db dummyd_303d3[32]; // 2891:01a0
db dummyd_303f3[32]; // 2891:01c0
db dummyd_30413[32]; // 2891:01e0
db dummyd_30433[32]; // 2891:0200
db dummyd_30453[32]; // 2891:0220
db dummyd_30473[32]; // 2891:0240
db dummyd_30493[32]; // 2891:0260
db dummyd_304b3[32]; // 2891:0280
db dummyd_304d3[32]; // 2891:02a0
db dummyd_304f3[32]; // 2891:02c0
db dummyd_30513[32]; // 2891:02e0
db dummyd_30533[32]; // 2891:0300
db dummyd_30553[32]; // 2891:0320
db dummyd_30573[32]; // 2891:0340
db dummyd_30593[32]; // 2891:0360
db dummyd_305b3[32]; // 2891:0380
db dummyd_305d3[32]; // 2891:03a0
db dummyd_305f3[32]; // 2891:03c0
db dummyd_30613[32]; // 2891:03e0
db dummyd_30633[32]; // 2891:0400
db dummyd_30653[32]; // 2891:0420
db dummyd_30673[32]; // 2891:0440
db dummyd_30693[32]; // 2891:0460
db dummyd_306b3[32]; // 2891:0480
db dummyd_306d3[32]; // 2891:04a0
db dummyd_306f3[32]; // 2891:04c0
db dummyd_30713[32]; // 2891:04e0
db dummyd_30733[32]; // 2891:0500
db dummyd_30753[32]; // 2891:0520
db dummyd_30773[32]; // 2891:0540
db dummyd_30793[32]; // 2891:0560
db dummyd_307b3[32]; // 2891:0580
db dummyd_307d3[32]; // 2891:05a0
db dummyd_307f3[32]; // 2891:05c0
db dummyd_30813[32]; // 2891:05e0
db dummyd_30833[32]; // 2891:0600
db dummyd_30853[32]; // 2891:0620
db dummyd_30873[32]; // 2891:0640
db dummyd_30893[32]; // 2891:0660
db dummyd_308b3[32]; // 2891:0680
db dummyd_308d3[32]; // 2891:06a0
db dummyd_308f3[32]; // 2891:06c0
db dummyd_30913[32]; // 2891:06e0
db dummyd_30933[32]; // 2891:0700
db dummyd_30953[32]; // 2891:0720
db dummyd_30973[32]; // 2891:0740
db dummyd_30993[32]; // 2891:0760
db dummyd_309b3[32]; // 2891:0780
db dummyd_309d3[32]; // 2891:07a0
db dummyd_309f3[32]; // 2891:07c0
db dummyd_30a13[32]; // 2891:07e0
db dummyd_30a33[32]; // 2891:0800
db dummyd_30a53[32]; // 2891:0820
db dummyd_30a73[32]; // 2891:0840
db dummyd_30a93[32]; // 2891:0860
db dummyd_30ab3[32]; // 2891:0880
db dummyd_30ad3[32]; // 2891:08a0
db dummyd_30af3[32]; // 2891:08c0
db dummyd_30b13[32]; // 2891:08e0
db dummyd_30b33[32]; // 2891:0900
db dummyd_30b53[32]; // 2891:0920
db dummyd_30b73[32]; // 2891:0940
db dummyd_30b93[32]; // 2891:0960
db dummyd_30bb3[32]; // 2891:0980
db dummyd_30bd3[32]; // 2891:09a0
db dummyd_30bf3[32]; // 2891:09c0
db dummyd_30c13[32]; // 2891:09e0
db dummyd_30c33[32]; // 2891:0a00
db dummyd_30c53[32]; // 2891:0a20
db dummyd_30c73[32]; // 2891:0a40
db dummyd_30c93[32]; // 2891:0a60
db dummyd_30cb3[32]; // 2891:0a80
db dummyd_30cd3[32]; // 2891:0aa0
db dummyd_30cf3[32]; // 2891:0ac0
db dummyd_30d13[32]; // 2891:0ae0
db dummyd_30d33[32]; // 2891:0b00
db dummyd_30d53[32]; // 2891:0b20
db dummyd_30d73[32]; // 2891:0b40
db dummyd_30d93[32]; // 2891:0b60
db dummyd_30db3[32]; // 2891:0b80
db dummyd_30dd3[32]; // 2891:0ba0
db dummyd_30df3[32]; // 2891:0bc0
db dummyd_30e13[32]; // 2891:0be0
db dummyd_30e33[32]; // 2891:0c00
db dummyd_30e53[32]; // 2891:0c20
db dummyd_30e73[32]; // 2891:0c40
db dummyd_30e93[32]; // 2891:0c60
db dummyd_30eb3[32]; // 2891:0c80
db dummyd_30ed3[32]; // 2891:0ca0
db dummyd_30ef3[32]; // 2891:0cc0
db dummyd_30f13[32]; // 2891:0ce0
db dummyd_30f33[32]; // 2891:0d00
db dummyd_30f53[32]; // 2891:0d20
db dummyd_30f73[32]; // 2891:0d40
db dummyd_30f93[32]; // 2891:0d60
db dummyd_30fb3[32]; // 2891:0d80
db dummyd_30fd3[32]; // 2891:0da0
db dummyd_30ff3[32]; // 2891:0dc0
db dummyd_31013[32]; // 2891:0de0
db dummyd_31033[32]; // 2891:0e00
db dummyd_31053[32]; // 2891:0e20
db dummyd_31073[32]; // 2891:0e40
db dummyd_31093[32]; // 2891:0e60
db dummyd_310b3[32]; // 2891:0e80
db dummyd_310d3[32]; // 2891:0ea0
db dummyd_310f3[32]; // 2891:0ec0
db dummyd_31113[32]; // 2891:0ee0
db dummyd_31133[32]; // 2891:0f00
db dummyd_31153[32]; // 2891:0f20
db dummyd_31173[32]; // 2891:0f40
db dummyd_31193[32]; // 2891:0f60
db dummyd_311b3[32]; // 2891:0f80
db dummyd_311d3[32]; // 2891:0fa0
db dummyd_311f3[32]; // 2891:0fc0
db dummyd_31213[32]; // 2891:0fe0
db dummyd_31233[32]; // 2891:1000
db dummyd_31253[32]; // 2891:1020
db dummyd_31273[32]; // 2891:1040
db dummyd_31293[32]; // 2891:1060
db dummyd_312b3[32]; // 2891:1080
db dummyd_312d3[32]; // 2891:10a0
db dummyd_312f3[32]; // 2891:10c0
db dummyd_31313[32]; // 2891:10e0
db dummyd_31333[32]; // 2891:1100
db dummyd_31353[32]; // 2891:1120
db dummyd_31373[32]; // 2891:1140
db dummyd_31393[32]; // 2891:1160
db dummyd_313b3[32]; // 2891:1180
db dummyd_313d3[32]; // 2891:11a0
db dummyd_313f3[32]; // 2891:11c0
db dummyd_31413[32]; // 2891:11e0
db dummyd_31433[32]; // 2891:1200
db dummyd_31453[32]; // 2891:1220
db dummyd_31473[32]; // 2891:1240
db dummyd_31493[32]; // 2891:1260
db dummyd_314b3[32]; // 2891:1280
db dummyd_314d3[32]; // 2891:12a0
db dummyd_314f3[32]; // 2891:12c0
db dummyd_31513[32]; // 2891:12e0
db dummyd_31533[32]; // 2891:1300
db dummyd_31553[32]; // 2891:1320
db dummyd_31573[32]; // 2891:1340
db dummyd_31593[32]; // 2891:1360
db dummyd_315b3[32]; // 2891:1380
db dummyd_315d3[32]; // 2891:13a0
db dummyd_315f3[32]; // 2891:13c0
db dummyd_31613[32]; // 2891:13e0
db dummyd_31633[32]; // 2891:1400
db dummyd_31653[32]; // 2891:1420
db dummyd_31673[32]; // 2891:1440
db dummyd_31693[32]; // 2891:1460
db dummyd_316b3[32]; // 2891:1480
db dummyd_316d3[32]; // 2891:14a0
db dummyd_316f3[32]; // 2891:14c0
db dummyd_31713[32]; // 2891:14e0
db dummyd_31733[32]; // 2891:1500
db dummyd_31753[32]; // 2891:1520
db dummyd_31773[32]; // 2891:1540
db dummyd_31793[32]; // 2891:1560
db dummyd_317b3[32]; // 2891:1580
db dummyd_317d3[32]; // 2891:15a0
db dummyd_317f3[32]; // 2891:15c0
db dummyd_31813[32]; // 2891:15e0
db dummyd_31833[32]; // 2891:1600
db dummyd_31853[32]; // 2891:1620
db dummyd_31873[32]; // 2891:1640
db dummyd_31893[32]; // 2891:1660
db dummyd_318b3[32]; // 2891:1680
db dummyd_318d3[32]; // 2891:16a0
db dummyd_318f3[32]; // 2891:16c0
db dummyd_31913[32]; // 2891:16e0
db dummyd_31933[32]; // 2891:1700
db dummyd_31953[32]; // 2891:1720
db dummyd_31973[32]; // 2891:1740
db dummyd_31993[32]; // 2891:1760
db dummyd_319b3[32]; // 2891:1780
db dummyd_319d3[32]; // 2891:17a0
db dummyd_319f3[32]; // 2891:17c0
db dummyd_31a13[32]; // 2891:17e0
db dummyd_31a33[32]; // 2891:1800
db dummyd_31a53[32]; // 2891:1820
db dummyd_31a73[32]; // 2891:1840
db dummyd_31a93[32]; // 2891:1860
db dummyd_31ab3[32]; // 2891:1880
db dummyd_31ad3[32]; // 2891:18a0
db dummyd_31af3[32]; // 2891:18c0
db dummyd_31b13[32]; // 2891:18e0
db dummyd_31b33[32]; // 2891:1900
db dummyd_31b53[32]; // 2891:1920
db dummyd_31b73[32]; // 2891:1940
db dummyd_31b93[32]; // 2891:1960
db dummyd_31bb3[32]; // 2891:1980
db dummyd_31bd3[32]; // 2891:19a0
db dummyd_31bf3[32]; // 2891:19c0
db dummyd_31c13[32]; // 2891:19e0
db dummyd_31c33[32]; // 2891:1a00
db dummyd_31c53[32]; // 2891:1a20
db dummyd_31c73[32]; // 2891:1a40
db dummyd_31c93[32]; // 2891:1a60
db dummyd_31cb3[32]; // 2891:1a80
db dummyd_31cd3[32]; // 2891:1aa0
db dummyd_31cf3[32]; // 2891:1ac0
db dummyd_31d13[32]; // 2891:1ae0
db dummyd_31d33[32]; // 2891:1b00
db dummyd_31d53[32]; // 2891:1b20
db dummyd_31d73[32]; // 2891:1b40
db dummyd_31d93[32]; // 2891:1b60
db dummyd_31db3[32]; // 2891:1b80
db dummyd_31dd3[32]; // 2891:1ba0
db dummyd_31df3[32]; // 2891:1bc0
db dummyd_31e13[32]; // 2891:1be0
db dummyd_31e33[32]; // 2891:1c00
db dummyd_31e53[32]; // 2891:1c20
db dummyd_31e73[32]; // 2891:1c40
db dummyd_31e93[32]; // 2891:1c60
db dummyd_31eb3[32]; // 2891:1c80
db dummyd_31ed3[32]; // 2891:1ca0
db dummyd_31ef3[32]; // 2891:1cc0
db dummyd_31f13[32]; // 2891:1ce0
db dummyd_31f33[32]; // 2891:1d00
db dummyd_31f53[32]; // 2891:1d20
db dummyd_31f73[32]; // 2891:1d40
db dummyd_31f93[32]; // 2891:1d60
db dummyd_31fb3[32]; // 2891:1d80
db dummyd_31fd3[32]; // 2891:1da0
db dummyd_31ff3[32]; // 2891:1dc0
db dummyd_32013[32]; // 2891:1de0
db dummyd_32033[32]; // 2891:1e00
db dummyd_32053[32]; // 2891:1e20
db dummyd_32073[32]; // 2891:1e40
db dummyd_32093[32]; // 2891:1e60
db dummyd_320b3[32]; // 2891:1e80
db dummyd_320d3[32]; // 2891:1ea0
db dummyd_320f3[32]; // 2891:1ec0
db dummyd_32113[32]; // 2891:1ee0
db dummyd_32133[32]; // 2891:1f00
db dummyd_32153[32]; // 2891:1f20
db dummyd_32173[32]; // 2891:1f40
db dummyd_32193[32]; // 2891:1f60
db dummyd_321b3[32]; // 2891:1f80
db dummyd_321d3[32]; // 2891:1fa0
db dummyd_321f3[32]; // 2891:1fc0
db dummyd_32213[32]; // 2891:1fe0
db dummyd_32233[32]; // 2891:2000
db dummyd_32253[32]; // 2891:2020
db dummyd_32273[32]; // 2891:2040
db dummyd_32293[32]; // 2891:2060
db dummyd_322b3[32]; // 2891:2080
db dummyd_322d3[32]; // 2891:20a0
db dummyd_322f3[32]; // 2891:20c0
db dummyd_32313[32]; // 2891:20e0
db dummyd_32333[32]; // 2891:2100
db dummyd_32353[32]; // 2891:2120
db dummyd_32373[32]; // 2891:2140
db dummyd_32393[32]; // 2891:2160
db dummyd_323b3[32]; // 2891:2180
db dummyd_323d3[32]; // 2891:21a0
db dummyd_323f3[32]; // 2891:21c0
db dummyd_32413[32]; // 2891:21e0
db dummyd_32433[32]; // 2891:2200
db dummyd_32453[32]; // 2891:2220
db dummyd_32473[32]; // 2891:2240
db dummyd_32493[32]; // 2891:2260
db dummyd_324b3[32]; // 2891:2280
db dummyd_324d3[32]; // 2891:22a0
db dummyd_324f3[32]; // 2891:22c0
db dummyd_32513[32]; // 2891:22e0
db dummyd_32533[32]; // 2891:2300
db dummyd_32553[32]; // 2891:2320
db dummyd_32573[32]; // 2891:2340
db dummyd_32593[32]; // 2891:2360
db dummyd_325b3[32]; // 2891:2380
db dummyd_325d3[32]; // 2891:23a0
db dummyd_325f3[32]; // 2891:23c0
db dummyd_32613[32]; // 2891:23e0
db dummyd_32633[32]; // 2891:2400
db dummyd_32653[32]; // 2891:2420
db dummyd_32673[32]; // 2891:2440
db dummyd_32693[32]; // 2891:2460
db dummyd_326b3[32]; // 2891:2480
db dummyd_326d3[32]; // 2891:24a0
db dummyd_326f3[32]; // 2891:24c0
db dummyd_32713[32]; // 2891:24e0
db dummyd_32733[32]; // 2891:2500
db dummyd_32753[32]; // 2891:2520
db dummyd_32773[32]; // 2891:2540
db dummyd_32793[32]; // 2891:2560
db dummyd_327b3[32]; // 2891:2580
db dummyd_327d3[32]; // 2891:25a0
db dummyd_327f3[32]; // 2891:25c0
db dummyd_32813[32]; // 2891:25e0
db dummyd_32833[32]; // 2891:2600
db dummyd_32853[32]; // 2891:2620
db dummyd_32873[32]; // 2891:2640
db dummyd_32893[32]; // 2891:2660
db dummyd_328b3[32]; // 2891:2680
db dummyd_328d3[32]; // 2891:26a0
db dummyd_328f3[32]; // 2891:26c0
db dummyd_32913[32]; // 2891:26e0
db dummyd_32933[32]; // 2891:2700
db dummyd_32953[32]; // 2891:2720
db dummyd_32973[32]; // 2891:2740
db dummyd_32993[32]; // 2891:2760
db dummyd_329b3[32]; // 2891:2780
db dummyd_329d3[32]; // 2891:27a0
db dummyd_329f3[32]; // 2891:27c0
db dummyd_32a13[32]; // 2891:27e0
db dummyd_32a33[32]; // 2891:2800
db dummyd_32a53[32]; // 2891:2820
db dummyd_32a73[32]; // 2891:2840
db dummyd_32a93[32]; // 2891:2860
db dummyd_32ab3[32]; // 2891:2880
db dummyd_32ad3[32]; // 2891:28a0
db dummyd_32af3[32]; // 2891:28c0
db dummyd_32b13[32]; // 2891:28e0
db dummyd_32b33[32]; // 2891:2900
db dummyd_32b53[32]; // 2891:2920
db dummyd_32b73[32]; // 2891:2940
db dummyd_32b93[32]; // 2891:2960
db dummyd_32bb3[32]; // 2891:2980
db dummyd_32bd3[32]; // 2891:29a0
db dummyd_32bf3[32]; // 2891:29c0
db dummyd_32c13[32]; // 2891:29e0
db dummyd_32c33[32]; // 2891:2a00
db dummyd_32c53[32]; // 2891:2a20
db dummyd_32c73[32]; // 2891:2a40
db dummyd_32c93[32]; // 2891:2a60
db dummyd_32cb3[32]; // 2891:2a80
db dummyd_32cd3[32]; // 2891:2aa0
db dummyd_32cf3[32]; // 2891:2ac0
db dummyd_32d13[32]; // 2891:2ae0
db dummyd_32d33[32]; // 2891:2b00
db dummyd_32d53[32]; // 2891:2b20
db dummyd_32d73[32]; // 2891:2b40
db dummyd_32d93[32]; // 2891:2b60
db dummyd_32db3[32]; // 2891:2b80
db dummyd_32dd3[32]; // 2891:2ba0
db dummyd_32df3[32]; // 2891:2bc0
db dummyd_32e13[32]; // 2891:2be0
db dummyd_32e33[32]; // 2891:2c00
db dummyd_32e53[32]; // 2891:2c20
db dummyd_32e73[32]; // 2891:2c40
db dummyd_32e93[32]; // 2891:2c60
db dummyd_32eb3[32]; // 2891:2c80
db dummyd_32ed3[32]; // 2891:2ca0
db dummyd_32ef3[32]; // 2891:2cc0
db dummyd_32f13[32]; // 2891:2ce0
db dummyd_32f33[32]; // 2891:2d00
db dummyd_32f53[32]; // 2891:2d20
db dummyd_32f73[32]; // 2891:2d40
db dummyd_32f93[32]; // 2891:2d60
db dummyd_32fb3[32]; // 2891:2d80
db dummyd_32fd3[32]; // 2891:2da0
db dummyd_32ff3[32]; // 2891:2dc0
db dummyd_33013[32]; // 2891:2de0
db dummyd_33033[32]; // 2891:2e00
db dummyd_33053[32]; // 2891:2e20
db dummyd_33073[32]; // 2891:2e40
db dummyd_33093[32]; // 2891:2e60
db dummyd_330b3[32]; // 2891:2e80
db dummyd_330d3[32]; // 2891:2ea0
db dummyd_330f3[32]; // 2891:2ec0
db dummyd_33113[32]; // 2891:2ee0
db dummyd_33133[32]; // 2891:2f00
db dummyd_33153[32]; // 2891:2f20
db dummyd_33173[32]; // 2891:2f40
db dummyd_33193[32]; // 2891:2f60
db dummyd_331b3[32]; // 2891:2f80
db dummyd_331d3[32]; // 2891:2fa0
db dummyd_331f3[32]; // 2891:2fc0
db dummyd_33213[32]; // 2891:2fe0
db dummyd_33233[32]; // 2891:3000
db dummyd_33253[32]; // 2891:3020
db dummyd_33273[32]; // 2891:3040
db dummyd_33293[32]; // 2891:3060
db dummyd_332b3[32]; // 2891:3080
db dummyd_332d3[32]; // 2891:30a0
db dummyd_332f3[32]; // 2891:30c0
db dummyd_33313[32]; // 2891:30e0
db dummyd_33333[32]; // 2891:3100
db dummyd_33353[32]; // 2891:3120
db dummyd_33373[32]; // 2891:3140
db dummyd_33393[32]; // 2891:3160
db dummyd_333b3[32]; // 2891:3180
db dummyd_333d3[32]; // 2891:31a0
db dummyd_333f3[32]; // 2891:31c0
db dummyd_33413[32]; // 2891:31e0
db dummyd_33433[32]; // 2891:3200
db dummyd_33453[32]; // 2891:3220
db dummyd_33473[32]; // 2891:3240
db dummyd_33493[32]; // 2891:3260
db dummyd_334b3[32]; // 2891:3280
db dummyd_334d3[32]; // 2891:32a0
db dummyd_334f3[32]; // 2891:32c0
db dummyd_33513[32]; // 2891:32e0
db dummyd_33533[32]; // 2891:3300
db dummyd_33553[32]; // 2891:3320
db dummyd_33573[32]; // 2891:3340
db dummyd_33593[32]; // 2891:3360
db dummyd_335b3[32]; // 2891:3380
db dummyd_335d3[32]; // 2891:33a0
db dummyd_335f3[32]; // 2891:33c0
db dummyd_33613[32]; // 2891:33e0
db dummyd_33633[32]; // 2891:3400
db dummyd_33653[32]; // 2891:3420
db dummyd_33673[32]; // 2891:3440
db dummyd_33693[32]; // 2891:3460
db dummyd_336b3[32]; // 2891:3480
db dummyd_336d3[32]; // 2891:34a0
db dummyd_336f3[32]; // 2891:34c0
db dummyd_33713[32]; // 2891:34e0
db dummyd_33733[32]; // 2891:3500
db dummyd_33753[32]; // 2891:3520
db dummyd_33773[32]; // 2891:3540
db dummyd_33793[32]; // 2891:3560
db dummyd_337b3[32]; // 2891:3580
db dummyd_337d3[32]; // 2891:35a0
db dummyd_337f3[32]; // 2891:35c0
db dummyd_33813[32]; // 2891:35e0
db dummyd_33833[32]; // 2891:3600
db dummyd_33853[32]; // 2891:3620
db dummyd_33873[32]; // 2891:3640
db dummyd_33893[32]; // 2891:3660
db dummyd_338b3[32]; // 2891:3680
db dummyd_338d3[32]; // 2891:36a0
db dummyd_338f3[32]; // 2891:36c0
db dummyd_33913[32]; // 2891:36e0
db dummyd_33933[32]; // 2891:3700
db dummyd_33953[32]; // 2891:3720
db dummyd_33973[32]; // 2891:3740
db dummyd_33993[32]; // 2891:3760
db dummyd_339b3[32]; // 2891:3780
db dummyd_339d3[32]; // 2891:37a0
db dummyd_339f3[32]; // 2891:37c0
db dummyd_33a13[32]; // 2891:37e0
db dummyd_33a33[32]; // 2891:3800
db dummyd_33a53[32]; // 2891:3820
db dummyd_33a73[32]; // 2891:3840
db dummyd_33a93[32]; // 2891:3860
db dummyd_33ab3[32]; // 2891:3880
db dummyd_33ad3[32]; // 2891:38a0
db dummyd_33af3[32]; // 2891:38c0
db dummyd_33b13[32]; // 2891:38e0
db dummyd_33b33[32]; // 2891:3900
db dummyd_33b53[32]; // 2891:3920
db dummyd_33b73[32]; // 2891:3940
db dummyd_33b93[32]; // 2891:3960
db dummyd_33bb3[32]; // 2891:3980
db dummyd_33bd3[32]; // 2891:39a0
db dummyd_33bf3[32]; // 2891:39c0
db dummyd_33c13[32]; // 2891:39e0
db dummyd_33c33[32]; // 2891:3a00
db dummyd_33c53[32]; // 2891:3a20
db dummyd_33c73[32]; // 2891:3a40
db dummyd_33c93[32]; // 2891:3a60
db dummyd_33cb3[32]; // 2891:3a80
db dummyd_33cd3[32]; // 2891:3aa0
db dummyd_33cf3[32]; // 2891:3ac0
db dummyd_33d13[32]; // 2891:3ae0
db dummyd_33d33[32]; // 2891:3b00
db dummyd_33d53[32]; // 2891:3b20
db dummyd_33d73[32]; // 2891:3b40
db dummyd_33d93[32]; // 2891:3b60
db dummyd_33db3[32]; // 2891:3b80
db dummyd_33dd3[32]; // 2891:3ba0
db dummyd_33df3[32]; // 2891:3bc0
db dummyd_33e13[32]; // 2891:3be0
db dummyd_33e33[32]; // 2891:3c00
db dummyd_33e53[32]; // 2891:3c20
db dummyd_33e73[32]; // 2891:3c40
db dummyd_33e93[32]; // 2891:3c60
db dummyd_33eb3[32]; // 2891:3c80
db dummyd_33ed3[32]; // 2891:3ca0
db dummyd_33ef3[32]; // 2891:3cc0
db dummyd_33f13[32]; // 2891:3ce0
db dummyd_33f33[32]; // 2891:3d00
db dummyd_33f53[32]; // 2891:3d20
db dummyd_33f73[32]; // 2891:3d40
db dummyd_33f93[32]; // 2891:3d60
db dummyd_33fb3[32]; // 2891:3d80
db dummyd_33fd3[32]; // 2891:3da0
db dummyd_33ff3[32]; // 2891:3dc0
db dummyd_34013[32]; // 2891:3de0
db dummyd_34033[32]; // 2891:3e00
db dummyd_34053[32]; // 2891:3e20
db dummyd_34073[32]; // 2891:3e40
db dummyd_34093[32]; // 2891:3e60
db dummyd_340b3[32]; // 2891:3e80
db dummyd_340d3[32]; // 2891:3ea0
db dummyd_340f3[32]; // 2891:3ec0
db dummyd_34113[32]; // 2891:3ee0
db dummyd_34133[32]; // 2891:3f00
db dummyd_34153[32]; // 2891:3f20
db dummyd_34173[32]; // 2891:3f40
db dummyd_34193[32]; // 2891:3f60
db dummyd_341b3[32]; // 2891:3f80
db dummyd_341d3[32]; // 2891:3fa0
db dummyd_341f3[32]; // 2891:3fc0
db dummyd_34213[32]; // 2891:3fe0
db dummyd_34233[32]; // 2891:4000
db dummyd_34253[32]; // 2891:4020
db dummyd_34273[32]; // 2891:4040
db dummyd_34293[32]; // 2891:4060
db dummyd_342b3[32]; // 2891:4080
db dummyd_342d3[32]; // 2891:40a0
db dummyd_342f3[32]; // 2891:40c0
db dummyd_34313[32]; // 2891:40e0
db dummyd_34333[32]; // 2891:4100
db dummyd_34353[32]; // 2891:4120
db dummyd_34373[32]; // 2891:4140
db dummyd_34393[32]; // 2891:4160
db dummyd_343b3[32]; // 2891:4180
db dummyd_343d3[32]; // 2891:41a0
db dummyd_343f3[32]; // 2891:41c0
db dummyd_34413[32]; // 2891:41e0
db dummyd_34433[32]; // 2891:4200
db dummyd_34453[32]; // 2891:4220
db dummyd_34473[32]; // 2891:4240
db dummyd_34493[32]; // 2891:4260
db dummyd_344b3[32]; // 2891:4280
db dummyd_344d3[32]; // 2891:42a0
db dummyd_344f3[32]; // 2891:42c0
db dummyd_34513[32]; // 2891:42e0
db dummyd_34533[32]; // 2891:4300
db dummyd_34553[32]; // 2891:4320
db dummyd_34573[32]; // 2891:4340
db dummyd_34593[32]; // 2891:4360
db dummyd_345b3[32]; // 2891:4380
db dummyd_345d3[32]; // 2891:43a0
db dummyd_345f3[32]; // 2891:43c0
db dummyd_34613[32]; // 2891:43e0
db dummyd_34633[32]; // 2891:4400
db dummyd_34653[32]; // 2891:4420
db dummyd_34673[32]; // 2891:4440
db dummyd_34693[32]; // 2891:4460
db dummyd_346b3[32]; // 2891:4480
db dummyd_346d3[32]; // 2891:44a0
db dummyd_346f3[32]; // 2891:44c0
db dummyd_34713[32]; // 2891:44e0
db dummyd_34733[32]; // 2891:4500
db dummyd_34753[32]; // 2891:4520
db dummyd_34773[32]; // 2891:4540
db dummyd_34793[32]; // 2891:4560
db dummyd_347b3[32]; // 2891:4580
db dummyd_347d3[32]; // 2891:45a0
db dummyd_347f3[32]; // 2891:45c0
db dummyd_34813[32]; // 2891:45e0
db dummyd_34833[32]; // 2891:4600
db dummyd_34853[32]; // 2891:4620
db dummyd_34873[32]; // 2891:4640
db dummyd_34893[32]; // 2891:4660
db dummyd_348b3[32]; // 2891:4680
db dummyd_348d3[32]; // 2891:46a0
db dummyd_348f3[32]; // 2891:46c0
db dummyd_34913[32]; // 2891:46e0
db dummyd_34933[32]; // 2891:4700
db dummyd_34953[32]; // 2891:4720
db dummyd_34973[32]; // 2891:4740
db dummyd_34993[32]; // 2891:4760
db dummyd_349b3[32]; // 2891:4780
db dummyd_349d3[32]; // 2891:47a0
db dummyd_349f3[32]; // 2891:47c0
db dummyd_34a13[32]; // 2891:47e0
db dummyd_34a33[32]; // 2891:4800
db dummyd_34a53[32]; // 2891:4820
db dummyd_34a73[32]; // 2891:4840
db dummyd_34a93[32]; // 2891:4860
db dummyd_34ab3[32]; // 2891:4880
db dummyd_34ad3[32]; // 2891:48a0
db dummyd_34af3[32]; // 2891:48c0
db dummyd_34b13[32]; // 2891:48e0
db dummyd_34b33[32]; // 2891:4900
db dummyd_34b53[32]; // 2891:4920
db dummyd_34b73[32]; // 2891:4940
db dummyd_34b93[32]; // 2891:4960
db dummyd_34bb3[32]; // 2891:4980
db dummyd_34bd3[32]; // 2891:49a0
db dummyd_34bf3[32]; // 2891:49c0
db dummyd_34c13[32]; // 2891:49e0
db dummyd_34c33[32]; // 2891:4a00
db dummyd_34c53[32]; // 2891:4a20
db dummyd_34c73[32]; // 2891:4a40
db dummyd_34c93[32]; // 2891:4a60
db dummyd_34cb3[32]; // 2891:4a80
db dummyd_34cd3[32]; // 2891:4aa0
db dummyd_34cf3[32]; // 2891:4ac0
db dummyd_34d13[32]; // 2891:4ae0
db dummyd_34d33[32]; // 2891:4b00
db dummyd_34d53[32]; // 2891:4b20
db dummyd_34d73[32]; // 2891:4b40
db dummyd_34d93[32]; // 2891:4b60
db dummyd_34db3[32]; // 2891:4b80
db dummyd_34dd3[32]; // 2891:4ba0
db dummyd_34df3[32]; // 2891:4bc0
db dummyd_34e13[32]; // 2891:4be0
db dummyd_34e33[32]; // 2891:4c00
db dummyd_34e53[32]; // 2891:4c20
db dummyd_34e73[32]; // 2891:4c40
db dummyd_34e93[32]; // 2891:4c60
db dummyd_34eb3[32]; // 2891:4c80
db dummyd_34ed3[32]; // 2891:4ca0
db dummyd_34ef3[32]; // 2891:4cc0
db dummyd_34f13[32]; // 2891:4ce0
db dummyd_34f33[32]; // 2891:4d00
db dummyd_34f53[32]; // 2891:4d20
db dummyd_34f73[32]; // 2891:4d40
db dummyd_34f93[32]; // 2891:4d60
db dummyd_34fb3[32]; // 2891:4d80
db dummyd_34fd3[32]; // 2891:4da0
db dummyd_34ff3[32]; // 2891:4dc0
db dummyd_35013[32]; // 2891:4de0
db dummyd_35033[32]; // 2891:4e00
db dummyd_35053[32]; // 2891:4e20
db dummyd_35073[32]; // 2891:4e40
db dummyd_35093[32]; // 2891:4e60
db dummyd_350b3[32]; // 2891:4e80
db dummyd_350d3[32]; // 2891:4ea0
db dummyd_350f3[32]; // 2891:4ec0
db dummyd_35113[32]; // 2891:4ee0
db dummyd_35133[32]; // 2891:4f00
db dummyd_35153[32]; // 2891:4f20
db dummyd_35173[32]; // 2891:4f40
db dummyd_35193[32]; // 2891:4f60
db dummyd_351b3[32]; // 2891:4f80
db dummyd_351d3[32]; // 2891:4fa0
db dummyd_351f3[32]; // 2891:4fc0
db dummyd_35213[32]; // 2891:4fe0
db dummyd_35233[32]; // 2891:5000
db dummyd_35253[32]; // 2891:5020
db dummyd_35273[32]; // 2891:5040
db dummyd_35293[32]; // 2891:5060
db dummyd_352b3[32]; // 2891:5080
db dummyd_352d3[32]; // 2891:50a0
db dummyd_352f3[32]; // 2891:50c0
db dummyd_35313[32]; // 2891:50e0
db dummyd_35333[32]; // 2891:5100
db dummyd_35353[32]; // 2891:5120
db dummyd_35373[32]; // 2891:5140
db dummyd_35393[32]; // 2891:5160
db dummyd_353b3[32]; // 2891:5180
db dummyd_353d3[32]; // 2891:51a0
db dummyd_353f3[32]; // 2891:51c0
db dummyd_35413[32]; // 2891:51e0
db dummyd_35433[32]; // 2891:5200
db dummyd_35453[32]; // 2891:5220
db dummyd_35473[32]; // 2891:5240
db dummyd_35493[32]; // 2891:5260
db dummyd_354b3[32]; // 2891:5280
db dummyd_354d3[32]; // 2891:52a0
db dummyd_354f3[32]; // 2891:52c0
db dummyd_35513[32]; // 2891:52e0
db dummyd_35533[32]; // 2891:5300
db dummyd_35553[32]; // 2891:5320
db dummyd_35573[32]; // 2891:5340
db dummyd_35593[32]; // 2891:5360
db dummyd_355b3[32]; // 2891:5380
db dummyd_355d3[32]; // 2891:53a0
db dummyd_355f3[32]; // 2891:53c0
db dummyd_35613[32]; // 2891:53e0
db dummyd_35633[32]; // 2891:5400
db dummyd_35653[32]; // 2891:5420
db dummyd_35673[32]; // 2891:5440
db dummyd_35693[32]; // 2891:5460
db dummyd_356b3[32]; // 2891:5480
db dummyd_356d3[32]; // 2891:54a0
db dummyd_356f3[32]; // 2891:54c0
db dummyd_35713[32]; // 2891:54e0
db dummyd_35733[32]; // 2891:5500
db dummyd_35753[32]; // 2891:5520
db dummyd_35773[32]; // 2891:5540
db dummyd_35793[32]; // 2891:5560
db dummyd_357b3[32]; // 2891:5580
db dummyd_357d3[32]; // 2891:55a0
db dummyd_357f3[32]; // 2891:55c0
db dummyd_35813[32]; // 2891:55e0
db dummyd_35833[32]; // 2891:5600
db dummyd_35853[32]; // 2891:5620
db dummyd_35873[32]; // 2891:5640
db dummyd_35893[32]; // 2891:5660
db dummyd_358b3[32]; // 2891:5680
db dummyd_358d3[32]; // 2891:56a0
db dummyd_358f3[32]; // 2891:56c0
db dummyd_35913[32]; // 2891:56e0
db dummyd_35933[32]; // 2891:5700
db dummyd_35953[32]; // 2891:5720
db dummyd_35973[32]; // 2891:5740
db dummyd_35993[32]; // 2891:5760
db dummyd_359b3[32]; // 2891:5780
db dummyd_359d3[32]; // 2891:57a0
db dummyd_359f3[32]; // 2891:57c0
db dummyd_35a13[32]; // 2891:57e0
db dummyd_35a33[32]; // 2891:5800
db dummyd_35a53[32]; // 2891:5820
db dummyd_35a73[32]; // 2891:5840
db dummyd_35a93[32]; // 2891:5860
db dummyd_35ab3[32]; // 2891:5880
db dummyd_35ad3[32]; // 2891:58a0
db dummyd_35af3[32]; // 2891:58c0
db dummyd_35b13[32]; // 2891:58e0
db dummyd_35b33[32]; // 2891:5900
db dummyd_35b53[32]; // 2891:5920
db dummyd_35b73[32]; // 2891:5940
db dummyd_35b93[32]; // 2891:5960
db dummyd_35bb3[32]; // 2891:5980
db dummyd_35bd3[32]; // 2891:59a0
db dummyd_35bf3[32]; // 2891:59c0
db dummyd_35c13[32]; // 2891:59e0
db dummyd_35c33[32]; // 2891:5a00
db dummyd_35c53[32]; // 2891:5a20
db dummyd_35c73[32]; // 2891:5a40
db dummyd_35c93[32]; // 2891:5a60
db dummyd_35cb3[32]; // 2891:5a80
db dummyd_35cd3[32]; // 2891:5aa0
db dummyd_35cf3[32]; // 2891:5ac0
db dummyd_35d13[32]; // 2891:5ae0
db dummyd_35d33[32]; // 2891:5b00
db dummyd_35d53[32]; // 2891:5b20
db dummyd_35d73[32]; // 2891:5b40
db dummyd_35d93[32]; // 2891:5b60
db dummyd_35db3[32]; // 2891:5b80
db dummyd_35dd3[32]; // 2891:5ba0
db dummyd_35df3[32]; // 2891:5bc0
db dummyd_35e13[32]; // 2891:5be0
db dummyd_35e33[32]; // 2891:5c00
db dummyd_35e53[32]; // 2891:5c20
db dummyd_35e73[32]; // 2891:5c40
db dummyd_35e93[32]; // 2891:5c60
db dummyd_35eb3[32]; // 2891:5c80
db dummyd_35ed3[32]; // 2891:5ca0
db dummyd_35ef3[32]; // 2891:5cc0
db dummyd_35f13[32]; // 2891:5ce0
db dummyd_35f33[32]; // 2891:5d00
db dummyd_35f53[32]; // 2891:5d20
db dummyd_35f73[32]; // 2891:5d40
db dummyd_35f93[32]; // 2891:5d60
db dummyd_35fb3[32]; // 2891:5d80
db dummyd_35fd3[32]; // 2891:5da0
db dummyd_35ff3[32]; // 2891:5dc0
db dummyd_36013[32]; // 2891:5de0
db dummyd_36033[32]; // 2891:5e00
db dummyd_36053[32]; // 2891:5e20
db dummyd_36073[32]; // 2891:5e40
db dummyd_36093[32]; // 2891:5e60
db dummyd_360b3[32]; // 2891:5e80
db dummyd_360d3[32]; // 2891:5ea0
db dummyd_360f3[32]; // 2891:5ec0
db dummyd_36113[32]; // 2891:5ee0
db dummyd_36133[32]; // 2891:5f00
db dummyd_36153[32]; // 2891:5f20
db dummyd_36173[32]; // 2891:5f40
db dummyd_36193[32]; // 2891:5f60
db dummyd_361b3[32]; // 2891:5f80
db dummyd_361d3[32]; // 2891:5fa0
db dummyd_361f3[32]; // 2891:5fc0
db dummyd_36213[32]; // 2891:5fe0
db dummyd_36233[32]; // 2891:6000
db dummyd_36253[32]; // 2891:6020
db dummyd_36273[32]; // 2891:6040
db dummyd_36293[32]; // 2891:6060
db dummyd_362b3[32]; // 2891:6080
db dummyd_362d3[32]; // 2891:60a0
db dummyd_362f3[32]; // 2891:60c0
db dummyd_36313[32]; // 2891:60e0
db dummyd_36333[32]; // 2891:6100
db dummyd_36353[32]; // 2891:6120
db dummyd_36373[32]; // 2891:6140
db dummyd_36393[32]; // 2891:6160
db dummyd_363b3[32]; // 2891:6180
db dummyd_363d3[32]; // 2891:61a0
db dummyd_363f3[32]; // 2891:61c0
db dummyd_36413[32]; // 2891:61e0
db dummyd_36433[32]; // 2891:6200
db dummyd_36453[32]; // 2891:6220
db dummyd_36473[32]; // 2891:6240
db dummyd_36493[32]; // 2891:6260
db dummyd_364b3[32]; // 2891:6280
db dummyd_364d3[32]; // 2891:62a0
db dummyd_364f3[32]; // 2891:62c0
db dummyd_36513[32]; // 2891:62e0
db dummyd_36533[32]; // 2891:6300
db dummyd_36553[32]; // 2891:6320
db dummyd_36573[32]; // 2891:6340
db dummyd_36593[32]; // 2891:6360
db dummyd_365b3[32]; // 2891:6380
db dummyd_365d3[32]; // 2891:63a0
db dummyd_365f3[32]; // 2891:63c0
db dummyd_36613[32]; // 2891:63e0
db dummyd_36633[32]; // 2891:6400
db dummyd_36653[32]; // 2891:6420
db dummyd_36673[32]; // 2891:6440
db dummyd_36693[32]; // 2891:6460
db dummyd_366b3[32]; // 2891:6480
db dummyd_366d3[32]; // 2891:64a0
db dummyd_366f3[32]; // 2891:64c0
db dummyd_36713[32]; // 2891:64e0
db dummyd_36733[32]; // 2891:6500
db dummyd_36753[32]; // 2891:6520
db dummyd_36773[32]; // 2891:6540
db dummyd_36793[32]; // 2891:6560
db dummyd_367b3[32]; // 2891:6580
db dummyd_367d3[32]; // 2891:65a0
db dummyd_367f3[32]; // 2891:65c0
db dummyd_36813[32]; // 2891:65e0
db dummyd_36833[32]; // 2891:6600
db dummyd_36853[32]; // 2891:6620
db dummyd_36873[32]; // 2891:6640
db dummyd_36893[32]; // 2891:6660
db dummyd_368b3[32]; // 2891:6680
db dummyd_368d3[32]; // 2891:66a0
db dummyd_368f3[32]; // 2891:66c0
db dummyd_36913[32]; // 2891:66e0
db dummyd_36933[32]; // 2891:6700
db dummyd_36953[32]; // 2891:6720
db dummyd_36973[32]; // 2891:6740
db dummyd_36993[32]; // 2891:6760
db dummyd_369b3[32]; // 2891:6780
db dummyd_369d3[32]; // 2891:67a0
db dummyd_369f3[32]; // 2891:67c0
db dummyd_36a13[32]; // 2891:67e0
db dummyd_36a33[32]; // 2891:6800
db dummyd_36a53[32]; // 2891:6820
db dummyd_36a73[32]; // 2891:6840
db dummyd_36a93[32]; // 2891:6860
db dummyd_36ab3[32]; // 2891:6880
db dummyd_36ad3[32]; // 2891:68a0
db dummyd_36af3[32]; // 2891:68c0
db dummyd_36b13[32]; // 2891:68e0
db dummyd_36b33[32]; // 2891:6900
db dummyd_36b53[32]; // 2891:6920
db dummyd_36b73[32]; // 2891:6940
db dummyd_36b93[32]; // 2891:6960
db dummyd_36bb3[32]; // 2891:6980
db dummyd_36bd3[32]; // 2891:69a0
db dummyd_36bf3[32]; // 2891:69c0
db dummyd_36c13[32]; // 2891:69e0
db dummyd_36c33[32]; // 2891:6a00
db dummyd_36c53[32]; // 2891:6a20
db dummyd_36c73[32]; // 2891:6a40
db dummyd_36c93[32]; // 2891:6a60
db dummyd_36cb3[32]; // 2891:6a80
db dummyd_36cd3[32]; // 2891:6aa0
db dummyd_36cf3[32]; // 2891:6ac0
db dummyd_36d13[32]; // 2891:6ae0
db dummyd_36d33[32]; // 2891:6b00
db dummyd_36d53[32]; // 2891:6b20
db dummyd_36d73[32]; // 2891:6b40
db dummyd_36d93[32]; // 2891:6b60
db dummyd_36db3[32]; // 2891:6b80
db dummyd_36dd3[32]; // 2891:6ba0
db dummyd_36df3[32]; // 2891:6bc0
db dummyd_36e13[32]; // 2891:6be0
db dummyd_36e33[32]; // 2891:6c00
db dummyd_36e53[32]; // 2891:6c20
db dummyd_36e73[32]; // 2891:6c40
db dummyd_36e93[32]; // 2891:6c60
db dummyd_36eb3[32]; // 2891:6c80
db dummyd_36ed3[32]; // 2891:6ca0
db dummyd_36ef3[32]; // 2891:6cc0
db dummyd_36f13[32]; // 2891:6ce0
db dummyd_36f33[32]; // 2891:6d00
db dummyd_36f53[32]; // 2891:6d20
db dummyd_36f73[32]; // 2891:6d40
db dummyd_36f93[32]; // 2891:6d60
db dummyd_36fb3[32]; // 2891:6d80
db dummyd_36fd3[32]; // 2891:6da0
db dummyd_36ff3[32]; // 2891:6dc0
db dummyd_37013[32]; // 2891:6de0
db dummyd_37033[32]; // 2891:6e00
db dummyd_37053[32]; // 2891:6e20
db dummyd_37073[32]; // 2891:6e40
db dummyd_37093[32]; // 2891:6e60
db dummyd_370b3[32]; // 2891:6e80
db dummyd_370d3[32]; // 2891:6ea0
db dummyd_370f3[32]; // 2891:6ec0
db dummyd_37113[32]; // 2891:6ee0
db dummyd_37133[32]; // 2891:6f00
db dummyd_37153[32]; // 2891:6f20
db dummyd_37173[32]; // 2891:6f40
db dummyd_37193[32]; // 2891:6f60
db dummyd_371b3[32]; // 2891:6f80
db dummyd_371d3[32]; // 2891:6fa0
db dummyd_371f3[32]; // 2891:6fc0
db dummyd_37213[32]; // 2891:6fe0
db dummyd_37233[32]; // 2891:7000
db dummyd_37253[32]; // 2891:7020
db dummyd_37273[32]; // 2891:7040
db dummyd_37293[32]; // 2891:7060
db dummyd_372b3[32]; // 2891:7080
db dummyd_372d3[32]; // 2891:70a0
db dummyd_372f3[32]; // 2891:70c0
db dummyd_37313[32]; // 2891:70e0
db dummyd_37333[32]; // 2891:7100
db dummyd_37353[32]; // 2891:7120
db dummyd_37373[32]; // 2891:7140
db dummyd_37393[32]; // 2891:7160
db dummyd_373b3[32]; // 2891:7180
db dummyd_373d3[32]; // 2891:71a0
db dummyd_373f3[32]; // 2891:71c0
db dummyd_37413[32]; // 2891:71e0
db dummyd_37433[32]; // 2891:7200
db dummyd_37453[32]; // 2891:7220
db dummyd_37473[32]; // 2891:7240
db dummyd_37493[32]; // 2891:7260
db dummyd_374b3[32]; // 2891:7280
db dummyd_374d3[32]; // 2891:72a0
db dummyd_374f3[32]; // 2891:72c0
db dummyd_37513[32]; // 2891:72e0
db dummyd_37533[32]; // 2891:7300
db dummyd_37553[32]; // 2891:7320
db dummyd_37573[32]; // 2891:7340
db dummyd_37593[32]; // 2891:7360
db dummyd_375b3[32]; // 2891:7380
db dummyd_375d3[32]; // 2891:73a0
db dummyd_375f3[32]; // 2891:73c0
db dummyd_37613[32]; // 2891:73e0
db dummyd_37633[32]; // 2891:7400
db dummyd_37653[32]; // 2891:7420
db dummyd_37673[32]; // 2891:7440
db dummyd_37693[32]; // 2891:7460
db dummyd_376b3[32]; // 2891:7480
db dummyd_376d3[32]; // 2891:74a0
db dummyd_376f3[32]; // 2891:74c0
db dummyd_37713[32]; // 2891:74e0
db dummyd_37733[32]; // 2891:7500
db dummyd_37753[32]; // 2891:7520
db dummyd_37773[32]; // 2891:7540
db dummyd_37793[32]; // 2891:7560
db dummyd_377b3[32]; // 2891:7580
db dummyd_377d3[32]; // 2891:75a0
db dummyd_377f3[32]; // 2891:75c0
db dummyd_37813[32]; // 2891:75e0
db dummyd_37833[32]; // 2891:7600
db dummyd_37853[32]; // 2891:7620
db dummyd_37873[32]; // 2891:7640
db dummyd_37893[32]; // 2891:7660
db dummyd_378b3[32]; // 2891:7680
db dummyd_378d3[32]; // 2891:76a0
db dummyd_378f3[32]; // 2891:76c0
db dummyd_37913[32]; // 2891:76e0
db dummyd_37933[32]; // 2891:7700
db dummyd_37953[32]; // 2891:7720
db dummyd_37973[32]; // 2891:7740
db dummyd_37993[32]; // 2891:7760
db dummyd_379b3[32]; // 2891:7780
db dummyd_379d3[32]; // 2891:77a0
db dummyd_379f3[32]; // 2891:77c0
db dummyd_37a13[32]; // 2891:77e0
db dummyd_37a33[32]; // 2891:7800
db dummyd_37a53[32]; // 2891:7820
db dummyd_37a73[32]; // 2891:7840
db dummyd_37a93[32]; // 2891:7860
db dummyd_37ab3[32]; // 2891:7880
db dummyd_37ad3[32]; // 2891:78a0
db dummyd_37af3[32]; // 2891:78c0
db dummyd_37b13[32]; // 2891:78e0
db dummyd_37b33[32]; // 2891:7900
db dummyd_37b53[32]; // 2891:7920
db dummyd_37b73[32]; // 2891:7940
db dummyd_37b93[32]; // 2891:7960
db dummyd_37bb3[32]; // 2891:7980
db dummyd_37bd3[32]; // 2891:79a0
db dummyd_37bf3[32]; // 2891:79c0
db dummyd_37c13[32]; // 2891:79e0
db dummyd_37c33[32]; // 2891:7a00
db dummyd_37c53[32]; // 2891:7a20
db dummyd_37c73[32]; // 2891:7a40
db dummyd_37c93[32]; // 2891:7a60
db dummyd_37cb3[32]; // 2891:7a80
db dummyd_37cd3[32]; // 2891:7aa0
db dummyd_37cf3[32]; // 2891:7ac0
db dummyd_37d13[32]; // 2891:7ae0
db dummyd_37d33[32]; // 2891:7b00
db dummyd_37d53[32]; // 2891:7b20
db dummyd_37d73[32]; // 2891:7b40
db dummyd_37d93[32]; // 2891:7b60
db dummyd_37db3[32]; // 2891:7b80
db dummyd_37dd3[32]; // 2891:7ba0
db dummyd_37df3[32]; // 2891:7bc0
db dummyd_37e13[32]; // 2891:7be0
db dummyd_37e33[32]; // 2891:7c00
db dummyd_37e53[32]; // 2891:7c20
db dummyd_37e73[32]; // 2891:7c40
db dummyd_37e93[32]; // 2891:7c60
db dummyd_37eb3[32]; // 2891:7c80
db dummyd_37ed3[32]; // 2891:7ca0
db dummyd_37ef3[32]; // 2891:7cc0
db dummyd_37f13[32]; // 2891:7ce0
db dummyd_37f33[32]; // 2891:7d00
db dummyd_37f53[32]; // 2891:7d20
db dummyd_37f73[32]; // 2891:7d40
db dummyd_37f93[32]; // 2891:7d60
db dummyd_37fb3[32]; // 2891:7d80
db dummyd_37fd3[32]; // 2891:7da0
db dummyd_37ff3[32]; // 2891:7dc0
db dummyd_38013[32]; // 2891:7de0
db dummyd_38033[32]; // 2891:7e00
db dummyd_38053[32]; // 2891:7e20
db dummyd_38073[32]; // 2891:7e40
db dummyd_38093[32]; // 2891:7e60
db dummyd_380b3[32]; // 2891:7e80
db dummyd_380d3[32]; // 2891:7ea0
db dummyd_380f3[32]; // 2891:7ec0
db dummyd_38113[32]; // 2891:7ee0
db dummyd_38133[32]; // 2891:7f00
db dummyd_38153[32]; // 2891:7f20
db dummyd_38173[32]; // 2891:7f40
db dummyd_38193[32]; // 2891:7f60
db dummyd_381b3[32]; // 2891:7f80
db dummyd_381d3[32]; // 2891:7fa0
db dummyd_381f3[32]; // 2891:7fc0
db dummyd_38213[32]; // 2891:7fe0
db dummyd_38233[32]; // 2891:8000
db dummyd_38253[32]; // 2891:8020
db dummyd_38273[32]; // 2891:8040
db dummyd_38293[32]; // 2891:8060
db dummyd_382b3[32]; // 2891:8080
db dummyd_382d3[32]; // 2891:80a0
db dummyd_382f3[32]; // 2891:80c0
db dummyd_38313[32]; // 2891:80e0
db dummyd_38333[32]; // 2891:8100
db dummyd_38353[32]; // 2891:8120
db dummyd_38373[32]; // 2891:8140
db dummyd_38393[32]; // 2891:8160
db dummyd_383b3[32]; // 2891:8180
db dummyd_383d3[32]; // 2891:81a0
db dummyd_383f3[32]; // 2891:81c0
db dummyd_38413[32]; // 2891:81e0
db dummyd_38433[32]; // 2891:8200
db dummyd_38453[32]; // 2891:8220
db dummyd_38473[32]; // 2891:8240
db dummyd_38493[32]; // 2891:8260
db dummyd_384b3[32]; // 2891:8280
db dummyd_384d3[32]; // 2891:82a0
db dummyd_384f3[32]; // 2891:82c0
db dummyd_38513[32]; // 2891:82e0
db dummyd_38533[32]; // 2891:8300
db dummyd_38553[32]; // 2891:8320
db dummyd_38573[32]; // 2891:8340
db dummyd_38593[32]; // 2891:8360
db dummyd_385b3[32]; // 2891:8380
db dummyd_385d3[32]; // 2891:83a0
db dummyd_385f3[32]; // 2891:83c0
db dummyd_38613[32]; // 2891:83e0
db dummyd_38633[32]; // 2891:8400
db dummyd_38653[32]; // 2891:8420
db dummyd_38673[32]; // 2891:8440
db dummyd_38693[32]; // 2891:8460
db dummyd_386b3[32]; // 2891:8480
db dummyd_386d3[32]; // 2891:84a0
db dummyd_386f3[32]; // 2891:84c0
db dummyd_38713[32]; // 2891:84e0
db dummyd_38733[32]; // 2891:8500
db dummyd_38753[32]; // 2891:8520
db dummyd_38773[32]; // 2891:8540
db dummyd_38793[32]; // 2891:8560
db dummyd_387b3[32]; // 2891:8580
db dummyd_387d3[32]; // 2891:85a0
db dummyd_387f3[32]; // 2891:85c0
db dummyd_38813[32]; // 2891:85e0
db dummyd_38833[32]; // 2891:8600
db dummyd_38853[32]; // 2891:8620
db dummyd_38873[32]; // 2891:8640
db dummyd_38893[32]; // 2891:8660
db dummyd_388b3[32]; // 2891:8680
db dummyd_388d3[32]; // 2891:86a0
db dummyd_388f3[32]; // 2891:86c0
db dummyd_38913[32]; // 2891:86e0
db dummyd_38933[32]; // 2891:8700
db dummyd_38953[32]; // 2891:8720
db dummyd_38973[32]; // 2891:8740
db dummyd_38993[32]; // 2891:8760
db dummyd_389b3[32]; // 2891:8780
db dummyd_389d3[32]; // 2891:87a0
db dummyd_389f3[32]; // 2891:87c0
db dummyd_38a13[32]; // 2891:87e0
db dummyd_38a33[32]; // 2891:8800
db dummyd_38a53[32]; // 2891:8820
db dummyd_38a73[32]; // 2891:8840
db dummyd_38a93[32]; // 2891:8860
db dummyd_38ab3[32]; // 2891:8880
db dummyd_38ad3[32]; // 2891:88a0
db dummyd_38af3[32]; // 2891:88c0
db dummyd_38b13[32]; // 2891:88e0
db dummyd_38b33[32]; // 2891:8900
db dummyd_38b53[32]; // 2891:8920
db dummyd_38b73[32]; // 2891:8940
db dummyd_38b93[32]; // 2891:8960
db dummyd_38bb3[32]; // 2891:8980
db dummyd_38bd3[32]; // 2891:89a0
db dummyd_38bf3[32]; // 2891:89c0
db dummyd_38c13[32]; // 2891:89e0
db dummyd_38c33[32]; // 2891:8a00
db dummyd_38c53[32]; // 2891:8a20
db dummyd_38c73[32]; // 2891:8a40
db dummyd_38c93[32]; // 2891:8a60
db dummyd_38cb3[32]; // 2891:8a80
db dummyd_38cd3[32]; // 2891:8aa0
db dummyd_38cf3[32]; // 2891:8ac0
db dummyd_38d13[32]; // 2891:8ae0
db dummyd_38d33[32]; // 2891:8b00
db dummyd_38d53[32]; // 2891:8b20
db dummyd_38d73[32]; // 2891:8b40
db dummyd_38d93[32]; // 2891:8b60
db dummyd_38db3[32]; // 2891:8b80
db dummyd_38dd3[32]; // 2891:8ba0
db dummyd_38df3[32]; // 2891:8bc0
db dummyd_38e13[32]; // 2891:8be0
db dummyd_38e33[32]; // 2891:8c00
db dummyd_38e53[32]; // 2891:8c20
db dummyd_38e73[32]; // 2891:8c40
db dummyd_38e93[32]; // 2891:8c60
db dummyd_38eb3[32]; // 2891:8c80
db dummyd_38ed3[32]; // 2891:8ca0
db dummyd_38ef3[32]; // 2891:8cc0
db dummyd_38f13[32]; // 2891:8ce0
db dummyd_38f33[32]; // 2891:8d00
db dummyd_38f53[32]; // 2891:8d20
db dummyd_38f73[32]; // 2891:8d40
db dummyd_38f93[32]; // 2891:8d60
db dummyd_38fb3[32]; // 2891:8d80
db dummyd_38fd3[32]; // 2891:8da0
db dummyd_38ff3[32]; // 2891:8dc0
db dummyd_39013[32]; // 2891:8de0
db dummyd_39033[32]; // 2891:8e00
db dummyd_39053[32]; // 2891:8e20
db dummyd_39073[32]; // 2891:8e40
db dummyd_39093[32]; // 2891:8e60
db dummyd_390b3[32]; // 2891:8e80
db dummyd_390d3[32]; // 2891:8ea0
db dummyd_390f3[32]; // 2891:8ec0
db dummyd_39113[32]; // 2891:8ee0
db dummyd_39133[32]; // 2891:8f00
db dummyd_39153[32]; // 2891:8f20
db dummyd_39173[32]; // 2891:8f40
db dummyd_39193[32]; // 2891:8f60
db dummyd_391b3[32]; // 2891:8f80
db dummyd_391d3[32]; // 2891:8fa0
db dummyd_391f3[32]; // 2891:8fc0
db dummyd_39213[32]; // 2891:8fe0
db dummyd_39233[32]; // 2891:9000
db dummyd_39253[32]; // 2891:9020
db dummyd_39273[32]; // 2891:9040
db dummyd_39293[32]; // 2891:9060
db dummyd_392b3[32]; // 2891:9080
db dummyd_392d3[32]; // 2891:90a0
db dummyd_392f3[32]; // 2891:90c0
db dummyd_39313[32]; // 2891:90e0
db dummyd_39333[32]; // 2891:9100
db dummyd_39353[32]; // 2891:9120
db dummyd_39373[32]; // 2891:9140
db dummyd_39393[32]; // 2891:9160
db dummyd_393b3[32]; // 2891:9180
db dummyd_393d3[32]; // 2891:91a0
db dummyd_393f3[32]; // 2891:91c0
db dummyd_39413[32]; // 2891:91e0
db dummyd_39433[32]; // 2891:9200
db dummyd_39453[32]; // 2891:9220
db dummyd_39473[32]; // 2891:9240
db dummyd_39493[32]; // 2891:9260
db dummyd_394b3[32]; // 2891:9280
db dummyd_394d3[32]; // 2891:92a0
db dummyd_394f3[32]; // 2891:92c0
db dummyd_39513[32]; // 2891:92e0
db dummyd_39533[32]; // 2891:9300
db dummyd_39553[32]; // 2891:9320
db dummyd_39573[32]; // 2891:9340
db dummyd_39593[32]; // 2891:9360
db dummyd_395b3[32]; // 2891:9380
db dummyd_395d3[32]; // 2891:93a0
db dummyd_395f3[32]; // 2891:93c0
db dummyd_39613[32]; // 2891:93e0
db dummyd_39633[32]; // 2891:9400
db dummyd_39653[32]; // 2891:9420
db dummyd_39673[32]; // 2891:9440
db dummyd_39693[32]; // 2891:9460
db dummyd_396b3[32]; // 2891:9480
db dummyd_396d3[32]; // 2891:94a0
db dummyd_396f3[32]; // 2891:94c0
db dummyd_39713[32]; // 2891:94e0
db dummyd_39733[32]; // 2891:9500
db dummyd_39753[32]; // 2891:9520
db dummyd_39773[32]; // 2891:9540
db dummyd_39793[32]; // 2891:9560
db dummyd_397b3[32]; // 2891:9580
db dummyd_397d3[32]; // 2891:95a0
db dummyd_397f3[32]; // 2891:95c0
db dummyd_39813[32]; // 2891:95e0
db dummyd_39833[32]; // 2891:9600
db dummyd_39853[32]; // 2891:9620
db dummyd_39873[32]; // 2891:9640
db dummyd_39893[32]; // 2891:9660
db dummyd_398b3[32]; // 2891:9680
db dummyd_398d3[32]; // 2891:96a0
db dummyd_398f3[32]; // 2891:96c0
db dummyd_39913[32]; // 2891:96e0
db dummyd_39933[32]; // 2891:9700
db dummyd_39953[32]; // 2891:9720
db dummyd_39973[32]; // 2891:9740
db dummyd_39993[32]; // 2891:9760
db dummyd_399b3[32]; // 2891:9780
db dummyd_399d3[32]; // 2891:97a0
db dummyd_399f3[32]; // 2891:97c0
db dummyd_39a13[32]; // 2891:97e0
db dummyd_39a33[32]; // 2891:9800
db dummyd_39a53[32]; // 2891:9820
db dummyd_39a73[32]; // 2891:9840
db dummyd_39a93[32]; // 2891:9860
db dummyd_39ab3[32]; // 2891:9880
db dummyd_39ad3[32]; // 2891:98a0
db dummyd_39af3[32]; // 2891:98c0
db dummyd_39b13[32]; // 2891:98e0
db dummyd_39b33[32]; // 2891:9900
db dummyd_39b53[32]; // 2891:9920
db dummyd_39b73[32]; // 2891:9940
db dummyd_39b93[32]; // 2891:9960
db dummyd_39bb3[32]; // 2891:9980
db dummyd_39bd3[32]; // 2891:99a0
db dummyd_39bf3[32]; // 2891:99c0
db dummyd_39c13[32]; // 2891:99e0
db dummyd_39c33[32]; // 2891:9a00
db dummyd_39c53[32]; // 2891:9a20
db dummyd_39c73[32]; // 2891:9a40
db dummyd_39c93[32]; // 2891:9a60
db dummyd_39cb3[32]; // 2891:9a80
db dummyd_39cd3[32]; // 2891:9aa0
db dummyd_39cf3[32]; // 2891:9ac0
db dummyd_39d13[32]; // 2891:9ae0
db dummyd_39d33[32]; // 2891:9b00
db dummyd_39d53[32]; // 2891:9b20
db dummyd_39d73[32]; // 2891:9b40
db dummyd_39d93[32]; // 2891:9b60
db dummyd_39db3[32]; // 2891:9b80
db dummyd_39dd3[32]; // 2891:9ba0
db dummyd_39df3[32]; // 2891:9bc0
db dummyd_39e13[32]; // 2891:9be0
db dummyd_39e33[32]; // 2891:9c00
db dummyd_39e53[32]; // 2891:9c20
db dummyd_39e73;
db dummyd_39e74;
db dummyd_39e75;
db dummyd_39e76;
db dummyd_39e77;
db dummyd_39e78;
db dummyd_39e79;
db dummyd_39e7a;
db dummyd_39e7b;
db dummyd_39e7c;
db dummyd_39e7d;
db dummyd_39e7e;
db dummyd_39e7f;
db dummyd_39e80;
db dummyd_39e81;
db dummyd_39e82;
db byte_4a460; // 2b76:0000
db dummyd_39e84;
db dummyd_39e85;
db dummyd_39e86;
db dummyd_39e87;
db dummyd_39e88;
db dummyd_39e89;
db dummyd_39e8a;
db dummyd_39e8b;
db dummyd_39e8c;
db dummyd_39e8d;
db dummyd_39e8e;
db dummyd_39e8f;
db dummyd_39e90;
db dummyd_39e91;
db dummyd_39e92;
db byte_4a48c; // 2b76:002c
db dummyd_39e94[32]; // 2b76:002d
db dummyd_39eb4[32]; // 2b76:004d
db dummyd_39ed4[32]; // 2b76:006d
db dummyd_39ef4[32]; // 2b76:008d
db dummyd_39f14[32]; // 2b76:00ad
db dummyd_39f34[32]; // 2b76:00cd
db dummyd_39f54[32]; // 2b76:00ed
db dummyd_39f74[32]; // 2b76:010d
db dummyd_39f94[32]; // 2b76:012d
db dummyd_39fb4[32]; // 2b76:014d
db dummyd_39fd4[32]; // 2b76:016d
db dummyd_39ff4; // 2b76:018d
db dummyd_39ff5; // 2b76:018e
db dummyd_39ff6; // 2b76:018f
db dummyd_39ff7; // 2b76:0190
db dummyd_39ff8; // 2b76:0191
db dummyd_39ff9; // 2b76:0192
db dummyd_39ffa;
db dummyd_39ffb; // 2b76:0194
db dummyd_39ffc; // 2b76:0195
db dummyd_39ffd; // 2b76:0196
db dummyd_39ffe; // 2b76:0197
db dummyd_39fff; // 2b76:0198
db dummyd_3a000; // 2b76:0199
db dummyd_3a001; // 2b76:019a
db dummyd_3a002; // 2b76:019b
db dummyd_3a003; // 2b76:019c
db dummyd_3a004; // 2b76:019d
db dummyd_3a005; // 2b76:019e
db dummyd_3a006; // 2b76:019f
db dummyd_3a007;
db dummyd_3a008; // 2b76:01a2
db dummyd_3a009; // 2b76:01a3
db dummyd_3a00a; // 2b76:01a4
db dummyd_3a00b; // 2b76:01a5
db dummyd_3a00c[32]; // 2b76:01e0
db dummyd_3a02c; // 2b76:0200
db dummyd_3a02d; // 2b76:0201
db dummyd_3a02e; // 2b76:0202
db dummyd_3a02f; // 2b76:0203
db dummyd_3a030; // 2b76:0204
db dummyd_3a031; // 2b76:0205
db dummyd_3a032; // 2b76:0206
db dummyd_3a033;
db dummyd_3a034; // 2b76:0212
db dummyd_3a035; // 2b76:0213
db dummyd_3a036; // 2b76:0214
db dummyd_3a037; // 2b76:0215
db dummyd_3a038;
db dummyd_3a039; // 2b76:0276
db dummyd_3a03a;
db dummyd_3a03b; // 2b76:027f
db dummyd_3a03c;
db dummyd_3a03d[32]; // 2b76:0282
db dummyd_3a05d[32]; // 2b76:02a2
db dummyd_3a07d[32]; // 2b76:02c2
db dummyd_3a09d[32]; // 2b76:02e2
db dummyd_3a0bd[32]; // 2b76:0302
db dummyd_3a0dd[32]; // 2b76:0322
db dummyd_3a0fd[32]; // 2b76:0342
db dummyd_3a11d; // 2b76:0362
db dummyd_3a11e; // 2b76:0363
db dummyd_3a11f; // 2b76:0364
db dummyd_3a120;
db dummyd_3a121; // 2b76:0366
db dummyd_3a122; // 2b76:0367
db dummyd_3a123; // 2b76:0368
db dummyd_3a124; // 2b76:0369
db dummyd_3a125; // 2b76:036a
db dummyd_3a126; // 2b76:036b
db dummyd_3a127; // 2b76:036c
db dummyd_3a128; // 2b76:036d
db dummyd_3a129; // 2b76:036e
db dummyd_3a12a; // 2b76:036f
db dummyd_3a12b; // 2b76:0370
db dummyd_3a12c; // 2b76:0371
db dummyd_3a12d; // 2b76:0372
db dummyd_3a12e; // 2b76:0373
db dummyd_3a12f; // 2b76:0374
db dummyd_3a130; // 2b76:0375
db dummyd_3a131; // 2b76:0376
db dummyd_3a132; // 2b76:0377
db dummyd_3a133; // 2b76:0378
db dummyd_3a134; // 2b76:0379
db dummyd_3a135; // 2b76:03f2
db dummyd_3a136; // 2b76:03f3
db dummyd_3a137; // 2b76:03f4
db dummyd_3a138; // 2b76:03f5
db dummyd_3a139;
db dummyd_3a13a; // 2b76:03f7
db dummyd_3a13b; // 2b76:03f8
db dummyd_3a13c; // 2b76:03f9
db dummyd_3a13d; // 2b76:03fa
db dummyd_3a13e; // 2b76:03fb
db dummyd_3a13f; // 2b76:03fc
db dummyd_3a140; // 2b76:03fd
db dummyd_3a141;
db dummyd_3a142; // 2b76:03ff
db dummyd_3a143; // 2b76:0400
db dummyd_3a144; // 2b76:0401
db dummyd_3a145; // 2b76:0402
db dummyd_3a146; // 2b76:0403
db dummyd_3a147; // 2b76:0404
db dummyd_3a148; // 2b76:0405
db dummyd_3a149; // 2b76:0406
db dummyd_3a14a[32]; // 2b76:0440
db dummyd_3a16a[32]; // 2b76:0460
db dummyd_3a18a; // 2b76:0480
db dummyd_3a18b;
db dummyd_3a18c; // 2b76:0482
db dummyd_3a18d; // 2b76:0483
db dummyd_3a18e; // 2b76:0484
db dummyd_3a18f; // 2b76:0485
db dummyd_3a190; // 2b76:0486
db dummyd_3a191; // 2b76:0487
db dummyd_3a192; // 2b76:0488
db dummyd_3a193; // 2b76:0489
db dummyd_3a194; // 2b76:048a
db dummyd_3a195; // 2b76:048b
db dummyd_3a196; // 2b76:048c
db dummyd_3a197; // 2b76:048d
db dummyd_3a198; // 2b76:048e
db dummyd_3a199; // 2b76:048f
db dummyd_3a19a[32]; // 2b76:04e4
db dummyd_3a1ba[32]; // 2b76:0504
db dummyd_3a1da; // 2b76:0524
db dummyd_3a1db; // 2b76:0525
db dummyd_3a1dc; // 2b76:0526
db dummyd_3a1dd; // 2b76:0527
db dummyd_3a1de; // 2b76:0528
db dummyd_3a1df; // 2b76:0529
db dummyd_3a1e0; // 2b76:052a
db dummyd_3a1e1; // 2b76:052b
db dummyd_3a1e2; // 2b76:052c
db dummyd_3a1e3; // 2b76:052d
db dummyd_3a1e4; // 2b76:052e
db dummyd_3a1e5; // 2b76:052f
db dummyd_3a1e6; // 2b76:0530
db dummyd_3a1e7; // 2b76:0531
db dummyd_3a1e8; // 2b76:0532
db dummyd_3a1e9; // 2b76:05cb
db dummyd_3a1ea; // 2b76:05d0
db dummyd_3a1eb; // 2b76:05ea
db dummyd_3a1ec[32]; // 2b76:0682
db dummyd_3a20c[32]; // 2b76:06a2
db dummyd_3a22c; // 2b76:06c2
db dummyd_3a22d; // 2b76:06c3
db dummyd_3a22e; // 2b76:06c4
db dummyd_3a22f;
db dummyd_3a230; // 2b76:06c6
db dummyd_3a231; // 2b76:06c7
db dummyd_3a232; // 2b76:06c8
db dummyd_3a233; // 2b76:06c9
db dummyd_3a234; // 2b76:06ca
db dummyd_3a235; // 2b76:06cb
db dummyd_3a236; // 2b76:06cc
db dummyd_3a237; // 2b76:06cd
db dummyd_3a238; // 2b76:06ce
db dummyd_3a239; // 2b76:06cf
db dummyd_3a23a; // 2b76:06d0
db dummyd_3a23b; // 2b76:06d1
db dummyd_3a23c;
db dummyd_3a23d; // 2b76:06d3
db dummyd_3a23e; // 2b76:06d4
db dummyd_3a23f; // 2b76:06d5
db dummyd_3a240; // 2b76:06d6
db dummyd_3a241; // 2b76:06d7
db dummyd_3a242; // 2b76:06d8
db dummyd_3a243; // 2b76:06d9
db byte_4ab3a; // 2b76:06da
db dummyd_3a245[32]; // 2b76:06db
db dummyd_3a265; // 2b76:06fb
db dummyd_3a266; // 2b76:06fc
db dummyd_3a267; // 2b76:06fd
db dummyd_3a268; // 2b76:06fe
db dummyd_3a269; // 2b76:06ff
db dummyd_3a26a; // 2b76:0700
db dummyd_3a26b;
db dummyd_3a26c; // 2b76:0702
db dummyd_3a26d; // 2b76:0703
db dummyd_3a26e; // 2b76:0704
db dummyd_3a26f; // 2b76:0705
db dummyd_3a270; // 2b76:0706
db dummyd_3a271; // 2b76:0707
db dummyd_3a272; // 2b76:0708
db dummyd_3a273; // 2b76:0709
db dummyd_3a274; // 2b76:070a
db dummyd_3a275; // 2b76:070b
db dummyd_3a276; // 2b76:070c
db dummyd_3a277; // 2b76:070d
db dummyd_3a278; // 2b76:070e
db dummyd_3a279; // 2b76:070f
db dummyd_3a27a[32]; // 2b76:072c
db dummyd_3a29a[32]; // 2b76:074c
db dummyd_3a2ba[32]; // 2b76:076c
db dummyd_3a2da[32]; // 2b76:078c
db dummyd_3a2fa[32]; // 2b76:07ac
db dummyd_3a31a[32]; // 2b76:07cc
db dummyd_3a33a[32]; // 2b76:07ec
db dummyd_3a35a[32]; // 2b76:080c
db dummyd_3a37a[32]; // 2b76:082c
db dummyd_3a39a[32]; // 2b76:084c
db dummyd_3a3ba[32]; // 2b76:086c
db dummyd_3a3da[32]; // 2b76:088c
db dummyd_3a3fa[32]; // 2b76:08ac
db dummyd_3a41a[32]; // 2b76:08cc
db dummyd_3a43a[32]; // 2b76:08ec
db dummyd_3a45a[32]; // 2b76:090c
db dummyd_3a47a[32]; // 2b76:092c
db dummyd_3a49a[32]; // 2b76:094c
db dummyd_3a4ba[32]; // 2b76:096c
db dummyd_3a4da[32]; // 2b76:098c
db dummyd_3a4fa[32]; // 2b76:09ac
db dummyd_3a51a[32]; // 2b76:09cc
db dummyd_3a53a[32]; // 2b76:09ec
db dummyd_3a55a[32]; // 2b76:0a0c
db dummyd_3a57a[32]; // 2b76:0a2c
db dummyd_3a59a[32]; // 2b76:0a4c
db dummyd_3a5ba[32]; // 2b76:0a6c
db dummyd_3a5da[32]; // 2b76:0a8c
db dummyd_3a5fa[32]; // 2b76:0aac
db dummyd_3a61a[32]; // 2b76:0acc
db dummyd_3a63a[32]; // 2b76:0aec
db dummyd_3a65a[32]; // 2b76:0b0c
db dummyd_3a67a[32]; // 2b76:0b2c
db dummyd_3a69a[32]; // 2b76:0b4c
db dummyd_3a6ba[32]; // 2b76:0b6c
db dummyd_3a6da[32]; // 2b76:0b8c
db dummyd_3a6fa[32]; // 2b76:0bac
db dummyd_3a71a[32]; // 2b76:0bcc
db dummyd_3a73a[32]; // 2b76:0bec
db dummyd_3a75a[32]; // 2b76:0c0c
db dummyd_3a77a[32]; // 2b76:0c2c
db dummyd_3a79a[32]; // 2b76:0c4c
db dummyd_3a7ba[32]; // 2b76:0c6c
db dummyd_3a7da[32]; // 2b76:0c8c
db dummyd_3a7fa[32]; // 2b76:0cac
db dummyd_3a81a[32]; // 2b76:0ccc
db dummyd_3a83a[32]; // 2b76:0cec
db dummyd_3a85a[32]; // 2b76:0d0c
db dummyd_3a87a[32]; // 2b76:0d2c
db dummyd_3a89a[32]; // 2b76:0d4c
db dummyd_3a8ba[32]; // 2b76:0d6c
db dummyd_3a8da[32]; // 2b76:0d8c
db dummyd_3a8fa[32]; // 2b76:0dac
db dummyd_3a91a[32]; // 2b76:0dcc
db dummyd_3a93a[32]; // 2b76:0dec
db dummyd_3a95a[32]; // 2b76:0e0c
db dummyd_3a97a[32]; // 2b76:0e2c
db dummyd_3a99a; // 2b76:0e4c
db dummyd_3a99b; // 2b76:0e4d
db dummyd_3a99c; // 2b76:0e4e
db dummyd_3a99d; // 2b76:0e4f
db dummyd_3a99e; // 2b76:0e50
db dummyd_3a99f;
db dummyd_3a9a0;
db dummyd_3a9a1; // 2b76:0e53
db dummyd_3a9a2; // 2b76:0e54
db dummyd_3a9a3; // 2b76:0e55
db dummyd_3a9a4; // 2b76:0e56
db dummyd_3a9a5; // 2b76:0e57
db dummyd_3a9a6;
db dummyd_3a9a7;
db dummyd_3a9a8; // 2b76:0e5a
db dummyd_3a9a9; // 2b76:0e5b
db dummyd_3a9aa; // 2b76:0e5c
db dummyd_3a9ab;
db dummyd_3a9ac; // 2b76:0e5f
db dummyd_3a9ad; // 2b76:0e60
db dummyd_3a9ae; // 2b76:0e62
db dummyd_3a9af; // 2b76:0e63
db dummyd_3a9b0;
db dummyd_3a9b1; // 2b76:0e66
db dummyd_3a9b2; // 2b76:0e67
db dummyd_3a9b3; // 2b76:0e68
db dummyd_3a9b4; // 2b76:0e69
db dummyd_3a9b5;
db dummyd_3a9b6; // 2b76:0e6b
db dummyd_3a9b7; // 2b76:0e6c
db dummyd_3a9b8; // 2b76:0e6d
db dummyd_3a9b9; // 2b76:0e6e
db dummyd_3a9ba[32]; // 2b76:0e70
db dummyd_3a9da[32]; // 2b76:0e90
db dummyd_3a9fa[32]; // 2b76:0eb0
db dummyd_3aa1a[32]; // 2b76:0ed0
db dummyd_3aa3a[32]; // 2b76:0ef0
db dummyd_3aa5a[32]; // 2b76:0f10
db dummyd_3aa7a[32]; // 2b76:0f30
db dummyd_3aa9a[32]; // 2b76:0f50
db dummyd_3aaba[32]; // 2b76:0f70
db dummyd_3aada[32]; // 2b76:0f90
db dummyd_3aafa[32]; // 2b76:0fb0
db dummyd_3ab1a[32]; // 2b76:0fd0
db dummyd_3ab3a[32]; // 2b76:0ff0
db dummyd_3ab5a[32]; // 2b76:1010
db dummyd_3ab7a[32]; // 2b76:1030
db dummyd_3ab9a[32]; // 2b76:1050
db dummyd_3abba[32]; // 2b76:1070
db dummyd_3abda[32]; // 2b76:1090
db dummyd_3abfa[32]; // 2b76:10b0
db dummyd_3ac1a[32]; // 2b76:10d0
db dummyd_3ac3a[32]; // 2b76:10f0
db dummyd_3ac5a[32]; // 2b76:1110
db dummyd_3ac7a[32]; // 2b76:1130
db dummyd_3ac9a[32]; // 2b76:1150
db dummyd_3acba[32]; // 2b76:1170
db dummyd_3acda[32]; // 2b76:1190
db dummyd_3acfa[32]; // 2b76:11b0
db dummyd_3ad1a[32]; // 2b76:11d0
db dummyd_3ad3a[32]; // 2b76:11f0
db dummyd_3ad5a[32]; // 2b76:1210
db dummyd_3ad7a[32]; // 2b76:1230
db dummyd_3ad9a[32]; // 2b76:1250
db dummyd_3adba[32]; // 2b76:1270
db dummyd_3adda[32]; // 2b76:1290
db dummyd_3adfa[32]; // 2b76:12b0
db dummyd_3ae1a[32]; // 2b76:12d0
db dummyd_3ae3a[32]; // 2b76:12f0
db dummyd_3ae5a[32]; // 2b76:1310
db dummyd_3ae7a[32]; // 2b76:1330
db dummyd_3ae9a[32]; // 2b76:1350
db dummyd_3aeba[32]; // 2b76:1370
db dummyd_3aeda[32]; // 2b76:1390
db dummyd_3aefa[32]; // 2b76:13b0
db dummyd_3af1a[32]; // 2b76:13d0
db dummyd_3af3a;
db dummyd_3af3b;
db dummyd_3af3c;
db dummyd_3af3d;
db dummyd_3af3e;
db dummyd_3af3f;
db dummyd_3af40;
db dummyd_3af41;
db dummyd_3af42;
db dummyd_3af43;
db dummyd_3af44;
db dummyd_3af45;
db dummyd_3af46;
db dummyd_3af47;
db dummyd_3af48;
db dummyd_3af49;
db dummyd_3af4a[32]; // 2dd7:0000
db dummyd_3af6a[32]; // 2dd7:0020
db dummyd_3af8a[32]; // 2dd7:0040
db dummyd_3afaa[32]; // 2dd7:0060
db dummyd_3afca[32]; // 2dd7:0080
db dummyd_3afea[32]; // 2dd7:00a0
db dummyd_3b00a[32]; // 2dd7:00c0
db dummyd_3b02a[32]; // 2dd7:00e0
db dummyd_3b04a[32]; // 2dd7:0100
db dummyd_3b06a[32]; // 2dd7:0120
db dummyd_3b08a[32]; // 2dd7:0140
db dummyd_3b0aa[32]; // 2dd7:0160
db dummyd_3b0ca[32]; // 2dd7:0180
db dummyd_3b0ea[32]; // 2dd7:01a0
db dummyd_3b10a[32]; // 2dd7:01c0
db dummyd_3b12a[32]; // 2dd7:01e0
db dummyd_3b14a[32]; // 2dd7:0200
db dummyd_3b16a[32]; // 2dd7:0220
db dummyd_3b18a[32]; // 2dd7:0240
db dummyd_3b1aa[32]; // 2dd7:0260
db dummyd_3b1ca[32]; // 2dd7:0280
db dummyd_3b1ea[32]; // 2dd7:02a0
db dummyd_3b20a[32]; // 2dd7:02c0
db dummyd_3b22a[32]; // 2dd7:02e0
db dummyd_3b24a[32]; // 2dd7:0300
db dummyd_3b26a[32]; // 2dd7:0320
db dummyd_3b28a[32]; // 2dd7:0340
db dummyd_3b2aa[32]; // 2dd7:0360
db dummyd_3b2ca[32]; // 2dd7:0380
db dummyd_3b2ea[32]; // 2dd7:03a0
db dummyd_3b30a[32]; // 2dd7:03c0
db dummyd_3b32a[32]; // 2dd7:03e0
db dummyd_3b34a[32]; // 2dd7:0400
db dummyd_3b36a[32]; // 2dd7:0420
db dummyd_3b38a[32]; // 2dd7:0440
db dummyd_3b3aa[32]; // 2dd7:0460
db dummyd_3b3ca[32]; // 2dd7:0480
db dummyd_3b3ea[32]; // 2dd7:04a0
db dummyd_3b40a[32]; // 2dd7:04c0
db dummyd_3b42a[32]; // 2dd7:04e0
db dummyd_3b44a[32]; // 2dd7:0500
db dummyd_3b46a[32]; // 2dd7:0520
db dummyd_3b48a[32]; // 2dd7:0540
db dummyd_3b4aa[32]; // 2dd7:0560
db dummyd_3b4ca[32]; // 2dd7:0580
db dummyd_3b4ea[32]; // 2dd7:05a0
db dummyd_3b50a[32]; // 2dd7:05c0
db dummyd_3b52a[32]; // 2dd7:05e0
db dummyd_3b54a[32]; // 2dd7:0600
db dummyd_3b56a[32]; // 2dd7:0620
db dummyd_3b58a[32]; // 2dd7:0640
db dummyd_3b5aa[32]; // 2dd7:0660
db dummyd_3b5ca[32]; // 2dd7:0680
db dummyd_3b5ea[32]; // 2dd7:06a0
db dummyd_3b60a[32]; // 2dd7:06c0
db dummyd_3b62a[32]; // 2dd7:06e0
db dummyd_3b64a[32]; // 2dd7:0700
db dummyd_3b66a[32]; // 2dd7:0720
db dummyd_3b68a[32]; // 2dd7:0740
db dummyd_3b6aa[32]; // 2dd7:0760
db dummyd_3b6ca[32]; // 2dd7:0780
db dummyd_3b6ea[32]; // 2dd7:07a0
db dummyd_3b70a[32]; // 2dd7:07c0
db dummyd_3b72a[32]; // 2dd7:07e0
db dummyd_3b74a[32]; // 2dd7:0800
db dummyd_3b76a[32]; // 2dd7:0820
db dummyd_3b78a[32]; // 2dd7:0840
db dummyd_3b7aa[32]; // 2dd7:0860
db dummyd_3b7ca[32]; // 2dd7:0880
db dummyd_3b7ea[32]; // 2dd7:08a0
db dummyd_3b80a[32]; // 2dd7:08c0
db dummyd_3b82a[32]; // 2dd7:08e0
db dummyd_3b84a[32]; // 2dd7:0900
db dummyd_3b86a[32]; // 2dd7:0920
db dummyd_3b88a[32]; // 2dd7:0940
db dummyd_3b8aa[32]; // 2dd7:0960
db dummyd_3b8ca[32]; // 2dd7:0980
db dummyd_3b8ea[32]; // 2dd7:09a0
db dummyd_3b90a[32]; // 2dd7:09c0
db dummyd_3b92a[32]; // 2dd7:09e0
db dummyd_3b94a[32]; // 2dd7:0a00
db dummyd_3b96a[32]; // 2dd7:0a20
db dummyd_3b98a[32]; // 2dd7:0a40
db dummyd_3b9aa[32]; // 2dd7:0a60
db dummyd_3b9ca[32]; // 2dd7:0a80
db dummyd_3b9ea[32]; // 2dd7:0aa0
db dummyd_3ba0a[32]; // 2dd7:0ac0
db dummyd_3ba2a[32]; // 2dd7:0ae0
db dummyd_3ba4a[32]; // 2dd7:0b00
db dummyd_3ba6a[32]; // 2dd7:0b20
db dummyd_3ba8a[32]; // 2dd7:0b40
db dummyd_3baaa[32]; // 2dd7:0b60
db dummyd_3baca[32]; // 2dd7:0b80
db dummyd_3baea[32]; // 2dd7:0ba0
db dummyd_3bb0a[32]; // 2dd7:0bc0
db dummyd_3bb2a[32]; // 2dd7:0be0
db dummyd_3bb4a[32]; // 2dd7:0c00
db dummyd_3bb6a[32]; // 2dd7:0c20
db dummyd_3bb8a[32]; // 2dd7:0c40
db dummyd_3bbaa[32]; // 2dd7:0c60
db dummyd_3bbca[32]; // 2dd7:0c80
db dummyd_3bbea[32]; // 2dd7:0ca0
db dummyd_3bc0a[32]; // 2dd7:0cc0
db dummyd_3bc2a[32]; // 2dd7:0ce0
db dummyd_3bc4a[32]; // 2dd7:0d00
db dummyd_3bc6a[32]; // 2dd7:0d20
db dummyd_3bc8a[32]; // 2dd7:0d40
db dummyd_3bcaa[32]; // 2dd7:0d60
db dummyd_3bcca[32]; // 2dd7:0d80
db dummyd_3bcea[32]; // 3223:0000
db dummyd_3bd0a;
db dummyd_3bd0b;
db dummyd_3bd0c;
db dummyd_3bd0d;
db dummyd_3bd0e; // 3223:0024
db dummyd_3bd0f;
db dummyd_3bd10; // 3223:0026
db dummyd_3bd11;
db dummyd_3bd12;
db dummyd_3bd13;
db dummyd_3bd14;
db dummyd_3bd15; // 3223:002b
db dummyd_3bd16;
db dummyd_3bd17;
db dummyd_3bd18;
db unk_4c62f; // 3223:002f
db dummyd_3bd1a[32]; // 3223:0030
db dummyd_3bd3a[32]; // 3223:0050
db dummyd_3bd5a[32]; // 3223:0070
db dummyd_3bd7a[32]; // 3223:0090
db dummyd_3bd9a;
db dummyd_3bd9b;
db dummyd_3bd9c;
db dummyd_3bd9d;
db dummyd_3bd9e;
db dummyd_3bd9f;
db dummyd_3bda0;
db dummyd_3bda1;
db dummyd_3bda2;
db dummyd_3bda3; // 3223:00b9
db dummyd_3bda4;
db dummyd_3bda5;
db dummyd_3bda6;
db dummyd_3bda7;
db dummyd_3bda8;
db dummyd_3bda9; // 3223:00bf
db dummyd_3bdaa[214];
db dummyd_3be80[32]; // 3be8:0000
db dummyd_3bea0;
db dummyd_3bea1;
db dummyd_3bea2; // 3be8:0022
db dummyd_3bea3; // 3be8:0023
db dummyd_3bea4;
db dummyd_3bea5;
db dummyd_3bea6;
db dummyd_3bea7;
db dummyd_3bea8;
db dummyd_3bea9;
db dummyd_3beaa; // 3be8:002a
db dummyd_3beab;
db dummyd_3beac; // 3be8:002c
db dummyd_3bead;
db dummyd_3beae;
db unk_4c6ef; // 3be8:002f
db dummyd_3beb0[32]; // 3be8:0030
db dummyd_3bed0[32]; // 3be8:0050
db dummyd_3bef0[32]; // 3be8:0070
db dummyd_3bf10[32]; // 3be8:0090
db dummyd_3bf30[32]; // 3be8:00b0
db dummyd_3bf50[4912];
db dummyd_3d280;
db dummyd_3d281;
db dummyd_3d282;
db dummyd_3d283;
db dummyd_3d284; // 3d28:0004
db dummyd_3d285;
db dummyd_3d286; // 3d28:0006
db dummyd_3d287;
db dummyd_3d288; // 3d28:0008
db dummyd_3d289;
db dummyd_3d28a; // 3d28:000a
db dummyd_3d28b; // 3d28:000b
db dummyd_3d28c; // 3d28:000c
db dummyd_3d28d; // 3d28:000d
db dummyd_3d28e;
db dummyd_3d28f;
db dummyd_3d290; // 3d28:0010
db dummyd_3d291;
db dummyd_3d292; // 3d28:0012
db dummyd_3d293;
db dummyd_3d294; // 3d28:0014
db dummyd_3d295;
db dummyd_3d296; // 3d28:0016
db dummyd_3d297;
db dummyd_3d298; // 3d28:0018
db dummyd_3d299; // 3d28:0019
db dummyd_3d29a;
db dummyd_3d29b;
db dummyd_3d29c;
db unk_4c7ad; // 3d28:001d
db dummyd_3d29e[32]; // 3d28:001e
db dummyd_3d2be[32]; // 3d28:003e
db dummyd_3d2de[32]; // 3d28:005e
db dummyd_3d2fe[32]; // 3d28:007e
db dummyd_3d31e[32]; // 3d28:009e
db dummyd_3d33e[32]; // 3d28:00be
db dummyd_3d35e[32]; // 3d28:00de
db dummyd_3d37e[32]; // 3d28:00fe
db dummyd_3d39e[32]; // 3d28:011e
db dummyd_3d3be[32]; // 3d28:013e
db dummyd_3d3de[32]; // 3d28:015e
db dummyd_3d3fe[32]; // 3d28:017e
db dummyd_3d41e[32]; // 3d28:019e
db dummyd_3d43e[32]; // 3d28:01be
db dummyd_3d45e[32]; // 3d28:01de
db dummyd_3d47e[32]; // 3d28:01fe
db dummyd_3d49e[32]; // 3d28:021e
db dummyd_3d4be[32]; // 3d28:023e
db dummyd_3d4de[32]; // 3d28:025e
db dummyd_3d4fe[32]; // 3d28:027e
db dummyd_3d51e[32]; // 3d28:029e
db dummyd_3d53e[32]; // 3d28:02be
db dummyd_3d55e[32]; // 3d28:02de
db dummyd_3d57e[32]; // 3d28:02fe
db dummyd_3d59e[32]; // 3d28:031e
db dummyd_3d5be[32]; // 3d28:033e
db dummyd_3d5de[32]; // 3d28:035e
db dummyd_3d5fe[32]; // 3d28:037e
db dummyd_3d61e[32]; // 3d28:039e
db dummyd_3d63e[32]; // 3d28:03be
db dummyd_3d65e[32]; // 3d28:03de
db dummyd_3d67e[32]; // 3d28:03fe
db dummyd_3d69e[32]; // 3d28:041e
db dummyd_3d6be[32]; // 3d28:043e
db dummyd_3d6de[32]; // 3d28:045e
db dummyd_3d6fe[32]; // 3d28:047e
db dummyd_3d71e[32]; // 3d28:049e
db dummyd_3d73e[32]; // 3d28:04be
db dummyd_3d75e[32]; // 3d28:04de
db dummyd_3d77e[32]; // 3d28:04fe
db dummyd_3d79e[32]; // 3d28:051e
db dummyd_3d7be[32]; // 3d28:053e
db dummyd_3d7de[32]; // 3d28:055e
db dummyd_3d7fe[32]; // 3d28:057e
db dummyd_3d81e[32]; // 3d28:059e
db dummyd_3d83e[32]; // 3d28:05be
db dummyd_3d85e[32]; // 3d28:05de
db dummyd_3d87e[32]; // 3d28:05fe
db dummyd_3d89e[32]; // 3d28:061e
db dummyd_3d8be[32]; // 3d28:063e
db dummyd_3d8de[32]; // 3d28:065e
db dummyd_3d8fe[32]; // 3d28:067e
db dummyd_3d91e[32]; // 3d28:069e
db dummyd_3d93e[32]; // 3d28:06be
db dummyd_3d95e[32]; // 3d28:06de
db dummyd_3d97e[32]; // 3d28:06fe
db dummyd_3d99e[32]; // 3d28:071e
db dummyd_3d9be[32]; // 3d28:073e
db dummyd_3d9de[32]; // 3d28:075e
db dummyd_3d9fe[32]; // 3d28:077e
db dummyd_3da1e[32]; // 3d28:079e
db dummyd_3da3e[32]; // 3d28:07be
db dummyd_3da5e[32]; // 3d28:07de
db dummyd_3da7e[32]; // 3d28:07fe
db dummyd_3da9e[32]; // 3d28:081e
db dummyd_3dabe[32]; // 3d28:083e
db dummyd_3dade[32]; // 3d28:085e
db dummyd_3dafe[32]; // 3d28:087e
db dummyd_3db1e[32]; // 3d28:089e
db dummyd_3db3e[32]; // 3d28:08be
db dummyd_3db5e[32]; // 3d28:08de
db dummyd_3db7e[32]; // 3d28:08fe
db dummyd_3db9e[32]; // 3d28:091e
db dummyd_3dbbe[32]; // 3d28:093e
db dummyd_3dbde[32]; // 3d28:095e
db dummyd_3dbfe[32]; // 3d28:097e
db dummyd_3dc1e[32]; // 3d28:099e
db dummyd_3dc3e[32]; // 3d28:09be
db dummyd_3dc5e[32]; // 3d28:09de
db dummyd_3dc7e[32]; // 3d28:09fe
db dummyd_3dc9e[32]; // 3d28:0a1e
db dummyd_3dcbe[32]; // 3d28:0a3e
db dummyd_3dcde[32]; // 3d28:0a5e
db dummyd_3dcfe[32]; // 3d28:0a7e
db dummyd_3dd1e[32]; // 3d28:0a9e
db dummyd_3dd3e[32]; // 3d28:0abe
db dummyd_3dd5e[32]; // 3d28:0ade
db dummyd_3dd7e[32]; // 3d28:0afe
db dummyd_3dd9e[32]; // 3d28:0b1e
db dummyd_3ddbe[32]; // 3d28:0b3e
db dummyd_3ddde[32]; // 3d28:0b5e
db dummyd_3ddfe[32]; // 3d28:0b7e
db dummyd_3de1e[32]; // 3d28:0b9e
db dummyd_3de3e[32]; // 3d28:0bbe
db dummyd_3de5e[32]; // 3d28:0bde
db dummyd_3de7e[32]; // 3d28:0bfe
db dummyd_3de9e[32]; // 3d28:0c1e
db dummyd_3debe[32]; // 3d28:0c3e
db dummyd_3dede[32]; // 3d28:0c5e
db dummyd_3defe[32]; // 3d28:0c7e
db dummyd_3df1e[32]; // 3d28:0c9e
db dummyd_3df3e[32]; // 3d28:0cbe
db dummyd_3df5e[32]; // 3d28:0cde
db dummyd_3df7e[32]; // 3d28:0cfe
db dummyd_3df9e[32]; // 3d28:0d1e
db dummyd_3dfbe[32]; // 3d28:0d3e
db dummyd_3dfde[32]; // 3d28:0d5e
db dummyd_3dffe[32]; // 3d28:0d7e
db dummyd_3e01e[32]; // 3d28:0d9e
db dummyd_3e03e[32]; // 3d28:0dbe
db dummyd_3e05e[32]; // 3d28:0dde
db dummyd_3e07e[32]; // 3d28:0dfe
db dummyd_3e09e[32]; // 3d28:0e1e
db dummyd_3e0be[32]; // 3d28:0e3e
db dummyd_3e0de[32]; // 3d28:0e5e
db dummyd_3e0fe[32]; // 3d28:0e7e
db dummyd_3e11e[32]; // 3d28:0e9e
db dummyd_3e13e[32]; // 3d28:0ebe
db dummyd_3e15e[32]; // 3d28:0ede
db dummyd_3e17e[32]; // 3d28:0efe
db dummyd_3e19e[32]; // 3d28:0f1e
db dummyd_3e1be[32]; // 3d28:0f3e
db dummyd_3e1de[32]; // 3d28:0f5e
db dummyd_3e1fe[32]; // 3d28:0f7e
db dummyd_3e21e[32]; // 3d28:0f9e
db dummyd_3e23e[32]; // 3d28:0fbe
db dummyd_3e25e[32]; // 3d28:0fde
db dummyd_3e27e[32]; // 3d28:0ffe
db dummyd_3e29e[32]; // 3d28:101e
db dummyd_3e2be[32]; // 3d28:103e
db dummyd_3e2de[32]; // 3d28:105e
db dummyd_3e2fe[32]; // 3d28:107e
db dummyd_3e31e[32]; // 3d28:109e
db dummyd_3e33e[32]; // 3d28:10be
db dummyd_3e35e[32]; // 3d28:10de
db dummyd_3e37e[32]; // 3d28:10fe
db dummyd_3e39e[32]; // 3d28:111e
db dummyd_3e3be[32]; // 3d28:113e
db dummyd_3e3de[32]; // 3d28:115e
db dummyd_3e3fe[32]; // 3d28:117e
db dummyd_3e41e[32]; // 3d28:119e
db dummyd_3e43e[32]; // 3d28:11be
db dummyd_3e45e[32]; // 3d28:11de
db dummyd_3e47e[32]; // 3d28:11fe
db dummyd_3e49e[32]; // 3d28:121e
db dummyd_3e4be[32]; // 3d28:123e
db dummyd_3e4de[32]; // 3d28:125e
db dummyd_3e4fe[32]; // 3d28:127e
db dummyd_3e51e[32]; // 3d28:129e
db dummyd_3e53e[32]; // 3d28:12be
db dummyd_3e55e[32]; // 3d28:12de
db dummyd_3e57e[32]; // 3d28:12fe
db dummyd_3e59e[32]; // 3d28:131e
db dummyd_3e5be[32]; // 3d28:133e
db dummyd_3e5de[32]; // 3d28:135e
db dummyd_3e5fe[32]; // 3d28:137e
db dummyd_3e61e[32]; // 3d28:139e
db dummyd_3e63e[32]; // 3d28:13be
db dummyd_3e65e[32]; // 3d28:13de
db dummyd_3e67e[32]; // 3d28:13fe
db dummyd_3e69e[32]; // 3d28:141e
db dummyd_3e6be[32]; // 3d28:143e
db dummyd_3e6de[32]; // 3d28:145e
db dummyd_3e6fe[32]; // 3d28:147e
db dummyd_3e71e[32]; // 3d28:149e
db dummyd_3e73e[32]; // 3d28:14be
db dummyd_3e75e[32]; // 3d28:14de
db dummyd_3e77e[32]; // 3d28:14fe
db dummyd_3e79e[32]; // 3d28:151e
db dummyd_3e7be[32]; // 3d28:153e
db dummyd_3e7de[32]; // 3d28:155e
db dummyd_3e7fe[32]; // 3d28:157e
db dummyd_3e81e[32]; // 3d28:159e
db dummyd_3e83e[32]; // 3d28:15be
db dummyd_3e85e[32]; // 3d28:15de
db dummyd_3e87e[32]; // 3d28:15fe
db dummyd_3e89e[32]; // 3d28:161e
db dummyd_3e8be[32]; // 3d28:163e
db dummyd_3e8de[32]; // 3d28:165e
db dummyd_3e8fe[32]; // 3d28:167e
db dummyd_3e91e[32]; // 3d28:169e
db dummyd_3e93e[32]; // 3d28:16be
db dummyd_3e95e[32]; // 3d28:16de
db dummyd_3e97e[32]; // 3d28:16fe
db dummyd_3e99e[32]; // 3d28:171e
db dummyd_3e9be[32]; // 3d28:173e
db dummyd_3e9de[32]; // 3d28:175e
db dummyd_3e9fe[32]; // 3d28:177e
db dummyd_3ea1e[32]; // 3d28:179e
db dummyd_3ea3e[32]; // 3d28:17be
db dummyd_3ea5e[32]; // 3d28:17de
db dummyd_3ea7e[32]; // 3d28:17fe
db dummyd_3ea9e[32]; // 3d28:181e
db dummyd_3eabe[32]; // 3d28:183e
db dummyd_3eade[32]; // 3d28:185e
db dummyd_3eafe[32]; // 3d28:187e
db dummyd_3eb1e[32]; // 3d28:189e
db dummyd_3eb3e[32]; // 3d28:18be
db dummyd_3eb5e[32]; // 3d28:18de
db dummyd_3eb7e[32]; // 3d28:18fe
db dummyd_3eb9e[32]; // 3d28:191e
db dummyd_3ebbe[32]; // 3d28:193e
db dummyd_3ebde[32]; // 3d28:195e
db dummyd_3ebfe[32]; // 3d28:197e
db dummyd_3ec1e[32]; // 3d28:199e
db dummyd_3ec3e[32]; // 3d28:19be
db dummyd_3ec5e[32]; // 3d28:19de
db dummyd_3ec7e[32]; // 3d28:19fe
db dummyd_3ec9e[32]; // 3d28:1a1e
db dummyd_3ecbe[32]; // 3d28:1a3e
db dummyd_3ecde[32]; // 3d28:1a5e
db dummyd_3ecfe[32]; // 3d28:1a7e
db dummyd_3ed1e[32]; // 3d28:1a9e
db dummyd_3ed3e[32]; // 3d28:1abe
db dummyd_3ed5e[32]; // 3d28:1ade
db dummyd_3ed7e[32]; // 3d28:1afe
db dummyd_3ed9e[32]; // 3d28:1b1e
db dummyd_3edbe[32]; // 3d28:1b3e
db dummyd_3edde[32]; // 3d28:1b5e
db dummyd_3edfe[32]; // 3d28:1b7e
db dummyd_3ee1e[32]; // 3d28:1b9e
db dummyd_3ee3e[32]; // 3d28:1bbe
db dummyd_3ee5e[32]; // 3d28:1bde
db dummyd_3ee7e[32]; // 3d28:1bfe
db dummyd_3ee9e[32]; // 3d28:1c1e
db dummyd_3eebe[32]; // 3d28:1c3e
db dummyd_3eede[32]; // 3d28:1c5e
db dummyd_3eefe[32]; // 3d28:1c7e
db dummyd_3ef1e[32]; // 3d28:1c9e
db dummyd_3ef3e[32]; // 3d28:1cbe
db dummyd_3ef5e[32]; // 3d28:1cde
db dummyd_3ef7e[32]; // 3d28:1cfe
db dummyd_3ef9e[32]; // 3d28:1d1e
db dummyd_3efbe[32]; // 3d28:1d3e
db dummyd_3efde[32]; // 3d28:1d5e
db dummyd_3effe[32]; // 3d28:1d7e
db dummyd_3f01e[32]; // 3d28:1d9e
db dummyd_3f03e[32]; // 3d28:1dbe
db dummyd_3f05e[32]; // 3d28:1dde
db dummyd_3f07e[32]; // 3d28:1dfe
db dummyd_3f09e[32]; // 3d28:1e1e
db dummyd_3f0be[32]; // 3d28:1e3e
db dummyd_3f0de[32]; // 3d28:1e5e
db dummyd_3f0fe[32]; // 3d28:1e7e
db dummyd_3f11e[32]; // 3d28:1e9e
db dummyd_3f13e[32]; // 3d28:1ebe
db dummyd_3f15e[32]; // 3d28:1ede
db dummyd_3f17e[32]; // 3d28:1efe
db dummyd_3f19e[32]; // 3d28:1f1e
db dummyd_3f1be[32]; // 3d28:1f3e
db dummyd_3f1de[32]; // 3d28:1f5e
db dummyd_3f1fe[32]; // 3d28:1f7e
db dummyd_3f21e[32]; // 3d28:1f9e
db dummyd_3f23e[32]; // 3d28:1fbe
db dummyd_3f25e[32]; // 3d28:1fde
db dummyd_3f27e[32]; // 3d28:1ffe
db dummyd_3f29e[32]; // 3d28:201e
db dummyd_3f2be[32]; // 3d28:203e
db dummyd_3f2de[32]; // 3d28:205e
db dummyd_3f2fe[32]; // 3d28:207e
db dummyd_3f31e[32]; // 3d28:209e
db dummyd_3f33e[32]; // 3d28:20be
db dummyd_3f35e[32]; // 3d28:20de
db dummyd_3f37e[32]; // 3d28:20fe
db dummyd_3f39e[32]; // 3d28:211e
db dummyd_3f3be[32]; // 3d28:213e
db dummyd_3f3de[32]; // 3d28:215e
db dummyd_3f3fe[32]; // 3d28:217e
db dummyd_3f41e[32]; // 3d28:219e
db dummyd_3f43e[32]; // 3d28:21be
db dummyd_3f45e[32]; // 3d28:21de
db dummyd_3f47e[32]; // 3d28:21fe
db dummyd_3f49e[32]; // 3d28:221e
db dummyd_3f4be[32]; // 3d28:223e
db dummyd_3f4de[32]; // 3d28:225e
db dummyd_3f4fe[32]; // 3d28:227e
db dummyd_3f51e[32]; // 3d28:229e
db dummyd_3f53e[32]; // 3d28:22be
db dummyd_3f55e[32]; // 3d28:22de
db dummyd_3f57e[32]; // 3d28:22fe
db dummyd_3f59e[32]; // 3d28:231e
db dummyd_3f5be[32]; // 3d28:233e
db dummyd_3f5de[32]; // 3d28:235e
db dummyd_3f5fe[32]; // 3d28:237e
db dummyd_3f61e[32]; // 3d28:239e
db dummyd_3f63e[32]; // 3d28:23be
db dummyd_3f65e[32]; // 3d28:23de
db dummyd_3f67e[32]; // 3d28:23fe
db dummyd_3f69e[32]; // 3d28:241e
db dummyd_3f6be[32]; // 3d28:243e
db dummyd_3f6de[32]; // 3d28:245e
db dummyd_3f6fe[32]; // 3d28:247e
db dummyd_3f71e[32]; // 3d28:249e
db dummyd_3f73e[32]; // 3d28:24be
db dummyd_3f75e[32]; // 3d28:24de
db dummyd_3f77e[32]; // 3d28:24fe
db dummyd_3f79e[32]; // 3d28:251e
db dummyd_3f7be[32]; // 3d28:253e
db dummyd_3f7de[32]; // 3d28:255e
db dummyd_3f7fe[32]; // 3d28:257e
db dummyd_3f81e[32]; // 3d28:259e
db dummyd_3f83e[32]; // 3d28:25be
db dummyd_3f85e[32]; // 3d28:25de
db dummyd_3f87e[32]; // 3d28:25fe
db dummyd_3f89e[32]; // 3d28:261e
db dummyd_3f8be[32]; // 3d28:263e
db dummyd_3f8de[32]; // 3d28:265e
db dummyd_3f8fe[32]; // 3d28:267e
db dummyd_3f91e[32]; // 3d28:269e
db dummyd_3f93e[32]; // 3d28:26be
db dummyd_3f95e[32]; // 3d28:26de
db dummyd_3f97e[32]; // 3d28:26fe
db dummyd_3f99e[32]; // 3d28:271e
db dummyd_3f9be[32]; // 3d28:273e
db dummyd_3f9de[32]; // 3d28:275e
db dummyd_3f9fe[32]; // 3d28:277e
db dummyd_3fa1e[32]; // 3d28:279e
db dummyd_3fa3e[32]; // 3d28:27be
db dummyd_3fa5e[32]; // 3d28:27de
db dummyd_3fa7e[32]; // 3d28:27fe
db dummyd_3fa9e[32]; // 3d28:281e
db dummyd_3fabe[32]; // 3d28:283e
db dummyd_3fade[32]; // 3d28:285e
db dummyd_3fafe[32]; // 3d28:287e
db dummyd_3fb1e[32]; // 3d28:289e
db dummyd_3fb3e[32]; // 3d28:28be
db dummyd_3fb5e[32]; // 3d28:28de
db dummyd_3fb7e[32]; // 3d28:28fe
db dummyd_3fb9e[32]; // 3d28:291e
db dummyd_3fbbe[32]; // 3d28:293e
db dummyd_3fbde[32]; // 3d28:295e
db dummyd_3fbfe[32]; // 3d28:297e
db dummyd_3fc1e[32]; // 3d28:299e
db dummyd_3fc3e[32]; // 3d28:29be
db dummyd_3fc5e[32]; // 3d28:29de
db dummyd_3fc7e; // 3d28:29fe
db dummyd_3fc7f;
db dummyd_3fc80; // 3d28:2a00
db dummyd_3fc81;
db unk_4f192; // 3d28:2a02
db dummyd_3fc83[32]; // 3d28:2a03
db dummyd_3fca3[32]; // 3d28:2a23
db dummyd_3fcc3[32]; // 3d28:2a43
db dummyd_3fce3[32]; // 3d28:2a63
db dummyd_3fd03[32]; // 3d28:2a83
db dummyd_3fd23[32]; // 3d28:2aa3
db dummyd_3fd43[32]; // 3d28:2ac3
db dummyd_3fd63[32]; // 3d28:2ae3
db dummyd_3fd83[32]; // 3d28:2b03
db dummyd_3fda3[32]; // 3d28:2b23
db dummyd_3fdc3[32]; // 3d28:2b43
db dummyd_3fde3[32]; // 3d28:2b63
db dummyd_3fe03[32]; // 3d28:2b83
db dummyd_3fe23[32]; // 3d28:2ba3
db dummyd_3fe43[32]; // 3d28:2bc3
db dummyd_3fe63[32]; // 3d28:2be3
db dummyd_3fe83[32]; // 3d28:2c03
db dummyd_3fea3[32]; // 3d28:2c23
db dummyd_3fec3[32]; // 3d28:2c43
db dummyd_3fee3[32]; // 3d28:2c63
db dummyd_3ff03[32]; // 3d28:2c83
db dummyd_3ff23[32]; // 3d28:2ca3
db dummyd_3ff43[32]; // 3d28:2cc3
db dummyd_3ff63[32]; // 3d28:2ce3
db dummyd_3ff83[32]; // 3d28:2d03
db dummyd_3ffa3[32]; // 3d28:2d23
db dummyd_3ffc3[32]; // 3d28:2d43
db dummyd_3ffe3[32]; // 3d28:2d63
db dummyd_40003[32]; // 3d28:2d83
db dummyd_40023[32]; // 3d28:2da3
db dummyd_40043[32]; // 3d28:2dc3
db dummyd_40063[32]; // 3d28:2de3
db dummyd_40083[32]; // 3d28:2e03
db dummyd_400a3[32]; // 3d28:2e23
db dummyd_400c3[32]; // 3d28:2e43
db dummyd_400e3[32]; // 3d28:2e63
db dummyd_40103[32]; // 3d28:2e83
db dummyd_40123[32]; // 3d28:2ea3
db dummyd_40143[32]; // 3d28:2ec3
db dummyd_40163[32]; // 3d28:2ee3
db dummyd_40183[32]; // 3d28:2f03
db dummyd_401a3[32]; // 3d28:2f23
db dummyd_401c3[32]; // 3d28:2f43
db dummyd_401e3[32]; // 3d28:2f63
db dummyd_40203[32]; // 3d28:2f83
db dummyd_40223[32]; // 3d28:2fa3
db dummyd_40243[32]; // 3d28:2fc3
db dummyd_40263[32]; // 3d28:2fe3
db dummyd_40283[32]; // 3d28:3003
db dummyd_402a3[32]; // 3d28:3023
db dummyd_402c3[32]; // 3d28:3043
db dummyd_402e3[32]; // 3d28:3063
db dummyd_40303[32]; // 3d28:3083
db dummyd_40323[32]; // 3d28:30a3
db dummyd_40343[32]; // 3d28:30c3
db dummyd_40363[32]; // 3d28:30e3
db dummyd_40383[32]; // 3d28:3103
db dummyd_403a3[32]; // 3d28:3123
db dummyd_403c3[32]; // 3d28:3143
db dummyd_403e3[32]; // 3d28:3163
db dummyd_40403[32]; // 3d28:3183
db dummyd_40423[32]; // 3d28:31a3
db dummyd_40443[32]; // 3d28:31c3
db dummyd_40463[32]; // 3d28:31e3
db dummyd_40483[32]; // 3d28:3203
db dummyd_404a3[32]; // 3d28:3223
db dummyd_404c3[32]; // 3d28:3243
db dummyd_404e3[32]; // 3d28:3263
db dummyd_40503[32]; // 3d28:3283
db dummyd_40523[32]; // 3d28:32a3
db dummyd_40543[32]; // 3d28:32c3
db dummyd_40563[32]; // 3d28:32e3
db dummyd_40583[32]; // 3d28:3303
db dummyd_405a3[32]; // 3d28:3323
db dummyd_405c3[32]; // 3d28:3343
db dummyd_405e3[32]; // 3d28:3363
db dummyd_40603[32]; // 3d28:3383
db dummyd_40623[32]; // 3d28:33a3
db dummyd_40643[32]; // 3d28:33c3
db dummyd_40663[32]; // 3d28:33e3
db dummyd_40683[32]; // 3d28:3403
db dummyd_406a3[32]; // 3d28:3423
db dummyd_406c3[32]; // 3d28:3443
db dummyd_406e3[32]; // 3d28:3463
db dummyd_40703[32]; // 3d28:3483
db dummyd_40723[32]; // 3d28:34a3
db dummyd_40743[32]; // 3d28:34c3
db dummyd_40763[32]; // 3d28:34e3
db dummyd_40783[32]; // 3d28:3503
db dummyd_407a3[32]; // 3d28:3523
db dummyd_407c3[32]; // 3d28:3543
db dummyd_407e3[32]; // 3d28:3563
db dummyd_40803[32]; // 3d28:3583
db dummyd_40823[32]; // 3d28:35a3
db dummyd_40843[32]; // 3d28:35c3
db dummyd_40863[32]; // 3d28:35e3
db dummyd_40883[32]; // 3d28:3603
db dummyd_408a3[32]; // 3d28:3623
db dummyd_408c3[32]; // 3d28:3643
db dummyd_408e3[32]; // 3d28:3663
db dummyd_40903[32]; // 3d28:3683
db dummyd_40923[32]; // 3d28:36a3
db dummyd_40943[32]; // 3d28:36c3
db dummyd_40963[32]; // 3d28:36e3
db dummyd_40983[32]; // 3d28:3703
db dummyd_409a3[32]; // 3d28:3723
db dummyd_409c3[32]; // 3d28:3743
db dummyd_409e3[32]; // 3d28:3763
db dummyd_40a03[32]; // 3d28:3783
db dummyd_40a23[32]; // 3d28:37a3
db dummyd_40a43[32]; // 3d28:37c3
db dummyd_40a63[32]; // 3d28:37e3
db dummyd_40a83[32]; // 3d28:3803
db dummyd_40aa3[32]; // 3d28:3823
db dummyd_40ac3[32]; // 3d28:3843
db dummyd_40ae3[32]; // 3d28:3863
db dummyd_40b03[32]; // 3d28:3883
db dummyd_40b23[32]; // 3d28:38a3
db dummyd_40b43[32]; // 3d28:38c3
db dummyd_40b63[32]; // 3d28:38e3
db dummyd_40b83[32]; // 3d28:3903
db dummyd_40ba3[32]; // 3d28:3923
db dummyd_40bc3[32]; // 3d28:3943
db dummyd_40be3[32]; // 3d28:3963
db dummyd_40c03[32]; // 3d28:3983
db dummyd_40c23[32]; // 3d28:39a3
db dummyd_40c43[32]; // 3d28:39c3
db dummyd_40c63[32]; // 3d28:39e3
db dummyd_40c83[32]; // 3d28:3a03
db dummyd_40ca3[32]; // 3d28:3a23
db dummyd_40cc3[32]; // 3d28:3a43
db dummyd_40ce3[32]; // 3d28:3a63
db dummyd_40d03[32]; // 3d28:3a83
db dummyd_40d23[32]; // 3d28:3aa3
db dummyd_40d43[32]; // 3d28:3ac3
db dummyd_40d63[32]; // 3d28:3ae3
db dummyd_40d83[32]; // 3d28:3b03
db dummyd_40da3[32]; // 3d28:3b23
db dummyd_40dc3[32]; // 3d28:3b43
db dummyd_40de3[32]; // 3d28:3b63
db dummyd_40e03[32]; // 3d28:3b83
db dummyd_40e23[32]; // 3d28:3ba3
db dummyd_40e43[32]; // 3d28:3bc3
db dummyd_40e63[32]; // 3d28:3be3
db dummyd_40e83[32]; // 3d28:3c03
db dummyd_40ea3[32]; // 3d28:3c23
db dummyd_40ec3[32]; // 3d28:3c43
db dummyd_40ee3[32]; // 3d28:3c63
db dummyd_40f03[32]; // 3d28:3c83
db dummyd_40f23[32]; // 3d28:3ca3
db dummyd_40f43[32]; // 3d28:3cc3
db dummyd_40f63[32]; // 3d28:3ce3
db dummyd_40f83[32]; // 3d28:3d03
db dummyd_40fa3[32]; // 3d28:3d23
db dummyd_40fc3[32]; // 3d28:3d43
db dummyd_40fe3[32]; // 3d28:3d63
db dummyd_41003[32]; // 3d28:3d83
db dummyd_41023[32]; // 3d28:3da3
db dummyd_41043[32]; // 3d28:3dc3
db dummyd_41063[32]; // 3d28:3de3
db dummyd_41083[32]; // 3d28:3e03
db dummyd_410a3[32]; // 3d28:3e23
db dummyd_410c3[32]; // 3d28:3e43
db dummyd_410e3[32]; // 3d28:3e63
db dummyd_41103[32]; // 3d28:3e83
db dummyd_41123[32]; // 3d28:3ea3
db dummyd_41143[32]; // 3d28:3ec3
db dummyd_41163[32]; // 3d28:3ee3
db dummyd_41183[32]; // 3d28:3f03
db dummyd_411a3[32]; // 3d28:3f23
db dummyd_411c3[32]; // 3d28:3f43
db dummyd_411e3[32]; // 3d28:3f63
db dummyd_41203[32]; // 3d28:3f83
db dummyd_41223[32]; // 3d28:3fa3
db dummyd_41243[32]; // 3d28:3fc3
db dummyd_41263[32]; // 3d28:3fe3
db dummyd_41283[32]; // 3d28:4003
db dummyd_412a3[32]; // 3d28:4023
db dummyd_412c3[32]; // 3d28:4043
db dummyd_412e3[32]; // 3d28:4063
db dummyd_41303[32]; // 3d28:4083
db dummyd_41323[32]; // 3d28:40a3
db dummyd_41343[32]; // 3d28:40c3
db dummyd_41363[32]; // 3d28:40e3
db dummyd_41383[32]; // 3d28:4103
db dummyd_413a3[32]; // 3d28:4123
db dummyd_413c3[32]; // 3d28:4143
db dummyd_413e3[32]; // 3d28:4163
db dummyd_41403[32]; // 3d28:4183
db dummyd_41423[32]; // 3d28:41a3
db dummyd_41443[32]; // 3d28:41c3
db dummyd_41463[32]; // 3d28:41e3
db dummyd_41483[32]; // 3d28:4203
db dummyd_414a3[32]; // 3d28:4223
db dummyd_414c3[32]; // 3d28:4243
db dummyd_414e3[32]; // 3d28:4263
db dummyd_41503[32]; // 3d28:4283
db dummyd_41523[32]; // 3d28:42a3
db dummyd_41543[32]; // 3d28:42c3
db dummyd_41563[32]; // 3d28:42e3
db dummyd_41583[32]; // 3d28:4303
db dummyd_415a3[32]; // 3d28:4323
db dummyd_415c3[32]; // 3d28:4343
db dummyd_415e3[32]; // 3d28:4363
db dummyd_41603[32]; // 3d28:4383
db dummyd_41623[32]; // 3d28:43a3
db dummyd_41643[32]; // 3d28:43c3
db dummyd_41663[32]; // 3d28:43e3
db dummyd_41683[32]; // 3d28:4403
db dummyd_416a3[32]; // 3d28:4423
db dummyd_416c3[32]; // 3d28:4443
db dummyd_416e3[32]; // 3d28:4463
db dummyd_41703[32]; // 3d28:4483
db dummyd_41723[32]; // 3d28:44a3
db dummyd_41743[32]; // 3d28:44c3
db dummyd_41763[32]; // 3d28:44e3
db dummyd_41783[32]; // 3d28:4503
db dummyd_417a3[32]; // 3d28:4523
db dummyd_417c3[32]; // 3d28:4543
db dummyd_417e3[32]; // 3d28:4563
db dummyd_41803[32]; // 3d28:4583
db dummyd_41823[32]; // 3d28:45a3
db dummyd_41843[32]; // 3d28:45c3
db dummyd_41863[32]; // 3d28:45e3
db dummyd_41883[32]; // 3d28:4603
db dummyd_418a3[32]; // 3d28:4623
db dummyd_418c3[32]; // 3d28:4643
db dummyd_418e3[32]; // 3d28:4663
db dummyd_41903[32]; // 3d28:4683
db dummyd_41923[32]; // 3d28:46a3
db dummyd_41943[32]; // 3d28:46c3
db dummyd_41963[32]; // 3d28:46e3
db dummyd_41983[32]; // 3d28:4703
db dummyd_419a3[32]; // 3d28:4723
db dummyd_419c3[32]; // 3d28:4743
db dummyd_419e3[32]; // 3d28:4763
db dummyd_41a03[32]; // 3d28:4783
db dummyd_41a23[32]; // 3d28:47a3
db dummyd_41a43[32]; // 3d28:47c3
db dummyd_41a63[32]; // 3d28:47e3
db dummyd_41a83[32]; // 3d28:4803
db dummyd_41aa3[32]; // 3d28:4823
db dummyd_41ac3[32]; // 3d28:4843
db dummyd_41ae3[32]; // 3d28:4863
db dummyd_41b03[32]; // 3d28:4883
db dummyd_41b23[32]; // 3d28:48a3
db dummyd_41b43[32]; // 3d28:48c3
db dummyd_41b63[32]; // 3d28:48e3
db dummyd_41b83[32]; // 3d28:4903
db dummyd_41ba3[32]; // 3d28:4923
db dummyd_41bc3[32]; // 3d28:4943
db dummyd_41be3[32]; // 3d28:4963
db dummyd_41c03[32]; // 3d28:4983
db dummyd_41c23[32]; // 3d28:49a3
db dummyd_41c43[32]; // 3d28:49c3
db dummyd_41c63[32]; // 3d28:49e3
db dummyd_41c83[32]; // 3d28:4a03
db dummyd_41ca3[32]; // 3d28:4a23
db dummyd_41cc3[32]; // 3d28:4a43
db dummyd_41ce3[32]; // 3d28:4a63
db dummyd_41d03[32]; // 3d28:4a83
db dummyd_41d23[32]; // 3d28:4aa3
db dummyd_41d43[32]; // 3d28:4ac3
db dummyd_41d63[32]; // 3d28:4ae3
db dummyd_41d83[32]; // 3d28:4b03
db dummyd_41da3[32]; // 3d28:4b23
db dummyd_41dc3[32]; // 3d28:4b43
db dummyd_41de3[32]; // 3d28:4b63
db dummyd_41e03[32]; // 3d28:4b83
db dummyd_41e23[32]; // 3d28:4ba3
db dummyd_41e43[32]; // 3d28:4bc3
db dummyd_41e63[32]; // 3d28:4be3
db dummyd_41e83[32]; // 3d28:4c03
db dummyd_41ea3[32]; // 3d28:4c23
db dummyd_41ec3[32]; // 3d28:4c43
db dummyd_41ee3[32]; // 3d28:4c63
db dummyd_41f03[32]; // 3d28:4c83
db dummyd_41f23[32]; // 3d28:4ca3
db dummyd_41f43[32]; // 3d28:4cc3
db dummyd_41f63[32]; // 3d28:4ce3
db dummyd_41f83[32]; // 3d28:4d03
db dummyd_41fa3[32]; // 3d28:4d23
db dummyd_41fc3[32]; // 3d28:4d43
db dummyd_41fe3[32]; // 3d28:4d63
db dummyd_42003[32]; // 3d28:4d83
db dummyd_42023[32]; // 3d28:4da3
db dummyd_42043[32]; // 3d28:4dc3
db dummyd_42063[32]; // 3d28:4de3
db dummyd_42083[32]; // 3d28:4e03
db dummyd_420a3[32]; // 3d28:4e23
db dummyd_420c3[32]; // 3d28:4e43
db dummyd_420e3[32]; // 3d28:4e63
db dummyd_42103[32]; // 3d28:4e83
db dummyd_42123[32]; // 3d28:4ea3
db dummyd_42143[32]; // 3d28:4ec3
db dummyd_42163[32]; // 3d28:4ee3
db dummyd_42183[32]; // 3d28:4f03
db dummyd_421a3[32]; // 3d28:4f23
db dummyd_421c3[32]; // 3d28:4f43
db dummyd_421e3[32]; // 3d28:4f63
db dummyd_42203[32]; // 3d28:4f83
db dummyd_42223[32]; // 3d28:4fa3
db dummyd_42243[32]; // 3d28:4fc3
db dummyd_42263[32]; // 3d28:4fe3
db dummyd_42283[32]; // 3d28:5003
db dummyd_422a3[32]; // 3d28:5023
db dummyd_422c3[32]; // 3d28:5043
db dummyd_422e3[32]; // 3d28:5063
db dummyd_42303[32]; // 3d28:5083
db dummyd_42323[32]; // 3d28:50a3
db dummyd_42343[32]; // 3d28:50c3
db dummyd_42363[32]; // 3d28:50e3
db dummyd_42383[32]; // 3d28:5103
db dummyd_423a3[32]; // 3d28:5123
db dummyd_423c3[32]; // 3d28:5143
db dummyd_423e3[32]; // 3d28:5163
db dummyd_42403[32]; // 3d28:5183
db dummyd_42423[32]; // 3d28:51a3
db dummyd_42443[32]; // 3d28:51c3
db dummyd_42463[32]; // 3d28:51e3
db dummyd_42483[32]; // 3d28:5203
db dummyd_424a3[32]; // 3d28:5223
db dummyd_424c3[32]; // 3d28:5243
db dummyd_424e3[32]; // 3d28:5263
db dummyd_42503[32]; // 3d28:5283
db dummyd_42523[32]; // 3d28:52a3
db dummyd_42543[32]; // 3d28:52c3
db dummyd_42563[32]; // 3d28:52e3
db dummyd_42583[32]; // 3d28:5303
db dummyd_425a3[32]; // 3d28:5323
db dummyd_425c3[32]; // 3d28:5343
db dummyd_425e3[32]; // 3d28:5363
db dummyd_42603[32]; // 3d28:5383
db dummyd_42623[32]; // 3d28:53a3
db dummyd_42643[32]; // 3d28:53c3
db dummyd_42663[32]; // 3d28:53e3
db dummyd_42683[32]; // 3d28:5403
db dummyd_426a3[32]; // 3d28:5423
db dummyd_426c3[32]; // 3d28:5443
db dummyd_426e3[32]; // 3d28:5463
db dummyd_42703[32]; // 3d28:5483
db dummyd_42723[32]; // 3d28:54a3
db dummyd_42743[32]; // 3d28:54c3
db dummyd_42763[32]; // 3d28:54e3
db dummyd_42783[32]; // 3d28:5503
db dummyd_427a3[32]; // 3d28:5523
db dummyd_427c3[32]; // 3d28:5543
db dummyd_427e3[32]; // 3d28:5563
db dummyd_42803[32]; // 3d28:5583
db dummyd_42823[32]; // 3d28:55a3
db dummyd_42843[32]; // 3d28:55c3
db dummyd_42863[32]; // 3d28:55e3
db dummyd_42883[32]; // 3d28:5603
db dummyd_428a3[32]; // 3d28:5623
db dummyd_428c3[32]; // 3d28:5643
db dummyd_428e3[32]; // 3d28:5663
db dummyd_42903[32]; // 3d28:5683
db dummyd_42923[32]; // 3d28:56a3
db dummyd_42943[32]; // 3d28:56c3
db dummyd_42963[32]; // 3d28:56e3
db dummyd_42983[32]; // 3d28:5703
db dummyd_429a3[32]; // 3d28:5723
db dummyd_429c3[32]; // 3d28:5743
db dummyd_429e3[32]; // 3d28:5763
db dummyd_42a03[32]; // 3d28:5783
db dummyd_42a23[32]; // 3d28:57a3
db dummyd_42a43; // 3d28:57c3
db dummyd_42a44;
db dummyd_42a45;
db dummyd_42a46;
db dummyd_42a47; // 3d28:57c7
db dummyd_42a48; // 3d28:57c8
db dummyd_42a49; // 3d28:57c9
db dummyd_42a4a;
db dummyd_42a4b;
db dummyd_42a4c;
db dummyd_42a4d;
db dummyd_42a4e; // 3d28:57ce
db dummyd_42a4f; // 3d28:57cf
db dummyd_42a50;
db dummyd_42a51;
db dummyd_42a52;
db dummyd_42a53;
db dummyd_42a54; // 3e02:0004
db dummyd_42a55;
db dummyd_42a56; // 3e02:0006
db dummyd_42a57;
db dummyd_42a58; // 3e02:0008
db dummyd_42a59;
db dummyd_42a5a; // 3e02:000a
db dummyd_42a5b;
db dummyd_42a5c; // 3e02:000c
db dummyd_42a5d; // 3e02:000d
db dummyd_42a5e; // 3e02:000e
db dummyd_42a5f; // 3e02:000f
db dummyd_42a60;
db dummyd_42a61;
db dummyd_42a62; // 3e02:0012
db dummyd_42a63;
db dummyd_42a64; // 3e02:0014
db unk_51f75; // 3e02:0015
db dummyd_42a66[32]; // 3e02:0016
db dummyd_42a86[32]; // 3e02:0036
db dummyd_42aa6[32]; // 3e02:0056
db dummyd_42ac6[32]; // 3e02:0076
db dummyd_42ae6[32]; // 3e02:0096
db dummyd_42b06[32]; // 3e02:00b6
db dummyd_42b26[32]; // 3e02:00d6
db dummyd_42b46[32]; // 3e02:00f6
db dummyd_42b66[32]; // 3e02:0116
db dummyd_42b86[32]; // 3e02:0136
db dummyd_42ba6[32]; // 3e02:0156
db dummyd_42bc6[32]; // 3e02:0176
db dummyd_42be6[32]; // 3e02:0196
db dummyd_42c06[32]; // 3e02:01b6
db dummyd_42c26[32]; // 3e02:01d6
db dummyd_42c46[32]; // 3e02:01f6
db dummyd_42c66[32]; // 3e02:0216
db dummyd_42c86[32]; // 3e02:0236
db dummyd_42ca6[32]; // 3e02:0256
db dummyd_42cc6[32]; // 3e02:0276
db dummyd_42ce6[32]; // 3e02:0296
db dummyd_42d06[32]; // 3e02:02b6
db dummyd_42d26[32]; // 3e02:02d6
db dummyd_42d46[32]; // 3e02:02f6
db dummyd_42d66[32]; // 3e02:0316
db dummyd_42d86[32]; // 3e02:0336
db dummyd_42da6[32]; // 3e02:0356
db dummyd_42dc6[32]; // 3e02:0376
db dummyd_42de6[32]; // 3e02:0396
db dummyd_42e06[32]; // 3e02:03b6
db dummyd_42e26[32]; // 3e02:03d6
db dummyd_42e46[32]; // 3e02:03f6
db dummyd_42e66[32]; // 3e02:0416
db dummyd_42e86[32]; // 3e02:0436
db dummyd_42ea6[32]; // 3e02:0456
db dummyd_42ec6[32]; // 3e02:0476
db dummyd_42ee6[32]; // 3e02:0496
db dummyd_42f06[32]; // 3e02:04b6
db dummyd_42f26[32]; // 3e02:04d6
db dummyd_42f46[32]; // 3e02:04f6
db dummyd_42f66[32]; // 3e02:0516
db dummyd_42f86[32]; // 3e02:0536
db dummyd_42fa6[32]; // 3e02:0556
db dummyd_42fc6[32]; // 3e02:0576
db dummyd_42fe6[32]; // 3e02:0596
db dummyd_43006[32]; // 3e02:05b6
db dummyd_43026[32]; // 3e02:05d6
db dummyd_43046[32]; // 3e02:05f6
db dummyd_43066[32]; // 3e02:0616
db dummyd_43086[32]; // 3e02:0636
db dummyd_430a6[32]; // 3e02:0656
db dummyd_430c6[32]; // 3e02:0676
db dummyd_430e6[32]; // 3e02:0696
db dummyd_43106[32]; // 3e02:06b6
db dummyd_43126[32]; // 3e02:06d6
db dummyd_43146[32]; // 3e02:06f6
db dummyd_43166[32]; // 3e02:0716
db dummyd_43186[32]; // 3e02:0736
db dummyd_431a6; // 3e02:0756
db dummyd_431a7; // 3e02:0757
db dummyd_431a8; // 3e02:0758
db dummyd_431a9; // 3e02:0759
db dummyd_431aa; // 3e02:075a
db dummyd_431ab; // 3e02:075b
db dummyd_431ac; // 3e02:075c
db dummyd_431ad;
db dummyd_431ae; // 3e02:075e
db dummyd_431af; // 3e02:075f
db dummyd_431b0[32]; // 3e0e:0000
db dummyd_431d0[32]; // 3e0e:0020
db dummyd_431f0[32]; // 3e0e:0040
db dummyd_43210[32]; // 3e0e:0060
db dummyd_43230[32]; // 3e0e:0080
db dummyd_43250[32]; // 3e0e:00a0
db dummyd_43270[32]; // 3e0e:00c0
db dummyd_43290[32]; // 3e0e:00e0
db dummyd_432b0[32]; // 3e0e:0100
db dummyd_432d0[32]; // 3e0e:0120
db dummyd_432f0[32]; // 3e0e:0140
db dummyd_43310[32]; // 3e0e:0160
db dummyd_43330[32]; // 3e0e:0180
db dummyd_43350[32]; // 3e0e:01a0
db dummyd_43370[32]; // 3e0e:01c0
db dummyd_43390[32]; // 3e0e:01e0
db dummyd_433b0; // 3e0e:0200
db dummyd_433b1; // 3e0e:0201
db dummyd_433b2; // 3e0e:0202
db dummyd_433b3; // 3e0e:0203
db dummyd_433b4; // 3e0e:0204
db dummyd_433b5;
db dummyd_433b6;
db dummyd_433b7;
db dummyd_433b8; // 3e0e:0208
db dummyd_433b9; // 3e0e:0209
db dummyd_433ba; // 3e0e:020a
db dummyd_433bb;
db unk_528cc; // 3e0e:020c
db dummyd_433bd[32]; // 3e0e:020d
db dummyd_433dd[32]; // 3e0e:022d
db dummyd_433fd[32]; // 3e0e:024d
db dummyd_4341d[32]; // 3e0e:026d
db dummyd_4343d[32]; // 3e0e:028d
db dummyd_4345d[32]; // 3e0e:02ad
db dummyd_4347d[32]; // 3e0e:02cd
db dummyd_4349d[32]; // 3e0e:02ed
db dummyd_434bd[32]; // 3e0e:030d
db dummyd_434dd[32]; // 3e0e:032d
db dummyd_434fd; // 3e0e:034d
db dummyd_434fe;
db dummyd_434ff;
db dummyd_43500;
db dummyd_43501;
db dummyd_43502;
db dummyd_43503;
db dummyd_43504; // 3e0e:0354
db dummyd_43505; // 3e0e:0355
db dummyd_43506; // 3e0e:0356
db dummyd_43507;
db dummyd_43508;
db dummyd_43509;
db dummyd_4350a;
db dummyd_4350b;
db dummyd_4350c; // 3e0e:035c
db dummyd_4350d; // 3e0e:035d
db dummyd_4350e; // 3e0e:035e
db dummyd_4350f;
db dummyd_43510;
db dummyd_43511;
db dummyd_43512;
db dummyd_43513; // 3e0e:0363
db dummyd_43514; // 3e0e:0364
db dummyd_43515; // 3e0e:0365
db unk_52a26; // 3e0e:0366
db dummyd_43517[32]; // 3e0e:0367
db dummyd_43537[32]; // 3e0e:0387
db dummyd_43557[32]; // 3e0e:03a7
db dummyd_43577[32]; // 3e0e:03c7
db dummyd_43597[32]; // 3e0e:03e7
db dummyd_435b7[32]; // 3e0e:0407
db dummyd_435d7[32]; // 3e0e:0427
db dummyd_435f7[32]; // 3e0e:0447
db dummyd_43617[32]; // 3e0e:0467
db dummyd_43637[32]; // 3e0e:0487
db dummyd_43657[32]; // 3e0e:04a7
db dummyd_43677[32]; // 3e0e:04c7
db dummyd_43697[32]; // 3e0e:04e7
db dummyd_436b7[32]; // 3e0e:0507
db dummyd_436d7[32]; // 3e0e:0527
db dummyd_436f7[32]; // 3e0e:0547
db dummyd_43717[32]; // 3e0e:0567
db dummyd_43737[32]; // 3e0e:0587
db dummyd_43757[32]; // 3e0e:05a7
db dummyd_43777[32]; // 3e0e:05c7
db dummyd_43797[32]; // 3e0e:05e7
db dummyd_437b7[32]; // 3e0e:0607
db dummyd_437d7[32]; // 3e0e:0627
db dummyd_437f7[32]; // 3e0e:0647
db dummyd_43817[32]; // 3e0e:0667
db dummyd_43837[32]; // 3e0e:0687
db dummyd_43857[32]; // 3e0e:06a7
db dummyd_43877[32]; // 3e0e:06c7
db dummyd_43897[32]; // 3e0e:06e7
db dummyd_438b7[32]; // 3e0e:0707
db dummyd_438d7[32]; // 3e0e:0727
db dummyd_438f7[32]; // 3e0e:0747
db dummyd_43917[32]; // 3e0e:0767
db dummyd_43937[32]; // 3e0e:0787
db dummyd_43957;
db dummyd_43958;
db dummyd_43959; // 3e0e:07a9
db dummyd_4395a;
db dummyd_4395b;
db dummyd_4395c; // 3e0e:07ac
db dummyd_4395d; // 3e0e:07ad
db dummyd_4395e;
db dummyd_4395f;
db dummyd_43960; // 3e0e:07b0
db dummyd_43961; // 3e0e:07b1
db dummyd_43962;
db dummyd_43963;
db dummyd_43964; // 3e0e:07b4
db dummyd_43965; // 3e0e:07b5
db dummyd_43966;
db dummyd_43967;
db dummyd_43968; // 3e0e:07b8
db dummyd_43969; // 3e0e:07b9
db dummyd_4396a; // 3e0e:07ba
db dummyd_4396b;
db dummyd_4396c; // 3e0e:07bc
db dummyd_4396d; // 3e0e:07bd
db dummyd_4396e; // 3e0e:07be
db dummyd_4396f;
db dummyd_43970[32]; // 3e1b:0000
db dummyd_43990[32]; // 3e1b:0020
db dummyd_439b0[32]; // 3e1b:0040
db dummyd_439d0[32]; // 3e1b:0060
db dummyd_439f0[32]; // 3e1b:0080
db dummyd_43a10[32]; // 3e1b:00a0
db dummyd_43a30[32]; // 3e1b:00c0
db dummyd_43a50[32]; // 3e1b:00e0
db dummyd_43a70[32]; // 3e1b:0100
db dummyd_43a90[32]; // 3e1b:0120
db dummyd_43ab0[32]; // 3e1b:0140
db dummyd_43ad0[32]; // 3e1b:0160
db dummyd_43af0[32]; // 3e1b:0180
db dummyd_43b10[32]; // 3e1b:01a0
db dummyd_43b30[32]; // 3e1b:01c0
db dummyd_43b50[32]; // 3e1b:01e0
db dummyd_43b70[32]; // 3e1b:0200
db dummyd_43b90[32]; // 3e1b:0220
db dummyd_43bb0[32]; // 3e1b:0240
db dummyd_43bd0[32]; // 3e1b:0260
db dummyd_43bf0[32]; // 3e1b:0280
db dummyd_43c10[32]; // 3e1b:02a0
db dummyd_43c30[32]; // 3e1b:02c0
db dummyd_43c50[32]; // 3e1b:02e0
db dummyd_43c70[32]; // 3e1b:0300
db dummyd_43c90[32]; // 3e1b:0320
db dummyd_43cb0[32]; // 3e1b:0340
db dummyd_43cd0[32]; // 3e1b:0360
db dummyd_43cf0[32]; // 3e1b:0380
db dummyd_43d10[32]; // 3e1b:03a0
db dummyd_43d30[32]; // 3e1b:03c0
db dummyd_43d50[32]; // 3e1b:03e0
db dummyd_43d70[32]; // 3e1b:0400
db dummyd_43d90[32]; // 3e1b:0420
db dummyd_43db0[32]; // 3e1b:0440
db dummyd_43dd0[32]; // 3e1b:0460
db dummyd_43df0[32]; // 3e1b:0480
db dummyd_43e10[32]; // 3e1b:04a0
db dummyd_43e30[32]; // 3e1b:04c0
db dummyd_43e50[32]; // 3e1b:04e0
db dummyd_43e70[32]; // 3e1b:0500
db dummyd_43e90[32]; // 3e1b:0520
db dummyd_43eb0[32]; // 3e1b:0540
db dummyd_43ed0[32]; // 3e1b:0560
db dummyd_43ef0[32]; // 3e1b:0580
db dummyd_43f10[32]; // 3e1b:05a0
db dummyd_43f30[32]; // 3e1b:05c0
db dummyd_43f50[32]; // 3e1b:05e0
db dummyd_43f70[32]; // 3e1b:0600
db dummyd_43f90[32]; // 3e1b:0620
db dummyd_43fb0[32]; // 3e1b:0640
db dummyd_43fd0[32]; // 3e1b:0660
db dummyd_43ff0[32]; // 3e1b:0680
db dummyd_44010[32]; // 3e1b:06a0
db dummyd_44030[32]; // 3e1b:06c0
db dummyd_44050[32]; // 3e1b:06e0
db dummyd_44070[32]; // 3e1b:0700
db dummyd_44090[32]; // 3e1b:0720
db dummyd_440b0[32]; // 3e1b:0740
db dummyd_440d0[32]; // 3e1b:0760
db dummyd_440f0[32]; // 3e1b:0780
db dummyd_44110[32]; // 3e1b:07a0
db dummyd_44130[32]; // 3e1b:07c0
db dummyd_44150[32]; // 3e1b:07e0
db dummyd_44170[32]; // 3e1b:0800
db dummyd_44190[32]; // 3e1b:0820
db dummyd_441b0[32]; // 3e1b:0840
db dummyd_441d0[32]; // 3e1b:0860
db dummyd_441f0[32]; // 3e1b:0880
db dummyd_44210[32]; // 3e1b:08a0
db dummyd_44230[32]; // 3e1b:08c0
db dummyd_44250[32]; // 3e1b:08e0
db dummyd_44270[32]; // 3e1b:0900
db dummyd_44290[32]; // 3e1b:0920
db dummyd_442b0[32]; // 3e1b:0940
db dummyd_442d0[32]; // 3e1b:0960
db dummyd_442f0[32]; // 3e1b:0980
db dummyd_44310[32]; // 3e1b:09a0
db dummyd_44330[32]; // 3e1b:09c0
db dummyd_44350[32]; // 3e1b:09e0
db dummyd_44370[32]; // 3e1b:0a00
db dummyd_44390[32]; // 3e1b:0a20
db dummyd_443b0[32]; // 3e1b:0a40
db dummyd_443d0[32]; // 3e1b:0a60
db dummyd_443f0[32]; // 3e1b:0a80
db dummyd_44410[32]; // 3e1b:0aa0
db dummyd_44430[32]; // 3e1b:0ac0
db dummyd_44450[32]; // 3e1b:0ae0
db dummyd_44470[32]; // 3e1b:0b00
db dummyd_44490[32]; // 3e1b:0b20
db dummyd_444b0[32]; // 3e1b:0b40
db dummyd_444d0[32]; // 3e1b:0b60
db dummyd_444f0[32]; // 3e1b:0b80
db dummyd_44510[32]; // 3e1b:0ba0
db dummyd_44530[32]; // 3e1b:0bc0
db dummyd_44550[32]; // 3e1b:0be0
db dummyd_44570[32]; // 3e1b:0c00
db dummyd_44590[32]; // 3e1b:0c20
db dummyd_445b0[32]; // 3e1b:0c40
db dummyd_445d0[32]; // 3e1b:0c60
db dummyd_445f0[32]; // 3e1b:0c80
db dummyd_44610[32]; // 3e1b:0ca0
db dummyd_44630[32]; // 3e1b:0cc0
db dummyd_44650; // 3e1b:0ce0
db dummyd_44651; // 3e1b:0ce1
db unk_53b62; // 3e1b:0ce2
db dummyd_44653[32]; // 3e1b:0ce3
db dummyd_44673[32]; // 3e1b:0d03
db dummyd_44693[32]; // 3e1b:0d23
db dummyd_446b3[32]; // 3e1b:0d43
db dummyd_446d3[32]; // 3e1b:0d63
db dummyd_446f3[32]; // 3e1b:0d83
db dummyd_44713[32]; // 3e1b:0da3
db dummyd_44733[32]; // 3e1b:0dc3
db dummyd_44753[32]; // 3e1b:0de3
db dummyd_44773[32]; // 3e1b:0e03
db dummyd_44793[32]; // 3e1b:0e23
db dummyd_447b3[32]; // 3e1b:0e43
db dummyd_447d3[32]; // 3e1b:0e63
db dummyd_447f3[32]; // 3e1b:0e83
db dummyd_44813[32]; // 3e1b:0ea3
db dummyd_44833[32]; // 3e1b:0ec3
db dummyd_44853[32]; // 3e1b:0ee3
db dummyd_44873[32]; // 3e1b:0f03
db dummyd_44893[32]; // 3e1b:0f23
db dummyd_448b3[32]; // 3e1b:0f43
db dummyd_448d3[32]; // 3e1b:0f63
db dummyd_448f3[32]; // 3e1b:0f83
db dummyd_44913[32]; // 3e1b:0fa3
db dummyd_44933[32]; // 3e1b:0fc3
db dummyd_44953[32]; // 3e1b:0fe3
db dummyd_44973[32]; // 3e1b:1003
db dummyd_44993[32]; // 3e1b:1023
db dummyd_449b3[32]; // 3e1b:1043
db dummyd_449d3[32]; // 3e1b:1063
db dummyd_449f3[32]; // 3e1b:1083
db dummyd_44a13[32]; // 3e1b:10a3
db dummyd_44a33[32]; // 3e1b:10c3
db dummyd_44a53[32]; // 3e1b:10e3
db dummyd_44a73[32]; // 3e1b:1103
db dummyd_44a93[32]; // 3e1b:1123
db dummyd_44ab3[32]; // 3e1b:1143
db dummyd_44ad3;
db dummyd_44ad4; // 3e1b:1164
db dummyd_44ad5; // 3e1b:1165
db dummyd_44ad6; // 3e1b:1166
db dummyd_44ad7;
db dummyd_44ad8; // 3e1b:1168
db dummyd_44ad9; // 3e1b:1169
db dummyd_44ada;
db dummyd_44adb;
db dummyd_44adc; // 3e1b:116c
db dummyd_44add; // 3e1b:116d
db dummyd_44ade;
db dummyd_44adf;
db dummyd_44ae0; // 3e1b:1170
db dummyd_44ae1; // 3e1b:1171
db dummyd_44ae2; // 3e1b:1172
db dummyd_44ae3;
db dummyd_44ae4; // 3e1b:1174
db dummyd_44ae5; // 3e1b:1175
db dummyd_44ae6; // 3e1b:1176
db dummyd_44ae7;
db dummyd_44ae8; // 3e1b:1178
db dummyd_44ae9; // 3e1b:1179
db dummyd_44aea; // 3e1b:117a
db dummyd_44aeb;
db dummyd_44aec; // 3e1b:117c
db dummyd_44aed; // 3e1b:117d
db dummyd_44aee; // 3e1b:117e
db dummyd_44aef;
db dummyd_44af0; // 4398:0000
db dummyd_44af1; // 4398:0001
db dummyd_44af2; // 4398:0002
db dummyd_44af3;
db dummyd_44af4; // 4398:0004
db dummyd_44af5; // 4398:0005
db dummyd_44af6;
db dummyd_44af7;
db dummyd_44af8;
db dummyd_44af9;
db dummyd_44afa; // 4398:000a
db dummyd_44afb;
db dummyd_44afc; // 4398:000c
db dummyd_44afd;
db dummyd_44afe; // 4398:000e
db dummyd_44aff;
db dummyd_44b00; // 4398:0010
db dummyd_44b01;
db dummyd_44b02; // 4398:0012
db dummyd_44b03;
db dummyd_44b04; // 4398:0014
db unk_54015; // 4398:0015
db dummyd_44b06[32]; // 4398:0016
db dummyd_44b26[32]; // 4398:0036
db dummyd_44b46[32]; // 4398:0056
db dummyd_44b66[32]; // 4398:0076
db dummyd_44b86[32]; // 4398:0096
db dummyd_44ba6[32]; // 4398:00b6
db dummyd_44bc6[32]; // 4398:00d6
db dummyd_44be6[32]; // 4398:00f6
db dummyd_44c06[32]; // 4398:0116
db dummyd_44c26[32]; // 4398:0136
db dummyd_44c46[32]; // 4398:0156
db dummyd_44c66[32]; // 4398:0176
db dummyd_44c86[32]; // 4398:0196
db dummyd_44ca6[32]; // 4398:01b6
db dummyd_44cc6[32]; // 4398:01d6
db dummyd_44ce6[32]; // 4398:01f6
db dummyd_44d06[32]; // 4398:0216
db dummyd_44d26[32]; // 4398:0236
db dummyd_44d46[32]; // 4398:0256
db dummyd_44d66[32]; // 4398:0276
db dummyd_44d86[32]; // 4398:0296
db dummyd_44da6[32]; // 4398:02b6
db dummyd_44dc6[32]; // 4398:02d6
db dummyd_44de6[32]; // 4398:02f6
db dummyd_44e06[32]; // 4398:0316
db dummyd_44e26[32]; // 4398:0336
db dummyd_44e46[32]; // 4398:0356
db dummyd_44e66[32]; // 4398:0376
db dummyd_44e86[32]; // 4398:0396
db dummyd_44ea6[32]; // 4398:03b6
db dummyd_44ec6[32]; // 4398:03d6
db dummyd_44ee6[32]; // 4398:03f6
db dummyd_44f06[32]; // 4398:0416
db dummyd_44f26[32]; // 4398:0436
db dummyd_44f46[32]; // 4398:0456
db dummyd_44f66[32]; // 4398:0476
db dummyd_44f86[32]; // 4398:0496
db dummyd_44fa6[32]; // 4398:04b6
db dummyd_44fc6[32]; // 4398:04d6
db dummyd_44fe6[32]; // 4398:04f6
db dummyd_45006[32]; // 4398:0516
db dummyd_45026[32]; // 4398:0536
db dummyd_45046[32]; // 4398:0556
db dummyd_45066[32]; // 4398:0576
db dummyd_45086[32]; // 4398:0596
db dummyd_450a6[32]; // 4398:05b6
db dummyd_450c6[32]; // 4398:05d6
db dummyd_450e6[32]; // 4398:05f6
db dummyd_45106[32]; // 4398:0616
db dummyd_45126[32]; // 4398:0636
db dummyd_45146[32]; // 4398:0656
db dummyd_45166[32]; // 4398:0676
db dummyd_45186[32]; // 4398:0696
db dummyd_451a6[32]; // 4398:06b6
db dummyd_451c6[32]; // 4398:06d6
db dummyd_451e6[32]; // 4398:06f6
db dummyd_45206[32]; // 4398:0716
db dummyd_45226[32]; // 4398:0736
db dummyd_45246[32]; // 4398:0756
db dummyd_45266[32]; // 4398:0776
db dummyd_45286[32]; // 4398:0796
db dummyd_452a6; // 4398:07b6
db dummyd_452a7;
db dummyd_452a8; // 4398:07b8
db dummyd_452a9; // 4398:07b9
db dummyd_452aa; // 4398:07ba
db dummyd_452ab;
db dummyd_452ac; // 4398:07bc
db dummyd_452ad; // 4398:07bd
db dummyd_452ae; // 4398:07be
db dummyd_452af;
db dummyd_452b0; // 4398:07c0
db dummyd_452b1; // 4398:07c1
db dummyd_452b2; // 4398:07c2
db dummyd_452b3;
db unk_547c4; // 4398:07c4
db dummyd_452b5[32]; // 4398:07c5
db dummyd_452d5[32]; // 4398:07e5
db dummyd_452f5[32]; // 4398:0805
db dummyd_45315[32]; // 4398:0825
db dummyd_45335[32]; // 4398:0845
db dummyd_45355[32]; // 4398:0865
db dummyd_45375[32]; // 4398:0885
db dummyd_45395[32]; // 4398:08a5
db dummyd_453b5[32]; // 4398:08c5
db dummyd_453d5[32]; // 4398:08e5
db dummyd_453f5[32]; // 4398:0905
db dummyd_45415[32]; // 4398:0925
db dummyd_45435[32]; // 4398:0945
db dummyd_45455;
db dummyd_45456; // 4398:0966
db dummyd_45457;
db dummyd_45458; // 4398:0968
db dummyd_45459;
db dummyd_4545a;
db dummyd_4545b;
db dummyd_4545c; // 4398:096c
db dummyd_4545d;
db dummyd_4545e; // 4398:096e
db dummyd_4545f;
db dummyd_45460; // 4398:0970
db dummyd_45461;
db dummyd_45462; // 4398:0972
db dummyd_45463;
db dummyd_45464; // 4398:0974
db dummyd_45465;
db dummyd_45466; // 4398:0976
db dummyd_45467;
db dummyd_45468;
db dummyd_45469;
db dummyd_4546a; // 4398:097a
db dummyd_4546b;
db dummyd_4546c; // 4398:097c
db dummyd_4546d;
db dummyd_4546e; // 4398:097e
db dummyd_4546f;
db dummyd_45470; // 440e:0000
db dummyd_45471;
db dummyd_45472; // 440e:0002
db unk_54983; // 440e:0003
db dummyd_45474[32]; // 440e:0004
db dummyd_45494[32]; // 440e:0024
db dummyd_454b4[32]; // 440e:0044
db dummyd_454d4[32]; // 440e:0064
db dummyd_454f4[32]; // 440e:0084
db dummyd_45514[32]; // 440e:00a4
db dummyd_45534[32]; // 440e:00c4
db dummyd_45554[32]; // 440e:00e4
db dummyd_45574[32]; // 440e:0104
db dummyd_45594[32]; // 440e:0124
db dummyd_455b4[32]; // 440e:0144
db dummyd_455d4[32]; // 440e:0164
db dummyd_455f4[32]; // 440e:0184
db dummyd_45614[32]; // 440e:01a4
db dummyd_45634[32]; // 440e:01c4
db dummyd_45654[32]; // 440e:01e4
db dummyd_45674[32]; // 440e:0204
db dummyd_45694[32]; // 440e:0224
db dummyd_456b4[32]; // 440e:0244
db dummyd_456d4[32]; // 440e:0264
db dummyd_456f4[32]; // 440e:0284
db dummyd_45714[32]; // 440e:02a4
db dummyd_45734[32]; // 440e:02c4
db dummyd_45754[32]; // 440e:02e4
db dummyd_45774[32]; // 440e:0304
db dummyd_45794[32]; // 440e:0324
db dummyd_457b4[32]; // 440e:0344
db dummyd_457d4[32]; // 440e:0364
db dummyd_457f4[32]; // 440e:0384
db dummyd_45814[32]; // 440e:03a4
db dummyd_45834[32]; // 440e:03c4
db dummyd_45854[32]; // 440e:03e4
db dummyd_45874[32]; // 440e:0404
db dummyd_45894[32]; // 440e:0424
db dummyd_458b4[32]; // 440e:0444
db dummyd_458d4[32]; // 440e:0464
db dummyd_458f4[32]; // 440e:0484
db dummyd_45914[32]; // 440e:04a4
db dummyd_45934[32]; // 440e:04c4
db dummyd_45954[32]; // 440e:04e4
db dummyd_45974[32]; // 440e:0504
db dummyd_45994[32]; // 440e:0524
db dummyd_459b4[32]; // 440e:0544
db dummyd_459d4[32]; // 440e:0564
db dummyd_459f4[32]; // 440e:0584
db dummyd_45a14[32]; // 440e:05a4
db dummyd_45a34[32]; // 440e:05c4
db dummyd_45a54[32]; // 440e:05e4
db dummyd_45a74[32]; // 440e:0604
db dummyd_45a94[32]; // 440e:0624
db dummyd_45ab4[32]; // 440e:0644
db dummyd_45ad4[32]; // 440e:0664
db dummyd_45af4[32]; // 440e:0684
db dummyd_45b14[32]; // 440e:06a4
db dummyd_45b34[32]; // 440e:06c4
db dummyd_45b54[32]; // 440e:06e4
db dummyd_45b74[32]; // 440e:0704
db dummyd_45b94[32]; // 440e:0724
db dummyd_45bb4[32]; // 440e:0744
db dummyd_45bd4[32]; // 440e:0764
db dummyd_45bf4[32]; // 440e:0784
db dummyd_45c14[32]; // 440e:07a4
db dummyd_45c34[32]; // 440e:07c4
db dummyd_45c54[32]; // 440e:07e4
db dummyd_45c74[32]; // 440e:0804
db dummyd_45c94[32]; // 440e:0824
db dummyd_45cb4[32]; // 440e:0844
db dummyd_45cd4[32]; // 440e:0864
db dummyd_45cf4[32]; // 440e:0884
db dummyd_45d14[32]; // 440e:08a4
db dummyd_45d34[32]; // 440e:08c4
db dummyd_45d54[32]; // 440e:08e4
db dummyd_45d74[32]; // 440e:0904
db dummyd_45d94[32]; // 440e:0924
db dummyd_45db4[32]; // 440e:0944
db dummyd_45dd4[32]; // 440e:0964
db dummyd_45df4[32]; // 440e:0984
db dummyd_45e14[32]; // 440e:09a4
db dummyd_45e34[32]; // 440e:09c4
db dummyd_45e54[32]; // 440e:09e4
db dummyd_45e74[32]; // 440e:0a04
db dummyd_45e94[32]; // 440e:0a24
db dummyd_45eb4[32]; // 440e:0a44
db dummyd_45ed4[32]; // 440e:0a64
db dummyd_45ef4[32]; // 440e:0a84
db dummyd_45f14[32]; // 440e:0aa4
db dummyd_45f34[32]; // 440e:0ac4
db dummyd_45f54; // 440e:0ae4
db dummyd_45f55; // 440e:0ae5
db dummyd_45f56; // 440e:0ae6
db dummyd_45f57; // 440e:0ae7
db dummyd_45f58; // 440e:0ae8
db dummyd_45f59; // 440e:0ae9
db dummyd_45f5a; // 440e:0aea
db dummyd_45f5b; // 440e:0aeb
db dummyd_45f5c; // 440e:0aec
db dummyd_45f5d; // 440e:0aed
db dummyd_45f5e; // 440e:0aee
db dummyd_45f5f; // 440e:0aef
db dummyd_45f60; // 440e:0af0
db dummyd_45f61; // 440e:0af1
db dummyd_45f62; // 440e:0af2
db dummyd_45f63; // 440e:0af3
db dummyd_45f64; // 440e:0af4
db dummyd_45f65; // 440e:0af5
db dummyd_45f66; // 440e:0af6
db dummyd_45f67; // 440e:0af7
db dummyd_45f68; // 440e:0af8
db dummyd_45f69; // 440e:0af9
db dummyd_45f6a; // 440e:0afa
db dummyd_45f6b; // 440e:0afb
db dummyd_45f6c; // 440e:0afc
db dummyd_45f6d;
db dummyd_45f6e; // 440e:0afe
db dummyd_45f6f; // 440e:0aff
db dummyd_45f70; // 440e:0b00
db dummyd_45f71; // 440e:0b01
db unk_55482; // 440e:0b02
db dummyd_45f73[32]; // 440e:0b03
db dummyd_45f93[32]; // 440e:0b23
db dummyd_45fb3; // 440e:0b43
db dummyd_45fb4; // 440e:0b44
db dummyd_45fb5; // 440e:0b45
db dummyd_45fb6; // 440e:0b46
db dummyd_45fb7; // 440e:0b47
db dummyd_45fb8; // 440e:0b48
db dummyd_45fb9; // 440e:0b49
db dummyd_45fba; // 440e:0b4a
db dummyd_45fbb; // 440e:0b4b
db dummyd_45fbc;
db dummyd_45fbd;
db dummyd_45fbe; // 440e:0b4e
db dummyd_45fbf; // 440e:0b4f
db dummyd_45fc0; // 440e:0b50
db dummyd_45fc1; // 440e:0b51
db dummyd_45fc2; // 440e:0b52
db dummyd_45fc3; // 440e:0b53
db dummyd_45fc4;
db dummyd_45fc5;
db dummyd_45fc6; // 440e:0b56
db dummyd_45fc7; // 440e:0b57
db dummyd_45fc8; // 440e:0b58
db dummyd_45fc9; // 440e:0b59
db dummyd_45fca; // 440e:0b5a
db dummyd_45fcb; // 440e:0b5b
db dummyd_45fcc; // 440e:0b5c
db dummyd_45fcd; // 440e:0b5d
db dummyd_45fce; // 440e:0b5e
db dummyd_45fcf; // 440e:0b5f
db dummyd_45fd0;
db dummyd_45fd1;
db dummyd_45fd2; // 448a:0002
db dummyd_45fd3;
db dummyd_45fd4; // 448a:0004
db unk_554e5; // 448a:0005
db dummyd_45fd6[32]; // 448a:0006
db dummyd_45ff6[32]; // 448a:0026
db dummyd_46016[32]; // 448a:0046
db dummyd_46036[32]; // 448a:0066
db dummyd_46056[32]; // 448a:0086
db dummyd_46076[32]; // 448a:00a6
db dummyd_46096[32]; // 448a:00c6
db dummyd_460b6[32]; // 448a:00e6
db dummyd_460d6[32]; // 448a:0106
db dummyd_460f6[32]; // 448a:0126
db dummyd_46116[32]; // 448a:0146
db dummyd_46136[32]; // 448a:0166
db dummyd_46156[32]; // 448a:0186
db dummyd_46176[32]; // 448a:01a6
db dummyd_46196[32]; // 448a:01c6
db dummyd_461b6[32]; // 448a:01e6
db dummyd_461d6[32]; // 448a:0206
db dummyd_461f6[32]; // 448a:0226
db dummyd_46216[32]; // 448a:0246
db dummyd_46236[32]; // 448a:0266
db dummyd_46256[32]; // 448a:0286
db dummyd_46276[32]; // 448a:02a6
db dummyd_46296[32]; // 448a:02c6
db dummyd_462b6[32]; // 448a:02e6
db dummyd_462d6[32]; // 448a:0306
db dummyd_462f6[32]; // 448a:0326
db dummyd_46316[32]; // 448a:0346
db dummyd_46336[32]; // 448a:0366
db dummyd_46356[32]; // 448a:0386
db dummyd_46376[32]; // 448a:03a6
db dummyd_46396[32]; // 448a:03c6
db dummyd_463b6[32]; // 448a:03e6
db dummyd_463d6[32]; // 448a:0406
db dummyd_463f6[32]; // 448a:0426
db dummyd_46416[32]; // 448a:0446
db dummyd_46436[32]; // 448a:0466
db dummyd_46456[32]; // 448a:0486
db dummyd_46476[32]; // 448a:04a6
db dummyd_46496[32]; // 448a:04c6
db dummyd_464b6[32]; // 448a:04e6
db dummyd_464d6[32]; // 448a:0506
db dummyd_464f6[32]; // 448a:0526
db dummyd_46516[32]; // 448a:0546
db dummyd_46536[32]; // 448a:0566
db dummyd_46556[32]; // 448a:0586
db dummyd_46576[32]; // 448a:05a6
db dummyd_46596[32]; // 448a:05c6
db dummyd_465b6[32]; // 448a:05e6
db dummyd_465d6[32]; // 448a:0606
db dummyd_465f6[32]; // 448a:0626
db dummyd_46616[32]; // 448a:0646
db dummyd_46636[32]; // 448a:0666
db dummyd_46656[32]; // 448a:0686
db dummyd_46676[32]; // 448a:06a6
db dummyd_46696[32]; // 448a:06c6
db dummyd_466b6[32]; // 448a:06e6
db dummyd_466d6[32]; // 448a:0706
db dummyd_466f6[32]; // 448a:0726
db dummyd_46716[32]; // 448a:0746
db dummyd_46736[32]; // 448a:0766
db dummyd_46756[32]; // 448a:0786
db dummyd_46776[32]; // 448a:07a6
db dummyd_46796[32]; // 448a:07c6
db dummyd_467b6; // 448a:07e6
db dummyd_467b7; // 448a:07e7
db dummyd_467b8; // 448a:07e8
db dummyd_467b9; // 448a:07e9
db dummyd_467ba; // 448a:07ea
db dummyd_467bb;
db dummyd_467bc; // 448a:07ec
db dummyd_467bd;
db dummyd_467be; // 448a:07ee
db dummyd_467bf; // 448a:07ef
db dummyd_467c0; // 448a:07f0
db dummyd_467c1; // 448a:07f1
db dummyd_467c2; // 448a:07f2
db dummyd_467c3; // 448a:07f3
db dummyd_467c4; // 448a:07f4
db dummyd_467c5; // 448a:07f5
db dummyd_467c6; // 448a:07f6
db dummyd_467c7; // 448a:07f7
db dummyd_467c8; // 448a:07f8
db dummyd_467c9; // 448a:07f9
db dummyd_467ca; // 448a:07fa
db dummyd_467cb; // 448a:07fb
db dummyd_467cc; // 448a:07fc
db dummyd_467cd;
db dummyd_467ce; // 448a:0800
db unk_55ce1; // 448a:0801
db dummyd_467d0[32]; // 448a:0802
db dummyd_467f0[32]; // 448a:0822
db dummyd_46810[32]; // 448a:0842
db dummyd_46830[32]; // 448a:0862
db dummyd_46850[32]; // 448a:0882
db dummyd_46870[32]; // 448a:08a2
db dummyd_46890[32]; // 448a:08c2
db dummyd_468b0[32]; // 448a:08e2
db dummyd_468d0[32]; // 448a:0902
db unk_55e02; // 448a:0922
db dummyd_468f1[32]; // 448a:0923
db dummyd_46911[32]; // 448a:0943
db dummyd_46931[32]; // 448a:0963
db dummyd_46951[32]; // 448a:0983
db dummyd_46971[32]; // 448a:09a3
db dummyd_46991[32]; // 448a:09c3
db dummyd_469b1[32]; // 448a:09e3
db dummyd_469d1[32]; // 448a:0a03
db dummyd_469f1[32]; // 448a:0a23
db dummyd_46a11; // 448a:0a43
db dummyd_46a12; // 448a:0a44
db dummyd_46a13; // 448a:0a45
db dummyd_46a14; // 448a:0a46
db dummyd_46a15; // 448a:0a47
db dummyd_46a16; // 448a:0a48
db dummyd_46a17; // 448a:0a49
db dummyd_46a18[32]; // 448a:0a4c
db dummyd_46a38[32]; // 448a:0a6c
db dummyd_46a58[32]; // 448a:0a8c
db dummyd_46a78[32]; // 448a:0aac
db dummyd_46a98[32]; // 448a:0acc
db dummyd_46ab8[32]; // 448a:0aec
db dummyd_46ad8[32]; // 448a:0b0c
db dummyd_46af8[32]; // 448a:0b2c
db dummyd_46b18[32]; // 448a:0b4c
db dummyd_46b38[32]; // 448a:0b6c
db dummyd_46b58[32]; // 448a:0b8c
db dummyd_46b78[32]; // 448a:0bac
db dummyd_46b98[32]; // 448a:0bcc
db dummyd_46bb8[32]; // 448a:0bec
db dummyd_46bd8[32]; // 448a:0c0c
db dummyd_46bf8[32]; // 448a:0c2c
db dummyd_46c18[32]; // 448a:0c4c
db dummyd_46c38[32]; // 448a:0c6c
db dummyd_46c58[32]; // 448a:0c8c
db dummyd_46c78[32]; // 448a:0cac
db dummyd_46c98[32]; // 448a:0ccc
db dummyd_46cb8[32]; // 448a:0cec
db dummyd_46cd8[32]; // 448a:0d0c
db dummyd_46cf8[32]; // 448a:0d2c
db dummyd_46d18; // 448a:0d4c
db dummyd_46d19; // 448a:0d4d
db dummyd_46d1a; // 448a:0d4e
db dummyd_46d1b; // 448a:0d4f
db dummyd_46d1c; // 448a:0d50
db dummyd_46d1d; // 448a:0d51
db dummyd_46d1e; // 448a:0d52
db dummyd_46d1f; // 448a:0d53
db dummyd_46d20; // 448a:0d54
db dummyd_46d21; // 448a:0d55
db dummyd_46d22; // 448a:0d56
db dummyd_46d23; // 448a:0d57
db dummyd_46d24; // 448a:0d58
db dummyd_46d25; // 448a:0d59
db dummyd_46d26; // 448a:0d5a
db dummyd_46d27; // 448a:0d5b
db dummyd_46d28; // 448a:0d5c
db dummyd_46d29; // 448a:0d5d
db dummyd_46d2a; // 448a:0d5e
db dummyd_46d2b; // 448a:0d5f
db dummyd_46d2c; // 448a:0d60
db dummyd_46d2d; // 448a:0d61
db dummyd_46d2e; // 448a:0d62
db dummyd_46d2f; // 448a:0d63
db dummyd_46d30; // 448a:0d64
db dummyd_46d31; // 448a:0d65
db dummyd_46d32[32]; // 448a:0d68
db dummyd_46d52[32]; // 448a:0d88
db dummyd_46d72[32]; // 448a:0da8
db dummyd_46d92[32]; // 448a:0dc8
db dummyd_46db2[32]; // 448a:0de8
db dummyd_46dd2[32]; // 448a:0e08
db dummyd_46df2[32]; // 448a:0e28
db dummyd_46e12; // 448a:0e48
db dummyd_46e13;
db dummyd_46e14;
db dummyd_46e15; // 448a:0e4b
db dummyd_46e16; // 448a:0e4c
db dummyd_46e17;
db dummyd_46e18;
db dummyd_46e19; // 448a:0e4f
db dummyd_46e1a;
db dummyd_46e1b;
db dummyd_46e1c; // 448a:0e54
db dummyd_46e1d;
db dummyd_46e1e; // 448a:0e56
db dummyd_46e1f;
db dummyd_46e20; // 448a:0e58
db dummyd_46e21;
db dummyd_46e22;
db dummyd_46e23;
db dummyd_46e24; // 448a:0e5c
db dummyd_46e25;
db dummyd_46e26; // 448a:0e5e
db dummyd_46e27; // 448a:0e5f
db dummyd_46e28[32]; // 45a2:0000
db dummyd_46e48[32]; // 45a2:0020
db dummyd_46e68[32]; // 45a2:0040
db dummyd_46e88;
db dummyd_46e89; // 45a2:0061
db dummyd_46e8a;
db dummyd_46e8b; // 45a2:0063
db dummyd_46e8c;
db dummyd_46e8d;
db dummyd_46e8e; // 45a2:0066
db dummyd_46e8f;
db dummyd_46e90; // 45a2:0068
db dummyd_46e91;
db dummyd_46e92; // 45a2:006a
db dummyd_46e93;
db dummyd_46e94; // 45a2:006c
db dummyd_46e95;
db dummyd_46e96; // 45a2:006e
db dummyd_46e97; // 45a2:006f
db dummyd_46e98; // 45a2:0070
db dummyd_46e99; // 45a2:0071
db dummyd_46e9a; // 45a2:0072
db dummyd_46e9b; // 45a2:0073
db dummyd_46e9c; // 45a2:0074
db dummyd_46e9d; // 45a2:0075
db dummyd_46e9e; // 45a2:0076
db dummyd_46e9f; // 45a2:0077
db dummyd_46ea0; // 45a2:0078
db dummyd_46ea1; // 45a2:0079
db dummyd_46ea2[32]; // 45a2:007c
db dummyd_46ec2[32]; // 45a2:009c
db dummyd_46ee2[32]; // 45a2:00bc
db dummyd_46f02[32]; // 45a2:00dc
db dummyd_46f22[32]; // 45a2:00fc
db dummyd_46f42[32]; // 45a2:011c
db dummyd_46f62[32]; // 45a2:013c
db dummyd_46f82[32]; // 45a2:015c
db dummyd_46fa2[32]; // 45a2:017c
db dummyd_46fc2[32]; // 45a2:019c
db dummyd_46fe2[32]; // 45a2:01bc
db dummyd_47002[32]; // 45a2:01dc
db dummyd_47022[32]; // 45a2:01fc
db dummyd_47042[32]; // 45a2:021c
db dummyd_47062[32]; // 45a2:023c
db dummyd_47082[32]; // 45a2:025c
db dummyd_470a2[32]; // 45a2:027c
db dummyd_470c2[32]; // 45a2:029c
db dummyd_470e2[32]; // 45a2:02bc
db dummyd_47102[32]; // 45a2:02dc
db dummyd_47122[32]; // 45a2:02fc
db dummyd_47142[32]; // 45a2:031c
db dummyd_47162[32]; // 45a2:033c
db dummyd_47182[32]; // 45a2:035c
db dummyd_471a2[32]; // 45a2:037c
db dummyd_471c2[32]; // 45a2:039c
db dummyd_471e2[32]; // 45a2:03bc
db dummyd_47202[32]; // 45a2:03dc
db dummyd_47222[32]; // 45a2:03fc
db dummyd_47242[32]; // 45a2:041c
db dummyd_47262[32]; // 45a2:043c
db dummyd_47282[32]; // 45a2:045c
db dummyd_472a2[32]; // 45a2:047c
db dummyd_472c2[32]; // 45a2:049c
db dummyd_472e2[32]; // 45a2:04bc
db dummyd_47302[32]; // 45a2:04dc
db dummyd_47322[32]; // 45a2:04fc
db dummyd_47342[32]; // 45a2:051c
db dummyd_47362[32]; // 45a2:053c
db dummyd_47382[32]; // 45a2:055c
db dummyd_473a2[32]; // 45a2:057c
db dummyd_473c2[32]; // 45a2:059c
db dummyd_473e2[32]; // 45a2:05bc
db dummyd_47402[32]; // 45a2:05dc
db dummyd_47422[32]; // 45a2:05fc
db dummyd_47442[32]; // 45a2:061c
db dummyd_47462[32]; // 45a2:063c
db dummyd_47482[32]; // 45a2:065c
db dummyd_474a2[32]; // 45a2:067c
db dummyd_474c2[32]; // 45a2:069c
db dummyd_474e2[32]; // 45a2:06bc
db dummyd_47502[32]; // 45a2:06dc
db dummyd_47522[32]; // 45a2:06fc
db dummyd_47542[32]; // 45a2:071c
db dummyd_47562[32]; // 45a2:073c
db dummyd_47582[32]; // 45a2:075c
db dummyd_475a2[32]; // 45a2:077c
db dummyd_475c2[32]; // 45a2:079c
db dummyd_475e2[32]; // 45a2:07bc
db dummyd_47602[32]; // 45a2:07dc
db dummyd_47622[32]; // 45a2:07fc
db dummyd_47642[32]; // 45a2:081c
db dummyd_47662[32]; // 45a2:083c
db dummyd_47682[32]; // 45a2:085c
db dummyd_476a2[32]; // 45a2:087c
db dummyd_476c2[32]; // 45a2:089c
db dummyd_476e2[32]; // 45a2:08bc
db dummyd_47702[32]; // 45a2:08dc
db dummyd_47722[32]; // 45a2:08fc
db dummyd_47742[32]; // 45a2:091c
db dummyd_47762[32]; // 45a2:093c
db dummyd_47782[32]; // 45a2:095c
db dummyd_477a2[32]; // 45a2:097c
db dummyd_477c2[32]; // 45a2:099c
db dummyd_477e2[32]; // 45a2:09bc
db dummyd_47802[32]; // 45a2:09dc
db dummyd_47822[32]; // 45a2:09fc
db dummyd_47842[32]; // 45a2:0a1c
db dummyd_47862[32]; // 45a2:0a3c
db dummyd_47882[32]; // 45a2:0a5c
db dummyd_478a2[32]; // 45a2:0a7c
db dummyd_478c2[32]; // 45a2:0a9c
db dummyd_478e2[32]; // 45a2:0abc
db dummyd_47902[32]; // 45a2:0adc
db dummyd_47922[32]; // 45a2:0afc
db dummyd_47942[32]; // 45a2:0b1c
db dummyd_47962[32]; // 45a2:0b3c
db dummyd_47982[32]; // 45a2:0b5c
db dummyd_479a2[32]; // 45a2:0b7c
db dummyd_479c2[32]; // 45a2:0b9c
db dummyd_479e2[32]; // 45a2:0bbc
db dummyd_47a02[32]; // 45a2:0bdc
db dummyd_47a22[32]; // 45a2:0bfc
db dummyd_47a42[32]; // 45a2:0c1c
db dummyd_47a62[32]; // 45a2:0c3c
db dummyd_47a82[32]; // 45a2:0c5c
db dummyd_47aa2[32]; // 45a2:0c7c
db dummyd_47ac2[32]; // 45a2:0c9c
db dummyd_47ae2[32]; // 45a2:0cbc
db dummyd_47b02[32]; // 45a2:0cdc
db dummyd_47b22[32]; // 45a2:0cfc
db dummyd_47b42[32]; // 45a2:0d1c
db dummyd_47b62[32]; // 45a2:0d3c
db dummyd_47b82[32]; // 45a2:0d5c
db dummyd_47ba2[32]; // 45a2:0d7c
db dummyd_47bc2[32]; // 45a2:0d9c
db dummyd_47be2[32]; // 45a2:0dbc
db dummyd_47c02[32]; // 45a2:0ddc
db dummyd_47c22[32]; // 45a2:0dfc
db dummyd_47c42[32]; // 45a2:0e1c
db dummyd_47c62[32]; // 45a2:0e3c
db dummyd_47c82[32]; // 45a2:0e5c
db dummyd_47ca2[32]; // 45a2:0e7c
db dummyd_47cc2[32]; // 45a2:0e9c
db dummyd_47ce2[32]; // 45a2:0ebc
db dummyd_47d02;
db dummyd_47d03;
db dummyd_47d04;
db dummyd_47d05;
db dummyd_47d06;
db dummyd_47d07; // 45a2:0ee1
db dummyd_47d08;
db dummyd_47d09;
db dummyd_47d0a; // 45a2:0ee4
db dummyd_47d0b;
db dummyd_47d0c;
db dummyd_47d0d;
db dummyd_47d0e;
db dummyd_47d0f;
db dummyd_47d10[32]; // 45a2:0eec
db dummyd_47d30[32]; // 45a2:0f0c
db dummyd_47d50[32]; // 45a2:0f2c
db dummyd_47d70[32]; // 45a2:0f4c
db dummyd_47d90; // 45a2:0f6c
db dummyd_47d91; // 45a2:0f6d
db dummyd_47d92; // 45a2:0f6e
db dummyd_47d93; // 45a2:0f6f
db dummyd_47d94; // 45a2:0f70
db dummyd_47d95; // 45a2:0f71
db dummyd_47d96[32]; // 45a2:0f74
db dummyd_47db6[32]; // 45a2:0f94
db dummyd_47dd6[32]; // 45a2:0fb4
db dummyd_47df6[32]; // 45a2:0fd4
db dummyd_47e16; // 45a2:0ff4
db dummyd_47e17;
db dummyd_47e18; // 45a2:0ff6
db dummyd_47e19;
db dummyd_47e1a; // 45a2:0ff8
db dummyd_47e1b;
db dummyd_47e1c[32]; // 45a2:0ffc
db dummyd_47e3c[32]; // 45a2:101c
db dummyd_47e5c[32]; // 45a2:103c
db dummyd_47e7c[32]; // 45a2:105c
db dummyd_47e9c[32]; // 45a2:107c
db dummyd_47ebc[32]; // 45a2:109c
db dummyd_47edc[32]; // 45a2:10bc
db dummyd_47efc; // 45a2:10dc
db dummyd_47efd;
db dummyd_47efe;
db dummyd_47eff; // 45a2:10df
db dummyd_47f00; // 45a2:10e0
db dummyd_47f01;
db dummyd_47f02;
db dummyd_47f03; // 45a2:10e3
db dummyd_47f04; // 45a2:10e4
db dummyd_47f05;
db dummyd_47f06;
db dummyd_47f07; // 45a2:10e7
db dummyd_47f08; // 45a2:10e8
db dummyd_47f09;
db dummyd_47f0a;
db dummyd_47f0b; // 45a2:10eb
db dummyd_47f0c; // 45a2:10ec
db dummyd_47f0d;
db dummyd_47f0e;
db dummyd_47f0f; // 45a2:10ef
db dummyd_47f10; // 45a2:10f0
db dummyd_47f11;
db dummyd_47f12;
db dummyd_47f13; // 45a2:10f3
db dummyd_47f14; // 45a2:10f4
db dummyd_47f15;
db dummyd_47f16; // 45a2:10f6
db dummyd_47f17; // 45a2:10f7
db dummyd_47f18; // 45a2:10f8
db dummyd_47f19;
db dummyd_47f1a[32]; // 45a2:10fc
db dummyd_47f3a[32]; // 45a2:111c
db dummyd_47f5a[32]; // 45a2:113c
db dummyd_47f7a[32]; // 45a2:115c
db dummyd_47f9a[32]; // 45a2:117c
db dummyd_47fba[32]; // 45a2:119c
db dummyd_47fda; // 45a2:11bc
db dummyd_47fdb;
db dummyd_47fdc; // 45a2:11be
db dummyd_47fdd;
db dummyd_47fde; // 45a2:11c0
db dummyd_47fdf;
db dummyd_47fe0; // 45a2:11c2
db dummyd_47fe1; // 45a2:11c3
db dummyd_47fe2; // 45a2:11c4
db dummyd_47fe3;
db dummyd_47fe4; // 45a2:11c6
db dummyd_47fe5; // 45a2:11c7
db dummyd_47fe6; // 45a2:11c8
db dummyd_47fe7;
db dummyd_47fe8; // 45a2:11ca
db dummyd_47fe9;
db dummyd_47fea; // 45a2:11cc
db dummyd_47feb;
db dummyd_47fec; // 45a2:11ce
db dummyd_47fed; // 45a2:11cf
db dummyd_47fee; // 463a:0000
db dummyd_47fef;
db unk_57512; // 463a:0002
db dummyd_47ff1[32]; // 463a:0003
db dummyd_48011[32]; // 463a:0023
db dummyd_48031[32]; // 463a:0043
db dummyd_48051[32]; // 463a:0063
db dummyd_48071[32]; // 463a:0083
db dummyd_48091[32]; // 463a:00a3
db dummyd_480b1;
db dummyd_480b2; // 463a:00c4
db dummyd_480b3; // 463a:00c5
db dummyd_480b4; // 463a:00c6
db dummyd_480b5; // 463a:00c7
db dummyd_480b6; // 463a:00c8
db dummyd_480b7; // 463a:00c9
db dummyd_480b8; // 463a:00ca
db dummyd_480b9; // 463a:00cb
db dummyd_480ba; // 463a:00cc
db dummyd_480bb; // 463a:00cd
db dummyd_480bc; // 463a:00ce
db dummyd_480bd; // 463a:00cf
db dummyd_480be; // 463a:00d0
db dummyd_480bf; // 463a:00d1
db dummyd_480c0; // 463a:00d2
db dummyd_480c1; // 463a:00d3
db dummyd_480c2; // 463a:00d4
db dummyd_480c3; // 463a:00d5
db dummyd_480c4[32]; // 463a:00d8
db dummyd_480e4[32]; // 463a:00f8
db dummyd_48104[32]; // 463a:0118
db dummyd_48124[32]; // 463a:0138
db dummyd_48144[32]; // 463a:0158
db dummyd_48164[32]; // 463a:0178
db dummyd_48184[32]; // 463a:0198
db dummyd_481a4[32]; // 463a:01b8
db dummyd_481c4;
db dummyd_481c5;
db dummyd_481c6; // 463a:01da
db dummyd_481c7; // 463a:01db
db dummyd_481c8;
db dummyd_481c9;
db dummyd_481ca; // 463a:01de
db dummyd_481cb; // 463a:01df
db dummyd_481cc;
db dummyd_481cd;
db dummyd_481ce; // 463a:01e2
db dummyd_481cf; // 463a:01e3
db dummyd_481d0;
db dummyd_481d1;
db dummyd_481d2; // 463a:01e6
db dummyd_481d3; // 463a:01e7
db dummyd_481d4;
db dummyd_481d5;
db dummyd_481d6[32]; // 463a:01ec
db dummyd_481f6[32]; // 463a:020c
db dummyd_48216[32]; // 463a:022c
db dummyd_48236[32]; // 463a:024c
db dummyd_48256[32]; // 463a:026c
db dummyd_48276[32]; // 463a:028c
db dummyd_48296[32]; // 463a:02ac
db dummyd_482b6[32]; // 463a:02cc
db dummyd_482d6[32]; // 463a:02ec
db dummyd_482f6[32]; // 463a:030c
db dummyd_48316[32]; // 463a:032c
db dummyd_48336[32]; // 463a:034c
db dummyd_48356[32]; // 463a:036c
db dummyd_48376[32]; // 463a:038c
db dummyd_48396[32]; // 463a:03ac
db dummyd_483b6[32]; // 463a:03cc
db dummyd_483d6[32]; // 463a:03ec
db dummyd_483f6[32]; // 463a:040c
db dummyd_48416[32]; // 463a:042c
db dummyd_48436;
db dummyd_48437; // 463a:044d
db dummyd_48438;
db dummyd_48439;
db dummyd_4843a;
db dummyd_4843b; // 463a:0451
db dummyd_4843c;
db dummyd_4843d;
db dummyd_4843e[32]; // 463a:0458
db dummyd_4845e[32]; // 463a:0478
db dummyd_4847e[32]; // 463a:0498
db dummyd_4849e[32]; // 463a:04b8
db dummyd_484be[32]; // 463a:04d8
db dummyd_484de; // 463a:04f8
db dummyd_484df;
db dummyd_484e0; // 463a:04fa
db dummyd_484e1; // 463a:04fb
db dummyd_484e2; // 463a:04fc
db dummyd_484e3; // 463a:04fd
db dummyd_484e4; // 463a:04fe
db dummyd_484e5;
db dummyd_484e6; // 463a:0500
db byte_57a11; // 463a:0501
db dummyd_484e8[32]; // 463a:0502
db dummyd_48508[32]; // 463a:0522
db dummyd_48528[32]; // 463a:0542
db dummyd_48548[32]; // 463a:0562
db dummyd_48568[32]; // 463a:0582
db dummyd_48588[32]; // 463a:05a2
db dummyd_485a8[32]; // 463a:05c2
db dummyd_485c8[32]; // 463a:05e2
db dummyd_485e8[32]; // 463a:0602
db dummyd_48608[32]; // 463a:0622
db dummyd_48628[32]; // 463a:0642
db dummyd_48648[32]; // 463a:0662
db dummyd_48668[32]; // 463a:0682
db dummyd_48688[32]; // 463a:06a2
db dummyd_486a8[32]; // 463a:06c2
db dummyd_486c8[32]; // 463a:06e2
db dummyd_486e8[32]; // 463a:0702
db dummyd_48708[32]; // 463a:0722
db dummyd_48728[32]; // 463a:0742
db dummyd_48748[32]; // 463a:0762
db dummyd_48768[32]; // 463a:0782
db dummyd_48788[32]; // 463a:07a2
db dummyd_487a8[32]; // 463a:07c2
db dummyd_487c8[32]; // 463a:07e2
db dummyd_487e8[32]; // 463a:0802
db dummyd_48808[32]; // 463a:0822
db dummyd_48828[32]; // 463a:0842
db dummyd_48848[32]; // 463a:0862
db dummyd_48868[32]; // 463a:0882
db dummyd_48888[32]; // 463a:08a2
db dummyd_488a8[32]; // 463a:08c2
db dummyd_488c8[32]; // 463a:08e2
db dummyd_488e8[32]; // 463a:0902
db dummyd_48908[32]; // 463a:0922
db dummyd_48928[32]; // 463a:0942
db dummyd_48948[32]; // 463a:0962
db dummyd_48968[32]; // 463a:0982
db dummyd_48988[32]; // 463a:09a2
db dummyd_489a8[32]; // 463a:09c2
db dummyd_489c8[32]; // 463a:09e2
db dummyd_489e8[32]; // 463a:0a02
db dummyd_48a08[32]; // 463a:0a22
db dummyd_48a28[32]; // 463a:0a42
db dummyd_48a48[32]; // 463a:0a62
db dummyd_48a68[32]; // 463a:0a82
db dummyd_48a88[32]; // 463a:0aa2
db dummyd_48aa8[32]; // 463a:0ac2
db dummyd_48ac8[32]; // 463a:0ae2
db dummyd_48ae8[32]; // 463a:0b02
db dummyd_48b08[32]; // 463a:0b22
db dummyd_48b28[32]; // 463a:0b42
db dummyd_48b48[32]; // 463a:0b62
db dummyd_48b68[32]; // 463a:0b82
db dummyd_48b88[32]; // 463a:0ba2
db dummyd_48ba8[32]; // 463a:0bc2
db dummyd_48bc8[32]; // 463a:0be2
db dummyd_48be8[32]; // 463a:0c02
db dummyd_48c08[32]; // 463a:0c22
db dummyd_48c28[32]; // 463a:0c42
db dummyd_48c48[32]; // 463a:0c62
db dummyd_48c68[32]; // 463a:0c82
db dummyd_48c88[32]; // 463a:0ca2
db dummyd_48ca8[32]; // 463a:0cc2
db dummyd_48cc8[32]; // 463a:0ce2
db dummyd_48ce8[32]; // 463a:0d02
db dummyd_48d08[32]; // 463a:0d22
db dummyd_48d28;
db dummyd_48d29;
db dummyd_48d2a;
db dummyd_48d2b;
db dummyd_48d2c; // 463a:0d46
db dummyd_48d2d;
db dummyd_48d2e;
db dummyd_48d2f;
db dummyd_48d30[32]; // 463a:0d4c
db dummyd_48d50[32]; // 463a:0d6c
db dummyd_48d70[32]; // 463a:0d8c
db dummyd_48d90[32]; // 463a:0dac
db dummyd_48db0[32]; // 463a:0dcc
db dummyd_48dd0[32]; // 463a:0dec
db dummyd_48df0[32]; // 463a:0e0c
db dummyd_48e10;
db dummyd_48e11;
db dummyd_48e12; // 463a:0e2e
db dummyd_48e13; // 463a:0e2f
db dummyd_48e14;
db dummyd_48e15;
db dummyd_48e16;
db dummyd_48e17;
db dummyd_48e18;
db dummyd_48e19;
db dummyd_48e1a[32]; // 463a:0e38
db dummyd_48e3a[32]; // 463a:0e58
db dummyd_48e5a[32]; // 463a:0e78
db dummyd_48e7a[32]; // 463a:0e98
db dummyd_48e9a[32]; // 463a:0eb8
db dummyd_48eba[32]; // 463a:0ed8
db dummyd_48eda[32]; // 463a:0ef8
db dummyd_48efa[32]; // 463a:0f18
db dummyd_48f1a[32]; // 463a:0f38
db dummyd_48f3a[32]; // 463a:0f58
db dummyd_48f5a[32]; // 463a:0f78
db dummyd_48f7a[32]; // 463a:0f98
db dummyd_48f9a[32]; // 463a:0fb8
db dummyd_48fba[32]; // 463a:0fd8
db dummyd_48fda[32]; // 463a:0ff8
db dummyd_48ffa[32]; // 463a:1018
db dummyd_4901a[32]; // 463a:1038
db dummyd_4903a[32]; // 463a:1058
db dummyd_4905a[32]; // 463a:1078
db dummyd_4907a[32]; // 463a:1098
db dummyd_4909a[32]; // 463a:10b8
db dummyd_490ba[32]; // 463a:10d8
db dummyd_490da[32]; // 463a:10f8
db dummyd_490fa[32]; // 463a:1118
db dummyd_4911a[32]; // 463a:1138
db dummyd_4913a[32]; // 463a:1158
db dummyd_4915a[32]; // 463a:1178
db dummyd_4917a[32]; // 463a:1198
db dummyd_4919a[32]; // 463a:11b8
db dummyd_491ba[32]; // 463a:11d8
db dummyd_491da[32]; // 463a:11f8
db dummyd_491fa[32]; // 463a:1218
db dummyd_4921a[32]; // 463a:1238
db dummyd_4923a[32]; // 463a:1258
db dummyd_4925a[32]; // 463a:1278
db dummyd_4927a[32]; // 463a:1298
db dummyd_4929a[32]; // 463a:12b8
db dummyd_492ba[32]; // 463a:12d8
db dummyd_492da[32]; // 463a:12f8
db dummyd_492fa[32]; // 463a:1318
db dummyd_4931a[32]; // 463a:1338
db dummyd_4933a[32]; // 463a:1358
db dummyd_4935a[32]; // 463a:1378
db dummyd_4937a[32]; // 463a:1398
db dummyd_4939a[32]; // 463a:13b8
db dummyd_493ba[32]; // 463a:13d8
db dummyd_493da[32]; // 463a:13f8
db dummyd_493fa[32]; // 463a:1418
db dummyd_4941a[32]; // 463a:1438
db dummyd_4943a[32]; // 463a:1458
db dummyd_4945a[32]; // 463a:1478
db dummyd_4947a[32]; // 463a:1498
db dummyd_4949a[32]; // 463a:14b8
db dummyd_494ba[32]; // 463a:14d8
db dummyd_494da[32]; // 463a:14f8
db dummyd_494fa[32]; // 463a:1518
db dummyd_4951a[32]; // 463a:1538
db dummyd_4953a[32]; // 463a:1558
db dummyd_4955a[32]; // 463a:1578
db dummyd_4957a[32]; // 463a:1598
db dummyd_4959a[32]; // 463a:15b8
db dummyd_495ba[32]; // 463a:15d8
db dummyd_495da[32]; // 463a:15f8
db dummyd_495fa[32]; // 463a:1618
db dummyd_4961a[32]; // 463a:1638
db dummyd_4963a[32]; // 463a:1658
db dummyd_4965a[32]; // 463a:1678
db dummyd_4967a[32]; // 463a:1698
db dummyd_4969a[32]; // 463a:16b8
db dummyd_496ba[32]; // 463a:16d8
db dummyd_496da[32]; // 463a:16f8
db dummyd_496fa[32]; // 463a:1718
db dummyd_4971a[32]; // 463a:1738
db dummyd_4973a[32]; // 463a:1758
db dummyd_4975a[32]; // 463a:1778
db dummyd_4977a[32]; // 463a:1798
db dummyd_4979a[32]; // 463a:17b8
db dummyd_497ba[32]; // 463a:17d8
db dummyd_497da[32]; // 463a:17f8
db dummyd_497fa[32]; // 463a:1818
db dummyd_4981a[32]; // 463a:1838
db dummyd_4983a[32]; // 463a:1858
db dummyd_4985a[32]; // 463a:1878
db dummyd_4987a[32]; // 463a:1898
db dummyd_4989a[32]; // 463a:18b8
db dummyd_498ba;
db dummyd_498bb;
db dummyd_498bc;
db dummyd_498bd;
db dummyd_498be;
db dummyd_498bf;
db dummyd_498c0;
db dummyd_498c1;
db dummyd_498c2; // 463a:18e0
db dummyd_498c3; // 463a:18e1
db dummyd_498c4;
db dummyd_498c5;
db dummyd_498c6;
db dummyd_498c7;
db dummyd_498c8[32]; // 463a:18e8
db dummyd_498e8[32]; // 463a:1908
db dummyd_49908[32]; // 463a:1928
db dummyd_49928[32]; // 463a:1948
db dummyd_49948[32]; // 463a:1968
db dummyd_49968[32]; // 463a:1988
db dummyd_49988;
db dummyd_49989;
db dummyd_4998a;
db dummyd_4998b; // 463a:19ab
db dummyd_4998c;
db dummyd_4998d;
db dummyd_4998e; // 463a:19ae
db dummyd_4998f; // 463a:19af
db dummyd_49990;
db dummyd_49991;
db dummyd_49992; // 463a:19b2
db dummyd_49993; // 463a:19b3
db dummyd_49994;
db dummyd_49995;
db dummyd_49996; // 463a:19b6
db dummyd_49997; // 463a:19b7
db dummyd_49998; // 463a:19b8
db dummyd_49999;
db dummyd_4999a; // 463a:19ba
db dummyd_4999b; // 463a:19bb
db dummyd_4999c; // 463a:19bc
db dummyd_4999d;
db dummyd_4999e; // 463a:19be
db dummyd_4999f; // 463a:19bf
db dummyd_499a0; // 463a:19c0
db dummyd_499a1;
db dummyd_499a2; // 463a:19c2
db dummyd_499a3; // 463a:19c3
db dummyd_499a4; // 463a:19c4
db dummyd_499a5;
db unk_58ed6; // 463a:19c6
db dummyd_499a7[32]; // 463a:19c7
db dummyd_499c7[32]; // 463a:19e7
db dummyd_499e7; // 463a:1a07
db dummyd_499e8;
db dummyd_499e9;
db dummyd_499ea;
db dummyd_499eb; // 463a:1a0b
db dummyd_499ec;
db dummyd_499ed;
db dummyd_499ee[32]; // 463a:1a10
db dummyd_49a0e[32]; // 463a:1a30
db dummyd_49a2e[32]; // 463a:1a50
db dummyd_49a4e[32]; // 463a:1a70
db dummyd_49a6e[32]; // 463a:1a90
db dummyd_49a8e[32]; // 463a:1ab0
db dummyd_49aae[32]; // 463a:1ad0
db dummyd_49ace[32]; // 463a:1af0
db dummyd_49aee[32]; // 463a:1b10
db dummyd_49b0e[32]; // 463a:1b30
db dummyd_49b2e[32]; // 463a:1b50
db dummyd_49b4e[32]; // 463a:1b70
db dummyd_49b6e[32]; // 463a:1b90
db dummyd_49b8e[32]; // 463a:1bb0
db dummyd_49bae[32]; // 463a:1bd0
db dummyd_49bce[32]; // 463a:1bf0
db dummyd_49bee[32]; // 463a:1c10
db dummyd_49c0e; // 463a:1c30
db dummyd_49c0f;
db dummyd_49c10[32]; // 463a:1c34
db dummyd_49c30[32]; // 463a:1c54
db dummyd_49c50[32]; // 463a:1c74
db dummyd_49c70[32]; // 463a:1c94
db dummyd_49c90[32]; // 463a:1cb4
db dummyd_49cb0[32]; // 463a:1cd4
db dummyd_49cd0[32]; // 463a:1cf4
db dummyd_49cf0[32]; // 463a:1d14
db dummyd_49d10[32]; // 463a:1d34
db dummyd_49d30[32]; // 463a:1d54
db dummyd_49d50[32]; // 463a:1d74
db dummyd_49d70[32]; // 463a:1d94
db dummyd_49d90[32]; // 463a:1db4
db dummyd_49db0[32]; // 463a:1dd4
db dummyd_49dd0[32]; // 463a:1df4
db dummyd_49df0[32]; // 463a:1e14
db dummyd_49e10[32]; // 463a:1e34
db dummyd_49e30[32]; // 463a:1e54
db dummyd_49e50[32]; // 463a:1e74
db dummyd_49e70[32]; // 463a:1e94
db dummyd_49e90[32]; // 463a:1eb4
db dummyd_49eb0[32]; // 463a:1ed4
db dummyd_49ed0[32]; // 463a:1ef4
db dummyd_49ef0[32]; // 463a:1f14
db dummyd_49f10[32]; // 463a:1f34
db dummyd_49f30[32]; // 463a:1f54
db dummyd_49f50[32]; // 463a:1f74
db dummyd_49f70[32]; // 463a:1f94
db dummyd_49f90[32]; // 463a:1fb4
db dummyd_49fb0[32]; // 463a:1fd4
db dummyd_49fd0[32]; // 463a:1ff4
db dummyd_49ff0[32]; // 463a:2014
db dummyd_4a010[32]; // 463a:2034
db dummyd_4a030[32]; // 463a:2054
db dummyd_4a050[32]; // 463a:2074
db dummyd_4a070[32]; // 463a:2094
db dummyd_4a090[32]; // 463a:20b4
db dummyd_4a0b0[32]; // 463a:20d4
db dummyd_4a0d0[32]; // 463a:20f4
db dummyd_4a0f0[32]; // 463a:2114
db dummyd_4a110[32]; // 463a:2134
db dummyd_4a130[32]; // 463a:2154
db dummyd_4a150[32]; // 463a:2174
db dummyd_4a170[32]; // 463a:2194
db dummyd_4a190[32]; // 463a:21b4
db dummyd_4a1b0[32]; // 463a:21d4
db dummyd_4a1d0[32]; // 463a:21f4
db dummyd_4a1f0[32]; // 463a:2214
db dummyd_4a210[32]; // 463a:2234
db dummyd_4a230[32]; // 463a:2254
db dummyd_4a250[32]; // 463a:2274
db dummyd_4a270[32]; // 463a:2294
db dummyd_4a290[32]; // 463a:22b4
db dummyd_4a2b0[32]; // 463a:22d4
db dummyd_4a2d0[32]; // 463a:22f4
db dummyd_4a2f0[32]; // 463a:2314
db dummyd_4a310[32]; // 463a:2334
db dummyd_4a330[32]; // 463a:2354
db dummyd_4a350[32]; // 463a:2374
db dummyd_4a370[32]; // 463a:2394
db dummyd_4a390[32]; // 463a:23b4
db dummyd_4a3b0[32]; // 463a:23d4
db dummyd_4a3d0[32]; // 463a:23f4
db dummyd_4a3f0[32]; // 463a:2414
db dummyd_4a410[32]; // 463a:2434
db dummyd_4a430[32]; // 463a:2454
db dummyd_4a450[32]; // 463a:2474
db dummyd_4a470[32]; // 463a:2494
db dummyd_4a490[32]; // 463a:24b4
db dummyd_4a4b0[32]; // 463a:24d4
db dummyd_4a4d0[32]; // 463a:24f4
db dummyd_4a4f0;
db dummyd_4a4f1;
db dummyd_4a4f2; // 463a:2516
db dummyd_4a4f3; // 463a:2517
db dummyd_4a4f4;
db dummyd_4a4f5;
db dummyd_4a4f6; // 463a:251a
db dummyd_4a4f7; // 463a:251b
db dummyd_4a4f8;
db dummyd_4a4f9;
db dummyd_4a4fa; // 463a:251e
db dummyd_4a4fb; // 463a:251f
db dummyd_4a4fc;
db dummyd_4a4fd;
db dummyd_4a4fe; // 463a:2522
db dummyd_4a4ff; // 463a:2523
db dummyd_4a500;
db dummyd_4a501;
db dummyd_4a502; // 463a:2526
db dummyd_4a503; // 463a:2527
db dummyd_4a504;
db dummyd_4a505;
db dummyd_4a506;
db dummyd_4a507;
db dummyd_4a508;
db dummyd_4a509;
db dummyd_4a50a[32]; // 463a:2530
db dummyd_4a52a[32]; // 463a:2550
db dummyd_4a54a[32]; // 463a:2570
db dummyd_4a56a[32]; // 463a:2590
db dummyd_4a58a[32]; // 463a:25b0
db dummyd_4a5aa[32]; // 463a:25d0
db dummyd_4a5ca[32]; // 463a:25f0
db dummyd_4a5ea[32]; // 463a:2610
db dummyd_4a60a[32]; // 463a:2630
db dummyd_4a62a[32]; // 463a:2650
db dummyd_4a64a[32]; // 463a:2670
db dummyd_4a66a[32]; // 463a:2690
db dummyd_4a68a[32]; // 463a:26b0
db dummyd_4a6aa[32]; // 463a:26d0
db dummyd_4a6ca[32]; // 463a:26f0
db dummyd_4a6ea[32]; // 463a:2710
db dummyd_4a70a[32]; // 463a:2730
db dummyd_4a72a[32]; // 463a:2750
db dummyd_4a74a[32]; // 463a:2770
db dummyd_4a76a[32]; // 463a:2790
db dummyd_4a78a[32]; // 463a:27b0
db dummyd_4a7aa[32]; // 463a:27d0
db dummyd_4a7ca[32]; // 463a:27f0
db dummyd_4a7ea[32]; // 463a:2810
db dummyd_4a80a[32]; // 463a:2830
db dummyd_4a82a[32]; // 463a:2850
db dummyd_4a84a[32]; // 463a:2870
db dummyd_4a86a[32]; // 463a:2890
db dummyd_4a88a[32]; // 463a:28b0
db dummyd_4a8aa[32]; // 463a:28d0
db dummyd_4a8ca[32]; // 463a:28f0
db dummyd_4a8ea[32]; // 463a:2910
db dummyd_4a90a[32]; // 463a:2930
db dummyd_4a92a[32]; // 463a:2950
db dummyd_4a94a[32]; // 463a:2970
db dummyd_4a96a[32]; // 463a:2990
db dummyd_4a98a[32]; // 463a:29b0
db dummyd_4a9aa[32]; // 463a:29d0
db dummyd_4a9ca[32]; // 463a:29f0
db dummyd_4a9ea[32]; // 463a:2a10
db dummyd_4aa0a[32]; // 463a:2a30
db dummyd_4aa2a[32]; // 463a:2a50
db dummyd_4aa4a[32]; // 463a:2a70
db dummyd_4aa6a[32]; // 463a:2a90
db dummyd_4aa8a[32]; // 463a:2ab0
db dummyd_4aaaa[32]; // 463a:2ad0
db dummyd_4aaca[32]; // 463a:2af0
db dummyd_4aaea[32]; // 463a:2b10
db dummyd_4ab0a[32]; // 463a:2b30
db dummyd_4ab2a[32]; // 463a:2b50
db dummyd_4ab4a[32]; // 463a:2b70
db dummyd_4ab6a[32]; // 463a:2b90
db dummyd_4ab8a[32]; // 463a:2bb0
db dummyd_4abaa[32]; // 463a:2bd0
db dummyd_4abca[32]; // 463a:2bf0
db dummyd_4abea[32]; // 463a:2c10
db dummyd_4ac0a[32]; // 463a:2c30
db dummyd_4ac2a[32]; // 463a:2c50
db dummyd_4ac4a[32]; // 463a:2c70
db dummyd_4ac6a[32]; // 463a:2c90
db dummyd_4ac8a[32]; // 463a:2cb0
db dummyd_4acaa[32]; // 463a:2cd0
db dummyd_4acca[32]; // 463a:2cf0
db dummyd_4acea[32]; // 463a:2d10
db dummyd_4ad0a[32]; // 463a:2d30
db dummyd_4ad2a[32]; // 463a:2d50
db dummyd_4ad4a[32]; // 463a:2d70
db dummyd_4ad6a[32]; // 463a:2d90
db dummyd_4ad8a[32]; // 463a:2db0
db dummyd_4adaa[32]; // 463a:2dd0
db dummyd_4adca[32]; // 463a:2df0
db dummyd_4adea[32]; // 463a:2e10
db dummyd_4ae0a[32]; // 463a:2e30
db dummyd_4ae2a[32]; // 463a:2e50
db dummyd_4ae4a[32]; // 463a:2e70
db dummyd_4ae6a[32]; // 463a:2e90
db dummyd_4ae8a[32]; // 463a:2eb0
db dummyd_4aeaa[32]; // 463a:2ed0
db dummyd_4aeca[32]; // 463a:2ef0
db dummyd_4aeea[32]; // 463a:2f10
db dummyd_4af0a[32]; // 463a:2f30
db dummyd_4af2a[32]; // 463a:2f50
db dummyd_4af4a[32]; // 463a:2f70
db dummyd_4af6a[32]; // 463a:2f90
db dummyd_4af8a[32]; // 463a:2fb0
db dummyd_4afaa[32]; // 463a:2fd0
db dummyd_4afca[32]; // 463a:2ff0
db dummyd_4afea[32]; // 463a:3010
db dummyd_4b00a[32]; // 463a:3030
db dummyd_4b02a[32]; // 463a:3050
db dummyd_4b04a[32]; // 463a:3070
db dummyd_4b06a[32]; // 463a:3090
db dummyd_4b08a[32]; // 463a:30b0
db dummyd_4b0aa[32]; // 463a:30d0
db dummyd_4b0ca[32]; // 463a:30f0
db dummyd_4b0ea[32]; // 463a:3110
db dummyd_4b10a[32]; // 463a:3130
db dummyd_4b12a[32]; // 463a:3150
db dummyd_4b14a[32]; // 463a:3170
db dummyd_4b16a[32]; // 463a:3190
db dummyd_4b18a[32]; // 463a:31b0
db dummyd_4b1aa[32]; // 463a:31d0
db dummyd_4b1ca[32]; // 463a:31f0
db dummyd_4b1ea[32]; // 463a:3210
db dummyd_4b20a[32]; // 463a:3230
db dummyd_4b22a[32]; // 463a:3250
db dummyd_4b24a[32]; // 463a:3270
db dummyd_4b26a[32]; // 463a:3290
db dummyd_4b28a[32]; // 463a:32b0
db dummyd_4b2aa[32]; // 463a:32d0
db dummyd_4b2ca[32]; // 463a:32f0
db dummyd_4b2ea[32]; // 463a:3310
db dummyd_4b30a[32]; // 463a:3330
db dummyd_4b32a[32]; // 463a:3350
db dummyd_4b34a[32]; // 463a:3370
db dummyd_4b36a[32]; // 463a:3390
db dummyd_4b38a[32]; // 463a:33b0
db dummyd_4b3aa[32]; // 463a:33d0
db dummyd_4b3ca[32]; // 463a:33f0
db dummyd_4b3ea[32]; // 463a:3410
db dummyd_4b40a[32]; // 463a:3430
db dummyd_4b42a[32]; // 463a:3450
db dummyd_4b44a[32]; // 463a:3470
db dummyd_4b46a[32]; // 463a:3490
db dummyd_4b48a[32]; // 463a:34b0
db dummyd_4b4aa[32]; // 463a:34d0
db dummyd_4b4ca[32]; // 463a:34f0
db dummyd_4b4ea[32]; // 463a:3510
db dummyd_4b50a[32]; // 463a:3530
db dummyd_4b52a[32]; // 463a:3550
db dummyd_4b54a[32]; // 463a:3570
db dummyd_4b56a[32]; // 463a:3590
db dummyd_4b58a[32]; // 463a:35b0
db dummyd_4b5aa[32]; // 463a:35d0
db dummyd_4b5ca[32]; // 463a:35f0
db dummyd_4b5ea[32]; // 463a:3610
db dummyd_4b60a[32]; // 463a:3630
db dummyd_4b62a[32]; // 463a:3650
db dummyd_4b64a[32]; // 463a:3670
db dummyd_4b66a[32]; // 463a:3690
db dummyd_4b68a[32]; // 463a:36b0
db dummyd_4b6aa[32]; // 463a:36d0
db dummyd_4b6ca[32]; // 463a:36f0
db dummyd_4b6ea[32]; // 463a:3710
db dummyd_4b70a[32]; // 463a:3730
db dummyd_4b72a[32]; // 463a:3750
db dummyd_4b74a[32]; // 463a:3770
db dummyd_4b76a[32]; // 463a:3790
db dummyd_4b78a[32]; // 463a:37b0
db dummyd_4b7aa[32]; // 463a:37d0
db dummyd_4b7ca[32]; // 463a:37f0
db dummyd_4b7ea[32]; // 463a:3810
db dummyd_4b80a[32]; // 463a:3830
db dummyd_4b82a[32]; // 463a:3850
db dummyd_4b84a[32]; // 463a:3870
db dummyd_4b86a[32]; // 463a:3890
db dummyd_4b88a[32]; // 463a:38b0
db dummyd_4b8aa[32]; // 463a:38d0
db dummyd_4b8ca[32]; // 463a:38f0
db dummyd_4b8ea[32]; // 463a:3910
db dummyd_4b90a[32]; // 463a:3930
db dummyd_4b92a[32]; // 463a:3950
db dummyd_4b94a[32]; // 463a:3970
db dummyd_4b96a[32]; // 463a:3990
db dummyd_4b98a[32]; // 463a:39b0
db dummyd_4b9aa[32]; // 463a:39d0
db dummyd_4b9ca[32]; // 46f0:0000
db dummyd_4b9ea[32]; // 46f0:0020
db dummyd_4ba0a[32]; // 46f0:0040
db dummyd_4ba2a[32]; // 46f0:0060
db dummyd_4ba4a[32]; // 46f0:0080
db dummyd_4ba6a[32]; // 46f0:00a0
db dummyd_4ba8a[32]; // 46f0:00c0
db dummyd_4baaa; // 46f0:00e0
db dummyd_4baab;
db dummyd_4baac; // 46f0:00e2
db dummyd_4baad;
db dummyd_4baae; // 46f0:00e4
db dummyd_4baaf;
db dummyd_4bab0; // 46f0:00e6
db dummyd_4bab1;
db dummyd_4bab2; // 46f0:00e8
db dummyd_4bab3;
db dummyd_4bab4; // 46f0:00ea
db dummyd_4bab5;
db dummyd_4bab6; // 46f0:00ec
db dummyd_4bab7;
db dummyd_4bab8; // 46f0:00ee
db dummyd_4bab9;
db dummyd_4baba; // 46f0:00f0
db dummyd_4babb;
db dummyd_4babc[32]; // 46f0:00f4
db dummyd_4badc[32]; // 46f0:0114
db dummyd_4bafc[32]; // 46f0:0134
db dummyd_4bb1c[32]; // 46f0:0154
db dummyd_4bb3c[32]; // 46f0:0174
db dummyd_4bb5c[32]; // 46f0:0194
db dummyd_4bb7c[32]; // 46f0:01b4
db dummyd_4bb9c[32]; // 46f0:01d4
db dummyd_4bbbc[32]; // 46f0:01f4
db dummyd_4bbdc[32]; // 46f0:0214
db dummyd_4bbfc[32]; // 46f0:0234
db dummyd_4bc1c[32]; // 46f0:0254
db dummyd_4bc3c[32]; // 46f0:0274
db dummyd_4bc5c[32]; // 46f0:0294
db dummyd_4bc7c[32]; // 46f0:02b4
db dummyd_4bc9c[32]; // 46f0:02d4
db dummyd_4bcbc[32]; // 46f0:02f4
db dummyd_4bcdc[32]; // 46f0:0314
db dummyd_4bcfc[32]; // 46f0:0334
db dummyd_4bd1c[32]; // 46f0:0354
db dummyd_4bd3c[32]; // 46f0:0374
db dummyd_4bd5c[32]; // 46f0:0394
db dummyd_4bd7c[32]; // 46f0:03b4
db dummyd_4bd9c[32]; // 46f0:03d4
db dummyd_4bdbc[32]; // 46f0:03f4
db dummyd_4bddc[32]; // 46f0:0414
db dummyd_4bdfc[32]; // 46f0:0434
db dummyd_4be1c[32]; // 46f0:0454
db dummyd_4be3c[32]; // 46f0:0474
db dummyd_4be5c[32]; // 46f0:0494
db dummyd_4be7c[32]; // 46f0:04b4
db dummyd_4be9c[32]; // 46f0:04d4
db dummyd_4bebc[32]; // 46f0:04f4
db dummyd_4bedc[32]; // 46f0:0514
db dummyd_4befc[32]; // 46f0:0534
db dummyd_4bf1c[32]; // 46f0:0554
db dummyd_4bf3c[32]; // 46f0:0574
db dummyd_4bf5c[32]; // 46f0:0594
db dummyd_4bf7c[32]; // 46f0:05b4
db dummyd_4bf9c[32]; // 46f0:05d4
db dummyd_4bfbc[32]; // 46f0:05f4
db dummyd_4bfdc[32]; // 46f0:0614
db dummyd_4bffc[32]; // 46f0:0634
db dummyd_4c01c[32]; // 46f0:0654
db dummyd_4c03c[32]; // 46f0:0674
db dummyd_4c05c[32]; // 46f0:0694
db dummyd_4c07c[32]; // 46f0:06b4
db dummyd_4c09c[32]; // 46f0:06d4
db dummyd_4c0bc[32]; // 46f0:06f4
db dummyd_4c0dc[32]; // 46f0:0714
db dummyd_4c0fc[32]; // 46f0:0734
db dummyd_4c11c[32]; // 46f0:0754
db dummyd_4c13c[32]; // 46f0:0774
db dummyd_4c15c[32]; // 46f0:0794
db dummyd_4c17c[32]; // 46f0:07b4
db dummyd_4c19c[32]; // 46f0:07d4
db dummyd_4c1bc[32]; // 46f0:07f4
db dummyd_4c1dc[32]; // 46f0:0814
db dummyd_4c1fc[32]; // 46f0:0834
db dummyd_4c21c[32]; // 46f0:0854
db dummyd_4c23c[32]; // 46f0:0874
db dummyd_4c25c[32]; // 46f0:0894
db dummyd_4c27c[32]; // 46f0:08b4
db dummyd_4c29c[32]; // 46f0:08d4
db dummyd_4c2bc[32]; // 46f0:08f4
db dummyd_4c2dc[32]; // 46f0:0914
db dummyd_4c2fc[32]; // 46f0:0934
db dummyd_4c31c[32]; // 46f0:0954
db dummyd_4c33c[32]; // 46f0:0974
db dummyd_4c35c[32]; // 46f0:0994
db dummyd_4c37c[32]; // 46f0:09b4
db dummyd_4c39c[32]; // 46f0:09d4
db dummyd_4c3bc[32]; // 46f0:09f4
db dummyd_4c3dc[32]; // 46f0:0a14
db dummyd_4c3fc[32]; // 46f0:0a34
db dummyd_4c41c[32]; // 46f0:0a54
db dummyd_4c43c[32]; // 46f0:0a74
db dummyd_4c45c[32]; // 46f0:0a94
db dummyd_4c47c[32]; // 46f0:0ab4
db dummyd_4c49c[32]; // 46f0:0ad4
db dummyd_4c4bc[32]; // 46f0:0af4
db dummyd_4c4dc[32]; // 46f0:0b14
db dummyd_4c4fc[32]; // 46f0:0b34
db dummyd_4c51c[32]; // 46f0:0b54
db dummyd_4c53c[32]; // 46f0:0b74
db dummyd_4c55c[32]; // 46f0:0b94
db dummyd_4c57c[32]; // 46f0:0bb4
db dummyd_4c59c[32]; // 46f0:0bd4
db dummyd_4c5bc[32]; // 46f0:0bf4
db dummyd_4c5dc[32]; // 46f0:0c14
db dummyd_4c5fc[32]; // 46f0:0c34
db dummyd_4c61c[32]; // 46f0:0c54
db dummyd_4c63c[32]; // 46f0:0c74
db dummyd_4c65c[32]; // 46f0:0c94
db dummyd_4c67c[32]; // 46f0:0cb4
db dummyd_4c69c[32]; // 46f0:0cd4
db dummyd_4c6bc[32]; // 46f0:0cf4
db dummyd_4c6dc[32]; // 46f0:0d14
db dummyd_4c6fc[32]; // 46f0:0d34
db dummyd_4c71c[32]; // 46f0:0d54
db dummyd_4c73c[32]; // 46f0:0d74
db dummyd_4c75c[32]; // 46f0:0d94
db dummyd_4c77c[32]; // 46f0:0db4
db dummyd_4c79c[32]; // 46f0:0dd4
db dummyd_4c7bc[32]; // 46f0:0df4
db dummyd_4c7dc[32]; // 46f0:0e14
db dummyd_4c7fc[32]; // 46f0:0e34
db dummyd_4c81c[32]; // 46f0:0e54
db dummyd_4c83c[32]; // 46f0:0e74
db dummyd_4c85c[32]; // 46f0:0e94
db dummyd_4c87c[32]; // 46f0:0eb4
db dummyd_4c89c[32]; // 46f0:0ed4
db dummyd_4c8bc[32]; // 46f0:0ef4
db dummyd_4c8dc[32]; // 46f0:0f14
db dummyd_4c8fc[32]; // 46f0:0f34
db dummyd_4c91c[32]; // 46f0:0f54
db dummyd_4c93c[32]; // 46f0:0f74
db dummyd_4c95c[32]; // 46f0:0f94
db dummyd_4c97c[32]; // 46f0:0fb4
db dummyd_4c99c[32]; // 46f0:0fd4
db dummyd_4c9bc[32]; // 46f0:0ff4
db dummyd_4c9dc[32]; // 46f0:1014
db dummyd_4c9fc[32]; // 46f0:1034
db dummyd_4ca1c[32]; // 46f0:1054
db dummyd_4ca3c[32]; // 46f0:1074
db dummyd_4ca5c[32]; // 46f0:1094
db dummyd_4ca7c[32]; // 46f0:10b4
db dummyd_4ca9c[32]; // 46f0:10d4
db dummyd_4cabc[32]; // 46f0:10f4
db dummyd_4cadc[32]; // 46f0:1114
db dummyd_4cafc[32]; // 46f0:1134
db dummyd_4cb1c[32]; // 46f0:1154
db dummyd_4cb3c[32]; // 46f0:1174
db dummyd_4cb5c[32]; // 46f0:1194
db dummyd_4cb7c[32]; // 46f0:11b4
db dummyd_4cb9c[32]; // 46f0:11d4
db dummyd_4cbbc[32]; // 46f0:11f4
db dummyd_4cbdc[32]; // 46f0:1214
db dummyd_4cbfc[32]; // 46f0:1234
db dummyd_4cc1c[32]; // 46f0:1254
db dummyd_4cc3c[32]; // 46f0:1274
db dummyd_4cc5c[32]; // 46f0:1294
db dummyd_4cc7c[32]; // 46f0:12b4
db dummyd_4cc9c[32]; // 46f0:12d4
db dummyd_4ccbc[32]; // 46f0:12f4
db dummyd_4ccdc[32]; // 46f0:1314
db dummyd_4ccfc[32]; // 46f0:1334
db dummyd_4cd1c[32]; // 46f0:1354
db dummyd_4cd3c[32]; // 46f0:1374
db dummyd_4cd5c[32]; // 46f0:1394
db dummyd_4cd7c[32]; // 46f0:13b4
db dummyd_4cd9c[32]; // 46f0:13d4
db dummyd_4cdbc[32]; // 46f0:13f4
db dummyd_4cddc[32]; // 46f0:1414
db dummyd_4cdfc;
db dummyd_4cdfd;
db dummyd_4cdfe; // 46f0:1436
db dummyd_4cdff; // 46f0:1437
db dummyd_4ce00; // 46f0:1438
db dummyd_4ce01; // 46f0:1439
db dummyd_4ce02;
db dummyd_4ce03;
db dummyd_4ce04; // 46f0:143c
db dummyd_4ce05; // 46f0:143d
db dummyd_4ce06; // 46f0:143e
db dummyd_4ce07; // 46f0:143f
db dummyd_4ce08;
db dummyd_4ce09;
db dummyd_4ce0a; // 46f0:1442
db dummyd_4ce0b; // 46f0:1443
db dummyd_4ce0c; // 46f0:1444
db dummyd_4ce0d; // 46f0:1445
db dummyd_4ce0e;
db dummyd_4ce0f;
db dummyd_4ce10; // 46f0:1448
db dummyd_4ce11; // 46f0:1449
db dummyd_4ce12; // 46f0:144a
db dummyd_4ce13; // 46f0:144b
db dummyd_4ce14;
db dummyd_4ce15;
db dummyd_4ce16;
db dummyd_4ce17;
db dummyd_4ce18; // 46f0:1450
db dummyd_4ce19;
db dummyd_4ce1a[32]; // 46f0:1454
db dummyd_4ce3a[32]; // 46f0:1474
db dummyd_4ce5a[32]; // 46f0:1494
db dummyd_4ce7a[32]; // 46f0:14b4
db dummyd_4ce9a; // 46f0:14d4
db dummyd_4ce9b; // 46f0:14d5
db dummyd_4ce9c; // 46f0:14d6
db dummyd_4ce9d;
db dummyd_4ce9e; // 46f0:14d8
db dummyd_4ce9f; // 46f0:14d9
db dummyd_4cea0; // 46f0:14da
db dummyd_4cea1;
db dummyd_4cea2; // 46f0:14dc
db dummyd_4cea3; // 46f0:14dd
db dummyd_4cea4; // 46f0:14de
db dummyd_4cea5; // 46f0:14df
db dummyd_4cea6; // 46f0:14e0
db dummyd_4cea7; // 46f0:14e1
db dummyd_4cea8; // 46f0:14e2
db dummyd_4cea9; // 46f0:14e3
db dummyd_4ceaa; // 46f0:14e4
db dummyd_4ceab; // 46f0:14e5
db dummyd_4ceac; // 46f0:14e6
db dummyd_4cead; // 46f0:14e7
db dummyd_4ceae; // 46f0:14e8
db dummyd_4ceaf; // 46f0:14e9
db dummyd_4ceb0; // 46f0:14ea
db dummyd_4ceb1; // 46f0:14eb
db dummyd_4ceb2; // 46f0:14ec
db dummyd_4ceb3; // 46f0:14ed
db dummyd_4ceb4[32]; // 46f0:14f0
db dummyd_4ced4[32]; // 46f0:1510
db dummyd_4cef4[32]; // 46f0:1530
db dummyd_4cf14[32]; // 46f0:1550
db dummyd_4cf34[32]; // 46f0:1570
db dummyd_4cf54[32]; // 46f0:1590
db dummyd_4cf74[32]; // 46f0:15b0
db dummyd_4cf94[32]; // 46f0:15d0
db dummyd_4cfb4[32]; // 46f0:15f0
db dummyd_4cfd4[32]; // 46f0:1610
db dummyd_4cff4[32]; // 46f0:1630
db dummyd_4d014[32]; // 46f0:1650
db dummyd_4d034[32]; // 46f0:1670
db dummyd_4d054[32]; // 46f0:1690
db dummyd_4d074[32]; // 46f0:16b0
db dummyd_4d094[32]; // 46f0:16d0
db dummyd_4d0b4[32]; // 46f0:16f0
db dummyd_4d0d4[32]; // 46f0:1710
db dummyd_4d0f4[32]; // 46f0:1730
db dummyd_4d114[32]; // 46f0:1750
db dummyd_4d134[32]; // 46f0:1770
db dummyd_4d154[32]; // 46f0:1790
db dummyd_4d174[32]; // 46f0:17b0
db dummyd_4d194[32]; // 46f0:17d0
db dummyd_4d1b4[32]; // 46f0:17f0
db dummyd_4d1d4[32]; // 46f0:1810
db dummyd_4d1f4[32]; // 46f0:1830
db dummyd_4d214[32]; // 46f0:1850
db dummyd_4d234;
db dummyd_4d235;
db dummyd_4d236;
db dummyd_4d237;
db dummyd_4d238;
db dummyd_4d239; // 46f0:1875
db dummyd_4d23a; // 46f0:1876
db dummyd_4d23b;
db dummyd_4d23c;
db dummyd_4d23d;
db dummyd_4d23e;
db dummyd_4d23f;
db dummyd_4d240;
db dummyd_4d241;
db dummyd_4d242;
db dummyd_4d243; // 46f0:187f
db unk_5c780; // 47d6:0000
db dummyd_4d245[32]; // 47d6:0001
db dummyd_4d265[32]; // 47d6:0021
db dummyd_4d285[32]; // 47d6:0041
db dummyd_4d2a5[32]; // 47d6:0061
db dummyd_4d2c5[32]; // 47d6:0081
db dummyd_4d2e5[32]; // 47d6:00a1
db dummyd_4d305[32]; // 47d6:00c1
db dummyd_4d325[32]; // 47d6:00e1
db dummyd_4d345[32]; // 47d6:0101
db dummyd_4d365[32]; // 47d6:0121
db dummyd_4d385[32]; // 47d6:0141
db dummyd_4d3a5[32]; // 47d6:0161
db dummyd_4d3c5[32]; // 47d6:0181
db dummyd_4d3e5[32]; // 47d6:01a1
db dummyd_4d405[32]; // 47d6:01c1
db dummyd_4d425[32]; // 47d6:01e1
db dummyd_4d445[32]; // 47d6:0201
db dummyd_4d465[32]; // 47d6:0221
db dummyd_4d485[32]; // 47d6:0241
db dummyd_4d4a5[32]; // 47d6:0261
db dummyd_4d4c5[32]; // 47d6:0281
db dummyd_4d4e5[32]; // 47d6:02a1
db dummyd_4d505[32]; // 47d6:02c1
db dummyd_4d525[32]; // 47d6:02e1
db dummyd_4d545[32]; // 47d6:0301
db dummyd_4d565[32]; // 47d6:0321
db dummyd_4d585[32]; // 47d6:0341
db dummyd_4d5a5[32]; // 47d6:0361
db dummyd_4d5c5[32]; // 47d6:0381
db dummyd_4d5e5[32]; // 47d6:03a1
db dummyd_4d605[32]; // 47d6:03c1
db dummyd_4d625[32]; // 47d6:03e1
db dummyd_4d645[32]; // 47d6:0401
db dummyd_4d665[32]; // 47d6:0421
db dummyd_4d685[32]; // 47d6:0441
db dummyd_4d6a5[32]; // 47d6:0461
db dummyd_4d6c5[32]; // 47d6:0481
db dummyd_4d6e5[32]; // 47d6:04a1
db dummyd_4d705[32]; // 47d6:04c1
db dummyd_4d725[32]; // 47d6:04e1
db dummyd_4d745[32]; // 47d6:0501
db dummyd_4d765[32]; // 47d6:0521
db dummyd_4d785[32]; // 47d6:0541
db dummyd_4d7a5[32]; // 47d6:0561
db dummyd_4d7c5[32]; // 47d6:0581
db dummyd_4d7e5[32]; // 47d6:05a1
db dummyd_4d805[32]; // 47d6:05c1
db dummyd_4d825[32]; // 47d6:05e1
db dummyd_4d845[32]; // 47d6:0601
db dummyd_4d865[32]; // 47d6:0621
db dummyd_4d885[32]; // 47d6:0641
db dummyd_4d8a5[32]; // 47d6:0661
db dummyd_4d8c5[32]; // 47d6:0681
db dummyd_4d8e5[32]; // 47d6:06a1
db dummyd_4d905[32]; // 47d6:06c1
db dummyd_4d925[32]; // 47d6:06e1
db dummyd_4d945[32]; // 47d6:0701
db dummyd_4d965[32]; // 47d6:0721
db dummyd_4d985[32]; // 47d6:0741
db dummyd_4d9a5[32]; // 47d6:0761
db dummyd_4d9c5[32]; // 47d6:0781
db dummyd_4d9e5[32]; // 47d6:07a1
db dummyd_4da05[32]; // 47d6:07c1
db dummyd_4da25[32]; // 47d6:07e1
db dummyd_4da45[32]; // 47d6:0801
db dummyd_4da65[32]; // 47d6:0821
db dummyd_4da85[32]; // 47d6:0841
db dummyd_4daa5[32]; // 47d6:0861
db dummyd_4dac5[32]; // 47d6:0881
db dummyd_4dae5[32]; // 47d6:08a1
db dummyd_4db05[32]; // 47d6:08c1
db dummyd_4db25[32]; // 47d6:08e1
db dummyd_4db45[32]; // 47d6:0901
db dummyd_4db65[32]; // 47d6:0921
db dummyd_4db85[32]; // 47d6:0941
db dummyd_4dba5[32]; // 47d6:0961
db dummyd_4dbc5[32]; // 47d6:0981
db dummyd_4dbe5[32]; // 47d6:09a1
db dummyd_4dc05[32]; // 47d6:09c1
db dummyd_4dc25[32]; // 47d6:09e1
db dummyd_4dc45[32]; // 47d6:0a01
db dummyd_4dc65[32]; // 47d6:0a21
db dummyd_4dc85[32]; // 47d6:0a41
db dummyd_4dca5[32]; // 47d6:0a61
db dummyd_4dcc5;
db dummyd_4dcc6; // 47d6:0a82
db dummyd_4dcc7;
db dummyd_4dcc8;
db dummyd_4dcc9;
db dummyd_4dcca;
db dummyd_4dccb;
db dummyd_4dccc;
db dummyd_4dccd; // 47d6:0a89
db dummyd_4dcce; // 47d6:0a8a
db dummyd_4dccf;
db dummyd_4dcd0;
db dummyd_4dcd1;
db dummyd_4dcd2; // 47d6:0a8e
db dummyd_4dcd3;
db dummyd_4dcd4;
db dummyd_4dcd5; // 47d6:0a91
db dummyd_4dcd6; // 47d6:0a92
db dummyd_4dcd7;
db dummyd_4dcd8;
db dummyd_4dcd9;
db dummyd_4dcda; // 47d6:0a96
db dummyd_4dcdb;
db dummyd_4dcdc;
db dummyd_4dcdd;
db dummyd_4dcde;
db dummyd_4dcdf;
db dummyd_4dce0;
db dummyd_4dce1;
db dummyd_4dce2;
db dummyd_4dce3;
db dummyd_4dce4;
db dummyd_4dce5;
db dummyd_4dce6; // 48f3:0002
db unk_5d223; // 48f3:0003
db dummyd_4dce8[32]; // 48f3:0004
db dummyd_4dd08[32]; // 48f3:0024
db dummyd_4dd28[32]; // 48f3:0044
db dummyd_4dd48[32]; // 48f3:0064
db dummyd_4dd68[32]; // 48f3:0084
db dummyd_4dd88[32]; // 48f3:00a4
db dummyd_4dda8[32]; // 48f3:00c4
db dummyd_4ddc8;
db dummyd_4ddc9; // 48f3:00e5
db dummyd_4ddca; // 48f3:00e6
db dummyd_4ddcb;
db dummyd_4ddcc; // 48f3:00e8
db dummyd_4ddcd; // 48f3:00e9
db dummyd_4ddce;
db dummyd_4ddcf;
db dummyd_4ddd0; // 48f3:00ec
db dummyd_4ddd1; // 48f3:00ed
db dummyd_4ddd2;
db dummyd_4ddd3;
db dummyd_4ddd4; // 48f3:00f0
db dummyd_4ddd5; // 48f3:00f1
db dummyd_4ddd6;
db dummyd_4ddd7;
db dummyd_4ddd8; // 48f3:00f4
db dummyd_4ddd9;
db dummyd_4ddda;
db dummyd_4dddb;
db dummyd_4dddc; // 48f3:00f8
db dummyd_4dddd;
db dummyd_4ddde;
db dummyd_4dddf;
db dummyd_4dde0; // 48f3:00fc
db dummyd_4dde1;
db dummyd_4dde2;
db dummyd_4dde3;
db dummyd_4dde4;
db dummyd_4dde5;
db dummyd_4dde6; // 4c92:0002
db unk_5d323; // 4c92:0003
db dummyd_4dde8[32]; // 4c92:0004
db dummyd_4de08[32]; // 4c92:0024
db dummyd_4de28[32]; // 4c92:0044
db dummyd_4de48[32]; // 4c92:0064
db dummyd_4de68[32]; // 4c92:0084
db dummyd_4de88[32]; // 4c92:00a4
db dummyd_4dea8[32]; // 4c92:00c4
db dummyd_4dec8[32]; // 4c92:00e4
db dummyd_4dee8[32]; // 4c92:0104
db dummyd_4df08[32]; // 4c92:0124
db dummyd_4df28; // 4c92:0144
db dummyd_4df29; // 4c92:0145
db dummyd_4df2a; // 4c92:0146
db dummyd_4df2b; // 4c92:0147
db dummyd_4df2c; // 4c92:0148
db dummyd_4df2d; // 4c92:0149
db dummyd_4df2e; // 4c92:014a
db dummyd_4df2f; // 4c92:014b
db dummyd_4df30; // 4c92:014c
db dummyd_4df31; // 4c92:014d
db dummyd_4df32; // 4c92:014e
db dummyd_4df33; // 4c92:014f
db dummyd_4df34; // 4c92:0150
db dummyd_4df35; // 4c92:0151
db dummyd_4df36; // 4c92:0152
db dummyd_4df37;
db dummyd_4df38; // 4c92:0154
db dummyd_4df39;
db dummyd_4df3a[32]; // 4c92:0158
db dummyd_4df5a[32]; // 4c92:0178
db dummyd_4df7a[32]; // 4c92:0198
db dummyd_4df9a[32]; // 4c92:01b8
db dummyd_4dfba[32]; // 4c92:01d8
db dummyd_4dfda[32]; // 4c92:01f8
db dummyd_4dffa[32]; // 4c92:0218
db dummyd_4e01a;
db dummyd_4e01b;
db dummyd_4e01c; // 4c92:023a
db dummyd_4e01d; // 4c92:023b
db dummyd_4e01e;
db dummyd_4e01f;
db dummyd_4e020; // 4c92:023e
db dummyd_4e021; // 4c92:023f
db dummyd_4e022;
db dummyd_4e023;
db dummyd_4e024;
db dummyd_4e025; // 4c92:0243
db dummyd_4e026; // 4c92:0244
db dummyd_4e027;
db dummyd_4e028;
db dummyd_4e029; // 4c92:0247
db dummyd_4e02a; // 4c92:0248
db dummyd_4e02b;
db dummyd_4e02c;
db dummyd_4e02d; // 4c92:024b
db dummyd_4e02e; // 4c92:024c
db dummyd_4e02f;
db dummyd_4e030;
db dummyd_4e031; // 4c92:024f
db dummyd_4e032;
db dummyd_4e033;
db dummyd_4e034;
db dummyd_4e035; // 4c92:0253
db dummyd_4e036;
db dummyd_4e037;
db dummyd_4e038[32]; // 4c92:0258
db dummyd_4e058[32]; // 4c92:0278
db dummyd_4e078[32]; // 4c92:0298
db dummyd_4e098[32]; // 4c92:02b8
db dummyd_4e0b8[32]; // 4c92:02d8
db dummyd_4e0d8[32]; // 4c92:02f8
db dummyd_4e0f8[32]; // 4c92:0318
db dummyd_4e118[32]; // 4c92:0338
db dummyd_4e138[32]; // 4c92:0358
db dummyd_4e158[32]; // 4c92:0378
db dummyd_4e178[32]; // 4c92:0398
db dummyd_4e198[32]; // 4c92:03b8
db dummyd_4e1b8[32]; // 4c92:03d8
db dummyd_4e1d8[32]; // 4c92:03f8
db dummyd_4e1f8[32]; // 4c92:0418
db dummyd_4e218[32]; // 4c92:0438
db dummyd_4e238[32]; // 4c92:0458
db dummyd_4e258[32]; // 4c92:0478
db dummyd_4e278[32]; // 4c92:0498
db dummyd_4e298[32]; // 4c92:04b8
db dummyd_4e2b8[32]; // 4c92:04d8
db dummyd_4e2d8[32]; // 4c92:04f8
db dummyd_4e2f8;
db dummyd_4e2f9;
db dummyd_4e2fa;
db dummyd_4e2fb;
db dummyd_4e2fc;
db dummyd_4e2fd; // 4c92:051d
db dummyd_4e2fe;
db dummyd_4e2ff;
db dummyd_4e300[32]; // 4e1a:0000
db dummyd_4e320[32]; // 4e1a:0020
db dummyd_4e340[32]; // 4e1a:0040
db dummyd_4e360[32]; // 4e1a:0060
db dummyd_4e380[32]; // 4e1a:0080
db dummyd_4e3a0[32]; // 4e1a:00a0
db dummyd_4e3c0[32]; // 4e1a:00c0
db dummyd_4e3e0[32]; // 4e1a:00e0
db dummyd_4e400[32]; // 4e1a:0100
db dummyd_4e420[32]; // 4e1a:0120
db dummyd_4e440[32]; // 4e1a:0140
db dummyd_4e460[32]; // 4e1a:0160
db dummyd_4e480[32]; // 4e1a:0180
db dummyd_4e4a0[32]; // 4e1a:01a0
db dummyd_4e4c0[32]; // 4e1a:01c0
db dummyd_4e4e0[32]; // 4e1a:01e0
db dummyd_4e500[32]; // 4e1a:0200
db dummyd_4e520[32]; // 4e1a:0220
db dummyd_4e540[32]; // 4e1a:0240
db dummyd_4e560[32]; // 4e1a:0260
db dummyd_4e580[32]; // 4e1a:0280
db dummyd_4e5a0[32]; // 4e1a:02a0
db dummyd_4e5c0[32]; // 4e1a:02c0
db dummyd_4e5e0[32]; // 4e1a:02e0
db dummyd_4e600[32]; // 4e1a:0300
db dummyd_4e620[32]; // 4e1a:0320
db dummyd_4e640[32]; // 4e1a:0340
db dummyd_4e660[32]; // 4e1a:0360
db dummyd_4e680[32]; // 4e1a:0380
db dummyd_4e6a0[32]; // 4e1a:03a0
db dummyd_4e6c0[32]; // 4e1a:03c0
db dummyd_4e6e0;
db dummyd_4e6e1; // 4e1a:03e1
db unk_5dc22; // 4e1a:03e2
db dummyd_4e6e3[32]; // 4e1a:03e3
db dummyd_4e703[32]; // 4e1a:0403
db dummyd_4e723[32]; // 4e1a:0423
db dummyd_4e743[32]; // 4e1a:0443
db dummyd_4e763[32]; // 4e1a:0463
db dummyd_4e783[32]; // 4e1a:0483
db dummyd_4e7a3[32]; // 4e1a:04a3
db dummyd_4e7c3;
db dummyd_4e7c4;
db dummyd_4e7c5;
db dummyd_4e7c6;
db dummyd_4e7c7;
db dummyd_4e7c8;
db dummyd_4e7c9;
db dummyd_4e7ca;
db dummyd_4e7cb;
db dummyd_4e7cc;
db dummyd_4e7cd;
db dummyd_4e7ce; // 4e1a:04ce
db dummyd_4e7cf;
db dummyd_4e7d0;
db dummyd_4e7d1;
db dummyd_4e7d2; // 4e1a:04d2
db dummyd_4e7d3; // 4e1a:04d3
db dummyd_4e7d4;
db dummyd_4e7d5;
db dummyd_4e7d6; // 4e1a:04d6
db dummyd_4e7d7; // 4e1a:04d7
db dummyd_4e7d8;
db dummyd_4e7d9;
db dummyd_4e7da; // 4e1a:04da
db dummyd_4e7db; // 4e1a:04db
db dummyd_4e7dc;
db dummyd_4e7dd;
db dummyd_4e7de; // 4e1a:04de
db dummyd_4e7df; // 4e1a:04df
db dummyd_4e7e0;
db dummyd_4e7e1; // 4e1a:04e1
db unk_5dd22; // 4e1a:04e2
db dummyd_4e7e3[32]; // 4e1a:04e3
db dummyd_4e803[32]; // 4e1a:0503
db dummyd_4e823[32]; // 4e1a:0523
db dummyd_4e843[32]; // 4e1a:0543
db dummyd_4e863[32]; // 4e1a:0563
db dummyd_4e883[32]; // 4e1a:0583
db dummyd_4e8a3[32]; // 4e1a:05a3
db dummyd_4e8c3[32]; // 4e1a:05c3
db dummyd_4e8e3[32]; // 4e1a:05e3
db dummyd_4e903[32]; // 4e1a:0603
db dummyd_4e923;
db dummyd_4e924;
db dummyd_4e925; // 4e1a:0625
db dummyd_4e926; // 4e1a:0626
db dummyd_4e927;
db dummyd_4e928; // 4e1a:0628
db dummyd_4e929; // 4e1a:0629
db dummyd_4e92a;
db dummyd_4e92b;
db dummyd_4e92c; // 4e1a:062c
db dummyd_4e92d; // 4e1a:062d
db dummyd_4e92e;
db dummyd_4e92f;
db dummyd_4e930; // 4e1a:0630
db dummyd_4e931; // 4e1a:0631
db dummyd_4e932;
db dummyd_4e933;
db dummyd_4e934; // 4e1a:0634
db dummyd_4e935; // 4e1a:0635
db dummyd_4e936;
db dummyd_4e937;
db dummyd_4e938; // 4e1a:0638
db dummyd_4e939;
db dummyd_4e93a;
db dummyd_4e93b;
db dummyd_4e93c; // 4e1a:063c
db dummyd_4e93d;
db dummyd_4e93e;
db dummyd_4e93f;
db dummyd_4e940;
db dummyd_4e941; // 4e1a:0641
db unk_5de82; // 4e1a:0642
db dummyd_4e943[32]; // 4e1a:0643
db dummyd_4e963[32]; // 4e1a:0663
db dummyd_4e983;
db dummyd_4e984; // 4e1a:0684
db dummyd_4e985;
db dummyd_4e986;
db dummyd_4e987;
db dummyd_4e988;
db dummyd_4e989; // 4e1a:0689
db dummyd_4e98a;
db dummyd_4e98b;
db dummyd_4e98c;
db dummyd_4e98d; // 4e1a:068d
db dummyd_4e98e; // 4e1a:068e
db dummyd_4e98f;
db dummyd_4e990;
db dummyd_4e991; // 4e1a:0691
db dummyd_4e992; // 4e1a:0692
db dummyd_4e993;
db dummyd_4e994; // 4e1a:0694
db dummyd_4e995; // 4e1a:0695
db dummyd_4e996; // 4e1a:0696
db dummyd_4e997;
db dummyd_4e998; // 4e1a:0698
db dummyd_4e999; // 4e1a:0699
db dummyd_4e99a;
db dummyd_4e99b;
db dummyd_4e99c; // 4e1a:069c
db dummyd_4e99d; // 4e1a:069d
db dummyd_4e99e;
db dummyd_4e99f;
db dummyd_4e9a0[672];
db dummyd_4ec40; // 4ec4:0000
db dummyd_4ec41; // 4ec4:0001
db dummyd_4ec42;
db dummyd_4ec43;
db dummyd_4ec44; // 4ec4:0004
db dummyd_4ec45; // 4ec4:0005
db dummyd_4ec46;
db dummyd_4ec47;
db dummyd_4ec48; // 4ec4:0008
db dummyd_4ec49;
db dummyd_4ec4a;
db dummyd_4ec4b;
db dummyd_4ec4c[4];
db dummyd_4ec50[32]; // 4ec4:0010
db dummyd_4ec70[32]; // 4ec4:0030
db dummyd_4ec90[32]; // 4ec4:0050
db dummyd_4ecb0[32]; // 4ec4:0070
db dummyd_4ecd0[32]; // 4ec4:0090
db dummyd_4ecf0[32]; // 4ec4:00b0
db dummyd_4ed10[32]; // 4ec4:00d0
db dummyd_4ed30[32]; // 4ec4:00f0
db dummyd_4ed50[32]; // 4ec4:0110
db dummyd_4ed70[32]; // 4ec4:0130
db dummyd_4ed90[32]; // 4ec4:0150
db dummyd_4edb0[32]; // 4ec4:0170
db dummyd_4edd0[32]; // 4ec4:0190
db dummyd_4edf0[32]; // 4ec4:01b0
db dummyd_4ee10[32]; // 4ec4:01d0
db dummyd_4ee30[32]; // 4ec4:01f0
db dummyd_4ee50[32]; // 4ec4:0210
db dummyd_4ee70[32]; // 4ec4:0230
db dummyd_4ee90[32]; // 4ec4:0250
db dummyd_4eeb0[32]; // 4ec4:0270
db dummyd_4eed0[32]; // 4ec4:0290
db dummyd_4eef0[32]; // 4ec4:02b0
db dummyd_4ef10[32]; // 4ec4:02d0
db dummyd_4ef30[32]; // 4ec4:02f0
db dummyd_4ef50[32]; // 4ec4:0310
db dummyd_4ef70[32]; // 4ec4:0330
db dummyd_4ef90[32]; // 4ec4:0350
db dummyd_4efb0[32]; // 4ec4:0370
db dummyd_4efd0[32]; // 4ec4:0390
db dummyd_4eff0[32]; // 4ec4:03b0
db dummyd_4f010[32]; // 4ec4:03d0
db dummyd_4f030[32]; // 4ec4:03f0
db dummyd_4f050[32]; // 4ec4:0410
db dummyd_4f070[32]; // 4ec4:0430
db dummyd_4f090[32]; // 4ec4:0450
db dummyd_4f0b0[32]; // 4ec4:0470
db dummyd_4f0d0[32]; // 4ec4:0490
db dummyd_4f0f0[32]; // 4ec4:04b0
db dummyd_4f110[32]; // 4ec4:04d0
db dummyd_4f130[32]; // 4ec4:04f0
db dummyd_4f150[32]; // 4ec4:0510
db dummyd_4f170[32]; // 4ec4:0530
db dummyd_4f190[32]; // 4ec4:0550
db dummyd_4f1b0[32]; // 4ec4:0570
db dummyd_4f1d0[32]; // 4ec4:0590
db dummyd_4f1f0[32]; // 4ec4:05b0
db dummyd_4f210[32]; // 4ec4:05d0
db dummyd_4f230[32]; // 4ec4:05f0
db dummyd_4f250[32]; // 4ec4:0610
db dummyd_4f270[32]; // 4ec4:0630
db dummyd_4f290[32]; // 4ec4:0650
db dummyd_4f2b0[32]; // 4ec4:0670
db dummyd_4f2d0[32]; // 4ec4:0690
db dummyd_4f2f0[32]; // 4ec4:06b0
db dummyd_4f310[32]; // 4ec4:06d0
db dummyd_4f330[32]; // 4ec4:06f0
db dummyd_4f350[32]; // 4ec4:0710
db dummyd_4f370[32]; // 4ec4:0730
db dummyd_4f390[32]; // 4ec4:0750
db dummyd_4f3b0[32]; // 4ec4:0770
db dummyd_4f3d0[32]; // 4ec4:0790
db dummyd_4f3f0[32]; // 4ec4:07b0
db dummyd_4f410[32]; // 4ec4:07d0
db dummyd_4f430[32]; // 4ec4:07f0
db dummyd_4f450[32]; // 4ec4:0810
db dummyd_4f470[32]; // 4ec4:0830
db dummyd_4f490[32]; // 4ec4:0850
db dummyd_4f4b0[32]; // 4ec4:0870
db dummyd_4f4d0[32]; // 4ec4:0890
db dummyd_4f4f0[32]; // 4ec4:08b0
db dummyd_4f510[32]; // 4ec4:08d0
db dummyd_4f530[32]; // 4ec4:08f0
db dummyd_4f550[32]; // 4ec4:0910
db dummyd_4f570[32]; // 4ec4:0930
db dummyd_4f590[32]; // 4ec4:0950
db dummyd_4f5b0[32]; // 4ec4:0970
db dummyd_4f5d0[32]; // 4ec4:0990
db dummyd_4f5f0[32]; // 4ec4:09b0
db dummyd_4f610[32]; // 4ec4:09d0
db dummyd_4f630[32]; // 4ec4:09f0
db dummyd_4f650[32]; // 4ec4:0a10
db dummyd_4f670[32]; // 4ec4:0a30
db dummyd_4f690[32]; // 4ec4:0a50
db dummyd_4f6b0[32]; // 4ec4:0a70
db dummyd_4f6d0[32]; // 4ec4:0a90
db dummyd_4f6f0[32]; // 4ec4:0ab0
db dummyd_4f710[32]; // 4ec4:0ad0
db dummyd_4f730[32]; // 4ec4:0af0
db dummyd_4f750[32]; // 4ec4:0b10
db dummyd_4f770[32]; // 4ec4:0b30
db dummyd_4f790[32]; // 4ec4:0b50
db dummyd_4f7b0[32]; // 4ec4:0b70
db dummyd_4f7d0[32]; // 4ec4:0b90
db dummyd_4f7f0[32]; // 4ec4:0bb0
db dummyd_4f810[32]; // 4ec4:0bd0
db dummyd_4f830[32]; // 4ec4:0bf0
db dummyd_4f850[32]; // 4ec4:0c10
db dummyd_4f870[32]; // 4ec4:0c30
db dummyd_4f890[32]; // 4ec4:0c50
db dummyd_4f8b0[32]; // 4ec4:0c70
db dummyd_4f8d0[32]; // 4ec4:0c90
db dummyd_4f8f0[32]; // 4ec4:0cb0
db dummyd_4f910[32]; // 4ec4:0cd0
db dummyd_4f930[32]; // 4ec4:0cf0
db dummyd_4f950[32]; // 4ec4:0d10
db dummyd_4f970[32]; // 4ec4:0d30
db dummyd_4f990[32]; // 4ec4:0d50
db dummyd_4f9b0[32]; // 4ec4:0d70
db dummyd_4f9d0[32]; // 4ec4:0d90
db dummyd_4f9f0[32]; // 4ec4:0db0
db dummyd_4fa10[32]; // 4ec4:0dd0
db dummyd_4fa30[32]; // 4ec4:0df0
db dummyd_4fa50[32]; // 4ec4:0e10
db dummyd_4fa70[32]; // 4ec4:0e30
db dummyd_4fa90[32]; // 4ec4:0e50
db dummyd_4fab0[32]; // 4ec4:0e70
db dummyd_4fad0[32]; // 4ec4:0e90
db dummyd_4faf0[32]; // 4ec4:0eb0
db dummyd_4fb10[32]; // 4ec4:0ed0
db dummyd_4fb30[32]; // 4ec4:0ef0
db dummyd_4fb50[32]; // 4ec4:0f10
db dummyd_4fb70[32]; // 4ec4:0f30
db dummyd_4fb90[32]; // 4ec4:0f50
db dummyd_4fbb0[32]; // 4ec4:0f70
db dummyd_4fbd0[32]; // 4ec4:0f90
db dummyd_4fbf0[32]; // 4ec4:0fb0
db dummyd_4fc10[32]; // 4ec4:0fd0
db dummyd_4fc30[32]; // 4ec4:0ff0
db dummyd_4fc50[32]; // 4ec4:1010
db dummyd_4fc70[32]; // 4ec4:1030
db dummyd_4fc90[32]; // 4ec4:1050
db dummyd_4fcb0[32]; // 4ec4:1070
db dummyd_4fcd0[32]; // 4ec4:1090
db dummyd_4fcf0[32]; // 4ec4:10b0
db dummyd_4fd10[32]; // 4ec4:10d0
db dummyd_4fd30[32]; // 4ec4:10f0
db dummyd_4fd50[32]; // 4ec4:1110
db dummyd_4fd70[32]; // 4ec4:1130
db dummyd_4fd90[32]; // 4ec4:1150
db dummyd_4fdb0[32]; // 4ec4:1170
db dummyd_4fdd0[32]; // 4ec4:1190
db dummyd_4fdf0[32]; // 4ec4:11b0
db dummyd_4fe10[32]; // 4ec4:11d0
db dummyd_4fe30[32]; // 4ec4:11f0
db dummyd_4fe50[32]; // 4ec4:1210
db dummyd_4fe70[32]; // 4ec4:1230
db dummyd_4fe90[32]; // 4ec4:1250
db dummyd_4feb0[32]; // 4ec4:1270
db dummyd_4fed0[32]; // 4ec4:1290
db dummyd_4fef0[32]; // 4ec4:12b0
db dummyd_4ff10[32]; // 4ec4:12d0
db dummyd_4ff30[32]; // 4ec4:12f0
db dummyd_4ff50[32]; // 4ec4:1310
db dummyd_4ff70[32]; // 4ec4:1330
db dummyd_4ff90[32]; // 4ec4:1350
db dummyd_4ffb0[32]; // 4ec4:1370
db dummyd_4ffd0[32]; // 4ec4:1390
db dummyd_4fff0[32]; // 4ec4:13b0
db dummyd_50010[32]; // 4ec4:13d0
db dummyd_50030[32]; // 4ec4:13f0
db dummyd_50050[32]; // 4ec4:1410
db dummyd_50070[32]; // 4ec4:1430
db dummyd_50090[32]; // 4ec4:1450
db dummyd_500b0[32]; // 4ec4:1470
db dummyd_500d0[32]; // 4ec4:1490
db dummyd_500f0[32]; // 4ec4:14b0
db dummyd_50110[32]; // 4ec4:14d0
db dummyd_50130[32]; // 4ec4:14f0
db dummyd_50150[32]; // 4ec4:1510
db dummyd_50170[32]; // 4ec4:1530
db dummyd_50190; // 4ed4:0000
db dummyd_50191;
db dummyd_50192; // 4ed4:0002
db dummyd_50193;
db dummyd_50194;
db dummyd_50195;
db dummyd_50196; // 4ed4:0006
db dummyd_50197;
db dummyd_50198; // 4ed4:0008
db dummyd_50199;
db dummyd_5019a; // 4ed4:000a
db unk_5f43b; // 4ed4:000b
db dummyd_5019c[32]; // 4ed4:000c
db dummyd_501bc[32]; // 4ed4:002c
db dummyd_501dc[32]; // 4ed4:004c
db dummyd_501fc[32]; // 4ed4:006c
db dummyd_5021c[32]; // 4ed4:008c
db dummyd_5023c[32]; // 4ed4:00ac
db dummyd_5025c[32]; // 4ed4:00cc
db dummyd_5027c[32]; // 4ed4:00ec
db dummyd_5029c[32]; // 4ed4:010c
db dummyd_502bc[32]; // 4ed4:012c
db dummyd_502dc; // 4ed4:014c
db dummyd_502dd; // 4ed4:014d
db dummyd_502de;
db dummyd_502df;
db dummyd_502e0;
db dummyd_502e1; // 4ed4:0151
db dummyd_502e2;
db dummyd_502e3;
db dummyd_502e4; // 4ed4:0154
db dummyd_502e5; // 4ed4:0155
db dummyd_502e6;
db dummyd_502e7;
db dummyd_502e8; // 4ed4:0158
db dummyd_502e9; // 4ed4:0159
db dummyd_502ea;
db dummyd_502eb;
db dummyd_502ec; // 4ed4:015c
db dummyd_502ed; // 4ed4:015d
db dummyd_502ee;
db dummyd_502ef;
db dummyd_502f0; // 4f26:0000
db dummyd_502f1; // 4f26:0001
db dummyd_502f2;
db dummyd_502f3;
db dummyd_502f4; // 4f26:0004
db dummyd_502f5;
db dummyd_502f6;
db byte_5f597; // 4f26:0007
db dummyd_502f8[32]; // 4f26:0008
db dummyd_50318[32]; // 4f26:0028
db dummyd_50338[32]; // 4f26:0048
db dummyd_50358[32]; // 4f26:0068
db dummyd_50378;
db dummyd_50379; // 4f26:0089
db dummyd_5037a;
db dummyd_5037b; // 4f26:008b
db dummyd_5037c; // 4f26:008c
db dummyd_5037d; // 4f26:008d
db dummyd_5037e; // 4f26:008e
db dummyd_5037f; // 4f26:008f
db dummyd_50380; // 4f26:0090
db dummyd_50381; // 4f26:0091
db dummyd_50382; // 4f26:0092
db dummyd_50383; // 4f26:0093
db dummyd_50384; // 4f26:0094
db dummyd_50385; // 4f26:0095
db dummyd_50386; // 4f26:0096
db dummyd_50387; // 4f26:0097
db dummyd_50388; // 4f26:0098
db dummyd_50389; // 4f26:0099
db dummyd_5038a; // 4f26:009a
db dummyd_5038b; // 4f26:009b
db dummyd_5038c; // 4f26:009c
db dummyd_5038d; // 4f26:009d
db dummyd_5038e; // 4f26:009e
db dummyd_5038f; // 4f26:009f
db dummyd_50390; // 4f90:0000
db dummyd_50391; // 4f90:0001
db dummyd_50392;
db dummyd_50393; // 4f90:0003
db dummyd_50394;
db dummyd_50395;
db dummyd_50396; // 4f90:0006
db unk_5f637; // 4f90:0007
db dummyd_50398[32]; // 4f90:0008
db dummyd_503b8[32]; // 4f90:0028
db dummyd_503d8[32]; // 4f90:0048
db dummyd_503f8[32]; // 4f90:0068
db dummyd_50418[32]; // 4f90:0088
db dummyd_50438[32]; // 4f90:00a8
db dummyd_50458[32]; // 4f90:00c8
db dummyd_50478[32]; // 4f90:00e8
db dummyd_50498[32]; // 4f90:0108
db dummyd_504b8[32]; // 4f90:0128
db dummyd_504d8[32]; // 4f90:0148
db dummyd_504f8[32]; // 4f90:0168
db dummyd_50518;
db dummyd_50519;
db dummyd_5051a;
db dummyd_5051b; // 4f90:018b
db dummyd_5051c; // 4f90:018c
db dummyd_5051d;
db dummyd_5051e;
db byte_5f7bf; // 4f90:018f
db dummyd_50520[32]; // 4f90:0190
db dummyd_50540[32]; // 4f90:01b0
db dummyd_50560[32]; // 4f90:01d0
db dummyd_50580[32]; // 4f90:01f0
db dummyd_505a0[32]; // 4f90:0210
db dummyd_505c0[32]; // 4f90:0230
db dummyd_505e0[32]; // 4f90:0250
db dummyd_50600[32]; // 4f90:0270
db dummyd_50620[32]; // 4f90:0290
db dummyd_50640;
db dummyd_50641; // 4f90:02b1
db dummyd_50642; // 4f90:02b2
db dummyd_50643;
db dummyd_50644;
db dummyd_50645;
db dummyd_50646;
db dummyd_50647; // 4f90:02b7
db dummyd_50648; // 4f90:02b8
db dummyd_50649; // 4f90:02b9
db dummyd_5064a;
db dummyd_5064b;
db dummyd_5064c;
db dummyd_5064d; // 4f90:02bd
db dummyd_5064e; // 4f90:02be
db dummyd_5064f;
db dummyd_50650;
db dummyd_50651;
db dummyd_50652[32]; // 4f90:02c4
db dummyd_50672[32]; // 4f90:02e4
db dummyd_50692[32]; // 4f90:0304
db dummyd_506b2[32]; // 4f90:0324
db dummyd_506d2[32]; // 4f90:0344
db dummyd_506f2[32]; // 4f90:0364
db dummyd_50712; // 4f90:0384
db dummyd_50713; // 4f90:0385
db dummyd_50714; // 4f90:0386
db dummyd_50715; // 4f90:0387
db dummyd_50716; // 4f90:0388
db dummyd_50717; // 4f90:0389
db dummyd_50718; // 4f90:038a
db dummyd_50719; // 4f90:038b
db dummyd_5071a; // 4f90:038c
db dummyd_5071b; // 4f90:038d
db dummyd_5071c; // 4f90:038e
db dummyd_5071d; // 4f90:038f
db dummyd_5071e; // 4f90:0390
db dummyd_5071f; // 4f90:0391
db dummyd_50720; // 4f90:0392
db dummyd_50721; // 4f90:0393
db dummyd_50722; // 4f90:0394
db dummyd_50723; // 4f90:0395
db dummyd_50724; // 4f90:0396
db dummyd_50725; // 4f90:0397
db dummyd_50726; // 4f90:0398
db dummyd_50727; // 4f90:0399
db dummyd_50728[32]; // 4f90:039c
db dummyd_50748[32]; // 4f90:03bc
db dummyd_50768[32]; // 4f90:03dc
db dummyd_50788[32]; // 4f90:03fc
db dummyd_507a8[32]; // 4f90:041c
db dummyd_507c8[32]; // 4f90:043c
db dummyd_507e8;
db dummyd_507e9; // 4f90:045d
db dummyd_507ea[32]; // 4f90:0460
db dummyd_5080a[32]; // 4f90:0480
db dummyd_5082a[32]; // 4f90:04a0
db dummyd_5084a[32]; // 4f90:04c0
db dummyd_5086a[32]; // 4f90:04e0
db dummyd_5088a[32]; // 4f90:0500
db dummyd_508aa; // 4f90:0520
db dummyd_508ab;
db dummyd_508ac[32]; // 4f90:0524
db dummyd_508cc[32]; // 4f90:0544
db dummyd_508ec[32]; // 4f90:0564
db dummyd_5090c[32]; // 4f90:0584
db dummyd_5092c[32]; // 4f90:05a4
db dummyd_5094c[32]; // 4f90:05c4
db dummyd_5096c[32]; // 4f90:05e4
db dummyd_5098c[32]; // 4f90:0604
db dummyd_509ac[32]; // 4f90:0624
db dummyd_509cc[32]; // 4f90:0644
db dummyd_509ec; // 4f90:0664
db dummyd_509ed; // 4f90:0665
db dummyd_509ee; // 4f90:0666
db dummyd_509ef; // 4f90:0667
db dummyd_509f0; // 4f90:0668
db dummyd_509f1; // 4f90:0669
db dummyd_509f2; // 4f90:066a
db dummyd_509f3; // 4f90:066b
db dummyd_509f4; // 4f90:066c
db dummyd_509f5; // 4f90:066d
db dummyd_509f6; // 4f90:066e
db dummyd_509f7; // 4f90:066f
db dummyd_509f8; // 4f90:0670
db dummyd_509f9; // 4f90:0671
db dummyd_509fa; // 4f90:0672
db dummyd_509fb; // 4f90:0673
db dummyd_509fc; // 4f90:0674
db dummyd_509fd;
db dummyd_509fe; // 4f90:0676
db dummyd_509ff; // 4f90:0677
db dummyd_50a00; // 4f90:0678
db dummyd_50a01;
db dummyd_50a02; // 4f90:067a
db dummyd_50a03; // 4f90:067b
db dummyd_50a04; // 4f90:067c
db dummyd_50a05;
db dummyd_50a06; // 4f90:067e
db dummyd_50a07; // 4f90:067f
db dummyd_50a08[1096];
db dummyd_50e50; // 50e5:0000
db dummyd_50e51;
db dummyd_50e52;
db dummyd_50e53; // 50e5:0003
db dummyd_50e54; // 50e5:0004
db dummyd_50e55;
db dummyd_50e56[2];
db dummyd_50e58; // 50e5:0008
db dummyd_50e59;
db unk_5fcba; // 50e5:000a
db dummyd_50e5b[32]; // 50e5:000b
db dummyd_50e7b[32]; // 50e5:002b
db dummyd_50e9b[32]; // 50e5:004b
db dummyd_50ebb[32]; // 50e5:006b
db dummyd_50edb[32]; // 50e5:008b
db dummyd_50efb[32]; // 50e5:00ab
db dummyd_50f1b[32]; // 50e5:00cb
db dummyd_50f3b[32]; // 50e5:00eb
db dummyd_50f5b[32]; // 50e5:010b
db dummyd_50f7b[32]; // 50e5:012b
db dummyd_50f9b; // 50e5:014b
db dummyd_50f9c;
db dummyd_50f9d;
db dummyd_50f9e; // 50e5:014e
db dummyd_50f9f; // 50e5:014f
db dummyd_50fa0;
db dummyd_50fa1;
db dummyd_50fa2;
db dummyd_50fa3; // 50e5:0153
db dummyd_50fa4;
db dummyd_50fa5;
db dummyd_50fa6;
db dummyd_50fa7; // 50e5:0157
db dummyd_50fa8;
db dummyd_50fa9;
db dummyd_50faa;
db dummyd_50fab; // 50e5:015b
db dummyd_50fac;
db dummyd_50fad;
db dummyd_50fae; // 50e5:015e
db dummyd_50faf; // 50e5:015f
db dummyd_50fb0;
db dummyd_50fb1;
db dummyd_50fb2;
db dummyd_50fb3; // 50fb:0003
db dummyd_50fb4;
db byte_5fe15; // 50fb:0005
db dummyd_50fb6;
db dummyd_50fb7; // 50fb:0007
db dummyd_50fb8;
db dummyd_50fb9;
db dummyd_50fba[2];
db dummyd_50fbc[32]; // 50fb:000c
db dummyd_50fdc[32]; // 50fb:002c
db dummyd_50ffc[32]; // 50fb:004c
db dummyd_5101c; // 50fb:006c
db dummyd_5101d; // 50fb:006d
db dummyd_5101e; // 50fb:006e
db dummyd_5101f; // 50fb:006f
db dummyd_51020; // 50fb:0070
db dummyd_51021;
db dummyd_51022; // 50fb:0072
db dummyd_51023;
db dummyd_51024; // 50fb:0074
db dummyd_51025;
db dummyd_51026; // 50fb:0076
db dummyd_51027;
db dummyd_51028;
db dummyd_51029;
db dummyd_5102a; // 50fb:007a
db dummyd_5102b;
db dummyd_5102c; // 50fb:007c
db dummyd_5102d;
db dummyd_5102e; // 50fb:007e
db dummyd_5102f; // 50fb:007f
db dummyd_51030[32];
db dummyd_51050; // 5105:0000
db dummyd_51051; // 5105:0001
db dummyd_51052; // 5105:0002
db dummyd_51053; // 5105:0003
db dummyd_51054; // 5105:0004
db byte_5fe95; // 5105:0005
db dummyd_51056[32]; // 5105:0006
db dummyd_51076[32]; // 5105:0026
db dummyd_51096[32]; // 5105:0046
db dummyd_510b6[32]; // 5105:0066
db dummyd_510d6[2];
db dummyd_510d8[32]; // 5105:0088
db dummyd_510f8[32]; // 5105:00a8
db dummyd_51118[32]; // 5105:00c8
db dummyd_51138[32]; // 5105:00e8
db dummyd_51158[32]; // 5105:0108
db dummyd_51178[32]; // 5105:0128
db dummyd_51198[32]; // 5105:0148
db dummyd_511b8[32]; // 5105:0168
db dummyd_511d8[32]; // 5105:0188
db dummyd_511f8[32]; // 5105:01a8
db dummyd_51218[32]; // 5105:01c8
db dummyd_51238[32]; // 5105:01e8
db dummyd_51258[32]; // 5105:0208
db dummyd_51278[32]; // 5105:0228
db dummyd_51298[32]; // 5105:0248
db dummyd_512b8[32]; // 5105:0268
db dummyd_512d8[32]; // 5105:0288
db dummyd_512f8[32]; // 5105:02a8
db dummyd_51318[32]; // 5105:02c8
db dummyd_51338; // 5105:02e8
db dummyd_51339; // 5105:02e9
db dummyd_5133a;
db dummyd_5133b;
db dummyd_5133c;
db dummyd_5133d; // 5105:02ed
db dummyd_5133e; // 5105:02ee
db dummyd_5133f; // 5105:02ef
db dummyd_51340;
db dummyd_51341;
db dummyd_51342; // 5105:02f2
db dummyd_51343; // 5105:02f3
db dummyd_51344; // 5105:02f4
db dummyd_51345; // 5105:02f5
db dummyd_51346;
db dummyd_51347;
db dummyd_51348; // 5105:02f8
db dummyd_51349; // 5105:02f9
db dummyd_5134a; // 5105:02fa
db dummyd_5134b; // 5105:02fb
db dummyd_5134c; // 5105:02fc
db dummyd_5134d;
db dummyd_5134e; // 5105:02fe
db dummyd_5134f; // 5105:02ff
db dummyd_51350; // 5105:0300
db byte_60191; // 5105:0301
db dummyd_51352[32]; // 5105:0302
db dummyd_51372[32]; // 5105:0322
db dummyd_51392[32]; // 5105:0342
db dummyd_513b2[32]; // 5105:0362
db dummyd_513d2;
db dummyd_513d3; // 5105:0383
db dummyd_513d4; // 5105:0384
db dummyd_513d5; // 5105:0385
db dummyd_513d6;
db dummyd_513d7;
db dummyd_513d8;
db dummyd_513d9; // 5105:0389
db dummyd_513da; // 5105:038a
db dummyd_513db; // 5105:038b
db dummyd_513dc;
db dummyd_513dd;
db dummyd_513de;
db dummyd_513df; // 5105:038f
db dummyd_513e0; // 5105:0390
db dummyd_513e1; // 5105:0391
db dummyd_513e2;
db dummyd_513e3;
db dummyd_513e4; // 5105:0394
db dummyd_513e5; // 5105:0395
db dummyd_513e6; // 5105:0396
db dummyd_513e7; // 5105:0397
db dummyd_513e8;
db dummyd_513e9;
db dummyd_513ea; // 5105:039a
db dummyd_513eb; // 5105:039b
db dummyd_513ec; // 5105:039c
db dummyd_513ed; // 5105:039d
db dummyd_513ee; // 5105:039e
db dummyd_513ef;
db dummyd_513f0; // 5105:03a0
db byte_60231; // 5105:03a1
db dummyd_513f2[32]; // 5105:03a2
db dummyd_51412[32]; // 5105:03c2
db dummyd_51432[32]; // 5105:03e2
db dummyd_51452[32]; // 5105:0402
db dummyd_51472[32]; // 5105:0422
db dummyd_51492[32]; // 5105:0442
db dummyd_514b2[32]; // 5105:0462
db dummyd_514d2[32]; // 5105:0482
db dummyd_514f2[32]; // 5105:04a2
db dummyd_51512[32]; // 5105:04c2
db dummyd_51532[32]; // 5105:04e2
db dummyd_51552[32]; // 5105:0502
db dummyd_51572[32]; // 5105:0522
db dummyd_51592[32]; // 5105:0542
db dummyd_515b2[32]; // 5105:0562
db dummyd_515d2[32]; // 5105:0582
db unk_60432; // 5105:05a2
db dummyd_515f3[32]; // 5105:05a3
db dummyd_51613[32]; // 5105:05c3
db dummyd_51633[32]; // 5105:05e3
db dummyd_51653[32]; // 5105:0603
db dummyd_51673[32]; // 5105:0623
db dummyd_51693[32]; // 5105:0643
db dummyd_516b3[32]; // 5105:0663
db dummyd_516d3[32]; // 5105:0683
db dummyd_516f3[32]; // 5105:06a3
db dummyd_51713[32]; // 5105:06c3
db dummyd_51733[32]; // 5105:06e3
db dummyd_51753[32]; // 5105:0703
db dummyd_51773[32]; // 5105:0723
db dummyd_51793[32]; // 5105:0743
db dummyd_517b3[32]; // 5105:0763
db dummyd_517d3[32]; // 5105:0783
db dummyd_517f3[32]; // 5105:07a3
db dummyd_51813[32]; // 5105:07c3
db dummyd_51833[32]; // 5105:07e3
db dummyd_51853[32]; // 5105:0803
db dummyd_51873[32]; // 5105:0823
db dummyd_51893[32]; // 5105:0843
db dummyd_518b3; // 5105:0863
db dummyd_518b4;
db dummyd_518b5;
db dummyd_518b6;
db dummyd_518b7; // 5105:0867
db dummyd_518b8; // 5105:0868
db dummyd_518b9;
db dummyd_518ba;
db dummyd_518bb;
db dummyd_518bc;
db dummyd_518bd; // 5105:086d
db dummyd_518be; // 5105:086e
db dummyd_518bf;
db dummyd_518c0;
db dummyd_518c1;
db dummyd_518c2;
db dummyd_518c3; // 5105:0873
db dummyd_518c4;
db dummyd_518c5;
db dummyd_518c6;
db dummyd_518c7;
db dummyd_518c8; // 5105:0878
db dummyd_518c9; // 5105:0879
db dummyd_518ca;
db dummyd_518cb;
db dummyd_518cc;
db dummyd_518cd;
db dummyd_518ce;
db dummyd_518cf;
db dummyd_518d0;
db byte_60711; // 5105:0881
db dummyd_518d2[32]; // 5105:0882
db dummyd_518f2[32]; // 5105:08a2
db dummyd_51912[32]; // 5105:08c2
db dummyd_51932;
db dummyd_51933;
db dummyd_51934; // 5105:08e4
db dummyd_51935; // 5105:08e5
db dummyd_51936; // 5105:08e6
db dummyd_51937; // 5105:08e7
db dummyd_51938;
db dummyd_51939;
db dummyd_5193a; // 5105:08ea
db dummyd_5193b; // 5105:08eb
db dummyd_5193c; // 5105:08ec
db dummyd_5193d; // 5105:08ed
db dummyd_5193e;
db dummyd_5193f;
db dummyd_51940; // 5105:08f0
db dummyd_51941; // 5105:08f1
db dummyd_51942; // 5105:08f2
db dummyd_51943; // 5105:08f3
db dummyd_51944;
db dummyd_51945;
db dummyd_51946; // 5105:08f6
db dummyd_51947; // 5105:08f7
db dummyd_51948; // 5105:08f8
db dummyd_51949; // 5105:08f9
db dummyd_5194a;
db dummyd_5194b;
db dummyd_5194c; // 5105:08fc
db dummyd_5194d; // 5105:08fd
db dummyd_5194e; // 5105:08fe
db dummyd_5194f;
db dummyd_51950; // 5105:0900
db byte_60791; // 5105:0901
db dummyd_51952[32]; // 5105:0902
db dummyd_51972[32]; // 5105:0922
db dummyd_51992[32]; // 5105:0942
db dummyd_519b2[32]; // 5105:0962
db dummyd_519d2[32]; // 5105:0982
db dummyd_519f2[32]; // 5105:09a2
db dummyd_51a12[32]; // 5105:09c2
db dummyd_51a32[32]; // 5105:09e2
db dummyd_51a52[32]; // 5105:0a02
db dummyd_51a72[32]; // 5105:0a22
db dummyd_51a92[32]; // 5105:0a42
db dummyd_51ab2[32]; // 5105:0a62
db dummyd_51ad2[32]; // 5105:0a82
db dummyd_51af2[32]; // 5105:0aa2
db dummyd_51b12[32]; // 5105:0ac2
db dummyd_51b32[32]; // 5105:0ae2
db dummyd_51b52[32]; // 5105:0b02
db dummyd_51b72[32]; // 5105:0b22
db dummyd_51b92[32]; // 5105:0b42
db dummyd_51bb2[32]; // 5105:0b62
db dummyd_51bd2[32]; // 5105:0b82
db dummyd_51bf2[32]; // 5105:0ba2
db dummyd_51c12[32]; // 5105:0bc2
db dummyd_51c32[32]; // 5105:0be2
db dummyd_51c52[32]; // 5105:0c02
db dummyd_51c72[32]; // 5105:0c22
db dummyd_51c92[32]; // 5105:0c42
db dummyd_51cb2[32]; // 5105:0c62
db dummyd_51cd2[32]; // 5105:0c82
db dummyd_51cf2[32]; // 5105:0ca2
db dummyd_51d12[32]; // 5105:0cc2
db dummyd_51d32[32]; // 5105:0ce2
db dummyd_51d52[32]; // 5105:0d02
db dummyd_51d72[32]; // 5105:0d22
db dummyd_51d92[32]; // 5105:0d42
db dummyd_51db2[32]; // 5105:0d62
db dummyd_51dd2[32]; // 5105:0d82
db dummyd_51df2[32]; // 5105:0da2
db dummyd_51e12[32]; // 5105:0dc2
db dummyd_51e32[32]; // 5105:0de2
db dummyd_51e52[32]; // 5105:0e02
db unk_60cb2; // 5105:0e22
db dummyd_51e73[32]; // 5105:0e23
db dummyd_51e93[32]; // 5105:0e43
db dummyd_51eb3[32]; // 5105:0e63
db dummyd_51ed3[32]; // 5105:0e83
db dummyd_51ef3[32]; // 5105:0ea3
db dummyd_51f13[32]; // 5105:0ec3
db dummyd_51f33[32]; // 5105:0ee3
db dummyd_51f53[32]; // 5105:0f03
db dummyd_51f73[32]; // 5105:0f23
db dummyd_51f93[32]; // 5105:0f43
db dummyd_51fb3[32]; // 5105:0f63
db dummyd_51fd3[32]; // 5105:0f83
db dummyd_51ff3[32]; // 5105:0fa3
db dummyd_52013[32]; // 5105:0fc3
db dummyd_52033[32]; // 5105:0fe3
db dummyd_52053[32]; // 5105:1003
db dummyd_52073[32]; // 5105:1023
db dummyd_52093[32]; // 5105:1043
db dummyd_520b3[32]; // 5105:1063
db dummyd_520d3[32]; // 5105:1083
db dummyd_520f3[32]; // 5105:10a3
db dummyd_52113[32]; // 5105:10c3
db dummyd_52133[32]; // 5105:10e3
db dummyd_52153[32]; // 5105:1103
db dummyd_52173[32]; // 5105:1123
db dummyd_52193[32]; // 5105:1143
db dummyd_521b3[32]; // 5105:1163
db dummyd_521d3[32]; // 5105:1183
db dummyd_521f3[32]; // 5105:11a3
db dummyd_52213[32]; // 5105:11c3
db dummyd_52233[32]; // 5105:11e3
db dummyd_52253[32]; // 5105:1203
db dummyd_52273[32]; // 5105:1223
db dummyd_52293[32]; // 5105:1243
db dummyd_522b3[32]; // 5105:1263
db dummyd_522d3[32]; // 5105:1283
db dummyd_522f3[32]; // 5105:12a3
db dummyd_52313[32]; // 5105:12c3
db dummyd_52333[32]; // 5105:12e3
db dummyd_52353[32]; // 5105:1303
db dummyd_52373[32]; // 5105:1323
db dummyd_52393[32]; // 5105:1343
db dummyd_523b3[32]; // 5105:1363
db dummyd_523d3[32]; // 5105:1383
db dummyd_523f3[32]; // 5105:13a3
db dummyd_52413[32]; // 5105:13c3
db dummyd_52433[32]; // 5105:13e3
db dummyd_52453[32]; // 5105:1403
db dummyd_52473[32]; // 5105:1423
db dummyd_52493[32]; // 5105:1443
db dummyd_524b3[32]; // 5105:1463
db dummyd_524d3[32]; // 5105:1483
db dummyd_524f3[32]; // 5105:14a3
db dummyd_52513[32]; // 5105:14c3
db dummyd_52533[32]; // 5105:14e3
db dummyd_52553[32]; // 5105:1503
db dummyd_52573[32]; // 5105:1523
db dummyd_52593[32]; // 5105:1543
db dummyd_525b3[32]; // 5105:1563
db dummyd_525d3[32]; // 5105:1583
db dummyd_525f3[32]; // 5105:15a3
db dummyd_52613[32]; // 5105:15c3
db dummyd_52633[32]; // 5105:15e3
db dummyd_52653[32]; // 5105:1603
db dummyd_52673[32]; // 5105:1623
db dummyd_52693[32]; // 5105:1643
db dummyd_526b3[32]; // 5105:1663
db dummyd_526d3[32]; // 5105:1683
db dummyd_526f3[32]; // 5105:16a3
db dummyd_52713[32]; // 5105:16c3
db dummyd_52733[32]; // 5105:16e3
db dummyd_52753[32]; // 5105:1703
db dummyd_52773[32]; // 5105:1723
db dummyd_52793[32]; // 5105:1743
db dummyd_527b3[32]; // 5105:1763
db dummyd_527d3[32]; // 5105:1783
db dummyd_527f3[32]; // 5105:17a3
db dummyd_52813[32]; // 5105:17c3
db dummyd_52833[32]; // 5105:17e3
db dummyd_52853[32]; // 5105:1803
db dummyd_52873[32]; // 5105:1823
db dummyd_52893[32]; // 5105:1843
db dummyd_528b3[32]; // 5105:1863
db dummyd_528d3[32]; // 5105:1883
db dummyd_528f3[32]; // 5105:18a3
db dummyd_52913[32]; // 5105:18c3
db dummyd_52933[32]; // 5105:18e3
db dummyd_52953[32]; // 5105:1903
db dummyd_52973[32]; // 5105:1923
db dummyd_52993[32]; // 5105:1943
db dummyd_529b3[32]; // 5105:1963
db dummyd_529d3[32]; // 5105:1983
db dummyd_529f3[32]; // 5105:19a3
db dummyd_52a13[32]; // 5105:19c3
db dummyd_52a33[32]; // 5105:19e3
db dummyd_52a53[32]; // 5105:1a03
db dummyd_52a73[32]; // 5105:1a23
db dummyd_52a93[32]; // 5105:1a43
db dummyd_52ab3[32]; // 5105:1a63
db dummyd_52ad3[32]; // 5105:1a83
db dummyd_52af3[32]; // 5105:1aa3
db dummyd_52b13[32]; // 5105:1ac3
db dummyd_52b33[32]; // 5105:1ae3
db dummyd_52b53[32]; // 5105:1b03
db dummyd_52b73[32]; // 5105:1b23
db dummyd_52b93[32]; // 5105:1b43
db dummyd_52bb3[32]; // 5105:1b63
db dummyd_52bd3[32]; // 5105:1b83
db dummyd_52bf3[32]; // 5105:1ba3
db dummyd_52c13[32]; // 5105:1bc3
db dummyd_52c33[32]; // 5105:1be3
db dummyd_52c53[32]; // 5105:1c03
db dummyd_52c73[32]; // 5105:1c23
db dummyd_52c93[32]; // 5105:1c43
db dummyd_52cb3[32]; // 5105:1c63
db dummyd_52cd3[32]; // 5105:1c83
db dummyd_52cf3; // 5105:1ca3
db dummyd_52cf4; // 5105:1ca4
db dummyd_52cf5; // 5105:1ca5
db dummyd_52cf6;
db dummyd_52cf7; // 5105:1ca7
db dummyd_52cf8; // 5105:1ca8
db dummyd_52cf9; // 5105:1ca9
db dummyd_52cfa;
db dummyd_52cfb;
db dummyd_52cfc; // 5105:1cac
db dummyd_52cfd; // 5105:1cad
db dummyd_52cfe;
db dummyd_52cff;
db dummyd_52d00[32]; // 516d:0000
db dummyd_52d20[32]; // 516d:0020
db dummyd_52d40[32]; // 516d:0040
db dummyd_52d60[32]; // 516d:0060
db dummyd_52d80[32]; // 516d:0080
db dummyd_52da0[32]; // 516d:00a0
db dummyd_52dc0[32]; // 516d:00c0
db dummyd_52de0[32]; // 516d:00e0
db dummyd_52e00[32]; // 516d:0100
db dummyd_52e20[32]; // 516d:0120
db dummyd_52e40[32]; // 516d:0140
db dummyd_52e60[32]; // 516d:0160
db dummyd_52e80[32]; // 516d:0180
db dummyd_52ea0[32]; // 516d:01a0
db dummyd_52ec0[32]; // 516d:01c0
db dummyd_52ee0[32]; // 516d:01e0
db dummyd_52f00[32]; // 5183:0000
db dummyd_52f20[32]; // 5183:0020
db dummyd_52f40[32]; // 5183:0040
db dummyd_52f60[32]; // 5183:0060
db dummyd_52f80[32]; // 5183:0080
db dummyd_52fa0[32]; // 5183:00a0
db dummyd_52fc0[32]; // 5183:00c0
db dummyd_52fe0[32]; // 5183:00e0
db dummyd_53000[32]; // 5183:0100
db dummyd_53020[32]; // 5183:0120
db dummyd_53040[32]; // 5183:0140
db dummyd_53060[32]; // 5183:0160
db dummyd_53080[32]; // 5183:0180
db dummyd_530a0[32]; // 5183:01a0
db dummyd_530c0[32]; // 5183:01c0
db dummyd_530e0[32]; // 5183:01e0
db dummyd_53100[32]; // 5183:0200
db dummyd_53120[32]; // 5183:0220
db dummyd_53140[32]; // 5183:0240
db dummyd_53160[32]; // 5183:0260
db dummyd_53180[32]; // 5183:0280
db dummyd_531a0[32]; // 5183:02a0
db dummyd_531c0[32]; // 5183:02c0
db dummyd_531e0[32]; // 5183:02e0
db dummyd_53200[32]; // 5183:0300
db dummyd_53220[32]; // 5183:0320
db dummyd_53240[32]; // 5183:0340
db dummyd_53260[32]; // 5183:0360
db dummyd_53280[32]; // 5183:0380
db dummyd_532a0[32]; // 5183:03a0
db dummyd_532c0[32]; // 5183:03c0
db dummyd_532e0[32]; // 5183:03e0
db dummyd_53300[32]; // 5183:0400
db dummyd_53320[32]; // 5183:0420
db dummyd_53340[32]; // 5183:0440
db dummyd_53360[32]; // 5183:0460
db dummyd_53380[32]; // 5183:0480
db dummyd_533a0[32]; // 5183:04a0
db dummyd_533c0[32]; // 5183:04c0
db dummyd_533e0[32]; // 5183:04e0
db dummyd_53400[32]; // 5183:0500
db dummyd_53420[32]; // 5183:0520
db dummyd_53440[32]; // 5183:0540
db dummyd_53460[32]; // 5183:0560
db dummyd_53480[32]; // 5183:0580
db dummyd_534a0[32]; // 5183:05a0
db dummyd_534c0[32]; // 5183:05c0
db dummyd_534e0[32]; // 5183:05e0
db dummyd_53500[32]; // 5183:0600
db dummyd_53520[32]; // 5183:0620
db dummyd_53540[32]; // 5183:0640
db dummyd_53560[32]; // 5183:0660
db dummyd_53580[32]; // 5183:0680
db dummyd_535a0[32]; // 5183:06a0
db dummyd_535c0[32]; // 5183:06c0
db dummyd_535e0[32]; // 5183:06e0
db dummyd_53600[32]; // 5183:0700
db dummyd_53620[32]; // 5183:0720
db dummyd_53640[32]; // 5183:0740
db dummyd_53660[32]; // 5183:0760
db dummyd_53680[32]; // 5183:0780
db dummyd_536a0[32]; // 5183:07a0
db dummyd_536c0[32]; // 5183:07c0
db dummyd_536e0[32]; // 5183:07e0
db dummyd_53700[32]; // 5183:0800
db dummyd_53720[32]; // 5183:0820
db dummyd_53740[32]; // 5183:0840
db dummyd_53760[32]; // 5183:0860
db dummyd_53780[32]; // 5183:0880
db dummyd_537a0[32]; // 5183:08a0
db dummyd_537c0[32]; // 5183:08c0
db dummyd_537e0[32]; // 5183:08e0
db dummyd_53800[32]; // 5183:0900
db dummyd_53820[32]; // 5183:0920
db dummyd_53840[32]; // 5183:0940
db dummyd_53860[32]; // 5183:0960
db dummyd_53880[32]; // 5183:0980
db dummyd_538a0[32]; // 5183:09a0
db dummyd_538c0[32]; // 5183:09c0
db dummyd_538e0[32]; // 5183:09e0
db dummyd_53900[32]; // 5183:0a00
db dummyd_53920[32]; // 5183:0a20
db dummyd_53940[32]; // 5183:0a40
db dummyd_53960[32]; // 5183:0a60
db dummyd_53980[32]; // 5183:0a80
db dummyd_539a0[32]; // 5183:0aa0
db dummyd_539c0[32]; // 5183:0ac0
db dummyd_539e0[32]; // 5183:0ae0
db dummyd_53a00[32]; // 5183:0b00
db dummyd_53a20[32]; // 5183:0b20
db dummyd_53a40[32]; // 5183:0b40
db dummyd_53a60[32]; // 5183:0b60
db dummyd_53a80[32]; // 5183:0b80
db dummyd_53aa0[32]; // 5183:0ba0
db dummyd_53ac0[32]; // 5183:0bc0
db dummyd_53ae0[32]; // 5183:0be0
db dummyd_53b00[32]; // 5183:0c00
db dummyd_53b20[32]; // 5183:0c20
db dummyd_53b40[32]; // 5183:0c40
db dummyd_53b60[32]; // 5183:0c60
db dummyd_53b80[32]; // 5183:0c80
db dummyd_53ba0[32]; // 5183:0ca0
db dummyd_53bc0[32]; // 5183:0cc0
db dummyd_53be0[32]; // 5183:0ce0
db dummyd_53c00[32]; // 5183:0d00
db dummyd_53c20[32]; // 5183:0d20
db dummyd_53c40[32]; // 5183:0d40
db dummyd_53c60[32]; // 5183:0d60
db dummyd_53c80[32]; // 5183:0d80
db dummyd_53ca0[32]; // 5183:0da0
db dummyd_53cc0[32]; // 5183:0dc0
db dummyd_53ce0[32]; // 5183:0de0
db dummyd_53d00[32]; // 5183:0e00
db dummyd_53d20[32]; // 5183:0e20
db dummyd_53d40[32]; // 5183:0e40
db dummyd_53d60[32]; // 5183:0e60
db dummyd_53d80[32]; // 5183:0e80
db dummyd_53da0[32]; // 5183:0ea0
db dummyd_53dc0[32]; // 5183:0ec0
db dummyd_53de0[32]; // 5183:0ee0
db dummyd_53e00[32]; // 5183:0f00
db dummyd_53e20[32]; // 5183:0f20
db dummyd_53e40[32]; // 5183:0f40
db dummyd_53e60[32]; // 5183:0f60
db dummyd_53e80[32]; // 5183:0f80
db dummyd_53ea0[32]; // 5183:0fa0
db dummyd_53ec0[32]; // 5183:0fc0
db dummyd_53ee0[32]; // 5183:0fe0
db dummyd_53f00[32]; // 5183:1000
db dummyd_53f20[32]; // 5183:1020
db dummyd_53f40[32]; // 5183:1040
db dummyd_53f60[32]; // 5183:1060
db dummyd_53f80[32]; // 5183:1080
db dummyd_53fa0[32]; // 5183:10a0
db dummyd_53fc0[32]; // 5183:10c0
db dummyd_53fe0[32]; // 5183:10e0
db dummyd_54000[32]; // 5183:1100
db dummyd_54020[32]; // 5183:1120
db dummyd_54040[32]; // 5183:1140
db dummyd_54060[32]; // 5183:1160
db dummyd_54080[32]; // 5183:1180
db dummyd_540a0[32]; // 5183:11a0
db dummyd_540c0[32]; // 5183:11c0
db dummyd_540e0[32]; // 5183:11e0
db dummyd_54100[32]; // 5183:1200
db dummyd_54120[32]; // 5183:1220
db dummyd_54140[32]; // 518b:0000
db dummyd_54160[32]; // 518b:0020
db dummyd_54180[32]; // 518b:0040
db dummyd_541a0[32]; // 518b:0060
db dummyd_541c0[32]; // 518b:0080
db dummyd_541e0[32]; // 518b:00a0
db dummyd_54200[32]; // 518b:00c0
db dummyd_54220[32]; // 518b:00e0
db dummyd_54240[32]; // 518b:0100
db dummyd_54260[32]; // 518b:0120
db dummyd_54280[32]; // 518b:0140
db dummyd_542a0[32]; // 518b:0160
db dummyd_542c0[32]; // 518b:0180
db dummyd_542e0[32]; // 518b:01a0
db dummyd_54300[32]; // 518b:01c0
db dummyd_54320[32]; // 518b:01e0
db dummyd_54340[32]; // 518b:0200
db dummyd_54360[32]; // 518b:0220
db dummyd_54380[32]; // 518b:0240
db dummyd_543a0[32]; // 518b:0260
db dummyd_543c0[32]; // 518b:0280
db dummyd_543e0[32]; // 518b:02a0
db dummyd_54400[32]; // 518b:02c0
db dummyd_54420[32]; // 518b:02e0
db dummyd_54440[32]; // 518b:0300
db dummyd_54460[32]; // 518b:0320
db dummyd_54480[32]; // 518b:0340
db dummyd_544a0[32]; // 518b:0360
db dummyd_544c0[32]; // 518b:0380
db dummyd_544e0[32]; // 518b:03a0
db dummyd_54500[32]; // 518b:03c0
db dummyd_54520[32]; // 518b:03e0
db dummyd_54540[32]; // 518b:0400
db dummyd_54560[32]; // 518b:0420
db dummyd_54580[32]; // 518b:0440
db dummyd_545a0[32]; // 518b:0460
db dummyd_545c0[32]; // 518b:0480
db dummyd_545e0[32]; // 518b:04a0
db dummyd_54600[32]; // 518b:04c0
db dummyd_54620[32]; // 518b:04e0
db dummyd_54640[32]; // 518b:0500
db dummyd_54660[32]; // 518b:0520
db dummyd_54680[32]; // 518b:0540
db dummyd_546a0[32]; // 518b:0560
db dummyd_546c0[32]; // 518b:0580
db dummyd_546e0[32]; // 518b:05a0
db dummyd_54700[32]; // 518b:05c0
db dummyd_54720[32]; // 518b:05e0
db dummyd_54740[32]; // 518b:0600
db dummyd_54760[32]; // 518b:0620
db dummyd_54780[32]; // 518b:0640
db dummyd_547a0[32]; // 518b:0660
db dummyd_547c0[32]; // 518b:0680
db dummyd_547e0[32]; // 518b:06a0
db dummyd_54800[32]; // 518b:06c0
db dummyd_54820[32]; // 518b:06e0
db dummyd_54840[32]; // 518b:0700
db dummyd_54860[32]; // 518b:0720
db dummyd_54880[32]; // 518b:0740
db dummyd_548a0[32]; // 518b:0760
db dummyd_548c0[32]; // 518b:0780
db dummyd_548e0[32]; // 518b:07a0
db dummyd_54900[32]; // 518b:07c0
db dummyd_54920[32]; // 518b:07e0
db dummyd_54940[32]; // 518b:0800
db dummyd_54960[32]; // 518b:0820
db dummyd_54980[32]; // 518b:0840
db dummyd_549a0[32]; // 518b:0860
db dummyd_549c0[32]; // 518b:0880
db dummyd_549e0[32]; // 518b:08a0
db dummyd_54a00[32]; // 518b:08c0
db dummyd_54a20[32]; // 518b:08e0
db dummyd_54a40[32]; // 518b:0900
db dummyd_54a60[32]; // 518b:0920
db dummyd_54a80[32]; // 518b:0940
db dummyd_54aa0[32]; // 518b:0960
db dummyd_54ac0[32]; // 518b:0980
db dummyd_54ae0[32]; // 518b:09a0
db dummyd_54b00[32]; // 518b:09c0
db dummyd_54b20[32]; // 518b:09e0
db dummyd_54b40[32]; // 518b:0a00
db dummyd_54b60[32]; // 518b:0a20
db dummyd_54b80[32]; // 518b:0a40
db dummyd_54ba0[32]; // 518b:0a60
db dummyd_54bc0[32]; // 518b:0a80
db dummyd_54be0[32]; // 518b:0aa0
db dummyd_54c00[32]; // 518b:0ac0
db dummyd_54c20[32]; // 518b:0ae0
db dummyd_54c40[32]; // 518b:0b00
db dummyd_54c60[32]; // 518b:0b20
db dummyd_54c80[32]; // 518b:0b40
db dummyd_54ca0[32]; // 518b:0b60
db dummyd_54cc0[32]; // 518b:0b80
db dummyd_54ce0[32]; // 518b:0ba0
db dummyd_54d00[32]; // 518b:0bc0
db dummyd_54d20[32]; // 518b:0be0
db dummyd_54d40[32]; // 518b:0c00
db dummyd_54d60[32]; // 518b:0c20
db dummyd_54d80[32]; // 518b:0c40
db dummyd_54da0[32]; // 518b:0c60
db dummyd_54dc0[32]; // 518b:0c80
db dummyd_54de0[32]; // 518b:0ca0
db dummyd_54e00[32]; // 518b:0cc0
db dummyd_54e20[32]; // 518b:0ce0
db dummyd_54e40[32]; // 518b:0d00
db dummyd_54e60[32]; // 518b:0d20
db dummyd_54e80[32]; // 518b:0d40
db dummyd_54ea0[32]; // 518b:0d60
db dummyd_54ec0[32]; // 518b:0d80
db dummyd_54ee0[32]; // 518b:0da0
db dummyd_54f00[32]; // 518b:0dc0
db dummyd_54f20[32]; // 518b:0de0
db dummyd_54f40[32]; // 518b:0e00
db dummyd_54f60[32]; // 518b:0e20
db dummyd_54f80[32]; // 518b:0e40
db dummyd_54fa0[32]; // 518b:0e60
db dummyd_54fc0[32]; // 518b:0e80
db dummyd_54fe0[32]; // 518b:0ea0
db dummyd_55000[32]; // 518b:0ec0
db dummyd_55020[32]; // 518b:0ee0
db dummyd_55040[32]; // 518b:0f00
db dummyd_55060[32]; // 518b:0f20
db dummyd_55080[32]; // 518b:0f40
db dummyd_550a0[32]; // 518b:0f60
db dummyd_550c0[32]; // 518b:0f80
db dummyd_550e0[32]; // 518b:0fa0
db dummyd_55100[32]; // 518b:0fc0
db dummyd_55120[32]; // 518b:0fe0
db dummyd_55140[32]; // 518b:1000
db dummyd_55160[32]; // 518b:1020
db dummyd_55180[32]; // 518b:1040
db dummyd_551a0[32]; // 518b:1060
db dummyd_551c0[32]; // 518b:1080
db dummyd_551e0[32]; // 518b:10a0
db dummyd_55200[32]; // 518b:10c0
db dummyd_55220[32]; // 518b:10e0
db dummyd_55240[32]; // 518b:1100
db dummyd_55260[32]; // 518b:1120
db dummyd_55280[32]; // 518b:1140
db dummyd_552a0[32]; // 518b:1160
db dummyd_552c0[32]; // 518b:1180
db dummyd_552e0[32]; // 518b:11a0
db dummyd_55300[32]; // 518b:11c0
db dummyd_55320[32]; // 518b:11e0
db dummyd_55340[32]; // 518b:1200
db dummyd_55360[32]; // 518b:1220
db dummyd_55380[32]; // 518b:1240
db dummyd_553a0[32]; // 518b:1260
db dummyd_553c0[32]; // 518b:1280
db dummyd_553e0[32]; // 518b:12a0
db dummyd_55400[32]; // 518b:12c0
db dummyd_55420[32]; // 518b:12e0
db dummyd_55440[32]; // 518b:1300
db dummyd_55460[32]; // 518b:1320
db dummyd_55480[32]; // 518b:1340
db dummyd_554a0[32]; // 518b:1360
db dummyd_554c0[32]; // 518b:1380
db dummyd_554e0[32]; // 518b:13a0
db dummyd_55500[32]; // 518b:13c0
db dummyd_55520[32]; // 518b:13e0
db dummyd_55540[32]; // 518b:1400
db dummyd_55560[32]; // 518b:1420
db dummyd_55580[32]; // 518b:1440
db dummyd_555a0[32]; // 518b:1460
db dummyd_555c0[32]; // 518b:1480
db dummyd_555e0[32]; // 518b:14a0
db dummyd_55600[32]; // 518b:14c0
db dummyd_55620[32]; // 518b:14e0
db dummyd_55640[32]; // 518b:1500
db dummyd_55660[32]; // 518b:1520
db dummyd_55680[32]; // 518b:1540
db dummyd_556a0[32]; // 518b:1560
db dummyd_556c0[32]; // 518b:1580
db dummyd_556e0[32]; // 518b:15a0
db dummyd_55700[32]; // 518b:15c0
db dummyd_55720[32]; // 518b:15e0
db dummyd_55740[32]; // 518b:1600
db dummyd_55760[32]; // 518b:1620
db dummyd_55780[32]; // 518b:1640
db dummyd_557a0[32]; // 518b:1660
db dummyd_557c0[32]; // 518b:1680
db dummyd_557e0[32]; // 518b:16a0
db dummyd_55800[32]; // 518b:16c0
db dummyd_55820[32]; // 518b:16e0
db dummyd_55840[32]; // 518b:1700
db dummyd_55860[32]; // 518b:1720
db dummyd_55880[32]; // 518b:1740
db dummyd_558a0[32]; // 518b:1760
db dummyd_558c0[32]; // 518b:1780
db dummyd_558e0[32]; // 518b:17a0
db dummyd_55900[32]; // 518b:17c0
db dummyd_55920[32]; // 518b:17e0
db dummyd_55940[32]; // 518b:1800
db dummyd_55960[32]; // 518b:1820
db dummyd_55980[32]; // 518b:1840
db dummyd_559a0[32]; // 518b:1860
db dummyd_559c0[32]; // 518b:1880
db dummyd_559e0[32]; // 518b:18a0
db dummyd_55a00[32]; // 518b:18c0
db dummyd_55a20[32]; // 518b:18e0
db dummyd_55a40[32]; // 518b:1900
db dummyd_55a60[32]; // 518b:1920
db dummyd_55a80[32]; // 518b:1940
db dummyd_55aa0[32]; // 518b:1960
db dummyd_55ac0[32]; // 518b:1980
db dummyd_55ae0[32]; // 518b:19a0
db dummyd_55b00[32]; // 518b:19c0
db dummyd_55b20[32]; // 518b:19e0
db dummyd_55b40[32]; // 518b:1a00
db dummyd_55b60[32]; // 518b:1a20
db dummyd_55b80[32]; // 518b:1a40
db dummyd_55ba0[32]; // 518b:1a60
db dummyd_55bc0[32]; // 518b:1a80
db dummyd_55be0[32]; // 518b:1aa0
db dummyd_55c00[32]; // 518b:1ac0
db dummyd_55c20[32]; // 518b:1ae0
db dummyd_55c40[32]; // 518b:1b00
db dummyd_55c60[32]; // 518b:1b20
db dummyd_55c80[32]; // 518b:1b40
db dummyd_55ca0[32]; // 518b:1b60
db dummyd_55cc0[32]; // 518b:1b80
db dummyd_55ce0; // 518b:1ba0
db dummyd_55ce1; // 518b:1ba1
db dummyd_55ce2;
db dummyd_55ce3; // 518b:1ba3
db dummyd_55ce4; // 518b:1ba4
db dummyd_55ce5;
db dummyd_55ce6;
db dummyd_55ce7;
db dummyd_55ce8; // 518b:1ba8
db dummyd_55ce9;
db dummyd_55cea;
db dummyd_55ceb;
db dummyd_55cec; // 518b:1bac
db dummyd_55ced;
db dummyd_55cee;
db dummyd_55cef;
db dummyd_55cf0;
db dummyd_55cf1;
db dummyd_55cf2;
db dummyd_55cf3;
db dummyd_55cf4;
db dummyd_55cf5;
db dummyd_55cf6[32]; // 518b:1bb8
db dummyd_55d16[32]; // 518b:1bd8
db dummyd_55d36[32]; // 518b:1bf8
db dummyd_55d56[32]; // 518b:1c18
db dummyd_55d76[32]; // 518b:1c38
db dummyd_55d96[32]; // 518b:1c58
db dummyd_55db6[32]; // 518b:1c78
db dummyd_55dd6[32]; // 518b:1c98
db dummyd_55df6[32]; // 518b:1cb8
db dummyd_55e16[32]; // 518b:1cd8
db dummyd_55e36[32]; // 518b:1cf8
db dummyd_55e56[32]; // 518b:1d18
db dummyd_55e76[32]; // 518b:1d38
db dummyd_55e96[32]; // 518b:1d58
db dummyd_55eb6[32]; // 518b:1d78
db dummyd_55ed6[32]; // 518b:1d98
db dummyd_55ef6[32]; // 518b:1db8
db dummyd_55f16[32]; // 518b:1dd8
db dummyd_55f36[32]; // 518b:1df8
db dummyd_55f56[32]; // 518b:1e18
db dummyd_55f76[32]; // 518b:1e38
db dummyd_55f96[32]; // 518b:1e58
db dummyd_55fb6[32]; // 518b:1e78
db dummyd_55fd6[32]; // 518b:1e98
db dummyd_55ff6[32]; // 518b:1eb8
db dummyd_56016[32]; // 518b:1ed8
db dummyd_56036[32]; // 518b:1ef8
db dummyd_56056[32]; // 518b:1f18
db dummyd_56076[32]; // 518b:1f38
db dummyd_56096[32]; // 518b:1f58
db dummyd_560b6[32]; // 518b:1f78
db dummyd_560d6[32]; // 518b:1f98
db dummyd_560f6[32]; // 518b:1fb8
db dummyd_56116[32]; // 518b:1fd8
db dummyd_56136[32]; // 518b:1ff8
db dummyd_56156[32]; // 518b:2018
db dummyd_56176[32]; // 518b:2038
db dummyd_56196[32]; // 518b:2058
db dummyd_561b6[32]; // 518b:2078
db dummyd_561d6[32]; // 518b:2098
db dummyd_561f6[32]; // 518b:20b8
db dummyd_56216[32]; // 518b:20d8
db dummyd_56236[32]; // 518b:20f8
db dummyd_56256[32]; // 518b:2118
db dummyd_56276[32]; // 518b:2138
db dummyd_56296[32]; // 518b:2158
db dummyd_562b6[32]; // 518b:2178
db dummyd_562d6[32]; // 518b:2198
db dummyd_562f6[32]; // 518b:21b8
db dummyd_56316[32]; // 518b:21d8
db dummyd_56336[32]; // 518b:21f8
db dummyd_56356[32]; // 518b:2218
db dummyd_56376[32]; // 518b:2238
db dummyd_56396[32]; // 518b:2258
db dummyd_563b6[32]; // 518b:2278
db dummyd_563d6[32]; // 518b:2298
db dummyd_563f6[32]; // 518b:22b8
db dummyd_56416[32]; // 518b:22d8
db dummyd_56436[32]; // 518b:22f8
db dummyd_56456[32]; // 518b:2318
db dummyd_56476[32]; // 518b:2338
db dummyd_56496[32]; // 518b:2358
db dummyd_564b6[32]; // 518b:2378
db dummyd_564d6[32]; // 518b:2398
db dummyd_564f6[32]; // 518b:23b8
db dummyd_56516[32]; // 518b:23d8
db dummyd_56536[32]; // 518b:23f8
db dummyd_56556[32]; // 518b:2418
db dummyd_56576[32]; // 518b:2438
db dummyd_56596[32]; // 518b:2458
db dummyd_565b6[32]; // 518b:2478
db dummyd_565d6[32]; // 518b:2498
db dummyd_565f6[32]; // 518b:24b8
db dummyd_56616[32]; // 518b:24d8
db dummyd_56636[32]; // 518b:24f8
db dummyd_56656[32]; // 518b:2518
db dummyd_56676[32]; // 518b:2538
db dummyd_56696[32]; // 518b:2558
db dummyd_566b6[32]; // 518b:2578
db dummyd_566d6[32]; // 518b:2598
db dummyd_566f6[32]; // 518b:25b8
db dummyd_56716[32]; // 518b:25d8
db dummyd_56736[32]; // 518b:25f8
db dummyd_56756[32]; // 518b:2618
db dummyd_56776[32]; // 518b:2638
db dummyd_56796[32]; // 518b:2658
db dummyd_567b6[32]; // 518b:2678
db dummyd_567d6[32]; // 518b:2698
db dummyd_567f6[32]; // 518b:26b8
db dummyd_56816[32]; // 518b:26d8
db dummyd_56836[32]; // 518b:26f8
db dummyd_56856[32]; // 518b:2718
db dummyd_56876[32]; // 518b:2738
db dummyd_56896[32]; // 518b:2758
db dummyd_568b6[32]; // 518b:2778
db dummyd_568d6[32]; // 518b:2798
db dummyd_568f6[32]; // 518b:27b8
db dummyd_56916[32]; // 518b:27d8
db dummyd_56936[32]; // 518b:27f8
db dummyd_56956[32]; // 518b:2818
db dummyd_56976[32]; // 518b:2838
db dummyd_56996[32]; // 518b:2858
db dummyd_569b6[32]; // 518b:2878
db dummyd_569d6[32]; // 518b:2898
db dummyd_569f6[32]; // 518b:28b8
db dummyd_56a16[32]; // 518b:28d8
db dummyd_56a36[32]; // 518b:28f8
db dummyd_56a56[32]; // 518b:2918
db dummyd_56a76[32]; // 518b:2938
db dummyd_56a96[32]; // 518b:2958
db dummyd_56ab6[32]; // 518b:2978
db dummyd_56ad6[32]; // 518b:2998
db dummyd_56af6[32]; // 518b:29b8
db dummyd_56b16[32]; // 518b:29d8
db dummyd_56b36[32]; // 518b:29f8
db dummyd_56b56[32]; // 518b:2a18
db dummyd_56b76[32]; // 518b:2a38
db dummyd_56b96[32]; // 518b:2a58
db dummyd_56bb6[32]; // 518b:2a78
db dummyd_56bd6[32]; // 518b:2a98
db dummyd_56bf6[32]; // 518b:2ab8
db dummyd_56c16[32]; // 518b:2ad8
db dummyd_56c36[32]; // 518b:2af8
db dummyd_56c56[32]; // 518b:2b18
db dummyd_56c76[32]; // 518b:2b38
db dummyd_56c96[32]; // 518b:2b58
db dummyd_56cb6[32]; // 518b:2b78
db dummyd_56cd6[32]; // 518b:2b98
db dummyd_56cf6[32]; // 518b:2bb8
db dummyd_56d16[32]; // 518b:2bd8
db dummyd_56d36[32]; // 518b:2bf8
db dummyd_56d56[32]; // 518b:2c18
db dummyd_56d76[32]; // 518b:2c38
db dummyd_56d96[32]; // 518b:2c58
db dummyd_56db6[32]; // 518b:2c78
db dummyd_56dd6[32]; // 518b:2c98
db dummyd_56df6[32]; // 518b:2cb8
db dummyd_56e16[32]; // 518b:2cd8
db dummyd_56e36[32]; // 518b:2cf8
db dummyd_56e56[32]; // 518b:2d18
db dummyd_56e76[32]; // 518b:2d38
db dummyd_56e96[32]; // 518b:2d58
db dummyd_56eb6[32]; // 518b:2d78
db dummyd_56ed6[32]; // 518b:2d98
db dummyd_56ef6[32]; // 518b:2db8
db dummyd_56f16[32]; // 518b:2dd8
db dummyd_56f36[32]; // 518b:2df8
db dummyd_56f56[32]; // 518b:2e18
db dummyd_56f76[32]; // 518b:2e38
db dummyd_56f96[32]; // 518b:2e58
db dummyd_56fb6[32]; // 518b:2e78
db dummyd_56fd6[32]; // 518b:2e98
db dummyd_56ff6[32]; // 518b:2eb8
db dummyd_57016[32]; // 518b:2ed8
db dummyd_57036[32]; // 518b:2ef8
db dummyd_57056[32]; // 518b:2f18
db dummyd_57076[32]; // 518b:2f38
db dummyd_57096[32]; // 518b:2f58
db dummyd_570b6[32]; // 518b:2f78
db dummyd_570d6[32]; // 518b:2f98
db dummyd_570f6[32]; // 518b:2fb8
db dummyd_57116[32]; // 518b:2fd8
db dummyd_57136[32]; // 518b:2ff8
db dummyd_57156[32]; // 518b:3018
db dummyd_57176[32]; // 518b:3038
db dummyd_57196[32]; // 518b:3058
db dummyd_571b6[32]; // 518b:3078
db dummyd_571d6[32]; // 518b:3098
db dummyd_571f6[32]; // 518b:30b8
db dummyd_57216[32]; // 518b:30d8
db dummyd_57236[32]; // 518b:30f8
db dummyd_57256[32]; // 518b:3118
db dummyd_57276[32]; // 518b:3138
db dummyd_57296[32]; // 518b:3158
db dummyd_572b6[32]; // 518b:3178
db dummyd_572d6[32]; // 518b:3198
db dummyd_572f6[32]; // 518b:31b8
db dummyd_57316[32]; // 518b:31d8
db dummyd_57336[32]; // 518b:31f8
db dummyd_57356[32]; // 518b:3218
db dummyd_57376[32]; // 518b:3238
db dummyd_57396[32]; // 518b:3258
db dummyd_573b6[32]; // 518b:3278
db dummyd_573d6[32]; // 518b:3298
db dummyd_573f6[32]; // 518b:32b8
db dummyd_57416[32]; // 518b:32d8
db dummyd_57436[32]; // 518b:32f8
db dummyd_57456[32]; // 518b:3318
db dummyd_57476[32]; // 518b:3338
db dummyd_57496[32]; // 518b:3358
db dummyd_574b6[32]; // 518b:3378
db dummyd_574d6[32]; // 518b:3398
db dummyd_574f6[32]; // 518b:33b8
db dummyd_57516[32]; // 518b:33d8
db dummyd_57536[32]; // 518b:33f8
db dummyd_57556[32]; // 518b:3418
db dummyd_57576[32]; // 518b:3438
db dummyd_57596[32]; // 518b:3458
db dummyd_575b6[32]; // 518b:3478
db dummyd_575d6[32]; // 518b:3498
db dummyd_575f6[32]; // 518b:34b8
db dummyd_57616[32]; // 518b:34d8
db dummyd_57636[32]; // 518b:34f8
db dummyd_57656[32]; // 518b:3518
db dummyd_57676[32]; // 518b:3538
db dummyd_57696[32]; // 518b:3558
db dummyd_576b6[32]; // 518b:3578
db dummyd_576d6[32]; // 518b:3598
db dummyd_576f6[32]; // 518b:35b8
db dummyd_57716[32]; // 518b:35d8
db dummyd_57736[32]; // 518b:35f8
db dummyd_57756[32]; // 518b:3618
db dummyd_57776[32]; // 518b:3638
db dummyd_57796[32]; // 518b:3658
db dummyd_577b6[32]; // 518b:3678
db dummyd_577d6[32]; // 518b:3698
db dummyd_577f6[32]; // 518b:36b8
db dummyd_57816[32]; // 518b:36d8
db dummyd_57836[32]; // 518b:36f8
db dummyd_57856[32]; // 518b:3718
db dummyd_57876[32]; // 518b:3738
db dummyd_57896[32]; // 518b:3758
db dummyd_578b6[32]; // 518b:3778
db dummyd_578d6[32]; // 518b:3798
db dummyd_578f6[32]; // 518b:37b8
db dummyd_57916[32]; // 518b:37d8
db dummyd_57936;
db dummyd_57937;
db dummyd_57938[32]; // 518b:37fc
db dummyd_57958[32]; // 518b:381c
db dummyd_57978[32]; // 518b:383c
db dummyd_57998[32]; // 518b:385c
db dummyd_579b8[32]; // 518b:387c
db dummyd_579d8[32]; // 518b:389c
db dummyd_579f8[32]; // 518b:38bc
db dummyd_57a18[32]; // 518b:38dc
db dummyd_57a38[32]; // 518b:38fc
db dummyd_57a58[32]; // 518b:391c
db dummyd_57a78[32]; // 518b:393c
db dummyd_57a98[32]; // 518b:395c
db dummyd_57ab8[32]; // 518b:397c
db dummyd_57ad8[32]; // 518b:399c
db dummyd_57af8[32]; // 518b:39bc
db dummyd_57b18[32]; // 518b:39dc
db dummyd_57b38[32]; // 518b:39fc
db dummyd_57b58[32]; // 518b:3a1c
db dummyd_57b78[32]; // 518b:3a3c
db dummyd_57b98[32]; // 518b:3a5c
db dummyd_57bb8[32]; // 518b:3a7c
db dummyd_57bd8[32]; // 518b:3a9c
db dummyd_57bf8[32]; // 518b:3abc
db dummyd_57c18[32]; // 518b:3adc
db dummyd_57c38[32]; // 518b:3afc
db dummyd_57c58[32]; // 518b:3b1c
db dummyd_57c78[32]; // 518b:3b3c
db dummyd_57c98[32]; // 518b:3b5c
db dummyd_57cb8[32]; // 518b:3b7c
db dummyd_57cd8[32]; // 518b:3b9c
db dummyd_57cf8[32]; // 518b:3bbc
db dummyd_57d18[32]; // 518b:3bdc
db dummyd_57d38[32]; // 518b:3bfc
db dummyd_57d58[32]; // 518b:3c1c
db dummyd_57d78[32]; // 518b:3c3c
db dummyd_57d98[32]; // 518b:3c5c
db dummyd_57db8[32]; // 518b:3c7c
db dummyd_57dd8[32]; // 518b:3c9c
db dummyd_57df8[32]; // 518b:3cbc
db dummyd_57e18[32]; // 518b:3cdc
db dummyd_57e38[32]; // 518b:3cfc
db dummyd_57e58[32]; // 518b:3d1c
db dummyd_57e78[32]; // 518b:3d3c
db dummyd_57e98[32]; // 518b:3d5c
db dummyd_57eb8[32]; // 518b:3d7c
db dummyd_57ed8[32]; // 518b:3d9c
db dummyd_57ef8[32]; // 518b:3dbc
db dummyd_57f18[32]; // 518b:3ddc
db dummyd_57f38[32]; // 518b:3dfc
db dummyd_57f58[32]; // 518b:3e1c
db dummyd_57f78[32]; // 518b:3e3c
db dummyd_57f98[32]; // 518b:3e5c
db dummyd_57fb8[32]; // 518b:3e7c
db dummyd_57fd8[32]; // 518b:3e9c
db dummyd_57ff8[32]; // 518b:3ebc
db dummyd_58018[32]; // 518b:3edc
db dummyd_58038[32]; // 518b:3efc
db dummyd_58058[32]; // 518b:3f1c
db dummyd_58078[32]; // 518b:3f3c
db dummyd_58098[32]; // 518b:3f5c
db dummyd_580b8[32]; // 518b:3f7c
db dummyd_580d8[32]; // 518b:3f9c
db dummyd_580f8[32]; // 518b:3fbc
db dummyd_58118[32]; // 518b:3fdc
db dummyd_58138[32]; // 518b:3ffc
db dummyd_58158[32]; // 518b:401c
db dummyd_58178[32]; // 518b:403c
db dummyd_58198[32]; // 518b:405c
db dummyd_581b8[32]; // 518b:407c
db dummyd_581d8[32]; // 518b:409c
db dummyd_581f8[32]; // 518b:40bc
db dummyd_58218[32]; // 518b:40dc
db dummyd_58238[32]; // 518b:40fc
db dummyd_58258[32]; // 518b:411c
db dummyd_58278[32]; // 518b:413c
db dummyd_58298[32]; // 518b:415c
db dummyd_582b8[32]; // 518b:417c
db dummyd_582d8[32]; // 518b:419c
db dummyd_582f8[32]; // 518b:41bc
db dummyd_58318[32]; // 518b:41dc
db dummyd_58338[32]; // 518b:41fc
db dummyd_58358[32]; // 518b:421c
db dummyd_58378[32]; // 518b:423c
db dummyd_58398[32]; // 518b:425c
db dummyd_583b8[32]; // 518b:427c
db dummyd_583d8[32]; // 518b:429c
db dummyd_583f8[32]; // 518b:42bc
db dummyd_58418[32]; // 518b:42dc
db dummyd_58438[32]; // 518b:42fc
db dummyd_58458[32]; // 518b:431c
db dummyd_58478[32]; // 518b:433c
db dummyd_58498[32]; // 518b:435c
db dummyd_584b8[32]; // 518b:437c
db dummyd_584d8[32]; // 518b:439c
db dummyd_584f8[32]; // 518b:43bc
db dummyd_58518[32]; // 518b:43dc
db dummyd_58538[32]; // 518b:43fc
db dummyd_58558[32]; // 518b:441c
db dummyd_58578[32]; // 518b:443c
db dummyd_58598[32]; // 518b:445c
db dummyd_585b8[32]; // 518b:447c
db dummyd_585d8[32]; // 518b:449c
db dummyd_585f8[32]; // 518b:44bc
db dummyd_58618[32]; // 518b:44dc
db dummyd_58638[32]; // 518b:44fc
db dummyd_58658[32]; // 518b:451c
db dummyd_58678[32]; // 518b:453c
db dummyd_58698[32]; // 518b:455c
db dummyd_586b8[32]; // 518b:457c
db dummyd_586d8[32]; // 518b:459c
db dummyd_586f8[32]; // 518b:45bc
db dummyd_58718[32]; // 518b:45dc
db dummyd_58738[32]; // 518b:45fc
db dummyd_58758[32]; // 518b:461c
db dummyd_58778[32]; // 518b:463c
db dummyd_58798[32]; // 518b:465c
db dummyd_587b8[32]; // 518b:467c
db dummyd_587d8[32]; // 518b:469c
db dummyd_587f8[32]; // 518b:46bc
db dummyd_58818[32]; // 518b:46dc
db dummyd_58838[32]; // 518b:46fc
db dummyd_58858[32]; // 518b:471c
db dummyd_58878[32]; // 518b:473c
db dummyd_58898[32]; // 518b:475c
db dummyd_588b8[32]; // 518b:477c
db dummyd_588d8[32]; // 518b:479c
db dummyd_588f8[32]; // 518b:47bc
db dummyd_58918[32]; // 518b:47dc
db dummyd_58938[32]; // 518b:47fc
db dummyd_58958[32]; // 518b:481c
db dummyd_58978[32]; // 518b:483c
db dummyd_58998[32]; // 518b:485c
db dummyd_589b8[32]; // 518b:487c
db dummyd_589d8[32]; // 518b:489c
db dummyd_589f8[32]; // 518b:48bc
db dummyd_58a18[32]; // 518b:48dc
db dummyd_58a38[32]; // 518b:48fc
db dummyd_58a58[32]; // 518b:491c
db dummyd_58a78[32]; // 518b:493c
db dummyd_58a98[32]; // 518b:495c
db dummyd_58ab8[32]; // 518b:497c
db dummyd_58ad8[32]; // 518b:499c
db dummyd_58af8[32]; // 518b:49bc
db dummyd_58b18[32]; // 518b:49dc
db dummyd_58b38[32]; // 518b:49fc
db dummyd_58b58[32]; // 518b:4a1c
db dummyd_58b78[32]; // 518b:4a3c
db dummyd_58b98[32]; // 518b:4a5c
db dummyd_58bb8[32]; // 518b:4a7c
db dummyd_58bd8[32]; // 518b:4a9c
db dummyd_58bf8[32]; // 518b:4abc
db dummyd_58c18[32]; // 518b:4adc
db dummyd_58c38[32]; // 518b:4afc
db dummyd_58c58[32]; // 518b:4b1c
db dummyd_58c78[32]; // 518b:4b3c
db dummyd_58c98[32]; // 518b:4b5c
db dummyd_58cb8[32]; // 518b:4b7c
db dummyd_58cd8[32]; // 518b:4b9c
db dummyd_58cf8[32]; // 518b:4bbc
db dummyd_58d18[32]; // 518b:4bdc
db dummyd_58d38[32]; // 518b:4bfc
db dummyd_58d58[32]; // 518b:4c1c
db dummyd_58d78[32]; // 518b:4c3c
db dummyd_58d98[32]; // 518b:4c5c
db dummyd_58db8[32]; // 518b:4c7c
db dummyd_58dd8[32]; // 518b:4c9c
db dummyd_58df8[32]; // 518b:4cbc
db dummyd_58e18[32]; // 518b:4cdc
db dummyd_58e38[32]; // 518b:4cfc
db dummyd_58e58[32]; // 518b:4d1c
db dummyd_58e78[32]; // 518b:4d3c
db dummyd_58e98[32]; // 518b:4d5c
db dummyd_58eb8[32]; // 518b:4d7c
db dummyd_58ed8[32]; // 518b:4d9c
db dummyd_58ef8[32]; // 518b:4dbc
db dummyd_58f18[32]; // 518b:4ddc
db dummyd_58f38[32]; // 518b:4dfc
db dummyd_58f58[32]; // 518b:4e1c
db dummyd_58f78[32]; // 518b:4e3c
db dummyd_58f98[32]; // 518b:4e5c
db dummyd_58fb8[32]; // 518b:4e7c
db dummyd_58fd8[32]; // 518b:4e9c
db dummyd_58ff8[32]; // 518b:4ebc
db dummyd_59018[32]; // 518b:4edc
db dummyd_59038[32]; // 518b:4efc
db dummyd_59058[32]; // 518b:4f1c
db dummyd_59078[32]; // 518b:4f3c
db dummyd_59098[32]; // 518b:4f5c
db dummyd_590b8[32]; // 518b:4f7c
db dummyd_590d8[32]; // 518b:4f9c
db dummyd_590f8[32]; // 518b:4fbc
db dummyd_59118[32]; // 518b:4fdc
db dummyd_59138[32]; // 518b:4ffc
db dummyd_59158[32]; // 518b:501c
db dummyd_59178[32]; // 518b:503c
db dummyd_59198[32]; // 518b:505c
db dummyd_591b8[32]; // 518b:507c
db dummyd_591d8[32]; // 518b:509c
db dummyd_591f8[32]; // 518b:50bc
db dummyd_59218[32]; // 518b:50dc
db dummyd_59238[32]; // 518b:50fc
db dummyd_59258[32]; // 518b:511c
db dummyd_59278[32]; // 518b:513c
db dummyd_59298[32]; // 518b:515c
db dummyd_592b8[32]; // 518b:517c
db dummyd_592d8[32]; // 518b:519c
db dummyd_592f8[32]; // 518b:51bc
db dummyd_59318[32]; // 518b:51dc
db dummyd_59338[32]; // 518b:51fc
db dummyd_59358[32]; // 518b:521c
db dummyd_59378[32]; // 518b:523c
db dummyd_59398[32]; // 518b:525c
db dummyd_593b8[32]; // 518b:527c
db dummyd_593d8[32]; // 518b:529c
db dummyd_593f8[32]; // 518b:52bc
db dummyd_59418[32]; // 518b:52dc
db dummyd_59438[32]; // 518b:52fc
db dummyd_59458[32]; // 518b:531c
db dummyd_59478[32]; // 518b:533c
db dummyd_59498[32]; // 518b:535c
db dummyd_594b8[32]; // 518b:537c
db dummyd_594d8[32]; // 518b:539c
db dummyd_594f8[32]; // 518b:53bc
db dummyd_59518[32]; // 518b:53dc
db dummyd_59538[32]; // 518b:53fc
db dummyd_59558[32]; // 518b:541c
db dummyd_59578[32]; // 518b:543c
db dummyd_59598[32]; // 518b:545c
db dummyd_595b8[32]; // 518b:547c
db dummyd_595d8[32]; // 518b:549c
db dummyd_595f8; // 518b:54bc
db dummyd_595f9; // 518b:54bd
db dummyd_595fa; // 518b:54be
db dummyd_595fb; // 518b:54bf
db dummyd_595fc;
db dummyd_595fd;
db dummyd_595fe;
db dummyd_595ff;
db dummyd_59600;
db dummyd_59601;
db dummyd_59602[32]; // 518b:54c8
db dummyd_59622[32]; // 518b:54e8
db dummyd_59642[32]; // 518b:5508
db dummyd_59662[32]; // 518b:5528
db dummyd_59682[32]; // 518b:5548
db dummyd_596a2[32]; // 518b:5568
db dummyd_596c2[32]; // 518b:5588
db dummyd_596e2[32]; // 518b:55a8
db dummyd_59702[32]; // 518b:55c8
db dummyd_59722[32]; // 518b:55e8
db dummyd_59742[32]; // 518b:5608
db dummyd_59762[32]; // 518b:5628
db dummyd_59782[32]; // 518b:5648
db dummyd_597a2[32]; // 518b:5668
db dummyd_597c2[32]; // 518b:5688
db dummyd_597e2[32]; // 518b:56a8
db dummyd_59802[32]; // 518b:56c8
db dummyd_59822[32]; // 518b:56e8
db dummyd_59842[32]; // 518b:5708
db dummyd_59862[32]; // 518b:5728
db dummyd_59882[32]; // 518b:5748
db dummyd_598a2[32]; // 518b:5768
db dummyd_598c2[32]; // 518b:5788
db dummyd_598e2[32]; // 518b:57a8
db dummyd_59902[32]; // 518b:57c8
db dummyd_59922[32]; // 518b:57e8
db dummyd_59942[32]; // 518b:5808
db dummyd_59962[32]; // 518b:5828
db dummyd_59982[32]; // 518b:5848
db dummyd_599a2[32]; // 518b:5868
db dummyd_599c2[32]; // 518b:5888
db dummyd_599e2[32]; // 518b:58a8
db dummyd_59a02[32]; // 518b:58c8
db dummyd_59a22[32]; // 518b:58e8
db dummyd_59a42[32]; // 518b:5908
db dummyd_59a62[32]; // 518b:5928
db dummyd_59a82[32]; // 518b:5948
db dummyd_59aa2[32]; // 518b:5968
db dummyd_59ac2[32]; // 518b:5988
db dummyd_59ae2[32]; // 518b:59a8
db dummyd_59b02[32]; // 518b:59c8
db dummyd_59b22[32]; // 518b:59e8
db dummyd_59b42[32]; // 518b:5a08
db dummyd_59b62[32]; // 518b:5a28
db dummyd_59b82[32]; // 518b:5a48
db dummyd_59ba2[32]; // 518b:5a68
db dummyd_59bc2[32]; // 518b:5a88
db dummyd_59be2[32]; // 518b:5aa8
db dummyd_59c02[32]; // 518b:5ac8
db dummyd_59c22[32]; // 518b:5ae8
db dummyd_59c42[32]; // 518b:5b08
db dummyd_59c62[32]; // 518b:5b28
db dummyd_59c82[32]; // 518b:5b48
db dummyd_59ca2[32]; // 518b:5b68
db dummyd_59cc2[32]; // 518b:5b88
db dummyd_59ce2[32]; // 518b:5ba8
db dummyd_59d02[32]; // 518b:5bc8
db dummyd_59d22[32]; // 518b:5be8
db dummyd_59d42[32]; // 518b:5c08
db dummyd_59d62[32]; // 518b:5c28
db dummyd_59d82; // 518b:5c48
db dummyd_59d83; // 518b:5c49
db dummyd_59d84; // 518b:5c4a
db dummyd_59d85; // 518b:5c4b
db dummyd_59d86; // 518b:5c4c
db dummyd_59d87; // 518b:5c4d
db dummyd_59d88; // 518b:5c4e
db dummyd_59d89; // 518b:5c4f
db dummyd_59d8a; // 518b:5c50
db dummyd_59d8b; // 518b:5c51
db dummyd_59d8c;
db dummyd_59d8d;
db dummyd_59d8e;
db dummyd_59d8f;
db dummyd_59d90;
db dummyd_59d91; // 518b:5c57
db dummyd_59d92;
db dummyd_59d93; // 518b:5c59
db dummyd_59d94; // 518b:5c5a
db dummyd_59d95; // 518b:5c5b
db dummyd_59d96; // 518b:5c5c
db dummyd_59d97; // 518b:5c5d
db dummyd_59d98; // 518b:5c5e
db dummyd_59d99; // 518b:5c5f
db dummyd_59d9a; // 5356:0000
db dummyd_59d9b; // 5356:0001
db dummyd_59d9c; // 5356:0002
db byte_68be3; // 5356:0003
db dummyd_59d9e; // 5356:0004
db dummyd_59d9f; // 5356:0005
db dummyd_59da0;
db dummyd_59da1; // 5356:0007
db dummyd_59da2;
db dummyd_59da3;
db dummyd_59da4;
db dummyd_59da5;
db dummyd_59da6;
db dummyd_59da7;
db dummyd_59da8[32]; // 5356:0010
db dummyd_59dc8[32]; // 5356:0030
db dummyd_59de8[32]; // 5356:0050
db dummyd_59e08[32]; // 5356:0070
db dummyd_59e28[32]; // 5356:0090
db dummyd_59e48[32]; // 5356:00b0
db dummyd_59e68[32]; // 5356:00d0
db dummyd_59e88[32]; // 5356:00f0
db dummyd_59ea8[32]; // 5356:0110
db dummyd_59ec8[32]; // 5356:0130
db dummyd_59ee8[32]; // 5356:0150
db dummyd_59f08[32]; // 5356:0170
db dummyd_59f28[32]; // 5356:0190
db dummyd_59f48[32]; // 5356:01b0
db dummyd_59f68[32]; // 5356:01d0
db dummyd_59f88[32]; // 5356:01f0
db dummyd_59fa8[32]; // 5356:0210
db dummyd_59fc8[32]; // 5356:0230
db dummyd_59fe8[32]; // 5356:0250
db dummyd_5a008[32]; // 5356:0270
db dummyd_5a028[32]; // 5356:0290
db dummyd_5a048[32]; // 5356:02b0
db dummyd_5a068[32]; // 5356:02d0
db dummyd_5a088[32]; // 5356:02f0
db dummyd_5a0a8[32]; // 5356:0310
db dummyd_5a0c8[32]; // 5356:0330
db dummyd_5a0e8[32]; // 5356:0350
db dummyd_5a108[32]; // 5356:0370
db dummyd_5a128[32]; // 5356:0390
db dummyd_5a148[32]; // 5356:03b0
db dummyd_5a168[32]; // 5356:03d0
db dummyd_5a188[32]; // 5356:03f0
db dummyd_5a1a8[32]; // 5356:0410
db dummyd_5a1c8[32]; // 5356:0430
db dummyd_5a1e8[32]; // 5356:0450
db dummyd_5a208; // 5356:0470
db dummyd_5a209; // 5356:0471
db dummyd_5a20a; // 5356:0472
db dummyd_5a20b; // 5356:0473
db dummyd_5a20c; // 5356:0474
db dummyd_5a20d; // 5356:0475
db dummyd_5a20e; // 5356:0476
db dummyd_5a20f; // 5356:0477
db dummyd_5a210; // 5356:0478
db dummyd_5a211; // 5356:0479
db dummyd_5a212; // 5356:047a
db dummyd_5a213;
db dummyd_5a214;
db dummyd_5a215;
db dummyd_5a216[32]; // 5356:0480
db dummyd_5a236[32]; // 5356:04a0
db dummyd_5a256[32]; // 5356:04c0
db dummyd_5a276[32]; // 5356:04e0
db dummyd_5a296[32]; // 5356:0500
db dummyd_5a2b6[32]; // 5356:0520
db dummyd_5a2d6[32]; // 5356:0540
db dummyd_5a2f6[32]; // 5356:0560
db dummyd_5a316[32]; // 5356:0580
db dummyd_5a336[32]; // 5356:05a0
db dummyd_5a356[32]; // 5356:05c0
db dummyd_5a376[32]; // 5356:05e0
db dummyd_5a396; // 5356:0600
db dummyd_5a397;
db dummyd_5a398;
db dummyd_5a399; // 5356:0603
db dummyd_5a39a; // 5356:0604
db dummyd_5a39b;
db dummyd_5a39c;
db dummyd_5a39d; // 5356:0607
db dummyd_5a39e; // 5356:0608
db dummyd_5a39f;
db dummyd_5a3a0[32]; // 5356:060c
db dummyd_5a3c0[32]; // 5356:062c
db dummyd_5a3e0[32]; // 5356:064c
db dummyd_5a400[32]; // 5356:066c
db dummyd_5a420[32]; // 5356:068c
db dummyd_5a440[32]; // 5356:06ac
db dummyd_5a460[32]; // 5356:06cc
db dummyd_5a480[32]; // 5356:06ec
db dummyd_5a4a0[32]; // 5356:070c
db dummyd_5a4c0[32]; // 5356:072c
db dummyd_5a4e0[32]; // 5356:074c
db dummyd_5a500[32]; // 5356:076c
db dummyd_5a520[32]; // 5356:078c
db dummyd_5a540[32]; // 5356:07ac
db dummyd_5a560[32]; // 5356:07cc
db dummyd_5a580[32]; // 5356:07ec
db dummyd_5a5a0[32]; // 5356:080c
db dummyd_5a5c0[32]; // 5356:082c
db dummyd_5a5e0[32]; // 5356:084c
db dummyd_5a600[32]; // 5356:086c
db dummyd_5a620[32]; // 5356:088c
db dummyd_5a640[32]; // 5356:08ac
db dummyd_5a660[32]; // 5356:08cc
db dummyd_5a680[32]; // 5356:08ec
db dummyd_5a6a0[32]; // 5356:090c
db dummyd_5a6c0[32]; // 5356:092c
db dummyd_5a6e0[32]; // 5356:094c
db dummyd_5a700[32]; // 5356:096c
db dummyd_5a720[32]; // 5356:098c
db dummyd_5a740[32]; // 5356:09ac
db dummyd_5a760[32]; // 5356:09cc
db dummyd_5a780[32]; // 5356:09ec
db dummyd_5a7a0[32]; // 5356:0a0c
db dummyd_5a7c0[32]; // 5356:0a2c
db dummyd_5a7e0[32]; // 5356:0a4c
db dummyd_5a800[32]; // 5356:0a6c
db dummyd_5a820[32]; // 5356:0a8c
db dummyd_5a840[32]; // 5356:0aac
db dummyd_5a860[32]; // 5356:0acc
db dummyd_5a880[32]; // 5356:0aec
db dummyd_5a8a0[32]; // 5356:0b0c
db dummyd_5a8c0[32]; // 5356:0b2c
db dummyd_5a8e0[32]; // 5356:0b4c
db dummyd_5a900[32]; // 5356:0b6c
db dummyd_5a920[32]; // 5356:0b8c
db dummyd_5a940[32]; // 5356:0bac
db dummyd_5a960[32]; // 5356:0bcc
db dummyd_5a980[32]; // 5356:0bec
db dummyd_5a9a0[32]; // 5356:0c0c
db dummyd_5a9c0[32]; // 5356:0c2c
db dummyd_5a9e0[32]; // 5356:0c4c
db dummyd_5aa00[32]; // 5356:0c6c
db dummyd_5aa20[32]; // 5356:0c8c
db dummyd_5aa40[32]; // 5356:0cac
db dummyd_5aa60[32]; // 5356:0ccc
db dummyd_5aa80;
db dummyd_5aa81;
db dummyd_5aa82;
db dummyd_5aa83;
db dummyd_5aa84; // 5356:0cf0
db dummyd_5aa85; // 5356:0cf1
db dummyd_5aa86; // 5356:0cf2
db dummyd_5aa87;
db dummyd_5aa88;
db dummyd_5aa89;
db dummyd_5aa8a;
db dummyd_5aa8b;
db dummyd_5aa8c;
db dummyd_5aa8d;
db dummyd_5aa8e; // 5356:0cfa
db dummyd_5aa8f;
db dummyd_5aa90;
db dummyd_5aa91;
db dummyd_5aa92;
db dummyd_5aa93;
db dummyd_5aa94; // 5356:0d00
db dummyd_5aa95; // 5356:0d01
db unk_698e2; // 5356:0d02
db dummyd_5aa97[32]; // 5356:0d03
db dummyd_5aab7[32]; // 5356:0d23
db dummyd_5aad7[32]; // 5356:0d43
db dummyd_5aaf7[32]; // 5356:0d63
db dummyd_5ab17[32]; // 5356:0d83
db dummyd_5ab37[32]; // 5356:0da3
db dummyd_5ab57[32]; // 5356:0dc3
db dummyd_5ab77[32]; // 5356:0de3
db dummyd_5ab97[32]; // 5356:0e03
db dummyd_5abb7[32]; // 5356:0e23
db dummyd_5abd7[32]; // 5356:0e43
db dummyd_5abf7[32]; // 5356:0e63
db dummyd_5ac17[32]; // 5356:0e83
db dummyd_5ac37[32]; // 5356:0ea3
db dummyd_5ac57[32]; // 5356:0ec3
db dummyd_5ac77[32]; // 5356:0ee3
db dummyd_5ac97[32]; // 5356:0f03
db dummyd_5acb7[32]; // 5356:0f23
db dummyd_5acd7[32]; // 5356:0f43
db dummyd_5acf7[32]; // 5356:0f63
db dummyd_5ad17[32]; // 5356:0f83
db dummyd_5ad37[32]; // 5356:0fa3
db dummyd_5ad57[32]; // 5356:0fc3
db dummyd_5ad77[32]; // 5356:0fe3
db dummyd_5ad97[32]; // 5356:1003
db dummyd_5adb7[32]; // 5356:1023
db dummyd_5add7[32]; // 5356:1043
db dummyd_5adf7[32]; // 5356:1063
db dummyd_5ae17[32]; // 5356:1083
db dummyd_5ae37[32]; // 5356:10a3
db dummyd_5ae57[32]; // 5356:10c3
db dummyd_5ae77[32]; // 5356:10e3
db dummyd_5ae97[32]; // 5356:1103
db dummyd_5aeb7[32]; // 5356:1123
db dummyd_5aed7[32]; // 5356:1143
db dummyd_5aef7[32]; // 5356:1163
db dummyd_5af17[32]; // 5356:1183
db dummyd_5af37[32]; // 5356:11a3
db dummyd_5af57[32]; // 5356:11c3
db dummyd_5af77[32]; // 5356:11e3
db dummyd_5af97[32]; // 5356:1203
db dummyd_5afb7[32]; // 5356:1223
db dummyd_5afd7[32]; // 5356:1243
db dummyd_5aff7[32]; // 5356:1263
db dummyd_5b017[32]; // 5356:1283
db dummyd_5b037[32]; // 5356:12a3
db dummyd_5b057[32]; // 5356:12c3
db dummyd_5b077[32]; // 5356:12e3
db dummyd_5b097[32]; // 5356:1303
db dummyd_5b0b7[32]; // 5356:1323
db dummyd_5b0d7[32]; // 5356:1343
db dummyd_5b0f7[32]; // 5356:1363
db dummyd_5b117[32]; // 5356:1383
db dummyd_5b137[32]; // 5356:13a3
db dummyd_5b157[32]; // 5356:13c3
db dummyd_5b177[32]; // 5356:13e3
db dummyd_5b197[32]; // 5356:1403
db dummyd_5b1b7[32]; // 5356:1423
db dummyd_5b1d7[32]; // 5356:1443
db dummyd_5b1f7[32]; // 5356:1463
db dummyd_5b217[32]; // 5356:1483
db dummyd_5b237[32]; // 5356:14a3
db dummyd_5b257[32]; // 5356:14c3
db dummyd_5b277[32]; // 5356:14e3
db dummyd_5b297[32]; // 5356:1503
db dummyd_5b2b7[32]; // 5356:1523
db dummyd_5b2d7[32]; // 5356:1543
db dummyd_5b2f7[32]; // 5356:1563
db dummyd_5b317[32]; // 5356:1583
db dummyd_5b337[32]; // 5356:15a3
db dummyd_5b357[32]; // 5356:15c3
db dummyd_5b377[32]; // 5356:15e3
db dummyd_5b397[32]; // 5356:1603
db dummyd_5b3b7[32]; // 5356:1623
db dummyd_5b3d7[32]; // 5356:1643
db dummyd_5b3f7[32]; // 5356:1663
db dummyd_5b417[32]; // 5356:1683
db dummyd_5b437[32]; // 5356:16a3
db dummyd_5b457[32]; // 5356:16c3
db dummyd_5b477[32]; // 5356:16e3
db dummyd_5b497[32]; // 5356:1703
db dummyd_5b4b7[32]; // 5356:1723
db dummyd_5b4d7[32]; // 5356:1743
db dummyd_5b4f7[32]; // 5356:1763
db dummyd_5b517[32]; // 5356:1783
db dummyd_5b537[32]; // 5356:17a3
db dummyd_5b557[32]; // 5356:17c3
db dummyd_5b577[32]; // 5356:17e3
db dummyd_5b597[32]; // 5356:1803
db dummyd_5b5b7[32]; // 5356:1823
db dummyd_5b5d7[32]; // 5356:1843
db dummyd_5b5f7[32]; // 5356:1863
db dummyd_5b617[32]; // 5356:1883
db dummyd_5b637[32]; // 5356:18a3
db dummyd_5b657[32]; // 5356:18c3
db dummyd_5b677[32]; // 5356:18e3
db dummyd_5b697[32]; // 5356:1903
db dummyd_5b6b7[32]; // 5356:1923
db dummyd_5b6d7[32]; // 5356:1943
db dummyd_5b6f7[32]; // 5356:1963
db dummyd_5b717[32]; // 5356:1983
db dummyd_5b737[32]; // 5356:19a3
db dummyd_5b757[32]; // 5356:19c3
db dummyd_5b777[32]; // 5356:19e3
db dummyd_5b797[32]; // 5356:1a03
db dummyd_5b7b7[32]; // 5356:1a23
db dummyd_5b7d7[32]; // 5356:1a43
db dummyd_5b7f7[32]; // 5356:1a63
db dummyd_5b817[32]; // 5356:1a83
db dummyd_5b837[32]; // 5356:1aa3
db dummyd_5b857[32]; // 5356:1ac3
db dummyd_5b877[32]; // 5356:1ae3
db dummyd_5b897[32]; // 5356:1b03
db dummyd_5b8b7[32]; // 5356:1b23
db dummyd_5b8d7[32]; // 5356:1b43
db dummyd_5b8f7[32]; // 5356:1b63
db dummyd_5b917[32]; // 5356:1b83
db dummyd_5b937[32]; // 5356:1ba3
db dummyd_5b957[32]; // 5356:1bc3
db dummyd_5b977[32]; // 5356:1be3
db dummyd_5b997[32]; // 5356:1c03
db dummyd_5b9b7[32]; // 5356:1c23
db dummyd_5b9d7[32]; // 5356:1c43
db dummyd_5b9f7[32]; // 5356:1c63
db dummyd_5ba17[32]; // 5356:1c83
db dummyd_5ba37[32]; // 5356:1ca3
db dummyd_5ba57[32]; // 5356:1cc3
db dummyd_5ba77[32]; // 5356:1ce3
db dummyd_5ba97[32]; // 5356:1d03
db dummyd_5bab7[32]; // 5356:1d23
db dummyd_5bad7[32]; // 5356:1d43
db dummyd_5baf7[32]; // 5356:1d63
db dummyd_5bb17[32]; // 5356:1d83
db dummyd_5bb37[32]; // 5356:1da3
db dummyd_5bb57[32]; // 5356:1dc3
db dummyd_5bb77[32]; // 5356:1de3
db dummyd_5bb97[32]; // 5356:1e03
db dummyd_5bbb7[32]; // 5356:1e23
db dummyd_5bbd7[32]; // 5356:1e43
db dummyd_5bbf7[32]; // 5356:1e63
db dummyd_5bc17[32]; // 5356:1e83
db dummyd_5bc37[32]; // 5356:1ea3
db dummyd_5bc57[32]; // 5356:1ec3
db dummyd_5bc77[32]; // 5356:1ee3
db dummyd_5bc97[32]; // 5356:1f03
db dummyd_5bcb7[32]; // 5356:1f23
db dummyd_5bcd7[32]; // 5356:1f43
db dummyd_5bcf7[32]; // 5356:1f63
db dummyd_5bd17[32]; // 5356:1f83
db dummyd_5bd37[32]; // 5356:1fa3
db dummyd_5bd57[32]; // 5356:1fc3
db dummyd_5bd77[32]; // 5356:1fe3
db dummyd_5bd97[32]; // 5356:2003
db dummyd_5bdb7[32]; // 5356:2023
db dummyd_5bdd7[32]; // 5356:2043
db dummyd_5bdf7[32]; // 5356:2063
db dummyd_5be17[32]; // 5356:2083
db dummyd_5be37[32]; // 5356:20a3
db dummyd_5be57[32]; // 5356:20c3
db dummyd_5be77[32]; // 5356:20e3
db dummyd_5be97[32]; // 5356:2103
db dummyd_5beb7[32]; // 5356:2123
db dummyd_5bed7[32]; // 5356:2143
db dummyd_5bef7[32]; // 5356:2163
db dummyd_5bf17[32]; // 5356:2183
db dummyd_5bf37[32]; // 5356:21a3
db dummyd_5bf57[32]; // 5356:21c3
db dummyd_5bf77[32]; // 5356:21e3
db dummyd_5bf97[32]; // 5356:2203
db dummyd_5bfb7[32]; // 5356:2223
db dummyd_5bfd7[32]; // 5356:2243
db dummyd_5bff7[32]; // 5356:2263
db dummyd_5c017[32]; // 5356:2283
db dummyd_5c037[32]; // 5356:22a3
db dummyd_5c057[32]; // 5356:22c3
db dummyd_5c077[32]; // 5356:22e3
db dummyd_5c097[32]; // 5356:2303
db dummyd_5c0b7[32]; // 5356:2323
db dummyd_5c0d7[32]; // 5356:2343
db dummyd_5c0f7[32]; // 5356:2363
db dummyd_5c117[32]; // 5356:2383
db dummyd_5c137[32]; // 5356:23a3
db dummyd_5c157[32]; // 5356:23c3
db dummyd_5c177[32]; // 5356:23e3
db dummyd_5c197;
db dummyd_5c198;
db dummyd_5c199;
db dummyd_5c19a;
db dummyd_5c19b;
db dummyd_5c19c;
db dummyd_5c19d;
db dummyd_5c19e;
db dummyd_5c19f;
db dummyd_5c1a0;
db dummyd_5c1a1;
db dummyd_5c1a2;
db dummyd_5c1a3;
db dummyd_5c1a4;
db dummyd_5c1a5;
db dummyd_5c1a6;
db dummyd_5c1a7;
db dummyd_5c1a8;
db dummyd_5c1a9;
db dummyd_5c1aa;
db dummyd_5c1ab;
db dummyd_5c1ac;
db dummyd_5c1ad;
db dummyd_5c1ae;
db dummyd_5c1af;
db dummyd_5c1b0;
db dummyd_5c1b1;
db dummyd_5c1b2;
db dummyd_5c1b3;
db dummyd_5c1b4[32]; // 5376:0000
db dummyd_5c1d4[32]; // 5376:0020
db dummyd_5c1f4[32]; // 5376:0040
db dummyd_5c214[32]; // 5376:0060
db dummyd_5c234[32]; // 5376:0080
db dummyd_5c254[32]; // 5376:00a0
db dummyd_5c274[32]; // 5376:00c0
db dummyd_5c294[32]; // 5376:00e0
db dummyd_5c2b4[32]; // 5376:0100
db dummyd_5c2d4[32]; // 5376:0120
db dummyd_5c2f4[32]; // 5376:0140
db dummyd_5c314[32]; // 5376:0160
db dummyd_5c334[32]; // 5376:0180
db dummyd_5c354[32]; // 5376:01a0
db dummyd_5c374[32]; // 5376:01c0
db dummyd_5c394[32]; // 5376:01e0
db dummyd_5c3b4[32]; // 5376:0200
db dummyd_5c3d4[32]; // 5376:0220
db dummyd_5c3f4[32]; // 5376:0240
db dummyd_5c414[32]; // 5376:0260
db dummyd_5c434[32]; // 5376:0280
db dummyd_5c454[32]; // 5376:02a0
db dummyd_5c474[32]; // 5376:02c0
db dummyd_5c494[32]; // 5376:02e0
db dummyd_5c4b4[32]; // 5376:0300
db dummyd_5c4d4[32]; // 5376:0320
db dummyd_5c4f4[32]; // 5376:0340
db dummyd_5c514[32]; // 5376:0360
db dummyd_5c534[32]; // 5376:0380
db dummyd_5c554[32]; // 5376:03a0
db dummyd_5c574[32]; // 5376:03c0
db dummyd_5c594[32]; // 5376:03e0
db dummyd_5c5b4[32]; // 5376:0400
db dummyd_5c5d4[32]; // 5376:0420
db dummyd_5c5f4[32]; // 5376:0440
db dummyd_5c614[32]; // 5376:0460
db dummyd_5c634[32]; // 5376:0480
db dummyd_5c654[32]; // 5376:04a0
db dummyd_5c674[32]; // 5376:04c0
db dummyd_5c694[32]; // 5376:04e0
db dummyd_5c6b4[32]; // 5376:0500
db dummyd_5c6d4[32]; // 5376:0520
db dummyd_5c6f4[32]; // 5376:0540
db dummyd_5c714[32]; // 5376:0560
db dummyd_5c734[32]; // 5376:0580
db dummyd_5c754[32]; // 5376:05a0
db dummyd_5c774[32]; // 5376:05c0
db dummyd_5c794[32]; // 5376:05e0
db dummyd_5c7b4[32]; // 5376:0600
db dummyd_5c7d4[32]; // 5376:0620
db dummyd_5c7f4[32]; // 5376:0640
db dummyd_5c814[32]; // 5376:0660
db dummyd_5c834[32]; // 5376:0680
db dummyd_5c854[32]; // 5376:06a0
db dummyd_5c874[32]; // 5376:06c0
db dummyd_5c894[32]; // 5376:06e0
db dummyd_5c8b4[32]; // 5376:0700
db dummyd_5c8d4[32]; // 5376:0720
db dummyd_5c8f4[32]; // 5376:0740
db dummyd_5c914[32]; // 5376:0760
db dummyd_5c934[32]; // 5376:0780
db dummyd_5c954[32]; // 5376:07a0
db dummyd_5c974[32]; // 5376:07c0
db dummyd_5c994[32]; // 5376:07e0
db dummyd_5c9b4[32]; // 5376:0800
db dummyd_5c9d4[32]; // 5376:0820
db dummyd_5c9f4;
db dummyd_5c9f5;
db dummyd_5c9f6;
db dummyd_5c9f7;
db dummyd_5c9f8;
db dummyd_5c9f9;
db dummyd_5c9fa;
db dummyd_5c9fb;
db dummyd_5c9fc;
db dummyd_5c9fd;
db dummyd_5c9fe;
db dummyd_5c9ff;
db dummyd_5ca00;
db dummyd_5ca01;
db dummyd_5ca02;
db dummyd_5ca03;
dd dword_6b850; // 549a:0000
dw word_6b854; // 549a:0004
db unk_6b856; // 549a:0006
db dummyd_5ca0b; // 549a:0007
dw word_6b858; // 549a:0008
dw word_6b85a; // 549a:000a
db byte_6b85c; // 549a:000c
db dummyd_5ca11;
db byte_6b85e; // 549a:000e
db dummyd_5ca13;
dd dword_6b860; // 549a:0010
db byte_6b864; // 549a:0014
db dummyd_5ca19;
db byte_6b866; // 549a:0016
db dummyd_5ca1b[32]; // 549a:0017
db dummyd_5ca3b[32]; // 549a:0037
db dummyd_5ca5b[32]; // 549a:0057
db dummyd_5ca7b[32]; // 549a:0077
db dummyd_5ca9b[32]; // 549a:0097
db dummyd_5cabb[32]; // 549a:00b7
db dummyd_5cadb[32]; // 549a:00d7
db dummyd_5cafb[32]; // 549a:00f7
db dummyd_5cb1b[32]; // 549a:0117
db dummyd_5cb3b[32]; // 549a:0137
db dummyd_5cb5b[32]; // 549a:0157
db dummyd_5cb7b[32]; // 549a:0177
db dummyd_5cb9b[32]; // 549a:0197
db dummyd_5cbbb[32]; // 549a:01b7
db dummyd_5cbdb[32]; // 549a:01d7
db dummyd_5cbfb[32]; // 549a:01f7
db dummyd_5cc1b[32]; // 549a:0217
db dummyd_5cc3b[32]; // 549a:0237
db dummyd_5cc5b[32]; // 549a:0257
db dummyd_5cc7b[32]; // 549a:0277
db dummyd_5cc9b[32]; // 549a:0297
db dummyd_5ccbb[32]; // 549a:02b7
db dummyd_5ccdb[32]; // 549a:02d7
db dummyd_5ccfb[32]; // 549a:02f7
db dummyd_5cd1b[32]; // 549a:0317
db dummyd_5cd3b[32]; // 549a:0337
db dummyd_5cd5b[32]; // 549a:0357
db dummyd_5cd7b[32]; // 549a:0377
db dummyd_5cd9b[32]; // 549a:0397
db dummyd_5cdbb[32]; // 549a:03b7
db dummyd_5cddb[32]; // 549a:03d7
db dummyd_5cdfb[32]; // 549a:03f7
db dummyd_5ce1b[32]; // 549a:0417
db dummyd_5ce3b[32]; // 549a:0437
db dummyd_5ce5b[32]; // 549a:0457
db dummyd_5ce7b[32]; // 549a:0477
db dummyd_5ce9b[32]; // 549a:0497
db dummyd_5cebb[32]; // 549a:04b7
db dummyd_5cedb[32]; // 549a:04d7
db dummyd_5cefb[32]; // 549a:04f7
db dummyd_5cf1b[32]; // 549a:0517
db dummyd_5cf3b[32]; // 549a:0537
db dummyd_5cf5b[32]; // 549a:0557
db dummyd_5cf7b[32]; // 549a:0577
db dummyd_5cf9b[32]; // 549a:0597
db dummyd_5cfbb[32]; // 549a:05b7
db dummyd_5cfdb[32]; // 549a:05d7
db dummyd_5cffb[32]; // 549a:05f7
db dummyd_5d01b[32]; // 549a:0617
db dummyd_5d03b[32]; // 549a:0637
db dummyd_5d05b[32]; // 549a:0657
db dummyd_5d07b[32]; // 549a:0677
db dummyd_5d09b[32]; // 549a:0697
db dummyd_5d0bb[32]; // 549a:06b7
db dummyd_5d0db[32]; // 549a:06d7
db dummyd_5d0fb[32]; // 549a:06f7
db dummyd_5d11b[32]; // 549a:0717
db dummyd_5d13b[32]; // 549a:0737
db dummyd_5d15b[32]; // 549a:0757
db dummyd_5d17b[32]; // 549a:0777
db dummyd_5d19b[32]; // 549a:0797
db dummyd_5d1bb[32]; // 549a:07b7
db dummyd_5d1db[32]; // 549a:07d7
db dummyd_5d1fb[32]; // 549a:07f7
db dummyd_5d21b;
db dummyd_5d21c;
db dummyd_5d21d;
db dummyd_5d21e;
db dummyd_5d21f;
db dummyd_5d220;
db dummyd_5d221;
db byte_6c06e; // 549a:081e
db dummyd_5d223;
db byte_6c070; // 549a:0820
db dummyd_5d225;
db dummyd_5d226;
db dummyd_5d227;
db dummyd_5d228;
db dummyd_5d229;
db dummyd_5d22a;
db dummyd_5d22b;
db dummyd_5d22c;
db dummyd_5d22d;
db dummyd_5d22e;
db dummyd_5d22f;
db dummyd_5d230;
db dummyd_5d231;
db dummyd_5d232;
db dummyd_5d233;
db byte_6c080; // 5a60:0000
db dummyd_5d235[32]; // 5a60:0001
db dummyd_5d255[32]; // 5a60:0021
db dummyd_5d275[32]; // 5a60:0041
db dummyd_5d295[32]; // 5a60:0061
db dummyd_5d2b5[32]; // 5a60:0081
db dummyd_5d2d5[32]; // 5a60:00a1
db dummyd_5d2f5[32]; // 5a60:00c1
db dummyd_5d315[32]; // 5a60:00e1
db dummyd_5d335[32]; // 5a60:0101
db dummyd_5d355[32]; // 5a60:0121
db dummyd_5d375[32]; // 5a60:0141
db dummyd_5d395[32]; // 5a60:0161
db dummyd_5d3b5[32]; // 5a60:0181
db dummyd_5d3d5[32]; // 5a60:01a1
db dummyd_5d3f5[32]; // 5a60:01c1
db dummyd_5d415[32]; // 5a60:01e1
db dummyd_5d435[32]; // 5a60:0201
db dummyd_5d455[32]; // 5a60:0221
db dummyd_5d475[32]; // 5a60:0241
db dummyd_5d495[32]; // 5a60:0261
db dummyd_5d4b5[32]; // 5a60:0281
db dummyd_5d4d5[32]; // 5a60:02a1
db dummyd_5d4f5[32]; // 5a60:02c1
db dummyd_5d515[32]; // 5a60:02e1
db dummyd_5d535[32]; // 5a60:0301
db dummyd_5d555[32]; // 5a60:0321
db dummyd_5d575[32]; // 5a60:0341
db dummyd_5d595[32]; // 5a60:0361
db dummyd_5d5b5[32]; // 5a60:0381
db dummyd_5d5d5[32]; // 5a60:03a1
db dummyd_5d5f5[32]; // 5a60:03c1
db dummyd_5d615[32]; // 5a60:03e1
db dummyd_5d635[32]; // 5a60:0401
db dummyd_5d655[32]; // 5a60:0421
db dummyd_5d675[32]; // 5a60:0441
db dummyd_5d695[32]; // 5a60:0461
db dummyd_5d6b5[32]; // 5a60:0481
db dummyd_5d6d5[32]; // 5a60:04a1
db dummyd_5d6f5[32]; // 5a60:04c1
db dummyd_5d715[32]; // 5a60:04e1
db dummyd_5d735[32]; // 5a60:0501
db dummyd_5d755[32]; // 5a60:0521
db dummyd_5d775[32]; // 5a60:0541
db dummyd_5d795[32]; // 5a60:0561
db dummyd_5d7b5[32]; // 5a60:0581
db dummyd_5d7d5[32]; // 5a60:05a1
db dummyd_5d7f5[32]; // 5a60:05c1
db dummyd_5d815[32]; // 5a60:05e1
db dummyd_5d835[32]; // 5a60:0601
db dummyd_5d855[32]; // 5a60:0621
db dummyd_5d875[32]; // 5a60:0641
db dummyd_5d895[32]; // 5a60:0661
db dummyd_5d8b5[32]; // 5a60:0681
db dummyd_5d8d5[32]; // 5a60:06a1
db dummyd_5d8f5[32]; // 5a60:06c1
db dummyd_5d915[32]; // 5a60:06e1
db dummyd_5d935[32]; // 5a60:0701
db dummyd_5d955[32]; // 5a60:0721
db dummyd_5d975[32]; // 5a60:0741
db dummyd_5d995[32]; // 5a60:0761
db dummyd_5d9b5; // 5a60:0781
db dummyd_5d9b6; // 5a60:0782
db dummyd_5d9b7; // 5a60:0783
db dummyd_5d9b8; // 5a60:0784
db dummyd_5d9b9; // 5a60:0785
db dummyd_5d9ba; // 5a60:0786
db dummyd_5d9bb; // 5a60:0787
db dummyd_5d9bc; // 5a60:0788
db dummyd_5d9bd; // 5a60:0789
db dummyd_5d9be; // 5a60:078a
db dummyd_5d9bf; // 5a60:078b
db dummyd_5d9c0; // 5a60:078c
db dummyd_5d9c1; // 5a60:078d
db dummyd_5d9c2; // 5a60:078e
db dummyd_5d9c3; // 5a60:078f
db dummyd_5d9c4; // 5a60:0790
db dummyd_5d9c5; // 5a60:0791
db dummyd_5d9c6; // 5a60:0792
db dummyd_5d9c7; // 5a60:0793
db dummyd_5d9c8;
db dummyd_5d9c9; // 5a60:0795
db dummyd_5d9ca; // 5a60:0796
db dummyd_5d9cb; // 5a60:0797
db dummyd_5d9cc; // 5a60:0798
db dummyd_5d9cd; // 5a60:0799
db dummyd_5d9ce; // 5a60:079a
db dummyd_5d9cf; // 5a60:079b
dw word_6c81c; // 5a60:079c
dw word_6c81e; // 5a60:079e
db dummyd_5d9d4[32]; // 5a60:07a0
db dummyd_5d9f4[32]; // 5a60:07c0
db dummyd_5da14[32]; // 5a60:07e0
db dummyd_5da34[32]; // 5a60:0800
db dummyd_5da54[32]; // 5a60:0820
db dummyd_5da74[32]; // 5a60:0840
db dummyd_5da94[32]; // 5a60:0860
db dummyd_5dab4[32]; // 5a60:0880
db dummyd_5dad4[32]; // 5a60:08a0
db dummyd_5daf4[32]; // 5a60:08c0
db dummyd_5db14[32]; // 5a60:08e0
db dummyd_5db34[32]; // 5a60:0900
db dummyd_5db54[32]; // 5a60:0920
db dummyd_5db74[32]; // 5a60:0940
db dummyd_5db94[32]; // 5a60:0960
db dummyd_5dbb4[32]; // 5a60:0980
db dummyd_5dbd4[32]; // 5a60:09a0
db dummyd_5dbf4[32]; // 5a60:09c0
db dummyd_5dc14[32]; // 5a60:09e0
db dummyd_5dc34[32]; // 5a60:0a00
db dummyd_5dc54[32]; // 5a60:0a20
db dummyd_5dc74[32]; // 5a60:0a40
db dummyd_5dc94[32]; // 5a60:0a60
db dummyd_5dcb4[32]; // 5a60:0a80
db dummyd_5dcd4[32]; // 5a60:0aa0
db dummyd_5dcf4[32]; // 5a60:0ac0
db dummyd_5dd14[32]; // 5a60:0ae0
db dummyd_5dd34[32]; // 5a60:0b00
db dummyd_5dd54[32]; // 5a60:0b20
db dummyd_5dd74[32]; // 5a60:0b40
db dummyd_5dd94[32]; // 5a60:0b60
db dummyd_5ddb4[32]; // 5a60:0b80
db dummyd_5ddd4[32]; // 5a60:0ba0
db dummyd_5ddf4[32]; // 5a60:0bc0
db dummyd_5de14[32]; // 5a60:0be0
db dummyd_5de34[32]; // 5a60:0c00
db dummyd_5de54[32]; // 5a60:0c20
db dummyd_5de74[32]; // 5a60:0c40
db dummyd_5de94[32]; // 5a60:0c60
db dummyd_5deb4[32]; // 5a60:0c80
db dummyd_5ded4[32]; // 5a60:0ca0
db dummyd_5def4[32]; // 5a60:0cc0
db dummyd_5df14[32]; // 5a60:0ce0
db dummyd_5df34[32]; // 5a60:0d00
db dummyd_5df54[32]; // 5a60:0d20
db dummyd_5df74[32]; // 5a60:0d40
db dummyd_5df94[32]; // 5a60:0d60
db dummyd_5dfb4[32]; // 5a60:0d80
db dummyd_5dfd4[32]; // 5a60:0da0
db dummyd_5dff4[32]; // 5a60:0dc0
db dummyd_5e014[32]; // 5a60:0de0
db dummyd_5e034[32]; // 5a60:0e00
db dummyd_5e054[32]; // 5a60:0e20
db dummyd_5e074[32]; // 5a60:0e40
db dummyd_5e094[32]; // 5a60:0e60
db dummyd_5e0b4[32]; // 5a60:0e80
db dummyd_5e0d4[32]; // 5a60:0ea0
db dummyd_5e0f4[32]; // 5a60:0ec0
db dummyd_5e114[32]; // 5a60:0ee0
db dummyd_5e134[32]; // 5a60:0f00
db dummyd_5e154[32]; // 5a60:0f20
db dummyd_5e174[32]; // 5a60:0f40
db dummyd_5e194[32]; // 5a60:0f60
db dummyd_5e1b4[32]; // 5a60:0f80
db dummyd_5e1d4[32]; // 5a60:0fa0
db dummyd_5e1f4[32]; // 5a60:0fc0
db dummyd_5e214[32]; // 5a60:0fe0
db dummyd_5e234[32]; // 5a60:1000
db dummyd_5e254[32]; // 5a60:1020
db dummyd_5e274[32]; // 5a60:1040
db dummyd_5e294[32]; // 5a60:1060
db dummyd_5e2b4[32]; // 5a60:1080
db dummyd_5e2d4[32]; // 5a60:10a0
db dummyd_5e2f4[32]; // 5a60:10c0
db dummyd_5e314[32]; // 5a60:10e0
db dummyd_5e334[32]; // 5a60:1100
db dummyd_5e354[32]; // 5a60:1120
db dummyd_5e374[32]; // 5a60:1140
db dummyd_5e394[32]; // 5a60:1160
db dummyd_5e3b4[32]; // 5a60:1180
db dummyd_5e3d4[32]; // 5a60:11a0
db dummyd_5e3f4[32]; // 5a60:11c0
db dummyd_5e414[32]; // 5a60:11e0
db dummyd_5e434[32]; // 5a60:1200
db dummyd_5e454[32]; // 5a60:1220
db dummyd_5e474[32]; // 5a60:1240
db dummyd_5e494[32]; // 5a60:1260
db dummyd_5e4b4[32]; // 5a60:1280
db dummyd_5e4d4[32]; // 5a60:12a0
db dummyd_5e4f4[32]; // 5a60:12c0
db dummyd_5e514[32]; // 5a60:12e0
db dummyd_5e534[32]; // 5a60:1300
db dummyd_5e554[32]; // 5a60:1320
db dummyd_5e574[32]; // 5a60:1340
db dummyd_5e594[32]; // 5a60:1360
db dummyd_5e5b4[32]; // 5a60:1380
db dummyd_5e5d4[32]; // 5a60:13a0
db dummyd_5e5f4[32]; // 5a60:13c0
db dummyd_5e614[32]; // 5a60:13e0
db dummyd_5e634[32]; // 5a60:1400
db dummyd_5e654[32]; // 5a60:1420
db dummyd_5e674[32]; // 5a60:1440
db dummyd_5e694[32]; // 5a60:1460
db dummyd_5e6b4[32]; // 5a60:1480
db dummyd_5e6d4[32]; // 5a60:14a0
db dummyd_5e6f4[32]; // 5a60:14c0
db dummyd_5e714[32]; // 5a60:14e0
db dummyd_5e734[32]; // 5a60:1500
db dummyd_5e754[32]; // 5a60:1520
db dummyd_5e774[32]; // 5a60:1540
db dummyd_5e794[32]; // 5a60:1560
db dummyd_5e7b4[32]; // 5a60:1580
db dummyd_5e7d4[32]; // 5a60:15a0
db dummyd_5e7f4[32]; // 5a60:15c0
db dummyd_5e814[32]; // 5a60:15e0
db dummyd_5e834[32]; // 5a60:1600
db dummyd_5e854[32]; // 5a60:1620
db dummyd_5e874[32]; // 5a60:1640
db dummyd_5e894[32]; // 5a60:1660
db dummyd_5e8b4[32]; // 5a60:1680
db dummyd_5e8d4[32]; // 5a60:16a0
db dummyd_5e8f4[32]; // 5a60:16c0
db dummyd_5e914[32]; // 5a60:16e0
db dummyd_5e934[32]; // 5a60:1700
db dummyd_5e954[32]; // 5a60:1720
db dummyd_5e974[32]; // 5a60:1740
db dummyd_5e994[32]; // 5a60:1760
db dummyd_5e9b4[32]; // 5a60:1780
db dummyd_5e9d4[32]; // 5a60:17a0
db dummyd_5e9f4[32]; // 5a60:17c0
db dummyd_5ea14[32]; // 5a60:17e0
db dummyd_5ea34[32]; // 5a60:1800
db dummyd_5ea54[32]; // 5a60:1820
db dummyd_5ea74[32]; // 5a60:1840
db dummyd_5ea94[32]; // 5a60:1860
db dummyd_5eab4[32]; // 5a60:1880
db dummyd_5ead4[32]; // 5a60:18a0
db dummyd_5eaf4[32]; // 5a60:18c0
db dummyd_5eb14[32]; // 5a60:18e0
db dummyd_5eb34[32]; // 5a60:1900
db dummyd_5eb54[32]; // 5a60:1920
db dummyd_5eb74[32]; // 5a60:1940
db dummyd_5eb94[32]; // 5a60:1960
db dummyd_5ebb4[32]; // 5a60:1980
db dummyd_5ebd4[32]; // 5a60:19a0
db dummyd_5ebf4[32]; // 5a60:19c0
db dummyd_5ec14[32]; // 5a60:19e0
db dummyd_5ec34[32]; // 5a60:1a00
db dummyd_5ec54[32]; // 5a60:1a20
db dummyd_5ec74[32]; // 5a60:1a40
db dummyd_5ec94[32]; // 5a60:1a60
db dummyd_5ecb4[32]; // 5a60:1a80
db dummyd_5ecd4[32]; // 5a60:1aa0
db dummyd_5ecf4[32]; // 5a60:1ac0
db dummyd_5ed14[32]; // 5a60:1ae0
db dummyd_5ed34[32]; // 5a60:1b00
db dummyd_5ed54[32]; // 5a60:1b20
db dummyd_5ed74[32]; // 5a60:1b40
db dummyd_5ed94[32]; // 5a60:1b60
db dummyd_5edb4[32]; // 5a60:1b80
db dummyd_5edd4[32]; // 5a60:1ba0
db dummyd_5edf4[32]; // 5a60:1bc0
db dummyd_5ee14[32]; // 5a60:1be0
db dummyd_5ee34[32]; // 5a60:1c00
db dummyd_5ee54[32]; // 5a60:1c20
db dummyd_5ee74[32]; // 5a60:1c40
db dummyd_5ee94[32]; // 5a60:1c60
db dummyd_5eeb4[32]; // 5a60:1c80
db dummyd_5eed4[32]; // 5a60:1ca0
db dummyd_5eef4[32]; // 5a60:1cc0
db dummyd_5ef14[32]; // 5a60:1ce0
db dummyd_5ef34[32]; // 5a60:1d00
db dummyd_5ef54[32]; // 5a60:1d20
db dummyd_5ef74[32]; // 5a60:1d40
db dummyd_5ef94[32]; // 5a60:1d60
db dummyd_5efb4[32]; // 5a60:1d80
db dummyd_5efd4[32]; // 5a60:1da0
db dummyd_5eff4[32]; // 5a60:1dc0
db dummyd_5f014[32]; // 5a60:1de0
db dummyd_5f034[32]; // 5a60:1e00
db dummyd_5f054[32]; // 5a60:1e20
db dummyd_5f074[32]; // 5a60:1e40
db dummyd_5f094[32]; // 5a60:1e60
db dummyd_5f0b4[32]; // 5a60:1e80
db dummyd_5f0d4[32]; // 5a60:1ea0
db dummyd_5f0f4[32]; // 5a60:1ec0
db dummyd_5f114[32]; // 5a60:1ee0
db dummyd_5f134[32]; // 5a60:1f00
db dummyd_5f154[32]; // 5a60:1f20
db dummyd_5f174[32]; // 5a60:1f40
db dummyd_5f194[32]; // 5a60:1f60
db dummyd_5f1b4[32]; // 5a60:1f80
db dummyd_5f1d4[32]; // 5a60:1fa0
db dummyd_5f1f4[32]; // 5a60:1fc0
db dummyd_5f214[32]; // 5a60:1fe0
db dummyd_5f234[32]; // 5a60:2000
db dummyd_5f254[32]; // 5a60:2020
db dummyd_5f274[32]; // 5a60:2040
db dummyd_5f294[32]; // 5a60:2060
db dummyd_5f2b4[32]; // 5a60:2080
db dummyd_5f2d4[32]; // 5a60:20a0
db dummyd_5f2f4[32]; // 5a60:20c0
db dummyd_5f314[32]; // 5a60:20e0
db dummyd_5f334[32]; // 5a60:2100
db dummyd_5f354[32]; // 5a60:2120
db dummyd_5f374[32]; // 5a60:2140
db dummyd_5f394[32]; // 5a60:2160
db dummyd_5f3b4[32]; // 5a60:2180
db dummyd_5f3d4[32]; // 5a60:21a0
db dummyd_5f3f4[32]; // 5a60:21c0
db dummyd_5f414[32]; // 5a60:21e0
db dummyd_5f434[32]; // 5a60:2200
db dummyd_5f454[32]; // 5a60:2220
db dummyd_5f474[32]; // 5a60:2240
db dummyd_5f494[32]; // 5a60:2260
db dummyd_5f4b4[32]; // 5a60:2280
db dummyd_5f4d4[32]; // 5a60:22a0
db dummyd_5f4f4[32]; // 5a60:22c0
db dummyd_5f514[32]; // 5a60:22e0
db dummyd_5f534[32]; // 5a60:2300
db dummyd_5f554[32]; // 5a60:2320
db dummyd_5f574[32]; // 5a60:2340
db dummyd_5f594[32]; // 5a60:2360
db dummyd_5f5b4[32]; // 5a60:2380
db dummyd_5f5d4[32]; // 5a60:23a0
db dummyd_5f5f4[32]; // 5a60:23c0
db dummyd_5f614[32]; // 5a60:23e0
db dummyd_5f634[32]; // 5a60:2400
db dummyd_5f654[32]; // 5a60:2420
db dummyd_5f674[32]; // 5a60:2440
db dummyd_5f694[32]; // 5a60:2460
db dummyd_5f6b4[32]; // 5a60:2480
db dummyd_5f6d4[32]; // 5a60:24a0
db dummyd_5f6f4[32]; // 5a60:24c0
db dummyd_5f714[32]; // 5a60:24e0
db dummyd_5f734[32]; // 5a60:2500
db dummyd_5f754[32]; // 5a60:2520
db dummyd_5f774[32]; // 5a60:2540
db dummyd_5f794[32]; // 5a60:2560
db dummyd_5f7b4[32]; // 5a60:2580
db dummyd_5f7d4[32]; // 5a60:25a0
db dummyd_5f7f4[32]; // 5a60:25c0
db dummyd_5f814[32]; // 5a60:25e0
db dummyd_5f834[32]; // 5a60:2600
db dummyd_5f854[32]; // 5a60:2620
db dummyd_5f874[32]; // 5a60:2640
db dummyd_5f894[32]; // 5a60:2660
db dummyd_5f8b4[32]; // 5a60:2680
db dummyd_5f8d4[32]; // 5a60:26a0
db dummyd_5f8f4[32]; // 5a60:26c0
db dummyd_5f914[32]; // 5a60:26e0
db dummyd_5f934[32]; // 5a60:2700
db dummyd_5f954[32]; // 5a60:2720
db dummyd_5f974[32]; // 5a60:2740
db dummyd_5f994[32]; // 5a60:2760
db dummyd_5f9b4[32]; // 5a60:2780
db dummyd_5f9d4[32]; // 5a60:27a0
db dummyd_5f9f4[32]; // 5a60:27c0
db dummyd_5fa14[32]; // 5a60:27e0
db dummyd_5fa34[32]; // 5a60:2800
db dummyd_5fa54[32]; // 5a60:2820
db dummyd_5fa74[32]; // 5a60:2840
db dummyd_5fa94[32]; // 5a60:2860
db dummyd_5fab4[32]; // 5a60:2880
db dummyd_5fad4[32]; // 5a60:28a0
db dummyd_5faf4[32]; // 5a60:28c0
db dummyd_5fb14[32]; // 5a60:28e0
db dummyd_5fb34[32]; // 5a60:2900
db dummyd_5fb54[32]; // 5a60:2920
db dummyd_5fb74[32]; // 5a60:2940
db dummyd_5fb94[32]; // 5a60:2960
db dummyd_5fbb4[32]; // 5a60:2980
db dummyd_5fbd4[32]; // 5a60:29a0
db dummyd_5fbf4[32]; // 5a60:29c0
db dummyd_5fc14[32]; // 5a60:29e0
db dummyd_5fc34[32]; // 5a60:2a00
db dummyd_5fc54[32]; // 5a60:2a20
db dummyd_5fc74[32]; // 5a60:2a40
db dummyd_5fc94[32]; // 5a60:2a60
db dummyd_5fcb4[32]; // 5a60:2a80
db dummyd_5fcd4[32]; // 5a60:2aa0
db dummyd_5fcf4[32]; // 5a60:2ac0
db dummyd_5fd14[32]; // 5a60:2ae0
db dummyd_5fd34[32]; // 5a60:2b00
db dummyd_5fd54[32]; // 5a60:2b20
db dummyd_5fd74[32]; // 5a60:2b40
db dummyd_5fd94[32]; // 5a60:2b60
db dummyd_5fdb4[32]; // 5a60:2b80
db dummyd_5fdd4[32]; // 5a60:2ba0
db dummyd_5fdf4[32]; // 5a60:2bc0
db dummyd_5fe14[32]; // 5a60:2be0
db dummyd_5fe34[32]; // 5a60:2c00
db dummyd_5fe54[32]; // 5a60:2c20
db dummyd_5fe74[32]; // 5a60:2c40
db dummyd_5fe94[32]; // 5a60:2c60
db dummyd_5feb4[32]; // 5a60:2c80
db dummyd_5fed4[32]; // 5a60:2ca0
db dummyd_5fef4[32]; // 5a60:2cc0
db dummyd_5ff14[32]; // 5a60:2ce0
db dummyd_5ff34[32]; // 5a60:2d00
db dummyd_5ff54[32]; // 5a60:2d20
db dummyd_5ff74[32]; // 5a60:2d40
db dummyd_5ff94[32]; // 5a60:2d60
db dummyd_5ffb4[32]; // 5a60:2d80
db dummyd_5ffd4[32]; // 5a60:2da0
db dummyd_5fff4[32]; // 5a60:2dc0
db dummyd_60014[32]; // 5a60:2de0
db dummyd_60034[32]; // 5a60:2e00
db dummyd_60054[32]; // 5a60:2e20
db dummyd_60074[32]; // 5a60:2e40
db dummyd_60094[32]; // 5a60:2e60
db dummyd_600b4[32]; // 5a60:2e80
db dummyd_600d4[32]; // 5a60:2ea0
db dummyd_600f4[32]; // 5a60:2ec0
db dummyd_60114[32]; // 5a60:2ee0
db dummyd_60134[32]; // 5a60:2f00
db dummyd_60154[32]; // 5a60:2f20
db dummyd_60174[32]; // 5a60:2f40
db dummyd_60194[32]; // 5a60:2f60
db dummyd_601b4[32]; // 5a60:2f80
db dummyd_601d4[32]; // 5a60:2fa0
db dummyd_601f4[32]; // 5a60:2fc0
db dummyd_60214[32]; // 5a60:2fe0
db dummyd_60234[32]; // 5a60:3000
db dummyd_60254[32]; // 5a60:3020
db dummyd_60274[32]; // 5a60:3040
db dummyd_60294[32]; // 5a60:3060
db dummyd_602b4[32]; // 5a60:3080
db dummyd_602d4[32]; // 5a60:30a0
db dummyd_602f4[32]; // 5a60:30c0
db dummyd_60314[32]; // 5a60:30e0
db dummyd_60334[32]; // 5a60:3100
db dummyd_60354[32]; // 5a60:3120
db dummyd_60374[32]; // 5a60:3140
db dummyd_60394[32]; // 5a60:3160
db dummyd_603b4[32]; // 5a60:3180
db dummyd_603d4[32]; // 5a60:31a0
db dummyd_603f4[32]; // 5a60:31c0
db dummyd_60414[32]; // 5a60:31e0
db dummyd_60434[32]; // 5a60:3200
db dummyd_60454[32]; // 5a60:3220
db dummyd_60474[32]; // 5a60:3240
db dummyd_60494[32]; // 5a60:3260
db dummyd_604b4[32]; // 5a60:3280
db dummyd_604d4[32]; // 5a60:32a0
db dummyd_604f4[32]; // 5a60:32c0
db dummyd_60514[32]; // 5a60:32e0
db dummyd_60534[32]; // 5a60:3300
db dummyd_60554[32]; // 5a60:3320
db dummyd_60574[32]; // 5a60:3340
db dummyd_60594[32]; // 5a60:3360
db dummyd_605b4[32]; // 5a60:3380
db dummyd_605d4[32]; // 5a60:33a0
db dummyd_605f4[32]; // 5a60:33c0
db dummyd_60614[32]; // 5a60:33e0
db dummyd_60634[32]; // 5a60:3400
db dummyd_60654[32]; // 5a60:3420
db dummyd_60674[32]; // 5a60:3440
db dummyd_60694[32]; // 5a60:3460
db dummyd_606b4[32]; // 5a60:3480
db dummyd_606d4[32]; // 5a60:34a0
db dummyd_606f4[32]; // 5a60:34c0
db dummyd_60714[32]; // 5a60:34e0
db dummyd_60734[32]; // 5a60:3500
db dummyd_60754[32]; // 5a60:3520
db dummyd_60774[32]; // 5a60:3540
db dummyd_60794[32]; // 5a60:3560
db dummyd_607b4[32]; // 5a60:3580
db dummyd_607d4[32]; // 5a60:35a0
db dummyd_607f4[32]; // 5a60:35c0
db dummyd_60814[32]; // 5a60:35e0
db dummyd_60834[32]; // 5a60:3600
db dummyd_60854[32]; // 5a60:3620
db dummyd_60874[32]; // 5a60:3640
db dummyd_60894[32]; // 5a60:3660
db dummyd_608b4[32]; // 5a60:3680
db dummyd_608d4[32]; // 5a60:36a0
db dummyd_608f4[32]; // 5a60:36c0
db dummyd_60914[32]; // 5a60:36e0
db dummyd_60934[32]; // 5a60:3700
db dummyd_60954[32]; // 5a60:3720
db dummyd_60974[32]; // 5a60:3740
db dummyd_60994[32]; // 5a60:3760
db dummyd_609b4[32]; // 5a60:3780
db dummyd_609d4[32]; // 5a60:37a0
db dummyd_609f4[32]; // 5a60:37c0
db dummyd_60a14[32]; // 5a60:37e0
db dummyd_60a34[32]; // 5a60:3800
db dummyd_60a54[32]; // 5a60:3820
db dummyd_60a74[32]; // 5a60:3840
db dummyd_60a94[32]; // 5a60:3860
db dummyd_60ab4[32]; // 5a60:3880
db dummyd_60ad4[32]; // 5a60:38a0
db dummyd_60af4[32]; // 5a60:38c0
db dummyd_60b14[32]; // 5a60:38e0
db dummyd_60b34[32]; // 5a60:3900
db dummyd_60b54[32]; // 5a60:3920
db dummyd_60b74[32]; // 5a60:3940
db dummyd_60b94[32]; // 5a60:3960
db dummyd_60bb4[32]; // 5a60:3980
db dummyd_60bd4[32]; // 5a60:39a0
db dummyd_60bf4[32]; // 5a60:39c0
db dummyd_60c14[32]; // 5a60:39e0
db dummyd_60c34[32]; // 5a60:3a00
db dummyd_60c54[32]; // 5a60:3a20
db dummyd_60c74[32]; // 5a60:3a40
db dummyd_60c94[32]; // 5a60:3a60
db dummyd_60cb4[32]; // 5a60:3a80
db dummyd_60cd4[32]; // 5a60:3aa0
db dummyd_60cf4[32]; // 5a60:3ac0
db dummyd_60d14[32]; // 5a60:3ae0
db dummyd_60d34;
db dummyd_60d35; // 5a60:3b01
db dummyd_60d36; // 5a60:3b02
db dummyd_60d37; // 5a60:3b03
db dummyd_60d38; // 5a60:3b04
db dummyd_60d39; // 5a60:3b05
db dummyd_60d3a; // 5a60:3b06
db dummyd_60d3b; // 5a60:3b07
db dummyd_60d3c;
db dummyd_60d3d; // 5a60:3b09
db dummyd_60d3e; // 5a60:3b0a
db dummyd_60d3f; // 5a60:3b0b
db dummyd_60d40;
db dummyd_60d41; // 5a60:3b0d
db dummyd_60d42;
db dummyd_60d43;
db unk_6fb90; // 5a60:3b10
db dummyd_60d45; // 5a60:3b11
db byte_6fb92; // 5a60:3b12
db byte_6fb93; // 5a60:3b13
db unk_6fb94; // 5a60:3b14
db dummyd_60d49;
db unk_6fb96; // 5a60:3b16
db dummyd_60d4b[32]; // 5a60:3b17
db dummyd_60d6b[32]; // 5a60:3b37
db dummyd_60d8b[32]; // 5a60:3b57
db dummyd_60dab[32]; // 5a60:3b77
db dummyd_60dcb[32]; // 5a60:3b97
db dummyd_60deb[32]; // 5a60:3bb7
db dummyd_60e0b[32]; // 5a60:3bd7
db dummyd_60e2b[32]; // 5a60:3bf7
db dummyd_60e4b[32]; // 5a60:3c17
db dummyd_60e6b[32]; // 5a60:3c37
db dummyd_60e8b[32]; // 5a60:3c57
db dummyd_60eab[32]; // 5a60:3c77
db dummyd_60ecb[32]; // 5a60:3c97
db dummyd_60eeb[32]; // 5a60:3cb7
db dummyd_60f0b[32]; // 5a60:3cd7
db dummyd_60f2b[32]; // 5a60:3cf7
db dummyd_60f4b[32]; // 5a60:3d17
db dummyd_60f6b[32]; // 5a60:3d37
db dummyd_60f8b[32]; // 5a60:3d57
db dummyd_60fab[32]; // 5a60:3d77
db dummyd_60fcb[32]; // 5a60:3d97
db dummyd_60feb[32]; // 5a60:3db7
db dummyd_6100b[32]; // 5a60:3dd7
db dummyd_6102b[32]; // 5a60:3df7
db dummyd_6104b[32]; // 5a60:3e17
db dummyd_6106b[32]; // 5a60:3e37
db dummyd_6108b[32]; // 5a60:3e57
db dummyd_610ab[32]; // 5a60:3e77
db dummyd_610cb[32]; // 5a60:3e97
db dummyd_610eb[32]; // 5a60:3eb7
db dummyd_6110b[32]; // 5a60:3ed7
db dummyd_6112b[32]; // 5a60:3ef7
db dummyd_6114b[32]; // 5a60:3f17
db dummyd_6116b[32]; // 5a60:3f37
db dummyd_6118b[32]; // 5a60:3f57
db dummyd_611ab[32]; // 5a60:3f77
db dummyd_611cb[32]; // 5a60:3f97
db dummyd_611eb[32]; // 5a60:3fb7
db dummyd_6120b[32]; // 5a60:3fd7
db dummyd_6122b[32]; // 5a60:3ff7
db dummyd_6124b; // 5a60:4017
db byte_70098; // 5a60:4018
db byte_70099; // 5a60:4019
db unk_7009a; // 5a60:401a
db dummyd_6124f;
db unk_7009c; // 5a60:401c
db dummyd_61251;
db unk_7009e; // 5a60:401e
db dummyd_61253[32]; // 5a60:401f
db dummyd_61273[32]; // 5a60:403f
db dummyd_61293[32]; // 5a60:405f
db dummyd_612b3[32]; // 5a60:407f
db dummyd_612d3[32]; // 5a60:409f
db dummyd_612f3[32]; // 5a60:40bf
db dummyd_61313[32]; // 5a60:40df
db dummyd_61333[32]; // 5a60:40ff
db dummyd_61353[32]; // 5a60:411f
db dummyd_61373[32]; // 5a60:413f
db dummyd_61393[32]; // 5a60:415f
db dummyd_613b3[32]; // 5a60:417f
db dummyd_613d3[32]; // 5a60:419f
db dummyd_613f3[32]; // 5a60:41bf
db dummyd_61413[32]; // 5a60:41df
db dummyd_61433[32]; // 5a60:41ff
db dummyd_61453[32]; // 5a60:421f
db dummyd_61473[32]; // 5a60:423f
db dummyd_61493; // 5a60:425f
db dummyd_61494; // 5a60:4260
db dummyd_61495; // 5a60:4261
db dummyd_61496; // 5a60:4262
db dummyd_61497; // 5a60:4263
db dummyd_61498; // 5a60:4264
db dummyd_61499; // 5a60:4265
db dummyd_6149a; // 5a60:4266
db dummyd_6149b; // 5a60:4267
db dummyd_6149c; // 5a60:4268
db dummyd_6149d; // 5a60:4269
db dummyd_6149e;
db areadingdisk; // 5a60:426b
db dummyd_614a0[32]; // 5a60:426c
db dummyd_614c0; // 5a60:428c
db dummyd_614c1; // 5a60:428d
db dummyd_614c2; // 5a60:428e
db dummyd_614c3; // 5a60:428f
db dummyd_614c4; // 5a60:4290
db dummyd_614c5; // 5a60:4291
db dummyd_614c6; // 5a60:4292
db dummyd_614c7; // 5a60:4293
db dummyd_614c8; // 5a60:4294
db dummyd_614c9; // 5a60:4295
db dummyd_614ca; // 5a60:4296
db dummyd_614cb; // 5a60:4297
db dummyd_614cc; // 5a60:4298
db dummyd_614cd; // 5a60:4299
db dummyd_614ce; // 5a60:429a
db dummyd_614cf; // 5a60:429b
db dummyd_614d0; // 5a60:429c
db dummyd_614d1; // 5a60:429d
db dummyd_614d2; // 5a60:429e
db dummyd_614d3;
db asavegameplacea; // 5a60:42a0
db dummyd_614d5[32]; // 5a60:42a1
db dummyd_614f5[32]; // 5a60:42c1
db dummyd_61515[32]; // 5a60:42e1
db dummyd_61535[32]; // 5a60:4301
db dummyd_61555[32]; // 5a60:4321
db dummyd_61575[32]; // 5a60:4341
db dummyd_61595[32]; // 5a60:4361
db dummyd_615b5[32]; // 5a60:4381
db dummyd_615d5[32]; // 5a60:43a1
db dummyd_615f5[32]; // 5a60:43c1
db dummyd_61615[32]; // 5a60:43e1
db dummyd_61635; // 5a60:4401
db dummyd_61636; // 5a60:4402
db dummyd_61637; // 5a60:4403
db dummyd_61638; // 5a60:4404
db dummyd_61639; // 5a60:4405
db dummyd_6163a; // 5a60:4406
db dummyd_6163b; // 5a60:4407
db dummyd_6163c; // 5a60:4408
db dummyd_6163d; // 5a60:4409
db dummyd_6163e; // 5a60:440a
db dummyd_6163f; // 5a60:440b
db dummyd_61640; // 5a60:440c
db dummyd_61641; // 5a60:440d
db dummyd_61642; // 5a60:440e
db dummyd_61643; // 5a60:440f
db dummyd_61644; // 5a60:4410
db dummyd_61645; // 5a60:4411
db dummyd_61646; // 5a60:4412
db dummyd_61647; // 5a60:4413
db dummyd_61648; // 5a60:4414
db dummyd_61649; // 5a60:4415
db dummyd_6164a; // 5a60:4416
db dummyd_6164b; // 5a60:4417
db dummyd_6164c; // 5a60:4418
db dummyd_6164d; // 5a60:4419
db dummyd_6164e; // 5a60:441a
db dummyd_6164f; // 5a60:441b
db dummyd_61650; // 5a60:441c
db dummyd_61651;
db acreatingfile; // 5a60:441e
db dummyd_61653[32]; // 5a60:441f
db dummyd_61673; // 5a60:443f
db dummyd_61674; // 5a60:4440
db dummyd_61675; // 5a60:4441
db dummyd_61676; // 5a60:4442
db dummyd_61677; // 5a60:4443
db dummyd_61678; // 5a60:4444
db dummyd_61679; // 5a60:4445
db dummyd_6167a; // 5a60:4446
db dummyd_6167b;
db awritinggametod; // 5a60:4448
db dummyd_6167d[32]; // 5a60:4449
db dummyd_6169d[32]; // 5a60:4469
db dummyd_616bd[32]; // 5a60:4489
db dummyd_616dd[32]; // 5a60:44a9
db dummyd_616fd[32]; // 5a60:44c9
db dummyd_6171d[32]; // 5a60:44e9
db dummyd_6173d[32]; // 5a60:4509
db dummyd_6175d[32]; // 5a60:4529
db dummyd_6177d[32]; // 5a60:4549
db dummyd_6179d[32]; // 5a60:4569
db dummyd_617bd[32]; // 5a60:4589
db dummyd_617dd[32]; // 5a60:45a9
db dummyd_617fd[32]; // 5a60:45c9
db dummyd_6181d[32]; // 5a60:45e9
db dummyd_6183d[32]; // 5a60:4609
db dummyd_6185d[32]; // 5a60:4629
db dummyd_6187d[32]; // 5a60:4649
db dummyd_6189d[32]; // 5a60:4669
db dummyd_618bd[32]; // 5a60:4689
db dummyd_618dd[32]; // 5a60:46a9
db dummyd_618fd[32]; // 5a60:46c9
db dummyd_6191d[32]; // 5a60:46e9
db dummyd_6193d[32]; // 5a60:4709
db dummyd_6195d[32]; // 5a60:4729
db dummyd_6197d[32]; // 5a60:4749
db dummyd_6199d[32]; // 5a60:4769
db dummyd_619bd[32]; // 5a60:4789
db dummyd_619dd[32]; // 5a60:47a9
db dummyd_619fd[32]; // 5a60:47c9
db dummyd_61a1d[32]; // 5a60:47e9
db dummyd_61a3d; // 5a60:4809
db dummyd_61a3e; // 5a60:480a
db dummyd_61a3f; // 5a60:480b
db dummyd_61a40; // 5a60:480c
db dummyd_61a41;
char aloadingdataple_0[26]; // 5a60:480e
db dummyd_61a5c[32]; // 5a60:4828
db dummyd_61a7c[32]; // 5a60:4848
db dummyd_61a9c; // 5a60:4868
db dummyd_61a9d; // 5a60:4869
db dummyd_61a9e; // 5a60:486a
db dummyd_61a9f; // 5a60:486b
db dummyd_61aa0; // 5a60:486c
db dummyd_61aa1; // 5a60:486d
db dummyd_61aa2; // 5a60:486e
db dummyd_61aa3; // 5a60:486f
db dummyd_61aa4; // 5a60:4870
db dummyd_61aa5; // 5a60:4871
db dummyd_61aa6; // 5a60:4872
db dummyd_61aa7;
char adoyouwanttores[65]; // 5a60:4874
char dummyd_61ae9[52]; // 5a60:48b5
db dummyd_61b1d[32]; // 5a60:48e9
db dummyd_61b3d[32]; // 5a60:4909
db dummyd_61b5d[32]; // 5a60:4929
db dummyd_61b7d[32]; // 5a60:4949
db dummyd_61b9d[32]; // 5a60:4969
db dummyd_61bbd[32]; // 5a60:4989
db dummyd_61bdd[32]; // 5a60:49a9
db dummyd_61bfd[32]; // 5a60:49c9
db dummyd_61c1d[32]; // 5a60:49e9
db dummyd_61c3d[32]; // 5a60:4a09
db dummyd_61c5d[32]; // 5a60:4a29
db dummyd_61c7d[32]; // 5a60:4a49
db dummyd_61c9d[32]; // 5a60:4a69
db dummyd_61cbd[32]; // 5a60:4a89
db dummyd_61cdd[32]; // 5a60:4aa9
db dummyd_61cfd[32]; // 5a60:4ac9
db dummyd_61d1d[32]; // 5a60:4ae9
db dummyd_61d3d[32]; // 5a60:4b09
db dummyd_61d5d[32]; // 5a60:4b29
db dummyd_61d7d[32]; // 5a60:4b49
db dummyd_61d9d[32]; // 5a60:4b69
db dummyd_61dbd[32]; // 5a60:4b89
db dummyd_61ddd[32]; // 5a60:4ba9
db dummyd_61dfd[32]; // 5a60:4bc9
db dummyd_61e1d[32]; // 5a60:4be9
db dummyd_61e3d[32]; // 5a60:4c09
db dummyd_61e5d; // 5a60:4c29
db dummyd_61e5e; // 5a60:4c2a
db dummyd_61e5f; // 5a60:4c2b
db dummyd_61e60; // 5a60:4c2c
db dummyd_61e61; // 5a60:4c2d
db dummyd_61e62; // 5a60:4c2e
db dummyd_61e63; // 5a60:4c2f
db byte_70cb0; // 5a60:4c30
db dummyd_61e65[32]; // 5a60:4c31
db dummyd_61e85[32]; // 5a60:4c51
db dummyd_61ea5; // 5a60:4c71
db dummyd_61ea6;
db dummyd_61ea7; // 5a60:4c73
db dummyd_61ea8; // 5a60:4c74
db dummyd_61ea9; // 5a60:4c75
db dummyd_61eaa; // 5a60:4c76
db dummyd_61eab; // 5a60:4c77
db dummyd_61eac; // 5a60:4c78
db dummyd_61ead; // 5a60:4c79
db dummyd_61eae; // 5a60:4c7a
db dummyd_61eaf; // 5a60:4c7b
db dummyd_61eb0; // 5a60:4c7c
db dummyd_61eb1; // 5a60:4c7d
db dummyd_61eb2;
char adataandatadat[16]; // 5a60:4c7f
db byte_70d0f; // 5a60:4c8f
char aatalevmp1[15]; // 5a60:4c90
db byte_70d1f; // 5a60:4c9f
char aatalevmp2[15]; // 5a60:4ca0
db byte_70d2f; // 5a60:4caf
char aatalevmp3[15]; // 5a60:4cb0
db byte_70d3f; // 5a60:4cbf
char aataroutinetad[19]; // 5a60:4cc0
db dummyd_61f07; // 5a60:4cd3
db dummyd_61f08; // 5a60:4cd4
db dummyd_61f09; // 5a60:4cd5
db dummyd_61f0a; // 5a60:4cd6
db dummyd_61f0b; // 5a60:4cd7
db dummyd_61f0c; // 5a60:4cd8
db byte_70d59; // 5a60:4cd9
char aataenglng[15]; // 5a60:4cda
db byte_70d69; // 5a60:4ce9
db dummyd_61f1e; // 5a60:4cea
db dummyd_61f1f; // 5a60:4ceb
db dummyd_61f20; // 5a60:4cec
db dummyd_61f21; // 5a60:4ced
db dummyd_61f22; // 5a60:4cee
db dummyd_61f23; // 5a60:4cef
db dummyd_61f24; // 5a60:4cf0
db dummyd_61f25; // 5a60:4cf1
db dummyd_61f26; // 5a60:4cf2
db dummyd_61f27; // 5a60:4cf3
db dummyd_61f28; // 5a60:4cf4
db dummyd_61f29; // 5a60:4cf5
db dummyd_61f2a; // 5a60:4cf6
db dummyd_61f2b; // 5a60:4cf7
db dummyd_61f2c;
db byte_70d79; // 5a60:4cf9
db dummyd_61f2e; // 5a60:4cfa
db dummyd_61f2f; // 5a60:4cfb
db dummyd_61f30; // 5a60:4cfc
db dummyd_61f31; // 5a60:4cfd
db dummyd_61f32; // 5a60:4cfe
db dummyd_61f33; // 5a60:4cff
db dummyd_61f34; // 5a60:4d00
db dummyd_61f35; // 5a60:4d01
db dummyd_61f36; // 5a60:4d02
db dummyd_61f37; // 5a60:4d03
db dummyd_61f38; // 5a60:4d04
db dummyd_61f39; // 5a60:4d05
db dummyd_61f3a; // 5a60:4d06
db dummyd_61f3b; // 5a60:4d07
db dummyd_61f3c;
db dummyd_61f3d; // 5a60:4d09
db dummyd_61f3e; // 5a60:4d0a
db dummyd_61f3f; // 5a60:4d0b
db dummyd_61f40; // 5a60:4d0c
db dummyd_61f41; // 5a60:4d0d
db dummyd_61f42; // 5a60:4d0e
db dummyd_61f43; // 5a60:4d0f
db dummyd_61f44; // 5a60:4d10
db dummyd_61f45; // 5a60:4d11
db byte_70d92; // 5a60:4d12
db dummyd_61f47;
char adatapcmandat[15]; // 5a60:4d14
db dummyd_61f57[32]; // 5a60:4d23
db dummyd_61f77[32]; // 5a60:4d43
db dummyd_61f97[32]; // 5a60:4d63
db dummyd_61fb7[32]; // 5a60:4d83
db dummyd_61fd7[32]; // 5a60:4da3
db dummyd_61ff7[32]; // 5a60:4dc3
db dummyd_62017[32]; // 5a60:4de3
db dummyd_62037[32]; // 5a60:4e03
db dummyd_62057[32]; // 5a60:4e23
db dummyd_62077[32]; // 5a60:4e43
db dummyd_62097[32]; // 5a60:4e63
db dummyd_620b7[32]; // 5a60:4e83
db dummyd_620d7[32]; // 5a60:4ea3
db dummyd_620f7[32]; // 5a60:4ec3
db dummyd_62117[32]; // 5a60:4ee3
db dummyd_62137[32]; // 5a60:4f03
db dummyd_62157[32]; // 5a60:4f23
db dummyd_62177[32]; // 5a60:4f43
db dummyd_62197[32]; // 5a60:4f63
db dummyd_621b7[32]; // 5a60:4f83
db dummyd_621d7[32]; // 5a60:4fa3
db dummyd_621f7[32]; // 5a60:4fc3
db dummyd_62217[32]; // 5a60:4fe3
db dummyd_62237[32]; // 5a60:5003
db dummyd_62257[32]; // 5a60:5023
db dummyd_62277[32]; // 5a60:5043
db dummyd_62297; // 5a60:5063
db dummyd_62298; // 5a60:5064
db dummyd_62299;
db dummyd_6229a; // 5a60:5066
db dummyd_6229b;
db dummyd_6229c; // 5a60:5068
db dummyd_6229d;
db dummyd_6229e; // 5a60:506a
db dummyd_6229f; // 5a60:506b
db dummyd_622a0; // 5a60:506c
db dummyd_622a1; // 5a60:506d
db dummyd_622a2;
db dummyd_622a3;
db dummyd_622a4; // 5a60:5070
db dummyd_622a5; // 5a60:5071
db dummyd_622a6; // 5a60:5072
db dummyd_622a7; // 5a60:5073
db dummyd_622a8; // 5a60:5074
db dummyd_622a9;
db dummyd_622aa; // 5a60:5076
db dummyd_622ab;
db dummyd_622ac; // 5a60:5078
db dummyd_622ad; // 5a60:5079
db dummyd_622ae; // 5a60:507a
db dummyd_622af; // 5a60:507b
db dummyd_622b0;
dw dummyd_622b1; // 5a60:507d
db dummyd_622b3;
dw dummyd_622b4; // 5a60:5080
dw dummyd_622b6; // 5a60:5082
db dummyd_622b8; // 5a60:5084
db dummyd_622b9; // 5a60:5085
db dummyd_622ba; // 5a60:5086
db dummyd_622bb; // 5a60:5087
db dummyd_622bc; // 5a60:5088
db dummyd_622bd; // 5a60:5089
db dummyd_622be; // 5a60:508a
db dummyd_622bf; // 5a60:508b
db dummyd_622c0; // 5a60:508c
db dummyd_622c1; // 5a60:508d
db dummyd_622c2;
db dummyd_622c3;
db dummyd_622c4; // 5a60:5090
dd dummyd_622c5; // 5a60:5091
db dummyd_622c9;
db dummyd_622ca; // 5a60:5096
db dummyd_622cb; // 5a60:5097
db dummyd_622cc; // 5a60:5098
db dummyd_622cd; // 5a60:5099
db dummyd_622ce; // 5a60:509a
db dummyd_622cf; // 5a60:509b
db dummyd_622d0; // 5a60:509c
db dummyd_622d1; // 5a60:509d
db dummyd_622d2; // 5a60:509e
db dummyd_622d3; // 5a60:509f
db dummyd_622d4; // 5a60:50a0
db dummyd_622d5; // 5a60:50a1
db dummyd_622d6; // 5a60:50a2
db dummyd_622d7; // 5a60:50a3
db dummyd_622d8; // 5a60:50a4
db dummyd_622d9;
db dummyd_622da; // 5a60:50a6
db dummyd_622db; // 5a60:50a7
db dummyd_622dc; // 5a60:50a8
db dummyd_622dd; // 5a60:50a9
db dummyd_622de; // 5a60:50aa
db dummyd_622df; // 5a60:50ab
db dummyd_622e0; // 5a60:50ac
db dummyd_622e1; // 5a60:50ad
db dummyd_622e2; // 5a60:50ae
db dummyd_622e3; // 5a60:50af
db dummyd_622e4;
db dummyd_622e5; // 5a60:50b1
dw dummyd_622e6; // 5a60:50b2
db dummyd_622e8; // 5a60:50b4
db dummyd_622e9; // 5a60:50b5
db dummyd_622ea; // 5a60:50b6
db dummyd_622eb; // 5a60:50b7
db dummyd_622ec; // 5a60:50b8
db dummyd_622ed; // 5a60:50b9
db dummyd_622ee; // 5a60:50ba
db dummyd_622ef; // 5a60:50bb
db dummyd_622f0; // 5a60:50bc
db dummyd_622f1; // 5a60:50bd
db dummyd_622f2;
db dummyd_622f3;
db dummyd_622f4; // 5a60:50c0
db dummyd_622f5; // 5a60:50c1
dw dummyd_622f6; // 5a60:50c2
db dummyd_622f8; // 5a60:50c4
db dummyd_622f9; // 5a60:50c5
db dummyd_622fa; // 5a60:50c6
db dummyd_622fb; // 5a60:50c7
db dummyd_622fc; // 5a60:50c8
db dummyd_622fd; // 5a60:50c9
db dummyd_622fe; // 5a60:50ca
db dummyd_622ff; // 5a60:50cb
db dummyd_62300; // 5a60:50cc
db dummyd_62301; // 5a60:50cd
db dummyd_62302;
db dummyd_62303;
db dummyd_62304;
dw dummyd_62305; // 5a60:50d1
dw dummyd_62307; // 5a60:50d3
db dummyd_62309;
db dummyd_6230a; // 5a60:50d6
db dummyd_6230b; // 5a60:50d7
db dummyd_6230c; // 5a60:50d8
db dummyd_6230d; // 5a60:50d9
db dummyd_6230e; // 5a60:50da
db dummyd_6230f; // 5a60:50db
db dummyd_62310; // 5a60:50dc
db dummyd_62311; // 5a60:50dd
db dummyd_62312; // 5a60:50de
db dummyd_62313; // 5a60:50df
db dummyd_62314;
dw dummyd_62315; // 5a60:50e1
dw dummyd_62317; // 5a60:50e3
db dummyd_62319;
db dummyd_6231a; // 5a60:50e6
db dummyd_6231b; // 5a60:50e7
db dummyd_6231c; // 5a60:50e8
db dummyd_6231d; // 5a60:50e9
db dummyd_6231e; // 5a60:50ea
db dummyd_6231f; // 5a60:50eb
db dummyd_62320; // 5a60:50ec
db dummyd_62321; // 5a60:50ed
db dummyd_62322; // 5a60:50ee
db dummyd_62323; // 5a60:50ef
dd dummyd_62324; // 5a60:50f0
db dummyd_62328; // 5a60:50f4
db dummyd_62329; // 5a60:50f5
db dummyd_6232a; // 5a60:50f6
db dummyd_6232b; // 5a60:50f7
db dummyd_6232c; // 5a60:50f8
db dummyd_6232d; // 5a60:50f9
db dummyd_6232e; // 5a60:50fa
db dummyd_6232f; // 5a60:50fb
db dummyd_62330; // 5a60:50fc
db dummyd_62331; // 5a60:50fd
db dummyd_62332;
db dummyd_62333;
dd dummyd_62334; // 5a60:5100
db dummyd_62338; // 5a60:5104
db dummyd_62339; // 5a60:5105
db dummyd_6233a; // 5a60:5106
db dummyd_6233b; // 5a60:5107
db dummyd_6233c; // 5a60:5108
db dummyd_6233d; // 5a60:5109
db dummyd_6233e; // 5a60:510a
db dummyd_6233f; // 5a60:510b
db dummyd_62340;
dw dummyd_62341; // 5a60:510d
db dummyd_62343;
dw dummyd_62344; // 5a60:5110
dw dummyd_62346; // 5a60:5112
db dummyd_62348; // 5a60:5114
db dummyd_62349; // 5a60:5115
db dummyd_6234a; // 5a60:5116
db dummyd_6234b; // 5a60:5117
db dummyd_6234c; // 5a60:5118
db dummyd_6234d; // 5a60:5119
db dummyd_6234e; // 5a60:511a
db dummyd_6234f; // 5a60:511b
db dummyd_62350; // 5a60:511c
db dummyd_62351; // 5a60:511d
db dummyd_62352;
db dummyd_62353;
db dummyd_62354;
dw dummyd_62355; // 5a60:5121
dw dummyd_62357; // 5a60:5123
db dummyd_62359;
db dummyd_6235a; // 5a60:5126
db dummyd_6235b; // 5a60:5127
db dummyd_6235c; // 5a60:5128
db dummyd_6235d; // 5a60:5129
db dummyd_6235e; // 5a60:512a
db dummyd_6235f; // 5a60:512b
db dummyd_62360; // 5a60:512c
db dummyd_62361; // 5a60:512d
db dummyd_62362; // 5a60:512e
db dummyd_62363; // 5a60:512f
db dummyd_62364;
dw dummyd_62365; // 5a60:5131
dw dummyd_62367; // 5a60:5133
db dummyd_62369;
db dummyd_6236a; // 5a60:5136
db dummyd_6236b; // 5a60:5137
db dummyd_6236c; // 5a60:5138
db dummyd_6236d; // 5a60:5139
db dummyd_6236e; // 5a60:513a
db dummyd_6236f; // 5a60:513b
db dummyd_62370; // 5a60:513c
db dummyd_62371; // 5a60:513d
db dummyd_62372; // 5a60:513e
db dummyd_62373; // 5a60:513f
dd dummyd_62374; // 5a60:5140
db dummyd_62378; // 5a60:5144
db dummyd_62379; // 5a60:5145
db dummyd_6237a; // 5a60:5146
db dummyd_6237b; // 5a60:5147
db dummyd_6237c; // 5a60:5148
db dummyd_6237d; // 5a60:5149
db dummyd_6237e; // 5a60:514a
db dummyd_6237f; // 5a60:514b
db dummyd_62380;
dw dummyd_62381; // 5a60:514d
db dummyd_62383;
dw dummyd_62384; // 5a60:5150
dw dummyd_62386; // 5a60:5152
db dummyd_62388; // 5a60:5154
db dummyd_62389; // 5a60:5155
db dummyd_6238a; // 5a60:5156
db dummyd_6238b; // 5a60:5157
db dummyd_6238c; // 5a60:5158
db dummyd_6238d; // 5a60:5159
db dummyd_6238e; // 5a60:515a
db dummyd_6238f; // 5a60:515b
db dummyd_62390; // 5a60:515c
db dummyd_62391; // 5a60:515d
db dummyd_62392;
db dummyd_62393;
dd dummyd_62394; // 5a60:5160
db dummyd_62398; // 5a60:5164
db dummyd_62399; // 5a60:5165
db dummyd_6239a; // 5a60:5166
db dummyd_6239b; // 5a60:5167
db dummyd_6239c; // 5a60:5168
db dummyd_6239d; // 5a60:5169
db dummyd_6239e; // 5a60:516a
db dummyd_6239f; // 5a60:516b
db dummyd_623a0;
dw dummyd_623a1; // 5a60:516d
db dummyd_623a3;
db dummyd_623a4;
dw dummyd_623a5; // 5a60:5171
dw dummyd_623a7; // 5a60:5173
db dummyd_623a9;
db dummyd_623aa; // 5a60:5176
db dummyd_623ab; // 5a60:5177
db dummyd_623ac; // 5a60:5178
db dummyd_623ad; // 5a60:5179
db dummyd_623ae; // 5a60:517a
db dummyd_623af; // 5a60:517b
db dummyd_623b0; // 5a60:517c
db dummyd_623b1; // 5a60:517d
db dummyd_623b2; // 5a60:517e
db dummyd_623b3; // 5a60:517f
db dummyd_623b4;
dw dummyd_623b5; // 5a60:5181
dw dummyd_623b7; // 5a60:5183
db dummyd_623b9;
db dummyd_623ba; // 5a60:5186
db dummyd_623bb; // 5a60:5187
db dummyd_623bc; // 5a60:5188
db dummyd_623bd; // 5a60:5189
db dummyd_623be; // 5a60:518a
db dummyd_623bf; // 5a60:518b
db dummyd_623c0; // 5a60:518c
db dummyd_623c1; // 5a60:518d
db dummyd_623c2; // 5a60:518e
db dummyd_623c3; // 5a60:518f
dd dummyd_623c4; // 5a60:5190
db dummyd_623c8; // 5a60:5194
db dummyd_623c9; // 5a60:5195
db dummyd_623ca; // 5a60:5196
db dummyd_623cb; // 5a60:5197
db dummyd_623cc; // 5a60:5198
db dummyd_623cd; // 5a60:5199
db dummyd_623ce; // 5a60:519a
db dummyd_623cf; // 5a60:519b
db dummyd_623d0;
dw dummyd_623d1; // 5a60:519d
db dummyd_623d3;
dw dummyd_623d4; // 5a60:51a0
dw dummyd_623d6; // 5a60:51a2
db dummyd_623d8; // 5a60:51a4
db dummyd_623d9; // 5a60:51a5
db dummyd_623da; // 5a60:51a6
db dummyd_623db; // 5a60:51a7
db dummyd_623dc; // 5a60:51a8
db dummyd_623dd; // 5a60:51a9
db dummyd_623de; // 5a60:51aa
db dummyd_623df; // 5a60:51ab
db dummyd_623e0; // 5a60:51ac
db dummyd_623e1; // 5a60:51ad
db dummyd_623e2;
db dummyd_623e3;
dd dummyd_623e4; // 5a60:51b0
db dummyd_623e8; // 5a60:51b4
db dummyd_623e9; // 5a60:51b5
db dummyd_623ea; // 5a60:51b6
db dummyd_623eb; // 5a60:51b7
db dummyd_623ec; // 5a60:51b8
db dummyd_623ed; // 5a60:51b9
db dummyd_623ee; // 5a60:51ba
db dummyd_623ef; // 5a60:51bb
db dummyd_623f0; // 5a60:51bc
db dummyd_623f1; // 5a60:51bd
db dummyd_623f2;
db dummyd_623f3;
dd dummyd_623f4; // 5a60:51c0
db dummyd_623f8; // 5a60:51c4
db dummyd_623f9; // 5a60:51c5
db dummyd_623fa; // 5a60:51c6
db dummyd_623fb; // 5a60:51c7
db dummyd_623fc; // 5a60:51c8
db dummyd_623fd; // 5a60:51c9
db dummyd_623fe; // 5a60:51ca
db dummyd_623ff; // 5a60:51cb
db dummyd_62400;
dw dummyd_62401; // 5a60:51cd
db dummyd_62403;
db dummyd_62404;
dw dummyd_62405; // 5a60:51d1
dw dummyd_62407; // 5a60:51d3
db dummyd_62409;
db dummyd_6240a; // 5a60:51d6
db dummyd_6240b; // 5a60:51d7
db dummyd_6240c; // 5a60:51d8
db dummyd_6240d; // 5a60:51d9
db dummyd_6240e; // 5a60:51da
db dummyd_6240f; // 5a60:51db
db dummyd_62410; // 5a60:51dc
db dummyd_62411; // 5a60:51dd
db dummyd_62412; // 5a60:51de
db dummyd_62413; // 5a60:51df
dd dummyd_62414; // 5a60:51e0
db dummyd_62418; // 5a60:51e4
db dummyd_62419; // 5a60:51e5
db dummyd_6241a; // 5a60:51e6
db dummyd_6241b; // 5a60:51e7
db dummyd_6241c; // 5a60:51e8
db dummyd_6241d; // 5a60:51e9
db dummyd_6241e; // 5a60:51ea
db dummyd_6241f; // 5a60:51eb
db dummyd_62420;
dw dummyd_62421; // 5a60:51ed
db dummyd_62423;
dw dummyd_62424; // 5a60:51f0
dw dummyd_62426; // 5a60:51f2
db dummyd_62428; // 5a60:51f4
db dummyd_62429; // 5a60:51f5
db dummyd_6242a; // 5a60:51f6
db dummyd_6242b; // 5a60:51f7
db dummyd_6242c; // 5a60:51f8
db dummyd_6242d; // 5a60:51f9
db dummyd_6242e; // 5a60:51fa
db dummyd_6242f; // 5a60:51fb
db dummyd_62430; // 5a60:51fc
db dummyd_62431; // 5a60:51fd
db dummyd_62432;
db dummyd_62433;
dd dummyd_62434; // 5a60:5200
db dummyd_62438; // 5a60:5204
db dummyd_62439; // 5a60:5205
db dummyd_6243a; // 5a60:5206
db dummyd_6243b; // 5a60:5207
db dummyd_6243c; // 5a60:5208
db dummyd_6243d; // 5a60:5209
db dummyd_6243e; // 5a60:520a
db dummyd_6243f; // 5a60:520b
db dummyd_62440;
dw dummyd_62441; // 5a60:520d
db dummyd_62443;
dw dummyd_62444; // 5a60:5210
dw dummyd_62446; // 5a60:5212
db dummyd_62448; // 5a60:5214
db dummyd_62449; // 5a60:5215
db dummyd_6244a; // 5a60:5216
db dummyd_6244b; // 5a60:5217
db dummyd_6244c; // 5a60:5218
db dummyd_6244d; // 5a60:5219
db dummyd_6244e; // 5a60:521a
db dummyd_6244f; // 5a60:521b
db dummyd_62450;
dw dummyd_62451; // 5a60:521d
db dummyd_62453;
db dummyd_62454;
dw dummyd_62455; // 5a60:5221
dw dummyd_62457; // 5a60:5223
db dummyd_62459;
db dummyd_6245a; // 5a60:5226
db dummyd_6245b; // 5a60:5227
db dummyd_6245c; // 5a60:5228
db dummyd_6245d; // 5a60:5229
db dummyd_6245e; // 5a60:522a
db dummyd_6245f; // 5a60:522b
db dummyd_62460; // 5a60:522c
db dummyd_62461; // 5a60:522d
db dummyd_62462; // 5a60:522e
db dummyd_62463; // 5a60:522f
dd dummyd_62464; // 5a60:5230
db dummyd_62468; // 5a60:5234
db dummyd_62469; // 5a60:5235
db dummyd_6246a; // 5a60:5236
db dummyd_6246b; // 5a60:5237
db dummyd_6246c; // 5a60:5238
db dummyd_6246d; // 5a60:5239
db dummyd_6246e; // 5a60:523a
db dummyd_6246f; // 5a60:523b
db dummyd_62470; // 5a60:523c
db dummyd_62471; // 5a60:523d
db dummyd_62472;
db dummyd_62473;
dd dummyd_62474; // 5a60:5240
db dummyd_62478; // 5a60:5244
db dummyd_62479; // 5a60:5245
db dummyd_6247a; // 5a60:5246
db dummyd_6247b; // 5a60:5247
db dummyd_6247c; // 5a60:5248
db dummyd_6247d; // 5a60:5249
db dummyd_6247e; // 5a60:524a
db dummyd_6247f; // 5a60:524b
db dummyd_62480;
dw dummyd_62481; // 5a60:524d
db dummyd_62483;
dw dummyd_62484; // 5a60:5250
dw dummyd_62486; // 5a60:5252
db dummyd_62488; // 5a60:5254
db dummyd_62489; // 5a60:5255
db dummyd_6248a; // 5a60:5256
db dummyd_6248b; // 5a60:5257
db dummyd_6248c; // 5a60:5258
db dummyd_6248d; // 5a60:5259
db dummyd_6248e; // 5a60:525a
db dummyd_6248f; // 5a60:525b
db dummyd_62490; // 5a60:525c
db dummyd_62491; // 5a60:525d
db dummyd_62492;
db dummyd_62493;
dd dummyd_62494; // 5a60:5260
db dummyd_62498; // 5a60:5264
db dummyd_62499; // 5a60:5265
db dummyd_6249a; // 5a60:5266
db dummyd_6249b; // 5a60:5267
db dummyd_6249c; // 5a60:5268
db dummyd_6249d; // 5a60:5269
db dummyd_6249e; // 5a60:526a
db dummyd_6249f; // 5a60:526b
db dummyd_624a0;
dw dummyd_624a1; // 5a60:526d
db dummyd_624a3;
dw dummyd_624a4; // 5a60:5270
dw dummyd_624a6; // 5a60:5272
db dummyd_624a8[32]; // 5a60:5274
db dummyd_624c8[32]; // 5a60:5294
db dummyd_624e8[32]; // 5a60:52b4
db dummyd_62508[32]; // 5a60:52d4
db dummyd_62528[32]; // 5a60:52f4
db dummyd_62548[32]; // 5a60:5314
db dummyd_62568[32]; // 5a60:5334
db dummyd_62588[32]; // 5a60:5354
db dummyd_625a8[32]; // 5a60:5374
db dummyd_625c8[32]; // 5a60:5394
db dummyd_625e8[32]; // 5a60:53b4
db dummyd_62608[32]; // 5a60:53d4
db dummyd_62628[32]; // 5a60:53f4
db dummyd_62648[32]; // 5a60:5414
db dummyd_62668[32]; // 5a60:5434
db dummyd_62688[32]; // 5a60:5454
db dummyd_626a8[32]; // 5a60:5474
db dummyd_626c8[32]; // 5a60:5494
db dummyd_626e8[32]; // 5a60:54b4
db dummyd_62708[32]; // 5a60:54d4
db dummyd_62728[32]; // 5a60:54f4
db dummyd_62748[32]; // 5a60:5514
db dummyd_62768[32]; // 5a60:5534
db dummyd_62788[32]; // 5a60:5554
db dummyd_627a8[32]; // 5a60:5574
db dummyd_627c8[32]; // 5a60:5594
db dummyd_627e8[32]; // 5a60:55b4
db dummyd_62808[32]; // 5a60:55d4
db dummyd_62828[32]; // 5a60:55f4
db dummyd_62848[32]; // 5a60:5614
db dummyd_62868[32]; // 5a60:5634
db dummyd_62888[32]; // 5a60:5654
db dummyd_628a8[32]; // 5a60:5674
db dummyd_628c8[32]; // 5a60:5694
db dummyd_628e8[32]; // 5a60:56b4
db dummyd_62908[32]; // 5a60:56d4
db dummyd_62928[32]; // 5a60:56f4
db dummyd_62948[32]; // 5a60:5714
db dummyd_62968[32]; // 5a60:5734
db dummyd_62988[32]; // 5a60:5754
db dummyd_629a8[32]; // 5a60:5774
db dummyd_629c8[32]; // 5a60:5794
db dummyd_629e8[32]; // 5a60:57b4
db dummyd_62a08[32]; // 5a60:57d4
db dummyd_62a28[32]; // 5a60:57f4
db dummyd_62a48[32]; // 5a60:5814
db dummyd_62a68[32]; // 5a60:5834
db dummyd_62a88[32]; // 5a60:5854
db dummyd_62aa8[32]; // 5a60:5874
db dummyd_62ac8[32]; // 5a60:5894
db dummyd_62ae8[32]; // 5a60:58b4
db dummyd_62b08[32]; // 5a60:58d4
db dummyd_62b28[32]; // 5a60:58f4
db dummyd_62b48[32]; // 5a60:5914
db dummyd_62b68[32]; // 5a60:5934
db dummyd_62b88[32]; // 5a60:5954
db dummyd_62ba8[32]; // 5a60:5974
db dummyd_62bc8[32]; // 5a60:5994
db dummyd_62be8[32]; // 5a60:59b4
db dummyd_62c08[32]; // 5a60:59d4
db dummyd_62c28[32]; // 5a60:59f4
db dummyd_62c48[32]; // 5a60:5a14
db dummyd_62c68[32]; // 5a60:5a34
db dummyd_62c88[32]; // 5a60:5a54
db dummyd_62ca8[32]; // 5a60:5a74
db dummyd_62cc8[32]; // 5a60:5a94
db dummyd_62ce8[32]; // 5a60:5ab4
db dummyd_62d08[32]; // 5a60:5ad4
db dummyd_62d28[32]; // 5a60:5af4
db dummyd_62d48[32]; // 5a60:5b14
db dummyd_62d68[32]; // 5a60:5b34
db dummyd_62d88[32]; // 5a60:5b54
db dummyd_62da8[32]; // 5a60:5b74
db dummyd_62dc8[32]; // 5a60:5b94
db dummyd_62de8[32]; // 5a60:5bb4
db dummyd_62e08[32]; // 5a60:5bd4
db dummyd_62e28[32]; // 5a60:5bf4
db dummyd_62e48[32]; // 5a60:5c14
db dummyd_62e68[32]; // 5a60:5c34
db dummyd_62e88[32]; // 5a60:5c54
db dummyd_62ea8[32]; // 5a60:5c74
db dummyd_62ec8[32]; // 5a60:5c94
db dummyd_62ee8[32]; // 5a60:5cb4
db dummyd_62f08[32]; // 5a60:5cd4
db dummyd_62f28[32]; // 5a60:5cf4
db dummyd_62f48[32]; // 5a60:5d14
db dummyd_62f68[32]; // 5a60:5d34
db dummyd_62f88[32]; // 5a60:5d54
db dummyd_62fa8[32]; // 5a60:5d74
db dummyd_62fc8[32]; // 5a60:5d94
db dummyd_62fe8[32]; // 5a60:5db4
db dummyd_63008[32]; // 5a60:5dd4
db dummyd_63028[32]; // 5a60:5df4
db dummyd_63048[32]; // 5a60:5e14
db dummyd_63068[32]; // 5a60:5e34
db dummyd_63088[32]; // 5a60:5e54
db dummyd_630a8[32]; // 5a60:5e74
db dummyd_630c8[32]; // 5a60:5e94
db dummyd_630e8[32]; // 5a60:5eb4
db dummyd_63108;
db dummyd_63109;
db dummyd_6310a;
db dummyd_6310b;
db dummyd_6310c;
db dummyd_6310d;
db dummyd_6310e;
db dummyd_6310f;
db dummyd_63110;
db dummyd_63111;
db dummyd_63112;
db dummyd_63113;
db dummyd_63114; // 5a60:5ee0
db dummyd_63115; // 5a60:5ee1
db dummyd_63116; // 5a60:5ee2
db dummyd_63117;
dw dummyd_63118; // 5a60:5ee4
db dummyd_6311a[32]; // 5a60:5ee6
db dummyd_6313a;
db dummyd_6313b;
db dummyd_6313c;
db dummyd_6313d;
db dummyd_6313e;
db dummyd_6313f;
db dummyd_63140;
db dummyd_63141;
db dummyd_63142;
db dummyd_63143;
db dummyd_63144;
db dummyd_63145;
db dummyd_63146; // 5a60:5f12
db dummyd_63147; // 5a60:5f13
db dummyd_63148; // 5a60:5f14
db dummyd_63149; // 5a60:5f15
dw dummyd_6314a; // 5a60:5f16
db dummyd_6314c[32]; // 5a60:5f18
db dummyd_6316c[32]; // 5a60:5f38
db dummyd_6318c[32]; // 5a60:5f58
db dummyd_631ac[32]; // 5a60:5f78
db dummyd_631cc[32]; // 5a60:5f98
db dummyd_631ec[32]; // 5a60:5fb8
db dummyd_6320c[32]; // 5a60:5fd8
db dummyd_6322c[32]; // 5a60:5ff8
db dummyd_6324c[32]; // 5a60:6018
db dummyd_6326c[32]; // 5a60:6038
db dummyd_6328c[32]; // 5a60:6058
db dummyd_632ac[32]; // 5a60:6078
db dummyd_632cc[32]; // 5a60:6098
db dummyd_632ec[32]; // 5a60:60b8
db dummyd_6330c[32]; // 5a60:60d8
db dummyd_6332c[32]; // 5a60:60f8
db dummyd_6334c[32]; // 5a60:6118
db dummyd_6336c[32]; // 5a60:6138
db dummyd_6338c[32]; // 5a60:6158
db dummyd_633ac[32]; // 5a60:6178
db dummyd_633cc[32]; // 5a60:6198
db dummyd_633ec[32]; // 5a60:61b8
db dummyd_6340c[32]; // 5a60:61d8
db dummyd_6342c[32]; // 5a60:61f8
db dummyd_6344c[32]; // 5a60:6218
db dummyd_6346c[32]; // 5a60:6238
db dummyd_6348c[32]; // 5a60:6258
db dummyd_634ac[32]; // 5a60:6278
db dummyd_634cc[32]; // 5a60:6298
db dummyd_634ec[32]; // 5a60:62b8
db dummyd_6350c[32]; // 5a60:62d8
db dummyd_6352c[32]; // 5a60:62f8
db dummyd_6354c[32]; // 5a60:6318
db dummyd_6356c[32]; // 5a60:6338
db dummyd_6358c[32]; // 5a60:6358
db dummyd_635ac[32]; // 5a60:6378
db dummyd_635cc[32]; // 5a60:6398
db dummyd_635ec[32]; // 5a60:63b8
db dummyd_6360c[32]; // 5a60:63d8
db dummyd_6362c[32]; // 5a60:63f8
db dummyd_6364c[32]; // 5a60:6418
db dummyd_6366c[32]; // 5a60:6438
db dummyd_6368c[32]; // 5a60:6458
db dummyd_636ac[32]; // 5a60:6478
db dummyd_636cc[32]; // 5a60:6498
db dummyd_636ec[32]; // 5a60:64b8
db dummyd_6370c[32]; // 5a60:64d8
db dummyd_6372c[32]; // 5a60:64f8
db dummyd_6374c[32]; // 5a60:6518
db dummyd_6376c[32]; // 5a60:6538
db dummyd_6378c[32]; // 5a60:6558
db dummyd_637ac[32]; // 5a60:6578
db dummyd_637cc[32]; // 5a60:6598
db dummyd_637ec[32]; // 5a60:65b8
db dummyd_6380c[32]; // 5a60:65d8
db dummyd_6382c[32]; // 5a60:65f8
db dummyd_6384c[32]; // 5a60:6618
db dummyd_6386c[32]; // 5a60:6638
db dummyd_6388c[32]; // 5a60:6658
db dummyd_638ac[32]; // 5a60:6678
db dummyd_638cc[32]; // 5a60:6698
db dummyd_638ec[32]; // 5a60:66b8
db dummyd_6390c[32]; // 5a60:66d8
db dummyd_6392c[32]; // 5a60:66f8
db dummyd_6394c[32]; // 5a60:6718
db dummyd_6396c[32]; // 5a60:6738
db dummyd_6398c[32]; // 5a60:6758
db dummyd_639ac[32]; // 5a60:6778
db dummyd_639cc[32]; // 5a60:6798
db dummyd_639ec[32]; // 5a60:67b8
db dummyd_63a0c[32]; // 5a60:67d8
db dummyd_63a2c[32]; // 5a60:67f8
db dummyd_63a4c[32]; // 5a60:6818
db dummyd_63a6c[32]; // 5a60:6838
db dummyd_63a8c[32]; // 5a60:6858
db dummyd_63aac[32]; // 5a60:6878
db dummyd_63acc[32]; // 5a60:6898
db dummyd_63aec[32]; // 5a60:68b8
db dummyd_63b0c[32]; // 5a60:68d8
db dummyd_63b2c[32]; // 5a60:68f8
db dummyd_63b4c[32]; // 5a60:6918
db dummyd_63b6c[32]; // 5a60:6938
db dummyd_63b8c[32]; // 5a60:6958
db dummyd_63bac[32]; // 5a60:6978
db dummyd_63bcc[32]; // 5a60:6998
db dummyd_63bec[32]; // 5a60:69b8
db dummyd_63c0c[32]; // 5a60:69d8
db dummyd_63c2c[32]; // 5a60:69f8
db dummyd_63c4c[32]; // 5a60:6a18
db dummyd_63c6c[32]; // 5a60:6a38
db dummyd_63c8c[32]; // 5a60:6a58
db dummyd_63cac[32]; // 5a60:6a78
db dummyd_63ccc[32]; // 5a60:6a98
db dummyd_63cec[32]; // 5a60:6ab8
db dummyd_63d0c[32]; // 5a60:6ad8
db dummyd_63d2c[32]; // 5a60:6af8
db dummyd_63d4c[32]; // 5a60:6b18
db dummyd_63d6c[32]; // 5a60:6b38
db dummyd_63d8c[32]; // 5a60:6b58
db dummyd_63dac[32]; // 5a60:6b78
db dummyd_63dcc[32]; // 5a60:6b98
db dummyd_63dec[32]; // 5a60:6bb8
db dummyd_63e0c[32]; // 5a60:6bd8
db dummyd_63e2c[32]; // 5a60:6bf8
db dummyd_63e4c[32]; // 5a60:6c18
db dummyd_63e6c[32]; // 5a60:6c38
db dummyd_63e8c[32]; // 5a60:6c58
db dummyd_63eac[32]; // 5a60:6c78
db dummyd_63ecc[32]; // 5a60:6c98
db dummyd_63eec[32]; // 5a60:6cb8
db dummyd_63f0c[32]; // 5a60:6cd8
db dummyd_63f2c[32]; // 5a60:6cf8
db dummyd_63f4c[32]; // 5a60:6d18
db dummyd_63f6c[32]; // 5a60:6d38
db dummyd_63f8c[32]; // 5a60:6d58
db dummyd_63fac[32]; // 5a60:6d78
db dummyd_63fcc[32]; // 5a60:6d98
db dummyd_63fec[32]; // 5a60:6db8
db dummyd_6400c[32]; // 5a60:6dd8
db dummyd_6402c[32]; // 5a60:6df8
db dummyd_6404c[32]; // 5a60:6e18
db dummyd_6406c[32]; // 5a60:6e38
db dummyd_6408c[32]; // 5a60:6e58
db dummyd_640ac[32]; // 5a60:6e78
db dummyd_640cc[32]; // 5a60:6e98
db dummyd_640ec[32]; // 5a60:6eb8
db dummyd_6410c[32]; // 5a60:6ed8
db dummyd_6412c[32]; // 5a60:6ef8
db dummyd_6414c[32]; // 5a60:6f18
db dummyd_6416c[32]; // 5a60:6f38
db dummyd_6418c[32]; // 5a60:6f58
db dummyd_641ac[32]; // 5a60:6f78
db dummyd_641cc[32]; // 5a60:6f98
db dummyd_641ec[32]; // 5a60:6fb8
db dummyd_6420c[32]; // 5a60:6fd8
db dummyd_6422c;
db dummyd_6422d;
db dummyd_6422e;
db dummyd_6422f;
db dummyd_64230;
db dummyd_64231;
db dummyd_64232;
db dummyd_64233;
db dummyd_64234[32]; // 5ca2:0000
db dummyd_64254[32]; // 5ca2:0020
db dummyd_64274[32]; // 5ca2:0040
db dummyd_64294[32]; // 5ca2:0060
db dummyd_642b4[32]; // 5ca2:0080
db dummyd_642d4[32]; // 5ca2:00a0
db dummyd_642f4[32]; // 5ca2:00c0
db dummyd_64314[32]; // 5ca2:00e0
db dummyd_64334[32]; // 5ca2:0100
db dummyd_64354[32]; // 5ca2:0120
db dummyd_64374[32]; // 5ca2:0140
db dummyd_64394[32]; // 5ca2:0160
db dummyd_643b4[32]; // 5ca2:0180
db dummyd_643d4[32]; // 5ca2:01a0
db dummyd_643f4[32]; // 5ca2:01c0
db dummyd_64414[32]; // 5ca2:01e0
db dummyd_64434[32]; // 5ca2:0200
db dummyd_64454[32]; // 5ca2:0220
db dummyd_64474[32]; // 5ca2:0240
db dummyd_64494[32]; // 5ca2:0260
db dummyd_644b4[32]; // 5ca2:0280
db dummyd_644d4[32]; // 5ca2:02a0
db dummyd_644f4[32]; // 5ca2:02c0
db dummyd_64514[32]; // 5ca2:02e0
db dummyd_64534[32]; // 5ca2:0300
db dummyd_64554[32]; // 5ca2:0320
db dummyd_64574[32]; // 5ca2:0340
db dummyd_64594[32]; // 5ca2:0360
db dummyd_645b4[32]; // 5ca2:0380
db dummyd_645d4[32]; // 5ca2:03a0
db dummyd_645f4[32]; // 5ca2:03c0
db dummyd_64614[32]; // 5ca2:03e0
db dummyd_64634[32]; // 5ca2:0400
db dummyd_64654[32]; // 5ca2:0420
db dummyd_64674[32]; // 5ca2:0440
db dummyd_64694[32]; // 5ca2:0460
db dummyd_646b4[32]; // 5ca2:0480
db dummyd_646d4[32]; // 5ca2:04a0
db dummyd_646f4[32]; // 5ca2:04c0
db dummyd_64714[32]; // 5ca2:04e0
db dummyd_64734[32]; // 5ca2:0500
db dummyd_64754[32]; // 5ca2:0520
db dummyd_64774[32]; // 5ca2:0540
db dummyd_64794[32]; // 5ca2:0560
db dummyd_647b4[32]; // 5ca2:0580
db dummyd_647d4[32]; // 5ca2:05a0
db dummyd_647f4[32]; // 5ca2:05c0
db dummyd_64814[32]; // 5ca2:05e0
db dummyd_64834[32]; // 5ca2:0600
db dummyd_64854[32]; // 5ca2:0620
db dummyd_64874[32]; // 5ca2:0640
db dummyd_64894[32]; // 5ca2:0660
db dummyd_648b4[32]; // 5ca2:0680
db dummyd_648d4[32]; // 5ca2:06a0
db dummyd_648f4[32]; // 5ca2:06c0
db dummyd_64914[32]; // 5ca2:06e0
db dummyd_64934[32]; // 5ca2:0700
db dummyd_64954[32]; // 5ca2:0720
db dummyd_64974[32]; // 5ca2:0740
db dummyd_64994[32]; // 5ca2:0760
db dummyd_649b4[32]; // 5ca2:0780
db dummyd_649d4[32]; // 5ca2:07a0
db dummyd_649f4[32]; // 5ca2:07c0
db dummyd_64a14[32]; // 5ca2:07e0
db dummyd_64a34[32]; // 5ca2:0800
db dummyd_64a54[32]; // 5ca2:0820
db dummyd_64a74[32]; // 5ca2:0840
db dummyd_64a94[32]; // 5ca2:0860
db dummyd_64ab4[32]; // 5ca2:0880
db dummyd_64ad4[32]; // 5ca2:08a0
db dummyd_64af4[32]; // 5ca2:08c0
db dummyd_64b14[32]; // 5ca2:08e0
db dummyd_64b34[32]; // 5ca2:0900
db dummyd_64b54[32]; // 5ca2:0920
db dummyd_64b74[32]; // 5ca2:0940
db dummyd_64b94[32]; // 5ca2:0960
db dummyd_64bb4[32]; // 5ca2:0980
db dummyd_64bd4[32]; // 5ca2:09a0
db dummyd_64bf4[32]; // 5ca2:09c0
db dummyd_64c14[32]; // 5ca2:09e0
db dummyd_64c34[32]; // 5ca2:0a00
db dummyd_64c54[32]; // 5ca2:0a20
db dummyd_64c74[32]; // 5ca2:0a40
db dummyd_64c94[32]; // 5ca2:0a60
db dummyd_64cb4[32]; // 5ca2:0a80
db dummyd_64cd4[32]; // 5ca2:0aa0
db dummyd_64cf4[32]; // 5ca2:0ac0
db dummyd_64d14[32]; // 5ca2:0ae0
db dummyd_64d34[32]; // 5ca2:0b00
db dummyd_64d54[32]; // 5ca2:0b20
db dummyd_64d74[32]; // 5ca2:0b40
db dummyd_64d94[32]; // 5ca2:0b60
db dummyd_64db4[32]; // 5ca2:0b80
db dummyd_64dd4[32]; // 5ca2:0ba0
db dummyd_64df4[32]; // 5ca2:0bc0
db dummyd_64e14[32]; // 5ca2:0be0
db dummyd_64e34[32]; // 5ca2:0c00
db dummyd_64e54[32]; // 5ca2:0c20
db dummyd_64e74[32]; // 5ca2:0c40
db dummyd_64e94[32]; // 5ca2:0c60
db dummyd_64eb4[32]; // 5ca2:0c80
db dummyd_64ed4[32]; // 5ca2:0ca0
db dummyd_64ef4[32]; // 5ca2:0cc0
db dummyd_64f14[32]; // 5ca2:0ce0
db dummyd_64f34[32]; // 5ca2:0d00
db dummyd_64f54[32]; // 5ca2:0d20
db dummyd_64f74[32]; // 5ca2:0d40
db dummyd_64f94[32]; // 5ca2:0d60
db dummyd_64fb4[32]; // 5ca2:0d80
db dummyd_64fd4[32]; // 5ca2:0da0
db dummyd_64ff4[32]; // 5ca2:0dc0
db dummyd_65014[32]; // 5ca2:0de0
db dummyd_65034[32]; // 5ca2:0e00
db dummyd_65054[32]; // 5ca2:0e20
db dummyd_65074[32]; // 5ca2:0e40
db dummyd_65094[32]; // 5ca2:0e60
db dummyd_650b4[32]; // 5ca2:0e80
db dummyd_650d4[32]; // 5ca2:0ea0
db dummyd_650f4[32]; // 5ca2:0ec0
db dummyd_65114[32]; // 5ca2:0ee0
db dummyd_65134[32]; // 5ca2:0f00
db dummyd_65154[32]; // 5ca2:0f20
db dummyd_65174[32]; // 5ca2:0f40
db dummyd_65194[32]; // 5ca2:0f60
db dummyd_651b4[32]; // 5ca2:0f80
db dummyd_651d4[32]; // 5ca2:0fa0
db dummyd_651f4[32]; // 5ca2:0fc0
db dummyd_65214[32]; // 5ca2:0fe0
db dummyd_65234[32]; // 5ca2:1000
db dummyd_65254[32]; // 5ca2:1020
db dummyd_65274[32]; // 5ca2:1040
db dummyd_65294[32]; // 5ca2:1060
db dummyd_652b4[32]; // 5ca2:1080
db dummyd_652d4[32]; // 5ca2:10a0
db dummyd_652f4[32]; // 5ca2:10c0
db dummyd_65314[32]; // 5ca2:10e0
db dummyd_65334[32]; // 5ca2:1100
db dummyd_65354[32]; // 5ca2:1120
db dummyd_65374[32]; // 5ca2:1140
db dummyd_65394[32]; // 5ca2:1160
db dummyd_653b4[32]; // 5ca2:1180
db dummyd_653d4[32]; // 5ca2:11a0
db dummyd_653f4[32]; // 5ca2:11c0
db dummyd_65414[32]; // 5ca2:11e0
db dummyd_65434[32]; // 5ca2:1200
db dummyd_65454[32]; // 5ca2:1220
db dummyd_65474[32]; // 5ca2:1240
db dummyd_65494[32]; // 5ca2:1260
db dummyd_654b4[32]; // 5ca2:1280
db dummyd_654d4[32]; // 5ca2:12a0
db dummyd_654f4[32]; // 5ca2:12c0
db dummyd_65514[32]; // 5ca2:12e0
db dummyd_65534[32]; // 5ca2:1300
db dummyd_65554[32]; // 5ca2:1320
db dummyd_65574[32]; // 5ca2:1340
db dummyd_65594[32]; // 5ca2:1360
db dummyd_655b4[32]; // 5ca2:1380
db dummyd_655d4[32]; // 5ca2:13a0
db dummyd_655f4[32]; // 5ca2:13c0
db dummyd_65614[32]; // 5ca2:13e0
db dummyd_65634[32]; // 5ca2:1400
db dummyd_65654[32]; // 5ca2:1420
db dummyd_65674[32]; // 5ca2:1440
db dummyd_65694[32]; // 5ca2:1460
db dummyd_656b4[32]; // 5ca2:1480
db dummyd_656d4[32]; // 5ca2:14a0
db dummyd_656f4[32]; // 5ca2:14c0
db dummyd_65714[32]; // 5ca2:14e0
db dummyd_65734[32]; // 5ca2:1500
db dummyd_65754[32]; // 5ca2:1520
db dummyd_65774[32]; // 5ca2:1540
db dummyd_65794[32]; // 5ca2:1560
db dummyd_657b4[32]; // 5ca2:1580
db dummyd_657d4[32]; // 5ca2:15a0
db dummyd_657f4[32]; // 5ca2:15c0
db dummyd_65814[32]; // 5ca2:15e0
db dummyd_65834[32]; // 5ca2:1600
db dummyd_65854[32]; // 5ca2:1620
db dummyd_65874[32]; // 5ca2:1640
db dummyd_65894[32]; // 5ca2:1660
db dummyd_658b4[32]; // 5ca2:1680
db dummyd_658d4[32]; // 5ca2:16a0
db dummyd_658f4[32]; // 5ca2:16c0
db dummyd_65914[32]; // 5ca2:16e0
db dummyd_65934[32]; // 5ca2:1700
db dummyd_65954[32]; // 5ca2:1720
db dummyd_65974[32]; // 5ca2:1740
db dummyd_65994[32]; // 5ca2:1760
db dummyd_659b4[32]; // 5ca2:1780
db dummyd_659d4[32]; // 5ca2:17a0
db dummyd_659f4[32]; // 5ca2:17c0
db dummyd_65a14[32]; // 5ca2:17e0
db dummyd_65a34[32]; // 5ca2:1800
db dummyd_65a54[32]; // 5ca2:1820
db dummyd_65a74[32]; // 5ca2:1840
db dummyd_65a94[32]; // 5ca2:1860
db dummyd_65ab4[32]; // 5ca2:1880
db dummyd_65ad4[32]; // 5ca2:18a0
db dummyd_65af4[32]; // 5ca2:18c0
db dummyd_65b14[32]; // 5ca2:18e0
db dummyd_65b34[32]; // 5ca2:1900
db dummyd_65b54[32]; // 5ca2:1920
db dummyd_65b74[32]; // 5ca2:1940
db dummyd_65b94[32]; // 5ca2:1960
db dummyd_65bb4[32]; // 5ca2:1980
db dummyd_65bd4[32]; // 5ca2:19a0
db dummyd_65bf4[32]; // 5ca2:19c0
db dummyd_65c14[32]; // 5ca2:19e0
db dummyd_65c34[32]; // 5ca2:1a00
db dummyd_65c54[32]; // 5ca2:1a20
db dummyd_65c74[32]; // 5ca2:1a40
db dummyd_65c94[32]; // 5ca2:1a60
db dummyd_65cb4[32]; // 5ca2:1a80
db dummyd_65cd4[32]; // 5ca2:1aa0
db dummyd_65cf4[32]; // 5ca2:1ac0
db dummyd_65d14[32]; // 5ca2:1ae0
db dummyd_65d34[32]; // 5ca2:1b00
db dummyd_65d54[32]; // 5ca2:1b20
db dummyd_65d74[32]; // 5ca2:1b40
db dummyd_65d94[32]; // 5ca2:1b60
db dummyd_65db4[32]; // 5ca2:1b80
db dummyd_65dd4[32]; // 5ca2:1ba0
db dummyd_65df4[32]; // 5ca2:1bc0
db dummyd_65e14[32]; // 5ca2:1be0
db dummyd_65e34[32]; // 5ca2:1c00
db dummyd_65e54[32]; // 5ca2:1c20
db dummyd_65e74[32]; // 5ca2:1c40
db dummyd_65e94[32]; // 5ca2:1c60
db dummyd_65eb4[32]; // 5ca2:1c80
db dummyd_65ed4[32]; // 5ca2:1ca0
db dummyd_65ef4[32]; // 5ca2:1cc0
db dummyd_65f14[32]; // 5ca2:1ce0
db dummyd_65f34[32]; // 5ca2:1d00
db dummyd_65f54[32]; // 5ca2:1d20
db dummyd_65f74[32]; // 5ca2:1d40
db dummyd_65f94[32]; // 5ca2:1d60
db dummyd_65fb4[32]; // 5ca2:1d80
db dummyd_65fd4[32]; // 5ca2:1da0
db dummyd_65ff4[32]; // 5ca2:1dc0
db dummyd_66014[32]; // 5ca2:1de0
db dummyd_66034[32]; // 5ca2:1e00
db dummyd_66054[32]; // 5ca2:1e20
db dummyd_66074[32]; // 5ca2:1e40
db dummyd_66094[32]; // 5ca2:1e60
db dummyd_660b4[32]; // 5ca2:1e80
db dummyd_660d4[32]; // 5ca2:1ea0
db dummyd_660f4[32]; // 5ca2:1ec0
db dummyd_66114[32]; // 5ca2:1ee0
db dummyd_66134[32]; // 5ca2:1f00
db dummyd_66154[32]; // 5ca2:1f20
db dummyd_66174[32]; // 5ca2:1f40
db dummyd_66194[32]; // 5ca2:1f60
db dummyd_661b4[32]; // 5ca2:1f80
db dummyd_661d4[32]; // 5ca2:1fa0
db dummyd_661f4[32]; // 5ca2:1fc0
db dummyd_66214[32]; // 5ca2:1fe0
db dummyd_66234[32]; // 5ca2:2000
db dummyd_66254[32]; // 5ca2:2020
db dummyd_66274[32]; // 5ca2:2040
db dummyd_66294[32]; // 5ca2:2060
db dummyd_662b4[32]; // 5ca2:2080
db dummyd_662d4[32]; // 5ca2:20a0
db dummyd_662f4[32]; // 5ca2:20c0
db dummyd_66314[32]; // 5ca2:20e0
db dummyd_66334[32]; // 5ca2:2100
db dummyd_66354[32]; // 5ca2:2120
db dummyd_66374[32]; // 5ca2:2140
db dummyd_66394[32]; // 5ca2:2160
db dummyd_663b4[32]; // 5ca2:2180
db dummyd_663d4[32]; // 5ca2:21a0
db dummyd_663f4[32]; // 5ca2:21c0
db dummyd_66414[32]; // 5ca2:21e0
db dummyd_66434[32]; // 5ca2:2200
db dummyd_66454[32]; // 5ca2:2220
db dummyd_66474[32]; // 5ca2:2240
db dummyd_66494[32]; // 5ca2:2260
db dummyd_664b4[32]; // 5ca2:2280
db dummyd_664d4[32]; // 5ca2:22a0
db dummyd_664f4[32]; // 5ca2:22c0
db dummyd_66514[32]; // 5ca2:22e0
db dummyd_66534[32]; // 5ca2:2300
db dummyd_66554[32]; // 5ca2:2320
db dummyd_66574[32]; // 5ca2:2340
db dummyd_66594[32]; // 5ca2:2360
db dummyd_665b4[32]; // 5ca2:2380
db dummyd_665d4[32]; // 5ca2:23a0
db dummyd_665f4[32]; // 5ca2:23c0
db dummyd_66614[32]; // 5ca2:23e0
db dummyd_66634[32]; // 5ca2:2400
db dummyd_66654[32]; // 5ca2:2420
db dummyd_66674[32]; // 5ca2:2440
db dummyd_66694[32]; // 5ca2:2460
db dummyd_666b4[32]; // 5ca2:2480
db dummyd_666d4[32]; // 5ca2:24a0
db dummyd_666f4[32]; // 5ca2:24c0
db dummyd_66714[32]; // 5ca2:24e0
db dummyd_66734[32]; // 5ca2:2500
db dummyd_66754[32]; // 5ca2:2520
db dummyd_66774[32]; // 5ca2:2540
db dummyd_66794[32]; // 5ca2:2560
db dummyd_667b4[32]; // 5ca2:2580
db dummyd_667d4[32]; // 5ca2:25a0
db dummyd_667f4[32]; // 5ca2:25c0
db dummyd_66814[32]; // 5ca2:25e0
db dummyd_66834[32]; // 5ca2:2600
db dummyd_66854[32]; // 5ca2:2620
db dummyd_66874[32]; // 5ca2:2640
db dummyd_66894[32]; // 5ca2:2660
db dummyd_668b4[32]; // 5ca2:2680
db dummyd_668d4[32]; // 5ca2:26a0
db dummyd_668f4[32]; // 5ca2:26c0
db dummyd_66914[32]; // 5ca2:26e0
db dummyd_66934[32]; // 5ca2:2700
db dummyd_66954[32]; // 5ca2:2720
db dummyd_66974[32]; // 5ca2:2740
db dummyd_66994[32]; // 5ca2:2760
db dummyd_669b4[32]; // 5ca2:2780
db dummyd_669d4[32]; // 5ca2:27a0
db dummyd_669f4[32]; // 5ca2:27c0
db dummyd_66a14[32]; // 5ca2:27e0
db dummyd_66a34[32]; // 5ca2:2800
db dummyd_66a54[32]; // 5ca2:2820
db dummyd_66a74[32]; // 5ca2:2840
db dummyd_66a94[32]; // 5ca2:2860
db dummyd_66ab4[32]; // 5ca2:2880
db dummyd_66ad4[32]; // 5ca2:28a0
db dummyd_66af4[32]; // 5ca2:28c0
db dummyd_66b14[32]; // 5ca2:28e0
db dummyd_66b34[32]; // 5ca2:2900
db dummyd_66b54[32]; // 5ca2:2920
db dummyd_66b74[32]; // 5ca2:2940
db dummyd_66b94[32]; // 5ca2:2960
db dummyd_66bb4[32]; // 5ca2:2980
db dummyd_66bd4[32]; // 5ca2:29a0
db dummyd_66bf4[32]; // 5ca2:29c0
db dummyd_66c14[32]; // 5ca2:29e0
db dummyd_66c34[32]; // 5ca2:2a00
db dummyd_66c54[32]; // 5ca2:2a20
db dummyd_66c74[32]; // 5ca2:2a40
db dummyd_66c94[32]; // 5ca2:2a60
db dummyd_66cb4[32]; // 5ca2:2a80
db dummyd_66cd4[32]; // 5ca2:2aa0
db dummyd_66cf4[32]; // 5ca2:2ac0
db dummyd_66d14[32]; // 5ca2:2ae0
db dummyd_66d34[32]; // 5ca2:2b00
db dummyd_66d54[32]; // 5ca2:2b20
db dummyd_66d74[32]; // 5ca2:2b40
db dummyd_66d94[32]; // 5ca2:2b60
db dummyd_66db4[32]; // 5ca2:2b80
db dummyd_66dd4[32]; // 5ca2:2ba0
db dummyd_66df4[32]; // 5ca2:2bc0
db dummyd_66e14[32]; // 5ca2:2be0
db dummyd_66e34[32]; // 5ca2:2c00
db dummyd_66e54[32]; // 5ca2:2c20
db dummyd_66e74[32]; // 5ca2:2c40
db dummyd_66e94[32]; // 5ca2:2c60
db dummyd_66eb4[32]; // 5ca2:2c80
db dummyd_66ed4[32]; // 5ca2:2ca0
db dummyd_66ef4[32]; // 5ca2:2cc0
db dummyd_66f14[32]; // 5ca2:2ce0
db dummyd_66f34[32]; // 5ca2:2d00
db dummyd_66f54[32]; // 5ca2:2d20
db dummyd_66f74[32]; // 5ca2:2d40
db dummyd_66f94[32]; // 5ca2:2d60
db dummyd_66fb4[32]; // 5ca2:2d80
db dummyd_66fd4[32]; // 5ca2:2da0
db dummyd_66ff4[32]; // 5ca2:2dc0
db dummyd_67014[32]; // 5ca2:2de0
db dummyd_67034[32]; // 5ca2:2e00
db dummyd_67054[32]; // 5ca2:2e20
db dummyd_67074[32]; // 5ca2:2e40
db dummyd_67094[32]; // 5ca2:2e60
db dummyd_670b4[32]; // 5ca2:2e80
db dummyd_670d4[32]; // 5ca2:2ea0
db dummyd_670f4[32]; // 5ca2:2ec0
db dummyd_67114[32]; // 5ca2:2ee0
db dummyd_67134[32]; // 5ca2:2f00
db dummyd_67154[32]; // 5ca2:2f20
db dummyd_67174[32]; // 5ca2:2f40
db dummyd_67194[32]; // 5ca2:2f60
db dummyd_671b4[32]; // 5ca2:2f80
db dummyd_671d4[32]; // 5ca2:2fa0
db dummyd_671f4[32]; // 5ca2:2fc0
db dummyd_67214[32]; // 5ca2:2fe0
db dummyd_67234[32]; // 5ca2:3000
db dummyd_67254[32]; // 5ca2:3020
db dummyd_67274[32]; // 5ca2:3040
db dummyd_67294[32]; // 5ca2:3060
db dummyd_672b4[32]; // 5ca2:3080
db dummyd_672d4[32]; // 5ca2:30a0
db dummyd_672f4[32]; // 5ca2:30c0
db dummyd_67314[32]; // 5ca2:30e0
db dummyd_67334[32]; // 5ca2:3100
db dummyd_67354[32]; // 5ca2:3120
db dummyd_67374[32]; // 5ca2:3140
db dummyd_67394[32]; // 5ca2:3160
db dummyd_673b4[32]; // 5ca2:3180
db dummyd_673d4[32]; // 5ca2:31a0
db dummyd_673f4[32]; // 5ca2:31c0
db dummyd_67414[32]; // 5ca2:31e0
db dummyd_67434[32]; // 5ca2:3200
db dummyd_67454[32]; // 5ca2:3220
db dummyd_67474[32]; // 5ca2:3240
db dummyd_67494[32]; // 5ca2:3260
db dummyd_674b4[32]; // 5ca2:3280
db dummyd_674d4[32]; // 5ca2:32a0
db dummyd_674f4[32]; // 5ca2:32c0
db dummyd_67514[32]; // 5ca2:32e0
db dummyd_67534[32]; // 5ca2:3300
db dummyd_67554[32]; // 5ca2:3320
db dummyd_67574[32]; // 5ca2:3340
db dummyd_67594[32]; // 5ca2:3360
db dummyd_675b4[32]; // 5ca2:3380
db dummyd_675d4[32]; // 5ca2:33a0
db dummyd_675f4[32]; // 5ca2:33c0
db dummyd_67614[32]; // 5ca2:33e0
db dummyd_67634[32]; // 5ca2:3400
db dummyd_67654[32]; // 5ca2:3420
db dummyd_67674[32]; // 5ca2:3440
db dummyd_67694[32]; // 5ca2:3460
db dummyd_676b4[32]; // 5ca2:3480
db dummyd_676d4[32]; // 5ca2:34a0
db dummyd_676f4[32]; // 5ca2:34c0
db dummyd_67714[32]; // 5ca2:34e0
db dummyd_67734[32]; // 5ca2:3500
db dummyd_67754[32]; // 5ca2:3520
db dummyd_67774[32]; // 5ca2:3540
db dummyd_67794[32]; // 5ca2:3560
db dummyd_677b4[32]; // 5ca2:3580
db dummyd_677d4[32]; // 5ca2:35a0
db dummyd_677f4[32]; // 5ca2:35c0
db dummyd_67814[32]; // 5ca2:35e0
db dummyd_67834[32]; // 5ca2:3600
db dummyd_67854[32]; // 5ca2:3620
db dummyd_67874[32]; // 5ca2:3640
db dummyd_67894[32]; // 5ca2:3660
db dummyd_678b4[32]; // 5ca2:3680
db dummyd_678d4[32]; // 5ca2:36a0
db dummyd_678f4[32]; // 5ca2:36c0
db dummyd_67914[32]; // 5ca2:36e0
db dummyd_67934[32]; // 5ca2:3700
db dummyd_67954[32]; // 5ca2:3720
db dummyd_67974[32]; // 5ca2:3740
db dummyd_67994[32]; // 5ca2:3760
db dummyd_679b4[32]; // 5ca2:3780
db dummyd_679d4[32]; // 5ca2:37a0
db dummyd_679f4[32]; // 5ca2:37c0
db dummyd_67a14[32]; // 5ca2:37e0
db dummyd_67a34[32]; // 5ca2:3800
db dummyd_67a54[32]; // 5ca2:3820
db dummyd_67a74[32]; // 5ca2:3840
db dummyd_67a94[32]; // 5ca2:3860
db dummyd_67ab4[32]; // 5ca2:3880
db dummyd_67ad4[32]; // 5ca2:38a0
db dummyd_67af4[32]; // 5ca2:38c0
db dummyd_67b14[32]; // 5ca2:38e0
db dummyd_67b34[32]; // 5ca2:3900
db dummyd_67b54[32]; // 5ca2:3920
db dummyd_67b74[32]; // 5ca2:3940
db dummyd_67b94[32]; // 5ca2:3960
db dummyd_67bb4[32]; // 5ca2:3980
db dummyd_67bd4[32]; // 5ca2:39a0
db dummyd_67bf4[32]; // 5ca2:39c0
db dummyd_67c14[32]; // 5ca2:39e0
db dummyd_67c34[32]; // 5ca2:3a00
db dummyd_67c54[32]; // 5ca2:3a20
db dummyd_67c74[32]; // 5ca2:3a40
db dummyd_67c94[32]; // 5ca2:3a60
db dummyd_67cb4[32]; // 5ca2:3a80
db dummyd_67cd4[32]; // 5ca2:3aa0
db dummyd_67cf4[32]; // 5ca2:3ac0
db dummyd_67d14[32]; // 5ca2:3ae0
db dummyd_67d34[32]; // 5ca2:3b00
db dummyd_67d54[32]; // 5ca2:3b20
db dummyd_67d74[32]; // 5ca2:3b40
db dummyd_67d94[32]; // 5ca2:3b60
db dummyd_67db4[32]; // 5ca2:3b80
db dummyd_67dd4[32]; // 5ca2:3ba0
db dummyd_67df4[32]; // 5ca2:3bc0
db dummyd_67e14[32]; // 5ca2:3be0
db dummyd_67e34[32]; // 5ca2:3c00
db dummyd_67e54[32]; // 5ca2:3c20
db dummyd_67e74[32]; // 5ca2:3c40
db dummyd_67e94[32]; // 5ca2:3c60
db dummyd_67eb4[32]; // 5ca2:3c80
db dummyd_67ed4[32]; // 5ca2:3ca0
db dummyd_67ef4[32]; // 5ca2:3cc0
db dummyd_67f14[32]; // 5ca2:3ce0
db dummyd_67f34[32]; // 5ca2:3d00
db dummyd_67f54[32]; // 5ca2:3d20
db dummyd_67f74[32]; // 5ca2:3d40
db dummyd_67f94[32]; // 5ca2:3d60
db dummyd_67fb4[32]; // 5ca2:3d80
db dummyd_67fd4[32]; // 5ca2:3da0
db dummyd_67ff4[32]; // 5ca2:3dc0
db dummyd_68014[32]; // 5ca2:3de0
db dummyd_68034[32]; // 5ca2:3e00
db dummyd_68054[32]; // 5ca2:3e20
db dummyd_68074[32]; // 5ca2:3e40
db dummyd_68094[32]; // 5ca2:3e60
db dummyd_680b4[32]; // 5ca2:3e80
db dummyd_680d4[32]; // 5ca2:3ea0
db dummyd_680f4[32]; // 5ca2:3ec0
db dummyd_68114[32]; // 5ca2:3ee0
db dummyd_68134[32]; // 5ca2:3f00
db dummyd_68154[32]; // 5ca2:3f20
db dummyd_68174[32]; // 5ca2:3f40
db dummyd_68194[32]; // 5ca2:3f60
db dummyd_681b4[32]; // 5ca2:3f80
db dummyd_681d4[32]; // 5ca2:3fa0
db dummyd_681f4[32]; // 5ca2:3fc0
db dummyd_68214[32]; // 5ca2:3fe0
db dummyd_68234[32]; // 5ca2:4000
db dummyd_68254[32]; // 5ca2:4020
db dummyd_68274[32]; // 5ca2:4040
db dummyd_68294[32]; // 5ca2:4060
db dummyd_682b4[32]; // 5ca2:4080
db dummyd_682d4[32]; // 5ca2:40a0
db dummyd_682f4[32]; // 5ca2:40c0
db dummyd_68314[32]; // 5ca2:40e0
db dummyd_68334[32]; // 5ca2:4100
db dummyd_68354[32]; // 5ca2:4120
db dummyd_68374[32]; // 5ca2:4140
db dummyd_68394[32]; // 5ca2:4160
db dummyd_683b4[32]; // 5ca2:4180
db dummyd_683d4[32]; // 5ca2:41a0
db dummyd_683f4[32]; // 5ca2:41c0
db dummyd_68414[32]; // 5ca2:41e0
db dummyd_68434[32]; // 5ca2:4200
db dummyd_68454[32]; // 5ca2:4220
db dummyd_68474[32]; // 5ca2:4240
db dummyd_68494[32]; // 5ca2:4260
db dummyd_684b4[32]; // 5ca2:4280
db dummyd_684d4[32]; // 5ca2:42a0
db dummyd_684f4[32]; // 5ca2:42c0
db dummyd_68514[32]; // 5ca2:42e0
db dummyd_68534[32]; // 5ca2:4300
db dummyd_68554[32]; // 5ca2:4320
db dummyd_68574[32]; // 5ca2:4340
db dummyd_68594[32]; // 5ca2:4360
db dummyd_685b4[32]; // 5ca2:4380
db dummyd_685d4[32]; // 5ca2:43a0
db dummyd_685f4[32]; // 5ca2:43c0
db dummyd_68614[32]; // 5ca2:43e0
db dummyd_68634[32]; // 5ca2:4400
db dummyd_68654[32]; // 5ca2:4420
db dummyd_68674[32]; // 5ca2:4440
db dummyd_68694[32]; // 5ca2:4460
db dummyd_686b4[32]; // 5ca2:4480
db dummyd_686d4[32]; // 5ca2:44a0
db dummyd_686f4[32]; // 5ca2:44c0
db dummyd_68714[32]; // 5ca2:44e0
db dummyd_68734[32]; // 5ca2:4500
db dummyd_68754[32]; // 5ca2:4520
db dummyd_68774[32]; // 5ca2:4540
db dummyd_68794[32]; // 5ca2:4560
db dummyd_687b4[32]; // 5ca2:4580
db dummyd_687d4[32]; // 5ca2:45a0
db dummyd_687f4[32]; // 5ca2:45c0
db dummyd_68814[32]; // 5ca2:45e0
db dummyd_68834[32]; // 5ca2:4600
db dummyd_68854[32]; // 5ca2:4620
db dummyd_68874[32]; // 5ca2:4640
db dummyd_68894[32]; // 5ca2:4660
db byte_77700; // 5ca2:4680
db dummyd_688b5[32]; // 5ca2:4681
db dummyd_688d5[32]; // 5ca2:46a1
db dummyd_688f5[32]; // 5ca2:46c1
db dummyd_68915[32]; // 5ca2:46e1
db dummyd_68935[32]; // 5ca2:4701
db dummyd_68955[32]; // 5ca2:4721
db dummyd_68975[32]; // 5ca2:4741
db dummyd_68995[32]; // 5ca2:4761
db dummyd_689b5[32]; // 5ca2:4781
db dummyd_689d5[32]; // 5ca2:47a1
db dummyd_689f5[32]; // 5ca2:47c1
db dummyd_68a15[32]; // 5ca2:47e1
db dummyd_68a35[32]; // 5ca2:4801
db dummyd_68a55[32]; // 5ca2:4821
db dummyd_68a75[32]; // 5ca2:4841
db dummyd_68a95[32]; // 5ca2:4861
db dummyd_68ab5[32]; // 5ca2:4881
db dummyd_68ad5[32]; // 5ca2:48a1
db dummyd_68af5[32]; // 5ca2:48c1
db dummyd_68b15[32]; // 5ca2:48e1
db dummyd_68b35[32]; // 5ca2:4901
db dummyd_68b55[32]; // 5ca2:4921
db dummyd_68b75[32]; // 5ca2:4941
db dummyd_68b95[32]; // 5ca2:4961
db dummyd_68bb5[32]; // 5ca2:4981
db dummyd_68bd5[32]; // 5ca2:49a1
db dummyd_68bf5[32]; // 5ca2:49c1
db dummyd_68c15[32]; // 5ca2:49e1
db dummyd_68c35[32]; // 5ca2:4a01
db dummyd_68c55[32]; // 5ca2:4a21
db dummyd_68c75[32]; // 5ca2:4a41
db dummyd_68c95[32]; // 5ca2:4a61
db dummyd_68cb5[32]; // 5ca2:4a81
db dummyd_68cd5[32]; // 5ca2:4aa1
db dummyd_68cf5[32]; // 5ca2:4ac1
db dummyd_68d15[32]; // 5ca2:4ae1
db dummyd_68d35[32]; // 5ca2:4b01
db dummyd_68d55[32]; // 5ca2:4b21
db dummyd_68d75[32]; // 5ca2:4b41
db dummyd_68d95[32]; // 5ca2:4b61
db dummyd_68db5[32]; // 5ca2:4b81
db dummyd_68dd5[32]; // 5ca2:4ba1
db dummyd_68df5[32]; // 5ca2:4bc1
db dummyd_68e15[32]; // 5ca2:4be1
db dummyd_68e35[32]; // 5ca2:4c01
db dummyd_68e55[32]; // 5ca2:4c21
db dummyd_68e75[32]; // 5ca2:4c41
db dummyd_68e95[32]; // 5ca2:4c61
db dummyd_68eb5[32]; // 5ca2:4c81
db dummyd_68ed5[32]; // 5ca2:4ca1
db dummyd_68ef5[32]; // 5ca2:4cc1
db dummyd_68f15[32]; // 5ca2:4ce1
db dummyd_68f35[32]; // 5ca2:4d01
db dummyd_68f55[32]; // 5ca2:4d21
db dummyd_68f75[32]; // 5ca2:4d41
db dummyd_68f95[32]; // 5ca2:4d61
db dummyd_68fb5[32]; // 5ca2:4d81
db dummyd_68fd5[32]; // 5ca2:4da1
db dummyd_68ff5[32]; // 5ca2:4dc1
db dummyd_69015[32]; // 5ca2:4de1
db dummyd_69035[32]; // 5ca2:4e01
db dummyd_69055[32]; // 5ca2:4e21
db dummyd_69075[32]; // 5ca2:4e41
db dummyd_69095[32]; // 5ca2:4e61
db dummyd_690b5[32]; // 5ca2:4e81
db dummyd_690d5[32]; // 5ca2:4ea1
db dummyd_690f5[32]; // 5ca2:4ec1
db dummyd_69115[32]; // 5ca2:4ee1
db dummyd_69135[32]; // 5ca2:4f01
db dummyd_69155[32]; // 5ca2:4f21
db dummyd_69175[32]; // 5ca2:4f41
db dummyd_69195[32]; // 5ca2:4f61
db dummyd_691b5[32]; // 5ca2:4f81
db dummyd_691d5[32]; // 5ca2:4fa1
db dummyd_691f5[32]; // 5ca2:4fc1
db dummyd_69215[32]; // 5ca2:4fe1
db dummyd_69235[32]; // 5ca2:5001
db dummyd_69255[32]; // 5ca2:5021
db dummyd_69275[32]; // 5ca2:5041
db dummyd_69295[32]; // 5ca2:5061
db dummyd_692b5[32]; // 5ca2:5081
db dummyd_692d5[32]; // 5ca2:50a1
db dummyd_692f5[32]; // 5ca2:50c1
db dummyd_69315[32]; // 5ca2:50e1
db dummyd_69335[32]; // 5ca2:5101
db dummyd_69355[32]; // 5ca2:5121
db dummyd_69375[32]; // 5ca2:5141
db dummyd_69395[32]; // 5ca2:5161
db dummyd_693b5[32]; // 5ca2:5181
db dummyd_693d5[32]; // 5ca2:51a1
db dummyd_693f5[32]; // 5ca2:51c1
db dummyd_69415[32]; // 5ca2:51e1
db dummyd_69435[32]; // 5ca2:5201
db dummyd_69455[32]; // 5ca2:5221
db dummyd_69475[32]; // 5ca2:5241
db dummyd_69495[32]; // 5ca2:5261
db dummyd_694b5[32]; // 5ca2:5281
db dummyd_694d5[32]; // 5ca2:52a1
db dummyd_694f5[32]; // 5ca2:52c1
db dummyd_69515[32]; // 5ca2:52e1
db dummyd_69535[32]; // 5ca2:5301
db dummyd_69555[32]; // 5ca2:5321
db dummyd_69575[32]; // 5ca2:5341
db dummyd_69595[32]; // 5ca2:5361
db dummyd_695b5[32]; // 5ca2:5381
db dummyd_695d5[32]; // 5ca2:53a1
db dummyd_695f5[32]; // 5ca2:53c1
db dummyd_69615[32]; // 5ca2:53e1
db dummyd_69635[32]; // 5ca2:5401
db dummyd_69655[32]; // 5ca2:5421
db dummyd_69675[32]; // 5ca2:5441
db dummyd_69695[32]; // 5ca2:5461
db dummyd_696b5[32]; // 5ca2:5481
db dummyd_696d5[32]; // 5ca2:54a1
db dummyd_696f5[32]; // 5ca2:54c1
db dummyd_69715[32]; // 5ca2:54e1
db dummyd_69735[32]; // 5ca2:5501
db dummyd_69755[32]; // 5ca2:5521
db dummyd_69775[32]; // 5ca2:5541
db dummyd_69795[32]; // 5ca2:5561
db dummyd_697b5[32]; // 5ca2:5581
db dummyd_697d5[32]; // 5ca2:55a1
db dummyd_697f5[32]; // 5ca2:55c1
db dummyd_69815[32]; // 5ca2:55e1
db dummyd_69835[32]; // 5ca2:5601
db dummyd_69855[32]; // 5ca2:5621
db dummyd_69875[32]; // 5ca2:5641
db dummyd_69895[32]; // 5ca2:5661
db dummyd_698b5[32]; // 5ca2:5681
db dummyd_698d5[32]; // 5ca2:56a1
db dummyd_698f5[32]; // 5ca2:56c1
db dummyd_69915[32]; // 5ca2:56e1
db dummyd_69935[32]; // 5ca2:5701
db dummyd_69955[32]; // 5ca2:5721
db dummyd_69975[32]; // 5ca2:5741
db dummyd_69995[32]; // 5ca2:5761
db dummyd_699b5[32]; // 5ca2:5781
db dummyd_699d5[32]; // 5ca2:57a1
db dummyd_699f5[32]; // 5ca2:57c1
db dummyd_69a15[32]; // 5ca2:57e1
db dummyd_69a35[32]; // 5ca2:5801
db dummyd_69a55[32]; // 5ca2:5821
db dummyd_69a75[32]; // 5ca2:5841
db dummyd_69a95[32]; // 5ca2:5861
db dummyd_69ab5[32]; // 5ca2:5881
db dummyd_69ad5[32]; // 5ca2:58a1
db dummyd_69af5[32]; // 5ca2:58c1
db dummyd_69b15[32]; // 5ca2:58e1
db dummyd_69b35[32]; // 5ca2:5901
db dummyd_69b55[32]; // 5ca2:5921
db dummyd_69b75[32]; // 5ca2:5941
db dummyd_69b95[32]; // 5ca2:5961
db dummyd_69bb5[32]; // 5ca2:5981
db dummyd_69bd5[32]; // 5ca2:59a1
db dummyd_69bf5[32]; // 5ca2:59c1
db dummyd_69c15[32]; // 5ca2:59e1
db dummyd_69c35[32]; // 5ca2:5a01
db dummyd_69c55[32]; // 5ca2:5a21
db dummyd_69c75[32]; // 5ca2:5a41
db dummyd_69c95[32]; // 5ca2:5a61
db dummyd_69cb5[32]; // 5ca2:5a81
db dummyd_69cd5[32]; // 5ca2:5aa1
db dummyd_69cf5[32]; // 5ca2:5ac1
db dummyd_69d15[32]; // 5ca2:5ae1
db dummyd_69d35[32]; // 5ca2:5b01
db dummyd_69d55[32]; // 5ca2:5b21
db dummyd_69d75[32]; // 5ca2:5b41
db dummyd_69d95[32]; // 5ca2:5b61
db dummyd_69db5[32]; // 5ca2:5b81
db dummyd_69dd5[32]; // 5ca2:5ba1
db dummyd_69df5[32]; // 5ca2:5bc1
db dummyd_69e15[32]; // 5ca2:5be1
db dummyd_69e35[32]; // 5ca2:5c01
db dummyd_69e55[32]; // 5ca2:5c21
db dummyd_69e75[32]; // 5ca2:5c41
db dummyd_69e95[32]; // 5ca2:5c61
db dummyd_69eb5[32]; // 5ca2:5c81
db dummyd_69ed5[32]; // 5ca2:5ca1
db dummyd_69ef5[32]; // 5ca2:5cc1
db dummyd_69f15[32]; // 5ca2:5ce1
db dummyd_69f35[32]; // 5ca2:5d01
db dummyd_69f55[32]; // 5ca2:5d21
db dummyd_69f75[32]; // 5ca2:5d41
db dummyd_69f95[32]; // 5ca2:5d61
db dummyd_69fb5[32]; // 5ca2:5d81
db dummyd_69fd5[32]; // 5ca2:5da1
db dummyd_69ff5[32]; // 5ca2:5dc1
db dummyd_6a015[32]; // 5ca2:5de1
db dummyd_6a035[32]; // 5ca2:5e01
db dummyd_6a055[32]; // 5ca2:5e21
db dummyd_6a075[32]; // 5ca2:5e41
db dummyd_6a095[32]; // 5ca2:5e61
db dummyd_6a0b5[32]; // 5ca2:5e81
db dummyd_6a0d5[32]; // 5ca2:5ea1
db dummyd_6a0f5[32]; // 5ca2:5ec1
db dummyd_6a115[32]; // 5ca2:5ee1
db dummyd_6a135[32]; // 5ca2:5f01
db dummyd_6a155[32]; // 5ca2:5f21
db dummyd_6a175[32]; // 5ca2:5f41
db dummyd_6a195[32]; // 5ca2:5f61
db dummyd_6a1b5[32]; // 5ca2:5f81
db dummyd_6a1d5[32]; // 5ca2:5fa1
db dummyd_6a1f5[32]; // 5ca2:5fc1
db dummyd_6a215[32]; // 5ca2:5fe1
db dummyd_6a235[32]; // 5ca2:6001
db dummyd_6a255[32]; // 5ca2:6021
db dummyd_6a275[32]; // 5ca2:6041
db dummyd_6a295[32]; // 5ca2:6061
db dummyd_6a2b5[32]; // 5ca2:6081
db dummyd_6a2d5[32]; // 5ca2:60a1
db dummyd_6a2f5[32]; // 5ca2:60c1
db dummyd_6a315[32]; // 5ca2:60e1
db dummyd_6a335[32]; // 5ca2:6101
db dummyd_6a355[32]; // 5ca2:6121
db dummyd_6a375[32]; // 5ca2:6141
db dummyd_6a395[32]; // 5ca2:6161
db dummyd_6a3b5[32]; // 5ca2:6181
db dummyd_6a3d5[32]; // 5ca2:61a1
db dummyd_6a3f5[32]; // 5ca2:61c1
db dummyd_6a415[32]; // 5ca2:61e1
db dummyd_6a435[32]; // 5ca2:6201
db dummyd_6a455[32]; // 5ca2:6221
db dummyd_6a475[32]; // 5ca2:6241
db dummyd_6a495[32]; // 5ca2:6261
db dummyd_6a4b5[32]; // 5ca2:6281
db dummyd_6a4d5[32]; // 5ca2:62a1
db dummyd_6a4f5[32]; // 5ca2:62c1
db dummyd_6a515[32]; // 5ca2:62e1
db dummyd_6a535[32]; // 5ca2:6301
db dummyd_6a555[32]; // 5ca2:6321
db dummyd_6a575;
db dummyd_6a576;
db dummyd_6a577;
db dummyd_6a578;
db dummyd_6a579;
db dummyd_6a57a;
db dummyd_6a57b;
db dummyd_6a57c;
db dummyd_6a57d;
db dummyd_6a57e;
db dummyd_6a57f;
db dummyd_6a580;
db dummyd_6a581;
db dummyd_6a582;
db dummyd_6a583;
db dummyd_6a584;
db dummyd_6a585;
db dummyd_6a586;
db dummyd_6a587;
db dummyd_6a588;
db dummyd_6a589;
db byte_793d6; // 5ca2:6356
db dummyd_6a58b[32]; // 5ca2:6357
db dummyd_6a5ab[32]; // 5ca2:6377
db dummyd_6a5cb[32]; // 5ca2:6397
db dummyd_6a5eb[32]; // 5ca2:63b7
db dummyd_6a60b[32]; // 5ca2:63d7
db dummyd_6a62b[32]; // 5ca2:63f7
db dummyd_6a64b[32]; // 5ca2:6417
db dummyd_6a66b[32]; // 5ca2:6437
db dummyd_6a68b[32]; // 5ca2:6457
db dummyd_6a6ab[32]; // 5ca2:6477
db dummyd_6a6cb[32]; // 5ca2:6497
db dummyd_6a6eb[32]; // 5ca2:64b7
db dummyd_6a70b;
db dummyd_6a70c;
db dummyd_6a70d;
db dummyd_6a70e;
db dummyd_6a70f;
db dummyd_6a710;
db dummyd_6a711;
db dummyd_6a712;
db dummyd_6a713;
db dummyd_6a714;
db dummyd_6a715;
db dummyd_6a716;
db dummyd_6a717;
db dummyd_6a718;
db dummyd_6a719;
db byte_79566; // 5ca2:64e6
db dummyd_6a71b;
db dummyd_6a71c;
db dummyd_6a71d;
db dummyd_6a71e;
db dummyd_6a71f;
dd dummyd_6a720; // 5ca2:64ec
dw dummyd_6a724; // 5ca2:64f0
dw dummyd_6a726; // 5ca2:64f2
dw dummyd_6a728; // 5ca2:64f4
dw dummyd_6a72a; // 5ca2:64f6
dw dummyd_6a72c; // 5ca2:64f8
dw dummyd_6a72e; // 5ca2:64fa
dw dummyd_6a730; // 5ca2:64fc
dw dummyd_6a732; // 5ca2:64fe
dw dummyd_6a734; // 5ca2:6500
dw dummyd_6a736; // 5ca2:6502
dw dummyd_6a738; // 5ca2:6504
dw dummyd_6a73a; // 5ca2:6506
db dummyd_6a73c;
db dummyd_6a73d;
db dummyd_6a73e;
dw dummyd_6a73f; // 5ca2:650b
dw dummyd_6a741; // 5ca2:650d
dw dummyd_6a743; // 5ca2:650f
dw dummyd_6a745; // 5ca2:6511
dw dummyd_6a747; // 5ca2:6513
dw dummyd_6a749; // 5ca2:6515
dw dummyd_6a74b; // 5ca2:6517
db dummyd_6a74d; // 5ca2:6519
db dummyd_6a74e; // 5ca2:651a
db dummyd_6a74f; // 5ca2:651b
db dummyd_6a750; // 5ca2:651c
db dummyd_6a751;
db dummyd_6a752; // 5ca2:651e
db dummyd_6a753;
db dummyd_6a754; // 5ca2:6520
db dummyd_6a755;
db dummyd_6a756; // 5ca2:6522
db dummyd_6a757;
db dummyd_6a758; // 5ca2:6524
db dummyd_6a759;
db dummyd_6a75a; // 5ca2:6526
db dummyd_6a75b; // 5ca2:6527
db dummyd_6a75c; // 5ca2:6528
db dummyd_6a75d; // 5ca2:6529
db dummyd_6a75e; // 5ca2:652a
db dummyd_6a75f;
dd dummyd_6a760; // 5ca2:652c
dw dummyd_6a764; // 5ca2:6530
dw dummyd_6a766; // 5ca2:6532
dw dummyd_6a768; // 5ca2:6534
dw dummyd_6a76a; // 5ca2:6536
dw dummyd_6a76c; // 5ca2:6538
dw dummyd_6a76e; // 5ca2:653a
dw dummyd_6a770; // 5ca2:653c
dw dummyd_6a772; // 5ca2:653e
dw dummyd_6a774; // 5ca2:6540
dw dummyd_6a776; // 5ca2:6542
db dummyd_6a778; // 5ca2:6544
db dummyd_6a779; // 5ca2:6545
dd dummyd_6a77a; // 5ca2:6546
dw dummyd_6a77e; // 5ca2:654a
dw dummyd_6a780; // 5ca2:654c
dw dummyd_6a782; // 5ca2:654e
dw dummyd_6a784; // 5ca2:6550
db dummyd_6a786; // 5ca2:6552
db dummyd_6a787; // 5ca2:6553
dd dummyd_6a788; // 5ca2:6554
db dummyd_6a78c; // 5ca2:6558
db dummyd_6a78d; // 5ca2:6559
dd dummyd_6a78e; // 5ca2:655a
db dummyd_6a792;
db dummyd_6a793; // 5ca2:655f
db dummyd_6a794; // 5ca2:6560
db dummyd_6a795; // 5ca2:6561
db dummyd_6a796; // 5ca2:6562
db dummyd_6a797; // 5ca2:6563
db dummyd_6a798; // 5ca2:6564
db dummyd_6a799; // 5ca2:6565
db dummyd_6a79a; // 5ca2:6566
db dummyd_6a79b; // 5ca2:6567
dd dummyd_6a79c; // 5ca2:6568
db dummyd_6a7a0; // 5ca2:656c
db dummyd_6a7a1; // 5ca2:656d
db dummyd_6a7a2; // 5ca2:656e
db dummyd_6a7a3; // 5ca2:656f
db dummyd_6a7a4; // 5ca2:6570
db dummyd_6a7a5; // 5ca2:6571
db dummyd_6a7a6; // 5ca2:6572
db dummyd_6a7a7; // 5ca2:6573
dd dummyd_6a7a8; // 5ca2:6574
db dummyd_6a7ac; // 5ca2:6578
db dummyd_6a7ad; // 5ca2:6579
db dummyd_6a7ae; // 5ca2:657a
db dummyd_6a7af; // 5ca2:657b
dd dummyd_6a7b0; // 5ca2:657c
dw dummyd_6a7b4; // 5ca2:6580
db dummyd_6a7b6; // 5ca2:6582
db dummyd_6a7b7; // 5ca2:6583
dd dummyd_6a7b8; // 5ca2:6584
db dummyd_6a7bc; // 5ca2:6588
db dummyd_6a7bd; // 5ca2:6589
db dummyd_6a7be; // 5ca2:658a
db dummyd_6a7bf; // 5ca2:658b
db dummyd_6a7c0; // 5ca2:658c
db dummyd_6a7c1; // 5ca2:658d
db dummyd_6a7c2; // 5ca2:658e
dw dummyd_6a7c3; // 5ca2:658f
dw dummyd_6a7c5; // 5ca2:6591
db dummyd_6a7c7[32]; // 5ca2:6593
db dummyd_6a7e7[32]; // 5ca2:65b3
db dummyd_6a807[32]; // 5ca2:65d3
db dummyd_6a827[32]; // 5ca2:65f3
db dummyd_6a847[32]; // 5ca2:6613
db dummyd_6a867[32]; // 5ca2:6633
db dummyd_6a887[32]; // 5ca2:6653
db dummyd_6a8a7[32]; // 5ca2:6673
db dummyd_6a8c7[32]; // 5ca2:6693
db dummyd_6a8e7[32]; // 5ca2:66b3
db dummyd_6a907[32]; // 5ca2:66d3
db dummyd_6a927[32]; // 5ca2:66f3
db dummyd_6a947[32]; // 5ca2:6713
db dummyd_6a967[32]; // 5ca2:6733
db dummyd_6a987[32]; // 5ca2:6753
db dummyd_6a9a7[32]; // 5ca2:6773
db dummyd_6a9c7[32]; // 5ca2:6793
db dummyd_6a9e7[32]; // 5ca2:67b3
db dummyd_6aa07[32]; // 5ca2:67d3
db dummyd_6aa27[32]; // 5ca2:67f3
db dummyd_6aa47[32]; // 5ca2:6813
db dummyd_6aa67[32]; // 5ca2:6833
db dummyd_6aa87[32]; // 5ca2:6853
db dummyd_6aaa7[32]; // 5ca2:6873
db dummyd_6aac7[32]; // 5ca2:6893
db dummyd_6aae7[32]; // 5ca2:68b3
db dummyd_6ab07[32]; // 5ca2:68d3
db dummyd_6ab27[32]; // 5ca2:68f3
db dummyd_6ab47[32]; // 5ca2:6913
db dummyd_6ab67[32]; // 5ca2:6933
db dummyd_6ab87[32]; // 5ca2:6953
db dummyd_6aba7[32]; // 5ca2:6973
db dummyd_6abc7[32]; // 5ca2:6993
db dummyd_6abe7[32]; // 5ca2:69b3
db dummyd_6ac07[32]; // 5ca2:69d3
db dummyd_6ac27[32]; // 5ca2:69f3
db dummyd_6ac47[32]; // 5ca2:6a13
db dummyd_6ac67[32]; // 5ca2:6a33
db dummyd_6ac87[32]; // 5ca2:6a53
db dummyd_6aca7[32]; // 5ca2:6a73
db dummyd_6acc7[32]; // 5ca2:6a93
db dummyd_6ace7[32]; // 5ca2:6ab3
db dummyd_6ad07[32]; // 5ca2:6ad3
db dummyd_6ad27[32]; // 5ca2:6af3
db dummyd_6ad47[32]; // 5ca2:6b13
db dummyd_6ad67[32]; // 5ca2:6b33
db dummyd_6ad87[32]; // 5ca2:6b53
db dummyd_6ada7[32]; // 5ca2:6b73
db dummyd_6adc7[32]; // 5ca2:6b93
db dummyd_6ade7[32]; // 5ca2:6bb3
db dummyd_6ae07[32]; // 5ca2:6bd3
db dummyd_6ae27[32]; // 5ca2:6bf3
db dummyd_6ae47[32]; // 5ca2:6c13
db dummyd_6ae67[32]; // 5ca2:6c33
db dummyd_6ae87[32]; // 5ca2:6c53
db dummyd_6aea7[32]; // 5ca2:6c73
db dummyd_6aec7[32]; // 5ca2:6c93
db dummyd_6aee7[32]; // 5ca2:6cb3
db dummyd_6af07[32]; // 5ca2:6cd3
db dummyd_6af27[32]; // 5ca2:6cf3
db dummyd_6af47[32]; // 5ca2:6d13
db dummyd_6af67[32]; // 5ca2:6d33
db dummyd_6af87[32]; // 5ca2:6d53
db dummyd_6afa7[32]; // 5ca2:6d73
db dummyd_6afc7[32]; // 5ca2:6d93
db dummyd_6afe7[32]; // 5ca2:6db3
db dummyd_6b007[32]; // 5ca2:6dd3
db dummyd_6b027[32]; // 5ca2:6df3
db dummyd_6b047[32]; // 5ca2:6e13
db dummyd_6b067[32]; // 5ca2:6e33
db dummyd_6b087[32]; // 5ca2:6e53
db dummyd_6b0a7[32]; // 5ca2:6e73
db dummyd_6b0c7[32]; // 5ca2:6e93
db dummyd_6b0e7[32]; // 5ca2:6eb3
db dummyd_6b107[32]; // 5ca2:6ed3
db dummyd_6b127[32]; // 5ca2:6ef3
db dummyd_6b147[32]; // 5ca2:6f13
db dummyd_6b167[32]; // 5ca2:6f33
db dummyd_6b187[32]; // 5ca2:6f53
db dummyd_6b1a7[32]; // 5ca2:6f73
db dummyd_6b1c7[32]; // 5ca2:6f93
db dummyd_6b1e7[32]; // 5ca2:6fb3
db dummyd_6b207[32]; // 5ca2:6fd3
db dummyd_6b227[32]; // 5ca2:6ff3
db dummyd_6b247[32]; // 5ca2:7013
db dummyd_6b267[32]; // 5ca2:7033
db dummyd_6b287[32]; // 5ca2:7053
db dummyd_6b2a7[32]; // 5ca2:7073
db dummyd_6b2c7[32]; // 5ca2:7093
db dummyd_6b2e7[32]; // 5ca2:70b3
db dummyd_6b307[32]; // 5ca2:70d3
db dummyd_6b327[32]; // 5ca2:70f3
db dummyd_6b347[32]; // 5ca2:7113
db dummyd_6b367[32]; // 5ca2:7133
db dummyd_6b387[32]; // 5ca2:7153
db dummyd_6b3a7[32]; // 5ca2:7173
db dummyd_6b3c7[32]; // 5ca2:7193
db dummyd_6b3e7[32]; // 5ca2:71b3
db dummyd_6b407[32]; // 5ca2:71d3
db dummyd_6b427[32]; // 5ca2:71f3
db dummyd_6b447[32]; // 5ca2:7213
db dummyd_6b467[32]; // 5ca2:7233
db dummyd_6b487[32]; // 5ca2:7253
db dummyd_6b4a7[32]; // 5ca2:7273
db dummyd_6b4c7[32]; // 5ca2:7293
db dummyd_6b4e7[32]; // 5ca2:72b3
db dummyd_6b507[32]; // 5ca2:72d3
db dummyd_6b527[32]; // 5ca2:72f3
db dummyd_6b547[32]; // 5ca2:7313
db dummyd_6b567[32]; // 5ca2:7333
db dummyd_6b587[32]; // 5ca2:7353
db dummyd_6b5a7[32]; // 5ca2:7373
db dummyd_6b5c7[32]; // 5ca2:7393
db dummyd_6b5e7[32]; // 5ca2:73b3
db dummyd_6b607[32]; // 5ca2:73d3
db dummyd_6b627[32]; // 5ca2:73f3
db dummyd_6b647[32]; // 5ca2:7413
db dummyd_6b667[32]; // 5ca2:7433
db dummyd_6b687[32]; // 5ca2:7453
db dummyd_6b6a7[32]; // 5ca2:7473
db dummyd_6b6c7[32]; // 5ca2:7493
db dummyd_6b6e7[32]; // 5ca2:74b3
db dummyd_6b707[32]; // 5ca2:74d3
db dummyd_6b727[32]; // 5ca2:74f3
db dummyd_6b747[32]; // 5ca2:7513
db dummyd_6b767[32]; // 5ca2:7533
db dummyd_6b787[32]; // 5ca2:7553
db dummyd_6b7a7[32]; // 5ca2:7573
db dummyd_6b7c7[32]; // 5ca2:7593
db dummyd_6b7e7[32]; // 5ca2:75b3
db dummyd_6b807[32]; // 5ca2:75d3
db dummyd_6b827[32]; // 5ca2:75f3
db dummyd_6b847[32]; // 5ca2:7613
db dummyd_6b867[32]; // 5ca2:7633
db dummyd_6b887[32]; // 5ca2:7653
db dummyd_6b8a7[32]; // 5ca2:7673
db dummyd_6b8c7[32]; // 5ca2:7693
db dummyd_6b8e7[32]; // 5ca2:76b3
db dummyd_6b907[32]; // 5ca2:76d3
db dummyd_6b927[32]; // 5ca2:76f3
db dummyd_6b947[32]; // 5ca2:7713
db dummyd_6b967[32]; // 5ca2:7733
db dummyd_6b987[32]; // 5ca2:7753
db dummyd_6b9a7[32]; // 5ca2:7773
db dummyd_6b9c7[32]; // 5ca2:7793
db dummyd_6b9e7[32]; // 5ca2:77b3
db dummyd_6ba07[32]; // 5ca2:77d3
db dummyd_6ba27[32]; // 5ca2:77f3
db dummyd_6ba47[32]; // 5ca2:7813
db dummyd_6ba67[32]; // 5ca2:7833
db dummyd_6ba87[32]; // 5ca2:7853
db dummyd_6baa7[32]; // 5ca2:7873
db dummyd_6bac7[32]; // 5ca2:7893
db dummyd_6bae7[32]; // 5ca2:78b3
db dummyd_6bb07[32]; // 5ca2:78d3
db dummyd_6bb27[32]; // 5ca2:78f3
db dummyd_6bb47[32]; // 5ca2:7913
db dummyd_6bb67[32]; // 5ca2:7933
db dummyd_6bb87[32]; // 5ca2:7953
db dummyd_6bba7[32]; // 5ca2:7973
db dummyd_6bbc7[32]; // 5ca2:7993
db dummyd_6bbe7[32]; // 5ca2:79b3
db dummyd_6bc07[32]; // 5ca2:79d3
db dummyd_6bc27[32]; // 5ca2:79f3
db dummyd_6bc47[32]; // 5ca2:7a13
db dummyd_6bc67[32]; // 5ca2:7a33
db dummyd_6bc87[32]; // 5ca2:7a53
db dummyd_6bca7[32]; // 5ca2:7a73
db dummyd_6bcc7[32]; // 5ca2:7a93
db dummyd_6bce7[32]; // 5ca2:7ab3
db dummyd_6bd07[32]; // 5ca2:7ad3
db dummyd_6bd27[32]; // 5ca2:7af3
db dummyd_6bd47[32]; // 5ca2:7b13
db dummyd_6bd67[32]; // 5ca2:7b33
db dummyd_6bd87[32]; // 5ca2:7b53
db dummyd_6bda7[32]; // 5ca2:7b73
db dummyd_6bdc7[32]; // 5ca2:7b93
db dummyd_6bde7[32]; // 5ca2:7bb3
db dummyd_6be07[32]; // 5ca2:7bd3
db dummyd_6be27[32]; // 5ca2:7bf3
db dummyd_6be47[32]; // 5ca2:7c13
db dummyd_6be67[32]; // 5ca2:7c33
db dummyd_6be87[32]; // 5ca2:7c53
db dummyd_6bea7[32]; // 5ca2:7c73
db dummyd_6bec7[32]; // 5ca2:7c93
db dummyd_6bee7[32]; // 5ca2:7cb3
db dummyd_6bf07[32]; // 5ca2:7cd3
db dummyd_6bf27[32]; // 5ca2:7cf3
db dummyd_6bf47[32]; // 5ca2:7d13
db dummyd_6bf67[32]; // 5ca2:7d33
db dummyd_6bf87[32]; // 5ca2:7d53
db dummyd_6bfa7[32]; // 5ca2:7d73
db dummyd_6bfc7[32]; // 5ca2:7d93
db dummyd_6bfe7[32]; // 5ca2:7db3
db dummyd_6c007[32]; // 5ca2:7dd3
db dummyd_6c027[32]; // 5ca2:7df3
db dummyd_6c047[32]; // 5ca2:7e13
db dummyd_6c067[32]; // 5ca2:7e33
db dummyd_6c087[32]; // 5ca2:7e53
db dummyd_6c0a7[32]; // 5ca2:7e73
db dummyd_6c0c7[32]; // 5ca2:7e93
db dummyd_6c0e7[32]; // 5ca2:7eb3
db dummyd_6c107[32]; // 5ca2:7ed3
db dummyd_6c127[32]; // 5ca2:7ef3
db dummyd_6c147[32]; // 5ca2:7f13
db dummyd_6c167[32]; // 5ca2:7f33
db dummyd_6c187[32]; // 5ca2:7f53
db dummyd_6c1a7[32]; // 5ca2:7f73
db dummyd_6c1c7[32]; // 5ca2:7f93
db dummyd_6c1e7[32]; // 5ca2:7fb3
db dummyd_6c207[32]; // 5ca2:7fd3
db dummyd_6c227[32]; // 5ca2:7ff3
db dummyd_6c247[32]; // 5ca2:8013
db dummyd_6c267[32]; // 5ca2:8033
db dummyd_6c287[32]; // 5ca2:8053
db dummyd_6c2a7[32]; // 5ca2:8073
db dummyd_6c2c7[32]; // 5ca2:8093
db dummyd_6c2e7[32]; // 5ca2:80b3
db dummyd_6c307[32]; // 5ca2:80d3
db dummyd_6c327[32]; // 5ca2:80f3
db dummyd_6c347[32]; // 5ca2:8113
db dummyd_6c367[32]; // 5ca2:8133
db dummyd_6c387[32]; // 5ca2:8153
db dummyd_6c3a7[32]; // 5ca2:8173
db dummyd_6c3c7[32]; // 5ca2:8193
db dummyd_6c3e7[32]; // 5ca2:81b3
db dummyd_6c407[32]; // 5ca2:81d3
db dummyd_6c427[32]; // 5ca2:81f3
db dummyd_6c447[32]; // 5ca2:8213
db dummyd_6c467[32]; // 5ca2:8233
db dummyd_6c487[32]; // 5ca2:8253
db dummyd_6c4a7[32]; // 5ca2:8273
db dummyd_6c4c7[32]; // 5ca2:8293
db dummyd_6c4e7[32]; // 5ca2:82b3
db dummyd_6c507[32]; // 5ca2:82d3
db dummyd_6c527[32]; // 5ca2:82f3
db dummyd_6c547[32]; // 5ca2:8313
db dummyd_6c567[32]; // 5ca2:8333
db dummyd_6c587[32]; // 5ca2:8353
db dummyd_6c5a7[32]; // 5ca2:8373
db dummyd_6c5c7[32]; // 5ca2:8393
db dummyd_6c5e7[32]; // 5ca2:83b3
db dummyd_6c607[32]; // 5ca2:83d3
db dummyd_6c627[32]; // 5ca2:83f3
db dummyd_6c647[32]; // 5ca2:8413
db dummyd_6c667[32]; // 5ca2:8433
db dummyd_6c687[32]; // 5ca2:8453
db dummyd_6c6a7[32]; // 5ca2:8473
db dummyd_6c6c7[32]; // 5ca2:8493
db dummyd_6c6e7[32]; // 5ca2:84b3
db dummyd_6c707[32]; // 5ca2:84d3
db dummyd_6c727[32]; // 5ca2:84f3
db dummyd_6c747[32]; // 5ca2:8513
db dummyd_6c767[32]; // 5ca2:8533
db dummyd_6c787[32]; // 5ca2:8553
db dummyd_6c7a7[32]; // 5ca2:8573
db dummyd_6c7c7[32]; // 5ca2:8593
db dummyd_6c7e7[32]; // 5ca2:85b3
db dummyd_6c807[32]; // 5ca2:85d3
db dummyd_6c827[32]; // 5ca2:85f3
db dummyd_6c847[32]; // 5ca2:8613
db dummyd_6c867[32]; // 5ca2:8633
db dummyd_6c887[32]; // 5ca2:8653
db dummyd_6c8a7[32]; // 5ca2:8673
db dummyd_6c8c7[32]; // 5ca2:8693
db dummyd_6c8e7[32]; // 5ca2:86b3
db dummyd_6c907[32]; // 5ca2:86d3
db dummyd_6c927[32]; // 5ca2:86f3
db dummyd_6c947[32]; // 5ca2:8713
db dummyd_6c967[32]; // 5ca2:8733
db dummyd_6c987[32]; // 5ca2:8753
db dummyd_6c9a7[32]; // 5ca2:8773
db dummyd_6c9c7[32]; // 5ca2:8793
db dummyd_6c9e7[32]; // 5ca2:87b3
db dummyd_6ca07[32]; // 5ca2:87d3
db dummyd_6ca27[32]; // 5ca2:87f3
db dummyd_6ca47[32]; // 5ca2:8813
db dummyd_6ca67[32]; // 5ca2:8833
db dummyd_6ca87[32]; // 5ca2:8853
db dummyd_6caa7[32]; // 5ca2:8873
db dummyd_6cac7[32]; // 5ca2:8893
db dummyd_6cae7[32]; // 5ca2:88b3
db dummyd_6cb07[32]; // 5ca2:88d3
db dummyd_6cb27[32]; // 5ca2:88f3
db dummyd_6cb47[32]; // 5ca2:8913
db dummyd_6cb67[32]; // 5ca2:8933
db dummyd_6cb87[32]; // 5ca2:8953
db dummyd_6cba7[32]; // 5ca2:8973
db dummyd_6cbc7[32]; // 5ca2:8993
db dummyd_6cbe7[32]; // 5ca2:89b3
db dummyd_6cc07[32]; // 5ca2:89d3
db dummyd_6cc27[32]; // 5ca2:89f3
db dummyd_6cc47[32]; // 5ca2:8a13
db dummyd_6cc67[32]; // 5ca2:8a33
db dummyd_6cc87[32]; // 5ca2:8a53
db dummyd_6cca7[32]; // 5ca2:8a73
db dummyd_6ccc7[32]; // 5ca2:8a93
db dummyd_6cce7[32]; // 5ca2:8ab3
db dummyd_6cd07[32]; // 5ca2:8ad3
db dummyd_6cd27[32]; // 5ca2:8af3
db dummyd_6cd47[32]; // 5ca2:8b13
db dummyd_6cd67[32]; // 5ca2:8b33
db dummyd_6cd87[32]; // 5ca2:8b53
db dummyd_6cda7[32]; // 5ca2:8b73
db dummyd_6cdc7[32]; // 5ca2:8b93
db dummyd_6cde7[32]; // 5ca2:8bb3
db dummyd_6ce07[32]; // 5ca2:8bd3
db dummyd_6ce27[32]; // 5ca2:8bf3
db dummyd_6ce47[32]; // 5ca2:8c13
db dummyd_6ce67[32]; // 5ca2:8c33
db dummyd_6ce87[32]; // 5ca2:8c53
db dummyd_6cea7[32]; // 5ca2:8c73
db dummyd_6cec7[32]; // 5ca2:8c93
db dummyd_6cee7[32]; // 5ca2:8cb3
db dummyd_6cf07[32]; // 5ca2:8cd3
db dummyd_6cf27[32]; // 5ca2:8cf3
db dummyd_6cf47[32]; // 5ca2:8d13
db dummyd_6cf67[32]; // 5ca2:8d33
db dummyd_6cf87[32]; // 5ca2:8d53
db dummyd_6cfa7[32]; // 5ca2:8d73
db dummyd_6cfc7[32]; // 5ca2:8d93
db dummyd_6cfe7[32]; // 5ca2:8db3
db dummyd_6d007[32]; // 5ca2:8dd3
db dummyd_6d027[32]; // 5ca2:8df3
db dummyd_6d047[32]; // 5ca2:8e13
db dummyd_6d067[32]; // 5ca2:8e33
db dummyd_6d087[32]; // 5ca2:8e53
db dummyd_6d0a7[32]; // 5ca2:8e73
db dummyd_6d0c7[32]; // 5ca2:8e93
db dummyd_6d0e7[32]; // 5ca2:8eb3
db dummyd_6d107[32]; // 5ca2:8ed3
db dummyd_6d127[32]; // 5ca2:8ef3
db dummyd_6d147[32]; // 5ca2:8f13
db dummyd_6d167[32]; // 5ca2:8f33
db dummyd_6d187[32]; // 5ca2:8f53
db dummyd_6d1a7[32]; // 5ca2:8f73
db dummyd_6d1c7[32]; // 5ca2:8f93
db dummyd_6d1e7[32]; // 5ca2:8fb3
db dummyd_6d207[32]; // 5ca2:8fd3
db dummyd_6d227[32]; // 5ca2:8ff3
db dummyd_6d247[32]; // 5ca2:9013
db dummyd_6d267[32]; // 5ca2:9033
db dummyd_6d287[32]; // 5ca2:9053
db dummyd_6d2a7[32]; // 5ca2:9073
db dummyd_6d2c7[32]; // 5ca2:9093
db dummyd_6d2e7[32]; // 5ca2:90b3
db dummyd_6d307[32]; // 5ca2:90d3
db dummyd_6d327[32]; // 5ca2:90f3
db dummyd_6d347[32]; // 5ca2:9113
db dummyd_6d367[32]; // 5ca2:9133
db dummyd_6d387[32]; // 5ca2:9153
db dummyd_6d3a7[32]; // 5ca2:9173
db dummyd_6d3c7[32]; // 5ca2:9193
db dummyd_6d3e7[32]; // 5ca2:91b3
db dummyd_6d407[32]; // 5ca2:91d3
db dummyd_6d427[32]; // 5ca2:91f3
db dummyd_6d447[32]; // 5ca2:9213
db dummyd_6d467[32]; // 5ca2:9233
db dummyd_6d487[32]; // 5ca2:9253
db dummyd_6d4a7[32]; // 5ca2:9273
db dummyd_6d4c7[32]; // 5ca2:9293
db dummyd_6d4e7[32]; // 5ca2:92b3
db dummyd_6d507[32]; // 5ca2:92d3
db dummyd_6d527[32]; // 5ca2:92f3
db dummyd_6d547[32]; // 5ca2:9313
db dummyd_6d567[32]; // 5ca2:9333
db dummyd_6d587[32]; // 5ca2:9353
db dummyd_6d5a7[32]; // 5ca2:9373
db dummyd_6d5c7[32]; // 5ca2:9393
db dummyd_6d5e7[32]; // 5ca2:93b3
db dummyd_6d607[32]; // 5ca2:93d3
db dummyd_6d627[32]; // 5ca2:93f3
db dummyd_6d647[32]; // 5ca2:9413
db dummyd_6d667[32]; // 5ca2:9433
db dummyd_6d687[32]; // 5ca2:9453
db dummyd_6d6a7[32]; // 5ca2:9473
db dummyd_6d6c7[32]; // 5ca2:9493
db dummyd_6d6e7[32]; // 5ca2:94b3
db dummyd_6d707[32]; // 5ca2:94d3
db dummyd_6d727[32]; // 5ca2:94f3
db dummyd_6d747[32]; // 5ca2:9513
db dummyd_6d767[32]; // 5ca2:9533
db dummyd_6d787[32]; // 5ca2:9553
db dummyd_6d7a7[32]; // 5ca2:9573
db dummyd_6d7c7[32]; // 5ca2:9593
db dummyd_6d7e7[32]; // 5ca2:95b3
db dummyd_6d807[32]; // 5ca2:95d3
db dummyd_6d827[32]; // 5ca2:95f3
db dummyd_6d847[32]; // 5ca2:9613
db dummyd_6d867[32]; // 5ca2:9633
db dummyd_6d887[32]; // 5ca2:9653
db dummyd_6d8a7[32]; // 5ca2:9673
db dummyd_6d8c7[32]; // 5ca2:9693
db dummyd_6d8e7[32]; // 5ca2:96b3
db dummyd_6d907[32]; // 5ca2:96d3
db dummyd_6d927[32]; // 5ca2:96f3
db dummyd_6d947[32]; // 5ca2:9713
db dummyd_6d967[32]; // 5ca2:9733
db dummyd_6d987[32]; // 5ca2:9753
db dummyd_6d9a7[32]; // 5ca2:9773
db dummyd_6d9c7[32]; // 5ca2:9793
db dummyd_6d9e7[32]; // 5ca2:97b3
db dummyd_6da07[32]; // 5ca2:97d3
db dummyd_6da27[32]; // 5ca2:97f3
db dummyd_6da47[32]; // 5ca2:9813
db dummyd_6da67[32]; // 5ca2:9833
db dummyd_6da87[32]; // 5ca2:9853
db dummyd_6daa7[32]; // 5ca2:9873
db dummyd_6dac7[32]; // 5ca2:9893
db dummyd_6dae7[32]; // 5ca2:98b3
db dummyd_6db07[32]; // 5ca2:98d3
db dummyd_6db27[32]; // 5ca2:98f3
db dummyd_6db47[32]; // 5ca2:9913
db dummyd_6db67[32]; // 5ca2:9933
db dummyd_6db87[32]; // 5ca2:9953
db dummyd_6dba7[32]; // 5ca2:9973
db dummyd_6dbc7[32]; // 5ca2:9993
db dummyd_6dbe7[32]; // 5ca2:99b3
db dummyd_6dc07[32]; // 5ca2:99d3
db dummyd_6dc27[32]; // 5ca2:99f3
db dummyd_6dc47[32]; // 5ca2:9a13
db dummyd_6dc67[32]; // 5ca2:9a33
db dummyd_6dc87[32]; // 5ca2:9a53
db dummyd_6dca7[32]; // 5ca2:9a73
db dummyd_6dcc7[32]; // 5ca2:9a93
db dummyd_6dce7[32]; // 5ca2:9ab3
db dummyd_6dd07[32]; // 5ca2:9ad3
db dummyd_6dd27[32]; // 5ca2:9af3
db dummyd_6dd47[32]; // 5ca2:9b13
db dummyd_6dd67[32]; // 5ca2:9b33
db dummyd_6dd87[32]; // 5ca2:9b53
db dummyd_6dda7[32]; // 5ca2:9b73
db dummyd_6ddc7[32]; // 5ca2:9b93
db dummyd_6dde7[32]; // 5ca2:9bb3
db dummyd_6de07[32]; // 5ca2:9bd3
db dummyd_6de27[32]; // 5ca2:9bf3
db dummyd_6de47[32]; // 5ca2:9c13
db dummyd_6de67[32]; // 5ca2:9c33
db dummyd_6de87[32]; // 5ca2:9c53
db dummyd_6dea7[32]; // 5ca2:9c73
db dummyd_6dec7[32]; // 5ca2:9c93
db dummyd_6dee7[32]; // 5ca2:9cb3
db dummyd_6df07[32]; // 5ca2:9cd3
db dummyd_6df27[32]; // 5ca2:9cf3
db dummyd_6df47[32]; // 5ca2:9d13
db dummyd_6df67[32]; // 5ca2:9d33
db dummyd_6df87[32]; // 5ca2:9d53
db dummyd_6dfa7[32]; // 5ca2:9d73
db dummyd_6dfc7[32]; // 5ca2:9d93
db dummyd_6dfe7[32]; // 5ca2:9db3
db dummyd_6e007[32]; // 5ca2:9dd3
db dummyd_6e027[32]; // 5ca2:9df3
db dummyd_6e047[32]; // 5ca2:9e13
db dummyd_6e067[32]; // 5ca2:9e33
db dummyd_6e087[32]; // 5ca2:9e53
db dummyd_6e0a7[32]; // 5ca2:9e73
db dummyd_6e0c7[32]; // 5ca2:9e93
db dummyd_6e0e7[32]; // 5ca2:9eb3
db dummyd_6e107[32]; // 5ca2:9ed3
db dummyd_6e127[32]; // 5ca2:9ef3
db dummyd_6e147[32]; // 5ca2:9f13
db dummyd_6e167[32]; // 5ca2:9f33
db dummyd_6e187[32]; // 5ca2:9f53
db dummyd_6e1a7[32]; // 5ca2:9f73
db dummyd_6e1c7[32]; // 5ca2:9f93
db dummyd_6e1e7[32]; // 5ca2:9fb3
db dummyd_6e207[32]; // 5ca2:9fd3
db dummyd_6e227[32]; // 5ca2:9ff3
db dummyd_6e247[32]; // 5ca2:a013
db dummyd_6e267[32]; // 5ca2:a033
db dummyd_6e287[32]; // 5ca2:a053
db dummyd_6e2a7[32]; // 5ca2:a073
db dummyd_6e2c7[32]; // 5ca2:a093
db dummyd_6e2e7[32]; // 5ca2:a0b3
db dummyd_6e307[32]; // 5ca2:a0d3
db dummyd_6e327[32]; // 5ca2:a0f3
db dummyd_6e347[32]; // 5ca2:a113
db dummyd_6e367[32]; // 5ca2:a133
db dummyd_6e387[32]; // 5ca2:a153
db dummyd_6e3a7[32]; // 5ca2:a173
db dummyd_6e3c7[32]; // 5ca2:a193
db dummyd_6e3e7[32]; // 5ca2:a1b3
db dummyd_6e407[32]; // 5ca2:a1d3
db dummyd_6e427[32]; // 5ca2:a1f3
db dummyd_6e447[32]; // 5ca2:a213
db dummyd_6e467[32]; // 5ca2:a233
db dummyd_6e487[32]; // 5ca2:a253
db dummyd_6e4a7[32]; // 5ca2:a273
db dummyd_6e4c7[32]; // 5ca2:a293
db dummyd_6e4e7[32]; // 5ca2:a2b3
db dummyd_6e507[32]; // 5ca2:a2d3
db dummyd_6e527[32]; // 5ca2:a2f3
db dummyd_6e547[32]; // 5ca2:a313
db dummyd_6e567[32]; // 5ca2:a333
db dummyd_6e587[32]; // 5ca2:a353
db dummyd_6e5a7[32]; // 5ca2:a373
db dummyd_6e5c7[32]; // 5ca2:a393
db dummyd_6e5e7[32]; // 5ca2:a3b3
db dummyd_6e607[32]; // 5ca2:a3d3
db dummyd_6e627[32]; // 5ca2:a3f3
db dummyd_6e647[32]; // 5ca2:a413
db dummyd_6e667[32]; // 5ca2:a433
db dummyd_6e687[32]; // 5ca2:a453
db dummyd_6e6a7[32]; // 5ca2:a473
db dummyd_6e6c7[32]; // 5ca2:a493
db dummyd_6e6e7[32]; // 5ca2:a4b3
db dummyd_6e707[32]; // 5ca2:a4d3
db dummyd_6e727[32]; // 5ca2:a4f3
db dummyd_6e747[32]; // 5ca2:a513
db dummyd_6e767[32]; // 5ca2:a533
db dummyd_6e787[32]; // 5ca2:a553
db dummyd_6e7a7[32]; // 5ca2:a573
db dummyd_6e7c7[32]; // 5ca2:a593
db dummyd_6e7e7[32]; // 5ca2:a5b3
db dummyd_6e807[32]; // 5ca2:a5d3
db dummyd_6e827[32]; // 5ca2:a5f3
db dummyd_6e847[32]; // 5ca2:a613
db dummyd_6e867[32]; // 5ca2:a633
db dummyd_6e887[32]; // 5ca2:a653
db dummyd_6e8a7[32]; // 5ca2:a673
db dummyd_6e8c7[32]; // 5ca2:a693
db dummyd_6e8e7[32]; // 5ca2:a6b3
db dummyd_6e907[32]; // 5ca2:a6d3
db dummyd_6e927[32]; // 5ca2:a6f3
db dummyd_6e947[32]; // 5ca2:a713
db dummyd_6e967[32]; // 5ca2:a733
db dummyd_6e987[32]; // 5ca2:a753
db dummyd_6e9a7[32]; // 5ca2:a773
db dummyd_6e9c7[32]; // 5ca2:a793
db dummyd_6e9e7[32]; // 5ca2:a7b3
db dummyd_6ea07[32]; // 5ca2:a7d3
db dummyd_6ea27[32]; // 5ca2:a7f3
db dummyd_6ea47[32]; // 5ca2:a813
db dummyd_6ea67[32]; // 5ca2:a833
db dummyd_6ea87[32]; // 5ca2:a853
db dummyd_6eaa7[32]; // 5ca2:a873
db dummyd_6eac7[32]; // 5ca2:a893
db dummyd_6eae7[32]; // 5ca2:a8b3
db dummyd_6eb07[32]; // 5ca2:a8d3
db dummyd_6eb27[32]; // 5ca2:a8f3
db dummyd_6eb47[32]; // 5ca2:a913
db dummyd_6eb67[32]; // 5ca2:a933
db dummyd_6eb87[32]; // 5ca2:a953
db dummyd_6eba7[32]; // 5ca2:a973
db dummyd_6ebc7[32]; // 5ca2:a993
db dummyd_6ebe7[32]; // 5ca2:a9b3
db dummyd_6ec07[32]; // 5ca2:a9d3
db dummyd_6ec27[32]; // 5ca2:a9f3
db dummyd_6ec47[32]; // 5ca2:aa13
db dummyd_6ec67[32]; // 5ca2:aa33
db dummyd_6ec87[32]; // 5ca2:aa53
db dummyd_6eca7[32]; // 5ca2:aa73
db dummyd_6ecc7[32]; // 5ca2:aa93
db dummyd_6ece7[32]; // 5ca2:aab3
db dummyd_6ed07[32]; // 5ca2:aad3
db dummyd_6ed27[32]; // 5ca2:aaf3
db dummyd_6ed47[32]; // 5ca2:ab13
db dummyd_6ed67[32]; // 5ca2:ab33
db dummyd_6ed87[32]; // 5ca2:ab53
db dummyd_6eda7[32]; // 5ca2:ab73
db dummyd_6edc7[32]; // 5ca2:ab93
db dummyd_6ede7[32]; // 5ca2:abb3
db dummyd_6ee07[32]; // 5ca2:abd3
db dummyd_6ee27[32]; // 5ca2:abf3
db dummyd_6ee47[32]; // 5ca2:ac13
db dummyd_6ee67[32]; // 5ca2:ac33
db dummyd_6ee87[32]; // 5ca2:ac53
db dummyd_6eea7[32]; // 5ca2:ac73
db dummyd_6eec7[32]; // 5ca2:ac93
db dummyd_6eee7[32]; // 5ca2:acb3
db dummyd_6ef07[32]; // 5ca2:acd3
db dummyd_6ef27[32]; // 5ca2:acf3
db dummyd_6ef47[32]; // 5ca2:ad13
db dummyd_6ef67[32]; // 5ca2:ad33
db dummyd_6ef87[32]; // 5ca2:ad53
db dummyd_6efa7[32]; // 5ca2:ad73
db dummyd_6efc7[32]; // 5ca2:ad93
db dummyd_6efe7[32]; // 5ca2:adb3
db dummyd_6f007[32]; // 5ca2:add3
db dummyd_6f027[32]; // 5ca2:adf3
db dummyd_6f047[32]; // 5ca2:ae13
db dummyd_6f067[32]; // 5ca2:ae33
db dummyd_6f087[32]; // 5ca2:ae53
db dummyd_6f0a7[32]; // 5ca2:ae73
db dummyd_6f0c7[32]; // 5ca2:ae93
db dummyd_6f0e7[32]; // 5ca2:aeb3
db dummyd_6f107[32]; // 5ca2:aed3
db dummyd_6f127[32]; // 5ca2:aef3
db dummyd_6f147[32]; // 5ca2:af13
db dummyd_6f167[32]; // 5ca2:af33
db dummyd_6f187[32]; // 5ca2:af53
db dummyd_6f1a7[32]; // 5ca2:af73
db dummyd_6f1c7[32]; // 5ca2:af93
db dummyd_6f1e7[32]; // 5ca2:afb3
db dummyd_6f207[32]; // 5ca2:afd3
db dummyd_6f227[32]; // 5ca2:aff3
db dummyd_6f247[32]; // 5ca2:b013
db dummyd_6f267[32]; // 5ca2:b033
db dummyd_6f287[32]; // 5ca2:b053
db dummyd_6f2a7[32]; // 5ca2:b073
db dummyd_6f2c7[32]; // 5ca2:b093
db dummyd_6f2e7[32]; // 5ca2:b0b3
db dummyd_6f307[32]; // 5ca2:b0d3
db dummyd_6f327[32]; // 5ca2:b0f3
db dummyd_6f347[32]; // 5ca2:b113
db dummyd_6f367[32]; // 5ca2:b133
db dummyd_6f387[32]; // 5ca2:b153
db dummyd_6f3a7[32]; // 5ca2:b173
db dummyd_6f3c7[32]; // 5ca2:b193
db dummyd_6f3e7[32]; // 5ca2:b1b3
db dummyd_6f407[32]; // 5ca2:b1d3
db dummyd_6f427[32]; // 5ca2:b1f3
db dummyd_6f447[32]; // 5ca2:b213
db dummyd_6f467[32]; // 5ca2:b233
db dummyd_6f487[32]; // 5ca2:b253
db dummyd_6f4a7[32]; // 5ca2:b273
db dummyd_6f4c7[32]; // 5ca2:b293
db dummyd_6f4e7[32]; // 5ca2:b2b3
db dummyd_6f507[32]; // 5ca2:b2d3
db dummyd_6f527[32]; // 5ca2:b2f3
db dummyd_6f547[32]; // 5ca2:b313
db dummyd_6f567[32]; // 5ca2:b333
db dummyd_6f587[32]; // 5ca2:b353
db dummyd_6f5a7[32]; // 5ca2:b373
db dummyd_6f5c7[32]; // 5ca2:b393
db dummyd_6f5e7[32]; // 5ca2:b3b3
db dummyd_6f607[32]; // 5ca2:b3d3
db dummyd_6f627[32]; // 5ca2:b3f3
db dummyd_6f647[32]; // 5ca2:b413
db dummyd_6f667[32]; // 5ca2:b433
db dummyd_6f687[32]; // 5ca2:b453
db dummyd_6f6a7[32]; // 5ca2:b473
db dummyd_6f6c7[32]; // 5ca2:b493
db dummyd_6f6e7[32]; // 5ca2:b4b3
db dummyd_6f707[32]; // 5ca2:b4d3
db dummyd_6f727[32]; // 5ca2:b4f3
db dummyd_6f747[32]; // 5ca2:b513
db dummyd_6f767[32]; // 5ca2:b533
db dummyd_6f787[32]; // 5ca2:b553
db dummyd_6f7a7[32]; // 5ca2:b573
db dummyd_6f7c7[32]; // 5ca2:b593
db dummyd_6f7e7[32]; // 5ca2:b5b3
db dummyd_6f807[32]; // 5ca2:b5d3
db dummyd_6f827[32]; // 5ca2:b5f3
db dummyd_6f847[32]; // 5ca2:b613
db dummyd_6f867[32]; // 5ca2:b633
db dummyd_6f887[32]; // 5ca2:b653
db dummyd_6f8a7[32]; // 5ca2:b673
db dummyd_6f8c7[32]; // 5ca2:b693
db dummyd_6f8e7[32]; // 5ca2:b6b3
db dummyd_6f907[32]; // 5ca2:b6d3
db dummyd_6f927[32]; // 5ca2:b6f3
db dummyd_6f947[32]; // 5ca2:b713
db dummyd_6f967[32]; // 5ca2:b733
db dummyd_6f987[32]; // 5ca2:b753
db dummyd_6f9a7[32]; // 5ca2:b773
db dummyd_6f9c7[32]; // 5ca2:b793
db dummyd_6f9e7[32]; // 5ca2:b7b3
db dummyd_6fa07[32]; // 5ca2:b7d3
db dummyd_6fa27[32]; // 5ca2:b7f3
db dummyd_6fa47[32]; // 5ca2:b813
db dummyd_6fa67[32]; // 5ca2:b833
db dummyd_6fa87[32]; // 5ca2:b853
db dummyd_6faa7[32]; // 5ca2:b873
db dummyd_6fac7[32]; // 5ca2:b893
db dummyd_6fae7[32]; // 5ca2:b8b3
db dummyd_6fb07[32]; // 5ca2:b8d3
db dummyd_6fb27[32]; // 5ca2:b8f3
db dummyd_6fb47[32]; // 5ca2:b913
db dummyd_6fb67[32]; // 5ca2:b933
db dummyd_6fb87[32]; // 5ca2:b953
db dummyd_6fba7[32]; // 5ca2:b973
db dummyd_6fbc7[32]; // 5ca2:b993
db dummyd_6fbe7[32]; // 5ca2:b9b3
db dummyd_6fc07[32]; // 5ca2:b9d3
db dummyd_6fc27[32]; // 5ca2:b9f3
db dummyd_6fc47[32]; // 5ca2:ba13
db dummyd_6fc67[32]; // 5ca2:ba33
db dummyd_6fc87[32]; // 5ca2:ba53
db dummyd_6fca7[32]; // 5ca2:ba73
db dummyd_6fcc7[32]; // 5ca2:ba93
db dummyd_6fce7[32]; // 5ca2:bab3
db dummyd_6fd07[32]; // 5ca2:bad3
db dummyd_6fd27[32]; // 5ca2:baf3
db dummyd_6fd47[32]; // 5ca2:bb13
db dummyd_6fd67[32]; // 5ca2:bb33
db dummyd_6fd87[32]; // 5ca2:bb53
db dummyd_6fda7[32]; // 5ca2:bb73
db dummyd_6fdc7[32]; // 5ca2:bb93
db dummyd_6fde7[32]; // 5ca2:bbb3
db dummyd_6fe07[32]; // 5ca2:bbd3
db dummyd_6fe27[32]; // 5ca2:bbf3
db dummyd_6fe47[32]; // 5ca2:bc13
db dummyd_6fe67[32]; // 5ca2:bc33
db dummyd_6fe87[32]; // 5ca2:bc53
db dummyd_6fea7[32]; // 5ca2:bc73
db dummyd_6fec7[32]; // 5ca2:bc93
db dummyd_6fee7[32]; // 5ca2:bcb3
db dummyd_6ff07[32]; // 5ca2:bcd3
db dummyd_6ff27[32]; // 5ca2:bcf3
db dummyd_6ff47[32]; // 5ca2:bd13
db dummyd_6ff67[32]; // 5ca2:bd33
db dummyd_6ff87[32]; // 5ca2:bd53
db dummyd_6ffa7[32]; // 5ca2:bd73
db dummyd_6ffc7[32]; // 5ca2:bd93
db dummyd_6ffe7[32]; // 5ca2:bdb3
db dummyd_70007[32]; // 5ca2:bdd3
db dummyd_70027[32]; // 5ca2:bdf3
db dummyd_70047[32]; // 5ca2:be13
db dummyd_70067[32]; // 5ca2:be33
db dummyd_70087[32]; // 5ca2:be53
db dummyd_700a7[32]; // 5ca2:be73
db dummyd_700c7[32]; // 5ca2:be93
db dummyd_700e7[32]; // 5ca2:beb3
db dummyd_70107[32]; // 5ca2:bed3
db dummyd_70127[32]; // 5ca2:bef3
db dummyd_70147[32]; // 5ca2:bf13
db dummyd_70167[32]; // 5ca2:bf33
db dummyd_70187[32]; // 5ca2:bf53
db dummyd_701a7[32]; // 5ca2:bf73
db dummyd_701c7[32]; // 5ca2:bf93
db dummyd_701e7[32]; // 5ca2:bfb3
db dummyd_70207[32]; // 5ca2:bfd3
db dummyd_70227[32]; // 5ca2:bff3
db dummyd_70247[32]; // 5ca2:c013
db dummyd_70267[32]; // 5ca2:c033
db dummyd_70287[32]; // 5ca2:c053
db dummyd_702a7[32]; // 5ca2:c073
db dummyd_702c7[32]; // 5ca2:c093
db dummyd_702e7[32]; // 5ca2:c0b3
db dummyd_70307[32]; // 5ca2:c0d3
db dummyd_70327[32]; // 5ca2:c0f3
db dummyd_70347[32]; // 5ca2:c113
db dummyd_70367[32]; // 5ca2:c133
db dummyd_70387[32]; // 5ca2:c153
db dummyd_703a7[32]; // 5ca2:c173
db dummyd_703c7[32]; // 5ca2:c193
db dummyd_703e7[32]; // 5ca2:c1b3
db dummyd_70407[32]; // 5ca2:c1d3
db dummyd_70427[32]; // 5ca2:c1f3
db dummyd_70447[32]; // 5ca2:c213
db dummyd_70467[32]; // 5ca2:c233
db dummyd_70487[32]; // 5ca2:c253
db dummyd_704a7[32]; // 5ca2:c273
db dummyd_704c7[32]; // 5ca2:c293
db dummyd_704e7[32]; // 5ca2:c2b3
db dummyd_70507[32]; // 5ca2:c2d3
db dummyd_70527[32]; // 5ca2:c2f3
db dummyd_70547[32]; // 5ca2:c313
db dummyd_70567[32]; // 5ca2:c333
db dummyd_70587[32]; // 5ca2:c353
db dummyd_705a7[32]; // 5ca2:c373
db dummyd_705c7[32]; // 5ca2:c393
db dummyd_705e7[32]; // 5ca2:c3b3
db dummyd_70607[32]; // 5ca2:c3d3
db dummyd_70627[32]; // 5ca2:c3f3
db dummyd_70647[32]; // 5ca2:c413
db dummyd_70667[32]; // 5ca2:c433
db dummyd_70687[32]; // 5ca2:c453
db dummyd_706a7[32]; // 5ca2:c473
db dummyd_706c7[32]; // 5ca2:c493
db dummyd_706e7[32]; // 5ca2:c4b3
db dummyd_70707[32]; // 5ca2:c4d3
db dummyd_70727[32]; // 5ca2:c4f3
db dummyd_70747[32]; // 5ca2:c513
db dummyd_70767[32]; // 5ca2:c533
db dummyd_70787[32]; // 5ca2:c553
db dummyd_707a7[32]; // 5ca2:c573
db dummyd_707c7[32]; // 5ca2:c593
db dummyd_707e7[32]; // 5ca2:c5b3
db dummyd_70807[32]; // 5ca2:c5d3
db dummyd_70827[32]; // 5ca2:c5f3
db dummyd_70847[32]; // 5ca2:c613
db dummyd_70867[32]; // 5ca2:c633
db dummyd_70887[32]; // 5ca2:c653
db dummyd_708a7[32]; // 5ca2:c673
db dummyd_708c7[32]; // 5ca2:c693
db dummyd_708e7[32]; // 5ca2:c6b3
db dummyd_70907[32]; // 5ca2:c6d3
db dummyd_70927[32]; // 5ca2:c6f3
db dummyd_70947[32]; // 5ca2:c713
db dummyd_70967[32]; // 5ca2:c733
db dummyd_70987[32]; // 5ca2:c753
db dummyd_709a7[32]; // 5ca2:c773
db dummyd_709c7[32]; // 5ca2:c793
db dummyd_709e7[32]; // 5ca2:c7b3
db dummyd_70a07[32]; // 5ca2:c7d3
db dummyd_70a27[32]; // 5ca2:c7f3
db dummyd_70a47[32]; // 5ca2:c813
db dummyd_70a67[32]; // 5ca2:c833
db dummyd_70a87[32]; // 5ca2:c853
db dummyd_70aa7[32]; // 5ca2:c873
db dummyd_70ac7[32]; // 5ca2:c893
db dummyd_70ae7[32]; // 5ca2:c8b3
db dummyd_70b07[32]; // 5ca2:c8d3
db dummyd_70b27[32]; // 5ca2:c8f3
db dummyd_70b47[32]; // 5ca2:c913
db dummyd_70b67[32]; // 5ca2:c933
db dummyd_70b87[32]; // 5ca2:c953
db dummyd_70ba7[32]; // 5ca2:c973
db dummyd_70bc7[32]; // 5ca2:c993
db dummyd_70be7[32]; // 5ca2:c9b3
db dummyd_70c07[32]; // 5ca2:c9d3
db dummyd_70c27[32]; // 5ca2:c9f3
db dummyd_70c47[32]; // 5ca2:ca13
db dummyd_70c67[32]; // 5ca2:ca33
db dummyd_70c87[32]; // 5ca2:ca53
db dummyd_70ca7[32]; // 5ca2:ca73
db dummyd_70cc7[32]; // 5ca2:ca93
db dummyd_70ce7[32]; // 5ca2:cab3
db dummyd_70d07[32]; // 5ca2:cad3
db dummyd_70d27[32]; // 5ca2:caf3
db dummyd_70d47[32]; // 5ca2:cb13
db dummyd_70d67[32]; // 5ca2:cb33
db dummyd_70d87[32]; // 5ca2:cb53
db dummyd_70da7[32]; // 5ca2:cb73
db dummyd_70dc7[32]; // 5ca2:cb93
db dummyd_70de7[32]; // 5ca2:cbb3
db dummyd_70e07[32]; // 5ca2:cbd3
db dummyd_70e27[32]; // 5ca2:cbf3
db dummyd_70e47[32]; // 5ca2:cc13
db dummyd_70e67[32]; // 5ca2:cc33
db dummyd_70e87[32]; // 5ca2:cc53
db dummyd_70ea7[32]; // 5ca2:cc73
db dummyd_70ec7[32]; // 5ca2:cc93
db dummyd_70ee7[32]; // 5ca2:ccb3
db dummyd_70f07[32]; // 5ca2:ccd3
db dummyd_70f27[32]; // 5ca2:ccf3
db dummyd_70f47[32]; // 5ca2:cd13
db dummyd_70f67[32]; // 5ca2:cd33
db dummyd_70f87[32]; // 5ca2:cd53
db dummyd_70fa7[32]; // 5ca2:cd73
db dummyd_70fc7[32]; // 5ca2:cd93
db dummyd_70fe7[32]; // 5ca2:cdb3
db dummyd_71007[32]; // 5ca2:cdd3
db dummyd_71027[32]; // 5ca2:cdf3
db dummyd_71047[32]; // 5ca2:ce13
db dummyd_71067[32]; // 5ca2:ce33
db dummyd_71087[32]; // 5ca2:ce53
db dummyd_710a7[32]; // 5ca2:ce73
db dummyd_710c7[32]; // 5ca2:ce93
db dummyd_710e7[32]; // 5ca2:ceb3
db dummyd_71107[32]; // 5ca2:ced3
db dummyd_71127[32]; // 5ca2:cef3
db dummyd_71147[32]; // 5ca2:cf13
db dummyd_71167[32]; // 5ca2:cf33
db dummyd_71187[32]; // 5ca2:cf53
db dummyd_711a7[32]; // 5ca2:cf73
db dummyd_711c7[32]; // 5ca2:cf93
db dummyd_711e7[32]; // 5ca2:cfb3
db dummyd_71207[32]; // 5ca2:cfd3
db dummyd_71227[32]; // 5ca2:cff3
db dummyd_71247[32]; // 5ca2:d013
db dummyd_71267[32]; // 5ca2:d033
db dummyd_71287[32]; // 5ca2:d053
db dummyd_712a7[32]; // 5ca2:d073
db dummyd_712c7[32]; // 5ca2:d093
db dummyd_712e7[32]; // 5ca2:d0b3
db dummyd_71307[32]; // 5ca2:d0d3
db dummyd_71327[32]; // 5ca2:d0f3
db dummyd_71347[32]; // 5ca2:d113
db dummyd_71367[32]; // 5ca2:d133
db dummyd_71387[32]; // 5ca2:d153
db dummyd_713a7[32]; // 5ca2:d173
db dummyd_713c7[32]; // 5ca2:d193
db dummyd_713e7[32]; // 5ca2:d1b3
db dummyd_71407[32]; // 5ca2:d1d3
db dummyd_71427[32]; // 5ca2:d1f3
db dummyd_71447[32]; // 5ca2:d213
db dummyd_71467[32]; // 5ca2:d233
db dummyd_71487[32]; // 5ca2:d253
db dummyd_714a7[32]; // 5ca2:d273
db dummyd_714c7[32]; // 5ca2:d293
db dummyd_714e7[32]; // 5ca2:d2b3
db dummyd_71507[32]; // 5ca2:d2d3
db dummyd_71527[32]; // 5ca2:d2f3
db dummyd_71547[32]; // 5ca2:d313
db dummyd_71567[32]; // 5ca2:d333
db dummyd_71587[32]; // 5ca2:d353
db dummyd_715a7[32]; // 5ca2:d373
db dummyd_715c7[32]; // 5ca2:d393
db dummyd_715e7[32]; // 5ca2:d3b3
db dummyd_71607[32]; // 5ca2:d3d3
db dummyd_71627[32]; // 5ca2:d3f3
db dummyd_71647[32]; // 5ca2:d413
db dummyd_71667[32]; // 5ca2:d433
db dummyd_71687[32]; // 5ca2:d453
db dummyd_716a7[32]; // 5ca2:d473
db dummyd_716c7[32]; // 5ca2:d493
db dummyd_716e7[32]; // 5ca2:d4b3
db dummyd_71707[32]; // 5ca2:d4d3
db dummyd_71727[32]; // 5ca2:d4f3
db dummyd_71747[32]; // 5ca2:d513
db dummyd_71767[32]; // 5ca2:d533
db dummyd_71787[32]; // 5ca2:d553
db dummyd_717a7[32]; // 5ca2:d573
db dummyd_717c7[32]; // 5ca2:d593
db dummyd_717e7[32]; // 5ca2:d5b3
db dummyd_71807[32]; // 5ca2:d5d3
db dummyd_71827[32]; // 5ca2:d5f3
db dummyd_71847[32]; // 5ca2:d613
db dummyd_71867[32]; // 5ca2:d633
db dummyd_71887[32]; // 5ca2:d653
db dummyd_718a7[32]; // 5ca2:d673
db dummyd_718c7[32]; // 5ca2:d693
db dummyd_718e7[32]; // 5ca2:d6b3
db dummyd_71907[32]; // 5ca2:d6d3
db dummyd_71927[32]; // 5ca2:d6f3
db dummyd_71947[32]; // 5ca2:d713
db dummyd_71967[32]; // 5ca2:d733
db dummyd_71987[32]; // 5ca2:d753
db dummyd_719a7[32]; // 5ca2:d773
db dummyd_719c7[32]; // 5ca2:d793
db dummyd_719e7[32]; // 5ca2:d7b3
db dummyd_71a07[32]; // 5ca2:d7d3
db dummyd_71a27[32]; // 5ca2:d7f3
db dummyd_71a47[32]; // 5ca2:d813
db dummyd_71a67[32]; // 5ca2:d833
db dummyd_71a87[32]; // 5ca2:d853
db dummyd_71aa7[32]; // 5ca2:d873
db dummyd_71ac7[32]; // 5ca2:d893
db dummyd_71ae7[32]; // 5ca2:d8b3
db dummyd_71b07[32]; // 5ca2:d8d3
db dummyd_71b27[32]; // 5ca2:d8f3
db dummyd_71b47[32]; // 5ca2:d913
db dummyd_71b67[32]; // 5ca2:d933
db dummyd_71b87[32]; // 5ca2:d953
db dummyd_71ba7[32]; // 5ca2:d973
db dummyd_71bc7[32]; // 5ca2:d993
db dummyd_71be7[32]; // 5ca2:d9b3
db dummyd_71c07[32]; // 5ca2:d9d3
db dummyd_71c27[32]; // 5ca2:d9f3
db dummyd_71c47[32]; // 5ca2:da13
db dummyd_71c67[32]; // 5ca2:da33
db dummyd_71c87[32]; // 5ca2:da53
db dummyd_71ca7[32]; // 5ca2:da73
db dummyd_71cc7[32]; // 5ca2:da93
db dummyd_71ce7[32]; // 5ca2:dab3
db dummyd_71d07[32]; // 5ca2:dad3
db dummyd_71d27[32]; // 5ca2:daf3
db dummyd_71d47[32]; // 5ca2:db13
db dummyd_71d67[32]; // 5ca2:db33
db dummyd_71d87[32]; // 5ca2:db53
db dummyd_71da7[32]; // 5ca2:db73
db dummyd_71dc7[32]; // 5ca2:db93
db dummyd_71de7[32]; // 5ca2:dbb3
db dummyd_71e07[32]; // 5ca2:dbd3
db dummyd_71e27[32]; // 5ca2:dbf3
db dummyd_71e47[32]; // 5ca2:dc13
db dummyd_71e67[32]; // 5ca2:dc33
db dummyd_71e87[32]; // 5ca2:dc53
db dummyd_71ea7[32]; // 5ca2:dc73
db dummyd_71ec7[32]; // 5ca2:dc93
db dummyd_71ee7[32]; // 5ca2:dcb3
db dummyd_71f07[32]; // 5ca2:dcd3
db dummyd_71f27[32]; // 5ca2:dcf3
db dummyd_71f47[32]; // 5ca2:dd13
db dummyd_71f67[32]; // 5ca2:dd33
db dummyd_71f87[32]; // 5ca2:dd53
db dummyd_71fa7[32]; // 5ca2:dd73
db dummyd_71fc7[32]; // 5ca2:dd93
db dummyd_71fe7[32]; // 5ca2:ddb3
db dummyd_72007[32]; // 5ca2:ddd3
db dummyd_72027[32]; // 5ca2:ddf3
db dummyd_72047[32]; // 5ca2:de13
db dummyd_72067[32]; // 5ca2:de33
db dummyd_72087[32]; // 5ca2:de53
db dummyd_720a7[32]; // 5ca2:de73
db dummyd_720c7[32]; // 5ca2:de93
db dummyd_720e7[32]; // 5ca2:deb3
db dummyd_72107[32]; // 5ca2:ded3
db dummyd_72127[32]; // 5ca2:def3
db dummyd_72147[32]; // 5ca2:df13
db dummyd_72167[32]; // 5ca2:df33
db dummyd_72187[32]; // 5ca2:df53
db dummyd_721a7[32]; // 5ca2:df73
db dummyd_721c7[32]; // 5ca2:df93
db dummyd_721e7[32]; // 5ca2:dfb3
db dummyd_72207[32]; // 5ca2:dfd3
db dummyd_72227[32]; // 5ca2:dff3
db dummyd_72247[32]; // 5ca2:e013
db dummyd_72267[32]; // 5ca2:e033
db dummyd_72287[32]; // 5ca2:e053
db dummyd_722a7[32]; // 5ca2:e073
db dummyd_722c7[32]; // 5ca2:e093
db dummyd_722e7[32]; // 5ca2:e0b3
db dummyd_72307[32]; // 5ca2:e0d3
db dummyd_72327[32]; // 5ca2:e0f3
db dummyd_72347[32]; // 5ca2:e113
db dummyd_72367[32]; // 5ca2:e133
db dummyd_72387[32]; // 5ca2:e153
db dummyd_723a7[32]; // 5ca2:e173
db dummyd_723c7[32]; // 5ca2:e193
db dummyd_723e7[32]; // 5ca2:e1b3
db dummyd_72407[32]; // 5ca2:e1d3
db dummyd_72427[32]; // 5ca2:e1f3
db dummyd_72447[32]; // 5ca2:e213
db dummyd_72467[32]; // 5ca2:e233
db dummyd_72487[32]; // 5ca2:e253
db dummyd_724a7[32]; // 5ca2:e273
db dummyd_724c7[32]; // 5ca2:e293
db dummyd_724e7[32]; // 5ca2:e2b3
db dummyd_72507[32]; // 5ca2:e2d3
db dummyd_72527[32]; // 5ca2:e2f3
db dummyd_72547[32]; // 5ca2:e313
db dummyd_72567[32]; // 5ca2:e333
db dummyd_72587[32]; // 5ca2:e353
db dummyd_725a7[32]; // 5ca2:e373
db dummyd_725c7[32]; // 5ca2:e393
db dummyd_725e7[32]; // 5ca2:e3b3
db dummyd_72607[32]; // 5ca2:e3d3
db dummyd_72627[32]; // 5ca2:e3f3
db dummyd_72647[32]; // 5ca2:e413
db dummyd_72667[32]; // 5ca2:e433
db dummyd_72687[32]; // 5ca2:e453
db dummyd_726a7[32]; // 5ca2:e473
db dummyd_726c7[32]; // 5ca2:e493
db dummyd_726e7[32]; // 5ca2:e4b3
db dummyd_72707[32]; // 5ca2:e4d3
db dummyd_72727[32]; // 5ca2:e4f3
db dummyd_72747[32]; // 5ca2:e513
db dummyd_72767[32]; // 5ca2:e533
db dummyd_72787[32]; // 5ca2:e553
db dummyd_727a7[32]; // 5ca2:e573
db dummyd_727c7[32]; // 5ca2:e593
db dummyd_727e7[32]; // 5ca2:e5b3
db dummyd_72807[32]; // 5ca2:e5d3
db dummyd_72827[32]; // 5ca2:e5f3
db dummyd_72847[32]; // 5ca2:e613
db dummyd_72867[32]; // 5ca2:e633
db dummyd_72887[32]; // 5ca2:e653
db dummyd_728a7[32]; // 5ca2:e673
db dummyd_728c7[32]; // 5ca2:e693
db dummyd_728e7[32]; // 5ca2:e6b3
db dummyd_72907[32]; // 5ca2:e6d3
db dummyd_72927[32]; // 5ca2:e6f3
db dummyd_72947[32]; // 5ca2:e713
db dummyd_72967[32]; // 5ca2:e733
db dummyd_72987[32]; // 5ca2:e753
db dummyd_729a7[32]; // 5ca2:e773
db dummyd_729c7[32]; // 5ca2:e793
db dummyd_729e7[32]; // 5ca2:e7b3
db dummyd_72a07[32]; // 5ca2:e7d3
db dummyd_72a27[32]; // 5ca2:e7f3
db dummyd_72a47[32]; // 5ca2:e813
db dummyd_72a67[32]; // 5ca2:e833
db dummyd_72a87[32]; // 5ca2:e853
db dummyd_72aa7[32]; // 5ca2:e873
db dummyd_72ac7[32]; // 5ca2:e893
db dummyd_72ae7[32]; // 5ca2:e8b3
db dummyd_72b07[32]; // 5ca2:e8d3
db dummyd_72b27[32]; // 5ca2:e8f3
db dummyd_72b47[32]; // 5ca2:e913
db dummyd_72b67[32]; // 5ca2:e933
db dummyd_72b87[32]; // 5ca2:e953
db dummyd_72ba7[32]; // 5ca2:e973
db dummyd_72bc7[32]; // 5ca2:e993
db dummyd_72be7[32]; // 5ca2:e9b3
db dummyd_72c07[32]; // 5ca2:e9d3
db dummyd_72c27[32]; // 5ca2:e9f3
db dummyd_72c47[32]; // 5ca2:ea13
db dummyd_72c67[32]; // 5ca2:ea33
db dummyd_72c87[32]; // 5ca2:ea53
db dummyd_72ca7[32]; // 5ca2:ea73
db dummyd_72cc7[32]; // 5ca2:ea93
db dummyd_72ce7[32]; // 5ca2:eab3
db dummyd_72d07[32]; // 5ca2:ead3
db dummyd_72d27[32]; // 5ca2:eaf3
db dummyd_72d47[32]; // 5ca2:eb13
db dummyd_72d67[32]; // 5ca2:eb33
db dummyd_72d87[32]; // 5ca2:eb53
db dummyd_72da7[32]; // 5ca2:eb73
db dummyd_72dc7[32]; // 5ca2:eb93
db dummyd_72de7[32]; // 5ca2:ebb3
db dummyd_72e07[32]; // 5ca2:ebd3
db dummyd_72e27[32]; // 5ca2:ebf3
db dummyd_72e47[32]; // 5ca2:ec13
db dummyd_72e67[32]; // 5ca2:ec33
db dummyd_72e87[32]; // 5ca2:ec53
db dummyd_72ea7[32]; // 5ca2:ec73
db dummyd_72ec7[32]; // 5ca2:ec93
db dummyd_72ee7[32]; // 5ca2:ecb3
db dummyd_72f07[32]; // 5ca2:ecd3
db dummyd_72f27[32]; // 5ca2:ecf3
db dummyd_72f47[32]; // 5ca2:ed13
db dummyd_72f67[32]; // 5ca2:ed33
db dummyd_72f87[32]; // 5ca2:ed53
db dummyd_72fa7[32]; // 5ca2:ed73
db dummyd_72fc7[32]; // 5ca2:ed93
db dummyd_72fe7[32]; // 5ca2:edb3
db dummyd_73007[32]; // 5ca2:edd3
db dummyd_73027[32]; // 5ca2:edf3
db dummyd_73047[32]; // 5ca2:ee13
db dummyd_73067[32]; // 5ca2:ee33
db dummyd_73087[32]; // 5ca2:ee53
db dummyd_730a7[32]; // 5ca2:ee73
db dummyd_730c7[32]; // 5ca2:ee93
db dummyd_730e7[32]; // 5ca2:eeb3
db dummyd_73107[32]; // 5ca2:eed3
db dummyd_73127[32]; // 5ca2:eef3
db dummyd_73147[32]; // 5ca2:ef13
db dummyd_73167[32]; // 5ca2:ef33
db dummyd_73187[32]; // 5ca2:ef53
db dummyd_731a7[32]; // 5ca2:ef73
db dummyd_731c7[32]; // 5ca2:ef93
db dummyd_731e7[32]; // 5ca2:efb3
db dummyd_73207[32]; // 5ca2:efd3
db dummyd_73227[32]; // 5ca2:eff3
db dummyd_73247[32]; // 5ca2:f013
db dummyd_73267[32]; // 5ca2:f033
db dummyd_73287[32]; // 5ca2:f053
db dummyd_732a7[32]; // 5ca2:f073
db dummyd_732c7[32]; // 5ca2:f093
db dummyd_732e7[32]; // 5ca2:f0b3
db dummyd_73307[32]; // 5ca2:f0d3
db dummyd_73327[32]; // 5ca2:f0f3
db dummyd_73347[32]; // 5ca2:f113
db dummyd_73367[32]; // 5ca2:f133
db dummyd_73387[32]; // 5ca2:f153
db dummyd_733a7[32]; // 5ca2:f173
db dummyd_733c7[32]; // 5ca2:f193
db dummyd_733e7[32]; // 5ca2:f1b3
db dummyd_73407[32]; // 5ca2:f1d3
db dummyd_73427[32]; // 5ca2:f1f3
db dummyd_73447[32]; // 5ca2:f213
db dummyd_73467[32]; // 5ca2:f233
db dummyd_73487[32]; // 5ca2:f253
db dummyd_734a7[32]; // 5ca2:f273
db dummyd_734c7[32]; // 5ca2:f293
db dummyd_734e7[32]; // 5ca2:f2b3
db dummyd_73507[32]; // 5ca2:f2d3
db dummyd_73527[32]; // 5ca2:f2f3
db dummyd_73547[32]; // 5ca2:f313
db dummyd_73567[32]; // 5ca2:f333
db dummyd_73587[32]; // 5ca2:f353
db dummyd_735a7[32]; // 5ca2:f373
db dummyd_735c7[32]; // 5ca2:f393
db dummyd_735e7[32]; // 5ca2:f3b3
db dummyd_73607[32]; // 5ca2:f3d3
db dummyd_73627[32]; // 5ca2:f3f3
db dummyd_73647[32]; // 5ca2:f413
db dummyd_73667[32]; // 5ca2:f433
db dummyd_73687[32]; // 5ca2:f453
db dummyd_736a7[32]; // 5ca2:f473
db dummyd_736c7[32]; // 5ca2:f493
db dummyd_736e7[32]; // 5ca2:f4b3
db dummyd_73707[32]; // 5ca2:f4d3
db dummyd_73727[32]; // 5ca2:f4f3
db dummyd_73747[32]; // 5ca2:f513
db dummyd_73767[32]; // 5ca2:f533
db dummyd_73787[32]; // 5ca2:f553
db dummyd_737a7[32]; // 5ca2:f573
db dummyd_737c7[32]; // 5ca2:f593
db dummyd_737e7[32]; // 5ca2:f5b3
db dummyd_73807[32]; // 5ca2:f5d3
db dummyd_73827[32]; // 5ca2:f5f3
db dummyd_73847[32]; // 5ca2:f613
db dummyd_73867[32]; // 5ca2:f633
db dummyd_73887[32]; // 5ca2:f653
db dummyd_738a7[32]; // 5ca2:f673
db dummyd_738c7[32]; // 5ca2:f693
db dummyd_738e7[32]; // 5ca2:f6b3
db dummyd_73907[32]; // 5ca2:f6d3
db dummyd_73927[32]; // 5ca2:f6f3
db dummyd_73947[32]; // 5ca2:f713
db dummyd_73967[32]; // 5ca2:f733
db dummyd_73987[32]; // 5ca2:f753
db dummyd_739a7[32]; // 5ca2:f773
db dummyd_739c7[32]; // 5ca2:f793
db dummyd_739e7[32]; // 5ca2:f7b3
db dummyd_73a07[32]; // 5ca2:f7d3
db dummyd_73a27[32]; // 5ca2:f7f3
db dummyd_73a47[32]; // 5ca2:f813
db dummyd_73a67[32]; // 5ca2:f833
db dummyd_73a87[32]; // 5ca2:f853
db dummyd_73aa7[32]; // 5ca2:f873
db dummyd_73ac7[32]; // 5ca2:f893
db dummyd_73ae7[32]; // 5ca2:f8b3
db dummyd_73b07[32]; // 5ca2:f8d3
db dummyd_73b27[32]; // 5ca2:f8f3
db dummyd_73b47[32]; // 5ca2:f913
db dummyd_73b67[32]; // 5ca2:f933
db dummyd_73b87[32]; // 5ca2:f953
db dummyd_73ba7[32]; // 5ca2:f973
db dummyd_73bc7[32]; // 5ca2:f993
db dummyd_73be7[32]; // 5ca2:f9b3
db dummyd_73c07[32]; // 5ca2:f9d3
db dummyd_73c27[32]; // 5ca2:f9f3
db dummyd_73c47[32]; // 5ca2:fa13
db dummyd_73c67[32]; // 5ca2:fa33
db dummyd_73c87[32]; // 5ca2:fa53
db dummyd_73ca7[32]; // 5ca2:fa73
db dummyd_73cc7[32]; // 5ca2:fa93
db dummyd_73ce7[32]; // 5ca2:fab3
db dummyd_73d07[32]; // 5ca2:fad3
db dummyd_73d27[32]; // 5ca2:faf3
db dummyd_73d47[32]; // 5ca2:fb13
db dummyd_73d67[32]; // 5ca2:fb33
db dummyd_73d87[32]; // 5ca2:fb53
db dummyd_73da7[32]; // 5ca2:fb73
db dummyd_73dc7[32]; // 5ca2:fb93
db dummyd_73de7[32]; // 5ca2:fbb3
db dummyd_73e07[32]; // 5ca2:fbd3
db dummyd_73e27[32]; // 5ca2:fbf3
db dummyd_73e47[32]; // 5ca2:fc13
db dummyd_73e67[32]; // 5ca2:fc33
db dummyd_73e87[32]; // 5ca2:fc53
db dummyd_73ea7[32]; // 5ca2:fc73
db dummyd_73ec7[32]; // 5ca2:fc93
db dummyd_73ee7[32]; // 5ca2:fcb3
db dummyd_73f07[32]; // 5ca2:fcd3
db dummyd_73f27[32]; // 5ca2:fcf3
db dummyd_73f47[32]; // 5ca2:fd13
db dummyd_73f67[32]; // 5ca2:fd33
db dummyd_73f87[32]; // 5ca2:fd53
db dummyd_73fa7[32]; // 5ca2:fd73
db dummyd_73fc7[32]; // 5ca2:fd93
db dummyd_73fe7[32]; // 5ca2:fdb3
db dummyd_74007[32]; // 5ca2:fdd3
db dummyd_74027[32]; // 5ca2:fdf3
db dummyd_74047[32]; // 5ca2:fe13
db dummyd_74067[32]; // 5ca2:fe33
db dummyd_74087[32]; // 5ca2:fe53
db dummyd_740a7[32]; // 5ca2:fe73
db dummyd_740c7[32]; // 5ca2:fe93
db dummyd_740e7[32]; // 5ca2:feb3
db dummyd_74107[32]; // 5ca2:fed3
db dummyd_74127[32]; // 5ca2:fef3
db dummyd_74147[32]; // 5ca2:ff13
db dummyd_74167[32]; // 5ca2:ff33
db dummyd_74187[32]; // 5ca2:ff53
db dummyd_741a7[32]; // 5ca2:ff73
db dummyd_741c7[32]; // 5ca2:ff93
db dummyd_741e7[32]; // 5ca2:ffb3
db dummyd_74207[32]; // 5ca2:ffd3
db dummyd_74227;
db dummyd_74228;
db dummyd_74229;
db dummyd_7422a;
db dummyd_7422b;
db dummyd_7422c;
db dummyd_7422d;
db dummyd_7422e;
db dummyd_7422f;
db dummyd_74230;
db dummyd_74231;
db dummyd_74232;
db dummyd_74233;
db dummyd_74234[32]; // 5d27:0000
db dummyd_74254[32]; // 5d27:0020
db dummyd_74274[32]; // 5d27:0040
db dummyd_74294[32]; // 5d27:0060
db dummyd_742b4[32]; // 5d27:0080
db dummyd_742d4[32]; // 5d27:00a0
db dummyd_742f4;
db dummyd_742f5;
db dummyd_742f6;
db dummyd_742f7;
db dummyd_742f8;
db dummyd_742f9;
db dummyd_742fa;
db dummyd_742fb;
db dummyd_742fc;
db dummyd_742fd;
db dummyd_742fe;
db dummyd_742ff;
db dummyd_74300;
db dummyd_74301;
db dummyd_74302;
db dummyd_74303;
db dummyd_74304[32]; // 5daa:0000
db dummyd_74324[32]; // 5daa:0020
db dummyd_74344[32]; // 5daa:0040
db dummyd_74364[32]; // 5daa:0060
db dummyd_74384[32]; // 5daa:0080
db dummyd_743a4[32]; // 5daa:00a0
db dummyd_743c4[32]; // 5daa:00c0
db dummyd_743e4[32]; // 5daa:00e0
db dummyd_74404[32]; // 5daa:0100
db dummyd_74424[32]; // 5daa:0120
db dummyd_74444[32]; // 5daa:0140
db dummyd_74464[32]; // 5daa:0160
db dummyd_74484[32]; // 5daa:0180
db dummyd_744a4[32]; // 5daa:01a0
db dummyd_744c4[32]; // 5daa:01c0
db dummyd_744e4[32]; // 5daa:01e0
db dummyd_74504[32]; // 5daa:0200
db dummyd_74524[32]; // 5daa:0220
db dummyd_74544[32]; // 5daa:0240
db dummyd_74564[32]; // 5daa:0260
db dummyd_74584[32]; // 5daa:0280
db dummyd_745a4[32]; // 5daa:02a0
db dummyd_745c4[32]; // 5daa:02c0
db dummyd_745e4[32]; // 5daa:02e0
db dummyd_74604[32]; // 5daa:0300
db dummyd_74624[32]; // 5daa:0320
db dummyd_74644[32]; // 5daa:0340
db dummyd_74664[32]; // 5daa:0360
db dummyd_74684[32]; // 5daa:0380
db dummyd_746a4[32]; // 5daa:03a0
db dummyd_746c4[32]; // 5daa:03c0
db dummyd_746e4[32]; // 5daa:03e0
db dummyd_74704[32]; // 5daa:0400
db dummyd_74724[32]; // 5daa:0420
db dummyd_74744[32]; // 5daa:0440
db dummyd_74764[32]; // 5daa:0460
db dummyd_74784[32]; // 5daa:0480
db dummyd_747a4[32]; // 5daa:04a0
db dummyd_747c4[32]; // 5daa:04c0
db dummyd_747e4[32]; // 5daa:04e0
db dummyd_74804[32]; // 5daa:0500
db dummyd_74824[32]; // 5daa:0520
db dummyd_74844[32]; // 5daa:0540
db dummyd_74864[32]; // 5daa:0560
db dummyd_74884[32]; // 5daa:0580
db dummyd_748a4[32]; // 5daa:05a0
db dummyd_748c4[32]; // 5daa:05c0
db dummyd_748e4[32]; // 5daa:05e0
db dummyd_74904[32]; // 5daa:0600
db dummyd_74924[32]; // 5daa:0620
db dummyd_74944[32]; // 5daa:0640
db dummyd_74964[32]; // 5daa:0660
db dummyd_74984[32]; // 5daa:0680
db dummyd_749a4[32]; // 5daa:06a0
db dummyd_749c4[32]; // 5daa:06c0
db dummyd_749e4[32]; // 5daa:06e0
db dummyd_74a04[32]; // 5daa:0700
db dummyd_74a24[32]; // 5daa:0720
db dummyd_74a44[32]; // 5daa:0740
db dummyd_74a64[32]; // 5daa:0760
db dummyd_74a84[32]; // 5daa:0780
db dummyd_74aa4[32]; // 5daa:07a0
db dummyd_74ac4[32]; // 5daa:07c0
db dummyd_74ae4[32]; // 5daa:07e0
db dummyd_74b04[32]; // 5daa:0800
db dummyd_74b24[32]; // 5daa:0820
db dummyd_74b44[32]; // 5daa:0840
db dummyd_74b64[32]; // 5daa:0860
db dummyd_74b84[32]; // 5daa:0880
db dummyd_74ba4[32]; // 5daa:08a0
db dummyd_74bc4[32]; // 5daa:08c0
db dummyd_74be4[32]; // 5daa:08e0
db dummyd_74c04[32]; // 5daa:0900
db dummyd_74c24[32]; // 5daa:0920
db dummyd_74c44[32]; // 5daa:0940
db dummyd_74c64[32]; // 5daa:0960
db dummyd_74c84[32]; // 5daa:0980
db dummyd_74ca4[32]; // 5daa:09a0
db dummyd_74cc4[32]; // 5daa:09c0
db dummyd_74ce4[32]; // 5daa:09e0
db dummyd_74d04[32]; // 5daa:0a00
db dummyd_74d24[32]; // 5daa:0a20
db dummyd_74d44[32]; // 5daa:0a40
db dummyd_74d64[32]; // 5daa:0a60
db dummyd_74d84[32]; // 5daa:0a80
db dummyd_74da4[32]; // 5daa:0aa0
db dummyd_74dc4[32]; // 5daa:0ac0
db dummyd_74de4[32]; // 5daa:0ae0
db dummyd_74e04[32]; // 5daa:0b00
db dummyd_74e24[32]; // 5daa:0b20
db dummyd_74e44[32]; // 5daa:0b40
db dummyd_74e64[32]; // 5daa:0b60
db dummyd_74e84[32]; // 5daa:0b80
db dummyd_74ea4[32]; // 5daa:0ba0
db dummyd_74ec4[32]; // 5daa:0bc0
db dummyd_74ee4[32]; // 5daa:0be0
db dummyd_74f04[32]; // 5daa:0c00
db dummyd_74f24[32]; // 5daa:0c20
db dummyd_74f44[32]; // 5daa:0c40
db dummyd_74f64[32]; // 5daa:0c60
db dummyd_74f84[32]; // 5daa:0c80
db dummyd_74fa4[32]; // 5daa:0ca0
db dummyd_74fc4[32]; // 5daa:0cc0
db dummyd_74fe4[32]; // 5daa:0ce0
db dummyd_75004[32]; // 5daa:0d00
db dummyd_75024[32]; // 5daa:0d20
db dummyd_75044[32]; // 5daa:0d40
db dummyd_75064[32]; // 5daa:0d60
db dummyd_75084[32]; // 5daa:0d80
db dummyd_750a4[32]; // 5daa:0da0
db dummyd_750c4[32]; // 5daa:0dc0
db dummyd_750e4[32]; // 5daa:0de0
db dummyd_75104[32]; // 5daa:0e00
db dummyd_75124[32]; // 5daa:0e20
db dummyd_75144[32]; // 5daa:0e40
db dummyd_75164[32]; // 5daa:0e60
db dummyd_75184[32]; // 5daa:0e80
db dummyd_751a4[32]; // 5daa:0ea0
db dummyd_751c4[32]; // 5daa:0ec0
db dummyd_751e4[32]; // 5daa:0ee0
db dummyd_75204[32]; // 5daa:0f00
db dummyd_75224[32]; // 5daa:0f20
db dummyd_75244[32]; // 5daa:0f40
db dummyd_75264[32]; // 5daa:0f60
db dummyd_75284[32]; // 5daa:0f80
db dummyd_752a4[32]; // 5daa:0fa0
db dummyd_752c4[32]; // 5daa:0fc0
db dummyd_752e4[32]; // 5daa:0fe0
db dummyd_75304[32]; // 5daa:1000
db dummyd_75324[32]; // 5daa:1020
db dummyd_75344[32]; // 5daa:1040
db dummyd_75364[32]; // 5daa:1060
db dummyd_75384[32]; // 5daa:1080
db dummyd_753a4[32]; // 5daa:10a0
db dummyd_753c4[32]; // 5daa:10c0
db dummyd_753e4[32]; // 5daa:10e0
db dummyd_75404[32]; // 5daa:1100
db dummyd_75424[32]; // 5daa:1120
db dummyd_75444[32]; // 5daa:1140
db dummyd_75464[32]; // 5daa:1160
db dummyd_75484[32]; // 5daa:1180
db dummyd_754a4[32]; // 5daa:11a0
db dummyd_754c4[32]; // 5daa:11c0
db dummyd_754e4[32]; // 5daa:11e0
db dummyd_75504[32]; // 5daa:1200
db dummyd_75524[32]; // 5daa:1220
db dummyd_75544[32]; // 5daa:1240
db dummyd_75564[32]; // 5daa:1260
db dummyd_75584[32]; // 5daa:1280
db dummyd_755a4[32]; // 5daa:12a0
db dummyd_755c4[32]; // 5daa:12c0
db dummyd_755e4[32]; // 5daa:12e0
db dummyd_75604[32]; // 5daa:1300
db dummyd_75624[32]; // 5daa:1320
db dummyd_75644[32]; // 5daa:1340
db dummyd_75664[32]; // 5daa:1360
db dummyd_75684[32]; // 5daa:1380
db dummyd_756a4[32]; // 5daa:13a0
db dummyd_756c4[32]; // 5daa:13c0
db dummyd_756e4[32]; // 5daa:13e0
db dummyd_75704[32]; // 5daa:1400
db dummyd_75724[32]; // 5daa:1420
db dummyd_75744[32]; // 5daa:1440
db dummyd_75764[32]; // 5daa:1460
db dummyd_75784[32]; // 5daa:1480
db dummyd_757a4[32]; // 5daa:14a0
db dummyd_757c4[32]; // 5daa:14c0
db dummyd_757e4[32]; // 5daa:14e0
db dummyd_75804[32]; // 5daa:1500
db dummyd_75824[32]; // 5daa:1520
db dummyd_75844[32]; // 5daa:1540
db dummyd_75864[32]; // 5daa:1560
db dummyd_75884[32]; // 5daa:1580
db dummyd_758a4[32]; // 5daa:15a0
db dummyd_758c4[32]; // 5daa:15c0
db dummyd_758e4[32]; // 5daa:15e0
db dummyd_75904[32]; // 5daa:1600
db dummyd_75924[32]; // 5daa:1620
db dummyd_75944[32]; // 5daa:1640
db dummyd_75964[32]; // 5daa:1660
db dummyd_75984[32]; // 5daa:1680
db dummyd_759a4[32]; // 5daa:16a0
db dummyd_759c4[32]; // 5daa:16c0
db dummyd_759e4[32]; // 5daa:16e0
db dummyd_75a04[32]; // 5daa:1700
db dummyd_75a24[32]; // 5daa:1720
db dummyd_75a44[32]; // 5daa:1740
db dummyd_75a64[32]; // 5daa:1760
db dummyd_75a84[32]; // 5daa:1780
db dummyd_75aa4[32]; // 5daa:17a0
db dummyd_75ac4[32]; // 5daa:17c0
db dummyd_75ae4[32]; // 5daa:17e0
db dummyd_75b04[32]; // 5daa:1800
db dummyd_75b24[32]; // 5daa:1820
db dummyd_75b44[32]; // 5daa:1840
db dummyd_75b64[32]; // 5daa:1860
db dummyd_75b84[32]; // 5daa:1880
db dummyd_75ba4[32]; // 5daa:18a0
db dummyd_75bc4[32]; // 5daa:18c0
db dummyd_75be4[32]; // 5daa:18e0
db dummyd_75c04[32]; // 5daa:1900
db dummyd_75c24[32]; // 5daa:1920
db dummyd_75c44[32]; // 5daa:1940
db dummyd_75c64[32]; // 5daa:1960
db dummyd_75c84[32]; // 5daa:1980
db dummyd_75ca4[32]; // 5daa:19a0
db dummyd_75cc4[32]; // 5daa:19c0
db dummyd_75ce4[32]; // 5daa:19e0
db dummyd_75d04[32]; // 5daa:1a00
db dummyd_75d24[32]; // 5daa:1a20
db dummyd_75d44[32]; // 5daa:1a40
db dummyd_75d64[32]; // 5daa:1a60
db dummyd_75d84[32]; // 5daa:1a80
db dummyd_75da4[32]; // 5daa:1aa0
db dummyd_75dc4[32]; // 5daa:1ac0
db dummyd_75de4[32]; // 5daa:1ae0
db dummyd_75e04[32]; // 5daa:1b00
db dummyd_75e24[32]; // 5daa:1b20
db dummyd_75e44[32]; // 5daa:1b40
db dummyd_75e64[32]; // 5daa:1b60
db dummyd_75e84[32]; // 5daa:1b80
db dummyd_75ea4[32]; // 5daa:1ba0
db dummyd_75ec4[32]; // 5daa:1bc0
db dummyd_75ee4[32]; // 5daa:1be0
db dummyd_75f04[32]; // 5daa:1c00
db dummyd_75f24[32]; // 5daa:1c20
db dummyd_75f44[32]; // 5daa:1c40
db dummyd_75f64[32]; // 5daa:1c60
db dummyd_75f84[32]; // 5daa:1c80
db dummyd_75fa4[32]; // 5daa:1ca0
db dummyd_75fc4[32]; // 5daa:1cc0
db dummyd_75fe4[32]; // 5daa:1ce0
db dummyd_76004[32]; // 5daa:1d00
db dummyd_76024[32]; // 5daa:1d20
db dummyd_76044[32]; // 5daa:1d40
db dummyd_76064[32]; // 5daa:1d60
db dummyd_76084[32]; // 5daa:1d80
db dummyd_760a4[32]; // 5daa:1da0
db dummyd_760c4[32]; // 5daa:1dc0
db dummyd_760e4[32]; // 5daa:1de0
db dummyd_76104[32]; // 5daa:1e00
db dummyd_76124[32]; // 5daa:1e20
db dummyd_76144[32]; // 5daa:1e40
db dummyd_76164[32]; // 5daa:1e60
db dummyd_76184[32]; // 5daa:1e80
db dummyd_761a4[32]; // 5daa:1ea0
db dummyd_761c4[32]; // 5daa:1ec0
db dummyd_761e4[32]; // 5daa:1ee0
db dummyd_76204[32]; // 5daa:1f00
db dummyd_76224[32]; // 5daa:1f20
db dummyd_76244[32]; // 5daa:1f40
db dummyd_76264[32]; // 5daa:1f60
db dummyd_76284[32]; // 5daa:1f80
db dummyd_762a4[32]; // 5daa:1fa0
db dummyd_762c4[32]; // 5daa:1fc0
db dummyd_762e4[32]; // 5daa:1fe0
db dummyd_76304[32]; // 5daa:2000
db dummyd_76324[32]; // 5daa:2020
db dummyd_76344[32]; // 5daa:2040
db dummyd_76364[32]; // 5daa:2060
db dummyd_76384[32]; // 5daa:2080
db dummyd_763a4[32]; // 5daa:20a0
db dummyd_763c4[32]; // 5daa:20c0
db dummyd_763e4[32]; // 5daa:20e0
db dummyd_76404[32]; // 5daa:2100
db dummyd_76424[32]; // 5daa:2120
db dummyd_76444[32]; // 5daa:2140
db dummyd_76464[32]; // 5daa:2160
db dummyd_76484[32]; // 5daa:2180
db dummyd_764a4[32]; // 5daa:21a0
db dummyd_764c4[32]; // 5daa:21c0
db dummyd_764e4[32]; // 5daa:21e0
db dummyd_76504[32]; // 5daa:2200
db dummyd_76524[32]; // 5daa:2220
db dummyd_76544[32]; // 5daa:2240
db dummyd_76564[32]; // 5daa:2260
db dummyd_76584[32]; // 5daa:2280
db dummyd_765a4[32]; // 5daa:22a0
db dummyd_765c4[32]; // 5daa:22c0
db dummyd_765e4[32]; // 5daa:22e0
db dummyd_76604[32]; // 5daa:2300
db dummyd_76624[32]; // 5daa:2320
db dummyd_76644[32]; // 5daa:2340
db dummyd_76664[32]; // 5daa:2360
db dummyd_76684[32]; // 5daa:2380
db dummyd_766a4[32]; // 5daa:23a0
db dummyd_766c4[32]; // 5daa:23c0
db dummyd_766e4[32]; // 5daa:23e0
db dummyd_76704[32]; // 5daa:2400
db dummyd_76724[32]; // 5daa:2420
db dummyd_76744[32]; // 5daa:2440
db dummyd_76764[32]; // 5daa:2460
db dummyd_76784[32]; // 5daa:2480
db dummyd_767a4[32]; // 5daa:24a0
db dummyd_767c4[32]; // 5daa:24c0
db dummyd_767e4[32]; // 5daa:24e0
db dummyd_76804[32]; // 5daa:2500
db dummyd_76824[32]; // 5daa:2520
db dummyd_76844[32]; // 5daa:2540
db dummyd_76864[32]; // 5daa:2560
db dummyd_76884[32]; // 5daa:2580
db dummyd_768a4[32]; // 5daa:25a0
db dummyd_768c4[32]; // 5daa:25c0
db dummyd_768e4[32]; // 5daa:25e0
db dummyd_76904[32]; // 5daa:2600
db dummyd_76924[32]; // 5daa:2620
db dummyd_76944[32]; // 5daa:2640
db dummyd_76964[32]; // 5daa:2660
db dummyd_76984[32]; // 5daa:2680
db dummyd_769a4[32]; // 5daa:26a0
db dummyd_769c4[32]; // 5daa:26c0
db dummyd_769e4[32]; // 5daa:26e0
db dummyd_76a04[32]; // 5daa:2700
db dummyd_76a24[32]; // 5daa:2720
db dummyd_76a44[32]; // 5daa:2740
db dummyd_76a64[32]; // 5daa:2760
db dummyd_76a84[32]; // 5daa:2780
db dummyd_76aa4[32]; // 5daa:27a0
db dummyd_76ac4[32]; // 5daa:27c0
db dummyd_76ae4[32]; // 5daa:27e0
db dummyd_76b04[32]; // 5daa:2800
db dummyd_76b24[32]; // 5daa:2820
db dummyd_76b44[32]; // 5daa:2840
db dummyd_76b64[32]; // 5daa:2860
db dummyd_76b84[32]; // 5daa:2880
db dummyd_76ba4[32]; // 5daa:28a0
db dummyd_76bc4[32]; // 5daa:28c0
db dummyd_76be4[32]; // 5daa:28e0
db dummyd_76c04[32]; // 5daa:2900
db dummyd_76c24[32]; // 5daa:2920
db dummyd_76c44[32]; // 5daa:2940
db dummyd_76c64[32]; // 5daa:2960
db dummyd_76c84[32]; // 5daa:2980
db dummyd_76ca4[32]; // 5daa:29a0
db dummyd_76cc4[32]; // 5daa:29c0
db dummyd_76ce4[32]; // 5daa:29e0
db dummyd_76d04[32]; // 5daa:2a00
db dummyd_76d24[32]; // 5daa:2a20
db dummyd_76d44[32]; // 5daa:2a40
db dummyd_76d64[32]; // 5daa:2a60
db dummyd_76d84[32]; // 5daa:2a80
db dummyd_76da4[32]; // 5daa:2aa0
db dummyd_76dc4[32]; // 5daa:2ac0
db dummyd_76de4[32]; // 5daa:2ae0
db dummyd_76e04[32]; // 5daa:2b00
db dummyd_76e24[32]; // 5daa:2b20
db dummyd_76e44[32]; // 5daa:2b40
db dummyd_76e64[32]; // 5daa:2b60
db dummyd_76e84[32]; // 5daa:2b80
db dummyd_76ea4[32]; // 5daa:2ba0
db dummyd_76ec4[32]; // 5daa:2bc0
db dummyd_76ee4[32]; // 5daa:2be0
db dummyd_76f04[32]; // 5daa:2c00
db dummyd_76f24[32]; // 5daa:2c20
db dummyd_76f44[32]; // 5daa:2c40
db dummyd_76f64[32]; // 5daa:2c60
db dummyd_76f84[32]; // 5daa:2c80
db dummyd_76fa4[32]; // 5daa:2ca0
db dummyd_76fc4[32]; // 5daa:2cc0
db dummyd_76fe4[32]; // 5daa:2ce0
db dummyd_77004[32]; // 5daa:2d00
db dummyd_77024[32]; // 5daa:2d20
db dummyd_77044[32]; // 5daa:2d40
db dummyd_77064[32]; // 5daa:2d60
db dummyd_77084[32]; // 5daa:2d80
db dummyd_770a4[32]; // 5daa:2da0
db dummyd_770c4[32]; // 5daa:2dc0
db dummyd_770e4[32]; // 5daa:2de0
db dummyd_77104[32]; // 5daa:2e00
db dummyd_77124[32]; // 5daa:2e20
db dummyd_77144[32]; // 5daa:2e40
db dummyd_77164[32]; // 5daa:2e60
db dummyd_77184[32]; // 5daa:2e80
db dummyd_771a4[32]; // 5daa:2ea0
db dummyd_771c4[32]; // 5daa:2ec0
db dummyd_771e4[32]; // 5daa:2ee0
db dummyd_77204[32]; // 5daa:2f00
db dummyd_77224[32]; // 5daa:2f20
db dummyd_77244[32]; // 5daa:2f40
db dummyd_77264[32]; // 5daa:2f60
db dummyd_77284[32]; // 5daa:2f80
db dummyd_772a4[32]; // 5daa:2fa0
db dummyd_772c4[32]; // 5daa:2fc0
db dummyd_772e4[32]; // 5daa:2fe0
db dummyd_77304[32]; // 5daa:3000
db dummyd_77324[32]; // 5daa:3020
db dummyd_77344[32]; // 5daa:3040
db dummyd_77364[32]; // 5daa:3060
db dummyd_77384[32]; // 5daa:3080
db dummyd_773a4[32]; // 5daa:30a0
db dummyd_773c4[32]; // 5daa:30c0
db dummyd_773e4[32]; // 5daa:30e0
db dummyd_77404[32]; // 5daa:3100
db dummyd_77424[32]; // 5daa:3120
db dummyd_77444[32]; // 5daa:3140
db dummyd_77464[32]; // 5daa:3160
db dummyd_77484[32]; // 5daa:3180
db dummyd_774a4[32]; // 5daa:31a0
db dummyd_774c4[32]; // 5daa:31c0
db dummyd_774e4[32]; // 5daa:31e0
db dummyd_77504[32]; // 5daa:3200
db dummyd_77524[32]; // 5daa:3220
db dummyd_77544[32]; // 5daa:3240
db dummyd_77564[32]; // 5daa:3260
db dummyd_77584[32]; // 5daa:3280
db dummyd_775a4[32]; // 5daa:32a0
db dummyd_775c4[32]; // 5daa:32c0
db dummyd_775e4[32]; // 5daa:32e0
db dummyd_77604[32]; // 5daa:3300
db dummyd_77624[32]; // 5daa:3320
db dummyd_77644[32]; // 5daa:3340
db dummyd_77664[32]; // 5daa:3360
db dummyd_77684[32]; // 5daa:3380
db dummyd_776a4[32]; // 5daa:33a0
db dummyd_776c4[32]; // 5daa:33c0
db dummyd_776e4[32]; // 5daa:33e0
db dummyd_77704[32]; // 5daa:3400
db dummyd_77724[32]; // 5daa:3420
db dummyd_77744[32]; // 5daa:3440
db dummyd_77764[32]; // 5daa:3460
db dummyd_77784[32]; // 5daa:3480
db dummyd_777a4[32]; // 5daa:34a0
db dummyd_777c4[32]; // 5daa:34c0
db dummyd_777e4[32]; // 5daa:34e0
db dummyd_77804[32]; // 5daa:3500
db dummyd_77824[32]; // 5daa:3520
db dummyd_77844[32]; // 5daa:3540
db dummyd_77864[32]; // 5daa:3560
db dummyd_77884[32]; // 5daa:3580
db dummyd_778a4[32]; // 5daa:35a0
db dummyd_778c4[32]; // 5daa:35c0
db dummyd_778e4[32]; // 5daa:35e0
db dummyd_77904[32]; // 5daa:3600
db dummyd_77924[32]; // 5daa:3620
db dummyd_77944[32]; // 5daa:3640
db dummyd_77964[32]; // 5daa:3660
db dummyd_77984[32]; // 5daa:3680
db dummyd_779a4[32]; // 5daa:36a0
db dummyd_779c4[32]; // 5daa:36c0
db dummyd_779e4[32]; // 5daa:36e0
db dummyd_77a04[32]; // 5daa:3700
db dummyd_77a24[32]; // 5daa:3720
db dummyd_77a44[32]; // 5daa:3740
db dummyd_77a64[32]; // 5daa:3760
db dummyd_77a84[32]; // 5daa:3780
db dummyd_77aa4[32]; // 5daa:37a0
db dummyd_77ac4[32]; // 5daa:37c0
db dummyd_77ae4[32]; // 5daa:37e0
db dummyd_77b04[32]; // 5daa:3800
db dummyd_77b24[32]; // 5daa:3820
db dummyd_77b44[32]; // 5daa:3840
db dummyd_77b64[32]; // 5daa:3860
db dummyd_77b84[32]; // 5daa:3880
db dummyd_77ba4[32]; // 5daa:38a0
db dummyd_77bc4[32]; // 5daa:38c0
db dummyd_77be4[32]; // 5daa:38e0
db dummyd_77c04[32]; // 5daa:3900
db dummyd_77c24[32]; // 5daa:3920
db dummyd_77c44[32]; // 5daa:3940
db dummyd_77c64[32]; // 5daa:3960
db dummyd_77c84[32]; // 5daa:3980
db dummyd_77ca4[32]; // 5daa:39a0
db dummyd_77cc4[32]; // 5daa:39c0
db dummyd_77ce4[32]; // 5daa:39e0
db dummyd_77d04[32]; // 5daa:3a00
db dummyd_77d24[32]; // 5daa:3a20
db dummyd_77d44[32]; // 5daa:3a40
db dummyd_77d64[32]; // 5daa:3a60
db dummyd_77d84[32]; // 5daa:3a80
db dummyd_77da4[32]; // 5daa:3aa0
db dummyd_77dc4[32]; // 5daa:3ac0
db dummyd_77de4[32]; // 5daa:3ae0
db dummyd_77e04[32]; // 5daa:3b00
db dummyd_77e24[32]; // 5daa:3b20
db dummyd_77e44[32]; // 5daa:3b40
db dummyd_77e64[32]; // 5daa:3b60
db dummyd_77e84[32]; // 5daa:3b80
db dummyd_77ea4[32]; // 5daa:3ba0
db dummyd_77ec4[32]; // 5daa:3bc0
db dummyd_77ee4[32]; // 5daa:3be0
db dummyd_77f04[32]; // 5daa:3c00
db dummyd_77f24[32]; // 5daa:3c20
db dummyd_77f44[32]; // 5daa:3c40
db dummyd_77f64[32]; // 5daa:3c60
db dummyd_77f84[32]; // 5daa:3c80
db dummyd_77fa4[32]; // 5daa:3ca0
db dummyd_77fc4[32]; // 5daa:3cc0
db dummyd_77fe4[32]; // 5daa:3ce0
db dummyd_78004[32]; // 5daa:3d00
db dummyd_78024[32]; // 5daa:3d20
db dummyd_78044[32]; // 5daa:3d40
db dummyd_78064[32]; // 5daa:3d60
db dummyd_78084[32]; // 5daa:3d80
db dummyd_780a4[32]; // 5daa:3da0
db dummyd_780c4[32]; // 5daa:3dc0
db dummyd_780e4[32]; // 5daa:3de0
db dummyd_78104[32]; // 5daa:3e00
db dummyd_78124[32]; // 5daa:3e20
db dummyd_78144[32]; // 5daa:3e40
db dummyd_78164[32]; // 5daa:3e60
db dummyd_78184[32]; // 5daa:3e80
db dummyd_781a4[32]; // 5daa:3ea0
db dummyd_781c4[32]; // 5daa:3ec0
db dummyd_781e4[32]; // 5daa:3ee0
db dummyd_78204[32]; // 5daa:3f00
db dummyd_78224[32]; // 5daa:3f20
db dummyd_78244[32]; // 5daa:3f40
db dummyd_78264[32]; // 5daa:3f60
db dummyd_78284[32]; // 5daa:3f80
db dummyd_782a4[32]; // 5daa:3fa0
db dummyd_782c4[32]; // 5daa:3fc0
db dummyd_782e4[32]; // 5daa:3fe0
db dummyd_78304[32]; // 5daa:4000
db dummyd_78324[32]; // 5daa:4020
db dummyd_78344[32]; // 5daa:4040
db dummyd_78364[32]; // 5daa:4060
db dummyd_78384[32]; // 5daa:4080
db dummyd_783a4[32]; // 5daa:40a0
db dummyd_783c4[32]; // 5daa:40c0
db dummyd_783e4[32]; // 5daa:40e0
db dummyd_78404[32]; // 5daa:4100
db dummyd_78424[32]; // 5daa:4120
db dummyd_78444[32]; // 5daa:4140
db dummyd_78464[32]; // 5daa:4160
db dummyd_78484[32]; // 5daa:4180
db dummyd_784a4[32]; // 5daa:41a0
db dummyd_784c4[32]; // 5daa:41c0
db dummyd_784e4[32]; // 5daa:41e0
db dummyd_78504[32]; // 5daa:4200
db dummyd_78524[32]; // 5daa:4220
db dummyd_78544[32]; // 5daa:4240
db dummyd_78564[32]; // 5daa:4260
db dummyd_78584[32]; // 5daa:4280
db dummyd_785a4[32]; // 5daa:42a0
db dummyd_785c4[32]; // 5daa:42c0
db dummyd_785e4[32]; // 5daa:42e0
db dummyd_78604[32]; // 5daa:4300
db dummyd_78624[32]; // 5daa:4320
db dummyd_78644[32]; // 5daa:4340
db dummyd_78664[32]; // 5daa:4360
db dummyd_78684[32]; // 5daa:4380
db dummyd_786a4[32]; // 5daa:43a0
db dummyd_786c4[32]; // 5daa:43c0
db dummyd_786e4[32]; // 5daa:43e0
db dummyd_78704[32]; // 5daa:4400
db dummyd_78724[32]; // 5daa:4420
db dummyd_78744[32]; // 5daa:4440
db dummyd_78764[32]; // 5daa:4460
db dummyd_78784[32]; // 5daa:4480
db dummyd_787a4[32]; // 5daa:44a0
db dummyd_787c4[32]; // 5daa:44c0
db dummyd_787e4[32]; // 5daa:44e0
db dummyd_78804[32]; // 5daa:4500
db dummyd_78824[32]; // 5daa:4520
db dummyd_78844[32]; // 5daa:4540
db dummyd_78864[32]; // 5daa:4560
db dummyd_78884[32]; // 5daa:4580
db dummyd_788a4[32]; // 5daa:45a0
db dummyd_788c4[32]; // 5daa:45c0
db dummyd_788e4[32]; // 5daa:45e0
db dummyd_78904[32]; // 5daa:4600
db dummyd_78924[32]; // 5daa:4620
db dummyd_78944[32]; // 5daa:4640
db dummyd_78964[32]; // 5daa:4660
db dummyd_78984[32]; // 5daa:4680
db dummyd_789a4[32]; // 5daa:46a0
db dummyd_789c4[32]; // 5daa:46c0
db dummyd_789e4[32]; // 5daa:46e0
db dummyd_78a04[32]; // 5daa:4700
db dummyd_78a24[32]; // 5daa:4720
db dummyd_78a44[32]; // 5daa:4740
db dummyd_78a64[32]; // 5daa:4760
db dummyd_78a84[32]; // 5daa:4780
db dummyd_78aa4[32]; // 5daa:47a0
db dummyd_78ac4[32]; // 5daa:47c0
db dummyd_78ae4[32]; // 5daa:47e0
db dummyd_78b04[32]; // 5daa:4800
db dummyd_78b24[32]; // 5daa:4820
db dummyd_78b44[32]; // 5daa:4840
db dummyd_78b64[32]; // 5daa:4860
db dummyd_78b84[32]; // 5daa:4880
db dummyd_78ba4[32]; // 5daa:48a0
db dummyd_78bc4[32]; // 5daa:48c0
db dummyd_78be4[32]; // 5daa:48e0
db dummyd_78c04[32]; // 5daa:4900
db dummyd_78c24[32]; // 5daa:4920
db dummyd_78c44[32]; // 5daa:4940
db dummyd_78c64[32]; // 5daa:4960
db dummyd_78c84[32]; // 5daa:4980
db dummyd_78ca4[32]; // 5daa:49a0
db dummyd_78cc4[32]; // 5daa:49c0
db dummyd_78ce4[32]; // 5daa:49e0
db dummyd_78d04[32]; // 5daa:4a00
db dummyd_78d24[32]; // 5daa:4a20
db dummyd_78d44[32]; // 5daa:4a40
db dummyd_78d64[32]; // 5daa:4a60
db dummyd_78d84[32]; // 5daa:4a80
db dummyd_78da4[32]; // 5daa:4aa0
db dummyd_78dc4[32]; // 5daa:4ac0
db dummyd_78de4[32]; // 5daa:4ae0
db dummyd_78e04[32]; // 5daa:4b00
db dummyd_78e24[32]; // 5daa:4b20
db dummyd_78e44[32]; // 5daa:4b40
db dummyd_78e64[32]; // 5daa:4b60
db dummyd_78e84[32]; // 5daa:4b80
db dummyd_78ea4[32]; // 5daa:4ba0
db dummyd_78ec4[32]; // 5daa:4bc0
db dummyd_78ee4[32]; // 5daa:4be0
db dummyd_78f04[32]; // 5daa:4c00
db dummyd_78f24[32]; // 5daa:4c20
db dummyd_78f44[32]; // 5daa:4c40
db dummyd_78f64[32]; // 5daa:4c60
db dummyd_78f84[32]; // 5daa:4c80
db dummyd_78fa4[32]; // 5daa:4ca0
db dummyd_78fc4[32]; // 5daa:4cc0
db dummyd_78fe4[32]; // 5daa:4ce0
db dummyd_79004[32]; // 5daa:4d00
db dummyd_79024[32]; // 5daa:4d20
db dummyd_79044[32]; // 5daa:4d40
db dummyd_79064[32]; // 5daa:4d60
db dummyd_79084[32]; // 5daa:4d80
db dummyd_790a4[32]; // 5daa:4da0
db dummyd_790c4[32]; // 5daa:4dc0
db dummyd_790e4[32]; // 5daa:4de0
db dummyd_79104[32]; // 5daa:4e00
db dummyd_79124[32]; // 5daa:4e20
db dummyd_79144[32]; // 5daa:4e40
db dummyd_79164[32]; // 5daa:4e60
db dummyd_79184[32]; // 5daa:4e80
db dummyd_791a4[32]; // 5daa:4ea0
db dummyd_791c4[32]; // 5daa:4ec0
db dummyd_791e4[32]; // 5daa:4ee0
db dummyd_79204[32]; // 5daa:4f00
db dummyd_79224[32]; // 5daa:4f20
db dummyd_79244[32]; // 5daa:4f40
db dummyd_79264[32]; // 5daa:4f60
db dummyd_79284[32]; // 5daa:4f80
db dummyd_792a4[32]; // 5daa:4fa0
db dummyd_792c4[32]; // 5daa:4fc0
db dummyd_792e4[32]; // 5daa:4fe0
db dummyd_79304[32]; // 5daa:5000
db dummyd_79324[32]; // 5daa:5020
db dummyd_79344[32]; // 5daa:5040
db dummyd_79364[32]; // 5daa:5060
db dummyd_79384[32]; // 5daa:5080
db dummyd_793a4[32]; // 5daa:50a0
db dummyd_793c4[32]; // 5daa:50c0
db dummyd_793e4[32]; // 5daa:50e0
db dummyd_79404[32]; // 5daa:5100
db dummyd_79424[32]; // 5daa:5120
db dummyd_79444[32]; // 5daa:5140
db dummyd_79464[32]; // 5daa:5160
db dummyd_79484[32]; // 5daa:5180
db dummyd_794a4[32]; // 5daa:51a0
db dummyd_794c4[32]; // 5daa:51c0
db dummyd_794e4[32]; // 5daa:51e0
db dummyd_79504[32]; // 5daa:5200
db dummyd_79524[32]; // 5daa:5220
db dummyd_79544[32]; // 5daa:5240
db dummyd_79564[32]; // 5daa:5260
db dummyd_79584[32]; // 5daa:5280
db dummyd_795a4[32]; // 5daa:52a0
db dummyd_795c4[32]; // 5daa:52c0
db dummyd_795e4[32]; // 5daa:52e0
db dummyd_79604[32]; // 5daa:5300
db dummyd_79624[32]; // 5daa:5320
db dummyd_79644[32]; // 5daa:5340
db dummyd_79664[32]; // 5daa:5360
db dummyd_79684[32]; // 5daa:5380
db dummyd_796a4[32]; // 5daa:53a0
db dummyd_796c4[32]; // 5daa:53c0
db dummyd_796e4[32]; // 5daa:53e0
db dummyd_79704[32]; // 5daa:5400
db dummyd_79724[32]; // 5daa:5420
db dummyd_79744[32]; // 5daa:5440
db dummyd_79764[32]; // 5daa:5460
db dummyd_79784[32]; // 5daa:5480
db dummyd_797a4[32]; // 5daa:54a0
db dummyd_797c4[32]; // 5daa:54c0
db dummyd_797e4[32]; // 5daa:54e0
db dummyd_79804[32]; // 5daa:5500
db dummyd_79824[32]; // 5daa:5520
db dummyd_79844[32]; // 5daa:5540
db dummyd_79864[32]; // 5daa:5560
db dummyd_79884[32]; // 5daa:5580
db dummyd_798a4[32]; // 5daa:55a0
db dummyd_798c4[32]; // 5daa:55c0
db dummyd_798e4[32]; // 5daa:55e0
db dummyd_79904[32]; // 5daa:5600
db dummyd_79924[32]; // 5daa:5620
db dummyd_79944[32]; // 5daa:5640
db dummyd_79964[32]; // 5daa:5660
db dummyd_79984[32]; // 5daa:5680
db dummyd_799a4[32]; // 5daa:56a0
db dummyd_799c4[32]; // 5daa:56c0
db dummyd_799e4[32]; // 5daa:56e0
db dummyd_79a04[32]; // 5daa:5700
db dummyd_79a24[32]; // 5daa:5720
db dummyd_79a44[32]; // 5daa:5740
db dummyd_79a64[32]; // 5daa:5760
db dummyd_79a84[32]; // 5daa:5780
db dummyd_79aa4[32]; // 5daa:57a0
db dummyd_79ac4[32]; // 5daa:57c0
db dummyd_79ae4[32]; // 5daa:57e0
db dummyd_79b04[32]; // 5daa:5800
db dummyd_79b24[32]; // 5daa:5820
db dummyd_79b44[32]; // 5daa:5840
db dummyd_79b64[32]; // 5daa:5860
db dummyd_79b84[32]; // 5daa:5880
db dummyd_79ba4[32]; // 5daa:58a0
db dummyd_79bc4[32]; // 5daa:58c0
db dummyd_79be4[32]; // 5daa:58e0
db dummyd_79c04[32]; // 5daa:5900
db dummyd_79c24[32]; // 5daa:5920
db dummyd_79c44[32]; // 5daa:5940
db dummyd_79c64[32]; // 5daa:5960
db dummyd_79c84[32]; // 5daa:5980
db dummyd_79ca4[32]; // 5daa:59a0
db dummyd_79cc4[32]; // 5daa:59c0
db dummyd_79ce4[32]; // 5daa:59e0
db dummyd_79d04[32]; // 5daa:5a00
db dummyd_79d24[32]; // 5daa:5a20
db dummyd_79d44[32]; // 5daa:5a40
db dummyd_79d64[32]; // 5daa:5a60
db dummyd_79d84[32]; // 5daa:5a80
db dummyd_79da4[32]; // 5daa:5aa0
db dummyd_79dc4[32]; // 5daa:5ac0
db dummyd_79de4[32]; // 5daa:5ae0
db dummyd_79e04[32]; // 5daa:5b00
db dummyd_79e24[32]; // 5daa:5b20
db dummyd_79e44[32]; // 5daa:5b40
db dummyd_79e64[32]; // 5daa:5b60
db dummyd_79e84[32]; // 5daa:5b80
db dummyd_79ea4[32]; // 5daa:5ba0
db dummyd_79ec4[32]; // 5daa:5bc0
db dummyd_79ee4[32]; // 5daa:5be0
db dummyd_79f04[32]; // 5daa:5c00
db dummyd_79f24[32]; // 5daa:5c20
db dummyd_79f44[32]; // 5daa:5c40
db dummyd_79f64[32]; // 5daa:5c60
db dummyd_79f84[32]; // 5daa:5c80
db dummyd_79fa4[32]; // 5daa:5ca0
db dummyd_79fc4[32]; // 5daa:5cc0
db dummyd_79fe4[32]; // 5daa:5ce0
db dummyd_7a004[32]; // 5daa:5d00
db dummyd_7a024[32]; // 5daa:5d20
db dummyd_7a044[32]; // 5daa:5d40
db dummyd_7a064[32]; // 5daa:5d60
db dummyd_7a084[32]; // 5daa:5d80
db dummyd_7a0a4[32]; // 5daa:5da0
db dummyd_7a0c4[32]; // 5daa:5dc0
db dummyd_7a0e4[32]; // 5daa:5de0
db dummyd_7a104[32]; // 5daa:5e00
db dummyd_7a124[32]; // 5daa:5e20
db dummyd_7a144[32]; // 5daa:5e40
db dummyd_7a164[32]; // 5daa:5e60
db dummyd_7a184[32]; // 5daa:5e80
db dummyd_7a1a4[32]; // 5daa:5ea0
db dummyd_7a1c4[32]; // 5daa:5ec0
db dummyd_7a1e4[32]; // 5daa:5ee0
db dummyd_7a204[32]; // 5daa:5f00
db dummyd_7a224[32]; // 5daa:5f20
db dummyd_7a244[32]; // 5daa:5f40
db dummyd_7a264[32]; // 5daa:5f60
db dummyd_7a284[32]; // 5daa:5f80
db dummyd_7a2a4[32]; // 5daa:5fa0
db dummyd_7a2c4[32]; // 5daa:5fc0
db dummyd_7a2e4[32]; // 5daa:5fe0
db dummyd_7a304[32]; // 5daa:6000
db dummyd_7a324[32]; // 5daa:6020
db dummyd_7a344[32]; // 5daa:6040
db dummyd_7a364[32]; // 5daa:6060
db dummyd_7a384[32]; // 5daa:6080
db dummyd_7a3a4[32]; // 5daa:60a0
db dummyd_7a3c4[32]; // 5daa:60c0
db dummyd_7a3e4[32]; // 5daa:60e0
db dummyd_7a404[32]; // 5daa:6100
db dummyd_7a424[32]; // 5daa:6120
db dummyd_7a444[32]; // 5daa:6140
db dummyd_7a464[32]; // 5daa:6160
db dummyd_7a484[32]; // 5daa:6180
db dummyd_7a4a4[32]; // 5daa:61a0
db dummyd_7a4c4[32]; // 5daa:61c0
db dummyd_7a4e4[32]; // 5daa:61e0
db dummyd_7a504[32]; // 5daa:6200
db dummyd_7a524[32]; // 5daa:6220
db dummyd_7a544[32]; // 5daa:6240
db dummyd_7a564[32]; // 5daa:6260
db dummyd_7a584[32]; // 5daa:6280
db dummyd_7a5a4[32]; // 5daa:62a0
db dummyd_7a5c4[32]; // 5daa:62c0
db dummyd_7a5e4[32]; // 5daa:62e0
db dummyd_7a604[32]; // 5daa:6300
db dummyd_7a624[32]; // 5daa:6320
db dummyd_7a644[32]; // 5daa:6340
db dummyd_7a664[32]; // 5daa:6360
db dummyd_7a684[32]; // 5daa:6380
db dummyd_7a6a4[32]; // 5daa:63a0
db dummyd_7a6c4[32]; // 5daa:63c0
db dummyd_7a6e4[32]; // 5daa:63e0
db dummyd_7a704[32]; // 5daa:6400
db dummyd_7a724[32]; // 5daa:6420
db dummyd_7a744[32]; // 5daa:6440
db dummyd_7a764[32]; // 5daa:6460
db dummyd_7a784[32]; // 5daa:6480
db dummyd_7a7a4[32]; // 5daa:64a0
db dummyd_7a7c4[32]; // 5daa:64c0
db dummyd_7a7e4[32]; // 5daa:64e0
db dummyd_7a804[32]; // 5daa:6500
db dummyd_7a824[32]; // 5daa:6520
db dummyd_7a844[32]; // 5daa:6540
db dummyd_7a864[32]; // 5daa:6560
db dummyd_7a884[32]; // 5daa:6580
db dummyd_7a8a4[32]; // 5daa:65a0
db dummyd_7a8c4[32]; // 5daa:65c0
db dummyd_7a8e4[32]; // 5daa:65e0
db dummyd_7a904[32]; // 5daa:6600
db dummyd_7a924[32]; // 5daa:6620
db dummyd_7a944[32]; // 5daa:6640
db dummyd_7a964[32]; // 5daa:6660
db dummyd_7a984[32]; // 5daa:6680
db dummyd_7a9a4[32]; // 5daa:66a0
db dummyd_7a9c4[32]; // 5daa:66c0
db dummyd_7a9e4[32]; // 5daa:66e0
db dummyd_7aa04[32]; // 5daa:6700
db dummyd_7aa24[32]; // 5daa:6720
db dummyd_7aa44[32]; // 5daa:6740
db dummyd_7aa64[32]; // 5daa:6760
db dummyd_7aa84[32]; // 5daa:6780
db dummyd_7aaa4[32]; // 5daa:67a0
db dummyd_7aac4[32]; // 5daa:67c0
db dummyd_7aae4[32]; // 5daa:67e0
db dummyd_7ab04[32]; // 5daa:6800
db dummyd_7ab24[32]; // 5daa:6820
db dummyd_7ab44[32]; // 5daa:6840
db dummyd_7ab64[32]; // 5daa:6860
db dummyd_7ab84[32]; // 5daa:6880
db dummyd_7aba4[32]; // 5daa:68a0
db dummyd_7abc4[32]; // 5daa:68c0
db dummyd_7abe4[32]; // 5daa:68e0
db dummyd_7ac04[32]; // 5daa:6900
db dummyd_7ac24[32]; // 5daa:6920
db dummyd_7ac44[32]; // 5daa:6940
db dummyd_7ac64[32]; // 5daa:6960
db dummyd_7ac84[32]; // 5daa:6980
db dummyd_7aca4[32]; // 5daa:69a0
db dummyd_7acc4[32]; // 5daa:69c0
db dummyd_7ace4[32]; // 5daa:69e0
db dummyd_7ad04[32]; // 5daa:6a00
db dummyd_7ad24[32]; // 5daa:6a20
db dummyd_7ad44[32]; // 5daa:6a40
db dummyd_7ad64[32]; // 5daa:6a60
db dummyd_7ad84[32]; // 5daa:6a80
db dummyd_7ada4[32]; // 5daa:6aa0
db dummyd_7adc4[32]; // 5daa:6ac0
db dummyd_7ade4[32]; // 5daa:6ae0
db dummyd_7ae04[32]; // 5daa:6b00
db dummyd_7ae24[32]; // 5daa:6b20
db dummyd_7ae44[32]; // 5daa:6b40
db dummyd_7ae64[32]; // 5daa:6b60
db dummyd_7ae84[32]; // 5daa:6b80
db dummyd_7aea4[32]; // 5daa:6ba0
db dummyd_7aec4[32]; // 5daa:6bc0
db dummyd_7aee4[32]; // 5daa:6be0
db dummyd_7af04[32]; // 5daa:6c00
db dummyd_7af24[32]; // 5daa:6c20
db dummyd_7af44[32]; // 5daa:6c40
db dummyd_7af64[32]; // 5daa:6c60
db dummyd_7af84[32]; // 5daa:6c80
db dummyd_7afa4[32]; // 5daa:6ca0
db dummyd_7afc4[32]; // 5daa:6cc0
db dummyd_7afe4[32]; // 5daa:6ce0
db dummyd_7b004[32]; // 5daa:6d00
db dummyd_7b024[32]; // 5daa:6d20
db dummyd_7b044[32]; // 5daa:6d40
db dummyd_7b064[32]; // 5daa:6d60
db dummyd_7b084[32]; // 5daa:6d80
db dummyd_7b0a4[32]; // 5daa:6da0
db dummyd_7b0c4[32]; // 5daa:6dc0
db dummyd_7b0e4[32]; // 5daa:6de0
db dummyd_7b104[32]; // 5daa:6e00
db dummyd_7b124[32]; // 5daa:6e20
db dummyd_7b144[32]; // 5daa:6e40
db dummyd_7b164[32]; // 5daa:6e60
db dummyd_7b184[32]; // 5daa:6e80
db dummyd_7b1a4[32]; // 5daa:6ea0
db dummyd_7b1c4[32]; // 5daa:6ec0
db dummyd_7b1e4[32]; // 5daa:6ee0
db dummyd_7b204[32]; // 5daa:6f00
db dummyd_7b224[32]; // 5daa:6f20
db dummyd_7b244[32]; // 5daa:6f40
db dummyd_7b264[32]; // 5daa:6f60
db dummyd_7b284[32]; // 5daa:6f80
db dummyd_7b2a4[32]; // 5daa:6fa0
db dummyd_7b2c4[32]; // 5daa:6fc0
db dummyd_7b2e4[32]; // 5daa:6fe0
db dummyd_7b304[32]; // 5daa:7000
db dummyd_7b324[32]; // 5daa:7020
db dummyd_7b344[32]; // 5daa:7040
db dummyd_7b364[32]; // 5daa:7060
db dummyd_7b384[32]; // 5daa:7080
db dummyd_7b3a4[32]; // 5daa:70a0
db dummyd_7b3c4[32]; // 5daa:70c0
db dummyd_7b3e4[32]; // 5daa:70e0
db dummyd_7b404[32]; // 5daa:7100
db dummyd_7b424[32]; // 5daa:7120
db dummyd_7b444[32]; // 5daa:7140
db dummyd_7b464[32]; // 5daa:7160
db dummyd_7b484[32]; // 5daa:7180
db dummyd_7b4a4[32]; // 5daa:71a0
db dummyd_7b4c4[32]; // 5daa:71c0
db dummyd_7b4e4[32]; // 5daa:71e0
db dummyd_7b504[32]; // 5daa:7200
db dummyd_7b524[32]; // 5daa:7220
db dummyd_7b544[32]; // 5daa:7240
db dummyd_7b564[32]; // 5daa:7260
db dummyd_7b584[32]; // 5daa:7280
db dummyd_7b5a4[32]; // 5daa:72a0
db dummyd_7b5c4[32]; // 5daa:72c0
db dummyd_7b5e4[32]; // 5daa:72e0
db dummyd_7b604[32]; // 5daa:7300
db dummyd_7b624[32]; // 5daa:7320
db dummyd_7b644[32]; // 5daa:7340
db dummyd_7b664[32]; // 5daa:7360
db dummyd_7b684[32]; // 5daa:7380
db dummyd_7b6a4[32]; // 5daa:73a0
db dummyd_7b6c4[32]; // 5daa:73c0
db dummyd_7b6e4[32]; // 5daa:73e0
db dummyd_7b704[32]; // 5daa:7400
db dummyd_7b724[32]; // 5daa:7420
db dummyd_7b744[32]; // 5daa:7440
db dummyd_7b764[32]; // 5daa:7460
db dummyd_7b784[32]; // 5daa:7480
db dummyd_7b7a4[32]; // 5daa:74a0
db dummyd_7b7c4[32]; // 5daa:74c0
db dummyd_7b7e4[32]; // 5daa:74e0
db dummyd_7b804[32]; // 5daa:7500
db dummyd_7b824[32]; // 5daa:7520
db dummyd_7b844[32]; // 5daa:7540
db dummyd_7b864[32]; // 5daa:7560
db dummyd_7b884[32]; // 5daa:7580
db dummyd_7b8a4[32]; // 5daa:75a0
db dummyd_7b8c4[32]; // 5daa:75c0
db dummyd_7b8e4[32]; // 5daa:75e0
db dummyd_7b904[32]; // 5daa:7600
db dummyd_7b924[32]; // 5daa:7620
db dummyd_7b944[32]; // 5daa:7640
db dummyd_7b964[32]; // 5daa:7660
db dummyd_7b984[32]; // 5daa:7680
db dummyd_7b9a4[32]; // 5daa:76a0
db dummyd_7b9c4[32]; // 5daa:76c0
db dummyd_7b9e4[32]; // 5daa:76e0
db dummyd_7ba04[32]; // 5daa:7700
db dummyd_7ba24[32]; // 5daa:7720
db dummyd_7ba44[32]; // 5daa:7740
db dummyd_7ba64[32]; // 5daa:7760
db dummyd_7ba84[32]; // 5daa:7780
db dummyd_7baa4[32]; // 5daa:77a0
db dummyd_7bac4[32]; // 5daa:77c0
db dummyd_7bae4[32]; // 5daa:77e0
db dummyd_7bb04[32]; // 5daa:7800
db dummyd_7bb24[32]; // 5daa:7820
db dummyd_7bb44[32]; // 5daa:7840
db dummyd_7bb64[32]; // 5daa:7860
db dummyd_7bb84[32]; // 5daa:7880
db dummyd_7bba4[32]; // 5daa:78a0
db dummyd_7bbc4[32]; // 5daa:78c0
db dummyd_7bbe4[32]; // 5daa:78e0
db dummyd_7bc04[32]; // 5daa:7900
db dummyd_7bc24[32]; // 5daa:7920
db dummyd_7bc44[32]; // 5daa:7940
db dummyd_7bc64[32]; // 5daa:7960
db dummyd_7bc84[32]; // 5daa:7980
db dummyd_7bca4[32]; // 5daa:79a0
db dummyd_7bcc4[32]; // 5daa:79c0
db dummyd_7bce4[32]; // 5daa:79e0
db dummyd_7bd04[32]; // 5daa:7a00
db dummyd_7bd24[32]; // 5daa:7a20
db dummyd_7bd44[32]; // 5daa:7a40
db dummyd_7bd64[32]; // 5daa:7a60
db dummyd_7bd84[32]; // 5daa:7a80
db dummyd_7bda4[32]; // 5daa:7aa0
db dummyd_7bdc4[32]; // 5daa:7ac0
db dummyd_7bde4[32]; // 5daa:7ae0
db dummyd_7be04[32]; // 5daa:7b00
db dummyd_7be24[32]; // 5daa:7b20
db dummyd_7be44[32]; // 5daa:7b40
db dummyd_7be64[32]; // 5daa:7b60
db dummyd_7be84[32]; // 5daa:7b80
db dummyd_7bea4[32]; // 5daa:7ba0
db dummyd_7bec4[32]; // 5daa:7bc0
db dummyd_7bee4[32]; // 5daa:7be0
db dummyd_7bf04[32]; // 5daa:7c00
db dummyd_7bf24[32]; // 5daa:7c20
db dummyd_7bf44[32]; // 5daa:7c40
db dummyd_7bf64[32]; // 5daa:7c60
db dummyd_7bf84[32]; // 5daa:7c80
db dummyd_7bfa4[32]; // 5daa:7ca0
db dummyd_7bfc4[32]; // 5daa:7cc0
db dummyd_7bfe4[32]; // 5daa:7ce0
db dummyd_7c004[32]; // 5daa:7d00
db dummyd_7c024[32]; // 5daa:7d20
db dummyd_7c044[32]; // 5daa:7d40
db dummyd_7c064[32]; // 5daa:7d60
db dummyd_7c084[32]; // 5daa:7d80
db dummyd_7c0a4[32]; // 5daa:7da0
db dummyd_7c0c4[32]; // 5daa:7dc0
db dummyd_7c0e4[32]; // 5daa:7de0
db dummyd_7c104[32]; // 5daa:7e00
db dummyd_7c124[32]; // 5daa:7e20
db dummyd_7c144[32]; // 5daa:7e40
db dummyd_7c164[32]; // 5daa:7e60
db dummyd_7c184[32]; // 5daa:7e80
db dummyd_7c1a4[32]; // 5daa:7ea0
db dummyd_7c1c4[32]; // 5daa:7ec0
db dummyd_7c1e4[32]; // 5daa:7ee0
db dummyd_7c204[32]; // 5daa:7f00
db dummyd_7c224[32]; // 5daa:7f20
db dummyd_7c244[32]; // 5daa:7f40
db dummyd_7c264[32]; // 5daa:7f60
db dummyd_7c284[32]; // 5daa:7f80
db dummyd_7c2a4[32]; // 5daa:7fa0
db dummyd_7c2c4[32]; // 5daa:7fc0
db dummyd_7c2e4[32]; // 5daa:7fe0
db dummyd_7c304[32]; // 5daa:8000
db dummyd_7c324[32]; // 5daa:8020
db dummyd_7c344[32]; // 5daa:8040
db dummyd_7c364[32]; // 5daa:8060
db dummyd_7c384[32]; // 5daa:8080
db dummyd_7c3a4[32]; // 5daa:80a0
db dummyd_7c3c4[32]; // 5daa:80c0
db dummyd_7c3e4[32]; // 5daa:80e0
db dummyd_7c404[32]; // 5daa:8100
db dummyd_7c424[32]; // 5daa:8120
db dummyd_7c444[32]; // 5daa:8140
db dummyd_7c464[32]; // 5daa:8160
db dummyd_7c484[32]; // 5daa:8180
db dummyd_7c4a4[32]; // 5daa:81a0
db dummyd_7c4c4[32]; // 5daa:81c0
db dummyd_7c4e4[32]; // 5daa:81e0
db dummyd_7c504[32]; // 5daa:8200
db dummyd_7c524[32]; // 5daa:8220
db dummyd_7c544[32]; // 5daa:8240
db dummyd_7c564[32]; // 5daa:8260
db dummyd_7c584[32]; // 5daa:8280
db dummyd_7c5a4[32]; // 5daa:82a0
db dummyd_7c5c4[32]; // 5daa:82c0
db dummyd_7c5e4[32]; // 5daa:82e0
db dummyd_7c604[32]; // 5daa:8300
db dummyd_7c624[32]; // 5daa:8320
db dummyd_7c644[32]; // 5daa:8340
db dummyd_7c664[32]; // 5daa:8360
db dummyd_7c684[32]; // 5daa:8380
db dummyd_7c6a4[32]; // 5daa:83a0
db dummyd_7c6c4[32]; // 5daa:83c0
db dummyd_7c6e4[32]; // 5daa:83e0
db dummyd_7c704[32]; // 5daa:8400
db dummyd_7c724[32]; // 5daa:8420
db dummyd_7c744[32]; // 5daa:8440
db dummyd_7c764[32]; // 5daa:8460
db dummyd_7c784[32]; // 5daa:8480
db dummyd_7c7a4[32]; // 5daa:84a0
db dummyd_7c7c4[32]; // 5daa:84c0
db dummyd_7c7e4[32]; // 5daa:84e0
db dummyd_7c804[32]; // 5daa:8500
db dummyd_7c824[32]; // 5daa:8520
db dummyd_7c844[32]; // 5daa:8540
db dummyd_7c864[32]; // 5daa:8560
db dummyd_7c884[32]; // 5daa:8580
db dummyd_7c8a4[32]; // 5daa:85a0
db dummyd_7c8c4[32]; // 5daa:85c0
db dummyd_7c8e4[32]; // 5daa:85e0
db dummyd_7c904[32]; // 5daa:8600
db dummyd_7c924[32]; // 5daa:8620
db dummyd_7c944[32]; // 5daa:8640
db dummyd_7c964[32]; // 5daa:8660
db dummyd_7c984[32]; // 5daa:8680
db dummyd_7c9a4[32]; // 5daa:86a0
db dummyd_7c9c4[32]; // 5daa:86c0
db dummyd_7c9e4[32]; // 5daa:86e0
db dummyd_7ca04[32]; // 5daa:8700
db dummyd_7ca24[32]; // 5daa:8720
db dummyd_7ca44[32]; // 5daa:8740
db dummyd_7ca64[32]; // 5daa:8760
db dummyd_7ca84[32]; // 5daa:8780
db dummyd_7caa4[32]; // 5daa:87a0
db dummyd_7cac4[32]; // 5daa:87c0
db dummyd_7cae4[32]; // 5daa:87e0
db dummyd_7cb04[32]; // 5daa:8800
db dummyd_7cb24[32]; // 5daa:8820
db dummyd_7cb44[32]; // 5daa:8840
db dummyd_7cb64[32]; // 5daa:8860
db dummyd_7cb84[32]; // 5daa:8880
db dummyd_7cba4[32]; // 5daa:88a0
db dummyd_7cbc4[32]; // 5daa:88c0
db dummyd_7cbe4[32]; // 5daa:88e0
db dummyd_7cc04[32]; // 5daa:8900
db dummyd_7cc24[32]; // 5daa:8920
db dummyd_7cc44[32]; // 5daa:8940
db dummyd_7cc64[32]; // 5daa:8960
db dummyd_7cc84[32]; // 5daa:8980
db dummyd_7cca4[32]; // 5daa:89a0
db dummyd_7ccc4[32]; // 5daa:89c0
db dummyd_7cce4[32]; // 5daa:89e0
db dummyd_7cd04[32]; // 5daa:8a00
db dummyd_7cd24[32]; // 5daa:8a20
db dummyd_7cd44[32]; // 5daa:8a40
db dummyd_7cd64[32]; // 5daa:8a60
db dummyd_7cd84[32]; // 5daa:8a80
db dummyd_7cda4[32]; // 5daa:8aa0
db dummyd_7cdc4[32]; // 5daa:8ac0
db dummyd_7cde4[32]; // 5daa:8ae0
db dummyd_7ce04[32]; // 5daa:8b00
db dummyd_7ce24[32]; // 5daa:8b20
db dummyd_7ce44[32]; // 5daa:8b40
db dummyd_7ce64[32]; // 5daa:8b60
db dummyd_7ce84[32]; // 5daa:8b80
db dummyd_7cea4[32]; // 5daa:8ba0
db dummyd_7cec4[32]; // 5daa:8bc0
db dummyd_7cee4[32]; // 5daa:8be0
db dummyd_7cf04[32]; // 5daa:8c00
db dummyd_7cf24[32]; // 5daa:8c20
db dummyd_7cf44[32]; // 5daa:8c40
db dummyd_7cf64[32]; // 5daa:8c60
db dummyd_7cf84[32]; // 5daa:8c80
db dummyd_7cfa4[32]; // 5daa:8ca0
db dummyd_7cfc4[32]; // 5daa:8cc0
db dummyd_7cfe4[32]; // 5daa:8ce0
db dummyd_7d004[32]; // 5daa:8d00
db dummyd_7d024[32]; // 5daa:8d20
db dummyd_7d044[32]; // 5daa:8d40
db dummyd_7d064[32]; // 5daa:8d60
db dummyd_7d084[32]; // 5daa:8d80
db dummyd_7d0a4[32]; // 5daa:8da0
db dummyd_7d0c4[32]; // 5daa:8dc0
db dummyd_7d0e4[32]; // 5daa:8de0
db dummyd_7d104[32]; // 5daa:8e00
db dummyd_7d124[32]; // 5daa:8e20
db dummyd_7d144[32]; // 5daa:8e40
db dummyd_7d164[32]; // 5daa:8e60
db dummyd_7d184[32]; // 5daa:8e80
db dummyd_7d1a4[32]; // 5daa:8ea0
db dummyd_7d1c4[32]; // 5daa:8ec0
db dummyd_7d1e4[32]; // 5daa:8ee0
db dummyd_7d204[32]; // 5daa:8f00
db dummyd_7d224[32]; // 5daa:8f20
db dummyd_7d244[32]; // 5daa:8f40
db dummyd_7d264[32]; // 5daa:8f60
db dummyd_7d284[32]; // 5daa:8f80
db dummyd_7d2a4[32]; // 5daa:8fa0
db dummyd_7d2c4[32]; // 5daa:8fc0
db dummyd_7d2e4[32]; // 5daa:8fe0
db dummyd_7d304[32]; // 5daa:9000
db dummyd_7d324[32]; // 5daa:9020
db dummyd_7d344[32]; // 5daa:9040
db dummyd_7d364[32]; // 5daa:9060
db dummyd_7d384[32]; // 5daa:9080
db dummyd_7d3a4[32]; // 5daa:90a0
db dummyd_7d3c4[32]; // 5daa:90c0
db dummyd_7d3e4[32]; // 5daa:90e0
db dummyd_7d404[32]; // 5daa:9100
db dummyd_7d424[32]; // 5daa:9120
db dummyd_7d444[32]; // 5daa:9140
db dummyd_7d464[32]; // 5daa:9160
db dummyd_7d484[32]; // 5daa:9180
db dummyd_7d4a4[32]; // 5daa:91a0
db dummyd_7d4c4[32]; // 5daa:91c0
db dummyd_7d4e4[32]; // 5daa:91e0
db dummyd_7d504[32]; // 5daa:9200
db dummyd_7d524[32]; // 5daa:9220
db dummyd_7d544[32]; // 5daa:9240
db dummyd_7d564[32]; // 5daa:9260
db dummyd_7d584[32]; // 5daa:9280
db dummyd_7d5a4[32]; // 5daa:92a0
db dummyd_7d5c4[32]; // 5daa:92c0
db dummyd_7d5e4[32]; // 5daa:92e0
db dummyd_7d604[32]; // 5daa:9300
db dummyd_7d624[32]; // 5daa:9320
db dummyd_7d644[32]; // 5daa:9340
db dummyd_7d664[32]; // 5daa:9360
db dummyd_7d684[32]; // 5daa:9380
db dummyd_7d6a4[32]; // 5daa:93a0
db dummyd_7d6c4[32]; // 5daa:93c0
db dummyd_7d6e4[32]; // 5daa:93e0
db dummyd_7d704[32]; // 5daa:9400
db dummyd_7d724[32]; // 5daa:9420
db dummyd_7d744[32]; // 5daa:9440
db dummyd_7d764[32]; // 5daa:9460
db dummyd_7d784[32]; // 5daa:9480
db dummyd_7d7a4[32]; // 5daa:94a0
db dummyd_7d7c4[32]; // 5daa:94c0
db dummyd_7d7e4[32]; // 5daa:94e0
db dummyd_7d804[32]; // 5daa:9500
db dummyd_7d824[32]; // 5daa:9520
db dummyd_7d844[32]; // 5daa:9540
db dummyd_7d864[32]; // 5daa:9560
db dummyd_7d884[32]; // 5daa:9580
db dummyd_7d8a4[32]; // 5daa:95a0
db dummyd_7d8c4[32]; // 5daa:95c0
db dummyd_7d8e4[32]; // 5daa:95e0
db dummyd_7d904[32]; // 5daa:9600
db dummyd_7d924[32]; // 5daa:9620
db dummyd_7d944[32]; // 5daa:9640
db dummyd_7d964[32]; // 5daa:9660
db dummyd_7d984[32]; // 5daa:9680
db dummyd_7d9a4[32]; // 5daa:96a0
db dummyd_7d9c4[32]; // 5daa:96c0
db dummyd_7d9e4[32]; // 5daa:96e0
db dummyd_7da04[32]; // 5daa:9700
db dummyd_7da24[32]; // 5daa:9720
db dummyd_7da44[32]; // 5daa:9740
db dummyd_7da64[32]; // 5daa:9760
db dummyd_7da84[32]; // 5daa:9780
db dummyd_7daa4[32]; // 5daa:97a0
db dummyd_7dac4[32]; // 5daa:97c0
db dummyd_7dae4[32]; // 5daa:97e0
db dummyd_7db04[32]; // 5daa:9800
db dummyd_7db24[32]; // 5daa:9820
db dummyd_7db44[32]; // 5daa:9840
db dummyd_7db64[32]; // 5daa:9860
db dummyd_7db84[32]; // 5daa:9880
db dummyd_7dba4[32]; // 5daa:98a0
db dummyd_7dbc4[32]; // 5daa:98c0
db dummyd_7dbe4[32]; // 5daa:98e0
db dummyd_7dc04[32]; // 5daa:9900
db dummyd_7dc24[32]; // 5daa:9920
db dummyd_7dc44[32]; // 5daa:9940
db dummyd_7dc64[32]; // 5daa:9960
db dummyd_7dc84[32]; // 5daa:9980
db dummyd_7dca4[32]; // 5daa:99a0
db dummyd_7dcc4[32]; // 5daa:99c0
db dummyd_7dce4[32]; // 5daa:99e0
db dummyd_7dd04[32]; // 5daa:9a00
db dummyd_7dd24[32]; // 5daa:9a20
db dummyd_7dd44[32]; // 5daa:9a40
db dummyd_7dd64[32]; // 5daa:9a60
db dummyd_7dd84[32]; // 5daa:9a80
db dummyd_7dda4[32]; // 5daa:9aa0
db dummyd_7ddc4[32]; // 5daa:9ac0
db dummyd_7dde4[32]; // 5daa:9ae0
db dummyd_7de04[32]; // 5daa:9b00
db dummyd_7de24[32]; // 5daa:9b20
db dummyd_7de44[32]; // 5daa:9b40
db dummyd_7de64[32]; // 5daa:9b60
db dummyd_7de84[32]; // 5daa:9b80
db dummyd_7dea4[32]; // 5daa:9ba0
db dummyd_7dec4[32]; // 5daa:9bc0
db dummyd_7dee4[32]; // 5daa:9be0
db dummyd_7df04[32]; // 5daa:9c00
db dummyd_7df24[32]; // 5daa:9c20
db dummyd_7df44[32]; // 5daa:9c40
db dummyd_7df64[32]; // 5daa:9c60
db dummyd_7df84[32]; // 5daa:9c80
db dummyd_7dfa4[32]; // 5daa:9ca0
db dummyd_7dfc4[32]; // 5daa:9cc0
db dummyd_7dfe4[32]; // 5daa:9ce0
db dummyd_7e004[32]; // 5daa:9d00
db dummyd_7e024[32]; // 5daa:9d20
db dummyd_7e044[32]; // 5daa:9d40
db dummyd_7e064[32]; // 5daa:9d60
db dummyd_7e084[32]; // 5daa:9d80
db dummyd_7e0a4[32]; // 5daa:9da0
db dummyd_7e0c4[32]; // 5daa:9dc0
db dummyd_7e0e4[32]; // 5daa:9de0
db dummyd_7e104[32]; // 5daa:9e00
db dummyd_7e124[32]; // 5daa:9e20
db dummyd_7e144[32]; // 5daa:9e40
db dummyd_7e164[32]; // 5daa:9e60
db dummyd_7e184[32]; // 5daa:9e80
db dummyd_7e1a4[32]; // 5daa:9ea0
db dummyd_7e1c4[32]; // 5daa:9ec0
db dummyd_7e1e4[32]; // 5daa:9ee0
db dummyd_7e204[32]; // 5daa:9f00
db dummyd_7e224[32]; // 5daa:9f20
db dummyd_7e244[32]; // 5daa:9f40
db dummyd_7e264[32]; // 5daa:9f60
db dummyd_7e284[32]; // 5daa:9f80
db dummyd_7e2a4[32]; // 5daa:9fa0
db dummyd_7e2c4[32]; // 5daa:9fc0
db dummyd_7e2e4[32]; // 5daa:9fe0
db dummyd_7e304[32]; // 5daa:a000
db dummyd_7e324[32]; // 5daa:a020
db dummyd_7e344[32]; // 5daa:a040
db dummyd_7e364[32]; // 5daa:a060
db dummyd_7e384[32]; // 5daa:a080
db dummyd_7e3a4[32]; // 5daa:a0a0
db dummyd_7e3c4[32]; // 5daa:a0c0
db dummyd_7e3e4[32]; // 5daa:a0e0
db dummyd_7e404[32]; // 5daa:a100
db dummyd_7e424[32]; // 5daa:a120
db dummyd_7e444[32]; // 5daa:a140
db dummyd_7e464[32]; // 5daa:a160
db dummyd_7e484[32]; // 5daa:a180
db dummyd_7e4a4[32]; // 5daa:a1a0
db dummyd_7e4c4[32]; // 5daa:a1c0
db dummyd_7e4e4[32]; // 5daa:a1e0
db dummyd_7e504[32]; // 5daa:a200
db dummyd_7e524[32]; // 5daa:a220
db dummyd_7e544[32]; // 5daa:a240
db dummyd_7e564[32]; // 5daa:a260
db dummyd_7e584[32]; // 5daa:a280
db dummyd_7e5a4[32]; // 5daa:a2a0
db dummyd_7e5c4[32]; // 5daa:a2c0
db dummyd_7e5e4[32]; // 5daa:a2e0
db dummyd_7e604[32]; // 5daa:a300
db dummyd_7e624[32]; // 5daa:a320
db dummyd_7e644[32]; // 5daa:a340
db dummyd_7e664[32]; // 5daa:a360
db dummyd_7e684[32]; // 5daa:a380
db dummyd_7e6a4[32]; // 5daa:a3a0
db dummyd_7e6c4[32]; // 5daa:a3c0
db dummyd_7e6e4[32]; // 5daa:a3e0
db dummyd_7e704[32]; // 5daa:a400
db dummyd_7e724[32]; // 5daa:a420
db dummyd_7e744[32]; // 5daa:a440
db dummyd_7e764[32]; // 5daa:a460
db dummyd_7e784[32]; // 5daa:a480
db dummyd_7e7a4[32]; // 5daa:a4a0
db dummyd_7e7c4[32]; // 5daa:a4c0
db dummyd_7e7e4[32]; // 5daa:a4e0
db dummyd_7e804[32]; // 5daa:a500
db dummyd_7e824[32]; // 5daa:a520
db dummyd_7e844[32]; // 5daa:a540
db dummyd_7e864[32]; // 5daa:a560
db dummyd_7e884[32]; // 5daa:a580
db dummyd_7e8a4[32]; // 5daa:a5a0
db dummyd_7e8c4[32]; // 5daa:a5c0
db dummyd_7e8e4[32]; // 5daa:a5e0
db dummyd_7e904[32]; // 5daa:a600
db dummyd_7e924[32]; // 5daa:a620
db dummyd_7e944[32]; // 5daa:a640
db dummyd_7e964[32]; // 5daa:a660
db dummyd_7e984[32]; // 5daa:a680
db dummyd_7e9a4[32]; // 5daa:a6a0
db dummyd_7e9c4[32]; // 5daa:a6c0
db dummyd_7e9e4[32]; // 5daa:a6e0
db dummyd_7ea04[32]; // 5daa:a700
db dummyd_7ea24[32]; // 5daa:a720
db dummyd_7ea44[32]; // 5daa:a740
db dummyd_7ea64[32]; // 5daa:a760
db dummyd_7ea84[32]; // 5daa:a780
db dummyd_7eaa4[32]; // 5daa:a7a0
db dummyd_7eac4[32]; // 5daa:a7c0
db dummyd_7eae4[32]; // 5daa:a7e0
db dummyd_7eb04[32]; // 5daa:a800
db dummyd_7eb24[32]; // 5daa:a820
db dummyd_7eb44[32]; // 5daa:a840
db dummyd_7eb64[32]; // 5daa:a860
db dummyd_7eb84[32]; // 5daa:a880
db dummyd_7eba4[32]; // 5daa:a8a0
db dummyd_7ebc4[32]; // 5daa:a8c0
db dummyd_7ebe4[32]; // 5daa:a8e0
db dummyd_7ec04[32]; // 5daa:a900
db dummyd_7ec24[32]; // 5daa:a920
db dummyd_7ec44[32]; // 5daa:a940
db dummyd_7ec64[32]; // 5daa:a960
db dummyd_7ec84[32]; // 5daa:a980
db dummyd_7eca4[32]; // 5daa:a9a0
db dummyd_7ecc4[32]; // 5daa:a9c0
db dummyd_7ece4[32]; // 5daa:a9e0
db dummyd_7ed04[32]; // 5daa:aa00
db dummyd_7ed24[32]; // 5daa:aa20
db dummyd_7ed44[32]; // 5daa:aa40
db dummyd_7ed64[32]; // 5daa:aa60
db dummyd_7ed84[32]; // 5daa:aa80
db dummyd_7eda4[32]; // 5daa:aaa0
db dummyd_7edc4[32]; // 5daa:aac0
db dummyd_7ede4[32]; // 5daa:aae0
db dummyd_7ee04[32]; // 5daa:ab00
db dummyd_7ee24[32]; // 5daa:ab20
db dummyd_7ee44[32]; // 5daa:ab40
db dummyd_7ee64[32]; // 5daa:ab60
db dummyd_7ee84[32]; // 5daa:ab80
db dummyd_7eea4[32]; // 5daa:aba0
db dummyd_7eec4[32]; // 5daa:abc0
db dummyd_7eee4[32]; // 5daa:abe0
db dummyd_7ef04[32]; // 5daa:ac00
db dummyd_7ef24[32]; // 5daa:ac20
db dummyd_7ef44[32]; // 5daa:ac40
db dummyd_7ef64[32]; // 5daa:ac60
db dummyd_7ef84[32]; // 5daa:ac80
db dummyd_7efa4[32]; // 5daa:aca0
db dummyd_7efc4[32]; // 5daa:acc0
db dummyd_7efe4[32]; // 5daa:ace0
db dummyd_7f004[32]; // 5daa:ad00
db dummyd_7f024[32]; // 5daa:ad20
db dummyd_7f044[32]; // 5daa:ad40
db dummyd_7f064[32]; // 5daa:ad60
db dummyd_7f084[32]; // 5daa:ad80
db dummyd_7f0a4[32]; // 5daa:ada0
db dummyd_7f0c4[32]; // 5daa:adc0
db dummyd_7f0e4[32]; // 5daa:ade0
db dummyd_7f104[32]; // 5daa:ae00
db dummyd_7f124[32]; // 5daa:ae20
db dummyd_7f144[32]; // 5daa:ae40
db dummyd_7f164[32]; // 5daa:ae60
db dummyd_7f184[32]; // 5daa:ae80
db dummyd_7f1a4[32]; // 5daa:aea0
db dummyd_7f1c4[32]; // 5daa:aec0
db dummyd_7f1e4[32]; // 5daa:aee0
db dummyd_7f204[32]; // 5daa:af00
db dummyd_7f224[32]; // 5daa:af20
db dummyd_7f244[32]; // 5daa:af40
db dummyd_7f264[32]; // 5daa:af60
db dummyd_7f284[32]; // 5daa:af80
db dummyd_7f2a4[32]; // 5daa:afa0
db dummyd_7f2c4[32]; // 5daa:afc0
db dummyd_7f2e4[32]; // 5daa:afe0
db dummyd_7f304[32]; // 5daa:b000
db dummyd_7f324[32]; // 5daa:b020
db dummyd_7f344[32]; // 5daa:b040
db dummyd_7f364[32]; // 5daa:b060
db dummyd_7f384[32]; // 5daa:b080
db dummyd_7f3a4[32]; // 5daa:b0a0
db dummyd_7f3c4[32]; // 5daa:b0c0
db dummyd_7f3e4[32]; // 5daa:b0e0
db dummyd_7f404[32]; // 5daa:b100
db dummyd_7f424[32]; // 5daa:b120
db dummyd_7f444[32]; // 5daa:b140
db dummyd_7f464[32]; // 5daa:b160
db dummyd_7f484[32]; // 5daa:b180
db dummyd_7f4a4[32]; // 5daa:b1a0
db dummyd_7f4c4[32]; // 5daa:b1c0
db dummyd_7f4e4[32]; // 5daa:b1e0
db dummyd_7f504[32]; // 5daa:b200
db dummyd_7f524[32]; // 5daa:b220
db dummyd_7f544[32]; // 5daa:b240
db dummyd_7f564[32]; // 5daa:b260
db dummyd_7f584[32]; // 5daa:b280
db dummyd_7f5a4[32]; // 5daa:b2a0
db dummyd_7f5c4[32]; // 5daa:b2c0
db dummyd_7f5e4[32]; // 5daa:b2e0
db dummyd_7f604[32]; // 5daa:b300
db dummyd_7f624[32]; // 5daa:b320
db dummyd_7f644[32]; // 5daa:b340
db dummyd_7f664[32]; // 5daa:b360
db dummyd_7f684[32]; // 5daa:b380
db dummyd_7f6a4[32]; // 5daa:b3a0
db dummyd_7f6c4[32]; // 5daa:b3c0
db dummyd_7f6e4[32]; // 5daa:b3e0
db dummyd_7f704[32]; // 5daa:b400
db dummyd_7f724[32]; // 5daa:b420
db dummyd_7f744[32]; // 5daa:b440
db dummyd_7f764[32]; // 5daa:b460
db dummyd_7f784[32]; // 5daa:b480
db dummyd_7f7a4[32]; // 5daa:b4a0
db dummyd_7f7c4[32]; // 5daa:b4c0
db dummyd_7f7e4[32]; // 5daa:b4e0
db dummyd_7f804[32]; // 5daa:b500
db dummyd_7f824[32]; // 5daa:b520
db dummyd_7f844[32]; // 5daa:b540
db dummyd_7f864[32]; // 5daa:b560
db dummyd_7f884[32]; // 5daa:b580
db dummyd_7f8a4[32]; // 5daa:b5a0
db dummyd_7f8c4[32]; // 5daa:b5c0
db dummyd_7f8e4[32]; // 5daa:b5e0
db dummyd_7f904[32]; // 5daa:b600
db dummyd_7f924[32]; // 5daa:b620
db dummyd_7f944[32]; // 5daa:b640
db dummyd_7f964[32]; // 5daa:b660
db dummyd_7f984[32]; // 5daa:b680
db dummyd_7f9a4[32]; // 5daa:b6a0
db dummyd_7f9c4[32]; // 5daa:b6c0
db dummyd_7f9e4[32]; // 5daa:b6e0
db dummyd_7fa04[32]; // 5daa:b700
db dummyd_7fa24[32]; // 5daa:b720
db dummyd_7fa44[32]; // 5daa:b740
db dummyd_7fa64[32]; // 5daa:b760
db dummyd_7fa84[32]; // 5daa:b780
db dummyd_7faa4[32]; // 5daa:b7a0
db dummyd_7fac4[32]; // 5daa:b7c0
db dummyd_7fae4[32]; // 5daa:b7e0
db dummyd_7fb04[32]; // 5daa:b800
db dummyd_7fb24[32]; // 5daa:b820
db dummyd_7fb44[32]; // 5daa:b840
db dummyd_7fb64[32]; // 5daa:b860
db dummyd_7fb84[32]; // 5daa:b880
db dummyd_7fba4[32]; // 5daa:b8a0
db dummyd_7fbc4[32]; // 5daa:b8c0
db dummyd_7fbe4[32]; // 5daa:b8e0
db dummyd_7fc04[32]; // 5daa:b900
db dummyd_7fc24[32]; // 5daa:b920
db dummyd_7fc44[32]; // 5daa:b940
db dummyd_7fc64[32]; // 5daa:b960
db dummyd_7fc84[32]; // 5daa:b980
db dummyd_7fca4[32]; // 5daa:b9a0
db dummyd_7fcc4[32]; // 5daa:b9c0
db dummyd_7fce4[32]; // 5daa:b9e0
db dummyd_7fd04[32]; // 5daa:ba00
db dummyd_7fd24[32]; // 5daa:ba20
db dummyd_7fd44[32]; // 5daa:ba40
db dummyd_7fd64[32]; // 5daa:ba60
db dummyd_7fd84[32]; // 5daa:ba80
db dummyd_7fda4[32]; // 5daa:baa0
db dummyd_7fdc4[32]; // 5daa:bac0
db dummyd_7fde4[32]; // 5daa:bae0
db dummyd_7fe04[32]; // 5daa:bb00
db dummyd_7fe24[32]; // 5daa:bb20
db dummyd_7fe44[32]; // 5daa:bb40
db dummyd_7fe64[32]; // 5daa:bb60
db dummyd_7fe84[32]; // 5daa:bb80
db dummyd_7fea4[32]; // 5daa:bba0
db dummyd_7fec4[32]; // 5daa:bbc0
db dummyd_7fee4[32]; // 5daa:bbe0
db dummyd_7ff04[32]; // 5daa:bc00
db dummyd_7ff24[32]; // 5daa:bc20
db dummyd_7ff44[32]; // 5daa:bc40
db dummyd_7ff64[32]; // 5daa:bc60
db dummyd_7ff84[32]; // 5daa:bc80
db dummyd_7ffa4[32]; // 5daa:bca0
db dummyd_7ffc4[32]; // 5daa:bcc0
db dummyd_7ffe4[32]; // 5daa:bce0
db dummyd_80004[32]; // 5daa:bd00
db dummyd_80024[32]; // 5daa:bd20
db dummyd_80044[32]; // 5daa:bd40
db dummyd_80064[32]; // 5daa:bd60
db dummyd_80084[32]; // 5daa:bd80
db dummyd_800a4[32]; // 5daa:bda0
db dummyd_800c4[32]; // 5daa:bdc0
db dummyd_800e4[32]; // 5daa:bde0
db dummyd_80104[32]; // 5daa:be00
db dummyd_80124[32]; // 5daa:be20
db dummyd_80144[32]; // 5daa:be40
db dummyd_80164[32]; // 5daa:be60
db dummyd_80184[32]; // 5daa:be80
db dummyd_801a4[32]; // 5daa:bea0
db dummyd_801c4[32]; // 5daa:bec0
db dummyd_801e4[32]; // 5daa:bee0
db dummyd_80204[32]; // 5daa:bf00
db dummyd_80224[32]; // 5daa:bf20
db dummyd_80244[32]; // 5daa:bf40
db dummyd_80264[32]; // 5daa:bf60
db dummyd_80284[32]; // 5daa:bf80
db dummyd_802a4[32]; // 5daa:bfa0
db dummyd_802c4[32]; // 5daa:bfc0
db dummyd_802e4[32]; // 5daa:bfe0
db dummyd_80304[32]; // 5daa:c000
db dummyd_80324[32]; // 5daa:c020
db dummyd_80344[32]; // 5daa:c040
db dummyd_80364[32]; // 5daa:c060
db dummyd_80384[32]; // 5daa:c080
db dummyd_803a4[32]; // 5daa:c0a0
db dummyd_803c4[32]; // 5daa:c0c0
db dummyd_803e4[32]; // 5daa:c0e0
db dummyd_80404[32]; // 5daa:c100
db dummyd_80424[32]; // 5daa:c120
db dummyd_80444[32]; // 5daa:c140
db dummyd_80464[32]; // 5daa:c160
db dummyd_80484[32]; // 5daa:c180
db dummyd_804a4[32]; // 5daa:c1a0
db dummyd_804c4[32]; // 5daa:c1c0
db dummyd_804e4[32]; // 5daa:c1e0
db dummyd_80504[32]; // 5daa:c200
db dummyd_80524[32]; // 5daa:c220
db dummyd_80544[32]; // 5daa:c240
db dummyd_80564[32]; // 5daa:c260
db dummyd_80584[32]; // 5daa:c280
db dummyd_805a4[32]; // 5daa:c2a0
db dummyd_805c4[32]; // 5daa:c2c0
db dummyd_805e4[32]; // 5daa:c2e0
db dummyd_80604[32]; // 5daa:c300
db dummyd_80624[32]; // 5daa:c320
db dummyd_80644[32]; // 5daa:c340
db dummyd_80664[32]; // 5daa:c360
db dummyd_80684[32]; // 5daa:c380
db dummyd_806a4[32]; // 5daa:c3a0
db dummyd_806c4[32]; // 5daa:c3c0
db dummyd_806e4[32]; // 5daa:c3e0
db dummyd_80704[32]; // 5daa:c400
db dummyd_80724[32]; // 5daa:c420
db dummyd_80744[32]; // 5daa:c440
db dummyd_80764[32]; // 5daa:c460
db dummyd_80784[32]; // 5daa:c480
db dummyd_807a4[32]; // 5daa:c4a0
db dummyd_807c4[32]; // 5daa:c4c0
db dummyd_807e4[32]; // 5daa:c4e0
db dummyd_80804[32]; // 5daa:c500
db dummyd_80824[32]; // 5daa:c520
db dummyd_80844[32]; // 5daa:c540
db dummyd_80864[32]; // 5daa:c560
db dummyd_80884[32]; // 5daa:c580
db dummyd_808a4[32]; // 5daa:c5a0
db dummyd_808c4[32]; // 5daa:c5c0
db dummyd_808e4[32]; // 5daa:c5e0
db dummyd_80904[32]; // 5daa:c600
db dummyd_80924[32]; // 5daa:c620
db dummyd_80944[32]; // 5daa:c640
db dummyd_80964[32]; // 5daa:c660
db dummyd_80984[32]; // 5daa:c680
db dummyd_809a4[32]; // 5daa:c6a0
db dummyd_809c4[32]; // 5daa:c6c0
db dummyd_809e4[32]; // 5daa:c6e0
db dummyd_80a04[32]; // 5daa:c700
db dummyd_80a24[32]; // 5daa:c720
db dummyd_80a44[32]; // 5daa:c740
db dummyd_80a64[32]; // 5daa:c760
db dummyd_80a84[32]; // 5daa:c780
db dummyd_80aa4[32]; // 5daa:c7a0
db dummyd_80ac4[32]; // 5daa:c7c0
db dummyd_80ae4[32]; // 5daa:c7e0
db dummyd_80b04[32]; // 5daa:c800
db dummyd_80b24[32]; // 5daa:c820
db dummyd_80b44[32]; // 5daa:c840
db dummyd_80b64[32]; // 5daa:c860
db dummyd_80b84[32]; // 5daa:c880
db dummyd_80ba4[32]; // 5daa:c8a0
db dummyd_80bc4[32]; // 5daa:c8c0
db dummyd_80be4[32]; // 5daa:c8e0
db dummyd_80c04[32]; // 5daa:c900
db dummyd_80c24[32]; // 5daa:c920
db dummyd_80c44[32]; // 5daa:c940
db dummyd_80c64[32]; // 5daa:c960
db dummyd_80c84[32]; // 5daa:c980
db dummyd_80ca4[32]; // 5daa:c9a0
db dummyd_80cc4[32]; // 5daa:c9c0
db dummyd_80ce4[32]; // 5daa:c9e0
db dummyd_80d04[32]; // 5daa:ca00
db dummyd_80d24[32]; // 5daa:ca20
db dummyd_80d44[32]; // 5daa:ca40
db dummyd_80d64[32]; // 5daa:ca60
db dummyd_80d84[32]; // 5daa:ca80
db dummyd_80da4[32]; // 5daa:caa0
db dummyd_80dc4[32]; // 5daa:cac0
db dummyd_80de4[32]; // 5daa:cae0
db dummyd_80e04[32]; // 5daa:cb00
db dummyd_80e24[32]; // 5daa:cb20
db dummyd_80e44[32]; // 5daa:cb40
db dummyd_80e64[32]; // 5daa:cb60
db dummyd_80e84[32]; // 5daa:cb80
db dummyd_80ea4[32]; // 5daa:cba0
db dummyd_80ec4[32]; // 5daa:cbc0
db dummyd_80ee4[32]; // 5daa:cbe0
db dummyd_80f04[32]; // 5daa:cc00
db dummyd_80f24[32]; // 5daa:cc20
db dummyd_80f44[32]; // 5daa:cc40
db dummyd_80f64[32]; // 5daa:cc60
db dummyd_80f84[32]; // 5daa:cc80
db dummyd_80fa4[32]; // 5daa:cca0
db dummyd_80fc4[32]; // 5daa:ccc0
db dummyd_80fe4[32]; // 5daa:cce0
db dummyd_81004[32]; // 5daa:cd00
db dummyd_81024[32]; // 5daa:cd20
db dummyd_81044[32]; // 5daa:cd40
db dummyd_81064[32]; // 5daa:cd60
db dummyd_81084[32]; // 5daa:cd80
db dummyd_810a4[32]; // 5daa:cda0
db dummyd_810c4[32]; // 5daa:cdc0
db dummyd_810e4[32]; // 5daa:cde0
db dummyd_81104[32]; // 5daa:ce00
db dummyd_81124[32]; // 5daa:ce20
db dummyd_81144[32]; // 5daa:ce40
db dummyd_81164[32]; // 5daa:ce60
db dummyd_81184[32]; // 5daa:ce80
db dummyd_811a4[32]; // 5daa:cea0
db dummyd_811c4[32]; // 5daa:cec0
db dummyd_811e4[32]; // 5daa:cee0
db dummyd_81204[32]; // 5daa:cf00
db dummyd_81224[32]; // 5daa:cf20
db dummyd_81244[32]; // 5daa:cf40
db dummyd_81264[32]; // 5daa:cf60
db dummyd_81284[32]; // 5daa:cf80
db dummyd_812a4[32]; // 5daa:cfa0
db dummyd_812c4[32]; // 5daa:cfc0
db dummyd_812e4[32]; // 5daa:cfe0
db dummyd_81304[32]; // 5daa:d000
db dummyd_81324[32]; // 5daa:d020
db dummyd_81344[32]; // 5daa:d040
db dummyd_81364[32]; // 5daa:d060
db dummyd_81384[32]; // 5daa:d080
db dummyd_813a4[32]; // 5daa:d0a0
db dummyd_813c4[32]; // 5daa:d0c0
db dummyd_813e4[32]; // 5daa:d0e0
db dummyd_81404[32]; // 5daa:d100
db dummyd_81424[32]; // 5daa:d120
db dummyd_81444[32]; // 5daa:d140
db dummyd_81464[32]; // 5daa:d160
db dummyd_81484[32]; // 5daa:d180
db dummyd_814a4[32]; // 5daa:d1a0
db dummyd_814c4[32]; // 5daa:d1c0
db dummyd_814e4[32]; // 5daa:d1e0
db dummyd_81504[32]; // 5daa:d200
db dummyd_81524[32]; // 5daa:d220
db dummyd_81544[32]; // 5daa:d240
db dummyd_81564[32]; // 5daa:d260
db dummyd_81584[32]; // 5daa:d280
db dummyd_815a4[32]; // 5daa:d2a0
db dummyd_815c4[32]; // 5daa:d2c0
db dummyd_815e4[32]; // 5daa:d2e0
db dummyd_81604[32]; // 5daa:d300
db dummyd_81624[32]; // 5daa:d320
db dummyd_81644[32]; // 5daa:d340
db dummyd_81664[32]; // 5daa:d360
db dummyd_81684[32]; // 5daa:d380
db dummyd_816a4[32]; // 5daa:d3a0
db dummyd_816c4[32]; // 5daa:d3c0
db dummyd_816e4[32]; // 5daa:d3e0
db dummyd_81704[32]; // 5daa:d400
db dummyd_81724[32]; // 5daa:d420
db dummyd_81744[32]; // 5daa:d440
db dummyd_81764[32]; // 5daa:d460
db dummyd_81784[32]; // 5daa:d480
db dummyd_817a4[32]; // 5daa:d4a0
db dummyd_817c4[32]; // 5daa:d4c0
db dummyd_817e4[32]; // 5daa:d4e0
db dummyd_81804[32]; // 5daa:d500
db dummyd_81824[32]; // 5daa:d520
db dummyd_81844[32]; // 5daa:d540
db dummyd_81864[32]; // 5daa:d560
db dummyd_81884[32]; // 5daa:d580
db dummyd_818a4[32]; // 5daa:d5a0
db dummyd_818c4[32]; // 5daa:d5c0
db dummyd_818e4[32]; // 5daa:d5e0
db dummyd_81904[32]; // 5daa:d600
db dummyd_81924[32]; // 5daa:d620
db dummyd_81944[32]; // 5daa:d640
db dummyd_81964[32]; // 5daa:d660
db dummyd_81984[32]; // 5daa:d680
db dummyd_819a4[32]; // 5daa:d6a0
db dummyd_819c4[32]; // 5daa:d6c0
db dummyd_819e4[32]; // 5daa:d6e0
db dummyd_81a04[32]; // 5daa:d700
db dummyd_81a24[32]; // 5daa:d720
db dummyd_81a44[32]; // 5daa:d740
db dummyd_81a64[32]; // 5daa:d760
db dummyd_81a84[32]; // 5daa:d780
db dummyd_81aa4[32]; // 5daa:d7a0
db dummyd_81ac4[32]; // 5daa:d7c0
db dummyd_81ae4[32]; // 5daa:d7e0
db dummyd_81b04[32]; // 5daa:d800
db dummyd_81b24[32]; // 5daa:d820
db dummyd_81b44[32]; // 5daa:d840
db dummyd_81b64[32]; // 5daa:d860
db dummyd_81b84[32]; // 5daa:d880
db dummyd_81ba4[32]; // 5daa:d8a0
db dummyd_81bc4[32]; // 5daa:d8c0
db dummyd_81be4[32]; // 5daa:d8e0
db dummyd_81c04[32]; // 5daa:d900
db dummyd_81c24[32]; // 5daa:d920
db dummyd_81c44[32]; // 5daa:d940
db dummyd_81c64[32]; // 5daa:d960
db dummyd_81c84[32]; // 5daa:d980
db dummyd_81ca4[32]; // 5daa:d9a0
db dummyd_81cc4[32]; // 5daa:d9c0
db dummyd_81ce4[32]; // 5daa:d9e0
db dummyd_81d04[32]; // 5daa:da00
db dummyd_81d24[32]; // 5daa:da20
db dummyd_81d44[32]; // 5daa:da40
db dummyd_81d64[32]; // 5daa:da60
db dummyd_81d84[32]; // 5daa:da80
db dummyd_81da4[32]; // 5daa:daa0
db dummyd_81dc4[32]; // 5daa:dac0
db dummyd_81de4[32]; // 5daa:dae0
db dummyd_81e04[32]; // 5daa:db00
db dummyd_81e24[32]; // 5daa:db20
db dummyd_81e44[32]; // 5daa:db40
db dummyd_81e64[32]; // 5daa:db60
db dummyd_81e84[32]; // 5daa:db80
db dummyd_81ea4[32]; // 5daa:dba0
db dummyd_81ec4[32]; // 5daa:dbc0
db dummyd_81ee4[32]; // 5daa:dbe0
db dummyd_81f04[32]; // 5daa:dc00
db dummyd_81f24[32]; // 5daa:dc20
db dummyd_81f44[32]; // 5daa:dc40
db dummyd_81f64[32]; // 5daa:dc60
db dummyd_81f84[32]; // 5daa:dc80
db dummyd_81fa4[32]; // 5daa:dca0
db dummyd_81fc4[32]; // 5daa:dcc0
db dummyd_81fe4[32]; // 5daa:dce0
db dummyd_82004[32]; // 5daa:dd00
db dummyd_82024[32]; // 5daa:dd20
db dummyd_82044[32]; // 5daa:dd40
db dummyd_82064[32]; // 5daa:dd60
db dummyd_82084[32]; // 5daa:dd80
db dummyd_820a4[32]; // 5daa:dda0
db dummyd_820c4[32]; // 5daa:ddc0
db dummyd_820e4[32]; // 5daa:dde0
db dummyd_82104[32]; // 5daa:de00
db dummyd_82124[32]; // 5daa:de20
db dummyd_82144[32]; // 5daa:de40
db dummyd_82164[32]; // 5daa:de60
db dummyd_82184[32]; // 5daa:de80
db dummyd_821a4[32]; // 5daa:dea0
db dummyd_821c4[32]; // 5daa:dec0
db dummyd_821e4[32]; // 5daa:dee0
db dummyd_82204[32]; // 5daa:df00
db dummyd_82224[32]; // 5daa:df20
db dummyd_82244[32]; // 5daa:df40
db dummyd_82264[32]; // 5daa:df60
db dummyd_82284[32]; // 5daa:df80
db dummyd_822a4[32]; // 5daa:dfa0
db dummyd_822c4[32]; // 5daa:dfc0
db dummyd_822e4[32]; // 5daa:dfe0
db dummyd_82304[32]; // 5daa:e000
db dummyd_82324[32]; // 5daa:e020
db dummyd_82344[32]; // 5daa:e040
db dummyd_82364[32]; // 5daa:e060
db dummyd_82384[32]; // 5daa:e080
db dummyd_823a4[32]; // 5daa:e0a0
db dummyd_823c4[32]; // 5daa:e0c0
db dummyd_823e4[32]; // 5daa:e0e0
db dummyd_82404[32]; // 5daa:e100
db dummyd_82424[32]; // 5daa:e120
db dummyd_82444[32]; // 5daa:e140
db dummyd_82464[32]; // 5daa:e160
db dummyd_82484[32]; // 5daa:e180
db dummyd_824a4[32]; // 5daa:e1a0
db dummyd_824c4[32]; // 5daa:e1c0
db dummyd_824e4[32]; // 5daa:e1e0
db dummyd_82504[32]; // 5daa:e200
db dummyd_82524[32]; // 5daa:e220
db dummyd_82544[32]; // 5daa:e240
db dummyd_82564[32]; // 5daa:e260
db dummyd_82584[32]; // 5daa:e280
db dummyd_825a4[32]; // 5daa:e2a0
db dummyd_825c4[32]; // 5daa:e2c0
db dummyd_825e4[32]; // 5daa:e2e0
db dummyd_82604[32]; // 5daa:e300
db dummyd_82624[32]; // 5daa:e320
db dummyd_82644[32]; // 5daa:e340
db dummyd_82664[32]; // 5daa:e360
db dummyd_82684[32]; // 5daa:e380
db dummyd_826a4[32]; // 5daa:e3a0
db dummyd_826c4[32]; // 5daa:e3c0
db dummyd_826e4[32]; // 5daa:e3e0
db dummyd_82704[32]; // 5daa:e400
db dummyd_82724[32]; // 5daa:e420
db dummyd_82744[32]; // 5daa:e440
db dummyd_82764[32]; // 5daa:e460
db dummyd_82784[32]; // 5daa:e480
db dummyd_827a4[32]; // 5daa:e4a0
db dummyd_827c4[32]; // 5daa:e4c0
db dummyd_827e4[32]; // 5daa:e4e0
db dummyd_82804[32]; // 5daa:e500
db dummyd_82824[32]; // 5daa:e520
db dummyd_82844[32]; // 5daa:e540
db dummyd_82864[32]; // 5daa:e560
db dummyd_82884[32]; // 5daa:e580
db dummyd_828a4[32]; // 5daa:e5a0
db dummyd_828c4[32]; // 5daa:e5c0
db dummyd_828e4[32]; // 5daa:e5e0
db dummyd_82904[32]; // 5daa:e600
db dummyd_82924[32]; // 5daa:e620
db dummyd_82944[32]; // 5daa:e640
db dummyd_82964[32]; // 5daa:e660
db dummyd_82984[32]; // 5daa:e680
db dummyd_829a4[32]; // 5daa:e6a0
db dummyd_829c4[32]; // 5daa:e6c0
db dummyd_829e4[32]; // 5daa:e6e0
db dummyd_82a04[32]; // 5daa:e700
db dummyd_82a24[32]; // 5daa:e720
db dummyd_82a44[32]; // 5daa:e740
db dummyd_82a64[32]; // 5daa:e760
db dummyd_82a84[32]; // 5daa:e780
db dummyd_82aa4[32]; // 5daa:e7a0
db dummyd_82ac4[32]; // 5daa:e7c0
db dummyd_82ae4[32]; // 5daa:e7e0
db dummyd_82b04[32]; // 5daa:e800
db dummyd_82b24[32]; // 5daa:e820
db dummyd_82b44[32]; // 5daa:e840
db dummyd_82b64[32]; // 5daa:e860
db dummyd_82b84[32]; // 5daa:e880
db dummyd_82ba4[32]; // 5daa:e8a0
db dummyd_82bc4[32]; // 5daa:e8c0
db dummyd_82be4[32]; // 5daa:e8e0
db dummyd_82c04[32]; // 5daa:e900
db dummyd_82c24[32]; // 5daa:e920
db dummyd_82c44[32]; // 5daa:e940
db dummyd_82c64[32]; // 5daa:e960
db dummyd_82c84[32]; // 5daa:e980
db dummyd_82ca4[32]; // 5daa:e9a0
db dummyd_82cc4[32]; // 5daa:e9c0
db dummyd_82ce4[32]; // 5daa:e9e0
db dummyd_82d04[32]; // 5daa:ea00
db dummyd_82d24[32]; // 5daa:ea20
db dummyd_82d44[32]; // 5daa:ea40
db dummyd_82d64[32]; // 5daa:ea60
db dummyd_82d84[32]; // 5daa:ea80
db dummyd_82da4[32]; // 5daa:eaa0
db dummyd_82dc4[32]; // 5daa:eac0
db dummyd_82de4[32]; // 5daa:eae0
db dummyd_82e04[32]; // 5daa:eb00
db dummyd_82e24[32]; // 5daa:eb20
db dummyd_82e44[32]; // 5daa:eb40
db dummyd_82e64[7056]; // 64aa:0000
db dummyd_849f4[81920]; // 785a:0000
db dummyd_989f4[74240]; // 7867:0000
db dummyd_aabf4[223664]; // 871d:0000
db dummyd_e15a4[80]; // 88d6:0000
db dummyd_e15f4[32512]; // 9cd6:0000
db dummyd_e94f4[2656]; // aef6:0000
db dummyd_e9f54[8848]; // e591:0000
db dummyd_ec1e4;
db dummyd_ec1e5;
db dummyd_ec1e6;
db dummyd_ec1e7;
db dummyd_ec1e8;
db dummyd_ec1e9;
db dummyd_ec1ea;
db dummyd_ec1eb;
db dummyd_ec1ec;
db dummyd_ec1ed;
db dummyd_ec1ee;
db dummyd_ec1ef;
db dummyd_ec1f0;
db dummyd_ec1f1;
db dummyd_ec1f2;
db dummyd_ec1f3;
db dummyd_ec1f4[5740];
db unk_feb40; // ed86:0000
db dummyd_ed861;
db dummyd_ed862;
db dummyd_ed863;
db dummyd_ed864;
db dummyd_ed865;
db dummyd_ed866;
db dummyd_ed867;
db dummyd_ed868;
db dummyd_ed869;
db dummyd_ed86a;
db dummyd_ed86b;
db dummyd_ed86c;
db dummyd_ed86d;
db dummyd_ed86e;
db dummyd_ed86f;
db dummyd_ed870[2640];
db unk_feb50; // ee2c:0000
db dummyd_ee2c1;
db dummyd_ee2c2;
db dummyd_ee2c3;
db dummyd_ee2c4;
db dummyd_ee2c5;
db dummyd_ee2c6;
db dummyd_ee2c7;
db dummyd_ee2c8;
db dummyd_ee2c9;
db dummyd_ee2ca;
db dummyd_ee2cb;
db dummyd_ee2cc;
db dummyd_ee2cd;
db dummyd_ee2ce;
db dummyd_ee2cf;
db dummyd_ee2d0[8832];
db dummyd_f0550[32]; // f055:0000
db dummyd_f0570;
db dummyd_f0571;
db dummyd_f0572;
db dummyd_f0573;
db dummyd_f0574;
db dummyd_f0575;
db dummyd_f0576;
db dummyd_f0577;
db dummyd_f0578;
db dummyd_f0579;
db dummyd_f057a;
db dummyd_f057b;
db dummyd_f057c;
db dummyd_f057d;
db unk_feb8e; // f056:000e
db dummyd_f057f;
db dummyd_f0580[32]; // f057:0000
db dummyd_f05a0;
db dummyd_f05a1;
db dummyd_f05a2;
db dummyd_f05a3;
db dummyd_f05a4;
db dummyd_f05a5;
db dummyd_f05a6;
db dummyd_f05a7;
db dummyd_f05a8;
db dummyd_f05a9;
db dummyd_f05aa;
db dummyd_f05ab;
db dummyd_f05ac;
db dummyd_f05ad;
db dummyd_f05ae;
db dummyd_f05af;
db dummyd_f05b0[32]; // f058:0000
db dummyd_f05d0[32]; // f058:0020
db dummyd_f05f0;
db dummyd_f05f1;
db dummyd_f05f2;
db dummyd_f05f3;
db dummyd_f05f4;
db dummyd_f05f5;
db dummyd_f05f6;
db dummyd_f05f7;
db dummyd_f05f8;
db dummyd_f05f9;
db dummyd_f05fa;
db dummyd_f05fb;
db dummyd_f05fc;
db dummyd_f05fd;
db dummyd_f05fe;
db dummyd_f05ff;
db unk_fec10; // f05a:0000
db dummyd_f0601[32]; // f05a:0001
db dummyd_f0621;
db dummyd_f0622;
db dummyd_f0623;
db dummyd_f0624;
db dummyd_f0625;
db dummyd_f0626;
db dummyd_f0627;
db dummyd_f0628;
db dummyd_f0629;
db dummyd_f062a;
db dummyd_f062b;
db dummyd_f062c;
db dummyd_f062d;
db dummyd_f062e;
db dummyd_f062f;
db unk_fec40; // f05b:0000
db dummyd_f0631;
db dummyd_f0632;
db dummyd_f0633;
db dummyd_f0634;
db dummyd_f0635;
db dummyd_f0636;
db dummyd_f0637;
db dummyd_f0638;
db dummyd_f0639;
db dummyd_f063a;
db dummyd_f063b;
db dummyd_f063c;
db dummyd_f063d;
db dummyd_f063e;
db dummyd_f063f;
db dummyd_f0640[32]; // f05e:0000
db dummyd_f0660;
db dummyd_f0661;
db dummyd_f0662;
db dummyd_f0663;
db dummyd_f0664;
db dummyd_f0665;
db dummyd_f0666;
db dummyd_f0667;
db dummyd_f0668;
db dummyd_f0669;
db dummyd_f066a;
db dummyd_f066b;
db dummyd_f066c;
db dummyd_f066d;
db dummyd_f066e;
db dummyd_f066f;
db dummyd_f0670[32]; // f063:0000
db dummyd_f0690[32]; // f063:0020
db dummyd_f06b0[32]; // f063:0040
db dummyd_f06d0[32]; // f063:0060
db dummyd_f06f0[32]; // f063:0080
db dummyd_f0710[32]; // f063:00a0
db dummyd_f0730[32]; // f066:0000
db dummyd_f0750;
db dummyd_f0751;
db dummyd_f0752;
db dummyd_f0753;
db dummyd_f0754;
db dummyd_f0755;
db dummyd_f0756;
db dummyd_f0757;
db dummyd_f0758;
db dummyd_f0759;
db dummyd_f075a;
db dummyd_f075b;
db dummyd_f075c;
db dummyd_f075d;
db dummyd_f075e;
db dummyd_f075f;
db unk_fed70; // f067:0000
db dummyd_f0761[32]; // f067:0001
db dummyd_f0781[32]; // f067:0021
db dummyd_f07a1;
db dummyd_f07a2;
db dummyd_f07a3;
db dummyd_f07a4;
db dummyd_f07a5;
db dummyd_f07a6;
db dummyd_f07a7;
db dummyd_f07a8;
db dummyd_f07a9;
db dummyd_f07aa;
db dummyd_f07ab;
db dummyd_f07ac;
db dummyd_f07ad;
db dummyd_f07ae;
db dummyd_f07af;
db dummyd_f07b0[32]; // f06a:0000
db dummyd_f07d0[32]; // f06a:0020
db dummyd_f07f0[32]; // f076:0000
db dummyd_f0810[32]; // f076:0020
db dummyd_f0830[32]; // f079:0000
db dummyd_f0850[32]; // f079:0020
db dummyd_f0870[32]; // f079:0040
db dummyd_f0890[32]; // f079:0060
db dummyd_f08b0[32]; // f07e:0000
db dummyd_f08d0[32]; // f07e:0020
db dummyd_f08f0;
db dummyd_f08f1;
db dummyd_f08f2;
db dummyd_f08f3;
db dummyd_f08f4;
db dummyd_f08f5;
db dummyd_f08f6;
db dummyd_f08f7;
db dummyd_f08f8;
db dummyd_f08f9;
db dummyd_f08fa;
db dummyd_f08fb;
db dummyd_f08fc;
db dummyd_f08fd;
db dummyd_f08fe;
db dummyd_f08ff;
db unk_fef10; // f082:0000
db dummyd_f0901[32]; // f082:0001
db dummyd_f0921;
db dummyd_f0922;
db dummyd_f0923;
db dummyd_f0924;
db dummyd_f0925;
db dummyd_f0926;
db dummyd_f0927;
db dummyd_f0928;
db dummyd_f0929;
db dummyd_f092a;
db dummyd_f092b;
db dummyd_f092c;
db dummyd_f092d;
db dummyd_f092e;
db dummyd_f092f;
db dummyd_f0930[32]; // f086:0000
db dummyd_f0950[32]; // f086:0020
db unk_fef90; // f093:0000
db dummyd_f0971[32]; // f093:0001
db dummyd_f0991[32]; // f093:0021
db dummyd_f09b1[32]; // f093:0041
db dummyd_f09d1;
db dummyd_f09d2;
db dummyd_f09d3;
db dummyd_f09d4;
db dummyd_f09d5;
db dummyd_f09d6;
db dummyd_f09d7;
db dummyd_f09d8;
db dummyd_f09d9;
db dummyd_f09da;
db dummyd_f09db;
db dummyd_f09dc;
db dummyd_f09dd;
db dummyd_f09de;
db dummyd_f09df;
db unk_ff000; // f096:0000
db dummyd_f09e1;
db dummyd_f09e2;
db dummyd_f09e3;
db dummyd_f09e4;
db dummyd_f09e5;
db dummyd_f09e6;
db dummyd_f09e7;
db dummyd_f09e8;
db dummyd_f09e9;
db dummyd_f09ea;
db dummyd_f09eb;
db dummyd_f09ec;
db dummyd_f09ed;
db dummyd_f09ee;
db dummyd_f09ef;
db dummyd_f09f0[848]; // f09a:0000
db unk_ff360; // f09b:0000
db dummyd_f0d41[32]; // f09b:0001
db dummyd_f0d61[32]; // f09b:0021
db dummyd_f0d81;
db dummyd_f0d82;
db dummyd_f0d83;
db dummyd_f0d84;
db dummyd_f0d85;
db dummyd_f0d86;
db dummyd_f0d87;
db dummyd_f0d88;
db dummyd_f0d89;
db dummyd_f0d8a;
db dummyd_f0d8b;
db dummyd_f0d8c;
db dummyd_f0d8d;
db dummyd_f0d8e;
db dummyd_f0d8f;
db dummyd_f0d90;
db dummyd_f0d91;
db dummyd_f0d92;
db dummyd_f0d93;
db dummyd_f0d94;
db dummyd_f0d95;
db dummyd_f0d96;
db dummyd_f0d97;
db dummyd_f0d98;
db dummyd_f0d99;
db dummyd_f0d9a;
db dummyd_f0d9b;
db dummyd_f0d9c;
db dummyd_f0d9d;
db dummyd_f0d9e;
db dummyd_f0d9f;
db dummyd_f0da0[32]; // f0a2:0000
db dummyd_f0dc0[32]; // f0a2:0020
db dummyd_f0de0[32]; // f0a2:0040
db dummyd_f0e00[32]; // f0a2:0060
db dummyd_f0e20[32]; // f0a2:0080
db dummyd_f0e40[32]; // f0a2:00a0
db dummyd_f0e60[32]; // f0a2:00c0
db dummyd_f0e80[32]; // f0a2:00e0
db dummyd_f0ea0[32]; // f0a2:0100
db dummyd_f0ec0[32]; // f0a2:0120
db dummyd_f0ee0[32]; // f0a2:0140
db dummyd_f0f00[32]; // f0a2:0160
db dummyd_f0f20[32]; // f0de:0000
db dummyd_f0f40[32]; // f0de:0020
db dummyd_f0f60[32]; // f0de:0040
db dummyd_f0f80[32]; // f0de:0060
db dummyd_f0fa0[32]; // f0de:0080
db dummyd_f0fc0[32]; // f0de:00a0
db dummyd_f0fe0;
db dummyd_f0fe1;
db dummyd_f0fe2;
db dummyd_f0fe3;
db dummyd_f0fe4;
db dummyd_f0fe5;
db dummyd_f0fe6;
db dummyd_f0fe7;
db dummyd_f0fe8;
db dummyd_f0fe9;
db dummyd_f0fea;
db dummyd_f0feb;
db dummyd_f0fec;
db dummyd_f0fed;
db dummyd_f0fee;
db dummyd_f0fef;
db dummyd_f0ff0;
db dummyd_f0ff1;
db dummyd_f0ff2;
db dummyd_f0ff3;
db dummyd_f0ff4;
db dummyd_f0ff5;
db dummyd_f0ff6;
db dummyd_f0ff7;
db dummyd_f0ff8;
db dummyd_f0ff9;
db unk_ff7aa; // f0de:00da
db dummyd_f0ffb[32]; // f0de:00db
db dummyd_f101b[32]; // f0de:00fb
db dummyd_f103b[32]; // f0de:011b
db dummyd_f105b[32]; // f0de:013b
db dummyd_f107b[32]; // f0de:015b
db dummyd_f109b;
db dummyd_f109c;
db unk_ff84d; // f0de:017d
db dummyd_f109e[32]; // f0de:017e
db dummyd_f10be[32]; // f0de:019e
db dummyd_f10de[32]; // f0de:01be
db dummyd_f10fe[32]; // f0de:01de
db dummyd_f111e[32]; // f0de:01fe
db dummyd_f113e[32]; // f0de:021e
db dummyd_f115e[32]; // f0de:023e
db dummyd_f117e[32]; // f0de:025e
db dummyd_f119e;
db dummyd_f119f;
db dummyd_f11a0;
db dummyd_f11a1;
db dummyd_f11a2;
db dummyd_f11a3;
db dummyd_f11a4;
db dummyd_f11a5;
db dummyd_f11a6;
db dummyd_f11a7;
db dummyd_f11a8;
db dummyd_f11a9;
db dummyd_f11aa;
db dummyd_f11ab;
db dummyd_f11ac;
db unk_ff95d; // f0de:028d
db dummyd_f11ae[32]; // f0de:028e
db dummyd_f11ce[32]; // f0de:02ae
db dummyd_f11ee[32]; // f0de:02ce
db dummyd_f120e[32]; // f0de:02ee
db dummyd_f122e[32]; // f0de:030e
db dummyd_f124e[32]; // f0de:032e
db dummyd_f126e[32]; // f0de:034e
db dummyd_f128e[32]; // f0de:036e
db dummyd_f12ae[32]; // f0de:038e
db dummyd_f12ce[32]; // f0de:03ae
db dummyd_f12ee[32]; // f0de:03ce
db dummyd_f130e[32]; // f0de:03ee
db dummyd_f132e[32]; // f0de:040e
db dummyd_f134e[32]; // f0de:042e
db dummyd_f136e[32]; // f0de:044e
db dummyd_f138e;
db dummyd_f138f;
db dummyd_f1390;
db dummyd_f1391;
db dummyd_f1392;
db dummyd_f1393;
db dummyd_f1394;
db dummyd_f1395;
db dummyd_f1396;
db dummyd_f1397;
db dummyd_f1398;
db dummyd_f1399;
db dummyd_f139a;
db dummyd_f139b;
db dummyd_f139c;
db dummyd_f139d;
db dummyd_f139e;
db dummyd_f139f;

#ifdef DOSBOX_CUSTOM
    db filll[1024*1024*16];
#endif
                        db stack[STACK_SIZE];
                        db heap[HEAP_SIZE];
                };
}
#pragma pack(pop)

#endif

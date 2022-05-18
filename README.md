LibDosBox

A reverse engineering toolkit which helps you precisely convert DOS 16 bit (segment model) binary code into working C++.
It is a fork of vanilla DOSBox with game code executed on real hardware but DOS interrupts and hardware emulated by DOSBox.

It will be working fake-assembler C++ code will real variables. 
If you want real readable code you will have to rewrite by hand or convert:
for example clang++ -> LLVM IR -> Iril -> MSIL -> dotPeak -> C# -> C++

[![Test drive 3](http://img.youtube.com/vi/MzK9RVgeWGM/0.jpg)](http://www.youtube.com/watch?v=MzK9RVgeWGM "Test drive 3")

[![Cryo Dune](http://img.youtube.com/vi/f-HArAmtXTc/0.jpg)](http://www.youtube.com/watch?v=f-HArAmtXTc "Cryo Dune")

To translate game code:
1. upload the game into IDA Pro.
2. Make sure code is code, data is data.
3. Do View -> Unhide all.
4. File -> Produce .lst and .map
5. Convert .lst using Masm2c to .cpp
6. Put .cpp into /src/custom/src and binary/data to /src
7. Prepare meson.build and init.cpp inside /src/custom/src/
8. Build and execute

Currently limited to real mode 16 bit DOS software.

How the converted instrumented debug execution works:

1. Data segments are checked before program starts: it compares what dosbox loaded from disk and what data was translated.
2. The hardware emulation is provided by Dosbox
3. Each translated instruction results are checked with instruction what dosbox emulates.
So if IDA was for example incorrectly pick wrong segment or wrongly converted data or masm2c converter do some mistake we will see it immediately.

By converting IDA generated .lst file we make sure:

the variable have names which assigned by IDA automatically or developer assigned using IDA GUI.
The unknown values are left as is and data and code addresses are the same for translated code and data.
So translated program behave we same way as when executed under Dosbox.

When you make sure the program is working as expected you can replace hardware emulation with your own later on.
Also you can rewrite game functions using Ghidra decompiler for example if not lazy enough.

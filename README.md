[![Linux builds](https://github.com/xor2003/libdosbox/actions/workflows/linux.yml/badge.svg)](https://github.com/xor2003/libdosbox/actions/workflows/linux.yml)
[![Windows builds](https://github.com/xor2003/libdosbox/actions/workflows/windows.yml/badge.svg)](https://github.com/xor2003/libdosbox/actions/workflows/windows.yml)

LibDosBox

A reverse engineering toolkit that enables the precise conversion of 16-bit DOS binary code into working C++ code. 
It is a fork of the DOSBox-staging emulator, but game code is executed by real CPU, and DOS interrupts and hardware are emulated by DOSBox. 
The toolkit helps to create working fake-assembler C++ code with real variables.

It will help to make working fake-assembler C++ code with real variables. 
(If you want real C code you will have to rewrite by hand or convert:
for example 
clang++ -> LLVM IR -> Iril -> MSIL -> dotPeak -> C# -> C++
or 
clang++ -> LLVM IR -> Rellic -> C++
or
masm2c -> angr decomplier
Full decompilation is WIP)

[![Test drive 3](http://img.youtube.com/vi/MzK9RVgeWGM/0.jpg)](http://www.youtube.com/watch?v=MzK9RVgeWGM "Test drive 3")

[![Cryo Dune](http://img.youtube.com/vi/f-HArAmtXTc/0.jpg)](http://www.youtube.com/watch?v=f-HArAmtXTc "Cryo Dune")

How the converted instrumented debug execution works:
1. Data segments are checked before program starts: it compares what dosbox loaded .exe from disk and what data was translated into .cpp/.h files.
2. The hardware emulation is provided by Dosbox
3. !Each translated instruction results are checked with the instruction what dosbox interprets! This ensures that all results, including registers, memory, and flags, are equal to the emulation
So if IDA for example was incorrectly pick a wrong segment or wrongly converted data or masm2c converter do some mistake we will see it immediately!

To translate game code:
1. Load the game .exe into IDA Pro.
2. Make sure code is disassembled and data is not.
3. Do "View" -> "Unhide all".
4. "File" -> Produce .lst and .map
5. Convert .lst using Masm2c into .cpp
6. Put .cpp into /src/custom/src and binary/data to /src
7. Prepare meson.build and init.cpp inside /src/custom/src/
8. Build and execute "dosbox game.exe"

The toolkit is currently limited to real mode 16-bit DOS software only. 

The conversion process involves converting IDA-generated .lst files 
to ensure that data and code addresses remain the same for translated code and data. 
So translated program behave we same way as when executed under Dosbox.

Once the program is working as expected, hardware emulation can be replaced with custom emulation, and some game functions can be rewritten using some decompiler if you want

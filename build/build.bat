@echo off
cd ..
g++ src/main/os.cpp src/main/main.cpp src/main/vars.cpp -o libreterminal
mkdir bin
move libreterminal.exe bin/
cd bin
mkdir win
move libreterminal.exe win/
cd win
libreterminal.exe

cd ../..
:: Please run this through the cmd, not PowerShell

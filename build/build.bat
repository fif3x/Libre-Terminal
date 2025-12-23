@echo off
cd ..
g++ src/main/os.cpp src/main/main.cpp src/main/vars.cpp -o libreterminal
move libreterminal.exe bin/
cd bin
move libreterminal.exe win/
cd win
libreterminal.exe
cd ../..
#!/bin/bash
cd ..
g++ -I../include src/main/os.cpp src/main/main.cpp src/main/vars.cpp src/main/readconf.cpp src/main/log.cpp -o libreterminal
mv libreterminal bin/
cd bin
mv libreterminal linux/
cd linux
chmod +rwx libreterminal
./libreterminal
cd ..
cd ..

# YOU MUST be in the build folder.
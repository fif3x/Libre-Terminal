#!/bin/bash
cd ..
make
mkdir -p bin
mv libreterminal bin
make clean

bin/libreterminal

# YOU MUST be in the build folder.

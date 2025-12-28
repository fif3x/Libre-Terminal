#!/bin/bash
cd ..
make
mkdir -p bin
mv libreterminal bin
make clean

sudo cp bin/libreterminal /usr/bin
libreterminal

cd..

# YOU MUST be in the build folder.

#/bin/bash

gcc -std=c++14 \
    -I./include \
    -lstdc++ \
    -fPIC \
    -shared \
    src/derived1.cc \
    src/derived2.cc \
    -o lib/libregistry.so

#/bin/bash

gcc --std=c++14 \
    -I./include \
    -lstdc++ \
    -o test_registry test/test_registry.cc src/derived1.cc src/derived2.cc

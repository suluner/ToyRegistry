#/bin/bash

gcc -std=c++14 \
    -I./include \
    -L./lib -lregistry \
    -lstdc++ \
    -o toy test/test_registry.cc

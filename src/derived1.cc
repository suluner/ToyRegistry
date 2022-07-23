#include "registry.h"
#include "derived1.h"

void Derived1::foo() { std::cout << "Derived1::foo()" << std::endl; }

REGISTER_BASE_CREATOR(Derived1);

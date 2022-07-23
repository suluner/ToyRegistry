#include "registry.h"
#include "derived2.h"

void Derived2::foo() { std::cout << "Derived2::foo()" << std::endl; }

REGISTER_BASE_CREATOR(Derived2);

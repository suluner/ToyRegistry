#include "registry.h"
#include "derived1.h"
#include "derived2.h"

int main(int argc, char **argv) {
  auto f = Registry::Global().GetCreator("Derived1");
  auto derived1 = f();
  derived1->foo();

  auto f2 = Registry::Global().GetCreator("Derived2");
  auto derived2 = f2();
  derived2->foo();
  return 0;
}

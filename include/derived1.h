#pragma once

#include "base.h"

class Derived1 : public Base {
public:
  virtual void foo() override final;
};

#pragma once

#include "base.h"

class Derived2 : public Base {
public:
  virtual void foo() override final;
};

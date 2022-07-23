#pragma once

#include <iostream>
#include <string>
#include <memory>
#include <map>
#include <functional>

class Base;

using MyCreator = std::function<std::unique_ptr<Base>()>;
struct Registry {
  static Registry &Global() {
    static Registry r;
    return r;
  }

  Registry &Register(const std::string &name, MyCreator creator) {
    m_[name] = creator;
    return *this;
  }

  MyCreator GetCreator(const std::string& name) const {
    return m_.at(name);
  }

private:
  std::map<std::string, MyCreator> m_;
};

#define CONCAT_AB_(A, B) A##B
#define CONCAT_AB(A, B) CONCAT_AB_(A, B)
#define REGISTER_BASE_CREATOR(name)                                            \
  static Registry &CONCAT_AB(test_reg_, __COUNTER__) =                         \
      Registry::Global().Register(#name, []() { return std::make_unique<name>(); })

//: C10:Dependency2.h
#ifndef DEPENDENCY2_H
#define DEPENDENCY2_H

#include "Dependency1.h"
class Dependency2 {
  Dependency1 dl;
 public:
  Dependency2(const Dependency1& dep1): dl(dep1) {
    std::cout << "Dependency2 Construction" << std::endl;
    print();
  }
  void print() {  dl.print(); }
};
#endif

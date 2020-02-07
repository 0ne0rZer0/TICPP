#include <iostream>
#include "Cpptime.h"

class A {
 public:
  A();
};
A::A() {
  for(int i = 0; i < 1000000; i++) {}
    //std::cout << "Constructor for A" << std::endl;
}
class B {
 public:
  A a;
  B();
};
B::B() {
    for(int i = 0; i < 1000000; i++) {}
  //  std::cout << "Constructor for B" << std::endl;
}
int main() {
  Time start;
  B obj[10000];
  Time end;
  std::cout << "Start " << start.ascii() << std::endl
          << "End " << end.ascii() << std::endl;
}

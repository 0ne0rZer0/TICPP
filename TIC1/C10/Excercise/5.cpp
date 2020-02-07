#include <iostream>
class Monitor1 {
  int incidentCount = 0;
 public:
  Monitor1() {
    std::cout <<"Monitor1 Construction" << std::endl;
  }
  ~Monitor1() {
    std::cout <<"Monitor1 Deconstruction" << std::endl;
  }
  void incident() {
    incidentCount++;
  }
  void decrement() {
    incidentCount--;
  }
  void print() {
    std::cout << incidentCount;
  }
};
class Monitor2 {
 Monitor1* a;
 public:
  Monitor2(Monitor1* a = new Monitor1()) : a(a) {
    a->incident();
    a->print();
  }
  ~Monitor2() {
    a->decrement();
    a->print();
  }
};
void foo() {
  static Monitor2 m(new Monitor1());
}
int main() {
  foo();
}

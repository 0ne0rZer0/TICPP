#include <iostream>
class Monitor {
  int incidentCount = 0;
 public:
  void incident() {
    incidentCount++;
  }
  void print() {
    std::cout << incidentCount;
  }
};
void foo() {
  static Monitor m;
  m.incident();
  m.print();
}
int main() {
  foo();
  foo();
  foo();
  foo();
  foo();
}

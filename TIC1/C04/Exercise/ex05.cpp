// C04: ex05.cpp

#include<iostream>
using std::endl;

struct ticpp{
  int a;
  void foo(int a) {
    this->a = a;
  }
  void bar() {
    std::cout << "Structure data : " << a << std::endl;
  }
};

int main() {
  ticpp ss;
  ss.foo(10);
  ss.bar();
}


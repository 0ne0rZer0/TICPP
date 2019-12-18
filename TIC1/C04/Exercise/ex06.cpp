// C04: ex06.cpp
// Class member selection and functions
#include<iostream>
class Demo {
 public:
  int a;
  float b;
  void foo();
  void bar();
};
void Demo::foo() {
  std::cout << this->a << std::endl;  
}
void Demo::bar() {
  std::cout << this->b << std::endl;  
}
int main() {
  Demo d;
  d.a = 10;
  d.b = 20;
  d.foo();
  d.bar();
}

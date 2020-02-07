/*
Create a class A with an inline default constructor that announces itself. 
Now make a new class B and put an object of A as a member of B, and give B an inline constructor. 
Create an array of B objects and see what happens.
*/
#include <iostream>
class A {
 public:
  inline A() {
    std::cout << "Constructor for A" << std::endl;
  }
};
class B {
 public:
  A a;
  inline B() {
    std::cout << "Constructor for B" << std::endl;
  }
};
int main() {
  B obj[3];
}

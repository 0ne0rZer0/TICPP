#include<iostream>
namespace std2 {
  #include "Header1.h"
  class X {
   public:
    void display() {
     std::cout << typeid(MyLib::f()).name();
    }
  };
}
namespace {
  class Arm {};
  class Leg {};
  class Head {};
  class Robot {
   public:
    Arm arm[4];
    Leg leg[4];
    Head head[3];
  } xanthan;
  int i, j ,k;
}
int main() {
  std::cout << i;
  Arm a;
  xanthan.arm[0] = a;
  std2::X x;
  x.display();
//  std::cout << typeid(MyLib::f()).name();
}

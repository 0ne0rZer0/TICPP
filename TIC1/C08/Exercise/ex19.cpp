//: ex19.cpp : 
// Create a class containing both a const and a non-const float. 
// Initialize these using the constructor initializer list.
#include <iostream>
using std::endl;
class X {
  const float cf;
  float ncf;
 public:
  X();
};
X::X():cf(1),ncf(2) {
  std::cout << "Initialzied cf and ncf (" << cf <<" ," << ncf << ")" << std::endl; 
}

int main() {
  X x;
  return 0;
}

// ex04.cpp
// Jumping for destructors
#include<iostream>
using namespace std;
class X {
 public:
  X() {
    std::cout << "constructor" << endl;
  }
  ~X() {
    std::cout << "Destructor" << endl;
  }
};
void foo() {
  static int count = 0;
  jump1:
  if(count == 1) return;
  X x; count++;
  goto jump1;
}
int main() {
  foo();
}
/* 
constructor
Destructor
*/

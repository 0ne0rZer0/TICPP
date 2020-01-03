//: C10:StaticObjectsInFunctions.cpp
#include <iostream>
using namespace std;

class X {
  int i;
 public:
  X(int ii = 0) : i(ii) {}  //Default
/*  X() {}
    X(int i):i(i) {}
*/
  ~X() { cout << "X::~X()" << endl; }      // Destructor is not called for x1 and x2
};
void f() {
  static X x1(47);
  static X x2;
  X x3(30);     // What is he trying to say here>
  X x4; 
}
int main() {
  f();  
  cout << "Function ends" << endl;
}

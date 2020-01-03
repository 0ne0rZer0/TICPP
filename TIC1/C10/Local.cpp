//: C10:Local.cpp
// Static members and local classes
#include <iostream>
using namespace std;

// Nested class CAN have static data members:
class Outer {
  class Inner {
    static int i; // OK
  };  
};

int Outer::Inner::i = 47;
 
void f() {
  class Local {
    public:
//      static int i;
//  error: Local classes shall not have a static data member 
  } x;;
}
int main() {
  Outer x;
  f();
}

// C10:SingleTon.cpp
// Static members of same type, ensures that only one object of this type exist
// Also referred to as the "singelton" pattern

#include <iostream>
using std::endl;

class Egg {
  static Egg e;
  int i;
  Egg(int i) : i(i) {}
  Egg(const Egg&);                  // Copy constructor blocked, no definition is neccessary because it is private and is never called
 public:
  static Egg* instance() { return &e; }
  int val() const { return i; }
};

Egg Egg::e(47); // Initializing private static self object.

int main() {
//!  Egg x(1);  Private within this context
//   Egg y();  // A function that returns Egg and is named y. lmao.
//!  Egg y; No matching function to call Egg::Egg()
  
  std::cout << Egg::instance()->val() << endl;
}

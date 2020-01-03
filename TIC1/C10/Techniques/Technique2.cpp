#include "Dependency2.h"
using namespace std;
// Returns a value so it can be called as a global init

int seperator() {
  cout << "---------------------------------" << endl;
  return 1;
}

//Simulate the dependency problem
extern Dependency1 dep1;
Dependency2 dep2(dep1);
Dependency1 dep1;
int x1 = seperator();

// But if it happens in this order it works a okay:
Dependency1 dep1b;
Dependency2 dep2b(dep1b);
int x2 = seperator();

Dependency1& d1() {
  static Dependency1 dep1;
  return dep1;
}

Dependency2& d2() {
  static Dependency2 dep2(d1());
  return dep2;
}

int main() {
  dep2.print(); // init is 0;
  seperator();

  Dependency2& dep2 = d2();
  dep2.print(); // init is 1;
}

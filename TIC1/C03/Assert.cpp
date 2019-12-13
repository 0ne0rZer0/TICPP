//: C03:Assert
#include <cassert>
using namespace std;

int main() {
  int i = 100;
  assert(i != 100); // Should fail

  return 0;  
}
/* a.out: Assert.cpp:7: int main(): Assertion `i != 100' failed.
Aborted (core dumped) *///~

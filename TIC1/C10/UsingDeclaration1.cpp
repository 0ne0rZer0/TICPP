#include "UsingDeclaration.h"
void h() {
  using namespace U;  // Using directive
  using V::f;         // Using declaration
  f();              // Calls v::f();
  U::f();           // Must fully quality to call
}
int main() {}

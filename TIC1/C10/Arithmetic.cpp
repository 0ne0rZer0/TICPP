#include "NamespaceInt.h"
#include <iostream>
void arithmetic() {
  using namespace Int;
  Integer x;
  x.setSign(positive);
  std::cout << x.getSign() << std::endl;
}
int main() {
  arithmetic();  
}

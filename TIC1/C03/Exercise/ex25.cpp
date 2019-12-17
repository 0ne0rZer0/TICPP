// C03:ex25.cpp
// Question
#include <iostream>
#include "printBinary.h"
int main() {
  float variable = 1;
  unsigned char *v2 = reinterpret_cast<unsigned char*>(&variable);
  for(int i = 0; i < sizeof(variable) ; i++) {
    std::cout << v2[i] << std::endl;
  }
  std::cout << "Binary starts" << std::endl;

  for(int i = 0; i < sizeof(variable) ; i++)  {
    printBinary(v2[i]);
    std::cout << std::endl;
  }
}

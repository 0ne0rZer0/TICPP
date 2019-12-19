// C06:ex01.cpp
// Simple class constructor
#include <iostream>
class Simple {
 public:
  Simple() {
    std::cout << "Constructor called" << std::endl;
  }
};
int main() { 
  Simple s;
  return 0;
}

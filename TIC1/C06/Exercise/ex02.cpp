// C06: ex02.cpp
//  Destructor in Simple
#include <iostream>
using namespace std;

class Simple {
 public:
  Simple() {
    std::cout << "Constructor" << std::endl;
  }
  ~Simple() {
    std::cout << "Destructor" << std::endl;
  }
};
int main() {
  Simple s;
  return 0;
}

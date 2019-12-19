// C06: ex02.cpp
//  Destructor in Simple
#include <iostream>
using namespace std;

class Simple {
 int x;
 public:
  Simple(int x) {
    this->x = x;
    std::cout << "Constructor" << std::endl;
  }
  ~Simple() {
    std::cout << "Destructor " << x << std::endl;
  }
};
int main() {
  Simple s(3);
  return 0;
}

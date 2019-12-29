#include <iostream>
#define FLOOR(x,b) x>=b?0:1
int main() {
  int a = 0x01f;
  std::cout << FLOOR(a&0x0f,0x07);
}

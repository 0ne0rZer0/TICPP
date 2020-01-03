#include <iostream>
extern int x;
int y = x + 1;
int main() {
  std::cout << x << y << std::endl;  
}

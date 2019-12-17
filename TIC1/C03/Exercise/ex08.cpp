// C03: ex08.cpp
// Checking support for trigraphs
#include <iostream> 
using namespace std;

int main() {
  int x = 10;
  int y = 10;
  std::cout << (x and y) << std::endl;  
  std::cout << (x or y) << std::endl;  
  std::cout << not x << std::endl;  
  std::cout << (x not_eq y) << std::endl;  
  std::cout << (x bitand y) << std::endl;  
  x and_eq y;
  std::cout << x << std::endl;
  std::cout << (x bitor y) << std::endl;  
  std::cout << (x xor y) << std::endl;  
  std::cout << compl x << std::endl;  
  
}

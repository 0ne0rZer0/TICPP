#include <iostream>
int fibonacci(bool reset = true) {
  static int prev = 0;
  static int curr = 1;
  int next = curr + prev;
  prev = curr;
  curr = next; 
  if(!reset) {
    prev = next = 0;
    curr = 1;
  }
  return next;
}
int main() {
  int count = 10;
  while(count-- > 0) {
    std::cout << fibonacci() << std::endl;
  }
  count = 3;
  std::cout << "Series Reset" << std::endl;
  fibonacci(false);
  while(count-- > 0) {
    std::cout << fibonacci(true) << std::endl;
  }
}

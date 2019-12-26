#include <iostream>
int main() {
  const char* sp = "Utkarshhhhhhh";
  char** s = const_cast<char**>(&sp);
  //  *(*s + 4) = 'z'; SIGSEG
  //  *s[2] = 'e'; SIGSEGV
  
  std::cout << *s << std::endl;
  std::cout << *(*s + 3) << std::endl;
  return 0;  
}

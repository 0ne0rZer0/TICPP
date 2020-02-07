/*
Write a program that uses the FLOOR( ) macro shown at the beginning of the chapter. Show the conditions under which it does not work properly.
*/
#define FLOOR(x) std::cout << (int)x << std::endl;
#include <iostream>
int main() {
  float x = 10.3;
  double s = 10.22222222;
  float a = 0.233;
  float c = 0x203f;
  FLOOR(c);
  return 0;  
}

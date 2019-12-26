//:C08 : ex03.cpp
// Create example const definitions for all the built-in types and their variants. 
// Use these in expressions with other consts to make new const definitions. Make sure they compile successfully.

#include <iostream>
using namespace std;

template< typename T>
void print(T t) {
  std::cout << t << std::endl;
}
int main() {

  const int i = 1;
  const char c = 'c';
  const float f = 44.4;
  const double d = 55.5;
  const long ll = 1231313213131;
  const double com = (d * f) + c - i;
  const double cc = ll/com;
  print(i);
  print(c);
  print(f);
  print(d);
  print(ll);
  print(com);
  print(cc);
}

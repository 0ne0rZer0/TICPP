#include <iostream>
int foo(int* var1 = 0) {
  static int* var = var1;
  if(*var == -1) { return -1; }
  return *var++;
}
int main() {
  int a[] = {1,2,3,4,5,6,-1};
  std::cout << foo(a) << "\t";
  int c;
  while((c = foo())!=-1)
    std::cout << c << "\t";
  return 0;
}

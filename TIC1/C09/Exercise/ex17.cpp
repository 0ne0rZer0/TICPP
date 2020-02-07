#include <iostream>
#define TRACE(s) std::cerr << #s << std::endl, s
int f(int i) {
  int x;
}
int main() {
  for(int i = 0; i < 100; i++) 
    TRACE(f(i));
}

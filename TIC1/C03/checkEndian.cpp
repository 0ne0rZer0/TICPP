// C03:checkEndian.cpp
// a program to check whether your cpu is little-endian or big-endian
// in big-endian most significant byte || first byte is stored first
// in little-endian most significant byte || first byte is stored last

#include <iostream>
using std::cout;
using std::cin;
int main() {
  int n = 1;
  // little endian if true
  if(*(char *)&n == 1) {
    std::cout << "Little-Endian Machine" << std::endl;  
  } else {
    std::cout << "Big-Endian Machine" << std::endl;
  } 
}

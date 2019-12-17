// C03:printBinary.cpp
// Converts to binary by bit by bit manipulation
#include<iostream>
void printBinary(const unsigned char val) {
  for(int i = 7; i >= 0; i--) {
    if(val & (1 << i))
      std::cout << "1";
    else 
      std::cout << "0";  
  }
}

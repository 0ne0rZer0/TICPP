// C06: ex07.cpp
// Create an array of double initialize using aggregate initialization without enough elements, sizeof it. next array w automatic counting sizeof it also.
#include <iostream>
using std::endl;
int main() {
  double internalFrag[5] = {2,3};
  std::cout << "Size of internalFrag: " << sizeof(internalFrag) << endl; 
  for(int i = 0; i < sizeof(internalFrag)/sizeof(double); i++) 
    std::cout << "i: " << internalFrag[i] << endl;
  double autoCount[] = {1,2,3,45,5,6};
  std::cout << "Size of autoCount(6): " << sizeof(autoCount) << endl;
  return 0;  
}

// C03: ex28.cpp
// Function(double[],size) print elements. Print an empty array, then reinterpret to unsigned char, and set each byte to 1
#include <iostream>
using std::endl;
void printArray(double arr[], int size) {
  std::cout << "Array : " << endl;
  std::cout << "[ ";
  for(int i = 0; i < size; i++) 
    std::cout << arr[i] << " ";
  std::cout << "]";
  std::cout << endl;
} 
int main() {
  double arr[10] = {0};
  printArray(arr,10);
  unsigned char* uncptr = reinterpret_cast<unsigned char*>(arr);
  for(int i = 0; i < sizeof(arr); i++)
    *(uncptr+i) = 1;
  printArray(arr,10);
  return 0;  
}

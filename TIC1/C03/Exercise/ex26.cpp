// C03:ex26.cpp
// Array starting address to void* and pass to a function(void*,byte_total,value_byte)
#include <iostream>
using std::cout;
using std::cin;
void assignByte(void* ar, int byte_total, int byte_value) {
  int* arr = static_cast<int*>(ar); 
  for(int i = 0; i < byte_total; i++) {
    arr[i] = 4;  
  }
}
int main() {
  int arr[10] = {0};
  assignByte(static_cast<void*>(arr),10,4);
  for(int i = 0; i < 10; i++)
    std::cout << arr[i] << " ";
  return 0;  
}

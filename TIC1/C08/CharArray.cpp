#include <iostream>
int main() {
//  :wq char arr = "Howdy";
  char *arr = "Howdy";
  //! *arr = "sssssss"; invalid conversion from 'const char*' to 'char';
  *&arr = "sssadasd"; // WORKS!
  char arr2[] = "howdy";
//  arr2[0] = "ss";
//! arr2 = "sssss"; CharArray.cpp:9:10: error: invalid array assignment
  /* 
  for(int i = 0; i < 5; i++){
    // Undefined behaviour(SEGFAULT);
    //! *(arr + i) = 'a';
    //  arr[0] = 'a';
    std::cout << *(arr+i) << " ";
  }// warning ISO C++ forbids conversion from string constant ' to 'char *';
  */
}

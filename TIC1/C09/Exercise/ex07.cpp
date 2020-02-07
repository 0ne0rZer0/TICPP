/*
Create a class that contains an array of char. Add an inline constructor that uses the Standard C library function memset( ) to initialize the array to the constructor argument (default this to ‘ ’), and an inline member function called print( ) to print out all the characters in the array.
*/
#include <iostream>
#include <cstring>
class Ex06 {
  char arr[30];
 public:
  inline Ex06() {
    memset(arr,' ',30);
  }
  inline void print() {
    for( char a: arr) {
      std::cout << a << std::endl;
    }
  }
};
int main() {
  Ex06 ex;
  ex.print();
  return 0;  
}

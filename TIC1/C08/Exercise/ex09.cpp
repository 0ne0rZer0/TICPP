/* 
Write a const pointer to a double, and point it at an array of double. 
Show that you can change what the pointer points to, but you can’t increment or decrement the pointer.
*/
#include <iostream>
using namespace std;
int main() {
  double a[] = {1.2,3.4};
  double b[] = {1.32,33.4};
  double* const i = a;  
  //! i++; read-only variable
  //! i = b; read-only variable

  return 0;  
}

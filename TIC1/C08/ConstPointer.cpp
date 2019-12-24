#include <iostream>
using std::endl;
int main() {
  int vi = 10;
  int ji = 20;
  int ki = 30;
  const int vci = 10;
  const int jci = 20;
  const int kci = 30;
  const int* v  = &vi;                        // V is a pointer that points to a constant int
  const int* vc  = &vci;                        // V is a pointer that points to a constant int
//  int* nonconst = &vci;
//!  std::cout << (*v)++ << std::endl << (*vc)++; increment of readonly v.

//  int const* j;                               // J is a pointer that pointes to an int which is constant (same as above)
    int* const k = &vi;                               // k is a constant pointer that points to an int
    (*k)++;             // Allowed because address is const not the value
    //!k++;                // Not allowed! address cannot be modified
  return 0;  
}

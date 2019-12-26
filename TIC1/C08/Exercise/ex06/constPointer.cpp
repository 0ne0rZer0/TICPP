#include <iostream>
using namespace std;
int main() {
  char* const s = "ssssssssssssssssssssssssss";               // S is character pointer that is constant i.e Constant Pointer
  //  s = "aa";  // Should not be allowed therefore : assignment of read only variable
  *s = 'a';     // Should be allowed ? but gives SIGSEGV
  //  *(*s) = 'a';    // Try2 : invalid type unary * (have 'char')
  /*
  SegSIG
  char *b = 'b';
  *s = *b;
  */
 return 0;  
}

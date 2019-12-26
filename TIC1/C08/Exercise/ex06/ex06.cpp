#include <iostream>
using namespace std;
int main() {
  const char *c = "Utkarsh nagdev";
  char* const d = "SSS SS";
   c = "SSSS";            // Direct change is allowed !
  cout << c << endl;
//  char *f = c;    error : cannot convert from const char* to char*
  char *f = const_cast<char*>(c);
//  *(f+3) = 's'; Segmentation fault(core dumped) (valgrind = bad permission at address blah blah);
  char *e = d; 
//  *(e+3) = 'k'; Same error
//  *(c+3) = 'd'; assignment at read only location
//    *(d+3) = 'd'; SegFau
  return 0;
}

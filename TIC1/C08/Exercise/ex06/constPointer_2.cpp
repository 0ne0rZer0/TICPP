#include <iostream>
using namespace std;
int main() {
  char a  = 'A', b = 'B';
  char* const ptr = &a;
  // ptr = &b assignment of read-only value
  *ptr = b;   // This works!?
  return 0;  
}

#include <iostream>
using namespace std;
void print(const int i) {
//  i = 40;   assignment of read only value
  int b = i;
  b++;    // Has no effect on i;
  //! int* c = &i;    // invalid conversion from 'const int*' to 'int*'
  int *d = const_cast<int*>(&i);
  (*d)++;
  std::cout << *d << " " << i << std::endl; // Even though i is changed but the actual variable in main isn't affected
}
int main() {
  print(30);
  return 0;  
}

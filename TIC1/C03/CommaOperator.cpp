//: C03: CommaOperator.cpp
#include<iostream>
using namespace std;
#define P(STR) \
  cout << STR << endl;
int main() {
  int a = 0, b = 1, c = 2, d = 3, e = 4;
  a = (b++,c++,d++,e++);
  P(a);
  a = b++,c++,d++,e++;
  P(a);
  return 0;  
}

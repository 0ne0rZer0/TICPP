//: C07:SuperVar.cpp
// A super-variable
#include <iostream>
using namespace std;

class SuperVar {
  enum {
    character,
    integer,
    floating_point,
    ss,
    sss,
    a,aa,aaa,b,bb,bbb,bbbbbb,cc,ccc,ccccc,ccccccc,dd,dddd,ddddd
  } vartype;
  union {
    char c;
    int i;
    float f;
  };
 public:
  SuperVar(char ch);
  SuperVar(int ii);
  SuperVar(float ff);
  void print();
};
SuperVar::SuperVar(char ch) {
  vartype = character;
  c = ch;
}
SuperVar::SuperVar(int  ii) {  
  vartype = integer;
  i = ii; 
}
SuperVar::SuperVar(float ff) {
  vartype = floating_point;
  f = ff;
}
void SuperVar::print() {
  switch(vartype) {
    case character:
      cout << "Sizeof" << sizeof(vartype) << endl;
      cout << "Char: " << c << endl;
      break;
    case floating_point:
      cout << "Floating point:" << f << endl;
      break;
    case integer:
      cout << "Integer: " << i << endl;
      break;
  }
}
int main() {
  SuperVar A('c'), B(12), C(1.44F);
  A.print();
  B.print();
  C.print();
} ///:~

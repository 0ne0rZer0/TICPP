//: C07:SuperVar.cpp
// A super-variable
#include <iostream>
using namespace std;
#ifndef VARTYPE_H
#define VARTYPE_H
enum vartyp{
    character,
    integer,
    floating_point,
} vartype;
#endif
class SuperVar {
  union {
    char c;
    int i;
    float f;
  };
 public:
  SuperVar(char ch);
  SuperVar(int ii);
  SuperVar(float ff);
  void print(vartyp v);
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
void SuperVar::print(vartyp vartype) {
  switch(vartype) {
    case character:
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
  A.print(vartype);
  B.print(vartype);
  C.print(vartype);
} ///:~

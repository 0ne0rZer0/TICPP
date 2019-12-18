// C04: ex04.cpp

#include<iostream>
using std::endl;

struct ticpp{
  int a;
};
void foo(ticpp* sptr , int a) {
  sptr->a = a;
}
void bar(ticpp* sptr) {
  std::cout << "Structure data : " << sptr->a << std::endl;
}
int main() {
  ticpp ss;
  foo(&ss,10);
  bar(&ss);
}


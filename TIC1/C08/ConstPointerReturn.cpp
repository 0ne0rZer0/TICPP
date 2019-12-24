//: C08:ConstPointerReturn.cpp
// Const pointer return arg/return

void t(int *) {}
void u(const int * cip) {
//! *cip = 2; error: assignment to read-only location
  int i = *cip;
//!  int* x = cip; error:invalid conversion from 'const int*' to 'int*'
}
const char* v() { return "result of v()"; }
const int* const w() {  static int i; return &i;  }
int main() {
  int x = 0;
  int* ip = &x;
  const int* cip = &x;
  t(ip);
//!  t(cip); error:invalid conversion from 'const int*' to 'int*'
  u(ip);
  u(cip);
//!  char* cp = v(); error: inalid conversion from `const char*` to `char*`
  const char* ccp = v();
//!  int* ip2 = w();
  const int* const ccip = w();
  const int* cip2 = w();
  int* const cipp = w(); 
//  *w() = 1;
}
//:~

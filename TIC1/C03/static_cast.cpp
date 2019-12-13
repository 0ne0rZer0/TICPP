//: C03: static_cast.cpp
// Well defined conversions including safe and non-safe conversions that are nonetheless well defined.
// These include castless conversions,narrowing conversions,void* conversion,implicit type conversions and static navigation of class hierarchies
#include<iostream>
#define P(I) \
  cout << I << endl;
using namespace std;
void func(int) {}
int main() {
  int i = 0x7fff;     // Max positive value = 32767
  long l;
  float f;
  // (1) Typical Castless conversions:
  l = i;
  f = i;
  // Also works :
  l = static_cast<long> (i);
  f = static_cast<float> (i);

  // (2) Narrowing conversions:
  i = l;  // May lose digits
  i = f;  // May lose info

  // Says, "I know bro", eliminates the warnings:
  i = static_cast<int>(l);
  f = static_cast<int>(f);
  char c = static_cast<char>(i);

  // Forcing a conversion from void*:
  void* vp = &i;
  // Old way produces a dangerous conversion:
  float* fp = (float*) vp;
  // The new way is equally dangerous :
  fp = static_cast<float*>(vp);
  // (4) Implicit type conversions, normally performed by the compiler
  double d = 0.0;
  int x = d; // Automatic type conversion
  x = static_cast<int>(d);  // More explicit
  func(d);
  func(static_cast<int>(d));  // More explicit
  return 0;
} ///:~

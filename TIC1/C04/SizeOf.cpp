//: C04:SizeOf.cpp
// Checking size of various struct
#include<iostream>
struct B {
  void f();  
};
using namespace std;
int main() {
  cout << sizeof(B) << endl;
  return 0;  
}

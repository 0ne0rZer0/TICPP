// C08:ConstReturnValues.cpp
// Const Return Value
// Result cannot be used as an lvalue
#include <iostream>
class X {
  int i;
 public:
  X(int ii = 0);
  void modify();
};
X::X(int ii) {
  std::cout << "Called constructor" << std::endl;
  i = ii;  
}
void X::modify() {  
 i++;
 std::cout << i << std::endl;
}
X f5() {  return X(); }
const X f6() {  return X(); }
void f7(X& x) { x.modify(); }
void f8(X x) { x.modify(); }
int main() {
  f5() = X(1);      // f5 becomes an object of X??? but the value is discared. everytime f5() is called it is a new object
  f5().modify();    // X().modify(); 1
  f5().modify();    // X().modify(); 1
  f8(f5());         // f8(X);
  f8(f6());         // f8(const X); Even though modify is not constant still the function is called from a const object!
  //! f6() = X(1);  passing const X as this discards qualifiers
  //!  f6().modify(); same error
 //! f7(f6()); // cannot bind non const value of 'X&' to 'const X'
 //! f7(f5());  // cannot bind non const value of 'X&' to 'X'
 //! f7(&f5()); 
              // Multiple errors : 1. Taking address of temporary***
              // 2. cannot convert etcetc

}

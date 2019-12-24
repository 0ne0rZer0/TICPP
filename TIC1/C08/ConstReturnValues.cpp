// C08:ConstReturnValues.cpp
// Const Return Value
// Result cannot be used as an lvalue

class X {
  int i;
 public:
  X(int ii = 0);
  void modify();
};
X::X(int ii) {
  i = ii;  
}
void X::modify() {  
 i++;
}
X f5() {  return X(); }
const X f6() {  return X(); }
void f7(X& x) { x.modify(); }
void f8(X x) { x.modify(); }
int main() {
  f5() = X(1);
  f5().modify();
  f8(f5());
  f8(f6());
  //  f6() = X(1);
  //  f6().modify();
  //  f7(f6());
}

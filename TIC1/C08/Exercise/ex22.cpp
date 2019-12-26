// : C08: ConstMember.cpp
class X{
  int i;
 public:
  X(int ii);
  int f() ; // Removing const keyword  
  /* 
    Errors created :
    1.  prototype does not match int X::f() const in class X
    2.  candidate is int X::f();
    3.  passing const X as 'this' argument discards qualifier
  */
  void modify() {
    i++;  
  }
};
X::X(int ii) : i(ii) {}
int X::f() const { // Const Member function (const objects can use only these);

  //! i++;  increment of read-only
  return i; 
}
int main() {
  X x1(10);
  const X x2(20);
  x1.f();
  x2.f();
  x1.modify();
//  x2.modify(); passing `const` as `this` discards qualifiers
}///~

// : C08: ConstMember.cpp
class X{
  int i;
 public:
  X(int ii);
  int f() const;  // Const Member function (const objects can use only these);
  void modify() {
    i++;  
  }
};
X::X(int ii) : i(ii) {}
int X::f() const { 
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

//: C08:ConstTemporary.cpp
// Temporaries are const
class X{};
X f() { return X(); }
void g1(X&) {}
void g2(const X&) {}
int main() {
//! g1(f());  Error because temporaries are always constant and g1 has non const value as parameter
  g2(f());
}

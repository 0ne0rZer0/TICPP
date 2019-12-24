//:C08 : Castaway.cpp
// "Casting away" constness

class Y {
  int i;
 public:
  Y();
  void f() const;
};

Y::Y() {  i = 0;  }

void Y::f() const {
  ((Y*)this)->i++;    // Converting `const this`  pointer to `non const`
  (const_cast<Y*>(this))->i++;
}

int main() {
  const Y yy;     // Supposed to be bitwise const and perfectily const and use const members only but we have changed the function f() to become logical const
  yy.f();   // Actually changes it!
}
//:~

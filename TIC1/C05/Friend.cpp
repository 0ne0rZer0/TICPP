//: C05:Friend.cpp
// Friend has special access to private members (and even protected)

struct X;
struct Y {
  void f(X*);
};
struct X {
 private:
  int i;
 public:
  void initialize();
  friend void Y::f(X*);
  friend void g(X*,int);
  friend struct z;
  friend void h();
};
void X::initialize() {
  i = 0;
}
void g(X* x,int v) {
  x->i = v;
}
void Y::f(X* x) {  
  x->i = 47;
}
struct z {
 private:
  int j;
 public:
  void initialize();
  void g(X* x);
};
void z::initialize() {
  j = 99;  
}
void z::g(X* x) {
  x->i += j;
}
void h() {
  X x;
  x.i = 100;
}
int main() {
 X x;
 z zz;
 zz.g(&x);
}

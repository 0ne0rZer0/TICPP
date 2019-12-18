// C05:Class.cpp
// Similarity of struct and class

struct A {
 private:
  int i,j,k;
 public: 
  int f();
  void g();
};

int A::f() {
  return i+j+k;
}
void A::g() {
  i = j = k = 0;
}
// Class which is exactly like struct
class B {
  int i, j, k;
 public:
  int f();
  void g();
};
int B::f() {  
  return i+j+k;  
}
void B::g() { 
  i = j = k = 0;  
}
int main() {
  A a;
  B b;
  a.g();
  a.f();
  b.g();
  b.f();
}

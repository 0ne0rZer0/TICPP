//: C05:Private.cpp
// Setting the boundary
struct B { 
 private:
  char j;
  float f;
 public:
  int i;
  void func();
};
void B::func() {
  i = 0;
  j = 'c';
  f = 0.0;
}
int main() {
  B b;
  b.i = 1;
//!  b.j = 'd';     Private within context
//!  b.f = 2.3;
}

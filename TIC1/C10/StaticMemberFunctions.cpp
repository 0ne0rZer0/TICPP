//:C10: StaticMemberFunctions.cpp
class X {
  int i;
  static int j;
 public:
  X(int ii = 0) : i(ii) {
    j = i;  // Non static functions can access static member function or data;  
  }
  int val() const { return i; }
  static int incr() { 
    //i++ invalid use of "X::i" in static member functions 
    return ++j;
  }
  static int f() {
    //  val(); cannot call member function "int X::val() const" without object
    return incr();
  }
};

int X::j = 0;
int main() {
  X x;
  X* xp = &x;
  x.f();
  xp->f();
  X::f();
//  X->f();
}

//:C10:SimpleStaticMemberFunction.cpp
class X {
  static int sx;
  int x;
  public:
    static void f() {
      sx++; 
//!      x++; error: invalid use of member "X::x" in static member function

    };
};
int X::sx = 10;
int main() {
  X::f();  
}

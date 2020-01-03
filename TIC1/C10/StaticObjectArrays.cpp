//:C10:StaticObjectArrays.cpp
// Static arrays of class objects
class X {
  int i;
 public:
  X(int i):i(i) {}
};
class Stat {
  // Initialization of user defined objects isnt allowed using inline definition
  // Expected identifier before numeric constant with x(100);
  //! static const X x(100);
  
  // _____________________________________

  /* error: in-class initialization of static data member ‘const X Stat::x’ of non-literal type  for sc X x = 100;
     error: call to non-constexpr function ‘X::X(int)’ for 100 in the above statement
  */
  //! static const X x = 100;
    
    static X x2;
    static X xTable2[];
    static const X x3;
    static const X xTable3[];
};
X Stat::x2(100);
X Stat::xTable2[] = {
  X(1),X(2),X(3),X(4)
};
const X Stat::x3(100);
const X Stat::xTable3[] = {
  X(1),X(2),X(3),X(4)  
};
int main() {
 Stat v; 
}

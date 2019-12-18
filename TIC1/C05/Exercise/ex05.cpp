#include <iostream>
using namespace std;

class X;
class Z {
  public:
    void method(X& x);
};
class Z;
class X { 
 private:
  int i = 0;
 public:
  friend class Y;
  friend void Z::method(X& x);
  void display() {
    cout << i << endl;  
  }
};
class Y {
 public:
  void method(X& x) {
    x.i = 100  ;
  }
};
void Z::method(X& x) {  
  x.i = 200;
}
int main() {  
  X x;
  Y y;
  Z z;
  x.display();
  y.method(x);
  z.method(x);
}

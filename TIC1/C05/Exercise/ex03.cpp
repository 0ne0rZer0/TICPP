#include <iostream>
using namespace std;
class X{
  int i;
 public:
  friend void glob(X& y);                               // Both function declration and friend function declration
  void display() {
    std::cout << i << endl;  
  }
};
void glob(X& y) {
  X x;
  x.i = 999;
  y.i = 2;
}
int main() {
  X x;
  glob(x);
  x.display();
}

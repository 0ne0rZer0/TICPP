#include <iostream>
using namespace std;
int main() {
  auto x = 4;
  auto y = 3.37;
  auto ptr = &x;
  // i for integer d for double Pi for pointer to integer
  cout << typeid(x).name() << endl;
  cout << typeid(y).name() << endl;
  cout << typeid(ptr).name() << endl;
}

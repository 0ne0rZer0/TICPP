#include <iostream>
class X {
 public:
  enum{
    size = 100 
  };
  const int x[size];
  X();
};
X::X():x{1,2,3} {  
  std::cout << x[0] << x[1] << x[2] << std::endl;
}

int main() {
  X x;
  return 0;  
}

#include <iostream>
using std::endl;
class Bird {
  int i;
 public:
  Bird():i(10) {}
  void fly() {
    i++;
    std::cout << "Flyin' Highin'" << std::endl;
    std::cout << i << std::endl;
  }
};
class Rock {
};
int main() {
  Rock r;
  void* s = &r;      
  Bird* b = (Bird*)s;  // Need to use a cast otherwise invalid conversion from void* to bird*  
  b->fly(); // MEMBERS ARE GARBAGE SO UB
}

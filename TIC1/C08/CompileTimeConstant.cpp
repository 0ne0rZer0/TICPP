// Only int and enum static const are allowed to be initialized inside class directly
// Float and double need constexpr  
#include<iostream>
using namespace std;
class X {

//Initializing directly
 public:

//New memory for each object
  const int i = 0;

// Common across all objects 
  static const int j;

// constexpr required 
  static constexpr float k = 2.3;
  
// Forbids initialization of non const
//  static int k = 4;

// Must be defined during declaration
//  X():j(2) {}

  void print() {  
    std::cout << &i << std::endl;

// Compile time constants don't have addresses;
//    std::cout << &j << std::endl;
  }
};
int main() {
  X x; 
  X y;
  x.print();
  y.print();
}

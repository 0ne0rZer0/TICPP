// C03:ex06.cpp 

#include <iostream>
using namespace std;
#define P(E) \
  cout << #E << " address is: " << (long)&E << endl;

int dog,fish;
char cat;
float gecko;
double snake;

void f(int pet) {
  cout << "pet number no: " << pet << endl;
}

int main() {
  P(dog);   
  P(fish);
  P(cat);
  P(gecko);
  P(snake);
  P(f);
  return 0;
}

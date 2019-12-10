///: C02: CallHello.cpp
// To call other programs
#include <cstdlib>
#include <iostream>
using namespace std;
int main() {
  if(system(NULL)) {
    cout << " Ssup? ";
  } else {
    cout << " Bitch ";
  }
//  system("pause");
//  system("./Hello");
  return 0;  
}
///:~

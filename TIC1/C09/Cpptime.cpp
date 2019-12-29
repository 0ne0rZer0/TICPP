//: C09: Cpptime.cpp
// Testing a simple time class
#include "Cpptime.h"
#include <iostream>
using namespace std;

int main() {
  Time start;
  for(int i = 1; i < 1000000000; i++) {
//    cout << i << ' ';
//  if(i%10 == 0) cout << endl;
  }
  Time end;
  cout << endl;
  cout << "Start = " << start.ascii();
  cout << "End = " << end.ascii();
  cout << "Delta = " << end.delta(&start);

}

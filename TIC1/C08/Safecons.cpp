// C08:Safecons.cpp
// Using cons for safety
#include <iostream>
using namespace std;

const int i = 100; // Typical constant
const int j = i + 10;       // Value from const expr
long address = (long)&j;    //Forces storage
char buf[j + 10];           //Also const expression

int main() {
  cout << "Type a character & CR: ";
  const char c = cin.get();
  const char c2 = c + 'a';
  cout << c2;
  ///...
}
///:~

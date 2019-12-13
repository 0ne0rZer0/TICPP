//: C03-Mathops.cpp
// Mathematical operations
#include<iostream>
using namespace std;

// A macro to display a string and a value
#define PRINT(STR, VAR) \
  cout << STR " = " << VAR << endl

int main() {
  int i, j, k;
  float u, v, w;  //Applies to doubles, too
  cout << "Enter an integer = ";
  cin >> j;
  cout << "Enter another integer = ";
  cin >> k;
  PRINT("j",j); PRINT("k",k);
  i = j + k;
  
}

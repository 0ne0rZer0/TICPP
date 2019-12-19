// C06: ex08.cpp
// Using Stack implementation for String
#include <iostream>
#include "Stack.h"
#include <fstream>
using namespace std;

int main() {
  Stack strStack;
  ifstream in("Stack.h");
  string* lineptr;
  string line;
  string *s;
//  line = new string("Sl");
//  strStack.push(line);
  while(getline(in,line)) {
    lineptr = new string(line);
    strStack.push((lineptr));
  }
  while((s = strStack.pop()) != 0)
      std::cout << *s << endl;
}

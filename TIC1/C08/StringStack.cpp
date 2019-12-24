// C08:StringStack.cpp
// Using a static const to create a compiler time constand inside a class
#include <string>
#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

class StringStack {
  static const int size = 100;
  const string* stack[size];
  int index;
 public:
  StringStack();
  void push(const string* s);
  const string* pop();
};
StringStack::StringStack() {
 index = 0;
 memset(stack, 0, size * sizeof(string*));  
}
void StringStack::push(const string* s) {
  if(index < size)
    stack[index++] = s;
}
const string* StringStack::pop() {
  if(index > 0) {
    std::cout << index << std::endl;
    const string* rv = stack[--index];
    stack[index] = 0;
    return rv;
  }
  std::cout << "Sad" << endl;
  return 0;
}
string iceCream[] = {
  "praline & cream",
  "fudge ripple",
  "jamocha almond fudge",
  "wikd mountain blackberry",
  "raspberry sorbet",
  "lemon swirl",
  "rocky road",
  "deep chocolate fudge"
};
const int iCsz = sizeof (iceCream) / sizeof( *iceCream );

int main() {
  StringStack ss;
  std::cout << iCsz << std::endl;
  for(int i = 0; i < iCsz; i++)
    ss.push(&iceCream[i]);
  const string* cp;
  while((cp = ss.pop()) != 0) {
    cout << *cp << endl;
  }
} //:~

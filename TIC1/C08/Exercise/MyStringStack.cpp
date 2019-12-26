// C08:StringStack.cpp
// Using a static const to create a compiler time constand inside a class
#include <string>
#include <bits/stdc++.h> 
#include <iostream>
#include "ex20.cpp"
using namespace std;

class StringStack {
  static const int size = 100;
  const MyString* stack[size];
  int index;
 public:
  StringStack();
  void push(const MyString* s);
  const MyString* pop();
};
StringStack::StringStack() {
 index = 0;
 memset(stack, 0, size * sizeof(MyString*));  
}
void StringStack::push(const MyString* s) {
  if(index < size)
    stack[index++] = s;
}
const MyString* StringStack::pop() {
  if(index > 0) {
    std::cout << index << std::endl;
    const MyString* rv = stack[--index];
    stack[index] = 0;
    return rv;
  }
  std::cout << "Sad" << endl;
  return 0;
}
int main() {
  StringStack ss;
  ifstream in("ex20.cpp");
  MyString *s = NULL;
  string strv;
  while(getline(in,strv)) {  
    s = new MyString(strv);
    ss.push(s);
  }
  const MyString* cp;
  while((cp = ss.pop()) != 0) {
    cp->print();
  }
} //:~

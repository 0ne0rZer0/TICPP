//: C07:MemTest.cpp
// Testing the mem class
#include "Mem.h"
#include <iostream>
#include <cstring>
using namespace std;

class MyString {
  Mem* buf;
 public:
  MyString();
  MyString(char* str);
  ~MyString();
  void concat(char* str);
  void print(ostream& os);
};

MyString::MyString() {  buf = 0; }

MyString::MyString(char* str) { 
  buf = new Mem(strlen(str) + 1); 
  strcpy((char*) buf->pointer() ,str);
}

void MyString::concat(char* str) {
  if(!buf) buf = new Mem;
  strcat((char*)buf->pointer(buf->msize() + strlen(str) + 1),str);
}

void MyString::print(ostream &os) {
  if(!buf) return;
  os << buf -> pointer() << endl;
}
MyString::~MyString() { delete buf; }

int main() {
  MyString s("My string string");
  s.print(cout);
  s.concat(" addddddddddddd");
  s.print(cout);
  MyString s2;
  s2.concat(" default");
  s2.print(cout);
} ///:~

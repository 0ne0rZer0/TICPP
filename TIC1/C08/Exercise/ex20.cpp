#include <iostream>
#include <string>
using std::string;
class MyString {
 public:
  string valString;
  MyString(string s);
  void print()  const; 
};
MyString::MyString(string s):valString(s) {}
void MyString::print() const {
  std::cout << valString <<  std::endl;  
}

//:~ C02: StringManip.cpp
// String manipulations are overcomed in std:string from char array
#include<iostream>
#include<string>
using std::cout;
using std::endl;
using std::string;
int main() {
  string s1, s2;
  string s3 = " Flexicution ";
  string s4(" I'm like oh god, oh, oh my god! ");
  s2 = "Today";
  s1 = s3 + ": " + s4;
  cout << s1 << endl;
  cout << s2 << endl;
  cout << s3 << endl;
  cout << s4 << endl;
  return 0;  
}

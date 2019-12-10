//: C02: CharManip.cpp
// Manipulating Char arrays so that to check if they work as the same as std::string
#include <iostream>
int main() {
  char s1[52] = "s";
  s1 = "sssssssssssssssssssssssssssssssssssssssssssssssssss";
  std::cout << s1;
  return 0;  
}

/*
  CharManip.cpp: In function ‘int main()’:
CharManip.cpp:6:8: error: invalid array assignment
   s1 = "sssssssssssssssssssssssssssssssssssssssssssssssssss";

*/
///:~

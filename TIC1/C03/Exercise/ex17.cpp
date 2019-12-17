// C03: ex17.cpp 
// Union and it's variations
#include<iostream>
#include<string>
using namespace std;
union myUnion { 
  int a;
  int b;
  bool c;
  char s;
  //string s;                                     
  //as string is a different type which has constructors of its own the compiler needs to know which type of string constructors to call so constructor and equivalent deconstructor is compulsory
  //myUnion() {} 
  //~myUnion() {}
};
int main() {
  // std::cout << sizeof(bool) << endl; 1
  // std::cout << sizeof(string) << endl; 32
  myUnion c;
  for(int i = 0; i <256 ; i++) { 
    c.a = i;
  //std::cout << c.a << endl;
  //std::cout << c.b << endl;
  //std::cout << c.c << endl;
  std::cout << i << ":" <<c.s << endl;
  }
}
/* 
size with int bool char string in the union : 32
           4   1     1    32
*/

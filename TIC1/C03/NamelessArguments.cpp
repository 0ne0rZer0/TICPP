//: C03: NamelessArguments.cpp
// Checking if an argument can have no identifier in an function definition
#include<iostream>
void fun(float,int,char) {
  std::cout << " Fun was called and it said you cannot use the arguments " << std::endl;
}
void funwithwarnings(float a,int b,char c) {
  std::cout << "Did we not use a?" << std::endl;
}
int main() {
  fun(11.1,11,'a');
  funwithwarnings(111.1f,11,'s');
  return 0;  
}
///:~ 

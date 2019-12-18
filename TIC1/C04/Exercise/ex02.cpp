// C04:ex02.cpp
// struct declaration one function, write definition and create object and call
#include <iostream>
using std::endl;
struct myStruct {
  void foo(int a);  
};
void myStruct::foo(int a) {
 std::cout << "foo was called" << endl;
 std::cout << "foo foo foo" << a; 
}
int main() {
  myStruct var;
  var.foo(10);
}

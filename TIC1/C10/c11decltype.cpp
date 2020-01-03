#include <iostream>
using namespace std;
int fun1() {  return 10;  }
char fun2() { return '0'; }
int main() {
  decltype(fun1()) x; //Declare type of fun1 as x
  decltype(fun2()) y; //Declare type of fun2 as y
  cout << typeid(x).name() << endl;   //  ( x is of i type)
  cout << typeid(y).name() << endl;   // ( y is of c type)
}

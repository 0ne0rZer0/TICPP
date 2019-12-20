#include<iostream>
/*void foo() {  
}
void foo(int i) {  
}
void foo(int i,int j) {  
}
void foo(int i,int j,int k) {
}*/
void foo(int i = 0,int j = 0, int k = 0) {}
int main() {
  foo();
  foo(1);
  foo(1,2);
  foo(1,2,3);
}

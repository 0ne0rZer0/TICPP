#include "ex01.h"
#include <iostream>

void fun1(int a,char b,float c) { 
  using namespace std;
  cout << "fun1 " << a << b << c << endl;
}
int fun2(char b) {
  using namespace std;
  cout << "fun2 " << b << endl;
}
char fun3(float c ) {
  using namespace std;
  cout << "fun3 " << c << endl;
}
float fun4() {
  using namespace std;
  cout << "fun4 " << endl;
}

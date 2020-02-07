/*
Create two identical functions, f1( ) and f2( ). Inline f1( ) and leave f2( ) as an non-inline function. Use the Standard C Library function clock( ) that is found in <ctime> to mark the starting point and ending points and compare the two functions to see which one is faster. You may need to make repeated calls to the functions inside your timing loop in order to get useful numbers.
*/
#include <ctime>
#include <iostream>
using std::cout;
using std::endl;
inline void f1() {
  for(int i = 0; i < 10000; i++) { int x;}  
}
void f2() {
  for(int i = 0; i < 10000; i++) { int x;}  
}
int main() {
  clock_t time1;
  time1 = clock();
  for(int i =0 ;i < 200000; i++) {
    f1();
  }
  time1 = clock() - time1;
  cout << "f1() takes time: " << (float)time1/CLOCKS_PER_SEC << endl;
  time1 = clock();
  for(int i =0 ;i < 200000; i++) {
    f2();
  }
  time1 = clock() - time1;
  cout << "f2() takes time: " << (float)time1/CLOCKS_PER_SEC << endl;
  return 0;
}
/*
f1() takes time: 3.33172
f2() takes time: 3.35445
*/

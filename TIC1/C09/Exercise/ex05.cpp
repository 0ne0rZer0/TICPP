/* Experiment with the size and complexity of the code inside the functions in Exercise 4 to see if you can find a break-even point where the inline function and the non-inline function take the same amount of time. If you have them available, try this with different compilers and note the differences.
Prove that inline functions default to internal linkage. */
#include <ctime>
#include <iostream>
using std::cout;
using std::endl;
inline void f1() {
  for(int i = 0; i < 50; i++) { int x;}  
}
void f2() {
  for(int i = 0; i < 50; i++) { int x;}  
}
int main() {
  clock_t time1;
  time1 = clock();
  for(int i =0 ;i < 50; i++) {
    f1();
  }
  time1 = clock() - time1;
  cout << "f1() takes time: " << (float)time1/CLOCKS_PER_SEC << endl;
  time1 = clock();
  for(int i =0 ;i < 50; i++) {
    f2();
  }
  time1 = clock() - time1;
  cout << "f2() takes time: " << (float)time1/CLOCKS_PER_SEC << endl;
  return 0;
}

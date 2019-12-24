// C08:ConstInitialization.cpp
//  Initializiing const in classes
#include <iostream>
using namespace std;
class Fred {
  const int size;
 public:
  Fred(int sz);
  void print();
};
//  Fred::Fred(int sz) : size(sz) {}
Fred::Fred(int sz) {
  size = sz;  
}
void Fred::print() {  cout << size << endl; }
int main() {
  Fred a(1),b(2),c(3);
  a.print();b.print();c.print();
}
/* 
ConstInitialization.cpp:12:1: error: uninitialized const member in ‘const int’ [-fpermissive]
 Fred::Fred(int sz) {
 ^~~~
ConstInitialization.cpp:6:13: note: ‘const int Fred::size’ should be initialized
   const int size;
             ^~~~
ConstInitialization.cpp:13:10: error: assignment of read-only member ‘Fred::size’
   size = sz;
*/

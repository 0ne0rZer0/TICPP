//: C08: 
/* 
Create a character array literal with a pointer that points to the beginning of the array. 
Now use the pointer to modify elements in the array. Does your compiler report this as an error? Should it? If it doesn’t, why do you think that is?
*/
#include <iostream>
using namespace std;
int main() {
  char s[] = "sssss";
  char *d = "sssaa";      // CANNOT MODIFY ANY STRING LITERAL THAT IS CREATED DIRECTLY FROM POINTER IT IS UNDEFINED and A BAD IDEA
  char* sptr = s;
  *(sptr + 4) = 'a';
  //(*(d)+2) = 'z';       THE ABOVe RULE EXaMPLE gives SEGFAULT
  cout << s;
  return 0;  
}

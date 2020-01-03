#include "../require.h"
#include <iostream>
using namespace std;
char oneChar(const char* charArray = 0) {
  static const char* s;
 cout << charArray; //WHY WRITING THIS ELIMINaTES THE S 
  if(charArray) {
    s = charArray;
//    cout << charArray;
    return *s;
  } else {
    require(s, "unintialized s");  
  }
  if(*s == '\0')
    return 0;
  return *s++;
}
char *a = "abcdefghijklmnopqrstuvwxyz";
int main() {
  oneChar(a);
  char c;
  cout << endl << endl;;
  while((c = oneChar()) != 0)
    cout << c << endl;
}

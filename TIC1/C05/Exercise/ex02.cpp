#include <iostream>
#include <string>
using std::endl;
using std::string;
struct Lib {
  string a,b,c;
  // string s[3];
};
int main() {
  Lib x;
  x.a = "s";
  x.b = "a";
  x.c = "m";
  std::cout << x.a << endl;
  std::cout << x.b << endl;
  std::cout << x.c << endl;

  return 0;
}
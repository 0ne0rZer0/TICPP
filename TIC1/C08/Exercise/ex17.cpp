#include <iostream>
using std::endl;
void t(int&) {}
void u(const int& cip) {
    int i = cip;
    i++;
}
const int& w() {
  static int i;
  const int& ir = i;
  return ir;
}
int main() {
  int x = 0;
  int &ip = x;
  const int& cip = x;
  t(ip);
  u(ip);
  u(cip);
  const int& cip2 = w();
  return 0;
}

#include <iostream>
using namespace std;
void print(const float& f) {
//  f++; increment of read only *reference* 'f'
  std::cout << f << endl;
  float& s = const_cast<float&>(f);
  s++;
  std::cout << s << endl;
}
void print2(float& f) {
  const float& s = f;
  cout << s << endl;
  f++;
//  s++; increment of read only reference 's'
  cout << s << endl;
}
int main() {
  float a = 1.22f;  
  cout << "Before function " << a << endl;
  print(a);
  cout << "After function " << a << endl;

  float a2 = 2.11f;  
  cout << "Before function " << a2 << endl;
  print2(a2);
  cout << "After function " << a2 << endl;
   
  return 0;  
}

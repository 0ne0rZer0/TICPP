//: C02:IOStream.cpp
// Stream features
#include <iostream>
using std::cout;
using std::endl;
using std::dec;
using std::oct;
using std::hex;

int main() {
  // Specifying formats within manipulators
  cout << "a number in decimal " << dec << 15 << endl;
  cout << " a number in octal " << oct << 15 << endl;
  cout << " in hex " << hex << 15 << endl;
  cout << " a floating point number " << 3.1029f << endl;
  cout << " non-printing char(escape): " << char(27) << endl;
  cout << " non-printing char(escape): " << char(28) << endl;
  cout << " non-printing char(escape): " << char(37) << endl;
  cout << " non-printing char(escape): " << char(47) << endl;
  cout << " non-printing char(escape): " << char(57) << endl;

  return 0;  
}

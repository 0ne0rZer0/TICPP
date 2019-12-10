//: C02: FileOUT.cpp
// Using ifstream and ofstream to access files
#include <fstream>
#include <string>
using namespace std;
int main() {
  ifstream in("FileIN.cpp");
  ofstream out("FileOUT.cpp");
  string s;
  while(getline(in,s)) {
    out << s << "\n";  
  }
  return 0;  
} ///:~

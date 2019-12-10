//: C02:FileString.cpp
// Read entire file into a string
#include<string>
#include<fstream>
#include<iostream>
using namespace std;
int main() {
  string filedata;
  string line;
  ifstream in("FileIN.cpp");
  while(getline(in, line)) {
    filedata += line + '\n';
  }
  std::cout << filedata;;
  return 0;  
}

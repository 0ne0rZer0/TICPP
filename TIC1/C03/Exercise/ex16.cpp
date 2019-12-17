//: C03:ex16.cpp : Enumeration example
#include <iostream>
using namespace std;
enum Colors {
  Red,Blue,Green,Black,Brown,White
};
int main() {
  for(int i = Red; i <= White; i++) {
    Colors s = static_cast<Colors>(i);
    std::cout << s << endl;
  }
}

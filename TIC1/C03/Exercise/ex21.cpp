// C03: ex21.cpp
// Array of string objects and their addresses
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
  ifstream in("ex21.cpp");
  string str[100];
  int i = 0;
  while(getline(in,str[i])) {
    i++; 
  }
  for(int j = 0; j < i; j++) {
    std::cout << str[j] << endl;  
  }
}

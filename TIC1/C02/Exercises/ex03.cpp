//: C02:WhitepaceCount.cpp
// Excercise 3: Count the whitespace-seperated words in a file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
  int count = 0;
  string word;
  ifstream in("Mytext.txt");
  while(in >> word) {
    count++;
  }
  cout << count;
  return 0;  
}

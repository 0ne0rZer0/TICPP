//: C02:WhitepaceCount.cpp
// Excercise 3: Count the whitespace in a file
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
int main() {
  int count = 0;
  vector<string> v;
  ifstream in("Mytext.txt");
  string word;
  while(in >> word) {
    v.push_back(word);  
  }
  cout << v.size()-1;
  return 0;  
}

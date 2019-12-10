//: C02:ex06.cpp
// Concating words into a string
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
int main() {
  vector<string> v;
  ifstream in("Mytext.txt");
  string word,s;
  while(in >> word) {
    v.push_back(word);
  }
  for(int i = v.size() - 1; i >= 0; i--) {
    s += v[i] + " ";  
  }
  std::cout << s;
  return 0;  
}

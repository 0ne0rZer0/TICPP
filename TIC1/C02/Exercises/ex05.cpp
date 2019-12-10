//: C02:ex05.cpp
// Last to first traversing words in a file
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
int main() {
  vector<string> v;
  ifstream in("Mytext.txt");
  string word;
  while(in >> word) {
    v.push_back(word);
  }
  for(int i = v.size() - 1; i >= 0; i--) {
    cout << v[i] << " ";  
  } 
  return 0;  
}

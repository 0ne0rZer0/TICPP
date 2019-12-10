//: C02:GetWords.cpp
// Break file into whitespace seperated words
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
int main() {
  vector<string> words;
  ifstream in("GetWords.cpp");
  string word;
  while (in >> word) {
    words.push_back(word);
  }
  for(int i = 0;i < words.size() ; i++) {
    cout << words[i] << endl;
  }
  return 0;
} ///:~

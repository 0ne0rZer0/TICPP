//: C02: ex04.cpp
// Counts the occurence of a specific word in a file
#include<fstream>
#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::string;
using std::ifstream;
int main() {
  int count = 0;
  ifstream in("Mytext.txt");
  string inputWord;
  string fileWord;
  cout << "Enter the word";
  cin >> inputWord;
  while(in >> fileWord) {
    if(inputWord == fileWord) {
      count++;
    }
  } 
  cout << "Occurence of " << inputWord << " is: " << count;
  return 0;  
}

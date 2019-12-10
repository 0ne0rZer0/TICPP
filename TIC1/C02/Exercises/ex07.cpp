//: C02:ex07.cpp
// Printing line by line awaiting users input
#include<iostream>
#include<vector>
#include<fstream>
#include<string>
using namespace std;
int main() {
  string line;
  ifstream in("Mytext.txt");
  while(getline(in,line)) {
    cout << line;
    cout << endl << "Press ENTER to continue...";
    cin.get();
  }
  cout << "File Exited";
  return 0;  
}


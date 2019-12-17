// C03: ex07.cpp
// Two functions - one takes string* and one takes string& 
#include <iostream>
#include <string>
using namespace std;

void stringManipulate1(string* line) { 
  cout << "Append : " << (*line).append(" Nagdev") << endl;
  cout << "Substring : " << (*line).substr(3) << endl;
}

void stringManipulate2(string &line) {  
  cout << line << endl;
  cout << "Replace " << line.replace(2,7, "sssss") << endl;
}

int main() {
  string argument;
  cout << "Enter a string to manipulated: " << endl;
  cin >> argument;
  stringManipulate1(&argument);
  stringManipulate2(argument);
  return 0; 
} ///:~

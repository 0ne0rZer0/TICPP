/*
Write a program that takes a string as the command-line argument. 
Write a for loop that removes one character from the string with each pass, and use the DEBUG( ) macro from this chapter to print the string each time. */

#include <iostream>
#define DEBUG(x) std::cout << #x << " = " << x << std::endl;
int main(int argc, char* argv[]) {
  std::string string = argv[1];
  size_t sz = string.size();
  for(int i = 0; i < sz; i++) {
    string = string.erase(sz - i,1);
    DEBUG(string);
  }
}

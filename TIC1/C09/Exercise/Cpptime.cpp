//: C09: Cpptime.cpp
// Testing a simple time class
#include "Cpptime.h"
#include <iostream>
using namespace std;

int main() {
  Time start;
  std::cout << "Press ENTER to stop the timer..." << std::endl;
  char ch;
  while(ch != '\n') { std::cin.get(ch);} 
  Time end;
  std::cout << "....Timer stopped...." << std::endl;
  cout << endl;
  cout << "Start = " << start.ascii();
  cout << "End = " << end.ascii();
  cout << "Delta = " << end.delta(&start);

}

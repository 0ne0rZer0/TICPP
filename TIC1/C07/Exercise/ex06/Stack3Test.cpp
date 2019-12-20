//: C06:Stack3Test.cpp
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt
//{L} Stack3
//{T} Stack3Test.cpp
// Constructors/destructors
#include "Stack3.h"
#include "../../../require.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
  int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  Stack intStack((void*)&arr,10);
  int* s;
  while((s = (int*)intStack.pop()) != 0) {
    //intStack.pop();
    //intStack.pop();
    //intStack.pop();
    cout << *s << endl;
    //delete s; 
  } 
} ///:~

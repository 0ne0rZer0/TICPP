// : C09 : Stack4Test.cpp
// {T} Stack4Test.cpp
#include <iostream>
#include "../require.h"
#include <string>
#include "Stack4.h"
#include <fstream>

using namespace std;

int main(int argc, char* argv[]) {
  requireArgs(argc, 1);
  ifstream in(argv[1]);
  assure(in, argv[1]);
  Stack textLines;
  string line;
  while(getline(in, line))
    textLines.push(new string(line));
  string *s;
  while((s=(string*)textLines.pop()) != 0) {
    cout << *s << endl;
    delete s;
  }
  return 0;
}

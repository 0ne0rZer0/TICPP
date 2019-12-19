//: C06:Stash2test.cpp
// {L} Stash2
// Constructors and destructors
#include "Stash2.h"
#include "../require.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  Stash intStash(sizeof(int));
  for(int i = 0; i < 100; i++)
    intStash.add(&i);
  for(int j = 0; j < intStash.count(); j++)
    cout << "intStash.fetch(" << j << ") = "
        << *(int*)(intStash.fetch(j)) << endl;
  const int buffersize = 80;
  Stash stringStash(sizeof(buffersize) * sizeof(char));
  ifstream in("Stash2test.cpp");
  string line;
  while(getline(in,line))
    stringStash.add((char*)line.c_str());
    int k = 0;
    char *cp;
    while((cp = (char*) stringStash.fetch(k++))!=0)
      cout << cp << endl;
}

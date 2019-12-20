// C07:Stash3Test.cpp
// Stash3
#include "Stash3.h"
#include "../require.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
  Stash intStash(sizeof(int));
  for(int i = 0; i < 100;i++)
    intStash.add(i);
  for(int j = 0; j < intStash.count();i++ )
    cout
}

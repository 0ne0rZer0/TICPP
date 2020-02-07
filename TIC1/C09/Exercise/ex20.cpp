/*
  two command line args : int between 5 to 10, char* filename
*/
#include <iostream>
#include "../../require.h"
using namespace std;
int main(int argc, char* argv[]) {
  requireArgs(argc,2);
  require(5 < atoi(argv[1]) && 10 > atoi(argv[1]));
  ifstream myFile(argv[2]);
  assure(myFile);
}

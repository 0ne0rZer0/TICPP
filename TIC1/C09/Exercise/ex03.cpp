//: C09:MacroSideEffects.cpp
#include "../../require.h"
#include <fstream>
using namespace std;

#define BAND(s) ((x = s)&&((x) > 5 && (x) < 10) ? (x): 0) 

int main() {
  ofstream out("macro.out");
  assure(out,"macro.out");
  for(int i = 4; i < 11; i++) {
    int a = i;
    out << "a = " << a << endl << '\t';
    int x = ++a;
    out << "BAND(++a) = " << BAND(x) << endl;
    out << "\t a = " << a << endl;
  }
}

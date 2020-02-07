//: C05:StaticDestructors.cpp
// Static object destructors
#include <fstream>
using namespace std;

ofstream out("statdest.out"); // Trace file

class Obj {
  char c;
 public:
  Obj(char c):c(c) {
    out << "Obj::Obj() for " << c << endl;
  }
  ~Obj() {
    out << "Obj::~Obj() for " << c << endl;
  }
};

void g() {
  static Obj c('c');  
}

Obj a('a'); //  Global NBSS('or static storage acc to book');

void f() {
  static Obj b('b');  
}
int main() {
  out << "inside main()" << endl;
//  g(); // not called
  f();
  out << "leaving main()" << endl;    
}

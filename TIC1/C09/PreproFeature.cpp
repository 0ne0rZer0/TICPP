#include <iostream>
using namespace std;

// Stringizer example
#define DEBUG(x) cout << #x " = " << x << endl

// Reiterate using s at the end
#define TRACE(s) cerr << #s << endl; s

// Token pasting
#define FIELD(a) char* a##_string; int a##_size;

class Record{
  FIELD(one);  
  FIELD(two);  
  FIELD(three);  
  FIELD(four);  
};
int main() {}

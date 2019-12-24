//:C08 : Quoter.cpp
// Random quote selection
#include <iostream>     
#include <cstdlib>    //Random number generator
#include <ctime>      // to seed random generator
using namespace std;

class Quoter {
  int lastQuote;
 public:
  Quoter();
  int lastquote() const;
  const char* quote();
};

Quoter::Quoter() {
  lastQuote = -1;
  srand(time(0));   //Seed random generator
}
int Quoter::lastquote() const {
  return lastQuote;
}
const char* Quoter::quote() {
  static const char* quotes[] = {
    "Are we having fun yet?",
    "Doctors always know best",
    "Is it..... Atomic?",
    "Siuuuuuuuuuuuuuuu",
    "fear is obsecure",
    "There is no scientfic evidence ",
    "to support the idea",
    "that life is serious",
    "Things that make us happy,make us wise"
  };
  const int qsize = sizeof quotes/ sizeof *quotes;
  int qnum = rand() % qsize;
  while(lastQuote >= 0 && qnum == lastQuote)
    qnum = rand() % qsize;
  return quotes[lastQuote = qnum];
}
int main() {
  Quoter q;
  const Quoter cq;
  cq.lastquote();
  //! cq.quote();
  for(int i = 0; i < 20; i++)
    cout << q.quote() << endl;
}

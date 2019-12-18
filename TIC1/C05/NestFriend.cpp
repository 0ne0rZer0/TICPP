// C05: NestFriend.cpp
// Nested friends
#include <iostream>
#include <cstring>
using namespace std;
const int sz = 20;

struct Holder {
 private:
  int a[sz];
 public:
  void initializer();
  struct Pointer;
  friend struct Pointer;
  struct Pointer {
   private:
    Holder* h;
    int* p;
   public:
    void initializer(Holder* h);
    void next();
    void previous();
    void top();
    void end();
    int read();
    void set(int i);
  };
};
void Holder::initializer() {
  memset(a,0,sz*sizeof(int));
}
void Holder::Pointer::initializer(Holder* rv) {
  h = rv;
  p = rv->a;
}
void Holder::Pointer::next() {
  if(p < &(h->a[sz-1])) p++;
}
void Holder::Pointer::previous() {
  if(p > &(h->a[0])) p--;
}
void Holder::Pointer::top() {
  p = &(h->a[0]);
}
void Holder::Pointer::end() {
  p = &(h->a[sz-1]);  
}
int Holder::Pointer::read() {  
  return *p;
}
void Holder::Pointer::set(int i) {
  *p = i;
}
int main() {
  Holder h;
  Holder::Pointer hp, hp2;
  int i;
  h.initializer();
  hp.initializer(&h);
  hp2.initializer(&h);
  for(int i = 0; i < sz; i++) {
    hp.set(i);
    hp.next();
  }
  hp.top();
  hp2.end();
  for(i = 0; i < sz; i++) {
      cout << "hp = " << hp.read()
            <<", hp2 = " << hp2.read() << endl;
      hp.next();
      hp2.previous();
  }
}



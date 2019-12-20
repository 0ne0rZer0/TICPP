#ifndef STASH_H
#define STASH_H
class Stash {
  int size;
  int quantity;
  int next;
  unsigned char* storage;
  void inflate(int increment);
 public:
  Stash(int size,int initQuantity = 0);
  int add(void* element);
  void* fetch(int index);
  int count();
  ~Stash();
};
#endif

// C06: Stash2.h
// with constructors and destructors
#ifndef STASH_H
#define STASH_H
class Stash { 
  int size;                                   // Each element size
  int quantity;                               // Total spaces of size
  int next;                                   // Next empty space index
  unsigned char* storage;
  void inflate(int increase);
 public:
  Stash(int size);
  ~Stash();
  int add(void* element);
  void* fetch(int index);
  int count();
};
#endif

#ifndef STASH_H
#define STASH_H
struct Stash {
  int size;
  int quantity;
  int next;
  unsigned char* storage;
  void initialize(int size);
  void cleanup();
  void* fetch();
  int count();
  void inflate(int increase);
}
#endif

//: C05.Stash.h
// Converted to use access control
#ifndef STASH_H
#define STASH_H
class Stash {
  int size;                                 // Size of each space
  int quantity;                             // Number of storage space
  int next;                                 // Next empty spaces
  unsigned char* storage;                   // Dynamically alloated array of boxes
  void inflate(int increase);
 public:
  void intialize(int size);
  void cleanup();
  void* fetch(int index);
  int add(void* element);
  int count();
}
#endif // STASH_H ///:~

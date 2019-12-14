// : C04: CLib.h
// Header file for C-Like library
// An array-like entity created at runtime
//#ifndef CLIB_H
//#define CLIB_H
typedef struct CStashTag {
  int size;               // Size of a single element
  int quantity;           // Total element quantity
  int next;               // Next empty space
  // Dynamically allocated array of bytes;
  unsigned char* storage;
} CStash;

void initialize(CStash* s, int size);
void cleanup(CStash* s);
int add(CStash* s, const void* element);
void* fetch(CStash* s, int index);
int count(CStash* s);
void inflate(CStash* s, int increase);
///:~
#endif

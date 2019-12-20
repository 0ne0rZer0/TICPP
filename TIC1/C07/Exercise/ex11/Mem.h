#ifndef MEM_H
#define MEM_H
typedef unsigned char byte;
class Mem {
  byte* mem;
  int size;
  void ensureMinSize(int minSize);
 public:
  Mem();
  Mem(int size);
  ~Mem();
  int msize();
  bool moved();
  byte* pointer();
  byte* pointer(int minSize);
};
#endif

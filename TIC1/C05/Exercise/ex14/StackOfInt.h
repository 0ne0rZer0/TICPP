#ifndef STACKOFINT_H
#define STACKOFINT_H
class StackOfInt {
  struct Link;
 public:
  void initialize();
  void cleanup();
  void push(int x);
  int pop();
  int peek();
};
#endif

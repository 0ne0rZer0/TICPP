//: C04 : Stack.h
// Nested Struct in linked list
#ifndef STACK_H
#define STACK_H
struct Stack {
  struct Link {
    void* data;
    Link* next;
    void initialize(void* dat, Link* nxt);
  }* head;
  void initialize();
  void push(void* data);
  void* peek();
  void* pop();
  void cleanup();
};
#endif  // STACK_H ///:~

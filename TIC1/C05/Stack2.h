// C05:Stack.h
// Nested structures via linked list
#ifndef STACK2_H
#define STACK2_H
class Stack {
  struct Link {
    void* data;
    Link* next;
    void initialize(void* data,Link* next);
  }* head;
 public:
  void initialize();
  void push(void* dat);
  void* peek();
  void* pop();
  void cleanup();
};
#endif

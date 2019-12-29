//: C09: Stack4.h
// With inlines
#ifndef STACK_H
#define STACK_H
#include "../require.h"
class Stack {
  struct Link {
    void* data;
    Link* next;
    Link(void* data,Link* next) : data(data), next(next) { } 
  }*head;
 public:
  Stack(): head(0) {}
  ~Stack() {
    require(head == 0, "Stack not empty");  
  }
  void push(void* dat) {
    head = new Link(dat,head);  
  }
  void* pop() {
    if(head == 0) return 0;
    void* result = head->data;
    Link* oldHead = head;
    head = head->next;
    delete oldHead;
    return result;
  }
  void* peek() const{
    return head ? head->data : 0;
  }
};
#endif // STACK_H


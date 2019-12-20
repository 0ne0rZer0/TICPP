//C03: Stack3.cpp
// Implementation with constructor/ Destructor

#include "../../../require.h"
#include "Stack3.h"
Stack::Link::Link(void* data,Link* next){
  this->data = data;
  this->next = next;
}
Stack::Link::~Link() { }
Stack::Stack() {
  head = 0;
}
Stack::Stack(void* arr,int size) : Stack() {
  int* arrr = (int*) arr;
  for(int i = 0; i < size; i++) {
    push((arrr + i));
  }
}
Stack::~Stack() {
  require(head == 0, "Stack not empty");
}
void Stack::push(void* data) { 
  head = new Link(data,head);
}
void* Stack::pop() { 
  if(head == 0) return 0;
  void* result = head->data;  Link* oldHead = head;
  head = head->next;
  delete oldHead;
  return result;
}
void* Stack::peek() { 
  require(head != 0, "Stack empty");  
  return head->data;
}

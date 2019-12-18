#include "StackOfInt.h"
#include "../../../require.h"
#include <iostream>
using namespace std;
struct StackOfInt::Link {    
    int data;
    Link* next;
    void initialize(int data,Link* next);
}*head;
void StackOfInt::Link::initialize(int data, Link* next) {
  this->data = data;
  this->next = next;
}
void StackOfInt::initialize() {  
  head = 0;
}
void StackOfInt::cleanup() {  
  require(head == 0, "Stack not empty");
} 
void StackOfInt::push(int x) {
  Link* newLink = new Link;
  newLink->initialize(x,head);
  head = newLink;
}
int StackOfInt::pop() {
  if(head == 0) return 0;
  int result = head->data;
  Link* oldHead = head;
  head = head-> next;
  delete oldHead;
  return result;
}
int StackOfInt::peek() {
  if(head != 0)
    return head->data;
}
int main() {
  StackOfInt s1;
  s1.initialize();
  for(int i = 0; i < 10; i++)
    s1.push(i);
  int i = 1;
  cout << "Head is: " << s1.peek() << endl;
  while(i != 0) {
    i = s1.pop();
    cout << "Pop! : " << i << endl;
  }
  s1.cleanup();
  return 0; 
}

#include <iostream>
#include <string>
class Stack {
  struct Link {
    std::string* data;
    Link* next;
    Link(std::string* data, Link* next);
    ~Link();
  }*head;
 public:
  Stack();
  ~Stack();
  void push(std::string* frame);
  std::string* peek();
  std::string* pop();
};
Stack::Link::Link(std::string* data, Link* next) {
  this->data = data;
  this->next = next;
}
Stack::Link::~Link() {
}
Stack::Stack() {
  head = 0;
}
Stack::~Stack() {
  if(head!=0)
    std::cout << "Stack not empty" << std::endl;
}
void Stack::push(std::string* frame) {
   head = new Link(frame,head);
}
std::string* Stack::peek() {
  if(head==0) return 0;
  return (head->data);
}
std::string* Stack::pop() {
  if(head==0) return 0;
  std::string* returnData = (head->data);
  Link* oldHead = head;
  head = head->next;
  delete oldHead;
  return returnData;
}

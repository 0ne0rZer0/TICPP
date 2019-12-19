// C06: Stack.h
// Header file
#ifndef STACK_H
#define STACK_H
#include<string>
class Stack {
 struct Link;
 public:
  Stack();
  ~Stack();
  void push(std::string* frame);
  std::string* peek();
  std::string* pop();
};
#endif

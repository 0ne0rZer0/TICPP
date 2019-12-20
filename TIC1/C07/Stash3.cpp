#include<iostream>
#include "Stash3.h"
const int increment = 100;
/*Stash::Stash(int size) {
  this->size = size;
  quantity = 0;
  next = 0;
  storage = 0;
}*/
Stash::Stash(int size,int initQuantity) {
  this->size = size;
  next = 0;
  inflate(initQuantity);
  storage = 0;
}
int Stash::add(void* element) {
  if( next >= quantity)
    inflate(increment);
  int startBytes = next * size;
  unsigned char* e = (unsigned char*) element;
  for(int i = 0; i <= size; i++)
    storage[startBytes + i] =  e[i];
  next++;
  return (next - 1);
}
void Stash::inflate(int increase) {
  if(increase < 0) { std::cout << "Positive increase only!";return;}
  if(increase == 0) { return; }
  int newQuantity = increase + quantity;
  int newBytes = newQuantity * size;
  int oldBytes = quantity * size;
  unsigned char* b = new unsigned char[newBytes];
  for(int i = 0; i < oldBytes; i++)
    b[i] = storage[i];
  delete []storage;
}
int Stash::count() {
  return next;
}
void* Stash::fetch(int index) {
  if(index <= 0) { std::cout << "Negative index"; return NULL; }
  if(index >= next)
    return 0;
  return &storage[index*size-1];
}
Stash::~Stash() {
  if(storage!=0)
    std::cout << "Freeing storage" << std::endl;
    delete []storage;
}

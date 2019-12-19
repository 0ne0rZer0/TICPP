// : C06:Stash2.cpp
#include "Stash2.h"
#include "../require.h"
#include <iostream>
#include <cassert>
using namespace std;
const int increment = 100;

Stash::Stash(int size) {
  this->size = size;
  this->quantity = 0;
  this->next = 0;
  this->storage = 0;
}

int Stash::count() {
  return next;
}

void* Stash::fetch(int index) {
  if(index <= 0)
    cout << "Index negative"; 
  if(index >= next)
    return 0;
  return &storage[index * size];
}

int Stash::add(void* element) {
  if(next >= quantity)
    inflate(increment);
  int startBytes = size*next;
  unsigned char* e = (unsigned char*) element;
  for(int i = 0; i < size; i++)
    storage[startBytes + i] = e[i];
  next++;
  return (next - 1);
}

void Stash::inflate(int increase) {
  int newQuantity = increase + quantity;
  int newBytes = size * newQuantity;
  int oldBytes = quantity * size;
  unsigned char* b = new unsigned char[newBytes];
  for(int i = 0; i < oldBytes; i++)
    b[i] = storage[i];
  delete [] (storage);
  storage = b;
  quantity = newQuantity;
}

Stash::~Stash() {
  if(storage != 0) {
    cout << "Freeing storage. . . ";
    delete []storage;
  }
}

//: C04:CppLib.cpp
// Declare structure and functions
#include "Stash.h"
#include <iostream>
#include <cassert>
using namespace std;

const int increment = 100;

void Stash::initialize(int sz) {
  size = sz;
  quantity = 0;
  next = 0;
  storage = 0;
}

int Stash:: add(const void* element) {
  if(next >= quantity)
    inflate(increment);
  // Copy element into storage starting at next empty stage
  int startBytes = next * size;
  unsigned char* e = (unsigned char*) element;
  for(int i = 0; i < size; i++)
    storage[startBytes + i] = e[i];
  next++;
  return(next-1); //Index Number
}

void* Stash::fetch(int index) {
    assert(0 <= index);
    if(index >= next)
      return 0;
    return &(storage[index * size]);
}

int Stash::count() {
  return next;  
}

void Stash::inflate(int increase) {
  assert(increase > 0);
  int newQuantity = quantity + increase;
  int newBytes = newQuantity * size;
  int oldBytes = quantity * size;
  unsigned char* b = new unsigned char[newBytes];
  for(int i = 0; i < oldBytes; i++)
    b[i] = storage[i];
  delete []storage;
  storage = b;
  quantity = newQuantity;
}

void Stash::cleanup() {
    if(storage != 0) {
      cout << "Freeing storage..." << endl;
      delete []storage;
    }
}
///:~

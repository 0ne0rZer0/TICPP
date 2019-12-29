#include <iostream>
#include <cassert>
#include "Stash4.h"
using namespace std;

// All other functions are defined in the class as they will be inline automatically and hence have less stack frame calls / basically zero
const int increment = 100;

void Stash::inflate(int increment) {
  assert(increment >= 0);
  if(increment == 0) return;
  int newQuantity = increment + quantity;
  int newBytes = size * newQuantity;
  int oldBytes = size * quantity;
  unsigned char* e = new unsigned char[newBytes];
  for(int i = 0; i < oldBytes; i++ ) {
    e[i] = storage[i];
  }
  delete []storage;
  storage = e;
  quantity = newQuantity;
}

int Stash::add(void* element) {
  if( next >= quantity ) {
    inflate(increment);
  }
  int startBytes = next * size;
  unsigned char* e = (unsigned char*) element;
  for(int i = 0; i < size ; i++) {
    storage[startBytes + i] = e[i];
  }
  next++;
  return (next - 1);
}

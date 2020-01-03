//: C10 : Initializer.h
// Static initilization technique
#ifndef INITIALIZER_H
#define INITIALIZER_H

#include<iostream>
extern int x; // Declarations
extern int y;

class Initializer {
  static int initCount;
 public:
  Initializer() { 
    std::cout << "Initializer()" << std::endl;
    // Initializer first time only
    if(initCount++ == 0) {
      std::cout << "Performing Initializtion" << std::endl;
      x = 100;
      y = 200;
    }
  }
  ~Initializer() {
    std::cout << "~Initializer()" << std::endl;
    // Clean up last time only
    if(--initCount == 0) {
      std::cout << "Performing cleanup" << std::endl;
      // Any necessary cleanup
    }
  }
};
static Initializer init;
#endif

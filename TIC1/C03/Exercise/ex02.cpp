// Copyright C03: ex02.cpp
// Prime numbers using two for loops and % operator
#include <iostream>
#include <cassert>
using std::cout;
using std::cin;
using std::endl;

inline int checkPrime(int n) {
 for(int i = 2; i <= n/2; i++) 
   if(n%i == 0) { return 0; }
 return 1;
}

void printPrime(int maxLim) {
  for(int i = 2; i <= maxLim; i++) 
    if(checkPrime(i))
      cout << i << " is a prime " << endl;
}

int main() {
  int maxLim;
  cout << "Enter the maximum number to display all prime numbers below it : ";
  cin >> maxLim;
  assert(maxLim > 0);
  printPrime(maxLim);
}

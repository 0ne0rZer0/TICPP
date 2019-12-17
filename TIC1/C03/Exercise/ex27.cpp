// C03: ex27.cpp
// Change each value to const->non-const and volatile->non_volatile
#include<iostream>
#include<string>
using namespace std;
inline void printArray(double* arr, int size, string name) {
  std::cout << "Array " << name << endl;
  for(int i = 0; i < size; i++) 
    cout << *(arr+i) << " ";
  cout << endl;
}
int main() {
  const double const_arr[10] = {0};
  volatile double volatile_arr[10];
  double *modifyingptr;
  for(int i = 0; i < 10; i++) {
    modifyingptr = const_cast<double*> (const_arr+i);
    *modifyingptr = 2*i;
    modifyingptr = const_cast<double*> (volatile_arr+i);
    *modifyingptr = 3*i;
  }
  printArray(const_cast<double*>(const_arr),10,"One");
  printArray(const_cast<double*>(volatile_arr),10,"Two");
  return 0;  
}

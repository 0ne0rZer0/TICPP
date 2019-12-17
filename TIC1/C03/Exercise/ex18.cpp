//:C03: ex18.cpp
// Array index play
#include<iostream>
using namespace std;
inline void print(int arr[],int size) {
  for(int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}
int main() {
  int arr[10]= {0};
  int a,v,c,s,d;
  int arr2[10] = {0};
  std::cout << &arr << "\t" << &arr2;
  std::cout << endl << reinterpret_cast<long>(&arr) << endl;
  std::cout << endl << (long)(&arr) << endl;

  for(int i = 0; i < 10; i++)
    arr2[i] = i;
  print(arr2,10);
  for(int i = 0; i < 21; i++)
    arr[i] = i;
  print(arr2,10);
}

#include <iostream>
using namespace std;
  extern const long* j;
  extern const long* i;
int main() {
  long arr[10];
  long arr2[10];
  const long* i = arr;
  i++;i--;
  i = arr2;
  const long* j = i;
  return 0;  
}

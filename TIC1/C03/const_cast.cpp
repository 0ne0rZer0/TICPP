//: C03:const_cast.cpp
// const_cast only takes two conversion otherwise gives an compile time error, i.e const->non_const and volatile->non_volatile
int main() {
  const int i = 0;
  //! int *k = &i;        // not allowed!
  int *j = (int*)&i;      // Deprecated form
  j = const_cast<int*>(&i);
  // Can't do simultaneous additional casting:
  // long *l = const_cast<long*>(&i);   //Error - invalid const_cast from type ‘const int*’ to type ‘long int*’ 
  volatile int k = 0;
  int * u = const_cast<int*>(&k);
  return 0;  

}

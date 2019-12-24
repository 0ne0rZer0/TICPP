//: C08:ConstValue.cpp
// Returning a const value has no value for meaning built-in types

const int f3() {  return 1; }
int f4() { return 1; }
int main() {
  int i = f3();
  int j = f4();
  const int k = f3();
  const int l = f4();
  i++; j++;
}

class X {
  static int x; // = 3; ISO C++ forbids inclass initialization 
};
int X::x = 3;
// X::x = 5; private within this context
int main() {

  return 0;  
}

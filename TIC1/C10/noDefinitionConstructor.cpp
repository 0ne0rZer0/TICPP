class X {
 public:
  X();
  X(const X&);
};
int main() {
//  X x;    linker error undefined reference to X::X();
}

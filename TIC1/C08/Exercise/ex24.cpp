class X {
 public:
  void print();
  int ssss() const;
};
void X::print() {}
int X::ssss() const {}
int main() {
  const X x;
//  x.print(); passing const X as this argument discards qualifier
  x.ssss();
}

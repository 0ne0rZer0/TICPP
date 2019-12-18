class Y;
class X {
 public:
  int i;
  void classY(Y& y);
};
class Y {
 public:
  int i;
  void classX(X& y) {
    y.i = 100;    
  }
};

void X::classY(Y& y) {
  y.i = 2;
}
int main() {
  X x;
  Y y;
  x.classY(y);
  y.classX(x);

}

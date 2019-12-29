#define F(x) (x+1)
// X undeclared if there is a gap between F and (x)
void main() {
  int i;
  F (1);
  F(1);
}

#define F(x) (x+1)
// ! #define F (x) (x+1)          Error : x was not defined in this scope
int main() {
  int i;
  F (1);
  F(1);
  return 0;  
}

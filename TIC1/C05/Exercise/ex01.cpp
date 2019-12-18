class MyClass {
  int i;
 public:
  int j;
 protected:
  int k;
};
int main() {
  MyClass m;
  MyClass *n = new MyClass();
  m.i = 0;                        // Private within context
  n->j = 2;
  n->k = 3;                       // Protected within context
  return 0;
}

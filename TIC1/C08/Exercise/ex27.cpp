/* only member functions can have cv qualifier */
class X {
  volatile int i;
 public:
  X():i(10) {}
  int vprint() volatile;
  int nvprint();
};
int X::vprint() volatile {
  i++;
}
int X::nvprint() {
  i--;
}
int main() {
  volatile X vx;
  X nvx;
  vx.vprint();
// vx.nvprint();  passing 'volatile X' as this argument discards qualifier
  nvx.vprint();
  nvx.nvprint();
  return 0;  
}

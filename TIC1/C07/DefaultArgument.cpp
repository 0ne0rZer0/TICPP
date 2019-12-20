void foo(int x, int y = 0);
/*!! Error: Default argument missing from parameter 2
 void bar(int x = 0,int y);
 void foobar(int x = 0, int y, int z = 0);
!!*/
int main() { 
  return 0;
}

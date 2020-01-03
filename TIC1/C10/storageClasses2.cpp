// register int i = 10; why it is not for file scope? because register is then used throughout the file scope for multiple translation units
int s;
register int i = 10;
int main() {
  return 0;  
}

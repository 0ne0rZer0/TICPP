int printf(const char*, ...);
void main() {
  unsigned int x = 1;
  printf ("%d", (int) (((char *)&x)[0]));
}

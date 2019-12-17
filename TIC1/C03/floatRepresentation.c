#include <stdio.h>
typedef union {
  float f;
  struct {
    unsigned int mantisa : 23;
    unsigned int exponent : 8;
    unsigned int sign : 1;
  } parts;
} float_cast;

int main() {
  float_cast d1 = {.f = 1};
  printf("Sign = %x\n", d1.parts.sign);
  printf("Exponent = %x\n", d1.parts.exponent);
  printf("Manitsa = %x\n", d1.parts.mantisa);
}

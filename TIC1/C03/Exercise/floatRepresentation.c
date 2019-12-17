#include<stdint.h>
//#include "ieeeFloat.h"

/*
** - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
**  Single Precision (float)  --  Standard IEEE 754 Floating-point Specification
*/

# define IEEE_754_FLOAT_MANTISSA_BITS (23)
# define IEEE_754_FLOAT_EXPONENT_BITS (8)
# define IEEE_754_FLOAT_SIGN_BITS     (1)
typedef union {
        float value;
        struct {
            uint32_t mantissa : IEEE_754_FLOAT_MANTISSA_BITS;
            int8_t   exponent : IEEE_754_FLOAT_EXPONENT_BITS;
            int8_t   sign     : IEEE_754_FLOAT_SIGN_BITS;
        };
    } IEEE_754_float;  
int printf(const char* restrict,...);
void main() {
  IEEE_754_float d1 = {.value = 5.0f } ;
  printf("Sign: %x\n ",d1.sign);
  printf("Exponent: %x\n ",d1.exponent);
  printf("Mantissa: %x\n ",d1.mantissa);
}

/*
** - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
**  Single Precision (float)  --  Standard IEEE 754 Floating-point Specification
*/

# define IEEE_754_FLOAT_MANTISSA_BITS (23)
# define IEEE_754_FLOAT_EXPONENT_BITS (8)
# define IEEE_754_FLOAT_SIGN_BITS     (1)

.
.
.

# if (IS_BIG_ENDIAN == 1)
    typedef union {
        float value;
        struct {
            __int8_t   sign     : IEEE_754_FLOAT_SIGN_BITS;
            __int8_t   exponent : IEEE_754_FLOAT_EXPONENT_BITS;
            __uint32_t mantissa : IEEE_754_FLOAT_MANTISSA_BITS;
        };
    } IEEE_754_float;
# else
    typedef union {
        float value;
        struct {
            __uint32_t mantissa : IEEE_754_FLOAT_MANTISSA_BITS;
            __int8_t   exponent : IEEE_754_FLOAT_EXPONENT_BITS;
            __int8_t   sign     : IEEE_754_FLOAT_SIGN_BITS;
        };
    } IEEE_754_float;
# endif

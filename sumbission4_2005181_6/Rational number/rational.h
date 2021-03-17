#ifndef RATIONAL_H_INCLUDED
#define RATIONAL_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include<stdio.h>
#include<math.h>
#include<stdint.h>

struct rational
{
    int numerator;
    int denominator;
};
typedef struct rational rational_t;

rational_t add(rational_t r1,rational_t r2);
rational_t subtract(rational_t r1,rational_t r2);
rational_t multiply(rational_t r1,rational_t r2);
rational_t divide(rational_t r1,rational_t r2);
rational_t absolute(rational_t r);
rational_t exp_rational(rational_t r,uint16_t n);
float exp_real(uint16_t x,rational_t r);
rational_t reduce(rational_t r);


#endif // RATIONAL_H_INCLUDED

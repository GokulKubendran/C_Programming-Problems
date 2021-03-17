#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include "rational.h"

static inline rational_t standardQuotation(rational_t r)
{
     if (r.denominator < 0)
    {
        r.denominator = -1 * r.denominator;
        r.numerator = -1 * r.numerator;
    }
    else if (r.denominator< 0 && r.numerator <0 )
    {
        r.denominator = -1 * r.denominator;
        r.numerator = -1 * r.numerator;
    }
    return r;
}

rational_t add(rational_t r1,rational_t r2)
{
    rational_t returnValue;
    returnValue.numerator = (r1.numerator*r2.denominator)+(r1.denominator*r2.numerator);
    returnValue.denominator = (r1.denominator*r2.denominator);

    if (returnValue.numerator == 0)
    {
        returnValue.denominator = 1;
    }

    returnValue = standardQuotation(returnValue);

    printf("n = %d d = %d \n",returnValue.numerator,returnValue.denominator);

    return returnValue;
}

rational_t subtract(rational_t r1,rational_t r2)
{
    rational_t returnValue;
    returnValue.numerator = (r1.numerator*r2.denominator)-(r1.denominator*r2.numerator);
    returnValue.denominator = (r1.denominator*r2.denominator);

    if (returnValue.numerator == 0)
    {
        returnValue.denominator = 1;
    }

    returnValue = standardQuotation(returnValue);

    printf("n = %d d = %d \n",returnValue.numerator,returnValue.denominator);

    return returnValue;
}

rational_t multiply(rational_t r1,rational_t r2)
{
    rational_t returnValue;
    returnValue.numerator = (r1.numerator*r2.numerator);
    returnValue.denominator = (r1.denominator*r2.denominator);

    printf("n = %d d = %d \n",returnValue.numerator,returnValue.denominator);

    return reduce(returnValue);
}

rational_t divide(rational_t r1,rational_t r2)
{
    rational_t returnValue;
    returnValue.numerator = (r1.numerator*r2.denominator);
    returnValue.denominator = (r1.denominator*r2.numerator);

    returnValue = standardQuotation(returnValue);

    printf("n = %d d = %d \n",returnValue.numerator,returnValue.denominator);

    return reduce(returnValue);
}

rational_t absolute(rational_t r)
{
    rational_t returnValue;

    if(r.numerator < 0 )
    {
        returnValue.numerator = -1*r.numerator;
    }
    else
    {
        returnValue.numerator = r.numerator;
    }

    if(r.denominator < 0 )
    {
        returnValue.denominator = -1*r.denominator;
    }
    else
    {
        returnValue.denominator = r.denominator;
    }

    returnValue = standardQuotation(returnValue);

    printf("n = %d d = %d \n",returnValue.numerator,returnValue.denominator);

    return reduce(returnValue);
}

rational_t exp_rational(rational_t r,uint16_t n)
{
    rational_t returnValue;


    returnValue.numerator = pow(r.numerator,n);
    returnValue.denominator = pow(r.denominator,n);

    returnValue = standardQuotation(returnValue);

    printf("n = %d d = %d \n",returnValue.numerator,returnValue.denominator);

    return reduce(returnValue);
}

float exp_real(uint16_t x,rational_t r)
{


    float floatvalue = pow((float)x,((float)r.numerator/r.denominator));

    printf("F = %f \n",floatvalue);

    return floatvalue;
}

rational_t reduce(rational_t r)
{
    rational_t returnValue;

    returnValue.numerator = r.numerator;
    returnValue.denominator = r.denominator;

    int maxNumber;
    if(r.numerator>r.denominator)
    {
        maxNumber = r.numerator;
    }
    else
    {
        maxNumber = r.denominator;
    }
    for(int i = maxNumber;i>1;i--)
    {
        if((r.numerator%i == 0) &&(r.denominator%i ==0 ))
        {
            returnValue.numerator = r.numerator/i;
            returnValue.denominator = r.denominator/i;
        }
    }

    if (returnValue.numerator == 0)
    {
        returnValue.denominator = 1;
    }

    returnValue = standardQuotation(returnValue);

    printf("n = %d d = %d \n",returnValue.numerator,returnValue.denominator);

    return returnValue;
}

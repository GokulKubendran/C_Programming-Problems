#ifndef SPACE_AGE_H_INCLUDED
#define SPACE_AGE_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>
#include<stdint-gcc.h>
#include<string.h>

void planet_age (char name, long seconds)
{
    int64_t result;
    int64_t earth_period = seconds/31557600;
    switch(name)
    {
        case 'Mercury':
        {
            result = seconds/earth_period;
            return result;
            break;
        }
        case 'Venus':
        {
            result = seconds/earth_period;
            return result;
            break;
        }
        case 'Earth' :
        {
            result = seconds/earth_period;
            return result;
            break;
        }
        case 'Mars' :
        {
            result = seconds/earth_period;
            return result;
            break;
        }
        case 'Jupiter' :
        {
            result = seconds/earth_period;
            return result;
            break;
        }
        case 'Saturn' :
        {
            result = seconds/earth_period;
            return result;
            break;
        }
        case 'Uranus' :
        {
            result = seconds/earth_period;
            return result;
            break;
        }
        case 'Neptune':
        {
            result = seconds/earth_period;
            return result;
            break;
        }
        default:
        {
            printf(" ");
        }

    }
    printf("%ld Earth-years old",result);
}

#endif // SPACE_AGE_H_INCLUDED

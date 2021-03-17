#ifndef SQROOT_H_INCLUDED
#define SQROOT_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
int squareRoot(int realValue)
{
    for(int i =1;i<realValue;i++)
    {
        if(i*i == realValue)
        {
            return i;
        }
        else
        {
            continue;
        }
    }
}


#endif // SQROOT_H_INCLUDED

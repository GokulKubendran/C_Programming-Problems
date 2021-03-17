#include <stdio.h>
#include <stdlib.h>
#include "roman.h"
int main()
{
    int n;
    printf("Enter a number from 1 - 3000: \n");
    scanf("%d",&n);
    if(n == 0 || n > 3000)
    {
        printf("invalid entry");
    }
    else
    {
        roman(n);
    }
    return 0;
}



#ifndef BINARY_H_INCLUDED
#define BINARY_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
void binary_search(int value, int *arr, size_t length)
{
    if(arr == NULL)
    {
        return NULL;
    }

    if (length == 0)
    {
        return NULL;
    }

    int start = 0;
    int end = length;

    while(start<=end)
    {
        int midLength = start + (end-start)/2;

        if (arr[midLength]==value)
        {
           printf("%d",arr[midLength]);
        }

        if (value > arr[midLength])
        {
            start = midLength + 1;
        }

        else
        {
            end = midLength - 1;
        }
    }


}



#endif // BINARY_H_INCLUDED

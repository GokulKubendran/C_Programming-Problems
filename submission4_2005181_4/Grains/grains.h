#ifndef GRAINS_H_INCLUDED
#define GRAINS_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint-gcc.h>
#include <ctype.h>
#include <inttypes.h>
#define no_squares 64
void grain()
{
    uint64_t total = 0;
    uint64_t total_sum = 0;
    for(int i = 0 ; i < no_squares ; i++)
    {
        total = pow(2,i);
        printf("No of grain(s) in square box %d is ",i+1);
        printf("%" PRIu64 "\n", total);
        total_sum = total_sum + total;

    }
    printf("----------------------------------\nThe total number of grains placed in the chessboard: ");
    printf("%" PRIu64 "\n", total_sum);
}


#endif // GRAINS_H_INCLUDED

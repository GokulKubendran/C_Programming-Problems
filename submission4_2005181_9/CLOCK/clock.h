#ifndef CLOCK_H
#define CLOCK_H

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_STR_LEN (5 + 1)     // "##:##\0"
#define STR(X) # X
#define CLOCK_STR STR(%02d:%02d)

typedef struct {
   char text[MAX_STR_LEN];
} clock_t;

clock_t clock_create(int hour, int minute);
clock_t clock_add(clock_t clock, int minute_add);
clock_t clock_subtract(clock_t clock, int minute_subtract);
bool clock_is_equal(clock_t a, clock_t b);

#endif

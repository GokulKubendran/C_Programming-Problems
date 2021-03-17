#include "clock.h"

#define A_MODULO_M(A,M) (((A)%M + M)%M)

static int get_hour_carry(int minute){
    return (minute >= 0) ? minute/60 : ((minute + 1)/60) - 1;
}

clock_t clock_create(int hour, int minute){
    clock_t clock;
    int hour_carry = get_hour_carry(minute);
    int minute_abs = A_MODULO_M(minute, 60);
    int hour_abs = A_MODULO_M((hour + hour_carry), 24);
    snprintf(clock.text, sizeof(clock.text), CLOCK_STR, hour_abs, minute_abs);
    return clock;
}

clock_t clock_add(clock_t clock, int minute_add){
    int minute, hour;
    sscanf(clock.text, CLOCK_STR, &hour, &minute);
    clock_t clock_ret = clock_create(hour, minute + minute_add);
    return clock_ret;
}

clock_t clock_subtract(clock_t clock, int minute_subtract){
    return clock_add(clock, - minute_subtract);
}

bool clock_is_equal(clock_t a, clock_t b){
    return strcmp(a.text, b.text) == 0 ? true : false;
}

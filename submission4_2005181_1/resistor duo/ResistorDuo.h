#ifndef RESISTORDUO_H_INCLUDED
#define RESISTORDUO_H_INCLUDED

#include<stdio.h>

typedef enum
{Black,Brown,Red,Orange,Yellow,Green,Blue,Violet,Grey,White} resistor_band_t;
struct color
{
    char* name;
    resistor_band_t id;
}lists[10]={ {"Black", Black},
    {"Brown", Brown},
    {"Red", Red},
    {"Orange", Orange},
    {"Yellow", Yellow},
    {"Green", Green},
    {"Blue", Blue},
    {"Violet", Violet},
    {"Grey", Grey},
    {"White", White}
};

#endif // RESISTORDUO_H_INCLUDED

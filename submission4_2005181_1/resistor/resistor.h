#ifndef RESISTOR_H_INCLUDED
#define RESISTOR_H_INCLUDED


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

#endif // RESISTOR_H_INCLUDED

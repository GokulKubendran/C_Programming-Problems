#include "spaceAge.h"
#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#include"spaceAge.h"
int main(void)

{
    char name[15];
    long seconds;
    printf("Enter the planet name : \n");
    gets(name);
    printf("\nEnter the age seconds: \n");
    scanf("%ld",&seconds);
    planet_age(name,seconds);
    return 0;
}


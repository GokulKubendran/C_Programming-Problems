#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 50
#include "hamming.h"

int main()
{
    int ham,l1,l2;
    char *str1=calloc(MAX_SIZE,sizeof(char));
    char *str2=calloc(MAX_SIZE,sizeof(char));
    printf("Enter the DNA String 1.\n");
    scanf("%s",str1);
    printf("Enter the DNA String 2. \n");
    scanf("%s",str2);
    l1=strlen(str1);
    l2=strlen(str2);
    if(l1==l2)
    {
       ham=compute(str1,str2);
       printf("The Hamming Distance is %d.\n",ham);
    }
    else
    {
        printf("DNA Strings are unequal. \n");
    }
    return 0;
}

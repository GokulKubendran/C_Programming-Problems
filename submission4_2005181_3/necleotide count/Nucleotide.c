#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_SIZE 50

#include"nucleotide.h"
int main()
{
    char *str=calloc(MAX_SIZE,sizeof(char));
    int *ptr;
    printf("Enter the DNA String.  \n");
    scanf("%s",str);
    ptr=count(str);
    printf("The occurrence of the Nucleotides are as follows. \n");
    printf("A: %d C: %d G: %d T: %d \n",*(ptr),*(ptr+1),*(ptr+2),*(ptr+3));
    return 0;

}

#include <stdio.h>
#include <stdlib.h>
#include "pangram.h"
int main()
{
    char* a=calloc(MAX_SIZE,sizeof(char));
    bool res;
    printf("Enter the Sentence\n");
    scanf("%[^\n]s",a);
    res=is_pangram(a);
    if(res==true)
    {
        printf("The Sentence is a Pangram\n");
    }
    else
    {
        printf("The Sentence is Not a Pangram\n");
    }
}

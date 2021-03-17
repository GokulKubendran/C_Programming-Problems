#include <stdio.h>
#include <stdlib.h>
#include "acronym.h"

int main()
{
    char a[200];
    printf("Enter the Phrase\n");
    scanf("%[^\n]s",a);
    abbreviate(a);
    return 0;
}

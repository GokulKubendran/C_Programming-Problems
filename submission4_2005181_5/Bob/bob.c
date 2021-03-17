#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include"bob.h"


int main(void)
{
    char greeting [MAX_SIZE];
    printf("Speak to BOB :\n");
    gets(greeting);
    printf("%s",hey_bob(greeting));
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "WordCount.h"
int main()
{
    wc *words=calloc(MAX_WORDS,sizeof(wc));
    char a[MAX_WORD_LENGTH];
    printf("Enter the Sentence\n");
    scanf("%[^\n]s",a);
    word_count(a,words);
    return 0;
}

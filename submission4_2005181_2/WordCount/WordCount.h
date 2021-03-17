#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_WORDS 20            // at most MAX_WORDS can be found in the test input string
#define MAX_WORD_LENGTH 50      // no individual word can exceed this length

// results structure
typedef struct word_count_word {
   char text[MAX_WORD_LENGTH + 1];      // allow for the string to be null-terminated
   int count;
} wc;

int word_count(const char *input_text, wc * words)
{
    int i=0,j=0,k=0,n,flag=0;
    n=strlen(input_text);
        for(j;j<n+1;j++)
        {
            if(input_text[j]!=' ')
            {
                words[i].text[k]=input_text[j];
                k++;
            }
            else
            {
                words[i].text[k]='\0';
                k=0;
                i++;
            }
        }
        for(int i=0;i<MAX_WORDS;i++)
        {
            for(int j=0;j<MAX_WORDS;j++)
            {
                if(strcmp(words[i].text,words[j].text)==0)
                {
                    words[i].count++;
                }
            }
        }
for(int k=0;k<i+1;k++)
{
    printf("%s: %d\n",words[k].text,words[k].count);
}
}

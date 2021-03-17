#ifndef PANGRAM_H_INCLUDED
#define PANGRAM_H_INCLUDED
#include<stdio.h>
#include <stdbool.h>
#include<ctype.h>
#include<stdlib.h>
#define MAX_SIZE 100
bool is_pangram(char *sentence)
{
    int x,flag[26]={0},k,check;
    char a[MAX_SIZE];
    for(int i=0;i<MAX_SIZE;i++)
    {
        a[i]=tolower(sentence[i]);
    }
    for(int i=0;i<MAX_SIZE;i++)
    {
        x=a[i];
        for(int j=97;j<=122;j++)
        {
            k=0;
            if(j==x)
            {
                k=j-97;
                flag[k]++;
            }
        }
    }
for(int i=0;i<26;i++)
{
    if(flag[i]>0)
    {
        check=1;
    }
    else
    {
        check=0;
    }
}
if(check==1)
    return true;
else
    return false;
}



#endif // PANGRAM_H_INCLUDED

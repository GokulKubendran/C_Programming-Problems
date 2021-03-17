#ifndef BOB_H_INCLUDED
#define BOB_H_INCLUDED

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

#define MAX_SIZE 50
char *hey_bob(char *greeting)
{
    int len,flag=0,ws=0;
    char *str=calloc(MAX_SIZE,sizeof(char));
    len=strlen(greeting);
    for(int i=0;i<len-1;i++)
    {
        if(isupper(greeting[i]))
        {
            flag=1;
        }
        else
        {
            flag=0;
        }
    }
    if(flag==1 && greeting[len-1]=='?')
    {
        str="Calm down, I know what I'm doing !!";
    }
    else if(flag==1)
    {
        str="Whoa, Chill Out !!";
    }
    else if(greeting[len-1]=='?')
    {
        str="Sure.";
    }
    else if((greeting[0]==' ' && greeting[len-1]==' ') || greeting[len-1]=='\t' || greeting[len-1]=='\n')
    {
        str="Fine be that way.";
    }
    else if(greeting[len-1]!='?')
    {
        str="Whatever.";
    }
    return str;

}


#endif // BOB_H_INCLUDED

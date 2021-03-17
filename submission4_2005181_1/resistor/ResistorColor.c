#include <stdio.h>
#include <stdlib.h>

#include<stdio.h>
#include<string.h>
#include<math.h>

#include "resistor.h"
int main()
{
    char a[6];
    double c[1],p,result;
    for(int i=0;i<1;i++)
    {
        printf("Enter the Color Name(Eg:Red, Black) / Enter None If No Color\n");
        scanf("%s",&a);
        if(strcmp(a,"None")==0)
        {
            break;
        }
        else
        {
            for(int j=0;j<10;j++)
            {
                if(strcmp(a,lists[j].name)==0)
                {
                    c[i]=lists[j].id;
                    break;
                }
            }
        }
    }p=c[0];

    printf("The Resistance is %0.3lf Ohms",p);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

#include<stdio.h>
#include<string.h>
#include<math.h>

#include"ResistorDuo.h"
int main()
{
    char a[6];
    double c[2],p,result;
    for(int i=0;i<2;i++)
    {
        printf("Enter the Color Name(Eg:Black, Brown) / Enter None If No Color\n");
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
    }
    if(c[1] == 0){
        p=c[0]*10;
    }
    else{
    p=c[0]+(c[1]*10);
    }
    printf("The Resistance is %0.3lf Ohms",p);
    return 0;
}

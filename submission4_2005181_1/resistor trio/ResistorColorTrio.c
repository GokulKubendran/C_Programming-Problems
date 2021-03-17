#include<stdio.h>
#include<string.h>
#include<math.h>

#include"ResistorTrio.h"
int main()
{
    char a[6];
    double c[3],p,result;
    for(int i=0;i<3;i++)
    {
        printf("Enter the Color Name(Eg: Black, Brown) / Enter None If No Color\n");
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
    int m =pow(10,c[2]);
    p=c[0]*m;
    result=pow(10,c[2]-1);
    p=p+(c[1]*result);
    printf("The Resistance is %0.3lf Ohms",p);
    return 0;
}

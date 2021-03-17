#include <stdio.h>
#include <stdlib.h>
#include"raindrops.h"
int main(void)
{
    printf("Enter total no string integer:\n");
    int num;
    scanf("%d",&num);
    int arr[num];
    printf("Enter the numbers :\n");
    for(int i=0;i<num;i++)
    {
        scanf("%d ",&arr[i]);
    }
    oper(arr,num);
    return 0;
}


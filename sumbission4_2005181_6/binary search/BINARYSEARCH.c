#include <stdio.h>
#include <stdlib.h>
#include"binary.h"
int main()
{
    int length,value;
    printf("Enter array size: \n");
    scanf("%d",&length);
    int arr[length];
    printf("Enter the array: \n");
    for(int i = 0;i < length ; i++ )
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter search value: \n");

    scanf("%d",&value);
    binary_search(value,arr,length);
    return 0;
}

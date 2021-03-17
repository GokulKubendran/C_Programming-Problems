#include <stdio.h>
#include <stdlib.h>
#include"gigasecond.h"
int main(void)
{
    int date , month , year , hr , min;
    printf("Enter DOB in DD MM YYYY\n");
    scanf("%d\t%d\t%d",&date,&month,&year);
    printf("Enter time in 24 hr format:\n");
    scanf("%d\t%d",&hr,&min);
    giga(date,month,year,hr,min);
    return 0;
}

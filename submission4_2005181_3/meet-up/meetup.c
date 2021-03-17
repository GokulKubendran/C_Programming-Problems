#include <stdio.h>
#include <stdlib.h>
#include"meetup.h"
#include<time.h>
int main()

{
    unsigned int year,Month;
    char *week;

    char *day_of_week;
    printf("Enter the meetup phrase :\nYear - month - week - day of the week :\n");
    scanf("%d %d %s %s",&year,&Month,&week,&day_of_week);
    meetup_day_of_month(year,Month,*week,*day_of_week);
    return 0;
}

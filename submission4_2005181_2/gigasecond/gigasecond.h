#ifndef GIGASECOND_H_INCLUDED
#define GIGASECOND_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
int leapyrs(int year)
{
    int l_days = 0;
    for(int i = year ; i <= (year + 31) ; i++)
    {
        if(i%400 == 0 || i%4 ==0){
            l_days++;
        }
    }
return l_days;
}

void giga(int date,int month,int year,int hr,int min)
    {

    int f_year = 31, f_month = 8, f_date = 8, f_hr = 9, f_min = 1;
    f_date = f_date + leapyrs(year);
    f_min = f_min + min ;
    if(f_min >= 60){
        f_hr++;
        f_min = f_min - 60;
    }
    f_hr = f_hr + hr ;
    if(f_hr >= 24 ){
        f_date++;
        f_hr = f_hr - 24;
    }
    f_date = f_date + date;
    if(f_date >= 30) {
        f_month++;
        f_date = f_date - 30;
    }
    f_month = f_month + month;
    if(f_month > 12){
        f_year++;
        f_month = f_month - 12;
    }
    f_year = f_year + year;

    printf("-------------------------------------------\nThe final date is %d - %d - %d \n",f_date,f_month,f_year);
    printf("Time is %d:%d:26",f_hr,f_min);
}




#endif // GIGASECOND_H_INCLUDED

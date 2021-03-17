#ifndef LEAPYEAR_H_INCLUDED
#define LEAPYEAR_H_INCLUDED
void fun(int year)
{
     if(((year%4 == 0) && (year%100 != 0)) ||(year%400 == 0))
        printf("This is a leap year !");
    else
        printf("This is not a leap year !");

}


#endif // LEAPYEAR_H_INCLUDED

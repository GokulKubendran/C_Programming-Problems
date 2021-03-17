#ifndef MEETUP_H_INCLUDED
#define MEETUP_H_INCLUDED


#include <time.h>
#include <string.h>
#include <stdio.h>

typedef enum months{January,February,March,April,May,June,July,August,September,October,November,December}month;
struct mcount
{char *name;
 month mon_id;}mon_x[12]={{"January",January},
 {"February",February},
 {"March",March},
 {"April",April},
 {"May",May},
 {"June",June},
 {"July",July},
 {"August",August},
 {"September",September},
 {"October",October},
 {"November",November},
 {"December",December}};

const int first[7] = {1, 2, 3, 4, 5, 6, 7};
const int second[7] = {8, 9, 10, 11, 12, 13, 14};
const int third[7] = {15, 16, 17, 18, 19, 20, 21};
const int fourth[7] = {22, 23, 24, 25, 26, 27, 28};
const int last_31[7] = {31, 30, 29, 28, 27, 26, 25};
const int last_30[7] = {30, 29, 28, 27, 26, 25, 24};
const int last_29[7] = {29, 28, 27, 26, 25, 24, 23};
const int last_28[7] = {28, 27, 26, 25, 24, 23, 22};
const int teenth[7] = {13, 14, 15, 16, 17, 18, 19};
const int fifth_31[3] = {29, 30, 31};
const int fifth_30[2] = {29, 30};
const int fifth_29[1] = {29};

const char* weekdays[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

int meetup_day_of_month(unsigned int year, unsigned int month, char *week, char *day_of_week)
{
	struct tm meetup = {0};
	meetup.tm_year = year - 1900;
	meetup.tm_mon = month-1;
	const int* possible_days;
	int num_days = 7;
	if(strcmp(week, "First") == 0)
	{
		possible_days = first;
	}
	else if(strcmp(week, "Second") == 0)
	{
		possible_days = second;
	}
	else if(strcmp(week, "Third") == 0)
	{
		possible_days = third;
	}
	else if(strcmp(week, "Fourth") == 0)
	{
		possible_days = fourth;
	}
	else if(strcmp(week, "Last") == 0 && (month == 9 || month == 4 || month == 6 || month == 11))
	{
		possible_days = last_30;
	}
	else if(strcmp(week, "Last") == 0 && (month == 2) && (year % 4 == 0) && (year % 400 != 0))
	{
		possible_days = last_29;
	}
	else if(strcmp(week, "Last") == 0 && (month == 2))
	{
		possible_days = last_28;
	}
	else if(strcmp(week, "Last") == 0)
	{
		possible_days = last_31;
	}
	else if(strcmp(week, "Teenth") == 0)
	{
		possible_days = teenth;
	}
	else
	{
		if(month == 9 || month == 4 || month == 6 || month == 11)
		{
			possible_days = fifth_30;
			num_days = 2;
		}
		else if(month == 2 && year % 4 == 0 && year % 400 != 0)
		{
			possible_days = fifth_29;
			num_days = 1;
		}
		else if(month == 2)
		{
			return 0;
		}
		else
		{
			possible_days = fifth_31;
			num_days = 3;
		}
	}
	for(int index = 0; index < num_days; index++)
	{
		meetup.tm_mday = possible_days[index];
		mktime(&meetup);
		if(strcmp(weekdays[meetup.tm_wday], day_of_week) == 0)
		{
		    printf("the date of the meetup is : %d",possible_days[index]);

		}
	}

	return 0;
}


#endif // MEETUP_H_INCLUDED

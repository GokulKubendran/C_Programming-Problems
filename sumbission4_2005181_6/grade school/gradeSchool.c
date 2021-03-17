#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<stdint.h>
#include "grade_school.h"

static roster_t roster = { 0 };

roster_t get_roster(void)
{
    return roster;
}

bool roster_seat_is_empty(int);
bool roster_seat_is_empty(int seat)
{
    return !roster.students[seat].name;
}

void add_student_in_roster(student_t,int);
void add_student_in_roster(student_t student,int seat)
{
    roster.students[seat].name = student.name;
    roster.students[seat].grade = student.grade;
}

student_t student_in_roster(int seat);
student_t student_in_roster(int seat)
{
	return (student_t) {
		roster.students[seat].grade,
		roster.students[seat].name
	};
}

void switch_student_from_roster(student_t *, int);
void switch_student_from_roster(student_t *student, int seat)
{
	student_t from_seat = student_in_roster(seat);
	add_student_in_roster(*student, seat);
	student->grade = from_seat.grade;
	student->name = from_seat.name;
	return;
}

bool student_should_be_placed_here(student_t, int);
bool student_should_be_placed_here(student_t student, int seat)
{
	return  student.grade < roster.students[seat].grade ||
		(student.grade == roster.students[seat].grade &&
		strcmp(student.name, roster.students[seat].name) < 0);
}


int add_student(char *name,uint8_t grade)
{
    student_t student = {grade,name};
    for(size_t seat=0;seat<=roster.count;seat++)
    {
        if(roster_seat_is_empty(seat))
        {
            add_student_in_roster(student, seat);
        }
        if(student_should_be_placed_here(student,seat))
        {
            switch_student_from_roster(&student,seat);
        }
    }
    return ++roster.count;
}

void clear_roster(void)
{
    roster.count = 0;
    for(size_t i = 0;i<MAX_STUDENTS;i++)
    {
        roster.students[i].name=NULL;
        roster.students[i].grade=0;
    }
    return;
}

roster_t get_grade(uint8_t desired_grade)
{
    roster_t r ={0};
    for(size_t i =0;i<MAX_STUDENTS;i++)
    {
        if(roster.students[i].grade == desired_grade)
        {
            r.students[r.count] = roster.students[i];
            r.count = r.count+1;
        }
    }
    return r;
}

#ifndef GRADE_SCHOOL_H_INCLUDED
#define GRADE_SCHOOL_H_INCLUDED


#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>

#define MAX_NAME_LENGTH 20
#define MAX_STUDENTS 20



typedef struct {
   uint8_t grade;
   char *name;
} student_t;

typedef struct {
   size_t count;
   student_t students[MAX_STUDENTS];
} roster_t;


roster_t get_roster(void);

int add_student(char *, uint8_t);

void clear_roster(void);

roster_t get_grade(uint8_t desired_grade);

#endif // GRADE_SCHOOL_H_INCLUDED

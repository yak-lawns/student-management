// student.c

#include <stdio.h>
#include "student.h"

void displayStudent(const Student *student) {
    printf("Student ID: %d, Name: %s, Grade: %.2f\n", student->studentId, student->name, student->grade);
}

// course.h

#ifndef COURSE_H
#define COURSE_H

#include "student.h"

typedef struct {
    int courseId;
    char courseName[50];
    Student students[5];
    int studentCount;
} Course;

void addStudentToCourse(Course *course, const Student *student);
void displayCourse(const Course *course);

#endif // COURSE_H

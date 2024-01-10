// course.c

#include <stdio.h>
#include "course.h"

void addStudentToCourse(Course *course, const Student *student) {
    if (course->studentCount < 5) {
        course->students[course->studentCount++] = *student;
    } else {
        printf("Cannot add more students to the course.\n");
    }
}

void displayCourse(const Course *course) {
    printf("Course ID: %d, Course Name: %s\n", course->courseId, course->courseName);
    printf("Students enrolled:\n");
    for (int i = 0; i < course->studentCount; ++i) {
        displayStudent(&course->students[i]);
    }
}

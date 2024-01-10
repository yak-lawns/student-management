// main.c

#include <stdio.h>
#include "course.h"

int main() {
    // Create a student
    Student alice = {1, "Alice", 85.5};

    // Create a course
    Course mathCourse = {101, "Mathematics", {}, 0};

    // Add the student to the course
    addStudentToCourse(&mathCourse, &alice);

    // Display the course details
    displayCourse(&mathCourse);

    return 0;
}

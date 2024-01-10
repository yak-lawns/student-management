// student.h

#ifndef STUDENT_H
#define STUDENT_H

typedef struct {
    int studentId;
    char name[50];
    float grade;
} Student;

void displayStudent(const Student *student);

#endif // STUDENT_H

#ifndef STUDENT_H
#define STUDENT_H

typedef struct Student
{
    char id[16];
    char name[100];
    char department[50];
} Student;

Student createStudent(char id[], char name[], char department[]);

void viewStudent(Student student);

#endif

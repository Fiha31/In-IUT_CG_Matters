#include <stdio.h>
#include <string.h>
#include "student.h"

Student createStudent(char id[], char name[], char department[])
{
    Student student;

    strcpy(student.id, id);
    strcpy(student.name, name);
    strcpy(student.department, department);

    return student;
}

void viewStudent(Student student)
{
    printf("ID: %s\n", student.id);
    printf("Name: %s\n", student.name);
    printf("Department: %s\n", student.department);
}
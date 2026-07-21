#include <stdio.h>
#include <string.h>
#include "student.h"

int testStudentId()
{
    Student student = createStudent(
        "2024001",
        "Alice",
        "CSE"
    );

    return strcmp(student.id, "2024001") == 0;
}

int testStudentName()
{
    Student student = createStudent(
        "2024001",
        "Alice",
        "CSE"
    );

    return strcmp(student.name, "Alice") == 0;
}

int testStudentDepartment()
{
    Student student = createStudent(
        "2024001",
        "Alice",
        "CSE"
    );

    return strcmp(student.department, "CSE") == 0;
}

int main()
{
    int passed = 0;
    int total = 0;

    total++;
    if(testStudentId())
        passed++;

    total++;
    if(testStudentName())
        passed++;

    total++;
    if(testStudentDepartment())
        passed++;

    printf("Passed %d/%d tests\n", passed, total);

    return passed == total ? 0 : 1;
}
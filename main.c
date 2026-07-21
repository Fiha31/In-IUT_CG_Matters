#include <stdio.h>
#include "modules/course.h"

int main()
{
    Course course;

    course = createCourse(
        "CSE 4202",
        "Structured Programming II Lab",
        1.5
    );

    printf("Course Information\n");
    printf("------------------\n");

    viewCourse(course);

    return 0;
}
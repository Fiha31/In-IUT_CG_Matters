 #include <stdio.h>
#include "gpa.h"

int main()
{
    double grades[] = {4.0, 3.5, 3.0};
    double credits[] = {3.0, 3.0, 3.0};

    double cgpa = calculateCGPA(grades, credits, 3);

    printf("CGPA: %.2f\n", cgpa);

    return 0;
}
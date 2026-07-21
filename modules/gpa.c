#include "gpa.h"

double calculateCGPA(double gradePoints[], double credits[], int count)
{
    double totalPoints = 0;
    double totalCredits = 0;

    for(int i = 0; i < count; i++)
    {
        totalPoints += gradePoints[i] * credits[i];
        totalCredits += credits[i];
    }

    if(totalCredits == 0)
    {
        return 0;
    }

    return totalPoints / totalCredits;
}
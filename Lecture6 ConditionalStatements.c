#include <stdio.h>
#include <stdlib.h>

//Written by Bunyamin Yavuz in 2022

// Conditional Statements (if,else if,else)

int main()
{
/*
<-------General Structure of conditional statement------->

    if (test - expression 1)
    {
        statement1;
    }
    else if (test - expression 2)
    {
        Statement2;
    }
    else if (test - expression 3)
    {
        Statement3;
    }
    else if (test - expression n)
    {
        statement n;
    }
    else
    {
        default;
    }

*/


    /*
        Overall avarage calculator and also checking failed or passed the lecture
        Formula = firstExam*0.3 + secondExam*0.5 + project*0.2
    */

    int firstExam,secondExam,project;
    float overallAvg;

    printf("Enter your first exam grade: ");
    scanf("%d",&firstExam);

    printf("Enter your second exam grade: ");
    scanf("%d",&secondExam);

    printf("Enter your project exam grade: ");
    scanf("%d",&project);

    overallAvg = firstExam*0.3 + secondExam*0.5 + project*0.2;

    if(overallAvg >= 85)
    {   // After the comma %.(number)f example; (%.2f --> 2.52)
        printf("AA %.2f -->Passed",overallAvg);
    }
    else if(overallAvg >= 70)
    {
        printf("BB %.2f -->Passed",overallAvg);
    }
    else if(overallAvg >= 50)
    {
        printf("CC %.2f -->Passed",overallAvg);
    }
    else
    {
        printf("FF %.2f -->Failed",overallAvg);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

//Written by Bunyamin Yavuz in 2022

// Float variables (%f)

int main()
{
    // float variableName = (value);
    float floatnum1 = 10;
    float floatnum2 = 3;
    float division;

    //Output is 10.000000
    printf("%f\n",floatnum1);

    // float = float(+,-,*,/)float formula
    division = floatnum1/floatnum2;

    //Output is 3.333333
    printf("%f",division);


    // 1st basic program

    /*
        Ideal weight calculator;
        formula = (height - 100 + age / 10)*ans ans --> 0,8 woman & ans --> 0,9 man
    */

    float height,age,ideal;
    height = 183;
    age = 19;
    ideal = (height-100+age/10)*0.9;

    printf("My ideal weight is: %f\n",ideal);



    // 2nd basic program

    /*
        Overall avarage calculator;
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
    printf("%f",overallAvg);

    return 0;
}

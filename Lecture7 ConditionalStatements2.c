#include <stdio.h>
#include <stdlib.h>

//Written by Bunyamin Yavuz in 2022

// Conditional statements 2

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
        <---Some basic operators in C--->
        Mod operator --> %
        And operator --> &&
        Or operator --> ||
    */


    // First program (even or odd)

    int number;

    printf("Enter a number: ");
    scanf("%d",&number);

    if(number % 2 == 0 )
    {
        printf("Number %d is even",number);
    }
    else
    {
        // number % 2 == 1
        printf("Number %d is odd",number);
    }


    // Second  program (common divisor)

    int number1;

    printf("Enter a number: ");
    scanf("%d",&number1);

    if(number1 % 5 == 0 && number1 % 3 == 0 )
    {
        printf("Number %d is = 15k",number1);
    }
    else
    {
        // number % 2 == 1
        printf("Number %d is not = 15k",number1);
    }

    return 0;
}

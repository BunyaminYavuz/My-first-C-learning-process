#include <stdio.h>
#include <stdlib.h>

//Written by Bunyamin Yavuz in 2022

//Switch case application
int main()
{
    /*
       <-----Syntax of switch case in C----->

        switch (expression)
​        {
        case constant1:
            // statements
            break;

        case constant2:
            // statements
            break;
            .
            .
            .
        default:
            // default statements
        }

    */


    // Basic calculator
    int num1,num2,result;
    char process;

    printf("**********Mathematic Calculator**********\n\n");
    printf("1-Summation : (+)\n");
    printf("2-Subtraction : (-)\n");
    printf("3-Division : (/)\n");
    printf("4-Multiplication : (*)\n\n");

    printf("Enter first number: ");
    scanf("%d",&num1);

    printf("Enter second number: ");
    scanf("%d",&num2);

    printf("Choose your process: ");
    scanf("%s",&process);


    switch(process)
    {
    case '+':
        result = num1 + num2;
        printf("Result is = %d",result);
        break;
    case '-':
        result = num1 - num2;
        printf("Result is = %d",result);
        break;
    case '/':
        result = num1 / num2;
        printf("Result is = %d",result);
        break;
    case '*':
        result = num1 * num2;
        printf("Result is = %d",(num1 * num2));
        break;
    default: printf("Error!"); break;
    }
    return 0;
}

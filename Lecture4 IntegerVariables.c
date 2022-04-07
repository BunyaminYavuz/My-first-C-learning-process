#include <stdio.h>
#include <stdlib.h>

//Written by Bunyamin Yavuz in 2022

//Integer variables

int main()
{
    /*
        -----integer assignment-----

        int variablename = (value);
        example;
            int number = 10;
    */

    //Local integer assignment
    int num1 = 8;
    int num2 = 5;

    //Default value 0
    int sum = 0;
    int divison = 0;

    // int = int (+,-,/,%) int formula
    sum = num1 + num2;
    divison = num1/num2;

    // %d is used to format integer and print it
    //Output is 13
    printf("The sum of two number taken : %d\n",sum);

    //Output is 1 (Compiler converts integer if it is not)
    printf("The division of two numbers taken : %d\n",divison);


    //Let's do the same thing by using scanf function

    int x,y;
    int sum1 = 0;

    // & is address operator, to determine the location in the memory
    printf("Enter x: ");
    scanf("%d",&x);

    printf("Enter y: ");
    scanf("%d",&y);

    sum1 = x + y;

    printf("Sum of x and y : %d",sum1);

    return 0;
}

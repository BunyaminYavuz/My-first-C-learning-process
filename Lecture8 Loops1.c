#include <stdio.h>
#include <stdlib.h>

//Written by Bunyamin Yavuz in 2022

//Loops (for)

int main()
{
    /*
            <-----Syntax of for loop in C----->


        for (initial value; condition; incrementation or decrementation )
        {
            statements;
        }
    */


    // N times write "Welcome to the game platform User%d"

    // Loop variable which has a comman usage (i)
    int i;

    // for (initial value; condition; incrementation or decrementation )
    for(i = 1; i <= 10; i++)    // (i++) = (i +=1)
    {
        //statements;
        printf("Welcome to the game platform User%d\n",i);
    }



    // Summation with for loop

    int j,sum = 0;
    int lastNum;

    printf("Enter the last element : ");
    scanf("%d",&lastNum);


    for(j = 1;j <= lastNum; j++)
    {
        // sum = sum + i;
        sum += j;
    }
    printf("The summation is = %d",sum);



    // Factorial with for loop
    int k;
    long int factor = 1;
    int factorial;

    printf("Would you like to see factorial of which number : ");
    scanf("%d",&factorial);


    for(k = 1;k <= factorial; k++)
    {
        factor *= k;
    }
    printf("The factorial of %d is = %ld",factorial,factor);




    return 0;
}

#include <stdio.h>
#include <stdlib.h>

//Written by Bunyamin Yavuz in 2022

// Loops (while)

int main()
{
    /*
            <-----Syntax of while loop in C----->


        while (condition test)
        {
            //Statements to be executed repeatedly
            // Increment (++) or Decrement (--) Operation
        }

    */


    // List of even number except 2 and 20 --> (1-20)-{2,20}
    // 4 6 8 10 12 14 16 18
    int i = 1;

    while(i <= 20)
    {
        if(i % 2 == 0)
        {
            if(i != 2 && i != 20)
            {
                printf(" %d",i);
            }
        }
        i ++;

    }
    printf("\n");



    //Factorial with while loop

    int number;
    long int factorial = 1;
    int a = 1;

    printf("Enter the number to see factorial: ");
    scanf("%d",&number);

    while(a <= number)
    {
        // factorial = factorial * a;
        factorial *= a;
        a ++;
    }
    printf("Factorial of %d is = %ld ",number,factorial);

    return 0;
}

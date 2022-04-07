#include <stdio.h>
#include <stdlib.h>

//Written by Bunyamin Yavuz in 2022

//Switch case

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


    // Days' number
    int number;

    printf("Enter the number of day: ");
    scanf("%d",&number);

    switch(number)
    {
    case 1:
        printf("Monday");
        break;

    case 2:
        printf("Tuesday");
        break;

    case 3:
        printf("Wednesday");
        break;

    case 4:
        printf("Thursday");
        break;

    case 5:
        printf("Friday");
        break;

    case 6:
        printf("Saturday");
        break;

    case 7:
        printf("Sunday");
        break;

    default:
        printf("Not in the range");
    }

    return 0;
}

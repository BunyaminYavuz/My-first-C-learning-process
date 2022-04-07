#include <stdio.h>
#include <stdlib.h>

//Written by Bunyamin Yavuz in 2022

//Drawing shapes to improve algorithmic talent

int main()
{
    /* <---Drawing some shapes--->

        First example output;
        *
        **
        ***
        ****
        *****


        Second example output:
        *****
        ****
        ***
        **
        *

    */

    //First shape example
    int i,j;

    /*
    The important part is to understand the first for loop is for the number of rows
    and the second loop is for column structure.
    */
    for(i = 1; i <= 5;i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
    printf("\n");
    }



    //Second shape example
    for(i = 1; i <= 5;i++)
    {
        for(j = 5; j >= i; j--)
        {
            printf("*");
        }
    printf("\n");
    }




    //Third example
    //Allow the user to determine the number of row and column and draw the rectangular with "*"
    int row,column;
    int x,y;

    printf("Enter the number of row and column: ");
    scanf("%d %d",&row,&column);


    for(x = 1; x <= row;x++)
    {
        for(y = 1; y <= column; y++)
        {
            printf("*");
        }printf("\n");
    }


    return 0;
}

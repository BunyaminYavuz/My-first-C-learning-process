#include <stdio.h>
#include <stdlib.h>

//Written by Bunyamin Yavuz in 2022

//Multidimensional Arrays

int main()
{
    /*
            <-----Syntax of multidimensional arrays in C----->

                data_type  array_name[size1][size2]....[sizeN];

        data_type: Type of data to be stored in the array.

        Here data_type is valid C data type

        array_name: Name of the array

        size1, size2,... ,sizeN: Sizes of the dimensions



        examples;

                Two dimensional array:
        int two_d[10][20];


                Three dimensional array:
        int three_d[10][20][30];

    */


    // Creating a matric with multidimensional arrays
    // Row and column for size of the matric and i,j,z,k are for loops
    int row,column,i,j,z,k;

    //Get the number of rows from keyboard
    printf("Enter the number of rows : ");
    scanf("%d",&row);

    //Get the number of columns from keyboard
    printf("Enter the of columns : ");
    scanf("%d",&column);

    // Made structure of the matric
    int matric[row][column];


    // Get the elements of the matric from keyboard
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            /*
                i+1 and j+1 cause normally row and column start from 1 not 0
                Our aim is not to make user is confused
            */
            printf("[%d][%d] ---> ",i+1,j+1);
            scanf("%d",&matric[i][j]);
        }
    }

    // Show the output to the user as a matric form
    for(z = 0; z < row; z++)
    {
        for(k = 0; k < column; k++)
        {
            printf("%d ",matric[z][k]);
        }printf("\n");
    }


    return 0;
}

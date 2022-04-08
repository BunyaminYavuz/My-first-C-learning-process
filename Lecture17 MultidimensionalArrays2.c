#include <stdio.h>
#include <stdlib.h>

//Written by Bunyamin Yavuz in 2022

//Multidimensional Arrays

int main()
{
    // Summation of matrices (They must have same size (Rule))

    // Get size of matrices
    int row1,column1,row2,column2;
    int i,j,k,z;

    printf("Rows number of first matric ? ");
    scanf("%d",&row1);

    printf("Columns number of first matric ? ");
    scanf("%d",&column1);

    printf("Rows number of second matric ? ");
    scanf("%d",&row2);

    printf("Columns number of first matric ? ");
    scanf("%d",&column2);

    int matric1[row1][column1];
    int matric2[row2][column2];

    // Get the first matric from keyboard
    for(i = 0;i < row1; i++)
    {
        for(j = 0; j < column1; j++)
        {
            printf("Enter the element of [%d][%d] first matric: ",i+1,j+1);
            scanf("%d",&matric1[i][j]);
        }
    }


    // Get the second matric from the keyboard
    for(k = 0; k < row2; k++)
    {
        for(z = 0; z < column2; z++)
        {
            printf("Enter the element of [%d][%d] second matric: ",k+1,z+1);
            scanf("%d",&matric2[k][z]);
        }
    }


    // Sum the matrices
    for(int i = 0; i < row1; i++)
    {
        for(j = 0; j < column1; j++)
        {
            printf("%d ",(matric1[i][j])+(matric2[i][j]));
        }printf("\n");
    }


    return 0;
}

#include <stdlib.h>

//Written by Bunyamin Yavuz in 2022

/*
Fibonacci Series
1 1 2 3 5 8 13 21 ...
*/


int main()
{
    //Defining request variables
    int first_num =1;
    int second_num =1;
    int i;
    int range;

    //For user to decide element number of series
    printf("Enter the range what you want:");
    scanf("%d",&range);

    //Prints for two elements which are 1 1
    printf("%d %d ",first_num,second_num);

    //For loop to return fibonacci series' elements
    for( i=0;i<range; i++){
        int temp = 0;

        //Algorithm of fibonacci series
        temp = second_num;
        second_num += first_num;
        first_num = temp;;
        printf("%d ",second_num);


    }

    return 0;
}


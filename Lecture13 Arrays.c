#include <stdio.h>
#include <stdlib.h>

//Written by Bunyamin Yavuz in 2022

//Arrays

int main()
{
    /*
        <-----Syntax of arrays in C----->


        arrayType intArray[] = {Array items};

        example1;
            int exampleArr[] = {1,2,3,4,5};

        example2;
        char charArray[] = {'a', 'b', 'c'};

    */


    // Odd numbers
    int oddNums[] = {1, 3, 5, 7, 9};

    //Index starts from 0
    printf("%d\n",oddNums[0]);     // 0.index output is 1
    printf("%d\n",oddNums[1]);     // 1.index output is 3
    printf("%d\n",oddNums[2]);     // 2.index output is 5
    printf("%d\n",oddNums[3]);     // 3.index output is 7
    printf("%d\n",oddNums[4]);     // 4.index output is 9



    // Me :)
    char me[] = {'b','u','n','y','a','m','i','n'};
    printf("%s\n",me);




    // Getting array items with for loop
    int numArray[] = {7,12,15,8,6,3};
    int i,j,k;  // Loop items
    int mutliplication = 1,sum = 0;

    for(i = 0; i < 6; i++)
    {
        // Output is 7 12 15 8 6 3
        printf("%d ",numArray[i]);
    }




    // Sum of array items with for loop
    for(j = 0; j < 6; j++)
    {
        sum = sum + numArray[j];
    }
    printf("%d\n",sum);   // Output is 51 (7 + 12 + 15 + 8 + 6 + 3)




    // Multiplication of array items with for loop
    for(k = 0; k < 6; k++)
    {
        mutliplication = mutliplication * numArray[k];
    }
    printf("%d",mutliplication);    // Output is 181440 (7 * 12 * 15 * 8 * 6 * 3)





    return 0;
}

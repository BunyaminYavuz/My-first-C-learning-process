#include <stdio.h>
#include <stdlib.h>

//Written by Bunyamin Yavuz Wed Apr 13 15:52:13 2022

//Pointer

int main()
{
    /*

                    <-----  Pointer  ----->


       Pointers (pointer variables) are special variables that are used to store addresses rather than values.

       & ampersand is used to determine the location inside the memory.


       We declare pointers:
            int *p1;

       example:
            scanf("%d",&variableName);


    */
       int *pnum, num;

   num = 22;
   printf("Address of num: %p\n", &num); // 61FE14 (This for my ram)
   printf("Value of num: %d\n\n", num);  // 22

   pnum = &num;
   printf("Address of pointer pnum: %p\n", pnum);  // 61FE14 (This for my ram)
   printf("Content of pointer pnum: %d\n\n", *pnum); // 22

   num = 11;
   printf("Address of pointer pnum: %p\n", pnum);  // 61FE14 (This for my ram)
   printf("Content of pointer pum: %d\n\n", *pnum); // 11

   *pnum = 2;
   printf("Address of num: %p\n", &num);  //61FE14 (This for my ram)
   printf("Value of num: %d\n\n", num); // 2


    /*
    <-----Syntax error and not error----->

        // pnum is address but num is not
        pnum = num;  // Error

        // &num is address but *pnum is not
        *pnum = &num;  // Error

        // both &num and pnum are addresses
        pnum = &num;  // Not an error

        // both num and *pnum are values
        *pnum = num;  // Not an error

    */

    return 0;
}

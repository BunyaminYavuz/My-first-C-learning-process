#include <stdio.h>
#include <stdlib.h>

//Written by Bunyamin Yavuz in 2022

//Scanf function

/*
    <-----General scanf format----->

        scanf("x", &variableName);
        x;
        %f for float
        %d for integer (decimal)
        %ld for long int
        %sd for short int
        %c for char
        %s for char array in other words for string
*/

int main()
{
    //Local assignments
    char name[10],surname[10],age[2],city[10],job[10];

    // Scanf function is used to get input from keyboard
    printf("Name : ");
    scanf("%s, name");

    printf("Surame : ");
    scanf("%s, surname");

    printf("Age : ");
    scanf("%s, age");

    printf("City : ");
    scanf("%s, city");

    printf("Business : ");
    scanf("%s, job");

    // A basic user menu

    printf("**********Welcome My Program**********\n\n\n");
    printf("|You are %s %s                            |",name,surname);
    printf("|Your age and city are respectively :%s-%s|",age,city);
    printf("|Your business is : %s                    |",job);

    return 0;
}

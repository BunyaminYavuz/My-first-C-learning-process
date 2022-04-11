#include <stdio.h>
#include <stdlib.h>

//Written by Bunyamin Yavuz in 2022

//Puts and Gets Function

int main()
{
    /*
            <-----Syntax of gets and puts----->

        puts("Whatever you want to print on the screen");
        gets(variableName);


        * Puts function is to print something on the screen, gets funtion is to get input from keyboard.

        * By using scanf function you can get before the first space character however
        by using gets function you can get all the input.That's why we use gets function.

    */



    // Let's get an input from the keyboard
    char fname_lname_class_grade[50];

    // printf("Enter your first name,last name,taken class,grade: ");
    puts("Enter your first name,last name,taken class,grade: ");
    gets(fname_lname_class_grade);

    // To see the inputs on the screen
    puts(fname_lname_class_grade);


    return 0;
}

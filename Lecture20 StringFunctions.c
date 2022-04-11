#include <stdio.h>
#include <stdlib.h>

//Written by Bunyamin Yavuz in 2022

//String Functions

int main()
{
    // strlen (Length of the string)
    char fname_lname[20]="Bunyamin Yavuz";

    puts("Enter your first and last name: ");
    gets(fname_lname);

    // \" is to see the " on the screen
    // Usage of strlen function is like: strlen(variableName)
    printf("Length of the \"%s\" is = %d chars\n",fname_lname,strlen(fname_lname));



    // strcpy and strncpy (String copy);
    char book_name[10] = "";
    char strcpyFunction[10]="";
    char strncpyFunction[10] ="";

    printf("Enter the name of the book:\n ");
    gets(book_name);

    // strcpy
    // Syntax of strcpy is like: strcpy(secondVar,firstVar);
    strcpy(strcpyFunction,book_name);
    printf("Copy name is :%s\n",strcpyFunction);


    // strncpy
    // Syntax of strncpy is like: strncpy(secondVar,firstVar,number);
    // Output is first 5 chars
    strncpy(strncpyFunction,book_name,5);
    printf("Copy name first 5 chars are :%s\n",strncpyFunction);



    // strcat function
    char fName[10],lName[10],f_lName[20];

    printf("Enter your first and last name: ");
    scanf("%s%s",fName,lName);

    strcat(f_lName,fName);
    // printf("%s\n",f_lName); output: fName

    strcat(f_lName," ");
    // printf("%s\n",f_lName); output: fName + " "

    strcat(f_lName,lName);
    // printf("%s",f_lName\n); output: fName + " " + lNAme

    printf("Welcome To My Web Page %s!, let's get started coding... ",f_lName);







    return 0;
}

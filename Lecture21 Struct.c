#include <stdio.h>
#include <stdlib.h>

//Written by Bunyamin Yavuz in 2022

//Struct

// Create a student struct
    struct Student{

    long int number;
    int age;
    char name[50];
    int totalMarks;

    }std;

int main()
{
    /*
        <-----Syntax of Struct in C----->

    struct structureName {

    dataType member1;
    dataType member2;
    ...

    }(alias);

    */


    struct Student s1;
    // Accessing members of the struct
    s1.number = 200254018;
    s1.age = 19;
    char s[]="Bunyamin";
    strcpy(s1.name,s);
    s1.totalMarks = 499;

    printf("Number: %d \nName: %s \nTotal Marks: %d\n",s1.number,s1.name,s1.totalMarks);




    // Get from keyboard (Struct)
    printf("Enter your university number :\n");
    scanf("%d",&std.number);

    printf("Enter your age :\n");
    scanf("%d",&std.age);

    printf("Write your name :\n");
    scanf("%d",&std.name);

    printf("Enter your total marks :\n");
    scanf("%d",&std.totalMarks);

    printf("Number: %d \nName: %s \nTotal Marks: %d",s1.number,s1.name,s1.totalMarks);







    return 0;
}

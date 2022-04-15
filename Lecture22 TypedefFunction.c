#include <stdio.h>
#include <stdlib.h>

//Written by Bunyamin Yavuz in 2022

//Typdef Function

int sumfunction(int a,int b){
    int sum = 0;
    sum = a+b;
    return sum;
}
void printer(int a){
    printf("Sum is: %d",a);
}

typedef int integer;

int main()
{
    integer num1 = 1;
    integer num2 = 20;

    printer(sumfunction(num1,num2));

    //integer sum = 0;
    //sum = num1 + num2;

    return 0;
}

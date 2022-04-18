#include <stdio.h>
#include <stdlib.h>

//Written by Bunyamin Yavuz Fri Apr 15 15:30:31 2022

// Function


// Declaration of a function is must be outside of the main program
// a and b are parameters of the function
// Function definition
void rectangular(int a,int b){

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            printf("*");
        }
    printf("\n");
    }
    return;
}



// Function definition
int convert(int n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;
}



int main()
{
    /*
                <-----Syntax of Funtions in C----->

        Function declaration :	return_type function_name (argument list);

        Function call :	function_name (argument_list);

        Function definition :	return_type function_name (argument list) {function body;}



        // Usage of function :
        #include <stdio.h>

        void functionName();
        {
            ... .. ...
            ... .. ...
        }

        int main()
        {
            ... .. ...
            ... .. ...

        functionName();

            ... .. ...
            ... .. ...
        }

    */



    // Numbers of rows and columns
    int row,column;

    printf("Enter numbers of rows and columns of the rectangular shape:\n"),
    scanf("%d %d",&row,&column);

    // Calling a function inside the main program
    rectangular(row,column);


    //  Convert Binary Number to Decimal
    int n;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    printf("%d in binary = %d in decimal", n, convert(n));

    return 0;
}


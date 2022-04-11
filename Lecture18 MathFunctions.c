#include <stdio.h>
#include <stdlib.h>

//Written by Bunyamin Yavuz in 2022

//Mathematic functions

int main()
{
    // Square root  (sqrt)
    float number1,result1;

    printf("Enter a number: ");
    scanf("%f",&number1);

    result1 = sqrt(number1);
    printf("Square root of %f is %.3f\n",number1,result1);



    // Power  (pow)
    int base,power,result2;

    printf("Enter the base and power respectively:  ");
    scanf("%d %d",&base,&power);

    // pow(base,power)
    result2 = pow(base,power);
    printf("%d^%d = %d\n",base,power,result2);




    // Absolute (fabs)
    double number3,result3;

    printf("Enter a number");
    scanf("%lf",&number3);

    result3 = fabs(number3);
    printf("|%lf| = %lf",number3,result3);




    // Sinus cosinus (sin) (cos)
    double resultsin,resultcos,angle;

    printf("Enter the angle: ");
    scanf("%lf",&angle);
    // Sin
    resultsin = sin(angle);
    printf("Sin(%lf) = %lf",angle,resultsin);
    // Cos
    resultcos = cos(angle);
    printf("Cos(%lf) = %lf",angle,resultcos);











    return 0;
}

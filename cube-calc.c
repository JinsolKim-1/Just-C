#include <stdio.h>

int main()
{
    double num;
    double num2;
    double num3;


    printf("Input number: ");
    scanf("%lf", &num);

    num2 = num * num;
    num3 = num2 * num;

    printf("The cube of %0.4lf is: %0.4lf", num,num3);

    return 0;
}
#include <stdio.h>

int main()
{
    float num1;
    float num2;

    printf("Value A: %f", num1);
    scanf("%f", &num1);

    printf("Value B: %f", num2);
    scanf("%f", &num2);

    printf("%f+%f=%f.", num1, num2, (num1 + num2));
    printf("%f-%f=%f.", num1, num2, (num1-num2));
    printf("%f*%f=%f.", num1, num2,(num1*num2));

}
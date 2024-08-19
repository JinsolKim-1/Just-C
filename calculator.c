#include <stdio.h>
//#include <stdbool.h>

int main()
{
    double num1;
    double num2;
    char operator = '+';
    double answer;
    
    printf("Enter first number (A): \n");
    scanf("%lf", &num1);

    getchar();

    printf("Enter operator to be used: \n");
    scanf("%c", &operator);

    printf("Enter second number (B): \n");
    scanf("%lf", &num2);

    switch (operator)
    {
        case '+':
            answer = num1 + num2; 
            printf("%lf + %lf = %lf", num1, num2, (num1+num2));
            break;

        case '-':
            answer = num1 - num2;
            printf("%lf - %lf = %lf", num1, num2, (num1-num2));
            break;

        case '*':
            answer = num1 * num2;
            printf("%lf * %lf = %lf", num1, num2, (num1*num2));
            break;
        
        case '/':
            answer = num1 / num2;
            if (num2 == 0)
            {
                printf("Invalid Divisor: Undefined\n");
            }
            else
                printf("%lf / %lf = %lf", num1, num2, (num1/num2));
            break;
        
        case '%':
            answer = (int)num1 % (int)num2;
            if (num2 == 0)
            {
                printf ("Error in modulus B: Undefined\n");
            }
            else
                printf ("%lf %% %lf = %d", num1, num2, ((int)num1 % (int)num2));
            break;
            
        default:
            printf("Invalid operator!\n");
            break;
   
    }

    return 0;
}
#include <stdio.h>
//#include <stdbool.h>

int main()
{
    int num1;
    int num2;
    char name[20];

    printf("Input first number: ");
    scanf("%d", &num1);

    printf("Input second number: ");
    scanf("%d", &num2);

    printf("Input your name: ");
    scanf("%s", &name);

    printf("Your name is: %s\n", name);
    printf("The modulo of %d and %d is: %d", num1, num2, num1 % num2);
    
    return 0;
}
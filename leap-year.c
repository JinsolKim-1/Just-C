#include <stdio.h>

int main()
{
    int year;

    printf("input year: ");
    scanf("%d", &year);

    if (year % 4 == 0 || year % 400 == 0)
    {
        printf("The year %d is a leap year\n", year);
    }
    else if (year % 100 == 0 || year % 400 != 0)
    {
        printf("The year %d is not a leap year\n", year);
    }
    else
    {
        printf("Input valid integer");
    }
    
    return 0;
}
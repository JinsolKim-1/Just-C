#include <stdio.h>

int main()
{
    int num;

    printf ("Enter the day of the week (1-7): \n");
    scanf ("%d", &num);

    if (num == 1)
    {
        printf("The day of the week is: Monday");
    }
    else if (num == 2)
    {
        printf("The day of the week is: Tuesday");
    }
    else if (num == 3)
    {
        printf("The day of the week is: Wednesday");
    }
    else if (num == 4)
    {
        printf("The day of the week is: Thursday");
    }
    else if (num == 5)
    {
        printf("The day of the week is: Friday");
    }
    else if (num == 6)
    {
        printf("The day of the week is: Saturday");
    }
    else if (num == 7)
    {
        printf("The day of the week is: Sunday");
    }
    else if (num < 1 || num > 7)
    {
        printf("Invalid input. Please enter a number between 1 and 7.\n There is no such day: %d. Input value must be from 1 to 7.", num);
    }

    return 0;
    
}
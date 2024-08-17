#include <stdio.h>

// without for loop

int main()
{
    int day, month;
    int firstday = 0;

    printf("Day: \n");
    scanf("%d", &day);
    printf("Month: \n");
    scanf("%d", &month);

    if (month == 1)
    {
        firstday = day;
    }
    else if (month == 2)
    {
        firstday = 31 + day;
    }
    else if (month == 3)
    {
        firstday = 31 + 29 + day;
    }
    else if (month == 4)
    {
        firstday = 31 + 29 + 31 + day;
    }
    else if (month == 5)
    {
        firstday = 31 + 29 + 31 + 30 + day;
    }
    else if (month == 6)
    {
        firstday = 31 + 29 + 31 + 30 + 31 + day;
    }
    else if (month == 7)
    {
        firstday = 31 + 29 + 31 + 30 + 31 + 30 + day;
    }
    else if (month == 8)
    {
        firstday = 31 + 29 + 31 + 30 + 31 + 30 + 31 + day;
    }
    else if (month == 9)
    {
        firstday = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + day;
    }
    else if (month == 10)
    {
        firstday = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
    }
    else if (month == 11)
    {
        firstday = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
    }
    else if (month == 12)
    {
        firstday = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;
    }
    
    printf ("The day of the year is: %d", firstday);
    
    return 0;
      
}
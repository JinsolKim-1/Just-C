#include <stdio.h>

//(leap ? 29 : 28) - delete "29" and insert this code

int main()
{
    int year;
    int day, month;
    int firstday = 0;
    int leap = 0;

    printf("Day: \n");
    scanf("%d", &day);
    printf("Month: \n");
    scanf("%d", &month);
    printf("Enter Year: \n");
    scanf("%d",&year);

	
    if (year % 400 == 0)
    {
		leap = 1;
    }
	else if (year % 100 == 0)
    {
		leap = 0;
    }
	else if (year % 4 == 0)
    {
		leap = 1;
    }
    
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
    else
    {
        printf("Invalid number of the month");
    }
    
    printf ("The day of the year is: %d\n", firstday);
    
    if (leap = 1)
    {
        printf ("%d is a leap year\n", year);
    }
    else
    {
        printf ("%d is not a leap year\n", year);
    }
    
    return 0;
}
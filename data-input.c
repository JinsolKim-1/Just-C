#include <stdio.h>
#include <math.h>

int main()
{

    int days;
    float pi;

    printf("How many days in the week: ");
    scanf("%d", &days);
    printf("The value of Pi to two points: ");
    scanf("%f", &pi);
    
    float anchor = 0.001;

    if (days == 7 && fabs(pi == 3.14)<anchor)
    {
        printf("How many days in the week: %d\n", days);
        printf("The value of Pi to Two points: %0.2f\n", pi);
        printf("There are %d days in the week\n", days);
        printf("Pi value is %f\n", pi);
    }
    else
    {
        printf("some answers are wrong!");
    }
    
    return 0;
}
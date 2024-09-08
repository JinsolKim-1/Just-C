#include <stdio.h>

int main()
{
	int num1;
    int num2;
    int num3;
    int num4;
    int sum1;
    int sum2;
    
    while(1)
    {
        printf("Enter 1st number: ");
        scanf("%d", &num1);
        printf("Enter 2nd number: ");
        scanf("%d",&num2);
        printf("Enter 3rd number: ");
        scanf("%d", &num3);
        printf("Enter 4th number: ");
        scanf("%d",&num4);
        
        if (num1 == 99 && num2 == 0 || num3 == 99 && num4 == 0)
        {
            sum1 = num1 + num2;
            sum2 = num3 + num4;
            printf("Sum: %d\n",sum1);
            printf("Sum: %d\n", sum2);
            printf("Finish\n");
            break;
        }
        
        sum1 = num1 + num2;
        sum2 = num3 + num4;
        printf("Sum: %d\n", sum1);
        printf("Sum: %d\n", sum2);
    
        if(num1 == 0 || num2 == 0 || num3 == 0 || num4 == 0)
        {
            break;
        }
    }
    return 0;
}
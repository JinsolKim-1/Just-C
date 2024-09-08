#include <stdio.h>

int main()
{
    
    int num, sign = 1, pr; 
    char sym[] ="*#";
        
    printf("Input number: ");
    scanf("%d", &num);

	do
    {
        pr = 1;
        
        do
        {
            printf("%s", sym);
            pr++;
        }
        while(pr <= sign);

            printf("\n");  
            sign++;
    }    
    while(sign <= num);

	return 0;
}
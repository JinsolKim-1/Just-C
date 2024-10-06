#include <stdio.h>

int main()
{
    int input;
    char asterik[] = "*";
    char space[] = " ";

    printf("Input valid integer: ");
    scanf("%d", &input);

    //for the first hollowed right triangle
    for (int i = 1; i <= input && input <=20; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
            {
                printf("%s", asterik);
            }
            else
            {
                printf("%s",space);
            }
            
        }
        printf("\n");
    }
    //for 2nd hollowed mirrored right triangle
    for (int k = input; k >= 1; k--)
    {
        for (int l = 1; l <= input && input <=20; l++)
        {
            if (l == 1 || l == k)
            {
                printf("%s", asterik);
            }
            else
            {
                printf("%s", space);
            }
        }
        printf("\n");
    }
    
    return 0;
}
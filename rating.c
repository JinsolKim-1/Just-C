#include <stdio.h>

int main()
{
    float rate;
    //simple rate
    printf("input rating: ");
    scanf("%f", &rate);

    if (rate <= 6 && rate >= 5)
    {
        printf("very good\n");
    }
    else if (rate < 5 && rate >= 4)
    {
        printf("good\n");
    }
    else if (rate < 4 && rate >= 3)
    {
        printf("neutral\n");
    }
    else if (rate <3 && rate >= 2)
    {
        printf("bad\n");
    }
    else if (rate >= 1 && rate <= 2)
    {
        printf("very bad\n");
    }
    else
    {
        printf("input a valid rating (1-6)\n");
    }

    return 0;
}

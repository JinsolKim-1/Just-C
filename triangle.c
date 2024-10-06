#include <stdio.h>

int main()
{
    float x;
    float y;
    float z;
    float xyz;

    printf("Input 1st angle: ");
    scanf("%f", &x);
    printf("Input 2nd angle: ");
    scanf("%f", &y);
    printf("Input 3rd angle: ");
    scanf("%f", &z);

    xyz = x + y + z;
    if (xyz == 180)
    {
        printf("The angles %.2f,%.2f,%.2f is a valid triangle\n", x,y,z);
    }
    else if (xyz != 180)
    {
        printf("The angles %.2f,%.2f,%.2f is not a valid triangle\n", x,y,z);
    }
    else
    {
        printf("Input ""only"" positive integers ");
    }
    
    return 0;
}
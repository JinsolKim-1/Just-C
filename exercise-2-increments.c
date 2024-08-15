#include <stdio.h>
//#include <stdbool.h>

int main()
{
    int i,j,k;

    i = 1;
    j = i++;
    
    printf("%d",j);

    int f,g;

    f = 4;
    g = 2 * f++; //g = 8, multiply first before incrementing : f = 5
    f = 2 * --g; //g = 7, increment first before multiplying : f = 14

    printf("%d", f);

    return 0;
}

#include <stdio.h>
//#include <stdbool.h>

int main()
{
    int expression = 2* 3 % 5;
    int i,j,k,total;
    i = 100;
    j = 25;
    k = 13;
    total = (5 * ((j % k) + i) / (2 * k)) / 2;
    // (5 * ((25 % 13) + 100) / (2 * 13)) / 2
    // (5 * ((12) + 100) / (2 * 13)) / 2
    // (5 * (112 / 26)) / 2
    // 5 * 4.31 / 2
    // 21.55 / 2
    // 10.775
    printf("The answer is: %d\n ",expression);
    printf("The answer is: %d", total);

    return 0; 
}
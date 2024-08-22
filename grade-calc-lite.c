#include <stdio.h>

int main()
{
    float grade,grade2,grade3,grade4,grade5, average;
    char name[30];

    printf("Input student name: ");
    scanf ("%29s", &name);

    getchar();

    printf("Input 1st grade: ");
    scanf ("%f",&grade);

    printf("Input 2nd grade: ");
    scanf ("%f", &grade2);

    printf("Input 3rd grade: ");
    scanf ("%f", &grade3);

    printf("Input 4th grade: ");
    scanf ("%f", &grade4);

    printf("Input 5th grade: ");
    scanf ("%f", &grade5);

    average = ((grade + grade2 + grade3 + grade4 + grade5)/5);

    printf("NAME\t\tAVERAGE\n");
    printf("%s\t\t", name);
    printf("%0.2f", average);

    return 0;
}
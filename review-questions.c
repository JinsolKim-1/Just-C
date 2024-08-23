#include <stdio.h>
#include <stdbool.h>


int main()
{
    //1.  The following program brought to you for approval. Help him out
    int s;

    s = 56;

    printf("There are %d weeks in a year.\n", s);

    //2. what will each one print?
    printf("Baa Baa Black Sheep."); // Baa Baa Black Sheep.Have you any wool?
    printf("Have you any wool?\n");
    printf("Begone!\nO creature of lard!\n");
    /*Begone!
    O creature of lard!
    */
    printf("What?\nNo/nfish?\n");
    /*What?
    No/nfish?
    */

    int num;
    num = 2;

    printf("%d + %d = %d\n", num, num, (num + num));
    // 4

    //3. What is the final value of a and b?

    int a, b;
    a = 5;
    b = 2;
    b = a;
    a = b;

    printf("%d %d\n", b, a);
    // 5 5

    //4. What is the final value of x and y?

    int x, y;

    x = 10;
    y = 5;
    y = x + y;
    x = x*y;
    printf("%d %d\n", x, y);
    //150 15
    return 0;
}
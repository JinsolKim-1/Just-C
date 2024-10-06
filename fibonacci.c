#include <stdio.h>

int main()
{
    int input; 
    int first_num = 0; //default number for fibonacci
    int second_num = 1; //default number for fibonacci
    int third_num; //placeholder

    printf("input range of fibonacci sequence: \n");
    scanf("%d", &input); //input range

    printf("Fibonacci in a given range: \n"); //prints out the range of fibonacci
    printf("%d\n", first_num); // prints default number = 0
    printf("%d\n", second_num); // prints default number = 1

    for(int i = 0; i < input; i++) //if i is equal 0 and i is less than input, increment i by 1 
    {
        if (i <= 1) // if i <= 1, print out the default number of fibonacci
        {
            third_num = i; // third number is the default values 0 & 1
        }
        else
        {
            third_num = first_num + second_num; //if i is greater than 1 add the first and second num, then store it in third num
            printf("%d\n", third_num); //print out third num
            first_num = second_num; //first num takes the value of second number
            second_num = third_num; //second num takes the value of the third number
            //the first and second numbers need to adjust so that the third number can add both of them again to produce next fibo num
            
        }
    }
    
    return 0;
}
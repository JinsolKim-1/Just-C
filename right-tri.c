#include <stdio.h>

int main()
{
    int user_input;
    int sign = 1;
    int anchor;
    char symbol[] = "*#";

    printf("input number: "); 
    scanf("%d", &user_input); //gets the user's desired number of symbol
    
    do // runs the loop atleast once
    {
        anchor = 1; // anchor declared value. Only purpose is for how many times symbol must be printed
        
        do 
        {
            printf("%s", symbol); // will print even the user_input == 0 || 1
            anchor++; 
            
        } while (anchor <= sign); //if false do not print symbols, nextline, and increment sign

            printf("\n");
            sign++;
            
            
    } while (sign <= user_input); /*checks the number of nextline. 
                                   If sign is less than the input, run the do again*/
    
    return 0;
}
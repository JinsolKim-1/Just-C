#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

//BETA

int main()
{
    printf("Welcome to The Company\n");
    printf("Please create/login your info\n");

    char name[30];

    printf("Enter your username: \n");
    scanf ("%s", name);

    int letter1 = strlen(name);
    char letter2[30];
    sprintf(letter2, "%d", letter1);
    int letter3 = atoi(letter2);

    if (isupper(name[0]) && letter3 >= 3)
    {
        char pass[30];

        printf("Create a password: \n");
        scanf ("%s", pass);

        int word1 = strlen(pass);
        char word2[30];
        sprintf(word2, "%d", word1);
        int word3 = atoi(word2);

        if (word1 >= 8)
        {
            printf("Welcome, user\n");
        }
        else
        {
            printf("Password must be atleast 8 charcaters and must contain numbers\n");
        }
    }
    else
    {
        printf("Username must contain atleast 3 characters\n");
        printf("First letter in the username must be capitalized\n");
        printf("Username must not contain a number\n");
    }

    return 0;
}
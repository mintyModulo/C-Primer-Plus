// Write a program that creates an array with 26 elements and stores the 26 lowercase letters in it.
// Also have it show the array contents.

#include <stdio.h>
#define SIZE 26

int main(void)
{
    char lowercase[SIZE];
    char letter;

    for (letter = 0; letter < SIZE; letter++)
    {
        lowercase[letter] = 'a' + letter;
    }
    
    for (letter = 0; letter < SIZE; letter++)
    {
        printf("%c", lowercase[letter]);
    }

    printf("\n");
    
    return 0;
}
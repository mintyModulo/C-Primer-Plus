// Use nested loops to produce the following pattern:
// F
// FE
// FED
// FEDC
// FEDCB
// FEDCBA
// Note: If you system doesne use ASCII or some other code that encodes letters in numeric order, you can use the following to initialize a character array to the letters of the alphabet:
// char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
// Then you can use the array index to select individual letters; for example, lets[0] is 'A', and so on.

#include <stdio.h>

int main(void)
{
    const int ROWS = 7;
    int i;
    signed char letters;

    for (i = 0; i < ROWS; i++)
    {
        for (letters = 'F'; letters > 'F' - i; letters--)
        {
            printf("%c", letters);    
        }
        
        printf("\n");
    }

    return 0;
}
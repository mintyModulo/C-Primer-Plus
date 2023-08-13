// Have a program request the user to enter an uppercase letter. Use nested loops to produce a pyramid pattern like this:
//         A
//        ABA
//       ABCBA
//      ABCDCBA
//     ABCDEDCBA
// The pattern should extend to the character entered. For example, the preceding pattern would result from an input value of E.
// Hint: Use an outer loop to handle the rows. Use three inner loops in a row, one to handle the spaces, one for printing letters in ascending order, and one for printing letters in descending order.

#include <stdio.h>

int main(void)
{
    char userLetter;
    
    printf("Enter an uppercase letter: ");
    scanf("%c", &userLetter);

    char rows;

    for(rows = 'A'; rows <= userLetter; rows++)
    {
        int spaces;
        char ascending;
        char descending;
        
        for (spaces = 1; spaces <= userLetter - rows; spaces++)
        {
            printf(" ");
        }

        for (ascending = 'A'; ascending <= rows; ascending++)
        {
            printf("%c", ascending);
        }

        for(descending = rows - 1; descending >= 'A'; descending--)
        {
            printf("%c", descending);
        }

        printf("\n");
    }

    return 0;
}
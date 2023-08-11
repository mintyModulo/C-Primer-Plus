// Use nested loops to produce the following pattern:
// $
// $$
// $$$
// $$$$
// $$$$$

#include <stdio.h>
#define SIZE 5

int main(void)
{
    int rows;
    int dollarSigns;

    for(rows = 1; rows <= SIZE; rows++)
    {
        for(dollarSigns = 1; dollarSigns <= rows; dollarSigns++)
        {
            printf("$");
        }

        printf("\n");
    }

    return 0;
}
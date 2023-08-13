// Use nested loops to produce the following pattern:
// A
// BC
// DEF
// GHIJ
// KLMNO
// PQRSTU

#include <stdio.h>

int main(void)
{
    const int ROWS = 6;
    int i, j;
    int charactersInRow;
    char currentLetter = 'A';

    for (i = 0; i < ROWS; i++)
    {
        charactersInRow = i + 1;

        for (j = 0; j < charactersInRow; j++)
        {
            printf("%c", currentLetter);

            currentLetter++;
        }

        printf("\n");
    }

    return 0;
}
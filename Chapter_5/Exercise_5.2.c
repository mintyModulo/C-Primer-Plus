// Write a program that asks for an integer and then prints all the integers from (and including) that value up to a value larger by 10.
// (That is, if the input is 5, the output runs from 5 to 15.)
// Be sure to separate each output value by a space or tab or newline.

#include <stdio.h>

int main(void)
{
    unsigned int count; // declare variable

    // obtain value from user
    printf("Enter an integer >= 0: ");
    scanf("%u", &count);

    unsigned int maxCount = count;

    // count from input value to value + 10 and display to output
    while(count <= maxCount + 10)
    {   
        printf("%u\n", count);

        count++;
    }

    return 0;
}
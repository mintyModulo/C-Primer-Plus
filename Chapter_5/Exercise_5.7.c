// Write a program that requests a type double number and prints the value of the number cubed.
// Use a function of your own design to cube the value and print it.
// The main() program should pass the entered value to this function.

#include <stdio.h>

void cubedNumber(double userNumber);

int main(void)
{
    double userNumber;

    printf("Provide a number and it will be cubed: ");
    scanf("%lf", &userNumber);

    cubedNumber(userNumber);

    return 0;
}

void cubedNumber(double userNumber)
{
    double numberCubed;

    numberCubed = userNumber * userNumber * userNumber;

    printf("%lf\n", numberCubed);
}
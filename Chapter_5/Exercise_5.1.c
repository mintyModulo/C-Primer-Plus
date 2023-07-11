// Write a program that converts time in minutes to time in hours and minutes.
// Use #define or const to create a symbolic constant for 60.
// Use a while loop to allow the user to enter values repeatedly and terminate the loop if a value for the time of 0 or less is entered.

#include <stdio.h>
#define MINUTES_IN_HOURS 60

int main(void)
{
    int userInput;

    printf("Enter in the amount of minutes you would like to convert: (0 or less to quit): ");
    scanf("%d", &userInput);

    while(userInput > 0)
    {        
        int hours = userInput / MINUTES_IN_HOURS;
        int minutes = userInput % MINUTES_IN_HOURS;

        printf("This is %d hours and %d minutes\n", hours, minutes);

        printf("Enter in the amount of minutes you would like to convert: (0 or less to quit): ");
        scanf("%d", &userInput);
    }

    return 0;
}
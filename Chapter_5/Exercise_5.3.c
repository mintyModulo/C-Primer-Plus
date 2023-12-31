// Write a program that asks the user to enter the number of days and then converts that value to weeks and days.
// For example, it would vonert 18 days to 2 weeks, 4 days.
// Display results in the following format:
// 18 days are 2 weeks, 4 days.
// Use a while loop to allow the user to repeatedly enter day values; terminate the loop when the user enters a nonpositive value, such as 0 or -20.

#include <stdio.h>

int main(void)
{
    const unsigned int daysInWeek = 7;
    int numberOfDays;

    printf("%s", "Enter in the number of days to convert (<= 0 to end): ");
    scanf("%d", &numberOfDays);

    while(numberOfDays > 0)
    {
        unsigned int totalWeeks = (unsigned int) numberOfDays / daysInWeek;
        unsigned int daysRemainig = (unsigned int) numberOfDays % daysInWeek;

        printf("%u days are %u weeks, %u days\n", (unsigned int) numberOfDays, totalWeeks, daysRemainig);
        printf("%s", "Enter in the number of days to convert (<= 0 to end): ");
        scanf("%u", &numberOfDays);
    }
    
    printf("%s", "Exiting now.\n");

    return 0;
}
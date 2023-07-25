// Write a program that asks the user to enter a height in centimeters and then displays the height in centimeters and in feet and inches.
// Fractional centimeters and inches should be allowed, and the program should allow the user to continue entering heights until a nonpositive value is entered.
// A sample run should look like this:
// Enter a height in centimeters: 182
// 182.0 cm = 5 feet, 11.7 inches
// Enter a height in centimeters (<=0 to quit): 168.7
// 168.0 cm = 5 feet, 6.4 inches
// Enter a height in centimeters (<=0 to quit): 0
// bye

#include <stdio.h>

int main(void)
{
    const float centimetersInInch = 2.54;
    const float inchesInFoot = 12.0;
    float userCentimeters;
    
    printf("Enter your height in centimeters: ");
    scanf("%f", &userCentimeters);

    while(userCentimeters > 0)
    {
        int userInFeet = (int)((userCentimeters / centimetersInInch) / inchesInFoot);
        float userRemainingCentimeters = userCentimeters - (userInFeet * inchesInFoot * centimetersInInch);
        float userInInches =  userRemainingCentimeters / centimetersInInch;
        
        printf("%.1f cm = %.1d feet, %.1f inches\n", userCentimeters, userInFeet, userInInches);

        printf("Enter your height in centimeters (<=0 to quit): ");
        scanf("%f", &userCentimeters);
    }

    return 0;
}
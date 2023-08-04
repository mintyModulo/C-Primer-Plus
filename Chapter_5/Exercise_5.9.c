// Write a program that requests the user to enter a Fahrenheit temperature.
// The program should read the temperature as a type double number and pass it as an argument to a user-supplied function called Temperatures().
// This function should calculate the Celsius equivalent and the Kelvin equivalent and display all three temperatures with a precision of two places to the right of the decimal.
// It should identify each value with the temperature scale it represents.
// Here is the forumula for converting Fahrenheit to Celsius:
// Celsius = 5.0 / 9.0 * (Fahrenheit - 32.0)
// The Kelvin scale, commonly used in science, is a scale in which 0 represents absolute zero, the lower limit to possible temperatures.
// Here is the formula for converting Celsious to Kelvin:
// Kelvin = Celsius + 273.16
// The Temperatures() function should use const to create symbolic representation of the three constants that appear in the conversions.
// The main() function should use a loop to allow the user to enter temperatures repeatedly, stopping when a q or other nonnumeric value is entered.
// Use the fact that scanf() returns the number of items read, so it will return 1 if it reads a number, but it won't return 1 if the user enters q.
// The == operator tests for equality, so you can use it to compare the return value of scanf() with 1.

#include <stdio.h>

void Temperatures(double a);

int main(void)
{
    double userFahrenheit;

    printf("Enter the temperature in fahrenheit: ");
    scanf("%lf", &userFahrenheit);

    Temperatures(userFahrenheit);

    return 0;
}

void Temperatures(double fahrenheit)
{
    double celsius;
    double kelvin;
    const double firstCelsiusCalculation = (5.0 / 9.0);
    const double secondCelsiusCalculation = 32.0;
    const double firstKelvinCalculation = 273.16;
    
    celsius = firstCelsiusCalculation * (fahrenheit - secondCelsiusCalculation);
    kelvin = celsius + firstKelvinCalculation;

    printf("Fahrenheit = %.2lf\n", fahrenheit);
    printf("Celsius = %.2lf\n", celsius);
    printf("Kelvin = %.2lf\n", kelvin);
}
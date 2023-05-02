/*
    Convert Celsius to Fahrenheit
        The formula to convert from Celsius to Fahrenheit is the temperature in Celsius times 9/5, plus 32.

        You are given a variable celsius representing a temperature in Celsius. Use the variable fahrenheit already defined and assign it the Fahrenheit temperature equivalent to the given Celsius temperature. Use the formula mentioned above to help convert the Celsius temperature to Fahrenheit.
*/

#include <stdio.h>

float celsius_to_fahrenheit(float celsius)
{
    float fahrenheit = (celsius * 9 / 5) + 32;
    return fahrenheit;
}

int main()
{
    float celsius = 30;
    float fahrenheit = celsius_to_fahrenheit(celsius);
    printf("%.2f Celsius is %.2f Fahrenheit", celsius, fahrenheit);
    return 0;
}

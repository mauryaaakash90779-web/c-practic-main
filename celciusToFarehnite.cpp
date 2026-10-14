// #include <stdio.h>

// int main() {
//     float celsius, fahrenheit;

//     printf("Enter temperature in Celsius: ");
//     scanf("%f", &celsius);

//     fahrenheit = (celsius * 9 / 5) + 32;

//     printf("Fahrenheit = %.2f", fahrenheit);

//     return 0;
// }

// This program converts Fahrenheit to Celsius.
#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("Celsius = %.2f", celsius);

    return 0;
}
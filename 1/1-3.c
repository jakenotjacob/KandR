#include <stdio.h>

/*Print fahrenheit-celsius comparison table*/

int main ()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;   // Lower limit of temp table
    upper = 300; // Upper limit
    step = 20;   // Step size

    printf("Fahrenheit\tCelsius\n");

    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%10d\t%7d\n", fahr, celsius);
        fahr = fahr + step;
    }
}

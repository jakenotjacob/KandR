#include <stdio.h>

/*Print fahrenheit-celsius comparison table*/

int main ()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;   // Lower limit of temp table
    upper = 300; // Upper limit
    step = 20;   // Step size

    printf("Fahrenheit\tCelsius\n");

    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%10.2f\t%7.2f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

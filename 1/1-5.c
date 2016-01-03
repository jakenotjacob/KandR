#include <stdio.h>

/*Print fahrenheit-celsius comparison table*/

int main ()
{
    float fahr, celsius;

    printf("Fahrenheit\tCelsius\n");

    for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%10.2f\t%7.2f\n", fahr, celsius);
    }
}

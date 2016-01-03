#include <stdio.h>

int main ()
{
    float celsius, fahr;

    int lower = 0;
    int step = 10;
    int upper = 200;

    printf("Celsius\tFahrenheit\n");

    celsius = lower;
    while (celsius <= upper) {
        fahr = celsius * 1.8 + 32;
        printf("%2.2f\t%2.2f\n", celsius, fahr);
        celsius = celsius + step;
    }
}

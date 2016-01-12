#include <stdio.h>

float to_celsius(float);

float to_celsius(float f){
    float c;
    c = (5.0/9.0) * (f-32.0);
    return c;
}



int main() {
    printf("Fahrenheit\tCelsius\n");

    float celsius;
    for (float  fahr = 0.0; fahr <= 300.0; fahr = fahr + 20.0) {
        celsius = to_celsius(fahr);
        printf("%10.2f\t%7.2f\n", fahr, celsius);
    }
}

#include <stdio.h>

int main ()
{
    int c = (getchar() != EOF);
    while (c != 1){
        putchar(c);
    }
}

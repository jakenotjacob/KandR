#include <stdio.h>

int main ()
{
    int c, prev;
    while ((c = getchar()) != EOF)
        if (prev == ' ' && c == ' ')
            ;
        else {
            prev = c;
            putchar(c);
        }
}

#include <stdio.h>

int main ()
{
    int c, b, t, n;
    b, t, n = 0;
    while ((c = getchar()) != EOF)
        if (c == '\t')
            ++t;
        else if (c == ' ')
            ++b;
        else if (c == '\n')
            ++n;
    printf("Blanks: %d, Tabs: %d, Newlines: %d\n", b, t, n);
}

#include <stdio.h>
#define MAXLEN 1000
#define j

int get_line(char line[], int max);

int main()
{
    int len;
    char line[MAXLEN];
    while((len = get_line(line, MAXLEN)) > 0)
        if (len >= 80)
            printf("%s\n", line);
        //dothing
}

int get_line(char line[], int max)
{
    int c, i;

    for(i=0; (i < MAXLEN) && ((c=getchar()) != EOF) && (c!='\n');++i)
        line[i] = c;
    if (c == '\n'){
        line[i] = '\0';
        ++i;
    }
    return i;
}

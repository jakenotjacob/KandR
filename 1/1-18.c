#include <stdio.h>
#define MAXLEN 1000

int get_line(char line[], int len);

int main()
{
    int len;
    char line[MAXLEN];

    while ((len = get_line(line, MAXLEN)) > 0)
        printf("%s\n", line);
}

int get_line(char line[], int len)
{
    int i, c;
    for(i=0; (i<len) && ((c=getchar())!=EOF) && (c!='\n'); ++i)
        if ((c == '\t') || (c == ' '))
            --i;
        else
            line[i] = c;
    if (c == '\n') {
        line[i] = '\0';
        ++i;
    }
    return i;
}

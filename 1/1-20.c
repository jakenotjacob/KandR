#include <stdio.h>
#define TABSTOPS 2
#define MAXLEN 1000

int get_line(char s[], int lim);

int main()
{
    int len;
    char line[MAXLEN];
    while((len = get_line(line, MAXLEN)) > 0)
        printf("%s", line);
}

int get_line(char s[], int lim)
{
    int i, c;

    for(i=0; i<lim-1 && (c = getchar())!=EOF && c!='\n' && c!= '\t'; ++i)
        s[i] = c;

    /* Detab here */
    if (c == '\t') {
        int t;
        for(t = TABSTOPS; t > 0; --t) {
            s[i] = ' ';
            ++i;
        }
    }else if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}


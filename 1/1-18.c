#include <stdio.h>
#define MAXLEN 1000

int get_line(char input[], int len);

int main()
{
    int len;
    char input[MAXLEN];

    while ((len = get_line(input, MAXLEN)) > 0)
        printf("%s\n", input);
}

int get_line(char input[], int len)
{
    int i, c;
    for(i=0; (i<len-1) && (c=getchar())!=EOF && (c!='\n'); i++)
        if ((c == '\t') || (c == ' '))
            ;
        else
            input[i] = c;
    return i;
}

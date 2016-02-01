#include <stdio.h>
#define MAXLEN 1000

int get_line(char line[], int maxline);
int reverse(char r[], char s[], int len);

int main()
{
    int len;
    char line[MAXLEN];
    char rline[MAXLEN];

    while ((len = get_line(line, MAXLEN)) > 0){
        printf("%d:", len);
        printf("%s\n", line);
        reverse(rline, line, len);
        printf("Reversed: %s\n", rline);
    }
}

int get_line(char s[], int lim)
{
    int c, i;

    for(i=0; i<lim-1 && (c = getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

int reverse(char r[], char s[], int len)
{
    int i;
    for(i=0; i < len; ++i) {
        r[i] = s[len-1-i];
    }
    r[i] = '\0';
}


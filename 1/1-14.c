#include <stdio.h>

//97-122: a-z

#define ALPH_LEN 26

int main ()
{
    int chars[ALPH_LEN];
    int c;

    for(int i = 0; i < ALPH_LEN; i++)
        chars[i] = 0;

    while ((c = getchar()) != EOF)
        ++chars[c-97];

    for(int i = 0; i < ALPH_LEN; i++) {
        printf("%c|", (i+97));
        for(int t = chars[i]; t > 0; --t){
            printf("*");
        }
        printf("\n");
    }
}

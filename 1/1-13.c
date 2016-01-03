#include <stdio.h>

#define MAX_LEN 10
#define IN  1
#define OUT 0


int main()
{
    int len[MAX_LEN];
    int c, state, wlen;

    for(int i = 0; i < MAX_LEN; ++i)
        len[i] = 0;

    state = OUT;
    wlen = 0;
    while((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
            ++len[wlen];
        }
        else if (state == OUT) {
            wlen = 0;
            state = IN;
        }
        else {
            ++wlen;
        }
    }

    for(int i = 0; i < MAX_LEN; ++i){
        printf("%2d|", i+1);
        for (int x = len[i]; x > 0; --x){
            printf("*");
        }
        printf("\n");
    }

}

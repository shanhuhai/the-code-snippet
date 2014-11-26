#include <stdio.h>

#define CHAR ' '
int main()
{
    int c, i=0;
    while((c = getchar()) != EOF)
        if (c == CHAR) {
            ++i;
        } else if(c != CHAR && i>0) {
            putchar(CHAR);
            putchar(c);
            i = 0;
        } else
            putchar(c);

}

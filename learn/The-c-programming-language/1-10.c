#include <stdio.h>

int main()
{
    int c, i=0;
    while((c = getchar()) != EOF)
        if (c == '\t')
            printf("\\t");
        else if(c == '\b')
            printf("\\b");
        else
            putchar(c);
}

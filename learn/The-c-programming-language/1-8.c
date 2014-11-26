#include <stdio.h>
int main()
{
    /* nb 空格 nt 制表符，nn 换行符*/
    int c, nb, nt, nn;

    nb = nt = nn = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++nb;
        else if (c == '\t')
            ++nt;
        else if (c == '\n')
            ++nn;
        else if (c == 'q')
            break;

    }
    printf("%d %d %d\n", nb, nt, nn);

}

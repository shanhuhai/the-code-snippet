#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int maxlimit);
int myrtrim(char line[], int len);

int main()
{
    int len;
    char line[MAXLINE];

    while ((len = getLine(line, MAXLINE)) > 0){
        myrtrim(line, len);
        printf("%s", line, len);
    }

    return 0;
}

int getLine(char s[], int lim)
{
    int c, i;
    for(i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i )
        s[i] = c;
    if(c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

int myrtrim(char s[], int len)
{
    int tail = 1;
    while (len>=0) {
        if ((s[len-1] == ' ' || s[len-1] == '\t') && tail)
            s[len-1] = '\0';
        else if ((s[len-1] != ' ' && s[len-1] != '\t') )
            tail = 0;
        --len;
    }
    return 0;
}

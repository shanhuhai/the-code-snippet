#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int maxlimit);
int reverse(char line[]);

int main()
{
    int len;
    char line[MAXLINE];

    while ((len = getLine(line, MAXLINE)) > 0){
        reverse(line);
        printf("%s", line);
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

int reverse(char s[])
{
    int i,length = 0,tmp;
    while (s[length] != '\0') {
        ++length;
    }
    --length;
    for (i=0; i<=length/2-1; i++) {
        tmp = s[i];
        s[i] = s[length-i-1];
        s[length-i-1] = tmp;
    }

    return 0;
}

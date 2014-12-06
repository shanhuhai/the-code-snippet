#include <stdio.h>
#define MAXLINE 1000
#define N 5

int getLine(char line[], int maxlimit);
int replace(char line[], char newLine[], char from, char to);

int main()
{
    int len;
    char line[MAXLINE];
    char newLine[MAXLINE];

    while ((len = getLine(line, MAXLINE)) > 0) {
        replace(line, newLine,'\t', 'x');
        printf("%s", newLine);
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

int replace(char s[], char ns[] ,char from, char to)
{

    int i = 0;
    int j = 0;
    int mi = 0;
    while (s[i] != '\0') {
        printf("0--%c\n", s[i]);
        if (s[i] == from) {
        printf("1--%c\n", s[i]);
            for(j=0 ; j<N ; ++j) {
     //           printf("4--%c\n", to);
                ns[i+mi+j] = to;
                ++mi;
            }
        } else {
           // printf("2--%c\n", s[i]);
           if(mi > 0)
               ns[i+mi-1] = s[i];
           else
               ns[i+mi] = s[i];
        }
        ++i;
    }

    int m = 0;
    for(;m<30;m++) {

        printf("5--%c\n", ns[m]);
    }

   // printf("3--%s\n", ns);
   // ns[i+mi] = '\0';

    return 0;
}



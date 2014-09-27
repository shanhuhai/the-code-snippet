/**
 * 比较两个字符串是否相等
 */
#include <stdio.h>
int main(){

    char s[10],t[10];
    int f(char *, char *);
    int r;
    scanf("%s", s);
    scanf("%s", t);

    r = f(s,t);
    if(r){
        printf("equal");
    } else {
        printf("unequal");
    };

    return 0;
}

int f(char *s,char *t){
    int i=0;
    while(*(s+i)==*(t+i) && *(s+i)!='\0'){
        i++;
    }
    return *(s+i) == '\0' && *(t+i) == '\0' ? 1: 0;
};


#define N 5
#include <stdio.h>
#include <string.h>

int main(){
    char str[40],*p,str2[40],*q;
    int i,len,tmp,j;

    p=str;
    q=str2;
    printf("Input a string:");
    scanf("%s",p);

    len=strlen(p);
    for(i=0;i<len;i++){
        if(i>=N){
            j=i-N;
            *(q+j)=*(p+i);
        }
    }

    printf("%s", q);
    return 0;
}


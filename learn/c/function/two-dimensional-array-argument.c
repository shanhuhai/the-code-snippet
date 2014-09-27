/**
 * 选出输入的5个字符串中最长的字符串
 **/
#include <stdio.h>
#include <string.h>
int main(){

    char str[5][81];
    int i,p;
    void maxStr(char (*)[81], int * );

    for(i=0;i<5;i++){
            scanf("%s",str[i]);
    }

    maxStr(str,&p);

    printf("The longest string is %s",*(str+p));
    return 0;
}

void maxStr(char (*p)[81],int *key){
    int i;
    for(i=0;i<5;i++){
        if(strlen(*(p+*key)) < strlen(*(p+i))){
            *key=i;
        }
    }
};


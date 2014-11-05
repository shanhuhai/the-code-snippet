#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fp;
    char ch;
    fp = fopen("hello.txt","r");

    if(NULL == fp){
        printf("hello.txt is not exist\n");
    }
    ch = fgetc(fp);
    while(ch!=EOF){
        putchar(ch);
        ch=fgetc(fp);
    }

    fclose(fp);
    return 0;
}


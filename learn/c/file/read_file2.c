#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fp;
    char ch;
    if((fp=fopen("/Users/shanhuhai/wwwroot/code-snippet/learn/c/file/hello.txt","r"))==NULL){
            printf("\nCannot open file strike any key exit!");
            exit(1);
        }
    ch=fgetc(fp);
    while(ch!=EOF){
    //while(feof(fp)){
     //       putchar(ch);
        printf("%c",ch);
            ch=fgetc(fp);
        }
    fclose(fp);
    return 0;
}

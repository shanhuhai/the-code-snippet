#define M 3
#define N 2
#include <stdio.h>
#include <string.h>
void printArray(int *p){
	while(*p){
		printf("%d\n",*p++);
	}
}

int main(){
    char str[40],*p;
    int i,len,tmp,j;

    p=str;
    printf("Input a string:");
    scanf("%s",p);

    len=strlen(p);
    for(i=0;i<len;i++){
        if(i>=N && i<M+N-1){
            printf("\n");
            j=N+M-(i-N);
            tmp = *(p+j-1);
            *(p+j-1) = *(p+i);
            *(p+i) = tmp;
        }
    }

    printf("%s", p);
    return 0;
}


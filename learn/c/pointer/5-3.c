#include <stdio.h>
#include <string.h>
int main(){
	char str[40],*p;
	int i,len;

	p=str;
	printf("Input a string:");
	scanf("%s",p);

	len=strlen(p);
	for(i=0;i<len;i=i+2){
    printf("%c",*(p+i));
	}

	return 0;
}


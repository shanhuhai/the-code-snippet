#include <stdio.h>
#include <string.h>
int main(){
	char str1[40],*s1;
	int i,len;

	s1=str1;
	printf("Input a string:");
	scanf("%s",s1);

	len=strlen(s1);	
	for(i=0;i<len;i++){
		if(*(s1+i)!=*(s1+len-i-1)){
			printf("这不是一个回文");	
			return 0;
		}
	}

	printf("这是一个回文");	
	return 0;
}


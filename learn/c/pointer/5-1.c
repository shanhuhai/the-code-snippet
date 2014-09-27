#include <stdio.h>
#include <string.h>
int main(){
	char str1[40],str2[40],*s1,*s2;
	int len1,len2,i;
	s1=str1;
	s2=str2;
	printf("Input first string:");
	gets(s1);
	printf("Input second string:");
	gets(s2);

	i=0;
	len1 = strlen(s1);	
	len2 = strlen(s2);	
	if(len1!=len2){
		printf("The strings are not equal.");
	} else {
		while(i<len1){
			if(*(s1+i)!=*(s2+i)){
				printf("The strings are not equal.");
			}
			i++;
		}	

		printf("The strings are equal.");
	}	

	return 0;
}
#include <stdio.h>
void printArray(int *p){
	while(*p){
		printf("%d\n",*p++);
	}
}
int main(){
	int a[]={10,29,33,19,22,44};
	int num,i,j,tmp;
	num = sizeof(a)/sizeof(a[0]);
	for(i=0;i<num;i++){
		for(j=0;j<num-1;j++){
			if(a[j]>a[j+1]){
				tmp = a[j];	
				a[j] = a[j+1];	
				a[j+1] = tmp;
			}	
		
		}
	}		
	printArray(a);
	return 0;
}

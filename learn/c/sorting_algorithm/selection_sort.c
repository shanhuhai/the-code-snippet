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
	for(i=0;i<num-1;i++){
		for(j=i+1;j<num;j++){
			if(a[i]>a[j]){
				tmp = a[i];	
				a[i] = a[j];	
				a[j] = tmp;
			}	
		
		}
	}		
	printArray(a);
	return 0;
}


/**
 * 有序号为1-N的N个人围成一圈，报数 1-e，报到e那个人就出列，求最后留下的那个人的序号 
 */ 
#include <stdio.h>
#include <stdlib.h>
int main(){
	int *p,n,e,i,k,m; 
	printf("Please input n:\n");
	scanf("%d",&n);
	printf("Please input e:\n");
	scanf("%d",&e);

	p = (int *)malloc(n*sizeof(int));

	for(i=0;i<n;i++){
	
		*(p+i) = i+1;
	}	
	i=k=m=0;//i为一圈人的序号，k为1-e的报数，m为已退出的人数
	while(m<n-1){
		if(*(p+i) != 0 ) {
			k++;	
		}
		if(k==e) {
			*(p+i) = 0;	
			k=0;
			m++;
		}	
		i++;
		if(i==n) {
			i =0;	
		}
	}
	while(*p==0){
		p++;	
	}
	printf("The number is %d", *p);
	return 0;
}
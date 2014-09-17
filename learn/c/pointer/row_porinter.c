#define N 3
#define M 4
#include <stdio.h>
int main(){
	int a[N][M], (*p)[4],i,j;
	p=a;
	printf("please input 12 numbers:");
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			scanf("%d",*(p+i)+j);
		}
	}	

	for(i=0;i<N;i++){
		printf("\n ");
		for(j=0;j<M;j++){
			printf("%5d",*(*(p+i)+j));
		}
	}	
	return 0;
}
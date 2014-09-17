/**
 * 有五个同学的成绩，计算出有不及格成绩的同学的序号
 */ 
#define M 5
#define N 4
#include <stdio.h>
int main(){
	int score[M][N] = {
		{90,44,78,99},
		{90,33,24,99},
		{90,61,78,99},
		{90,89,78,99},
		{11,89,78,99}
	},i,j,detect,(*p)[4];

	p = score;
	for(i=0; i<M; i++){
		detect = 0;
		for(j=0;j<N;j++){
			if( *(*(p+i)+j) <60){
				detect = 1;
				break;
			}	
		}
		if(detect){
			printf("No %d student's score is:",i+1);	
			for(j=0;j<N;j++){
				 printf("%4d", *(*(p+i)+j) );
			}
			printf("\n");
		}
	}

	return 0;
}
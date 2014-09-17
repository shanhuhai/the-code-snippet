/**
 * 输入n个学生的成绩，输出排在前M个的成绩
 */

#include <stdio.h>
#include <stdlib.h>
int main(){
	int m,n, *p;
	int i,j,tmp;
	printf("please input the number of students:\n");
	scanf("%d",&n);	

	printf("please input the number of students at the top:\n");
	scanf("%d",&m);	

	p = (int *)malloc(n*sizeof(int));

	//输入学生成绩
	printf("please input the students' mark :\n");
	i=0;	
	while(i<n){
		scanf("%d",p+i);
		i++;
	}

	printf("The students' mark you input is :\n");
	while(*p){
		printf("%d\n",*p++);	
	}
	p = p-n;

	printf("The result is:\n");	
	//进行选择排序
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(*(p+i)<*(p+j)){
				tmp = *(p+i);	
				*(p+i) = *(p+j);
				*(p+j) = tmp; 
			}	
		}
		if(i<m){
			printf("%d\n",*(p+i));
		} else {
			break;
		}
	}

	//释放内存
	free(p);
	return 0;
}

/**
 * 比较两个数的大小
 */
#include <stdio.h>
int main(){

    char * longer(char *,char *); //定义一个指向 返回int 的函数的函数指针,指向max
    char stra[80], strb[80],*p,*q,*r;
    p=stra;
    q=strb;
    scanf("%s", p);
    scanf("%s", q);
    r = longer(p,q);

    printf("The longer string is %s", r);
    return 0;
}

char *longer(char *p,char *q){
    int i=0,j=0;
    while(*(p+i)!='\0'){
        i++;
    }
    while(*(q+j)!='\0'){
        j++;
    }
    printf("%s\n",p);
    printf("%s\n",q);
    printf("%d\n",i);
    printf("%d\n",j);
    if(i>=j){
        return p;
    } else {
        return q;
    }


}


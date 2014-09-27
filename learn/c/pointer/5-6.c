/**
 * php中strpos的原型
 */
#include <stdio.h>
#include <string.h>

int main(){
    char str[40],*p,str2[40],*q;
    int i,j,num,len1,len2,detect;

    p=str;
    q=str2;
    printf("Input a string:");
    scanf("%s",p);
    printf("Input another string:");
    scanf("%s",q);

    len1 = strlen(p);
    len2 = strlen(q);

    if(len2>len1){
        printf("NOa\n");
    }else{
        num =0;
        for(i=0;i<len1;i++){
            detect = 1;
            for(j=0;j<len2;j++){
                if(*(p+i+j)!=*(q+j)) {
                    detect = 0;
                    break;
                }
            }
            if(detect){
                num++;
                printf("the location is %d\n",i+1);
            }
        }
        if(num>0){
           printf("There were %d times\n",num);
        } else {
           printf("NO\n");
        }
    }
    return 0;
}


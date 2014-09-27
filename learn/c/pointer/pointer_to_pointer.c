#include <stdio.h>
int main(){
	int a[3][4]={21,23,22,11,9,34,22,44,224,332,55,331},*p1,*p2,**p3,i,j;
//使用二级指针，
    for(i=0;i<3;i++){
        p2=a[i];
        p3=&p2;

        printf("\n");
        for(j=0;j<4;j++) {
            printf("%4d",*(*p3+j));
        }
    }

    for(i=0;i<3;i++){

        printf("\n");
        for(p2=a[i];p2-a[i]<4;p2++) {
            p3=&p2;
            printf("%4d",**p3);
        }
    }


//没事用使用二级指针，使用了一级指针

    for(i=0;i<3;i++){
        p2=a[i];

        printf("\n");
        for(j=0;j<4;j++) {
            printf("%4d",*(p2+j));
        }
    }

    for(i=0;i<3;i++){

        printf("\n");
        for(p2=a[i];p2-a[i]<4;p2++) {
            printf("%4d",*p2);
        }
    }



}

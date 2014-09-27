/**
 * 比较两个数的大小
 */
#include <stdio.h>
int main(){

    int max(int, int);
    int show(char *);
    void loop(int, int (*)(char *));
    int (*p)(int, int); //定义一个指向 返回int 的函数的函数指针,指向max
    int (*q)(char *); //指向show

    int a,b,c;

    scanf("%d",&a);
    scanf("%d",&b);

    p = max;
    q = show;

    c = (*p)(a,b);
    loop(5, q);

    printf("The max number is %d", c);
    return 0;
}
void loop(int num, int (*q)(char *)){
    char *p= "lalala";
    while(num-->0){
        (*q)(p);
    }

}

int show(char *p){
    printf("the message is %s\n", p);
    return 0;
}

int max(int x, int y){

    return x>y?x:y;
}



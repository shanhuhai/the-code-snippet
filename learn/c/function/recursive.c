/**
 * Calculate the factorial of a number
 **/

#include <stdio.h>
int main(){
    int factorial(int );
    int n,result;
    printf("Please input a intger:\n");
    scanf("%d",&n);
    result = factorial(n);
    printf("The factorial result is:%d",result);
    return 0;
}

int factorial(int n){
    if(n>0){
        return n*factorial(n-1);
    } else {
        return 1;
    }
}


#include <stdio.h>
int main(int argc, char *argv[]){
	printf("The number of arguments is %d\n",argc);
    int i=0;
    while(i<argc){
        printf("%s \n",argv[i]);
        i++;
    }
}

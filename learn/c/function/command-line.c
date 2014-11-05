/**
 * command line parameter
 **/

#include <stdio.h>
int main(int argc, char *argv[]){
    int i=0;
    printf("The parameter num is %d\n", argc);
    printf("The parameters :\n");
    while(argv[i]){
        printf("%s\n", argv[i++]);
    }

        return 0;
}



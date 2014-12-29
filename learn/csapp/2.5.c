#include <stdio.h>
typedef unsigned char *byte_pointer;

int show_bytes(byte_pointer start, int len){
    int i;
    for(i = 0; i < len; i++)
        printf("%.2x", start[i]);
    printf("\n");
    return 0;
}

int main(){
    int val=0x87654321;
    byte_pointer valp=(byte_pointer) &val;
    show_bytes(valp, 1);
    show_bytes(valp, 2);
    show_bytes(valp, 3);
    show_bytes(valp, sizeof(int));
}


/**
 * 小端  大端
 * 21 78
 * 2143 7856
 * 214365 785643
 */

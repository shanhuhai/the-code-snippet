#include <stdio.h>
typedef unsigned char *byte_pointer;

int show_bytes(byte_pointer start, int len){
    int i;
    for(i = 0; i < len; i++)
        printf("%.2x", start[i]);
    printf("\n");
    return 0;
}

int show_int(int x){
    show_bytes((byte_pointer) &x, sizeof(int));
    return 0;
}

int show_float(float x){
    show_bytes((byte_pointer) &x, sizeof(float));
    return 0;
}
/*
int show_pointer(void *x){
    show_bytes((byte_pointer) &x, sizeof(void *x));
    return 0;
}

*/
int main(){
    show_int(12345);
    show_float(12345.0);
    show_bytes("12345", 6);
    return 0;
}

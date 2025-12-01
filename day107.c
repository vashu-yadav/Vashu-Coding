#include <stdio.h>

struct mix {
    int a:3;
    int b:4;
    int c:5;
};
void main(){
    struct mix m = {12,15,24};
    printf("%d %d %d",m.a,m.b,m.c);
}
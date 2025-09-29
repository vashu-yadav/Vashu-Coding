//practice questions
#include<stdio.h>
void main(){
    int a=100;
    float b=200.5;
    void *vp;

    vp=&a;
    printf("%u,%d", vp,*((int*)vp));
    vp=&b;
    printf("\n%u,%.2f", vp,*((float*)vp));
}
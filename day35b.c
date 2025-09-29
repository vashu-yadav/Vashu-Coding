//practice questions

#include<stdio.h>
void main(){
    int a=10;
    int b=12;
    int *p=&a;
    *p=*p+5;
    printf("\na=%d", a);
    p=&b;
    *p=*p-5;
    printf("\nb=%d", b);
}
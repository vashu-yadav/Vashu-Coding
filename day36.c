//practice questions

#include<stdio.h>
void main(){
    int a,b;
    char *p;
    p=(char*)&a;

    a=511;
    p=&a;
    b=*p;
    printf("%d.%d,%d",a,b,*p);
    *p=10;
    printf("%d,%d,%d",a,b,*p);
}
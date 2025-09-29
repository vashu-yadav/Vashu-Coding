//practice questions

#include<stdio.h>
void main(){
    int a=10,b=12;
    int *p,*q;
    int *t;
    p=&a,q=&b;
    printf("%d,%d",a,b);
    printf("%d,%d",*p,*q);
    t=p;
    p=q;
    q=t;
    printf("%d,%d",a,b);
    printf("%d,%d",*p,*q);
}
//practice questions

#include<stdio.h>
void main(){
    int a=10,b=12;int t;
    int *p=&a;
    int *q=&b;
    printf("%d,%d",a,b);
    t=*p;
    *p=*q;
    *q=t;
    printf("%d,%d",a,b);
}
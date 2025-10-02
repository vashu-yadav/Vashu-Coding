//practice questions

#include<stdio.h>
void main(){
    int a=10,*b,**c,***d;
    b=&a;
    c=&b;
    d=&c;
    printf("%d,%d,%d", a+*b,a+*b+**c,a+*b+**c+***d);
}
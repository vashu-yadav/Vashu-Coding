//practice questions

#include<stdio.h>
void main(){
    int a =10;
    int *p; //wild pointer and bad pointer
    p=&a;
    printf("%d\n", *p);
}
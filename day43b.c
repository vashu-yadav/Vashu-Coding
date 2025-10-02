//practice questions

#include<stdio.h>
void main(){
    int a[]={10,20,30,40,50,};
    int *p;
    p=a+2;
    printf("%d",*p);
    ++p;
    printf(" %d",*p);
    p=p-2;
    printf(" %d",*p);
}
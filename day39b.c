//practice questions

#include<stdio.h>
void main(){
    int a[]={10,20,30,40,50};
    int*p=&a[2];
    printf("\n %u",p);
    p=p+2;
    printf("\n %u",p);
}
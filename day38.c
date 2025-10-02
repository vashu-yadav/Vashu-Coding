//practice question

#include<stdio.h>
void main(){
    int a=10;
    int *p,**ptr;
    p=&a;
    ptr=&p;
    printf("address of a = %u,%u,%u,%u,%u",&a,p,*(&p),**(&ptr),*ptr);
    printf("adress of p = %u,%u,%u",&p,ptr,*(&ptr));
    printf(" address of ptr = %u",&ptr);
    printf("value of a = %d,%d,%d,%d",a,*p,**ptr,**(&ptr));
    printf("value of p = %d,%d",p,*ptr);
    printf("value of ptr = %d",ptr);
    
}

//practice questions 

#include<stdio.h>
void main(){
    int a=10;
    printf("%x,%X,%u", &a,&a,&a);
    printf("%d,%d", a,*(&a));
}
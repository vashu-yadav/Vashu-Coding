//practice questions

#include<stdio.h>
void main()
{

    int a= 10;
    printf("d", sizeof(a++) + sizeof(++a) + sizeof(a++));
    printf("%d",a);
}
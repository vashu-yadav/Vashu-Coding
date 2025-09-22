//practice questions

#include<stdio.h>
void main()
{

    int i =100;
    printf("%d,%d,%d", sizeof("ABC"),sizeof("A"), sizeof(100));
    printf("%d,%d",sizeof("ABC\0\0"));
    printf("%d,%d,%d", sizeof(4*5), sizeof(4*5.0), sizeof(4*5.0f));
}
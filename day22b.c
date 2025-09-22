//practice questions

#include<stdio.h>
void main()
{

    int a= 1,b=2,c=3;
    a=a-- + ++b +--c ;
    b= ++a - ++b + c++;
    c= a++ + ++b +c++;
    printf("%d,%d,%d",a,b,c);
}

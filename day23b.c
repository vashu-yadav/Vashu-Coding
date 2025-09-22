//practice questions

#include<stdio.h>
void main()
{

    int x;
    int b=7;
    x=b>10?b++:b<14?b>>2:++b;
    printf("%d,%d",x,b);
}

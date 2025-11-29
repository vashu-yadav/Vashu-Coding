#include <stdio.h>
void fun(int n)
{
    if (n<=0)
    return;
    printf("%d\n", n);
    fun(n-2);
    printf("%d\n",n);
    fun(n-3);
}
void main(){
    fun(5);
}

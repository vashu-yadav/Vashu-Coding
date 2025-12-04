
#include <stdio.h>

void f(int n)
{
    if(n<=1)
    printf("\n%n",n);
    else {
        printf("\n%d",n);
        f(n/2);
    }
}
    void f(int n)
    { 
        if(n/2)
        f(n/2);
        printf("\n%d",n%2);
    }
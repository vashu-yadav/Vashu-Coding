
#include <stdio.h>  

void A(int n);
void B(int n);

void A(int n)
{
    if(n<=1)
        return;
    printf("\n%d",n);
    B(n-2);
}

void B(int n)
{
    if(n<=2)
        return;
    A(n-3);
    printf("\n%d", n);
}

int main()
{
    A(10);
}

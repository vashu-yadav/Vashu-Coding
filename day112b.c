
#include <stdio.h>

unsigned int foo(unsigned int n, unsigned int r)
{
    if (n > 0)
    return n%r+ foo(n/r,r);
    else
        return 0;
}
void main()
{
    unsigned int n=45,r=2;
    printf("%u",foo(n,r));
    
}
#include <stdio.h>
void main ()
{
    const int a[] = {5,15};

    int *p;
    p=a;
    ++p;
    --*p;
    --p;
    ++*p;
    printf("%d %d\n",a[0],a[1]);
}
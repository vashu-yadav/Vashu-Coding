#include <stdio.h>
void main ()
{
    const char *p="kids";
    // p[0] = 's'; // This line would cause a compilation error
    printf("%s\n",p);
    p="upes";
    printf("%s\n",p);
}
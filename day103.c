//recursion 

#include <stdio.h>

void show(char *p)
{
    if (*p == '\0') 
    return;
    show(p + 1);
    show(p + 1);
    printf("%c\n", *p);
}
void main()
{
    show("man");
}
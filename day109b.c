
#include <stdio.h>
void main ()
{
   int a= 10,b=20;
   int *const p;//pointing to garbage value
   //p=&a; - not allowed, p is uninitialized constant pointer
   int *const p=&a;
   printf("%d\n",*p);
   ++*p; // allowed, modifies value of a
   printf("%d\n",*p);
   //++p; - not allowed, p is constant pointer
   printf("%d %d\n",a,b);
}
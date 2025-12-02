#include <stdio.h>
void main ()
{
    int const arr[]={10,20};
    const int *ptr;
    ptr=arr;
    ++ptr;
   //--*ptr; // not allowed, modifying value pointed to by ptr
    --ptr;
    //    ++*ptr; //noallowed, modifying value pointed to by ptr

   printf("%d %d\n",arr[0],arr[1]);
}
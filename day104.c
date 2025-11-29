// indirect recursion
#include <stdio.h>

int A(int n)
{
    if(n<=1)
        return 1;
    else
        return n*B(n-2);

}
int B(int n) {
    if ( n <=2)
    return n;
    else
    return n+A(n-3);
}
void main (){
    printf("%d\n",A(5));
    printf("%d", B(6));

}
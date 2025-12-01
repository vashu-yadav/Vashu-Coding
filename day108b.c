
#include <stdio.h>

struct mix{
    int a:2;
    int b:3;
    int c:2;
};
void main (){
    struct mix m={6,7,4};
    printf("%d %d %d\n",m.a,m.b,m.c);
}
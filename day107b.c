#include <stdio.h>
int opr(int x,int y){
    if(y==0)
    return x;
    return opr(x^y,(x&y)<<1);
}
void main(){
    printf("%d",opr(12,15));
}

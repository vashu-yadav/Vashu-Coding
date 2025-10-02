//practice questions

#include<stdio.h>
void main(){
    int c,*b,**a,*py,**ppz;
    int x,y,z;
    c=4;
    b=&c;
    a=&b;
    x=c;
    py=b;
    ppz=a;
    **ppz+=1;
    z=**ppz;
    *py+=2;
    y=*py;
    x=x+3;
    printf("%d,%d",c,x+y+z);
}

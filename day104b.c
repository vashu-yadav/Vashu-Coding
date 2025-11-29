#include <stdio.h>
void abc()
{
    auto int a; //local variable
    static int s=3; //static variable(globally)
    a=++s;
    printf("\n%d,%d",a,s);
    if (a<=6)
    abc();
    printf("\n%d,%d",a,s);
}
void main(){
    abc();
    abc();

}
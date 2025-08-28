//Write a program to swap two numbers without using a third variable.



#include <stdio.h>

int main(){
    int a,b;
    printf(" enter two numbers : \n");
    scanf("%d %d", &a,&b);
    // swapping these two numbers without using third variable
    a = a+b;
    b = a-b;
    a=a-b;
    printf(" after swapping two numbers : %d,%d", a,b);
    return 0;
}
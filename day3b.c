//Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main(){
    int a,b; // declaring two numbers
    printf("enter two numbers : \n");
    scanf("%d  %d", &a,&b);

    // swapping two numbers using third variable i.e temp
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf( " after swapping two numbers : %d,%d", a,b);
    return 0;
}
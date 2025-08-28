//write a program to input two numbers and display their sum.

#include<stdio.h>
int main() {
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    if ( b  == 0){
        printf("error  : division by zero is not allowed in c \n");

    }
    else {
        printf(" divison is %d \n", a/b);
        
    }

    return 0;
}
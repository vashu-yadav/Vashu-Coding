//Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>

int main(){
    int a;
    printf(" enter the number : ");
    scanf("%d", &a);
    if(a%2==0){
        printf(" the given number is even ");
    }
    else{
        printf(" the given number is odd ");
    }
    return 0;
}
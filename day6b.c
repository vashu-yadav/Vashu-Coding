//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>


int main(){
    int i; //an integer number
    printf(" enter the number : ");
    scanf("%d", &i);

    if ( i > 0 ){
        printf(" the number is positive ");
    }
    else if (i < 0){
        printf(" the number is negative ");
    }
        else {
        printf(" the number is zero ");
    }
    return 0;
}
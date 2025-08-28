//Write a program to find and display the sum of the first n natural numbers.



#include <stdio.h>

int main(){
    int n; //the first n natural numbers
    printf(" enter the number : \n");
    scanf("%d", &n);
    printf(" the sum of first n natural numbers is : %d", n*(n+1)/2);
    
    return 0;
}
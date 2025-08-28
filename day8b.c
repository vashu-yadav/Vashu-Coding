//write a orogram to input three numbers and find the largest among them using if-else.

#include <stdio.h>

int main(){
    int a,b,c;
    printf(" enter the three numbers :\n");
    scanf("%d %d %d", &a, &b, &c);
    if(a>=b && a>=c){
        printf(" %d the largest number is ", a);
    }
    else if(b>= a && b>= c){
        printf(" %d the greatest number is ", b);
    }
    else{
        printf(" %d the greatest number is ", c);
    }
    

    return 0;
}
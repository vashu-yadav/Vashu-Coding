//write a program to input two numbets and display their sum, difference,product, and quotient.

#include <stdio.h>

int main(){
    float a,b;
    printf("enter two numbers : ");
    scanf("%f %f", &a,&b);

    if (b == 0){
        printf(" second value cannot be zero");
    }
    else {
        printf(" sum is %.2f \n difference is %.2f \n product is %.2f \n quotient is %.2f \n",a+b , a-b , a*b , a/b );
    }
    return 0;
}

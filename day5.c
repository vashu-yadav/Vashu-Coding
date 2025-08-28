//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include<math.h> // for pow function

int main(){
    float principal,rate,time;
    float simpleinterest,compoundinterest;

    // taking input
    scanf("%f %f %f", &principal, &rate , &time);

    simpleinterest = (principal*rate*time)/100;
    compoundinterest = principal*pow((1+rate/100), time) - principal;

    //printing output
    printf("simple interest = %.0f, compound interest=%.2f\n", simpleinterest, compoundinterest);
    
    
    return 0;
}
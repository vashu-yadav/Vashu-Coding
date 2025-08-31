// write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main() {
    float cp, sp, percent;
    scanf("%f %f", &cp, &sp);

    if (sp > cp) {
       
        percent = ((sp - cp) / cp) * 100;


        printf("Profit %.0f%%\n", percent); //for Profit case
    } 
    else if (sp < cp) {
        
        percent = ((cp - sp) / cp) * 100;
        printf("Loss %.0f%%\n", percent);//for Loss case
    } 
    else {
        printf("No Profit No Loss\n");  // No profit, no loss
    }

    return 0;
}

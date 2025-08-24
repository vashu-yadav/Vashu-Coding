#include <stdio.h>

int main(){
    float pi = 3.14;
    float r;
    printf(" enter radius : \n");
    scanf("%f", &r);
    printf(" area of circle is %f \n", pi*r*r*1.0);

    printf("circumference of circle : %f \n", 2*pi*r*1.0);

    
    return 0;
}
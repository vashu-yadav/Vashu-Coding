#include <stdio.h>

int main(){
    int c;// c =celsius
    int f; // f = fahrenheit
    
    
    scanf("%d \n", &c);
    f = (c*9/5)+32;
    printf(" temp in fahrenheit is : %d \n ", f);
    
    return 0;
}
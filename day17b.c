// pattern- pyramid rotated half(180 degree)

#include <stdio.h>

int main(void) {
    int n = 4;   // number of rows (you can take input also)
    
    for (int i = 1; i <= n; i++) {
        // print spaces (n - i)
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // print stars (equal to row number)
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");  // move to next row
    }
    
    return 0;
}

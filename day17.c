// pattern - pyramid 

#include <stdio.h>

int main(void) {
    int n = 5; // or read from input
    for (int i = 0; i < n; i++) {
        // spaces to center the pyramid
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        // stars forming the pyramid, count = 2*i + 1
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

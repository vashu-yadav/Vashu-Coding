//pyramid(centered triangle)

#include <stdio.h>

int main(void) {
    int n = 5; // number of rows

    for (int i = 1; i <= n; i++) {
        // print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // print stars (2*i - 1 stars in each row)
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

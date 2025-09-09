//floyd's triangle

#include <stdio.h>

int main(void) {
    int n = 5; // number of rows
    int num = 1; // start counting from 1

    for (int i = 1; i <= n; i++) {        // rows
        for (int j = 1; j <= i; j++) {    // numbers per row
            printf("%d ", num);
            num++;                        // increment for next number
        }
        printf("\n");
    }

    return 0;
}

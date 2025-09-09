//inverted numeric half pyramid


#include <stdio.h>

int main(void) {
    int n = 5; // number of rows

    for (int i = n; i >= 1; i--) {
        // print numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

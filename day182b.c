#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, min, max;

    printf("How many random numbers? ");
    scanf("%d", &n);
    printf("Enter min and max: ");
    scanf("%d %d", &min, &max);

    if (min > max) {
        printf("Min should not be greater than max.\n");
        return 0;
    }

    srand(time(NULL));  // seed once

    for (int i = 0; i < n; i++) {
        int r = rand() % (max - min + 1) + min;
        printf("%d ", r);
    }
    printf("\n");

    return 0;
}

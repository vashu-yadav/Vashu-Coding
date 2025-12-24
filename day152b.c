#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("How many numbers? ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input\n");
        return 1;
    }

    double *a = malloc(n * sizeof(double));
    if (a == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%lf", &a[i]);
        sum += a[i];
        printf("Running average after %d numbers = %.2f\n",
               i + 1, sum / (i + 1));
    }

    free(a);
    return 0;
}

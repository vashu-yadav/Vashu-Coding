#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *a = malloc(n * sizeof(int));
    if (a == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int max = a[0], min = a[0];
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
        sum += a[i];
    }

    double avg = (double)sum / n;

    printf("Max = %d\n", max);
    printf("Min = %d\n", min);
    printf("Avg = %.2f\n", avg);

    free(a);
    return 0;
}

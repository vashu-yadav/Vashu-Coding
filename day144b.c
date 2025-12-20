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

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    printf("Average = %.2f\n", (double)sum / n);

    free(a);
    return 0;
}

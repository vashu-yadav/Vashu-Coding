#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int (*cmp_fn)(const void *, const void *);

void bubble_sort(void *base, size_t n, size_t size, cmp_fn cmp) {
    char *arr = base;
    for (size_t i = 0; i + 1 < n; i++) {
        int swapped = 0;
        for (size_t j = 0; j + 1 < n - i; j++) {
            void *a = arr + j * size;
            void *b = arr + (j + 1) * size;
            if (cmp(a, b) > 0) {
                char tmp[256];
                if (size > sizeof tmp) {
                    fprintf(stderr, "Size too big in bubble_sort\n");
                    exit(1);
                }
                memcpy(tmp, a, size);
                memcpy(a, b, size);
                memcpy(b, tmp, size);
                swapped = 1;
            }
        }
        if (!swapped) break;
    }
}

int int_cmp(const void *x, const void *y) {
    int a = *(const int *)x;
    int b = *(const int *)y;
    return (a > b) - (a < b);
}

int main(void) {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
        fprintf(stderr, "Invalid n\n");
        return 1;
    }

    int *a = malloc(n * sizeof *a);
    if (!a) {
        perror("malloc");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    bubble_sort(a, n, sizeof(int), int_cmp);

    printf("Sorted: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");

    free(a);
    return 0;
}

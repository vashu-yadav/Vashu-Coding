#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, max_idx = 0;
    printf("Enter number of elements (1-100): ");
    scanf("%d", &n);
    arr = (int*)calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > arr[max_idx]) max_idx = i;
    }
    printf("Largest: %d at index %d\n", arr[max_idx], max_idx);
    free(arr);
    return 0;
}

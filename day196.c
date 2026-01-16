#include <stdio.h>
#include <stdlib.h>

int main() {
    int capacity = 2, count = 0;
    int *arr = malloc(capacity * sizeof(int));
    printf("Initial capacity: %d\n", capacity);
    for (int i = 1; i <= 5; i++) {
        if (count == capacity) {
            capacity *= 2;
            int *temp = realloc(arr, capacity * sizeof(int));
            if (temp) arr = temp;
            printf("Doubled to %d\n", capacity);
        }
        arr[count++] = i * 10;
    }
    for (int i = 0; i < count; i++) printf("%d ", arr[i]);  // 10 20 30 40 50
    printf("\n");
    free(arr);
    return 0;
}

//practice questions

#include <stdio.h>

int main() {
    int n, num;
    scanf("%d", &n);
    int arr[n + 1];  // +1 for the new element

    // Input sorted array
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Input element to insert
    scanf("%d", &num);

    int i, j;

    // Find the correct position for insertion
    for (i = 0; i < n; i++) {
        if (arr[i] > num)
            break;
    }

    // Shift elements to the right
    for (j = n; j > i; j--) {
        arr[j] = arr[j - 1];
    }

    // Insert element
    arr[i] = num;
    n++;

    // Print updated array
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

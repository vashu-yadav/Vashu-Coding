//practice questions

#include <stdio.h>

int main() {
    int n, pos, val;
    int arr[100];

    // Input original array size
    scanf("%d", &n);
    // Input array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Input position and value to insert
    scanf("%d%d", &pos, &val);

    // Shift elements to the right
    for(int i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    // Insert new value
    arr[pos] = val;
    n++; // Update array size

    // Print updated array
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

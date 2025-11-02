//practice questions

#include <stdio.h>

int main() {
    int n, pos;
    int arr[100];

    // Input number of elements
    scanf("%d", &n);
    // Input array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Input the position to delete (0-based)
    scanf("%d", &pos);

    // Shift elements to the left, overwriting the deleted element
    for(int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; // Decrease size after deletion

    // Print the updated array
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

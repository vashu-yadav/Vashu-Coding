//practice questions

#include <stdio.h>

int main() {
    int n, k, arr[100];

    // Input the number of elements
    scanf("%d", &n);
    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Input number of right rotations
    scanf("%d", &k);

    k = k % n;  // For k > n

    // Perform rotation k times
    for (int r = 0; r < k; r++) {
        int last = arr[n-1];
        for (int i = n-1; i > 0; i--) {
            arr[i] = arr[i-1];
        }
        arr[0] = last;
    }

    // Print rotated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

#include <stdio.h>

int findUnique(int *a, int n) {
    int x = 0;
    for (int i = 0; i < n; i++) {
        x ^= a[i];
    }
    return x;
}

int main() {
    int arr[] = {4, 7, 4, 7, 9, 9, 8};
    printf("%d\n", findUnique(arr, 7));
    return 0;
}

#include<stdio.h>


int find_unique(int *arr, int n) {
    int x = 0;
    for (int i = 0; i < n; i++)
        x ^= arr[i];
    return x;
}

int main(void) {
    int arr[] = {2, 3, 5, 4, 5, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int unique = find_unique(arr, n);
    printf("Unique element = %d\n", unique);
    return 0;
}
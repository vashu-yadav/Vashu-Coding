#include<stdio.h>


int main() {
    int a = 5, b = 12;
    int *larger = (a > b) ? &a : &b;  // choose address of larger value

    printf("Larger value = %d\n", *larger);

    // use sizeof to compute number of elements
    int arr[] = {1, 2, 3, 4, 5};
    size_t n = sizeof(arr) / sizeof(arr[0]);
    printf("Array has %zu elements\n", n);

    return 0;
}
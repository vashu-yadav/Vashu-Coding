//practice questions

#include <stdio.h>
#include <limits.h>

int main() {
    int n, arr[100];
    int first, second;

    // Input number of elements
    scanf("%d", &n);
    // Input array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    first = second = INT_MIN;

    // Find the largest and second largest
    for(int i = 0; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    printf("%d\n", second);
    return 0;
}


#include <stdio.h>

void previousGreaterElement(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        int prev = -1;
        for(int j = i - 1; j >= 0; j--) {
            if(arr[j] > arr[i]) {
                prev = arr[j];
                break;
            }
        }
        printf("%d", prev);
        if(i != n - 1)
            printf(", ");
    }
    printf("\n");
}
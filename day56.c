//practice questions

#include <stdio.h>

int main() {
    int n;
    // Read the size of the array
    scanf("%d", &n);
    int arr[n];

    // Read n elements into the array
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print elements of the array
    for(int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if(i < n - 1) {
            printf(" ");
        }
    }
    // Print a period at the end (as shown in Input 2 Example)
    printf(".");

    return 0;
}

//practice questions

#include <stdio.h>

int main() {
    int n, key, found = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i;  // store index if element found
            break;      // stop searching once found
        }
    }

    if (found != -1)
        printf("Found at index %d\n", found);
    else
        printf("-1\n");

    return 0;
}

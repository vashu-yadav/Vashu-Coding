#include <stdio.h>

void countFrequency(int arr[], int n) {
    int visited[n];
    for (int i = 0; i < n; i++) {
        if (visited[i] == 1)      // BUG: visited not initialized
            continue;
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = 1;
                count++;
            }
        }
        printf("%d occurs %d times\n", arr[i], count);
    }
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    countFrequency(arr, n);
    return 0;
}

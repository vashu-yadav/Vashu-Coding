
#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int arr[1000];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    long long sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    int min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
    }

    long long expectedSum = 0;
    if (min == 0) {
        expectedSum = (long long)(n - 1) * (n - 2) / 2;
    } else {
        expectedSum = (long long)(n - 1) * n / 2;
    }

    int repeated = (int)(sum - expectedSum);
    printf("%d\n", repeated);

    return 0;
}

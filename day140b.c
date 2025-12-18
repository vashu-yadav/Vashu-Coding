#include <stdio.h>

int main() {
    int a[] = {10, 45, 3, 99, 56};
    int largest = a[0], second = -1;

    for (int i = 0; i < 5; i++) {
        if (a[i] > largest) {
            second = largest;
            largest = a[i];
        } else if (a[i] > second && a[i] != largest) {
            second = a[i];
        }
    }

    printf("Second largest = %d", second);
    return 0;
}

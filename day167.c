#include<stdio.h>


int main(void) {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Need at least 2 elements.\n");
        return 1;
    }

    int a[100];
    if (n > 100) {
        printf("Max 100 elements allowed.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int max1 = a[0];
    int max2 = a[1];

    if (max2 > max1) {
        int temp = max1;
        max1 = max2;
        max2 = temp;
    }

    for (int i = 2; i < n; i++) {
        if (a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        } else if (a[i] > max2 && a[i] != max1) {
            max2 = a[i];
        }
    }

    if (max1 == max2) {
        printf("All elements are equal, no second largest.\n");
    } else {
        printf("Second largest = %d\n", max2);
    }

    return 0;
}
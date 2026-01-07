#include <stdio.h>

int main(void) {
    int n;

    printf("Enter number of elements (max 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid size.\n");
        return 1;
    }

    int a[100];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int max = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];

    printf("Maximum = %d\n", max);
    return 0;
}

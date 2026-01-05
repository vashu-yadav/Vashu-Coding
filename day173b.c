#include <stdio.h>

int main(void) {
    int n, i;
    long long a = 0, b = 1, c;

    printf("How many Fibonacci terms? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Enter a positive integer.\n");
        return 0;
    }

    printf("Fibonacci: ");
    for (i = 1; i <= n; i++) {
        printf("%lld ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}

#include <stdio.h>

int main() {
    int n;
    long long fact = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial of %d = %lld\n", n, fact);
    return 0;
}

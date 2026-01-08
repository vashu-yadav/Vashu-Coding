#include<stdio.h>

long long fact(int n) {
    if (n <= 1) return 1;
    return n * fact(n - 1);
}

int main(void) {
    int n;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial not defined for negative numbers.\n");
        return 1;
    }

    printf("Factorial of %d = %lld\n", n, fact(n));
    return 0;
}
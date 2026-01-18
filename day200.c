#include <stdio.h>

int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);  // Pure recursion; add memo array for optimization
}

int main() {
    int n;
    printf("Enter n for Fibonacci: ");
    scanf("%d", &n);
    printf("Fib(%d) = %d\n", n, fib(n));
    return 0;
}

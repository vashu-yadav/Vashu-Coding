#include <stdio.h>

unsigned long long fact(int n) {
    if (n <= 1) return 1;
    return n * fact(n - 1);
}

int main() {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Factorial undefined for negatives.\n");
        return 1;
    }
    
    printf("Factorial of %d = %llu\n", n, fact(n));
    return 0;
}

#include <stdio.h>

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int n;
    printf("Enter count: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    
    int g = arr[0];
    for (int i = 1; i < n; i++) {
        g = gcd(g, arr[i]);
    }
    printf("GCD: %d\n", g);
    return 0;
}

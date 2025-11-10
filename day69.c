//practice questions

#include <stdio.h>

int main() {
    int n, i, sum = 0, odd = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += odd;
        odd += 2;
    }
    printf("%d\n", sum);
    return 0;
}

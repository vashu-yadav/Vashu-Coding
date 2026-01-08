#include <stdio.h>

int main(void) {
    int n, temp, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    temp = n;
    if (n < 0) n = -n;   // handle negative

    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }

    printf("Sum of digits of %d = %d\n", temp, sum);
    return 0;
}

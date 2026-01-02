#include <stdio.h>

int sum_of_digits(int n) {
    if (n == 0)
        return 0;
    return n % 10 + sum_of_digits(n / 10);
}

int digital_root(int n) {
    if (n >= 0 && n <= 9)
        return n;
    int s = sum_of_digits(n);
    return digital_root(s);
}

int main(void) {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Enter non-negative only.\n");
        return 1;
    }

    printf("Sum of digits = %d\n", sum_of_digits(n));
    printf("Repeated sum (single digit) = %d\n", digital_root(n));

    return 0;
}

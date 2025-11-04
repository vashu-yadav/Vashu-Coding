//practice questions

#include <stdio.h>
int main() {
    int n, num, first, last, digits = 0, pow = 1;
    scanf("%d", &n);
    num = n;
    last = n % 10;
    while (num >= 10) {
        num /= 10;
        pow *= 10;
        digits++;
    }
    first = num;
    n = n % pow; // remove first digit
    n = n / 10;  // remove last digit
    int res = last * pow + n * 10 + first;
    printf("%d\n", res);
    return 0;
}

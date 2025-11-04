//practice questions


#include <stdio.h>
int main() {
    int n, product = 1, digit, has_odd = 0;
    scanf("%d", &n);
    while(n > 0) {
        digit = n % 10;
        if(digit % 2 != 0) {
            product *= digit;
            has_odd = 1;
        }
        n /= 10;
    }
    if(has_odd)
        printf("%d\n", product);
    else
        printf("1\n");
    return 0;
}

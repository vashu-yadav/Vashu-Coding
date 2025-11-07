//practice questions

#include <stdio.h>

int main() {
    int n, prod = 1, found = 0;
    scanf("%d", &n);
    while(n > 0) {
        int digit = n % 10;
        if(digit % 2 == 1) {
            prod *= digit;
            found = 1;
        }
        n /= 10;
    }
    if(!found) {
        prod = 1;
    }
    printf("%d\n", prod);
    return 0;
}

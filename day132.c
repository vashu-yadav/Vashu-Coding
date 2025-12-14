#include <stdio.h>

int main(void) {
    int a = -5, b = 3, c = 0;
    int x;

    x = a & b ? a | b : a ^ b & ~c;

    printf("x = %d\n", x);
    return 0;
}

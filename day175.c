#include <stdio.h>
#include <string.h>

void generic_swap(void *a, void *b, size_t size) {
    unsigned char temp[size];
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
}

int main(void) {
    int x = 10, y = 20;
    double p = 3.14, q = 2.71;

    printf("Before swap: x=%d, y=%d\n", x, y);
    generic_swap(&x, &y, sizeof(int));
    printf("After swap : x=%d, y=%d\n\n", x, y);

    printf("Before swap: p=%.2f, q=%.2f\n", p, q);
    generic_swap(&p, &q, sizeof(double));
    printf("After swap : p=%.2f, q=%.2f\n", p, q);

    return 0;
}

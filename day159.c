#include<stdio.h>


int main(void) {
    int a = 5, b = 10;
    int max;
    int count = 0;

    max = (a > b) ? a : b;                 // ternary operator
    printf("Max of %d and %d is %d\n", a, b, max);

    // comma operator – runs multiple expressions, returns last
    int result = (count++, count += 2, count * 3);
    printf("count after comma expr = %d, result = %d\n", count, result);

    printf("sizeof(int) = %zu bytes\n", sizeof(int));     // sizeof operator
    printf("sizeof(double) = %zu bytes\n", sizeof(double));

    return 0;
}
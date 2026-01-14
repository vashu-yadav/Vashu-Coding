#include <stdio.h>

int main() {
    int a = 5, b = 10, c = 3;

    int result = a++ + --b * c - (a % c) + (b > c);

    printf("Result = %d\n", result);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
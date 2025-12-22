#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers (0 or 1): ");
    scanf("%d %d", &a, &b);

    printf("a && b = %d\n", a && b);  // logical AND
    printf("a || b = %d\n", a || b);  // logical OR
    printf("!a    = %d\n", !a);       // logical NOT
    printf("!b    = %d\n", !b);

    return 0;
}

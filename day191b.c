#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if (n > 0 && (n & (n - 1)) == 0)
        printf("Power of 2\n");
    else
        printf("Not a power of 2\n");

    return 0;
}

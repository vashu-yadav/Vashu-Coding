#include <stdio.h>

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n % 8 == 0) {
        printf("%d is divisible by 8\n", n);
    } else if (n % 5 == 0) {
        printf("%d is divisible by 5\n", n);
    } else {
        printf("Not divisible by 5 or 8\n");
    }

    return 0;
}

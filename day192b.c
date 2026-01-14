#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Square: %d\n", n * n);
    printf("Cube: %d\n", n * n * n);

    printf("Even or Odd: %s\n", (n % 2 == 0) ? "Even" : "Odd");

    printf("Positive / Negative / Zero: ");
    printf("%s\n",
           (n > 0) ? "Positive" :
           (n < 0) ? "Negative" : "Zero");

    return 0;
}

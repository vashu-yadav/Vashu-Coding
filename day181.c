#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("%d is greater\n", num1);
    } else if (num2 > num1) {
        printf("%d is greater\n", num2);
    } else {
        printf("Both numbers are equal\n");
    }

    return 0;
}
#include <stdio.h>

int main(void) {
    double a, b;
    char op;

    printf("Enter expression (e.g. 10 + 20): ");
    scanf("%lf %c %lf", &a, &op, &b);

    switch (op) {
        case '+': printf("Result = %.2f\n", a + b); break;
        case '-': printf("Result = %.2f\n", a - b); break;
        case '*': printf("Result = %.2f\n", a * b); break;
        case '/':
            if (b == 0)
                printf("Error: division by zero!\n");
            else
                printf("Result = %.2f\n", a / b);
            break;
        default: printf("Invalid operator.\n");
    }

    return 0;
}

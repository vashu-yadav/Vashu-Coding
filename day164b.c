#include <stdio.h>

void add(float a, float b) { printf("Sum = %.2f\n", a + b); }
void sub(float a, float b) { printf("Difference = %.2f\n", a - b); }
void mul(float a, float b) { printf("Product = %.2f\n", a * b); }
void div(float a, float b) {
    if (b == 0) printf("Division by zero not allowed\n");
    else printf("Quotient = %.2f\n", a / b);
}

int main() {
    int choice;
    float x, y;

    do {
        printf("\n1.Add  2.Sub  3.Mul  4.Div  0.Exit\n");
        scanf("%d", &choice);

        if (choice == 0) break;

        printf("Enter two numbers: ");
        scanf("%f %f", &x, &y);

        switch (choice) {
            case 1: add(x, y); break;
            case 2: sub(x, y); break;
            case 3: mul(x, y); break;
            case 4: div(x, y); break;
            default: printf("Invalid choice\n");
        }
    } while (1);

    return 0;
}

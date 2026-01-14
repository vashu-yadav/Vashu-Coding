#include <stdio.h>

int main() {
    float salary;
    printf("Enter salary: ");
    scanf("%f", &salary);

    float tax = 0;

    if (salary > 500000 && salary <= 1000000)
        tax += salary * 0.10;
    else if (salary > 1000000)
        tax += salary * 0.20;

    printf("Tax to pay: %.2f\n", tax);
    printf("Final salary: %.2f\n", salary -= tax);

    return 0;
}

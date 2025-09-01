//Write a program to calculate an electricity bill based on units consumed.

#include <stdio.h>

int main() {
    int units;
    int bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    bill = units * 5;  // ₹5 per unit

    printf("Bill: ₹%d\n", bill);

    return 0;
}

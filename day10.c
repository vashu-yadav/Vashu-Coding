//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main() {
    int a, b, c;

    // Input three sides
    scanf("%d %d %d", &a, &b, &c);

    // First check if it forms a valid triangle
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Equilateral");
        }
        else if (a == b || b == c || a == c) {
            printf("Isosceles");
        }
        else {
            printf("Scalene");
        }
    }
    else {
        printf("Not a valid triangle");
    }

    return 0;
}

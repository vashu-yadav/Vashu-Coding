//Write a program to assign grades based on a percentage input.

#include <stdio.h>

int main() {
    int percentage;

    // Input percentage
    scanf("%d", &percentage);

    if (percentage >= 90) {
        printf("Grade A");
    } 
    else if (percentage >= 80) {
        printf("Grade B");
    } 
    else if (percentage >= 70) {
        printf("Grade C");
    } 
    else if (percentage >= 60) {
        printf("Grade D");
    } 
    else {
        printf("Grade F");
    }

    return 0;
}

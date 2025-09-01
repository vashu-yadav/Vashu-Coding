// Write a program to calculate a library fine based on late days.

#include <stdio.h>

int main() {
    int late_days;
    int fine = 0;

    printf("Enter the number of late days: ");
    scanf("%d", &late_days);

    if (late_days <= 0) {
        fine = 0;
    } 
    else if (late_days <= 5) {
        fine = late_days * 1; // ₹1 per day
    } 
    else if (late_days <= 10) {
        fine = (5 * 1) + ((late_days - 5) * 2); // first 5 days ₹1, next days ₹2
    } 
    else {
        fine = (5 * 1) + (5 * 2) + ((late_days - 10) * 5); // beyond 10 days ₹5 per day
    }

    printf("Total Fine: ₹%d\n", fine);

    return 0;
}

#include<stdio.h>

#include <limits.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int a;
    int largest = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a);
        if (a > largest) {
            second = largest;
            largest = a;
        } else if (a > second && a < largest) {
            second = a;
        }
    }
    if (second == INT_MIN)
        printf("No second largest (all elements equal or single element)\n");
    else
        printf("Largest = %d, Second largest = %d\n", largest, second);
    return 0;
}
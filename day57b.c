//practice questions

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    double sum = 0.0;
    for(int i = 1; i <= n; i++) {
        double numerator = 2 * i;
        double denominator = 4 + 3 * (i - 1);
        sum += numerator / denominator;
    }
    printf("Approximate sum: %.2f\n", sum);
    return 0;
}

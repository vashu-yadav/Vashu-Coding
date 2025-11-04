//practice questions

#include <stdio.h>
int main() {
    int n;
    float sum = 0.0, num = 1.0, den = 1.0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        sum += num/den;
        num += 2;
        den += 2;
    }
    printf("%.2f\n", sum);
    return 0;
}

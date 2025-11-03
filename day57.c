//practice questions

#include <stdio.h>

int main() {
    int n, x, max, min;
    scanf("%d", &n);
    scanf("%d", &x);
    max = min = x;

    for(int i = 1; i < n; i++) {
        scanf("%d", &x);
        if(x > max) max = x;
        if(x < min) min = x;
    }

    printf("Max=%d, Min=%d", max, min);
    return 0;
}

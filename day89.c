
#include <stdio.h>
#include <math.h>

int pivotInteger(int n) {
    int total = n * (n + 1) / 2;
    int x = (int) sqrt(total);
    if (x * x == total)
        return x;
    else
        return -1;
}

int main() {
    int n = 8;
    int pivot = pivotInteger(n);
    printf("%d\n", pivot);
    return 0;
}

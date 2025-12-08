#include <stdio.h>

int fun(int *p, int n) {
    int x = 0;
    while(n--) {
        x = x ^ *p;
        p++;
    }
    return x;
}

int main() {
    int a[] = {5, 7, 5, 7, 9};
    printf("%d\n", fun(a, 5));
    return 0;
}

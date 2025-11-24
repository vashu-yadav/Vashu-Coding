#include <stdio.h>

int x, y;   // global variables

void p(int *n) {
    x = (*n + 2) / (*n - 3);
}

void Q() {
    int x, y;   // local variables
    x = 3;
    y = 4;
    p(&y);      // pass-by-reference using pointer
    printf("%d\n", x);   // prints local x = 3
}

int main() {
    x = 7;
    y = 8;
    Q();
    printf("%d\n", x);  // prints modified global x
    return 0;
}

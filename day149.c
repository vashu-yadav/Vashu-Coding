#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;          // & gives address of x
    *p = *p + 5;          // * accesses/modifies value at that address

    printf("x = %d\n", x);     // 15
    printf("p points to %p\n", (void*)p);
    return 0;
}

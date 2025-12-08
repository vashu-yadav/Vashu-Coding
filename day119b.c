#include <stdio.h>

int main() {
    char *p = "Hello World";
    char q[] = "Hello World";

    printf("%zu %zu\n", sizeof p, sizeof *p);
    printf("%zu %zu\n", sizeof q, sizeof *q);

    return 0;
}

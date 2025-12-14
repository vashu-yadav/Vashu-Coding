#include <stdio.h>

int main(void) {
    int i = 1, j = 2, k = 3;
    int r;

    r = i++ + ++j * k-- - --i, j += i++ + k, k = j-- - i++;

    printf("i = %d, j = %d, k = %d, r = %d\n", i, j, k, r);
    return 0;
}

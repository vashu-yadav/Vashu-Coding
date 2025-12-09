#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4};
    int *p = arr;
    printf("%d %d %d\n", *p, *(p + 1), *p++);
    return 0;
}

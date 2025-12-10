#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;

    printf("%d %d %d", *p++, *++p, *(p+1));
    return 0;
}

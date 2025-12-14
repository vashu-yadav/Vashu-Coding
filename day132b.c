#include<stdio.h>


int main(void) {
    int x = -1;
    unsigned int y = 1u;
    int n = sizeof(int) * 8 - 1;

    int a = (x >> 1) < 0;
    unsigned int b = (y << n) >> n;
    unsigned int c = (y << n) >> (n - 1);

    printf("a = %d, b = %u, c = %u\n", a, b, c);
    return 0;
}
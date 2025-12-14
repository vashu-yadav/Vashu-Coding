#include <stdio.h>

int main(void) {
    unsigned int x = 0xF0;      // 11110000
    unsigned int y = 0x0F;      // 00001111
    unsigned int z = 5;

    unsigned int a = x & y == z;
    unsigned int b = x & (y == z);
    unsigned int c = (x & y) == z;

    printf("%u %u %u\n", a, b, c);
    return 0;
}

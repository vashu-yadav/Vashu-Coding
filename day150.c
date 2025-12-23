#include <stdio.h>

int main() {
    unsigned int flags = 0;      // 0000
    unsigned int READ  = 1 << 0; // 0001
    unsigned int WRITE = 1 << 1; // 0010

    // set READ and WRITE bits
    flags = READ | WRITE;        // 0011

    // test if WRITE is set
    if (flags & WRITE) {
        printf("WRITE enabled\n");
    }

    // toggle READ bit
    flags ^= READ;               // 0011 ^ 0001 = 0010
    printf("flags = %u\n", flags);
    return 0;
}

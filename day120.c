#include <stdio.h>

int countSetBits(unsigned int n) {
    int cnt = 0;
    while (n > 0) {
        n = n & (n - 1);
        cnt++;
    }
    return cnt;
}

int main() {
    unsigned int x = 29;  // binary 11101
    printf("%d\n", countSetBits(x));
    return 0;
}


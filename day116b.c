#include <stdio.h>

struct test {
    unsigned int x:3;
    unsigned int y:5;
    unsigned int z:4;
};

int main() {
    struct test t = {5, 17, 9};
    printf("%u %u %u\n", t.x, t.y, t.z);
    return 0;
}

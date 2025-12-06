
#include <stdio.h>

struct inner {
    char c;
    int x;
};

struct outer {
    int a;
    struct inner b;
    char d;
};

int main() {
    struct outer s = {5, {'A', 12}, 'Z'};
    printf("%lu %d\n", sizeof(s), s.b.x + s.a);
    return 0;
}

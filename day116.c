
#include <stdio.h>

typedef struct {
    int a;
    int b;
} pair;

int main() {
    pair p[3] = { {1,2}, {3,4}, {5,6} };
    pair *q = p;

    printf("%d ", (++q)->a);
    printf("%d ", (q+1)->b);
    printf("%d\n", (--q)->b);

    return 0;
}

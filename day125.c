#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p[] = { {1, 2}, {3, 4}, {5, 6} };
    struct Point *q = p;

    q++;                 // Line 1
    q->x = 10;           // Line 2

    printf("%d %d %d %d\n",
           p[0].x, p[0].y,
           p[1].x, p[1].y);

    return 0;
}

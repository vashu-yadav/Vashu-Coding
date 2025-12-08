
#include <stdio.h>


void fx() {
    int c = getchar();
    if (c != '\n') {
        fx();
        putchar(c);
    }
}

int main() {
    fx();
    return 0;
}
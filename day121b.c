#include<stdio.h>


int main() {
    int i, j = 0;
    for (i = 0; i < 3; i++) {
        if (i == 1)
            continue;
        j += i;
    }
    printf("%d\n", j);
    return 0;
}
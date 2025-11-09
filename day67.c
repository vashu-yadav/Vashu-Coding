//practice questions

#include <stdio.h>

int main() {
    int n, binary = 0, place = 1;
    scanf("%d", &n);
    while(n > 0) {
        binary = binary + (n % 2) * place;
        n = n / 2;
        place *= 10;
    }
    printf("%d\n", binary);
    return 0;
}

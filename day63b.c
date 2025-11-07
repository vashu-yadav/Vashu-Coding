//practice questions


#include <stdio.h>

int main() {
    long n, place = 1, result = 0;
    scanf("%ld", &n);
    while(n > 0) {
        int bit = n % 10;
        if(bit == 1)
            result += 0 * place;
        else
            result += 1 * place;
        place *= 10;
        n /= 10;
    }
    printf("%ld\n", result);
    return 0;
}

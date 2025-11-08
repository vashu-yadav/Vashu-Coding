//practice questions

#include <stdio.h>
int main() {
    int a, b, hcf = 1;
    scanf("%d %d", &a, &b);
    int min = a < b ? a : b;

    for(int i = 1; i <= min; i++) {
        if(a % i == 0 && b % i == 0)
            hcf = i;
    }
    printf("%d\n", hcf);
    return 0;
}

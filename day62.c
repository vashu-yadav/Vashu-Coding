//practice questions

#include <stdio.h>

int main() {
    int a, b, max, lcm;
    scanf("%d %d", &a, &b);
    max = (a > b) ? a : b;
    lcm = max;
    while(1) {
        if(lcm % a == 0 && lcm % b == 0) {
            printf("%d\n", lcm);
            break;
        }
        lcm++;
    }
    return 0;
}

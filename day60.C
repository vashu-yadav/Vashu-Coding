//practice questions

#include <stdio.h>
int main() {
    int a, b, max, lcm;
    scanf("%d %d", &a, &b);
    // Start from the maximum of a and b, and loop until LCM is found
    max = (a > b) ? a : b;
    while(1) {
        if(max % a == 0 && max % b == 0) {
            lcm = max;
            break;
        }
        max++;
    }
    printf("%d\n", lcm);
    return 0;
}

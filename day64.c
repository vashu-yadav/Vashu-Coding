//practice questions

#include <stdio.h>
int main() {
    int num, original, digit, sum = 0, n_digits = 0, temp;

    scanf("%d", &num);
    original = num;
    temp = num;
    // Count number of digits
    while(temp > 0) {
        n_digits++;
        temp /= 10;
    }
    temp = num;
    // Calculate sum of powers of digits
    while(temp > 0) {
        digit = temp % 10;
        int power = 1;
        for(int i = 0; i < n_digits; i++) {
            power *= digit;
        }
        sum += power;
        temp /= 10;
    }
    if(sum == original)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
    return 0;
}

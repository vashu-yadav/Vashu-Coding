//practice questions

#include <stdio.h>
int main() {
    int n, rem, rev = 0, temp, pow = 1;
    scanf("%d", &n);
    temp = n;
    // Reverse the binary number to print the 1's complement in correct order
    while(temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    while(rev > 0) {
        rem = rev % 10;
        if(rem == 1)
            printf("0");
        else
            printf("1");
        rev /=10;
    }
    printf("\n");
    return 0;
}

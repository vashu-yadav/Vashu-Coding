//practice questions

#include <stdio.h>

int main() {
    int n, num, rev = 0;
    scanf("%d", &n);
    num = n;
    while(num > 0) {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    if(rev == n)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");
    return 0;
}

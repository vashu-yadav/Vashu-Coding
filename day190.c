#include <stdio.h>
#include <string.h>

int isPalindrome(char *str, int len) {
    int left = 0, right = len - 1;
    while (left < right) {
        if (str[left++] != str[right--]) return 0;
    }
    return 1;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    if (isPalindrome(str, len)) {
        printf("'%s' is a palindrome.\n", str);
    } else {
        printf("'%s' is not a palindrome.\n", str);
    }
    return 0;
}

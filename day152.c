#include <stdio.h>
#include <string.h>

int is_pal(const char *s, int l, int r) {
    if (l >= r) return 1;
    if (s[l] != s[r]) return 0;
    return is_pal(s, l + 1, r - 1);
}

int main(void) {
    char str[100];

    printf("Enter a string: ");
    if (scanf("%99s", str) != 1) {
        printf("Input error\n");
        return 1;
    }

    if (is_pal(str, 0, (int)strlen(str) - 1))
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}

#include <stdio.h>
#include <string.h>

void swap_char(char *a, char *b) {
    char t = *a;
    *a = *b;
    *b = t;
}

void permute(char *str, int l, int r) {
    if (l == r) {
        printf("%s\n", str);
        return;
    }
    for (int i = l; i <= r; i++) {
        swap_char(&str[l], &str[i]);
        permute(str, l + 1, r);
        swap_char(&str[l], &str[i]);  // backtrack
    }
}

int main(void) {
    char str[] = "ABC";
    int n = (int)strlen(str);
    permute(str, 0, n - 1);
    return 0;
}

#include <stdio.h>

int strLength(char *str) {
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

int main() {
    char str[] = "Hello, C!";
    printf("Length of '%s' is %d\n", str, strLength(str));
    return 0;
}

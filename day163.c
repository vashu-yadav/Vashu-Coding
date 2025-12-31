#include <stdio.h>

int stringLength(char *s) {
    int count = 0;
    while (*s++) count++;
    return count;
}

int main() {
    char str[100];
    gets(str);

    printf("Length = %d\n", stringLength(str));
    return 0;
}

#include <stdio.h>

int main(void) {
    char s[100];
    int len = 0;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    while (s[len] != '\0' && s[len] != '\n')
        len++;

    printf("Reversed: ");
    for (int i = len - 1; i >= 0; i--)
        putchar(s[i]);
    putchar('\n');

    return 0;
}

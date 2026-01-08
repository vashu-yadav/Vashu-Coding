#include <stdio.h>
#include <string.h>

int main(void) {
    char s[100];
    int i = 0, j;

    printf("Enter a string: ");
    scanf("%99s", s);

    j = strlen(s) - 1;

    int is_pal = 1;
    while (i < j) {
        if (s[i] != s[j]) {
            is_pal = 0;
            break;
        }
        i++;
        j--;
    }

    if (is_pal)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}

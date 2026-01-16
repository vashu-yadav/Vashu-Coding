#include <stdio.h>
#include <string.h>

void reverse(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

int main() {
    char text[] = "C-Practice";
    printf("Before: %s\n", text);
    reverse(text);
    printf("After: %s\n", text);  // citcarP-C
    return 0;
}

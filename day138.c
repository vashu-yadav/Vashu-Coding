#include <stdio.h>

void removeDuplicates(char s[]) {
    int hash[256] = {0};
    int write = 0;

    for (int read = 0; s[read] != '\0'; read++) {
        unsigned char ch = s[read];
        if (!hash[ch]) {
            hash[ch] = 1;
            s[write++] = s[read];
        }
    }
    s[write] = '\0';
}

int main() {
    char s[200];

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    // remove trailing newline if present
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] == '\n') {
            s[i] = '\0';
            break;
        }
        i++;
    }

    removeDuplicates(s);
    printf("After removing duplicates: %s\n", s);
    return 0;
}

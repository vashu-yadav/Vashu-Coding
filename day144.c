#include <stdio.h>

int main(void) {
    char s[201];
    int freq[256] = {0};

    printf("Enter a line: ");
    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)s[i];
        freq[ch]++;
    }

    printf("Character frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0 && i != '\n') {
            printf("'%c' -> %d\n", i, freq[i]);
        }
    }

    return 0;
}

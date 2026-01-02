#include <stdio.h>
#include <string.h>

int main(void) {
    char line[200];

    printf("Enter a sentence:\n");
    fgets(line, sizeof(line), stdin);

    int maxLen = 0, curLen = 0;
    int maxStart = 0, curStart = 0;

    for (int i = 0; ; i++) {
        char c = line[i];

        if (c != ' ' && c != '\t' && c != '\n' && c != '\0') {
            if (curLen == 0) {
                curStart = i;
            }
            curLen++;
        } else {
            if (curLen > maxLen) {
                maxLen = curLen;
                maxStart = curStart;
            }
            curLen = 0;
        }

        if (c == '\0')
            break;
    }

    if (maxLen == 0) {
        printf("No word found.\n");
        return 0;
    }

    printf("Longest word: ");
    for (int i = 0; i < maxLen; i++) {
        putchar(line[maxStart + i]);
    }
    printf("\nLength = %d\n", maxLen);

    return 0;
}

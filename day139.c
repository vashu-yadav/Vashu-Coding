#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int chars = 0, words = 0, lines = 0;
    fp = fopen("data.txt", "r");

    if (fp == NULL) {
        printf("File not found\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == ' ' || ch == '\n')
            words++;
        if (ch == '\n')
            lines++;
    }

    fclose(fp);
    printf("Characters: %d\nWords: %d\nLines: %d\n",
            chars, words + 1, lines);

    return 0;
}

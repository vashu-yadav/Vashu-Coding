
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int char_count = 0, word_count = 0, line_count = 0, in_word = 0;

    fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        char_count++;
        if (ch == '\n') line_count++;
        if (isspace(ch)) {
            in_word = 0;
        } else if (!in_word) {
            word_count++;
            in_word = 1;
        }
    }

    fclose(fp);
    printf("Characters: %d\nWords: %d\nLines: %d\n", char_count, word_count, line_count);
    return 0;
}

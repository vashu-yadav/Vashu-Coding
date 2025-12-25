#include<stdio.h>

#include <string.h>

int main(int argc, char *argv[]) {
    char src[256], dest[256];

    if (argc < 2) {
        printf("Usage: %s <source.c>\n", argv[0]);
        return 1;
    }

    strncpy(src, argv[1], sizeof(src) - 1);
    src[sizeof(src) - 1] = '\0';

    snprintf(dest, sizeof(dest), "%s.bak", src);

    FILE *fin = fopen(src, "r");
    if (!fin) {
        perror("Cannot open source file");
        return 1;
    }

    FILE *fout = fopen(dest, "w");
    if (!fout) {
        perror("Cannot open destination file");
        fclose(fin);
        return 1;
    }

    int ch;
    while ((ch = fgetc(fin)) != EOF) {
        fputc(ch, fout);
    }

    fclose(fin);
    fclose(fout);
    printf("Copied %s -> %s\n", src, dest);
    return 0;
}
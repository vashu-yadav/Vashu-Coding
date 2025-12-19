#include<stdio.h>


int main(void) {
    FILE *src, *dest;
    char srcName[100], destName[100];
    int ch;

    printf("Enter source filename: ");
    scanf("%99s", srcName);
    printf("Enter destination filename: ");
    scanf("%99s", destName);

    src = fopen(srcName, "r");
    if (src == NULL) {
        printf("Cannot open source file.\n");
        return 1;
    }

    dest = fopen(destName, "w");
    if (dest == NULL) {
        printf("Cannot open destination file.\n");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully.\n");
    return 0;
}
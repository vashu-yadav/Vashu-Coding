#include<stdio.h>

#include <stdlib.h>

int main(void) {
    char srcName[100], destName[100];
    FILE *src, *dest;
    char buffer[256];
    int line = 1;

    printf("Source file: ");
    scanf("%99s", srcName);
    printf("Destination file: ");
    scanf("%99s", destName);

    src = fopen(srcName, "r");
    if (src == NULL) {
        printf("Cannot open source file\n");
        return 1;
    }

    dest = fopen(destName, "w");
    if (dest == NULL) {
        printf("Cannot open destination file\n");
        fclose(src);
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), src) != NULL) {
        fprintf(dest, "%4d: %s", line++, buffer);
    }

    fclose(src);
    fclose(dest);

    printf("Copied with line numbers.\n");
    return 0;
}
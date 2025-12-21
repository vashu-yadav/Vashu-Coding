#include<stdio.h>
#include <stdlib.h>

int main(void) {
    char srcName[100], destName[100];

    printf("Enter source file name: ");
    scanf("%99s", srcName);
    printf("Enter destination file name: ");
    scanf("%99s", destName);

    FILE *src = fopen(srcName, "r");
    if (src == NULL) {
        printf("Cannot open source file.\n");
        return 1;
    }

    FILE *dest = fopen(destName, "w");
    if (dest == NULL) {
        printf("Cannot open destination file.\n");
        fclose(src);
        return 1;
    }

    char line[512];
    int lineNo = 1;

    while (fgets(line, sizeof(line), src) != NULL) {
        fprintf(dest, "%4d: %s", lineNo++, line);
    }

    fclose(src);
    fclose(dest);

    printf("File copied with line numbers.\n");
    return 0;
}

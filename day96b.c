
#include <stdio.h>

int main() {
    char src_fname[100], dest_fname[100];
    FILE *src, *dest;
    int ch;

    printf("Enter source filename: ");
    scanf("%s", src_fname);

    printf("Enter destination filename: ");
    scanf("%s", dest_fname);

    src = fopen(src_fname, "r");
    if (src == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    dest = fopen(dest_fname, "w");
    if (dest == NULL) {
        printf("Error opening destination file!\n");
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


#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fin = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");
    if (fin == NULL || fout == NULL) {
        printf("Error opening files.\n");
        return 1;
    }
    char ch;
    while ((ch = fgetc(fin)) != EOF) {
        fputc(toupper(ch), fout);
    }
    fclose(fin);
    fclose(fout);
    return 0;
}

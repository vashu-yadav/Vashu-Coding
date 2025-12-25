#include <stdio.h>
#include <ctype.h>

int main(void) {
    char filename[256];
    printf("Enter file name to convert to UPPERCASE: ");
    if (scanf("%255s", filename) != 1) return 1;

    FILE *fp = fopen(filename, "rb+");
    if (!fp) {
        perror("Error opening file");
        return 1;
    }

    int ch;
    long pos;
    while ((ch = fgetc(fp)) != EOF) {
        pos = ftell(fp);
        if (pos == -1L) {
            perror("ftell failed");
            fclose(fp);
            return 1;
        }
        ch = toupper(ch);
        if (fseek(fp, pos - 1, SEEK_SET) != 0) {
            perror("fseek failed");
            fclose(fp);
            return 1;
        }
        fputc(ch, fp);
        if (fseek(fp, pos, SEEK_SET) != 0) {
            perror("fseek restore failed");
            fclose(fp);
            return 1;
        }
    }

    fclose(fp);
    printf("Conversion done.\n");
    return 0;
}

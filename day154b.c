#include <stdio.h>
#include <stdlib.h>

void print_last_n_lines(const char *filename, int n) {
    FILE *fp = fopen(filename, "r");
    if (!fp) {
        perror("Error opening file");
        return;
    }

    if (fseek(fp, 0, SEEK_END) != 0) {
        perror("fseek failed");
        fclose(fp);
        return;
    }

    long pos = ftell(fp);
    if (pos == -1L) {
        perror("ftell failed");
        fclose(fp);
        return;
    }

    int lines = 0;
    while (pos > 0 && lines <= n) {
        if (fseek(fp, --pos, SEEK_SET) != 0) {
            perror("fseek in loop failed");
            fclose(fp);
            return;
        }
        int ch = fgetc(fp);
        if (ch == '\n')
            lines++;
    }

    int c;
    while ((c = fgetc(fp)) != EOF) {
        putchar(c);
    }

    fclose(fp);
}

int main(void) {
    char filename[256];
    int n;

    printf("Enter file name: ");
    if (scanf("%255s", filename) != 1) return 1;

    printf("Show last how many lines? ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid N\n");
        return 1;
    }

    print_last_n_lines(filename, n);
    return 0;
}

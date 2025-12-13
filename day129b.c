#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("gate.txt", "w+");

    fputs("GATE2024", fp);

    rewind(fp);   // VERY IMPORTANT

    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);
    return 0;
}

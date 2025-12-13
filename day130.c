#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int count = 0;

    fp = fopen("gate.txt", "r");

    while ((ch = fgetc(fp)) != EOF) {
        count++;
    }

    printf("%d", count);
    fclose(fp);
    return 0;
}

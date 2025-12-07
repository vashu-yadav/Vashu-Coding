#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    fp = fopen("output.txt", "w");   // write mode
    if (fp == NULL) {
        printf("File not created!\n");
        return 1;
    }

    printf("Enter text to write: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    fclose(fp);
    printf("Data written successfully.\n");

    return 0;
}

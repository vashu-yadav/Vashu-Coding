
#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[100];
    int age;

    FILE *fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    // write to file
    fprintf(fp, "Name: %sAge: %d\n", name, age);

    fclose(fp);

    printf("Data saved to info.txt successfully.\n");

    return 0;
}
